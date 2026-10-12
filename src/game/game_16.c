#include "game.h"

/* 0896CC34 */
rv_t func_0896CC34(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0896CC34:;
    sp = sp - 64;
    v1 = a1 + 0;
    s1 = a0 + 0;
    v1 = v1 ^ 0xffff;
    v0 = s1 ^ 0x1;
    v0 = v0 < 0x1u;
    s0 = v1 < 0x1u;
    a3 = D_08ADB33C - (-19652);
    t1 = D_08ADB44C - (-19380);
    t3 = D_08ADB370 - (-19600);
    a0 = D_08C28778 - (-30856);
    v0 = s0 & v0;
    a3 = a3 - 19652;
    s2 = 3;
    t1 = t1 - 19380;
    t3 = t3 - 19600;
    a2 = 17;
    t0 = 26;
    t2 = 11;
    a0 = a0 - 30856;
    cnd_ = v0 != 0;
    a1 = 22;
    if (cnd_) { goto L_0896CCE4; }
    goto L_0896CC9C;
L_0896CC9C:;
    v0 = s1 < 0x1u;
    goto L_0896CCA0;
L_0896CCA0:;
    a0 = D_08C287A4 - (-30812);
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    a0 = a0 - 30812;
    if (cnd_) { goto L_0896CCC8; }
    goto L_0896CCB0;
L_0896CCB0:;
    goto L_0896CCB4;
L_0896CCB4:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_0896CCC8:;
    { u64 r_ = func_088C2168(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896CCD0;
L_0896CCD0:;
    a0 = D_08C28778 - (-30856);
    a0 = a0 - 30856;
    { u64 r_ = func_088C2168(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896CCDC;
L_0896CCDC:;
    goto L_0896CCB4;
L_0896CCE4:;
    v0 = 16;
    ST8(sp+16, v0);
    v1 = 19;
    v0 = 6;
    ST8(sp+17, v1);
    ST8(sp+32, v0);
    ST8(sp+33, s2);
    v0 = LD_U16(sp+16);
    v1 = LD_U16(sp+32);
    ST32(sp+8, 0);
    ST16(sp, v0);
    ST16(sp+4, v1);
    ST32(sp+12, 0);
    { rv_t r_ = func_088C200C(a0, a1, a2, a3, t0, t1, t2, t3, sp); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896CD1C;
L_0896CD1C:;
    v0 = 15;
    ST8(sp+32, v0);
    v1 = 18;
    v0 = 5;
    ST8(sp+33, v1);
    a3 = D_08ADB480 - (-19328);
    t1 = D_08ADB590 - (-19056);
    ST8(sp+16, v0);
    t3 = D_08ADB4B4 - (-19276);
    a0 = D_08C287A4 - (-30812);
    ST8(sp+17, s2);
    a3 = a3 - 19328;
    t1 = t1 - 19056;
    v0 = LD_U16(sp+32);
    v1 = LD_U16(sp+16);
    t3 = t3 - 19276;
    a0 = a0 - 30812;
    a1 = 21;
    a2 = 17;
    t0 = 26;
    t2 = 11;
    ST16(sp, v0);
    ST16(sp+4, v1);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    { rv_t r_ = func_088C200C(a0, a1, a2, a3, t0, t1, t2, t3, sp); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896CD84;
L_0896CD84:;
    v0 = s1 < 0x1u;
    goto L_0896CCA0;
}

/* 0896CD8C */
rv_t func_0896CD8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896CD8C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0896CC34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896CDA0;
L_0896CDA0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0896CDAC */
rv_t func_0896CDAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896CDAC:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0896CC34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896CDC0;
L_0896CDC0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0896CDCC */
rv_t func_0896CDCC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0896CDCC:;
    sp = sp - 48;
    s1 = a0 + 0;
    a0 = sp + 0;
    s0 = a1 + 0;
    f20 = f12;
    ST32(sp, 0);
    v0 = func_0881B2B8(a0, t1, t2, t3);
    goto L_0896CDF8;
L_0896CDF8:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    cnd_ = s1 == 0;
    a2 = sp + 0;
    if (cnd_) { goto L_0896CE24; }
    goto L_0896CE08;
L_0896CE08:;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_0896CE10;
L_0896CE10:;
    cnd_ = v0 == 0;
    v1 = LD32(sp);
    if (cnd_) { goto L_0896CE24; }
    goto L_0896CE18;
L_0896CE18:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { f20 = BITSF(LD32(sp+4)); goto L_0896CE24; }
    goto L_0896CE24;
L_0896CE24:;
    a0 = sp + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896CE2C;
L_0896CE2C:;
    f0 = f20;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 0896CE48 */
u32 func_0896CE48(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0896CE48:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = sp + 0;
    s0 = a1 + 0;
    s2 = a2 + 0;
    ST32(sp, 0);
    v0 = func_0881B2B8(a0, t1, t2, t3);
    goto L_0896CE74;
L_0896CE74:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    cnd_ = s1 == 0;
    a2 = sp + 0;
    if (cnd_) { goto L_0896CE9C; }
    goto L_0896CE84;
L_0896CE84:;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_0896CE8C;
L_0896CE8C:;
    cnd_ = v0 == 0;
    v1 = LD32(sp);
    if (cnd_) { goto L_0896CE9C; }
    goto L_0896CE94;
L_0896CE94:;
    v0 = LD32(sp+4);
    if (v1 == 0) s2 = v0;
    goto L_0896CE9C;
L_0896CE9C:;
    a0 = sp + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896CEA4;
L_0896CEA4:;
    v0 = s2 + 0;
    sp = sp + 32;
    return v0;
}

/* 0896CEC0 */
u64 func_0896CEC0(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0896CEC0:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = sp + 0;
    s0 = a1 + 0;
    s2 = a2 + 0;
    ST32(sp, 0);
    v0 = func_0881B2B8(a0, t1, t2, t3);
    goto L_0896CEEC;
L_0896CEEC:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    cnd_ = s1 == 0;
    a2 = sp + 0;
    if (cnd_) { goto L_0896CF18; }
    goto L_0896CEFC;
L_0896CEFC:;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_0896CF04;
L_0896CF04:;
    cnd_ = v0 == 0;
    v1 = LD32(sp);
    if (cnd_) { goto L_0896CF18; }
    goto L_0896CF0C;
L_0896CF0C:;
    v0 = 3;
    cnd_ = v1 == v0;
    a0 = sp + 0;
    if (cnd_) { goto L_0896CF3C; }
    goto L_0896CF18;
L_0896CF18:;
    a0 = sp + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896CF20;
L_0896CF20:;
    v0 = s2 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_0896CF3C:;
    v0 = func_0881B5C4(a0);
    goto L_0896CF44;
L_0896CF44:;
    s2 = v0 + 0;
    goto L_0896CF18;
}

/* 0896CF4C */
u64 func_0896CF4C(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0896CF4C:;
    sp = sp - 32;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a0 = sp + 0;
    s2 = a2 & 0xff;
    ST32(sp, 0);
    v0 = func_0881B2B8(a0, t1, t2, t3);
    goto L_0896CF78;
L_0896CF78:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    cnd_ = s0 == 0;
    a2 = sp + 0;
    if (cnd_) { goto L_0896CFA4; }
    goto L_0896CF88;
L_0896CF88:;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_0896CF90;
L_0896CF90:;
    cnd_ = v0 == 0;
    v0 = LD32(sp);
    if (cnd_) { goto L_0896CFA4; }
    goto L_0896CF98;
L_0896CF98:;
    v1 = LD_U8(sp+4);
    v0 = v0 ^ 0x2;
    if (v0 == 0) s2 = v1;
    goto L_0896CFA4;
L_0896CFA4:;
    a0 = sp + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896CFAC;
L_0896CFAC:;
    v0 = s2 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0896CFC8 */
u64 func_0896CFC8(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0896CFC8:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = sp + 0;
    s0 = a1 + 0;
    s2 = a2 + 0;
    ST32(sp, 0);
    v0 = func_0881B2B8(a0, t1, t2, t3);
    goto L_0896CFF4;
L_0896CFF4:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    cnd_ = s1 == 0;
    a2 = sp + 0;
    if (cnd_) { goto L_0896D01C; }
    goto L_0896D004;
L_0896D004:;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_0896D00C;
L_0896D00C:;
    cnd_ = v0 == 0;
    v1 = LD32(sp);
    if (cnd_) { goto L_0896D01C; }
    goto L_0896D014;
L_0896D014:;
    v0 = LD32(sp+4);
    if (v1 == 0) s2 = v0;
    goto L_0896D01C;
L_0896D01C:;
    a0 = sp + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896D024;
L_0896D024:;
    v0 = s2 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0896D040 */
u32 func_0896D040(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, t8 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896D040:;
    v0 = D_08B15A00 - (23040);
    a1 = LD32(v0+23040);
    t6 = D_08B15A04 - (23044);
    v0 = D_08AEE1F4 - (-7692);
    sp = sp - 16;
    f6 = BITSF(LD32(v0-7692));
    t3 = LD32(t6+23044);
    cnd_ = (s32)a1 <= 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0896D134; }
    goto L_0896D064;
L_0896D064:;
    t8 = D_08B159FC - (23036);
    t7 = D_08B15A0C - (23052);
    v0 = D_08B230AC - (12460);
    v1 = LD32(t8+23036);
    t1 = LD_U8(t7+23052);
    t5 = v0 + 12460;
    v0 = D_08B22E88 - (11912);
    t0 = a1 + 0;
    a3 = v0 + 11912;
    t4 = D_08B230A8 - (12456);
    t2 = 1;
    a1 = t3 + 0;
    goto L_0896D094;
L_0896D094:;
    cnd_ = a2 == a1;
    v0 = t2 << (a2 & 31);
    if (cnd_) { goto L_0896D0B0; }
    goto L_0896D09C;
L_0896D09C:;
    ST8(t4+12456, v0);
    a1 = a2 + 0;
    t1 = 1;
    ST8(t5+4, t2);
    v1 = a3 + 0;
    goto L_0896D0B0;
L_0896D0B0:;
    f0 = BITSF(LD32(a0));
    f3 = BITSF(LD32(v1));
    f4 = BITSF(LD32(v1+4));
    f5 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(a0+8));
    f3 = f3 - f0;
    f4 = f4 - f1;
    f5 = f5 - f2;
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    v0 = FBITS(f3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    a2 = a2 + 1;
    v0 = (s32)a2 < (s32)t0;
    fcc = FCMP(f0, f6, 14);
    a3 = a3 + 136;
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f4));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f5));
    if (cnd_) { goto L_0896D120; }
    goto L_0896D11C;
L_0896D11C:;
    f0 = f6;
    goto L_0896D120;
L_0896D120:;
    cnd_ = v0 != 0;
    f6 = f0;
    if (cnd_) { goto L_0896D094; }
    goto L_0896D128;
L_0896D128:;
    ST8(t7+23052, t1);
    ST32(t8+23036, v1);
    ST32(t6+23044, a1);
    goto L_0896D134;
L_0896D134:;
    v0 = LD32(t6+23044);
    cnd_ = t3 == v0;
    v1 = t3 << 4;
    if (cnd_) { goto L_0896D180; }
    goto L_0896D140;
L_0896D140:;
    v1 = v1 + t3;
    v0 = D_08B22E88 - (11912);
    v0 = v0 + 11912;
    v1 = v1 << 3;
    v1 = v1 + v0;
    v0 = D_08B159FC - (23036);
    a1 = 1;
    ST32(v0+23036, v1);
    v0 = D_08B230B0 - (12464);
    a2 = a1 << (t3 & 31);
    a0 = D_08B230A8 - (12456);
    ST8(v0+12464, a1);
    v0 = D_08B15A0C - (23052);
    ST8(a0+12456, a2);
    ST32(t6+23044, t3);
    ST8(v0+23052, a1);
    goto L_0896D180;
L_0896D180:;
    f0 = f12 * f12;
    fcc = FCMP(f6, f0, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_0896D198; }
    goto L_0896D194;
L_0896D194:;
    v0 = 0 + 0;
    goto L_0896D198;
L_0896D198:;
    sp = sp + 16;
    return v0;
}

/* 0896D1A0 */
void func_0896D1A0(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896D1A0:;
    sp = sp - 16;
    t2 = D_08B45ACC - (23244);
    t1 = t2 + 23244;
    t5 = D_08B45A9C - (23196);
    t6 = t5 + 23196;
    v0 = LD32(t2+23244);
    t3 = a0 + 44;
    ST32(a0, a3);
    t4 = D_08B45AA8 - (23208);
    a3 = t4 + 23208;
    ST32(a0+12, v0);
    t0 = a0 + 56;
    s0 = a0 + 0;
    v0 = LD32(t1+4);
    ST32(a0+4, a1);
    a1 = a0 + 156;
    ST32(a0+16, v0);
    v1 = LD32(t1+8);
    ST32(a0+8, 0);
    ST32(a0+20, v1);
    v0 = LD32(t1+12);
    ST32(a0+24, v0);
    v1 = LD32(t2+23244);
    t2 = a0 + 168;
    ST32(a0+28, v1);
    v0 = LD32(t1+4);
    ST32(a0+32, v0);
    v1 = LD32(t1+8);
    ST32(a0+36, v1);
    v1 = D_08AEE214 - (-7660);
    v0 = LD32(t1+12);
    ST32(a0+40, v0);
    v0 = D_08AEE21C - (-7652);
    f0 = BITSF(LD32(t5+23196));
    f1 = BITSF(LD32(t6+8));
    f2 = BITSF(LD32(t6+4));
    ST32(a0+44, FBITS(f0));
    ST32(t3+8, FBITS(f1));
    ST32(t3+4, FBITS(f2));
    f0 = BITSF(LD32(t4+23208));
    f2 = BITSF(LD32(a3+8));
    f1 = BITSF(LD32(a3+4));
    f3 = BITSF(LD32(a3+12));
    f4 = BITSF(LD32(a3+16));
    ST32(a0+56, FBITS(f0));
    ST32(t0+4, FBITS(f1));
    ST32(t0+8, FBITS(f2));
    f2 = BITSF(LD32(a3+24));
    ST32(t0+12, FBITS(f3));
    f0 = BITSF(LD32(a3+32));
    f1 = BITSF(LD32(a3+20));
    f3 = BITSF(LD32(a3+28));
    ST32(t0+24, FBITS(f2));
    f2 = BITSF(LD32(v0-7652));
    v0 = 1;
    ST32(t0+32, FBITS(f0));
    ST32(t0+28, FBITS(f3));
    ST32(t0+16, FBITS(f4));
    ST32(t0+20, FBITS(f1));
    ST8(a0+92, v0);
    v0 = D_08AEE218 - (-7656);
    f0 = BITSF(LD32(v0-7656));
    v0 = D_08AEE220 - (-7648);
    ST32(a0+100, 0);
    ST32(a0+120, FBITS(f0));
    f0 = BITSF(LD32(v0-7648));
    v0 = D_08AEE224 - (-7644);
    f1 = BITSF(LD32(a0+100));
    ST32(a0+128, FBITS(f0));
    f0 = BITSF(LD32(v0-7644));
    v0 = D_08AEE228 - (-7640);
    f3 = BITSF(LD32(v1-7660));
    ST32(a0+132, FBITS(f0));
    f0 = BITSF(LD32(v0-7640));
    v0 = D_08AEE22C - (-7636);
    ST32(a0+96, a2);
    ST32(a0+136, FBITS(f0));
    f0 = BITSF(LD32(v0-7636));
    ST32(a0+140, FBITS(f3));
    ST32(a0+144, FBITS(f0));
    ST32(a0+152, FBITS(f2));
    ST32(a0+104, FBITS(f3));
    ST32(a0+124, FBITS(f2));
    ST32(a0+148, FBITS(f2));
    ST32(a0+156, FBITS(f1));
    ST32(a0+108, FBITS(f1));
    ST32(a0+112, FBITS(f1));
    ST32(a0+116, FBITS(f1));
    ST32(a0+168, FBITS(f1));
    ST32(a1+4, FBITS(f1));
    ST32(a1+8, FBITS(f1));
    ST32(t2+4, FBITS(f1));
    ST32(t2+8, FBITS(f1));
    ST32(a0+180, 0);
    ST32(a0+184, 0);
    func_0896D39C(a0);
    goto L_0896D328;
L_0896D328:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_0896E6E4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896D334;
L_0896D334:;
    sp = sp + 16;
    return;
}

/* 0896D344 */
void func_0896D344(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896D344:;
    sp = sp - 16;
    s0 = a0 + 0;
    a2 = 1;
    a1 = LD32(a0+4);
    a0 = D_08C2C200 - (-15872);
    a0 = a0 - 15872;
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896D368;
L_0896D368:;
    v1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0896D384; }
    goto L_0896D378;
L_0896D378:;
    v0 = D_08AEE234 - (-7628);
    f0 = BITSF(LD32(v0-7628));
    ST32(v1+16, FBITS(f0));
    goto L_0896D384;
L_0896D384:;
    { u64 r_ = func_0896E6E4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896D38C;
L_0896D38C:;
    sp = sp + 16;
    return;
}

/* 0896D39C */
void func_0896D39C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0896D39C:;
    sp = sp - 32;
    a2 = sp + 0;
    s1 = D_08AEE238 - (-7624);
    s0 = a0 + 0;
    a1 = LD32(a0);
    a0 = 0xae790000u;
    a0 = a0 | 0xc325;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896D3CC;
L_0896D3CC:;
    a1 = 0xa19d0000u;
    f12 = BITSF(LD32(s0+120));
    a0 = LD32(sp);
    a1 = a1 | 0xad9e;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D3E0;
L_0896D3E0:;
    ST32(s0+120, FBITS(f0));
    a1 = 0x6b920000u;
    a1 = a1 | 0x320e;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+124));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D3F8;
L_0896D3F8:;
    ST32(s0+124, FBITS(f0));
    a1 = 0x713c0000u;
    a1 = a1 | 0xe91e;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+128));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D410;
L_0896D410:;
    ST32(s0+128, FBITS(f0));
    a1 = 0x82b70000u;
    a1 = a1 | 0x748b;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+132));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D428;
L_0896D428:;
    ST32(s0+132, FBITS(f0));
    a1 = 0xd8f50000u;
    a1 = a1 | 0x6107;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+136));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D440;
L_0896D440:;
    ST32(s0+136, FBITS(f0));
    a1 = 0x64920000u;
    a1 = a1 | 0x10da;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+140));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D458;
L_0896D458:;
    ST32(s0+140, FBITS(f0));
    a1 = 0xd0a0000u;
    a1 = a1 | 0xe401;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+156));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D470;
L_0896D470:;
    ST32(s0+156, FBITS(f0));
    a1 = 0x74ec0000u;
    a1 = a1 | 0x10e0;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+160));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D488;
L_0896D488:;
    ST32(s0+160, FBITS(f0));
    a1 = 0xdccd0000u;
    a1 = a1 | 0x3dbf;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+164));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D4A0;
L_0896D4A0:;
    ST32(s0+164, FBITS(f0));
    a1 = 0xb320000u;
    a1 = a1 | 0x9359;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+168));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D4B8;
L_0896D4B8:;
    ST32(s0+168, FBITS(f0));
    a1 = 0x73130000u;
    a1 = a1 | 0xc038;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+172));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D4D0;
L_0896D4D0:;
    ST32(s0+172, FBITS(f0));
    a1 = 0xdaf40000u;
    a1 = a1 | 0xed17;
    f12 = BITSF(LD32(s0+176));
    a0 = LD32(sp);
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D4E8;
L_0896D4E8:;
    ST32(s0+176, FBITS(f0));
    a1 = 0xc1680000u;
    a1 = a1 | 0x41d8;
    a0 = LD32(sp);
    a2 = LD32(s0+180);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896D500;
L_0896D500:;
    ST32(s0+180, v0);
    a1 = 0x7de50000u;
    a1 = a1 | 0x85f5;
    a2 = LD32(s0+184);
    a0 = LD32(sp);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896D518;
L_0896D518:;
    ST32(s0+184, v0);
    a1 = 0x4ebf0000u;
    a1 = a1 | 0x2ebb;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+148));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D530;
L_0896D530:;
    ST32(s0+148, FBITS(f0));
    a1 = 0x6dc30000u;
    a1 = a1 | 0x6775;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+152));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D548;
L_0896D548:;
    ST32(s0+152, FBITS(f0));
    a1 = 0x10000u;
    a2 = 60;
    a0 = LD32(sp);
    a1 = a1 | 0x8ccd;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_0896D560;
L_0896D560:;
    f0 = BITSF(v0);
    f2 = BITSF(LD32(s1-7624));
    a2 = LD32(s0+4);
    f1 = (float)(s32)FBITS(f0);
    a0 = D_08C2A6C8 - (-22840);
    v0 = 999;
    v1 = a0 - 22840;
    f1 = f1 * f2;
    cnd_ = a2 == v0;
    ST32(s0+144, FBITS(f1));
    if (cnd_) { goto L_0896D7B0; }
    goto L_0896D588;
L_0896D588:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22840);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0896D5D8; }
    goto L_0896D5AC;
L_0896D5AC:;
    a0 = LD32(a1);
    goto L_0896D5B0;
L_0896D5B0:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0896D7C4; }
    goto L_0896D5C8;
L_0896D5C8:;
    a1 = LD32(a1+4);
    goto L_0896D5CC;
L_0896D5CC:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0896D5B0; }
    goto L_0896D5D4;
L_0896D5D4:;
    v1 = 0 + 0;
    goto L_0896D5D8;
L_0896D5D8:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0896D7B4; }
    goto L_0896D5E0;
L_0896D5E0:;
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_0896D5F4;
L_0896D5F4:;
    a0 = 0x203e0000u;
    a2 = sp + 0;
    a1 = v0 + 0;
    a0 = a0 | 0x217d;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896D608;
L_0896D608:;
    f12 = BITSF(LD32(s0+120));
    a0 = LD32(sp);
    a1 = 0xa19d0000u;
    a1 = a1 | 0xad9e;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D61C;
L_0896D61C:;
    ST32(s0+120, FBITS(f0));
    a1 = 0x6b920000u;
    a1 = a1 | 0x320e;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+124));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D634;
L_0896D634:;
    ST32(s0+124, FBITS(f0));
    a1 = 0x713c0000u;
    a1 = a1 | 0xe91e;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+128));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D64C;
L_0896D64C:;
    ST32(s0+128, FBITS(f0));
    a1 = 0x82b70000u;
    a1 = a1 | 0x748b;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+132));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D664;
L_0896D664:;
    ST32(s0+132, FBITS(f0));
    a1 = 0xd8f50000u;
    a1 = a1 | 0x6107;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+136));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D67C;
L_0896D67C:;
    ST32(s0+136, FBITS(f0));
    a1 = 0x64920000u;
    a1 = a1 | 0x10da;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+140));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D694;
L_0896D694:;
    ST32(s0+140, FBITS(f0));
    a1 = 0xd0a0000u;
    a1 = a1 | 0xe401;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+156));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D6AC;
L_0896D6AC:;
    ST32(s0+156, FBITS(f0));
    a1 = 0x74ec0000u;
    a1 = a1 | 0x10e0;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+160));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D6C4;
L_0896D6C4:;
    ST32(s0+160, FBITS(f0));
    a1 = 0xdccd0000u;
    a1 = a1 | 0x3dbf;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+164));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D6DC;
L_0896D6DC:;
    ST32(s0+164, FBITS(f0));
    a1 = 0xb320000u;
    a1 = a1 | 0x9359;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+168));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D6F4;
L_0896D6F4:;
    ST32(s0+168, FBITS(f0));
    a1 = 0x73130000u;
    a1 = a1 | 0xc038;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+172));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D70C;
L_0896D70C:;
    ST32(s0+172, FBITS(f0));
    a1 = 0xdaf40000u;
    a1 = a1 | 0xed17;
    f12 = BITSF(LD32(s0+176));
    a0 = LD32(sp);
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D724;
L_0896D724:;
    ST32(s0+176, FBITS(f0));
    a1 = 0xc1680000u;
    a1 = a1 | 0x41d8;
    a0 = LD32(sp);
    a2 = LD32(s0+180);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896D73C;
L_0896D73C:;
    ST32(s0+180, v0);
    a1 = 0x7de50000u;
    a1 = a1 | 0x85f5;
    a2 = LD32(s0+184);
    a0 = LD32(sp);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896D754;
L_0896D754:;
    ST32(s0+184, v0);
    a1 = 0x4ebf0000u;
    a1 = a1 | 0x2ebb;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+148));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D76C;
L_0896D76C:;
    ST32(s0+148, FBITS(f0));
    a1 = 0x6dc30000u;
    a1 = a1 | 0x6775;
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+152));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896D784;
L_0896D784:;
    ST32(s0+152, FBITS(f0));
    a1 = 0x10000u;
    a1 = a1 | 0x8ccd;
    a0 = LD32(sp);
    a2 = 60;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_0896D79C;
L_0896D79C:;
    f1 = BITSF(v0);
    f2 = BITSF(LD32(s1-7624));
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 * f2;
    ST32(s0+144, FBITS(f0));
    goto L_0896D7B0;
L_0896D7B0:;
    goto L_0896D7B4;
L_0896D7B4:;
    sp = sp + 32;
    return;
L_0896D7C4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0896D5C8; }
    goto L_0896D7D0;
L_0896D7D0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0896D5CC; }
    goto L_0896D7DC;
L_0896D7DC:;
    goto L_0896D5D8;
}

/* 0896D7E4 */
void func_0896D7E4(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896D7E4:;
    sp = sp - 16;
    v1 = LD32(a0+8);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0896D8C0; }
    goto L_0896D7FC;
L_0896D7FC:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0896D8B0; }
    goto L_0896D808;
L_0896D808:;
    f1 = BITSF(LD32(s0+112));
    goto L_0896D80C;
L_0896D80C:;
    f4 = BITSF(LD32(s0+116));
    fcc = FCMP(f1, f4, 2);
    cnd_ = fcc;
    if (cnd_) { ST8(s0+92, 0); goto L_0896D860; }
    goto L_0896D820;
L_0896D820:;
    v0 = LD_U8(s0+92);
    cnd_ = v0 == 0;
    v1 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_0896D870; }
    goto L_0896D82C;
L_0896D82C:;
    v0 = D_08AEE23C - (-7620);
    f3 = BITSF(LD32(v0-7620));
    goto L_0896D834;
L_0896D834:;
    f0 = BITSF(LD32(v1-31328));
    f2 = BITSF(0);
    fcc = FCMP(f0, f2, 2);
    cnd_ = fcc;
    if (cnd_) { f3 = f2; goto L_0896D84C; }
    goto L_0896D84C;
L_0896D84C:;
    f0 = f4 - f1;
    f0 = f0 * f3;
    f0 = f1 + f0;
    ST32(s0+112, FBITS(f0));
    ST8(s0+92, 0);
    goto L_0896D860;
L_0896D860:;
    sp = sp + 16;
    return;
L_0896D870:;
    f0 = BITSF(LD32(v1-31328));
    v0 = D_08AEE240 - (-7616);
    f2 = BITSF(LD32(v0-7616));
    f0 = f0 + f0;
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    f3 = f2;
    if (cnd_) { goto L_0896D834; }
    goto L_0896D890;
L_0896D890:;
    v0 = D_08AEE23C - (-7620);
    f2 = BITSF(LD32(v0-7620));
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f2 = f0; goto L_0896D8A8; }
    goto L_0896D8A8;
L_0896D8A8:;
    f3 = f2;
    goto L_0896D834;
L_0896D8B0:;
    func_0896DEE0(a0);
    goto L_0896D8B8;
L_0896D8B8:;
    f1 = BITSF(LD32(s0+112));
    goto L_0896D80C;
L_0896D8C0:;
    func_0896D978(a0);
    goto L_0896D8C8;
L_0896D8C8:;
    f1 = BITSF(LD32(s0+112));
    goto L_0896D80C;
}

/* 0896D8D0 */
u64 func_0896D8D0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896D8D0:;
    sp = sp - 16;
    v1 = a1 + 0;
    a2 = a0 + 0;
    v0 = LD32(a0+8);
    cnd_ = v1 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0896D8F4; }
    goto L_0896D8EC;
L_0896D8EC:;
    v0 = 1;
    ST8(a0+92, v0);
    goto L_0896D8F4;
L_0896D8F4:;
    v0 = 1;
    cnd_ = v1 == v0;
    ST32(a2+8, v1);
    if (cnd_) { goto L_0896D914; }
    goto L_0896D900;
L_0896D900:;
    { u64 r_ = func_0896E6E4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896D908;
L_0896D908:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0896D914:;
    a1 = LD32(a2+4);
    goto L_0896D900;
}

/* 0896D91C */
void func_0896D91C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0896D91C:;
    v0 = LD32(a1);
    a2 = a2 & 0xff;
    ST32(a0+12, v0);
    v0 = LD32(a1+4);
    ST32(a0+16, v0);
    v1 = LD32(a1+8);
    ST32(a0+20, v1);
    v0 = LD32(a1+12);
    cnd_ = a2 != 0;
    ST32(a0+24, v0);
    if (cnd_) { goto L_0896D950; }
    goto L_0896D944;
L_0896D944:;
    v0 = LD_U8(a0+92);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0896D970; }
    goto L_0896D950;
L_0896D950:;
    v0 = LD32(a1);
    ST32(a0+28, v0);
    v1 = LD32(a1+4);
    ST32(a0+32, v1);
    v0 = LD32(a1+8);
    ST32(a0+36, v0);
    v1 = LD32(a1+12);
    ST32(a0+40, v1);
    goto L_0896D970;
L_0896D970:;
    return;
}

/* 0896D978 */
void func_0896D978(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr96 = v[96];
    u8 stack_[240] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 240);
L_0896D978:;
    sp = sp - 240;
    v0 = 999;
    s1 = a0 + 0;
    a2 = LD32(a0+4);
    a0 = D_08C2B3A4 - (-19548);
    cnd_ = a2 == v0;
    v1 = a0 - 19548;
    if (cnd_) { goto L_0896DE1C; }
    goto L_0896D9C4;
L_0896D9C4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19548);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0896DA14; }
    goto L_0896D9E8;
L_0896D9E8:;
    a0 = LD32(a1);
    goto L_0896D9EC;
L_0896D9EC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0896DEC0; }
    goto L_0896DA04;
L_0896DA04:;
    a1 = LD32(a1+4);
    goto L_0896DA08;
L_0896DA08:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0896D9EC; }
    goto L_0896DA10;
L_0896DA10:;
    s2 = 0 + 0;
    goto L_0896DA14;
L_0896DA14:;
    cnd_ = s2 == 0;
    v0 = D_08AEE244 - (-7612);
    if (cnd_) { goto L_0896DE1C; }
    goto L_0896DA1C;
L_0896DA1C:;
    v1 = D_08AEE248 - (-7608);
    f0 = BITSF(LD32(v1-7608));
    f1 = BITSF(LD32(v0-7612));
    a0 = s1 + 0;
    a1 = sp + 0;
    s4 = sp + 16;
    v1 = FBITS(f0);
    v0 = FBITS(f1);
    {v[112]=BITSF(LD32(s1+(12)));}
    {v[113]=BITSF(LD32(s1+(16)));}
    {v[114]=BITSF(LD32(s1+(20)));}
    {v[115]=BITSF(LD32(s1+(24)));}
    {v[116]=BITSF(LD32(s1+(28)));}
    {v[117]=BITSF(LD32(s1+(32)));}
    {v[118]=BITSF(LD32(s1+(36)));}
    {v[119]=BITSF(LD32(s1+(40)));}
    {v[124]=BITSF(v0);}
    {v[127]=BITSF(v1);}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[116];float t1=v[117];float t2=v[118];float t3=v[119];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr96=sum;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=vr0;v[98]=(float)1;}
    {float s0=v[97];float t0=vr96;float d0=(s0>=t0?1.f:0.f);v[99]=d0;}
    {float s0=vr96;float d0=fabsf(s0);vr96=d0;}
    {float s0=v[98];float t0=v[124];float d0=s0-t0;v[125]=d0;}
    {float s0=vr96;float t0=v[127];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0896DAA8; }
    goto L_0896DA88;
L_0896DA88:;
    {float s0=vr96;float d0=asinf(s0)*0.63661977236f;v[100]=d0;}
    {float s0=v[98];float t0=v[100];float d0=s0-t0;v[100]=d0;}
    {float s0=v[100];float d0=sinf(s0*1.57079632679f);v[101]=d0;}
    {float s0=v[124];float s1=v[125];float t0=v[100];v[124]=s0*t0;v[125]=s1*t0;}
    {float s0=v[101];float d0=1.0f/s0;v[102]=d0;}
    {float s0=v[124];float s1=v[125];float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=v[102];v[124]=s0*t0;v[125]=s1*t0;}
    goto L_0896DAA8;
L_0896DAA8:;
    {float s0=v[99];float t0=v[99];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0896DABC; }
    goto L_0896DAB4;
L_0896DAB4:;
    {float s0=v[124];float d0=-s0;v[124]=d0;}
    goto L_0896DABC;
L_0896DABC:;
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[125];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float t0=v[124];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float t0=v[84];float t1=v[85];float t2=v[86];float t3=v[87];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[120];float t1=v[121];float t2=v[122];float t3=v[123];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[92]=sum;}
    {float s0=v[92];float t0=v[92];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0896DAE4; }
    goto L_0896DAD8;
L_0896DAD8:;
    {float s0=v[92];float d0=1.0f/sqrtf(s0);v[92]=d0;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[92];v[120]=s0*t0;v[121]=s1*t0;v[122]=s2*t0;v[123]=s3*t0;}
    goto L_0896DAE4;
L_0896DAE4:;
    {ST32(s1+(28),FBITS(v[120]));}
    {ST32(s1+(32),FBITS(v[121]));}
    {ST32(s1+(36),FBITS(v[122]));}
    {ST32(s1+(40),FBITS(v[123]));}
    {v[112]=BITSF(LD32(s1+(28)));}
    {v[113]=BITSF(LD32(s1+(32)));}
    {v[114]=BITSF(LD32(s1+(36)));}
    {v[115]=BITSF(LD32(s1+(40)));}
    {float s0=vr0;v[120]=(float)1;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[112];float t1=v[113];float t2=v[114];float t3=v[115];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr96=d0;v[97]=d1;v[98]=d2;v[99]=d3;}
    {float s0=vr96;float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[112];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=vr96;float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[113];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=vr96;float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[114];v[88]=s0*t0;v[89]=s1*t0;v[90]=s2*t0;v[91]=s3*t0;}
    {float s0=vr96;float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[115];v[92]=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
    {float s0=v[120];float t0=v[85];float d0=s0-t0;vr96=d0;}
    {float s0=v[120];float t0=v[80];float d0=s0-t0;v[106]=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0+t0;v[100]=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0-t0;v[104]=d0;}
    {float s0=vr96;float t0=v[90];float d0=s0-t0;vr96=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0-t0;v[97]=d0;}
    {float s0=v[86];float t0=v[83];float d0=s0+t0;v[105]=d0;}
    {float s0=v[106];float t0=v[90];float d0=s0-t0;v[101]=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0+t0;v[98]=d0;}
    {float s0=v[86];float t0=v[83];float d0=s0-t0;v[102]=d0;}
    {float s0=v[106];float t0=v[85];float d0=s0-t0;v[106]=d0;}
    {ST32(s1+(56),FBITS(vr96));}
    {ST32(s1+(60),FBITS(v[97]));}
    {ST32(s1+(64),FBITS(v[98]));}
    {ST32(s1+(68),FBITS(v[100]));}
    {ST32(s1+(72),FBITS(v[101]));}
    {ST32(s1+(76),FBITS(v[102]));}
    {ST32(s1+(80),FBITS(v[104]));}
    {ST32(s1+(84),FBITS(v[105]));}
    {ST32(s1+(88),FBITS(v[106]));}
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[96]=vr96;func_0896E758(a0, a1); vr0=v[0];vr1=v[1];vr2=v[2];vr96=v[96];});
    goto L_0896DB70;
L_0896DB70:;
    a0 = s1 + 0;
    a1 = s4 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[96]=vr96;func_0896EACC(a0, a1); vr0=v[0];vr1=v[1];vr2=v[2];vr96=v[96];});
    goto L_0896DB7C;
L_0896DB7C:;
    f0 = BITSF(LD32(sp));
    f4 = BITSF(LD32(sp+16));
    f3 = BITSF(LD32(sp+20));
    f2 = BITSF(LD32(sp+24));
    f4 = f4 - f0;
    f0 = BITSF(LD32(sp+4));
    {u32 a_=sp+(128);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f25 = BITSF(0);
    f3 = f3 - f0;
    f0 = BITSF(LD32(sp+8));
    v0 = FBITS(f4);
    {v[12]=BITSF(v0);}
    f2 = f2 - f0;
    v1 = FBITS(f3);
    {v[13]=BITSF(v1);}
    ST32(sp+32, FBITS(f4));
    v0 = FBITS(f2);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    ST32(sp+36, FBITS(f3));
    fcc = FCMP(f0, f25, 2);
    cnd_ = fcc;
    ST32(sp+40, FBITS(f2));
    if (cnd_) { goto L_0896DC24; }
    goto L_0896DBE4;
L_0896DBE4:;
    {float s0=vr0;float d0=sqrtf(s0);v[4]=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];v[8]=(float)1;v[9]=(float)1;v[10]=(float)1;v[11]=(float)1;}
    {v0=FBITS(v[4]);}
    f25 = BITSF(v0);
    {float s0=v[8];float t0=v[4];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v1=FBITS(vr2);}
    f3 = BITSF(v1);
    {v0=FBITS(vr0);}
    {v1=FBITS(vr1);}
    ST32(sp+48, v0);
    ST32(sp+52, v1);
    ST32(sp+56, FBITS(f3));
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    ST32(sp+40, FBITS(f3));
    goto L_0896DC24;
L_0896DC24:;
    v0 = LD32(s2);
    a1 = sp + 48;
    a0 = s2 + 0;
    v1 = LD32(v0+276);
    f24 = BITSF(0);
    t_ = v1;
    f21 = f25;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[96]=vr96;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr96=v[96];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896DC40;
L_0896DC40:;
    v0 = LD32(sp+48);
    {u32 a_=sp+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+52);
    {vr0=BITSF(v0);}
    v0 = LD32(sp+56);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f2 = BITSF(LD32(s1+108));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f20 = f0 - f2;
    fcc = FCMP(f20, f24, 12);
    cnd_ = !fcc;
    s0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_0896DC90; }
    goto L_0896DC84;
L_0896DC84:;
    v0 = D_08AEE24C - (-7604);
    f0 = BITSF(LD32(v0-7604));
    f20 = f20 * f0;
    goto L_0896DC90;
L_0896DC90:;
    f0 = BITSF(LD32(s0-31328));
    s3 = D_08AEE250 - (-7600);
    f23 = BITSF(LD32(s3-7600));
    f0 = f0 + f0;
    a1 = D_08ADB5C4 - (-19004);
    a1 = a1 - 19004;
    a0 = sp + 80;
    a2 = sp + 84;
    ST32(sp+80, FBITS(f0));
    ST32(sp+84, FBITS(f23));
    f0 = func_0896ED7C(a0, a1, a2);
    goto L_0896DCBC;
L_0896DCBC:;
    f1 = f0;
    f0 = BITSF(LD32(s0-31328));
    fcc = FCMP(f0, f24, 2);
    cnd_ = fcc;
    if (cnd_) { f1 = f24; goto L_0896DCD4; }
    goto L_0896DCD4;
L_0896DCD4:;
    f1 = f20 * f1;
    f0 = BITSF(LD32(s1+108));
    fcc = FCMP(f21, f24, 2);
    f22 = f23;
    f0 = f0 + f1;
    cnd_ = !fcc;
    ST32(s1+108, FBITS(f0));
    if (cnd_) { goto L_0896DE90; }
    goto L_0896DCF0;
L_0896DCF0:;
    f0 = BITSF(LD32(s1+120));
    f23 = BITSF(LD32(s3-7600));
    f1 = BITSF(LD32(s1+108));
    a0 = sp + 100;
    f0 = f23 / f0;
    a1 = sp + 104;
    a2 = sp + 108;
    ST32(sp+104, 0);
    s0 = s1 + 44;
    ST32(sp+108, FBITS(f23));
    f20 = f23 - f22;
    f1 = f1 * f0;
    ST32(sp+100, FBITS(f1));
    f0 = func_0896ED7C(a0, a1, a2);
    goto L_0896DD28;
L_0896DD28:;
    f20 = f20 * f0;
    f5 = BITSF(LD32(sp+40));
    f2 = BITSF(LD32(sp+32));
    f3 = BITSF(LD32(sp+36));
    f20 = f22 + f20;
    f4 = BITSF(LD32(sp+8));
    f1 = BITSF(LD32(sp));
    f0 = BITSF(LD32(sp+4));
    f21 = f25 * f20;
    a2 = s4 + 0;
    a0 = s1 + 0;
    a1 = sp + 0;
    f2 = f2 * f21;
    f3 = f3 * f21;
    f5 = f5 * f21;
    a3 = s0 + 0;
    f1 = f1 + f2;
    f0 = f0 + f3;
    f4 = f4 + f5;
    ST32(sp+64, FBITS(f2));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f4));
    ST32(sp+68, FBITS(f3));
    ST32(sp+48, FBITS(f1));
    ST32(sp+52, FBITS(f0));
    ST32(sp+56, FBITS(f4));
    ST32(sp+72, FBITS(f5));
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[96]=vr96;func_0896E06C(a0, a1, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr96=v[96];});
    goto L_0896DD9C;
L_0896DD9C:;
    {u32 a_=sp+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f1 = BITSF(LD32(s1+44));
    f0 = BITSF(LD32(sp));
    f4 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(s0+4));
    f0 = f0 - f1;
    f2 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+8));
    f2 = f2 - f3;
    f1 = f1 - f4;
    v1 = FBITS(f0);
    {vr0=BITSF(v1);}
    v0 = FBITS(f2);
    v1 = FBITS(f1);
    {vr1=BITSF(v0);}
    {vr2=BITSF(v1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f4 = BITSF(LD32(s1+128));
    ST32(sp+64, FBITS(f0));
    ST32(sp+112, 0);
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f3 = BITSF(v0);
    ST32(sp+68, FBITS(f2));
    fcc = FCMP(f0, f4, 12);
    cnd_ = fcc;
    ST32(sp+72, FBITS(f1));
    if (cnd_) { goto L_0896DE54; }
    goto L_0896DE10;
L_0896DE10:;
    ST32(sp+112, FBITS(f23));
    goto L_0896DE14;
L_0896DE14:;
    f0 = BITSF(LD32(sp+112));
    ST32(s2+16, FBITS(f0));
    goto L_0896DE1C;
L_0896DE1C:;
    sp = sp + 240;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[96]=vr96;return; }
L_0896DE54:;
    f0 = BITSF(LD32(s1+132));
    a0 = sp + 112;
    a1 = sp + 116;
    f1 = f4 - f0;
    f0 = f3 - f0;
    a2 = sp + 120;
    ST32(sp+120, FBITS(f23));
    f1 = f23 / f1;
    ST32(sp+116, 0);
    f0 = f0 * f1;
    ST32(sp+112, FBITS(f0));
    f0 = func_0896ED7C(a0, a1, a2);
    goto L_0896DE84;
L_0896DE84:;
    f0 = f0 * f0;
    ST32(sp+112, FBITS(f0));
    goto L_0896DE14;
L_0896DE90:;
    f1 = f23 / f21;
    f0 = BITSF(LD32(s1+124));
    a0 = sp + 88;
    a1 = sp + 92;
    a2 = sp + 96;
    ST32(sp+92, FBITS(f24));
    ST32(sp+96, FBITS(f23));
    f0 = f0 * f1;
    ST32(sp+88, FBITS(f0));
    f0 = func_0896ED7C(a0, a1, a2);
    goto L_0896DEB8;
L_0896DEB8:;
    f22 = f0;
    goto L_0896DCF0;
L_0896DEC0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_0896DA04; }
    goto L_0896DECC;
L_0896DECC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0896DA08; }
    goto L_0896DED8;
L_0896DED8:;
    goto L_0896DA14;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[96]=vr96;
}

/* 0896DEE0 */
void func_0896DEE0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr81 = v[81], vr82 = v[82], vr83 = v[83], vr85 = v[85], vr86 = v[86], vr87 = v[87], vr92 = v[92], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr99 = v[99], vr100 = v[100], vr106 = v[106], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr120 = v[120], vr121 = v[121], vr122 = v[122], vr123 = v[123], vr124 = v[124], vr125 = v[125];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896DEE0:;
    sp = sp - 16;
    s0 = a0 + 0;
    a2 = 1;
    a1 = LD32(a0+4);
    a0 = D_08C2B3A4 - (-19548);
    a0 = a0 - 19548;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896DF04;
L_0896DF04:;
    a1 = s0 + 44;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0896E05C; }
    goto L_0896DF10;
L_0896DF10:;
    v0 = D_08AEE254 - (-7596);
    v1 = D_08AEE258 - (-7592);
    f1 = BITSF(LD32(v0-7596));
    f0 = BITSF(LD32(v1-7592));
    v0 = FBITS(f1);
    v1 = FBITS(f0);
    {vr112=BITSF(LD32(s0+(12)));}
    {vr113=BITSF(LD32(s0+(16)));}
    {vr114=BITSF(LD32(s0+(20)));}
    {vr115=BITSF(LD32(s0+(24)));}
    {v[116]=BITSF(LD32(s0+(28)));}
    {v[117]=BITSF(LD32(s0+(32)));}
    {v[118]=BITSF(LD32(s0+(36)));}
    {v[119]=BITSF(LD32(s0+(40)));}
    {vr124=BITSF(v0);}
    {v[127]=BITSF(v1);}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=v[116];float t1=v[117];float t2=v[118];float t3=v[119];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr96=sum;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=vr0;vr98=(float)1;}
    {float s0=vr97;float t0=vr96;float d0=(s0>=t0?1.f:0.f);vr99=d0;}
    {float s0=vr96;float d0=fabsf(s0);vr96=d0;}
    {float s0=vr98;float t0=vr124;float d0=s0-t0;vr125=d0;}
    {float s0=vr96;float t0=v[127];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0896DF94; }
    goto L_0896DF74;
L_0896DF74:;
    {float s0=vr96;float d0=asinf(s0)*0.63661977236f;vr100=d0;}
    {float s0=vr98;float t0=vr100;float d0=s0-t0;vr100=d0;}
    {float s0=vr100;float d0=sinf(s0*1.57079632679f);v[101]=d0;}
    {float s0=vr124;float s1=vr125;float t0=vr100;vr124=s0*t0;vr125=s1*t0;}
    {float s0=v[101];float d0=1.0f/s0;v[102]=d0;}
    {float s0=vr124;float s1=vr125;float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=v[102];vr124=s0*t0;vr125=s1*t0;}
    goto L_0896DF94;
L_0896DF94:;
    {float s0=vr99;float t0=vr99;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0896DFA8; }
    goto L_0896DFA0;
L_0896DFA0:;
    {float s0=vr124;float d0=-s0;vr124=d0;}
    goto L_0896DFA8;
L_0896DFA8:;
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr125;v[80]=s0*t0;vr81=s1*t0;vr82=s2*t0;vr83=s3*t0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float t0=vr124;v[84]=s0*t0;vr85=s1*t0;vr86=s2*t0;vr87=s3*t0;}
    {float s0=v[80];float s1=vr81;float s2=vr82;float s3=vr83;float t0=v[84];float t1=vr85;float t2=vr86;float t3=vr87;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr120=d0;vr121=d1;vr122=d2;vr123=d3;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float s3=vr123;float t0=vr120;float t1=vr121;float t2=vr122;float t3=vr123;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr92=sum;}
    {float s0=vr92;float t0=vr92;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0896DFD0; }
    goto L_0896DFC4;
L_0896DFC4:;
    {float s0=vr92;float d0=1.0f/sqrtf(s0);vr92=d0;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float s3=vr123;float t0=vr92;vr120=s0*t0;vr121=s1*t0;vr122=s2*t0;vr123=s3*t0;}
    goto L_0896DFD0;
L_0896DFD0:;
    {ST32(s0+(28),FBITS(vr120));}
    {ST32(s0+(32),FBITS(vr121));}
    {ST32(s0+(36),FBITS(vr122));}
    {ST32(s0+(40),FBITS(vr123));}
    {vr112=BITSF(LD32(s0+(28)));}
    {vr113=BITSF(LD32(s0+(32)));}
    {vr114=BITSF(LD32(s0+(36)));}
    {vr115=BITSF(LD32(s0+(40)));}
    {float s0=vr0;vr120=(float)1;}
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
    {ST32(s0+(56),FBITS(vr96));}
    {ST32(s0+(60),FBITS(vr97));}
    {ST32(s0+(64),FBITS(vr98));}
    {ST32(s0+(68),FBITS(vr100));}
    {ST32(s0+(72),FBITS(v[101]));}
    {ST32(s0+(76),FBITS(v[102]));}
    {ST32(s0+(80),FBITS(v[104]));}
    {ST32(s0+(84),FBITS(v[105]));}
    {ST32(s0+(88),FBITS(vr106));}
    ({ v[81]=vr81;v[82]=vr82;v[83]=vr83;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[92]=vr92;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;func_0896E758(a0, a1); vr0=v[0];vr81=v[81];vr82=v[82];vr83=v[83];vr85=v[85];vr86=v[86];vr87=v[87];vr92=v[92];vr96=v[96];vr97=v[97];vr98=v[98];vr99=v[99];vr100=v[100];vr106=v[106];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr120=v[120];vr121=v[121];vr122=v[122];vr123=v[123];vr124=v[124];vr125=v[125];});
    goto L_0896E05C;
L_0896E05C:;
    sp = sp + 16;
    { v[81]=vr81;v[82]=vr82;v[83]=vr83;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[92]=vr92;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;return; }
    v[81]=vr81;v[82]=vr82;v[83]=vr83;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[92]=vr92;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;
}

/* 0896E06C */
void func_0896E06C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2];
    u8 stack_[528] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 528);
L_0896E06C:;
    sp = sp - 528;
    s6 = a0 + 0;
    s3 = a3 + 0;
    s2 = a2 + 0;
    a2 = 1;
    s1 = a1 + 0;
    v0 = LD32(a0+4);
    a0 = D_08C2B3A4 - (-19548);
    a0 = a0 - 19548;
    a1 = v0 + 0;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896E0C0;
L_0896E0C0:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_0896E134; }
    goto L_0896E0C8;
L_0896E0C8:;
    f8 = BITSF(LD32(s1));
    f1 = BITSF(LD32(s2));
    f7 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s2+4));
    f1 = f8 - f1;
    f6 = BITSF(LD32(s1+8));
    f2 = f7 - f2;
    f0 = BITSF(LD32(s2+8));
    f3 = f1 * f1;
    v0 = D_08AEE25C - (-7588);
    f0 = f6 - f0;
    f4 = f2 * f2;
    ST32(sp+32, FBITS(f1));
    f5 = f0 * f0;
    f3 = f3 + f4;
    ST32(sp+40, FBITS(f0));
    f3 = f3 + f5;
    f0 = BITSF(LD32(v0-7588));
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    ST32(sp+36, FBITS(f2));
    if (cnd_) { goto L_0896E164; }
    goto L_0896E120;
L_0896E120:;
    cnd_ = s3 == 0;
    if (cnd_) { goto L_0896E138; }
    goto L_0896E128;
L_0896E128:;
    ST32(s3+8, FBITS(f6));
    ST32(s3, FBITS(f8));
    ST32(s3+4, FBITS(f7));
    goto L_0896E134;
L_0896E134:;
    goto L_0896E138;
L_0896E138:;
    sp = sp + 528;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return; }
L_0896E164:;
    v1 = LD32(s4);
    a0 = s4 + 0;
    f20 = BITSF(0);
    v0 = LD32(v1+244);
    s5 = sp + 192;
    t_ = v0;
    s0 = (u32)-1;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896E180;
L_0896E180:;
    a0 = D_08ADB5CC - (-18996);
    v1 = a0 - 18996;
    f9 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(a0-18996));
    f10 = BITSF(LD32(v1+12));
    f11 = BITSF(LD32(v1+20));
    f5 = BITSF(LD32(v1+16));
    f1 = BITSF(LD32(v1+8));
    f0 = f9 - f2;
    f12 = f11 - f5;
    f8 = f10 - f1;
    f7 = BITSF(LD32(v0+8));
    f6 = BITSF(LD32(v0));
    f3 = BITSF(LD32(s1));
    f4 = BITSF(LD32(s1+8));
    ST32(sp+176, FBITS(f0));
    f3 = f3 - f6;
    f4 = f4 - f7;
    ST32(sp+180, FBITS(f8));
    f2 = f2 + f9;
    f1 = f1 + f10;
    ST32(sp+184, FBITS(f12));
    f5 = f5 + f11;
    v1 = D_08AEE264 - (-7580);
    v0 = LD32(sp+176);
    f0 = BITSF(LD32(s1+4));
    t7 = LD32(sp+188);
    ST32(sp+96, v0);
    a2 = sp + 48;
    a3 = sp + 96;
    v0 = LD32(sp+180);
    ST32(sp+56, FBITS(f4));
    t0 = 0 + 0;
    t1 = 4;
    ST32(sp+100, v0);
    t2 = 1;
    t3 = 0 + 0;
    v0 = LD32(sp+184);
    ST32(sp+80, FBITS(f6));
    a1 = sp + 80;
    a0 = s5 + 0;
    ST32(sp+104, v0);
    v0 = D_08AEE260 - (-7584);
    s7 = sp + 176;
    ST32(sp+88, FBITS(f7));
    ST32(sp+32, FBITS(f6));
    ST32(sp+40, FBITS(f7));
    ST32(sp+72, FBITS(f4));
    ST32(sp+48, FBITS(f3));
    ST32(sp+84, FBITS(f0));
    ST32(sp+36, FBITS(f0));
    ST32(sp+64, FBITS(f3));
    ST32(sp+68, FBITS(f20));
    ST32(sp+52, FBITS(f20));
    ST32(sp+108, t7);
    {u32 a_=sp+(416);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(v0-7584));
    f3 = BITSF(LD32(v1-7580));
    ST32(sp+124, t7);
    f2 = f2 * f0;
    f1 = f1 * f0;
    f5 = f5 * f0;
    v0 = FBITS(f0);
    ST32(sp+176, FBITS(f2));
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;v[3]=d3;}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(v[3]));}
    ST32(sp+180, FBITS(f1));
    {u32 a_=sp+(416);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(96);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+184, FBITS(f5));
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr0=d0;vr1=d1;vr2=d2;}
    t6 = LD32(sp+176);
    t5 = LD32(sp+180);
    ST32(sp+176, FBITS(f3));
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(v[3]));}
    ST32(sp+180, FBITS(f20));
    t4 = LD32(sp+184);
    v0 = LD32(sp+176);
    v1 = LD32(sp+180);
    ST32(sp+184, FBITS(f20));
    ST32(sp+176, FBITS(f20));
    ST32(sp+128, v0);
    ST32(sp+132, v1);
    v0 = LD32(sp+184);
    v1 = LD32(sp+176);
    ST32(sp+180, FBITS(f3));
    ST32(sp+112, t6);
    ST32(sp+116, t5);
    ST32(sp+120, t4);
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f5));
    ST32(sp+136, v0);
    ST32(sp+144, v1);
    ST32(sp+140, t7);
    v0 = LD32(sp+180);
    v1 = LD32(sp+184);
    ST32(sp+184, FBITS(f3));
    ST32(sp+148, v0);
    v0 = LD32(sp+176);
    ST32(sp+180, FBITS(f20));
    ST32(sp+160, v0);
    v0 = LD32(sp+184);
    ST32(sp+152, v1);
    v1 = LD32(sp+180);
    ST32(sp+168, v0);
    v0 = 1;
    ST32(sp+164, v1);
    ST32(sp+172, t7);
    ST32(sp+8, v0);
    ST32(sp+156, t7);
    ST32(sp+20, s0);
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+12, 0);
    ST32(sp+16, s0);
    func_088B9090(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_0896E35C;
L_0896E35C:;
    a0 = s5 + 0;
    a1 = 1;
    func_088B9244(a0, a1);
    goto L_0896E368;
L_0896E368:;
    a0 = s5 + 0;
    a1 = 1;
    func_088B9224(a0, a1);
    goto L_0896E374;
L_0896E374:;
    a0 = s5 + 0;
    a1 = 1;
    func_088B9204(a0, a1);
    goto L_0896E380;
L_0896E380:;
    a0 = s5 + 0;
    a1 = 1028;
    func_088B91E4(a0, a1);
    goto L_0896E38C;
L_0896E38C:;
    a0 = s5 + 0;
    a1 = (u32)-59;
    func_088B9284(a0, a1);
    goto L_0896E398;
L_0896E398:;
    a0 = s4 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896E3A0;
L_0896E3A0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0896E55C; }
    goto L_0896E3A8;
L_0896E3A8:;
    a0 = sp + 336;
    goto L_0896E3AC;
L_0896E3AC:;
    a1 = s5 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;func_088B9294(a0, a1); vr0=v[0];vr1=v[1];vr2=v[2];});
    goto L_0896E3B4;
L_0896E3B4:;
    f0 = BITSF(LD32(sp+352));
    f1 = BITSF(LD32(sp+356));
    f2 = BITSF(LD32(sp+360));
    a0 = s5 + 0;
    a1 = s7 + 0;
    ST32(sp+176, FBITS(f0));
    ST32(sp+180, FBITS(f1));
    ST32(sp+184, FBITS(f2));
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    func_088B9178(a0, a1);
    goto L_0896E3E4;
L_0896E3E4:;
    a1 = s7 + 0;
    f2 = BITSF(LD32(s2));
    f0 = BITSF(LD32(sp+32));
    f3 = BITSF(LD32(s2+4));
    f4 = BITSF(LD32(s2+8));
    f2 = f2 - f0;
    f1 = BITSF(LD32(sp+36));
    f0 = BITSF(LD32(sp+40));
    a0 = s5 + 0;
    f3 = f3 - f1;
    f4 = f4 - f0;
    ST32(sp+176, FBITS(f2));
    ST32(sp+180, FBITS(f3));
    ST32(sp+184, FBITS(f4));
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f3));
    ST32(sp+72, FBITS(f4));
    func_088B91AC(a0, a1);
    goto L_0896E42C;
L_0896E42C:;
    a0 = sp + 368;
    a1 = s5 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;func_088B9294(a0, a1); vr0=v[0];vr1=v[1];vr2=v[2];});
    goto L_0896E438;
L_0896E438:;
    cnd_ = s3 == 0;
    f0 = BITSF(LD32(sp+388));
    if (cnd_) { goto L_0896E454; }
    goto L_0896E440;
L_0896E440:;
    f2 = BITSF(LD32(sp+392));
    f1 = BITSF(LD32(sp+384));
    ST32(s3+4, FBITS(f0));
    ST32(s3, FBITS(f1));
    ST32(s3+8, FBITS(f2));
    goto L_0896E454;
L_0896E454:;
    f4 = BITSF(LD32(sp+368));
    f3 = BITSF(LD32(sp+372));
    f2 = BITSF(LD32(sp+376));
    v0 = FBITS(f4);
    {u32 a_=sp+(432);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f13 = f20;
    ST32(sp+64, FBITS(f4));
    fcc = FCMP(f0, f20, 2);
    ST32(sp+68, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+72, FBITS(f2));
    if (cnd_) { goto L_0896E4E4; }
    goto L_0896E4A0;
L_0896E4A0:;
    {float s0=vr0;float d0=sqrtf(s0);v[4]=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];v[8]=(float)1;v[9]=(float)1;v[10]=(float)1;v[11]=(float)1;}
    {v0=FBITS(v[4]);}
    f13 = BITSF(v0);
    {float s0=v[8];float t0=v[4];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    f3 = BITSF(v0);
    {v0=FBITS(vr0);}
    f2 = BITSF(v0);
    ST32(sp+408, FBITS(f3));
    {v0=FBITS(vr1);}
    ST32(sp+400, FBITS(f2));
    ST32(sp+404, v0);
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, v0);
    ST32(sp+72, FBITS(f3));
    goto L_0896E4E4;
L_0896E4E4:;
    f4 = BITSF(LD32(s1+8));
    f5 = BITSF(LD32(s2+8));
    f3 = BITSF(LD32(s1));
    f0 = BITSF(LD32(s2));
    f2 = BITSF(LD32(s1+4));
    f1 = BITSF(LD32(s2+4));
    f3 = f3 - f0;
    f4 = f4 - f5;
    f2 = f2 - f1;
    {u32 a_=sp+(448);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    {vr0=BITSF(v0);}
    v0 = FBITS(f2);
    {vr1=BITSF(v0);}
    v0 = FBITS(f4);
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    a0 = s6 + 0;
    a2 = sp + 64;
    a3 = s3 + 0;
    a1 = sp + 32;
    ST32(sp+400, FBITS(f3));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f12 = BITSF(v0);
    ST32(sp+404, FBITS(f2));
    ST32(sp+408, FBITS(f4));
    func_0896E578(a0, a1, a2, a3, f12, f13);
    goto L_0896E554;
L_0896E554:;
    goto L_0896E138;
L_0896E55C:;
    a0 = s4 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896E564;
L_0896E564:;
    a1 = LD32(v0+8);
    a0 = s5 + 0;
    func_088B91F4(a0, a1);
    goto L_0896E570;
L_0896E570:;
    a0 = sp + 336;
    goto L_0896E3AC;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}

/* 0896E578 */
void func_0896E578(u32 a0, u32 a1, u32 a2, u32 a3, float f12, float f13)
{
    u32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_0896E578:;
    sp = sp - 96;
    s5 = D_08B285A0 - (-31328);
    s4 = D_08AEE268 - (-7576);
    s3 = a3 + 0;
    s2 = a1 + 0;
    a1 = D_08ADB5C8 - (-19000);
    a1 = a1 - 19000;
    s1 = a2 + 0;
    s0 = a0 + 0;
    a2 = sp + 36;
    a0 = sp + 32;
    f21 = f12;
    v0 = LD_U8(s0+92);
    cnd_ = v0 == 0;
    f20 = f13;
    if (cnd_) { goto L_0896E690; }
    goto L_0896E5D8;
L_0896E5D8:;
    f9 = BITSF(LD32(s4-7576));
    goto L_0896E5DC;
L_0896E5DC:;
    f0 = BITSF(LD32(s4-7576));
    goto L_0896E5E0;
L_0896E5E0:;
    f7 = BITSF(LD32(s0+100));
    f8 = f9 * f20;
    f0 = f0 - f9;
    f6 = BITSF(LD32(s1+8));
    f3 = BITSF(LD32(s1));
    f4 = BITSF(LD32(s1+4));
    f0 = f0 * f7;
    f5 = BITSF(LD32(s2+8));
    f1 = BITSF(LD32(s2));
    f2 = BITSF(LD32(s2+4));
    f0 = f0 + f8;
    f3 = f3 * f0;
    f4 = f4 * f0;
    f6 = f6 * f0;
    fcc = FCMP(f21, f0, 12);
    f1 = f1 + f3;
    f2 = f2 + f4;
    f5 = f5 + f6;
    ST32(s0+100, FBITS(f0));
    f0 = f1;
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f5));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f6));
    if (cnd_) { goto L_0896E650; }
    goto L_0896E64C;
L_0896E64C:;
    ST32(s0+100, FBITS(f21));
    goto L_0896E650;
L_0896E650:;
    ST32(s3, FBITS(f0));
    f1 = BITSF(LD32(sp+8));
    f0 = BITSF(LD32(sp+4));
    ST32(s3+8, FBITS(f1));
    ST32(s3+4, FBITS(f0));
    sp = sp + 96;
    return;
L_0896E690:;
    f0 = BITSF(LD32(s0+100));
    f2 = BITSF(LD32(s5-31328));
    f3 = BITSF(LD32(s4-7576));
    fcc = FCMP(f0, f13, 12);
    cnd_ = !fcc;
    f1 = BITSF(LD32(s0+136));
    if (cnd_) { goto L_0896E6B0; }
    goto L_0896E6AC;
L_0896E6AC:;
    f1 = BITSF(LD32(s0+140));
    goto L_0896E6B0;
L_0896E6B0:;
    f0 = f1 * f2;
    ST32(sp+36, FBITS(f3));
    ST32(sp+32, FBITS(f0));
    f0 = func_0896ED7C(a0, a1, a2);
    goto L_0896E6C0;
L_0896E6C0:;
    f9 = f0;
    f1 = BITSF(0);
    f0 = BITSF(LD32(s5-31328));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { f9 = f1; goto L_0896E5DC; }
    goto L_0896E6DC;
L_0896E6DC:;
    f0 = BITSF(LD32(s4-7576));
    goto L_0896E5E0;
}

/* 0896E6E4 */
u64 func_0896E6E4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896E6E4:;
    sp = sp - 16;
    t2 = D_08B15A04 - (23044);
    v0 = D_08B22E88 - (11912);
    a3 = LD32(a0+96);
    a2 = LD32(t2+23044);
    t0 = 1;
    v1 = a3 << 4;
    v1 = v1 + a3;
    v1 = v1 << 3;
    v0 = v0 + 11912;
    v1 = v1 + v0;
    t1 = t0 << (a3 & 31);
    cnd_ = a3 == a2;
    a0 = a1 + 0;
    if (cnd_) { goto L_0896E744; }
    goto L_0896E720;
L_0896E720:;
    v0 = D_08B159FC - (23036);
    ST32(v0+23036, v1);
    v0 = D_08B230B0 - (12464);
    v1 = D_08B230A8 - (12456);
    ST8(v0+12464, t0);
    v0 = D_08B15A0C - (23052);
    ST8(v1+12456, t1);
    ST32(t2+23044, a3);
    ST8(v0+23052, t0);
    goto L_0896E744;
L_0896E744:;
    { u64 r_ = func_0881D3C4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896E74C;
L_0896E74C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0896E758 */
void func_0896E758(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 224);
L_0896E758:;
    sp = sp - 224;
    a2 = 1;
    s2 = a1 + 0;
    s1 = a0 + 0;
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    v0 = LD32(a0+4);
    a0 = D_08C2B3A4 - (-19548);
    a0 = a0 - 19548;
    a1 = v0 + 0;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896E7A4;
L_0896E7A4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0896E914; }
    goto L_0896E7AC;
L_0896E7AC:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896E7C0;
L_0896E7C0:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    v0 = LD32(s1+8);
    ST32(s2, FBITS(f0));
    {u32 a_=sp+(160);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    ST32(s2+4, FBITS(f1));
    cnd_ = v0 != 0;
    ST32(s2+8, FBITS(f2));
    if (cnd_) { goto L_0896EA94; }
    goto L_0896E7E8;
L_0896E7E8:;
    a0 = sp + 0;
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    ST32(sp, 0);
    v0 = func_0881B2B8(a0, 0, 0, 0);
    goto L_0896E7FC;
L_0896E7FC:;
    {u32 a_=sp+(128);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    a1 = LD32(s1+180);
    {u32 a_=sp+(144);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = a1 != 0;
    {u32 a_=sp+(176);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0896EA58; }
    goto L_0896E814;
L_0896E814:;
    a1 = LD32(s1+184);
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_0896E934; }
    goto L_0896E820;
L_0896E820:;
    a0 = s1 + 56;
    v1 = LD32(s1+56);
    v0 = LD32(a0+4);
    a1 = LD32(a0+32);
    {u32 a_=sp+(80);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(112);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(a0+8);
    {v[49]=BITSF(v0);}
    v0 = LD32(a0+16);
    {v[50]=BITSF(v1);}
    v1 = LD32(a0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(96);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(a0+20);
    {v[49]=BITSF(v0);}
    v0 = LD32(a0+24);
    {v[50]=BITSF(v1);}
    {v[32]=BITSF(v0);}
    v1 = LD32(a0+28);
    {v[33]=BITSF(v1);}
    {v[34]=BITSF(a1);}
    a1 = s1 + 168;
    a0 = LD32(a1+8);
    v0 = LD32(s1+168);
    f4 = BITSF(LD32(s2));
    f5 = BITSF(LD32(s2+4));
    f6 = BITSF(LD32(s2+8));
    v1 = LD32(a1+4);
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(64);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[20]=BITSF(v0);}
    {v[21]=BITSF(v1);}
    {v[22]=BITSF(a0);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f0 = BITSF(v0);
    f4 = f4 + f2;
    f6 = f6 + f3;
    f5 = f5 + f0;
    ST32(sp+48, FBITS(f2));
    a0 = sp + 0;
    ST32(s2+8, FBITS(f6));
    ST32(s2+4, FBITS(f5));
    ST32(s2, FBITS(f4));
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f6));
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896E914;
L_0896E914:;
    goto L_0896E918;
L_0896E918:;
    sp = sp + 224;
    return;
L_0896E934:;
    a2 = sp + 16;
    a3 = 0 + 0;
    a0 = LD32(v0-12);
    t0 = 1;
    t1 = (u32)-1;
    a0 = s0 + a0;
    v1 = LD32(a0);
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v0 = LD32(v1+60);
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    t_ = v0;
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896E968;
L_0896E968:;
    f0 = BITSF(LD32(sp+20));
    v1 = D_08AEE26C - (-7572);
    f1 = BITSF(LD32(v1-7572));
    ST32(s2+4, FBITS(f0));
    {u32 a_=sp+(128);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    f20 = BITSF(LD32(s1+148));
    {u32 a_=sp+(160);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    fcc = FCMP(f20, f1, 2);
    cnd_ = fcc;
    {u32 a_=sp+(176);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0896E820; }
    goto L_0896E998;
L_0896E998:;
    f21 = BITSF(LD32(s1+152));
    fcc = FCMP(f21, f1, 2);
    cnd_ = !fcc;
    ST32(s1+116, FBITS(f20));
    if (cnd_) { goto L_0896E9F8; }
    goto L_0896E9AC;
L_0896E9AC:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    v0 = LD32(v1+244);
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    t_ = v0;
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896E9CC;
L_0896E9CC:;
    v1 = v0 + 0;
    v0 = LD_U8(s1+92);
    cnd_ = v0 == 0;
    {u32 a_=sp+(176);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0896E9F0; }
    goto L_0896E9DC;
L_0896E9DC:;
    f1 = BITSF(LD32(s1+116));
    goto L_0896E9E0;
L_0896E9E0:;
    f0 = BITSF(LD32(v1+4));
    f0 = f0 - f1;
    ST32(s2+4, FBITS(f0));
    goto L_0896E820;
L_0896E9F0:;
    f1 = BITSF(LD32(s1+112));
    goto L_0896E9E0;
L_0896E9F8:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+244);
    t_ = v0;
    f20 = f20 - f21;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896EA0C;
L_0896EA0C:;
    f3 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(sp+20));
    v0 = D_08AEE270 - (-7568);
    f0 = BITSF(LD32(v0-7568));
    f2 = f1 - f3;
    {u32 a_=sp+(128);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    f20 = f20 * f0;
    {u32 a_=sp+(144);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    v0 = FBITS(f2);
    {u32 a_=sp+(160);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    f20 = f21 + f20;
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(176);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0896E9AC; }
    goto L_0896EA50;
L_0896EA50:;
    ST32(s1+116, FBITS(f21));
    goto L_0896E9AC;
L_0896EA58:;
    v0 = LD32(s0);
    a2 = s2 + 0;
    a3 = 0 + 0;
    a0 = LD32(v0-12);
    t0 = 1;
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896EA80;
L_0896EA80:;
    {u32 a_=sp+(176);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(128);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    goto L_0896E814;
L_0896EA94:;
    v0 = LD32(s0);
    a1 = 0x300000u;
    a2 = s2 + 0;
    a0 = LD32(v0-12);
    a1 = a1 | 0xcde0;
    a3 = 0 + 0;
    a0 = s0 + a0;
    v1 = LD32(a0);
    t0 = 1;
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896EAC4;
L_0896EAC4:;
    goto L_0896E918;
}

/* 0896EACC */
void func_0896EACC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr48 = v[48], vr49 = v[49], vr50 = v[50], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr99 = v[99], vr106 = v[106];
    u8 stack_[240] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 240);
L_0896EACC:;
    sp = sp - 240;
    s0 = a0 + 0;
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    s1 = a1 + 0;
    ({ v[48]=vr48;v[49]=vr49;v[50]=vr50;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[106]=vr106;func_0896E758(a0, a1); vr48=v[48];vr49=v[49];vr50=v[50];vr96=v[96];vr97=v[97];vr98=v[98];vr99=v[99];vr106=v[106];});
    goto L_0896EAF8;
L_0896EAF8:;
    a1 = LD32(s0+4);
    a0 = D_08C2B3A4 - (-19548);
    a0 = a0 - 19548;
    a2 = 1;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896EB0C;
L_0896EB0C:;
    cnd_ = v0 == 0;
    {u32 a_=sp+(208);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0896EC74; }
    goto L_0896EB14;
L_0896EB14:;
    a0 = s0 + 156;
    {v[112]=BITSF(LD32(s0+(12)));}
    {v[113]=BITSF(LD32(s0+(16)));}
    {v[114]=BITSF(LD32(s0+(20)));}
    {v[115]=BITSF(LD32(s0+(24)));}
    {float s0=v[0];v[120]=(float)1;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[112];float t1=v[113];float t2=v[114];float t3=v[115];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=v[112];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=v[113];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=v[114];v[88]=s0*t0;v[89]=s1*t0;v[90]=s2*t0;v[91]=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=v[115];v[92]=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
    {float s0=v[120];float t0=v[85];float d0=s0-t0;vr96=d0;}
    {float s0=v[120];float t0=v[80];float d0=s0-t0;vr106=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0+t0;v[100]=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0-t0;v[104]=d0;}
    {float s0=vr96;float t0=v[90];float d0=s0-t0;vr96=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0-t0;vr97=d0;}
    {float s0=v[86];float t0=v[83];float d0=s0+t0;v[105]=d0;}
    {float s0=vr106;float t0=v[90];float d0=s0-t0;v[101]=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0+t0;vr98=d0;}
    {float s0=v[86];float t0=v[83];float d0=s0-t0;v[102]=d0;}
    {float s0=vr106;float t0=v[85];float d0=s0-t0;vr106=d0;}
    {ST32(sp+(0),FBITS(vr96));}
    {ST32(sp+(4),FBITS(vr97));}
    {ST32(sp+(8),FBITS(vr98));}
    {ST32(sp+(12),FBITS(v[100]));}
    {ST32(sp+(16),FBITS(v[101]));}
    {ST32(sp+(20),FBITS(v[102]));}
    {ST32(sp+(24),FBITS(v[104]));}
    {ST32(sp+(28),FBITS(v[105]));}
    {ST32(sp+(32),FBITS(vr106));}
    {u32 a_=sp+(112);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    f6 = BITSF(LD32(s1));
    f4 = BITSF(LD32(s1+4));
    f5 = BITSF(LD32(s1+8));
    {vr48=BITSF(v0);}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v0 = LD32(sp+8);
    {vr49=BITSF(v1);}
    {u32 a_=sp+(144);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+12);
    {vr50=BITSF(v0);}
    {u32 a_=sp+(96);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+16);
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(128);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {vr48=BITSF(v1);}
    v1 = LD32(sp+20);
    {vr49=BITSF(v0);}
    v0 = LD32(sp+24);
    {vr50=BITSF(v1);}
    {v[32]=BITSF(v0);}
    v1 = LD32(sp+28);
    v0 = LD32(sp+32);
    {v[33]=BITSF(v1);}
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(a0+8);
    {v[34]=BITSF(v0);}
    v0 = LD32(s0+156);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[20]=BITSF(v0);}
    v0 = LD32(a0+4);
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f0 = BITSF(v0);
    f6 = f6 + f2;
    f5 = f5 + f3;
    f4 = f4 + f0;
    ST32(sp+80, FBITS(f2));
    ST32(s1+8, FBITS(f5));
    ST32(s1+4, FBITS(f4));
    ST32(s1, FBITS(f6));
    ST32(sp+84, v0);
    ST32(sp+88, FBITS(f3));
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, v0);
    ST32(sp+72, FBITS(f3));
    ST32(sp+48, FBITS(f6));
    ST32(sp+52, FBITS(f4));
    ST32(sp+56, FBITS(f5));
    goto L_0896EC74;
L_0896EC74:;
    sp = sp + 240;
    { v[48]=vr48;v[49]=vr49;v[50]=vr50;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[106]=vr106;return; }
    v[48]=vr48;v[49]=vr49;v[50]=vr50;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[106]=vr106;
}

/* 0896EC88 */
float func_0896EC88(u32 a0)
{
    float f0 = 0, f1 = 0;
L_0896EC88:;
    f0 = BITSF(LD32(a0+144));
    f1 = BITSF(LD32(a0+104));
    f0 = f0 / f1;
    return f0;
}

/* 0896EC98 */
rv_t func_0896EC98(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0896EC98:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t1 = D_08C287D0 - (-30768);
    t2 = D_08C287E0 - (-30752);
    t4 = D_08C287F0 - (-30736);
    t0 = D_08C28800 - (-30720);
    a1 = a1 & a0;
    v1 = t1 - 30768;
    a2 = t2 - 30752;
    a3 = t4 - 30736;
    cnd_ = a1 == 0;
    t3 = t0 - 30720;
    if (cnd_) { goto L_0896ED74; }
    goto L_0896ECD0;
L_0896ECD0:;
    v0 = D_08AEE274 - (-7564);
    f3 = BITSF(LD32(v0-7564));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    ST32(t0-30720, 0);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f3;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f3;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f3;
    v0 = D_08AEE27C - (-7556);
    f4 = (float)(s32)FBITS(f0);
    f1 = f1 * f3;
    f0 = BITSF(LD32(v0-7556));
    v0 = D_08AEE278 - (-7560);
    f4 = f4 * f3;
    ST32(a3+12, FBITS(f1));
    ST32(t1-30768, FBITS(f2));
    ST32(t2-30752, FBITS(f6));
    ST32(t3+8, FBITS(f0));
    f0 = BITSF(LD32(v0-7560));
    ST32(v1+4, FBITS(f5));
    ST32(v1+12, FBITS(f1));
    ST32(a2+4, FBITS(f4));
    ST32(a2+12, FBITS(f1));
    ST32(t4-30736, FBITS(f1));
    ST32(t3+4, FBITS(f0));
    ST32(v1+8, FBITS(f6));
    ST32(a3+4, FBITS(f1));
    ST32(a2+8, FBITS(f4));
    ST32(a3+8, FBITS(f1));
    goto L_0896ED74;
L_0896ED74:;
    return (rv_t){ v0, v1, f0 };
}

/* 0896ED7C */
float func_0896ED7C(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0896ED7C:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0896EDA8; }
    goto L_0896ED94;
L_0896ED94:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_0896EDA8; }
    goto L_0896EDA8;
L_0896EDA8:;
    return f0;
}

/* 0896EDB0 */
rv_t func_0896EDB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896EDB0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0896EC98(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896EDC4;
L_0896EDC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0896EDD0 */
void func_0896EDD0(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0896EDD0:;
    sp = sp - 48;
    s2 = a1 + 0;
    v0 = LD_U8(a0);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0896EF80; }
    goto L_0896EDF4;
L_0896EDF4:;
    f4 = BITSF(LD32(a0+20));
    f0 = BITSF(0);
    fcc = FCMP(f0, f4, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(a0+8));
    if (cnd_) { goto L_0896EFFC; }
    goto L_0896EE0C;
L_0896EE0C:;
    f3 = BITSF(LD32(a0+16));
    v0 = D_08AEE280 - (-7552);
    f1 = BITSF(LD32(v0-7552));
    f2 = f3 / f4;
    fcc = FCMP(f4, f3, 12);
    f1 = f1 - f2;
    f0 = f0 * f1;
    cnd_ = !fcc;
    ST32(a0+4, FBITS(f0));
    if (cnd_) { goto L_0896EE34; }
    goto L_0896EE30;
L_0896EE30:;
    ST8(a0, 0);
    goto L_0896EE34;
L_0896EE34:;
    v0 = LD_U8(s0+1);
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(s0+4)); goto L_0896EF58; }
    goto L_0896EE40;
L_0896EE40:;
    a2 = LD32(s0+28);
    v0 = 999;
    cnd_ = a2 == v0;
    s1 = s0 + 32;
    if (cnd_) { goto L_0896EED8; }
    goto L_0896EE50;
L_0896EE50:;
    a0 = D_08B29024 - (-28636);
    v1 = a0 - 28636;
    v0 = LD32(v1+4);
    a1 = LD32(a0-28636);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0896EEA8; }
    goto L_0896EE7C;
L_0896EE7C:;
    a0 = LD32(a1);
    goto L_0896EE80;
L_0896EE80:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0896EFDC; }
    goto L_0896EE98;
L_0896EE98:;
    a1 = LD32(a1+4);
    goto L_0896EE9C;
L_0896EE9C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0896EE80; }
    goto L_0896EEA4;
L_0896EEA4:;
    a0 = 0 + 0;
    goto L_0896EEA8;
L_0896EEA8:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = D_08B28B64 - (-29852); goto L_0896EF98; }
    goto L_0896EEB0;
L_0896EEB0:;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    s1 = s0 + 32;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896EEC0;
L_0896EEC0:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s1+8, FBITS(f0));
    ST32(s0+32, FBITS(f1));
    ST32(s1+4, FBITS(f2));
    goto L_0896EED8;
L_0896EED8:;
    f2 = BITSF(LD32(s2+8));
    f3 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s2+4));
    f5 = BITSF(LD32(s1+8));
    f4 = BITSF(LD32(s1+4));
    f0 = BITSF(LD32(s0+32));
    f5 = f5 - f2;
    f4 = f4 - f1;
    f0 = f0 - f3;
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f3 = BITSF(LD32(s0+4));
    f6 = BITSF(LD32(s0+24));
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v0 = D_08AEE280 - (-7552);
    f2 = BITSF(LD32(v0-7552));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f4));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+8, FBITS(f5));
    f1 = f0 / f6;
    f2 = f2 - f1;
    f3 = f3 * f2;
    ST32(s0+4, FBITS(f3));
    f0 = BITSF(LD32(s0+4));
    goto L_0896EF58;
L_0896EF58:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s0+4, FBITS(f1)); goto L_0896EF6C; }
    goto L_0896EF6C;
L_0896EF6C:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s0+16));
    f0 = f0 + f1;
    ST32(s0+16, FBITS(f0));
    goto L_0896EF80;
L_0896EF80:;
    sp = sp + 48;
    return;
L_0896EF98:;
    a0 = a0 - 29852;
    a1 = a2 + 0;
    v0 = func_08846B80(a0, a1, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0896EFA4;
L_0896EFA4:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0896EFD0; }
    goto L_0896EFAC;
L_0896EFAC:;
    v0 = v0 + 56;
    f1 = BITSF(LD32(v1+56));
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0+4));
    s1 = s0 + 32;
    ST32(s0+32, FBITS(f1));
    ST32(s1+4, FBITS(f0));
    ST32(s1+8, FBITS(f2));
    goto L_0896EED8;
L_0896EFD0:;
    ST8(s0, 0);
    s1 = s0 + 32;
    goto L_0896EED8;
L_0896EFDC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0896EE9C; }
    goto L_0896EFE8;
L_0896EFE8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0896EE9C; }
    goto L_0896EFF4;
L_0896EFF4:;
    goto L_0896EEA8;
L_0896EFFC:;
    ST32(a0+4, FBITS(f0));
    goto L_0896EE34;
}

/* 0896F004 */
void func_0896F004(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0896F004:;
    v1 = D_08B15A00 - (23040);
    v0 = LD32(v1+23040);
    sp = sp - 48;
    s3 = 0 + 0;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_0896F0CC; }
    goto L_0896F040;
L_0896F040:;
    v1 = D_08B22E88 - (11912);
    v0 = D_08C2880C - (-30708);
    s4 = v1 + 11912;
    s7 = v0 - 30708;
    s6 = D_08B15A04 - (23044);
    s5 = 1;
    fp = D_08B15A0C - (23052);
    goto L_0896F05C;
L_0896F05C:;
    v0 = LD32(s6+23044);
    cnd_ = s3 == v0;
    v0 = s5 << (s3 & 31);
    if (cnd_) { goto L_0896F08C; }
    goto L_0896F068;
L_0896F068:;
    v1 = D_08B230A8 - (12456);
    ST8(v1+12456, v0);
    v1 = D_08B230AC - (12460);
    v0 = D_08B159FC - (23036);
    v1 = v1 + 12460;
    ST8(fp+23052, s5);
    ST32(v0+23036, s4);
    ST32(s6+23044, s3);
    ST8(v1+4, s5);
    goto L_0896F08C;
L_0896F08C:;
    s0 = s7 + 0;
    s2 = D_08B159FC - (23036);
    s1 = s7 + 352;
    v0 = LD_U8(s0);
    goto L_0896F09C;
L_0896F09C:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    s0 = s0 + 44;
    if (cnd_) { goto L_0896F0FC; }
    goto L_0896F0A8;
L_0896F0A8:;
    v0 = s0 < s1;
    goto L_0896F0AC;
L_0896F0AC:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(s0); goto L_0896F09C; }
    goto L_0896F0B4;
L_0896F0B4:;
    v1 = D_08B15A00 - (23040);
    v0 = LD32(v1+23040);
    s3 = s3 + 1;
    v0 = (s32)s3 < (s32)v0;
    cnd_ = v0 != 0;
    s4 = s4 + 136;
    if (cnd_) { goto L_0896F05C; }
    goto L_0896F0CC;
L_0896F0CC:;
    sp = sp + 48;
    return;
L_0896F0FC:;
    a1 = LD32(s2+23036);
    func_0896EDD0(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0896F104;
L_0896F104:;
    v0 = s0 < s1;
    goto L_0896F0AC;
}

/* 0896F10C */
u64 func_0896F10C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0896F10C:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    a1 = a1 & a0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0896F148; }
    goto L_0896F128;
L_0896F128:;
    v0 = D_08C2880C - (-30708);
    v0 = v0 - 30708;
    v1 = 7;
    a0 = (u32)-1;
    goto L_0896F138;
L_0896F138:;
    v1 = v1 - 1;
    ST8(v0, 0);
    cnd_ = v1 != a0;
    v0 = v0 + 44;
    if (cnd_) { goto L_0896F138; }
    goto L_0896F148;
L_0896F148:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0896F150 */
rv_t func_0896F150(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896F150:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_0896F10C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896F164;
L_0896F164:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0896F170 */
u32 func_0896F170(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_0896F170:;
    sp = sp - 128;
    v0 = 0x8014;
    s2 = a0 + 0;
    v1 = LD_U16(a0+20);
    ST32(sp+96, a1);
    cnd_ = v1 == v0;
    s1 = LD32(a0+16);
    if (cnd_) { goto L_0896F840; }
    goto L_0896F19C;
L_0896F19C:;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = 0x8020;
    if (cnd_) { goto L_0896F534; }
    goto L_0896F1A8;
L_0896F1A8:;
    v0 = 0x8005;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_0896F520; }
    goto L_0896F1B4;
L_0896F1B4:;
    cnd_ = v0 != 0;
    v0 = 0x800e;
    if (cnd_) { goto L_0896F3B4; }
    goto L_0896F1BC;
L_0896F1BC:;
    v0 = 19;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0896F2DC; }
    goto L_0896F1C8;
L_0896F1C8:;
    v0 = (s32)v1 < 20;
    cnd_ = v0 == 0;
    v0 = 22;
    if (cnd_) { goto L_0896F270; }
    goto L_0896F1D4;
L_0896F1D4:;
    v0 = 7;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 8;
    if (cnd_) { goto L_0896F25C; }
    goto L_0896F1E0;
L_0896F1E0:;
    cnd_ = v0 == 0;
    v0 = 9;
    if (cnd_) { goto L_0896F224; }
    goto L_0896F1E8;
L_0896F1E8:;
    v0 = 1;
    cnd_ = v1 == v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0896F214; }
    goto L_0896F1F4;
L_0896F1F4:;
    a0 = 0 + 0;
    goto L_0896F1F8;
L_0896F1F8:;
    v0 = a0 + 0;
    sp = sp + 128;
    return v0;
L_0896F214:;
    a1 = sp + 96;
    func_08A13BB4(a0, a1, t1, t2, t3);
    goto L_0896F21C;
L_0896F21C:;
    a0 = 1;
    goto L_0896F1F8;
L_0896F224:;
    cnd_ = v1 == v0;
    v0 = 17;
    if (cnd_) { goto L_0896F248; }
    goto L_0896F22C;
L_0896F22C:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = 0 + 0; goto L_0896F1F8; }
    goto L_0896F234;
L_0896F234:;
    a0 = s1 + 0;
    a1 = sp + 96;
    func_089F2040(a0, a1, t1, t2, t3);
    goto L_0896F240;
L_0896F240:;
    a0 = 1;
    goto L_0896F1F8;
L_0896F248:;
    a0 = s1 + 0;
    a1 = sp + 96;
    func_089F26BC(a0, a1, t1, t2, t3);
    goto L_0896F254;
L_0896F254:;
    a0 = 1;
    goto L_0896F1F8;
L_0896F25C:;
    a0 = s1 + 0;
    a1 = sp + 96;
    func_089F3684(a0, a1, t1, t2, t3);
    goto L_0896F268;
L_0896F268:;
    a0 = 1;
    goto L_0896F1F8;
L_0896F270:;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 23;
    if (cnd_) { goto L_0896F2C8; }
    goto L_0896F278;
L_0896F278:;
    cnd_ = v0 == 0;
    v0 = 0x8001;
    if (cnd_) { goto L_0896F2A0; }
    goto L_0896F280;
L_0896F280:;
    v0 = 20;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = 0 + 0; goto L_0896F1F8; }
    goto L_0896F28C;
L_0896F28C:;
    a0 = s1 + 0;
    a1 = sp + 96;
    func_08A10E18(a0, a1, t1, t2, t3);
    goto L_0896F298;
L_0896F298:;
    a0 = 1;
    goto L_0896F1F8;
L_0896F2A0:;
    cnd_ = v1 == v0;
    a0 = 1;
    if (cnd_) { goto L_0896F1F8; }
    goto L_0896F2A8;
L_0896F2A8:;
    v0 = 0x8004;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = 0 + 0; goto L_0896F1F8; }
    goto L_0896F2B4;
L_0896F2B4:;
    a0 = s1 + 0;
    a1 = sp + 96;
    func_089B0B60(a0, a1, t1, t2, t3);
    goto L_0896F2C0;
L_0896F2C0:;
    a0 = 1;
    goto L_0896F1F8;
L_0896F2C8:;
    a0 = s1 + 0;
    a1 = sp + 96;
    func_08A11428(a0, a1, t1, t2, t3);
    goto L_0896F2D4;
L_0896F2D4:;
    a0 = 1;
    goto L_0896F1F8;
L_0896F2DC:;
    a0 = 268;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896F2E4;
L_0896F2E4:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_089E5550(a0, a1);
    goto L_0896F2F4;
L_0896F2F4:;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0896F308; }
    goto L_0896F2FC;
L_0896F2FC:;
    v0 = LD32(s0);
    v1 = LD32(v0-16);
    v0 = s0 + v1;
    goto L_0896F308;
L_0896F308:;
    cnd_ = v0 == 0;
    s0 = D_08AF0F10 - (3856);
    if (cnd_) { goto L_0896F1F4; }
    goto L_0896F310;
L_0896F310:;
    s0 = s0 + 3856;
    ST32(sp+56, 0);
    a0 = v0 + 0;
    s1 = sp + 48;
    ST32(sp+48, s0);
    a2 = LD32(v0);
    v0 = (u32)-1;
    v1 = LD32(s2+4);
    ST32(sp+60, v0);
    v0 = LD32(sp+96);
    ST32(sp+84, v1);
    ST32(sp+76, v0);
    v0 = 1;
    ST8(sp+88, v0);
    ST32(sp+52, 0);
    ST32(sp+64, 0);
    ST32(sp+68, 0);
    ST32(sp+72, 0);
    ST32(sp+80, 0);
    ST8(sp+89, 0);
    v0 = LD32(a2+48);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896F36C;
L_0896F36C:;
    v1 = LD_U8(sp+89);
    cnd_ = v1 == 0;
    ST32(sp+48, s0);
    if (cnd_) { goto L_0896F390; }
    goto L_0896F378;
L_0896F378:;
    v0 = LD_U8(sp+88);
    cnd_ = v0 != 0;
    v0 = D_08AF0EC0 - (3776);
    if (cnd_) { goto L_0896F394; }
    goto L_0896F384;
L_0896F384:;
    a0 = LD32(sp+76);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0896F3A4; }
    goto L_0896F390;
L_0896F390:;
    v0 = D_08AF0EC0 - (3776);
    goto L_0896F394;
L_0896F394:;
    v0 = v0 + 3776;
    a0 = 1;
    ST32(s1, v0);
    goto L_0896F1F8;
L_0896F3A4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896F3AC;
L_0896F3AC:;
    v0 = D_08AF0EC0 - (3776);
    goto L_0896F394;
L_0896F3B4:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0896F500; }
    goto L_0896F3BC;
L_0896F3BC:;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = 0x8010;
    if (cnd_) { goto L_0896F454; }
    goto L_0896F3C8;
L_0896F3C8:;
    v0 = 0x8008;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0896F434; }
    goto L_0896F3D4;
L_0896F3D4:;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = 0x8009;
    if (cnd_) { goto L_0896F400; }
    goto L_0896F3E0;
L_0896F3E0:;
    v0 = 0x8006;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = 0 + 0; goto L_0896F1F8; }
    goto L_0896F3EC;
L_0896F3EC:;
    a0 = s1 + 0;
    a1 = sp + 96;
    func_0899314C(a0, a1, t1, t2, t3);
    goto L_0896F3F8;
L_0896F3F8:;
    a0 = 1;
    goto L_0896F1F8;
L_0896F400:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0896F424; }
    goto L_0896F408;
L_0896F408:;
    v0 = 0x800d;
    cnd_ = v1 != v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0896F1F8; }
    goto L_0896F414;
L_0896F414:;
    a0 = s1 + 0;
    v0 = func_089812C0(a0, t1, t2, t3);
    goto L_0896F41C;
L_0896F41C:;
    goto L_0896F308;
L_0896F424:;
    a0 = s1 + 0;
    v0 = func_08988278(a0, t1, t2, t3);
    goto L_0896F42C;
L_0896F42C:;
    goto L_0896F308;
L_0896F434:;
    a0 = 300;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896F43C;
L_0896F43C:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_089EC670(a0, a1);
    goto L_0896F44C;
L_0896F44C:;
    goto L_0896F2F4;
L_0896F454:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0896F4E0; }
    goto L_0896F45C;
L_0896F45C:;
    v0 = (s32)v1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0896F4C0; }
    goto L_0896F468;
L_0896F468:;
    v0 = 0x8012;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0896F4A0; }
    goto L_0896F474;
L_0896F474:;
    v0 = 0x8013;
    cnd_ = v1 != v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0896F1F8; }
    goto L_0896F480;
L_0896F480:;
    a0 = 100;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896F488;
L_0896F488:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_089F0424(a0, a1);
    goto L_0896F498;
L_0896F498:;
    v0 = s0 + 0;
    goto L_0896F308;
L_0896F4A0:;
    a0 = 48;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896F4A8;
L_0896F4A8:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_0898A0F0(a0, a1);
    goto L_0896F4B8;
L_0896F4B8:;
    v0 = s0 + 0;
    goto L_0896F308;
L_0896F4C0:;
    a0 = 200;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896F4C8;
L_0896F4C8:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_089E812C(a0, a1);
    goto L_0896F4D8;
L_0896F4D8:;
    goto L_0896F2F4;
L_0896F4E0:;
    a0 = 200;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896F4E8;
L_0896F4E8:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_089E7A40(a0, a1);
    goto L_0896F4F8;
L_0896F4F8:;
    goto L_0896F2F4;
L_0896F500:;
    a0 = 212;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896F508;
L_0896F508:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_089F0FB0(a0, a1);
    goto L_0896F518;
L_0896F518:;
    goto L_0896F2F4;
L_0896F520:;
    a0 = s1 + 0;
    a1 = sp + 96;
    func_089A7750(a0, a1, t1, t2, t3);
    goto L_0896F52C;
L_0896F52C:;
    a0 = 1;
    goto L_0896F1F8;
L_0896F534:;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_0896F820; }
    goto L_0896F53C;
L_0896F53C:;
    cnd_ = v0 != 0;
    v0 = 0x8025;
    if (cnd_) { goto L_0896F678; }
    goto L_0896F544;
L_0896F544:;
    v0 = 0x801b;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0896F668; }
    goto L_0896F550;
L_0896F550:;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = 0x801d;
    if (cnd_) { goto L_0896F5F8; }
    goto L_0896F55C;
L_0896F55C:;
    v0 = 0x8017;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0896F5D8; }
    goto L_0896F568;
L_0896F568:;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = 0x8019;
    if (cnd_) { goto L_0896F594; }
    goto L_0896F574;
L_0896F574:;
    v0 = 0x8016;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = 0 + 0; goto L_0896F1F8; }
    goto L_0896F580;
L_0896F580:;
    a0 = s1 + 0;
    a1 = sp + 96;
    func_0898DF28(a0, a1, t1, t2, t3);
    goto L_0896F58C;
L_0896F58C:;
    a0 = 1;
    goto L_0896F1F8;
L_0896F594:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0896F5B8; }
    goto L_0896F59C;
L_0896F59C:;
    v0 = 0x801a;
    cnd_ = v1 != v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0896F1F8; }
    goto L_0896F5A8;
L_0896F5A8:;
    a0 = s1 + 0;
    v0 = func_08A14DF4(a0, t1, t2, t3);
    goto L_0896F5B0;
L_0896F5B0:;
    goto L_0896F308;
L_0896F5B8:;
    a0 = 216;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896F5C0;
L_0896F5C0:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_089EFC08(a0, a1);
    goto L_0896F5D0;
L_0896F5D0:;
    goto L_0896F2F4;
L_0896F5D8:;
    a0 = 196;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896F5E0;
L_0896F5E0:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_089EEFBC(a0, a1);
    goto L_0896F5F0;
L_0896F5F0:;
    goto L_0896F2F4;
L_0896F5F8:;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < (s32)v0;
    if (cnd_) { goto L_0896F654; }
    goto L_0896F600;
L_0896F600:;
    cnd_ = v0 != 0;
    v0 = 0x801e;
    if (cnd_) { goto L_0896F640; }
    goto L_0896F608;
L_0896F608:;
    cnd_ = v1 == v0;
    v0 = 0x801f;
    if (cnd_) { goto L_0896F62C; }
    goto L_0896F610;
L_0896F610:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = 0 + 0; goto L_0896F1F8; }
    goto L_0896F618;
L_0896F618:;
    a0 = s1 + 0;
    a1 = sp + 96;
    func_08A12620(a0, a1, t1, t2, t3);
    goto L_0896F624;
L_0896F624:;
    a0 = 1;
    goto L_0896F1F8;
L_0896F62C:;
    a0 = s1 + 0;
    a1 = sp + 96;
    func_089BC0AC(a0, a1, t1, t2, t3);
    goto L_0896F638;
L_0896F638:;
    a0 = 1;
    goto L_0896F1F8;
L_0896F640:;
    a0 = s1 + 0;
    a1 = sp + 96;
    func_08A0FFE0(a0, a1, t1, t2, t3);
    goto L_0896F64C;
L_0896F64C:;
    a0 = 1;
    goto L_0896F1F8;
L_0896F654:;
    a0 = s1 + 0;
    a1 = sp + 96;
    func_089B5744(a0, a1, t1, t2, t3);
    goto L_0896F660;
L_0896F660:;
    a0 = 1;
    goto L_0896F1F8;
L_0896F668:;
    a0 = s1 + 0;
    v0 = func_08A15DA4(a0, t1, t2, t3);
    goto L_0896F670;
L_0896F670:;
    goto L_0896F308;
L_0896F678:;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_0896F80C; }
    goto L_0896F680;
L_0896F680:;
    cnd_ = v0 != 0;
    v0 = 0x8029;
    if (cnd_) { goto L_0896F70C; }
    goto L_0896F688;
L_0896F688:;
    v0 = 0x8022;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0896F6EC; }
    goto L_0896F694;
L_0896F694:;
    v0 = (s32)v1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0896F6DC; }
    goto L_0896F6A0;
L_0896F6A0:;
    v0 = 0x8023;
    cnd_ = v1 == v0;
    v0 = 0x8024;
    if (cnd_) { goto L_0896F6C8; }
    goto L_0896F6AC;
L_0896F6AC:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = 0 + 0; goto L_0896F1F8; }
    goto L_0896F6B4;
L_0896F6B4:;
    a0 = s1 + 0;
    a1 = sp + 96;
    func_0898C160(a0, a1, t1, t2, t3);
    goto L_0896F6C0;
L_0896F6C0:;
    a0 = 1;
    goto L_0896F1F8;
L_0896F6C8:;
    a0 = s1 + 0;
    a1 = sp + 96;
    func_08989C70(a0, a1, t1, t2, t3);
    goto L_0896F6D4;
L_0896F6D4:;
    a0 = 1;
    goto L_0896F1F8;
L_0896F6DC:;
    a0 = s1 + 0;
    v0 = func_08A143B0(a0, t1, t2, t3);
    goto L_0896F6E4;
L_0896F6E4:;
    goto L_0896F308;
L_0896F6EC:;
    a0 = 96;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896F6F4;
L_0896F6F4:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_089890F4(a0, a1);
    goto L_0896F704;
L_0896F704:;
    v0 = s0 + 0;
    goto L_0896F308;
L_0896F70C:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0896F7FC; }
    goto L_0896F714;
L_0896F714:;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = 0x802a;
    if (cnd_) { goto L_0896F768; }
    goto L_0896F720;
L_0896F720:;
    v0 = 0x8027;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0896F748; }
    goto L_0896F72C;
L_0896F72C:;
    v0 = 0x8028;
    cnd_ = v1 != v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0896F1F8; }
    goto L_0896F738;
L_0896F738:;
    a0 = s1 + 0;
    v0 = func_08A151F0(a0, t1, t2, t3);
    goto L_0896F740;
L_0896F740:;
    goto L_0896F308;
L_0896F748:;
    a0 = 80;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896F750;
L_0896F750:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_089EE678(a0, a1);
    goto L_0896F760;
L_0896F760:;
    v0 = s0 + 0;
    goto L_0896F308;
L_0896F768:;
    cnd_ = v1 == v0;
    v0 = 0x802b;
    if (cnd_) { goto L_0896F798; }
    goto L_0896F770;
L_0896F770:;
    cnd_ = v1 != v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0896F1F8; }
    goto L_0896F778;
L_0896F778:;
    a0 = 72;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896F780;
L_0896F780:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_08A665F0(a0, a1);
    goto L_0896F790;
L_0896F790:;
    v0 = s0 + 0;
    goto L_0896F308;
L_0896F798:;
    v0 = D_08AF0EE8 - (3816);
    v1 = (u32)-1;
    v0 = v0 + 3816;
    a2 = a1 + 0;
    a0 = s1 + 0;
    ST32(sp+12, v1);
    a1 = sp + 0;
    v1 = 1;
    ST32(sp, v0);
    v0 = sp + 96;
    ST32(sp+32, v0);
    ST32(sp+28, a2);
    ST8(sp+40, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+36, 0);
    func_08A13740(a0, a1, t1, t2, t3);
    goto L_0896F7E8;
L_0896F7E8:;
    v0 = D_08AF0EC0 - (3776);
    v0 = v0 + 3776;
    a0 = 1;
    ST32(sp, v0);
    goto L_0896F1F8;
L_0896F7FC:;
    a0 = s1 + 0;
    v0 = func_08A14A18(a0, t1, t2, t3);
    goto L_0896F804;
L_0896F804:;
    goto L_0896F308;
L_0896F80C:;
    a0 = s1 + 0;
    a1 = sp + 96;
    func_0898C784(a0, a1, t1, t2, t3);
    goto L_0896F818;
L_0896F818:;
    a0 = 1;
    goto L_0896F1F8;
L_0896F820:;
    a0 = 76;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896F828;
L_0896F828:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = sp + 96;
    func_08A12B38(a0, a1, a2);
    goto L_0896F838;
L_0896F838:;
    a0 = 1;
    goto L_0896F1F8;
L_0896F840:;
    a0 = s1 + 0;
    a1 = sp + 96;
    func_089C1E70(a0, a1, t1, t2, t3);
    goto L_0896F84C;
L_0896F84C:;
    a0 = 1;
    goto L_0896F1F8;
}

/* 0896F854 */
u32 func_0896F854(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0896F854:;
    sp = sp - 80;
    v0 = 0x8020;
    v1 = LD_U16(a0+20);
    ST32(sp+48, a1);
    cnd_ = v1 == v0;
    s0 = LD32(a0+16);
    if (cnd_) { goto L_0896F938; }
    goto L_0896F874;
L_0896F874:;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = 0x802a;
    if (cnd_) { goto L_0896F8C4; }
    goto L_0896F880;
L_0896F880:;
    v0 = 0x801f;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0896F8A4; }
    goto L_0896F88C;
L_0896F88C:;
    v1 = 0 + 0;
    goto L_0896F890;
L_0896F890:;
    v0 = v1 + 0;
    sp = sp + 80;
    return v0;
L_0896F8A4:;
    a0 = 136;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896F8AC;
L_0896F8AC:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = sp + 48;
    func_08A0E5A0(a0, a1, a2);
    goto L_0896F8BC;
L_0896F8BC:;
    v1 = 1;
    goto L_0896F890;
L_0896F8C4:;
    cnd_ = v1 != v0;
    if (cnd_) { v1 = 0 + 0; goto L_0896F890; }
    goto L_0896F8CC;
L_0896F8CC:;
    v0 = D_08AF0EE8 - (3816);
    v1 = (u32)-1;
    v0 = v0 + 3816;
    a0 = 96;
    ST32(sp+12, v1);
    v1 = 1;
    ST32(sp, v0);
    v0 = sp + 48;
    ST8(sp+40, v1);
    ST32(sp+28, a1);
    ST32(sp+32, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+36, 0);
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896F914;
L_0896F914:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = sp + 0;
    func_08A0EEC8(a0, a1, a2);
    goto L_0896F924;
L_0896F924:;
    v0 = D_08AF0EC0 - (3776);
    v0 = v0 + 3776;
    v1 = 1;
    ST32(sp, v0);
    goto L_0896F890;
L_0896F938:;
    a0 = 72;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896F940;
L_0896F940:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = sp + 48;
    func_08A0E8EC(a0, a1, a2);
    goto L_0896F950;
L_0896F950:;
    v1 = 1;
    goto L_0896F890;
}

/* 0896F958 */
rv_t func_0896F958(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0896F958:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2896C - (-30356);
    t1 = D_08C2897C - (-30340);
    t2 = D_08C2898C - (-30324);
    a1 = a1 & a0;
    v1 = t0 - 30356;
    a2 = t1 - 30340;
    cnd_ = a1 == 0;
    a3 = t2 - 30324;
    if (cnd_) { goto L_0896FA10; }
    goto L_0896F988;
L_0896F988:;
    v0 = D_08AEE294 - (-7532);
    f4 = BITSF(LD32(v0-7532));
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
    ST32(t0-30356, FBITS(f2));
    ST32(t1-30340, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-30324, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0896FA10;
L_0896FA10:;
    return (rv_t){ v0, v1, f0 };
}

/* 0896FA18 */
rv_t func_0896FA18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896FA18:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0896F958(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896FA2C;
L_0896FA2C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0896FA38 */
u64 func_0896FA38(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0896FA38:;
    sp = sp - 32;
    s2 = 1;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a0+8);
    v0 = (s32)v0 < 3;
    cnd_ = v0 != 0;
    ST32(sp, s2);
    if (cnd_) { goto L_0896FBF0; }
    goto L_0896FA68;
L_0896FA68:;
    a1 = D_08C2CEEC - (-12564);
    goto L_0896FA6C;
L_0896FA6C:;
    a1 = a1 - 12564;
    a0 = s0 + 0;
    a2 = 12;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896FA80;
L_0896FA80:;
    a1 = D_08C2CEE4 - (-12572);
    a1 = a1 - 12572;
    a0 = s0 + 0;
    a2 = 8;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896FA98;
L_0896FA98:;
    a1 = D_08C2CEE0 - (-12576);
    a1 = a1 - 12576;
    a0 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896FAB0;
L_0896FAB0:;
    v1 = LD32(s1+8);
    v0 = (s32)v1 < 3;
    cnd_ = v0 != 0;
    v0 = LD32(sp);
    if (cnd_) { goto L_0896FBD4; }
    goto L_0896FAC0;
L_0896FAC0:;
    cnd_ = (s32)v1 <= 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0896FADC; }
    goto L_0896FAC8;
L_0896FAC8:;
    a1 = sp + 4;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896FAD8;
L_0896FAD8:;
    v1 = LD32(s1+8);
    goto L_0896FADC;
L_0896FADC:;
    v0 = (s32)v1 < 2;
    cnd_ = v0 != 0;
    v0 = (s32)v1 < 4;
    if (cnd_) { goto L_0896FB08; }
    goto L_0896FAE8;
L_0896FAE8:;
    v0 = (s32)v1 < 3;
    cnd_ = v0 != 0;
    ST32(sp+8, s2);
    if (cnd_) { goto L_0896FBB8; }
    goto L_0896FAF4;
L_0896FAF4:;
    v0 = LD32(sp+8);
    goto L_0896FAF8;
L_0896FAF8:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0896FB64; }
    goto L_0896FB00;
L_0896FB00:;
    v1 = LD32(s1+8);
    goto L_0896FB04;
L_0896FB04:;
    v0 = (s32)v1 < 4;
    goto L_0896FB08;
L_0896FB08:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0896FB4C; }
    goto L_0896FB10;
L_0896FB10:;
    v0 = (s32)v1 < 5;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0896FB38; }
    goto L_0896FB1C;
L_0896FB1C:;
    goto L_0896FB20;
L_0896FB20:;
    v0 = 1;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_0896FB38:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896FB44;
L_0896FB44:;
    goto L_0896FB20;
L_0896FB4C:;
    a1 = sp + 12;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896FB5C;
L_0896FB5C:;
    v1 = LD32(s1+8);
    goto L_0896FB10;
L_0896FB64:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896FB70;
L_0896FB70:;
    v1 = LD32(s1+8);
    v0 = (s32)v1 < 3;
    cnd_ = v0 == 0;
    v0 = (s32)v1 < 4;
    if (cnd_) { goto L_0896FB08; }
    goto L_0896FB80;
L_0896FB80:;
    v0 = LD32(sp+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(sp+8, v0);
    if (cnd_) { goto L_0896FB04; }
    goto L_0896FB90;
L_0896FB90:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896FBA0;
L_0896FBA0:;
    v1 = LD32(sp+8);
    v1 = v1 - 1;
    cnd_ = v1 != 0;
    ST32(sp+8, v1);
    if (cnd_) { goto L_0896FB90; }
    goto L_0896FBB0;
L_0896FBB0:;
    v1 = LD32(s1+8);
    goto L_0896FB04;
L_0896FBB8:;
    a0 = s0 + 0;
    a1 = sp + 8;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896FBCC;
L_0896FBCC:;
    v0 = LD32(sp+8);
    goto L_0896FAF8;
L_0896FBD4:;
    a0 = s0 + 0;
    a1 = v0 << 1;
    a1 = a1 + v0;
    a1 = a1 << 3;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896FBE8;
L_0896FBE8:;
    v1 = LD32(s1+8);
    goto L_0896FAC0;
L_0896FBF0:;
    a0 = a1 + 0;
    a2 = 4;
    a1 = sp + 0;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896FC04;
L_0896FC04:;
    a1 = D_08C2CEEC - (-12564);
    goto L_0896FA6C;
}

/* 0896FC0C */
rv_t func_0896FC0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896FC0C:;
    sp = sp - 16;
    v0 = 0x70610000u;
    v0 = v0 | 0x6d68;
    a2 = 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    s2 = 1;
    v1 = LD32(a0);
    a0 = a1 + 0;
    cnd_ = v1 == v0;
    a1 = s0 + 0;
    if (cnd_) { goto L_0896FC68; }
    goto L_0896FC48;
L_0896FC48:;
    s2 = 0 + 0;
    v0 = s2 + 0;
    goto L_0896FC50;
L_0896FC50:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0896FC68:;
    func_0882D67C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0896FC70;
L_0896FC70:;
    a1 = LD32(s1+28);
    a0 = s0 + 0;
    { u64 r_ = func_0896FA38(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896FC7C;
L_0896FC7C:;
    v0 = s2 + 0;
    goto L_0896FC50;
}

/* 0896FC84 */
u32 func_0896FC84(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0896FC84:;
    v1 = D_08ADB660 - (-18848);
    v0 = v1 - 18848;
    a1 = LD32(v1-18848);
    t2 = LD32(v0+24);
    v1 = LD32(v0+4);
    a2 = LD32(v0+8);
    a3 = LD32(v0+12);
    t0 = LD32(v0+16);
    t1 = LD32(v0+20);
    sp = sp - 32;
    ST32(sp, a1);
    a0 = a0 << 2;
    a0 = a0 + sp;
    ST32(sp+4, v1);
    ST32(sp+8, a2);
    ST32(sp+12, a3);
    ST32(sp+16, t0);
    ST32(sp+20, t1);
    ST32(sp+24, t2);
    v0 = LD32(a0);
    sp = sp + 32;
    return v0;
}

/* 0896FCDC */
u32 func_0896FCDC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0896FCDC:;
    v0 = D_08ADB734 - (-18636);
    sp = sp - 48;
    a2 = v0 - 18636;
    t1 = a0 + 0;
    a3 = sp + 0;
    t0 = a2 + 48;
    goto L_0896FCF4;
L_0896FCF4:;
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
    if (cnd_) { goto L_0896FCF4; }
    goto L_0896FD20;
L_0896FD20:;
    v1 = t1 << 2;
    v1 = v1 + sp;
    v0 = LD32(v1);
    sp = sp + 48;
    return v0;
}

/* 0896FD34 */
u32 func_0896FD34(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0896FD34:;
    v1 = D_08ADB79C - (-18532);
    v0 = v1 - 18532;
    a1 = LD32(v1-18532);
    t2 = LD32(v0+24);
    v1 = LD32(v0+4);
    a2 = LD32(v0+8);
    a3 = LD32(v0+12);
    t0 = LD32(v0+16);
    t1 = LD32(v0+20);
    sp = sp - 32;
    ST32(sp, a1);
    a0 = a0 << 2;
    a0 = a0 + sp;
    ST32(sp+4, v1);
    ST32(sp+8, a2);
    ST32(sp+12, a3);
    ST32(sp+16, t0);
    ST32(sp+20, t1);
    ST32(sp+24, t2);
    v0 = LD32(a0);
    sp = sp + 32;
    return v0;
}

/* 0896FD8C */
u32 func_0896FD8C(void)
{
    u32 v0 = 0;
L_0896FD8C:;
    v0 = 1;
    return v0;
}

/* 0896FD94 */
void func_0896FD94(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_0896FD94:;
    v0 = D_08C28A50 - (-30128);
    a2 = v0 - 30128;
    a0 = 0 + 0;
    a1 = 999;
    v0 = a0 << 2;
    goto L_0896FDA8;
L_0896FDA8:;
    v0 = v0 + a2;
    v1 = 3;
    goto L_0896FDB0;
L_0896FDB0:;
    v1 = v1 - 1;
    ST32(v0, a1);
    cnd_ = (s32)v1 >= 0;
    v0 = v0 + 192;
    if (cnd_) { goto L_0896FDB0; }
    goto L_0896FDC0;
L_0896FDC0:;
    a0 = a0 + 1;
    v0 = (s32)a0 < 48;
    cnd_ = v0 != 0;
    v0 = a0 << 2;
    if (cnd_) { goto L_0896FDA8; }
    goto L_0896FDD0;
L_0896FDD0:;
    v1 = 1;
    v0 = D_08C28A4C - (-30132);
    ST8(v0-30132, v1);
    return;
}

/* 0896FDE0 */
void func_0896FDE0(void)
{
    u32 v0 = 0;
    int cnd_;
L_0896FDE0:;
    v0 = 47;
    v0 = v0 - 1;
    goto L_0896FDE8;
L_0896FDE8:;
    cnd_ = (s32)v0 >= 0;
    v0 = v0 - 1;
    if (cnd_) { goto L_0896FDE8; }
    goto L_0896FDF0;
L_0896FDF0:;
    v0 = D_08C28A4C - (-30132);
    ST8(v0-30132, 0);
    return;
}

/* 0896FDFC */
void func_0896FDFC(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896FDFC:;
    v0 = D_08C28A4C - (-30132);
    v1 = LD_U8(v0-30132);
    sp = sp - 16;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_0896FE24; }
    goto L_0896FE10;
L_0896FE10:;
    func_0896FD94();
    goto L_0896FE18;
L_0896FE18:;
    sp = sp + 16;
    return;
L_0896FE24:;
    func_0896FDE0();
    goto L_0896FE2C;
L_0896FE2C:;
    goto L_0896FE10;
}

/* 0896FE34 */
void func_0896FE34(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896FE34:;
    v1 = a0 << 1;
    sp = sp - 16;
    v1 = v1 + a0;
    v0 = D_08C28A50 - (-30128);
    v1 = v1 << 6;
    v0 = v0 - 30128;
    a2 = a0 + 0;
    v1 = v1 + v0;
    a0 = 0 + 0;
    v0 = LD32(v1);
    goto L_0896FE60;
L_0896FE60:;
    cnd_ = v0 == a1;
    v1 = v1 + 4;
    if (cnd_) { goto L_0896FE88; }
    goto L_0896FE68;
L_0896FE68:;
    a0 = a0 + 1;
    v0 = (s32)a0 < 48;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_0896FE60; }
    goto L_0896FE78;
L_0896FE78:;
    v0 = 0 + 0;
    goto L_0896FE7C;
L_0896FE7C:;
    sp = sp + 16;
    return;
L_0896FE88:;
    a1 = a2 + 0;
    func_0897009C(a0, a1);
    goto L_0896FE90;
L_0896FE90:;
    v0 = 1;
    goto L_0896FE7C;
}

/* 0896FE98 */
u32 func_0896FE98(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0896FE98:;
    sp = sp - 48;
    v0 = D_08B1BB5C - (-17572);
    s6 = a1 + 0;
    v1 = LD32(v0-17572);
    cnd_ = v1 == 0;
    s3 = a0 + 0;
    if (cnd_) { goto L_0896FFD8; }
    goto L_0896FED4;
L_0896FED4:;
    v0 = 1;
    cnd_ = v1 != v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0896FF84; }
    goto L_0896FEE0;
L_0896FEE0:;
    v0 = 3;
    cnd_ = s3 == v0;
    v0 = D_08ADB7D8 - (-18472);
    if (cnd_) { goto L_0896FFCC; }
    goto L_0896FEEC;
L_0896FEEC:;
    s7 = LD32(v0-18472);
    goto L_0896FEF0;
L_0896FEF0:;
    s2 = D_08B25AC8 - (23240);
    s1 = 0 + 0;
    s5 = s2 + 23240;
    s4 = 48;
    v0 = LD32(s2+23240);
    goto L_0896FF04;
L_0896FF04:;
    a0 = LD32(s5+4);
    a2 = s1 < 0x65u;
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    { u32 x_ = v1, y_ = s4; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = a0 + v0;
    ST32(s5+4, a0);
    a1 = s3 + 0;
    s1 = s1 + 1;
    a0 = 0 + 0;
    s0 = hi;
    cnd_ = a2 == 0;
    ST32(s2+23240, v0);
    if (cnd_) { goto L_0896FF84; }
    goto L_0896FF44;
L_0896FF44:;
    a0 = hi;
    v0 = func_0896FFF4(a0, a1);
    goto L_0896FF50;
L_0896FF50:;
    cnd_ = v0 == 0;
    v0 = LD32(s2+23240);
    if (cnd_) { goto L_0896FF04; }
    goto L_0896FF58;
L_0896FF58:;
    a0 = s6 + 0;
    a2 = s3 + 0;
    a1 = s0 + 0;
    v0 = func_08970024(a0, a1, a2);
    goto L_0896FF68;
L_0896FF68:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0896FFBC; }
    goto L_0896FF70;
L_0896FF70:;
    v0 = D_08B1B8F4 - (-18188);
    v0 = LD32(v0-18188);
    goto L_0896FF78;
L_0896FF78:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = D_08B1B8F4 - (-18188); goto L_0896FFB4; }
    goto L_0896FF80;
L_0896FF80:;
    a0 = v0 + 0;
    goto L_0896FF84;
L_0896FF84:;
    v0 = a0 + 0;
    sp = sp + 48;
    return v0;
L_0896FFB4:;
    v0 = LD32(v0-18188);
    goto L_0896FF80;
L_0896FFBC:;
    a1 = s7 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_0896FFC4;
L_0896FFC4:;
    goto L_0896FF78;
L_0896FFCC:;
    v0 = D_08ADB7E0 - (-18464);
    s7 = LD32(v0-18464);
    goto L_0896FEF0;
L_0896FFD8:;
    cnd_ = a0 != 0;
    v0 = D_08ADB7E4 - (-18460);
    if (cnd_) { goto L_0896FFEC; }
    goto L_0896FFE0;
L_0896FFE0:;
    v0 = D_08ADB7DC - (-18468);
    s7 = LD32(v0-18468);
    goto L_0896FEF0;
L_0896FFEC:;
    s7 = LD32(v0-18460);
    goto L_0896FEF0;
}

/* 0896FFF4 */
u32 func_0896FFF4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_0896FFF4:;
    v1 = a1 << 1;
    v1 = v1 + a1;
    v1 = v1 << 4;
    v1 = v1 + a0;
    v0 = D_08C28A50 - (-30128);
    v0 = v0 - 30128;
    v1 = v1 << 2;
    v1 = v1 + v0;
    v0 = LD32(v1);
    v0 = v0 ^ 0x3e7;
    v0 = v0 < 0x1u;
    return v0;
}

/* 08970024 */
u32 func_08970024(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08970024:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = a1 + 0;
    a0 = s1 + 0;
    a1 = a2 + 0;
    s0 = a2 + 0;
    v0 = func_0896FFF4(a0, a1);
    goto L_08970050;
L_08970050:;
    v1 = s0 << 1;
    v1 = v1 + s0;
    v1 = v1 << 4;
    v1 = v1 + s1;
    a0 = D_08C28A50 - (-30128);
    a0 = a0 - 30128;
    v1 = v1 << 2;
    v1 = v1 + a0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08970080; }
    goto L_08970078;
L_08970078:;
    ST32(v1, s2);
    a0 = 1;
    goto L_08970080;
L_08970080:;
    v0 = a0 + 0;
    sp = sp + 16;
    return v0;
}

/* 0897009C */
void func_0897009C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0897009C:;
    v1 = a1 << 1;
    v1 = v1 + a1;
    v1 = v1 << 4;
    v1 = v1 + a0;
    v0 = D_08C28A50 - (-30128);
    v0 = v0 - 30128;
    v1 = v1 << 2;
    v1 = v1 + v0;
    a0 = LD32(v1);
    a1 = 999;
    cnd_ = a0 == a1;
    v0 = 0 + 0;
    if (cnd_) { goto L_089700D4; }
    goto L_089700CC;
L_089700CC:;
    ST32(v1, a1);
    v0 = 1;
    goto L_089700D4;
L_089700D4:;
    return;
}

/* 089700DC */
rv_t func_089700DC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089700DC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C28A1C - (-30180);
    t1 = D_08C28A2C - (-30164);
    t2 = D_08C28A3C - (-30148);
    a1 = a1 & a0;
    v1 = t0 - 30180;
    a2 = t1 - 30164;
    cnd_ = a1 == 0;
    a3 = t2 - 30148;
    if (cnd_) { goto L_08970194; }
    goto L_0897010C;
L_0897010C:;
    v0 = D_08AEE298 - (-7528);
    f4 = BITSF(LD32(v0-7528));
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
    ST32(t0-30180, FBITS(f2));
    ST32(t1-30164, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-30148, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08970194;
L_08970194:;
    return (rv_t){ v0, v1, f0 };
}

/* 0897019C */
rv_t func_0897019C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897019C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089700DC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089701B0;
L_089701B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089701BC */
u32 func_089701BC(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u32 t_;
L_089701BC:;
    v0 = a0 < 0x66u;
    cnd_ = v0 == 0;
    v1 = D_08ADB7E8 - (-18456);
    if (cnd_) { goto L_08970278; }
    goto L_089701C8;
L_089701C8:;
    v0 = a0 << 2;
    v1 = v1 - 18456;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089701E0u: goto L_089701E0; case 0x089701E8u: goto L_089701E8; case 0x089701F0u: goto L_089701F0; case 0x089701F8u: goto L_089701F8; case 0x08970200u: goto L_08970200; case 0x08970208u: goto L_08970208; case 0x08970210u: goto L_08970210; case 0x08970218u: goto L_08970218; case 0x08970220u: goto L_08970220; case 0x08970228u: goto L_08970228; case 0x08970230u: goto L_08970230; case 0x08970238u: goto L_08970238; case 0x08970240u: goto L_08970240; case 0x08970248u: goto L_08970248; case 0x08970250u: goto L_08970250; case 0x08970258u: goto L_08970258; case 0x08970260u: goto L_08970260; case 0x08970268u: goto L_08970268; case 0x08970270u: goto L_08970270; case 0x08970278u: goto L_08970278; case 0x08970280u: goto L_08970280; case 0x08970288u: goto L_08970288; default: rs_break(0, 0x089701d8); }
L_089701E0:;
    v0 = 7;
    return v0;
L_089701E8:;
    v0 = 8;
    return v0;
L_089701F0:;
    v0 = 9;
    return v0;
L_089701F8:;
    v0 = 10;
    return v0;
L_08970200:;
    v0 = 11;
    return v0;
L_08970208:;
    v0 = 12;
    return v0;
L_08970210:;
    v0 = 13;
    return v0;
L_08970218:;
    v0 = 14;
    return v0;
L_08970220:;
    v0 = 15;
    return v0;
L_08970228:;
    v0 = 16;
    return v0;
L_08970230:;
    v0 = 17;
    return v0;
L_08970238:;
    v0 = 18;
    return v0;
L_08970240:;
    v0 = 19;
    return v0;
L_08970248:;
    v0 = 20;
    return v0;
L_08970250:;
    v0 = 21;
    return v0;
L_08970258:;
    v0 = 352;
    return v0;
L_08970260:;
    v0 = 371;
    return v0;
L_08970268:;
    v0 = 372;
    return v0;
L_08970270:;
    v0 = 401;
    return v0;
L_08970278:;
    v0 = 7;
    return v0;
L_08970280:;
    v0 = 22;
    return v0;
L_08970288:;
    v0 = 23;
    return v0;
}

/* 08970290 */
u32 func_08970290(u32 a0)
{
    u32 v0 = 0;
L_08970290:;
    v0 = a0 ^ 0xb;
    v0 = v0 < 0x1u;
    return v0;
}

/* 0897029C */
void func_0897029C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897029C:;
    sp = sp - 16;
    v0 = D_08B2BB7C - (-17540);
    a0 = LD32(v0-17540);
    func_08A641DC(a0, t1, t2, t3);
    goto L_089702B0;
L_089702B0:;
    a0 = 1;
    v0 = D_08C28D84 - (-29308);
    v1 = D_08C28D90 - (-29296);
    ST32(v0-29308, a0);
    ST8(v1-29296, 0);
    sp = sp + 16;
    return;
}

/* 089702D0 */
void func_089702D0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089702D0:;
    sp = sp - 16;
    { u64 r_ = func_088A4B54(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089702E0;
L_089702E0:;
    cnd_ = v0 == 0;
    v0 = D_08B2AE2C - (-20948);
    if (cnd_) { goto L_08970310; }
    goto L_089702E8;
L_089702E8:;
    v1 = LD32(v0-20948);
    cnd_ = v1 != 0;
    v0 = D_08B2AC60 - (-21408);
    if (cnd_) { goto L_08970310; }
    goto L_089702F4;
L_089702F4:;
    v1 = LD_U8(v0-21408);
    cnd_ = v1 == 0;
    v1 = D_08B15FAC - (24492);
    if (cnd_) { goto L_08970310; }
    goto L_08970300;
L_08970300:;
    v0 = LD32(v1+24492);
    v0 = ~(0 | v0);
    cnd_ = v0 == 0;
    v1 = 17;
    if (cnd_) { goto L_089703B0; }
    goto L_08970310;
L_08970310:;
    func_08970ACC(0, 0, 0, 0, 0, 0, 0);
    goto L_08970318;
L_08970318:;
    v0 = D_08C28D80 - (-29312);
    v0 = LD32(v0-29312);
    v1 = v0 < 0x7u;
    cnd_ = v1 == 0;
    v1 = D_08ADB980 - (-18048);
    if (cnd_) { goto L_0897034C; }
    goto L_0897032C;
L_0897032C:;
    v0 = v0 << 2;
    v1 = v1 - 18048;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08970344u: goto L_08970344; case 0x0897034Cu: goto L_0897034C; case 0x08970360u: goto L_08970360; case 0x08970370u: goto L_08970370; case 0x08970380u: goto L_08970380; case 0x08970390u: goto L_08970390; case 0x089703A0u: goto L_089703A0; default: rs_break(0, 0x0897033c); }
L_08970344:;
    func_08970454(0, 0, 0, 0, 0, 0, 0);
    goto L_0897034C;
L_0897034C:;
    func_08970CD0(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08970354;
L_08970354:;
    sp = sp + 16;
    return;
L_08970360:;
    func_0897049C();
    goto L_08970368;
L_08970368:;
    goto L_0897034C;
L_08970370:;
    func_0897059C();
    goto L_08970378;
L_08970378:;
    goto L_0897034C;
L_08970380:;
    func_08970680();
    goto L_08970388;
L_08970388:;
    goto L_0897034C;
L_08970390:;
    func_089708E4(0, 0, 0);
    goto L_08970398;
L_08970398:;
    goto L_0897034C;
L_089703A0:;
    func_08970A2C();
    goto L_089703A8;
L_089703A8:;
    goto L_0897034C;
L_089703B0:;
    v0 = D_08B2BB90 - (-17520);
    a0 = 17;
    ST32(v0-17520, v1);
    { u64 r_ = func_08970C5C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089703C0;
L_089703C0:;
    goto L_08970310;
}

/* 089703C8 */
void func_089703C8(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089703C8:;
    v0 = D_08C28D84 - (-29308);
    sp = sp - 16;
    ST32(v0-29308, 0);
    func_08970ACC(a1, a2, a3, t0, t1, t2, t3);
    goto L_089703E0;
L_089703E0:;
    func_08A643B4(0, 0, 0);
    goto L_089703E8;
L_089703E8:;
    v0 = D_08B2BB90 - (-17520);
    a0 = LD32(v0-17520);
    v1 = 17;
    cnd_ = a0 == v1;
    if (cnd_) { goto L_08970418; }
    goto L_089703FC;
L_089703FC:;
    func_08832344(0, 0, 0);
    goto L_08970404;
L_08970404:;
    func_08A29000();
    goto L_0897040C;
L_0897040C:;
    sp = sp + 16;
    return;
L_08970418:;
    func_088A4CBC(0, 0, 0, 0, 0, 0, 0);
    goto L_08970420;
L_08970420:;
    goto L_089703FC;
}

/* 08970428 */
void func_08970428(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08970428:;
    sp = sp - 16;
    func_089722C4();
    goto L_08970438;
L_08970438:;
    func_088A1678(0, 0, 0, 0, 0, 0, 0);
    goto L_08970440;
L_08970440:;
    func_08975C88();
    goto L_08970448;
L_08970448:;
    sp = sp + 16;
    return;
}

/* 08970454 */
void func_08970454(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08970454:;
    sp = sp - 16;
    v0 = func_08975DC0(a1, a2, a3, t0, t1, t2, t3);
    goto L_08970464;
L_08970464:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08970478; }
    goto L_0897046C;
L_0897046C:;
    v1 = 2;
    v0 = D_08C28D84 - (-29308);
    ST32(v0-29308, v1);
    goto L_08970478;
L_08970478:;
    sp = sp + 16;
    return;
}

/* 08970480 */
void func_08970480(void)
{
L_08970480:;
    return;
}

/* 08970488 */
void func_08970488(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08970488:;
    v0 = D_08AEE29C - (-7524);
    f0 = BITSF(LD32(v0-7524));
    v1 = D_08C28D88 - (-29304);
    ST32(v1-29304, FBITS(f0));
    return;
}

/* 0897049C */
void func_0897049C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897049C:;
    sp = sp - 16;
    v0 = func_08970C10();
    goto L_089704AC;
L_089704AC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089704C0; }
    goto L_089704B4;
L_089704B4:;
    goto L_089704B8;
L_089704B8:;
    sp = sp + 16;
    return;
L_089704C0:;
    func_0883BFA8();
    goto L_089704C8;
L_089704C8:;
    func_08897F68(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089704D0;
L_089704D0:;
    v0 = D_08B288B7 - (-30537);
    v1 = LD_U8(v0-30537);
    cnd_ = v1 == 0;
    v0 = D_08B2869F - (-31073);
    if (cnd_) { goto L_089704EC; }
    goto L_089704E0;
L_089704E0:;
    v1 = LD_U8(v0-31073);
    cnd_ = v1 == 0;
    a0 = 101;
    if (cnd_) { goto L_08970538; }
    goto L_089704EC;
L_089704EC:;
    func_088ABED0(0, 0, 0);
    goto L_089704F4;
L_089704F4:;
    func_088AD4AC(0, 0);
    goto L_089704FC;
L_089704FC:;
    v0 = func_088ABDE4();
    goto L_08970504;
L_08970504:;
    cnd_ = v0 == 0;
    v0 = D_08B2BB9C - (-17508);
    if (cnd_) { goto L_08970548; }
    goto L_0897050C;
L_0897050C:;
    v1 = D_08C28D88 - (-29304);
    v0 = D_08B2859C - (-31332);
    f0 = BITSF(LD32(v1-29304));
    f2 = BITSF(LD32(v0-31332));
    f1 = BITSF(0);
    f0 = f0 - f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    ST32(v1-29304, FBITS(f0));
    if (cnd_) { goto L_089704B4; }
    goto L_08970534;
L_08970534:;
    a0 = 11;
    goto L_08970538;
L_08970538:;
    { u64 r_ = func_08970C5C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08970540;
L_08970540:;
    goto L_089704B8;
L_08970548:;
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    v1 = 3;
    if (cnd_) { goto L_08970558; }
    goto L_08970554;
L_08970554:;
    v1 = 4;
    goto L_08970558;
L_08970558:;
    v0 = D_08C28D84 - (-29308);
    ST32(v0-29308, v1);
    goto L_089704B4;
}

/* 08970564 */
void func_08970564(void)
{
L_08970564:;
    return;
}

/* 0897056C */
void func_0897056C(u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897056C:;
    sp = sp - 16;
    v0 = D_08AEE2A0 - (-7520);
    v1 = D_08C28D88 - (-29304);
    f0 = BITSF(LD32(v0-7520));
    v0 = D_08C28D91 - (-29295);
    ST8(v0-29295, 0);
    ST32(v1-29304, FBITS(f0));
    func_08A63084(t2, t3);
    goto L_08970590;
L_08970590:;
    sp = sp + 16;
    return;
}

/* 0897059C */
void func_0897059C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897059C:;
    sp = sp - 16;
    v0 = func_08970C10();
    goto L_089705AC;
L_089705AC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089705C0; }
    goto L_089705B4;
L_089705B4:;
    goto L_089705B8;
L_089705B8:;
    sp = sp + 16;
    return;
L_089705C0:;
    func_0883BFA8();
    goto L_089705C8;
L_089705C8:;
    func_08897F68(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089705D0;
L_089705D0:;
    v0 = D_08B288B7 - (-30537);
    v1 = LD_U8(v0-30537);
    cnd_ = v1 == 0;
    v0 = D_08B2869F - (-31073);
    if (cnd_) { goto L_089705EC; }
    goto L_089705E0;
L_089705E0:;
    v1 = LD_U8(v0-31073);
    cnd_ = v1 == 0;
    a0 = 101;
    if (cnd_) { goto L_08970634; }
    goto L_089705EC;
L_089705EC:;
    func_088ABED0(0, 0, 0);
    goto L_089705F4;
L_089705F4:;
    func_088AD4AC(0, 0);
    goto L_089705FC;
L_089705FC:;
    v0 = D_08C28D91 - (-29295);
    v1 = LD_U8(v0-29295);
    cnd_ = v1 != 0;
    a1 = D_08C28D88 - (-29304);
    if (cnd_) { goto L_08970644; }
    goto L_0897060C;
L_0897060C:;
    v0 = D_08B2859C - (-31332);
    f1 = BITSF(LD32(a1-29304));
    f2 = BITSF(LD32(v0-31332));
    f0 = BITSF(0);
    a0 = 11;
    f1 = f1 - f2;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    ST32(a1-29304, FBITS(f1));
    if (cnd_) { goto L_089705B4; }
    goto L_08970634;
L_08970634:;
    { u64 r_ = func_08970C5C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897063C;
L_0897063C:;
    goto L_089705B8;
L_08970644:;
    v1 = 4;
    v0 = D_08C28D84 - (-29308);
    ST32(v0-29308, v1);
    goto L_089705B4;
}

/* 08970654 */
void func_08970654(void)
{
L_08970654:;
    return;
}

/* 0897065C */
void func_0897065C(u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897065C:;
    sp = sp - 16;
    a0 = 1;
    func_08A60C74(t1, t2, t3);
    goto L_0897066C;
L_0897066C:;
    func_08971770(0, 0, 0, 0, 0);
    goto L_08970674;
L_08970674:;
    sp = sp + 16;
    return;
}

/* 08970680 */
void func_08970680(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08970680:;
    sp = sp - 16;
    v0 = func_08970C10();
    goto L_08970690;
L_08970690:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089706A4; }
    goto L_08970698;
L_08970698:;
    goto L_0897069C;
L_0897069C:;
    sp = sp + 16;
    return;
L_089706A4:;
    func_089719A0();
    goto L_089706AC;
L_089706AC:;
    v0 = D_08C28F3C - (-28868);
    a0 = LD32(v0-28868);
    v1 = 7;
    cnd_ = a0 == v1;
    v0 = 8;
    if (cnd_) { goto L_089706F8; }
    goto L_089706C0;
L_089706C0:;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_0897069C; }
    goto L_089706C8;
L_089706C8:;
    v0 = func_08A2AA70();
    goto L_089706D0;
L_089706D0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0897069C; }
    goto L_089706D8;
L_089706D8:;
    v0 = D_08C2CE6C - (-12692);
    a0 = LD32(v0-12692);
    v1 = 2;
    cnd_ = a0 == v1;
    v1 = 5;
    if (cnd_) { goto L_0897069C; }
    goto L_089706EC;
L_089706EC:;
    v0 = D_08C28D84 - (-29308);
    ST32(v0-29308, v1);
    goto L_08970698;
L_089706F8:;
    { u64 r_ = func_08A3CC70(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08970700;
L_08970700:;
    cnd_ = v0 == 0;
    v1 = 5;
    if (cnd_) { goto L_089706EC; }
    goto L_08970708;
L_08970708:;
    v1 = 2;
    v0 = D_08C28DC8 - (-29240);
    ST32(v0-29240, v1);
    goto L_08970698;
}

/* 08970718 */
void func_08970718(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08970718:;
    sp = sp - 16;
    func_08971B24(a3, t0, t1, t2, t3);
    goto L_08970728;
L_08970728:;
    sp = sp + 16;
    return;
}

/* 08970734 */
void func_08970734(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08970734:;
    sp = sp - 32;
    v0 = D_08AEE2A4 - (-7516);
    s1 = D_08C28D88 - (-29304);
    f0 = BITSF(LD32(v0-7516));
    ST32(s1-29304, FBITS(f0));
    func_08832344(t1, t2, t3);
    goto L_0897075C;
L_0897075C:;
    func_08A29000();
    goto L_08970764;
L_08970764:;
    func_0896FDFC();
    goto L_0897076C;
L_0897076C:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    s0 = D_08C28D90 - (-29296);
    if (cnd_) { goto L_089707C0; }
    goto L_0897077C;
L_0897077C:;
    v0 = LD_U8(s0-29296);
    cnd_ = v0 != 0;
    v0 = D_08C28F7C - (-28804);
    if (cnd_) { goto L_089707B4; }
    goto L_08970788;
L_08970788:;
    a1 = v0 - 28804;
    v1 = LD_U8(a1+21);
    cnd_ = v1 != 0;
    a0 = 999;
    if (cnd_) { goto L_089707B8; }
    goto L_08970798;
L_08970798:;
    v0 = D_08C28F60 - (-28832);
    a0 = LD32(v0-28832);
    v1 = 5;
    cnd_ = a0 == v1;
    if (cnd_) { v0 = LD_U8(a1+20); goto L_08970804; }
    goto L_089707AC;
L_089707AC:;
    func_089797D4();
    goto L_089707B4;
L_089707B4:;
    a0 = 999;
    goto L_089707B8;
L_089707B8:;
    ST8(s0-29296, 0);
    { rv_t r_ = func_08A6377C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089707C0;
L_089707C0:;
    v0 = func_08978770();
    goto L_089707C8;
L_089707C8:;
    f12 = BITSF(LD32(s1-29304));
    s0 = v0 + 0;
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089707D4;
L_089707D4:;
    a0 = D_08ADB99C - (-18020);
    a0 = a0 - 18020;
    a1 = s0 + 0;
    a2 = v0 + 0;
    a3 = v1 + 0;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089707EC;
L_089707EC:;
    sp = sp + 32;
    return;
L_08970804:;
    cnd_ = v0 == 0;
    a0 = 999;
    if (cnd_) { goto L_089707B8; }
    goto L_0897080C;
L_0897080C:;
    v0 = func_08978770();
    goto L_08970814;
L_08970814:;
    a1 = D_08ADB9E8 - (-17944);
    a0 = v0 + 0;
    a1 = a1 - 17944;
    a2 = 5;
    v0 = func_08A89AFC(a0, a1, a2);
    goto L_08970828;
L_08970828:;
    cnd_ = v0 != 0;
    a2 = D_08C2933C - (-27844);
    if (cnd_) { goto L_089707AC; }
    goto L_08970830;
L_08970830:;
    a0 = a2 - 27844;
    v0 = LD32(a0+1500);
    v1 = LD_U8(a0+6);
    a3 = a0 + 0;
    v0 = 0 < v0;
    cnd_ = v1 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08970854; }
    goto L_0897084C;
L_0897084C:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(a3+6, a1); goto L_0897085C; }
    goto L_08970854;
L_08970854:;
    a1 = 1;
    ST8(a3+6, a1);
    goto L_0897085C;
L_0897085C:;
    a3 = a2 - 27844;
    t1 = a3 + 0;
    v0 = LD32(a3+1504);
    v1 = LD_U8(a3+6);
    ST32(a0+1500, 0);
    v0 = v0 ^ 0xc;
    v0 = 0 < v0;
    cnd_ = v1 != 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08970888; }
    goto L_08970880;
L_08970880:;
    cnd_ = v0 == 0;
    v0 = D_08AEE2A8 - (-7512);
    if (cnd_) { goto L_08970890; }
    goto L_08970888;
L_08970888:;
    t0 = 1;
    v0 = D_08AEE2A8 - (-7512);
    goto L_08970890;
L_08970890:;
    v1 = a2 - 27844;
    f20 = BITSF(LD32(v0-7512));
    v0 = 12;
    a1 = LD_U8(v1+63);
    ST32(a3+1504, v0);
    a0 = D_08ADB9F0 - (-17936);
    a0 = a0 - 17936;
    ST8(t1+6, t0);
    f12 = f20;
    a2 = 1;
    func_08A69188(a0, a1, a2, f12);
    goto L_089708BC;
L_089708BC:;
    a0 = D_08ADB9F8 - (-17928);
    a0 = a0 - 17928;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 1;
    func_08A69188(a0, a1, a2, f12);
    goto L_089708D4;
L_089708D4:;
    v1 = 4;
    v0 = D_08C28DC8 - (-29240);
    ST32(v0-29240, v1);
    goto L_089707EC;
}

/* 089708E4 */
void func_089708E4(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089708E4:;
    sp = sp - 16;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    s0 = D_08C28D88 - (-29304);
    if (cnd_) { goto L_08970978; }
    goto L_08970900;
L_08970900:;
    func_0883BFA8();
    goto L_08970908;
L_08970908:;
    v0 = D_08B2859C - (-31332);
    f1 = BITSF(LD32(v0-31332));
    f0 = BITSF(LD32(s0-29304));
    v0 = D_08AEE2AC - (-7508);
    f0 = f0 - f1;
    f1 = BITSF(LD32(v0-7508));
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    ST32(s0-29304, FBITS(f0));
    if (cnd_) { goto L_08970960; }
    goto L_08970930;
L_08970930:;
    f1 = BITSF(LD32(s0-29304));
    goto L_08970934;
L_08970934:;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08970954; }
    goto L_08970948;
L_08970948:;
    v1 = 1;
    v0 = D_08C28D84 - (-29308);
    ST32(v0-29308, v1);
    goto L_08970954;
L_08970954:;
    sp = sp + 16;
    return;
L_08970960:;
    v0 = func_0883C108();
    goto L_08970968;
L_08970968:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s0-29304, 0); goto L_08970930; }
    goto L_08970970;
L_08970970:;
    f1 = BITSF(LD32(s0-29304));
    goto L_08970934;
L_08970978:;
    func_088ABED0(t1, t2, t3);
    goto L_08970980;
L_08970980:;
    func_088AD4AC(0, 0);
    goto L_08970988;
L_08970988:;
    goto L_08970900;
}

/* 08970990 */
void func_08970990(void)
{
    u32 v0 = 0;
L_08970990:;
    v0 = D_08B2BB73 - (-17549);
    ST8(v0-17549, 0);
    return;
}

/* 0897099C */
void func_0897099C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897099C:;
    sp = sp - 16;
    s1 = D_08C28D8C - (-29300);
    func_08832344(t1, t2, t3);
    goto L_089709B4;
L_089709B4:;
    s0 = 438;
    func_08A29000();
    goto L_089709BC;
L_089709BC:;
    a0 = LD32(s1-29300);
    v0 = func_08970290(a0);
    goto L_089709C4;
L_089709C4:;
    a0 = LD32(s1-29300);
    v1 = 6;
    if (v0 == 0) s0 = v1;
    v0 = func_089701BC(a0);
    goto L_089709D4;
L_089709D4:;
    a1 = v0 + 0;
    a2 = 1;
    a0 = s0 + 0;
    func_08975EB0(a0, a1, a2);
    goto L_089709E4;
L_089709E4:;
    v0 = D_08AEE2B0 - (-7504);
    f0 = BITSF(LD32(v0-7504));
    v1 = D_08C28D88 - (-29304);
    a0 = LD32(s1-29300);
    ST32(v1-29304, FBITS(f0));
    v0 = func_089701BC(a0);
    goto L_089709FC;
L_089709FC:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08970A08;
L_08970A08:;
    a0 = D_08ADBA00 - (-17920);
    a0 = a0 - 17920;
    a1 = v0 + 0;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08970A18;
L_08970A18:;
    sp = sp + 16;
    return;
}

/* 08970A2C */
void func_08970A2C(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08970A2C:;
    sp = sp - 16;
    func_0883BFA8();
    goto L_08970A3C;
L_08970A3C:;
    v1 = D_08C28D88 - (-29304);
    v0 = D_08B2859C - (-31332);
    f0 = BITSF(LD32(v1-29304));
    f2 = BITSF(LD32(v0-31332));
    f1 = BITSF(0);
    f0 = f0 - f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    ST32(v1-29304, FBITS(f0));
    if (cnd_) { goto L_08970A70; }
    goto L_08970A64;
L_08970A64:;
    goto L_08970A68;
L_08970A68:;
    sp = sp + 16;
    return;
L_08970A70:;
    v0 = func_0883C108();
    goto L_08970A78;
L_08970A78:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08970A68; }
    goto L_08970A80;
L_08970A80:;
    v0 = D_08C2CE64 - (-12700);
    v1 = LD_U8(v0-12700);
    cnd_ = v1 == 0;
    v1 = 3;
    if (cnd_) { goto L_08970AA4; }
    goto L_08970A90;
L_08970A90:;
    v0 = D_08C2D0BC - (-12100);
    v1 = LD32(v0-12100);
    cnd_ = v1 == 0;
    if (cnd_) { v1 = 3; goto L_08970AA4; }
    goto L_08970AA0;
L_08970AA0:;
    v1 = 4;
    goto L_08970AA4;
L_08970AA4:;
    v0 = D_08C28DC8 - (-29240);
    ST32(v0-29240, v1);
    goto L_08970A64;
}

/* 08970AB0 */
void func_08970AB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08970AB0:;
    sp = sp - 16;
    func_08976600(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08970AC0;
L_08970AC0:;
    sp = sp + 16;
    return;
}

/* 08970ACC */
void func_08970ACC(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08970ACC:;
    sp = sp - 16;
    s1 = D_08C28D80 - (-29312);
    s0 = D_08C28D84 - (-29308);
    v0 = LD32(s0-29308);
    v1 = LD32(s1-29312);
    cnd_ = v0 == v1;
    if (cnd_) { goto L_08970B5C; }
    goto L_08970AF0;
L_08970AF0:;
    v0 = v1 < 0x7u;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0-29308); goto L_08970B24; }
    goto L_08970AFC;
L_08970AFC:;
    v0 = v1 << 2;
    v1 = D_08ADBA48 - (-17848);
    v1 = v1 - 17848;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08970B18u: goto L_08970B18; case 0x08970B20u: goto L_08970B20; case 0x08970BC0u: goto L_08970BC0; case 0x08970BD0u: goto L_08970BD0; case 0x08970BE0u: goto L_08970BE0; case 0x08970BF0u: goto L_08970BF0; case 0x08970C00u: goto L_08970C00; default: rs_break(0, 0x08970b10); }
L_08970B18:;
    func_08970480();
    goto L_08970B20;
L_08970B20:;
    v1 = LD32(s0-29308);
    goto L_08970B24;
L_08970B24:;
    v0 = v1 < 0x7u;
    cnd_ = v0 == 0;
    v0 = LD32(s0-29308);
    if (cnd_) { goto L_08970B58; }
    goto L_08970B30;
L_08970B30:;
    v0 = v1 << 2;
    v1 = D_08ADBA64 - (-17820);
    v1 = v1 - 17820;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08970B4Cu: goto L_08970B4C; case 0x08970B54u: goto L_08970B54; case 0x08970B70u: goto L_08970B70; case 0x08970B80u: goto L_08970B80; case 0x08970B90u: goto L_08970B90; case 0x08970BA0u: goto L_08970BA0; case 0x08970BB0u: goto L_08970BB0; default: rs_break(0, 0x08970b44); }
L_08970B4C:;
    func_08970428();
    goto L_08970B54;
L_08970B54:;
    v0 = LD32(s0-29308);
    goto L_08970B58;
L_08970B58:;
    ST32(s1-29312, v0);
    goto L_08970B5C;
L_08970B5C:;
    sp = sp + 16;
    return;
L_08970B70:;
    func_08970488();
    goto L_08970B78;
L_08970B78:;
    v0 = LD32(s0-29308);
    goto L_08970B58;
L_08970B80:;
    func_0897056C(t2, t3);
    goto L_08970B88;
L_08970B88:;
    v0 = LD32(s0-29308);
    goto L_08970B58;
L_08970B90:;
    func_0897065C(t1, t2, t3);
    goto L_08970B98;
L_08970B98:;
    v0 = LD32(s0-29308);
    goto L_08970B58;
L_08970BA0:;
    func_08970734(t1, t2, t3);
    goto L_08970BA8;
L_08970BA8:;
    v0 = LD32(s0-29308);
    goto L_08970B58;
L_08970BB0:;
    func_0897099C(t1, t2, t3);
    goto L_08970BB8;
L_08970BB8:;
    v0 = LD32(s0-29308);
    goto L_08970B58;
L_08970BC0:;
    func_08970564();
    goto L_08970BC8;
L_08970BC8:;
    v1 = LD32(s0-29308);
    goto L_08970B24;
L_08970BD0:;
    func_08970654();
    goto L_08970BD8;
L_08970BD8:;
    v1 = LD32(s0-29308);
    goto L_08970B24;
L_08970BE0:;
    func_08970718(a3, t0, t1, t2, t3);
    goto L_08970BE8;
L_08970BE8:;
    v1 = LD32(s0-29308);
    goto L_08970B24;
L_08970BF0:;
    func_08970990();
    goto L_08970BF8;
L_08970BF8:;
    v1 = LD32(s0-29308);
    goto L_08970B24;
L_08970C00:;
    func_08970AB0(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08970C08;
L_08970C08:;
    v1 = LD32(s0-29308);
    goto L_08970B24;
}

/* 08970C10 */
u32 func_08970C10(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08970C10:;
    sp = sp - 16;
    v0 = D_08B2BB78 - (-17544);
    a0 = 1;
    v1 = LD32(v0-17544);
    cnd_ = v1 == 0;
    a1 = 1;
    if (cnd_) { goto L_08970C4C; }
    goto L_08970C2C;
L_08970C2C:;
    v0 = D_08B2BB90 - (-17520);
    v1 = LD32(v0-17520);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08970C4C; }
    goto L_08970C3C;
L_08970C3C:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
L_08970C4C:;
    { u64 r_ = func_08970C5C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08970C54;
L_08970C54:;
    a1 = 0 + 0;
    goto L_08970C3C;
}

/* 08970C5C */
u64 func_08970C5C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_08970C5C:;
    v0 = D_08C28D8C - (-29300);
    ST32(v0-29300, a0);
    v1 = 6;
    v0 = D_08C28D84 - (-29308);
    ST32(v0-29308, v1);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08970C74 */
u64 func_08970C74(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08970C74:;
    v1 = D_08C28D80 - (-29312);
    v0 = LD32(v1-29312);
    v0 = v0 - 3;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    v1 = 5;
    if (cnd_) { goto L_08970C94; }
    goto L_08970C8C;
L_08970C8C:;
    v0 = D_08C28D84 - (-29308);
    ST32(v0-29308, v1);
    goto L_08970C94;
L_08970C94:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08970C9C */
u64 func_08970C9C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
L_08970C9C:;
    v1 = D_08C28D80 - (-29312);
    v0 = LD32(v1-29312);
    v0 = v0 - 3;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    v0 = D_08C28D84 - (-29308);
    if (cnd_) { goto L_08970CC8; }
    goto L_08970CB4;
L_08970CB4:;
    v1 = 5;
    ST32(v0-29308, v1);
    a0 = 1;
    v0 = D_08C28D90 - (-29296);
    ST8(v0-29296, a0);
    goto L_08970CC8;
L_08970CC8:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08970CD0 */
void func_08970CD0(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08970CD0:;
    sp = sp - 32;
    v0 = D_08C28D84 - (-29308);
    v1 = D_08C28D80 - (-29312);
    a0 = LD32(v0-29308);
    v0 = LD32(v1-29312);
    cnd_ = a0 == v0;
    v0 = a0 < 0x7u;
    if (cnd_) { goto L_08970D04; }
    goto L_08970CF4;
L_08970CF4:;
    goto L_08970CF8;
L_08970CF8:;
    sp = sp + 32;
    return;
L_08970D04:;
    cnd_ = v0 == 0;
    s0 = (u32)-1;
    if (cnd_) { goto L_08970D38; }
    goto L_08970D0C;
L_08970D0C:;
    v1 = D_08ADBA80 - (-17792);
    v0 = a0 << 2;
    v1 = v1 - 17792;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08970D28u: goto L_08970D28; case 0x08970D38u: goto L_08970D38; case 0x08970D94u: goto L_08970D94; case 0x08970D9Cu: goto L_08970D9C; case 0x08970DA4u: goto L_08970DA4; case 0x08970DB4u: goto L_08970DB4; case 0x08970DBCu: goto L_08970DBC; default: rs_break(0, 0x08970d20); }
L_08970D28:;
    a0 = 1;
    a1 = (u32)-1;
    goto L_08970D30;
L_08970D30:;
    func_089766D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08970D38;
L_08970D38:;
    v0 = (u32)-1;
    goto L_08970D3C;
L_08970D3C:;
    cnd_ = s0 == v0;
    v1 = D_08B2BFA8 - (-16472);
    if (cnd_) { goto L_08970CF4; }
    goto L_08970D44;
L_08970D44:;
    v0 = v1 - 16472;
    f12 = BITSF(0);
    f2 = BITSF(LD32(v1-16472));
    f3 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    f13 = f12;
    f14 = f12;
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    ST32(sp+12, FBITS(f3));
    func_088CADC8(f12, f13, f14);
    goto L_08970D78;
L_08970D78:;
    a0 = 0 + 0;
    a1 = s0 + 0;
    func_089766D0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08970D84;
L_08970D84:;
    a0 = sp + 0;
    func_088CADA0(a0);
    goto L_08970D8C;
L_08970D8C:;
    goto L_08970CF8;
L_08970D94:;
    s0 = 3;
    goto L_08970D38;
L_08970D9C:;
    s0 = 4;
    goto L_08970D38;
L_08970DA4:;
    func_08971CE0();
    goto L_08970DAC;
L_08970DAC:;
    v0 = (u32)-1;
    goto L_08970D3C;
L_08970DB4:;
    s0 = 5;
    goto L_08970D38;
L_08970DBC:;
    a0 = 0 + 0;
    a1 = 421;
    goto L_08970D30;
}

/* 08970DC8 */
u64 func_08970DC8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
L_08970DC8:;
    v0 = D_08C28D80 - (-29312);
    a0 = LD32(v0-29312);
    v1 = 3;
    cnd_ = a0 == v1;
    v1 = 1;
    if (cnd_) { goto L_08970DE4; }
    goto L_08970DDC;
L_08970DDC:;
    return (u64)v0 | ((u64)v1 << 32);
L_08970DE4:;
    v0 = D_08C28D91 - (-29295);
    ST8(v0-29295, v1);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08970DF0 */
rv_t func_08970DF0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08970DF0:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C28D50 - (-29360);
    t1 = D_08C28D60 - (-29344);
    t2 = D_08C28D70 - (-29328);
    a1 = a1 & a0;
    v1 = t0 - 29360;
    a2 = t1 - 29344;
    cnd_ = a1 == 0;
    a3 = t2 - 29328;
    if (cnd_) { goto L_08970EA8; }
    goto L_08970E20;
L_08970E20:;
    v0 = D_08AEE2B4 - (-7500);
    f4 = BITSF(LD32(v0-7500));
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
    ST32(t0-29360, FBITS(f2));
    ST32(t1-29344, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-29328, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08970EA8;
L_08970EA8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08970EB0 */
rv_t func_08970EB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08970EB0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08970DF0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08970EC4;
L_08970EC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08970ED0 */
void func_08970ED0(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08970ED0:;
    sp = sp - 16;
    func_08975BA8(t1, t2, t3);
    goto L_08970EE0;
L_08970EE0:;
    a0 = ((u32)(uintptr_t)func_0896FC0C) - (-1012);
    a0 = a0 - 1012;
    func_08827B70(a0);
    goto L_08970EEC;
L_08970EEC:;
    func_08A6908C(0, 0, 0, 0, 0, 0);
    goto L_08970EF4;
L_08970EF4:;
    a0 = D_08ADBA9C - (-17764);
    a0 = a0 - 17764;
    a1 = 1;
    v0 = func_0883A868(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08970F04;
L_08970F04:;
    func_0883AEA0();
    goto L_08970F0C;
L_08970F0C:;
    a0 = D_08ADBAB0 - (-17744);
    a1 = 1;
    a0 = a0 - 17744;
    v0 = func_0883A868(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08970F1C;
L_08970F1C:;
    func_0883AEA0();
    goto L_08970F24;
L_08970F24:;
    a0 = ((u32)(uintptr_t)func_08A05F60) - (24416);
    a0 = a0 + 24416;
    func_0885EFF4(a0);
    goto L_08970F30;
L_08970F30:;
    v1 = 0x8005;
    v0 = D_08B2AE42 - (-20926);
    ST16(v0-20926, v1);
    func_089786A0(0, 0);
    goto L_08970F40;
L_08970F40:;
    func_08A3C0CC();
    goto L_08970F48;
L_08970F48:;
    func_088A4784(0, 0, 0);
    goto L_08970F50;
L_08970F50:;
    func_08A28F64();
    goto L_08970F58;
L_08970F58:;
    sp = sp + 16;
    return;
}

/* 08970F64 */
void func_08970F64(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08970F64:;
    sp = sp - 16;
    func_08A2922C();
    goto L_08970F74;
L_08970F74:;
    func_08A3C528(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08970F7C;
L_08970F7C:;
    func_089786BC(0, 0, 0);
    goto L_08970F84;
L_08970F84:;
    func_08971120(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08970F8C;
L_08970F8C:;
    func_088A49A0();
    goto L_08970F94;
L_08970F94:;
    func_08A6916C(0, 0, 0);
    goto L_08970F9C;
L_08970F9C:;
    func_08975C1C(0, 0, 0, 0, 0, 0);
    goto L_08970FA4;
L_08970FA4:;
    sp = sp + 16;
    return;
}

/* 08970FB0 */
void func_08970FB0(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08970FB0:;
    sp = sp - 32;
    v0 = D_08B2BB78 - (-17544);
    v1 = LD32(v0-17544);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08971110; }
    goto L_08970FE4;
L_08970FE4:;
    v1 = D_08C28DC8 - (-29240);
    goto L_08970FE8;
L_08970FE8:;
    v0 = LD32(v1-29240);
    v0 = v0 ^ 0x5;
    v1 = v0 < 0x1u;
    cnd_ = v1 != 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08971004; }
    goto L_08970FFC;
L_08970FFC:;
    v0 = D_08C2932D - (-27859);
    s4 = LD_U8(v0-27859);
    goto L_08971004;
L_08971004:;
    cnd_ = v1 != 0;
    s1 = 1;
    if (cnd_) { goto L_08971014; }
    goto L_0897100C;
L_0897100C:;
    v0 = D_08B1BB38 - (-17608);
    s1 = LD_U8(v0-17608);
    goto L_08971014;
L_08971014:;
    cnd_ = v1 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08971024; }
    goto L_0897101C;
L_0897101C:;
    v0 = D_08C2932C - (-27860);
    s0 = LD_U8(v0-27860);
    goto L_08971024;
L_08971024:;
    cnd_ = v1 != 0;
    s2 = 1;
    if (cnd_) { goto L_08971034; }
    goto L_0897102C;
L_0897102C:;
    v0 = D_08B1BB3C - (-17604);
    s2 = LD32(v0-17604);
    goto L_08971034;
L_08971034:;
    cnd_ = s0 == 0;
    s3 = s2 + 0;
    if (cnd_) { goto L_08971044; }
    goto L_0897103C;
L_0897103C:;
    v0 = D_08B1BB40 - (-17600);
    s3 = LD32(v0-17600);
    goto L_08971044;
L_08971044:;
    cnd_ = s0 == 0;
    s6 = 1;
    if (cnd_) { goto L_08971054; }
    goto L_0897104C;
L_0897104C:;
    v0 = D_08B1BB40 - (-17600);
    s6 = LD32(v0-17600);
    goto L_08971054;
L_08971054:;
    cnd_ = s1 != 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_08971064; }
    goto L_0897105C;
L_0897105C:;
    v0 = D_08C292C4 - (-27964);
    s5 = v0 - 27964;
    goto L_08971064;
L_08971064:;
    a0 = 1;
    func_088A5DCC(a0);
    goto L_0897106C;
L_0897106C:;
    a0 = 1;
    func_088A5E08(a0);
    goto L_08971074;
L_08971074:;
    func_08A63744();
    goto L_0897107C;
L_0897107C:;
    cnd_ = s0 == 0;
    v0 = ((u32)(uintptr_t)func_08A63288) - (12936);
    if (cnd_) { goto L_08971090; }
    goto L_08971084;
L_08971084:;
    v0 = D_08B2BB6E - (-17554);
    ST8(v0-17554, s4);
    v0 = ((u32)(uintptr_t)func_08A63288) - (12936);
    goto L_08971090;
L_08971090:;
    cnd_ = s1 != 0;
    a2 = v0 + 12936;
    if (cnd_) { goto L_0897109C; }
    goto L_08971098;
L_08971098:;
    a2 = 0 + 0;
    goto L_0897109C;
L_0897109C:;
    a3 = ((u32)(uintptr_t)func_08A62C70) - (11376);
    a3 = a3 + 11376;
    t0 = s2 + 0;
    t1 = s3 + 0;
    t2 = s6 + 0;
    t3 = s5 + 0;
    a0 = s0 + 0;
    a1 = s1 + 0;
    func_088AB7F8(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089710C0;
L_089710C0:;
    cnd_ = s4 == 0;
    v0 = D_08B2AE98 - (-20840);
    if (cnd_) { goto L_089710CC; }
    goto L_089710C8;
L_089710C8:;
    ST32(v0-20840, 0);
    goto L_089710CC;
L_089710CC:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_089710DC; }
    goto L_089710D4;
L_089710D4:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08971100; }
    goto L_089710DC;
L_089710DC:;
    sp = sp + 32;
    return;
L_08971100:;
    a0 = s4 ^ 0x1;
    func_088ABE78(a0);
    goto L_08971108;
L_08971108:;
    goto L_089710DC;
L_08971110:;
    func_088ABC00(a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08971118;
L_08971118:;
    v1 = D_08C28DC8 - (-29240);
    goto L_08970FE8;
}

/* 08971120 */
void func_08971120(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08971120:;
    v0 = D_08B2BB78 - (-17544);
    v1 = LD32(v0-17544);
    sp = sp - 16;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08971140; }
    goto L_08971134;
L_08971134:;
    goto L_08971138;
L_08971138:;
    sp = sp + 16;
    return;
L_08971140:;
    func_088ABC00(a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08971148;
L_08971148:;
    func_08A63744();
    goto L_08971150;
L_08971150:;
    goto L_08971138;
}

/* 08971158 */
u32 func_08971158(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08971158:;
    sp = sp - 16;
    func_08A69140();
    goto L_08971168;
L_08971168:;
    func_08971224(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971170;
L_08971170:;
    func_088A4898(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971178;
L_08971178:;
    v0 = D_08C28DC4 - (-29244);
    v0 = LD32(v0-29244);
    v1 = v0 < 0x6u;
    cnd_ = v1 == 0;
    v1 = D_08ADBAC4 - (-17724);
    if (cnd_) { goto L_089711AC; }
    goto L_0897118C;
L_0897118C:;
    v0 = v0 << 2;
    v1 = v1 - 17724;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089711A4u: goto L_089711A4; case 0x089711D4u: goto L_089711D4; case 0x089711E4u: goto L_089711E4; case 0x089711F4u: goto L_089711F4; case 0x08971204u: goto L_08971204; case 0x08971214u: goto L_08971214; default: rs_break(0, 0x0897119c); }
L_089711A4:;
    func_08971350();
    goto L_089711AC;
L_089711AC:;
    func_088A496C();
    goto L_089711B4;
L_089711B4:;
    func_0883B9C8(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_089711BC;
L_089711BC:;
    v1 = D_08C28DCC - (-29236);
    v0 = LD_U8(v1-29236);
    v0 = v0 ^ 0x1;
    sp = sp + 16;
    return v0;
L_089711D4:;
    func_089715AC();
    goto L_089711DC;
L_089711DC:;
    goto L_089711AC;
L_089711E4:;
    func_08971630(0, 0, 0);
    goto L_089711EC;
L_089711EC:;
    goto L_089711AC;
L_089711F4:;
    func_08971680();
    goto L_089711FC;
L_089711FC:;
    goto L_089711AC;
L_08971204:;
    func_08971514(0, 0, 0, 0, 0, 0, 0);
    goto L_0897120C;
L_0897120C:;
    goto L_089711AC;
L_08971214:;
    func_089713E0(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0897121C;
L_0897121C:;
    goto L_089711AC;
}

/* 08971224 */
void func_08971224(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08971224:;
    sp = sp - 16;
    s1 = D_08C28DC4 - (-29244);
    s0 = D_08C28DC8 - (-29240);
    v0 = LD32(s0-29240);
    v1 = LD32(s1-29244);
    cnd_ = v0 == v1;
    if (cnd_) { goto L_089712B4; }
    goto L_08971248;
L_08971248:;
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0-29240); goto L_0897127C; }
    goto L_08971254;
L_08971254:;
    v0 = v1 << 2;
    v1 = D_08ADBADC - (-17700);
    v1 = v1 - 17700;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08971270u: goto L_08971270; case 0x08971278u: goto L_08971278; case 0x08971318u: goto L_08971318; case 0x08971328u: goto L_08971328; case 0x08971338u: goto L_08971338; default: rs_break(0, 0x08971268); }
L_08971270:;
    func_089715C8(a1, a2, a3, t0, t1, t2, t3);
    goto L_08971278;
L_08971278:;
    v1 = LD32(s0-29240);
    goto L_0897127C;
L_0897127C:;
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    v0 = LD32(s0-29240);
    if (cnd_) { goto L_089712B0; }
    goto L_08971288;
L_08971288:;
    v0 = v1 << 2;
    v1 = D_08ADBAF4 - (-17676);
    v1 = v1 - 17676;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089712A4u: goto L_089712A4; case 0x089712C8u: goto L_089712C8; case 0x089712D8u: goto L_089712D8; case 0x089712E8u: goto L_089712E8; case 0x089712F8u: goto L_089712F8; case 0x08971308u: goto L_08971308; default: rs_break(0, 0x0897129c); }
L_089712A4:;
    func_08971348();
    goto L_089712AC;
L_089712AC:;
    v0 = LD32(s0-29240);
    goto L_089712B0;
L_089712B0:;
    ST32(s1-29244, v0);
    goto L_089712B4;
L_089712B4:;
    sp = sp + 16;
    return;
L_089712C8:;
    func_08971570();
    goto L_089712D0;
L_089712D0:;
    v0 = LD32(s0-29240);
    goto L_089712B0;
L_089712D8:;
    func_0897160C(a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089712E0;
L_089712E0:;
    v0 = LD32(s0-29240);
    goto L_089712B0;
L_089712E8:;
    func_08971678();
    goto L_089712F0;
L_089712F0:;
    v0 = LD32(s0-29240);
    goto L_089712B0;
L_089712F8:;
    func_089714A4();
    goto L_08971300;
L_08971300:;
    v0 = LD32(s0-29240);
    goto L_089712B0;
L_08971308:;
    func_08971360();
    goto L_08971310;
L_08971310:;
    v0 = LD32(s0-29240);
    goto L_089712B0;
L_08971318:;
    func_0897164C(a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08971320;
L_08971320:;
    v1 = LD32(s0-29240);
    goto L_0897127C;
L_08971328:;
    func_08971558();
    goto L_08971330;
L_08971330:;
    v1 = LD32(s0-29240);
    goto L_0897127C;
L_08971338:;
    func_0897145C();
    goto L_08971340;
L_08971340:;
    v1 = LD32(s0-29240);
    goto L_0897127C;
}

/* 08971348 */
void func_08971348(void)
{
L_08971348:;
    return;
}

/* 08971350 */
void func_08971350(void)
{
    u32 v0 = 0, v1 = 0;
L_08971350:;
    v1 = 4;
    v0 = D_08C28DC8 - (-29240);
    ST32(v0-29240, v1);
    return;
}

/* 08971360 */
void func_08971360(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f12 = 0, f13 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08971360:;
    v0 = D_08AEE2B8 - (-7496);
    v1 = D_08AEE2BC - (-7492);
    f12 = BITSF(LD32(v0-7496));
    f13 = BITSF(LD32(v1-7492));
    a0 = D_08ADBB0C - (-17652);
    sp = sp - 16;
    a1 = 1;
    a0 = a0 - 17652;
    func_088D7CA4(a0, a1, f12, f13);
    goto L_08971388;
L_08971388:;
    func_08970FB0(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971390;
L_08971390:;
    a0 = 1;
    func_08A27530(a0);
    goto L_08971398;
L_08971398:;
    a0 = 2;
    func_08A293F0(a0);
    goto L_089713A0;
L_089713A0:;
    a0 = 1;
    func_08A60C74(0, 0, 0);
    goto L_089713A8;
L_089713A8:;
    sp = sp + 16;
    return;
}

/* 089713B4 */
void func_089713B4(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089713B4:;
    sp = sp - 16;
    func_088CF2F8(a1, a2, a3, t0, t1, t2, t3, f13, f14, f15, f16, f17, f18, f19);
    goto L_089713C4;
L_089713C4:;
    func_08A273D4(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089713CC;
L_089713CC:;
    { u64 r_ = func_088CF370(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089713D4;
L_089713D4:;
    sp = sp + 16;
    return;
}

/* 089713E0 */
void func_089713E0(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089713E0:;
    sp = sp - 16;
    func_08A29270(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089713F0;
L_089713F0:;
    func_089713B4(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089713F8;
L_089713F8:;
    v0 = D_08C2CE67 - (-12697);
    v1 = LD_U8(v0-12697);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08971438; }
    goto L_08971408;
L_08971408:;
    v0 = D_08C2CE70 - (-12688);
    a0 = LD32(v0-12688);
    v1 = (s32)a0 < 6;
    cnd_ = v1 == 0;
    v0 = 6;
    if (cnd_) { goto L_0897144C; }
    goto L_0897141C;
L_0897141C:;
    v0 = (s32)a0 < 3;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_08971440; }
    goto L_08971428;
L_08971428:;
    v0 = 1;
    cnd_ = a0 == v0;
    if (cnd_) { v1 = 3; goto L_08971440; }
    goto L_08971434;
L_08971434:;
    goto L_08971438;
L_08971438:;
    sp = sp + 16;
    return;
L_08971440:;
    v0 = D_08C28DC8 - (-29240);
    ST32(v0-29240, v1);
    goto L_08971434;
L_0897144C:;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_08971438; }
    goto L_08971454;
L_08971454:;
    v1 = 2;
    goto L_08971440;
}

/* 0897145C */
void func_0897145C(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897145C:;
    f12 = BITSF(0);
    sp = sp - 16;
    { rv_t r_ = func_088D7D74(f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08971470;
L_08971470:;
    func_08889454();
    goto L_08971478;
L_08971478:;
    func_08832344(0, 0, 0);
    goto L_08971480;
L_08971480:;
    func_08A29000();
    goto L_08971488;
L_08971488:;
    func_08A29430(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971490;
L_08971490:;
    func_08971120(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971498;
L_08971498:;
    sp = sp + 16;
    return;
}

/* 089714A4 */
void func_089714A4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    float f12 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089714A4:;
    sp = sp - 32;
    v0 = D_08B1B8F8 - (-18184);
    a0 = D_08ADBB30 - (-17616);
    a0 = a0 - 17616;
    a1 = 0 + 0;
    v1 = LD_U8(v0-18184);
    cnd_ = v1 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089714E4; }
    goto L_089714CC;
L_089714CC:;
    func_08975C88();
    goto L_089714D4;
L_089714D4:;
    sp = sp + 32;
    return;
L_089714E4:;
    v0 = D_08AEE2C0 - (-7488);
    f20 = BITSF(LD32(v0-7488));
    f12 = f20;
    func_08A69188(a0, a1, a2, f12);
    goto L_089714F4;
L_089714F4:;
    a0 = D_08ADBB40 - (-17600);
    a0 = a0 - 17600;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 0 + 0;
    func_08A69188(a0, a1, a2, f12);
    goto L_0897150C;
L_0897150C:;
    goto L_089714CC;
}

/* 08971514 */
void func_08971514(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08971514:;
    sp = sp - 16;
    v0 = func_08975DC0(a1, a2, a3, t0, t1, t2, t3);
    goto L_08971524;
L_08971524:;
    a0 = 1;
    cnd_ = v0 != 0;
    a1 = (u32)-1;
    if (cnd_) { goto L_08971548; }
    goto L_08971530;
L_08971530:;
    v1 = 5;
    v0 = D_08C28DC8 - (-29240);
    ST32(v0-29240, v1);
    goto L_08971540;
L_08971540:;
    sp = sp + 16;
    return;
L_08971548:;
    func_089766D0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971550;
L_08971550:;
    goto L_08971540;
}

/* 08971558 */
void func_08971558(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08971558:;
    v1 = D_08B1B8F8 - (-18184);
    v0 = LD_U8(v1-18184);
    cnd_ = v0 != 0;
    if (cnd_) { ST8(v1-18184, 0); goto L_08971568; }
    goto L_08971568;
L_08971568:;
    return;
}

/* 08971570 */
void func_08971570(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08971570:;
    sp = sp - 16;
    func_08979D54();
    goto L_08971580;
L_08971580:;
    func_08970FB0(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971588;
L_08971588:;
    func_0897029C(0, 0, 0);
    goto L_08971590;
L_08971590:;
    func_08A24EA0();
    goto L_08971598;
L_08971598:;
    func_0896FD94();
    goto L_089715A0;
L_089715A0:;
    sp = sp + 16;
    return;
}

/* 089715AC */
void func_089715AC(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089715AC:;
    sp = sp - 16;
    func_089702D0();
    goto L_089715BC;
L_089715BC:;
    sp = sp + 16;
    return;
}

/* 089715C8 */
void func_089715C8(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089715C8:;
    sp = sp - 16;
    func_089703C8(a1, a2, a3, t0, t1, t2, t3);
    goto L_089715D8;
L_089715D8:;
    func_08971120(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089715E0;
L_089715E0:;
    func_08A2503C(0, 0, 0);
    goto L_089715E8;
L_089715E8:;
    func_08979D84();
    goto L_089715F0;
L_089715F0:;
    a0 = 5;
    func_0883ABC4(a0);
    goto L_089715F8;
L_089715F8:;
    func_0896FDE0();
    goto L_08971600;
L_08971600:;
    sp = sp + 16;
    return;
}

/* 0897160C */
void func_0897160C(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897160C:;
    sp = sp - 16;
    func_08970FB0(a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0897161C;
L_0897161C:;
    func_08A3C590();
    goto L_08971624;
L_08971624:;
    sp = sp + 16;
    return;
}

/* 08971630 */
void func_08971630(u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08971630:;
    sp = sp - 16;
    func_08A3C5D8(t1, t2, t3);
    goto L_08971640;
L_08971640:;
    sp = sp + 16;
    return;
}

/* 0897164C */
void func_0897164C(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897164C:;
    sp = sp - 16;
    func_08A3C65C(a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0897165C;
L_0897165C:;
    func_08897E54(0, 0, 0);
    goto L_08971664;
L_08971664:;
    func_08971120(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0897166C;
L_0897166C:;
    sp = sp + 16;
    return;
}

/* 08971678 */
void func_08971678(void)
{
L_08971678:;
    return;
}

/* 08971680 */
void func_08971680(void)
{
    u32 v0 = 0, v1 = 0;
L_08971680:;
    v1 = 1;
    v0 = D_08C28DCC - (-29236);
    ST8(v0-29236, v1);
    return;
}

/* 08971690 */
rv_t func_08971690(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08971690:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C28D94 - (-29292);
    t1 = D_08C28DA4 - (-29276);
    t2 = D_08C28DB4 - (-29260);
    a1 = a1 & a0;
    v1 = t0 - 29292;
    a2 = t1 - 29276;
    cnd_ = a1 == 0;
    a3 = t2 - 29260;
    if (cnd_) { goto L_08971748; }
    goto L_089716C0;
L_089716C0:;
    v0 = D_08AEE2C4 - (-7484);
    f4 = BITSF(LD32(v0-7484));
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
    ST32(t0-29292, FBITS(f2));
    ST32(t1-29276, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-29260, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08971748;
L_08971748:;
    return (rv_t){ v0, v1, f0 };
}

/* 08971750 */
rv_t func_08971750(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08971750:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08971690(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08971764;
L_08971764:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08971770 */
void func_08971770(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08971770:;
    sp = sp - 16;
    s2 = D_08B2BB6D - (-17555);
    v0 = LD_U8(s2-17555);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08971988; }
    goto L_08971790;
L_08971790:;
    v0 = D_08AEE2C8 - (-7480);
    goto L_08971794;
L_08971794:;
    v1 = D_08C29394 - (-27756);
    f0 = BITSF(LD32(v0-7480));
    a0 = LD32(v1-27756);
    v0 = D_08C29B54 - (-25772);
    v1 = D_08B285A4 - (-31324);
    ST32(v0-25772, a0);
    v0 = D_08C28E88 - (-29048);
    ST32(v1-31324, FBITS(f0));
    v1 = D_08B1B8FC - (-18180);
    ST8(v0-29048, 0);
    ST32(v1-18180, FBITS(f0));
    func_08A64624();
    goto L_089717C4;
L_089717C4:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08971908; }
    goto L_089717D4;
L_089717D4:;
    func_08A6941C();
    goto L_089717DC;
L_089717DC:;
    func_08876DE8(0, 0, 0);
    goto L_089717E4;
L_089717E4:;
    func_08923D94(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089717EC;
L_089717EC:;
    func_088CEDE8();
    goto L_089717F4;
L_089717F4:;
    func_0897CFD8();
    goto L_089717FC;
L_089717FC:;
    func_089842C0();
    goto L_08971804;
L_08971804:;
    func_08972390(0, 0, 0);
    goto L_0897180C;
L_0897180C:;
    func_089FB630(0, 0, 0);
    goto L_08971814;
L_08971814:;
    func_089CE484();
    goto L_0897181C;
L_0897181C:;
    func_08A66478();
    goto L_08971824;
L_08971824:;
    func_08A65BE0();
    goto L_0897182C;
L_0897182C:;
    func_08A68A60();
    goto L_08971834;
L_08971834:;
    func_08974DF8();
    goto L_0897183C;
L_0897183C:;
    func_08972170();
    goto L_08971844;
L_08971844:;
    func_0897207C();
    goto L_0897184C;
L_0897184C:;
    v0 = ((u32)(uintptr_t)func_08984114) - (16660);
    v1 = D_08B45A30 - (23088);
    v0 = v0 + 16660;
    ST32(v1+23088, v0);
    func_088ABE08();
    goto L_08971860;
L_08971860:;
    a0 = 100;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08971868;
L_08971868:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_08A089B8(a0);
    goto L_08971874;
L_08971874:;
    v0 = D_08C2CE64 - (-12700);
    a0 = LD_U8(v0-12700);
    v1 = D_08C28E84 - (-29052);
    cnd_ = a0 != 0;
    ST32(v1-29052, s0);
    if (cnd_) { goto L_089718F8; }
    goto L_08971888;
L_08971888:;
    v0 = LD_U8(s2-17555);
    goto L_0897188C;
L_0897188C:;
    cnd_ = v0 != 0;
    v0 = D_08C2BA34 - (-17868);
    if (cnd_) { goto L_089718A0; }
    goto L_08971894;
L_08971894:;
    v1 = LD32(v0-17868);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_089718D8; }
    goto L_089718A0;
L_089718A0:;
    { u64 r_ = func_08A3CC70(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089718A8;
L_089718A8:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089718C8; }
    goto L_089718B0;
L_089718B0:;
    goto L_089718B4;
L_089718B4:;
    sp = sp + 16;
    return;
L_089718C8:;
    a0 = 16;
    { u64 r_ = func_08979CD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089718D0;
L_089718D0:;
    goto L_089718B4;
L_089718D8:;
    v0 = func_08979D14();
    goto L_089718E0;
L_089718E0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089718A0; }
    goto L_089718E8;
L_089718E8:;
    a0 = 16;
    { u64 r_ = func_08979CD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089718F0;
L_089718F0:;
    goto L_089718A0;
L_089718F8:;
    a0 = 3;
    func_08A293F0(a0);
    goto L_08971900;
L_08971900:;
    v0 = LD_U8(s2-17555);
    goto L_0897188C;
L_08971908:;
    a0 = 999;
    v0 = func_0898BB00(a0, 0, 0, 0);
    goto L_08971910;
L_08971910:;
    a0 = 999;
    s0 = v0 + 0;
    v0 = func_0898BB00(a0, 0, 0, 0);
    goto L_0897191C;
L_0897191C:;
    v1 = 0 < v0;
    s1 = v0 + 0;
    v0 = 0 < s0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0897196C; }
    goto L_08971934;
L_08971934:;
    a0 = 156;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897193C;
L_0897193C:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    a2 = 999;
    func_0898E384(a0, a1, a2);
    goto L_0897194C;
L_0897194C:;
    a0 = 156;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08971954;
L_08971954:;
    a0 = v0 + 0;
    a1 = 1;
    a2 = 999;
    func_0898E384(a0, a1, a2);
    goto L_08971964;
L_08971964:;
    goto L_089717D4;
L_0897196C:;
    a0 = 1;
    { u64 r_ = func_08A26FF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08971974;
L_08971974:;
    ST32(s0+76, v0);
    a0 = 0 + 0;
    { u64 r_ = func_08A26FF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08971980;
L_08971980:;
    ST32(s1+76, v0);
    goto L_08971934;
L_08971988:;
    a0 = 333;
    a1 = 333;
    a2 = 166;
    v0 = scePower_EBD177D6(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08971998;
L_08971998:;
    v0 = D_08AEE2C8 - (-7480);
    goto L_08971794;
}

/* 089719A0 */
void func_089719A0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089719A0:;
    sp = sp - 16;
    func_089726F0();
    goto L_089719B0;
L_089719B0:;
    v0 = D_08C29B54 - (-25772);
    v1 = D_08C29B58 - (-25768);
    a0 = LD32(v0-25772);
    v0 = LD32(v1-25768);
    cnd_ = a0 == v0;
    if (cnd_) { goto L_089719D0; }
    goto L_089719C8;
L_089719C8:;
    func_08979CA0(a0, 0, 0, 0);
    goto L_089719D0;
L_089719D0:;
    s0 = D_08C28E84 - (-29052);
    func_0883BFA8();
    goto L_089719D8;
L_089719D8:;
    func_088ABED0(0, 0, 0);
    goto L_089719E0;
L_089719E0:;
    func_08845B64(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089719E8;
L_089719E8:;
    v0 = LD32(s0-29052);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08971AF8; }
    goto L_089719F4;
L_089719F4:;
    func_0899F47C();
    goto L_089719FC;
L_089719FC:;
    func_088AFE84(0, 0, 0);
    goto L_08971A04;
L_08971A04:;
    func_08877710(0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971A0C;
L_08971A0C:;
    func_089FB9D0();
    goto L_08971A14;
L_08971A14:;
    func_08923CBC(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971A1C;
L_08971A1C:;
    func_08A659CC();
    goto L_08971A24;
L_08971A24:;
    func_08A68E84(0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971A2C;
L_08971A2C:;
    func_088F1698();
    goto L_08971A34;
L_08971A34:;
    func_08971C84(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971A3C;
L_08971A3C:;
    func_08A0F370();
    goto L_08971A44;
L_08971A44:;
    a0 = 0 + 0;
    func_089809B8(a0);
    goto L_08971A4C;
L_08971A4C:;
    func_0897D1BC(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971A54;
L_08971A54:;
    v0 = func_08A2964C();
    goto L_08971A5C;
L_08971A5C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08971AE8; }
    goto L_08971A64;
L_08971A64:;
    func_08A642F4();
    goto L_08971A6C;
L_08971A6C:;
    func_088AC088(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971A74;
L_08971A74:;
    func_088D9E78();
    goto L_08971A7C;
L_08971A7C:;
    v0 = D_08C2CE64 - (-12700);
    v1 = LD_U8(v0-12700);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08971AD8; }
    goto L_08971A8C;
L_08971A8C:;
    v0 = D_08C28E88 - (-29048);
    goto L_08971A90;
L_08971A90:;
    v1 = LD_U8(v0-29048);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08971AC8; }
    goto L_08971A9C;
L_08971A9C:;
    v0 = D_08B285A4 - (-31324);
    f0 = BITSF(LD32(v0-31324));
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { ST32(v0-31324, FBITS(f1)); goto L_08971AB8; }
    goto L_08971AB8;
L_08971AB8:;
    goto L_08971ABC;
L_08971ABC:;
    sp = sp + 16;
    return;
L_08971AC8:;
    func_08971CD8();
    goto L_08971AD0;
L_08971AD0:;
    goto L_08971ABC;
L_08971AD8:;
    func_08A29270(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971AE0;
L_08971AE0:;
    v0 = D_08C28E88 - (-29048);
    goto L_08971A90;
L_08971AE8:;
    func_08897F68(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971AF0;
L_08971AF0:;
    goto L_08971A64;
L_08971AF8:;
    func_088AC170();
    goto L_08971B00;
L_08971B00:;
    a0 = LD32(s0-29052);
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08971B14;
L_08971B14:;
    func_088AC178();
    goto L_08971B1C;
L_08971B1C:;
    goto L_089719F4;
}

/* 08971B24 */
void func_08971B24(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08971B24:;
    sp = sp - 16;
    v0 = D_08B2BB6D - (-17555);
    s0 = D_08C28E84 - (-29052);
    a0 = 222;
    a1 = 222;
    v1 = LD_U8(v0-17555);
    cnd_ = v1 == 0;
    a2 = 111;
    if (cnd_) { goto L_08971BEC; }
    goto L_08971B4C;
L_08971B4C:;
    func_08A64748(t2, t3);
    goto L_08971B54;
L_08971B54:;
    func_089CC554();
    goto L_08971B5C;
L_08971B5C:;
    func_08A664CC();
    goto L_08971B64;
L_08971B64:;
    func_08A65B10();
    goto L_08971B6C;
L_08971B6C:;
    func_08A68A94(0, 0, 0);
    goto L_08971B74;
L_08971B74:;
    func_08974E60();
    goto L_08971B7C;
L_08971B7C:;
    v0 = D_08C2CE64 - (-12700);
    v1 = LD_U8(v0-12700);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08971BDC; }
    goto L_08971B8C;
L_08971B8C:;
    func_0897D058(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971B94;
L_08971B94:;
    func_08972658(0, 0, 0);
    goto L_08971B9C;
L_08971B9C:;
    { u64 r_ = func_089FB688(0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08971BA4;
L_08971BA4:;
    v0 = LD32(s0-29052);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08971BC4; }
    goto L_08971BB0;
L_08971BB0:;
    ST32(s0-29052, 0);
    goto L_08971BB4;
L_08971BB4:;
    sp = sp + 16;
    return;
L_08971BC4:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08971BD4;
L_08971BD4:;
    ST32(s0-29052, 0);
    goto L_08971BB4;
L_08971BDC:;
    func_08A29430(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971BE4;
L_08971BE4:;
    goto L_08971B8C;
L_08971BEC:;
    v0 = scePower_EBD177D6(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08971BF4;
L_08971BF4:;
    goto L_08971B4C;
}

/* 08971BFC */
rv_t func_08971BFC(u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08971BFC:;
    sp = sp - 16;
    func_08A64748(t2, t3);
    goto L_08971C0C;
L_08971C0C:;
    s0 = D_08C28E84 - (-29052);
    func_089CC554();
    goto L_08971C14;
L_08971C14:;
    v0 = D_08C2CE64 - (-12700);
    v1 = LD_U8(v0-12700);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08971C74; }
    goto L_08971C24;
L_08971C24:;
    func_0897D058(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971C2C;
L_08971C2C:;
    func_089726BC(0, 0, 0);
    goto L_08971C34;
L_08971C34:;
    { u64 r_ = func_089FB688(0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08971C3C;
L_08971C3C:;
    v0 = LD32(s0-29052);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08971C5C; }
    goto L_08971C48;
L_08971C48:;
    ST32(s0-29052, 0);
    goto L_08971C4C;
L_08971C4C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08971C5C:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08971C6C;
L_08971C6C:;
    ST32(s0-29052, 0);
    goto L_08971C4C;
L_08971C74:;
    func_08A29430(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971C7C;
L_08971C7C:;
    goto L_08971C24;
}

/* 08971C84 */
void func_08971C84(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08971C84:;
    sp = sp - 16;
    v0 = D_08B2C1BC - (-15940);
    v1 = LD_U8(v0-15940);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08971CB8; }
    goto L_08971C9C;
L_08971C9C:;
    v0 = D_08C28E84 - (-29052);
    v0 = LD32(v0-29052);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08971CC0; }
    goto L_08971CAC;
L_08971CAC:;
    func_0896F004(a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08971CB4;
L_08971CB4:;
    goto L_08971CB8;
L_08971CB8:;
    sp = sp + 16;
    return;
L_08971CC0:;
    v0 = LD32(v0);
    v1 = LD32(v0+12);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08971CD0;
L_08971CD0:;
    goto L_08971CAC;
}

/* 08971CD8 */
void func_08971CD8(void)
{
L_08971CD8:;
    return;
}

/* 08971CE0 */
void func_08971CE0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08971CE0:;
    sp = sp - 16;
    a2 = D_08B15A04 - (23044);
    v0 = LD32(a2+23044);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08971D38; }
    goto L_08971D04;
L_08971D04:;
    v0 = D_08B22E88 - (11912);
    v0 = v0 + 11912;
    v1 = D_08B159FC - (23036);
    a1 = 1;
    ST32(v1+23036, v0);
    a0 = D_08B230B0 - (12464);
    v0 = D_08B230A8 - (12456);
    v1 = D_08B15A0C - (23052);
    ST8(a0+12464, a1);
    ST32(a2+23044, 0);
    ST8(v0+12456, a1);
    ST8(v1+23052, a1);
    a0 = 0 + 0;
    goto L_08971D38;
L_08971D38:;
    a1 = 0 + 0;
    func_088CEE54(a0, a1);
    goto L_08971D40;
L_08971D40:;
    v0 = D_08B2AA0C - (-22004);
    v1 = LD32(v0-22004);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08971F10; }
    goto L_08971D50;
L_08971D50:;
    s0 = 0 + 0;
    func_088CF2F8(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971D58;
L_08971D58:;
    a0 = 0 + 0;
    func_08905000(a0);
    goto L_08971D60;
L_08971D60:;
    v0 = D_08B2C18C - (-15988);
    s1 = v0 - 15988;
    a1 = s0 + 0;
    goto L_08971D6C;
L_08971D6C:;
    a0 = s1 + 0;
    a2 = (u32)-1;
    s0 = s0 + 1;
    func_0890CFBC(a2);
    goto L_08971D7C;
L_08971D7C:;
    v0 = (s32)s0 < 4;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = s0 + 0; goto L_08971D6C; }
    goto L_08971D88;
L_08971D88:;
    a1 = 0 + 0;
    a0 = s1 + 0;
    func_0890CFD8(a0, a1);
    goto L_08971D94;
L_08971D94:;
    a0 = s1 + 0;
    a1 = 1;
    func_0890CFE0(a0, a1);
    goto L_08971DA0;
L_08971DA0:;
    a0 = s1 + 0;
    a1 = 1;
    { u64 r_ = func_0890CFE8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08971DAC;
L_08971DAC:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_0890D028(a0, a1);
    goto L_08971DB8;
L_08971DB8:;
    a0 = s1 + 0;
    a1 = 1;
    v0 = func_0890D084(a0, a1);
    goto L_08971DC4;
L_08971DC4:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_0890D0B8(a0, a1);
    goto L_08971DD0;
L_08971DD0:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_0890D108(a0, a1);
    goto L_08971DDC;
L_08971DDC:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_0890D248(a0, a1);
    goto L_08971DE8;
L_08971DE8:;
    a0 = s1 + 0;
    a1 = 1;
    func_0890D250(a0, a1);
    goto L_08971DF4;
L_08971DF4:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_0890D290(a0, a1);
    goto L_08971E00;
L_08971E00:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_0890D298(a0, a1);
    goto L_08971E0C;
L_08971E0C:;
    s2 = D_08C28E84 - (-29052);
    v0 = 10;
    ST32(s1+44, v0);
    func_088F0D3C(0, 0, 0, 0, 0);
    goto L_08971E1C;
L_08971E1C:;
    func_088F1700();
    goto L_08971E24;
L_08971E24:;
    func_088CEE34(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971E2C;
L_08971E2C:;
    func_0881C978();
    goto L_08971E34;
L_08971E34:;
    func_088F16E4();
    goto L_08971E3C;
L_08971E3C:;
    { u64 r_ = func_08877A60(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08971E44;
L_08971E44:;
    a0 = LD32(s2-29052);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08971EFC; }
    goto L_08971E50;
L_08971E50:;
    s0 = D_08BB1D14 - (7444);
    func_088B07F4();
    goto L_08971E58;
L_08971E58:;
    a1 = LD32(s0+7444);
    a0 = 0 + 0;
    func_089017AC(a1);
    goto L_08971E64;
L_08971E64:;
    func_088F172C();
    goto L_08971E6C;
L_08971E6C:;
    a1 = LD32(s0+7444);
    a0 = 0 + 0;
    func_0890308C(a1);
    goto L_08971E78;
L_08971E78:;
    a0 = LD32(s2-29052);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08971EEC; }
    goto L_08971E84;
L_08971E84:;
    func_088F17D4();
    goto L_08971E8C;
L_08971E8C:;
    func_08A273D4(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971E94;
L_08971E94:;
    func_08A0B8F0();
    goto L_08971E9C;
L_08971E9C:;
    func_0895E940();
    goto L_08971EA4;
L_08971EA4:;
    func_0897D2E4(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971EAC;
L_08971EAC:;
    v0 = func_08A2964C();
    goto L_08971EB4;
L_08971EB4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08971EDC; }
    goto L_08971EBC;
L_08971EBC:;
    { u64 r_ = func_088CF370(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08971EC4;
L_08971EC4:;
    sp = sp + 16;
    return;
L_08971EDC:;
    func_08897E28(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08971EE4;
L_08971EE4:;
    goto L_08971EBC;
L_08971EEC:;
    func_08A098C0(a0);
    goto L_08971EF4;
L_08971EF4:;
    goto L_08971E84;
L_08971EFC:;
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08971F08;
L_08971F08:;
    goto L_08971E50;
L_08971F10:;
    func_0889F228();
    goto L_08971F18;
L_08971F18:;
    goto L_08971D50;
}

/* 08971F20 */
rv_t func_08971F20(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
L_08971F20:;
    a1 = D_08C28E88 - (-29048);
    v0 = LD_U8(a1-29048);
    a0 = a0 & 0xff;
    cnd_ = v0 == a0;
    if (cnd_) { goto L_08971F50; }
    goto L_08971F34;
L_08971F34:;
    cnd_ = a0 == 0;
    v1 = D_08B285A4 - (-31324);
    if (cnd_) { goto L_08971F58; }
    goto L_08971F3C;
L_08971F3C:;
    f0 = BITSF(LD32(v1-31324));
    v0 = D_08B1B8FC - (-18180);
    ST32(v1-31324, 0);
    ST32(v0-18180, FBITS(f0));
    goto L_08971F4C;
L_08971F4C:;
    ST8(a1-29048, a0);
    goto L_08971F50;
L_08971F50:;
    return (rv_t){ v0, v1, f0 };
L_08971F58:;
    v0 = D_08B1B8FC - (-18180);
    f0 = BITSF(LD32(v0-18180));
    ST32(v1-31324, FBITS(f0));
    goto L_08971F4C;
}

/* 08971F68 */
u64 func_08971F68(void)
{
    u32 v0 = 0, v1 = 0;
L_08971F68:;
    v1 = D_08C28E88 - (-29048);
    v0 = LD_U8(v1-29048);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08971F74 */
u64 func_08971F74(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08971F74:;
    sp = sp - 16;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08971FBC; }
    goto L_08971F8C;
L_08971F8C:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    v1 = D_08B2BB84 - (-17532);
    if (cnd_) { goto L_08971FAC; }
    goto L_08971F9C;
L_08971F9C:;
    v0 = LD32(v1-17532);
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08971FC0; }
    goto L_08971FAC;
L_08971FAC:;
    { u64 r_ = func_088AB500(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08971FB4;
L_08971FB4:;
    v0 = v0 < 0x1389u;
    a0 = v0 < 0x1u;
    goto L_08971FBC;
L_08971FBC:;
    goto L_08971FC0;
L_08971FC0:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08971FCC */
u64 func_08971FCC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08971FCC:;
    sp = sp - 16;
    v0 = D_08B2C1BC - (-15940);
    v1 = LD_U8(v0-15940);
    cnd_ = v1 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08971FF8; }
    goto L_08971FE4;
L_08971FE4:;
    v0 = D_08C2CE70 - (-12688);
    v1 = LD32(v0-12688);
    v0 = 3;
    cnd_ = v1 == v0;
    a0 = 1;
    if (cnd_) { goto L_08972008; }
    goto L_08971FF8;
L_08971FF8:;
    goto L_08971FFC;
L_08971FFC:;
    v0 = a0 + 0;
    goto L_08972000;
L_08972000:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08972008:;
    v0 = D_08C2CE6C - (-12692);
    v1 = LD32(v0-12692);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08971FFC; }
    goto L_08972018;
L_08972018:;
    v0 = D_08C28E84 - (-29052);
    v0 = LD32(v0-29052);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = 0 + 0; goto L_08971FFC; }
    goto L_08972028;
L_08972028:;
    v0 = LD32(v0+4);
    v0 = v0 ^ 0x3;
    cnd_ = v0 != 0;
    v0 = a0 + 0;
    if (cnd_) { goto L_08972000; }
    goto L_08972038;
L_08972038:;
    { u64 r_ = func_089739F8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08972040;
L_08972040:;
    cnd_ = v0 == 0;
    a0 = 1;
    if (cnd_) { goto L_08971FF8; }
    goto L_08972048;
L_08972048:;
    { u64 r_ = func_0888AC8C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08972050;
L_08972050:;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08972070; }
    goto L_08972058;
L_08972058:;
    v0 = D_08B29958 - (-26280);
    v1 = D_08B2995C - (-26276);
    a0 = LD32(v0-26280);
    v0 = LD32(v1-26276);
    cnd_ = a0 == v0;
    if (cnd_) { a0 = a1 + 0; goto L_08971FF8; }
    goto L_08972070;
L_08972070:;
    a1 = 1;
    a0 = a1 + 0;
    goto L_08971FF8;
}

/* 0897207C */
void func_0897207C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897207C:;
    sp = sp - 16;
    a0 = D_08B2BB9C - (-17508);
    v0 = D_08B2AA0C - (-22004);
    v1 = LD32(a0-17508);
    cnd_ = v1 == 0;
    s1 = LD32(v0-22004);
    if (cnd_) { goto L_08972164; }
    goto L_089720A0;
L_089720A0:;
    v0 = D_08B28F50 - (-28848);
    v0 = LD32(v0-28848);
    goto L_089720A8;
L_089720A8:;
    cnd_ = (s32)v0 <= 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0897215C; }
    goto L_089720B0;
L_089720B0:;
    cnd_ = (s32)v1 <= 0;
    v0 = LD32(a0-17508);
    if (cnd_) { goto L_08972130; }
    goto L_089720B8;
L_089720B8:;
    cnd_ = v0 == 0;
    v0 = D_08B28F30 - (-28880);
    if (cnd_) { goto L_08972154; }
    goto L_089720C0;
L_089720C0:;
    v0 = D_08B28F50 - (-28848);
    v0 = LD32(v0-28848);
    goto L_089720C8;
L_089720C8:;
    cnd_ = (s32)v0 <= 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0897214C; }
    goto L_089720D0;
L_089720D0:;
    a2 = D_08B25AC0 - (23232);
    v1 = LD32(a2+23232);
    a3 = a2 + 23232;
    a1 = LD32(a3+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a1;
    v0 = v1 >> 1;
    { u32 x_ = v0, y_ = a0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a1 = a1 + v1;
    ST32(a3+4, a1);
    a0 = s1 + 0;
    a1 = hi;
    s0 = hi;
    ST32(a2+23232, v1);
    v0 = func_08ABFF14(a0, a1);
    goto L_08972114;
L_08972114:;
    a0 = v0 + 0;
    func_0881CBAC(a0);
    goto L_0897211C;
L_0897211C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08AC0150(a0, a1);
    goto L_08972128;
L_08972128:;
    a0 = v0 + 0;
    func_0881CBE4(a0);
    goto L_08972130;
L_08972130:;
    func_08A0F2AC();
    goto L_08972138;
L_08972138:;
    sp = sp + 16;
    return;
L_0897214C:;
    a0 = LD32(s1+20);
    goto L_089720D0;
L_08972154:;
    v0 = LD32(v0-28880);
    goto L_089720C8;
L_0897215C:;
    v1 = LD32(s1+20);
    goto L_089720B0;
L_08972164:;
    v0 = D_08B28F30 - (-28880);
    v0 = LD32(v0-28880);
    goto L_089720A8;
}

/* 08972170 */
void func_08972170(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08972170:;
    sp = sp - 16;
    v0 = D_08B2BB9C - (-17508);
    a3 = D_08B25AC0 - (23232);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    t0 = a3 + 23232;
    if (cnd_) { goto L_089721D8; }
    goto L_0897218C;
L_0897218C:;
    v0 = LD32(a3+23232);
    v1 = LD32(t0+4);
    a0 = 0x4a320000u;
    a1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a1;
    v0 = v0 + v1;
    v1 = v1 + v0;
    a2 = (v0 >> 1) & 0x1;
    a0 = a0 | 0xe16b;
    a1 = 1;
    ST32(t0+4, v1);
    cnd_ = a2 != 0;
    ST32(a3+23232, v0);
    if (cnd_) { goto L_089721D0; }
    goto L_089721C4;
L_089721C4:;
    a0 = 0x4a320000u;
    a0 = a0 | 0xe16c;
    a1 = 1;
    goto L_089721D0;
L_089721D0:;
    { u64 r_ = func_088D61A4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089721D8;
L_089721D8:;
    sp = sp + 16;
    return;
}

/* 089721E4 */
rv_t func_089721E4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089721E4:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C28DD4 - (-29228);
    t1 = D_08C28DE4 - (-29212);
    t2 = D_08C28DF4 - (-29196);
    a1 = a1 & a0;
    v1 = t0 - 29228;
    a2 = t1 - 29212;
    cnd_ = a1 == 0;
    a3 = t2 - 29196;
    if (cnd_) { goto L_0897229C; }
    goto L_08972214;
L_08972214:;
    v0 = D_08AEE2CC - (-7476);
    f4 = BITSF(LD32(v0-7476));
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
    ST32(t0-29228, FBITS(f2));
    ST32(t1-29212, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-29196, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0897229C;
L_0897229C:;
    return (rv_t){ v0, v1, f0 };
}

/* 089722A4 */
rv_t func_089722A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089722A4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089721E4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089722B8;
L_089722B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089722C4 */
void func_089722C4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089722C4:;
    sp = sp - 16;
    v0 = D_08C29328 - (-27864);
    s0 = D_08C28F60 - (-28832);
    v1 = LD32(v0-27864);
    v0 = 5;
    cnd_ = v1 == v0;
    ST32(s0-28832, v1);
    if (cnd_) { goto L_08972300; }
    goto L_089722E8;
L_089722E8:;
    cnd_ = v1 != 0;
    v0 = D_08C294E8 - (-27416);
    if (cnd_) { goto L_08972374; }
    goto L_089722F0;
L_089722F0:;
    { u64 r_ = func_08A3CC70(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089722F8;
L_089722F8:;
    cnd_ = v0 == 0;
    v0 = D_08C294E8 - (-27416);
    if (cnd_) { goto L_08972374; }
    goto L_08972300;
L_08972300:;
    v0 = D_08C28F54 - (-28844);
    v1 = D_08C28F58 - (-28840);
    ST32(v0-28844, 0);
    ST32(v1-28840, 0);
    goto L_08972310;
L_08972310:;
    v0 = D_08B1BB48 - (-17592);
    f0 = BITSF(LD32(v0-17592));
    v1 = D_08C291F8 - (-28168);
    a3 = LD32(s0-28832);
    a2 = D_08C28F7C - (-28804);
    a1 = LD32(v1-28168);
    v0 = D_08C28F5C - (-28836);
    a0 = a2 - 28804;
    ST32(v0-28836, FBITS(f0));
    v0 = 4;
    v1 = D_08C28F95 - (-28779);
    ST32(a0+8, v0);
    v0 = D_08C28F94 - (-28780);
    ST32(a2-28804, a1);
    ST32(a0+4, a3);
    ST8(a0+21, 0);
    ST8(v0-28780, 0);
    ST8(v1-28779, 0);
    ST32(a0+12, 0);
    ST32(a0+16, 0);
    ST8(a0+20, 0);
    sp = sp + 16;
    return;
L_08972374:;
    a0 = LD32(v0-27416);
    v1 = D_08C28F54 - (-28844);
    ST32(v1-28844, a0);
    f0 = func_08979DB4();
    goto L_08972384;
L_08972384:;
    v0 = D_08C28F58 - (-28840);
    ST32(v0-28840, FBITS(f0));
    goto L_08972310;
}

/* 08972390 */
void func_08972390(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08972390:;
    sp = sp - 64;
    v0 = D_08C28F58 - (-28840);
    v1 = D_08B285B4 - (-31308);
    a0 = 4;
    s0 = 0 + 0;
    f1 = BITSF(LD32(v0-28840));
    v0 = D_08AEE2D4 - (-7468);
    f0 = BITSF(LD32(v0-7468));
    f2 = BITSF(LD32(v1-31308));
    v0 = D_08C28F60 - (-28832);
    f1 = f1 * f0;
    a1 = LD32(v0-28832);
    v0 = D_08C28F50 - (-28848);
    v1 = D_08C28F3C - (-28868);
    f1 = f2 + f1;
    ST32(v1-28868, 0);
    v1 = D_08C28F44 - (-28860);
    ST32(v0-28848, FBITS(f1));
    v0 = D_08B1B91C - (-18148);
    ST32(v0-18148, a0);
    v0 = D_08C28F40 - (-28864);
    ST32(v0-28864, 0);
    v0 = D_08C28F4C - (-28852);
    ST32(v1-28860, 0);
    v1 = D_08B1B918 - (-18152);
    ST32(v0-28852, FBITS(f2));
    v0 = 5;
    cnd_ = a1 == v0;
    ST32(v1-18152, a0);
    if (cnd_) { goto L_0897262C; }
    goto L_08972428;
L_08972428:;
    v1 = D_08AEE2D8 - (-7464);
    goto L_0897242C;
L_0897242C:;
    f0 = BITSF(LD32(v1-7464));
    v0 = D_08C28F95 - (-28779);
    ST8(v0-28779, s0);
    a0 = 0 + 0;
    v0 = D_08B1B924 - (-18140);
    ST32(v0-18140, FBITS(f0));
    func_08A269DC(a0, t1, t2, t3);
    goto L_08972448;
L_08972448:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08972480; }
    goto L_08972458;
L_08972458:;
    sp = sp + 64;
    return;
L_08972480:;
    s5 = 0 + 0;
    { u64 r_ = func_0897367C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08972488;
L_08972488:;
    v0 = D_08C28F74 - (-28812);
    v1 = D_08C2BA28 - (-17880);
    s6 = v0 - 28812;
    s7 = v1 - 17880;
    goto L_08972498;
L_08972498:;
    a1 = LD32(s6);
    cnd_ = a1 != 0;
    if (cnd_) { s5 = s5 + 1; goto L_089725E0; }
    goto L_089724A4;
L_089724A4:;
    v0 = D_08C2BA28 - (-17880);
    v0 = v0 - 17880;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = a1 < a0;
    ST32(v0+8, v1);
    a1 = sp + 0;
    ST32(sp+4, 0);
    cnd_ = a0 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_08972520; }
    goto L_089724D4;
L_089724D4:;
    a2 = LD32(s7);
    a3 = LD32(s7+4);
    goto L_089724DC;
L_089724DC:;
    a0 = LD32(a1+4);
    v0 = a0 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a1+8, v1);
    if (cnd_) { goto L_08972510; }
    goto L_089724F4;
L_089724F4:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_08972524; }
    goto L_08972504;
L_08972504:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_089724F4; }
    goto L_08972510;
L_08972510:;
    v0 = a0 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_089724DC; }
    goto L_08972520;
L_08972520:;
    a0 = LD32(sp+8);
    goto L_08972524;
L_08972524:;
    cnd_ = a0 == 0;
    s1 = 4;
    if (cnd_) { goto L_08972554; }
    goto L_0897252C;
L_0897252C:;
    s0 = LD32(a0);
    goto L_08972530;
L_08972530:;
    a1 = 1;
    a0 = sp + 0;
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897253C;
L_0897253C:;
    v0 = LD32(s0+12);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_0897261C; }
    goto L_08972548;
L_08972548:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_08972530; }
    goto L_08972554;
L_08972554:;
    s1 = LD32(sp);
    goto L_08972558;
L_08972558:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089725DC; }
    goto L_08972568;
L_08972568:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089725DC; }
    goto L_08972574;
L_08972574:;
    v0 = LD32(s1);
    goto L_08972578;
L_08972578:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089725CC; }
    goto L_0897258C;
L_0897258C:;
    v0 = LD_U8(s0+8);
    goto L_08972590;
L_08972590:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08972614; }
    goto L_08972598;
L_08972598:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08972604; }
    goto L_089725A0;
L_089725A0:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089725A8;
L_089725A8:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089725B4;
L_089725B4:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089725C0;
L_089725C0:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08972590; }
    goto L_089725C8;
L_089725C8:;
    v1 = LD32(s1+4);
    goto L_089725CC;
L_089725CC:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08972578; }
    goto L_089725DC;
L_089725DC:;
    s5 = s5 + 1;
    goto L_089725E0;
L_089725E0:;
    v0 = s5 < 0x2u;
    cnd_ = v0 != 0;
    s6 = s6 + 4;
    if (cnd_) { goto L_08972498; }
    goto L_089725EC;
L_089725EC:;
    { u64 r_ = func_0897367C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089725F4;
L_089725F4:;
    func_089741A0();
    goto L_089725FC;
L_089725FC:;
    goto L_08972458;
L_08972604:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089725A8;
L_08972614:;
    s0 = LD32(s0+4);
    goto L_089725C0;
L_0897261C:;
    a1 = s5 + 0;
    f0 = func_089EDDAC(a0, a1);
    goto L_08972624;
L_08972624:;
    s1 = LD32(sp);
    goto L_08972558;
L_0897262C:;
    v0 = func_08978770();
    goto L_08972634;
L_08972634:;
    a1 = D_08ADBB7C - (-17540);
    a0 = v0 + 0;
    a1 = a1 - 17540;
    a2 = 5;
    v0 = func_08A89AFC(a0, a1, a2);
    goto L_08972648;
L_08972648:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = 1; goto L_08972428; }
    goto L_08972650;
L_08972650:;
    v1 = D_08AEE2D8 - (-7464);
    goto L_0897242C;
}

/* 08972658 */
void func_08972658(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08972658:;
    sp = sp - 16;
    v0 = D_08B1B91C - (-18148);
    a0 = 0 + 0;
    s0 = D_08C28F7C - (-28804);
    s0 = s0 - 28804;
    v1 = LD32(v0-18148);
    ST32(s0+8, v1);
    { u64 r_ = func_08973A30(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08972680;
L_08972680:;
    ST32(s0+12, v0);
    a0 = 1;
    { u64 r_ = func_08973A30(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897268C;
L_0897268C:;
    v1 = D_08C28F94 - (-28780);
    a0 = LD_U8(v1-28780);
    ST32(s0+16, v0);
    v1 = D_08C28F40 - (-28864);
    v0 = D_08C28F3C - (-28868);
    ST8(s0+20, a0);
    ST32(v0-28868, 0);
    ST32(v1-28864, 0);
    sp = sp + 16;
    return;
}

/* 089726BC */
void func_089726BC(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089726BC:;
    sp = sp - 16;
    v1 = 1;
    v0 = D_08C28F91 - (-28783);
    ST8(v0-28783, v1);
    func_08972658(t1, t2, t3);
    goto L_089726D4;
L_089726D4:;
    a0 = 7;
    func_08972A90(a0);
    goto L_089726DC;
L_089726DC:;
    sp = sp + 16;
    return;
}

/* 089726E8 */
void func_089726E8(void)
{
L_089726E8:;
    return;
}

/* 089726F0 */
void func_089726F0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089726F0:;
    sp = sp - 32;
    s1 = D_08B285A0 - (-31328);
    s0 = D_08B1B924 - (-18140);
    f0 = BITSF(LD32(s0-18140));
    f1 = BITSF(LD32(s1-31328));
    f20 = BITSF(0);
    f0 = f0 - f1;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    ST32(s0-18140, FBITS(f0));
    if (cnd_) { goto L_08972894; }
    goto L_0897272C;
L_0897272C:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    v0 = D_08C2BA34 - (-17868);
    if (cnd_) { goto L_089727A8; }
    goto L_0897273C;
L_0897273C:;
    v1 = D_08C28F48 - (-28856);
    v0 = D_08B2859C - (-31332);
    f1 = BITSF(LD32(v0-31332));
    f0 = BITSF(LD32(v1-28856));
    f0 = f0 - f1;
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    f2 = f20;
    if (cnd_) { goto L_08972764; }
    goto L_08972760;
L_08972760:;
    f2 = f0;
    goto L_08972764;
L_08972764:;
    fcc = FCMP(f2, f20, 2);
    cnd_ = !fcc;
    ST32(v1-28856, FBITS(f2));
    if (cnd_) { goto L_08972788; }
    goto L_08972774;
L_08972774:;
    a0 = D_08C28F3C - (-28868);
    v1 = LD32(a0-28868);
    v0 = 6;
    cnd_ = v1 == v0;
    v0 = 7;
    if (cnd_) { goto L_089727A0; }
    goto L_08972788;
L_08972788:;
    goto L_0897278C;
L_0897278C:;
    sp = sp + 32;
    return;
L_089727A0:;
    ST32(a0-28868, v0);
    goto L_08972788;
L_089727A8:;
    v1 = LD32(v0-17868);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0897278C; }
    goto L_089727B4;
L_089727B4:;
    { u64 r_ = func_089739F8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089727BC;
L_089727BC:;
    cnd_ = v0 == 0;
    v0 = D_08C28F44 - (-28860);
    if (cnd_) { goto L_089727D4; }
    goto L_089727C4;
L_089727C4:;
    f0 = BITSF(LD32(v0-28860));
    f1 = BITSF(LD32(s1-31328));
    f0 = f0 + f1;
    ST32(v0-28860, FBITS(f0));
    goto L_089727D4;
L_089727D4:;
    func_089728AC();
    goto L_089727DC;
L_089727DC:;
    v0 = D_08C28F3C - (-28868);
    v0 = LD32(v0-28868);
    v1 = v0 < 0x8u;
    cnd_ = v1 == 0;
    v1 = D_08ADBB84 - (-17532);
    if (cnd_) { goto L_08972810; }
    goto L_089727F0;
L_089727F0:;
    v0 = v0 << 2;
    v1 = v1 - 17532;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08972808u: goto L_08972808; case 0x08972810u: goto L_08972810; case 0x08972834u: goto L_08972834; case 0x08972844u: goto L_08972844; case 0x08972854u: goto L_08972854; case 0x08972864u: goto L_08972864; case 0x08972874u: goto L_08972874; case 0x08972884u: goto L_08972884; default: rs_break(0, 0x08972800); }
L_08972808:;
    func_08972AA4();
    goto L_08972810;
L_08972810:;
    a0 = 0 + 0;
    func_08A269DC(a0, 0, 0, 0);
    goto L_08972818;
L_08972818:;
    func_08974318(0, 0, 0);
    goto L_08972820;
L_08972820:;
    v0 = func_08973E0C();
    goto L_08972828;
L_08972828:;
    v1 = D_08C28F94 - (-28780);
    ST8(v1-28780, v0);
    goto L_08972788;
L_08972834:;
    func_08972AE8();
    goto L_0897283C;
L_0897283C:;
    goto L_08972810;
L_08972844:;
    func_08972B84();
    goto L_0897284C;
L_0897284C:;
    goto L_08972810;
L_08972854:;
    func_08972C18();
    goto L_0897285C;
L_0897285C:;
    goto L_08972810;
L_08972864:;
    func_08972EB0();
    goto L_0897286C;
L_0897286C:;
    goto L_08972810;
L_08972874:;
    func_08972F4C();
    goto L_0897287C;
L_0897287C:;
    goto L_08972810;
L_08972884:;
    func_08972F88();
    goto L_0897288C;
L_0897288C:;
    goto L_08972810;
L_08972894:;
    func_089726E8();
    goto L_0897289C;
L_0897289C:;
    { rv_t r_ = func_08973998(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089728A4;
L_089728A4:;
    ST32(s0-18140, FBITS(f0));
    goto L_0897272C;
}

/* 089728AC */
void func_089728AC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089728AC:;
    sp = sp - 16;
    a1 = D_08C28F3C - (-28868);
    v0 = D_08C28F40 - (-28864);
    a0 = LD32(v0-28864);
    v1 = LD32(a1-28868);
    cnd_ = a0 == v1;
    v0 = a0 < 0x8u;
    if (cnd_) { goto L_089728F8; }
    goto L_089728CC;
L_089728CC:;
    cnd_ = v0 == 0;
    ST32(a1-28868, a0);
    if (cnd_) { goto L_089728F8; }
    goto L_089728D4;
L_089728D4:;
    v1 = D_08ADBBA4 - (-17500);
    v0 = a0 << 2;
    v1 = v1 - 17500;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089728F0u: goto L_089728F0; case 0x089728F8u: goto L_089728F8; case 0x08972904u: goto L_08972904; case 0x08972914u: goto L_08972914; case 0x08972924u: goto L_08972924; case 0x08972934u: goto L_08972934; case 0x08972944u: goto L_08972944; case 0x08972954u: goto L_08972954; default: rs_break(0, 0x089728e8); }
L_089728F0:;
    func_08972A9C();
    goto L_089728F8;
L_089728F8:;
    goto L_089728FC;
L_089728FC:;
    sp = sp + 16;
    return;
L_08972904:;
    func_08972AD4();
    goto L_0897290C;
L_0897290C:;
    goto L_089728FC;
L_08972914:;
    func_08972B1C();
    goto L_0897291C;
L_0897291C:;
    goto L_089728FC;
L_08972924:;
    func_08972C04();
    goto L_0897292C;
L_0897292C:;
    goto L_089728FC;
L_08972934:;
    func_08972E84();
    goto L_0897293C;
L_0897293C:;
    goto L_089728FC;
L_08972944:;
    func_08972F38();
    goto L_0897294C;
L_0897294C:;
    goto L_089728FC;
L_08972954:;
    func_08972F80();
    goto L_0897295C;
L_0897295C:;
    goto L_089728FC;
}

/* 08972964 */
void func_08972964(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08972964:;
    sp = sp - 16;
    v0 = D_08C28F58 - (-28840);
    v1 = D_08AEE2DC - (-7460);
    f1 = BITSF(0);
    f2 = BITSF(LD32(v0-28840));
    f0 = BITSF(LD32(v1-7460));
    f2 = f2 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089729B4; }
    goto L_0897299C;
L_0897299C:;
    v0 = D_08C28F44 - (-28860);
    f0 = BITSF(LD32(v0-28860));
    fcc = FCMP(f2, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_089729C4; }
    goto L_089729B4;
L_089729B4:;
    sp = sp + 16;
    return;
L_089729C4:;
    { u64 r_ = func_08988228(t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089729CC;
L_089729CC:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = 0 + 0;
    v0 = func_0898819C(a0, a1);
    goto L_089729DC;
L_089729DC:;
    a0 = s1 + 0;
    a1 = 1;
    s0 = v0 + 0;
    v0 = func_0898819C(a0, a1);
    goto L_089729EC;
L_089729EC:;
    v1 = v0 < s0;
    v1 = v1 ^ 0x1;
    a0 = s1 + 0;
    cnd_ = s0 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08972A20; }
    goto L_08972A00;
L_08972A00:;
    a0 = v1 + 0;
    goto L_08972A04;
L_08972A04:;
    { u64 r_ = func_08A26FF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08972A0C;
L_08972A0C:;
    a0 = v0 + 0;
    goto L_08972A10;
L_08972A10:;
    func_0897392C(a0);
    goto L_08972A18;
L_08972A18:;
    goto L_089729B4;
L_08972A20:;
    { u64 r_ = func_08987F80(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08972A28;
L_08972A28:;
    a0 = s1 + 0;
    a1 = 1;
    s0 = v0 + 0;
    { u64 r_ = func_08987F80(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08972A38;
L_08972A38:;
    v1 = s0 < v0;
    v0 = v0 < s0;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08972A04; }
    goto L_08972A48;
L_08972A48:;
    cnd_ = v1 != 0;
    a0 = 1;
    if (cnd_) { goto L_08972A04; }
    goto L_08972A50;
L_08972A50:;
    a0 = 4;
    goto L_08972A10;
}

/* 08972A58 */
u32 func_08972A58(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
L_08972A58:;
    v1 = D_08C28F48 - (-28856);
    v0 = D_08B2859C - (-31332);
    f2 = BITSF(LD32(v0-31332));
    f0 = BITSF(LD32(v1-28856));
    f1 = BITSF(0);
    v0 = 1;
    f0 = f0 - f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    ST32(v1-28856, FBITS(f0));
    if (cnd_) { goto L_08972A88; }
    goto L_08972A84;
L_08972A84:;
    v0 = 0 + 0;
    goto L_08972A88;
L_08972A88:;
    return v0;
}

/* 08972A90 */
void func_08972A90(u32 a0)
{
    u32 v0 = 0;
L_08972A90:;
    v0 = D_08C28F40 - (-28864);
    ST32(v0-28864, a0);
    return;
}

/* 08972A9C */
void func_08972A9C(void)
{
L_08972A9C:;
    return;
}

/* 08972AA4 */
void func_08972AA4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08972AA4:;
    sp = sp - 16;
    v0 = D_08C2932C - (-27860);
    a0 = 2;
    v1 = LD_U8(v0-27860);
    v0 = 1;
    v1 = v1 ^ 0x1;
    if (v1 == 0) a0 = v0;
    func_08972A90(a0);
    goto L_08972AC8;
L_08972AC8:;
    sp = sp + 16;
    return;
}

/* 08972AD4 */
void func_08972AD4(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08972AD4:;
    v0 = D_08B1BB4C - (-17588);
    f0 = BITSF(LD32(v0-17588));
    v1 = D_08C28F48 - (-28856);
    ST32(v1-28856, FBITS(f0));
    return;
}

/* 08972AE8 */
void func_08972AE8(void)
{
    u32 v0 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08972AE8:;
    sp = sp - 16;
    v0 = func_08972A58();
    goto L_08972AF8;
L_08972AF8:;
    cnd_ = v0 != 0;
    a0 = 2;
    if (cnd_) { goto L_08972B0C; }
    goto L_08972B00;
L_08972B00:;
    goto L_08972B04;
L_08972B04:;
    sp = sp + 16;
    return;
L_08972B0C:;
    func_08972A90(a0);
    goto L_08972B14;
L_08972B14:;
    goto L_08972B04;
}

/* 08972B1C */
void func_08972B1C(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08972B1C:;
    sp = sp - 16;
    v0 = D_08C28F58 - (-28840);
    v1 = D_08B285B4 - (-31308);
    f1 = BITSF(LD32(v0-28840));
    v0 = D_08AEE2E0 - (-7456);
    f0 = BITSF(LD32(v0-7456));
    f2 = BITSF(LD32(v1-31308));
    v0 = D_08C28F5C - (-28836);
    f1 = f1 * f0;
    f0 = BITSF(LD32(v0-28836));
    v0 = D_08C28F50 - (-28848);
    v1 = D_08B1B924 - (-18140);
    f1 = f2 + f1;
    ST32(v1-18140, FBITS(f0));
    v1 = D_08C28F44 - (-28860);
    ST32(v0-28848, FBITS(f1));
    v0 = D_08C28F48 - (-28856);
    ST32(v0-28856, 0);
    v0 = D_08C28F4C - (-28852);
    ST32(v1-28860, 0);
    ST32(v0-28852, FBITS(f2));
    func_08981298();
    goto L_08972B78;
L_08972B78:;
    sp = sp + 16;
    return;
}

/* 08972B84 */
void func_08972B84(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08972B84:;
    sp = sp - 16;
    v0 = D_08C28F6C - (-28820);
    s0 = 4;
    v1 = LD32(v0-28820);
    cnd_ = v1 == s0;
    a0 = 3;
    if (cnd_) { goto L_08972BAC; }
    goto L_08972BA4;
L_08972BA4:;
    func_08972A90(a0);
    goto L_08972BAC;
L_08972BAC:;
    v0 = D_08B1B918 - (-18152);
    v1 = LD32(v0-18152);
    cnd_ = v1 == s0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08972BE4; }
    goto L_08972BBC;
L_08972BBC:;
    { u64 r_ = func_08A26F88(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08972BC4;
L_08972BC4:;
    v1 = D_08B1B91C - (-18148);
    a0 = 4;
    ST32(v1-18148, v0);
    func_08972A90(a0);
    goto L_08972BD4;
L_08972BD4:;
    goto L_08972BD8;
L_08972BD8:;
    sp = sp + 16;
    return;
L_08972BE4:;
    { u64 r_ = func_08A3CC70(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08972BEC;
L_08972BEC:;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08972BD8; }
    goto L_08972BF4;
L_08972BF4:;
    func_08972964(0, 0, 0);
    goto L_08972BFC;
L_08972BFC:;
    goto L_08972BD8;
}

/* 08972C04 */
void func_08972C04(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08972C04:;
    v0 = D_08B1BB58 - (-17576);
    f0 = BITSF(LD32(v0-17576));
    v1 = D_08C28F48 - (-28856);
    ST32(v1-28856, FBITS(f0));
    return;
}

/* 08972C18 */
void func_08972C18(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08972C18:;
    sp = sp - 48;
    s0 = D_08C28F6C - (-28820);
    v0 = 4;
    v1 = LD32(s0-28820);
    cnd_ = v1 == v0;
    a0 = 2;
    if (cnd_) { goto L_08972E74; }
    goto L_08972C48;
L_08972C48:;
    v0 = func_08972A58();
    goto L_08972C50;
L_08972C50:;
    cnd_ = v0 != 0;
    a2 = D_08C2B4CC - (-19252);
    if (cnd_) { goto L_08972E64; }
    goto L_08972C58;
L_08972C58:;
    v0 = a2 - 19252;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08972CCC; }
    goto L_08972C80;
L_08972C80:;
    a2 = LD32(a2-19252);
    a3 = a1 + 0;
    goto L_08972C88;
L_08972C88:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08972CBC; }
    goto L_08972CA0;
L_08972CA0:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08972CD0; }
    goto L_08972CB0;
L_08972CB0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08972CA0; }
    goto L_08972CBC;
L_08972CBC:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08972C88; }
    goto L_08972CCC;
L_08972CCC:;
    v0 = LD32(sp+8);
    goto L_08972CD0;
L_08972CD0:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08972D24; }
    goto L_08972CD8;
L_08972CD8:;
    a0 = LD32(a0);
    v0 = LD32(s0-28820);
    v1 = LD32(a0+12);
    v0 = v1 ^ v0;
    v1 = v1 ^ 0x4;
    v0 = 0 < v0;
    v1 = 0 < v1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = sp + 0; goto L_08972D10; }
    goto L_08972D00;
L_08972D00:;
    v0 = func_089E3BC4(a0);
    goto L_08972D08;
L_08972D08:;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08972E5C; }
    goto L_08972D10;
L_08972D10:;
    a1 = 1;
    { u64 r_ = func_08ABDA70(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08972D18;
L_08972D18:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08972CD8; }
    goto L_08972D24;
L_08972D24:;
    cnd_ = v0 != 0;
    v0 = D_08B1B918 - (-18152);
    if (cnd_) { goto L_08972D54; }
    goto L_08972D2C;
L_08972D2C:;
    v0 = D_08B2859C - (-31332);
    f2 = BITSF(LD32(v0-31332));
    v0 = D_08AEE2E4 - (-7452);
    f0 = BITSF(LD32(v0-7452));
    v1 = D_08C28F48 - (-28856);
    f1 = BITSF(LD32(v1-28856));
    f2 = f2 * f0;
    f1 = f1 - f2;
    ST32(v1-28856, FBITS(f1));
    v0 = D_08B1B918 - (-18152);
    goto L_08972D54;
L_08972D54:;
    a0 = LD32(v0-18152);
    v1 = 4;
    cnd_ = a0 == v1;
    if (cnd_) { goto L_08972E3C; }
    goto L_08972D64;
L_08972D64:;
    { u64 r_ = func_08A26F88(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08972D6C;
L_08972D6C:;
    v1 = D_08B1B91C - (-18148);
    a0 = 4;
    ST32(v1-18148, v0);
    func_08972A90(a0);
    goto L_08972D7C;
L_08972D7C:;
    s1 = LD32(sp);
    goto L_08972D80;
L_08972D80:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08972E04; }
    goto L_08972D90;
L_08972D90:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08972E04; }
    goto L_08972D9C;
L_08972D9C:;
    v0 = LD32(s1);
    goto L_08972DA0;
L_08972DA0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08972DF4; }
    goto L_08972DB4;
L_08972DB4:;
    v0 = LD_U8(s0+8);
    goto L_08972DB8;
L_08972DB8:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08972E34; }
    goto L_08972DC0;
L_08972DC0:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08972E24; }
    goto L_08972DC8;
L_08972DC8:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08972DD0;
L_08972DD0:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08972DDC;
L_08972DDC:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08972DE8;
L_08972DE8:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08972DB8; }
    goto L_08972DF0;
L_08972DF0:;
    v1 = LD32(s1+4);
    goto L_08972DF4;
L_08972DF4:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08972DA0; }
    goto L_08972E04;
L_08972E04:;
    goto L_08972E08;
L_08972E08:;
    sp = sp + 48;
    return;
L_08972E24:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08972DD0;
L_08972E34:;
    s0 = LD32(s0+4);
    goto L_08972DE8;
L_08972E3C:;
    { u64 r_ = func_08A3CC70(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08972E44;
L_08972E44:;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(sp); goto L_08972D80; }
    goto L_08972E4C;
L_08972E4C:;
    func_08972964(0, 0, 0);
    goto L_08972E54;
L_08972E54:;
    s1 = LD32(sp);
    goto L_08972D80;
L_08972E5C:;
    v0 = LD32(sp+8);
    goto L_08972D24;
L_08972E64:;
    v1 = LD32(s0-28820);
    v0 = D_08B1B91C - (-18148);
    a0 = 4;
    ST32(v0-18148, v1);
    goto L_08972E74;
L_08972E74:;
    func_08972A90(a0);
    goto L_08972E7C;
L_08972E7C:;
    goto L_08972E08;
}

/* 08972E84 */
void func_08972E84(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08972E84:;
    v0 = D_08AEE2E8 - (-7448);
    f0 = BITSF(LD32(v0-7448));
    sp = sp - 16;
    v1 = D_08C28F48 - (-28856);
    a0 = 1;
    ST32(v1-28856, FBITS(f0));
    { rv_t r_ = func_08971F20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08972EA4;
L_08972EA4:;
    sp = sp + 16;
    return;
}

/* 08972EB0 */
void func_08972EB0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08972EB0:;
    sp = sp - 16;
    v0 = func_08972A58();
    goto L_08972EC0;
L_08972EC0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08972ED0; }
    goto L_08972EC8;
L_08972EC8:;
    sp = sp + 16;
    return;
L_08972ED0:;
    func_08A4ECD4();
    goto L_08972ED8;
L_08972ED8:;
    v0 = D_08C2C3E0 - (-15392);
    v0 = LD32(v0-15392);
    cnd_ = v0 == 0;
    v1 = D_08B1B91C - (-18148);
    if (cnd_) { goto L_08972F00; }
    goto L_08972EE8;
L_08972EE8:;
    v0 = LD32(v0+24);
    a0 = LD32(v1-18148);
    cnd_ = v0 == a0;
    if (cnd_) { goto L_08972F28; }
    goto L_08972EF8;
L_08972EF8:;
    func_08972F90();
    goto L_08972F00;
L_08972F00:;
    v0 = D_08C28F60 - (-28832);
    v1 = LD32(v0-28832);
    v0 = 5;
    cnd_ = v1 == v0;
    a0 = 8;
    if (cnd_) { goto L_08972F18; }
    goto L_08972F14;
L_08972F14:;
    a0 = 6;
    goto L_08972F18;
L_08972F18:;
    func_08972A90(a0);
    goto L_08972F20;
L_08972F20:;
    goto L_08972EC8;
L_08972F28:;
    func_08973468();
    goto L_08972F30;
L_08972F30:;
    goto L_08972EF8;
}

/* 08972F38 */
void func_08972F38(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08972F38:;
    v0 = D_08B1BB54 - (-17580);
    f0 = BITSF(LD32(v0-17580));
    v1 = D_08C28F48 - (-28856);
    ST32(v1-28856, FBITS(f0));
    return;
}

/* 08972F4C */
void func_08972F4C(void)
{
    u32 v0 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08972F4C:;
    sp = sp - 16;
    v0 = func_08972A58();
    goto L_08972F5C;
L_08972F5C:;
    cnd_ = v0 != 0;
    a0 = 7;
    if (cnd_) { goto L_08972F70; }
    goto L_08972F64;
L_08972F64:;
    goto L_08972F68;
L_08972F68:;
    sp = sp + 16;
    return;
L_08972F70:;
    func_08972A90(a0);
    goto L_08972F78;
L_08972F78:;
    goto L_08972F68;
}

/* 08972F80 */
void func_08972F80(void)
{
L_08972F80:;
    return;
}

/* 08972F88 */
void func_08972F88(void)
{
L_08972F88:;
    return;
}

/* 08972F90 */
void func_08972F90(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08972F90:;
    sp = sp - 16;
    v0 = D_08C2C3E0 - (-15392);
    v0 = LD32(v0-15392);
    cnd_ = v0 == 0;
    v1 = D_08B1B91C - (-18148);
    if (cnd_) { goto L_08972FB8; }
    goto L_08972FA8;
L_08972FA8:;
    v0 = LD32(v0+24);
    a0 = LD32(v1-18148);
    cnd_ = v0 == a0;
    if (cnd_) { goto L_08972FC4; }
    goto L_08972FB8;
L_08972FB8:;
    goto L_08972FBC;
L_08972FBC:;
    sp = sp + 16;
    return;
L_08972FC4:;
    func_0897300C();
    goto L_08972FCC;
L_08972FCC:;
    func_08973070(0);
    goto L_08972FD4;
L_08972FD4:;
    func_08973218();
    goto L_08972FDC;
L_08972FDC:;
    v0 = D_08C28F60 - (-28832);
    v1 = LD32(v0-28832);
    a0 = D_08C2933C - (-27844);
    a0 = a0 - 27844;
    v0 = 5;
    a0 = a0 + 164;
    cnd_ = v1 == v0;
    a1 = 42;
    if (cnd_) { goto L_08972FB8; }
    goto L_08972FFC;
L_08972FFC:;
    { rv_t r_ = func_089775E0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08973004;
L_08973004:;
    goto L_08972FBC;
}

/* 0897300C */
void func_0897300C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897300C:;
    sp = sp - 16;
    v0 = D_08C28F60 - (-28832);
    v1 = 5;
    a0 = LD32(v0-28832);
    cnd_ = a0 == v1;
    if (cnd_) { goto L_08973034; }
    goto L_08973028;
L_08973028:;
    goto L_0897302C;
L_0897302C:;
    sp = sp + 16;
    return;
L_08973034:;
    v0 = func_08978770();
    goto L_0897303C;
L_0897303C:;
    a0 = v0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973044;
L_08973044:;
    a0 = D_08C2933C - (-27844);
    v1 = 0x5c20000u;
    a0 = a0 - 27844;
    v1 = v1 | 0xcbfe;
    a0 = a0 + 164;
    cnd_ = v0 != v1;
    a1 = 33;
    if (cnd_) { goto L_08973028; }
    goto L_08973060;
L_08973060:;
    { rv_t r_ = func_089775E0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08973068;
L_08973068:;
    goto L_0897302C;
}

/* 08973070 */
void func_08973070(u32 a3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08973070:;
    sp = sp - 64;
    v0 = D_08C2932D - (-27859);
    v1 = LD_U8(v0-27859);
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_08973130; }
    goto L_089730A8;
L_089730A8:;
    v0 = D_08C2C56C - (-14996);
    a1 = LD32(v0-14996);
    s5 = D_08C2933C - (-27844);
    s1 = 1;
    v0 = s5 - 27844;
    v1 = D_08C2C4EC - (-15124);
    a0 = (s32)s1 < (s32)a1;
    s0 = LD32(v1-15124);
    s7 = LD32(v0+320);
    s6 = LD32(v0+316);
    v1 = v1 - 15124;
    cnd_ = a0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0897310C; }
    goto L_089730DC;
L_089730DC:;
    s2 = v1 + 4;
    s1 = a1 - 1;
    s4 = (u32)-1;
    goto L_089730E8;
L_089730E8:;
    cnd_ = s0 == 0;
    s1 = s1 - 1;
    if (cnd_) { goto L_089730FC; }
    goto L_089730F0;
L_089730F0:;
    v0 = LD32(s2);
    cnd_ = v0 != 0;
    if (cnd_) { a3 = (u32)(s32)LD_S16(v0+18); goto L_089731F0; }
    goto L_089730FC;
L_089730FC:;
    cnd_ = s1 != 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_089730E8; }
    goto L_08973104;
L_08973104:;
    cnd_ = s3 != 0;
    if (cnd_) { goto L_08973130; }
    goto L_0897310C;
L_0897310C:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08973130; }
    goto L_08973114;
L_08973114:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    s0 = LD32(v0+4);
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973128;
L_08973128:;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_08973158; }
    goto L_08973130;
L_08973130:;
    goto L_08973134;
L_08973134:;
    sp = sp + 64;
    return;
L_08973158:;
    v0 = func_0883B10C(0, 0, 0, 0, 0, 0, 0);
    goto L_08973160;
L_08973160:;
    v1 = LDU32(v0);
    a0 = LDU32(v0+4);
    STU32(sp, v1);
    STU32(sp+4, a0);
    v1 = LD_U8(sp+2);
    v0 = LD_U8(sp+3);
    v1 = v1 + 1;
    v0 = v0 + 1;
    ST8(sp+2, v1);
    cnd_ = s6 != 0;
    ST8(sp+3, v0);
    if (cnd_) { goto L_089731AC; }
    goto L_0897319C;
L_0897319C:;
    v1 = LD_U16(sp+2);
    v0 = 6412;
    cnd_ = v1 == v0;
    a0 = s5 - 27844;
    if (cnd_) { goto L_089731DC; }
    goto L_089731AC;
L_089731AC:;
    cnd_ = s7 != 0;
    if (cnd_) { goto L_08973130; }
    goto L_089731B4;
L_089731B4:;
    v1 = LD_U16(sp+2);
    v0 = 1031;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08973134; }
    goto L_089731C4;
L_089731C4:;
    a0 = s5 - 27844;
    a0 = a0 + 164;
    a1 = 39;
    { rv_t r_ = func_089775E0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089731D4;
L_089731D4:;
    goto L_08973130;
L_089731DC:;
    a0 = a0 + 164;
    a1 = 38;
    { rv_t r_ = func_089775E0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089731E8;
L_089731E8:;
    goto L_089731AC;
L_089731F0:;
    a0 = (u32)(s32)LD_S16(s0+16);
    a1 = (u32)(s32)LD_S16(s0+18);
    a2 = (u32)(s32)LD_S16(v0+16);
    v0 = func_08A0AECC(a0, a1, a2, a3);
    goto L_08973200;
L_08973200:;
    v1 = 1;
    cnd_ = v0 != s4;
    if (v0 == 0) s3 = v1;
    if (cnd_) { goto L_089730FC; }
    goto L_0897320C;
L_0897320C:;
    s0 = LD32(s2);
    s3 = 0 + 0;
    goto L_089730FC;
}

/* 08973218 */
void func_08973218(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08973218:;
    sp = sp - 16;
    v0 = func_08978770();
    goto L_08973228;
L_08973228:;
    a0 = v0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973230;
L_08973230:;
    v1 = v0 + 0;
    v0 = 0x532d0000u;
    v0 = v0 | 0x3218;
    cnd_ = v1 == v0;
    a1 = (u32)-1;
    if (cnd_) { goto L_08973460; }
    goto L_08973244;
L_08973244:;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    v0 = 0xaf180000u;
    if (cnd_) { goto L_08973360; }
    goto L_08973250;
L_08973250:;
    v0 = 0x1e0e0000u;
    v0 = v0 | 0x7154;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_08973358; }
    goto L_08973260;
L_08973260:;
    cnd_ = v0 != 0;
    v0 = 0x2db70000u;
    if (cnd_) { goto L_089732F0; }
    goto L_08973268;
L_08973268:;
    v0 = 0x5c20000u;
    v0 = v0 | 0xcbfe;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_089732E8; }
    goto L_08973278;
L_08973278:;
    cnd_ = v0 != 0;
    v0 = 0x63b0000u;
    if (cnd_) { goto L_089732C0; }
    goto L_08973280;
L_08973280:;
    v0 = 0x300000u;
    v0 = v0 | 0xf5bb;
    cnd_ = v1 == v0;
    v0 = 0xfa0000u;
    if (cnd_) { goto L_089732B8; }
    goto L_08973290;
L_08973290:;
    v0 = v0 | 0x90ad;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = 10; goto L_0897329C; }
    goto L_0897329C;
L_0897329C:;
    a0 = D_08C2933C - (-27844);
    goto L_089732A0;
L_089732A0:;
    a0 = a0 - 27844;
    a0 = a0 + 164;
    { rv_t r_ = func_089775E0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089732AC;
L_089732AC:;
    sp = sp + 16;
    return;
L_089732B8:;
    a1 = 3;
    goto L_0897329C;
L_089732C0:;
    v0 = v0 | 0xaf2f;
    cnd_ = v1 == v0;
    v0 = 0x12f00000u;
    if (cnd_) { goto L_089732E0; }
    goto L_089732CC;
L_089732CC:;
    v0 = v0 | 0x35a1;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = 15; goto L_0897329C; }
    goto L_089732D8;
L_089732D8:;
    a0 = D_08C2933C - (-27844);
    goto L_089732A0;
L_089732E0:;
    a1 = 9;
    goto L_0897329C;
L_089732E8:;
    a1 = 1;
    goto L_0897329C;
L_089732F0:;
    v0 = v0 | 0x5dd4;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_08973320; }
    goto L_089732FC;
L_089732FC:;
    cnd_ = v0 != 0;
    v0 = 0x32e60000u;
    if (cnd_) { goto L_08973330; }
    goto L_08973304;
L_08973304:;
    v0 = 0x23f10000u;
    v0 = v0 | 0x97aa;
    cnd_ = v1 == v0;
    v0 = 0x2db60000u;
    if (cnd_) { goto L_08973328; }
    goto L_08973314;
L_08973314:;
    v0 = v0 | 0x1a6a;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = D_08C2933C - (-27844); goto L_089732A0; }
    goto L_08973320;
L_08973320:;
    a1 = 18;
    goto L_0897329C;
L_08973328:;
    a1 = 6;
    goto L_0897329C;
L_08973330:;
    v0 = v0 | 0xc89f;
    cnd_ = v1 == v0;
    v0 = 0x40890000u;
    if (cnd_) { goto L_08973350; }
    goto L_0897333C;
L_0897333C:;
    v0 = v0 | 0xe6dd;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = 5; goto L_0897329C; }
    goto L_08973348;
L_08973348:;
    a0 = D_08C2933C - (-27844);
    goto L_089732A0;
L_08973350:;
    a1 = 7;
    goto L_0897329C;
L_08973358:;
    a1 = 17;
    goto L_0897329C;
L_08973360:;
    v0 = v0 | 0xf46d;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_08973458; }
    goto L_0897336C;
L_0897336C:;
    cnd_ = v0 != 0;
    v0 = 0xe9870000u;
    if (cnd_) { goto L_089733E8; }
    goto L_08973374;
L_08973374:;
    v0 = 0x89a50000u;
    v0 = v0 | 0x5570;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_089733E0; }
    goto L_08973384;
L_08973384:;
    cnd_ = v0 != 0;
    v0 = 0x91380000u;
    if (cnd_) { goto L_089733B8; }
    goto L_0897338C;
L_0897338C:;
    v0 = 0x5a5c0000u;
    v0 = v0 | 0x85d6;
    cnd_ = v1 == v0;
    v0 = 0x6e1a0000u;
    if (cnd_) { goto L_089733B0; }
    goto L_0897339C;
L_0897339C:;
    v0 = v0 | 0xa6cb;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = 2; goto L_0897329C; }
    goto L_089733A8;
L_089733A8:;
    a0 = D_08C2933C - (-27844);
    goto L_089732A0;
L_089733B0:;
    a1 = 8;
    goto L_0897329C;
L_089733B8:;
    v0 = v0 | 0x66f4;
    cnd_ = v1 == v0;
    v0 = 0xa4a80000u;
    if (cnd_) { goto L_089733D8; }
    goto L_089733C4;
L_089733C4:;
    v0 = v0 | 0xf39a;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = 21; goto L_0897329C; }
    goto L_089733D0;
L_089733D0:;
    a0 = D_08C2933C - (-27844);
    goto L_089732A0;
L_089733D8:;
    a1 = 12;
    goto L_0897329C;
L_089733E0:;
    a1 = 0 + 0;
    goto L_0897329C;
L_089733E8:;
    v0 = v0 | 0x2eb9;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_08973450; }
    goto L_089733F4;
L_089733F4:;
    cnd_ = v0 != 0;
    v0 = 0xf4010000u;
    if (cnd_) { goto L_08973428; }
    goto L_089733FC;
L_089733FC:;
    v0 = 0xcb8e0000u;
    v0 = v0 | 0xb79d;
    cnd_ = v1 == v0;
    v0 = 0xd8c80000u;
    if (cnd_) { goto L_08973420; }
    goto L_0897340C;
L_0897340C:;
    v0 = v0 | 0xccba;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = 19; goto L_0897329C; }
    goto L_08973418;
L_08973418:;
    a0 = D_08C2933C - (-27844);
    goto L_089732A0;
L_08973420:;
    a1 = 20;
    goto L_0897329C;
L_08973428:;
    v0 = v0 | 0x98d9;
    cnd_ = v1 == v0;
    v0 = 0xfb290000u;
    if (cnd_) { goto L_08973448; }
    goto L_08973434;
L_08973434:;
    v0 = v0 | 0x8c88;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = 11; goto L_0897329C; }
    goto L_08973440;
L_08973440:;
    a0 = D_08C2933C - (-27844);
    goto L_089732A0;
L_08973448:;
    a1 = 14;
    goto L_0897329C;
L_08973450:;
    a1 = 13;
    goto L_0897329C;
L_08973458:;
    a1 = 16;
    goto L_0897329C;
L_08973460:;
    a1 = 4;
    goto L_0897329C;
}

/* 08973468 */
void func_08973468(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_08973468:;
    v0 = D_08C2933C - (-27844);
    a0 = v0 - 27844;
    v0 = D_08C28F60 - (-28832);
    v1 = LD32(v0-28832);
    v0 = 5;
    a2 = a0 + 0;
    cnd_ = v1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08973490; }
    goto L_08973488;
L_08973488:;
    return;
L_08973490:;
    v0 = LD32(a0+1500);
    a0 = LD_U8(a0+6);
    t0 = a2 + 0;
    a1 = v0 + 1;
    v1 = a1 < 0xbu;
    if (v1 == 0) a1 = 0;
    v0 = v0 ^ a1;
    cnd_ = a0 != 0;
    v0 = 0 < v0;
    if (cnd_) { goto L_089734BC; }
    goto L_089734B4;
L_089734B4:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(t0+6, a3); goto L_089734C4; }
    goto L_089734BC;
L_089734BC:;
    a3 = 1;
    ST8(t0+6, a3);
    goto L_089734C4;
L_089734C4:;
    ST32(a2+1500, a1);
    return;
}

/* 089734CC */
u32 func_089734CC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089734CC:;
    sp = sp - 16;
    v0 = a0 < 0x6u;
    cnd_ = v0 == 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08973500; }
    goto L_089734E0;
L_089734E0:;
    v1 = D_08ADBBC4 - (-17468);
    v0 = a0 << 2;
    v1 = v1 - 17468;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089734FCu: goto L_089734FC; case 0x08973518u: goto L_08973518; case 0x08973520u: goto L_08973520; case 0x08973528u: goto L_08973528; case 0x08973530u: goto L_08973530; case 0x08973538u: goto L_08973538; default: rs_break(0, 0x089734f4); }
L_089734FC:;
    v1 = 39;
    goto L_08973500;
L_08973500:;
    a0 = v1 + 0;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_0897350C;
L_0897350C:;
    sp = sp + 16;
    return v0;
L_08973518:;
    v1 = 41;
    goto L_08973500;
L_08973520:;
    v1 = 43;
    goto L_08973500;
L_08973528:;
    v1 = 45;
    goto L_08973500;
L_08973530:;
    v1 = 47;
    goto L_08973500;
L_08973538:;
    v1 = 104;
    goto L_08973500;
}

/* 08973540 */
u32 func_08973540(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08973540:;
    sp = sp - 16;
    v0 = a0 < 0x6u;
    cnd_ = v0 == 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08973574; }
    goto L_08973554;
L_08973554:;
    v1 = D_08ADBBDC - (-17444);
    v0 = a0 << 2;
    v1 = v1 - 17444;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08973570u: goto L_08973570; case 0x0897358Cu: goto L_0897358C; case 0x08973594u: goto L_08973594; case 0x0897359Cu: goto L_0897359C; case 0x089735A4u: goto L_089735A4; case 0x089735ACu: goto L_089735AC; default: rs_break(0, 0x08973568); }
L_08973570:;
    v1 = 40;
    goto L_08973574;
L_08973574:;
    a0 = v1 + 0;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08973580;
L_08973580:;
    sp = sp + 16;
    return v0;
L_0897358C:;
    v1 = 42;
    goto L_08973574;
L_08973594:;
    v1 = 44;
    goto L_08973574;
L_0897359C:;
    v1 = 46;
    goto L_08973574;
L_089735A4:;
    v1 = 48;
    goto L_08973574;
L_089735AC:;
    v1 = 105;
    goto L_08973574;
}

/* 089735B4 */
u32 func_089735B4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_089735B4:;
    v0 = D_08B1B900 - (-18176);
    v1 = a0 << 2;
    v0 = v0 - 18176;
    v1 = v1 + v0;
    a0 = (s32)a0 < 6;
    v0 = D_08ADBBF4 - (-17420);
    cnd_ = a0 == 0;
    v0 = v0 - 17420;
    if (cnd_) { goto L_089735D8; }
    goto L_089735D4;
L_089735D4:;
    v0 = LD32(v1);
    goto L_089735D8;
L_089735D8:;
    return v0;
}

/* 089735E0 */
u32 func_089735E0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089735E0:;
    sp = sp - 16;
    v0 = D_08B1B900 - (-18176);
    s2 = a0 + 0;
    s1 = v0 - 18176;
    s0 = 0 + 0;
    a1 = LD32(s1);
    goto L_08973608;
L_08973608:;
    a0 = s2 + 0;
    s1 = s1 + 4;
    { u64 r_ = func_08A89724(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973614;
L_08973614:;
    a0 = s0 + 0;
    s0 = s0 + 1;
    cnd_ = v0 == 0;
    v1 = s0 < 0x6u;
    if (cnd_) { goto L_08973630; }
    goto L_08973624;
L_08973624:;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s1); goto L_08973608; }
    goto L_0897362C;
L_0897362C:;
    a0 = 6;
    goto L_08973630;
L_08973630:;
    v0 = a0 + 0;
    sp = sp + 16;
    return v0;
}

/* 0897364C */
u32 func_0897364C(void)
{
    u32 v0 = 0, v1 = 0;
L_0897364C:;
    v1 = D_08C28F60 - (-28832);
    v0 = LD32(v1-28832);
    v0 = v0 - 1;
    v0 = v0 < 0x3u;
    return v0;
}

/* 08973660 */
u32 func_08973660(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
L_08973660:;
    v1 = D_08C28F60 - (-28832);
    v0 = LD32(v1-28832);
    a0 = v0 ^ 0x5;
    a0 = a0 < 0x1u;
    v0 = v0 < 0x1u;
    v0 = v0 | a0;
    return v0;
}

/* 0897367C */
u64 func_0897367C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0897367C:;
    sp = sp - 48;
    v0 = D_08C28F74 - (-28812);
    a0 = v0 - 28812;
    v1 = 0 + 0;
    s3 = 0 + 0;
    goto L_089736AC;
L_089736AC:;
    v1 = v1 + 1;
    v0 = v1 < 0x2u;
    ST32(a0, 0);
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_089736AC; }
    goto L_089736C0;
L_089736C0:;
    v1 = D_08C2BA28 - (-17880);
    v1 = v1 - 17880;
    v0 = LD32(v1+8);
    a0 = sp + 0;
    a1 = 1;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089736EC;
L_089736EC:;
    v1 = LD32(sp+8);
    cnd_ = v1 == 0;
    v0 = D_08C28F74 - (-28812);
    if (cnd_) { goto L_08973730; }
    goto L_089736F8;
L_089736F8:;
    s0 = v0 - 28812;
    v1 = LD32(v1);
    goto L_08973700;
L_08973700:;
    v0 = LD_U8(v1+5);
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0897371C; }
    goto L_0897370C;
L_0897370C:;
    v0 = LD_U8(v1+64);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(v1+12); goto L_08973808; }
    goto L_08973718;
L_08973718:;
    a0 = sp + 0;
    goto L_0897371C;
L_0897371C:;
    a1 = 1;
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973724;
L_08973724:;
    v1 = LD32(sp+8);
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(v1); goto L_08973700; }
    goto L_08973730;
L_08973730:;
    v0 = D_08C28F70 - (-28816);
    s4 = D_08C28F6C - (-28820);
    s5 = D_08B1B920 - (-18144);
    ST32(v0-28816, s3);
    v1 = 4;
    v0 = 2;
    ST32(s4-28820, v1);
    cnd_ = s3 == 0;
    ST32(s5-18144, v0);
    if (cnd_) { goto L_0897378C; }
    goto L_08973754;
L_08973754:;
    v0 = D_08C28F74 - (-28812);
    s1 = v0 - 28812;
    s0 = 0 + 0;
    s2 = s3 >> 1;
    v0 = LD32(s1);
    goto L_08973768;
L_08973768:;
    cnd_ = v0 == s3;
    a0 = s0 + 0;
    if (cnd_) { goto L_089737F4; }
    goto L_08973770;
L_08973770:;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_089737D4; }
    goto L_0897377C;
L_0897377C:;
    s0 = s0 + 1;
    v0 = s0 < 0x2u;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08973768; }
    goto L_0897378C;
L_0897378C:;
    a0 = LD32(sp);
    goto L_08973790;
L_08973790:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089737C4; }
    goto L_089737A0;
L_089737A0:;
    goto L_089737A4;
L_089737A4:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_089737C4:;
    { u64 r_ = func_08ABC380(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089737CC;
L_089737CC:;
    goto L_089737A4;
L_089737D4:;
    v0 = 1;
    s0 = v0 - s0;
    a0 = s0 + 0;
    { u64 r_ = func_08973F18(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089737E4;
L_089737E4:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s5-18144, s0); goto L_0897378C; }
    goto L_089737EC;
L_089737EC:;
    a0 = LD32(sp);
    goto L_08973790;
L_089737F4:;
    { u64 r_ = func_08A26FF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089737FC;
L_089737FC:;
    ST32(s4-28820, v0);
    v0 = LD32(s1);
    goto L_08973770;
L_08973808:;
    s3 = s3 + 1;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973810;
L_08973810:;
    v1 = v0 << 2;
    v0 = (s32)v0 < 2;
    cnd_ = v0 == 0;
    v1 = v1 + s0;
    if (cnd_) { goto L_08973718; }
    goto L_08973820;
L_08973820:;
    v0 = LD32(v1);
    v0 = v0 + 1;
    ST32(v1, v0);
    goto L_08973718;
}

/* 08973830 */
void func_08973830(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08973830:;
    sp = sp - 16;
    s1 = D_08C28F54 - (-28844);
    s0 = a0 + 0;
    { u64 r_ = func_089739F8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897384C;
L_0897384C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08973868; }
    goto L_08973854;
L_08973854:;
    goto L_08973858;
L_08973858:;
    sp = sp + 16;
    return;
L_08973868:;
    { u64 r_ = func_08988228(0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973870;
L_08973870:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_089881BC(a0, a1);
    goto L_0897387C;
L_0897387C:;
    v0 = LD32(s1-28844);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08973854; }
    goto L_08973888;
L_08973888:;
    v0 = func_08973AA0(a0, 0, 0, 0);
    goto L_08973890;
L_08973890:;
    v1 = LD32(s1-28844);
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08973854; }
    goto L_089738A0;
L_089738A0:;
    { u64 r_ = func_08A26FF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089738A8;
L_089738A8:;
    a0 = v0 + 0;
    func_0897392C(a0);
    goto L_089738B0;
L_089738B0:;
    goto L_08973858;
}

/* 089738B8 */
void func_089738B8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089738B8:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08988228(t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089738CC;
L_089738CC:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = 1;
    { rv_t r_ = func_0898803C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089738DC;
L_089738DC:;
    sp = sp + 16;
    return;
}

/* 089738EC */
u64 func_089738EC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089738EC:;
    sp = sp - 16;
    a1 = D_08B1B918 - (-18152);
    a2 = 4;
    v0 = LD32(a1-18152);
    cnd_ = v0 == a2;
    v1 = a0 + 0;
    if (cnd_) { goto L_08973924; }
    goto L_08973908;
L_08973908:;
    cnd_ = v0 == v1;
    a0 = 4;
    if (cnd_) { goto L_08973918; }
    goto L_08973910;
L_08973910:;
    ST32(a1-18152, a2);
    func_0897392C(a0);
    goto L_08973918;
L_08973918:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08973924:;
    ST32(a1-18152, a0);
    goto L_08973918;
}

/* 0897392C */
void func_0897392C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897392C:;
    sp = sp - 16;
    v1 = a0 + 0;
    v0 = D_08B1B91C - (-18148);
    a0 = 4;
    ST32(v0-18148, v1);
    func_08972A90(a0);
    goto L_08973948;
L_08973948:;
    sp = sp + 16;
    return;
}

/* 08973954 */
rv_t func_08973954(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08973954:;
    v0 = D_08C28F44 - (-28860);
    f0 = BITSF(LD32(v0-28860));
    return (rv_t){ v0, v1, f0 };
}

/* 08973960 */
rv_t func_08973960(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08973960:;
    sp = sp - 16;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    v0 = D_08B1B924 - (-18140);
    if (cnd_) { goto L_08973988; }
    goto L_08973978;
L_08973978:;
    f0 = BITSF(LD32(v0-18140));
    goto L_08973980;
L_08973980:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08973988:;
    { rv_t r_ = func_08973998(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08973990;
L_08973990:;
    goto L_08973980;
}

/* 08973998 */
rv_t func_08973998(void)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08973998:;
    v0 = D_08B285B4 - (-31308);
    v1 = D_08C28F4C - (-28852);
    f1 = BITSF(LD32(v1-28852));
    f0 = BITSF(LD32(v0-31308));
    sp = sp - 16;
    f0 = f0 - f1;
    s0 = D_08C28F5C - (-28836);
    f2 = BITSF(LD32(s0-28836));
    f1 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    f13 = f2;
    cnd_ = fcc;
    f12 = f0;
    if (cnd_) { goto L_089739E4; }
    goto L_089739D4;
L_089739D4:;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089739DC;
L_089739DC:;
    f1 = BITSF(LD32(s0-28836));
    f1 = f1 - f0;
    goto L_089739E4;
L_089739E4:;
    f0 = f1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089739F8 */
u64 func_089739F8(void)
{
    u32 v0 = 0, v1 = 0;
L_089739F8:;
    v1 = D_08C28F3C - (-28868);
    v0 = LD32(v1-28868);
    v0 = v0 - 2;
    v0 = v0 < 0x2u;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08973A0C */
u64 func_08973A0C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08973A0C:;
    sp = sp - 16;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973A1C;
L_08973A1C:;
    a0 = v0 + 0;
    { u64 r_ = func_08973A30(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973A24;
L_08973A24:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08973A30 */
u64 func_08973A30(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08973A30:;
    sp = sp - 16;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08973A80; }
    goto L_08973A4C;
L_08973A4C:;
    v0 = D_08C2A19C - (-24164);
    v1 = LD32(v0-24164);
    a1 = a0 + 0;
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08973A78; }
    goto L_08973A60;
L_08973A60:;
    { u64 r_ = func_08987274(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973A68;
L_08973A68:;
    goto L_08973A6C;
L_08973A6C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08973A78:;
    v0 = (u32)-1;
    goto L_08973A68;
L_08973A80:;
    { u64 r_ = func_08988228(t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973A88;
L_08973A88:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08973A78; }
    goto L_08973A90;
L_08973A90:;
    a1 = s0 + 0;
    { u64 r_ = func_08987F80(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973A98;
L_08973A98:;
    goto L_08973A6C;
}

/* 08973AA0 */
u32 func_08973AA0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08973AA0:;
    sp = sp - 16;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08973AF0; }
    goto L_08973ABC;
L_08973ABC:;
    v0 = D_08C2A19C - (-24164);
    v1 = LD32(v0-24164);
    a1 = a0 + 0;
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08973AE8; }
    goto L_08973AD0;
L_08973AD0:;
    v0 = func_089872B4(a0, a1);
    goto L_08973AD8;
L_08973AD8:;
    goto L_08973ADC;
L_08973ADC:;
    sp = sp + 16;
    return v0;
L_08973AE8:;
    v0 = 0 + 0;
    goto L_08973AD8;
L_08973AF0:;
    { u64 r_ = func_08988228(t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973AF8;
L_08973AF8:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08973AE8; }
    goto L_08973B00;
L_08973B00:;
    a1 = s0 + 0;
    v0 = func_0898819C(a0, a1);
    goto L_08973B08;
L_08973B08:;
    goto L_08973ADC;
}

/* 08973B10 */
u32 func_08973B10(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08973B10:;
    sp = sp - 48;
    a0 = a0 & 0xff;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08973B74; }
    goto L_08973B38;
L_08973B38:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    a2 = D_08C2B890 - (-18288);
    if (cnd_) { goto L_08973B78; }
    goto L_08973B48;
L_08973B48:;
    v0 = D_08C28F70 - (-28816);
    v0 = LD32(v0-28816);
    goto L_08973B50;
L_08973B50:;
    sp = sp + 48;
    return v0;
L_08973B74:;
    a2 = D_08C2B890 - (-18288);
    goto L_08973B78;
L_08973B78:;
    v0 = a2 - 18288;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08973BEC; }
    goto L_08973BA0;
L_08973BA0:;
    a2 = LD32(a2-18288);
    a3 = a1 + 0;
    goto L_08973BA8;
L_08973BA8:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08973BDC; }
    goto L_08973BC0;
L_08973BC0:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_08973BF0; }
    goto L_08973BD0;
L_08973BD0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08973BC0; }
    goto L_08973BDC;
L_08973BDC:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08973BA8; }
    goto L_08973BEC;
L_08973BEC:;
    v1 = LD32(sp+8);
    goto L_08973BF0;
L_08973BF0:;
    cnd_ = v1 != 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_08973CA0; }
    goto L_08973BF8;
L_08973BF8:;
    s1 = LD32(sp);
    goto L_08973BFC;
L_08973BFC:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08973C80; }
    goto L_08973C0C;
L_08973C0C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08973C80; }
    goto L_08973C18;
L_08973C18:;
    v0 = LD32(s1);
    goto L_08973C1C;
L_08973C1C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08973C70; }
    goto L_08973C30;
L_08973C30:;
    v0 = LD_U8(s0+8);
    goto L_08973C34;
L_08973C34:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08973C98; }
    goto L_08973C3C;
L_08973C3C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08973C88; }
    goto L_08973C44;
L_08973C44:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08973C4C;
L_08973C4C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973C58;
L_08973C58:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08973C64;
L_08973C64:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08973C34; }
    goto L_08973C6C;
L_08973C6C:;
    v1 = LD32(s1+4);
    goto L_08973C70;
L_08973C70:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08973C1C; }
    goto L_08973C80;
L_08973C80:;
    v0 = s5 + 0;
    goto L_08973B50;
L_08973C88:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08973C4C;
L_08973C98:;
    s0 = LD32(s0+4);
    goto L_08973C64;
L_08973CA0:;
    s0 = LD32(v1);
    goto L_08973CA4;
L_08973CA4:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08AC06EC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973CB0;
L_08973CB0:;
    v0 = LD_U8(s0+4);
    cnd_ = v0 == 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_08973CC8; }
    goto L_08973CBC;
L_08973CBC:;
    v0 = LD_U8(s0+68);
    v0 = 0 < v0;
    s5 = s5 + v0;
    goto L_08973CC8;
L_08973CC8:;
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(v1); goto L_08973CA4; }
    goto L_08973CD0;
L_08973CD0:;
    s1 = LD32(sp);
    goto L_08973BFC;
}

/* 08973CD8 */
u32 func_08973CD8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08973CD8:;
    sp = sp - 32;
    a1 = a1 & 0xff;
    s1 = a0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08973D08; }
    goto L_08973CF8;
L_08973CF8:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08973DC8; }
    goto L_08973D08;
L_08973D08:;
    v1 = D_08C2B890 - (-18288);
    v1 = v1 - 18288;
    v0 = LD32(v1+8);
    a0 = sp + 0;
    a1 = 1;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    s2 = 0 + 0;
    ST32(sp, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08AC06EC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973D38;
L_08973D38:;
    v1 = LD32(sp+8);
    cnd_ = v1 != 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08973D80; }
    goto L_08973D44;
L_08973D44:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08973D70; }
    goto L_08973D54;
L_08973D54:;
    v0 = s2 + 0;
    goto L_08973D58;
L_08973D58:;
    goto L_08973D5C;
L_08973D5C:;
    sp = sp + 32;
    return v0;
L_08973D70:;
    { u64 r_ = func_08AC0790(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973D78;
L_08973D78:;
    v0 = s2 + 0;
    goto L_08973D58;
L_08973D80:;
    s0 = LD32(v1);
    goto L_08973D84;
L_08973D84:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08AC06EC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973D90;
L_08973D90:;
    v0 = LD32(s0+84);
    cnd_ = v0 == s1;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_08973DAC; }
    goto L_08973D9C;
L_08973D9C:;
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(v1); goto L_08973D84; }
    goto L_08973DA4;
L_08973DA4:;
    a0 = LD32(sp);
    goto L_08973D44;
L_08973DAC:;
    v0 = LD_U8(s0+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08973D9C; }
    goto L_08973DB8;
L_08973DB8:;
    v0 = LD_U8(s0+68);
    v0 = 0 < v0;
    s2 = s2 + v0;
    goto L_08973D9C;
L_08973DC8:;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973DD0;
L_08973DD0:;
    a0 = v0 + 0;
    v0 = func_08973DE0(a0);
    goto L_08973DD8;
L_08973DD8:;
    goto L_08973D5C;
}

/* 08973DE0 */
u32 func_08973DE0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08973DE0:;
    v0 = D_08C28F74 - (-28812);
    v1 = a0 << 2;
    v0 = v0 - 28812;
    a0 = (s32)a0 < 2;
    v1 = v1 + v0;
    cnd_ = a0 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08973E04; }
    goto L_08973DFC;
L_08973DFC:;
    return v0;
L_08973E04:;
    v0 = LD32(v1);
    return v0;
}

/* 08973E0C */
u32 func_08973E0C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08973E0C:;
    sp = sp - 16;
    v0 = D_08C28F60 - (-28832);
    s0 = D_08B1B91C - (-18148);
    v1 = LD32(v0-28832);
    v0 = 5;
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08973E44; }
    goto L_08973E30;
L_08973E30:;
    goto L_08973E34;
L_08973E34:;
    v0 = a0 + 0;
    sp = sp + 16;
    return v0;
L_08973E44:;
    v1 = LD32(s0-18148);
    v0 = 4;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08973E34; }
    goto L_08973E54;
L_08973E54:;
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973E5C;
L_08973E5C:;
    a0 = v0 + 0;
    { u64 r_ = func_08A08BFC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973E64;
L_08973E64:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08973E30; }
    goto L_08973E6C;
L_08973E6C:;
    v0 = LD32(v0+24);
    v1 = LD32(s0-18148);
    v0 = v0 ^ v1;
    a0 = v0 < 0x1u;
    goto L_08973E30;
}

/* 08973E80 */
u64 func_08973E80(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08973E80:;
    sp = sp - 16;
    s0 = a0 & 0xff;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08973ECC; }
    goto L_08973E9C;
L_08973E9C:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    v0 = D_08B1B920 - (-18144);
    if (cnd_) { goto L_08973ECC; }
    goto L_08973EAC;
L_08973EAC:;
    v1 = LD32(v0-18144);
    goto L_08973EB0;
L_08973EB0:;
    goto L_08973EB4;
L_08973EB4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08973ECC:;
    a0 = s0 + 0;
    v0 = func_08973B10(a0, t1, t2, t3);
    goto L_08973ED4;
L_08973ED4:;
    s2 = v0 >> 1;
    s1 = 0 + 0;
    goto L_08973EDC;
L_08973EDC:;
    a0 = 0 + 0;
    { u64 r_ = func_08A26FF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973EE4;
L_08973EE4:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    v0 = func_08973CD8(a0, a1);
    goto L_08973EF0;
L_08973EF0:;
    v1 = 1;
    v1 = v1 - s1;
    v0 = s2 < v0;
    s1 = s1 + 1;
    cnd_ = v0 != 0;
    a0 = s1 < 0x2u;
    if (cnd_) { goto L_08973EB0; }
    goto L_08973F08;
L_08973F08:;
    cnd_ = a0 != 0;
    v1 = 2;
    if (cnd_) { goto L_08973EDC; }
    goto L_08973F10;
L_08973F10:;
    goto L_08973EB4;
}

/* 08973F18 */
u64 func_08973F18(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08973F18:;
    sp = sp - 16;
    v0 = D_08C28F3C - (-28868);
    s1 = a0 + 0;
    v1 = LD32(v0-28868);
    v0 = 1;
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08973F78; }
    goto L_08973F40;
L_08973F40:;
    v0 = D_08C28F60 - (-28832);
    v1 = LD32(v0-28832);
    v0 = 5;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08973F7C; }
    goto L_08973F54;
L_08973F54:;
    { u64 r_ = func_08988228(t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973F5C;
L_08973F5C:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08987F80(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08973F68;
L_08973F68:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_08984034(a0);
    goto L_08973F74;
L_08973F74:;
    a0 = v0 < s0;
    goto L_08973F78;
L_08973F78:;
    goto L_08973F7C;
L_08973F7C:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08973F90 */
u64 func_08973F90(void)
{
    u32 v0 = 0, v1 = 0;
L_08973F90:;
    v1 = 2;
    v0 = D_08B1B920 - (-18144);
    ST32(v0-18144, v1);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08973FA0 */
void func_08973FA0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08973FA0:;
    v1 = D_08C28F3C - (-28868);
    v0 = LD32(v1-28868);
    sp = sp - 16;
    cnd_ = v0 == a0;
    if (cnd_) { goto L_08973FC0; }
    goto L_08973FB4;
L_08973FB4:;
    v0 = 4;
    cnd_ = a0 == v0;
    ST32(v1-28868, a0);
    if (cnd_) { goto L_08973FCC; }
    goto L_08973FC0;
L_08973FC0:;
    goto L_08973FC4;
L_08973FC4:;
    sp = sp + 16;
    return;
L_08973FCC:;
    func_08972F90();
    goto L_08973FD4;
L_08973FD4:;
    a0 = 1;
    { rv_t r_ = func_08971F20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08973FDC;
L_08973FDC:;
    goto L_08973FC4;
}

/* 08973FE4 */
void func_08973FE4(float f12)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08973FE4:;
    v0 = D_08B285B4 - (-31308);
    f0 = BITSF(LD32(v0-31308));
    f1 = BITSF(0);
    f12 = f12 - f0;
    fcc = FCMP(f12, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f12; goto L_08974004; }
    goto L_08974004;
L_08974004:;
    v0 = D_08C28F48 - (-28856);
    ST32(v0-28856, FBITS(f1));
    return;
}

/* 08974010 */
void func_08974010(u32 a0)
{
    u32 v0 = 0;
L_08974010:;
    v0 = D_08B1B91C - (-18148);
    ST32(v0-18148, a0);
    return;
}

/* 0897401C */
void func_0897401C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_0897401C:;
    v0 = D_08C28F80 - (-28800);
    v1 = D_08C28F60 - (-28832);
    ST32(v0-28800, a0);
    ST32(v1-28832, a0);
    return;
}

/* 08974030 */
void func_08974030(float f12)
{
    u32 v0 = 0;
L_08974030:;
    v0 = D_08C28F5C - (-28836);
    ST32(v0-28836, FBITS(f12));
    return;
}

/* 0897403C */
void func_0897403C(float f12)
{
    u32 v0 = 0;
L_0897403C:;
    v0 = D_08C28F4C - (-28852);
    ST32(v0-28852, FBITS(f12));
    return;
}

/* 08974048 */
void func_08974048(float f12)
{
    u32 v0 = 0;
L_08974048:;
    v0 = D_08C28F50 - (-28848);
    ST32(v0-28848, FBITS(f12));
    return;
}

/* 08974054 */
void func_08974054(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_08974054:;
    v0 = D_08C28F64 - (-28828);
    v1 = D_08C28F65 - (-28827);
    ST8(v0-28828, a0);
    ST8(v1-28827, a1);
    return;
}

/* 08974068 */
void func_08974068(u32 a0)
{
    u32 v0 = 0;
L_08974068:;
    v0 = D_08C28F66 - (-28826);
    ST8(v0-28826, a0);
    return;
}

/* 08974074 */
void func_08974074(u32 a0)
{
    u32 v0 = 0;
L_08974074:;
    v0 = D_08C28F68 - (-28824);
    ST32(v0-28824, a0);
    return;
}

/* 08974080 */
void func_08974080(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08974080:;
    sp = sp - 32;
    a0 = D_08ADBBF8 - (-17416);
    a1 = D_08C28F94 - (-28780);
    a0 = a0 - 17416;
    a1 = a1 - 28780;
    a2 = 1;
    a3 = 0 + 0;
    s3 = D_08ADBC24 - (-17372);
    s3 = s3 - 17372;
    s2 = D_08ADBC64 - (-17308);
    s2 = s2 - 17308;
    s1 = D_08ADBC8C - (-17268);
    s1 = s1 - 17268;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089740CC;
L_089740CC:;
    a1 = D_08C28F95 - (-28779);
    a0 = s3 + 0;
    a1 = a1 - 28779;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089740E4;
L_089740E4:;
    a1 = D_08C28F64 - (-28828);
    a0 = s2 + 0;
    a1 = a1 - 28828;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089740FC;
L_089740FC:;
    a1 = D_08C28F65 - (-28827);
    a0 = s1 + 0;
    a1 = a1 - 28827;
    a2 = 1;
    a3 = 0 + 0;
    s0 = D_08ADBCB0 - (-17232);
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08974118;
L_08974118:;
    s0 = s0 - 17232;
    a1 = D_08C28F66 - (-28826);
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 28826;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08974134;
L_08974134:;
    a1 = D_08ADBCE4 - (-17180);
    a0 = s2 + 0;
    a1 = a1 - 17180;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08974144;
L_08974144:;
    a1 = D_08ADBD10 - (-17136);
    a0 = s1 + 0;
    a1 = a1 - 17136;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08974154;
L_08974154:;
    a1 = D_08ADBD44 - (-17084);
    a1 = a1 - 17084;
    a0 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08974164;
L_08974164:;
    a0 = s3 + 0;
    func_088978FC(a0, 0, 0, 0);
    goto L_0897416C;
L_0897416C:;
    a0 = s2 + 0;
    func_088978FC(a0, 0, 0, 0);
    goto L_08974174;
L_08974174:;
    a0 = s1 + 0;
    func_088978FC(a0, 0, 0, 0);
    goto L_0897417C;
L_0897417C:;
    a0 = s0 + 0;
    func_088978FC(a0, 0, 0, 0);
    goto L_08974184;
L_08974184:;
    sp = sp + 32;
    return;
}

/* 089741A0 */
void func_089741A0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089741A0:;
    sp = sp - 64;
    v0 = D_08AEE2EC - (-7444);
    v1 = D_08C28FBC - (-28740);
    fp = v1 - 28740;
    v1 = D_08C28FAC - (-28756);
    s6 = v1 - 28756;
    v1 = D_08C28FA0 - (-28768);
    s5 = D_08C28F60 - (-28832);
    s4 = D_08B1B928 - (-18136);
    s3 = v1 - 28768;
    s1 = 0 + 0;
    f20 = BITSF(LD32(v0-7444));
    v0 = D_08C28FA4 - (-28764);
    s7 = v0 - 28764;
    v0 = D_08C28F98 - (-28776);
    s2 = v0 - 28776;
    goto L_0897420C;
L_0897420C:;
    v0 = D_08C294C4 - (-27452);
    v0 = v0 - 27452;
    v1 = LD32(v0+28);
    a0 = LD32(s5-28832);
    s0 = s1 << 2;
    v0 = v1 << 4;
    v0 = v0 - v1;
    v0 = v0 << 2;
    f1 = BITSF(v0);
    v1 = v0 >> 1;
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08974308; }
    goto L_0897423C;
L_0897423C:;
    cnd_ = a0 == 0;
    ST32(s2, FBITS(f0));
    if (cnd_) { goto L_089742CC; }
    goto L_08974244;
L_08974244:;
    ST8(s3, 0);
    goto L_08974248;
L_08974248:;
    f1 = BITSF(LD32(s2));
    f0 = BITSF(LD32(s4-18136));
    v0 = D_08C28FB4 - (-28748);
    v0 = v0 - 28748;
    s1 = s1 + 1;
    a3 = 999;
    a0 = s0 + v0;
    a2 = s0 + s6;
    a1 = s0 + fp;
    v0 = s0 + s7;
    v1 = s1 < 0x2u;
    s3 = s3 + 1;
    ST32(v0, FBITS(f0));
    s2 = s2 + 4;
    ST32(a2, FBITS(f1));
    ST32(a0, a3);
    cnd_ = v1 != 0;
    ST32(a1, a3);
    if (cnd_) { goto L_0897420C; }
    goto L_08974290;
L_08974290:;
    v0 = D_08B1B92C - (-18132);
    ST32(v0-18132, a3);
    sp = sp + 64;
    return;
L_089742CC:;
    { u64 r_ = func_08A3CC70(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089742D4;
L_089742D4:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089742E8; }
    goto L_089742DC;
L_089742DC:;
    v0 = 1;
    ST8(s3, v0);
    goto L_08974248;
L_089742E8:;
    v0 = func_08A3CCC4(a0);
    goto L_089742F0;
L_089742F0:;
    a0 = s1 + 0;
    ST8(s3, v0);
    f0 = func_08A3CDB0(a0);
    goto L_089742FC;
L_089742FC:;
    f0 = f0 * f20;
    ST32(s2, FBITS(f0));
    goto L_08974248;
L_08974308:;
    f1 = BITSF(v1);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_0897423C;
}

/* 08974318 */
void func_08974318(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08974318:;
    sp = sp - 96;
    s7 = 999;
    s6 = 0 + 0;
    v1 = D_08C28FA0 - (-28768);
    goto L_08974354;
L_08974354:;
    v0 = v1 - 28768;
    v0 = s6 + v0;
    v1 = LD_U8(v0);
    cnd_ = v1 != 0;
    a0 = D_08C28FBC - (-28740);
    if (cnd_) { goto L_089743AC; }
    goto L_08974368;
L_08974368:;
    s6 = s6 + 1;
    goto L_0897436C;
L_0897436C:;
    v0 = s6 < 0x2u;
    goto L_08974370;
L_08974370:;
    cnd_ = v0 != 0;
    v1 = D_08C28FA0 - (-28768);
    if (cnd_) { goto L_08974354; }
    goto L_08974378;
L_08974378:;
    sp = sp + 96;
    return;
L_089743AC:;
    s5 = s6 << 2;
    a0 = a0 - 28740;
    v0 = s5 + a0;
    a2 = LD32(v0);
    cnd_ = a2 == s7;
    a0 = D_08C2A08C - (-24436);
    if (cnd_) { goto L_08974C24; }
    goto L_089743C4;
L_089743C4:;
    v1 = a0 - 24436;
    v0 = LD32(v1+4);
    a1 = LD32(a0-24436);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0897440C; }
    goto L_089743EC;
L_089743EC:;
    v1 = LD32(a0);
    goto L_089743F0;
L_089743F0:;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08974C04; }
    goto L_089743FC;
L_089743FC:;
    a0 = LD32(a0+4);
    goto L_08974400;
L_08974400:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089743F0; }
    goto L_08974408;
L_08974408:;
    a3 = 0 + 0;
    goto L_0897440C;
L_0897440C:;
    cnd_ = a3 == 0;
    a2 = 999;
    if (cnd_) { goto L_08974418; }
    goto L_08974414;
L_08974414:;
    a2 = LD32(a3+28);
    goto L_08974418;
L_08974418:;
    v1 = D_08C2B4CC - (-19252);
    v0 = v1 - 19252;
    cnd_ = a2 == s7;
    a0 = 0 + 0;
    if (cnd_) { goto L_08974478; }
    goto L_08974428;
L_08974428:;
    v0 = LD32(v0+4);
    v1 = LD32(v1-19252);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08974478; }
    goto L_0897444C;
L_0897444C:;
    a0 = LD32(a1);
    goto L_08974450;
L_08974450:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08974BE4; }
    goto L_08974468;
L_08974468:;
    a1 = LD32(a1+4);
    goto L_0897446C;
L_0897446C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08974450; }
    goto L_08974474;
L_08974474:;
    a0 = 0 + 0;
    goto L_08974478;
L_08974478:;
    cnd_ = a3 == 0;
    fp = D_08C2C664 - (-14748);
    if (cnd_) { goto L_089744D8; }
    goto L_08974480;
L_08974480:;
    v0 = LD32(a3+96);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = fp - 14748;
    if (cnd_) { goto L_089744DC; }
    goto L_08974490;
L_08974490:;
    cnd_ = a0 == 0;
    if (cnd_) { v1 = LD32(v0+8); goto L_089744E0; }
    goto L_08974498;
L_08974498:;
    v1 = LD32(a0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v0 = fp - 14748;
    if (cnd_) { goto L_089744DC; }
    goto L_089744BC;
L_089744BC:;
    v0 = LD_U8(a0+5);
    cnd_ = v0 == 0;
    v0 = fp - 14748;
    if (cnd_) { goto L_089744DC; }
    goto L_089744C8;
L_089744C8:;
    v0 = LD_U8(a0+64);
    cnd_ = v0 != 0;
    if (cnd_) { s6 = s6 + 1; goto L_0897436C; }
    goto L_089744D4;
L_089744D4:;
    fp = D_08C2C664 - (-14748);
    goto L_089744D8;
L_089744D8:;
    v0 = fp - 14748;
    goto L_089744DC;
L_089744DC:;
    v1 = LD32(v0+8);
    goto L_089744E0;
L_089744E0:;
    a2 = LD32(v0+4);
    a1 = D_08C28FB4 - (-28748);
    a3 = D_08C28FBC - (-28740);
    a1 = a1 - 28748;
    a3 = a3 - 28740;
    a0 = s5 + a1;
    v1 = v1 + 1;
    a1 = s5 + a3;
    ST32(a0, s7);
    a0 = sp + 0;
    ST32(a1, s7);
    ST32(sp, v0);
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a2 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08974568; }
    goto L_08974520;
L_08974520:;
    a3 = LD32(fp-14748);
    goto L_08974524;
L_08974524:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08974558; }
    goto L_0897453C;
L_0897453C:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_0897456C; }
    goto L_0897454C;
L_0897454C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0897453C; }
    goto L_08974558;
L_08974558:;
    v0 = a1 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08974524; }
    goto L_08974568;
L_08974568:;
    a0 = LD32(sp+8);
    goto L_0897456C;
L_0897456C:;
    cnd_ = a0 == 0;
    s1 = 6;
    if (cnd_) { goto L_089745A8; }
    goto L_08974574;
L_08974574:;
    s0 = LD32(a0);
    goto L_08974578;
L_08974578:;
    a1 = 1;
    a0 = sp + 0;
    { u64 r_ = func_08ABCF50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08974584;
L_08974584:;
    cnd_ = s0 == 0;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_089745A0; }
    goto L_0897458C;
L_0897458C:;
    a0 = LD32(s0+88);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08974594;
L_08974594:;
    cnd_ = v0 == s6;
    if (cnd_) { v0 = LD32(s0+204); goto L_08974BCC; }
    goto L_0897459C;
L_0897459C:;
    a0 = LD32(sp+8);
    goto L_089745A0;
L_089745A0:;
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_08974578; }
    goto L_089745A8;
L_089745A8:;
    s1 = LD32(sp);
    v1 = D_08C28F98 - (-28776);
    v1 = v1 - 28776;
    v0 = s5 + v1;
    v1 = LD32(s1+8);
    f0 = BITSF(LD32(v0));
    a0 = D_08C28FAC - (-28756);
    a0 = a0 - 28756;
    v0 = s5 + a0;
    v1 = v1 - 1;
    ST32(v0, FBITS(f0));
    cnd_ = v1 != 0;
    ST32(s1+8, v1);
    if (cnd_) { goto L_08974650; }
    goto L_089745DC;
L_089745DC:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08974650; }
    goto L_089745E8;
L_089745E8:;
    v0 = LD32(s1);
    goto L_089745EC;
L_089745EC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08974640; }
    goto L_08974600;
L_08974600:;
    v0 = LD_U8(s0+8);
    goto L_08974604;
L_08974604:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08974BC4; }
    goto L_0897460C;
L_0897460C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08974BB4; }
    goto L_08974614;
L_08974614:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0897461C;
L_0897461C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08974628;
L_08974628:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08974634;
L_08974634:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08974604; }
    goto L_0897463C;
L_0897463C:;
    v1 = LD32(s1+4);
    goto L_08974640;
L_08974640:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089745EC; }
    goto L_08974650;
L_08974650:;
    a1 = D_08C28FB4 - (-28748);
    a1 = a1 - 28748;
    v0 = s5 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == s7;
    a3 = D_08C2C664 - (-14748);
    if (cnd_) { goto L_08974734; }
    goto L_08974668;
L_08974668:;
    a3 = a3 - 14748;
    v0 = LD32(a3+4);
    v1 = LD32(fp-14748);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    if (cnd_) { s0 = 0 + 0; goto L_089746B0; }
    goto L_08974690;
L_08974690:;
    a0 = LD32(v1);
    goto L_08974694;
L_08974694:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(a0+16); goto L_08974B94; }
    goto L_089746A0;
L_089746A0:;
    v1 = LD32(v1+4);
    goto L_089746A4;
L_089746A4:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_08974694; }
    goto L_089746AC;
L_089746AC:;
    s0 = 0 + 0;
    goto L_089746B0;
L_089746B0:;
    cnd_ = s0 == 0;
    a1 = 999;
    if (cnd_) { goto L_089746BC; }
    goto L_089746B8;
L_089746B8:;
    a1 = LD32(s0+28);
    goto L_089746BC;
L_089746BC:;
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089746CC;
L_089746CC:;
    cnd_ = s0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0897470C; }
    goto L_089746D4;
L_089746D4:;
    v1 = LD32(s0+204);
    v0 = 4;
    cnd_ = v1 == v0;
    a1 = D_08C28FA4 - (-28764);
    if (cnd_) { goto L_08974704; }
    goto L_089746E4;
L_089746E4:;
    a1 = a1 - 28764;
    v0 = s5 + a1;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    v0 = 3;
    if (cnd_) { goto L_08974AD8; }
    goto L_08974704;
L_08974704:;
    a0 = s0 + 0;
    func_08A0CF5C(a0, 0, 0);
    goto L_0897470C;
L_0897470C:;
    v0 = D_08C28FAC - (-28756);
    v0 = v0 - 28756;
    v1 = s5 + v0;
    v0 = D_08AEE2F0 - (-7440);
    a3 = D_08C28FB4 - (-28748);
    f0 = BITSF(LD32(v0-7440));
    a3 = a3 - 28748;
    a0 = s5 + a3;
    ST32(v1, FBITS(f0));
    ST32(a0, s7);
    goto L_08974734;
L_08974734:;
    a1 = D_08C28FAC - (-28756);
    a1 = a1 - 28756;
    a0 = s5 + a1;
    f1 = BITSF(LD32(a0));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v0 = D_08B2BB6D - (-17555);
    if (cnd_) { goto L_08974788; }
    goto L_08974758;
L_08974758:;
    v1 = LD_U8(v0-17555);
    a3 = D_08C2C664 - (-14748);
    a3 = a3 - 14748;
    cnd_ = v1 == 0;
    v0 = LD32(a3+12);
    if (cnd_) { goto L_08974774; }
    goto L_0897476C;
L_0897476C:;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { s6 = s6 + 1; goto L_0897436C; }
    goto L_08974774;
L_08974774:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f0 = f1 - f0;
    ST32(a0, FBITS(f0));
    goto L_08974368;
L_08974788:;
    a3 = D_08C2C664 - (-14748);
    a3 = a3 - 14748;
    v0 = LD32(a3+8);
    a0 = sp + 0;
    a1 = 1;
    v0 = v0 + 1;
    ST32(a3+8, v0);
    s1 = 0 + 0;
    ST32(sp, a3);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABCF50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089747B8;
L_089747B8:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    s2 = 6;
    if (cnd_) { goto L_0897485C; }
    goto L_089747C4;
L_089747C4:;
    s3 = D_08B1B92C - (-18132);
    s4 = 999;
    s0 = LD32(v0);
    goto L_089747D0;
L_089747D0:;
    a1 = 1;
    a0 = sp + 0;
    { u64 r_ = func_08ABCF50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089747DC;
L_089747DC:;
    cnd_ = s0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089747F8; }
    goto L_089747E4;
L_089747E4:;
    a0 = LD32(s0+88);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089747EC;
L_089747EC:;
    cnd_ = v0 == s6;
    if (cnd_) { v0 = LD32(s0+204); goto L_08974A88; }
    goto L_089747F4;
L_089747F4:;
    v0 = LD32(sp+8);
    goto L_089747F8;
L_089747F8:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_089747D0; }
    goto L_08974800;
L_08974800:;
    cnd_ = s1 == 0;
    v0 = D_08B1B928 - (-18136);
    if (cnd_) { goto L_0897485C; }
    goto L_08974808;
L_08974808:;
    f0 = BITSF(LD32(v0-18136));
    a0 = LD32(s1+4);
    v0 = D_08C28FA4 - (-28764);
    a1 = D_08C28FB4 - (-28748);
    v0 = v0 - 28764;
    a1 = a1 - 28748;
    v1 = s5 + v0;
    v0 = s5 + a1;
    ST32(v0, a0);
    v0 = 1;
    ST32(v1, FBITS(f0));
    ST32(s1+204, v0);
    goto L_08974838;
L_08974838:;
    a0 = LD32(sp);
    goto L_0897483C;
L_0897483C:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08974368; }
    goto L_0897484C;
L_0897484C:;
    s6 = s6 + 1;
    { u64 r_ = func_08ABCFE8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08974854;
L_08974854:;
    v0 = s6 < 0x2u;
    goto L_08974370;
L_0897485C:;
    a2 = D_08C29FC4 - (-24636);
    v0 = a2 - 24636;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp+16, v0);
    v1 = v1 + 1;
    a0 = s1 < a1;
    ST32(v0+8, v1);
    s1 = sp + 16;
    ST32(sp+20, 0);
    cnd_ = a0 == 0;
    ST32(sp+24, 0);
    if (cnd_) { goto L_089748D4; }
    goto L_0897488C;
L_0897488C:;
    a2 = LD32(a2-24636);
    goto L_08974890;
L_08974890:;
    a0 = LD32(s1+4);
    v0 = a0 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s1+8, v1);
    if (cnd_) { goto L_089748C4; }
    goto L_089748A8;
L_089748A8:;
    v1 = LD32(s1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+24); goto L_089748D8; }
    goto L_089748B8;
L_089748B8:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089748A8; }
    goto L_089748C4;
L_089748C4:;
    v0 = a0 + 1;
    v1 = v0 < a1;
    cnd_ = v1 != 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_08974890; }
    goto L_089748D4;
L_089748D4:;
    a0 = LD32(sp+24);
    goto L_089748D8;
L_089748D8:;
    cnd_ = a0 == 0;
    if (cnd_) { s1 = LD32(sp+16); goto L_08974930; }
    goto L_089748E0;
L_089748E0:;
    f20 = BITSF(0);
    s2 = 0x58d0000u;
    s3 = D_08C2B4CC - (-19252);
    s4 = 0x8014;
    s2 = s2 | 0x13bf;
    s0 = LD32(a0);
    goto L_089748F8;
L_089748F8:;
    a1 = 1;
    a0 = s1 + 0;
    { u64 r_ = func_08ABF6B0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08974904;
L_08974904:;
    cnd_ = s0 == 0;
    a0 = LD32(sp+24);
    if (cnd_) { goto L_08974924; }
    goto L_0897490C;
L_0897490C:;
    a0 = LD32(s0+88);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08974914;
L_08974914:;
    a0 = s3 - 19252;
    cnd_ = v0 == s6;
    a2 = 1;
    if (cnd_) { goto L_089749D4; }
    goto L_08974920;
L_08974920:;
    a0 = LD32(sp+24);
    goto L_08974924;
L_08974924:;
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_089748F8; }
    goto L_0897492C;
L_0897492C:;
    s1 = LD32(sp+16);
    goto L_08974930;
L_08974930:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08974838; }
    goto L_08974940;
L_08974940:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08974838; }
    goto L_0897494C;
L_0897494C:;
    v0 = LD32(s1);
    goto L_08974950;
L_08974950:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089749A4; }
    goto L_08974964;
L_08974964:;
    v0 = LD_U8(s0+8);
    goto L_08974968;
L_08974968:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089749CC; }
    goto L_08974970;
L_08974970:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089749BC; }
    goto L_08974978;
L_08974978:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08974980;
L_08974980:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897498C;
L_0897498C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08974998;
L_08974998:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08974968; }
    goto L_089749A0;
L_089749A0:;
    v1 = LD32(s1+4);
    goto L_089749A4;
L_089749A4:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08974950; }
    goto L_089749B4;
L_089749B4:;
    a0 = LD32(sp);
    goto L_0897483C;
L_089749BC:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08974980;
L_089749CC:;
    s0 = LD32(s0+4);
    goto L_08974998;
L_089749D4:;
    a1 = LD32(s0+28);
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089749DC;
L_089749DC:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08974920; }
    goto L_089749E4;
L_089749E4:;
    a1 = LD32(v0);
    v0 = LD32(a1-12);
    a2 = v1 + v0;
    f0 = BITSF(LD32(a2+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    a0 = LD32(sp+24);
    if (cnd_) { goto L_08974924; }
    goto L_08974A04;
L_08974A04:;
    v0 = LD_U8(v1+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08974924; }
    goto L_08974A10;
L_08974A10:;
    v0 = LD_U8(v1+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08974924; }
    goto L_08974A1C;
L_08974A1C:;
    v0 = LD32(a1-16);
    a0 = v1 + 0;
    v0 = v1 + v0;
    v1 = LD_U16(v0+8);
    cnd_ = v1 == s4;
    if (cnd_) { v0 = LD32(a2+16); goto L_08974A78; }
    goto L_08974A34;
L_08974A34:;
    v0 = LD32(a1+196);
    goto L_08974A38;
L_08974A38:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08974A40;
L_08974A40:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+24); goto L_08974924; }
    goto L_08974A48;
L_08974A48:;
    a0 = s0 + 0;
    v0 = func_089826E8(a0, 0, 0, 0);
    goto L_08974A50;
L_08974A50:;
    v1 = LD32(s0+4);
    a3 = D_08C28FB4 - (-28748);
    a1 = D_08C28FBC - (-28740);
    a3 = a3 - 28748;
    a1 = a1 - 28740;
    a0 = s5 + a3;
    v0 = s5 + a1;
    ST32(v0, v1);
    ST32(a0, s7);
    goto L_0897492C;
L_08974A78:;
    cnd_ = v0 != s2;
    if (cnd_) { v0 = LD32(a1+196); goto L_08974A38; }
    goto L_08974A80;
L_08974A80:;
    a0 = LD32(sp+24);
    goto L_08974924;
L_08974A88:;
    cnd_ = v0 == s2;
    v1 = LD32(s3-18132);
    if (cnd_) { goto L_089747F4; }
    goto L_08974A90;
L_08974A90:;
    cnd_ = v1 == s4;
    if (cnd_) { goto L_08974AA4; }
    goto L_08974A98;
L_08974A98:;
    v0 = LD32(s0+4);
    cnd_ = v0 == v1;
    if (cnd_) { s1 = s0 + 0; goto L_08974800; }
    goto L_08974AA4;
L_08974AA4:;
    cnd_ = s1 == 0;
    if (cnd_) { s1 = s0 + 0; goto L_089747F4; }
    goto L_08974AAC;
L_08974AAC:;
    a1 = (u32)(s32)LD_S16(s1+44);
    t0 = (u32)(s32)LD_S16(s1+40);
    t1 = (u32)(s32)LD_S16(s1+42);
    a0 = (u32)(s32)LD_S16(s0+44);
    a2 = (u32)(s32)LD_S16(s0+40);
    a3 = (u32)(s32)LD_S16(s0+42);
    { u64 r_ = func_08A2E320(a0, a1, a2, a3, t0, t1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08974AC8;
L_08974AC8:;
    cnd_ = (s32)v0 <= 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089747F8; }
    goto L_08974AD0;
L_08974AD0:;
    s1 = s0 + 0;
    goto L_089747F8;
L_08974AD8:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08974B04; }
    goto L_08974AE0;
L_08974AE0:;
    a0 = D_08C28FA4 - (-28764);
    goto L_08974AE4;
L_08974AE4:;
    a0 = a0 - 28764;
    v1 = s5 + a0;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v0-31328));
    f0 = f0 - f1;
    ST32(v1, FBITS(f0));
    goto L_08974368;
L_08974B04:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = D_08C28FA4 - (-28764); goto L_08974AE4; }
    goto L_08974B0C;
L_08974B0C:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    f0 = BITSF(LD32(v1+40));
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    if (cnd_) { a0 = D_08C28FA4 - (-28764); goto L_08974AE4; }
    goto L_08974B2C;
L_08974B2C:;
    v0 = LD_U8(a0+5);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = D_08C28FA4 - (-28764); goto L_08974AE4; }
    goto L_08974B38;
L_08974B38:;
    v0 = LD_U8(a0+64);
    cnd_ = v0 == 0;
    a0 = D_08C28FA4 - (-28764);
    if (cnd_) { goto L_08974AE4; }
    goto L_08974B44;
L_08974B44:;
    a0 = s0 + 0;
    func_08A0CF24(a0, 0, 0, 0);
    goto L_08974B4C;
L_08974B4C:;
    v1 = D_08C28FB4 - (-28748);
    v1 = v1 - 28748;
    v0 = s5 + v1;
    ST32(v0, s7);
    a0 = D_08C28F98 - (-28776);
    a0 = a0 - 28776;
    v1 = s5 + a0;
    f0 = BITSF(LD32(v1));
    a3 = D_08C28FBC - (-28740);
    a0 = LD32(s0+4);
    v1 = D_08C28FAC - (-28756);
    a3 = a3 - 28740;
    v1 = v1 - 28756;
    a1 = s5 + a3;
    v0 = s5 + v1;
    ST32(a1, a0);
    ST32(v0, FBITS(f0));
    goto L_08974368;
L_08974B94:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089746A0; }
    goto L_08974BA0;
L_08974BA0:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_089746A4; }
    goto L_08974BAC;
L_08974BAC:;
    goto L_089746B0;
L_08974BB4:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0897461C;
L_08974BC4:;
    s0 = LD32(s0+4);
    goto L_08974634;
L_08974BCC:;
    cnd_ = v0 != s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_0897459C; }
    goto L_08974BD4;
L_08974BD4:;
    func_08A0CF80(a0);
    goto L_08974BDC;
L_08974BDC:;
    a0 = LD32(sp+8);
    goto L_089745A0;
L_08974BE4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0897446C; }
    goto L_08974BF0;
L_08974BF0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0897446C; }
    goto L_08974BFC;
L_08974BFC:;
    goto L_08974478;
L_08974C04:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a3 = v1 + 0;
    if (cnd_) { goto L_089743FC; }
    goto L_08974C10;
L_08974C10:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08974400; }
    goto L_08974C1C;
L_08974C1C:;
    goto L_0897440C;
L_08974C24:;
    fp = D_08C2C664 - (-14748);
    goto L_08974650;
}

/* 08974C2C */
void func_08974C2C(u32 a0)
{
    u32 v0 = 0;
L_08974C2C:;
    v0 = D_08B1B92C - (-18132);
    ST32(v0-18132, a0);
    return;
}

/* 08974C38 */
float func_08974C38(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0;
L_08974C38:;
    v0 = D_08C28FA4 - (-28764);
    v0 = v0 - 28764;
    a0 = a0 << 2;
    a0 = a0 + v0;
    f0 = BITSF(LD32(a0));
    return f0;
}

/* 08974C50 */
rv_t func_08974C50(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08974C50:;
    sp = sp - 16;
    v0 = D_08C29324 - (-27868);
    s0 = a0 + 0;
    v1 = LD_U8(v0-27868);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08974D88; }
    goto L_08974C70;
L_08974C70:;
    a0 = D_08C2A9D8 - (-22056);
    v0 = 999;
    cnd_ = s0 == v0;
    v1 = a0 - 22056;
    if (cnd_) { goto L_08974CE8; }
    goto L_08974C80;
L_08974C80:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22056);
    v0 = v0 - 1;
    v0 = s0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08974CD0; }
    goto L_08974CA4;
L_08974CA4:;
    a0 = LD32(a1);
    goto L_08974CA8;
L_08974CA8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(v1+16); goto L_08974DD8; }
    goto L_08974CC0;
L_08974CC0:;
    a1 = LD32(a1+4);
    goto L_08974CC4;
L_08974CC4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08974CA8; }
    goto L_08974CCC;
L_08974CCC:;
    a0 = 0 + 0;
    goto L_08974CD0;
L_08974CD0:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = D_08C2ACF8 - (-21256); goto L_08974CEC; }
    goto L_08974CD8;
L_08974CD8:;
    v0 = LD32(a0+852);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08974DBC; }
    goto L_08974CE8;
L_08974CE8:;
    a0 = D_08C2ACF8 - (-21256);
    goto L_08974CEC;
L_08974CEC:;
    v0 = 999;
    v1 = a0 - 21256;
    cnd_ = s0 == v0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08974D4C; }
    goto L_08974CFC;
L_08974CFC:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-21256);
    v0 = v0 - 1;
    v0 = s0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08974D4C; }
    goto L_08974D20;
L_08974D20:;
    a0 = LD32(a1);
    goto L_08974D24;
L_08974D24:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(v1+16); goto L_08974D9C; }
    goto L_08974D3C;
L_08974D3C:;
    a1 = LD32(a1+4);
    goto L_08974D40;
L_08974D40:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08974D24; }
    goto L_08974D48;
L_08974D48:;
    a2 = 0 + 0;
    goto L_08974D4C;
L_08974D4C:;
    cnd_ = a2 == 0;
    a0 = 1;
    if (cnd_) { goto L_08974D88; }
    goto L_08974D54;
L_08974D54:;
    v1 = LD32(a2);
    a1 = LD32(a2+852);
    a0 = LD32(a2+456);
    v0 = LD32(v1-16);
    a1 = a1 & 0x1;
    v0 = a2 + v0;
    v1 = LD32(v0+4);
    a0 = a0 ^ v1;
    cnd_ = a1 == 0;
    v0 = 0 < a0;
    if (cnd_) { goto L_08974D84; }
    goto L_08974D7C;
L_08974D7C:;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08974D88; }
    goto L_08974D84;
L_08974D84:;
    a0 = 1;
    goto L_08974D88;
L_08974D88:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08974D9C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08974D3C; }
    goto L_08974DA8;
L_08974DA8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08974D40; }
    goto L_08974DB4;
L_08974DB4:;
    goto L_08974D4C;
L_08974DBC:;
    v0 = LD32(v1+204);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08974DC8;
L_08974DC8:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08974D88; }
    goto L_08974DD0;
L_08974DD0:;
    a0 = D_08C2ACF8 - (-21256);
    goto L_08974CEC;
L_08974DD8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08974CC4; }
    goto L_08974DE4;
L_08974DE4:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08974CC4; }
    goto L_08974DF0;
L_08974DF0:;
    goto L_08974CD0;
}

/* 08974DF8 */
void func_08974DF8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08974DF8:;
    sp = sp - 16;
    { u64 r_ = func_08A3CC70(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08974E08;
L_08974E08:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08974E58; }
    goto L_08974E10;
L_08974E10:;
    v0 = func_08A3CC7C(a0);
    goto L_08974E18;
L_08974E18:;
    a0 = v0 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08974E20;
L_08974E20:;
    a0 = v0 + 0;
    goto L_08974E24;
L_08974E24:;
    func_08974FE0(a0);
    goto L_08974E2C;
L_08974E2C:;
    a0 = D_08C28FC8 - (-28728);
    a1 = 1;
    a2 = 12;
    a0 = a0 - 28728;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08974E40;
L_08974E40:;
    v1 = 4095;
    v0 = D_08C28FD4 - (-28716);
    ST32(v0-28716, v1);
    sp = sp + 16;
    return;
L_08974E58:;
    a0 = 2;
    goto L_08974E24;
}

/* 08974E60 */
void func_08974E60(void)
{
    u32 v0 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08974E60:;
    sp = sp - 16;
    a0 = 2;
    func_08974FE0(a0);
    goto L_08974E70;
L_08974E70:;
    v0 = D_08C28FC5 - (-28731);
    ST8(v0-28731, 0);
    sp = sp + 16;
    return;
}

/* 08974E84 */
void func_08974E84(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08974E84:;
    sp = sp - 16;
    v0 = D_08C2C3E0 - (-15392);
    v0 = LD32(v0-15392);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08974EB0; }
    goto L_08974E9C;
L_08974E9C:;
    a0 = LD32(v0+24);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08974EA4;
L_08974EA4:;
    a0 = v0 + 0;
    func_08974FE0(a0);
    goto L_08974EAC;
L_08974EAC:;
    goto L_08974EB0;
L_08974EB0:;
    sp = sp + 16;
    return;
}

/* 08974EB8 */
void func_08974EB8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08974EB8:;
    sp = sp - 16;
    s1 = a0 + 0;
    a2 = 1;
    a1 = LD32(a0);
    a0 = D_08C2A08C - (-24436);
    a0 = a0 - 24436;
    { u64 r_ = func_08AC085C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08974EE0;
L_08974EE0:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08974F50; }
    goto L_08974EE8;
L_08974EE8:;
    a0 = LD32(v0+88);
    { u64 r_ = func_08A26F88(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08974EF0;
L_08974EF0:;
    a0 = v0 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08974EF8;
L_08974EF8:;
    v1 = v0 << 1;
    v1 = v1 + v0;
    v0 = D_08C28FC8 - (-28728);
    v1 = v1 << 1;
    v0 = v0 - 28728;
    v1 = v1 + v0;
    a0 = LD_U8(v1);
    cnd_ = a0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_08974FC8; }
    goto L_08974F1C;
L_08974F1C:;
    s0 = D_08C28FD8 - (-28712);
    v1 = LD32(s0-28712);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08974F48; }
    goto L_08974F2C;
L_08974F2C:;
    v0 = LD32(v1);
    goto L_08974F30;
L_08974F30:;
    cnd_ = v0 == s1;
    a0 = s1 + 0;
    if (cnd_) { goto L_08974F48; }
    goto L_08974F38;
L_08974F38:;
    v1 = LD32(v1+8);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08974F30; }
    goto L_08974F44;
L_08974F44:;
    a0 = 0 + 0;
    goto L_08974F48;
L_08974F48:;
    cnd_ = a0 == 0;
    v0 = s0 - 28712;
    if (cnd_) { goto L_08974F64; }
    goto L_08974F50;
L_08974F50:;
    goto L_08974F54;
L_08974F54:;
    sp = sp + 16;
    return;
L_08974F64:;
    v0 = LD32(v0+8);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08974FB8; }
    goto L_08974F70;
L_08974F70:;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08974F78;
L_08974F78:;
    a0 = v0 + 0;
    goto L_08974F7C;
L_08974F7C:;
    v0 = LD32(s0-28712);
    ST32(a0, s1);
    v1 = s0 - 28712;
    ST32(a0+8, v0);
    cnd_ = v0 == 0;
    ST32(a0+4, 0);
    if (cnd_) { goto L_08974FB0; }
    goto L_08974F94;
L_08974F94:;
    ST32(v0+4, a0);
    goto L_08974F98;
L_08974F98:;
    v1 = s0 - 28712;
    v0 = LD32(v1+16);
    ST32(s0-28712, a0);
    v0 = v0 + 1;
    ST32(v1+16, v0);
    goto L_08974F50;
L_08974FB0:;
    ST32(v1+4, a0);
    goto L_08974F98;
L_08974FB8:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08974FC0;
L_08974FC0:;
    a0 = v0 + 0;
    goto L_08974F7C;
L_08974FC8:;
    a0 = s0 + 0;
    v0 = LD32(v1+80);
    t_ = v0;
    a1 = 5;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08974FD8;
L_08974FD8:;
    goto L_08974F54;
}

/* 08974FE0 */
void func_08974FE0(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08974FE0:;
    sp = sp - 32;
    s2 = a0 + 0;
    { u64 r_ = func_089754C4(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08975004;
L_08975004:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0897508C; }
    goto L_0897500C;
L_0897500C:;
    s4 = D_08B1B930 - (-18128);
    v0 = LD32(s4-18128);
    cnd_ = v0 == s2;
    v0 = D_08B1B934 - (-18124);
    if (cnd_) { goto L_0897508C; }
    goto L_0897501C;
L_0897501C:;
    a0 = LD32(v0-18124);
    s3 = D_08C28FC4 - (-28732);
    { rv_t r_ = func_088978C4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08975028;
L_08975028:;
    v1 = LD_U8(s3-28732);
    cnd_ = v1 == 0;
    v0 = 2;
    if (cnd_) { goto L_08975068; }
    goto L_08975034;
L_08975034:;
    v0 = D_08B1B938 - (-18120);
    s0 = v0 - 18120;
    s1 = 5;
    a0 = LD32(s0);
    goto L_08975044;
L_08975044:;
    s1 = s1 - 1;
    { rv_t r_ = func_088978C4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897504C;
L_0897504C:;
    a0 = LD32(s0+24);
    s0 = s0 + 4;
    { rv_t r_ = func_088978C4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08975058;
L_08975058:;
    cnd_ = (s32)s1 >= 0;
    if (cnd_) { a0 = LD32(s0); goto L_08975044; }
    goto L_08975060;
L_08975060:;
    ST8(s3-28732, 0);
    v0 = 2;
    goto L_08975068;
L_08975068:;
    cnd_ = s2 == v0;
    ST32(s4-18128, s2);
    if (cnd_) { goto L_08975088; }
    goto L_08975070;
L_08975070:;
    func_089750A8();
    goto L_08975078;
L_08975078:;
    v1 = 1;
    v0 = D_08C28FC5 - (-28731);
    ST8(v0-28731, v1);
    ST8(s3-28732, v1);
    goto L_08975088;
L_08975088:;
    goto L_0897508C;
L_0897508C:;
    sp = sp + 32;
    return;
}

/* 089750A8 */
void func_089750A8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089750A8:;
    sp = sp - 32;
    v0 = D_08B1B934 - (-18124);
    a1 = D_08C28FC5 - (-28731);
    a1 = a1 - 28731;
    a2 = 1;
    a3 = 0 + 0;
    s1 = D_08B1B930 - (-18128);
    a0 = LD32(v0-18124);
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089750E0;
L_089750E0:;
    a0 = LD32(s1-18128);
    v0 = 2;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_0897517C; }
    goto L_089750F0;
L_089750F0:;
    s3 = 5;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089750F8;
L_089750F8:;
    a0 = LD32(s1-18128);
    s0 = v0 + 0;
    { u64 r_ = func_08A26F88(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08975104;
L_08975104:;
    a0 = v0 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897510C;
L_0897510C:;
    a0 = v0 << 1;
    v1 = s0 << 1;
    a0 = a0 + v0;
    v1 = v1 + s0;
    v0 = D_08C28FC8 - (-28728);
    v0 = v0 - 28728;
    v1 = v1 << 1;
    a0 = a0 << 1;
    s1 = v1 + v0;
    v1 = D_08B1B938 - (-18120);
    s0 = a0 + v0;
    s2 = v1 - 18120;
    goto L_0897513C;
L_0897513C:;
    a0 = LD32(s2);
    a1 = s1 + 0;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08975150;
L_08975150:;
    a0 = LD32(s2+24);
    a1 = s0 + 0;
    a2 = 1;
    a3 = 0 + 0;
    s3 = s3 - 1;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08975168;
L_08975168:;
    s2 = s2 + 4;
    s1 = s1 + 1;
    cnd_ = (s32)s3 >= 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_0897513C; }
    goto L_08975178;
L_08975178:;
    goto L_0897517C;
L_0897517C:;
    sp = sp + 32;
    return;
}

/* 08975194 */
rv_t func_08975194(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08975194:;
    sp = sp - 48;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089751DC; }
    goto L_089751B4;
L_089751B4:;
    { u64 r_ = func_089754C4(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089751BC;
L_089751BC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089751E0; }
    goto L_089751C4;
L_089751C4:;
    v1 = LD_U16(s0+16);
    v0 = 90;
    cnd_ = v1 == v0;
    v0 = 0x8020;
    if (cnd_) { goto L_08975354; }
    goto L_089751D4;
L_089751D4:;
    cnd_ = v1 == v0;
    if (cnd_) { s1 = LD32(s0+24); goto L_089751F8; }
    goto L_089751DC;
L_089751DC:;
    goto L_089751E0;
L_089751E0:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089751F8:;
    v1 = LD32(s1+4);
    a0 = LD32(s1);
    v0 = v1 << 1;
    v0 = v0 + v1;
    v1 = D_08C28FC8 - (-28728);
    v1 = v1 - 28728;
    v0 = v0 << 1;
    v0 = v0 + v1;
    v0 = v0 + a0;
    ST8(v0, 0);
    { u64 r_ = func_08975448(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08975224;
L_08975224:;
    v0 = LD32(s1);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089751E0; }
    goto L_08975230;
L_08975230:;
    v0 = D_08C28FD8 - (-28712);
    s0 = LD32(v0-28712);
    v0 = v0 - 28712;
    ST32(sp, v0);
    ST32(sp+4, s0);
    cnd_ = s0 == 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_089751E0; }
    goto L_0897524C;
L_0897524C:;
    s3 = D_08C2A08C - (-24436);
    goto L_08975250;
L_08975250:;
    v0 = LD32(v0);
    a0 = s3 - 24436;
    a2 = 1;
    a1 = LD32(v0);
    { u64 r_ = func_08AC085C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08975264;
L_08975264:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08975344; }
    goto L_0897526C;
L_0897526C:;
    a0 = LD32(v0+88);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08975274;
L_08975274:;
    v1 = LD32(s1+4);
    cnd_ = v0 == v1;
    a0 = s0 + 0;
    if (cnd_) { goto L_08975344; }
    goto L_08975280;
L_08975280:;
    v1 = LD32(s0);
    v0 = LD32(v1+80);
    t_ = v0;
    a1 = 5;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08975290;
L_08975290:;
    s0 = LD32(sp+4);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_089752AC; }
    goto L_0897529C;
L_0897529C:;
    cnd_ = s0 != 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_08975250; }
    goto L_089752A4;
L_089752A4:;
    goto L_089751E0;
L_089752AC:;
    a0 = sp + 0;
    { u64 r_ = func_08AC08E4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089752B4;
L_089752B4:;
    s2 = LD32(sp);
    a0 = LD32(s2);
    cnd_ = a0 == 0;
    v1 = LD32(s0);
    if (cnd_) { goto L_089752DC; }
    goto L_089752C4;
L_089752C4:;
    v0 = LD32(a0);
    goto L_089752C8;
L_089752C8:;
    cnd_ = v0 == v1;
    if (cnd_) { v1 = LD32(a0+8); goto L_089752E4; }
    goto L_089752D0;
L_089752D0:;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_089752C8; }
    goto L_089752DC;
L_089752DC:;
    s0 = LD32(sp+4);
    goto L_0897529C;
L_089752E4:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08975338; }
    goto L_089752EC;
L_089752EC:;
    ST32(v1+4, v0);
    goto L_089752F0;
L_089752F0:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s2, v1); goto L_08975300; }
    goto L_089752FC;
L_089752FC:;
    ST32(v0+8, v1);
    goto L_08975300;
L_08975300:;
    v0 = LD32(s2+12);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08975328; }
    goto L_0897530C;
L_0897530C:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08975314;
L_08975314:;
    v0 = LD32(s2+16);
    goto L_08975318;
L_08975318:;
    s0 = LD32(sp+4);
    v0 = v0 - 1;
    ST32(s2+16, v0);
    goto L_0897529C;
L_08975328:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08975330;
L_08975330:;
    v0 = LD32(s2+16);
    goto L_08975318;
L_08975338:;
    ST32(s2+4, v0);
    v1 = LD32(a0+8);
    goto L_089752F0;
L_08975344:;
    a0 = sp + 0;
    { u64 r_ = func_08AC08E4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897534C;
L_0897534C:;
    s0 = LD32(sp+4);
    goto L_0897529C;
L_08975354:;
    s0 = LD32(s0+24);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_089751E0; }
    goto L_08975360;
L_08975360:;
    { u64 r_ = func_08975384(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08975368;
L_08975368:;
    a0 = LD32(s0+40);
    cnd_ = v0 == a0;
    if (cnd_) {  goto L_089751E0; }
    goto L_08975374;
L_08975374:;
    { u64 r_ = func_089753E4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897537C;
L_0897537C:;
    goto L_089751E0;
}

/* 08975384 */
u64 func_08975384(void)
{
    u32 v0 = 0, v1 = 0;
L_08975384:;
    v1 = D_08C28FD4 - (-28716);
    v0 = LD32(v1-28716);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08975390 */
u32 func_08975390(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08975390:;
    v0 = D_08B1B930 - (-18128);
    v1 = LD32(v0-18128);
    v0 = D_08C28FC8 - (-28728);
    v0 = v0 - 28728;
    a0 = a0 ^ v1;
    a0 = 0 < a0;
    v1 = a0 << 1;
    v1 = v1 + a0;
    v1 = v1 << 1;
    a2 = v1 + v0;
    a1 = 0 + 0;
    a0 = 0 + 0;
    goto L_089753C0;
L_089753C0:;
    v0 = a2 + a0;
    v1 = LD_U8(v0);
    a0 = a0 + 1;
    v0 = a0 < 0x6u;
    v1 = 0 < v1;
    cnd_ = v0 != 0;
    a1 = a1 + v1;
    if (cnd_) { goto L_089753C0; }
    goto L_089753DC;
L_089753DC:;
    v0 = a1 + 0;
    return v0;
}

/* 089753E4 */
u64 func_089753E4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
L_089753E4:;
    v0 = D_08C28FD4 - (-28716);
    ST32(v0-28716, a0);
    v0 = D_08C28FC8 - (-28728);
    t0 = a0 + 0;
    a3 = v0 - 28728;
    v1 = 0 + 0;
    t2 = 0 + 0;
    t1 = 1;
    goto L_08975404;
L_08975404:;
    a2 = 0 + 0;
    goto L_08975408;
L_08975408:;
    v0 = t1 << (v1 & 31);
    a1 = a3 + a2;
    v0 = t0 & v0;
    a2 = a2 + 1;
    v0 = 0 < v0;
    v1 = v1 + 1;
    a0 = (s32)a2 < 6;
    ST8(a1, v0);
    cnd_ = a0 != 0;
    v1 = v1 & 0xff;
    if (cnd_) { goto L_08975408; }
    goto L_08975430;
L_08975430:;
    t2 = t2 + 1;
    v0 = (s32)t2 < 2;
    cnd_ = v0 != 0;
    a3 = a3 + 6;
    if (cnd_) { goto L_08975404; }
    goto L_08975440;
L_08975440:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08975448 */
u64 func_08975448(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    int cnd_;
L_08975448:;
    t3 = D_08C28FD4 - (-28716);
    v0 = 4095;
    ST32(t3-28716, v0);
    v1 = D_08C28FC8 - (-28728);
    t0 = v1 - 28728;
    a3 = 0 + 0;
    t2 = 0 + 0;
    t1 = 1;
    v1 = 4095;
    goto L_0897546C;
L_0897546C:;
    a2 = v1 + 0;
    a1 = 0 + 0;
    goto L_08975474;
L_08975474:;
    v0 = t0 + a1;
    a0 = LD_U8(v0);
    v1 = t1 << (a3 & 31);
    v0 = ~(0 | v1);
    v0 = v0 & 0xfff;
    if (a0 == 0) v1 = 0;
    a1 = a1 + 1;
    v1 = v1 | v0;
    a0 = a3 + 1;
    v0 = (s32)a1 < 6;
    a2 = a2 & v1;
    cnd_ = v0 != 0;
    a3 = a0 & 0xff;
    if (cnd_) { goto L_08975474; }
    goto L_089754A8;
L_089754A8:;
    t2 = t2 + 1;
    v0 = (s32)t2 < 2;
    v1 = a2 + 0;
    cnd_ = v0 != 0;
    t0 = t0 + 6;
    if (cnd_) { goto L_0897546C; }
    goto L_089754BC;
L_089754BC:;
    ST32(t3-28716, a2);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089754C4 */
u64 func_089754C4(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_089754C4:;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089754E0; }
    goto L_089754D4;
L_089754D4:;
    v0 = D_08C29328 - (-27864);
    v1 = LD32(v0-27864);
    v0 = v1 < 0x1u;
    goto L_089754E0;
L_089754E0:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089754E8 */
rv_t func_089754E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089754E8:;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    t2 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 16;
    v0 = t2 & v0;
    t3 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089755D0; }
    goto L_08975514;
L_08975514:;
    v0 = D_08AEE2F4 - (-7436);
    f3 = BITSF(LD32(v0-7436));
    v0 = 47;
    f0 = BITSF(v0);
    v0 = 255;
    t0 = D_08C28E8C - (-29044);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 179;
    t1 = D_08C28E9C - (-29028);
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
    a2 = D_08C28EAC - (-29012);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    a3 = D_08C28FD8 - (-28712);
    a1 = a3 - 28712;
    f1 = f1 * f3;
    v0 = t0 - 29044;
    v1 = t1 - 29028;
    a0 = a2 - 29012;
    ST32(a0+12, FBITS(f2));
    ST32(v0+4, FBITS(f4));
    ST32(v0+8, FBITS(f5));
    ST32(v0+12, FBITS(f2));
    ST32(v1+4, FBITS(f6));
    ST32(v1+8, FBITS(f6));
    ST32(t0-29044, FBITS(f1));
    ST32(t1-29028, FBITS(f5));
    ST32(v1+12, FBITS(f2));
    ST32(a2-29012, FBITS(f2));
    ST32(a3-28712, 0);
    ST32(a1+16, 0);
    ST32(a0+8, FBITS(f2));
    ST32(a0+4, FBITS(f2));
    ST32(a1+4, 0);
    ST32(a1+8, 0);
    ST32(a1+12, 0);
    goto L_089755D0;
L_089755D0:;
    v0 = t3 < 0x1u;
    v0 = t2 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08975624; }
    goto L_089755E0;
L_089755E0:;
    v0 = D_08C28FD8 - (-28712);
    s0 = LD32(v0-28712);
    cnd_ = s0 == 0;
    s1 = v0 - 28712;
    if (cnd_) { goto L_08975614; }
    goto L_089755F0;
L_089755F0:;
    v1 = LD32(s1+12);
    goto L_089755F4;
L_089755F4:;
    v0 = s0 + 0;
    a0 = s0 + 0;
    cnd_ = v1 != 0;
    s0 = LD32(s0+8);
    if (cnd_) { goto L_08975634; }
    goto L_08975604;
L_08975604:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897560C;
L_0897560C:;
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s1+12); goto L_089755F4; }
    goto L_08975614;
L_08975614:;
    ST32(s1+16, 0);
    ST32(s1, 0);
    ST32(s1+4, 0);
    goto L_08975624;
L_08975624:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08975634:;
    t_ = v1;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897563C;
L_0897563C:;
    goto L_0897560C;
}

/* 08975644 */
rv_t func_08975644(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08975644:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089754E8(a0, a1, a2, a3, t0, t1, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08975658;
L_08975658:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08975664 */
rv_t func_08975664(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08975664:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089754E8(a0, a1, a2, a3, t0, t1, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08975678;
L_08975678:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08975684 */
void func_08975684(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08975684:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    func_0889DB3C(a0);
    goto L_089756A8;
L_089756A8:;
    v0 = D_08AF9A08 - (-26104);
    v0 = v0 - 26104;
    ST32(s1, v0);
    v0 = (u32)-1;
    f0 = BITSF(s0);
    ST32(s1+8, v0);
    v1 = s0 >> 1;
    f2 = (float)(s32)FBITS(f0);
    ST32(s1+12, 0);
    a0 = s0 & 0x1;
    a0 = a0 | v1;
    ST32(s1+16, 0);
    f0 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s2+4));
    ST32(s1+28, s0);
    ST32(s1+20, FBITS(f0));
    cnd_ = (s32)s0 < 0;
    ST32(s1+24, FBITS(f1));
    if (cnd_) { goto L_08975728; }
    goto L_089756F0;
L_089756F0:;
    v0 = D_08AEE2FC - (-7428);
    f0 = BITSF(LD32(v0-7428));
    f0 = f0 / f2;
    ST32(s1+32, FBITS(f0));
    f1 = BITSF(LD32(s2+4));
    f0 = BITSF(LD32(s2));
    ST32(s1+40, FBITS(f1));
    ST32(s1+36, FBITS(f0));
    sp = sp + 16;
    return;
L_08975728:;
    f0 = BITSF(a0);
    f2 = (float)(s32)FBITS(f0);
    f2 = f2 + f2;
    goto L_089756F0;
}

/* 08975738 */
rv_t func_08975738(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08975738:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0889DB98(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897574C;
L_0897574C:;
    f2 = BITSF(0);
    f0 = BITSF(LD32(s0+4));
    f1 = BITSF(LD32(s0+32));
    f1 = f0 / f1;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEE300 - (-7424);
    if (cnd_) { goto L_08975790; }
    goto L_0897576C;
L_0897576C:;
    f0 = BITSF(LD32(v0-7424));
    f0 = f1 + f0;
    goto L_08975774;
L_08975774:;
    f0 = BITSF(F2I(f0, 1));
    v0 = 0 + 0;
    ST32(s0+12, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08975790:;
    f0 = BITSF(LD32(v0-7424));
    f0 = f1 - f0;
    goto L_08975774;
}

/* 0897579C */
rv_t func_0897579C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0897579C:;
    sp = sp - 64;
    v1 = LD32(a0+12);
    v0 = LD32(a0+16);
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089758B4; }
    goto L_089757E4;
L_089757E4:;
    s5 = D_08AEE30C - (-7412);
    v0 = D_08AEE318 - (-7400);
    f21 = BITSF(LD32(v0-7400));
    f20 = BITSF(LD32(s5-7412));
    s3 = D_08B2C12C - (-16084);
    fp = D_08AEE304 - (-7420);
    s7 = D_08AEE308 - (-7416);
    s4 = D_08AEE310 - (-7408);
    s2 = s3 - 16084;
    s6 = (u32)-1;
    goto L_0897580C;
L_0897580C:;
    ST32(s2+64, s6);
    a0 = s2 + 0;
    f12 = BITSF(LD32(s1+20));
    f13 = BITSF(LD32(s1+24));
    f14 = BITSF(LD32(fp-7420));
    f15 = BITSF(LD32(s7-7416));
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_08975828;
L_08975828:;
    v0 = LD32(s1+8);
    ST32(s2+80, v0);
    v1 = LD32(s1+16);
    cnd_ = v1 == 0;
    f14 = BITSF(LD32(s5-7412));
    if (cnd_) { goto L_08975904; }
    goto L_0897583C;
L_0897583C:;
    v0 = LD32(s1+28);
    v0 = v0 - 1;
    cnd_ = v1 == v0;
    v0 = D_08AEE314 - (-7404);
    if (cnd_) { goto L_089758EC; }
    goto L_0897584C;
L_0897584C:;
    f13 = BITSF(0);
    f15 = BITSF(LD32(s4-7408));
    a0 = s2 + 0;
    f12 = f20;
    f14 = f20;
    goto L_08975860;
L_08975860:;
    s0 = 0 + 0;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_08975868;
L_08975868:;
    s0 = s0 + 1;
    func_088CF2F8(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08975870;
L_08975870:;
    a0 = s3 - 16084;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897587C;
L_0897587C:;
    { u64 r_ = func_088CF370(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08975884;
L_08975884:;
    v0 = s0 < 0x3u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08975868; }
    goto L_08975890;
L_08975890:;
    f0 = BITSF(LD32(s1+20));
    v0 = LD32(s1+16);
    v1 = LD32(s1+12);
    f0 = f0 + f21;
    v0 = v0 + 1;
    v1 = v0 < v1;
    ST32(s1+16, v0);
    cnd_ = v1 != 0;
    ST32(s1+20, FBITS(f0));
    if (cnd_) { goto L_0897580C; }
    goto L_089758B4;
L_089758B4:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_089758EC:;
    f12 = BITSF(LD32(v0-7404));
    f13 = BITSF(0);
    f14 = BITSF(LD32(s5-7412));
    f15 = BITSF(LD32(s4-7408));
    a0 = s2 + 0;
    goto L_08975860;
L_08975904:;
    f12 = BITSF(0);
    f15 = BITSF(LD32(s4-7408));
    a0 = s2 + 0;
    f13 = f12;
    goto L_08975860;
}

/* 08975918 */
rv_t func_08975918(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08975918:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0889DBA4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897592C;
L_0897592C:;
    a0 = D_08ADC0C8 - (-16184);
    v1 = LD32(s0+40);
    v0 = LD32(s0+36);
    ST32(s0+12, 0);
    a0 = a0 - 16184;
    ST32(s0+24, v1);
    ST32(s0+20, v0);
    ST32(s0+16, 0);
    v0 = func_088325D0(a0);
    goto L_08975950;
L_08975950:;
    a0 = v0 + 0;
    { u64 r_ = func_0883A8BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08975958;
L_08975958:;
    ST32(s0+8, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897596C */
rv_t func_0897596C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0897596C:;
    sp = sp - 64;
    s7 = D_08C29020 - (-28640);
    v0 = LD_U8(s7-28640);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08975B08; }
    goto L_089759A8;
L_089759A8:;
    v0 = D_08C2901C - (-28644);
    a0 = LD32(v0-28644);
    func_088F8C64(a0, t1, t2, t3);
    goto L_089759B4;
L_089759B4:;
    v0 = LD_U8(s7-28640);
    cnd_ = v0 == 0;
    v1 = D_08C2901C - (-28644);
    if (cnd_) { goto L_08975B08; }
    goto L_089759C0;
L_089759C0:;
    s0 = LD32(v1-28644);
    fp = D_08B15AB0 - (23216);
    s6 = D_08C29044 - (-28604);
    a0 = s0 + 0;
    func_088F8CB0(a0, 0, 0, 0, 0, 0, 0);
    goto L_089759D4;
L_089759D4:;
    ST8(s0+4, 0);
    a0 = D_08ADC0F8 - (-16136);
    v0 = 1;
    a0 = a0 - 16136;
    ST8(fp+23216, v0);
    { rv_t r_ = func_08898108(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089759EC;
L_089759EC:;
    a0 = s6 - 28604;
    { rv_t r_ = func_08975918(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089759F4;
L_089759F4:;
    v1 = D_08C29024 - (-28636);
    s2 = 0 + 0;
    s1 = 0 + 0;
    s0 = v1 - 28636;
    v0 = LD32(s0);
    goto L_08975A08;
L_08975A08:;
    s1 = s1 + 1;
    s0 = s0 + 4;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08975A30; }
    goto L_08975A18;
L_08975A18:;
    v0 = func_088FB5B8(a0, 0, 0);
    goto L_08975A20;
L_08975A20:;
    s2 = s2 + v0;
    v0 = s1 < 0x7u;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_08975A08; }
    goto L_08975A30;
L_08975A30:;
    v0 = D_08AEE31C - (-7396);
    f20 = BITSF(LD32(v0-7396));
    v0 = D_08C29044 - (-28604);
    v1 = s2 >> 1;
    s3 = s2 & 0x1;
    s5 = v0 - 28604;
    v0 = D_08C29024 - (-28636);
    s3 = s3 | v1;
    s1 = 0 + 0;
    s4 = D_08ADC108 - (-16120);
    s0 = v0 - 28636;
    goto L_08975A5C;
L_08975A5C:;
    a1 = LD32(s0);
    cnd_ = a1 == 0;
    a0 = D_08ADC11C - (-16100);
    if (cnd_) { goto L_08975AE8; }
    goto L_08975A68;
L_08975A68:;
    a0 = s4 - 16120;
    { rv_t r_ = func_08898108(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08975A70;
L_08975A70:;
    cnd_ = s2 != 0;
    v0 = D_08AEE31C - (-7396);
    if (cnd_) { goto L_08975B4C; }
    goto L_08975A78;
L_08975A78:;
    f1 = BITSF(LD32(v0-7396));
    goto L_08975A7C;
L_08975A7C:;
    f0 = BITSF(LD32(s5+4));
    f12 = BITSF(0);
    f0 = f0 + f1;
    fcc = FCMP(f0, f12, 12);
    cnd_ = fcc;
    f2 = BITSF(LD32(v0-7396));
    if (cnd_) { goto L_08975AAC; }
    goto L_08975A98;
L_08975A98:;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    f12 = f2;
    if (cnd_) { goto L_08975AAC; }
    goto L_08975AA8;
L_08975AA8:;
    f12 = f0;
    goto L_08975AAC;
L_08975AAC:;
    a0 = s6 - 28604;
    a1 = 0 + 0;
    func_08827BC4(a0, a1, f12);
    goto L_08975AB8;
L_08975AB8:;
    a0 = LD32(s0);
    v0 = func_08975E34(a0);
    goto L_08975AC0;
L_08975AC0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08975B3C; }
    goto L_08975AC8;
L_08975AC8:;
    a0 = LD32(s0);
    a1 = 5;
    v0 = func_0883A868(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08975AD4;
L_08975AD4:;
    s1 = s1 + 1;
    goto L_08975AD8;
L_08975AD8:;
    v0 = s1 < 0x7u;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08975A5C; }
    goto L_08975AE4;
L_08975AE4:;
    a0 = D_08ADC11C - (-16100);
    goto L_08975AE8;
L_08975AE8:;
    a0 = a0 - 16100;
    { rv_t r_ = func_08898108(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08975AF0;
L_08975AF0:;
    v1 = D_08C29040 - (-28608);
    v0 = 2;
    ST32(v1-28608, v0);
    v1 = LD_U8(s7-28640);
    cnd_ = v1 != 0;
    ST8(fp+23216, 0);
    if (cnd_) { goto L_089759A8; }
    goto L_08975B08;
L_08975B08:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08975B3C:;
    a0 = LD32(s0);
    { rv_t r_ = func_08827B7C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08975B44;
L_08975B44:;
    s1 = s1 + 1;
    goto L_08975AD8;
L_08975B4C:;
    a0 = LD32(s0);
    v0 = func_088FB5B8(a0, 0, 0);
    goto L_08975B54;
L_08975B54:;
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08975B8C; }
    goto L_08975B60;
L_08975B60:;
    f2 = BITSF(s2);
    cnd_ = (s32)s2 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08975B7C; }
    goto L_08975B6C;
L_08975B6C:;
    f0 = f20 / f0;
    v0 = D_08AEE31C - (-7396);
    f1 = f1 * f0;
    goto L_08975A7C;
L_08975B7C:;
    f2 = BITSF(s3);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08975B6C;
L_08975B8C:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f1 = (float)(s32)FBITS(f2);
    f1 = f1 + f1;
    goto L_08975B60;
}

/* 08975BA8 */
void func_08975BA8(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08975BA8:;
    sp = sp - 16;
    a0 = 8;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08975BBC;
L_08975BBC:;
    a0 = D_08ADC12C - (-16084);
    a3 = 0 + 0;
    a0 = a0 - 16084;
    a1 = 512;
    a2 = 0 + 0;
    s0 = v0 + 0;
    v0 = sceKernelCreateEventFlag(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08975BD8;
L_08975BD8:;
    ST32(s0, v0);
    a0 = D_08ADC13C - (-16068);
    v0 = D_08C2901C - (-28644);
    ST8(s0+4, 0);
    a1 = ((u32)(uintptr_t)func_0897596C) - (22892);
    v1 = 1;
    ST32(v0-28644, s0);
    a0 = a0 - 16068;
    a1 = a1 + 22892;
    a2 = 0 + 0;
    v0 = D_08C29020 - (-28640);
    ST8(v0-28640, v1);
    v0 = func_088F8AE4(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08975C0C;
L_08975C0C:;
    sp = sp + 16;
    return;
}

/* 08975C1C */
void func_08975C1C(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08975C1C:;
    sp = sp - 16;
    s1 = D_08C2901C - (-28644);
    v1 = D_08C29020 - (-28640);
    v0 = LD32(s1-28644);
    ST8(v1-28640, 0);
    v1 = 1;
    ST8(v0+4, v1);
    a0 = v0 + 0;
    { u64 r_ = func_088F8C90(a0, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08975C4C;
L_08975C4C:;
    s0 = LD32(s1-28644);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08975C70; }
    goto L_08975C58;
L_08975C58:;
    ST32(s1-28644, 0);
    goto L_08975C5C;
L_08975C5C:;
    sp = sp + 16;
    return;
L_08975C70:;
    a0 = LD32(s0);
    v0 = sceKernelDeleteEventFlag(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08975C78;
L_08975C78:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08975C80;
L_08975C80:;
    ST32(s1-28644, 0);
    goto L_08975C5C;
}

/* 08975C88 */
void func_08975C88(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08975C88:;
    sp = sp - 16;
    a0 = D_08C29024 - (-28636);
    a0 = a0 - 28636;
    a1 = 0 + 0;
    a2 = 28;
    v0 = D_08C29040 - (-28608);
    s0 = 1;
    ST32(v0-28608, s0);
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08975CB4;
L_08975CB4:;
    a0 = 2;
    a1 = (u32)-1;
    a2 = 0 + 0;
    func_08975EB0(a0, a1, a2);
    goto L_08975CC4;
L_08975CC4:;
    v0 = func_08975CFC();
    goto L_08975CCC;
L_08975CCC:;
    cnd_ = v0 != 0;
    v0 = D_08C2901C - (-28644);
    if (cnd_) { goto L_08975CE4; }
    goto L_08975CD4;
L_08975CD4:;
    goto L_08975CD8;
L_08975CD8:;
    sp = sp + 16;
    return;
L_08975CE4:;
    v1 = LD32(v0-28644);
    ST8(v1+4, s0);
    a0 = v1 + 0;
    { u64 r_ = func_088F8C90(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08975CF4;
L_08975CF4:;
    goto L_08975CD8;
}

/* 08975CFC */
u32 func_08975CFC(void)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a3 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08975CFC:;
    sp = sp - 16;
    v0 = D_08C28DC8 - (-29240);
    a3 = D_08C29024 - (-28636);
    s0 = a3 - 28636;
    v1 = LD32(v0-29240);
    v0 = 4;
    cnd_ = v1 == v0;
    a1 = 7;
    if (cnd_) { goto L_08975D68; }
    goto L_08975D24;
L_08975D24:;
    v0 = D_08C292E4 - (-27932);
    v0 = v0 - 27932;
    ST32(a3-28636, v0);
    v0 = func_08975E58();
    goto L_08975D34;
L_08975D34:;
    v1 = D_08ADC14C - (-16052);
    ST32(s0+4, v0);
    v0 = D_08ADC16C - (-16020);
    v1 = v1 - 16052;
    v0 = v0 - 16020;
    ST32(s0+12, v1);
    a1 = 4;
    ST32(s0+8, v0);
    goto L_08975D54;
L_08975D54:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
L_08975D68:;
    v0 = D_08ADC190 - (-15984);
    v0 = v0 - 15984;
    ST32(a3-28636, v0);
    v1 = D_08ADC14C - (-16052);
    v0 = D_08ADC1A8 - (-15960);
    v1 = v1 - 16052;
    v0 = v0 - 15960;
    ST32(s0+24, v1);
    v1 = D_08ADC1C4 - (-15932);
    v1 = v1 - 15932;
    ST32(s0+4, v0);
    v0 = D_08ADC1E4 - (-15900);
    v0 = v0 - 15900;
    ST32(s0+8, v1);
    v1 = D_08ADC200 - (-15872);
    v1 = v1 - 15872;
    ST32(s0+12, v0);
    v0 = D_08ADC21C - (-15844);
    v0 = v0 - 15844;
    ST32(s0+16, v1);
    ST32(s0+20, v0);
    goto L_08975D54;
}

/* 08975DC0 */
u32 func_08975DC0(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08975DC0:;
    sp = sp - 16;
    v0 = D_08C29040 - (-28608);
    v1 = 1;
    a0 = LD32(v0-28608);
    cnd_ = a0 == v1;
    if (cnd_) { goto L_08975DF4; }
    goto L_08975DDC;
L_08975DDC:;
    func_08975E0C(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08975DE4;
L_08975DE4:;
    v0 = 0 + 0;
    goto L_08975DE8;
L_08975DE8:;
    sp = sp + 16;
    return v0;
L_08975DF4:;
    func_088ABED0(t1, t2, t3);
    goto L_08975DFC;
L_08975DFC:;
    func_088F8B84(0, 0, 0, 0, 0, 0, 0);
    goto L_08975E04;
L_08975E04:;
    v0 = 1;
    goto L_08975DE8;
}

/* 08975E0C */
void func_08975E0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08975E0C:;
    sp = sp - 16;
    v0 = D_08C29040 - (-28608);
    ST32(v0-28608, 0);
    func_08976600(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08975E20;
L_08975E20:;
    func_0883AEA0();
    goto L_08975E28;
L_08975E28:;
    sp = sp + 16;
    return;
}

/* 08975E34 */
u32 func_08975E34(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08975E34:;
    a1 = D_08ADC234 - (-15820);
    sp = sp - 16;
    a1 = a1 - 15820;
    a2 = 0 + 0;
    { u64 r_ = func_08838148(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08975E4C;
L_08975E4C:;
    sp = sp + 16;
    return v0;
}

/* 08975E58 */
u32 func_08975E58(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
L_08975E58:;
    v0 = D_08B1BB5C - (-17572);
    a0 = LD32(v0-17572);
    v1 = D_08ADC23C - (-15812);
    cnd_ = a0 == 0;
    v1 = v1 - 15812;
    if (cnd_) { goto L_08975E7C; }
    goto L_08975E6C;
L_08975E6C:;
    v1 = D_08ADC260 - (-15776);
    v0 = 1;
    cnd_ = a0 != v0;
    v1 = v1 - 15776;
    if (cnd_) { goto L_08975E84; }
    goto L_08975E7C;
L_08975E7C:;
    v0 = v1 + 0;
    return v0;
L_08975E84:;
    v1 = 0 + 0;
    goto L_08975E7C;
}

/* 08975E8C */
u32 func_08975E8C(void)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08975E8C:;
    sp = sp - 16;
    v0 = func_088342C0();
    goto L_08975E9C;
L_08975E9C:;
    v0 = v0 ^ 0x3;
    v0 = v0 < 0x1u;
    sp = sp + 16;
    return v0;
}

/* 08975EB0 */
void func_08975EB0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f12 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[576] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 576);
L_08975EB0:;
    sp = sp - 576;
    v0 = D_08C29128 - (-28376);
    fp = a0 + 0;
    s7 = a1 + 0;
    s0 = a2 + 0;
    v1 = LD_U8(v0-28376);
    v0 = D_08C29129 - (-28375);
    cnd_ = v1 == 0;
    ST8(v0-28375, v1);
    if (cnd_) { goto L_08975F04; }
    goto L_08975EFC;
L_08975EFC:;
    v0 = D_08B16204 - (25092);
    ST8(v0+25092, 0);
    goto L_08975F04;
L_08975F04:;
    a0 = 1;
    func_08904228(a0);
    goto L_08975F0C;
L_08975F0C:;
    s6 = D_08B1B974 - (-18060);
    v0 = func_0883BE08(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08975F14;
L_08975F14:;
    v1 = D_08C2912C - (-28372);
    a1 = D_08C290D1 - (-28463);
    s3 = D_08C290F8 - (-28424);
    ST32(v1-28372, v0);
    s4 = 1;
    v0 = D_08C290D0 - (-28464);
    ST8(v0-28464, 0);
    ST8(s6-18060, 0);
    ST8(a1-28463, 0);
    cnd_ = s0 == s4;
    ST32(s3-28424, 0);
    if (cnd_) { goto L_089765E0; }
    goto L_08975F40;
L_08975F40:;
    v0 = D_08C28DC8 - (-29240);
    a0 = LD32(v0-29240);
    v1 = 4;
    cnd_ = a0 == v1;
    v0 = D_08C28DC4 - (-29244);
    if (cnd_) { goto L_08976584; }
    goto L_08975F54;
L_08975F54:;
    v1 = LD32(v0-29244);
    s5 = 2;
    cnd_ = v1 == s5;
    s1 = D_08C29328 - (-27864);
    if (cnd_) { goto L_08976568; }
    goto L_08975F64;
L_08975F64:;
    v1 = LD32(s1-27864);
    v0 = 5;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08976530; }
    goto L_08975F74;
L_08975F74:;
    v0 = func_08978770();
    goto L_08975F7C;
L_08975F7C:;
    s0 = sp + 256;
    a1 = D_08ADC284 - (-15740);
    a1 = a1 - 15740;
    t0 = v0 + 0;
    a2 = 256;
    a3 = 1;
    a0 = s0 + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08975F9C;
L_08975F9C:;
    a0 = s0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08975FA4;
L_08975FA4:;
    v1 = LD32(s1-27864);
    cnd_ = v1 == s4;
    s2 = v0 + 0;
    if (cnd_) { goto L_08976524; }
    goto L_08975FB0;
L_08975FB0:;
    cnd_ = v1 == s5;
    v0 = 0xaa1c0000u;
    if (cnd_) { goto L_08976528; }
    goto L_08975FB8;
L_08975FB8:;
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = 0xaa1c0000u; goto L_08976528; }
    goto L_08975FC4;
L_08975FC4:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s1-27864); goto L_08975FE4; }
    goto L_08975FCC;
L_08975FCC:;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    v0 = 0x44b00000u;
    cnd_ = v1 != 0;
    v0 = v0 | 0xc977;
    if (cnd_) { goto L_08975FF4; }
    goto L_08975FE0;
L_08975FE0:;
    v0 = LD32(s1-27864);
    goto L_08975FE4;
L_08975FE4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08975FF8; }
    goto L_08975FEC;
L_08975FEC:;
    v0 = 0x3d110000u;
    v0 = v0 | 0xf36;
    goto L_08975FF4;
L_08975FF4:;
    ST32(s3-28424, v0);
    goto L_08975FF8;
L_08975FF8:;
    v0 = func_08978770();
    goto L_08976000;
L_08976000:;
    a1 = D_08ADC28C - (-15732);
    a1 = a1 - 15732;
    t0 = v0 + 0;
    a0 = sp + 0;
    a2 = 256;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897601C;
L_0897601C:;
    a0 = sp + 0;
    v0 = func_088FB58C(a0, 0, 0);
    goto L_08976024;
L_08976024:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08976048; }
    goto L_08976030;
L_08976030:;
    a0 = D_08ADC2A8 - (-15704);
    a0 = a0 - 15704;
    a1 = 6;
    v0 = func_0883A868(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08976040;
L_08976040:;
    a0 = D_08ADC2C0 - (-15680);
    a0 = a0 - 15680;
    goto L_08976048;
L_08976048:;
    a1 = 6;
    v0 = func_0883A868(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08976050;
L_08976050:;
    a0 = LD32(s3-28424);
    s0 = D_08C290D4 - (-28460);
    ST32(s0-28460, 0);
    v0 = func_08834560(a0);
    goto L_08976060;
L_08976060:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089760B0; }
    goto L_08976068;
L_08976068:;
    a2 = D_08B25AC0 - (23232);
    v1 = LD32(a2+23232);
    t0 = a2 + 23232;
    a0 = LD32(t0+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    a1 = LD32(a1+16);
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    { u32 x_ = v0, y_ = a1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = a0 + v1;
    v0 = 1;
    ST32(t0+4, a0);
    ST8(s6-18060, v0);
    ST32(a2+23232, v1);
    a3 = hi;
    ST32(s0-28460, a3);
    goto L_089760B0;
L_089760B0:;
    a0 = 0x51ff0000u;
    a1 = s2 + 0;
    a0 = a0 | 0xc4a8;
    a2 = sp + 512;
    ST32(sp+512, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089760C8;
L_089760C8:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = 0x51ff0000u; goto L_08976508; }
    goto L_089760D0;
L_089760D0:;
    a0 = LD32(sp+512);
    goto L_089760D4;
L_089760D4:;
    s0 = LD_U8(s6-18060);
    a1 = 0x8f070000u;
    a1 = a1 | 0x6def;
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089760E8;
L_089760E8:;
    a0 = LD32(sp+512);
    s0 = s0 & v0;
    a1 = 0x684e0000u;
    a1 = a1 | 0x3f25;
    a2 = 0 + 0;
    s0 = 0 < s0;
    ST8(s6-18060, s0);
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08976108;
L_08976108:;
    a1 = 0xbd190000u;
    a0 = LD32(sp+512);
    v1 = D_08C290D0 - (-28464);
    a1 = a1 | 0xa56a;
    a2 = 0 + 0;
    ST8(v1-28464, v0);
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08976124;
L_08976124:;
    a1 = 0xc43c0000u;
    a0 = LD32(sp+512);
    a2 = 0xd3670000u;
    v1 = D_08C290D2 - (-28462);
    a1 = a1 | 0xce76;
    a2 = a2 | 0xe8da;
    ST8(v1-28462, v0);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08976144;
L_08976144:;
    a0 = v0 + 0;
    { u64 r_ = func_0883A8BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897614C;
L_0897614C:;
    a0 = LD32(sp+512);
    a1 = 0xc43c0000u;
    a2 = 0xd3670000u;
    v1 = D_08B1B968 - (-18072);
    a1 = a1 | 0xce77;
    a2 = a2 | 0xe8da;
    ST32(v1-18072, v0);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897616C;
L_0897616C:;
    a0 = v0 + 0;
    { u64 r_ = func_0883A8BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08976174;
L_08976174:;
    v1 = D_08B1B96C - (-18068);
    ST32(v1-18068, v0);
    v0 = func_08975E8C();
    goto L_08976180;
L_08976180:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(sp+512); goto L_089763CC; }
    goto L_08976188;
L_08976188:;
    a0 = LD32(sp+512);
    a1 = 0x42bd0000u;
    a1 = a1 | 0xccc6;
    a2 = (u32)-1;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_0897619C;
L_0897619C:;
    f0 = BITSF(v0);
    a0 = LD32(sp+512);
    a1 = 0xf2330000u;
    f1 = (float)(s32)FBITS(f0);
    a1 = a1 | 0xea02;
    a2 = (u32)-1;
    v0 = D_08C290FC - (-28420);
    ST32(v0-28420, FBITS(f1));
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_089761C0;
L_089761C0:;
    f0 = BITSF(v0);
    a0 = LD32(sp+512);
    a1 = 0xf3900000u;
    f1 = (float)(s32)FBITS(f0);
    a1 = a1 | 0xcefa;
    a2 = (u32)-1;
    v0 = D_08C29100 - (-28416);
    ST32(v0-28416, FBITS(f1));
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_089761E4;
L_089761E4:;
    f0 = BITSF(v0);
    a0 = LD32(sp+512);
    a1 = 0xf3900000u;
    f1 = (float)(s32)FBITS(f0);
    a1 = a1 | 0xcefb;
    a2 = (u32)-1;
    v0 = D_08C29104 - (-28412);
    ST32(v0-28412, FBITS(f1));
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08976208;
L_08976208:;
    f0 = BITSF(v0);
    a0 = LD32(sp+512);
    a1 = 0xe4750000u;
    f1 = (float)(s32)FBITS(f0);
    a1 = a1 | 0x151;
    a2 = (u32)-1;
    v0 = D_08C29108 - (-28408);
    ST32(v0-28408, FBITS(f1));
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_0897622C;
L_0897622C:;
    f0 = BITSF(v0);
    a0 = LD32(sp+512);
    a1 = 0xe4750000u;
    f1 = (float)(s32)FBITS(f0);
    a1 = a1 | 0x152;
    a2 = (u32)-1;
    v0 = D_08C2910C - (-28404);
    ST32(v0-28404, FBITS(f1));
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08976250;
L_08976250:;
    f0 = BITSF(v0);
    a0 = LD32(sp+512);
    a1 = 0xe4750000u;
    f1 = (float)(s32)FBITS(f0);
    a1 = a1 | 0x150;
    a2 = (u32)-1;
    v0 = D_08C29110 - (-28400);
    ST32(v0-28400, FBITS(f1));
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08976274;
L_08976274:;
    f0 = BITSF(v0);
    a0 = LD32(sp+512);
    a1 = 0xe4750000u;
    f1 = (float)(s32)FBITS(f0);
    a1 = a1 | 0x141;
    a2 = (u32)-1;
    v0 = D_08C29114 - (-28396);
    ST32(v0-28396, FBITS(f1));
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08976298;
L_08976298:;
    f0 = BITSF(v0);
    a0 = LD32(sp+512);
    a1 = 0xed910000u;
    f1 = (float)(s32)FBITS(f0);
    a1 = a1 | 0xd395;
    a2 = (u32)-1;
    v0 = D_08C29118 - (-28392);
    ST32(v0-28392, FBITS(f1));
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_089762BC;
L_089762BC:;
    f0 = BITSF(v0);
    a0 = LD32(sp+512);
    a1 = 0x4fcf0000u;
    f1 = (float)(s32)FBITS(f0);
    a1 = a1 | 0x52eb;
    a2 = 0 + 0;
    v0 = D_08C2911C - (-28388);
    ST32(v0-28388, FBITS(f1));
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089762E0;
L_089762E0:;
    a1 = 0x21530000u;
    a0 = LD32(sp+512);
    v1 = D_08C29120 - (-28384);
    a1 = a1 | 0x6e51;
    a2 = 0 + 0;
    ST8(v1-28384, v0);
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089762FC;
L_089762FC:;
    a1 = 0x89650000u;
    a0 = LD32(sp+512);
    a2 = 0xff000000u;
    a2 = a2 | 0xdfdf;
    a1 = a1 | 0xad39;
    v1 = D_08C29121 - (-28383);
    ST8(v1-28383, v0);
    { u64 r_ = func_0896CFC8(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897631C;
L_0897631C:;
    v1 = D_08C29124 - (-28380);
    ST32(v1-28380, v0);
    v0 = D_08B160D9 - (24793);
    ST8(v0+24793, 0);
    func_088CF2F8(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08976330;
L_08976330:;
    func_08976720();
    goto L_08976338;
L_08976338:;
    a0 = fp + 0;
    a1 = s7 + 0;
    func_08976AF0(a0, a1);
    goto L_08976344;
L_08976344:;
    { u64 r_ = func_088CF370(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897634C;
L_0897634C:;
    func_088CF2F8(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08976354;
L_08976354:;
    func_08976720();
    goto L_0897635C;
L_0897635C:;
    a0 = fp + 0;
    a1 = s7 + 0;
    func_08976AF0(a0, a1);
    goto L_08976368;
L_08976368:;
    { u64 r_ = func_088CF370(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08976370;
L_08976370:;
    func_088CF2F8(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08976378;
L_08976378:;
    func_08976720();
    goto L_08976380;
L_08976380:;
    a1 = s7 + 0;
    a0 = fp + 0;
    func_08976AF0(a0, a1);
    goto L_0897638C;
L_0897638C:;
    { u64 r_ = func_088CF370(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08976394;
L_08976394:;
    a0 = 6;
    func_08839ECC(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_0897639C;
L_0897639C:;
    sp = sp + 576;
    return;
L_089763CC:;
    a1 = 0x19fc0000u;
    a2 = 0 + 0;
    a1 = a1 | 0x6910;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089763DC;
L_089763DC:;
    s1 = D_08C290B0 - (-28496);
    a0 = v0 + 0;
    { u64 r_ = func_0883A8BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089763E8;
L_089763E8:;
    f12 = BITSF(LD32(s1-28496));
    a0 = LD32(sp+512);
    a1 = 0x78ea0000u;
    s0 = s1 - 28496;
    v1 = D_08B1B970 - (-18064);
    a1 = a1 | 0x3707;
    ST32(v1-18064, v0);
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08976408;
L_08976408:;
    a1 = 0x78ea0000u;
    f12 = BITSF(LD32(s0+4));
    a0 = LD32(sp+512);
    s2 = D_08C290D8 - (-28456);
    a1 = a1 | 0xab66;
    ST32(s2-28456, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08976424;
L_08976424:;
    s3 = s2 - 28456;
    f2 = BITSF(LD32(s1-28496));
    f1 = BITSF(LD32(s0+8));
    a0 = LD32(sp+512);
    ST32(s3+4, FBITS(f0));
    f3 = f1 - f2;
    a1 = 0xa44b0000u;
    a1 = a1 | 0x3afb;
    v0 = FBITS(f3);
    v0 = (v0 >> 0) & 0x7fffffff;
    f12 = BITSF(v0);
    s1 = D_08C290C0 - (-28480);
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08976458;
L_08976458:;
    f3 = BITSF(LD32(s0+4));
    f1 = BITSF(LD32(s0+12));
    f2 = BITSF(LD32(s2-28456));
    a0 = LD32(sp+512);
    f4 = f1 - f3;
    f2 = f2 + f0;
    a1 = 0xcb4d0000u;
    a1 = a1 | 0x2a92;
    v1 = FBITS(f4);
    ST32(s3+8, FBITS(f2));
    v1 = (v1 >> 0) & 0x7fffffff;
    f12 = BITSF(v1);
    s0 = D_08C290E8 - (-28440);
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08976490;
L_08976490:;
    f1 = BITSF(LD32(s3+4));
    f12 = BITSF(LD32(s1-28480));
    a0 = LD32(sp+512);
    f1 = f1 + f0;
    a1 = 0x78e50000u;
    s1 = s1 - 28480;
    a1 = a1 | 0x1c8e;
    ST32(s3+12, FBITS(f1));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089764B4;
L_089764B4:;
    f12 = BITSF(LD32(s1+4));
    a0 = LD32(sp+512);
    a1 = 0x78e50000u;
    a1 = a1 | 0x1c8f;
    ST32(s0-28440, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089764CC;
L_089764CC:;
    s0 = s0 - 28440;
    f12 = BITSF(LD32(s1+8));
    a0 = LD32(sp+512);
    ST32(s0+4, FBITS(f0));
    a1 = 0x78e40000u;
    a1 = a1 | 0xffbc;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089764E8;
L_089764E8:;
    ST32(s0+8, FBITS(f0));
    a1 = 0x78e40000u;
    a1 = a1 | 0xffbd;
    f12 = BITSF(LD32(s1+12));
    a0 = LD32(sp+512);
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08976500;
L_08976500:;
    ST32(s0+12, FBITS(f0));
    goto L_08976188;
L_08976508:;
    a1 = 0xa4fb0000u;
    a0 = a0 | 0xc4a8;
    a1 = a1 | 0xebc6;
    a2 = sp + 512;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897651C;
L_0897651C:;
    a0 = LD32(sp+512);
    goto L_089760D4;
L_08976524:;
    v0 = 0xaa1c0000u;
    goto L_08976528;
L_08976528:;
    v0 = v0 | 0x2066;
    goto L_08975FF4;
L_08976530:;
    v0 = func_08978770();
    goto L_08976538;
L_08976538:;
    s0 = sp + 256;
    a1 = D_08ADC2D8 - (-15656);
    a1 = a1 - 15656;
    t0 = v0 + 0;
    a2 = 256;
    a3 = 1;
    a0 = s0 + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08976558;
L_08976558:;
    a0 = s0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08976560;
L_08976560:;
    s2 = v0 + 0;
    goto L_08975FEC;
L_08976568:;
    v0 = 0x91df0000u;
    s2 = 0x91070000u;
    v0 = v0 | 0xe06b;
    s2 = s2 | 0x89a5;
    ST32(s3-28424, v0);
    ST8(s6-18060, 0);
    goto L_08975FF8;
L_08976584:;
    v0 = D_08B1B8F8 - (-18184);
    v1 = LD_U8(v0-18184);
    cnd_ = v1 == 0;
    ST8(a1-28463, v1);
    if (cnd_) { goto L_089765C0; }
    goto L_08976594;
L_08976594:;
    a1 = D_08ADC2DC - (-15652);
    s2 = 0xb5ec0000u;
    a1 = a1 - 15652;
    a0 = sp + 0;
    a2 = 256;
    a3 = 1;
    s2 = s2 | 0x8e12;
    goto L_089765B0;
L_089765B0:;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089765B8;
L_089765B8:;
    goto L_0897601C;
L_089765C0:;
    a1 = D_08ADC300 - (-15616);
    s2 = 0xa4fb0000u;
    a1 = a1 - 15616;
    a0 = sp + 0;
    a2 = 256;
    a3 = 1;
    s2 = s2 | 0xebc6;
    goto L_089765B0;
L_089765E0:;
    a1 = D_08ADC324 - (-15580);
    s2 = 0xada90000u;
    a1 = a1 - 15580;
    a0 = sp + 0;
    a2 = 256;
    a3 = 1;
    s2 = s2 | 0xae3b;
    goto L_089765B0;
}

/* 08976600 */
void func_08976600(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0, f13 = 0, f14 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08976600:;
    sp = sp - 32;
    v0 = func_0883BE08(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08976610;
L_08976610:;
    v1 = D_08C2912C - (-28372);
    a0 = LD32(v1-28372);
    v0 = v0 - a0;
    a0 = D_08ADC34C - (-15540);
    a1 = v0 + 0;
    a0 = a0 - 15540;
    { u64 r_ = func_088FB130(a0, a1, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897662C;
L_0897662C:;
    a0 = 0 + 0;
    func_08904228(a0);
    goto L_08976634;
L_08976634:;
    v0 = D_08C290D1 - (-28463);
    f12 = BITSF(0);
    a0 = LD_U8(v0-28463);
    a2 = D_08B2BFA8 - (-16472);
    v1 = 1;
    v0 = D_08B160D9 - (24793);
    a1 = a2 - 16472;
    f13 = f12;
    f14 = f12;
    cnd_ = a0 == 0;
    ST8(v0+24793, v1);
    if (cnd_) { goto L_0897666C; }
    goto L_08976660;
L_08976660:;
    goto L_08976664;
L_08976664:;
    sp = sp + 32;
    return;
L_0897666C:;
    f2 = BITSF(LD32(a2-16472));
    f3 = BITSF(LD32(a1+12));
    f0 = BITSF(LD32(a1+4));
    f1 = BITSF(LD32(a1+8));
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    ST32(sp+12, FBITS(f3));
    func_088CADC8(f12, f13, f14);
    goto L_08976690;
L_08976690:;
    func_088CF2F8(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08976698;
L_08976698:;
    { u64 r_ = func_088CF370(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089766A0;
L_089766A0:;
    func_088CF2F8(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089766A8;
L_089766A8:;
    { u64 r_ = func_088CF370(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089766B0;
L_089766B0:;
    func_088CF2F8(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089766B8;
L_089766B8:;
    { u64 r_ = func_088CF370(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089766C0;
L_089766C0:;
    a0 = sp + 0;
    func_088CADA0(a0);
    goto L_089766C8;
L_089766C8:;
    goto L_08976664;
}

/* 089766D0 */
void func_089766D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089766D0:;
    sp = sp - 16;
    a0 = a0 & 0xff;
    s0 = a1 + 0;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08976710; }
    goto L_089766E8;
L_089766E8:;
    func_088CF2F8(a1, a2, a3, t0, t1, t2, t3, f13, f14, f15, f16, f17, f18, f19);
    goto L_089766F0;
L_089766F0:;
    a0 = s0 + 0;
    func_08976CD0(a0);
    goto L_089766F8;
L_089766F8:;
    { u64 r_ = func_088CF370(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08976700;
L_08976700:;
    sp = sp + 16;
    return;
L_08976710:;
    func_08976AB0(a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08976718;
L_08976718:;
    goto L_089766E8;
}

/* 08976720 */
void func_08976720(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08976720:;
    sp = sp - 64;
    v0 = D_08B306F0 - (1776);
    v1 = D_08B306EC - (1772);
    s5 = D_08B2C12C - (-16084);
    s4 = D_08AEE320 - (-7392);
    s3 = D_08B1B96C - (-18068);
    s2 = (u32)-1;
    s0 = s5 - 16084;
    a0 = s0 + 0;
    f1 = BITSF(LD32(v0+1776));
    f0 = BITSF(LD32(v1+1772));
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    ST32(sp, 0);
    f3 = (float)(s32)FBITS(f1);
    f2 = (float)(s32)FBITS(f0);
    ST32(sp+4, 0);
    f21 = BITSF(LD32(v1+64));
    f20 = BITSF(LD32(v1+60));
    f12 = BITSF(LD32(sp));
    f14 = BITSF(LD32(s4-7392));
    ST32(s0+64, s2);
    f21 = f21 * f2;
    f20 = f20 * f3;
    ST32(s0+84, 0);
    f13 = f12;
    f15 = f14;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_089767B4;
L_089767B4:;
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    f14 = f20;
    f15 = f21;
    a0 = s0 + 0;
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_089767CC;
L_089767CC:;
    v0 = 0xff000000u;
    ST32(s0+64, v0);
    a0 = s0 + 0;
    a1 = 1;
    ST32(s0+80, s2);
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089767E4;
L_089767E4:;
    v0 = func_08901790();
    goto L_089767EC;
L_089767EC:;
    s1 = LD32(s3-18068);
    cnd_ = s1 == s2;
    v0 = D_08AEE324 - (-7388);
    if (cnd_) { goto L_08976A70; }
    goto L_089767F8;
L_089767F8:;
    f20 = BITSF(LD32(v0-7388));
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    f14 = f20;
    f15 = f20;
    a0 = s0 + 0;
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_08976814;
L_08976814:;
    v0 = D_08B1B968 - (-18072);
    v1 = LD32(v0-18072);
    ST32(s0+64, s2);
    a1 = 1;
    a0 = s0 + 0;
    ST32(s0+80, v1);
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08976830;
L_08976830:;
    v0 = func_08901790();
    goto L_08976838;
L_08976838:;
    v0 = D_08AEE328 - (-7384);
    f0 = BITSF(LD32(v0-7384));
    f13 = BITSF(LD32(sp+4));
    a0 = s0 + 0;
    f14 = f20;
    f12 = f0;
    f15 = f20;
    ST32(sp, FBITS(f0));
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_0897685C;
L_0897685C:;
    a0 = s0 + 0;
    v0 = LD32(s3-18068);
    a1 = 1;
    ST32(s0+64, s2);
    goto L_0897686C;
L_0897686C:;
    ST32(s0+80, v0);
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08976874;
L_08976874:;
    v0 = func_08901790();
    goto L_0897687C;
L_0897687C:;
    a0 = D_08ADC36C - (-15508);
    a0 = a0 - 15508;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08976888;
L_08976888:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08976890;
L_08976890:;
    v0 = D_08B1B974 - (-18060);
    v1 = LD_U8(v0-18060);
    cnd_ = v1 == 0;
    v0 = D_08C290D1 - (-28463);
    if (cnd_) { goto L_08976A30; }
    goto L_089768A0;
L_089768A0:;
    v0 = D_08C290D0 - (-28464);
    a0 = LD_U8(v0-28464);
    v1 = D_08C29080 - (-28544);
    cnd_ = a0 != 0;
    s1 = v1 - 28544;
    if (cnd_) { goto L_089768BC; }
    goto L_089768B4;
L_089768B4:;
    v0 = D_08C29090 - (-28528);
    s1 = v0 - 28528;
    goto L_089768BC;
L_089768BC:;
    v1 = D_08C290F8 - (-28424);
    v0 = D_08C290D4 - (-28460);
    a1 = LD32(v1-28424);
    a0 = LD32(v0-28460);
    v0 = func_0897A064(a0, a1);
    goto L_089768D0;
L_089768D0:;
    v1 = D_08C29124 - (-28380);
    f12 = BITSF(0);
    a1 = LD32(v1-28380);
    v1 = D_08AEE330 - (-7376);
    f15 = BITSF(LD32(s4-7392));
    f14 = BITSF(LD32(v1-7376));
    a0 = s1 + 0;
    a3 = v0 + 0;
    f13 = f12;
    a2 = 130;
    goto L_089768F8;
L_089768F8:;
    { rv_t r_ = func_088CBE34(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08976900;
L_08976900:;
    v0 = D_08C290D2 - (-28462);
    goto L_08976904;
L_08976904:;
    v1 = LD_U8(v0-28462);
    cnd_ = v1 != 0;
    a0 = 397;
    if (cnd_) { goto L_089769F4; }
    goto L_08976910;
L_08976910:;
    s1 = D_08B1B970 - (-18064);
    goto L_08976914;
L_08976914:;
    v0 = LD32(s1-18064);
    s2 = (u32)-1;
    cnd_ = v0 == s2;
    v1 = D_08C290D8 - (-28456);
    if (cnd_) { goto L_089769C8; }
    goto L_08976924;
L_08976924:;
    v0 = v1 - 28456;
    f12 = BITSF(LD32(v1-28456));
    f0 = BITSF(LD32(v0+8));
    f13 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+12));
    f2 = f0 - f12;
    s0 = s5 - 16084;
    f3 = f1 - f13;
    v0 = FBITS(f2);
    v0 = (v0 >> 0) & 0x7fffffff;
    f14 = BITSF(v0);
    v0 = FBITS(f3);
    v0 = (v0 >> 0) & 0x7fffffff;
    f15 = BITSF(v0);
    a0 = s0 + 0;
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_08976964;
L_08976964:;
    v1 = D_08C290E8 - (-28440);
    v0 = v1 - 28440;
    f2 = BITSF(LD32(v1-28440));
    f0 = BITSF(LD32(v0+8));
    f13 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+12));
    f3 = f0 - f2;
    f12 = f2;
    f4 = f1 - f13;
    v0 = FBITS(f3);
    v0 = (v0 >> 0) & 0x7fffffff;
    f14 = BITSF(v0);
    v0 = FBITS(f4);
    v0 = (v0 >> 0) & 0x7fffffff;
    f15 = BITSF(v0);
    a0 = s0 + 0;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_089769A8;
L_089769A8:;
    v0 = LD32(s1-18064);
    ST32(s0+64, s2);
    a0 = s0 + 0;
    a1 = 1;
    ST32(s0+80, v0);
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089769C0;
L_089769C0:;
    v0 = func_08901790();
    goto L_089769C8;
L_089769C8:;
    sp = sp + 64;
    return;
L_089769F4:;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_089769FC;
L_089769FC:;
    f12 = BITSF(0);
    v1 = D_08AEE334 - (-7372);
    f14 = BITSF(LD32(s4-7392));
    f15 = BITSF(LD32(v1-7372));
    a0 = D_08C290A0 - (-28512);
    a0 = a0 - 28512;
    a3 = v0 + 0;
    f13 = f12;
    a1 = (u32)-1;
    a2 = 130;
    { rv_t r_ = func_088CBE34(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08976A28;
L_08976A28:;
    s1 = D_08B1B970 - (-18064);
    goto L_08976914;
L_08976A30:;
    v1 = LD_U8(v0-28463);
    cnd_ = v1 == 0;
    v0 = D_08C290D2 - (-28462);
    if (cnd_) { goto L_08976904; }
    goto L_08976A3C;
L_08976A3C:;
    a0 = 369;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08976A48;
L_08976A48:;
    f14 = BITSF(LD32(s4-7392));
    f12 = BITSF(0);
    a0 = D_08C29070 - (-28560);
    a0 = a0 - 28560;
    a3 = v0 + 0;
    f13 = f12;
    f15 = f14;
    a1 = (u32)-1;
    a2 = 164;
    goto L_089768F8;
L_08976A70:;
    s2 = D_08B1B968 - (-18072);
    v0 = LD32(s2-18072);
    cnd_ = v0 == s1;
    v0 = D_08AEE32C - (-7380);
    if (cnd_) { goto L_0897687C; }
    goto L_08976A80;
L_08976A80:;
    v1 = D_08AEE324 - (-7388);
    f14 = BITSF(LD32(v0-7380));
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    f15 = BITSF(LD32(v1-7388));
    a0 = s0 + 0;
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_08976A9C;
L_08976A9C:;
    v0 = LD32(s2-18072);
    ST32(s0+64, s1);
    a0 = s0 + 0;
    a1 = 1;
    goto L_0897686C;
}

/* 08976AB0 */
void func_08976AB0(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08976AB0:;
    sp = sp - 16;
    v0 = D_08C290D1 - (-28463);
    a1 = D_08C29044 - (-28604);
    v1 = LD_U8(v0-28463);
    cnd_ = v1 == 0;
    a0 = a1 - 28604;
    if (cnd_) { goto L_08976AD8; }
    goto L_08976ACC;
L_08976ACC:;
    goto L_08976AD0;
L_08976AD0:;
    sp = sp + 16;
    return;
L_08976AD8:;
    v0 = LD32(a1-28604);
    v1 = LD32(v0+8);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08976AE8;
L_08976AE8:;
    goto L_08976AD0;
}

/* 08976AF0 */
void func_08976AF0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08976AF0:;
    sp = sp - 64;
    s0 = a1 + 0;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08976B1C;
L_08976B1C:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    s2 = v0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08976B2C;
L_08976B2C:;
    s1 = v0 + 0;
    v0 = D_08C29121 - (-28383);
    v1 = LD_U8(v0-28383);
    cnd_ = v1 == 0;
    v0 = D_08ADC394 - (-15468);
    if (cnd_) { goto L_08976CC8; }
    goto L_08976B40;
L_08976B40:;
    v0 = D_08ADC3C0 - (-15424);
    a0 = LD32(v0-15424);
    goto L_08976B48;
L_08976B48:;
    s3 = D_08AEE338 - (-7368);
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08976B50;
L_08976B50:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08976B5C;
L_08976B5C:;
    f20 = BITSF(LD32(s3-7368));
    a0 = s0 + 0;
    s4 = D_08C29124 - (-28380);
    f12 = f20;
    func_088CD5EC(a0, f12);
    goto L_08976B70;
L_08976B70:;
    v0 = D_08C29120 - (-28384);
    v1 = LD_U8(v0-28384);
    f14 = f20;
    a0 = s2 + 0;
    a1 = sp + 0;
    f15 = f20;
    a3 = 260;
    cnd_ = v1 == 0;
    a2 = s2 + 0;
    if (cnd_) { goto L_08976C9C; }
    goto L_08976B94;
L_08976B94:;
    v0 = D_08B306EC - (1772);
    f4 = BITSF(LD32(v0+1772));
    v1 = D_08C29108 - (-28408);
    f1 = BITSF(LD32(v1-28408));
    f0 = (float)(s32)FBITS(f4);
    v0 = D_08B306F0 - (1776);
    f2 = BITSF(LD32(v0+1776));
    ST32(sp, 0);
    f0 = f0 - f1;
    f3 = (float)(s32)FBITS(f2);
    f12 = BITSF(LD32(sp));
    a2 = LD32(s4-28380);
    f0 = f1 + f0;
    f13 = f12;
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f3));
    ST32(sp+12, FBITS(f0));
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08976BDC;
L_08976BDC:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08976BF8; }
    goto L_08976BE4;
L_08976BE4:;
    v0 = LD_U16(s1);
    a0 = D_08ADC36C - (-15508);
    cnd_ = v0 != 0;
    a0 = a0 - 15508;
    if (cnd_) { goto L_08976C18; }
    goto L_08976BF4;
L_08976BF4:;
    goto L_08976BF8;
L_08976BF8:;
    sp = sp + 64;
    return;
L_08976C18:;
    f20 = BITSF(LD32(s3-7368));
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08976C20;
L_08976C20:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08976C2C;
L_08976C2C:;
    a0 = s0 + 0;
    f12 = f20;
    func_088CD5EC(a0, f12);
    goto L_08976C38;
L_08976C38:;
    v0 = D_08C2910C - (-28404);
    v1 = D_08C29110 - (-28400);
    f3 = BITSF(LD32(v0-28404));
    f2 = BITSF(LD32(v1-28400));
    v0 = D_08C29114 - (-28396);
    v1 = D_08C29118 - (-28392);
    f1 = BITSF(LD32(v0-28396));
    f0 = BITSF(LD32(v1-28392));
    f12 = BITSF(0);
    f1 = f3 + f1;
    f0 = f2 + f0;
    a2 = LD32(s4-28380);
    f14 = f20;
    a0 = s1 + 0;
    a1 = sp + 0;
    f13 = f12;
    f15 = f20;
    a3 = 384;
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f1));
    ST32(sp+12, FBITS(f0));
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08976C94;
L_08976C94:;
    goto L_08976BF8;
L_08976C9C:;
    v0 = D_08C29104 - (-28412);
    v1 = D_08C29108 - (-28408);
    s4 = D_08C29124 - (-28380);
    f12 = BITSF(LD32(v0-28412));
    f13 = BITSF(LD32(v1-28408));
    a0 = LD32(s4-28380);
    f14 = f20;
    a1 = 2;
    { rv_t r_ = func_088CBBF4(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08976CC0;
L_08976CC0:;
    goto L_08976BDC;
L_08976CC8:;
    a0 = LD32(v0-15468);
    goto L_08976B48;
}

/* 08976CD0 */
void func_08976CD0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08976CD0:;
    sp = sp - 48;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08976CF4;
L_08976CF4:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08976D08; }
    goto L_08976CFC;
L_08976CFC:;
    v0 = LD_U16(v0);
    cnd_ = v0 != 0;
    a0 = D_08ADC36C - (-15508);
    if (cnd_) { goto L_08976D28; }
    goto L_08976D08;
L_08976D08:;
    goto L_08976D0C;
L_08976D0C:;
    sp = sp + 48;
    return;
L_08976D28:;
    a0 = a0 - 15508;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08976D30;
L_08976D30:;
    a0 = v0 + 0;
    s2 = D_08AEE33C - (-7364);
    s0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08976D40;
L_08976D40:;
    f21 = BITSF(LD32(s2-7364));
    a0 = s0 + 0;
    s0 = D_08B2C12C - (-16084);
    f12 = f21;
    func_088CD5EC(a0, f12);
    goto L_08976D54;
L_08976D54:;
    a1 = (u32)-1;
    v0 = D_08C2911C - (-28388);
    a0 = s1 + 0;
    f12 = f21;
    f20 = BITSF(LD32(v0-28388));
    f0 = func_088CB674(a0, a1, f12);
    goto L_08976D6C;
L_08976D6C:;
    v1 = D_08AEE340 - (-7360);
    v0 = D_08B306F0 - (1776);
    f3 = BITSF(LD32(v0+1776));
    f1 = BITSF(LD32(v1-7360));
    v0 = D_08B306EC - (1772);
    f2 = (float)(s32)FBITS(f3);
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0+1772));
    v0 = D_08AEE344 - (-7356);
    s0 = s0 - 16084;
    f2 = f2 - f0;
    f3 = (float)(s32)FBITS(f1);
    f1 = BITSF(LD32(v0-7356));
    f14 = f0;
    f13 = f20;
    f2 = f2 * f1;
    f3 = f3 - f20;
    f15 = f20;
    a0 = s0 + 0;
    f0 = f2 + f0;
    f3 = f20 + f3;
    f12 = f2;
    ST32(sp, FBITS(f2));
    ST32(sp+8, FBITS(f0));
    ST32(sp+12, FBITS(f3));
    ST32(sp+4, FBITS(f20));
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_08976DD8;
L_08976DD8:;
    v0 = (u32)-1;
    v1 = 0xff000000u;
    ST32(s0+80, v0);
    a0 = s0 + 0;
    a1 = 1;
    ST32(s0+64, v1);
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08976DF4;
L_08976DF4:;
    v0 = func_08901790();
    goto L_08976DFC;
L_08976DFC:;
    f3 = BITSF(LD32(sp+12));
    f1 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    a0 = D_08B1B978 - (-18056);
    a1 = D_08B1B97C - (-18052);
    v0 = LD32(a0-18056);
    f3 = f3 - f21;
    f1 = f1 + f21;
    f2 = f2 + f21;
    f0 = f0 - f21;
    v1 = LD32(a1-18052);
    ST32(sp, FBITS(f1));
    v0 = v0 + v1;
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f0));
    ST32(sp+12, FBITS(f3));
    cnd_ = (s32)v1 <= 0;
    ST32(a0-18056, v0);
    if (cnd_) { goto L_08976EA0; }
    goto L_08976E48;
L_08976E48:;
    v0 = (s32)v0 < 255;
    cnd_ = v0 != 0;
    a2 = LD32(a0-18056);
    if (cnd_) { goto L_08976E68; }
    goto L_08976E54;
L_08976E54:;
    v0 = 0 - v1;
    v1 = 255;
    ST32(a1-18052, v0);
    goto L_08976E60;
L_08976E60:;
    ST32(a0-18056, v1);
    a2 = LD32(a0-18056);
    goto L_08976E68;
L_08976E68:;
    f14 = BITSF(LD32(s2-7364));
    f12 = BITSF(0);
    v0 = 0xff0000u;
    a2 = a2 << 24;
    v0 = v0 | 0xffff;
    a2 = a2 | v0;
    a0 = s1 + 0;
    a1 = sp + 0;
    f13 = f12;
    f15 = f14;
    a3 = 260;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08976E98;
L_08976E98:;
    goto L_08976D0C;
L_08976EA0:;
    v0 = (s32)v0 < 129;
    cnd_ = v0 == 0;
    a2 = LD32(a0-18056);
    if (cnd_) { goto L_08976E68; }
    goto L_08976EAC;
L_08976EAC:;
    v0 = 0 - v1;
    ST32(a1-18052, v0);
    v1 = 128;
    goto L_08976E60;
}

/* 08976EBC */
rv_t func_08976EBC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08976EBC:;
    sp = sp - 48;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    v0 = v0 < 0x1u;
    s1 = a1 < 0x1u;
    s0 = s1 & v0;
    s2 = a0 + 0;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08977150; }
    goto L_08976EF0;
L_08976EF0:;
    v0 = D_08AEE348 - (-7352);
    f1 = BITSF(LD32(v0-7352));
    v0 = 47;
    f0 = BITSF(v0);
    v0 = 255;
    t1 = D_08C28FFC - (-28676);
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 179;
    t2 = D_08C2900C - (-28660);
    f20 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 108;
    f5 = f5 * f1;
    f4 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f20 = f20 * f1;
    f3 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = D_08C28FEC - (-28692);
    v1 = v0 - 28692;
    f2 = (float)(s32)FBITS(f0);
    f4 = f4 * f1;
    f3 = f3 * f1;
    a3 = t1 - 28676;
    f2 = f2 * f1;
    t0 = t2 - 28660;
    ST32(v1+4, FBITS(f3));
    a0 = D_08C29044 - (-28604);
    a0 = a0 - 28604;
    ST32(v0-28692, FBITS(f2));
    v0 = D_08AEE34C - (-7348);
    a1 = 10;
    f0 = BITSF(LD32(v0-7348));
    v0 = D_08AEE350 - (-7344);
    ST32(v1+12, FBITS(f20));
    a2 = sp + 0;
    ST32(a3+4, FBITS(f5));
    ST32(a3+12, FBITS(f20));
    ST32(t1-28676, FBITS(f4));
    ST32(t2-28660, FBITS(f20));
    ST32(t0+12, FBITS(f20));
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(v0-7344));
    ST32(sp+4, FBITS(f0));
    ST32(v1+8, FBITS(f4));
    ST32(t0+4, FBITS(f20));
    ST32(a3+8, FBITS(f5));
    ST32(t0+8, FBITS(f20));
    func_08975684(a0, a1, a2);
    goto L_08976FBC;
L_08976FBC:;
    v0 = D_08AEE368 - (-7320);
    f2 = BITSF(LD32(v0-7320));
    v0 = D_08AEE354 - (-7340);
    f0 = BITSF(LD32(v0-7340));
    a0 = D_08C29070 - (-28560);
    v0 = D_08AEE360 - (-7328);
    ST32(a0-28560, FBITS(f0));
    v1 = D_08AEE370 - (-7312);
    t0 = D_08C29080 - (-28544);
    f0 = BITSF(LD32(v0-7328));
    f1 = BITSF(LD32(v1-7312));
    v0 = D_08AEE364 - (-7324);
    v1 = a0 - 28560;
    ST32(v1+12, FBITS(f0));
    t1 = D_08C29090 - (-28528);
    t3 = D_08C290A0 - (-28512);
    f0 = BITSF(LD32(v0-7324));
    v0 = D_08AEE374 - (-7308);
    a1 = t1 - 28528;
    ST32(t0-28544, FBITS(f0));
    a2 = t3 - 28512;
    t4 = D_08C290B0 - (-28496);
    f0 = BITSF(LD32(v0-7308));
    v0 = D_08AEE37C - (-7300);
    ST32(a1+12, FBITS(f1));
    a3 = t0 - 28544;
    t2 = t4 - 28496;
    ST32(t1-28528, FBITS(f0));
    t5 = D_08C290C0 - (-28480);
    a0 = t5 - 28480;
    f0 = BITSF(LD32(v0-7300));
    v0 = D_08AEE388 - (-7288);
    ST32(t3-28512, FBITS(f0));
    f0 = BITSF(LD32(v0-7288));
    v0 = D_08AEE38C - (-7284);
    ST32(a2+12, FBITS(f0));
    f0 = BITSF(LD32(v0-7284));
    v0 = D_08AEE358 - (-7336);
    ST32(a3+12, FBITS(f1));
    ST32(t4-28496, FBITS(f0));
    f0 = BITSF(LD32(v0-7336));
    v0 = D_08AEE35C - (-7332);
    ST32(v1+4, FBITS(f0));
    f0 = BITSF(LD32(v0-7332));
    v0 = D_08AEE36C - (-7316);
    ST32(a1+4, FBITS(f2));
    ST32(v1+8, FBITS(f0));
    f0 = BITSF(LD32(v0-7316));
    v0 = D_08AEE378 - (-7304);
    ST32(a3+8, FBITS(f0));
    f0 = BITSF(LD32(v0-7304));
    v0 = D_08AEE380 - (-7296);
    ST32(a1+8, FBITS(f0));
    f0 = BITSF(LD32(v0-7296));
    v0 = D_08AEE384 - (-7292);
    ST32(a2+4, FBITS(f0));
    f0 = BITSF(LD32(v0-7292));
    v0 = D_08AEE390 - (-7280);
    ST32(a3+4, FBITS(f2));
    ST32(a2+8, FBITS(f0));
    f0 = BITSF(LD32(v0-7280));
    v0 = D_08AEE398 - (-7272);
    ST32(t2+4, FBITS(f0));
    f0 = BITSF(LD32(v0-7272));
    v0 = D_08AEE39C - (-7268);
    ST32(t2+12, FBITS(f0));
    f0 = BITSF(LD32(v0-7268));
    v0 = D_08AEE3A4 - (-7260);
    ST32(t5-28480, FBITS(f0));
    f0 = BITSF(LD32(v0-7260));
    v0 = D_08AEE394 - (-7276);
    ST32(a0+12, FBITS(f0));
    f0 = BITSF(LD32(v0-7276));
    v0 = D_08AEE3A0 - (-7264);
    ST32(t2+8, FBITS(f0));
    f0 = BITSF(LD32(v0-7264));
    ST32(a0+8, FBITS(f20));
    cnd_ = s0 == 0;
    ST32(a0+4, FBITS(f0));
    if (cnd_) { goto L_08977150; }
    goto L_089770F8;
L_089770F8:;
    v1 = t5 - 28480;
    v0 = t2 + 0;
    a2 = LD32(t4-28496);
    a3 = LD32(t2+12);
    t0 = LD32(t5-28480);
    t1 = LD32(v1+12);
    t3 = LD32(v0+8);
    t4 = LD32(v1+4);
    t5 = LD32(v1+8);
    t2 = LD32(t2+4);
    a0 = D_08C290D8 - (-28456);
    a1 = D_08C290E8 - (-28440);
    v0 = a0 - 28456;
    v1 = a1 - 28440;
    ST32(a0-28456, a2);
    ST32(v0+12, a3);
    ST32(a1-28440, t0);
    ST32(v1+12, t1);
    ST32(v0+4, t2);
    ST32(v0+8, t3);
    ST32(v1+4, t4);
    ST32(v1+8, t5);
    goto L_08977150;
L_08977150:;
    v0 = s2 < 0x1u;
    v0 = s1 & v0;
    cnd_ = v0 != 0;
    v1 = D_08C29044 - (-28604);
    if (cnd_) { goto L_0897717C; }
    goto L_08977160;
L_08977160:;
    goto L_08977164;
L_08977164:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0897717C:;
    v0 = D_08AF9A08 - (-26104);
    v0 = v0 - 26104;
    a0 = v1 - 28604;
    ST32(v1-28604, v0);
    v0 = func_0889DB50(a0);
    goto L_08977190;
L_08977190:;
    goto L_08977164;
}

/* 08977198 */
rv_t func_08977198(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08977198:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08976EBC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089771AC;
L_089771AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089771B8 */
rv_t func_089771B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089771B8:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08976EBC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089771CC;
L_089771CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089771D8 */
u64 func_089771D8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_089771D8:;
    v1 = a1 << 2;
    v1 = v1 + a1;
    v0 = D_08B1B980 - (-18048);
    v0 = v0 - 18048;
    v1 = v1 << 2;
    a1 = a1 < 0x16u;
    v1 = v1 + v0;
    cnd_ = a1 == 0;
    v0 = 1;
    if (cnd_) { goto L_08977210; }
    goto L_089771FC;
L_089771FC:;
    cnd_ = a0 == v0;
    if (cnd_) { v0 = LD32(v1+4); goto L_08977208; }
    goto L_08977204;
L_08977204:;
    v0 = LD32(v1);
    goto L_08977208;
L_08977208:;
    v0 = 0 < v0;
    v0 = v0 & 0xff;
    goto L_08977210;
L_08977210:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08977218 */
u64 func_08977218(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08977218:;
    v1 = a1 << 2;
    v1 = v1 + a1;
    v0 = D_08B1B980 - (-18048);
    v0 = v0 - 18048;
    v1 = v1 << 2;
    v1 = v1 + v0;
    a1 = a1 < 0x16u;
    v1 = v1 + a0;
    cnd_ = a1 == 0;
    v0 = 1;
    if (cnd_) { goto L_08977244; }
    goto L_08977240;
L_08977240:;
    v0 = LD_U8(v1+12);
    goto L_08977244;
L_08977244:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0897724C */
u64 func_0897724C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897724C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a1 + 0;
    v0 = func_089773E0(a0);
    goto L_08977264;
L_08977264:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    { u64 r_ = func_089771D8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08977270;
L_08977270:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08977280 */
u64 func_08977280(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08977280:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a1 + 0;
    v0 = func_089773E0(a0);
    goto L_08977298;
L_08977298:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    { u64 r_ = func_08977218(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089772A4;
L_089772A4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089772B4 */
u32 func_089772B4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_089772B4:;
    v1 = a0 << 2;
    v1 = v1 + a0;
    v0 = D_08B1B980 - (-18048);
    v0 = v0 - 18048;
    v1 = v1 << 2;
    a0 = a0 < 0x16u;
    v1 = v1 + v0;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089772DC; }
    goto L_089772D8;
L_089772D8:;
    v0 = LD_U8(v1+16);
    goto L_089772DC;
L_089772DC:;
    return v0;
}

/* 089772E4 */
u32 func_089772E4(u32 a0)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089772E4:;
    sp = sp - 16;
    v0 = func_089773E0(a0);
    goto L_089772F4;
L_089772F4:;
    a0 = v0 + 0;
    v0 = func_089772B4(a0);
    goto L_089772FC;
L_089772FC:;
    sp = sp + 16;
    return v0;
}

/* 08977308 */
u32 func_08977308(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08977308:;
    v1 = a0 << 2;
    v1 = v1 + a0;
    v0 = D_08B1B980 - (-18048);
    v0 = v0 - 18048;
    v1 = v1 << 2;
    a0 = a0 < 0x16u;
    v1 = v1 + v0;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08977330; }
    goto L_0897732C;
L_0897732C:;
    v0 = LD32(v1);
    goto L_08977330;
L_08977330:;
    return v0;
}

/* 08977338 */
u32 func_08977338(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08977338:;
    v1 = a0 << 2;
    v1 = v1 + a0;
    v0 = D_08B1B980 - (-18048);
    v0 = v0 - 18048;
    v1 = v1 << 2;
    a0 = a0 < 0x16u;
    v1 = v1 + v0;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08977360; }
    goto L_0897735C;
L_0897735C:;
    v0 = LD32(v1+4);
    goto L_08977360;
L_08977360:;
    return v0;
}

/* 08977368 */
u32 func_08977368(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08977368:;
    v1 = a0 << 2;
    v1 = v1 + a0;
    v0 = D_08B1B980 - (-18048);
    v0 = v0 - 18048;
    v1 = v1 << 2;
    a0 = a0 < 0x16u;
    v1 = v1 + v0;
    cnd_ = a0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08977390; }
    goto L_0897738C;
L_0897738C:;
    v0 = LD32(v1+8);
    goto L_08977390;
L_08977390:;
    return v0;
}

/* 08977398 */
u32 func_08977398(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08977398:;
    sp = sp - 16;
    v0 = func_089773E0(a0);
    goto L_089773A8;
L_089773A8:;
    a0 = v0 << 2;
    a0 = a0 + v0;
    v1 = D_08B1B980 - (-18048);
    v1 = v1 - 18048;
    a0 = a0 << 2;
    v0 = v0 < 0x16u;
    a0 = a0 + v1;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089773D0; }
    goto L_089773CC;
L_089773CC:;
    v1 = LD32(a0+8);
    goto L_089773D0;
L_089773D0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 089773E0 */
u32 func_089773E0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089773E0:;
    sp = sp - 16;
    v0 = D_08B1B980 - (-18048);
    s2 = a0 + 0;
    s1 = 0 + 0;
    s0 = v0 - 18048;
    v0 = LD32(s0+4);
    goto L_08977408;
L_08977408:;
    a0 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08977470; }
    goto L_08977414;
L_08977414:;
    v0 = LD32(s0);
    a0 = s2 + 0;
    s0 = s0 + 20;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08977458; }
    goto L_08977428;
L_08977428:;
    s1 = s1 + 1;
    v0 = s1 < 0x16u;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+4); goto L_08977408; }
    goto L_08977438;
L_08977438:;
    v1 = 22;
    goto L_08977440;
L_08977440:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08977458:;
    { u64 r_ = func_08A89724(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08977460;
L_08977460:;
    cnd_ = v0 != 0;
    v1 = s1 + 0;
    if (cnd_) { goto L_08977428; }
    goto L_08977468;
L_08977468:;
    goto L_08977440;
L_08977470:;
    { u64 r_ = func_08A89724(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08977478;
L_08977478:;
    cnd_ = v0 != 0;
    v1 = s1 + 0;
    if (cnd_) { goto L_08977414; }
    goto L_08977480;
L_08977480:;
    goto L_08977440;
}

/* 08977488 */
rv_t func_08977488(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08977488:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C29130 - (-28368);
    t1 = D_08C29140 - (-28352);
    t2 = D_08C29150 - (-28336);
    a1 = a1 & a0;
    v1 = t0 - 28368;
    a2 = t1 - 28352;
    cnd_ = a1 == 0;
    a3 = t2 - 28336;
    if (cnd_) { goto L_08977540; }
    goto L_089774B8;
L_089774B8:;
    v0 = D_08AEE3A8 - (-7256);
    f4 = BITSF(LD32(v0-7256));
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
    ST32(t0-28368, FBITS(f2));
    ST32(t1-28352, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-28336, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08977540;
L_08977540:;
    return (rv_t){ v0, v1, f0 };
}

/* 08977548 */
rv_t func_08977548(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08977548:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08977488(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897755C;
L_0897755C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08977568 */
void func_08977568(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08977568:;
    sp = sp - 16;
    a1 = 0 + 0;
    s0 = a0 + 0;
    a2 = 29;
    a0 = a0 + 196;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08977588;
L_08977588:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 196;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08977598;
L_08977598:;
    sp = sp + 16;
    return;
}

/* 089775A8 */
void func_089775A8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_089775A8:;
    a3 = 1;
    a1 = 0 + 0;
    v1 = a0 + 0;
    goto L_089775B4;
L_089775B4:;
    a1 = a1 + 1;
    a2 = a1 < 0x16u;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089775CC; }
    goto L_089775C4;
L_089775C4:;
    v0 = LD32(v1);
    v0 = 0 < v0;
    goto L_089775CC;
L_089775CC:;
    a3 = v0 + 0;
    cnd_ = a2 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089775B4; }
    goto L_089775D8;
L_089775D8:;
    ST32(a0+180, v0);
    return;
}

/* 089775E0 */
rv_t func_089775E0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089775E0:;
    v0 = a1 << 2;
    sp = sp - 16;
    v1 = v0 + a0;
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    a2 = D_08C2933C - (-27844);
    if (cnd_) { goto L_08977614; }
    goto L_089775FC;
L_089775FC:;
    v0 = LD32(v1);
    a0 = a2 - 27844;
    v0 = v0 + 1;
    ST32(v1, v0);
    v1 = 1;
    ST8(a0+6, v1);
    goto L_08977614;
L_08977614:;
    a0 = a2 - 27844;
    { rv_t r_ = func_08977D14(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897761C;
L_0897761C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08977628 */
u64 func_08977628(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08977628:;
    v0 = D_08AF9A28 - (-26072);
    v0 = v0 - 26072;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 164;
    func_08977568(a0);
    goto L_0897764C;
L_0897764C:;
    v0 = s0 + 432;
    v1 = 19;
    a0 = (u32)-1;
    goto L_08977658;
L_08977658:;
    v1 = v1 - 1;
    ST8(v0, 0);
    cnd_ = v1 != a0;
    v0 = v0 + 44;
    if (cnd_) { goto L_08977658; }
    goto L_08977668;
L_08977668:;
    a0 = s0 + 0;
    { u64 r_ = func_089776BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08977670;
L_08977670:;
    ST8(s0+6, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08977684 */
rv_t func_08977684(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08977684:;
    v0 = D_08AF9A28 - (-26072);
    v0 = v0 - 26072;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08977694 */
rv_t func_08977694(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08977694:;
    v0 = D_08AF9A28 - (-26072);
    v0 = v0 - 26072;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089776B0;
L_089776B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089776BC */
u64 func_089776BC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089776BC:;
    sp = sp - 16;
    a1 = 0 + 0;
    a2 = 2060;
    s1 = 1;
    s0 = a0 + 0;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089776E0;
L_089776E0:;
    v1 = 2;
    ST16(s0+4, v1);
    a1 = D_08ADC5A0 - (-14944);
    a1 = a1 - 14944;
    a2 = 21;
    a3 = 1;
    a0 = s0 + 8;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08977700;
L_08977700:;
    v0 = 1;
    ST8(s0+56, v0);
    a0 = s0 + 0;
    ST32(s0+52, s1);
    func_08977764(a0);
    goto L_08977714;
L_08977714:;
    a0 = s0 + 0;
    func_08977784(a0);
    goto L_0897771C;
L_0897771C:;
    a0 = s0 + 0;
    func_08977808(a0);
    goto L_08977724;
L_08977724:;
    a0 = s0 + 0;
    func_0897782C(a0);
    goto L_0897772C;
L_0897772C:;
    a0 = s0 + 0;
    func_08977ED8(a0);
    goto L_08977734;
L_08977734:;
    a0 = s0 + 0;
    func_08977F80(a0);
    goto L_0897773C;
L_0897773C:;
    a0 = s0 + 0;
    { u64 r_ = func_08977878(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08977744;
L_08977744:;
    ST8(s0+6, s1);
    ST32(s0+1500, 0);
    ST32(s0+1504, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08977764 */
void func_08977764(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_08977764:;
    v1 = 1;
    v0 = 50;
    ST8(a0+6, v1);
    ST8(a0+60, v0);
    ST8(a0+61, 0);
    ST8(a0+63, 0);
    ST8(a0+62, v1);
    return;
}

/* 08977784 */
void func_08977784(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08977784:;
    v0 = D_08AEE3AC - (-7252);
    f0 = BITSF(LD32(v0-7252));
    v1 = 1;
    v0 = 1;
    ST8(a0+6, v0);
    ST32(a0+132, FBITS(f0));
    ST8(a0+138, v1);
    ST8(a0+80, 0);
    ST8(a0+81, 0);
    ST32(a0+64, FBITS(f0));
    ST32(a0+68, FBITS(f0));
    ST32(a0+72, FBITS(f0));
    ST32(a0+76, FBITS(f0));
    ST32(a0+84, v1);
    ST32(a0+88, 0);
    ST8(a0+82, v1);
    ST8(a0+108, 0);
    ST8(a0+109, 0);
    ST32(a0+92, FBITS(f0));
    ST32(a0+96, FBITS(f0));
    ST32(a0+100, FBITS(f0));
    ST32(a0+104, FBITS(f0));
    ST32(a0+112, v1);
    ST32(a0+116, 0);
    ST8(a0+110, v1);
    ST8(a0+136, 0);
    ST8(a0+137, v1);
    ST32(a0+120, FBITS(f0));
    ST32(a0+124, FBITS(f0));
    ST32(a0+128, FBITS(f0));
    ST32(a0+140, v1);
    ST32(a0+144, 0);
    return;
}

/* 08977808 */
void func_08977808(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0;
L_08977808:;
    v0 = D_08AEE3B0 - (-7248);
    f0 = BITSF(LD32(v0-7248));
    v0 = 1;
    ST8(a0+6, v0);
    ST32(a0+156, FBITS(f0));
    ST32(a0+160, FBITS(f0));
    ST32(a0+148, FBITS(f0));
    ST32(a0+152, FBITS(f0));
    return;
}

/* 0897782C */
void func_0897782C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
L_0897782C:;
    v0 = D_08AEE3B4 - (-7244);
    f0 = BITSF(LD32(v0-7244));
    v0 = 3;
    a1 = 16;
    a2 = 1;
    ST32(a0+420, v0);
    v1 = 100;
    v0 = 5;
    ST8(a0+6, a2);
    ST32(a0+400, FBITS(f0));
    ST32(a0+412, a1);
    ST32(a0+424, v1);
    ST32(a0+428, v0);
    ST32(a0+392, FBITS(f0));
    ST32(a0+396, FBITS(f0));
    ST32(a0+404, a1);
    ST32(a0+408, a1);
    ST32(a0+416, a2);
    return;
}

/* 08977878 */
u64 func_08977878(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08977878:;
    ST8(a0+1736, 0);
    a1 = 0 + 0;
    v1 = a0 + 0;
    ST32(a0+1740, 0);
    ST32(a0+1744, 0);
    ST32(a0+1748, 0);
    ST32(a0+1772, 0);
    ST32(a0+1752, 0);
    ST32(a0+1776, 0);
    goto L_0897789C;
L_0897789C:;
    a1 = a1 + 1;
    v0 = a1 < 0x3u;
    ST32(v1+1760, 0);
    ST32(v1+1784, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0897789C; }
    goto L_089778B4;
L_089778B4:;
    a1 = 0 + 0;
    a2 = 2;
    v1 = a0 + 0;
    goto L_089778C0;
L_089778C0:;
    a1 = a1 + 1;
    v0 = a1 < 0x4u;
    ST32(v1+1988, a2);
    ST32(v1+1992, 0);
    ST32(v1+1996, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 12;
    if (cnd_) { goto L_089778C0; }
    goto L_089778DC;
L_089778DC:;
    a1 = 0 + 0;
    a2 = 2;
    v1 = a0 + 0;
    goto L_089778E8;
L_089778E8:;
    a1 = a1 + 1;
    v0 = a1 < 0x10u;
    ST8(v1+1796, 0);
    ST32(v1+1800, a2);
    ST32(v1+1804, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 12;
    if (cnd_) { goto L_089778E8; }
    goto L_08977904;
L_08977904:;
    v0 = 1;
    ST8(a0+6, v0);
    ST32(a0+1756, 0);
    ST32(a0+1780, 0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08977918 */
u32 func_08977918(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_08977918:;
    v0 = a1 < 0x14u;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08977938; }
    goto L_08977924;
L_08977924:;
    v0 = 44;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = a0 + v0;
    v1 = v0 + 436;
    goto L_08977938;
L_08977938:;
    v0 = v1 + 0;
    return v0;
}

/* 08977940 */
u64 func_08977940(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08977940:;
    sp = sp - 16;
    v0 = a1 < 0x14u;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08977980; }
    goto L_08977968;
L_08977968:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08977980:;
    a0 = 44;
    { s64 p_ = (s64)(s32)a1 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = a2 + 0;
    a2 = 40;
    a0 = lo;
    a0 = s1 + a0;
    a0 = a0 + 436;
    v0 = func_088F86C8(a0, a1, a2);
    goto L_089779A0;
L_089779A0:;
    v1 = LD_U8(s1+6);
    v0 = 0 < v0;
    cnd_ = v1 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089779B8; }
    goto L_089779B0;
L_089779B0:;
    cnd_ = v0 == 0;
    v0 = 44;
    if (cnd_) { goto L_089779C0; }
    goto L_089779B8;
L_089779B8:;
    a0 = 1;
    v0 = 44;
    goto L_089779C0;
L_089779C0:;
    { s64 p_ = (s64)(s32)s0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST8(s1+6, a0);
    a2 = s2 + 0;
    t0 = s2 + 32;
    v0 = lo;
    v0 = s1 + v0;
    a3 = v0 + 436;
    goto L_089779DC;
L_089779DC:;
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
    if (cnd_) { goto L_089779DC; }
    goto L_08977A08;
L_08977A08:;
    v0 = 44;
    { s64 p_ = (s64)(s32)s0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = LD32(a2);
    a0 = LD32(a2+4);
    ST32(a3, v1);
    ST32(a3+4, a0);
    v1 = 1;
    v0 = lo;
    v0 = s1 + v0;
    ST8(v0+432, v1);
    goto L_08977968;
}

/* 08977A34 */
u64 func_08977A34(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
L_08977A34:;
    v0 = a1 < 0x14u;
    cnd_ = v0 == 0;
    t0 = a0 + 0;
    if (cnd_) { goto L_08977AC4; }
    goto L_08977A40;
L_08977A40:;
    v0 = 44;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = a0 + v0;
    t1 = v0 + 436;
    cnd_ = t1 == 0;
    v0 = a2 < 0x8u;
    if (cnd_) { goto L_08977AC4; }
    goto L_08977A5C;
L_08977A5C:;
    cnd_ = v0 == 0;
    v0 = 44;
    if (cnd_) { goto L_08977AB0; }
    goto L_08977A64;
L_08977A64:;
    v1 = D_08ADC5B0 - (-14928);
    v0 = a2 << 2;
    v1 = v1 - 14928;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08977A80u: goto L_08977A80; case 0x08977ACCu: goto L_08977ACC; case 0x08977AF8u: goto L_08977AF8; case 0x08977B24u: goto L_08977B24; case 0x08977B50u: goto L_08977B50; case 0x08977B7Cu: goto L_08977B7C; case 0x08977BA8u: goto L_08977BA8; case 0x08977BD4u: goto L_08977BD4; default: rs_break(0, 0x08977a78); }
L_08977A80:;
    v0 = LD32(t1+4);
    v1 = LD_U8(t0+6);
    a0 = 0 + 0;
    v0 = v0 ^ a3;
    cnd_ = v1 != 0;
    v0 = 0 < v0;
    if (cnd_) { goto L_08977AA0; }
    goto L_08977A98;
L_08977A98:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(t1+4, a3); goto L_08977AA8; }
    goto L_08977AA0;
L_08977AA0:;
    a0 = 1;
    ST32(t1+4, a3);
    goto L_08977AA8;
L_08977AA8:;
    ST8(t0+6, a0);
    v0 = 44;
    goto L_08977AB0;
L_08977AB0:;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = 1;
    v0 = lo;
    v0 = t0 + v0;
    ST8(v0+432, v1);
    goto L_08977AC4;
L_08977AC4:;
    return (u64)v0 | ((u64)v1 << 32);
L_08977ACC:;
    v0 = LD32(t1+8);
    v1 = LD_U8(t0+6);
    a0 = 0 + 0;
    v0 = v0 ^ a3;
    cnd_ = v1 != 0;
    v0 = 0 < v0;
    if (cnd_) { goto L_08977AEC; }
    goto L_08977AE4;
L_08977AE4:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(t1+8, a3); goto L_08977AA8; }
    goto L_08977AEC;
L_08977AEC:;
    a0 = 1;
    ST32(t1+8, a3);
    goto L_08977AA8;
L_08977AF8:;
    v0 = LD32(t1+12);
    v1 = LD_U8(t0+6);
    a0 = 0 + 0;
    v0 = v0 ^ a3;
    cnd_ = v1 != 0;
    v0 = 0 < v0;
    if (cnd_) { goto L_08977B18; }
    goto L_08977B10;
L_08977B10:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(t1+12, a3); goto L_08977AA8; }
    goto L_08977B18;
L_08977B18:;
    a0 = 1;
    ST32(t1+12, a3);
    goto L_08977AA8;
L_08977B24:;
    v0 = LD32(t1+16);
    v1 = LD_U8(t0+6);
    a0 = 0 + 0;
    v0 = v0 ^ a3;
    cnd_ = v1 != 0;
    v0 = 0 < v0;
    if (cnd_) { goto L_08977B44; }
    goto L_08977B3C;
L_08977B3C:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(t1+16, a3); goto L_08977AA8; }
    goto L_08977B44;
L_08977B44:;
    a0 = 1;
    ST32(t1+16, a3);
    goto L_08977AA8;
L_08977B50:;
    v0 = LD32(t1+20);
    v1 = LD_U8(t0+6);
    a0 = 0 + 0;
    v0 = v0 ^ a3;
    cnd_ = v1 != 0;
    v0 = 0 < v0;
    if (cnd_) { goto L_08977B70; }
    goto L_08977B68;
L_08977B68:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(t1+20, a3); goto L_08977AA8; }
    goto L_08977B70;
L_08977B70:;
    a0 = 1;
    ST32(t1+20, a3);
    goto L_08977AA8;
L_08977B7C:;
    v0 = LD32(t1+24);
    v1 = LD_U8(t0+6);
    a0 = 0 + 0;
    v0 = v0 ^ a3;
    cnd_ = v1 != 0;
    v0 = 0 < v0;
    if (cnd_) { goto L_08977B9C; }
    goto L_08977B94;
L_08977B94:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(t1+24, a3); goto L_08977AA8; }
    goto L_08977B9C;
L_08977B9C:;
    a0 = 1;
    ST32(t1+24, a3);
    goto L_08977AA8;
L_08977BA8:;
    v0 = LD32(t1+28);
    v1 = LD_U8(t0+6);
    a0 = 0 + 0;
    v0 = v0 ^ a3;
    cnd_ = v1 != 0;
    v0 = 0 < v0;
    if (cnd_) { goto L_08977BC8; }
    goto L_08977BC0;
L_08977BC0:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(t1+28, a3); goto L_08977AA8; }
    goto L_08977BC8;
L_08977BC8:;
    a0 = 1;
    ST32(t1+28, a3);
    goto L_08977AA8;
L_08977BD4:;
    v0 = LD32(t1+32);
    v1 = LD_U8(t0+6);
    a0 = 0 + 0;
    v0 = v0 ^ a3;
    cnd_ = v1 != 0;
    v0 = 0 < v0;
    if (cnd_) { goto L_08977BF4; }
    goto L_08977BEC;
L_08977BEC:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(t1+32, a3); goto L_08977AA8; }
    goto L_08977BF4;
L_08977BF4:;
    a0 = 1;
    ST32(t1+32, a3);
    goto L_08977AA8;
}

/* 08977C00 */
rv_t func_08977C00(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08977C00:;
    sp = sp - 32;
    s3 = a0 + 1508;
    s0 = a0 + 0;
    a0 = s3 + 0;
    s2 = 0 + 0;
    s1 = a1 + 0;
    v0 = func_088F9088(a0, a1);
    goto L_08977C30;
L_08977C30:;
    a0 = s0 + 1570;
    cnd_ = v0 == 0;
    a1 = s1 + 62;
    if (cnd_) { goto L_08977CC4; }
    goto L_08977C3C;
L_08977C3C:;
    s2 = 1;
    goto L_08977C40;
L_08977C40:;
    v0 = LD_U8(s0+6);
    goto L_08977C44;
L_08977C44:;
    a0 = s3 + 0;
    a1 = s1 + 0;
    a2 = 31;
    a3 = 1;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08977C64; }
    goto L_08977C5C;
L_08977C5C:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08977C68; }
    goto L_08977C64;
L_08977C64:;
    v1 = 1;
    goto L_08977C68;
L_08977C68:;
    cnd_ = s2 != 0;
    ST8(s0+6, v1);
    if (cnd_) { goto L_08977C8C; }
    goto L_08977C70;
L_08977C70:;
    goto L_08977C74;
L_08977C74:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08977C8C:;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08977C94;
L_08977C94:;
    a0 = s0 + 1570;
    a2 = 51;
    a1 = s1 + 62;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08977CA8;
L_08977CA8:;
    a0 = s0 + 1672;
    a1 = s1 + 164;
    a2 = 31;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08977CBC;
L_08977CBC:;
    goto L_08977C74;
L_08977CC4:;
    v0 = func_088F9088(a0, a1);
    goto L_08977CCC;
L_08977CCC:;
    a0 = s0 + 1672;
    cnd_ = v0 != 0;
    a1 = s1 + 164;
    if (cnd_) { goto L_08977C3C; }
    goto L_08977CD8;
L_08977CD8:;
    v0 = func_088F9088(a0, a1);
    goto L_08977CE0;
L_08977CE0:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+6); goto L_08977C44; }
    goto L_08977CE8;
L_08977CE8:;
    s2 = 1;
    goto L_08977C40;
}

/* 08977CF0 */
void func_08977CF0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08977CF0:;
    a0 = a0 + 432;
    v1 = 0 + 0;
    goto L_08977CF8;
L_08977CF8:;
    v1 = v1 + 1;
    v0 = v1 < 0x14u;
    ST8(a0, 0);
    cnd_ = v0 != 0;
    a0 = a0 + 44;
    if (cnd_) { goto L_08977CF8; }
    goto L_08977D0C;
L_08977D0C:;
    return;
}

/* 08977D14 */
rv_t func_08977D14(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[320] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 320);
L_08977D14:;
    sp = sp - 320;
    s6 = a0 + 164;
    s0 = a0 + 0;
    a0 = s6 + 0;
    fp = 1;
    s4 = 0 + 0;
    s3 = s0 + 0;
    func_089775A8(a0);
    goto L_08977D5C;
L_08977D5C:;
    v0 = D_08ADC738 - (-14536);
    ST32(sp+256, 0);
    v1 = D_08ADC7AC - (-14420);
    s5 = v0 - 14536;
    s7 = v1 - 14420;
    goto L_08977D70;
L_08977D70:;
    v0 = LD_U8(s3+360);
    s0 = s4 << 2;
    cnd_ = v0 != 0;
    v1 = s0 + s5;
    if (cnd_) { goto L_08977D98; }
    goto L_08977D80;
L_08977D80:;
    v0 = LD32(v1);
    a0 = 0xbfbe0000u;
    a2 = sp + 256;
    a0 = a0 | 0x705c;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08977DD8; }
    goto L_08977D98;
L_08977D98:;
    s4 = s4 + 1;
    goto L_08977D9C;
L_08977D9C:;
    v0 = s4 < 0x1du;
    cnd_ = v0 != 0;
    s3 = s3 + 1;
    if (cnd_) { goto L_08977D70; }
    goto L_08977DA8;
L_08977DA8:;
    sp = sp + 320;
    return (rv_t){ v0, v1, f0 };
L_08977DD8:;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08977DE0;
L_08977DE0:;
    a0 = LD32(sp+256);
    a1 = 0xe9290000u;
    a2 = 0 + 0;
    a1 = a1 | 0xab96;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08977DF4;
L_08977DF4:;
    a0 = LD32(sp+256);
    a1 = 0x7a630000u;
    a1 = a1 | 0xdd8a;
    a2 = 0 + 0;
    s1 = v0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08977E0C;
L_08977E0C:;
    a0 = v0 + 0;
    v0 = s0 + s7;
    cnd_ = s1 == 0;
    v0 = LD32(v0);
    if (cnd_) { goto L_08977D98; }
    goto L_08977E1C;
L_08977E1C:;
    v0 = v0 << 2;
    v0 = v0 + s6;
    v1 = LD32(v0);
    v1 = v1 < s1;
    cnd_ = v1 != 0;
    if (cnd_) { s4 = s4 + 1; goto L_08977D9C; }
    goto L_08977E34;
L_08977E34:;
    a1 = 0x330000u;
    a1 = a1 | 0x7a8b;
    cnd_ = a0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08977E4C; }
    goto L_08977E44;
L_08977E44:;
    ST8(s3+360, fp);
    goto L_08977D98;
L_08977E4C:;
    a0 = LD32(sp+256);
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08977E54;
L_08977E54:;
    a0 = LD32(sp+256);
    a1 = 0xcae70000u;
    a2 = 0 + 0;
    a1 = a1 | 0x8475;
    s1 = v0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08977E6C;
L_08977E6C:;
    a1 = 0 + 0;
    a0 = 256;
    s2 = v0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08977E7C;
L_08977E7C:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    s0 = v0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08977E8C;
L_08977E8C:;
    t0 = v0 + 0;
    a0 = sp + 0;
    a1 = s0 + 0;
    a2 = 128;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08977EA4;
L_08977EA4:;
    f12 = BITSF(0);
    a0 = sp + 0;
    a1 = sp + 0;
    cnd_ = s2 == 0;
    a2 = 1;
    if (cnd_) { goto L_08977EC8; }
    goto L_08977EB8;
L_08977EB8:;
    { rv_t r_ = func_08A32C4C(a0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08977EC0;
L_08977EC0:;
    ST8(s3+360, fp);
    goto L_08977D98;
L_08977EC8:;
    a0 = 4;
    { rv_t r_ = func_08A4EDDC(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08977ED0;
L_08977ED0:;
    ST8(s3+360, fp);
    goto L_08977D98;
}

/* 08977ED8 */
void func_08977ED8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08977ED8:;
    sp = sp - 64;
    s0 = a0 + 0;
    func_08977CF0(a0);
    goto L_08977EEC;
L_08977EEC:;
    v0 = 1;
    ST32(sp+12, v0);
    a2 = s0 + 436;
    a3 = sp + 0;
    ST32(sp, 0);
    t0 = sp + 32;
    ST32(sp+36, 0);
    ST32(sp+32, 0);
    ST32(sp+24, v0);
    ST32(sp+28, v0);
    ST32(sp+4, v0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    goto L_08977F24;
L_08977F24:;
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
    if (cnd_) { goto L_08977F24; }
    goto L_08977F50;
L_08977F50:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    ST32(a2, v0);
    ST32(a2+4, v1);
    v0 = 1;
    v1 = 1;
    ST8(s0+6, v0);
    ST8(s0+432, v1);
    sp = sp + 64;
    return;
}

/* 08977F80 */
void func_08977F80(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
L_08977F80:;
    v0 = 1;
    v1 = 11;
    ST8(a0+6, v0);
    v0 = 3;
    a1 = 2;
    ST8(a0+1480, v1);
    v1 = 15;
    ST8(a0+1492, v0);
    v0 = 6;
    ST8(a0+1493, v1);
    v1 = 9;
    ST8(a0+1456, v0);
    v0 = 5;
    ST8(a0+1457, v1);
    ST8(a0+1468, v0);
    ST8(a0+1469, a1);
    ST32(a0+1476, 0);
    ST32(a0+1472, 0);
    ST8(a0+1481, a1);
    ST32(a0+1488, 0);
    ST32(a0+1484, 0);
    ST32(a0+1452, 0);
    ST32(a0+1448, 0);
    ST32(a0+1464, 0);
    ST32(a0+1460, 0);
    ST32(a0+1496, 0);
    return;
}

/* 08977FEC */
rv_t func_08977FEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08977FEC:;
    v0 = LD_U16(a0+4);
    v0 = v0 ^ 0x2;
    v0 = v0 < 0x1u;
    return (rv_t){ v0, v1, f0 };
}

/* 08977FFC */
u32 func_08977FFC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08977FFC:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = a2 + 0;
    v0 = func_089780FC(a0, a1);
    goto L_08978014;
L_08978014:;
    a0 = 0x203e0000u;
    a1 = v0 + 0;
    a0 = a0 | 0x217d;
    a2 = sp + 0;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897802C;
L_0897802C:;
    a0 = D_08ADC5D0 - (-14896);
    v0 = 1;
    a0 = a0 - 14896;
    cnd_ = s0 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08978070; }
    goto L_08978040;
L_08978040:;
    cnd_ = s0 == 0;
    v0 = 2;
    if (cnd_) { goto L_08978080; }
    goto L_08978048;
L_08978048:;
    cnd_ = s0 == v0;
    a0 = D_08ADC5D8 - (-14888);
    if (cnd_) { goto L_0897806C; }
    goto L_08978050;
L_08978050:;
    a0 = LD32(sp);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897805C;
L_0897805C:;
    sp = sp + 32;
    return v0;
L_0897806C:;
    a0 = a0 - 14888;
    goto L_08978070;
L_08978070:;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08978078;
L_08978078:;
    a1 = v0 + 0;
    goto L_08978050;
L_08978080:;
    a0 = D_08ADC5E0 - (-14880);
    a0 = a0 - 14880;
    goto L_08978070;
}

/* 0897808C */
u32 func_0897808C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897808C:;
    sp = sp - 16;
    v0 = 1;
    cnd_ = a1 == v0;
    a3 = a1 + 0;
    if (cnd_) { goto L_089780F4; }
    goto L_089780A0;
L_089780A0:;
    cnd_ = a1 == 0;
    v1 = a0 + 1472;
    if (cnd_) { goto L_089780CC; }
    goto L_089780A8;
L_089780A8:;
    v0 = 2;
    cnd_ = a1 == v0;
    v0 = 3;
    if (cnd_) { goto L_089780EC; }
    goto L_089780B4;
L_089780B4:;
    cnd_ = a1 == v0;
    v1 = a0 + 1460;
    if (cnd_) { goto L_089780CC; }
    goto L_089780BC;
L_089780BC:;
    v0 = 0 + 0;
    goto L_089780C0;
L_089780C0:;
    goto L_089780C4;
L_089780C4:;
    sp = sp + 16;
    return v0;
L_089780CC:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = 0 + 0; goto L_089780C0; }
    goto L_089780D4;
L_089780D4:;
    a2 = LD32(v1);
    a1 = LD32(v1+4);
    a0 = a3 + 0;
    v0 = func_08977FFC(a0, a1, a2);
    goto L_089780E4;
L_089780E4:;
    goto L_089780C4;
L_089780EC:;
    v1 = a0 + 1448;
    goto L_089780CC;
L_089780F4:;
    v1 = a0 + 1484;
    goto L_089780CC;
}

/* 089780FC */
u32 func_089780FC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_089780FC:;
    v1 = a0 << 1;
    v1 = v1 + a0;
    v1 = v1 + a1;
    v0 = D_08C29190 - (-28272);
    v0 = v0 - 28272;
    v1 = v1 << 2;
    v1 = v1 + v0;
    v0 = LD32(v1);
    return v0;
}

/* 08978120 */
u32 func_08978120(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08978120:;
    a2 = a0 + 0;
    sp = sp - 16;
    v0 = 1;
    a0 = a1 + 0;
    cnd_ = a1 == v0;
    v1 = a2 + 1484;
    if (cnd_) { goto L_08978154; }
    goto L_0897813C;
L_0897813C:;
    a3 = a2 + 1448;
    v0 = a1 ^ 0x2;
    cnd_ = a1 == 0;
    v1 = a2 + 1472;
    if (cnd_) { goto L_08978154; }
    goto L_0897814C;
L_0897814C:;
    v1 = a2 + 1460;
    if (v0 == 0) v1 = a3;
    goto L_08978154;
L_08978154:;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08978164; }
    goto L_0897815C;
L_0897815C:;
    a1 = LD32(v1);
    v0 = func_089780FC(a0, a1);
    goto L_08978164;
L_08978164:;
    sp = sp + 16;
    return v0;
}

/* 08978170 */
float func_08978170(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0;
    int cnd_;
L_08978170:;
    v0 = D_08AEE3B8 - (-7240);
    a0 = a0 + 436;
    cnd_ = a0 == 0;
    f0 = BITSF(LD32(v0-7240));
    if (cnd_) { goto L_089781A4; }
    goto L_08978180;
L_08978180:;
    a0 = LD32(a0+24);
    v0 = 2;
    cnd_ = a0 == v0;
    v0 = (s32)a0 < 3;
    if (cnd_) { goto L_089781CC; }
    goto L_08978190;
L_08978190:;
    cnd_ = v0 == 0;
    v0 = 3;
    if (cnd_) { goto L_089781B4; }
    goto L_08978198;
L_08978198:;
    v0 = 1;
    cnd_ = a0 == v0;
    if (cnd_) { v0 = D_08AEE3BC - (-7236); goto L_089781AC; }
    goto L_089781A4;
L_089781A4:;
    return f0;
L_089781AC:;
    f0 = BITSF(LD32(v0-7236));
    return f0;
L_089781B4:;
    cnd_ = a0 == v0;
    if (cnd_) { v0 = D_08AEE3C4 - (-7228); goto L_089781C4; }
    goto L_089781BC;
L_089781BC:;
    return f0;
L_089781C4:;
    f0 = BITSF(LD32(v0-7228));
    return f0;
L_089781CC:;
    v0 = D_08AEE3C0 - (-7232);
    f0 = BITSF(LD32(v0-7232));
    return f0;
}

/* 089781D8 */
float func_089781D8(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0;
    int cnd_;
L_089781D8:;
    v0 = D_08AEE3C8 - (-7224);
    a0 = a0 + 436;
    cnd_ = a0 == 0;
    f0 = BITSF(LD32(v0-7224));
    if (cnd_) { goto L_0897820C; }
    goto L_089781E8;
L_089781E8:;
    a0 = LD32(a0+32);
    v0 = 2;
    cnd_ = a0 == v0;
    v0 = (s32)a0 < 3;
    if (cnd_) { goto L_08978234; }
    goto L_089781F8;
L_089781F8:;
    cnd_ = v0 == 0;
    v0 = 3;
    if (cnd_) { goto L_0897821C; }
    goto L_08978200;
L_08978200:;
    v0 = 1;
    cnd_ = a0 == v0;
    if (cnd_) { v0 = D_08AEE3CC - (-7220); goto L_08978214; }
    goto L_0897820C;
L_0897820C:;
    return f0;
L_08978214:;
    f0 = BITSF(LD32(v0-7220));
    return f0;
L_0897821C:;
    cnd_ = a0 == v0;
    if (cnd_) { v0 = D_08AEE3D4 - (-7212); goto L_0897822C; }
    goto L_08978224;
L_08978224:;
    return f0;
L_0897822C:;
    f0 = BITSF(LD32(v0-7212));
    return f0;
L_08978234:;
    v0 = D_08AEE3D0 - (-7216);
    f0 = BITSF(LD32(v0-7216));
    return f0;
}

/* 08978240 */
float func_08978240(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0;
    int cnd_;
L_08978240:;
    v0 = D_08AEE3D8 - (-7208);
    a0 = a0 + 436;
    cnd_ = a0 == 0;
    f0 = BITSF(LD32(v0-7208));
    if (cnd_) { goto L_08978274; }
    goto L_08978250;
L_08978250:;
    a0 = LD32(a0+28);
    v0 = 2;
    cnd_ = a0 == v0;
    v0 = (s32)a0 < 3;
    if (cnd_) { goto L_0897829C; }
    goto L_08978260;
L_08978260:;
    cnd_ = v0 == 0;
    v0 = 3;
    if (cnd_) { goto L_08978284; }
    goto L_08978268;
L_08978268:;
    v0 = 1;
    cnd_ = a0 == v0;
    if (cnd_) { v0 = D_08AEE3DC - (-7204); goto L_0897827C; }
    goto L_08978274;
L_08978274:;
    return f0;
L_0897827C:;
    f0 = BITSF(LD32(v0-7204));
    return f0;
L_08978284:;
    cnd_ = a0 == v0;
    if (cnd_) { v0 = D_08AEE3E4 - (-7196); goto L_08978294; }
    goto L_0897828C;
L_0897828C:;
    return f0;
L_08978294:;
    f0 = BITSF(LD32(v0-7196));
    return f0;
L_0897829C:;
    v0 = D_08AEE3E0 - (-7200);
    f0 = BITSF(LD32(v0-7200));
    return f0;
}

/* 089782A8 */
float func_089782A8(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0;
    int cnd_;
L_089782A8:;
    v0 = D_08AEE3E8 - (-7192);
    a0 = a0 + 436;
    cnd_ = a0 == 0;
    f0 = BITSF(LD32(v0-7192));
    if (cnd_) { goto L_089782DC; }
    goto L_089782B8;
L_089782B8:;
    a0 = LD32(a0+32);
    v0 = 2;
    cnd_ = a0 == v0;
    v0 = (s32)a0 < 3;
    if (cnd_) { goto L_08978304; }
    goto L_089782C8;
L_089782C8:;
    cnd_ = v0 == 0;
    v0 = 3;
    if (cnd_) { goto L_089782EC; }
    goto L_089782D0;
L_089782D0:;
    v0 = 1;
    cnd_ = a0 == v0;
    if (cnd_) { v0 = D_08AEE3EC - (-7188); goto L_089782E4; }
    goto L_089782DC;
L_089782DC:;
    return f0;
L_089782E4:;
    f0 = BITSF(LD32(v0-7188));
    return f0;
L_089782EC:;
    cnd_ = a0 == v0;
    if (cnd_) { v0 = D_08AEE3F4 - (-7180); goto L_089782FC; }
    goto L_089782F4;
L_089782F4:;
    return f0;
L_089782FC:;
    f0 = BITSF(LD32(v0-7180));
    return f0;
L_08978304:;
    v0 = D_08AEE3F0 - (-7184);
    f0 = BITSF(LD32(v0-7184));
    return f0;
}

/* 08978310 */
void func_08978310(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
L_08978310:;
    v0 = LD_U8(a0+432);
    v1 = a0 + 436;
    cnd_ = v0 == 0;
    t2 = a1 + 0;
    if (cnd_) { goto L_089783B4; }
    goto L_08978320;
L_08978320:;
    cnd_ = v1 == 0;
    v0 = a0 + 440;
    if (cnd_) { goto L_089783B4; }
    goto L_08978328;
L_08978328:;
    a3 = LD32(a0+440);
    t0 = LD32(v0+16);
    a0 = LD32(v0+4);
    a1 = LD32(v0+8);
    a2 = LD32(v0+12);
    v0 = D_08ADC5E8 - (-14872);
    v0 = v0 - 14872;
    a3 = a3 << 2;
    a3 = a3 + v0;
    v1 = D_08ADC610 - (-14832);
    v0 = D_08ADC630 - (-14800);
    v1 = v1 - 14832;
    v0 = v0 - 14800;
    a0 = a0 << 2;
    a1 = a1 << 2;
    a0 = a0 + v1;
    a1 = a1 + v0;
    v1 = D_08ADC648 - (-14776);
    v0 = D_08ADC668 - (-14744);
    v1 = v1 - 14776;
    v0 = v0 - 14744;
    a2 = a2 << 2;
    t0 = t0 << 2;
    a2 = a2 + v1;
    t0 = t0 + v0;
    v1 = LD32(a3);
    t1 = LD32(a0);
    a3 = LD32(a1);
    a0 = LD32(a2);
    v0 = LD32(t0);
    ST32(t2, v1);
    ST32(t2+16, v0);
    ST32(t2+4, t1);
    ST32(t2+8, a3);
    ST32(t2+12, a0);
    goto L_089783B4;
L_089783B4:;
    return;
}

/* 089783BC */
rv_t func_089783BC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089783BC:;
    sp = sp - 16;
    s2 = a0 + 8;
    s0 = a1 + 0;
    s1 = a0 + 0;
    a0 = a1 + 0;
    cnd_ = s0 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08978424; }
    goto L_089783E8;
L_089783E8:;
    v0 = func_088F9088(a0, a1);
    goto L_089783F0;
L_089783F0:;
    v1 = LD_U8(s1+6);
    a2 = 21;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a3 = 1;
    v0 = 0 < v0;
    cnd_ = v1 != 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08978418; }
    goto L_08978410;
L_08978410:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0897841C; }
    goto L_08978418;
L_08978418:;
    t0 = 1;
    goto L_0897841C;
L_0897841C:;
    ST8(s1+6, t0);
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08978424;
L_08978424:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897843C */
u32 func_0897843C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0897843C:;
    v0 = 1;
    cnd_ = a1 == v0;
    if (cnd_) { v1 = LD_U8(a0+180); goto L_0897846C; }
    goto L_08978448;
L_08978448:;
    cnd_ = a1 == 0;
    if (cnd_) { v1 = LD_U8(a0+168); goto L_0897846C; }
    goto L_08978450;
L_08978450:;
    v0 = 2;
    cnd_ = a1 == v0;
    if (cnd_) { v1 = LD_U8(a0+144); goto L_0897846C; }
    goto L_0897845C;
L_0897845C:;
    v0 = 3;
    cnd_ = a1 != v0;
    if (cnd_) { goto L_08978484; }
    goto L_08978468;
L_08978468:;
    v1 = LD_U8(a0+156);
    goto L_0897846C;
L_0897846C:;
    v0 = D_08ADC520 - (-15072);
    v0 = v0 - 15072;
    v1 = v1 << 2;
    v1 = v1 + v0;
    v0 = LD32(v1);
    return v0;
L_08978484:;
    v0 = (u32)-1;
    return v0;
}

/* 0897848C */
u32 func_0897848C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0897848C:;
    v0 = 1;
    cnd_ = a1 == v0;
    if (cnd_) { v1 = LD_U8(a0+181); goto L_089784BC; }
    goto L_08978498;
L_08978498:;
    cnd_ = a1 == 0;
    if (cnd_) { v1 = LD_U8(a0+169); goto L_089784BC; }
    goto L_089784A0;
L_089784A0:;
    v0 = 2;
    cnd_ = a1 == v0;
    if (cnd_) { v1 = LD_U8(a0+145); goto L_089784BC; }
    goto L_089784AC;
L_089784AC:;
    v0 = 3;
    cnd_ = a1 != v0;
    if (cnd_) { goto L_089784D4; }
    goto L_089784B8;
L_089784B8:;
    v1 = LD_U8(a0+157);
    goto L_089784BC;
L_089784BC:;
    v0 = D_08ADC560 - (-15008);
    v0 = v0 - 15008;
    v1 = v1 << 2;
    v1 = v1 + v0;
    v0 = LD32(v1);
    return v0;
L_089784D4:;
    v0 = (u32)-1;
    return v0;
}

/* 089784DC */
u64 func_089784DC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089784DC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    sp = sp - 16;
    a1 = a1 & a0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0897866C; }
    goto L_08978504;
L_08978504:;
    v0 = D_08AEE3F8 - (-7176);
    f2 = BITSF(LD32(v0-7176));
    v0 = 47;
    f0 = BITSF(v0);
    v0 = 255;
    a2 = D_08C29160 - (-28320);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 179;
    a3 = D_08C29170 - (-28304);
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
    t0 = D_08C29180 - (-28288);
    f3 = (float)(s32)FBITS(f0);
    f4 = f4 * f2;
    v0 = a2 - 28320;
    v1 = a3 - 28304;
    a1 = t0 - 28288;
    f3 = f3 * f2;
    ST32(a1+12, FBITS(f1));
    a0 = D_08ADC680 - (-14720);
    a0 = a0 - 14720;
    ST32(v0+4, FBITS(f4));
    s1 = D_08C29190 - (-28272);
    s0 = s1 - 28272;
    ST32(v0+8, FBITS(f5));
    ST32(v0+12, FBITS(f1));
    ST32(v1+4, FBITS(f6));
    ST32(v1+8, FBITS(f6));
    ST32(a1+4, FBITS(f1));
    ST32(a1+8, FBITS(f1));
    ST32(a2-28320, FBITS(f3));
    ST32(a3-28304, FBITS(f5));
    ST32(v1+12, FBITS(f1));
    ST32(t0-28288, FBITS(f1));
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089785B8;
L_089785B8:;
    a0 = D_08ADC690 - (-14704);
    a0 = a0 - 14704;
    ST32(s1-28272, v0);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089785C8;
L_089785C8:;
    a0 = D_08ADC69C - (-14692);
    a0 = a0 - 14692;
    ST32(s0+4, v0);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089785D8;
L_089785D8:;
    a0 = D_08ADC6A8 - (-14680);
    a0 = a0 - 14680;
    ST32(s0+8, v0);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089785E8;
L_089785E8:;
    a0 = D_08ADC6B8 - (-14664);
    a0 = a0 - 14664;
    ST32(s0+12, v0);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089785F8;
L_089785F8:;
    a0 = D_08ADC6CC - (-14644);
    a0 = a0 - 14644;
    ST32(s0+16, v0);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08978608;
L_08978608:;
    a0 = D_08ADC6DC - (-14628);
    a0 = a0 - 14628;
    ST32(s0+20, v0);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08978618;
L_08978618:;
    a0 = D_08ADC6F4 - (-14604);
    a0 = a0 - 14604;
    ST32(s0+24, v0);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08978628;
L_08978628:;
    a0 = D_08ADC700 - (-14592);
    a0 = a0 - 14592;
    ST32(s0+28, v0);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08978638;
L_08978638:;
    a0 = D_08ADC710 - (-14576);
    a0 = a0 - 14576;
    ST32(s0+32, v0);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08978648;
L_08978648:;
    a0 = D_08ADC71C - (-14564);
    a0 = a0 - 14564;
    ST32(s0+36, v0);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08978658;
L_08978658:;
    a0 = D_08ADC72C - (-14548);
    a0 = a0 - 14548;
    ST32(s0+40, v0);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08978668;
L_08978668:;
    ST32(s0+44, v0);
    goto L_0897866C;
L_0897866C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08978680 */
rv_t func_08978680(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08978680:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_089784DC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08978694;
L_08978694:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089786A0 */
void func_089786A0(u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089786A0:;
    sp = sp - 16;
    func_08A696F4(t2, t3);
    goto L_089786B0;
L_089786B0:;
    sp = sp + 16;
    return;
}

/* 089786BC */
void func_089786BC(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089786BC:;
    sp = sp - 16;
    s0 = D_08C291F0 - (-28176);
    v0 = LD32(s0-28176);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089786F4; }
    goto L_089786D8;
L_089786D8:;
    ST32(s0-28176, 0);
    goto L_089786DC;
L_089786DC:;
    v0 = D_08C291F4 - (-28172);
    ST32(v0-28172, 0);
    sp = sp + 16;
    return;
L_089786F4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089786FC;
L_089786FC:;
    ST32(s0-28176, 0);
    goto L_089786DC;
}

/* 08978704 */
u32 func_08978704(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_08978704:;
    v0 = D_08C291F0 - (-28176);
    v1 = LD32(v0-28176);
    v0 = a0 << 9;
    cnd_ = v1 == 0;
    a1 = v1 + v0;
    if (cnd_) { goto L_0897872C; }
    goto L_08978718;
L_08978718:;
    v1 = D_08C291F4 - (-28172);
    v0 = LD32(v1-28172);
    v0 = a0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08978730; }
    goto L_0897872C;
L_0897872C:;
    a1 = 0 + 0;
    goto L_08978730;
L_08978730:;
    v0 = a1 + 0;
    return v0;
}

/* 08978738 */
u32 func_08978738(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_08978738:;
    v0 = D_08C291F0 - (-28176);
    v1 = LD32(v0-28176);
    v0 = a0 << 9;
    v0 = v1 + v0;
    cnd_ = v1 == 0;
    a1 = v0 + 256;
    if (cnd_) { goto L_08978764; }
    goto L_08978750;
L_08978750:;
    v1 = D_08C291F4 - (-28172);
    v0 = LD32(v1-28172);
    v0 = a0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08978768; }
    goto L_08978764;
L_08978764:;
    a1 = 0 + 0;
    goto L_08978768;
L_08978768:;
    v0 = a1 + 0;
    return v0;
}

/* 08978770 */
u32 func_08978770(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08978770:;
    v0 = D_08C291F0 - (-28176);
    a2 = LD32(v0-28176);
    cnd_ = a2 == 0;
    v1 = D_08C291F4 - (-28172);
    if (cnd_) { goto L_089787A0; }
    goto L_08978780;
L_08978780:;
    v0 = D_08C291F8 - (-28168);
    a0 = LD32(v0-28168);
    a1 = LD32(v1-28172);
    v0 = a0 << 9;
    v0 = a2 + v0;
    a0 = a0 < a1;
    cnd_ = a0 != 0;
    v0 = v0 + 256;
    if (cnd_) { goto L_089787A4; }
    goto L_089787A0;
L_089787A0:;
    v0 = 0 + 0;
    goto L_089787A4;
L_089787A4:;
    return v0;
}

/* 089787AC */
u32 func_089787AC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_089787AC:;
    v0 = D_08C29328 - (-27864);
    a1 = LD32(v0-27864);
    v1 = D_08ADC828 - (-14296);
    a2 = v1 - 14296;
    v0 = 5;
    v1 = D_08ADC830 - (-14288);
    cnd_ = a1 == v0;
    v1 = v1 - 14288;
    if (cnd_) { goto L_089787F0; }
    goto L_089787CC;
L_089787CC:;
    v0 = 2;
    cnd_ = a0 == v0;
    v0 = D_08B1BB5C - (-17572);
    if (cnd_) { goto L_089787F8; }
    goto L_089787D8;
L_089787D8:;
    v0 = 1;
    cnd_ = a0 == v0;
    v1 = a2 + 0;
    if (cnd_) { goto L_089787F0; }
    goto L_089787E4;
L_089787E4:;
    v0 = D_08ADC83C - (-14276);
    a2 = v0 - 14276;
    v1 = a2 + 0;
    goto L_089787F0;
L_089787F0:;
    v0 = v1 + 0;
    return v0;
L_089787F8:;
    a0 = LD32(v0-17572);
    goto L_089787D8;
}

/* 08978800 */
u64 func_08978800(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08978800:;
    sp = sp - 48;
    s5 = D_08C291F4 - (-28172);
    v0 = LD32(s5-28172);
    fp = a1 + 0;
    s6 = a2 + 0;
    s3 = a0 + 0;
    s1 = 0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089788B0; }
    goto L_08978848;
L_08978848:;
    v0 = D_08C29BE0 - (-25632);
    s2 = v0 - 25632;
    s4 = D_08C291F0 - (-28176);
    s7 = D_08ADC844 - (-14268);
    a1 = LD32(s4-28176);
    goto L_0897885C;
L_0897885C:;
    s0 = s1 << 9;
    a2 = 256;
    a1 = a1 + s0;
    a3 = 1;
    a0 = s2 + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08978874;
L_08978874:;
    a0 = s2 + 0;
    func_088381A0(a0);
    goto L_0897887C;
L_0897887C:;
    a1 = LD32(s4-28176);
    a0 = s3 + 0;
    a1 = a1 + s0;
    a1 = a1 + 256;
    { u64 r_ = func_08A89724(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08978890;
L_08978890:;
    a0 = s3 + 0;
    cnd_ = v0 == 0;
    a1 = s7 - 14268;
    if (cnd_) { goto L_089788E4; }
    goto L_0897889C;
L_0897889C:;
    v0 = LD32(s5-28172);
    goto L_089788A0;
L_089788A0:;
    s1 = s1 + 1;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s4-28176); goto L_0897885C; }
    goto L_089788B0;
L_089788B0:;
    v0 = 0 + 0;
    goto L_089788B4;
L_089788B4:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_089788E4:;
    { u64 r_ = func_08A89724(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089788EC;
L_089788EC:;
    cnd_ = v0 == 0;
    a0 = s6 + 0;
    if (cnd_) { goto L_08978914; }
    goto L_089788F4;
L_089788F4:;
    v0 = func_089787AC(a0);
    goto L_089788FC;
L_089788FC:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_08838148(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897890C;
L_0897890C:;
    cnd_ = v0 == 0;
    v0 = LD32(s5-28172);
    if (cnd_) { goto L_089788A0; }
    goto L_08978914;
L_08978914:;
    cnd_ = fp != 0;
    if (cnd_) { ST32(fp, s1); goto L_0897891C; }
    goto L_0897891C;
L_0897891C:;
    v0 = 1;
    goto L_089788B4;
}

/* 08978924 */
void func_08978924(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08978924:;
    sp = sp - 64;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08978AF8; }
    goto L_0897894C;
L_0897894C:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08978954;
L_08978954:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+4, v0);
    ST32(sp+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08978968;
L_08978968:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08978AE4; }
    goto L_08978970;
L_08978970:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    s3 = sp + 16;
    goto L_0897897C;
L_0897897C:;
    a0 = sp + 0;
    a1 = 0 + 0;
    a2 = s3 + 0;
    a3 = 0 + 0;
    ST32(sp+16, 0);
    s4 = D_08C291F8 - (-28168);
    s2 = s4 - 28168;
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    func_08ABA058(a0, a1, a2, a3, t1, t2, t3);
    goto L_089789A4;
L_089789A4:;
    a1 = s2 + 0;
    a0 = LD32(sp+16);
    a2 = 2;
    { u64 r_ = func_08978800(a0, a1, a2, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089789B4;
L_089789B4:;
    cnd_ = v0 == 0;
    s5 = D_08B1BB5C - (-17572);
    if (cnd_) { goto L_08978A94; }
    goto L_089789BC;
L_089789BC:;
    a0 = LD32(s4-28168);
    v0 = func_08978704(a0);
    goto L_089789C4;
L_089789C4:;
    s0 = v0 + 0;
    a1 = D_08ADC848 - (-14264);
    goto L_089789CC;
L_089789CC:;
    a0 = D_08C292E4 - (-27932);
    a1 = a1 - 14264;
    t0 = s0 + 0;
    a2 = 64;
    a3 = 1;
    a0 = a0 - 27932;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089789E8;
L_089789E8:;
    a0 = LD32(sp+16);
    func_088381A0(a0);
    goto L_089789F0;
L_089789F0:;
    a0 = LD32(sp+16);
    a1 = D_08ADC84C - (-14260);
    a1 = a1 - 14260;
    a2 = 0 + 0;
    { u64 r_ = func_08838148(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08978A04;
L_08978A04:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    v0 = D_08C29324 - (-27868);
    if (cnd_) { goto L_08978A84; }
    goto L_08978A10;
L_08978A10:;
    v1 = 1;
    ST8(v0-27868, v1);
    a0 = 1;
    v0 = D_08B2AE41 - (-20927);
    ST8(v0-20927, a0);
    goto L_08978A24;
L_08978A24:;
    a0 = LD32(sp+16);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08978A74; }
    goto L_08978A30;
L_08978A30:;
    a0 = LD32(sp);
    ST32(s3+4, 0);
    cnd_ = a0 != 0;
    ST32(s3+8, 0);
    if (cnd_) { goto L_08978A64; }
    goto L_08978A40;
L_08978A40:;
    sp = sp + 64;
    return;
L_08978A64:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08978A6C;
L_08978A6C:;
    ST32(sp, 0);
    goto L_08978A40;
L_08978A74:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08978A7C;
L_08978A7C:;
    ST32(sp+16, 0);
    goto L_08978A30;
L_08978A84:;
    v1 = D_08B2AE41 - (-20927);
    ST8(v0-27868, 0);
    ST8(v1-20927, 0);
    goto L_08978A24;
L_08978A94:;
    v0 = LD32(s5-17572);
    a0 = LD32(sp+16);
    a1 = s2 + 0;
    v0 = v0 ^ 0x1;
    s1 = 0 < v0;
    a2 = s1 + 0;
    { u64 r_ = func_08978800(a0, a1, a2, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08978AB0;
L_08978AB0:;
    cnd_ = v0 == 0;
    a0 = D_08ADC854 - (-14252);
    if (cnd_) { goto L_08978ACC; }
    goto L_08978AB8;
L_08978AB8:;
    ST32(s5-17572, s1);
    goto L_08978ABC;
L_08978ABC:;
    cnd_ = v0 == 0;
    a1 = D_08ADC848 - (-14264);
    if (cnd_) { goto L_089789CC; }
    goto L_08978AC4;
L_08978AC4:;
    goto L_089789BC;
L_08978ACC:;
    a0 = a0 - 14252;
    a1 = s2 + 0;
    a2 = 2;
    { u64 r_ = func_08978800(a0, a1, a2, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08978ADC;
L_08978ADC:;
    goto L_08978ABC;
L_08978AE4:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08978AF0;
L_08978AF0:;
    s3 = sp + 16;
    goto L_0897897C;
L_08978AF8:;
    ST32(sp, 0);
    goto L_08978970;
}

/* 08978B00 */
void func_08978B00(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 288);
L_08978B00:;
    sp = sp - 288;
    v0 = 2;
    a1 = sp + 256;
    a2 = sp + 0;
    a3 = 256;
    ST32(sp+256, v0);
    v0 = func_08978B54(a0, a1, a2, a3);
    goto L_08978B20;
L_08978B20:;
    a0 = sp + 0;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08978B3C; }
    goto L_08978B2C;
L_08978B2C:;
    v0 = v1 + 0;
    sp = sp + 288;
    return;
L_08978B3C:;
    v1 = LD32(sp+256);
    v0 = D_08B1BB5C - (-17572);
    ST32(v0-17572, v1);
    func_08978924(a0, 0, 0, 0);
    goto L_08978B4C;
L_08978B4C:;
    v1 = 1;
    goto L_08978B2C;
}

/* 08978B54 */
u32 func_08978B54(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08978B54:;
    sp = sp - 80;
    ST32(sp+32, a3);
    s6 = a1 + 0;
    s5 = a2 + 0;
    s4 = 2;
    s3 = a3 + 0;
    s2 = D_08ADC860 - (-14240);
    s1 = a0 + 0;
    s0 = 0 + 0;
    goto L_08978B98;
L_08978B98:;
    a0 = s0 + 0;
    v0 = func_08A27038(a0);
    goto L_08978BA0;
L_08978BA0:;
    t0 = v0 + 0;
    a0 = sp + 0;
    a2 = 32;
    a1 = s2 - 14240;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08978BB8;
L_08978BB8:;
    a0 = s1 + 0;
    a1 = sp + 0;
    a2 = sp + 32;
    { u64 r_ = func_08838148(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08978BC8;
L_08978BC8:;
    cnd_ = v0 != 0;
    if (cnd_) { s4 = s0 + 0; goto L_08978BE0; }
    goto L_08978BD0;
L_08978BD0:;
    s0 = s0 + 1;
    v0 = s0 < 0x2u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08978B98; }
    goto L_08978BE0;
L_08978BE0:;
    v0 = 2;
    cnd_ = s4 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08978C20; }
    goto L_08978BEC;
L_08978BEC:;
    v0 = LD32(sp+32);
    v1 = s3 - 1;
    a1 = D_08ADC848 - (-14264);
    v0 = (s32)v0 < (s32)v1 ? v0 : v1;
    a2 = v0 + 1;
    a0 = s5 + 0;
    a1 = a1 - 14264;
    t0 = s1 + 0;
    a3 = 1;
    ST32(sp+32, v0);
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08978C18;
L_08978C18:;
    v1 = 1;
    ST32(s6, s4);
    goto L_08978C20;
L_08978C20:;
    v0 = v1 + 0;
    sp = sp + 80;
    return v0;
}

/* 08978C4C */
void func_08978C4C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08978C4C:;
    sp = sp - 16;
    s2 = a1 + 0;
    s0 = a0 + 0;
    v0 = func_08978770();
    goto L_08978C6C;
L_08978C6C:;
    s1 = v0 + 0;
    v0 = D_08B1BB5C - (-17572);
    a0 = LD32(v0-17572);
    v0 = func_08A27038(a0);
    goto L_08978C7C;
L_08978C7C:;
    a1 = D_08ADC868 - (-14232);
    a0 = s0 + 0;
    a2 = s2 + 0;
    t0 = s1 + 0;
    a1 = a1 - 14232;
    t1 = v0 + 0;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08978C9C;
L_08978C9C:;
    sp = sp + 16;
    return;
}

/* 08978CB4 */
void func_08978CB4(u32 a0)
{
    u32 v0 = 0;
    int cnd_;
L_08978CB4:;
    v0 = (s32)a0 < 6;
    cnd_ = v0 == 0;
    v0 = D_08C29328 - (-27864);
    if (cnd_) { goto L_08978CC4; }
    goto L_08978CC0;
L_08978CC0:;
    ST32(v0-27864, a0);
    goto L_08978CC4;
L_08978CC4:;
    return;
}

/* 08978CCC */
u32 func_08978CCC(void)
{
    u32 v0 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08978CCC:;
    sp = sp - 16;
    v0 = D_08C29328 - (-27864);
    a0 = LD32(v0-27864);
    v0 = func_089735B4(a0);
    goto L_08978CE0;
L_08978CE0:;
    sp = sp + 16;
    return v0;
}

/* 08978CEC */
void func_08978CEC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f20 = 0, f21 = 0, f22 = 0;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_08978CEC:;
    sp = sp - 176;
    s2 = D_08C2933C - (-27844);
    s2 = s2 - 27844;
    s0 = D_08ADC870 - (-14224);
    s0 = s0 - 14224;
    a2 = 8;
    a3 = 16;
    t0 = 1;
    t1 = 0 + 0;
    a1 = s2 + 404;
    s3 = s2 + 6;
    a0 = s0 + 0;
    s1 = D_08ADC8A8 - (-14168);
    s1 = s1 - 14168;
    f21 = BITSF(0);
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08978D4C;
L_08978D4C:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08978D58;
L_08978D58:;
    a0 = s0 + 0;
    a1 = D_08ADC8EC - (-14100);
    s0 = D_08ADC95C - (-13988);
    s0 = s0 - 13988;
    a1 = a1 - 14100;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08978D70;
L_08978D70:;
    a2 = 1;
    a3 = 16;
    t0 = 1;
    t1 = 0 + 0;
    a1 = s2 + 408;
    a0 = s0 + 0;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08978D8C;
L_08978D8C:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08978D98;
L_08978D98:;
    a0 = s0 + 0;
    a1 = D_08ADC998 - (-13928);
    s0 = D_08ADCA18 - (-13800);
    s0 = s0 - 13800;
    a1 = a1 - 13928;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08978DB0;
L_08978DB0:;
    a2 = 1;
    a3 = 16;
    t0 = 1;
    t1 = 0 + 0;
    a1 = s2 + 412;
    a0 = s0 + 0;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08978DCC;
L_08978DCC:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08978DD8;
L_08978DD8:;
    a1 = D_08ADCA40 - (-13760);
    a0 = s0 + 0;
    a1 = a1 - 13760;
    s0 = D_08ADCAB4 - (-13644);
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08978DEC;
L_08978DEC:;
    s0 = s0 - 13644;
    a3 = 0x7fff0000u;
    a2 = 0 + 0;
    a3 = a3 | 0xffff;
    t0 = 1;
    t1 = 0 + 0;
    a1 = s2 + 1504;
    a0 = s0 + 0;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08978E10;
L_08978E10:;
    a1 = D_08ADCAE0 - (-13600);
    a1 = a1 - 13600;
    a0 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08978E20;
L_08978E20:;
    a0 = s0 + 0;
    s0 = D_08ADCB2C - (-13524);
    func_088978FC(a0, 0, 0, 0);
    goto L_08978E2C;
L_08978E2C:;
    s0 = s0 - 13524;
    a1 = D_08B1BB40 - (-17600);
    a2 = 1;
    a3 = 8;
    t0 = 1;
    t1 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 17600;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08978E50;
L_08978E50:;
    a0 = s0 + 0;
    a1 = D_08ADCB4C - (-13492);
    s0 = D_08ADCB84 - (-13436);
    s0 = s0 - 13436;
    a1 = a1 - 13492;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08978E68;
L_08978E68:;
    t0 = 1;
    t1 = 0 + 0;
    a2 = 3;
    a3 = 20;
    a1 = s2 + 428;
    a0 = s0 + 0;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08978E84;
L_08978E84:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08978E90;
L_08978E90:;
    a1 = D_08ADCBA4 - (-13404);
    a0 = s0 + 0;
    a1 = a1 - 13404;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08978EA0;
L_08978EA0:;
    v1 = D_08AEE3FC - (-7172);
    f22 = BITSF(LD32(v1-7172));
    s0 = D_08ADCBD8 - (-13352);
    s0 = s0 - 13352;
    f12 = f21;
    f13 = f22;
    a2 = 1;
    a3 = 0 + 0;
    a1 = s2 + 392;
    a0 = s0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08978ECC;
L_08978ECC:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08978ED8;
L_08978ED8:;
    a0 = s0 + 0;
    s0 = D_08ADCC0C - (-13300);
    s0 = s0 - 13300;
    a1 = s1 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08978EEC;
L_08978EEC:;
    f12 = f21;
    f13 = f22;
    a2 = 1;
    a3 = 0 + 0;
    a1 = s2 + 396;
    a0 = s0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08978F08;
L_08978F08:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08978F14;
L_08978F14:;
    a0 = s0 + 0;
    s0 = D_08ADCC44 - (-13244);
    s0 = s0 - 13244;
    a1 = s1 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08978F28;
L_08978F28:;
    f12 = f21;
    f13 = f22;
    a2 = 1;
    a3 = 0 + 0;
    a1 = s2 + 400;
    a0 = s0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08978F44;
L_08978F44:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08978F50;
L_08978F50:;
    a0 = s0 + 0;
    s0 = D_08ADCC6C - (-13204);
    s0 = s0 - 13204;
    a1 = s1 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08978F64;
L_08978F64:;
    t0 = 1;
    t1 = 0 + 0;
    a2 = 25;
    a3 = 200;
    a1 = s2 + 424;
    a0 = s0 + 0;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08978F80;
L_08978F80:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08978F8C;
L_08978F8C:;
    a1 = D_08ADCC94 - (-13164);
    a0 = s0 + 0;
    a1 = a1 - 13164;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08978F9C;
L_08978F9C:;
    v1 = D_08AEE400 - (-7168);
    f20 = BITSF(LD32(v1-7168));
    s0 = D_08ADCCD0 - (-13104);
    s0 = s0 - 13104;
    a1 = D_08B1BB48 - (-17592);
    f12 = f21;
    f13 = f20;
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 17592;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08978FCC;
L_08978FCC:;
    a1 = D_08ADCCF4 - (-13068);
    a0 = s0 + 0;
    a1 = a1 - 13068;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08978FDC;
L_08978FDC:;
    a0 = D_08ADCD2C - (-13012);
    a1 = D_08C29338 - (-27848);
    a0 = a0 - 13012;
    a1 = a1 - 27848;
    a2 = 1;
    a3 = 0 + 0;
    s0 = D_08ADCD50 - (-12976);
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08978FFC;
L_08978FFC:;
    s0 = s0 - 12976;
    a1 = D_08B1BB4C - (-17588);
    f12 = f21;
    f13 = f20;
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 17588;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08979020;
L_08979020:;
    a1 = D_08ADCD74 - (-12940);
    a0 = s0 + 0;
    a1 = a1 - 12940;
    s0 = D_08ADCDD0 - (-12848);
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08979034;
L_08979034:;
    s0 = s0 - 12848;
    a1 = D_08B1BB50 - (-17584);
    f12 = f21;
    f13 = f20;
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 17584;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08979058;
L_08979058:;
    a1 = D_08ADCDF4 - (-12812);
    a0 = s0 + 0;
    a1 = a1 - 12812;
    s0 = D_08ADCE40 - (-12736);
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_0897906C;
L_0897906C:;
    s0 = s0 - 12736;
    a1 = D_08B1BB54 - (-17580);
    f12 = f21;
    f13 = f20;
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 17580;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08979090;
L_08979090:;
    a1 = D_08ADCE6C - (-12692);
    a0 = s0 + 0;
    a1 = a1 - 12692;
    s0 = D_08ADCEC4 - (-12604);
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_089790A4;
L_089790A4:;
    s0 = s0 - 12604;
    a1 = D_08B1BB58 - (-17576);
    f13 = f20;
    f12 = f21;
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 17576;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_089790C8;
L_089790C8:;
    a1 = D_08ADCF00 - (-12544);
    a0 = s0 + 0;
    a1 = a1 - 12544;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_089790D8;
L_089790D8:;
    a0 = D_08ADCF78 - (-12424);
    a1 = D_08C2CB48 - (-13496);
    a0 = a0 - 12424;
    a1 = a1 - 13496;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089790F4;
L_089790F4:;
    a3 = 0x7fff0000u;
    a0 = D_08ADCF98 - (-12392);
    a1 = D_08C29B54 - (-25772);
    t1 = 0 + 0;
    t0 = 1;
    a0 = a0 - 12392;
    a1 = a1 - 25772;
    a2 = 0 + 0;
    a3 = a3 | 0xffff;
    s0 = D_08ADCFBC - (-12356);
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08979120;
L_08979120:;
    s0 = s0 - 12356;
    a1 = D_08C29B5C - (-25764);
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 25764;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897913C;
L_0897913C:;
    a1 = D_08ADCFDC - (-12324);
    a0 = s0 + 0;
    a1 = a1 - 12324;
    s0 = D_08ADD048 - (-12216);
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08979150;
L_08979150:;
    s0 = s0 - 12216;
    a1 = D_08B16040 - (24640);
    a0 = s0 + 0;
    a1 = a1 + 24640;
    a2 = 16;
    a3 = 1;
    t0 = 0 + 0;
    func_08897890(a0, a1, a2, a3, t0);
    goto L_08979170;
L_08979170:;
    a1 = D_08ADD068 - (-12184);
    t0 = 15;
    a2 = 128;
    a3 = 1;
    a0 = sp + 0;
    a1 = a1 - 12184;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897918C;
L_0897918C:;
    a0 = s0 + 0;
    s0 = D_08ADD0B8 - (-12104);
    s0 = s0 - 12104;
    a1 = sp + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_089791A0;
L_089791A0:;
    a2 = 1;
    a3 = 0 + 0;
    a1 = s2 + 63;
    a0 = s0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089791B4;
L_089791B4:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_089791C0;
L_089791C0:;
    a1 = D_08ADD0D4 - (-12076);
    a0 = s0 + 0;
    a1 = a1 - 12076;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_089791D0;
L_089791D0:;
    v1 = D_08AEE404 - (-7164);
    f20 = BITSF(LD32(v1-7164));
    s0 = D_08ADD128 - (-11992);
    s0 = s0 - 11992;
    f12 = f21;
    f13 = f20;
    a2 = 1;
    a3 = 0 + 0;
    a1 = s2 + 148;
    a0 = s0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_089791FC;
L_089791FC:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08979208;
L_08979208:;
    a0 = s0 + 0;
    a1 = D_08ADD14C - (-11956);
    s0 = D_08ADD178 - (-11912);
    s0 = s0 - 11912;
    a1 = a1 - 11956;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08979220;
L_08979220:;
    f12 = f21;
    f13 = f20;
    a2 = 1;
    a3 = 0 + 0;
    a1 = s2 + 152;
    a0 = s0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_0897923C;
L_0897923C:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08979248;
L_08979248:;
    a0 = s0 + 0;
    a1 = D_08ADD198 - (-11880);
    s0 = D_08ADD1C0 - (-11840);
    s0 = s0 - 11840;
    a1 = a1 - 11880;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08979260;
L_08979260:;
    f12 = f21;
    f13 = f20;
    a2 = 1;
    a3 = 0 + 0;
    a1 = s2 + 156;
    a0 = s0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_0897927C;
L_0897927C:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08979288;
L_08979288:;
    a0 = s0 + 0;
    a1 = D_08ADD1DC - (-11812);
    s0 = D_08ADD204 - (-11772);
    s0 = s0 - 11772;
    a1 = a1 - 11812;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_089792A0;
L_089792A0:;
    a2 = 1;
    a3 = 0 + 0;
    a1 = s2 + 81;
    a0 = s0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089792B4;
L_089792B4:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_089792C0;
L_089792C0:;
    a0 = s0 + 0;
    a1 = D_08ADD244 - (-11708);
    s0 = D_08ADD280 - (-11648);
    s0 = s0 - 11648;
    a1 = a1 - 11708;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_089792D8;
L_089792D8:;
    a2 = 1;
    a3 = 0 + 0;
    a1 = s2 + 109;
    a0 = s0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089792EC;
L_089792EC:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_089792F8;
L_089792F8:;
    a0 = s0 + 0;
    a1 = D_08ADD2BC - (-11588);
    s0 = D_08ADD2F8 - (-11528);
    s0 = s0 - 11528;
    a1 = a1 - 11588;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08979310;
L_08979310:;
    a2 = 1;
    a3 = 0 + 0;
    a1 = s2 + 137;
    a0 = s0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08979324;
L_08979324:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08979330;
L_08979330:;
    a1 = D_08ADD33C - (-11460);
    a0 = s0 + 0;
    a1 = a1 - 11460;
    s0 = D_08ADD37C - (-11396);
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08979344;
L_08979344:;
    s0 = s0 - 11396;
    s1 = s2 + 1500;
    a3 = 0x7fff0000u;
    a2 = 0 + 0;
    a3 = a3 | 0xffff;
    t0 = 1;
    t1 = 0 + 0;
    a0 = s0 + 0;
    a1 = s1 + 0;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_0897936C;
L_0897936C:;
    a1 = D_08ADD3B0 - (-11344);
    a1 = a1 - 11344;
    a0 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_0897937C;
L_0897937C:;
    a0 = s0 + 0;
    s0 = D_08ADD3EC - (-11284);
    func_088978FC(a0, 0, 0, 0);
    goto L_08979388;
L_08979388:;
    s0 = s0 - 11284;
    a3 = 0x7fff0000u;
    a1 = D_08C292BC - (-27972);
    a2 = 0 + 0;
    a3 = a3 | 0xffff;
    t0 = 1;
    t1 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 27972;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_089793B0;
L_089793B0:;
    a1 = D_08ADD418 - (-11240);
    a1 = a1 - 11240;
    a0 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_089793C0;
L_089793C0:;
    a0 = s0 + 0;
    s0 = D_08ADD43C - (-11204);
    s0 = s0 - 11204;
    func_088978FC(a0, 0, 0, 0);
    goto L_089793D0;
L_089793D0:;
    t0 = 1;
    t1 = 0 + 0;
    a2 = 1;
    a3 = 10;
    a1 = s2 + 420;
    a0 = s0 + 0;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_089793EC;
L_089793EC:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_089793F8;
L_089793F8:;
    a1 = D_08ADD464 - (-11164);
    a0 = s0 + 0;
    a1 = a1 - 11164;
    s0 = D_08ADD498 - (-11112);
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_0897940C;
L_0897940C:;
    s0 = s0 - 11112;
    a1 = D_08B1B928 - (-18136);
    f13 = f22;
    f12 = f20;
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 18136;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08979430;
L_08979430:;
    a1 = D_08ADD4C0 - (-11072);
    a0 = s0 + 0;
    a1 = a1 - 11072;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08979440;
L_08979440:;
    s0 = D_08ADD51C - (-10980);
    a0 = D_08ADD554 - (-10924);
    a1 = ((u32)(uintptr_t)func_0897968C) - (-26996);
    s0 = s0 - 10980;
    a0 = a0 - 10924;
    a1 = a1 - 26996;
    a2 = 1;
    a3 = 0 + 0;
    func_088976C4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08979464;
L_08979464:;
    t0 = 1;
    t1 = 0 + 0;
    a2 = 1;
    a3 = 2;
    a1 = s2 + 416;
    a0 = s0 + 0;
    func_088977D4(a0, a1, a2, a3, t0, t1);
    goto L_08979480;
L_08979480:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_0897948C;
L_0897948C:;
    a1 = D_08ADD580 - (-10880);
    a0 = s0 + 0;
    a1 = a1 - 10880;
    s0 = D_08ADD5B0 - (-10832);
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_089794A0;
L_089794A0:;
    s0 = s0 - 10832;
    a1 = D_08C2932C - (-27860);
    a2 = 1;
    a3 = 0 + 0;
    a1 = a1 - 27860;
    a0 = s0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089794BC;
L_089794BC:;
    a0 = s0 + 0;
    func_088978FC(a0, 0, 0, 0);
    goto L_089794C4;
L_089794C4:;
    a0 = s0 + 0;
    a1 = D_08ADD5D8 - (-10792);
    s0 = D_08ADD60C - (-10740);
    s0 = s0 - 10740;
    a1 = a1 - 10792;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_089794DC;
L_089794DC:;
    a1 = s2 + 1736;
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089794F0;
L_089794F0:;
    a0 = s0 + 0;
    s0 = D_08ADD650 - (-10672);
    func_088978FC(a0, 0, 0, 0);
    goto L_089794FC;
L_089794FC:;
    s0 = s0 - 10672;
    a3 = 0x7fff0000u;
    t0 = 1;
    t1 = 0 + 0;
    a1 = s1 + 0;
    a2 = 0 + 0;
    a3 = a3 | 0xffff;
    a0 = s0 + 0;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08979520;
L_08979520:;
    a0 = s0 + 0;
    s0 = D_08ADD67C - (-10628);
    s0 = s0 - 10628;
    func_088978FC(a0, 0, 0, 0);
    goto L_08979530;
L_08979530:;
    f12 = f21;
    f13 = f20;
    a2 = 1;
    a3 = 0 + 0;
    a1 = s2 + 72;
    a0 = s0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_0897954C;
L_0897954C:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08979558;
L_08979558:;
    a0 = s0 + 0;
    a1 = D_08ADD6C4 - (-10556);
    s0 = D_08ADD6FC - (-10500);
    s0 = s0 - 10500;
    a1 = a1 - 10556;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08979570;
L_08979570:;
    f12 = f21;
    f13 = f20;
    a2 = 1;
    a3 = 0 + 0;
    a1 = s2 + 76;
    a0 = s0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_0897958C;
L_0897958C:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08979598;
L_08979598:;
    a0 = s0 + 0;
    a1 = D_08ADD740 - (-10432);
    s0 = D_08ADD774 - (-10380);
    s0 = s0 - 10380;
    a1 = a1 - 10432;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_089795B0;
L_089795B0:;
    f12 = f21;
    f13 = f20;
    a2 = 1;
    a3 = 0 + 0;
    a1 = s2 + 64;
    a0 = s0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_089795CC;
L_089795CC:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_089795D8;
L_089795D8:;
    a0 = s0 + 0;
    a1 = D_08ADD7C4 - (-10300);
    s0 = D_08ADD800 - (-10240);
    s0 = s0 - 10240;
    a1 = a1 - 10300;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_089795F0;
L_089795F0:;
    f12 = f21;
    f13 = f20;
    a2 = 1;
    a3 = 0 + 0;
    a1 = s2 + 68;
    a0 = s0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_0897960C;
L_0897960C:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08979618;
L_08979618:;
    a0 = s0 + 0;
    a1 = D_08ADD84C - (-10164);
    s0 = D_08ADD884 - (-10108);
    s0 = s0 - 10108;
    a1 = a1 - 10164;
    s2 = s2 + 138;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08979634;
L_08979634:;
    a2 = 1;
    a3 = 0 + 0;
    a1 = s2 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08979648;
L_08979648:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08979654;
L_08979654:;
    a1 = D_08ADD8CC - (-10036);
    a0 = s0 + 0;
    a1 = a1 - 10036;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08979664;
L_08979664:;
    sp = sp + 176;
    return;
}

/* 0897968C */
rv_t func_0897968C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0897968C:;
    sp = sp - 32;
    v1 = a0 + 0;
    a2 = a2 & 0xff;
    a0 = D_08ADD8FC - (-9988);
    a0 = a0 - 9988;
    a1 = a1 & 0xff;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_089796C0; }
    goto L_089796B4;
L_089796B4:;
    v0 = v1 - 1;
    cnd_ = a1 == 0;
    a3 = v0 < 0x2u;
    if (cnd_) { goto L_089796E0; }
    goto L_089796C0;
L_089796C0:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089796C8;
L_089796C8:;
    v0 = 1;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089796E0:;
    v0 = D_08C2933C - (-27844);
    v0 = v0 - 27844;
    t0 = v0 + 52;
    s1 = v0 + 0;
    a1 = sp + 0;
    a0 = t0 + 0;
    cnd_ = a3 == 0;
    a2 = 8;
    if (cnd_) { goto L_089796C8; }
    goto L_08979700;
L_08979700:;
    v0 = LD32(t0+4);
    ST32(sp, v1);
    s0 = sp + 0;
    ST32(sp+4, v0);
    v0 = func_088F86C8(a0, a1, a2);
    goto L_08979714;
L_08979714:;
    a2 = D_08C29370 - (-27792);
    v1 = LD_U8(s1+6);
    a1 = LD32(sp);
    a3 = a2 - 27792;
    v0 = 0 < v0;
    cnd_ = v1 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08979738; }
    goto L_08979730;
L_08979730:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+4); goto L_08979740; }
    goto L_08979738;
L_08979738:;
    a0 = 1;
    v0 = LD32(s0+4);
    goto L_08979740;
L_08979740:;
    ST8(s1+6, a0);
    ST32(a2-27792, a1);
    ST32(a3+4, v0);
    goto L_089796C8;
}

/* 08979750 */
void func_08979750(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08979750:;
    t0 = a0 + 0;
    a1 = D_08ADC848 - (-14264);
    a0 = D_08C292C4 - (-27964);
    sp = sp - 16;
    a0 = a0 - 27964;
    a1 = a1 - 14264;
    a2 = 32;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08979778;
L_08979778:;
    sp = sp + 16;
    return;
}

/* 08979784 */
void func_08979784(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08979784:;
    sp = sp - 32;
    a1 = a1 & 0xffff;
    v1 = LD32(a0+4);
    v0 = LD32(a0);
    a0 = sp + 0;
    ST32(sp+4, v1);
    ST32(sp, v0);
    v0 = func_08900298(a0, a1);
    goto L_089797A8;
L_089797A8:;
    a0 = D_08C292C4 - (-27964);
    a1 = D_08ADC848 - (-14264);
    a0 = a0 - 27964;
    a1 = a1 - 14264;
    t0 = v0 + 0;
    a2 = 32;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089797C8;
L_089797C8:;
    sp = sp + 32;
    return;
}

/* 089797D4 */
void func_089797D4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089797D4:;
    sp = sp - 16;
    v0 = D_08C292BC - (-27972);
    v1 = LD32(v0-27972);
    cnd_ = v1 != 0;
    a2 = D_08C292C0 - (-27968);
    if (cnd_) { goto L_08979800; }
    goto L_089797F0;
L_089797F0:;
    goto L_089797F4;
L_089797F4:;
    sp = sp + 16;
    return;
L_08979800:;
    v0 = LD32(a2-27968);
    v0 = v0 + 1;
    { u32 x_ = v0, y_ = v1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v0 = D_08C291FC - (-28164);
    v0 = v0 - 28164;
    v1 = hi;
    s0 = v1 << 1;
    s0 = s0 + v1;
    s0 = s0 << 2;
    s0 = s0 + v0;
    a1 = LD32(s0+8);
    a0 = LD32(s0+4);
    v0 = D_08B1BB5C - (-17572);
    ST32(a2-27968, v1);
    ST32(v0-17572, a1);
    func_08978CB4(a0);
    goto L_08979840;
L_08979840:;
    a0 = LD32(s0);
    v0 = func_08978704(a0);
    goto L_08979848;
L_08979848:;
    a0 = v0 + 0;
    func_08978924(a0, 0, 0, 0);
    goto L_08979850;
L_08979850:;
    goto L_089797F4;
}

/* 08979858 */
u32 func_08979858(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_08979858:;
    v1 = a0 << 1;
    v1 = v1 + a0;
    v0 = D_08C291FC - (-28164);
    v0 = v0 - 28164;
    v1 = v1 << 2;
    v1 = v1 + v0;
    v0 = LD32(v1);
    return v0;
}

/* 08979878 */
u32 func_08979878(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_08979878:;
    v1 = a0 << 1;
    v1 = v1 + a0;
    v0 = D_08C291FC - (-28164);
    v0 = v0 - 28164;
    v1 = v1 << 2;
    v1 = v1 + v0;
    v0 = LD32(v1+4);
    return v0;
}

/* 08979898 */
u32 func_08979898(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_08979898:;
    v1 = a0 << 1;
    v1 = v1 + a0;
    v0 = D_08C291FC - (-28164);
    v0 = v0 - 28164;
    v1 = v1 << 2;
    v1 = v1 + v0;
    v0 = LD32(v1+8);
    return v0;
}

/* 089798B8 */
u64 func_089798B8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089798B8:;
    sp = sp - 32;
    v0 = D_08C291F4 - (-28172);
    s2 = a0 + 0;
    s1 = a2 + 0;
    s0 = a1 + 0;
    v1 = LD32(v0-28172);
    v1 = a0 < v1;
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08979970; }
    goto L_089798F0;
L_089798F0:;
    v0 = (s32)s0 < 6;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08979974; }
    goto L_089798FC;
L_089798FC:;
    v0 = (s32)a2 < 2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08979978; }
    goto L_08979908;
L_08979908:;
    v0 = func_08978738(a0);
    goto L_08979910;
L_08979910:;
    s3 = v0 + 0;
    v0 = (s32)s0 < 4;
    cnd_ = v0 != 0;
    a1 = s3 + 0;
    if (cnd_) { goto L_089799C0; }
    goto L_08979920;
L_08979920:;
    a1 = D_08C292BC - (-27972);
    goto L_08979924;
L_08979924:;
    a0 = LD32(a1-27972);
    v0 = a0 < 0x10u;
    cnd_ = v0 == 0;
    v0 = a0 << 1;
    if (cnd_) { goto L_089799B0; }
    goto L_08979934;
L_08979934:;
    v0 = v0 + a0;
    v1 = D_08C291FC - (-28164);
    v1 = v1 - 28164;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = a0 + 1;
    v1 = 1;
    ST32(a1-27972, a0);
    ST32(v0+8, s1);
    ST32(v0, s2);
    cnd_ = a0 == v1;
    ST32(v0+4, s0);
    if (cnd_) { goto L_08979990; }
    goto L_08979964;
L_08979964:;
    { u64 r_ = func_08979AF8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897996C;
L_0897996C:;
    a1 = 1;
    goto L_08979970;
L_08979970:;
    goto L_08979974;
L_08979974:;
    goto L_08979978;
L_08979978:;
    v0 = a1 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08979990:;
    v0 = D_08C28DC4 - (-29244);
    v1 = LD32(v0-29244);
    cnd_ = v1 == a0;
    if (cnd_) { goto L_08979964; }
    goto L_089799A0;
L_089799A0:;
    func_089797D4();
    goto L_089799A8;
L_089799A8:;
    goto L_08979964;
L_089799B0:;
    { u64 r_ = func_08979AF8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089799B8;
L_089799B8:;
    a1 = 0 + 0;
    goto L_08979970;
L_089799C0:;
    a0 = s0 + 0;
    { u64 r_ = func_08977280(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089799C8;
L_089799C8:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08979970; }
    goto L_089799D0;
L_089799D0:;
    a1 = s3 + 0;
    a0 = s1 + 0;
    { u64 r_ = func_0897724C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089799DC;
L_089799DC:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08979970; }
    goto L_089799E4;
L_089799E4:;
    a1 = D_08C292BC - (-27972);
    goto L_08979924;
}

/* 089799EC */
u64 func_089799EC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089799EC:;
    sp = sp - 16;
    s1 = D_08C292C0 - (-27968);
    v0 = LD32(s1-27968);
    s0 = a0 + 0;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08979AC8; }
    goto L_08979A0C;
L_08979A0C:;
    t4 = D_08C292BC - (-27972);
    goto L_08979A10;
L_08979A10:;
    v0 = LD32(t4-27972);
    t0 = s0 + 0;
    a2 = v0 - 1;
    v1 = s0 < a2;
    cnd_ = v1 == 0;
    ST32(t4-27972, a2);
    if (cnd_) { goto L_08979A74; }
    goto L_08979A28;
L_08979A28:;
    v1 = s0 << 1;
    v0 = D_08C291FC - (-28164);
    t3 = v0 - 28164;
    v1 = v1 + s0;
    t1 = a2 + 0;
    a3 = v1 << 2;
    t2 = t3 + 12;
    goto L_08979A44;
L_08979A44:;
    a1 = a3 + t2;
    v0 = LD32(a1);
    a0 = a3 + t3;
    t0 = t0 + 1;
    ST32(a0, v0);
    a2 = t0 < t1;
    a3 = a3 + 12;
    v0 = LD32(a1+4);
    ST32(a0+4, v0);
    v1 = LD32(a1+8);
    cnd_ = a2 != 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08979A44; }
    goto L_08979A74;
L_08979A74:;
    v1 = LD32(s1-27968);
    v0 = s0 < v1;
    cnd_ = v0 == 0;
    a0 = D_08C292C0 - (-27968);
    if (cnd_) { goto L_08979A8C; }
    goto L_08979A84;
L_08979A84:;
    v0 = v1 - 1;
    ST32(s1-27968, v0);
    goto L_08979A8C;
L_08979A8C:;
    v1 = LD32(t4-27972);
    cnd_ = v1 == 0;
    if (cnd_) { ST32(a0-27968, 0); goto L_08979AAC; }
    goto L_08979A98;
L_08979A98:;
    v0 = LD32(a0-27968);
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    v0 = v1 - 1;
    if (cnd_) { goto L_08979AAC; }
    goto L_08979AA8;
L_08979AA8:;
    ST32(a0-27968, v0);
    goto L_08979AAC;
L_08979AAC:;
    { u64 r_ = func_08979AF8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08979AB4;
L_08979AB4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08979AC8:;
    func_089797D4();
    goto L_08979AD0;
L_08979AD0:;
    t4 = D_08C292BC - (-27972);
    goto L_08979A10;
}

/* 08979AD8 */
void func_08979AD8(void)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08979AD8:;
    sp = sp - 16;
    v0 = D_08C292BC - (-27972);
    ST32(v0-27972, 0);
    { u64 r_ = func_08979AF8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08979AEC;
L_08979AEC:;
    sp = sp + 16;
    return;
}

/* 08979AF8 */
u64 func_08979AF8(void)
{
    u32 v0 = 0, v1 = 0;
L_08979AF8:;
    v0 = D_08C292BC - (-27972);
    v1 = LD32(v0-27972);
    v0 = D_08C2D3D2 - (-11310);
    v1 = v1 < 0x10u;
    v1 = v1 ^ 0x1;
    ST8(v0-11310, v1);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08979B14 */
void func_08979B14(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, s0 = 0;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_08979B14:;
    sp = sp - 272;
    a1 = 256;
    s0 = a0 + 0;
    a0 = sp + 0;
    func_08978C4C(a0, a1);
    goto L_08979B30;
L_08979B30:;
    v0 = func_08978CCC();
    goto L_08979B38;
L_08979B38:;
    a2 = v0 + 0;
    a0 = s0 + 0;
    a1 = sp + 0;
    func_08979B58(a0, a1, a2, 0, 0, 0);
    goto L_08979B48;
L_08979B48:;
    sp = sp + 272;
    return;
}

/* 08979B58 */
void func_08979B58(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08979B58:;
    sp = sp - 16;
    v0 = 100;
    s1 = D_08ADC848 - (-14264);
    s1 = s1 - 14264;
    ST32(a0, v0);
    t0 = a1 + 0;
    a3 = 1;
    s0 = a0 + 0;
    a1 = s1 + 0;
    a0 = a0 + 4;
    s2 = a2 + 0;
    s0 = s0 + 68;
    a2 = 64;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08979BA0;
L_08979BA0:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    t0 = s2 + 0;
    a2 = 32;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08979BB8;
L_08979BB8:;
    sp = sp + 16;
    return;
}

/* 08979BD0 */
u32 func_08979BD0(u32 a0)
{
    u32 v0 = 0;
L_08979BD0:;
    v0 = LD32(a0);
    v0 = v0 ^ 0x64;
    v0 = v0 < 0x1u;
    return v0;
}

/* 08979BE0 */
u32 func_08979BE0(u32 a0)
{
    u32 v0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08979BE0:;
    sp = sp - 16;
    s0 = a0 + 0;
    s0 = s0 + 4;
    v0 = func_08979BD0(a0);
    goto L_08979BF8;
L_08979BF8:;
    cnd_ = v0 != 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_08979C0C; }
    goto L_08979C00;
L_08979C00:;
    v0 = D_08ADD91C - (-9956);
    s0 = v0 - 9956;
    v0 = s0 + 0;
    goto L_08979C0C;
L_08979C0C:;
    sp = sp + 16;
    return v0;
}

/* 08979C1C */
u32 func_08979C1C(u32 a0)
{
    u32 v0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08979C1C:;
    sp = sp - 16;
    s0 = a0 + 0;
    s0 = s0 + 68;
    v0 = func_08979BD0(a0);
    goto L_08979C34;
L_08979C34:;
    cnd_ = v0 != 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_08979C48; }
    goto L_08979C3C;
L_08979C3C:;
    v0 = D_08ADD91C - (-9956);
    s0 = v0 - 9956;
    v0 = s0 + 0;
    goto L_08979C48;
L_08979C48:;
    sp = sp + 16;
    return v0;
}

/* 08979C58 */
u64 func_08979C58(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08979C58:;
    a2 = D_08C29B54 - (-25772);
    v1 = LD32(a2-25772);
    v0 = D_08C2933C - (-27844);
    a1 = 1;
    cnd_ = v1 != 0;
    a0 = v0 - 27844;
    if (cnd_) { goto L_08979C8C; }
    goto L_08979C70;
L_08979C70:;
    ST32(a2-25772, a1);
    ST32(a0+144, a1);
    ST32(a0+88, a1);
    ST32(a0+116, a1);
    goto L_08979C80;
L_08979C80:;
    v0 = 1;
    ST8(a0+6, v0);
    return (u64)v0 | ((u64)v1 << 32);
L_08979C8C:;
    ST32(a2-25772, 0);
    ST32(a0+88, 0);
    ST32(a0+116, 0);
    ST32(a0+144, 0);
    goto L_08979C80;
}

/* 08979CA0 */
void func_08979CA0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08979CA0:;
    sp = sp - 16;
    v0 = D_08C29B58 - (-25768);
    s0 = a0 + 0;
    ST32(v0-25768, a0);
    func_089CE20C(a0, t1, t2, t3);
    goto L_08979CBC;
L_08979CBC:;
    a0 = s0 + 0;
    func_0899F054(a0, 0, 0, 0);
    goto L_08979CC4;
L_08979CC4:;
    sp = sp + 16;
    return;
}

/* 08979CD4 */
u64 func_08979CD4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08979CD4:;
    v1 = D_08C2932C - (-27860);
    v0 = LD_U8(v1-27860);
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    v0 = D_08C2932D - (-27859);
    if (cnd_) { goto L_08979CF4; }
    goto L_08979CE8;
L_08979CE8:;
    v0 = D_08C294D0 - (-27440);
    ST32(v0-27440, a0);
    return (u64)v0 | ((u64)v1 << 32);
L_08979CF4:;
    v1 = LD_U8(v0-27859);
    cnd_ = v1 == 0;
    v0 = D_08C294D8 - (-27432);
    if (cnd_) { goto L_08979D0C; }
    goto L_08979D00;
L_08979D00:;
    v0 = D_08C294D4 - (-27436);
    ST32(v0-27436, a0);
    return (u64)v0 | ((u64)v1 << 32);
L_08979D0C:;
    ST32(v0-27432, a0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08979D14 */
u32 func_08979D14(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08979D14:;
    v1 = D_08C2932C - (-27860);
    v0 = LD_U8(v1-27860);
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = D_08C2932D - (-27859); goto L_08979D34; }
    goto L_08979D28;
L_08979D28:;
    v0 = D_08C294D0 - (-27440);
    v0 = LD32(v0-27440);
    return v0;
L_08979D34:;
    v1 = LD_U8(v0-27859);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = D_08C294D8 - (-27432); goto L_08979D4C; }
    goto L_08979D40;
L_08979D40:;
    v0 = D_08C294D4 - (-27436);
    v0 = LD32(v0-27436);
    return v0;
L_08979D4C:;
    v0 = LD32(v0-27432);
    return v0;
}

/* 08979D54 */
void func_08979D54(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
L_08979D54:;
    v0 = D_08C2933C - (-27844);
    v0 = v0 - 27844;
    v0 = v0 + 392;
    a2 = LD32(v0+20);
    a1 = LD32(v0+16);
    a0 = LD32(v0+12);
    v1 = D_08C29B48 - (-25784);
    v0 = v1 - 25784;
    ST32(v1-25784, a0);
    ST32(v0+8, a2);
    ST32(v0+4, a1);
    return;
}

/* 08979D84 */
void func_08979D84(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
L_08979D84:;
    v0 = D_08C29B48 - (-25784);
    v1 = v0 - 25784;
    a2 = LD32(v0-25784);
    a0 = LD32(v1+8);
    a1 = LD32(v1+4);
    v0 = D_08C2933C - (-27844);
    v0 = v0 - 27844;
    v0 = v0 + 392;
    ST32(v0+20, a0);
    ST32(v0+12, a2);
    ST32(v0+16, a1);
    return;
}

/* 08979DB4 */
float func_08979DB4(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08979DB4:;
    v1 = D_08C2932C - (-27860);
    v0 = LD_U8(v1-27860);
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    v0 = D_08C2932D - (-27859);
    if (cnd_) { goto L_08979DD4; }
    goto L_08979DC8;
L_08979DC8:;
    v0 = D_08C294C4 - (-27452);
    f0 = BITSF(LD32(v0-27452));
    return f0;
L_08979DD4:;
    v1 = LD_U8(v0-27859);
    cnd_ = v1 == 0;
    v0 = D_08C294CC - (-27444);
    if (cnd_) { goto L_08979DEC; }
    goto L_08979DE0;
L_08979DE0:;
    v0 = D_08C294C8 - (-27448);
    f0 = BITSF(LD32(v0-27448));
    return f0;
L_08979DEC:;
    f0 = BITSF(LD32(v0-27444));
    return f0;
}

/* 08979DF4 */
u32 func_08979DF4(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08979DF4:;
    v1 = D_08C2932C - (-27860);
    v0 = LD_U8(v1-27860);
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = D_08C294DC - (-27428); goto L_08979E14; }
    goto L_08979E08;
L_08979E08:;
    v0 = D_08C29370 - (-27792);
    v0 = LD32(v0-27792);
    return v0;
L_08979E14:;
    v0 = LD32(v0-27428);
    return v0;
}

/* 08979E1C */
u64 func_08979E1C(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08979E1C:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08979E38; }
    goto L_08979E2C;
L_08979E2C:;
    v0 = D_08C29B5C - (-25764);
    v1 = LD_U8(v0-25764);
    v0 = 0 < v1;
    goto L_08979E38;
L_08979E38:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08979E40 */
u64 func_08979E40(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08979E40:;
    sp = sp - 16;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    v0 = v0 < 0x1u;
    s0 = a1 < 0x1u;
    a3 = D_08C291C0 - (-28224);
    s1 = a0 + 0;
    t0 = D_08C291D0 - (-28208);
    t1 = D_08C291E0 - (-28192);
    a0 = D_08C2933C - (-27844);
    v0 = s0 & v0;
    a0 = a0 - 27844;
    v1 = a3 - 28224;
    a1 = t0 - 28208;
    cnd_ = v0 == 0;
    a2 = t1 - 28192;
    if (cnd_) { goto L_08979F18; }
    goto L_08979E8C;
L_08979E8C:;
    v0 = D_08AEE408 - (-7160);
    f4 = BITSF(LD32(v0-7160));
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
    ST32(a2+12, FBITS(f1));
    ST32(a1+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a1+8, FBITS(f3));
    ST32(a1+12, FBITS(f1));
    ST32(a2+8, FBITS(f1));
    ST32(a2+4, FBITS(f1));
    ST32(a3-28224, FBITS(f2));
    ST32(t0-28208, FBITS(f6));
    ST32(t1-28192, FBITS(f1));
    { u64 r_ = func_08977628(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08979F18;
L_08979F18:;
    v0 = s1 < 0x1u;
    a0 = D_08C2933C - (-27844);
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    a0 = a0 - 27844;
    if (cnd_) { goto L_08979F40; }
    goto L_08979F2C;
L_08979F2C:;
    goto L_08979F30;
L_08979F30:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08979F40:;
    { rv_t r_ = func_08977684(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08979F48;
L_08979F48:;
    goto L_08979F30;
}

/* 08979F50 */
rv_t func_08979F50(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08979F50:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_08979E40(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08979F64;
L_08979F64:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08979F70 */
rv_t func_08979F70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08979F70:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_08979E40(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08979F84;
L_08979F84:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08979F90 */
void func_08979F90(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08979F90:;
    sp = sp - 80;
    s0 = 0 + 0;
    v0 = func_08A698FC(a2, a3, t0, t1, t2, t3);
    goto L_08979FAC;
L_08979FAC:;
    a0 = v0 + 0;
    v1 = D_08C29CE0 - (-25376);
    ST32(v1-25376, v0);
    func_08834124(a0, 0, 0, 0);
    goto L_08979FBC;
L_08979FBC:;
    v0 = func_08834420();
    goto L_08979FC4;
L_08979FC4:;
    a0 = 1;
    s2 = v0 + 0;
    func_08834414(a0);
    goto L_08979FD0;
L_08979FD0:;
    v1 = D_08B1BB60 - (-17568);
    v0 = LD32(v1-17568);
    cnd_ = v0 == 0;
    s1 = v1 - 17568;
    if (cnd_) { goto L_0897A00C; }
    goto L_08979FE0;
L_08979FE0:;
    a0 = 0 + 0;
    v0 = a0 + s1;
    goto L_08979FE8;
L_08979FE8:;
    a0 = LD32(v0);
    s0 = s0 + 1;
    { rv_t r_ = func_08827B7C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08979FF4;
L_08979FF4:;
    v1 = s0 << 2;
    v0 = v1 + s1;
    a0 = v1 + 0;
    v1 = LD32(v0);
    cnd_ = v1 != 0;
    v0 = a0 + s1;
    if (cnd_) { goto L_08979FE8; }
    goto L_0897A00C;
L_0897A00C:;
    a0 = s2 + 0;
    func_08834414(a0);
    goto L_0897A014;
L_0897A014:;
    v0 = func_088342C0();
    goto L_0897A01C;
L_0897A01C:;
    a0 = v0 + 0;
    v0 = func_088342EC(a0);
    goto L_0897A024;
L_0897A024:;
    a1 = D_08ADDAF4 - (-9484);
    t0 = v0 + 0;
    a0 = sp + 0;
    a2 = 50;
    a3 = 1;
    a1 = a1 - 9484;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897A040;
L_0897A040:;
    a0 = sp + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_08827BEC(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897A04C;
L_0897A04C:;
    sp = sp + 80;
    return;
}

/* 0897A064 */
u32 func_0897A064(u32 a0, u32 a1)
{
    u32 v0 = 0, a3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897A064:;
    v0 = D_08ADDB14 - (-9452);
    sp = sp - 16;
    a3 = v0 - 9452;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_0897A090; }
    goto L_0897A07C;
L_0897A07C:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0897A0A0; }
    goto L_0897A084;
L_0897A084:;
    v0 = func_08834304(a0);
    goto L_0897A08C;
L_0897A08C:;
    a3 = v0 + 0;
    goto L_0897A090;
L_0897A090:;
    v0 = a3 + 0;
    sp = sp + 16;
    return v0;
L_0897A0A0:;
    v0 = func_0883458C(a0, a1);
    goto L_0897A0A8;
L_0897A0A8:;
    a3 = v0 + 0;
    goto L_0897A090;
}

/* 0897A0B0 */
u32 func_0897A0B0(u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897A0B0:;
    sp = sp - 16;
    a0 = 200;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897A0CC;
L_0897A0CC:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    func_0897A444(a0, a1, 0, 0, 0);
    goto L_0897A0DC;
L_0897A0DC:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 0897A0F4 */
float func_0897A0F4(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
L_0897A0F4:;
    v0 = D_08AEE40C - (-7156);
    v1 = D_08AEE410 - (-7152);
    f1 = BITSF(LD32(v0-7156));
    f0 = BITSF(LD32(v1-7152));
    f0 = f1 * f0;
    return f0;
}

/* 0897A10C */
u32 func_0897A10C(void)
{
    u32 v0 = 0;
L_0897A10C:;
    v0 = 0 + 0;
    return v0;
}

/* 0897A114 */
rv_t func_0897A114(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0897A114:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C29CE4 - (-25372);
    t1 = D_08C29CF4 - (-25356);
    t2 = D_08C29D04 - (-25340);
    a1 = a1 & a0;
    v1 = t0 - 25372;
    a2 = t1 - 25356;
    cnd_ = a1 == 0;
    a3 = t2 - 25340;
    if (cnd_) { goto L_0897A1CC; }
    goto L_0897A144;
L_0897A144:;
    v0 = D_08AEE414 - (-7148);
    f4 = BITSF(LD32(v0-7148));
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
    ST32(t0-25372, FBITS(f2));
    ST32(t1-25356, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-25340, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0897A1CC;
L_0897A1CC:;
    return (rv_t){ v0, v1, f0 };
}

/* 0897A1D4 */
rv_t func_0897A1D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897A1D4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0897A114(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897A1E8;
L_0897A1E8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897A1F4 */
u32 func_0897A1F4(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897A1F4:;
    sp = sp - 16;
    v0 = 2;
    a1 = a1 & 0xff;
    s1 = a2 + 0;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_0897A21C; }
    goto L_0897A214;
L_0897A214:;
    cnd_ = a1 == 0;
    a0 = 160;
    if (cnd_) { goto L_0897A238; }
    goto L_0897A21C;
L_0897A21C:;
    v1 = 0 + 0;
    goto L_0897A220;
L_0897A220:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_0897A238:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897A240;
L_0897A240:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = 2;
    s0 = v0 + 0;
    func_08840060(a0, a1, a2);
    goto L_0897A254;
L_0897A254:;
    v0 = D_08AF9A38 - (-26056);
    v0 = v0 - 26056;
    v1 = s0 + 0;
    ST32(s0, v0);
    goto L_0897A220;
}

/* 0897A268 */
rv_t func_0897A268(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0897A268:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C29D14 - (-25324);
    t1 = D_08C29D24 - (-25308);
    t2 = D_08C29D34 - (-25292);
    a1 = a1 & a0;
    v1 = t0 - 25324;
    a2 = t1 - 25308;
    cnd_ = a1 == 0;
    a3 = t2 - 25292;
    if (cnd_) { goto L_0897A320; }
    goto L_0897A298;
L_0897A298:;
    v0 = D_08AEE418 - (-7144);
    f4 = BITSF(LD32(v0-7144));
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
    ST32(t0-25324, FBITS(f2));
    ST32(t1-25308, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-25292, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0897A320;
L_0897A320:;
    return (rv_t){ v0, v1, f0 };
}

/* 0897A328 */
rv_t func_0897A328(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897A328:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0897A268(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897A33C;
L_0897A33C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897A348 */
u32 func_0897A348(void)
{
    u32 v0 = 0;
L_0897A348:;
    v0 = 0 + 0;
    return v0;
}

/* 0897A350 */
u64 func_0897A350(void)
{
    u32 v0 = 0, v1 = 0;
L_0897A350:;
    v1 = D_08C2937B - (-27781);
    v0 = LD_U8(v1-27781);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0897A35C */
u32 func_0897A35C(void)
{
    u32 v0 = 0;
L_0897A35C:;
    v0 = (u32)-1;
    return v0;
}

/* 0897A364 */
rv_t func_0897A364(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0897A364:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C29D44 - (-25276);
    t1 = D_08C29D54 - (-25260);
    t2 = D_08C29D64 - (-25244);
    a1 = a1 & a0;
    v1 = t0 - 25276;
    a2 = t1 - 25260;
    cnd_ = a1 == 0;
    a3 = t2 - 25244;
    if (cnd_) { goto L_0897A41C; }
    goto L_0897A394;
L_0897A394:;
    v0 = D_08AEE428 - (-7128);
    f4 = BITSF(LD32(v0-7128));
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
    ST32(t0-25276, FBITS(f2));
    ST32(t1-25260, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-25244, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0897A41C;
L_0897A41C:;
    return (rv_t){ v0, v1, f0 };
}

/* 0897A424 */
rv_t func_0897A424(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897A424:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0897A364(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897A438;
L_0897A438:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897A444 */
void func_0897A444(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897A444:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_0883C4A4(a0, a1, t1, t2, t3);
    goto L_0897A458;
L_0897A458:;
    v0 = D_08AEE430 - (-7120);
    f0 = BITSF(LD32(v0-7120));
    v0 = D_08AF9AD0 - (-25904);
    v0 = v0 - 25904;
    v1 = 63;
    ST32(s0+196, FBITS(f0));
    ST32(s0, v0);
    ST32(s0+188, v1);
    ST8(s0+192, 0);
    sp = sp + 16;
    return;
}

/* 0897A48C */
rv_t func_0897A48C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897A48C:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0883E2B0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897A4A0;
L_0897A4A0:;
    cnd_ = v0 == 0;
    a0 = D_08C2C3E5 - (-15387);
    if (cnd_) { goto L_0897A4D8; }
    goto L_0897A4A8;
L_0897A4A8:;
    v0 = LD_U8(a0-15387);
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_0897A4C0; }
    goto L_0897A4B4;
L_0897A4B4:;
    v1 = 1;
    ST8(s0+192, v0);
    ST8(a0-15387, v1);
    goto L_0897A4C0;
L_0897A4C0:;
    func_08A02BCC();
    goto L_0897A4C8;
L_0897A4C8:;
    { u64 r_ = func_089FB730(0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897A4D0;
L_0897A4D0:;
    a0 = 1;
    { u64 r_ = func_0895EF40(a0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897A4D8;
L_0897A4D8:;
    a0 = s0 + 0;
    { rv_t r_ = func_0883D550(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897A4E0;
L_0897A4E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897A4F0 */
rv_t func_0897A4F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897A4F0:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0883D888(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897A504;
L_0897A504:;
    a0 = s0 + 0;
    { rv_t r_ = func_0883E2B0(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897A50C;
L_0897A50C:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0897A530; }
    goto L_0897A514;
L_0897A514:;
    v0 = LD_U8(s0+192);
    cnd_ = v0 == 0;
    v0 = D_08C2C3E5 - (-15387);
    if (cnd_) { goto L_0897A528; }
    goto L_0897A520;
L_0897A520:;
    ST8(v0-15387, 0);
    ST8(s0+192, 0);
    goto L_0897A528;
L_0897A528:;
    { u64 r_ = func_0895EF40(a0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897A530;
L_0897A530:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897A540 */
rv_t func_0897A540(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0897A540:;
    sp = sp - 32;
    s0 = a1 + 0;
    s2 = a0 + 0;
    s1 = a2 + 0;
    { rv_t r_ = func_0881E494(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897A564;
L_0897A564:;
    a0 = s1 + 0;
    v0 = LD32(s0+8);
    a1 = sp + 0;
    a2 = 4;
    v0 = (s32)v0 < 18;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0897A598; }
    goto L_0897A580;
L_0897A580:;
    goto L_0897A584;
L_0897A584:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0897A598:;
    ST32(sp, 0);
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897A5A0;
L_0897A5A0:;
    a1 = s2 + 188;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897A5B4;
L_0897A5B4:;
    goto L_0897A584;
}

/* 0897A5BC */
rv_t func_0897A5BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897A5BC:;
    sp = sp - 16;
    { rv_t r_ = func_0881E86C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897A5CC;
L_0897A5CC:;
    v0 = v0 + 8;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897A5DC */
rv_t func_0897A5DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0897A5DC:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_0881EBBC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897A5F8;
L_0897A5F8:;
    a2 = sp + 0;
    ST32(sp, 0);
    a1 = 0 + 0;
    goto L_0897A604;
L_0897A604:;
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
    if (cnd_) { goto L_0897A604; }
    goto L_0897A62C;
L_0897A62C:;
    v0 = LD32(s1+188);
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, v0);
    goto L_0897A63C;
L_0897A63C:;
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
    if (cnd_) { goto L_0897A63C; }
    goto L_0897A664;
L_0897A664:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0897A678 */
rv_t func_0897A678(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897A678:;
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_0881EF54(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897A694;
L_0897A694:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897A6A0;
L_0897A6A0:;
    a1 = LD32(s1+188);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897A6AC;
L_0897A6AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897A6C0 */
rv_t func_0897A6C0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0897A6C0:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C29D74 - (-25228);
    t1 = D_08C29D84 - (-25212);
    t2 = D_08C29D94 - (-25196);
    a1 = a1 & a0;
    v1 = t0 - 25228;
    a2 = t1 - 25212;
    cnd_ = a1 == 0;
    a3 = t2 - 25196;
    if (cnd_) { goto L_0897A778; }
    goto L_0897A6F0;
L_0897A6F0:;
    v0 = D_08AEE434 - (-7116);
    f4 = BITSF(LD32(v0-7116));
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
    ST32(t0-25228, FBITS(f2));
    ST32(t1-25212, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-25196, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0897A778;
L_0897A778:;
    return (rv_t){ v0, v1, f0 };
}

/* 0897A780 */
rv_t func_0897A780(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897A780:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0897A6C0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897A794;
L_0897A794:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897A7A0 */
void func_0897A7A0(u32 a0)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897A7A0:;
    sp = sp - 16;
    func_0897A7BC(a0);
    goto L_0897A7B0;
L_0897A7B0:;
    sp = sp + 16;
    return;
}

/* 0897A7BC */
void func_0897A7BC(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_0897A7BC:;
    v0 = 999;
    v1 = (u32)-1;
    ST32(a0+8, v0);
    ST32(a0+20, v1);
    ST32(a0+28, 0);
    ST32(a0+4, v0);
    ST32(a0+12, 0);
    ST32(a0+16, v1);
    ST32(a0+24, 0);
    ST32(a0, 0);
    return;
}

/* 0897A7E8 */
rv_t func_0897A7E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, float f12, float f13, float f14)
{
    u32 v0 = 0, v1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 304);
L_0897A7E8:;
    sp = sp - 304;
    s6 = t1 + 0;
    s5 = t0 + 0;
    s4 = a2 + 0;
    s3 = a1 + 0;
    s2 = a0 + 0;
    s1 = a3 + 0;
    f23 = f13;
    f22 = f12;
    f20 = f14;
    func_089D7BC0();
    goto L_0897A85C;
L_0897A85C:;
    a0 = D_08C2A08C - (-24436);
    v0 = 999;
    cnd_ = s1 == v0;
    v1 = a0 - 24436;
    if (cnd_) { goto L_0897AF28; }
    goto L_0897A86C;
L_0897A86C:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24436);
    v0 = v0 - 1;
    v0 = s1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0897A8B0; }
    goto L_0897A890;
L_0897A890:;
    v1 = LD32(a0);
    goto L_0897A894;
L_0897A894:;
    v0 = LD32(v1+4);
    cnd_ = v0 == s1;
    if (cnd_) { v0 = LD32(v1+16); goto L_0897AF30; }
    goto L_0897A8A0;
L_0897A8A0:;
    a0 = LD32(a0+4);
    goto L_0897A8A4;
L_0897A8A4:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0897A894; }
    goto L_0897A8AC;
L_0897A8AC:;
    v1 = 0 + 0;
    goto L_0897A8B0;
L_0897A8B0:;
    cnd_ = v1 == 0;
    s7 = 4;
    if (cnd_) { goto L_0897A8BC; }
    goto L_0897A8B8;
L_0897A8B8:;
    s7 = LD32(v1+88);
    goto L_0897A8BC;
L_0897A8BC:;
    a2 = D_08C2C31C - (-15588);
    v0 = a2 - 15588;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_0897A934; }
    goto L_0897A8E8;
L_0897A8E8:;
    a2 = LD32(a2-15588);
    a3 = a1 + 0;
    goto L_0897A8F0;
L_0897A8F0:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0897A924; }
    goto L_0897A908;
L_0897A908:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_0897A938; }
    goto L_0897A918;
L_0897A918:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0897A908; }
    goto L_0897A924;
L_0897A924:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0897A8F0; }
    goto L_0897A934;
L_0897A934:;
    a0 = LD32(sp+8);
    goto L_0897A938;
L_0897A938:;
    cnd_ = a0 == 0;
    v0 = D_08AEE43C - (-7108);
    if (cnd_) { goto L_0897AA80; }
    goto L_0897A940;
L_0897A940:;
    f24 = BITSF(LD32(v0-7108));
    v1 = D_08AEE440 - (-7104);
    v0 = D_08AEE444 - (-7100);
    f26 = BITSF(LD32(v1-7104));
    f27 = BITSF(LD32(v0-7100));
    fp = sp + 64;
    s0 = LD32(a0);
    goto L_0897A95C;
L_0897A95C:;
    a1 = LD32(s0);
    v1 = LD32(a1-12);
    a0 = s0 + v1;
    v0 = LD32(a0+64);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = sp + 0; goto L_0897AA6C; }
    goto L_0897A978;
L_0897A978:;
    f0 = BITSF(LD32(a0+40));
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    if (cnd_) { a0 = sp + 0; goto L_0897AA6C; }
    goto L_0897A990;
L_0897A990:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = sp + 0; goto L_0897AA6C; }
    goto L_0897A9AC;
L_0897A9AC:;
    cnd_ = fcc;
    if (cnd_) { a0 = sp + 0; goto L_0897AA6C; }
    goto L_0897A9B4;
L_0897A9B4:;
    v1 = LD32(a1-16);
    v1 = s0 + v1;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0897AA6C; }
    goto L_0897A9CC;
L_0897A9CC:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0897AA6C; }
    goto L_0897A9D8;
L_0897A9D8:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0897AA6C; }
    goto L_0897A9E4;
L_0897A9E4:;
    v0 = LD32(v1+4);
    cnd_ = v0 == s4;
    if (cnd_) { a0 = LD32(a1-12); goto L_0897AB78; }
    goto L_0897A9F0;
L_0897A9F0:;
    a0 = LD_U16(v1+8);
    v1 = a0 ^ 0x8005;
    v0 = a0 ^ 0x8003;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s0+12); goto L_0897AA4C; }
    goto L_0897AA10;
L_0897AA10:;
    v1 = a0 ^ 0x8004;
    v0 = a0 ^ 0x8014;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s0+12); goto L_0897AA4C; }
    goto L_0897AA2C;
L_0897AA2C:;
    v1 = a0 ^ 0x801e;
    v0 = a0 ^ 0x801d;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(a1-12); goto L_0897AB78; }
    goto L_0897AA48;
L_0897AA48:;
    v0 = LD32(s0+12);
    goto L_0897AA4C;
L_0897AA4C:;
    v1 = v0 ^ s7;
    v0 = v0 ^ 0x4;
    v0 = 0 < v0;
    v1 = v1 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(a1-12); goto L_0897AB78; }
    goto L_0897AA68;
L_0897AA68:;
    a0 = sp + 0;
    goto L_0897AA6C;
L_0897AA6C:;
    a1 = 1;
    func_08AC0E2C(a0, a1);
    goto L_0897AA74;
L_0897AA74:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_0897A95C; }
    goto L_0897AA80;
L_0897AA80:;
    { rv_t r_ = func_089D7BD0(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897AA88;
L_0897AA88:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0897AB10; }
    goto L_0897AA9C;
L_0897AA9C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0897AB10; }
    goto L_0897AAA8;
L_0897AAA8:;
    v0 = LD32(s1);
    goto L_0897AAAC;
L_0897AAAC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0897AB00; }
    goto L_0897AAC0;
L_0897AAC0:;
    v0 = LD_U8(s0+8);
    goto L_0897AAC4;
L_0897AAC4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0897AB70; }
    goto L_0897AACC;
L_0897AACC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0897AB60; }
    goto L_0897AAD4;
L_0897AAD4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0897AADC;
L_0897AADC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897AAE8;
L_0897AAE8:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0897AAF4;
L_0897AAF4:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0897AAC4; }
    goto L_0897AAFC;
L_0897AAFC:;
    v1 = LD32(s1+4);
    goto L_0897AB00;
L_0897AB00:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0897AAAC; }
    goto L_0897AB10;
L_0897AB10:;
    sp = sp + 304;
    return (rv_t){ v0, v1, f0 };
L_0897AB60:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0897AADC;
L_0897AB70:;
    s0 = LD32(s0+4);
    goto L_0897AAF4;
L_0897AB78:;
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897AB8C;
L_0897AB8C:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f8 = BITSF(LD32(s2));
    f9 = BITSF(LD32(s2+4));
    f10 = BITSF(LD32(s2+8));
    f0 = f3 - f8;
    f1 = f4 - f9;
    f2 = f5 - f10;
    {u32 a_=sp+(160);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    v1 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+16, FBITS(f3));
    a0 = 0 + 0;
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    ST32(sp+32, FBITS(f0));
    f6 = BITSF(v1);
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(v0+16); goto L_0897AC10; }
    goto L_0897AC10;
L_0897AC10:;
    v0 = a0 + 4;
    if (a0 == 0) v0 = 0;
    f0 = BITSF(0);
    cnd_ = v0 == 0;
    {u32 a_=sp+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0897AC80; }
    goto L_0897AC24;
L_0897AC24:;
    f1 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+20));
    f3 = BITSF(LD32(v0+16));
    f0 = f0 - f4;
    f1 = f1 - f5;
    f2 = f2 - f3;
    ST32(sp+52, FBITS(f0));
    v1 = FBITS(f1);
    {v[0]=BITSF(v1);}
    v1 = FBITS(f0);
    {v[1]=BITSF(v1);}
    v1 = FBITS(f2);
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+48, FBITS(f1));
    ST32(sp+56, FBITS(f2));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    f0 = f0 * f24;
    goto L_0897AC80;
L_0897AC80:;
    f0 = f6 - f0;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    a0 = sp + 0;
    if (cnd_) { goto L_0897AA6C; }
    goto L_0897AC94;
L_0897AC94:;
    f11 = BITSF(0);
    ST32(sp+192, 0);
    fcc = FCMP(f11, f0, 14);
    cnd_ = fcc;
    t0 = 0 + 0;
    if (cnd_) { goto L_0897ACB0; }
    goto L_0897ACAC;
L_0897ACAC:;
    f0 = f11;
    goto L_0897ACB0;
L_0897ACB0:;
    cnd_ = v0 == 0;
    f25 = f0;
    if (cnd_) { goto L_0897AEAC; }
    goto L_0897ACB8;
L_0897ACB8:;
    f5 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(v0+12));
    f3 = BITSF(LD32(v0+20));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+16));
    f0 = f0 + f5;
    f1 = f1 + f4;
    f2 = f2 + f3;
    f5 = BITSF(LD32(sp+16));
    f0 = f0 * f24;
    f1 = f1 * f24;
    f2 = f2 * f24;
    f3 = BITSF(LD32(sp+20));
    f4 = BITSF(LD32(sp+24));
    f5 = f5 + f0;
    f3 = f3 + f1;
    f4 = f4 + f2;
    {u32 a_=sp+(208);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f2 = f5 - f8;
    f6 = f3 - f9;
    f7 = f4 - f10;
    t0 = 1;
    v1 = FBITS(f2);
    {v[12]=BITSF(v1);}
    v1 = FBITS(f6);
    {v[13]=BITSF(v1);}
    v1 = FBITS(f7);
    {v[14]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(sp+16, FBITS(f5));
    fcc = FCMP(f0, f11, 2);
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f4));
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, FBITS(f6));
    ST32(sp+56, FBITS(f7));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f6));
    cnd_ = fcc;
    ST32(sp+40, FBITS(f7));
    if (cnd_) { goto L_0897ADA0; }
    goto L_0897AD64;
L_0897AD64:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    f3 = BITSF(v1);
    {v1=FBITS(v[0]);}
    f2 = BITSF(v1);
    ST32(sp+56, FBITS(f3));
    {v1=FBITS(v[1]);}
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v1);
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v1);
    ST32(sp+40, FBITS(f3));
    goto L_0897ADA0;
L_0897ADA0:;
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    f2 = f8 - f0;
    f0 = BITSF(LD32(sp+24));
    f1 = f9 - f1;
    f3 = f10 - f0;
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f3));
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0897AEAC; }
    goto L_0897ADD8;
L_0897ADD8:;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0897AEAC; }
    goto L_0897ADEC;
L_0897ADEC:;
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0897AEAC; }
    goto L_0897AE00;
L_0897AE00:;
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0897AEAC; }
    goto L_0897AE14;
L_0897AE14:;
    f0 = BITSF(LD32(v0+16));
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0897AEAC; }
    goto L_0897AE28;
L_0897AE28:;
    f0 = BITSF(LD32(v0+20));
    fcc = FCMP(f3, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0897AEAC; }
    goto L_0897AE3C;
L_0897AE3C:;
    f25 = f11;
    goto L_0897AE40;
L_0897AE40:;
    v1 = LD32(s0);
    goto L_0897AE44;
L_0897AE44:;
    v0 = LD32(v1-16);
    v1 = 0x8005;
    v0 = s0 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    f21 = f22;
    if (cnd_) { goto L_0897AE60; }
    goto L_0897AE5C;
L_0897AE5C:;
    f21 = f23;
    goto L_0897AE60;
L_0897AE60:;
    a0 = sp + 128;
    func_0897A7A0(a0);
    goto L_0897AE68;
L_0897AE68:;
    f0 = f27 / f20;
    ST32(sp+132, s4);
    a0 = s0 + 0;
    ST32(sp+128, s6);
    ST32(sp+152, s5);
    ST32(sp+136, s1);
    f0 = f25 * f0;
    f0 = f0 * f0;
    f0 = f27 - f0;
    f0 = f21 * f0;
    ST32(sp+140, FBITS(f0));
    v0 = LD32(s0);
    v1 = LD32(v0+8);
    t_ = v1;
    a1 = sp + 128;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897AEA4;
L_0897AEA4:;
    a0 = sp + 0;
    goto L_0897AA6C;
L_0897AEAC:;
    fcc = FCMP(f26, f25, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_0897AED4; }
    goto L_0897AEBC;
L_0897AEBC:;
    ST32(sp+192, v0);
    v1 = LD32(sp+192);
    goto L_0897AEC4;
L_0897AEC4:;
    cnd_ = v1 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0897AA6C; }
    goto L_0897AECC;
L_0897AECC:;
    v1 = LD32(s0);
    goto L_0897AE44;
L_0897AED4:;
    a1 = s2 + 0;
    a2 = sp + 32;
    a3 = s3 + 0;
    f12 = f20;
    a0 = fp + 0;
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_0897AEEC;
L_0897AEEC:;
    a0 = fp + 0;
    { rv_t r_ = func_08834E34(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897AEF4;
L_0897AEF4:;
    a1 = v0 + 0;
    v0 = LD_U8(v0+32);
    cnd_ = v0 != 0;
    v1 = LD32(sp+192);
    if (cnd_) { goto L_0897AEC4; }
    goto L_0897AF04;
L_0897AF04:;
    v1 = LD32(s0);
    a0 = LD32(a1+4);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    cnd_ = a0 != v1;
    v1 = LD32(sp+192);
    if (cnd_) { goto L_0897AEC4; }
    goto L_0897AF20;
L_0897AF20:;
    f25 = BITSF(LD32(a1));
    goto L_0897AE40;
L_0897AF28:;
    s7 = 4;
    goto L_0897A8BC;
L_0897AF30:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0897A8A4; }
    goto L_0897AF3C;
L_0897AF3C:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0897A8A4; }
    goto L_0897AF48;
L_0897AF48:;
    goto L_0897A8B0;
}

/* 0897AF50 */
rv_t func_0897AF50(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0897AF50:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C29DA4 - (-25180);
    t1 = D_08C29DB4 - (-25164);
    t2 = D_08C29DC4 - (-25148);
    a1 = a1 & a0;
    v1 = t0 - 25180;
    a2 = t1 - 25164;
    cnd_ = a1 == 0;
    a3 = t2 - 25148;
    if (cnd_) { goto L_0897B008; }
    goto L_0897AF80;
L_0897AF80:;
    v0 = D_08AEE448 - (-7096);
    f4 = BITSF(LD32(v0-7096));
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
    ST32(t0-25180, FBITS(f2));
    ST32(t1-25164, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-25148, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0897B008;
L_0897B008:;
    return (rv_t){ v0, v1, f0 };
}

/* 0897B010 */
rv_t func_0897B010(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897B010:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0897AF50(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897B024;
L_0897B024:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897B030 */
void func_0897B030(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897B030:;
    f0 = BITSF(0);
    v0 = D_08AF9BC8 - (-25656);
    v0 = v0 - 25656;
    fcc = FCMP(f12, f0, 2);
    sp = sp - 16;
    ST32(a0, v0);
    v1 = a0 + 0;
    a3 = a0 + 32;
    t0 = a0 + 16;
    v0 = 1;
    ST32(a0+4, a2);
    ST32(a0+8, a1);
    cnd_ = fcc;
    ST32(a0+12, FBITS(f12));
    if (cnd_) { goto L_0897B070; }
    goto L_0897B06C;
L_0897B06C:;
    v0 = 0 + 0;
    goto L_0897B070;
L_0897B070:;
    ST32(a3+4, FBITS(f0));
    ST32(a3+12, FBITS(f0));
    ST32(a3+8, FBITS(f0));
    ST32(v1+16, FBITS(f0));
    ST8(v1+48, v0);
    ST32(v1+32, FBITS(f0));
    ST32(t0+4, FBITS(f0));
    ST32(t0+12, FBITS(f0));
    ST32(t0+8, FBITS(f0));
    func_0897D478(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0897B098;
L_0897B098:;
    sp = sp + 16;
    return;
}

/* 0897B0A4 */
rv_t func_0897B0A4(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897B0A4:;
    v0 = D_08AF9BC8 - (-25656);
    v0 = v0 - 25656;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_0897D5D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897B0C0;
L_0897B0C0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897B0CC */
rv_t func_0897B0CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897B0CC:;
    v0 = D_08AF9BC8 - (-25656);
    v0 = v0 - 25656;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_0897D5D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897B0E8;
L_0897B0E8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897B0F4 */
rv_t func_0897B0F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897B0F4:;
    v0 = D_08AF9BC8 - (-25656);
    v0 = v0 - 25656;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0897D5D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897B114;
L_0897B114:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897B11C;
L_0897B11C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897B12C */
rv_t func_0897B12C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897B12C:;
    sp = sp - 16;
    v0 = D_08AEE44C - (-7092);
    f1 = BITSF(LD32(a0+12));
    f0 = BITSF(LD32(v0-7092));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    a1 = a0 + 0;
    if (cnd_) { goto L_0897B17C; }
    goto L_0897B150;
L_0897B150:;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_0897B188; }
    goto L_0897B164;
L_0897B164:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0897B180; }
    goto L_0897B16C;
L_0897B16C:;
    v0 = LD32(a0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897B17C;
L_0897B17C:;
    goto L_0897B180;
L_0897B180:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0897B188:;
    f0 = BITSF(LD32(v0-31328));
    v1 = LD_U8(a0+48);
    f0 = f1 - f0;
    cnd_ = v1 != 0;
    ST32(a0+12, FBITS(f0));
    if (cnd_) { goto L_0897B17C; }
    goto L_0897B19C;
L_0897B19C:;
    v0 = D_08AEE450 - (-7088);
    f1 = BITSF(LD32(v0-7088));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_0897B1B4; }
    goto L_0897B1B4;
L_0897B1B4:;
    f0 = BITSF(LD32(a1+44));
    f0 = f0 * f1;
    ST32(a1+28, FBITS(f0));
    goto L_0897B17C;
}

/* 0897B1C4 */
rv_t func_0897B1C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0897B1C4:;
    sp = sp - 32;
    s3 = a2 + 0;
    a2 = t0 + 0;
    s2 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    s0 = a3 + 0;
    func_0897B030(a0, a1, a2, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0897B1F8;
L_0897B1F8:;
    f0 = BITSF(LD32(s2+8));
    f2 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s2+4));
    v0 = s1 + 52;
    ST32(v0+8, FBITS(f0));
    v1 = s1 + 32;
    a0 = s1 + 16;
    ST32(v0+4, FBITS(f1));
    v0 = D_08AF9BB0 - (-25680);
    v0 = v0 - 25680;
    ST32(s1+52, FBITS(f2));
    f0 = BITSF(LD32(s3));
    ST32(s1, v0);
    ST32(s1+64, FBITS(f0));
    f4 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s0+12));
    ST32(s1+32, FBITS(f4));
    ST32(v1+12, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    f0 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s0+12));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    ST32(s1+16, FBITS(f0));
    ST32(a0+12, FBITS(f3));
    ST32(a0+4, FBITS(f1));
    ST32(a0+8, FBITS(f2));
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0897B28C */
rv_t func_0897B28C(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0897B28C:;
    sp = sp - 48;
    s4 = a1 + 0;
    s3 = a2 + 0;
    s2 = a3 + 0;
    s1 = a0 + 0;
    s0 = 0 + 0;
    f20 = f12;
    { u64 r_ = func_0897D6FC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897B2C8;
L_0897B2C8:;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0897B34C; }
    goto L_0897B2D0;
L_0897B2D0:;
    { u64 r_ = func_0897D3F4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897B2D8;
L_0897B2D8:;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0897B2EC; }
    goto L_0897B2E0;
L_0897B2E0:;
    v0 = LD32(v0+8);
    cnd_ = v0 != 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_0897B350; }
    goto L_0897B2EC;
L_0897B2EC:;
    { u64 r_ = func_0897D3F4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897B2F4;
L_0897B2F4:;
    a1 = v0 + 52;
    v1 = v0 + 32;
    cnd_ = v0 == 0;
    a0 = 68;
    if (cnd_) { goto L_0897B374; }
    goto L_0897B304;
L_0897B304:;
    ST32(v0+12, FBITS(f20));
    f1 = BITSF(LD32(s1+8));
    f2 = BITSF(LD32(s1));
    f0 = BITSF(LD32(s1+4));
    ST32(a1+8, FBITS(f1));
    ST32(a1+4, FBITS(f0));
    ST32(v0+52, FBITS(f2));
    f0 = BITSF(LD32(s4));
    ST32(v0+64, FBITS(f0));
    f1 = BITSF(LD32(s3+12));
    f0 = BITSF(LD32(s3));
    f2 = BITSF(LD32(s3+4));
    f3 = BITSF(LD32(s3+8));
    ST32(v1+12, FBITS(f1));
    ST32(v0+32, FBITS(f0));
    ST32(v1+4, FBITS(f2));
    ST32(v1+8, FBITS(f3));
    goto L_0897B348;
L_0897B348:;
    s0 = v0 + 0;
    goto L_0897B34C;
L_0897B34C:;
    v0 = s0 + 0;
    goto L_0897B350;
L_0897B350:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0897B374:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897B37C;
L_0897B37C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = s4 + 0;
    a3 = s3 + 0;
    f12 = f20;
    t0 = s2 + 0;
    { rv_t r_ = func_0897B1C4(a0, a1, a2, a3, t0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897B39C;
L_0897B39C:;
    v0 = s0 + 0;
    goto L_0897B348;
}

/* 0897B3A4 */
rv_t func_0897B3A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0897B3A4:;
    sp = sp - 80;
    f2 = BITSF(0);
    s5 = a0 + 52;
    s2 = D_08AEE454 - (-7084);
    s1 = a0 + 16;
    f0 = BITSF(LD32(a0+28));
    f21 = BITSF(LD32(a0+64));
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    f1 = BITSF(LD32(s2-7084));
    if (cnd_) { goto L_0897B408; }
    goto L_0897B3F4;
L_0897B3F4:;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    f2 = f1;
    if (cnd_) { goto L_0897B408; }
    goto L_0897B404;
L_0897B404:;
    f2 = f0;
    goto L_0897B408;
L_0897B408:;
    s3 = D_08AEE458 - (-7080);
    f0 = BITSF(LD32(s3-7080));
    f1 = BITSF(0);
    f2 = f2 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    s4 = D_08AEE45C - (-7076);
    if (cnd_) { goto L_0897B580; }
    goto L_0897B428;
L_0897B428:;
    f0 = BITSF(LD32(s4-7076));
    f0 = f2 + f0;
    goto L_0897B430;
L_0897B430:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s2-7084));
    a0 = s1 + 0;
    v0 = FBITS(f1);
    a1 = sp + 0;
    a2 = sp + 4;
    ST32(sp+4, FBITS(f0));
    s0 = v0 << 8;
    ST32(sp, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897B45C;
L_0897B45C:;
    f1 = BITSF(LD32(s3-7080));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s4-7076));
    if (cnd_) { goto L_0897B578; }
    goto L_0897B474;
L_0897B474:;
    f0 = f1 + f0;
    goto L_0897B478;
L_0897B478:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s2-7084));
    a0 = s1 + 4;
    v0 = FBITS(f1);
    a1 = sp + 8;
    a2 = sp + 12;
    s0 = s0 + v0;
    ST32(sp+12, FBITS(f0));
    s0 = s0 << 8;
    ST32(sp+8, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897B4A8;
L_0897B4A8:;
    f1 = BITSF(LD32(s3-7080));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s4-7076));
    if (cnd_) { goto L_0897B570; }
    goto L_0897B4C0;
L_0897B4C0:;
    f0 = f1 + f0;
    goto L_0897B4C4;
L_0897B4C4:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s2-7084));
    a0 = s1 + 8;
    v0 = FBITS(f1);
    a1 = sp + 16;
    a2 = sp + 20;
    s0 = s0 + v0;
    ST32(sp+20, FBITS(f0));
    s0 = s0 << 8;
    ST32(sp+16, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897B4F4;
L_0897B4F4:;
    f1 = BITSF(LD32(s3-7080));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s4-7076));
    if (cnd_) { goto L_0897B568; }
    goto L_0897B50C;
L_0897B50C:;
    f0 = f1 + f0;
    goto L_0897B510;
L_0897B510:;
    f0 = BITSF(F2I(f0, 1));
    v0 = D_08B28BE8 - (-29720);
    a0 = LD32(v0-29720);
    a1 = s5 + 0;
    v0 = FBITS(f0);
    f12 = f21;
    a3 = 16;
    s0 = s0 + v0;
    a2 = s0 + 0;
    t0 = 8;
    { rv_t r_ = func_0884A194(a0, a1, a2, a3, t0, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897B53C;
L_0897B53C:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_0897B568:;
    f0 = f1 - f0;
    goto L_0897B510;
L_0897B570:;
    f0 = f1 - f0;
    goto L_0897B4C4;
L_0897B578:;
    f0 = f1 - f0;
    goto L_0897B478;
L_0897B580:;
    f0 = BITSF(LD32(s4-7076));
    f0 = f2 - f0;
    goto L_0897B430;
}

/* 0897B58C */
void func_0897B58C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0897B58C:;
    sp = sp - 32;
    s3 = a2 + 0;
    a2 = t0 + 0;
    s1 = a1 + 0;
    a1 = 0 + 0;
    s2 = a0 + 0;
    s0 = a3 + 0;
    func_0897B030(a0, a1, a2, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0897B5C0;
L_0897B5C0:;
    f0 = BITSF(LD32(s1+8));
    f2 = BITSF(LD32(s1));
    f1 = BITSF(LD32(s1+4));
    v0 = s2 + 52;
    ST32(v0+8, FBITS(f0));
    a0 = s2 + 64;
    v1 = s2 + 32;
    ST32(v0+4, FBITS(f1));
    v0 = D_08AF9B98 - (-25704);
    v0 = v0 - 25704;
    ST32(s2+52, FBITS(f2));
    a1 = s2 + 16;
    f1 = BITSF(LD32(s3+8));
    f2 = BITSF(LD32(s3));
    f0 = BITSF(LD32(s3+4));
    ST32(a0+8, FBITS(f1));
    ST32(a0+4, FBITS(f0));
    ST32(s2+64, FBITS(f2));
    f3 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s0+12));
    ST32(s2+32, FBITS(f3));
    ST32(v1+4, FBITS(f1));
    ST32(v1+12, FBITS(f0));
    ST32(v1+8, FBITS(f2));
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+12));
    f2 = BITSF(LD32(s0+4));
    f3 = BITSF(LD32(s0+8));
    ST32(s2+16, FBITS(f0));
    ST32(s2, v0);
    ST32(a1+12, FBITS(f1));
    ST32(a1+4, FBITS(f2));
    ST32(a1+8, FBITS(f3));
    sp = sp + 32;
    return;
}

/* 0897B668 */
u64 func_0897B668(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0897B668:;
    sp = sp - 32;
    s3 = a2 + 0;
    a2 = t0 + 0;
    s1 = a1 + 0;
    a1 = 0 + 0;
    s2 = a0 + 0;
    s0 = a3 + 0;
    func_0897B030(a0, a1, a2, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0897B69C;
L_0897B69C:;
    f0 = BITSF(LD32(s1+8));
    f2 = BITSF(LD32(s1));
    f1 = BITSF(LD32(s1+4));
    v0 = s2 + 52;
    ST32(v0+8, FBITS(f0));
    a0 = s2 + 64;
    v1 = s2 + 32;
    ST32(v0+4, FBITS(f1));
    v0 = D_08AF9B98 - (-25704);
    v0 = v0 - 25704;
    ST32(s2+52, FBITS(f2));
    a1 = s2 + 16;
    f1 = BITSF(LD32(s3+8));
    f2 = BITSF(LD32(s3));
    f0 = BITSF(LD32(s3+4));
    ST32(a0+8, FBITS(f1));
    ST32(a0+4, FBITS(f0));
    ST32(s2+64, FBITS(f2));
    f3 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s0+12));
    ST32(s2+32, FBITS(f3));
    ST32(v1+4, FBITS(f1));
    ST32(v1+12, FBITS(f0));
    ST32(v1+8, FBITS(f2));
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+12));
    f2 = BITSF(LD32(s0+4));
    f3 = BITSF(LD32(s0+8));
    ST32(s2+16, FBITS(f0));
    ST32(s2, v0);
    ST32(a1+12, FBITS(f1));
    ST32(a1+4, FBITS(f2));
    ST32(a1+8, FBITS(f3));
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0897B744 */
u64 func_0897B744(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0897B744:;
    sp = sp - 48;
    s4 = a2 + 0;
    s3 = a1 + 0;
    s2 = a3 + 0;
    s1 = a0 + 0;
    s0 = 0 + 0;
    f20 = f12;
    { u64 r_ = func_0897D6FC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897B780;
L_0897B780:;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0897B818; }
    goto L_0897B788;
L_0897B788:;
    { u64 r_ = func_0897D3F4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897B790;
L_0897B790:;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0897B7A4; }
    goto L_0897B798;
L_0897B798:;
    v0 = LD32(v0+8);
    cnd_ = v0 != 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_0897B81C; }
    goto L_0897B7A4;
L_0897B7A4:;
    { u64 r_ = func_0897D3F4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897B7AC;
L_0897B7AC:;
    a1 = v0 + 52;
    a2 = v0 + 64;
    v1 = v0 + 32;
    cnd_ = v0 == 0;
    a0 = 76;
    if (cnd_) { goto L_0897B840; }
    goto L_0897B7C0;
L_0897B7C0:;
    ST32(v0+12, FBITS(f20));
    f1 = BITSF(LD32(s1+8));
    f2 = BITSF(LD32(s1));
    f0 = BITSF(LD32(s1+4));
    ST32(a1+8, FBITS(f1));
    ST32(a1+4, FBITS(f0));
    ST32(v0+52, FBITS(f2));
    f1 = BITSF(LD32(s3+8));
    f2 = BITSF(LD32(s3));
    f0 = BITSF(LD32(s3+4));
    ST32(a2+8, FBITS(f1));
    ST32(a2+4, FBITS(f0));
    ST32(v0+64, FBITS(f2));
    f0 = BITSF(LD32(s4+12));
    f1 = BITSF(LD32(s4));
    f2 = BITSF(LD32(s4+4));
    f3 = BITSF(LD32(s4+8));
    ST32(v1+12, FBITS(f0));
    ST32(v0+32, FBITS(f1));
    ST32(v1+4, FBITS(f2));
    ST32(v1+8, FBITS(f3));
    goto L_0897B814;
L_0897B814:;
    s0 = v0 + 0;
    goto L_0897B818;
L_0897B818:;
    v0 = s0 + 0;
    goto L_0897B81C;
L_0897B81C:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_0897B840:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897B848;
L_0897B848:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = s3 + 0;
    a3 = s4 + 0;
    f12 = f20;
    t0 = s2 + 0;
    { u64 r_ = func_0897B668(a0, a1, a2, a3, t0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897B868;
L_0897B868:;
    v0 = s0 + 0;
    goto L_0897B814;
}

/* 0897B870 */
rv_t func_0897B870(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0897B870:;
    sp = sp - 80;
    s3 = D_08AEE460 - (-7072);
    a1 = sp + 0;
    f20 = BITSF(0);
    a2 = sp + 4;
    s4 = D_08AEE464 - (-7068);
    f0 = BITSF(LD32(s3-7072));
    s2 = a0 + 0;
    a0 = a0 + 28;
    s1 = s2 + 16;
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897B8C4;
L_0897B8C4:;
    f1 = BITSF(LD32(s4-7068));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    s5 = D_08AEE468 - (-7064);
    if (cnd_) { goto L_0897BA20; }
    goto L_0897B8DC;
L_0897B8DC:;
    f0 = BITSF(LD32(s5-7064));
    f0 = f1 + f0;
    goto L_0897B8E4;
L_0897B8E4:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s3-7072));
    a0 = s1 + 0;
    v0 = FBITS(f1);
    a1 = sp + 8;
    a2 = sp + 12;
    ST32(sp+12, FBITS(f0));
    s0 = v0 << 8;
    ST32(sp+8, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897B910;
L_0897B910:;
    f1 = BITSF(LD32(s4-7068));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s5-7064));
    if (cnd_) { goto L_0897BA18; }
    goto L_0897B928;
L_0897B928:;
    f0 = f1 + f0;
    goto L_0897B92C;
L_0897B92C:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s3-7072));
    a0 = s1 + 4;
    v0 = FBITS(f1);
    a1 = sp + 16;
    a2 = sp + 20;
    s0 = s0 + v0;
    ST32(sp+20, FBITS(f0));
    s0 = s0 << 8;
    ST32(sp+16, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897B95C;
L_0897B95C:;
    f1 = BITSF(LD32(s4-7068));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s5-7064));
    if (cnd_) { goto L_0897BA10; }
    goto L_0897B974;
L_0897B974:;
    f0 = f1 + f0;
    goto L_0897B978;
L_0897B978:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s3-7072));
    a0 = s1 + 8;
    v0 = FBITS(f1);
    a1 = sp + 24;
    a2 = sp + 28;
    s0 = s0 + v0;
    ST32(sp+28, FBITS(f0));
    s0 = s0 << 8;
    ST32(sp+24, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897B9A8;
L_0897B9A8:;
    f1 = BITSF(LD32(s4-7068));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s5-7064));
    if (cnd_) { goto L_0897BA08; }
    goto L_0897B9C0;
L_0897B9C0:;
    f0 = f1 + f0;
    goto L_0897B9C4;
L_0897B9C4:;
    f0 = BITSF(F2I(f0, 1));
    a1 = s2 + 64;
    a0 = s2 + 52;
    v0 = FBITS(f0);
    s0 = s0 + v0;
    a2 = s0 + 0;
    func_088CF39C();
    goto L_0897B9E0;
L_0897B9E0:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_0897BA08:;
    f0 = f1 - f0;
    goto L_0897B9C4;
L_0897BA10:;
    f0 = f1 - f0;
    goto L_0897B978;
L_0897BA18:;
    f0 = f1 - f0;
    goto L_0897B92C;
L_0897BA20:;
    f0 = BITSF(LD32(s5-7064));
    f0 = f1 - f0;
    goto L_0897B8E4;
}

/* 0897BA2C */
void func_0897BA2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897BA2C:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_0897B58C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0897BA40;
L_0897BA40:;
    v0 = D_08AF9B80 - (-25728);
    v1 = 1;
    v0 = v0 - 25728;
    ST32(s0+8, v1);
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 0897BA64 */
rv_t func_0897BA64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19];
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 304);
L_0897BA64:;
    sp = sp - 304;
    v0 = a0 + 52;
    s6 = a0 + 64;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;v[15]=d3;}
    f6 = BITSF(0);
    s1 = a0 + 0;
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(a0+64));
    f3 = BITSF(LD32(a0+52));
    f4 = BITSF(LD32(s6+4));
    f2 = BITSF(LD32(s6+8));
    f3 = f5 - f3;
    f4 = f4 - f0;
    f2 = f2 - f1;
    v0 = FBITS(f3);
    {vr12=BITSF(v0);}
    v0 = FBITS(f4);
    {vr13=BITSF(v0);}
    v0 = FBITS(f2);
    {vr14=BITSF(v0);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f3));
    fcc = FCMP(f0, f6, 2);
    ST32(sp+4, FBITS(f4));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_0897BB58; }
    goto L_0897BB14;
L_0897BB14:;
    {float s0=vr0;float d0=sqrtf(s0);vr4=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr8=(float)1;vr9=(float)1;vr10=(float)1;v[11]=(float)1;}
    {v0=FBITS(vr4);}
    f6 = BITSF(v0);
    {float s0=vr8;float t0=vr4;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    f3 = BITSF(v0);
    {v0=FBITS(vr0);}
    f2 = BITSF(v0);
    ST32(sp+24, FBITS(f3));
    {v0=FBITS(vr1);}
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    goto L_0897BB58;
L_0897BB58:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    f18 = f0 * f6;
    f19 = f1 * f6;
    f21 = f2 * f6;
    v0 = D_08AEE470 - (-7056);
    f3 = BITSF(LD32(v0-7056));
    v1 = 0 + 0;
    v0 = FBITS(f0);
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;v[7]=d3;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr4=BITSF(v0);}
    {vr0=BITSF(v1);}
    v0 = FBITS(f1);
    {vr5=BITSF(v0);}
    v0 = 0xbf800000u;
    {vr1=BITSF(v0);}
    v0 = FBITS(f2);
    {vr2=BITSF(v1);}
    {vr6=BITSF(v0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {v0=FBITS(vr10);}
    f22 = BITSF(v0);
    {v0=FBITS(vr8);}
    f1 = BITSF(v0);
    f8 = BITSF(v0);
    {v0=FBITS(vr9);}
    f0 = BITSF(v0);
    f13 = f1 * f6;
    f10 = f18 * f3;
    f14 = f0 * f6;
    f11 = f19 * f3;
    f12 = f21 * f3;
    f16 = f22 * f6;
    f1 = BITSF(LD32(s6+4));
    f2 = BITSF(LD32(s6+8));
    f4 = f13 * f3;
    f1 = f1 - f11;
    f6 = f16 * f3;
    f5 = f5 - f10;
    f2 = f2 - f12;
    f3 = f14 * f3;
    f7 = BITSF(v0);
    v0 = D_08AEE46C - (-7060);
    f0 = BITSF(LD32(v0-7060));
    f17 = f1 + f3;
    f23 = f1 - f3;
    f9 = f2 + f6;
    f25 = f5 - f4;
    f15 = f5 + f4;
    f24 = f2 - f6;
    s3 = D_08AEE474 - (-7052);
    f20 = BITSF(0);
    ST32(sp+20, FBITS(f0));
    s7 = s1 + 28;
    a0 = s7 + 0;
    f0 = BITSF(LD32(s3-7052));
    a1 = sp + 160;
    a2 = sp + 164;
    s4 = D_08AEE478 - (-7048);
    ST32(sp+116, FBITS(f1));
    s2 = s1 + 16;
    ST32(sp+56, FBITS(f9));
    ST32(sp+80, FBITS(f18));
    ST32(sp+84, FBITS(f19));
    ST32(sp+96, FBITS(f10));
    ST32(sp+100, FBITS(f11));
    ST32(sp+104, FBITS(f12));
    ST32(sp+144, FBITS(f13));
    ST32(sp+148, FBITS(f14));
    ST32(sp+152, FBITS(f16));
    ST32(sp+48, FBITS(f15));
    ST32(sp+52, FBITS(f17));
    ST32(sp+32, FBITS(f8));
    ST32(sp+36, FBITS(f7));
    ST32(sp+112, FBITS(f5));
    ST32(sp+120, FBITS(f2));
    ST32(sp+64, FBITS(f4));
    ST32(sp+68, FBITS(f3));
    ST32(sp+72, FBITS(f6));
    ST32(sp+88, FBITS(f21));
    ST32(sp+40, FBITS(f22));
    ST32(sp+16, FBITS(f20));
    ST32(sp+24, FBITS(f20));
    ST32(sp+128, FBITS(f25));
    ST32(sp+132, FBITS(f23));
    ST32(sp+136, FBITS(f24));
    ST32(sp+164, FBITS(f0));
    ST32(sp+160, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897BCC4;
L_0897BCC4:;
    f1 = BITSF(LD32(s4-7048));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    s5 = D_08AEE47C - (-7044);
    if (cnd_) { goto L_0897BF9C; }
    goto L_0897BCDC;
L_0897BCDC:;
    f0 = BITSF(LD32(s5-7044));
    f0 = f1 + f0;
    goto L_0897BCE4;
L_0897BCE4:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s3-7052));
    a0 = s2 + 0;
    v0 = FBITS(f1);
    a1 = sp + 168;
    a2 = sp + 172;
    ST32(sp+172, FBITS(f0));
    s0 = v0 << 8;
    ST32(sp+168, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897BD10;
L_0897BD10:;
    f1 = BITSF(LD32(s4-7048));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s5-7044));
    if (cnd_) { goto L_0897BF94; }
    goto L_0897BD28;
L_0897BD28:;
    f0 = f1 + f0;
    goto L_0897BD2C;
L_0897BD2C:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s3-7052));
    a0 = s2 + 4;
    v0 = FBITS(f1);
    a1 = sp + 176;
    a2 = sp + 180;
    s0 = s0 + v0;
    ST32(sp+180, FBITS(f0));
    s0 = s0 << 8;
    ST32(sp+176, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897BD5C;
L_0897BD5C:;
    f1 = BITSF(LD32(s4-7048));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s5-7044));
    if (cnd_) { goto L_0897BF8C; }
    goto L_0897BD74;
L_0897BD74:;
    f0 = f1 + f0;
    goto L_0897BD78;
L_0897BD78:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s3-7052));
    a0 = s2 + 8;
    v0 = FBITS(f1);
    a1 = sp + 184;
    a2 = sp + 188;
    s0 = s0 + v0;
    ST32(sp+188, FBITS(f0));
    s0 = s0 << 8;
    ST32(sp+184, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897BDA8;
L_0897BDA8:;
    f1 = BITSF(LD32(s4-7048));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s5-7044));
    if (cnd_) { goto L_0897BF84; }
    goto L_0897BDC0;
L_0897BDC0:;
    f0 = f1 + f0;
    goto L_0897BDC4;
L_0897BDC4:;
    f0 = BITSF(F2I(f0, 1));
    a1 = sp + 48;
    a0 = s6 + 0;
    f20 = BITSF(0);
    v0 = FBITS(f0);
    s0 = s0 + v0;
    a2 = s0 + 0;
    func_088CF39C();
    goto L_0897BDE4;
L_0897BDE4:;
    f0 = BITSF(LD32(s3-7052));
    a0 = s7 + 0;
    a1 = sp + 192;
    a2 = sp + 196;
    ST32(sp+196, FBITS(f0));
    ST32(sp+192, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897BE00;
L_0897BE00:;
    f1 = BITSF(LD32(s4-7048));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s5-7044));
    if (cnd_) { goto L_0897BF7C; }
    goto L_0897BE18;
L_0897BE18:;
    f0 = f1 + f0;
    goto L_0897BE1C;
L_0897BE1C:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s3-7052));
    a0 = s2 + 0;
    v0 = FBITS(f1);
    a1 = sp + 200;
    a2 = sp + 204;
    ST32(sp+204, FBITS(f0));
    s0 = v0 << 8;
    ST32(sp+200, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897BE48;
L_0897BE48:;
    f1 = BITSF(LD32(s4-7048));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s5-7044));
    if (cnd_) { goto L_0897BF74; }
    goto L_0897BE60;
L_0897BE60:;
    f0 = f1 + f0;
    goto L_0897BE64;
L_0897BE64:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s3-7052));
    a0 = s2 + 4;
    v0 = FBITS(f1);
    a1 = sp + 208;
    a2 = sp + 212;
    s0 = s0 + v0;
    ST32(sp+212, FBITS(f0));
    s0 = s0 << 8;
    ST32(sp+208, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897BE94;
L_0897BE94:;
    f1 = BITSF(LD32(s4-7048));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s5-7044));
    if (cnd_) { goto L_0897BF6C; }
    goto L_0897BEAC;
L_0897BEAC:;
    f0 = f1 + f0;
    goto L_0897BEB0;
L_0897BEB0:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s3-7052));
    a0 = s2 + 8;
    v0 = FBITS(f1);
    a1 = sp + 216;
    a2 = sp + 220;
    s0 = s0 + v0;
    ST32(sp+220, FBITS(f0));
    s0 = s0 << 8;
    ST32(sp+216, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897BEE0;
L_0897BEE0:;
    f1 = BITSF(LD32(s4-7048));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s5-7044));
    if (cnd_) { goto L_0897BF64; }
    goto L_0897BEF8;
L_0897BEF8:;
    f0 = f1 + f0;
    goto L_0897BEFC;
L_0897BEFC:;
    f0 = BITSF(F2I(f0, 1));
    a0 = s6 + 0;
    a1 = sp + 128;
    v0 = FBITS(f0);
    s0 = s0 + v0;
    a2 = s0 + 0;
    func_088CF39C();
    goto L_0897BF18;
L_0897BF18:;
    a0 = s1 + 0;
    { rv_t r_ = func_0897B870(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897BF20;
L_0897BF20:;
    sp = sp + 304;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;return (rv_t){ v0, v1, f0 }; }
L_0897BF64:;
    f0 = f1 - f0;
    goto L_0897BEFC;
L_0897BF6C:;
    f0 = f1 - f0;
    goto L_0897BEB0;
L_0897BF74:;
    f0 = f1 - f0;
    goto L_0897BE64;
L_0897BF7C:;
    f0 = f1 - f0;
    goto L_0897BE1C;
L_0897BF84:;
    f0 = f1 - f0;
    goto L_0897BDC4;
L_0897BF8C:;
    f0 = f1 - f0;
    goto L_0897BD78;
L_0897BF94:;
    f0 = f1 - f0;
    goto L_0897BD2C;
L_0897BF9C:;
    f0 = BITSF(LD32(s5-7044));
    f0 = f1 - f0;
    goto L_0897BCE4;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;
}

/* 0897BFA8 */
void func_0897BFA8(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0897BFA8:;
    sp = sp - 48;
    s4 = a3 + 0;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s1 = a0 + 0;
    f20 = f12;
    { u64 r_ = func_0897D6FC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897BFE0;
L_0897BFE0:;
    a0 = s4 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0897C078; }
    goto L_0897BFEC;
L_0897BFEC:;
    { u64 r_ = func_0897D3F4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897BFF4;
L_0897BFF4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0897C00C; }
    goto L_0897BFFC;
L_0897BFFC:;
    v1 = LD32(v0+8);
    v0 = 1;
    cnd_ = v1 != v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0897C078; }
    goto L_0897C00C;
L_0897C00C:;
    v1 = s0 + 52;
    a1 = s0 + 64;
    a0 = 76;
    cnd_ = s0 == 0;
    v0 = s0 + 32;
    if (cnd_) { goto L_0897C0A0; }
    goto L_0897C020;
L_0897C020:;
    ST32(s0+12, FBITS(f20));
    f1 = BITSF(LD32(s1+8));
    f2 = BITSF(LD32(s1));
    f0 = BITSF(LD32(s1+4));
    ST32(v1+8, FBITS(f1));
    ST32(v1+4, FBITS(f0));
    ST32(s0+52, FBITS(f2));
    f1 = BITSF(LD32(s2+8));
    f2 = BITSF(LD32(s2));
    f0 = BITSF(LD32(s2+4));
    ST32(a1+8, FBITS(f1));
    ST32(a1+4, FBITS(f0));
    ST32(s0+64, FBITS(f2));
    f0 = BITSF(LD32(s3+12));
    f1 = BITSF(LD32(s3));
    f2 = BITSF(LD32(s3+4));
    f3 = BITSF(LD32(s3+8));
    ST32(v0+12, FBITS(f0));
    ST32(s0+32, FBITS(f1));
    ST32(v0+4, FBITS(f2));
    ST32(v0+8, FBITS(f3));
    a1 = s0 + 0;
    goto L_0897C078;
L_0897C078:;
    v0 = a1 + 0;
    sp = sp + 48;
    return;
L_0897C0A0:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897C0A8;
L_0897C0A8:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = s2 + 0;
    a3 = s3 + 0;
    f12 = f20;
    t0 = s4 + 0;
    s0 = v0 + 0;
    func_0897BA2C(a0, a1, a2, a3, t0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0897C0C8;
L_0897C0C8:;
    a1 = s0 + 0;
    goto L_0897C078;
}

/* 0897C0D0 */
float func_0897C0D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0897C0D0:;
    sp = sp - 32;
    s3 = a2 + 0;
    a2 = t0 + 0;
    s0 = a1 + 0;
    a1 = 2;
    s2 = a3 + 0;
    s1 = a0 + 0;
    func_0897B030(a0, a1, a2, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0897C104;
L_0897C104:;
    v0 = D_08AF9B68 - (-25752);
    v0 = v0 - 25752;
    ST32(s1, v0);
    a2 = s1 + 52;
    a3 = s0 + 32;
    goto L_0897C118;
L_0897C118:;
    v0 = LD32(s0);
    v1 = LD32(s0+4);
    a0 = LD32(s0+8);
    a1 = LD32(s0+12);
    ST32(a2, v0);
    s0 = s0 + 16;
    a2 = a2 + 16;
    ST32(a2-12, v1);
    ST32(a2-8, a0);
    cnd_ = s0 != a3;
    ST32(a2-4, a1);
    if (cnd_) { goto L_0897C118; }
    goto L_0897C144;
L_0897C144:;
    v0 = LD32(s0);
    v1 = LD32(s0+4);
    ST32(a2, v0);
    ST32(a2+4, v1);
    a0 = s1 + 92;
    v0 = s1 + 32;
    f0 = BITSF(LD32(s3+8));
    f2 = BITSF(LD32(s3));
    f1 = BITSF(LD32(s3+4));
    ST32(a0+8, FBITS(f0));
    v1 = s1 + 16;
    ST32(a0+4, FBITS(f1));
    ST32(s1+92, FBITS(f2));
    f4 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s2+8));
    f0 = BITSF(LD32(s2+12));
    ST32(s1+32, FBITS(f4));
    ST32(v0+12, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    f0 = BITSF(LD32(s2));
    f3 = BITSF(LD32(s2+12));
    f1 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s2+8));
    ST32(s1+16, FBITS(f0));
    ST32(v1+12, FBITS(f3));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    sp = sp + 32;
    return f0;
}

/* 0897C1D4 */
rv_t func_0897C1D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_0897C1D4:;
    sp = sp - 128;
    s3 = D_08AEE480 - (-7040);
    a1 = sp + 48;
    f20 = BITSF(0);
    a2 = sp + 52;
    s4 = D_08AEE484 - (-7036);
    f0 = BITSF(LD32(s3-7040));
    s1 = a0 + 0;
    a0 = a0 + 28;
    s2 = s1 + 16;
    {v[112]=BITSF(LD32(s1+(76)));}
    {v[113]=BITSF(LD32(s1+(80)));}
    {v[114]=BITSF(LD32(s1+(84)));}
    {v[115]=BITSF(LD32(s1+(88)));}
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
    ST32(sp+52, FBITS(f0));
    ST32(sp+48, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897C2A0;
L_0897C2A0:;
    f1 = BITSF(LD32(s4-7036));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    s5 = D_08AEE488 - (-7032);
    if (cnd_) { goto L_0897C400; }
    goto L_0897C2B8;
L_0897C2B8:;
    f0 = BITSF(LD32(s5-7032));
    f0 = f1 + f0;
    goto L_0897C2C0;
L_0897C2C0:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s3-7040));
    a0 = s2 + 0;
    v0 = FBITS(f1);
    a1 = sp + 56;
    a2 = sp + 60;
    ST32(sp+60, FBITS(f0));
    s0 = v0 << 8;
    ST32(sp+56, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897C2EC;
L_0897C2EC:;
    f1 = BITSF(LD32(s4-7036));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s5-7032));
    if (cnd_) { goto L_0897C3F8; }
    goto L_0897C304;
L_0897C304:;
    f0 = f1 + f0;
    goto L_0897C308;
L_0897C308:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s3-7040));
    a0 = s2 + 4;
    v0 = FBITS(f1);
    a1 = sp + 64;
    a2 = sp + 68;
    s0 = s0 + v0;
    ST32(sp+68, FBITS(f0));
    s0 = s0 << 8;
    ST32(sp+64, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897C338;
L_0897C338:;
    f1 = BITSF(LD32(s4-7036));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s5-7032));
    if (cnd_) { goto L_0897C3F0; }
    goto L_0897C350;
L_0897C350:;
    f0 = f1 + f0;
    goto L_0897C354;
L_0897C354:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s3-7040));
    a0 = s2 + 8;
    v0 = FBITS(f1);
    a1 = sp + 72;
    a2 = sp + 76;
    s0 = s0 + v0;
    ST32(sp+76, FBITS(f0));
    s0 = s0 << 8;
    ST32(sp+72, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897C384;
L_0897C384:;
    f1 = BITSF(LD32(s4-7036));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s5-7032));
    if (cnd_) { goto L_0897C3E8; }
    goto L_0897C39C;
L_0897C39C:;
    f0 = f1 + f0;
    goto L_0897C3A0;
L_0897C3A0:;
    f0 = BITSF(F2I(f0, 1));
    a1 = s1 + 92;
    a0 = s1 + 52;
    a2 = sp + 0;
    v0 = FBITS(f0);
    s0 = s0 + v0;
    a3 = s0 + 0;
    { rv_t r_ = func_088CF3B8(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897C3C0;
L_0897C3C0:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_0897C3E8:;
    f0 = f1 - f0;
    goto L_0897C3A0;
L_0897C3F0:;
    f0 = f1 - f0;
    goto L_0897C354;
L_0897C3F8:;
    f0 = f1 - f0;
    goto L_0897C308;
L_0897C400:;
    f0 = BITSF(LD32(s5-7032));
    f0 = f1 - f0;
    goto L_0897C2C0;
}

/* 0897C40C */
rv_t func_0897C40C(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0897C40C:;
    sp = sp - 48;
    s4 = a0 + 0;
    s3 = a3 + 0;
    s2 = a1 + 0;
    s1 = a2 + 0;
    s0 = 0 + 0;
    f20 = f12;
    { u64 r_ = func_0897D6FC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897C448;
L_0897C448:;
    cnd_ = v0 == 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_0897C508; }
    goto L_0897C450;
L_0897C450:;
    a0 = s3 + 0;
    { u64 r_ = func_0897D3F4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897C458;
L_0897C458:;
    cnd_ = v0 == 0;
    t1 = v0 + 0;
    if (cnd_) { goto L_0897C470; }
    goto L_0897C460;
L_0897C460:;
    v1 = LD32(v0+8);
    v0 = 2;
    cnd_ = v1 != v0;
    v0 = s0 + 0;
    if (cnd_) { goto L_0897C508; }
    goto L_0897C470;
L_0897C470:;
    cnd_ = t1 == 0;
    s0 = t1 + 0;
    if (cnd_) { goto L_0897C52C; }
    goto L_0897C478;
L_0897C478:;
    ST32(t1+12, FBITS(f20));
    a2 = s4 + 0;
    a3 = t1 + 52;
    t0 = s4 + 32;
    goto L_0897C488;
L_0897C488:;
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
    if (cnd_) { goto L_0897C488; }
    goto L_0897C4B4;
L_0897C4B4:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    ST32(a3, v0);
    ST32(a3+4, v1);
    v1 = t1 + 92;
    v0 = t1 + 32;
    f1 = BITSF(LD32(s2+8));
    f2 = BITSF(LD32(s2));
    f0 = BITSF(LD32(s2+4));
    ST32(v1+8, FBITS(f1));
    ST32(v1+4, FBITS(f0));
    ST32(t1+92, FBITS(f2));
    f3 = BITSF(LD32(s1+12));
    f0 = BITSF(LD32(s1));
    f1 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1+8));
    ST32(t1+32, FBITS(f0));
    ST32(v0+12, FBITS(f3));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    v0 = s0 + 0;
    goto L_0897C508;
L_0897C508:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0897C52C:;
    a0 = 104;
    { rv_t r_ = func_08A94784(a0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897C534;
L_0897C534:;
    a0 = v0 + 0;
    a1 = s4 + 0;
    a2 = s2 + 0;
    a3 = s1 + 0;
    f12 = f20;
    t0 = s3 + 0;
    s0 = v0 + 0;
    f0 = func_0897C0D0(a0, a1, a2, a3, t0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0897C554;
L_0897C554:;
    v0 = s0 + 0;
    goto L_0897C508;
}

/* 0897C55C */
float func_0897C55C(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0;
    int cnd_;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_0897C55C:;
    sp = sp - 160;
    s2 = a2 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    f20 = f12;
    { u64 r_ = func_0897D6FC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897C588;
L_0897C588:;
    t4 = s0 + 32;
    t5 = s0 + 48;
    t3 = s0 + 64;
    t2 = s0 + 16;
    a0 = sp + 24;
    a1 = sp + 64;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0897C6A8; }
    goto L_0897C5A8;
L_0897C5A8:;
    v0 = LD32(s0+32);
    a2 = LD32(t4+4);
    a3 = LD32(t5+4);
    v1 = LD32(s0+48);
    t1 = LD32(t3+4);
    f6 = BITSF(LD32(t2+8));
    t4 = LD32(t4+8);
    f5 = BITSF(LD32(t2+4));
    t0 = LD32(s0+64);
    t2 = LD32(t5+8);
    f4 = BITSF(LD32(s0+16));
    t5 = LD32(t3+12);
    t3 = LD32(t3+8);
    ST32(sp+112, v0);
    ST32(sp+116, a2);
    f0 = BITSF(LD32(sp+112));
    ST32(sp+112, v1);
    f3 = BITSF(LD32(sp+116));
    f1 = BITSF(LD32(sp+112));
    ST32(sp+116, a3);
    ST32(sp+112, t0);
    f2 = BITSF(LD32(sp+116));
    ST32(sp+64, FBITS(f0));
    ST32(sp+116, t1);
    f0 = BITSF(LD32(sp+112));
    ST32(sp+48, FBITS(f4));
    ST32(sp+72, FBITS(f0));
    f0 = BITSF(LD32(sp+116));
    ST32(sp+52, FBITS(f5));
    ST32(sp+56, FBITS(f6));
    ST32(sp+76, FBITS(f3));
    ST32(sp+80, FBITS(f2));
    ST32(sp+68, FBITS(f1));
    ST32(sp+84, FBITS(f0));
    ST32(sp+120, t4);
    f1 = BITSF(LD32(sp+120));
    ST32(sp+120, t2);
    f0 = BITSF(LD32(sp+120));
    ST32(sp+120, t3);
    ST32(sp+92, FBITS(f0));
    f0 = BITSF(LD32(sp+120));
    ST32(sp+88, FBITS(f1));
    ST32(sp+124, t5);
    ST32(sp+96, FBITS(f0));
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897C65C;
L_0897C65C:;
    a1 = sp + 48;
    f5 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s0+4));
    f4 = BITSF(FBITS(f5) ^ 0x80000000u);
    f0 = BITSF(FBITS(f2) ^ 0x80000000u);
    f1 = BITSF(FBITS(f3) ^ 0x80000000u);
    a2 = s1 + 0;
    f12 = f20;
    a3 = s2 + 0;
    a0 = sp + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    ST32(sp+16, FBITS(f4));
    ST32(sp+4, FBITS(f2));
    ST32(sp+12, FBITS(f3));
    ST32(sp+20, FBITS(f5));
    { rv_t r_ = func_0897C40C(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897C6A4;
L_0897C6A4:;
    v1 = v0 + 0;
    goto L_0897C6A8;
L_0897C6A8:;
    v0 = v1 + 0;
    sp = sp + 160;
    return f0;
}

/* 0897C6C8 */
rv_t func_0897C6C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0897C6C8:;
    sp = sp - 48;
    s4 = a1 + 0;
    a1 = 3;
    s2 = a2 + 0;
    a2 = t0 + 0;
    s3 = t1 & 0xff;
    s1 = a3 + 0;
    s0 = a0 + 0;
    f20 = f13;
    func_0897B030(a0, a1, a2, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0897C70C;
L_0897C70C:;
    f0 = BITSF(LD32(s2+8));
    f1 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s2));
    v0 = s0 + 304;
    ST32(v0+8, FBITS(f0));
    a0 = s0 + 49;
    a1 = s4 + 0;
    ST32(v0+4, FBITS(f1));
    v0 = D_08AF9B50 - (-25776);
    v0 = v0 - 25776;
    ST32(s0+304, FBITS(f2));
    a2 = 255;
    a3 = 1;
    ST32(s0+316, FBITS(f20));
    ST8(s0+320, s3);
    ST32(s0, v0);
    { rv_t r_ = func_08837560(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897C750;
L_0897C750:;
    f4 = BITSF(LD32(s1));
    f0 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1+8));
    f1 = BITSF(LD32(s1+12));
    ST32(s0+32, FBITS(f4));
    v0 = s0 + 32;
    v1 = s0 + 16;
    ST32(v0+4, FBITS(f0));
    ST32(v0+12, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    f0 = BITSF(LD32(s1));
    f3 = BITSF(LD32(s1+12));
    f1 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1+8));
    ST32(s0+16, FBITS(f0));
    ST32(v1+12, FBITS(f3));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 0897C7BC */
rv_t func_0897C7BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_0897C7BC:;
    sp = sp - 128;
    v0 = LD_U8(a0+320);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0897C9D4; }
    goto L_0897C7F0;
L_0897C7F0:;
    f1 = BITSF(LD32(a0+312));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0897C988; }
    goto L_0897C808;
L_0897C808:;
    f0 = BITSF(LD32(a0+316));
    v0 = D_08AEE48C - (-7028);
    f21 = f0;
    f0 = BITSF(LD32(v0-7028));
    fcc = FCMP(f21, f0, 2);
    cnd_ = !fcc;
    s5 = D_08AEE490 - (-7024);
    if (cnd_) { goto L_0897C834; }
    goto L_0897C828;
L_0897C828:;
    v0 = D_08AEE494 - (-7020);
    f0 = BITSF(LD32(v0-7020));
    f21 = f0 / f1;
    goto L_0897C834;
L_0897C834:;
    f20 = BITSF(0);
    f0 = BITSF(LD32(s5-7024));
    a0 = s1 + 28;
    a1 = sp + 16;
    a2 = sp + 20;
    s3 = D_08AEE498 - (-7016);
    ST32(sp+20, FBITS(f0));
    s2 = s1 + 16;
    ST32(sp+16, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897C85C;
L_0897C85C:;
    f1 = BITSF(LD32(s3-7016));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    s4 = D_08AEE49C - (-7012);
    if (cnd_) { goto L_0897C9C8; }
    goto L_0897C874;
L_0897C874:;
    f0 = BITSF(LD32(s4-7012));
    f0 = f1 + f0;
    goto L_0897C87C;
L_0897C87C:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s5-7024));
    a0 = s2 + 0;
    v0 = FBITS(f1);
    a1 = sp + 24;
    a2 = sp + 28;
    ST32(sp+28, FBITS(f0));
    s0 = v0 << 8;
    ST32(sp+24, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897C8A8;
L_0897C8A8:;
    f1 = BITSF(LD32(s3-7016));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s4-7012));
    if (cnd_) { goto L_0897C9C0; }
    goto L_0897C8C0;
L_0897C8C0:;
    f0 = f1 + f0;
    goto L_0897C8C4;
L_0897C8C4:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s5-7024));
    a0 = s2 + 4;
    v0 = FBITS(f1);
    a1 = sp + 32;
    a2 = sp + 36;
    s0 = s0 + v0;
    ST32(sp+36, FBITS(f0));
    s0 = s0 << 8;
    ST32(sp+32, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897C8F4;
L_0897C8F4:;
    f1 = BITSF(LD32(s3-7016));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s4-7012));
    if (cnd_) { goto L_0897C9B8; }
    goto L_0897C90C;
L_0897C90C:;
    f0 = f1 + f0;
    goto L_0897C910;
L_0897C910:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s5-7024));
    a0 = s2 + 8;
    v0 = FBITS(f1);
    a1 = sp + 40;
    a2 = sp + 44;
    s0 = s0 + v0;
    ST32(sp+44, FBITS(f0));
    s0 = s0 << 8;
    ST32(sp+40, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897C940;
L_0897C940:;
    f1 = BITSF(LD32(s3-7016));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s4-7012));
    if (cnd_) { goto L_0897C9B0; }
    goto L_0897C958;
L_0897C958:;
    f0 = f1 + f0;
    goto L_0897C95C;
L_0897C95C:;
    f0 = BITSF(F2I(f0, 1));
    f13 = BITSF(LD32(s1+308));
    f12 = BITSF(LD32(s1+304));
    a2 = s1 + 49;
    v0 = FBITS(f0);
    f14 = f21;
    a1 = 4;
    goto L_0897C978;
L_0897C978:;
    s0 = s0 + v0;
    a0 = s0 + 0;
    { rv_t r_ = func_088CBD68(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897C984;
L_0897C984:;
    goto L_0897C988;
L_0897C988:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_0897C9B0:;
    f0 = f1 - f0;
    goto L_0897C95C;
L_0897C9B8:;
    f0 = f1 - f0;
    goto L_0897C910;
L_0897C9C0:;
    f0 = f1 - f0;
    goto L_0897C8C4;
L_0897C9C8:;
    f0 = BITSF(LD32(s4-7012));
    f0 = f1 - f0;
    goto L_0897C87C;
L_0897C9D4:;
    v0 = a0 + 304;
    f0 = BITSF(LD32(a0+304));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    a0 = sp + 0;
    a1 = 0 + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897C9FC;
L_0897C9FC:;
    f0 = BITSF(0);
    f1 = BITSF(LD32(sp+8));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0897C988; }
    goto L_0897CA14;
L_0897CA14:;
    f0 = BITSF(LD32(s1+316));
    v0 = D_08AEE48C - (-7028);
    f21 = f0;
    f0 = BITSF(LD32(v0-7028));
    fcc = FCMP(f21, f0, 2);
    cnd_ = !fcc;
    s5 = D_08AEE490 - (-7024);
    if (cnd_) { goto L_0897CA40; }
    goto L_0897CA34;
L_0897CA34:;
    v0 = D_08AEE494 - (-7020);
    f0 = BITSF(LD32(v0-7020));
    f21 = f0 / f1;
    goto L_0897CA40;
L_0897CA40:;
    f20 = BITSF(0);
    f0 = BITSF(LD32(s5-7024));
    a0 = s1 + 28;
    a1 = sp + 48;
    a2 = sp + 52;
    s3 = D_08AEE498 - (-7016);
    ST32(sp+52, FBITS(f0));
    s2 = s1 + 16;
    ST32(sp+48, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897CA68;
L_0897CA68:;
    f1 = BITSF(LD32(s3-7016));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    s4 = D_08AEE49C - (-7012);
    if (cnd_) { goto L_0897CBA0; }
    goto L_0897CA80;
L_0897CA80:;
    f0 = BITSF(LD32(s4-7012));
    f0 = f1 + f0;
    goto L_0897CA88;
L_0897CA88:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s5-7024));
    a0 = s2 + 0;
    v0 = FBITS(f1);
    a1 = sp + 56;
    a2 = sp + 60;
    ST32(sp+60, FBITS(f0));
    s0 = v0 << 8;
    ST32(sp+56, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897CAB4;
L_0897CAB4:;
    f1 = BITSF(LD32(s3-7016));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s4-7012));
    if (cnd_) { goto L_0897CB98; }
    goto L_0897CACC;
L_0897CACC:;
    f0 = f1 + f0;
    goto L_0897CAD0;
L_0897CAD0:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s5-7024));
    a0 = s2 + 4;
    v0 = FBITS(f1);
    a1 = sp + 64;
    a2 = sp + 68;
    s0 = s0 + v0;
    ST32(sp+68, FBITS(f0));
    s0 = s0 << 8;
    ST32(sp+64, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897CB00;
L_0897CB00:;
    f1 = BITSF(LD32(s3-7016));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s4-7012));
    if (cnd_) { goto L_0897CB90; }
    goto L_0897CB18;
L_0897CB18:;
    f0 = f1 + f0;
    goto L_0897CB1C;
L_0897CB1C:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s5-7024));
    a0 = s2 + 8;
    v0 = FBITS(f1);
    a1 = sp + 72;
    a2 = sp + 76;
    s0 = s0 + v0;
    ST32(sp+76, FBITS(f0));
    s0 = s0 << 8;
    ST32(sp+72, FBITS(f20));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897CB4C;
L_0897CB4C:;
    f1 = BITSF(LD32(s3-7016));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s4-7012));
    if (cnd_) { goto L_0897CB88; }
    goto L_0897CB64;
L_0897CB64:;
    f0 = f1 + f0;
    goto L_0897CB68;
L_0897CB68:;
    f0 = BITSF(F2I(f0, 1));
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    a2 = s1 + 49;
    v0 = FBITS(f0);
    f14 = f21;
    a1 = 5;
    goto L_0897C978;
L_0897CB88:;
    f0 = f1 - f0;
    goto L_0897CB68;
L_0897CB90:;
    f0 = f1 - f0;
    goto L_0897CB1C;
L_0897CB98:;
    f0 = f1 - f0;
    goto L_0897CAD0;
L_0897CBA0:;
    f0 = BITSF(LD32(s4-7012));
    f0 = f1 - f0;
    goto L_0897CA88;
}

/* 0897CBAC */
rv_t func_0897CBAC(u32 a0, u32 a1, u32 a2, u32 a3, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0897CBAC:;
    sp = sp - 48;
    s4 = a3 + 0;
    s3 = a0 + 0;
    s2 = a2 + 0;
    s1 = a1 + 0;
    f21 = f13;
    f20 = f12;
    { u64 r_ = func_0897D6FC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897CBEC;
L_0897CBEC:;
    a0 = s4 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0897CC8C; }
    goto L_0897CBF8;
L_0897CBF8:;
    { u64 r_ = func_0897D3F4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897CC00;
L_0897CC00:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0897CC18; }
    goto L_0897CC08;
L_0897CC08:;
    v1 = LD32(v0+8);
    v0 = 3;
    cnd_ = v1 != v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0897CC8C; }
    goto L_0897CC18;
L_0897CC18:;
    v0 = s0 + 49;
    a1 = s3 + 0;
    a2 = 255;
    a3 = 1;
    cnd_ = s0 == 0;
    a0 = 324;
    if (cnd_) { goto L_0897CCB8; }
    goto L_0897CC30;
L_0897CC30:;
    a0 = v0 + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897CC38;
L_0897CC38:;
    f0 = BITSF(LD32(s1+8));
    f3 = BITSF(LD32(s1));
    f1 = BITSF(LD32(s1+4));
    v0 = s0 + 304;
    ST32(v0+8, FBITS(f0));
    v1 = s0 + 32;
    ST32(v0+4, FBITS(f1));
    v0 = 1;
    ST32(s0+304, FBITS(f3));
    f2 = BITSF(LD32(s2+12));
    f3 = BITSF(LD32(s2));
    f0 = BITSF(LD32(s2+4));
    f1 = BITSF(LD32(s2+8));
    ST32(v1+12, FBITS(f2));
    ST32(v1+4, FBITS(f0));
    ST32(v1+8, FBITS(f1));
    ST32(s0+32, FBITS(f3));
    ST32(s0+12, FBITS(f20));
    ST32(s0+316, FBITS(f21));
    ST8(s0+320, v0);
    a1 = s0 + 0;
    goto L_0897CC8C;
L_0897CC8C:;
    v0 = a1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0897CCB8:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897CCC0;
L_0897CCC0:;
    a0 = v0 + 0;
    a1 = s3 + 0;
    a2 = s1 + 0;
    a3 = s2 + 0;
    f12 = f20;
    f13 = f21;
    t0 = s4 + 0;
    t1 = 1;
    s0 = v0 + 0;
    { rv_t r_ = func_0897C6C8(a0, a1, a2, a3, t0, t1, 0, 0, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897CCE8;
L_0897CCE8:;
    a1 = s0 + 0;
    goto L_0897CC8C;
}

/* 0897CCF0 */
rv_t func_0897CCF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 288);
L_0897CCF0:;
    sp = sp - 288;
    s5 = a2 + 0;
    a2 = t1 + 0;
    s4 = a1 + 0;
    a1 = 4;
    s3 = a3 + 0;
    s1 = t0 + 0;
    s0 = a0 + 0;
    func_0897B030(a0, a1, a2, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0897CD30;
L_0897CD30:;
    v0 = D_08AF9B38 - (-25800);
    v0 = v0 - 25800;
    ST32(s0+304, s5);
    s2 = s0 + 49;
    a1 = s4 + 0;
    ST32(s0+308, s3);
    a0 = s2 + 0;
    a2 = 255;
    ST32(s0, v0);
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897CD5C;
L_0897CD5C:;
    a1 = D_08ADDB38 - (-9416);
    t0 = s2 + 0;
    a1 = a1 - 9416;
    a0 = sp + 0;
    a2 = 255;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897CD78;
L_0897CD78:;
    f4 = BITSF(LD32(s1));
    f0 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1+8));
    f1 = BITSF(LD32(s1+12));
    ST32(s0+32, FBITS(f4));
    v0 = s0 + 32;
    v1 = s0 + 16;
    ST32(v0+4, FBITS(f0));
    ST32(v0+12, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    f0 = BITSF(LD32(s1));
    f3 = BITSF(LD32(s1+12));
    f1 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1+8));
    ST32(s0+16, FBITS(f0));
    ST32(v1+12, FBITS(f3));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    sp = sp + 288;
    return (rv_t){ v0, v1, f0 };
}

/* 0897CDE4 */
rv_t func_0897CDE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0897CDE4:;
    sp = sp - 64;
    v0 = D_08AEE4A0 - (-7008);
    a1 = sp + 0;
    a2 = sp + 4;
    f21 = BITSF(LD32(v0-7008));
    f20 = BITSF(0);
    s0 = a0 + 0;
    a0 = a0 + 28;
    s1 = s0 + 16;
    ST32(sp, FBITS(f20));
    ST32(sp+4, FBITS(f21));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897CE28;
L_0897CE28:;
    a0 = s1 + 0;
    a1 = sp + 8;
    a2 = sp + 12;
    ST32(sp+8, FBITS(f20));
    ST32(sp+12, FBITS(f21));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897CE40;
L_0897CE40:;
    a0 = s0 + 20;
    a1 = sp + 16;
    a2 = sp + 20;
    s0 = s0 + 24;
    ST32(sp+16, FBITS(f20));
    ST32(sp+20, FBITS(f21));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897CE5C;
L_0897CE5C:;
    a0 = s0 + 0;
    a1 = sp + 24;
    a2 = sp + 28;
    ST32(sp+24, FBITS(f20));
    ST32(sp+28, FBITS(f21));
    f0 = func_0897D928(a0, a1, a2);
    goto L_0897CE74;
L_0897CE74:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
}

/* 0897CE90 */
rv_t func_0897CE90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, float f12)
{
    u32 v0 = 0, v1 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0897CE90:;
    sp = sp - 48;
    s5 = a2 + 0;
    s4 = a1 + 0;
    s3 = t0 + 0;
    s2 = a0 + 0;
    s1 = a3 + 0;
    f20 = f12;
    { u64 r_ = func_0897D6FC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897CED0;
L_0897CED0:;
    a0 = s3 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0897CF50; }
    goto L_0897CEDC;
L_0897CEDC:;
    { u64 r_ = func_0897D3F4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897CEE4;
L_0897CEE4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0897CEFC; }
    goto L_0897CEEC;
L_0897CEEC:;
    v1 = LD32(v0+8);
    v0 = 4;
    cnd_ = v1 != v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0897CF50; }
    goto L_0897CEFC;
L_0897CEFC:;
    v0 = s0 + 49;
    a1 = s2 + 0;
    a2 = 255;
    a3 = 1;
    cnd_ = s0 == 0;
    a0 = 312;
    if (cnd_) { goto L_0897CF7C; }
    goto L_0897CF14;
L_0897CF14:;
    a0 = v0 + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897CF1C;
L_0897CF1C:;
    ST32(s0+12, FBITS(f20));
    v0 = s0 + 32;
    f0 = BITSF(LD32(s1+12));
    f1 = BITSF(LD32(s1));
    f2 = BITSF(LD32(s1+4));
    f3 = BITSF(LD32(s1+8));
    ST32(v0+12, FBITS(f0));
    ST32(s0+304, s4);
    ST32(s0+308, s5);
    ST32(s0+32, FBITS(f1));
    ST32(v0+4, FBITS(f2));
    ST32(v0+8, FBITS(f3));
    a1 = s0 + 0;
    goto L_0897CF50;
L_0897CF50:;
    v0 = a1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0897CF7C:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897CF84;
L_0897CF84:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    a2 = s4 + 0;
    a3 = s5 + 0;
    t0 = s1 + 0;
    f12 = f20;
    t1 = s3 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_0897CCF0(a0, a1, a2, a3, t0, t1, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897CFA8;
L_0897CFA8:;
    a1 = s0 + 0;
    goto L_0897CF50;
}

/* 0897CFB0 */
rv_t func_0897CFB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897CFB0:;
    sp = sp - 16;
    a0 = LD32(a1);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897CFCC;
L_0897CFCC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897CFD8 */
void func_0897CFD8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897CFD8:;
    a0 = D_08ADDB3C - (-9412);
    a1 = D_08C29ED0 - (-24880);
    sp = sp - 16;
    a0 = a0 - 9412;
    a1 = a1 - 24880;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897CFFC;
L_0897CFFC:;
    func_0897D058(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0897D004;
L_0897D004:;
    sp = sp + 16;
    return;
}

/* 0897D010 */
rv_t func_0897D010(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897D010:;
    v0 = LD32(a1);
    sp = sp - 16;
    a0 = v0 + 0;
    s0 = a1 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0897D040; }
    goto L_0897D02C;
L_0897D02C:;
    ST32(s0, 0);
    goto L_0897D030;
L_0897D030:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0897D040:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897D050;
L_0897D050:;
    ST32(s0, 0);
    goto L_0897D030;
}

/* 0897D058 */
void func_0897D058(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0897D058:;
    sp = sp - 48;
    s3 = D_08C29EA4 - (-24924);
    v0 = 1;
    v1 = ((u32)(uintptr_t)func_0897D010) - (-12272);
    s0 = LD32(s3-24924);
    s1 = s3 - 24924;
    s2 = v1 - 12272;
    cnd_ = s0 == 0;
    ST8(s1+8, v0);
    if (cnd_) { goto L_0897D0B8; }
    goto L_0897D090;
L_0897D090:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0897D1AC; }
    goto L_0897D09C;
L_0897D09C:;
    a1 = LD32(s0+12);
    goto L_0897D0A0;
L_0897D0A0:;
    cnd_ = a1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0897D19C; }
    goto L_0897D0A8;
L_0897D0A8:;
    a0 = LD32(s0);
    goto L_0897D0AC;
L_0897D0AC:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897D0B4;
L_0897D0B4:;
    s1 = s3 - 24924;
    goto L_0897D0B8;
L_0897D0B8:;
    a0 = LD32(s1+12);
    cnd_ = a0 == 0;
    v0 = D_08C29EBC - (-24900);
    if (cnd_) { goto L_0897D11C; }
    goto L_0897D0C4;
L_0897D0C4:;
    v0 = LD32(s1+16);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0897D108; }
    goto L_0897D0D0;
L_0897D0D0:;
    v0 = s0 << 2;
    goto L_0897D0D4;
L_0897D0D4:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s1 + 0;
    s0 = s0 + 1;
    { u64 r_ = func_08AC0ED0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897D0E8;
L_0897D0E8:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897D0F0;
L_0897D0F0:;
    v0 = LD32(s1+16);
    v0 = s0 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s1+12);
    if (cnd_) { goto L_0897D108; }
    goto L_0897D100;
L_0897D100:;
    v0 = s0 << 2;
    goto L_0897D0D4;
L_0897D108:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0897D18C; }
    goto L_0897D110;
L_0897D110:;
    ST32(s1+16, 0);
    goto L_0897D114;
L_0897D114:;
    ST32(s1+12, 0);
    v0 = D_08C29EBC - (-24900);
    goto L_0897D11C;
L_0897D11C:;
    a0 = LD32(v0-24900);
    v1 = s3 - 24924;
    v0 = v0 - 24900;
    ST8(v1+8, 0);
    ST32(sp, v0);
    cnd_ = a0 != 0;
    ST32(sp+4, a0);
    if (cnd_) { goto L_0897D154; }
    goto L_0897D138;
L_0897D138:;
    goto L_0897D13C;
L_0897D13C:;
    sp = sp + 48;
    return;
L_0897D154:;
    s0 = LD32(a0);
    goto L_0897D158;
L_0897D158:;
    a0 = sp + 0;
    func_08AC1200(a0);
    goto L_0897D160;
L_0897D160:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0897D178; }
    goto L_0897D168;
L_0897D168:;
    v0 = LD32(s0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897D178;
L_0897D178:;
    a0 = LD32(sp+4);
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_0897D158; }
    goto L_0897D184;
L_0897D184:;
    goto L_0897D13C;
L_0897D18C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897D194;
L_0897D194:;
    ST32(s1+16, 0);
    goto L_0897D114;
L_0897D19C:;
    a2 = s2 + 0;
    func_08AC1224(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0897D1A4;
L_0897D1A4:;
    a0 = LD32(s0);
    goto L_0897D0AC;
L_0897D1AC:;
    a2 = s2 + 0;
    func_08AC1224(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0897D1B4;
L_0897D1B4:;
    a1 = LD32(s0+12);
    goto L_0897D0A0;
}

/* 0897D1BC */
void func_0897D1BC(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0897D1BC:;
    sp = sp - 48;
    s2 = D_08C29EA4 - (-24924);
    v0 = 1;
    v1 = ((u32)(uintptr_t)func_0897CFB0) - (-12368);
    s0 = LD32(s2-24924);
    s1 = s2 - 24924;
    s3 = v1 - 12368;
    cnd_ = s0 == 0;
    ST8(s1+8, v0);
    if (cnd_) { goto L_0897D218; }
    goto L_0897D1F4;
L_0897D1F4:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0897D2AC; }
    goto L_0897D200;
L_0897D200:;
    a1 = LD32(s0+12);
    goto L_0897D204;
L_0897D204:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_0897D29C; }
    goto L_0897D20C;
L_0897D20C:;
    a0 = LD32(s0);
    goto L_0897D210;
L_0897D210:;
    t_ = s3;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897D218;
L_0897D218:;
    s0 = s2 - 24924;
    a0 = s0 + 0;
    func_08AC12A8(a0, t1, t2, t3);
    goto L_0897D224;
L_0897D224:;
    ST8(s0+8, 0);
    v0 = D_08C29EBC - (-24900);
    v0 = v0 - 24900;
    a0 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    func_08AC1200(a0);
    goto L_0897D240;
L_0897D240:;
    v0 = LD32(sp+4);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0897D264; }
    goto L_0897D24C;
L_0897D24C:;
    sp = sp + 48;
    return;
L_0897D264:;
    s0 = LD32(v0);
    goto L_0897D268;
L_0897D268:;
    a0 = sp + 0;
    func_08AC1200(a0);
    goto L_0897D270;
L_0897D270:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0897D288; }
    goto L_0897D278;
L_0897D278:;
    v0 = LD32(s0);
    v1 = LD32(v0+8);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897D288;
L_0897D288:;
    v0 = LD32(sp+4);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_0897D268; }
    goto L_0897D294;
L_0897D294:;
    goto L_0897D24C;
L_0897D29C:;
    a2 = s3 + 0;
    func_08AC1224(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0897D2A4;
L_0897D2A4:;
    a0 = LD32(s0);
    goto L_0897D210;
L_0897D2AC:;
    a2 = s3 + 0;
    func_08AC1224(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0897D2B4;
L_0897D2B4:;
    a1 = LD32(s0+12);
    goto L_0897D204;
}

/* 0897D2BC */
rv_t func_0897D2BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897D2BC:;
    sp = sp - 16;
    a0 = LD32(a1);
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897D2D8;
L_0897D2D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897D2E4 */
void func_0897D2E4(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0897D2E4:;
    sp = sp - 48;
    v0 = D_08C29ED0 - (-24880);
    v1 = LD_U8(v0-24880);
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_0897D384; }
    goto L_0897D30C;
L_0897D30C:;
    s2 = D_08C29EA4 - (-24924);
    s0 = LD32(s2-24924);
    s1 = s2 - 24924;
    v0 = 1;
    v1 = ((u32)(uintptr_t)func_0897D2BC) - (-11588);
    ST8(s1+8, v0);
    cnd_ = s0 == 0;
    s3 = v1 - 11588;
    if (cnd_) { goto L_0897D350; }
    goto L_0897D32C;
L_0897D32C:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0897D3E4; }
    goto L_0897D338;
L_0897D338:;
    a1 = LD32(s0+12);
    goto L_0897D33C;
L_0897D33C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_0897D3D4; }
    goto L_0897D344;
L_0897D344:;
    a0 = LD32(s0);
    goto L_0897D348;
L_0897D348:;
    t_ = s3;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897D350;
L_0897D350:;
    s0 = s2 - 24924;
    a0 = s0 + 0;
    func_08AC12A8(a0, t1, t2, t3);
    goto L_0897D35C;
L_0897D35C:;
    ST8(s0+8, 0);
    v0 = D_08C29EBC - (-24900);
    v0 = v0 - 24900;
    a0 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    func_08AC1200(a0);
    goto L_0897D378;
L_0897D378:;
    v0 = LD32(sp+4);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0897D39C; }
    goto L_0897D384;
L_0897D384:;
    sp = sp + 48;
    return;
L_0897D39C:;
    s0 = LD32(v0);
    goto L_0897D3A0;
L_0897D3A0:;
    a0 = sp + 0;
    func_08AC1200(a0);
    goto L_0897D3A8;
L_0897D3A8:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0897D3C0; }
    goto L_0897D3B0;
L_0897D3B0:;
    v0 = LD32(s0);
    v1 = LD32(v0+12);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897D3C0;
L_0897D3C0:;
    v0 = LD32(sp+4);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_0897D3A0; }
    goto L_0897D3CC;
L_0897D3CC:;
    goto L_0897D384;
L_0897D3D4:;
    a2 = s3 + 0;
    func_08AC1224(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0897D3DC;
L_0897D3DC:;
    a0 = LD32(s0);
    goto L_0897D348;
L_0897D3E4:;
    a2 = s3 + 0;
    func_08AC1224(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0897D3EC;
L_0897D3EC:;
    a1 = LD32(s0+12);
    goto L_0897D33C;
}

/* 0897D3F4 */
u64 func_0897D3F4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897D3F4:;
    sp = sp - 16;
    a1 = a0 + 0;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0897D45C; }
    goto L_0897D408;
L_0897D408:;
    t0 = D_08C29EA4 - (-24924);
    v1 = LD32(t0-24924);
    cnd_ = v1 == 0;
    v0 = v1 + 0;
    if (cnd_) { goto L_0897D440; }
    goto L_0897D418;
L_0897D418:;
    v1 = LD32(v0);
    goto L_0897D41C;
L_0897D41C:;
    a0 = v0 + 12;
    a2 = v0 + 8;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_0897D450; }
    goto L_0897D434;
L_0897D434:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0897D41C; }
    goto L_0897D440;
L_0897D440:;
    v0 = t0 - 24924;
    a0 = LD32(v0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0897D468; }
    goto L_0897D450;
L_0897D450:;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0897D45C; }
    goto L_0897D458;
L_0897D458:;
    v0 = LD32(a3);
    goto L_0897D45C;
L_0897D45C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0897D468:;
    a2 = 1;
    { u64 r_ = func_08AC1340(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897D470;
L_0897D470:;
    a3 = v0 + 0;
    goto L_0897D450;
}

/* 0897D478 */
void func_0897D478(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0897D478:;
    sp = sp - 32;
    a1 = LD32(a0+4);
    cnd_ = a1 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0897D524; }
    goto L_0897D49C;
L_0897D49C:;
    s0 = D_08C29EBC - (-24900);
    v0 = s0 - 24900;
    v0 = LD32(v0+8);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0897D514; }
    goto L_0897D4B0;
L_0897D4B0:;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897D4B8;
L_0897D4B8:;
    a0 = v0 + 0;
    goto L_0897D4BC;
L_0897D4BC:;
    v0 = LD32(s0-24900);
    ST32(a0, s1);
    v1 = s0 - 24900;
    ST32(a0+8, v0);
    cnd_ = v0 == 0;
    ST32(a0+4, 0);
    if (cnd_) { goto L_0897D50C; }
    goto L_0897D4D4;
L_0897D4D4:;
    ST32(v0+4, a0);
    goto L_0897D4D8;
L_0897D4D8:;
    v1 = s0 - 24900;
    v0 = LD32(v1+16);
    ST32(s0-24900, a0);
    v0 = v0 + 1;
    ST32(v1+16, v0);
    goto L_0897D4EC;
L_0897D4EC:;
    v0 = 1;
    goto L_0897D4F0;
L_0897D4F0:;
    sp = sp + 32;
    return;
L_0897D50C:;
    ST32(v1+4, a0);
    goto L_0897D4D8;
L_0897D514:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897D51C;
L_0897D51C:;
    a0 = v0 + 0;
    goto L_0897D4BC;
L_0897D524:;
    s3 = D_08C29EA4 - (-24924);
    s2 = s3 - 24924;
    a0 = s2 + 0;
    a2 = 1;
    { u64 r_ = func_08AC1340(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897D538;
L_0897D538:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0897D5B8; }
    goto L_0897D540;
L_0897D540:;
    v0 = LD_U8(s2+8);
    cnd_ = v0 != 0;
    s0 = LD32(s1+4);
    if (cnd_) { goto L_0897D5B8; }
    goto L_0897D54C;
L_0897D54C:;
    v0 = LD32(s3-24924);
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0897D57C; }
    goto L_0897D558;
L_0897D558:;
    a0 = v1 + 12;
    s2 = v1 + 8;
    v1 = LD32(v1);
    v0 = s0 < v1;
    cnd_ = v1 == s0;
    if (v0 == 0) s2 = a0;
    if (cnd_) { goto L_0897D5B8; }
    goto L_0897D570;
L_0897D570:;
    v0 = LD32(s2);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0897D558; }
    goto L_0897D57C;
L_0897D57C:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897D584;
L_0897D584:;
    a1 = v0 + 0;
    ST32(v0, s0);
    v0 = s3 - 24924;
    a0 = a1 + 4;
    v1 = LD32(v0+4);
    ST32(a1+8, 0);
    v1 = v1 + 1;
    ST32(a1+12, 0);
    ST32(v0+4, v1);
    cnd_ = a0 == 0;
    ST32(s2, a1);
    if (cnd_) { goto L_0897D5B8; }
    goto L_0897D5B0;
L_0897D5B0:;
    ST32(a1+4, s1);
    goto L_0897D4EC;
L_0897D5B8:;
    cnd_ = s1 == 0;
    if (cnd_) { v0 = 0 + 0; goto L_0897D4F0; }
    goto L_0897D5C0;
L_0897D5C0:;
    v1 = LD32(s1);
    v0 = LD32(v1+4);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897D5D0;
L_0897D5D0:;
    v0 = 0 + 0;
    goto L_0897D4F0;
}

/* 0897D5D8 */
rv_t func_0897D5D8(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897D5D8:;
    sp = sp - 16;
    s0 = LD32(a0+4);
    cnd_ = s0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0897D68C; }
    goto L_0897D5F4;
L_0897D5F4:;
    a1 = D_08C29EBC - (-24900);
    a0 = LD32(a1-24900);
    cnd_ = a0 == 0;
    s0 = a1 - 24900;
    if (cnd_) { goto L_0897D61C; }
    goto L_0897D604;
L_0897D604:;
    v0 = LD32(a0);
    goto L_0897D608;
L_0897D608:;
    cnd_ = v0 == v1;
    if (cnd_) { v1 = LD32(a0+8); goto L_0897D630; }
    goto L_0897D610;
L_0897D610:;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0897D608; }
    goto L_0897D61C;
L_0897D61C:;
    goto L_0897D620;
L_0897D620:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0897D630:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_0897D680; }
    goto L_0897D638;
L_0897D638:;
    ST32(v1+4, v0);
    goto L_0897D63C;
L_0897D63C:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a1-24900, v1); goto L_0897D64C; }
    goto L_0897D648;
L_0897D648:;
    ST32(v0+8, v1);
    goto L_0897D64C;
L_0897D64C:;
    v0 = LD32(s0+12);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0897D670; }
    goto L_0897D658;
L_0897D658:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897D660;
L_0897D660:;
    v0 = LD32(s0+16);
    goto L_0897D664;
L_0897D664:;
    v0 = v0 - 1;
    ST32(s0+16, v0);
    goto L_0897D61C;
L_0897D670:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897D678;
L_0897D678:;
    v0 = LD32(s0+16);
    goto L_0897D664;
L_0897D680:;
    ST32(s0+4, v0);
    v1 = LD32(a0+8);
    goto L_0897D63C;
L_0897D68C:;
    v0 = D_08C29EA4 - (-24924);
    s1 = v0 - 24924;
    v1 = LD_U8(s1+8);
    cnd_ = v1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0897D6DC; }
    goto L_0897D6A0;
L_0897D6A0:;
    a0 = LD32(s1+12);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_0897D6C8; }
    goto L_0897D6AC;
L_0897D6AC:;
    v1 = LD32(s1+16);
    v0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0, s0);
    ST32(s1+16, v1);
    goto L_0897D61C;
L_0897D6C8:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897D6D0;
L_0897D6D0:;
    ST32(s1+12, v0);
    a0 = v0 + 0;
    goto L_0897D6AC;
L_0897D6DC:;
    a1 = s0 + 0;
    { u64 r_ = func_08AC0ED0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897D6E4;
L_0897D6E4:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_0897D620; }
    goto L_0897D6EC;
L_0897D6EC:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897D6F4;
L_0897D6F4:;
    goto L_0897D620;
}

/* 0897D6FC */
u64 func_0897D6FC(void)
{
    u32 v0 = 0, v1 = 0;
L_0897D6FC:;
    v1 = D_08C29ED0 - (-24880);
    v0 = LD_U8(v1-24880);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0897D708 */
rv_t func_0897D708(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0897D708:;
    sp = sp - 32;
    v0 = a0 ^ 0x1;
    s3 = a1 ^ 0xffff;
    v0 = v0 < 0x1u;
    s0 = s3 < 0x1u;
    v0 = s0 & v0;
    s1 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0897D828; }
    goto L_0897D73C;
L_0897D73C:;
    v0 = D_08AEE4A4 - (-7004);
    f2 = BITSF(LD32(v0-7004));
    v0 = 224;
    f0 = BITSF(v0);
    v0 = 255;
    t6 = D_08C29E54 - (-25004);
    f3 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 192;
    t7 = D_08C29E64 - (-24988);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f3 = f3 * f2;
    t1 = D_08C29E74 - (-24972);
    f4 = (float)(s32)FBITS(f0);
    f1 = f1 * f2;
    t2 = D_08C29E84 - (-24956);
    t3 = D_08C29E94 - (-24940);
    f4 = f4 * f2;
    t4 = D_08C29EA4 - (-24924);
    t5 = D_08C29EBC - (-24900);
    a1 = t4 - 24924;
    t0 = t5 - 24900;
    v0 = t6 - 25004;
    v1 = t7 - 24988;
    a0 = t1 - 24972;
    a2 = t2 - 24956;
    a3 = t3 - 24940;
    ST32(a3+12, FBITS(f1));
    ST32(a0+4, FBITS(f4));
    ST32(v0+8, FBITS(f1));
    ST32(v0+12, FBITS(f1));
    ST32(v0+4, FBITS(f1));
    ST32(v1+8, 0);
    ST32(v1+12, FBITS(f1));
    ST32(t0+16, 0);
    ST32(v1+4, 0);
    ST32(a0+8, 0);
    ST32(a0+12, FBITS(f1));
    ST32(a2+8, 0);
    ST32(a2+4, FBITS(f1));
    ST32(t1-24972, FBITS(f3));
    ST32(t6-25004, FBITS(f1));
    ST32(t7-24988, FBITS(f1));
    ST32(t2-24956, 0);
    ST32(a2+12, FBITS(f1));
    ST32(t3-24940, 0);
    ST32(t4-24924, 0);
    ST32(a1+20, 0);
    ST32(t5-24900, 0);
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, 0);
    ST32(a1+4, 0);
    ST8(a1+8, 0);
    ST32(a1+12, 0);
    ST32(a1+16, 0);
    ST32(t0+4, 0);
    ST32(t0+8, 0);
    ST32(t0+12, 0);
    goto L_0897D828;
L_0897D828:;
    s2 = s1 < 0x1u;
    v0 = s0 & s2;
    cnd_ = v0 == 0;
    v0 = s3 < 0x1u;
    if (cnd_) { goto L_0897D87C; }
    goto L_0897D838;
L_0897D838:;
    v0 = D_08C29EBC - (-24900);
    s0 = LD32(v0-24900);
    cnd_ = s0 == 0;
    s1 = v0 - 24900;
    if (cnd_) { goto L_0897D86C; }
    goto L_0897D848;
L_0897D848:;
    v1 = LD32(s1+12);
    goto L_0897D84C;
L_0897D84C:;
    v0 = s0 + 0;
    a0 = s0 + 0;
    cnd_ = v1 != 0;
    s0 = LD32(s0+8);
    if (cnd_) { goto L_0897D918; }
    goto L_0897D85C;
L_0897D85C:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897D864;
L_0897D864:;
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s1+12); goto L_0897D84C; }
    goto L_0897D86C;
L_0897D86C:;
    ST32(s1+16, 0);
    ST32(s1, 0);
    ST32(s1+4, 0);
    v0 = s3 < 0x1u;
    goto L_0897D87C;
L_0897D87C:;
    v0 = v0 & s2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0897D8D0; }
    goto L_0897D888;
L_0897D888:;
    v0 = D_08C29EA4 - (-24924);
    s0 = LD32(v0-24924);
    cnd_ = s0 == 0;
    s1 = v0 - 24924;
    if (cnd_) { goto L_0897D8B8; }
    goto L_0897D898;
L_0897D898:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0897D908; }
    goto L_0897D8A4;
L_0897D8A4:;
    a1 = LD32(s0+12);
    goto L_0897D8A8;
L_0897D8A8:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0897D8F8; }
    goto L_0897D8B0;
L_0897D8B0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897D8B8;
L_0897D8B8:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0897D8E8; }
    goto L_0897D8C4;
L_0897D8C4:;
    ST32(s1+16, 0);
    goto L_0897D8C8;
L_0897D8C8:;
    ST32(s1+12, 0);
    goto L_0897D8D0;
L_0897D8D0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0897D8E8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897D8F0;
L_0897D8F0:;
    ST32(s1+16, 0);
    goto L_0897D8C8;
L_0897D8F8:;
    a0 = s1 + 0;
    func_08AC13B8(a0, a1, t1, t2, t3);
    goto L_0897D900;
L_0897D900:;
    goto L_0897D8B0;
L_0897D908:;
    a0 = s1 + 0;
    func_08AC13B8(a0, a1, t1, t2, t3);
    goto L_0897D910;
L_0897D910:;
    a1 = LD32(s0+12);
    goto L_0897D8A8;
L_0897D918:;
    t_ = v1;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897D920;
L_0897D920:;
    goto L_0897D864;
}

/* 0897D928 */
float func_0897D928(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0897D928:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0897D954; }
    goto L_0897D940;
L_0897D940:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_0897D954; }
    goto L_0897D954;
L_0897D954:;
    return f0;
}

/* 0897D95C */
rv_t func_0897D95C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897D95C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0897D708(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897D970;
L_0897D970:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897D97C */
rv_t func_0897D97C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897D97C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0897D708(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897D990;
L_0897D990:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897D99C */
u32 func_0897D99C(void)
{
    u32 v0 = 0;
L_0897D99C:;
    v0 = 4;
    return v0;
}

/* 0897D9A4 */
void func_0897D9A4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0897D9A4:;
    sp = sp - 32;
    s0 = a0 + 160;
    s1 = a0 + 0;
    a0 = s0 + 0;
    s3 = D_08C29F04 - (-24828);
    func_08873BF8(a0);
    goto L_0897D9D0;
L_0897D9D0:;
    a1 = D_08AF9C28 - (-25560);
    a1 = a1 - 25560;
    a1 = a1 + 4;
    a0 = s1 + 0;
    f0 = func_08874764(a0, a1);
    goto L_0897D9E4;
L_0897D9E4:;
    v0 = D_08AF9BE4 - (-25628);
    v0 = v0 - 25628;
    ST32(s1, v0);
    v0 = v0 + 44;
    a0 = s1 + 88;
    ST32(s1+80, 0);
    s2 = s3 - 24828;
    ST32(s1+84, 0);
    ST32(s1+160, v0);
    a1 = LD32(s0+4);
    func_08A25B58(a0, a1);
    goto L_0897DA10;
L_0897DA10:;
    v0 = D_08AEE4B4 - (-6988);
    f0 = BITSF(LD32(v0-6988));
    v0 = 1;
    ST8(s1+108, v0);
    v0 = (u32)-32766;
    ST32(s1+104, FBITS(f0));
    ST8(s1+110, 0);
    ST8(s1+111, 0);
    ST32(s1+112, 0);
    ST8(s1+116, 0);
    ST16(s0+8, v0);
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897DA40;
L_0897DA40:;
    v1 = LD32(s0+4);
    cnd_ = v1 == v0;
    a0 = 12;
    if (cnd_) { goto L_0897DAB4; }
    goto L_0897DA4C;
L_0897DA4C:;
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    v0 = LD32(a1-12);
    v1 = v1 - 1;
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897DA6C;
L_0897DA6C:;
    a0 = LD32(s3-24828);
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
L_0897DAB4:;
    v0 = D_08B1C16D - (-16019);
    ST8(v0-16019, 0);
    goto L_0897DA4C;
}

/* 0897DAC0 */
rv_t func_0897DAC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897DAC0:;
    v1 = D_08AF9BE4 - (-25628);
    v1 = v1 - 25628;
    v0 = v1 + 44;
    ST32(a0, v1);
    sp = sp - 16;
    ST32(a0+160, v0);
    s1 = a0 + 160;
    s0 = a0 + 0;
    func_08A32688();
    goto L_0897DAF0;
L_0897DAF0:;
    a0 = D_08C29F04 - (-24828);
    a0 = a0 - 24828;
    a1 = s0 + 0;
    func_08AC1494(a0, a1, 0, 0, 0);
    goto L_0897DB00;
L_0897DB00:;
    v1 = LD_U8(s0+116);
    cnd_ = v1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0897DB88; }
    goto L_0897DB0C;
L_0897DB0C:;
    v0 = D_08C28F3C - (-28868);
    goto L_0897DB10;
L_0897DB10:;
    a0 = LD32(v0-28868);
    v1 = 2;
    cnd_ = a0 == v1;
    if (cnd_) { a0 = LD32(s0+72); goto L_0897DB50; }
    goto L_0897DB20;
L_0897DB20:;
    a1 = D_08AF9C28 - (-25560);
    goto L_0897DB24;
L_0897DB24:;
    a1 = a1 - 25560;
    a0 = s0 + 0;
    a1 = a1 + 4;
    func_08874844(a0, a1, 0, 0, 0);
    goto L_0897DB34;
L_0897DB34:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897DB3C;
L_0897DB3C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0897DB50:;
    v0 = a0 & 0x10;
    cnd_ = v0 == 0;
    a1 = D_08AF9C28 - (-25560);
    if (cnd_) { goto L_0897DB24; }
    goto L_0897DB5C;
L_0897DB5C:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 == 0;
    v0 = a0 & 0x2;
    if (cnd_) { goto L_0897DB24; }
    goto L_0897DB6C;
L_0897DB6C:;
    a2 = 0 + 0;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0897DB24; }
    goto L_0897DB78;
L_0897DB78:;
    a1 = LD32(s1+4);
    f0 = func_0897E024(a0, a2);
    goto L_0897DB80;
L_0897DB80:;
    a1 = D_08AF9C28 - (-25560);
    goto L_0897DB24;
L_0897DB88:;
    { u64 r_ = func_08A0ADFC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897DB90;
L_0897DB90:;
    v0 = D_08C28F3C - (-28868);
    goto L_0897DB10;
}

/* 0897DB98 */
rv_t func_0897DB98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897DB98:;
    v1 = D_08AF9BE4 - (-25628);
    v1 = v1 - 25628;
    v0 = v1 + 44;
    ST32(a0, v1);
    sp = sp - 16;
    ST32(a0+160, v0);
    s1 = a0 + 160;
    s0 = a0 + 0;
    func_08A32688();
    goto L_0897DBC8;
L_0897DBC8:;
    a0 = D_08C29F04 - (-24828);
    a0 = a0 - 24828;
    a1 = s0 + 0;
    func_08AC1494(a0, a1, 0, 0, 0);
    goto L_0897DBD8;
L_0897DBD8:;
    v1 = LD_U8(s0+116);
    cnd_ = v1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0897DC68; }
    goto L_0897DBE4;
L_0897DBE4:;
    v0 = D_08C28F3C - (-28868);
    goto L_0897DBE8;
L_0897DBE8:;
    a0 = LD32(v0-28868);
    v1 = 2;
    cnd_ = a0 == v1;
    if (cnd_) { a0 = LD32(s0+72); goto L_0897DC30; }
    goto L_0897DBF8;
L_0897DBF8:;
    a1 = D_08AF9C28 - (-25560);
    goto L_0897DBFC;
L_0897DBFC:;
    a1 = a1 - 25560;
    a1 = a1 + 4;
    a0 = s0 + 0;
    func_08874844(a0, a1, 0, 0, 0);
    goto L_0897DC0C;
L_0897DC0C:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897DC14;
L_0897DC14:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897DC1C;
L_0897DC1C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0897DC30:;
    v0 = a0 & 0x10;
    cnd_ = v0 == 0;
    a1 = D_08AF9C28 - (-25560);
    if (cnd_) { goto L_0897DBFC; }
    goto L_0897DC3C;
L_0897DC3C:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 == 0;
    v0 = a0 & 0x2;
    if (cnd_) { goto L_0897DBFC; }
    goto L_0897DC4C;
L_0897DC4C:;
    a2 = 0 + 0;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0897DBFC; }
    goto L_0897DC58;
L_0897DC58:;
    a1 = LD32(s1+4);
    f0 = func_0897E024(a0, a2);
    goto L_0897DC60;
L_0897DC60:;
    a1 = D_08AF9C28 - (-25560);
    goto L_0897DBFC;
L_0897DC68:;
    { u64 r_ = func_08A0ADFC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897DC70;
L_0897DC70:;
    v0 = D_08C28F3C - (-28868);
    goto L_0897DBE8;
}

/* 0897DC78 */
rv_t func_0897DC78(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897DC78:;
    sp = sp - 16;
    v0 = D_08C29328 - (-27864);
    s0 = a0 + 0;
    t0 = a0 + 22;
    a1 = 0 + 0;
    a2 = 21;
    a3 = 1;
    v1 = LD32(v0-27864);
    v0 = 5;
    cnd_ = v1 == v0;
    a0 = a0 + 118;
    if (cnd_) { goto L_0897DCC0; }
    goto L_0897DCB0;
L_0897DCB0:;
    v0 = LD32(s0+72);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    s1 = 0xe812;
    if (cnd_) { goto L_0897DCC4; }
    goto L_0897DCC0;
L_0897DCC0:;
    s1 = 32;
    goto L_0897DCC4;
L_0897DCC4:;
    v0 = LD32(s0+76);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = D_08ADDB80 - (-9344); goto L_0897DD0C; }
    goto L_0897DCD0;
L_0897DCD0:;
    a0 = v0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_0897DCD8;
L_0897DCD8:;
    a1 = D_08ADDB88 - (-9336);
    a0 = s0 + 118;
    a1 = a1 - 9336;
    t0 = s1 + 0;
    t1 = v0 + 0;
    a2 = 21;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897DCF8;
L_0897DCF8:;
    goto L_0897DCFC;
L_0897DCFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0897DD0C:;
    a1 = a1 - 9344;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897DD14;
L_0897DD14:;
    goto L_0897DCFC;
}

/* 0897DD1C */
u64 func_0897DD1C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897DD1C:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0897DD64; }
    goto L_0897DD34;
L_0897DD34:;
    v0 = LD_U8(a0+116);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0897DD50; }
    goto L_0897DD40;
L_0897DD40:;
    goto L_0897DD44;
L_0897DD44:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0897DD50:;
    { u64 r_ = func_08A0AD64(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897DD58;
L_0897DD58:;
    v0 = 1;
    ST8(s0+116, v0);
    goto L_0897DD40;
L_0897DD64:;
    v0 = LD_U8(a0+116);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0897DD44; }
    goto L_0897DD70;
L_0897DD70:;
    { u64 r_ = func_08A0ADFC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897DD78;
L_0897DD78:;
    ST8(s0+116, 0);
    goto L_0897DD40;
}

/* 0897DD80 */
u64 func_0897DD80(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
L_0897DD80:;
    v1 = LD32(a0+72);
    a1 = a0 + 22;
    v0 = a0 + 118;
    a0 = (v1 >> 1) & 0x1;
    v1 = v1 & 0x1;
    v1 = v1 & a0;
    if (v1 == 0) v0 = a1;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0897DDA0 */
rv_t func_0897DDA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0897DDA0:;
    sp = sp - 48;
    s1 = a0 + 0;
    a0 = a0 + 88;
    s0 = a1 + 0;
    { rv_t r_ = func_08A25B8C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897DDD0;
L_0897DDD0:;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_0897DDFC; }
    goto L_0897DDD8;
L_0897DDD8:;
    v1 = LD_U16(s0+16);
    v0 = 90;
    cnd_ = v1 == v0;
    a1 = s0 + 0;
    if (cnd_) { goto L_0897DE24; }
    goto L_0897DDE8;
L_0897DDE8:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    { rv_t r_ = func_08873DB8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897DDF8;
L_0897DDF8:;
    v1 = v0 + 0;
    goto L_0897DDFC;
L_0897DDFC:;
    v0 = v1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0897DE24:;
    f20 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s1+80));
    s2 = LD32(s0+24);
    s3 = 1;
    fcc = FCMP(f0, f20, 12);
    s0 = 1;
    cnd_ = !fcc;
    s4 = 1;
    if (cnd_) { goto L_0897DEC0; }
    goto L_0897DE44;
L_0897DE44:;
    v1 = LD32(s2+60);
    v0 = LD32(s1+64);
    cnd_ = v1 == v0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0897DE5C; }
    goto L_0897DE54;
L_0897DE54:;
    v0 = LD32(s2+72);
    s0 = 0 < v0;
    goto L_0897DE5C;
L_0897DE5C:;
    v1 = LD32(s2+68);
    v0 = LD32(s1+72);
    a0 = s1 + 16;
    a1 = s2 + 12;
    a3 = v0 ^ v1;
    a2 = 64;
    s3 = (a3 >> 2) & 0x1;
    s4 = (a3 >> 4) & 0x1;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897DE80;
L_0897DE80:;
    v1 = LD32(s1+72);
    v0 = LD_U8(s1+111);
    v1 = v1 & 0x1;
    cnd_ = v0 == v1;
    ST32(s1+80, FBITS(f20));
    if (cnd_) { goto L_0897DEA0; }
    goto L_0897DE94;
L_0897DE94:;
    v0 = LD32(s1+112);
    v0 = v0 + 1;
    ST32(s1+112, v0);
    goto L_0897DEA0;
L_0897DEA0:;
    v0 = LD32(s1+112);
    v0 = v0 < 0x3u;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(s1+84)); goto L_0897DEC4; }
    goto L_0897DEB0;
L_0897DEB0:;
    v0 = LD_U8(s1+72);
    ST32(s1+112, 0);
    v0 = v0 & 0x1;
    ST8(s1+111, v0);
    goto L_0897DEC0;
L_0897DEC0:;
    f0 = BITSF(LD32(s1+84));
    goto L_0897DEC4;
L_0897DEC4:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    if (cnd_) { a2 = LD_U8(s2+4); goto L_0897E00C; }
    goto L_0897DED4;
L_0897DED4:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_0897DFFC; }
    goto L_0897DEDC;
L_0897DEDC:;
    cnd_ = s3 != 0;
    if (cnd_) { a1 = LD32(s1+72); goto L_0897DFE8; }
    goto L_0897DEE4;
L_0897DEE4:;
    cnd_ = s4 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0897DFBC; }
    goto L_0897DEEC;
L_0897DEEC:;
    v0 = D_08B2BB6D - (-17555);
    goto L_0897DEF0;
L_0897DEF0:;
    v1 = LD_U8(v0-17555);
    cnd_ = v1 == 0;
    v1 = 1;
    if (cnd_) { goto L_0897DDFC; }
    goto L_0897DEFC;
L_0897DEFC:;
    v1 = LD32(s1+72);
    v0 = v1 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = 1; goto L_0897DDFC; }
    goto L_0897DF0C;
L_0897DF0C:;
    v0 = LD_U8(s1+110);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = 1; goto L_0897DDFC; }
    goto L_0897DF18;
L_0897DF18:;
    v0 = v1 & 0x10;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_0897DDFC; }
    goto L_0897DF24;
L_0897DF24:;
    v0 = D_08AEE4B8 - (-6984);
    f1 = BITSF(LD32(s2+8));
    f0 = BITSF(LD32(v0-6984));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_0897DF48; }
    goto L_0897DF40;
L_0897DF40:;
    v1 = 1;
    goto L_0897DDFC;
L_0897DF48:;
    ST32(s1+104, FBITS(f1));
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897DF50;
L_0897DF50:;
    a0 = LD32(s1);
    v1 = LD32(a0-12);
    v1 = s1 + v1;
    a1 = LD32(v1+4);
    cnd_ = v0 == a1;
    v0 = D_08B1BB98 - (-17512);
    if (cnd_) { goto L_0897DFB0; }
    goto L_0897DF68;
L_0897DF68:;
    f1 = BITSF(LD32(v0-17512));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    v0 = 1;
    if (cnd_) { goto L_0897DF98; }
    goto L_0897DF80;
L_0897DF80:;
    f0 = BITSF(LD32(s1+104));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { a0 = s1 + 0; goto L_0897DFA0; }
    goto L_0897DF94;
L_0897DF94:;
    v0 = 1;
    goto L_0897DF98;
L_0897DF98:;
    ST8(s1+110, v0);
    goto L_0897DF40;
L_0897DFA0:;
    a2 = 1;
    f0 = func_0897E024(a0, a2);
    goto L_0897DFA8;
L_0897DFA8:;
    v0 = 1;
    goto L_0897DF98;
L_0897DFB0:;
    f0 = BITSF(LD32(s2+8));
    ST32(v0-17512, FBITS(f0));
    goto L_0897DF94;
L_0897DFBC:;
    s0 = LD32(v0-12);
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897DFC4;
L_0897DFC4:;
    s0 = s1 + s0;
    v1 = LD32(s0+4);
    cnd_ = v1 != v0;
    v0 = D_08B2BB6D - (-17555);
    if (cnd_) { goto L_0897DEF0; }
    goto L_0897DFD4;
L_0897DFD4:;
    v0 = LD32(s1+72);
    v1 = D_08B1C16D - (-16019);
    v0 = (v0 >> 4) & 0x1;
    ST8(v1-16019, v0);
    goto L_0897DEEC;
L_0897DFE8:;
    a0 = s1 + 0;
    a1 = (a1 >> 2) & 0x1;
    { u64 r_ = func_0897DD1C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897DFF4;
L_0897DFF4:;
    goto L_0897DEE4;
L_0897DFFC:;
    a0 = s1 + 0;
    { rv_t r_ = func_0897DC78(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897E004;
L_0897E004:;
    goto L_0897DEDC;
L_0897E00C:;
    a1 = LD32(s2);
    f12 = f20;
    a0 = s1 + 0;
    { rv_t r_ = func_0897E148(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897E01C;
L_0897E01C:;
    goto L_0897DED4;
}

/* 0897E024 */
float func_0897E024(u32 a0, u32 a2)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[416] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 416);
L_0897E024:;
    sp = sp - 416;
    s2 = a0 + 0;
    s0 = a2 & 0xff;
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897E044;
L_0897E044:;
    a2 = v0 + 0;
    a0 = D_08C29F04 - (-24828);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 24828;
    if (cnd_) { goto L_0897E110; }
    goto L_0897E058;
L_0897E058:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24828);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0897E0A8; }
    goto L_0897E07C;
L_0897E07C:;
    a0 = LD32(a1);
    goto L_0897E080;
L_0897E080:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0897E128; }
    goto L_0897E098;
L_0897E098:;
    a1 = LD32(a1+4);
    goto L_0897E09C;
L_0897E09C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0897E080; }
    goto L_0897E0A4;
L_0897E0A4:;
    v1 = 0 + 0;
    goto L_0897E0A8;
L_0897E0A8:;
    cnd_ = v1 == 0;
    v0 = 434;
    if (cnd_) { goto L_0897E110; }
    goto L_0897E0B0;
L_0897E0B0:;
    a1 = LD32(s2+64);
    v1 = LD32(v1+64);
    a0 = 433;
    v1 = v1 ^ a1;
    if (s0 == 0) a0 = v0;
    a1 = 0 + 0;
    v0 = 2;
    s0 = 1;
    if (v1 != 0) s0 = v0;
    v0 = func_0897A064(a0, a1);
    goto L_0897E0D8;
L_0897E0D8:;
    a0 = s2 + 0;
    s1 = v0 + 0;
    { u64 r_ = func_0897DD80(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897E0E4;
L_0897E0E4:;
    t0 = v0 + 0;
    a0 = sp + 0;
    a1 = s1 + 0;
    a2 = 200;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897E0FC;
L_0897E0FC:;
    f12 = BITSF(0);
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 1;
    { rv_t r_ = func_08A4EDDC(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897E110;
L_0897E110:;
    sp = sp + 416;
    return f0;
L_0897E128:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0897E098; }
    goto L_0897E134;
L_0897E134:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0897E09C; }
    goto L_0897E140;
L_0897E140:;
    goto L_0897E0A8;
}

/* 0897E148 */
rv_t func_0897E148(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0897E148:;
    sp = sp - 48;
    a2 = a2 & 0xff;
    s2 = a0 + 0;
    s1 = a1 + 0;
    s0 = LD32(a0+4);
    cnd_ = s0 == a1;
    f20 = f12;
    if (cnd_) { goto L_0897E340; }
    goto L_0897E17C;
L_0897E17C:;
    a0 = D_08C2B0A8 - (-20312);
    goto L_0897E180;
L_0897E180:;
    v0 = 999;
    cnd_ = s1 == v0;
    v1 = a0 - 20312;
    if (cnd_) { goto L_0897E318; }
    goto L_0897E18C;
L_0897E18C:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-20312);
    v0 = v0 - 1;
    v0 = s1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0897E1DC; }
    goto L_0897E1B0;
L_0897E1B0:;
    a0 = LD32(a1);
    goto L_0897E1B4;
L_0897E1B4:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s1;
    if (cnd_) { v0 = LD32(v1+16); goto L_0897E320; }
    goto L_0897E1CC;
L_0897E1CC:;
    a1 = LD32(a1+4);
    goto L_0897E1D0;
L_0897E1D0:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0897E1B4; }
    goto L_0897E1D8;
L_0897E1D8:;
    a0 = 0 + 0;
    goto L_0897E1DC;
L_0897E1DC:;
    cnd_ = a0 == 0;
    a2 = 1;
    if (cnd_) { goto L_0897E1F0; }
    goto L_0897E1E4;
L_0897E1E4:;
    v0 = func_089C6AE8(a0, t1, t2, t3);
    goto L_0897E1EC;
L_0897E1EC:;
    a2 = v0 + 0;
    goto L_0897E1F0;
L_0897E1F0:;
    s3 = D_08C2B3A4 - (-19548);
    v0 = 999;
    cnd_ = s0 == v0;
    v1 = s3 - 19548;
    if (cnd_) { goto L_0897E288; }
    goto L_0897E200;
L_0897E200:;
    v0 = LD32(v1+4);
    v1 = LD32(s3-19548);
    v0 = v0 - 1;
    v0 = s0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0897E250; }
    goto L_0897E224;
L_0897E224:;
    a0 = LD32(a1);
    goto L_0897E228;
L_0897E228:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(v1+16); goto L_0897E2F8; }
    goto L_0897E240;
L_0897E240:;
    a1 = LD32(a1+4);
    goto L_0897E244;
L_0897E244:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0897E228; }
    goto L_0897E24C;
L_0897E24C:;
    a0 = 0 + 0;
    goto L_0897E250;
L_0897E250:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = s3 - 19548; goto L_0897E28C; }
    goto L_0897E258;
L_0897E258:;
    cnd_ = a2 == 0;
    if (cnd_) { v1 = LD32(s2); goto L_0897E270; }
    goto L_0897E260;
L_0897E260:;
    v0 = LD_U8(a0+232);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a0); goto L_0897E2E4; }
    goto L_0897E26C;
L_0897E26C:;
    v1 = LD32(s2);
    goto L_0897E270;
L_0897E270:;
    a1 = LD32(a0);
    v0 = LD32(v1-12);
    a2 = LD32(a1+396);
    v0 = s2 + v0;
    t_ = a2;
    a1 = LD32(v0+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897E288;
L_0897E288:;
    a0 = s3 - 19548;
    goto L_0897E28C;
L_0897E28C:;
    a1 = s1 + 0;
    a2 = 1;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897E298;
L_0897E298:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0897E2BC; }
    goto L_0897E2A0;
L_0897E2A0:;
    v1 = LD32(s2);
    a1 = LD32(v0);
    v0 = LD32(v1-12);
    a2 = LD32(a1+396);
    v0 = s2 + v0;
    t_ = a2;
    a1 = LD32(v0+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897E2BC;
L_0897E2BC:;
    ST32(s2+4, s1);
    ST32(s2+84, FBITS(f20));
    goto L_0897E2C8;
L_0897E2C8:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0897E2E4:;
    v0 = LD32(v1+396);
    t_ = v0;
    a1 = 999;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897E2F0;
L_0897E2F0:;
    a0 = s3 - 19548;
    goto L_0897E28C;
L_0897E2F8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0897E244; }
    goto L_0897E304;
L_0897E304:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0897E244; }
    goto L_0897E310;
L_0897E310:;
    goto L_0897E250;
L_0897E318:;
    a2 = 1;
    goto L_0897E1F0;
L_0897E320:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0897E1D0; }
    goto L_0897E32C;
L_0897E32C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0897E1D0; }
    goto L_0897E338;
L_0897E338:;
    goto L_0897E1DC;
L_0897E340:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_0897E2C8; }
    goto L_0897E348;
L_0897E348:;
    a0 = D_08C2B0A8 - (-20312);
    goto L_0897E180;
}

/* 0897E350 */
u32 func_0897E350(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_0897E350:;
    v0 = LD32(a0+72);
    v1 = (v0 >> 1) & 0x1;
    v0 = (v0 >> 5) & 0x1;
    if (v1 != 0) v0 = 0;
    return v0;
}

/* 0897E364 */
u32 func_0897E364(u32 a0)
{
    u32 v0 = 0;
L_0897E364:;
    v0 = LD32(a0+72);
    v0 = (v0 >> 4) & 0x1;
    return v0;
}

/* 0897E370 */
rv_t func_0897E370(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897E370:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 180;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897E38C;
L_0897E38C:;
    a0 = v0 + 0;
    s1 = v0 + 0;
    func_0897D9A4(a0);
    goto L_0897E398;
L_0897E398:;
    a1 = LD32(s0+24);
    a0 = s1 + 4;
    a2 = 76;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897E3A8;
L_0897E3A8:;
    a0 = s1 + 0;
    { rv_t r_ = func_0897DC78(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897E3B0;
L_0897E3B0:;
    v0 = LD_U8(s1+96);
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0897E3C8; }
    goto L_0897E3C0;
L_0897E3C0:;
    v0 = LD32(s1+72);
    a1 = (v0 >> 2) & 0x1;
    goto L_0897E3C8;
L_0897E3C8:;
    a1 = a1 & 0xff;
    { u64 r_ = func_0897DD1C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897E3D0;
L_0897E3D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897E3E4 */
rv_t func_0897E3E4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0897E3E4:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0897E508; }
    goto L_0897E418;
L_0897E418:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEE4BC - (-6980);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-6980));
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
    t0 = D_08C29ED4 - (-24876);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C29EE4 - (-24860);
    a3 = D_08C29EF4 - (-24844);
    v1 = t0 - 24876;
    a1 = v0 - 24860;
    a2 = a3 - 24844;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C29F04 - (-24828);
    s0 = s3 - 24828;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-24860, FBITS(f5));
    v0 = 4;
    ST32(t0-24876, FBITS(f1));
    ST32(a3-24844, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897E4D0;
L_0897E4D0:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-24828, v0);
    if (cnd_) { goto L_0897E4FC; }
    goto L_0897E4E0;
L_0897E4E0:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_0897E4E8;
L_0897E4E8:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0897E4E8; }
    goto L_0897E4FC;
L_0897E4FC:;
    v0 = s3 - 24828;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_0897E508;
L_0897E508:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0897E52C; }
    goto L_0897E51C;
L_0897E51C:;
    v0 = D_08C29F04 - (-24828);
    a0 = LD32(v0-24828);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0897E544; }
    goto L_0897E52C;
L_0897E52C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0897E544:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897E54C;
L_0897E54C:;
    goto L_0897E52C;
}

/* 0897E554 */
rv_t func_0897E554(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897E554:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0897E3E4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897E568;
L_0897E568:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897E574 */
rv_t func_0897E574(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897E574:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0897E3E4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897E588;
L_0897E588:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897E594 */
void func_0897E594(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0897E594:;
    sp = sp - 32;
    s1 = a0 + 0;
    s3 = D_08C29FC4 - (-24636);
    s2 = s3 - 24636;
    func_08981788(a0, a1);
    goto L_0897E5BC;
L_0897E5BC:;
    v0 = D_08B45A9C - (23196);
    ST32(s1+168, 0);
    v1 = v0 + 23196;
    t0 = D_08B45AA8 - (23208);
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v0+23196));
    v0 = s1 + 180;
    ST32(v0+8, FBITS(f0));
    v1 = t0 + 23208;
    a1 = s1 + 192;
    ST32(v0+4, FBITS(f1));
    v0 = D_08AF9C90 - (-25456);
    v0 = v0 - 25456;
    ST32(s1, v0);
    v0 = 100;
    a3 = 999;
    ST32(s1+180, FBITS(f2));
    a2 = 1;
    a0 = s1 + 300;
    ST16(s1+172, 0);
    ST32(s1+176, 0);
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    f3 = BITSF(LD32(v1+12));
    f4 = BITSF(LD32(v1+16));
    f5 = BITSF(LD32(v1+20));
    f6 = BITSF(LD32(v1+24));
    f7 = BITSF(LD32(v1+28));
    f0 = BITSF(LD32(v1+32));
    f8 = BITSF(LD32(t0+23208));
    ST32(a1+4, FBITS(f1));
    ST32(a1+8, FBITS(f2));
    ST32(a1+12, FBITS(f3));
    ST32(a1+16, FBITS(f4));
    ST32(a1+20, FBITS(f5));
    ST32(a1+24, FBITS(f6));
    ST32(a1+28, FBITS(f7));
    ST32(a1+32, FBITS(f0));
    ST32(s1+236, v0);
    v0 = D_08AEE4C4 - (-6972);
    f0 = BITSF(LD32(v0-6972));
    ST32(s1+192, FBITS(f8));
    ST32(s1+244, a3);
    ST32(s1+232, a3);
    ST32(s1+240, a3);
    ST16(s1+228, 0);
    ST32(s1+248, FBITS(f0));
    a1 = LD32(s1+4);
    ST32(s1+252, 0);
    ST8(s1+256, 0);
    func_08A26584(a0, a1, a2);
    goto L_0897E68C;
L_0897E68C:;
    v0 = (u32)-32755;
    ST16(s1+8, v0);
    v0 = 3;
    a0 = s1 + 0;
    ST32(s1+324, v0);
    f0 = func_0897F158(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0897E6A4;
L_0897E6A4:;
    v1 = LD32(s1+96);
    ST32(s1+168, FBITS(f0));
    a0 = 12;
    v1 = v1 | 0x2;
    ST32(s1+96, v1);
    v0 = LD32(s2+4);
    s0 = LD32(s1+4);
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897E6CC;
L_0897E6CC:;
    a0 = LD32(s3-24636);
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

/* 0897E714 */
rv_t func_0897E714(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897E714:;
    v0 = D_08AF9C90 - (-25456);
    v0 = v0 - 25456;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C29FC4 - (-24636);
    a1 = s0 + 0;
    a0 = a0 - 24636;
    func_08AC158C(a0, a1, t1, t2, t3);
    goto L_0897E740;
L_0897E740:;
    a0 = s0 + 300;
    func_08A26640(a0, 0, 0, 0);
    goto L_0897E748;
L_0897E748:;
    a0 = s0 + 0;
    { u64 r_ = func_089818A8(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897E750;
L_0897E750:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897E760 */
rv_t func_0897E760(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897E760:;
    v0 = D_08AF9C90 - (-25456);
    v0 = v0 - 25456;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C29FC4 - (-24636);
    a1 = s0 + 0;
    a0 = a0 - 24636;
    func_08AC158C(a0, a1, t1, t2, t3);
    goto L_0897E78C;
L_0897E78C:;
    a0 = s0 + 300;
    func_08A26640(a0, 0, 0, 0);
    goto L_0897E794;
L_0897E794:;
    a0 = s0 + 0;
    { u64 r_ = func_089818A8(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897E79C;
L_0897E79C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897E7A4;
L_0897E7A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897E7B4 */
rv_t func_0897E7B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0897E7B4:;
    sp = sp - 32;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0897E7E8; }
    goto L_0897E7D4;
L_0897E7D4:;
    v1 = D_08C2932C - (-27860);
    v0 = LD_U8(v1-27860);
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a0); goto L_0897E920; }
    goto L_0897E7E8;
L_0897E7E8:;
    v1 = (u32)(s32)LD_S16(s0+40);
    goto L_0897E7EC;
L_0897E7EC:;
    v0 = (u32)(s32)LD_S16(s0+172);
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0897E808; }
    goto L_0897E7F8;
L_0897E7F8:;
    a1 = 10005;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897E800;
L_0897E800:;
    v0 = LD_U16(s0+40);
    ST16(s0+172, v0);
    goto L_0897E808;
L_0897E808:;
    v1 = LD32(s0);
    v0 = LD32(v1+96);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897E818;
L_0897E818:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_0897E8CC; }
    goto L_0897E820;
L_0897E820:;
    f0 = BITSF(LD32(s0+168));
    goto L_0897E824;
L_0897E824:;
    f20 = BITSF(0);
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(s0); goto L_0897E854; }
    goto L_0897E838;
L_0897E838:;
    a0 = s0 + 0;
    { rv_t r_ = func_08982078(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897E840;
L_0897E840:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0897E854:;
    v0 = LD32(v1+100);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897E860;
L_0897E860:;
    cnd_ = v0 == 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_0897E838; }
    goto L_0897E868;
L_0897E868:;
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s0+168));
    f0 = f0 - f1;
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    ST32(s0+168, FBITS(f0));
    if (cnd_) { goto L_0897E838; }
    goto L_0897E884;
L_0897E884:;
    { u64 r_ = func_089739F8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897E88C;
L_0897E88C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0897E838; }
    goto L_0897E894;
L_0897E894:;
    a0 = s0 + 0;
    v0 = func_0897E958(a0, 0, 0, 0);
    goto L_0897E89C;
L_0897E89C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0897E8BC; }
    goto L_0897E8A4;
L_0897E8A4:;
    v1 = LD32(s0);
    v0 = LD32(v1+116);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897E8B4;
L_0897E8B4:;
    goto L_0897E838;
L_0897E8BC:;
    a0 = s0 + 0;
    f0 = func_0897F158(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0897E8C4;
L_0897E8C4:;
    ST32(s0+168, FBITS(f0));
    goto L_0897E838;
L_0897E8CC:;
    v0 = LD32(v1+100);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897E8D8;
L_0897E8D8:;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s0+168)); goto L_0897E824; }
    goto L_0897E8E0;
L_0897E8E0:;
    v1 = LD32(s0+28);
    v0 = 999;
    cnd_ = v1 != v0;
    if (cnd_) { f0 = BITSF(LD32(s0+168)); goto L_0897E824; }
    goto L_0897E8F0;
L_0897E8F0:;
    v1 = LD32(s0);
    v0 = LD32(v1+116);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897E900;
L_0897E900:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0897E914; }
    goto L_0897E908;
L_0897E908:;
    v0 = LD32(s0+96);
    v0 = (v0 & ~(0x1u << 2)) | ((v1 & 0x1) << 2);
    ST32(s0+96, v0);
    goto L_0897E914;
L_0897E914:;
    v0 = D_08AEE4C8 - (-6968);
    f0 = BITSF(LD32(v0-6968));
    goto L_0897E8C4;
L_0897E920:;
    v0 = LD32(v1+96);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897E92C;
L_0897E92C:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = (u32)(s32)LD_S16(s0+40); goto L_0897E7EC; }
    goto L_0897E934;
L_0897E934:;
    a0 = s0 + 0;
    func_0897FCFC(a0);
    goto L_0897E93C;
L_0897E93C:;
    v0 = LD32(s0+96);
    a0 = s0 + 0;
    v0 = v0 | 0x4;
    ST32(s0+96, v0);
    f0 = func_08982F58(a0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0897E950;
L_0897E950:;
    v1 = (u32)(s32)LD_S16(s0+40);
    goto L_0897E7EC;
}

/* 0897E958 */
u32 func_0897E958(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0897E958:;
    sp = sp - 48;
    s1 = a0 + 0;
    v0 = 4;
    a0 = LD32(a0+88);
    cnd_ = a0 == v0;
    a2 = D_08C2C664 - (-14748);
    if (cnd_) { goto L_0897E9D0; }
    goto L_0897E988;
L_0897E988:;
    a1 = 0 + 0;
    v0 = func_08973CD8(a0, a1);
    goto L_0897E990;
L_0897E990:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0897E9BC; }
    goto L_0897E998;
L_0897E998:;
    v0 = 0 + 0;
    goto L_0897E99C;
L_0897E99C:;
    sp = sp + 48;
    return v0;
L_0897E9BC:;
    a0 = LD32(s1+88);
    { u64 r_ = func_08973A0C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897E9C4;
L_0897E9C4:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0897E99C; }
    goto L_0897E9CC;
L_0897E9CC:;
    a2 = D_08C2C664 - (-14748);
    goto L_0897E9D0;
L_0897E9D0:;
    v0 = a2 - 14748;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_0897EA44; }
    goto L_0897E9F8;
L_0897E9F8:;
    a2 = LD32(a2-14748);
    a3 = a1 + 0;
    goto L_0897EA00;
L_0897EA00:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0897EA34; }
    goto L_0897EA18;
L_0897EA18:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0897EA48; }
    goto L_0897EA28;
L_0897EA28:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0897EA18; }
    goto L_0897EA34;
L_0897EA34:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0897EA00; }
    goto L_0897EA44;
L_0897EA44:;
    v0 = LD32(sp+8);
    goto L_0897EA48;
L_0897EA48:;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0897EA8C; }
    goto L_0897EA50;
L_0897EA50:;
    v0 = LD32(v0);
    goto L_0897EA54;
L_0897EA54:;
    a0 = sp + 0;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_0897EA70; }
    goto L_0897EA60;
L_0897EA60:;
    v0 = LD32(v0+96);
    v1 = 1;
    v0 = (v0 >> 4) & 0x1;
    if (v0 != 0) s0 = v1;
    goto L_0897EA70;
L_0897EA70:;
    { u64 r_ = func_08ABCF50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897EA78;
L_0897EA78:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v0); goto L_0897EA54; }
    goto L_0897EA84;
L_0897EA84:;
    cnd_ = s0 != 0;
    v0 = D_08B2BB6D - (-17555);
    if (cnd_) { goto L_0897EB34; }
    goto L_0897EA8C;
L_0897EA8C:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0897E998; }
    goto L_0897EAA0;
L_0897EAA0:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0897E998; }
    goto L_0897EAAC;
L_0897EAAC:;
    v0 = LD32(s1);
    goto L_0897EAB0;
L_0897EAB0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0897EB04; }
    goto L_0897EAC4;
L_0897EAC4:;
    v0 = LD_U8(s0+8);
    goto L_0897EAC8;
L_0897EAC8:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0897EB2C; }
    goto L_0897EAD0;
L_0897EAD0:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0897EB1C; }
    goto L_0897EAD8;
L_0897EAD8:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0897EAE0;
L_0897EAE0:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897EAEC;
L_0897EAEC:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0897EAF8;
L_0897EAF8:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0897EAC8; }
    goto L_0897EB00;
L_0897EB00:;
    v1 = LD32(s1+4);
    goto L_0897EB04;
L_0897EB04:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0897EAB0; }
    goto L_0897EB14;
L_0897EB14:;
    v0 = 0 + 0;
    goto L_0897E99C;
L_0897EB1C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0897EAE0;
L_0897EB2C:;
    s0 = LD32(s0+4);
    goto L_0897EAF8;
L_0897EB34:;
    v1 = LD_U8(v0-17555);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0897EBE8; }
    goto L_0897EB40;
L_0897EB40:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0897EBC8; }
    goto L_0897EB54;
L_0897EB54:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0897EBC8; }
    goto L_0897EB60;
L_0897EB60:;
    v0 = LD32(s1);
    goto L_0897EB64;
L_0897EB64:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0897EBB8; }
    goto L_0897EB78;
L_0897EB78:;
    v0 = LD_U8(s0+8);
    goto L_0897EB7C;
L_0897EB7C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0897EBE0; }
    goto L_0897EB84;
L_0897EB84:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0897EBD0; }
    goto L_0897EB8C;
L_0897EB8C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0897EB94;
L_0897EB94:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897EBA0;
L_0897EBA0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0897EBAC;
L_0897EBAC:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0897EB7C; }
    goto L_0897EBB4;
L_0897EBB4:;
    v1 = LD32(s1+4);
    goto L_0897EBB8;
L_0897EBB8:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0897EB64; }
    goto L_0897EBC8;
L_0897EBC8:;
    v0 = 1;
    goto L_0897E99C;
L_0897EBD0:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0897EB94;
L_0897EBE0:;
    s0 = LD32(s0+4);
    goto L_0897EBAC;
L_0897EBE8:;
    a0 = LD32(s1+88);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897EBF0;
L_0897EBF0:;
    s3 = v0 + 0;
    v0 = 2;
    cnd_ = s3 == v0;
    if (cnd_) { goto L_0897F140; }
    goto L_0897EC00;
L_0897EC00:;
    v0 = D_08C28F60 - (-28832);
    a0 = LD32(v0-28832);
    v1 = 5;
    cnd_ = a0 == v1;
    if (cnd_) { v1 = LD32(s1+104); goto L_0897ED44; }
    goto L_0897EC14;
L_0897EC14:;
    a0 = s3 + 0;
    v0 = func_08984034(a0);
    goto L_0897EC1C;
L_0897EC1C:;
    a0 = sp + 0;
    a1 = 1;
    s0 = v0 + 0;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABCF50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897EC34;
L_0897EC34:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0897EC88; }
    goto L_0897EC40;
L_0897EC40:;
    s2 = 3;
    v1 = LD32(v0);
    goto L_0897EC48;
L_0897EC48:;
    cnd_ = v1 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0897EC74; }
    goto L_0897EC50;
L_0897EC50:;
    v0 = LD32(v1+172);
    cnd_ = v0 == s2;
    if (cnd_) { goto L_0897EC74; }
    goto L_0897EC5C;
L_0897EC5C:;
    a0 = LD32(v1+88);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897EC64;
L_0897EC64:;
    v0 = v0 ^ s3;
    v0 = v0 < 0x1u;
    s0 = s0 + v0;
    a0 = sp + 0;
    goto L_0897EC74;
L_0897EC74:;
    a1 = 1;
    { u64 r_ = func_08ABCF50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897EC7C;
L_0897EC7C:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0897EC48; }
    goto L_0897EC88;
L_0897EC88:;
    a0 = LD32(s1+88);
    { u64 r_ = func_08973A0C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897EC90;
L_0897EC90:;
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+104); goto L_0897ED44; }
    goto L_0897EC9C;
L_0897EC9C:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0897E998; }
    goto L_0897ECB0;
L_0897ECB0:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0897E998; }
    goto L_0897ECBC;
L_0897ECBC:;
    v0 = LD32(s1);
    goto L_0897ECC0;
L_0897ECC0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0897ED14; }
    goto L_0897ECD4;
L_0897ECD4:;
    v0 = LD_U8(s0+8);
    goto L_0897ECD8;
L_0897ECD8:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0897ED3C; }
    goto L_0897ECE0;
L_0897ECE0:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0897ED2C; }
    goto L_0897ECE8;
L_0897ECE8:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0897ECF0;
L_0897ECF0:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897ECFC;
L_0897ECFC:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0897ED08;
L_0897ED08:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0897ECD8; }
    goto L_0897ED10;
L_0897ED10:;
    v1 = LD32(s1+4);
    goto L_0897ED14;
L_0897ED14:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0897ECC0; }
    goto L_0897ED24;
L_0897ED24:;
    v0 = 0 + 0;
    goto L_0897E99C;
L_0897ED2C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0897ECF0;
L_0897ED3C:;
    s0 = LD32(s0+4);
    goto L_0897ED08;
L_0897ED44:;
    v0 = 999;
    cnd_ = v1 == v0;
    v0 = D_08B45A9C - (23196);
    if (cnd_) { goto L_0897EDF8; }
    goto L_0897ED50;
L_0897ED50:;
    s1 = LD32(sp);
    goto L_0897ED54;
L_0897ED54:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0897EBC8; }
    goto L_0897ED64;
L_0897ED64:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0897EBC8; }
    goto L_0897ED70;
L_0897ED70:;
    v0 = LD32(s1);
    goto L_0897ED74;
L_0897ED74:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0897EDC8; }
    goto L_0897ED88;
L_0897ED88:;
    v0 = LD_U8(s0+8);
    goto L_0897ED8C;
L_0897ED8C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0897EDF0; }
    goto L_0897ED94;
L_0897ED94:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0897EDE0; }
    goto L_0897ED9C;
L_0897ED9C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0897EDA4;
L_0897EDA4:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897EDB0;
L_0897EDB0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0897EDBC;
L_0897EDBC:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0897ED8C; }
    goto L_0897EDC4;
L_0897EDC4:;
    v1 = LD32(s1+4);
    goto L_0897EDC8;
L_0897EDC8:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0897ED74; }
    goto L_0897EDD8;
L_0897EDD8:;
    v0 = 1;
    goto L_0897E99C;
L_0897EDE0:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0897EDA4;
L_0897EDF0:;
    s0 = LD32(s0+4);
    goto L_0897EDBC;
L_0897EDF8:;
    f1 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(s1+180));
    v1 = s1 + 180;
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v0 = v0 + 23196;
    if (cnd_) { goto L_0897EE44; }
    goto L_0897EE14;
L_0897EE14:;
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = D_08B45AA8 - (23208); goto L_0897EE48; }
    goto L_0897EE2C;
L_0897EE2C:;
    f1 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s1+176); goto L_0897EF38; }
    goto L_0897EE44;
L_0897EE44:;
    v0 = D_08B45AA8 - (23208);
    goto L_0897EE48;
L_0897EE48:;
    f1 = BITSF(LD32(v0+23208));
    f0 = BITSF(LD32(s1+192));
    v1 = s1 + 192;
    a0 = 0 + 0;
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v0 = v0 + 23208;
    if (cnd_) { goto L_0897EF28; }
    goto L_0897EE68;
L_0897EE68:;
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = a0 ^ 0x1; goto L_0897EF2C; }
    goto L_0897EE80;
L_0897EE80:;
    f1 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = a0 ^ 0x1; goto L_0897EF2C; }
    goto L_0897EE98;
L_0897EE98:;
    f1 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = a0 ^ 0x1; goto L_0897EF2C; }
    goto L_0897EEB0;
L_0897EEB0:;
    f1 = BITSF(LD32(v1+16));
    f0 = BITSF(LD32(v0+16));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = a0 ^ 0x1; goto L_0897EF2C; }
    goto L_0897EEC8;
L_0897EEC8:;
    f1 = BITSF(LD32(v1+20));
    f0 = BITSF(LD32(v0+20));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = a0 ^ 0x1; goto L_0897EF2C; }
    goto L_0897EEE0;
L_0897EEE0:;
    f1 = BITSF(LD32(v1+24));
    f0 = BITSF(LD32(v0+24));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = a0 ^ 0x1; goto L_0897EF2C; }
    goto L_0897EEF8;
L_0897EEF8:;
    f1 = BITSF(LD32(v1+28));
    f0 = BITSF(LD32(v0+28));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = a0 ^ 0x1; goto L_0897EF2C; }
    goto L_0897EF10;
L_0897EF10:;
    f1 = BITSF(LD32(v1+32));
    f0 = BITSF(LD32(v0+32));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { a0 = 1; goto L_0897EF28; }
    goto L_0897EF28;
L_0897EF28:;
    v0 = a0 ^ 0x1;
    goto L_0897EF2C;
L_0897EF2C:;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(sp); goto L_0897ED54; }
    goto L_0897EF34;
L_0897EF34:;
    v0 = LD32(s1+176);
    goto L_0897EF38;
L_0897EF38:;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(sp); goto L_0897ED54; }
    goto L_0897EF40;
L_0897EF40:;
    v0 = D_08C29FD4 - (-24620);
    s0 = v0 - 24620;
    s2 = s3 << 2;
    v0 = s2 + s0;
    v1 = LD32(v0);
    cnd_ = v1 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0897EF6C; }
    goto L_0897EF5C;
L_0897EF5C:;
    v0 = LD_U8(s1+256);
    cnd_ = v0 == 0;
    if (cnd_) { s2 = LD32(sp); goto L_0897EFD4; }
    goto L_0897EF68;
L_0897EF68:;
    a0 = sp + 0;
    goto L_0897EF6C;
L_0897EF6C:;
    a1 = 1;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABCF50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897EF7C;
L_0897EF7C:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    if (cnd_) { s2 = LD32(sp); goto L_0897EFD4; }
    goto L_0897EF88;
L_0897EF88:;
    s3 = s0 + 0;
    s0 = 999;
    v0 = LD32(v0);
    goto L_0897EF94;
L_0897EF94:;
    a0 = sp + 0;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_0897EFBC; }
    goto L_0897EFA0;
L_0897EFA0:;
    a2 = LD32(v0+104);
    cnd_ = a2 == s0;
    if (cnd_) { a0 = s2 + s3; goto L_0897F07C; }
    goto L_0897EFAC;
L_0897EFAC:;
    v1 = LD32(v0+88);
    v0 = LD32(s1+88);
    cnd_ = v1 == v0;
    if (cnd_) { ST32(s1+104, a2); goto L_0897EFBC; }
    goto L_0897EFBC;
L_0897EFBC:;
    { u64 r_ = func_08ABCF50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897EFC4;
L_0897EFC4:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v0); goto L_0897EF94; }
    goto L_0897EFD0;
L_0897EFD0:;
    s2 = LD32(sp);
    goto L_0897EFD4;
L_0897EFD4:;
    ST8(s1+256, 0);
    v0 = LD32(s2+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_0897EBC8; }
    goto L_0897EFE8;
L_0897EFE8:;
    v1 = LD32(s2+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0897EBC8; }
    goto L_0897EFF4;
L_0897EFF4:;
    v0 = LD32(s2);
    goto L_0897EFF8;
L_0897EFF8:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0897F04C; }
    goto L_0897F00C;
L_0897F00C:;
    v0 = LD_U8(s0+8);
    goto L_0897F010;
L_0897F010:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s0 + 0; goto L_0897F074; }
    goto L_0897F018;
L_0897F018:;
    cnd_ = s1 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_0897F064; }
    goto L_0897F020;
L_0897F020:;
    v0 = LD32(s0+4);
    ST32(s1+4, v0);
    goto L_0897F028;
L_0897F028:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897F034;
L_0897F034:;
    v0 = LD32(s2+12);
    v0 = v0 - 1;
    ST32(s2+12, v0);
    goto L_0897F040;
L_0897F040:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0897F010; }
    goto L_0897F048;
L_0897F048:;
    v1 = LD32(s2+4);
    goto L_0897F04C;
L_0897F04C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s2); goto L_0897EFF8; }
    goto L_0897F05C;
L_0897F05C:;
    v0 = 1;
    goto L_0897E99C;
L_0897F064:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0897F028;
L_0897F074:;
    s0 = LD32(s0+4);
    goto L_0897F040;
L_0897F07C:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    s2 = LD32(sp);
    if (cnd_) { goto L_0897F094; }
    goto L_0897F088;
L_0897F088:;
    v0 = v0 - 1;
    ST32(a0, v0);
    s2 = LD32(sp);
    goto L_0897F094;
L_0897F094:;
    v1 = 1;
    ST8(s1+256, v1);
    v0 = LD32(s2+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_0897E998; }
    goto L_0897F0AC;
L_0897F0AC:;
    v1 = LD32(s2+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0897E998; }
    goto L_0897F0B8;
L_0897F0B8:;
    v0 = LD32(s2);
    goto L_0897F0BC;
L_0897F0BC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0897F110; }
    goto L_0897F0D0;
L_0897F0D0:;
    v0 = LD_U8(s0+8);
    goto L_0897F0D4;
L_0897F0D4:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s0 + 0; goto L_0897F138; }
    goto L_0897F0DC;
L_0897F0DC:;
    cnd_ = s1 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_0897F128; }
    goto L_0897F0E4;
L_0897F0E4:;
    v0 = LD32(s0+4);
    ST32(s1+4, v0);
    goto L_0897F0EC;
L_0897F0EC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897F0F8;
L_0897F0F8:;
    v0 = LD32(s2+12);
    v0 = v0 - 1;
    ST32(s2+12, v0);
    goto L_0897F104;
L_0897F104:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0897F0D4; }
    goto L_0897F10C;
L_0897F10C:;
    v1 = LD32(s2+4);
    goto L_0897F110;
L_0897F110:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s2); goto L_0897F0BC; }
    goto L_0897F120;
L_0897F120:;
    v0 = 0 + 0;
    goto L_0897E99C;
L_0897F128:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0897F0EC;
L_0897F138:;
    s0 = LD32(s0+4);
    goto L_0897F104;
L_0897F140:;
    a0 = s1 + 0;
    f0 = func_08982F58(a0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0897F148;
L_0897F148:;
    a0 = LD32(s1+88);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897F150;
L_0897F150:;
    s3 = v0 + 0;
    goto L_0897EC00;
}

/* 0897F158 */
float func_0897F158(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897F158:;
    sp = sp - 16;
    v0 = D_08B2BB6D - (-17555);
    a2 = D_08B25AC8 - (23240);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 != 0;
    a3 = a2 + 23240;
    if (cnd_) { goto L_0897F1F4; }
    goto L_0897F174;
L_0897F174:;
    v1 = LD32(a2+23240);
    a1 = LD32(a3+4);
    v0 = D_08AEE4CC - (-6964);
    a0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + a0;
    v1 = v1 + a1;
    f3 = BITSF(LD32(v0-6964));
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEE4D0 - (-6960);
    f1 = BITSF(LD32(v0-6960));
    f2 = (float)(s32)FBITS(f0);
    v0 = D_08AEE4D4 - (-6956);
    f0 = BITSF(LD32(v0-6956));
    f1 = f1 - f3;
    a1 = a1 + v1;
    f2 = f2 * f0;
    ST32(a3+4, a1);
    f2 = f2 * f1;
    ST32(a2+23240, v1);
    f2 = f2 + f3;
    goto L_0897F1CC;
L_0897F1CC:;
    v0 = D_08AEE4D8 - (-6952);
    goto L_0897F1D0;
L_0897F1D0:;
    f1 = BITSF(LD32(v0-6952));
    fcc = FCMP(f1, f2, 14);
    cnd_ = fcc;
    f0 = f2;
    if (cnd_) { goto L_0897F1E8; }
    goto L_0897F1E4;
L_0897F1E4:;
    f0 = f1;
    goto L_0897F1E8;
L_0897F1E8:;
    sp = sp + 16;
    return f0;
L_0897F1F4:;
    v0 = LD32(a0);
    v1 = LD32(v0+84);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F204;
L_0897F204:;
    v0 = D_08AEE4CC - (-6964);
    f2 = f0;
    f0 = BITSF(LD32(v0-6964));
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    v0 = D_08AEE4D8 - (-6952);
    if (cnd_) { goto L_0897F1D0; }
    goto L_0897F220;
L_0897F220:;
    v0 = D_08C28F5C - (-28836);
    f0 = BITSF(LD32(v0-28836));
    f2 = f2 + f0;
    goto L_0897F1CC;
}

/* 0897F230 */
rv_t func_0897F230(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897F230:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_0897F158(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0897F244;
L_0897F244:;
    a0 = s0 + 0;
    a1 = LD32(s0+324);
    v1 = LD32(s0+96);
    ST32(s0+168, FBITS(f0));
    v0 = a1 & 0x1;
    v1 = (v1 & ~(0x1u << 2)) | ((v0 & 0x1) << 2);
    a1 = a1 & 0x8;
    cnd_ = a1 != 0;
    ST32(s0+96, v1);
    if (cnd_) { goto L_0897F2A8; }
    goto L_0897F268;
L_0897F268:;
    a1 = 10006;
    goto L_0897F26C;
L_0897F26C:;
    a0 = s0 + 0;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F274;
L_0897F274:;
    a0 = s0 + 0;
    { rv_t r_ = func_08982530(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F27C;
L_0897F27C:;
    v1 = LD32(s0);
    v0 = LD32(v1+96);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F28C;
L_0897F28C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0897F29C; }
    goto L_0897F294;
L_0897F294:;
    v0 = 999;
    ST32(s0+28, v0);
    goto L_0897F29C;
L_0897F29C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0897F2A8:;
    func_0897FCFC(a0);
    goto L_0897F2B0;
L_0897F2B0:;
    a1 = 10006;
    goto L_0897F26C;
}

/* 0897F2B8 */
rv_t func_0897F2B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897F2B8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 300;
    s1 = a1 + 0;
    { rv_t r_ = func_08A25B18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F2DC;
L_0897F2DC:;
    s2 = v0 + 0;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_0897F344; }
    goto L_0897F2E8;
L_0897F2E8:;
    cnd_ = s1 == 0;
    v0 = 60;
    if (cnd_) { goto L_0897F334; }
    goto L_0897F2F0;
L_0897F2F0:;
    v1 = LD_U16(s1+16);
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 61;
    if (cnd_) { goto L_0897F388; }
    goto L_0897F2FC;
L_0897F2FC:;
    cnd_ = v0 == 0;
    v0 = (s32)v1 < 80;
    if (cnd_) { goto L_0897F3C4; }
    goto L_0897F304;
L_0897F304:;
    v0 = (s32)v1 < 29;
    cnd_ = v0 == 0;
    v0 = v1 - 57;
    if (cnd_) { goto L_0897F3B0; }
    goto L_0897F310;
L_0897F310:;
    v0 = (s32)v1 < 27;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s0+28); goto L_0897F38C; }
    goto L_0897F31C;
L_0897F31C:;
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s0+96); goto L_0897F37C; }
    goto L_0897F328;
L_0897F328:;
    v0 = 4;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0897F360; }
    goto L_0897F334;
L_0897F334:;
    a0 = s0 + 0;
    goto L_0897F338;
L_0897F338:;
    a1 = s1 + 0;
    { rv_t r_ = func_089820BC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F340;
L_0897F340:;
    v1 = v0 + 0;
    goto L_0897F344;
L_0897F344:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0897F360:;
    a0 = s0 + 0;
    f0 = func_08980018(a0);
    goto L_0897F368;
L_0897F368:;
    v0 = LD32(s0+96);
    v1 = 1;
    v0 = (v0 & ~(0x1u << 2)) | ((s2 & 0x1) << 2);
    goto L_0897F374;
L_0897F374:;
    ST32(s0+96, v0);
    goto L_0897F344;
L_0897F37C:;
    v1 = 1;
    v0 = v0 | 0x4;
    goto L_0897F374;
L_0897F388:;
    a1 = LD32(s0+28);
    goto L_0897F38C;
L_0897F38C:;
    v0 = 999;
    cnd_ = a1 == v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0897F3A8; }
    goto L_0897F398;
L_0897F398:;
    a3 = LD32(s1+28);
    a2 = LD32(s1+4);
    a3 = a3 & 0x1;
    { rv_t r_ = func_088AC9B0(a0, a1, a2, a3, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F3A8;
L_0897F3A8:;
    v1 = 1;
    goto L_0897F344;
L_0897F3B0:;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0897F338; }
    goto L_0897F3BC;
L_0897F3BC:;
    a1 = LD32(s0+28);
    goto L_0897F38C;
L_0897F3C4:;
    cnd_ = v0 == 0;
    v0 = 81;
    if (cnd_) { goto L_0897F404; }
    goto L_0897F3CC;
L_0897F3CC:;
    v0 = (s32)v1 < 78;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s0+28); goto L_0897F38C; }
    goto L_0897F3D8;
L_0897F3D8:;
    v0 = (s32)v1 < 62;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0897F338; }
    goto L_0897F3E4;
L_0897F3E4:;
    v0 = (s32)v1 < 65;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s0+28); goto L_0897F38C; }
    goto L_0897F3F0;
L_0897F3F0:;
    v0 = 76;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_0897F338; }
    goto L_0897F3FC;
L_0897F3FC:;
    a1 = LD32(s0+28);
    goto L_0897F38C;
L_0897F404:;
    cnd_ = v1 == v0;
    v0 = 0x8007;
    if (cnd_) { goto L_0897F388; }
    goto L_0897F40C;
L_0897F40C:;
    cnd_ = v1 != v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0897F338; }
    goto L_0897F414;
L_0897F414:;
    a0 = s0 + 0;
    f0 = func_0897F950(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0897F41C;
L_0897F41C:;
    v1 = 1;
    goto L_0897F344;
}

/* 0897F424 */
rv_t func_0897F424(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897F424:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+88);
    v0 = v0 ^ a1;
    s1 = 0 < v0;
    { rv_t r_ = func_089840C8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F448;
L_0897F448:;
    v0 = LD32(s0+252);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0897F48C; }
    goto L_0897F454;
L_0897F454:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_0897F490; }
    goto L_0897F45C;
L_0897F45C:;
    v0 = LD_U8(s0+128);
    cnd_ = v0 != 0;
    a0 = LD32(s0+88);
    if (cnd_) { goto L_0897F49C; }
    goto L_0897F468;
L_0897F468:;
    a1 = LD32(s0+4);
    v0 = func_0896FE98(a0, a1);
    goto L_0897F470;
L_0897F470:;
    v1 = LD32(s0);
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = LD32(v1+108);
    t_ = v0;
    a2 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F488;
L_0897F488:;
    goto L_0897F48C;
L_0897F48C:;
    goto L_0897F490;
L_0897F490:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0897F49C:;
    a1 = LD32(s0+4);
    func_0896FE34(a0, a1);
    goto L_0897F4A4;
L_0897F4A4:;
    a0 = LD32(s0+88);
    goto L_0897F468;
}

/* 0897F4AC */
rv_t func_0897F4AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0897F4AC:;
    sp = sp - 48;
    v0 = D_08C29328 - (-27864);
    v1 = D_08ADDCE4 - (-8988);
    s5 = v1 - 8988;
    t1 = a1 + 0;
    s3 = a0 + 46;
    a1 = s5 + 0;
    s2 = 0xe812;
    s1 = a0 + 0;
    a0 = s3 + 0;
    s0 = (u32)-1;
    a3 = LD32(v0-27864);
    v0 = 32;
    a3 = a3 ^ 0x5;
    if (a3 == 0) s2 = v0;
    t0 = s2 + 0;
    v0 = a2 + 0;
    a3 = 1;
    a2 = 21;
    s4 = v0 & 0xff;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F51C;
L_0897F51C:;
    v1 = LD32(s1+88);
    v0 = 4;
    cnd_ = v1 == v0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0897F580; }
    goto L_0897F52C;
L_0897F52C:;
    { u64 r_ = func_08988228(0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897F534;
L_0897F534:;
    a0 = LD32(s1+88);
    s0 = v0 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897F540;
L_0897F540:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_089881E4(a0, a1);
    goto L_0897F54C;
L_0897F54C:;
    a0 = 0x203e0000u;
    a1 = v0 + 0;
    a2 = sp + 0;
    a0 = a0 | 0x217d;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897F564;
L_0897F564:;
    a1 = 0x330000u;
    a0 = LD32(sp);
    a2 = (u32)-1;
    a1 = a1 | 0x7a8b;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_0897F578;
L_0897F578:;
    s0 = v0 + 0;
    v0 = (u32)-1;
    goto L_0897F580;
L_0897F580:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    v1 = s1 + 258;
    t0 = s3 + 0;
    a2 = 21;
    cnd_ = s0 == v0;
    a3 = 1;
    if (cnd_) { goto L_0897F5EC; }
    goto L_0897F59C;
L_0897F59C:;
    v0 = func_0897A064(a0, a1);
    goto L_0897F5A4;
L_0897F5A4:;
    t1 = v0 + 0;
    a0 = s1 + 258;
    a1 = s5 + 0;
    t0 = s2 + 0;
    a2 = 21;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F5C0;
L_0897F5C0:;
    ST32(s1+100, s0);
    goto L_0897F5C4;
L_0897F5C4:;
    ST8(s1+128, s4);
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0897F5EC:;
    a1 = D_08ADDCF0 - (-8976);
    a0 = v1 + 0;
    a1 = a1 - 8976;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F5FC;
L_0897F5FC:;
    ST32(s1+100, 0);
    goto L_0897F5C4;
}

/* 0897F604 */
rv_t func_0897F604(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0897F604:;
    v1 = LD32(a0+96);
    v0 = a0 + 0;
    v0 = v0 + 258;
    a0 = a0 + 46;
    v1 = v1 & 0x1;
    if (v1 == 0) v0 = a0;
    return (rv_t){ v0, v1, f0 };
}

/* 0897F620 */
rv_t func_0897F620(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0897F620:;
    sp = sp - 32;
    v1 = 999;
    s2 = a0 + 0;
    a0 = a1 + 0;
    s1 = a1 + 0;
    a1 = sp + 4;
    ST32(sp+4, v1);
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F650;
L_0897F650:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08874FD8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F65C;
L_0897F65C:;
    v1 = LD32(sp+4);
    cnd_ = (s32)v1 < 0;
    a1 = s2 + 324;
    if (cnd_) { goto L_0897F6E8; }
    goto L_0897F668;
L_0897F668:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F670;
L_0897F670:;
    a1 = s2 + 176;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F67C;
L_0897F67C:;
    a1 = s2 + 180;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F688;
L_0897F688:;
    a1 = s2 + 192;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E0F4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F694;
L_0897F694:;
    a0 = s1 + 0;
    a1 = sp + 8;
    ST32(sp+8, 0);
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F6A4;
L_0897F6A4:;
    v0 = LD32(sp+8);
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0897F6D0; }
    goto L_0897F6B0;
L_0897F6B0:;
    a0 = s1 + 0;
    goto L_0897F6B4;
L_0897F6B4:;
    a1 = sp + 0;
    func_0882DBD0(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0897F6BC;
L_0897F6BC:;
    v0 = LD32(sp+8);
    s0 = s0 + 1;
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0897F6B4; }
    goto L_0897F6D0;
L_0897F6D0:;
    v1 = LD32(sp+4);
    cnd_ = (s32)v1 <= 0;
    a1 = s2 + 228;
    if (cnd_) { goto L_0897F6E8; }
    goto L_0897F6DC;
L_0897F6DC:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F6E4;
L_0897F6E4:;
    v1 = LD32(sp+4);
    goto L_0897F6E8;
L_0897F6E8:;
    v0 = (s32)v1 < 2;
    cnd_ = v0 == 0;
    a1 = s2 + 232;
    if (cnd_) { goto L_0897F854; }
    goto L_0897F6F4;
L_0897F6F4:;
    v0 = (s32)v1 < 3;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s2 + 300; goto L_0897F844; }
    goto L_0897F700;
L_0897F700:;
    v0 = (s32)v1 < 4;
    cnd_ = v0 == 0;
    a1 = s2 + 236;
    if (cnd_) { goto L_0897F834; }
    goto L_0897F70C;
L_0897F70C:;
    v0 = (s32)v1 < 5;
    cnd_ = v0 == 0;
    a1 = s2 + 240;
    if (cnd_) { goto L_0897F824; }
    goto L_0897F718;
L_0897F718:;
    v0 = (s32)v1 < 6;
    cnd_ = v0 == 0;
    v0 = (s32)v1 < 7;
    if (cnd_) { goto L_0897F734; }
    goto L_0897F724;
L_0897F724:;
    v0 = LD32(s2+324);
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(s2+324, v0);
    v0 = (s32)v1 < 7;
    goto L_0897F734;
L_0897F734:;
    cnd_ = v0 == 0;
    a1 = s2 + 244;
    if (cnd_) { goto L_0897F814; }
    goto L_0897F73C;
L_0897F73C:;
    v0 = (s32)v1 < 8;
    cnd_ = v0 == 0;
    a1 = s2 + 248;
    if (cnd_) { goto L_0897F804; }
    goto L_0897F748;
L_0897F748:;
    v0 = LD32(s2+324);
    f0 = BITSF(0);
    v0 = v0 & 0x10;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s2+248, FBITS(f0)); goto L_0897F768; }
    goto L_0897F75C;
L_0897F75C:;
    v0 = D_08AEE4DC - (-6948);
    f0 = BITSF(LD32(v0-6948));
    ST32(s2+248, FBITS(f0));
    goto L_0897F768;
L_0897F768:;
    v0 = (s32)v1 < 9;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_0897F7C0; }
    goto L_0897F774;
L_0897F774:;
    v0 = (s32)v1 < 10;
    cnd_ = v0 == 0;
    a1 = s2 + 112;
    if (cnd_) { goto L_0897F7B0; }
    goto L_0897F780;
L_0897F780:;
    v1 = LD32(s2+324);
    goto L_0897F784;
L_0897F784:;
    v0 = LD32(s2+96);
    v1 = (v1 >> 1) & 0x1;
    v0 = v0 | 0x8;
    v0 = (v0 & ~(0x1u << 2)) | ((v1 & 0x1) << 2);
    ST32(s2+96, v0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0897F7B0:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F7B8;
L_0897F7B8:;
    v1 = LD32(s2+324);
    goto L_0897F784;
L_0897F7C0:;
    a1 = s2 + 252;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F7C8;
L_0897F7C8:;
    a0 = LD32(s2+252);
    cnd_ = a0 != 0;
    if (cnd_) { a1 = 0x1f020000u; goto L_0897F7DC; }
    goto L_0897F7D4;
L_0897F7D4:;
    v1 = LD32(sp+4);
    goto L_0897F774;
L_0897F7DC:;
    a1 = a1 | 0x6e4b;
    v0 = func_0897A064(a0, a1);
    goto L_0897F7E4;
L_0897F7E4:;
    v1 = LD32(s2);
    a1 = v0 + 0;
    a0 = s2 + 0;
    v0 = LD32(v1+108);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F7FC;
L_0897F7FC:;
    v1 = LD32(sp+4);
    goto L_0897F774;
L_0897F804:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F80C;
L_0897F80C:;
    v1 = LD32(sp+4);
    goto L_0897F768;
L_0897F814:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F81C;
L_0897F81C:;
    v1 = LD32(sp+4);
    goto L_0897F73C;
L_0897F824:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F82C;
L_0897F82C:;
    v1 = LD32(sp+4);
    goto L_0897F718;
L_0897F834:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F83C;
L_0897F83C:;
    v1 = LD32(sp+4);
    goto L_0897F70C;
L_0897F844:;
    a1 = s1 + 0;
    { rv_t r_ = func_08A26C18(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F84C;
L_0897F84C:;
    v1 = LD32(sp+4);
    goto L_0897F700;
L_0897F854:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F85C;
L_0897F85C:;
    v1 = LD32(sp+4);
    goto L_0897F6F4;
}

/* 0897F864 */
rv_t func_0897F864(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897F864:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 10;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F888;
L_0897F888:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_088750A8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F894;
L_0897F894:;
    a1 = LD32(s1+324);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F8A0;
L_0897F8A0:;
    a1 = LD32(s1+176);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F8AC;
L_0897F8AC:;
    a1 = s1 + 180;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F8B8;
L_0897F8B8:;
    a1 = s1 + 192;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E164(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F8C4;
L_0897F8C4:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F8D0;
L_0897F8D0:;
    a1 = LD_U16(s1+228);
    a0 = s0 + 0;
    { rv_t r_ = func_0882DA60(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F8DC;
L_0897F8DC:;
    a1 = LD32(s1+232);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F8E8;
L_0897F8E8:;
    a0 = s1 + 300;
    a1 = s0 + 0;
    { rv_t r_ = func_08A26BD4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F8F4;
L_0897F8F4:;
    a1 = LD32(s1+236);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F900;
L_0897F900:;
    a1 = LD32(s1+240);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F90C;
L_0897F90C:;
    a1 = LD32(s1+244);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F918;
L_0897F918:;
    f12 = BITSF(LD32(s1+248));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F924;
L_0897F924:;
    a1 = LD32(s1+252);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F930;
L_0897F930:;
    a1 = LD32(s1+112);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897F93C;
L_0897F93C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897F950 */
float func_0897F950(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897F950:;
    sp = sp - 16;
    v0 = 999;
    a2 = LD32(a0+28);
    cnd_ = a2 == v0;
    a3 = a0 + 0;
    if (cnd_) { goto L_0897FA30; }
    goto L_0897F968;
L_0897F968:;
    a0 = D_08C2B4CC - (-19252);
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
    if (cnd_) { goto L_0897F9C0; }
    goto L_0897F994;
L_0897F994:;
    a0 = LD32(a1);
    goto L_0897F998;
L_0897F998:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0897FA10; }
    goto L_0897F9B0;
L_0897F9B0:;
    a1 = LD32(a1+4);
    goto L_0897F9B4;
L_0897F9B4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0897F998; }
    goto L_0897F9BC;
L_0897F9BC:;
    a0 = 0 + 0;
    goto L_0897F9C0;
L_0897F9C0:;
    cnd_ = a0 == 0;
    if (cnd_) { v1 = LD32(a3); goto L_0897F9F8; }
    goto L_0897F9C8;
L_0897F9C8:;
    v1 = LD32(a0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(a3); goto L_0897F9F8; }
    goto L_0897F9EC;
L_0897F9EC:;
    goto L_0897F9F0;
L_0897F9F0:;
    sp = sp + 16;
    return f0;
L_0897F9F8:;
    a0 = a3 + 0;
    goto L_0897F9FC;
L_0897F9FC:;
    v0 = LD32(v1+116);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897FA08;
L_0897FA08:;
    goto L_0897F9F0;
L_0897FA10:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0897F9B4; }
    goto L_0897FA1C;
L_0897FA1C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0897F9B4; }
    goto L_0897FA28;
L_0897FA28:;
    goto L_0897F9C0;
L_0897FA30:;
    v1 = LD32(a0);
    goto L_0897F9FC;
}

/* 0897FA38 */
rv_t func_0897FA38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0897FA38:;
    sp = sp - 64;
    a1 = 0 + 0;
    a2 = 20;
    s0 = a0 + 0;
    a0 = a0 + 148;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897FA5C;
L_0897FA5C:;
    a1 = D_08B25AC0 - (23232);
    v0 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    f0 = BITSF(v1);
    v1 = D_08AEE4E4 - (-6940);
    ST32(a1+23232, v0);
    f1 = (float)(s32)FBITS(f0);
    a0 = a0 + v0;
    f0 = BITSF(LD32(v1-6940));
    ST32(a2+4, a0);
    v1 = sp + 0;
    f20 = f1 * f0;
    a0 = 0 + 0;
    goto L_0897FAA8;
L_0897FAA8:;
    a0 = a0 + 1;
    v0 = a0 < 0x8u;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0897FAA8; }
    goto L_0897FABC;
L_0897FABC:;
    v0 = func_08979DF4();
    goto L_0897FAC4;
L_0897FAC4:;
    v1 = 2;
    cnd_ = v0 == v1;
    v0 = D_08AEE4FC - (-6916);
    if (cnd_) { goto L_0897FCC4; }
    goto L_0897FAD0;
L_0897FAD0:;
    f1 = BITSF(LD32(v0-6916));
    v0 = D_08AEE4F8 - (-6920);
    f0 = BITSF(LD32(v0-6920));
    v0 = D_08AEE4F4 - (-6924);
    ST32(sp+8, FBITS(f1));
    a1 = D_08AEE4EC - (-6932);
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(v0-6924));
    ST32(sp+4, FBITS(f1));
    ST32(sp+12, FBITS(f0));
    ST32(sp+28, 0);
    goto L_0897FAFC;
L_0897FAFC:;
    v0 = D_08C2AC24 - (-21468);
    v1 = D_08C2AFC4 - (-20540);
    a0 = LD32(v0-21468);
    v0 = LD32(v1-20540);
    f0 = BITSF(LD32(a1-6932));
    v0 = a0 + v0;
    cnd_ = (s32)v0 <= 0;
    ST32(sp+16, FBITS(f0));
    if (cnd_) { goto L_0897FB40; }
    goto L_0897FB1C;
L_0897FB1C:;
    v1 = D_08AEE500 - (-6912);
    f0 = BITSF(LD32(v1-6912));
    v0 = (s32)v0 < 3;
    cnd_ = v0 != 0;
    ST32(sp+24, FBITS(f0));
    if (cnd_) { goto L_0897FB40; }
    goto L_0897FB30;
L_0897FB30:;
    v0 = D_08AEE4E8 - (-6936);
    f0 = BITSF(LD32(v0-6936));
    ST32(sp+24, FBITS(f0));
    ST32(sp+20, FBITS(f0));
    goto L_0897FB40;
L_0897FB40:;
    f1 = BITSF(0);
    a0 = 0 + 0;
    v1 = sp + 0;
    goto L_0897FB4C;
L_0897FB4C:;
    f0 = BITSF(LD32(v1));
    a0 = a0 + 1;
    v0 = a0 < 0x8u;
    f1 = f1 + f0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0897FB4C; }
    goto L_0897FB64;
L_0897FB64:;
    v0 = D_08AEE4E0 - (-6944);
    f0 = BITSF(LD32(v0-6944));
    a0 = 0 + 0;
    v1 = sp + 0;
    f1 = f0 / f1;
    goto L_0897FB78;
L_0897FB78:;
    f0 = BITSF(LD32(v1));
    a0 = a0 + 1;
    v0 = a0 < 0x8u;
    f0 = f0 * f1;
    ST32(v1, FBITS(f0));
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0897FB78; }
    goto L_0897FB94;
L_0897FB94:;
    f1 = BITSF(0);
    a1 = 0 + 0;
    a0 = 0 + 0;
    v1 = sp + 0;
    f0 = BITSF(LD32(v1));
    goto L_0897FBA8;
L_0897FBA8:;
    f1 = f1 + f0;
    fcc = FCMP(f20, f1, 12);
    cnd_ = fcc;
    v1 = v1 + 4;
    if (cnd_) { goto L_0897FCBC; }
    goto L_0897FBBC;
L_0897FBBC:;
    a0 = a0 + 1;
    v0 = a0 < 0x8u;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(v1)); goto L_0897FBA8; }
    goto L_0897FBCC;
L_0897FBCC:;
    v1 = D_08ADDC64 - (-9116);
    v0 = a1 << 4;
    v1 = v1 - 9116;
    a1 = v0 + v1;
    a0 = LD32(a1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0897FC70; }
    goto L_0897FBE8;
L_0897FBE8:;
    a3 = LD32(s0+88);
    v0 = D_08ADDBFC - (-9220);
    v1 = D_08ADDC30 - (-9168);
    t3 = v0 - 9220;
    t5 = v1 - 9168;
    v0 = D_08ADDB94 - (-9324);
    v1 = D_08ADDBC8 - (-9272);
    a0 = a1 + 0;
    t6 = v0 - 9324;
    t7 = v1 - 9272;
    a1 = s0 + 148;
    t1 = 1;
    t0 = a3 < 0x1u;
    t2 = 2;
    t4 = 3;
    goto L_0897FC24;
L_0897FC24:;
    cnd_ = a3 == t1;
    if (cnd_) { v0 = LD32(a0); goto L_0897FCB0; }
    goto L_0897FC2C;
L_0897FC2C:;
    cnd_ = t0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0897FCA4; }
    goto L_0897FC34;
L_0897FC34:;
    cnd_ = a3 == t2;
    if (cnd_) { v0 = LD32(a0); goto L_0897FC98; }
    goto L_0897FC3C;
L_0897FC3C:;
    cnd_ = a3 == t4;
    if (cnd_) { v0 = LD32(a0); goto L_0897FC84; }
    goto L_0897FC44;
L_0897FC44:;
    a2 = a2 + 1;
    v0 = a2 < 0x5u;
    a1 = a1 + 4;
    cnd_ = v0 == 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_0897FC70; }
    goto L_0897FC58;
L_0897FC58:;
    v0 = LD32(a0);
    v1 = a2 < 0x4u;
    v0 = 0 < v0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0897FC24; }
    goto L_0897FC70;
L_0897FC70:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_0897FC84:;
    v0 = v0 << 2;
    v0 = v0 + t7;
    goto L_0897FC8C;
L_0897FC8C:;
    v1 = LD32(v0);
    ST32(a1, v1);
    goto L_0897FC44;
L_0897FC98:;
    v0 = v0 << 2;
    v0 = v0 + t6;
    goto L_0897FC8C;
L_0897FCA4:;
    v0 = v0 << 2;
    v0 = v0 + t3;
    goto L_0897FC8C;
L_0897FCB0:;
    v0 = v0 << 2;
    v0 = v0 + t5;
    goto L_0897FC8C;
L_0897FCBC:;
    a1 = a0 + 0;
    goto L_0897FBCC;
L_0897FCC4:;
    v0 = D_08AEE4E8 - (-6936);
    f0 = BITSF(LD32(v0-6936));
    v0 = D_08AEE4F0 - (-6928);
    a1 = D_08AEE4EC - (-6932);
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(v0-6928));
    v0 = D_08AEE4F4 - (-6924);
    f1 = BITSF(LD32(a1-6932));
    ST32(sp+8, FBITS(f0));
    f0 = BITSF(LD32(v0-6924));
    ST32(sp+4, FBITS(f1));
    ST32(sp+28, FBITS(f0));
    ST32(sp+12, 0);
    goto L_0897FAFC;
}

/* 0897FCFC */
void func_0897FCFC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr48 = v[48], vr49 = v[49], vr50 = v[50], vr52 = v[52], vr53 = v[53], vr54 = v[54], vr56 = v[56], vr57 = v[57], vr58 = v[58];
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_0897FCFC:;
    {float m00=1.f;float m01=0.f;float m02=0.f;float m03=0.f;float m10=0.f;float m11=1.f;float m12=0.f;float m13=0.f;float m20=0.f;float m21=0.f;float m22=1.f;float m23=0.f;float m30=0.f;float m31=0.f;float m32=0.f;float m33=1.f;vr48=m00;vr49=m01;vr50=m02;v[51]=m03;vr52=m10;vr53=m11;vr54=m12;v[55]=m13;vr56=m20;vr57=m21;vr58=m22;v[59]=m23;v[60]=m30;v[61]=m31;v[62]=m32;v[63]=m33;}
    {a1=FBITS(vr50);}
    f0 = BITSF(a1);
    f2 = BITSF(0);
    {a1=FBITS(vr54);}
    f10 = BITSF(a1);
    {a1=FBITS(vr58);}
    f3 = BITSF(a1);
    {a1=FBITS(vr49);}
    f5 = BITSF(a1);
    {a1=FBITS(vr52);}
    f8 = BITSF(a1);
    {a1=FBITS(vr53);}
    f6 = BITSF(a1);
    {a1=FBITS(vr56);}
    f7 = BITSF(a1);
    {a1=FBITS(vr57);}
    f4 = BITSF(a1);
    v1 = a0 + 192;
    sp = sp - 112;
    v0 = a0 + 180;
    f9 = f0;
    ST32(v0+4, FBITS(f2));
    a2 = 1;
    a1 = 999;
    ST32(v0+8, FBITS(f2));
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(v[51]));}
    {v0=FBITS(vr48);}
    ST32(a0+180, FBITS(f2));
    f0 = BITSF(v0);
    ST32(a0+176, 0);
    ST32(v1+32, FBITS(f3));
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(v[59]));}
    ST32(v1+4, FBITS(f5));
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    ST32(v1+8, FBITS(f9));
    ST32(v1+12, FBITS(f8));
    ST32(v1+16, FBITS(f6));
    ST32(v1+20, FBITS(f10));
    ST32(v1+24, FBITS(f7));
    ST32(v1+28, FBITS(f4));
    v0 = LD32(a0+96);
    v0 = (v0 & ~(0x1u << 2)) | ((a2 & 0x1) << 2);
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(a0+96, v0);
    v0 = 100;
    ST32(a0+192, FBITS(f0));
    ST32(a0+236, v0);
    ST32(a0+244, a1);
    ST32(a0+324, a2);
    ST16(a0+228, 0);
    ST32(a0+232, a1);
    ST32(a0+240, a1);
    ST32(a0+112, 0);
    sp = sp + 112;
    { v[48]=vr48;v[49]=vr49;v[50]=vr50;v[52]=vr52;v[53]=vr53;v[54]=vr54;v[56]=vr56;v[57]=vr57;v[58]=vr58;return; }
    v[48]=vr48;v[49]=vr49;v[50]=vr50;v[52]=vr52;v[53]=vr53;v[54]=vr54;v[56]=vr56;v[57]=vr57;v[58]=vr58;
}

/* 0897FDE0 */
rv_t func_0897FDE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0897FDE0:;
    sp = sp - 16;
    a1 = 10007;
    s1 = a0 + 0;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897FDFC;
L_0897FDFC:;
    a0 = s1 + 0;
    { rv_t r_ = func_089832B8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897FE04;
L_0897FE04:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0897FE84; }
    goto L_0897FE10;
L_0897FE10:;
    { rv_t r_ = func_089E3DDC(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897FE18;
L_0897FE18:;
    v1 = LD32(s0);
    v0 = LD32(v1+112);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897FE28;
L_0897FE28:;
    v1 = LD32(s1+232);
    a0 = s0 + 0;
    a1 = 1;
    ST32(s0+108, v1);
    { rv_t r_ = func_089E3C58(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897FE3C;
L_0897FE3C:;
    v0 = LD32(s1+312);
    a2 = s0 + 56;
    a0 = s1 + 0;
    ST32(a2+12, v0);
    v0 = 1;
    a1 = s0 + 0;
    v1 = LD32(s1+244);
    ST8(a2+22, v0);
    ST32(s0+24, v1);
    f0 = BITSF(LD32(s1+248));
    ST32(s0+128, FBITS(f0));
    func_0897FE9C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0897FE6C;
L_0897FE6C:;
    v0 = LD32(s0);
    a1 = LD32(s1+96);
    a0 = s0 + 0;
    v1 = LD32(v0+192);
    t_ = v1;
    a1 = (a1 >> 3) & 0x1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897FE84;
L_0897FE84:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0897FE9C */
void func_0897FE9C(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0897FE9C:;
    sp = sp - 48;
    s3 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0897FF58; }
    goto L_0897FEBC;
L_0897FEBC:;
    v0 = LD32(a1);
    a2 = D_08C2B2A8 - (-19800);
    v1 = LD32(v0-16);
    v0 = 999;
    v1 = a1 + v1;
    a1 = LD32(v1+4);
    cnd_ = a1 == v0;
    a0 = a2 - 19800;
    if (cnd_) { goto L_0897FF58; }
    goto L_0897FEDC;
L_0897FEDC:;
    v0 = LD32(a0+4);
    v1 = LD32(a2-19800);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    if (cnd_) { s0 = 0 + 0; goto L_0897FF2C; }
    goto L_0897FF00;
L_0897FF00:;
    a0 = LD32(a2);
    goto L_0897FF04;
L_0897FF04:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_0897FFF8; }
    goto L_0897FF1C;
L_0897FF1C:;
    a2 = LD32(a2+4);
    goto L_0897FF20;
L_0897FF20:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_0897FF04; }
    goto L_0897FF28;
L_0897FF28:;
    s0 = 0 + 0;
    goto L_0897FF2C;
L_0897FF2C:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_0897FF5C; }
    goto L_0897FF34;
L_0897FF34:;
    v1 = LD32(s0);
    ST32(sp, 0);
    a0 = s0 + 0;
    v0 = LD32(v1+180);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897FF4C;
L_0897FF4C:;
    a0 = LD32(sp);
    cnd_ = a0 != 0;
    if (cnd_) { a1 = 0xb11c0000u; goto L_0897FF74; }
    goto L_0897FF58;
L_0897FF58:;
    goto L_0897FF5C;
L_0897FF5C:;
    sp = sp + 48;
    return;
L_0897FF74:;
    a1 = a1 | 0x9828;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897FF80;
L_0897FF80:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0897FF58; }
    goto L_0897FF88;
L_0897FF88:;
    a0 = 999;
    { rv_t r_ = func_089A76EC(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897FF90;
L_0897FF90:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_0897FF58; }
    goto L_0897FF98;
L_0897FF98:;
    v1 = LD32(v0);
    a2 = 0 + 0;
    a1 = s1 + 0;
    v0 = LD32(v1+228);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897FFB0;
L_0897FFB0:;
    a0 = s2 + 0;
    { rv_t r_ = func_089E3DDC(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897FFB8;
L_0897FFB8:;
    v1 = LD32(s2);
    v0 = LD32(v1+112);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0897FFC8;
L_0897FFC8:;
    a1 = s3 + 148;
    a0 = s2 + 0;
    func_089E4770(a0, a1);
    goto L_0897FFD4;
L_0897FFD4:;
    ST32(s2+316, 0);
    a0 = s2 + 0;
    { u64 r_ = func_089A82E0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0897FFE0;
L_0897FFE0:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    a2 = 0 + 0;
    func_089D3F9C(a0, a1, a2, 0, 0);
    goto L_0897FFF0;
L_0897FFF0:;
    goto L_0897FF5C;
L_0897FFF8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0897FF1C; }
    goto L_08980004;
L_08980004:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_0897FF20; }
    goto L_08980010;
L_08980010:;
    goto L_0897FF2C;
}

/* 08980018 */
float func_08980018(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08980018:;
    sp = sp - 16;
    s2 = 999;
    a2 = 1;
    s1 = a0 + 0;
    s0 = LD32(a0+28);
    a0 = D_08C2B2A8 - (-19800);
    a0 = a0 - 19800;
    cnd_ = s0 == s2;
    a1 = s0 + 0;
    if (cnd_) { goto L_089800B0; }
    goto L_0898004C;
L_0898004C:;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08980054;
L_08980054:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08980070; }
    goto L_0898005C;
L_0898005C:;
    v0 = LD32(v0);
    s0 = LD32(v1+252);
    a0 = LD32(v0-16);
    a0 = v1 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08980070;
L_08980070:;
    a0 = D_08C2B4CC - (-19252);
    a1 = s0 + 0;
    a2 = 1;
    a0 = a0 - 19252;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08980084;
L_08980084:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0898009C; }
    goto L_0898008C;
L_0898008C:;
    v0 = LD32(v0);
    a0 = LD32(v0-16);
    a0 = v1 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898009C;
L_0898009C:;
    v1 = LD32(s1);
    v0 = LD32(v1+72);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089800AC;
L_089800AC:;
    ST32(s1+28, s2);
    goto L_089800B0;
L_089800B0:;
    sp = sp + 16;
    return f0;
}

/* 089800C8 */
rv_t func_089800C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089800C8:;
    sp = sp - 48;
    v0 = 0x8005;
    s3 = a0 + 0;
    v1 = LD_U16(a0+228);
    cnd_ = v1 == v0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089804A0; }
    goto L_08980100;
L_08980100:;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = 0x801d;
    if (cnd_) { goto L_08980444; }
    goto L_0898010C;
L_0898010C:;
    cnd_ = v1 == 0;
    v0 = 0x8004;
    if (cnd_) { goto L_08980434; }
    goto L_08980114;
L_08980114:;
    cnd_ = v1 == v0;
    v0 = s2 + 0;
    if (cnd_) { goto L_08980144; }
    goto L_0898011C;
L_0898011C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08980144:;
    a0 = 672;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898014C;
L_0898014C:;
    a0 = v0 + 0;
    a1 = 999;
    s0 = v0 + 0;
    { rv_t r_ = func_089B04F4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898015C;
L_0898015C:;
    s2 = s0 + 0;
    goto L_08980160;
L_08980160:;
    cnd_ = s2 == 0;
    v0 = s2 + 0;
    if (cnd_) { goto L_0898011C; }
    goto L_08980168;
L_08980168:;
    v0 = LD32(s2);
    v1 = LD32(v0-16);
    v0 = 0x8005;
    v1 = s2 + v1;
    v1 = LD_U16(v1+8);
    cnd_ = v1 == v0;
    v0 = 0x8004;
    if (cnd_) { goto L_089801D0; }
    goto L_08980184;
L_08980184:;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s2+228); goto L_089801C4; }
    goto L_0898018C;
L_0898018C:;
    a1 = LD32(s3+176);
    goto L_08980190;
L_08980190:;
    cnd_ = a1 == 0;
    if (cnd_) { v0 = s2 + 0; goto L_0898011C; }
    goto L_08980198;
L_08980198:;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089801B4;
L_089801B4:;
    a0 = s2 + 0;
    { rv_t r_ = func_089E3DDC(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089801BC;
L_089801BC:;
    v0 = s2 + 0;
    goto L_0898011C;
L_089801C4:;
    v0 = v0 | 0x200;
    ST32(s2+228, v0);
    goto L_0898018C;
L_089801D0:;
    s1 = D_08B25AC0 - (23232);
    v1 = LD32(s1+23232);
    a3 = s1 + 23232;
    a2 = LD32(a3+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a2;
    a0 = v1 >> 1;
    v0 = 100;
    { u32 x_ = a0, y_ = v0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a2 = a2 + v1;
    ST32(a3+4, a2);
    ST32(s1+23232, v1);
    v0 = LD32(s3+236);
    v1 = LD32(s2+200);
    a1 = hi;
    a1 = a1 < v0;
    v1 = (v1 & ~(0x1u << 5)) | ((a1 & 0x1) << 5);
    ST32(s2+200, v1);
    v0 = LD32(s3+324);
    v0 = (v0 >> 2) & 0x1;
    ST8(s2+328, v0);
    v1 = LD32(s3+324);
    v1 = v1 & 0x4;
    cnd_ = v1 == 0;
    s4 = D_08C29324 - (-27868);
    if (cnd_) { goto L_08980244; }
    goto L_0898023C;
L_0898023C:;
    v0 = LD32(s3+240);
    ST32(s2+332, v0);
    goto L_08980244;
L_08980244:;
    v0 = LD_U8(s4-27868);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s3+176); goto L_08980190; }
    goto L_08980250;
L_08980250:;
    v0 = D_08C28F60 - (-28832);
    v1 = LD32(v0-28832);
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s3+176); goto L_08980190; }
    goto L_08980260;
L_08980260:;
    a2 = D_08C2A330 - (-23760);
    v0 = a2 - 23760;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    s5 = 0 + 0;
    ST32(v0+8, v1);
    a0 = sp + 0;
    ST32(sp+4, 0);
    cnd_ = a1 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_089802DC; }
    goto L_08980290;
L_08980290:;
    a2 = LD32(a2-23760);
    a3 = a1 + 0;
    goto L_08980298;
L_08980298:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089802CC; }
    goto L_089802B0;
L_089802B0:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_089802E0; }
    goto L_089802C0;
L_089802C0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089802B0; }
    goto L_089802CC;
L_089802CC:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08980298; }
    goto L_089802DC;
L_089802DC:;
    a0 = LD32(sp+8);
    goto L_089802E0;
L_089802E0:;
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_089803A4; }
    goto L_089802E8;
L_089802E8:;
    v0 = LD_U8(s4-27868);
    goto L_089802EC;
L_089802EC:;
    cnd_ = v0 == 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_08980300; }
    goto L_089802F4;
L_089802F4:;
    v0 = 1;
    goto L_089802F8;
L_089802F8:;
    ST8(s2+329, v0);
    goto L_089802FC;
L_089802FC:;
    s1 = LD32(sp);
    goto L_08980300;
L_08980300:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0898018C; }
    goto L_08980310;
L_08980310:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_0898018C; }
    goto L_0898031C;
L_0898031C:;
    v0 = LD32(s1);
    goto L_08980320;
L_08980320:;
    s6 = s5 << 2;
    v0 = s6 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08980374; }
    goto L_08980334;
L_08980334:;
    v0 = LD_U8(s0+8);
    goto L_08980338;
L_08980338:;
    cnd_ = v0 == 0;
    if (cnd_) { s4 = s0 + 0; goto L_0898039C; }
    goto L_08980340;
L_08980340:;
    cnd_ = s4 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0898038C; }
    goto L_08980348;
L_08980348:;
    v0 = LD32(s0+4);
    ST32(s4+4, v0);
    goto L_08980350;
L_08980350:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898035C;
L_0898035C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08980368;
L_08980368:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08980338; }
    goto L_08980370;
L_08980370:;
    v1 = LD32(s1+4);
    goto L_08980374;
L_08980374:;
    s5 = s5 + 1;
    v0 = s5 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08980320; }
    goto L_08980384;
L_08980384:;
    a1 = LD32(s3+176);
    goto L_08980190;
L_0898038C:;
    v1 = LD32(s0+4);
    v0 = s6 + v0;
    ST32(v0, v1);
    goto L_08980350;
L_0898039C:;
    s0 = LD32(s0+4);
    goto L_08980368;
L_089803A4:;
    a1 = 1;
    a0 = sp + 0;
    func_08ABC660(a0, a1);
    goto L_089803B0;
L_089803B0:;
    v1 = LD32(s0+76);
    v0 = LD32(s3+88);
    cnd_ = v1 == v0;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_0898042C; }
    goto L_089803C0;
L_089803C0:;
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_089803A4; }
    goto L_089803C8;
L_089803C8:;
    cnd_ = s5 == 0;
    v0 = LD_U8(s4-27868);
    if (cnd_) { goto L_089802EC; }
    goto L_089803D0;
L_089803D0:;
    v1 = LD32(s1+23232);
    a1 = s1 + 23232;
    a0 = LD32(a1+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEE504 - (-6908);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-6908));
    v0 = D_08AEE508 - (-6904);
    ST32(a1+4, a0);
    f1 = f1 * f0;
    f0 = BITSF(LD32(v0-6904));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    ST32(s1+23232, v1);
    if (cnd_) { goto L_089802FC; }
    goto L_08980424;
L_08980424:;
    v0 = 1;
    goto L_089802F8;
L_0898042C:;
    s5 = LD_U8(s0+81);
    goto L_089803C0;
L_08980434:;
    { rv_t r_ = func_089835D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898043C;
L_0898043C:;
    s2 = v0 + 0;
    goto L_08980160;
L_08980444:;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_08980480; }
    goto L_0898044C;
L_0898044C:;
    cnd_ = v0 != 0;
    v0 = s2 + 0;
    if (cnd_) { goto L_0898011C; }
    goto L_08980454;
L_08980454:;
    v0 = 0x8014;
    cnd_ = v1 != v0;
    v0 = s2 + 0;
    if (cnd_) { goto L_0898011C; }
    goto L_08980460;
L_08980460:;
    a0 = 700;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08980468;
L_08980468:;
    a0 = v0 + 0;
    a1 = 999;
    s0 = v0 + 0;
    { rv_t r_ = func_089C12C8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08980478;
L_08980478:;
    s2 = s0 + 0;
    goto L_08980160;
L_08980480:;
    a0 = 648;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08980488;
L_08980488:;
    a0 = v0 + 0;
    a1 = 999;
    s0 = v0 + 0;
    { rv_t r_ = func_089B534C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08980498;
L_08980498:;
    s2 = s0 + 0;
    goto L_08980160;
L_089804A0:;
    a0 = 999;
    { rv_t r_ = func_089A76EC(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089804A8;
L_089804A8:;
    s2 = v0 + 0;
    goto L_08980160;
}

/* 089804B0 */
rv_t func_089804B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089804B0:;
    sp = sp - 32;
    s1 = a1 + 0;
    v1 = LD32(a0+176);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089804EC; }
    goto L_089804D0;
L_089804D0:;
    { rv_t r_ = func_08983644(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089804D8;
L_089804D8:;
    goto L_089804DC;
L_089804DC:;
    goto L_089804E0;
L_089804E0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089804EC:;
    v0 = LD32(a1);
    a1 = v1 + 0;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898050C;
L_0898050C:;
    a0 = LD_U16(s0+228);
    v0 = 0xffff0000u;
    v0 = v0 | 0x7ffc;
    v0 = a0 + v0;
    v1 = v0 < 0x1bu;
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0898054C; }
    goto L_08980528;
L_08980528:;
    v1 = D_08ADDCF8 - (-8968);
    v0 = v0 << 2;
    v1 = v1 - 8968;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08980544u: goto L_08980544; case 0x0898054Cu: goto L_0898054C; case 0x08980668u: goto L_08980668; case 0x08980674u: goto L_08980674; case 0x08980680u: goto L_08980680; case 0x0898068Cu: goto L_0898068C; default: rs_break(0, 0x0898053c); }
L_08980544:;
    a2 = 0x203e0000u;
    a2 = a2 | 0x217d;
    goto L_0898054C;
L_0898054C:;
    a1 = LD32(s0+176);
    a0 = a2 + 0;
    a2 = sp + 0;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08980560;
L_08980560:;
    a1 = 0xbeeb0000u;
    a0 = LD32(sp);
    a1 = a1 | 0x1a1c;
    a2 = 4;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08980574;
L_08980574:;
    a1 = v0 + 0;
    v0 = (s32)v0 < 4;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08980658; }
    goto L_08980584;
L_08980584:;
    v1 = LD32(s0);
    v0 = LD32(v1+104);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08980594;
L_08980594:;
    v1 = LD_U16(s0+228);
    goto L_08980598;
L_08980598:;
    v0 = 0x8005;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_089804DC; }
    goto L_089805A4;
L_089805A4:;
    t0 = LD32(s0+112);
    cnd_ = t0 == 0;
    if (cnd_) {  goto L_089804E0; }
    goto L_089805B0;
L_089805B0:;
    v0 = LD32(s1);
    a3 = D_08C2A880 - (-22400);
    v1 = LD32(v0-16);
    v0 = 999;
    v1 = s1 + v1;
    a1 = LD32(v1+4);
    cnd_ = a1 == v0;
    a2 = a3 - 22400;
    if (cnd_) { goto L_089804DC; }
    goto L_089805D0;
L_089805D0:;
    v0 = LD32(a2+4);
    v1 = LD32(a3-22400);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08980620; }
    goto L_089805F4;
L_089805F4:;
    a0 = LD32(a2);
    goto L_089805F8;
L_089805F8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_08980638; }
    goto L_08980610;
L_08980610:;
    a2 = LD32(a2+4);
    goto L_08980614;
L_08980614:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_089805F8; }
    goto L_0898061C;
L_0898061C:;
    a0 = 0 + 0;
    goto L_08980620;
L_08980620:;
    cnd_ = a0 == 0;
    if (cnd_) {  goto L_089804DC; }
    goto L_08980628;
L_08980628:;
    ST32(a0+316, t0);
    { u64 r_ = func_089A82E0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08980630;
L_08980630:;
    goto L_089804DC;
L_08980638:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08980614; }
    goto L_08980644;
L_08980644:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08980614; }
    goto L_08980650;
L_08980650:;
    goto L_08980620;
L_08980658:;
    a0 = s0 + 0;
    f0 = func_08982F58(a0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08980660;
L_08980660:;
    v1 = LD_U16(s0+228);
    goto L_08980598;
L_08980668:;
    a2 = 0x5d00000u;
    a2 = a2 | 0x4860;
    goto L_0898054C;
L_08980674:;
    a2 = 0xd09a0000u;
    a2 = a2 | 0x5036;
    goto L_0898054C;
L_08980680:;
    a2 = 0x360000u;
    a2 = a2 | 0x34ea;
    goto L_0898054C;
L_0898068C:;
    a2 = 0xcc980000u;
    a2 = a2 | 0x70f0;
    goto L_0898054C;
}

/* 08980698 */
rv_t func_08980698(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08980698:;
    sp = sp - 96;
    s2 = a0 + 0;
    a0 = 0 + 0;
    v1 = LD32(a1);
    v0 = LD32(v1-12);
    v0 = a1 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089806D8; }
    goto L_089806D4;
L_089806D4:;
    a0 = LD32(v0+16);
    goto L_089806D8;
L_089806D8:;
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(v1+36); goto L_089809A0; }
    goto L_089806E0;
L_089806E0:;
    v0 = D_08B45A9C - (23196);
    goto L_089806E4;
L_089806E4:;
    f1 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(s2+180));
    s3 = s2 + 180;
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v0 = v0 + 23196;
    if (cnd_) { goto L_08980998; }
    goto L_08980700;
L_08980700:;
    f1 = BITSF(LD32(s3+4));
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    s1 = s2 + 192;
    if (cnd_) { goto L_0898080C; }
    goto L_08980718;
L_08980718:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s3+8));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v0 = D_08B45AA8 - (23208);
    if (cnd_) { goto L_0898080C; }
    goto L_08980730;
L_08980730:;
    f1 = BITSF(LD32(v0+23208));
    f0 = BITSF(LD32(s2+192));
    s1 = s2 + 192;
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v0 = v0 + 23208;
    if (cnd_) { goto L_0898080C; }
    goto L_0898074C;
L_0898074C:;
    f1 = BITSF(LD32(s1+4));
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0); goto L_08980810; }
    goto L_08980764;
L_08980764:;
    f1 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0); goto L_08980810; }
    goto L_0898077C;
L_0898077C:;
    f1 = BITSF(LD32(s1+12));
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0); goto L_08980810; }
    goto L_08980794;
L_08980794:;
    f1 = BITSF(LD32(s1+16));
    f0 = BITSF(LD32(v0+16));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0); goto L_08980810; }
    goto L_089807AC;
L_089807AC:;
    f1 = BITSF(LD32(s1+20));
    f0 = BITSF(LD32(v0+20));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0); goto L_08980810; }
    goto L_089807C4;
L_089807C4:;
    f1 = BITSF(LD32(s1+24));
    f0 = BITSF(LD32(v0+24));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0); goto L_08980810; }
    goto L_089807DC;
L_089807DC:;
    f1 = BITSF(LD32(s1+28));
    f0 = BITSF(LD32(v0+28));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0); goto L_08980810; }
    goto L_089807F4;
L_089807F4:;
    f1 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(s1+32));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    a0 = s2 + 0;
    if (cnd_) { goto L_08980988; }
    goto L_0898080C;
L_0898080C:;
    v1 = LD32(s0);
    goto L_08980810;
L_08980810:;
    a1 = 0 + 0;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0898082C; }
    goto L_08980828;
L_08980828:;
    a1 = LD32(v0+16);
    goto L_0898082C;
L_0898082C:;
    cnd_ = a1 == 0;
    if (cnd_) { v0 = LD32(v1+16); goto L_089808A0; }
    goto L_08980834;
L_08980834:;
    v0 = LD32(a0-12);
    v0 = s0 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0898084C; }
    goto L_08980848;
L_08980848:;
    a2 = LD32(v0+16);
    goto L_0898084C;
L_0898084C:;
    v0 = LD32(a0-12);
    v0 = s0 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    t0 = (u32)-1;
    if (cnd_) { goto L_08980864; }
    goto L_08980860;
L_08980860:;
    t0 = LD32(v0+8);
    goto L_08980864;
L_08980864:;
    a0 = s3 + 0;
    a1 = s1 + 0;
    a3 = 4;
    t1 = 0xffff;
    t2 = 1;
    t3 = 1;
    { rv_t r_ = func_088B08D8(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08980880;
L_08980880:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_0898089C; }
    goto L_08980888;
L_08980888:;
    v1 = LD32(s2+232);
    v0 = 999;
    cnd_ = v1 == v0;
    if (cnd_) { f0 = BITSF(LD32(s2+180)); goto L_089808D4; }
    goto L_08980898;
L_08980898:;
    v1 = LD32(s0);
    goto L_0898089C;
L_0898089C:;
    v0 = LD32(v1+16);
    goto L_089808A0;
L_089808A0:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    a2 = s1 + 0;
    t_ = v0;
    a3 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089808B4;
L_089808B4:;
    goto L_089808B8;
L_089808B8:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_089808D4:;
    f1 = BITSF(LD32(s3+4));
    f2 = BITSF(LD32(s3+8));
    ST32(sp, FBITS(f0));
    s4 = sp + 16;
    a1 = s3 + 0;
    ST32(sp+4, FBITS(f1));
    a0 = s0 + 0;
    a2 = sp + 0;
    ST32(sp+8, FBITS(f2));
    a3 = s4 + 0;
    f7 = BITSF(LD32(s2+192));
    f8 = BITSF(LD32(s1+32));
    f0 = BITSF(LD32(s1+4));
    f1 = BITSF(LD32(s1+8));
    f2 = BITSF(LD32(s1+12));
    f3 = BITSF(LD32(s1+16));
    f4 = BITSF(LD32(s1+20));
    f5 = BITSF(LD32(s1+24));
    f6 = BITSF(LD32(s1+28));
    ST32(sp+16, FBITS(f7));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f1));
    ST32(sp+28, FBITS(f2));
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f5));
    ST32(sp+44, FBITS(f6));
    ST32(sp+48, FBITS(f8));
    v0 = func_089E3EEC(a0, a1, a2, a3);
    goto L_08980948;
L_08980948:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_08980968; }
    goto L_08980950;
L_08980950:;
    v0 = D_08AEE50C - (-6900);
    f0 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(v0-6900));
    f0 = f0 - f1;
    ST32(sp+4, FBITS(f0));
    v0 = LD32(s0);
    goto L_08980968;
L_08980968:;
    a0 = s0 + 0;
    a2 = s4 + 0;
    v1 = LD32(v0+16);
    a1 = sp + 0;
    t_ = v1;
    a3 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08980980;
L_08980980:;
    goto L_089808B8;
L_08980988:;
    a1 = s0 + 0;
    { rv_t r_ = func_08983778(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08980990;
L_08980990:;
    goto L_089808B8;
L_08980998:;
    s1 = s2 + 192;
    goto L_0898080C;
L_089809A0:;
    a1 = D_08B45AA8 - (23208);
    a1 = a1 + 23208;
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089809B0;
L_089809B0:;
    v0 = D_08B45A9C - (23196);
    goto L_089806E4;
}

/* 089809B8 */
void func_089809B8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_089809B8:;
    sp = sp - 128;
    v0 = D_08B2BB9C - (-17508);
    a0 = a0 & 0xff;
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    ST32(sp+32, a0);
    if (cnd_) { goto L_08980C50; }
    goto L_089809FC;
L_089809FC:;
    v1 = D_08B2BB6D - (-17555);
    v0 = LD_U8(v1-17555);
    a0 = 1;
    cnd_ = v0 == 0;
    ST32(sp+36, a0);
    if (cnd_) { goto L_08980A20; }
    goto L_08980A10;
L_08980A10:;
    v0 = D_08B2BB84 - (-17532);
    v1 = LD32(v0-17532);
    v1 = 0 < v1;
    ST32(sp+36, v1);
    goto L_08980A20;
L_08980A20:;
    v1 = D_08C2C664 - (-14748);
    v1 = v1 - 14748;
    v0 = LD32(v1+8);
    a0 = sp + 0;
    a1 = 1;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    s7 = 0 + 0;
    fp = 0 + 0;
    ST32(sp+40, 0);
    ST32(sp, v1);
    ST32(sp+44, 0);
    ST32(sp+4, 0);
    ST32(sp+48, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABCF50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08980A60;
L_08980A60:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    a1 = D_08C29FC4 - (-24636);
    if (cnd_) { goto L_08980AA8; }
    goto L_08980A6C;
L_08980A6C:;
    s1 = 1;
    s0 = LD32(v0);
    goto L_08980A74;
L_08980A74:;
    cnd_ = s0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08980A90; }
    goto L_08980A7C;
L_08980A7C:;
    v0 = LD32(s0+96);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0898124C; }
    goto L_08980A8C;
L_08980A8C:;
    a0 = sp + 0;
    goto L_08980A90;
L_08980A90:;
    a1 = 1;
    { u64 r_ = func_08ABCF50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08980A98;
L_08980A98:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08980A74; }
    goto L_08980AA4;
L_08980AA4:;
    a1 = D_08C29FC4 - (-24636);
    goto L_08980AA8;
L_08980AA8:;
    v0 = a1 - 24636;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    ST32(sp+16, v0);
    v1 = v1 + 1;
    s3 = sp + 16;
    ST32(v0+8, v1);
    ST32(sp+24, 0);
    cnd_ = a0 == 0;
    ST32(sp+20, 0);
    if (cnd_) { goto L_08980B1C; }
    goto L_08980AD0;
L_08980AD0:;
    a1 = LD32(a1-24636);
    a2 = a0 + 0;
    goto L_08980AD8;
L_08980AD8:;
    a0 = LD32(s3+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s3+8, v1);
    if (cnd_) { goto L_08980B0C; }
    goto L_08980AF0;
L_08980AF0:;
    v1 = LD32(s3+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+24); goto L_08980B20; }
    goto L_08980B00;
L_08980B00:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s3+8, v0);
    if (cnd_) { goto L_08980AF0; }
    goto L_08980B0C;
L_08980B0C:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s3+4, v0);
    if (cnd_) { goto L_08980AD8; }
    goto L_08980B1C;
L_08980B1C:;
    v1 = LD32(sp+24);
    goto L_08980B20;
L_08980B20:;
    cnd_ = v1 == 0;
    s2 = D_08C2B4CC - (-19252);
    if (cnd_) { goto L_08980B74; }
    goto L_08980B28;
L_08980B28:;
    s1 = 0x58d0000u;
    s4 = 0x8014;
    s1 = s1 | 0x13bf;
    s5 = 1;
    s0 = LD32(v1);
    goto L_08980B3C;
L_08980B3C:;
    cnd_ = s0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08980B60; }
    goto L_08980B44;
L_08980B44:;
    v1 = LD32(s0);
    v0 = LD32(v1+100);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08980B54;
L_08980B54:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s0+28); goto L_08981178; }
    goto L_08980B5C;
L_08980B5C:;
    a0 = s3 + 0;
    goto L_08980B60;
L_08980B60:;
    a1 = 1;
    { u64 r_ = func_08ABF6B0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08980B68;
L_08980B68:;
    v1 = LD32(sp+24);
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(v1); goto L_08980B3C; }
    goto L_08980B74;
L_08980B74:;
    v0 = D_08AEE510 - (-6896);
    f20 = BITSF(LD32(v0-6896));
    s6 = 0 + 0;
    s6 = s6 + 1;
    goto L_08980B84;
L_08980B84:;
    v0 = 1;
    s2 = 0 + 0;
    cnd_ = s6 == v0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08981140; }
    goto L_08980B94;
L_08980B94:;
    a0 = 2;
    cnd_ = s6 == a0;
    if (cnd_) { a1 = LD32(sp+32); goto L_08981020; }
    goto L_08980BA0;
L_08980BA0:;
    v0 = s2 | s4;
    goto L_08980BA4;
L_08980BA4:;
    cnd_ = v0 != 0;
    v0 = s6 < 0x2u;
    if (cnd_) { goto L_08980CAC; }
    goto L_08980BAC;
L_08980BAC:;
    cnd_ = v0 != 0;
    if (cnd_) { s6 = s6 + 1; goto L_08980B84; }
    goto L_08980BB4;
L_08980BB4:;
    s1 = LD32(sp+16);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08980C3C; }
    goto L_08980BC8;
L_08980BC8:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08980C3C; }
    goto L_08980BD4;
L_08980BD4:;
    v0 = LD32(s1);
    goto L_08980BD8;
L_08980BD8:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08980C2C; }
    goto L_08980BEC;
L_08980BEC:;
    v0 = LD_U8(s0+8);
    goto L_08980BF0;
L_08980BF0:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08980CA4; }
    goto L_08980BF8;
L_08980BF8:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08980C94; }
    goto L_08980C00;
L_08980C00:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08980C08;
L_08980C08:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08980C14;
L_08980C14:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08980C20;
L_08980C20:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08980BF0; }
    goto L_08980C28;
L_08980C28:;
    v1 = LD32(s1+4);
    goto L_08980C2C;
L_08980C2C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08980BD8; }
    goto L_08980C3C;
L_08980C3C:;
    a0 = LD32(sp);
    goto L_08980C40;
L_08980C40:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08980C84; }
    goto L_08980C50;
L_08980C50:;
    goto L_08980C54;
L_08980C54:;
    sp = sp + 128;
    return;
L_08980C84:;
    { u64 r_ = func_08ABCFE8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08980C8C;
L_08980C8C:;
    goto L_08980C54;
L_08980C94:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08980C08;
L_08980CA4:;
    s0 = LD32(s0+4);
    goto L_08980C20;
L_08980CAC:;
    cnd_ = (s32)s4 <= 0;
    v0 = fp + s7;
    if (cnd_) { goto L_08980DA4; }
    goto L_08980CB4;
L_08980CB4:;
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08980F78; }
    goto L_08980CBC;
L_08980CBC:;
    a1 = 1;
    ST32(sp+20, 0);
    s5 = 2;
    ST32(sp+52, 0);
    ST32(sp+24, 0);
    { u64 r_ = func_08ABF6B0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08980CD4;
L_08980CD4:;
    a2 = LD32(sp+24);
    cnd_ = a2 == 0;
    v0 = LD32(sp+44);
    if (cnd_) { goto L_08980DA4; }
    goto L_08980CE0;
L_08980CE0:;
    v1 = LD32(sp+40);
    a0 = fp + v0;
    a1 = s7 + v1;
    v0 = (s32)a1 < (s32)a0;
    v0 = v0 ^ 0x1;
    a0 = (s32)a0 < (s32)a1;
    v1 = 0 < s7;
    v1 = v0 & v1;
    a0 = a0 ^ 0x1;
    v0 = 0 < fp;
    cnd_ = v1 != 0;
    a0 = a0 & v0;
    if (cnd_) { goto L_08980D2C; }
    goto L_08980D10;
L_08980D10:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08980D24; }
    goto L_08980D18;
L_08980D18:;
    cnd_ = fp == 0;
    if (cnd_) { goto L_08980EC4; }
    goto L_08980D20;
L_08980D20:;
    a0 = 1;
    goto L_08980D24;
L_08980D24:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08980EB4; }
    goto L_08980D2C;
L_08980D2C:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08980E9C; }
    goto L_08980D34;
L_08980D34:;
    cnd_ = s5 != 0;
    if (cnd_) { a0 = 1; goto L_08980E44; }
    goto L_08980D3C;
L_08980D3C:;
    s5 = 1;
    goto L_08980D40;
L_08980D40:;
    s0 = LD32(a2);
    a0 = s3 + 0;
    a1 = 1;
    { u64 r_ = func_08ABF6B0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08980D50;
L_08980D50:;
    a0 = LD32(s0+88);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08980D58;
L_08980D58:;
    cnd_ = s0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08980D80; }
    goto L_08980D60;
L_08980D60:;
    v1 = LD32(s0);
    v0 = LD32(v1+96);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08980D70;
L_08980D70:;
    cnd_ = v0 != 0;
    a2 = LD32(sp+24);
    if (cnd_) { goto L_08980D84; }
    goto L_08980D78;
L_08980D78:;
    cnd_ = s1 == s5;
    if (cnd_) { goto L_08980E08; }
    goto L_08980D80;
L_08980D80:;
    a2 = LD32(sp+24);
    goto L_08980D84;
L_08980D84:;
    cnd_ = a2 != 0;
    v1 = LD32(sp+52);
    if (cnd_) { goto L_08980D94; }
    goto L_08980D8C;
L_08980D8C:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = s3 + 0; goto L_08980DEC; }
    goto L_08980D94;
L_08980D94:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08980DA4; }
    goto L_08980D9C;
L_08980D9C:;
    cnd_ = (s32)s4 > 0;
    v0 = LD32(sp+44);
    if (cnd_) { goto L_08980CE0; }
    goto L_08980DA4;
L_08980DA4:;
    cnd_ = (s32)s2 <= 0;
    v0 = s6 < 0x2u;
    if (cnd_) { goto L_08980BAC; }
    goto L_08980DAC;
L_08980DAC:;
    s1 = D_08C29328 - (-27864);
    s0 = 5;
    goto L_08980DB4;
L_08980DB4:;
    a0 = 999;
    v0 = func_089812C0(a0, 0, 0, 0);
    goto L_08980DBC;
L_08980DBC:;
    s2 = s2 - 1;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08980DDC; }
    goto L_08980DC8;
L_08980DC8:;
    v0 = LD32(s1-27864);
    cnd_ = v0 == s0;
    if (cnd_) { goto L_08980DDC; }
    goto L_08980DD4;
L_08980DD4:;
    f0 = func_08982F58(a0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08980DDC;
L_08980DDC:;
    cnd_ = (s32)s2 > 0;
    v0 = s6 < 0x2u;
    if (cnd_) { goto L_08980DB4; }
    goto L_08980DE4;
L_08980DE4:;
    goto L_08980BAC;
L_08980DEC:;
    a1 = 1;
    ST32(sp+20, 0);
    ST32(sp+52, 0);
    ST32(sp+24, 0);
    { u64 r_ = func_08ABF6B0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08980E00;
L_08980E00:;
    a2 = LD32(sp+24);
    goto L_08980D94;
L_08980E08:;
    a0 = s0 + 0;
    { rv_t r_ = func_088744F8(a0, 0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08980E10;
L_08980E10:;
    cnd_ = s1 != 0;
    s4 = s4 - 1;
    if (cnd_) { goto L_08980E2C; }
    goto L_08980E18;
L_08980E18:;
    v0 = s7 - 1;
    s7 = v0 & 0xff;
    goto L_08980E20;
L_08980E20:;
    v0 = 1;
    goto L_08980E24;
L_08980E24:;
    ST32(sp+52, v0);
    goto L_08980D80;
L_08980E2C:;
    a1 = 1;
    cnd_ = s1 != a1;
    v0 = 1;
    if (cnd_) { goto L_08980E24; }
    goto L_08980E38;
L_08980E38:;
    v0 = fp - 1;
    fp = v0 & 0xff;
    goto L_08980E20;
L_08980E44:;
    cnd_ = s5 == a0;
    a1 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_08980E94; }
    goto L_08980E4C;
L_08980E4C:;
    v0 = LD32(a1+23232);
    v1 = a1 + 23232;
    a0 = LD32(v1+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    a1 = 2;
    { u32 x_ = v1, y_ = a1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v1 = D_08B25AC0 - (23232);
    a0 = a0 + v0;
    v1 = v1 + 23232;
    ST32(v1+4, a0);
    a0 = D_08B25AC0 - (23232);
    s5 = hi;
    ST32(a0+23232, v0);
    goto L_08980D40;
L_08980E94:;
    s5 = 0 + 0;
    goto L_08980D40;
L_08980E9C:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08980DA4; }
    goto L_08980EA4;
L_08980EA4:;
    cnd_ = a0 == 0;
    if (cnd_) { s5 = 0 + 0; goto L_08980D40; }
    goto L_08980EAC;
L_08980EAC:;
    goto L_08980DA4;
L_08980EB4:;
    cnd_ = a0 != 0;
    s5 = 1;
    if (cnd_) { goto L_08980D40; }
    goto L_08980EBC;
L_08980EBC:;
    goto L_08980E9C;
L_08980EC4:;
    cnd_ = s7 != 0;
    v1 = 1;
    if (cnd_) { goto L_08980D2C; }
    goto L_08980ECC;
L_08980ECC:;
    s1 = LD32(sp+16);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08980C3C; }
    goto L_08980EE0;
L_08980EE0:;
    v1 = LD32(s1+4);
    v0 = fp < v1;
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08980C3C; }
    goto L_08980EF0;
L_08980EF0:;
    v0 = LD32(s1);
    goto L_08980EF4;
L_08980EF4:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08980F48; }
    goto L_08980F08;
L_08980F08:;
    v0 = LD_U8(s0+8);
    goto L_08980F0C;
L_08980F0C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08980F70; }
    goto L_08980F14;
L_08980F14:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08980F60; }
    goto L_08980F1C;
L_08980F1C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08980F24;
L_08980F24:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08980F30;
L_08980F30:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08980F3C;
L_08980F3C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08980F0C; }
    goto L_08980F44;
L_08980F44:;
    v1 = LD32(s1+4);
    goto L_08980F48;
L_08980F48:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08980EF4; }
    goto L_08980F58;
L_08980F58:;
    a0 = LD32(sp);
    goto L_08980C40;
L_08980F60:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08980F24;
L_08980F70:;
    s0 = LD32(s0+4);
    goto L_08980F3C;
L_08980F78:;
    s1 = LD32(sp+16);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08980C3C; }
    goto L_08980F8C;
L_08980F8C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08980C3C; }
    goto L_08980F98;
L_08980F98:;
    v0 = LD32(s1);
    goto L_08980F9C;
L_08980F9C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08980FF0; }
    goto L_08980FB0;
L_08980FB0:;
    v0 = LD_U8(s0+8);
    goto L_08980FB4;
L_08980FB4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08981018; }
    goto L_08980FBC;
L_08980FBC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08981008; }
    goto L_08980FC4;
L_08980FC4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08980FCC;
L_08980FCC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08980FD8;
L_08980FD8:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08980FE4;
L_08980FE4:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08980FB4; }
    goto L_08980FEC;
L_08980FEC:;
    v1 = LD32(s1+4);
    goto L_08980FF0;
L_08980FF0:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08980F9C; }
    goto L_08981000;
L_08981000:;
    a0 = LD32(sp);
    goto L_08980C40;
L_08981008:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08980FCC;
L_08981018:;
    s0 = LD32(s0+4);
    goto L_08980FE4;
L_08981020:;
    cnd_ = a1 == 0;
    v0 = s2 | s4;
    if (cnd_) { goto L_08980BA4; }
    goto L_08981028;
L_08981028:;
    v1 = D_08B2BB6D - (-17555);
    v0 = LD_U8(v1-17555);
    cnd_ = v0 != 0;
    a0 = LD32(sp+44);
    if (cnd_) { goto L_0898104C; }
    goto L_08981038;
L_08981038:;
    v0 = D_08C29328 - (-27864);
    a0 = LD32(v0-27864);
    v1 = 5;
    cnd_ = a0 == v1;
    a0 = LD32(sp+44);
    if (cnd_) { goto L_08980BA0; }
    goto L_0898104C;
L_0898104C:;
    a1 = LD32(sp+40);
    v1 = fp + a0;
    v0 = a1 + s7;
    v1 = v1 - v0;
    a0 = 0 - v1;
    a1 = (s32)0 < (s32)v1;
    v1 = (s32)v1 > (s32)a0 ? v1 : a0;
    v0 = (s32)v1 < 2;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(sp+16); goto L_0898109C; }
    goto L_08981074;
L_08981074:;
    f1 = BITSF(v1);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 * f20;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v0 = (s32)s7 < (s32)v1 ? s7 : v1;
    s2 = (s32)fp < (s32)v1 ? fp : v1;
    if (a1 == 0) s2 = v0;
    s4 = s2 + 0;
    goto L_08980BA0;
L_0898109C:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08980C3C; }
    goto L_089810AC;
L_089810AC:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08980C3C; }
    goto L_089810B8;
L_089810B8:;
    v0 = LD32(s1);
    goto L_089810BC;
L_089810BC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08981110; }
    goto L_089810D0;
L_089810D0:;
    v0 = LD_U8(s0+8);
    goto L_089810D4;
L_089810D4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08981138; }
    goto L_089810DC;
L_089810DC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08981128; }
    goto L_089810E4;
L_089810E4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089810EC;
L_089810EC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089810F8;
L_089810F8:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08981104;
L_08981104:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089810D4; }
    goto L_0898110C;
L_0898110C:;
    v1 = LD32(s1+4);
    goto L_08981110;
L_08981110:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089810BC; }
    goto L_08981120;
L_08981120:;
    a0 = LD32(sp);
    goto L_08980C40;
L_08981128:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089810EC;
L_08981138:;
    s0 = LD32(s0+4);
    goto L_08981104;
L_08981140:;
    a1 = LD32(sp+48);
    v0 = LD32(sp+36);
    cnd_ = v0 != 0;
    s2 = 0 - a1;
    if (cnd_) { goto L_08981164; }
    goto L_08981150;
L_08981150:;
    v0 = 0 - s2;
    cnd_ = (s32)s2 < 0;
    s4 = (s32)s2 > (s32)v0 ? s2 : v0;
    if (cnd_) { goto L_08980B94; }
    goto L_0898115C;
L_0898115C:;
    s4 = 0 + 0;
    goto L_08980B94;
L_08981164:;
    v0 = func_08979D14();
    goto L_0898116C;
L_0898116C:;
    v1 = LD32(sp+48);
    s2 = v0 - v1;
    goto L_08981150;
L_08981178:;
    a0 = s2 - 19252;
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08981184;
L_08981184:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089811A4; }
    goto L_0898118C;
L_0898118C:;
    a1 = LD32(v0);
    v0 = LD32(a1-16);
    v0 = a0 + v0;
    v1 = LD_U16(v0+8);
    cnd_ = v1 == s4;
    if (cnd_) { v0 = LD32(a1-12); goto L_08981234; }
    goto L_089811A4;
L_089811A4:;
    v0 = LD32(sp+48);
    goto L_089811A8;
L_089811A8:;
    a0 = LD32(s0+88);
    v0 = v0 + 1;
    ST32(sp+48, v0);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089811B8;
L_089811B8:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_08981204; }
    goto L_089811C0;
L_089811C0:;
    a0 = LD32(s0+88);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089811C8;
L_089811C8:;
    cnd_ = v0 != s5;
    a0 = s3 + 0;
    if (cnd_) { goto L_08980B60; }
    goto L_089811D0;
L_089811D0:;
    v1 = LD32(s0);
    v0 = LD32(v1+96);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089811E0;
L_089811E0:;
    cnd_ = v0 == 0;
    v0 = fp + 1;
    if (cnd_) { goto L_089811FC; }
    goto L_089811E8;
L_089811E8:;
    a0 = LD32(sp+44);
    v0 = a0 + 1;
    v0 = v0 & 0xff;
    ST32(sp+44, v0);
    goto L_08980B5C;
L_089811FC:;
    fp = v0 & 0xff;
    goto L_08980B5C;
L_08981204:;
    v0 = LD32(v1+96);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981210;
L_08981210:;
    cnd_ = v0 == 0;
    v0 = s7 + 1;
    if (cnd_) { goto L_0898122C; }
    goto L_08981218;
L_08981218:;
    v1 = LD32(sp+40);
    v0 = v1 + 1;
    v0 = v0 & 0xff;
    ST32(sp+40, v0);
    goto L_089811C0;
L_0898122C:;
    s7 = v0 & 0xff;
    goto L_089811C0;
L_08981234:;
    v0 = a0 + v0;
    v1 = LD32(v0+16);
    cnd_ = v1 != s1;
    v0 = LD32(sp+48);
    if (cnd_) { goto L_089811A8; }
    goto L_08981244;
L_08981244:;
    a0 = s3 + 0;
    goto L_08980B60;
L_0898124C:;
    a0 = LD32(s0+88);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08981254;
L_08981254:;
    a1 = LD32(sp+40);
    cnd_ = v0 != 0;
    v1 = a1 + 1;
    if (cnd_) { goto L_08981278; }
    goto L_08981260;
L_08981260:;
    v1 = v1 & 0xff;
    ST32(sp+40, v1);
    goto L_08981268;
L_08981268:;
    a1 = LD32(sp+48);
    a1 = a1 + 1;
    ST32(sp+48, a1);
    goto L_08980A8C;
L_08981278:;
    a0 = LD32(s0+88);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08981280;
L_08981280:;
    a0 = LD32(sp+44);
    cnd_ = v0 != s1;
    v1 = a0 + 1;
    if (cnd_) { goto L_08981268; }
    goto L_0898128C;
L_0898128C:;
    v1 = v1 & 0xff;
    ST32(sp+44, v1);
    goto L_08981268;
}

/* 08981298 */
void func_08981298(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
L_08981298:;
    v0 = D_08C29FD4 - (-24620);
    v0 = v0 - 24620;
    a0 = 2;
    v1 = 1;
    goto L_089812A8;
L_089812A8:;
    v1 = v1 - 1;
    ST32(v0, a0);
    cnd_ = (s32)v1 >= 0;
    v0 = v0 + 4;
    if (cnd_) { goto L_089812A8; }
    goto L_089812B8;
L_089812B8:;
    return;
}

/* 089812C0 */
u32 func_089812C0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089812C0:;
    sp = sp - 16;
    v0 = 999;
    s1 = a0 + 0;
    a0 = D_08C29FC4 - (-24636);
    v1 = a0 - 24636;
    cnd_ = s1 == v0;
    if (cnd_) { goto L_08981344; }
    goto L_089812E4;
L_089812E4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24636);
    v0 = v0 - 1;
    v0 = s1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { s0 = 0 + 0; goto L_08981328; }
    goto L_08981308;
L_08981308:;
    v1 = LD32(a0);
    goto L_0898130C;
L_0898130C:;
    v0 = LD32(v1+4);
    cnd_ = v0 == s1;
    if (cnd_) { v0 = LD32(v1+16); goto L_08981364; }
    goto L_08981318;
L_08981318:;
    a0 = LD32(a0+4);
    goto L_0898131C;
L_0898131C:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0898130C; }
    goto L_08981324;
L_08981324:;
    s0 = 0 + 0;
    goto L_08981328;
L_08981328:;
    cnd_ = s0 == 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_08981344; }
    goto L_08981330;
L_08981330:;
    sp = sp + 16;
    return v0;
L_08981344:;
    a0 = 328;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898134C;
L_0898134C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    func_0897E594(a0, a1);
    goto L_0898135C;
L_0898135C:;
    v0 = s0 + 0;
    goto L_08981330;
L_08981364:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = v1 + 0;
    if (cnd_) { goto L_08981318; }
    goto L_08981370;
L_08981370:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0898131C; }
    goto L_0898137C;
L_0898137C:;
    goto L_08981328;
}

/* 08981384 */
rv_t func_08981384(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08981384:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089814A8; }
    goto L_089813B8;
L_089813B8:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEE514 - (-6892);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-6892));
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
    t0 = D_08C29F14 - (-24812);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C29F24 - (-24796);
    a3 = D_08C29F34 - (-24780);
    v1 = t0 - 24812;
    a1 = v0 - 24796;
    a2 = a3 - 24780;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C29FC4 - (-24636);
    s0 = s3 - 24636;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-24796, FBITS(f5));
    v0 = 4;
    ST32(t0-24812, FBITS(f1));
    ST32(a3-24780, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981470;
L_08981470:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-24636, v0);
    if (cnd_) { goto L_0898149C; }
    goto L_08981480;
L_08981480:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08981488;
L_08981488:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08981488; }
    goto L_0898149C;
L_0898149C:;
    v0 = s3 - 24636;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089814A8;
L_089814A8:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089814CC; }
    goto L_089814BC;
L_089814BC:;
    v0 = D_08C29FC4 - (-24636);
    a0 = LD32(v0-24636);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089814E4; }
    goto L_089814CC;
L_089814CC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089814E4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089814EC;
L_089814EC:;
    goto L_089814CC;
}

/* 089814F4 */
rv_t func_089814F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089814F4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08981384(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981508;
L_08981508:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08981514 */
rv_t func_08981514(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08981514:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08981384(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981528;
L_08981528:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08981534 */
void func_08981534(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08981534:;
    sp = sp - 16;
    s0 = a0 & 0xffff;
    a0 = 20;
    s1 = a1 & 0xffff;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981558;
L_08981558:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 11;
    t0 = 76;
    func_088A5E94(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_08981574;
L_08981574:;
    a0 = s2 + 0;
    func_0898159C(a0);
    goto L_0898157C;
L_0898157C:;
    a0 = s2 + 0;
    func_088A6464(a0);
    goto L_08981584;
L_08981584:;
    sp = sp + 16;
    return;
}

/* 0898159C */
void func_0898159C(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    float f12 = 0, f20 = 0;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_0898159C:;
    sp = sp - 112;
    f20 = BITSF(0);
    a1 = 0 + 0;
    s0 = a0 + 0;
    f12 = f20;
    a2 = 18;
    a3 = 0 + 0;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089815D4;
L_089815D4:;
    t3 = 1;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 16;
    a3 = 4;
    t0 = 8;
    t1 = 1;
    t2 = 0 + 0;
    func_088A631C(a0, a2, a3, t0, t1, t2, t3);
    goto L_089815F8;
L_089815F8:;
    v0 = D_08AEE518 - (-6888);
    f12 = BITSF(LD32(v0-6888));
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 6;
    a3 = 8;
    t0 = 32;
    t1 = 1;
    t2 = 0 + 0;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08981620;
L_08981620:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 2;
    a3 = 12;
    t0 = 16;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08981644;
L_08981644:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 2;
    a3 = 14;
    t0 = 16;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08981668;
L_08981668:;
    f12 = f20;
    a0 = s0 + 0;
    t2 = 1;
    a1 = 0 + 0;
    a2 = 2;
    a3 = 16;
    t0 = 16;
    t1 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_0898168C;
L_0898168C:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 17;
    a3 = 18;
    t0 = 21;
    t1 = 1;
    func_088A6378(a0, a2, a3, t0, t1);
    goto L_089816A8;
L_089816A8:;
    a0 = s0 + 0;
    t3 = 1;
    a1 = 0 + 0;
    a2 = 13;
    a3 = 60;
    t0 = 32;
    t1 = 3;
    t2 = 1;
    func_088A6290(a0, a2, a3, t0, t1, t2, t3);
    goto L_089816CC;
L_089816CC:;
    f12 = f20;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 64;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089816F0;
L_089816F0:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 13;
    a3 = 68;
    t0 = 32;
    t1 = 6;
    t2 = 1;
    t3 = 1;
    func_088A6290(a0, a2, a3, t0, t1, t2, t3);
    goto L_08981714;
L_08981714:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 13;
    a3 = 72;
    t0 = 32;
    t1 = 10;
    t2 = 1;
    t3 = 1;
    func_088A6290(a0, a2, a3, t0, t1, t2, t3);
    goto L_08981738;
L_08981738:;
    sp = sp + 112;
    return;
}

/* 0898174C */
void func_0898174C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0898174C:;
    v0 = D_08AEE51C - (-6884);
    f0 = BITSF(LD32(v0-6884));
    v1 = 4;
    v0 = 999;
    ST32(a0+8, FBITS(f0));
    ST32(a0, v0);
    ST32(a0+68, v1);
    ST16(a0+18, 0);
    ST16(a0+12, 0);
    ST16(a0+14, 0);
    ST16(a0+16, 0);
    ST32(a0+60, v1);
    ST32(a0+64, 0);
    ST32(a0+72, 0);
    return;
}

/* 08981788 */
void func_08981788(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08981788:;
    sp = sp - 32;
    s3 = a0 + 0;
    func_08873E94(a0, a1);
    goto L_089817A8;
L_089817A8:;
    v1 = D_08AEE524 - (-6876);
    v0 = D_08AEE520 - (-6880);
    f1 = BITSF(LD32(v0-6880));
    f0 = BITSF(LD32(v1-6876));
    v0 = D_08AF9D20 - (-25312);
    v0 = v0 - 25312;
    a1 = (u32)-1;
    ST32(s3, v0);
    v0 = 999;
    a0 = s3 + 28;
    ST32(s3+104, v0);
    ST32(s3+120, a1);
    ST32(s3+136, FBITS(f1));
    ST32(s3+144, FBITS(f0));
    ST32(s3+108, 0);
    ST32(s3+112, 0);
    ST32(s3+116, a1);
    ST32(s3+124, 0);
    ST8(s3+128, 0);
    ST32(s3+132, FBITS(f1));
    ST32(s3+140, FBITS(f0));
    func_0898174C(a0);
    goto L_08981800;
L_08981800:;
    a0 = 0 + 0;
    v1 = s3 + 148;
    goto L_08981808;
L_08981808:;
    a0 = a0 + 1;
    v0 = a0 < 0x5u;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08981808; }
    goto L_0898181C;
L_0898181C:;
    v0 = D_08C28F3C - (-28868);
    v1 = LD32(v0-28868);
    v0 = 2;
    f0 = BITSF(0);
    cnd_ = v1 == v0;
    v0 = D_08B2858C - (-31348);
    if (cnd_) { goto L_089818A0; }
    goto L_08981834;
L_08981834:;
    s2 = D_08C2A08C - (-24436);
    s1 = s2 - 24436;
    v0 = LD32(s1+4);
    ST32(s3+36, FBITS(f0));
    a0 = 12;
    v0 = v0 - 1;
    s0 = LD32(s3+4);
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981858;
L_08981858:;
    a0 = LD32(s2-24436);
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
L_089818A0:;
    f0 = BITSF(LD32(v0-31348));
    goto L_08981834;
}

/* 089818A8 */
u64 func_089818A8(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_089818A8:;
    sp = sp - 112;
    v0 = D_08AF9D20 - (-25312);
    v0 = v0 - 25312;
    v1 = 999;
    s2 = a0 + 0;
    s1 = LD32(a0+28);
    cnd_ = s1 == v1;
    ST32(a0, v0);
    if (cnd_) { goto L_08981AF0; }
    goto L_089818F0;
L_089818F0:;
    v0 = D_08AEE530 - (-6864);
    f20 = BITSF(LD32(v0-6864));
    s4 = D_08C2B2A8 - (-19800);
    s5 = s4 - 19800;
    s3 = 999;
    s7 = 4;
    s6 = 0x8004;
    goto L_0898190C;
L_0898190C:;
    cnd_ = s1 == s3;
    if (cnd_) { a0 = D_08C2B4CC - (-19252); goto L_08981A58; }
    goto L_08981914;
L_08981914:;
    v0 = LD32(s5+4);
    v1 = LD32(s4-19800);
    v0 = v0 - 1;
    v0 = s1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08981964; }
    goto L_08981938;
L_08981938:;
    a0 = LD32(a1);
    goto L_0898193C;
L_0898193C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s1;
    if (cnd_) { v0 = LD32(v1+16); goto L_08981C08; }
    goto L_08981954;
L_08981954:;
    a1 = LD32(a1+4);
    goto L_08981958;
L_08981958:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0898193C; }
    goto L_08981960;
L_08981960:;
    s0 = 0 + 0;
    goto L_08981964;
L_08981964:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08981A54; }
    goto L_0898196C;
L_0898196C:;
    v1 = LD32(s0);
    a1 = 999;
    v0 = LD32(v1+224);
    t_ = v0;
    s1 = LD32(s0+252);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981980;
L_08981980:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+172);
    t_ = v0;
    a1 = 999;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981994;
L_08981994:;
    a0 = s0 + 0;
    { u64 r_ = func_089D4F40(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898199C;
L_0898199C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08981A0C; }
    goto L_089819A4;
L_089819A4:;
    v0 = LD32(s0);
    ST32(s0+12, s7);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    v0 = LD_U16(v1+8);
    cnd_ = v0 == s6;
    if (cnd_) { goto L_089819D0; }
    goto L_089819C0;
L_089819C0:;
    a0 = s0 + 0;
    { u64 r_ = func_089D0A8C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089819C8;
L_089819C8:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08981A0C; }
    goto L_089819D0;
L_089819D0:;
    a0 = sp + 0;
    func_0897A7A0(a0);
    goto L_089819D8;
L_089819D8:;
    a0 = sp + 0;
    func_0897A7BC(a0);
    goto L_089819E0;
L_089819E0:;
    v0 = LD32(sp+28);
    ST32(sp+4, s3);
    a0 = s0 + 0;
    v0 = v0 | 0x1;
    ST32(sp+28, v0);
    ST32(sp+8, s3);
    ST32(sp+12, FBITS(f20));
    v0 = LD32(s0);
    v1 = LD32(v0+12);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981A0C;
L_08981A0C:;
    a0 = s0 + 0;
    v0 = func_089D194C(a0);
    goto L_08981A14;
L_08981A14:;
    a0 = LD32(s0);
    v1 = LD32(a0-16);
    v1 = s0 + v1;
    a0 = LD32(v1+4);
    cnd_ = v0 != a0;
    if (cnd_) { goto L_0898190C; }
    goto L_08981A2C;
L_08981A2C:;
    ST32(sp+32, 0);
    a0 = s0 + 0;
    ST32(sp+36, 0);
    ST32(sp+40, 0);
    v0 = LD32(s0);
    v1 = LD32(v0+128);
    t_ = v1;
    a1 = sp + 32;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981A4C;
L_08981A4C:;
    goto L_0898190C;
L_08981A54:;
    a0 = D_08C2B4CC - (-19252);
    goto L_08981A58;
L_08981A58:;
    v0 = 999;
    cnd_ = s1 == v0;
    v1 = a0 - 19252;
    if (cnd_) { goto L_08981AF0; }
    goto L_08981A64;
L_08981A64:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19252);
    v0 = v0 - 1;
    v0 = s1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08981AB4; }
    goto L_08981A88;
L_08981A88:;
    a0 = LD32(a1);
    goto L_08981A8C;
L_08981A8C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s1;
    if (cnd_) { v0 = LD32(v1+16); goto L_08981BE8; }
    goto L_08981AA4;
L_08981AA4:;
    a1 = LD32(a1+4);
    goto L_08981AA8;
L_08981AA8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08981A8C; }
    goto L_08981AB0;
L_08981AB0:;
    s0 = 0 + 0;
    goto L_08981AB4;
L_08981AB4:;
    cnd_ = s0 == 0;
    a1 = D_08C2A08C - (-24436);
    if (cnd_) { goto L_08981AF4; }
    goto L_08981ABC;
L_08981ABC:;
    v0 = LD32(s0);
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_088744F8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981ACC;
L_08981ACC:;
    v1 = LD32(s0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08981BD8; }
    goto L_08981AF0;
L_08981AF0:;
    a1 = D_08C2A08C - (-24436);
    goto L_08981AF4;
L_08981AF4:;
    s0 = a1 - 24436;
    v0 = LD32(s0+4);
    v1 = LD32(s2+4);
    a0 = LD32(a1-24436);
    v0 = v0 - 1;
    v1 = v1 & v0;
    a1 = v1 << 2;
    a0 = a1 + a0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08981B3C; }
    goto L_08981B20;
L_08981B20:;
    v0 = LD32(a0);
    goto L_08981B24;
L_08981B24:;
    cnd_ = v0 == s2;
    if (cnd_) { v0 = LD32(s0+8); goto L_08981B90; }
    goto L_08981B2C;
L_08981B2C:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08981B24; }
    goto L_08981B3C;
L_08981B3C:;
    v0 = LD_U8(s2+128);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s2+88); goto L_08981B80; }
    goto L_08981B48;
L_08981B48:;
    a0 = s2 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08981B50;
L_08981B50:;
    sp = sp + 112;
    return (u64)v0 | ((u64)v1 << 32);
L_08981B80:;
    a1 = LD32(s2+4);
    func_0896FE34(a0, a1);
    goto L_08981B88;
L_08981B88:;
    goto L_08981B48;
L_08981B90:;
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08981BD0; }
    goto L_08981B98;
L_08981B98:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_08981BC0; }
    goto L_08981BA0;
L_08981BA0:;
    v0 = LD32(a0+4);
    ST32(v1+4, v0);
    goto L_08981BA8;
L_08981BA8:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08981BB0;
L_08981BB0:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08981B3C;
L_08981BC0:;
    v1 = LD32(a0+4);
    v0 = a1 + v0;
    ST32(v0, v1);
    goto L_08981BA8;
L_08981BD0:;
    ST8(a0+8, v0);
    goto L_08981B3C;
L_08981BD8:;
    a0 = s2 + 0;
    { rv_t r_ = func_08982530(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981BE0;
L_08981BE0:;
    a1 = D_08C2A08C - (-24436);
    goto L_08981AF4;
L_08981BE8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08981AA4; }
    goto L_08981BF4;
L_08981BF4:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08981AA8; }
    goto L_08981C00;
L_08981C00:;
    goto L_08981AB4;
L_08981C08:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08981954; }
    goto L_08981C14;
L_08981C14:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08981958; }
    goto L_08981C20;
L_08981C20:;
    goto L_08981964;
}

/* 08981C28 */
rv_t func_08981C28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08981C28:;
    sp = sp - 96;
    v0 = D_08AF9D20 - (-25312);
    v0 = v0 - 25312;
    v1 = 999;
    s2 = a0 + 0;
    s1 = LD32(a0+28);
    cnd_ = s1 == v1;
    ST32(a0, v0);
    if (cnd_) { goto L_08981DDC; }
    goto L_08981C6C;
L_08981C6C:;
    v0 = D_08AEE534 - (-6860);
    f20 = BITSF(LD32(v0-6860));
    s3 = D_08C2B2A8 - (-19800);
    s6 = 4;
    s5 = 0x8004;
    s4 = 999;
    goto L_08981C84;
L_08981C84:;
    a0 = s3 - 19800;
    goto L_08981C88;
L_08981C88:;
    a1 = s1 + 0;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08981C94;
L_08981C94:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 999;
    if (cnd_) { goto L_08981D8C; }
    goto L_08981CA4;
L_08981CA4:;
    v1 = LD32(v0);
    s1 = LD32(v0+252);
    v0 = LD32(v1+224);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981CB8;
L_08981CB8:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+172);
    t_ = v0;
    a1 = 999;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981CCC;
L_08981CCC:;
    a0 = s0 + 0;
    { u64 r_ = func_089D4F40(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08981CD4;
L_08981CD4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08981D44; }
    goto L_08981CDC;
L_08981CDC:;
    v0 = LD32(s0);
    ST32(s0+12, s6);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    v0 = LD_U16(v1+8);
    cnd_ = v0 == s5;
    a0 = s0 + 0;
    if (cnd_) { goto L_08981D08; }
    goto L_08981CF8;
L_08981CF8:;
    { u64 r_ = func_089D0A8C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08981D00;
L_08981D00:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08981D44; }
    goto L_08981D08;
L_08981D08:;
    a0 = sp + 0;
    func_0897A7A0(a0);
    goto L_08981D10;
L_08981D10:;
    a0 = sp + 0;
    func_0897A7BC(a0);
    goto L_08981D18;
L_08981D18:;
    v0 = LD32(sp+28);
    ST32(sp+4, s4);
    a1 = sp + 0;
    v0 = v0 | 0x1;
    ST32(sp+28, v0);
    ST32(sp+8, s4);
    ST32(sp+12, FBITS(f20));
    v0 = LD32(s0);
    v1 = LD32(v0+12);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981D44;
L_08981D44:;
    a0 = s0 + 0;
    v0 = func_089D194C(a0);
    goto L_08981D4C;
L_08981D4C:;
    a2 = LD32(s0);
    a0 = s0 + 0;
    v1 = LD32(a2-16);
    v1 = s0 + v1;
    a2 = LD32(v1+4);
    cnd_ = v0 != a2;
    a1 = sp + 32;
    if (cnd_) { goto L_08981C84; }
    goto L_08981D68;
L_08981D68:;
    ST32(sp+32, 0);
    ST32(sp+36, 0);
    ST32(sp+40, 0);
    v0 = LD32(s0);
    v1 = LD32(v0+128);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981D84;
L_08981D84:;
    a0 = s3 - 19800;
    goto L_08981C88;
L_08981D8C:;
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    a1 = s1 + 0;
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08981DA0;
L_08981DA0:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08981DDC; }
    goto L_08981DA8;
L_08981DA8:;
    v0 = LD32(v0);
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981DB8;
L_08981DB8:;
    v1 = LD32(s0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08981E3C; }
    goto L_08981DDC;
L_08981DDC:;
    a0 = D_08C2A08C - (-24436);
    goto L_08981DE0;
L_08981DE0:;
    a0 = a0 - 24436;
    a1 = s2 + 0;
    func_08AC1658(a0, a1, t1, t2, t3);
    goto L_08981DEC;
L_08981DEC:;
    v1 = LD_U8(s2+128);
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(s2+88); goto L_08981E2C; }
    goto L_08981DF8;
L_08981DF8:;
    a0 = s2 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08981E00;
L_08981E00:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_08981E2C:;
    a1 = LD32(s2+4);
    func_0896FE34(a0, a1);
    goto L_08981E34;
L_08981E34:;
    goto L_08981DF8;
L_08981E3C:;
    a0 = s2 + 0;
    { rv_t r_ = func_08982530(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981E44;
L_08981E44:;
    a0 = D_08C2A08C - (-24436);
    goto L_08981DE0;
}

/* 08981E4C */
rv_t func_08981E4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08981E4C:;
    sp = sp - 96;
    v0 = D_08AF9D20 - (-25312);
    v0 = v0 - 25312;
    v1 = 999;
    s2 = a0 + 0;
    s1 = LD32(a0+28);
    cnd_ = s1 == v1;
    ST32(a0, v0);
    if (cnd_) { goto L_08982000; }
    goto L_08981E90;
L_08981E90:;
    v0 = D_08AEE538 - (-6856);
    f20 = BITSF(LD32(v0-6856));
    s3 = D_08C2B2A8 - (-19800);
    s6 = 4;
    s5 = 0x8004;
    s4 = 999;
    goto L_08981EA8;
L_08981EA8:;
    a0 = s3 - 19800;
    goto L_08981EAC;
L_08981EAC:;
    a1 = s1 + 0;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08981EB8;
L_08981EB8:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 999;
    if (cnd_) { goto L_08981FB0; }
    goto L_08981EC8;
L_08981EC8:;
    v1 = LD32(v0);
    s1 = LD32(v0+252);
    v0 = LD32(v1+224);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981EDC;
L_08981EDC:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+172);
    t_ = v0;
    a1 = 999;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981EF0;
L_08981EF0:;
    a0 = s0 + 0;
    { u64 r_ = func_089D4F40(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08981EF8;
L_08981EF8:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08981F68; }
    goto L_08981F00;
L_08981F00:;
    v0 = LD32(s0);
    ST32(s0+12, s6);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    v0 = LD_U16(v1+8);
    cnd_ = v0 == s5;
    a0 = s0 + 0;
    if (cnd_) { goto L_08981F2C; }
    goto L_08981F1C;
L_08981F1C:;
    { u64 r_ = func_089D0A8C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08981F24;
L_08981F24:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08981F68; }
    goto L_08981F2C;
L_08981F2C:;
    a0 = sp + 0;
    func_0897A7A0(a0);
    goto L_08981F34;
L_08981F34:;
    a0 = sp + 0;
    func_0897A7BC(a0);
    goto L_08981F3C;
L_08981F3C:;
    v0 = LD32(sp+28);
    ST32(sp+4, s4);
    a1 = sp + 0;
    v0 = v0 | 0x1;
    ST32(sp+28, v0);
    ST32(sp+8, s4);
    ST32(sp+12, FBITS(f20));
    v0 = LD32(s0);
    v1 = LD32(v0+12);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981F68;
L_08981F68:;
    a0 = s0 + 0;
    v0 = func_089D194C(a0);
    goto L_08981F70;
L_08981F70:;
    a2 = LD32(s0);
    a0 = s0 + 0;
    v1 = LD32(a2-16);
    v1 = s0 + v1;
    a2 = LD32(v1+4);
    cnd_ = v0 != a2;
    a1 = sp + 32;
    if (cnd_) { goto L_08981EA8; }
    goto L_08981F8C;
L_08981F8C:;
    ST32(sp+32, 0);
    ST32(sp+36, 0);
    ST32(sp+40, 0);
    v0 = LD32(s0);
    v1 = LD32(v0+128);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981FA8;
L_08981FA8:;
    a0 = s3 - 19800;
    goto L_08981EAC;
L_08981FB0:;
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    a1 = s1 + 0;
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08981FC4;
L_08981FC4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08982000; }
    goto L_08981FCC;
L_08981FCC:;
    v0 = LD32(v0);
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08981FDC;
L_08981FDC:;
    v1 = LD32(s0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08982068; }
    goto L_08982000;
L_08982000:;
    a0 = D_08C2A08C - (-24436);
    goto L_08982004;
L_08982004:;
    a0 = a0 - 24436;
    a1 = s2 + 0;
    func_08AC1658(a0, a1, t1, t2, t3);
    goto L_08982010;
L_08982010:;
    v1 = LD_U8(s2+128);
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(s2+88); goto L_08982058; }
    goto L_0898201C;
L_0898201C:;
    a0 = s2 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08982024;
L_08982024:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898202C;
L_0898202C:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_08982058:;
    a1 = LD32(s2+4);
    func_0896FE34(a0, a1);
    goto L_08982060;
L_08982060:;
    goto L_0898201C;
L_08982068:;
    a0 = s2 + 0;
    { rv_t r_ = func_08982530(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08982070;
L_08982070:;
    a0 = D_08C2A08C - (-24436);
    goto L_08982004;
}

/* 08982078 */
rv_t func_08982078(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08982078:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08873E44(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898208C;
L_0898208C:;
    v0 = LD32(s0+96);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089820AC; }
    goto L_0898209C;
L_0898209C:;
    goto L_089820A0;
L_089820A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089820AC:;
    { rv_t r_ = func_08982DA4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089820B4;
L_089820B4:;
    goto L_089820A0;
}

/* 089820BC */
rv_t func_089820BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089820BC:;
    sp = sp - 64;
    v0 = 0 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08982124; }
    goto L_089820E8;
L_089820E8:;
    v1 = LD_U16(a1+16);
    v0 = 0x8012;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = 0x801f;
    if (cnd_) { goto L_089822DC; }
    goto L_089820FC;
L_089820FC:;
    v0 = 0x8011;
    v0 = (s32)v1 < (s32)v0;
    cnd_ = v0 == 0;
    a2 = D_08C2A508 - (-23288);
    if (cnd_) { goto L_08982164; }
    goto L_0898210C;
L_0898210C:;
    v0 = 0x8000;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(a1+24); goto L_08982144; }
    goto L_08982118;
L_08982118:;
    a0 = s1 + 0;
    goto L_0898211C;
L_0898211C:;
    a1 = s0 + 0;
    { rv_t r_ = func_08874198(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08982124;
L_08982124:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08982144:;
    cnd_ = a1 == 0;
    if (cnd_) { v0 = 1; goto L_08982124; }
    goto L_0898214C;
L_0898214C:;
    v0 = LD32(a0);
    v1 = LD32(v0+88);
    t_ = v1;
    a1 = LD32(a1);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898215C;
L_0898215C:;
    v0 = 1;
    goto L_08982124;
L_08982164:;
    v0 = a2 - 23288;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_089821D8; }
    goto L_0898218C;
L_0898218C:;
    a2 = LD32(a2-23288);
    a3 = a1 + 0;
    goto L_08982194;
L_08982194:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089821C8; }
    goto L_089821AC;
L_089821AC:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089821DC; }
    goto L_089821BC;
L_089821BC:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089821AC; }
    goto L_089821C8;
L_089821C8:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08982194; }
    goto L_089821D8;
L_089821D8:;
    v0 = LD32(sp+8);
    goto L_089821DC;
L_089821DC:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(sp); goto L_08982238; }
    goto L_089821E4;
L_089821E4:;
    s2 = 0x8011;
    v0 = LD32(v0);
    goto L_089821EC;
L_089821EC:;
    a3 = 12;
    a1 = sp + 16;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0898221C; }
    goto L_089821FC;
L_089821FC:;
    v0 = LD_U16(s0+16);
    a2 = LD32(s1+28);
    v1 = 13;
    v0 = v0 ^ s2;
    if (v0 != 0) a3 = v1;
    ST32(sp+16, a3);
    ST32(sp+20, a2);
    { rv_t r_ = func_0898EDBC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898221C;
L_0898221C:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08AC1700(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08982228;
L_08982228:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v0); goto L_089821EC; }
    goto L_08982234;
L_08982234:;
    s1 = LD32(sp);
    goto L_08982238;
L_08982238:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0898215C; }
    goto L_08982248;
L_08982248:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0898215C; }
    goto L_08982254;
L_08982254:;
    v0 = LD32(s1);
    goto L_08982258;
L_08982258:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089822AC; }
    goto L_0898226C;
L_0898226C:;
    v0 = LD_U8(s0+8);
    goto L_08982270;
L_08982270:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089822D4; }
    goto L_08982278;
L_08982278:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089822C4; }
    goto L_08982280;
L_08982280:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08982288;
L_08982288:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08982294;
L_08982294:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089822A0;
L_089822A0:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08982270; }
    goto L_089822A8;
L_089822A8:;
    v1 = LD32(s1+4);
    goto L_089822AC;
L_089822AC:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08982258; }
    goto L_089822BC;
L_089822BC:;
    v0 = 1;
    goto L_08982124;
L_089822C4:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08982288;
L_089822D4:;
    s0 = LD32(s0+4);
    goto L_089822A0;
L_089822DC:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = s1 + 0; goto L_0898211C; }
    goto L_089822E4;
L_089822E4:;
    a2 = LD32(a0+28);
    v0 = 999;
    a0 = D_08C2AFB8 - (-20552);
    cnd_ = a2 == v0;
    v1 = a0 - 20552;
    if (cnd_) { goto L_0898215C; }
    goto L_089822F8;
L_089822F8:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-20552);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08982348; }
    goto L_0898231C;
L_0898231C:;
    a0 = LD32(a1);
    goto L_08982320;
L_08982320:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08982368; }
    goto L_08982338;
L_08982338:;
    a1 = LD32(a1+4);
    goto L_0898233C;
L_0898233C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08982320; }
    goto L_08982344;
L_08982344:;
    a0 = 0 + 0;
    goto L_08982348;
L_08982348:;
    cnd_ = a0 == 0;
    if (cnd_) { v0 = 1; goto L_08982124; }
    goto L_08982350;
L_08982350:;
    v1 = LD32(a0);
    v0 = LD32(v1+4);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08982360;
L_08982360:;
    v0 = 1;
    goto L_08982124;
L_08982368:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0898233C; }
    goto L_08982374;
L_08982374:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0898233C; }
    goto L_08982380;
L_08982380:;
    goto L_08982348;
}

/* 08982388 */
rv_t func_08982388(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08982388:;
    sp = sp - 16;
    a3 = a0 + 28;
    s0 = a0 + 0;
    a1 = 76;
    a2 = LD_U16(a0+8);
    a0 = 90;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089823AC;
L_089823AC:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a2 = 2;
    if (cnd_) { goto L_089823C4; }
    goto L_089823BC;
L_089823BC:;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089823C4;
L_089823C4:;
    ST8(s0+32, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089823D8 */
u32 func_089823D8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089823D8:;
    sp = sp - 16;
    a2 = 1;
    a1 = LD32(a0+28);
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089823F4;
L_089823F4:;
    v1 = v0 + 0;
    v0 = D_08B45A9C - (23196);
    cnd_ = v1 == 0;
    v0 = v0 + 23196;
    if (cnd_) { goto L_08982420; }
    goto L_08982404;
L_08982404:;
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08982420;
L_08982420:;
    sp = sp + 16;
    return v0;
}

/* 0898242C */
u32 func_0898242C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898242C:;
    sp = sp - 16;
    a2 = 1;
    a1 = LD32(a0+28);
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08982448;
L_08982448:;
    v1 = v0 + 0;
    v0 = D_08B45AA8 - (23208);
    cnd_ = v1 == 0;
    v0 = v0 + 23208;
    if (cnd_) { goto L_08982474; }
    goto L_08982458;
L_08982458:;
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08982474;
L_08982474:;
    sp = sp + 16;
    return v0;
}

/* 08982480 */
void func_08982480(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08982480:;
    a3 = a0 + 0;
    a2 = 0 + 0;
    goto L_08982488;
L_08982488:;
    v1 = a2 << 2;
    v0 = v1 + a1;
    a0 = LD32(v0);
    a2 = a2 + 1;
    v1 = v1 + a3;
    v0 = a2 < 0x5u;
    cnd_ = v0 != 0;
    ST32(v1+148, a0);
    if (cnd_) { goto L_08982488; }
    goto L_089824A8;
L_089824A8:;
    return;
}

/* 089824B0 */
u64 func_089824B0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_089824B0:;
    a0 = a0 + 148;
    a2 = 0 + 0;
    v0 = LD32(a0);
    goto L_089824BC;
L_089824BC:;
    a2 = a2 + 1;
    v1 = a2 < 0x5u;
    a0 = a0 + 4;
    cnd_ = v0 == a1;
    a3 = 1;
    if (cnd_) { goto L_089824DC; }
    goto L_089824D0;
L_089824D0:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_089824BC; }
    goto L_089824D8;
L_089824D8:;
    a3 = 0 + 0;
    goto L_089824DC;
L_089824DC:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089824E4 */
rv_t func_089824E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089824E4:;
    sp = sp - 16;
    t0 = a1 + 0;
    a1 = D_08ADDD64 - (-8860);
    a1 = a1 - 8860;
    s1 = a0 + 0;
    a0 = a0 + 46;
    s0 = a2 & 0xff;
    a3 = 1;
    a2 = 21;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08982518;
L_08982518:;
    ST8(s1+128, s0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08982530 */
rv_t func_08982530(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08982530:;
    sp = sp - 16;
    v0 = LD32(a0+112);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089825BC; }
    goto L_08982548;
L_08982548:;
    a2 = LD32(a0+28);
    v0 = 999;
    a0 = D_08C2A880 - (-22400);
    cnd_ = a2 == v0;
    v1 = a0 - 22400;
    if (cnd_) { goto L_089825BC; }
    goto L_0898255C;
L_0898255C:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22400);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089825AC; }
    goto L_08982580;
L_08982580:;
    a0 = LD32(a1);
    goto L_08982584;
L_08982584:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08982614; }
    goto L_0898259C;
L_0898259C:;
    a1 = LD32(a1+4);
    goto L_089825A0;
L_089825A0:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08982584; }
    goto L_089825A8;
L_089825A8:;
    v1 = 0 + 0;
    goto L_089825AC;
L_089825AC:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089825BC; }
    goto L_089825B4;
L_089825B4:;
    v0 = LD32(v1+316);
    ST32(s0+112, v0);
    goto L_089825BC;
L_089825BC:;
    a0 = LD32(s0+88);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089825C4;
L_089825C4:;
    v1 = v0 + 0;
    v0 = (s32)v0 < 2;
    cnd_ = v0 != 0;
    v0 = D_08C2A09C - (-24420);
    if (cnd_) { goto L_089825F0; }
    goto L_089825D4;
L_089825D4:;
    v0 = LD32(s0+96);
    goto L_089825D8;
L_089825D8:;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s0+96, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089825F0:;
    v0 = v0 - 24420;
    v1 = v1 << 2;
    v1 = v1 + v0;
    v0 = LD32(v1);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+96); goto L_089825D8; }
    goto L_08982608;
L_08982608:;
    v0 = v0 - 1;
    ST32(v1, v0);
    goto L_089825D4;
L_08982614:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0898259C; }
    goto L_08982620;
L_08982620:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089825A0; }
    goto L_0898262C;
L_0898262C:;
    goto L_089825AC;
}

/* 08982634 */
rv_t func_08982634(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08982634:;
    sp = sp - 16;
    s1 = a1 & 0xff;
    s0 = a0 + 0;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_089826C8; }
    goto L_08982650;
L_08982650:;
    v0 = LD32(a0+96);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = D_08C29328 - (-27864);
    if (cnd_) { goto L_089826C0; }
    goto L_08982660;
L_08982660:;
    v1 = LD32(v0-27864);
    a0 = D_08C2B4CC - (-19252);
    v0 = 3;
    a0 = a0 - 19252;
    cnd_ = v1 == v0;
    a2 = 1;
    if (cnd_) { goto L_089826C0; }
    goto L_08982678;
L_08982678:;
    a1 = LD32(s0+28);
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08982680;
L_08982680:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089826C0; }
    goto L_08982688;
L_08982688:;
    v0 = LD32(v0);
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+168));
    a0 = LD32(v0-12);
    f0 = f2 * f0;
    a0 = v1 + a0;
    f1 = BITSF(LD32(a0+40));
    f12 = f1 + f0;
    fcc = FCMP(f12, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { f12 = f2; goto L_089826B8; }
    goto L_089826B8;
L_089826B8:;
    func_0886422C(a0, f12);
    goto L_089826C0;
L_089826C0:;
    cnd_ = s1 == 0;
    a1 = 1;
    if (cnd_) { goto L_089826CC; }
    goto L_089826C8;
L_089826C8:;
    a1 = (u32)-1;
    goto L_089826CC;
L_089826CC:;
    a0 = s0 + 0;
    { rv_t r_ = func_08982EF0(a0, a1, a3, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089826D4;
L_089826D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089826E8 */
u32 func_089826E8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f12 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_089826E8:;
    sp = sp - 128;
    s4 = a0 + 0;
    a0 = 999;
    { rv_t r_ = func_089A76EC(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08982724;
L_08982724:;
    s2 = v0 + 0;
    cnd_ = s2 == 0;
    v0 = 999;
    if (cnd_) { goto L_08982AF8; }
    goto L_08982730;
L_08982730:;
    s3 = D_08C2AA98 - (-21864);
    { u64 r_ = func_08988228(0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08982738;
L_08982738:;
    a0 = LD32(s4+88);
    s0 = v0 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08982744;
L_08982744:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_089881E4(a0, a1);
    goto L_08982750;
L_08982750:;
    ST32(s2+316, 0);
    a0 = s2 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_089A82E0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08982760;
L_08982760:;
    v1 = LD32(s2);
    a1 = s0 + 0;
    a2 = 0 + 0;
    v0 = LD32(v1+228);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08982778;
L_08982778:;
    a0 = s2 + 0;
    { rv_t r_ = func_089E3DDC(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08982780;
L_08982780:;
    a0 = 0x203e0000u;
    a2 = sp + 64;
    a0 = a0 | 0x217d;
    a1 = s0 + 0;
    ST32(sp+64, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08982798;
L_08982798:;
    v1 = D_08AEE53C - (-6852);
    f20 = BITSF(LD32(v1-6852));
    a0 = LD32(sp+64);
    a1 = 0xb7350000u;
    f12 = f20;
    a1 = a1 | 0x25c;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089827B4;
L_089827B4:;
    a0 = LD32(sp+64);
    a1 = 0x8ee80000u;
    f12 = f20;
    a1 = a1 | 0xd26f;
    f21 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089827CC;
L_089827CC:;
    v0 = D_08AEE540 - (-6848);
    f20 = BITSF(LD32(v0-6848));
    a0 = LD32(sp+64);
    a1 = 0x90420000u;
    f12 = f20;
    a1 = a1 | 0xdb52;
    f23 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089827EC;
L_089827EC:;
    a0 = LD32(sp+64);
    a1 = 0x89580000u;
    f12 = f20;
    a1 = a1 | 0x1e0e;
    f22 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08982804;
L_08982804:;
    v0 = LD32(s2);
    ST32(s2+8, FBITS(f21));
    f20 = f0;
    f12 = f21;
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    func_0886422C(a0, f12);
    goto L_08982820;
L_08982820:;
    ST32(s2+104, FBITS(f23));
    a2 = s0 + 0;
    a0 = s4 + 0;
    ST32(s2+312, FBITS(f20));
    a1 = sp + 0;
    ST32(s2+308, FBITS(f22));
    func_08982CF4(a1, a2);
    goto L_0898283C;
L_0898283C:;
    a1 = sp + 0;
    a0 = s2 + 0;
    func_089E4770(a0, a1);
    goto L_08982848;
L_08982848:;
    v0 = LD32(s4+96);
    a1 = LD32(s4+28);
    v1 = s3 - 21864;
    v0 = v0 | 0x1;
    ST32(s4+96, v0);
    v0 = 999;
    cnd_ = a1 == v0;
    a3 = a1 + 0;
    if (cnd_) { goto L_089828D4; }
    goto L_08982868;
L_08982868:;
    v0 = LD32(v1+4);
    v1 = LD32(s3-21864);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089828B8; }
    goto L_0898288C;
L_0898288C:;
    a0 = LD32(a2);
    goto L_08982890;
L_08982890:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_08982CD4; }
    goto L_089828A8;
L_089828A8:;
    a2 = LD32(a2+4);
    goto L_089828AC;
L_089828AC:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_08982890; }
    goto L_089828B4;
L_089828B4:;
    s1 = 0 + 0;
    goto L_089828B8;
L_089828B8:;
    cnd_ = s1 == 0;
    a0 = D_08C2ADE8 - (-21016);
    if (cnd_) { goto L_089828D8; }
    goto L_089828C0;
L_089828C0:;
    a0 = s1 + 0;
    { u64 r_ = func_089D0A8C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089828C8;
L_089828C8:;
    cnd_ = v0 == 0;
    s0 = sp + 32;
    if (cnd_) { goto L_08982C90; }
    goto L_089828D0;
L_089828D0:;
    a1 = LD32(s4+28);
    goto L_089828D4;
L_089828D4:;
    a0 = D_08C2ADE8 - (-21016);
    goto L_089828D8;
L_089828D8:;
    v0 = 999;
    cnd_ = a1 == v0;
    v1 = a0 - 21016;
    if (cnd_) { goto L_08982948; }
    goto L_089828E4;
L_089828E4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-21016);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08982934; }
    goto L_08982908;
L_08982908:;
    a0 = LD32(a2);
    goto L_0898290C;
L_0898290C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_08982C70; }
    goto L_08982924;
L_08982924:;
    a2 = LD32(a2+4);
    goto L_08982928;
L_08982928:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_0898290C; }
    goto L_08982930;
L_08982930:;
    s0 = 0 + 0;
    goto L_08982934;
L_08982934:;
    cnd_ = s0 == 0;
    v0 = D_08C29324 - (-27868);
    if (cnd_) { goto L_08982948; }
    goto L_0898293C;
L_0898293C:;
    v1 = LD_U8(v0-27868);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08982C14; }
    goto L_08982948;
L_08982948:;
    a0 = D_08C2B2A8 - (-19800);
    a0 = a0 - 19800;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08982958;
L_08982958:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08982BD4; }
    goto L_08982960;
L_08982960:;
    a1 = LD32(v0+252);
    a0 = D_08C2A880 - (-22400);
    a0 = a0 - 22400;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08982974;
L_08982974:;
    a0 = s1 + 0;
    s3 = v0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08982980;
L_08982980:;
    a0 = LD32(s1);
    v0 = v0 ^ 0x1;
    s5 = v0 & 0xff;
    v1 = LD32(a0-16);
    v0 = 0x8004;
    v1 = s1 + v1;
    a0 = LD_U16(v1+8);
    cnd_ = a0 == v0;
    s0 = s3 + 0;
    if (cnd_) { goto L_08982BA4; }
    goto L_089829A4;
L_089829A4:;
    cnd_ = s0 == 0;
    v0 = 999;
    if (cnd_) { goto L_08982AF8; }
    goto L_089829AC;
L_089829AC:;
    v1 = LD32(s0);
    a0 = s1 + 0;
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    a1 = LD32(v0+4);
    { rv_t r_ = func_089D1F3C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089829C4;
L_089829C4:;
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v1 = 0x8004;
    v0 = s1 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    if (cnd_) { v0 = LD32(s1+232); goto L_08982B78; }
    goto L_089829E0;
L_089829E0:;
    cnd_ = s3 == 0;
    v0 = 999;
    if (cnd_) { goto L_08982AF8; }
    goto L_089829E8;
L_089829E8:;
    v0 = LD32(s3);
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08982A04;
L_08982A04:;
    s0 = v0 + 0;
    v0 = LD32(s3);
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08982A24;
L_08982A24:;
    v1 = LD32(s2);
    a2 = v0 + 0;
    a1 = s0 + 0;
    v0 = LD32(v1+16);
    a0 = s2 + 0;
    t_ = v0;
    a3 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08982A40;
L_08982A40:;
    cnd_ = s5 != 0;
    v1 = LD32(s2);
    if (cnd_) { goto L_08982B50; }
    goto L_08982A48;
L_08982A48:;
    a1 = LD32(s4);
    a0 = s4 + 0;
    v0 = LD32(v1-16);
    a2 = LD32(a1+88);
    v0 = s2 + v0;
    t_ = a2;
    a1 = LD32(v0+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08982A64;
L_08982A64:;
    cnd_ = s1 == 0;
    if (cnd_) { v0 = LD32(s3); goto L_08982ADC; }
    goto L_08982A6C;
L_08982A6C:;
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v1 = 0x8004;
    v0 = s1 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    v0 = D_08C29324 - (-27868);
    if (cnd_) { goto L_08982B2C; }
    goto L_08982A88;
L_08982A88:;
    a0 = s1 + 0;
    { u64 r_ = func_089D0A8C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08982A90;
L_08982A90:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s3); goto L_08982ADC; }
    goto L_08982A98;
L_08982A98:;
    s0 = sp + 32;
    goto L_08982A9C;
L_08982A9C:;
    a0 = s0 + 0;
    func_0897A7A0(a0);
    goto L_08982AA4;
L_08982AA4:;
    v0 = LD32(sp+60);
    a0 = s1 + 0;
    v0 = v0 | 0x1;
    ST32(sp+60, v0);
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    f0 = BITSF(LD32(v0+40));
    ST32(sp+44, FBITS(f0));
    v0 = LD32(s1);
    v1 = LD32(v0+8);
    t_ = v1;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08982AD8;
L_08982AD8:;
    v0 = LD32(s3);
    goto L_08982ADC;
L_08982ADC:;
    a0 = LD32(v0-16);
    a0 = s3 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08982AE8;
L_08982AE8:;
    v1 = LD32(s2);
    v0 = LD32(v1-16);
    v0 = s2 + v0;
    goto L_08982AF4;
L_08982AF4:;
    v0 = LD32(v0+4);
    goto L_08982AF8;
L_08982AF8:;
    sp = sp + 128;
    return v0;
L_08982B2C:;
    v1 = LD_U8(v0-27868);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08982A88; }
    goto L_08982B38;
L_08982B38:;
    v0 = LD32(s1+232);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 == 0;
    s0 = sp + 32;
    if (cnd_) { goto L_08982A9C; }
    goto L_08982B48;
L_08982B48:;
    goto L_08982A88;
L_08982B50:;
    v0 = LD32(v1+112);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08982B5C;
L_08982B5C:;
    a0 = s2 + 0;
    a1 = 1;
    { rv_t r_ = func_089E3C58(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08982B68;
L_08982B68:;
    v1 = LD32(s2);
    goto L_08982A48;
L_08982B70:;
    v0 = 999;
    goto L_08982AF8;
L_08982B78:;
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089829E0; }
    goto L_08982B84;
L_08982B84:;
    a0 = s1 + 0;
    { u64 r_ = func_089D0A8C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08982B8C;
L_08982B8C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089829E0; }
    goto L_08982B94;
L_08982B94:;
    a0 = s0 + 0;
    func_089A7570(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08982B9C;
L_08982B9C:;
    goto L_089829E0;
L_08982BA4:;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089829A4; }
    goto L_08982BB4;
L_08982BB4:;
    a1 = s2 + 0;
    v0 = func_089B16EC(a0, a1, 0, 0, 0);
    goto L_08982BBC;
L_08982BBC:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089829E0; }
    goto L_08982BC4;
L_08982BC4:;
    v1 = LD32(v0);
    v0 = LD32(v1-16);
    v0 = a0 + v0;
    goto L_08982AF4;
L_08982BD4:;
    a1 = LD32(s4+28);
    a0 = D_08C2A880 - (-22400);
    a0 = a0 - 22400;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08982BE8;
L_08982BE8:;
    s3 = v0 + 0;
    cnd_ = v0 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_08982B70; }
    goto L_08982BF4;
L_08982BF4:;
    a0 = v0 + 0;
    v0 = func_089E3BC4(a0);
    goto L_08982BFC;
L_08982BFC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089829E0; }
    goto L_08982C04;
L_08982C04:;
    a0 = s3 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08982C0C;
L_08982C0C:;
    s5 = v0 < 0x1u;
    goto L_089829E0;
L_08982C14:;
    a0 = s0 + 0;
    v0 = func_089D194C(a0);
    goto L_08982C1C;
L_08982C1C:;
    a0 = LD32(s0);
    v1 = LD32(a0-16);
    v1 = s0 + v1;
    a0 = LD32(v1+4);
    cnd_ = v0 == a0;
    if (cnd_) { a1 = LD32(s4+28); goto L_08982948; }
    goto L_08982C34;
L_08982C34:;
    a0 = s0 + 0;
    v0 = func_089D194C(a0);
    goto L_08982C3C;
L_08982C3C:;
    a1 = v0 + 0;
    a0 = s3 - 21864;
    a2 = 1;
    v0 = func_08ABE694(a0, a1, a2);
    goto L_08982C4C;
L_08982C4C:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08982C68; }
    goto L_08982C54;
L_08982C54:;
    v0 = LD32(s0);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    a1 = LD32(v1+4);
    func_089B1518(a0, a1);
    goto L_08982C68;
L_08982C68:;
    a1 = LD32(s4+28);
    goto L_08982948;
L_08982C70:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08982924; }
    goto L_08982C7C;
L_08982C7C:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08982928; }
    goto L_08982C88;
L_08982C88:;
    goto L_08982934;
L_08982C90:;
    a0 = s0 + 0;
    func_0897A7A0(a0);
    goto L_08982C98;
L_08982C98:;
    v0 = LD32(sp+60);
    a0 = s1 + 0;
    v0 = v0 | 0x1;
    ST32(sp+60, v0);
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    f0 = BITSF(LD32(v0+40));
    ST32(sp+44, FBITS(f0));
    v0 = LD32(s1);
    v1 = LD32(v0+12);
    t_ = v1;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08982CCC;
L_08982CCC:;
    a1 = LD32(s4+28);
    goto L_089828D4;
L_08982CD4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089828A8; }
    goto L_08982CE0;
L_08982CE0:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_089828AC; }
    goto L_08982CEC;
L_08982CEC:;
    goto L_089828B8;
}

/* 08982CF4 */
void func_08982CF4(u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08982CF4:;
    sp = sp - 48;
    a0 = a1 + 0;
    s3 = a1 + 0;
    a1 = 0 + 0;
    s0 = a2 + 0;
    a2 = 20;
    s1 = 0 + 0;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08982D28;
L_08982D28:;
    a0 = 0x203e0000u;
    a1 = s0 + 0;
    a0 = a0 | 0x217d;
    a2 = sp + 0;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08982D40;
L_08982D40:;
    v1 = D_08ADDD6C - (-8852);
    v0 = LD32(v1-8852);
    cnd_ = v0 == 0;
    s2 = v1 - 8852;
    if (cnd_) { goto L_08982D88; }
    goto L_08982D50;
L_08982D50:;
    s0 = 0 + 0;
    goto L_08982D54;
L_08982D54:;
    v0 = s0 + s2;
    a1 = LD32(v0);
    a0 = LD32(sp);
    a2 = 0 + 0;
    s1 = s1 + 1;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08982D6C;
L_08982D6C:;
    a0 = s1 << 2;
    v1 = a0 + s2;
    a1 = s0 + s3;
    s0 = a0 + 0;
    a0 = LD32(v1);
    cnd_ = a0 != 0;
    ST32(a1, v0);
    if (cnd_) { goto L_08982D54; }
    goto L_08982D88;
L_08982D88:;
    sp = sp + 48;
    return;
}

/* 08982DA4 */
rv_t func_08982DA4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08982DA4:;
    sp = sp - 64;
    v0 = D_08C29328 - (-27864);
    v1 = LD32(v0-27864);
    v0 = 3;
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08982DE4; }
    goto L_08982DD4;
L_08982DD4:;
    { u64 r_ = func_089E47D0(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08982DDC;
L_08982DDC:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_08982E04; }
    goto L_08982DE4;
L_08982DE4:;
    goto L_08982DE8;
L_08982DE8:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08982E04:;
    v0 = LD32(v1+96);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08982E10;
L_08982E10:;
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    cnd_ = v0 != 0;
    a2 = 1;
    if (cnd_) { goto L_08982DE4; }
    goto L_08982E20;
L_08982E20:;
    a1 = LD32(s0+28);
    v0 = D_08B285A0 - (-31328);
    f20 = BITSF(LD32(v0-31328));
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08982E30;
L_08982E30:;
    f21 = BITSF(0);
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08982DE4; }
    goto L_08982E3C;
L_08982E3C:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0+164));
    v0 = LD32(v0);
    f0 = f0 * f1;
    a0 = LD32(v0-12);
    f22 = f0 * f20;
    a0 = s1 + a0;
    f0 = BITSF(LD32(a0+40));
    f20 = f0 - f22;
    fcc = FCMP(f21, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { f20 = f21; goto L_08982E70; }
    goto L_08982E70;
L_08982E70:;
    f12 = f20;
    func_0886422C(a0, f12);
    goto L_08982E78;
L_08982E78:;
    fcc = FCMP(f20, f21, 14);
    cnd_ = !fcc;
    a0 = sp + 0;
    if (cnd_) { goto L_08982DE4; }
    goto L_08982E88;
L_08982E88:;
    func_0897A7A0(a0);
    goto L_08982E90;
L_08982E90:;
    v1 = (u32)-1;
    ST32(sp+20, v1);
    a1 = sp + 0;
    a0 = LD32(s0+4);
    v0 = LD32(s0+28);
    ST32(sp+12, FBITS(f22));
    ST32(sp+16, v1);
    ST32(sp+8, a0);
    ST32(sp+4, v0);
    v0 = LD32(s1);
    v1 = LD32(v0+12);
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08982EC4;
L_08982EC4:;
    goto L_08982DE8;
}

/* 08982ECC */
rv_t func_08982ECC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08982ECC:;
    v0 = (u32)(s32)LD_S16(a0+44);
    a1 = (u32)(s32)(s16)a1;
    v1 = 999;
    v0 = v0 + a1;
    v0 = (s32)v0 < (s32)v1 ? v0 : v1;
    a1 = (u32)-99;
    v0 = (s32)v0 > (s32)a1 ? v0 : a1;
    ST16(a0+44, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08982EF0 */
rv_t func_08982EF0(u32 a0, u32 a1, u32 a3, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08982EF0:;
    sp = sp - 16;
    a1 = (u32)(s32)(s16)a1;
    v1 = 999;
    v0 = (u32)(s32)LD_S16(a0+40);
    t0 = LD32(a0);
    a2 = (u32)-99;
    v0 = v0 + a1;
    v0 = (s32)v0 < (s32)v1 ? v0 : v1;
    v0 = (s32)v0 > (s32)a2 ? v0 : a2;
    ST16(a0+40, v0);
    v0 = LD32(t0+80);
    t_ = v0;
    a1 = (u32)(s32)(s16)a1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08982F28;
L_08982F28:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08982F34 */
void func_08982F34(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_08982F34:;
    v0 = (u32)(s32)LD_S16(a0+42);
    a1 = (u32)(s32)(s16)a1;
    v1 = 999;
    v0 = v0 + a1;
    v0 = (s32)v0 < (s32)v1 ? v0 : v1;
    a1 = (u32)-99;
    v0 = (s32)v0 > (s32)a1 ? v0 : a1;
    ST16(a0+42, v0);
    return;
}

/* 08982F58 */
float func_08982F58(u32 a0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08982F58:;
    sp = sp - 64;
    t0 = D_08C2A08C - (-24436);
    a2 = t0 - 24436;
    v0 = D_08B1BB5C - (-17572);
    s7 = 0 + 0;
    s6 = 2;
    fp = 0 + 0;
    s5 = 3;
    s4 = 0 + 0;
    s3 = 0 + 0;
    s1 = a0 + 0;
    a0 = sp + 0;
    v1 = LD32(a2+8);
    a1 = LD32(v0-17572);
    a3 = LD32(a2+4);
    v1 = v1 + 1;
    a1 = a1 ^ 0x1;
    v0 = 1;
    ST32(a2+8, v1);
    if (a1 != 0) s5 = v0;
    if (a1 != 0) s6 = 0;
    ST32(sp, a2);
    ST32(sp+4, 0);
    cnd_ = a3 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_0898302C; }
    goto L_08982FE4;
L_08982FE4:;
    a2 = LD32(t0-24436);
    goto L_08982FE8;
L_08982FE8:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0898301C; }
    goto L_08983000;
L_08983000:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_08983030; }
    goto L_08983010;
L_08983010:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08983000; }
    goto L_0898301C;
L_0898301C:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08982FE8; }
    goto L_0898302C;
L_0898302C:;
    v1 = LD32(sp+8);
    goto L_08983030;
L_08983030:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s1+96); goto L_08983120; }
    goto L_08983038;
L_08983038:;
    s2 = 0x58d0000u;
    s2 = s2 | 0x13bf;
    s0 = LD32(v1);
    goto L_08983044;
L_08983044:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABC97C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08983050;
L_08983050:;
    cnd_ = s0 == s1;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_08983114; }
    goto L_08983058;
L_08983058:;
    v1 = LD32(s0);
    v0 = LD32(v1+100);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08983068;
L_08983068:;
    cnd_ = v0 == 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_08983114; }
    goto L_08983070;
L_08983070:;
    v1 = LD32(s0+96);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    v0 = (v1 >> 1) & 0x1;
    if (cnd_) { goto L_08983088; }
    goto L_08983080;
L_08983080:;
    cnd_ = v0 == 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_08983114; }
    goto L_08983088;
L_08983088:;
    a1 = LD32(s0+28);
    v0 = D_08C2B4CC - (-19252);
    a0 = v0 - 19252;
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898309C;
L_0898309C:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089830C0; }
    goto L_089830A4;
L_089830A4:;
    a1 = LD32(v0);
    v0 = LD32(a1-16);
    v0 = a0 + v0;
    v1 = LD_U16(v0+8);
    v0 = 0x8014;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a1-12); goto L_089832A0; }
    goto L_089830C0;
L_089830C0:;
    v0 = LD32(s0+88);
    goto L_089830C4;
L_089830C4:;
    v1 = 4;
    cnd_ = v0 == v1;
    v1 = v0 ^ s6;
    if (cnd_) { goto L_08983110; }
    goto L_089830D0;
L_089830D0:;
    v0 = v0 ^ s5;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    s4 = s4 + v0;
    cnd_ = v0 == 0;
    s3 = s3 + v1;
    if (cnd_) { goto L_089830F8; }
    goto L_089830E8;
L_089830E8:;
    v0 = LD32(s0+96);
    v0 = (v0 >> 1) & 0x1;
    v0 = v0 < 0x1u;
    s7 = s7 + v0;
    goto L_089830F8;
L_089830F8:;
    cnd_ = v1 == 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_08983114; }
    goto L_08983100;
L_08983100:;
    v0 = LD32(s0+96);
    v0 = (v0 >> 1) & 0x1;
    v0 = v0 < 0x1u;
    fp = fp + v0;
    goto L_08983110;
L_08983110:;
    v1 = LD32(sp+8);
    goto L_08983114;
L_08983114:;
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(v1); goto L_08983044; }
    goto L_0898311C;
L_0898311C:;
    v0 = LD32(s1+96);
    goto L_08983120;
L_08983120:;
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    v0 = s4 < s3;
    if (cnd_) { goto L_08983150; }
    goto L_0898312C;
L_0898312C:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 == 0;
    v0 = s4 < s3;
    if (cnd_) { goto L_08983150; }
    goto L_0898313C;
L_0898313C:;
    v0 = s7 < fp;
    cnd_ = v0 != 0;
    v0 = fp < s7;
    if (cnd_) { goto L_08983290; }
    goto L_08983148;
L_08983148:;
    cnd_ = v0 != 0;
    v0 = s4 < s3;
    if (cnd_) { goto L_08983270; }
    goto L_08983150;
L_08983150:;
    cnd_ = v0 != 0;
    v0 = s3 < s4;
    if (cnd_) { goto L_08983290; }
    goto L_08983158;
L_08983158:;
    cnd_ = v0 != 0;
    s0 = D_08C2A0A4 - (-24412);
    if (cnd_) { goto L_08983270; }
    goto L_08983160;
L_08983160:;
    v0 = LD_U8(s0-24412);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08983254; }
    goto L_0898316C;
L_0898316C:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    v0 = LD32(v1+104);
    t_ = v0;
    a1 = s6 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08983180;
L_08983180:;
    ST8(s0-24412, 0);
    goto L_08983184;
L_08983184:;
    s1 = LD32(sp);
    goto L_08983188;
L_08983188:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0898320C; }
    goto L_08983198;
L_08983198:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0898320C; }
    goto L_089831A4;
L_089831A4:;
    v0 = LD32(s1);
    goto L_089831A8;
L_089831A8:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089831FC; }
    goto L_089831BC;
L_089831BC:;
    v0 = LD_U8(s0+8);
    goto L_089831C0;
L_089831C0:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0898324C; }
    goto L_089831C8;
L_089831C8:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0898323C; }
    goto L_089831D0;
L_089831D0:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089831D8;
L_089831D8:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089831E4;
L_089831E4:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089831F0;
L_089831F0:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089831C0; }
    goto L_089831F8;
L_089831F8:;
    v1 = LD32(s1+4);
    goto L_089831FC;
L_089831FC:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089831A8; }
    goto L_0898320C;
L_0898320C:;
    sp = sp + 64;
    return f0;
L_0898323C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089831D8;
L_0898324C:;
    s0 = LD32(s0+4);
    goto L_089831F0;
L_08983254:;
    a0 = s1 + 0;
    v1 = LD32(v0+104);
    t_ = v1;
    a1 = s5 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08983264;
L_08983264:;
    v0 = 1;
    ST8(s0-24412, v0);
    goto L_08983184;
L_08983270:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    a1 = s6 + 0;
    goto L_0898327C;
L_0898327C:;
    v0 = LD32(v1+104);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08983288;
L_08983288:;
    s1 = LD32(sp);
    goto L_08983188;
L_08983290:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    a1 = s5 + 0;
    goto L_0898327C;
L_089832A0:;
    v0 = a0 + v0;
    v1 = LD32(v0+16);
    cnd_ = v1 != s2;
    if (cnd_) { v0 = LD32(s0+88); goto L_089830C4; }
    goto L_089832B0;
L_089832B0:;
    v1 = LD32(sp+8);
    goto L_08983114;
}

/* 089832B8 */
rv_t func_089832B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089832B8:;
    sp = sp - 32;
    v1 = LD32(a0);
    v0 = LD32(v1+112);
    t_ = v0;
    s2 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089832E8;
L_089832E8:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089833F4; }
    goto L_089832F0;
L_089832F0:;
    v1 = LD32(v0);
    a1 = LD32(s2);
    a0 = s2 + 0;
    v0 = LD32(v1-16);
    a2 = LD32(a1+88);
    v0 = s0 + v0;
    t_ = a2;
    a1 = LD32(v0+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08983310;
L_08983310:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    v0 = LD32(v1+120);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08983324;
L_08983324:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    v0 = LD32(v1+124);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08983338;
L_08983338:;
    v1 = LD32(s0);
    v0 = LD32(v1+168);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08983348;
L_08983348:;
    v1 = LD32(s2+96);
    v1 = (v1 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    ST32(s2+96, v1);
    if (cnd_) { goto L_089835B4; }
    goto L_0898335C;
L_0898335C:;
    v0 = LD32(s0);
    s1 = s2 + 148;
    a0 = s2 + 0;
    v1 = LD32(v0-12);
    a1 = s1 + 0;
    v1 = s0 + v1;
    a2 = LD32(v1+16);
    func_08982CF4(a1, a2);
    goto L_0898337C;
L_0898337C:;
    a0 = s0 + 0;
    goto L_08983380;
L_08983380:;
    a1 = s1 + 0;
    func_089E4770(a0, a1);
    goto L_08983388;
L_08983388:;
    a0 = s0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08983390;
L_08983390:;
    cnd_ = v0 != 0;
    v1 = 0x8005;
    if (cnd_) { goto L_089833DC; }
    goto L_08983398;
L_08983398:;
    a1 = LD32(s0);
    v0 = LD32(a1-16);
    v0 = s0 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    s1 = 0 + 0;
    if (cnd_) { goto L_0898345C; }
    goto L_089833B0;
L_089833B0:;
    v0 = D_08ADDD84 - (-8828);
    v1 = s1 << 2;
    v0 = v0 - 8828;
    v1 = v1 + v0;
    f12 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(v1));
    a0 = LD32(a1-12);
    f12 = f12 * f0;
    a0 = s0 + a0;
    ST32(s0+8, FBITS(f12));
    func_0886422C(a0, f12);
    goto L_089833DC;
L_089833DC:;
    a0 = LD32(s2+88);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089833E4;
L_089833E4:;
    v1 = v0 + 0;
    v0 = (s32)v0 < 2;
    cnd_ = v0 != 0;
    v0 = v1 << 2;
    if (cnd_) { goto L_08983440; }
    goto L_089833F4;
L_089833F4:;
    a0 = LD32(s2+96);
    v1 = 0 < s0;
    v0 = a0 ^ 0x10;
    v0 = (v0 >> 4) & 0x1;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_0898341C; }
    goto L_08983410;
L_08983410:;
    v0 = a0 | 0x10;
    ST32(s2+96, v0);
    v0 = s0 + 0;
    goto L_0898341C;
L_0898341C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08983440:;
    v1 = D_08C2A09C - (-24420);
    v1 = v1 - 24420;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a0 = a0 + 1;
    ST32(v0, a0);
    goto L_089833F4;
L_0898345C:;
    a1 = D_08B25AC0 - (23232);
    v0 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    f0 = BITSF(v1);
    a0 = a0 + v0;
    v1 = D_08AEE548 - (-6840);
    f1 = (float)(s32)FBITS(f0);
    ST32(a2+4, a0);
    f20 = BITSF(0);
    ST32(a1+23232, v0);
    f21 = f20;
    f0 = BITSF(LD32(v1-6840));
    f22 = f1 * f0;
    v0 = func_08979DF4();
    goto L_089834AC;
L_089834AC:;
    v1 = 2;
    cnd_ = v0 == v1;
    v0 = D_08ADDDAC - (-8788);
    if (cnd_) { goto L_08983548; }
    goto L_089834B8;
L_089834B8:;
    v0 = func_08979DF4();
    goto L_089834C0;
L_089834C0:;
    v1 = 1;
    cnd_ = v0 == v1;
    v0 = D_08ADDD98 - (-8808);
    if (cnd_) { goto L_089834D4; }
    goto L_089834CC;
L_089834CC:;
    a1 = LD32(s0);
    goto L_089833B0;
L_089834D4:;
    a0 = v0 - 8808;
    v1 = 0 + 0;
    goto L_089834DC;
L_089834DC:;
    f0 = BITSF(LD32(a0));
    v1 = v1 + 1;
    v0 = v1 < 0x5u;
    f21 = f21 + f0;
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_089834DC; }
    goto L_089834F4;
L_089834F4:;
    v1 = D_08AEE544 - (-6844);
    f0 = BITSF(LD32(v1-6844));
    v0 = D_08ADDD98 - (-8808);
    a0 = v0 - 8808;
    f1 = f0 / f21;
    v1 = 0 + 0;
    f0 = BITSF(LD32(a0));
    goto L_08983510;
L_08983510:;
    f0 = f0 * f1;
    f20 = f20 + f0;
    fcc = FCMP(f22, f20, 12);
    cnd_ = fcc;
    a0 = a0 + 4;
    if (cnd_) { goto L_08983540; }
    goto L_08983528;
L_08983528:;
    v1 = v1 + 1;
    v0 = v1 < 0x5u;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(a0)); goto L_08983510; }
    goto L_08983538;
L_08983538:;
    a1 = LD32(s0);
    goto L_089833B0;
L_08983540:;
    s1 = v1 + 0;
    goto L_089834CC;
L_08983548:;
    a0 = v0 - 8788;
    v1 = 0 + 0;
    goto L_08983550;
L_08983550:;
    f0 = BITSF(LD32(a0));
    v1 = v1 + 1;
    v0 = v1 < 0x5u;
    f21 = f21 + f0;
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_08983550; }
    goto L_08983568;
L_08983568:;
    v1 = D_08AEE544 - (-6844);
    f0 = BITSF(LD32(v1-6844));
    v0 = D_08ADDDAC - (-8788);
    a0 = v0 - 8788;
    f1 = f0 / f21;
    v1 = 0 + 0;
    f0 = BITSF(LD32(a0));
    goto L_08983584;
L_08983584:;
    f0 = f0 * f1;
    f20 = f20 + f0;
    fcc = FCMP(f22, f20, 12);
    cnd_ = fcc;
    a0 = a0 + 4;
    if (cnd_) { goto L_08983540; }
    goto L_0898359C;
L_0898359C:;
    v1 = v1 + 1;
    v0 = v1 < 0x5u;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(a0)); goto L_08983584; }
    goto L_089835AC;
L_089835AC:;
    a1 = LD32(s0);
    goto L_089833B0;
L_089835B4:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    v0 = LD32(v1+128);
    t_ = v0;
    s1 = s2 + 148;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089835C8;
L_089835C8:;
    a0 = s0 + 0;
    goto L_08983380;
}

/* 089835D0 */
rv_t func_089835D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089835D0:;
    sp = sp - 16;
    a0 = 999;
    { rv_t r_ = func_089A76EC(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089835E0;
L_089835E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089835EC */
u32 func_089835EC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    u32 hi = 0, lo = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089835EC:;
    sp = sp - 16;
    t0 = D_08B25AC0 - (23232);
    t1 = t0 + 23232;
    v1 = LD32(t0+23232);
    a3 = LD32(t1+4);
    a0 = LD32(a0+88);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a3;
    a2 = v1 >> 1;
    v0 = 3;
    { u32 x_ = a2, y_ = v0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a3 = a3 + v1;
    ST32(t1+4, a3);
    a1 = hi;
    ST32(t0+23232, v1);
    v0 = func_089780FC(a0, a1);
    goto L_08983638;
L_08983638:;
    sp = sp + 16;
    return v0;
}

/* 08983644 */
rv_t func_08983644(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08983644:;
    sp = sp - 48;
    v0 = 4;
    s1 = a0 + 0;
    v1 = LD32(a0+88);
    cnd_ = v1 == v0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08983768; }
    goto L_08983668;
L_08983668:;
    v0 = LD32(s1+108);
    goto L_0898366C;
L_0898366C:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08983754; }
    goto L_08983674;
L_08983674:;
    a0 = sp + 0;
    ST32(sp, 0);
    v0 = func_0881B2B8(a0, t1, t2, t3);
    goto L_08983680;
L_08983680:;
    a0 = 0x203e0000u;
    a1 = LD32(s1+108);
    a0 = a0 | 0x217d;
    a2 = sp + 16;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08983694;
L_08983694:;
    v1 = LD32(s0);
    a1 = LD32(s1+108);
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089836B4;
L_089836B4:;
    v1 = LD32(s1+88);
    a1 = LD32(s0);
    ST32(s0+12, v1);
    v0 = LD32(s1+116);
    a0 = LD32(a1-12);
    ST32(s0+112, v0);
    a0 = s0 + a0;
    v0 = LD32(s1+120);
    ST32(s0+116, v0);
    f0 = BITSF(LD32(s1+132));
    ST32(s0+8, FBITS(f0));
    f12 = BITSF(LD32(s1+132));
    func_0886422C(a0, f12);
    goto L_089836E8;
L_089836E8:;
    v1 = LD32(s0);
    f0 = BITSF(LD32(s1+136));
    a0 = D_08C2A880 - (-22400);
    v0 = LD32(v1-16);
    ST32(s0+104, FBITS(f0));
    a0 = a0 - 22400;
    v0 = s0 + v0;
    a1 = LD32(v0+4);
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08983710;
L_08983710:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08983738; }
    goto L_0898371C;
L_0898371C:;
    v0 = LD32(s1+112);
    ST32(s0+316, v0);
    { u64 r_ = func_089A82E0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08983728;
L_08983728:;
    f0 = BITSF(LD32(s1+144));
    ST32(s0+312, FBITS(f0));
    f1 = BITSF(LD32(s1+140));
    ST32(s0+308, FBITS(f1));
    goto L_08983738;
L_08983738:;
    a0 = sp + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08983740;
L_08983740:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08983754:;
    v0 = func_089835EC(a0);
    goto L_0898375C;
L_0898375C:;
    ST32(s1+108, v0);
    ST32(s1+112, 0);
    goto L_08983674;
L_08983768:;
    f0 = func_08982F58(a0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08983770;
L_08983770:;
    v0 = LD32(s1+108);
    goto L_0898366C;
}

/* 08983778 */
rv_t func_08983778(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08983778:;
    sp = sp - 80;
    v1 = D_08B45A9C - (23196);
    a2 = D_08B45AA8 - (23208);
    v0 = a2 + 23208;
    a3 = v1 + 23196;
    s1 = sp + 16;
    s0 = a1 + 0;
    f8 = BITSF(LD32(v1+23196));
    f9 = BITSF(LD32(a3+8));
    f0 = BITSF(LD32(a3+4));
    f10 = BITSF(LD32(a2+23208));
    f11 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    a2 = sp + 0;
    a3 = s1 + 0;
    ST32(sp, FBITS(f8));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f9));
    ST32(sp+16, FBITS(f10));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    ST32(sp+28, FBITS(f3));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f5));
    ST32(sp+40, FBITS(f6));
    ST32(sp+44, FBITS(f7));
    ST32(sp+48, FBITS(f11));
    func_0898383C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0898380C;
L_0898380C:;
    a0 = s0 + 0;
    v1 = LD32(s0);
    a2 = s1 + 0;
    a1 = sp + 0;
    v0 = LD32(v1+16);
    t_ = v0;
    a3 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08983828;
L_08983828:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
}

/* 0898383C */
void func_0898383C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_0898383C:;
    sp = sp - 144;
    fp = a2 + 0;
    s6 = a0 + 0;
    s4 = a3 + 0;
    v0 = LD_U16(a0+8);
    ST32(sp+80, a1);
    v0 = v0 ^ 0x800d;
    v0 = v0 < 0x1u;
    ST32(sp+84, v0);
    cnd_ = v0 == 0;
    s3 = LD32(a0+104);
    if (cnd_) { goto L_089838A8; }
    goto L_08983890;
L_08983890:;
    v0 = 999;
    cnd_ = s3 == v0;
    a2 = D_08C2A330 - (-23760);
    if (cnd_) { goto L_08983DD8; }
    goto L_0898389C;
L_0898389C:;
    v0 = 999;
    goto L_089838A0;
L_089838A0:;
    cnd_ = s3 == v0;
    v0 = D_08C28F60 - (-28832);
    if (cnd_) { goto L_08983B6C; }
    goto L_089838A8;
L_089838A8:;
    s0 = D_08C2BA28 - (-17880);
    goto L_089838AC;
L_089838AC:;
    v0 = 999;
    goto L_089838B0;
L_089838B0:;
    cnd_ = s3 == v0;
    v1 = s0 - 17880;
    if (cnd_) { goto L_08983920; }
    goto L_089838B8;
L_089838B8:;
    v0 = LD32(v1+4);
    v1 = LD32(s0-17880);
    v0 = v0 - 1;
    v0 = s3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08983908; }
    goto L_089838DC;
L_089838DC:;
    a0 = LD32(a1);
    goto L_089838E0;
L_089838E0:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s3;
    if (cnd_) { v0 = LD32(v1+16); goto L_08983B4C; }
    goto L_089838F8;
L_089838F8:;
    a1 = LD32(a1+4);
    goto L_089838FC;
L_089838FC:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089838E0; }
    goto L_08983904;
L_08983904:;
    a0 = 0 + 0;
    goto L_08983908;
L_08983908:;
    cnd_ = a0 == 0;
    v0 = s0 - 17880;
    if (cnd_) { goto L_08983924; }
    goto L_08983910;
L_08983910:;
    v1 = LD32(a0+12);
    v0 = LD32(s6+88);
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD_U8(a0+5); goto L_08983B00; }
    goto L_08983920;
L_08983920:;
    v0 = s0 - 17880;
    goto L_08983924;
L_08983924:;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    ST32(sp+64, v0);
    v1 = v1 + 1;
    s1 = sp + 64;
    ST32(v0+8, v1);
    ST32(sp+72, 0);
    cnd_ = a0 == 0;
    ST32(sp+68, 0);
    if (cnd_) { goto L_08983994; }
    goto L_08983948;
L_08983948:;
    a1 = LD32(s0-17880);
    a2 = a0 + 0;
    goto L_08983950;
L_08983950:;
    a0 = LD32(s1+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s1+8, v1);
    if (cnd_) { goto L_08983984; }
    goto L_08983968;
L_08983968:;
    v1 = LD32(s1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+72); goto L_08983998; }
    goto L_08983978;
L_08983978:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08983968; }
    goto L_08983984;
L_08983984:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_08983950; }
    goto L_08983994;
L_08983994:;
    a0 = LD32(sp+72);
    goto L_08983998;
L_08983998:;
    cnd_ = a0 != 0;
    v0 = D_08B2AA0C - (-22004);
    if (cnd_) { goto L_08983A74; }
    goto L_089839A0;
L_089839A0:;
    s0 = LD32(v0-22004);
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08983A20; }
    goto L_089839AC;
L_089839AC:;
    a1 = 0 + 0;
    v0 = func_08ABFF14(a0, a1);
    goto L_089839B4;
L_089839B4:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(fp+8, FBITS(f0));
    a0 = s0 + 0;
    a1 = 0 + 0;
    ST32(fp, FBITS(f1));
    ST32(fp+4, FBITS(f2));
    v0 = func_08AC0150(a0, a1);
    goto L_089839D8;
L_089839D8:;
    f0 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+12));
    f5 = BITSF(LD32(v0+16));
    f6 = BITSF(LD32(v0+20));
    f7 = BITSF(LD32(v0+24));
    f8 = BITSF(LD32(v0+28));
    ST32(s4+32, FBITS(f0));
    ST32(s4, FBITS(f1));
    ST32(s4+4, FBITS(f2));
    ST32(s4+8, FBITS(f3));
    ST32(s4+12, FBITS(f4));
    ST32(s4+16, FBITS(f5));
    ST32(s4+20, FBITS(f6));
    ST32(s4+24, FBITS(f7));
    ST32(s4+28, FBITS(f8));
    goto L_08983A20;
L_08983A20:;
    a0 = LD32(sp+64);
    goto L_08983A24;
L_08983A24:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08983A64; }
    goto L_08983A34;
L_08983A34:;
    goto L_08983A38;
L_08983A38:;
    sp = sp + 144;
    return;
L_08983A64:;
    { u64 r_ = func_08ABC380(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08983A6C;
L_08983A6C:;
    goto L_08983A38;
L_08983A74:;
    s0 = LD32(a0);
    goto L_08983A78;
L_08983A78:;
    a1 = 1;
    a0 = s1 + 0;
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08983A84;
L_08983A84:;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(sp+72); goto L_08983AA0; }
    goto L_08983A8C;
L_08983A8C:;
    v1 = LD32(s0+12);
    v0 = LD32(s6+88);
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD_U8(s0+5); goto L_08983AB0; }
    goto L_08983A9C;
L_08983A9C:;
    a0 = LD32(sp+72);
    goto L_08983AA0;
L_08983AA0:;
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_08983A78; }
    goto L_08983AA8;
L_08983AA8:;
    v0 = D_08B2AA0C - (-22004);
    goto L_089839A0;
L_08983AB0:;
    cnd_ = v0 == 0;
    a0 = LD32(sp+72);
    if (cnd_) { goto L_08983AA0; }
    goto L_08983AB8;
L_08983AB8:;
    v0 = LD_U8(s0+64);
    a0 = s0 + 0;
    a1 = fp + 0;
    a2 = s4 + 0;
    cnd_ = v0 == 0;
    a3 = LD32(sp+84);
    if (cnd_) { goto L_08983A9C; }
    goto L_08983AD0;
L_08983AD0:;
    v0 = func_089ED36C(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08983AD8;
L_08983AD8:;
    a0 = LD32(sp+80);
    a3 = 0 + 0;
    if (v0 == 0) a3 = s4;
    a1 = fp + 0;
    a2 = fp + 0;
    v0 = func_089E3EEC(a0, a1, a2, a3);
    goto L_08983AF0;
L_08983AF0:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+72); goto L_08983AA0; }
    goto L_08983AF8;
L_08983AF8:;
    a0 = LD32(sp+64);
    goto L_08983A24;
L_08983B00:;
    cnd_ = v0 == 0;
    v0 = s0 - 17880;
    if (cnd_) { goto L_08983924; }
    goto L_08983B08;
L_08983B08:;
    v0 = LD_U8(a0+64);
    cnd_ = v0 == 0;
    v0 = s0 - 17880;
    if (cnd_) { goto L_08983924; }
    goto L_08983B14;
L_08983B14:;
    a3 = LD32(sp+84);
    a1 = fp + 0;
    a2 = s4 + 0;
    v0 = func_089ED36C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08983B24;
L_08983B24:;
    a0 = LD32(sp+80);
    a3 = 0 + 0;
    if (v0 == 0) a3 = s4;
    a1 = fp + 0;
    a2 = fp + 0;
    v0 = func_089E3EEC(a0, a1, a2, a3);
    goto L_08983B3C;
L_08983B3C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08983A38; }
    goto L_08983B44;
L_08983B44:;
    v0 = s0 - 17880;
    goto L_08983924;
L_08983B4C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089838FC; }
    goto L_08983B58;
L_08983B58:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089838FC; }
    goto L_08983B64;
L_08983B64:;
    goto L_08983908;
L_08983B6C:;
    a0 = LD32(v0-28832);
    v1 = 5;
    cnd_ = a0 != v1;
    s0 = D_08C2BA28 - (-17880);
    if (cnd_) { goto L_089838AC; }
    goto L_08983B7C;
L_08983B7C:;
    a2 = D_08C2A260 - (-23968);
    v0 = a2 - 23968;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp+16, v0);
    v1 = v1 + 1;
    s1 = 0 + 0;
    ST32(v0+8, v1);
    s2 = 0 + 0;
    a0 = sp + 16;
    ST32(sp+20, 0);
    cnd_ = a1 == 0;
    ST32(sp+24, 0);
    if (cnd_) { goto L_08983BFC; }
    goto L_08983BB0;
L_08983BB0:;
    a2 = LD32(a2-23968);
    a3 = a1 + 0;
    goto L_08983BB8;
L_08983BB8:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08983BEC; }
    goto L_08983BD0;
L_08983BD0:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+24);
    if (cnd_) { goto L_08983C00; }
    goto L_08983BE0;
L_08983BE0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08983BD0; }
    goto L_08983BEC;
L_08983BEC:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08983BB8; }
    goto L_08983BFC;
L_08983BFC:;
    v0 = LD32(sp+24);
    goto L_08983C00;
L_08983C00:;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08983D00; }
    goto L_08983C08;
L_08983C08:;
    s1 = LD32(v0);
    goto L_08983C0C;
L_08983C0C:;
    a2 = LD32(sp+80);
    a0 = s0 + 0;
    v1 = LD32(s1+84);
    v0 = LD32(a2+12);
    cnd_ = v1 == v0;
    a1 = 1;
    if (cnd_) { goto L_08983C38; }
    goto L_08983C24;
L_08983C24:;
    func_08ABCE20(a0, a1);
    goto L_08983C2C;
L_08983C2C:;
    v0 = LD32(sp+24);
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(v0); goto L_08983C0C; }
    goto L_08983C38;
L_08983C38:;
    cnd_ = s1 == 0;
    a3 = D_08C2A35C - (-23716);
    if (cnd_) { goto L_08983D04; }
    goto L_08983C40;
L_08983C40:;
    v0 = 0 < s1;
    goto L_08983C44;
L_08983C44:;
    v1 = 0 < s2;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_08983CE0; }
    goto L_08983C54;
L_08983C54:;
    v1 = s2 + 32;
    v0 = s1 + 32;
    if (s1 == 0) v0 = v1;
    v1 = LD32(sp+80);
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    a1 = LD32(v1+12);
    f1 = BITSF(LD32(v0+4));
    a0 = sp + 48;
    ST32(sp+48, FBITS(f0));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f2));
    v0 = func_089EDB40(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08983C88;
L_08983C88:;
    cnd_ = v0 == 0;
    a3 = LD32(sp+84);
    if (cnd_) { goto L_08983CDC; }
    goto L_08983C90;
L_08983C90:;
    a0 = v0 + 0;
    a1 = fp + 0;
    a2 = s4 + 0;
    v0 = func_089ED36C(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08983CA0;
L_08983CA0:;
    a0 = LD32(sp+80);
    a3 = 0 + 0;
    if (v0 == 0) a3 = s4;
    a1 = fp + 0;
    a2 = fp + 0;
    v0 = func_089E3EEC(a0, a1, a2, a3);
    goto L_08983CB8;
L_08983CB8:;
    a0 = LD32(sp+16);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08983A34; }
    goto L_08983CCC;
L_08983CCC:;
    func_08AC1798(a0, 0, 0, 0);
    goto L_08983CD4;
L_08983CD4:;
    goto L_08983A38;
L_08983CDC:;
    a0 = LD32(sp+16);
    goto L_08983CE0;
L_08983CE0:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089838A8; }
    goto L_08983CF0;
L_08983CF0:;
    s0 = D_08C2BA28 - (-17880);
    func_08AC1798(a0, t1, t2, t3);
    goto L_08983CF8;
L_08983CF8:;
    v0 = 999;
    goto L_089838B0;
L_08983D00:;
    a3 = D_08C2A35C - (-23716);
    goto L_08983D04;
L_08983D04:;
    v0 = a3 - 23716;
    v1 = LD32(v0+8);
    a2 = LD32(v0+4);
    ST32(sp+32, v0);
    v1 = v1 + 1;
    a0 = s1 < a2;
    ST32(v0+8, v1);
    a1 = sp + 32;
    ST32(sp+36, 0);
    cnd_ = a0 == 0;
    ST32(sp+40, 0);
    if (cnd_) { goto L_08983D78; }
    goto L_08983D30;
L_08983D30:;
    a3 = LD32(a3-23716);
    goto L_08983D34;
L_08983D34:;
    a0 = LD32(a1+4);
    v0 = a0 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a1+8, v1);
    if (cnd_) { goto L_08983D68; }
    goto L_08983D4C;
L_08983D4C:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+40);
    if (cnd_) { goto L_08983D7C; }
    goto L_08983D5C;
L_08983D5C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_08983D4C; }
    goto L_08983D68;
L_08983D68:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_08983D34; }
    goto L_08983D78;
L_08983D78:;
    v0 = LD32(sp+40);
    goto L_08983D7C;
L_08983D7C:;
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08983DB4; }
    goto L_08983D84;
L_08983D84:;
    s2 = LD32(v0);
    goto L_08983D88;
L_08983D88:;
    a2 = LD32(sp+80);
    a0 = s0 + 0;
    v1 = LD32(s2+84);
    v0 = LD32(a2+12);
    cnd_ = v1 == v0;
    a1 = 1;
    if (cnd_) { goto L_08983DB4; }
    goto L_08983DA0;
L_08983DA0:;
    func_08ABCEB8(a0, a1);
    goto L_08983DA8;
L_08983DA8:;
    v0 = LD32(sp+40);
    cnd_ = v0 != 0;
    if (cnd_) { s2 = LD32(v0); goto L_08983D88; }
    goto L_08983DB4;
L_08983DB4:;
    a0 = LD32(sp+32);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08983C40; }
    goto L_08983DC8;
L_08983DC8:;
    func_08AC1864(a0, t1, t2, t3);
    goto L_08983DD0;
L_08983DD0:;
    v0 = 0 < s1;
    goto L_08983C44;
L_08983DD8:;
    v0 = a2 - 23760;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    s0 = 999;
    ST32(v0+8, v1);
    a0 = sp + 0;
    ST32(sp+4, 0);
    cnd_ = a1 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_08983E50; }
    goto L_08983E04;
L_08983E04:;
    a2 = LD32(a2-23760);
    a3 = a1 + 0;
    goto L_08983E0C;
L_08983E0C:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08983E40; }
    goto L_08983E24;
L_08983E24:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_08983E54; }
    goto L_08983E34;
L_08983E34:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08983E24; }
    goto L_08983E40;
L_08983E40:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08983E0C; }
    goto L_08983E50;
L_08983E50:;
    a0 = LD32(sp+8);
    goto L_08983E54;
L_08983E54:;
    cnd_ = a0 == 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_08983E8C; }
    goto L_08983E5C;
L_08983E5C:;
    a0 = LD32(a0);
    goto L_08983E60;
L_08983E60:;
    v1 = LD32(s6+88);
    v0 = LD32(a0+76);
    cnd_ = v0 == v1;
    a1 = v0 + 0;
    if (cnd_) { goto L_08983F38; }
    goto L_08983E70;
L_08983E70:;
    a0 = sp + 0;
    a1 = 1;
    func_08ABC660(a0, a1);
    goto L_08983E7C;
L_08983E7C:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    if (cnd_) { a0 = LD32(a0); goto L_08983E60; }
    goto L_08983E88;
L_08983E88:;
    s1 = LD32(sp);
    goto L_08983E8C;
L_08983E8C:;
    v1 = s0 ^ 0x3e7;
    if (v1 != 0) s3 = s0;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0898389C; }
    goto L_08983EA4;
L_08983EA4:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_0898389C; }
    goto L_08983EB0;
L_08983EB0:;
    v0 = LD32(s1);
    goto L_08983EB4;
L_08983EB4:;
    s7 = s5 << 2;
    v0 = s7 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08983F08; }
    goto L_08983EC8;
L_08983EC8:;
    v0 = LD_U8(s0+8);
    goto L_08983ECC;
L_08983ECC:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08983F30; }
    goto L_08983ED4;
L_08983ED4:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08983F20; }
    goto L_08983EDC;
L_08983EDC:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08983EE4;
L_08983EE4:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08983EF0;
L_08983EF0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08983EFC;
L_08983EFC:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08983ECC; }
    goto L_08983F04;
L_08983F04:;
    v1 = LD32(s1+4);
    goto L_08983F08;
L_08983F08:;
    s5 = s5 + 1;
    v0 = s5 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08983EB4; }
    goto L_08983F18;
L_08983F18:;
    v0 = 999;
    goto L_089838A0;
L_08983F20:;
    v1 = LD32(s0+4);
    v0 = s7 + v0;
    ST32(v0, v1);
    goto L_08983EE4;
L_08983F30:;
    s0 = LD32(s0+4);
    goto L_08983EFC;
L_08983F38:;
    v0 = func_0898B9F4(a0);
    goto L_08983F40;
L_08983F40:;
    s0 = v0 + 0;
    goto L_08983E70;
}

/* 08983F48 */
rv_t func_08983F48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08983F48:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = D_08C2B2A8 - (-19800);
    a0 = a0 - 19800;
    a2 = 1;
    s3 = D_08C2B4CC - (-19252);
    s2 = 1;
    s1 = a1 + 0;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08983F80;
L_08983F80:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08983F94; }
    goto L_08983F88;
L_08983F88:;
    { u64 r_ = func_089D0A8C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08983F90;
L_08983F90:;
    s2 = v0 + 0;
    goto L_08983F94;
L_08983F94:;
    a1 = LD32(s0+28);
    a0 = s3 - 19252;
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08983FA4;
L_08983FA4:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0+28, s1); goto L_08983FCC; }
    goto L_08983FAC;
L_08983FAC:;
    a0 = v0 + 0;
    cnd_ = s2 == 0;
    a1 = 999;
    if (cnd_) { goto L_08984018; }
    goto L_08983FB8;
L_08983FB8:;
    v0 = LD32(v0);
    v1 = LD32(v0+172);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08983FC8;
L_08983FC8:;
    ST32(s0+28, s1);
    goto L_08983FCC;
L_08983FCC:;
    a0 = s3 - 19252;
    a1 = s1 + 0;
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08983FDC;
L_08983FDC:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08983FF4; }
    goto L_08983FE4;
L_08983FE4:;
    v0 = LD32(v0);
    v1 = LD32(v0+172);
    t_ = v1;
    a1 = LD32(s0+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08983FF4;
L_08983FF4:;
    v0 = 1;
    ST8(s0+32, v0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08984018:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+172);
    t_ = v0;
    a1 = LD32(s0+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898402C;
L_0898402C:;
    ST32(s0+28, s1);
    goto L_08983FCC;
}

/* 08984034 */
u32 func_08984034(u32 a0)
{
    u32 v0 = 0;
L_08984034:;
    v0 = D_08C2A09C - (-24420);
    v0 = v0 - 24420;
    a0 = a0 << 2;
    a0 = a0 + v0;
    v0 = LD32(a0);
    return v0;
}

/* 0898404C */
rv_t func_0898404C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898404C:;
    sp = sp - 32;
    v0 = D_08C28F5C - (-28836);
    f20 = BITSF(0);
    f21 = BITSF(LD32(v0-28836));
    fcc = FCMP(f21, f20, 2);
    cnd_ = fcc;
    f1 = f20;
    if (cnd_) { goto L_089840B0; }
    goto L_08984078;
L_08984078:;
    v0 = D_08C2A098 - (-24424);
    v1 = LD32(v0-24424);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089840B4; }
    goto L_0898408C;
L_0898408C:;
    { rv_t r_ = func_08973954(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08984094;
L_08984094:;
    fcc = FCMP(f0, f21, 12);
    cnd_ = fcc;
    f1 = f20;
    if (cnd_) { goto L_089840B0; }
    goto L_089840A4;
L_089840A4:;
    { rv_t r_ = func_08973960(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089840AC;
L_089840AC:;
    f1 = f0;
    goto L_089840B0;
L_089840B0:;
    goto L_089840B4;
L_089840B4:;
    f0 = f1;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089840C8 */
rv_t func_089840C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089840C8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a2 = 1;
    v0 = LD32(a0+28);
    ST32(a0+88, a1);
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    a1 = v0 + 0;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089840F4;
L_089840F4:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08984104; }
    goto L_089840FC;
L_089840FC:;
    v0 = LD32(s0+88);
    ST32(v1+12, v0);
    goto L_08984104;
L_08984104:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08984114 */
rv_t func_08984114(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08984114:;
    sp = sp - 64;
    a3 = D_08C2A08C - (-24436);
    v0 = 999;
    cnd_ = a0 == v0;
    v1 = a3 - 24436;
    if (cnd_) { goto L_08984298; }
    goto L_0898412C;
L_0898412C:;
    v0 = LD32(v1+4);
    v1 = LD32(a3-24436);
    v0 = v0 - 1;
    v0 = a0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a3 = LD32(v0);
    cnd_ = a3 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08984170; }
    goto L_08984150;
L_08984150:;
    v1 = LD32(a3);
    goto L_08984154;
L_08984154:;
    v0 = LD32(v1+4);
    cnd_ = v0 == a0;
    if (cnd_) { v0 = LD32(v1+16); goto L_089842A0; }
    goto L_08984160;
L_08984160:;
    a3 = LD32(a3+4);
    goto L_08984164;
L_08984164:;
    cnd_ = a3 != 0;
    if (cnd_) { v1 = LD32(a3); goto L_08984154; }
    goto L_0898416C;
L_0898416C:;
    v1 = 0 + 0;
    goto L_08984170;
L_08984170:;
    cnd_ = v1 == 0;
    a0 = D_08B28EF4 - (-28940);
    if (cnd_) { goto L_08984298; }
    goto L_08984178;
L_08984178:;
    a3 = LD32(v1+28);
    v0 = 999;
    {v[112]=BITSF(LD32(a2+(0)));}
    {v[113]=BITSF(LD32(a2+(4)));}
    {v[114]=BITSF(LD32(a2+(8)));}
    {v[115]=BITSF(LD32(a2+(12)));}
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
    cnd_ = a3 == v0;
    v1 = a0 - 28940;
    if (cnd_) { goto L_08984268; }
    goto L_08984200;
L_08984200:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-28940);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08984250; }
    goto L_08984224;
L_08984224:;
    a0 = LD32(a2);
    goto L_08984228;
L_08984228:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_08984278; }
    goto L_08984240;
L_08984240:;
    a2 = LD32(a2+4);
    goto L_08984244;
L_08984244:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_08984228; }
    goto L_0898424C;
L_0898424C:;
    a0 = 0 + 0;
    goto L_08984250;
L_08984250:;
    cnd_ = a0 == 0;
    a2 = sp + 0;
    if (cnd_) { goto L_08984268; }
    goto L_08984258;
L_08984258:;
    v0 = LD32(a0);
    v1 = LD32(v0+52);
    t_ = v1;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08984268;
L_08984268:;
    v0 = 1;
    goto L_0898426C;
L_0898426C:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08984278:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08984244; }
    goto L_08984284;
L_08984284:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08984244; }
    goto L_08984290;
L_08984290:;
    goto L_08984250;
L_08984298:;
    v0 = 0 + 0;
    goto L_0898426C;
L_089842A0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a3 = LD32(a3+4); goto L_08984164; }
    goto L_089842AC;
L_089842AC:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 != 0;
    if (cnd_) { a3 = LD32(a3+4); goto L_08984164; }
    goto L_089842B8;
L_089842B8:;
    goto L_08984170;
}

/* 089842C0 */
void func_089842C0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
L_089842C0:;
    v0 = D_08C2A09C - (-24420);
    a0 = v0 - 24420;
    v1 = 0 + 0;
    goto L_089842CC;
L_089842CC:;
    v1 = v1 + 1;
    v0 = v1 < 0x2u;
    ST32(a0, 0);
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_089842CC; }
    goto L_089842E0;
L_089842E0:;
    return;
}

/* 089842E8 */
rv_t func_089842E8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089842E8:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0898440C; }
    goto L_0898431C;
L_0898431C:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEE54C - (-6836);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-6836));
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
    t0 = D_08C29FDC - (-24612);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C29FEC - (-24596);
    a3 = D_08C29FFC - (-24580);
    v1 = t0 - 24612;
    a1 = v0 - 24596;
    a2 = a3 - 24580;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2A08C - (-24436);
    s0 = s3 - 24436;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-24596, FBITS(f5));
    v0 = 4;
    ST32(t0-24612, FBITS(f1));
    ST32(a3-24580, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089843D4;
L_089843D4:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-24436, v0);
    if (cnd_) { goto L_08984400; }
    goto L_089843E4;
L_089843E4:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089843EC;
L_089843EC:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089843EC; }
    goto L_08984400;
L_08984400:;
    v0 = s3 - 24436;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_0898440C;
L_0898440C:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08984430; }
    goto L_08984420;
L_08984420:;
    v0 = D_08C2A08C - (-24436);
    a0 = LD32(v0-24436);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08984448; }
    goto L_08984430;
L_08984430:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08984448:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08984450;
L_08984450:;
    goto L_08984430;
}

/* 08984458 */
rv_t func_08984458(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08984458:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089842E8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898446C;
L_0898446C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08984478 */
rv_t func_08984478(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08984478:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089842E8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898448C;
L_0898448C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08984498 */
float func_08984498(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08984498:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = 312;
    s3 = a3 + 0;
    s2 = a2 + 0;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089844CC;
L_089844CC:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = s2 + 0;
    t0 = s3 + 0;
    s4 = v0 + 0;
    f0 = func_088539EC(a0, a1, a2, a3, t0);
    goto L_089844E8;
L_089844E8:;
    v0 = D_08C2B1C4 - (-20028);
    v0 = LD32(v0-20028);
    a1 = s4 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0898450C; }
    goto L_089844FC;
L_089844FC:;
    v0 = LD32(v0);
    v1 = LD32(v0+468);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898450C;
L_0898450C:;
    v0 = s4 + 0;
    sp = sp + 32;
    return f0;
}

/* 08984530 */
rv_t func_08984530(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08984530:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = 256;
    s4 = a3 + 0;
    s3 = a2 + 0;
    s2 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08984564;
L_08984564:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = s2 + 0;
    a3 = s3 + 0;
    t0 = s4 + 0;
    { rv_t r_ = func_08852CC4(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08984580;
L_08984580:;
    v0 = s0 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089845A4 */
rv_t func_089845A4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089845A4:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2A0A8 - (-24408);
    t1 = D_08C2A0B8 - (-24392);
    t2 = D_08C2A0C8 - (-24376);
    a1 = a1 & a0;
    v1 = t0 - 24408;
    a2 = t1 - 24392;
    cnd_ = a1 == 0;
    a3 = t2 - 24376;
    if (cnd_) { goto L_0898465C; }
    goto L_089845D4;
L_089845D4:;
    v0 = D_08AEE554 - (-6828);
    f4 = BITSF(LD32(v0-6828));
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
    ST32(t0-24408, FBITS(f2));
    ST32(t1-24392, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-24376, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0898465C;
L_0898465C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08984664 */
rv_t func_08984664(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08984664:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089845A4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08984678;
L_08984678:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08984684 */
rv_t func_08984684(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08984684:;
    sp = sp - 16;
    v0 = D_08AEE55C - (-6820);
    s1 = D_08C2A108 - (-24312);
    s0 = a0 + 0;
    ST8(a0+8, 0);
    ST8(a0+9, 0);
    ST8(a0+10, 0);
    ST8(a0+11, 0);
    f0 = BITSF(LD32(v0-6820));
    v1 = LD_U8(s1-24312);
    v0 = D_08AF9DB0 - (-25168);
    v0 = v0 - 25168;
    ST32(a0, v0);
    ST32(a0+16, FBITS(f0));
    ST32(a0+4, a1);
    ST32(a0+12, FBITS(f0));
    cnd_ = v1 == 0;
    ST32(a0+20, 0);
    if (cnd_) { goto L_089846F8; }
    goto L_089846D8;
L_089846D8:;
    v0 = D_08B1BB9C - (-17508);
    f0 = BITSF(LD32(v0-17508));
    ST32(s0+24, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089846F8:;
    v0 = func_08984708();
    goto L_08984700;
L_08984700:;
    ST8(s1-24312, v0);
    goto L_089846D8;
}

/* 08984708 */
u32 func_08984708(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08984708:;
    sp = sp - 48;
    a0 = 0xd0cd0000u;
    a1 = 0xfd900000u;
    a0 = a0 | 0xc21c;
    a1 = a1 | 0x85c9;
    a2 = sp + 0;
    s4 = D_08B1BBAC - (-17492);
    s3 = D_08B1BBA8 - (-17496);
    s2 = D_08B1BBA4 - (-17500);
    s1 = D_08B1BBA0 - (-17504);
    s0 = D_08B1BB9C - (-17508);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08984750;
L_08984750:;
    a1 = 0xd72c0000u;
    v0 = LD32(sp);
    a1 = a1 | 0x11dc;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08984788; }
    goto L_08984764;
L_08984764:;
    v0 = 1;
    sp = sp + 48;
    return v0;
L_08984788:;
    f12 = BITSF(LD32(s0-17508));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08984790;
L_08984790:;
    f12 = BITSF(LD32(s1-17504));
    a0 = LD32(sp);
    a1 = 0x1f120000u;
    a1 = a1 | 0x3531;
    ST32(s0-17508, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089847A8;
L_089847A8:;
    a1 = 0xb11a0000u;
    f12 = BITSF(LD32(s2-17500));
    a0 = LD32(sp);
    a1 = a1 | 0xaa29;
    ST32(s1-17504, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089847C0;
L_089847C0:;
    a1 = 0xbccb0000u;
    f12 = BITSF(LD32(s3-17496));
    a0 = LD32(sp);
    a1 = a1 | 0x623;
    ST32(s2-17500, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089847D8;
L_089847D8:;
    a1 = 0x430f0000u;
    f12 = BITSF(LD32(s4-17492));
    a0 = LD32(sp);
    a1 = a1 | 0x6c7;
    ST32(s3-17496, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089847F0;
L_089847F0:;
    ST32(s4-17492, FBITS(f0));
    goto L_08984764;
}

/* 089847F8 */
rv_t func_089847F8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089847F8:;
    sp = sp - 32;
    v1 = 0 + 0;
    s2 = 0 + 0;
    v0 = LD_U8(a0+11);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08984844; }
    goto L_08984824;
L_08984824:;
    goto L_08984828;
L_08984828:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08984844:;
    v0 = LD32(a0+4);
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+388);
    t_ = v0;
    s1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898485C;
L_0898485C:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+4); goto L_089848E4; }
    goto L_08984864;
L_08984864:;
    v0 = D_08B285A0 - (-31328);
    v1 = D_08B1BBAC - (-17492);
    a1 = LD32(s0+4);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(v1-17492));
    a0 = a1 + 0;
    cnd_ = a1 != 0;
    f20 = f0 * f1;
    if (cnd_) { goto L_0898488C; }
    goto L_08984884;
L_08984884:;
    v1 = s1 + 0;
    goto L_08984824;
L_0898488C:;
    v0 = LD32(a1);
    v1 = LD32(v0+344);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898489C;
L_0898489C:;
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    v1 = s1 + 0;
    if (cnd_) { goto L_08984824; }
    goto L_089848AC;
L_089848AC:;
    v0 = D_08AEE560 - (-6816);
    f0 = BITSF(LD32(s0+12));
    f1 = BITSF(LD32(v0-6816));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08984828; }
    goto L_089848C8;
L_089848C8:;
    a0 = LD32(s0+4);
    { u64 r_ = func_089DD748(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089848D0;
L_089848D0:;
    cnd_ = v0 != 0;
    v1 = s2 < 0x1u;
    if (cnd_) { goto L_08984884; }
    goto L_089848D8;
L_089848D8:;
    v0 = LD_U8(s0+8);
    if (v0 == 0) s1 = v1;
    goto L_08984884;
L_089848E4:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+388);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089848F8;
L_089848F8:;
    v1 = LD32(v0);
    v1 = v1 ^ 0x1;
    s2 = v1 < 0x1u;
    goto L_08984864;
}

/* 08984908 */
float func_08984908(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08984908:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0898492C; }
    goto L_08984920;
L_08984920:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0898493C; }
    goto L_0898492C;
L_0898492C:;
    goto L_08984930;
L_08984930:;
    sp = sp + 16;
    return f0;
L_0898493C:;
    { rv_t r_ = func_089847F8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08984944;
L_08984944:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0898492C; }
    goto L_08984950;
L_08984950:;
    v0 = 1;
    ST8(s0+8, v0);
    f0 = func_08984A0C(a0, a1, 0, 0);
    goto L_0898495C;
L_0898495C:;
    goto L_08984930;
}

/* 08984964 */
float func_08984964(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08984964:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08984988; }
    goto L_08984978;
L_08984978:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08984990; }
    goto L_08984984;
L_08984984:;
    goto L_08984988;
L_08984988:;
    sp = sp + 16;
    return f0;
L_08984990:;
    ST8(a0+8, 0);
    f0 = func_08984A0C(a0, a1, t2, t3);
    goto L_08984998;
L_08984998:;
    goto L_08984988;
}

/* 089849A0 */
void func_089849A0(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089849A0:;
    sp = sp - 16;
    s0 = a0 + 0;
    v1 = LD_U8(a0+8);
    v0 = LD_U8(a0+9);
    a0 = v1 & 0xff;
    cnd_ = a0 == v0;
    if (cnd_) { ST8(s0+9, v1); goto L_089849E4; }
    goto L_089849C4;
L_089849C4:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089849F4; }
    goto L_089849CC;
L_089849CC:;
    a0 = LD32(s0+4);
    { u64 r_ = func_08A556D8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089849D4;
L_089849D4:;
    a0 = LD32(s0+4);
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089849DC;
L_089849DC:;
    v1 = LD_U8(s0+8);
    goto L_089849E0;
L_089849E0:;
    ST8(s0+9, v1);
    goto L_089849E4;
L_089849E4:;
    sp = sp + 16;
    return;
L_089849F4:;
    a0 = LD32(s0+4);
    { rv_t r_ = func_08A5562C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089849FC;
L_089849FC:;
    a0 = LD32(s0+4);
    { rv_t r_ = func_08A58154(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08984A04;
L_08984A04:;
    v1 = LD_U8(s0+8);
    goto L_089849E0;
}
