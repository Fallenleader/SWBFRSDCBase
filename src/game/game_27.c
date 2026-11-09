#include "game.h"

/* 08A68A40 */
float func_08A68A40(u32 a0, float f12)
{
    u32 v0 = 0;
    float f0 = 0;
    int cnd_;
L_08A68A40:;
    v0 = LD32(a0+80);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A68A58; }
    goto L_08A68A4C;
L_08A68A4C:;
    f0 = BITSF(LD32(v0));
    f0 = f0 * f12;
    ST32(a0+68, FBITS(f0));
    goto L_08A68A58;
L_08A68A58:;
    return f0;
}

/* 08A68A60 */
void func_08A68A60(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A68A60:;
    a0 = D_08B1CAA0 - (-13664);
    sp = sp - 16;
    v0 = D_08C3176C - (5996);
    v1 = D_08C31774 - (6004);
    a0 = a0 - 13664;
    a1 = 3;
    ST32(v0+5996, 0);
    ST32(v1+6004, 0);
    func_088EB0CC(a0, a1);
    goto L_08A68A88;
L_08A68A88:;
    sp = sp + 16;
    return;
}

/* 08A68A94 */
void func_08A68A94(u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A68A94:;
    sp = sp - 16;
    func_08A68AC0(t1, t2, t3);
    goto L_08A68AA4;
L_08A68AA4:;
    a0 = D_08B1CAA0 - (-13664);
    a0 = a0 - 13664;
    a1 = 3;
    func_088EB124(a0, a1);
    goto L_08A68AB4;
L_08A68AB4:;
    sp = sp + 16;
    return;
}

/* 08A68AC0 */
void func_08A68AC0(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A68AC0:;
    sp = sp - 32;
    s3 = D_08C31774 - (6004);
    v0 = LD32(s3+6004);
    s4 = D_08C3176C - (5996);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A68B3C; }
    goto L_08A68AEC;
L_08A68AEC:;
    v0 = LD32(s4+5996);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A68B28; }
    goto L_08A68AF8;
L_08A68AF8:;
    v1 = LD32(s3+6004);
    s1 = s2 << 2;
    s2 = s2 + 1;
    v0 = s1 + v1;
    s0 = LD32(v0);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A68B70; }
    goto L_08A68B14;
L_08A68B14:;
    v0 = LD32(s4+5996);
    v1 = s1 + v1;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    ST32(v1, 0);
    if (cnd_) { goto L_08A68AF8; }
    goto L_08A68B28;
L_08A68B28:;
    a0 = LD32(s3+6004);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A68B60; }
    goto L_08A68B34;
L_08A68B34:;
    v0 = D_08C31774 - (6004);
    goto L_08A68B38;
L_08A68B38:;
    ST32(v0+6004, 0);
    goto L_08A68B3C;
L_08A68B3C:;
    ST32(s4+5996, 0);
    sp = sp + 32;
    return;
L_08A68B60:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A68B68;
L_08A68B68:;
    v0 = D_08C31774 - (6004);
    goto L_08A68B38;
L_08A68B70:;
    func_08A66F20(a0);
    goto L_08A68B78;
L_08A68B78:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A68B80;
L_08A68B80:;
    v1 = LD32(s3+6004);
    goto L_08A68B14;
}

/* 08A68B88 */
u32 func_08A68B88(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A68B88:;
    sp = sp - 16;
    a3 = LD32(a0+684);
    t0 = (u32)-1;
    a1 = a3 + 0;
    goto L_08A68B9C;
L_08A68B9C:;
    v0 = a1 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0+84);
    v0 = a1 + 1;
    a1 = v0 < 0x96u;
    cnd_ = v1 == t0;
    a2 = 1;
    if (cnd_) { goto L_08A68BDC; }
    goto L_08A68BB8;
L_08A68BB8:;
    cnd_ = a1 != 0;
    ST32(a0+684, v0);
    if (cnd_) { goto L_08A68BC4; }
    goto L_08A68BC0;
L_08A68BC0:;
    ST32(a0+684, 0);
    goto L_08A68BC4;
L_08A68BC4:;
    v0 = LD32(a0+684);
    cnd_ = v0 != a3;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A68B9C; }
    goto L_08A68BD0;
L_08A68BD0:;
    a1 = 0 + 0;
    func_08A67594(a0, a1);
    goto L_08A68BD8;
L_08A68BD8:;
    a2 = 0 + 0;
    goto L_08A68BDC;
L_08A68BDC:;
    v0 = a2 + 0;
    sp = sp + 16;
    return v0;
}

/* 08A68BEC */
rv_t func_08A68BEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A68BEC:;
    sp = sp - 64;
    s4 = D_08C3176C - (5996);
    v0 = t1 < 0x1u;
    v1 = LD32(s4+5996);
    ST32(sp, a0);
    a0 = t0 < 0x1u;
    v1 = v1 < 0x20u;
    v1 = v1 & 0xff;
    v0 = v0 | a0;
    s7 = a3 & 0xff;
    s6 = a2 + 0;
    s5 = a1 + 0;
    a1 = 0 + 0;
    s3 = t0 + 0;
    s2 = t1 + 0;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A68D00; }
    goto L_08A68C54;
L_08A68C54:;
    cnd_ = v0 != 0;
    fp = D_08C31774 - (6004);
    if (cnd_) { goto L_08A68D00; }
    goto L_08A68C5C;
L_08A68C5C:;
    v0 = LD32(fp+6004);
    cnd_ = v0 != 0;
    a0 = 128;
    if (cnd_) { goto L_08A68C80; }
    goto L_08A68C68;
L_08A68C68:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A68C70;
L_08A68C70:;
    ST32(fp+6004, v0);
    cnd_ = v0 == 0;
    a1 = (u32)-1;
    if (cnd_) { goto L_08A68D00; }
    goto L_08A68C7C;
L_08A68C7C:;
    ST32(s4+5996, 0);
    goto L_08A68C80;
L_08A68C80:;
    a1 = D_08C31770 - (6000);
    v0 = LD32(a1+6000);
    s0 = LD32(s4+5996);
    v1 = LD32(fp+6004);
    ST32(sp+4, v0);
    a0 = 704;
    v0 = v0 + 1;
    s0 = s0 << 2;
    s0 = s0 + v1;
    ST32(a1+6000, v0);
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A68CAC;
L_08A68CAC:;
    a0 = v0 + 0;
    a1 = LD32(sp);
    a3 = LD32(sp+4);
    a2 = s5 + 0;
    t0 = s6 + 0;
    t1 = s7 + 0;
    t2 = s3 + 0;
    t3 = s2 + 0;
    s1 = v0 + 0;
    f0 = func_08A66DC4(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A68CD4;
L_08A68CD4:;
    a0 = LD32(s4+5996);
    v1 = LD32(fp+6004);
    ST32(s0, s1);
    v0 = a0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    a0 = a0 + 1;
    cnd_ = v1 == 0;
    a1 = (u32)-1;
    if (cnd_) { goto L_08A68D00; }
    goto L_08A68CF8;
L_08A68CF8:;
    ST32(s4+5996, a0);
    a1 = LD32(sp+4);
    goto L_08A68D00;
L_08A68D00:;
    v0 = a1 + 0;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
}

/* 08A68D34 */
rv_t func_08A68D34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_08A68D34:;
    sp = sp - 80;
    s4 = D_08C3176C - (5996);
    v0 = t0 < 0x1u;
    v1 = LD32(s4+5996);
    fp = a0 + 0;
    v1 = v1 < 0x20u;
    a0 = a3 < 0x1u;
    v1 = v1 & 0xff;
    v0 = v0 | a0;
    s6 = a2 & 0xff;
    s5 = a1 + 0;
    a1 = 0 + 0;
    s3 = a3 + 0;
    s2 = t0 + 0;
    f20 = f12;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A68E4C; }
    goto L_08A68DA0;
L_08A68DA0:;
    cnd_ = v0 != 0;
    s7 = D_08C31774 - (6004);
    if (cnd_) { goto L_08A68E4C; }
    goto L_08A68DA8;
L_08A68DA8:;
    v0 = LD32(s7+6004);
    cnd_ = v0 != 0;
    a0 = 128;
    if (cnd_) { goto L_08A68DCC; }
    goto L_08A68DB4;
L_08A68DB4:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A68DBC;
L_08A68DBC:;
    ST32(s7+6004, v0);
    cnd_ = v0 == 0;
    a1 = (u32)-1;
    if (cnd_) { goto L_08A68E4C; }
    goto L_08A68DC8;
L_08A68DC8:;
    ST32(s4+5996, 0);
    goto L_08A68DCC;
L_08A68DCC:;
    a1 = D_08C31770 - (6000);
    v0 = LD32(a1+6000);
    s0 = LD32(s4+5996);
    v1 = LD32(s7+6004);
    ST32(sp, v0);
    a0 = 704;
    v0 = v0 + 1;
    s0 = s0 << 2;
    s0 = s0 + v1;
    ST32(a1+6000, v0);
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A68DF8;
L_08A68DF8:;
    a0 = v0 + 0;
    a2 = LD32(sp);
    a1 = fp + 0;
    f12 = f20;
    a3 = s5 + 0;
    t0 = s6 + 0;
    t1 = s3 + 0;
    t2 = s2 + 0;
    s1 = v0 + 0;
    f0 = func_08A66E70(a0, a1, a2, a3, t0, t1, t2, f12);
    goto L_08A68E20;
L_08A68E20:;
    a0 = LD32(s4+5996);
    v1 = LD32(s7+6004);
    ST32(s0, s1);
    v0 = a0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    a0 = a0 + 1;
    cnd_ = v1 == 0;
    a1 = (u32)-1;
    if (cnd_) { goto L_08A68E4C; }
    goto L_08A68E44;
L_08A68E44:;
    ST32(s4+5996, a0);
    a1 = LD32(sp);
    goto L_08A68E4C;
L_08A68E4C:;
    v0 = a1 + 0;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
}

/* 08A68E84 */
void func_08A68E84(u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A68E84:;
    sp = sp - 32;
    s3 = D_08C31774 - (6004);
    v0 = LD32(s3+6004);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A68EBC; }
    goto L_08A68EAC;
L_08A68EAC:;
    s4 = D_08C3176C - (5996);
    v0 = LD32(s4+5996);
    cnd_ = v0 != 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A68EDC; }
    goto L_08A68EBC;
L_08A68EBC:;
    goto L_08A68EC0;
L_08A68EC0:;
    sp = sp + 32;
    return;
L_08A68EDC:;
    v0 = LD32(s3+6004);
    goto L_08A68EE0;
L_08A68EE0:;
    s1 = s2 << 2;
    v0 = s1 + v0;
    a0 = LD32(v0);
    func_08A675C8(a0, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A68EF0;
L_08A68EF0:;
    a2 = LD32(s3+6004);
    v0 = s1 + a2;
    s0 = LD32(v0);
    v1 = LD_U8(s0+72);
    cnd_ = v1 == 0;
    if (cnd_) { s2 = s2 + 1; goto L_08A68F44; }
    goto L_08A68F08;
L_08A68F08:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A68F24; }
    goto L_08A68F10;
L_08A68F10:;
    func_08A66F20(a0);
    goto L_08A68F18;
L_08A68F18:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A68F20;
L_08A68F20:;
    a2 = LD32(s3+6004);
    goto L_08A68F24;
L_08A68F24:;
    v1 = LD32(s4+5996);
    a1 = s1 + a2;
    v1 = v1 - 1;
    v0 = v1 << 2;
    v0 = v0 + a2;
    a0 = LD32(v0);
    ST32(s4+5996, v1);
    ST32(a1, a0);
    goto L_08A68F44;
L_08A68F44:;
    v0 = LD32(s4+5996);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    v0 = LD32(s3+6004);
    if (cnd_) { goto L_08A68EE0; }
    goto L_08A68F54;
L_08A68F54:;
    goto L_08A68EC0;
}

/* 08A68F5C */
u32 func_08A68F5C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_08A68F5C:;
    v0 = D_08C31774 - (6004);
    a1 = LD32(v0+6004);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A68FA4; }
    goto L_08A68F6C;
L_08A68F6C:;
    v0 = D_08C3176C - (5996);
    v0 = LD32(v0+5996);
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A68FA4; }
    goto L_08A68F7C;
L_08A68F7C:;
    t0 = v0 + 0;
    v1 = LD32(a1);
    goto L_08A68F84;
L_08A68F84:;
    a3 = a3 + 1;
    a2 = a3 < t0;
    v0 = LD32(v1+64);
    cnd_ = v0 == a0;
    a1 = a1 + 4;
    if (cnd_) { goto L_08A68FA4; }
    goto L_08A68F98;
L_08A68F98:;
    cnd_ = a2 != 0;
    if (cnd_) { v1 = LD32(a1); goto L_08A68F84; }
    goto L_08A68FA0;
L_08A68FA0:;
    v1 = 0 + 0;
    goto L_08A68FA4;
L_08A68FA4:;
    v0 = v1 + 0;
    return v0;
}

/* 08A68FAC */
rv_t func_08A68FAC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A68FAC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C3173C - (5948);
    t1 = D_08C3174C - (5964);
    t2 = D_08C3175C - (5980);
    a1 = a1 & a0;
    v1 = t0 + 5948;
    a2 = t1 + 5964;
    cnd_ = a1 == 0;
    a3 = t2 + 5980;
    if (cnd_) { goto L_08A69064; }
    goto L_08A68FDC;
L_08A68FDC:;
    v0 = D_08AF08B8 - (2232);
    f4 = BITSF(LD32(v0+2232));
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
    ST32(t0+5948, FBITS(f2));
    ST32(t1+5964, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+5980, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A69064;
L_08A69064:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A6906C */
rv_t func_08A6906C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6906C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A68FAC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A69080;
L_08A69080:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A6908C */
void func_08A6908C(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6908C:;
    sp = sp - 32;
    func_08A69100(a2, a3, t0, t1, t2, t3);
    goto L_08A6909C;
L_08A6909C:;
    a1 = 0 + 0;
    a0 = 160;
    v0 = func_0897A064(a0, a1);
    goto L_08A690A8;
L_08A690A8:;
    a0 = v0 + 0;
    func_0890E14C(a0, 0, 0);
    goto L_08A690B0;
L_08A690B0:;
    a0 = sp + 0;
    v0 = sceRtcGetCurrentTick(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A690B8;
L_08A690B8:;
    a0 = D_08B25AC8 - (23240);
    cnd_ = (s32)v0 < 0;
    a1 = a0 + 23240;
    if (cnd_) { goto L_08A690E0; }
    goto L_08A690C4;
L_08A690C4:;
    v1 = LD32(sp);
    v0 = ~(0 | v1);
    ST32(a0+23240, v0);
    ST32(a1+4, v1);
    goto L_08A690D4;
L_08A690D4:;
    sp = sp + 32;
    return;
L_08A690E0:;
    v0 = sceKernelGetSystemTimeLow(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A690E8;
L_08A690E8:;
    v1 = D_08B25AC8 - (23240);
    a0 = ~(0 | v0);
    a1 = v1 + 23240;
    ST32(v1+23240, a0);
    ST32(a1+4, v0);
    goto L_08A690D4;
}

/* 08A69100 */
void func_08A69100(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A69100:;
    a0 = D_08AE6A78 - (27256);
    sp = sp - 16;
    a0 = a0 + 27256;
    a1 = 1;
    v0 = func_0883A868(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A69118;
L_08A69118:;
    a0 = D_08AE6A8C - (27276);
    a1 = 1;
    a0 = a0 + 27276;
    v0 = func_0883A868(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08A69128;
L_08A69128:;
    a0 = D_08AE6AB0 - (27312);
    a0 = a0 + 27312;
    { rv_t r_ = func_08827B7C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A69134;
L_08A69134:;
    sp = sp + 16;
    return;
}

/* 08A69140 */
void func_08A69140(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08A69140:;
    v0 = D_08B1CBBC - (-13380);
    v1 = LD_U8(v0-13380);
    cnd_ = v1 == 0;
    v0 = D_08B285CC - (-31284);
    if (cnd_) { goto L_08A69164; }
    goto L_08A69150;
L_08A69150:;
    v0 = D_08B1CBB8 - (-13384);
    f0 = BITSF(LD32(v0-13384));
    v1 = D_08B285CC - (-31284);
    ST32(v1-31284, FBITS(f0));
    return;
L_08A69164:;
    ST32(v0-31284, 0);
    return;
}

/* 08A6916C */
void func_08A6916C(u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6916C:;
    sp = sp - 16;
    func_0890E1CC(t1, t2, t3);
    goto L_08A6917C;
L_08A6917C:;
    sp = sp + 16;
    return;
}

/* 08A69188 */
void func_08A69188(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0, f22 = 0;
    int cnd_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_08A69188:;
    sp = sp - 128;
    v0 = D_08AF08BC - (2236);
    a2 = a2 & 0xff;
    fp = D_08B285A4 - (-31324);
    s7 = a0 + 0;
    a0 = 1;
    s6 = a1 & 0xff;
    s5 = D_08AF08C0 - (2240);
    s4 = D_08AF08C4 - (2244);
    s3 = 0xff000000u;
    s2 = (u32)-1;
    s1 = 0 + 0;
    f22 = f12;
    f20 = BITSF(LD32(v0+2236));
    ST32(sp+48, a2);
    f21 = BITSF(LD32(fp-31324));
    ST32(fp-31324, FBITS(f20));
    func_088D5A34(a0);
    goto L_08A69204;
L_08A69204:;
    func_088DA7D0();
    goto L_08A6920C;
L_08A6920C:;
    v0 = D_08B2C12C - (-16084);
    s0 = v0 - 16084;
    goto L_08A69214;
L_08A69214:;
    s1 = s1 + 1;
    func_088CF2F8(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A6921C;
L_08A6921C:;
    f12 = BITSF(0);
    ST32(s0+64, s3);
    a0 = s0 + 0;
    f13 = f12;
    f14 = f20;
    f15 = f20;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_08A69238;
L_08A69238:;
    f12 = BITSF(0);
    f14 = BITSF(LD32(s5+2240));
    f15 = BITSF(LD32(s4+2244));
    ST32(s0+80, s2);
    f13 = f12;
    a0 = s0 + 0;
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_08A69254;
L_08A69254:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A69260;
L_08A69260:;
    { u64 r_ = func_088CF370(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A69268;
L_08A69268:;
    v0 = s1 < 0x3u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A69214; }
    goto L_08A69274;
L_08A69274:;
    cnd_ = s6 != 0;
    if (cnd_) { goto L_08A693CC; }
    goto L_08A6927C;
L_08A6927C:;
    a0 = 37;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A69284;
L_08A69284:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A69308; }
    goto L_08A6928C;
L_08A6928C:;
    s2 = 0 + 0;
    v0 = func_088342CC();
    goto L_08A69294;
L_08A69294:;
    a1 = D_08AE6AC0 - (27328);
    a1 = a1 + 27328;
    t0 = v0 + 0;
    a2 = 37;
    a3 = 1;
    t1 = s7 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A692B4;
L_08A692B4:;
    a0 = s0 + 0;
    v0 = func_088FB58C(a0, 0, 0);
    goto L_08A692BC;
L_08A692BC:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A69380; }
    goto L_08A692C8;
L_08A692C8:;
    v0 = RS_FADDR(func_08849A70, 0x08849A70u) - (-26000);
    goto L_08A692CC;
L_08A692CC:;
    cnd_ = s6 != 0;
    a3 = v0 - 26000;
    if (cnd_) { goto L_08A692D8; }
    goto L_08A692D4;
L_08A692D4:;
    a3 = 0 + 0;
    goto L_08A692D8;
L_08A692D8:;
    v0 = D_08C2933C - (-27844);
    v0 = v0 - 27844;
    v1 = D_08B1CBB4 - (-13388);
    f13 = BITSF(LD32(v0+148));
    f0 = BITSF(LD32(v1-13388));
    t0 = LD32(sp+48);
    a1 = s2 + 0;
    f13 = f13 * f0;
    a2 = s1 + 0;
    f12 = f22;
    a0 = s0 + 0;
    func_088FDF44(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A69308;
L_08A69308:;
    cnd_ = s6 != 0;
    if (cnd_) { goto L_08A69370; }
    goto L_08A69310;
L_08A69310:;
    func_088DA848();
    goto L_08A69318;
L_08A69318:;
    func_088D5B08();
    goto L_08A69320;
L_08A69320:;
    cnd_ = s0 == 0;
    if (cnd_) { ST32(fp-31324, FBITS(f21)); goto L_08A69334; }
    goto L_08A69328;
L_08A69328:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A69330;
L_08A69330:;
    ST32(fp-31324, FBITS(f21));
    goto L_08A69334;
L_08A69334:;
    sp = sp + 128;
    return;
L_08A69370:;
    func_08849954(0, 0, 0);
    goto L_08A69378;
L_08A69378:;
    goto L_08A69310;
L_08A69380:;
    a1 = D_08AE6AD0 - (27344);
    a1 = a1 + 27344;
    t0 = s7 + 0;
    a0 = s0 + 0;
    a2 = 37;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6939C;
L_08A6939C:;
    v0 = func_088342C0();
    goto L_08A693A4;
L_08A693A4:;
    v0 = v0 - 1;
    v0 = v0 < 0x4u;
    cnd_ = v0 == 0;
    v0 = RS_FADDR(func_08849A70, 0x08849A70u) - (-26000);
    if (cnd_) { goto L_08A692CC; }
    goto L_08A693B4;
L_08A693B4:;
    v0 = func_088342C0();
    goto L_08A693BC;
L_08A693BC:;
    s2 = v0 + 0;
    v0 = func_088342C0();
    goto L_08A693C4;
L_08A693C4:;
    s1 = v0 + 0;
    goto L_08A692C8;
L_08A693CC:;
    func_0884994C();
    goto L_08A693D4;
L_08A693D4:;
    a1 = D_08AE6ADC - (27356);
    a1 = a1 + 27356;
    a2 = 42;
    a3 = 1;
    t0 = s7 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A693F0;
L_08A693F0:;
    a0 = sp + 0;
    v0 = func_088FB58C(a0, 0, 0);
    goto L_08A693F8;
L_08A693F8:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A6940C; }
    goto L_08A69404;
L_08A69404:;
    s6 = 0 + 0;
    goto L_08A6927C;
L_08A6940C:;
    a1 = 0 + 0;
    { rv_t r_ = func_08827BEC(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A69414;
L_08A69414:;
    goto L_08A6927C;
}

/* 08A6941C */
void func_08A6941C(void)
{
L_08A6941C:;
    return;
}

/* 08A69424 */
u32 func_08A69424(u32 a0, u32 a1, u32 a2, u32 a3, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[1072] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 1072);
L_08A69424:;
    sp = sp - 1072;
    s4 = sp + 256;
    s7 = a1 + 0;
    a1 = 256;
    s3 = a3 + 0;
    a3 = 0 + 0;
    ST32(sp+1012, a2);
    a2 = s4 + 0;
    s5 = 1;
    s2 = sp + 512;
    ST32(sp+1008, a0);
    func_088FCA60(a0, a1, a2, a3, t2, t3);
    goto L_08A6947C;
L_08A6947C:;
    a0 = s4 + 0;
    a1 = 1;
    v0 = func_088FC3FC(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A69488;
L_08A69488:;
    s1 = v0 + 0;
    a0 = s1 + 0;
    goto L_08A69490;
L_08A69490:;
    a1 = s2 + 0;
    a2 = 1;
    v0 = func_088FC530(a0, a1, a2);
    goto L_08A6949C;
L_08A6949C:;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { goto L_08A696E4; }
    goto L_08A694A4;
L_08A694A4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A696E4; }
    goto L_08A694AC;
L_08A694AC:;
    v0 = (u32)-88;
    cnd_ = s2 == v0;
    if (cnd_) { goto L_08A694D0; }
    goto L_08A694B8;
L_08A694B8:;
    s0 = sp + 600;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A694C4;
L_08A694C4:;
    v0 = v0 < 0x3u;
    cnd_ = v0 == 0;
    t0 = LD32(sp+1008);
    if (cnd_) { goto L_08A6950C; }
    goto L_08A694D0;
L_08A694D0:;
    cnd_ = s5 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_08A69490; }
    goto L_08A694D8;
L_08A694D8:;
    v0 = s3 + 0;
    goto L_08A694DC;
L_08A694DC:;
    sp = sp + 1072;
    return v0;
L_08A6950C:;
    v0 = D_08AE6AEC - (27372);
    t1 = s0 + 0;
    a1 = v0 + 27372;
    a2 = 256;
    a3 = 1;
    a0 = sp + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A69528;
L_08A69528:;
    a0 = sp + 0;
    a1 = 256;
    a2 = s4 + 0;
    a3 = 0 + 0;
    func_088FCA60(a0, a1, a2, a3, 0, 0);
    goto L_08A6953C;
L_08A6953C:;
    a0 = s4 + 0;
    a1 = sp + 864;
    func_088FBE70(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A69548;
L_08A69548:;
    v1 = LD32(sp+864);
    v0 = v1 & 0x2000;
    cnd_ = v0 != 0;
    v0 = v1 & 0x1000;
    if (cnd_) { goto L_08A69578; }
    goto L_08A69558;
L_08A69558:;
    cnd_ = v0 == 0;
    a2 = LD32(sp+1012);
    if (cnd_) { goto L_08A694D0; }
    goto L_08A69560;
L_08A69560:;
    a3 = s3 + 0;
    a0 = sp + 0;
    a1 = s7 + 0;
    v0 = func_08A69424(a0, a1, a2, a3, 0, 0);
    goto L_08A69570;
L_08A69570:;
    s3 = v0 + 0;
    goto L_08A694D0;
L_08A69578:;
    a0 = sp + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A69580;
L_08A69580:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+964, v0);
    ST32(sp+968, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A69594;
L_08A69594:;
    cnd_ = v0 != 0;
    ST32(sp+960, v0);
    if (cnd_) { goto L_08A696D0; }
    goto L_08A6959C;
L_08A6959C:;
    ST32(sp+968, 0);
    ST32(sp+964, 0);
    fp = sp + 976;
    goto L_08A695A8;
L_08A695A8:;
    s6 = sp + 992;
    a0 = sp + 960;
    a1 = 0 + 0;
    a2 = fp + 0;
    a3 = s6 + 0;
    ST32(sp+976, 0);
    ST32(sp+980, 0);
    ST32(sp+984, 0);
    ST32(sp+992, 0);
    ST32(sp+996, 0);
    ST32(sp+1000, 0);
    func_08ABA058(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A695D8;
L_08A695D8:;
    v0 = D_08AE6AF4 - (27380);
    a0 = LD32(sp+992);
    a1 = v0 + 27380;
    a2 = 0 + 0;
    { u64 r_ = func_08838148(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A695EC;
L_08A695EC:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = LD32(sp+992);
    if (cnd_) { goto L_08A696AC; }
    goto L_08A695F8;
L_08A695F8:;
    cnd_ = s7 == 0;
    s0 = s3 << 9;
    if (cnd_) { goto L_08A69640; }
    goto L_08A69600;
L_08A69600:;
    s0 = s7 + s0;
    a0 = s0 + 0;
    a1 = D_08AE6AF8 - (27384);
    a1 = a1 + 27384;
    a2 = 256;
    a3 = 1;
    t0 = sp + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A69620;
L_08A69620:;
    t0 = LD32(sp+976);
    s0 = s0 + 256;
    a0 = s0 + 0;
    a1 = D_08AE6AF8 - (27384);
    a1 = a1 + 27384;
    a2 = 256;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A69640;
L_08A69640:;
    s3 = s3 + 1;
    a0 = LD32(sp+992);
    goto L_08A69648;
L_08A69648:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A6969C; }
    goto L_08A69650;
L_08A69650:;
    a0 = LD32(sp+976);
    ST32(s6+4, 0);
    cnd_ = a0 != 0;
    ST32(s6+8, 0);
    if (cnd_) { goto L_08A6968C; }
    goto L_08A69660;
L_08A69660:;
    a0 = LD32(sp+960);
    ST32(fp+4, 0);
    cnd_ = a0 != 0;
    ST32(fp+8, 0);
    if (cnd_) { goto L_08A6967C; }
    goto L_08A69670;
L_08A69670:;
    ST32(sp+964, 0);
    ST32(sp+968, 0);
    goto L_08A694D0;
L_08A6967C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A69684;
L_08A69684:;
    ST32(sp+960, 0);
    goto L_08A69670;
L_08A6968C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A69694;
L_08A69694:;
    ST32(sp+976, 0);
    goto L_08A69660;
L_08A6969C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A696A4;
L_08A696A4:;
    ST32(sp+992, 0);
    goto L_08A69650;
L_08A696AC:;
    v0 = D_08AE6AFC - (27388);
    a1 = v0 + 27388;
    a2 = 0 + 0;
    { u64 r_ = func_08838148(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A696BC;
L_08A696BC:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = LD32(sp+992);
    if (cnd_) { goto L_08A69648; }
    goto L_08A696C8;
L_08A696C8:;
    goto L_08A695F8;
L_08A696D0:;
    a0 = v0 + 0;
    a1 = sp + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A696DC;
L_08A696DC:;
    fp = sp + 976;
    goto L_08A695A8;
L_08A696E4:;
    a0 = s1 + 0;
    func_088FC6CC(a0, 0, 0, 0, 0, 0);
    goto L_08A696EC;
L_08A696EC:;
    v0 = s3 + 0;
    goto L_08A694DC;
}

/* 08A696F4 */
void func_08A696F4(u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A696F4:;
    sp = sp - 16;
    s0 = D_08AE6B00 - (27392);
    s0 = s0 + 27392;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    a0 = s0 + 0;
    v0 = func_08A69424(a0, a1, a2, a3, t2, t3);
    goto L_08A69720;
L_08A69720:;
    a0 = v0 << 9;
    s1 = v0 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6972C;
L_08A6972C:;
    v1 = D_08C291F0 - (-28176);
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = s1 + 0;
    ST32(v1-28176, v0);
    a3 = 0 + 0;
    v0 = D_08C291F4 - (-28172);
    ST32(v0-28172, s1);
    v0 = func_08A69424(a0, a1, a2, a3, 0, 0);
    goto L_08A69750;
L_08A69750:;
    sp = sp + 16;
    return;
}

/* 08A69764 */
void func_08A69764(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f20 = 0, f21 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A69764:;
    sp = sp - 48;
    v0 = D_08AF08CC - (2252);
    v1 = D_08AF08C8 - (2248);
    f0 = BITSF(0);
    f20 = BITSF(LD32(v1+2248));
    f21 = BITSF(LD32(v0+2252));
    ST32(sp+12, FBITS(f0));
    f12 = f21;
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f20));
    ST32(sp+4, FBITS(f20));
    func_0881CB7C(f12);
    goto L_08A697A0;
L_08A697A0:;
    a0 = sp + 0;
    func_0881D318(a0);
    goto L_08A697A8;
L_08A697A8:;
    f12 = f21;
    func_0881CB7C(f12);
    goto L_08A697B0;
L_08A697B0:;
    v0 = D_08AF08D0 - (2256);
    f12 = BITSF(LD32(v0+2256));
    f13 = f20;
    { rv_t r_ = func_0881D084(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A697C0;
L_08A697C0:;
    sp = sp + 48;
    return;
}

/* 08A697D4 */
void func_08A697D4(void)
{
L_08A697D4:;
    return;
}

/* 08A697DC */
rv_t func_08A697DC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A697DC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C31778 - (6008);
    t1 = D_08C31788 - (6024);
    t2 = D_08C31798 - (6040);
    a1 = a1 & a0;
    v1 = t0 + 6008;
    a2 = t1 + 6024;
    cnd_ = a1 == 0;
    a3 = t2 + 6040;
    if (cnd_) { goto L_08A69894; }
    goto L_08A6980C;
L_08A6980C:;
    v0 = D_08AF08D4 - (2260);
    f4 = BITSF(LD32(v0+2260));
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
    ST32(t0+6008, FBITS(f2));
    ST32(t1+6024, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+6040, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A69894;
L_08A69894:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A6989C */
rv_t func_08A6989C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6989C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A697DC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A698B0;
L_08A698B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A698BC */
void func_08A698BC(void)
{
L_08A698BC:;
    return;
}

/* 08A698C4 */
void func_08A698C4(void)
{
L_08A698C4:;
    return;
}

/* 08A698CC */
void func_08A698CC(void)
{
L_08A698CC:;
    return;
}

/* 08A698D4 */
void func_08A698D4(void)
{
L_08A698D4:;
    return;
}

/* 08A698DC */
void func_08A698DC(void)
{
L_08A698DC:;
    return;
}

/* 08A698E4 */
void func_08A698E4(void)
{
L_08A698E4:;
    return;
}

/* 08A698EC */
void func_08A698EC(void)
{
L_08A698EC:;
    return;
}

/* 08A698F4 */
void func_08A698F4(void)
{
L_08A698F4:;
    return;
}

/* 08A698FC */
u32 func_08A698FC(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a0 = 0, a1 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A698FC:;
    sp = sp - 32;
    a0 = 8;
    a1 = sp + 0;
    v0 = sceUtilityGetSystemParamInt(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A69910;
L_08A69910:;
    v0 = 6;
    sp = sp + 32;
    return v0;
}

/* 08A69920 */
u32 func_08A69920(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A69920:;
    a0 = D_08AE6B08 - (27400);
    sp = sp - 16;
    a0 = a0 + 27400;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A69934;
L_08A69934:;
    sp = sp + 16;
    return v0;
}

/* 08A69940 */
float func_08A69940(void)
{
    u32 v0 = 0;
    float f0 = 0;
L_08A69940:;
    v0 = D_08AF08D8 - (2264);
    f0 = BITSF(LD32(v0+2264));
    return f0;
}

/* 08A6994C */
void func_08A6994C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A6994C:;
    v0 = D_08AF08E8 - (2280);
    f0 = BITSF(LD32(v0+2280));
    v1 = D_08AF08DC - (2268);
    v0 = 68;
    ST32(a0+12, FBITS(f0));
    f0 = BITSF(LD32(v1+2268));
    ST32(a1, v0);
    v0 = D_08AF08E0 - (2272);
    ST32(a0, FBITS(f0));
    f0 = BITSF(LD32(v0+2272));
    v0 = D_08AF08E4 - (2276);
    ST32(a0+8, FBITS(f0));
    f0 = BITSF(LD32(v0+2276));
    ST32(a0+4, FBITS(f0));
    return;
}

/* 08A69988 */
void func_08A69988(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A69988:;
    sp = sp - 48;
    v0 = D_08AF08EC - (2284);
    v1 = D_08AF08F0 - (2288);
    f1 = BITSF(LD32(v0+2284));
    v0 = D_08C2C3E4 - (-15388);
    f0 = BITSF(LD32(v1+2288));
    v1 = LD_U8(v0-15388);
    ST32(sp+4, FBITS(f1));
    ST32(sp+12, FBITS(f0));
    ST32(sp, FBITS(f1));
    cnd_ = v1 == 0;
    ST32(sp+8, FBITS(f0));
    if (cnd_) { goto L_08A69B3C; }
    goto L_08A699C8;
L_08A699C8:;
    a2 = LD32(a0+20);
    v0 = 999;
    a0 = D_08C2A5C8 - (-23096);
    cnd_ = a2 == v0;
    v1 = a0 - 23096;
    if (cnd_) { goto L_08A69B3C; }
    goto L_08A699DC;
L_08A699DC:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-23096);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A69A2C; }
    goto L_08A69A00;
L_08A69A00:;
    a0 = LD32(a1);
    goto L_08A69A04;
L_08A69A04:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A69B54; }
    goto L_08A69A1C;
L_08A69A1C:;
    a1 = LD32(a1+4);
    goto L_08A69A20;
L_08A69A20:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A69A04; }
    goto L_08A69A28;
L_08A69A28:;
    s0 = 0 + 0;
    goto L_08A69A2C;
L_08A69A2C:;
    cnd_ = s0 == 0;
    s1 = D_08AF08F4 - (2292);
    if (cnd_) { goto L_08A69B3C; }
    goto L_08A69A34;
L_08A69A34:;
    f20 = BITSF(LD32(s1+2292));
    f12 = BITSF(0);
    a3 = D_08AE6B30 - (27440);
    a3 = a3 + 27440;
    f13 = f12;
    f14 = f12;
    a0 = sp + 0;
    f15 = f20;
    a1 = (u32)-1;
    a2 = 3;
    func_088CD274(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15);
    goto L_08A69A60;
L_08A69A60:;
    f12 = BITSF(0);
    v0 = D_08AF08F8 - (2296);
    f13 = BITSF(LD32(v0+2296));
    a3 = D_08AE6B6C - (27500);
    f14 = f12;
    a3 = a3 + 27500;
    a0 = sp + 0;
    f15 = f20;
    a1 = (u32)-1;
    a2 = 3;
    func_088CD274(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, f14, f15);
    goto L_08A69A8C;
L_08A69A8C:;
    f12 = BITSF(0);
    v0 = D_08AF08FC - (2300);
    f13 = BITSF(LD32(v0+2300));
    a3 = D_08AE6BA8 - (27560);
    f14 = f12;
    a3 = a3 + 27560;
    a0 = sp + 0;
    f15 = f20;
    a1 = (u32)-1;
    a2 = 3;
    func_088CD274(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, f14, f15);
    goto L_08A69AB8;
L_08A69AB8:;
    f12 = BITSF(LD32(s0+236));
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A69AC0;
L_08A69AC0:;
    f12 = BITSF(0);
    a0 = D_08AF0900 - (2304);
    f13 = BITSF(LD32(a0+2304));
    a3 = D_08AE6BC8 - (27592);
    t0 = v0 + 0;
    t1 = v1 + 0;
    f15 = f20;
    a3 = a3 + 27592;
    f14 = f12;
    a1 = (u32)-1;
    a2 = 4099;
    a0 = sp + 0;
    func_088CD274(a0, a1, a2, a3, t0, t1, 0, 0, f12, f13, f14, f15);
    goto L_08A69AF4;
L_08A69AF4:;
    a0 = s0 + 0;
    v0 = func_08992C70(a0);
    goto L_08A69AFC;
L_08A69AFC:;
    v1 = D_08AE6BE0 - (27616);
    cnd_ = v0 != 0;
    t0 = v1 + 27616;
    if (cnd_) { goto L_08A69B10; }
    goto L_08A69B08;
L_08A69B08:;
    v0 = D_08AE6BE4 - (27620);
    t0 = v0 + 27620;
    goto L_08A69B10;
L_08A69B10:;
    f12 = BITSF(0);
    v0 = D_08AF0904 - (2308);
    f15 = BITSF(LD32(s1+2292));
    f13 = BITSF(LD32(v0+2308));
    a3 = D_08AE6BE8 - (27624);
    a3 = a3 + 27624;
    a0 = sp + 0;
    f14 = f12;
    a1 = (u32)-1;
    a2 = 4099;
    func_088CD274(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13, f14, f15);
    goto L_08A69B3C;
L_08A69B3C:;
    sp = sp + 48;
    return;
L_08A69B54:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A69A1C; }
    goto L_08A69B60;
L_08A69B60:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A69A20; }
    goto L_08A69B6C;
L_08A69B6C:;
    goto L_08A69A2C;
}

/* 08A69B74 */
rv_t func_08A69B74(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A69B74:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C317A8 - (6056);
    t1 = D_08C317B8 - (6072);
    t2 = D_08C317C8 - (6088);
    a1 = a1 & a0;
    v1 = t0 + 6056;
    a2 = t1 + 6072;
    cnd_ = a1 == 0;
    a3 = t2 + 6088;
    if (cnd_) { goto L_08A69C2C; }
    goto L_08A69BA4;
L_08A69BA4:;
    v0 = D_08AF0908 - (2312);
    f4 = BITSF(LD32(v0+2312));
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
    ST32(t0+6056, FBITS(f2));
    ST32(t1+6072, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+6088, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A69C2C;
L_08A69C2C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A69C34 */
rv_t func_08A69C34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A69C34:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A69B74(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A69C48;
L_08A69C48:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A69C54 */
void func_08A69C54(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0;
    float f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A69C54:;
    sp = sp - 16;
    v0 = D_08C2937B - (-27781);
    a2 = 1;
    a1 = LD_U8(v0-27781);
    v0 = D_08AF090C - (2316);
    a0 = LD32(a0+40);
    f12 = BITSF(LD32(v0+2316));
    func_08A69188(a0, a1, a2, f12);
    goto L_08A69C78;
L_08A69C78:;
    sp = sp + 16;
    return;
}

/* 08A69C84 */
rv_t func_08A69C84(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A69C84:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C317D8 - (6104);
    t1 = D_08C317E8 - (6120);
    t2 = D_08C317F8 - (6136);
    a1 = a1 & a0;
    v1 = t0 + 6104;
    a2 = t1 + 6120;
    cnd_ = a1 == 0;
    a3 = t2 + 6136;
    if (cnd_) { goto L_08A69D3C; }
    goto L_08A69CB4;
L_08A69CB4:;
    v0 = D_08AF0910 - (2320);
    f4 = BITSF(LD32(v0+2320));
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
    ST32(t0+6104, FBITS(f2));
    ST32(t1+6120, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+6136, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A69D3C;
L_08A69D3C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A69D44 */
rv_t func_08A69D44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A69D44:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A69C84(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A69D58;
L_08A69D58:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A69D64 */
rv_t func_08A69D64(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A69D64:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C31808 - (6152);
    t1 = D_08C31818 - (6168);
    t2 = D_08C31828 - (6184);
    a1 = a1 & a0;
    v1 = t0 + 6152;
    a2 = t1 + 6168;
    cnd_ = a1 == 0;
    a3 = t2 + 6184;
    if (cnd_) { goto L_08A69E1C; }
    goto L_08A69D94;
L_08A69D94:;
    v0 = D_08AF0914 - (2324);
    f4 = BITSF(LD32(v0+2324));
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
    ST32(t0+6152, FBITS(f2));
    ST32(t1+6168, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+6184, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A69E1C;
L_08A69E1C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A69E24 */
rv_t func_08A69E24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A69E24:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A69D64(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A69E38;
L_08A69E38:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A69E44 */
void func_08A69E44(u32 a0)
{
    u32 v0 = 0;
L_08A69E44:;
    v0 = 5;
    ST32(a0+4, v0);
    return;
}

/* 08A69E50 */
void func_08A69E50(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_08A69E50:;
    v0 = 456;
    v1 = 3;
    ST32(a0+68, v0);
    v0 = 4;
    ST32(a0+16, v1);
    v1 = 457;
    ST32(a0+20, v0);
    v0 = 458;
    ST32(a0+40, v1);
    v1 = 449;
    ST32(a0+44, v0);
    v0 = 451;
    ST32(a0+24, v1);
    v1 = 450;
    ST32(a0+28, v0);
    v0 = 452;
    ST32(a0+32, v1);
    v1 = 461;
    ST32(a0+36, v0);
    v0 = 462;
    ST32(a0+48, v1);
    v1 = 463;
    ST32(a0+52, v0);
    v0 = 464;
    ST32(a0+56, v1);
    v1 = 455;
    ST32(a0+60, v0);
    ST32(a0+64, v1);
    return;
}

/* 08A69EC4 */
void func_08A69EC4(float f12)
{
    u32 v0 = 0;
    float f0 = 0;
L_08A69EC4:;
    v0 = D_08AF0918 - (2328);
    f0 = BITSF(LD32(v0+2328));
    v0 = D_08B161B4 - (25012);
    f12 = f12 * f0;
    ST32(v0+25012, FBITS(f12));
    return;
}

/* 08A69EDC */
u32 func_08A69EDC(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u32 t_;
L_08A69EDC:;
    v0 = a0 < 0x5u;
    cnd_ = v0 == 0;
    v1 = 3;
    if (cnd_) { goto L_08A69F08; }
    goto L_08A69EE8;
L_08A69EE8:;
    v1 = D_08AE6C0C - (27660);
    v0 = a0 << 2;
    v1 = v1 + 27660;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A69F04u: goto L_08A69F04; case 0x08A69F10u: goto L_08A69F10; case 0x08A69F18u: goto L_08A69F18; case 0x08A69F20u: goto L_08A69F20; case 0x08A69F28u: goto L_08A69F28; default: rs_break(0, 0x08a69efc); }
L_08A69F04:;
    v1 = 0 + 0;
    goto L_08A69F08;
L_08A69F08:;
    v0 = v1 + 0;
    return v0;
L_08A69F10:;
    v1 = 1;
    goto L_08A69F08;
L_08A69F18:;
    v1 = 2;
    goto L_08A69F08;
L_08A69F20:;
    v1 = 4;
    goto L_08A69F08;
L_08A69F28:;
    v1 = 3;
    goto L_08A69F08;
}

/* 08A69F30 */
void func_08A69F30(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[1072] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 1072);
L_08A69F30:;
    sp = sp - 1072;
    a1 = 0x6e020000u;
    s2 = a0 + 0;
    a0 = 0x330000u;
    a0 = a0 | 0x155f;
    a1 = a1 | 0xc94a;
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A69F60;
L_08A69F60:;
    a1 = s2 + 8;
    a0 = sp + 0;
    s3 = v0 + 0;
    { u64 r_ = func_088F9110(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A69F70;
L_08A69F70:;
    v1 = LD32(s2+52);
    a0 = 0x330000u;
    a1 = 0x5c10000u;
    v0 = 2;
    a0 = a0 | 0x155f;
    cnd_ = v1 == v0;
    a1 = a1 | 0xf693;
    if (cnd_) { goto L_08A69F9C; }
    goto L_08A69F8C;
L_08A69F8C:;
    a0 = 0x330000u;
    a1 = 0xc2060000u;
    a0 = a0 | 0x155f;
    a1 = a1 | 0xbce7;
    goto L_08A69F9C;
L_08A69F9C:;
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A69FA4;
L_08A69FA4:;
    s1 = v0 + 0;
    v0 = func_0883B10C(0, 0, 0, 0, 0, 0, 0);
    goto L_08A69FAC;
L_08A69FAC:;
    v1 = LDU32(v0);
    a0 = LDU32(v0+4);
    STU32(sp+1024, v1);
    STU32(sp+1028, a0);
    s0 = sp + 512;
    a1 = D_08AE6C20 - (27680);
    t0 = LD_U8(sp+1029);
    t1 = LD_U8(sp+1030);
    t2 = LD_U8(sp+1031);
    t3 = s1 + 0;
    a0 = s0 + 0;
    a1 = a1 + 27680;
    a2 = 256;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A69FF8;
L_08A69FF8:;
    a2 = s0 + 0;
    a3 = s3 + 0;
    t0 = s2 + 0;
    a1 = sp + 0;
    t1 = 2060;
    t2 = 16384;
    a0 = 5;
    v0 = func_0890E61C(a0, a1, a2, a3, t0, t1, t2);
    goto L_08A6A018;
L_08A6A018:;
    a0 = v0 + 0;
    v0 = func_08A69EDC(a0);
    goto L_08A6A020;
L_08A6A020:;
    v1 = D_08C311D4 - (4564);
    ST32(v1+4564, v0);
    v0 = D_08C31868 - (6248);
    v1 = D_08C31869 - (6249);
    ST8(v0+6248, 0);
    v0 = D_08C3186C - (6252);
    ST8(v1+6249, 0);
    ST32(v0+6252, 0);
    sp = sp + 1072;
    return;
}

/* 08A6A05C */
void func_08A6A05C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[1072] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 1072);
L_08A6A05C:;
    sp = sp - 1072;
    a1 = 0x6e020000u;
    s1 = a0 + 0;
    a0 = 0x330000u;
    a0 = a0 | 0x155f;
    a1 = a1 | 0xc94a;
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6A08C;
L_08A6A08C:;
    a1 = s1 + 8;
    a0 = sp + 0;
    s3 = v0 + 0;
    { u64 r_ = func_088F9110(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6A09C;
L_08A6A09C:;
    v1 = LD32(s1+52);
    a0 = 0x330000u;
    a1 = 0x5c10000u;
    v0 = 2;
    a0 = a0 | 0x155f;
    cnd_ = v1 == v0;
    a1 = a1 | 0xf693;
    if (cnd_) { goto L_08A6A0C8; }
    goto L_08A6A0B8;
L_08A6A0B8:;
    a0 = 0x330000u;
    a1 = 0xc2060000u;
    a0 = a0 | 0x155f;
    a1 = a1 | 0xbce7;
    goto L_08A6A0C8;
L_08A6A0C8:;
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6A0D0;
L_08A6A0D0:;
    s0 = v0 + 0;
    v0 = func_0883B10C(0, 0, 0, 0, 0, 0, 0);
    goto L_08A6A0D8;
L_08A6A0D8:;
    v1 = LDU32(v0);
    a0 = LDU32(v0+4);
    STU32(sp+1024, v1);
    STU32(sp+1028, a0);
    s2 = sp + 512;
    a1 = D_08AE6C20 - (27680);
    t0 = LD_U8(sp+1029);
    t1 = LD_U8(sp+1030);
    t2 = LD_U8(sp+1031);
    a1 = a1 + 27680;
    a0 = s2 + 0;
    a2 = 256;
    a3 = 1;
    t3 = s0 + 0;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6A124;
L_08A6A124:;
    v1 = D_08B16438 - (25656);
    v0 = (u32)(s32)LD_S8(v1+25656);
    a2 = s2 + 0;
    a3 = s3 + 0;
    t0 = s1 + 0;
    a0 = 5;
    a1 = sp + 0;
    t1 = 2060;
    cnd_ = v0 == 0;
    t2 = 16384;
    if (cnd_) { goto L_08A6A15C; }
    goto L_08A6A14C;
L_08A6A14C:;
    v0 = D_08BD7EC6 - (32454);
    v1 = LD_U8(v0+32454);
    cnd_ = v1 == 0;
    if (cnd_) { a1 = s2 + 0; goto L_08A6A1BC; }
    goto L_08A6A15C;
L_08A6A15C:;
    v0 = func_0890E61C(a0, a1, a2, a3, t0, t1, t2);
    goto L_08A6A164;
L_08A6A164:;
    a0 = v0 + 0;
    v0 = func_08A69EDC(a0);
    goto L_08A6A16C;
L_08A6A16C:;
    v1 = D_08C311D4 - (4564);
    a0 = D_08C31868 - (6248);
    ST32(v1+4564, v0);
    v1 = D_08C31869 - (6249);
    ST8(a0+6248, 0);
    a0 = 1;
    cnd_ = v0 == a0;
    ST8(v1+6249, 0);
    if (cnd_) { goto L_08A6A1A8; }
    goto L_08A6A18C;
L_08A6A18C:;
    sp = sp + 1072;
    return;
L_08A6A1A8:;
    v0 = D_08B285B0 - (-31312);
    a0 = LD32(v0-31312);
    v1 = D_08C3186C - (6252);
    ST32(v1+6252, a0);
    goto L_08A6A18C;
L_08A6A1BC:;
    a2 = s3 + 0;
    a3 = s1 + 0;
    a0 = sp + 0;
    t0 = 2060;
    t1 = 16384;
    v0 = func_0890E374(a0, a1, a2, a3, t0, t1);
    goto L_08A6A1D4;
L_08A6A1D4:;
    goto L_08A6A164;
}

/* 08A6A1DC */
u64 func_08A6A1DC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6A1DC:;
    t0 = RS_FADDR(func_08977FEC, 0x08977FECu) - (32748);
    sp = sp - 16;
    a1 = a0 + 0;
    t0 = t0 + 32748;
    a2 = 2060;
    a3 = 16384;
    a0 = 5;
    v0 = func_0890E50C(a0, a1, a2, a3, t0);
    goto L_08A6A200;
L_08A6A200:;
    a0 = v0 + 0;
    v0 = func_08A69EDC(a0);
    goto L_08A6A208;
L_08A6A208:;
    v1 = D_08C311D4 - (4564);
    ST32(v1+4564, v0);
    v0 = D_08C31868 - (6248);
    v1 = D_08C31869 - (6249);
    ST8(v0+6248, 0);
    v0 = D_08C3186C - (6252);
    ST8(v1+6249, 0);
    ST32(v0+6252, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A6A234 */
u64 func_08A6A234(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6A234:;
    sp = sp - 16;
    v0 = func_0890E49C();
    goto L_08A6A244;
L_08A6A244:;
    a0 = v0 + 0;
    v0 = func_08A69EDC(a0);
    goto L_08A6A24C;
L_08A6A24C:;
    v1 = v0 ^ 0x1;
    v1 = v1 < 0x1u;
    a0 = D_08C31868 - (6248);
    a1 = D_08C311D4 - (4564);
    ST8(a0+6248, v1);
    v1 = D_08C3186C - (6252);
    ST32(a1+4564, v0);
    v0 = D_08C31869 - (6249);
    ST8(v0+6249, 0);
    ST32(v1+6252, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A6A280 */
void func_08A6A280(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6A280:;
    sp = sp - 16;
    s0 = D_08C311D4 - (4564);
    v0 = LD32(s0+4564);
    v0 = v0 ^ 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A6A2E8; }
    goto L_08A6A2A0;
L_08A6A2A0:;
    s1 = D_08C31869 - (6249);
    v0 = LD_U8(s1+6249);
    cnd_ = v0 == 0;
    v1 = D_08B285B0 - (-31312);
    if (cnd_) { goto L_08A6A2FC; }
    goto L_08A6A2B0;
L_08A6A2B0:;
    a0 = D_08C3186C - (6252);
    v0 = LD32(v1-31312);
    v1 = LD32(a0+6252);
    v0 = v0 - v1;
    v0 = v0 < 0x7d0u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A6A2EC; }
    goto L_08A6A2CC;
L_08A6A2CC:;
    v0 = 2;
    ST32(s0+4564, v0);
    v1 = D_08C29342 - (-27838);
    v0 = D_08C311D8 - (4568);
    ST8(v1-27838, 0);
    ST8(v0+4568, 0);
    ST8(s1+6249, 0);
    goto L_08A6A2E8;
L_08A6A2E8:;
    goto L_08A6A2EC;
L_08A6A2EC:;
    sp = sp + 16;
    return;
L_08A6A2FC:;
    v0 = func_0890E850(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6A304;
L_08A6A304:;
    a1 = 1;
    cnd_ = v0 == a1;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A6A2E8; }
    goto L_08A6A310;
L_08A6A310:;
    v1 = D_08C31868 - (6248);
    v0 = LD_U8(v1+6248);
    cnd_ = v0 == 0;
    v0 = 2;
    if (cnd_) { goto L_08A6A334; }
    goto L_08A6A320;
L_08A6A320:;
    ST8(v1+6248, 0);
    goto L_08A6A324;
L_08A6A324:;
    v0 = func_08A69EDC(a0);
    goto L_08A6A32C;
L_08A6A32C:;
    ST32(s0+4564, v0);
    goto L_08A6A2E8;
L_08A6A334:;
    cnd_ = a0 == v0;
    v0 = 4;
    if (cnd_) { goto L_08A6A34C; }
    goto L_08A6A33C;
L_08A6A33C:;
    cnd_ = a0 != v0;
    v0 = D_08C311D8 - (4568);
    if (cnd_) { goto L_08A6A324; }
    goto L_08A6A344;
L_08A6A344:;
    ST8(v0+4568, a1);
    goto L_08A6A324;
L_08A6A34C:;
    v0 = D_08C3186C - (6252);
    a2 = LD32(v0+6252);
    cnd_ = a2 == 0;
    v0 = D_08C29342 - (-27838);
    if (cnd_) { goto L_08A6A37C; }
    goto L_08A6A35C;
L_08A6A35C:;
    v1 = D_08B285B0 - (-31312);
    v0 = LD32(v1-31312);
    v0 = v0 - a2;
    v0 = v0 < 0x7d0u;
    cnd_ = v0 == 0;
    v0 = D_08C29342 - (-27838);
    if (cnd_) { goto L_08A6A37C; }
    goto L_08A6A374;
L_08A6A374:;
    ST8(s1+6249, a1);
    goto L_08A6A2E8;
L_08A6A37C:;
    v1 = D_08C311D8 - (4568);
    ST8(v0-27838, 0);
    ST8(v1+4568, 0);
    goto L_08A6A324;
}

/* 08A6A38C */
rv_t func_08A6A38C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A6A38C:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C31838 - (6200);
    t1 = D_08C31848 - (6216);
    t2 = D_08C31858 - (6232);
    a1 = a1 & a0;
    v1 = t0 + 6200;
    a2 = t1 + 6216;
    cnd_ = a1 == 0;
    a3 = t2 + 6232;
    if (cnd_) { goto L_08A6A444; }
    goto L_08A6A3BC;
L_08A6A3BC:;
    v0 = D_08AF091C - (2332);
    f4 = BITSF(LD32(v0+2332));
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
    ST32(t0+6200, FBITS(f2));
    ST32(t1+6216, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+6232, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A6A444;
L_08A6A444:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A6A44C */
rv_t func_08A6A44C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6A44C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A6A38C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6A460;
L_08A6A460:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A6A46C */
rv_t func_08A6A46C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6A46C:;
    sp = sp - 32;
    s2 = a0 + 0;
    a0 = a2 + 0;
    s3 = 0 + 0;
    s1 = a1 + 0;
    { u64 r_ = func_0890C910(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6A498;
L_08A6A498:;
    s0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A6A720; }
    goto L_08A6A4A4;
L_08A6A4A4:;
    v1 = LD_U8(s0+6);
    v0 = 4;
    cnd_ = v1 == v0;
    v0 = 5;
    if (cnd_) { goto L_08A6A81C; }
    goto L_08A6A4B4;
L_08A6A4B4:;
    cnd_ = v1 == v0;
    if (cnd_) { s3 = 256; goto L_08A6A4BC; }
    goto L_08A6A4BC;
L_08A6A4BC:;
    a0 = s3 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6A4C4;
L_08A6A4C4:;
    t5 = v0 + 0;
    a0 = LD32(s0+12);
    cnd_ = s3 == 0;
    t2 = 0 + 0;
    if (cnd_) { goto L_08A6A71C; }
    goto L_08A6A4D4;
L_08A6A4D4:;
    v0 = D_08AF0920 - (2336);
    v1 = D_08AF0924 - (2340);
    f7 = BITSF(LD32(v0+2336));
    f4 = BITSF(LD32(v1+2340));
    f6 = BITSF(0);
    t1 = a0 + 0;
    t3 = 0xff0000u;
    t4 = 0xff000000u;
    t0 = t5 + 0;
    goto L_08A6A4F8;
L_08A6A4F8:;
    a3 = LD32(t1);
    a2 = a3 >> 24;
    v0 = a2 - 127;
    v1 = 0 - v0;
    v0 = (s32)v0 > (s32)v1 ? v0 : v1;
    v0 = (s32)v0 < 11;
    cnd_ = v0 == 0;
    ST32(t0, a3);
    if (cnd_) { goto L_08A6A604; }
    goto L_08A6A518;
L_08A6A518:;
    v0 = a3 & t3;
    v0 = v0 >> 16;
    a0 = (a3 >> 8) & 0xff;
    v1 = v0 < a0;
    if (v1 == 0) a0 = v0;
    a1 = a3 & 0xff;
    v0 = a0 < a1;
    if (v0 != 0) a0 = a1;
    f1 = BITSF(a0);
    cnd_ = (s32)a0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08A6A800; }
    goto L_08A6A544;
L_08A6A544:;
    v1 = s2 & t3;
    v0 = v1 >> 16;
    f1 = BITSF(v0);
    f2 = f0 * f7;
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08A6A7E4; }
    goto L_08A6A55C;
L_08A6A55C:;
    f1 = f2 * f0;
    f0 = f1 + f4;
    fcc = FCMP(f6, f1, 12);
    cnd_ = fcc;
    f5 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_08A6A57C; }
    goto L_08A6A574;
L_08A6A574:;
    f0 = f1 - f4;
    f5 = BITSF(F2I(f0, 1));
    goto L_08A6A57C;
L_08A6A57C:;
    v1 = s2 & 0xff00;
    v0 = v1 >> 8;
    f1 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08A6A7C8; }
    goto L_08A6A590;
L_08A6A590:;
    f1 = f2 * f0;
    f0 = f1 + f4;
    fcc = FCMP(f6, f1, 12);
    cnd_ = fcc;
    f3 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_08A6A5B0; }
    goto L_08A6A5A8;
L_08A6A5A8:;
    f0 = f1 - f4;
    f3 = BITSF(F2I(f0, 1));
    goto L_08A6A5B0;
L_08A6A5B0:;
    v1 = s2 & 0xff;
    f1 = BITSF(v1);
    cnd_ = (s32)v1 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08A6A7AC; }
    goto L_08A6A5C0;
L_08A6A5C0:;
    f1 = f2 * f0;
    f0 = f1 + f4;
    fcc = FCMP(f6, f1, 12);
    cnd_ = fcc;
    f0 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_08A6A5E0; }
    goto L_08A6A5D8;
L_08A6A5D8:;
    f0 = f1 - f4;
    f0 = BITSF(F2I(f0, 1));
    goto L_08A6A5E0;
L_08A6A5E0:;
    v1 = FBITS(f5);
    a0 = FBITS(f3);
    v0 = v1 << 16;
    v1 = a0 << 8;
    v0 = v0 | v1;
    v1 = FBITS(f0);
    v0 = v0 | v1;
    v0 = v0 | t4;
    ST32(t0, v0);
    goto L_08A6A604;
L_08A6A604:;
    v0 = 0 - a2;
    v0 = (s32)a2 > (s32)v0 ? a2 : v0;
    v0 = (s32)v0 < 11;
    cnd_ = v0 == 0;
    if (cnd_) { t2 = t2 + 1; goto L_08A6A70C; }
    goto L_08A6A618;
L_08A6A618:;
    v0 = a3 & t3;
    v0 = v0 >> 16;
    a0 = (a3 >> 8) & 0xff;
    v1 = v0 < a0;
    a2 = a0 + 0;
    if (v1 == 0) a2 = v0;
    a1 = a3 & 0xff;
    v0 = a2 < a1;
    if (v0 != 0) a2 = a1;
    f1 = BITSF(a2);
    cnd_ = (s32)a2 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08A6A790; }
    goto L_08A6A648;
L_08A6A648:;
    v1 = s1 & t3;
    v0 = v1 >> 16;
    f1 = BITSF(v0);
    f2 = f0 * f7;
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08A6A774; }
    goto L_08A6A660;
L_08A6A660:;
    f1 = f2 * f0;
    f0 = f1 + f4;
    fcc = FCMP(f6, f1, 12);
    cnd_ = fcc;
    f5 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_08A6A680; }
    goto L_08A6A678;
L_08A6A678:;
    f0 = f1 - f4;
    f5 = BITSF(F2I(f0, 1));
    goto L_08A6A680;
L_08A6A680:;
    v1 = s1 & 0xff00;
    v0 = v1 >> 8;
    f1 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08A6A758; }
    goto L_08A6A694;
L_08A6A694:;
    f1 = f2 * f0;
    f0 = f1 + f4;
    fcc = FCMP(f6, f1, 12);
    cnd_ = fcc;
    f3 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_08A6A6B4; }
    goto L_08A6A6AC;
L_08A6A6AC:;
    f0 = f1 - f4;
    f3 = BITSF(F2I(f0, 1));
    goto L_08A6A6B4;
L_08A6A6B4:;
    v1 = s1 & 0xff;
    f1 = BITSF(v1);
    cnd_ = (s32)v1 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08A6A73C; }
    goto L_08A6A6C4;
L_08A6A6C4:;
    f1 = f2 * f0;
    f0 = f1 + f4;
    fcc = FCMP(f6, f1, 12);
    cnd_ = fcc;
    f0 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_08A6A6E4; }
    goto L_08A6A6DC;
L_08A6A6DC:;
    f0 = f1 - f4;
    f0 = BITSF(F2I(f0, 1));
    goto L_08A6A6E4;
L_08A6A6E4:;
    v1 = FBITS(f5);
    a0 = FBITS(f3);
    v0 = v1 << 16;
    v1 = a0 << 8;
    v0 = v0 | v1;
    v1 = FBITS(f0);
    v0 = v0 | v1;
    v0 = v0 | t4;
    ST32(t0, v0);
    t2 = t2 + 1;
    goto L_08A6A70C;
L_08A6A70C:;
    v0 = t2 < s3;
    t1 = t1 + 4;
    cnd_ = v0 != 0;
    t0 = t0 + 4;
    if (cnd_) { goto L_08A6A4F8; }
    goto L_08A6A71C;
L_08A6A71C:;
    v0 = t5 + 0;
    goto L_08A6A720;
L_08A6A720:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A6A73C:;
    v1 = v1 >> 1;
    v0 = s1 & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08A6A6C4;
L_08A6A758:;
    v0 = v0 & 0x1;
    v1 = v1 >> 9;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08A6A694;
L_08A6A774:;
    v0 = v0 & 0x1;
    v1 = v1 >> 17;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08A6A660;
L_08A6A790:;
    v1 = a2 >> 1;
    v0 = a2 & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08A6A648;
L_08A6A7AC:;
    v1 = v1 >> 1;
    v0 = s2 & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08A6A5C0;
L_08A6A7C8:;
    v0 = v0 & 0x1;
    v1 = v1 >> 9;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08A6A590;
L_08A6A7E4:;
    v0 = v0 & 0x1;
    v1 = v1 >> 17;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08A6A55C;
L_08A6A800:;
    v1 = a0 >> 1;
    v0 = a0 & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08A6A544;
L_08A6A81C:;
    s3 = 16;
    goto L_08A6A4BC;
}

/* 08A6A824 */
u64 func_08A6A824(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6A824:;
    sp = sp - 32;
    a2 = 0 + 0;
    s5 = 0 + 0;
    s4 = (u32)-1;
    s2 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A6A8FC; }
    goto L_08A6A858;
L_08A6A858:;
    s3 = D_08C320C4 - (8388);
    v0 = LD32(s3+8388);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A6A898; }
    goto L_08A6A868;
L_08A6A868:;
    v0 = D_08C318C4 - (6340);
    s0 = v0 + 6340;
    a1 = s0 + 0;
    goto L_08A6A874;
L_08A6A874:;
    a0 = s2 + 0;
    { u64 r_ = func_08A89724(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6A87C;
L_08A6A87C:;
    cnd_ = v0 == 0;
    s0 = s0 + 128;
    if (cnd_) { goto L_08A6A9B8; }
    goto L_08A6A884;
L_08A6A884:;
    v0 = LD32(s3+8388);
    s1 = s1 + 1;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A6A874; }
    goto L_08A6A898;
L_08A6A898:;
    v0 = (u32)-1;
    cnd_ = s4 == v0;
    if (cnd_) { goto L_08A6A924; }
    goto L_08A6A8A4;
L_08A6A8A4:;
    v0 = s4 < 0x10u;
    goto L_08A6A8A8;
L_08A6A8A8:;
    cnd_ = v0 == 0;
    a2 = s5 + 0;
    if (cnd_) { goto L_08A6A8FC; }
    goto L_08A6A8B0;
L_08A6A8B0:;
    v0 = D_08C318C4 - (6340);
    v0 = v0 + 6340;
    v1 = s4 << 7;
    v1 = v1 + v0;
    a2 = LD32(v1+124);
    a1 = D_08C320C8 - (8392);
    v0 = D_08C320D8 - (8408);
    a0 = a1 + 8392;
    ST32(v0+8408, a2);
    v0 = 2;
    a2 = a0 + 0;
    ST16(a0+8, v0);
    v0 = D_08B1CBC0 - (-13376);
    v0 = v0 - 13376;
    ST32(a1+8392, v1);
    v1 = 4;
    ST16(a0+10, v1);
    ST32(a0+12, v0);
    ST32(a0+4, 0);
    goto L_08A6A8FC;
L_08A6A8FC:;
    v0 = a2 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08A6A924:;
    a0 = s2 + 0;
    { u64 r_ = func_08A6A9C0(a0, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6A92C;
L_08A6A92C:;
    s5 = v0 + 0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A6A8FC; }
    goto L_08A6A938;
L_08A6A938:;
    v1 = LD32(s3+8388);
    v0 = v1 < 0x10u;
    cnd_ = v0 == 0;
    v0 = s4 < 0x10u;
    if (cnd_) { goto L_08A6A8A8; }
    goto L_08A6A948;
L_08A6A948:;
    v0 = D_08C318C4 - (6340);
    s0 = v1 << 7;
    v0 = v0 + 6340;
    s0 = s0 + v0;
    a0 = s0 + 0;
    a1 = s2 + 0;
    s4 = v1 + 0;
    a2 = 123;
    v1 = v1 + 1;
    ST32(s3+8388, v1);
    { u64 r_ = func_08A89CF4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6A974;
L_08A6A974:;
    v0 = D_08C31870 - (6256);
    a0 = LD32(s5+12);
    a1 = LD32(v0+6256);
    v1 = LD32(a0);
    v1 = LD32(v1);
    cnd_ = a1 == 0;
    ST32(s0+124, v1);
    if (cnd_) { goto L_08A6A8A4; }
    goto L_08A6A990;
L_08A6A990:;
    a0 = D_08AE6C3C - (27708);
    t1 = v1 >> 24;
    a2 = v1 & 0xff;
    a3 = (v1 >> 8) & 0xff;
    t0 = (v1 >> 16) & 0xff;
    a0 = a0 + 27708;
    a1 = s2 + 0;
    v0 = sceKernelPrintf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6A9B0;
L_08A6A9B0:;
    v0 = s4 < 0x10u;
    goto L_08A6A8A8;
L_08A6A9B8:;
    s4 = s1 + 0;
    goto L_08A6A898;
}

/* 08A6A9C0 */
u64 func_08A6A9C0(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[1072] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 1072);
L_08A6A9C0:;
    v0 = D_08AE6C64 - (27748);
    a3 = D_08C31874 - (6260);
    v0 = v0 + 27748;
    sp = sp - 1072;
    ST32(a3+6260, v0);
    v1 = D_08C31884 - (6276);
    v0 = D_08C31888 - (6280);
    a1 = sp + 0;
    s2 = a3 + 6260;
    a3 = 2;
    s0 = a0 + 0;
    a2 = 1024;
    a0 = sp + 1040;
    v1 = v1 + 6276;
    v0 = v0 + 6280;
    ST16(s2+8, a3);
    ST32(s2+4, v1);
    ST32(s2+12, v0);
    ST32(sp+1040, 0);
    v0 = sceNetResolverCreate(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6AA20;
L_08A6AA20:;
    a3 = 0x4c0000u;
    a1 = s0 + 0;
    a2 = sp + 1024;
    a3 = a3 | 0x4b40;
    t0 = 2;
    cnd_ = (s32)v0 < 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A6AA80; }
    goto L_08A6AA3C;
L_08A6AA3C:;
    a0 = LD32(sp+1040);
    v0 = sceNetResolverStartNtoA(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6AA44;
L_08A6AA44:;
    a0 = LD32(sp+1040);
    s1 = v0 + 0;
    v0 = sceNetResolverDelete(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6AA50;
L_08A6AA50:;
    a1 = D_08C318A0 - (6304);
    a2 = a1 + 6304;
    cnd_ = (s32)s1 < 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A6AA80; }
    goto L_08A6AA60;
L_08A6AA60:;
    v1 = 4;
    v0 = LD32(s2+12);
    ST16(s2+10, v1);
    a0 = s2 + 0;
    v1 = LD32(sp+1024);
    ST32(v0, a2);
    ST32(a1+6304, v1);
    ST32(v0+4, 0);
    goto L_08A6AA80;
L_08A6AA80:;
    v0 = a0 + 0;
    sp = sp + 1072;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A6AA9C */
u32 func_08A6AA9C(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6AA9C:;
    sp = sp - 32;
    s0 = D_08C318B4 - (6324);
    s0 = s0 + 6324;
    ST32(sp, a0);
    a2 = s0 + 0;
    a1 = sp + 0;
    a0 = 2;
    a3 = 16;
    v0 = sceNetInetInetNtop(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6AAC8;
L_08A6AAC8:;
    v0 = s0 + 0;
    sp = sp + 32;
    return v0;
}

/* 08A6AADC */
rv_t func_08A6AADC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6AADC:;
    sp = sp - 16;
    { rv_t r_ = func_08A884C0(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6AAEC;
L_08A6AAEC:;
    goto L_08A6AAEC;
}

/* 08A6AAF4 */
u32 func_08A6AAF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6AAF4:;
    a1 = a1 & 0xffff;
    a1 = WSBH(a1);
    v0 = 2;
    ST8(a2+1, v0);
    sp = sp - 16;
    ST16(a2+2, a1);
    s1 = a2 + 0;
    s0 = a0 + 0;
    v0 = sceNetInetInetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6AB24;
L_08A6AB24:;
    v1 = v0 >> 16;
    ST16(s1+4, v0);
    v0 = (u32)-1;
    ST16(s1+6, v1);
    v1 = LDU32(s1+4);
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A6AB5C; }
    goto L_08A6AB44;
L_08A6AB44:;
    v0 = 1;
    goto L_08A6AB48;
L_08A6AB48:;
    sp = sp + 16;
    return v0;
L_08A6AB5C:;
    { u64 r_ = func_08A6A824(a0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6AB64;
L_08A6AB64:;
    v1 = v0 + 0;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A6AB48; }
    goto L_08A6AB70;
L_08A6AB70:;
    v0 = LD32(v1+12);
    v1 = LD32(v0);
    a0 = LD32(v1);
    v0 = a0 >> 16;
    ST16(s1+6, v0);
    ST16(s1+4, a0);
    goto L_08A6AB44;
}

/* 08A6AB8C */
void func_08A6AB8C(u32 t2, u32 t3)
{
    u32 v0 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6AB8C:;
    sp = sp - 16;
    v0 = D_08C32160 - (8544);
    a3 = 0 + 0;
    s0 = v0 + 8544;
    a1 = s0 + 20;
    a2 = LD32(s0+84);
    a0 = LD32(v0+8544);
    t0 = s0 + 4;
    t1 = 16;
    v0 = sceNetInetSendto(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6ABBC;
L_08A6ABBC:;
    v0 = func_08A6B620(0, 0, 0, 0, 0, 0, 0);
    goto L_08A6ABC4;
L_08A6ABC4:;
    ST32(s0+88, v0);
    sp = sp + 16;
    return;
}

/* 08A6ABD8 */
u32 func_08A6ABD8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08A6ABD8:;
    sp = sp - 96;
    s2 = a0 + 0;
    a0 = D_08C320E0 - (8416);
    a0 = a0 + 8416;
    a1 = s2 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6AC04;
L_08A6AC04:;
    v1 = (u32)-1;
    v0 = D_08C32160 - (8544);
    ST32(v0+8544, v1);
    func_08A6B610();
    goto L_08A6AC14;
L_08A6AC14:;
    v0 = D_08C32120 - (8480);
    v1 = (u32)(s32)LD_S8(v0+8480);
    a1 = D_08AE6C68 - (27752);
    v0 = v0 + 8480;
    a1 = a1 + 27752;
    a0 = sp + 0;
    a2 = s2 + 0;
    cnd_ = v1 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_08A6ACD8; }
    goto L_08A6AC38;
L_08A6AC38:;
    v0 = D_08C32164 - (8548);
    s1 = v0 + 8548;
    a0 = a3 + 0;
    a1 = 27900;
    a2 = s1 + 0;
    v0 = func_08A6AAF4(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_08A6AC50;
L_08A6AC50:;
    s3 = s1 - 4;
    a1 = 2;
    a2 = 17;
    a0 = 2;
    cnd_ = v0 == 0;
    a3 = (u32)-1;
    if (cnd_) { goto L_08A6ACB8; }
    goto L_08A6AC68;
L_08A6AC68:;
    v0 = sceNetInetSocket(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6AC70;
L_08A6AC70:;
    v1 = (u32)-1;
    ST32(s1-4, v0);
    a0 = s2 + 0;
    cnd_ = v0 == v1;
    a3 = (u32)-1;
    if (cnd_) { goto L_08A6ACB8; }
    goto L_08A6AC84;
L_08A6AC84:;
    v0 = 9;
    ST8(s3+20, v0);
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6AC90;
L_08A6AC90:;
    s0 = v0 + 0;
    a0 = s1 + 21;
    a2 = v0 + 1;
    a1 = s2 + 0;
    s0 = s0 + 6;
    func_08A87AE0(a0, a1, a2);
    goto L_08A6ACA8;
L_08A6ACA8:;
    ST32(s3+84, s0);
    func_08A6AB8C(0, 0);
    goto L_08A6ACB0;
L_08A6ACB0:;
    ST32(s3+92, 0);
    a3 = 0 + 0;
    goto L_08A6ACB8;
L_08A6ACB8:;
    v0 = a3 + 0;
    sp = sp + 96;
    return v0;
L_08A6ACD8:;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6ACE0;
L_08A6ACE0:;
    a3 = sp + 0;
    goto L_08A6AC38;
}

/* 08A6ACE8 */
u32 func_08A6ACE8(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6ACE8:;
    sp = sp - 32;
    v1 = a1 + 0;
    v0 = D_08C32168 - (8552);
    v1 = (s32)v1 < 7;
    s2 = v0 + 8552;
    a1 = s2 + 0;
    s3 = a3 + 0;
    a3 = 1;
    s1 = a0 + 0;
    a0 = a2 + 4;
    s0 = a2 + 0;
    cnd_ = v1 == 0;
    a2 = 4;
    if (cnd_) { goto L_08A6AD50; }
    goto L_08A6AD30;
L_08A6AD30:;
    v0 = a3 + 0;
    sp = sp + 32;
    return v0;
L_08A6AD50:;
    v0 = func_08A87A5C(a0, a1, a2);
    goto L_08A6AD58;
L_08A6AD58:;
    cnd_ = v0 != 0;
    a3 = 1;
    if (cnd_) { goto L_08A6AD30; }
    goto L_08A6AD60;
L_08A6AD60:;
    v1 = LD_U16(s0+2);
    v0 = LD_U16(s2-2);
    a1 = D_08AE6C84 - (27780);
    a1 = a1 + 27780;
    a0 = s1 + 0;
    cnd_ = v1 != v0;
    a2 = 3;
    if (cnd_) { goto L_08A6AD30; }
    goto L_08A6AD7C;
L_08A6AD7C:;
    v0 = func_08A87A5C(a0, a1, a2);
    goto L_08A6AD84;
L_08A6AD84:;
    cnd_ = v0 != 0;
    a3 = 1;
    if (cnd_) { goto L_08A6AD30; }
    goto L_08A6AD8C;
L_08A6AD8C:;
    a0 = (u32)(s32)LD_S8(s1+4);
    v0 = (u32)(s32)LD_S8(s1+3);
    a1 = LD_U8(s1+5);
    a0 = a0 << 16;
    v1 = 0xff0000u;
    a2 = LD_U8(s1+6);
    a0 = a0 & v1;
    v0 = v0 << 24;
    v0 = v0 | a0;
    a1 = a1 << 8;
    v0 = v0 | a1;
    v0 = v0 | a2;
    ST32(s3, v0);
    a3 = 0 + 0;
    goto L_08A6AD30;
}

/* 08A6ADC8 */
u32 func_08A6ADC8(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_08A6ADC8:;
    sp = sp - 112;
    s1 = D_08C32160 - (8544);
    v0 = 16;
    a0 = LD32(s1+8544);
    v1 = (u32)-1;
    cnd_ = a0 == v1;
    ST32(sp+80, v0);
    if (cnd_) { goto L_08A6AEF8; }
    goto L_08A6ADF4;
L_08A6ADF4:;
    { u64 r_ = func_08A6B358(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6ADFC;
L_08A6ADFC:;
    cnd_ = v0 == 0;
    a0 = LD32(s1+8544);
    if (cnd_) { goto L_08A6AE3C; }
    goto L_08A6AE04;
L_08A6AE04:;
    s0 = sp + 64;
    a3 = 0 + 0;
    a1 = sp + 0;
    a2 = 64;
    t0 = s0 + 0;
    t1 = sp + 80;
    v0 = sceNetInetRecvfrom(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6AE20;
L_08A6AE20:;
    a1 = v0 + 0;
    a0 = sp + 0;
    a2 = s0 + 0;
    a3 = sp + 84;
    v0 = func_08A6ACE8(a0, a1, a2, a3);
    goto L_08A6AE34;
L_08A6AE34:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A6AEB4; }
    goto L_08A6AE3C;
L_08A6AE3C:;
    s0 = s1 + 8544;
    v0 = func_08A6B620(0, 0, 0, 0, 0, 0, 0);
    goto L_08A6AE44;
L_08A6AE44:;
    v1 = LD32(s0+88);
    v1 = v1 + 2000;
    v1 = v1 < v0;
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A6AE80; }
    goto L_08A6AE58;
L_08A6AE58:;
    s2 = LD32(s0+92);
    v0 = 1;
    cnd_ = s2 == v0;
    if (cnd_) { goto L_08A6AE9C; }
    goto L_08A6AE68;
L_08A6AE68:;
    func_08A6AB8C(0, 0);
    goto L_08A6AE70;
L_08A6AE70:;
    v0 = LD32(s0+92);
    v0 = v0 + 1;
    ST32(s0+92, v0);
    a0 = 0 + 0;
    goto L_08A6AE80;
L_08A6AE80:;
    v0 = a0 + 0;
    sp = sp + 112;
    return v0;
L_08A6AE9C:;
    a0 = LD32(s1+8544);
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6AEA4;
L_08A6AEA4:;
    v0 = D_08C320DC - (8412);
    a0 = 1;
    ST32(v0+8412, s2);
    goto L_08A6AE80;
L_08A6AEB4:;
    a0 = LD32(s1+8544);
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6AEBC;
L_08A6AEBC:;
    v1 = LD32(sp+84);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    v0 = v1 & 0x2;
    if (cnd_) { goto L_08A6AEE0; }
    goto L_08A6AECC;
L_08A6AECC:;
    v1 = D_08C320DC - (8412);
    v0 = 2;
    goto L_08A6AED4;
L_08A6AED4:;
    ST32(v1+8412, v0);
    a0 = LD32(v1+8412);
    goto L_08A6AE80;
L_08A6AEE0:;
    cnd_ = v0 == 0;
    v1 = D_08C320DC - (8412);
    if (cnd_) { goto L_08A6AEF0; }
    goto L_08A6AEE8;
L_08A6AEE8:;
    v0 = 3;
    goto L_08A6AED4;
L_08A6AEF0:;
    v0 = 1;
    goto L_08A6AED4;
L_08A6AEF8:;
    v1 = 1;
    v0 = D_08C320DC - (8412);
    a0 = 1;
    ST32(v0+8412, v1);
    goto L_08A6AE80;
}

/* 08A6AF0C */
u64 func_08A6AF0C(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6AF0C:;
    sp = sp - 16;
    s1 = D_08C32160 - (8544);
    v0 = LD32(s1+8544);
    s0 = (u32)-1;
    a0 = v0 + 0;
    cnd_ = v0 == s0;
    if (cnd_) { goto L_08A6AF44; }
    goto L_08A6AF30;
L_08A6AF30:;
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6AF38;
L_08A6AF38:;
    v1 = D_08C320DC - (8412);
    ST32(v1+8412, 0);
    ST32(s1+8544, s0);
    goto L_08A6AF44;
L_08A6AF44:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A6AF58 */
void func_08A6AF58(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0;
L_08A6AF58:;
    v1 = D_08B1CBCC - (-13364);
    v0 = v1 - 13364;
    ST32(v1-13364, a0);
    ST32(v0+12, a3);
    ST32(v0+4, a1);
    ST32(v0+8, a2);
    return;
}

/* 08A6AF74 */
u64 func_08A6AF74(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6AF74:;
    sp = sp - 16;
    v1 = D_08B1CBCC - (-13364);
    v0 = LD32(v1-13364);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6AF8C;
L_08A6AF8C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A6AF98 */
u32 func_08A6AF98(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6AF98:;
    sp = sp - 16;
    v1 = D_08B1CBD4 - (-13356);
    v0 = LD32(v1-13356);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6AFB0;
L_08A6AFB0:;
    sp = sp + 16;
    return v0;
}

/* 08A6AFBC */
u64 func_08A6AFBC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6AFBC:;
    sp = sp - 16;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A6AFD8; }
    goto L_08A6AFC8;
L_08A6AFC8:;
    v0 = D_08B1CBD0 - (-13360);
    v1 = LD32(v0-13360);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6AFD8;
L_08A6AFD8:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A6AFE4 */
u32 func_08A6AFE4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6AFE4:;
    sp = sp - 32;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A6B018; }
    goto L_08A6AFF0;
L_08A6AFF0:;
    ST32(sp, 0);
    goto L_08A6AFF4;
L_08A6AFF4:;
    a1 = 0xffff;
    a2 = 4105;
    a3 = sp + 0;
    t0 = 4;
    v0 = sceNetInetSetsockopt(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6B008;
L_08A6B008:;
    v0 = v0 < 0x1u;
    sp = sp + 32;
    return v0;
L_08A6B018:;
    v0 = 1;
    ST32(sp, v0);
    goto L_08A6AFF4;
}

/* 08A6B024 */
void func_08A6B024(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a2 = 0, a3 = 0, t0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6B024:;
    sp = sp - 32;
    ST32(sp, a1);
    a2 = 4098;
    a1 = 0xffff;
    a3 = sp + 0;
    t0 = 4;
    v0 = sceNetInetSetsockopt(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6B044;
L_08A6B044:;
    v0 = ~(0 | v0);
    v0 = 0 < v0;
    sp = sp + 32;
    return;
}

/* 08A6B058 */
void func_08A6B058(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a2 = 0, a3 = 0, t0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6B058:;
    sp = sp - 32;
    ST32(sp, a1);
    a2 = 4097;
    a1 = 0xffff;
    a3 = sp + 0;
    t0 = 4;
    v0 = sceNetInetSetsockopt(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6B078;
L_08A6B078:;
    v0 = ~(0 | v0);
    v0 = 0 < v0;
    sp = sp + 32;
    return;
}

/* 08A6B08C */
void func_08A6B08C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6B08C:;
    sp = sp - 32;
    a1 = 0xffff;
    a2 = 4098;
    a3 = sp + 0;
    t0 = sp + 4;
    v0 = 4;
    ST32(sp+4, v0);
    v0 = sceNetInetGetsockopt(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6B0B0;
L_08A6B0B0:;
    v0 = ~(0 | v0);
    a0 = LD32(sp);
    v1 = (u32)-1;
    if (v0 != 0) v1 = a0;
    v0 = v1 + 0;
    sp = sp + 32;
    return;
}

/* 08A6B0D0 */
u64 func_08A6B0D0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6B0D0:;
    sp = sp - 32;
    a1 = 0xffff;
    a2 = 4097;
    a3 = sp + 0;
    t0 = sp + 4;
    v0 = 4;
    ST32(sp+4, v0);
    v0 = sceNetInetGetsockopt(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6B0F4;
L_08A6B0F4:;
    v0 = ~(0 | v0);
    a0 = LD32(sp);
    v1 = (u32)-1;
    if (v0 != 0) v1 = a0;
    v0 = v1 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A6B114 */
u32 func_08A6B114(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 144);
L_08A6B114:;
    sp = sp - 144;
    s6 = 0 + 0;
    s5 = 0 + 0;
    s4 = 0 + 0;
    s3 = a3 + 0;
    s2 = a2 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    ST32(sp+96, 0);
    cnd_ = a1 == 0;
    ST32(sp+100, 0);
    if (cnd_) { goto L_08A6B1A8; }
    goto L_08A6B160;
L_08A6B160:;
    ST32(sp, 0);
    a0 = (u32)((s32)a0 >> 5);
    a0 = a0 << 2;
    ST32(sp+4, 0);
    a0 = a0 + sp;
    v0 = s0 & 0x1f;
    ST32(sp+8, 0);
    v1 = 1;
    v1 = v1 << (v0 & 31);
    ST32(sp+12, 0);
    s4 = sp + 0;
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+28, 0);
    v0 = LD32(a0);
    v0 = v0 | v1;
    ST32(a0, v0);
    goto L_08A6B1A8;
L_08A6B1A8:;
    cnd_ = s2 == 0;
    a0 = (u32)((s32)s0 >> 5);
    if (cnd_) { goto L_08A6B1F4; }
    goto L_08A6B1B0;
L_08A6B1B0:;
    ST32(sp+32, 0);
    a0 = a0 << 2;
    ST32(sp+36, 0);
    a0 = a0 + sp;
    v0 = s0 & 0x1f;
    ST32(sp+40, 0);
    v1 = 1;
    v1 = v1 << (v0 & 31);
    ST32(sp+44, 0);
    s5 = sp + 32;
    ST32(sp+48, 0);
    ST32(sp+52, 0);
    ST32(sp+56, 0);
    ST32(sp+60, 0);
    v0 = LD32(a0+32);
    v0 = v0 | v1;
    ST32(a0+32, v0);
    goto L_08A6B1F4;
L_08A6B1F4:;
    cnd_ = s3 == 0;
    a0 = (u32)((s32)s0 >> 5);
    if (cnd_) { goto L_08A6B240; }
    goto L_08A6B1FC;
L_08A6B1FC:;
    ST32(sp+64, 0);
    a0 = a0 << 2;
    ST32(sp+68, 0);
    a0 = a0 + sp;
    v0 = s0 & 0x1f;
    ST32(sp+72, 0);
    v1 = 1;
    v1 = v1 << (v0 & 31);
    ST32(sp+76, 0);
    s6 = sp + 64;
    ST32(sp+80, 0);
    ST32(sp+84, 0);
    ST32(sp+88, 0);
    ST32(sp+92, 0);
    v0 = LD32(a0+64);
    v0 = v0 | v1;
    ST32(a0+64, v0);
    goto L_08A6B240;
L_08A6B240:;
    a1 = s4 + 0;
    t0 = sp + 96;
    a0 = 64;
    a2 = s5 + 0;
    a3 = s6 + 0;
    v0 = sceNetInetSelect(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6B258;
L_08A6B258:;
    a1 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08A6B314; }
    goto L_08A6B268;
L_08A6B268:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08A6B2A0; }
    goto L_08A6B270;
L_08A6B270:;
    cnd_ = (s32)a1 <= 0;
    v0 = s0 >> 5;
    if (cnd_) { goto L_08A6B350; }
    goto L_08A6B278;
L_08A6B278:;
    v0 = v0 << 2;
    v0 = v0 + s4;
    a0 = LD32(v0);
    v1 = s0 & 0x1f;
    v0 = 1;
    v1 = v0 << (v1 & 31);
    a0 = a0 & v1;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s1, 0); goto L_08A6B2A0; }
    goto L_08A6B29C;
L_08A6B29C:;
    ST32(s1, v0);
    goto L_08A6B2A0;
L_08A6B2A0:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08A6B2D8; }
    goto L_08A6B2A8;
L_08A6B2A8:;
    cnd_ = (s32)a1 <= 0;
    v0 = s0 >> 5;
    if (cnd_) { goto L_08A6B348; }
    goto L_08A6B2B0;
L_08A6B2B0:;
    v0 = v0 << 2;
    v0 = v0 + s5;
    a0 = LD32(v0);
    v1 = s0 & 0x1f;
    v0 = 1;
    v1 = v0 << (v1 & 31);
    a0 = a0 & v1;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s2, 0); goto L_08A6B2D8; }
    goto L_08A6B2D4;
L_08A6B2D4:;
    ST32(s2, v0);
    goto L_08A6B2D8;
L_08A6B2D8:;
    cnd_ = s3 == 0;
    v1 = a1 + 0;
    if (cnd_) { goto L_08A6B314; }
    goto L_08A6B2E0;
L_08A6B2E0:;
    cnd_ = (s32)a1 <= 0;
    v0 = s0 >> 5;
    if (cnd_) { goto L_08A6B340; }
    goto L_08A6B2E8;
L_08A6B2E8:;
    v0 = v0 << 2;
    v0 = v0 + s6;
    a0 = LD32(v0);
    v1 = s0 & 0x1f;
    v0 = 1;
    v1 = v0 << (v1 & 31);
    a0 = a0 & v1;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s3, 0); goto L_08A6B310; }
    goto L_08A6B30C;
L_08A6B30C:;
    ST32(s3, v0);
    goto L_08A6B310;
L_08A6B310:;
    v1 = a1 + 0;
    goto L_08A6B314;
L_08A6B314:;
    v0 = v1 + 0;
    sp = sp + 144;
    return v0;
L_08A6B340:;
    ST32(s3, 0);
    goto L_08A6B310;
L_08A6B348:;
    ST32(s2, 0);
    goto L_08A6B2D8;
L_08A6B350:;
    ST32(s1, 0);
    goto L_08A6B2A0;
}

/* 08A6B358 */
u64 func_08A6B358(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6B358:;
    sp = sp - 32;
    a1 = sp + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    ST32(sp, 0);
    v0 = func_08A6B114(a0, a1, a2, a3, t1, t2, t3);
    goto L_08A6B374;
L_08A6B374:;
    v1 = v0 ^ 0x1;
    v0 = LD32(sp);
    if (v1 != 0) v0 = 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A6B38C */
u32 func_08A6B38C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6B38C:;
    a3 = D_08C3231C - (8988);
    sp = sp - 16;
    t0 = a3 + 8988;
    v0 = D_08AE6CC0 - (27840);
    a2 = D_08C32308 - (8968);
    v0 = v0 + 27840;
    s2 = D_08C32334 - (9012);
    s0 = D_08C32348 - (9032);
    s0 = s0 + 9032;
    ST32(t0+4, 0);
    v1 = s2 + 9012;
    a1 = s0 + 0;
    ST32(a2+8968, v0);
    v0 = D_08C32318 - (8984);
    a0 = 8;
    v0 = v0 + 8984;
    s1 = a2 + 8968;
    ST32(a3+8988, v1);
    v1 = 2;
    ST32(s1+4, v0);
    ST16(s1+8, v1);
    ST16(s1+10, 0);
    ST32(s1+12, t0);
    ST32(s2+9012, 0);
    v0 = sceNetApctlGetInfo(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6B400;
L_08A6B400:;
    a1 = v0 + 0;
    cnd_ = (s32)v0 < 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A6B43C; }
    goto L_08A6B40C;
L_08A6B40C:;
    v0 = sceNetInetInetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6B414;
L_08A6B414:;
    ST32(s2+9012, v0);
    v0 = 4;
    ST16(s1+10, v0);
    v0 = s1 + 0;
    goto L_08A6B424;
L_08A6B424:;
    sp = sp + 16;
    return v0;
L_08A6B43C:;
    a0 = D_08AE6CCC - (27852);
    a0 = a0 + 27852;
    { rv_t r_ = func_08A884C0(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6B448;
L_08A6B448:;
    v0 = 0 + 0;
    goto L_08A6B424;
}

/* 08A6B450 */
u32 func_08A6B450(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08A6B450:;
    v0 = LDU32(a0);
    v0 = WSBW(v0);
    a1 = v0 >> 24;
    v1 = (v0 >> 16) & 0xff;
    v0 = 10;
    cnd_ = a1 == v0;
    a3 = 1;
    if (cnd_) { goto L_08A6B494; }
    goto L_08A6B470;
L_08A6B470:;
    v0 = a1 ^ 0xc0;
    a0 = v1 - 16;
    a2 = v0 < 0x1u;
    v1 = v1 ^ 0xa8;
    v0 = 172;
    a0 = a0 < 0x10u;
    cnd_ = a1 == v0;
    v1 = v1 < 0x1u;
    if (cnd_) { goto L_08A6B49C; }
    goto L_08A6B490;
L_08A6B490:;
    a3 = a2 & v1;
    goto L_08A6B494;
L_08A6B494:;
    v0 = a3 + 0;
    return v0;
L_08A6B49C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A6B494; }
    goto L_08A6B4A4;
L_08A6B4A4:;
    a3 = a2 & v1;
    goto L_08A6B494;
}

/* 08A6B4AC */
u32 func_08A6B4AC(void)
{
    u32 v0 = 0;
L_08A6B4AC:;
    v0 = (u32)-1;
    return v0;
}

/* 08A6B4B4 */
u32 func_08A6B4B4(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6B4B4:;
    sp = sp - 16;
    s0 = D_08C323C8 - (9160);
    s0 = s0 + 9160;
    a0 = s0 + 0;
    v0 = sceNetGetLocalEtherAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6B4D0;
L_08A6B4D0:;
    if (v0 != 0) s0 = 0;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 08A6B4E8 */
rv_t func_08A6B4E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6B4E8:;
    sp = sp - 16;
    v0 = D_08C323D0 - (9168);
    s0 = v0 + 9168;
    v1 = (u32)(s32)LD_S8(v0+9168);
    cnd_ = v1 == 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_08A6B518; }
    goto L_08A6B508;
L_08A6B508:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A6B518:;
    v0 = func_08A6B4B4(a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6B520;
L_08A6B520:;
    a1 = D_08AE6CFC - (27900);
    a1 = a1 + 27900;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A6B554; }
    goto L_08A6B530;
L_08A6B530:;
    t3 = LD_U8(v0+5);
    a2 = LD_U8(v0);
    a3 = LD_U8(v0+1);
    t0 = LD_U8(v0+2);
    t1 = LD_U8(v0+3);
    t2 = LD_U8(v0+4);
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6B54C;
L_08A6B54C:;
    v0 = s0 + 0;
    goto L_08A6B508;
L_08A6B554:;
    v0 = D_08B1CBDC - (-13348);
    v0 = v0 - 13348;
    goto L_08A6B530;
}

/* 08A6B560 */
u64 func_08A6B560(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6B560:;
    sp = sp - 16;
    v0 = 0 + 0;
    s1 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A6B5AC; }
    goto L_08A6B57C;
L_08A6B57C:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6B584;
L_08A6B584:;
    v0 = v0 + 1;
    a0 = v0 + 0;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6B590;
L_08A6B590:;
    s0 = v0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A6B5A8; }
    goto L_08A6B5A0;
L_08A6B5A0:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6B5A8;
L_08A6B5A8:;
    v0 = s0 + 0;
    goto L_08A6B5AC;
L_08A6B5AC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A6B5C0 */
void func_08A6B5C0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_08A6B5C0:;
    v0 = LD_U8(a0);
    a3 = a0 + 0;
    cnd_ = v0 == 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08A6B608; }
    goto L_08A6B5D0;
L_08A6B5D0:;
    v1 = v0 + 0;
    v0 = D_08AE9044 - (-28604);
    t0 = v0 - 28604;
    goto L_08A6B5DC;
L_08A6B5DC:;
    v1 = (u32)(s32)(s8)v1;
    a0 = v1 + t0;
    v0 = LD_U8(a0);
    a1 = v1 + 32;
    v0 = v0 & 0x1;
    if (v0 != 0) v1 = a1;
    ST8(a2, v1);
    a2 = a2 + 1;
    v0 = LD_U8(a2);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A6B5DC; }
    goto L_08A6B608;
L_08A6B608:;
    v0 = a3 + 0;
    return;
}

/* 08A6B610 */
void func_08A6B610(void)
{
L_08A6B610:;
    return;
}

/* 08A6B618 */
void func_08A6B618(void)
{
L_08A6B618:;
    return;
}

/* 08A6B620 */
u32 func_08A6B620(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A6B620:;
    sp = sp - 48;
    a0 = sp + 16;
    v0 = sceRtcGetCurrentTick(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6B630;
L_08A6B630:;
    a0 = sp + 0;
    cnd_ = (s32)v0 < 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A6B664; }
    goto L_08A6B63C;
L_08A6B63C:;
    a0 = LD32(sp+16);
    a1 = LD32(sp+20);
    a3 = 0;
    a2 = 1000;
    { u64 r_ = func_08A92548(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6B650;
L_08A6B650:;
    v1 = v0 + 0;
    goto L_08A6B654;
L_08A6B654:;
    goto L_08A6B658;
L_08A6B658:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_08A6B664:;
    v0 = sceRtcGetCurrentClock(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6B66C;
L_08A6B66C:;
    v1 = 0 + 0;
    a0 = sp + 0;
    cnd_ = (s32)v0 < 0;
    a1 = sp + 16;
    if (cnd_) { goto L_08A6B654; }
    goto L_08A6B67C;
L_08A6B67C:;
    v0 = sceRtcGetTick(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6B684;
L_08A6B684:;
    cnd_ = (s32)v0 >= 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A6B63C; }
    goto L_08A6B68C;
L_08A6B68C:;
    goto L_08A6B658;
}

/* 08A6B694 */
void func_08A6B694(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0;
    u32 hi = 0, lo = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6B694:;
    v0 = 1000;
    { s64 p_ = (s64)(s32)a0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    sp = sp - 16;
    a0 = lo;
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6B6AC;
L_08A6B6AC:;
    sp = sp + 16;
    return;
}

/* 08A6B6B8 */
u32 func_08A6B6B8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_08A6B6B8:;
    v1 = a0 >> 16;
    a1 = 16807;
    { s64 p_ = (s64)(s32)v1 * (s32)a1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = a0 & 0xffff;
    v1 = lo;
    { s64 p_ = (s64)(s32)a0 * (s32)a1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = v1 & 0x7fff;
    v0 = v0 << 16;
    a0 = lo;
    a0 = a0 + v0;
    cnd_ = (s32)a0 < 0;
    v1 = v1 >> 15;
    if (cnd_) { goto L_08A6B704; }
    goto L_08A6B6E8;
L_08A6B6E8:;
    a0 = a0 + v1;
    cnd_ = (s32)a0 < 0;
    if (cnd_) { a0 = (a0 & ~(0x1u << 31)) | ((0 & 0x1) << 31); goto L_08A6B6FC; }
    goto L_08A6B6F4;
L_08A6B6F4:;
    v0 = a0 + 0;
    return v0;
L_08A6B6FC:;
    a0 = a0 + 1;
    goto L_08A6B6F4;
L_08A6B704:;
    a0 = (a0 & ~(0x1u << 31)) | ((0 & 0x1) << 31);
    a0 = a0 + 1;
    goto L_08A6B6E8;
}

/* 08A6B710 */
u32 func_08A6B710(void)
{
    u32 v0 = 0, a0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6B710:;
    sp = sp - 16;
    s0 = D_08B1CBE4 - (-13340);
    a0 = LD32(s0-13340);
    v0 = func_08A6B6B8(a0);
    goto L_08A6B72C;
L_08A6B72C:;
    ST32(s0-13340, v0);
    sp = sp + 16;
    return v0;
}

/* 08A6B740 */
void func_08A6B740(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
L_08A6B740:;
    a1 = a0 + 0;
    a1 = (a1 & ~(0x1u << 31)) | ((0 & 0x1) << 31);
    v0 = 1;
    if (a0 != 0) v0 = a1;
    v1 = D_08B1CBE4 - (-13340);
    ST32(v1-13340, v0);
    return;
}

/* 08A6B75C */
u32 func_08A6B75C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6B75C:;
    sp = sp - 16;
    s0 = a1 - a0;
    v0 = a0 + 0;
    s1 = a0 + 0;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08A6B790; }
    goto L_08A6B77C;
L_08A6B77C:;
    sp = sp + 16;
    return v0;
L_08A6B790:;
    v0 = func_08A6B710();
    goto L_08A6B798;
L_08A6B798:;
    { u32 x_ = v0, y_ = s0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v1 = hi;
    v0 = v1 + s1;
    goto L_08A6B77C;
}

/* 08A6B7A8 */
void func_08A6B7A8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6B7A8:;
    t0 = a1 + 0;
    sp = sp - 16;
    a3 = a0 + 0;
    cnd_ = (s32)a2 <= 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A6B7E4; }
    goto L_08A6B7BC;
L_08A6B7BC:;
    v0 = a3 + a1;
    a0 = LD_U8(v0);
    v1 = sp + a1;
    a1 = a1 + 1;
    v0 = (s32)a1 < (s32)a2;
    cnd_ = v0 != 0;
    ST8(v1, a0);
    if (cnd_) { goto L_08A6B7BC; }
    goto L_08A6B7D8;
L_08A6B7D8:;
    v0 = (s32)a1 < 3;
    cnd_ = v0 == 0;
    if (cnd_) { a3 = LD_U8(sp); goto L_08A6B7FC; }
    goto L_08A6B7E4;
L_08A6B7E4:;
    v1 = sp + a1;
    a1 = a1 + 1;
    v0 = (s32)a1 < 3;
    cnd_ = v0 != 0;
    ST8(v1, 0);
    if (cnd_) { goto L_08A6B7E4; }
    goto L_08A6B7F8;
L_08A6B7F8:;
    a3 = LD_U8(sp);
    goto L_08A6B7FC;
L_08A6B7FC:;
    v0 = LD_U8(sp+1);
    a2 = LD_U8(sp+2);
    v1 = a3 & 0x3;
    a0 = v0 & 0xf;
    a1 = (a2 >> 6) & 0x3;
    v0 = v0 >> 4;
    v1 = v1 << 4;
    a0 = a0 << 2;
    v1 = v1 | v0;
    a0 = a0 | a1;
    a2 = a2 & 0x3f;
    a3 = a3 >> 2;
    ST8(t0+3, a2);
    ST8(t0, a3);
    ST8(t0+1, v1);
    ST8(t0+2, a0);
    sp = sp + 16;
    return;
}

/* 08A6B844 */
void func_08A6B844(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6B844:;
    sp = sp - 32;
    v0 = D_08AE6D20 - (27936);
    s6 = v0 + 27936;
    v0 = 1;
    s5 = a1 + 0;
    s3 = a2 + 0;
    s2 = a0 + 0;
    s1 = a2 + 0;
    s0 = a1 + 0;
    cnd_ = a3 == v0;
    if (cnd_) { goto L_08A6B8A4; }
    goto L_08A6B88C;
L_08A6B88C:;
    v1 = D_08AE6D24 - (27940);
    v0 = 2;
    cnd_ = a3 == v0;
    s6 = v1 + 27940;
    if (cnd_) { goto L_08A6B8A4; }
    goto L_08A6B89C;
L_08A6B89C:;
    v0 = D_08AE6D1C - (27932);
    s6 = v0 + 27932;
    goto L_08A6B8A4;
L_08A6B8A4:;
    cnd_ = (s32)s3 <= 0;
    v1 = 0x55550000u;
    if (cnd_) { goto L_08A6B8D4; }
    goto L_08A6B8AC;
L_08A6B8AC:;
    s4 = 3;
    goto L_08A6B8B0;
L_08A6B8B0:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = (s32)s3 < (s32)s4 ? s3 : s4;
    s1 = s1 - 3;
    func_08A6B7A8(a0, a1, a2);
    goto L_08A6B8C4;
L_08A6B8C4:;
    s0 = s0 + 4;
    cnd_ = (s32)s1 > 0;
    s2 = s2 + 3;
    if (cnd_) { goto L_08A6B8B0; }
    goto L_08A6B8D0;
L_08A6B8D0:;
    v1 = 0x55550000u;
    goto L_08A6B8D4;
L_08A6B8D4:;
    v1 = v1 | 0x5556;
    { s64 p_ = (s64)(s32)s3 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = (u32)((s32)s3 >> 31);
    v1 = hi;
    v1 = v1 - a0;
    v0 = v1 << 1;
    v0 = v0 + v1;
    a0 = s3 - v0;
    v1 = 1;
    cnd_ = a0 == v1;
    a2 = s0 - 2;
    if (cnd_) { goto L_08A6B910; }
    goto L_08A6B900;
L_08A6B900:;
    v1 = a0 ^ 0x2;
    v0 = s0 - 1;
    a2 = s0 + 0;
    if (v1 == 0) a2 = v0;
    goto L_08A6B910;
L_08A6B910:;
    v0 = s5 < s0;
    cnd_ = v0 == 0;
    ST8(s0, 0);
    if (cnd_) { goto L_08A6B948; }
    goto L_08A6B91C;
L_08A6B91C:;
    a1 = 62;
    a3 = 63;
    s0 = s0 - 1;
    goto L_08A6B928;
L_08A6B928:;
    v0 = s0 < a2;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD_U8(s0); goto L_08A6B970; }
    goto L_08A6B934;
L_08A6B934:;
    v0 = LD_U8(s6+2);
    goto L_08A6B938;
L_08A6B938:;
    ST8(s0, v0);
    v0 = s5 < s0;
    goto L_08A6B940;
L_08A6B940:;
    cnd_ = v0 != 0;
    s0 = s0 - 1;
    if (cnd_) { goto L_08A6B928; }
    goto L_08A6B948;
L_08A6B948:;
    sp = sp + 32;
    return;
L_08A6B970:;
    v1 = (u32)(s32)(s8)a0;
    v0 = (s32)v1 < 26;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = (s32)v1 < 52; goto L_08A6B988; }
    goto L_08A6B980;
L_08A6B980:;
    v0 = a0 + 65;
    goto L_08A6B938;
L_08A6B988:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = (s32)v1 < 62; goto L_08A6B998; }
    goto L_08A6B990;
L_08A6B990:;
    v0 = a0 + 71;
    goto L_08A6B938;
L_08A6B998:;
    cnd_ = v0 != 0;
    v0 = a0 - 4;
    if (cnd_) { goto L_08A6B938; }
    goto L_08A6B9A0;
L_08A6B9A0:;
    cnd_ = v1 == a1;
    if (cnd_) { v0 = LD_U8(s6); goto L_08A6B938; }
    goto L_08A6B9A8;
L_08A6B9A8:;
    cnd_ = v1 != a3;
    if (cnd_) { v0 = s5 < s0; goto L_08A6B940; }
    goto L_08A6B9B0;
L_08A6B9B0:;
    v0 = LD_U8(s6+1);
    goto L_08A6B938;
}

/* 08A6B9B8 */
u32 func_08A6B9B8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08A6B9B8:;
    v1 = LD_U8(a0);
    v0 = (u32)(s32)(s8)v1;
    cnd_ = (s32)v0 < 0;
    v0 = v1 << 24;
    if (cnd_) { goto L_08A6B9DC; }
    goto L_08A6B9C8;
L_08A6B9C8:;
    v0 = (u32)((s32)v0 >> 24);
    a2 = 1;
    goto L_08A6B9D0;
L_08A6B9D0:;
    ST16(a1, v0);
    goto L_08A6B9D4;
L_08A6B9D4:;
    v0 = a2 + 0;
    return v0;
L_08A6B9DC:;
    a2 = v1 & 0xff;
    v1 = a2 & 0xe0;
    v0 = 192;
    cnd_ = v1 == v0;
    v1 = a2 & 0xf0;
    if (cnd_) { goto L_08A6BA50; }
    goto L_08A6B9F0;
L_08A6B9F0:;
    v0 = 224;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD_U8(a0+1); goto L_08A6BA0C; }
    goto L_08A6B9FC;
L_08A6B9FC:;
    v0 = 63;
    goto L_08A6BA00;
L_08A6BA00:;
    ST16(a1, v0);
    a2 = 1;
    goto L_08A6B9D4;
L_08A6BA0C:;
    v0 = 128;
    a3 = v1 & 0xc0;
    cnd_ = a3 != v0;
    v0 = 63;
    if (cnd_) { goto L_08A6BA00; }
    goto L_08A6BA1C;
L_08A6BA1C:;
    a0 = LD_U8(a0+2);
    v0 = a0 & 0xc0;
    cnd_ = v0 != a3;
    if (cnd_) { v0 = 63; goto L_08A6BA00; }
    goto L_08A6BA2C;
L_08A6BA2C:;
    v0 = a2 & 0xf;
    v1 = v1 & 0x3f;
    v0 = v0 << 12;
    v1 = v1 << 6;
    v0 = v0 + v1;
    a0 = a0 & 0x3f;
    v0 = v0 + a0;
    a2 = 3;
    goto L_08A6B9D0;
L_08A6BA50:;
    a0 = LD_U8(a0+1);
    v0 = 128;
    v1 = a0 & 0xc0;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = 63; goto L_08A6BA00; }
    goto L_08A6BA64;
L_08A6BA64:;
    v0 = a2 & 0x1f;
    v0 = v0 << 6;
    v1 = a0 & 0x3f;
    v0 = v0 + v1;
    a2 = 2;
    goto L_08A6B9D0;
}

/* 08A6BA7C */
u32 func_08A6BA7C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    int cnd_;
L_08A6BA7C:;
    a3 = a0 & 0xffff;
    v0 = a3 < 0x80u;
    t1 = a3 < 0x800u;
    v1 = 1;
    cnd_ = v0 == 0;
    t0 = a1 + 0;
    if (cnd_) { goto L_08A6BAA0; }
    goto L_08A6BA94;
L_08A6BA94:;
    ST8(a1, a3);
    goto L_08A6BA98;
L_08A6BA98:;
    v0 = v1 + 0;
    return v0;
L_08A6BAA0:;
    a0 = (u32)-128;
    a2 = a3 & 0x3f;
    v1 = a3 >> 12;
    v0 = (u32)-32;
    a1 = (a3 >> 6) & 0x3f;
    t3 = v1 | v0;
    t2 = a2 | a0;
    v1 = (u32)-128;
    a1 = a1 | a0;
    v0 = (u32)-64;
    a0 = a3 >> 6;
    a2 = a2 | v1;
    v0 = a0 | v0;
    cnd_ = t1 == 0;
    v1 = 2;
    if (cnd_) { goto L_08A6BAE8; }
    goto L_08A6BADC;
L_08A6BADC:;
    ST8(t0+1, a2);
    ST8(t0, v0);
    goto L_08A6BA98;
L_08A6BAE8:;
    ST8(t0+2, t2);
    v1 = 3;
    ST8(t0, t3);
    ST8(t0+1, a1);
    goto L_08A6BA98;
}

/* 08A6BAFC */
void func_08A6BAFC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6BAFC:;
    sp = sp - 16;
    s2 = 0 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A6BB70; }
    goto L_08A6BB20;
L_08A6BB20:;
    v1 = LD_U16(a0);
    cnd_ = v1 == 0;
    if (cnd_) { ST8(s1, 0); goto L_08A6BB54; }
    goto L_08A6BB2C;
L_08A6BB2C:;
    a0 = v1 + 0;
    goto L_08A6BB30;
L_08A6BB30:;
    a1 = s1 + 0;
    s0 = s0 + 2;
    v0 = func_08A6BA7C(a0, a1);
    goto L_08A6BB3C;
L_08A6BB3C:;
    v1 = LD_U16(s0);
    s2 = s2 + v0;
    s1 = s1 + v0;
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A6BB30; }
    goto L_08A6BB50;
L_08A6BB50:;
    ST8(s1, 0);
    goto L_08A6BB54;
L_08A6BB54:;
    v0 = s2 + 1;
    goto L_08A6BB58;
L_08A6BB58:;
    sp = sp + 16;
    return;
L_08A6BB70:;
    v0 = 1;
    ST8(a1, 0);
    goto L_08A6BB58;
}

/* 08A6BB7C */
void func_08A6BB7C(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6BB7C:;
    sp = sp - 16;
    s2 = 0 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A6BBF4; }
    goto L_08A6BBA0;
L_08A6BBA0:;
    v0 = LD_U8(a0);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A6BBD0; }
    goto L_08A6BBAC;
L_08A6BBAC:;
    ST16(s1, 0);
    goto L_08A6BBB0;
L_08A6BBB0:;
    v0 = s2 + 1;
    goto L_08A6BBB4;
L_08A6BBB4:;
    sp = sp + 16;
    return;
L_08A6BBCC:;
    a0 = s0 + 0;
    goto L_08A6BBD0;
L_08A6BBD0:;
    a1 = s1 + 0;
    v0 = func_08A6B9B8(a0, a1);
    goto L_08A6BBD8;
L_08A6BBD8:;
    s0 = s0 + v0;
    v0 = LD_U8(s0);
    s2 = s2 + 1;
    cnd_ = v0 != 0;
    s1 = s1 + 2;
    if (cnd_) { goto L_08A6BBCC; }
    goto L_08A6BBEC;
L_08A6BBEC:;
    ST16(s1, 0);
    goto L_08A6BBB0;
L_08A6BBF4:;
    v0 = 1;
    ST16(a1, 0);
    goto L_08A6BBB4;
}

/* 08A6BC00 */
u64 func_08A6BC00(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6BC00:;
    sp = sp - 16;
    v1 = 0 + 0;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A6BC4C; }
    goto L_08A6BC1C;
L_08A6BC1C:;
    cnd_ = (s32)a1 <= 0;
    if (cnd_) { goto L_08A6BC50; }
    goto L_08A6BC24;
L_08A6BC24:;
    v0 = LD32(a0+8);
    a0 = LD32(a0+4);
    s1 = v0 + a1;
    a1 = s1 + 0;
    v0 = func_08A6AF98(a0, a1, t1, t2, t3);
    goto L_08A6BC38;
L_08A6BC38:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A6BC4C; }
    goto L_08A6BC40;
L_08A6BC40:;
    ST32(s0+8, s1);
    v1 = 1;
    ST32(s0+4, v0);
    goto L_08A6BC4C;
L_08A6BC4C:;
    goto L_08A6BC50;
L_08A6BC50:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A6BC64 */
u64 func_08A6BC64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6BC64:;
    sp = sp - 16;
    v0 = a0 + 0;
    s0 = a1 + 0;
    a1 = a2 + 0;
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A6BCD8; }
    goto L_08A6BC84;
L_08A6BC84:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A6BCDC; }
    goto L_08A6BC8C;
L_08A6BC8C:;
    cnd_ = (s32)a2 <= 0;
    if (cnd_) {  goto L_08A6BCE0; }
    goto L_08A6BC94;
L_08A6BC94:;
    cnd_ = (s32)a3 <= 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A6BCDC; }
    goto L_08A6BC9C;
L_08A6BC9C:;
    ST32(s0, v0);
    ST32(s0+20, a3);
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    ST32(s0+12, 0);
    ST32(s0+16, 0);
    ST32(s0+24, 0);
    ST32(s0+28, 0);
    ST32(s0+32, 0);
    { u64 r_ = func_08A6BC00(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6BCC4;
L_08A6BCC4:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A6BCD8; }
    goto L_08A6BCCC;
L_08A6BCCC:;
    v0 = LD32(s0+4);
    v1 = 1;
    ST8(v0, 0);
    goto L_08A6BCD8;
L_08A6BCD8:;
    goto L_08A6BCDC;
L_08A6BCDC:;
    goto L_08A6BCE0;
L_08A6BCE0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A6BCEC */
u64 func_08A6BCEC(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A6BCEC:;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A6BD38; }
    goto L_08A6BCF4;
L_08A6BCF4:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A6BD38; }
    goto L_08A6BCFC;
L_08A6BCFC:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A6BD38; }
    goto L_08A6BD04;
L_08A6BD04:;
    cnd_ = (s32)a3 <= 0;
    v1 = 1;
    if (cnd_) { goto L_08A6BD38; }
    goto L_08A6BD0C;
L_08A6BD0C:;
    ST32(a1, a0);
    v0 = 1;
    ST32(a1+8, a3);
    ST32(a1+28, v1);
    ST32(a1+32, 0);
    ST32(a1+4, a2);
    ST32(a1+12, 0);
    ST32(a1+16, 0);
    ST32(a1+20, 0);
    ST32(a1+24, v1);
    ST8(a2, 0);
    goto L_08A6BD38;
L_08A6BD38:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A6BD40 */
void func_08A6BD40(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6BD40:;
    sp = sp - 16;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A6BD90; }
    goto L_08A6BD54;
L_08A6BD54:;
    a0 = LD32(a0+4);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A6BD94; }
    goto L_08A6BD60;
L_08A6BD60:;
    v0 = LD32(s0+28);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A6BDA0; }
    goto L_08A6BD6C;
L_08A6BD6C:;
    ST32(s0+32, 0);
    goto L_08A6BD70;
L_08A6BD70:;
    ST32(s0, 0);
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    ST32(s0+12, 0);
    ST32(s0+16, 0);
    ST32(s0+20, 0);
    ST32(s0+24, 0);
    ST32(s0+28, 0);
    goto L_08A6BD90;
L_08A6BD90:;
    goto L_08A6BD94;
L_08A6BD94:;
    sp = sp + 16;
    return;
L_08A6BDA0:;
    { u64 r_ = func_08A6AFBC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6BDA8;
L_08A6BDA8:;
    ST32(s0+32, 0);
    goto L_08A6BD70;
}

/* 08A6BDB0 */
u32 func_08A6BDB0(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6BDB0:;
    sp = sp - 32;
    s3 = a1 + 0;
    a1 = 0 + 0;
    s2 = a2 + 0;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A6BE70; }
    goto L_08A6BDDC;
L_08A6BDDC:;
    cnd_ = s3 == 0;
    if (cnd_) {  goto L_08A6BE74; }
    goto L_08A6BDE4;
L_08A6BDE4:;
    cnd_ = (s32)a2 < 0;
    if (cnd_) {  goto L_08A6BE74; }
    goto L_08A6BDEC;
L_08A6BDEC:;
    v0 = LD32(a0+32);
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08A6BE74; }
    goto L_08A6BDF8;
L_08A6BDF8:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A6BEC0; }
    goto L_08A6BE00;
L_08A6BE00:;
    v1 = LD32(s0+12);
    v0 = LD32(s0+8);
    s1 = v1 + s2;
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_08A6BE4C; }
    goto L_08A6BE18;
L_08A6BE18:;
    v0 = LD32(s0+24);
    goto L_08A6BE1C;
L_08A6BE1C:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A6BEA4; }
    goto L_08A6BE24;
L_08A6BE24:;
    a1 = LD32(s0+20);
    { u64 r_ = func_08A6BC00(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6BE2C;
L_08A6BE2C:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_08A6BE90; }
    goto L_08A6BE34;
L_08A6BE34:;
    v0 = LD32(s0+8);
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+24); goto L_08A6BE1C; }
    goto L_08A6BE44;
L_08A6BE44:;
    v1 = LD32(s0+12);
    a0 = LD32(s0+4);
    goto L_08A6BE4C;
L_08A6BE4C:;
    a1 = s3 + 0;
    a2 = s2 + 0;
    a0 = a0 + v1;
    func_08A87AE0(a0, a1, a2);
    goto L_08A6BE5C;
L_08A6BE5C:;
    v0 = LD32(s0+4);
    ST32(s0+12, s1);
    a1 = 1;
    v0 = v0 + s1;
    ST8(v0, 0);
    goto L_08A6BE70;
L_08A6BE70:;
    goto L_08A6BE74;
L_08A6BE74:;
    v0 = a1 + 0;
    sp = sp + 32;
    return v0;
L_08A6BE90:;
    v0 = 1;
    a1 = 0 + 0;
    ST32(v1+60, v0);
    ST32(v1+288, v0);
    goto L_08A6BE70;
L_08A6BEA4:;
    v0 = LD32(s0);
    v1 = 2;
    a0 = 1;
    a1 = 0 + 0;
    ST32(v0+60, v1);
    ST32(v0+288, a0);
    goto L_08A6BE70;
L_08A6BEC0:;
    a0 = s3 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6BEC8;
L_08A6BEC8:;
    s2 = v0 + 0;
    goto L_08A6BE00;
}

/* 08A6BED0 */
rv_t func_08A6BED0(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A6BED0:;
    sp = sp - 48;
    a3 = 0 + 0;
    s4 = 0 + 0;
    s3 = a1 + 0;
    s2 = a2 + 0;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    ST32(sp, 0);
    if (cnd_) { goto L_08A6BF4C; }
    goto L_08A6BF08;
L_08A6BF08:;
    cnd_ = a1 == 0;
    if (cnd_) {  goto L_08A6BF50; }
    goto L_08A6BF10;
L_08A6BF10:;
    cnd_ = (s32)a2 < 0;
    if (cnd_) {  goto L_08A6BF50; }
    goto L_08A6BF18;
L_08A6BF18:;
    v0 = LD32(a0+32);
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08A6BF50; }
    goto L_08A6BF24;
L_08A6BF24:;
    v1 = LD32(a0);
    v0 = LD32(v1+396);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A6BF40; }
    goto L_08A6BF34;
L_08A6BF34:;
    v0 = LD32(v1+404);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A6BF70; }
    goto L_08A6BF40;
L_08A6BF40:;
    v0 = func_08A6BDB0(a0, a1, a2, t1, t2, t3);
    goto L_08A6BF48;
L_08A6BF48:;
    a3 = v0 + 0;
    goto L_08A6BF4C;
L_08A6BF4C:;
    goto L_08A6BF50;
L_08A6BF50:;
    v0 = a3 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A6BF70:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A6C014; }
    goto L_08A6BF78;
L_08A6BF78:;
    v0 = LD32(s0+8);
    a0 = LD32(s0+12);
    v0 = v0 - a0;
    ST32(sp, v0);
    goto L_08A6BF88;
L_08A6BF88:;
    t0 = LD32(s0+4);
    v0 = LD32(v1+416);
    a1 = v1 + 392;
    t0 = t0 + a0;
    a2 = s3 + s4;
    a0 = v1 + 0;
    a3 = s2 + 0;
    v1 = 16384;
    t1 = sp + 0;
    t_ = v0;
    s1 = (s32)s2 < (s32)v1 ? s2 : v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6BFB4;
L_08A6BFB4:;
    v1 = v0 + 0;
    v0 = 2;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A6BFFC; }
    goto L_08A6BFC4;
L_08A6BFC4:;
    v0 = 1;
    s4 = s4 + s1;
    cnd_ = v1 != v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A6BF4C; }
    goto L_08A6BFD4;
L_08A6BFD4:;
    v1 = LD32(sp);
    v0 = LD32(s0+8);
    v0 = v0 - v1;
    ST32(s0+12, v0);
    goto L_08A6BFE4;
L_08A6BFE4:;
    v0 = (s32)s4 < (s32)s2;
    cnd_ = v0 == 0;
    a3 = 1;
    if (cnd_) { goto L_08A6BF4C; }
    goto L_08A6BFF0;
L_08A6BFF0:;
    v1 = LD32(s0);
    a0 = LD32(s0+12);
    goto L_08A6BF88;
L_08A6BFFC:;
    a1 = LD32(s0+20);
    { u64 r_ = func_08A6BC00(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6C004;
L_08A6C004:;
    cnd_ = v0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A6BFE4; }
    goto L_08A6C00C;
L_08A6C00C:;
    goto L_08A6BF50;
L_08A6C014:;
    a0 = a1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6C01C;
L_08A6C01C:;
    v1 = LD32(s0);
    s2 = v0 + 0;
    goto L_08A6BF78;
}

/* 08A6C028 */
void func_08A6C028(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6C028:;
    sp = sp - 16;
    s1 = a2 + 0;
    a2 = 0 + 0;
    s0 = a0 + 0;
    v0 = func_08A6BDB0(a0, a1, a2, t1, t2, t3);
    goto L_08A6C048;
L_08A6C048:;
    a1 = D_08AE6D3C - (27964);
    a1 = a1 + 27964;
    a0 = s0 + 0;
    a2 = 2;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A6C078; }
    goto L_08A6C060;
L_08A6C060:;
    v0 = v1 + 0;
    sp = sp + 16;
    return;
L_08A6C078:;
    v0 = func_08A6BDB0(a0, a1, a2, 0, 0, 0);
    goto L_08A6C080;
L_08A6C080:;
    a1 = s1 + 0;
    a0 = s0 + 0;
    a2 = 0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A6C060; }
    goto L_08A6C094;
L_08A6C094:;
    v0 = func_08A6BDB0(a0, a1, a2, 0, 0, 0);
    goto L_08A6C09C;
L_08A6C09C:;
    a1 = D_08AE6D40 - (27968);
    a1 = a1 + 27968;
    a0 = s0 + 0;
    a2 = 2;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A6C060; }
    goto L_08A6C0B4;
L_08A6C0B4:;
    v0 = func_08A6BDB0(a0, a1, a2, 0, 0, 0);
    goto L_08A6C0BC;
L_08A6C0BC:;
    v1 = 0 < v0;
    goto L_08A6C060;
}

/* 08A6C0C4 */
void func_08A6C0C4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6C0C4:;
    sp = sp - 16;
    a2 = 0 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A6C124; }
    goto L_08A6C0E4;
L_08A6C0E4:;
    v0 = LD32(a0+32);
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08A6C128; }
    goto L_08A6C0F0;
L_08A6C0F0:;
    a1 = LD32(a0+12);
    v1 = LD32(a0+8);
    v0 = a1 + 1;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+4); goto L_08A6C168; }
    goto L_08A6C108;
L_08A6C108:;
    v0 = LD32(a0+24);
    cnd_ = v0 == 0;
    v1 = 2;
    if (cnd_) { goto L_08A6C13C; }
    goto L_08A6C114;
L_08A6C114:;
    v0 = LD32(a0);
    a0 = 1;
    ST32(v0+60, v1);
    ST32(v0+288, a0);
    goto L_08A6C124;
L_08A6C124:;
    goto L_08A6C128;
L_08A6C128:;
    v0 = a2 + 0;
    sp = sp + 16;
    return;
L_08A6C13C:;
    a1 = LD32(a0+20);
    { u64 r_ = func_08A6BC00(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6C144;
L_08A6C144:;
    v1 = 1;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A6C160; }
    goto L_08A6C150;
L_08A6C150:;
    v0 = LD32(s0);
    ST32(v0+60, v1);
    ST32(v0+288, v1);
    goto L_08A6C124;
L_08A6C160:;
    a1 = LD32(s0+12);
    v0 = LD32(s0+4);
    goto L_08A6C168;
L_08A6C168:;
    a2 = 1;
    v0 = v0 + a1;
    ST8(v0, s1);
    v1 = LD32(s0+12);
    v0 = LD32(s0+4);
    v1 = v1 + 1;
    v0 = v0 + v1;
    ST32(s0+12, v1);
    ST8(v0, 0);
    goto L_08A6C124;
}

/* 08A6C190 */
void func_08A6C190(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6C190:;
    sp = sp - 32;
    a2 = a1 + 0;
    a1 = D_08AE6D44 - (27972);
    a1 = a1 + 27972;
    s0 = a0 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6C1B4;
L_08A6C1B4:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 0 + 0;
    v0 = func_08A6BDB0(a0, a1, a2, 0, 0, 0);
    goto L_08A6C1C4;
L_08A6C1C4:;
    sp = sp + 32;
    return;
}

/* 08A6C1D4 */
void func_08A6C1D4(u32 a0)
{
    u32 v0 = 0;
    int cnd_;
L_08A6C1D4:;
    v0 = LD32(a0+32);
    ST32(a0+12, 0);
    cnd_ = v0 != 0;
    ST32(a0+16, 0);
    if (cnd_) { goto L_08A6C1EC; }
    goto L_08A6C1E4;
L_08A6C1E4:;
    v0 = LD32(a0+4);
    ST8(v0, 0);
    goto L_08A6C1EC;
L_08A6C1EC:;
    return;
}

/* 08A6C1F4 */
u32 func_08A6C1F4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6C1F4:;
    sp = sp - 32;
    s2 = 1;
    s1 = (u32)-1;
    s0 = a0 + 0;
    goto L_08A6C214;
L_08A6C214:;
    a0 = LD32(s0+76);
    a1 = 0 + 0;
    a2 = sp + 0;
    a3 = sp + 4;
    v0 = func_08A6B114(a0, a1, a2, a3, t1, t2, t3);
    goto L_08A6C228;
L_08A6C228:;
    a1 = v0 + 0;
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A6C2AC; }
    goto L_08A6C234;
L_08A6C234:;
    cnd_ = v0 == s2;
    v0 = LD32(sp+4);
    if (cnd_) { goto L_08A6C2A4; }
    goto L_08A6C23C;
L_08A6C23C:;
    cnd_ = (s32)a1 <= 0;
    v0 = LD32(sp);
    if (cnd_) { goto L_08A6C288; }
    goto L_08A6C244;
L_08A6C244:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 1; goto L_08A6C28C; }
    goto L_08A6C24C;
L_08A6C24C:;
    v0 = LD32(s0+100);
    a1 = LD32(s0+88);
    a2 = LD32(s0+96);
    a1 = a1 + v0;
    a2 = a2 - v0;
    v0 = func_08A6C690(a0, a1, a2, 0, 0, 0, 0);
    goto L_08A6C264;
L_08A6C264:;
    a1 = v0 + 0;
    cnd_ = a1 == s1;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A6C28C; }
    goto L_08A6C270;
L_08A6C270:;
    v0 = LD32(s0+100);
    v1 = LD32(s0+96);
    v0 = v0 + a1;
    v1 = (s32)v0 < (s32)v1;
    cnd_ = v1 != 0;
    ST32(s0+100, v0);
    if (cnd_) { goto L_08A6C214; }
    goto L_08A6C288;
L_08A6C288:;
    v0 = 1;
    goto L_08A6C28C;
L_08A6C28C:;
    sp = sp + 32;
    return v0;
L_08A6C2A4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A6C23C; }
    goto L_08A6C2AC;
L_08A6C2AC:;
    v0 = 5;
    ST32(s0+288, s2);
    cnd_ = a1 == s1;
    ST32(s0+60, v0);
    if (cnd_) { goto L_08A6C2C8; }
    goto L_08A6C2BC;
L_08A6C2BC:;
    ST32(s0+80, 0);
    goto L_08A6C2C0;
L_08A6C2C0:;
    v0 = 0 + 0;
    goto L_08A6C28C;
L_08A6C2C8:;
    v0 = sceNetInetGetErrno(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6C2D0;
L_08A6C2D0:;
    ST32(s0+80, v0);
    goto L_08A6C2C0;
}

/* 08A6C2D8 */
void func_08A6C2D8(u32 a0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6C2D8:;
    sp = sp - 16;
    s1 = 0 + 0;
    v1 = LD32(a0+68);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A6C338; }
    goto L_08A6C2F8;
L_08A6C2F8:;
    v0 = LD32(a0+12);
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(a0+232); goto L_08A6C304; }
    goto L_08A6C304;
L_08A6C304:;
    a3 = LD32(s0+292);
    a0 = LD32(s0+4);
    a1 = LD32(s0+60);
    t0 = LD32(s0+72);
    t_ = v1;
    a2 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6C31C;
L_08A6C31C:;
    v0 = v0 < 0x1u;
    v1 = 0 < s1;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A6C33C; }
    goto L_08A6C330;
L_08A6C330:;
    v0 = 1;
    ST32(s0+256, v0);
    goto L_08A6C338;
L_08A6C338:;
    goto L_08A6C33C;
L_08A6C33C:;
    sp = sp + 16;
    return;
}

/* 08A6C34C */
float func_08A6C34C(u32 a0, u32 a1, u32 a2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6C34C:;
    sp = sp - 16;
    a3 = a2 + 0;
    v0 = a0 + 0;
    v1 = LD32(a0+64);
    cnd_ = v1 != 0;
    a2 = a1 + 0;
    if (cnd_) { goto L_08A6C374; }
    goto L_08A6C368;
L_08A6C368:;
    goto L_08A6C36C;
L_08A6C36C:;
    sp = sp + 16;
    return f0;
L_08A6C374:;
    t2 = LD32(a0+72);
    a1 = LD32(v0+16);
    a0 = LD32(a0+4);
    t0 = LD32(v0+292);
    t_ = v1;
    t1 = LD32(v0+296);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6C38C;
L_08A6C38C:;
    goto L_08A6C36C;
}

/* 08A6C394 */
float func_08A6C394(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6C394:;
    sp = sp - 16;
    v0 = LD32(a0+372);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A6C3BC; }
    goto L_08A6C3AC;
L_08A6C3AC:;
    goto L_08A6C3B0;
L_08A6C3B0:;
    sp = sp + 16;
    return f0;
L_08A6C3BC:;
    a0 = LD32(a0+356);
    v0 = func_08A83A88(a0);
    goto L_08A6C3C4;
L_08A6C3C4:;
    t1 = LD32(s0+72);
    v1 = LD32(s0+372);
    a0 = LD32(s0+4);
    a1 = LD32(s0+364);
    a2 = LD32(s0+368);
    a3 = LD32(s0+360);
    t_ = v1;
    t0 = v0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6C3E4;
L_08A6C3E4:;
    goto L_08A6C3B0;
}

/* 08A6C3EC */
void func_08A6C3EC(void)
{
L_08A6C3EC:;
    return;
}

/* 08A6C3F4 */
void func_08A6C3F4(void)
{
L_08A6C3F4:;
    return;
}

/* 08A6C3FC */
void func_08A6C3FC(void)
{
L_08A6C3FC:;
    return;
}

/* 08A6C404 */
void func_08A6C404(void)
{
L_08A6C404:;
    return;
}

/* 08A6C40C */
rv_t func_08A6C40C(u32 a0, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A6C40C:;
    sp = sp - 48;
    s4 = 3;
    s3 = 2;
    s2 = a0 + 392;
    s0 = a0 + 0;
    a3 = LD32(a0+204);
    ST32(sp, 0);
    ST32(sp+4, 0);
    goto L_08A6C444;
L_08A6C444:;
    a0 = LD32(s0+208);
    a1 = LD32(s0+168);
    v0 = LD32(s0+164);
    v1 = a3 - a0;
    a2 = LD32(s0+196);
    v0 = v0 - a1;
    t0 = LD32(s0+160);
    ST32(sp+4, v0);
    a2 = a2 + a0;
    t0 = t0 + a1;
    ST32(sp, v1);
    a0 = s0 + 0;
    a1 = s2 + 0;
    v0 = LD32(s0+420);
    a3 = sp + 0;
    t_ = v0;
    t1 = sp + 4;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6C488;
L_08A6C488:;
    s1 = v0 + 0;
    cnd_ = v0 == s3;
    a0 = s0 + 156;
    if (cnd_) { goto L_08A6C54C; }
    goto L_08A6C494;
L_08A6C494:;
    cnd_ = v0 == s4;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A6C500; }
    goto L_08A6C49C;
L_08A6C49C:;
    cnd_ = s1 == s3;
    v0 = LD32(sp+4);
    if (cnd_) { goto L_08A6C53C; }
    goto L_08A6C4A4;
L_08A6C4A4:;
    a2 = LD32(s0+204);
    goto L_08A6C4A8;
L_08A6C4A8:;
    a1 = LD32(sp);
    v1 = 0 + 0;
    v0 = (s32)a2 < (s32)a1;
    cnd_ = v0 != 0;
    a3 = a2 + 0;
    if (cnd_) { goto L_08A6C500; }
    goto L_08A6C4BC;
L_08A6C4BC:;
    a0 = LD32(sp+4);
    v0 = LD32(s0+208);
    v1 = LD32(s0+168);
    a1 = v0 + a1;
    v1 = v1 + a0;
    ST32(s0+168, v1);
    cnd_ = (s32)a0 > 0;
    ST32(s0+208, a1);
    if (cnd_) { goto L_08A6C444; }
    goto L_08A6C4DC;
L_08A6C4DC:;
    v0 = (s32)a1 < 256;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08A6C500; }
    goto L_08A6C4E8;
L_08A6C4E8:;
    s1 = a2 - a1;
    cnd_ = s1 != 0;
    if (cnd_) { a0 = LD32(s0+196); goto L_08A6C524; }
    goto L_08A6C4F4;
L_08A6C4F4:;
    a0 = s0 + 192;
    func_08A6C1D4(a0);
    goto L_08A6C4FC;
L_08A6C4FC:;
    v1 = 1;
    goto L_08A6C500;
L_08A6C500:;
    goto L_08A6C504;
L_08A6C504:;
    v0 = v1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A6C524:;
    a2 = s1 + 0;
    a1 = a0 + a1;
    { u64 r_ = func_08A87C00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6C530;
L_08A6C530:;
    ST32(s0+204, s1);
    ST32(s0+208, 0);
    goto L_08A6C4FC;
L_08A6C53C:;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(s0+204); goto L_08A6C4A8; }
    goto L_08A6C544;
L_08A6C544:;
    a3 = LD32(s0+204);
    goto L_08A6C444;
L_08A6C54C:;
    a1 = LD32(s0+176);
    { u64 r_ = func_08A6BC00(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6C554;
L_08A6C554:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A6C49C; }
    goto L_08A6C55C;
L_08A6C55C:;
    goto L_08A6C504;
}

/* 08A6C564 */
u64 func_08A6C564(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6C564:;
    sp = sp - 32;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s1 = a0 + 0;
    v0 = LD32(a2);
    v1 = LD32(a0+344);
    cnd_ = v1 == 0;
    s0 = v0 - 1;
    if (cnd_) { goto L_08A6C5D0; }
    goto L_08A6C598;
L_08A6C598:;
    v0 = func_08A6B620(a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6C5A0;
L_08A6C5A0:;
    a1 = v0 + 0;
    v0 = D_08B1CBF0 - (-13328);
    a0 = LD32(v0-13328);
    v1 = LD32(s1+348);
    v1 = v1 + a0;
    v1 = a1 < v1;
    cnd_ = v1 != 0;
    a2 = 1;
    if (cnd_) { goto L_08A6C608; }
    goto L_08A6C5C0;
L_08A6C5C0:;
    v0 = D_08B1CBEC - (-13332);
    v1 = LD32(v0-13332);
    ST32(s1+348, a1);
    s0 = (s32)v1 < (s32)s0 ? v1 : s0;
    goto L_08A6C5D0;
L_08A6C5D0:;
    a0 = LD32(s1+76);
    a2 = s0 + 0;
    a1 = s2 + 0;
    a3 = 0 + 0;
    v0 = sceNetInetRecv(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6C5E4;
L_08A6C5E4:;
    v1 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A6C638; }
    goto L_08A6C5F4;
L_08A6C5F4:;
    cnd_ = v1 == 0;
    v0 = s2 + v1;
    if (cnd_) { goto L_08A6C628; }
    goto L_08A6C5FC;
L_08A6C5FC:;
    ST8(v0, 0);
    a2 = 0 + 0;
    ST32(s3, v1);
    goto L_08A6C608;
L_08A6C608:;
    v0 = a2 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08A6C628:;
    v0 = 1;
    a2 = 2;
    ST32(s1+340, v0);
    goto L_08A6C608;
L_08A6C638:;
    v0 = sceNetInetGetErrno(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6C640;
L_08A6C640:;
    a0 = v0 + 0;
    v0 = 128;
    cnd_ = a0 == v0;
    v1 = a0 ^ 0xb;
    if (cnd_) { goto L_08A6C628; }
    goto L_08A6C650;
L_08A6C650:;
    v0 = a0 ^ 0x77;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    a2 = 1;
    if (cnd_) { goto L_08A6C608; }
    goto L_08A6C668;
L_08A6C668:;
    v0 = 116;
    cnd_ = a0 == v0;
    v1 = 1;
    if (cnd_) { goto L_08A6C608; }
    goto L_08A6C674;
L_08A6C674:;
    v0 = 5;
    a2 = 3;
    ST32(s1+340, v1);
    ST32(s1+60, v0);
    ST32(s1+80, a0);
    ST32(s1+288, v1);
    goto L_08A6C608;
}

/* 08A6C690 */
u32 func_08A6C690(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6C690:;
    sp = sp - 16;
    s0 = a0 + 0;
    a3 = 0 + 0;
    a0 = LD32(a0+76);
    v0 = sceNetInetSend(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6C6AC;
L_08A6C6AC:;
    a0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    v0 = 4;
    if (cnd_) { goto L_08A6C6EC; }
    goto L_08A6C6BC;
L_08A6C6BC:;
    v1 = LD32(s0+16);
    cnd_ = v1 == v0;
    a1 = a0 + 0;
    if (cnd_) { goto L_08A6C6DC; }
    goto L_08A6C6C8;
L_08A6C6C8:;
    goto L_08A6C6CC;
L_08A6C6CC:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
L_08A6C6DC:;
    v0 = LD32(s0+364);
    v0 = v0 + a0;
    ST32(s0+364, v0);
    goto L_08A6C6C8;
L_08A6C6EC:;
    v0 = sceNetInetGetErrno(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6C6F4;
L_08A6C6F4:;
    v1 = v0 ^ 0xb;
    a0 = v0 + 0;
    v0 = v0 ^ 0x77;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A6C6C8; }
    goto L_08A6C714;
L_08A6C714:;
    v0 = 116;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08A6C6CC; }
    goto L_08A6C720;
L_08A6C720:;
    v0 = 1;
    v1 = 5;
    a1 = (u32)-1;
    ST32(s0+80, a0);
    ST32(s0+288, v0);
    ST32(s0+60, v1);
    goto L_08A6C6CC;
}

/* 08A6C73C */
rv_t func_08A6C73C(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6C73C:;
    sp = sp - 16;
    s2 = a1 + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+396);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A6C778; }
    goto L_08A6C768;
L_08A6C768:;
    v1 = LD32(s0+404);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { s1 = s0 + 84; goto L_08A6C7E4; }
    goto L_08A6C778;
L_08A6C778:;
    v0 = LD32(s0+96);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = s2 + a0; goto L_08A6C7B0; }
    goto L_08A6C784;
L_08A6C784:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    a2 = s1 + 0;
    v0 = func_08A6C690(a0, a1, a2, t0, t1, t2, t3);
    goto L_08A6C794;
L_08A6C794:;
    a0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A6C7C8; }
    goto L_08A6C7A4;
L_08A6C7A4:;
    cnd_ = a0 == s1;
    a1 = 1;
    if (cnd_) { goto L_08A6C7C8; }
    goto L_08A6C7AC;
L_08A6C7AC:;
    a1 = s2 + a0;
    goto L_08A6C7B0;
L_08A6C7B0:;
    a2 = s1 - a0;
    a0 = s0 + 84;
    v0 = func_08A6BDB0(a0, a1, a2, t1, t2, t3);
    goto L_08A6C7BC;
L_08A6C7BC:;
    v1 = 2;
    a1 = 0 + 0;
    if (v0 != 0) a1 = v1;
    goto L_08A6C7C8;
L_08A6C7C8:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A6C7E4:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A6BED0(a0, a1, a2, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6C7EC;
L_08A6C7EC:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A6C7C8; }
    goto L_08A6C7F4;
L_08A6C7F4:;
    a0 = s0 + 0;
    v0 = func_08A6C1F4(a0, 0, 0, 0);
    goto L_08A6C7FC;
L_08A6C7FC:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A6C7C8; }
    goto L_08A6C804;
L_08A6C804:;
    v1 = LD32(s0+96);
    v0 = LD32(s0+100);
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    a1 = 2;
    if (cnd_) { goto L_08A6C7C8; }
    goto L_08A6C818;
L_08A6C818:;
    a0 = s1 + 0;
    func_08A6C1D4(a0);
    goto L_08A6C820;
L_08A6C820:;
    a1 = 1;
    goto L_08A6C7C8;
}

/* 08A6C828 */
u32 func_08A6C828(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6C828:;
    sp = sp - 32;
    s5 = D_08C323E8 - (9192);
    v0 = LD32(s5+9192);
    s2 = 0 + 0;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_08A6C970; }
    goto L_08A6C85C;
L_08A6C85C:;
    s6 = D_08C323E4 - (9188);
    a0 = LD32(s6+9188);
    a2 = v0 + 0;
    v0 = LD32(a0);
    goto L_08A6C86C;
L_08A6C86C:;
    a1 = s2 + 0;
    s2 = s2 + 1;
    v1 = LD32(v0);
    a0 = a0 + 4;
    cnd_ = v1 == 0;
    v0 = (s32)s2 < (s32)a2;
    if (cnd_) { goto L_08A6C8C8; }
    goto L_08A6C884;
L_08A6C884:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08A6C86C; }
    goto L_08A6C88C;
L_08A6C88C:;
    s4 = LD32(s5+9192);
    a0 = LD32(s6+9188);
    s3 = s4 + 4;
    a1 = s3 << 2;
    v0 = func_08A6AF98(a0, a1, t1, t2, t3);
    goto L_08A6C8A0;
L_08A6C8A0:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = (u32)-1;
    if (cnd_) { goto L_08A6C8C8; }
    goto L_08A6C8AC;
L_08A6C8AC:;
    v0 = D_08C323E4 - (9188);
    v1 = (s32)s4 < (s32)s3;
    ST32(v0+9188, a0);
    cnd_ = v1 != 0;
    s2 = s4 + 0;
    if (cnd_) { goto L_08A6C8F4; }
    goto L_08A6C8C0;
L_08A6C8C0:;
    ST32(s5+9192, s3);
    goto L_08A6C8C4;
L_08A6C8C4:;
    a1 = s4 + 0;
    goto L_08A6C8C8;
L_08A6C8C8:;
    v0 = a1 + 0;
    sp = sp + 32;
    return v0;
L_08A6C8F4:;
    s1 = LD32(s6+9188);
    s0 = s2 << 2;
    a0 = 424;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6C904;
L_08A6C904:;
    s1 = s0 + s1;
    v1 = LD32(s6+9188);
    ST32(s1, v0);
    s0 = s0 + v1;
    s0 = LD32(s0);
    cnd_ = s0 == 0;
    if (cnd_) { s2 = s2 - 1; goto L_08A6C938; }
    goto L_08A6C920;
L_08A6C920:;
    s2 = s2 + 1;
    v0 = (s32)s2 < (s32)s3;
    cnd_ = v0 != 0;
    ST32(s0, 0);
    if (cnd_) { goto L_08A6C8F4; }
    goto L_08A6C930;
L_08A6C930:;
    ST32(s5+9192, s3);
    goto L_08A6C8C4;
L_08A6C938:;
    v0 = (s32)s2 < (s32)s4;
    cnd_ = v0 != 0;
    a1 = (u32)-1;
    if (cnd_) { goto L_08A6C8C8; }
    goto L_08A6C944;
L_08A6C944:;
    v0 = LD32(s6+9188);
    goto L_08A6C948;
L_08A6C948:;
    v1 = s2 << 2;
    s2 = s2 - 1;
    v1 = v1 + v0;
    a0 = LD32(v1);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6C95C;
L_08A6C95C:;
    v0 = (s32)s2 < (s32)s4;
    cnd_ = v0 == 0;
    v0 = LD32(s6+9188);
    if (cnd_) { goto L_08A6C948; }
    goto L_08A6C968;
L_08A6C968:;
    a1 = (u32)-1;
    goto L_08A6C8C8;
L_08A6C970:;
    s6 = D_08C323E4 - (9188);
    goto L_08A6C88C;
}

/* 08A6C978 */
u32 func_08A6C978(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6C978:;
    sp = sp - 16;
    s2 = (u32)-1;
    func_08A6C3FC();
    goto L_08A6C994;
L_08A6C994:;
    v0 = func_08A6C828(0, 0, 0);
    goto L_08A6C99C;
L_08A6C99C:;
    cnd_ = v0 == s2;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A6CAC4; }
    goto L_08A6C9A4;
L_08A6C9A4:;
    v1 = D_08C323E4 - (9188);
    a0 = LD32(v1+9188);
    v0 = v0 << 2;
    a1 = 0 + 0;
    v0 = v0 + a0;
    s0 = LD32(v0);
    a2 = 424;
    a0 = s0 + 0;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6C9C8;
L_08A6C9C8:;
    a3 = D_08C323F0 - (9200);
    v1 = LD32(a3+9200);
    v0 = 1;
    ST32(s0, v0);
    t0 = v1 + 0;
    v1 = v1 + 1;
    ST32(s0+4, s1);
    v0 = 500;
    a1 = s0 + 84;
    ST32(a3+9200, v1);
    v1 = 80;
    a0 = s0 + 0;
    ST32(s0+8, t0);
    a2 = 2048;
    a3 = 4096;
    ST32(s0+296, s2);
    ST32(s0+12, 0);
    ST32(s0+16, 0);
    ST32(s0+20, 0);
    ST32(s0+24, 0);
    ST32(s0+28, 0);
    ST16(s0+32, 0);
    ST32(s0+36, 0);
    ST32(s0+44, 0);
    ST32(s0+48, 0);
    ST32(s0+52, 0);
    ST32(s0+56, 0);
    ST32(s0+60, 0);
    ST32(s0+64, 0);
    ST32(s0+68, 0);
    ST32(s0+72, 0);
    ST32(s0+76, s2);
    ST32(s0+80, 0);
    ST32(s0+264, 0);
    ST32(s0+268, 0);
    ST32(s0+272, 0);
    ST32(s0+276, 0);
    ST32(s0+280, 0);
    ST32(s0+284, 0);
    ST32(s0+288, 0);
    ST32(s0+292, 0);
    ST32(s0+300, 0);
    ST32(s0+304, 0);
    ST32(s0+308, 0);
    ST32(s0+380, v0);
    ST16(s0+388, v1);
    ST32(s0+336, 0);
    ST32(s0+344, 0);
    ST32(s0+348, 0);
    ST32(s0+352, 0);
    ST32(s0+384, 0);
    ST32(s0+392, 0);
    { u64 r_ = func_08A6BC64(a0, a1, a2, a3, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6CA9C;
L_08A6CA9C:;
    cnd_ = v0 == 0;
    a1 = s0 + 120;
    if (cnd_) { goto L_08A6CABC; }
    goto L_08A6CAA4;
L_08A6CAA4:;
    a0 = s0 + 0;
    a2 = 2048;
    a3 = 1024;
    { u64 r_ = func_08A6BC64(a0, a1, a2, a3, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6CAB4;
L_08A6CAB4:;
    cnd_ = v0 != 0;
    a1 = s0 + 156;
    if (cnd_) { goto L_08A6CAE8; }
    goto L_08A6CABC;
L_08A6CABC:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A6CB30(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6CAC4;
L_08A6CAC4:;
    func_08A6C404();
    goto L_08A6CACC;
L_08A6CACC:;
    v0 = 0 + 0;
    goto L_08A6CAD0;
L_08A6CAD0:;
    sp = sp + 16;
    return v0;
L_08A6CAE8:;
    a0 = s0 + 0;
    a2 = 2048;
    a3 = 2048;
    { u64 r_ = func_08A6BC64(a0, a1, a2, a3, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6CAF8;
L_08A6CAF8:;
    cnd_ = v0 == 0;
    a1 = s0 + 192;
    if (cnd_) { goto L_08A6CABC; }
    goto L_08A6CB00;
L_08A6CB00:;
    a0 = s0 + 0;
    a2 = 2048;
    a3 = 1024;
    { u64 r_ = func_08A6BC64(a0, a1, a2, a3, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6CB10;
L_08A6CB10:;
    cnd_ = v0 == 0;
    v1 = D_08C323EC - (9196);
    if (cnd_) { goto L_08A6CABC; }
    goto L_08A6CB18;
L_08A6CB18:;
    v0 = LD32(v1+9196);
    v0 = v0 + 1;
    ST32(v1+9196, v0);
    func_08A6C404();
    goto L_08A6CB28;
L_08A6CB28:;
    v0 = s0 + 0;
    goto L_08A6CAD0;
}

/* 08A6CB30 */
rv_t func_08A6CB30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6CB30:;
    sp = sp - 16;
    v1 = 0 + 0;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A6CB74; }
    goto L_08A6CB48;
L_08A6CB48:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A6CB78; }
    goto L_08A6CB54;
L_08A6CB54:;
    a0 = LD32(a0+4);
    cnd_ = (s32)a0 < 0;
    if (cnd_) {  goto L_08A6CB7C; }
    goto L_08A6CB60;
L_08A6CB60:;
    v1 = D_08C323E8 - (9192);
    v0 = LD32(v1+9192);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A6CB88; }
    goto L_08A6CB74;
L_08A6CB74:;
    goto L_08A6CB78;
L_08A6CB78:;
    goto L_08A6CB7C;
L_08A6CB7C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A6CB88:;
    func_08A6C3FC();
    goto L_08A6CB90;
L_08A6CB90:;
    a0 = LD32(s0+20);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6CB98;
L_08A6CB98:;
    a0 = LD32(s0+24);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6CBA0;
L_08A6CBA0:;
    a0 = LD32(s0+36);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6CBA8;
L_08A6CBA8:;
    a0 = LD32(s0+44);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6CBB0;
L_08A6CBB0:;
    a0 = LD32(s0+300);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6CBB8;
L_08A6CBB8:;
    a0 = LD32(s0+384);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6CBC0;
L_08A6CBC0:;
    a0 = LD32(s0+76);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08A6CBE0; }
    goto L_08A6CBD0;
L_08A6CBD0:;
    a1 = 2;
    v0 = sceNetInetShutdown(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6CBD8;
L_08A6CBD8:;
    a0 = LD32(s0+76);
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6CBE0;
L_08A6CBE0:;
    a0 = s0 + 84;
    func_08A6BD40(a0, 0, 0, 0);
    goto L_08A6CBE8;
L_08A6CBE8:;
    a0 = s0 + 120;
    func_08A6BD40(a0, 0, 0, 0);
    goto L_08A6CBF0;
L_08A6CBF0:;
    a0 = s0 + 156;
    func_08A6BD40(a0, 0, 0, 0);
    goto L_08A6CBF8;
L_08A6CBF8:;
    a0 = s0 + 192;
    func_08A6BD40(a0, 0, 0, 0);
    goto L_08A6CC00;
L_08A6CC00:;
    a0 = s0 + 228;
    func_08A6BD40(a0, 0, 0, 0);
    goto L_08A6CC08;
L_08A6CC08:;
    v0 = LD32(s0+356);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A6CC8C; }
    goto L_08A6CC14;
L_08A6CC14:;
    a0 = LD32(s0+352);
    goto L_08A6CC18;
L_08A6CC18:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A6CC6C; }
    goto L_08A6CC20;
L_08A6CC20:;
    v0 = LD32(s0+400);
    goto L_08A6CC24;
L_08A6CC24:;
    cnd_ = v0 == 0;
    v1 = D_08C323EC - (9196);
    if (cnd_) { goto L_08A6CC40; }
    goto L_08A6CC2C;
L_08A6CC2C:;
    v0 = LD32(s0+412);
    cnd_ = v0 != 0;
    a1 = s0 + 392;
    if (cnd_) { goto L_08A6CC5C; }
    goto L_08A6CC38;
L_08A6CC38:;
    ST32(s0+400, 0);
    goto L_08A6CC3C;
L_08A6CC3C:;
    v1 = D_08C323EC - (9196);
    goto L_08A6CC40;
L_08A6CC40:;
    v0 = LD32(v1+9196);
    ST32(s0, 0);
    v0 = v0 - 1;
    ST32(v1+9196, v0);
    func_08A6C404();
    goto L_08A6CC54;
L_08A6CC54:;
    v1 = 1;
    goto L_08A6CB74;
L_08A6CC5C:;
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6CC64;
L_08A6CC64:;
    ST32(s0+400, 0);
    goto L_08A6CC3C;
L_08A6CC6C:;
    v0 = func_08A6D4E0(a0);
    goto L_08A6CC74;
L_08A6CC74:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+400); goto L_08A6CC24; }
    goto L_08A6CC7C;
L_08A6CC7C:;
    a0 = LD32(s0+352);
    func_08A6D4E8(a0, 0, 0, 0);
    goto L_08A6CC84;
L_08A6CC84:;
    ST32(s0+352, 0);
    goto L_08A6CC20;
L_08A6CC8C:;
    a0 = s0 + 0;
    func_08A6D9DC(a0, 0, 0, 0);
    goto L_08A6CC94;
L_08A6CC94:;
    a0 = LD32(s0+352);
    goto L_08A6CC18;
}

/* 08A6CC9C */
u32 func_08A6CC9C(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6CC9C:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A6C3FC();
    goto L_08A6CCB0;
L_08A6CCB0:;
    cnd_ = (s32)s0 < 0;
    v1 = D_08C323E8 - (9192);
    if (cnd_) { goto L_08A6CCC8; }
    goto L_08A6CCB8;
L_08A6CCB8:;
    v0 = LD32(v1+9192);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    a0 = s0 << 2;
    if (cnd_) { goto L_08A6CCE4; }
    goto L_08A6CCC8;
L_08A6CCC8:;
    func_08A6C404();
    goto L_08A6CCD0;
L_08A6CCD0:;
    v0 = 0 + 0;
    goto L_08A6CCD4;
L_08A6CCD4:;
    sp = sp + 16;
    return v0;
L_08A6CCE4:;
    v1 = D_08C323E4 - (9188);
    v0 = LD32(v1+9188);
    v0 = a0 + v0;
    s0 = LD32(v0);
    v1 = LD32(s0);
    if (v1 == 0) s0 = 0;
    func_08A6C404();
    goto L_08A6CD00;
L_08A6CD00:;
    v0 = s0 + 0;
    goto L_08A6CCD4;
}

/* 08A6CD08 */
void func_08A6CD08(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6CD08:;
    sp = sp - 32;
    v0 = D_08C323EC - (9196);
    v1 = LD32(v0+9196);
    cnd_ = (s32)v1 <= 0;
    s3 = a0 + 0;
    if (cnd_) { goto L_08A6CD7C; }
    goto L_08A6CD30;
L_08A6CD30:;
    s2 = D_08C323E8 - (9192);
    func_08A6C3FC();
    goto L_08A6CD38;
L_08A6CD38:;
    v0 = LD32(s2+9192);
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A6CD74; }
    goto L_08A6CD44;
L_08A6CD44:;
    s1 = D_08C323E4 - (9188);
    v1 = LD32(s1+9188);
    goto L_08A6CD4C;
L_08A6CD4C:;
    v0 = s0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v1 = LD32(a0);
    cnd_ = v1 != 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_08A6CD98; }
    goto L_08A6CD64;
L_08A6CD64:;
    v0 = LD32(s2+9192);
    goto L_08A6CD68;
L_08A6CD68:;
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    v1 = LD32(s1+9188);
    if (cnd_) { goto L_08A6CD4C; }
    goto L_08A6CD74;
L_08A6CD74:;
    func_08A6C404();
    goto L_08A6CD7C;
L_08A6CD7C:;
    sp = sp + 32;
    return;
L_08A6CD98:;
    t_ = s3;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6CDA0;
L_08A6CDA0:;
    v0 = LD32(s2+9192);
    goto L_08A6CD68;
}

/* 08A6CDA8 */
void func_08A6CDA8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6CDA8:;
    sp = sp - 16;
    s0 = a0 + 0;
    ST32(a0+16, 0);
    a0 = LD32(a0+20);
    { u64 r_ = func_08A6AFBC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6CDC4;
L_08A6CDC4:;
    v0 = LD32(s0+300);
    a0 = LD32(s0+24);
    ST32(s0+300, 0);
    ST32(s0+20, v0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6CDD8;
L_08A6CDD8:;
    a0 = LD32(s0+36);
    ST32(s0+24, 0);
    ST32(s0+28, 0);
    ST16(s0+32, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6CDEC;
L_08A6CDEC:;
    a0 = LD32(s0+76);
    ST32(s0+36, 0);
    a1 = 2;
    v0 = sceNetInetShutdown(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6CDFC;
L_08A6CDFC:;
    a0 = LD32(s0+76);
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6CE04;
L_08A6CE04:;
    v1 = (u32)-1;
    ST32(s0+76, v1);
    a0 = s0 + 84;
    func_08A6C1D4(a0);
    goto L_08A6CE14;
L_08A6CE14:;
    a0 = s0 + 120;
    func_08A6C1D4(a0);
    goto L_08A6CE1C;
L_08A6CE1C:;
    a0 = s0 + 156;
    func_08A6C1D4(a0);
    goto L_08A6CE24;
L_08A6CE24:;
    a0 = s0 + 192;
    func_08A6C1D4(a0);
    goto L_08A6CE2C;
L_08A6CE2C:;
    v0 = LD32(s0+400);
    ST32(s0+268, 0);
    ST32(s0+272, 0);
    ST32(s0+276, 0);
    ST32(s0+280, 0);
    ST32(s0+284, 0);
    cnd_ = v0 == 0;
    ST32(s0+340, 0);
    if (cnd_) { goto L_08A6CE84; }
    goto L_08A6CE4C;
L_08A6CE4C:;
    v0 = LD32(s0+412);
    a1 = s0 + 392;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A6CEA0; }
    goto L_08A6CE5C;
L_08A6CE5C:;
    ST32(s0+400, 0);
    goto L_08A6CE60;
L_08A6CE60:;
    a0 = D_08AE6D48 - (27976);
    a2 = 8;
    a1 = LD32(s0+20);
    a0 = a0 + 27976;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6CE74;
L_08A6CE74:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+304); goto L_08A6CE88; }
    goto L_08A6CE7C;
L_08A6CE7C:;
    ST32(s0+396, 0);
    ST32(s0+392, 0);
    goto L_08A6CE84;
L_08A6CE84:;
    v0 = LD32(s0+304);
    goto L_08A6CE88;
L_08A6CE88:;
    v0 = v0 + 1;
    ST32(s0+304, v0);
    sp = sp + 16;
    return;
L_08A6CEA0:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6CEA8;
L_08A6CEA8:;
    ST32(s0+400, 0);
    goto L_08A6CE60;
}

/* 08A6CEB0 */
void func_08A6CEB0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6CEB0:;
    sp = sp - 16;
    s1 = D_08C323E4 - (9188);
    v0 = LD32(s1+9188);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A6CEE8; }
    goto L_08A6CED0;
L_08A6CED0:;
    sp = sp + 16;
    return;
L_08A6CEE8:;
    a0 = RS_FADDR(func_08A6CB30, 0x08A6CB30u) - (-13520);
    a0 = a0 - 13520;
    s2 = D_08C323E8 - (9192);
    func_08A6CD08(a0);
    goto L_08A6CEF8;
L_08A6CEF8:;
    v0 = LD32(s2+9192);
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A6CF2C; }
    goto L_08A6CF04;
L_08A6CF04:;
    v1 = LD32(s1+9188);
    goto L_08A6CF08;
L_08A6CF08:;
    v0 = s0 << 2;
    s0 = s0 + 1;
    v0 = v0 + v1;
    a0 = LD32(v0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6CF1C;
L_08A6CF1C:;
    v0 = LD32(s2+9192);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    v1 = LD32(s1+9188);
    if (cnd_) { goto L_08A6CF08; }
    goto L_08A6CF2C;
L_08A6CF2C:;
    a0 = LD32(s1+9188);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6CF34;
L_08A6CF34:;
    v0 = D_08C323EC - (9196);
    ST32(s1+9188, 0);
    ST32(s2+9192, 0);
    ST32(v0+9196, 0);
    goto L_08A6CED0;
}

/* 08A6CF48 */
void func_08A6CF48(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_08A6CF48:;
    a1 = LD32(a0+276);
    v0 = 0x51eb0000u;
    v0 = v0 | 0x851f;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a2 = a0 + 0;
    a0 = (u32)((s32)a1 >> 31);
    v1 = 4;
    v0 = hi;
    v0 = (u32)((s32)v0 >> 5);
    a0 = v0 - a0;
    cnd_ = a0 == v1;
    v0 = (s32)a0 < 5;
    if (cnd_) { goto L_08A6CF98; }
    goto L_08A6CF78;
L_08A6CF78:;
    cnd_ = v0 != 0;
    v0 = 5;
    if (cnd_) { goto L_08A6CF88; }
    goto L_08A6CF80;
L_08A6CF80:;
    cnd_ = a0 == v0;
    if (cnd_) { v0 = 12; goto L_08A6CF90; }
    goto L_08A6CF88;
L_08A6CF88:;
    return;
L_08A6CF90:;
    ST32(a2+60, v0);
    return;
L_08A6CF98:;
    v0 = 403;
    cnd_ = a1 == v0;
    v0 = 10;
    if (cnd_) { goto L_08A6CFC0; }
    goto L_08A6CFA4;
L_08A6CFA4:;
    v0 = (s32)a1 < 404;
    cnd_ = v0 == 0;
    v0 = 404;
    if (cnd_) { goto L_08A6CFC8; }
    goto L_08A6CFB0;
L_08A6CFB0:;
    v0 = 401;
    cnd_ = a1 == v0;
    v0 = 9;
    if (cnd_) { goto L_08A6CFC0; }
    goto L_08A6CFBC;
L_08A6CFBC:;
    v0 = 8;
    goto L_08A6CFC0;
L_08A6CFC0:;
    ST32(a2+60, v0);
    return;
L_08A6CFC8:;
    cnd_ = a1 == v0;
    v0 = 11;
    if (cnd_) { goto L_08A6CFC0; }
    goto L_08A6CFD0;
L_08A6CFD0:;
    v0 = 410;
    cnd_ = a1 != v0;
    if (cnd_) { v0 = 8; goto L_08A6CFC0; }
    goto L_08A6CFDC;
L_08A6CFDC:;
    v0 = 11;
    goto L_08A6CFC0;
}

/* 08A6CFE4 */
rv_t func_08A6CFE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6CFE4:;
    sp = sp - 16;
    v1 = 0 + 0;
    v0 = LD32(a0+336);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A6D0A8; }
    goto L_08A6D008;
L_08A6D008:;
    v1 = LD32(a0+16);
    v0 = 1;
    cnd_ = v1 == 0;
    ST32(a0+336, v0);
    if (cnd_) { goto L_08A6D198; }
    goto L_08A6D018;
L_08A6D018:;
    s2 = 1;
    goto L_08A6D01C;
L_08A6D01C:;
    cnd_ = v1 == s2;
    if (cnd_) { goto L_08A6D188; }
    goto L_08A6D024;
L_08A6D024:;
    v0 = 2;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A6D178; }
    goto L_08A6D030;
L_08A6D030:;
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A6D168; }
    goto L_08A6D03C;
L_08A6D03C:;
    v0 = 4;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A6D158; }
    goto L_08A6D048;
L_08A6D048:;
    v0 = 5;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A6D148; }
    goto L_08A6D054;
L_08A6D054:;
    v0 = 6;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A6D138; }
    goto L_08A6D060;
L_08A6D060:;
    v0 = 7;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A6D128; }
    goto L_08A6D06C;
L_08A6D06C:;
    v0 = 8;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A6D118; }
    goto L_08A6D078;
L_08A6D078:;
    v0 = LD32(s0+300);
    goto L_08A6D07C;
L_08A6D07C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A6D108; }
    goto L_08A6D084;
L_08A6D084:;
    s1 = LD32(s0+288);
    goto L_08A6D088;
L_08A6D088:;
    v1 = LD32(s0+60);
    v0 = 18;
    cnd_ = v1 == v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A6D0E4; }
    goto L_08A6D098;
L_08A6D098:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A6D0C4; }
    goto L_08A6D0A0;
L_08A6D0A0:;
    ST32(s0+336, 0);
    v1 = s1 + 0;
    goto L_08A6D0A8;
L_08A6D0A8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A6D0C4:;
    a0 = s0 + 0;
    func_08A6CF48(a0);
    goto L_08A6D0CC;
L_08A6D0CC:;
    a0 = s0 + 0;
    func_08A6C2D8(a0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A6D0D4;
L_08A6D0D4:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A6CB30(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6D0DC;
L_08A6D0DC:;
    v1 = s1 + 0;
    goto L_08A6D0A8;
L_08A6D0E4:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_08A6D098; }
    goto L_08A6D0EC;
L_08A6D0EC:;
    a0 = LD32(s0+76);
    { u64 r_ = func_08A6B358(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6D0F4;
L_08A6D0F4:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+288); goto L_08A6D098; }
    goto L_08A6D0FC;
L_08A6D0FC:;
    a0 = 1;
    ST32(s0+288, s2);
    goto L_08A6D098;
L_08A6D108:;
    a0 = s0 + 0;
    func_08A6CDA8(a0, t1, t2, t3);
    goto L_08A6D110;
L_08A6D110:;
    s1 = LD32(s0+288);
    goto L_08A6D088;
L_08A6D118:;
    a0 = s0 + 0;
    f0 = func_08A6F498(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6D120;
L_08A6D120:;
    v0 = LD32(s0+300);
    goto L_08A6D07C;
L_08A6D128:;
    a0 = s0 + 0;
    f0 = func_08A6EFEC(a0, a3, t0, t1, t2, t3);
    goto L_08A6D130;
L_08A6D130:;
    v1 = LD32(s0+16);
    goto L_08A6D06C;
L_08A6D138:;
    a0 = s0 + 0;
    f0 = func_08A6EB80(a0, a3, t0, t1, t2, t3);
    goto L_08A6D140;
L_08A6D140:;
    v1 = LD32(s0+16);
    goto L_08A6D060;
L_08A6D148:;
    a0 = s0 + 0;
    f0 = func_08A6E9D0(a0, t1, t2, t3);
    goto L_08A6D150;
L_08A6D150:;
    v1 = LD32(s0+16);
    goto L_08A6D054;
L_08A6D158:;
    a0 = s0 + 0;
    f0 = func_08A6E934(a0);
    goto L_08A6D160;
L_08A6D160:;
    v1 = LD32(s0+16);
    goto L_08A6D048;
L_08A6D168:;
    a0 = s0 + 0;
    f0 = func_08A6E698(a0, t1, t2, t3);
    goto L_08A6D170;
L_08A6D170:;
    v1 = LD32(s0+16);
    goto L_08A6D03C;
L_08A6D178:;
    a0 = s0 + 0;
    f0 = func_08A6E578(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A6D180;
L_08A6D180:;
    v1 = LD32(s0+16);
    goto L_08A6D030;
L_08A6D188:;
    a0 = s0 + 0;
    f0 = func_08A6E38C(a0, a3, t0, t1, t2, t3);
    goto L_08A6D190;
L_08A6D190:;
    v1 = LD32(s0+16);
    goto L_08A6D024;
L_08A6D198:;
    s2 = 1;
    f0 = func_08A6E284(a0, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A6D1A0;
L_08A6D1A0:;
    v1 = LD32(s0+16);
    goto L_08A6D01C;
}

/* 08A6D1A8 */
void func_08A6D1A8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6D1A8:;
    sp = sp - 16;
    func_08A6C3FC();
    goto L_08A6D1B8;
L_08A6D1B8:;
    v0 = D_08C323F4 - (9204);
    v1 = LD32(v0+9204);
    a0 = 1;
    v1 = v1 + 1;
    cnd_ = v1 == a0;
    ST32(v0+9204, v1);
    if (cnd_) { goto L_08A6D1E4; }
    goto L_08A6D1D0;
L_08A6D1D0:;
    func_08A6C404();
    goto L_08A6D1D8;
L_08A6D1D8:;
    sp = sp + 16;
    return;
L_08A6D1E4:;
    func_08A6C3EC();
    goto L_08A6D1EC;
L_08A6D1EC:;
    v0 = D_08B1CBEC - (-13332);
    v1 = 125;
    ST32(v0-13332, v1);
    a0 = 250;
    v0 = D_08B1CBF0 - (-13328);
    ST32(v0-13328, a0);
    goto L_08A6D1D8;
}

/* 08A6D208 */
void func_08A6D208(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6D208:;
    sp = sp - 16;
    s0 = D_08C38B98 - (-29800);
    func_08A6C3FC();
    goto L_08A6D21C;
L_08A6D21C:;
    v1 = D_08C323F4 - (9204);
    v0 = LD32(v1+9204);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(v1+9204, v0);
    if (cnd_) { goto L_08A6D274; }
    goto L_08A6D230;
L_08A6D230:;
    func_08A6CEB0();
    goto L_08A6D238;
L_08A6D238:;
    v0 = LD32(s0-29800);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A6D264; }
    goto L_08A6D244;
L_08A6D244:;
    func_08A6C404();
    goto L_08A6D24C;
L_08A6D24C:;
    func_08A6C3F4();
    goto L_08A6D254;
L_08A6D254:;
    goto L_08A6D258;
L_08A6D258:;
    sp = sp + 16;
    return;
L_08A6D264:;
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6D26C;
L_08A6D26C:;
    ST32(s0-29800, 0);
    goto L_08A6D244;
L_08A6D274:;
    func_08A6C404();
    goto L_08A6D27C;
L_08A6D27C:;
    goto L_08A6D258;
}

/* 08A6D284 */
u32 func_08A6D284(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6D284:;
    sp = sp - 32;
    v1 = a3 + 0;
    v0 = a2 + 0;
    t2 = a1 + 0;
    a2 = 0 + 0;
    a1 = 0 + 0;
    a3 = 0 + 0;
    t0 = 0 + 0;
    t1 = 0 + 0;
    t3 = 0 + 0;
    ST32(sp, v0);
    ST32(sp+4, v1);
    v0 = func_08A6D2C8(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_08A6D2BC;
L_08A6D2BC:;
    sp = sp + 32;
    return v0;
}

/* 08A6D2C8 */
u32 func_08A6D2C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, u32 sp_in)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64); memcpy(stack_ + 64, PTR(sp_in), 16); /* stack-passed arguments */
L_08A6D2C8:;
    sp = sp - 64;
    fp = t0 + 0;
    s7 = a2 + 0;
    s6 = t1 + 0;
    s5 = t3 + 0;
    s4 = a3 + 0;
    s3 = a1 + 0;
    s1 = a0 + 0;
    cnd_ = a0 == 0;
    ST32(sp, t2);
    if (cnd_) { goto L_08A6D448; }
    goto L_08A6D318;
L_08A6D318:;
    v0 = (u32)(s32)LD_S8(a0);
    cnd_ = v0 == 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08A6D40C; }
    goto L_08A6D324;
L_08A6D324:;
    cnd_ = (s32)a3 < 0;
    s2 = 0 < a2;
    if (cnd_) { goto L_08A6D40C; }
    goto L_08A6D32C;
L_08A6D32C:;
    v0 = a3 < 0x1u;
    v0 = s2 & v0;
    cnd_ = v0 != 0;
    v0 = D_08C323F4 - (9204);
    if (cnd_) { goto L_08A6D40C; }
    goto L_08A6D33C;
L_08A6D33C:;
    v1 = LD32(v0+9204);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A6D484; }
    goto L_08A6D348;
L_08A6D348:;
    v0 = func_08A6C978();
    goto L_08A6D350;
L_08A6D350:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08A6D40C; }
    goto L_08A6D35C;
L_08A6D35C:;
    ST32(v0+12, 0);
    a0 = s1 + 0;
    { u64 r_ = func_08A6B560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6D368;
L_08A6D368:;
    cnd_ = v0 == 0;
    ST32(s0+20, v0);
    if (cnd_) { goto L_08A6D440; }
    goto L_08A6D370;
L_08A6D370:;
    cnd_ = s3 == 0;
    v0 = LD32(sp+64);
    if (cnd_) { goto L_08A6D388; }
    goto L_08A6D378;
L_08A6D378:;
    v0 = (u32)(s32)LD_S8(s3);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A6D46C; }
    goto L_08A6D384;
L_08A6D384:;
    v0 = LD32(sp+64);
    goto L_08A6D388;
L_08A6D388:;
    v1 = LD32(sp+68);
    ST32(s0+64, s5);
    ST32(s0+68, v0);
    v0 = LD32(sp);
    ST32(s0+72, v1);
    ST32(s0+344, s6);
    ST32(s0+352, fp);
    ST32(s0+52, v0);
    cnd_ = s2 == 0;
    ST32(s0+264, s2);
    if (cnd_) { goto L_08A6D450; }
    goto L_08A6D3B0;
L_08A6D3B0:;
    a1 = s0 + 228;
    a2 = s7 + 0;
    a3 = s4 + 0;
    a0 = s0 + 0;
    { u64 r_ = func_08A6BCEC(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6D3C4;
L_08A6D3C4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A6D440; }
    goto L_08A6D3CC;
L_08A6D3CC:;
    cnd_ = fp == 0;
    v0 = LD32(sp);
    if (cnd_) { goto L_08A6D3E4; }
    goto L_08A6D3D4;
L_08A6D3D4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A6D8B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6D3DC;
L_08A6D3DC:;
    cnd_ = v0 == 0;
    v0 = LD32(sp);
    if (cnd_) { goto L_08A6D440; }
    goto L_08A6D3E4;
L_08A6D3E4:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0+4); goto L_08A6D40C; }
    goto L_08A6D3EC;
L_08A6D3EC:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A6CFE4(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6D3F4;
L_08A6D3F4:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A6D40C; }
    goto L_08A6D3FC;
L_08A6D3FC:;
    a0 = 10;
    func_08A6B694(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08A6D404;
L_08A6D404:;
    goto L_08A6D3EC;
L_08A6D40C:;
    v0 = v1 + 0;
    sp = sp + 64;
    return v0;
L_08A6D440:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A6CB30(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6D448;
L_08A6D448:;
    v1 = (u32)-1;
    goto L_08A6D40C;
L_08A6D450:;
    a1 = s0 + 228;
    a0 = s0 + 0;
    a2 = 2048;
    a3 = 2048;
    { u64 r_ = func_08A6BC64(a0, a1, a2, a3, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6D464;
L_08A6D464:;
    goto L_08A6D3C4;
L_08A6D46C:;
    a0 = s3 + 0;
    { u64 r_ = func_08A6B560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6D474;
L_08A6D474:;
    cnd_ = v0 != 0;
    ST32(s0+44, v0);
    if (cnd_) { goto L_08A6D384; }
    goto L_08A6D47C;
L_08A6D47C:;
    goto L_08A6D440;
L_08A6D484:;
    func_08A6D1A8();
    goto L_08A6D48C;
L_08A6D48C:;
    goto L_08A6D348;
}

/* 08A6D494 */
void func_08A6D494(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6D494:;
    a0 = RS_FADDR(func_08A6CFE4, 0x08A6CFE4u) - (-12316);
    sp = sp - 16;
    a0 = a0 - 12316;
    func_08A6CD08(a0);
    goto L_08A6D4A8;
L_08A6D4A8:;
    sp = sp + 16;
    return;
}

/* 08A6D4B4 */
void func_08A6D4B4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6D4B4:;
    sp = sp - 16;
    v0 = func_08A6CC9C(a0);
    goto L_08A6D4C4;
L_08A6D4C4:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A6D4D4; }
    goto L_08A6D4CC;
L_08A6D4CC:;
    { rv_t r_ = func_08A6CB30(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6D4D4;
L_08A6D4D4:;
    sp = sp + 16;
    return;
}

/* 08A6D4E0 */
u32 func_08A6D4E0(u32 a0)
{
    u32 v0 = 0;
L_08A6D4E0:;
    v0 = LD32(a0+16);
    return v0;
}

/* 08A6D4E8 */
void func_08A6D4E8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6D4E8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0);
    { u64 r_ = func_08A83A24(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6D500;
L_08A6D500:;
    a0 = s0 + 0;
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6D508;
L_08A6D508:;
    sp = sp + 16;
    return;
}

/* 08A6D518 */
u32 func_08A6D518(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A6D518:;
    v1 = LD32(a0+352);
    v0 = D_08AE6E4C - (28236);
    cnd_ = v1 == 0;
    v0 = v0 + 28236;
    if (cnd_) { goto L_08A6D540; }
    goto L_08A6D528;
L_08A6D528:;
    v1 = LD32(v1+12);
    v0 = D_08AE6E50 - (28240);
    cnd_ = v1 != 0;
    v0 = v0 + 28240;
    if (cnd_) { goto L_08A6D540; }
    goto L_08A6D538;
L_08A6D538:;
    v0 = D_08AE6E94 - (28308);
    v0 = v0 + 28308;
    goto L_08A6D540;
L_08A6D540:;
    return v0;
}

/* 08A6D548 */
u32 func_08A6D548(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6D548:;
    sp = sp - 32;
    s1 = 0 + 0;
    s4 = LD32(a0+352);
    a0 = LD32(s4);
    v0 = func_08A83A88(a0);
    goto L_08A6D574;
L_08A6D574:;
    s3 = v0 + 0;
    cnd_ = s3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A6D5D0; }
    goto L_08A6D580;
L_08A6D580:;
    cnd_ = (s32)s3 <= 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A6D5C8; }
    goto L_08A6D588;
L_08A6D588:;
    a0 = LD32(s4);
    a1 = s2 + 0;
    s2 = s2 + 1;
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6D598;
L_08A6D598:;
    a0 = LD32(v0+4);
    s0 = v0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6D5A4;
L_08A6D5A4:;
    v1 = LD32(s0+20);
    a0 = LD32(s0+12);
    s1 = s1 + v0;
    v1 = v1 << 1;
    s1 = s1 + a0;
    s1 = s1 + v1;
    v0 = (s32)s2 < (s32)s3;
    cnd_ = v0 != 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08A6D588; }
    goto L_08A6D5C8;
L_08A6D5C8:;
    v0 = s1 + s3;
    v0 = v0 - 1;
    goto L_08A6D5D0;
L_08A6D5D0:;
    sp = sp + 32;
    return v0;
}

/* 08A6D5F0 */
u32 func_08A6D5F0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A6D5F0:;
    sp = sp - 48;
    v1 = D_08C323F8 - (9208);
    fp = a0 + 0;
    s1 = 0 + 0;
    v0 = LD32(v1+9208);
    cnd_ = v0 != 0;
    s4 = LD32(a0+352);
    if (cnd_) { goto L_08A6D660; }
    goto L_08A6D634;
L_08A6D634:;
    v0 = 37;
    ST32(v1+9208, v0);
    v1 = 84;
    v0 = D_08C323FC - (9212);
    ST32(v0+9212, v1);
    a0 = 113;
    v0 = D_08C32400 - (9216);
    ST32(v0+9216, a0);
    v1 = 41;
    v0 = D_08C32404 - (9220);
    ST32(v0+9220, v1);
    goto L_08A6D660;
L_08A6D660:;
    a0 = LD32(s4);
    s2 = 0 + 0;
    v0 = func_08A83A88(a0);
    goto L_08A6D66C;
L_08A6D66C:;
    cnd_ = (s32)v0 <= 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A6D6E8; }
    goto L_08A6D674;
L_08A6D674:;
    s5 = 1;
    s6 = D_08C32400 - (9216);
    s7 = 2;
    goto L_08A6D680;
L_08A6D680:;
    a0 = LD32(s4);
    a1 = s2 + 0;
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6D68C;
L_08A6D68C:;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A6D760; }
    goto L_08A6D698;
L_08A6D698:;
    cnd_ = v1 == s5;
    v0 = LD32(s6+9216);
    if (cnd_) { goto L_08A6D724; }
    goto L_08A6D6A0;
L_08A6D6A0:;
    cnd_ = v1 != s7;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A6D6F4; }
    goto L_08A6D6A8;
L_08A6D6A8:;
    v0 = LD32(s6+9216);
    a0 = LD32(s0+4);
    s1 = s1 + v0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6D6B8;
L_08A6D6B8:;
    a0 = LD32(s0+16);
    s1 = s1 + v0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6D6C4;
L_08A6D6C4:;
    a0 = LD32(s0+20);
    goto L_08A6D6C8;
L_08A6D6C8:;
    s1 = s1 + v0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6D6D0;
L_08A6D6D0:;
    v1 = LD32(s0+12);
    s1 = s1 + v0;
    goto L_08A6D6D8;
L_08A6D6D8:;
    s2 = s2 + 1;
    v0 = (s32)s2 < (s32)s3;
    cnd_ = v0 != 0;
    s1 = s1 + v1;
    if (cnd_) { goto L_08A6D680; }
    goto L_08A6D6E8;
L_08A6D6E8:;
    v0 = D_08C32404 - (9220);
    v1 = LD32(v0+9220);
    v0 = s1 + v1;
    goto L_08A6D6F4;
L_08A6D6F4:;
    sp = sp + 48;
    return v0;
L_08A6D724:;
    a0 = LD32(s0+4);
    s1 = s1 + v0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6D730;
L_08A6D730:;
    a0 = LD32(s0+12);
    s1 = s1 + v0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6D73C;
L_08A6D73C:;
    a0 = LD32(s0+16);
    s1 = s1 + v0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6D748;
L_08A6D748:;
    a0 = LD32(fp+356);
    a1 = s2 + 0;
    s1 = s1 + v0;
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6D758;
L_08A6D758:;
    v1 = LD32(v0+12);
    goto L_08A6D6D8;
L_08A6D760:;
    v1 = D_08C323FC - (9212);
    v0 = LD32(v1+9212);
    a0 = LD32(s0+4);
    goto L_08A6D6C8;
}

/* 08A6D770 */
u32 func_08A6D770(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6D770:;
    sp = sp - 16;
    v1 = LD32(a0+352);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A6D798; }
    goto L_08A6D784;
L_08A6D784:;
    v0 = LD32(v1+12);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A6D7A4; }
    goto L_08A6D790;
L_08A6D790:;
    v0 = func_08A6D5F0(a0);
    goto L_08A6D798;
L_08A6D798:;
    goto L_08A6D79C;
L_08A6D79C:;
    sp = sp + 16;
    return v0;
L_08A6D7A4:;
    v0 = func_08A6D548(a0);
    goto L_08A6D7AC;
L_08A6D7AC:;
    goto L_08A6D79C;
}

/* 08A6D7B4 */
u32 func_08A6D7B4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6D7B4:;
    sp = sp - 16;
    s1 = (u32)-1;
    v0 = LD32(a0);
    ST32(a0+4, s1);
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A6D80C; }
    goto L_08A6D7DC;
L_08A6D7DC:;
    v0 = 1;
    cnd_ = v1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A6D814; }
    goto L_08A6D7E8;
L_08A6D7E8:;
    v0 = 2;
    cnd_ = v1 == v0;
    if (cnd_) { a3 = 1; goto L_08A6D7F4; }
    goto L_08A6D7F4;
L_08A6D7F4:;
    v0 = a3 + 0;
    sp = sp + 16;
    return v0;
L_08A6D80C:;
    a3 = 1;
    goto L_08A6D7F4;
L_08A6D814:;
    v0 = LD32(a0+8);
    a1 = 0 + 0;
    a2 = 2;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A6D7F4; }
    goto L_08A6D828;
L_08A6D828:;
    v0 = func_08A86D64(a0, a1, a2);
    goto L_08A6D830;
L_08A6D830:;
    cnd_ = v0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A6D7F4; }
    goto L_08A6D838;
L_08A6D838:;
    a0 = LD32(s0+8);
    v0 = func_08A86F1C(a0);
    goto L_08A6D840;
L_08A6D840:;
    ST32(s0+12, v0);
    cnd_ = v0 == s1;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A6D7F4; }
    goto L_08A6D84C;
L_08A6D84C:;
    a0 = LD32(s0+8);
    func_08A892E0(a0);
    goto L_08A6D854;
L_08A6D854:;
    a3 = 1;
    goto L_08A6D7F4;
}

/* 08A6D85C */
void func_08A6D85C(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6D85C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A6D884; }
    goto L_08A6D878;
L_08A6D878:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0+8); goto L_08A6D894; }
    goto L_08A6D884;
L_08A6D884:;
    sp = sp + 16;
    return;
L_08A6D894:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A6D8A4; }
    goto L_08A6D89C;
L_08A6D89C:;
    ST32(s0+8, 0);
    goto L_08A6D884;
L_08A6D8A4:;
    { rv_t r_ = func_08A860C0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6D8AC;
L_08A6D8AC:;
    ST32(s0+8, 0);
    goto L_08A6D884;
}

/* 08A6D8B4 */
u64 func_08A6D8B4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6D8B4:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = LD32(a0+352);
    cnd_ = a0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A6D8F4; }
    goto L_08A6D8D8;
L_08A6D8D8:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08A6D8F4:;
    v1 = LD32(a0+8);
    v0 = LD32(a0+4);
    ST32(s0+360, 0);
    ST32(s0+376, v1);
    a0 = LD32(a0);
    ST32(s0+372, v0);
    ST32(s0+364, 0);
    ST32(s0+368, 0);
    v0 = func_08A83A88(a0);
    goto L_08A6D918;
L_08A6D918:;
    a1 = v0 + 0;
    a0 = 16;
    a2 = 0 + 0;
    s2 = v0 + 0;
    v0 = func_08A8399C(a0, a1, a2, 0, 0, 0);
    goto L_08A6D92C;
L_08A6D92C:;
    ST32(s0+356, v0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A6D8D8; }
    goto L_08A6D938;
L_08A6D938:;
    cnd_ = (s32)s2 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A6D988; }
    goto L_08A6D940;
L_08A6D940:;
    v0 = LD32(s0+352);
    goto L_08A6D944;
L_08A6D944:;
    a1 = s1 + 0;
    a0 = LD32(v0);
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6D950;
L_08A6D950:;
    a0 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    v0 = func_08A6D7B4(a0);
    goto L_08A6D968;
L_08A6D968:;
    cnd_ = v0 == 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08A6D99C; }
    goto L_08A6D970;
L_08A6D970:;
    a0 = LD32(s0+356);
    s1 = s1 + 1;
    func_08A83AC4(a0, a1, 0, 0, 0);
    goto L_08A6D97C;
L_08A6D97C:;
    v0 = (s32)s1 < (s32)s2;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+352); goto L_08A6D944; }
    goto L_08A6D988;
L_08A6D988:;
    a0 = s0 + 0;
    v0 = func_08A6D770(a0);
    goto L_08A6D990;
L_08A6D990:;
    ST32(s0+368, v0);
    v1 = 1;
    goto L_08A6D8D8;
L_08A6D99C:;
    s1 = s1 - 1;
    cnd_ = (s32)s1 < 0;
    if (cnd_) { goto L_08A6D9C8; }
    goto L_08A6D9A8;
L_08A6D9A8:;
    a0 = LD32(s0+356);
    goto L_08A6D9AC;
L_08A6D9AC:;
    a1 = s1 + 0;
    s1 = s1 - 1;
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6D9B8;
L_08A6D9B8:;
    a0 = v0 + 0;
    func_08A6D85C(a0);
    goto L_08A6D9C0;
L_08A6D9C0:;
    cnd_ = (s32)s1 >= 0;
    if (cnd_) { a0 = LD32(s0+356); goto L_08A6D9AC; }
    goto L_08A6D9C8;
L_08A6D9C8:;
    a0 = LD32(s0+356);
    { u64 r_ = func_08A83A24(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6D9D0;
L_08A6D9D0:;
    v1 = 0 + 0;
    ST32(s0+356, 0);
    goto L_08A6D8D8;
}

/* 08A6D9DC */
void func_08A6D9DC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6D9DC:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0+356);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A6DA40; }
    goto L_08A6DA00;
L_08A6DA00:;
    a0 = LD32(s1+352);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A6DA1C; }
    goto L_08A6DA0C;
L_08A6DA0C:;
    v0 = LD32(a0+16);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A6DA30; }
    goto L_08A6DA18;
L_08A6DA18:;
    goto L_08A6DA1C;
L_08A6DA1C:;
    sp = sp + 16;
    return;
L_08A6DA30:;
    func_08A6D4E8(a0, t1, t2, t3);
    goto L_08A6DA38;
L_08A6DA38:;
    ST32(s1+352, 0);
    goto L_08A6DA18;
L_08A6DA40:;
    s0 = 0 + 0;
    v0 = func_08A83A88(a0);
    goto L_08A6DA48;
L_08A6DA48:;
    cnd_ = (s32)v0 <= 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A6DA74; }
    goto L_08A6DA50;
L_08A6DA50:;
    a0 = LD32(s1+356);
    goto L_08A6DA54;
L_08A6DA54:;
    a1 = s0 + 0;
    s0 = s0 + 1;
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6DA60;
L_08A6DA60:;
    a0 = v0 + 0;
    func_08A6D85C(a0);
    goto L_08A6DA68;
L_08A6DA68:;
    v0 = (s32)s0 < (s32)s2;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+356); goto L_08A6DA54; }
    goto L_08A6DA74;
L_08A6DA74:;
    a0 = LD32(s1+356);
    { u64 r_ = func_08A83A24(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6DA7C;
L_08A6DA7C:;
    ST32(s1+356, 0);
    goto L_08A6DA00;
}

/* 08A6DA84 */
rv_t func_08A6DA84(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A6DA84:;
    sp = sp - 64;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a0 = LD32(a0);
    v0 = LD32(a0+12);
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_08A6DBAC; }
    goto L_08A6DAC4;
L_08A6DAC4:;
    v0 = LD32(s1+352);
    v1 = LD32(v0+12);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s1+396); goto L_08A6DBEC; }
    goto L_08A6DAD4;
L_08A6DAD4:;
    v0 = LD32(a0+16);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+396); goto L_08A6DBEC; }
    goto L_08A6DAE0;
L_08A6DAE0:;
    v0 = D_08AE6EB8 - (28344);
    v1 = LD32(v0+28344);
    s4 = LD32(a0+8);
    a0 = LD32(s1+396);
    ST32(sp, v1);
    s2 = s1 + 84;
    v0 = s1 + 120;
    s0 = (u32)(s32)LD_S8(s4);
    if (a0 != 0) s2 = v0;
    cnd_ = s0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A6DB94; }
    goto L_08A6DB0C;
L_08A6DB0C:;
    v0 = D_08AE6EBC - (28348);
    s5 = v0 + 28348;
    s6 = D_08AE6E08 - (28168);
    s7 = 32;
    a1 = s0 + 0;
    goto L_08A6DB20;
L_08A6DB20:;
    a0 = s6 + 28168;
    { u64 r_ = func_08A8986C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6DB28;
L_08A6DB28:;
    a1 = s0 + 0;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A6DBDC; }
    goto L_08A6DB34;
L_08A6DB34:;
    v1 = (u32)((s32)s0 >> 31);
    v1 = v1 >> 28;
    v1 = s0 + v1;
    v1 = (u32)((s32)v1 >> 4);
    v0 = v1 << 4;
    v0 = s0 - v0;
    a3 = v0 + s5;
    a0 = s2 + 0;
    v0 = v1 + s5;
    a1 = 43;
    cnd_ = s0 == s7;
    a2 = 3;
    if (cnd_) { goto L_08A6DBDC; }
    goto L_08A6DB64;
L_08A6DB64:;
    v0 = LD_U8(v0);
    v1 = LD_U8(a3);
    a0 = s2 + 0;
    a1 = sp + 0;
    ST8(sp+1, v0);
    ST8(sp+2, v1);
    v0 = func_08A6BDB0(a0, a1, a2, 0, 0, 0);
    goto L_08A6DB80;
L_08A6DB80:;
    s3 = s3 + 1;
    v0 = s4 + s3;
    goto L_08A6DB88;
L_08A6DB88:;
    s0 = (u32)(s32)LD_S8(v0);
    cnd_ = s0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A6DB20; }
    goto L_08A6DB94;
L_08A6DB94:;
    a2 = LD32(s2+12);
    a1 = LD32(s2+4);
    a0 = s1 + 0;
    goto L_08A6DBA0;
L_08A6DBA0:;
    { rv_t r_ = func_08A6C73C(a0, a1, a2, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6DBA8;
L_08A6DBA8:;
    a1 = 0 < v0;
    goto L_08A6DBAC;
L_08A6DBAC:;
    v0 = a1 + 0;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08A6DBDC:;
    s3 = s3 + 1;
    func_08A6C0C4(a0, a1, 0, 0, 0);
    goto L_08A6DBE4;
L_08A6DBE4:;
    v0 = s4 + s3;
    goto L_08A6DB88;
L_08A6DBEC:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+12); goto L_08A6DC40; }
    goto L_08A6DBF4;
L_08A6DBF4:;
    v1 = LD32(a0+12);
    v0 = LD32(s0+4);
    a1 = LD32(a0+8);
    a0 = s1 + 0;
    s1 = v1 - v0;
    a2 = s1 + 0;
    v0 = func_08A6C690(a0, a1, a2, t0, t1, t2, t3);
    goto L_08A6DC10;
L_08A6DC10:;
    a3 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = a3 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A6DBAC; }
    goto L_08A6DC20;
L_08A6DC20:;
    v0 = LD32(s0+4);
    a0 = a3 ^ s1;
    a1 = 1;
    v1 = 2;
    v0 = v0 + a3;
    if (a0 != 0) a1 = v1;
    ST32(s0+4, v0);
    goto L_08A6DBAC;
L_08A6DC40:;
    v1 = LD32(s0+4);
    a1 = LD32(a0+8);
    a0 = s1 + 0;
    s1 = v0 - v1;
    a2 = s1 + 0;
    goto L_08A6DBA0;
}

/* 08A6DC58 */
rv_t func_08A6DC58(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[4128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 4128);
L_08A6DC58:;
    sp = sp - 4128;
    s3 = 14;
    s2 = 1;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a3 = LD32(s0+8);
    goto L_08A6DC84;
L_08A6DC84:;
    a0 = sp + 0;
    a1 = 1;
    a2 = 4096;
    { rv_t r_ = func_08A863F0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6DC94;
L_08A6DC94:;
    a3 = v0 + 0;
    a2 = v0 + 0;
    a0 = s1 + 0;
    cnd_ = (s32)v0 <= 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08A6DD10; }
    goto L_08A6DCA8;
L_08A6DCA8:;
    v0 = LD32(s0+4);
    v1 = LD32(s0+12);
    v0 = v0 + a3;
    v1 = (s32)v1 < (s32)v0;
    cnd_ = v1 != 0;
    ST32(s0+4, v0);
    if (cnd_) { goto L_08A6DD10; }
    goto L_08A6DCC0;
L_08A6DCC0:;
    { rv_t r_ = func_08A6C73C(a0, a1, a2, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6DCC8;
L_08A6DCC8:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A6DCF0; }
    goto L_08A6DCD4;
L_08A6DCD4:;
    v1 = LD32(s0+4);
    v0 = LD32(s0+12);
    cnd_ = v1 == v0;
    a1 = 1;
    if (cnd_) { goto L_08A6DCF0; }
    goto L_08A6DCE4;
L_08A6DCE4:;
    cnd_ = a0 == s2;
    if (cnd_) { a3 = LD32(s0+8); goto L_08A6DC84; }
    goto L_08A6DCEC;
L_08A6DCEC:;
    a1 = 2;
    goto L_08A6DCF0;
L_08A6DCF0:;
    v0 = a1 + 0;
    sp = sp + 4128;
    return (rv_t){ v0, v1, f0 };
L_08A6DD10:;
    a1 = 0 + 0;
    ST32(s1+60, s3);
    ST32(s1+288, s2);
    goto L_08A6DCF0;
}

/* 08A6DD20 */
rv_t func_08A6DD20(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6DD20:;
    sp = sp - 32;
    a2 = 1;
    s1 = a0 + 0;
    a0 = LD32(a0);
    v0 = LD32(a0+12);
    cnd_ = v0 == 0;
    s2 = a1 + 0;
    if (cnd_) { goto L_08A6DDC0; }
    goto L_08A6DD54;
L_08A6DD54:;
    v0 = LD32(a1+396);
    s3 = 0x8000;
    cnd_ = v0 != 0;
    s4 = 1;
    if (cnd_) { goto L_08A6DDE4; }
    goto L_08A6DD64;
L_08A6DD64:;
    s4 = 16332;
    s3 = (u32)-1;
    goto L_08A6DD6C;
L_08A6DD6C:;
    v1 = LD32(a0+12);
    v0 = LD32(s1+4);
    a1 = LD32(a0+8);
    a0 = s2 + 0;
    s0 = v1 - v0;
    s0 = (s32)s0 < (s32)s4 ? s0 : s4;
    a1 = a1 + v0;
    a2 = s0 + 0;
    v0 = func_08A6C690(a0, a1, a2, t0, t1, t2, t3);
    goto L_08A6DD90;
L_08A6DD90:;
    a1 = v0 + 0;
    cnd_ = v0 == s3;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A6DDC0; }
    goto L_08A6DD9C;
L_08A6DD9C:;
    v1 = LD32(s1+4);
    a0 = LD32(s1);
    v1 = v1 + v0;
    ST32(s1+4, v1);
    v0 = LD32(a0+12);
    cnd_ = v0 == v1;
    a2 = 1;
    if (cnd_) { goto L_08A6DDC0; }
    goto L_08A6DDB8;
L_08A6DDB8:;
    cnd_ = a1 != 0;
    a2 = 2;
    if (cnd_) { goto L_08A6DD6C; }
    goto L_08A6DDC0;
L_08A6DDC0:;
    v0 = a2 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A6DDE4:;
    v1 = LD32(a0+12);
    goto L_08A6DDE8;
L_08A6DDE8:;
    v0 = LD32(s1+4);
    a1 = LD32(a0+8);
    a0 = s2 + 0;
    s0 = v1 - v0;
    s0 = (s32)s0 < (s32)s3 ? s0 : s3;
    a1 = a1 + v0;
    a2 = s0 + 0;
    { rv_t r_ = func_08A6C73C(a0, a1, a2, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6DE08;
L_08A6DE08:;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A6DDC0; }
    goto L_08A6DE14;
L_08A6DE14:;
    v0 = LD32(s1+4);
    v1 = LD32(s1);
    v0 = v0 + s0;
    ST32(s1+4, v0);
    a0 = v1 + 0;
    v1 = LD32(v1+12);
    cnd_ = v1 == v0;
    a2 = 1;
    if (cnd_) { goto L_08A6DDC0; }
    goto L_08A6DE34;
L_08A6DE34:;
    cnd_ = a1 == s4;
    if (cnd_) { v1 = LD32(a0+12); goto L_08A6DDE8; }
    goto L_08A6DE3C;
L_08A6DE3C:;
    a2 = 2;
    goto L_08A6DDC0;
}

/* 08A6DE44 */
rv_t func_08A6DE44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[2064] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 2064);
L_08A6DE44:;
    sp = sp - 2064;
    v0 = (u32)-1;
    s1 = a1 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A6DEC8; }
    goto L_08A6DE68;
L_08A6DE68:;
    v0 = LD32(s0);
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A6DEB4; }
    goto L_08A6DE78;
L_08A6DE78:;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A6DEA4; }
    goto L_08A6DE80;
L_08A6DE80:;
    a1 = s1 + 0;
    { rv_t r_ = func_08A6DD20(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6DE88;
L_08A6DE88:;
    v1 = v0 + 0;
    goto L_08A6DE8C;
L_08A6DE8C:;
    goto L_08A6DE90;
L_08A6DE90:;
    v0 = v1 + 0;
    sp = sp + 2064;
    return (rv_t){ v0, v1, f0 };
L_08A6DEA4:;
    a1 = s1 + 0;
    { rv_t r_ = func_08A6DC58(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6DEAC;
L_08A6DEAC:;
    v1 = v0 + 0;
    goto L_08A6DE8C;
L_08A6DEB4:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08A6DA84(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6DEC0;
L_08A6DEC0:;
    v1 = v0 + 0;
    goto L_08A6DE8C;
L_08A6DEC8:;
    v1 = LD32(a1+352);
    ST32(a0+4, 0);
    v0 = LD32(v1+12);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0); goto L_08A6DF3C; }
    goto L_08A6DEDC;
L_08A6DEDC:;
    cnd_ = a2 == 0;
    v0 = LD32(a0);
    if (cnd_) { goto L_08A6DF30; }
    goto L_08A6DEE4;
L_08A6DEE4:;
    a1 = D_08AE6ED0 - (28368);
    a1 = a1 + 28368;
    goto L_08A6DEEC;
L_08A6DEEC:;
    a2 = LD32(v0+4);
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6DEF8;
L_08A6DEF8:;
    a0 = sp + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6DF00;
L_08A6DF00:;
    a2 = v0 + 0;
    a0 = s1 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_08A6C73C(a0, a1, a2, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6DF10;
L_08A6DF10:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A6DE8C; }
    goto L_08A6DF1C;
L_08A6DF1C:;
    v0 = 2;
    cnd_ = a0 != v0;
    v1 = 2;
    if (cnd_) { goto L_08A6DE68; }
    goto L_08A6DF28;
L_08A6DF28:;
    goto L_08A6DE90;
L_08A6DF30:;
    a1 = D_08AE6ED4 - (28372);
    a1 = a1 + 28372;
    goto L_08A6DEEC;
L_08A6DF3C:;
    v1 = LD32(a0);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = v1 - 1; goto L_08A6DF7C; }
    goto L_08A6DF48;
L_08A6DF48:;
    v0 = D_08AE6EDC - (28380);
    cnd_ = a2 != 0;
    v0 = v0 + 28380;
    if (cnd_) { goto L_08A6DF5C; }
    goto L_08A6DF54;
L_08A6DF54:;
    v0 = D_08AE6F04 - (28420);
    v0 = v0 + 28420;
    goto L_08A6DF5C;
L_08A6DF5C:;
    a3 = LD32(a0+4);
    a1 = D_08AE6F30 - (28464);
    a1 = a1 + 28464;
    a2 = v0 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6DF74;
L_08A6DF74:;
    goto L_08A6DEF8;
L_08A6DF7C:;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A6DEF8; }
    goto L_08A6DF88;
L_08A6DF88:;
    cnd_ = v1 == v0;
    if (cnd_) { t0 = LD32(a0+12); goto L_08A6DFCC; }
    goto L_08A6DF90;
L_08A6DF90:;
    t0 = LD32(a0+16);
    t1 = LD32(a0+20);
    goto L_08A6DF98;
L_08A6DF98:;
    v0 = D_08AE6EDC - (28380);
    cnd_ = a2 != 0;
    v0 = v0 + 28380;
    if (cnd_) { goto L_08A6DFAC; }
    goto L_08A6DFA4;
L_08A6DFA4:;
    v0 = D_08AE6F04 - (28420);
    v0 = v0 + 28420;
    goto L_08A6DFAC;
L_08A6DFAC:;
    a3 = LD32(a0+4);
    a1 = D_08AE6F60 - (28512);
    a1 = a1 + 28512;
    a2 = v0 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6DFC4;
L_08A6DFC4:;
    goto L_08A6DEF8;
L_08A6DFCC:;
    t1 = LD32(a0+16);
    goto L_08A6DF98;
}

/* 08A6DFD4 */
rv_t func_08A6DFD4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6DFD4:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = s1 + 356;
    a0 = LD32(a0+356);
    v0 = func_08A83A88(a0);
    goto L_08A6DFFC;
L_08A6DFFC:;
    s2 = v0 + 0;
    v0 = LD32(s1+96);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A6E0C4; }
    goto L_08A6E00C;
L_08A6E00C:;
    a1 = LD32(s0+4);
    v0 = (s32)a1 < (s32)s2;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+352); goto L_08A6E068; }
    goto L_08A6E01C;
L_08A6E01C:;
    s3 = 2;
    goto L_08A6E020;
L_08A6E020:;
    a0 = LD32(s0);
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6E028;
L_08A6E028:;
    a2 = LD32(s0+4);
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = a2 < 0x1u;
    { rv_t r_ = func_08A6DE44(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6E03C;
L_08A6E03C:;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A6E084; }
    goto L_08A6E044;
L_08A6E044:;
    cnd_ = v0 == s3;
    a2 = 2;
    if (cnd_) { goto L_08A6E084; }
    goto L_08A6E04C;
L_08A6E04C:;
    v0 = LD32(s0+4);
    v0 = v0 + 1;
    v1 = (s32)v0 < (s32)s2;
    a1 = v0 + 0;
    cnd_ = v1 != 0;
    ST32(s0+4, v0);
    if (cnd_) { goto L_08A6E020; }
    goto L_08A6E064;
L_08A6E064:;
    v0 = LD32(s1+352);
    goto L_08A6E068;
L_08A6E068:;
    v1 = LD32(v0+12);
    cnd_ = v1 != 0;
    if (cnd_) { a1 = D_08AE6FB4 - (28596); goto L_08A6E0A4; }
    goto L_08A6E074;
L_08A6E074:;
    v0 = LD32(s1+96);
    goto L_08A6E078;
L_08A6E078:;
    a2 = 2;
    v1 = 1;
    if (v0 == 0) a2 = v1;
    goto L_08A6E084;
L_08A6E084:;
    goto L_08A6E088;
L_08A6E088:;
    v0 = a2 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A6E0A4:;
    a2 = 43;
    a1 = a1 + 28596;
    a0 = s1 + 0;
    { rv_t r_ = func_08A6C73C(a0, a1, a2, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6E0B4;
L_08A6E0B4:;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A6E084; }
    goto L_08A6E0BC;
L_08A6E0BC:;
    v0 = LD32(s1+96);
    goto L_08A6E078;
L_08A6E0C4:;
    a0 = s1 + 0;
    v0 = func_08A6C1F4(a0, 0, 0, 0);
    goto L_08A6E0CC;
L_08A6E0CC:;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A6E084; }
    goto L_08A6E0D4;
L_08A6E0D4:;
    v0 = LD32(s1+100);
    v1 = LD32(s1+96);
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    a2 = 2;
    if (cnd_) { goto L_08A6E084; }
    goto L_08A6E0E8;
L_08A6E0E8:;
    a0 = s1 + 84;
    func_08A6C1D4(a0);
    goto L_08A6E0F0;
L_08A6E0F0:;
    v0 = LD32(s1+360);
    cnd_ = v0 != s2;
    a2 = 1;
    if (cnd_) { goto L_08A6E00C; }
    goto L_08A6E0FC;
L_08A6E0FC:;
    goto L_08A6E088;
}

/* 08A6E104 */
rv_t func_08A6E104(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6E104:;
    sp = sp - 32;
    a1 = 0 + 0;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A6E134; }
    goto L_08A6E128;
L_08A6E128:;
    a0 = LD32(a0+20);
    cnd_ = a0 != 0;
    if (cnd_) { a1 = D_08AE6FE0 - (28640); goto L_08A6E154; }
    goto L_08A6E134;
L_08A6E134:;
    v0 = a1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A6E154:;
    a1 = a1 + 28640;
    a2 = 7;
    s2 = a0 + 0;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6E164;
L_08A6E164:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = D_08AE6FE8 - (28648); goto L_08A6E25C; }
    goto L_08A6E16C;
L_08A6E16C:;
    s2 = s2 + 7;
    ST32(s0+40, 0);
    goto L_08A6E174;
L_08A6E174:;
    a1 = D_08AE6FF4 - (28660);
    a1 = a1 + 28660;
    a0 = s2 + 0;
    v0 = func_08A89A78(a0, a1);
    goto L_08A6E184;
L_08A6E184:;
    s1 = s2 + v0;
    s3 = (u32)(s32)LD_S8(s1);
    ST8(s1, 0);
    a0 = s2 + 0;
    { u64 r_ = func_08A6B560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6E198;
L_08A6E198:;
    ST32(s0+24, v0);
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A6E134; }
    goto L_08A6E1A4;
L_08A6E1A4:;
    v0 = 58;
    ST8(s1, s3);
    cnd_ = s3 == v0;
    s2 = s1 + 0;
    if (cnd_) { goto L_08A6E214; }
    goto L_08A6E1B4;
L_08A6E1B4:;
    v1 = LD32(s0+40);
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = 443;
    if (cnd_) { goto L_08A6E1C8; }
    goto L_08A6E1C4;
L_08A6E1C4:;
    v0 = 80;
    goto L_08A6E1C8;
L_08A6E1C8:;
    ST16(s0+32, v0);
    a0 = LD_U8(s2);
    v0 = (u32)(s32)(s8)a0;
    goto L_08A6E1D4;
L_08A6E1D4:;
    cnd_ = v0 != 0;
    v0 = D_08AE6FF8 - (28664);
    if (cnd_) { goto L_08A6E1E0; }
    goto L_08A6E1DC;
L_08A6E1DC:;
    s2 = v0 + 28664;
    goto L_08A6E1E0;
L_08A6E1E0:;
    a0 = s2 + 0;
    { u64 r_ = func_08A6B560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6E1E8;
L_08A6E1E8:;
    s1 = 43;
    ST32(s0+36, v0);
    goto L_08A6E1F0;
L_08A6E1F0:;
    a0 = LD32(s0+36);
    a1 = 32;
    { u64 r_ = func_08A8986C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6E1FC;
L_08A6E1FC:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+36); goto L_08A6E20C; }
    goto L_08A6E204;
L_08A6E204:;
    ST8(v0, s1);
    goto L_08A6E1F0;
L_08A6E20C:;
    a1 = 0 < v0;
    goto L_08A6E134;
L_08A6E214:;
    s2 = s1 + 1;
    a0 = s2 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6E220;
L_08A6E220:;
    v1 = v0 & 0xffff;
    ST16(s0+32, v0);
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A6E134; }
    goto L_08A6E230;
L_08A6E230:;
    s2 = s2 + 1;
    goto L_08A6E234;
L_08A6E234:;
    a0 = LD_U8(s2);
    v0 = (u32)(s32)(s8)a0;
    v1 = v0 ^ 0x2f;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { s2 = s2 + 1; goto L_08A6E234; }
    goto L_08A6E254;
L_08A6E254:;
    v0 = (u32)(s32)(s8)a0;
    goto L_08A6E1D4;
L_08A6E25C:;
    a1 = a1 + 28648;
    a0 = s2 + 0;
    a2 = 8;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6E26C;
L_08A6E26C:;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A6E134; }
    goto L_08A6E274;
L_08A6E274:;
    v0 = 1;
    ST32(s0+40, v0);
    s2 = s2 + 8;
    goto L_08A6E174;
}

/* 08A6E284 */
float func_08A6E284(u32 a0, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6E284:;
    sp = sp - 16;
    a1 = 0 + 0;
    s0 = a0 + 0;
    a2 = 0 + 0;
    f0 = func_08A6C34C(a0, a1, a2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A6E2A4;
L_08A6E2A4:;
    func_08A6B610();
    goto L_08A6E2AC;
L_08A6E2AC:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A6E104(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6E2B4;
L_08A6E2B4:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+40); goto L_08A6E2E0; }
    goto L_08A6E2BC;
L_08A6E2BC:;
    v0 = 3;
    goto L_08A6E2C0;
L_08A6E2C0:;
    v1 = 1;
    ST32(s0+60, v0);
    ST32(s0+288, v1);
    goto L_08A6E2D0;
L_08A6E2D0:;
    sp = sp + 16;
    return f0;
L_08A6E2E0:;
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = LD32(s0+396);
    if (cnd_) { goto L_08A6E37C; }
    goto L_08A6E2EC;
L_08A6E2EC:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+384); goto L_08A6E308; }
    goto L_08A6E2F4;
L_08A6E2F4:;
    v0 = 1;
    goto L_08A6E2F8;
L_08A6E2F8:;
    v1 = 17;
    ST32(s0+288, v0);
    ST32(s0+60, v1);
    v0 = LD32(s0+384);
    goto L_08A6E308;
L_08A6E308:;
    cnd_ = v0 != 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A6E324; }
    goto L_08A6E310;
L_08A6E310:;
    v0 = D_08C38B98 - (-29800);
    v1 = LD32(v0-29800);
    cnd_ = v1 != 0;
    s1 = v1 + 0;
    if (cnd_) { goto L_08A6E324; }
    goto L_08A6E320;
L_08A6E320:;
    s1 = LD32(s0+24);
    goto L_08A6E324;
L_08A6E324:;
    a0 = s1 + 0;
    v0 = sceNetInetInetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6E32C;
L_08A6E32C:;
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    ST32(s0+28, v0);
    if (cnd_) { goto L_08A6E358; }
    goto L_08A6E338;
L_08A6E338:;
    v0 = 1;
    ST32(s0+16, v0);
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    f0 = func_08A6C34C(a0, a1, a2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A6E350;
L_08A6E350:;
    goto L_08A6E2D0;
L_08A6E358:;
    a0 = s1 + 0;
    { u64 r_ = func_08A6A824(a0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6E360;
L_08A6E360:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 4; goto L_08A6E2C0; }
    goto L_08A6E368;
L_08A6E368:;
    v0 = LD32(v0+12);
    v1 = LD32(v0);
    a0 = LD32(v1);
    ST32(s0+28, a0);
    goto L_08A6E338;
L_08A6E37C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 1; goto L_08A6E2F8; }
    goto L_08A6E384;
L_08A6E384:;
    v0 = LD32(s0+384);
    goto L_08A6E308;
}

/* 08A6E38C */
float func_08A6E38C(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A6E38C:;
    sp = sp - 48;
    v0 = (u32)-1;
    s0 = LD32(a0+76);
    cnd_ = s0 == v0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A6E460; }
    goto L_08A6E3AC;
L_08A6E3AC:;
    a0 = LD32(s1+76);
    goto L_08A6E3B0;
L_08A6E3B0:;
    a1 = 0 + 0;
    a2 = sp + 16;
    a3 = sp + 20;
    v0 = func_08A6B114(a0, a1, a2, a3, t1, t2, t3);
    goto L_08A6E3C0;
L_08A6E3C0:;
    a1 = (u32)-1;
    cnd_ = v0 == a1;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A6E434; }
    goto L_08A6E3CC;
L_08A6E3CC:;
    v0 = 1;
    cnd_ = a0 == v0;
    v0 = LD32(sp+20);
    if (cnd_) { goto L_08A6E42C; }
    goto L_08A6E3D8;
L_08A6E3D8:;
    v0 = 1;
    goto L_08A6E3DC;
L_08A6E3DC:;
    cnd_ = a0 == v0;
    v0 = LD32(sp+16);
    if (cnd_) { goto L_08A6E3F8; }
    goto L_08A6E3E4;
L_08A6E3E4:;
    goto L_08A6E3E8;
L_08A6E3E8:;
    sp = sp + 48;
    return f0;
L_08A6E3F8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A6E3E8; }
    goto L_08A6E400;
L_08A6E400:;
    v0 = LD32(s1+396);
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A6E410; }
    goto L_08A6E40C;
L_08A6E40C:;
    v0 = 3;
    goto L_08A6E410;
L_08A6E410:;
    ST32(s1+16, v0);
    a0 = s1 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    f0 = func_08A6C34C(a0, a1, a2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A6E424;
L_08A6E424:;
    goto L_08A6E3E8;
L_08A6E42C:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A6E3DC; }
    goto L_08A6E434;
L_08A6E434:;
    v0 = 1;
    v1 = 6;
    ST32(s1+288, v0);
    cnd_ = a0 == a1;
    ST32(s1+60, v1);
    if (cnd_) { goto L_08A6E450; }
    goto L_08A6E448;
L_08A6E448:;
    ST32(s1+80, 0);
    goto L_08A6E3E4;
L_08A6E450:;
    v0 = sceNetInetGetErrno(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6E458;
L_08A6E458:;
    ST32(s1+80, v0);
    goto L_08A6E3E4;
L_08A6E460:;
    a0 = 2;
    a1 = 1;
    a2 = 6;
    v0 = sceNetInetSocket(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6E470;
L_08A6E470:;
    cnd_ = v0 == s0;
    ST32(s1+76, v0);
    if (cnd_) { goto L_08A6E564; }
    goto L_08A6E478;
L_08A6E478:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    v0 = func_08A6AFE4(a0, a1, 0, 0, 0);
    goto L_08A6E484;
L_08A6E484:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A6E568; }
    goto L_08A6E48C;
L_08A6E48C:;
    v0 = LD32(s1+344);
    cnd_ = v0 != 0;
    v0 = D_08B1CBEC - (-13332);
    if (cnd_) { goto L_08A6E550; }
    goto L_08A6E498;
L_08A6E498:;
    v1 = LD32(s1+384);
    goto L_08A6E49C;
L_08A6E49C:;
    v0 = 2;
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST8(sp+1, v0);
    ST32(sp+8, 0);
    cnd_ = v1 == 0;
    ST32(sp+12, 0);
    if (cnd_) { goto L_08A6E534; }
    goto L_08A6E4B8;
L_08A6E4B8:;
    v0 = LD_U16(s1+388);
    goto L_08A6E4BC;
L_08A6E4BC:;
    v0 = WSBH(v0);
    a0 = LD32(s1+76);
    ST16(sp+2, v0);
    a1 = sp + 0;
    a2 = 16;
    v0 = LD32(s1+28);
    ST32(sp+4, v0);
    v0 = sceNetInetConnect(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6E4DC;
L_08A6E4DC:;
    a0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = a0 != v0;
    if (cnd_) { a0 = LD32(s1+76); goto L_08A6E3B0; }
    goto L_08A6E4EC;
L_08A6E4EC:;
    v0 = sceNetInetGetErrno(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6E4F4;
L_08A6E4F4:;
    v1 = v0 ^ 0xb;
    a0 = v0 + 0;
    v0 = v0 ^ 0x77;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    if (cnd_) { a0 = LD32(s1+76); goto L_08A6E3B0; }
    goto L_08A6E514;
L_08A6E514:;
    v0 = 116;
    cnd_ = a0 == v0;
    v0 = 1;
    if (cnd_) { goto L_08A6E3AC; }
    goto L_08A6E520;
L_08A6E520:;
    v1 = 6;
    ST32(s1+80, a0);
    ST32(s1+288, v0);
    ST32(s1+60, v1);
    goto L_08A6E3E4;
L_08A6E534:;
    v0 = D_08C38B98 - (-29800);
    v1 = LD32(v0-29800);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD_U16(s1+32); goto L_08A6E4BC; }
    goto L_08A6E544;
L_08A6E544:;
    v1 = D_08C38B9C - (-29796);
    v0 = LD_U16(v1-29796);
    goto L_08A6E4BC;
L_08A6E550:;
    a1 = LD32(v0-13332);
    a0 = LD32(s1+76);
    func_08A6B024(a0, a1, 0, 0, 0);
    goto L_08A6E55C;
L_08A6E55C:;
    v1 = LD32(s1+384);
    goto L_08A6E49C;
L_08A6E564:;
    v0 = 1;
    goto L_08A6E568;
L_08A6E568:;
    v1 = 5;
    ST32(s1+288, v0);
    ST32(s1+60, v1);
    goto L_08A6E450;
}

/* 08A6E578 */
float func_08A6E578(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[1072] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 1072);
L_08A6E578:;
    sp = sp - 1072;
    v0 = LD32(a0+400);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A6E678; }
    goto L_08A6E590;
L_08A6E590:;
    v0 = LD32(s0+100);
    goto L_08A6E594;
L_08A6E594:;
    v1 = LD32(s0+96);
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    v0 = 1025;
    if (cnd_) { goto L_08A6E5E4; }
    goto L_08A6E5A4;
L_08A6E5A4:;
    a0 = s0 + 0;
    v0 = func_08A6C1F4(a0, t1, t2, t3);
    goto L_08A6E5AC;
L_08A6E5AC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A6E5CC; }
    goto L_08A6E5B4;
L_08A6E5B4:;
    v0 = LD32(s0+100);
    v1 = LD32(s0+96);
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A6E5D8; }
    goto L_08A6E5C8;
L_08A6E5C8:;
    goto L_08A6E5CC;
L_08A6E5CC:;
    sp = sp + 1072;
    return f0;
L_08A6E5D8:;
    a0 = s0 + 84;
    func_08A6C1D4(a0);
    goto L_08A6E5E0;
L_08A6E5E0:;
    v0 = 1025;
    goto L_08A6E5E4;
L_08A6E5E4:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = sp + 1040;
    ST32(sp+1040, v0);
    { u64 r_ = func_08A6C564(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6E5F8;
L_08A6E5F8:;
    v1 = v0 + 0;
    v0 = v0 - 2;
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    v0 = 17;
    if (cnd_) { goto L_08A6E640; }
    goto L_08A6E60C;
L_08A6E60C:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A6E5CC; }
    goto L_08A6E614;
L_08A6E614:;
    a2 = LD32(sp+1040);
    a0 = s0 + 192;
    a1 = sp + 0;
    v0 = func_08A6BDB0(a0, a1, a2, 0, 0, 0);
    goto L_08A6E624;
L_08A6E624:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A6E5CC; }
    goto L_08A6E62C;
L_08A6E62C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A6C40C(a0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6E634;
L_08A6E634:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+404); goto L_08A6E650; }
    goto L_08A6E63C;
L_08A6E63C:;
    v0 = 17;
    goto L_08A6E640;
L_08A6E640:;
    v1 = 1;
    ST32(s0+60, v0);
    ST32(s0+288, v1);
    goto L_08A6E5C8;
L_08A6E650:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A6E5CC; }
    goto L_08A6E658;
L_08A6E658:;
    v0 = 3;
    ST32(s0+16, v0);
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    f0 = func_08A6C34C(a0, a1, a2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A6E670;
L_08A6E670:;
    goto L_08A6E5CC;
L_08A6E678:;
    v0 = LD32(a0+408);
    t_ = v0;
    a1 = a0 + 392;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6E684;
L_08A6E684:;
    v1 = 3;
    cnd_ = v0 != v1;
    if (cnd_) { v0 = LD32(s0+100); goto L_08A6E594; }
    goto L_08A6E690;
L_08A6E690:;
    v0 = 17;
    goto L_08A6E640;
}

/* 08A6E698 */
float func_08A6E698(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A6E698:;
    sp = sp - 48;
    v0 = LD32(a0+96);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A6E814; }
    goto L_08A6E6BC;
L_08A6E6BC:;
    a0 = LD32(a0+396);
    a1 = LD32(s0+352);
    s1 = s0 + 84;
    v0 = s0 + 120;
    v1 = D_08AE6FFC - (28668);
    if (a0 != 0) s1 = v0;
    cnd_ = a1 != 0;
    v1 = v1 + 28668;
    if (cnd_) { goto L_08A6E6F8; }
    goto L_08A6E6DC;
L_08A6E6DC:;
    a0 = LD32(s0+12);
    v1 = D_08AE7004 - (28676);
    v0 = 3;
    cnd_ = a0 == v0;
    v1 = v1 + 28676;
    if (cnd_) { goto L_08A6E6F8; }
    goto L_08A6E6F0;
L_08A6E6F0:;
    v0 = D_08AE700C - (28684);
    v1 = v0 + 28684;
    goto L_08A6E6F8;
L_08A6E6F8:;
    a1 = v1 + 0;
    a0 = s1 + 0;
    a2 = 0 + 0;
    v0 = func_08A6BDB0(a0, a1, a2, t1, t2, t3);
    goto L_08A6E708;
L_08A6E708:;
    v1 = LD32(s0+384);
    cnd_ = v1 != 0;
    v0 = D_08C38B98 - (-29800);
    if (cnd_) { goto L_08A6E720; }
    goto L_08A6E714;
L_08A6E714:;
    v1 = LD32(v0-29800);
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD32(s0+36); goto L_08A6E724; }
    goto L_08A6E720;
L_08A6E720:;
    a1 = LD32(s0+20);
    goto L_08A6E724;
L_08A6E724:;
    a0 = s1 + 0;
    a2 = 0 + 0;
    v0 = func_08A6BDB0(a0, a1, a2, 0, 0, 0);
    goto L_08A6E730;
L_08A6E730:;
    a1 = D_08AE7014 - (28692);
    a1 = a1 + 28692;
    a0 = s1 + 0;
    a2 = 0 + 0;
    v0 = func_08A6BDB0(a0, a1, a2, 0, 0, 0);
    goto L_08A6E744;
L_08A6E744:;
    v1 = LD_U16(s0+32);
    v0 = 80;
    cnd_ = v1 == v0;
    a1 = D_08AE7020 - (28704);
    if (cnd_) { goto L_08A6E918; }
    goto L_08A6E754;
L_08A6E754:;
    a1 = a1 + 28704;
    a2 = 0 + 0;
    a0 = s1 + 0;
    v0 = func_08A6BDB0(a0, a1, a2, 0, 0, 0);
    goto L_08A6E764;
L_08A6E764:;
    a1 = LD32(s0+24);
    a2 = 0 + 0;
    a0 = s1 + 0;
    v0 = func_08A6BDB0(a0, a1, a2, 0, 0, 0);
    goto L_08A6E774;
L_08A6E774:;
    a0 = s1 + 0;
    a1 = 58;
    func_08A6C0C4(a0, a1, 0, 0, 0);
    goto L_08A6E780;
L_08A6E780:;
    a1 = LD_U16(s0+32);
    a0 = s1 + 0;
    s3 = D_08AE7028 - (28712);
    func_08A6C190(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A6E790;
L_08A6E790:;
    a1 = s3 + 28712;
    a0 = s1 + 0;
    a2 = 2;
    v0 = func_08A6BDB0(a0, a1, a2, 0, 0, 0);
    goto L_08A6E7A0;
L_08A6E7A0:;
    a0 = LD32(s0+44);
    cnd_ = a0 != 0;
    s2 = D_08AE702C - (28716);
    if (cnd_) { goto L_08A6E900; }
    goto L_08A6E7AC;
L_08A6E7AC:;
    a2 = D_08AE7038 - (28728);
    goto L_08A6E7B0;
L_08A6E7B0:;
    a1 = s2 + 28716;
    a2 = a2 + 28728;
    a0 = s1 + 0;
    func_08A6C028(a0, a1, a2, 0, 0, 0);
    goto L_08A6E7C0;
L_08A6E7C0:;
    v0 = LD32(s0+56);
    goto L_08A6E7C4;
L_08A6E7C4:;
    cnd_ = v0 == 0;
    a1 = D_08AE7048 - (28744);
    if (cnd_) { goto L_08A6E8F0; }
    goto L_08A6E7CC;
L_08A6E7CC:;
    a2 = D_08AE7054 - (28756);
    a1 = a1 + 28744;
    a2 = a2 + 28756;
    goto L_08A6E7D8;
L_08A6E7D8:;
    a0 = s1 + 0;
    func_08A6C028(a0, a1, a2, 0, 0, 0);
    goto L_08A6E7E0;
L_08A6E7E0:;
    v0 = LD32(s0+352);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(s0+368); goto L_08A6E8A8; }
    goto L_08A6E7EC;
L_08A6E7EC:;
    a1 = LD32(s0+44);
    goto L_08A6E7F0;
L_08A6E7F0:;
    cnd_ = a1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A6E898; }
    goto L_08A6E7F8;
L_08A6E7F8:;
    a1 = s3 + 28712;
    goto L_08A6E7FC;
L_08A6E7FC:;
    a0 = s1 + 0;
    a2 = 2;
    v0 = func_08A6BDB0(a0, a1, a2, 0, 0, 0);
    goto L_08A6E808;
L_08A6E808:;
    v1 = LD32(s0+396);
    cnd_ = v1 != 0;
    if (cnd_) { a2 = LD32(s1+12); goto L_08A6E884; }
    goto L_08A6E814;
L_08A6E814:;
    a0 = s0 + 0;
    v0 = func_08A6C1F4(a0, t1, t2, t3);
    goto L_08A6E81C;
L_08A6E81C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A6E838; }
    goto L_08A6E824;
L_08A6E824:;
    v0 = LD32(s0+100);
    v1 = LD32(s0+96);
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A6E850; }
    goto L_08A6E838;
L_08A6E838:;
    sp = sp + 48;
    return f0;
L_08A6E850:;
    a0 = s0 + 84;
    func_08A6C1D4(a0);
    goto L_08A6E858;
L_08A6E858:;
    v0 = LD32(s0+352);
    cnd_ = v0 == 0;
    v0 = 5;
    if (cnd_) { goto L_08A6E868; }
    goto L_08A6E864;
L_08A6E864:;
    v0 = 4;
    goto L_08A6E868;
L_08A6E868:;
    ST32(s0+16, v0);
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    f0 = func_08A6C34C(a0, a1, a2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A6E87C;
L_08A6E87C:;
    goto L_08A6E838;
L_08A6E884:;
    a1 = LD32(s1+4);
    a0 = s0 + 84;
    { rv_t r_ = func_08A6BED0(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6E890;
L_08A6E890:;
    goto L_08A6E814;
L_08A6E898:;
    a2 = 0 + 0;
    v0 = func_08A6BDB0(a0, a1, a2, 0, 0, 0);
    goto L_08A6E8A0;
L_08A6E8A0:;
    a1 = s3 + 28712;
    goto L_08A6E7FC;
L_08A6E8A8:;
    a1 = D_08AE7060 - (28768);
    a1 = a1 + 28768;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6E8B8;
L_08A6E8B8:;
    a1 = D_08AE7064 - (28772);
    a1 = a1 + 28772;
    a2 = sp + 0;
    a0 = s1 + 0;
    func_08A6C028(a0, a1, a2, 0, 0, 0);
    goto L_08A6E8CC;
L_08A6E8CC:;
    a0 = s0 + 0;
    v0 = func_08A6D518(a0);
    goto L_08A6E8D4;
L_08A6E8D4:;
    a1 = D_08AE7074 - (28788);
    a1 = a1 + 28788;
    a2 = v0 + 0;
    a0 = s1 + 0;
    func_08A6C028(a0, a1, a2, 0, 0, 0);
    goto L_08A6E8E8;
L_08A6E8E8:;
    a1 = LD32(s0+44);
    goto L_08A6E7F0;
L_08A6E8F0:;
    a2 = D_08AE7084 - (28804);
    a1 = a1 + 28744;
    a2 = a2 + 28804;
    goto L_08A6E7D8;
L_08A6E900:;
    a1 = s2 + 28716;
    { u64 r_ = func_08A89EE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6E908;
L_08A6E908:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+56); goto L_08A6E7C4; }
    goto L_08A6E910;
L_08A6E910:;
    a2 = D_08AE7038 - (28728);
    goto L_08A6E7B0;
L_08A6E918:;
    a2 = LD32(s0+24);
    a1 = D_08AE708C - (28812);
    a1 = a1 + 28812;
    a0 = s1 + 0;
    func_08A6C028(a0, a1, a2, 0, 0, 0);
    goto L_08A6E92C;
L_08A6E92C:;
    s3 = D_08AE7028 - (28712);
    goto L_08A6E7A0;
}

/* 08A6E934 */
float func_08A6E934(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6E934:;
    sp = sp - 16;
    s0 = a0 + 0;
    s2 = LD32(a0+364);
    { rv_t r_ = func_08A6DFD4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6E954;
L_08A6E954:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A6E9C0; }
    goto L_08A6E960;
L_08A6E960:;
    v0 = LD32(s0+364);
    cnd_ = s2 == v0;
    v0 = 1;
    if (cnd_) { goto L_08A6E978; }
    goto L_08A6E96C;
L_08A6E96C:;
    f0 = func_08A6C394(a0);
    goto L_08A6E974;
L_08A6E974:;
    v0 = 1;
    goto L_08A6E978;
L_08A6E978:;
    cnd_ = s1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A6E998; }
    goto L_08A6E980;
L_08A6E980:;
    goto L_08A6E984;
L_08A6E984:;
    sp = sp + 16;
    return f0;
L_08A6E998:;
    func_08A6D9DC(a0, 0, 0, 0);
    goto L_08A6E9A0;
L_08A6E9A0:;
    v0 = 5;
    ST32(s0+16, v0);
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    f0 = func_08A6C34C(a0, a1, a2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A6E9B8;
L_08A6E9B8:;
    goto L_08A6E984;
L_08A6E9C0:;
    func_08A6D9DC(a0, 0, 0, 0);
    goto L_08A6E9C8;
L_08A6E9C8:;
    goto L_08A6E984;
}

/* 08A6E9D0 */
float func_08A6E9D0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6E9D0:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = sp + 0;
    a2 = 0 + 0;
    a3 = sp + 4;
    a0 = LD32(a0+76);
    v0 = func_08A6B114(a0, a1, a2, a3, t1, t2, t3);
    goto L_08A6E9F4;
L_08A6E9F4:;
    a1 = (u32)-1;
    cnd_ = v0 == a1;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A6EA54; }
    goto L_08A6EA00;
L_08A6EA00:;
    v0 = 1;
    cnd_ = a0 == v0;
    v0 = LD32(sp+4);
    if (cnd_) { goto L_08A6EA4C; }
    goto L_08A6EA0C;
L_08A6EA0C:;
    v0 = 1;
    goto L_08A6EA10;
L_08A6EA10:;
    cnd_ = a0 == v0;
    v0 = LD32(sp);
    if (cnd_) { goto L_08A6EA28; }
    goto L_08A6EA18;
L_08A6EA18:;
    goto L_08A6EA1C;
L_08A6EA1C:;
    sp = sp + 32;
    return f0;
L_08A6EA28:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A6EA18; }
    goto L_08A6EA38;
L_08A6EA38:;
    v0 = 6;
    ST32(s0+16, v0);
    f0 = func_08A6C34C(a0, a1, a2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A6EA44;
L_08A6EA44:;
    goto L_08A6EA1C;
L_08A6EA4C:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A6EA10; }
    goto L_08A6EA54;
L_08A6EA54:;
    v0 = 1;
    v1 = 5;
    ST32(s0+288, v0);
    cnd_ = a0 == a1;
    ST32(s0+60, v1);
    if (cnd_) { goto L_08A6EA70; }
    goto L_08A6EA68;
L_08A6EA68:;
    ST32(s0+80, 0);
    goto L_08A6EA18;
L_08A6EA70:;
    v0 = sceNetInetGetErrno(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6EA78;
L_08A6EA78:;
    ST32(s0+80, v0);
    goto L_08A6EA18;
}

/* 08A6EA80 */
rv_t func_08A6EA80(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6EA80:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = D_08AE7094 - (28820);
    a1 = a1 + 28820;
    a2 = sp + 0;
    a0 = LD32(a0+160);
    a3 = sp + 4;
    t0 = sp + 8;
    t1 = sp + 12;
    { rv_t r_ = func_08A894F8(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6EAB0;
L_08A6EAB0:;
    v1 = 3;
    cnd_ = v0 == v1;
    a3 = LD32(sp);
    if (cnd_) { goto L_08A6EAE4; }
    goto L_08A6EABC;
L_08A6EABC:;
    v0 = 7;
    goto L_08A6EAC0;
L_08A6EAC0:;
    v1 = 1;
    a0 = 0 + 0;
    ST32(s0+60, v0);
    ST32(s0+288, v1);
    goto L_08A6EAD0;
L_08A6EAD0:;
    v0 = a0 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A6EAE4:;
    cnd_ = (s32)a3 <= 0;
    a1 = LD32(sp+8);
    if (cnd_) { goto L_08A6EABC; }
    goto L_08A6EAEC;
L_08A6EAEC:;
    v0 = (s32)a1 < 100;
    cnd_ = v0 != 0;
    v0 = 7;
    if (cnd_) { goto L_08A6EAC0; }
    goto L_08A6EAF8;
L_08A6EAF8:;
    v0 = (s32)a1 < 600;
    cnd_ = v0 == 0;
    v0 = 7;
    if (cnd_) { goto L_08A6EAC0; }
    goto L_08A6EB04;
L_08A6EB04:;
    a0 = LD32(sp+12);
    t0 = LD32(s0+160);
    v0 = t0 + a0;
    v1 = (u32)(s32)LD_S8(v0);
    cnd_ = v1 == 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08A6EB64; }
    goto L_08A6EB1C;
L_08A6EB1C:;
    v0 = D_08AE9044 - (-28604);
    t1 = v0 - 28604;
    v1 = v1 + t1;
    v0 = LD_U8(v1);
    v0 = v0 & 0x8;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0+280, a0); goto L_08A6EB68; }
    goto L_08A6EB38;
L_08A6EB38:;
    a0 = a2 + 1;
    goto L_08A6EB3C;
L_08A6EB3C:;
    ST32(sp+12, a0);
    v1 = t0 + a0;
    a2 = a0 + 0;
    v0 = (u32)(s32)LD_S8(v1);
    cnd_ = v0 == 0;
    v1 = v0 + t1;
    if (cnd_) { goto L_08A6EB64; }
    goto L_08A6EB54;
L_08A6EB54:;
    v0 = LD_U8(v1);
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = a2 + 1; goto L_08A6EB3C; }
    goto L_08A6EB64;
L_08A6EB64:;
    ST32(s0+280, a0);
    goto L_08A6EB68;
L_08A6EB68:;
    a0 = 1;
    ST32(s0+268, a3);
    v0 = LD32(sp+4);
    ST32(s0+276, a1);
    ST32(s0+272, v0);
    goto L_08A6EAD0;
}

/* 08A6EB80 */
float func_08A6EB80(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[1056] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 1056);
L_08A6EB80:;
    sp = sp - 1056;
    v0 = 1024;
    a1 = sp + 0;
    a2 = sp + 1024;
    s1 = a0 + 0;
    ST32(sp+1024, v0);
    { u64 r_ = func_08A6C564(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6EBAC;
L_08A6EBAC:;
    s0 = v0 + 0;
    v0 = 3;
    cnd_ = s0 == v0;
    s2 = 1;
    if (cnd_) { goto L_08A6EBEC; }
    goto L_08A6EBBC;
L_08A6EBBC:;
    cnd_ = s0 == s2;
    if (cnd_) { goto L_08A6EBF0; }
    goto L_08A6EBC4;
L_08A6EBC4:;
    cnd_ = s0 != 0;
    if (cnd_) { a0 = LD32(s1+160); goto L_08A6EC24; }
    goto L_08A6EBCC;
L_08A6EBCC:;
    v0 = LD32(s1+396);
    cnd_ = v0 == 0;
    a2 = LD32(sp+1024);
    if (cnd_) { goto L_08A6ECA4; }
    goto L_08A6EBD8;
L_08A6EBD8:;
    a0 = s1 + 192;
    a1 = sp + 0;
    v0 = func_08A6BDB0(a0, a1, a2, 0, 0, 0);
    goto L_08A6EBE4;
L_08A6EBE4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A6EC04; }
    goto L_08A6EBEC;
L_08A6EBEC:;
    goto L_08A6EBF0;
L_08A6EBF0:;
    sp = sp + 1056;
    return f0;
L_08A6EC04:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A6C40C(a0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6EC0C;
L_08A6EC0C:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+160); goto L_08A6EC24; }
    goto L_08A6EC14;
L_08A6EC14:;
    v0 = 17;
    ST32(s1+60, v0);
    ST32(s1+288, s2);
    goto L_08A6EBEC;
L_08A6EC24:;
    a1 = D_08AE7028 - (28712);
    a1 = a1 + 28712;
    { u64 r_ = func_08A89EE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6EC30;
L_08A6EC30:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A6EC60; }
    goto L_08A6EC38;
L_08A6EC38:;
    v0 = 2;
    cnd_ = s0 != v0;
    if (cnd_) { goto L_08A6EBF0; }
    goto L_08A6EC44;
L_08A6EC44:;
    v0 = 1;
    v1 = 7;
    ST32(s1+288, v0);
    ST32(s1+60, v1);
    v0 = sceNetInetGetErrno(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6EC58;
L_08A6EC58:;
    ST32(s1+80, v0);
    goto L_08A6EBEC;
L_08A6EC60:;
    ST8(v0, 0);
    a0 = s1 + 0;
    v0 = LD32(s1+160);
    s0 = v1 - v0;
    { rv_t r_ = func_08A6EA80(a0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6EC74;
L_08A6EC74:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A6EBF0; }
    goto L_08A6EC7C;
L_08A6EC7C:;
    v0 = s0 + 2;
    ST32(s1+284, v0);
    v0 = 7;
    a0 = s1 + 0;
    ST32(s1+16, v0);
    a1 = 0 + 0;
    a2 = 0 + 0;
    f0 = func_08A6C34C(a0, a1, a2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A6EC9C;
L_08A6EC9C:;
    goto L_08A6EBF0;
L_08A6ECA4:;
    a0 = s1 + 156;
    a1 = sp + 0;
    v0 = func_08A6BDB0(a0, a1, a2, 0, 0, 0);
    goto L_08A6ECB0;
L_08A6ECB0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A6EBF0; }
    goto L_08A6ECB8;
L_08A6ECB8:;
    a0 = LD32(s1+160);
    goto L_08A6EC24;
}

/* 08A6ECC0 */
rv_t func_08A6ECC0(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6ECC0:;
    sp = sp - 16;
    t0 = 0 + 0;
    s0 = a0 + 0;
    a3 = 0 + 0;
    v0 = LD32(a0+292);
    v1 = LD32(a0+296);
    v0 = v0 + a2;
    cnd_ = v0 == v1;
    ST32(a0+292, v0);
    if (cnd_) { goto L_08A6ECF8; }
    goto L_08A6ECEC;
L_08A6ECEC:;
    v0 = LD32(a0+340);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0+12); goto L_08A6ED04; }
    goto L_08A6ECF8;
L_08A6ECF8:;
    v0 = 1;
    ST32(s0+288, v0);
    v1 = LD32(s0+12);
    goto L_08A6ED04;
L_08A6ED04:;
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A6ED6C; }
    goto L_08A6ED0C;
L_08A6ED0C:;
    cnd_ = v1 == v0;
    v0 = 2;
    if (cnd_) { goto L_08A6ED4C; }
    goto L_08A6ED14;
L_08A6ED14:;
    cnd_ = v1 == v0;
    if (cnd_) { t0 = a1 + 0; goto L_08A6ED44; }
    goto L_08A6ED1C;
L_08A6ED1C:;
    a0 = s0 + 0;
    a1 = t0 + 0;
    a2 = a3 + 0;
    f0 = func_08A6C34C(a0, a1, a2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A6ED2C;
L_08A6ED2C:;
    a0 = 1;
    goto L_08A6ED30;
L_08A6ED30:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A6ED44:;
    a3 = a2 + 0;
    goto L_08A6ED1C;
L_08A6ED4C:;
    t0 = a1 + 0;
    cnd_ = a2 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A6ED1C; }
    goto L_08A6ED58;
L_08A6ED58:;
    v0 = 13;
    a0 = 0 + 0;
    ST32(s0+60, v0);
    ST32(s0+288, v1);
    goto L_08A6ED30;
L_08A6ED6C:;
    a0 = s0 + 228;
    v0 = func_08A6BDB0(a0, a1, a2, t1, t2, t3);
    goto L_08A6ED74;
L_08A6ED74:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A6ED30; }
    goto L_08A6ED7C;
L_08A6ED7C:;
    t0 = LD32(s0+232);
    a3 = LD32(s0+240);
    goto L_08A6ED1C;
}

/* 08A6ED88 */
rv_t func_08A6ED88(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6ED88:;
    sp = sp - 32;
    a1 = D_08AE70A4 - (28836);
    a0 = a0 + 312;
    a1 = a1 + 28836;
    a2 = sp + 0;
    { rv_t r_ = func_08A894F8(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6EDA4;
L_08A6EDA4:;
    v0 = v0 ^ 0x1;
    a0 = LD32(sp);
    v1 = (u32)-1;
    if (v0 == 0) v1 = a0;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A6EDC4 */
void func_08A6EDC4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6EDC4:;
    sp = sp - 16;
    s0 = a0 + 0;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A6EE00; }
    goto L_08A6EDDC;
L_08A6EDDC:;
    v0 = LD32(a0+324);
    v1 = 10;
    v1 = v1 - v0;
    a0 = a0 + v0;
    s1 = (s32)a2 < (s32)v1 ? a2 : v1;
    v0 = (s32)v0 < 10;
    a0 = a0 + 312;
    cnd_ = v0 != 0;
    a2 = s1 + 0;
    if (cnd_) { goto L_08A6EE14; }
    goto L_08A6EE00;
L_08A6EE00:;
    sp = sp + 16;
    return;
L_08A6EE14:;
    func_08A87AE0(a0, a1, a2);
    goto L_08A6EE1C;
L_08A6EE1C:;
    v0 = LD32(s0+324);
    v0 = v0 + s1;
    v1 = v0 + s0;
    ST8(v1+312, 0);
    ST32(s0+324, v0);
    goto L_08A6EE00;
}

/* 08A6EE34 */
rv_t func_08A6EE34(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A6EE34:;
    sp = sp - 48;
    s3 = a2 + 0;
    s2 = a1 + 0;
    v0 = LD32(a0+308);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A6EFDC; }
    goto L_08A6EE70;
L_08A6EE70:;
    cnd_ = (s32)a2 <= 0;
    s6 = (u32)-1;
    if (cnd_) { goto L_08A6EED8; }
    goto L_08A6EE78;
L_08A6EE78:;
    s7 = 3;
    s5 = 1;
    s4 = 2;
    v0 = LD32(s1+332);
    goto L_08A6EE88;
L_08A6EE88:;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_08A6EF5C; }
    goto L_08A6EE90;
L_08A6EE90:;
    cnd_ = v0 == v1;
    if (cnd_) { v0 = LD32(s1+328); goto L_08A6EF20; }
    goto L_08A6EE98;
L_08A6EE98:;
    cnd_ = v0 != s4;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A6EF0C; }
    goto L_08A6EEA0;
L_08A6EEA0:;
    a1 = 10;
    { u64 r_ = func_08A8986C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6EEA8;
L_08A6EEA8:;
    cnd_ = v0 == 0;
    a0 = 1;
    if (cnd_) { goto L_08A6EEDC; }
    goto L_08A6EEB0;
L_08A6EEB0:;
    a2 = v0 + 1;
    v0 = a2 - s2;
    s3 = s3 - v0;
    s2 = a2 + 0;
    ST8(s1+312, 0);
    ST32(s1+324, 0);
    ST32(s1+328, 0);
    ST32(s1+332, 0);
    goto L_08A6EED0;
L_08A6EED0:;
    cnd_ = (s32)s3 > 0;
    if (cnd_) { v0 = LD32(s1+332); goto L_08A6EE88; }
    goto L_08A6EED8;
L_08A6EED8:;
    a0 = 1;
    goto L_08A6EEDC;
L_08A6EEDC:;
    v0 = a0 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A6EF0C:;
    cnd_ = v0 != s7;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A6EEDC; }
    goto L_08A6EF14;
L_08A6EF14:;
    a0 = 1;
    goto L_08A6EF18;
L_08A6EF18:;
    ST32(s1+288, v1);
    goto L_08A6EEDC;
L_08A6EF20:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    s0 = (s32)s3 < (s32)v0 ? s3 : v0;
    a2 = s0 + 0;
    { rv_t r_ = func_08A6ECC0(a0, a1, a2, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6EF34;
L_08A6EF34:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A6EEDC; }
    goto L_08A6EF3C;
L_08A6EF3C:;
    v0 = LD32(s1+328);
    s2 = s2 + s0;
    s3 = s3 - s0;
    v0 = v0 - s0;
    cnd_ = v0 != 0;
    ST32(s1+328, v0);
    if (cnd_) { goto L_08A6EED0; }
    goto L_08A6EF54;
L_08A6EF54:;
    ST32(s1+332, s4);
    goto L_08A6EED0;
L_08A6EF5C:;
    a0 = s2 + 0;
    a1 = 10;
    { u64 r_ = func_08A8986C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6EF68;
L_08A6EF68:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A6EFC4; }
    goto L_08A6EF70;
L_08A6EF70:;
    a2 = v0 - s2;
    a1 = s2 + 0;
    a0 = s1 + 0;
    func_08A6EDC4(a0, a1, a2);
    goto L_08A6EF80;
L_08A6EF80:;
    v1 = s0 + 1;
    v0 = v1 - s2;
    a0 = s1 + 0;
    s3 = s3 - v0;
    s2 = v1 + 0;
    { rv_t r_ = func_08A6ED88(a0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6EF98;
L_08A6EF98:;
    cnd_ = v0 == s6;
    ST32(s1+328, v0);
    if (cnd_) { goto L_08A6EFB0; }
    goto L_08A6EFA0;
L_08A6EFA0:;
    v1 = s7 + 0;
    if (v0 != 0) v1 = s5;
    ST32(s1+332, v1);
    goto L_08A6EED0;
L_08A6EFB0:;
    v0 = 7;
    a0 = 0 + 0;
    v1 = 1;
    ST32(s1+60, v0);
    goto L_08A6EF18;
L_08A6EFC4:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    a2 = s3 + 0;
    func_08A6EDC4(a0, a1, a2);
    goto L_08A6EFD4;
L_08A6EFD4:;
    a0 = 1;
    goto L_08A6EEDC;
L_08A6EFDC:;
    { rv_t r_ = func_08A6ECC0(a0, a1, a2, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6EFE4;
L_08A6EFE4:;
    a0 = v0 + 0;
    goto L_08A6EEDC;
}

/* 08A6EFEC */
float func_08A6EFEC(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[4176] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 4176);
L_08A6EFEC:;
    sp = sp - 4176;
    v0 = 4096;
    a1 = sp + 0;
    a2 = sp + 4112;
    s1 = a0 + 0;
    ST32(sp+4112, v0);
    { u64 r_ = func_08A6C564(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6F02C;
L_08A6F02C:;
    s0 = v0 + 0;
    v0 = 3;
    cnd_ = s0 == v0;
    s2 = 1;
    if (cnd_) { goto L_08A6F06C; }
    goto L_08A6F03C;
L_08A6F03C:;
    cnd_ = s0 == s2;
    if (cnd_) { goto L_08A6F070; }
    goto L_08A6F044;
L_08A6F044:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD32(s1+160); goto L_08A6F0B8; }
    goto L_08A6F04C;
L_08A6F04C:;
    v0 = LD32(s1+396);
    cnd_ = v0 == 0;
    a2 = LD32(sp+4112);
    if (cnd_) { goto L_08A6F47C; }
    goto L_08A6F058;
L_08A6F058:;
    a0 = s1 + 192;
    a1 = sp + 0;
    v0 = func_08A6BDB0(a0, a1, a2, 0, 0, 0);
    goto L_08A6F064;
L_08A6F064:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A6F098; }
    goto L_08A6F06C;
L_08A6F06C:;
    goto L_08A6F070;
L_08A6F070:;
    sp = sp + 4176;
    return f0;
L_08A6F098:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A6C40C(a0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6F0A0;
L_08A6F0A0:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+160); goto L_08A6F0B8; }
    goto L_08A6F0A8;
L_08A6F0A8:;
    v0 = 17;
    ST32(s1+60, v0);
    ST32(s1+288, s2);
    goto L_08A6F06C;
L_08A6F0B8:;
    v1 = LD32(s1+284);
    a1 = D_08AE70A8 - (28840);
    a1 = a1 + 28840;
    s4 = v0 + v1;
    a0 = s4 + 0;
    { u64 r_ = func_08A89EE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6F0D0;
L_08A6F0D0:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A6F43C; }
    goto L_08A6F0D8;
L_08A6F0D8:;
    a1 = a1 + 2;
    ST8(a1, 0);
    v0 = 0x51eb0000u;
    v0 = v0 | 0x851f;
    v1 = LD32(s1+276);
    a3 = LD32(s1+160);
    a2 = LD32(s1+168);
    { s64 p_ = (s64)(s32)v1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = a1 - a3;
    v1 = (u32)((s32)v1 >> 31);
    s3 = a1 + 2;
    a0 = a0 + 1;
    v0 = hi;
    v0 = (u32)((s32)v0 >> 5);
    a1 = s3 - a3;
    v1 = v0 - v1;
    t0 = 1;
    s5 = a2 - a1;
    ST32(s1+172, a0);
    cnd_ = v1 == t0;
    ST32(s1+168, a0);
    if (cnd_) { goto L_08A6F3F4; }
    goto L_08A6F12C;
L_08A6F12C:;
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s1+304); goto L_08A6F2B0; }
    goto L_08A6F138;
L_08A6F138:;
    a1 = D_08AE70B0 - (28848);
    a1 = a1 + 28848;
    a0 = s4 + 0;
    { u64 r_ = func_08A89EE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6F148;
L_08A6F148:;
    cnd_ = v0 == 0;
    s6 = v0 + 0;
    if (cnd_) { goto L_08A6F214; }
    goto L_08A6F150;
L_08A6F150:;
    v1 = D_08AE70C0 - (28864);
    v0 = v1 + 28864;
    a1 = LD32(v1+28864);
    a2 = LD_U16(v0+8);
    a3 = LD_U8(v0+10);
    v1 = LD32(v0+4);
    s7 = sp + 4096;
    a0 = s7 + 0;
    ST16(sp+4104, a2);
    s2 = s6 + 16;
    s0 = s2 + 0;
    ST32(sp+4096, a1);
    ST32(sp+4100, v1);
    ST8(sp+4106, a3);
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6F18C;
L_08A6F18C:;
    cnd_ = s2 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A6F1F0; }
    goto L_08A6F194;
L_08A6F194:;
    v1 = (u32)(s32)LD_S8(s6+16);
    cnd_ = v1 == 0;
    v0 = 10;
    if (cnd_) { goto L_08A6F1F0; }
    goto L_08A6F1A0;
L_08A6F1A0:;
    cnd_ = v1 == v0;
    v0 = 13;
    if (cnd_) { goto L_08A6F1F0; }
    goto L_08A6F1A8;
L_08A6F1A8:;
    cnd_ = v1 == v0;
    v0 = 32;
    if (cnd_) { goto L_08A6F1F0; }
    goto L_08A6F1B0;
L_08A6F1B0:;
    cnd_ = v1 == v0;
    v1 = 32;
    if (cnd_) { goto L_08A6F1F0; }
    goto L_08A6F1B8;
L_08A6F1B8:;
    a1 = 10;
    a0 = 13;
    s0 = s0 + 1;
    goto L_08A6F1C4;
L_08A6F1C4:;
    cnd_ = s0 == 0;
    if (cnd_) { v1 = s0 - s2; goto L_08A6F1F4; }
    goto L_08A6F1CC;
L_08A6F1CC:;
    v0 = (u32)(s32)LD_S8(s0);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = s0 - s2; goto L_08A6F1F4; }
    goto L_08A6F1D8;
L_08A6F1D8:;
    cnd_ = v0 == a1;
    if (cnd_) { v1 = s0 - s2; goto L_08A6F1F4; }
    goto L_08A6F1E0;
L_08A6F1E0:;
    cnd_ = v0 == a0;
    if (cnd_) { v1 = s0 - s2; goto L_08A6F1F4; }
    goto L_08A6F1E8;
L_08A6F1E8:;
    cnd_ = v0 != v1;
    if (cnd_) { s0 = s0 + 1; goto L_08A6F1C4; }
    goto L_08A6F1F0;
L_08A6F1F0:;
    v1 = s0 - s2;
    goto L_08A6F1F4;
L_08A6F1F4:;
    v0 = (s32)a2 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = 16;
    if (cnd_) { goto L_08A6F2A0; }
    goto L_08A6F200;
L_08A6F200:;
    cnd_ = v1 == a2;
    if (cnd_) { a1 = s7 + 0; goto L_08A6F290; }
    goto L_08A6F208;
L_08A6F208:;
    a0 = s2 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6F210;
L_08A6F210:;
    ST32(s1+296, v0);
    goto L_08A6F214;
L_08A6F214:;
    a1 = D_08AE70CC - (28876);
    a0 = s4 + 0;
    a1 = a1 + 28876;
    { u64 r_ = func_08A89EE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6F224;
L_08A6F224:;
    v0 = 0 < v0;
    cnd_ = v0 == 0;
    ST32(s1+308, v0);
    if (cnd_) { goto L_08A6F240; }
    goto L_08A6F230;
L_08A6F230:;
    ST8(s1+312, 0);
    ST32(s1+324, 0);
    ST32(s1+328, 0);
    ST32(s1+332, 0);
    goto L_08A6F240;
L_08A6F240:;
    v0 = LD32(s1+12);
    v0 = v0 - 3;
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08A6F26C; }
    goto L_08A6F254;
L_08A6F254:;
    v0 = 8;
    cnd_ = s6 == 0;
    ST32(s1+16, v0);
    if (cnd_) { goto L_08A6F274; }
    goto L_08A6F260;
L_08A6F260:;
    v0 = LD32(s1+296);
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08A6F274; }
    goto L_08A6F26C;
L_08A6F26C:;
    ST32(s1+288, v0);
    goto L_08A6F06C;
L_08A6F274:;
    cnd_ = (s32)s5 <= 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A6F06C; }
    goto L_08A6F27C;
L_08A6F27C:;
    a1 = s3 + 0;
    a2 = s5 + 0;
    { rv_t r_ = func_08A6EE34(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6F288;
L_08A6F288:;
    goto L_08A6F070;
L_08A6F290:;
    a0 = s2 + 0;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6F298;
L_08A6F298:;
    cnd_ = (s32)v0 < 0;
    v0 = 16;
    if (cnd_) { goto L_08A6F208; }
    goto L_08A6F2A0;
L_08A6F2A0:;
    v1 = 1;
    ST32(s1+60, v0);
    ST32(s1+288, v1);
    goto L_08A6F06C;
L_08A6F2B0:;
    v0 = (s32)v0 < 11;
    cnd_ = v0 != 0;
    v0 = 11;
    if (cnd_) { goto L_08A6F2C8; }
    goto L_08A6F2BC;
L_08A6F2BC:;
    ST32(s1+60, v0);
    ST32(s1+288, t0);
    goto L_08A6F06C;
L_08A6F2C8:;
    a1 = D_08AE70E8 - (28904);
    a1 = a1 + 28904;
    a0 = s4 + 0;
    { u64 r_ = func_08A89EE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6F2D8;
L_08A6F2D8:;
    cnd_ = v0 == 0;
    s2 = v0 + 9;
    if (cnd_) { goto L_08A6F138; }
    goto L_08A6F2E0;
L_08A6F2E0:;
    a0 = LD_U8(s2);
    a2 = D_08AE9044 - (-28604);
    a1 = a2 - 28604;
    v0 = (u32)(s32)(s8)a0;
    v0 = v0 + a1;
    v1 = LD_U8(v0);
    v1 = v1 & 0x8;
    cnd_ = v1 == 0;
    v0 = (u32)(s32)(s8)a0;
    if (cnd_) { goto L_08A6F328; }
    goto L_08A6F304;
L_08A6F304:;
    s2 = s2 + 1;
    goto L_08A6F308;
L_08A6F308:;
    a0 = LD_U8(s2);
    v0 = (u32)(s32)(s8)a0;
    v0 = v0 + a1;
    v1 = LD_U8(v0);
    v1 = v1 & 0x8;
    cnd_ = v1 != 0;
    if (cnd_) { s2 = s2 + 1; goto L_08A6F308; }
    goto L_08A6F324;
L_08A6F324:;
    v0 = (u32)(s32)(s8)a0;
    goto L_08A6F328;
L_08A6F328:;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A6F368; }
    goto L_08A6F330;
L_08A6F330:;
    a1 = a2 - 28604;
    v1 = v0 + a1;
    v0 = LD_U8(v1);
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    if (cnd_) { ST8(a0, 0); goto L_08A6F36C; }
    goto L_08A6F348;
L_08A6F348:;
    a0 = a0 + 1;
    goto L_08A6F34C;
L_08A6F34C:;
    v0 = (u32)(s32)LD_S8(a0);
    cnd_ = v0 == 0;
    v1 = v0 + a1;
    if (cnd_) { goto L_08A6F368; }
    goto L_08A6F358;
L_08A6F358:;
    v0 = LD_U8(v1);
    v0 = v0 & 0x8;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = a0 + 1; goto L_08A6F34C; }
    goto L_08A6F368;
L_08A6F368:;
    ST8(a0, 0);
    goto L_08A6F36C;
L_08A6F36C:;
    v0 = 47;
    v1 = (u32)(s32)LD_S8(s2);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A6F398; }
    goto L_08A6F37C;
L_08A6F37C:;
    a0 = s2 + 0;
    { u64 r_ = func_08A6B560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6F384;
L_08A6F384:;
    cnd_ = v0 != 0;
    ST32(s1+300, v0);
    if (cnd_) { goto L_08A6F06C; }
    goto L_08A6F38C;
L_08A6F38C:;
    v0 = 1;
    ST32(s1+60, v0);
    goto L_08A6F26C;
L_08A6F398:;
    a0 = LD32(s1+24);
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6F3A0;
L_08A6F3A0:;
    a0 = s2 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6F3AC;
L_08A6F3AC:;
    s0 = s0 + v0;
    s0 = s0 + 14;
    a0 = s0 + 0;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6F3BC;
L_08A6F3BC:;
    cnd_ = v0 != 0;
    ST32(s1+300, v0);
    if (cnd_) { goto L_08A6F3D0; }
    goto L_08A6F3C4;
L_08A6F3C4:;
    v0 = 1;
    ST32(s1+60, v0);
    ST32(s1+288, v0);
    goto L_08A6F3D0;
L_08A6F3D0:;
    a3 = LD_U16(s1+32);
    a2 = LD32(s1+24);
    a0 = LD32(s1+300);
    a1 = D_08AE70F4 - (28916);
    a1 = a1 + 28916;
    t0 = s2 + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6F3EC;
L_08A6F3EC:;
    goto L_08A6F070;
L_08A6F3F4:;
    cnd_ = s5 == 0;
    a2 = s5 + 1;
    if (cnd_) { goto L_08A6F42C; }
    goto L_08A6F3FC;
L_08A6F3FC:;
    a0 = a3 + 0;
    a1 = s3 + 0;
    { u64 r_ = func_08A87C00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6F408;
L_08A6F408:;
    ST32(s1+168, s5);
    v0 = 6;
    goto L_08A6F410;
L_08A6F410:;
    ST32(s1+16, v0);
    a0 = s1 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    f0 = func_08A6C34C(a0, a1, a2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A6F424;
L_08A6F424:;
    goto L_08A6F070;
L_08A6F42C:;
    a0 = s1 + 156;
    func_08A6C1D4(a0);
    goto L_08A6F434;
L_08A6F434:;
    v0 = 6;
    goto L_08A6F410;
L_08A6F43C:;
    a1 = D_08AE7104 - (28932);
    a1 = a1 + 28932;
    a0 = s4 + 0;
    { u64 r_ = func_08A89EE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6F44C;
L_08A6F44C:;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A6F0D8; }
    goto L_08A6F454;
L_08A6F454:;
    v0 = 2;
    cnd_ = s0 != v0;
    if (cnd_) { goto L_08A6F070; }
    goto L_08A6F460;
L_08A6F460:;
    v0 = 1;
    v1 = 7;
    ST32(s1+288, v0);
    ST32(s1+60, v1);
    v0 = sceNetInetGetErrno(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6F474;
L_08A6F474:;
    ST32(s1+80, v0);
    goto L_08A6F06C;
L_08A6F47C:;
    a0 = s1 + 156;
    a1 = sp + 0;
    v0 = func_08A6BDB0(a0, a1, a2, 0, 0, 0);
    goto L_08A6F488;
L_08A6F488:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A6F070; }
    goto L_08A6F490;
L_08A6F490:;
    v0 = LD32(s1+160);
    goto L_08A6F0B8;
}

/* 08A6F498 */
float func_08A6F498(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[8240] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 8240);
L_08A6F498:;
    sp = sp - 8240;
    s0 = a0 + 0;
    v0 = func_08A6B620(a1, a2, a3, t0, t1, t2, t3);
    goto L_08A6F4C0;
L_08A6F4C0:;
    s2 = v0 + 0;
    v0 = LD32(s0+288);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A6F580; }
    goto L_08A6F4D0;
L_08A6F4D0:;
    v0 = LD32(s0+380);
    cnd_ = v0 == 0;
    s5 = 8192;
    if (cnd_) { goto L_08A6F580; }
    goto L_08A6F4DC;
L_08A6F4DC:;
    s3 = 3;
    s4 = 2;
    a0 = s0 + 0;
    goto L_08A6F4E8;
L_08A6F4E8:;
    a1 = sp + 0;
    a2 = sp + 8192;
    ST32(sp+8192, s5);
    { u64 r_ = func_08A6C564(a0, a1, a2, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6F4F8;
L_08A6F4F8:;
    cnd_ = v0 == s3;
    s1 = 1;
    if (cnd_) { goto L_08A6F57C; }
    goto L_08A6F500;
L_08A6F500:;
    cnd_ = v0 == s1;
    if (cnd_) { goto L_08A6F580; }
    goto L_08A6F508;
L_08A6F508:;
    cnd_ = v0 == s4;
    if (cnd_) { v1 = LD32(s0+296); goto L_08A6F5D8; }
    goto L_08A6F510;
L_08A6F510:;
    v0 = LD32(s0+396);
    cnd_ = v0 == 0;
    a2 = LD32(sp+8192);
    if (cnd_) { goto L_08A6F5CC; }
    goto L_08A6F51C;
L_08A6F51C:;
    a0 = s0 + 192;
    a1 = sp + 0;
    v0 = func_08A6BDB0(a0, a1, a2, 0, 0, 0);
    goto L_08A6F528;
L_08A6F528:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A6F57C; }
    goto L_08A6F530;
L_08A6F530:;
    v0 = LD32(s0+172);
    ST32(s0+168, v0);
    { rv_t r_ = func_08A6C40C(a0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6F53C;
L_08A6F53C:;
    cnd_ = v0 == 0;
    v0 = 17;
    if (cnd_) { goto L_08A6F5C0; }
    goto L_08A6F544;
L_08A6F544:;
    v0 = LD32(s0+168);
    v1 = LD32(s0+172);
    a2 = v0 - v1;
    cnd_ = a2 != 0;
    if (cnd_) { a1 = LD32(s0+160); goto L_08A6F5A0; }
    goto L_08A6F558;
L_08A6F558:;
    v0 = func_08A6B620(0, a2, 0, 0, 0, 0, 0);
    goto L_08A6F560;
L_08A6F560:;
    v1 = LD32(s0+288);
    cnd_ = v1 != 0;
    a0 = v0 - s2;
    if (cnd_) { goto L_08A6F57C; }
    goto L_08A6F56C;
L_08A6F56C:;
    v0 = LD32(s0+380);
    v0 = a0 < v0;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A6F4E8; }
    goto L_08A6F57C;
L_08A6F57C:;
    goto L_08A6F580;
L_08A6F580:;
    goto L_08A6F584;
L_08A6F584:;
    sp = sp + 8240;
    return f0;
L_08A6F5A0:;
    a0 = s0 + 0;
    a1 = a1 + v1;
    goto L_08A6F5A8;
L_08A6F5A8:;
    { rv_t r_ = func_08A6EE34(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6F5B0;
L_08A6F5B0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A6F558; }
    goto L_08A6F5B8;
L_08A6F5B8:;
    goto L_08A6F584;
L_08A6F5C0:;
    ST32(s0+60, v0);
    ST32(s0+288, s1);
    goto L_08A6F57C;
L_08A6F5CC:;
    a0 = s0 + 0;
    a1 = sp + 0;
    goto L_08A6F5A8;
L_08A6F5D8:;
    cnd_ = (s32)v1 <= 0;
    ST32(s0+288, s1);
    if (cnd_) { goto L_08A6F57C; }
    goto L_08A6F5E0;
L_08A6F5E0:;
    v0 = LD32(s0+292);
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A6F580; }
    goto L_08A6F5F0;
L_08A6F5F0:;
    v0 = 15;
    ST32(s0+60, v0);
    goto L_08A6F580;
}

/* 08A6F5FC */
void func_08A6F5FC(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6F5FC:;
    sp = sp - 16;
    v0 = D_08C320DC - (8412);
    v1 = LD32(v0+8412);
    v0 = 1;
    cnd_ = v1 != v0;
    t0 = 2;
    if (cnd_) { goto L_08A6F62C; }
    goto L_08A6F618;
L_08A6F618:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A6F630; }
    goto L_08A6F620;
L_08A6F620:;
    v0 = func_08A6FDC4(a0, a1, a2, t1, t2, t3);
    goto L_08A6F628;
L_08A6F628:;
    t0 = v0 + 0;
    goto L_08A6F62C;
L_08A6F62C:;
    goto L_08A6F630;
L_08A6F630:;
    v0 = t0 + 0;
    sp = sp + 16;
    return;
}

/* 08A6F63C */
void func_08A6F63C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6F63C:;
    sp = sp - 16;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A6F654; }
    goto L_08A6F648;
L_08A6F648:;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A6F660; }
    goto L_08A6F654;
L_08A6F654:;
    goto L_08A6F658;
L_08A6F658:;
    sp = sp + 16;
    return;
L_08A6F660:;
    func_08A6FEDC(a0, t1, t2, t3);
    goto L_08A6F668;
L_08A6F668:;
    goto L_08A6F658;
}

/* 08A6F670 */
void func_08A6F670(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6F670:;
    sp = sp - 16;
    cnd_ = a0 == 0;
    v1 = 2;
    if (cnd_) { goto L_08A6F68C; }
    goto L_08A6F680;
L_08A6F680:;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A6F69C; }
    goto L_08A6F68C;
L_08A6F68C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return;
L_08A6F69C:;
    v0 = func_08A70560(a0, a1);
    goto L_08A6F6A4;
L_08A6F6A4:;
    v1 = v0 + 0;
    goto L_08A6F68C;
}

/* 08A6F6AC */
void func_08A6F6AC(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6F6AC:;
    sp = sp - 16;
    cnd_ = a0 == 0;
    v1 = 2;
    if (cnd_) { goto L_08A6F6D8; }
    goto L_08A6F6BC;
L_08A6F6BC:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A6F6DC; }
    goto L_08A6F6C8;
L_08A6F6C8:;
    v0 = LD32(v0+264);
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A6F6E8; }
    goto L_08A6F6D8;
L_08A6F6D8:;
    goto L_08A6F6DC;
L_08A6F6DC:;
    v0 = v1 + 0;
    sp = sp + 16;
    return;
L_08A6F6E8:;
    { rv_t r_ = func_08A70334(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6F6F0;
L_08A6F6F0:;
    v1 = v0 + 0;
    goto L_08A6F6D8;
}

/* 08A6F6F8 */
void func_08A6F6F8(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6F6F8:;
    sp = sp - 16;
    t0 = 2;
    cnd_ = a0 == 0;
    v0 = a1 + 0;
    if (cnd_) { goto L_08A6F738; }
    goto L_08A6F70C;
L_08A6F70C:;
    a1 = LD32(a0);
    cnd_ = a1 == 0;
    v1 = v0 < 0x9u;
    if (cnd_) { goto L_08A6F738; }
    goto L_08A6F718;
L_08A6F718:;
    v0 = v0 << 3;
    v0 = v0 + a1;
    a1 = D_08AE7108 - (28936);
    cnd_ = v1 == 0;
    a1 = a1 + 28936;
    if (cnd_) { goto L_08A6F748; }
    goto L_08A6F72C;
L_08A6F72C:;
    ST32(v0+424, a3);
    t0 = 0 + 0;
    ST32(v0+420, a2);
    goto L_08A6F738;
L_08A6F738:;
    v0 = t0 + 0;
    sp = sp + 16;
    return;
L_08A6F748:;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6F750;
L_08A6F750:;
    t0 = 2;
    goto L_08A6F738;
}

/* 08A6F758 */
rv_t func_08A6F758(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_08A6F758:;
    sp = sp - 80;
    t4 = a2 + 0;
    t5 = a3 + 0;
    t7 = t0 + 0;
    t8 = t1 + 0;
    t6 = t2 + 0;
    cnd_ = a0 == 0;
    t9 = t3 + 0;
    if (cnd_) { goto L_08A6F854; }
    goto L_08A6F77C;
L_08A6F77C:;
    a2 = LD32(a0);
    cnd_ = a2 == 0;
    v0 = 2;
    if (cnd_) { goto L_08A6F808; }
    goto L_08A6F788;
L_08A6F788:;
    cnd_ = a1 == 0;
    if (cnd_) {  goto L_08A6F80C; }
    goto L_08A6F790;
L_08A6F790:;
    v0 = (u32)(s32)LD_S8(a1);
    cnd_ = v0 == 0;
    v0 = 2;
    if (cnd_) { goto L_08A6F808; }
    goto L_08A6F79C;
L_08A6F79C:;
    cnd_ = t4 == 0;
    if (cnd_) {  goto L_08A6F80C; }
    goto L_08A6F7A4;
L_08A6F7A4:;
    v0 = (u32)(s32)LD_S8(t4);
    cnd_ = v0 == 0;
    v0 = 2;
    if (cnd_) { goto L_08A6F808; }
    goto L_08A6F7B0;
L_08A6F7B0:;
    cnd_ = a3 == 0;
    if (cnd_) {  goto L_08A6F80C; }
    goto L_08A6F7B8;
L_08A6F7B8:;
    v0 = (u32)(s32)LD_S8(a3);
    cnd_ = v0 == 0;
    v0 = 2;
    if (cnd_) { goto L_08A6F808; }
    goto L_08A6F7C4;
L_08A6F7C4:;
    cnd_ = t2 == 0;
    if (cnd_) { a1 = D_08AE7118 - (28952); goto L_08A6F84C; }
    goto L_08A6F7CC;
L_08A6F7CC:;
    v0 = LD32(a2+264);
    cnd_ = v0 == 0;
    a2 = D_08AE7128 - (28968);
    if (cnd_) { goto L_08A6F814; }
    goto L_08A6F7D8;
L_08A6F7D8:;
    ST32(sp+32, 0);
    a2 = t3 + 0;
    a1 = sp + 32;
    ST32(sp+36, 0);
    ST32(sp+40, 0);
    ST32(sp+44, 0);
    ST32(sp+48, 0);
    ST32(sp+52, 0);
    ST32(sp+56, 0);
    t_ = t2;
    ST32(sp+60, 0);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6F804;
L_08A6F804:;
    v0 = 0 + 0;
    goto L_08A6F808;
L_08A6F808:;
    goto L_08A6F80C;
L_08A6F80C:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08A6F814:;
    a2 = a2 + 28968;
    a3 = t4 + 0;
    t0 = t5 + 0;
    t1 = a2 + 0;
    t2 = a2 + 0;
    t3 = 0 + 0;
    ST32(sp, t7);
    ST32(sp+8, t8);
    ST32(sp+12, t6);
    ST32(sp+16, t9);
    ST32(sp+4, 0);
    { rv_t r_ = func_08A72228(a0, a1, a2, a3, t0, t1, t2, t3, sp); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6F844;
L_08A6F844:;
    goto L_08A6F80C;
L_08A6F84C:;
    a1 = a1 + 28952;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6F854;
L_08A6F854:;
    v0 = 2;
    goto L_08A6F808;
}

/* 08A6F85C */
rv_t func_08A6F85C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19, u32 sp_in)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80); memcpy(stack_ + 80, PTR(sp_in), 16); /* stack-passed arguments */
L_08A6F85C:;
    sp = sp - 80;
    t4 = t1 + 0;
    t5 = t2 + 0;
    t6 = t3 + 0;
    t7 = LD32(sp+80);
    cnd_ = a0 == 0;
    t8 = LD32(sp+84);
    if (cnd_) { goto L_08A6F964; }
    goto L_08A6F87C;
L_08A6F87C:;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    v0 = 2;
    if (cnd_) { goto L_08A6F920; }
    goto L_08A6F888;
L_08A6F888:;
    cnd_ = a1 == 0;
    if (cnd_) {  goto L_08A6F924; }
    goto L_08A6F890;
L_08A6F890:;
    v0 = (u32)(s32)LD_S8(a1);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 2; goto L_08A6F920; }
    goto L_08A6F89C;
L_08A6F89C:;
    cnd_ = a2 == 0;
    v0 = D_08AE7128 - (28968);
    if (cnd_) { goto L_08A6F96C; }
    goto L_08A6F8A4;
L_08A6F8A4:;
    cnd_ = a3 == 0;
    v0 = 2;
    if (cnd_) { goto L_08A6F920; }
    goto L_08A6F8AC;
L_08A6F8AC:;
    v0 = (u32)(s32)LD_S8(a3);
    cnd_ = v0 == 0;
    v0 = 2;
    if (cnd_) { goto L_08A6F920; }
    goto L_08A6F8B8;
L_08A6F8B8:;
    cnd_ = t0 == 0;
    if (cnd_) { goto L_08A6F924; }
    goto L_08A6F8C0;
L_08A6F8C0:;
    v0 = (u32)(s32)LD_S8(t0);
    cnd_ = v0 == 0;
    v0 = 2;
    if (cnd_) { goto L_08A6F924; }
    goto L_08A6F8CC;
L_08A6F8CC:;
    cnd_ = t4 == 0;
    if (cnd_) { goto L_08A6F8DC; }
    goto L_08A6F8D4;
L_08A6F8D4:;
    v0 = (u32)(s32)LD_S8(t4);
    if (v0 == 0) t4 = 0;
    goto L_08A6F8DC;
L_08A6F8DC:;
    cnd_ = t7 == 0;
    if (cnd_) { a1 = D_08AE7118 - (28952); goto L_08A6F95C; }
    goto L_08A6F8E4;
L_08A6F8E4:;
    v0 = LD32(v1+264);
    cnd_ = v0 == 0;
    t1 = D_08AE7128 - (28968);
    if (cnd_) { goto L_08A6F92C; }
    goto L_08A6F8F0;
L_08A6F8F0:;
    ST32(sp+32, 0);
    a2 = t8 + 0;
    a1 = sp + 32;
    ST32(sp+36, 0);
    ST32(sp+40, 0);
    ST32(sp+44, 0);
    ST32(sp+48, 0);
    ST32(sp+52, 0);
    ST32(sp+56, 0);
    t_ = t7;
    ST32(sp+60, 0);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6F91C;
L_08A6F91C:;
    v0 = 0 + 0;
    goto L_08A6F920;
L_08A6F920:;
    goto L_08A6F924;
L_08A6F924:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08A6F92C:;
    t1 = t1 + 28968;
    v0 = 1;
    t3 = t4 + 0;
    t2 = t1 + 0;
    ST32(sp, t5);
    ST32(sp+4, v0);
    ST32(sp+8, t6);
    ST32(sp+12, t7);
    ST32(sp+16, t8);
    { rv_t r_ = func_08A72228(a0, a1, a2, a3, t0, t1, t2, t3, sp); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6F954;
L_08A6F954:;
    goto L_08A6F924;
L_08A6F95C:;
    a1 = a1 + 28952;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6F964;
L_08A6F964:;
    v0 = 2;
    goto L_08A6F920;
L_08A6F96C:;
    a2 = v0 + 28968;
    goto L_08A6F8A4;
}

/* 08A6F974 */
float func_08A6F974(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6F974:;
    sp = sp - 16;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A6F9A0; }
    goto L_08A6F988;
L_08A6F988:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A6F9A4; }
    goto L_08A6F994;
L_08A6F994:;
    v0 = LD32(v0+264);
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_08A6F9B0; }
    goto L_08A6F9A0;
L_08A6F9A0:;
    goto L_08A6F9A4;
L_08A6F9A4:;
    sp = sp + 16;
    return f0;
L_08A6F9B0:;
    f0 = func_08A730FC(a0, a1, t1, t2, t3);
    goto L_08A6F9B8;
L_08A6F9B8:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A6FF3C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6F9C0;
L_08A6F9C0:;
    goto L_08A6F9A4;
}

/* 08A6F9C8 */
rv_t func_08A6F9C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A6F9C8:;
    sp = sp - 48;
    s4 = a2 + 0;
    s3 = t0 + 0;
    s2 = a1 + 0;
    s1 = a3 + 0;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A6FA9C; }
    goto L_08A6F9FC;
L_08A6F9FC:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    v0 = 2;
    if (cnd_) { goto L_08A6FA50; }
    goto L_08A6FA08;
L_08A6FA08:;
    cnd_ = a3 == 0;
    if (cnd_) { a1 = D_08AE7118 - (28952); goto L_08A6FAA4; }
    goto L_08A6FA10;
L_08A6FA10:;
    a0 = a1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6FA18;
L_08A6FA18:;
    v0 = v0 < 0x15u;
    cnd_ = v0 == 0;
    a1 = D_08AE7178 - (29048);
    if (cnd_) { goto L_08A6FA8C; }
    goto L_08A6FA24;
L_08A6FA24:;
    v0 = LD32(s0);
    v1 = LD32(v0+264);
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A6FA70; }
    goto L_08A6FA34;
L_08A6FA34:;
    ST32(sp, 0);
    a2 = s3 + 0;
    ST32(sp+4, 0);
    a1 = sp + 0;
    t_ = s1;
    ST32(sp+8, 0);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6FA4C;
L_08A6FA4C:;
    v0 = 0 + 0;
    goto L_08A6FA50;
L_08A6FA50:;
    goto L_08A6FA54;
L_08A6FA54:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A6FA70:;
    a1 = s2 + 0;
    a2 = s4 + 0;
    a3 = s1 + 0;
    t0 = s3 + 0;
    { rv_t r_ = func_08A76F0C(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6FA84;
L_08A6FA84:;
    goto L_08A6FA54;
L_08A6FA8C:;
    a0 = s0 + 0;
    a1 = a1 + 29048;
    goto L_08A6FA94;
L_08A6FA94:;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6FA9C;
L_08A6FA9C:;
    v0 = 2;
    goto L_08A6FA50;
L_08A6FAA4:;
    a1 = a1 + 28952;
    goto L_08A6FA94;
}

/* 08A6FAAC */
rv_t func_08A6FAAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[544] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 544);
L_08A6FAAC:;
    sp = sp - 544;
    s2 = t1 + 0;
    s1 = t0 + 0;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A6FB38; }
    goto L_08A6FAD0;
L_08A6FAD0:;
    t2 = LD32(a0);
    v1 = a1 < 0x1u;
    v0 = t2 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A6FB14; }
    goto L_08A6FAE8;
L_08A6FAE8:;
    cnd_ = t0 == 0;
    if (cnd_) { a1 = D_08AE7118 - (28952); goto L_08A6FB64; }
    goto L_08A6FAF0;
L_08A6FAF0:;
    v0 = LD32(t2+264);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = sp + 0; goto L_08A6FB40; }
    goto L_08A6FAFC;
L_08A6FAFC:;
    v1 = LD32(t2+496);
    v0 = 4;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = D_08AE7190 - (29072); goto L_08A6FB2C; }
    goto L_08A6FB0C;
L_08A6FB0C:;
    { rv_t r_ = func_08A74984(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6FB14;
L_08A6FB14:;
    sp = sp + 544;
    return (rv_t){ v0, v1, f0 };
L_08A6FB2C:;
    a1 = a1 + 29072;
    goto L_08A6FB30;
L_08A6FB30:;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6FB38;
L_08A6FB38:;
    v0 = 2;
    goto L_08A6FB14;
L_08A6FB40:;
    a1 = 0 + 0;
    a2 = 516;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6FB4C;
L_08A6FB4C:;
    a0 = s0 + 0;
    a1 = sp + 0;
    t_ = s1;
    a2 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6FB5C;
L_08A6FB5C:;
    v0 = 0 + 0;
    goto L_08A6FB14;
L_08A6FB64:;
    a1 = a1 + 28952;
    goto L_08A6FB30;
}

/* 08A6FB6C */
void func_08A6FB6C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[544] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 544);
L_08A6FB6C:;
    sp = sp - 544;
    s4 = a1 + 0;
    a1 = a2 + 0;
    s3 = a3 + 0;
    s2 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A6FDAC; }
    goto L_08A6FBA0;
L_08A6FBA0:;
    s1 = LD32(a0);
    cnd_ = s1 == 0;
    v1 = 2;
    if (cnd_) { goto L_08A6FD40; }
    goto L_08A6FBAC;
L_08A6FBAC:;
    v0 = LD32(s1+264);
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A6FD40; }
    goto L_08A6FBB8;
L_08A6FBB8:;
    v1 = LD32(s1+496);
    v0 = 4;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = D_08AE7190 - (29072); goto L_08A6FDBC; }
    goto L_08A6FBC8;
L_08A6FBC8:;
    cnd_ = a2 == 0;
    if (cnd_) { a1 = D_08AE7250 - (29264); goto L_08A6FDB4; }
    goto L_08A6FBD0;
L_08A6FBD0:;
    cnd_ = a3 == 0;
    if (cnd_) { a1 = D_08AE7268 - (29288); goto L_08A6FDA0; }
    goto L_08A6FBD8;
L_08A6FBD8:;
    a0 = sp + 0;
    a2 = 256;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6FBE4;
L_08A6FBE4:;
    v0 = (u32)(s32)LD_S8(sp);
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A6FC18; }
    goto L_08A6FBF0;
L_08A6FBF0:;
    a0 = sp + 0;
    a2 = 92;
    a3 = 47;
    goto L_08A6FBFC;
L_08A6FBFC:;
    v0 = (u32)(s32)LD_S8(a0);
    a1 = a1 + 1;
    cnd_ = v0 == a2;
    v1 = sp + a1;
    if (cnd_) { goto L_08A6FD98; }
    goto L_08A6FC0C;
L_08A6FC0C:;
    v0 = (u32)(s32)LD_S8(v1);
    cnd_ = v0 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A6FBFC; }
    goto L_08A6FC18;
L_08A6FC18:;
    s0 = sp + 256;
    a1 = s3 + 0;
    a0 = s0 + 0;
    a2 = 256;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6FC2C;
L_08A6FC2C:;
    v0 = (u32)(s32)LD_S8(sp+256);
    cnd_ = v0 == 0;
    s5 = s0 + 0;
    if (cnd_) { goto L_08A6FC60; }
    goto L_08A6FC38;
L_08A6FC38:;
    a0 = 92;
    a1 = 47;
    v1 = s0 + 0;
    v0 = (u32)(s32)LD_S8(v1);
    goto L_08A6FC48;
L_08A6FC48:;
    cnd_ = v0 == a0;
    if (cnd_) { ST8(v1, a1); goto L_08A6FC50; }
    goto L_08A6FC50;
L_08A6FC50:;
    v1 = v1 + 1;
    v0 = (u32)(s32)LD_S8(v1);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A6FC48; }
    goto L_08A6FC60;
L_08A6FC60:;
    v0 = LD32(s1+556);
    s3 = s1 + 560;
    cnd_ = s4 == v0;
    s0 = s1 + 816;
    if (cnd_) { goto L_08A6FD68; }
    goto L_08A6FC70;
L_08A6FC70:;
    ST32(s1+556, s4);
    goto L_08A6FC74;
L_08A6FC74:;
    a0 = s3 + 0;
    a2 = 256;
    a1 = sp + 0;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6FC84;
L_08A6FC84:;
    a0 = s0 + 0;
    a1 = s5 + 0;
    a2 = 256;
    s0 = s1 + 524;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6FC98;
L_08A6FC98:;
    a2 = D_08AE7280 - (29312);
    a2 = a2 + 29312;
    a0 = s2 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A6FCAC;
L_08A6FCAC:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = s4 + 0;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A6FCBC;
L_08A6FCBC:;
    a2 = D_08AE7200 - (29184);
    a2 = a2 + 29184;
    a0 = s2 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A6FCD0;
L_08A6FCD0:;
    a2 = LD32(s1+408);
    a0 = s2 + 0;
    a1 = s0 + 0;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A6FCE0;
L_08A6FCE0:;
    a2 = D_08AE728C - (29324);
    a2 = a2 + 29324;
    a0 = s2 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A6FCF4;
L_08A6FCF4:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = sp + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A6FD04;
L_08A6FD04:;
    a2 = D_08AE729C - (29340);
    a2 = a2 + 29340;
    a0 = s2 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A6FD18;
L_08A6FD18:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = s5 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A6FD28;
L_08A6FD28:;
    a2 = D_08AE7228 - (29224);
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = a2 + 29224;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A6FD3C;
L_08A6FD3C:;
    v1 = 0 + 0;
    goto L_08A6FD40;
L_08A6FD40:;
    v0 = v1 + 0;
    sp = sp + 544;
    return;
L_08A6FD68:;
    a0 = sp + 0;
    a1 = s3 + 0;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6FD74;
L_08A6FD74:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s1+556, s4); goto L_08A6FC74; }
    goto L_08A6FD7C;
L_08A6FD7C:;
    a0 = s5 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6FD88;
L_08A6FD88:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A6FD40; }
    goto L_08A6FD90;
L_08A6FD90:;
    ST32(s1+556, s4);
    goto L_08A6FC74;
L_08A6FD98:;
    ST8(a0, a3);
    goto L_08A6FC0C;
L_08A6FDA0:;
    a1 = a1 + 29288;
    goto L_08A6FDA4;
L_08A6FDA4:;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6FDAC;
L_08A6FDAC:;
    v1 = 2;
    goto L_08A6FD40;
L_08A6FDB4:;
    a1 = a1 + 29264;
    goto L_08A6FDA4;
L_08A6FDBC:;
    a1 = a1 + 29072;
    goto L_08A6FDA4;
}

/* 08A6FDC4 */
u32 func_08A6FDC4(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6FDC4:;
    ST32(a0, 0);
    sp = sp - 32;
    s2 = a0 + 0;
    a0 = 1188;
    s1 = a1 + 0;
    s0 = a2 + 0;
    { u64 r_ = func_08A6AF74(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6FDF0;
L_08A6FDF0:;
    v1 = 1;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08A6FE18; }
    goto L_08A6FDFC;
L_08A6FDFC:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_08A6FE18:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    a2 = 1188;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6FE28;
L_08A6FE28:;
    v1 = LD32(sp);
    a0 = sp + 0;
    ST8(v1, 0);
    v1 = 1;
    v0 = LD32(sp);
    ST32(v0+1156, s0);
    ST32(v0+256, v1);
    ST32(v0+1152, s1);
    ST32(v0+1072, 0);
    ST32(v0+260, 0);
    ST32(v0+264, 0);
    ST32(v0+268, 0);
    v0 = func_08A76488(a0, 0, 0);
    goto L_08A6FE5C;
L_08A6FE5C:;
    cnd_ = v0 == 0;
    v0 = LD32(sp);
    if (cnd_) { goto L_08A6FEC8; }
    goto L_08A6FE64;
L_08A6FE64:;
    v1 = 8;
    ST32(v0+1080, 0);
    goto L_08A6FE6C;
L_08A6FE6C:;
    v1 = v1 - 1;
    ST32(v0+420, 0);
    ST32(v0+424, 0);
    cnd_ = (s32)v1 >= 0;
    v0 = v0 + 8;
    if (cnd_) { goto L_08A6FE6C; }
    goto L_08A6FE80;
L_08A6FE80:;
    a0 = sp + 0;
    { rv_t r_ = func_08A6FF3C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6FE88;
L_08A6FE88:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A6FEA0; }
    goto L_08A6FE90;
L_08A6FE90:;
    a0 = sp + 0;
    func_08A6FEDC(a0, 0, 0, 0);
    goto L_08A6FE98;
L_08A6FE98:;
    v1 = s0 + 0;
    goto L_08A6FDFC;
L_08A6FEA0:;
    func_08A6B610();
    goto L_08A6FEA8;
L_08A6FEA8:;
    v0 = func_08A6B620(0, 0, 0, 0, 0, 0, 0);
    goto L_08A6FEB0;
L_08A6FEB0:;
    a0 = v0 + 0;
    func_08A88DE4(a0);
    goto L_08A6FEB8;
L_08A6FEB8:;
    v0 = LD32(sp);
    v1 = 0 + 0;
    ST32(s2, v0);
    goto L_08A6FDFC;
L_08A6FEC8:;
    a0 = LD32(sp);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6FED0;
L_08A6FED0:;
    v1 = 1;
    ST32(sp, 0);
    goto L_08A6FDFC;
}

/* 08A6FEDC */
void func_08A6FEDC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6FEDC:;
    sp = sp - 16;
    a1 = 1;
    s1 = a0 + 0;
    s0 = LD32(a0);
    f0 = func_08A730FC(a0, a1, t1, t2, t3);
    goto L_08A6FEFC;
L_08A6FEFC:;
    a0 = LD32(s0+1088);
    func_08A8418C(a0, 0, 0, 0);
    goto L_08A6FF04;
L_08A6FF04:;
    a0 = s0 + 0;
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6FF0C;
L_08A6FF0C:;
    ST32(s1, 0);
    sp = sp + 16;
    return;
}

/* 08A6FF24 */
rv_t func_08A6FF24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A6FF24:;
    v0 = 1;
    ST32(a1+24, 0);
    ST32(a1+8, 0);
    ST32(a1+16, 0);
    ST32(a1+20, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 08A6FF3C */
rv_t func_08A6FF3C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6FF3C:;
    sp = sp - 16;
    s2 = a0 + 0;
    s0 = (u32)-1;
    s1 = LD32(a0);
    a0 = LD32(s1+500);
    ST8(s1+272, 0);
    ST8(s1+303, 0);
    ST8(s1+324, 0);
    ST32(s1+492, s0);
    ST32(s1+496, 0);
    ST32(s1+508, 0);
    ST32(s1+512, 0);
    ST32(s1+504, 0);
    { u64 r_ = func_08A6AFBC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6FF84;
L_08A6FF84:;
    a0 = LD32(s1+516);
    ST32(s1+500, 0);
    ST32(s1+520, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6FF94;
L_08A6FF94:;
    a0 = LD32(s1+524);
    ST32(s1+516, 0);
    ST32(s1+532, 0);
    ST32(s1+536, 0);
    ST32(s1+528, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6FFAC;
L_08A6FFAC:;
    a0 = LD32(s1+1112);
    ST32(s1+524, 0);
    ST32(s1+1120, 0);
    ST32(s1+1124, 0);
    ST32(s1+1116, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6FFC4;
L_08A6FFC4:;
    ST32(s1+1112, 0);
    ST32(s1+1136, 0);
    ST32(s1+1140, 0);
    ST32(s1+1132, 0);
    a0 = LD32(s1+1128);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6FFDC;
L_08A6FFDC:;
    v1 = LD32(s1+1084);
    v0 = 2;
    ST32(s1+540, s0);
    ST32(s1+548, v0);
    cnd_ = v1 != 0;
    ST32(s1+1128, 0);
    if (cnd_) { goto L_08A70054; }
    goto L_08A6FFF4;
L_08A6FFF4:;
    ST32(s1+1084, 0);
    goto L_08A6FFF8;
L_08A6FFF8:;
    a1 = RS_FADDR(func_08A6FF24, 0x08A6FF24u) - (-220);
    a0 = s2 + 0;
    ST32(s1+1096, 0);
    a1 = a1 - 220;
    a2 = 0 + 0;
    { rv_t r_ = func_08A76990(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A70010;
L_08A70010:;
    v1 = (u32)-1;
    ST32(s1+556, v1);
    v0 = 0 + 0;
    ST8(s1+816, 0);
    ST32(s1+412, 0);
    ST32(s1+416, 0);
    ST32(s1+408, 0);
    ST32(s1+552, 0);
    ST32(s1+1076, 0);
    ST32(s1+1100, 0);
    ST8(s1+560, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A70054:;
    a1 = LD32(s1+1084);
    goto L_08A70058;
L_08A70058:;
    a0 = s2 + 0;
    func_08A75078(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A70060;
L_08A70060:;
    v0 = LD32(s1+1084);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1+1084); goto L_08A70058; }
    goto L_08A7006C;
L_08A7006C:;
    ST32(s1+1084, 0);
    goto L_08A6FFF8;
}

/* 08A70074 */
u32 func_08A70074(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A70074:;
    sp = sp - 64;
    v0 = D_08AE7340 - (29504);
    fp = v0 + 29504;
    s2 = a0 + 0;
    s0 = LD32(a0);
    ST32(sp, 0);
    s7 = s0 + 524;
    a1 = s7 + 0;
    goto L_08A700BC;
L_08A700BC:;
    a0 = s2 + 0;
    func_08A73E3C(a0, a1);
    goto L_08A700C4;
L_08A700C4:;
    a1 = LD32(s0+492);
    a0 = s2 + 0;
    a2 = s7 + 0;
    a3 = sp + 0;
    t0 = 1;
    t1 = fp + 0;
    v0 = func_08A717A8(a0, a1, a2, a3, t0, t1, 0);
    goto L_08A700E0;
L_08A700E0:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A701F4; }
    goto L_08A700E8;
L_08A700E8:;
    a1 = LD32(s0+492);
    a0 = s2 + 0;
    a2 = s0 + 500;
    a3 = sp + 4;
    t0 = sp + 0;
    t1 = fp + 0;
    v0 = func_08A71610(a0, a1, a2, a3, t0, t1, 0, 0);
    goto L_08A70104;
L_08A70104:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A702F8; }
    goto L_08A7010C;
L_08A7010C:;
    s3 = D_08AE7344 - (29508);
    s4 = D_08AE734C - (29516);
    s5 = D_08AE7354 - (29524);
    s6 = D_08AE735C - (29532);
    goto L_08A7011C;
L_08A7011C:;
    a0 = LD32(s0+500);
    goto L_08A70120;
L_08A70120:;
    a1 = s3 + 29508;
    { u64 r_ = func_08A89EE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70128;
L_08A70128:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A70290; }
    goto L_08A70130;
L_08A70130:;
    ST8(s1, 0);
    a1 = LD32(s0+500);
    v1 = LD32(s0+520);
    a2 = s1 - a1;
    v0 = (s32)v1 < (s32)a2;
    cnd_ = v0 == 0;
    ST32(sp+4, a2);
    if (cnd_) { goto L_08A7017C; }
    goto L_08A7014C;
L_08A7014C:;
    a1 = 16384;
    a1 = (s32)a2 > (s32)a1 ? a2 : a1;
    a1 = v1 + a1;
    ST32(s0+520, a1);
    a1 = a1 + 1;
    a0 = LD32(s0+516);
    v0 = func_08A6AF98(a0, a1, 0, 0, 0);
    goto L_08A70168;
L_08A70168:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = D_08AE7364 - (29540); goto L_08A7027C; }
    goto L_08A70170;
L_08A70170:;
    ST32(s0+516, v0);
    a1 = LD32(s0+500);
    a2 = LD32(sp+4);
    goto L_08A7017C;
L_08A7017C:;
    a0 = LD32(s0+516);
    a2 = a2 + 1;
    func_08A87AE0(a0, a1, a2);
    goto L_08A70188;
L_08A70188:;
    a0 = LD32(s0+500);
    a2 = LD32(s0+508);
    a1 = s1 + 7;
    v0 = a1 - a0;
    a2 = a2 - v0;
    ST32(s0+508, a2);
    a2 = a2 + 1;
    { u64 r_ = func_08A87C00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A701A8;
L_08A701A8:;
    a0 = LD32(s0+516);
    a1 = s4 + 29516;
    { u64 r_ = func_08A89EE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A701B4;
L_08A701B4:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s0+516); goto L_08A70228; }
    goto L_08A701BC;
L_08A701BC:;
    a0 = v0 + 4;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A701C4;
L_08A701C4:;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a1 = sp + 8;
    v0 = func_08A750D8(a0, a1, a2);
    goto L_08A701D4;
L_08A701D4:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+500); goto L_08A70120; }
    goto L_08A701DC;
L_08A701DC:;
    a2 = LD32(s0+516);
    a1 = LD32(sp+8);
    a0 = s2 + 0;
    v0 = func_08A75164(a0, a1, a2);
    goto L_08A701EC;
L_08A701EC:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A7011C; }
    goto L_08A701F4;
L_08A701F4:;
    goto L_08A701F8;
L_08A701F8:;
    v0 = v1 + 0;
    sp = sp + 64;
    return v0;
L_08A70228:;
    a0 = s2 + 0;
    a2 = 1;
    v0 = func_08A78950(a0, a1, a2);
    goto L_08A70234;
L_08A70234:;
    cnd_ = v0 != 0;
    v1 = 4;
    if (cnd_) { goto L_08A701F4; }
    goto L_08A7023C;
L_08A7023C:;
    a0 = LD32(s0+516);
    a1 = s5 + 29524;
    a2 = 4;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7024C;
L_08A7024C:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+516); goto L_08A70268; }
    goto L_08A70254;
L_08A70254:;
    a1 = LD32(s0+516);
    a0 = s2 + 0;
    v0 = func_08A705F0(a0, a1);
    goto L_08A70260;
L_08A70260:;
    goto L_08A701EC;
L_08A70268:;
    a1 = s6 + 29532;
    a2 = 10;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70274;
L_08A70274:;
    a0 = LD32(s0+500);
    goto L_08A70120;
L_08A7027C:;
    a0 = s2 + 0;
    a1 = a1 + 29540;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70288;
L_08A70288:;
    v1 = 1;
    goto L_08A701F4;
L_08A70290:;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    v0 = 5;
    if (cnd_) { goto L_08A702A8; }
    goto L_08A7029C;
L_08A7029C:;
    v1 = LD32(s0+496);
    cnd_ = v1 != v0;
    v0 = 4;
    if (cnd_) { goto L_08A702C8; }
    goto L_08A702A8;
L_08A702A8:;
    a0 = s2 + 0;
    v0 = func_08A75120(a0);
    goto L_08A702B0;
L_08A702B0:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A701F4; }
    goto L_08A702B8;
L_08A702B8:;
    a0 = 10;
    func_08A6B694(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08A702C0;
L_08A702C0:;
    a1 = s7 + 0;
    goto L_08A700BC;
L_08A702C8:;
    ST32(s0+496, v0);
    a2 = D_08AE7374 - (29556);
    a2 = a2 + 29556;
    a1 = 7;
    a0 = s2 + 0;
    func_08A78CEC(a0, a1, a2);
    goto L_08A702E0;
L_08A702E0:;
    a0 = s2 + 0;
    a1 = 3;
    a2 = 1;
    func_08A71AA0(a0, a1, a2, 0, 0, 0);
    goto L_08A702F0;
L_08A702F0:;
    v1 = 0 + 0;
    goto L_08A701F4;
L_08A702F8:;
    v1 = v0 + 0;
    v0 = 3;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_08A701F8; }
    goto L_08A70308;
L_08A70308:;
    a2 = D_08AE739C - (29596);
    a2 = a2 + 29596;
    a1 = 5;
    a0 = s2 + 0;
    func_08A78CEC(a0, a1, a2);
    goto L_08A7031C;
L_08A7031C:;
    a0 = s2 + 0;
    a1 = 3;
    a2 = 1;
    func_08A71AA0(a0, a1, a2, 0, 0, 0);
    goto L_08A7032C;
L_08A7032C:;
    v1 = 3;
    goto L_08A701F4;
}

/* 08A70334 */
rv_t func_08A70334(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A70334:;
    sp = sp - 48;
    s5 = a1 + 0;
    v0 = 1;
    s3 = 0 + 0;
    s2 = LD32(a0);
    a1 = LD32(s2+496);
    cnd_ = a1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A70480; }
    goto L_08A70370;
L_08A70370:;
    v1 = a1 ^ 0x5;
    v0 = a1 - 2;
    v0 = v0 < 0x2u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A70468; }
    goto L_08A7038C;
L_08A7038C:;
    cnd_ = s3 == 0;
    if (cnd_) { goto L_08A7044C; }
    goto L_08A70394;
L_08A70394:;
    v1 = LD32(s2+1084);
    goto L_08A70398;
L_08A70398:;
    cnd_ = v1 == 0;
    ST32(sp, v1);
    if (cnd_) { goto L_08A703C4; }
    goto L_08A703A0;
L_08A703A0:;
    v0 = LD32(v1+28);
    a1 = v1 + 0;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A70428; }
    goto L_08A703B0;
L_08A703B0:;
    v1 = LD32(v1+32);
    ST32(sp, v1);
    v0 = LD32(sp);
    goto L_08A703BC;
L_08A703BC:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A703A0; }
    goto L_08A703C4;
L_08A703C4:;
    a1 = s5 + 0;
    a0 = s0 + 0;
    v0 = func_08A71E20(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A703D0;
L_08A703D0:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A703E8; }
    goto L_08A703D8;
L_08A703D8:;
    v0 = LD32(s2+1076);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_08A70410; }
    goto L_08A703E4;
L_08A703E4:;
    v1 = s3 + 0;
    goto L_08A703E8;
L_08A703E8:;
    v0 = v1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A70410:;
    a1 = 0 + 0;
    f0 = func_08A730FC(a0, a1, 0, 0, 0);
    goto L_08A70418;
L_08A70418:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A6FF3C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A70420;
L_08A70420:;
    v1 = s3 + 0;
    goto L_08A703E8;
L_08A70428:;
    func_08A74CF8(a0, a1, t1, t2, t3);
    goto L_08A70430;
L_08A70430:;
    a1 = LD32(sp);
    a0 = s0 + 0;
    v1 = LD32(a1+32);
    ST32(sp, v1);
    func_08A75078(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A70444;
L_08A70444:;
    v0 = LD32(sp);
    goto L_08A703BC;
L_08A7044C:;
    a0 = s0 + 0;
    v0 = func_08A70074(a0);
    goto L_08A70454;
L_08A70454:;
    cnd_ = v0 != 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A70394; }
    goto L_08A7045C;
L_08A7045C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A75CD4(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70464;
L_08A70464:;
    s3 = v0 + 0;
    goto L_08A70468;
L_08A70468:;
    cnd_ = s3 != 0;
    if (cnd_) { v1 = LD32(s2+1084); goto L_08A70398; }
    goto L_08A70470;
L_08A70470:;
    a0 = s0 + 0;
    v0 = func_08A7853C(a0, t1, t2, t3);
    goto L_08A70478;
L_08A70478:;
    s3 = v0 + 0;
    goto L_08A70394;
L_08A70480:;
    s1 = 0 < s5;
    s4 = 1;
    goto L_08A70488;
L_08A70488:;
    a0 = s0 + 0;
    v0 = func_08A72F90(a0, t1, t2, t3);
    goto L_08A70490;
L_08A70490:;
    s3 = v0 + 0;
    v0 = v0 < 0x1u;
    v0 = v0 & s1;
    cnd_ = v0 == 0;
    a0 = 10;
    if (cnd_) { goto L_08A704C0; }
    goto L_08A704A4;
L_08A704A4:;
    a1 = LD32(s2+496);
    cnd_ = a1 != s4;
    if (cnd_) { goto L_08A704C0; }
    goto L_08A704B0;
L_08A704B0:;
    func_08A6B694(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08A704B8;
L_08A704B8:;
    goto L_08A70488;
L_08A704C0:;
    cnd_ = s3 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_08A704D0; }
    goto L_08A704C8;
L_08A704C8:;
    a1 = LD32(s2+496);
    goto L_08A70370;
L_08A704D0:;
    a1 = sp + 0;
    a2 = 1;
    v0 = func_08A750D8(a0, a1, a2);
    goto L_08A704DC;
L_08A704DC:;
    cnd_ = v0 == 0;
    a1 = LD32(s2+496);
    if (cnd_) { goto L_08A70370; }
    goto L_08A704E4;
L_08A704E4:;
    v0 = LD32(sp);
    v1 = 4;
    ST32(v0+28, v1);
    goto L_08A70370;
}

/* 08A704F4 */
rv_t func_08A704F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A704F4:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    func_08A74C50(a0, t1, t2, t3);
    goto L_08A70514;
L_08A70514:;
    a0 = LD32(s0+24);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7051C;
L_08A7051C:;
    ST32(s0+24, 0);
    a0 = s0 + 0;
    v0 = func_08A769D8(a0);
    goto L_08A70528;
L_08A70528:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08A70550; }
    goto L_08A70538;
L_08A70538:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A70550:;
    { rv_t r_ = func_08A76870(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A70558;
L_08A70558:;
    v1 = 0 + 0;
    goto L_08A70538;
}

/* 08A70560 */
u32 func_08A70560(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A70560:;
    sp = sp - 16;
    v0 = 256;
    s0 = a0 + 0;
    cnd_ = a1 == v0;
    v1 = LD32(a0);
    if (cnd_) { goto L_08A705C8; }
    goto L_08A70580;
L_08A70580:;
    v0 = 257;
    cnd_ = a1 == v0;
    v0 = 258;
    if (cnd_) { goto L_08A705C0; }
    goto L_08A7058C;
L_08A7058C:;
    cnd_ = a1 != v0;
    a1 = D_08AE73C8 - (29640);
    if (cnd_) { goto L_08A705B0; }
    goto L_08A70594;
L_08A70594:;
    ST32(v1+260, 0);
    goto L_08A70598;
L_08A70598:;
    v0 = 0 + 0;
    goto L_08A7059C;
L_08A7059C:;
    sp = sp + 16;
    return v0;
L_08A705B0:;
    a1 = a1 + 29640;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A705B8;
L_08A705B8:;
    v0 = 2;
    goto L_08A7059C;
L_08A705C0:;
    ST32(v1+264, 0);
    goto L_08A70598;
L_08A705C8:;
    ST32(v1+256, 0);
    s1 = RS_FADDR(func_08A704F4, 0x08A704F4u) - (1268);
    a0 = s0 + 0;
    goto L_08A705D4;
L_08A705D4:;
    a1 = s1 + 1268;
    a2 = 0 + 0;
    { rv_t r_ = func_08A76990(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A705E0;
L_08A705E0:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s0 + 0; goto L_08A705D4; }
    goto L_08A705E8;
L_08A705E8:;
    v0 = 0 + 0;
    goto L_08A7059C;
}

/* 08A705F0 */
u32 func_08A705F0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[4416] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 4416);
L_08A705F0:;
    sp = sp - 4416;
    a2 = sp + 0;
    s4 = a0 + 0;
    s1 = a1 + 0;
    a1 = D_08AE7410 - (29712);
    a1 = a1 + 29712;
    a0 = s1 + 0;
    a3 = 4096;
    s2 = LD32(s4);
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70638;
L_08A70638:;
    cnd_ = v0 == 0;
    a2 = D_08AE7418 - (29720);
    if (cnd_) { goto L_08A707C0; }
    goto L_08A70640;
L_08A70640:;
    a0 = sp + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A70648;
L_08A70648:;
    a1 = D_08AE7448 - (29768);
    a1 = a1 + 29768;
    a0 = s1 + 0;
    a2 = sp + 0;
    a3 = 4096;
    s0 = v0 + 0;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70664;
L_08A70664:;
    cnd_ = v0 == 0;
    a2 = D_08AE7418 - (29720);
    if (cnd_) { goto L_08A707C0; }
    goto L_08A7066C;
L_08A7066C:;
    a0 = sp + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A70674;
L_08A70674:;
    a1 = D_08AE744C - (29772);
    a1 = a1 + 29772;
    a0 = s1 + 0;
    a2 = sp + 0;
    a3 = 4096;
    s6 = v0 + 0;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70690;
L_08A70690:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A70CDC; }
    goto L_08A70698;
L_08A70698:;
    a0 = 0 + 0;
    { u64 r_ = func_08A85A94(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A706A0;
L_08A706A0:;
    s5 = v0 + 0;
    goto L_08A706A4;
L_08A706A4:;
    v0 = 5;
    cnd_ = s0 == v0;
    v0 = (s32)s0 < 6;
    if (cnd_) { goto L_08A70C58; }
    goto L_08A706B0;
L_08A706B0:;
    cnd_ = v0 == 0;
    v0 = 100;
    if (cnd_) { goto L_08A70900; }
    goto L_08A706B8;
L_08A706B8:;
    v0 = 2;
    cnd_ = s0 == v0;
    v0 = (s32)s0 < 3;
    if (cnd_) { goto L_08A70830; }
    goto L_08A706C4;
L_08A706C4:;
    cnd_ = v0 == 0;
    v0 = 4;
    if (cnd_) { goto L_08A707E8; }
    goto L_08A706CC;
L_08A706CC:;
    v0 = 1;
    cnd_ = s0 == v0;
    if (cnd_) { v1 = LD32(s2+444); goto L_08A70708; }
    goto L_08A706D8;
L_08A706D8:;
    v1 = 0 + 0;
    goto L_08A706DC;
L_08A706DC:;
    v0 = v1 + 0;
    sp = sp + 4416;
    return v0;
L_08A70708:;
    ST32(sp+4096, v1);
    v0 = LD32(s2+448);
    cnd_ = v1 == 0;
    ST32(sp+4100, v0);
    if (cnd_) { goto L_08A706D8; }
    goto L_08A70718;
L_08A70718:;
    a0 = 12;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70720;
L_08A70720:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A707A4; }
    goto L_08A70728;
L_08A70728:;
    a1 = D_08AE7454 - (29780);
    a0 = s1 + 0;
    a1 = a1 + 29780;
    a2 = sp + 0;
    a3 = 4096;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70740;
L_08A70740:;
    cnd_ = v0 == 0;
    a2 = D_08AE7418 - (29720);
    if (cnd_) { goto L_08A707C0; }
    goto L_08A70748;
L_08A70748:;
    a0 = sp + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70750;
L_08A70750:;
    v0 = v0 + 1;
    a0 = v0 + 0;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7075C;
L_08A7075C:;
    cnd_ = v0 == 0;
    ST32(s0+8, v0);
    if (cnd_) { goto L_08A707A4; }
    goto L_08A70764;
L_08A70764:;
    a0 = v0 + 0;
    a1 = sp + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70770;
L_08A70770:;
    a0 = s4 + 0;
    a1 = sp + 4096;
    a2 = s0 + 0;
    a3 = 0 + 0;
    t0 = 2;
    goto L_08A70784;
L_08A70784:;
    ST32(s0, s6);
    ST32(s0+4, s5);
    goto L_08A7078C;
L_08A7078C:;
    v0 = func_08A71B54(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_08A70794;
L_08A70794:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A706DC; }
    goto L_08A7079C;
L_08A7079C:;
    v1 = 0 + 0;
    goto L_08A706DC;
L_08A707A4:;
    a1 = D_08AE745C - (29788);
    a0 = s4 + 0;
    a1 = a1 + 29788;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A707B4;
L_08A707B4:;
    v1 = 1;
    goto L_08A706DC;
L_08A707BC:;
    a2 = D_08AE7418 - (29720);
    goto L_08A707C0;
L_08A707C0:;
    a2 = a2 + 29720;
    a1 = 1;
    a0 = s4 + 0;
    func_08A78CEC(a0, a1, a2);
    goto L_08A707D0;
L_08A707D0:;
    a0 = s4 + 0;
    a1 = 3;
    a2 = 1;
    func_08A71AA0(a0, a1, a2, 0, 0, 0);
    goto L_08A707E0;
L_08A707E0:;
    v1 = 3;
    goto L_08A706DC;
L_08A707E8:;
    cnd_ = s0 != v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A706DC; }
    goto L_08A707F0;
L_08A707F0:;
    v1 = LD32(s2+476);
    ST32(sp+4096, v1);
    v0 = LD32(s2+480);
    cnd_ = v1 == 0;
    ST32(sp+4100, v0);
    if (cnd_) { goto L_08A706D8; }
    goto L_08A70804;
L_08A70804:;
    a0 = 8;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7080C;
L_08A7080C:;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A707A4; }
    goto L_08A70814;
L_08A70814:;
    a0 = s4 + 0;
    a1 = sp + 4096;
    a3 = 0 + 0;
    t0 = 10;
    goto L_08A70824;
L_08A70824:;
    ST32(v0, s6);
    ST32(v0+4, s5);
    goto L_08A7078C;
L_08A70830:;
    a0 = s4 + 0;
    a1 = s6 + 0;
    v0 = func_08A76610(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A7083C;
L_08A7083C:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A707A4; }
    goto L_08A70844;
L_08A70844:;
    a1 = D_08AE7454 - (29780);
    a0 = s1 + 0;
    a1 = a1 + 29780;
    a2 = sp + 0;
    a3 = 4096;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7085C;
L_08A7085C:;
    cnd_ = v0 == 0;
    a1 = D_08AE746C - (29804);
    if (cnd_) { goto L_08A707BC; }
    goto L_08A70864;
L_08A70864:;
    a1 = a1 + 29804;
    a0 = sp + 0;
    { u64 r_ = func_08A89EE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70870;
L_08A70870:;
    cnd_ = v0 == 0;
    s0 = v0 + 8;
    if (cnd_) { goto L_08A707BC; }
    goto L_08A70878;
L_08A70878:;
    ST8(v0, 0);
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70884;
L_08A70884:;
    v1 = 32;
    cnd_ = v0 != v1;
    a2 = D_08AE7418 - (29720);
    if (cnd_) { goto L_08A707C0; }
    goto L_08A70890;
L_08A70890:;
    a0 = LD32(s3+16);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70898;
L_08A70898:;
    ST32(s3+16, 0);
    a0 = s0 + 0;
    { u64 r_ = func_08A6B560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A708A4;
L_08A708A4:;
    a0 = LD32(s2+428);
    v1 = LD32(s3+20);
    ST32(s3+16, v0);
    v1 = v1 + 1;
    ST32(sp+4096, a0);
    v0 = LD32(s2+432);
    ST32(s3+20, v1);
    cnd_ = a0 == 0;
    ST32(sp+4100, v0);
    if (cnd_) { goto L_08A706D8; }
    goto L_08A708C8;
L_08A708C8:;
    a0 = 1036;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A708D0;
L_08A708D0:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A707A4; }
    goto L_08A708D8;
L_08A708D8:;
    a0 = v0 + 8;
    a1 = sp + 0;
    a2 = 1025;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A708E8;
L_08A708E8:;
    a0 = s4 + 0;
    a1 = sp + 4096;
    a2 = s0 + 0;
    a3 = 0 + 0;
    t0 = 6;
    goto L_08A70784;
L_08A70900:;
    cnd_ = s0 == v0;
    v0 = (s32)s0 < 101;
    if (cnd_) { goto L_08A70A6C; }
    goto L_08A70908;
L_08A70908:;
    cnd_ = v0 == 0;
    v0 = 101;
    if (cnd_) { goto L_08A70954; }
    goto L_08A70910;
L_08A70910:;
    v0 = 6;
    cnd_ = s0 != v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A706DC; }
    goto L_08A7091C;
L_08A7091C:;
    v1 = LD32(s2+484);
    ST32(sp+4096, v1);
    v0 = LD32(s2+488);
    cnd_ = v1 == 0;
    ST32(sp+4100, v0);
    if (cnd_) { goto L_08A706D8; }
    goto L_08A70930;
L_08A70930:;
    a0 = 8;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70938;
L_08A70938:;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A707A4; }
    goto L_08A70940;
L_08A70940:;
    a0 = s4 + 0;
    a1 = sp + 4096;
    a3 = 0 + 0;
    t0 = 12;
    goto L_08A70824;
L_08A70954:;
    cnd_ = s0 == v0;
    v0 = 102;
    if (cnd_) { goto L_08A709A4; }
    goto L_08A7095C;
L_08A7095C:;
    cnd_ = s0 != v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A706DC; }
    goto L_08A70964;
L_08A70964:;
    a1 = D_08AE7454 - (29780);
    a0 = s1 + 0;
    a1 = a1 + 29780;
    a2 = sp + 0;
    a3 = 4096;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7097C;
L_08A7097C:;
    cnd_ = v0 == 0;
    a3 = D_08AE7478 - (29816);
    if (cnd_) { goto L_08A707BC; }
    goto L_08A70984;
L_08A70984:;
    a0 = s4 + 0;
    a1 = s6 + 0;
    a3 = a3 + 29816;
    a2 = 103;
    t0 = 0 + 0;
    func_08A70DF4(a0, a1, a2, a3, t0);
    goto L_08A7099C;
L_08A7099C:;
    v1 = 0 + 0;
    goto L_08A706DC;
L_08A709A4:;
    a1 = D_08AE7454 - (29780);
    a0 = s1 + 0;
    a1 = a1 + 29780;
    a2 = sp + 0;
    a3 = 4096;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A709BC;
L_08A709BC:;
    cnd_ = v0 == 0;
    a1 = D_08AE747C - (29820);
    if (cnd_) { goto L_08A707BC; }
    goto L_08A709C4;
L_08A709C4:;
    a1 = a1 + 29820;
    a0 = sp + 0;
    { u64 r_ = func_08A89EE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A709D0;
L_08A709D0:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A707BC; }
    goto L_08A709D8;
L_08A709D8:;
    v0 = (u32)(s32)LD_S8(v0+3);
    cnd_ = v0 == 0;
    s0 = s0 + 3;
    if (cnd_) { goto L_08A707BC; }
    goto L_08A709E4;
L_08A709E4:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A709EC;
L_08A709EC:;
    a1 = D_08AE7480 - (29824);
    a1 = a1 + 29824;
    a0 = sp + 0;
    s1 = v0 + 0;
    { u64 r_ = func_08A89EE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70A00;
L_08A70A00:;
    cnd_ = v0 == 0;
    a1 = v0 + 3;
    if (cnd_) { goto L_08A70A64; }
    goto L_08A70A08;
L_08A70A08:;
    a0 = sp + 4128;
    a2 = 256;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70A14;
L_08A70A14:;
    v1 = LD32(s2+460);
    ST32(sp+4096, v1);
    v0 = LD32(s2+464);
    cnd_ = v1 == 0;
    ST32(sp+4100, v0);
    if (cnd_) { goto L_08A706D8; }
    goto L_08A70A28;
L_08A70A28:;
    a0 = 264;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70A30;
L_08A70A30:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A707A4; }
    goto L_08A70A38;
L_08A70A38:;
    ST32(v0, s6);
    a0 = v0 + 8;
    a1 = sp + 4128;
    ST32(v0+4, s1);
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70A4C;
L_08A70A4C:;
    a0 = s4 + 0;
    a1 = sp + 4096;
    a2 = s0 + 0;
    a3 = 0 + 0;
    t0 = 0 + 0;
    goto L_08A7078C;
L_08A70A64:;
    ST8(sp+4128, 0);
    goto L_08A70A14;
L_08A70A6C:;
    a0 = s4 + 0;
    a1 = s6 + 0;
    v0 = func_08A76610(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A70A78;
L_08A70A78:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A707A4; }
    goto L_08A70A80;
L_08A70A80:;
    s0 = LD32(v0+8);
    cnd_ = s0 != 0;
    a1 = D_08AE7454 - (29780);
    if (cnd_) { goto L_08A70AD0; }
    goto L_08A70A8C;
L_08A70A8C:;
    a0 = 24;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70A94;
L_08A70A94:;
    cnd_ = v0 == 0;
    ST32(s3+8, v0);
    if (cnd_) { goto L_08A707A4; }
    goto L_08A70A9C;
L_08A70A9C:;
    ST32(v0+20, 0);
    ST32(v0, 0);
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v0+16, 0);
    v0 = LD32(s2+1096);
    s0 = LD32(s3+8);
    v1 = v0 + 0;
    v0 = v0 + 1;
    ST32(s2+1096, v0);
    ST32(s0, v1);
    a1 = D_08AE7454 - (29780);
    goto L_08A70AD0;
L_08A70AD0:;
    a0 = s1 + 0;
    a1 = a1 + 29780;
    a2 = sp + 0;
    a3 = 4096;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70AE4;
L_08A70AE4:;
    cnd_ = v0 == 0;
    s3 = sp + 4112;
    if (cnd_) { goto L_08A707BC; }
    goto L_08A70AEC;
L_08A70AEC:;
    a1 = D_08AE7484 - (29828);
    a1 = a1 + 29828;
    a0 = sp + 0;
    a2 = s3 + 0;
    a3 = 16;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70B04;
L_08A70B04:;
    cnd_ = v0 == 0;
    a2 = D_08AE7418 - (29720);
    if (cnd_) { goto L_08A707C0; }
    goto L_08A70B0C;
L_08A70B0C:;
    a0 = s3 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A70B14;
L_08A70B14:;
    ST32(s0+4, v0);
    s1 = sp + 4128;
    a0 = LD32(s0+8);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70B24;
L_08A70B24:;
    ST32(s0+8, 0);
    a1 = D_08AE7488 - (29832);
    a1 = a1 + 29832;
    a0 = sp + 0;
    a2 = s1 + 0;
    a3 = 256;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70B40;
L_08A70B40:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(sp+4128, 0); goto L_08A70B48; }
    goto L_08A70B48;
L_08A70B48:;
    a0 = s1 + 0;
    { u64 r_ = func_08A6B560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70B50;
L_08A70B50:;
    cnd_ = v0 == 0;
    ST32(s0+8, v0);
    if (cnd_) { goto L_08A707A4; }
    goto L_08A70B58;
L_08A70B58:;
    a0 = LD32(s0+12);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70B60;
L_08A70B60:;
    ST32(s0+12, 0);
    a1 = D_08AE7490 - (29840);
    a1 = a1 + 29840;
    a0 = sp + 0;
    a2 = s1 + 0;
    a3 = 256;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70B7C;
L_08A70B7C:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(sp+4128, 0); goto L_08A70B84; }
    goto L_08A70B84;
L_08A70B84:;
    a0 = s1 + 0;
    { u64 r_ = func_08A6B560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70B8C;
L_08A70B8C:;
    cnd_ = v0 == 0;
    ST32(s0+12, v0);
    if (cnd_) { goto L_08A707A4; }
    goto L_08A70B94;
L_08A70B94:;
    a1 = D_08AE7498 - (29848);
    a1 = a1 + 29848;
    a0 = sp + 0;
    a2 = s3 + 0;
    a3 = 16;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70BAC;
L_08A70BAC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A70C44; }
    goto L_08A70BB4;
L_08A70BB4:;
    ST32(s0+16, 0);
    goto L_08A70BB8;
L_08A70BB8:;
    a1 = D_08AE747C - (29820);
    a1 = a1 + 29820;
    a0 = sp + 0;
    a2 = s3 + 0;
    a3 = 16;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70BD0;
L_08A70BD0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A70C28; }
    goto L_08A70BD8;
L_08A70BD8:;
    ST32(s0+20, 0);
    goto L_08A70BDC;
L_08A70BDC:;
    v1 = LD32(s2+436);
    ST32(sp+4096, v1);
    v0 = LD32(s2+440);
    cnd_ = v1 == 0;
    ST32(sp+4100, v0);
    if (cnd_) { goto L_08A706D8; }
    goto L_08A70BF0;
L_08A70BF0:;
    a0 = 12;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70BF8;
L_08A70BF8:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A707A4; }
    goto L_08A70C00;
L_08A70C00:;
    ST32(v0, s6);
    a0 = s4 + 0;
    a1 = sp + 4096;
    v0 = LD32(s0);
    a2 = v1 + 0;
    a3 = 0 + 0;
    t0 = 5;
    ST32(v1+4, s5);
    ST32(v1+8, v0);
    goto L_08A7078C;
L_08A70C28:;
    a0 = s3 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A70C30;
L_08A70C30:;
    v0 = v0 & 0xffff;
    v0 = WSBH(v0);
    v0 = v0 & 0xffff;
    ST32(s0+20, v0);
    goto L_08A70BDC;
L_08A70C44:;
    a0 = s3 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A70C4C;
L_08A70C4C:;
    v0 = WSBW(v0);
    ST32(s0+16, v0);
    goto L_08A70BB8;
L_08A70C58:;
    v1 = LD32(s2+444);
    ST32(sp+4096, v1);
    v0 = LD32(s2+448);
    cnd_ = v1 == 0;
    ST32(sp+4100, v0);
    if (cnd_) { goto L_08A706D8; }
    goto L_08A70C6C;
L_08A70C6C:;
    a0 = 12;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70C74;
L_08A70C74:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A707A4; }
    goto L_08A70C7C;
L_08A70C7C:;
    a1 = D_08AE7454 - (29780);
    a0 = s1 + 0;
    a1 = a1 + 29780;
    a2 = sp + 0;
    a3 = 4096;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70C94;
L_08A70C94:;
    cnd_ = v0 == 0;
    a2 = D_08AE7418 - (29720);
    if (cnd_) { goto L_08A707C0; }
    goto L_08A70C9C;
L_08A70C9C:;
    a0 = sp + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70CA4;
L_08A70CA4:;
    v0 = v0 + 1;
    a0 = v0 + 0;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70CB0;
L_08A70CB0:;
    cnd_ = v0 == 0;
    ST32(s0+8, v0);
    if (cnd_) { goto L_08A707A4; }
    goto L_08A70CB8;
L_08A70CB8:;
    a0 = v0 + 0;
    a1 = sp + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70CC4;
L_08A70CC4:;
    a0 = s4 + 0;
    a1 = sp + 4096;
    a2 = s0 + 0;
    a3 = 0 + 0;
    t0 = 11;
    goto L_08A70784;
L_08A70CDC:;
    a0 = sp + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A70CE4;
L_08A70CE4:;
    s5 = v0 + 0;
    goto L_08A706A4;
}

/* 08A70CEC */
u32 func_08A70CEC(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    u8 stack_[3536] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 3536);
L_08A70CEC:;
    sp = sp - 3536;
    s4 = a1 + 0;
    a1 = a3 + 0;
    s2 = a2 + 0;
    a2 = 3501;
    s1 = a0 + 0;
    s3 = LD32(a0);
    a0 = sp + 0;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70D28;
L_08A70D28:;
    s0 = s3 + 524;
    a2 = D_08AE7410 - (29712);
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = a2 + 29712;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A70D40;
L_08A70D40:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = s2 + 0;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A70D50;
L_08A70D50:;
    a2 = D_08AE73E4 - (29668);
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = a2 + 29668;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A70D64;
L_08A70D64:;
    a2 = LD32(s3+408);
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A70D74;
L_08A70D74:;
    a2 = D_08AE74A0 - (29856);
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = a2 + 29856;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A70D88;
L_08A70D88:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = s4 + 0;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A70D98;
L_08A70D98:;
    a2 = D_08AE7454 - (29780);
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = a2 + 29780;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A70DAC;
L_08A70DAC:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = sp + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A70DBC;
L_08A70DBC:;
    a2 = D_08AE7408 - (29704);
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = a2 + 29704;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A70DD0;
L_08A70DD0:;
    v0 = 0 + 0;
    sp = sp + 3536;
    return v0;
}

/* 08A70DF4 */
void func_08A70DF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A70DF4:;
    sp = sp - 48;
    s5 = a3 + 0;
    s4 = a2 + 0;
    s3 = t0 + 0;
    s2 = a0 + 0;
    s1 = a1 + 0;
    v0 = func_08A75DFC(a0, a1);
    goto L_08A70E2C;
L_08A70E2C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A70E74; }
    goto L_08A70E34;
L_08A70E34:;
    a0 = s2 + 0;
    goto L_08A70E38;
L_08A70E38:;
    a1 = s0 + 0;
    a2 = s4 + 0;
    a3 = s5 + 0;
    v0 = func_08A76120(a0, a1, a2, a3);
    goto L_08A70E48;
L_08A70E48:;
    v1 = v0 + 0;
    goto L_08A70E4C;
L_08A70E4C:;
    v0 = v1 + 0;
    sp = sp + 48;
    return;
L_08A70E74:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    a2 = sp + 0;
    v0 = func_08A766C4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A70E84;
L_08A70E84:;
    cnd_ = v0 == 0;
    v0 = 2816;
    if (cnd_) { goto L_08A70EA8; }
    goto L_08A70E8C;
L_08A70E8C:;
    v0 = LD32(sp);
    v0 = LD32(v0+8);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 2816; goto L_08A70EA8; }
    goto L_08A70E9C;
L_08A70E9C:;
    v0 = LD32(v0+20);
    cnd_ = v0 != 0;
    v0 = 2816;
    if (cnd_) { goto L_08A70ECC; }
    goto L_08A70EA8;
L_08A70EA8:;
    cnd_ = s3 == v0;
    v1 = 3;
    if (cnd_) { goto L_08A70E4C; }
    goto L_08A70EB0;
L_08A70EB0:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    a2 = s4 + 0;
    a3 = s5 + 0;
    v0 = func_08A70CEC(a0, a1, a2, a3);
    goto L_08A70EC4;
L_08A70EC4:;
    v1 = v0 + 0;
    goto L_08A70E4C;
L_08A70ECC:;
    a1 = s1 + 0;
    a0 = s2 + 0;
    a2 = 1;
    v0 = func_08A75E74(a0, a1, a2, 0, 0, 0);
    goto L_08A70EDC;
L_08A70EDC:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_08A70E4C; }
    goto L_08A70EE8;
L_08A70EE8:;
    v0 = LD32(sp);
    v1 = LD32(v0+24);
    cnd_ = v1 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A70F10; }
    goto L_08A70EF8;
L_08A70EF8:;
    a1 = s0 + 0;
    v0 = func_08A75F30(a0, a1, 0);
    goto L_08A70F00;
L_08A70F00:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A70E4C; }
    goto L_08A70F08;
L_08A70F08:;
    a0 = s2 + 0;
    goto L_08A70E38;
L_08A70F10:;
    a1 = s0 + 0;
    v0 = func_08A75FB0(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A70F18;
L_08A70F18:;
    goto L_08A70F00;
}

/* 08A70F20 */
rv_t func_08A70F20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08A70F20:;
    a0 = LD32(a1+8);
    cnd_ = a0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A70F40; }
    goto L_08A70F2C;
L_08A70F2C:;
    v1 = LD32(a0);
    a1 = v1 - 1;
    v1 = (s32)a2 < (s32)v1;
    cnd_ = v1 != 0;
    if (cnd_) { ST32(a0, a1); goto L_08A70F40; }
    goto L_08A70F40;
L_08A70F40:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A70F48 */
void func_08A70F48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A70F48:;
    sp = sp - 48;
    s1 = a2 + 0;
    a2 = sp + 0;
    s0 = a0 + 0;
    s3 = LD32(a0);
    v0 = func_08A766C4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A70F74;
L_08A70F74:;
    a1 = D_08AE74A4 - (29860);
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = a1 + 29860;
    if (cnd_) { goto L_08A710B0; }
    goto L_08A70F84;
L_08A70F84:;
    v0 = 1;
    cnd_ = s1 == v0;
    s2 = s3 + 524;
    if (cnd_) { goto L_08A71038; }
    goto L_08A70F90;
L_08A70F90:;
    v0 = LD32(sp);
    goto L_08A70F94;
L_08A70F94:;
    a2 = LD32(v0+8);
    cnd_ = a2 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A70FBC; }
    goto L_08A70FA0;
L_08A70FA0:;
    sp = sp + 48;
    return;
L_08A70FBC:;
    a0 = LD32(a2+8);
    s1 = LD32(a2);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70FC8;
L_08A70FC8:;
    v0 = LD32(sp);
    v1 = LD32(v0+8);
    a0 = LD32(v1+12);
    ST32(v1+8, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70FDC;
L_08A70FDC:;
    v0 = LD32(sp);
    a0 = LD32(v0+8);
    ST32(a0+12, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A70FEC;
L_08A70FEC:;
    a0 = LD32(sp);
    ST32(a0+8, 0);
    v0 = func_08A769D8(a0);
    goto L_08A70FF8;
L_08A70FF8:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A71028; }
    goto L_08A71000;
L_08A71000:;
    v0 = LD32(s3+1096);
    goto L_08A71004;
L_08A71004:;
    a1 = RS_FADDR(func_08A70F20, 0x08A70F20u) - (3872);
    a0 = s0 + 0;
    v0 = v0 - 1;
    ST32(s3+1096, v0);
    a2 = s1 + 0;
    a1 = a1 + 3872;
    { rv_t r_ = func_08A76990(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A71020;
L_08A71020:;
    v0 = 0 + 0;
    goto L_08A70FA0;
L_08A71028:;
    a1 = LD32(sp);
    { rv_t r_ = func_08A76870(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A71030;
L_08A71030:;
    v0 = LD32(s3+1096);
    goto L_08A71004;
L_08A71038:;
    a2 = D_08AE74B8 - (29880);
    a1 = s2 + 0;
    a2 = a2 + 29880;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A71048;
L_08A71048:;
    a2 = D_08AE73E4 - (29668);
    a2 = a2 + 29668;
    a0 = s0 + 0;
    a1 = s2 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A7105C;
L_08A7105C:;
    a2 = LD32(s3+408);
    a0 = s0 + 0;
    a1 = s2 + 0;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A7106C;
L_08A7106C:;
    a2 = D_08AE74C4 - (29892);
    a2 = a2 + 29892;
    a0 = s0 + 0;
    a1 = s2 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A71080;
L_08A71080:;
    v0 = LD32(sp);
    a0 = s0 + 0;
    a1 = s2 + 0;
    a2 = LD32(v0);
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A71094;
L_08A71094:;
    a2 = D_08AE7408 - (29704);
    a1 = s2 + 0;
    a2 = a2 + 29704;
    a0 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A710A8;
L_08A710A8:;
    v0 = LD32(sp);
    goto L_08A70F94;
L_08A710B0:;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A710B8;
L_08A710B8:;
    v0 = 2;
    goto L_08A70FA0;
}

/* 08A710C0 */
u32 func_08A710C0(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A710C0:;
    sp = sp - 32;
    s4 = a0 + 0;
    s3 = (u32)(s32)(s8)a2;
    s0 = a1 + 0;
    s2 = LD32(a1+8);
    s1 = LD32(a1+4);
    cnd_ = s1 == s2;
    a2 = LD32(a1);
    if (cnd_) { goto L_08A71140; }
    goto L_08A710F8;
L_08A710F8:;
    v1 = a2 + s2;
    ST8(v1, s3);
    a0 = 0 + 0;
    ST8(v1+1, 0);
    v0 = LD32(s0+8);
    ST32(s0, a2);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    ST32(s0+4, s1);
    goto L_08A7111C;
L_08A7111C:;
    v0 = a0 + 0;
    sp = sp + 32;
    return v0;
L_08A71140:;
    s1 = s1 + 16384;
    a0 = a2 + 0;
    a1 = s1 + 1;
    v0 = func_08A6AF98(a0, a1, t1, t2, t3);
    goto L_08A71150;
L_08A71150:;
    a1 = D_08AE74D4 - (29908);
    a2 = v0 + 0;
    a0 = s4 + 0;
    cnd_ = v0 != 0;
    a1 = a1 + 29908;
    if (cnd_) { goto L_08A710F8; }
    goto L_08A71164;
L_08A71164:;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7116C;
L_08A7116C:;
    a0 = 1;
    goto L_08A7111C;
}

/* 08A71174 */
u32 func_08A71174(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A71174:;
    sp = sp - 32;
    v1 = 0 + 0;
    s6 = a0 + 0;
    s5 = a2 + 0;
    s2 = a3 + 0;
    s0 = a1 + 0;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A71228; }
    goto L_08A711B0;
L_08A711B0:;
    s3 = LD32(a1+8);
    s4 = LD32(a1+4);
    v0 = 16384;
    s1 = LD32(a1);
    v1 = (s32)a3 > (s32)v0 ? a3 : v0;
    v0 = s4 - s3;
    v0 = (s32)v0 < (s32)a3;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A711F4; }
    goto L_08A711D4;
L_08A711D4:;
    s4 = s4 + v1;
    a1 = s4 + 1;
    v0 = func_08A6AF98(a0, a1, t1, t2, t3);
    goto L_08A711E0;
L_08A711E0:;
    a1 = D_08AE74D4 - (29908);
    s1 = v0 + 0;
    a0 = s6 + 0;
    cnd_ = v0 == 0;
    a1 = a1 + 29908;
    if (cnd_) { goto L_08A71254; }
    goto L_08A711F4;
L_08A711F4:;
    a0 = s1 + s3;
    a1 = s5 + 0;
    a2 = s2 + 0;
    func_08A87AE0(a0, a1, a2);
    goto L_08A71204;
L_08A71204:;
    v0 = s3 + s2;
    v0 = s1 + v0;
    ST8(v0, 0);
    v1 = 0 + 0;
    v0 = LD32(s0+8);
    ST32(s0, s1);
    v0 = v0 + s2;
    ST32(s0+8, v0);
    ST32(s0+4, s4);
    goto L_08A71228;
L_08A71228:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_08A71254:;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7125C;
L_08A7125C:;
    v1 = 1;
    goto L_08A71228;
}

/* 08A71264 */
u32 func_08A71264(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A71264:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a2 + 0;
    s2 = a2 + 0;
    s1 = a1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7128C;
L_08A7128C:;
    a3 = v0 + 0;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = s2 + 0;
    v0 = func_08A71174(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A712A0;
L_08A712A0:;
    sp = sp + 16;
    return v0;
}

/* 08A712B8 */
u32 func_08A712B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A712B8:;
    sp = sp - 32;
    s1 = a1 + 0;
    a1 = D_08AE74E4 - (29924);
    a1 = a1 + 29924;
    s0 = a0 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A712E0;
L_08A712E0:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = sp + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A712F0;
L_08A712F0:;
    sp = sp + 32;
    return v0;
}

/* 08A71304 */
u32 func_08A71304(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A71304:;
    sp = sp - 32;
    v0 = a1 + 0;
    a1 = a2 + 0;
    s3 = a0 + 0;
    a2 = a3 + 0;
    a0 = v0 + 0;
    a3 = 0 + 0;
    s2 = t2 + 0;
    s1 = t0 + 0;
    s0 = t1 + 0;
    v0 = sceNetInetSend(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A71344;
L_08A71344:;
    a0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08A71394; }
    goto L_08A71354;
L_08A71354:;
    cnd_ = a0 != 0;
    if (cnd_) { ST32(s0, a0); goto L_08A7138C; }
    goto L_08A7135C;
L_08A7135C:;
    v0 = 1;
    ST32(s1, v0);
    ST32(s0, 0);
    goto L_08A71368;
L_08A71368:;
    a0 = 0 + 0;
    goto L_08A7136C;
L_08A7136C:;
    v0 = a0 + 0;
    sp = sp + 32;
    return v0;
L_08A7138C:;
    ST32(s1, 0);
    goto L_08A71368;
L_08A71394:;
    v0 = sceNetInetGetErrno(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7139C;
L_08A7139C:;
    v1 = v0 ^ 0xb;
    a0 = v0 + 0;
    v0 = v0 ^ 0x77;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    if (cnd_) { ST32(s0, 0); goto L_08A7138C; }
    goto L_08A713BC;
L_08A713BC:;
    v0 = 116;
    cnd_ = a0 == v0;
    v0 = 80;
    if (cnd_) { goto L_08A7140C; }
    goto L_08A713C8;
L_08A713C8:;
    v1 = (u32)(s32)LD_S8(s2);
    cnd_ = v1 != v0;
    v0 = 82;
    if (cnd_) { goto L_08A713E0; }
    goto L_08A713D4;
L_08A713D4:;
    v1 = (u32)(s32)LD_S8(s2+1);
    cnd_ = v1 == v0;
    a0 = 3;
    if (cnd_) { goto L_08A7136C; }
    goto L_08A713E0;
L_08A713E0:;
    a2 = D_08AE74EC - (29932);
    a2 = a2 + 29932;
    a1 = 5;
    a0 = s3 + 0;
    func_08A78CEC(a0, a1, a2);
    goto L_08A713F4;
L_08A713F4:;
    a0 = s3 + 0;
    a1 = 3;
    a2 = 0 + 0;
    func_08A71AA0(a0, a1, a2, 0, 0, 0);
    goto L_08A71404;
L_08A71404:;
    a0 = 3;
    goto L_08A7136C;
L_08A7140C:;
    ST32(s0, 0);
    goto L_08A7138C;
}

/* 08A71414 */
u32 func_08A71414(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A71414:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v1 = LD32(a1+48);
    v0 = LD32(a1+52);
    cnd_ = v1 == v0;
    ST8(sp, a2);
    if (cnd_) { goto L_08A71468; }
    goto L_08A7143C;
L_08A7143C:;
    a2 = (u32)(s32)LD_S8(sp);
    goto L_08A71440;
L_08A71440:;
    a1 = s0 + 40;
    a0 = s1 + 0;
    v0 = func_08A710C0(a0, a1, a2, t1, t2, t3);
    goto L_08A7144C;
L_08A7144C:;
    v1 = v0 + 0;
    goto L_08A71450;
L_08A71450:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_08A71468:;
    a0 = LD32(a1+56);
    v0 = func_08A83A88(a0);
    goto L_08A71470;
L_08A71470:;
    t2 = D_08AE7514 - (29972);
    t2 = t2 + 29972;
    a0 = s1 + 0;
    a2 = sp + 0;
    a3 = 1;
    t0 = sp + 4;
    cnd_ = v0 != 0;
    t1 = sp + 8;
    if (cnd_) { goto L_08A7143C; }
    goto L_08A71490;
L_08A71490:;
    a1 = LD32(s0+8);
    v0 = func_08A71304(a0, a1, a2, a3, t0, t1, t2, 0);
    goto L_08A71498;
L_08A71498:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A71450; }
    goto L_08A714A0;
L_08A714A0:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A71450; }
    goto L_08A714AC;
L_08A714AC:;
    a2 = (u32)(s32)LD_S8(sp);
    goto L_08A71440;
}

/* 08A714B4 */
u32 func_08A714B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A714B4:;
    sp = sp - 48;
    v1 = 0 + 0;
    s4 = a0 + 0;
    s3 = a2 + 0;
    s2 = 0 + 0;
    s1 = a1 + 0;
    s0 = a3 + 0;
    cnd_ = a3 == 0;
    if (cnd_) { goto L_08A71508; }
    goto L_08A714F0;
L_08A714F0:;
    v1 = LD32(a1+48);
    v0 = LD32(a1+52);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A71554; }
    goto L_08A71500;
L_08A71500:;
    cnd_ = s0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A71530; }
    goto L_08A71508;
L_08A71508:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_08A71530:;
    a2 = s3 + s2;
    a1 = s1 + 40;
    a0 = s4 + 0;
    a3 = s0 + 0;
    v0 = func_08A71174(a0, a1, a2, a3, t1, t2, t3);
    goto L_08A71544;
L_08A71544:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A71508; }
    goto L_08A7154C;
L_08A7154C:;
    v1 = 0 + 0;
    goto L_08A71508;
L_08A71554:;
    a0 = LD32(a1+56);
    v0 = func_08A83A88(a0);
    goto L_08A7155C;
L_08A7155C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A71500; }
    goto L_08A71564;
L_08A71564:;
    s5 = D_08AE7514 - (29972);
    a1 = LD32(s1+8);
    goto L_08A7156C;
L_08A7156C:;
    a2 = s3 + s2;
    a3 = s0 + 0;
    a0 = s4 + 0;
    t0 = sp + 0;
    t1 = sp + 4;
    t2 = s5 + 29972;
    v0 = func_08A71304(a0, a1, a2, a3, t0, t1, t2, 0);
    goto L_08A71588;
L_08A71588:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A71508; }
    goto L_08A71590;
L_08A71590:;
    v0 = LD32(sp+4);
    cnd_ = v0 == 0;
    v1 = 0 < v0;
    if (cnd_) { goto L_08A715A4; }
    goto L_08A7159C;
L_08A7159C:;
    s2 = s2 + v0;
    s0 = s0 - v0;
    goto L_08A715A4;
L_08A715A4:;
    v0 = 0 < s0;
    v0 = v1 & v0;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1+8); goto L_08A7156C; }
    goto L_08A715B4;
L_08A715B4:;
    goto L_08A71500;
}

/* 08A715BC */
u32 func_08A715BC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A715BC:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a2 + 0;
    s2 = a2 + 0;
    s1 = a1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A715E4;
L_08A715E4:;
    a3 = v0 + 0;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = s2 + 0;
    v0 = func_08A714B4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A715F8;
L_08A715F8:;
    sp = sp + 16;
    return v0;
}

/* 08A71610 */
u32 func_08A71610(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A71610:;
    sp = sp - 64;
    fp = 0x10000u;
    fp = fp | 0xffff;
    s7 = 0 + 0;
    s6 = a2 + 0;
    s5 = 0 + 0;
    ST32(sp, a0);
    s3 = LD32(a2);
    s1 = LD32(a2+8);
    s4 = LD32(a2+4);
    ST32(sp+4, a1);
    ST32(sp+8, a3);
    ST32(sp+12, t0);
    v1 = s1 + 16384;
    goto L_08A71670;
L_08A71670:;
    v0 = (s32)s4 < (s32)v1;
    a1 = s1 + 16385;
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A71690; }
    goto L_08A71680;
L_08A71680:;
    s4 = v1 + 0;
    v0 = func_08A6AF98(a0, a1, t1, t2, t3);
    goto L_08A71688;
L_08A71688:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A71790; }
    goto L_08A71690;
L_08A71690:;
    a0 = LD32(sp+4);
    s2 = s3 + s1;
    a2 = s4 - s1;
    a3 = 0 + 0;
    a1 = s2 + 0;
    v0 = sceNetInetRecv(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A716A8;
L_08A716A8:;
    s0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_08A71744; }
    goto L_08A716B8;
L_08A716B8:;
    cnd_ = s0 != 0;
    if (cnd_) { s1 = s1 + s0; goto L_08A71738; }
    goto L_08A716C0;
L_08A716C0:;
    s7 = 1;
    goto L_08A716C4;
L_08A716C4:;
    v0 = ~(0 | s0);
    goto L_08A716C8;
L_08A716C8:;
    v1 = s7 < 0x1u;
    goto L_08A716CC;
L_08A716CC:;
    v0 = 0 < v0;
    v0 = v0 & v1;
    a0 = (s32)fp < (s32)s5;
    cnd_ = v0 == 0;
    ST8(s2, 0);
    if (cnd_) { goto L_08A716E8; }
    goto L_08A716E0;
L_08A716E0:;
    cnd_ = a0 == 0;
    v1 = s1 + 16384;
    if (cnd_) { goto L_08A71670; }
    goto L_08A716E8;
L_08A716E8:;
    v1 = LD32(sp+12);
    ST32(s6+4, s4);
    v0 = 0 + 0;
    ST32(v1, s7);
    v1 = LD32(sp+8);
    ST32(s6+8, s1);
    ST32(s6, s3);
    ST32(v1, s5);
    goto L_08A71708;
L_08A71708:;
    sp = sp + 64;
    return v0;
L_08A71738:;
    s5 = s5 + s0;
    s2 = s3 + s1;
    goto L_08A716C4;
L_08A71744:;
    v0 = sceNetInetGetErrno(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7174C;
L_08A7174C:;
    v1 = v0 ^ 0xb;
    a0 = v0 + 0;
    v0 = v0 ^ 0x77;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    v0 = ~(0 | s0);
    if (cnd_) { goto L_08A716C8; }
    goto L_08A7176C;
L_08A7176C:;
    v1 = 116;
    cnd_ = a0 == v1;
    v1 = s7 < 0x1u;
    if (cnd_) { goto L_08A716CC; }
    goto L_08A71778;
L_08A71778:;
    a0 = LD32(sp);
    a1 = D_08AE7518 - (29976);
    a1 = a1 + 29976;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A71788;
L_08A71788:;
    v0 = 3;
    goto L_08A71708;
L_08A71790:;
    a0 = LD32(sp);
    a1 = D_08AE74D4 - (29908);
    a1 = a1 + 29908;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A717A0;
L_08A717A0:;
    v0 = 1;
    goto L_08A71708;
}

/* 08A717A8 */
u32 func_08A717A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t3)
{
    u32 v0 = 0, v1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A717A8:;
    sp = sp - 64;
    v1 = 0 + 0;
    fp = a0 + 0;
    s7 = a1 + 0;
    s5 = t1 + 0;
    s4 = a2 + 0;
    s1 = 0 + 0;
    s6 = LD32(a2+8);
    s3 = LD32(a2+12);
    ST32(sp+8, a3);
    s0 = s6 - s3;
    ST32(sp+12, t0);
    cnd_ = s0 != 0;
    s2 = LD32(a2);
    if (cnd_) { goto L_08A7183C; }
    goto L_08A71808;
L_08A71808:;
    v0 = v1 + 0;
    sp = sp + 64;
    return v0;
L_08A7183C:;
    a2 = s3 + s1;
    goto L_08A71840;
L_08A71840:;
    a2 = s2 + a2;
    a3 = s0 + 0;
    a0 = fp + 0;
    a1 = s7 + 0;
    t0 = sp + 0;
    t1 = sp + 4;
    t2 = s5 + 0;
    v0 = func_08A71304(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A71860;
L_08A71860:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A71808; }
    goto L_08A71868;
L_08A71868:;
    v0 = LD32(sp+4);
    cnd_ = v0 == 0;
    v1 = 0 < v0;
    if (cnd_) { goto L_08A7187C; }
    goto L_08A71874;
L_08A71874:;
    s1 = s1 + v0;
    s0 = s0 - v0;
    goto L_08A7187C;
L_08A7187C:;
    v0 = 0 < s0;
    v0 = v1 & v0;
    cnd_ = v0 != 0;
    a2 = s3 + s1;
    if (cnd_) { goto L_08A71840; }
    goto L_08A7188C;
L_08A7188C:;
    v0 = LD32(sp+12);
    cnd_ = v0 == 0;
    if (cnd_) { s3 = s3 + s1; goto L_08A718B0; }
    goto L_08A71898;
L_08A71898:;
    cnd_ = (s32)s1 <= 0;
    a2 = s0 + 1;
    if (cnd_) { goto L_08A718B0; }
    goto L_08A718A0;
L_08A718A0:;
    a1 = s2 + s1;
    a0 = s2 + 0;
    { u64 r_ = func_08A87C00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A718AC;
L_08A718AC:;
    s6 = s6 - s1;
    goto L_08A718B0;
L_08A718B0:;
    v1 = LD32(sp+8);
    ST32(s4+12, s3);
    cnd_ = v1 == 0;
    ST32(s4+8, s6);
    if (cnd_) { goto L_08A718C8; }
    goto L_08A718C0;
L_08A718C0:;
    v0 = LD32(sp);
    ST32(v1, v0);
    goto L_08A718C8;
L_08A718C8:;
    v1 = 0 + 0;
    goto L_08A71808;
}

/* 08A718D0 */
u64 func_08A718D0(u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A718D0:;
    sp = sp - 48;
    s4 = t0 + 0;
    s3 = a3 + 0;
    s2 = a2 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    ST32(a2, 0);
    v0 = (s32)v0 < 5;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A71934; }
    goto L_08A71910;
L_08A71910:;
    v0 = a1 + 0;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_08A71934:;
    a0 = LD32(s0);
    a1 = 10;
    { u64 r_ = func_08A8986C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A71940;
L_08A71940:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A71A14; }
    goto L_08A71948;
L_08A71948:;
    a1 = D_08AE7544 - (30020);
    a1 = a1 + 30020;
    a0 = v0 - 5;
    a2 = 5;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7195C;
L_08A7195C:;
    cnd_ = v0 != 0;
    a1 = 3;
    if (cnd_) { goto L_08A71910; }
    goto L_08A71964;
L_08A71964:;
    ST8(s1, 0);
    a1 = D_08AE754C - (30028);
    a1 = a1 + 30028;
    a0 = LD32(s0);
    a2 = sp + 0;
    a3 = 16;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A71980;
L_08A71980:;
    cnd_ = v0 == 0;
    a1 = 3;
    if (cnd_) { goto L_08A71910; }
    goto L_08A71988;
L_08A71988:;
    a0 = sp + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A71990;
L_08A71990:;
    ST32(s3, v0);
    a1 = D_08AE7550 - (30032);
    a1 = a1 + 30032;
    a0 = LD32(s0);
    a2 = sp + 0;
    a3 = 16;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A719AC;
L_08A719AC:;
    cnd_ = v0 == 0;
    a1 = 3;
    if (cnd_) { goto L_08A71910; }
    goto L_08A719B4;
L_08A719B4:;
    a0 = sp + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A719BC;
L_08A719BC:;
    a0 = v0 + 0;
    v0 = LD32(s0);
    v1 = LD32(s0+8);
    a0 = a0 + 1;
    v0 = s1 - v0;
    v0 = v0 + a0;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    v0 = 10;
    if (cnd_) { goto L_08A71A1C; }
    goto L_08A719E0;
L_08A719E0:;
    v0 = s1 + a0;
    v1 = (u32)(s32)LD_S8(v0);
    cnd_ = v1 != 0;
    a1 = 3;
    if (cnd_) { goto L_08A71910; }
    goto L_08A719F0;
L_08A719F0:;
    v0 = s1 + 1;
    ST32(s2, v0);
    v1 = a0 - 1;
    v0 = LD32(s0);
    ST32(s4, v1);
    v0 = s1 - v0;
    v0 = v0 + a0;
    v0 = v0 + 1;
    ST32(s0+12, v0);
    goto L_08A71A14;
L_08A71A14:;
    a1 = 0 + 0;
    goto L_08A71910;
L_08A71A1C:;
    ST8(s1, v0);
    goto L_08A71A14;
}

/* 08A71A24 */
void func_08A71A24(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, a3 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A71A24:;
    sp = sp - 16;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A71A7C; }
    goto L_08A71A38;
L_08A71A38:;
    a3 = LD32(a1);
    cnd_ = a3 == 0;
    if (cnd_) { goto L_08A71A80; }
    goto L_08A71A44;
L_08A71A44:;
    v1 = LD32(a1+12);
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_08A71A84; }
    goto L_08A71A50;
L_08A71A50:;
    v0 = LD32(a1+8);
    a0 = a3 + 0;
    a1 = a3 + v1;
    v0 = v0 - v1;
    a2 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s0+8, v0);
    if (cnd_) { goto L_08A71A90; }
    goto L_08A71A6C;
L_08A71A6C:;
    v0 = LD32(s0+8);
    v0 = a3 + v0;
    ST8(v0, 0);
    ST32(s0+12, 0);
    goto L_08A71A7C;
L_08A71A7C:;
    goto L_08A71A80;
L_08A71A80:;
    goto L_08A71A84;
L_08A71A84:;
    v0 = 0 + 0;
    sp = sp + 16;
    return;
L_08A71A90:;
    { u64 r_ = func_08A87C00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A71A98;
L_08A71A98:;
    a3 = LD32(s0);
    goto L_08A71A6C;
}

/* 08A71AA0 */
void func_08A71AA0(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A71AA0:;
    sp = sp - 48;
    v0 = 1;
    s3 = a1 + 0;
    s2 = a0 + 0;
    a0 = 16;
    s1 = a2 + 0;
    cnd_ = a2 == v0;
    s0 = LD32(s2);
    if (cnd_) { goto L_08A71B4C; }
    goto L_08A71AD4;
L_08A71AD4:;
    v1 = LD32(s0+420);
    ST32(sp, v1);
    v0 = LD32(s0+424);
    cnd_ = v1 != 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_08A71B04; }
    goto L_08A71AE8;
L_08A71AE8:;
    goto L_08A71AEC;
L_08A71AEC:;
    sp = sp + 48;
    return;
L_08A71B04:;
    { u64 r_ = func_08A6AF74(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A71B0C;
L_08A71B0C:;
    v1 = v0 + 0;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a3 = 0 + 0;
    a1 = sp + 0;
    cnd_ = v0 == 0;
    t0 = 1;
    if (cnd_) { goto L_08A71B3C; }
    goto L_08A71B28;
L_08A71B28:;
    v0 = LD32(s0+1072);
    ST32(v1, s3);
    ST32(v1+12, s1);
    ST32(v1+4, v0);
    ST32(v1+8, s0);
    goto L_08A71B3C;
L_08A71B3C:;
    v0 = func_08A71B54(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_08A71B44;
L_08A71B44:;
    goto L_08A71AEC;
L_08A71B4C:;
    ST32(s0+1076, a2);
    goto L_08A71AD4;
}

/* 08A71B54 */
u32 func_08A71B54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A71B54:;
    sp = sp - 48;
    s4 = t0 + 0;
    s3 = a0 + 0;
    a0 = 24;
    s2 = a2 + 0;
    s1 = a3 + 0;
    v1 = LD32(a1+4);
    v0 = LD32(a1);
    ST32(sp+4, v1);
    ST32(sp, v0);
    s0 = LD32(s3);
    { u64 r_ = func_08A6AF74(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A71B9C;
L_08A71B9C:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A71C14; }
    goto L_08A71BA4;
L_08A71BA4:;
    v0 = LD32(sp);
    ST32(a0, v0);
    v1 = LD32(sp+4);
    ST32(a0+8, s2);
    cnd_ = s1 == 0;
    ST32(a0+4, v1);
    if (cnd_) { goto L_08A71C0C; }
    goto L_08A71BBC;
L_08A71BBC:;
    v0 = LD32(s1+24);
    ST32(a0+16, v0);
    goto L_08A71BC4;
L_08A71BC4:;
    ST32(a0+20, 0);
    v0 = LD32(s0+1104);
    cnd_ = v0 != 0;
    ST32(a0+12, s4);
    if (cnd_) { goto L_08A71BD8; }
    goto L_08A71BD4;
L_08A71BD4:;
    ST32(s0+1104, a0);
    goto L_08A71BD8;
L_08A71BD8:;
    v0 = LD32(s0+1108);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+20, a0); goto L_08A71BE4; }
    goto L_08A71BE4;
L_08A71BE4:;
    ST32(s0+1108, a0);
    v0 = 0 + 0;
    goto L_08A71BEC;
L_08A71BEC:;
    sp = sp + 48;
    return v0;
L_08A71C0C:;
    ST32(a0+16, 0);
    goto L_08A71BC4;
L_08A71C14:;
    a1 = D_08AE7558 - (30040);
    a0 = s3 + 0;
    a1 = a1 + 30040;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A71C24;
L_08A71C24:;
    v0 = 1;
    goto L_08A71BEC;
}

/* 08A71C2C */
void func_08A71C2C(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A71C2C:;
    sp = sp - 32;
    s2 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a1);
    a2 = LD32(s2+4);
    t_ = v0;
    a1 = LD32(a1+8);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A71C5C;
L_08A71C5C:;
    v1 = LD32(s2+12);
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = 11;
    if (cnd_) { goto L_08A71E08; }
    goto L_08A71C6C;
L_08A71C6C:;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_08A71E08; }
    goto L_08A71C74;
L_08A71C74:;
    cnd_ = v1 == v0;
    v0 = 4;
    if (cnd_) { goto L_08A71D90; }
    goto L_08A71C7C;
L_08A71C7C:;
    cnd_ = v1 == v0;
    v0 = 7;
    if (cnd_) { goto L_08A71D7C; }
    goto L_08A71C84;
L_08A71C84:;
    cnd_ = v1 == v0;
    v0 = 8;
    if (cnd_) { goto L_08A71D5C; }
    goto L_08A71C8C;
L_08A71C8C:;
    cnd_ = v1 == v0;
    v0 = 9;
    if (cnd_) { goto L_08A71D3C; }
    goto L_08A71C94;
L_08A71C94:;
    cnd_ = v1 == v0;
    v0 = 12;
    if (cnd_) { goto L_08A71CEC; }
    goto L_08A71C9C;
L_08A71C9C:;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s2+8); goto L_08A71CD4; }
    goto L_08A71CA4;
L_08A71CA4:;
    a0 = LD32(s2+8);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A71CAC;
L_08A71CAC:;
    ST32(s2+8, 0);
    a0 = s2 + 0;
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A71CB8;
L_08A71CB8:;
    sp = sp + 32;
    return;
L_08A71CD4:;
    a0 = s0 + 0;
    a2 = 0 + 0;
    a1 = LD32(v0);
    func_08A70F48(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A71CE4;
L_08A71CE4:;
    goto L_08A71CA4;
L_08A71CEC:;
    s1 = LD32(s2+8);
    v0 = LD32(s1+4);
    cnd_ = (s32)v0 <= 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A71D2C; }
    goto L_08A71CFC;
L_08A71CFC:;
    v1 = LD32(s1+8);
    goto L_08A71D00;
L_08A71D00:;
    s0 = s3 << 2;
    v0 = s0 + v1;
    a0 = LD32(v0);
    s3 = s3 + 1;
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A71D14;
L_08A71D14:;
    v1 = LD32(s1+8);
    v0 = LD32(s1+4);
    s0 = s0 + v1;
    v0 = (s32)s3 < (s32)v0;
    cnd_ = v0 != 0;
    ST32(s0, 0);
    if (cnd_) { goto L_08A71D00; }
    goto L_08A71D2C;
L_08A71D2C:;
    a0 = LD32(s1+8);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A71D34;
L_08A71D34:;
    ST32(s1+8, 0);
    goto L_08A71CA4;
L_08A71D3C:;
    s0 = LD32(s2+8);
    a0 = LD32(s0+8);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A71CA4; }
    goto L_08A71D4C;
L_08A71D4C:;
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A71D54;
L_08A71D54:;
    ST32(s0+8, 0);
    goto L_08A71CA4;
L_08A71D5C:;
    s0 = LD32(s2+8);
    a0 = LD32(s0+16);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A71CA4; }
    goto L_08A71D6C;
L_08A71D6C:;
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A71D74;
L_08A71D74:;
    ST32(s0+16, 0);
    goto L_08A71CA4;
L_08A71D7C:;
    s0 = LD32(s2+8);
    a0 = LD32(s0+12);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A71D88;
L_08A71D88:;
    ST32(s0+12, 0);
    goto L_08A71CA4;
L_08A71D90:;
    s1 = LD32(s2+8);
    v0 = LD32(s1+56);
    cnd_ = (s32)v0 <= 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A71DEC; }
    goto L_08A71DA0;
L_08A71DA0:;
    v0 = LD32(s1+60);
    s0 = s3 << 2;
    s3 = s3 + 1;
    v0 = s0 + v0;
    a0 = LD32(v0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A71DB8;
L_08A71DB8:;
    v0 = LD32(s1+60);
    v1 = LD32(s1+64);
    v0 = s0 + v0;
    ST32(v0, 0);
    v1 = s0 + v1;
    a0 = LD32(v1);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A71DD4;
L_08A71DD4:;
    v1 = LD32(s1+64);
    v0 = LD32(s1+56);
    s0 = s0 + v1;
    v0 = (s32)s3 < (s32)v0;
    cnd_ = v0 != 0;
    ST32(s0, 0);
    if (cnd_) { goto L_08A71DA0; }
    goto L_08A71DEC;
L_08A71DEC:;
    a0 = LD32(s1+60);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A71DF4;
L_08A71DF4:;
    ST32(s1+60, 0);
    a0 = LD32(s1+64);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A71E00;
L_08A71E00:;
    ST32(s1+64, 0);
    goto L_08A71CA4;
L_08A71E08:;
    v0 = LD32(s2+8);
    a0 = LD32(v0+8);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A71E14;
L_08A71E14:;
    v0 = LD32(s2+8);
    ST32(v0+8, 0);
    goto L_08A71CA4;
}

/* 08A71E20 */
u32 func_08A71E20(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A71E20:;
    sp = sp - 48;
    s5 = a1 + 0;
    s2 = a0 + 0;
    cnd_ = a1 == 0;
    s1 = LD32(a0);
    if (cnd_) { goto L_08A71F14; }
    goto L_08A71E58;
L_08A71E58:;
    s6 = LD32(s1+1104);
    s3 = LD32(s1+1108);
    ST32(s1+1104, 0);
    s4 = 0 + 0;
    v1 = s6 + 0;
    cnd_ = s6 == 0;
    ST32(s1+1108, 0);
    if (cnd_) { goto L_08A71E9C; }
    goto L_08A71E74;
L_08A71E74:;
    s7 = 1;
    goto L_08A71E78;
L_08A71E78:;
    v0 = LD32(v1+16);
    cnd_ = v0 == s5;
    s0 = LD32(v1+20);
    if (cnd_) { goto L_08A71EEC; }
    goto L_08A71E84;
L_08A71E84:;
    v0 = LD32(v1+12);
    cnd_ = v0 == s7;
    if (cnd_) { goto L_08A71EEC; }
    goto L_08A71E90;
L_08A71E90:;
    s4 = v1 + 0;
    goto L_08A71E94;
L_08A71E94:;
    cnd_ = s0 != 0;
    v1 = s0 + 0;
    if (cnd_) { goto L_08A71E78; }
    goto L_08A71E9C;
L_08A71E9C:;
    v0 = LD32(s1+1104);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s1+1108, s3); goto L_08A71EE4; }
    goto L_08A71EA8;
L_08A71EA8:;
    v0 = LD32(s1+1108);
    ST32(v0+20, s6);
    ST32(s1+1108, s3);
    goto L_08A71EB4;
L_08A71EB4:;
    goto L_08A71EB8;
L_08A71EB8:;
    v0 = 0 + 0;
    sp = sp + 48;
    return v0;
L_08A71EE4:;
    ST32(s1+1104, s6);
    goto L_08A71EB4;
L_08A71EEC:;
    cnd_ = s4 == 0;
    if (cnd_) { s6 = s0 + 0; goto L_08A71EF8; }
    goto L_08A71EF4;
L_08A71EF4:;
    ST32(s4+20, s0);
    goto L_08A71EF8;
L_08A71EF8:;
    v0 = s3 ^ v1;
    a1 = v1 + 0;
    a0 = s2 + 0;
    if (v0 == 0) s3 = s4;
    func_08A71C2C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A71F0C;
L_08A71F0C:;
    goto L_08A71E94;
L_08A71F14:;
    a0 = LD32(s1+1104);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A71EB8; }
    goto L_08A71F20;
L_08A71F20:;
    ST32(s1+1104, 0);
    v1 = a0 + 0;
    cnd_ = a0 != 0;
    ST32(s1+1108, 0);
    if (cnd_) { goto L_08A71F44; }
    goto L_08A71F30;
L_08A71F30:;
    v0 = LD32(s1+1104);
    goto L_08A71F34;
L_08A71F34:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A71F20; }
    goto L_08A71F3C;
L_08A71F3C:;
    goto L_08A71EB8;
L_08A71F44:;
    s0 = LD32(v1+20);
    a1 = v1 + 0;
    a0 = s2 + 0;
    func_08A71C2C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A71F54;
L_08A71F54:;
    cnd_ = s0 != 0;
    v1 = s0 + 0;
    if (cnd_) { goto L_08A71F44; }
    goto L_08A71F5C;
L_08A71F5C:;
    v0 = LD32(s1+1104);
    goto L_08A71F34;
}

/* 08A71F64 */
void func_08A71F64(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A71F64:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = a0 + 0;
    s0 = 0 + 0;
    cnd_ = (s32)a1 <= 0;
    if (cnd_) { goto L_08A71FE4; }
    goto L_08A71F90;
L_08A71F90:;
    s1 = 0x84210000u;
    v0 = D_08AE7568 - (30056);
    s4 = v0 + 30056;
    s1 = s1 | 0x843;
    goto L_08A71FA0;
L_08A71FA0:;
    v0 = func_08A88E1C();
    goto L_08A71FA8;
L_08A71FA8:;
    a0 = v0 >> 1;
    { u64 p_ = (u64)a0 * s1; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    a2 = s2 + s0;
    s0 = s0 + 1;
    a1 = (s32)s0 < (s32)s3;
    a0 = hi;
    a0 = a0 >> 4;
    v1 = a0 << 5;
    v1 = v1 - a0;
    v1 = v1 << 1;
    v0 = v0 - v1;
    v0 = v0 + s4;
    v1 = LD_U8(v0);
    cnd_ = a1 != 0;
    ST8(a2, v1);
    if (cnd_) { goto L_08A71FA0; }
    goto L_08A71FE4;
L_08A71FE4:;
    v0 = s2 + s0;
    ST8(v0, 0);
    sp = sp + 32;
    return;
}

/* 08A7200C */
u32 func_08A7200C(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A7200C:;
    sp = sp - 64;
    s3 = a1 + 0;
    s0 = LD32(a0);
    v0 = LD32(s0+268);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A72180; }
    goto L_08A72038;
L_08A72038:;
    v0 = (u32)-1;
    ST32(s0+540, v0);
    ST32(s0+544, 0);
    goto L_08A72044;
L_08A72044:;
    a0 = 2;
    a1 = 1;
    a2 = 0 + 0;
    v0 = sceNetInetSocket(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A72054;
L_08A72054:;
    s2 = (u32)-1;
    cnd_ = v0 == s2;
    ST32(s0+492, v0);
    if (cnd_) { goto L_08A72174; }
    goto L_08A72060;
L_08A72060:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    v0 = func_08A6AFE4(a0, a1, 0, 0, 0);
    goto L_08A7206C;
L_08A7206C:;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = D_08AE75A8 - (30120); goto L_08A7216C; }
    goto L_08A72074;
L_08A72074:;
    a0 = D_08B1CBF4 - (-13324);
    a0 = a0 - 13324;
    { u64 r_ = func_08A6A824(a0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72080;
L_08A72080:;
    a2 = D_08AE75DC - (30172);
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a2 = a2 + 30172;
    if (cnd_) { goto L_08A72144; }
    goto L_08A72090;
L_08A72090:;
    v0 = 2;
    ST32(sp, 0);
    v1 = 29900;
    v1 = WSBH(v1);
    ST32(sp+4, 0);
    a1 = sp + 0;
    a2 = 16;
    ST8(sp+1, v0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    a0 = LD32(a0+12);
    ST16(sp+2, v1);
    v0 = LD32(a0);
    v1 = LD32(v0);
    ST32(sp+4, v1);
    a0 = LD32(s0+492);
    v0 = sceNetInetConnect(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A720D4;
L_08A720D4:;
    cnd_ = v0 == s2;
    v0 = 1;
    if (cnd_) { goto L_08A72108; }
    goto L_08A720DC;
L_08A720DC:;
    ST32(s3+20, v0);
    v1 = 0 + 0;
    ST32(s0+496, v0);
    goto L_08A720E8;
L_08A720E8:;
    v0 = v1 + 0;
    sp = sp + 64;
    return v0;
L_08A72108:;
    v0 = sceNetInetGetErrno(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A72110;
L_08A72110:;
    v1 = v0 ^ 0xb;
    a0 = v0 + 0;
    v0 = v0 ^ 0x77;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A720DC; }
    goto L_08A72130;
L_08A72130:;
    v0 = 116;
    cnd_ = a0 == v0;
    v0 = 1;
    if (cnd_) { goto L_08A720DC; }
    goto L_08A7213C;
L_08A7213C:;
    a2 = D_08AE7610 - (30224);
    a2 = a2 + 30224;
    goto L_08A72144;
L_08A72144:;
    a1 = 5;
    a0 = s1 + 0;
    func_08A78CEC(a0, a1, a2);
    goto L_08A72150;
L_08A72150:;
    a0 = s1 + 0;
    a1 = 3;
    a2 = 1;
    func_08A71AA0(a0, a1, a2, 0, 0, 0);
    goto L_08A72160;
L_08A72160:;
    v1 = 3;
    goto L_08A720E8;
L_08A72168:;
    a2 = D_08AE75A8 - (30120);
    goto L_08A7216C;
L_08A7216C:;
    a2 = a2 + 30120;
    goto L_08A72144;
L_08A72174:;
    a2 = D_08AE7638 - (30264);
    a2 = a2 + 30264;
    goto L_08A72144;
L_08A72180:;
    a0 = 2;
    a1 = 1;
    a2 = 0 + 0;
    v0 = sceNetInetSocket(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A72190;
L_08A72190:;
    s2 = (u32)-1;
    cnd_ = v0 == s2;
    ST32(s0+540, v0);
    if (cnd_) { goto L_08A72174; }
    goto L_08A7219C;
L_08A7219C:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    v0 = func_08A6AFE4(a0, a1, 0, 0, 0);
    goto L_08A721A8;
L_08A721A8:;
    cnd_ = v0 == 0;
    v0 = 2;
    if (cnd_) { goto L_08A72168; }
    goto L_08A721B0;
L_08A721B0:;
    ST32(sp, 0);
    a2 = 16;
    a1 = sp + 0;
    ST8(sp+1, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    a0 = LD32(s0+540);
    v0 = sceNetInetBind(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A721D4;
L_08A721D4:;
    a2 = D_08AE7660 - (30304);
    cnd_ = v0 == s2;
    a2 = a2 + 30304;
    if (cnd_) { goto L_08A72144; }
    goto L_08A721E0;
L_08A721E0:;
    a0 = LD32(s0+540);
    a1 = 5;
    v0 = sceNetInetListen(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A721EC;
L_08A721EC:;
    a2 = D_08AE7688 - (30344);
    cnd_ = v0 == s2;
    a2 = a2 + 30344;
    if (cnd_) { goto L_08A72144; }
    goto L_08A721F8;
L_08A721F8:;
    a0 = LD32(s0+540);
    a2 = sp + 16;
    v0 = 16;
    a1 = sp + 0;
    ST32(sp+16, v0);
    v0 = sceNetInetGetsockname(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A72210;
L_08A72210:;
    a2 = D_08AE76B4 - (30388);
    cnd_ = v0 == s2;
    a2 = a2 + 30388;
    if (cnd_) { goto L_08A72144; }
    goto L_08A7221C;
L_08A7221C:;
    v0 = LD_U16(sp+2);
    ST32(s0+544, v0);
    goto L_08A72044;
}

/* 08A72228 */
rv_t func_08A72228(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, u32 sp_in)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64); memcpy(stack_ + 64, PTR(sp_in), 32); /* stack-passed arguments */
L_08A72228:;
    sp = sp - 64;
    v0 = 4;
    fp = t2 + 0;
    s7 = t1 + 0;
    s6 = t3 + 0;
    s5 = t0 + 0;
    s4 = a3 + 0;
    s3 = a2 + 0;
    s2 = a0 + 0;
    s1 = LD32(a0);
    v1 = LD32(s1+496);
    cnd_ = v1 == v0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08A72448; }
    goto L_08A72284;
L_08A72284:;
    cnd_ = v1 != 0;
    v0 = 1;
    if (cnd_) { goto L_08A72430; }
    goto L_08A7228C;
L_08A7228C:;
    ST32(s1+268, v0);
    a1 = s0 + 0;
    a0 = s1 + 272;
    a2 = 31;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A722A0;
L_08A722A0:;
    s0 = s1 + 324;
    a0 = s1 + 303;
    a1 = s3 + 0;
    a2 = 21;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A722B4;
L_08A722B4:;
    a0 = s0 + 0;
    a1 = s4 + 0;
    a2 = 51;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A722C4;
L_08A722C4:;
    a1 = s5 + 0;
    a2 = 31;
    a0 = s1 + 375;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A722D4;
L_08A722D4:;
    a0 = s0 + 0;
    func_08A6B5C0(a0);
    goto L_08A722DC;
L_08A722DC:;
    a0 = 776;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A722E4;
L_08A722E4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A72418; }
    goto L_08A722EC;
L_08A722EC:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    a2 = 776;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A722FC;
L_08A722FC:;
    v1 = LD32(sp+68);
    ST32(s0+772, v1);
    v0 = (u32)(s32)LD_S8(s7);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A7231C; }
    goto L_08A72310;
L_08A72310:;
    v0 = (u32)(s32)LD_S8(fp);
    cnd_ = v0 != 0;
    a0 = s0 + 194;
    if (cnd_) { goto L_08A723F4; }
    goto L_08A7231C;
L_08A7231C:;
    cnd_ = s6 == 0;
    a0 = s0 + 706;
    if (cnd_) { goto L_08A72330; }
    goto L_08A72324;
L_08A72324:;
    a1 = s6 + 0;
    a2 = 65;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72330;
L_08A72330:;
    t0 = LD32(sp+72);
    t1 = LD32(sp+76);
    t2 = LD32(sp+80);
    a2 = s0 + 0;
    a0 = s2 + 0;
    a1 = 0 + 0;
    a3 = sp + 0;
    v0 = func_08A74EDC(a0, a1, a2, a3, t0, t1, t2, 0);
    goto L_08A72350;
L_08A72350:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A7238C; }
    goto L_08A72358;
L_08A72358:;
    v0 = v1 + 0;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08A7238C:;
    a1 = LD32(sp);
    a0 = s2 + 0;
    v0 = func_08A7200C(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A72398;
L_08A72398:;
    cnd_ = v0 != 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A723D0; }
    goto L_08A723A0;
L_08A723A0:;
    v1 = LD32(sp);
    v0 = LD32(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(v1+24); goto L_08A723B8; }
    goto L_08A723B0;
L_08A723B0:;
    v1 = 0 + 0;
    goto L_08A72358;
L_08A723B8:;
    a0 = s2 + 0;
    { rv_t r_ = func_08A70334(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A723C0;
L_08A723C0:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A72358; }
    goto L_08A723C8;
L_08A723C8:;
    v1 = 0 + 0;
    goto L_08A72358;
L_08A723D0:;
    a1 = LD32(sp);
    a0 = s2 + 0;
    ST32(a1+28, v0);
    func_08A74CF8(a0, a1, 0, 0, 0);
    goto L_08A723E0;
L_08A723E0:;
    a0 = s2 + 0;
    a1 = 0 + 0;
    f0 = func_08A730FC(a0, a1, 0, 0, 0);
    goto L_08A723EC;
L_08A723EC:;
    v1 = s0 + 0;
    goto L_08A72358;
L_08A723F4:;
    a1 = s7 + 0;
    a2 = 256;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72400;
L_08A72400:;
    a0 = s0 + 450;
    a1 = fp + 0;
    a2 = 256;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72410;
L_08A72410:;
    goto L_08A7231C;
L_08A72418:;
    a1 = D_08AE76E4 - (30436);
    a0 = s2 + 0;
    a1 = a1 + 30436;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72428;
L_08A72428:;
    v1 = 1;
    goto L_08A72358;
L_08A72430:;
    a1 = D_08AE76F4 - (30452);
    a0 = s2 + 0;
    a1 = a1 + 30452;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72440;
L_08A72440:;
    v1 = 2;
    goto L_08A72358;
L_08A72448:;
    { rv_t r_ = func_08A6FF3C(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A72450;
L_08A72450:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A72358; }
    goto L_08A72458;
L_08A72458:;
    v1 = LD32(s1+496);
    goto L_08A72284;
}

/* 08A72460 */
u32 func_08A72460(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[704] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 704);
L_08A72460:;
    sp = sp - 704;
    s5 = a1 + 128;
    s2 = a1 + 0;
    a1 = 32;
    s1 = a0 + 0;
    s4 = s2 + 161;
    s0 = s2 + 450;
    s3 = LD32(a0);
    a0 = s5 + 0;
    func_08A71F64(a0, a1);
    goto L_08A724A4;
L_08A724A4:;
    v1 = (u32)(s32)LD_S8(s2+450);
    v0 = s3 + 375;
    if (v1 == 0) s0 = v0;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A724B8;
L_08A724B8:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = s4 + 0;
    func_08A853D0(a0, a1, a2);
    goto L_08A724C8;
L_08A724C8:;
    v0 = (u32)(s32)LD_S8(s2+194);
    cnd_ = v0 != 0;
    t0 = s2 + 194;
    if (cnd_) { goto L_08A724E0; }
    goto L_08A724D4;
L_08A724D4:;
    v0 = (u32)(s32)LD_S8(s3+303);
    cnd_ = v0 == 0;
    t0 = s3 + 303;
    if (cnd_) { goto L_08A727F0; }
    goto L_08A724E0;
L_08A724E0:;
    a1 = D_08AE7708 - (30472);
    a3 = D_08AE7718 - (30488);
    a2 = s4 + 0;
    t3 = s4 + 0;
    a1 = a1 + 30472;
    a3 = a3 + 30488;
    t1 = s5 + 0;
    t2 = s2 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A72508;
L_08A72508:;
    a0 = sp + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72510;
L_08A72510:;
    s4 = sp + 512;
    a1 = v0 + 0;
    a0 = sp + 0;
    a2 = s4 + 0;
    func_08A853D0(a0, a1, a2);
    goto L_08A72524;
L_08A72524:;
    v0 = LD32(s3+256);
    cnd_ = v0 != 0;
    a1 = s3 + 272;
    if (cnd_) { goto L_08A727C0; }
    goto L_08A72530;
L_08A72530:;
    s0 = s3 + 524;
    goto L_08A72534;
L_08A72534:;
    a2 = D_08AE774C - (30540);
    a2 = a2 + 30540;
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A72548;
L_08A72548:;
    a2 = D_08AE7754 - (30548);
    a2 = a2 + 30548;
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A7255C;
L_08A7255C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = s5 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A7256C;
L_08A7256C:;
    v1 = (u32)(s32)LD_S8(s2+194);
    cnd_ = v1 != 0;
    if (cnd_) { a2 = D_08AE7760 - (30560); goto L_08A727A8; }
    goto L_08A72578;
L_08A72578:;
    v0 = (u32)(s32)LD_S8(s3+303);
    cnd_ = v0 == 0;
    a2 = D_08AE776C - (30572);
    if (cnd_) { goto L_08A7276C; }
    goto L_08A72584;
L_08A72584:;
    a2 = D_08AE7774 - (30580);
    a2 = a2 + 30580;
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A72598;
L_08A72598:;
    a2 = s3 + 303;
    goto L_08A7259C;
L_08A7259C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A725A8;
L_08A725A8:;
    v0 = LD32(s3+412);
    cnd_ = v0 != 0;
    a2 = D_08AE7784 - (30596);
    if (cnd_) { goto L_08A72744; }
    goto L_08A725B4;
L_08A725B4:;
    v0 = LD32(s3+416);
    goto L_08A725B8;
L_08A725B8:;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = D_08AE7790 - (30608); goto L_08A7271C; }
    goto L_08A725C0;
L_08A725C0:;
    a2 = D_08AE779C - (30620);
    goto L_08A725C4;
L_08A725C4:;
    a2 = a2 + 30620;
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A725D4;
L_08A725D4:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A725E4;
L_08A725E4:;
    v1 = LD32(s3+268);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { a2 = D_08AE77A8 - (30632); goto L_08A72704; }
    goto L_08A725F4;
L_08A725F4:;
    a2 = D_08AE77B4 - (30644);
    goto L_08A725F8;
L_08A725F8:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = a2 + 30644;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A72608;
L_08A72608:;
    a2 = LD_U16(s3+544);
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = WSBH(a2);
    a2 = (u32)(s32)(s16)a2;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A72620;
L_08A72620:;
    a2 = D_08AE77BC - (30652);
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = a2 + 30652;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A72634;
L_08A72634:;
    a2 = LD32(s3+1152);
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A72644;
L_08A72644:;
    a2 = D_08AE77C8 - (30664);
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = a2 + 30664;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A72658;
L_08A72658:;
    a2 = D_08C320E0 - (8416);
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = a2 + 8416;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A7266C;
L_08A7266C:;
    a2 = D_08AE77D4 - (30676);
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = a2 + 30676;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A72680;
L_08A72680:;
    a2 = LD32(s3+1156);
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A72690;
L_08A72690:;
    a2 = D_08AE77E4 - (30692);
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = a2 + 30692;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A726A4;
L_08A726A4:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = 3;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A726B4;
L_08A726B4:;
    a2 = D_08AE77F4 - (30708);
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = a2 + 30708;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A726C8;
L_08A726C8:;
    a2 = D_08AE77FC - (30716);
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = a2 + 30716;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A726DC;
L_08A726DC:;
    v0 = 0 + 0;
    sp = sp + 704;
    return v0;
L_08A72704:;
    a2 = a2 + 30632;
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A72714;
L_08A72714:;
    a2 = D_08AE77B4 - (30644);
    goto L_08A725F8;
L_08A7271C:;
    a2 = a2 + 30608;
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A7272C;
L_08A7272C:;
    a2 = LD32(s3+416);
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A7273C;
L_08A7273C:;
    a2 = D_08AE779C - (30620);
    goto L_08A725C4;
L_08A72744:;
    a2 = a2 + 30596;
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A72754;
L_08A72754:;
    a2 = LD32(s3+412);
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A72764;
L_08A72764:;
    v0 = LD32(s3+416);
    goto L_08A725B8;
L_08A7276C:;
    a2 = a2 + 30572;
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A7277C;
L_08A7277C:;
    a2 = s3 + 272;
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A7278C;
L_08A7278C:;
    a2 = D_08AE7804 - (30724);
    a2 = a2 + 30724;
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A727A0;
L_08A727A0:;
    a2 = s3 + 324;
    goto L_08A7259C;
L_08A727A8:;
    a2 = a2 + 30560;
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A727B8;
L_08A727B8:;
    a2 = s2 + 194;
    goto L_08A7259C;
L_08A727C0:;
    a2 = s3 + 324;
    a0 = s1 + 0;
    a3 = sp + 656;
    func_08A7690C(a0, a1, a2, a3);
    goto L_08A727D0;
L_08A727D0:;
    v1 = LD32(sp+656);
    cnd_ = v1 == 0;
    s0 = s3 + 524;
    if (cnd_) { goto L_08A72534; }
    goto L_08A727DC;
L_08A727DC:;
    v0 = LD32(v1+4);
    ST32(s3+412, v0);
    v1 = LD32(v1);
    ST32(s3+416, v1);
    goto L_08A72534;
L_08A727F0:;
    s0 = sp + 560;
    a1 = D_08AE7808 - (30728);
    a2 = s3 + 272;
    a3 = s3 + 324;
    a1 = a1 + 30728;
    a0 = s0 + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7280C;
L_08A7280C:;
    t0 = s0 + 0;
    goto L_08A724E0;
}

/* 08A72814 */
u32 func_08A72814(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 288);
L_08A72814:;
    sp = sp - 288;
    s5 = a1 + 0;
    s3 = a0 + 0;
    s1 = 0 + 0;
    s4 = LD32(a0);
    s0 = s4 + 375;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72850;
L_08A72850:;
    a0 = 0x79700000u;
    s2 = v0 + 0;
    a0 = a0 | 0x7367;
    func_08A6B740(a0);
    goto L_08A72860;
L_08A72860:;
    cnd_ = s2 == 0;
    v0 = sp + s1;
    if (cnd_) { goto L_08A72898; }
    goto L_08A72868;
L_08A72868:;
    a0 = 0 + 0;
    a1 = 255;
    v0 = func_08A6B75C(a0, a1);
    goto L_08A72874;
L_08A72874:;
    v1 = LD_U8(s0);
    a1 = sp + s1;
    s1 = s1 + 1;
    v0 = v0 ^ v1;
    a0 = s1 < s2;
    ST8(a1, v0);
    cnd_ = a0 != 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_08A72868; }
    goto L_08A72894;
L_08A72894:;
    v0 = sp + s1;
    goto L_08A72898;
L_08A72898:;
    ST8(v0, 0);
    s0 = sp + 32;
    a3 = 1;
    a2 = s2 + 0;
    a0 = sp + 0;
    a1 = s0 + 0;
    func_08A6B844(a0, a1, a2, a3);
    goto L_08A728B4;
L_08A728B4:;
    s2 = s4 + 524;
    a2 = D_08AE7810 - (30736);
    a2 = a2 + 30736;
    a0 = s3 + 0;
    a1 = s2 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A728CC;
L_08A728CC:;
    a2 = D_08AE781C - (30748);
    a2 = a2 + 30748;
    a0 = s3 + 0;
    a1 = s2 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A728E0;
L_08A728E0:;
    a2 = s4 + 324;
    a0 = s3 + 0;
    a1 = s2 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A728F0;
L_08A728F0:;
    a2 = D_08AE7824 - (30756);
    a2 = a2 + 30756;
    a0 = s3 + 0;
    a1 = s2 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A72904;
L_08A72904:;
    a2 = s4 + 272;
    a0 = s3 + 0;
    a1 = s2 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A72914;
L_08A72914:;
    a2 = D_08AE782C - (30764);
    a2 = a2 + 30764;
    a0 = s3 + 0;
    a1 = s2 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A72928;
L_08A72928:;
    a0 = s3 + 0;
    a1 = s2 + 0;
    a2 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A72938;
L_08A72938:;
    a2 = D_08AE77BC - (30652);
    a2 = a2 + 30652;
    a0 = s3 + 0;
    a1 = s2 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A7294C;
L_08A7294C:;
    a2 = LD32(s4+1152);
    a0 = s3 + 0;
    a1 = s2 + 0;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A7295C;
L_08A7295C:;
    a2 = D_08AE77C8 - (30664);
    a2 = a2 + 30664;
    a0 = s3 + 0;
    a1 = s2 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A72970;
L_08A72970:;
    a2 = D_08C320E0 - (8416);
    a2 = a2 + 8416;
    a0 = s3 + 0;
    a1 = s2 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A72984;
L_08A72984:;
    a2 = D_08AE77D4 - (30676);
    a2 = a2 + 30676;
    a0 = s3 + 0;
    a1 = s2 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A72998;
L_08A72998:;
    a2 = LD32(s4+1156);
    a0 = s3 + 0;
    a1 = s2 + 0;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A729A8;
L_08A729A8:;
    a2 = D_08AE7774 - (30580);
    a2 = a2 + 30580;
    a0 = s3 + 0;
    a1 = s2 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A729BC;
L_08A729BC:;
    a2 = s4 + 303;
    a0 = s3 + 0;
    a1 = s2 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A729CC;
L_08A729CC:;
    v1 = (u32)(s32)LD_S8(s5+706);
    cnd_ = v1 != 0;
    a2 = D_08AE77F4 - (30708);
    if (cnd_) { goto L_08A72A24; }
    goto L_08A729D8;
L_08A729D8:;
    a0 = s3 + 0;
    a1 = s2 + 0;
    a2 = a2 + 30708;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A729E8;
L_08A729E8:;
    a2 = D_08AE77FC - (30716);
    a0 = s3 + 0;
    a1 = s2 + 0;
    a2 = a2 + 30716;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A729FC;
L_08A729FC:;
    v0 = 0 + 0;
    sp = sp + 288;
    return v0;
L_08A72A24:;
    s0 = s5 + 706;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72A30;
L_08A72A30:;
    a0 = 0x79700000u;
    s4 = v0 + 0;
    a0 = a0 | 0x7367;
    func_08A6B740(a0);
    goto L_08A72A40;
L_08A72A40:;
    s1 = 0 + 0;
    cnd_ = s4 == 0;
    s5 = sp + 80;
    if (cnd_) { goto L_08A72A78; }
    goto L_08A72A4C;
L_08A72A4C:;
    a0 = 0 + 0;
    a1 = 255;
    v0 = func_08A6B75C(a0, a1);
    goto L_08A72A58;
L_08A72A58:;
    v1 = LD_U8(s0);
    a1 = s5 + s1;
    s1 = s1 + 1;
    v0 = v0 ^ v1;
    a0 = s1 < s4;
    ST8(a1, v0);
    cnd_ = a0 != 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_08A72A4C; }
    goto L_08A72A78;
L_08A72A78:;
    v0 = s5 + s1;
    ST8(v0, 0);
    s0 = sp + 160;
    a0 = s5 + 0;
    a2 = s4 + 0;
    a1 = s0 + 0;
    a3 = 1;
    func_08A6B844(a0, a1, a2, a3);
    goto L_08A72A98;
L_08A72A98:;
    a2 = D_08AE783C - (30780);
    a2 = a2 + 30780;
    a0 = s3 + 0;
    a1 = s2 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A72AAC;
L_08A72AAC:;
    a0 = s3 + 0;
    a1 = s2 + 0;
    a2 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A72ABC;
L_08A72ABC:;
    a2 = D_08AE77F4 - (30708);
    goto L_08A729D8;
}

/* 08A72AC4 */
u32 func_08A72AC4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[736] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 736);
L_08A72AC4:;
    sp = sp - 736;
    s4 = a0 + 0;
    s3 = a1 + 0;
    a1 = a2 + 0;
    s1 = a2 + 0;
    a2 = 0 + 0;
    s2 = LD32(a0);
    v0 = func_08A78950(a0, a1, a2);
    goto L_08A72B04;
L_08A72B04:;
    cnd_ = v0 != 0;
    s0 = 2;
    if (cnd_) { goto L_08A72F04; }
    goto L_08A72B0C;
L_08A72B0C:;
    v1 = LD32(s3+20);
    cnd_ = v1 == s0;
    s5 = LD32(s3+4);
    if (cnd_) { goto L_08A72C8C; }
    goto L_08A72B18;
L_08A72B18:;
    v0 = (s32)v1 < 3;
    cnd_ = v0 == 0;
    v0 = 3;
    if (cnd_) { goto L_08A72C04; }
    goto L_08A72B24;
L_08A72B24:;
    v0 = 1;
    cnd_ = v1 == v0;
    a1 = D_08AE7848 - (30792);
    if (cnd_) { goto L_08A72B60; }
    goto L_08A72B30;
L_08A72B30:;
    v1 = 0 + 0;
    goto L_08A72B34;
L_08A72B34:;
    v0 = v1 + 0;
    sp = sp + 736;
    return v0;
L_08A72B60:;
    a1 = a1 + 30792;
    a0 = s1 + 0;
    a2 = 5;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72B70;
L_08A72B70:;
    cnd_ = v0 != 0;
    a1 = D_08AE7754 - (30548);
    if (cnd_) { goto L_08A72BD8; }
    goto L_08A72B78;
L_08A72B78:;
    a0 = s1 + 0;
    a1 = a1 + 30548;
    a2 = s5 + 0;
    a3 = 128;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72B8C;
L_08A72B8C:;
    cnd_ = v0 == 0;
    a2 = D_08AE7850 - (30800);
    if (cnd_) { goto L_08A72BDC; }
    goto L_08A72B94;
L_08A72B94:;
    v0 = LD32(s5+772);
    cnd_ = v0 == 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08A72BC0; }
    goto L_08A72BA0;
L_08A72BA0:;
    a1 = s5 + 0;
    v0 = func_08A72814(a0, a1);
    goto L_08A72BA8;
L_08A72BA8:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A72B34; }
    goto L_08A72BB0;
L_08A72BB0:;
    v0 = 3;
    ST32(s3+20, v0);
    goto L_08A72B30;
L_08A72BBC:;
    a0 = s4 + 0;
    goto L_08A72BC0;
L_08A72BC0:;
    a1 = s5 + 0;
    v0 = func_08A72460(a0, a1);
    goto L_08A72BC8;
L_08A72BC8:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A72B34; }
    goto L_08A72BD0;
L_08A72BD0:;
    ST32(s3+20, s0);
    goto L_08A72B30;
L_08A72BD8:;
    a2 = D_08AE7850 - (30800);
    goto L_08A72BDC;
L_08A72BDC:;
    a2 = a2 + 30800;
    goto L_08A72BE0;
L_08A72BE0:;
    a1 = 1;
    goto L_08A72BE4;
L_08A72BE4:;
    a0 = s4 + 0;
    func_08A78CEC(a0, a1, a2);
    goto L_08A72BEC;
L_08A72BEC:;
    a0 = s4 + 0;
    a1 = 3;
    a2 = 1;
    func_08A71AA0(a0, a1, a2, 0, 0, 0);
    goto L_08A72BFC;
L_08A72BFC:;
    v1 = 3;
    goto L_08A72B34;
L_08A72C04:;
    cnd_ = v1 != v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A72B34; }
    goto L_08A72C0C;
L_08A72C0C:;
    a1 = D_08AE7880 - (30848);
    a1 = a1 + 30848;
    a0 = s1 + 0;
    a2 = 5;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72C20;
L_08A72C20:;
    cnd_ = v0 != 0;
    a1 = D_08AE7784 - (30596);
    if (cnd_) { goto L_08A72BD8; }
    goto L_08A72C28;
L_08A72C28:;
    a1 = a1 + 30596;
    a0 = s1 + 0;
    a2 = sp + 0;
    a3 = 512;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72C3C;
L_08A72C3C:;
    cnd_ = v0 == 0;
    a2 = D_08AE7888 - (30856);
    if (cnd_) { goto L_08A72C84; }
    goto L_08A72C44;
L_08A72C44:;
    a0 = sp + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A72C4C;
L_08A72C4C:;
    ST32(s2+412, v0);
    a1 = D_08AE7790 - (30608);
    a0 = s1 + 0;
    a1 = a1 + 30608;
    a2 = sp + 0;
    a3 = 512;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72C68;
L_08A72C68:;
    cnd_ = v0 == 0;
    a2 = D_08AE7888 - (30856);
    if (cnd_) { goto L_08A72C84; }
    goto L_08A72C70;
L_08A72C70:;
    a0 = sp + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A72C78;
L_08A72C78:;
    ST32(s2+416, v0);
    goto L_08A72BBC;
L_08A72C80:;
    a2 = D_08AE7888 - (30856);
    goto L_08A72C84;
L_08A72C84:;
    a2 = a2 + 30856;
    goto L_08A72BE0;
L_08A72C8C:;
    a1 = D_08AE78B8 - (30904);
    a1 = a1 + 30904;
    a0 = s1 + 0;
    a2 = 5;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72CA0;
L_08A72CA0:;
    cnd_ = v0 != 0;
    a1 = D_08AE78C0 - (30912);
    if (cnd_) { goto L_08A72BD8; }
    goto L_08A72CA8;
L_08A72CA8:;
    a1 = a1 + 30912;
    a0 = s1 + 0;
    a2 = sp + 0;
    a3 = 512;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72CBC;
L_08A72CBC:;
    cnd_ = v0 == 0;
    a2 = D_08AE7888 - (30856);
    if (cnd_) { goto L_08A72C84; }
    goto L_08A72CC4;
L_08A72CC4:;
    a0 = sp + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A72CCC;
L_08A72CCC:;
    ST32(s2+408, v0);
    a1 = D_08AE7784 - (30596);
    a1 = a1 + 30596;
    a0 = s1 + 0;
    a2 = sp + 0;
    a3 = 512;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72CE8;
L_08A72CE8:;
    cnd_ = v0 == 0;
    a2 = D_08AE7888 - (30856);
    if (cnd_) { goto L_08A72C84; }
    goto L_08A72CF0;
L_08A72CF0:;
    a0 = sp + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A72CF8;
L_08A72CF8:;
    ST32(s2+412, v0);
    a1 = D_08AE7790 - (30608);
    a1 = a1 + 30608;
    a0 = s1 + 0;
    a2 = sp + 0;
    a3 = 512;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72D14;
L_08A72D14:;
    cnd_ = v0 == 0;
    a2 = D_08AE7888 - (30856);
    if (cnd_) { goto L_08A72C84; }
    goto L_08A72D1C;
L_08A72D1C:;
    a0 = sp + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A72D24;
L_08A72D24:;
    ST32(s2+416, v0);
    s6 = sp + 560;
    a1 = D_08AE7774 - (30580);
    a1 = a1 + 30580;
    a0 = s1 + 0;
    a2 = s6 + 0;
    a3 = 21;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72D44;
L_08A72D44:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(sp+560, 0); goto L_08A72D4C; }
    goto L_08A72D4C;
L_08A72D4C:;
    a1 = D_08AE78CC - (30924);
    a2 = s2 + 1160;
    a1 = a1 + 30924;
    a0 = s1 + 0;
    a3 = 25;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72D64;
L_08A72D64:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s2+1160, 0); goto L_08A72D6C; }
    goto L_08A72D6C;
L_08A72D6C:;
    v0 = (u32)(s32)LD_S8(s5+194);
    cnd_ = v0 != 0;
    t0 = s5 + 194;
    if (cnd_) { goto L_08A72D84; }
    goto L_08A72D78;
L_08A72D78:;
    v0 = (u32)(s32)LD_S8(s2+303);
    cnd_ = v0 == 0;
    t0 = s2 + 303;
    if (cnd_) { goto L_08A72EE0; }
    goto L_08A72D84;
L_08A72D84:;
    a2 = s5 + 161;
    a3 = D_08AE7718 - (30488);
    a1 = D_08AE7708 - (30472);
    a3 = a3 + 30488;
    t3 = a2 + 0;
    t2 = s5 + 128;
    t1 = s5 + 0;
    a1 = a1 + 30472;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A72DAC;
L_08A72DAC:;
    a0 = sp + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72DB4;
L_08A72DB4:;
    s0 = sp + 512;
    a1 = v0 + 0;
    a0 = sp + 0;
    a2 = s0 + 0;
    func_08A853D0(a0, a1, a2);
    goto L_08A72DC8;
L_08A72DC8:;
    a1 = D_08AE78D4 - (30932);
    a0 = s1 + 0;
    a1 = a1 + 30932;
    a2 = sp + 0;
    a3 = 512;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72DE0;
L_08A72DE0:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A72C80; }
    goto L_08A72DE8;
L_08A72DE8:;
    a1 = sp + 0;
    a2 = 32;
    v0 = func_08A87A5C(a0, a1, a2);
    goto L_08A72DF4;
L_08A72DF4:;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = D_08AE78DC - (30940); goto L_08A72ED4; }
    goto L_08A72DFC;
L_08A72DFC:;
    v0 = LD32(s2+256);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s2+416); goto L_08A72EB8; }
    goto L_08A72E08;
L_08A72E08:;
    a0 = LD32(s3+12);
    v1 = LD32(s3+16);
    v0 = 3;
    ST32(s2+496, v0);
    ST32(sp+596, v1);
    cnd_ = a0 == 0;
    ST32(sp+592, a0);
    if (cnd_) { goto L_08A72E8C; }
    goto L_08A72E24;
L_08A72E24:;
    a0 = 32;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72E2C;
L_08A72E2C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A72EA0; }
    goto L_08A72E34;
L_08A72E34:;
    ST32(v0+4, 0);
    a0 = v0 + 8;
    a1 = s6 + 0;
    ST32(v0+8, 0);
    a2 = 21;
    ST32(v0+12, 0);
    ST32(v0+16, 0);
    ST32(v0+20, 0);
    ST32(v0+24, 0);
    ST32(v0+28, 0);
    v0 = LD32(s2+416);
    ST32(s0, 0);
    ST32(s0+4, v0);
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72E6C;
L_08A72E6C:;
    a1 = sp + 592;
    a2 = s0 + 0;
    a0 = s4 + 0;
    a3 = s3 + 0;
    t0 = 0 + 0;
    v0 = func_08A71B54(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_08A72E84;
L_08A72E84:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A72B34; }
    goto L_08A72E8C;
L_08A72E8C:;
    a0 = s4 + 0;
    a1 = s3 + 0;
    func_08A75078(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A72E98;
L_08A72E98:;
    v1 = 0 + 0;
    goto L_08A72B34;
L_08A72EA0:;
    a1 = D_08AE76E4 - (30436);
    a0 = s4 + 0;
    a1 = a1 + 30436;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72EB0;
L_08A72EB0:;
    v1 = 1;
    goto L_08A72B34;
L_08A72EB8:;
    a0 = s4 + 0;
    v0 = func_08A76610(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A72EC0;
L_08A72EC0:;
    v1 = LD32(s2+416);
    ST32(v0, v1);
    a0 = LD32(s2+412);
    ST32(v0+4, a0);
    goto L_08A72E08;
L_08A72ED4:;
    a2 = a2 + 30940;
    a1 = 264;
    goto L_08A72BE4;
L_08A72EE0:;
    s0 = sp + 608;
    a1 = D_08AE7808 - (30728);
    a2 = s2 + 272;
    a3 = s2 + 324;
    a1 = a1 + 30728;
    a0 = s0 + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A72EFC;
L_08A72EFC:;
    t0 = s0 + 0;
    goto L_08A72D84;
L_08A72F04:;
    v1 = LD32(s2+1072);
    v0 = 262;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(s2+416); goto L_08A72F74; }
    goto L_08A72F14;
L_08A72F14:;
    v0 = 513;
    goto L_08A72F18;
L_08A72F18:;
    cnd_ = v1 == v0;
    a1 = D_08AE78FC - (30972);
    if (cnd_) { goto L_08A72F48; }
    goto L_08A72F20;
L_08A72F20:;
    a1 = LD32(s2+1072);
    goto L_08A72F24;
L_08A72F24:;
    a2 = s2 + 0;
    a0 = s4 + 0;
    func_08A78CEC(a0, a1, a2);
    goto L_08A72F30;
L_08A72F30:;
    a0 = s4 + 0;
    a1 = 4;
    a2 = 1;
    func_08A71AA0(a0, a1, a2, 0, 0, 0);
    goto L_08A72F40;
L_08A72F40:;
    v1 = 4;
    goto L_08A72B34;
L_08A72F48:;
    a0 = s1 + 0;
    a1 = a1 + 30972;
    a2 = sp + 0;
    a3 = 512;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A72F5C;
L_08A72F5C:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s2+1072); goto L_08A72F24; }
    goto L_08A72F64;
L_08A72F64:;
    a0 = sp + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A72F6C;
L_08A72F6C:;
    ST32(s2+416, v0);
    goto L_08A72F20;
L_08A72F74:;
    cnd_ = a1 == 0;
    v0 = 513;
    if (cnd_) { goto L_08A72F18; }
    goto L_08A72F7C;
L_08A72F7C:;
    a0 = s4 + 0;
    func_08A76830(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A72F84;
L_08A72F84:;
    ST32(s2+412, 0);
    ST32(s2+416, 0);
    goto L_08A72F20;
}

/* 08A72F90 */
u32 func_08A72F90(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A72F90:;
    sp = sp - 32;
    a2 = sp + 0;
    s0 = a0 + 0;
    s1 = LD32(a0);
    a1 = LD32(s1+492);
    v0 = func_08A78B08(a0, a1, a2, t1, t2, t3);
    goto L_08A72FB4;
L_08A72FB4:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A72FF0; }
    goto L_08A72FBC;
L_08A72FBC:;
    a3 = LD32(sp);
    a2 = D_08AE7904 - (30980);
    v0 = 4;
    a1 = 263;
    a0 = s0 + 0;
    v1 = 0 + 0;
    cnd_ = a3 == v0;
    a2 = a2 + 30980;
    if (cnd_) { goto L_08A73008; }
    goto L_08A72FDC;
L_08A72FDC:;
    cnd_ = a3 == 0;
    if (cnd_) { goto L_08A72FF4; }
    goto L_08A72FE4;
L_08A72FE4:;
    v0 = 2;
    ST32(s1+496, v0);
    v1 = 0 + 0;
    goto L_08A72FF0;
L_08A72FF0:;
    goto L_08A72FF4;
L_08A72FF4:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_08A73008:;
    func_08A78CEC(a0, a1, a2);
    goto L_08A73010;
L_08A73010:;
    a0 = s0 + 0;
    a1 = 4;
    a2 = 1;
    func_08A71AA0(a0, a1, a2, 0, 0, 0);
    goto L_08A73020;
L_08A73020:;
    v1 = 4;
    goto L_08A72FF0;
}

/* 08A73028 */
rv_t func_08A73028(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A73028:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v1 = LD32(a1+8);
    cnd_ = v1 == 0;
    s2 = LD32(a0);
    if (cnd_) { goto L_08A7305C; }
    goto L_08A73050;
L_08A73050:;
    v0 = LD32(s2+260);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A730D0; }
    goto L_08A7305C;
L_08A7305C:;
    a0 = LD32(s0+16);
    { u64 r_ = func_08A6AFBC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73064;
L_08A73064:;
    a0 = LD32(s0+24);
    ST32(s0+16, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73070;
L_08A73070:;
    v0 = LD32(s0+12);
    a0 = s1 + 0;
    a1 = s0 + 0;
    ST32(s0+24, 0);
    cnd_ = v0 == 0;
    ST32(s0+20, 0);
    if (cnd_) { goto L_08A730C0; }
    goto L_08A73088;
L_08A73088:;
    v1 = LD32(s2+260);
    v0 = 1;
    cnd_ = v1 == v0;
    a2 = 1;
    if (cnd_) { goto L_08A730B4; }
    goto L_08A73098;
L_08A73098:;
    goto L_08A7309C;
L_08A7309C:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A730B4:;
    v0 = LD32(s0+8);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A7309C; }
    goto L_08A730C0;
L_08A730C0:;
    { rv_t r_ = func_08A76870(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A730C8;
L_08A730C8:;
    a2 = 0 + 0;
    goto L_08A73098;
L_08A730D0:;
    a0 = LD32(v1+8);
    { u64 r_ = func_08A6AFBC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A730D8;
L_08A730D8:;
    v0 = LD32(s0+8);
    a0 = LD32(v0+12);
    ST32(v0+8, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A730E8;
L_08A730E8:;
    a0 = LD32(s0+8);
    ST32(a0+12, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A730F4;
L_08A730F4:;
    ST32(s0+8, 0);
    goto L_08A7305C;
}

/* 08A730FC */
float func_08A730FC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A730FC:;
    sp = sp - 32;
    v0 = 4;
    s1 = LD32(a0);
    v1 = LD32(s1+496);
    cnd_ = v1 == v0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08A7323C; }
    goto L_08A73124;
L_08A73124:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A731B4; }
    goto L_08A7312C;
L_08A7312C:;
    cnd_ = a1 == 0;
    s0 = s1 + 524;
    if (cnd_) { goto L_08A73140; }
    goto L_08A73134;
L_08A73134:;
    v0 = 3;
    cnd_ = v1 == v0;
    a2 = D_08AE792C - (31020);
    if (cnd_) { goto L_08A73274; }
    goto L_08A73140;
L_08A73140:;
    a1 = LD32(s1+492);
    goto L_08A73144;
L_08A73144:;
    t1 = D_08AE7940 - (31040);
    a2 = s0 + 0;
    a0 = s2 + 0;
    t1 = t1 + 31040;
    a3 = sp + 0;
    t0 = 1;
    v0 = func_08A717A8(a0, a1, a2, a3, t0, t1, t3);
    goto L_08A73160;
L_08A73160:;
    a0 = LD32(s1+492);
    s0 = (u32)-1;
    cnd_ = a0 == s0;
    if (cnd_) { a0 = LD32(s1+540); goto L_08A73188; }
    goto L_08A73170;
L_08A73170:;
    a1 = 2;
    v0 = sceNetInetShutdown(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A73178;
L_08A73178:;
    a0 = LD32(s1+492);
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A73180;
L_08A73180:;
    ST32(s1+492, s0);
    a0 = LD32(s1+540);
    goto L_08A73188;
L_08A73188:;
    cnd_ = a0 == s0;
    v0 = 4;
    if (cnd_) { goto L_08A731A8; }
    goto L_08A73190;
L_08A73190:;
    a1 = 2;
    v0 = sceNetInetShutdown(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A73198;
L_08A73198:;
    a0 = LD32(s1+540);
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A731A0;
L_08A731A0:;
    ST32(s1+540, s0);
    v0 = 4;
    goto L_08A731A8;
L_08A731A8:;
    ST32(s1+496, v0);
    ST32(s1+412, 0);
    ST32(s1+416, 0);
    goto L_08A731B4;
L_08A731B4:;
    a0 = LD32(s1+500);
    { u64 r_ = func_08A6AFBC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A731BC;
L_08A731BC:;
    a0 = LD32(s1+516);
    ST32(s1+500, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A731C8;
L_08A731C8:;
    a0 = LD32(s1+524);
    ST32(s1+516, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A731D4;
L_08A731D4:;
    a0 = LD32(s1+1112);
    ST32(s1+524, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A731E0;
L_08A731E0:;
    ST32(s1+1112, 0);
    a0 = LD32(s1+1128);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A731EC;
L_08A731EC:;
    v0 = LD32(s1+1084);
    cnd_ = v0 != 0;
    ST32(s1+1128, 0);
    if (cnd_) { goto L_08A73254; }
    goto L_08A731F8;
L_08A731F8:;
    s0 = LD32(s1+1100);
    goto L_08A731FC;
L_08A731FC:;
    cnd_ = s0 == 0;
    ST32(s1+1084, 0);
    if (cnd_) { goto L_08A7321C; }
    goto L_08A73204;
L_08A73204:;
    a1 = s0 + 0;
    goto L_08A73208;
L_08A73208:;
    s0 = LD32(s0+60);
    a0 = s2 + 0;
    { u64 r_ = func_08A75AF8(a1, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73214;
L_08A73214:;
    cnd_ = s0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A73208; }
    goto L_08A7321C;
L_08A7321C:;
    ST32(s1+1100, 0);
    s0 = RS_FADDR(func_08A73028, 0x08A73028u) - (12328);
    a0 = s2 + 0;
    goto L_08A73228;
L_08A73228:;
    a1 = s0 + 12328;
    a2 = 0 + 0;
    { rv_t r_ = func_08A76990(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A73234;
L_08A73234:;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A73228; }
    goto L_08A7323C;
L_08A7323C:;
    sp = sp + 32;
    return f0;
L_08A73254:;
    a1 = LD32(s1+1084);
    goto L_08A73258;
L_08A73258:;
    a0 = s2 + 0;
    func_08A75078(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A73260;
L_08A73260:;
    v0 = LD32(s1+1084);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1+1084); goto L_08A73258; }
    goto L_08A7326C;
L_08A7326C:;
    s0 = LD32(s1+1100);
    goto L_08A731FC;
L_08A73274:;
    a2 = a2 + 31020;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A73280;
L_08A73280:;
    a2 = LD32(s1+408);
    a0 = s2 + 0;
    a1 = s0 + 0;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A73290;
L_08A73290:;
    a2 = D_08AE77FC - (30716);
    a2 = a2 + 30716;
    a0 = s2 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A732A4;
L_08A732A4:;
    a1 = LD32(s1+492);
    goto L_08A73144;
}

/* 08A732AC */
u32 func_08A732AC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
L_08A732AC:;
    v0 = a0 | a1;
    v0 = v0 | a2;
    t0 = a0 + 0;
    cnd_ = v0 == 0;
    a3 = 1;
    if (cnd_) { goto L_08A7332C; }
    goto L_08A732C0;
L_08A732C0:;
    v0 = a1 | a0;
    cnd_ = (s32)v0 < 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A7332C; }
    goto L_08A732CC;
L_08A732CC:;
    cnd_ = (s32)a2 < 0;
    if (cnd_) { goto L_08A7332C; }
    goto L_08A732D4;
L_08A732D4:;
    v0 = a1 < 0xdu;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A7332C; }
    goto L_08A732E0;
L_08A732E0:;
    v1 = D_08AE7944 - (31044);
    v0 = a1 << 2;
    v1 = v1 + 31044;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A732FCu: goto L_08A732FC; case 0x08A73360u: goto L_08A73360; case 0x08A733D8u: goto L_08A733D8; case 0x08A733E0u: goto L_08A733E0; default: rs_break(0, 0x08a732f4); }
L_08A732FC:;
    cnd_ = t0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A7332C; }
    goto L_08A73304;
L_08A73304:;
    v0 = (s32)a2 < 1900;
    goto L_08A73308;
L_08A73308:;
    cnd_ = v0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A7332C; }
    goto L_08A73310;
L_08A73310:;
    v0 = (s32)a2 < 2080;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A7332C; }
    goto L_08A7331C;
L_08A7331C:;
    v0 = 2079;
    cnd_ = a2 == v0;
    if (cnd_) { v0 = (s32)a1 < 7; goto L_08A73334; }
    goto L_08A73328;
L_08A73328:;
    a3 = 1;
    goto L_08A7332C;
L_08A7332C:;
    v0 = a3 + 0;
    return v0;
L_08A73334:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A7332C; }
    goto L_08A7333C;
L_08A7333C:;
    v1 = a1 ^ 0x6;
    v0 = (s32)t0 < 7;
    v1 = v1 < 0x1u;
    v0 = v0 ^ 0x1;
    v1 = v1 & v0;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A7332C; }
    goto L_08A73358;
L_08A73358:;
    a3 = 1;
    goto L_08A7332C;
L_08A73360:;
    v0 = a2 & 0x3;
    cnd_ = v0 != 0;
    a0 = (u32)((s32)a2 >> 31);
    if (cnd_) { goto L_08A73398; }
    goto L_08A7336C;
L_08A7336C:;
    v0 = 0x51eb0000u;
    v0 = v0 | 0x851f;
    { s64 p_ = (s64)(s32)a2 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = 100;
    v0 = hi;
    v0 = (u32)((s32)v0 >> 5);
    v0 = v0 - a0;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    cnd_ = a2 != v0;
    v0 = (s32)t0 < 30;
    if (cnd_) { goto L_08A733C8; }
    goto L_08A73398;
L_08A73398:;
    v0 = 0x51eb0000u;
    v0 = v0 | 0x851f;
    { s64 p_ = (s64)(s32)a2 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = 400;
    v0 = hi;
    v0 = (u32)((s32)v0 >> 7);
    v0 = v0 - a0;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    cnd_ = a2 != v0;
    v0 = (s32)t0 < 29;
    if (cnd_) { goto L_08A733C8; }
    goto L_08A733C4;
L_08A733C4:;
    v0 = (s32)t0 < 30;
    goto L_08A733C8;
L_08A733C8:;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A7332C; }
    goto L_08A733D0;
L_08A733D0:;
    v0 = (s32)a2 < 1900;
    goto L_08A73308;
L_08A733D8:;
    v0 = (s32)t0 < 31;
    goto L_08A733C8;
L_08A733E0:;
    v0 = (s32)t0 < 32;
    goto L_08A733C8;
}

/* 08A733E8 */
u32 func_08A733E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A733E8:;
    sp = sp - 32;
    s6 = a2 + 0;
    s5 = a1 & 0xffff;
    a2 = s5 + 0;
    s4 = t0 + 0;
    s3 = a3 + 0;
    s2 = (a1 >> 16) & 0xff;
    s1 = a1 >> 24;
    a1 = s2 + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    v0 = func_08A732AC(a0, a1, a2);
    goto L_08A73438;
L_08A73438:;
    a1 = D_08AE7978 - (31096);
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = a1 + 31096;
    if (cnd_) { goto L_08A73480; }
    goto L_08A73448;
L_08A73448:;
    ST32(s6, s1);
    v0 = 0 + 0;
    ST32(s3, s2);
    ST32(s4, s5);
    goto L_08A73458;
L_08A73458:;
    sp = sp + 32;
    return v0;
L_08A73480:;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73488;
L_08A73488:;
    v0 = 2;
    goto L_08A73458;
}

/* 08A73490 */
void func_08A73490(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A73490:;
    sp = sp - 16;
    s1 = a1 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A73690; }
    goto L_08A734B0;
L_08A734B0:;
    ST8(a1+8, 0);
    a1 = LD32(s0+4);
    goto L_08A734B8;
L_08A734B8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s1 + 39; goto L_08A73680; }
    goto L_08A734C0;
L_08A734C0:;
    ST8(s1+39, 0);
    a1 = LD32(s0+8);
    goto L_08A734C8;
L_08A734C8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s1 + 60; goto L_08A73670; }
    goto L_08A734D0;
L_08A734D0:;
    ST8(s1+60, 0);
    a1 = LD32(s0+12);
    goto L_08A734D8;
L_08A734D8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s1 + 111; goto L_08A73660; }
    goto L_08A734E0;
L_08A734E0:;
    ST8(s1+111, 0);
    a1 = LD32(s0+16);
    goto L_08A734E8;
L_08A734E8:;
    cnd_ = a1 != 0;
    a0 = s1 + 142;
    if (cnd_) { goto L_08A73650; }
    goto L_08A734F0;
L_08A734F0:;
    ST8(s1+142, 0);
    a1 = LD32(s0+20);
    goto L_08A734F8;
L_08A734F8:;
    cnd_ = a1 != 0;
    a0 = s1 + 173;
    if (cnd_) { goto L_08A73640; }
    goto L_08A73500;
L_08A73500:;
    ST8(s1+173, 0);
    v0 = LD32(s0+24);
    goto L_08A73508;
L_08A73508:;
    a0 = s1 + 256;
    a1 = s0 + 28;
    ST32(s1+252, v0);
    a2 = 11;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7351C;
L_08A7351C:;
    a0 = s1 + 267;
    a1 = s0 + 39;
    a2 = 3;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7352C;
L_08A7352C:;
    f0 = BITSF(LD32(s0+44));
    v0 = (u32)-52;
    ST32(s1+272, FBITS(f0));
    f1 = BITSF(LD32(s0+48));
    cnd_ = s0 == v0;
    ST32(s1+276, FBITS(f1));
    if (cnd_) { goto L_08A73638; }
    goto L_08A73544;
L_08A73544:;
    a0 = s1 + 280;
    a1 = s0 + 52;
    a2 = 128;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73554;
L_08A73554:;
    v0 = LD32(s0+180);
    a0 = LD32(s0+192);
    a1 = LD32(s0+200);
    ST32(s1+408, v0);
    v1 = LD32(s0+184);
    ST32(s1+420, a0);
    ST32(s1+412, v1);
    v0 = LD32(s0+188);
    ST32(s1+416, v0);
    v1 = LD32(s0+196);
    cnd_ = a1 != 0;
    ST32(s1+424, v1);
    if (cnd_) { goto L_08A73624; }
    goto L_08A73584;
L_08A73584:;
    ST8(s1+428, 0);
    v1 = LD32(s0+24);
    goto L_08A7358C;
L_08A7358C:;
    a0 = LD32(s0+192);
    f0 = BITSF(LD32(s0+44));
    ST32(s1+252, v1);
    v0 = LD32(s0+180);
    ST32(s1+420, a0);
    ST32(s1+408, v0);
    v1 = LD32(s0+184);
    ST32(s1+272, FBITS(f0));
    ST32(s1+412, v1);
    v0 = LD32(s0+188);
    f0 = BITSF(LD32(s0+48));
    ST32(s1+416, v0);
    v1 = LD32(s0+204);
    v0 = LD32(s0+196);
    ST32(s1+276, FBITS(f0));
    ST32(s1+480, v1);
    a0 = LD32(s0+208);
    ST32(s1+424, v0);
    ST32(s1+484, a0);
    v0 = LD32(s0+212);
    ST32(s1+488, v0);
    v1 = LD32(s0+216);
    ST32(s1+492, v1);
    v0 = LD32(s0+220);
    ST32(s1+496, v0);
    v1 = LD32(s0+224);
    ST32(s1+500, v1);
    v0 = LD32(s0+228);
    ST32(s1+504, v0);
    v1 = LD32(s0+232);
    ST32(s1+508, v1);
    v0 = LD32(s0+236);
    ST32(s1+512, v0);
    sp = sp + 16;
    return;
L_08A73624:;
    a0 = s1 + 428;
    a2 = 51;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73630;
L_08A73630:;
    v1 = LD32(s0+24);
    goto L_08A7358C;
L_08A73638:;
    ST8(s1+280, 0);
    goto L_08A73554;
L_08A73640:;
    a2 = 76;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73648;
L_08A73648:;
    v0 = LD32(s0+24);
    goto L_08A73508;
L_08A73650:;
    a2 = 31;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73658;
L_08A73658:;
    a1 = LD32(s0+20);
    goto L_08A734F8;
L_08A73660:;
    a2 = 31;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73668;
L_08A73668:;
    a1 = LD32(s0+16);
    goto L_08A734E8;
L_08A73670:;
    a2 = 51;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73678;
L_08A73678:;
    a1 = LD32(s0+12);
    goto L_08A734D8;
L_08A73680:;
    a2 = 21;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73688;
L_08A73688:;
    a1 = LD32(s0+8);
    goto L_08A734C8;
L_08A73690:;
    a0 = a1 + 8;
    a2 = 31;
    a1 = v0 + 0;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A736A0;
L_08A736A0:;
    a1 = LD32(s0+4);
    goto L_08A734B8;
}

/* 08A736A8 */
u32 func_08A736A8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[720] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 720);
L_08A736A8:;
    sp = sp - 720;
    fp = a1 + 0;
    a1 = a2 + 0;
    s4 = a0 + 0;
    s0 = a2 + 0;
    a2 = 1;
    s7 = LD32(a0);
    v0 = func_08A78950(a0, a1, a2);
    goto L_08A736F0;
L_08A736F0:;
    cnd_ = v0 != 0;
    v1 = 4;
    if (cnd_) { goto L_08A73C2C; }
    goto L_08A736F8;
L_08A736F8:;
    a1 = D_08AE7988 - (31112);
    a1 = a1 + 31112;
    a0 = s0 + 0;
    a2 = 4;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7370C;
L_08A7370C:;
    cnd_ = v0 != 0;
    s1 = sp + 240;
    if (cnd_) { goto L_08A73CF8; }
    goto L_08A73714;
L_08A73714:;
    a1 = D_08AE7990 - (31120);
    a1 = a1 + 31120;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a3 = 64;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7372C;
L_08A7372C:;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = D_08AE799C - (31132); goto L_08A73CFC; }
    goto L_08A73734;
L_08A73734:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7373C;
L_08A7373C:;
    a1 = v0 + 0;
    a0 = s4 + 0;
    a2 = sp + 656;
    s6 = v0 + 0;
    v0 = func_08A766C4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A73750;
L_08A73750:;
    a0 = sp + 0;
    a1 = 0 + 0;
    a2 = 240;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73760;
L_08A73760:;
    v0 = sp + 352;
    v1 = sp + 384;
    t0 = sp + 320;
    a1 = D_08AE79CC - (31180);
    ST32(sp+4, v0);
    v0 = sp + 448;
    a1 = a1 + 31180;
    ST32(sp+8, v1);
    v1 = sp + 480;
    a2 = t0 + 0;
    ST32(sp+12, v0);
    a0 = s0 + 0;
    v0 = sp + 512;
    ST32(sp+16, v1);
    a3 = 31;
    v1 = sp + 592;
    ST32(sp+20, v0);
    ST32(sp+200, v1);
    ST32(sp, t0);
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A737B0;
L_08A737B0:;
    cnd_ = v0 != 0;
    a2 = LD32(sp+4);
    if (cnd_) { goto L_08A737C4; }
    goto L_08A737B8;
L_08A737B8:;
    v0 = LD32(sp);
    ST8(v0, 0);
    a2 = LD32(sp+4);
    goto L_08A737C4;
L_08A737C4:;
    a1 = D_08AE79D4 - (31188);
    a1 = a1 + 31188;
    a0 = s0 + 0;
    a3 = 21;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A737D8;
L_08A737D8:;
    cnd_ = v0 != 0;
    a2 = LD32(sp+8);
    if (cnd_) { goto L_08A737EC; }
    goto L_08A737E0;
L_08A737E0:;
    v0 = LD32(sp+4);
    ST8(v0, 0);
    a2 = LD32(sp+8);
    goto L_08A737EC;
L_08A737EC:;
    a1 = D_08AE79E4 - (31204);
    a1 = a1 + 31204;
    a0 = s0 + 0;
    a3 = 51;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73800;
L_08A73800:;
    cnd_ = v0 != 0;
    a2 = LD32(sp+12);
    if (cnd_) { goto L_08A73814; }
    goto L_08A73808;
L_08A73808:;
    v0 = LD32(sp+8);
    ST8(v0, 0);
    a2 = LD32(sp+12);
    goto L_08A73814;
L_08A73814:;
    a1 = D_08AE79EC - (31212);
    a1 = a1 + 31212;
    a0 = s0 + 0;
    a3 = 31;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73828;
L_08A73828:;
    cnd_ = v0 != 0;
    a2 = LD32(sp+16);
    if (cnd_) { goto L_08A7383C; }
    goto L_08A73830;
L_08A73830:;
    v0 = LD32(sp+12);
    ST8(v0, 0);
    a2 = LD32(sp+16);
    goto L_08A7383C;
L_08A7383C:;
    a1 = D_08AE79F8 - (31224);
    a1 = a1 + 31224;
    a0 = s0 + 0;
    a3 = 31;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73850;
L_08A73850:;
    cnd_ = v0 != 0;
    a1 = D_08AE7A04 - (31236);
    if (cnd_) { goto L_08A73860; }
    goto L_08A73858;
L_08A73858:;
    v0 = LD32(sp+16);
    ST8(v0, 0);
    goto L_08A73860;
L_08A73860:;
    a1 = a1 + 31236;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a3 = 64;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73874;
L_08A73874:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A73E2C; }
    goto L_08A7387C;
L_08A7387C:;
    v0 = (u32)-1;
    a2 = LD32(sp+20);
    goto L_08A73884;
L_08A73884:;
    a1 = D_08AE7A10 - (31248);
    a1 = a1 + 31248;
    a0 = s0 + 0;
    a3 = 76;
    ST32(sp+24, v0);
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7389C;
L_08A7389C:;
    cnd_ = v0 != 0;
    a1 = D_08AE7A1C - (31260);
    if (cnd_) { goto L_08A738AC; }
    goto L_08A738A4;
L_08A738A4:;
    v0 = LD32(sp+20);
    ST8(v0, 0);
    goto L_08A738AC;
L_08A738AC:;
    a1 = a1 + 31260;
    a2 = sp + 28;
    a0 = s0 + 0;
    a3 = 11;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A738C0;
L_08A738C0:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(sp+28, 0); goto L_08A738C8; }
    goto L_08A738C8;
L_08A738C8:;
    a1 = D_08AE7A28 - (31272);
    a1 = a1 + 31272;
    a2 = sp + 39;
    a0 = s0 + 0;
    a3 = 3;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A738E0;
L_08A738E0:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(sp+39, 0); goto L_08A738E8; }
    goto L_08A738E8;
L_08A738E8:;
    a1 = D_08AE7A38 - (31288);
    a1 = a1 + 31288;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a3 = 64;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73900;
L_08A73900:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A73E10; }
    goto L_08A73908;
L_08A73908:;
    ST32(sp+44, 0);
    goto L_08A7390C;
L_08A7390C:;
    a1 = D_08AE7A40 - (31296);
    a1 = a1 + 31296;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a3 = 64;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73924;
L_08A73924:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A73DF4; }
    goto L_08A7392C;
L_08A7392C:;
    ST32(sp+48, 0);
    goto L_08A73930;
L_08A73930:;
    a1 = D_08AE7A48 - (31304);
    a1 = a1 + 31304;
    a2 = sp + 52;
    a0 = s0 + 0;
    a3 = 128;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73948;
L_08A73948:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(sp+52, 0); goto L_08A73950; }
    goto L_08A73950;
L_08A73950:;
    a1 = D_08AE7A50 - (31312);
    a1 = a1 + 31312;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a3 = 64;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73968;
L_08A73968:;
    cnd_ = v0 != 0;
    a1 = D_08AE7A5C - (31324);
    if (cnd_) { goto L_08A73DC4; }
    goto L_08A73970;
L_08A73970:;
    ST32(sp+180, 0);
    ST32(sp+184, 0);
    ST32(sp+188, 0);
    goto L_08A7397C;
L_08A7397C:;
    a1 = a1 + 31324;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a3 = 64;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73990;
L_08A73990:;
    cnd_ = v0 == 0;
    v0 = 1282;
    if (cnd_) { goto L_08A739B8; }
    goto L_08A73998;
L_08A73998:;
    v1 = (u32)(s32)LD_S8(sp+240);
    v0 = 48;
    cnd_ = v1 == v0;
    v0 = 1280;
    if (cnd_) { goto L_08A739B8; }
    goto L_08A739A8;
L_08A739A8:;
    v0 = 49;
    cnd_ = v1 == v0;
    v0 = 1281;
    if (cnd_) { goto L_08A739B8; }
    goto L_08A739B4;
L_08A739B4:;
    v0 = 1282;
    goto L_08A739B8;
L_08A739B8:;
    a1 = D_08AE7A64 - (31332);
    a1 = a1 + 31332;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a3 = 64;
    ST32(sp+192, v0);
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A739D4;
L_08A739D4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A73DB4; }
    goto L_08A739DC;
L_08A739DC:;
    v0 = (u32)-1;
    a2 = LD32(sp+200);
    goto L_08A739E4;
L_08A739E4:;
    a1 = D_08AE7A6C - (31340);
    a1 = a1 + 31340;
    a0 = s0 + 0;
    a3 = 51;
    ST32(sp+196, v0);
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A739FC;
L_08A739FC:;
    cnd_ = v0 != 0;
    a1 = D_08AE7A74 - (31348);
    if (cnd_) { goto L_08A73A0C; }
    goto L_08A73A04;
L_08A73A04:;
    v0 = LD32(sp+200);
    ST8(v0, 0);
    goto L_08A73A0C;
L_08A73A0C:;
    a1 = a1 + 31348;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a3 = 64;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73A20;
L_08A73A20:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A73DA4; }
    goto L_08A73A28;
L_08A73A28:;
    ST32(sp+204, 0);
    goto L_08A73A2C;
L_08A73A2C:;
    a1 = D_08AE7A7C - (31356);
    a1 = a1 + 31356;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a3 = 64;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73A44;
L_08A73A44:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A73D94; }
    goto L_08A73A4C;
L_08A73A4C:;
    ST32(sp+208, 0);
    goto L_08A73A50;
L_08A73A50:;
    a1 = D_08AE7A84 - (31364);
    a1 = a1 + 31364;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a3 = 64;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73A68;
L_08A73A68:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A73D84; }
    goto L_08A73A70;
L_08A73A70:;
    ST32(sp+212, 0);
    goto L_08A73A74;
L_08A73A74:;
    a1 = D_08AE7A8C - (31372);
    a1 = a1 + 31372;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a3 = 64;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73A8C;
L_08A73A8C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A73D74; }
    goto L_08A73A94;
L_08A73A94:;
    ST32(sp+216, 0);
    goto L_08A73A98;
L_08A73A98:;
    a1 = D_08AE7A94 - (31380);
    a1 = a1 + 31380;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a3 = 64;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73AB0;
L_08A73AB0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A73D64; }
    goto L_08A73AB8;
L_08A73AB8:;
    ST32(sp+220, 0);
    goto L_08A73ABC;
L_08A73ABC:;
    a1 = D_08AE7A9C - (31388);
    a1 = a1 + 31388;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a3 = 64;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73AD4;
L_08A73AD4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A73D54; }
    goto L_08A73ADC;
L_08A73ADC:;
    ST32(sp+224, 0);
    goto L_08A73AE0;
L_08A73AE0:;
    a1 = D_08AE7AA4 - (31396);
    a1 = a1 + 31396;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a3 = 64;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73AF8;
L_08A73AF8:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A73D44; }
    goto L_08A73B00;
L_08A73B00:;
    ST32(sp+228, 0);
    goto L_08A73B04;
L_08A73B04:;
    a1 = D_08AE7AAC - (31404);
    a1 = a1 + 31404;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a3 = 64;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73B1C;
L_08A73B1C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A73D34; }
    goto L_08A73B24;
L_08A73B24:;
    ST32(sp+232, 0);
    goto L_08A73B28;
L_08A73B28:;
    a1 = D_08AE7AB4 - (31412);
    a1 = a1 + 31412;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a3 = 64;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73B40;
L_08A73B40:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A73D24; }
    goto L_08A73B48;
L_08A73B48:;
    ST32(sp+236, 0);
    goto L_08A73B4C;
L_08A73B4C:;
    a1 = D_08AE7ABC - (31420);
    a0 = s0 + 0;
    a1 = a1 + 31420;
    a2 = s1 + 0;
    a3 = 64;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73B64;
L_08A73B64:;
    cnd_ = v0 == 0;
    a2 = D_08AE799C - (31132);
    if (cnd_) { goto L_08A73CFC; }
    goto L_08A73B6C;
L_08A73B6C:;
    s0 = LD32(s7+1100);
    cnd_ = s0 == 0;
    s3 = LD32(s7+256);
    if (cnd_) { goto L_08A73CF0; }
    goto L_08A73B78;
L_08A73B78:;
    v1 = LD32(sp+656);
    s2 = 101;
    s5 = 102;
    v0 = LD32(s0+12);
    goto L_08A73B88;
L_08A73B88:;
    cnd_ = v0 == s6;
    if (cnd_) { v0 = LD32(s0); goto L_08A73CBC; }
    goto L_08A73B90;
L_08A73B90:;
    s0 = LD32(s0+60);
    goto L_08A73B94;
L_08A73B94:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD32(s0+12); goto L_08A73B88; }
    goto L_08A73B9C;
L_08A73B9C:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A73BB0; }
    goto L_08A73BA4;
L_08A73BA4:;
    v0 = LD32(s7+256);
    cnd_ = v0 != 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08A73CAC; }
    goto L_08A73BB0;
L_08A73BB0:;
    cnd_ = s3 != 0;
    v0 = LD32(sp+656);
    if (cnd_) { goto L_08A73C8C; }
    goto L_08A73BB8;
L_08A73BB8:;
    v0 = LD32(s7+256);
    cnd_ = v0 != 0;
    a1 = LD32(sp+656);
    if (cnd_) { goto L_08A73C78; }
    goto L_08A73BC4;
L_08A73BC4:;
    v1 = LD32(fp+12);
    goto L_08A73BC8;
L_08A73BC8:;
    v0 = LD32(fp+16);
    ST32(sp+304, v1);
    cnd_ = v1 == 0;
    ST32(sp+308, v0);
    if (cnd_) { goto L_08A73C1C; }
    goto L_08A73BD8;
L_08A73BD8:;
    a0 = 516;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73BE0;
L_08A73BE0:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A73C60; }
    goto L_08A73BE8;
L_08A73BE8:;
    a1 = v0 + 0;
    a0 = sp + 0;
    func_08A73490(a0, a1);
    goto L_08A73BF4;
L_08A73BF4:;
    ST32(s0+4, s6);
    a1 = sp + 304;
    a2 = s0 + 0;
    ST32(s0, 0);
    a0 = s4 + 0;
    a3 = fp + 0;
    t0 = 0 + 0;
    v0 = func_08A71B54(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_08A73C14;
L_08A73C14:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A73C2C; }
    goto L_08A73C1C;
L_08A73C1C:;
    a0 = s4 + 0;
    a1 = fp + 0;
    func_08A75078(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A73C28;
L_08A73C28:;
    v1 = 0 + 0;
    goto L_08A73C2C;
L_08A73C2C:;
    v0 = v1 + 0;
    sp = sp + 720;
    return v0;
L_08A73C60:;
    a1 = D_08AE7AC4 - (31428);
    a0 = s4 + 0;
    a1 = a1 + 31428;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73C70;
L_08A73C70:;
    v1 = 1;
    goto L_08A73C2C;
L_08A73C78:;
    a0 = s4 + 0;
    a2 = sp + 0;
    func_08A74B3C(a0, a1, a2, 0, 0, 0);
    goto L_08A73C84;
L_08A73C84:;
    v1 = LD32(fp+12);
    goto L_08A73BC8;
L_08A73C8C:;
    a0 = LD32(v0+24);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73C94;
L_08A73C94:;
    s0 = LD32(sp+656);
    a0 = s1 + 0;
    ST32(s0+24, 0);
    { u64 r_ = func_08A6B560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73CA4;
L_08A73CA4:;
    ST32(s0+24, v0);
    goto L_08A73BB8;
L_08A73CAC:;
    a1 = s6 + 0;
    v0 = func_08A76610(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A73CB4;
L_08A73CB4:;
    ST32(sp+656, v0);
    goto L_08A73BB0;
L_08A73CBC:;
    cnd_ = v0 != s2;
    if (cnd_) { s0 = LD32(s0+60); goto L_08A73B94; }
    goto L_08A73CC4;
L_08A73CC4:;
    a0 = s4 + 0;
    a1 = s6 + 0;
    cnd_ = v1 == 0;
    s3 = 1;
    if (cnd_) { goto L_08A73CDC; }
    goto L_08A73CD4;
L_08A73CD4:;
    ST32(s0, s5);
    goto L_08A73B90;
L_08A73CDC:;
    v0 = func_08A76610(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A73CE4;
L_08A73CE4:;
    ST32(sp+656, v0);
    v1 = v0 + 0;
    goto L_08A73CD4;
L_08A73CF0:;
    v1 = LD32(sp+656);
    goto L_08A73B9C;
L_08A73CF8:;
    a2 = D_08AE799C - (31132);
    goto L_08A73CFC;
L_08A73CFC:;
    a2 = a2 + 31132;
    a1 = 1;
    a0 = s4 + 0;
    func_08A78CEC(a0, a1, a2);
    goto L_08A73D0C;
L_08A73D0C:;
    a0 = s4 + 0;
    a1 = 3;
    a2 = 1;
    func_08A71AA0(a0, a1, a2, 0, 0, 0);
    goto L_08A73D1C;
L_08A73D1C:;
    v1 = 3;
    goto L_08A73C2C;
L_08A73D24:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A73D2C;
L_08A73D2C:;
    ST32(sp+236, v0);
    goto L_08A73B4C;
L_08A73D34:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A73D3C;
L_08A73D3C:;
    ST32(sp+232, v0);
    goto L_08A73B28;
L_08A73D44:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A73D4C;
L_08A73D4C:;
    ST32(sp+228, v0);
    goto L_08A73B04;
L_08A73D54:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A73D5C;
L_08A73D5C:;
    ST32(sp+224, v0);
    goto L_08A73AE0;
L_08A73D64:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A73D6C;
L_08A73D6C:;
    ST32(sp+220, v0);
    goto L_08A73ABC;
L_08A73D74:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A73D7C;
L_08A73D7C:;
    ST32(sp+216, v0);
    goto L_08A73A98;
L_08A73D84:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A73D8C;
L_08A73D8C:;
    ST32(sp+212, v0);
    goto L_08A73A74;
L_08A73D94:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A73D9C;
L_08A73D9C:;
    ST32(sp+208, v0);
    goto L_08A73A50;
L_08A73DA4:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A73DAC;
L_08A73DAC:;
    ST32(sp+204, v0);
    goto L_08A73A2C;
L_08A73DB4:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A73DBC;
L_08A73DBC:;
    a2 = LD32(sp+200);
    goto L_08A739E4;
L_08A73DC4:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A73DCC;
L_08A73DCC:;
    a1 = v0 + 0;
    a2 = sp + 180;
    a3 = sp + 184;
    t0 = sp + 188;
    a0 = s4 + 0;
    v0 = func_08A733E8(a0, a1, a2, a3, t0);
    goto L_08A73DE4;
L_08A73DE4:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A73C2C; }
    goto L_08A73DEC;
L_08A73DEC:;
    a1 = D_08AE7A5C - (31324);
    goto L_08A7397C;
L_08A73DF4:;
    a0 = s1 + 0;
    { u64 r_ = func_08A85F4C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73DFC;
L_08A73DFC:;
    a0 = v0 + 0;
    a1 = v1 + 0;
    { rv_t r_ = func_08A93FCC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A73E08;
L_08A73E08:;
    ST32(sp+48, FBITS(f0));
    goto L_08A73930;
L_08A73E10:;
    a0 = s1 + 0;
    { u64 r_ = func_08A85F4C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A73E18;
L_08A73E18:;
    a0 = v0 + 0;
    a1 = v1 + 0;
    { rv_t r_ = func_08A93FCC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A73E24;
L_08A73E24:;
    ST32(sp+44, FBITS(f0));
    goto L_08A7390C;
L_08A73E2C:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A73E34;
L_08A73E34:;
    a2 = LD32(sp+20);
    goto L_08A73884;
}

/* 08A73E3C */
void func_08A73E3C(u32 a0, u32 a1)
{
    u32 v0 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A73E3C:;
    sp = sp - 16;
    a2 = D_08AE7AD4 - (31444);
    a2 = a2 + 31444;
    s2 = a1 + 0;
    s1 = LD32(a0);
    v0 = LD32(s1+1120);
    cnd_ = (s32)v0 <= 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A73EAC; }
    goto L_08A73E6C;
L_08A73E6C:;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A73E74;
L_08A73E74:;
    a2 = LD32(s1+408);
    a0 = s0 + 0;
    a1 = s2 + 0;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A73E84;
L_08A73E84:;
    a2 = LD32(s1+1112);
    a0 = s0 + 0;
    a1 = s2 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A73E94;
L_08A73E94:;
    a2 = D_08AE7AEC - (31468);
    a2 = a2 + 31468;
    a0 = s0 + 0;
    a1 = s2 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A73EA8;
L_08A73EA8:;
    ST32(s1+1120, 0);
    goto L_08A73EAC;
L_08A73EAC:;
    v0 = LD32(s1+1136);
    a2 = D_08AE7AF4 - (31476);
    a0 = s0 + 0;
    a1 = s2 + 0;
    cnd_ = (s32)v0 <= 0;
    a2 = a2 + 31476;
    if (cnd_) { goto L_08A73F04; }
    goto L_08A73EC4;
L_08A73EC4:;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A73ECC;
L_08A73ECC:;
    a2 = LD32(s1+408);
    a0 = s0 + 0;
    a1 = s2 + 0;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A73EDC;
L_08A73EDC:;
    a2 = LD32(s1+1128);
    a0 = s0 + 0;
    a1 = s2 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A73EEC;
L_08A73EEC:;
    a2 = D_08AE7AEC - (31468);
    a0 = s0 + 0;
    a1 = s2 + 0;
    a2 = a2 + 31468;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A73F00;
L_08A73F00:;
    ST32(s1+1136, 0);
    goto L_08A73F04;
L_08A73F04:;
    v0 = 0 + 0;
    sp = sp + 16;
    return;
}

/* 08A73F20 */
u32 func_08A73F20(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A73F20:;
    sp = sp - 16;
    s2 = a2 + 0;
    a2 = a1 + 0;
    s1 = a0 + 0;
    s0 = LD32(a0);
    s0 = s0 + 1112;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A73F50;
L_08A73F50:;
    v1 = v0 + 0;
    a0 = s1 + 0;
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    a2 = s2 + 0;
    if (cnd_) { goto L_08A73F80; }
    goto L_08A73F64;
L_08A73F64:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A73F80:;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A73F88;
L_08A73F88:;
    v1 = v0 + 0;
    goto L_08A73F64;
}

/* 08A73F90 */
u32 func_08A73F90(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A73F90:;
    sp = sp - 16;
    s2 = a2 + 0;
    a2 = a1 + 0;
    s1 = a0 + 0;
    s0 = LD32(a0);
    s0 = s0 + 1128;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A73FC0;
L_08A73FC0:;
    v1 = v0 + 0;
    a0 = s1 + 0;
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    a2 = s2 + 0;
    if (cnd_) { goto L_08A73FF0; }
    goto L_08A73FD4;
L_08A73FD4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A73FF0:;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A73FF8;
L_08A73FF8:;
    v1 = v0 + 0;
    goto L_08A73FD4;
}

/* 08A74000 */
u32 func_08A74000(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, ra = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A74000:;
    a1 = a1 - 1798;
    sp = sp - 32;
    v0 = a1 < 0x19u;
    s0 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A74280; }
    goto L_08A7401C;
L_08A7401C:;
    v1 = D_08AE7BC8 - (31688);
    v0 = a1 << 2;
    v1 = v1 + 31688;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A74038u: goto L_08A74038; case 0x08A740A0u: goto L_08A740A0; case 0x08A740C0u: goto L_08A740C0; case 0x08A7413Cu: goto L_08A7413C; case 0x08A74168u: goto L_08A74168; case 0x08A74188u: goto L_08A74188; case 0x08A741B8u: goto L_08A741B8; case 0x08A741E8u: goto L_08A741E8; case 0x08A74218u: goto L_08A74218; case 0x08A74238u: goto L_08A74238; case 0x08A74258u: goto L_08A74258; case 0x08A74280u: goto L_08A74280; case 0x08A74290u: goto L_08A74290; case 0x08A742B0u: goto L_08A742B0; case 0x08A742D0u: goto L_08A742D0; case 0x08A742F0u: goto L_08A742F0; case 0x08A74310u: goto L_08A74310; case 0x08A74330u: goto L_08A74330; case 0x08A74350u: goto L_08A74350; default: rs_break(0, 0x08a74030); }
L_08A74038:;
    a1 = D_08AE7B08 - (31496);
    a0 = s0 + 0;
    cnd_ = (s32)a2 < 0;
    a1 = a1 + 31496;
    if (cnd_) { goto L_08A74090; }
    goto L_08A74048;
L_08A74048:;
    a1 = D_08AE7B1C - (31516);
    a1 = a1 + 31516;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A74058;
L_08A74058:;
    a1 = D_08AE7A1C - (31260);
    a0 = s0 + 0;
    a1 = a1 + 31260;
    goto L_08A74064;
L_08A74064:;
    a2 = sp + 0;
    goto L_08A74068;
L_08A74068:;
    v0 = func_08A73F20(a0, a1, a2);
    goto L_08A74070;
L_08A74070:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A7407C; }
    goto L_08A74078;
L_08A74078:;
    v1 = 0 + 0;
    goto L_08A7407C;
L_08A7407C:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_08A74090:;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74098;
L_08A74098:;
    v1 = 2;
    goto L_08A7407C;
L_08A740A0:;
    a1 = D_08AE7B1C - (31516);
    a1 = a1 + 31516;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A740B0;
L_08A740B0:;
    a1 = D_08AE7A04 - (31236);
    a0 = s0 + 0;
    a1 = a1 + 31236;
    goto L_08A74064;
L_08A740C0:;
    v0 = 1281;
    cnd_ = a2 == v0;
    v0 = (s32)a2 < 1282;
    if (cnd_) { goto L_08A74124; }
    goto L_08A740CC;
L_08A740CC:;
    cnd_ = v0 == 0;
    v0 = 1282;
    if (cnd_) { goto L_08A74104; }
    goto L_08A740D4;
L_08A740D4:;
    v0 = 1280;
    cnd_ = a2 == v0;
    if (cnd_) { a1 = D_08AE7A5C - (31324); goto L_08A740F0; }
    goto L_08A740E0;
L_08A740E0:;
    a1 = D_08AE7B20 - (31520);
    goto L_08A740E4;
L_08A740E4:;
    a0 = s0 + 0;
    a1 = a1 + 31520;
    goto L_08A74090;
L_08A740F0:;
    a2 = D_08AE7B30 - (31536);
    a0 = s0 + 0;
    a1 = a1 + 31324;
    a2 = a2 + 31536;
    goto L_08A74068;
L_08A74104:;
    cnd_ = a2 != v0;
    if (cnd_) { a1 = D_08AE7B20 - (31520); goto L_08A740E4; }
    goto L_08A7410C;
L_08A7410C:;
    a1 = D_08AE7A5C - (31324);
    a2 = D_08AE7B34 - (31540);
    a0 = s0 + 0;
    a1 = a1 + 31324;
    a2 = a2 + 31540;
    goto L_08A74068;
L_08A74124:;
    a1 = D_08AE7A5C - (31324);
    a2 = D_08AE7B38 - (31544);
    a0 = s0 + 0;
    a1 = a1 + 31324;
    a2 = a2 + 31544;
    goto L_08A74068;
L_08A7413C:;
    a1 = D_08AE7B1C - (31516);
    a1 = a1 + 31516;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7414C;
L_08A7414C:;
    a1 = D_08AE7B3C - (31548);
    a0 = s0 + 0;
    a1 = a1 + 31548;
    goto L_08A74158;
L_08A74158:;
    a2 = sp + 0;
    v0 = func_08A73F90(a0, a1, a2);
    goto L_08A74160;
L_08A74160:;
    goto L_08A74070;
L_08A74168:;
    a1 = D_08AE7B1C - (31516);
    a1 = a1 + 31516;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A74178;
L_08A74178:;
    a1 = D_08AE7B4C - (31564);
    a0 = s0 + 0;
    a1 = a1 + 31564;
    goto L_08A74158;
L_08A74188:;
    v0 = (u32)((s32)a2 >> 31);
    v0 = v0 >> 28;
    v0 = a2 + v0;
    a1 = D_08AE7B1C - (31516);
    a1 = a1 + 31516;
    a0 = sp + 0;
    a2 = (u32)((s32)v0 >> 4);
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A741A8;
L_08A741A8:;
    a1 = D_08AE7B58 - (31576);
    a0 = s0 + 0;
    a1 = a1 + 31576;
    goto L_08A74158;
L_08A741B8:;
    v0 = (u32)((s32)a2 >> 31);
    v0 = v0 >> 30;
    v0 = a2 + v0;
    a1 = D_08AE7B1C - (31516);
    a1 = a1 + 31516;
    a0 = sp + 0;
    a2 = (u32)((s32)v0 >> 2);
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A741D8;
L_08A741D8:;
    a1 = D_08AE7B64 - (31588);
    a0 = s0 + 0;
    a1 = a1 + 31588;
    goto L_08A74158;
L_08A741E8:;
    v0 = (u32)((s32)a2 >> 31);
    v0 = v0 >> 30;
    v0 = a2 + v0;
    a1 = D_08AE7B1C - (31516);
    a1 = a1 + 31516;
    a0 = sp + 0;
    a2 = (u32)((s32)v0 >> 2);
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A74208;
L_08A74208:;
    a1 = D_08AE7B74 - (31604);
    a0 = s0 + 0;
    a1 = a1 + 31604;
    goto L_08A74158;
L_08A74218:;
    a1 = D_08AE7B1C - (31516);
    a1 = a1 + 31516;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A74228;
L_08A74228:;
    a1 = D_08AE7B84 - (31620);
    a0 = s0 + 0;
    a1 = a1 + 31620;
    goto L_08A74158;
L_08A74238:;
    a1 = D_08AE7B1C - (31516);
    a1 = a1 + 31516;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A74248;
L_08A74248:;
    a1 = D_08AE7B94 - (31636);
    a0 = s0 + 0;
    a1 = a1 + 31636;
    goto L_08A74158;
L_08A74258:;
    v0 = 1;
    a1 = D_08AE7B1C - (31516);
    a1 = a1 + 31516;
    a0 = sp + 0;
    if (a2 != 0) a2 = v0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A74270;
L_08A74270:;
    a1 = D_08AE7BA8 - (31656);
    a0 = s0 + 0;
    a1 = a1 + 31656;
    goto L_08A74158;
L_08A74280:;
    a1 = D_08AE7BB8 - (31672);
    a0 = s0 + 0;
    a1 = a1 + 31672;
    goto L_08A74090;
L_08A74290:;
    a1 = D_08AE7B1C - (31516);
    a1 = a1 + 31516;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A742A0;
L_08A742A0:;
    a1 = D_08AE7A74 - (31348);
    a0 = s0 + 0;
    a1 = a1 + 31348;
    goto L_08A74064;
L_08A742B0:;
    a1 = D_08AE7B1C - (31516);
    a1 = a1 + 31516;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A742C0;
L_08A742C0:;
    a1 = D_08AE7A7C - (31356);
    a0 = s0 + 0;
    a1 = a1 + 31356;
    goto L_08A74064;
L_08A742D0:;
    a1 = D_08AE7B1C - (31516);
    a1 = a1 + 31516;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A742E0;
L_08A742E0:;
    a1 = D_08AE7A84 - (31364);
    a0 = s0 + 0;
    a1 = a1 + 31364;
    goto L_08A74064;
L_08A742F0:;
    a1 = D_08AE7B1C - (31516);
    a1 = a1 + 31516;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A74300;
L_08A74300:;
    a1 = D_08AE7A8C - (31372);
    a0 = s0 + 0;
    a1 = a1 + 31372;
    goto L_08A74064;
L_08A74310:;
    a1 = D_08AE7B1C - (31516);
    a1 = a1 + 31516;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A74320;
L_08A74320:;
    a1 = D_08AE7A94 - (31380);
    a0 = s0 + 0;
    a1 = a1 + 31380;
    goto L_08A74064;
L_08A74330:;
    a1 = D_08AE7B1C - (31516);
    a1 = a1 + 31516;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A74340;
L_08A74340:;
    a1 = D_08AE7A9C - (31388);
    a0 = s0 + 0;
    a1 = a1 + 31388;
    goto L_08A74064;
L_08A74350:;
    a1 = D_08AE7B1C - (31516);
    a1 = a1 + 31516;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A74360;
L_08A74360:;
    a1 = D_08AE7AA4 - (31396);
    a0 = s0 + 0;
    a1 = a1 + 31396;
    goto L_08A74064;
L_08A74370:;
    sp = sp - 368;
    ST32(sp+344, s2);
    s2 = a0 + 0;
    ST32(sp+336, s0);
    s0 = a2 + 0;
    ST32(sp+356, ra);
    ST32(sp+352, s4);
    ST32(sp+348, s3);
    ST32(sp+340, s1);
    cnd_ = a2 == 0;
    s1 = LD32(a0);
    if (cnd_) { goto L_08A74434; }
    goto L_08A7439C;
L_08A7439C:;
    a1 = a1 - 1792;
    v0 = a1 < 0x1fu;
    cnd_ = v0 == 0;
    v0 = a1 << 2;
    if (cnd_) { goto L_08A74754; }
    goto L_08A743AC;
L_08A743AC:;
    v1 = D_08AE7C94 - (31892);
    v1 = v1 + 31892;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A743C4u: goto L_08A743C4; case 0x08A7444Cu: goto L_08A7444C; case 0x08A74484u: goto L_08A74484; case 0x08A744D0u: goto L_08A744D0; case 0x08A74578u: goto L_08A74578; case 0x08A74598u: goto L_08A74598; case 0x08A745B8u: goto L_08A745B8; case 0x08A745D8u: goto L_08A745D8; case 0x08A745F8u: goto L_08A745F8; case 0x08A74618u: goto L_08A74618; case 0x08A74654u: goto L_08A74654; case 0x08A746A8u: goto L_08A746A8; case 0x08A746CCu: goto L_08A746CC; case 0x08A746E4u: goto L_08A746E4; case 0x08A74704u: goto L_08A74704; case 0x08A7471Cu: goto L_08A7471C; case 0x08A7473Cu: goto L_08A7473C; case 0x08A74754u: goto L_08A74754; case 0x08A74764u: goto L_08A74764; case 0x08A7477Cu: goto L_08A7477C; case 0x08A74794u: goto L_08A74794; case 0x08A747B4u: goto L_08A747B4; case 0x08A747D4u: goto L_08A747D4; case 0x08A747F4u: goto L_08A747F4; case 0x08A74814u: goto L_08A74814; case 0x08A74834u: goto L_08A74834; case 0x08A74854u: goto L_08A74854; case 0x08A74874u: goto L_08A74874; case 0x08A74894u: goto L_08A74894; default: rs_break(0, 0x08a743bc); }
L_08A743C4:;
    v0 = (u32)(s32)LD_S8(a2);
    cnd_ = v0 == 0;
    a1 = a2 + 0;
    if (cnd_) { goto L_08A74430; }
    goto L_08A743D0;
L_08A743D0:;
    a0 = sp + 0;
    a2 = 31;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A743DC;
L_08A743DC:;
    a0 = s1 + 272;
    a1 = sp + 0;
    a2 = 31;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A743EC;
L_08A743EC:;
    a1 = D_08AE79CC - (31180);
    a0 = s2 + 0;
    a1 = a1 + 31180;
    goto L_08A743F8;
L_08A743F8:;
    a2 = sp + 0;
    v0 = func_08A73F20(a0, a1, a2);
    goto L_08A74400;
L_08A74400:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A7440C; }
    goto L_08A74408;
L_08A74408:;
    v1 = 0 + 0;
    goto L_08A7440C;
L_08A7440C:;
    ra = LD32(sp+356);
    s4 = LD32(sp+352);
    s3 = LD32(sp+348);
    s2 = LD32(sp+344);
    s1 = LD32(sp+340);
    s0 = LD32(sp+336);
    v0 = v1 + 0;
    sp = sp + 368;
    return v0;
L_08A74430:;
    a0 = s2 + 0;
    goto L_08A74434;
L_08A74434:;
    a1 = D_08AE7C2C - (31788);
    a1 = a1 + 31788;
    goto L_08A7443C;
L_08A7443C:;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74444;
L_08A74444:;
    v1 = 2;
    goto L_08A7440C;
L_08A7444C:;
    v0 = (u32)(s32)LD_S8(a2);
    cnd_ = v0 == 0;
    a1 = a2 + 0;
    if (cnd_) { goto L_08A74430; }
    goto L_08A74458;
L_08A74458:;
    a0 = sp + 0;
    a2 = 21;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74464;
L_08A74464:;
    a0 = s1 + 303;
    a1 = sp + 0;
    a2 = 21;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74474;
L_08A74474:;
    a1 = D_08AE79D4 - (31188);
    a0 = s2 + 0;
    a1 = a1 + 31188;
    goto L_08A743F8;
L_08A74484:;
    v0 = (u32)(s32)LD_S8(a2);
    cnd_ = v0 == 0;
    a1 = a2 + 0;
    if (cnd_) { goto L_08A74430; }
    goto L_08A74490;
L_08A74490:;
    a0 = sp + 0;
    a2 = 51;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7449C;
L_08A7449C:;
    a0 = sp + 0;
    func_08A6B5C0(a0);
    goto L_08A744A4;
L_08A744A4:;
    a0 = s1 + 324;
    a1 = sp + 0;
    a2 = 51;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A744B4;
L_08A744B4:;
    a1 = D_08AE79E4 - (31204);
    a0 = s2 + 0;
    a1 = a1 + 31204;
    goto L_08A744C0;
L_08A744C0:;
    a2 = sp + 0;
    v0 = func_08A73F90(a0, a1, a2);
    goto L_08A744C8;
L_08A744C8:;
    goto L_08A74400;
L_08A744D0:;
    v0 = (u32)(s32)LD_S8(a2);
    cnd_ = v0 == 0;
    a1 = a2 + 0;
    if (cnd_) { goto L_08A74430; }
    goto L_08A744DC;
L_08A744DC:;
    s0 = s1 + 375;
    a0 = sp + 0;
    a2 = 31;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A744EC;
L_08A744EC:;
    a1 = sp + 0;
    a2 = 31;
    a0 = s0 + 0;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A744FC;
L_08A744FC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74504;
L_08A74504:;
    a0 = 0x79700000u;
    s3 = v0 + 0;
    a0 = a0 | 0x7367;
    func_08A6B740(a0);
    goto L_08A74514;
L_08A74514:;
    s1 = 0 + 0;
    cnd_ = (s32)s3 <= 0;
    s4 = sp + 256;
    if (cnd_) { goto L_08A7454C; }
    goto L_08A74520;
L_08A74520:;
    a0 = 0 + 0;
    a1 = 255;
    v0 = func_08A6B75C(a0, a1);
    goto L_08A7452C;
L_08A7452C:;
    v1 = LD_U8(s0);
    a1 = s4 + s1;
    s1 = s1 + 1;
    v0 = v0 ^ v1;
    a0 = (s32)s1 < (s32)s3;
    ST8(a1, v0);
    cnd_ = a0 != 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_08A74520; }
    goto L_08A7454C;
L_08A7454C:;
    v0 = s4 + s1;
    ST8(v0, 0);
    a0 = s4 + 0;
    a1 = sp + 288;
    a2 = s3 + 0;
    a3 = 1;
    func_08A6B844(a0, a1, a2, a3);
    goto L_08A74568;
L_08A74568:;
    a1 = D_08AE7C3C - (31804);
    a0 = s2 + 0;
    a1 = a1 + 31804;
    goto L_08A744C0;
L_08A74578:;
    a1 = a2 + 0;
    a0 = sp + 0;
    a2 = 31;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74588;
L_08A74588:;
    a1 = D_08AE79EC - (31212);
    a0 = s2 + 0;
    a1 = a1 + 31212;
    goto L_08A743F8;
L_08A74598:;
    a1 = a2 + 0;
    a0 = sp + 0;
    a2 = 31;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A745A8;
L_08A745A8:;
    a1 = D_08AE79F8 - (31224);
    a0 = s2 + 0;
    a1 = a1 + 31224;
    goto L_08A743F8;
L_08A745B8:;
    a1 = a2 + 0;
    a0 = sp + 0;
    a2 = 256;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A745C8;
L_08A745C8:;
    a1 = D_08AE7A04 - (31236);
    a0 = s2 + 0;
    a1 = a1 + 31236;
    goto L_08A743F8;
L_08A745D8:;
    a1 = a2 + 0;
    a0 = sp + 0;
    a2 = 76;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A745E8;
L_08A745E8:;
    a1 = D_08AE7A10 - (31248);
    a0 = s2 + 0;
    a1 = a1 + 31248;
    goto L_08A743F8;
L_08A745F8:;
    a1 = a2 + 0;
    a0 = sp + 0;
    a2 = 11;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74608;
L_08A74608:;
    a1 = D_08AE7A1C - (31260);
    a0 = s2 + 0;
    a1 = a1 + 31260;
    goto L_08A743F8;
L_08A74618:;
    a0 = a2 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74620;
L_08A74620:;
    a1 = D_08AE7C48 - (31816);
    v1 = 2;
    a0 = s2 + 0;
    cnd_ = v0 != v1;
    a1 = a1 + 31816;
    if (cnd_) { goto L_08A7443C; }
    goto L_08A74634;
L_08A74634:;
    a1 = s0 + 0;
    a0 = sp + 0;
    a2 = 3;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74644;
L_08A74644:;
    a1 = D_08AE7A28 - (31272);
    a0 = s2 + 0;
    a1 = a1 + 31272;
    goto L_08A743F8;
L_08A74654:;
    a0 = (u32)(s32)LD_S8(a2);
    v1 = D_08AE9044 - (-28604);
    v1 = v1 - 28604;
    v1 = a0 + v1;
    v0 = LD_U8(v1);
    v1 = 77;
    v0 = (v0 >> 1) & 0x1;
    v0 = v0 << 5;
    v0 = a0 - v0;
    a0 = (u32)(s32)(s8)v0;
    cnd_ = a0 == v1;
    v0 = 48;
    if (cnd_) { goto L_08A74694; }
    goto L_08A74684;
L_08A74684:;
    v0 = 70;
    cnd_ = a0 == v0;
    v0 = 49;
    if (cnd_) { goto L_08A74694; }
    goto L_08A74690;
L_08A74690:;
    v0 = 50;
    goto L_08A74694;
L_08A74694:;
    a1 = D_08AE7A5C - (31324);
    a0 = s2 + 0;
    a1 = a1 + 31324;
    ST16(sp, v0);
    goto L_08A743F8;
L_08A746A8:;
    a0 = a2 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A746B0;
L_08A746B0:;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a1 = 1805;
    goto L_08A746BC;
L_08A746BC:;
    v0 = func_08A74000(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A746C4;
L_08A746C4:;
    goto L_08A74400;
L_08A746CC:;
    a0 = a2 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A746D4;
L_08A746D4:;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a1 = 1806;
    goto L_08A746BC;
L_08A746E4:;
    a1 = a2 + 0;
    a0 = sp + 0;
    a2 = 256;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A746F4;
L_08A746F4:;
    a1 = D_08AE7C60 - (31840);
    a0 = s2 + 0;
    a1 = a1 + 31840;
    goto L_08A743F8;
L_08A74704:;
    a0 = a2 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7470C;
L_08A7470C:;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a1 = 1808;
    goto L_08A746BC;
L_08A7471C:;
    a1 = a2 + 0;
    a0 = sp + 0;
    a2 = 256;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7472C;
L_08A7472C:;
    a1 = D_08AE7C74 - (31860);
    a0 = s2 + 0;
    a1 = a1 + 31860;
    goto L_08A743F8;
L_08A7473C:;
    a0 = a2 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A74744;
L_08A74744:;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a1 = 1810;
    goto L_08A746BC;
L_08A74754:;
    a1 = D_08AE7BB8 - (31672);
    a0 = s2 + 0;
    a1 = a1 + 31672;
    goto L_08A7443C;
L_08A74764:;
    a0 = a2 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7476C;
L_08A7476C:;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a1 = 1812;
    goto L_08A746BC;
L_08A7477C:;
    a0 = a2 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A74784;
L_08A74784:;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a1 = 1813;
    goto L_08A746BC;
L_08A74794:;
    a1 = a2 + 0;
    a0 = sp + 0;
    a2 = 256;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A747A4;
L_08A747A4:;
    a1 = D_08AE7C88 - (31880);
    a0 = s2 + 0;
    a1 = a1 + 31880;
    goto L_08A743F8;
L_08A747B4:;
    a1 = a2 + 0;
    a0 = sp + 0;
    a2 = 51;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A747C4;
L_08A747C4:;
    a1 = D_08AE7A6C - (31340);
    a0 = s2 + 0;
    a1 = a1 + 31340;
    goto L_08A743F8;
L_08A747D4:;
    a1 = a2 + 0;
    a0 = sp + 0;
    a2 = 256;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A747E4;
L_08A747E4:;
    a1 = D_08AE7A74 - (31348);
    a0 = s2 + 0;
    a1 = a1 + 31348;
    goto L_08A743F8;
L_08A747F4:;
    a1 = a2 + 0;
    a0 = sp + 0;
    a2 = 256;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74804;
L_08A74804:;
    a1 = D_08AE7A7C - (31356);
    a0 = s2 + 0;
    a1 = a1 + 31356;
    goto L_08A743F8;
L_08A74814:;
    a1 = a2 + 0;
    a0 = sp + 0;
    a2 = 256;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74824;
L_08A74824:;
    a1 = D_08AE7A84 - (31364);
    a0 = s2 + 0;
    a1 = a1 + 31364;
    goto L_08A743F8;
L_08A74834:;
    a1 = a2 + 0;
    a0 = sp + 0;
    a2 = 256;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74844;
L_08A74844:;
    a1 = D_08AE7A8C - (31372);
    a0 = s2 + 0;
    a1 = a1 + 31372;
    goto L_08A743F8;
L_08A74854:;
    a1 = a2 + 0;
    a0 = sp + 0;
    a2 = 256;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74864;
L_08A74864:;
    a1 = D_08AE7A94 - (31380);
    a0 = s2 + 0;
    a1 = a1 + 31380;
    goto L_08A743F8;
L_08A74874:;
    a1 = a2 + 0;
    a0 = sp + 0;
    a2 = 256;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74884;
L_08A74884:;
    a1 = D_08AE7A9C - (31388);
    a0 = s2 + 0;
    a1 = a1 + 31388;
    goto L_08A743F8;
L_08A74894:;
    a1 = a2 + 0;
    a0 = sp + 0;
    a2 = 256;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A748A4;
L_08A748A4:;
    a1 = D_08AE7AA4 - (31396);
    a0 = s2 + 0;
    a1 = a1 + 31396;
    goto L_08A743F8;
}

/* 08A748B4 */
u32 func_08A748B4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A748B4:;
    sp = sp - 32;
    s4 = a2 + 0;
    a2 = D_08AE7D20 - (32032);
    a2 = a2 + 32032;
    s3 = a1 + 0;
    s1 = a0 + 0;
    s2 = LD32(a0);
    s0 = s2 + 524;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A748F4;
L_08A748F4:;
    a2 = LD32(s2+408);
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A74904;
L_08A74904:;
    a2 = D_08AE7990 - (31120);
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = a2 + 31120;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A74918;
L_08A74918:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = s3 + 0;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A74928;
L_08A74928:;
    a2 = D_08AE7D38 - (32056);
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = a2 + 32056;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A7493C;
L_08A7493C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = s4 + 0;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A7494C;
L_08A7494C:;
    a2 = D_08AE7AEC - (31468);
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = a2 + 31468;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A74960;
L_08A74960:;
    v0 = 0 + 0;
    sp = sp + 32;
    return v0;
}

/* 08A74984 */
rv_t func_08A74984(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A74984:;
    sp = sp - 64;
    a2 = a2 ^ 0x1;
    a2 = a2 < 0x1u;
    s5 = a3 + 0;
    s3 = a1 + 0;
    s2 = a0 + 0;
    s1 = t1 + 0;
    v0 = LD32(a0);
    ST32(sp+20, 0);
    v1 = LD32(v0+256);
    v0 = 0 < t0;
    if (v1 == 0) a2 = 0;
    v0 = v0 & a2;
    cnd_ = v0 == 0;
    s0 = t0 + 0;
    if (cnd_) { goto L_08A749FC; }
    goto L_08A749DC;
L_08A749DC:;
    a2 = sp + 16;
    v0 = func_08A766C4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A749E4;
L_08A749E4:;
    cnd_ = v0 == 0;
    t1 = s0 + 0;
    if (cnd_) { goto L_08A74A00; }
    goto L_08A749EC;
L_08A749EC:;
    v0 = LD32(sp+16);
    v1 = LD32(v0+12);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A74A90; }
    goto L_08A749FC;
L_08A749FC:;
    t1 = s0 + 0;
    goto L_08A74A00;
L_08A74A00:;
    t2 = s1 + 0;
    a0 = s2 + 0;
    a1 = 2;
    a2 = 0 + 0;
    a3 = sp + 20;
    t0 = s5 + 0;
    v0 = func_08A74EDC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A74A1C;
L_08A74A1C:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A74A4C; }
    goto L_08A74A24;
L_08A74A24:;
    v0 = v1 + 0;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08A74A4C:;
    v0 = LD32(sp+20);
    a1 = s3 + 0;
    a0 = s2 + 0;
    s0 = LD32(v0+24);
    a2 = s0 + 0;
    v0 = func_08A748B4(a0, a1, a2);
    goto L_08A74A64;
L_08A74A64:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A74A24; }
    goto L_08A74A6C;
L_08A74A6C:;
    cnd_ = s5 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A74A24; }
    goto L_08A74A74;
L_08A74A74:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08A70334(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A74A80;
L_08A74A80:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A74A24; }
    goto L_08A74A88;
L_08A74A88:;
    v1 = 0 + 0;
    goto L_08A74A24;
L_08A74A90:;
    a0 = 516;
    { u64 r_ = func_08A6AF74(a0, t1, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74A98;
L_08A74A98:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_08A74B24; }
    goto L_08A74AA0;
L_08A74AA0:;
    a1 = v0 + 0;
    v0 = LD32(sp+16);
    a0 = LD32(v0+12);
    func_08A73490(a0, a1);
    goto L_08A74AB0;
L_08A74AB0:;
    ST32(s4+4, s3);
    t1 = s0 + 0;
    t2 = s1 + 0;
    ST32(s4, 0);
    a0 = s2 + 0;
    a1 = 2;
    a2 = 0 + 0;
    a3 = sp + 20;
    t0 = 1;
    ST32(sp, s0);
    ST32(sp+4, s1);
    v0 = func_08A74EDC(a0, a1, a2, a3, t0, t1, t2, 0);
    goto L_08A74AE0;
L_08A74AE0:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A74A24; }
    goto L_08A74AE8;
L_08A74AE8:;
    v0 = LD32(sp+20);
    a2 = s4 + 0;
    a0 = s2 + 0;
    a3 = v0 + 0;
    a1 = sp + 0;
    t0 = 0 + 0;
    s0 = LD32(v0+24);
    v0 = func_08A71B54(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_08A74B08;
L_08A74B08:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A74A24; }
    goto L_08A74B10;
L_08A74B10:;
    a1 = LD32(sp+20);
    a0 = s2 + 0;
    func_08A75078(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A74B1C;
L_08A74B1C:;
    goto L_08A74A6C;
L_08A74B24:;
    a1 = D_08AE7AC4 - (31428);
    a0 = s2 + 0;
    a1 = a1 + 31428;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74B34;
L_08A74B34:;
    v1 = 1;
    goto L_08A74A24;
}

/* 08A74B3C */
void func_08A74B3C(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A74B3C:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a1 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+256);
    cnd_ = v0 != 0;
    a0 = 1;
    if (cnd_) { goto L_08A74B84; }
    goto L_08A74B68;
L_08A74B68:;
    v0 = a0 + 0;
    sp = sp + 16;
    return;
L_08A74B84:;
    a0 = a1 + 0;
    func_08A74C50(a0, t1, t2, t3);
    goto L_08A74B8C;
L_08A74B8C:;
    a0 = 240;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74B94;
L_08A74B94:;
    cnd_ = v0 == 0;
    ST32(s1+12, v0);
    if (cnd_) { goto L_08A74C44; }
    goto L_08A74B9C;
L_08A74B9C:;
    a3 = v0 + 0;
    a2 = s2 + 0;
    t0 = s2 + 240;
    goto L_08A74BA8;
L_08A74BA8:;
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
    if (cnd_) { goto L_08A74BA8; }
    goto L_08A74BD4;
L_08A74BD4:;
    a0 = LD32(s2);
    s0 = LD32(s1+12);
    { u64 r_ = func_08A6B560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74BE0;
L_08A74BE0:;
    ST32(s0, v0);
    a0 = LD32(s2+4);
    s0 = LD32(s1+12);
    { u64 r_ = func_08A6B560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74BF0;
L_08A74BF0:;
    ST32(s0+4, v0);
    a0 = LD32(s2+8);
    s0 = LD32(s1+12);
    { u64 r_ = func_08A6B560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74C00;
L_08A74C00:;
    ST32(s0+8, v0);
    a0 = LD32(s2+12);
    s0 = LD32(s1+12);
    { u64 r_ = func_08A6B560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74C10;
L_08A74C10:;
    ST32(s0+12, v0);
    a0 = LD32(s2+16);
    s0 = LD32(s1+12);
    { u64 r_ = func_08A6B560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74C20;
L_08A74C20:;
    ST32(s0+16, v0);
    a0 = LD32(s2+20);
    s0 = LD32(s1+12);
    { u64 r_ = func_08A6B560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74C30;
L_08A74C30:;
    ST32(s0+20, v0);
    a0 = LD32(s2+200);
    s0 = LD32(s1+12);
    { u64 r_ = func_08A6B560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74C40;
L_08A74C40:;
    ST32(s0+200, v0);
    goto L_08A74C44;
L_08A74C44:;
    v0 = LD32(s1+12);
    a0 = 0 < v0;
    goto L_08A74B68;
}

/* 08A74C50 */
void func_08A74C50(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A74C50:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A74C7C; }
    goto L_08A74C6C;
L_08A74C6C:;
    sp = sp + 16;
    return;
L_08A74C7C:;
    a0 = LD32(a0);
    { u64 r_ = func_08A6AFBC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74C84;
L_08A74C84:;
    v0 = LD32(s0+12);
    a0 = LD32(v0+4);
    ST32(v0, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74C94;
L_08A74C94:;
    v0 = LD32(s0+12);
    a0 = LD32(v0+8);
    ST32(v0+4, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74CA4;
L_08A74CA4:;
    v0 = LD32(s0+12);
    a0 = LD32(v0+12);
    ST32(v0+8, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74CB4;
L_08A74CB4:;
    v0 = LD32(s0+12);
    a0 = LD32(v0+16);
    ST32(v0+12, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74CC4;
L_08A74CC4:;
    v0 = LD32(s0+12);
    a0 = LD32(v0+20);
    ST32(v0+16, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74CD4;
L_08A74CD4:;
    v0 = LD32(s0+12);
    a0 = LD32(v0+200);
    ST32(v0+20, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74CE4;
L_08A74CE4:;
    a0 = LD32(s0+12);
    ST32(a0+200, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74CF0;
L_08A74CF0:;
    ST32(s0+12, 0);
    goto L_08A74C6C;
}

/* 08A74CF8 */
void func_08A74CF8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A74CF8:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v1 = LD32(a1+12);
    v0 = LD32(a1+16);
    ST32(sp, v1);
    ST32(sp+4, v0);
    cnd_ = v1 == 0;
    s2 = LD32(a0);
    if (cnd_) { goto L_08A74DBC; }
    goto L_08A74D2C;
L_08A74D2C:;
    v1 = LD32(a1);
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 0 + 0; goto L_08A74DC0; }
    goto L_08A74D3C;
L_08A74D3C:;
    v0 = v1 << 2;
    v1 = D_08AE7D50 - (32080);
    v1 = v1 + 32080;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A74D58u: goto L_08A74D58; case 0x08A74E04u: goto L_08A74E04; case 0x08A74E38u: goto L_08A74E38; case 0x08A74E78u: goto L_08A74E78; case 0x08A74EA8u: goto L_08A74EA8; default: rs_break(0, 0x08a74d50); }
L_08A74D58:;
    a0 = 32;
    { u64 r_ = func_08A6AF74(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74D60;
L_08A74D60:;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A74DEC; }
    goto L_08A74D68;
L_08A74D68:;
    ST32(v0, 0);
    v1 = 513;
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v0+16, 0);
    ST32(v0+20, 0);
    ST32(v0+24, 0);
    ST32(v0+28, 0);
    v0 = LD32(s0+28);
    a0 = LD32(s2+1072);
    cnd_ = a0 == v1;
    ST32(a2, v0);
    if (cnd_) { goto L_08A74DDC; }
    goto L_08A74D9C;
L_08A74D9C:;
    a0 = s1 + 0;
    goto L_08A74DA0;
L_08A74DA0:;
    a3 = s0 + 0;
    a1 = sp + 0;
    goto L_08A74DA8;
L_08A74DA8:;
    t0 = 0 + 0;
    goto L_08A74DAC;
L_08A74DAC:;
    v0 = func_08A71B54(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_08A74DB4;
L_08A74DB4:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A74DC0; }
    goto L_08A74DBC;
L_08A74DBC:;
    v1 = 0 + 0;
    goto L_08A74DC0;
L_08A74DC0:;
    v0 = v1 + 0;
    sp = sp + 32;
    return;
L_08A74DDC:;
    v0 = LD32(s2+416);
    ST32(a2+4, v0);
    ST32(s2+416, 0);
    goto L_08A74D9C;
L_08A74DEC:;
    a1 = D_08AE7D40 - (32064);
    a0 = s1 + 0;
    a1 = a1 + 32064;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74DFC;
L_08A74DFC:;
    v1 = 1;
    goto L_08A74DC0;
L_08A74E04:;
    a0 = 516;
    { u64 r_ = func_08A6AF74(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74E0C;
L_08A74E0C:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A74DEC; }
    goto L_08A74E14;
L_08A74E14:;
    a0 = v0 + 0;
    a2 = 516;
    a1 = 0 + 0;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74E24;
L_08A74E24:;
    v1 = LD32(s0+28);
    a0 = s1 + 0;
    a2 = s2 + 0;
    ST32(s2, v1);
    goto L_08A74DA0;
L_08A74E38:;
    a0 = 16;
    { u64 r_ = func_08A6AF74(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74E40;
L_08A74E40:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A74DEC; }
    goto L_08A74E48;
L_08A74E48:;
    ST32(v0, 0);
    a2 = v0 + 0;
    a0 = s1 + 0;
    ST32(v0+4, 0);
    a3 = s0 + 0;
    a1 = sp + 0;
    ST32(v0+8, 0);
    t0 = 0 + 0;
    v0 = LD32(s0+28);
    ST32(v1+12, 0);
    goto L_08A74E70;
L_08A74E70:;
    ST32(v1, v0);
    goto L_08A74DAC;
L_08A74E78:;
    a0 = 4;
    { u64 r_ = func_08A6AF74(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74E80;
L_08A74E80:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A74DEC; }
    goto L_08A74E88;
L_08A74E88:;
    ST32(v0, 0);
    a2 = v0 + 0;
    a0 = s1 + 0;
    v0 = LD32(s0+28);
    a3 = s0 + 0;
    a1 = sp + 0;
    ST32(v1, v0);
    goto L_08A74DA8;
L_08A74EA8:;
    a0 = 8;
    { u64 r_ = func_08A6AF74(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74EB0;
L_08A74EB0:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A74DEC; }
    goto L_08A74EB8;
L_08A74EB8:;
    ST32(v0, 0);
    a2 = v0 + 0;
    a0 = s1 + 0;
    ST32(v0+4, 0);
    a3 = s0 + 0;
    a1 = sp + 0;
    v0 = LD32(s0+28);
    t0 = 0 + 0;
    goto L_08A74E70;
}

/* 08A74EDC */
u32 func_08A74EDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A74EDC:;
    sp = sp - 48;
    s7 = a3 + 0;
    s6 = t2 + 0;
    s5 = t1 + 0;
    s4 = a2 + 0;
    s3 = t0 + 0;
    s2 = a1 + 0;
    s0 = a0 + 0;
    a0 = 36;
    s1 = LD32(s0);
    { u64 r_ = func_08A6AF74(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74F2C;
L_08A74F2C:;
    a1 = D_08AE7D40 - (32064);
    a2 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = a1 + 32064;
    if (cnd_) { goto L_08A74FDC; }
    goto L_08A74F40;
L_08A74F40:;
    ST32(v0+4, s4);
    ST32(v0+8, s3);
    ST32(v0, s2);
    cnd_ = s2 != 0;
    ST32(v0+20, 0);
    if (cnd_) { goto L_08A74FAC; }
    goto L_08A74F54;
L_08A74F54:;
    v0 = 1;
    ST32(a2+24, v0);
    goto L_08A74F5C;
L_08A74F5C:;
    v0 = LD32(s1+1084);
    goto L_08A74F60;
L_08A74F60:;
    ST32(a2+12, s5);
    v1 = 0 + 0;
    ST32(a2+32, v0);
    ST32(a2+16, s6);
    ST32(s1+1084, a2);
    ST32(a2+28, 0);
    ST32(s7, a2);
    goto L_08A74F7C;
L_08A74F7C:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_08A74FAC:;
    v0 = LD32(s1+548);
    v1 = v0 + 0;
    v0 = v0 + 1;
    ST32(s1+548, v0);
    ST32(a2+24, v1);
    v0 = LD32(s1+548);
    v0 = (s32)v0 < 2;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+1084); goto L_08A74F60; }
    goto L_08A74FD0;
L_08A74FD0:;
    v0 = 2;
    ST32(s1+548, v0);
    goto L_08A74F5C;
L_08A74FDC:;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A74FE4;
L_08A74FE4:;
    v1 = 1;
    goto L_08A74F7C;
}

/* 08A74FEC */
void func_08A74FEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A74FEC:;
    sp = sp - 16;
    s1 = a1 + 0;
    v1 = 3;
    a1 = 2;
    v0 = LD32(s1);
    cnd_ = v0 == v1;
    a0 = LD32(a0);
    if (cnd_) { goto L_08A7503C; }
    goto L_08A75014;
L_08A75014:;
    a0 = LD32(s1+4);
    { u64 r_ = func_08A6AFBC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7501C;
L_08A7501C:;
    ST32(s1+4, 0);
    a0 = s1 + 0;
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75028;
L_08A75028:;
    sp = sp + 16;
    return;
L_08A7503C:;
    v0 = LD32(a0+552);
    s0 = LD32(s1+4);
    v0 = v0 - 1;
    ST32(a0+552, v0);
    a0 = LD32(s0+4);
    v0 = sceNetInetShutdown(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A75054;
L_08A75054:;
    a0 = LD32(s0+4);
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7505C;
L_08A7505C:;
    a0 = LD32(s0+24);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75064;
L_08A75064:;
    ST32(s0+24, 0);
    a0 = LD32(s0+8);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75070;
L_08A75070:;
    ST32(s0+8, 0);
    goto L_08A75014;
}

/* 08A75078 */
void func_08A75078(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A75078:;
    sp = sp - 16;
    a2 = LD32(a0);
    v0 = LD32(a2+1084);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A750A8; }
    goto L_08A75090;
L_08A75090:;
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08A750B4; }
    goto L_08A75098;
L_08A75098:;
    v1 = v0 + 0;
    v0 = LD32(v0+32);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A75090; }
    goto L_08A750A8;
L_08A750A8:;
    goto L_08A750AC;
L_08A750AC:;
    sp = sp + 16;
    return;
L_08A750B4:;
    cnd_ = v1 == 0;
    v0 = LD32(v0+32);
    if (cnd_) { goto L_08A750D0; }
    goto L_08A750BC;
L_08A750BC:;
    ST32(v1+32, v0);
    goto L_08A750C0;
L_08A750C0:;
    func_08A74FEC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A750C8;
L_08A750C8:;
    goto L_08A750AC;
L_08A750D0:;
    ST32(a2+1084, v0);
    goto L_08A750C0;
}

/* 08A750D8 */
u32 func_08A750D8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A750D8:;
    v0 = LD32(a0);
    v1 = LD32(v0+1084);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A75100; }
    goto L_08A750E8;
L_08A750E8:;
    v0 = LD32(v1+24);
    goto L_08A750EC;
L_08A750EC:;
    cnd_ = v0 == a2;
    if (cnd_) { goto L_08A75110; }
    goto L_08A750F4;
L_08A750F4:;
    v1 = LD32(v1+32);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+24); goto L_08A750EC; }
    goto L_08A75100;
L_08A75100:;
    cnd_ = a1 != 0;
    if (cnd_) { ST32(a1, 0); goto L_08A75108; }
    goto L_08A75108;
L_08A75108:;
    v0 = 0 + 0;
    return v0;
L_08A75110:;
    cnd_ = a1 != 0;
    if (cnd_) { ST32(a1, v1); goto L_08A75118; }
    goto L_08A75118;
L_08A75118:;
    v0 = 1;
    return v0;
}

/* 08A75120 */
u32 func_08A75120(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_08A75120:;
    v0 = LD32(a0);
    v1 = LD32(v0+1084);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A7515C; }
    goto L_08A75130;
L_08A75130:;
    a1 = 3;
    v0 = LD32(v1+8);
    goto L_08A75138;
L_08A75138:;
    cnd_ = v0 == 0;
    a0 = 1;
    if (cnd_) { goto L_08A7514C; }
    goto L_08A75140;
L_08A75140:;
    v0 = LD32(v1);
    cnd_ = v0 != a1;
    if (cnd_) { goto L_08A7515C; }
    goto L_08A7514C;
L_08A7514C:;
    v1 = LD32(v1+32);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08A75138; }
    goto L_08A75158;
L_08A75158:;
    a0 = 0 + 0;
    goto L_08A7515C;
L_08A7515C:;
    v0 = a0 + 0;
    return v0;
}

/* 08A75164 */
u32 func_08A75164(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A75164:;
    sp = sp - 16;
    a3 = a0 + 0;
    s0 = a1 + 0;
    v1 = LD32(a1);
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A751BC; }
    goto L_08A75188;
L_08A75188:;
    v0 = v1 << 2;
    v1 = D_08AE7D68 - (32104);
    v1 = v1 + 32104;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A751A4u: goto L_08A751A4; case 0x08A751BCu: goto L_08A751BC; case 0x08A751D0u: goto L_08A751D0; case 0x08A751E4u: goto L_08A751E4; case 0x08A751F8u: goto L_08A751F8; case 0x08A7520Cu: goto L_08A7520C; default: rs_break(0, 0x08a7519c); }
L_08A751A4:;
    a0 = a3 + 0;
    a1 = s0 + 0;
    v0 = func_08A72AC4(a0, a1, a2);
    goto L_08A751B0;
L_08A751B0:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A751BC; }
    goto L_08A751B8;
L_08A751B8:;
    ST32(s0+28, v0);
    goto L_08A751BC;
L_08A751BC:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
L_08A751D0:;
    a0 = a3 + 0;
    a1 = s0 + 0;
    v0 = func_08A764E0(a0, a1, a2);
    goto L_08A751DC;
L_08A751DC:;
    goto L_08A751B0;
L_08A751E4:;
    a0 = a3 + 0;
    a1 = s0 + 0;
    v0 = func_08A736A8(a0, a1, a2);
    goto L_08A751F0;
L_08A751F0:;
    goto L_08A751B0;
L_08A751F8:;
    a0 = a3 + 0;
    a1 = s0 + 0;
    v0 = func_08A7880C(a0, a1, a2);
    goto L_08A75204;
L_08A75204:;
    goto L_08A751B0;
L_08A7520C:;
    a0 = a3 + 0;
    a1 = s0 + 0;
    v0 = func_08A7670C(a0, a1, a2);
    goto L_08A75218;
L_08A75218:;
    goto L_08A751B0;
}

/* 08A75220 */
u32 func_08A75220(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A75220:;
    sp = sp - 48;
    v0 = 102;
    s2 = a0 + 0;
    s1 = a1 + 0;
    v1 = LD32(a1);
    cnd_ = v1 == v0;
    s3 = LD32(a0);
    if (cnd_) { goto L_08A7552C; }
    goto L_08A75254;
L_08A75254:;
    v0 = (s32)v1 < 103;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+48); goto L_08A75278; }
    goto L_08A75260;
L_08A75260:;
    v0 = 103;
    cnd_ = v1 == v0;
    v0 = 104;
    if (cnd_) { goto L_08A753B0; }
    goto L_08A7526C;
L_08A7526C:;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(a1+8); goto L_08A752DC; }
    goto L_08A75274;
L_08A75274:;
    v0 = LD32(s1+48);
    goto L_08A75278;
L_08A75278:;
    cnd_ = (s32)v0 <= 0;
    t1 = D_08AE7D80 - (32128);
    if (cnd_) { goto L_08A752B4; }
    goto L_08A75280;
L_08A75280:;
    a1 = LD32(s1+8);
    a2 = s1 + 40;
    a0 = s2 + 0;
    t1 = t1 + 32128;
    a3 = sp + 12;
    t0 = 1;
    v0 = func_08A717A8(a0, a1, a2, a3, t0, t1, t3);
    goto L_08A7529C;
L_08A7529C:;
    v1 = LD32(sp+12);
    v1 = v1 | v0;
    cnd_ = v1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A752B8; }
    goto L_08A752AC;
L_08A752AC:;
    v0 = 106;
    ST32(s1, v0);
    goto L_08A752B4;
L_08A752B4:;
    v1 = 0 + 0;
    goto L_08A752B8;
L_08A752B8:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_08A752DC:;
    t1 = D_08AE7D80 - (32128);
    a2 = s1 + 24;
    t1 = t1 + 32128;
    a3 = sp + 8;
    t0 = sp + 12;
    v0 = func_08A71610(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A752F4;
L_08A752F4:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A752B8; }
    goto L_08A752FC;
L_08A752FC:;
    a0 = LD32(s1+24);
    a1 = D_08AE7D84 - (32132);
    a1 = a1 + 32132;
    { u64 r_ = func_08A89EE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7530C;
L_08A7530C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+48); goto L_08A75278; }
    goto L_08A75314;
L_08A75314:;
    ST8(v0, 0);
    a1 = D_08AE7D8C - (32140);
    a1 = a1 + 32140;
    a0 = LD32(s1+24);
    a2 = 7;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7532C;
L_08A7532C:;
    cnd_ = v0 != 0;
    a1 = D_08AE7D94 - (32148);
    if (cnd_) { goto L_08A75384; }
    goto L_08A75334;
L_08A75334:;
    v0 = LD32(s1+20);
    a0 = s2 + 0;
    v0 = v0 + 1;
    v1 = (s32)v0 < 2;
    ST32(s1+20, v0);
    cnd_ = v1 == 0;
    a1 = a1 + 32148;
    if (cnd_) { goto L_08A75374; }
    goto L_08A75350;
L_08A75350:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    v0 = func_08A75F30(a0, a1, 0);
    goto L_08A7535C;
L_08A7535C:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A752B8; }
    goto L_08A75364;
L_08A75364:;
    v0 = 105;
    goto L_08A75368;
L_08A75368:;
    ST32(s1, v0);
    ST32(s1+32, 0);
    goto L_08A75274;
L_08A75374:;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7537C;
L_08A7537C:;
    v1 = 3;
    goto L_08A752B8;
L_08A75384:;
    a0 = LD32(s1+24);
    a1 = D_08AE7DB8 - (32184);
    a1 = a1 + 32184;
    a2 = 6;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75398;
L_08A75398:;
    cnd_ = v0 == 0;
    v0 = 105;
    if (cnd_) { goto L_08A75368; }
    goto L_08A753A0;
L_08A753A0:;
    a1 = D_08AE7DC0 - (32192);
    a0 = s2 + 0;
    a1 = a1 + 32192;
    goto L_08A75374;
L_08A753B0:;
    a1 = LD32(a1+8);
    a2 = sp + 0;
    v0 = func_08A78B08(a0, a1, a2, t1, t2, t3);
    goto L_08A753BC;
L_08A753BC:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A752B8; }
    goto L_08A753C4;
L_08A753C4:;
    v1 = LD32(sp);
    v0 = 4;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_08A7551C; }
    goto L_08A753D4;
L_08A753D4:;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(s1+48); goto L_08A75278; }
    goto L_08A753DC;
L_08A753DC:;
    a1 = LD32(s1+12);
    a0 = s2 + 0;
    a2 = sp + 4;
    v0 = func_08A766C4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A753EC;
L_08A753EC:;
    cnd_ = v0 == 0;
    s4 = 1;
    if (cnd_) { goto L_08A7551C; }
    goto L_08A753F4;
L_08A753F4:;
    s0 = s1 + 40;
    a2 = D_08AE7DE0 - (32224);
    a2 = a2 + 32224;
    a0 = s2 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A7540C;
L_08A7540C:;
    a2 = D_08AE7DE8 - (32232);
    a2 = a2 + 32232;
    a0 = s2 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A75420;
L_08A75420:;
    a2 = LD32(s3+416);
    a0 = s2 + 0;
    a1 = s0 + 0;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A75430;
L_08A75430:;
    a2 = D_08AE7DF0 - (32240);
    a2 = a2 + 32240;
    a0 = s2 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A75444;
L_08A75444:;
    a2 = s3 + 272;
    a0 = s2 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A75454;
L_08A75454:;
    a2 = D_08AE7DF8 - (32248);
    a2 = a2 + 32248;
    a0 = s2 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A75468;
L_08A75468:;
    v0 = LD32(sp+4);
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = LD32(v0+24);
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A7547C;
L_08A7547C:;
    a2 = D_08AE7D84 - (32132);
    a2 = a2 + 32132;
    a1 = s0 + 0;
    a0 = s2 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A75490;
L_08A75490:;
    a2 = LD32(s3+1100);
    cnd_ = a2 == 0;
    v0 = LD32(sp+4);
    if (cnd_) { goto L_08A754E4; }
    goto L_08A7549C;
L_08A7549C:;
    a0 = LD32(s1+12);
    v0 = LD32(a2+12);
    goto L_08A754A4;
L_08A754A4:;
    v1 = a2 ^ s1;
    v1 = 0 < v1;
    v0 = v0 ^ a0;
    v0 = v0 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(a2+60); goto L_08A754D0; }
    goto L_08A754C0;
L_08A754C0:;
    v0 = LD32(a2);
    v0 = (s32)v0 < 104;
    if (v0 != 0) s4 = 0;
    a2 = LD32(a2+60);
    goto L_08A754D0;
L_08A754D0:;
    cnd_ = a2 != 0;
    if (cnd_) { v0 = LD32(a2+12); goto L_08A754A4; }
    goto L_08A754D8;
L_08A754D8:;
    cnd_ = s4 == 0;
    v0 = 104;
    if (cnd_) { goto L_08A75504; }
    goto L_08A754E0;
L_08A754E0:;
    v0 = LD32(sp+4);
    goto L_08A754E4;
L_08A754E4:;
    a0 = LD32(v0+24);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A754EC;
L_08A754EC:;
    a0 = LD32(sp+4);
    ST32(a0+24, 0);
    v0 = func_08A769D8(a0);
    goto L_08A754F8;
L_08A754F8:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(sp+4); goto L_08A7550C; }
    goto L_08A75500;
L_08A75500:;
    v0 = 104;
    goto L_08A75504;
L_08A75504:;
    ST32(s1, v0);
    goto L_08A75274;
L_08A7550C:;
    a0 = s2 + 0;
    { rv_t r_ = func_08A76870(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A75514;
L_08A75514:;
    v0 = 104;
    goto L_08A75504;
L_08A7551C:;
    a1 = D_08AE7E00 - (32256);
    a0 = s2 + 0;
    a1 = a1 + 32256;
    goto L_08A75374;
L_08A7552C:;
    v0 = func_08A75FB0(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A75534;
L_08A75534:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A752B8; }
    goto L_08A7553C;
L_08A7553C:;
    v0 = LD32(s1+48);
    goto L_08A75278;
}

/* 08A75544 */
u32 func_08A75544(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[448] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 448);
L_08A75544:;
    sp = sp - 448;
    t1 = D_08AE7D80 - (32128);
    t1 = t1 + 32128;
    s2 = a1 + 0;
    a2 = s2 + 24;
    a3 = sp + 400;
    t0 = sp + 404;
    s3 = a0 + 0;
    a1 = LD32(a1+8);
    s1 = LD32(a0);
    v0 = func_08A71610(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A75590;
L_08A75590:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A755B0; }
    goto L_08A75598;
L_08A75598:;
    v0 = LD32(sp+404);
    cnd_ = v0 == 0;
    v0 = D_08AE7D84 - (32132);
    if (cnd_) { goto L_08A755DC; }
    goto L_08A755A4;
L_08A755A4:;
    v0 = 106;
    goto L_08A755A8;
L_08A755A8:;
    v1 = 0 + 0;
    ST32(s2, v0);
    goto L_08A755B0;
L_08A755B0:;
    v0 = v1 + 0;
    sp = sp + 448;
    return v0;
L_08A755DC:;
    a0 = LD32(s2+24);
    s4 = v0 + 32132;
    a1 = s4 + 0;
    { u64 r_ = func_08A89EE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A755EC;
L_08A755EC:;
    cnd_ = v0 != 0;
    if (cnd_) { ST8(v0, 0); goto L_08A755FC; }
    goto L_08A755F4;
L_08A755F4:;
    v1 = 0 + 0;
    goto L_08A755B0;
L_08A755FC:;
    a1 = D_08AE7DE0 - (32224);
    a1 = a1 + 32224;
    a0 = LD32(s2+24);
    a2 = 6;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75610;
L_08A75610:;
    cnd_ = v0 != 0;
    v0 = 106;
    if (cnd_) { goto L_08A755A8; }
    goto L_08A75618;
L_08A75618:;
    a0 = LD32(s2+24);
    a1 = D_08AE7DE8 - (32232);
    a1 = a1 + 32232;
    a2 = sp + 0;
    a3 = 16;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75630;
L_08A75630:;
    cnd_ = v0 == 0;
    v0 = 106;
    if (cnd_) { goto L_08A755A8; }
    goto L_08A75638;
L_08A75638:;
    a0 = sp + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A75640;
L_08A75640:;
    a0 = LD32(s2+24);
    a1 = D_08AE7DF0 - (32240);
    a1 = a1 + 32240;
    a2 = sp + 16;
    a3 = 31;
    s5 = v0 + 0;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7565C;
L_08A7565C:;
    cnd_ = v0 == 0;
    v0 = 106;
    if (cnd_) { goto L_08A755A8; }
    goto L_08A75664;
L_08A75664:;
    a0 = LD32(s2+24);
    s6 = sp + 48;
    a1 = D_08AE7DF8 - (32248);
    a1 = a1 + 32248;
    a2 = s6 + 0;
    a3 = 33;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75680;
L_08A75680:;
    cnd_ = v0 == 0;
    v0 = 106;
    if (cnd_) { goto L_08A755A8; }
    goto L_08A75688;
L_08A75688:;
    a3 = LD32(s1+416);
    s0 = sp + 144;
    a1 = D_08AE7E1C - (32284);
    a2 = s1 + 375;
    a1 = a1 + 32284;
    t0 = s5 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A756A8;
L_08A756A8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A756B0;
L_08A756B0:;
    s1 = sp + 96;
    a0 = s0 + 0;
    a1 = v0 + 0;
    a2 = s1 + 0;
    func_08A853D0(a0, a1, a2);
    goto L_08A756C4;
L_08A756C4:;
    a0 = s6 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A756D0;
L_08A756D0:;
    cnd_ = v0 == 0;
    s0 = s2 + 40;
    if (cnd_) { goto L_08A75704; }
    goto L_08A756D8;
L_08A756D8:;
    a2 = D_08AE7D8C - (32140);
    a2 = a2 + 32140;
    a0 = s3 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A756EC;
L_08A756EC:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    a2 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A756FC;
L_08A756FC:;
    v0 = 106;
    goto L_08A755A8;
L_08A75704:;
    a2 = D_08AE7DB8 - (32184);
    a2 = a2 + 32184;
    a0 = s3 + 0;
    a1 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A75718;
L_08A75718:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    a2 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A75728;
L_08A75728:;
    v1 = 105;
    ST32(s2, v1);
    ST32(s2+12, s5);
    ST32(s2+32, 0);
    goto L_08A755F4;
}

/* 08A7573C */
u32 func_08A7573C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A7573C:;
    sp = sp - 48;
    s3 = D_08AE7D80 - (32128);
    s2 = a0 + 0;
    v0 = LD32(a1+48);
    cnd_ = v0 == 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_08A75788; }
    goto L_08A75768;
L_08A75768:;
    goto L_08A7576C;
L_08A7576C:;
    v0 = 0 + 0;
    sp = sp + 48;
    return v0;
L_08A75788:;
    a0 = LD32(s1+56);
    v0 = func_08A83A88(a0);
    goto L_08A75790;
L_08A75790:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A75768; }
    goto L_08A75798;
L_08A75798:;
    a0 = LD32(s1+56);
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A757A0;
L_08A757A0:;
    a1 = LD32(s1+8);
    a0 = s2 + 0;
    a2 = v0 + 0;
    a3 = sp + 0;
    t0 = 0 + 0;
    t1 = s3 + 32128;
    s0 = v0 + 0;
    v0 = func_08A717A8(a0, a1, a2, a3, t0, t1, 0);
    goto L_08A757C0;
L_08A757C0:;
    v1 = LD32(sp);
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A757F0; }
    goto L_08A757D0;
L_08A757D0:;
    v1 = LD32(s0+8);
    v0 = LD32(s0+12);
    cnd_ = v0 != v1;
    if (cnd_) { goto L_08A7576C; }
    goto L_08A757E0;
L_08A757E0:;
    a0 = LD32(s1+56);
    { u64 r_ = func_08A83C44(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A757E8;
L_08A757E8:;
    goto L_08A75788;
L_08A757F0:;
    v0 = 106;
    ST32(s1, v0);
    goto L_08A75768;
}

/* 08A757FC */
u32 func_08A757FC(u32 a0, u32 a1, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_08A757FC:;
    sp = sp - 80;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+48);
    cnd_ = v0 == 0;
    s4 = LD32(a0);
    if (cnd_) { goto L_08A7586C; }
    goto L_08A75830;
L_08A75830:;
    a1 = LD32(a1+8);
    t1 = D_08AE7D80 - (32128);
    a2 = s0 + 40;
    t1 = t1 + 32128;
    a3 = sp + 16;
    t0 = 1;
    v0 = func_08A717A8(a0, a1, a2, a3, t0, t1, t3);
    goto L_08A7584C;
L_08A7584C:;
    v1 = v0 + 0;
    v0 = LD32(sp+16);
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    v0 = 106;
    if (cnd_) { goto L_08A758C0; }
    goto L_08A75860;
L_08A75860:;
    v0 = LD32(s0+48);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s0+8); goto L_08A75894; }
    goto L_08A7586C;
L_08A7586C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08A7573C(a0, a1);
    goto L_08A75878;
L_08A75878:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A758C8; }
    goto L_08A75880;
L_08A75880:;
    v1 = LD32(s0);
    v0 = 106;
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A758C8; }
    goto L_08A75890;
L_08A75890:;
    a1 = LD32(s0+8);
    goto L_08A75894;
L_08A75894:;
    s2 = s0 + 24;
    t1 = D_08AE7D80 - (32128);
    t1 = t1 + 32128;
    a0 = s1 + 0;
    a2 = s2 + 0;
    a3 = sp + 20;
    t0 = sp + 16;
    v0 = func_08A71610(a0, a1, a2, a3, t0, t1, 0, 0);
    goto L_08A758B4;
L_08A758B4:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+20);
    if (cnd_) { goto L_08A758F0; }
    goto L_08A758BC;
L_08A758BC:;
    v0 = 106;
    goto L_08A758C0;
L_08A758C0:;
    a0 = 0 + 0;
    ST32(s0, v0);
    goto L_08A758C8;
L_08A758C8:;
    goto L_08A758CC;
L_08A758CC:;
    v0 = a0 + 0;
    sp = sp + 80;
    return v0;
L_08A758F0:;
    cnd_ = (s32)v0 <= 0;
    s5 = D_08AE7E24 - (32292);
    if (cnd_) { goto L_08A7590C; }
    goto L_08A758F8;
L_08A758F8:;
    a0 = 0 + 0;
    { u64 r_ = func_08A85A94(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75900;
L_08A75900:;
    v0 = v0 + 300;
    ST32(s0+16, v0);
    s5 = D_08AE7E24 - (32292);
    goto L_08A7590C;
L_08A7590C:;
    a0 = s1 + 0;
    goto L_08A75910;
L_08A75910:;
    a1 = s2 + 0;
    a2 = sp + 24;
    a3 = sp + 28;
    t0 = sp + 32;
    { u64 r_ = func_08A718D0(a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75924;
L_08A75924:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A758C8; }
    goto L_08A7592C;
L_08A7592C:;
    v0 = LD32(sp+24);
    cnd_ = v0 == 0;
    t0 = v0 + 0;
    if (cnd_) { goto L_08A75980; }
    goto L_08A75938;
L_08A75938:;
    a2 = LD32(sp+28);
    v0 = 102;
    cnd_ = a2 == v0;
    v0 = (s32)a2 < 103;
    if (cnd_) { goto L_08A75A48; }
    goto L_08A75948;
L_08A75948:;
    cnd_ = v0 == 0;
    v0 = a2 - 200;
    if (cnd_) { goto L_08A75A24; }
    goto L_08A75950;
L_08A75950:;
    v0 = 1;
    cnd_ = a2 == v0;
    if (cnd_) { v1 = LD32(s4+444); goto L_08A75A18; }
    goto L_08A7595C;
L_08A7595C:;
    v0 = 5;
    cnd_ = a2 == v0;
    if (cnd_) { v1 = LD32(s4+452); goto L_08A75998; }
    goto L_08A75968;
L_08A75968:;
    a0 = s1 + 0;
    goto L_08A7596C;
L_08A7596C:;
    a1 = s2 + 0;
    func_08A71A24(a1);
    goto L_08A75974;
L_08A75974:;
    v0 = LD32(sp+24);
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A75910; }
    goto L_08A75980;
L_08A75980:;
    v0 = LD32(sp+16);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A758C8; }
    goto L_08A7598C;
L_08A7598C:;
    v0 = 106;
    ST32(s0, v0);
    goto L_08A758C8;
L_08A75998:;
    ST32(sp, v1);
    v0 = LD32(s4+456);
    goto L_08A759A0;
L_08A759A0:;
    cnd_ = v1 == 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_08A75968; }
    goto L_08A759A8;
L_08A759A8:;
    a0 = 12;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A759B0;
L_08A759B0:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A75A00; }
    goto L_08A759B8;
L_08A759B8:;
    v0 = LD32(s0+12);
    a0 = LD32(sp+24);
    ST32(s3, v0);
    { u64 r_ = func_08A6B560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A759C8;
L_08A759C8:;
    ST32(s3+8, v0);
    a0 = 0 + 0;
    { u64 r_ = func_08A85A94(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A759D4;
L_08A759D4:;
    ST32(s3+4, v0);
    a0 = s1 + 0;
    a2 = s3 + 0;
    a1 = sp + 0;
    a3 = 0 + 0;
    t0 = 2;
    v0 = func_08A71B54(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_08A759F0;
L_08A759F0:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A75968; }
    goto L_08A759F8;
L_08A759F8:;
    goto L_08A758CC;
L_08A75A00:;
    a1 = D_08AE7E28 - (32296);
    a0 = s1 + 0;
    a1 = a1 + 32296;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75A10;
L_08A75A10:;
    a0 = 1;
    goto L_08A758C8;
L_08A75A18:;
    ST32(sp, v1);
    v0 = LD32(s4+448);
    goto L_08A759A0;
L_08A75A24:;
    v0 = v0 < 0x9u;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A7596C; }
    goto L_08A75A30;
L_08A75A30:;
    a3 = LD32(s0+24);
    t1 = LD32(sp+32);
    a1 = s0 + 0;
    func_08A7876C(a0, a1, a3);
    goto L_08A75A40;
L_08A75A40:;
    a0 = s1 + 0;
    goto L_08A7596C;
L_08A75A48:;
    a1 = LD32(s0+12);
    a0 = s1 + 0;
    a2 = 103;
    a3 = s5 + 32292;
    t0 = 0 + 0;
    func_08A70DF4(a0, a1, a2, a3, t0);
    goto L_08A75A60;
L_08A75A60:;
    a0 = s1 + 0;
    goto L_08A7596C;
}

/* 08A75A68 */
u32 func_08A75A68(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A75A68:;
    sp = sp - 16;
    v0 = 105;
    s1 = a0 + 0;
    a2 = 0 + 0;
    v1 = LD32(a1);
    cnd_ = v1 == v0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08A75AAC; }
    goto L_08A75A90;
L_08A75A90:;
    v0 = LD32(a1+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A75AE8; }
    goto L_08A75A9C;
L_08A75A9C:;
    v0 = func_08A75220(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A75AA4;
L_08A75AA4:;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A75AC0; }
    goto L_08A75AAC;
L_08A75AAC:;
    v1 = LD32(s0);
    v0 = 105;
    a0 = s1 + 0;
    cnd_ = v1 == v0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A75AD8; }
    goto L_08A75AC0;
L_08A75AC0:;
    v0 = a2 + 0;
    sp = sp + 16;
    return v0;
L_08A75AD8:;
    v0 = func_08A757FC(a0, a1, t3);
    goto L_08A75AE0;
L_08A75AE0:;
    a2 = v0 + 0;
    goto L_08A75AC0;
L_08A75AE8:;
    v0 = func_08A75544(a0, a1, t2, t3);
    goto L_08A75AF0;
L_08A75AF0:;
    goto L_08A75AA4;
}

/* 08A75AF8 */
u64 func_08A75AF8(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A75AF8:;
    sp = sp - 16;
    s0 = a1 + 0;
    a0 = LD32(a1+8);
    a1 = 2;
    v0 = sceNetInetShutdown(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A75B14;
L_08A75B14:;
    a0 = LD32(s0+8);
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A75B1C;
L_08A75B1C:;
    a0 = LD32(s0+24);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75B24;
L_08A75B24:;
    a0 = LD32(s0+40);
    ST32(s0+24, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75B30;
L_08A75B30:;
    v0 = LD32(s0+56);
    ST32(s0+40, 0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A75B58; }
    goto L_08A75B40;
L_08A75B40:;
    a0 = s0 + 0;
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75B48;
L_08A75B48:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A75B58:;
    { u64 r_ = func_08A83A24(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75B60;
L_08A75B60:;
    ST32(s0+56, 0);
    goto L_08A75B40;
}

/* 08A75B68 */
u64 func_08A75B68(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A75B68:;
    sp = sp - 16;
    s1 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+1100);
    cnd_ = v0 == a1;
    s0 = a1 + 0;
    if (cnd_) { goto L_08A75C3C; }
    goto L_08A75B8C;
L_08A75B8C:;
    v1 = v0 + 0;
    v0 = LD32(v0+60);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+60); goto L_08A75BB8; }
    goto L_08A75B9C;
L_08A75B9C:;
    v0 = LD32(v1+60);
    goto L_08A75BA0;
L_08A75BA0:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A75C28; }
    goto L_08A75BA8;
L_08A75BA8:;
    v0 = LD32(v0+60);
    cnd_ = v0 != s0;
    if (cnd_) { v0 = LD32(v1+60); goto L_08A75BA0; }
    goto L_08A75BB4;
L_08A75BB4:;
    v0 = LD32(s0+60);
    goto L_08A75BB8;
L_08A75BB8:;
    ST32(v1+60, v0);
    goto L_08A75BBC;
L_08A75BBC:;
    a0 = LD32(s0+56);
    v0 = func_08A83A88(a0);
    goto L_08A75BC4;
L_08A75BC4:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A75C1C; }
    goto L_08A75BCC;
L_08A75BCC:;
    a0 = LD32(s0+56);
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75BD4;
L_08A75BD4:;
    a3 = v0 + 0;
    v0 = LD32(v0+16);
    a2 = v0 + 0;
    v0 = (s32)v0 < 100;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A75C00; }
    goto L_08A75BEC;
L_08A75BEC:;
    a0 = LD32(s0+56);
    goto L_08A75BF0;
L_08A75BF0:;
    a1 = 0 + 0;
    { u64 r_ = func_08A83C44(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75BF8;
L_08A75BF8:;
    goto L_08A75BBC;
L_08A75C00:;
    v0 = LD32(a3+20);
    a3 = LD32(a3);
    a1 = LD32(s0+12);
    a3 = a3 + v0;
    v0 = func_08A70CEC(a0, a1, a2, a3);
    goto L_08A75C14;
L_08A75C14:;
    a0 = LD32(s0+56);
    goto L_08A75BF0;
L_08A75C1C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A75AF8(a1, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75C28;
L_08A75C28:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A75C3C:;
    v0 = LD32(a1+60);
    ST32(v1+1100, v0);
    goto L_08A75BBC;
}

/* 08A75C48 */
u64 func_08A75C48(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A75C48:;
    sp = sp - 16;
    a1 = 16384;
    s0 = a0 + 0;
    func_08A6B024(a0, a1, t1, t2, t3);
    goto L_08A75C60;
L_08A75C60:;
    a0 = s0 + 0;
    a1 = 0x8000;
    func_08A6B024(a0, a1, 0, 0, 0);
    goto L_08A75C6C;
L_08A75C6C:;
    a0 = s0 + 0;
    a1 = 0x10000u;
    func_08A6B024(a0, a1, 0, 0, 0);
    goto L_08A75C78;
L_08A75C78:;
    a0 = s0 + 0;
    a1 = 0x20000u;
    func_08A6B024(a0, a1, 0, 0, 0);
    goto L_08A75C84;
L_08A75C84:;
    a0 = s0 + 0;
    a1 = 0x40000u;
    func_08A6B024(a0, a1, 0, 0, 0);
    goto L_08A75C90;
L_08A75C90:;
    a0 = s0 + 0;
    a1 = 16384;
    func_08A6B058(a0, a1, 0, 0, 0);
    goto L_08A75C9C;
L_08A75C9C:;
    a0 = s0 + 0;
    a1 = 0x8000;
    func_08A6B058(a0, a1, 0, 0, 0);
    goto L_08A75CA8;
L_08A75CA8:;
    a1 = 0x10000u;
    a0 = s0 + 0;
    func_08A6B058(a0, a1, 0, 0, 0);
    goto L_08A75CB4;
L_08A75CB4:;
    a0 = s0 + 0;
    func_08A6B08C(a0, 0, 0, 0);
    goto L_08A75CBC;
L_08A75CBC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A6B0D0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75CC4;
L_08A75CC4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A75CD4 */
u64 func_08A75CD4(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A75CD4:;
    sp = sp - 32;
    s2 = a0 + 0;
    s0 = (u32)-1;
    s1 = LD32(a0);
    a0 = LD32(s1+540);
    cnd_ = a0 == s0;
    if (cnd_) { s0 = LD32(s1+1100); goto L_08A75D18; }
    goto L_08A75D04;
L_08A75D04:;
    { u64 r_ = func_08A6B358(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75D0C;
L_08A75D0C:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+540); goto L_08A75D98; }
    goto L_08A75D14;
L_08A75D14:;
    s0 = LD32(s1+1100);
    goto L_08A75D18;
L_08A75D18:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A75D7C; }
    goto L_08A75D20;
L_08A75D20:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    s1 = LD32(s0+60);
    v0 = func_08A75A68(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A75D30;
L_08A75D30:;
    v1 = LD32(s0);
    v0 = 0 < v0;
    v1 = v1 ^ 0x6a;
    v1 = v1 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A75D64; }
    goto L_08A75D4C;
L_08A75D4C:;
    { u64 r_ = func_08A85A94(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75D54;
L_08A75D54:;
    v1 = LD32(s0+16);
    v1 = (s32)v1 < (s32)v0;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A75D70; }
    goto L_08A75D64;
L_08A75D64:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    { u64 r_ = func_08A75B68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75D70;
L_08A75D70:;
    cnd_ = s1 != 0;
    s0 = s1 + 0;
    if (cnd_) { goto L_08A75D20; }
    goto L_08A75D78;
L_08A75D78:;
    goto L_08A75D7C;
L_08A75D7C:;
    v0 = 0 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08A75D98:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    v0 = sceNetInetAccept(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A75DA4;
L_08A75DA4:;
    cnd_ = v0 == s0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A75D14; }
    goto L_08A75DAC;
L_08A75DAC:;
    a0 = s2 + 0;
    a1 = (u32)-1;
    a2 = 0 + 0;
    v0 = func_08A75E74(a0, a1, a2, 0, 0, 0);
    goto L_08A75DBC;
L_08A75DBC:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A75DEC; }
    goto L_08A75DC4;
L_08A75DC4:;
    v0 = 104;
    ST32(s0, v0);
    a0 = s3 + 0;
    a1 = 0 + 0;
    ST32(s0+8, s3);
    v0 = func_08A6AFE4(a0, a1, 0, 0, 0);
    goto L_08A75DDC;
L_08A75DDC:;
    a0 = LD32(s0+8);
    { u64 r_ = func_08A75C48(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75DE4;
L_08A75DE4:;
    s0 = LD32(s1+1100);
    goto L_08A75D18;
L_08A75DEC:;
    a0 = s3 + 0;
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A75DF4;
L_08A75DF4:;
    s0 = LD32(s1+1100);
    goto L_08A75D18;
}

/* 08A75DFC */
u32 func_08A75DFC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_08A75DFC:;
    v0 = LD32(a0);
    v1 = LD32(v0+1100);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A75E2C; }
    goto L_08A75E0C;
L_08A75E0C:;
    a2 = 105;
    v0 = LD32(v1+12);
    goto L_08A75E14;
L_08A75E14:;
    cnd_ = v0 == a1;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A75E34; }
    goto L_08A75E1C;
L_08A75E1C:;
    v1 = LD32(v1+60);
    goto L_08A75E20;
L_08A75E20:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+12); goto L_08A75E14; }
    goto L_08A75E28;
L_08A75E28:;
    a0 = 0 + 0;
    goto L_08A75E2C;
L_08A75E2C:;
    v0 = a0 + 0;
    return v0;
L_08A75E34:;
    v0 = LD32(v1);
    cnd_ = v0 != a2;
    if (cnd_) { v1 = LD32(v1+60); goto L_08A75E20; }
    goto L_08A75E40;
L_08A75E40:;
    goto L_08A75E2C;
}

/* 08A75E48 */
rv_t func_08A75E48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A75E48:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0);
    { u64 r_ = func_08A6AFBC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75E60;
L_08A75E60:;
    ST32(s0, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A75E74 */
u32 func_08A75E74(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A75E74:;
    sp = sp - 32;
    v0 = a0 + 0;
    a0 = 64;
    s2 = a1 + 0;
    s1 = a2 + 0;
    s3 = LD32(v0);
    { u64 r_ = func_08A6AF74(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75EA4;
L_08A75EA4:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = 0 + 0;
    a2 = 64;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A75F14; }
    goto L_08A75EBC;
L_08A75EBC:;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75EC4;
L_08A75EC4:;
    v1 = 100;
    v0 = (u32)-1;
    ST32(s0, v1);
    a0 = 0 + 0;
    ST32(s0+4, s1);
    ST32(s0+8, v0);
    ST32(s0+12, s2);
    { u64 r_ = func_08A85A94(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A75EE4;
L_08A75EE4:;
    v1 = LD32(s3+1100);
    v0 = v0 + 300;
    ST32(s0+16, v0);
    a2 = RS_FADDR(func_08A75E48, 0x08A75E48u) - (24136);
    a2 = a2 + 24136;
    ST32(s0+60, v1);
    a0 = 24;
    a1 = 0 + 0;
    v0 = func_08A8399C(a0, a1, a2, 0, 0, 0);
    goto L_08A75F08;
L_08A75F08:;
    ST32(s3+1100, s0);
    ST32(s0+56, v0);
    v0 = s0 + 0;
    goto L_08A75F14;
L_08A75F14:;
    sp = sp + 32;
    return v0;
}

/* 08A75F30 */
u32 func_08A75F30(u32 a0, u32 a1, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A75F30:;
    sp = sp - 32;
    a2 = 0 + 0;
    s1 = a1 + 0;
    a3 = sp + 0;
    a1 = 2;
    t0 = 0 + 0;
    t1 = 0 + 0;
    t2 = 0 + 0;
    s0 = a0 + 0;
    v0 = func_08A74EDC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A75F64;
L_08A75F64:;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A75F88; }
    goto L_08A75F70;
L_08A75F70:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_08A75F88:;
    v0 = LD32(sp);
    a1 = LD32(s1+12);
    a2 = LD32(v0+24);
    v0 = func_08A748B4(a0, a1, a2);
    goto L_08A75F98;
L_08A75F98:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A75F70; }
    goto L_08A75FA0;
L_08A75FA0:;
    v0 = 101;
    ST32(s1, v0);
    v1 = 0 + 0;
    goto L_08A75F70;
}

/* 08A75FB0 */
u32 func_08A75FB0(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A75FB0:;
    sp = sp - 48;
    a2 = sp + 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = LD32(a1+12);
    v0 = func_08A766C4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A75FD8;
L_08A75FD8:;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A76108; }
    goto L_08A75FE0;
L_08A75FE0:;
    a0 = 2;
    a1 = 1;
    v0 = sceNetInetSocket(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A75FEC;
L_08A75FEC:;
    s2 = (u32)-1;
    a2 = D_08AE7E38 - (32312);
    ST32(s0+8, v0);
    cnd_ = v0 == s2;
    a2 = a2 + 32312;
    if (cnd_) { goto L_08A760EC; }
    goto L_08A76000;
L_08A76000:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    v0 = func_08A6AFE4(a0, a1, 0, 0, 0);
    goto L_08A7600C;
L_08A7600C:;
    cnd_ = v0 == 0;
    a2 = D_08AE7E60 - (32352);
    if (cnd_) { goto L_08A760E8; }
    goto L_08A76014;
L_08A76014:;
    a0 = LD32(s0+8);
    { u64 r_ = func_08A75C48(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7601C;
L_08A7601C:;
    v0 = 2;
    ST32(sp, 0);
    a1 = sp + 0;
    a2 = 16;
    ST8(sp+1, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    v0 = LD32(sp+16);
    a0 = LD32(s0+8);
    a3 = LD32(v0+8);
    v1 = LD32(a3+16);
    ST32(sp+4, v1);
    v0 = LD_U16(a3+20);
    ST16(sp+2, v0);
    v0 = sceNetInetConnect(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7605C;
L_08A7605C:;
    cnd_ = v0 == s2;
    v0 = 103;
    if (cnd_) { goto L_08A76084; }
    goto L_08A76064;
L_08A76064:;
    ST32(s0, v0);
    v0 = 0 + 0;
    goto L_08A7606C;
L_08A7606C:;
    sp = sp + 48;
    return v0;
L_08A76084:;
    v0 = sceNetInetGetErrno(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7608C;
L_08A7608C:;
    v1 = v0 ^ 0xb;
    a0 = v0 + 0;
    v0 = v0 ^ 0x77;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    v0 = 103;
    if (cnd_) { goto L_08A76064; }
    goto L_08A760AC;
L_08A760AC:;
    v0 = 116;
    cnd_ = a0 == v0;
    if (cnd_) { v0 = 103; goto L_08A76064; }
    goto L_08A760B8;
L_08A760B8:;
    a2 = D_08AE7E94 - (32404);
    a2 = a2 + 32404;
    a1 = 5;
    a0 = s1 + 0;
    func_08A78CEC(a0, a1, a2);
    goto L_08A760CC;
L_08A760CC:;
    a0 = s1 + 0;
    a1 = 3;
    a2 = 1;
    goto L_08A760D8;
L_08A760D8:;
    func_08A71AA0(a0, a1, a2, 0, 0, 0);
    goto L_08A760E0;
L_08A760E0:;
    v0 = 3;
    goto L_08A7606C;
L_08A760E8:;
    a2 = a2 + 32352;
    goto L_08A760EC;
L_08A760EC:;
    a1 = 5;
    a0 = s1 + 0;
    func_08A78CEC(a0, a1, a2);
    goto L_08A760F8;
L_08A760F8:;
    a0 = s1 + 0;
    a1 = 3;
    a2 = 0 + 0;
    goto L_08A760D8;
L_08A76108:;
    a1 = D_08AE7E00 - (32256);
    a0 = s1 + 0;
    a1 = a1 + 32256;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76118;
L_08A76118:;
    v0 = 3;
    goto L_08A7606C;
}

/* 08A76120 */
u32 func_08A76120(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A76120:;
    sp = sp - 64;
    s1 = a0 + 0;
    a0 = a3 + 0;
    s4 = a1 + 0;
    s2 = a3 + 0;
    s0 = a2 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76154;
L_08A76154:;
    a2 = D_08AE7EBC - (32444);
    a2 = a2 + 32444;
    a0 = s1 + 0;
    a1 = sp + 0;
    s3 = v0 + 0;
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    ST32(sp+20, 0);
    ST32(sp+16, s0);
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A76184;
L_08A76184:;
    v1 = v0 + 0;
    a2 = s0 + 0;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08A761BC; }
    goto L_08A76198;
L_08A76198:;
    v0 = v1 + 0;
    sp = sp + 64;
    return v0;
L_08A761BC:;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A761C4;
L_08A761C4:;
    a2 = D_08AE7EC0 - (32448);
    a2 = a2 + 32448;
    a0 = s1 + 0;
    a1 = sp + 0;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A76198; }
    goto L_08A761DC;
L_08A761DC:;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A761E4;
L_08A761E4:;
    v1 = v0 + 0;
    a2 = s3 + 0;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08A76198; }
    goto L_08A761F8;
L_08A761F8:;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A76200;
L_08A76200:;
    a2 = D_08AE7EC8 - (32456);
    a2 = a2 + 32456;
    a0 = s1 + 0;
    a1 = sp + 0;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A76198; }
    goto L_08A76218;
L_08A76218:;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A76220;
L_08A76220:;
    v1 = v0 + 0;
    a3 = s3 + 0;
    a2 = s2 + 0;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08A76198; }
    goto L_08A76238;
L_08A76238:;
    v0 = LD32(sp+8);
    ST32(sp+20, v0);
    v0 = func_08A71174(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A76244;
L_08A76244:;
    v1 = v0 + 0;
    a0 = s1 + 0;
    a2 = 0 + 0;
    cnd_ = v0 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08A76198; }
    goto L_08A76258;
L_08A76258:;
    v0 = func_08A710C0(a0, a1, a2, 0, 0, 0);
    goto L_08A76260;
L_08A76260:;
    v1 = v0 + 0;
    cnd_ = v0 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08A76198; }
    goto L_08A7626C;
L_08A7626C:;
    a0 = LD32(s4+56);
    func_08A83AC4(a0, a1, 0, 0, 0);
    goto L_08A76274;
L_08A76274:;
    a0 = 0 + 0;
    { u64 r_ = func_08A85A94(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7627C;
L_08A7627C:;
    v0 = v0 + 300;
    ST32(s4+16, v0);
    v1 = 0 + 0;
    goto L_08A76198;
}

/* 08A7628C */
u32 func_08A7628C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08A7628C:;
    sp = sp - 96;
    s1 = a1 + 0;
    a1 = D_08AE7ED0 - (32464);
    a1 = a1 + 32464;
    s0 = a0 + 0;
    t2 = LD32(a3+8);
    v1 = LD32(a3);
    v0 = LD32(a3+4);
    t1 = t2 + 0;
    a3 = v1 + 0;
    t0 = v0 + 0;
    a0 = sp + 0;
    ST32(sp+64, v1);
    ST32(sp+72, t2);
    ST32(sp+68, v0);
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A762D8;
L_08A762D8:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = sp + 0;
    v0 = func_08A715BC(a0, a1, a2);
    goto L_08A762E8;
L_08A762E8:;
    sp = sp + 96;
    return v0;
}

/* 08A762FC */
u32 func_08A762FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A762FC:;
    sp = sp - 64;
    s3 = a1 + 0;
    s2 = a0 + 0;
    s1 = a2 + 0;
    s0 = a3 + 0;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A763E8; }
    goto L_08A76328;
L_08A76328:;
    v0 = (u32)-1;
    cnd_ = s0 == v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A763D8; }
    goto L_08A76334;
L_08A76334:;
    a1 = D_08AE7EE4 - (32484);
    a0 = sp + 0;
    a1 = a1 + 32484;
    a2 = s0 + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A76348;
L_08A76348:;
    a0 = s2 + 0;
    a1 = s3 + 0;
    a2 = sp + 0;
    v0 = func_08A715BC(a0, a1, a2);
    goto L_08A76358;
L_08A76358:;
    v1 = v0 + 0;
    a3 = s0 + 0;
    a2 = s1 + 0;
    a0 = s2 + 0;
    cnd_ = v0 == 0;
    a1 = s3 + 0;
    if (cnd_) { goto L_08A76390; }
    goto L_08A76370;
L_08A76370:;
    v0 = v1 + 0;
    sp = sp + 64;
    return v0;
L_08A76390:;
    v0 = func_08A714B4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A76398;
L_08A76398:;
    v1 = v0 + 0;
    a2 = 0 + 0;
    a0 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = s3 + 0;
    if (cnd_) { goto L_08A76370; }
    goto L_08A763AC;
L_08A763AC:;
    v0 = func_08A71414(a0, a1, a2, 0, 0, 0);
    goto L_08A763B4;
L_08A763B4:;
    v1 = v0 + 0;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A76370; }
    goto L_08A763C0;
L_08A763C0:;
    { u64 r_ = func_08A85A94(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A763C8;
L_08A763C8:;
    v0 = v0 + 300;
    ST32(s3+16, v0);
    v1 = 0 + 0;
    goto L_08A76370;
L_08A763D8:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A763E0;
L_08A763E0:;
    s0 = v0 + 0;
    goto L_08A76334;
L_08A763E8:;
    v0 = D_08AE7EF4 - (32500);
    s1 = v0 + 32500;
    goto L_08A76328;
}

/* 08A763F4 */
rv_t func_08A763F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
L_08A763F4:;
    v1 = LD32(a0);
    { s32 x_ = (s32)v1, y_ = (s32)a1; if (y_ == 0) { lo = x_ < 0 ? 1 : 0xFFFFFFFFu; hi = (u32)x_; } else if (x_ == INT32_MIN && y_ == -1) { lo = 0x80000000u; hi = 0; } else { lo = (u32)(x_ / y_); hi = (u32)(x_ % y_); } }
    v0 = hi;
    return (rv_t){ v0, v1, f0 };
}

/* 08A76404 */
rv_t func_08A76404(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A76404:;
    v0 = LD32(a0);
    v1 = LD32(a1);
    v0 = v0 - v1;
    return (rv_t){ v0, v1, f0 };
}

/* 08A76414 */
rv_t func_08A76414(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A76414:;
    sp = sp - 16;
    v0 = LD32(a0+8);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A7645C; }
    goto L_08A7642C;
L_08A7642C:;
    a0 = s0 + 0;
    func_08A74C50(a0, t1, t2, t3);
    goto L_08A76434;
L_08A76434:;
    a0 = LD32(s0+16);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7643C;
L_08A7643C:;
    a0 = LD32(s0+24);
    ST32(s0+16, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76448;
L_08A76448:;
    ST32(s0+24, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A7645C:;
    a0 = LD32(v0+8);
    { u64 r_ = func_08A6AFBC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76464;
L_08A76464:;
    v0 = LD32(s0+8);
    a0 = LD32(v0+12);
    ST32(v0+8, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76474;
L_08A76474:;
    a0 = LD32(s0+8);
    ST32(a0+12, 0);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76480;
L_08A76480:;
    ST32(s0+8, 0);
    goto L_08A7642C;
}

/* 08A76488 */
u32 func_08A76488(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A76488:;
    sp = sp - 16;
    a2 = RS_FADDR(func_08A763F4, 0x08A763F4u) - (25588);
    a3 = RS_FADDR(func_08A76404, 0x08A76404u) - (25604);
    t0 = RS_FADDR(func_08A76414, 0x08A76414u) - (25620);
    a2 = a2 + 25588;
    s0 = LD32(a0);
    a3 = a3 + 25604;
    t0 = t0 + 25620;
    ST32(s0+1096, 0);
    a0 = 28;
    a1 = 32;
    ST32(s0+1092, 0);
    v0 = func_08A84094(a0, a1, a2, a3, t0, t2, t3);
    goto L_08A764C4;
L_08A764C4:;
    ST32(s0+1088, v0);
    v1 = 0 < v0;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 08A764E0 */
u32 func_08A764E0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A764E0:;
    sp = sp - 48;
    s0 = a2 + 0;
    a2 = 1;
    s1 = a1 + 0;
    a1 = s0 + 0;
    s2 = a0 + 0;
    v0 = func_08A78950(a0, a1, a2);
    goto L_08A7650C;
L_08A7650C:;
    cnd_ = v0 != 0;
    v1 = 4;
    if (cnd_) { goto L_08A765B0; }
    goto L_08A76514;
L_08A76514:;
    a1 = D_08AE7EF8 - (32504);
    a1 = a1 + 32504;
    a0 = s0 + 0;
    a2 = 5;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76528;
L_08A76528:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A765E4; }
    goto L_08A76530;
L_08A76530:;
    a1 = D_08AE7F00 - (32512);
    a1 = a1 + 32512;
    a2 = sp + 0;
    a3 = 16;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76544;
L_08A76544:;
    cnd_ = v0 == 0;
    a2 = D_08AE7F0C - (32524);
    if (cnd_) { goto L_08A765E8; }
    goto L_08A7654C;
L_08A7654C:;
    a0 = sp + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A76554;
L_08A76554:;
    s0 = v0 + 0;
    v1 = LD32(s1+12);
    v0 = LD32(s1+16);
    ST32(sp+16, v1);
    cnd_ = v1 == 0;
    ST32(sp+20, v0);
    if (cnd_) { goto L_08A765A0; }
    goto L_08A7656C;
L_08A7656C:;
    a0 = 8;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76574;
L_08A76574:;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A765CC; }
    goto L_08A7657C;
L_08A7657C:;
    ST32(v0+4, s0);
    a1 = sp + 16;
    ST32(v0, 0);
    a0 = s2 + 0;
    a3 = s1 + 0;
    t0 = 0 + 0;
    v0 = func_08A71B54(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_08A76598;
L_08A76598:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A765B0; }
    goto L_08A765A0;
L_08A765A0:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    func_08A75078(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A765AC;
L_08A765AC:;
    v1 = 0 + 0;
    goto L_08A765B0;
L_08A765B0:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_08A765CC:;
    a1 = D_08AE7F3C - (32572);
    a0 = s2 + 0;
    a1 = a1 + 32572;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A765DC;
L_08A765DC:;
    v1 = 1;
    goto L_08A765B0;
L_08A765E4:;
    a2 = D_08AE7F0C - (32524);
    goto L_08A765E8;
L_08A765E8:;
    a2 = a2 + 32524;
    a1 = 1;
    a0 = s2 + 0;
    func_08A78CEC(a0, a1, a2);
    goto L_08A765F8;
L_08A765F8:;
    a0 = s2 + 0;
    a1 = 3;
    a2 = 1;
    func_08A71AA0(a0, a1, a2, 0, 0, 0);
    goto L_08A76608;
L_08A76608:;
    v1 = 3;
    goto L_08A765B0;
}

/* 08A76610 */
u32 func_08A76610(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_08A76610:;
    sp = sp - 80;
    a2 = sp + 32;
    v0 = 0 + 0;
    s2 = a0 + 0;
    s0 = a1 + 0;
    s1 = LD32(a0);
    cnd_ = (s32)a1 <= 0;
    s3 = s1 + 1088;
    if (cnd_) { goto L_08A76658; }
    goto L_08A76644;
L_08A76644:;
    v0 = func_08A766C4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A7664C;
L_08A7664C:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1+1088); goto L_08A76674; }
    goto L_08A76654;
L_08A76654:;
    v0 = LD32(sp+32);
    goto L_08A76658;
L_08A76658:;
    sp = sp + 80;
    return v0;
L_08A76674:;
    a1 = sp + 0;
    ST32(sp+8, 0);
    ST32(sp, s0);
    ST32(sp+4, 0);
    ST32(sp+12, 0);
    ST32(sp+16, 0);
    ST32(sp+24, 0);
    ST32(sp+20, 0);
    func_08A84270(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A76698;
L_08A76698:;
    a0 = s2 + 0;
    v0 = LD32(s3+4);
    a1 = s0 + 0;
    a2 = sp + 32;
    v0 = v0 + 1;
    ST32(s3+4, v0);
    v0 = func_08A766C4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A766B4;
L_08A766B4:;
    v1 = LD32(sp+32);
    if (v0 == 0) v1 = 0;
    v0 = v1 + 0;
    goto L_08A76658;
}

/* 08A766C4 */
u32 func_08A766C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A766C4:;
    sp = sp - 48;
    v1 = a1 + 0;
    a1 = sp + 0;
    s0 = a2 + 0;
    v0 = LD32(a0);
    ST32(sp, v1);
    a0 = LD32(v0+1088);
    { rv_t r_ = func_08A843B0(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A766EC;
L_08A766EC:;
    cnd_ = s0 == 0;
    v1 = 0 < v0;
    if (cnd_) { goto L_08A766F8; }
    goto L_08A766F4;
L_08A766F4:;
    ST32(s0, v0);
    goto L_08A766F8;
L_08A766F8:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
}

/* 08A7670C */
u32 func_08A7670C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A7670C:;
    sp = sp - 48;
    s2 = a0 + 0;
    s1 = a1 + 0;
    a1 = a2 + 0;
    s0 = a2 + 0;
    a2 = 1;
    s3 = LD32(a0);
    v0 = func_08A78950(a0, a1, a2);
    goto L_08A76740;
L_08A76740:;
    a1 = D_08AE7FBC - (32700);
    a1 = a1 + 32700;
    a0 = s0 + 0;
    a2 = 5;
    cnd_ = v0 != 0;
    v1 = 4;
    if (cnd_) { goto L_08A767DC; }
    goto L_08A76758;
L_08A76758:;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76760;
L_08A76760:;
    a2 = D_08AE7F0C - (32524);
    a1 = 1;
    a0 = s2 + 0;
    cnd_ = v0 != 0;
    a2 = a2 + 32524;
    if (cnd_) { goto L_08A76810; }
    goto L_08A76774;
L_08A76774:;
    v1 = LD32(s1+12);
    v0 = LD32(s1+16);
    a0 = 8;
    ST32(sp, v1);
    cnd_ = v1 == 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_08A767CC; }
    goto L_08A7678C;
L_08A7678C:;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76794;
L_08A76794:;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A767FC; }
    goto L_08A767A0;
L_08A767A0:;
    v0 = LD32(s3+416);
    ST32(v1, 0);
    a2 = v1 + 0;
    a0 = s2 + 0;
    ST32(v1+4, v0);
    a1 = sp + 0;
    a3 = s1 + 0;
    t0 = 0 + 0;
    v0 = func_08A71B54(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_08A767C4;
L_08A767C4:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A767DC; }
    goto L_08A767CC;
L_08A767CC:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    func_08A75078(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A767D8;
L_08A767D8:;
    v1 = 0 + 0;
    goto L_08A767DC;
L_08A767DC:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_08A767FC:;
    a1 = D_08AE7F3C - (32572);
    a1 = a1 + 32572;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76808;
L_08A76808:;
    v1 = 1;
    goto L_08A767DC;
L_08A76810:;
    func_08A78CEC(a0, a1, a2);
    goto L_08A76818;
L_08A76818:;
    a0 = s2 + 0;
    a1 = 3;
    a2 = 1;
    func_08A71AA0(a0, a1, a2, 0, 0, 0);
    goto L_08A76828;
L_08A76828:;
    v1 = 3;
    goto L_08A767DC;
}

/* 08A76830 */
void func_08A76830(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A76830:;
    sp = sp - 32;
    a2 = sp + 0;
    s0 = LD32(a0);
    v0 = func_08A766C4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A76848;
L_08A76848:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+1088); goto L_08A76860; }
    goto L_08A76850;
L_08A76850:;
    goto L_08A76854;
L_08A76854:;
    sp = sp + 32;
    return;
L_08A76860:;
    a1 = LD32(sp);
    { rv_t r_ = func_08A84318(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A76868;
L_08A76868:;
    goto L_08A76854;
}

/* 08A76870 */
rv_t func_08A76870(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A76870:;
    sp = sp - 16;
    v0 = LD32(a0);
    a0 = LD32(v0+1088);
    { rv_t r_ = func_08A84318(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A76884;
L_08A76884:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A76890 */
rv_t func_08A76890(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A76890:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = LD32(a1+12);
    cnd_ = a1 != 0;
    s1 = a2 + 0;
    if (cnd_) { goto L_08A768CC; }
    goto L_08A768B0;
L_08A768B0:;
    a0 = 1;
    goto L_08A768B4;
L_08A768B4:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A768CC:;
    a1 = LD32(a1);
    a0 = LD32(a2);
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A768D8;
L_08A768D8:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = 1; goto L_08A768B4; }
    goto L_08A768E0;
L_08A768E0:;
    v0 = LD32(s0+12);
    a0 = LD32(s1+4);
    a1 = LD32(v0+8);
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A768F0;
L_08A768F0:;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A768B0; }
    goto L_08A768F8;
L_08A768F8:;
    v1 = LD32(s1+8);
    v0 = 1;
    ST32(s1+12, v0);
    ST32(v1, s0);
    goto L_08A768B4;
}

/* 08A7690C */
void func_08A7690C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7690C:;
    sp = sp - 32;
    v0 = a1 + 0;
    a1 = RS_FADDR(func_08A76890, 0x08A76890u) - (26768);
    v1 = a2 + 0;
    a1 = a1 + 26768;
    a2 = sp + 0;
    s0 = a3 + 0;
    ST32(sp+4, v1);
    ST32(sp, v0);
    ST32(sp+8, a3);
    ST32(sp+12, 0);
    { rv_t r_ = func_08A76990(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A76944;
L_08A76944:;
    v1 = LD32(sp+12);
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A76954; }
    goto L_08A76950;
L_08A76950:;
    ST32(s0, 0);
    goto L_08A76954;
L_08A76954:;
    sp = sp + 32;
    return;
}

/* 08A76964 */
rv_t func_08A76964(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A76964:;
    sp = sp - 16;
    v1 = a0 + 0;
    a2 = LD32(a1+8);
    a0 = LD32(a1);
    v0 = LD32(a1+4);
    t_ = v0;
    a1 = v1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A76984;
L_08A76984:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A76990 */
rv_t func_08A76990(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A76990:;
    sp = sp - 32;
    v1 = a0 + 0;
    a3 = a1 + 0;
    v0 = LD32(a0);
    a1 = RS_FADDR(func_08A76964, 0x08A76964u) - (26980);
    a1 = a1 + 26980;
    a0 = LD32(v0+1088);
    v0 = a2 + 0;
    a2 = sp + 0;
    ST32(sp, v1);
    ST32(sp+4, a3);
    ST32(sp+8, v0);
    { rv_t r_ = func_08A844D4(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A769C8;
L_08A769C8:;
    v0 = v0 < 0x1u;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A769D8 */
u32 func_08A769D8(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A769D8:;
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A76A0C; }
    goto L_08A769E0;
L_08A769E0:;
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A76A0C; }
    goto L_08A769EC;
L_08A769EC:;
    v0 = LD32(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A76A0C; }
    goto L_08A769F8;
L_08A769F8:;
    v0 = LD32(a0+24);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A76A0C; }
    goto L_08A76A04;
L_08A76A04:;
    v0 = LD32(a0+16);
    v1 = v0 < 0x1u;
    goto L_08A76A0C;
L_08A76A0C:;
    v0 = v1 + 0;
    return v0;
}

/* 08A76A14 */
u32 func_08A76A14(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A76A14:;
    sp = sp - 48;
    v0 = 4096;
    s2 = a1 + 0;
    s1 = a0 + 0;
    a0 = 4097;
    s0 = LD32(a1+4);
    ST32(s0+12, v0);
    { u64 r_ = func_08A6AF74(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76A48;
L_08A76A48:;
    cnd_ = v0 != 0;
    ST32(s0+8, v0);
    if (cnd_) { goto L_08A76A80; }
    goto L_08A76A50;
L_08A76A50:;
    a1 = D_08AE7FD4 - (32724);
    a0 = s1 + 0;
    a1 = a1 + 32724;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76A60;
L_08A76A60:;
    v0 = 1;
    goto L_08A76A64;
L_08A76A64:;
    sp = sp + 48;
    return v0;
L_08A76A80:;
    a2 = 6;
    a0 = 2;
    a1 = 1;
    v0 = sceNetInetSocket(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A76A90;
L_08A76A90:;
    s3 = (u32)-1;
    a2 = D_08AE7FE4 - (32740);
    ST32(s0+4, v0);
    cnd_ = v0 == s3;
    a2 = a2 + 32740;
    if (cnd_) { goto L_08A76B74; }
    goto L_08A76AA4;
L_08A76AA4:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    v0 = func_08A6AFE4(a0, a1, 0, 0, 0);
    goto L_08A76AB0;
L_08A76AB0:;
    a2 = D_08AE800C - (-32756);
    cnd_ = v0 == 0;
    a2 = a2 - 32756;
    if (cnd_) { goto L_08A76B74; }
    goto L_08A76ABC;
L_08A76ABC:;
    a0 = D_08B1D038 - (-12232);
    a0 = a0 - 12232;
    { u64 r_ = func_08A6A824(a0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76AC8;
L_08A76AC8:;
    a2 = D_08AE8040 - (-32704);
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a2 = a2 - 32704;
    if (cnd_) { goto L_08A76B74; }
    goto L_08A76AD8;
L_08A76AD8:;
    v0 = 2;
    ST32(sp, 0);
    v1 = 29901;
    v1 = WSBH(v1);
    ST32(sp+4, 0);
    a1 = sp + 0;
    a2 = 16;
    ST8(sp+1, v0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    a0 = LD32(a0+12);
    ST16(sp+2, v1);
    v0 = LD32(a0);
    v1 = LD32(v0);
    ST32(sp+4, v1);
    a0 = LD32(s0+4);
    v0 = sceNetInetConnect(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A76B1C;
L_08A76B1C:;
    cnd_ = v0 == s3;
    v0 = 1;
    if (cnd_) { goto L_08A76B38; }
    goto L_08A76B24;
L_08A76B24:;
    ST32(s2+20, v0);
    v0 = func_08A6B620(0, 0, 0, 0, 0, 0, 0);
    goto L_08A76B2C;
L_08A76B2C:;
    ST32(s0+324, v0);
    v0 = 0 + 0;
    goto L_08A76A64;
L_08A76B38:;
    v0 = sceNetInetGetErrno(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A76B40;
L_08A76B40:;
    v1 = v0 ^ 0xb;
    a0 = v0 + 0;
    v0 = v0 ^ 0x77;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A76B24; }
    goto L_08A76B60;
L_08A76B60:;
    v0 = 116;
    cnd_ = a0 == v0;
    if (cnd_) { v0 = 1; goto L_08A76B24; }
    goto L_08A76B6C;
L_08A76B6C:;
    a2 = D_08AE8070 - (-32656);
    a2 = a2 - 32656;
    goto L_08A76B74;
L_08A76B74:;
    a1 = 5;
    a0 = s1 + 0;
    func_08A78CEC(a0, a1, a2);
    goto L_08A76B80;
L_08A76B80:;
    a0 = s1 + 0;
    a1 = 3;
    a2 = 1;
    func_08A71AA0(a0, a1, a2, 0, 0, 0);
    goto L_08A76B90;
L_08A76B90:;
    v0 = 3;
    goto L_08A76A64;
}

/* 08A76B98 */
u32 func_08A76B98(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A76B98:;
    sp = sp - 32;
    s2 = a0 + 0;
    a0 = 328;
    s3 = a1 + 0;
    s1 = a2 + 0;
    { u64 r_ = func_08A6AF74(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76BC4;
L_08A76BC4:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a2 = 328;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A76C64; }
    goto L_08A76BD8;
L_08A76BD8:;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76BE0;
L_08A76BE0:;
    v0 = (u32)-1;
    v1 = 4096;
    ST32(s0, s1);
    a0 = 4097;
    ST32(s0+4, v0);
    ST32(s0+28, v1);
    ST32(s0+8, 0);
    ST32(s0+16, 0);
    ST32(s0+20, 0);
    ST32(s0+12, 0);
    ST32(s0+32, 0);
    ST32(s0+36, 0);
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76C14;
L_08A76C14:;
    a1 = D_08AE7FD4 - (32724);
    a0 = s2 + 0;
    a1 = a1 + 32724;
    cnd_ = v0 == 0;
    ST32(s0+24, v0);
    if (cnd_) { goto L_08A76C54; }
    goto L_08A76C28;
L_08A76C28:;
    ST32(s3, s0);
    v0 = 0 + 0;
    ST32(s0+316, 0);
    ST32(s0+320, 0);
    goto L_08A76C38;
L_08A76C38:;
    sp = sp + 32;
    return v0;
L_08A76C54:;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76C5C;
L_08A76C5C:;
    v0 = 1;
    goto L_08A76C38;
L_08A76C64:;
    a1 = D_08AE7FD4 - (32724);
    a0 = s2 + 0;
    a1 = a1 + 32724;
    goto L_08A76C54;
}

/* 08A76C74 */
rv_t func_08A76C74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t3)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A76C74:;
    sp = sp - 32;
    t1 = a2 + 0;
    t2 = t0 + 0;
    a2 = a1 + 0;
    t0 = t1 + 0;
    v1 = LD32(a0);
    t1 = a3 + 0;
    a1 = 3;
    v0 = LD32(v1+552);
    a3 = sp + 0;
    s0 = a0 + 0;
    v0 = v0 + 1;
    ST32(v1+552, v0);
    v0 = func_08A74EDC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A76CB4;
L_08A76CB4:;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A76CD4; }
    goto L_08A76CC0;
L_08A76CC0:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A76CD4:;
    a1 = LD32(sp);
    v0 = func_08A76A14(a0, a1, 0, 0, 0);
    goto L_08A76CDC;
L_08A76CDC:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A76CC0; }
    goto L_08A76CE4;
L_08A76CE4:;
    v1 = LD32(sp);
    v0 = LD32(v1+8);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A76CFC; }
    goto L_08A76CF4;
L_08A76CF4:;
    v1 = 0 + 0;
    goto L_08A76CC0;
L_08A76CFC:;
    a1 = LD32(v1+24);
    { rv_t r_ = func_08A70334(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A76D04;
L_08A76D04:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A76CC0; }
    goto L_08A76D0C;
L_08A76D0C:;
    v1 = 0 + 0;
    goto L_08A76CC0;
}

/* 08A76D14 */
u32 func_08A76D14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, u32 sp_in)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64); memcpy(stack_ + 64, PTR(sp_in), 16); /* stack-passed arguments */
L_08A76D14:;
    sp = sp - 64;
    s7 = t2 + 0;
    s6 = a0 + 0;
    s5 = t3 + 0;
    s4 = t1 + 0;
    s3 = t0 + 0;
    s2 = a2 + 0;
    s1 = a3 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A76D6C; }
    goto L_08A76D60;
L_08A76D60:;
    v0 = (u32)(s32)LD_S8(a1);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s6 + 0; goto L_08A76E04; }
    goto L_08A76D6C;
L_08A76D6C:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08A76D80; }
    goto L_08A76D74;
L_08A76D74:;
    v0 = (u32)(s32)LD_S8(s1);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s6 + 0; goto L_08A76E04; }
    goto L_08A76D80;
L_08A76D80:;
    cnd_ = s3 == 0;
    if (cnd_) { goto L_08A76D94; }
    goto L_08A76D88;
L_08A76D88:;
    v0 = (u32)(s32)LD_S8(s3);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s6 + 0; goto L_08A76E04; }
    goto L_08A76D94;
L_08A76D94:;
    cnd_ = s4 == 0;
    if (cnd_) { goto L_08A76DA8; }
    goto L_08A76D9C;
L_08A76D9C:;
    v0 = (u32)(s32)LD_S8(s4);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s6 + 0; goto L_08A76E04; }
    goto L_08A76DA8;
L_08A76DA8:;
    cnd_ = s7 != 0;
    if (cnd_) { a0 = s6 + 0; goto L_08A76E04; }
    goto L_08A76DB0;
L_08A76DB0:;
    cnd_ = s2 == 0;
    a1 = D_08AE8098 - (-32616);
    if (cnd_) { goto L_08A76DC8; }
    goto L_08A76DB8;
L_08A76DB8:;
    v0 = (u32)(s32)LD_S8(s2);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s6 + 0; goto L_08A76E04; }
    goto L_08A76DC4;
L_08A76DC4:;
    a1 = D_08AE8098 - (-32616);
    goto L_08A76DC8;
L_08A76DC8:;
    a1 = a1 - 32616;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76DD0;
L_08A76DD0:;
    v1 = 2;
    goto L_08A76DD4;
L_08A76DD4:;
    v0 = v1 + 0;
    sp = sp + 64;
    return v0;
L_08A76E04:;
    a1 = sp + 0;
    a2 = 1;
    v0 = func_08A76B98(a0, a1, a2, t1, t2, t3);
    goto L_08A76E10;
L_08A76E10:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A76DD4; }
    goto L_08A76E18;
L_08A76E18:;
    cnd_ = s0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A76F00; }
    goto L_08A76E20;
L_08A76E20:;
    a0 = LD32(sp);
    a2 = 31;
    a0 = a0 + 40;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76E30;
L_08A76E30:;
    cnd_ = s2 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08A76EF4; }
    goto L_08A76E38;
L_08A76E38:;
    a0 = LD32(sp);
    a2 = 21;
    a0 = a0 + 71;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76E48;
L_08A76E48:;
    cnd_ = s1 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08A76EE8; }
    goto L_08A76E50;
L_08A76E50:;
    a0 = LD32(sp);
    a2 = 51;
    a0 = a0 + 92;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76E60;
L_08A76E60:;
    a0 = LD32(sp);
    a0 = a0 + 92;
    func_08A6B5C0(a0);
    goto L_08A76E6C;
L_08A76E6C:;
    cnd_ = s3 == 0;
    a1 = s3 + 0;
    if (cnd_) { goto L_08A76EDC; }
    goto L_08A76E74;
L_08A76E74:;
    a0 = LD32(sp);
    a2 = 31;
    a0 = a0 + 143;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76E84;
L_08A76E84:;
    cnd_ = s4 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08A76ED0; }
    goto L_08A76E8C;
L_08A76E8C:;
    a1 = s4 + 0;
    a2 = 31;
    a0 = a0 + 174;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76E9C;
L_08A76E9C:;
    v0 = LD32(sp);
    v1 = 0 + 0;
    s5 = (s32)s5 > (s32)v1 ? s5 : v1;
    ST32(v0+304, s7);
    a0 = s6 + 0;
    a1 = v0 + 0;
    ST32(v0+308, s5);
    a2 = LD32(sp+64);
    a3 = LD32(sp+68);
    t0 = LD32(sp+72);
    { rv_t r_ = func_08A76C74(a0, a1, a2, a3, t0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A76EC8;
L_08A76EC8:;
    v1 = v0 + 0;
    goto L_08A76DD4;
L_08A76ED0:;
    v0 = LD32(sp);
    ST8(v0+174, 0);
    goto L_08A76E9C;
L_08A76EDC:;
    v0 = LD32(sp);
    ST8(v0+143, 0);
    goto L_08A76E84;
L_08A76EE8:;
    v0 = LD32(sp);
    ST8(v0+92, 0);
    goto L_08A76E60;
L_08A76EF4:;
    v0 = LD32(sp);
    ST8(v0+71, 0);
    goto L_08A76E48;
L_08A76F00:;
    v0 = LD32(sp);
    ST8(v0+40, 0);
    goto L_08A76E30;
}

/* 08A76F0C */
rv_t func_08A76F0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A76F0C:;
    sp = sp - 48;
    s4 = a2 + 0;
    a2 = 8;
    s0 = a1 + 0;
    a1 = sp + 0;
    s3 = t0 + 0;
    s2 = a3 + 0;
    s1 = a0 + 0;
    v0 = func_08A76B98(a0, a1, a2, t1, t2, t3);
    goto L_08A76F48;
L_08A76F48:;
    v1 = v0 + 0;
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    a2 = 21;
    if (cnd_) { goto L_08A76F7C; }
    goto L_08A76F58;
L_08A76F58:;
    v0 = v1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A76F7C:;
    a0 = LD32(sp);
    a0 = a0 + 71;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A76F88;
L_08A76F88:;
    a1 = LD32(sp);
    a0 = s1 + 0;
    a2 = s4 + 0;
    a3 = s2 + 0;
    t0 = s3 + 0;
    { rv_t r_ = func_08A76C74(a0, a1, a2, a3, t0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A76FA0;
L_08A76FA0:;
    v1 = v0 + 0;
    goto L_08A76F58;
}

/* 08A76FA8 */
u32 func_08A76FA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[1232] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 1232);
L_08A76FA8:;
    sp = sp - 1232;
    s5 = a1 + 0;
    s3 = a0 + 0;
    v0 = LD32(a1+8);
    v1 = LD32(a0);
    s2 = LD32(a1+4);
    s7 = 0 < v0;
    cnd_ = v0 == 0;
    ST32(sp+1168, v1);
    if (cnd_) { goto L_08A78510; }
    goto L_08A76FF4;
L_08A76FF4:;
    s4 = s2 + 24;
    goto L_08A76FF8;
L_08A76FF8:;
    a1 = LD32(s2+4);
    goto L_08A76FFC;
L_08A76FFC:;
    a2 = s4 + 0;
    a0 = s3 + 0;
    a3 = sp + 1152;
    t1 = D_08AE80D0 - (-32560);
    t1 = t1 - 32560;
    t0 = 1;
    v0 = func_08A717A8(a0, a1, a2, a3, t0, t1, t3);
    goto L_08A77018;
L_08A77018:;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A77050; }
    goto L_08A77020;
L_08A77020:;
    s0 = LD32(s5+20);
    s1 = 1;
    cnd_ = s0 == s1;
    v0 = 4;
    if (cnd_) { goto L_08A77DE8; }
    goto L_08A77030;
L_08A77030:;
    cnd_ = s0 == v0;
    if (cnd_) { a1 = LD32(s2+4); goto L_08A77084; }
    goto L_08A77038;
L_08A77038:;
    cnd_ = s7 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A77050; }
    goto L_08A77040;
L_08A77040:;
    a0 = 10;
    func_08A6B694(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A77048;
L_08A77048:;
    a1 = LD32(s2+4);
    goto L_08A76FFC;
L_08A77050:;
    goto L_08A77054;
L_08A77054:;
    v0 = a2 + 0;
    sp = sp + 1232;
    return v0;
L_08A77084:;
    a0 = s3 + 0;
    a2 = s2 + 8;
    a3 = sp + 1160;
    t1 = D_08AE80D0 - (-32560);
    t1 = t1 - 32560;
    t0 = sp + 1152;
    v0 = func_08A71610(a0, a1, a2, a3, t0, t1, 0, 0);
    goto L_08A770A0;
L_08A770A0:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A77DC8; }
    goto L_08A770A8;
L_08A770A8:;
    v0 = LD32(s5+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s2+8); goto L_08A770D8; }
    goto L_08A770B4;
L_08A770B4:;
    v0 = func_08A6B620(0, 0, 0, 0, 0, 0, 0);
    goto L_08A770BC;
L_08A770BC:;
    a0 = LD32(s2+324);
    v1 = 0xea60;
    v0 = v0 - a0;
    v1 = v1 < v0;
    cnd_ = v1 != 0;
    if (cnd_) { ST32(s2+320, s1); goto L_08A77DA4; }
    goto L_08A770D4;
L_08A770D4:;
    a0 = LD32(s2+8);
    goto L_08A770D8;
L_08A770D8:;
    a1 = D_08AE80D4 - (-32556);
    a1 = a1 - 32556;
    { u64 r_ = func_08A89EE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A770E4;
L_08A770E4:;
    cnd_ = v0 == 0;
    s6 = 5;
    if (cnd_) { goto L_08A77038; }
    goto L_08A770EC;
L_08A770EC:;
    ST32(s5+20, s6);
    a0 = s3 + 0;
    a2 = 1;
    a1 = LD32(s2+8);
    ST32(sp+1164, 0);
    v0 = func_08A78950(a0, a1, a2);
    goto L_08A77104;
L_08A77104:;
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08A77D98; }
    goto L_08A7710C;
L_08A7710C:;
    v1 = LD32(s2);
    cnd_ = v1 == v0;
    v0 = 2;
    if (cnd_) { goto L_08A77AD0; }
    goto L_08A77118;
L_08A77118:;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_08A77A44; }
    goto L_08A77120;
L_08A77120:;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(s5+12); goto L_08A77884; }
    goto L_08A77128;
L_08A77128:;
    cnd_ = v1 == s0;
    if (cnd_) { v1 = LD32(s5+12); goto L_08A776A4; }
    goto L_08A77130;
L_08A77130:;
    cnd_ = v1 == s6;
    v0 = 6;
    if (cnd_) { goto L_08A77610; }
    goto L_08A77138;
L_08A77138:;
    cnd_ = v1 == v0;
    v0 = 7;
    if (cnd_) { goto L_08A77548; }
    goto L_08A77140;
L_08A77140:;
    cnd_ = v1 == v0;
    v0 = 8;
    if (cnd_) { goto L_08A77304; }
    goto L_08A77148;
L_08A77148:;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(s5+12); goto L_08A77160; }
    goto L_08A77150;
L_08A77150:;
    v0 = 1;
    ST32(s2+320, v0);
    s7 = 0 + 0;
    goto L_08A77038;
L_08A77160:;
    v0 = LD32(s5+16);
    ST32(sp+1040, v1);
    cnd_ = v1 == 0;
    ST32(sp+1044, v0);
    if (cnd_) { goto L_08A77150; }
    goto L_08A77170;
L_08A77170:;
    a0 = 12;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77178;
L_08A77178:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    s7 = 0 + 0;
    if (cnd_) { goto L_08A7729C; }
    goto L_08A77184;
L_08A77184:;
    ST32(v0, 0);
    fp = sp + 528;
    a2 = sp + 1164;
    ST32(v0+4, 0);
    a0 = s3 + 0;
    a3 = sp + 16;
    ST32(v0+8, 0);
    t0 = fp + 0;
    a1 = LD32(s2+8);
    v0 = func_08A78BC8(a0, a1, a2, a3, t0);
    goto L_08A771AC;
L_08A771AC:;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A77050; }
    goto L_08A771B4;
L_08A771B4:;
    a1 = D_08AE80DC - (-32548);
    a1 = a1 - 32548;
    a0 = sp + 16;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A771C4;
L_08A771C4:;
    cnd_ = v0 != 0;
    a2 = D_08AE80E0 - (-32544);
    if (cnd_) { goto L_08A772D8; }
    goto L_08A771CC;
L_08A771CC:;
    a0 = fp + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A771D4;
L_08A771D4:;
    ST32(s1+4, v0);
    v0 = v0 << 2;
    a0 = v0 + 0;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A771E4;
L_08A771E4:;
    cnd_ = v0 == 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A7729C; }
    goto L_08A771EC;
L_08A771EC:;
    a1 = LD32(s2+8);
    goto L_08A771F0;
L_08A771F0:;
    a2 = sp + 1164;
    a0 = s3 + 0;
    a3 = sp + 16;
    t0 = fp + 0;
    v0 = func_08A78BC8(a0, a1, a2, a3, t0);
    goto L_08A77204;
L_08A77204:;
    v1 = D_08AE8108 - (-32504);
    s6 = s7 << 2;
    a1 = v1 - 32504;
    a0 = sp + 16;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A77050; }
    goto L_08A7721C;
L_08A7721C:;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77224;
L_08A77224:;
    cnd_ = v0 != 0;
    a0 = 21;
    if (cnd_) { goto L_08A772B4; }
    goto L_08A7722C;
L_08A7722C:;
    s0 = LD32(s1+8);
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77234;
L_08A77234:;
    v1 = LD32(s1+8);
    s0 = s6 + s0;
    ST32(s0, v0);
    v1 = s6 + v1;
    s7 = s7 + 1;
    v0 = LD32(v1);
    a1 = fp + 0;
    a2 = 21;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A7729C; }
    goto L_08A7725C;
L_08A7725C:;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77264;
L_08A77264:;
    v0 = 0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s2+8); goto L_08A771F0; }
    goto L_08A77270;
L_08A77270:;
    a2 = s1 + 0;
    a0 = s3 + 0;
    a1 = sp + 1040;
    a3 = s5 + 0;
    t0 = 9;
    goto L_08A77284;
L_08A77284:;
    v0 = func_08A71B54(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_08A7728C;
L_08A7728C:;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A77150; }
    goto L_08A77294;
L_08A77294:;
    goto L_08A77054;
L_08A7729C:;
    a1 = D_08AE7FD4 - (32724);
    goto L_08A772A0;
L_08A772A0:;
    a0 = s3 + 0;
    a1 = a1 + 32724;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A772AC;
L_08A772AC:;
    a2 = 1;
    goto L_08A77050;
L_08A772B4:;
    a1 = D_08AE8110 - (-32496);
    a1 = a1 - 32496;
    a0 = sp + 16;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A772C4;
L_08A772C4:;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = D_08AE80E0 - (-32544); goto L_08A772D8; }
    goto L_08A772CC;
L_08A772CC:;
    ST32(s1+4, s7);
    goto L_08A77270;
L_08A772D4:;
    a2 = D_08AE80E0 - (-32544);
    goto L_08A772D8;
L_08A772D8:;
    a2 = a2 - 32544;
    goto L_08A772DC;
L_08A772DC:;
    a1 = 1;
    a0 = s3 + 0;
    func_08A78CEC(a0, a1, a2);
    goto L_08A772E8;
L_08A772E8:;
    a0 = s3 + 0;
    a1 = 3;
    a2 = 1;
    goto L_08A772F4;
L_08A772F4:;
    func_08A71AA0(a0, a1, a2, 0, 0, 0);
    goto L_08A772FC;
L_08A772FC:;
    a2 = 3;
    goto L_08A77050;
L_08A77304:;
    v1 = LD32(s5+12);
    v0 = LD32(s5+16);
    ST32(sp+1040, v1);
    cnd_ = v1 == 0;
    ST32(sp+1044, v0);
    if (cnd_) { goto L_08A77150; }
    goto L_08A77318;
L_08A77318:;
    a0 = 12;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77320;
L_08A77320:;
    cnd_ = v0 == 0;
    s7 = v0 + 0;
    if (cnd_) { goto L_08A7729C; }
    goto L_08A77328;
L_08A77328:;
    ST32(v0, 0);
    fp = sp + 528;
    a2 = sp + 1164;
    ST32(v0+4, 0);
    a0 = s3 + 0;
    a3 = sp + 16;
    ST32(v0+8, 0);
    t0 = fp + 0;
    a1 = LD32(s2+8);
    v0 = func_08A78BC8(a0, a1, a2, a3, t0);
    goto L_08A77350;
L_08A77350:;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A77050; }
    goto L_08A77358;
L_08A77358:;
    a1 = D_08AE8118 - (-32488);
    a1 = a1 - 32488;
    a0 = sp + 16;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77368;
L_08A77368:;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = D_08AE80E0 - (-32544); goto L_08A772D8; }
    goto L_08A77370;
L_08A77370:;
    a1 = LD32(s2+8);
    goto L_08A77374;
L_08A77374:;
    a2 = sp + 1164;
    a0 = s3 + 0;
    a3 = sp + 16;
    t0 = fp + 0;
    v0 = func_08A78BC8(a0, a1, a2, a3, t0);
    goto L_08A77388;
L_08A77388:;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A77050; }
    goto L_08A77390;
L_08A77390:;
    v1 = D_08AE8120 - (-32480);
    a0 = sp + 16;
    a1 = v1 - 32480;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A773A0;
L_08A773A0:;
    cnd_ = v0 == 0;
    v0 = D_08AE8128 - (-32472);
    if (cnd_) { goto L_08A774B8; }
    goto L_08A773A8;
L_08A773A8:;
    a0 = sp + 16;
    a1 = v0 - 32472;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A773B4;
L_08A773B4:;
    cnd_ = v0 != 0;
    s1 = 172;
    if (cnd_) { goto L_08A772D4; }
    goto L_08A773BC;
L_08A773BC:;
    a1 = LD32(s7+4);
    a0 = LD32(s7+8);
    { s64 p_ = (s64)(s32)a1 * (s32)s1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = lo;
    a1 = a1 + 172;
    v0 = func_08A6AF98(a0, a1, 0, 0, 0);
    goto L_08A773D4;
L_08A773D4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A7729C; }
    goto L_08A773DC;
L_08A773DC:;
    v0 = LD32(s7+4);
    ST32(s7+8, s0);
    a1 = 0 + 0;
    { s64 p_ = (s64)(s32)v0 * (s32)s1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a2 = 172;
    s6 = 0 + 0;
    v0 = lo;
    s1 = s0 + v0;
    a0 = s1 + 0;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77404;
L_08A77404:;
    v1 = LD32(s7+4);
    a0 = fp + 0;
    v1 = v1 + 1;
    ST32(s7+4, v1);
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A77418;
L_08A77418:;
    ST32(s1, v0);
    a1 = LD32(s2+8);
    goto L_08A77420;
L_08A77420:;
    a2 = sp + 1164;
    a0 = s3 + 0;
    a3 = sp + 16;
    t0 = fp + 0;
    s0 = LD32(sp+1164);
    v0 = func_08A78BC8(a0, a1, a2, a3, t0);
    goto L_08A77438;
L_08A77438:;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A77050; }
    goto L_08A77440;
L_08A77440:;
    v0 = D_08AE8108 - (-32504);
    a0 = sp + 16;
    a1 = v0 - 32504;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77450;
L_08A77450:;
    cnd_ = v0 == 0;
    a0 = s1 + 4;
    if (cnd_) { goto L_08A77494; }
    goto L_08A77458;
L_08A77458:;
    v1 = D_08AE812C - (-32468);
    a0 = sp + 16;
    a1 = v1 - 32468;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77468;
L_08A77468:;
    a0 = s1 + 35;
    a1 = fp + 0;
    cnd_ = v0 == 0;
    a2 = 21;
    if (cnd_) { goto L_08A7749C; }
    goto L_08A77478;
L_08A77478:;
    v0 = D_08AE8138 - (-32456);
    a0 = sp + 16;
    a1 = v0 - 32456;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77488;
L_08A77488:;
    cnd_ = v0 != 0;
    v1 = D_08AE8140 - (-32448);
    if (cnd_) { goto L_08A774D0; }
    goto L_08A77490;
L_08A77490:;
    a0 = s1 + 56;
    goto L_08A77494;
L_08A77494:;
    a1 = fp + 0;
    a2 = 31;
    goto L_08A7749C;
L_08A7749C:;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A774A4;
L_08A774A4:;
    cnd_ = s6 == 0;
    if (cnd_) { a1 = LD32(s2+8); goto L_08A77420; }
    goto L_08A774AC;
L_08A774AC:;
    v1 = 0 + 0;
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD32(s2+8); goto L_08A77374; }
    goto L_08A774B8;
L_08A774B8:;
    a2 = s7 + 0;
    a0 = s3 + 0;
    a1 = sp + 1040;
    a3 = s5 + 0;
    t0 = 8;
    goto L_08A77284;
L_08A774D0:;
    a0 = sp + 16;
    a1 = v1 - 32448;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A774DC;
L_08A774DC:;
    cnd_ = v0 == 0;
    a0 = s1 + 87;
    if (cnd_) { goto L_08A77494; }
    goto L_08A774E4;
L_08A774E4:;
    v0 = D_08AE8148 - (-32440);
    a0 = sp + 16;
    a1 = v0 - 32440;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A774F4;
L_08A774F4:;
    cnd_ = v0 != 0;
    v1 = D_08AE8128 - (-32472);
    if (cnd_) { goto L_08A7750C; }
    goto L_08A774FC;
L_08A774FC:;
    a0 = s1 + 118;
    a1 = fp + 0;
    a2 = 51;
    goto L_08A7749C;
L_08A7750C:;
    a0 = sp + 16;
    a1 = v1 - 32472;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77518;
L_08A77518:;
    cnd_ = v0 != 0;
    v0 = D_08AE8120 - (-32480);
    if (cnd_) { goto L_08A7752C; }
    goto L_08A77520;
L_08A77520:;
    ST32(sp+1164, s0);
    goto L_08A77524;
L_08A77524:;
    s6 = 1;
    goto L_08A774A4;
L_08A7752C:;
    a0 = sp + 16;
    a1 = v0 - 32480;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77538;
L_08A77538:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A774A4; }
    goto L_08A77540;
L_08A77540:;
    ST32(sp+1164, s0);
    goto L_08A77524;
L_08A77548:;
    v1 = LD32(s5+12);
    v0 = LD32(s5+16);
    ST32(sp+1040, v1);
    cnd_ = v1 == 0;
    ST32(sp+1044, v0);
    if (cnd_) { goto L_08A77150; }
    goto L_08A7755C;
L_08A7755C:;
    a1 = LD32(s2+8);
    a2 = sp + 1164;
    a0 = s3 + 0;
    a3 = sp + 16;
    t0 = sp + 528;
    v0 = func_08A78BC8(a0, a1, a2, a3, t0);
    goto L_08A77574;
L_08A77574:;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A77050; }
    goto L_08A7757C;
L_08A7757C:;
    a1 = D_08AE8150 - (-32432);
    a1 = a1 - 32432;
    a0 = sp + 16;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7758C;
L_08A7758C:;
    cnd_ = v0 != 0;
    a2 = D_08AE80E0 - (-32544);
    if (cnd_) { goto L_08A772D8; }
    goto L_08A77594;
L_08A77594:;
    a0 = sp + 528;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7759C;
L_08A7759C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A775AC; }
    goto L_08A775A4;
L_08A775A4:;
    v0 = LD32(sp+1168);
    ST32(v0+1072, s0);
    goto L_08A775AC;
L_08A775AC:;
    a0 = LD32(s2+8);
    a1 = D_08AE8154 - (-32428);
    a1 = a1 - 32428;
    a2 = sp + 528;
    a3 = 512;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A775C4;
L_08A775C4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A77600; }
    goto L_08A775CC;
L_08A775CC:;
    cnd_ = s0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A772D4; }
    goto L_08A775D4;
L_08A775D4:;
    a0 = 8;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A775DC;
L_08A775DC:;
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A7729C; }
    goto L_08A775E4;
L_08A775E4:;
    ST32(v0, s0);
    a2 = v0 + 0;
    ST32(v0+4, s1);
    goto L_08A775F0;
L_08A775F0:;
    a1 = sp + 1040;
    a3 = s5 + 0;
    t0 = 0 + 0;
    goto L_08A77284;
L_08A77600:;
    a0 = sp + 528;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A77608;
L_08A77608:;
    s1 = v0 + 0;
    goto L_08A775D4;
L_08A77610:;
    v1 = LD32(s5+12);
    v0 = LD32(s5+16);
    ST32(sp+1040, v1);
    cnd_ = v1 == 0;
    ST32(sp+1044, v0);
    if (cnd_) { goto L_08A77150; }
    goto L_08A77624;
L_08A77624:;
    a1 = LD32(s2+8);
    a2 = sp + 1164;
    a0 = s3 + 0;
    a3 = sp + 16;
    t0 = sp + 528;
    v0 = func_08A78BC8(a0, a1, a2, a3, t0);
    goto L_08A7763C;
L_08A7763C:;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A77050; }
    goto L_08A77644;
L_08A77644:;
    a1 = D_08AE815C - (-32420);
    a1 = a1 - 32420;
    a0 = sp + 16;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77654;
L_08A77654:;
    cnd_ = v0 != 0;
    a2 = D_08AE80E0 - (-32544);
    if (cnd_) { goto L_08A772D8; }
    goto L_08A7765C;
L_08A7765C:;
    a0 = sp + 528;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A77664;
L_08A77664:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A7767C; }
    goto L_08A7766C;
L_08A7766C:;
    v1 = LD32(sp+1168);
    s1 = 0 + 0;
    ST32(v1+1072, v0);
    goto L_08A775D4;
L_08A7767C:;
    a0 = LD32(s2+8);
    a1 = D_08AE8154 - (-32428);
    a1 = a1 - 32428;
    a2 = sp + 528;
    a3 = 512;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77694;
L_08A77694:;
    cnd_ = v0 != 0;
    a2 = D_08AE80E0 - (-32544);
    if (cnd_) { goto L_08A77600; }
    goto L_08A7769C;
L_08A7769C:;
    a2 = a2 - 32544;
    goto L_08A772DC;
L_08A776A4:;
    v0 = LD32(s5+16);
    ST32(sp+1040, v1);
    cnd_ = v1 == 0;
    ST32(sp+1044, v0);
    if (cnd_) { goto L_08A77150; }
    goto L_08A776B4;
L_08A776B4:;
    a0 = 16;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A776BC;
L_08A776BC:;
    cnd_ = v0 == 0;
    s7 = v0 + 0;
    if (cnd_) { goto L_08A7729C; }
    goto L_08A776C4;
L_08A776C4:;
    v0 = LD32(s2+312);
    ST32(s7, 0);
    ST32(s7+4, v0);
    ST32(s7+8, 0);
    ST32(s7+12, 0);
    a1 = LD32(s2+8);
    goto L_08A776DC;
L_08A776DC:;
    a2 = sp + 1164;
    a0 = s3 + 0;
    a3 = sp + 16;
    t0 = sp + 528;
    v0 = func_08A78BC8(a0, a1, a2, a3, t0);
    goto L_08A776F0;
L_08A776F0:;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A77050; }
    goto L_08A776F8;
L_08A776F8:;
    v1 = D_08AE8160 - (-32416);
    a0 = sp + 16;
    a1 = v1 - 32416;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77708;
L_08A77708:;
    cnd_ = v0 == 0;
    v0 = D_08AE8168 - (-32408);
    if (cnd_) { goto L_08A77818; }
    goto L_08A77710;
L_08A77710:;
    a0 = sp + 16;
    a1 = v0 - 32408;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7771C;
L_08A7771C:;
    cnd_ = v0 != 0;
    s1 = 296;
    if (cnd_) { goto L_08A772D4; }
    goto L_08A77724;
L_08A77724:;
    v0 = LD32(s7+8);
    a0 = LD32(s7+12);
    v0 = v0 + 1;
    { s64 p_ = (s64)(s32)v0 * (s32)s1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = lo;
    ST32(s7+8, v0);
    v0 = func_08A6AF98(a0, a1, 0, 0, 0);
    goto L_08A77740;
L_08A77740:;
    cnd_ = v0 == 0;
    ST32(s7+12, v0);
    if (cnd_) { goto L_08A7729C; }
    goto L_08A77748;
L_08A77748:;
    s0 = LD32(s7+8);
    a1 = 0 + 0;
    a2 = 296;
    { s64 p_ = (s64)(s32)s0 * (s32)s1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    s6 = 0 + 0;
    fp = D_08AE816C - (-32404);
    s0 = lo;
    s0 = v0 + s0;
    s1 = s0 - 296;
    a0 = s1 + 0;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77774;
L_08A77774:;
    v1 = 1;
    ST32(s1+36, v1);
    a0 = sp + 528;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A77784;
L_08A77784:;
    ST32(s0-296, v0);
    a1 = LD32(s2+8);
    goto L_08A7778C;
L_08A7778C:;
    a2 = sp + 1164;
    a0 = s3 + 0;
    a3 = sp + 16;
    t0 = sp + 528;
    s0 = LD32(sp+1164);
    v0 = func_08A78BC8(a0, a1, a2, a3, t0);
    goto L_08A777A4;
L_08A777A4:;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A77050; }
    goto L_08A777AC;
L_08A777AC:;
    a0 = sp + 16;
    a1 = fp - 32404;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A777B8;
L_08A777B8:;
    a0 = s1 + 40;
    a1 = sp + 528;
    cnd_ = v0 == 0;
    a2 = 256;
    if (cnd_) { goto L_08A77874; }
    goto L_08A777C8;
L_08A777C8:;
    v0 = D_08AE8108 - (-32504);
    a0 = sp + 16;
    a1 = v0 - 32504;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A777D8;
L_08A777D8:;
    cnd_ = v0 == 0;
    a0 = s1 + 4;
    if (cnd_) { goto L_08A7786C; }
    goto L_08A777E0;
L_08A777E0:;
    v1 = D_08AE8174 - (-32396);
    goto L_08A777E4;
L_08A777E4:;
    a0 = sp + 16;
    a1 = v1 - 32396;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A777F0;
L_08A777F0:;
    cnd_ = v0 != 0;
    v0 = D_08AE8168 - (-32408);
    if (cnd_) { goto L_08A77830; }
    goto L_08A777F8;
L_08A777F8:;
    a0 = sp + 528;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A77800;
L_08A77800:;
    ST32(s1+36, v0);
    goto L_08A77804;
L_08A77804:;
    cnd_ = s6 == 0;
    if (cnd_) { a1 = LD32(s2+8); goto L_08A7778C; }
    goto L_08A7780C;
L_08A7780C:;
    v0 = 0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s2+8); goto L_08A776DC; }
    goto L_08A77818;
L_08A77818:;
    a2 = s7 + 0;
    a0 = s3 + 0;
    a1 = sp + 1040;
    a3 = s5 + 0;
    t0 = 4;
    goto L_08A77284;
L_08A77830:;
    a0 = sp + 16;
    a1 = v0 - 32408;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7783C;
L_08A7783C:;
    cnd_ = v0 != 0;
    v1 = D_08AE8160 - (-32416);
    if (cnd_) { goto L_08A77850; }
    goto L_08A77844;
L_08A77844:;
    ST32(sp+1164, s0);
    goto L_08A77848;
L_08A77848:;
    s6 = 1;
    goto L_08A77804;
L_08A77850:;
    a0 = sp + 16;
    a1 = v1 - 32416;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7785C;
L_08A7785C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A77804; }
    goto L_08A77864;
L_08A77864:;
    ST32(sp+1164, s0);
    goto L_08A77848;
L_08A7786C:;
    a1 = sp + 528;
    a2 = 31;
    goto L_08A77874;
L_08A77874:;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7787C;
L_08A7787C:;
    v1 = D_08AE8174 - (-32396);
    goto L_08A777E4;
L_08A77884:;
    v0 = LD32(s5+16);
    ST32(sp+1040, v1);
    cnd_ = v1 == 0;
    ST32(sp+1044, v0);
    if (cnd_) { goto L_08A77150; }
    goto L_08A77894;
L_08A77894:;
    a0 = 68;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7789C;
L_08A7789C:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A7729C; }
    goto L_08A778A4;
L_08A778A4:;
    ST32(v0, 0);
    a0 = v0 + 4;
    a1 = s2 + 92;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A778B4;
L_08A778B4:;
    ST32(s1+56, 0);
    s6 = sp + 528;
    a2 = sp + 1164;
    ST32(s1+60, 0);
    a0 = s3 + 0;
    a3 = sp + 16;
    ST32(s1+64, 0);
    t0 = s6 + 0;
    a1 = LD32(s2+8);
    v0 = func_08A78BC8(a0, a1, a2, a3, t0);
    goto L_08A778DC;
L_08A778DC:;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A77050; }
    goto L_08A778E4;
L_08A778E4:;
    a1 = D_08AE8180 - (-32384);
    a1 = a1 - 32384;
    a0 = sp + 16;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A778F4;
L_08A778F4:;
    cnd_ = v0 != 0;
    s7 = D_08AE8108 - (-32504);
    if (cnd_) { goto L_08A772D4; }
    goto L_08A778FC;
L_08A778FC:;
    fp = D_08AE812C - (-32468);
    a1 = LD32(s2+8);
    goto L_08A77904;
L_08A77904:;
    a2 = sp + 1164;
    a0 = s3 + 0;
    a3 = sp + 16;
    t0 = s6 + 0;
    v0 = func_08A78BC8(a0, a1, a2, a3, t0);
    goto L_08A77918;
L_08A77918:;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A77050; }
    goto L_08A77920;
L_08A77920:;
    a0 = sp + 16;
    a1 = s7 - 32504;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7792C;
L_08A7792C:;
    cnd_ = v0 != 0;
    a0 = sp + 16;
    if (cnd_) { goto L_08A779B8; }
    goto L_08A77934;
L_08A77934:;
    a1 = LD32(s1+56);
    a0 = LD32(s1+60);
    a1 = a1 << 2;
    a1 = a1 + 4;
    v0 = func_08A6AF98(a0, a1, 0, 0, 0);
    goto L_08A77948;
L_08A77948:;
    cnd_ = v0 == 0;
    a1 = D_08AE7FD4 - (32724);
    if (cnd_) { goto L_08A772A0; }
    goto L_08A77950;
L_08A77950:;
    ST32(s1+60, v0);
    a0 = 31;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7795C;
L_08A7795C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A7729C; }
    goto L_08A77964;
L_08A77964:;
    v0 = LD32(s1+56);
    v1 = LD32(s1+60);
    a0 = s0 + 0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    ST32(v0, s0);
    a1 = s6 + 0;
    a2 = 31;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77988;
L_08A77988:;
    v0 = LD32(s1+56);
    v0 = v0 + 1;
    ST32(s1+56, v0);
    v0 = 0 + 0;
    goto L_08A77998;
L_08A77998:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s2+8); goto L_08A77904; }
    goto L_08A779A0;
L_08A779A0:;
    a2 = s1 + 0;
    goto L_08A779A4;
L_08A779A4:;
    a0 = s3 + 0;
    a1 = sp + 1040;
    a3 = s5 + 0;
    t0 = 3;
    goto L_08A77284;
L_08A779B8:;
    a1 = fp - 32468;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A779C0;
L_08A779C0:;
    cnd_ = v0 != 0;
    a1 = D_08AE8184 - (-32380);
    if (cnd_) { goto L_08A77A28; }
    goto L_08A779C8;
L_08A779C8:;
    a1 = LD32(s1+56);
    cnd_ = (s32)a1 <= 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A77998; }
    goto L_08A779D4;
L_08A779D4:;
    a0 = LD32(s1+64);
    a1 = a1 << 2;
    v0 = func_08A6AF98(a0, a1, 0, 0, 0);
    goto L_08A779E0;
L_08A779E0:;
    cnd_ = v0 == 0;
    a1 = D_08AE7FD4 - (32724);
    if (cnd_) { goto L_08A772A0; }
    goto L_08A779E8;
L_08A779E8:;
    ST32(s1+64, v0);
    a0 = 21;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A779F4;
L_08A779F4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A7729C; }
    goto L_08A779FC;
L_08A779FC:;
    v0 = LD32(s1+56);
    v1 = LD32(s1+64);
    a0 = s0 + 0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    ST32(v0-4, s0);
    a1 = s6 + 0;
    a2 = 21;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77A20;
L_08A77A20:;
    v0 = 0 + 0;
    goto L_08A77998;
L_08A77A28:;
    a1 = a1 - 32380;
    a0 = sp + 16;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77A34;
L_08A77A34:;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = s1 + 0; goto L_08A779A4; }
    goto L_08A77A3C;
L_08A77A3C:;
    a2 = D_08AE80E0 - (-32544);
    goto L_08A772D8;
L_08A77A44:;
    v1 = LD32(s5+12);
    v0 = LD32(s5+16);
    ST32(sp+1040, v1);
    cnd_ = v1 == 0;
    ST32(sp+1044, v0);
    if (cnd_) { goto L_08A77150; }
    goto L_08A77A58;
L_08A77A58:;
    a1 = LD32(s2+8);
    a2 = sp + 1164;
    t0 = sp + 528;
    a0 = s3 + 0;
    a3 = sp + 16;
    v0 = func_08A78BC8(a0, a1, a2, a3, t0);
    goto L_08A77A70;
L_08A77A70:;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A77050; }
    goto L_08A77A78;
L_08A77A78:;
    a1 = D_08AE818C - (-32372);
    a1 = a1 - 32372;
    a0 = sp + 16;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77A88;
L_08A77A88:;
    cnd_ = v0 != 0;
    a2 = D_08AE80E0 - (-32544);
    if (cnd_) { goto L_08A772D8; }
    goto L_08A77A90;
L_08A77A90:;
    a0 = 60;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77A98;
L_08A77A98:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A7729C; }
    goto L_08A77AA0;
L_08A77AA0:;
    ST32(v0, 0);
    a0 = v0 + 4;
    a2 = 51;
    a1 = s2 + 92;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77AB4;
L_08A77AB4:;
    v0 = (u32)(s32)LD_S8(sp+528);
    a2 = s0 + 0;
    a0 = s3 + 0;
    v0 = v0 ^ 0x30;
    v0 = 0 < v0;
    ST32(s0+56, v0);
    goto L_08A775F0;
L_08A77AD0:;
    v0 = 1537;
    ST32(sp+1144, v0);
    ST32(sp+1136, 0);
    ST32(sp+1140, 0);
    ST32(sp+1148, 0);
    a1 = LD32(s2+8);
    goto L_08A77AE8;
L_08A77AE8:;
    a2 = sp + 1164;
    a0 = s3 + 0;
    a3 = sp + 16;
    t0 = sp + 528;
    v0 = func_08A78BC8(a0, a1, a2, a3, t0);
    goto L_08A77AFC;
L_08A77AFC:;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A77050; }
    goto L_08A77B04;
L_08A77B04:;
    v0 = D_08AE8190 - (-32368);
    a0 = sp + 16;
    a1 = v0 - 32368;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77B14;
L_08A77B14:;
    cnd_ = v0 == 0;
    v1 = D_08AE8198 - (-32360);
    if (cnd_) { goto L_08A77D3C; }
    goto L_08A77B1C;
L_08A77B1C:;
    a0 = sp + 16;
    a1 = v1 - 32360;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77B28;
L_08A77B28:;
    cnd_ = v0 != 0;
    v0 = LD32(sp+1140);
    if (cnd_) { goto L_08A772D4; }
    goto L_08A77B30;
L_08A77B30:;
    s1 = 172;
    a0 = LD32(sp+1148);
    v0 = v0 + 1;
    { s64 p_ = (s64)(s32)v0 * (s32)s1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = lo;
    ST32(sp+1140, v0);
    v0 = func_08A6AF98(a0, a1, 0, 0, 0);
    goto L_08A77B4C;
L_08A77B4C:;
    cnd_ = v0 == 0;
    ST32(sp+1148, v0);
    if (cnd_) { goto L_08A7729C; }
    goto L_08A77B54;
L_08A77B54:;
    s0 = LD32(sp+1140);
    a1 = 0 + 0;
    a2 = 172;
    { s64 p_ = (s64)(s32)s0 * (s32)s1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    s6 = 0 + 0;
    s7 = D_08AE8108 - (-32504);
    fp = D_08AE812C - (-32468);
    s0 = lo;
    s0 = v0 + s0;
    s1 = s0 - 172;
    a0 = s1 + 0;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77B84;
L_08A77B84:;
    a0 = sp + 528;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A77B8C;
L_08A77B8C:;
    ST32(s0-172, v0);
    a1 = LD32(s2+8);
    goto L_08A77B94;
L_08A77B94:;
    a2 = sp + 1164;
    a0 = s3 + 0;
    a3 = sp + 16;
    t0 = sp + 528;
    s0 = LD32(sp+1164);
    v0 = func_08A78BC8(a0, a1, a2, a3, t0);
    goto L_08A77BAC;
L_08A77BAC:;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A77050; }
    goto L_08A77BB4;
L_08A77BB4:;
    a0 = sp + 16;
    a1 = s7 - 32504;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77BC0;
L_08A77BC0:;
    cnd_ = v0 == 0;
    a0 = s1 + 4;
    if (cnd_) { goto L_08A77C00; }
    goto L_08A77BC8;
L_08A77BC8:;
    a0 = sp + 16;
    a1 = fp - 32468;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77BD4;
L_08A77BD4:;
    a0 = s1 + 35;
    a1 = sp + 528;
    cnd_ = v0 == 0;
    a2 = 21;
    if (cnd_) { goto L_08A77C08; }
    goto L_08A77BE4;
L_08A77BE4:;
    v0 = D_08AE819C - (-32356);
    a0 = sp + 16;
    a1 = v0 - 32356;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77BF4;
L_08A77BF4:;
    cnd_ = v0 != 0;
    v1 = D_08AE81A8 - (-32344);
    if (cnd_) { goto L_08A77CC4; }
    goto L_08A77BFC;
L_08A77BFC:;
    a0 = s1 + 56;
    goto L_08A77C00;
L_08A77C00:;
    a1 = sp + 528;
    a2 = 31;
    goto L_08A77C08;
L_08A77C08:;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77C10;
L_08A77C10:;
    cnd_ = s6 == 0;
    if (cnd_) { a1 = LD32(s2+8); goto L_08A77B94; }
    goto L_08A77C18;
L_08A77C18:;
    v1 = 0 + 0;
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD32(s2+8); goto L_08A77AE8; }
    goto L_08A77C24;
L_08A77C24:;
    v0 = LD32(s5+12);
    goto L_08A77C28;
L_08A77C28:;
    a2 = LD32(s5+16);
    s0 = LD32(sp+1144);
    ST32(sp+1040, v0);
    cnd_ = v0 != 0;
    ST32(sp+1044, a2);
    if (cnd_) { goto L_08A77CB0; }
    goto L_08A77C3C;
L_08A77C3C:;
    v0 = 1536;
    goto L_08A77C40;
L_08A77C40:;
    cnd_ = s0 == v0;
    v0 = LD32(sp+1144);
    if (cnd_) { goto L_08A77C58; }
    goto L_08A77C48;
L_08A77C48:;
    a0 = LD32(sp+1148);
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77C50;
L_08A77C50:;
    ST32(sp+1148, 0);
    goto L_08A77150;
L_08A77C58:;
    cnd_ = v0 != s0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A77C48; }
    goto L_08A77C60;
L_08A77C60:;
    t0 = LD32(s5+16);
    v0 = LD32(s5+8);
    v1 = LD32(s5+12);
    t4 = LD32(s2+308);
    ST32(sp+8, t0);
    a2 = s2 + 71;
    ST32(sp, v0);
    a1 = s2 + 40;
    a3 = s2 + 92;
    ST32(sp+4, v1);
    t0 = s2 + 143;
    t1 = s2 + 174;
    t3 = LD32(sp+1140);
    t2 = LD32(s2+304);
    t3 = t3 + t4;
    v0 = func_08A76D14(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_08A77CA0;
L_08A77CA0:;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A77C48; }
    goto L_08A77CA8;
L_08A77CA8:;
    goto L_08A77054;
L_08A77CB0:;
    a0 = s3 + 0;
    t_ = v0;
    a1 = sp + 1136;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A77CBC;
L_08A77CBC:;
    v0 = 1536;
    goto L_08A77C40;
L_08A77CC4:;
    a0 = sp + 16;
    a1 = v1 - 32344;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77CD0;
L_08A77CD0:;
    cnd_ = v0 == 0;
    a0 = s1 + 87;
    if (cnd_) { goto L_08A77C00; }
    goto L_08A77CD8;
L_08A77CD8:;
    v0 = D_08AE8148 - (-32440);
    a0 = sp + 16;
    a1 = v0 - 32440;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77CE8;
L_08A77CE8:;
    cnd_ = v0 != 0;
    v1 = D_08AE8198 - (-32360);
    if (cnd_) { goto L_08A77D00; }
    goto L_08A77CF0;
L_08A77CF0:;
    a0 = s1 + 118;
    a1 = sp + 528;
    a2 = 51;
    goto L_08A77C08;
L_08A77D00:;
    a0 = sp + 16;
    a1 = v1 - 32360;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77D0C;
L_08A77D0C:;
    cnd_ = v0 != 0;
    v0 = D_08AE8190 - (-32368);
    if (cnd_) { goto L_08A77D20; }
    goto L_08A77D14;
L_08A77D14:;
    ST32(sp+1164, s0);
    goto L_08A77D18;
L_08A77D18:;
    s6 = 1;
    goto L_08A77C10;
L_08A77D20:;
    a0 = sp + 16;
    a1 = v0 - 32368;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77D2C;
L_08A77D2C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A77C10; }
    goto L_08A77D34;
L_08A77D34:;
    ST32(sp+1164, s0);
    goto L_08A77D18;
L_08A77D3C:;
    a1 = LD32(s2+8);
    a2 = sp + 1164;
    a0 = s3 + 0;
    a3 = sp + 16;
    t0 = sp + 528;
    v0 = func_08A78BC8(a0, a1, a2, a3, t0);
    goto L_08A77D54;
L_08A77D54:;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A77050; }
    goto L_08A77D5C;
L_08A77D5C:;
    a1 = D_08AE81B4 - (-32332);
    a1 = a1 - 32332;
    a0 = sp + 16;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77D6C;
L_08A77D6C:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s5+12); goto L_08A77C28; }
    goto L_08A77D74;
L_08A77D74:;
    a1 = D_08AE81BC - (-32324);
    a0 = sp + 528;
    a1 = a1 - 32324;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A77D84;
L_08A77D84:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s5+12); goto L_08A77C28; }
    goto L_08A77D8C;
L_08A77D8C:;
    v0 = 1536;
    ST32(sp+1144, v0);
    goto L_08A77C24;
L_08A77D98:;
    a2 = 4;
    ST32(s2+320, s1);
    goto L_08A77050;
L_08A77DA4:;
    a2 = D_08AE81C0 - (-32320);
    a2 = a2 - 32320;
    a1 = 3330;
    goto L_08A77DB0;
L_08A77DB0:;
    a0 = s3 + 0;
    func_08A78CEC(a0, a1, a2);
    goto L_08A77DB8;
L_08A77DB8:;
    a0 = s3 + 0;
    a1 = 3;
    a2 = 0 + 0;
    goto L_08A772F4;
L_08A77DC8:;
    a2 = v0 + 0;
    v0 = 3;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08A77054; }
    goto L_08A77DD8;
L_08A77DD8:;
    a2 = D_08AE81D8 - (-32296);
    a2 = a2 - 32296;
    a1 = 3329;
    goto L_08A77DB0;
L_08A77DE8:;
    a1 = LD32(s2+4);
    a2 = sp + 1156;
    a0 = s3 + 0;
    v0 = func_08A78B08(a0, a1, a2, 0, 0, 0);
    goto L_08A77DF8;
L_08A77DF8:;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A77050; }
    goto L_08A77E00;
L_08A77E00:;
    v1 = LD32(sp+1156);
    a1 = 4;
    cnd_ = v1 == a1;
    v0 = 3;
    if (cnd_) { goto L_08A784E4; }
    goto L_08A77E10;
L_08A77E10:;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08A77038; }
    goto L_08A77E18;
L_08A77E18:;
    a0 = LD32(s2);
    cnd_ = a0 == s0;
    v0 = 2;
    if (cnd_) { goto L_08A782FC; }
    goto L_08A77E24;
L_08A77E24:;
    cnd_ = a0 == v0;
    if (cnd_) { a2 = D_08AE8204 - (-32252); goto L_08A782C8; }
    goto L_08A77E2C;
L_08A77E2C:;
    cnd_ = a0 == v1;
    if (cnd_) { a2 = D_08AE820C - (-32244); goto L_08A781B0; }
    goto L_08A77E34;
L_08A77E34:;
    cnd_ = a0 == a1;
    v0 = 5;
    if (cnd_) { goto L_08A78128; }
    goto L_08A77E3C;
L_08A77E3C:;
    cnd_ = a0 == v0;
    v0 = 6;
    if (cnd_) { goto L_08A780A8; }
    goto L_08A77E44;
L_08A77E44:;
    cnd_ = a0 == v0;
    v0 = 7;
    if (cnd_) { goto L_08A77F78; }
    goto L_08A77E4C;
L_08A77E4C:;
    cnd_ = a0 == v0;
    if (cnd_) { a2 = D_08AE8214 - (-32236); goto L_08A77F10; }
    goto L_08A77E54;
L_08A77E54:;
    v0 = 8;
    cnd_ = a0 == v0;
    if (cnd_) { a2 = D_08AE8220 - (-32224); goto L_08A77EA8; }
    goto L_08A77E60;
L_08A77E60:;
    a2 = D_08AE8230 - (-32208);
    goto L_08A77E64;
L_08A77E64:;
    a2 = a2 - 32208;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A77E74;
L_08A77E74:;
    a2 = D_08C320E0 - (8416);
    a2 = a2 + 8416;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A77E88;
L_08A77E88:;
    a2 = D_08AE80D4 - (-32556);
    a2 = a2 - 32556;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A77E9C;
L_08A77E9C:;
    v1 = 4;
    ST32(s5+20, v1);
    goto L_08A77038;
L_08A77EA8:;
    a2 = a2 - 32224;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A77EB8;
L_08A77EB8:;
    a2 = D_08AE823C - (-32196);
    a2 = a2 - 32196;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A77ECC;
L_08A77ECC:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = s2 + 71;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A77EDC;
L_08A77EDC:;
    v0 = D_08AE824C - (-32180);
    goto L_08A77EE0;
L_08A77EE0:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = v0 - 32180;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A77EF0;
L_08A77EF0:;
    v1 = LD32(sp+1168);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = LD32(v1+1156);
    goto L_08A77F00;
L_08A77F00:;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A77F08;
L_08A77F08:;
    a2 = D_08AE8230 - (-32208);
    goto L_08A77E64;
L_08A77F10:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = a2 - 32236;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A77F20;
L_08A77F20:;
    v0 = D_08AE825C - (-32164);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = v0 - 32164;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A77F34;
L_08A77F34:;
    v1 = LD32(sp+1168);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = LD32(v1+408);
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A77F48;
L_08A77F48:;
    v0 = D_08AE8268 - (-32152);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = v0 - 32152;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A77F5C;
L_08A77F5C:;
    v1 = LD32(sp+1168);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = LD32(v1+416);
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A77F70;
L_08A77F70:;
    v0 = D_08AE824C - (-32180);
    goto L_08A77EE0;
L_08A77F78:;
    a2 = D_08AE8274 - (-32140);
    a2 = a2 - 32140;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A77F8C;
L_08A77F8C:;
    v0 = D_08AE8280 - (-32128);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = v0 - 32128;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A77FA0;
L_08A77FA0:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = s2 + 40;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A77FB0;
L_08A77FB0:;
    v1 = D_08AE8288 - (-32120);
    a2 = v1 - 32120;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A77FC4;
L_08A77FC4:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = s2 + 92;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A77FD4;
L_08A77FD4:;
    v0 = D_08AE8290 - (-32112);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = v0 - 32112;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A77FE8;
L_08A77FE8:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = s2 + 205;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A77FF8;
L_08A77FF8:;
    a2 = D_08AE8298 - (-32104);
    a2 = a2 - 32104;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A7800C;
L_08A7800C:;
    v1 = LD32(sp+1168);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = LD32(v1+1152);
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A78020;
L_08A78020:;
    v0 = D_08AE824C - (-32180);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = v0 - 32180;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A78034;
L_08A78034:;
    v1 = LD32(sp+1168);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = LD32(v1+1156);
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A78048;
L_08A78048:;
    a2 = D_08AE82A4 - (-32092);
    a2 = a2 - 32092;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A7805C;
L_08A7805C:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = s2 + 71;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A7806C;
L_08A7806C:;
    v1 = (u32)(s32)LD_S8(s2+236);
    cnd_ = v1 == 0;
    if (cnd_) { a2 = D_08AE8230 - (-32208); goto L_08A77E64; }
    goto L_08A78078;
L_08A78078:;
    a2 = D_08AE82B4 - (-32076);
    a2 = a2 - 32076;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A7808C;
L_08A7808C:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = s2 + 236;
    goto L_08A78098;
L_08A78098:;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A780A0;
L_08A780A0:;
    a2 = D_08AE8230 - (-32208);
    goto L_08A77E64;
L_08A780A8:;
    a2 = D_08AE82BC - (-32068);
    a2 = a2 - 32068;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A780BC;
L_08A780BC:;
    v1 = D_08AE8280 - (-32128);
    a2 = v1 - 32128;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A780D0;
L_08A780D0:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = s2 + 40;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A780E0;
L_08A780E0:;
    v0 = D_08AE8288 - (-32120);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = v0 - 32120;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A780F4;
L_08A780F4:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = s2 + 92;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A78104;
L_08A78104:;
    v1 = D_08AE8290 - (-32112);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = v1 - 32112;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A78118;
L_08A78118:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = s2 + 205;
    goto L_08A78098;
L_08A78128:;
    a2 = D_08AE82C4 - (-32060);
    a2 = a2 - 32060;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A7813C;
L_08A7813C:;
    v1 = D_08AE825C - (-32164);
    a2 = v1 - 32164;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A78150;
L_08A78150:;
    v0 = LD32(sp+1168);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = LD32(v0+408);
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A78164;
L_08A78164:;
    v1 = D_08AE8268 - (-32152);
    a2 = v1 - 32152;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A78178;
L_08A78178:;
    v0 = LD32(sp+1168);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = LD32(v0+416);
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A7818C;
L_08A7818C:;
    a2 = D_08AE82D0 - (-32048);
    a2 = a2 - 32048;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A781A0;
L_08A781A0:;
    a2 = LD32(s2+312);
    goto L_08A781A4;
L_08A781A4:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    goto L_08A77F00;
L_08A781B0:;
    a2 = a2 - 32244;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A781C0;
L_08A781C0:;
    v1 = D_08AE8288 - (-32120);
    a2 = v1 - 32120;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A781D4;
L_08A781D4:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = s2 + 92;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A781E4;
L_08A781E4:;
    v0 = D_08AE8290 - (-32112);
    a0 = s3 + 0;
    a1 = s4 + 0;
    s0 = s2 + 205;
    a2 = v0 - 32112;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A781FC;
L_08A781FC:;
    a1 = s4 + 0;
    a2 = s0 + 0;
    a0 = s3 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A7820C;
L_08A7820C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A78214;
L_08A78214:;
    a0 = 0x79700000u;
    s6 = v0 + 0;
    a0 = a0 | 0x7367;
    func_08A6B740(a0);
    goto L_08A78224;
L_08A78224:;
    s1 = 0 + 0;
    cnd_ = (s32)s6 <= 0;
    fp = sp + 1056;
    if (cnd_) { goto L_08A7825C; }
    goto L_08A78230;
L_08A78230:;
    a0 = 0 + 0;
    a1 = 255;
    v0 = func_08A6B75C(a0, a1);
    goto L_08A7823C;
L_08A7823C:;
    v1 = LD_U8(s0);
    a1 = fp + s1;
    s1 = s1 + 1;
    v0 = v0 ^ v1;
    a0 = (s32)s1 < (s32)s6;
    ST8(a1, v0);
    cnd_ = a0 != 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_08A78230; }
    goto L_08A7825C;
L_08A7825C:;
    v0 = fp + s1;
    ST8(v0, 0);
    s0 = sp + 1088;
    a3 = 1;
    a0 = fp + 0;
    a2 = s6 + 0;
    a1 = s0 + 0;
    func_08A6B844(a0, a1, a2, a3);
    goto L_08A7827C;
L_08A7827C:;
    a2 = D_08AE82DC - (-32036);
    a2 = a2 - 32036;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A78290;
L_08A78290:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = s0 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A782A0;
L_08A782A0:;
    v1 = D_08AE824C - (-32180);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = v1 - 32180;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A782B4;
L_08A782B4:;
    v0 = LD32(sp+1168);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = LD32(v0+1156);
    goto L_08A77F00;
L_08A782C8:;
    a2 = a2 - 32252;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A782D8;
L_08A782D8:;
    v0 = D_08AE8288 - (-32120);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = v0 - 32120;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A782EC;
L_08A782EC:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = s2 + 92;
    goto L_08A78098;
L_08A782FC:;
    a2 = D_08AE82E8 - (-32024);
    a2 = a2 - 32024;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A78310;
L_08A78310:;
    v0 = D_08AE825C - (-32164);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = v0 - 32164;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A78324;
L_08A78324:;
    v1 = LD32(sp+1168);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = LD32(v1+408);
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A78338;
L_08A78338:;
    v0 = D_08AE8268 - (-32152);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = v0 - 32152;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A7834C;
L_08A7834C:;
    v1 = LD32(sp+1168);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = LD32(v1+416);
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A78360;
L_08A78360:;
    v0 = D_08AE824C - (-32180);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = v0 - 32180;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A78374;
L_08A78374:;
    v1 = LD32(sp+1168);
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = LD32(v1+1156);
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A78388;
L_08A78388:;
    v1 = (u32)(s32)LD_S8(s2+40);
    cnd_ = v1 != 0;
    v0 = D_08AE8280 - (-32128);
    if (cnd_) { goto L_08A784BC; }
    goto L_08A78394;
L_08A78394:;
    v0 = (u32)(s32)LD_S8(s2+71);
    goto L_08A78398;
L_08A78398:;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = D_08AE82A4 - (-32092); goto L_08A78494; }
    goto L_08A783A0;
L_08A783A0:;
    v0 = (u32)(s32)LD_S8(s2+92);
    goto L_08A783A4;
L_08A783A4:;
    cnd_ = v0 != 0;
    v1 = D_08AE8288 - (-32120);
    if (cnd_) { goto L_08A7846C; }
    goto L_08A783AC;
L_08A783AC:;
    v0 = (u32)(s32)LD_S8(s2+143);
    goto L_08A783B0;
L_08A783B0:;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = D_08AE82F4 - (-32012); goto L_08A78444; }
    goto L_08A783B8;
L_08A783B8:;
    v0 = (u32)(s32)LD_S8(s2+174);
    goto L_08A783BC;
L_08A783BC:;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = D_08AE8300 - (-32000); goto L_08A7841C; }
    goto L_08A783C4;
L_08A783C4:;
    v0 = LD32(s2+304);
    goto L_08A783C8;
L_08A783C8:;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = D_08AE830C - (-31988); goto L_08A783F4; }
    goto L_08A783D0;
L_08A783D0:;
    v0 = LD32(s2+308);
    goto L_08A783D4;
L_08A783D4:;
    cnd_ = (s32)v0 <= 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A77E60; }
    goto L_08A783DC;
L_08A783DC:;
    a2 = D_08AE8318 - (-31976);
    a2 = a2 - 31976;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A783EC;
L_08A783EC:;
    a2 = LD32(s2+308);
    goto L_08A781A4;
L_08A783F4:;
    a2 = a2 - 31988;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A78404;
L_08A78404:;
    a2 = LD32(s2+304);
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A712B8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A78414;
L_08A78414:;
    v0 = LD32(s2+308);
    goto L_08A783D4;
L_08A7841C:;
    a2 = a2 - 32000;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A7842C;
L_08A7842C:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = s2 + 174;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A7843C;
L_08A7843C:;
    v0 = LD32(s2+304);
    goto L_08A783C8;
L_08A78444:;
    a2 = a2 - 32012;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A78454;
L_08A78454:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = s2 + 143;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A78464;
L_08A78464:;
    v0 = (u32)(s32)LD_S8(s2+174);
    goto L_08A783BC;
L_08A7846C:;
    a2 = v1 - 32120;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A7847C;
L_08A7847C:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = s2 + 92;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A7848C;
L_08A7848C:;
    v0 = (u32)(s32)LD_S8(s2+143);
    goto L_08A783B0;
L_08A78494:;
    a2 = a2 - 32092;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A784A4;
L_08A784A4:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = s2 + 71;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A784B4;
L_08A784B4:;
    v0 = (u32)(s32)LD_S8(s2+92);
    goto L_08A783A4;
L_08A784BC:;
    a2 = v0 - 32128;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A784CC;
L_08A784CC:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = s2 + 40;
    v0 = func_08A71264(a0, a1, a2);
    goto L_08A784DC;
L_08A784DC:;
    v0 = (u32)(s32)LD_S8(s2+71);
    goto L_08A78398;
L_08A784E4:;
    a2 = D_08AE8320 - (-31968);
    a2 = a2 - 31968;
    a1 = 3329;
    a0 = s3 + 0;
    func_08A78CEC(a0, a1, a2);
    goto L_08A784F8;
L_08A784F8:;
    a2 = 0 + 0;
    a0 = s3 + 0;
    a1 = 4;
    func_08A71AA0(a0, a1, a2, 0, 0, 0);
    goto L_08A78508;
L_08A78508:;
    a2 = 4;
    goto L_08A77050;
L_08A78510:;
    v0 = func_08A6B620(a1, a2, a3, t0, t1, t2, t3);
    goto L_08A78518;
L_08A78518:;
    a0 = LD32(s2+324);
    v1 = 0xea60;
    v0 = v0 - a0;
    v1 = v1 < v0;
    cnd_ = v1 == 0;
    s4 = s2 + 24;
    if (cnd_) { goto L_08A76FF8; }
    goto L_08A78530;
L_08A78530:;
    v0 = 1;
    ST32(s2+320, v0);
    goto L_08A77DA4;
}

/* 08A7853C */
u32 func_08A7853C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7853C:;
    sp = sp - 32;
    s2 = a0 + 0;
    s0 = LD32(a0);
    a0 = LD32(s0+552);
    cnd_ = (s32)a0 <= 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_08A78624; }
    goto L_08A78570;
L_08A78570:;
    a0 = a0 << 2;
    { u64 r_ = func_08A6AF74(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A78578;
L_08A78578:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A78688; }
    goto L_08A78580;
L_08A78580:;
    v1 = LD32(s0+1084);
    cnd_ = v1 == 0;
    a2 = 3;
    if (cnd_) { goto L_08A785B0; }
    goto L_08A7858C;
L_08A7858C:;
    a3 = 5;
    t0 = 1;
    a1 = v0 + 0;
    v0 = LD32(v1);
    goto L_08A7859C;
L_08A7859C:;
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+20); goto L_08A7865C; }
    goto L_08A785A4;
L_08A785A4:;
    v1 = LD32(v1+32);
    goto L_08A785A8;
L_08A785A8:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08A7859C; }
    goto L_08A785B0;
L_08A785B0:;
    s4 = (s32)0 < (s32)s5;
    cnd_ = s4 == 0;
    s1 = s3 + 0;
    if (cnd_) { goto L_08A7861C; }
    goto L_08A785BC;
L_08A785BC:;
    s0 = s5 + 0;
    goto L_08A785C0;
L_08A785C0:;
    a1 = LD32(s1);
    a0 = s2 + 0;
    s0 = s0 - 1;
    v0 = func_08A76FA8(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_08A785D0;
L_08A785D0:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A785E0; }
    goto L_08A785D8;
L_08A785D8:;
    v0 = LD32(s1);
    ST32(v0+28, v1);
    goto L_08A785E0;
L_08A785E0:;
    cnd_ = s0 != 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_08A785C0; }
    goto L_08A785E8;
L_08A785E8:;
    cnd_ = s4 == 0;
    s0 = s5 + 0;
    if (cnd_) { goto L_08A7861C; }
    goto L_08A785F0;
L_08A785F0:;
    s1 = s3 + 0;
    a1 = LD32(s1);
    goto L_08A785F8;
L_08A785F8:;
    s0 = s0 - 1;
    s1 = s1 + 4;
    v1 = LD32(a1+4);
    a0 = s2 + 0;
    v0 = LD32(v1+320);
    cnd_ = v0 != 0;
    ST32(v1+316, 0);
    if (cnd_) { goto L_08A7864C; }
    goto L_08A78614;
L_08A78614:;
    cnd_ = s0 != 0;
    if (cnd_) { a1 = LD32(s1); goto L_08A785F8; }
    goto L_08A7861C;
L_08A7861C:;
    a0 = s3 + 0;
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A78624;
L_08A78624:;
    v0 = 0 + 0;
    goto L_08A78628;
L_08A78628:;
    sp = sp + 32;
    return v0;
L_08A7864C:;
    func_08A75078(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A78654;
L_08A78654:;
    goto L_08A78614;
L_08A7865C:;
    cnd_ = v0 == a3;
    if (cnd_) { v1 = LD32(v1+32); goto L_08A785A8; }
    goto L_08A78664;
L_08A78664:;
    a0 = LD32(v1+4);
    v0 = LD32(a0+316);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+32); goto L_08A785A8; }
    goto L_08A78674;
L_08A78674:;
    ST32(a0+316, t0);
    s5 = s5 + 1;
    ST32(a1, v1);
    a1 = a1 + 4;
    goto L_08A785A4;
L_08A78688:;
    a1 = D_08AE7FD4 - (32724);
    a0 = s2 + 0;
    a1 = a1 + 32724;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A78698;
L_08A78698:;
    v0 = 1;
    goto L_08A78628;
}

/* 08A786A0 */
void func_08A786A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A786A0:;
    sp = sp - 64;
    v0 = a1 + 0;
    s0 = a2 + 0;
    a1 = s0 + 0;
    a2 = 201;
    s3 = a0 + 0;
    s2 = a3 + 0;
    a3 = v0 + 0;
    s1 = t0 + 0;
    cnd_ = t0 == 0;
    if (cnd_) { goto L_08A78760; }
    goto L_08A786DC;
L_08A786DC:;
    v0 = func_08A7628C(a0, a1, a2, a3, t3);
    goto L_08A786E4;
L_08A786E4:;
    a1 = D_08AE834C - (-31924);
    a2 = 1;
    v1 = v0 + 0;
    a1 = a1 - 31924;
    a3 = s2 + 0;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A78720; }
    goto L_08A78700;
L_08A78700:;
    v0 = v1 + 0;
    sp = sp + 64;
    return;
L_08A78720:;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A78728;
L_08A78728:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    a2 = sp + 0;
    v0 = func_08A715BC(a0, a1, a2);
    goto L_08A78738;
L_08A78738:;
    v1 = v0 + 0;
    a1 = s0 + 0;
    a0 = s3 + 0;
    a2 = s1 + 0;
    cnd_ = v0 != 0;
    a3 = (u32)-1;
    if (cnd_) { goto L_08A78700; }
    goto L_08A78750;
L_08A78750:;
    v0 = func_08A762FC(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_08A78758;
L_08A78758:;
    v1 = v0 + 0;
    goto L_08A78700;
L_08A78760:;
    v0 = D_08AE8364 - (-31900);
    s1 = v0 - 31900;
    goto L_08A786DC;
}

/* 08A7876C */
void func_08A7876C(u32 a0, u32 a1, u32 a3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08A7876C:;
    sp = sp - 96;
    s1 = a1 + 0;
    a1 = D_08AE8368 - (-31896);
    a1 = a1 - 31896;
    a2 = sp + 0;
    s0 = a0 + 0;
    a0 = a3 + 0;
    a3 = 64;
    s2 = sp + 64;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A787A4;
L_08A787A4:;
    a1 = D_08AE8370 - (-31888);
    a1 = a1 - 31888;
    a3 = sp + 68;
    t0 = sp + 72;
    a0 = sp + 0;
    cnd_ = v0 != 0;
    a2 = s2 + 0;
    if (cnd_) { goto L_08A787D8; }
    goto L_08A787C0;
L_08A787C0:;
    goto L_08A787C4;
L_08A787C4:;
    sp = sp + 96;
    return;
L_08A787D8:;
    { rv_t r_ = func_08A894F8(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A787E0;
L_08A787E0:;
    v1 = 3;
    a1 = s2 + 0;
    a3 = 2;
    t0 = 0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 != v1;
    a2 = s1 + 0;
    if (cnd_) { goto L_08A787C0; }
    goto L_08A787FC;
L_08A787FC:;
    func_08A786A0(a0, a1, a2, a3, t0, 0);
    goto L_08A78804;
L_08A78804:;
    goto L_08A787C4;
}

/* 08A7880C */
u32 func_08A7880C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7880C:;
    sp = sp - 32;
    s0 = a2 + 0;
    a2 = 1;
    s1 = a1 + 0;
    a1 = s0 + 0;
    s2 = a0 + 0;
    v0 = func_08A78950(a0, a1, a2);
    goto L_08A78838;
L_08A78838:;
    a1 = D_08AE83BC - (-31812);
    a1 = a1 - 31812;
    a0 = s0 + 0;
    a2 = 4;
    cnd_ = v0 != 0;
    v1 = 4;
    if (cnd_) { goto L_08A788C4; }
    goto L_08A78850;
L_08A78850:;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A78858;
L_08A78858:;
    a2 = D_08AE83C4 - (-31804);
    a1 = 1;
    a0 = s2 + 0;
    cnd_ = v0 != 0;
    a2 = a2 - 31804;
    if (cnd_) { goto L_08A788F8; }
    goto L_08A7886C;
L_08A7886C:;
    v1 = LD32(s1+12);
    v0 = LD32(s1+16);
    a0 = 4;
    ST32(sp, v1);
    cnd_ = v1 == 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_08A788B4; }
    goto L_08A78884;
L_08A78884:;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7888C;
L_08A7888C:;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A788E0; }
    goto L_08A78894;
L_08A78894:;
    ST32(v0, 0);
    a0 = s2 + 0;
    a1 = sp + 0;
    a3 = s1 + 0;
    t0 = 0 + 0;
    v0 = func_08A71B54(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_08A788AC;
L_08A788AC:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A788C4; }
    goto L_08A788B4;
L_08A788B4:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    func_08A75078(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A788C0;
L_08A788C0:;
    v1 = 0 + 0;
    goto L_08A788C4;
L_08A788C4:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_08A788E0:;
    a1 = D_08AE83F4 - (-31756);
    a0 = s2 + 0;
    a1 = a1 - 31756;
    { u64 r_ = func_08A78D2C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A788F0;
L_08A788F0:;
    v1 = 1;
    goto L_08A788C4;
L_08A788F8:;
    func_08A78CEC(a0, a1, a2);
    goto L_08A78900;
L_08A78900:;
    a0 = s2 + 0;
    a1 = 3;
    a2 = 1;
    func_08A71AA0(a0, a1, a2, 0, 0, 0);
    goto L_08A78910;
L_08A78910:;
    v1 = 3;
    goto L_08A788C4;
}

/* 08A78918 */
u64 func_08A78918(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A78918:;
    sp = sp - 16;
    s1 = a2 + 0;
    s0 = a0 + 0;
    s0 = s0 + s1;
    { u64 r_ = func_08A89CF4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A78938;
L_08A78938:;
    ST8(s0-1, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A78950 */
u32 func_08A78950(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A78950:;
    sp = sp - 48;
    s3 = a2 + 0;
    a2 = 7;
    s2 = a0 + 0;
    s0 = a1 + 0;
    a1 = D_08AE8404 - (-31740);
    a1 = a1 - 31740;
    a0 = s0 + 0;
    s1 = LD32(s2);
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7898C;
L_08A7898C:;
    a1 = D_08AE840C - (-31732);
    a1 = a1 - 31732;
    a0 = s0 + 0;
    a2 = sp + 0;
    a3 = 16;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A789C8; }
    goto L_08A789A8;
L_08A789A8:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_08A789C8:;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A789D0;
L_08A789D0:;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A78A38; }
    goto L_08A789D8;
L_08A789D8:;
    a1 = D_08AE8414 - (-31724);
    a0 = s0 + 0;
    a1 = a1 - 31724;
    a2 = s1 + 0;
    a3 = 256;
    { u64 r_ = func_08A78A48(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A789F0;
L_08A789F0:;
    a1 = D_08AE8420 - (-31712);
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = a1 - 31712;
    if (cnd_) { goto L_08A78A04; }
    goto L_08A78A00;
L_08A78A00:;
    ST8(s1, 0);
    goto L_08A78A04;
L_08A78A04:;
    cnd_ = s3 != 0;
    if (cnd_) { goto L_08A78A14; }
    goto L_08A78A0C;
L_08A78A0C:;
    v1 = 1;
    goto L_08A789A8;
L_08A78A14:;
    { u64 r_ = func_08A89EE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A78A1C;
L_08A78A1C:;
    v0 = 0 < v0;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a1 = 4;
    func_08A71AA0(a0, a1, a2, 0, 0, 0);
    goto L_08A78A30;
L_08A78A30:;
    v1 = 1;
    goto L_08A789A8;
L_08A78A38:;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A78A40;
L_08A78A40:;
    ST32(s1+1072, v0);
    goto L_08A789D8;
}

/* 08A78A48 */
u64 func_08A78A48(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A78A48:;
    sp = sp - 32;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s1 = a3 + 0;
    s4 = (u32)(s32)LD_S8(a1);
    { u64 r_ = func_08A89EE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A78A78;
L_08A78A78:;
    s0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A78AE8; }
    goto L_08A78A84;
L_08A78A84:;
    a0 = s2 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A78A8C;
L_08A78A8C:;
    s1 = s1 - 1;
    s0 = s0 + v0;
    cnd_ = (s32)s1 <= 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A78ADC; }
    goto L_08A78A9C;
L_08A78A9C:;
    a0 = (u32)(s32)LD_S8(s0);
    cnd_ = a0 == 0;
    v0 = s3 + a2;
    if (cnd_) { goto L_08A78AE0; }
    goto L_08A78AA8;
L_08A78AA8:;
    cnd_ = a0 == s4;
    if (cnd_) { ST8(v0, 0); goto L_08A78AE4; }
    goto L_08A78AB0;
L_08A78AB0:;
    v1 = s3 + a2;
    goto L_08A78AB4;
L_08A78AB4:;
    a2 = a2 + 1;
    v0 = (s32)a2 < (s32)s1;
    a1 = s0 + a2;
    cnd_ = v0 == 0;
    ST8(v1, a0);
    if (cnd_) { goto L_08A78ADC; }
    goto L_08A78AC8;
L_08A78AC8:;
    a0 = (u32)(s32)LD_S8(a1);
    cnd_ = a0 == 0;
    v0 = s3 + a2;
    if (cnd_) { goto L_08A78AE0; }
    goto L_08A78AD4;
L_08A78AD4:;
    cnd_ = a0 != s4;
    if (cnd_) { v1 = s3 + a2; goto L_08A78AB4; }
    goto L_08A78ADC;
L_08A78ADC:;
    v0 = s3 + a2;
    goto L_08A78AE0;
L_08A78AE0:;
    ST8(v0, 0);
    goto L_08A78AE4;
L_08A78AE4:;
    v0 = 1;
    goto L_08A78AE8;
L_08A78AE8:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A78B08 */
u32 func_08A78B08(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A78B08:;
    sp = sp - 32;
    a3 = sp + 4;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a2 + 0;
    a1 = 0 + 0;
    a2 = sp + 0;
    ST32(sp, 0);
    ST32(sp+4, 0);
    v0 = func_08A6B114(a0, a1, a2, a3, t1, t2, t3);
    goto L_08A78B3C;
L_08A78B3C:;
    v1 = v0 + 0;
    a2 = D_08AE8428 - (-31704);
    v0 = (u32)-1;
    a2 = a2 - 31704;
    a1 = 5;
    cnd_ = v1 == v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A78BA8; }
    goto L_08A78B58;
L_08A78B58:;
    cnd_ = (s32)v1 <= 0;
    v0 = LD32(sp+4);
    if (cnd_) { goto L_08A78B9C; }
    goto L_08A78B60;
L_08A78B60:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A78B88; }
    goto L_08A78B68;
L_08A78B68:;
    v0 = 4;
    goto L_08A78B6C;
L_08A78B6C:;
    ST32(s0, v0);
    goto L_08A78B70;
L_08A78B70:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_08A78B88:;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0, 0); goto L_08A78BA0; }
    goto L_08A78B94;
L_08A78B94:;
    v0 = 3;
    goto L_08A78B6C;
L_08A78B9C:;
    ST32(s0, 0);
    goto L_08A78BA0;
L_08A78BA0:;
    v1 = 0 + 0;
    goto L_08A78B70;
L_08A78BA8:;
    func_08A78CEC(a0, a1, a2);
    goto L_08A78BB0;
L_08A78BB0:;
    a0 = s1 + 0;
    a2 = 1;
    a1 = 3;
    func_08A71AA0(a0, a1, a2, 0, 0, 0);
    goto L_08A78BC0;
L_08A78BC0:;
    v1 = 3;
    goto L_08A78B70;
}

/* 08A78BC8 */
u32 func_08A78BC8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A78BC8:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a2);
    a1 = a1 + v0;
    v1 = (u32)(s32)LD_S8(a1);
    v0 = 92;
    t3 = a1 + 0;
    cnd_ = v1 != v0;
    a1 = a1 + 1;
    if (cnd_) { goto L_08A78CDC; }
    goto L_08A78BF4;
L_08A78BF4:;
    a0 = (u32)(s32)LD_S8(a1);
    t1 = 0 + 0;
    cnd_ = a0 == v1;
    a1 = a1 + 1;
    if (cnd_) { goto L_08A78C34; }
    goto L_08A78C04;
L_08A78C04:;
    t2 = 511;
    v0 = 92;
    goto L_08A78C0C;
L_08A78C0C:;
    cnd_ = a0 == 0;
    if (cnd_) { a2 = D_08AE8460 - (-31648); goto L_08A78CB0; }
    goto L_08A78C14;
L_08A78C14:;
    cnd_ = t1 == t2;
    if (cnd_) { a2 = D_08AE8460 - (-31648); goto L_08A78CB0; }
    goto L_08A78C1C;
L_08A78C1C:;
    ST8(a3, a0);
    t1 = t1 + 1;
    a3 = a3 + 1;
    a0 = (u32)(s32)LD_S8(a1);
    cnd_ = a0 != v0;
    a1 = a1 + 1;
    if (cnd_) { goto L_08A78C0C; }
    goto L_08A78C34;
L_08A78C34:;
    ST8(a3, 0);
    v0 = 92;
    t1 = 0 + 0;
    a0 = (u32)(s32)LD_S8(a1);
    cnd_ = a0 == v0;
    a1 = a1 + 1;
    if (cnd_) { goto L_08A78C80; }
    goto L_08A78C4C;
L_08A78C4C:;
    cnd_ = a0 == 0;
    if (cnd_) { ST8(t0, 0); goto L_08A78C84; }
    goto L_08A78C54;
L_08A78C54:;
    a3 = 511;
    goto L_08A78C58;
L_08A78C58:;
    cnd_ = t1 == a3;
    if (cnd_) { a2 = D_08AE8460 - (-31648); goto L_08A78CB0; }
    goto L_08A78C60;
L_08A78C60:;
    ST8(t0, a0);
    t1 = t1 + 1;
    t0 = t0 + 1;
    a0 = (u32)(s32)LD_S8(a1);
    cnd_ = a0 == v0;
    a1 = a1 + 1;
    if (cnd_) { goto L_08A78C80; }
    goto L_08A78C78;
L_08A78C78:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A78C58; }
    goto L_08A78C80;
L_08A78C80:;
    ST8(t0, 0);
    goto L_08A78C84;
L_08A78C84:;
    v1 = a1 - t3;
    a0 = 0 + 0;
    v0 = LD32(a2);
    v0 = v0 + v1;
    v0 = v0 - 1;
    ST32(a2, v0);
    goto L_08A78C9C;
L_08A78C9C:;
    v0 = a0 + 0;
    sp = sp + 16;
    return v0;
L_08A78CB0:;
    a2 = a2 - 31648;
    a1 = 1;
    a0 = s0 + 0;
    goto L_08A78CBC;
L_08A78CBC:;
    func_08A78CEC(a0, a1, a2);
    goto L_08A78CC4;
L_08A78CC4:;
    a0 = s0 + 0;
    a1 = 3;
    a2 = 1;
    func_08A71AA0(a0, a1, a2, 0, 0, 0);
    goto L_08A78CD4;
L_08A78CD4:;
    a0 = 3;
    goto L_08A78C9C;
L_08A78CDC:;
    a2 = D_08AE8460 - (-31648);
    a2 = a2 - 31648;
    a1 = 1;
    goto L_08A78CBC;
}

/* 08A78CEC */
void func_08A78CEC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A78CEC:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = a2 + 0;
    a2 = 256;
    s0 = LD32(a0);
    a0 = s0 + 0;
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A78D14;
L_08A78D14:;
    ST32(s0+1072, s1);
    sp = sp + 16;
    return;
}

/* 08A78D2C */
u64 func_08A78D2C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A78D2C:;
    sp = sp - 16;
    a2 = 256;
    a0 = LD32(a0);
    { u64 r_ = func_08A78918(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A78D40;
L_08A78D40:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A78D4C */
u32 func_08A78D4C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A78D4C:;
    sp = sp - 16;
    a0 = 4;
    { u64 r_ = func_08A6AF74(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A78D60;
L_08A78D60:;
    a2 = RS_FADDR(func_08A79700, 0x08A79700u) - (-26880);
    a3 = RS_FADDR(func_08A797B8, 0x08A797B8u) - (-26696);
    t0 = RS_FADDR(func_08A797D4, 0x08A797D4u) - (-26668);
    a2 = a2 - 26880;
    a3 = a3 - 26696;
    t0 = t0 - 26668;
    a0 = 24;
    a1 = 32;
    s0 = v0 + 0;
    v0 = func_08A84094(a0, a1, a2, a3, t0, 0, 0);
    goto L_08A78D88;
L_08A78D88:;
    v1 = D_08C38BA0 - (-29792);
    ST32(s0, v0);
    v0 = s0 + 0;
    ST32(v1-29792, s0);
    sp = sp + 16;
    return v0;
}

/* 08A78DA8 */
void func_08A78DA8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A78DA8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0);
    func_08A8418C(a0, t1, t2, t3);
    goto L_08A78DC0;
L_08A78DC0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A78DC8;
L_08A78DC8:;
    sp = sp + 16;
    return;
}

/* 08A78DD8 */
u32 func_08A78DD8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A78DD8:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = 128;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A78E34; }
    goto L_08A78DF0;
L_08A78DF0:;
    { u64 r_ = func_08A6AF74(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A78DF8;
L_08A78DF8:;
    ST32(sp, v0);
    a1 = RS_FADDR(func_08A79478, 0x08A79478u) - (-27528);
    a1 = a1 - 27528;
    ST8(v0, 0);
    a2 = sp + 0;
    v0 = 128;
    a0 = LD32(s0);
    ST32(sp+4, v0);
    ST32(sp+8, 0);
    func_08A84448(a0, a1, a2);
    goto L_08A78E20;
L_08A78E20:;
    v0 = LD32(sp);
    sp = sp + 32;
    return v0;
L_08A78E34:;
    v0 = D_08C38BA0 - (-29792);
    s0 = LD32(v0-29792);
    goto L_08A78DF0;
}

/* 08A78E40 */
u64 func_08A78E40(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A78E40:;
    sp = sp - 64;
    s0 = a0 + 0;
    a0 = a1 + 0;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s1 = a3 + 0;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A78ED4; }
    goto L_08A78E70;
L_08A78E70:;
    { u64 r_ = func_08A6B560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A78E78;
L_08A78E78:;
    ST32(sp, v0);
    a1 = s1 + 0;
    a0 = sp + 0;
    v0 = 1;
    ST32(sp+4, s3);
    ST32(sp+8, v0);
    ST32(sp+16, 0);
    { u64 r_ = func_08A795F8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A78E98;
L_08A78E98:;
    a1 = sp + 0;
    a0 = LD32(s0);
    func_08A84270(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A78EA4;
L_08A78EA4:;
    a1 = s2 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_08A796C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A78EB0;
L_08A78EB0:;
    a0 = v0 + 0;
    { u64 r_ = func_08A796A0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A78EB8;
L_08A78EB8:;
    sp = sp + 64;
    return (u64)v0 | ((u64)v1 << 32);
L_08A78ED4:;
    v0 = D_08C38BA0 - (-29792);
    s0 = LD32(v0-29792);
    goto L_08A78E70;
}

/* 08A78EE0 */
rv_t func_08A78EE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A78EE0:;
    sp = sp - 16;
    s0 = a2 + 0;
    { rv_t r_ = func_08A796C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A78EF4;
L_08A78EF4:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A78F10; }
    goto L_08A78F04;
L_08A78F04:;
    ST32(v0+8, 0);
    { u64 r_ = func_08A795F8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A78F0C;
L_08A78F0C:;
    v1 = v0 + 0;
    goto L_08A78F10;
L_08A78F10:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A78F24 */
rv_t func_08A78F24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A78F24:;
    sp = sp - 32;
    s3 = a0 + 0;
    s2 = a1 + 0;
    s1 = a2 + 0;
    { rv_t r_ = func_08A796C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A78F4C;
L_08A78F4C:;
    s0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A78F80; }
    goto L_08A78F58;
L_08A78F58:;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A78FD8; }
    goto L_08A78F64;
L_08A78F64:;
    v0 = 1;
    a0 = s0 + 0;
    a1 = s2 + 0;
    cnd_ = v1 == v0;
    a2 = s1 + 0;
    if (cnd_) { goto L_08A78F9C; }
    goto L_08A78F78;
L_08A78F78:;
    a0 = s3 + 0;
    { rv_t r_ = func_08A79244(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A78F80;
L_08A78F80:;
    goto L_08A78F84;
L_08A78F84:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A78F9C:;
    { u64 r_ = func_08A796A0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A78FA4;
L_08A78FA4:;
    a0 = LD32(v0);
    a1 = LD32(v0+4);
    a2 = LD32(s1);
    a3 = LD32(s1+4);
    { u64 r_ = func_08A933FC(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A78FB8;
L_08A78FB8:;
    a0 = v0 + 0;
    a1 = v1 + 0;
    v0 = func_08A7945C(a0, a1);
    goto L_08A78FC4;
L_08A78FC4:;
    a0 = s0 + 0;
    goto L_08A78FC8;
L_08A78FC8:;
    a1 = v0 + 0;
    { u64 r_ = func_08A795F8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A78FD0;
L_08A78FD0:;
    goto L_08A78F84;
L_08A78FD8:;
    { u64 r_ = func_08A796A0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A78FE0;
L_08A78FE0:;
    a0 = LD32(v0);
    v0 = LD32(s1);
    a0 = a0 + v0;
    v0 = func_08A7944C(a0);
    goto L_08A78FF0;
L_08A78FF0:;
    a0 = s0 + 0;
    goto L_08A78FC8;
}

/* 08A78FF8 */
rv_t func_08A78FF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A78FF8:;
    sp = sp - 16;
    s1 = a2 + 0;
    { rv_t r_ = func_08A796C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A79010;
L_08A79010:;
    s0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A7903C; }
    goto L_08A7901C;
L_08A7901C:;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A7908C; }
    goto L_08A79028;
L_08A79028:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A79050; }
    goto L_08A79034;
L_08A79034:;
    a0 = s0 + 0;
    { u64 r_ = func_08A796A0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7903C;
L_08A7903C:;
    goto L_08A79040;
L_08A79040:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A79050:;
    { u64 r_ = func_08A796A0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79058;
L_08A79058:;
    a0 = LD32(v0);
    a1 = LD32(v0+4);
    a2 = LD32(s1);
    a3 = LD32(s1+4);
    { u64 r_ = func_08A93464(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7906C;
L_08A7906C:;
    a0 = v0 + 0;
    a1 = v1 + 0;
    v0 = func_08A7945C(a0, a1);
    goto L_08A79078;
L_08A79078:;
    a0 = s0 + 0;
    goto L_08A7907C;
L_08A7907C:;
    a1 = v0 + 0;
    { u64 r_ = func_08A795F8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79084;
L_08A79084:;
    goto L_08A79040;
L_08A7908C:;
    { u64 r_ = func_08A796A0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79094;
L_08A79094:;
    a0 = LD32(v0);
    v0 = LD32(s1);
    a0 = a0 - v0;
    v0 = func_08A7944C(a0);
    goto L_08A790A4;
L_08A790A4:;
    a0 = s0 + 0;
    goto L_08A7907C;
}

/* 08A790AC */
rv_t func_08A790AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A790AC:;
    sp = sp - 16;
    s1 = a2 + 0;
    { rv_t r_ = func_08A796C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A790C4;
L_08A790C4:;
    s0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A790F0; }
    goto L_08A790D0;
L_08A790D0:;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A79140; }
    goto L_08A790DC;
L_08A790DC:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A79104; }
    goto L_08A790E8;
L_08A790E8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A796A0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A790F0;
L_08A790F0:;
    goto L_08A790F4;
L_08A790F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A79104:;
    { u64 r_ = func_08A796A0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7910C;
L_08A7910C:;
    a0 = LD32(v0);
    a1 = LD32(v0+4);
    a2 = LD32(s1);
    a3 = LD32(s1+4);
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79120;
L_08A79120:;
    a0 = v0 + 0;
    a1 = v1 + 0;
    v0 = func_08A7945C(a0, a1);
    goto L_08A7912C;
L_08A7912C:;
    a0 = s0 + 0;
    goto L_08A79130;
L_08A79130:;
    a1 = v0 + 0;
    { u64 r_ = func_08A795F8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79138;
L_08A79138:;
    goto L_08A790F4;
L_08A79140:;
    { u64 r_ = func_08A796A0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79148;
L_08A79148:;
    a0 = LD32(v0);
    v0 = LD32(s1);
    { s64 p_ = (s64)(s32)a0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = lo;
    v0 = func_08A7944C(a0);
    goto L_08A7915C;
L_08A7915C:;
    a0 = s0 + 0;
    goto L_08A79130;
}

/* 08A79164 */
rv_t func_08A79164(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A79164:;
    sp = sp - 16;
    s2 = a2 + 0;
    { rv_t r_ = func_08A796C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A79180;
L_08A79180:;
    s1 = v0 + 0;
    cnd_ = s1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A791AC; }
    goto L_08A7918C;
L_08A7918C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A79220; }
    goto L_08A79198;
L_08A79198:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A791C4; }
    goto L_08A791A4;
L_08A791A4:;
    a0 = s1 + 0;
    { u64 r_ = func_08A796A0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A791AC;
L_08A791AC:;
    goto L_08A791B0;
L_08A791B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A791C4:;
    { u64 r_ = func_08A796A0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A791CC;
L_08A791CC:;
    a2 = LD32(s2);
    a3 = LD32(s2+4);
    a0 = D_08AF0928 - (2344);
    a0 = LD32(a0+2344);
    a1 = D_08AF092C - (2348);
    a1 = LD32(a1+2348);
    s0 = v0 + 0;
    { u64 r_ = func_08A93850(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A791EC;
L_08A791EC:;
    a0 = LD32(s0);
    a1 = LD32(s0+4);
    a2 = v0 + 0;
    a3 = v1 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79200;
L_08A79200:;
    a0 = v0 + 0;
    a1 = v1 + 0;
    v0 = func_08A7945C(a0, a1);
    goto L_08A7920C;
L_08A7920C:;
    a0 = s1 + 0;
    goto L_08A79210;
L_08A79210:;
    a1 = v0 + 0;
    { u64 r_ = func_08A795F8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79218;
L_08A79218:;
    goto L_08A791B0;
L_08A79220:;
    { u64 r_ = func_08A796A0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79228;
L_08A79228:;
    a0 = LD32(v0);
    v0 = LD32(s2);
    { s32 x_ = (s32)a0, y_ = (s32)v0; if (y_ == 0) { lo = x_ < 0 ? 1 : 0xFFFFFFFFu; hi = (u32)x_; } else if (x_ == INT32_MIN && y_ == -1) { lo = 0x80000000u; hi = 0; } else { lo = (u32)(x_ / y_); hi = (u32)(x_ % y_); } }
    a0 = lo;
    v0 = func_08A7944C(a0);
    goto L_08A7923C;
L_08A7923C:;
    a0 = s1 + 0;
    goto L_08A79210;
}

/* 08A79244 */
rv_t func_08A79244(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A79244:;
    sp = sp - 32;
    s3 = a2 + 0;
    { rv_t r_ = func_08A796C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A79264;
L_08A79264:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    cnd_ = s2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A792DC; }
    goto L_08A79274;
L_08A79274:;
    { u64 r_ = func_08A796A0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7927C;
L_08A7927C:;
    a0 = v0 + 0;
    s1 = v0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79288;
L_08A79288:;
    a0 = s3 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79294;
L_08A79294:;
    s0 = s0 + v0;
    s0 = s0 + 1;
    a0 = s0 + 0;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A792A4;
L_08A792A4:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A792B4;
L_08A792B4:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08A897C0(a0, a1);
    goto L_08A792C0;
L_08A792C0:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A795F8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A792CC;
L_08A792CC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A792D4;
L_08A792D4:;
    a0 = s2 + 0;
    { u64 r_ = func_08A796A0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A792DC;
L_08A792DC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A792F8 */
rv_t func_08A792F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A792F8:;
    sp = sp - 32;
    s2 = a2 + 0;
    { rv_t r_ = func_08A796C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7931C;
L_08A7931C:;
    s4 = v0 + 0;
    cnd_ = s4 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A79348; }
    goto L_08A79328;
L_08A79328:;
    v1 = LD32(s4+4);
    cnd_ = v1 == 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08A79410; }
    goto L_08A79334;
L_08A79334:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A79368; }
    goto L_08A79340;
L_08A79340:;
    a0 = s4 + 0;
    { u64 r_ = func_08A796A0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79348;
L_08A79348:;
    goto L_08A7934C;
L_08A7934C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A79368:;
    { u64 r_ = func_08A796A0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79370;
L_08A79370:;
    s0 = LD32(s4+8);
    s1 = v0 + 0;
    a0 = s0 + 0;
    { u64 r_ = func_08A93DA4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79380;
L_08A79380:;
    a0 = LD32(s1);
    a1 = LD32(s1+4);
    a2 = v0 + 0;
    a3 = v1 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79394;
L_08A79394:;
    a2 = LD32(s2);
    a3 = LD32(s2+4);
    a1 = v1 + 0;
    a0 = v0 + 0;
    s0 = s0 + 1;
    { u64 r_ = func_08A933FC(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A793AC;
L_08A793AC:;
    ST32(s4+8, s0);
    a0 = s0 + 0;
    s2 = v0 + 0;
    s3 = v1 + 0;
    { u64 r_ = func_08A93DA4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A793C0;
L_08A793C0:;
    a0 = D_08AF0930 - (2352);
    a0 = LD32(a0+2352);
    a1 = D_08AF0934 - (2356);
    a1 = LD32(a1+2356);
    a2 = v0 + 0;
    a3 = v1 + 0;
    { u64 r_ = func_08A93850(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A793DC;
L_08A793DC:;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a1 = s3 + 0;
    a3 = v1 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A793F0;
L_08A793F0:;
    a0 = v0 + 0;
    a1 = v1 + 0;
    v0 = func_08A7945C(a0, a1);
    goto L_08A793FC;
L_08A793FC:;
    a0 = s4 + 0;
    goto L_08A79400;
L_08A79400:;
    a1 = v0 + 0;
    { u64 r_ = func_08A795F8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79408;
L_08A79408:;
    goto L_08A7934C;
L_08A79410:;
    { u64 r_ = func_08A796A0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79418;
L_08A79418:;
    a0 = LD32(v0);
    v0 = LD32(s4+8);
    v1 = LD32(s2);
    { s64 p_ = (s64)(s32)a0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = v0 + 1;
    a0 = lo;
    a0 = a0 + v1;
    { s32 x_ = (s32)a0, y_ = (s32)v0; if (y_ == 0) { lo = x_ < 0 ? 1 : 0xFFFFFFFFu; hi = (u32)x_; } else if (x_ == INT32_MIN && y_ == -1) { lo = 0x80000000u; hi = 0; } else { lo = (u32)(x_ / y_); hi = (u32)(x_ % y_); } }
    a0 = lo;
    ST32(s4+8, v0);
    v0 = func_08A7944C(a0);
    goto L_08A79444;
L_08A79444:;
    a0 = s4 + 0;
    goto L_08A79400;
}

/* 08A7944C */
u32 func_08A7944C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_08A7944C:;
    v1 = D_08C32408 - (9224);
    v0 = v1 + 9224;
    ST32(v1+9224, a0);
    return v0;
}

/* 08A7945C */
u32 func_08A7945C(u32 a0, u32 a1)
{
    u32 at = 0, v0 = 0;
L_08A7945C:;
    v0 = D_08C32410 - (9232);
    at = D_08C32410 - (9232);
    ST32(at+9232, a0);
    at = D_08C32414 - (9236);
    ST32(at+9236, a1);
    v0 = v0 + 9232;
    return v0;
}

/* 08A79478 */
rv_t func_08A79478(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A79478:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = a1 + 0;
    a0 = LD32(a0);
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7949C;
L_08A7949C:;
    v1 = LD32(s2+4);
    s0 = v0 + 3;
    v0 = v1 < 0x2u;
    cnd_ = v0 == 0;
    v0 = 2;
    if (cnd_) { goto L_08A7959C; }
    goto L_08A794B0;
L_08A794B0:;
    v0 = LD32(s1+8);
    v0 = s0 + v0;
    s0 = v0 + 16;
    goto L_08A794BC;
L_08A794BC:;
    v1 = LD32(s1+4);
    goto L_08A794C0;
L_08A794C0:;
    v0 = s0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s2+4); goto L_08A794F0; }
    goto L_08A794CC;
L_08A794CC:;
    cnd_ = v1 == 0;
    v0 = s0 << 1;
    if (cnd_) { goto L_08A794D8; }
    goto L_08A794D4;
L_08A794D4:;
    v0 = v1 << 1;
    goto L_08A794D8;
L_08A794D8:;
    ST32(s1+4, v0);
    a0 = LD32(s1);
    a1 = LD32(s1+4);
    v0 = func_08A6AF98(a0, a1, 0, 0, 0);
    goto L_08A794E8;
L_08A794E8:;
    ST32(s1, v0);
    v1 = LD32(s2+4);
    goto L_08A794F0;
L_08A794F0:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = LD32(s1); goto L_08A79574; }
    goto L_08A794FC;
L_08A794FC:;
    cnd_ = v1 == 0;
    v0 = 2;
    if (cnd_) { goto L_08A79554; }
    goto L_08A79504;
L_08A79504:;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = LD32(s1); goto L_08A79524; }
    goto L_08A7950C;
L_08A7950C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A79524:;
    v0 = LD32(s1+8);
    a3 = LD32(s2+16);
    a2 = LD32(s2);
    a1 = D_08AE8470 - (-31632);
    a0 = a0 + v0;
    a1 = a1 - 31632;
    goto L_08A7953C;
L_08A7953C:;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A79544;
L_08A79544:;
    v1 = LD32(s1+8);
    goto L_08A79548;
L_08A79548:;
    v1 = v1 + v0;
    ST32(s1+8, v1);
    goto L_08A7950C;
L_08A79554:;
    a0 = LD32(s1);
    v0 = LD32(s1+8);
    a3 = LD32(s2+16);
    a2 = LD32(s2);
    a1 = D_08AE8478 - (-31624);
    a0 = a0 + v0;
    a1 = a1 - 31624;
    goto L_08A7953C;
L_08A79574:;
    v0 = LD32(s1+8);
    t0 = LD32(s2+16);
    t1 = LD32(s2+20);
    a2 = LD32(s2);
    a1 = D_08AE8480 - (-31616);
    a0 = a0 + v0;
    a1 = a1 - 31616;
    { rv_t r_ = func_08A89470(a0, a1, a2, 0, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A79594;
L_08A79594:;
    v1 = LD32(s1+8);
    goto L_08A79548;
L_08A7959C:;
    cnd_ = v1 != v0;
    if (cnd_) { v1 = LD32(s1+4); goto L_08A794C0; }
    goto L_08A795A4;
L_08A795A4:;
    a0 = LD32(s2+16);
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A795AC;
L_08A795AC:;
    v1 = LD32(s1+8);
    v1 = v1 + v0;
    s0 = s0 + v1;
    goto L_08A794BC;
}

/* 08A795BC */
u32 func_08A795BC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08A795BC:;
    v0 = LD_U8(a0);
    cnd_ = v0 == 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A795F0; }
    goto L_08A795C8;
L_08A795C8:;
    a1 = v0 + 0;
    a2 = 92;
    a3 = 47;
    goto L_08A795D4;
L_08A795D4:;
    v0 = (u32)(s32)(s8)a1;
    cnd_ = v0 == a2;
    if (cnd_) { ST8(v1, a3); goto L_08A795E0; }
    goto L_08A795E0;
L_08A795E0:;
    v1 = v1 + 1;
    v0 = LD_U8(v1);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A795D4; }
    goto L_08A795F0;
L_08A795F0:;
    v0 = a0 + 0;
    return v0;
}

/* 08A795F8 */
u64 func_08A795F8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A795F8:;
    sp = sp - 16;
    s1 = a1 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A7963C; }
    goto L_08A79618;
L_08A79618:;
    v0 = LD32(a1);
    goto L_08A7961C;
L_08A7961C:;
    ST32(s0+16, v0);
    goto L_08A79620;
L_08A79620:;
    a0 = s0 + 0;
    { u64 r_ = func_08A796A0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79628;
L_08A79628:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A7963C:;
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = 2;
    if (cnd_) { goto L_08A7968C; }
    goto L_08A79648;
L_08A79648:;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08A79620; }
    goto L_08A79650;
L_08A79650:;
    a0 = LD32(a0+16);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A7967C; }
    goto L_08A7965C;
L_08A7965C:;
    cnd_ = s1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A7961C; }
    goto L_08A79664;
L_08A79664:;
    a0 = s1 + 0;
    { u64 r_ = func_08A6B560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7966C;
L_08A7966C:;
    a0 = v0 + 0;
    v0 = func_08A795BC(a0);
    goto L_08A79674;
L_08A79674:;
    ST32(s0+16, v0);
    goto L_08A79620;
L_08A7967C:;
    { u64 r_ = func_08A6AFBC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79684;
L_08A79684:;
    goto L_08A7965C;
L_08A7968C:;
    v0 = LD32(a1);
    v1 = LD32(a1+4);
    ST32(a0+16, v0);
    ST32(a0+20, v1);
    goto L_08A79620;
}

/* 08A796A0 */
u64 func_08A796A0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_08A796A0:;
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A796B8; }
    goto L_08A796A8;
L_08A796A8:;
    v1 = LD32(a0+4);
    v0 = 2;
    cnd_ = v1 == v0;
    a1 = a0 + 16;
    if (cnd_) { goto L_08A796C0; }
    goto L_08A796B8;
L_08A796B8:;
    v0 = a1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08A796C0:;
    a1 = LD32(a0+16);
    goto L_08A796B8;
}

/* 08A796C8 */
rv_t func_08A796C8(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A796C8:;
    sp = sp - 48;
    v1 = a1 + 0;
    cnd_ = a0 == 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08A796F4; }
    goto L_08A796DC;
L_08A796DC:;
    a0 = LD32(a0);
    ST32(sp, v1);
    { rv_t r_ = func_08A843B0(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A796E8;
L_08A796E8:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A796F4:;
    v0 = D_08C38BA0 - (-29792);
    a0 = LD32(v0-29792);
    goto L_08A796DC;
}

/* 08A79700 */
rv_t func_08A79700(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A79700:;
    sp = sp - 16;
    s2 = a1 + 0;
    s0 = 0 + 0;
    s1 = LD32(a0);
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79728;
L_08A79728:;
    t1 = v0 + 0;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A79778; }
    goto L_08A79734;
L_08A79734:;
    t0 = 0x9ccf0000u;
    v0 = D_08AE9044 - (-28604);
    t2 = v0 - 28604;
    t0 = t0 | 0x9319;
    goto L_08A79744;
L_08A79744:;
    v0 = s1 + a3;
    a0 = (u32)(s32)LD_S8(v0);
    { s64 p_ = (s64)(s32)s0 * (s32)t0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a3 = a3 + 1;
    v0 = a0 + t2;
    v1 = LD_U8(v0);
    a1 = a0 + 32;
    a2 = lo;
    v1 = v1 & 0x1;
    if (v1 != 0) a0 = a1;
    v0 = a3 < t1;
    cnd_ = v0 != 0;
    s0 = a2 + a0;
    if (cnd_) { goto L_08A79744; }
    goto L_08A79778;
L_08A79778:;
    { u32 x_ = s0, y_ = s2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v0 = hi;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A79798 */
u64 func_08A79798(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A79798:;
    sp = sp - 16;
    a0 = LD32(a0);
    a1 = LD32(a1);
    { u64 r_ = func_08A89724(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A797AC;
L_08A797AC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A797B8 */
rv_t func_08A797B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A797B8:;
    sp = sp - 16;
    { u64 r_ = func_08A79798(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A797C8;
L_08A797C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A797D4 */
rv_t func_08A797D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A797D4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0);
    { u64 r_ = func_08A6AFBC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A797EC;
L_08A797EC:;
    v1 = LD32(s0+4);
    v0 = 2;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s0+16); goto L_08A7980C; }
    goto L_08A797FC;
L_08A797FC:;
    goto L_08A79800;
L_08A79800:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A7980C:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A797FC; }
    goto L_08A79814;
L_08A79814:;
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7981C;
L_08A7981C:;
    goto L_08A79800;
}

/* 08A79824 */
u32 func_08A79824(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 160);
L_08A79824:;
    sp = sp - 160;
    s2 = a0 + 0;
    a0 = a1 + 0;
    s3 = a2 + 0;
    s1 = a1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79850;
L_08A79850:;
    a0 = s2 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7985C;
L_08A7985C:;
    s0 = s0 + v0;
    s0 = s0 + 20;
    a1 = D_08AE8488 - (-31608);
    s0 = s0 < 0x80u;
    a1 = a1 - 31608;
    a2 = s1 + 0;
    a3 = s2 + 0;
    cnd_ = s0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A79920; }
    goto L_08A79880;
L_08A79880:;
    v0 = D_08AE8490 - (-31600);
    v0 = v0 - 31600;
    v1 = LDU32(v0);
    a0 = LDU32(v0+4);
    a1 = LDU32(v0+8);
    a2 = LDU32(v0+12);
    STU32(s3, v1);
    STU32(s3+4, a0);
    STU32(s3+8, a1);
    STU32(s3+12, a2);
    v1 = LDU32(v0+16);
    a0 = LDU32(v0+20);
    a1 = LDU32(v0+24);
    a2 = (u32)(s32)LD_S8(v0+28);
    STU32(s3+16, v1);
    STU32(s3+20, a0);
    STU32(s3+24, a1);
    ST8(s3+28, a2);
    v0 = s3 + 0;
    goto L_08A79904;
L_08A79904:;
    sp = sp + 160;
    return v0;
L_08A79920:;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A79928;
L_08A79928:;
    a0 = sp + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79930;
L_08A79930:;
    a1 = v0 + 0;
    a0 = sp + 0;
    a2 = s3 + 0;
    func_08A853D0(a0, a1, a2);
    goto L_08A79940;
L_08A79940:;
    v0 = s3 + 0;
    goto L_08A79904;
}

/* 08A79948 */
u32 func_08A79948(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 176);
L_08A79948:;
    sp = sp - 176;
    v0 = D_08C32438 - (9272);
    cnd_ = a1 == 0;
    ST32(v0+9272, a0);
    if (cnd_) { goto L_08A79974; }
    goto L_08A7996C;
L_08A7996C:;
    v0 = D_08B1D2CC - (-11572);
    ST32(v0-11572, a1);
    goto L_08A79974;
L_08A79974:;
    v0 = D_08C320DC - (8412);
    v1 = LD32(v0+8412);
    v0 = 1;
    cnd_ = v1 == v0;
    a0 = 1;
    if (cnd_) { goto L_08A799A8; }
    goto L_08A79988;
L_08A79988:;
    v0 = a0 + 0;
    sp = sp + 176;
    return v0;
L_08A799A8:;
    v0 = D_08C32424 - (9252);
    v1 = LD32(v0+9252);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A79B30; }
    goto L_08A799B8;
L_08A799B8:;
    s2 = D_08B1D278 - (-11656);
    func_08A6B610();
    goto L_08A799C0;
L_08A799C0:;
    s1 = (u32)-1;
    v0 = func_08A6B620(0, 0, 0, 0, 0, 0, 0);
    goto L_08A799C8;
L_08A799C8:;
    a0 = LD32(s2-11656);
    v1 = D_08C32420 - (9248);
    cnd_ = a0 == s1;
    ST32(v1+9248, v0);
    if (cnd_) { goto L_08A799E0; }
    goto L_08A799D8;
L_08A799D8:;
    func_08A79DC4(0, 0, 0, 0, 0, 0);
    goto L_08A799E0;
L_08A799E0:;
    v0 = D_08B1D2D0 - (-11568);
    s0 = v0 - 11568;
    s3 = D_08C32430 - (9264);
    a0 = s0 + 0;
    ST32(s3+9264, 0);
    v0 = sceNetInetInetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A799F8;
L_08A799F8:;
    cnd_ = v0 == s1;
    s1 = sp + 16;
    if (cnd_) { goto L_08A79AFC; }
    goto L_08A79A00;
L_08A79A00:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79A0C;
L_08A79A0C:;
    a0 = s1 + 0;
    goto L_08A79A10;
L_08A79A10:;
    a1 = 29920;
    a2 = sp + 0;
    a3 = 0 + 0;
    v0 = func_08A7AB78(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_08A79A20;
L_08A79A20:;
    cnd_ = v0 == 0;
    a0 = 2;
    if (cnd_) { goto L_08A79988; }
    goto L_08A79A28;
L_08A79A28:;
    a1 = 1;
    a2 = 6;
    v0 = sceNetInetSocket(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A79A34;
L_08A79A34:;
    s0 = (u32)-1;
    ST32(s2-11656, v0);
    s1 = D_08B1D278 - (-11656);
    cnd_ = v0 == s0;
    a0 = 1;
    if (cnd_) { goto L_08A79988; }
    goto L_08A79A48;
L_08A79A48:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    v0 = func_08A6AFE4(a0, a1, 0, 0, 0);
    goto L_08A79A54;
L_08A79A54:;
    a0 = LD32(s1-11656);
    a1 = sp + 0;
    a2 = 16;
    v0 = sceNetInetConnect(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A79A64;
L_08A79A64:;
    cnd_ = v0 == s0;
    if (cnd_) { goto L_08A79AB4; }
    goto L_08A79A6C;
L_08A79A6C:;
    a0 = 64;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79A74;
L_08A79A74:;
    v1 = D_08C32428 - (9256);
    ST32(v1+9256, v0);
    cnd_ = v0 == 0;
    a0 = 3;
    if (cnd_) { goto L_08A79988; }
    goto L_08A79A84;
L_08A79A84:;
    v1 = 64;
    v0 = D_08C3242C - (9260);
    ST32(v0+9260, v1);
    ST32(s3+9264, 0);
    v0 = func_08A6B620(0, 0, 0, 0, 0, 0, 0);
    goto L_08A79A98;
L_08A79A98:;
    v1 = D_08C3243C - (9276);
    ST32(v1+9276, v0);
    v1 = 2;
    v0 = D_08C32434 - (9268);
    ST32(v0+9268, v1);
    a0 = 6;
    goto L_08A79988;
L_08A79AB4:;
    v0 = sceNetInetGetErrno(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A79ABC;
L_08A79ABC:;
    v1 = v0 ^ 0xb;
    a0 = v0 + 0;
    v0 = v0 ^ 0x74;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    v0 = 119;
    if (cnd_) { goto L_08A79A6C; }
    goto L_08A79ADC;
L_08A79ADC:;
    cnd_ = a0 == v0;
    a0 = LD32(s1-11656);
    if (cnd_) { goto L_08A79A6C; }
    goto L_08A79AE4;
L_08A79AE4:;
    v1 = 1;
    v0 = D_08C32434 - (9268);
    ST32(v0+9268, v1);
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A79AF4;
L_08A79AF4:;
    a0 = 3;
    goto L_08A79988;
L_08A79AFC:;
    a1 = D_08B1D078 - (-12168);
    a0 = s1 + 0;
    a1 = a1 - 12168;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79B0C;
L_08A79B0C:;
    a1 = D_08AE84B0 - (-31568);
    a0 = s1 + 0;
    a1 = a1 - 31568;
    func_08A897C0(a0, a1);
    goto L_08A79B1C;
L_08A79B1C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    func_08A897C0(a0, a1);
    goto L_08A79B28;
L_08A79B28:;
    a0 = s1 + 0;
    goto L_08A79A10;
L_08A79B30:;
    func_08A7A598();
    goto L_08A79B38;
L_08A79B38:;
    goto L_08A799B8;
}

/* 08A79B40 */
u32 func_08A79B40(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A79B40:;
    sp = sp - 48;
    s1 = D_08C32434 - (9268);
    v1 = LD32(s1+9268);
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A79D9C; }
    goto L_08A79B74;
L_08A79B74:;
    v0 = v1 << 2;
    v1 = D_08AE84B4 - (-31564);
    v1 = v1 - 31564;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A79B90u: goto L_08A79B90; case 0x08A79D88u: goto L_08A79D88; case 0x08A79D9Cu: goto L_08A79D9C; case 0x08A79DB4u: goto L_08A79DB4; case 0x08A79DBCu: goto L_08A79DBC; default: rs_break(0, 0x08a79b88); }
L_08A79B90:;
    ST32(sp, 0);
    s6 = D_08B1D278 - (-11656);
    a1 = 0 + 0;
    ST32(sp+4, 0);
    a2 = sp + 0;
    a3 = sp + 4;
    a0 = LD32(s6-11656);
    v0 = func_08A6B114(a0, a1, a2, a3, t1, t2, t3);
    goto L_08A79BB0;
L_08A79BB0:;
    v1 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = 1;
    if (cnd_) { goto L_08A79D90; }
    goto L_08A79BC0;
L_08A79BC0:;
    cnd_ = v1 == v0;
    v0 = LD32(sp+4);
    if (cnd_) { goto L_08A79DA4; }
    goto L_08A79BC8;
L_08A79BC8:;
    cnd_ = v1 == 0;
    v0 = 3;
    if (cnd_) { goto L_08A79CC4; }
    goto L_08A79BD0;
L_08A79BD0:;
    ST32(s1+9268, v0);
    goto L_08A79BD4;
L_08A79BD4:;
    a0 = LD32(s6-11656);
    { u64 r_ = func_08A6B358(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79BDC;
L_08A79BDC:;
    cnd_ = v0 == 0;
    s3 = D_08C32428 - (9256);
    if (cnd_) { goto L_08A79CC4; }
    goto L_08A79BE4;
L_08A79BE4:;
    s2 = D_08C32430 - (9264);
    s4 = D_08C3242C - (9260);
    v1 = LD32(s2+9264);
    a1 = LD32(s3+9256);
    a2 = LD32(s4+9260);
    v0 = D_08B1D278 - (-11656);
    a0 = LD32(v0-11656);
    a1 = a1 + v1;
    a2 = a2 - v1;
    a3 = 0 + 0;
    v0 = sceNetInetRecv(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A79C10;
L_08A79C10:;
    s0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = s0 == v0;
    v0 = LD32(s2+9264);
    if (cnd_) { goto L_08A79D90; }
    goto L_08A79C20;
L_08A79C20:;
    v1 = LD32(s4+9260);
    a1 = 6;
    a0 = v0 + s0;
    v1 = v1 - s0;
    v0 = (s32)a0 < 38;
    ST32(s4+9260, v1);
    cnd_ = v0 != 0;
    ST32(s2+9264, a0);
    if (cnd_) { goto L_08A79CEC; }
    goto L_08A79C40;
L_08A79C40:;
    v0 = LD32(s3+9256);
    v1 = D_08B1D2C8 - (-11576);
    s5 = 4;
    v0 = v0 + a0;
    ST8(v0, 0);
    v0 = D_08B1D27C - (-11652);
    v0 = v0 - 11652;
    a0 = LD32(s3+9256);
    a1 = LD32(s2+9264);
    ST32(v1-11576, v0);
    ST32(s1+9268, s5);
    func_08A7A948(a0, a1);
    goto L_08A79C70;
L_08A79C70:;
    v0 = D_08C32438 - (9272);
    a1 = LD32(v0+9272);
    a0 = LD32(s3+9256);
    v0 = func_08A7A5E4(a0, a1);
    goto L_08A79C80;
L_08A79C80:;
    cnd_ = v0 != 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A79D3C; }
    goto L_08A79C88;
L_08A79C88:;
    v0 = LD32(s2+9264);
    v1 = LD32(s4+9260);
    a0 = LD32(s3+9256);
    a1 = 0 + 0;
    v1 = v1 + v0;
    a2 = v1 + 0;
    v0 = D_08C32434 - (9268);
    ST32(v0+9268, s5);
    ST32(s4+9260, v1);
    ST32(s2+9264, 0);
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79CB4;
L_08A79CB4:;
    a0 = LD32(s6-11656);
    { u64 r_ = func_08A6B358(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79CBC;
L_08A79CBC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A79D2C; }
    goto L_08A79CC4;
L_08A79CC4:;
    v0 = func_08A6B620(0, 0, 0, 0, 0, 0, 0);
    goto L_08A79CCC;
L_08A79CCC:;
    v1 = D_08C3243C - (9276);
    a1 = LD32(v1+9276);
    a0 = D_08B1D2CC - (-11572);
    v1 = LD32(a0-11572);
    v0 = v0 - a1;
    v1 = v1 < v0;
    cnd_ = v1 != 0;
    a1 = 6;
    if (cnd_) { goto L_08A79D18; }
    goto L_08A79CEC;
L_08A79CEC:;
    v0 = a1 + 0;
    sp = sp + 48;
    return v0;
L_08A79D18:;
    v0 = 1;
    ST32(s1+9268, v0);
    func_08A79DC4(0, 0, 0, 0, 0, 0);
    goto L_08A79D24;
L_08A79D24:;
    a1 = 7;
    goto L_08A79CEC;
L_08A79D2C:;
    v0 = func_08A7A74C(0, 0, 0, 0);
    goto L_08A79D34;
L_08A79D34:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A79D50; }
    goto L_08A79D3C;
L_08A79D3C:;
    v0 = 1;
    ST32(s1+9268, v0);
    func_08A79DC4(0, 0, 0, 0, 0, 0);
    goto L_08A79D48;
L_08A79D48:;
    a1 = s0 + 0;
    goto L_08A79CEC;
L_08A79D50:;
    a3 = D_08C3242C - (9260);
    t0 = D_08C32430 - (9264);
    a1 = LD32(t0+9264);
    v1 = LD32(a3+9260);
    v0 = D_08C32428 - (9256);
    a0 = LD32(v0+9256);
    v1 = v1 + a1;
    a2 = v1 + 0;
    a1 = 0 + 0;
    ST32(a3+9260, v1);
    ST32(t0+9264, 0);
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79D80;
L_08A79D80:;
    v1 = 5;
    ST32(s1+9268, v1);
    goto L_08A79D88;
L_08A79D88:;
    a1 = 0 + 0;
    goto L_08A79CEC;
L_08A79D90:;
    v0 = 1;
    goto L_08A79D94;
L_08A79D94:;
    ST32(s1+9268, v0);
    func_08A79DC4(0, 0, 0, 0, 0, 0);
    goto L_08A79D9C;
L_08A79D9C:;
    a1 = 3;
    goto L_08A79CEC;
L_08A79DA4:;
    cnd_ = v0 != v1;
    v0 = 1;
    if (cnd_) { goto L_08A79BC8; }
    goto L_08A79DAC;
L_08A79DAC:;
    goto L_08A79D94;
L_08A79DB4:;
    s6 = D_08B1D278 - (-11656);
    goto L_08A79BD4;
L_08A79DBC:;
    s6 = D_08B1D278 - (-11656);
    goto L_08A79CB4;
}

/* 08A79DC4 */
void func_08A79DC4(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A79DC4:;
    sp = sp - 16;
    s0 = D_08B1D278 - (-11656);
    a1 = 2;
    v0 = LD32(s0-11656);
    s1 = (u32)-1;
    a0 = v0 + 0;
    s2 = D_08C32428 - (9256);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_08A79E04; }
    goto L_08A79DF4;
L_08A79DF4:;
    v0 = sceNetInetShutdown(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A79DFC;
L_08A79DFC:;
    a0 = LD32(s0-11656);
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A79E04;
L_08A79E04:;
    ST32(s0-11656, s1);
    func_08A7B5C0();
    goto L_08A79E0C;
L_08A79E0C:;
    v0 = LD32(s2+9256);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A79E30; }
    goto L_08A79E18;
L_08A79E18:;
    sp = sp + 16;
    return;
L_08A79E30:;
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79E38;
L_08A79E38:;
    v0 = D_08C3242C - (9260);
    v1 = D_08C32430 - (9264);
    ST32(s2+9256, 0);
    ST32(v0+9260, 0);
    ST32(v1+9264, 0);
    goto L_08A79E18;
}

/* 08A79E50 */
u32 func_08A79E50(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A79E50:;
    sp = sp - 16;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A79E74; }
    goto L_08A79E60;
L_08A79E60:;
    v0 = a0 + 16;
    goto L_08A79E64;
L_08A79E64:;
    sp = sp + 16;
    return v0;
L_08A79E74:;
    v0 = D_08C32418 - (9240);
    a0 = LD32(v0+9240);
    v1 = D_08C32444 - (9284);
    a2 = 0x38f30000u;
    s0 = v1 + 9284;
    a2 = a2 | 0x71e6;
    cnd_ = a0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A79E60; }
    goto L_08A79E94;
L_08A79E94:;
    v0 = D_08C3241C - (9244);
    a0 = LD32(v0+9244);
    a0 = a0 ^ a2;
    func_08A7A9D4(a0, a1, a3, t0, t1, t2, t3);
    goto L_08A79EA4;
L_08A79EA4:;
    v0 = s0 + 0;
    goto L_08A79E64;
}

/* 08A79EAC */
void func_08A79EAC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 304);
L_08A79EAC:;
    sp = sp - 304;
    s0 = a0 + 0;
    a0 = 48;
    { u64 r_ = func_08A6AF74(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A79ECC;
L_08A79ECC:;
    s1 = v0 + 0;
    v0 = D_08C32424 - (9252);
    v1 = LD32(v0+9252);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A7A088; }
    goto L_08A79EE0;
L_08A79EE0:;
    a1 = D_08C32420 - (9248);
    goto L_08A79EE4;
L_08A79EE4:;
    v1 = LD32(a1+9248);
    v0 = D_08C3241C - (9244);
    a0 = LD32(v0+9244);
    s2 = D_08B1D278 - (-11656);
    a2 = LD32(s2-11656);
    v0 = v1 + 0;
    v1 = v1 + 1;
    ST32(s1, a0);
    ST32(a1+9248, v1);
    ST32(s1+4, v0);
    v0 = (u32)-1;
    ST32(s1+8, s0);
    ST32(s1+12, 0);
    ST32(s1+28, 0);
    cnd_ = a2 == v0;
    ST32(s1+32, 0);
    if (cnd_) { goto L_08A79FD4; }
    goto L_08A79F24;
L_08A79F24:;
    v1 = D_08AE84CC - (-31540);
    v0 = v1 - 31540;
    t5 = LD32(v1-31540);
    t6 = LD_U8(v0+30);
    a2 = LD32(v0+4);
    a3 = LD32(v0+8);
    t0 = LD32(v0+12);
    t1 = LD32(v0+16);
    t2 = LD32(v0+20);
    t3 = LD32(v0+24);
    t4 = LD_U16(v0+28);
    s0 = sp + 256;
    v0 = D_08B1D29C - (-11620);
    v0 = v0 - 11620;
    v1 = D_08B1D2C8 - (-11576);
    a0 = s0 + 0;
    a1 = 30;
    ST32(v1-11576, v0);
    ST32(sp+256, t5);
    ST32(sp+260, a2);
    ST32(sp+264, a3);
    ST32(sp+268, t0);
    ST32(sp+272, t1);
    ST32(sp+276, t2);
    ST32(sp+280, t3);
    ST16(sp+284, t4);
    ST8(sp+286, t6);
    func_08A7A948(a0, a1);
    goto L_08A79F94;
L_08A79F94:;
    a0 = sp + 0;
    a2 = LD32(s1);
    a3 = LD32(s1+4);
    a1 = s0 + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A79FA8;
L_08A79FA8:;
    a1 = v0 + 0;
    a0 = sp + 0;
    v0 = func_08A7A840(a0, a1);
    goto L_08A79FB4;
L_08A79FB4:;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_08A7A078; }
    goto L_08A79FBC;
L_08A79FBC:;
    a0 = LD32(s1);
    goto L_08A79FC0;
L_08A79FC0:;
    v0 = 0x38f30000u;
    v0 = v0 | 0x71e6;
    a0 = a0 ^ v0;
    a1 = s1 + 16;
    func_08A7A9D4(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A79FD4;
L_08A79FD4:;
    v1 = LD32(s2-11656);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A7A068; }
    goto L_08A79FE4;
L_08A79FE4:;
    cnd_ = s1 == 0;
    v0 = D_08C32418 - (9240);
    if (cnd_) { goto L_08A7A008; }
    goto L_08A79FEC;
L_08A79FEC:;
    v0 = LD32(s1+8);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A7A028; }
    goto L_08A79FF8;
L_08A79FF8:;
    v0 = func_08A6B620(a1, a2, 0, 0, 0, 0, 0);
    goto L_08A7A000;
L_08A7A000:;
    ST32(s1+44, v0);
    v0 = D_08C32418 - (9240);
    goto L_08A7A008;
L_08A7A008:;
    ST32(v0+9240, s1);
    v0 = s1 + 0;
    sp = sp + 304;
    return;
L_08A7A028:;
    v0 = func_08A78D4C(0, 0, 0);
    goto L_08A7A030;
L_08A7A030:;
    ST32(s1+12, v0);
    a0 = 4;
    a1 = 32;
    a2 = 0 + 0;
    v0 = func_08A8399C(a0, a1, a2, 0, 0, 0);
    goto L_08A7A044;
L_08A7A044:;
    ST32(s1+28, v0);
    a0 = 4;
    a1 = 2;
    a2 = 0 + 0;
    v0 = func_08A8399C(a0, a1, a2, 0, 0, 0);
    goto L_08A7A058;
L_08A7A058:;
    ST32(s1+32, v0);
    ST32(s1+40, 0);
    ST32(s1+36, 0);
    goto L_08A79FF8;
L_08A7A068:;
    a0 = s1 + 0;
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7A070;
L_08A7A070:;
    s1 = 0 + 0;
    goto L_08A79FE4;
L_08A7A078:;
    func_08A79DC4(0, 0, 0, 0, 0, 0);
    goto L_08A7A080;
L_08A7A080:;
    a0 = LD32(s1);
    goto L_08A79FC0;
L_08A7A088:;
    func_08A7A598();
    goto L_08A7A090;
L_08A7A090:;
    a1 = D_08C32420 - (9248);
    goto L_08A79EE4;
}

/* 08A7A098 */
void func_08A7A098(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7A098:;
    sp = sp - 16;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A7A148; }
    goto L_08A7A0AC;
L_08A7A0AC:;
    v1 = D_08C32418 - (9240);
    v0 = LD32(v1+9240);
    cnd_ = a0 == v0;
    if (cnd_) { s0 = LD32(v1+9240); goto L_08A7A140; }
    goto L_08A7A0BC;
L_08A7A0BC:;
    cnd_ = s0 == 0;
    if (cnd_) {  goto L_08A7A100; }
    goto L_08A7A0C4;
L_08A7A0C4:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A7A0F4; }
    goto L_08A7A0D0;
L_08A7A0D0:;
    a0 = LD32(s0+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A7A12C; }
    goto L_08A7A0DC;
L_08A7A0DC:;
    a0 = LD32(s0+28);
    goto L_08A7A0E0;
L_08A7A0E0:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A7A11C; }
    goto L_08A7A0E8;
L_08A7A0E8:;
    a0 = LD32(s0+32);
    goto L_08A7A0EC;
L_08A7A0EC:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A7A10C; }
    goto L_08A7A0F4;
L_08A7A0F4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A6AFBC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7A0FC;
L_08A7A0FC:;
    goto L_08A7A100;
L_08A7A100:;
    sp = sp + 16;
    return;
L_08A7A10C:;
    { u64 r_ = func_08A83A24(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7A114;
L_08A7A114:;
    goto L_08A7A0F4;
L_08A7A11C:;
    { u64 r_ = func_08A83A24(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7A124;
L_08A7A124:;
    a0 = LD32(s0+32);
    goto L_08A7A0EC;
L_08A7A12C:;
    func_08A78DA8(a0, t1, t2, t3);
    goto L_08A7A134;
L_08A7A134:;
    a0 = LD32(s0+28);
    goto L_08A7A0E0;
L_08A7A13C:;
    s0 = LD32(v1+9240);
    goto L_08A7A140;
L_08A7A140:;
    ST32(v1+9240, 0);
    goto L_08A7A0BC;
L_08A7A148:;
    v1 = D_08C32418 - (9240);
    goto L_08A7A13C;
}

/* 08A7A150 */
void func_08A7A150(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_08A7A150:;
    sp = sp - 80;
    s2 = a0 + 0;
    a0 = a1 + 0;
    s6 = a2 + 0;
    s4 = 0 + 0;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08A7A308; }
    goto L_08A7A188;
L_08A7A188:;
    v0 = LD32(s2+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A7A2F8; }
    goto L_08A7A194;
L_08A7A194:;
    a0 = LD32(s2+12);
    v0 = func_08A7BBFC(a0, t1, t2, t3);
    goto L_08A7A19C;
L_08A7A19C:;
    a0 = v0 + 0;
    goto L_08A7A1A0;
L_08A7A1A0:;
    s1 = v0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7A1A8;
L_08A7A1A8:;
    a0 = v0 + 256;
    s0 = v0 + 0;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7A1B4;
L_08A7A1B4:;
    s3 = v0 + 0;
    s0 = s0 - 1;
    v0 = (u32)-1;
    cnd_ = s0 == v0;
    a1 = 92;
    if (cnd_) { goto L_08A7A1E8; }
    goto L_08A7A1C8;
L_08A7A1C8:;
    a2 = 1;
    a0 = (u32)-1;
    v1 = s1 + s0;
    goto L_08A7A1D4;
L_08A7A1D4:;
    v0 = (u32)(s32)LD_S8(v1);
    cnd_ = v0 == a1;
    s0 = s0 - 1;
    if (cnd_) { goto L_08A7A2F0; }
    goto L_08A7A1E0;
L_08A7A1E0:;
    cnd_ = s0 != a0;
    v1 = s1 + s0;
    if (cnd_) { goto L_08A7A1D4; }
    goto L_08A7A1E8;
L_08A7A1E8:;
    s5 = D_08B1D278 - (-11656);
    v1 = LD32(s5-11656);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = D_08AE84EC - (-31508);
    if (cnd_) { goto L_08A7A294; }
    goto L_08A7A1FC;
L_08A7A1FC:;
    a2 = v0 - 31508;
    a3 = sp + 0;
    t0 = a2 + 32;
    goto L_08A7A208;
L_08A7A208:;
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
    if (cnd_) { goto L_08A7A208; }
    goto L_08A7A234;
L_08A7A234:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    t0 = (u32)(s32)LD_S8(a2+8);
    ST32(a3, v0);
    ST32(a3+4, v1);
    ST8(a3+8, t0);
    v0 = D_08B1D29C - (-11620);
    v0 = v0 - 11620;
    v1 = D_08B1D2C8 - (-11576);
    a0 = sp + 0;
    a1 = 40;
    ST32(v1-11576, v0);
    func_08A7A948(a0, a1);
    goto L_08A7A268;
L_08A7A268:;
    a0 = s3 + 0;
    a2 = LD32(s2+4);
    a1 = sp + 0;
    a3 = s6 + 0;
    t0 = s1 + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7A280;
L_08A7A280:;
    a1 = v0 + 0;
    a0 = s3 + 0;
    v0 = func_08A7A840(a0, a1);
    goto L_08A7A28C;
L_08A7A28C:;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_08A7A2E0; }
    goto L_08A7A294;
L_08A7A294:;
    v0 = LD32(s5-11656);
    goto L_08A7A298;
L_08A7A298:;
    v1 = 3;
    a0 = s1 + 0;
    v0 = ~(0 | v0);
    if (v0 == 0) s4 = v1;
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7A2AC;
L_08A7A2AC:;
    a0 = s3 + 0;
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7A2B4;
L_08A7A2B4:;
    v0 = s4 + 0;
    goto L_08A7A2BC;
L_08A7A2BC:;
    sp = sp + 80;
    return;
L_08A7A2E0:;
    func_08A79DC4(0, 0, 0, 0, 0, 0);
    goto L_08A7A2E8;
L_08A7A2E8:;
    v0 = LD32(s5-11656);
    goto L_08A7A298;
L_08A7A2F0:;
    ST8(v1, a2);
    goto L_08A7A1E0;
L_08A7A2F8:;
    { u64 r_ = func_08A6B560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7A300;
L_08A7A300:;
    a0 = v0 + 0;
    goto L_08A7A1A0;
L_08A7A308:;
    v0 = D_08C32418 - (9240);
    s2 = LD32(v0+9240);
    cnd_ = s2 != 0;
    v0 = 5;
    if (cnd_) { goto L_08A7A188; }
    goto L_08A7A318;
L_08A7A318:;
    goto L_08A7A2BC;
}

/* 08A7A320 */
void func_08A7A320(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    u8 stack_[320] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 320);
L_08A7A320:;
    sp = sp - 320;
    v1 = D_08AE855C - (-31396);
    v0 = v1 - 31396;
    s5 = t0 + 0;
    s4 = a3 + 0;
    s3 = a2 + 0;
    s2 = a0 + 0;
    a0 = sp + 0;
    s1 = a1 + 0;
    a1 = 29;
    s0 = sp + 32;
    t7 = LD32(v1-31396);
    t1 = LD32(v0+4);
    t2 = LD32(v0+8);
    t3 = LD32(v0+12);
    t4 = LD32(v0+16);
    t5 = LD32(v0+20);
    t6 = LD32(v0+24);
    s6 = LD_U16(v0+28);
    v0 = D_08B1D29C - (-11620);
    v1 = D_08B1D2C8 - (-11576);
    v0 = v0 - 11620;
    ST32(v1-11576, v0);
    ST32(sp, t7);
    ST32(sp+4, t1);
    ST32(sp+8, t2);
    ST32(sp+12, t3);
    ST32(sp+16, t4);
    ST32(sp+20, t5);
    ST32(sp+24, t6);
    ST16(sp+28, s6);
    func_08A7A948(a0, a1);
    goto L_08A7A3C0;
L_08A7A3C0:;
    a2 = s1 + 0;
    a3 = s3 + 0;
    a0 = s0 + 0;
    a1 = sp + 0;
    t0 = s2 + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7A3D8;
L_08A7A3D8:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = s2 + 0;
    a3 = s4 + 0;
    t0 = s5 + 0;
    func_08A7ACCC(a0, a1, a2, a3, t0);
    goto L_08A7A3F0;
L_08A7A3F0:;
    sp = sp + 320;
    return;
}

/* 08A7A418 */
u32 func_08A7A418(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7A418:;
    sp = sp - 32;
    s3 = D_08B1D278 - (-11656);
    v0 = (u32)-1;
    v1 = LD32(s3-11656);
    a0 = 0 + 0;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A7A45C; }
    goto L_08A7A448;
L_08A7A448:;
    v0 = D_08C32434 - (9268);
    v1 = LD32(v0+9268);
    v0 = 5;
    cnd_ = v1 == v0;
    s4 = 256;
    if (cnd_) { goto L_08A7A480; }
    goto L_08A7A45C;
L_08A7A45C:;
    v0 = a0 + 0;
    sp = sp + 32;
    return v0;
L_08A7A480:;
    a0 = LD32(s3-11656);
    s0 = D_08C3242C - (9260);
    s2 = D_08C32430 - (9264);
    s1 = D_08C32428 - (9256);
    v0 = func_08A7ADB4(a0, t1, t2, t3);
    goto L_08A7A494;
L_08A7A494:;
    cnd_ = v0 == 0;
    v1 = LD32(s0+9260);
    if (cnd_) { goto L_08A7A580; }
    goto L_08A7A49C;
L_08A7A49C:;
    v0 = LD32(s2+9264);
    v0 = v1 - v0;
    v0 = (s32)v0 < 128;
    cnd_ = v0 == 0;
    a0 = (s32)v1 < 256;
    if (cnd_) { goto L_08A7A4DC; }
    goto L_08A7A4B0;
L_08A7A4B0:;
    cnd_ = a0 == 0;
    v0 = v1 << 1;
    if (cnd_) { goto L_08A7A578; }
    goto L_08A7A4B8;
L_08A7A4B8:;
    ST32(s0+9260, s4);
    goto L_08A7A4BC;
L_08A7A4BC:;
    a1 = LD32(s0+9260);
    s1 = D_08C32428 - (9256);
    a0 = LD32(s1+9256);
    a1 = a1 + 1;
    v0 = func_08A6AF98(a0, a1, 0, 0, 0);
    goto L_08A7A4D0;
L_08A7A4D0:;
    ST32(s1+9256, v0);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A7A45C; }
    goto L_08A7A4DC;
L_08A7A4DC:;
    v0 = LD32(s2+9264);
    a1 = LD32(s1+9256);
    a2 = LD32(s0+9260);
    a0 = LD32(s3-11656);
    a3 = 0 + 0;
    a2 = a2 - v0;
    a1 = a1 + v0;
    v0 = sceNetInetRecv(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7A4FC;
L_08A7A4FC:;
    s1 = D_08C32430 - (9264);
    s2 = D_08C32428 - (9256);
    cnd_ = (s32)v0 <= 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A7A568; }
    goto L_08A7A50C;
L_08A7A50C:;
    v0 = LD32(s1+9264);
    v1 = LD32(s2+9256);
    v0 = v0 + a0;
    v1 = v1 + v0;
    ST32(s1+9264, v0);
    ST8(v1, 0);
    a0 = LD32(s2+9256);
    a1 = LD32(s1+9264);
    v0 = func_08A7B384(a0, a1);
    goto L_08A7A530;
L_08A7A530:;
    s0 = v0 + 0;
    v0 = LD32(s1+9264);
    cnd_ = s0 == v0;
    a2 = v0 - s0;
    if (cnd_) { goto L_08A7A560; }
    goto L_08A7A540;
L_08A7A540:;
    a1 = LD32(s2+9256);
    a0 = a1 + 0;
    a1 = a1 + s0;
    { u64 r_ = func_08A87C00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7A550;
L_08A7A550:;
    v1 = LD32(s1+9264);
    v1 = v1 - s0;
    ST32(s1+9264, v1);
    goto L_08A7A480;
L_08A7A560:;
    ST32(s1+9264, 0);
    goto L_08A7A480;
L_08A7A568:;
    func_08A79DC4(0, 0, 0, 0, 0, 0);
    goto L_08A7A570;
L_08A7A570:;
    a0 = 0 + 0;
    goto L_08A7A45C;
L_08A7A578:;
    ST32(s0+9260, v0);
    goto L_08A7A4BC;
L_08A7A580:;
    v1 = LD32(s3-11656);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A7A45C; }
    goto L_08A7A590;
L_08A7A590:;
    a0 = 1;
    goto L_08A7A45C;
}

/* 08A7A598 */
void func_08A7A598(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
L_08A7A598:;
    v1 = 1;
    v0 = D_08C32424 - (9252);
    ST32(v0+9252, v1);
    a0 = 71;
    v0 = D_08B1D27C - (-11652);
    ST8(v0-11652, a0);
    v1 = 73;
    v0 = D_08B1D28C - (-11636);
    ST8(v0-11636, v1);
    a0 = 80;
    v0 = D_08B1D29C - (-11620);
    ST8(v0-11620, a0);
    v1 = 103;
    v0 = D_08B1D2AC - (-11604);
    ST8(v0-11604, v1);
    a0 = 92;
    v0 = D_08B1D2BC - (-11588);
    ST8(v0-11588, a0);
    return;
}

/* 08A7A5E4 */
u32 func_08A7A5E4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[240] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 240);
L_08A7A5E4:;
    sp = sp - 240;
    v0 = D_08AE860C - (-31220);
    a3 = v0 - 31220;
    t1 = a0 + 0;
    t0 = a3 + 32;
    s1 = sp + 176;
    a2 = s1 + 0;
    s2 = a1 + 0;
    goto L_08A7A614;
L_08A7A614:;
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
    if (cnd_) { goto L_08A7A614; }
    goto L_08A7A640;
L_08A7A640:;
    a0 = t1 + 0;
    v0 = LD32(a3);
    t0 = LD32(a3+4);
    t1 = LD32(a3+8);
    ST32(a2, v0);
    ST32(a2+4, t0);
    ST32(a2+8, t1);
    v1 = D_08B1D350 - (-11440);
    v0 = 99;
    a1 = v1 - 11440;
    ST8(v1-11440, v0);
    v0 = func_08A7AA34(a0, a1);
    goto L_08A7A670;
L_08A7A670:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A7A738; }
    goto L_08A7A678;
L_08A7A678:;
    a0 = v0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7A680;
L_08A7A680:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_08A7A994(a0, a1);
    goto L_08A7A68C;
L_08A7A68C:;
    a3 = D_08B1D178 - (-11912);
    a1 = D_08AE8638 - (-31176);
    a3 = a3 - 11912;
    a1 = a1 - 31176;
    a2 = v0 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7A6A8;
L_08A7A6A8:;
    s0 = sp + 128;
    a1 = v0 + 0;
    a2 = s0 + 0;
    a0 = sp + 0;
    func_08A853D0(a0, a1, a2);
    goto L_08A7A6BC;
L_08A7A6BC:;
    v0 = D_08B1D29C - (-11620);
    v1 = D_08B1D2C8 - (-11576);
    v0 = v0 - 11620;
    a0 = s1 + 0;
    a1 = 43;
    ST32(v1-11576, v0);
    func_08A7A948(a0, a1);
    goto L_08A7A6D8;
L_08A7A6D8:;
    a2 = D_08B1D078 - (-12168);
    a2 = a2 - 12168;
    a3 = s0 + 0;
    t0 = s2 + 0;
    a1 = s1 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7A6F4;
L_08A7A6F4:;
    a1 = v0 + 0;
    a0 = sp + 0;
    v0 = func_08A7A840(a0, a1);
    goto L_08A7A700;
L_08A7A700:;
    cnd_ = (s32)v0 <= 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A7A724; }
    goto L_08A7A708;
L_08A7A708:;
    v0 = v1 + 0;
    sp = sp + 240;
    return v0;
L_08A7A724:;
    v0 = D_08B1D278 - (-11656);
    a0 = LD32(v0-11656);
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7A730;
L_08A7A730:;
    v1 = 3;
    goto L_08A7A708;
L_08A7A738:;
    v0 = D_08B1D278 - (-11656);
    a0 = LD32(v0-11656);
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7A744;
L_08A7A744:;
    v1 = 5;
    goto L_08A7A708;
}

/* 08A7A74C */
u32 func_08A7A74C(u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 144);
L_08A7A74C:;
    sp = sp - 144;
    s1 = D_08B1D278 - (-11656);
    a2 = 128;
    a0 = LD32(s1-11656);
    a3 = 0 + 0;
    a1 = sp + 0;
    v0 = sceNetInetRecv(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7A774;
L_08A7A774:;
    s0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = s0 == v0;
    a2 = sp + s0;
    if (cnd_) { goto L_08A7A7FC; }
    goto L_08A7A784;
L_08A7A784:;
    ST8(a2, 0);
    goto L_08A7A788;
L_08A7A788:;
    v0 = D_08B1D27C - (-11652);
    v0 = v0 - 11652;
    v1 = D_08B1D2C8 - (-11576);
    a1 = s0 + 0;
    a0 = sp + 0;
    ST32(v1-11576, v0);
    func_08A7A948(a0, a1);
    goto L_08A7A7A4;
L_08A7A7A4:;
    v1 = D_08B1D35C - (-11428);
    a0 = sp + 0;
    v0 = 115;
    a1 = v1 - 11428;
    ST8(v1-11428, v0);
    v0 = func_08A7AA34(a0, a1);
    goto L_08A7A7BC;
L_08A7A7BC:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A7A7EC; }
    goto L_08A7A7C4;
L_08A7A7C4:;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7A7CC;
L_08A7A7CC:;
    v1 = D_08C3241C - (9244);
    ST32(v1+9244, v0);
    v0 = 0 + 0;
    goto L_08A7A7D8;
L_08A7A7D8:;
    sp = sp + 144;
    return v0;
L_08A7A7EC:;
    a0 = LD32(s1-11656);
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7A7F4;
L_08A7A7F4:;
    v0 = 5;
    goto L_08A7A7D8;
L_08A7A7FC:;
    v0 = sceNetInetGetErrno(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7A804;
L_08A7A804:;
    v1 = v0 ^ 0xb;
    a0 = v0 + 0;
    v0 = v0 ^ 0x74;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    a2 = sp + s0;
    if (cnd_) { goto L_08A7A784; }
    goto L_08A7A824;
L_08A7A824:;
    v0 = 119;
    cnd_ = a0 == v0;
    if (cnd_) { ST8(a2, 0); goto L_08A7A788; }
    goto L_08A7A830;
L_08A7A830:;
    a0 = LD32(s1-11656);
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7A838;
L_08A7A838:;
    v0 = 3;
    goto L_08A7A7D8;
}

/* 08A7A840 */
u32 func_08A7A840(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7A840:;
    v0 = D_08B1D27C - (-11652);
    sp = sp - 32;
    v0 = v0 - 11652;
    v1 = D_08B1D2C8 - (-11576);
    s3 = a0 + 0;
    s1 = a1 + 0;
    s2 = s1 + 7;
    s0 = 0 + 0;
    ST32(v1-11576, v0);
    func_08A7A948(a0, a1);
    goto L_08A7A888;
L_08A7A888:;
    a1 = D_08B1D2BC - (-11588);
    a0 = s3 + s1;
    a1 = a1 - 11588;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7A898;
L_08A7A898:;
    cnd_ = (s32)s2 <= 0;
    s5 = D_08B1D278 - (-11656);
    if (cnd_) { goto L_08A7A8E0; }
    goto L_08A7A8A0;
L_08A7A8A0:;
    s4 = (u32)-1;
    s6 = 119;
    a0 = LD32(s5-11656);
    goto L_08A7A8AC;
L_08A7A8AC:;
    a2 = s1 - s0;
    a2 = a2 + 7;
    a1 = s3 + s0;
    a3 = 0 + 0;
    v0 = sceNetInetSend(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7A8C0;
L_08A7A8C0:;
    cnd_ = v0 == s4;
    if (cnd_) { goto L_08A7A910; }
    goto L_08A7A8C8;
L_08A7A8C8:;
    s0 = s0 + v0;
    cnd_ = v0 == 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08A7A8E4; }
    goto L_08A7A8D4;
L_08A7A8D4:;
    v0 = (s32)s0 < (s32)s2;
    goto L_08A7A8D8;
L_08A7A8D8:;
    cnd_ = v0 != 0;
    a0 = LD32(s5-11656);
    if (cnd_) { goto L_08A7A8AC; }
    goto L_08A7A8E0;
L_08A7A8E0:;
    v1 = s0 + 0;
    goto L_08A7A8E4;
L_08A7A8E4:;
    goto L_08A7A8E8;
L_08A7A8E8:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_08A7A910:;
    v0 = sceNetInetGetErrno(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7A918;
L_08A7A918:;
    v1 = v0 ^ 0xb;
    a0 = v0 + 0;
    v0 = v0 ^ 0x74;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    v0 = (s32)s0 < (s32)s2;
    if (cnd_) { goto L_08A7A8D8; }
    goto L_08A7A938;
L_08A7A938:;
    cnd_ = a0 == s6;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A7A8D8; }
    goto L_08A7A940;
L_08A7A940:;
    goto L_08A7A8E8;
}

/* 08A7A948 */
void func_08A7A948(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08A7A948:;
    t1 = D_08B1D2C8 - (-11576);
    t0 = a0 + 0;
    a2 = LD32(t1-11576);
    cnd_ = (s32)a1 <= 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A7A98C; }
    goto L_08A7A95C;
L_08A7A95C:;
    v1 = t0 + a3;
    a0 = LD_U8(a2);
    v0 = LD_U8(v1);
    a2 = a2 + 1;
    a3 = a3 + 1;
    v0 = v0 ^ a0;
    ST8(v1, v0);
    a0 = (s32)a3 < (s32)a1;
    v1 = (u32)(s32)LD_S8(a2);
    v0 = LD32(t1-11576);
    cnd_ = a0 != 0;
    if (v1 == 0) a2 = v0;
    if (cnd_) { goto L_08A7A95C; }
    goto L_08A7A98C;
L_08A7A98C:;
    return;
}

/* 08A7A994 */
u32 func_08A7A994(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_08A7A994:;
    t0 = a0 + 0;
    a2 = 0 + 0;
    cnd_ = (s32)a1 <= 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A7A9CC; }
    goto L_08A7A9A4;
L_08A7A9A4:;
    a3 = 0x9ccf0000u;
    a3 = a3 | 0x9319;
    goto L_08A7A9AC;
L_08A7A9AC:;
    { s64 p_ = (s64)(s32)a0 * (s32)a3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = t0 + a2;
    v1 = (u32)(s32)LD_S8(v0);
    a2 = a2 + 1;
    v0 = (s32)a2 < (s32)a1;
    a0 = lo;
    cnd_ = v0 != 0;
    a0 = a0 + v1;
    if (cnd_) { goto L_08A7A9AC; }
    goto L_08A7A9CC;
L_08A7A9CC:;
    v0 = a0 + 0;
    return v0;
}

/* 08A7A9D4 */
void func_08A7A9D4(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7A9D4:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = D_08AE8640 - (-31168);
    a2 = a0 + 0;
    a1 = a1 - 31168;
    a0 = s0 + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7A9F8;
L_08A7A9F8:;
    v1 = LD_U8(s0);
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A7AA24; }
    goto L_08A7AA04;
L_08A7AA04:;
    v0 = s0 - a0;
    goto L_08A7AA08;
L_08A7AA08:;
    v0 = v0 + v1;
    v0 = v0 + 17;
    ST8(s0, v0);
    s0 = s0 + 1;
    v1 = LD_U8(s0);
    cnd_ = v1 != 0;
    v0 = s0 - a0;
    if (cnd_) { goto L_08A7AA08; }
    goto L_08A7AA24;
L_08A7AA24:;
    sp = sp + 16;
    return;
}

/* 08A7AA34 */
u32 func_08A7AA34(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 288);
L_08A7AA34:;
    sp = sp - 288;
    a2 = 254;
    s3 = D_08C32450 - (9296);
    s2 = a0 + 0;
    a0 = sp + 2;
    s1 = a1 + 0;
    a1 = 0 + 0;
    s0 = D_08AE8648 - (-31160);
    v0 = LD_U16(s0-31160);
    s0 = s0 - 31160;
    ST16(sp, v0);
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7AA78;
L_08A7AA78:;
    a1 = s1 + 0;
    v1 = LD32(s3+9296);
    a0 = sp + 0;
    v1 = v1 ^ 0x1;
    ST32(s3+9296, v1);
    func_08A897C0(a0, a1);
    goto L_08A7AA90;
L_08A7AA90:;
    a1 = s0 + 0;
    a0 = sp + 0;
    func_08A897C0(a0, a1);
    goto L_08A7AA9C;
L_08A7AA9C:;
    a0 = s2 + 0;
    a1 = sp + 0;
    { u64 r_ = func_08A89EE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7AAA8;
L_08A7AAA8:;
    s0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A7AB2C; }
    goto L_08A7AAB4;
L_08A7AAB4:;
    a0 = sp + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7AABC;
L_08A7AABC:;
    s0 = s0 + v0;
    a1 = LD_U8(s0);
    a0 = LD32(s3+9296);
    a2 = D_08C32454 - (9300);
    v1 = (u32)(s32)(s8)a1;
    v0 = v1 ^ 0x5c;
    v0 = 0 < v0;
    v1 = 0 < v1;
    v1 = v1 & v0;
    a0 = a0 << 8;
    v0 = a2 + 9300;
    cnd_ = v1 == 0;
    a0 = a0 + v0;
    if (cnd_) { goto L_08A7AB18; }
    goto L_08A7AAF0;
L_08A7AAF0:;
    ST8(a0, a1);
    s0 = s0 + 1;
    a1 = LD_U8(s0);
    v0 = (u32)(s32)(s8)a1;
    v1 = v0 ^ 0x5c;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    a0 = a0 + 1;
    if (cnd_) { goto L_08A7AAF0; }
    goto L_08A7AB18;
L_08A7AB18:;
    v0 = LD32(s3+9296);
    ST8(a0, 0);
    v1 = a2 + 9300;
    v0 = v0 << 8;
    v0 = v0 + v1;
    goto L_08A7AB2C;
L_08A7AB2C:;
    sp = sp + 288;
    return v0;
}

/* 08A7AB48 */
u32 func_08A7AB48(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7AB48:;
    sp = sp - 16;
    v0 = func_08A7AA34(a0, a1);
    goto L_08A7AB58;
L_08A7AB58:;
    v1 = v0 + 0;
    v0 = D_08AE85CC - (-31284);
    cnd_ = v1 == 0;
    v0 = v0 - 31284;
    if (cnd_) { goto L_08A7AB6C; }
    goto L_08A7AB68;
L_08A7AB68:;
    v0 = v1 + 0;
    goto L_08A7AB6C;
L_08A7AB6C:;
    sp = sp + 16;
    return v0;
}

/* 08A7AB78 */
u32 func_08A7AB78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7AB78:;
    a1 = a1 & 0xffff;
    sp = sp - 32;
    a1 = WSBH(a1);
    v0 = 2;
    s3 = 0 + 0;
    s2 = a3 + 0;
    s1 = a0 + 0;
    s0 = a2 + 0;
    ST16(a2, 0);
    ST16(a2+2, a1);
    ST8(a2+1, v0);
    ST16(a2+4, 0);
    ST16(a2+6, 0);
    ST16(a2+8, 0);
    ST16(a2+10, 0);
    ST16(a2+12, 0);
    cnd_ = a0 == 0;
    ST16(a2+14, 0);
    if (cnd_) { goto L_08A7ABE8; }
    goto L_08A7ABD4;
L_08A7ABD4:;
    v0 = sceNetInetInetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7ABDC;
L_08A7ABDC:;
    v1 = v0 >> 16;
    ST16(s0+6, v1);
    ST16(s0+4, v0);
    goto L_08A7ABE8;
L_08A7ABE8:;
    v1 = LDU32(s0+4);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A7AC24; }
    goto L_08A7ABFC;
L_08A7ABFC:;
    cnd_ = s2 != 0;
    if (cnd_) { ST32(s2, s3); goto L_08A7AC04; }
    goto L_08A7AC04;
L_08A7AC04:;
    v0 = 1;
    goto L_08A7AC08;
L_08A7AC08:;
    sp = sp + 32;
    return v0;
L_08A7AC24:;
    { u64 r_ = func_08A6A824(a0, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7AC2C;
L_08A7AC2C:;
    s3 = v0 + 0;
    cnd_ = s3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A7AC08; }
    goto L_08A7AC38;
L_08A7AC38:;
    v0 = LD32(s3+12);
    v1 = LD32(v0);
    a0 = LD32(v1);
    v0 = a0 >> 16;
    ST16(s0+6, v0);
    ST16(s0+4, a0);
    goto L_08A7ABFC;
}

/* 08A7AC54 */
void func_08A7AC54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2)
{
    u32 v0 = 0, v1 = 0, t3 = 0, t4 = 0, s0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A7AC54:;
    sp = sp - 48;
    s0 = D_08C32440 - (9280);
    t3 = a0 + 0;
    t4 = LD32(s0+9280);
    v0 = a1 + 0;
    v1 = a2 + 0;
    a0 = 28;
    a1 = 2;
    a2 = 0 + 0;
    ST32(sp+24, t1);
    ST32(sp+20, t2);
    ST32(sp+4, v0);
    ST32(sp, t3);
    ST32(sp+8, v1);
    ST32(sp+12, a3);
    cnd_ = t4 == 0;
    ST32(sp+16, t0);
    if (cnd_) { goto L_08A7ACBC; }
    goto L_08A7ACA0;
L_08A7ACA0:;
    a0 = LD32(s0+9280);
    a1 = sp + 0;
    func_08A83AC4(a0, a1, t1, t2, t3);
    goto L_08A7ACAC;
L_08A7ACAC:;
    sp = sp + 48;
    return;
L_08A7ACBC:;
    v0 = func_08A8399C(a0, a1, a2, t1, t2, t3);
    goto L_08A7ACC4;
L_08A7ACC4:;
    ST32(s0+9280, v0);
    goto L_08A7ACA0;
}

/* 08A7ACCC */
void func_08A7ACCC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7ACCC:;
    sp = sp - 32;
    v0 = D_08AE8748 - (-30904);
    v1 = v0 - 30904;
    s2 = t0 + 0;
    s1 = a2 + 0;
    s0 = a3 + 0;
    t2 = LD32(v0-30904);
    v0 = D_08B1D278 - (-11656);
    t4 = LD32(v0-11656);
    v0 = LD32(v1+8);
    t3 = LD32(v1+12);
    t1 = LD32(v1+4);
    ST32(sp+8, v0);
    v0 = (u32)-1;
    ST32(sp, t2);
    ST32(sp+4, t1);
    cnd_ = t4 == v0;
    ST32(sp+12, t3);
    if (cnd_) { goto L_08A7AD68; }
    goto L_08A7AD24;
L_08A7AD24:;
    v0 = func_08A7A840(a0, a1);
    goto L_08A7AD2C;
L_08A7AD2C:;
    cnd_ = (s32)v0 <= 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A7AD68; }
    goto L_08A7AD34;
L_08A7AD34:;
    a1 = s1 + 0;
    t1 = s0 + 0;
    t2 = s2 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08A7AC54(a0, a1, a2, a3, t0, t1, t2);
    goto L_08A7AD50;
L_08A7AD50:;
    goto L_08A7AD54;
L_08A7AD54:;
    sp = sp + 32;
    return;
L_08A7AD68:;
    func_08A79DC4(a2, a3, t0, t1, t2, t3);
    goto L_08A7AD70;
L_08A7AD70:;
    v0 = D_08B1D29C - (-11620);
    a0 = sp + 0;
    a1 = 15;
    v0 = v0 - 11620;
    v1 = D_08B1D2C8 - (-11576);
    ST32(v1-11576, v0);
    func_08A7A948(a0, a1);
    goto L_08A7AD8C;
L_08A7AD8C:;
    a0 = s1 + 0;
    t0 = s2 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    cnd_ = s0 == 0;
    a3 = sp + 0;
    if (cnd_) { goto L_08A7AD50; }
    goto L_08A7ADA4;
L_08A7ADA4:;
    t_ = s0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7ADAC;
L_08A7ADAC:;
    goto L_08A7AD54;
}

/* 08A7ADB4 */
u32 func_08A7ADB4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7ADB4:;
    sp = sp - 16;
    { u64 r_ = func_08A6B358(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7ADC4;
L_08A7ADC4:;
    sp = sp + 16;
    return v0;
}

/* 08A7ADD0 */
u32 func_08A7ADD0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
    int cnd_;
L_08A7ADD0:;
    a1 = a1 - 6;
    cnd_ = (s32)a1 <= 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A7AE14; }
    goto L_08A7ADDC;
L_08A7ADDC:;
    t0 = 92;
    t1 = 102;
    t2 = 105;
    t3 = 110;
    t5 = 97;
    t4 = 108;
    a2 = (u32)(s32)LD_S8(v1);
    goto L_08A7ADF8;
L_08A7ADF8:;
    cnd_ = a2 == t0;
    if (cnd_) { v0 = (u32)(s32)LD_S8(v1+1); goto L_08A7AE20; }
    goto L_08A7AE00;
L_08A7AE00:;
    v1 = v1 + 1;
    goto L_08A7AE04;
L_08A7AE04:;
    v0 = v1 - a0;
    v0 = (s32)v0 < (s32)a1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = (u32)(s32)LD_S8(v1); goto L_08A7ADF8; }
    goto L_08A7AE14;
L_08A7AE14:;
    a3 = 0 + 0;
    goto L_08A7AE18;
L_08A7AE18:;
    v0 = a3 + 0;
    return v0;
L_08A7AE20:;
    cnd_ = v0 != t1;
    if (cnd_) { v1 = v1 + 1; goto L_08A7AE04; }
    goto L_08A7AE28;
L_08A7AE28:;
    v0 = (u32)(s32)LD_S8(v1+2);
    cnd_ = v0 != t2;
    if (cnd_) { v1 = v1 + 1; goto L_08A7AE04; }
    goto L_08A7AE34;
L_08A7AE34:;
    v0 = (u32)(s32)LD_S8(v1+3);
    cnd_ = v0 != t3;
    if (cnd_) { v1 = v1 + 1; goto L_08A7AE04; }
    goto L_08A7AE40;
L_08A7AE40:;
    v0 = (u32)(s32)LD_S8(v1+4);
    cnd_ = v0 != t5;
    if (cnd_) { v1 = v1 + 1; goto L_08A7AE04; }
    goto L_08A7AE4C;
L_08A7AE4C:;
    v0 = (u32)(s32)LD_S8(v1+5);
    cnd_ = v0 != t4;
    a3 = v1 + 0;
    if (cnd_) { goto L_08A7AE00; }
    goto L_08A7AE58;
L_08A7AE58:;
    v0 = (u32)(s32)LD_S8(v1+6);
    cnd_ = v0 != a2;
    if (cnd_) { v1 = v1 + 1; goto L_08A7AE04; }
    goto L_08A7AE64;
L_08A7AE64:;
    goto L_08A7AE18;
}

/* 08A7AE6C */
u32 func_08A7AE6C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7AE6C:;
    sp = sp - 32;
    s1 = D_08C32440 - (9280);
    v0 = LD32(s1+9280);
    s5 = a2 + 0;
    s4 = a1 + 0;
    s3 = s1 + 0;
    s2 = a0 + 0;
    a0 = (u32)-1;
    s0 = 0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A7AEF8; }
    goto L_08A7AEB0;
L_08A7AEB0:;
    a0 = LD32(s1+9280);
    v0 = func_08A83A88(a0);
    goto L_08A7AEB8;
L_08A7AEB8:;
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A7AF20; }
    goto L_08A7AEC4;
L_08A7AEC4:;
    a0 = LD32(s3+9280);
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7AECC;
L_08A7AECC:;
    v1 = v0 + 0;
    v0 = LD32(v0);
    cnd_ = v0 == s2;
    if (cnd_) { v0 = LD32(v1+4); goto L_08A7AEE4; }
    goto L_08A7AEDC;
L_08A7AEDC:;
    s0 = s0 + 1;
    goto L_08A7AEB0;
L_08A7AEE4:;
    cnd_ = v0 != s4;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A7AEDC; }
    goto L_08A7AEEC;
L_08A7AEEC:;
    v0 = LD32(v1+8);
    cnd_ = v0 != s5;
    s0 = s0 + 1;
    if (cnd_) { goto L_08A7AEB0; }
    goto L_08A7AEF8;
L_08A7AEF8:;
    v0 = a0 + 0;
    sp = sp + 32;
    return v0;
L_08A7AF20:;
    a0 = (u32)-1;
    goto L_08A7AEF8;
}

/* 08A7AF28 */
void func_08A7AF28(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7AF28:;
    a1 = D_08AE8798 - (-30824);
    sp = sp - 16;
    a1 = a1 - 30824;
    s1 = a0 + 0;
    v0 = func_08A7AB48(a0, a1);
    goto L_08A7AF4C;
L_08A7AF4C:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7AF54;
L_08A7AF54:;
    a1 = D_08AE87A0 - (-30816);
    a1 = a1 - 30816;
    a0 = s1 + 0;
    s2 = v0 + 0;
    v0 = func_08A7AB48(a0, a1);
    goto L_08A7AF68;
L_08A7AF68:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7AF70;
L_08A7AF70:;
    a1 = D_08AE87A4 - (-30812);
    s0 = v0 + 0;
    a0 = s1 + 0;
    a1 = a1 - 30812;
    v0 = func_08A7AB48(a0, a1);
    goto L_08A7AF84;
L_08A7AF84:;
    a1 = s0 + 0;
    a2 = 0 + 0;
    a0 = 0 + 0;
    s1 = v0 + 0;
    v0 = func_08A7AE6C(a0, a1, a2);
    goto L_08A7AF98;
L_08A7AF98:;
    s0 = v0 + 0;
    a1 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = s0 == v0;
    v0 = D_08C32440 - (9280);
    if (cnd_) { goto L_08A7AFD0; }
    goto L_08A7AFAC;
L_08A7AFAC:;
    a0 = LD32(v0+9280);
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7AFB4;
L_08A7AFB4:;
    ST32(v0+8, s2);
    a1 = (s32)0 < (s32)s2;
    a0 = s0 + 0;
    a3 = s1 + 0;
    a2 = 0 + 0;
    t0 = 0 + 0;
    func_08A7B468(a0, a1, a2, a3, t0);
    goto L_08A7AFD0;
L_08A7AFD0:;
    sp = sp + 16;
    return;
}

/* 08A7AFE8 */
void func_08A7AFE8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7AFE8:;
    a1 = D_08AE87AC - (-30804);
    sp = sp - 16;
    a1 = a1 - 30804;
    s0 = a0 + 0;
    v0 = func_08A7AB48(a0, a1);
    goto L_08A7B008;
L_08A7B008:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7B010;
L_08A7B010:;
    a1 = D_08AE87A0 - (-30816);
    a1 = a1 - 30816;
    a0 = s0 + 0;
    s1 = v0 + 0;
    v0 = func_08A7AB48(a0, a1);
    goto L_08A7B024;
L_08A7B024:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7B02C;
L_08A7B02C:;
    a1 = v0 + 0;
    a2 = 0 + 0;
    a0 = 3;
    v0 = func_08A7AE6C(a0, a1, a2);
    goto L_08A7B03C;
L_08A7B03C:;
    s0 = v0 + 0;
    a1 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = s0 == v0;
    v0 = D_08C32440 - (9280);
    if (cnd_) { goto L_08A7B074; }
    goto L_08A7B050;
L_08A7B050:;
    a0 = LD32(v0+9280);
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7B058;
L_08A7B058:;
    ST32(v0+8, s1);
    a1 = (s32)0 < (s32)s1;
    a0 = s0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08A7B468(a0, a1, a2, a3, t0);
    goto L_08A7B074;
L_08A7B074:;
    sp = sp + 16;
    return;
}

/* 08A7B088 */
void func_08A7B088(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7B088:;
    a1 = D_08AE87B4 - (-30796);
    sp = sp - 32;
    a1 = a1 - 30796;
    s2 = a0 + 0;
    v0 = func_08A7AB48(a0, a1);
    goto L_08A7B0B4;
L_08A7B0B4:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7B0BC;
L_08A7B0BC:;
    a1 = D_08AE87A0 - (-30816);
    a1 = a1 - 30816;
    a0 = s2 + 0;
    s4 = v0 + 0;
    v0 = func_08A7AB48(a0, a1);
    goto L_08A7B0D0;
L_08A7B0D0:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7B0D8;
L_08A7B0D8:;
    a1 = D_08AE87BC - (-30788);
    a1 = a1 - 30788;
    a0 = s2 + 0;
    s1 = v0 + 0;
    v0 = func_08A7AB48(a0, a1);
    goto L_08A7B0EC;
L_08A7B0EC:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7B0F4;
L_08A7B0F4:;
    a1 = D_08AE87C0 - (-30784);
    a1 = a1 - 30784;
    a0 = s2 + 0;
    s0 = v0 + 0;
    v0 = func_08A7AB48(a0, a1);
    goto L_08A7B108;
L_08A7B108:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7B110;
L_08A7B110:;
    a2 = s0 + 0;
    a1 = s1 + 0;
    a0 = 1;
    s3 = v0 + 0;
    v0 = func_08A7AE6C(a0, a1, a2);
    goto L_08A7B124;
L_08A7B124:;
    s0 = v0 + 0;
    a1 = D_08AE87C4 - (-30780);
    v0 = (u32)-1;
    a1 = a1 - 30780;
    cnd_ = s0 == v0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A7B184; }
    goto L_08A7B13C;
L_08A7B13C:;
    v0 = func_08A7AB48(a0, a1);
    goto L_08A7B144;
L_08A7B144:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7B14C;
L_08A7B14C:;
    a1 = D_08AE87CC - (-30772);
    a0 = s2 + 0;
    a1 = a1 - 30772;
    s1 = v0 + 0;
    { u64 r_ = func_08A89EE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7B160;
L_08A7B160:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = D_08AE85CC - (-31284); goto L_08A7B1A4; }
    goto L_08A7B168;
L_08A7B168:;
    v0 = v0 + 6;
    goto L_08A7B16C;
L_08A7B16C:;
    a0 = s0 + 0;
    a1 = s4 + 0;
    a2 = s3 + 0;
    a3 = v0 + 0;
    t0 = s1 + 0;
    func_08A7B468(a0, a1, a2, a3, t0);
    goto L_08A7B184;
L_08A7B184:;
    sp = sp + 32;
    return;
L_08A7B1A4:;
    v0 = v0 - 31284;
    s1 = 0 + 0;
    goto L_08A7B16C;
}

/* 08A7B1B0 */
void func_08A7B1B0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7B1B0:;
    a1 = D_08AE87D4 - (-30764);
    sp = sp - 32;
    a1 = a1 - 30764;
    s0 = a0 + 0;
    v0 = func_08A7AB48(a0, a1);
    goto L_08A7B1D8;
L_08A7B1D8:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7B1E0;
L_08A7B1E0:;
    a1 = D_08AE87BC - (-30788);
    a1 = a1 - 30788;
    a0 = s0 + 0;
    s3 = v0 + 0;
    v0 = func_08A7AB48(a0, a1);
    goto L_08A7B1F4;
L_08A7B1F4:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7B1FC;
L_08A7B1FC:;
    a1 = D_08AE87A0 - (-30816);
    a1 = a1 - 30816;
    a0 = s0 + 0;
    s2 = v0 + 0;
    v0 = func_08A7AB48(a0, a1);
    goto L_08A7B210;
L_08A7B210:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7B218;
L_08A7B218:;
    a1 = D_08AE87C0 - (-30784);
    a1 = a1 - 30784;
    a0 = s0 + 0;
    s1 = v0 + 0;
    v0 = func_08A7AB48(a0, a1);
    goto L_08A7B22C;
L_08A7B22C:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7B234;
L_08A7B234:;
    a1 = s1 + 0;
    a2 = s2 + 0;
    a0 = 2;
    s0 = v0 + 0;
    v0 = func_08A7AE6C(a0, a1, a2);
    goto L_08A7B248;
L_08A7B248:;
    v1 = (u32)-1;
    a0 = v0 + 0;
    a1 = s3 + 0;
    a2 = s0 + 0;
    a3 = 0 + 0;
    cnd_ = v0 == v1;
    t0 = 0 + 0;
    if (cnd_) { goto L_08A7B26C; }
    goto L_08A7B264;
L_08A7B264:;
    func_08A7B468(a0, a1, a2, a3, t0);
    goto L_08A7B26C;
L_08A7B26C:;
    sp = sp + 32;
    return;
}

/* 08A7B288 */
void func_08A7B288(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7B288:;
    v0 = a0 + a1;
    sp = sp - 16;
    ST8(v0, 0);
    a2 = 8;
    s1 = a1 + 0;
    a1 = D_08AE87DC - (-30756);
    a1 = a1 - 30756;
    s0 = a0 + 0;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7B2BC;
L_08A7B2BC:;
    cnd_ = v0 != 0;
    v0 = D_08AE87E8 - (-30744);
    if (cnd_) { goto L_08A7B2E8; }
    goto L_08A7B2C4;
L_08A7B2C4:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    func_08A7AF28(a0);
    goto L_08A7B2D0;
L_08A7B2D0:;
    goto L_08A7B2D4;
L_08A7B2D4:;
    sp = sp + 16;
    return;
L_08A7B2E8:;
    s2 = v0 - 30744;
    a0 = s0 + 0;
    a1 = s2 + 0;
    a2 = 9;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7B2FC;
L_08A7B2FC:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A7B31C; }
    goto L_08A7B304;
L_08A7B304:;
    a1 = s2 + 0;
    a2 = 9;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7B310;
L_08A7B310:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = D_08AE87F4 - (-30732); goto L_08A7B32C; }
    goto L_08A7B318;
L_08A7B318:;
    a0 = s0 + 0;
    goto L_08A7B31C;
L_08A7B31C:;
    a1 = s1 + 0;
    func_08A7AFE8(a0);
    goto L_08A7B324;
L_08A7B324:;
    goto L_08A7B2D4;
L_08A7B32C:;
    a1 = a1 - 30732;
    a0 = s0 + 0;
    a2 = 8;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7B33C;
L_08A7B33C:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = D_08AE8800 - (-30720); goto L_08A7B358; }
    goto L_08A7B344;
L_08A7B344:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    func_08A7B088(a0);
    goto L_08A7B350;
L_08A7B350:;
    goto L_08A7B2D4;
L_08A7B358:;
    a1 = a1 - 30720;
    a0 = s0 + 0;
    a2 = 8;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7B368;
L_08A7B368:;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08A7B2D4; }
    goto L_08A7B370;
L_08A7B370:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    func_08A7B1B0(a0);
    goto L_08A7B37C;
L_08A7B37C:;
    goto L_08A7B2D4;
}

/* 08A7B384 */
u32 func_08A7B384(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A7B384:;
    sp = sp - 48;
    s2 = a0 + 0;
    s1 = a1 + 0;
    s7 = s1 + 0;
    v0 = func_08A7ADD0(a0, a1);
    goto L_08A7B3BC;
L_08A7B3BC:;
    s4 = 0 < v0;
    s3 = v0 + 0;
    v0 = (s32)0 < (s32)s1;
    v0 = v0 & s4;
    cnd_ = v0 == 0;
    v0 = D_08B1D27C - (-11652);
    if (cnd_) { goto L_08A7B438; }
    goto L_08A7B3D4;
L_08A7B3D4:;
    s6 = v0 - 11652;
    s5 = D_08B1D2C8 - (-11576);
    s0 = s3 - s2;
    goto L_08A7B3E0;
L_08A7B3E0:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    ST32(s5-11576, s6);
    func_08A7A948(a0, a1);
    goto L_08A7B3F0;
L_08A7B3F0:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    func_08A7B288(a0, a1);
    goto L_08A7B3FC;
L_08A7B3FC:;
    v0 = s2 - s3;
    v0 = s1 + v0;
    s1 = v0 - 7;
    s2 = s3 + 7;
    a1 = s1 + 0;
    cnd_ = (s32)s1 <= 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A7B428; }
    goto L_08A7B418;
L_08A7B418:;
    v0 = func_08A7ADD0(a0, a1);
    goto L_08A7B420;
L_08A7B420:;
    s3 = v0 + 0;
    s4 = 0 < v0;
    goto L_08A7B428;
L_08A7B428:;
    v0 = (s32)0 < (s32)s1;
    v0 = v0 & s4;
    cnd_ = v0 != 0;
    s0 = s3 - s2;
    if (cnd_) { goto L_08A7B3E0; }
    goto L_08A7B438;
L_08A7B438:;
    v0 = s7 - s1;
    sp = sp + 48;
    return v0;
}

/* 08A7B468 */
void func_08A7B468(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A7B468:;
    sp = sp - 48;
    s4 = a2 + 0;
    s3 = a3 + 0;
    s2 = t0 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    cnd_ = (s32)a0 < 0;
    if (cnd_) { goto L_08A7B4B8; }
    goto L_08A7B4A0;
L_08A7B4A0:;
    s5 = D_08C32440 - (9280);
    a0 = LD32(s5+9280);
    v0 = func_08A83A88(a0);
    goto L_08A7B4AC;
L_08A7B4AC:;
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s5+9280); goto L_08A7B4DC; }
    goto L_08A7B4B8;
L_08A7B4B8:;
    goto L_08A7B4BC;
L_08A7B4BC:;
    sp = sp + 48;
    return;
L_08A7B4DC:;
    a1 = s0 + 0;
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7B4E4;
L_08A7B4E4:;
    t3 = LD32(v0+24);
    cnd_ = t3 == 0;
    t4 = v0 + 0;
    if (cnd_) { goto L_08A7B518; }
    goto L_08A7B4F0;
L_08A7B4F0:;
    v1 = LD32(v0);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(t4+20); goto L_08A7B58C; }
    goto L_08A7B500;
L_08A7B500:;
    cnd_ = v1 == 0;
    v0 = 2;
    if (cnd_) { goto L_08A7B56C; }
    goto L_08A7B508;
L_08A7B508:;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_08A7B544; }
    goto L_08A7B510;
L_08A7B510:;
    cnd_ = v1 == v0;
    if (cnd_) { a3 = LD32(t4+20); goto L_08A7B52C; }
    goto L_08A7B518;
L_08A7B518:;
    a0 = LD32(s5+9280);
    goto L_08A7B51C;
L_08A7B51C:;
    a1 = s0 + 0;
    { u64 r_ = func_08A83C44(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7B524;
L_08A7B524:;
    goto L_08A7B4BC;
L_08A7B52C:;
    a0 = LD32(t4+4);
    a1 = LD32(t4+8);
    t_ = t3;
    a2 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7B53C;
L_08A7B53C:;
    a0 = LD32(s5+9280);
    goto L_08A7B51C;
L_08A7B544:;
    t2 = LD32(t4+20);
    a0 = LD32(t4+4);
    a1 = LD32(t4+8);
    a2 = LD32(t4+12);
    a3 = LD32(t4+16);
    t0 = s1 + 0;
    t_ = t3;
    t1 = s4 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7B564;
L_08A7B564:;
    a0 = LD32(s5+9280);
    goto L_08A7B51C;
L_08A7B56C:;
    t0 = LD32(t4+20);
    a0 = LD32(t4+4);
    a1 = LD32(t4+8);
    a2 = s1 + 0;
    t_ = t3;
    a3 = s3 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, 0, 0, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7B584;
L_08A7B584:;
    a0 = LD32(s5+9280);
    goto L_08A7B51C;
L_08A7B58C:;
    t0 = s1 + 0;
    t1 = s4 + 0;
    ST32(sp, v0);
    t2 = s3 + 0;
    t3 = s2 + 0;
    a3 = LD32(t4+16);
    v0 = LD32(t4+24);
    a0 = LD32(t4+4);
    a1 = LD32(t4+8);
    t_ = v0;
    a2 = LD32(t4+12);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7B5B8;
L_08A7B5B8:;
    a0 = LD32(s5+9280);
    goto L_08A7B51C;
}

/* 08A7B5C0 */
void func_08A7B5C0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A7B5C0:;
    sp = sp - 64;
    s6 = D_08C32440 - (9280);
    a0 = LD32(s6+9280);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A7B620; }
    goto L_08A7B5F4;
L_08A7B5F4:;
    sp = sp + 64;
    return;
L_08A7B620:;
    v0 = func_08A83A88(a0);
    goto L_08A7B628;
L_08A7B628:;
    s0 = v0 - 1;
    cnd_ = (s32)s0 < 0;
    v0 = D_08AE8748 - (-30904);
    if (cnd_) { goto L_08A7B698; }
    goto L_08A7B634;
L_08A7B634:;
    v1 = v0 - 30904;
    s3 = LD32(v1+12);
    s2 = LD32(v1+4);
    s1 = LD32(v1+8);
    s7 = LD32(v0-30904);
    v0 = D_08B1D29C - (-11620);
    s5 = v0 - 11620;
    s4 = D_08B1D2C8 - (-11576);
    a1 = 15;
    goto L_08A7B658;
L_08A7B658:;
    a0 = sp + 0;
    ST32(sp, s7);
    ST32(sp+4, s2);
    ST32(sp+8, s1);
    ST32(sp+12, s3);
    ST32(s4-11576, s5);
    func_08A7A948(a0, a1);
    goto L_08A7B674;
L_08A7B674:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    s0 = s0 - 1;
    a2 = 0 + 0;
    a3 = sp + 0;
    t0 = 0 + 0;
    func_08A7B468(a0, a1, a2, a3, t0);
    goto L_08A7B690;
L_08A7B690:;
    cnd_ = (s32)s0 >= 0;
    a1 = 15;
    if (cnd_) { goto L_08A7B658; }
    goto L_08A7B698;
L_08A7B698:;
    a0 = LD32(s6+9280);
    { u64 r_ = func_08A83A24(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7B6A0;
L_08A7B6A0:;
    ST32(s6+9280, 0);
    goto L_08A7B5F4;
}

/* 08A7B6A8 */
u32 func_08A7B6A8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7B6A8:;
    sp = sp - 16;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A7B6CC; }
    goto L_08A7B6B4;
L_08A7B6B4:;
    a0 = LD32(a0+32);
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7B6BC;
L_08A7B6BC:;
    v0 = LD32(v0);
    goto L_08A7B6C4;
L_08A7B6C4:;
    sp = sp + 16;
    return v0;
L_08A7B6CC:;
    v0 = D_08C32418 - (9240);
    a0 = LD32(v0+9240);
    cnd_ = a0 != 0;
    v0 = a1 + 0;
    if (cnd_) { goto L_08A7B6B4; }
    goto L_08A7B6DC;
L_08A7B6DC:;
    goto L_08A7B6C4;
}

/* 08A7B6E4 */
u32 func_08A7B6E4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7B6E4:;
    sp = sp - 16;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A7B708; }
    goto L_08A7B6F0;
L_08A7B6F0:;
    a0 = LD32(a0+28);
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7B6F8;
L_08A7B6F8:;
    v0 = LD32(v0);
    goto L_08A7B700;
L_08A7B700:;
    sp = sp + 16;
    return v0;
L_08A7B708:;
    v0 = D_08C32418 - (9240);
    a0 = LD32(v0+9240);
    cnd_ = a0 != 0;
    v0 = a1 + 0;
    if (cnd_) { goto L_08A7B6F0; }
    goto L_08A7B718;
L_08A7B718:;
    goto L_08A7B700;
}

/* 08A7B720 */
rv_t func_08A7B720(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7B720:;
    sp = sp - 32;
    v1 = a2 + 0;
    s1 = a1 + 0;
    a2 = sp + 0;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    ST32(sp, a3);
    if (cnd_) { goto L_08A7B788; }
    goto L_08A7B748;
L_08A7B748:;
    t_ = v1;
    a0 = LD32(s0+12);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7B750;
L_08A7B750:;
    a1 = s1 + 0;
    a2 = 0 + 0;
    cnd_ = v0 == 0;
    a3 = sp + 0;
    if (cnd_) { goto L_08A7B778; }
    goto L_08A7B760;
L_08A7B760:;
    v0 = LD32(v0);
    goto L_08A7B764;
L_08A7B764:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A7B778:;
    a0 = LD32(s0+12);
    { u64 r_ = func_08A78E40(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7B780;
L_08A7B780:;
    v0 = LD32(v0);
    goto L_08A7B764;
L_08A7B788:;
    v0 = D_08C32418 - (9240);
    s0 = LD32(v0+9240);
    cnd_ = s0 != 0;
    v0 = sp + 0;
    if (cnd_) { goto L_08A7B748; }
    goto L_08A7B798;
L_08A7B798:;
    v0 = LD32(v0);
    goto L_08A7B764;
}

/* 08A7B7A0 */
rv_t func_08A7B7A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7B7A0:;
    sp = sp - 32;
    v1 = a2 + 0;
    s1 = a1 + 0;
    a2 = sp + 0;
    ST32(sp, t0);
    ST32(sp+4, t1);
    cnd_ = a0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A7B810; }
    goto L_08A7B7CC;
L_08A7B7CC:;
    t_ = v1;
    a0 = LD32(s0+12);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7B7D4;
L_08A7B7D4:;
    a1 = s1 + 0;
    a2 = 1;
    cnd_ = v0 == 0;
    a3 = sp + 0;
    if (cnd_) { goto L_08A7B800; }
    goto L_08A7B7E4;
L_08A7B7E4:;
    v1 = LD32(v0+4);
    v0 = LD32(v0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A7B800:;
    a0 = LD32(s0+12);
    { u64 r_ = func_08A78E40(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7B808;
L_08A7B808:;
    goto L_08A7B7E4;
L_08A7B810:;
    v0 = D_08C32418 - (9240);
    s0 = LD32(v0+9240);
    cnd_ = s0 != 0;
    v0 = sp + 0;
    if (cnd_) { goto L_08A7B7CC; }
    goto L_08A7B820;
L_08A7B820:;
    goto L_08A7B7E4;
}

/* 08A7B828 */
rv_t func_08A7B828(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7B828:;
    sp = sp - 16;
    v1 = a2 + 0;
    s2 = a1 + 0;
    a2 = a3 + 0;
    s1 = a3 + 0;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A7B894; }
    goto L_08A7B854;
L_08A7B854:;
    t_ = v1;
    a0 = LD32(s0+12);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7B85C;
L_08A7B85C:;
    a1 = s2 + 0;
    a3 = s1 + 0;
    cnd_ = v0 == 0;
    a2 = 2;
    if (cnd_) { goto L_08A7B884; }
    goto L_08A7B86C;
L_08A7B86C:;
    goto L_08A7B870;
L_08A7B870:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A7B884:;
    a0 = LD32(s0+12);
    { u64 r_ = func_08A78E40(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7B88C;
L_08A7B88C:;
    goto L_08A7B870;
L_08A7B894:;
    v0 = D_08C32418 - (9240);
    s0 = LD32(v0+9240);
    cnd_ = s0 != 0;
    v0 = a3 + 0;
    if (cnd_) { goto L_08A7B854; }
    goto L_08A7B8A4;
L_08A7B8A4:;
    goto L_08A7B870;
}

/* 08A7B8AC */
rv_t func_08A7B8AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08A7B8AC:;
    sp = sp - 96;
    s0 = a1 + 0;
    a1 = t0 + 0;
    s4 = a3 + 0;
    s3 = a2 + 0;
    s2 = t0 + 0;
    s1 = a0 + 0;
    v0 = func_08A7B6A8(a0, a1);
    goto L_08A7B8E4;
L_08A7B8E4:;
    a1 = D_08AE880C - (-30708);
    a2 = s0 + 0;
    a0 = sp + 0;
    a1 = a1 - 30708;
    a3 = v0 + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7B8FC;
L_08A7B8FC:;
    a0 = s1 + 0;
    a2 = s3 + 0;
    a3 = s4 + 0;
    t0 = s2 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_08A7B720(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7B914;
L_08A7B914:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
}

/* 08A7B934 */
rv_t func_08A7B934(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08A7B934:;
    sp = sp - 96;
    s2 = a1 + 0;
    a1 = t2 + 0;
    s5 = a2 + 0;
    s4 = t2 + 0;
    s3 = a0 + 0;
    s1 = t1 + 0;
    s0 = t0 + 0;
    v0 = func_08A7B6A8(a0, a1);
    goto L_08A7B974;
L_08A7B974:;
    a1 = D_08AE880C - (-30708);
    a2 = s2 + 0;
    a3 = v0 + 0;
    a0 = sp + 0;
    a1 = a1 - 30708;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7B98C;
L_08A7B98C:;
    a0 = s3 + 0;
    a2 = s5 + 0;
    t0 = s0 + 0;
    t1 = s1 + 0;
    t2 = s4 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_08A7B7A0(a0, a1, a2, 0, t0, t1, t2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7B9A8;
L_08A7B9A8:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
}

/* 08A7B9CC */
rv_t func_08A7B9CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08A7B9CC:;
    sp = sp - 96;
    s0 = a1 + 0;
    a1 = t0 + 0;
    s4 = a3 + 0;
    s3 = a2 + 0;
    s2 = t0 + 0;
    s1 = a0 + 0;
    v0 = func_08A7B6A8(a0, a1);
    goto L_08A7BA04;
L_08A7BA04:;
    a1 = D_08AE880C - (-30708);
    a2 = s0 + 0;
    a0 = sp + 0;
    a1 = a1 - 30708;
    a3 = v0 + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7BA1C;
L_08A7BA1C:;
    a0 = s1 + 0;
    a2 = s3 + 0;
    a3 = s4 + 0;
    t0 = s2 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_08A7B828(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7BA34;
L_08A7BA34:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
}

/* 08A7BA54 */
rv_t func_08A7BA54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08A7BA54:;
    sp = sp - 96;
    s0 = a1 + 0;
    a1 = t0 + 0;
    s4 = a3 + 0;
    s3 = a2 + 0;
    s2 = t0 + 0;
    s1 = a0 + 0;
    v0 = func_08A7B6E4(a0, a1);
    goto L_08A7BA8C;
L_08A7BA8C:;
    a1 = D_08AE8814 - (-30700);
    a2 = s0 + 0;
    a0 = sp + 0;
    a1 = a1 - 30700;
    a3 = v0 + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7BAA4;
L_08A7BAA4:;
    a0 = s1 + 0;
    a2 = s3 + 0;
    a3 = s4 + 0;
    t0 = s2 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_08A7B720(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7BABC;
L_08A7BABC:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
}

/* 08A7BADC */
rv_t func_08A7BADC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08A7BADC:;
    sp = sp - 96;
    s2 = a1 + 0;
    a1 = t2 + 0;
    s5 = a2 + 0;
    s4 = t2 + 0;
    s3 = a0 + 0;
    s1 = t1 + 0;
    s0 = t0 + 0;
    v0 = func_08A7B6E4(a0, a1);
    goto L_08A7BB1C;
L_08A7BB1C:;
    a1 = D_08AE8814 - (-30700);
    a2 = s2 + 0;
    a3 = v0 + 0;
    a0 = sp + 0;
    a1 = a1 - 30700;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7BB34;
L_08A7BB34:;
    a0 = s3 + 0;
    a2 = s5 + 0;
    t0 = s0 + 0;
    t1 = s1 + 0;
    t2 = s4 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_08A7B7A0(a0, a1, a2, 0, t0, t1, t2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7BB50;
L_08A7BB50:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
}

/* 08A7BB74 */
rv_t func_08A7BB74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08A7BB74:;
    sp = sp - 96;
    s0 = a1 + 0;
    a1 = t0 + 0;
    s4 = a3 + 0;
    s3 = a2 + 0;
    s2 = t0 + 0;
    s1 = a0 + 0;
    v0 = func_08A7B6E4(a0, a1);
    goto L_08A7BBAC;
L_08A7BBAC:;
    a1 = D_08AE8814 - (-30700);
    a2 = s0 + 0;
    a0 = sp + 0;
    a1 = a1 - 30700;
    a3 = v0 + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7BBC4;
L_08A7BBC4:;
    a0 = s1 + 0;
    a2 = s3 + 0;
    a3 = s4 + 0;
    t0 = s2 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_08A7B828(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7BBDC;
L_08A7BBDC:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
}

/* 08A7BBFC */
u32 func_08A7BBFC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7BBFC:;
    sp = sp - 16;
    v0 = func_08A78DD8(a0, t1, t2, t3);
    goto L_08A7BC0C;
L_08A7BC0C:;
    sp = sp + 16;
    return v0;
}

/* 08A7BC18 */
u32 func_08A7BC18(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7BC18:;
    sp = sp - 32;
    s1 = D_08C32654 - (9812);
    v0 = LD32(s1+9812);
    s3 = s1 + 0;
    s2 = a0 + 0;
    a0 = 0 + 0;
    s0 = 0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A7BC78; }
    goto L_08A7BC4C;
L_08A7BC4C:;
    a0 = LD32(s1+9812);
    v0 = func_08A83A88(a0);
    goto L_08A7BC54;
L_08A7BC54:;
    v0 = (s32)s0 < (s32)v0;
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_08A7BC98; }
    goto L_08A7BC64;
L_08A7BC64:;
    a0 = LD32(s3+9812);
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7BC6C;
L_08A7BC6C:;
    v1 = LD32(v0+8);
    cnd_ = v1 != s2;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A7BC4C; }
    goto L_08A7BC78;
L_08A7BC78:;
    v0 = a0 + 0;
    sp = sp + 32;
    return v0;
L_08A7BC98:;
    a0 = 0 + 0;
    goto L_08A7BC78;
}

/* 08A7BCA0 */
u32 func_08A7BCA0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_08A7BCA0:;
    sp = sp - 80;
    a2 = 64;
    a0 = sp + 0;
    a1 = 0 + 0;
    s0 = D_08C32654 - (9812);
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7BCC0;
L_08A7BCC0:;
    a2 = 0 + 0;
    v1 = LD32(s0+9812);
    a0 = 64;
    cnd_ = v1 == 0;
    a1 = 4;
    if (cnd_) { goto L_08A7BD08; }
    goto L_08A7BCD4;
L_08A7BCD4:;
    a0 = LD32(s0+9812);
    a1 = sp + 0;
    func_08A83AC4(a0, a1, 0, 0, 0);
    goto L_08A7BCE0;
L_08A7BCE0:;
    a0 = LD32(s0+9812);
    v0 = func_08A83A88(a0);
    goto L_08A7BCE8;
L_08A7BCE8:;
    a0 = LD32(s0+9812);
    v0 = v0 - 1;
    a1 = v0 + 0;
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7BCF8;
L_08A7BCF8:;
    sp = sp + 80;
    return v0;
L_08A7BD08:;
    v0 = func_08A8399C(a0, a1, a2, 0, 0, 0);
    goto L_08A7BD10;
L_08A7BD10:;
    ST32(s0+9812, v0);
    goto L_08A7BCD4;
}

/* 08A7BD18 */
u64 func_08A7BD18(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7BD18:;
    sp = sp - 32;
    s3 = D_08C32654 - (9812);
    s2 = s3 + 0;
    s1 = a0 + 0;
    s0 = 0 + 0;
    goto L_08A7BD40;
L_08A7BD40:;
    a0 = LD32(s3+9812);
    v0 = func_08A83A88(a0);
    goto L_08A7BD48;
L_08A7BD48:;
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A7BD74; }
    goto L_08A7BD54;
L_08A7BD54:;
    a0 = LD32(s2+9812);
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7BD5C;
L_08A7BD5C:;
    cnd_ = s1 == v0;
    a0 = LD32(s2+9812);
    if (cnd_) { goto L_08A7BD6C; }
    goto L_08A7BD64;
L_08A7BD64:;
    s0 = s0 + 1;
    goto L_08A7BD40;
L_08A7BD6C:;
    a1 = s0 + 0;
    { u64 r_ = func_08A83BB0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7BD74;
L_08A7BD74:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A7BD90 */
void func_08A7BD90(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7BD90:;
    sp = sp - 16;
    s0 = D_08C32654 - (9812);
    v0 = LD32(s0+9812);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A7BDBC; }
    goto L_08A7BDAC;
L_08A7BDAC:;
    sp = sp + 16;
    return;
L_08A7BDBC:;
    { u64 r_ = func_08A83A24(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7BDC4;
L_08A7BDC4:;
    ST32(s0+9812, 0);
    goto L_08A7BDAC;
}

/* 08A7BDCC */
u32 func_08A7BDCC(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7BDCC:;
    a1 = D_08B1D364 - (-11420);
    sp = sp - 16;
    a1 = a1 - 11420;
    a2 = 6;
    v0 = func_08A87A5C(a0, a1, a2);
    goto L_08A7BDE4;
L_08A7BDE4:;
    v0 = v0 < 0x1u;
    sp = sp + 16;
    return v0;
}

/* 08A7BDF4 */
void func_08A7BDF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t3)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7BDF4:;
    v1 = a2 + 0;
    sp = sp - 32;
    v1 = v1 & 0xffff;
    t2 = a1 + 0;
    a2 = t0 + 0;
    v1 = WSBH(v1);
    a1 = a3 + 0;
    t0 = sp + 0;
    a3 = 0 + 0;
    t1 = 16;
    v0 = 2;
    ST8(sp+1, v0);
    ST16(sp+2, v1);
    ST32(sp+4, t2);
    v0 = sceNetInetSendto(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7BE34;
L_08A7BE34:;
    sp = sp + 32;
    return;
}

/* 08A7BE40 */
u32 func_08A7BE40(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7BE40:;
    sp = sp - 32;
    s3 = 0 + 0;
    v0 = func_08A6B38C(t1, t2, t3);
    goto L_08A7BE60;
L_08A7BE60:;
    s2 = v0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A7BEC4; }
    goto L_08A7BE6C;
L_08A7BE6C:;
    v0 = 0x7f000000u;
    a1 = LD32(s2+12);
    v0 = v0 | 0x1;
    s1 = WSBW(v0);
    s0 = 0 + 0;
    goto L_08A7BE80;
L_08A7BE80:;
    v0 = s0 << 2;
    goto L_08A7BE84;
L_08A7BE84:;
    v0 = v0 + a1;
    v0 = LD32(v0);
    s0 = s0 + 1;
    v1 = s3 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A7BEC4; }
    goto L_08A7BE9C;
L_08A7BE9C:;
    v1 = LDU32(v0);
    cnd_ = v1 == s1;
    v0 = s0 << 2;
    if (cnd_) { goto L_08A7BE84; }
    goto L_08A7BEAC;
L_08A7BEAC:;
    s3 = v1 + 0;
    v0 = func_08A6B450(a0);
    goto L_08A7BEB4;
L_08A7BEB4:;
    cnd_ = v0 != 0;
    v1 = s3 + 0;
    if (cnd_) { goto L_08A7BEC4; }
    goto L_08A7BEBC;
L_08A7BEBC:;
    a1 = LD32(s2+12);
    goto L_08A7BE80;
L_08A7BEC4:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
}

/* 08A7BEE4 */
u32 func_08A7BEE4(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A7BEE4:;
    sp = sp - 48;
    a1 = sp + 0;
    a2 = sp + 16;
    v0 = 16;
    ST32(sp+16, v0);
    v0 = sceNetInetGetsockname(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7BF00;
L_08A7BF00:;
    v1 = (u32)-1;
    a0 = LD_U16(sp+2);
    v0 = v0 ^ v1;
    if (v0 == 0) a0 = 0;
    v0 = a0 + 0;
    sp = sp + 48;
    return v0;
}

/* 08A7BF20 */
u64 func_08A7BF20(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_08A7BF20:;
    sp = sp - 112;
    v0 = D_08B1D364 - (-11420);
    v0 = v0 - 11420;
    s2 = sp + 0;
    s1 = a0 + 0;
    s0 = D_08C320E0 - (8416);
    s0 = s0 + 8416;
    a0 = LD32(a0+8);
    v1 = LD32(s1+4);
    a3 = LD_U8(s1+12);
    a0 = WSBW(a0);
    v1 = ~(0 | v1);
    t1 = LDU32(v0);
    t2 = (u32)(s32)LD_S8(v0+4);
    t3 = (u32)(s32)LD_S8(v0+5);
    STU32(sp, t1);
    ST8(sp+4, t2);
    ST8(sp+5, t3);
    t0 = a0 >> 24;
    a1 = (a0 >> 8) & 0xff;
    a2 = (a0 >> 16) & 0xff;
    v1 = 0 < v1;
    v0 = 2;
    ST8(sp+11, t0);
    ST8(sp+13, a3);
    ST8(sp+9, a1);
    ST8(sp+10, a2);
    ST8(sp+14, v1);
    ST8(sp+8, a0);
    ST8(sp+6, v0);
    ST8(sp+7, 0);
    v0 = func_08A7BE40(t1, t2, t3);
    goto L_08A7BFB8;
L_08A7BFB8:;
    v0 = WSBW(v0);
    v1 = v0 >> 24;
    a2 = v0 >> 16;
    a3 = v0 >> 8;
    a1 = s0 + 0;
    a0 = sp + 21;
    ST8(sp+15, v1);
    ST8(sp+16, a2);
    ST8(sp+17, a3);
    ST8(sp+18, v0);
    ST8(sp+19, 0);
    ST8(sp+20, 0);
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7BFEC;
L_08A7BFEC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7BFF4;
L_08A7BFF4:;
    v1 = LD_U8(sp+14);
    cnd_ = v1 == 0;
    s0 = v0 + 22;
    if (cnd_) { goto L_08A7C00C; }
    goto L_08A7C000;
L_08A7C000:;
    v0 = LD32(s1+20);
    cnd_ = v0 == 0;
    v0 = D_08C32658 - (9816);
    if (cnd_) { goto L_08A7C0D0; }
    goto L_08A7C00C;
L_08A7C00C:;
    v0 = LD32(s1+24);
    goto L_08A7C010;
L_08A7C010:;
    cnd_ = v0 == 0;
    v0 = D_08C32658 - (9816);
    if (cnd_) { goto L_08A7C0A8; }
    goto L_08A7C018;
L_08A7C018:;
    v0 = LD_U8(s2+14);
    goto L_08A7C01C;
L_08A7C01C:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1); goto L_08A7C028; }
    goto L_08A7C024;
L_08A7C024:;
    a0 = LD32(s1+4);
    goto L_08A7C028;
L_08A7C028:;
    v0 = func_08A7BEE4(a0, 0, 0, 0, 0, 0);
    goto L_08A7C030;
L_08A7C030:;
    v0 = WSBH(v0);
    a0 = LD32(s1+28);
    v0 = v0 & 0xffff;
    v1 = v0 >> 8;
    ST8(sp+19, v1);
    cnd_ = a0 == 0;
    ST8(sp+20, v0);
    if (cnd_) { goto L_08A7C07C; }
    goto L_08A7C04C;
L_08A7C04C:;
    v0 = func_08A6B620(0, 0, 0, 0, 0, 0, 0);
    goto L_08A7C054;
L_08A7C054:;
    v0 = v0 + 500;
    v1 = 10;
    ST32(s1+36, v1);
    ST32(s1+40, v0);
    sp = sp + 112;
    return (u64)v0 | ((u64)v1 << 32);
L_08A7C07C:;
    v0 = D_08C3265C - (9820);
    a1 = LD32(v0+9820);
    a0 = LD32(s1);
    v0 = 2;
    a3 = s2 + 0;
    t0 = s0 + 0;
    a2 = 27901;
    ST8(s2+12, v0);
    func_08A7BDF4(a0, a1, a2, a3, t0, 0);
    goto L_08A7C0A0;
L_08A7C0A0:;
    goto L_08A7C04C;
L_08A7C0A8:;
    a1 = LD32(v0+9816);
    a0 = LD32(s1);
    v0 = 1;
    a2 = 27901;
    a3 = s2 + 0;
    t0 = s0 + 0;
    ST8(s2+12, v0);
    func_08A7BDF4(a0, a1, a2, a3, t0, 0);
    goto L_08A7C0C8;
L_08A7C0C8:;
    v0 = LD_U8(s2+14);
    goto L_08A7C01C;
L_08A7C0D0:;
    a1 = LD32(v0+9816);
    a0 = LD32(s1+4);
    a2 = 27901;
    a3 = sp + 0;
    t0 = s0 + 0;
    ST8(sp+12, 0);
    func_08A7BDF4(a0, a1, a2, a3, t0, 0);
    goto L_08A7C0EC;
L_08A7C0EC:;
    v0 = LD32(s1+24);
    goto L_08A7C010;
}

/* 08A7C0F4 */
void func_08A7C0F4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A7C0F4:;
    sp = sp - 48;
    s0 = a0 + 0;
    v1 = D_08B1D364 - (-11420);
    v0 = v1 - 11420;
    a3 = sp + 0;
    a0 = LD_U16(a0+48);
    a1 = LD32(s0+16);
    t1 = LD32(s0+8);
    t6 = LD_U8(s0+50);
    t4 = LD32(s0+4);
    t5 = LD32(s0+44);
    t2 = LD32(v1-11420);
    t3 = LD_U16(v0+4);
    a2 = a0 & 0xffff;
    v0 = 2;
    a1 = a1 ^ 0x2;
    t1 = WSBW(t1);
    a0 = WSBH(a2);
    a1 = 0 < a1;
    ST8(sp+6, v0);
    v1 = 7;
    v0 = (u32)-1;
    ST32(sp, t2);
    t0 = 20;
    t2 = t4 + 0;
    ST16(sp+4, t3);
    ST8(sp+7, v1);
    ST32(sp+8, t1);
    ST32(sp+12, t5);
    ST16(sp+16, a0);
    ST8(sp+18, t6);
    cnd_ = t4 == v0;
    ST8(sp+19, a1);
    if (cnd_) { goto L_08A7C1C4; }
    goto L_08A7C180;
L_08A7C180:;
    a1 = LD32(s0+44);
    a0 = t2 + 0;
    func_08A7BDF4(a0, a1, a2, a3, t0, t3);
    goto L_08A7C18C;
L_08A7C18C:;
    v0 = func_08A6B620(0, 0, 0, 0, 0, 0, 0);
    goto L_08A7C194;
L_08A7C194:;
    v1 = LD_U8(s0+50);
    v0 = v0 + 700;
    ST32(s0+40, v0);
    v0 = 7;
    cnd_ = v1 == 0;
    ST32(s0+36, v0);
    if (cnd_) { goto L_08A7C1B4; }
    goto L_08A7C1AC;
L_08A7C1AC:;
    v0 = 1;
    ST8(s0+51, v0);
    goto L_08A7C1B4;
L_08A7C1B4:;
    sp = sp + 48;
    return;
L_08A7C1C4:;
    t2 = LD32(s0);
    goto L_08A7C180;
}

/* 08A7C1CC */
u32 func_08A7C1CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7C1CC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = sceNetInetInetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7C1E0;
L_08A7C1E0:;
    v1 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A7C204; }
    goto L_08A7C1F0;
L_08A7C1F0:;
    v0 = v1 + 0;
    goto L_08A7C1F4;
L_08A7C1F4:;
    sp = sp + 16;
    return v0;
L_08A7C204:;
    { u64 r_ = func_08A6A824(a0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7C20C;
L_08A7C20C:;
    v1 = v0 + 0;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A7C1F4; }
    goto L_08A7C218;
L_08A7C218:;
    v0 = LD32(v1+12);
    v1 = LD32(v0);
    v1 = LD32(v1);
    goto L_08A7C1F0;
}

/* 08A7C228 */
u32 func_08A7C228(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_08A7C228:;
    sp = sp - 80;
    v0 = a0 + 0;
    a2 = D_08AE881C - (-30692);
    a3 = D_08C320E0 - (8416);
    t0 = a1 + 0;
    a2 = a2 - 30692;
    a3 = a3 + 8416;
    a0 = sp + 0;
    a1 = 64;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A7C26C; }
    goto L_08A7C258;
L_08A7C258:;
    a0 = v1 + 0;
    v0 = func_08A7C1CC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7C260;
L_08A7C260:;
    sp = sp + 80;
    return v0;
L_08A7C26C:;
    func_08A893EC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7C274;
L_08A7C274:;
    v1 = sp + 0;
    goto L_08A7C258;
}

/* 08A7C27C */
u64 func_08A7C27C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7C27C:;
    sp = sp - 16;
    s0 = D_08C32658 - (9816);
    a1 = D_08AE8824 - (-30684);
    v0 = LD32(s0+9816);
    a1 = a1 - 30684;
    s1 = D_08C3265C - (9820);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A7C2FC; }
    goto L_08A7C2A4;
L_08A7C2A4:;
    v0 = LD32(s1+9820);
    a1 = D_08AE8838 - (-30664);
    cnd_ = v0 == 0;
    a1 = a1 - 30664;
    if (cnd_) { goto L_08A7C2E8; }
    goto L_08A7C2B4;
L_08A7C2B4:;
    v0 = LD32(s0+9816);
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_08A7C2CC; }
    goto L_08A7C2C0;
L_08A7C2C0:;
    v0 = LD32(s1+9820);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A7C2D4; }
    goto L_08A7C2CC;
L_08A7C2CC:;
    v1 = 0 + 0;
    goto L_08A7C2D4;
L_08A7C2D4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A7C2E8:;
    v0 = D_08C38BA4 - (-29788);
    a0 = LD32(v0-29788);
    v0 = func_08A7C228(a0, a1, t1, t2, t3);
    goto L_08A7C2F4;
L_08A7C2F4:;
    ST32(s1+9820, v0);
    goto L_08A7C2B4;
L_08A7C2FC:;
    v0 = D_08C38BA8 - (-29784);
    a0 = LD32(v0-29784);
    v0 = func_08A7C228(a0, a1, t1, t2, t3);
    goto L_08A7C308;
L_08A7C308:;
    ST32(s0+9816, v0);
    goto L_08A7C2A4;
}

/* 08A7C310 */
u64 func_08A7C310(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7C310:;
    sp = sp - 32;
    v0 = D_08C320DC - (8412);
    s6 = t1 + 0;
    s5 = t0 + 0;
    s4 = a3 + 0;
    a3 = 2;
    s3 = a1 + 0;
    s2 = a0 + 0;
    v1 = LD32(v0+8412);
    v0 = 1;
    cnd_ = v1 != v0;
    s1 = a2 + 0;
    if (cnd_) { goto L_08A7C3DC; }
    goto L_08A7C360;
L_08A7C360:;
    v0 = func_08A7BCA0();
    goto L_08A7C368;
L_08A7C368:;
    s0 = v0 + 0;
    { u64 r_ = func_08A7C27C(0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7C370;
L_08A7C370:;
    cnd_ = v0 == 0;
    a3 = 3;
    if (cnd_) { goto L_08A7C3DC; }
    goto L_08A7C378;
L_08A7C378:;
    a1 = 2;
    a2 = 17;
    a0 = 2;
    cnd_ = s0 == 0;
    a3 = 1;
    if (cnd_) { goto L_08A7C3DC; }
    goto L_08A7C38C;
L_08A7C38C:;
    ST32(s0+4, s2);
    ST32(s0+12, s1);
    ST32(s0+8, s3);
    ST32(s0+52, s4);
    ST32(s0+56, s5);
    ST32(s0+60, s6);
    v0 = sceNetInetSocket(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7C3A8;
L_08A7C3A8:;
    v1 = (u32)-1;
    a0 = s0 + 0;
    ST32(s0, v0);
    ST32(s0+32, 0);
    ST8(s0+50, 0);
    ST8(s0+51, 0);
    ST32(s0+44, 0);
    ST16(s0+48, 0);
    cnd_ = v0 == v1;
    ST32(s0+36, 0);
    if (cnd_) { goto L_08A7C408; }
    goto L_08A7C3D0;
L_08A7C3D0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A7BF20(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7C3D8;
L_08A7C3D8:;
    a3 = 0 + 0;
    goto L_08A7C3DC;
L_08A7C3DC:;
    v0 = a3 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08A7C408:;
    { u64 r_ = func_08A7BD18(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7C410;
L_08A7C410:;
    a3 = 2;
    goto L_08A7C3DC;
}

/* 08A7C418 */
void func_08A7C418(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7C418:;
    sp = sp - 16;
    s1 = (u32)-1;
    v0 = func_08A7BC18(a0);
    goto L_08A7C430;
L_08A7C430:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A7C458; }
    goto L_08A7C438;
L_08A7C438:;
    v0 = LD32(v0);
    cnd_ = v0 == s1;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A7C44C; }
    goto L_08A7C444;
L_08A7C444:;
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7C44C;
L_08A7C44C:;
    v0 = 4;
    ST32(s0, s1);
    ST32(s0+16, v0);
    goto L_08A7C458;
L_08A7C458:;
    sp = sp + 16;
    return;
}

/* 08A7C46C */
void func_08A7C46C(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_08A7C46C:;
    sp = sp - 80;
    v0 = 16;
    v1 = 4;
    s0 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 == v1;
    ST32(sp+32, v0);
    if (cnd_) { goto L_08A7C69C; }
    goto L_08A7C4A0;
L_08A7C4A0:;
    v1 = LD32(a0);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v1 = a1 ^ 0x2;
    if (cnd_) { goto L_08A7C51C; }
    goto L_08A7C4B0;
L_08A7C4B0:;
    s4 = D_08C32660 - (9824);
    s3 = 4;
    a0 = LD32(s0);
    goto L_08A7C4BC;
L_08A7C4BC:;
    s1 = s4 + 9824;
    s2 = (u32)-1;
    { u64 r_ = func_08A6B358(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7C4C8;
L_08A7C4C8:;
    a1 = s1 + 0;
    a2 = 512;
    a3 = 0 + 0;
    t0 = sp + 0;
    cnd_ = v0 == 0;
    t1 = sp + 32;
    if (cnd_) { goto L_08A7C694; }
    goto L_08A7C4E0;
L_08A7C4E0:;
    a0 = LD32(s0);
    v0 = sceNetInetRecvfrom(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7C4E8;
L_08A7C4E8:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    cnd_ = v0 == s2;
    a2 = sp + 0;
    if (cnd_) { goto L_08A7C694; }
    goto L_08A7C4F8;
L_08A7C4F8:;
    f0 = func_08A7CA4C(a0, a1, a2);
    goto L_08A7C500;
L_08A7C500:;
    a1 = LD32(s0+16);
    cnd_ = a1 == s3;
    v1 = a1 ^ 0x2;
    if (cnd_) { goto L_08A7C51C; }
    goto L_08A7C50C;
L_08A7C50C:;
    v0 = LD32(s0);
    cnd_ = v0 != s2;
    if (cnd_) { a0 = LD32(s0); goto L_08A7C4BC; }
    goto L_08A7C518;
L_08A7C518:;
    v1 = a1 ^ 0x2;
    goto L_08A7C51C;
L_08A7C51C:;
    v1 = v1 < 0x1u;
    v0 = a1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A7C614; }
    goto L_08A7C530;
L_08A7C530:;
    v0 = 3;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08A7C5A4; }
    goto L_08A7C53C;
L_08A7C53C:;
    v0 = 1;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08A7C564; }
    goto L_08A7C548;
L_08A7C548:;
    sp = sp + 80;
    return;
L_08A7C564:;
    v0 = func_08A6B620(a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7C56C;
L_08A7C56C:;
    v1 = LD32(s0+40);
    v1 = v1 < v0;
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_08A7C548; }
    goto L_08A7C57C;
L_08A7C57C:;
    v0 = LD32(s0+56);
    a3 = LD32(s0+60);
    a0 = 1;
    a1 = (u32)-1;
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7C594;
L_08A7C594:;
    a0 = LD32(s0+8);
    func_08A7C418(a0);
    goto L_08A7C59C;
L_08A7C59C:;
    goto L_08A7C548;
L_08A7C5A4:;
    v0 = func_08A6B620(a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7C5AC;
L_08A7C5AC:;
    v1 = LD32(s0+40);
    v1 = v1 < v0;
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD32(s0+16); goto L_08A7C53C; }
    goto L_08A7C5BC;
L_08A7C5BC:;
    s1 = LD32(s0+4);
    v0 = (u32)-1;
    cnd_ = s1 == v0;
    if (cnd_) { a1 = LD32(s0+44); goto L_08A7C5DC; }
    goto L_08A7C5CC;
L_08A7C5CC:;
    a0 = LD32(s0+8);
    func_08A7C418(a0);
    goto L_08A7C5D4;
L_08A7C5D4:;
    a1 = LD32(s0+16);
    goto L_08A7C53C;
L_08A7C5DC:;
    v1 = LD_U16(s0+48);
    v0 = 2;
    ST8(sp+17, v0);
    v1 = WSBH(v1);
    a2 = sp + 16;
    ST32(sp+20, a1);
    a0 = 0 + 0;
    ST16(sp+18, v1);
    v0 = LD32(s0+56);
    a1 = LD32(s0);
    t_ = v0;
    a3 = LD32(s0+60);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7C60C;
L_08A7C60C:;
    ST32(s0, s1);
    goto L_08A7C5CC;
L_08A7C614:;
    v0 = func_08A6B620(a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7C61C;
L_08A7C61C:;
    v1 = LD32(s0+40);
    v1 = v1 < v0;
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD32(s0+16); goto L_08A7C530; }
    goto L_08A7C62C;
L_08A7C62C:;
    a0 = LD32(s0+32);
    v0 = LD32(s0+36);
    v0 = (s32)v0 < (s32)a0;
    cnd_ = v0 != 0;
    v0 = a0 + 1;
    if (cnd_) { goto L_08A7C66C; }
    goto L_08A7C640;
L_08A7C640:;
    v1 = LD32(s0+16);
    cnd_ = v1 != 0;
    ST32(s0+32, v0);
    if (cnd_) { goto L_08A7C65C; }
    goto L_08A7C64C;
L_08A7C64C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A7BF20(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7C654;
L_08A7C654:;
    a1 = LD32(s0+16);
    goto L_08A7C530;
L_08A7C65C:;
    a0 = s0 + 0;
    func_08A7C0F4(a0);
    goto L_08A7C664;
L_08A7C664:;
    a1 = LD32(s0+16);
    goto L_08A7C530;
L_08A7C66C:;
    a3 = LD32(s0+60);
    v0 = LD32(s0+56);
    a0 = 2;
    a1 = (u32)-1;
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7C684;
L_08A7C684:;
    a0 = LD32(s0+8);
    func_08A7C418(a0);
    goto L_08A7C68C;
L_08A7C68C:;
    a1 = LD32(s0+16);
    goto L_08A7C530;
L_08A7C694:;
    a1 = LD32(s0+16);
    goto L_08A7C518;
L_08A7C69C:;
    { u64 r_ = func_08A7BD18(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7C6A4;
L_08A7C6A4:;
    goto L_08A7C548;
}

/* 08A7C6AC */
void func_08A7C6AC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7C6AC:;
    sp = sp - 16;
    s1 = D_08C32654 - (9812);
    a0 = LD32(s1+9812);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A7C6DC; }
    goto L_08A7C6C8;
L_08A7C6C8:;
    goto L_08A7C6CC;
L_08A7C6CC:;
    sp = sp + 16;
    return;
L_08A7C6DC:;
    v0 = func_08A83A88(a0);
    goto L_08A7C6E4;
L_08A7C6E4:;
    s0 = v0 - 1;
    cnd_ = (s32)s0 < 0;
    if (cnd_) { goto L_08A7C6CC; }
    goto L_08A7C6F0;
L_08A7C6F0:;
    a0 = LD32(s1+9812);
    goto L_08A7C6F4;
L_08A7C6F4:;
    a1 = s0 + 0;
    s0 = s0 - 1;
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7C700;
L_08A7C700:;
    a0 = v0 + 0;
    func_08A7C46C(a0, 0, 0, 0, 0, 0, 0);
    goto L_08A7C708;
L_08A7C708:;
    cnd_ = (s32)s0 >= 0;
    if (cnd_) { a0 = LD32(s1+9812); goto L_08A7C6F4; }
    goto L_08A7C710;
L_08A7C710:;
    goto L_08A7C6CC;
}

/* 08A7C718 */
void func_08A7C718(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A7C718:;
    sp = sp - 48;
    v0 = a0 + 0;
    v1 = D_08B1D364 - (-11420);
    a0 = LDU32(a1+4);
    a2 = LD_U16(a1+2);
    t1 = LD32(v0+8);
    a1 = a0 + 0;
    a0 = v1 - 11420;
    t4 = LD_U8(v0+12);
    t2 = LD32(v1-11420);
    t3 = LD_U16(a0+4);
    a0 = LD32(v0);
    a2 = WSBH(a2);
    t1 = WSBW(t1);
    v0 = 2;
    v1 = 6;
    a2 = a2 & 0xffff;
    a3 = sp + 0;
    t0 = 21;
    ST32(sp, t2);
    ST16(sp+4, t3);
    ST8(sp+6, v0);
    ST8(sp+7, v1);
    ST8(sp+13, t4);
    ST32(sp+8, t1);
    func_08A7BDF4(a0, a1, a2, a3, t0, t3);
    goto L_08A7C788;
L_08A7C788:;
    sp = sp + 48;
    return;
}

/* 08A7C794 */
void func_08A7C794(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7C794:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD_U8(a1+19);
    cnd_ = v0 == 0;
    a1 = a2 + 0;
    if (cnd_) { goto L_08A7C870; }
    goto L_08A7C7B8;
L_08A7C7B8:;
    v0 = LD32(s0+16);
    goto L_08A7C7BC;
L_08A7C7BC:;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A7C814; }
    goto L_08A7C7C8;
L_08A7C7C8:;
    v1 = LD_U8(s1+19);
    v0 = 2;
    t1 = 3;
    a3 = v1 ^ 0x2;
    if (a3 == 0) t1 = v0;
    t0 = v1 ^ 0x1;
    v0 = 1;
    a1 = (u32)-1;
    a2 = 0 + 0;
    a0 = 2;
    cnd_ = v1 == 0;
    if (t0 == 0) t1 = v0;
    if (cnd_) { goto L_08A7C824; }
    goto L_08A7C7F8;
L_08A7C7F8:;
    v0 = LD32(s0+56);
    a3 = LD32(s0+60);
    t_ = v0;
    a0 = t1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7C808;
L_08A7C808:;
    a0 = LD32(s0+8);
    func_08A7C418(a0);
    goto L_08A7C810;
L_08A7C810:;
    goto L_08A7C814;
L_08A7C814:;
    sp = sp + 16;
    return;
L_08A7C824:;
    v1 = LDU32(s1+12);
    a3 = LD32(s0+52);
    a1 = LD32(s0+60);
    ST32(s0+44, v1);
    v1 = 2;
    v0 = LD_U8(s1+17);
    a2 = LD_U8(s1+16);
    ST32(s0+16, v1);
    v0 = v0 << 8;
    v0 = v0 | a2;
    v0 = WSBH(v0);
    ST16(s0+48, v0);
    t_ = a3;
    ST32(s0+32, 0);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7C860;
L_08A7C860:;
    a0 = s0 + 0;
    func_08A7C0F4(a0);
    goto L_08A7C868;
L_08A7C868:;
    goto L_08A7C814;
L_08A7C870:;
    func_08A7C718(a0, a1);
    goto L_08A7C878;
L_08A7C878:;
    v0 = LD32(s0+16);
    goto L_08A7C7BC;
}

/* 08A7C880 */
float func_08A7C880(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7C880:;
    sp = sp - 16;
    s1 = a2 + 0;
    a3 = LD32(a0+16);
    v0 = a3 < 0x2u;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A7C8E4; }
    goto L_08A7C8A4;
L_08A7C8A4:;
    v1 = LDU32(a2+4);
    v0 = LD_U16(a2+2);
    ST32(a0+44, v1);
    v0 = WSBH(v0);
    v1 = 1;
    ST16(a0+48, v0);
    ST8(a0+50, v1);
    v0 = LD_U8(a1+18);
    cnd_ = v0 == 0;
    v0 = 2;
    if (cnd_) { goto L_08A7C8F8; }
    goto L_08A7C8D0;
L_08A7C8D0:;
    cnd_ = a3 == v0;
    if (cnd_) { v0 = LD_U8(a0+51); goto L_08A7C908; }
    goto L_08A7C8D8;
L_08A7C8D8:;
    v0 = LD_U8(a1+19);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A7C8F8; }
    goto L_08A7C8E4;
L_08A7C8E4:;
    goto L_08A7C8E8;
L_08A7C8E8:;
    sp = sp + 16;
    return f0;
L_08A7C8F8:;
    func_08A7C0F4(a0);
    goto L_08A7C900;
L_08A7C900:;
    goto L_08A7C8E8;
L_08A7C908:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A7C94C; }
    goto L_08A7C910;
L_08A7C910:;
    v0 = 3;
    goto L_08A7C914;
L_08A7C914:;
    ST32(s0+16, v0);
    v0 = func_08A6B620(a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7C91C;
L_08A7C91C:;
    a1 = LD32(s0+4);
    v0 = v0 + 5000;
    ST32(s0+40, v0);
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    a2 = s1 + 0;
    if (cnd_) { goto L_08A7C8E4; }
    goto L_08A7C934;
L_08A7C934:;
    a3 = LD32(s0+60);
    v0 = LD32(s0+56);
    t_ = v0;
    a0 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7C944;
L_08A7C944:;
    goto L_08A7C8E8;
L_08A7C94C:;
    func_08A7C0F4(a0);
    goto L_08A7C954;
L_08A7C954:;
    v0 = 3;
    goto L_08A7C914;
}

/* 08A7C95C */
float func_08A7C95C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7C95C:;
    sp = sp - 16;
    v0 = 1;
    s0 = a0 + 0;
    t0 = LD_U8(a1+7);
    cnd_ = t0 == v0;
    v1 = a2 + 0;
    if (cnd_) { goto L_08A7C9C8; }
    goto L_08A7C97C;
L_08A7C97C:;
    v0 = 2;
    cnd_ = t0 == v0;
    v0 = 3;
    if (cnd_) { goto L_08A7C998; }
    goto L_08A7C988;
L_08A7C988:;
    goto L_08A7C98C;
L_08A7C98C:;
    goto L_08A7C990;
L_08A7C990:;
    sp = sp + 16;
    return f0;
L_08A7C998:;
    ST8(a1+7, v0);
    a3 = a1 + 0;
    t0 = 21;
    a2 = LD_U16(a2+2);
    a1 = LDU32(v1+4);
    a0 = LD32(a0);
    a2 = WSBH(a2);
    a2 = a2 & 0xffff;
    func_08A7BDF4(a0, a1, a2, a3, t0, t3);
    goto L_08A7C9C0;
L_08A7C9C0:;
    goto L_08A7C98C;
L_08A7C9C8:;
    a1 = LD_U8(a1+12);
    v0 = a1 < 0x3u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A7C98C; }
    goto L_08A7C9D8;
L_08A7C9D8:;
    v1 = LD32(a0+16);
    v0 = a1 << 2;
    v0 = v0 + a0;
    cnd_ = v1 != 0;
    ST32(v0+20, t0);
    if (cnd_) { goto L_08A7C98C; }
    goto L_08A7C9EC;
L_08A7C9EC:;
    v0 = LD32(a0+24);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A7C990; }
    goto L_08A7C9F8;
L_08A7C9F8:;
    v0 = LD32(a0+28);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A7C990; }
    goto L_08A7CA04;
L_08A7CA04:;
    v1 = LD32(a0+4);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A7CA20; }
    goto L_08A7CA14;
L_08A7CA14:;
    v0 = LD32(a0+20);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A7C990; }
    goto L_08A7CA20;
L_08A7CA20:;
    ST32(s0+16, t0);
    v0 = func_08A6B620(a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7CA28;
L_08A7CA28:;
    v1 = 0xea60;
    v0 = v0 + v1;
    ST32(s0+40, v0);
    a1 = LD32(s0+60);
    v0 = LD32(s0+52);
    t_ = v0;
    a0 = LD32(s0+16);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7CA44;
L_08A7CA44:;
    goto L_08A7C98C;
}

/* 08A7CA4C */
float func_08A7CA4C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08A7CA4C:;
    sp = sp - 96;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s0 = a0 + 0;
    v0 = func_08A7BDCC(a0);
    goto L_08A7CA74;
L_08A7CA74:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A7CAAC; }
    goto L_08A7CA7C;
L_08A7CA7C:;
    s1 = LD_U8(s0+7);
    v1 = s1 ^ 0x5;
    v0 = s1 ^ 0x7;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 == 0;
    v0 = (s32)s2 < 21;
    if (cnd_) { goto L_08A7CB54; }
    goto L_08A7CA9C;
L_08A7CA9C:;
    v0 = (s32)s2 < 20;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A7CAC4; }
    goto L_08A7CAA8;
L_08A7CAA8:;
    goto L_08A7CAAC;
L_08A7CAAC:;
    sp = sp + 96;
    return f0;
L_08A7CAC4:;
    v0 = LDU32(s0);
    v1 = LDU32(s0+4);
    a0 = LDU32(s0+8);
    a1 = LDU32(s0+12);
    STU32(sp, v0);
    STU32(sp+4, v1);
    STU32(sp+8, a0);
    STU32(sp+12, a1);
    v0 = LDU32(s0+16);
    STU32(sp+16, v0);
    a0 = LD32(sp+8);
    a0 = WSBW(a0);
    v0 = func_08A7BC18(a0);
    goto L_08A7CB20;
L_08A7CB20:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A7CAA8; }
    goto L_08A7CB28;
L_08A7CB28:;
    v0 = 5;
    cnd_ = s1 == v0;
    a2 = s3 + 0;
    if (cnd_) { goto L_08A7CB44; }
    goto L_08A7CB34;
L_08A7CB34:;
    a1 = sp + 0;
    f0 = func_08A7C880(a0, a1, a2, 0, 0, 0, 0);
    goto L_08A7CB3C;
L_08A7CB3C:;
    goto L_08A7CAAC;
L_08A7CB44:;
    a1 = sp + 0;
    func_08A7C794(a0, a1, a2, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A7CB4C;
L_08A7CB4C:;
    goto L_08A7CAAC;
L_08A7CB54:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A7CAAC; }
    goto L_08A7CB5C;
L_08A7CB5C:;
    v0 = LDU32(s0);
    v1 = LDU32(s0+4);
    a0 = LDU32(s0+8);
    a1 = LDU32(s0+12);
    STU32(sp+32, v0);
    STU32(sp+36, v1);
    STU32(sp+40, a0);
    STU32(sp+44, a1);
    v0 = LDU32(s0+16);
    v1 = (u32)(s32)LD_S8(s0+20);
    STU32(sp+48, v0);
    ST8(sp+52, v1);
    a0 = LD32(sp+40);
    a0 = WSBW(a0);
    v0 = func_08A7BC18(a0);
    goto L_08A7CBC0;
L_08A7CBC0:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A7CAA8; }
    goto L_08A7CBC8;
L_08A7CBC8:;
    a1 = sp + 32;
    a2 = s3 + 0;
    f0 = func_08A7C95C(a0, a1, a2, 0, 0, 0, 0);
    goto L_08A7CBD4;
L_08A7CBD4:;
    goto L_08A7CAAC;
}

/* 08A7CBDC */
void func_08A7CBDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7CBDC:;
    sp = sp - 32;
    v0 = D_08C320DC - (8412);
    s5 = t0 + 0;
    s4 = a3 + 0;
    s3 = a1 + 0;
    s2 = a0 + 0;
    a0 = 0 + 0;
    v1 = LD32(v0+8412);
    v0 = 1;
    cnd_ = v1 == v0;
    s1 = a2 + 0;
    if (cnd_) { goto L_08A7CC4C; }
    goto L_08A7CC24;
L_08A7CC24:;
    v0 = a0 + 0;
    sp = sp + 32;
    return;
L_08A7CC4C:;
    cnd_ = a2 == 0;
    v1 = D_08B1CBE8 - (-13336);
    if (cnd_) { goto L_08A7CC24; }
    goto L_08A7CC54;
L_08A7CC54:;
    v0 = LD32(v1-13336);
    s0 = D_08C32960 - (10592);
    t_ = v0;
    s0 = s0 + 10592;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(0, a1, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7CC64;
L_08A7CC64:;
    t3 = D_08C320E0 - (8416);
    a1 = D_08AE88F0 - (-30480);
    a2 = s2 + 0;
    a3 = s3 + 0;
    t0 = s1 + 0;
    t1 = s4 + 0;
    t2 = v0 + 0;
    t3 = t3 + 8416;
    a1 = a1 - 30480;
    a0 = s0 + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7CC90;
L_08A7CC90:;
    a0 = s0 + 0;
    a1 = s5 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    v0 = func_08A6D284(a0, a1, a2, a3);
    goto L_08A7CCA4;
L_08A7CCA4:;
    v0 = ~(0 | v0);
    a0 = 0 < v0;
    goto L_08A7CC24;
}

/* 08A7CCB0 */
u32 func_08A7CCB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, u32 sp_in)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112); memcpy(stack_ + 112, PTR(sp_in), 32); /* stack-passed arguments */
L_08A7CCB0:;
    sp = sp - 112;
    v0 = D_08B1D36C - (-11412);
    fp = a3 + 0;
    s7 = t1 + 0;
    s6 = t2 + 0;
    s5 = a1 + 0;
    s4 = t3 + 0;
    s3 = a2 + 0;
    s2 = t0 + 0;
    s1 = v0 - 11412;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A7CD18; }
    goto L_08A7CD08;
L_08A7CD08:;
    a0 = 1244;
    { u64 r_ = func_08A6AF74(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7CD10;
L_08A7CD10:;
    ST32(s0, v0);
    s1 = v0 + 0;
    goto L_08A7CD18;
L_08A7CD18:;
    s0 = 3;
    v0 = func_08A6B620(a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7CD20;
L_08A7CD20:;
    a0 = v0 + 0;
    func_08A88DE4(a0);
    goto L_08A7CD28;
L_08A7CD28:;
    a0 = s1 + 4;
    a1 = fp + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7CD34;
L_08A7CD34:;
    a1 = s2 + 0;
    a0 = s1 + 68;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7CD40;
L_08A7CD40:;
    v0 = 1;
    ST32(s1+184, v0);
    s2 = s1 + 132;
    v0 = LD32(sp+112);
    v1 = LD32(sp+132);
    ST32(s1, s5);
    ST32(s1+140, v0);
    ST32(s1+276, v1);
    v0 = LD32(sp+120);
    v1 = LD32(sp+116);
    ST32(s1+136, s4);
    ST32(s1+144, v1);
    ST32(s1+148, v0);
    v1 = LD32(sp+124);
    v0 = LD32(sp+128);
    ST32(s1+200, s6);
    ST32(s1+152, v1);
    ST32(s1+156, v0);
    ST32(s1+172, 0);
    ST32(s1+176, 0);
    ST32(s1+160, 0);
    ST32(s1+164, 0);
    ST32(s1+220, 0);
    ST32(s1+188, s7);
    ST32(s1+196, 0);
    ST32(s1+268, 0);
    ST16(s1+272, 0);
    ST32(s1+168, 0);
    ST32(s1+180, 0);
    ST8(s1+280, 0);
    ST32(s1+192, s3);
    s3 = 0x80800000u;
    s3 = s3 | 0x8081;
    goto L_08A7CDC4;
L_08A7CDC4:;
    s0 = s0 - 1;
    v0 = func_08A88E1C();
    goto L_08A7CDCC;
L_08A7CDCC:;
    { s64 p_ = (s64)(s32)v0 * (s32)s3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = (u32)((s32)v0 >> 31);
    a0 = hi;
    a0 = a0 + v0;
    a0 = (u32)((s32)a0 >> 7);
    a0 = a0 - a1;
    v1 = a0 << 8;
    v1 = v1 - a0;
    v0 = v0 - v1;
    ST8(s2, v0);
    cnd_ = (s32)s0 >= 0;
    s2 = s2 + 1;
    if (cnd_) { goto L_08A7CDC4; }
    goto L_08A7CDFC;
L_08A7CDFC:;
    v1 = (u32)-1;
    v0 = s1 + 224;
    s0 = 9;
    goto L_08A7CE08;
L_08A7CE08:;
    s0 = s0 - 1;
    ST32(v0, v1);
    cnd_ = (s32)s0 >= 0;
    v0 = v0 + 4;
    if (cnd_) { goto L_08A7CE08; }
    goto L_08A7CE18;
L_08A7CE18:;
    ST32(s1+264, 0);
    a0 = s1 + 284;
    a1 = 0 + 0;
    a2 = 960;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7CE2C;
L_08A7CE2C:;
    v1 = D_08C32B60 - (11104);
    v0 = LD32(v1+11104);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A7CEC0; }
    goto L_08A7CE3C;
L_08A7CE3C:;
    cnd_ = s7 == 0;
    v1 = 1;
    if (cnd_) { goto L_08A7CE6C; }
    goto L_08A7CE44;
L_08A7CE44:;
    v0 = D_08C38BAC - (-29780);
    v1 = (u32)(s32)LD_S8(v0-29780);
    cnd_ = v1 == 0;
    v0 = v0 - 29780;
    if (cnd_) { goto L_08A7CEA4; }
    goto L_08A7CE54;
L_08A7CE54:;
    a2 = s1 + 204;
    a0 = v0 + 0;
    a1 = 27900;
    a3 = 0 + 0;
    v0 = func_08A7D3BC(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_08A7CE68;
L_08A7CE68:;
    v1 = v0 + 0;
    goto L_08A7CE6C;
L_08A7CE6C:;
    v0 = 3;
    if (v1 != 0) v0 = 0;
    sp = sp + 112;
    return v0;
L_08A7CEA4:;
    a1 = D_08AE8A18 - (-30184);
    a1 = a1 - 30184;
    a2 = fp + 0;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7CEB8;
L_08A7CEB8:;
    v0 = sp + 0;
    goto L_08A7CE54;
L_08A7CEC0:;
    func_08A7D34C(0, 0, 0);
    goto L_08A7CEC8;
L_08A7CEC8:;
    goto L_08A7CE3C;
}

/* 08A7CED0 */
void func_08A7CED0(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_08A7CED0:;
    cnd_ = a0 == 0;
    if (cnd_) { v0 = D_08B1D848 - (-10168); goto L_08A7CEE0; }
    goto L_08A7CED8;
L_08A7CED8:;
    ST32(a0+160, a1);
    return;
L_08A7CEE0:;
    a0 = LD32(v0-10168);
    goto L_08A7CED8;
}

/* 08A7CEE8 */
void func_08A7CEE8(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_08A7CEE8:;
    cnd_ = a0 == 0;
    if (cnd_) { v0 = D_08B1D848 - (-10168); goto L_08A7CEF8; }
    goto L_08A7CEF0;
L_08A7CEF0:;
    ST32(a0+164, a1);
    return;
L_08A7CEF8:;
    a0 = LD32(v0-10168);
    goto L_08A7CEF0;
}

/* 08A7CF00 */
void func_08A7CF00(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_08A7CF00:;
    cnd_ = a0 == 0;
    if (cnd_) { v0 = D_08B1D848 - (-10168); goto L_08A7CF10; }
    goto L_08A7CF08;
L_08A7CF08:;
    ST32(a0+168, a1);
    return;
L_08A7CF10:;
    a0 = LD32(v0-10168);
    goto L_08A7CF08;
}

/* 08A7CF18 */
void func_08A7CF18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7CF18:;
    sp = sp - 16;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A7CF68; }
    goto L_08A7CF2C;
L_08A7CF2C:;
    v0 = LD32(s0+188);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A7CF58; }
    goto L_08A7CF38;
L_08A7CF38:;
    a0 = s0 + 0;
    func_08A7CF74(a0, t1, t2, t3);
    goto L_08A7CF40;
L_08A7CF40:;
    a0 = s0 + 0;
    func_08A7E390(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08A7CF48;
L_08A7CF48:;
    sp = sp + 16;
    return;
L_08A7CF58:;
    func_08A7D018(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7CF60;
L_08A7CF60:;
    goto L_08A7CF38;
L_08A7CF68:;
    v0 = D_08B1D848 - (-10168);
    s0 = LD32(v0-10168);
    goto L_08A7CF2C;
}

/* 08A7CF74 */
void func_08A7CF74(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A7CF74:;
    sp = sp - 64;
    v0 = 16;
    s3 = (u32)-1;
    s2 = D_08C32B64 - (11108);
    s1 = a0 + 0;
    v1 = LD32(a0+196);
    cnd_ = v1 != 0;
    ST32(sp+16, v0);
    if (cnd_) { goto L_08A7CFC4; }
    goto L_08A7CFA8;
L_08A7CFA8:;
    sp = sp + 64;
    return;
L_08A7CFC4:;
    a0 = LD32(s1);
    goto L_08A7CFC8;
L_08A7CFC8:;
    s0 = s2 + 11108;
    { u64 r_ = func_08A6B358(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7CFD0;
L_08A7CFD0:;
    a1 = s0 + 0;
    a2 = 255;
    a3 = 0 + 0;
    t0 = sp + 0;
    cnd_ = v0 == 0;
    t1 = sp + 16;
    if (cnd_) { goto L_08A7CFA8; }
    goto L_08A7CFE8;
L_08A7CFE8:;
    a0 = LD32(s1);
    v0 = sceNetInetRecvfrom(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7CFF0;
L_08A7CFF0:;
    a2 = v0 + 0;
    a1 = s0 + 0;
    v1 = v0 + s0;
    a0 = s1 + 0;
    cnd_ = v0 == s3;
    a3 = sp + 0;
    if (cnd_) { goto L_08A7CFC4; }
    goto L_08A7D008;
L_08A7D008:;
    ST8(v1, 0);
    f0 = func_08A7E3E4(a0, a1, a2, a3, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A7D010;
L_08A7D010:;
    a0 = LD32(s1);
    goto L_08A7CFC8;
}

/* 08A7D018 */
void func_08A7D018(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7D018:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08A6B620(a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7D02C;
L_08A7D02C:;
    a1 = v0 + 0;
    v1 = LD32(s0);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A7D088; }
    goto L_08A7D040;
L_08A7D040:;
    v1 = LD32(s0+184);
    cnd_ = (s32)v1 <= 0;
    a0 = LD32(s0+172);
    if (cnd_) { goto L_08A7D0D4; }
    goto L_08A7D04C;
L_08A7D04C:;
    v0 = a1 - a0;
    v0 = v0 < 0x2711u;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+180); goto L_08A7D0D8; }
    goto L_08A7D05C;
L_08A7D05C:;
    v0 = (s32)v1 < 4;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A7D094; }
    goto L_08A7D068;
L_08A7D068:;
    ST32(s0+184, 0);
    a1 = D_08AE8A30 - (-30160);
    a1 = a1 - 30160;
    a2 = LD32(s0+276);
    v0 = LD32(s0+156);
    t_ = v0;
    a0 = 5;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7D084;
L_08A7D084:;
    goto L_08A7D088;
L_08A7D088:;
    sp = sp + 16;
    return;
L_08A7D094:;
    a1 = 3;
    func_08A7E7DC(a0, a1);
    goto L_08A7D09C;
L_08A7D09C:;
    v0 = LD32(s0+184);
    v0 = v0 + 1;
    ST32(s0+184, v0);
    goto L_08A7D0A8;
L_08A7D0A8:;
    v0 = func_08A6B620(a1, 0, 0, 0, 0, 0, 0);
    goto L_08A7D0B0;
L_08A7D0B0:;
    v1 = LD32(s0+176);
    v0 = v0 - v1;
    v0 = v0 < 0x4e21u;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08A7D088; }
    goto L_08A7D0C4;
L_08A7D0C4:;
    a0 = s0 + 0;
    func_08A7E780(a0);
    goto L_08A7D0CC;
L_08A7D0CC:;
    goto L_08A7D088;
L_08A7D0D4:;
    v0 = LD32(s0+180);
    goto L_08A7D0D8;
L_08A7D0D8:;
    cnd_ = v0 == 0;
    v1 = a1 - a0;
    if (cnd_) { goto L_08A7D0F0; }
    goto L_08A7D0E0;
L_08A7D0E0:;
    v0 = a1 - a0;
    v0 = v0 < 0x2711u;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s0 + 0; goto L_08A7D128; }
    goto L_08A7D0F0;
L_08A7D0F0:;
    v0 = 0xea60;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_08A7D114; }
    goto L_08A7D100;
L_08A7D100:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = s0 + 0; goto L_08A7D114; }
    goto L_08A7D108;
L_08A7D108:;
    v0 = a1 < a0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A7D0A8; }
    goto L_08A7D114;
L_08A7D114:;
    a1 = 0 + 0;
    goto L_08A7D118;
L_08A7D118:;
    func_08A7E7DC(a0, a1);
    goto L_08A7D120;
L_08A7D120:;
    goto L_08A7D0A8;
L_08A7D128:;
    a1 = 1;
    goto L_08A7D118;
}

/* 08A7D130 */
void func_08A7D130(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7D130:;
    sp = sp - 16;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A7D19C; }
    goto L_08A7D144;
L_08A7D144:;
    v0 = LD32(s0+188);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A7D160; }
    goto L_08A7D150;
L_08A7D150:;
    sp = sp + 16;
    return;
L_08A7D160:;
    v0 = func_08A6B620(a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7D168;
L_08A7D168:;
    v1 = LD32(s0+172);
    a1 = 1;
    v0 = v0 - v1;
    v0 = v0 < 0x2710u;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A7D18C; }
    goto L_08A7D180;
L_08A7D180:;
    v0 = 1;
    ST32(s0+180, v0);
    goto L_08A7D150;
L_08A7D18C:;
    func_08A7E7DC(a0, a1);
    goto L_08A7D194;
L_08A7D194:;
    ST32(s0+180, 0);
    goto L_08A7D150;
L_08A7D19C:;
    v0 = D_08B1D848 - (-10168);
    s0 = LD32(v0-10168);
    goto L_08A7D144;
}

/* 08A7D1A8 */
void func_08A7D1A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7D1A8:;
    sp = sp - 16;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A7D248; }
    goto L_08A7D1BC;
L_08A7D1BC:;
    v0 = LD32(s0+188);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A7D238; }
    goto L_08A7D1C8;
L_08A7D1C8:;
    a0 = LD32(s0);
    goto L_08A7D1CC;
L_08A7D1CC:;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    v1 = LD32(s0+196);
    if (cnd_) { goto L_08A7D1E4; }
    goto L_08A7D1D8;
L_08A7D1D8:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A7D228; }
    goto L_08A7D1E0;
L_08A7D1E0:;
    v0 = (u32)-1;
    goto L_08A7D1E4;
L_08A7D1E4:;
    ST32(s0, v0);
    cnd_ = v1 != 0;
    ST32(s0+172, 0);
    if (cnd_) { goto L_08A7D218; }
    goto L_08A7D1F0;
L_08A7D1F0:;
    v0 = D_08B1D36C - (-11412);
    goto L_08A7D1F4;
L_08A7D1F4:;
    v0 = v0 - 11412;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_08A7D20C; }
    goto L_08A7D200;
L_08A7D200:;
    a0 = s0 + 0;
    { u64 r_ = func_08A6AFBC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7D208;
L_08A7D208:;
    goto L_08A7D20C;
L_08A7D20C:;
    sp = sp + 16;
    return;
L_08A7D218:;
    func_08A6B618();
    goto L_08A7D220;
L_08A7D220:;
    v0 = D_08B1D36C - (-11412);
    goto L_08A7D1F4;
L_08A7D228:;
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7D230;
L_08A7D230:;
    v1 = LD32(s0+196);
    goto L_08A7D1E0;
L_08A7D238:;
    a1 = 2;
    func_08A7E7DC(a0, a1);
    goto L_08A7D240;
L_08A7D240:;
    a0 = LD32(s0);
    goto L_08A7D1CC;
L_08A7D248:;
    v0 = D_08B1D848 - (-10168);
    s0 = LD32(v0-10168);
    goto L_08A7D1BC;
}

/* 08A7D254 */
u64 func_08A7D254(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_08A7D254:;
    a2 = LD32(a0+256);
    v0 = a1 - 1;
    a3 = v0 < 0xfeu;
    v1 = (s32)a2 < 254;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A7D284; }
    goto L_08A7D26C;
L_08A7D26C:;
    t0 = a2 + 1;
    cnd_ = a3 == 0;
    v1 = a2 + a0;
    if (cnd_) { goto L_08A7D284; }
    goto L_08A7D278;
L_08A7D278:;
    ST8(v1, a1);
    v0 = 1;
    ST32(a0+256, t0);
    goto L_08A7D284;
L_08A7D284:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A7D28C */
u64 func_08A7D28C(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A7D28C:;
    sp = sp - 48;
    a2 = a1 + 0;
    a1 = D_08AE8A68 - (-30104);
    a1 = a1 - 30104;
    s0 = a0 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7D2B0;
L_08A7D2B0:;
    a0 = s0 + 0;
    a1 = sp + 0;
    { u64 r_ = func_08A7D2CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7D2BC;
L_08A7D2BC:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A7D2CC */
u64 func_08A7D2CC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7D2CC:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7D2EC;
L_08A7D2EC:;
    a1 = s0 + 0;
    v1 = LD32(s1+1400);
    s0 = v0 + 1;
    v0 = 1400;
    v0 = v0 - v1;
    s0 = (s32)s0 < (s32)v0 ? s0 : v0;
    a0 = s1 + v1;
    a2 = s0 + 0;
    cnd_ = (s32)s0 <= 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A7D334; }
    goto L_08A7D314;
L_08A7D314:;
    func_08A87AE0(a0, a1, a2);
    goto L_08A7D31C;
L_08A7D31C:;
    v0 = LD32(s1+1400);
    v0 = v0 + s0;
    ST32(s1+1400, v0);
    v1 = v0 + s1;
    ST8(v1-1, 0);
    v1 = 1;
    goto L_08A7D334;
L_08A7D334:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A7D34C */
void func_08A7D34C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7D34C:;
    sp = sp - 16;
    v0 = func_08A6B38C(t1, t2, t3);
    goto L_08A7D35C;
L_08A7D35C:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_08A7D3B0; }
    goto L_08A7D364;
L_08A7D364:;
    a2 = D_08C32B60 - (11104);
    ST32(a2+11104, 0);
    v0 = D_08C32C64 - (11364);
    t0 = v0 + 11364;
    goto L_08A7D374;
L_08A7D374:;
    v0 = LD32(a2+11104);
    v1 = LD32(a3+12);
    a0 = v0 << 2;
    v1 = a0 + v1;
    v1 = LD32(v1);
    v0 = v0 + 1;
    a0 = a0 + t0;
    cnd_ = v1 == 0;
    a1 = (s32)v0 < 5;
    if (cnd_) { goto L_08A7D3B0; }
    goto L_08A7D398;
L_08A7D398:;
    t1 = LDU32(v1);
    STU32(a0, t1);
    cnd_ = a1 != 0;
    ST32(a2+11104, v0);
    if (cnd_) { goto L_08A7D374; }
    goto L_08A7D3B0;
L_08A7D3B0:;
    sp = sp + 16;
    return;
}

/* 08A7D3BC */
u32 func_08A7D3BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7D3BC:;
    a1 = a1 & 0xffff;
    sp = sp - 32;
    a1 = WSBH(a1);
    v0 = 2;
    s3 = 0 + 0;
    s2 = a3 + 0;
    s1 = a0 + 0;
    s0 = a2 + 0;
    ST8(a2+1, v0);
    cnd_ = a0 == 0;
    ST16(a2+2, a1);
    if (cnd_) { goto L_08A7D490; }
    goto L_08A7D3FC;
L_08A7D3FC:;
    v0 = sceNetInetInetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7D404;
L_08A7D404:;
    v1 = v0 >> 16;
    ST16(s0+6, v1);
    ST16(s0+4, v0);
    goto L_08A7D410;
L_08A7D410:;
    v1 = LDU32(s0+4);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a1 = D_08AE8A6C - (-30100);
    if (cnd_) { goto L_08A7D44C; }
    goto L_08A7D424;
L_08A7D424:;
    cnd_ = s2 != 0;
    if (cnd_) { ST32(s2, s3); goto L_08A7D42C; }
    goto L_08A7D42C;
L_08A7D42C:;
    v0 = 1;
    goto L_08A7D430;
L_08A7D430:;
    sp = sp + 32;
    return v0;
L_08A7D44C:;
    a1 = a1 - 30100;
    a0 = s1 + 0;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7D458;
L_08A7D458:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A7D424; }
    goto L_08A7D460;
L_08A7D460:;
    a0 = s1 + 0;
    { u64 r_ = func_08A6A824(a0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7D468;
L_08A7D468:;
    s3 = v0 + 0;
    cnd_ = s3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A7D430; }
    goto L_08A7D474;
L_08A7D474:;
    v0 = LD32(s3+12);
    v1 = LD32(v0);
    a0 = LD32(v1);
    v0 = a0 >> 16;
    ST16(s0+6, v0);
    ST16(s0+4, a0);
    goto L_08A7D424;
L_08A7D490:;
    ST16(a2+4, 0);
    ST16(a2+6, 0);
    goto L_08A7D410;
}

/* 08A7D49C */
void func_08A7D49C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_08A7D49C:;
    v1 = LD_U8(a0);
    v0 = LD_U8(a1);
    ST8(a0, v0);
    ST8(a1, v1);
    return;
}

/* 08A7D4B0 */
u32 func_08A7D4B0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08A7D4B0:;
    a0 = a0 & 0xff;
    v1 = a0 + 65;
    v0 = a0 < 0x1au;
    a2 = a0 + 71;
    a1 = a0 < 0x34u;
    cnd_ = v0 != 0;
    v1 = v1 & 0xff;
    if (cnd_) { goto L_08A7D4FC; }
    goto L_08A7D4CC;
L_08A7D4CC:;
    a3 = a0 - 4;
    v0 = a0 < 0x3eu;
    cnd_ = a1 != 0;
    v1 = a2 & 0xff;
    if (cnd_) { goto L_08A7D4FC; }
    goto L_08A7D4DC;
L_08A7D4DC:;
    cnd_ = v0 != 0;
    v1 = a3 & 0xff;
    if (cnd_) { goto L_08A7D4FC; }
    goto L_08A7D4E4;
L_08A7D4E4:;
    v0 = 62;
    a1 = a0 ^ 0x3f;
    cnd_ = a0 == v0;
    v1 = 43;
    if (cnd_) { goto L_08A7D4FC; }
    goto L_08A7D4F4;
L_08A7D4F4:;
    v1 = 47;
    if (a1 != 0) v1 = 0;
    goto L_08A7D4FC;
L_08A7D4FC:;
    v0 = v1 + 0;
    return v0;
}

/* 08A7D504 */
void func_08A7D504(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A7D504:;
    sp = sp - 64;
    s4 = a1 + 0;
    s3 = a2 + 0;
    s2 = a0 + 0;
    s1 = 0 + 0;
    cnd_ = (s32)a1 <= 0;
    if (cnd_) { goto L_08A7D5E0; }
    goto L_08A7D538;
L_08A7D538:;
    a0 = 1;
    s5 = sp + 16;
    goto L_08A7D540;
L_08A7D540:;
    s0 = 0 + 0;
    goto L_08A7D544;
L_08A7D544:;
    cnd_ = a0 == 0;
    v1 = sp + s0;
    if (cnd_) { goto L_08A7D608; }
    goto L_08A7D54C;
L_08A7D54C:;
    v0 = LD_U8(s2);
    s2 = s2 + 1;
    ST8(v1, v0);
    goto L_08A7D558;
L_08A7D558:;
    s0 = s0 + 1;
    s1 = s1 + 1;
    v0 = (s32)s0 < 3;
    cnd_ = v0 != 0;
    a0 = (s32)s1 < (s32)s4;
    if (cnd_) { goto L_08A7D544; }
    goto L_08A7D56C;
L_08A7D56C:;
    a2 = LD_U8(sp);
    v0 = LD_U8(sp+1);
    a3 = LD_U8(sp+2);
    v1 = a2 & 0x3;
    a0 = v0 & 0xf;
    a1 = (a3 >> 6) & 0x3;
    v1 = v1 << 4;
    a0 = a0 << 2;
    v0 = v0 >> 4;
    v1 = v1 + v0;
    a0 = a0 + a1;
    a3 = a3 & 0x3f;
    a2 = a2 >> 2;
    ST8(sp+16, a2);
    s0 = 0 + 0;
    ST8(sp+17, v1);
    ST8(sp+18, a0);
    ST8(sp+19, a3);
    goto L_08A7D5B4;
L_08A7D5B4:;
    v0 = s5 + s0;
    a0 = LD_U8(v0);
    s0 = s0 + 1;
    v0 = func_08A7D4B0(a0);
    goto L_08A7D5C4;
L_08A7D5C4:;
    v1 = (s32)s0 < 4;
    ST8(s3, v0);
    cnd_ = v1 != 0;
    s3 = s3 + 1;
    if (cnd_) { goto L_08A7D5B4; }
    goto L_08A7D5D4;
L_08A7D5D4:;
    v0 = (s32)s1 < (s32)s4;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A7D540; }
    goto L_08A7D5E0;
L_08A7D5E0:;
    ST8(s3, 0);
    sp = sp + 64;
    return;
L_08A7D608:;
    ST8(v1, 0);
    goto L_08A7D558;
}

/* 08A7D610 */
void func_08A7D610(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 304);
L_08A7D610:;
    sp = sp - 304;
    s7 = a2 + 0;
    s6 = a3 + 0;
    s3 = 0 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v1 = sp + s3;
    goto L_08A7D650;
L_08A7D650:;
    v0 = s3 + 1;
    ST8(v1, s3);
    s3 = (u32)(s32)(s16)v0;
    v1 = (s32)s3 < 256;
    cnd_ = v1 != 0;
    v1 = sp + s3;
    if (cnd_) { goto L_08A7D650; }
    goto L_08A7D668;
L_08A7D668:;
    s4 = 0 + 0;
    s5 = 0 + 0;
    s3 = 0 + 0;
    v0 = s4 + 1;
    goto L_08A7D678;
L_08A7D678:;
    { s32 x_ = (s32)v0, y_ = (s32)s0; if (y_ == 0) { lo = x_ < 0 ? 1 : 0xFFFFFFFFu; hi = (u32)x_; } else if (x_ == INT32_MIN && y_ == -1) { lo = 0x80000000u; hi = 0; } else { lo = (u32)(x_ / y_); hi = (u32)(x_ % y_); } }
    v1 = s1 + s4;
    a0 = sp + s3;
    v0 = LD_U8(v1);
    a1 = LD_U8(a0);
    v0 = v0 + a1;
    v0 = v0 + s5;
    s5 = v0 & 0xff;
    a1 = sp + s5;
    a2 = hi;
    s4 = a2 & 0xff;
    func_08A7D49C(a0, a1);
    goto L_08A7D6A8;
L_08A7D6A8:;
    v0 = s3 + 1;
    s3 = (u32)(s32)(s16)v0;
    v1 = (s32)s3 < 256;
    cnd_ = v1 != 0;
    v0 = s4 + 1;
    if (cnd_) { goto L_08A7D678; }
    goto L_08A7D6BC;
L_08A7D6BC:;
    s4 = 0 + 0;
    s5 = 0 + 0;
    cnd_ = (s32)s6 <= 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A7D75C; }
    goto L_08A7D6CC;
L_08A7D6CC:;
    s2 = s7 + s3;
    v1 = LD_U8(s2);
    v1 = s4 + v1;
    v1 = v1 + 1;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 24;
    v0 = v1 + v0;
    v0 = (v0 & ~(0xffu << 0)) | ((0 & 0xff) << 0);
    v1 = v1 - v0;
    s4 = v1 & 0xff;
    s1 = sp + s4;
    v1 = LD_U8(s1);
    a0 = s1 + 0;
    v1 = v1 + s5;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 24;
    v0 = v1 + v0;
    v0 = (v0 & ~(0xffu << 0)) | ((0 & 0xff) << 0);
    v1 = v1 - v0;
    s5 = v1 & 0xff;
    s0 = sp + s5;
    a1 = s0 + 0;
    func_08A7D49C(a0, a1);
    goto L_08A7D728;
L_08A7D728:;
    v1 = LD_U8(s0);
    v0 = LD_U8(s1);
    a0 = LD_U8(s2);
    a2 = s3 + 1;
    v0 = v0 + v1;
    v0 = v0 & 0xff;
    v1 = sp + v0;
    a1 = LD_U8(v1);
    s3 = (u32)(s32)(s16)a2;
    v0 = (s32)s3 < (s32)s6;
    a0 = a0 ^ a1;
    cnd_ = v0 != 0;
    ST8(s2, a0);
    if (cnd_) { goto L_08A7D6CC; }
    goto L_08A7D75C;
L_08A7D75C:;
    sp = sp + 304;
    return;
}

/* 08A7D788 */
void func_08A7D788(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0;
L_08A7D788:;
    ST8(a0, a1);
    v0 = LDU32(a2);
    STU32(a0+1, v0);
    v0 = 5;
    ST32(a0+1400, v0);
    return;
}

/* 08A7D7A8 */
void func_08A7D7A8(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08A7D7A8:;
    sp = sp - 96;
    v0 = (s32)a3 < 66;
    s0 = a1 + 0;
    a1 = a2 + 0;
    cnd_ = (s32)a3 <= 0;
    if (cnd_) { goto L_08A7D7E8; }
    goto L_08A7D7CC;
L_08A7D7CC:;
    cnd_ = v0 == 0;
    v1 = a2 + a3;
    if (cnd_) { goto L_08A7D7E8; }
    goto L_08A7D7D4;
L_08A7D7D4:;
    v0 = (u32)(s32)LD_S8(v1-1);
    s1 = a0 + 68;
    s2 = a3 - 1;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A7D800; }
    goto L_08A7D7E8;
L_08A7D7E8:;
    sp = sp + 96;
    return;
L_08A7D800:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7D808;
L_08A7D808:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7D810;
L_08A7D810:;
    a1 = v0 + 0;
    a3 = s2 + 0;
    a0 = s1 + 0;
    a2 = sp + 0;
    func_08A7D610(a0, a1, a2, a3);
    goto L_08A7D824;
L_08A7D824:;
    a2 = LD32(s0+1400);
    a1 = s2 + 0;
    a0 = sp + 0;
    a2 = s0 + a2;
    func_08A7D504(a0, a1, a2);
    goto L_08A7D838;
L_08A7D838:;
    a0 = LD32(s0+1400);
    a0 = s0 + a0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7D844;
L_08A7D844:;
    v1 = LD32(s0+1400);
    v1 = v1 + v0;
    v1 = v1 + 1;
    ST32(s0+1400, v1);
    goto L_08A7D7E8;
}

/* 08A7D858 */
void func_08A7D858(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7D858:;
    sp = sp - 32;
    v0 = a1 + 0;
    a1 = D_08AE8A7C - (-30084);
    a2 = sp + 0;
    a3 = sp + 4;
    s0 = a0 + 0;
    a1 = a1 - 30084;
    a0 = v0 + 0;
    { rv_t r_ = func_08A894F8(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7D884;
L_08A7D884:;
    v0 = LD32(sp);
    a3 = LD_U16(sp+4);
    a2 = WSBW(v0);
    v0 = a2 < 0x1u;
    v1 = a3 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    ST32(sp, a2);
    if (cnd_) { goto L_08A7D8C8; }
    goto L_08A7D8A4;
L_08A7D8A4:;
    v0 = LD32(s0+268);
    a0 = a2 + 0;
    cnd_ = v0 == a2;
    a1 = a3 + 0;
    if (cnd_) { goto L_08A7D8D8; }
    goto L_08A7D8B4;
L_08A7D8B4:;
    ST32(s0+268, a2);
    goto L_08A7D8B8;
L_08A7D8B8:;
    ST16(s0+272, a3);
    v0 = LD32(s0+168);
    t_ = v0;
    a2 = LD32(s0+276);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7D8C8;
L_08A7D8C8:;
    goto L_08A7D8CC;
L_08A7D8CC:;
    sp = sp + 32;
    return;
L_08A7D8D8:;
    v0 = LD_U16(s0+272);
    cnd_ = v0 != a3;
    if (cnd_) { ST32(s0+268, a2); goto L_08A7D8B8; }
    goto L_08A7D8E4;
L_08A7D8E4:;
    goto L_08A7D8CC;
}

/* 08A7D8EC */
void func_08A7D8EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[352] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 352);
L_08A7D8EC:;
    sp = sp - 352;
    s6 = a0 + 0;
    s4 = a2 + 0;
    s2 = a1 + 0;
    ST32(sp+276, a3);
    ST32(sp+280, t0);
    cnd_ = a3 == 0;
    ST32(sp+256, 0);
    if (cnd_) { goto L_08A7D960; }
    goto L_08A7D934;
L_08A7D934:;
    v0 = a2 - 1;
    v1 = 1;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    ST32(sp+284, v1);
    if (cnd_) { goto L_08A7D9D0; }
    goto L_08A7D948;
L_08A7D948:;
    v1 = LD32(a1+1400);
    v0 = 1400;
    v0 = v0 - v1;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(a0+276); goto L_08A7D990; }
    goto L_08A7D960;
L_08A7D960:;
    goto L_08A7D964;
L_08A7D964:;
    sp = sp + 352;
    return;
L_08A7D990:;
    v0 = LD32(a0+152);
    t_ = v0;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7D99C;
L_08A7D99C:;
    ST32(sp+284, v0);
    v0 = v0 & 0xffff;
    v0 = WSBH(v0);
    v1 = LD32(s2+1400);
    ST16(sp+272, v0);
    v1 = s2 + v1;
    a0 = (u32)(s32)LD_S8(sp+272);
    a1 = (u32)(s32)LD_S8(sp+273);
    ST8(v1, a0);
    ST8(v1+1, a1);
    v0 = LD32(s2+1400);
    v0 = v0 + 2;
    ST32(s2+1400, v0);
    goto L_08A7D9D0;
L_08A7D9D0:;
    v1 = LD32(sp+276);
    v0 = 255;
    cnd_ = v1 == v0;
    a0 = LD32(sp+284);
    if (cnd_) { goto L_08A7DAC4; }
    goto L_08A7D9E0;
L_08A7D9E0:;
    cnd_ = (s32)a0 <= 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_08A7D960; }
    goto L_08A7D9E8;
L_08A7D9E8:;
    a1 = LD32(sp+276);
    a1 = (s32)0 < (s32)a1;
    ST32(sp+288, a1);
    a2 = LD32(sp+288);
    goto L_08A7D9F8;
L_08A7D9F8:;
    cnd_ = a2 == 0;
    a0 = LD32(sp+284);
    if (cnd_) { goto L_08A7DA58; }
    goto L_08A7DA00;
L_08A7DA00:;
    s1 = LD32(sp+280);
    s3 = LD32(sp+276);
    s7 = 1;
    fp = 2;
    s0 = LD32(s2+1400);
    goto L_08A7DA14;
L_08A7DA14:;
    a1 = s2 + 0;
    cnd_ = s4 == 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_08A7DAAC; }
    goto L_08A7DA20;
L_08A7DA20:;
    a1 = s5 + 0;
    cnd_ = s4 == s7;
    a2 = s2 + 0;
    if (cnd_) { goto L_08A7DA9C; }
    goto L_08A7DA2C;
L_08A7DA2C:;
    cnd_ = s4 == fp;
    if (cnd_) { goto L_08A7DA80; }
    goto L_08A7DA34;
L_08A7DA34:;
    v1 = D_08AE8A88 - (-30072);
    s3 = s3 - 1;
    s1 = s1 + 1;
    a0 = s2 + 0;
    cnd_ = s0 == v0;
    a1 = v1 - 30072;
    if (cnd_) { goto L_08A7DA70; }
    goto L_08A7DA4C;
L_08A7DA4C:;
    cnd_ = s3 != 0;
    if (cnd_) { s0 = LD32(s2+1400); goto L_08A7DA14; }
    goto L_08A7DA54;
L_08A7DA54:;
    a0 = LD32(sp+284);
    goto L_08A7DA58;
L_08A7DA58:;
    s5 = s5 + 1;
    v0 = (s32)s5 < (s32)a0;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(sp+288); goto L_08A7D9F8; }
    goto L_08A7DA68;
L_08A7DA68:;
    goto L_08A7D964;
L_08A7DA70:;
    { u64 r_ = func_08A7D2CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7DA78;
L_08A7DA78:;
    goto L_08A7DA4C;
L_08A7DA80:;
    a0 = LD_U8(s1);
    a3 = LD32(s6+276);
    v0 = LD32(s6+144);
    goto L_08A7DA8C;
L_08A7DA8C:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7DA94;
L_08A7DA94:;
    v0 = LD32(s2+1400);
    goto L_08A7DA34;
L_08A7DA9C:;
    a0 = LD_U8(s1);
    v0 = LD32(s6+140);
    a3 = LD32(s6+276);
    goto L_08A7DA8C;
L_08A7DAAC:;
    a0 = LD_U8(s1);
    v0 = LD32(s6+136);
    t_ = v0;
    a2 = LD32(s6+276);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7DABC;
L_08A7DABC:;
    v0 = LD32(s2+1400);
    goto L_08A7DA34;
L_08A7DAC4:;
    v0 = LD32(s6+148);
    a2 = LD32(s6+276);
    a0 = s4 + 0;
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7DAD8;
L_08A7DAD8:;
    a3 = LD32(sp+256);
    cnd_ = (s32)a3 <= 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A7DB34; }
    goto L_08A7DAE4;
L_08A7DAE4:;
    v0 = D_08B1D84C - (-10164);
    s1 = v0 - 10164;
    s5 = D_08AE8A8C - (-30068);
    s7 = D_08AE8A88 - (-30072);
    s0 = sp + s3;
    goto L_08A7DAF8;
L_08A7DAF8:;
    v0 = LD_U8(s0);
    v1 = s5 - 30068;
    a0 = s2 + 0;
    v0 = v0 << 2;
    v0 = v0 + s1;
    a1 = LD32(v0);
    s3 = s3 + 1;
    if (a1 == 0) a1 = v1;
    { u64 r_ = func_08A7D2CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7DB1C;
L_08A7DB1C:;
    cnd_ = s4 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08A7DB68; }
    goto L_08A7DB24;
L_08A7DB24:;
    a3 = LD32(sp+256);
    goto L_08A7DB28;
L_08A7DB28:;
    v0 = (s32)s3 < (s32)a3;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = sp + s3; goto L_08A7DAF8; }
    goto L_08A7DB34;
L_08A7DB34:;
    a0 = LD32(s2+1400);
    v0 = 1400;
    v0 = v0 - a0;
    cnd_ = (s32)v0 <= 0;
    v1 = a0 + 1;
    if (cnd_) { goto L_08A7D960; }
    goto L_08A7DB48;
L_08A7DB48:;
    v0 = a0 + s2;
    ST8(v0, 0);
    ST32(s2+1400, v1);
    ST32(sp+276, a3);
    cnd_ = s4 == 0;
    ST32(sp+280, sp);
    if (cnd_) { goto L_08A7D960; }
    goto L_08A7DB60;
L_08A7DB60:;
    a0 = LD32(sp+284);
    goto L_08A7D9E0;
L_08A7DB68:;
    a0 = LD_U8(s0);
    a2 = LD32(s6+276);
    v0 = LD32(s6+136);
    t_ = v0;
    s0 = LD32(s2+1400);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7DB7C;
L_08A7DB7C:;
    v1 = LD32(s2+1400);
    a0 = s2 + 0;
    cnd_ = s0 != v1;
    a1 = s7 - 30072;
    if (cnd_) { goto L_08A7DB24; }
    goto L_08A7DB8C;
L_08A7DB8C:;
    { u64 r_ = func_08A7D2CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7DB94;
L_08A7DB94:;
    a3 = LD32(sp+256);
    goto L_08A7DB28;
}

/* 08A7DB9C */
void func_08A7DB9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7DB9C:;
    sp = sp - 32;
    v0 = a3 + 0;
    a3 = a2 + 0;
    s5 = t1 + 0;
    a2 = 0 + 0;
    s2 = t0 + 0;
    t0 = v0 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    s4 = t3 + 0;
    s3 = t2 + 0;
    func_08A7D8EC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A7DBE8;
L_08A7DBE8:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a3 = s2 + 0;
    t0 = s5 + 0;
    a2 = 1;
    func_08A7D8EC(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A7DC00;
L_08A7DC00:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a3 = s3 + 0;
    t0 = s4 + 0;
    a2 = 2;
    func_08A7D8EC(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A7DC18;
L_08A7DC18:;
    sp = sp + 32;
    return;
}

/* 08A7DC3C */
rv_t func_08A7DC3C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A7DC3C:;
    sp = sp - 48;
    s3 = a0 + 0;
    a0 = 0 + 0;
    s1 = a1 + 0;
    v0 = LD32(a2);
    v0 = v0 < 0x3u;
    cnd_ = v0 == 0;
    s0 = a2 + 0;
    if (cnd_) { goto L_08A7DC9C; }
    goto L_08A7DC84;
L_08A7DC84:;
    v1 = LD32(a1+1400);
    v0 = 1400;
    v0 = v0 - v1;
    v0 = (s32)v0 < 32;
    cnd_ = v0 == 0;
    a1 = D_08AE8A94 - (-30060);
    if (cnd_) { goto L_08A7DCD0; }
    goto L_08A7DC9C;
L_08A7DC9C:;
    goto L_08A7DCA0;
L_08A7DCA0:;
    v0 = a0 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A7DCD0:;
    a0 = s1 + 0;
    a1 = a1 - 30060;
    { u64 r_ = func_08A7D2CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7DCDC;
L_08A7DCDC:;
    v1 = LD32(s1+1400);
    fp = s1 + v1;
    v1 = v1 + 1;
    ST32(s1+1400, v1);
    v0 = LD32(s0+4);
    v1 = v0 + 0;
    v0 = v0 + 1;
    ST32(s0+4, v0);
    ST8(fp, v1);
    a0 = LD32(s0);
    v0 = a0 < 0x3u;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(fp); goto L_08A7DEBC; }
    goto L_08A7DD10;
L_08A7DD10:;
    v0 = LD32(s0+276);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s3+148); goto L_08A7DF28; }
    goto L_08A7DD1C;
L_08A7DD1C:;
    v0 = LD32(s0+12);
    goto L_08A7DD20;
L_08A7DD20:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1+1400); goto L_08A7DD38; }
    goto L_08A7DD28;
L_08A7DD28:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(s3+152); goto L_08A7DF18; }
    goto L_08A7DD34;
L_08A7DD34:;
    a1 = LD32(s1+1400);
    goto L_08A7DD38;
L_08A7DD38:;
    v1 = 1400;
    v0 = v1 - a1;
    v0 = (s32)v0 < 100;
    cnd_ = v0 != 0;
    a0 = 1;
    if (cnd_) { goto L_08A7DC9C; }
    goto L_08A7DD4C;
L_08A7DD4C:;
    v1 = LD_U8(s0);
    a0 = a1 + 1;
    v0 = a1 + s1;
    ST8(v0, v1);
    ST32(s1+1400, a0);
    a0 = LD32(s0+8);
    v0 = LD32(s0+276);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1+1400); goto L_08A7DE74; }
    goto L_08A7DD74;
L_08A7DD74:;
    s7 = 1400;
    goto L_08A7DD78;
L_08A7DD78:;
    v0 = a0 + s0;
    s2 = LD_U8(v0+20);
    v1 = D_08B1D84C - (-10164);
    v1 = v1 - 10164;
    v0 = s2 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    a0 = s1 + 0;
    { u64 r_ = func_08A7D2CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7DD9C;
L_08A7DD9C:;
    cnd_ = v0 == 0;
    a0 = 1;
    if (cnd_) { goto L_08A7DC9C; }
    goto L_08A7DDA4;
L_08A7DDA4:;
    v0 = LD32(s0);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s3+136); goto L_08A7DEF0; }
    goto L_08A7DDB0;
L_08A7DDB0:;
    a1 = LD32(s1+1400);
    v0 = s7 - a1;
    cnd_ = (s32)v0 <= 0;
    v0 = a1 + s1;
    if (cnd_) { goto L_08A7DC9C; }
    goto L_08A7DDC0;
L_08A7DDC0:;
    v1 = LD_U8(s0+16);
    a0 = a1 + 1;
    ST8(v0, v1);
    ST32(s1+1400, a0);
    a1 = LD32(s0+16);
    v0 = LD32(s0+12);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1+1400); goto L_08A7DE38; }
    goto L_08A7DDE4;
L_08A7DDE4:;
    s5 = 1;
    s6 = 2;
    s4 = 1400;
    goto L_08A7DDF0;
L_08A7DDF0:;
    v0 = LD32(s0);
    a0 = s2 + 0;
    cnd_ = v0 == s5;
    a2 = s1 + 0;
    if (cnd_) { goto L_08A7DEE8; }
    goto L_08A7DE00;
L_08A7DE00:;
    cnd_ = v0 == s6;
    if (cnd_) { goto L_08A7DED0; }
    goto L_08A7DE08;
L_08A7DE08:;
    v0 = LD32(s1+1400);
    goto L_08A7DE0C;
L_08A7DE0C:;
    v0 = s4 - v0;
    cnd_ = (s32)v0 <= 0;
    a0 = 1;
    if (cnd_) { goto L_08A7DC9C; }
    goto L_08A7DE18;
L_08A7DE18:;
    v0 = LD32(s0+16);
    v1 = LD32(s0+12);
    v0 = v0 + 1;
    v1 = (s32)v0 < (s32)v1;
    a1 = v0 + 0;
    cnd_ = v1 != 0;
    ST32(s0+16, v0);
    if (cnd_) { goto L_08A7DDF0; }
    goto L_08A7DE34;
L_08A7DE34:;
    a0 = LD32(s1+1400);
    goto L_08A7DE38;
L_08A7DE38:;
    v0 = s7 - a0;
    cnd_ = (s32)v0 <= 0;
    v1 = a0 + 1;
    if (cnd_) { goto L_08A7DE50; }
    goto L_08A7DE44;
L_08A7DE44:;
    v0 = a0 + s1;
    ST8(v0, 0);
    ST32(s1+1400, v1);
    goto L_08A7DE50;
L_08A7DE50:;
    v0 = LD32(s0+8);
    v1 = LD32(s0+276);
    ST32(s0+16, 0);
    v0 = v0 + 1;
    v1 = (s32)v0 < (s32)v1;
    a0 = v0 + 0;
    cnd_ = v1 != 0;
    ST32(s0+8, v0);
    if (cnd_) { goto L_08A7DD78; }
    goto L_08A7DE70;
L_08A7DE70:;
    a0 = LD32(s1+1400);
    goto L_08A7DE74;
L_08A7DE74:;
    v1 = 1400;
    v0 = v1 - a0;
    cnd_ = (s32)v0 <= 0;
    v1 = a0 + 1;
    if (cnd_) { goto L_08A7DE90; }
    goto L_08A7DE84;
L_08A7DE84:;
    v0 = a0 + s1;
    ST8(v0, 0);
    ST32(s1+1400, v1);
    goto L_08A7DE90;
L_08A7DE90:;
    v0 = LD32(s0);
    ST32(s0+8, 0);
    v0 = v0 + 1;
    v1 = v0 < 0x3u;
    a0 = v0 + 0;
    ST32(s0, v0);
    ST32(s0+12, 0);
    ST32(s0+16, 0);
    cnd_ = v1 != 0;
    ST32(s0+276, 0);
    if (cnd_) { goto L_08A7DD10; }
    goto L_08A7DEB8;
L_08A7DEB8:;
    v0 = LD_U8(fp);
    goto L_08A7DEBC;
L_08A7DEBC:;
    v1 = (u32)-128;
    a0 = 1;
    v0 = v0 | v1;
    ST8(fp, v0);
    goto L_08A7DC9C;
L_08A7DED0:;
    v0 = LD32(s3+144);
    a1 = LD32(s0+16);
    goto L_08A7DED8;
L_08A7DED8:;
    t_ = v0;
    a3 = LD32(s3+276);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7DEE0;
L_08A7DEE0:;
    v0 = LD32(s1+1400);
    goto L_08A7DE0C;
L_08A7DEE8:;
    v0 = LD32(s3+140);
    goto L_08A7DED8;
L_08A7DEF0:;
    a2 = LD32(s3+276);
    a0 = s2 + 0;
    t_ = v1;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7DF00;
L_08A7DF00:;
    v0 = LD32(s1+1400);
    v0 = s7 - v0;
    cnd_ = (s32)v0 > 0;
    a0 = 1;
    if (cnd_) { goto L_08A7DE50; }
    goto L_08A7DF10;
L_08A7DF10:;
    goto L_08A7DCA0;
L_08A7DF18:;
    t_ = v0;
    a1 = LD32(s3+276);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7DF20;
L_08A7DF20:;
    ST32(s0+12, v0);
    goto L_08A7DD34;
L_08A7DF28:;
    a2 = LD32(s3+276);
    t_ = v0;
    a1 = s0 + 20;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7DF34;
L_08A7DF34:;
    v0 = LD32(s0+12);
    goto L_08A7DD20;
}

/* 08A7DF3C */
float func_08A7DF3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[320] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 320);
L_08A7DF3C:;
    sp = sp - 320;
    v0 = (s32)a3 < 3;
    t5 = 0 + 0;
    s2 = t0 + 0;
    t1 = 0 + 0;
    s1 = a0 + 0;
    t3 = 0 + 0;
    s0 = a1 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A7E08C; }
    goto L_08A7DF78;
L_08A7DF78:;
    t4 = LD_U8(a2);
    a3 = a3 - 1;
    v1 = t4 ^ 0xff;
    v1 = 0 < v1;
    v0 = 0 < t4;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08A7DFA4; }
    goto L_08A7DF98;
L_08A7DF98:;
    t5 = a2 + 0;
    a3 = a3 - t4;
    a2 = a2 + t4;
    goto L_08A7DFA4;
L_08A7DFA4:;
    v0 = (s32)a3 < 2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A7E090; }
    goto L_08A7DFB0;
L_08A7DFB0:;
    t0 = LD_U8(a2);
    a3 = a3 - 1;
    v1 = t0 ^ 0xff;
    v1 = 0 < v1;
    v0 = 0 < t0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08A7DFDC; }
    goto L_08A7DFD0;
L_08A7DFD0:;
    t1 = a2 + 0;
    a3 = a3 - t0;
    a2 = a2 + t0;
    goto L_08A7DFDC;
L_08A7DFDC:;
    cnd_ = (s32)a3 <= 0;
    a3 = a3 - 1;
    if (cnd_) { goto L_08A7E08C; }
    goto L_08A7DFE4;
L_08A7DFE4:;
    t2 = LD_U8(a2);
    v1 = t2 ^ 0xff;
    v1 = 0 < v1;
    v0 = 0 < t2;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08A7E00C; }
    goto L_08A7E000;
L_08A7E000:;
    t3 = a2 + 0;
    a3 = a3 - t2;
    a2 = a2 + t2;
    goto L_08A7E00C;
L_08A7E00C:;
    cnd_ = (s32)a3 < 0;
    if (cnd_) { goto L_08A7E090; }
    goto L_08A7E014;
L_08A7E014:;
    cnd_ = (s32)a3 <= 0;
    if (cnd_) { a2 = t4 + 0; goto L_08A7E0AC; }
    goto L_08A7E01C;
L_08A7E01C:;
    v0 = LD_U8(a2);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a2 = t4 + 0;
    if (cnd_) { goto L_08A7E0AC; }
    goto L_08A7E02C;
L_08A7E02C:;
    s3 = 1;
    s4 = 5;
    ST32(sp+4, 0);
    ST32(sp, 0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    ST32(sp+16, 0);
    ST32(sp+276, 0);
    goto L_08A7E04C;
L_08A7E04C:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    a2 = sp + 0;
    { rv_t r_ = func_08A7DC3C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7E05C;
L_08A7E05C:;
    a1 = s0 + 0;
    a3 = 0 + 0;
    t0 = s2 + 0;
    cnd_ = v0 != s3;
    t1 = 16;
    if (cnd_) { goto L_08A7E08C; }
    goto L_08A7E070;
L_08A7E070:;
    a0 = LD32(s1);
    a2 = LD32(s0+1400);
    v0 = sceNetInetSendto(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7E07C;
L_08A7E07C:;
    v1 = LD32(sp+4);
    v1 = (s32)v1 < 8;
    cnd_ = v1 != 0;
    ST32(s0+1400, s4);
    if (cnd_) { goto L_08A7E04C; }
    goto L_08A7E08C;
L_08A7E08C:;
    goto L_08A7E090;
L_08A7E090:;
    sp = sp + 320;
    return f0;
L_08A7E0AC:;
    a3 = t5 + 0;
    func_08A7DB9C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A7E0B4;
L_08A7E0B4:;
    a0 = LD32(s1);
    a2 = LD32(s0+1400);
    a1 = s0 + 0;
    t0 = s2 + 0;
    a3 = 0 + 0;
    t1 = 16;
    v0 = sceNetInetSendto(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7E0D0;
L_08A7E0D0:;
    goto L_08A7E090;
}

/* 08A7E0D8 */
void func_08A7E0D8(u32 a0, u32 a1, u32 a2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A7E0D8:;
    sp = sp - 48;
    v0 = D_08AE8AA0 - (-30048);
    v1 = (s32)a2 < 10;
    v0 = v0 - 30048;
    t2 = a2 + 0;
    a2 = LDU32(v0);
    a3 = (u32)(s32)LD_S8(v0+4);
    t0 = (u32)(s32)LD_S8(v0+5);
    STU32(sp, a2);
    ST8(sp+4, a3);
    ST8(sp+5, t0);
    t0 = a0 + 0;
    a3 = a1 + 0;
    cnd_ = v1 != 0;
    t1 = 1;
    if (cnd_) { goto L_08A7E1AC; }
    goto L_08A7E120;
L_08A7E120:;
    a2 = 0 + 0;
    v0 = a3 + a2;
    goto L_08A7E128;
L_08A7E128:;
    v1 = sp + a2;
    a1 = LD_U8(v0);
    a0 = LD_U8(v1);
    a2 = a2 + 1;
    cnd_ = a1 != a0;
    v0 = (s32)a2 < 6;
    if (cnd_) { goto L_08A7E1AC; }
    goto L_08A7E140;
L_08A7E140:;
    cnd_ = v0 != 0;
    v0 = a3 + a2;
    if (cnd_) { goto L_08A7E128; }
    goto L_08A7E148;
L_08A7E148:;
    cnd_ = t1 == 0;
    if (cnd_) { v0 = LD32(t0+164); goto L_08A7E18C; }
    goto L_08A7E150;
L_08A7E150:;
    v0 = LD32(t0+160);
    v1 = LDU32(a3+6);
    STU32(sp+16, v1);
    cnd_ = v0 != 0;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_08A7E178; }
    goto L_08A7E16C;
L_08A7E16C:;
    goto L_08A7E170;
L_08A7E170:;
    sp = sp + 48;
    return;
L_08A7E178:;
    a1 = LD32(t0+276);
    t_ = v0;
    a0 = WSBW(a0);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7E184;
L_08A7E184:;
    goto L_08A7E170;
L_08A7E18C:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A7E170; }
    goto L_08A7E194;
L_08A7E194:;
    a2 = LD32(t0+276);
    a0 = a3 + 0;
    t_ = v0;
    a1 = t2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7E1A4;
L_08A7E1A4:;
    goto L_08A7E170;
L_08A7E1AC:;
    t1 = 0 + 0;
    goto L_08A7E148;
}

/* 08A7E1B4 */
u32 func_08A7E1B4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_08A7E1B4:;
    a3 = a1 + 0;
    a2 = a0 + 0;
    a1 = 0 + 0;
    v1 = a0 + 224;
    v0 = LD32(v1);
    goto L_08A7E1C8;
L_08A7E1C8:;
    a1 = a1 + 1;
    a0 = (s32)a1 < 10;
    v1 = v1 + 4;
    cnd_ = v0 == a3;
    t0 = 1;
    if (cnd_) { goto L_08A7E22C; }
    goto L_08A7E1DC;
L_08A7E1DC:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08A7E1C8; }
    goto L_08A7E1E4;
L_08A7E1E4:;
    a0 = LD32(a2+264);
    v1 = 0x66660000u;
    v1 = v1 | 0x6667;
    a0 = a0 + 1;
    { s64 p_ = (s64)(s32)a0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = (u32)((s32)a0 >> 31);
    t0 = 0 + 0;
    v1 = hi;
    v1 = (u32)((s32)v1 >> 2);
    v1 = v1 - a1;
    v0 = v1 << 2;
    v0 = v0 + v1;
    v0 = v0 << 1;
    a0 = a0 - v0;
    v1 = a0 << 2;
    v1 = v1 + a2;
    ST32(v1+224, a3);
    ST32(a2+264, a0);
    goto L_08A7E22C;
L_08A7E22C:;
    v0 = t0 + 0;
    return v0;
}

/* 08A7E234 */
u32 func_08A7E234(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7E234:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = a2 + 0;
    s0 = a0 + 0;
    v0 = func_08A6B620(a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7E260;
L_08A7E260:;
    s4 = v0 + 0;
    v0 = (u32)(s32)LD_S8(s0+280);
    a1 = 0 + 0;
    cnd_ = (s32)v0 < 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A7E2A0; }
    goto L_08A7E274;
L_08A7E274:;
    { u64 r_ = func_08A7D28C(a0, a1, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7E27C;
L_08A7E27C:;
    v0 = 1;
    goto L_08A7E280;
L_08A7E280:;
    sp = sp + 32;
    return v0;
L_08A7E2A0:;
    s1 = s0 + 0;
    a0 = s0 + 288;
    goto L_08A7E2A8;
L_08A7E2A8:;
    v0 = LD32(a0);
    a1 = a1 + 1;
    v1 = (s32)a1 < 40;
    cnd_ = v0 == 0;
    a0 = a0 + 24;
    if (cnd_) { goto L_08A7E2CC; }
    goto L_08A7E2BC;
L_08A7E2BC:;
    cnd_ = v1 != 0;
    s1 = s1 + 24;
    if (cnd_) { goto L_08A7E2A8; }
    goto L_08A7E2C4;
L_08A7E2C4:;
    v0 = 0 + 0;
    goto L_08A7E280;
L_08A7E2CC:;
    v0 = LDU32(s2);
    v1 = LDU32(s2+4);
    a0 = LDU32(s2+8);
    a1 = LDU32(s2+12);
    STU32(s1+284, v0);
    STU32(s1+288, v1);
    STU32(s1+292, a0);
    SWL(s1+299, a1);
    SWR(s1+296, a1);
    v0 = func_08A88E1C();
    goto L_08A7E310;
L_08A7E310:;
    s0 = v0 << 16;
    v0 = func_08A88E1C();
    goto L_08A7E318;
L_08A7E318:;
    s0 = s0 | v0;
    s0 = WSBW(s0);
    ST32(s1+304, s4);
    a0 = s3 + 0;
    a1 = s0 + 0;
    ST32(s1+300, s0);
    goto L_08A7E274;
}

/* 08A7E334 */
u32 func_08A7E334(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08A7E334:;
    t1 = LDU32(a1+4);
    t0 = 0 + 0;
    goto L_08A7E340;
L_08A7E340:;
    v0 = LD32(a0+288);
    t0 = t0 + 1;
    cnd_ = v0 == t1;
    a3 = (s32)t0 < 40;
    if (cnd_) { goto L_08A7E364; }
    goto L_08A7E350;
L_08A7E350:;
    cnd_ = a3 != 0;
    a0 = a0 + 24;
    if (cnd_) { goto L_08A7E340; }
    goto L_08A7E358;
L_08A7E358:;
    v1 = 0 + 0;
    goto L_08A7E35C;
L_08A7E35C:;
    v0 = v1 + 0;
    return v0;
L_08A7E364:;
    v1 = LD_U16(a0+286);
    v0 = LD_U16(a1+2);
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08A7E350; }
    goto L_08A7E374;
L_08A7E374:;
    v0 = LD32(a0+300);
    cnd_ = v0 != a2;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A7E35C; }
    goto L_08A7E380;
L_08A7E380:;
    v1 = 1;
    ST16(a0+286, 0);
    ST32(a0+288, 0);
    goto L_08A7E35C;
}

/* 08A7E390 */
void func_08A7E390(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7E390:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08A6B620(a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7E3A4;
L_08A7E3A4:;
    a0 = v0 + 0;
    v1 = 39;
    goto L_08A7E3AC;
L_08A7E3AC:;
    v0 = LD32(s0+288);
    cnd_ = v0 == 0;
    v1 = v1 - 1;
    if (cnd_) { goto L_08A7E3CC; }
    goto L_08A7E3B8;
L_08A7E3B8:;
    v0 = LD32(s0+304);
    v0 = a0 - v0;
    v0 = v0 < 0xfa1u;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0+288, 0); goto L_08A7E3CC; }
    goto L_08A7E3CC;
L_08A7E3CC:;
    cnd_ = (s32)v1 >= 0;
    s0 = s0 + 24;
    if (cnd_) { goto L_08A7E3AC; }
    goto L_08A7E3D4;
L_08A7E3D4:;
    sp = sp + 16;
    return;
}

/* 08A7E3E4 */
float func_08A7E3E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[1456] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 1456);
L_08A7E3E4:;
    sp = sp - 1456;
    t0 = a1 + 0;
    s3 = a3 + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    ST32(sp+1400, 0);
    if (cnd_) { goto L_08A7E774; }
    goto L_08A7E41C;
L_08A7E41C:;
    a0 = LD_U8(t0);
    v0 = 59;
    v1 = (u32)(s32)(s8)a0;
    cnd_ = v1 == v0;
    v0 = (s32)s1 < 7;
    if (cnd_) { goto L_08A7E758; }
    goto L_08A7E430;
L_08A7E430:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A7E44C; }
    goto L_08A7E438;
L_08A7E438:;
    v1 = a0 & 0xff;
    v0 = 254;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD_U8(t0+1); goto L_08A7E46C; }
    goto L_08A7E448;
L_08A7E448:;
    goto L_08A7E44C;
L_08A7E44C:;
    sp = sp + 1456;
    return f0;
L_08A7E46C:;
    v0 = 253;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08A7E44C; }
    goto L_08A7E478;
L_08A7E478:;
    v0 = LD32(s0+184);
    cnd_ = (s32)v0 > 0;
    if (cnd_) { ST32(s0+184, 0); goto L_08A7E484; }
    goto L_08A7E484;
L_08A7E484:;
    s2 = (u32)(s32)LD_S8(t0+2);
    s4 = t0 + 3;
    a0 = sp + 0;
    a1 = s2 + 0;
    a2 = s4 + 0;
    s5 = t0 + 7;
    func_08A7D788(a0, a1, a2);
    goto L_08A7E4A0;
L_08A7E4A0:;
    v0 = s2 < 0xau;
    cnd_ = v0 == 0;
    s1 = s1 - 7;
    if (cnd_) { goto L_08A7E448; }
    goto L_08A7E4AC;
L_08A7E4AC:;
    v1 = D_08AE8AB0 - (-30032);
    v0 = s2 << 2;
    v1 = v1 - 30032;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A7E448u: goto L_08A7E448; case 0x08A7E4C8u: goto L_08A7E4C8; case 0x08A7E504u: goto L_08A7E504; case 0x08A7E574u: goto L_08A7E574; case 0x08A7E608u: goto L_08A7E608; case 0x08A7E63Cu: goto L_08A7E63C; case 0x08A7E6B0u: goto L_08A7E6B0; default: rs_break(0, 0x08a7e4c0); }
L_08A7E4C8:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = s3 + 0;
    v0 = func_08A7E234(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A7E4D8;
L_08A7E4D8:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A7E44C; }
    goto L_08A7E4E0;
L_08A7E4E0:;
    a0 = LD32(s0);
    goto L_08A7E4E4;
L_08A7E4E4:;
    a2 = LD32(sp+1400);
    t0 = s3 + 0;
    a1 = sp + 0;
    a3 = 0 + 0;
    t1 = 16;
    v0 = sceNetInetSendto(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7E4FC;
L_08A7E4FC:;
    goto L_08A7E44C;
L_08A7E504:;
    v0 = (s32)s1 < 4;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A7E44C; }
    goto L_08A7E510;
L_08A7E510:;
    v0 = (u32)(s32)LD_S8(s0+280);
    cnd_ = (s32)v0 < 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A7E538; }
    goto L_08A7E51C;
L_08A7E51C:;
    a2 = s5 + 0;
    a3 = s1 + 0;
    t0 = s3 + 0;
    a1 = sp + 0;
    f0 = func_08A7DF3C(a0, a1, a2, a3, t0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A7E530;
L_08A7E530:;
    goto L_08A7E44C;
L_08A7E538:;
    v0 = LDU32(s5);
    STU32(sp+1408, v0);
    a0 = s0 + 0;
    a1 = s3 + 0;
    a2 = LD32(sp+1408);
    s5 = s5 + 4;
    s1 = s1 - 4;
    a2 = WSBW(a2);
    v0 = func_08A7E334(a0, a1, a2);
    goto L_08A7E564;
L_08A7E564:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A7E44C; }
    goto L_08A7E56C;
L_08A7E56C:;
    a0 = s0 + 0;
    goto L_08A7E51C;
L_08A7E574:;
    ST32(sp+1416, 0);
    a2 = 0 + 0;
    a1 = s0 + 132;
    goto L_08A7E580;
L_08A7E580:;
    v0 = s4 + a2;
    a0 = (u32)(s32)LD_S8(v0);
    v1 = (u32)(s32)LD_S8(a1);
    cnd_ = a0 != v1;
    v0 = a2 + 1;
    if (cnd_) { goto L_08A7E448; }
    goto L_08A7E594;
L_08A7E594:;
    v1 = (s32)v0 < 4;
    a2 = v0 + 0;
    ST32(sp+1416, v0);
    cnd_ = v1 != 0;
    a1 = a1 + 1;
    if (cnd_) { goto L_08A7E580; }
    goto L_08A7E5A8;
L_08A7E5A8:;
    v0 = (s32)s1 < 15;
    cnd_ = v0 == 0;
    s2 = s5 + s1;
    if (cnd_) { goto L_08A7E5D0; }
    goto L_08A7E5B4;
L_08A7E5B4:;
    a2 = s5 + 0;
    goto L_08A7E5B8;
L_08A7E5B8:;
    a3 = s1 + 0;
    a0 = s0 + 0;
    a1 = sp + 0;
    func_08A7D7A8(a0, a1, a2, a3);
    goto L_08A7E5C8;
L_08A7E5C8:;
    a0 = LD32(s0);
    goto L_08A7E4E4;
L_08A7E5D0:;
    a1 = D_08AE8AA8 - (-30040);
    a0 = s2 - 15;
    a1 = a1 - 30040;
    a2 = sp + 1412;
    { rv_t r_ = func_08A894F8(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7E5E4;
L_08A7E5E4:;
    v0 = LD_U8(sp+1412);
    v1 = LD32(s0+168);
    cnd_ = v1 == 0;
    ST8(s0+280, v0);
    if (cnd_) { goto L_08A7E5B4; }
    goto L_08A7E5F4;
L_08A7E5F4:;
    a1 = s2 - 13;
    a0 = s0 + 0;
    func_08A7D858(a0, a1, 0, 0, 0, 0);
    goto L_08A7E600;
L_08A7E600:;
    a2 = s5 + 0;
    goto L_08A7E5B8;
L_08A7E608:;
    v1 = LD32(sp+1400);
    v0 = 32;
    s1 = (s32)s1 < (s32)v0 ? s1 : v0;
    a0 = sp + v1;
    v0 = 5;
    a1 = s5 + 0;
    a2 = s1 + 0;
    ST8(sp, v0);
    func_08A87AE0(a0, a1, a2);
    goto L_08A7E62C;
L_08A7E62C:;
    v0 = LD32(sp+1400);
    v0 = v0 + s1;
    ST32(sp+1400, v0);
    goto L_08A7E4E0;
L_08A7E63C:;
    v1 = LD32(s0+184);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A7E448; }
    goto L_08A7E64C;
L_08A7E64C:;
    ST32(sp+1416, 0);
    a1 = s0 + 132;
    goto L_08A7E654;
L_08A7E654:;
    v0 = s4 + a2;
    a0 = (u32)(s32)LD_S8(v0);
    v1 = (u32)(s32)LD_S8(a1);
    cnd_ = a0 != v1;
    v0 = a2 + 1;
    if (cnd_) { goto L_08A7E448; }
    goto L_08A7E668;
L_08A7E668:;
    v1 = (s32)v0 < 4;
    a2 = v0 + 0;
    ST32(sp+1416, v0);
    cnd_ = v1 != 0;
    a1 = a1 + 1;
    if (cnd_) { goto L_08A7E654; }
    goto L_08A7E67C;
L_08A7E67C:;
    v0 = (s32)s1 < 2;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08A7E44C; }
    goto L_08A7E688;
L_08A7E688:;
    v0 = (u32)-1;
    ST32(s0+184, v0);
    a1 = s5 + 1;
    a0 = (u32)(s32)LD_S8(s5);
    a2 = LD32(s0+276);
    v0 = LD32(s0+156);
    goto L_08A7E6A0;
L_08A7E6A0:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7E6A8;
L_08A7E6A8:;
    goto L_08A7E44C;
L_08A7E6B0:;
    ST32(sp+1416, 0);
    a2 = 0 + 0;
    a1 = s0 + 132;
    goto L_08A7E6BC;
L_08A7E6BC:;
    v0 = s4 + a2;
    a0 = (u32)(s32)LD_S8(v0);
    v1 = (u32)(s32)LD_S8(a1);
    cnd_ = a0 != v1;
    v0 = a2 + 1;
    if (cnd_) { goto L_08A7E448; }
    goto L_08A7E6D0;
L_08A7E6D0:;
    v1 = (s32)v0 < 4;
    a2 = v0 + 0;
    ST32(sp+1416, v0);
    cnd_ = v1 != 0;
    a1 = a1 + 1;
    if (cnd_) { goto L_08A7E6BC; }
    goto L_08A7E6E4;
L_08A7E6E4:;
    v0 = (s32)s1 < 4;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A7E44C; }
    goto L_08A7E6F0;
L_08A7E6F0:;
    v1 = LD32(sp+1400);
    v0 = 7;
    ST8(sp, v0);
    a1 = sp + v1;
    a0 = s0 + 0;
    a2 = LDU32(s5);
    STU32(a1, a2);
    v0 = LD32(sp+1400);
    v0 = v0 + 4;
    ST32(sp+1400, v0);
    a1 = LDU32(s5);
    STU32(sp+1416, a1);
    a1 = LD32(sp+1416);
    v0 = func_08A7E1B4(a0, a1);
    goto L_08A7E738;
L_08A7E738:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0); goto L_08A7E4E4; }
    goto L_08A7E740;
L_08A7E740:;
    a1 = s5 + 4;
    a2 = s1 - 4;
    a0 = s0 + 0;
    func_08A7E0D8(a0, a1, a2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A7E750;
L_08A7E750:;
    a0 = LD32(s0);
    goto L_08A7E4E4;
L_08A7E758:;
    v0 = LD32(s0+220);
    a0 = t0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a2 = s3 + 0;
    if (cnd_) { goto L_08A7E448; }
    goto L_08A7E76C;
L_08A7E76C:;
    goto L_08A7E6A0;
L_08A7E774:;
    v0 = D_08B1D848 - (-10168);
    s0 = LD32(v0-10168);
    goto L_08A7E41C;
}

/* 08A7E780 */
void func_08A7E780(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    u8 stack_[1424] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 1424);
L_08A7E780:;
    sp = sp - 1424;
    a2 = a0 + 132;
    s0 = a0 + 0;
    a1 = 8;
    a0 = sp + 0;
    ST32(sp+1400, 0);
    func_08A7D788(a0, a1, a2);
    goto L_08A7E7A4;
L_08A7E7A4:;
    t0 = s0 + 204;
    a0 = LD32(s0);
    a2 = LD32(sp+1400);
    a1 = sp + 0;
    a3 = 0 + 0;
    t1 = 16;
    v0 = sceNetInetSendto(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7E7C0;
L_08A7E7C0:;
    v0 = func_08A6B620(0, 0, 0, 0, 0, 0, 0);
    goto L_08A7E7C8;
L_08A7E7C8:;
    ST32(s0+176, v0);
    sp = sp + 1424;
    return;
}

/* 08A7E7DC */
void func_08A7E7DC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[2880] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 2880);
L_08A7E7DC:;
    sp = sp - 2880;
    a2 = a0 + 132;
    s6 = a1 + 0;
    a1 = 3;
    s5 = D_08C32B60 - (11104);
    s3 = a0 + 0;
    a0 = sp + 0;
    s0 = 0 + 0;
    ST32(sp+1400, 0);
    func_08A7D788(a0, a1, a2);
    goto L_08A7E824;
L_08A7E824:;
    v0 = LD32(s5+11104);
    cnd_ = (s32)v0 <= 0;
    v0 = D_08C32C64 - (11364);
    if (cnd_) { goto L_08A7E888; }
    goto L_08A7E830;
L_08A7E830:;
    s1 = v0 + 11364;
    s2 = sp + 1408;
    s4 = D_08AE8AD8 - (-29992);
    a2 = s0 + 0;
    goto L_08A7E840;
L_08A7E840:;
    a0 = s2 + 0;
    a1 = s4 - 29992;
    { rv_t r_ = func_08A89470(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7E84C;
L_08A7E84C:;
    a1 = s2 + 0;
    a0 = sp + 0;
    { u64 r_ = func_08A7D2CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7E858;
L_08A7E858:;
    a0 = LDU32(s1);
    s0 = s0 + 1;
    s1 = s1 + 4;
    v0 = func_08A6AA9C(a0, 0, 0, 0, 0);
    goto L_08A7E86C;
L_08A7E86C:;
    a1 = v0 + 0;
    a0 = sp + 0;
    { u64 r_ = func_08A7D2CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7E878;
L_08A7E878:;
    v1 = LD32(s5+11104);
    v1 = (s32)s0 < (s32)v1;
    cnd_ = v1 != 0;
    a2 = s0 + 0;
    if (cnd_) { goto L_08A7E840; }
    goto L_08A7E888;
L_08A7E888:;
    a1 = D_08AE8AE4 - (-29980);
    a1 = a1 - 29980;
    a0 = sp + 0;
    { u64 r_ = func_08A7D2CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7E898;
L_08A7E898:;
    a1 = LD32(s3+192);
    a0 = sp + 0;
    { u64 r_ = func_08A7D28C(a0, a1, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7E8A4;
L_08A7E8A4:;
    a1 = D_08AE8AF0 - (-29968);
    a1 = a1 - 29968;
    a0 = sp + 0;
    { u64 r_ = func_08A7D2CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7E8B4;
L_08A7E8B4:;
    v1 = LD32(s3+200);
    v0 = D_08AE8AF8 - (-29960);
    cnd_ = v1 != 0;
    a1 = v0 - 29960;
    if (cnd_) { goto L_08A7E8CC; }
    goto L_08A7E8C4;
L_08A7E8C4:;
    v0 = D_08AE8AFC - (-29956);
    a1 = v0 - 29956;
    goto L_08A7E8CC;
L_08A7E8CC:;
    a0 = sp + 0;
    { u64 r_ = func_08A7D2CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7E8D4;
L_08A7E8D4:;
    cnd_ = s6 != 0;
    a1 = D_08AE8B00 - (-29952);
    if (cnd_) { goto L_08A7EA64; }
    goto L_08A7E8DC;
L_08A7E8DC:;
    a1 = D_08AE8B10 - (-29936);
    goto L_08A7E8E0;
L_08A7E8E0:;
    a1 = a1 - 29936;
    a0 = sp + 0;
    { u64 r_ = func_08A7D2CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7E8EC;
L_08A7E8EC:;
    a1 = s3 + 4;
    a0 = sp + 0;
    { u64 r_ = func_08A7D2CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7E8F8;
L_08A7E8F8:;
    v1 = LD32(s3+168);
    cnd_ = v1 != 0;
    a1 = D_08AE8B1C - (-29924);
    if (cnd_) { goto L_08A7EA28; }
    goto L_08A7E904;
L_08A7E904:;
    v0 = 2;
    goto L_08A7E908;
L_08A7E908:;
    cnd_ = s6 == v0;
    a2 = LD32(sp+1400);
    if (cnd_) { goto L_08A7EA04; }
    goto L_08A7E910;
L_08A7E910:;
    s0 = sp + 1440;
    a0 = s0 + 0;
    a1 = sp + 0;
    func_08A87AE0(a0, a1, a2);
    goto L_08A7E920;
L_08A7E920:;
    v1 = LD32(sp+1400);
    a0 = s3 + 0;
    a1 = s0 + 0;
    a2 = 255;
    a3 = 0 + 0;
    t0 = 255;
    t1 = 0 + 0;
    t2 = 255;
    t3 = 0 + 0;
    ST32(sp+2840, v1);
    func_08A7DB9C(a0, a1, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A7E94C;
L_08A7E94C:;
    v0 = 1400;
    v1 = LD32(sp+2840);
    v0 = v0 - v1;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { v1 = LD32(sp+1400); goto L_08A7E9D4; }
    goto L_08A7E960;
L_08A7E960:;
    a1 = s0 + 0;
    a2 = v1 + 0;
    a0 = sp + 0;
    func_08A87AE0(a0, a1, a2);
    goto L_08A7E970;
L_08A7E970:;
    v0 = LD32(sp+2840);
    ST32(sp+1400, v0);
    goto L_08A7E978;
L_08A7E978:;
    a0 = LD32(s3);
    a2 = LD32(sp+1400);
    t0 = s3 + 204;
    a1 = sp + 0;
    a3 = 0 + 0;
    t1 = 16;
    v0 = sceNetInetSendto(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7E994;
L_08A7E994:;
    v0 = func_08A6B620(0, 0, 0, 0, 0, 0, 0);
    goto L_08A7E99C;
L_08A7E99C:;
    ST32(s3+176, v0);
    cnd_ = s6 == 0;
    ST32(s3+172, v0);
    if (cnd_) { goto L_08A7E9AC; }
    goto L_08A7E9A8;
L_08A7E9A8:;
    ST32(s3+180, 0);
    goto L_08A7E9AC;
L_08A7E9AC:;
    sp = sp + 2880;
    return;
L_08A7E9D4:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    a2 = 255;
    a3 = 0 + 0;
    t0 = 0 + 0;
    t1 = 0 + 0;
    t2 = 0 + 0;
    t3 = 0 + 0;
    ST32(sp+2840, v1);
    func_08A7DB9C(a0, a1, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A7E9FC;
L_08A7E9FC:;
    v1 = LD32(sp+2840);
    goto L_08A7E960;
L_08A7EA04:;
    a0 = LD32(sp+1400);
    v0 = 1400;
    v0 = v0 - a0;
    cnd_ = (s32)v0 <= 0;
    v1 = a0 + 1;
    if (cnd_) { goto L_08A7E978; }
    goto L_08A7EA18;
L_08A7EA18:;
    v0 = a0 + sp;
    ST8(v0, 0);
    ST32(sp+1400, v1);
    goto L_08A7E978;
L_08A7EA28:;
    a1 = a1 - 29924;
    a0 = sp + 0;
    { u64 r_ = func_08A7D2CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7EA34;
L_08A7EA34:;
    a1 = LD32(s3+268);
    a0 = sp + 0;
    { u64 r_ = func_08A7D28C(a0, a1, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7EA40;
L_08A7EA40:;
    a1 = D_08AE8B28 - (-29912);
    a1 = a1 - 29912;
    a0 = sp + 0;
    { u64 r_ = func_08A7D2CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7EA50;
L_08A7EA50:;
    a1 = LD_U16(s3+272);
    a0 = sp + 0;
    { u64 r_ = func_08A7D28C(a0, a1, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7EA5C;
L_08A7EA5C:;
    v0 = 2;
    goto L_08A7E908;
L_08A7EA64:;
    a1 = a1 - 29952;
    a0 = sp + 0;
    { u64 r_ = func_08A7D2CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7EA70;
L_08A7EA70:;
    a0 = sp + 0;
    a1 = s6 + 0;
    { u64 r_ = func_08A7D28C(a0, a1, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7EA7C;
L_08A7EA7C:;
    a1 = D_08AE8B10 - (-29936);
    goto L_08A7E8E0;
}

/* 08A7EA84 */
void func_08A7EA84(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A7EA84:;
    v1 = a0 << 2;
    v0 = D_08B1D84C - (-10164);
    a0 = a0 - 50;
    v0 = v0 - 10164;
    a0 = a0 < 0xcdu;
    cnd_ = a0 == 0;
    v1 = v1 + v0;
    if (cnd_) { goto L_08A7EAA4; }
    goto L_08A7EAA0;
L_08A7EAA0:;
    ST32(v1, a1);
    goto L_08A7EAA4;
L_08A7EAA4:;
    return;
}

/* 08A7EAAC */
u32 func_08A7EAAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_08A7EAAC:;
    t2 = a1 + 0;
    t6 = a0 + 0;
    t5 = a2 + 0;
    a3 = a3 & 0xff;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A7EB64; }
    goto L_08A7EAC4;
L_08A7EAC4:;
    t4 = 1;
    v0 = t4 < a1;
    cnd_ = v0 == 0;
    t3 = 0 + 0;
    if (cnd_) { goto L_08A7EAE8; }
    goto L_08A7EAD4;
L_08A7EAD4:;
    v0 = t4 << 1;
    goto L_08A7EAD8;
L_08A7EAD8:;
    t4 = v0 + 1;
    v1 = t4 < t2;
    cnd_ = v1 != 0;
    v0 = t4 << 1;
    if (cnd_) { goto L_08A7EAD8; }
    goto L_08A7EAE8;
L_08A7EAE8:;
    a0 = LD_U8(t0);
    v1 = LD32(t1);
    goto L_08A7EAF0;
L_08A7EAF0:;
    v0 = a0 & 0xff;
    v0 = t6 + v0;
    a1 = t5 + v1;
    a0 = LD_U8(v0);
    a2 = LD_U8(a1);
    v1 = v1 + 1;
    ST32(t1, v1);
    a0 = a0 + a2;
    t3 = t3 + 1;
    ST8(t0, a0);
    v0 = LD32(t1);
    v0 = v0 < a3;
    cnd_ = v0 != 0;
    a1 = t3 < 0xcu;
    if (cnd_) { goto L_08A7EB38; }
    goto L_08A7EB28;
L_08A7EB28:;
    ST32(t1, 0);
    v0 = LD_U8(t0);
    v0 = a3 + v0;
    ST8(t0, v0);
    goto L_08A7EB38;
L_08A7EB38:;
    v0 = LD_U8(t0);
    v1 = v0 & 0xff;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    v1 = t4 & v1;
    if (cnd_) { goto L_08A7EB54; }
    goto L_08A7EB4C;
L_08A7EB4C:;
    { u32 x_ = v1, y_ = t2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v1 = hi;
    goto L_08A7EB54;
L_08A7EB54:;
    v0 = t2 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(t1); goto L_08A7EAF0; }
    goto L_08A7EB60;
L_08A7EB60:;
    v0 = v1 & 0xff;
    goto L_08A7EB64;
L_08A7EB64:;
    return v0;
}

/* 08A7EB6C */
void func_08A7EB6C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08A7EB6C:;
    v0 = 1;
    v1 = 5;
    ST8(a0+256, v0);
    v0 = 3;
    a1 = 0 + 0;
    ST8(a0+257, v0);
    v0 = 7;
    a2 = 255;
    ST8(a0+258, v1);
    v1 = 11;
    ST8(a0+259, v0);
    ST8(a0+260, v1);
    goto L_08A7EB9C;
L_08A7EB9C:;
    v0 = a0 + a1;
    a1 = a1 + 1;
    v1 = (s32)a1 < 256;
    ST8(v0, a2);
    cnd_ = v1 != 0;
    a2 = a2 - 1;
    if (cnd_) { goto L_08A7EB9C; }
    goto L_08A7EBB4;
L_08A7EBB4:;
    return;
}

/* 08A7EBBC */
void func_08A7EBBC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A7EBBC:;
    sp = sp - 48;
    s3 = a2 & 0xff;
    s2 = a1 + 0;
    s1 = a0 + 0;
    s0 = 0 + 0;
    cnd_ = s3 == 0;
    if (cnd_) { goto L_08A7EC9C; }
    goto L_08A7EBE8;
L_08A7EBE8:;
    v0 = s1 + s0;
    goto L_08A7EBEC;
L_08A7EBEC:;
    ST8(v0, s0);
    s0 = s0 + 1;
    v0 = (s32)s0 < 256;
    cnd_ = v0 != 0;
    v0 = s1 + s0;
    if (cnd_) { goto L_08A7EBEC; }
    goto L_08A7EC00;
L_08A7EC00:;
    ST32(sp+4, 0);
    s0 = 255;
    ST8(sp, 0);
    goto L_08A7EC0C;
L_08A7EC0C:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    a2 = s2 + 0;
    a3 = s3 + 0;
    t0 = sp + 0;
    t1 = sp + 4;
    v0 = func_08A7EAAC(a0, a1, a2, a3, t0, t1);
    goto L_08A7EC28;
L_08A7EC28:;
    v0 = s1 + v0;
    a0 = s1 + s0;
    a1 = LD_U8(a0);
    v1 = LD_U8(v0);
    s0 = s0 - 1;
    ST8(a0, v1);
    cnd_ = (s32)s0 >= 0;
    ST8(v0, a1);
    if (cnd_) { goto L_08A7EC0C; }
    goto L_08A7EC48;
L_08A7EC48:;
    v0 = LD_U8(sp);
    a1 = LD_U8(s1+1);
    a2 = LD_U8(s1+3);
    v0 = s1 + v0;
    v1 = LD_U8(v0);
    a0 = LD_U8(s1+5);
    v0 = LD_U8(s1+7);
    ST8(s1+260, v1);
    ST8(s1+256, a1);
    ST8(s1+257, a2);
    ST8(s1+258, a0);
    ST8(s1+259, v0);
    ST8(sp, 0);
    ST32(sp+4, 0);
    goto L_08A7EC84;
L_08A7EC84:;
    sp = sp + 48;
    return;
L_08A7EC9C:;
    func_08A7EB6C(a0);
    goto L_08A7ECA4;
L_08A7ECA4:;
    goto L_08A7EC84;
}

/* 08A7ECAC */
u32 func_08A7ECAC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0;
L_08A7ECAC:;
    t4 = LD_U8(a0+256);
    t6 = LD_U8(a0+257);
    t1 = LD_U8(a0+260);
    v0 = a0 + t4;
    v1 = LD_U8(v0);
    t1 = a0 + t1;
    a3 = LD_U8(a0+259);
    t6 = t6 + v1;
    t0 = t6 & 0xff;
    t0 = a0 + t0;
    v0 = LD_U8(t0);
    t3 = LD_U8(t1);
    a3 = a0 + a3;
    ST8(t1, v0);
    t4 = t4 + 1;
    v0 = t4 & 0xff;
    v1 = LD_U8(a3);
    v0 = a0 + v0;
    t5 = a0 + t3;
    ST8(t0, v1);
    a1 = a1 & 0xff;
    v1 = LD_U8(v0);
    t2 = LD_U8(a0+258);
    ST8(a0+260, a1);
    ST8(a3, v1);
    ST8(v0, t3);
    a2 = LD_U8(t5);
    v1 = LD_U8(a3);
    v0 = LD_U8(t1);
    t2 = t2 + a2;
    a3 = LD_U8(t0);
    a2 = t2 & 0xff;
    a2 = a0 + a2;
    v1 = v1 + v0;
    v1 = v1 + a3;
    v0 = LD_U8(a2);
    v1 = v1 & 0xff;
    v1 = a0 + v1;
    a2 = LD_U8(v1);
    v0 = v0 + t3;
    v0 = v0 & 0xff;
    v0 = a0 + v0;
    a3 = LD_U8(v0);
    a2 = a0 + a2;
    v1 = LD_U8(a2);
    a1 = a1 ^ a3;
    ST8(a0+256, t4);
    v1 = v1 ^ a1;
    v0 = v1 & 0xff;
    ST8(a0+257, t6);
    ST8(a0+258, t2);
    ST8(a0+259, v1);
    return v0;
}

/* 08A7ED80 */
void func_08A7ED80(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7ED80:;
    sp = sp - 32;
    s4 = a0 + 0;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s1 = 0 + 0;
    cnd_ = (s32)a2 <= 0;
    if (cnd_) { goto L_08A7EDD0; }
    goto L_08A7EDB0;
L_08A7EDB0:;
    s0 = s2 + s1;
    a1 = LD_U8(s0);
    a0 = s4 + 0;
    s1 = s1 + 1;
    v0 = func_08A7ECAC(a0, a1);
    goto L_08A7EDC4;
L_08A7EDC4:;
    v1 = (s32)s1 < (s32)s3;
    cnd_ = v1 != 0;
    ST8(s0, v0);
    if (cnd_) { goto L_08A7EDB0; }
    goto L_08A7EDD0;
L_08A7EDD0:;
    sp = sp + 32;
    return;
}

/* 08A7EDF0 */
u32 func_08A7EDF0(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_08A7EDF0:;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+36, a1); goto L_08A7EDFC; }
    goto L_08A7EDFC;
L_08A7EDFC:;
    ST32(a0+4, a1);
    ST32(a1+36, 0);
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a0, a1); goto L_08A7EE10; }
    goto L_08A7EE10;
L_08A7EE10:;
    v0 = LD32(a0+8);
    v0 = v0 + 1;
    ST32(a0+8, v0);
    return v0;
}

/* 08A7EE20 */
u64 func_08A7EE20(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A7EE20:;
    v0 = LD32(a0);
    ST32(a1+36, v0);
    v1 = LD32(a0+4);
    cnd_ = v1 != 0;
    ST32(a0, a1);
    if (cnd_) { goto L_08A7EE38; }
    goto L_08A7EE34;
L_08A7EE34:;
    ST32(a0+4, a1);
    goto L_08A7EE38;
L_08A7EE38:;
    v0 = LD32(a0+8);
    v0 = v0 + 1;
    ST32(a0+8, v0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A7EE48 */
u32 func_08A7EE48(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A7EE48:;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A7EE70; }
    goto L_08A7EE54;
L_08A7EE54:;
    v0 = LD32(v1+36);
    cnd_ = v0 != 0;
    ST32(a0, v0);
    if (cnd_) { goto L_08A7EE64; }
    goto L_08A7EE60;
L_08A7EE60:;
    ST32(a0+4, 0);
    goto L_08A7EE64;
L_08A7EE64:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    ST32(a0+8, v0);
    goto L_08A7EE70;
L_08A7EE70:;
    v0 = v1 + 0;
    return v0;
}

/* 08A7EE78 */
u32 func_08A7EE78(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_08A7EE78:;
    v1 = LD32(a0);
    a2 = 0 + 0;
    cnd_ = v1 == 0;
    v0 = v1 + 0;
    if (cnd_) { goto L_08A7EEA0; }
    goto L_08A7EE88;
L_08A7EE88:;
    cnd_ = v1 == a1;
    if (cnd_) { goto L_08A7EEAC; }
    goto L_08A7EE90;
L_08A7EE90:;
    a2 = v1 + 0;
    v1 = LD32(v1+36);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A7EE88; }
    goto L_08A7EEA0;
L_08A7EEA0:;
    v1 = 0 + 0;
    goto L_08A7EEA4;
L_08A7EEA4:;
    v0 = v1 + 0;
    return v0;
L_08A7EEAC:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A7EEC0; }
    goto L_08A7EEB4;
L_08A7EEB4:;
    v0 = LD32(v1+36);
    ST32(a2+36, v0);
    v0 = LD32(a0);
    goto L_08A7EEC0;
L_08A7EEC0:;
    cnd_ = v0 == v1;
    if (cnd_) { v0 = LD32(v1+36); goto L_08A7EEE8; }
    goto L_08A7EEC8;
L_08A7EEC8:;
    v0 = LD32(a0+4);
    cnd_ = v0 == v1;
    if (cnd_) { ST32(a0+4, a2); goto L_08A7EED4; }
    goto L_08A7EED4;
L_08A7EED4:;
    v0 = LD32(a0+8);
    v1 = 1;
    v0 = v0 - 1;
    ST32(a0+8, v0);
    goto L_08A7EEA4;
L_08A7EEE8:;
    ST32(a0, v0);
    goto L_08A7EEC8;
}

/* 08A7EEF0 */
void func_08A7EEF0(u32 a0)
{
L_08A7EEF0:;
    ST32(a0+8, 0);
    ST32(a0+4, 0);
    ST32(a0, 0);
    return;
}

/* 08A7EF00 */
u64 func_08A7EF00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 304);
L_08A7EF00:;
    sp = sp - 304;
    v0 = 2;
    s0 = a1 + 0;
    s1 = a0 + 0;
    ST8(sp+257, v0);
    v0 = func_08A6B620(a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7EF24;
L_08A7EF24:;
    v1 = LD_U8(s0+20);
    ST32(s0+28, v0);
    a0 = v1 & 0xff;
    v0 = a0 & 0x20;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s0+28, 0); goto L_08A7EFC4; }
    goto L_08A7EF3C;
L_08A7EF3C:;
    t0 = LD32(s1);
    v0 = 1;
    cnd_ = t0 == v0;
    v0 = a0 & 0x4;
    if (cnd_) { goto L_08A7F014; }
    goto L_08A7EF4C;
L_08A7EF4C:;
    cnd_ = v0 == 0;
    v0 = D_08AE8C6C - (-29588);
    if (cnd_) { goto L_08A7EFF8; }
    goto L_08A7EF54;
L_08A7EF54:;
    v1 = D_08AE8C78 - (-29576);
    v0 = v1 - 29576;
    a1 = LD32(v1-29576);
    a2 = LD_U8(v0+12);
    v1 = LD32(v0+4);
    a0 = LD32(v0+8);
    t1 = 13;
    ST32(sp, a1);
    ST32(sp+4, v1);
    ST32(sp+8, a0);
    ST8(sp+12, a2);
    goto L_08A7EF80;
L_08A7EF80:;
    v1 = LD32(s0);
    v0 = LD32(s1+40);
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD_U8(s0+21); goto L_08A7EFD8; }
    goto L_08A7EF90;
L_08A7EF90:;
    v0 = LD_U16(s0+4);
    goto L_08A7EF94;
L_08A7EF94:;
    ST32(sp+260, v1);
    ST16(sp+258, v0);
    goto L_08A7EF9C;
L_08A7EF9C:;
    a0 = LD32(s1+32);
    a2 = t1 + 0;
    a1 = sp + 0;
    t0 = sp + 256;
    a3 = 0 + 0;
    t1 = 16;
    v0 = sceNetInetSendto(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7EFB8;
L_08A7EFB8:;
    a0 = s1 + 8;
    a1 = s0 + 0;
    v0 = func_08A7EDF0(a0, a1);
    goto L_08A7EFC4;
L_08A7EFC4:;
    sp = sp + 304;
    return (u64)v0 | ((u64)v1 << 32);
L_08A7EFD8:;
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U16(s0+4); goto L_08A7EF94; }
    goto L_08A7EFE4;
L_08A7EFE4:;
    v0 = LD32(s0+8);
    v1 = LD_U16(s0+12);
    ST32(sp+260, v0);
    ST16(sp+258, v1);
    goto L_08A7EF9C;
L_08A7EFF8:;
    v1 = v0 - 29588;
    a0 = LD32(v0-29588);
    a1 = LD32(v1+4);
    t1 = 8;
    ST32(sp, a0);
    ST32(sp+4, a1);
    goto L_08A7EF80;
L_08A7F014:;
    v0 = (u32)(s32)(s8)v1;
    cnd_ = (s32)v0 < 0;
    v1 = (u32)-3;
    if (cnd_) { goto L_08A7F104; }
    goto L_08A7F020;
L_08A7F020:;
    v0 = LD32(s0+32);
    ST8(sp+1, v1);
    v0 = WSBW(v0);
    ST32(sp+272, v0);
    v0 = (u32)-2;
    ST8(sp, v0);
    ST8(sp+2, 0);
    a2 = LDU32(s0+28);
    STU32(sp+3, a2);
    v0 = LD32(sp+272);
    cnd_ = v0 == 0;
    a3 = 7;
    if (cnd_) { goto L_08A7F06C; }
    goto L_08A7F058;
L_08A7F058:;
    a2 = LDU32(sp+272);
    STU32(sp+7, a2);
    a3 = 11;
    goto L_08A7F06C;
L_08A7F06C:;
    v0 = a0 & 0x4;
    cnd_ = v0 == 0;
    a2 = a3 + sp;
    if (cnd_) { goto L_08A7F0D0; }
    goto L_08A7F078;
L_08A7F078:;
    v1 = LD_U8(s1+64);
    a0 = LD32(s1+64);
    v0 = a3 + sp;
    ST8(v0, v1);
    cnd_ = (s32)a0 <= 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_08A7F0B4; }
    goto L_08A7F090;
L_08A7F090:;
    a1 = a0 + 0;
    a0 = s1 + 44;
    goto L_08A7F098;
L_08A7F098:;
    v1 = LD_U8(a0);
    v0 = a3 + sp;
    a1 = a1 - 1;
    ST8(v0, v1);
    a3 = a3 + 1;
    cnd_ = a1 != 0;
    a0 = a0 + 1;
    if (cnd_) { goto L_08A7F098; }
    goto L_08A7F0B4;
L_08A7F0B4:;
    v1 = a3 + sp;
    a3 = a3 + 1;
    v0 = a3 + sp;
    t1 = a3 + 1;
    ST8(v1, 0);
    ST8(v0, 0);
    goto L_08A7EF80;
L_08A7F0D0:;
    a3 = a3 + 1;
    a1 = a3 + sp;
    a3 = a3 + 1;
    a0 = a3 + sp;
    a3 = a3 + 1;
    v0 = (u32)-1;
    v1 = a3 + sp;
    t1 = a3 + 1;
    ST8(a2, v0);
    ST8(a1, v0);
    ST8(a0, v0);
    ST8(v1, t0);
    goto L_08A7EF80;
L_08A7F104:;
    v0 = (u32)-2;
    ST8(sp, v0);
    v0 = 9;
    ST8(sp+1, v1);
    ST8(sp+2, v0);
    v0 = LDU32(s0+28);
    STU32(sp+3, v0);
    t1 = 7;
    goto L_08A7EF80;
}

/* 08A7F130 */
void func_08A7F130(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7F130:;
    sp = sp - 32;
    s4 = t1 + 0;
    s3 = t0 + 0;
    s2 = a2 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    cnd_ = a3 != 0;
    if (cnd_) { goto L_08A7F198; }
    goto L_08A7F164;
L_08A7F164:;
    v0 = D_08C320DC - (8412);
    a0 = LD32(v0+8412);
    v1 = 1;
    cnd_ = a0 == v1;
    if (cnd_) { goto L_08A7F198; }
    goto L_08A7F178;
L_08A7F178:;
    goto L_08A7F17C;
L_08A7F17C:;
    sp = sp + 32;
    return;
L_08A7F198:;
    func_08A6B610();
    goto L_08A7F1A0;
L_08A7F1A0:;
    ST32(s0+64, 0);
    a0 = 2;
    a1 = 2;
    ST32(s0+4, s1);
    a2 = 17;
    ST32(s0, s2);
    ST32(s0+68, s3);
    ST32(s0+72, s4);
    ST32(s0+40, 0);
    v0 = sceNetInetSocket(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7F1C8;
L_08A7F1C8:;
    ST32(s0+32, v0);
    a0 = s0 + 20;
    func_08A7EEF0(a0);
    goto L_08A7F1D4;
L_08A7F1D4:;
    a0 = s0 + 8;
    func_08A7EEF0(a0);
    goto L_08A7F1DC;
L_08A7F1DC:;
    goto L_08A7F17C;
}

/* 08A7F1E4 */
void func_08A7F1E4(u32 a0, u32 a1)
{
L_08A7F1E4:;
    ST32(a0+40, a1);
    return;
}

/* 08A7F1EC */
void func_08A7F1EC(u32 a0)
{
    u32 s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7F1EC:;
    sp = sp - 16;
    s0 = a0 + 0;
    s0 = s0 + 8;
    a0 = a0 + 20;
    func_08A7EEF0(a0);
    goto L_08A7F208;
L_08A7F208:;
    a0 = s0 + 0;
    func_08A7EEF0(a0);
    goto L_08A7F210;
L_08A7F210:;
    sp = sp + 16;
    return;
}

/* 08A7F220 */
void func_08A7F220(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7F220:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+32);
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7F238;
L_08A7F238:;
    v1 = (u32)-1;
    ST32(s0+32, v1);
    a0 = s0 + 20;
    s0 = s0 + 8;
    func_08A7EEF0(a0);
    goto L_08A7F24C;
L_08A7F24C:;
    a0 = s0 + 0;
    func_08A7EEF0(a0);
    goto L_08A7F254;
L_08A7F254:;
    sp = sp + 16;
    return;
}

/* 08A7F264 */
u64 func_08A7F264(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7F264:;
    v0 = LD_U8(a1+20);
    sp = sp - 16;
    v1 = 2;
    t1 = v0 & 0x43;
    ST8(a1+20, t1);
    ST8(a1+40, 0);
    cnd_ = a3 == v1;
    ST32(a1+32, 0);
    if (cnd_) { goto L_08A7F2A4; }
    goto L_08A7F288;
L_08A7F288:;
    cnd_ = a3 == 0;
    v0 = t1 | 0x4;
    if (cnd_) { goto L_08A7F2B0; }
    goto L_08A7F290;
L_08A7F290:;
    v0 = 1;
    cnd_ = a3 == v0;
    if (cnd_) { v0 = t1 | 0x8; goto L_08A7F2B0; }
    goto L_08A7F29C;
L_08A7F29C:;
    cnd_ = a3 == v1;
    v0 = t1 | 0x20;
    if (cnd_) { goto L_08A7F2B0; }
    goto L_08A7F2A4;
L_08A7F2A4:;
    goto L_08A7F2A8;
L_08A7F2A8:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A7F2B0:;
    ST8(a1+20, v0);
    v1 = a3 < 0x2u;
    v0 = 0 < t0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0+16); goto L_08A7F2DC; }
    goto L_08A7F2C8;
L_08A7F2C8:;
    v0 = LD_U8(a1+20);
    v1 = (u32)-128;
    v0 = v0 | v1;
    ST8(a1+20, v0);
    v0 = LD32(a0+16);
    goto L_08A7F2DC;
L_08A7F2DC:;
    v1 = LD32(a0+4);
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A7F314; }
    goto L_08A7F2EC;
L_08A7F2EC:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A7F304; }
    goto L_08A7F2F4;
L_08A7F2F4:;
    a0 = a0 + 20;
    { u64 r_ = func_08A7EE20(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7F2FC;
L_08A7F2FC:;
    goto L_08A7F2A8;
L_08A7F304:;
    a0 = a0 + 20;
    v0 = func_08A7EDF0(a0, a1);
    goto L_08A7F30C;
L_08A7F30C:;
    goto L_08A7F2A8;
L_08A7F314:;
    { u64 r_ = func_08A7EF00(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7F31C;
L_08A7F31C:;
    goto L_08A7F2A8;
}

/* 08A7F324 */
void func_08A7F324(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7F324:;
    sp = sp - 32;
    s5 = a0 + 0;
    v1 = (u32)(s32)LD_S8(a2);
    v0 = v1 ^ 0x9;
    v0 = 0 < v0;
    v1 = 0 < v1;
    v1 = v1 & v0;
    cnd_ = v1 != 0;
    s3 = a1 + 0;
    if (cnd_) { goto L_08A7F43C; }
    goto L_08A7F368;
L_08A7F368:;
    v1 = LD_U8(a1+20);
    s0 = a2 + 5;
    v0 = (u32)(s32)(s8)v1;
    cnd_ = (s32)v0 < 0;
    s2 = a3 - 5;
    if (cnd_) { goto L_08A7F4C0; }
    goto L_08A7F37C;
L_08A7F37C:;
    v0 = v1 & 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = (u32)(s32)LD_S8(s0); goto L_08A7F464; }
    goto L_08A7F388;
L_08A7F388:;
    v0 = LD32(a0+64);
    cnd_ = (s32)v0 <= 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08A7F3F0; }
    goto L_08A7F394;
L_08A7F394:;
    v0 = D_08B1D84C - (-10164);
    s6 = v0 - 10164;
    s1 = a0 + 44;
    a0 = s0 + 0;
    goto L_08A7F3A4;
L_08A7F3A4:;
    a1 = s2 + 0;
    v0 = func_08A814A4(a0, a1);
    goto L_08A7F3AC;
L_08A7F3AC:;
    s4 = s4 + 1;
    a2 = s0 + 0;
    a0 = s3 + 0;
    s2 = s2 - v0;
    cnd_ = (s32)v0 < 0;
    s0 = s0 + v0;
    if (cnd_) { goto L_08A7F3EC; }
    goto L_08A7F3C4;
L_08A7F3C4:;
    v0 = LD_U8(s1);
    s1 = s1 + 1;
    v0 = v0 << 2;
    v0 = v0 + s6;
    a1 = LD32(v0);
    func_08A7FADC(a0, a1, a2, 0, 0);
    goto L_08A7F3DC;
L_08A7F3DC:;
    v0 = LD32(s5+64);
    v0 = (s32)s4 < (s32)v0;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A7F3A4; }
    goto L_08A7F3EC;
L_08A7F3EC:;
    v1 = LD_U8(s3+20);
    goto L_08A7F3F0;
L_08A7F3F0:;
    v0 = v1 | 0x41;
    goto L_08A7F3F4;
L_08A7F3F4:;
    ST8(s3+20, v0);
    goto L_08A7F3F8;
L_08A7F3F8:;
    v0 = LD_U8(s3+20);
    v0 = (v0 & ~(0x3u << 2)) | ((0 & 0x3) << 2);
    ST8(s3+20, v0);
    v0 = func_08A6B620(a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7F408;
L_08A7F408:;
    v1 = LD32(s3+28);
    a0 = s5 + 8;
    a1 = s3 + 0;
    v0 = v0 - v1;
    ST32(s3+28, v0);
    v0 = func_08A7EE78(a0, a1);
    goto L_08A7F420;
L_08A7F420:;
    v0 = LD32(s5+68);
    a3 = LD32(s5+72);
    a0 = s5 + 0;
    a2 = s3 + 0;
    a1 = 0 + 0;
    goto L_08A7F434;
L_08A7F434:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7F43C;
L_08A7F43C:;
    goto L_08A7F440;
L_08A7F440:;
    sp = sp + 32;
    return;
L_08A7F464:;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A7F484; }
    goto L_08A7F46C;
L_08A7F46C:;
    a0 = D_08AE8C88 - (-29560);
    a0 = a0 - 29560;
    a2 = 8;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7F47C;
L_08A7F47C:;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A7F49C; }
    goto L_08A7F484;
L_08A7F484:;
    a2 = s2 + 0;
    a0 = s3 + 0;
    func_08A7FF24(a0, a1, a2);
    goto L_08A7F490;
L_08A7F490:;
    v0 = LD_U8(s3+20);
    goto L_08A7F494;
L_08A7F494:;
    v0 = v0 | 0x43;
    goto L_08A7F3F4;
L_08A7F49C:;
    a2 = s2 + 0;
    a0 = s3 + 0;
    func_08A8013C(a0, a1, a2);
    goto L_08A7F4A8;
L_08A7F4A8:;
    v1 = LD_U8(s3+40);
    v0 = 255;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08A7F440; }
    goto L_08A7F4B8;
L_08A7F4B8:;
    v0 = LD_U8(s3+20);
    goto L_08A7F494;
L_08A7F4C0:;
    v0 = v1 & 0x7f;
    cnd_ = (s32)s2 <= 0;
    ST8(a1+20, v0);
    if (cnd_) { goto L_08A7F3F8; }
    goto L_08A7F4CC;
L_08A7F4CC:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7F4D4;
L_08A7F4D4:;
    ST32(s3+32, v0);
    a0 = s5 + 8;
    a1 = s3 + 0;
    v0 = func_08A7EE78(a0, a1);
    goto L_08A7F4E4;
L_08A7F4E4:;
    a0 = s5 + 0;
    a1 = s3 + 0;
    { u64 r_ = func_08A7EF00(a0, a1, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7F4F0;
L_08A7F4F0:;
    v0 = LD32(s5+68);
    a3 = LD32(s5+72);
    a0 = s5 + 0;
    a2 = s3 + 0;
    a1 = 3;
    goto L_08A7F434;
}

/* 08A7F508 */
void func_08A7F508(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7F508:;
    sp = sp - 32;
    s2 = a1 + 0;
    a1 = D_08AE8C94 - (-29548);
    a1 = a1 - 29548;
    s3 = a0 + 0;
    a0 = a2 + 0;
    s0 = a2 + 0;
    { u64 r_ = func_08A89EE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7F53C;
L_08A7F53C:;
    s1 = 0 < v0;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_08A7FE7C(a0, a1);
    goto L_08A7F54C;
L_08A7F54C:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08A7F5B4; }
    goto L_08A7F554;
L_08A7F554:;
    v0 = LD_U8(s2+20);
    a0 = v0 | 0x41;
    v1 = v0 | 0x42;
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s2+20, v1); goto L_08A7F570; }
    goto L_08A7F56C;
L_08A7F56C:;
    ST8(s2+20, a0);
    goto L_08A7F570;
L_08A7F570:;
    v0 = LD_U8(s2+20);
    v0 = (v0 & ~(0x3u << 2)) | ((0 & 0x3) << 2);
    ST8(s2+20, v0);
    v0 = func_08A6B620(0, 0, 0, 0, 0, 0, 0);
    goto L_08A7F580;
L_08A7F580:;
    v1 = LD32(s2+28);
    a0 = s3 + 8;
    a1 = s2 + 0;
    v0 = v0 - v1;
    ST32(s2+28, v0);
    v0 = func_08A7EE78(a0, a1);
    goto L_08A7F598;
L_08A7F598:;
    v0 = LD32(s3+68);
    a3 = LD32(s3+72);
    a0 = s3 + 0;
    a2 = s2 + 0;
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7F5B0;
L_08A7F5B0:;
    goto L_08A7F5B4;
L_08A7F5B4:;
    sp = sp + 32;
    return;
}

/* 08A7F5CC */
u32 func_08A7F5CC(void)
{
    u32 v0 = 0;
L_08A7F5CC:;
    v0 = 1;
    return v0;
}

/* 08A7F5D4 */
void func_08A7F5D4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    int cnd_;
    u8 stack_[2128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 2128);
L_08A7F5D4:;
    sp = sp - 2128;
    v0 = 16;
    s6 = 0 + 0;
    s3 = a1 + 0;
    s2 = a0 + 0;
    cnd_ = a1 != 0;
    ST32(sp+2064, v0);
    if (cnd_) { goto L_08A7F618; }
    goto L_08A7F614;
L_08A7F614:;
    s6 = LD32(a0+32);
    goto L_08A7F618;
L_08A7F618:;
    s7 = (u32)-1;
    goto L_08A7F61C;
L_08A7F61C:;
    a0 = s6 + 0;
    { u64 r_ = func_08A6B358(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7F624;
L_08A7F624:;
    cnd_ = v0 == 0;
    a0 = s6 + 0;
    if (cnd_) { goto L_08A7F764; }
    goto L_08A7F62C;
L_08A7F62C:;
    a1 = sp + 0;
    a2 = 2047;
    a3 = 0 + 0;
    t0 = sp + 2048;
    t1 = sp + 2064;
    v0 = sceNetInetRecvfrom(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7F644;
L_08A7F644:;
    cnd_ = v0 == s7;
    s4 = v0 + 0;
    if (cnd_) { goto L_08A7F764; }
    goto L_08A7F64C;
L_08A7F64C:;
    s0 = LD32(s2+8);
    v0 = sp + v0;
    cnd_ = s0 == 0;
    ST8(v0, 0);
    if (cnd_) { goto L_08A7F61C; }
    goto L_08A7F65C;
L_08A7F65C:;
    s1 = LD32(sp+2052);
    s5 = 0 < s3;
    goto L_08A7F664;
L_08A7F664:;
    cnd_ = s3 == 0;
    if (cnd_) { a0 = LD32(s0); goto L_08A7F68C; }
    goto L_08A7F66C;
L_08A7F66C:;
    v0 = LD_U8(s0+21);
    v0 = v0 & 0x8;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0); goto L_08A7F68C; }
    goto L_08A7F67C;
L_08A7F67C:;
    v0 = LD32(s0+16);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_08A7F6DC; }
    goto L_08A7F688;
L_08A7F688:;
    a0 = LD32(s0);
    goto L_08A7F68C;
L_08A7F68C:;
    cnd_ = a0 == s1;
    if (cnd_) { v0 = LD_U16(s0+4); goto L_08A7F744; }
    goto L_08A7F694;
L_08A7F694:;
    v0 = LD32(s2+40);
    goto L_08A7F698;
L_08A7F698:;
    cnd_ = a0 == v0;
    if (cnd_) { v0 = LD_U8(s0+21); goto L_08A7F6B4; }
    goto L_08A7F6A0;
L_08A7F6A0:;
    s0 = LD32(s0+36);
    goto L_08A7F6A4;
L_08A7F6A4:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08A7F664; }
    goto L_08A7F6AC;
L_08A7F6AC:;
    goto L_08A7F61C;
L_08A7F6B4:;
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s0+36); goto L_08A7F6A4; }
    goto L_08A7F6C0;
L_08A7F6C0:;
    v0 = LD32(s0+8);
    cnd_ = v0 != s1;
    if (cnd_) { s0 = LD32(s0+36); goto L_08A7F6A4; }
    goto L_08A7F6CC;
L_08A7F6CC:;
    v1 = LD_U16(s0+12);
    v0 = LD_U16(sp+2050);
    cnd_ = v1 != v0;
    if (cnd_) { s0 = LD32(s0+36); goto L_08A7F6A4; }
    goto L_08A7F6DC;
L_08A7F6DC:;
    cnd_ = s3 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A7F704; }
    goto L_08A7F6E4;
L_08A7F6E4:;
    a1 = s0 + 0;
    a2 = sp + 0;
    a3 = s4 + 0;
    v0 = func_08A7F5CC();
    goto L_08A7F6F4;
L_08A7F6F4:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s0+36); goto L_08A7F6A4; }
    goto L_08A7F6FC;
L_08A7F6FC:;
    goto L_08A7F61C;
L_08A7F704:;
    v1 = LD32(s2);
    v0 = 1;
    cnd_ = v1 == v0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A7F72C; }
    goto L_08A7F714;
L_08A7F714:;
    a3 = s4 + 0;
    a0 = s2 + 0;
    a2 = sp + 0;
    func_08A7F508(a0, a1, a2);
    goto L_08A7F724;
L_08A7F724:;
    goto L_08A7F61C;
L_08A7F72C:;
    a3 = s4 + 0;
    a0 = s2 + 0;
    a2 = sp + 0;
    func_08A7F324(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_08A7F73C;
L_08A7F73C:;
    goto L_08A7F61C;
L_08A7F744:;
    v1 = LD_U16(sp+2050);
    v0 = v0 ^ v1;
    v0 = v0 < 0x1u;
    v0 = v0 | s5;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A7F6DC; }
    goto L_08A7F75C;
L_08A7F75C:;
    v0 = LD32(s2+40);
    goto L_08A7F698;
L_08A7F764:;
    sp = sp + 2128;
    return;
}

/* 08A7F790 */
void func_08A7F790(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7F790:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = func_08A6B620(a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7F7B0;
L_08A7F7B0:;
    a2 = LD32(s0+8);
    cnd_ = a2 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A7F820; }
    goto L_08A7F7BC;
L_08A7F7BC:;
    s3 = 2500;
    s2 = (u32)-45;
    goto L_08A7F7C4;
L_08A7F7C4:;
    v0 = LD32(a2+28);
    a0 = s0 + 0;
    v0 = v0 + 2500;
    v0 = v0 < s1;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_08A7F820; }
    goto L_08A7F7DC;
L_08A7F7DC:;
    v0 = LD_U8(a2+21);
    v0 = v0 | 0x10;
    ST8(a2+21, v0);
    v1 = LD32(s0+8);
    v0 = LD_U8(v1+21);
    ST32(v1+28, s3);
    v0 = v0 & s2;
    ST8(v1+21, v0);
    a2 = LD32(s0+8);
    v0 = LD32(s0+68);
    t_ = v0;
    a3 = LD32(s0+72);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7F80C;
L_08A7F80C:;
    a0 = s0 + 8;
    v0 = func_08A7EE48(a0);
    goto L_08A7F814;
L_08A7F814:;
    v1 = LD32(s0+8);
    cnd_ = v1 != 0;
    a2 = v1 + 0;
    if (cnd_) { goto L_08A7F7C4; }
    goto L_08A7F820;
L_08A7F820:;
    sp = sp + 32;
    return;
}

/* 08A7F83C */
void func_08A7F83C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7F83C:;
    sp = sp - 16;
    v0 = LD32(a0+16);
    v1 = LD32(a0+4);
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A7F8A0; }
    goto L_08A7F860;
L_08A7F860:;
    v0 = LD32(a0+28);
    cnd_ = (s32)v0 <= 0;
    s1 = a0 + 20;
    if (cnd_) { goto L_08A7F8A0; }
    goto L_08A7F86C;
L_08A7F86C:;
    a0 = s1 + 0;
    v0 = func_08A7EE48(a0);
    goto L_08A7F874;
L_08A7F874:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    { u64 r_ = func_08A7EF00(a0, a1, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7F880;
L_08A7F880:;
    v0 = LD32(s0+16);
    v1 = LD32(s0+4);
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A7F8A4; }
    goto L_08A7F894;
L_08A7F894:;
    v0 = LD32(s0+28);
    cnd_ = (s32)v0 > 0;
    if (cnd_) { goto L_08A7F86C; }
    goto L_08A7F8A0;
L_08A7F8A0:;
    goto L_08A7F8A4;
L_08A7F8A4:;
    sp = sp + 16;
    return;
}

/* 08A7F8B4 */
void func_08A7F8B4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7F8B4:;
    sp = sp - 16;
    a1 = 0 + 0;
    v0 = LD32(a0+16);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A7F8E0; }
    goto L_08A7F8D0;
L_08A7F8D0:;
    goto L_08A7F8D4;
L_08A7F8D4:;
    sp = sp + 16;
    return;
L_08A7F8E0:;
    func_08A7F5D4(a0, a1, t1, t2, t3);
    goto L_08A7F8E8;
L_08A7F8E8:;
    a0 = s0 + 0;
    func_08A7F790(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08A7F8F0;
L_08A7F8F0:;
    v0 = LD32(s0+28);
    cnd_ = (s32)v0 <= 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A7F904; }
    goto L_08A7F8FC;
L_08A7F8FC:;
    func_08A7F83C(a0);
    goto L_08A7F904;
L_08A7F904:;
    v0 = LD32(s0+16);
    a0 = s0 + 0;
    a1 = 2;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A7F8D0; }
    goto L_08A7F918;
L_08A7F918:;
    v0 = LD32(s0+68);
    t_ = v0;
    a3 = LD32(s0+72);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7F924;
L_08A7F924:;
    goto L_08A7F8D4;
}

/* 08A7F92C */
void func_08A7F92C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_08A7F92C:;
    v0 = LD32(a0+64);
    a2 = v0 + 1;
    v1 = v0 + a0;
    v0 = (s32)v0 < 20;
    cnd_ = v0 == 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08A7F94C; }
    goto L_08A7F944;
L_08A7F944:;
    ST8(v1+44, a1);
    ST32(a0+64, a2);
    goto L_08A7F94C;
L_08A7F94C:;
    return;
}

/* 08A7F954 */
void func_08A7F954(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7F954:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 8;
    s0 = s0 + 20;
    s1 = a1 + 0;
    v0 = func_08A7EE78(a0, a1);
    goto L_08A7F978;
L_08A7F978:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08A7F998; }
    goto L_08A7F984;
L_08A7F984:;
    goto L_08A7F988;
L_08A7F988:;
    sp = sp + 16;
    return;
L_08A7F998:;
    v0 = func_08A7EE78(a0, a1);
    goto L_08A7F9A0;
L_08A7F9A0:;
    goto L_08A7F988;
}

/* 08A7F9A8 */
rv_t func_08A7F9A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7F9A8:;
    sp = sp - 16;
    a0 = LD32(a0);
    { u64 r_ = func_08A80368(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7F9B8;
L_08A7F9B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A7F9C4 */
rv_t func_08A7F9C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7F9C4:;
    sp = sp - 16;
    a0 = LD32(a0);
    a1 = LD32(a1);
    { u64 r_ = func_08A89724(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7F9D8;
L_08A7F9D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A7F9E4 */
rv_t func_08A7F9E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7F9E4:;
    sp = sp - 16;
    a0 = LD32(a0);
    { u64 r_ = func_08A6AFBC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7F9F4;
L_08A7F9F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A7FA00 */
u32 func_08A7FA00(u32 t2, u32 t3)
{
    u32 v0 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7FA00:;
    sp = sp - 16;
    s0 = D_08C32C7C - (11388);
    a3 = RS_FADDR(func_08A7F9A8, 0x08A7F9A8u) - (-1624);
    v0 = LD32(s0+11388);
    t0 = RS_FADDR(func_08A7F9C4, 0x08A7F9C4u) - (-1596);
    t1 = RS_FADDR(func_08A7F9E4, 0x08A7F9E4u) - (-1564);
    a3 = a3 - 1624;
    t0 = t0 - 1596;
    t1 = t1 - 1564;
    a0 = 8;
    a1 = 500;
    cnd_ = v0 == 0;
    a2 = 4;
    if (cnd_) { goto L_08A7FA4C; }
    goto L_08A7FA3C;
L_08A7FA3C:;
    sp = sp + 16;
    return v0;
L_08A7FA4C:;
    v0 = func_08A840C0(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A7FA54;
L_08A7FA54:;
    ST32(s0+11388, v0);
    goto L_08A7FA3C;
}

/* 08A7FA5C */
void func_08A7FA5C(void)
{
    u32 v0 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7FA5C:;
    sp = sp - 16;
    s0 = D_08C32C7C - (11388);
    v0 = LD32(s0+11388);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A7FA88; }
    goto L_08A7FA78;
L_08A7FA78:;
    goto L_08A7FA7C;
L_08A7FA7C:;
    sp = sp + 16;
    return;
L_08A7FA88:;
    v0 = func_08A841FC(a0);
    goto L_08A7FA90;
L_08A7FA90:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A7FA7C; }
    goto L_08A7FA98;
L_08A7FA98:;
    a0 = LD32(s0+11388);
    func_08A8418C(a0, 0, 0, 0);
    goto L_08A7FAA0;
L_08A7FAA0:;
    ST32(s0+11388, 0);
    goto L_08A7FA78;
}

/* 08A7FAA8 */
void func_08A7FAA8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7FAA8:;
    sp = sp - 16;
    s0 = LD32(a0);
    a0 = LD32(s0+24);
    func_08A8418C(a0, t1, t2, t3);
    goto L_08A7FAC0;
L_08A7FAC0:;
    ST32(s0+24, 0);
    a0 = s0 + 0;
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7FACC;
L_08A7FACC:;
    sp = sp + 16;
    return;
}

/* 08A7FADC */
void func_08A7FADC(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7FADC:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = 0 + 0;
    s0 = a2 + 0;
    { rv_t r_ = func_08A813A8(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7FAFC;
L_08A7FAFC:;
    a1 = s0 + 0;
    a0 = 0 + 0;
    ST32(sp, v0);
    { rv_t r_ = func_08A813A8(a0, a1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7FB0C;
L_08A7FB0C:;
    a1 = sp + 0;
    a0 = LD32(s1+24);
    ST32(sp+4, v0);
    func_08A84270(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A7FB1C;
L_08A7FB1C:;
    sp = sp + 32;
    return;
}

/* 08A7FB30 */
void func_08A7FB30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A7FB30:;
    sp = sp - 48;
    s1 = a1 + 0;
    a1 = D_08AE8C9C - (-29540);
    a1 = a1 - 29540;
    s0 = a0 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7FB58;
L_08A7FB58:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = sp + 0;
    func_08A7FADC(a0, a1, a2, 0, 0);
    goto L_08A7FB68;
L_08A7FB68:;
    sp = sp + 48;
    return;
}

/* 08A7FB7C */
rv_t func_08A7FB7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7FB7C:;
    sp = sp - 32;
    v0 = a1 + 0;
    s0 = a2 + 0;
    a1 = sp + 0;
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A7FBB4; }
    goto L_08A7FB9C;
L_08A7FB9C:;
    a0 = LD32(a0+24);
    ST32(sp, v0);
    { rv_t r_ = func_08A843B0(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7FBA8;
L_08A7FBA8:;
    cnd_ = v0 == 0;
    v1 = s0 + 0;
    if (cnd_) { goto L_08A7FBB4; }
    goto L_08A7FBB0;
L_08A7FBB0:;
    v1 = LD32(v0+4);
    goto L_08A7FBB4;
L_08A7FBB4:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A7FBC8 */
rv_t func_08A7FBC8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7FBC8:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = D_08AE8CA0 - (-29536);
    a1 = a1 - 29536;
    s1 = a0 + 0;
    a0 = s0 + 0;
    s2 = a2 + 0;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7FBF8;
L_08A7FBF8:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A7FC30; }
    goto L_08A7FC08;
L_08A7FC08:;
    v0 = func_08A80440(a0);
    goto L_08A7FC10;
L_08A7FC10:;
    a2 = v0 + 0;
    goto L_08A7FC14;
L_08A7FC14:;
    goto L_08A7FC18;
L_08A7FC18:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A7FC30:;
    { rv_t r_ = func_08A7FB7C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7FC38;
L_08A7FC38:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a2 = s2 + 0;
    if (cnd_) { goto L_08A7FC14; }
    goto L_08A7FC44;
L_08A7FC44:;
    v0 = LD_U8(v0);
    v1 = D_08AE9044 - (-28604);
    v1 = v1 - 28604;
    v0 = v0 + v1;
    a1 = LD_U8(v0);
    a1 = a1 & 0x4;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A7FC18; }
    goto L_08A7FC64;
L_08A7FC64:;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7FC6C;
L_08A7FC6C:;
    a2 = v0 + 0;
    goto L_08A7FC14;
}

/* 08A7FC74 */
u64 func_08A7FC74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7FC74:;
    sp = sp - 16;
    s0 = a2 + 0;
    a2 = 0 + 0;
    s1 = a3 + 0;
    { rv_t r_ = func_08A7FB7C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A7FC94;
L_08A7FC94:;
    a0 = v0 + 0;
    a2 = s0 + 0;
    cnd_ = v0 == 0;
    a3 = s1 + 0;
    if (cnd_) { goto L_08A7FCB4; }
    goto L_08A7FCA4;
L_08A7FCA4:;
    { u64 r_ = func_08A85F4C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7FCAC;
L_08A7FCAC:;
    a2 = v0 + 0;
    a3 = v1 + 0;
    goto L_08A7FCB4;
L_08A7FCB4:;
    v0 = a2 + 0;
    v1 = a3 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A7FCD0 */
u32 func_08A7FCD0(u32 a0)
{
    u32 v0 = 0;
L_08A7FCD0:;
    v0 = LD_U8(a0+20);
    v0 = v0 & 0x1;
    return v0;
}

/* 08A7FCDC */
u32 func_08A7FCDC(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7FCDC:;
    sp = sp - 16;
    v0 = LDU32(a0);
    a0 = v0 + 0;
    v0 = func_08A6AA9C(a0, t0, t1, t2, t3);
    goto L_08A7FCF4;
L_08A7FCF4:;
    sp = sp + 16;
    return v0;
}

/* 08A7FD00 */
u32 func_08A7FD00(u32 a0)
{
    u32 v0 = 0;
L_08A7FD00:;
    v0 = LD32(a0);
    return v0;
}

/* 08A7FD08 */
u32 func_08A7FD08(u32 a0)
{
    u32 v0 = 0;
L_08A7FD08:;
    v0 = LD_U16(a0+4);
    v0 = WSBH(v0);
    v0 = v0 & 0xffff;
    return v0;
}

/* 08A7FD18 */
u32 func_08A7FD18(u32 a0)
{
    u32 v0 = 0;
L_08A7FD18:;
    v0 = LD_U16(a0+4);
    return v0;
}

/* 08A7FD20 */
u32 func_08A7FD20(u32 a0)
{
    u32 v0 = 0;
L_08A7FD20:;
    v0 = LD_U8(a0+21);
    v0 = (v0 >> 1) & 0x1;
    return v0;
}

/* 08A7FD2C */
u32 func_08A7FD2C(u32 a0)
{
    u32 v0 = 0;
L_08A7FD2C:;
    v0 = LD_U8(a0+21);
    v0 = v0 & 0x1;
    return v0;
}

/* 08A7FD38 */
u32 func_08A7FD38(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A7FD38:;
    sp = sp - 16;
    v0 = LDU32(a0+8);
    a0 = v0 + 0;
    v0 = func_08A6AA9C(a0, t0, t1, t2, t3);
    goto L_08A7FD50;
L_08A7FD50:;
    sp = sp + 16;
    return v0;
}

/* 08A7FD5C */
u32 func_08A7FD5C(u32 a0)
{
    u32 v0 = 0;
L_08A7FD5C:;
    v0 = LD32(a0+8);
    return v0;
}

/* 08A7FD64 */
u32 func_08A7FD64(u32 a0)
{
    u32 v0 = 0;
L_08A7FD64:;
    v0 = LD_U16(a0+12);
    v0 = WSBH(v0);
    v0 = v0 & 0xffff;
    return v0;
}

/* 08A7FD74 */
void func_08A7FD74(u32 a0, u32 a1)
{
L_08A7FD74:;
    ST32(a0+36, a1);
    return;
}

/* 08A7FD7C */
u32 func_08A7FD7C(u32 a0)
{
    u32 v0 = 0;
L_08A7FD7C:;
    v0 = LD32(a0+36);
    return v0;
}

/* 08A7FD84 */
u32 func_08A7FD84(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7FD84:;
    sp = sp - 32;
    v0 = D_08AE8CC8 - (-29496);
    v1 = v0 - 29496;
    s2 = a0 + 0;
    s1 = 0 + 0;
    s0 = sp + 0;
    a1 = LD32(v0-29496);
    a2 = LD32(v1+4);
    ST32(sp, a1);
    ST32(sp+4, a2);
    a1 = LD32(s0);
    goto L_08A7FDC0;
L_08A7FDC0:;
    a0 = s2 + 0;
    s1 = s1 + 1;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A7FDCC;
L_08A7FDCC:;
    s0 = s0 + 4;
    v1 = s1 < 0x2u;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A7FDE8; }
    goto L_08A7FDDC;
L_08A7FDDC:;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s0); goto L_08A7FDC0; }
    goto L_08A7FDE4;
L_08A7FDE4:;
    a0 = 1;
    goto L_08A7FDE8;
L_08A7FDE8:;
    v0 = a0 + 0;
    sp = sp + 32;
    return v0;
}

/* 08A7FE04 */
u32 func_08A7FE04(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08A7FE04:;
    cnd_ = a0 == 0;
    a1 = (u32)(s32)(s8)a1;
    if (cnd_) { goto L_08A7FE14; }
    goto L_08A7FE0C;
L_08A7FE0C:;
    a3 = D_08C32C80 - (11392);
    ST32(a3+11392, a0);
    goto L_08A7FE14;
L_08A7FE14:;
    a3 = D_08C32C80 - (11392);
    a2 = LD32(a3+11392);
    v0 = (u32)(s32)LD_S8(a2);
    cnd_ = v0 == 0;
    a0 = a3 + 0;
    if (cnd_) { goto L_08A7FE50; }
    goto L_08A7FE28;
L_08A7FE28:;
    cnd_ = v0 == a1;
    if (cnd_) { a0 = LD32(a3+11392); goto L_08A7FE54; }
    goto L_08A7FE30;
L_08A7FE30:;
    v1 = LD32(a0+11392);
    goto L_08A7FE34;
L_08A7FE34:;
    v0 = v1 + 1;
    ST32(a0+11392, v0);
    v0 = (u32)(s32)LD_S8(v1+1);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(a3+11392); goto L_08A7FE54; }
    goto L_08A7FE48;
L_08A7FE48:;
    cnd_ = v0 != a1;
    v1 = LD32(a0+11392);
    if (cnd_) { goto L_08A7FE34; }
    goto L_08A7FE50;
L_08A7FE50:;
    a0 = LD32(a3+11392);
    goto L_08A7FE54;
L_08A7FE54:;
    v1 = (u32)(s32)LD_S8(a0);
    v0 = a0 ^ a2;
    cnd_ = v1 == 0;
    if (v0 == 0) a2 = 0;
    if (cnd_) { goto L_08A7FE74; }
    goto L_08A7FE64;
L_08A7FE64:;
    v1 = a0 + 1;
    v0 = D_08C32C80 - (11392);
    ST8(a0, 0);
    ST32(v0+11392, v1);
    goto L_08A7FE74;
L_08A7FE74:;
    v0 = a2 + 0;
    return v0;
}

/* 08A7FE7C */
void func_08A7FE7C(u32 a0, u32 a1)
{
    u32 v0 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A7FE7C:;
    sp = sp - 32;
    a1 = a1 + 1;
    s2 = a0 + 0;
    a0 = a1 + 0;
    a1 = 92;
    v0 = func_08A7FE04(a0, a1);
    goto L_08A7FEA8;
L_08A7FEA8:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A7FEF8; }
    goto L_08A7FEB0;
L_08A7FEB0:;
    s3 = D_08AE8CD0 - (-29488);
    goto L_08A7FEB4;
L_08A7FEB4:;
    a1 = 92;
    a0 = 0 + 0;
    v0 = func_08A7FE04(a0, a1);
    goto L_08A7FEC0;
L_08A7FEC0:;
    s0 = v0 + 0;
    a0 = s1 + 0;
    v0 = s3 - 29488;
    if (s0 == 0) s0 = v0;
    v0 = func_08A7FD84(a0);
    goto L_08A7FED4;
L_08A7FED4:;
    a1 = s1 + 0;
    a2 = s0 + 0;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A7FF14; }
    goto L_08A7FEE4;
L_08A7FEE4:;
    a0 = 0 + 0;
    goto L_08A7FEE8;
L_08A7FEE8:;
    a1 = 92;
    v0 = func_08A7FE04(a0, a1);
    goto L_08A7FEF0;
L_08A7FEF0:;
    cnd_ = v0 != 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A7FEB4; }
    goto L_08A7FEF8;
L_08A7FEF8:;
    sp = sp + 32;
    return;
L_08A7FF14:;
    func_08A7FADC(a0, a1, a2, 0, 0);
    goto L_08A7FF1C;
L_08A7FF1C:;
    a0 = 0 + 0;
    goto L_08A7FEE8;
}

/* 08A7FF24 */
void func_08A7FF24(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[208] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 208);
L_08A7FF24:;
    sp = sp - 208;
    s3 = a2 + 0;
    s2 = a1 + 0;
    v0 = (u32)(s32)LD_S8(a1);
    cnd_ = v0 != 0;
    ST32(sp+144, a0);
    if (cnd_) { goto L_08A800DC; }
    goto L_08A7FF64;
L_08A7FF64:;
    ST32(sp+152, 0);
    goto L_08A7FF68;
L_08A7FF68:;
    s2 = s2 + 1;
    s3 = s3 - 1;
    goto L_08A7FF70;
L_08A7FF70:;
    v0 = (s32)s3 < 2;
    cnd_ = v0 != 0;
    s3 = s3 - 2;
    if (cnd_) { goto L_08A8006C; }
    goto L_08A7FF7C;
L_08A7FF7C:;
    v0 = (u32)(s32)LD_S8(s2);
    v1 = (u32)(s32)LD_S8(s2+1);
    ST8(sp, v0);
    ST8(sp+1, v1);
    s2 = s2 + 2;
    v0 = LD_U16(sp);
    ST32(sp+148, s2);
    v0 = WSBH(v0);
    ST16(sp, v0);
    v1 = (u32)(s32)LD_S8(s2);
    cnd_ = v1 != 0;
    s7 = 0 + 0;
    if (cnd_) { goto L_08A8009C; }
    goto L_08A7FFAC;
L_08A7FFAC:;
    v1 = LD_U16(sp);
    goto L_08A7FFB0;
L_08A7FFB0:;
    s2 = s2 + 1;
    s3 = s3 - 1;
    cnd_ = v1 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_08A80058; }
    goto L_08A7FFC0;
L_08A7FFC0:;
    v0 = (s32)0 < (s32)s7;
    ST32(sp+156, v0);
    a0 = LD32(sp+156);
    goto L_08A7FFCC;
L_08A7FFCC:;
    s1 = LD32(sp+148);
    cnd_ = a0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08A80044; }
    goto L_08A7FFD8;
L_08A7FFD8:;
    s6 = sp + 16;
    fp = D_08AE8CD4 - (-29484);
    goto L_08A7FFE0;
L_08A7FFE0:;
    a1 = s3 + 0;
    a0 = s2 + 0;
    v0 = func_08A814A4(a0, a1);
    goto L_08A7FFEC;
L_08A7FFEC:;
    s4 = s4 + 1;
    s0 = v0 + 0;
    a3 = s5 + 0;
    a2 = s1 + 0;
    a0 = s6 + 0;
    a1 = fp - 29484;
    cnd_ = (s32)v0 < 0;
    s3 = s3 - v0;
    if (cnd_) { goto L_08A8006C; }
    goto L_08A8000C;
L_08A8000C:;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A80014;
L_08A80014:;
    a0 = LD32(sp+144);
    a2 = s2 + 0;
    a1 = s6 + 0;
    func_08A7FADC(a0, a1, a2, 0, 0);
    goto L_08A80024;
L_08A80024:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8002C;
L_08A8002C:;
    v0 = s1 + v0;
    v1 = (s32)s4 < (s32)s7;
    s1 = v0 + 1;
    cnd_ = v1 != 0;
    s2 = s2 + s0;
    if (cnd_) { goto L_08A7FFE0; }
    goto L_08A80040;
L_08A80040:;
    v1 = LD_U16(sp);
    goto L_08A80044;
L_08A80044:;
    s5 = s5 + 1;
    v0 = v1 & 0xffff;
    v0 = (s32)s5 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(sp+156); goto L_08A7FFCC; }
    goto L_08A80058;
L_08A80058:;
    a1 = LD32(sp+152);
    a1 = a1 + 1;
    v0 = (s32)a1 < 2;
    cnd_ = v0 != 0;
    ST32(sp+152, a1);
    if (cnd_) { goto L_08A7FF70; }
    goto L_08A8006C;
L_08A8006C:;
    goto L_08A80070;
L_08A80070:;
    sp = sp + 208;
    return;
L_08A8009C:;
    a0 = s2 + 0;
    goto L_08A800A0;
L_08A800A0:;
    a1 = s3 + 0;
    v0 = func_08A814A4(a0, a1);
    goto L_08A800A8;
L_08A800A8:;
    s0 = v0 + 0;
    s2 = s2 + v0;
    s3 = s3 - v0;
    s7 = s7 + 1;
    cnd_ = (s32)s0 < 0;
    v0 = (s32)v0 < 101;
    if (cnd_) { goto L_08A8006C; }
    goto L_08A800C0;
L_08A800C0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A80070; }
    goto L_08A800C8;
L_08A800C8:;
    v0 = (u32)(s32)LD_S8(s2);
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A800A0; }
    goto L_08A800D4;
L_08A800D4:;
    v1 = LD_U16(sp);
    goto L_08A7FFB0;
L_08A800DC:;
    a0 = s2 + 0;
    goto L_08A800E0;
L_08A800E0:;
    a1 = s3 + 0;
    v0 = func_08A814A4(a0, a1);
    goto L_08A800E8;
L_08A800E8:;
    s1 = s2 + 0;
    s3 = s3 - v0;
    s2 = s2 + v0;
    a0 = s2 + 0;
    cnd_ = (s32)v0 < 0;
    a1 = s3 + 0;
    if (cnd_) { goto L_08A8006C; }
    goto L_08A80100;
L_08A80100:;
    v0 = func_08A814A4(a0, a1);
    goto L_08A80108;
L_08A80108:;
    s3 = s3 - v0;
    a2 = s2 + 0;
    a1 = s1 + 0;
    s2 = s2 + v0;
    cnd_ = (s32)v0 < 0;
    a0 = LD32(sp+144);
    if (cnd_) { goto L_08A8006C; }
    goto L_08A80120;
L_08A80120:;
    func_08A7FADC(a0, a1, a2, 0, 0);
    goto L_08A80128;
L_08A80128:;
    v0 = (u32)(s32)LD_S8(s2);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s2 + 0; goto L_08A800E0; }
    goto L_08A80134;
L_08A80134:;
    ST32(sp+152, 0);
    goto L_08A7FF68;
}

/* 08A8013C */
void func_08A8013C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 176);
L_08A8013C:;
    sp = sp - 176;
    s5 = a0 + 0;
    s2 = 0 + 0;
    s1 = a2 + 0;
    v0 = (u32)(s32)LD_S8(a1);
    cnd_ = v0 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08A801A8; }
    goto L_08A8017C;
L_08A8017C:;
    goto L_08A80180;
L_08A80180:;
    sp = sp + 176;
    return;
L_08A801A8:;
    a0 = a1 + 0;
    a1 = a2 + 0;
    v0 = func_08A814A4(a0, a1);
    goto L_08A801B4;
L_08A801B4:;
    cnd_ = (s32)v0 < 0;
    a0 = D_08AE8CDC - (-29476);
    if (cnd_) { goto L_08A8017C; }
    goto L_08A801BC;
L_08A801BC:;
    a1 = s0 + 0;
    a0 = a0 - 29476;
    a2 = 8;
    s1 = s1 - v0;
    s0 = s0 + v0;
    v0 = func_08A89AFC(a0, a1, a2);
    goto L_08A801D4;
L_08A801D4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A80180; }
    goto L_08A801DC;
L_08A801DC:;
    cnd_ = (s32)s1 <= 0;
    s1 = s1 - 1;
    if (cnd_) { goto L_08A80180; }
    goto L_08A801E4;
L_08A801E4:;
    a0 = LD_U8(s0);
    v0 = a0 & 0x80;
    cnd_ = v0 == 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_08A801FC; }
    goto L_08A801F4;
L_08A801F4:;
    s2 = 1;
    a0 = a0 ^ 0x80;
    goto L_08A801FC;
L_08A801FC:;
    v0 = a0 < 0x8u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A80180; }
    goto L_08A80208;
L_08A80208:;
    v1 = 1;
    cnd_ = s2 == v1;
    v1 = v1 << (a0 & 31);
    if (cnd_) { goto L_08A80350; }
    goto L_08A80214;
L_08A80214:;
    v0 = LD_U8(s5+40);
    v0 = v0 | v1;
    ST8(s5+40, v0);
    goto L_08A80220;
L_08A80220:;
    cnd_ = (s32)s1 <= 0;
    if (cnd_) { goto L_08A80180; }
    goto L_08A80228;
L_08A80228:;
    s7 = (u32)(s32)LD_S8(s0);
    s1 = s1 - 1;
    v0 = s7 < 0x3u;
    cnd_ = v0 == 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_08A8017C; }
    goto L_08A8023C;
L_08A8023C:;
    v1 = LD_U8(s0);
    cnd_ = v1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_08A80268; }
    goto L_08A80248;
L_08A80248:;
    cnd_ = (s32)s1 <= 0;
    v0 = (u32)(s32)(s8)v1;
    if (cnd_) { goto L_08A8017C; }
    goto L_08A80250;
L_08A80250:;
    cnd_ = v0 != 0;
    s1 = s1 - 1;
    if (cnd_) { goto L_08A8017C; }
    goto L_08A80258;
L_08A80258:;
    cnd_ = (s32)s1 > 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_08A80228; }
    goto L_08A80260;
L_08A80260:;
    goto L_08A80180;
L_08A80268:;
    a1 = s1 + 0;
    v0 = func_08A814A4(a0, a1);
    goto L_08A80270;
L_08A80270:;
    cnd_ = (s32)v0 < 0;
    s4 = s0 + 0;
    if (cnd_) { goto L_08A8017C; }
    goto L_08A80278;
L_08A80278:;
    s1 = s1 - v0;
    cnd_ = s7 == 0;
    s0 = s0 + v0;
    if (cnd_) { goto L_08A80320; }
    goto L_08A80284;
L_08A80284:;
    cnd_ = (s32)s1 <= 0;
    if (cnd_) { goto L_08A80180; }
    goto L_08A8028C;
L_08A8028C:;
    s2 = (u32)(s32)LD_S8(s0);
    s0 = s0 + 1;
    v1 = LD_U8(s0);
    cnd_ = v1 == 0;
    s1 = s1 - 1;
    if (cnd_) { goto L_08A802F8; }
    goto L_08A802A0;
L_08A802A0:;
    s6 = D_08AE8CD4 - (-29484);
    a0 = s0 + 0;
    goto L_08A802A8;
L_08A802A8:;
    a1 = s1 + 0;
    v0 = func_08A814A4(a0, a1);
    goto L_08A802B0;
L_08A802B0:;
    s3 = s0 + 0;
    a3 = s2 + 0;
    a0 = sp + 0;
    a1 = s6 - 29484;
    a2 = s4 + 0;
    s1 = s1 - v0;
    s0 = s0 + v0;
    cnd_ = (s32)v0 < 0;
    s2 = s2 + 1;
    if (cnd_) { goto L_08A8017C; }
    goto L_08A802D4;
L_08A802D4:;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A802DC;
L_08A802DC:;
    a0 = s5 + 0;
    a1 = sp + 0;
    a2 = s3 + 0;
    func_08A7FADC(a0, a1, a2, 0, 0);
    goto L_08A802EC;
L_08A802EC:;
    v1 = LD_U8(s0);
    cnd_ = v1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A802A8; }
    goto L_08A802F8;
L_08A802F8:;
    cnd_ = (s32)s1 <= 0;
    v0 = (u32)(s32)(s8)v1;
    if (cnd_) { goto L_08A80310; }
    goto L_08A80300;
L_08A80300:;
    s0 = s0 + 1;
    v1 = LD_U8(s0);
    s1 = s1 - 1;
    goto L_08A8030C;
L_08A8030C:;
    v0 = (u32)(s32)(s8)v1;
    goto L_08A80310;
L_08A80310:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_08A80268; }
    goto L_08A80318;
L_08A80318:;
    goto L_08A80248;
L_08A80320:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = func_08A814A4(a0, a1);
    goto L_08A8032C;
L_08A8032C:;
    cnd_ = (s32)v0 < 0;
    a0 = s5 + 0;
    if (cnd_) { goto L_08A8017C; }
    goto L_08A80334;
L_08A80334:;
    a2 = s0 + 0;
    a1 = s4 + 0;
    s0 = s0 + v0;
    s1 = s1 - v0;
    func_08A7FADC(a0, a1, a2, 0, 0);
    goto L_08A80348;
L_08A80348:;
    v1 = LD_U8(s0);
    goto L_08A8030C;
L_08A80350:;
    v1 = LD_U8(s5+40);
    v0 = 255;
    v0 = v0 << (a0 & 31);
    v1 = v1 | v0;
    ST8(s5+40, v1);
    goto L_08A80220;
}

/* 08A80368 */
u64 func_08A80368(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_08A80368:;
    a3 = a0 + 0;
    a0 = (u32)(s32)LD_S8(a0);
    t2 = a1 + 0;
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A803C0; }
    goto L_08A8037C;
L_08A8037C:;
    t0 = 0x9ccf0000u;
    v0 = D_08AE9044 - (-28604);
    a2 = a0 + 0;
    t1 = v0 - 28604;
    t0 = t0 | 0x9319;
    goto L_08A80390;
L_08A80390:;
    v0 = a2 + t1;
    { s64 p_ = (s64)(s32)a1 * (s32)t0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = LD_U8(v0);
    a3 = a3 + 1;
    a0 = (u32)(s32)LD_S8(a3);
    v1 = v1 & 0x1;
    v0 = a2 + 32;
    if (v1 != 0) a2 = v0;
    a1 = lo;
    a1 = a1 + a2;
    cnd_ = a0 != 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08A80390; }
    goto L_08A803C0;
L_08A803C0:;
    { u32 x_ = a1, y_ = t2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v0 = hi;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A803CC */
rv_t func_08A803CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A803CC:;
    sp = sp - 16;
    s0 = a0 + 0;
    a1 = LD32(a0);
    a0 = 0 + 0;
    { rv_t r_ = func_08A81438(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A803E8;
L_08A803E8:;
    a1 = LD32(s0+4);
    a0 = 0 + 0;
    { rv_t r_ = func_08A81438(a0, a1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A803F4;
L_08A803F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A80404 */
rv_t func_08A80404(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A80404:;
    sp = sp - 16;
    a0 = LD32(a0);
    { u64 r_ = func_08A80368(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A80414;
L_08A80414:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A80420 */
rv_t func_08A80420(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A80420:;
    sp = sp - 16;
    a0 = LD32(a0);
    a1 = LD32(a1);
    { u64 r_ = func_08A89724(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A80434;
L_08A80434:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A80440 */
u32 func_08A80440(u32 a0)
{
    u32 v0 = 0;
L_08A80440:;
    v0 = LD32(a0+28);
    return v0;
}

/* 08A80448 */
u32 func_08A80448(u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A80448:;
    sp = sp - 16;
    a0 = 44;
    s2 = a2 & 0xffff;
    s1 = a1 + 0;
    { u64 r_ = func_08A6AF74(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8046C;
L_08A8046C:;
    s0 = v0 + 0;
    a3 = RS_FADDR(func_08A80404, 0x08A80404u) - (1028);
    t0 = RS_FADDR(func_08A80420, 0x08A80420u) - (1056);
    t1 = RS_FADDR(func_08A803CC, 0x08A803CCu) - (972);
    a3 = a3 + 1028;
    t0 = t0 + 1056;
    t1 = t1 + 972;
    a1 = 8;
    a2 = 4;
    a0 = 8;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A804D8; }
    goto L_08A8049C;
L_08A8049C:;
    v0 = func_08A840C0(a0, a1, a2, a3, t0, t1, 0, 0);
    goto L_08A804A4;
L_08A804A4:;
    ST32(s0+24, v0);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A804F0; }
    goto L_08A804B0;
L_08A804B0:;
    ST32(s0, s1);
    v0 = s0 + 0;
    ST16(s0+4, s2);
    ST8(s0+20, 0);
    ST8(s0+21, 0);
    ST32(s0+36, 0);
    ST32(s0+28, 0);
    ST32(s0+16, 0);
    ST32(s0+8, 0);
    ST16(s0+12, 0);
    goto L_08A804D8;
L_08A804D8:;
    sp = sp + 16;
    return v0;
L_08A804F0:;
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A804F8;
L_08A804F8:;
    v0 = 0 + 0;
    goto L_08A804D8;
}

/* 08A80500 */
void func_08A80500(u32 a0, u32 a1)
{
L_08A80500:;
    ST8(a0+21, a1);
    return;
}

/* 08A80508 */
void func_08A80508(u32 a0, u32 a1, u32 a2)
{
L_08A80508:;
    ST16(a0+12, a2);
    ST32(a0+8, a1);
    return;
}

/* 08A80514 */
void func_08A80514(u32 a0, u32 a1)
{
L_08A80514:;
    ST32(a0+16, a1);
    return;
}

/* 08A8051C */
void func_08A8051C(u32 a0, u32 a1)
{
L_08A8051C:;
    ST8(a0+20, a1);
    return;
}

/* 08A80524 */
u32 func_08A80524(u32 a0)
{
    u32 v0 = 0;
L_08A80524:;
    v0 = LD_U8(a0+20);
    return v0;
}

/* 08A8052C */
u32 func_08A8052C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_08A8052C:;
    v0 = D_08C32C84 - (11396);
    v1 = LD32(v0+11396);
    v0 = a0 ^ v1;
    v0 = v0 < 0x1u;
    return v0;
}

/* 08A80540 */
rv_t func_08A80540(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A80540:;
    sp = sp - 16;
    v0 = a1 < 0x8u;
    s2 = a0 + 0;
    s1 = a2 + 0;
    s0 = a3 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A80618; }
    goto L_08A80568;
L_08A80568:;
    v1 = D_08AE8CE8 - (-29464);
    v0 = a1 << 2;
    v1 = v1 - 29464;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A80584u: goto L_08A80584; case 0x08A80618u: goto L_08A80618; case 0x08A8066Cu: goto L_08A8066C; case 0x08A806ACu: goto L_08A806AC; case 0x08A806E0u: goto L_08A806E0; case 0x08A80730u: goto L_08A80730; case 0x08A80744u: goto L_08A80744; default: rs_break(0, 0x08a8057c); }
L_08A80584:;
    v0 = LD32(a3+1588);
    a3 = LD32(a3+1592);
    a0 = s0 + 0;
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A80598;
L_08A80598:;
    v1 = LD_U8(s1+20);
    v0 = v1 & 0x3;
    cnd_ = v0 == 0;
    v0 = v1 & 0x2c;
    if (cnd_) { goto L_08A805B4; }
    goto L_08A805A8;
L_08A805A8:;
    v0 = v1 & 0x40;
    cnd_ = v0 != 0;
    v0 = v1 & 0x2c;
    if (cnd_) { goto L_08A80618; }
    goto L_08A805B4;
L_08A805B4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A80618; }
    goto L_08A805BC;
L_08A805BC:;
    v0 = LD32(s0+1576);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A80618; }
    goto L_08A805C8;
L_08A805C8:;
    v0 = LD_U8(s1+21);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a3 = 2;
    if (cnd_) { goto L_08A805F4; }
    goto L_08A805D8;
L_08A805D8:;
    v0 = LD32(s0+76);
    cnd_ = v0 == 0;
    a3 = 1;
    if (cnd_) { goto L_08A805F4; }
    goto L_08A805E4;
L_08A805E4:;
    v0 = LD32(s0+64);
    cnd_ = v0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A805F4; }
    goto L_08A805F0;
L_08A805F0:;
    a3 = 1;
    goto L_08A805F4;
L_08A805F4:;
    v0 = LD_U16(s2+1484);
    v0 = v0 & 0x80;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A8065C; }
    goto L_08A80604;
L_08A80604:;
    a1 = s1 + 0;
    a2 = 0 + 0;
    t0 = 1;
    goto L_08A80610;
L_08A80610:;
    { u64 r_ = func_08A7F264(a0, a1, a2, a3, t0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A80618;
L_08A80618:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08A80634; }
    goto L_08A80620;
L_08A80620:;
    v1 = LD32(s1);
    v0 = LD32(s0+1580);
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD_U16(s1+4); goto L_08A80648; }
    goto L_08A80630;
L_08A80630:;
    goto L_08A80634;
L_08A80634:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A80648:;
    v0 = LD_U16(s0+1584);
    cnd_ = v1 == v0;
    if (cnd_) { ST32(s0+1580, 0); goto L_08A80630; }
    goto L_08A80654;
L_08A80654:;
    goto L_08A80634;
L_08A8065C:;
    a1 = s1 + 0;
    a2 = 0 + 0;
    t0 = 0 + 0;
    goto L_08A80610;
L_08A8066C:;
    v0 = LD_U8(a2+20);
    v0 = v0 & 0x43;
    cnd_ = v0 != 0;
    v0 = LD32(a3+1588);
    if (cnd_) { goto L_08A8069C; }
    goto L_08A8067C;
L_08A8067C:;
    a3 = LD32(a3+1592);
    a0 = s0 + 0;
    a1 = 2;
    goto L_08A80688;
L_08A80688:;
    a2 = s1 + 0;
    goto L_08A8068C;
L_08A8068C:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A80694;
L_08A80694:;
    goto L_08A80618;
L_08A8069C:;
    a3 = LD32(a3+1592);
    a0 = s0 + 0;
    a1 = 1;
    goto L_08A80688;
L_08A806AC:;
    v0 = LD_U8(a2+20);
    v0 = v0 & 0x2c;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = a3 + 0; goto L_08A806D0; }
    goto L_08A806BC;
L_08A806BC:;
    v0 = LD32(s0+1588);
    goto L_08A806C0;
L_08A806C0:;
    a3 = LD32(s0+1592);
    a0 = s0 + 0;
    a1 = 3;
    goto L_08A80688;
L_08A806D0:;
    a1 = a2 + 0;
    func_08A7F954(a0, a1);
    goto L_08A806D8;
L_08A806D8:;
    v0 = LD32(s0+1588);
    goto L_08A806C0;
L_08A806E0:;
    v0 = LD32(a3+1572);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A80720; }
    goto L_08A806EC;
L_08A806EC:;
    a0 = LD32(s2+4);
    v0 = func_08A83A88(a0);
    goto L_08A806F4;
L_08A806F4:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+1588); goto L_08A8070C; }
    goto L_08A806FC;
L_08A806FC:;
    v0 = LD32(s0+16);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A80618; }
    goto L_08A80708;
L_08A80708:;
    v0 = LD32(s0+1588);
    goto L_08A8070C;
L_08A8070C:;
    a3 = LD32(s0+1592);
    a0 = s0 + 0;
    a1 = 4;
    goto L_08A80718;
L_08A80718:;
    a2 = 0 + 0;
    goto L_08A8068C;
L_08A80720:;
    a0 = s2 + 0;
    f0 = func_08A820AC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A80728;
L_08A80728:;
    goto L_08A806EC;
L_08A80730:;
    v0 = LD32(a3+1588);
    a3 = LD32(a3+1592);
    a0 = s0 + 0;
    a1 = 5;
    goto L_08A80718;
L_08A80744:;
    a1 = LD32(a3+1260);
    a0 = a3 + 0;
    func_08A7F1E4(a0, a1);
    goto L_08A80750;
L_08A80750:;
    goto L_08A80618;
}

/* 08A80758 */
rv_t func_08A80758(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A80758:;
    sp = sp - 16;
    v0 = 1;
    s1 = a2 + 0;
    s0 = a3 + 0;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08A80814; }
    goto L_08A80778;
L_08A80778:;
    cnd_ = a1 == 0;
    if (cnd_) { v0 = LD32(a3+1588); goto L_08A80804; }
    goto L_08A80780;
L_08A80780:;
    v0 = 2;
    cnd_ = a1 == v0;
    if (cnd_) { v0 = LD32(a3+1588); goto L_08A807F4; }
    goto L_08A8078C;
L_08A8078C:;
    v0 = 3;
    cnd_ = a1 == v0;
    if (cnd_) { v0 = LD32(a3+1588); goto L_08A807D8; }
    goto L_08A80798;
L_08A80798:;
    cnd_ = s1 == 0;
    if (cnd_) {  goto L_08A807B4; }
    goto L_08A807A0;
L_08A807A0:;
    v1 = LD32(s1);
    v0 = LD32(s0+1580);
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD_U16(s1+4); goto L_08A807C4; }
    goto L_08A807B0;
L_08A807B0:;
    goto L_08A807B4;
L_08A807B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A807C4:;
    v0 = LD_U16(s0+1584);
    cnd_ = v1 == v0;
    if (cnd_) { ST32(s0+1580, 0); goto L_08A807B0; }
    goto L_08A807D0;
L_08A807D0:;
    goto L_08A807B4;
L_08A807D8:;
    a3 = LD32(a3+1592);
    a0 = s0 + 0;
    a1 = 6;
    goto L_08A807E4;
L_08A807E4:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A807EC;
L_08A807EC:;
    goto L_08A80798;
L_08A807F4:;
    a3 = LD32(a3+1592);
    a0 = s0 + 0;
    a1 = 4;
    goto L_08A807E4;
L_08A80804:;
    a3 = LD32(a3+1592);
    a0 = s0 + 0;
    a1 = 1;
    goto L_08A807E4;
L_08A80814:;
    v0 = LD32(a3+1588);
    a3 = LD32(a3+1592);
    a0 = s0 + 0;
    a1 = 2;
    goto L_08A807E4;
}

/* 08A80828 */
u32 func_08A80828(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, u32 sp_in)
{
    u32 v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48); memcpy(stack_ + 48, PTR(sp_in), 16); /* stack-passed arguments */
L_08A80828:;
    sp = sp - 48;
    fp = t1 + 0;
    s7 = t0 + 0;
    s6 = t3 + 0;
    s5 = a0 + 0;
    a0 = 1596;
    s4 = a3 + 0;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s1 = t2 + 0;
    cnd_ = t2 != 0;
    if (cnd_) { goto L_08A80890; }
    goto L_08A8087C;
L_08A8087C:;
    v0 = D_08C320DC - (8412);
    v1 = LD32(v0+8412);
    v0 = 1;
    cnd_ = v1 != v0;
    t4 = 0 + 0;
    if (cnd_) { goto L_08A80900; }
    goto L_08A80890;
L_08A80890:;
    { u64 r_ = func_08A6AF74(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A80898;
L_08A80898:;
    t2 = RS_FADDR(func_08A80540, 0x08A80540u) - (1344);
    s0 = v0 + 0;
    a0 = v0 + 76;
    a2 = s2 + 0;
    a3 = s3 + 0;
    t0 = s4 + 0;
    t2 = t2 + 1344;
    t1 = s1 + 0;
    t3 = v0 + 0;
    a1 = s5 + 0;
    cnd_ = v0 == 0;
    t4 = 0 + 0;
    if (cnd_) { goto L_08A80900; }
    goto L_08A808C8;
L_08A808C8:;
    ST32(v0+1588, s6);
    v0 = LD32(sp+48);
    ST32(s0+1576, 0);
    ST32(s0+1592, v0);
    func_08A814D8(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A808DC;
L_08A808DC:;
    t0 = RS_FADDR(func_08A80758, 0x08A80758u) - (1880);
    a1 = s7 + 0;
    a2 = fp + 0;
    a3 = s1 + 0;
    t0 = t0 + 1880;
    a0 = s0 + 0;
    t1 = s0 + 0;
    func_08A7F130(a0, a1, a2, a3, t0, t1);
    goto L_08A808FC;
L_08A808FC:;
    t4 = s0 + 0;
    goto L_08A80900;
L_08A80900:;
    v0 = t4 + 0;
    sp = sp + 48;
    return v0;
}

/* 08A80934 */
void func_08A80934(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A80934:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 76;
    func_08A82130(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A8094C;
L_08A8094C:;
    a0 = s0 + 0;
    func_08A7F220(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08A80954;
L_08A80954:;
    a0 = s0 + 0;
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8095C;
L_08A8095C:;
    sp = sp + 16;
    return;
}

/* 08A8096C */
rv_t func_08A8096C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[320] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 320);
L_08A8096C:;
    sp = sp - 320;
    v0 = D_08AE8D08 - (-29432);
    fp = t1 + 0;
    s6 = t0 + 0;
    s5 = a3 + 0;
    s3 = 0 + 0;
    s2 = 0 + 0;
    s1 = a0 + 0;
    a0 = sp + 1;
    s0 = a2 + 0;
    a2 = 255;
    v1 = LD_U8(v0-29432);
    ST32(sp+256, a1);
    a1 = 0 + 0;
    ST8(sp, v1);
    ST32(sp+260, t2);
    ST32(sp+264, t3);
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A809DC;
L_08A809DC:;
    ST32(s1+1572, s0);
    cnd_ = (s32)s6 <= 0;
    ST32(s1+64, 0);
    if (cnd_) { goto L_08A80A58; }
    goto L_08A809E8;
L_08A809E8:;
    v0 = D_08B1D84C - (-10164);
    s4 = v0 - 10164;
    s7 = D_08AE8E08 - (-29176);
    s0 = s5 + s2;
    goto L_08A809F8;
L_08A809F8:;
    v0 = LD_U8(s0);
    s2 = s2 + 1;
    v0 = v0 << 2;
    v0 = v0 + s4;
    a0 = LD32(v0);
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A80A10;
L_08A80A10:;
    v0 = s3 + v0;
    v0 = v0 + 1;
    v0 = (s32)v0 < 256;
    a0 = sp + s3;
    cnd_ = v0 == 0;
    a1 = s7 - 29176;
    if (cnd_) { goto L_08A80A58; }
    goto L_08A80A28;
L_08A80A28:;
    v0 = LD_U8(s0);
    v0 = v0 << 2;
    v0 = v0 + s4;
    a2 = LD32(v0);
    { rv_t r_ = func_08A89470(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A80A3C;
L_08A80A3C:;
    a1 = LD_U8(s0);
    a0 = s1 + 0;
    s3 = s3 + v0;
    func_08A7F92C(a0, a1);
    goto L_08A80A4C;
L_08A80A4C:;
    v0 = (s32)s2 < (s32)s6;
    cnd_ = v0 != 0;
    s0 = s5 + s2;
    if (cnd_) { goto L_08A809F8; }
    goto L_08A80A58;
L_08A80A58:;
    a3 = LD32(sp+260);
    t0 = LD32(sp+264);
    a0 = s1 + 76;
    a2 = fp + 0;
    a1 = sp + 0;
    { rv_t r_ = func_08A81BEC(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A80A70;
L_08A80A70:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A80AD4; }
    goto L_08A80A78;
L_08A80A78:;
    v0 = LD32(sp+256);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A80AD8; }
    goto L_08A80A84;
L_08A80A84:;
    v1 = LD32(s1+76);
    v0 = 3;
    cnd_ = v1 == v0;
    s0 = 3;
    if (cnd_) { goto L_08A80AA0; }
    goto L_08A80A94;
L_08A80A94:;
    v0 = LD32(s1+16);
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_08A80ADC; }
    goto L_08A80AA0;
L_08A80AA0:;
    a0 = 10;
    func_08A6B694(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08A80AA8;
L_08A80AA8:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A80C3C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A80AB0;
L_08A80AB0:;
    a0 = v0 + 0;
    v0 = LD32(s1+76);
    cnd_ = v0 == s0;
    v1 = a0 < 0x1u;
    if (cnd_) { goto L_08A80AA0; }
    goto L_08A80AC0;
L_08A80AC0:;
    v0 = LD32(s1+16);
    v0 = (s32)0 < (s32)v0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A80AA0; }
    goto L_08A80AD4;
L_08A80AD4:;
    goto L_08A80AD8;
L_08A80AD8:;
    goto L_08A80ADC;
L_08A80ADC:;
    v0 = a0 + 0;
    sp = sp + 320;
    return (rv_t){ v0, v1, f0 };
}

/* 08A80B08 */
rv_t func_08A80B08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2)
{
    u32 v0 = 0, v1 = 0, t3 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A80B08:;
    sp = sp - 16;
    t3 = t2 + 0;
    t2 = 128;
    { rv_t r_ = func_08A8096C(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A80B1C;
L_08A80B1C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A80B28 */
rv_t func_08A80B28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A80B28:;
    sp = sp - 32;
    s3 = a0 + 0;
    s2 = a1 + 0;
    s1 = a3 & 0xffff;
    s0 = a2 & 0xffff;
    func_08A80C6C(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A80B54;
L_08A80B54:;
    a1 = s0 + 0;
    a3 = LD32(s3);
    a0 = s3 + 76;
    a2 = s1 + 0;
    s0 = 0 + 0;
    { u64 r_ = func_08A81E14(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A80B6C;
L_08A80B6C:;
    cnd_ = s2 != 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_08A80BC0; }
    goto L_08A80B74;
L_08A80B74:;
    v0 = LD32(s3+76);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A80B8C; }
    goto L_08A80B80;
L_08A80B80:;
    v0 = LD32(s3+16);
    cnd_ = (s32)v0 <= 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_08A80BC0; }
    goto L_08A80B8C;
L_08A80B8C:;
    a0 = 10;
    func_08A6B694(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08A80B94;
L_08A80B94:;
    a0 = s3 + 0;
    { rv_t r_ = func_08A80C3C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A80B9C;
L_08A80B9C:;
    s0 = v0 + 0;
    v0 = LD32(s3+76);
    cnd_ = v0 == 0;
    v1 = s0 < 0x1u;
    if (cnd_) { goto L_08A80B8C; }
    goto L_08A80BAC;
L_08A80BAC:;
    v0 = LD32(s3+16);
    v0 = (s32)0 < (s32)v0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_08A80B8C; }
    goto L_08A80BC0;
L_08A80BC0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A80BDC */
u32 func_08A80BDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A80BDC:;
    sp = sp - 16;
    s0 = a2 & 0xffff;
    s0 = WSBH(s0);
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = s0 & 0xffff;
    s1 = s1 + 76;
    s2 = a3 + 0;
    v0 = sceNetInetInetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A80C10;
L_08A80C10:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    a2 = s0 + 0;
    a3 = s2 + 0;
    v0 = func_08A836D4(a0, a1, a2, a3, 0, 0);
    goto L_08A80C24;
L_08A80C24:;
    sp = sp + 16;
    return v0;
}

/* 08A80C3C */
rv_t func_08A80C3C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A80C3C:;
    sp = sp - 16;
    s0 = a0 + 0;
    s0 = s0 + 76;
    func_08A7F8B4(a0, t1, t2, t3);
    goto L_08A80C54;
L_08A80C54:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A83860(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A80C5C;
L_08A80C5C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A80C6C */
void func_08A80C6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A80C6C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 76;
    f0 = func_08A820AC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A80C84;
L_08A80C84:;
    a0 = s0 + 0;
    func_08A7F1EC(a0);
    goto L_08A80C8C;
L_08A80C8C:;
    sp = sp + 16;
    return;
}

/* 08A80C9C */
void func_08A80C9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A80C9C:;
    sp = sp - 16;
    s0 = a0 + 0;
    s0 = s0 + 76;
    func_08A80C6C(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A80CB4;
L_08A80CB4:;
    a0 = s0 + 0;
    func_08A812F4(a0);
    goto L_08A80CBC;
L_08A80CBC:;
    sp = sp + 16;
    return;
L_08A80CCC:;
    v0 = D_08AE8E0C - (-29172);
    v1 = a1 < 0x7u;
    cnd_ = v1 == 0;
    v0 = v0 - 29172;
    if (cnd_) { goto L_08A80D48; }
    goto L_08A80CDC;
L_08A80CDC:;
    v1 = D_08AE8EA0 - (-29024);
    v0 = a1 << 2;
    v1 = v1 - 29024;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A80CF8u: goto L_08A80CF8; case 0x08A80D04u: goto L_08A80D04; case 0x08A80D10u: goto L_08A80D10; case 0x08A80D1Cu: goto L_08A80D1C; case 0x08A80D28u: goto L_08A80D28; case 0x08A80D34u: goto L_08A80D34; case 0x08A80D40u: goto L_08A80D40; default: rs_break(0, 0x08a80cf0); }
L_08A80CF8:;
    v0 = D_08AE8E10 - (-29168);
    v0 = v0 - 29168;
    return;
L_08A80D04:;
    v0 = D_08AE8E18 - (-29160);
    v0 = v0 - 29160;
    return;
L_08A80D10:;
    v0 = D_08AE8E30 - (-29136);
    v0 = v0 - 29136;
    return;
L_08A80D1C:;
    v0 = D_08AE8E44 - (-29116);
    v0 = v0 - 29116;
    return;
L_08A80D28:;
    v0 = D_08AE8E58 - (-29096);
    v0 = v0 - 29096;
    return;
L_08A80D34:;
    v0 = D_08AE8E6C - (-29076);
    v0 = v0 - 29076;
    return;
L_08A80D40:;
    v0 = D_08AE8E84 - (-29052);
    v0 = v0 - 29052;
    goto L_08A80D48;
L_08A80D48:;
    return;
}

/* 08A80D50 */
u32 func_08A80D50(u32 a0, u32 a1)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A80D50:;
    sp = sp - 16;
    a0 = a0 + 76;
    v0 = func_08A81278(a0, a1);
    goto L_08A80D60;
L_08A80D60:;
    sp = sp + 16;
    return v0;
}

/* 08A80D6C */
u32 func_08A80D6C(u32 a0)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A80D6C:;
    sp = sp - 16;
    a0 = a0 + 76;
    v0 = func_08A8125C(a0);
    goto L_08A80D7C;
L_08A80D7C:;
    sp = sp + 16;
    return v0;
}

/* 08A80D88 */
void func_08A80D88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A80D88:;
    sp = sp - 16;
    a0 = a0 + 76;
    func_08A81034(a0, a1, a2, a3, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A80D98;
L_08A80D98:;
    sp = sp + 16;
    return;
}

/* 08A80DA4 */
u32 func_08A80DA4(u32 a0)
{
    u32 v0 = 0;
L_08A80DA4:;
    v0 = LD32(a0+1260);
    return v0;
}

/* 08A80DAC */
rv_t func_08A80DAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A80DAC:;
    sp = sp - 16;
    s2 = D_08C32C8C - (11404);
    v1 = a1 + 0;
    a2 = 0 + 0;
    v0 = LD32(s2+11404);
    a0 = LD32(a0);
    s1 = LD32(v1);
    a1 = LD32(v0+1176);
    { rv_t r_ = func_08A7FBC8(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A80DE0;
L_08A80DE0:;
    s0 = v0 + 0;
    v0 = LD32(s2+11404);
    a0 = s1 + 0;
    a2 = 0 + 0;
    a1 = LD32(v0+1176);
    { rv_t r_ = func_08A7FBC8(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A80DF8;
L_08A80DF8:;
    a0 = LD32(s2+11404);
    s0 = s0 - v0;
    v1 = 0 - s0;
    v0 = LD32(a0+1180);
    if (v0 == 0) s0 = v1;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A80E28 */
rv_t func_08A80E28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A80E28:;
    sp = sp - 32;
    s3 = D_08C32C8C - (11404);
    v1 = a1 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    v0 = LD32(s3+11404);
    a0 = LD32(a0);
    s2 = LD32(v1);
    a1 = LD32(v0+1176);
    { u64 r_ = func_08A7FC74(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A80E64;
L_08A80E64:;
    s0 = v0 + 0;
    v0 = LD32(s3+11404);
    a2 = 0 + 0;
    a3 = 0 + 0;
    a0 = s2 + 0;
    a1 = LD32(v0+1176);
    s1 = v1 + 0;
    { u64 r_ = func_08A7FC74(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A80E84;
L_08A80E84:;
    a2 = v0 + 0;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a3 = v1 + 0;
    { u64 r_ = func_08A93464(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A80E98;
L_08A80E98:;
    a3 = v1 + 0;
    v1 = LD32(s3+11404);
    a2 = v0 + 0;
    a0 = a2 + 0;
    v0 = LD32(v1+1180);
    cnd_ = v0 != 0;
    a1 = a3 + 0;
    if (cnd_) { goto L_08A80EC8; }
    goto L_08A80EB4;
L_08A80EB4:;
    { u64 r_ = func_08A93F54(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A80EBC;
L_08A80EBC:;
    a2 = v0 + 0;
    a3 = v1 + 0;
    a0 = a2 + 0;
    goto L_08A80EC8;
L_08A80EC8:;
    a1 = a3 + 0;
    { rv_t r_ = func_08A93FCC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A80ED0;
L_08A80ED0:;
    f1 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_08A80EF8; }
    goto L_08A80EE4;
L_08A80EE4:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    v0 = (u32)-1;
    if (cnd_) { goto L_08A80EF8; }
    goto L_08A80EF4;
L_08A80EF4:;
    v0 = 0 + 0;
    goto L_08A80EF8;
L_08A80EF8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A80F14 */
rv_t func_08A80F14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A80F14:;
    sp = sp - 32;
    s2 = D_08C32C8C - (11404);
    v1 = a1 + 0;
    s0 = D_08AE8EBC - (-28996);
    s0 = s0 - 28996;
    a2 = s0 + 0;
    v0 = LD32(s2+11404);
    a0 = LD32(a0);
    s1 = LD32(v1);
    a1 = LD32(v0+1176);
    { rv_t r_ = func_08A7FB7C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A80F54;
L_08A80F54:;
    s3 = v0 + 0;
    v0 = LD32(s2+11404);
    a2 = s0 + 0;
    a0 = s1 + 0;
    a1 = LD32(v0+1176);
    { rv_t r_ = func_08A7FB7C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A80F6C;
L_08A80F6C:;
    a1 = v0 + 0;
    a0 = s3 + 0;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A80F78;
L_08A80F78:;
    a0 = LD32(s2+11404);
    v1 = LD32(a0+1180);
    a1 = 0 - v0;
    if (v1 == 0) v0 = a1;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A80FA4 */
rv_t func_08A80FA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A80FA4:;
    sp = sp - 32;
    s2 = D_08C32C8C - (11404);
    v1 = a1 + 0;
    s0 = D_08AE8EBC - (-28996);
    s0 = s0 - 28996;
    a2 = s0 + 0;
    v0 = LD32(s2+11404);
    a0 = LD32(a0);
    s1 = LD32(v1);
    a1 = LD32(v0+1176);
    { rv_t r_ = func_08A7FB7C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A80FE4;
L_08A80FE4:;
    s3 = v0 + 0;
    v0 = LD32(s2+11404);
    a2 = s0 + 0;
    a0 = s1 + 0;
    a1 = LD32(v0+1176);
    { rv_t r_ = func_08A7FB7C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A80FFC;
L_08A80FFC:;
    a1 = v0 + 0;
    a0 = s3 + 0;
    { u64 r_ = func_08A89724(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A81008;
L_08A81008:;
    a0 = LD32(s2+11404);
    v1 = LD32(a0+1180);
    a1 = 0 - v0;
    if (v1 == 0) v0 = a1;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A81034 */
void func_08A81034(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A81034:;
    v0 = RS_FADDR(func_08A80E28, 0x08A80E28u) - (3624);
    sp = sp - 16;
    v1 = v0 + 3624;
    v0 = 1;
    t0 = a0 + 0;
    cnd_ = a3 == v0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08A81078; }
    goto L_08A81054;
L_08A81054:;
    v0 = RS_FADDR(func_08A80DAC, 0x08A80DACu) - (3500);
    cnd_ = a3 == 0;
    v1 = v0 + 3500;
    if (cnd_) { goto L_08A81078; }
    goto L_08A81060;
L_08A81060:;
    v1 = RS_FADDR(func_08A80F14, 0x08A80F14u) - (3860);
    v0 = 2;
    cnd_ = a3 == v0;
    v1 = v1 + 3860;
    if (cnd_) { goto L_08A81078; }
    goto L_08A81070;
L_08A81070:;
    v1 = RS_FADDR(func_08A80FA4, 0x08A80FA4u) - (4004);
    v1 = v1 + 4004;
    goto L_08A81078;
L_08A81078:;
    ST32(t0+1180, a0);
    v0 = D_08C32C8C - (11404);
    a1 = v1 + 0;
    ST32(t0+1176, a2);
    a0 = LD32(t0+4);
    ST32(v0+11404, t0);
    func_08A83CD0(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A81094;
L_08A81094:;
    sp = sp + 16;
    return;
}

/* 08A810A0 */
float func_08A810A0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A810A0:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = LD32(a0+4);
    ST32(sp, a1);
    a1 = sp + 0;
    func_08A83AC4(a0, a1, t1, t2, t3);
    goto L_08A810C0;
L_08A810C0:;
    v0 = LD32(s0+1160);
    a3 = LD32(s0+1172);
    a2 = LD32(sp);
    a0 = s0 + 0;
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A810D8;
L_08A810D8:;
    sp = sp + 32;
    return f0;
}

/* 08A810E8 */
u32 func_08A810E8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A810E8:;
    sp = sp - 32;
    s5 = a2 & 0xffff;
    s4 = a0 + 0;
    s3 = a1 + 0;
    s1 = 0 + 0;
    a0 = LD32(a0+4);
    v0 = func_08A83A88(a0);
    goto L_08A81120;
L_08A81120:;
    cnd_ = (s32)v0 <= 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A81158; }
    goto L_08A81128;
L_08A81128:;
    a0 = LD32(s4+4);
    goto L_08A8112C;
L_08A8112C:;
    a1 = s1 + 0;
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A81134;
L_08A81134:;
    s0 = LD32(v0);
    a0 = s0 + 0;
    v0 = func_08A7FD00(a0);
    goto L_08A81140;
L_08A81140:;
    cnd_ = v0 == s3;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A81184; }
    goto L_08A81148;
L_08A81148:;
    s1 = s1 + 1;
    v0 = (s32)s1 < (s32)s2;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s4+4); goto L_08A8112C; }
    goto L_08A81158;
L_08A81158:;
    v1 = (u32)-1;
    goto L_08A81160;
L_08A81160:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_08A81184:;
    v0 = func_08A7FD18(a0);
    goto L_08A8118C;
L_08A8118C:;
    cnd_ = v0 != s5;
    v1 = s1 + 0;
    if (cnd_) { goto L_08A81148; }
    goto L_08A81194;
L_08A81194:;
    goto L_08A81160;
}

/* 08A8119C */
void func_08A8119C(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A8119C:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a0+1492);
    a0 = a1 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A811CC; }
    goto L_08A811C4;
L_08A811C4:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    goto L_08A811CC;
L_08A811CC:;
    func_08A7FD74(a0, a1);
    goto L_08A811D4;
L_08A811D4:;
    ST32(s1+1492, s0);
    sp = sp + 16;
    return;
}

/* 08A811EC */
void func_08A811EC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A811EC:;
    sp = sp - 16;
    s2 = a1 + 0;
    s0 = a0 + 0;
    a0 = LD32(a0+4);
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A81210;
L_08A81210:;
    s1 = LD32(v0);
    a3 = LD32(s0+1172);
    v0 = LD32(s0+1160);
    a2 = s1 + 0;
    a0 = s0 + 0;
    t_ = v0;
    a1 = 2;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8122C;
L_08A8122C:;
    a0 = LD32(s0+4);
    a1 = s2 + 0;
    { u64 r_ = func_08A83C44(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A81238;
L_08A81238:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    func_08A8119C(a0, a1);
    goto L_08A81244;
L_08A81244:;
    sp = sp + 16;
    return;
}

/* 08A8125C */
u32 func_08A8125C(u32 a0)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A8125C:;
    sp = sp - 16;
    a0 = LD32(a0+4);
    v0 = func_08A83A88(a0);
    goto L_08A8126C;
L_08A8126C:;
    sp = sp + 16;
    return v0;
}

/* 08A81278 */
u32 func_08A81278(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A81278:;
    sp = sp - 16;
    a0 = LD32(a0+4);
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A81288;
L_08A81288:;
    v0 = LD32(v0);
    sp = sp + 16;
    return v0;
}

/* 08A81298 */
void func_08A81298(u32 a0)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A81298:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = LD32(a0+1492);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A812E4; }
    goto L_08A812B8;
L_08A812B8:;
    ST32(sp, a0);
    goto L_08A812BC;
L_08A812BC:;
    v0 = func_08A7FD7C(a0);
    goto L_08A812C4;
L_08A812C4:;
    s0 = v0 + 0;
    a0 = sp + 0;
    func_08A7FAA8(a0, 0, 0, 0);
    goto L_08A812D0;
L_08A812D0:;
    ST32(sp, s0);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A812BC; }
    goto L_08A812DC;
L_08A812DC:;
    ST32(s1+1492, 0);
    goto L_08A812E4;
L_08A812E4:;
    sp = sp + 32;
    return;
}

/* 08A812F4 */
void func_08A812F4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A812F4:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = 0 + 0;
    a0 = LD32(a0+4);
    v0 = func_08A83A88(a0);
    goto L_08A81318;
L_08A81318:;
    cnd_ = (s32)v0 <= 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A81348; }
    goto L_08A81320;
L_08A81320:;
    a0 = LD32(s1+4);
    goto L_08A81324;
L_08A81324:;
    a1 = s0 + 0;
    s0 = s0 + 1;
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A81330;
L_08A81330:;
    a1 = LD32(v0);
    a0 = s1 + 0;
    func_08A8119C(a0, a1);
    goto L_08A8133C;
L_08A8133C:;
    v0 = (s32)s0 < (s32)s2;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_08A81324; }
    goto L_08A81348;
L_08A81348:;
    a0 = LD32(s1+4);
    func_08A83EE8(a0);
    goto L_08A81350;
L_08A81350:;
    a0 = s1 + 0;
    func_08A81298(a0);
    goto L_08A81358;
L_08A81358:;
    sp = sp + 16;
    return;
}

/* 08A81370 */
void func_08A81370(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A81370:;
    sp = sp - 16;
    a1 = 100;
    s0 = a0 + 0;
    a2 = 0 + 0;
    a0 = 4;
    v0 = func_08A8399C(a0, a1, a2, t1, t2, t3);
    goto L_08A81390;
L_08A81390:;
    ST32(s0+4, v0);
    ST32(s0+1492, 0);
    sp = sp + 16;
    return;
}

/* 08A813A8 */
rv_t func_08A813A8(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A813A8:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    ST32(sp, a1);
    v0 = func_08A7FA00(t2, t3);
    goto L_08A813C8;
L_08A813C8:;
    a0 = v0 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_08A843B0(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A813D4;
L_08A813D4:;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A81408; }
    goto L_08A813E0;
L_08A813E0:;
    v0 = LD32(v0+4);
    a0 = LD32(v1);
    v0 = v0 + 1;
    ST32(v1+4, v0);
    goto L_08A813F0;
L_08A813F0:;
    v0 = a0 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A81408:;
    { u64 r_ = func_08A6B560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A81410;
L_08A81410:;
    ST32(sp, v0);
    a0 = s1 + 0;
    v0 = 1;
    ST32(sp+4, v0);
    v0 = func_08A7FA00(0, 0);
    goto L_08A81424;
L_08A81424:;
    a0 = v0 + 0;
    a1 = sp + 0;
    func_08A84270(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A81430;
L_08A81430:;
    a0 = LD32(sp);
    goto L_08A813F0;
}

/* 08A81438 */
rv_t func_08A81438(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A81438:;
    sp = sp - 32;
    s0 = a0 + 0;
    ST32(sp, a1);
    v0 = func_08A7FA00(t2, t3);
    goto L_08A81450;
L_08A81450:;
    a0 = v0 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_08A843B0(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8145C;
L_08A8145C:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A81478; }
    goto L_08A81464;
L_08A81464:;
    v0 = LD32(v0+4);
    a0 = s0 + 0;
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(v1+4, v0);
    if (cnd_) { goto L_08A81488; }
    goto L_08A81478;
L_08A81478:;
    goto L_08A8147C;
L_08A8147C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A81488:;
    v0 = func_08A7FA00(0, 0);
    goto L_08A81490;
L_08A81490:;
    a0 = v0 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_08A84318(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8149C;
L_08A8149C:;
    goto L_08A8147C;
}
