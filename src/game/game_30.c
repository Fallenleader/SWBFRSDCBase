#include "game.h"

/* 08AAFCDC */
rv_t func_08AAFCDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AAFCDC:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_088748BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAFCF4;
L_08AAFCF4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAFD00 */
rv_t func_08AAFD00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AAFD00:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08874924(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAFD18;
L_08AAFD18:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAFD24 */
rv_t func_08AAFD24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AAFD24:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_088749A0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAFD3C;
L_08AAFD3C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAFD48 */
u64 func_08AAFD48(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AAFD48:;
    sp = sp - 16;
    a3 = a0 + 0;
    a2 = 0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    v1 = LD_U16(a1+8);
    if (cnd_) { goto L_08AAFD88; }
    goto L_08AAFD68;
L_08AAFD68:;
    v0 = LD32(a0);
    goto L_08AAFD6C;
L_08AAFD6C:;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AAFDF0; }
    goto L_08AAFD78;
L_08AAFD78:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AAFD6C; }
    goto L_08AAFD88;
L_08AAFD88:;
    a0 = LD32(a3+4);
    goto L_08AAFD8C;
L_08AAFD8C:;
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AAFDD8; }
    goto L_08AAFD94;
L_08AAFD94:;
    v0 = LD32(a0);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AAFDBC; }
    goto L_08AAFDA0;
L_08AAFDA0:;
    v1 = a0 + 0;
    goto L_08AAFDA4;
L_08AAFDA4:;
    a0 = LD32(a0+4);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AAFDDC; }
    goto L_08AAFDB0;
L_08AAFDB0:;
    v0 = LD32(a0);
    cnd_ = v0 != a1;
    if (cnd_) { v1 = a0 + 0; goto L_08AAFDA4; }
    goto L_08AAFDBC;
L_08AAFDBC:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AAFDDC; }
    goto L_08AAFDC4;
L_08AAFDC4:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AAFDE8; }
    goto L_08AAFDCC;
L_08AAFDCC:;
    ST32(v1+4, v0);
    goto L_08AAFDD0;
L_08AAFDD0:;
    { u64 r_ = func_08832050(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAFDD8;
L_08AAFDD8:;
    goto L_08AAFDDC;
L_08AAFDDC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AAFDE8:;
    ST32(a3+4, v0);
    goto L_08AAFDD0;
L_08AAFDF0:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(a3+4); goto L_08AAFD8C; }
    goto L_08AAFDF8;
L_08AAFDF8:;
    s0 = LD32(a0+8);
    cnd_ = s0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AAFD88; }
    goto L_08AAFE04;
L_08AAFE04:;
    v0 = LD32(s0);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AAFE2C; }
    goto L_08AAFE10;
L_08AAFE10:;
    v1 = s0 + 0;
    goto L_08AAFE14;
L_08AAFE14:;
    s0 = LD32(s0+4);
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(a3+4); goto L_08AAFD8C; }
    goto L_08AAFE20;
L_08AAFE20:;
    v0 = LD32(s0);
    cnd_ = v0 != a1;
    if (cnd_) { v1 = s0 + 0; goto L_08AAFE14; }
    goto L_08AAFE2C;
L_08AAFE2C:;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(a3+4); goto L_08AAFD8C; }
    goto L_08AAFE34;
L_08AAFE34:;
    v0 = LD32(a3+8);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AAFE48; }
    goto L_08AAFE40;
L_08AAFE40:;
    ST8(s0+8, v0);
    goto L_08AAFDD8;
L_08AAFE48:;
    cnd_ = v1 == 0;
    v0 = LD32(s0+4);
    if (cnd_) { goto L_08AAFE5C; }
    goto L_08AAFE50;
L_08AAFE50:;
    ST32(v1+4, v0);
    goto L_08AAFE54;
L_08AAFE54:;
    a0 = s0 + 0;
    goto L_08AAFDD0;
L_08AAFE5C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AAFE6C; }
    goto L_08AAFE64;
L_08AAFE64:;
    ST32(a0+8, v0);
    goto L_08AAFE54;
L_08AAFE6C:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AAFE88; }
    goto L_08AAFE74;
L_08AAFE74:;
    ST32(a2+4, v0);
    goto L_08AAFE78;
L_08AAFE78:;
    { u64 r_ = func_08832008(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAFE80;
L_08AAFE80:;
    a0 = s0 + 0;
    goto L_08AAFDD0;
L_08AAFE88:;
    ST32(a3, v0);
    goto L_08AAFE78;
}

/* 08AAFE90 */
float func_08AAFE90(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AAFE90:;
    sp = sp - 32;
    s5 = 0 + 0;
    s3 = a0 + 0;
    s0 = LD32(a0+4);
    cnd_ = s0 == 0;
    ST32(a0+4, 0);
    if (cnd_) { goto L_08AAFF30; }
    goto L_08AAFEC4;
L_08AAFEC4:;
    v0 = LD32(s0);
    v1 = LD32(v0);
    a0 = LD32(v1-12);
    v0 = v0 + a0;
    s1 = LD_U16(v0+8);
    cnd_ = s1 == 0;
    s4 = LD32(s0+4);
    if (cnd_) { goto L_08AAFFCC; }
    goto L_08AAFEE0;
L_08AAFEE0:;
    v1 = LD32(s3);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08AAFEFC; }
    goto L_08AAFEEC;
L_08AAFEEC:;
    v0 = LD32(v1);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08AAFF54; }
    goto L_08AAFEFC;
L_08AAFEFC:;
    { rv_t r_ = func_08831FE8(t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAFF04;
L_08AAFF04:;
    v1 = v0 + 0;
    v0 = LD32(s3);
    ST32(v1, s1);
    ST32(v1+4, v0);
    ST32(v1+8, 0);
    ST32(s3, v1);
    goto L_08AAFF1C;
L_08AAFF1C:;
    v0 = LD32(v1+8);
    goto L_08AAFF20;
L_08AAFF20:;
    ST32(s0+4, v0);
    ST32(v1+8, s0);
    goto L_08AAFF28;
L_08AAFF28:;
    cnd_ = s4 != 0;
    s0 = s4 + 0;
    if (cnd_) { goto L_08AAFEC4; }
    goto L_08AAFF30;
L_08AAFF30:;
    sp = sp + 32;
    return f0;
L_08AAFF54:;
    v0 = LD32(v1);
    goto L_08AAFF58;
L_08AAFF58:;
    v0 = v0 < s1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AAFFAC; }
    goto L_08AAFF64;
L_08AAFF64:;
    s2 = v1 + 0;
    v1 = LD32(v1+4);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08AAFF58; }
    goto L_08AAFF74;
L_08AAFF74:;
    { rv_t r_ = func_08831FE8(t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAFF7C;
L_08AAFF7C:;
    v1 = v0 + 0;
    cnd_ = s2 == 0;
    ST32(v0+8, 0);
    if (cnd_) { goto L_08AAFF9C; }
    goto L_08AAFF88;
L_08AAFF88:;
    v0 = LD32(s2+4);
    ST32(v1+4, v0);
    ST32(s2+4, v1);
    goto L_08AAFF94;
L_08AAFF94:;
    ST32(v1, s1);
    goto L_08AAFF1C;
L_08AAFF9C:;
    v0 = LD32(s3);
    ST32(v1+4, v0);
    ST32(s3, v1);
    goto L_08AAFF94;
L_08AAFFAC:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08AAFF74; }
    goto L_08AAFFB4;
L_08AAFFB4:;
    v0 = LD32(v1);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AAFF20; }
    goto L_08AAFFC4;
L_08AAFFC4:;
    goto L_08AAFF74;
L_08AAFFCC:;
    cnd_ = s5 == 0;
    if (cnd_) { ST32(s3+4, s0); goto L_08AAFFD8; }
    goto L_08AAFFD4;
L_08AAFFD4:;
    ST32(s5+4, s0);
    goto L_08AAFFD8;
L_08AAFFD8:;
    s5 = s0 + 0;
    goto L_08AAFF28;
}

/* 08AAFFE0 */
void func_08AAFFE0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AAFFE0:;
    sp = sp - 16;
    a3 = a0 + 0;
    a2 = 0 + 0;
    v1 = LD32(a1);
    a0 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a1 + v0;
    cnd_ = a0 == 0;
    v1 = LD_U16(v0+8);
    if (cnd_) { goto L_08AB002C; }
    goto L_08AB000C;
L_08AB000C:;
    v0 = LD32(a0);
    goto L_08AB0010;
L_08AB0010:;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB0094; }
    goto L_08AB001C;
L_08AB001C:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AB0010; }
    goto L_08AB002C;
L_08AB002C:;
    a0 = LD32(a3+4);
    goto L_08AB0030;
L_08AB0030:;
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB007C; }
    goto L_08AB0038;
L_08AB0038:;
    v0 = LD32(a0);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AB0060; }
    goto L_08AB0044;
L_08AB0044:;
    v1 = a0 + 0;
    goto L_08AB0048;
L_08AB0048:;
    a0 = LD32(a0+4);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AB0080; }
    goto L_08AB0054;
L_08AB0054:;
    v0 = LD32(a0);
    cnd_ = v0 != a1;
    if (cnd_) { v1 = a0 + 0; goto L_08AB0048; }
    goto L_08AB0060;
L_08AB0060:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AB0080; }
    goto L_08AB0068;
L_08AB0068:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AB008C; }
    goto L_08AB0070;
L_08AB0070:;
    ST32(v1+4, v0);
    goto L_08AB0074;
L_08AB0074:;
    { u64 r_ = func_08832050(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB007C;
L_08AB007C:;
    goto L_08AB0080;
L_08AB0080:;
    sp = sp + 16;
    return;
L_08AB008C:;
    ST32(a3+4, v0);
    goto L_08AB0074;
L_08AB0094:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(a3+4); goto L_08AB0030; }
    goto L_08AB009C;
L_08AB009C:;
    s0 = LD32(a0+8);
    cnd_ = s0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB002C; }
    goto L_08AB00A8;
L_08AB00A8:;
    v0 = LD32(s0);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AB00D0; }
    goto L_08AB00B4;
L_08AB00B4:;
    v1 = s0 + 0;
    goto L_08AB00B8;
L_08AB00B8:;
    s0 = LD32(s0+4);
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(a3+4); goto L_08AB0030; }
    goto L_08AB00C4;
L_08AB00C4:;
    v0 = LD32(s0);
    cnd_ = v0 != a1;
    if (cnd_) { v1 = s0 + 0; goto L_08AB00B8; }
    goto L_08AB00D0;
L_08AB00D0:;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(a3+4); goto L_08AB0030; }
    goto L_08AB00D8;
L_08AB00D8:;
    v0 = LD32(a3+8);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AB00EC; }
    goto L_08AB00E4;
L_08AB00E4:;
    ST8(s0+8, v0);
    goto L_08AB007C;
L_08AB00EC:;
    cnd_ = v1 == 0;
    v0 = LD32(s0+4);
    if (cnd_) { goto L_08AB0100; }
    goto L_08AB00F4;
L_08AB00F4:;
    ST32(v1+4, v0);
    goto L_08AB00F8;
L_08AB00F8:;
    a0 = s0 + 0;
    goto L_08AB0074;
L_08AB0100:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB0110; }
    goto L_08AB0108;
L_08AB0108:;
    ST32(a0+8, v0);
    goto L_08AB00F8;
L_08AB0110:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AB012C; }
    goto L_08AB0118;
L_08AB0118:;
    ST32(a2+4, v0);
    goto L_08AB011C;
L_08AB011C:;
    { u64 r_ = func_08832008(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB0124;
L_08AB0124:;
    a0 = s0 + 0;
    goto L_08AB0074;
L_08AB012C:;
    ST32(a3, v0);
    goto L_08AB011C;
}

/* 08AB0134 */
rv_t func_08AB0134(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB0134:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB013C */
void func_08AB013C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB013C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AB0190; }
    goto L_08AB0174;
L_08AB0174:;
    v0 = LD32(a0);
    goto L_08AB0178;
L_08AB0178:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AB01A4; }
    goto L_08AB0180;
L_08AB0180:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AB0178; }
    goto L_08AB0190;
L_08AB0190:;
    v0 = 0 + 0;
    goto L_08AB0194;
L_08AB0194:;
    sp = sp + 16;
    return;
L_08AB01A4:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AB01B8; }
    goto L_08AB01AC;
L_08AB01AC:;
    ST8(a0+8, v0);
    goto L_08AB01B0;
L_08AB01B0:;
    v0 = 1;
    goto L_08AB0194;
L_08AB01B8:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AB01DC; }
    goto L_08AB01C0;
L_08AB01C0:;
    ST32(a2+4, v0);
    goto L_08AB01C4;
L_08AB01C4:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB01CC;
L_08AB01CC:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AB01B0;
L_08AB01DC:;
    ST32(v1, v0);
    goto L_08AB01C4;
}

/* 08AB01E4 */
u32 func_08AB01E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB01E4:;
    sp = sp - 32;
    v0 = 999;
    v1 = 0 + 0;
    s3 = a0 + 0;
    s2 = a2 & 0xff;
    s1 = a3 & 0xff;
    s0 = a1 + 0;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08AB02B4; }
    goto L_08AB0218;
L_08AB0218:;
    { rv_t r_ = func_08AA8F48(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB0220;
L_08AB0220:;
    a1 = LD32(s3);
    cnd_ = a1 == 0;
    if (cnd_) { a0 = LD32(s3+4); goto L_08AB0278; }
    goto L_08AB022C;
L_08AB022C:;
    v1 = LD32(a1+8);
    goto L_08AB0230;
L_08AB0230:;
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08AB026C; }
    goto L_08AB0238;
L_08AB0238:;
    cnd_ = s1 == 0;
    if (cnd_) { a0 = LD32(v1); goto L_08AB0250; }
    goto L_08AB0240;
L_08AB0240:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08AB0260; }
    goto L_08AB024C;
L_08AB024C:;
    a0 = LD32(v1);
    goto L_08AB0250;
L_08AB0250:;
    v0 = LD32(a0+4);
    cnd_ = v0 == s0;
    if (cnd_) { goto L_08AB02F4; }
    goto L_08AB025C;
L_08AB025C:;
    v1 = LD32(v1+4);
    goto L_08AB0260;
L_08AB0260:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08AB0238; }
    goto L_08AB0268;
L_08AB0268:;
    a1 = LD32(a1+4);
    goto L_08AB026C;
L_08AB026C:;
    cnd_ = a1 != 0;
    if (cnd_) { v1 = LD32(a1+8); goto L_08AB0230; }
    goto L_08AB0274;
L_08AB0274:;
    a0 = LD32(s3+4);
    goto L_08AB0278;
L_08AB0278:;
    cnd_ = a0 == 0;
    if (cnd_) { v1 = 0 + 0; goto L_08AB02B4; }
    goto L_08AB0280;
L_08AB0280:;
    cnd_ = s1 == 0;
    if (cnd_) { v1 = LD32(a0); goto L_08AB0298; }
    goto L_08AB0288;
L_08AB0288:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AB02A8; }
    goto L_08AB0294;
L_08AB0294:;
    v1 = LD32(a0);
    goto L_08AB0298;
L_08AB0298:;
    v0 = LD32(v1+4);
    cnd_ = v0 == s0;
    if (cnd_) { goto L_08AB02D4; }
    goto L_08AB02A4;
L_08AB02A4:;
    a0 = LD32(a0+4);
    goto L_08AB02A8;
L_08AB02A8:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AB0280; }
    goto L_08AB02B0;
L_08AB02B0:;
    v1 = 0 + 0;
    goto L_08AB02B4;
L_08AB02B4:;
    goto L_08AB02B8;
L_08AB02B8:;
    goto L_08AB02BC;
L_08AB02BC:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_08AB02D4:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08AB02B8; }
    goto L_08AB02DC;
L_08AB02DC:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AB02A8; }
    goto L_08AB02EC;
L_08AB02EC:;
    goto L_08AB02BC;
L_08AB02F4:;
    cnd_ = s2 == 0;
    if (cnd_) { v1 = a0 + 0; goto L_08AB02B4; }
    goto L_08AB02FC;
L_08AB02FC:;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08AB0260; }
    goto L_08AB030C;
L_08AB030C:;
    v1 = a0 + 0;
    goto L_08AB02B4;
}

/* 08AB0314 */
rv_t func_08AB0314(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB0314:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = a1 + 0;
    { rv_t r_ = func_08AA8F48(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB0330;
L_08AB0330:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB0364; }
    goto L_08AB033C;
L_08AB033C:;
    v1 = LD32(s0);
    cnd_ = v1 == 0;
    a0 = LD_U16(s1+8);
    if (cnd_) { goto L_08AB0364; }
    goto L_08AB0348;
L_08AB0348:;
    v0 = LD32(v1);
    goto L_08AB034C;
L_08AB034C:;
    v0 = v0 < a0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB0394; }
    goto L_08AB0358;
L_08AB0358:;
    v1 = LD32(v1+4);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08AB034C; }
    goto L_08AB0364;
L_08AB0364:;
    { rv_t r_ = func_08832030(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB036C;
L_08AB036C:;
    v1 = LD32(s0+4);
    ST32(v0, s1);
    ST32(v0+4, v1);
    ST8(v0+8, 0);
    ST32(s0+4, v0);
    goto L_08AB0380;
L_08AB0380:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AB0394:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08AB0364; }
    goto L_08AB039C;
L_08AB039C:;
    v0 = LD32(v1);
    cnd_ = v0 != a0;
    if (cnd_) { goto L_08AB0364; }
    goto L_08AB03A8;
L_08AB03A8:;
    a0 = LD32(v1+8);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AB0364; }
    goto L_08AB03B4;
L_08AB03B4:;
    v0 = LD32(a0);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_08AB03D8; }
    goto L_08AB03C0;
L_08AB03C0:;
    a0 = LD32(a0+4);
    goto L_08AB03C4;
L_08AB03C4:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AB0364; }
    goto L_08AB03CC;
L_08AB03CC:;
    v0 = LD32(a0);
    cnd_ = v0 != s1;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AB03C4; }
    goto L_08AB03D8;
L_08AB03D8:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AB0364; }
    goto L_08AB03E0;
L_08AB03E0:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AB0364; }
    goto L_08AB03F4;
L_08AB03F4:;
    ST8(a0+8, 0);
    goto L_08AB0380;
}

/* 08AB03FC */
rv_t func_08AB03FC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB03FC:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = a1 + 0;
    f0 = func_08AAFE90(a0, t1, t2, t3);
    goto L_08AB0418;
L_08AB0418:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB0458; }
    goto L_08AB0424;
L_08AB0424:;
    v1 = LD32(s1);
    a0 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    cnd_ = a0 == 0;
    v1 = LD_U16(v0+8);
    if (cnd_) { goto L_08AB0458; }
    goto L_08AB043C;
L_08AB043C:;
    v0 = LD32(a0);
    goto L_08AB0440;
L_08AB0440:;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB0488; }
    goto L_08AB044C;
L_08AB044C:;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AB0440; }
    goto L_08AB0458;
L_08AB0458:;
    { rv_t r_ = func_08832030(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB0460;
L_08AB0460:;
    v1 = LD32(s0+4);
    ST32(v0, s1);
    ST32(v0+4, v1);
    ST8(v0+8, 0);
    ST32(s0+4, v0);
    goto L_08AB0474;
L_08AB0474:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AB0488:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AB0458; }
    goto L_08AB0490;
L_08AB0490:;
    v0 = LD32(a0);
    cnd_ = v0 != v1;
    if (cnd_) { goto L_08AB0458; }
    goto L_08AB049C;
L_08AB049C:;
    a1 = LD32(a0+8);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08AB0458; }
    goto L_08AB04A8;
L_08AB04A8:;
    v0 = LD32(a1);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_08AB04CC; }
    goto L_08AB04B4;
L_08AB04B4:;
    a1 = LD32(a1+4);
    goto L_08AB04B8;
L_08AB04B8:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08AB0458; }
    goto L_08AB04C0;
L_08AB04C0:;
    v0 = LD32(a1);
    cnd_ = v0 != s1;
    if (cnd_) { a1 = LD32(a1+4); goto L_08AB04B8; }
    goto L_08AB04CC;
L_08AB04CC:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08AB0458; }
    goto L_08AB04D4;
L_08AB04D4:;
    v1 = LD32(a1);
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AB0458; }
    goto L_08AB04F4;
L_08AB04F4:;
    ST8(a1+8, 0);
    goto L_08AB0474;
}

/* 08AB04FC */
rv_t func_08AB04FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB04FC:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08875C3C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB0514;
L_08AB0514:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB0520 */
rv_t func_08AB0520(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB0520:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08875CE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB0538;
L_08AB0538:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB0544 */
float func_08AB0544(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB0544:;
    sp = sp - 32;
    s5 = 0 + 0;
    s3 = a0 + 0;
    s0 = LD32(a0+4);
    cnd_ = s0 == 0;
    ST32(a0+4, 0);
    if (cnd_) { goto L_08AB05E4; }
    goto L_08AB0578;
L_08AB0578:;
    v0 = LD32(s0);
    v1 = LD32(v0);
    a0 = LD32(v1-12);
    v0 = v0 + a0;
    s1 = LD_U16(v0+8);
    cnd_ = s1 == 0;
    s4 = LD32(s0+4);
    if (cnd_) { goto L_08AB0680; }
    goto L_08AB0594;
L_08AB0594:;
    v1 = LD32(s3);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08AB05B0; }
    goto L_08AB05A0;
L_08AB05A0:;
    v0 = LD32(v1);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08AB0608; }
    goto L_08AB05B0;
L_08AB05B0:;
    { rv_t r_ = func_08831FE8(t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB05B8;
L_08AB05B8:;
    v1 = v0 + 0;
    v0 = LD32(s3);
    ST32(v1, s1);
    ST32(v1+4, v0);
    ST32(v1+8, 0);
    ST32(s3, v1);
    goto L_08AB05D0;
L_08AB05D0:;
    v0 = LD32(v1+8);
    goto L_08AB05D4;
L_08AB05D4:;
    ST32(s0+4, v0);
    ST32(v1+8, s0);
    goto L_08AB05DC;
L_08AB05DC:;
    cnd_ = s4 != 0;
    s0 = s4 + 0;
    if (cnd_) { goto L_08AB0578; }
    goto L_08AB05E4;
L_08AB05E4:;
    sp = sp + 32;
    return f0;
L_08AB0608:;
    v0 = LD32(v1);
    goto L_08AB060C;
L_08AB060C:;
    v0 = v0 < s1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB0660; }
    goto L_08AB0618;
L_08AB0618:;
    s2 = v1 + 0;
    v1 = LD32(v1+4);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08AB060C; }
    goto L_08AB0628;
L_08AB0628:;
    { rv_t r_ = func_08831FE8(t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB0630;
L_08AB0630:;
    v1 = v0 + 0;
    cnd_ = s2 == 0;
    ST32(v0+8, 0);
    if (cnd_) { goto L_08AB0650; }
    goto L_08AB063C;
L_08AB063C:;
    v0 = LD32(s2+4);
    ST32(v1+4, v0);
    ST32(s2+4, v1);
    goto L_08AB0648;
L_08AB0648:;
    ST32(v1, s1);
    goto L_08AB05D0;
L_08AB0650:;
    v0 = LD32(s3);
    ST32(v1+4, v0);
    ST32(s3, v1);
    goto L_08AB0648;
L_08AB0660:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08AB0628; }
    goto L_08AB0668;
L_08AB0668:;
    v0 = LD32(v1);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AB05D4; }
    goto L_08AB0678;
L_08AB0678:;
    goto L_08AB0628;
L_08AB0680:;
    cnd_ = s5 == 0;
    if (cnd_) { ST32(s3+4, s0); goto L_08AB068C; }
    goto L_08AB0688;
L_08AB0688:;
    ST32(s5+4, s0);
    goto L_08AB068C;
L_08AB068C:;
    s5 = s0 + 0;
    goto L_08AB05DC;
}

/* 08AB0694 */
void func_08AB0694(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB0694:;
    sp = sp - 16;
    a3 = a0 + 0;
    a2 = 0 + 0;
    v1 = LD32(a1);
    a0 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a1 + v0;
    cnd_ = a0 == 0;
    v1 = LD_U16(v0+8);
    if (cnd_) { goto L_08AB06E0; }
    goto L_08AB06C0;
L_08AB06C0:;
    v0 = LD32(a0);
    goto L_08AB06C4;
L_08AB06C4:;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB0748; }
    goto L_08AB06D0;
L_08AB06D0:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AB06C4; }
    goto L_08AB06E0;
L_08AB06E0:;
    a0 = LD32(a3+4);
    goto L_08AB06E4;
L_08AB06E4:;
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB0730; }
    goto L_08AB06EC;
L_08AB06EC:;
    v0 = LD32(a0);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AB0714; }
    goto L_08AB06F8;
L_08AB06F8:;
    v1 = a0 + 0;
    goto L_08AB06FC;
L_08AB06FC:;
    a0 = LD32(a0+4);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AB0734; }
    goto L_08AB0708;
L_08AB0708:;
    v0 = LD32(a0);
    cnd_ = v0 != a1;
    if (cnd_) { v1 = a0 + 0; goto L_08AB06FC; }
    goto L_08AB0714;
L_08AB0714:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AB0734; }
    goto L_08AB071C;
L_08AB071C:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AB0740; }
    goto L_08AB0724;
L_08AB0724:;
    ST32(v1+4, v0);
    goto L_08AB0728;
L_08AB0728:;
    { u64 r_ = func_08832050(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB0730;
L_08AB0730:;
    goto L_08AB0734;
L_08AB0734:;
    sp = sp + 16;
    return;
L_08AB0740:;
    ST32(a3+4, v0);
    goto L_08AB0728;
L_08AB0748:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(a3+4); goto L_08AB06E4; }
    goto L_08AB0750;
L_08AB0750:;
    s0 = LD32(a0+8);
    cnd_ = s0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB06E0; }
    goto L_08AB075C;
L_08AB075C:;
    v0 = LD32(s0);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AB0784; }
    goto L_08AB0768;
L_08AB0768:;
    v1 = s0 + 0;
    goto L_08AB076C;
L_08AB076C:;
    s0 = LD32(s0+4);
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(a3+4); goto L_08AB06E4; }
    goto L_08AB0778;
L_08AB0778:;
    v0 = LD32(s0);
    cnd_ = v0 != a1;
    if (cnd_) { v1 = s0 + 0; goto L_08AB076C; }
    goto L_08AB0784;
L_08AB0784:;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(a3+4); goto L_08AB06E4; }
    goto L_08AB078C;
L_08AB078C:;
    v0 = LD32(a3+8);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AB07A0; }
    goto L_08AB0798;
L_08AB0798:;
    ST8(s0+8, v0);
    goto L_08AB0730;
L_08AB07A0:;
    cnd_ = v1 == 0;
    v0 = LD32(s0+4);
    if (cnd_) { goto L_08AB07B4; }
    goto L_08AB07A8;
L_08AB07A8:;
    ST32(v1+4, v0);
    goto L_08AB07AC;
L_08AB07AC:;
    a0 = s0 + 0;
    goto L_08AB0728;
L_08AB07B4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB07C4; }
    goto L_08AB07BC;
L_08AB07BC:;
    ST32(a0+8, v0);
    goto L_08AB07AC;
L_08AB07C4:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AB07E0; }
    goto L_08AB07CC;
L_08AB07CC:;
    ST32(a2+4, v0);
    goto L_08AB07D0;
L_08AB07D0:;
    { u64 r_ = func_08832008(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB07D8;
L_08AB07D8:;
    a0 = s0 + 0;
    goto L_08AB0728;
L_08AB07E0:;
    ST32(a3, v0);
    goto L_08AB07D0;
}

/* 08AB07E8 */
rv_t func_08AB07E8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB07E8:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = a1 + 0;
    f0 = func_08AB0544(a0, t1, t2, t3);
    goto L_08AB0804;
L_08AB0804:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB0844; }
    goto L_08AB0810;
L_08AB0810:;
    v1 = LD32(s1);
    a0 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    cnd_ = a0 == 0;
    v1 = LD_U16(v0+8);
    if (cnd_) { goto L_08AB0844; }
    goto L_08AB0828;
L_08AB0828:;
    v0 = LD32(a0);
    goto L_08AB082C;
L_08AB082C:;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB0874; }
    goto L_08AB0838;
L_08AB0838:;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AB082C; }
    goto L_08AB0844;
L_08AB0844:;
    { rv_t r_ = func_08832030(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB084C;
L_08AB084C:;
    v1 = LD32(s0+4);
    ST32(v0, s1);
    ST32(v0+4, v1);
    ST8(v0+8, 0);
    ST32(s0+4, v0);
    goto L_08AB0860;
L_08AB0860:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AB0874:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AB0844; }
    goto L_08AB087C;
L_08AB087C:;
    v0 = LD32(a0);
    cnd_ = v0 != v1;
    if (cnd_) { goto L_08AB0844; }
    goto L_08AB0888;
L_08AB0888:;
    a1 = LD32(a0+8);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08AB0844; }
    goto L_08AB0894;
L_08AB0894:;
    v0 = LD32(a1);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_08AB08B8; }
    goto L_08AB08A0;
L_08AB08A0:;
    a1 = LD32(a1+4);
    goto L_08AB08A4;
L_08AB08A4:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08AB0844; }
    goto L_08AB08AC;
L_08AB08AC:;
    v0 = LD32(a1);
    cnd_ = v0 != s1;
    if (cnd_) { a1 = LD32(a1+4); goto L_08AB08A4; }
    goto L_08AB08B8;
L_08AB08B8:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08AB0844; }
    goto L_08AB08C0;
L_08AB08C0:;
    v1 = LD32(a1);
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AB0844; }
    goto L_08AB08E0;
L_08AB08E0:;
    ST8(a1+8, 0);
    goto L_08AB0860;
}

/* 08AB08E8 */
void func_08AB08E8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB08E8:;
    sp = sp - 32;
    s4 = a0 + 0;
    s2 = LD32(a0);
    cnd_ = s2 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08AB096C; }
    goto L_08AB0914;
L_08AB0914:;
    v0 = LD32(s2+8);
    goto L_08AB0918;
L_08AB0918:;
    s1 = 0 + 0;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08AB098C; }
    goto L_08AB0924;
L_08AB0924:;
    v0 = LD_U8(s0+8);
    goto L_08AB0928;
L_08AB0928:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s0 + 0; goto L_08AB09BC; }
    goto L_08AB0930;
L_08AB0930:;
    cnd_ = s1 == 0;
    v0 = LD32(s0+4);
    if (cnd_) { goto L_08AB09B4; }
    goto L_08AB0938;
L_08AB0938:;
    ST32(s1+4, v0);
    goto L_08AB093C;
L_08AB093C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08832050(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB0948;
L_08AB0948:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08AB0928; }
    goto L_08AB0950;
L_08AB0950:;
    v0 = LD32(s2+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB098C; }
    goto L_08AB095C;
L_08AB095C:;
    s3 = s2 + 0;
    s2 = LD32(s2+4);
    goto L_08AB0964;
L_08AB0964:;
    cnd_ = s2 != 0;
    if (cnd_) { v0 = LD32(s2+8); goto L_08AB0918; }
    goto L_08AB096C;
L_08AB096C:;
    sp = sp + 32;
    return;
L_08AB098C:;
    cnd_ = s3 == 0;
    v0 = LD32(s2+4);
    if (cnd_) { goto L_08AB09AC; }
    goto L_08AB0994;
L_08AB0994:;
    ST32(s3+4, v0);
    goto L_08AB0998;
L_08AB0998:;
    a0 = s2 + 0;
    s2 = LD32(s2+4);
    { u64 r_ = func_08832008(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB09A4;
L_08AB09A4:;
    goto L_08AB0964;
L_08AB09AC:;
    ST32(s4, v0);
    goto L_08AB0998;
L_08AB09B4:;
    ST32(s2+8, v0);
    goto L_08AB093C;
L_08AB09BC:;
    s0 = LD32(s0+4);
    goto L_08AB0948;
}

/* 08AB09C4 */
void func_08AB09C4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB09C4:;
    sp = sp - 32;
    s4 = a0 + 0;
    s2 = LD32(a0);
    cnd_ = s2 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08AB0A48; }
    goto L_08AB09F0;
L_08AB09F0:;
    v0 = LD32(s2+8);
    goto L_08AB09F4;
L_08AB09F4:;
    s1 = 0 + 0;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08AB0A68; }
    goto L_08AB0A00;
L_08AB0A00:;
    v0 = LD_U8(s0+8);
    goto L_08AB0A04;
L_08AB0A04:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s0 + 0; goto L_08AB0A98; }
    goto L_08AB0A0C;
L_08AB0A0C:;
    cnd_ = s1 == 0;
    v0 = LD32(s0+4);
    if (cnd_) { goto L_08AB0A90; }
    goto L_08AB0A14;
L_08AB0A14:;
    ST32(s1+4, v0);
    goto L_08AB0A18;
L_08AB0A18:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08832050(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB0A24;
L_08AB0A24:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08AB0A04; }
    goto L_08AB0A2C;
L_08AB0A2C:;
    v0 = LD32(s2+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB0A68; }
    goto L_08AB0A38;
L_08AB0A38:;
    s3 = s2 + 0;
    s2 = LD32(s2+4);
    goto L_08AB0A40;
L_08AB0A40:;
    cnd_ = s2 != 0;
    if (cnd_) { v0 = LD32(s2+8); goto L_08AB09F4; }
    goto L_08AB0A48;
L_08AB0A48:;
    sp = sp + 32;
    return;
L_08AB0A68:;
    cnd_ = s3 == 0;
    v0 = LD32(s2+4);
    if (cnd_) { goto L_08AB0A88; }
    goto L_08AB0A70;
L_08AB0A70:;
    ST32(s3+4, v0);
    goto L_08AB0A74;
L_08AB0A74:;
    a0 = s2 + 0;
    s2 = LD32(s2+4);
    { u64 r_ = func_08832008(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB0A80;
L_08AB0A80:;
    goto L_08AB0A40;
L_08AB0A88:;
    ST32(s4, v0);
    goto L_08AB0A74;
L_08AB0A90:;
    ST32(s2+8, v0);
    goto L_08AB0A18;
L_08AB0A98:;
    s0 = LD32(s0+4);
    goto L_08AB0A24;
}

/* 08AB0AA0 */
u64 func_08AB0AA0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_08AB0AA0:;
    v0 = 999;
    cnd_ = a1 == v0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AB0AF0; }
    goto L_08AB0AAC;
L_08AB0AAC:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AB0AF0; }
    goto L_08AB0AD0;
L_08AB0AD0:;
    v0 = LD32(a0);
    goto L_08AB0AD4;
L_08AB0AD4:;
    v1 = LD32(v0);
    cnd_ = v1 == a1;
    a2 = v0 + 0;
    if (cnd_) { goto L_08AB0AF8; }
    goto L_08AB0AE0;
L_08AB0AE0:;
    a0 = LD32(a0+4);
    goto L_08AB0AE4;
L_08AB0AE4:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AB0AD4; }
    goto L_08AB0AEC;
L_08AB0AEC:;
    a2 = 0 + 0;
    goto L_08AB0AF0;
L_08AB0AF0:;
    v0 = a2 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB0AF8:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AB0AE4; }
    goto L_08AB0B04;
L_08AB0B04:;
    goto L_08AB0AF0;
}

/* 08AB0B0C */
void func_08AB0B0C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08AB0B0C:;
    v1 = LD32(a0+8);
    cnd_ = v1 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_08AB0B58; }
    goto L_08AB0B18;
L_08AB0B18:;
    a2 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a2+4);
    a0 = a2 + 0;
    goto L_08AB0B28;
L_08AB0B28:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AB0B80; }
    goto L_08AB0B34;
L_08AB0B34:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a1+8, a0);
    if (cnd_) { goto L_08AB0B68; }
    goto L_08AB0B48;
L_08AB0B48:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB0B80; }
    goto L_08AB0B58;
L_08AB0B58:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_08AB0B48; }
    goto L_08AB0B64;
L_08AB0B64:;
    a2 = LD32(a1);
    goto L_08AB0B68;
L_08AB0B68:;
    v1 = LD32(a1+4);
    a0 = a2 + 0;
    v1 = v1 + 1;
    ST32(a1+4, v1);
    v0 = LD32(a2+4);
    goto L_08AB0B28;
L_08AB0B80:;
    return;
}

/* 08AB0B88 */
void func_08AB0B88(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08AB0B88:;
    v0 = LD32(a0+8);
    cnd_ = v0 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_08AB0BE4; }
    goto L_08AB0B94;
L_08AB0B94:;
    a2 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a2+4);
    a0 = a2 + 0;
    goto L_08AB0BA4;
L_08AB0BA4:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AB0BDC; }
    goto L_08AB0BB0;
L_08AB0BB0:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 != 0;
    ST32(a1+8, a0);
    if (cnd_) { goto L_08AB0BDC; }
    goto L_08AB0BC4;
L_08AB0BC4:;
    v1 = LD32(a1+4);
    a0 = a2 + 0;
    v1 = v1 + 1;
    ST32(a1+4, v1);
    v0 = LD32(a2+4);
    goto L_08AB0BA4;
L_08AB0BDC:;
    return;
L_08AB0BE4:;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08AB0BDC; }
    goto L_08AB0BF0;
L_08AB0BF0:;
    a2 = LD32(a0);
    goto L_08AB0BC4;
}

/* 08AB0BF8 */
void func_08AB0BF8(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08AB0BF8:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB0C2C; }
    goto L_08AB0C04;
L_08AB0C04:;
    v0 = LD32(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08AB0C34; }
    goto L_08AB0C10;
L_08AB0C10:;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08AB0C2C; }
    goto L_08AB0C1C;
L_08AB0C1C:;
    v0 = LD32(a0+4);
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    ST32(a0+4, v1);
    if (cnd_) { goto L_08AB0C04; }
    goto L_08AB0C2C;
L_08AB0C2C:;
    return;
L_08AB0C34:;
    v1 = LD32(v0+8);
    ST32(a0+8, v1);
    return;
}

/* 08AB0C40 */
u64 func_08AB0C40(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08AB0C40:;
    a2 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08AB0CA8; }
    goto L_08AB0C50;
L_08AB0C50:;
    a3 = LD32(a2);
    v1 = LD32(a2+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08AB0C60;
L_08AB0C60:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AB0CD0; }
    goto L_08AB0C6C;
L_08AB0C6C:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08AB0CB8; }
    goto L_08AB0C80;
L_08AB0C80:;
    cnd_ = a1 != 0;
    a0 = LD32(a2+8);
    if (cnd_) { goto L_08AB0C9C; }
    goto L_08AB0C88;
L_08AB0C88:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08AB0CAC; }
    goto L_08AB0C9C;
L_08AB0C9C:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB0CD0; }
    goto L_08AB0CA8;
L_08AB0CA8:;
    v0 = LD32(a0+4);
    goto L_08AB0CAC;
L_08AB0CAC:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08AB0C80; }
    goto L_08AB0CB4;
L_08AB0CB4:;
    a3 = LD32(a2);
    goto L_08AB0CB8;
L_08AB0CB8:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08AB0C60;
L_08AB0CD0:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08AB0CD8 */
void func_08AB0CD8(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08AB0CD8:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB0D0C; }
    goto L_08AB0CE4;
L_08AB0CE4:;
    v0 = LD32(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08AB0D14; }
    goto L_08AB0CF0;
L_08AB0CF0:;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08AB0D0C; }
    goto L_08AB0CFC;
L_08AB0CFC:;
    v0 = LD32(a0+4);
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    ST32(a0+4, v1);
    if (cnd_) { goto L_08AB0CE4; }
    goto L_08AB0D0C;
L_08AB0D0C:;
    return;
L_08AB0D14:;
    v1 = LD32(v0+8);
    ST32(a0+8, v1);
    return;
}

/* 08AB0D20 */
void func_08AB0D20(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB0D20:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB0D50; }
    goto L_08AB0D3C;
L_08AB0D3C:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB0D50:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB0D58;
L_08AB0D58:;
    ST32(s0, 0);
    goto L_08AB0D3C;
}

/* 08AB0D60 */
void func_08AB0D60(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB0D60:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB0D90; }
    goto L_08AB0D7C;
L_08AB0D7C:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB0D90:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB0D98;
L_08AB0D98:;
    ST32(s0, 0);
    goto L_08AB0D7C;
}

/* 08AB0DA0 */
void func_08AB0DA0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB0DA0:;
    sp = sp - 16;
    v0 = a1 << 2;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AB0DD4; }
    goto L_08AB0DBC;
L_08AB0DBC:;
    ST32(s0, 0);
    goto L_08AB0DC0;
L_08AB0DC0:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB0DD4:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB0DDC;
L_08AB0DDC:;
    ST32(s0, v0);
    goto L_08AB0DC0;
}

/* 08AB0DE4 */
u32 func_08AB0DE4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08AB0DE4:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB0E20; }
    goto L_08AB0DF0;
L_08AB0DF0:;
    t0 = v0 + 0;
    a3 = a0 + 0;
    v0 = LD32(t0);
    goto L_08AB0DFC;
L_08AB0DFC:;
    a2 = t0 + 12;
    cnd_ = v0 == a1;
    v1 = a1 < v0;
    if (cnd_) { goto L_08AB0E28; }
    goto L_08AB0E08;
L_08AB0E08:;
    a3 = t0 + 8;
    if (v1 == 0) a3 = a2;
    t0 = LD32(a3);
    cnd_ = t0 != 0;
    if (cnd_) { v0 = LD32(t0); goto L_08AB0DFC; }
    goto L_08AB0E1C;
L_08AB0E1C:;
    v1 = 0 + 0;
    goto L_08AB0E20;
L_08AB0E20:;
    v0 = v1 + 0;
    return v0;
L_08AB0E28:;
    cnd_ = t0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB0E20; }
    goto L_08AB0E30;
L_08AB0E30:;
    v1 = LD32(t0+8);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(t0+12); goto L_08AB0EC0; }
    goto L_08AB0E3C;
L_08AB0E3C:;
    a1 = LD32(t0+12);
    cnd_ = a1 == 0;
    a2 = LD32(a0+4);
    if (cnd_) { goto L_08AB0EB8; }
    goto L_08AB0E48;
L_08AB0E48:;
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, a1); goto L_08AB0EB0; }
    goto L_08AB0E54;
L_08AB0E54:;
    ST32(a3, v1);
    t1 = LD32(t0+12);
    goto L_08AB0E5C;
L_08AB0E5C:;
    v1 = LD32(a3);
    a1 = LD32(t1);
    goto L_08AB0E64;
L_08AB0E64:;
    v0 = LD32(v1);
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AB0EA0; }
    goto L_08AB0E74;
L_08AB0E74:;
    v0 = LD32(v1+12);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+12, t1); goto L_08AB0E88; }
    goto L_08AB0E80;
L_08AB0E80:;
    v1 = v0 + 0;
    goto L_08AB0E64;
L_08AB0E88:;
    v0 = a2 - 1;
    ST32(a0+4, v0);
    v1 = t0 + 0;
    ST32(t0+8, 0);
    ST32(t0+12, 0);
    goto L_08AB0E20;
L_08AB0EA0:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v0 + 0; goto L_08AB0E64; }
    goto L_08AB0EA8;
L_08AB0EA8:;
    ST32(v1+8, t1);
    goto L_08AB0E88;
L_08AB0EB0:;
    t1 = LD32(t0+8);
    goto L_08AB0E5C;
L_08AB0EB8:;
    ST32(a3, v1);
    goto L_08AB0E88;
L_08AB0EC0:;
    a2 = LD32(a0+4);
    ST32(a3, v0);
    goto L_08AB0E88;
}

/* 08AB0ECC */
void func_08AB0ECC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB0ECC:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB0F40; }
    goto L_08AB0EF8;
L_08AB0EF8:;
    v0 = LD32(s0+12);
    goto L_08AB0EFC;
L_08AB0EFC:;
    a0 = s1 + 0;
    a2 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB0F30; }
    goto L_08AB0F0C;
L_08AB0F0C:;
    a0 = LD32(s0);
    goto L_08AB0F10;
L_08AB0F10:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB0F18;
L_08AB0F18:;
    sp = sp + 16;
    return;
L_08AB0F30:;
    func_08AB0ECC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB0F38;
L_08AB0F38:;
    a0 = LD32(s0);
    goto L_08AB0F10;
L_08AB0F40:;
    func_08AB0ECC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB0F48;
L_08AB0F48:;
    v0 = LD32(s0+12);
    goto L_08AB0EFC;
}

/* 08AB0F50 */
void func_08AB0F50(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB0F50:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB0FB0; }
    goto L_08AB0F74;
L_08AB0F74:;
    v0 = LD32(s0+12);
    goto L_08AB0F78;
L_08AB0F78:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB0FA0; }
    goto L_08AB0F84;
L_08AB0F84:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB0F8C;
L_08AB0F8C:;
    sp = sp + 16;
    return;
L_08AB0FA0:;
    func_08AB0F50(a0, a1, t1, t2, t3);
    goto L_08AB0FA8;
L_08AB0FA8:;
    goto L_08AB0F84;
L_08AB0FB0:;
    func_08AB0F50(a0, a1, t1, t2, t3);
    goto L_08AB0FB8;
L_08AB0FB8:;
    v0 = LD32(s0+12);
    goto L_08AB0F78;
}

/* 08AB0FC0 */
u32 func_08AB0FC0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB0FC0:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AB1004; }
    goto L_08AB0FD8;
L_08AB0FD8:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AB0FE0;
L_08AB0FE0:;
    a0 = v0 + 12;
    a3 = v0 + 8;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AB1018; }
    goto L_08AB0FF8;
L_08AB0FF8:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AB0FE0; }
    goto L_08AB1004;
L_08AB1004:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AB1018; }
    goto L_08AB1010;
L_08AB1010:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AB1028; }
    goto L_08AB1018;
L_08AB1018:;
    v0 = t0 + 0;
    sp = sp + 16;
    return v0;
L_08AB1028:;
    a2 = 1;
    v0 = func_08AB0FC0(a0, a1, a2);
    goto L_08AB1030;
L_08AB1030:;
    t0 = v0 + 0;
    goto L_08AB1018;
}

/* 08AB1038 */
u32 func_08AB1038(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
    u32 t_;
L_08AB1038:;
    v1 = LD32(a0+24);
    a3 = a1 & 0xff;
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    a1 = a2 & 0xff;
    if (cnd_) { goto L_08AB1068; }
    goto L_08AB104C;
L_08AB104C:;
    v0 = v1 << 2;
    v1 = D_08AD4C24 - (19492);
    v1 = v1 + 19492;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08AB1068u: goto L_08AB1068; case 0x08AB1070u: goto L_08AB1070; case 0x08AB107Cu: goto L_08AB107C; case 0x08AB1084u: goto L_08AB1084; case 0x08AB1090u: goto L_08AB1090; case 0x08AB1098u: goto L_08AB1098; default: rs_break(0, 0x08ab1060); }
L_08AB1068:;
    v0 = 1;
    return v0;
L_08AB1070:;
    v0 = a3 ^ a1;
    v0 = v0 < 0x1u;
    return v0;
L_08AB107C:;
    v0 = (s32)a1 < (s32)a3;
    return v0;
L_08AB1084:;
    v0 = (s32)a3 < (s32)a1;
    v0 = v0 ^ 0x1;
    return v0;
L_08AB1090:;
    v0 = (s32)a3 < (s32)a1;
    return v0;
L_08AB1098:;
    v0 = (s32)a1 < (s32)a3;
    v0 = v0 ^ 0x1;
    return v0;
}

/* 08AB10A4 */
u32 func_08AB10A4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u32 t_;
L_08AB10A4:;
    v1 = LD32(a0+24);
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB10D0; }
    goto L_08AB10B4;
L_08AB10B4:;
    v0 = v1 << 2;
    v1 = D_08AD4C3C - (19516);
    v1 = v1 + 19516;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08AB10D0u: goto L_08AB10D0; case 0x08AB10D8u: goto L_08AB10D8; case 0x08AB10E4u: goto L_08AB10E4; case 0x08AB10ECu: goto L_08AB10EC; case 0x08AB10F8u: goto L_08AB10F8; case 0x08AB1100u: goto L_08AB1100; default: rs_break(0, 0x08ab10c8); }
L_08AB10D0:;
    v0 = 1;
    return v0;
L_08AB10D8:;
    v0 = a1 ^ a2;
    v0 = v0 < 0x1u;
    return v0;
L_08AB10E4:;
    v0 = (s32)a2 < (s32)a1;
    return v0;
L_08AB10EC:;
    v0 = (s32)a1 < (s32)a2;
    v0 = v0 ^ 0x1;
    return v0;
L_08AB10F8:;
    v0 = (s32)a1 < (s32)a2;
    return v0;
L_08AB1100:;
    v0 = (s32)a2 < (s32)a1;
    v0 = v0 ^ 0x1;
    return v0;
}

/* 08AB110C */
u32 func_08AB110C(u32 a0, float f12, float f13)
{
    u32 v0 = 0, v1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
L_08AB110C:;
    v1 = LD32(a0+24);
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB1138; }
    goto L_08AB111C;
L_08AB111C:;
    v0 = v1 << 2;
    v1 = D_08AD4C54 - (19540);
    v1 = v1 + 19540;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08AB1138u: goto L_08AB1138; case 0x08AB1140u: goto L_08AB1140; case 0x08AB1160u: goto L_08AB1160; case 0x08AB116Cu: goto L_08AB116C; case 0x08AB1178u: goto L_08AB1178; case 0x08AB1184u: goto L_08AB1184; default: rs_break(0, 0x08ab1130); }
L_08AB1138:;
    v0 = 1;
    return v0;
L_08AB1140:;
    fcc = FCMP(f12, f13, 2);
    goto L_08AB1148;
L_08AB1148:;
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_08AB1158; }
    goto L_08AB1150;
L_08AB1150:;
    v0 = 0 + 0;
    return v0;
L_08AB1158:;
    return v0;
L_08AB1160:;
    fcc = FCMP(f13, f12, 12);
    goto L_08AB1148;
L_08AB116C:;
    fcc = FCMP(f13, f12, 14);
    goto L_08AB1148;
L_08AB1178:;
    fcc = FCMP(f12, f13, 12);
    goto L_08AB1148;
L_08AB1184:;
    fcc = FCMP(f12, f13, 14);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_08AB1158; }
    goto L_08AB1194;
L_08AB1194:;
    v0 = 0 + 0;
    return v0;
}

/* 08AB119C */
rv_t func_08AB119C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB119C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB11A4 */
rv_t func_08AB11A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB11A4:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB11AC */
rv_t func_08AB11AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB11AC:;
    sp = sp - 16;
    v1 = LD32(a1);
    v0 = LD32(v1+28);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB11C8;
L_08AB11C8:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB11DC */
rv_t func_08AB11DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB11DC:;
    a1 = a1 & 0xff;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 512;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB11F4;
L_08AB11F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB1200 */
rv_t func_08AB1200(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB1200:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB1208 */
rv_t func_08AB1208(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB1208:;
    v0 = LD32(a0+52);
    return (rv_t){ v0, v1, f0 };
}

/* 08AB1210 */
rv_t func_08AB1210(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB1210:;
    sp = sp - 16;
    { rv_t r_ = func_088800A8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB1220;
L_08AB1220:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB122C */
rv_t func_08AB122C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB122C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB1250; }
    goto L_08AB1248;
L_08AB1248:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB1250;
L_08AB1250:;
    ST32(s0, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB1264 */
rv_t func_08AB1264(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB1264:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_088870FC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB1278;
L_08AB1278:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB128C */
void func_08AB128C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB128C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AB1330; }
    goto L_08AB12AC;
L_08AB12AC:;
    s1 = LD32(s0);
    goto L_08AB12B0;
L_08AB12B0:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08AB12E4; }
    goto L_08AB12B8;
L_08AB12B8:;
    s0 = LD32(s1);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08AB12D8; }
    goto L_08AB12C4;
L_08AB12C4:;
    a0 = LD32(s0+16);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AB1304; }
    goto L_08AB12D0;
L_08AB12D0:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08AB12F4; }
    goto L_08AB12D8;
L_08AB12D8:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB12E0;
L_08AB12E0:;
    goto L_08AB12E4;
L_08AB12E4:;
    sp = sp + 16;
    return;
L_08AB12F4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB12FC;
L_08AB12FC:;
    goto L_08AB12D8;
L_08AB1304:;
    func_08AA6018(a0);
    goto L_08AB130C;
L_08AB130C:;
    a0 = LD32(s0+16);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AB1320; }
    goto L_08AB1318;
L_08AB1318:;
    s0 = LD32(s1);
    goto L_08AB12D0;
L_08AB1320:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB1328;
L_08AB1328:;
    s0 = LD32(s1);
    goto L_08AB12D0;
L_08AB1330:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB1338;
L_08AB1338:;
    s1 = LD32(s0);
    goto L_08AB12B0;
}

/* 08AB1340 */
float func_08AB1340(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB1340:;
    sp = sp - 32;
    v1 = 0 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    f20 = f12;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08AB1378; }
    goto L_08AB1374;
L_08AB1374:;
    v1 = LD32(v0);
    goto L_08AB1378;
L_08AB1378:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08AB1438; }
    goto L_08AB1380;
L_08AB1380:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB138C; }
    goto L_08AB1388;
L_08AB1388:;
    v1 = LD32(v0);
    goto L_08AB138C;
L_08AB138C:;
    v0 = LD32(v1+16);
    cnd_ = v0 == 0;
    s0 = v1 + 0;
    if (cnd_) { goto L_08AB13D0; }
    goto L_08AB1398;
L_08AB1398:;
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08AB13D0; }
    goto L_08AB13AC;
L_08AB13AC:;
    s0 = v0 + 0;
    goto L_08AB13B0;
L_08AB13B0:;
    v0 = LD32(v0+16);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB13D0; }
    goto L_08AB13BC;
L_08AB13BC:;
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) { s0 = v0 + 0; goto L_08AB13B0; }
    goto L_08AB13D0;
L_08AB13D0:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB13D8;
L_08AB13D8:;
    ST32(v0+16, 0);
    v1 = v0 + 0;
    v0 = LD32(s0+16);
    f2 = BITSF(LD32(s1+8));
    f1 = BITSF(LD32(s1));
    ST32(v1+16, v0);
    f0 = BITSF(LD32(s1+4));
    v0 = LD32(s0+16);
    ST32(v1, FBITS(f1));
    ST32(v1+4, FBITS(f0));
    ST32(v1+8, FBITS(f2));
    ST32(v1+12, FBITS(f20));
    cnd_ = v0 == 0;
    ST32(v1+20, 0);
    if (cnd_) { goto L_08AB1414; }
    goto L_08AB1410;
L_08AB1410:;
    ST32(v0+20, v1);
    goto L_08AB1414;
L_08AB1414:;
    ST32(v1+20, s0);
    ST32(s0+16, v1);
    goto L_08AB141C;
L_08AB141C:;
    sp = sp + 32;
    return f0;
L_08AB1438:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB1474; }
    goto L_08AB1440;
L_08AB1440:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB1448;
L_08AB1448:;
    f0 = BITSF(LD32(s1+8));
    f1 = BITSF(LD32(s1));
    f2 = BITSF(LD32(s1+4));
    ST32(v0+16, 0);
    ST32(v0+20, 0);
    ST32(v0+8, FBITS(f0));
    ST32(v0, FBITS(f1));
    ST32(v0+4, FBITS(f2));
    ST32(v0+12, FBITS(f20));
    ST32(s2, v0);
    goto L_08AB141C;
L_08AB1474:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB147C;
L_08AB147C:;
    ST32(v0+12, 0);
    s2 = v0 + 0;
    ST32(s0, v0);
    ST32(v0, 0);
    goto L_08AB1440;
}

/* 08AB1490 */
void func_08AB1490(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB1490:;
    f1 = BITSF(LD32(a1+12));
    f0 = BITSF(LD32(a1+16));
    v1 = LD32(a1+4);
    f12 = f12 - f1;
    f0 = f0 - f1;
    a3 = a0 + 0;
    a0 = v1 - 1;
    f2 = BITSF(a0);
    f12 = f12 / f0;
    v0 = D_08AEC13C - (-16068);
    f1 = BITSF(LD32(v0-16068));
    sp = sp - 32;
    f0 = (float)(s32)FBITS(f2);
    f6 = f12 * f0;
    f0 = BITSF(F2I(f6, 1));
    v0 = FBITS(f0);
    cnd_ = (s32)v0 < 0;
    v1 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08AB159C; }
    goto L_08AB14D8;
L_08AB14D8:;
    f12 = (float)(s32)FBITS(f0);
    t0 = v0 << 1;
    cnd_ = v1 != 0;
    a2 = a0 << 1;
    if (cnd_) { goto L_08AB151C; }
    goto L_08AB14E8;
L_08AB14E8:;
    v1 = LD32(a1+8);
    v0 = a2 + a0;
    v0 = v0 << 2;
    v1 = v1 + v0;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    goto L_08AB1504;
L_08AB1504:;
    ST32(a3+8, FBITS(f0));
    ST32(a3, FBITS(f1));
    ST32(a3+4, FBITS(f2));
    goto L_08AB1510;
L_08AB1510:;
    v0 = a3 + 0;
    sp = sp + 32;
    return;
L_08AB151C:;
    f6 = f6 - f12;
    v1 = LD32(a1+8);
    v0 = t0 + v0;
    v0 = v0 << 2;
    v1 = v1 + v0;
    f0 = f1 - f6;
    f3 = BITSF(LD32(v1));
    f4 = BITSF(LD32(v1+4));
    f5 = BITSF(LD32(v1+8));
    f3 = f3 * f0;
    f4 = f4 * f0;
    f5 = f5 * f0;
    a0 = v1 + 12;
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f4));
    ST32(sp+8, FBITS(f5));
    f0 = BITSF(LD32(v1+12));
    f2 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(a0+4));
    f0 = f0 * f6;
    f2 = f2 * f6;
    f1 = f1 * f6;
    f3 = f3 + f0;
    f5 = f5 + f2;
    f4 = f4 + f1;
    ST32(sp+16, FBITS(f0));
    ST32(a3+4, FBITS(f4));
    ST32(a3+8, FBITS(f5));
    ST32(a3, FBITS(f3));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    goto L_08AB1510;
L_08AB159C:;
    v0 = LD32(a1+8);
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    goto L_08AB1504;
}

/* 08AB15B0 */
rv_t func_08AB15B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB15B0:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB15B8 */
rv_t func_08AB15B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB15B8:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB15C0 */
rv_t func_08AB15C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB15C0:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB15C8 */
rv_t func_08AB15C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB15C8:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB15D0 */
rv_t func_08AB15D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB15D0:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB15D8 */
rv_t func_08AB15D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB15D8:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB15E0 */
rv_t func_08AB15E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB15E0:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB15E8 */
rv_t func_08AB15E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB15E8:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB15F0 */
rv_t func_08AB15F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB15F0:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB15F8 */
rv_t func_08AB15F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB15F8:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB1600 */
rv_t func_08AB1600(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB1600:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB1608 */
rv_t func_08AB1608(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB1608:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB1610 */
rv_t func_08AB1610(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB1610:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB1618 */
u64 func_08AB1618(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08AB1618:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB1654; }
    goto L_08AB1624;
L_08AB1624:;
    t0 = v0 + 0;
    a3 = a0 + 0;
    v0 = LD32(t0);
    goto L_08AB1630;
L_08AB1630:;
    a2 = t0 + 32;
    cnd_ = v0 == a1;
    v1 = a1 < v0;
    if (cnd_) { goto L_08AB165C; }
    goto L_08AB163C;
L_08AB163C:;
    a3 = t0 + 28;
    if (v1 == 0) a3 = a2;
    t0 = LD32(a3);
    cnd_ = t0 != 0;
    if (cnd_) { v0 = LD32(t0); goto L_08AB1630; }
    goto L_08AB1650;
L_08AB1650:;
    v1 = 0 + 0;
    goto L_08AB1654;
L_08AB1654:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB165C:;
    cnd_ = t0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB1654; }
    goto L_08AB1664;
L_08AB1664:;
    v1 = LD32(t0+28);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(t0+32); goto L_08AB16F4; }
    goto L_08AB1670;
L_08AB1670:;
    a1 = LD32(t0+32);
    cnd_ = a1 == 0;
    a2 = LD32(a0+4);
    if (cnd_) { goto L_08AB16EC; }
    goto L_08AB167C;
L_08AB167C:;
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, a1); goto L_08AB16E4; }
    goto L_08AB1688;
L_08AB1688:;
    ST32(a3, v1);
    t1 = LD32(t0+32);
    goto L_08AB1690;
L_08AB1690:;
    v1 = LD32(a3);
    a1 = LD32(t1);
    goto L_08AB1698;
L_08AB1698:;
    v0 = LD32(v1);
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+28); goto L_08AB16D4; }
    goto L_08AB16A8;
L_08AB16A8:;
    v0 = LD32(v1+32);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+32, t1); goto L_08AB16BC; }
    goto L_08AB16B4;
L_08AB16B4:;
    v1 = v0 + 0;
    goto L_08AB1698;
L_08AB16BC:;
    v0 = a2 - 1;
    ST32(a0+4, v0);
    v1 = t0 + 0;
    ST32(t0+28, 0);
    ST32(t0+32, 0);
    goto L_08AB1654;
L_08AB16D4:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v0 + 0; goto L_08AB1698; }
    goto L_08AB16DC;
L_08AB16DC:;
    ST32(v1+28, t1);
    goto L_08AB16BC;
L_08AB16E4:;
    t1 = LD32(t0+28);
    goto L_08AB1690;
L_08AB16EC:;
    ST32(a3, v1);
    goto L_08AB16BC;
L_08AB16F4:;
    a2 = LD32(a0+4);
    ST32(a3, v0);
    goto L_08AB16BC;
}

/* 08AB1700 */
rv_t func_08AB1700(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB1700:;
    v0 = D_08AF74C8 - (29896);
    v0 = v0 + 29896;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_0888C76C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB171C;
L_08AB171C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB1728 */
rv_t func_08AB1728(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB1728:;
    v0 = D_08AF74C8 - (29896);
    v0 = v0 + 29896;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_0888C76C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB1748;
L_08AB1748:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB1750;
L_08AB1750:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB1760 */
rv_t func_08AB1760(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB1760:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB1768 */
rv_t func_08AB1768(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB1768:;
    v0 = D_08B29C94 - (-25452);
    a1 = a0 + 0;
    a0 = LD32(v0-25452);
    sp = sp - 16;
    { rv_t r_ = func_0888E37C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB1784;
L_08AB1784:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB1790 */
rv_t func_08AB1790(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB1790:;
    v0 = D_08B29C94 - (-25452);
    a1 = a0 + 0;
    a0 = LD32(v0-25452);
    sp = sp - 16;
    { rv_t r_ = func_0888E504(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB17AC;
L_08AB17AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB17B8 */
rv_t func_08AB17B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB17B8:;
    v0 = D_08B29C94 - (-25452);
    a1 = a0 + 0;
    a0 = LD32(v0-25452);
    sp = sp - 16;
    { rv_t r_ = func_0888E3F8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB17D4;
L_08AB17D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB17E0 */
rv_t func_08AB17E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB17E0:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB17E8 */
rv_t func_08AB17E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB17E8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB17F0 */
rv_t func_08AB17F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB17F0:;
    v0 = D_08AF7338 - (29496);
    v0 = v0 + 29496;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_0888ECAC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB180C;
L_08AB180C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB1818 */
rv_t func_08AB1818(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB1818:;
    v0 = D_08AF7338 - (29496);
    v0 = v0 + 29496;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_0888ECAC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB1838;
L_08AB1838:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB1840;
L_08AB1840:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB1850 */
void func_08AB1850(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB1850:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = LD32(a1+28);
    cnd_ = a1 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AB18FC; }
    goto L_08AB1874;
L_08AB1874:;
    a1 = LD32(s0+32);
    goto L_08AB1878;
L_08AB1878:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AB18EC; }
    goto L_08AB1880;
L_08AB1880:;
    cnd_ = s0 == 0;
    s2 = s0 + 4;
    if (cnd_) { goto L_08AB18B4; }
    goto L_08AB1888;
L_08AB1888:;
    a0 = LD32(s0+16);
    cnd_ = a0 != 0;
    s1 = s0 + 16;
    if (cnd_) { goto L_08AB18DC; }
    goto L_08AB1894;
L_08AB1894:;
    a0 = LD32(s0+4);
    ST32(s1+4, 0);
    cnd_ = a0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_08AB18CC; }
    goto L_08AB18A4;
L_08AB18A4:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB18B4;
L_08AB18B4:;
    sp = sp + 16;
    return;
L_08AB18CC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB18D4;
L_08AB18D4:;
    ST32(s0+4, 0);
    goto L_08AB18A4;
L_08AB18DC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB18E4;
L_08AB18E4:;
    ST32(s0+16, 0);
    goto L_08AB1894;
L_08AB18EC:;
    a0 = s1 + 0;
    func_08AB1850(a0, a1, t1, t2, t3);
    goto L_08AB18F4;
L_08AB18F4:;
    goto L_08AB1880;
L_08AB18FC:;
    func_08AB1850(a0, a1, t1, t2, t3);
    goto L_08AB1904;
L_08AB1904:;
    a1 = LD32(s0+32);
    goto L_08AB1878;
}

/* 08AB190C */
u64 func_08AB190C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB190C:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AB1950; }
    goto L_08AB1924;
L_08AB1924:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AB192C;
L_08AB192C:;
    a0 = v0 + 32;
    a3 = v0 + 28;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AB1964; }
    goto L_08AB1944;
L_08AB1944:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AB192C; }
    goto L_08AB1950;
L_08AB1950:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AB1964; }
    goto L_08AB195C;
L_08AB195C:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AB1974; }
    goto L_08AB1964;
L_08AB1964:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB1974:;
    a2 = 1;
    { u64 r_ = func_08AB190C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB197C;
L_08AB197C:;
    t0 = v0 + 0;
    goto L_08AB1964;
}

/* 08AB1984 */
rv_t func_08AB1984(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB1984:;
    f0 = BITSF(0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AB1990 */
rv_t func_08AB1990(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB1990:;
    sp = sp - 16;
    v0 = D_08AF7998 - (31128);
    v1 = a0 + 0;
    a1 = LD32(a0+8);
    v0 = v0 + 31128;
    ST32(v1, v0);
    cnd_ = a1 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08AB19C0; }
    goto L_08AB19B4;
L_08AB19B4:;
    goto L_08AB19B8;
L_08AB19B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AB19C0:;
    v0 = LD32(a1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB19D0;
L_08AB19D0:;
    goto L_08AB19B8;
}

/* 08AB19D8 */
rv_t func_08AB19D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB19D8:;
    sp = sp - 16;
    v0 = D_08AF7998 - (31128);
    s0 = a0 + 0;
    v0 = v0 + 31128;
    v1 = LD32(a0+8);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AB1A18; }
    goto L_08AB1A00;
L_08AB1A00:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB1A08;
L_08AB1A08:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AB1A18:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB1A28;
L_08AB1A28:;
    goto L_08AB1A00;
}

/* 08AB1A30 */
rv_t func_08AB1A30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB1A30:;
    sp = sp - 16;
    v0 = D_08AF7998 - (31128);
    s0 = a0 + 0;
    v0 = v0 + 31128;
    v1 = LD32(a0+8);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AB1A70; }
    goto L_08AB1A58;
L_08AB1A58:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB1A60;
L_08AB1A60:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AB1A70:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB1A80;
L_08AB1A80:;
    goto L_08AB1A58;
}

/* 08AB1A88 */
rv_t func_08AB1A88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB1A88:;
    sp = sp - 16;
    v0 = D_08AF7998 - (31128);
    v1 = a0 + 0;
    a1 = LD32(a0+8);
    v0 = v0 + 31128;
    ST32(v1, v0);
    cnd_ = a1 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08AB1AB8; }
    goto L_08AB1AAC;
L_08AB1AAC:;
    goto L_08AB1AB0;
L_08AB1AB0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AB1AB8:;
    v0 = LD32(a1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB1AC8;
L_08AB1AC8:;
    goto L_08AB1AB0;
}

/* 08AB1AD0 */
rv_t func_08AB1AD0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB1AD0:;
    sp = sp - 16;
    v0 = D_08AF7998 - (31128);
    v1 = a0 + 0;
    a1 = LD32(a0+8);
    v0 = v0 + 31128;
    ST32(v1, v0);
    cnd_ = a1 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08AB1B00; }
    goto L_08AB1AF4;
L_08AB1AF4:;
    goto L_08AB1AF8;
L_08AB1AF8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AB1B00:;
    v0 = LD32(a1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB1B10;
L_08AB1B10:;
    goto L_08AB1AF8;
}

/* 08AB1B18 */
rv_t func_08AB1B18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB1B18:;
    sp = sp - 16;
    v0 = D_08AF7998 - (31128);
    s0 = a0 + 0;
    v0 = v0 + 31128;
    v1 = LD32(a0+8);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AB1B58; }
    goto L_08AB1B40;
L_08AB1B40:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB1B48;
L_08AB1B48:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AB1B58:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB1B68;
L_08AB1B68:;
    goto L_08AB1B40;
}

/* 08AB1B70 */
rv_t func_08AB1B70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB1B70:;
    sp = sp - 16;
    v0 = D_08AF7998 - (31128);
    v1 = a0 + 0;
    a1 = LD32(a0+8);
    v0 = v0 + 31128;
    ST32(v1, v0);
    cnd_ = a1 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08AB1BA0; }
    goto L_08AB1B94;
L_08AB1B94:;
    goto L_08AB1B98;
L_08AB1B98:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AB1BA0:;
    v0 = LD32(a1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB1BB0;
L_08AB1BB0:;
    goto L_08AB1B98;
}

/* 08AB1BB8 */
rv_t func_08AB1BB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB1BB8:;
    sp = sp - 16;
    v0 = D_08AF7998 - (31128);
    s0 = a0 + 0;
    v0 = v0 + 31128;
    v1 = LD32(a0+8);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AB1BF8; }
    goto L_08AB1BE0;
L_08AB1BE0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB1BE8;
L_08AB1BE8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AB1BF8:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB1C08;
L_08AB1C08:;
    goto L_08AB1BE0;
}

/* 08AB1C10 */
rv_t func_08AB1C10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB1C10:;
    sp = sp - 16;
    v0 = D_08AF7998 - (31128);
    v1 = a0 + 0;
    a1 = LD32(a0+8);
    v0 = v0 + 31128;
    ST32(v1, v0);
    cnd_ = a1 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08AB1C40; }
    goto L_08AB1C34;
L_08AB1C34:;
    goto L_08AB1C38;
L_08AB1C38:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AB1C40:;
    v0 = LD32(a1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB1C50;
L_08AB1C50:;
    goto L_08AB1C38;
}

/* 08AB1C58 */
rv_t func_08AB1C58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB1C58:;
    sp = sp - 16;
    v0 = D_08AF7998 - (31128);
    s0 = a0 + 0;
    v0 = v0 + 31128;
    v1 = LD32(a0+8);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AB1C98; }
    goto L_08AB1C80;
L_08AB1C80:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB1C88;
L_08AB1C88:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AB1C98:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB1CA8;
L_08AB1CA8:;
    goto L_08AB1C80;
}

/* 08AB1CB0 */
rv_t func_08AB1CB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB1CB0:;
    sp = sp - 16;
    v0 = D_08AF7998 - (31128);
    v1 = a0 + 0;
    a1 = LD32(a0+8);
    v0 = v0 + 31128;
    ST32(v1, v0);
    cnd_ = a1 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08AB1CE0; }
    goto L_08AB1CD4;
L_08AB1CD4:;
    goto L_08AB1CD8;
L_08AB1CD8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AB1CE0:;
    v0 = LD32(a1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB1CF0;
L_08AB1CF0:;
    goto L_08AB1CD8;
}

/* 08AB1CF8 */
rv_t func_08AB1CF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB1CF8:;
    sp = sp - 16;
    v0 = D_08AF7998 - (31128);
    s0 = a0 + 0;
    v0 = v0 + 31128;
    v1 = LD32(a0+8);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AB1D38; }
    goto L_08AB1D20;
L_08AB1D20:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB1D28;
L_08AB1D28:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AB1D38:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB1D48;
L_08AB1D48:;
    goto L_08AB1D20;
}

/* 08AB1D50 */
u32 func_08AB1D50(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08AB1D50:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB1D8C; }
    goto L_08AB1D5C;
L_08AB1D5C:;
    t0 = v0 + 0;
    a3 = a0 + 0;
    v0 = LD32(t0);
    goto L_08AB1D68;
L_08AB1D68:;
    a2 = t0 + 12;
    cnd_ = v0 == a1;
    v1 = a1 < v0;
    if (cnd_) { goto L_08AB1D94; }
    goto L_08AB1D74;
L_08AB1D74:;
    a3 = t0 + 8;
    if (v1 == 0) a3 = a2;
    t0 = LD32(a3);
    cnd_ = t0 != 0;
    if (cnd_) { v0 = LD32(t0); goto L_08AB1D68; }
    goto L_08AB1D88;
L_08AB1D88:;
    v1 = 0 + 0;
    goto L_08AB1D8C;
L_08AB1D8C:;
    v0 = v1 + 0;
    return v0;
L_08AB1D94:;
    cnd_ = t0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB1D8C; }
    goto L_08AB1D9C;
L_08AB1D9C:;
    v1 = LD32(t0+8);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(t0+12); goto L_08AB1E2C; }
    goto L_08AB1DA8;
L_08AB1DA8:;
    a1 = LD32(t0+12);
    cnd_ = a1 == 0;
    a2 = LD32(a0+4);
    if (cnd_) { goto L_08AB1E24; }
    goto L_08AB1DB4;
L_08AB1DB4:;
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, a1); goto L_08AB1E1C; }
    goto L_08AB1DC0;
L_08AB1DC0:;
    ST32(a3, v1);
    t1 = LD32(t0+12);
    goto L_08AB1DC8;
L_08AB1DC8:;
    v1 = LD32(a3);
    a1 = LD32(t1);
    goto L_08AB1DD0;
L_08AB1DD0:;
    v0 = LD32(v1);
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AB1E0C; }
    goto L_08AB1DE0;
L_08AB1DE0:;
    v0 = LD32(v1+12);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+12, t1); goto L_08AB1DF4; }
    goto L_08AB1DEC;
L_08AB1DEC:;
    v1 = v0 + 0;
    goto L_08AB1DD0;
L_08AB1DF4:;
    v0 = a2 - 1;
    ST32(a0+4, v0);
    v1 = t0 + 0;
    ST32(t0+8, 0);
    ST32(t0+12, 0);
    goto L_08AB1D8C;
L_08AB1E0C:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v0 + 0; goto L_08AB1DD0; }
    goto L_08AB1E14;
L_08AB1E14:;
    ST32(v1+8, t1);
    goto L_08AB1DF4;
L_08AB1E1C:;
    t1 = LD32(t0+8);
    goto L_08AB1DC8;
L_08AB1E24:;
    ST32(a3, v1);
    goto L_08AB1DF4;
L_08AB1E2C:;
    a2 = LD32(a0+4);
    ST32(a3, v0);
    goto L_08AB1DF4;
}

/* 08AB1E38 */
u64 func_08AB1E38(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08AB1E38:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB1E74; }
    goto L_08AB1E44;
L_08AB1E44:;
    t0 = v0 + 0;
    a3 = a0 + 0;
    v0 = LD32(t0);
    goto L_08AB1E50;
L_08AB1E50:;
    a2 = t0 + 12;
    cnd_ = v0 == a1;
    v1 = a1 < v0;
    if (cnd_) { goto L_08AB1E7C; }
    goto L_08AB1E5C;
L_08AB1E5C:;
    a3 = t0 + 8;
    if (v1 == 0) a3 = a2;
    t0 = LD32(a3);
    cnd_ = t0 != 0;
    if (cnd_) { v0 = LD32(t0); goto L_08AB1E50; }
    goto L_08AB1E70;
L_08AB1E70:;
    v1 = 0 + 0;
    goto L_08AB1E74;
L_08AB1E74:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB1E7C:;
    cnd_ = t0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB1E74; }
    goto L_08AB1E84;
L_08AB1E84:;
    v1 = LD32(t0+8);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(t0+12); goto L_08AB1F14; }
    goto L_08AB1E90;
L_08AB1E90:;
    a1 = LD32(t0+12);
    cnd_ = a1 == 0;
    a2 = LD32(a0+4);
    if (cnd_) { goto L_08AB1F0C; }
    goto L_08AB1E9C;
L_08AB1E9C:;
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, a1); goto L_08AB1F04; }
    goto L_08AB1EA8;
L_08AB1EA8:;
    ST32(a3, v1);
    t1 = LD32(t0+12);
    goto L_08AB1EB0;
L_08AB1EB0:;
    v1 = LD32(a3);
    a1 = LD32(t1);
    goto L_08AB1EB8;
L_08AB1EB8:;
    v0 = LD32(v1);
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AB1EF4; }
    goto L_08AB1EC8;
L_08AB1EC8:;
    v0 = LD32(v1+12);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+12, t1); goto L_08AB1EDC; }
    goto L_08AB1ED4;
L_08AB1ED4:;
    v1 = v0 + 0;
    goto L_08AB1EB8;
L_08AB1EDC:;
    v0 = a2 - 1;
    ST32(a0+4, v0);
    v1 = t0 + 0;
    ST32(t0+8, 0);
    ST32(t0+12, 0);
    goto L_08AB1E74;
L_08AB1EF4:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v0 + 0; goto L_08AB1EB8; }
    goto L_08AB1EFC;
L_08AB1EFC:;
    ST32(v1+8, t1);
    goto L_08AB1EDC;
L_08AB1F04:;
    t1 = LD32(t0+8);
    goto L_08AB1EB0;
L_08AB1F0C:;
    ST32(a3, v1);
    goto L_08AB1EDC;
L_08AB1F14:;
    a2 = LD32(a0+4);
    ST32(a3, v0);
    goto L_08AB1EDC;
}

/* 08AB1F20 */
void func_08AB1F20(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB1F20:;
    sp = sp - 16;
    s1 = a1 + 0;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08AB1F94; }
    goto L_08AB1F40;
L_08AB1F40:;
    a0 = LD32(a0+12);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_08AB1F80; }
    goto L_08AB1F4C;
L_08AB1F4C:;
    v1 = LD32(s0+16);
    a1 = 1;
    v0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0, s1);
    ST32(s0+16, v1);
    goto L_08AB1F68;
L_08AB1F68:;
    v0 = a1 + 0;
    sp = sp + 16;
    return;
L_08AB1F80:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB1F88;
L_08AB1F88:;
    ST32(s0+12, v0);
    a0 = v0 + 0;
    goto L_08AB1F4C;
L_08AB1F94:;
    v0 = func_08AB1D50(a0, a1);
    goto L_08AB1F9C;
L_08AB1F9C:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08AB1F68; }
    goto L_08AB1FA8;
L_08AB1FA8:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB1FB0;
L_08AB1FB0:;
    a1 = 1;
    goto L_08AB1F68;
}

/* 08AB1FB8 */
u64 func_08AB1FB8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB1FB8:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AB1FFC; }
    goto L_08AB1FD0;
L_08AB1FD0:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AB1FD8;
L_08AB1FD8:;
    a0 = v0 + 12;
    a3 = v0 + 8;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AB2010; }
    goto L_08AB1FF0;
L_08AB1FF0:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AB1FD8; }
    goto L_08AB1FFC;
L_08AB1FFC:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AB2010; }
    goto L_08AB2008;
L_08AB2008:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AB2020; }
    goto L_08AB2010;
L_08AB2010:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB2020:;
    a2 = 1;
    { u64 r_ = func_08AB1FB8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB2028;
L_08AB2028:;
    t0 = v0 + 0;
    goto L_08AB2010;
}

/* 08AB2030 */
void func_08AB2030(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB2030:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB2090; }
    goto L_08AB2054;
L_08AB2054:;
    v0 = LD32(s0+12);
    goto L_08AB2058;
L_08AB2058:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB2080; }
    goto L_08AB2064;
L_08AB2064:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB206C;
L_08AB206C:;
    sp = sp + 16;
    return;
L_08AB2080:;
    func_08AB2030(a0, a1, t1, t2, t3);
    goto L_08AB2088;
L_08AB2088:;
    goto L_08AB2064;
L_08AB2090:;
    func_08AB2030(a0, a1, t1, t2, t3);
    goto L_08AB2098;
L_08AB2098:;
    v0 = LD32(s0+12);
    goto L_08AB2058;
}

/* 08AB20A0 */
void func_08AB20A0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB20A0:;
    sp = sp - 16;
    s1 = a1 + 0;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08AB2114; }
    goto L_08AB20C0;
L_08AB20C0:;
    a0 = LD32(a0+12);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_08AB2100; }
    goto L_08AB20CC;
L_08AB20CC:;
    v1 = LD32(s0+16);
    a1 = 1;
    v0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0, s1);
    ST32(s0+16, v1);
    goto L_08AB20E8;
L_08AB20E8:;
    v0 = a1 + 0;
    sp = sp + 16;
    return;
L_08AB2100:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB2108;
L_08AB2108:;
    ST32(s0+12, v0);
    a0 = v0 + 0;
    goto L_08AB20CC;
L_08AB2114:;
    { u64 r_ = func_08AB1E38(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB211C;
L_08AB211C:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08AB20E8; }
    goto L_08AB2128;
L_08AB2128:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB2130;
L_08AB2130:;
    a1 = 1;
    goto L_08AB20E8;
}

/* 08AB2138 */
u64 func_08AB2138(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB2138:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AB217C; }
    goto L_08AB2150;
L_08AB2150:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AB2158;
L_08AB2158:;
    a0 = v0 + 12;
    a3 = v0 + 8;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AB2190; }
    goto L_08AB2170;
L_08AB2170:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AB2158; }
    goto L_08AB217C;
L_08AB217C:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AB2190; }
    goto L_08AB2188;
L_08AB2188:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AB21A0; }
    goto L_08AB2190;
L_08AB2190:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB21A0:;
    a2 = 1;
    { u64 r_ = func_08AB2138(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB21A8;
L_08AB21A8:;
    t0 = v0 + 0;
    goto L_08AB2190;
}

/* 08AB21B0 */
void func_08AB21B0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB21B0:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB2210; }
    goto L_08AB21D4;
L_08AB21D4:;
    v0 = LD32(s0+12);
    goto L_08AB21D8;
L_08AB21D8:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB2200; }
    goto L_08AB21E4;
L_08AB21E4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB21EC;
L_08AB21EC:;
    sp = sp + 16;
    return;
L_08AB2200:;
    func_08AB21B0(a0, a1, t1, t2, t3);
    goto L_08AB2208;
L_08AB2208:;
    goto L_08AB21E4;
L_08AB2210:;
    func_08AB21B0(a0, a1, t1, t2, t3);
    goto L_08AB2218;
L_08AB2218:;
    v0 = LD32(s0+12);
    goto L_08AB21D8;
}

/* 08AB2220 */
rv_t func_08AB2220(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB2220:;
    v0 = D_08AF7AC0 - (31424);
    v0 = v0 + 31424;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AB2230 */
rv_t func_08AB2230(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB2230:;
    v0 = D_08AF7AC0 - (31424);
    v0 = v0 + 31424;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB224C;
L_08AB224C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB2258 */
rv_t func_08AB2258(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB2258:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB2260 */
rv_t func_08AB2260(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB2260:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB2268 */
rv_t func_08AB2268(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB2268:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB2270 */
rv_t func_08AB2270(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB2270:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB2278 */
rv_t func_08AB2278(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB2278:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB2280 */
rv_t func_08AB2280(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB2280:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB2288 */
rv_t func_08AB2288(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB2288:;
    ST32(a0+40, FBITS(f12));
    return (rv_t){ v0, v1, f0 };
}

/* 08AB2290 */
rv_t func_08AB2290(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB2290:;
    ST32(a0+20, FBITS(f12));
    return (rv_t){ v0, v1, f0 };
}

/* 08AB2298 */
rv_t func_08AB2298(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB2298:;
    f0 = BITSF(LD32(a0+40));
    return (rv_t){ v0, v1, f0 };
}

/* 08AB22A0 */
rv_t func_08AB22A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB22A0:;
    f0 = BITSF(LD32(a0+20));
    return (rv_t){ v0, v1, f0 };
}

/* 08AB22A8 */
rv_t func_08AB22A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB22A8:;
    ST32(a0+24, a1);
    return (rv_t){ v0, v1, f0 };
}

/* 08AB22B0 */
rv_t func_08AB22B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB22B0:;
    ST32(a0+28, a1);
    return (rv_t){ v0, v1, f0 };
}

/* 08AB22B8 */
rv_t func_08AB22B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB22B8:;
    f0 = BITSF(LD32(a0+8));
    return (rv_t){ v0, v1, f0 };
}

/* 08AB22C0 */
rv_t func_08AB22C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB22C0:;
    v0 = D_08AF7AC0 - (31424);
    v0 = v0 + 31424;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AB22D0 */
rv_t func_08AB22D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB22D0:;
    v0 = D_08AF7AC0 - (31424);
    v0 = v0 + 31424;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB22EC;
L_08AB22EC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB22F8 */
rv_t func_08AB22F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB22F8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB2300 */
rv_t func_08AB2300(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB2300:;
    f0 = BITSF(0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AB230C */
rv_t func_08AB230C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB230C:;
    f0 = BITSF(0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AB2318 */
rv_t func_08AB2318(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB2318:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB2320 */
rv_t func_08AB2320(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB2320:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB2328 */
rv_t func_08AB2328(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB2328:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB2330 */
rv_t func_08AB2330(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB2330:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB2338 */
rv_t func_08AB2338(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB2338:;
    f0 = BITSF(0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AB2344 */
void func_08AB2344(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB2344:;
    sp = sp - 16;
    v0 = a1 << 2;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AB2378; }
    goto L_08AB2360;
L_08AB2360:;
    ST32(s0, 0);
    goto L_08AB2364;
L_08AB2364:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB2378:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB2380;
L_08AB2380:;
    ST32(s0, v0);
    goto L_08AB2364;
}

/* 08AB2388 */
void func_08AB2388(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB2388:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB23B8; }
    goto L_08AB23A4;
L_08AB23A4:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB23B8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB23C0;
L_08AB23C0:;
    ST32(s0, 0);
    goto L_08AB23A4;
}

/* 08AB23C8 */
void func_08AB23C8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB23C8:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB23F8; }
    goto L_08AB23E4;
L_08AB23E4:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB23F8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB2400;
L_08AB2400:;
    ST32(s0, 0);
    goto L_08AB23E4;
}

/* 08AB2408 */
void func_08AB2408(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB2408:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB247C; }
    goto L_08AB2424;
L_08AB2424:;
    v0 = LD32(s0+4);
    goto L_08AB2428;
L_08AB2428:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB2464; }
    goto L_08AB2430;
L_08AB2430:;
    s0 = LD32(s0+12);
    goto L_08AB2434;
L_08AB2434:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08AB244C; }
    goto L_08AB243C;
L_08AB243C:;
    goto L_08AB2440;
L_08AB2440:;
    sp = sp + 16;
    return;
L_08AB244C:;
    func_08AB2408(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB2454;
L_08AB2454:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB245C;
L_08AB245C:;
    goto L_08AB2440;
L_08AB2464:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB2474;
L_08AB2474:;
    s0 = LD32(s0+12);
    goto L_08AB2434;
L_08AB247C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB2484;
L_08AB2484:;
    v0 = LD32(s0+4);
    goto L_08AB2428;
}

/* 08AB248C */
u64 func_08AB248C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
L_08AB248C:;
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB253C; }
    goto L_08AB2498;
L_08AB2498:;
    v0 = LD32(a0+12);
    cnd_ = a1 == v0;
    if (cnd_) { v1 = LD32(a0+8); goto L_08AB253C; }
    goto L_08AB24A4;
L_08AB24A4:;
    a2 = LD32(a0);
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08AB24E4; }
    goto L_08AB24B0;
L_08AB24B0:;
    a3 = LD32(a2+8);
    goto L_08AB24B4;
L_08AB24B4:;
    v0 = (s32)a1 < (s32)a3;
    cnd_ = v0 != 0;
    v1 = a2 + 0;
    if (cnd_) { goto L_08AB24D4; }
    goto L_08AB24C0;
L_08AB24C0:;
    v0 = LD32(a0+4);
    v0 = a3 + v0;
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AB24E4; }
    goto L_08AB24D4;
L_08AB24D4:;
    a2 = LD32(a2+12);
    cnd_ = a2 != 0;
    if (cnd_) { a3 = LD32(a2+8); goto L_08AB24B4; }
    goto L_08AB24E0;
L_08AB24E0:;
    v1 = 0 + 0;
    goto L_08AB24E4;
L_08AB24E4:;
    cnd_ = v1 == 0;
    if (cnd_) { v1 = 0 + 0; goto L_08AB253C; }
    goto L_08AB24EC;
L_08AB24EC:;
    a2 = LD32(v1+4);
    v0 = LD32(v1+8);
    t0 = 0 + 0;
    t2 = LD32(a2+12);
    cnd_ = (s32)t2 <= 0;
    t1 = a1 - v0;
    if (cnd_) { goto L_08AB2524; }
    goto L_08AB2504;
L_08AB2504:;
    a2 = LD32(a2+4);
    v0 = LD32(a2);
    goto L_08AB250C;
L_08AB250C:;
    t0 = t0 + 1;
    a3 = (s32)t0 < (s32)t2;
    cnd_ = v0 == t1;
    a2 = a2 + 4;
    if (cnd_) { goto L_08AB2544; }
    goto L_08AB251C;
L_08AB251C:;
    cnd_ = a3 != 0;
    if (cnd_) { v0 = LD32(a2); goto L_08AB250C; }
    goto L_08AB2524;
L_08AB2524:;
    v0 = 0 + 0;
    goto L_08AB2528;
L_08AB2528:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 0 + 0; goto L_08AB253C; }
    goto L_08AB2530;
L_08AB2530:;
    v1 = v0 + 0;
    ST32(a0+12, a1);
    ST32(a0+8, v0);
    goto L_08AB253C;
L_08AB253C:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB2544:;
    v1 = LD32(v1);
    v0 = t1 << 4;
    v0 = v0 - t1;
    v0 = v0 << 2;
    v0 = v1 + v0;
    goto L_08AB2528;
}

/* 08AB255C */
u64 func_08AB255C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08AB255C:;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AB259C; }
    goto L_08AB2568;
L_08AB2568:;
    a2 = LD32(v1+8);
    goto L_08AB256C;
L_08AB256C:;
    v0 = (s32)a1 < (s32)a2;
    cnd_ = v0 != 0;
    a3 = v1 + 0;
    if (cnd_) { goto L_08AB258C; }
    goto L_08AB2578;
L_08AB2578:;
    v0 = LD32(a0+4);
    v0 = a2 + v0;
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AB259C; }
    goto L_08AB258C;
L_08AB258C:;
    v1 = LD32(v1+12);
    cnd_ = v1 != 0;
    if (cnd_) { a2 = LD32(v1+8); goto L_08AB256C; }
    goto L_08AB2598;
L_08AB2598:;
    a3 = 0 + 0;
    goto L_08AB259C;
L_08AB259C:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08AB25A4 */
void func_08AB25A4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB25A4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB25D4; }
    goto L_08AB25C0;
L_08AB25C0:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB25D4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB25DC;
L_08AB25DC:;
    ST32(s0, 0);
    goto L_08AB25C0;
}

/* 08AB25E4 */
void func_08AB25E4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB25E4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB2614; }
    goto L_08AB2600;
L_08AB2600:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB2614:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB261C;
L_08AB261C:;
    ST32(s0, 0);
    goto L_08AB2600;
}

/* 08AB2624 */
void func_08AB2624(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB2624:;
    sp = sp - 16;
    v0 = a1 << 3;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AB2658; }
    goto L_08AB2640;
L_08AB2640:;
    ST32(s0, 0);
    goto L_08AB2644;
L_08AB2644:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB2658:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB2660;
L_08AB2660:;
    ST32(s0, v0);
    goto L_08AB2644;
}

/* 08AB2668 */
rv_t func_08AB2668(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB2668:;
    sp = sp - 16;
    v0 = LD32(a3+44);
    v1 = v0 & 0x1;
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = a3 + 0; goto L_08AB26B0; }
    goto L_08AB2684;
L_08AB2684:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08AB26A0; }
    goto L_08AB268C;
L_08AB268C:;
    { rv_t r_ = func_0884AC90(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB2694;
L_08AB2694:;
    goto L_08AB2698;
L_08AB2698:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AB26A0:;
    { rv_t r_ = func_0889E130(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB26A8;
L_08AB26A8:;
    goto L_08AB2698;
L_08AB26B0:;
    a3 = t0 + 0;
    { rv_t r_ = func_0884B248(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB26B8;
L_08AB26B8:;
    goto L_08AB2698;
}

/* 08AB26C0 */
rv_t func_08AB26C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB26C0:;
    v0 = a0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB26C8 */
rv_t func_08AB26C8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB26C8:;
    sp = sp - 16;
    v1 = LD32(a0+56);
    cnd_ = v1 == 0;
    a2 = a1 + 0;
    if (cnd_) { goto L_08AB2780; }
    goto L_08AB26E0;
L_08AB26E0:;
    v0 = a1 << 1;
    v0 = v0 + v1;
    s0 = LD_U16(v0);
    goto L_08AB26EC;
L_08AB26EC:;
    a1 = LD32(a0+64);
    cnd_ = a1 == 0;
    if (cnd_) { v0 = (u32)(s32)LD_S16(a0+34); goto L_08AB2704; }
    goto L_08AB26F8;
L_08AB26F8:;
    v0 = a2 << 1;
    v0 = v0 + a1;
    v0 = (u32)(s32)LD_S16(v0);
    goto L_08AB2704;
L_08AB2704:;
    a0 = (u32)(s32)(s16)v0;
    { u64 r_ = func_088353B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB270C;
L_08AB270C:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB275C; }
    goto L_08AB2714;
L_08AB2714:;
    v0 = LD32(v0+32);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AB2770; }
    goto L_08AB2720;
L_08AB2720:;
    a1 = LD32(a0+24);
    goto L_08AB2724;
L_08AB2724:;
    cnd_ = a1 == 0;
    v0 = (u32)(s32)(s16)s0;
    if (cnd_) { goto L_08AB2760; }
    goto L_08AB272C;
L_08AB272C:;
    v0 = 0x80000u;
    v0 = a1 & v0;
    a0 = s0 | 0x2;
    if (v0 != 0) s0 = a0;
    v1 = 0x200000u;
    v1 = a1 & v1;
    a0 = s0 | 0x4;
    if (v1 != 0) s0 = a0;
    v0 = 0x400000u;
    v0 = a1 & v0;
    v1 = s0 | 0x8;
    if (v0 != 0) s0 = v1;
    goto L_08AB275C;
L_08AB275C:;
    v0 = (u32)(s32)(s16)s0;
    goto L_08AB2760;
L_08AB2760:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AB2770:;
    { rv_t r_ = func_0883563C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB2778;
L_08AB2778:;
    a1 = v0 + 0;
    goto L_08AB2724;
L_08AB2780:;
    s0 = LD_U16(a0+32);
    goto L_08AB26EC;
}

/* 08AB2788 */
u32 func_08AB2788(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB2788:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AB27CC; }
    goto L_08AB27A0;
L_08AB27A0:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AB27A8;
L_08AB27A8:;
    a0 = v0 + 48;
    a3 = v0 + 44;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AB27E0; }
    goto L_08AB27C0;
L_08AB27C0:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AB27A8; }
    goto L_08AB27CC;
L_08AB27CC:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AB27E0; }
    goto L_08AB27D8;
L_08AB27D8:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AB27F0; }
    goto L_08AB27E0;
L_08AB27E0:;
    v0 = t0 + 0;
    sp = sp + 16;
    return v0;
L_08AB27F0:;
    a2 = 1;
    v0 = func_08AB2788(a0, a1, a2);
    goto L_08AB27F8;
L_08AB27F8:;
    t0 = v0 + 0;
    goto L_08AB27E0;
}

/* 08AB2800 */
void func_08AB2800(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB2800:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = LD32(a1+44);
    cnd_ = a1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08AB28EC; }
    goto L_08AB2820;
L_08AB2820:;
    a1 = LD32(s1+48);
    goto L_08AB2824;
L_08AB2824:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AB28DC; }
    goto L_08AB282C;
L_08AB282C:;
    cnd_ = s1 == 0;
    s0 = s1 + 4;
    if (cnd_) { goto L_08AB28A8; }
    goto L_08AB2834;
L_08AB2834:;
    v0 = LD_U8(s0+28);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+24); goto L_08AB2884; }
    goto L_08AB2840;
L_08AB2840:;
    v0 = LD32(s0+12);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+24); goto L_08AB2884; }
    goto L_08AB284C;
L_08AB284C:;
    a0 = LD32(s0+16);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s0+12, 0); goto L_08AB2880; }
    goto L_08AB2858;
L_08AB2858:;
    v1 = LD32(a0-4);
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    v0 = a0 + v0;
    goto L_08AB286C;
L_08AB286C:;
    cnd_ = a0 != v0;
    v0 = v0 - 12;
    if (cnd_) { goto L_08AB286C; }
    goto L_08AB2874;
L_08AB2874:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB287C;
L_08AB287C:;
    ST32(s0+12, 0);
    goto L_08AB2880;
L_08AB2880:;
    a0 = LD32(s0+24);
    goto L_08AB2884;
L_08AB2884:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AB28CC; }
    goto L_08AB288C;
L_08AB288C:;
    a0 = LD32(s0);
    goto L_08AB2890;
L_08AB2890:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AB28BC; }
    goto L_08AB2898;
L_08AB2898:;
    ST32(s0+4, 0);
    a0 = s1 + 0;
    ST32(s0+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB28A8;
L_08AB28A8:;
    sp = sp + 16;
    return;
L_08AB28BC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB28C4;
L_08AB28C4:;
    ST32(s0, 0);
    goto L_08AB2898;
L_08AB28CC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB28D4;
L_08AB28D4:;
    a0 = LD32(s0);
    goto L_08AB2890;
L_08AB28DC:;
    a0 = s0 + 0;
    func_08AB2800(a0, a1, t1, t2, t3);
    goto L_08AB28E4;
L_08AB28E4:;
    goto L_08AB282C;
L_08AB28EC:;
    func_08AB2800(a0, a1, t1, t2, t3);
    goto L_08AB28F4;
L_08AB28F4:;
    a1 = LD32(s1+48);
    goto L_08AB2824;
}

/* 08AB28FC */
void func_08AB28FC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB28FC:;
    sp = sp - 32;
    v0 = LD_U8(a0+16);
    cnd_ = v0 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08AB2A18; }
    goto L_08AB2928;
L_08AB2928:;
    v0 = D_08B2AE4C - (-20916);
    goto L_08AB292C;
L_08AB292C:;
    v1 = LD32(v0-20916);
    a0 = LD32(s2);
    a2 = 1;
    s1 = LD_U16(v1+16);
    s5 = LD32(v1+4);
    s3 = LD_U16(v1+18);
    s0 = s1 ^ 0x5a;
    s0 = 0 < s0;
    a1 = s0 + 0;
    func_08830D78(a0, a1, a2);
    goto L_08AB2954;
L_08AB2954:;
    s4 = s5 - 1000;
    cnd_ = s0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08AB2A08; }
    goto L_08AB2960;
L_08AB2960:;
    v0 = D_08B2AE42 - (-20926);
    goto L_08AB2964;
L_08AB2964:;
    s0 = LD_U16(v0-20926);
    a0 = LD32(s2);
    a2 = 1;
    s0 = s0 ^ s3;
    s0 = 0 < s0;
    a1 = s0 + 0;
    func_08830D78(a0, a1, a2);
    goto L_08AB2980;
L_08AB2980:;
    cnd_ = s0 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08AB29F8; }
    goto L_08AB2988;
L_08AB2988:;
    a0 = LD32(s2);
    goto L_08AB298C;
L_08AB298C:;
    s0 = s4 < 0x20u;
    s0 = s0 ^ 0x1;
    a2 = 1;
    a1 = s0 + 0;
    func_08830D78(a0, a1, a2);
    goto L_08AB29A0;
L_08AB29A0:;
    a0 = s5 + 0;
    a1 = s4 + 0;
    cnd_ = s0 == 0;
    a2 = 5;
    if (cnd_) { goto L_08AB29E8; }
    goto L_08AB29B0;
L_08AB29B0:;
    a1 = LD32(s2);
    func_088A3124(a0, a1);
    goto L_08AB29B8;
L_08AB29B8:;
    v0 = LD32(s2+4);
    goto L_08AB29BC;
L_08AB29BC:;
    v0 = v0 + 1;
    ST32(s2+4, v0);
    sp = sp + 32;
    return;
L_08AB29E8:;
    a0 = LD32(s2);
    func_08830D78(a0, a1, a2);
    goto L_08AB29F0;
L_08AB29F0:;
    v0 = LD32(s2+4);
    goto L_08AB29BC;
L_08AB29F8:;
    a1 = LD32(s2);
    func_088A3244(a0, a1);
    goto L_08AB2A00;
L_08AB2A00:;
    a0 = LD32(s2);
    goto L_08AB298C;
L_08AB2A08:;
    a1 = LD32(s2);
    func_088A31D4(a0, a1);
    goto L_08AB2A10;
L_08AB2A10:;
    v0 = D_08B2AE42 - (-20926);
    goto L_08AB2964;
L_08AB2A18:;
    func_08AB34BC(a0);
    goto L_08AB2A20;
L_08AB2A20:;
    v0 = D_08B2AE4C - (-20916);
    goto L_08AB292C;
}

/* 08AB2A28 */
void func_08AB2A28(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08AB2A28:;
    sp = sp - 48;
    f21 = BITSF(0);
    v1 = 1;
    s1 = a1 + 0;
    f12 = BITSF(LD32(a1));
    s0 = a0 + 0;
    fcc = FCMP(f12, f21, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08AB2A60; }
    goto L_08AB2A5C;
L_08AB2A5C:;
    v1 = 0 + 0;
    goto L_08AB2A60;
L_08AB2A60:;
    v0 = LD_U16(s0);
    v0 = (v0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    ST16(s0, v0);
    a0 = sp + 0;
    f0 = func_08A89374(a0, f12);
    goto L_08AB2A74;
L_08AB2A74:;
    a0 = LD_U16(s0);
    v0 = a0 & 0x1;
    cnd_ = v0 == 0;
    f2 = f0;
    if (cnd_) { goto L_08AB2A94; }
    goto L_08AB2A84;
L_08AB2A84:;
    f2 = BITSF(FBITS(f0) ^ 0x80000000u);
    f0 = BITSF(LD32(sp));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(sp, FBITS(f0));
    goto L_08AB2A94;
L_08AB2A94:;
    v1 = D_08AEC484 - (-15228);
    f20 = BITSF(LD32(v1-15228));
    f0 = BITSF(LD32(sp));
    v0 = a0 + 0;
    f2 = f2 * f20;
    f1 = BITSF(F2I(f0, 1));
    f0 = BITSF(F2I(f2, 1));
    a0 = FBITS(f0);
    v0 = (v0 & ~(0xfu << 10)) | ((a0 & 0xf) << 10);
    a0 = FBITS(f1);
    v0 = (v0 & ~(0x1ffu << 1)) | ((a0 & 0x1ff) << 1);
    ST16(s0, v0);
    f12 = BITSF(LD32(s1+4));
    fcc = FCMP(f12, f21, 12);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_08AB2ADC; }
    goto L_08AB2AD8;
L_08AB2AD8:;
    v1 = 0 + 0;
    goto L_08AB2ADC;
L_08AB2ADC:;
    v0 = LD_U16(s0+2);
    v0 = (v0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    ST16(s0+2, v0);
    a0 = sp + 0;
    f0 = func_08A89374(a0, f12);
    goto L_08AB2AF0;
L_08AB2AF0:;
    v1 = LD_U16(s0+2);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    f2 = f0;
    if (cnd_) { goto L_08AB2B10; }
    goto L_08AB2B00;
L_08AB2B00:;
    f2 = BITSF(FBITS(f0) ^ 0x80000000u);
    f0 = BITSF(LD32(sp));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(sp, FBITS(f0));
    goto L_08AB2B10;
L_08AB2B10:;
    f2 = f2 * f20;
    f0 = BITSF(LD32(sp));
    v0 = v1 + 0;
    f1 = BITSF(F2I(f2, 1));
    f2 = BITSF(F2I(f0, 1));
    a0 = FBITS(f1);
    v0 = (v0 & ~(0xfu << 6)) | ((a0 & 0xf) << 6);
    a0 = FBITS(f2);
    v0 = (v0 & ~(0x1fu << 1)) | ((a0 & 0x1f) << 1);
    ST16(s0+2, v0);
    f12 = BITSF(LD32(s1+8));
    fcc = FCMP(f12, f21, 12);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_08AB2B50; }
    goto L_08AB2B4C;
L_08AB2B4C:;
    v1 = 0 + 0;
    goto L_08AB2B50;
L_08AB2B50:;
    v0 = LD_U16(s0+4);
    v0 = (v0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    ST16(s0+4, v0);
    a0 = sp + 0;
    f0 = func_08A89374(a0, f12);
    goto L_08AB2B64;
L_08AB2B64:;
    v1 = LD_U16(s0+4);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    f2 = f0;
    if (cnd_) { goto L_08AB2B84; }
    goto L_08AB2B74;
L_08AB2B74:;
    f2 = BITSF(FBITS(f0) ^ 0x80000000u);
    f0 = BITSF(LD32(sp));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(sp, FBITS(f0));
    goto L_08AB2B84;
L_08AB2B84:;
    f2 = f2 * f20;
    f0 = BITSF(LD32(sp));
    v0 = v1 + 0;
    f1 = BITSF(F2I(f2, 1));
    f2 = BITSF(F2I(f0, 1));
    v1 = FBITS(f1);
    a0 = FBITS(f2);
    v0 = (v0 & ~(0xfu << 10)) | ((v1 & 0xf) << 10);
    v0 = (v0 & ~(0x1ffu << 1)) | ((a0 & 0x1ff) << 1);
    ST16(s0+4, v0);
    sp = sp + 48;
    return;
}

/* 08AB2BC8 */
void func_08AB2BC8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_08AB2BC8:;
    a2 = a0 + 0;
    a0 = LD_U16(a0);
    v0 = D_08AEC488 - (-15224);
    f2 = BITSF(LD32(v0-15224));
    v1 = a0 & 0xffff;
    v0 = (v1 >> 10) & 0xf;
    f0 = BITSF(v0);
    v1 = (v1 >> 1) & 0x1ff;
    f1 = BITSF(v1);
    f0 = (float)(s32)FBITS(f0);
    a0 = a0 & 0x1;
    f1 = (float)(s32)FBITS(f1);
    f0 = f0 * f2;
    cnd_ = a0 == 0;
    f1 = f1 + f0;
    if (cnd_) { goto L_08AB2C08; }
    goto L_08AB2C04;
L_08AB2C04:;
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    goto L_08AB2C08;
L_08AB2C08:;
    v1 = LD_U16(a2+2);
    ST32(a1, FBITS(f1));
    v0 = v1 & 0xffff;
    a0 = (v0 >> 6) & 0xf;
    f0 = BITSF(a0);
    v0 = (v0 >> 1) & 0x1f;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f0);
    v1 = v1 & 0x1;
    f1 = (float)(s32)FBITS(f1);
    f0 = f0 * f2;
    cnd_ = v1 == 0;
    f1 = f1 + f0;
    if (cnd_) { goto L_08AB2C40; }
    goto L_08AB2C3C;
L_08AB2C3C:;
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    goto L_08AB2C40;
L_08AB2C40:;
    v1 = LD_U16(a2+4);
    ST32(a1+4, FBITS(f1));
    v0 = v1 & 0xffff;
    a0 = (v0 >> 10) & 0xf;
    f0 = BITSF(a0);
    v0 = (v0 >> 1) & 0x1ff;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f0);
    v1 = v1 & 0x1;
    f1 = (float)(s32)FBITS(f1);
    f0 = f0 * f2;
    cnd_ = v1 == 0;
    f1 = f1 + f0;
    if (cnd_) { goto L_08AB2C78; }
    goto L_08AB2C74;
L_08AB2C74:;
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    goto L_08AB2C78;
L_08AB2C78:;
    ST32(a1+8, FBITS(f1));
    return;
}

/* 08AB2C80 */
void func_08AB2C80(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08AB2C80:;
    sp = sp - 48;
    f21 = BITSF(0);
    v1 = 1;
    s1 = a1 + 0;
    f12 = BITSF(LD32(a1));
    s0 = a0 + 0;
    fcc = FCMP(f12, f21, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08AB2CB8; }
    goto L_08AB2CB4;
L_08AB2CB4:;
    v1 = 0 + 0;
    goto L_08AB2CB8;
L_08AB2CB8:;
    v0 = LD32(s0);
    v0 = (v0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    ST32(s0, v0);
    a0 = sp + 0;
    f0 = func_08A89374(a0, f12);
    goto L_08AB2CCC;
L_08AB2CCC:;
    a0 = LD32(s0);
    v0 = a0 & 0x1;
    cnd_ = v0 == 0;
    f2 = f0;
    if (cnd_) { goto L_08AB2CEC; }
    goto L_08AB2CDC;
L_08AB2CDC:;
    f2 = BITSF(FBITS(f0) ^ 0x80000000u);
    f0 = BITSF(LD32(sp));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(sp, FBITS(f0));
    goto L_08AB2CEC;
L_08AB2CEC:;
    v1 = D_08AEC48C - (-15220);
    f20 = BITSF(LD32(v1-15220));
    f0 = BITSF(LD32(sp));
    v0 = a0 + 0;
    f2 = f2 * f20;
    f1 = BITSF(F2I(f0, 1));
    f0 = BITSF(F2I(f2, 1));
    a0 = FBITS(f0);
    v0 = (v0 & ~(0xfu << 13)) | ((a0 & 0xf) << 13);
    a0 = FBITS(f1);
    v0 = (v0 & ~(0xfffu << 1)) | ((a0 & 0xfff) << 1);
    ST32(s0, v0);
    f12 = BITSF(LD32(s1+4));
    fcc = FCMP(f12, f21, 12);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_08AB2D34; }
    goto L_08AB2D30;
L_08AB2D30:;
    v1 = 0 + 0;
    goto L_08AB2D34;
L_08AB2D34:;
    v0 = LD32(s0+4);
    v0 = (v0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    ST32(s0+4, v0);
    a0 = sp + 0;
    f0 = func_08A89374(a0, f12);
    goto L_08AB2D48;
L_08AB2D48:;
    v1 = LD32(s0+4);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    f2 = f0;
    if (cnd_) { goto L_08AB2D68; }
    goto L_08AB2D58;
L_08AB2D58:;
    f2 = BITSF(FBITS(f0) ^ 0x80000000u);
    f0 = BITSF(LD32(sp));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(sp, FBITS(f0));
    goto L_08AB2D68;
L_08AB2D68:;
    f2 = f2 * f20;
    f0 = BITSF(LD32(sp));
    v0 = v1 + 0;
    f1 = BITSF(F2I(f2, 1));
    f2 = BITSF(F2I(f0, 1));
    a0 = FBITS(f1);
    v0 = (v0 & ~(0xfu << 11)) | ((a0 & 0xf) << 11);
    a0 = FBITS(f2);
    v0 = (v0 & ~(0x3ffu << 1)) | ((a0 & 0x3ff) << 1);
    ST32(s0+4, v0);
    f12 = BITSF(LD32(s1+8));
    fcc = FCMP(f12, f21, 12);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_08AB2DA8; }
    goto L_08AB2DA4;
L_08AB2DA4:;
    v1 = 0 + 0;
    goto L_08AB2DA8;
L_08AB2DA8:;
    v0 = LD32(s0+8);
    v0 = (v0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    ST32(s0+8, v0);
    a0 = sp + 0;
    f0 = func_08A89374(a0, f12);
    goto L_08AB2DBC;
L_08AB2DBC:;
    v1 = LD32(s0+8);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    f2 = f0;
    if (cnd_) { goto L_08AB2DDC; }
    goto L_08AB2DCC;
L_08AB2DCC:;
    f2 = BITSF(FBITS(f0) ^ 0x80000000u);
    f0 = BITSF(LD32(sp));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(sp, FBITS(f0));
    goto L_08AB2DDC;
L_08AB2DDC:;
    f2 = f2 * f20;
    f0 = BITSF(LD32(sp));
    v0 = v1 + 0;
    f1 = BITSF(F2I(f2, 1));
    f2 = BITSF(F2I(f0, 1));
    v1 = FBITS(f1);
    a0 = FBITS(f2);
    v0 = (v0 & ~(0xfu << 13)) | ((v1 & 0xf) << 13);
    v0 = (v0 & ~(0xfffu << 1)) | ((a0 & 0xfff) << 1);
    ST32(s0+8, v0);
    sp = sp + 48;
    return;
}

/* 08AB2E20 */
void func_08AB2E20(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_08AB2E20:;
    a2 = LD32(a0);
    v0 = a2 >> 13;
    v1 = v0 & 0xf;
    f0 = BITSF(v1);
    cnd_ = (s32)v1 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08AB2F98; }
    goto L_08AB2E38;
L_08AB2E38:;
    v0 = a2 >> 1;
    a3 = D_08AEC490 - (-15216);
    v1 = v0 & 0xfff;
    f0 = BITSF(LD32(a3-15216));
    f2 = BITSF(v1);
    f1 = f1 * f0;
    cnd_ = (s32)v1 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08AB2F7C; }
    goto L_08AB2E58;
L_08AB2E58:;
    v0 = LD32(a0);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    f0 = f0 + f1;
    if (cnd_) { goto L_08AB2E6C; }
    goto L_08AB2E68;
L_08AB2E68:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    goto L_08AB2E6C;
L_08AB2E6C:;
    a2 = LD32(a0+4);
    ST32(a1, FBITS(f0));
    v0 = a2 >> 11;
    v1 = v0 & 0xf;
    f0 = BITSF(v1);
    cnd_ = (s32)v1 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08AB2F60; }
    goto L_08AB2E88;
L_08AB2E88:;
    v0 = a2 >> 1;
    v1 = v0 & 0x3ff;
    f0 = BITSF(LD32(a3-15216));
    f2 = BITSF(v1);
    f1 = f1 * f0;
    cnd_ = (s32)v1 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08AB2F44; }
    goto L_08AB2EA4;
L_08AB2EA4:;
    v0 = LD32(a0+4);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    f0 = f0 + f1;
    if (cnd_) { goto L_08AB2EB8; }
    goto L_08AB2EB4;
L_08AB2EB4:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    goto L_08AB2EB8;
L_08AB2EB8:;
    a2 = LD32(a0+8);
    ST32(a1+4, FBITS(f0));
    v0 = a2 >> 13;
    v1 = v0 & 0xf;
    f0 = BITSF(v1);
    cnd_ = (s32)v1 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08AB2F28; }
    goto L_08AB2ED4;
L_08AB2ED4:;
    v0 = a2 >> 1;
    v1 = v0 & 0xfff;
    f0 = BITSF(LD32(a3-15216));
    f2 = BITSF(v1);
    f1 = f1 * f0;
    cnd_ = (s32)v1 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08AB2F0C; }
    goto L_08AB2EF0;
L_08AB2EF0:;
    v0 = LD32(a0+8);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    f0 = f0 + f1;
    if (cnd_) { goto L_08AB2F04; }
    goto L_08AB2F00;
L_08AB2F00:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    goto L_08AB2F04;
L_08AB2F04:;
    ST32(a1+8, FBITS(f0));
    return;
L_08AB2F0C:;
    v0 = v0 & 0x1;
    v1 = v1 >> 1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08AB2EF0;
L_08AB2F28:;
    v0 = v0 & 0x1;
    v1 = v1 >> 1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f1 = (float)(s32)FBITS(f2);
    f1 = f1 + f1;
    goto L_08AB2ED4;
L_08AB2F44:;
    v0 = v0 & 0x1;
    v1 = v1 >> 1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08AB2EA4;
L_08AB2F60:;
    v0 = v0 & 0x1;
    v1 = v1 >> 1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f1 = (float)(s32)FBITS(f2);
    f1 = f1 + f1;
    goto L_08AB2E88;
L_08AB2F7C:;
    v0 = v0 & 0x1;
    v1 = v1 >> 1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08AB2E58;
L_08AB2F98:;
    v0 = v0 & 0x1;
    v1 = v1 >> 1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f1 = (float)(s32)FBITS(f2);
    f1 = f1 + f1;
    goto L_08AB2E38;
}

/* 08AB2FB4 */
void func_08AB2FB4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08AB2FB4:;
    v1 = LD32(a0+8);
    cnd_ = v1 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_08AB3000; }
    goto L_08AB2FC0;
L_08AB2FC0:;
    a2 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a2+4);
    a0 = a2 + 0;
    goto L_08AB2FD0;
L_08AB2FD0:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AB3028; }
    goto L_08AB2FDC;
L_08AB2FDC:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a1+8, a0);
    if (cnd_) { goto L_08AB3010; }
    goto L_08AB2FF0;
L_08AB2FF0:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB3028; }
    goto L_08AB3000;
L_08AB3000:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_08AB2FF0; }
    goto L_08AB300C;
L_08AB300C:;
    a2 = LD32(a1);
    goto L_08AB3010;
L_08AB3010:;
    v1 = LD32(a1+4);
    a0 = a2 + 0;
    v1 = v1 + 1;
    ST32(a1+4, v1);
    v0 = LD32(a2+4);
    goto L_08AB2FD0;
L_08AB3028:;
    return;
}

/* 08AB3030 */
void func_08AB3030(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB3030:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AB30C4; }
    goto L_08AB305C;
L_08AB305C:;
    v0 = LD32(s1);
    goto L_08AB3060;
L_08AB3060:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08AB30B4; }
    goto L_08AB3074;
L_08AB3074:;
    v0 = LD_U8(s0+8);
    goto L_08AB3078;
L_08AB3078:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08AB30F4; }
    goto L_08AB3080;
L_08AB3080:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AB30E4; }
    goto L_08AB3088;
L_08AB3088:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08AB3090;
L_08AB3090:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB309C;
L_08AB309C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08AB30A8;
L_08AB30A8:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08AB3078; }
    goto L_08AB30B0;
L_08AB30B0:;
    v1 = LD32(s1+4);
    goto L_08AB30B4;
L_08AB30B4:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AB3060; }
    goto L_08AB30C4;
L_08AB30C4:;
    sp = sp + 32;
    return;
L_08AB30E4:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08AB3090;
L_08AB30F4:;
    s0 = LD32(s0+4);
    goto L_08AB30A8;
}

/* 08AB30FC */
void func_08AB30FC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08AB30FC:;
    v1 = LD32(a0+8);
    cnd_ = v1 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_08AB3148; }
    goto L_08AB3108;
L_08AB3108:;
    a2 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a2+4);
    a0 = a2 + 0;
    goto L_08AB3118;
L_08AB3118:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AB3170; }
    goto L_08AB3124;
L_08AB3124:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a1+8, a0);
    if (cnd_) { goto L_08AB3158; }
    goto L_08AB3138;
L_08AB3138:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB3170; }
    goto L_08AB3148;
L_08AB3148:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_08AB3138; }
    goto L_08AB3154;
L_08AB3154:;
    a2 = LD32(a1);
    goto L_08AB3158;
L_08AB3158:;
    v1 = LD32(a1+4);
    a0 = a2 + 0;
    v1 = v1 + 1;
    ST32(a1+4, v1);
    v0 = LD32(a2+4);
    goto L_08AB3118;
L_08AB3170:;
    return;
}

/* 08AB3178 */
void func_08AB3178(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08AB3178:;
    v1 = LD32(a0+8);
    cnd_ = v1 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_08AB31C4; }
    goto L_08AB3184;
L_08AB3184:;
    a2 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a2+4);
    a0 = a2 + 0;
    goto L_08AB3194;
L_08AB3194:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AB31EC; }
    goto L_08AB31A0;
L_08AB31A0:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a1+8, a0);
    if (cnd_) { goto L_08AB31D4; }
    goto L_08AB31B4;
L_08AB31B4:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB31EC; }
    goto L_08AB31C4;
L_08AB31C4:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_08AB31B4; }
    goto L_08AB31D0;
L_08AB31D0:;
    a2 = LD32(a1);
    goto L_08AB31D4;
L_08AB31D4:;
    v1 = LD32(a1+4);
    a0 = a2 + 0;
    v1 = v1 + 1;
    ST32(a1+4, v1);
    v0 = LD32(a2+4);
    goto L_08AB3194;
L_08AB31EC:;
    return;
}

/* 08AB31F4 */
void func_08AB31F4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB31F4:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AB3288; }
    goto L_08AB3220;
L_08AB3220:;
    v0 = LD32(s1);
    goto L_08AB3224;
L_08AB3224:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08AB3278; }
    goto L_08AB3238;
L_08AB3238:;
    v0 = LD_U8(s0+8);
    goto L_08AB323C;
L_08AB323C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08AB32B8; }
    goto L_08AB3244;
L_08AB3244:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AB32A8; }
    goto L_08AB324C;
L_08AB324C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08AB3254;
L_08AB3254:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB3260;
L_08AB3260:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08AB326C;
L_08AB326C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08AB323C; }
    goto L_08AB3274;
L_08AB3274:;
    v1 = LD32(s1+4);
    goto L_08AB3278;
L_08AB3278:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AB3224; }
    goto L_08AB3288;
L_08AB3288:;
    sp = sp + 32;
    return;
L_08AB32A8:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08AB3254;
L_08AB32B8:;
    s0 = LD32(s0+4);
    goto L_08AB326C;
}

/* 08AB32C0 */
void func_08AB32C0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB32C0:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AB3354; }
    goto L_08AB32EC;
L_08AB32EC:;
    v0 = LD32(s1);
    goto L_08AB32F0;
L_08AB32F0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08AB3344; }
    goto L_08AB3304;
L_08AB3304:;
    v0 = LD_U8(s0+8);
    goto L_08AB3308;
L_08AB3308:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08AB3384; }
    goto L_08AB3310;
L_08AB3310:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AB3374; }
    goto L_08AB3318;
L_08AB3318:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08AB3320;
L_08AB3320:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB332C;
L_08AB332C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08AB3338;
L_08AB3338:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08AB3308; }
    goto L_08AB3340;
L_08AB3340:;
    v1 = LD32(s1+4);
    goto L_08AB3344;
L_08AB3344:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AB32F0; }
    goto L_08AB3354;
L_08AB3354:;
    sp = sp + 32;
    return;
L_08AB3374:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08AB3320;
L_08AB3384:;
    s0 = LD32(s0+4);
    goto L_08AB3338;
}

/* 08AB338C */
void func_08AB338C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB338C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD_U16(a1);
    a0 = LD_U16(a1+2);
    v1 = LD32(s0+4);
    v0 = v0 << 16;
    v0 = v0 | a0;
    v1 = v1 - 1;
    a0 = LD32(s0);
    v0 = v0 & v1;
    v0 = v0 << 2;
    v0 = v0 + a0;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB33F0; }
    goto L_08AB33D0;
L_08AB33D0:;
    a2 = v0 + 0;
    v0 = LD32(a0);
    goto L_08AB33D8;
L_08AB33D8:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AB3404; }
    goto L_08AB33E0;
L_08AB33E0:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AB33D8; }
    goto L_08AB33F0;
L_08AB33F0:;
    v0 = 0 + 0;
    goto L_08AB33F4;
L_08AB33F4:;
    sp = sp + 16;
    return;
L_08AB3404:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AB3418; }
    goto L_08AB340C;
L_08AB340C:;
    ST8(a0+8, v0);
    goto L_08AB3410;
L_08AB3410:;
    v0 = 1;
    goto L_08AB33F4;
L_08AB3418:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AB343C; }
    goto L_08AB3420;
L_08AB3420:;
    ST32(v1+4, v0);
    goto L_08AB3424;
L_08AB3424:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB342C;
L_08AB342C:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AB3410;
L_08AB343C:;
    ST32(a2, v0);
    goto L_08AB3424;
}

/* 08AB3444 */
u64 func_08AB3444(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08AB3444:;
    v0 = 999;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AB34A0; }
    goto L_08AB3450;
L_08AB3450:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08AB34A0; }
    goto L_08AB3474;
L_08AB3474:;
    v0 = LD32(a2);
    goto L_08AB3478;
L_08AB3478:;
    v1 = LD_U16(v0);
    a0 = LD_U16(v0+2);
    v1 = v1 << 16;
    v1 = v1 | a0;
    cnd_ = v1 == a1;
    a3 = v0 + 0;
    if (cnd_) { goto L_08AB34A8; }
    goto L_08AB3490;
L_08AB3490:;
    a2 = LD32(a2+4);
    goto L_08AB3494;
L_08AB3494:;
    cnd_ = a2 != 0;
    if (cnd_) { v0 = LD32(a2); goto L_08AB3478; }
    goto L_08AB349C;
L_08AB349C:;
    a3 = 0 + 0;
    goto L_08AB34A0;
L_08AB34A0:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB34A8:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08AB3494; }
    goto L_08AB34B4;
L_08AB34B4:;
    goto L_08AB34A0;
}

/* 08AB34BC */
void func_08AB34BC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB34BC:;
    sp = sp - 32;
    v0 = D_08B285B4 - (-31308);
    s1 = a0 + 0;
    f21 = BITSF(0);
    f0 = BITSF(LD32(a0+12));
    f1 = BITSF(LD32(v0-31308));
    f20 = f1 - f0;
    fcc = FCMP(f21, f20, 12);
    cnd_ = fcc;
    a0 = 0 + 0;
    if (cnd_) { goto L_08AB351C; }
    goto L_08AB34FC;
L_08AB34FC:;
    ST8(s1+16, 0);
    goto L_08AB3500;
L_08AB3500:;
    sp = sp + 32;
    return;
L_08AB351C:;
    v0 = func_088A323C();
    goto L_08AB3524;
L_08AB3524:;
    a1 = LD32(s1);
    v0 = v0 + 11;
    a0 = LD32(a1);
    v1 = LD32(a1+8);
    a0 = a0 + v0;
    v1 = v1 << 3;
    a0 = a0 < v1;
    cnd_ = a0 == 0;
    if (cnd_) { ST8(s1+16, 0); goto L_08AB3500; }
    goto L_08AB3548;
L_08AB3548:;
    v0 = D_08AEC494 - (-15212);
    f0 = BITSF(LD32(v0-15212));
    f1 = f20 * f0;
    fcc = FCMP(f21, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEC498 - (-15208);
    if (cnd_) { goto L_08AB35BC; }
    goto L_08AB3564;
L_08AB3564:;
    f0 = BITSF(LD32(v0-15208));
    f0 = f1 + f0;
    goto L_08AB356C;
L_08AB356C:;
    f0 = BITSF(F2I(f0, 1));
    a0 = a1 + 0;
    a2 = 1;
    a1 = 1;
    v1 = FBITS(f0);
    s0 = 1023;
    v0 = v1 < 0x400u;
    if (v0 != 0) s0 = v1;
    func_08830D78(a0, a1, a2);
    goto L_08AB3590;
L_08AB3590:;
    a1 = LD32(s1);
    a0 = 0 + 0;
    func_088A31D4(a0, a1);
    goto L_08AB359C;
L_08AB359C:;
    a0 = LD32(s1);
    a1 = s0 + 0;
    a2 = 10;
    func_08830D78(a0, a1, a2);
    goto L_08AB35AC;
L_08AB35AC:;
    v0 = LD32(s1+8);
    v0 = v0 + 1;
    ST32(s1+8, v0);
    goto L_08AB34FC;
L_08AB35BC:;
    f0 = BITSF(LD32(v0-15208));
    f0 = f1 - f0;
    goto L_08AB356C;
}

/* 08AB35C8 */
rv_t func_08AB35C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB35C8:;
    v0 = D_08AF7BA0 - (31648);
    v0 = v0 + 31648;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_088A8814(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB35E4;
L_08AB35E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB35F0 */
rv_t func_08AB35F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB35F0:;
    v0 = D_08AF7BA0 - (31648);
    v0 = v0 + 31648;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_088A8814(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB3610;
L_08AB3610:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB3618;
L_08AB3618:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB3628 */
u32 func_08AB3628(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB3628:;
    sp = sp - 16;
    v1 = a1 + 0;
    s2 = a0 + 0;
    s1 = a2 + 0;
    v0 = LD32(a1+4);
    cnd_ = v0 == a2;
    s0 = a1 + 0;
    if (cnd_) { goto L_08AB3678; }
    goto L_08AB3654;
L_08AB3654:;
    v0 = LD32(a1+8);
    v1 = 0 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB36A4; }
    goto L_08AB3664;
L_08AB3664:;
    v0 = LD32(s0+12);
    goto L_08AB3668;
L_08AB3668:;
    a0 = s2 + 0;
    a2 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB3694; }
    goto L_08AB3678;
L_08AB3678:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08AB3694:;
    v0 = func_08AB3628(a0, a1, a2);
    goto L_08AB369C;
L_08AB369C:;
    v1 = v0 + 0;
    goto L_08AB3678;
L_08AB36A4:;
    v0 = func_08AB3628(a0, a1, a2);
    goto L_08AB36AC;
L_08AB36AC:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08AB3678; }
    goto L_08AB36B4;
L_08AB36B4:;
    v0 = LD32(s0+12);
    goto L_08AB3668;
}

/* 08AB36BC */
u32 func_08AB36BC(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB36BC:;
    sp = sp - 16;
    t1 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08AB3700; }
    goto L_08AB36D4;
L_08AB36D4:;
    a3 = t1 + 0;
    v0 = LD32(a0);
    goto L_08AB36DC;
L_08AB36DC:;
    t0 = a0 + 12;
    cnd_ = v0 == a1;
    v1 = a1 < v0;
    if (cnd_) { goto L_08AB370C; }
    goto L_08AB36E8;
L_08AB36E8:;
    a3 = a0 + 8;
    if (v1 == 0) a3 = t0;
    a0 = LD32(a3);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AB36DC; }
    goto L_08AB36FC;
L_08AB36FC:;
    v0 = 0 + 0;
    goto L_08AB3700;
L_08AB3700:;
    sp = sp + 16;
    return v0;
L_08AB370C:;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08AB3700; }
    goto L_08AB3714;
L_08AB3714:;
    v1 = LD32(a0+8);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(a0+12); goto L_08AB37A8; }
    goto L_08AB3720;
L_08AB3720:;
    a1 = LD32(a0+12);
    cnd_ = a1 == 0;
    if (cnd_) { ST32(a3, v1); goto L_08AB3770; }
    goto L_08AB372C;
L_08AB372C:;
    v0 = LD32(t1+8);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, a1); goto L_08AB37A0; }
    goto L_08AB373C;
L_08AB373C:;
    ST32(a3, v1);
    t0 = LD32(a0+12);
    goto L_08AB3744;
L_08AB3744:;
    v1 = LD32(a3);
    a1 = LD32(t0);
    goto L_08AB374C;
L_08AB374C:;
    v0 = LD32(v1);
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AB3790; }
    goto L_08AB375C;
L_08AB375C:;
    v0 = LD32(v1+12);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+12, t0); goto L_08AB3770; }
    goto L_08AB3768;
L_08AB3768:;
    v1 = v0 + 0;
    goto L_08AB374C;
L_08AB3770:;
    v1 = LD32(a0+4);
    ST32(a2, v1);
    v0 = LD32(t1+8);
    v0 = v0 - 1;
    ST32(t1+8, v0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB3788;
L_08AB3788:;
    v0 = 1;
    goto L_08AB3700;
L_08AB3790:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v0 + 0; goto L_08AB374C; }
    goto L_08AB3798;
L_08AB3798:;
    ST32(v1+8, t0);
    goto L_08AB3770;
L_08AB37A0:;
    t0 = LD32(a0+8);
    goto L_08AB3744;
L_08AB37A8:;
    ST32(a3, v0);
    goto L_08AB3770;
}

/* 08AB37B0 */
u32 func_08AB37B0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08AB37B0:;
    a1 = LD32(a0+256);
    cnd_ = a1 == 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08AB381C; }
    goto L_08AB37BC;
L_08AB37BC:;
    v0 = D_08B285B0 - (-31312);
    v1 = LD32(v0-31312);
    a0 = LD32(a0+4);
    v1 = v1 - a0;
    v1 = v1 < 0x7530u;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08AB381C; }
    goto L_08AB37D8;
L_08AB37D8:;
    v0 = a1 - 1;
    ST32(a2+256, v0);
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    a3 = LD32(a2);
    if (cnd_) { goto L_08AB3814; }
    goto L_08AB37EC;
L_08AB37EC:;
    a0 = a2 + 0;
    goto L_08AB37F0;
L_08AB37F0:;
    v0 = LD32(a0+8);
    v1 = LD32(a0+12);
    a1 = a1 + 1;
    ST32(a0, v0);
    ST32(a0+4, v1);
    v0 = LD32(a2+256);
    v0 = a1 < v0;
    cnd_ = v0 != 0;
    a0 = a0 + 8;
    if (cnd_) { goto L_08AB37F0; }
    goto L_08AB3814;
L_08AB3814:;
    v0 = a3 + 0;
    return v0;
L_08AB381C:;
    v0 = 999;
    return v0;
}

/* 08AB3824 */
void func_08AB3824(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB3824:;
    sp = sp - 32;
    a1 = 8;
    s3 = a0 + 0;
    a2 = 0 + 0;
    a0 = 96;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB3858;
L_08AB3858:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08AB38C0; }
    goto L_08AB3860;
L_08AB3860:;
    ST32(v0, 0);
    ST32(v0+4, 0);
    v0 = LD32(s3+4);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08AB38B8; }
    goto L_08AB3874;
L_08AB3874:;
    s4 = 1;
    s0 = s3 + 8;
    v1 = LD32(s1+24);
    goto L_08AB3880;
L_08AB3880:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    a2 = 1;
    cnd_ = v1 == 0;
    s2 = s2 + 1;
    if (cnd_) { goto L_08AB38A0; }
    goto L_08AB3894;
L_08AB3894:;
    v0 = LD32(s0);
    ST32(v1+4, s4);
    ST32(v1, v0);
    goto L_08AB38A0;
L_08AB38A0:;
    s0 = s0 + 4;
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB38A8;
L_08AB38A8:;
    v0 = LD32(s3+4);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+24); goto L_08AB3880; }
    goto L_08AB38B8;
L_08AB38B8:;
    a0 = s1 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB38C0;
L_08AB38C0:;
    sp = sp + 32;
    return;
}

/* 08AB38E0 */
void func_08AB38E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, u32 sp_in)
{
    u32 v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32); memcpy(stack_ + 32, PTR(sp_in), 16); /* stack-passed arguments */
L_08AB38E0:;
    sp = sp - 32;
    v0 = t0 + 0;
    t0 = t1 + 0;
    s0 = a0 + 0;
    v1 = LD32(a1);
    t4 = LD32(a1+4);
    a1 = D_08AD8190 - (-32368);
    ST32(a0, v1);
    a1 = a1 - 32368;
    ST32(a0+4, t4);
    a0 = a0 + 20;
    ST32(s0+16, v0);
    v0 = 1;
    ST32(s0+12, a3);
    a3 = 1;
    ST32(s0+84, t2);
    ST32(s0+88, t3);
    ST16(s0+8, a2);
    a2 = 31;
    ST8(s0+92, v0);
    s2 = LD32(sp+44);
    ST32(sp, v1);
    ST32(sp+4, t4);
    s1 = LD32(sp+36);
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB3954;
L_08AB3954:;
    v1 = LD32(s0+96);
    cnd_ = v1 == 0;
    ST16(s0+82, 0);
    if (cnd_) { goto L_08AB3984; }
    goto L_08AB3960;
L_08AB3960:;
    v0 = LD32(s0+100);
    cnd_ = v0 == s1;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AB397C; }
    goto L_08AB396C;
L_08AB396C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB3974;
L_08AB3974:;
    ST32(s0+96, 0);
    v1 = 0 + 0;
    goto L_08AB397C;
L_08AB397C:;
    cnd_ = v1 != 0;
    a1 = LD32(sp+32);
    if (cnd_) { goto L_08AB3998; }
    goto L_08AB3984;
L_08AB3984:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB398C;
L_08AB398C:;
    ST32(s0+96, v0);
    v1 = v0 + 0;
    a1 = LD32(sp+32);
    goto L_08AB3998;
L_08AB3998:;
    a0 = v1 + 0;
    a2 = s1 + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB39A4;
L_08AB39A4:;
    v1 = LD32(s0+104);
    a0 = s2 + 0;
    cnd_ = v1 == 0;
    ST32(s0+100, s1);
    if (cnd_) { goto L_08AB39CC; }
    goto L_08AB39B4;
L_08AB39B4:;
    v0 = LD32(s0+108);
    cnd_ = v0 == s2;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AB39DC; }
    goto L_08AB39C0;
L_08AB39C0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB39C8;
L_08AB39C8:;
    a0 = s2 + 0;
    goto L_08AB39CC;
L_08AB39CC:;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB39D4;
L_08AB39D4:;
    ST32(s0+104, v0);
    v1 = v0 + 0;
    goto L_08AB39DC;
L_08AB39DC:;
    a1 = LD32(sp+40);
    a2 = s2 + 0;
    a0 = v1 + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB39EC;
L_08AB39EC:;
    ST32(s0+108, s2);
    sp = sp + 32;
    return;
}

/* 08AB3A08 */
rv_t func_08AB3A08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB3A08:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_088AE5BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB3A20;
L_08AB3A20:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB3A2C */
rv_t func_08AB3A2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB3A2C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_088AE60C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB3A44;
L_08AB3A44:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB3A50 */
void func_08AB3A50(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB3A50:;
    sp = sp - 16;
    a2 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a1);
    a0 = LD32(a0+4);
    a1 = LD32(s0);
    v1 = LD32(v0-12);
    a0 = a0 - 1;
    v1 = a2 + v1;
    v0 = LD32(v1+4);
    v0 = v0 & a0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB3AB8; }
    goto L_08AB3A98;
L_08AB3A98:;
    a1 = v0 + 0;
    v0 = LD32(a0);
    goto L_08AB3AA0;
L_08AB3AA0:;
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AB3ACC; }
    goto L_08AB3AA8;
L_08AB3AA8:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AB3AA0; }
    goto L_08AB3AB8;
L_08AB3AB8:;
    v0 = 0 + 0;
    goto L_08AB3ABC;
L_08AB3ABC:;
    sp = sp + 16;
    return;
L_08AB3ACC:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AB3AE0; }
    goto L_08AB3AD4;
L_08AB3AD4:;
    ST8(a0+8, v0);
    goto L_08AB3AD8;
L_08AB3AD8:;
    v0 = 1;
    goto L_08AB3ABC;
L_08AB3AE0:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AB3B04; }
    goto L_08AB3AE8;
L_08AB3AE8:;
    ST32(v1+4, v0);
    goto L_08AB3AEC;
L_08AB3AEC:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB3AF4;
L_08AB3AF4:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AB3AD8;
L_08AB3B04:;
    ST32(a1, v0);
    goto L_08AB3AEC;
}

/* 08AB3B0C */
u64 func_08AB3B0C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB3B0C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AB3B60; }
    goto L_08AB3B44;
L_08AB3B44:;
    v0 = LD32(a0);
    goto L_08AB3B48;
L_08AB3B48:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AB3B74; }
    goto L_08AB3B50;
L_08AB3B50:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AB3B48; }
    goto L_08AB3B60;
L_08AB3B60:;
    v0 = 0 + 0;
    goto L_08AB3B64;
L_08AB3B64:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB3B74:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AB3B88; }
    goto L_08AB3B7C;
L_08AB3B7C:;
    ST8(a0+8, v0);
    goto L_08AB3B80;
L_08AB3B80:;
    v0 = 1;
    goto L_08AB3B64;
L_08AB3B88:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AB3BAC; }
    goto L_08AB3B90;
L_08AB3B90:;
    ST32(a2+4, v0);
    goto L_08AB3B94;
L_08AB3B94:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB3B9C;
L_08AB3B9C:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AB3B80;
L_08AB3BAC:;
    ST32(v1, v0);
    goto L_08AB3B94;
}

/* 08AB3BB4 */
void func_08AB3BB4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08AB3BB4:;
    v0 = LD32(a0+8);
    cnd_ = v0 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_08AB3C10; }
    goto L_08AB3BC0;
L_08AB3BC0:;
    a2 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a2+4);
    a0 = a2 + 0;
    goto L_08AB3BD0;
L_08AB3BD0:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AB3C08; }
    goto L_08AB3BDC;
L_08AB3BDC:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 != 0;
    ST32(a1+8, a0);
    if (cnd_) { goto L_08AB3C08; }
    goto L_08AB3BF0;
L_08AB3BF0:;
    v1 = LD32(a1+4);
    a0 = a2 + 0;
    v1 = v1 + 1;
    ST32(a1+4, v1);
    v0 = LD32(a2+4);
    goto L_08AB3BD0;
L_08AB3C08:;
    return;
L_08AB3C10:;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08AB3C08; }
    goto L_08AB3C1C;
L_08AB3C1C:;
    a2 = LD32(a0);
    goto L_08AB3BF0;
}

/* 08AB3C24 */
rv_t func_08AB3C24(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, t9 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr16 = v[16], vr17 = v[17], vr18 = v[18];
    u8 stack_[368] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 368);
L_08AB3C24:;
    sp = sp - 368;
    t9 = a0 + 32;
    t8 = a1 + 32;
    s7 = a1 + 0;
    fp = sp + 0;
    s6 = a0 + 0;
    s5 = 0 + 0;
    a1 = LD32(t9+32);
    v0 = LD32(a0+32);
    v1 = LD32(t9+8);
    ST32(sp+292, a1);
    a1 = LD32(t9+36);
    ST32(sp+288, v0);
    ST32(sp+296, a1);
    a1 = LD32(t9+40);
    v0 = LD32(t9+4);
    a0 = LD32(t9+12);
    ST32(sp+300, a1);
    a1 = LD32(t9+44);
    t4 = LD32(t9+16);
    t5 = LD32(t9+20);
    ST32(sp+304, a1);
    a1 = LD32(sp+288);
    t6 = LD32(t9+24);
    t7 = LD32(t9+28);
    s4 = LD32(s7+32);
    s0 = LD32(t8+4);
    s1 = LD32(t8+8);
    s2 = LD32(t8+12);
    s3 = LD32(t8+16);
    ST32(sp, a1);
    ST32(sp+4, v0);
    a1 = LD32(sp+292);
    ST32(sp+244, v0);
    ST32(sp+32, a1);
    a1 = LD32(sp+296);
    ST32(sp+248, v1);
    ST32(sp+36, a1);
    a1 = LD32(sp+300);
    ST32(sp+252, a0);
    ST32(sp+40, a1);
    a1 = LD32(sp+304);
    ST32(sp+256, s4);
    ST32(sp+44, a1);
    a1 = LD32(sp+288);
    ST32(sp+260, s0);
    ST32(sp+240, a1);
    ST32(sp+264, s1);
    {u32 a_=sp+(240);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    ST32(sp+268, s2);
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+8, v1);
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    ST32(sp+12, a0);
    ST32(sp+16, t4);
    ST32(sp+20, t5);
    ST32(sp+24, t6);
    ST32(sp+28, t7);
    ST32(sp+48, s4);
    ST32(sp+52, s0);
    ST32(sp+56, s1);
    ST32(sp+60, s2);
    ST32(sp+64, s3);
    t1 = LD32(t8+20);
    t2 = LD32(t8+24);
    t3 = LD32(t8+28);
    ST32(sp+240, s3);
    ST32(sp+256, a1);
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+260, v0);
    ST32(sp+264, v1);
    ST32(sp+268, a0);
    ST32(sp+244, t1);
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+248, t2);
    ST32(sp+252, t3);
    {u32 a_=sp+(240);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    a1 = LD32(t8+32);
    a2 = LD32(t8+36);
    a3 = LD32(t8+40);
    t0 = LD32(t8+44);
    ST32(sp+260, v0);
    v0 = LD32(sp+288);
    ST32(sp+264, v1);
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    ST32(sp+256, v0);
    ST32(sp+268, a0);
    ST32(sp+240, a1);
    {u32 a_=sp+(256);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    ST32(sp+244, a2);
    ST32(sp+248, a3);
    ST32(sp+252, t0);
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    ST32(sp+68, t1);
    ST32(sp+72, t2);
    ST32(sp+76, t3);
    ST32(sp+80, a1);
    ST32(sp+84, a2);
    ST32(sp+88, a3);
    ST32(sp+92, t0);
    ST32(sp+256, t4);
    ST32(sp+260, t5);
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+264, t6);
    ST32(sp+268, t7);
    ST32(sp+240, s4);
    {u32 a_=sp+(256);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    ST32(sp+244, s0);
    ST32(sp+248, s1);
    ST32(sp+252, s2);
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    ST32(sp+256, t4);
    ST32(sp+260, t5);
    ST32(sp+264, t6);
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+268, t7);
    ST32(sp+240, s3);
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+244, t1);
    ST32(sp+248, t2);
    ST32(sp+252, t3);
    {u32 a_=sp+(240);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    ST32(sp+256, t4);
    v0 = LD32(sp+292);
    ST32(sp+260, t5);
    ST32(sp+264, t6);
    {u32 a_=sp+(160);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+268, t7);
    ST32(sp+240, a1);
    {u32 a_=sp+(256);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    ST32(sp+244, a2);
    ST32(sp+248, a3);
    ST32(sp+252, t0);
    ST32(sp+256, v0);
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    ST32(sp+244, s0);
    v0 = LD32(sp+296);
    ST32(sp+248, s1);
    ST32(sp+260, v0);
    {u32 a_=sp+(176);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+300);
    ST32(sp+252, s2);
    ST32(sp+264, v0);
    v0 = LD32(sp+304);
    ST32(sp+240, s4);
    ST32(sp+268, v0);
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = LD32(sp+292);
    {u32 a_=sp+(256);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    ST32(sp+256, v0);
    v0 = LD32(sp+296);
    ST32(sp+240, s3);
    ST32(sp+260, v0);
    {u32 a_=sp+(192);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    v0 = LD32(sp+300);
    ST32(sp+244, t1);
    ST32(sp+264, v0);
    v0 = LD32(sp+304);
    ST32(sp+248, t2);
    ST32(sp+268, v0);
    ST32(sp+252, t3);
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    v0 = LD32(sp+292);
    ST32(sp+256, v0);
    v0 = LD32(sp+296);
    {u32 a_=sp+(208);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    ST32(sp+260, v0);
    v0 = LD32(sp+300);
    ST32(sp+264, v0);
    v0 = LD32(sp+304);
    ST32(sp+240, a1);
    ST32(sp+268, v0);
    v0 = D_08AEC4D8 - (-15144);
    ST32(sp+244, a2);
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+248, a3);
    ST32(sp+252, t0);
    {u32 a_=sp+(240);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    f7 = BITSF(LD32(v0-15144));
    {u32 a_=sp+(224);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    goto L_08AB3F3C;
L_08AB3F3C:;
    {u32 a_=fp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {a1=FBITS(vr0);}
    f0 = BITSF(a1);
    fcc = FCMP(f0, f7, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(t9+4); goto L_08AB3F9C; }
    goto L_08AB3F5C;
L_08AB3F5C:;
    s5 = s5 + 1;
    goto L_08AB3F60;
L_08AB3F60:;
    v0 = s5 < 0xfu;
    cnd_ = v0 != 0;
    fp = fp + 16;
    if (cnd_) { goto L_08AB3F3C; }
    goto L_08AB3F6C;
L_08AB3F6C:;
    v0 = 1;
    goto L_08AB3F70;
L_08AB3F70:;
    sp = sp + 368;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[16]=vr16;v[17]=vr17;v[18]=vr18;return (rv_t){ v0, v1, f0 }; }
L_08AB3F9C:;
    v1 = LD32(t9+8);
    a0 = LD32(t9+12);
    ST32(sp+260, v0);
    v0 = LD32(sp+288);
    {u32 a_=s6+(16);vr12=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    ST32(sp+264, v1);
    ST32(sp+268, a0);
    ST32(sp+256, v0);
    v0 = LD32(t9+16);
    v1 = LD32(t9+20);
    a0 = LD32(t9+24);
    a1 = LD32(t9+28);
    {u32 a_=fp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+240, v0);
    {u32 a_=sp+(256);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+244, v1);
    {v0=FBITS(vr0);}
    v0 = (v0 >> 0) & 0x7fffffff;
    ST32(sp+248, a0);
    f2 = BITSF(v0);
    ST32(sp+252, a1);
    v0 = LD32(t9+32);
    v1 = LD32(t9+36);
    a0 = LD32(t9+40);
    a1 = LD32(t9+44);
    {u32 a_=fp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+272, v0);
    {u32 a_=sp+(240);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+276, v1);
    {v0=FBITS(vr0);}
    v0 = (v0 >> 0) & 0x7fffffff;
    ST32(sp+280, a0);
    f1 = BITSF(v0);
    ST32(sp+284, a1);
    f3 = BITSF(LD32(s6));
    {u32 a_=fp+(0);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(s6+4));
    f4 = BITSF(LD32(s6+8));
    {u32 a_=sp+(272);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+272, s4);
    {float s0=vr16;float s1=vr17;float s2=vr18;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f1 = f1 * f0;
    v0 = LD32(t8+4);
    v1 = LD32(t8+8);
    a0 = LD32(t8+12);
    ST32(sp+276, v0);
    {v0=FBITS(vr0);}
    v0 = (v0 >> 0) & 0x7fffffff;
    ST32(sp+280, v1);
    f0 = BITSF(v0);
    f2 = f2 * f3;
    ST32(sp+284, a0);
    f0 = f0 * f4;
    {float s0=vr12;float s1=v[13];float s2=v[14];float t0=vr16;float t1=vr17;float t2=vr18;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr12=sum;}
    v0 = LD32(t8+16);
    v1 = LD32(t8+20);
    a0 = LD32(t8+24);
    a1 = LD32(t8+28);
    {u32 a_=s7+(16);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=fp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+256, v0);
    {u32 a_=sp+(272);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+268, a1);
    {v0=FBITS(vr0);}
    v0 = (v0 >> 0) & 0x7fffffff;
    ST32(sp+260, v1);
    f2 = f2 + f1;
    f3 = BITSF(v0);
    ST32(sp+264, a0);
    {a1=FBITS(vr12);}
    f5 = BITSF(a1);
    v0 = LD32(t8+32);
    v1 = LD32(t8+36);
    a0 = LD32(t8+40);
    a1 = LD32(t8+44);
    {u32 a_=fp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    f1 = BITSF(LD32(s7));
    f4 = BITSF(LD32(s7+4));
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+240, v0);
    {v0=FBITS(vr0);}
    v0 = (v0 >> 0) & 0x7fffffff;
    ST32(sp+244, v1);
    f2 = f2 + f0;
    f0 = BITSF(v0);
    ST32(sp+248, a0);
    f3 = f3 * f1;
    f0 = f0 * f4;
    ST32(sp+252, a1);
    f6 = f5 + f2;
    f5 = f5 - f2;
    {u32 a_=fp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(LD32(s7+8));
    f1 = BITSF(v0);
    f3 = f3 + f0;
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr8=sum;}
    f1 = f1 * f2;
    {v0=FBITS(vr8);}
    f0 = BITSF(v0);
    f2 = BITSF(v0);
    f3 = f3 + f1;
    f0 = f0 - f3;
    fcc = FCMP(f6, f0, 12);
    cnd_ = fcc;
    f2 = f2 + f3;
    if (cnd_) { goto L_08AB4174; }
    goto L_08AB4164;
L_08AB4164:;
    fcc = FCMP(f2, f5, 12);
    cnd_ = !fcc;
    s5 = s5 + 1;
    if (cnd_) { goto L_08AB3F60; }
    goto L_08AB4174;
L_08AB4174:;
    v0 = 0 + 0;
    goto L_08AB3F70;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[16]=vr16;v[17]=vr17;v[18]=vr18;
}

/* 08AB417C */
rv_t func_08AB417C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB417C:;
    v0 = D_08AF7C38 - (31800);
    v0 = v0 + 31800;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_088AE8AC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB4198;
L_08AB4198:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB41A4 */
rv_t func_08AB41A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB41A4:;
    v0 = D_08AF7C38 - (31800);
    v0 = v0 + 31800;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_088AE8AC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB41C4;
L_08AB41C4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB41CC;
L_08AB41CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB41DC */
void func_08AB41DC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB41DC:;
    ST32(a0+4, 0);
    sp = sp - 16;
    v0 = LD32(a0);
    ST32(a0+20, 0);
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08AB4234; }
    goto L_08AB41F8;
L_08AB41F8:;
    ST32(a0+4, v0);
    a1 = a0 + 8;
    goto L_08AB4200;
L_08AB4200:;
    a0 = LD32(a2+4);
    ST32(sp+4, 0);
    v0 = LD32(a0+4);
    ST32(a2+12, 0);
    ST32(a2+8, v0);
    v1 = LD32(v0+12);
    ST32(sp, v0);
    v1 = v1 - 1;
    cnd_ = (s32)v1 >= 0;
    ST32(a1+4, v1);
    if (cnd_) { goto L_08AB423C; }
    goto L_08AB4228;
L_08AB4228:;
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    ST32(a2+4, v0);
    if (cnd_) { goto L_08AB4200; }
    goto L_08AB4234;
L_08AB4234:;
    sp = sp + 16;
    return;
L_08AB423C:;
    a1 = LD32(a2+8);
    v1 = v1 << 2;
    a0 = LD32(a0);
    v0 = LD32(a1+4);
    v1 = v1 + v0;
    a1 = LD32(v1);
    v0 = 108;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(a2+16, a1);
    v0 = lo;
    a0 = a0 + v0;
    ST32(a2+20, a0);
    goto L_08AB4234;
}

/* 08AB4270 */
void func_08AB4270(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB4270:;
    a1 = a0 + 8;
    v0 = LD32(a1+4);
    a2 = a0 + 0;
    sp = sp - 16;
    v0 = v0 - 1;
    a0 = a1 + 0;
    cnd_ = (s32)v0 >= 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_08AB42C4; }
    goto L_08AB4290;
L_08AB4290:;
    v0 = LD32(a2+4);
    v0 = LD32(v0+12);
    cnd_ = v0 == 0;
    ST32(a2+4, v0);
    if (cnd_) { goto L_08AB42FC; }
    goto L_08AB42A0;
L_08AB42A0:;
    v1 = LD32(v0+4);
    ST32(sp+4, 0);
    ST32(a2+8, v1);
    ST32(a2+12, 0);
    v0 = LD32(v1+12);
    ST32(sp, v1);
    v0 = v0 - 1;
    cnd_ = (s32)v0 < 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08AB4290; }
    goto L_08AB42C4;
L_08AB42C4:;
    a0 = LD32(a2+8);
    v0 = LD32(a1+4);
    a1 = LD32(a2+4);
    v1 = LD32(a0+4);
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v0 = 108;
    v1 = LD32(a1);
    { s64 p_ = (s64)(s32)a0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(a2+16, a0);
    v0 = lo;
    v1 = v1 + v0;
    ST32(a2+20, v1);
    goto L_08AB42FC;
L_08AB42FC:;
    sp = sp + 16;
    return;
}

/* 08AB4304 */
void func_08AB4304(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB4304:;
    sp = sp - 16;
    v1 = (u32)-1;
    cnd_ = a1 == v1;
    a3 = a1 + 0;
    if (cnd_) { goto L_08AB4384; }
    goto L_08AB4318;
L_08AB4318:;
    v0 = LD32(a0+12);
    cnd_ = a1 == v0;
    if (cnd_) { ST32(a0+12, v1); goto L_08AB4324; }
    goto L_08AB4324;
L_08AB4324:;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AB4364; }
    goto L_08AB4330;
L_08AB4330:;
    a1 = LD32(v1+8);
    goto L_08AB4334;
L_08AB4334:;
    v0 = (s32)a3 < (s32)a1;
    cnd_ = v0 != 0;
    a2 = v1 + 0;
    if (cnd_) { goto L_08AB4354; }
    goto L_08AB4340;
L_08AB4340:;
    v0 = LD32(a0+4);
    v0 = a1 + v0;
    v0 = (s32)a3 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AB4364; }
    goto L_08AB4354;
L_08AB4354:;
    v1 = LD32(v1+12);
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(v1+8); goto L_08AB4334; }
    goto L_08AB4360;
L_08AB4360:;
    a2 = 0 + 0;
    goto L_08AB4364;
L_08AB4364:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08AB4388; }
    goto L_08AB436C;
L_08AB436C:;
    a0 = LD32(a2+4);
    a1 = LD32(a2+8);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = a3 - a1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB4384;
L_08AB4384:;
    goto L_08AB4388;
L_08AB4388:;
    sp = sp + 16;
    return;
}

/* 08AB4390 */
void func_08AB4390(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB4390:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_08AB43E8; }
    goto L_08AB43B0;
L_08AB43B0:;
    v0 = LD32(a0-4);
    v1 = 108;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = a0 + v0;
    goto L_08AB43C4;
L_08AB43C4:;
    cnd_ = a0 == s0;
    s0 = s0 - 108;
    if (cnd_) { goto L_08AB43DC; }
    goto L_08AB43CC;
L_08AB43CC:;
    a0 = s0 + 52;
    { rv_t r_ = func_088B8B58(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB43D4;
L_08AB43D4:;
    a0 = LD32(s1);
    goto L_08AB43C4;
L_08AB43DC:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB43E4;
L_08AB43E4:;
    a0 = LD32(s1+4);
    goto L_08AB43E8;
L_08AB43E8:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08AB4428; }
    goto L_08AB43F0;
L_08AB43F0:;
    s0 = LD32(s1+12);
    goto L_08AB43F4;
L_08AB43F4:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08AB4410; }
    goto L_08AB43FC;
L_08AB43FC:;
    goto L_08AB4400;
L_08AB4400:;
    sp = sp + 16;
    return;
L_08AB4410:;
    a0 = s0 + 0;
    func_08AB4390(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB4418;
L_08AB4418:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB4420;
L_08AB4420:;
    goto L_08AB4400;
L_08AB4428:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB4434;
L_08AB4434:;
    s0 = LD32(s1+12);
    goto L_08AB43F4;
}

/* 08AB443C */
void func_08AB443C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08AB443C:;
    v1 = LD32(a0+8);
    cnd_ = v1 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_08AB4488; }
    goto L_08AB4448;
L_08AB4448:;
    a2 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a2+4);
    a0 = a2 + 0;
    goto L_08AB4458;
L_08AB4458:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AB44B0; }
    goto L_08AB4464;
L_08AB4464:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a1+8, a0);
    if (cnd_) { goto L_08AB4498; }
    goto L_08AB4478;
L_08AB4478:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB44B0; }
    goto L_08AB4488;
L_08AB4488:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_08AB4478; }
    goto L_08AB4494;
L_08AB4494:;
    a2 = LD32(a1);
    goto L_08AB4498;
L_08AB4498:;
    v1 = LD32(a1+4);
    a0 = a2 + 0;
    v1 = v1 + 1;
    ST32(a1+4, v1);
    v0 = LD32(a2+4);
    goto L_08AB4458;
L_08AB44B0:;
    return;
}

/* 08AB44B8 */
u64 func_08AB44B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08AB44B8:;
    sp = sp - 96;
    fp = a3 & 0xff;
    s7 = t0 & 0xff;
    s5 = a0 + 0;
    f1 = BITSF(LD32(a2+4));
    f0 = BITSF(LD32(a2));
    f3 = BITSF(LD32(a0+132));
    ST32(sp, a1);
    f5 = f1 - f0;
    fcc = FCMP(f3, f5, 14);
    cnd_ = fcc;
    f2 = f5;
    if (cnd_) { goto L_08AB4518; }
    goto L_08AB4514;
L_08AB4514:;
    f2 = f3;
    goto L_08AB4518;
L_08AB4518:;
    ST32(s5+132, FBITS(f2));
    f1 = BITSF(LD32(a2+12));
    f0 = BITSF(LD32(a2+8));
    f4 = f1 - f0;
    fcc = FCMP(f2, f4, 14);
    cnd_ = fcc;
    f3 = f4;
    if (cnd_) { goto L_08AB453C; }
    goto L_08AB4538;
L_08AB4538:;
    f3 = f2;
    goto L_08AB453C;
L_08AB453C:;
    ST32(s5+132, FBITS(f3));
    f1 = BITSF(LD32(a2+20));
    f0 = BITSF(LD32(a2+16));
    f0 = f1 - f0;
    fcc = FCMP(f3, f0, 14);
    cnd_ = fcc;
    f2 = f0;
    if (cnd_) { goto L_08AB4560; }
    goto L_08AB455C;
L_08AB455C:;
    f2 = f3;
    goto L_08AB4560;
L_08AB4560:;
    fcc = FCMP(f4, f5, 14);
    f1 = f5;
    cnd_ = fcc;
    ST32(s5+132, FBITS(f2));
    if (cnd_) { goto L_08AB4574; }
    goto L_08AB4570;
L_08AB4570:;
    f1 = f4;
    goto L_08AB4574;
L_08AB4574:;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_08AB4584; }
    goto L_08AB4584;
L_08AB4584:;
    v0 = D_08AEC570 - (-14992);
    f0 = BITSF(LD32(v0-14992));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08AB4788; }
    goto L_08AB459C;
L_08AB459C:;
    f1 = BITSF(LD32(a2));
    f3 = BITSF(LD32(s5+136));
    f0 = BITSF(0);
    f1 = f1 * f3;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEC574 - (-14988);
    if (cnd_) { goto L_08AB47DC; }
    goto L_08AB45BC;
L_08AB45BC:;
    f0 = BITSF(LD32(v0-14988));
    f0 = f1 + f0;
    goto L_08AB45C4;
L_08AB45C4:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(0);
    v1 = FBITS(f0);
    f0 = BITSF(LD32(a2+8));
    f2 = f0 * f3;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v0-14988));
    if (cnd_) { goto L_08AB47D4; }
    goto L_08AB45E8;
L_08AB45E8:;
    f0 = f2 + f0;
    goto L_08AB45EC;
L_08AB45EC:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(0);
    t3 = FBITS(f0);
    f0 = BITSF(LD32(a2+16));
    f2 = f0 * f3;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v0-14988));
    if (cnd_) { goto L_08AB47CC; }
    goto L_08AB4610;
L_08AB4610:;
    f0 = f2 + f0;
    goto L_08AB4614;
L_08AB4614:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(0);
    t1 = FBITS(f0);
    f0 = BITSF(LD32(a2+4));
    f2 = f0 * f3;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v0-14988));
    if (cnd_) { goto L_08AB47C4; }
    goto L_08AB4638;
L_08AB4638:;
    f0 = f2 + f0;
    goto L_08AB463C;
L_08AB463C:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(0);
    ST32(sp+4, FBITS(f0));
    f0 = BITSF(LD32(a2+12));
    f2 = f0 * f3;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v0-14988));
    if (cnd_) { goto L_08AB47BC; }
    goto L_08AB4660;
L_08AB4660:;
    f0 = f2 + f0;
    goto L_08AB4664;
L_08AB4664:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(0);
    ST32(sp+8, FBITS(f0));
    f0 = BITSF(LD32(a2+20));
    f2 = f0 * f3;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v0-14988));
    if (cnd_) { goto L_08AB47B4; }
    goto L_08AB4688;
L_08AB4688:;
    f0 = f2 + f0;
    goto L_08AB468C;
L_08AB468C:;
    t2 = v1 + 0;
    f0 = BITSF(F2I(f0, 1));
    v1 = LD32(sp+4);
    v0 = (s32)v1 < (s32)t2;
    s2 = FBITS(f0);
    cnd_ = v0 != 0;
    v0 = t3 << 6;
    if (cnd_) { goto L_08AB4784; }
    goto L_08AB46A8;
L_08AB46A8:;
    v0 = v0 - t3;
    v0 = v0 << 3;
    ST32(sp+24, v0);
    v1 = t2 << 3;
    v1 = v1 - t2;
    v0 = LD32(sp+8);
    ST32(sp+28, v1);
    v0 = (s32)v0 < (s32)t3;
    ST32(sp+16, v0);
    goto L_08AB46CC;
L_08AB46CC:;
    v1 = LD32(sp+16);
    cnd_ = v1 != 0;
    s4 = t3 + 0;
    if (cnd_) { goto L_08AB4768; }
    goto L_08AB46D8;
L_08AB46D8:;
    v0 = 24847;
    { s64 p_ = (s64)(s32)t1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = LD32(sp+24);
    s6 = (s32)s2 < (s32)t1;
    s3 = v0 - t3;
    v1 = lo;
    ST32(sp+20, v1);
    v1 = LD32(sp+28);
    ST32(sp+12, v1);
    goto L_08AB46FC;
L_08AB46FC:;
    cnd_ = s6 != 0;
    s1 = t1 + 0;
    if (cnd_) { goto L_08AB4754; }
    goto L_08AB4704;
L_08AB4704:;
    v1 = LD32(sp+12);
    v0 = v1 + s3;
    v1 = LD32(sp+20);
    s0 = v1 + v0;
    goto L_08AB4714;
L_08AB4714:;
    a2 = LD32(sp);
    a1 = s0 + 0;
    a0 = s5 + 0;
    a3 = fp + 0;
    t0 = s7 + 0;
    s1 = s1 + 1;
    ST32(sp+32, t1);
    s0 = s0 + 24847;
    ST32(sp+36, t2);
    ST32(sp+40, t3);
    func_08AB4F7C(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08AB4740;
L_08AB4740:;
    v0 = (s32)s2 < (s32)s1;
    t1 = LD32(sp+32);
    t2 = LD32(sp+36);
    cnd_ = v0 == 0;
    t3 = LD32(sp+40);
    if (cnd_) { goto L_08AB4714; }
    goto L_08AB4754;
L_08AB4754:;
    v1 = LD32(sp+8);
    s4 = s4 + 1;
    v0 = (s32)v1 < (s32)s4;
    cnd_ = v0 == 0;
    s3 = s3 + 503;
    if (cnd_) { goto L_08AB46FC; }
    goto L_08AB4768;
L_08AB4768:;
    v1 = LD32(sp+4);
    t2 = t2 + 1;
    v0 = (s32)v1 < (s32)t2;
    v1 = LD32(sp+28);
    v1 = v1 + 7;
    cnd_ = v0 == 0;
    ST32(sp+28, v1);
    if (cnd_) { goto L_08AB46CC; }
    goto L_08AB4784;
L_08AB4784:;
    goto L_08AB4788;
L_08AB4788:;
    sp = sp + 96;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB47B4:;
    f0 = f2 - f0;
    goto L_08AB468C;
L_08AB47BC:;
    f0 = f2 - f0;
    goto L_08AB4664;
L_08AB47C4:;
    f0 = f2 - f0;
    goto L_08AB463C;
L_08AB47CC:;
    f0 = f2 - f0;
    goto L_08AB4614;
L_08AB47D4:;
    f0 = f2 - f0;
    goto L_08AB45EC;
L_08AB47DC:;
    f0 = BITSF(LD32(v0-14988));
    f0 = f1 - f0;
    goto L_08AB45C4;
}

/* 08AB47E8 */
rv_t func_08AB47E8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 176);
L_08AB47E8:;
    sp = sp - 176;
    v0 = a1 + 32;
    s5 = a1 + 0;
    t1 = a1 + 16;
    a3 = LD32(a1+32);
    t0 = LD32(v0+16);
    t3 = LD32(v0+32);
    ST32(sp+80, a0);
    ST32(sp+32, a3);
    ST32(sp+48, t0);
    ST32(sp+84, a2);
    f0 = BITSF(LD32(sp+48));
    f9 = BITSF(LD32(a1+4));
    f4 = BITSF(LD32(a1));
    v1 = LD32(v0+8);
    f2 = f9 * f0;
    f1 = BITSF(LD32(sp+32));
    a0 = LD32(v0+4);
    t2 = LD32(v0+36);
    a2 = LD32(v0+20);
    f3 = f4 * f1;
    ST32(sp+72, v1);
    v1 = FBITS(f2);
    ST32(sp+68, a0);
    v1 = (v1 >> 0) & 0x7fffffff;
    f0 = BITSF(v1);
    v1 = FBITS(f3);
    ST32(sp+64, t3);
    v1 = (v1 >> 0) & 0x7fffffff;
    ST32(sp+52, a2);
    f6 = BITSF(v1);
    ST32(sp+36, t2);
    f6 = f6 + f0;
    v1 = LD32(v0+12);
    f8 = BITSF(LD32(s5+8));
    a1 = LD32(v0+24);
    ST32(sp+76, v1);
    f0 = BITSF(LD32(sp+64));
    ST32(sp+64, a3);
    f1 = f8 * f0;
    a3 = LD32(v0+44);
    a0 = LD32(v0+28);
    v1 = FBITS(f1);
    f1 = BITSF(LD32(sp+52));
    v1 = (v1 >> 0) & 0x7fffffff;
    f0 = BITSF(v1);
    v1 = LD32(v0+40);
    ST32(sp+56, a1);
    f6 = f6 + f0;
    f2 = f9 * f1;
    f0 = BITSF(LD32(sp+68));
    f1 = BITSF(LD32(sp+56));
    ST32(sp+40, v1);
    f3 = f4 * f0;
    f0 = BITSF(LD32(sp+72));
    f5 = BITSF(LD32(s5+16));
    v0 = FBITS(f3);
    f7 = f4 * f0;
    f0 = BITSF(LD32(sp+36));
    v0 = (v0 >> 0) & 0x7fffffff;
    f3 = f9 * f1;
    f4 = BITSF(v0);
    v0 = FBITS(f2);
    f11 = f8 * f0;
    v1 = FBITS(f7);
    f0 = BITSF(LD32(sp+40));
    v0 = (v0 >> 0) & 0x7fffffff;
    f10 = BITSF(v0);
    f7 = f8 * f0;
    v1 = (v1 >> 0) & 0x7fffffff;
    v0 = FBITS(f3);
    f2 = BITSF(v1);
    v1 = LD32(sp+80);
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    f4 = f4 + f10;
    v0 = FBITS(f11);
    f10 = BITSF(LD32(v1+136));
    v1 = FBITS(f7);
    f8 = f5 - f6;
    f2 = f2 + f1;
    v0 = (v0 >> 0) & 0x7fffffff;
    v1 = (v1 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    f1 = BITSF(v1);
    f9 = f8 * f10;
    f4 = f4 + f0;
    f2 = f2 + f1;
    f3 = BITSF(LD32(t1+8));
    f1 = BITSF(LD32(t1+4));
    f0 = BITSF(0);
    f5 = f5 + f6;
    f7 = f3 + f2;
    f6 = f1 + f4;
    f3 = f3 - f2;
    f1 = f1 - f4;
    fcc = FCMP(f0, f9, 12);
    ST32(sp+60, a0);
    ST32(sp+32, t3);
    ST32(sp+44, a3);
    ST32(sp+4, FBITS(f5));
    ST32(sp+8, FBITS(f1));
    ST32(sp+12, FBITS(f6));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f7));
    cnd_ = !fcc;
    ST32(sp, FBITS(f8));
    if (cnd_) { goto L_08AB4BD4; }
    goto L_08AB49BC;
L_08AB49BC:;
    v0 = D_08AEC578 - (-14984);
    f0 = BITSF(LD32(v0-14984));
    f0 = f9 + f0;
    goto L_08AB49C8;
L_08AB49C8:;
    f8 = BITSF(F2I(f0, 1));
    f0 = BITSF(LD32(sp+8));
    f1 = BITSF(0);
    f2 = f0 * f10;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v0-14984));
    if (cnd_) { goto L_08AB4BCC; }
    goto L_08AB49E8;
L_08AB49E8:;
    f0 = f2 + f0;
    goto L_08AB49EC;
L_08AB49EC:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(0);
    t1 = FBITS(f0);
    f0 = BITSF(LD32(sp+16));
    f2 = f0 * f10;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v0-14984));
    if (cnd_) { goto L_08AB4BC4; }
    goto L_08AB4A10;
L_08AB4A10:;
    f0 = f2 + f0;
    goto L_08AB4A14;
L_08AB4A14:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(0);
    t0 = FBITS(f0);
    f0 = BITSF(LD32(sp+4));
    f2 = f0 * f10;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v0-14984));
    if (cnd_) { goto L_08AB4BBC; }
    goto L_08AB4A38;
L_08AB4A38:;
    f0 = f2 + f0;
    goto L_08AB4A3C;
L_08AB4A3C:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(0);
    ST32(sp+88, FBITS(f0));
    f0 = BITSF(LD32(sp+12));
    f2 = f0 * f10;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v0-14984));
    if (cnd_) { goto L_08AB4BB4; }
    goto L_08AB4A60;
L_08AB4A60:;
    f0 = f2 + f0;
    goto L_08AB4A64;
L_08AB4A64:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(0);
    ST32(sp+92, FBITS(f0));
    f0 = BITSF(LD32(sp+20));
    f2 = f0 * f10;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v0-14984));
    if (cnd_) { goto L_08AB4BAC; }
    goto L_08AB4A88;
L_08AB4A88:;
    f0 = f2 + f0;
    goto L_08AB4A8C;
L_08AB4A8C:;
    f0 = BITSF(F2I(f0, 1));
    s6 = FBITS(f8);
    v1 = LD32(sp+88);
    s4 = FBITS(f0);
    v0 = (s32)v1 < (s32)s6;
    cnd_ = v0 != 0;
    v0 = t1 << 6;
    if (cnd_) { goto L_08AB4B74; }
    goto L_08AB4AA8;
L_08AB4AA8:;
    v0 = v0 - t1;
    v0 = v0 << 3;
    ST32(sp+108, v0);
    v1 = s6 << 3;
    s7 = v1 - s6;
    v0 = LD32(sp+92);
    v0 = (s32)v0 < (s32)t1;
    ST32(sp+100, v0);
    goto L_08AB4AC8;
L_08AB4AC8:;
    v1 = LD32(sp+100);
    cnd_ = v1 != 0;
    s2 = t1 + 0;
    if (cnd_) { goto L_08AB4B60; }
    goto L_08AB4AD4;
L_08AB4AD4:;
    v0 = 24847;
    { s64 p_ = (s64)(s32)t0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = LD32(sp+108);
    ST32(sp+96, s7);
    fp = (s32)s4 < (s32)t0;
    s3 = v0 - t1;
    v1 = lo;
    ST32(sp+104, v1);
    goto L_08AB4AF4;
L_08AB4AF4:;
    cnd_ = fp != 0;
    s1 = t0 + 0;
    if (cnd_) { goto L_08AB4B4C; }
    goto L_08AB4AFC;
L_08AB4AFC:;
    v1 = LD32(sp+96);
    v0 = v1 + s3;
    v1 = LD32(sp+104);
    s0 = v1 + v0;
    a0 = LD32(sp+80);
    goto L_08AB4B10;
L_08AB4B10:;
    a3 = LD32(sp+84);
    a1 = s0 + 0;
    a2 = s5 + 0;
    ST32(sp+112, t0);
    s1 = s1 + 1;
    s0 = s0 + 24847;
    ST32(sp+116, t1);
    { rv_t r_ = func_08AB5110(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB4B30;
L_08AB4B30:;
    v1 = (s32)s4 < (s32)s1;
    a0 = 1;
    t0 = LD32(sp+112);
    cnd_ = v0 != 0;
    t1 = LD32(sp+116);
    if (cnd_) { goto L_08AB4B78; }
    goto L_08AB4B44;
L_08AB4B44:;
    cnd_ = v1 == 0;
    if (cnd_) { a0 = LD32(sp+80); goto L_08AB4B10; }
    goto L_08AB4B4C;
L_08AB4B4C:;
    v1 = LD32(sp+92);
    s2 = s2 + 1;
    v0 = (s32)v1 < (s32)s2;
    cnd_ = v0 == 0;
    s3 = s3 + 503;
    if (cnd_) { goto L_08AB4AF4; }
    goto L_08AB4B60;
L_08AB4B60:;
    v1 = LD32(sp+88);
    s6 = s6 + 1;
    v0 = (s32)v1 < (s32)s6;
    cnd_ = v0 == 0;
    s7 = s7 + 7;
    if (cnd_) { goto L_08AB4AC8; }
    goto L_08AB4B74;
L_08AB4B74:;
    a0 = 0 + 0;
    goto L_08AB4B78;
L_08AB4B78:;
    v0 = a0 + 0;
    sp = sp + 176;
    return (rv_t){ v0, v1, f0 };
L_08AB4BAC:;
    f0 = f2 - f0;
    goto L_08AB4A8C;
L_08AB4BB4:;
    f0 = f2 - f0;
    goto L_08AB4A64;
L_08AB4BBC:;
    f0 = f2 - f0;
    goto L_08AB4A3C;
L_08AB4BC4:;
    f0 = f2 - f0;
    goto L_08AB4A14;
L_08AB4BCC:;
    f0 = f2 - f0;
    goto L_08AB49EC;
L_08AB4BD4:;
    v0 = D_08AEC578 - (-14984);
    f0 = BITSF(LD32(v0-14984));
    f0 = f9 - f0;
    goto L_08AB49C8;
}

/* 08AB4BE4 */
void func_08AB4BE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_08AB4BE4:;
    sp = sp - 112;
    fp = a3 & 0xff;
    s3 = a1 + 0;
    ST32(sp, a0);
    f3 = BITSF(LD32(a0+136));
    f0 = BITSF(LD32(a1));
    f1 = f0 * f3;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    ST32(sp+4, a2);
    if (cnd_) { goto L_08AB4F6C; }
    goto L_08AB4C3C;
L_08AB4C3C:;
    v0 = D_08AEC57C - (-14980);
    f0 = BITSF(LD32(v0-14980));
    f0 = f1 + f0;
    goto L_08AB4C48;
L_08AB4C48:;
    f4 = BITSF(F2I(f0, 1));
    f0 = BITSF(LD32(s3+8));
    f1 = BITSF(0);
    f2 = f0 * f3;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v0-14980));
    if (cnd_) { goto L_08AB4F64; }
    goto L_08AB4C68;
L_08AB4C68:;
    f0 = f2 + f0;
    goto L_08AB4C6C;
L_08AB4C6C:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(0);
    t0 = FBITS(f0);
    f0 = BITSF(LD32(s3+16));
    f2 = f0 * f3;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v0-14980));
    if (cnd_) { goto L_08AB4F5C; }
    goto L_08AB4C90;
L_08AB4C90:;
    f0 = f2 + f0;
    goto L_08AB4C94;
L_08AB4C94:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(0);
    a2 = FBITS(f0);
    f0 = BITSF(LD32(s3+4));
    f2 = f0 * f3;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v0-14980));
    if (cnd_) { goto L_08AB4F54; }
    goto L_08AB4CB8;
L_08AB4CB8:;
    f0 = f2 + f0;
    goto L_08AB4CBC;
L_08AB4CBC:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(0);
    ST32(sp+8, FBITS(f0));
    f0 = BITSF(LD32(s3+12));
    f2 = f0 * f3;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v0-14980));
    if (cnd_) { goto L_08AB4F4C; }
    goto L_08AB4CE0;
L_08AB4CE0:;
    f0 = f2 + f0;
    goto L_08AB4CE4;
L_08AB4CE4:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(0);
    ST32(sp+12, FBITS(f0));
    f0 = BITSF(LD32(s3+20));
    f2 = f0 * f3;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v0-14980));
    if (cnd_) { goto L_08AB4F44; }
    goto L_08AB4D08;
L_08AB4D08:;
    f0 = f2 + f0;
    goto L_08AB4D0C;
L_08AB4D0C:;
    f0 = BITSF(F2I(f0, 1));
    a3 = FBITS(f4);
    v1 = LD32(sp+8);
    s4 = FBITS(f0);
    v0 = (s32)v1 < (s32)a3;
    cnd_ = v0 != 0;
    v0 = t0 << 6;
    if (cnd_) { goto L_08AB4E38; }
    goto L_08AB4D28;
L_08AB4D28:;
    v0 = v0 - t0;
    v0 = v0 << 3;
    ST32(sp+32, v0);
    v1 = a3 << 3;
    v1 = v1 - a3;
    v0 = LD32(sp+12);
    ST32(sp+36, v1);
    v0 = (s32)v0 < (s32)t0;
    ST32(sp+20, v0);
    goto L_08AB4D4C;
L_08AB4D4C:;
    v1 = LD32(sp+20);
    cnd_ = v1 != 0;
    s6 = t0 + 0;
    if (cnd_) { goto L_08AB4E1C; }
    goto L_08AB4D58;
L_08AB4D58:;
    v0 = 24847;
    { s64 p_ = (s64)(s32)a2 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = (s32)s4 < (s32)a2;
    ST32(sp+24, v0);
    v0 = LD32(sp+36);
    v1 = lo;
    ST32(sp+28, v1);
    v1 = LD32(sp+32);
    ST32(sp+16, v0);
    s7 = v1 - t0;
    goto L_08AB4D80;
L_08AB4D80:;
    v1 = LD32(sp+24);
    cnd_ = v1 != 0;
    s2 = a2 + 0;
    if (cnd_) { goto L_08AB4E08; }
    goto L_08AB4D8C;
L_08AB4D8C:;
    v1 = LD32(sp+16);
    s5 = 0x8420000u;
    s5 = s5 | 0x1085;
    v0 = v1 + s7;
    v1 = LD32(sp+28);
    s1 = v1 + v0;
    goto L_08AB4DA4;
L_08AB4DA4:;
    { u64 p_ = (u64)s1 * s5; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    v1 = hi;
    v0 = s1 - v1;
    v0 = v0 >> 1;
    v1 = v1 + v0;
    v1 = v1 >> 4;
    v0 = v1 << 5;
    v0 = v0 - v1;
    v1 = s1 - v0;
    v0 = LD32(sp);
    v1 = v1 << 2;
    v1 = v1 + v0;
    s0 = LD32(v1);
    cnd_ = s0 == 0;
    if (cnd_) { s2 = s2 + 1; goto L_08AB4DFC; }
    goto L_08AB4DE0;
L_08AB4DE0:;
    v0 = LD32(s0+4);
    goto L_08AB4DE4;
L_08AB4DE4:;
    cnd_ = v0 == s1;
    if (cnd_) { a1 = LD32(s0); goto L_08AB4E68; }
    goto L_08AB4DEC;
L_08AB4DEC:;
    s0 = LD32(s0+8);
    goto L_08AB4DF0;
L_08AB4DF0:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD32(s0+4); goto L_08AB4DE4; }
    goto L_08AB4DF8;
L_08AB4DF8:;
    s2 = s2 + 1;
    goto L_08AB4DFC;
L_08AB4DFC:;
    v0 = (s32)s4 < (s32)s2;
    cnd_ = v0 == 0;
    s1 = s1 + 24847;
    if (cnd_) { goto L_08AB4DA4; }
    goto L_08AB4E08;
L_08AB4E08:;
    v1 = LD32(sp+12);
    s6 = s6 + 1;
    v0 = (s32)v1 < (s32)s6;
    cnd_ = v0 == 0;
    s7 = s7 + 503;
    if (cnd_) { goto L_08AB4D80; }
    goto L_08AB4E1C;
L_08AB4E1C:;
    v1 = LD32(sp+8);
    a3 = a3 + 1;
    v0 = (s32)v1 < (s32)a3;
    v1 = LD32(sp+36);
    v1 = v1 + 7;
    cnd_ = v0 == 0;
    ST32(sp+36, v1);
    if (cnd_) { goto L_08AB4D4C; }
    goto L_08AB4E38;
L_08AB4E38:;
    sp = sp + 112;
    return;
L_08AB4E68:;
    v1 = LD32(a1+248);
    v0 = (v1 >> 1) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(s0+8); goto L_08AB4DF0; }
    goto L_08AB4E78;
L_08AB4E78:;
    cnd_ = fp == 0;
    v0 = a1 + 328;
    if (cnd_) { goto L_08AB4E90; }
    goto L_08AB4E80;
L_08AB4E80:;
    v0 = (v1 >> 5) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s0+8); goto L_08AB4DF0; }
    goto L_08AB4E8C;
L_08AB4E8C:;
    v0 = a1 + 328;
    goto L_08AB4E90;
L_08AB4E90:;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s3));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+8); goto L_08AB4DF0; }
    goto L_08AB4EA8;
L_08AB4EA8:;
    f1 = BITSF(LD32(a1+328));
    f0 = BITSF(LD32(s3+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+8); goto L_08AB4DF0; }
    goto L_08AB4EC0;
L_08AB4EC0:;
    f1 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(s3+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+8); goto L_08AB4DF0; }
    goto L_08AB4ED8;
L_08AB4ED8:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s3+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+8); goto L_08AB4DF0; }
    goto L_08AB4EF0;
L_08AB4EF0:;
    f1 = BITSF(LD32(v0+20));
    f0 = BITSF(LD32(s3+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+8); goto L_08AB4DF0; }
    goto L_08AB4F08;
L_08AB4F08:;
    f1 = BITSF(LD32(v0+16));
    f0 = BITSF(LD32(s3+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+8); goto L_08AB4DF0; }
    goto L_08AB4F20;
L_08AB4F20:;
    a0 = LD32(sp+4);
    ST32(sp+48, a2);
    ST32(sp+52, a3);
    ST32(sp+56, t0);
    v0 = func_088B1BD0(a0, a1, t1, t2, t3);
    goto L_08AB4F34;
L_08AB4F34:;
    t0 = LD32(sp+56);
    a3 = LD32(sp+52);
    a2 = LD32(sp+48);
    goto L_08AB4DEC;
L_08AB4F44:;
    f0 = f2 - f0;
    goto L_08AB4D0C;
L_08AB4F4C:;
    f0 = f2 - f0;
    goto L_08AB4CE4;
L_08AB4F54:;
    f0 = f2 - f0;
    goto L_08AB4CBC;
L_08AB4F5C:;
    f0 = f2 - f0;
    goto L_08AB4C94;
L_08AB4F64:;
    f0 = f2 - f0;
    goto L_08AB4C6C;
L_08AB4F6C:;
    v0 = D_08AEC57C - (-14980);
    f0 = BITSF(LD32(v0-14980));
    f0 = f1 - f0;
    goto L_08AB4C48;
}

/* 08AB4F7C */
void func_08AB4F7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB4F7C:;
    v1 = 0x8420000u;
    v1 = v1 | 0x1085;
    { u64 p_ = (u64)a1 * v1; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    sp = sp - 32;
    a3 = a3 & 0xff;
    v1 = hi;
    v0 = a1 - v1;
    v0 = v0 >> 1;
    v1 = v1 + v0;
    v1 = v1 >> 4;
    v0 = v1 << 5;
    v0 = v0 - v1;
    v1 = a1 - v0;
    s5 = v1 << 2;
    s4 = t0 & 0xff;
    s3 = a0 + 0;
    s1 = a1 + 0;
    a1 = s5 + a0;
    s0 = LD32(a1);
    cnd_ = s0 == 0;
    s2 = a2 + 0;
    if (cnd_) { goto L_08AB50D4; }
    goto L_08AB4FEC;
L_08AB4FEC:;
    cnd_ = a3 == 0;
    v0 = LD32(s0+4);
    if (cnd_) { goto L_08AB50A8; }
    goto L_08AB4FF4;
L_08AB4FF4:;
    cnd_ = v0 == s1;
    if (cnd_) { a3 = LD32(s0); goto L_08AB506C; }
    goto L_08AB4FFC;
L_08AB4FFC:;
    s0 = LD32(s0+8);
    goto L_08AB5000;
L_08AB5000:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD32(s0+4); goto L_08AB4FF4; }
    goto L_08AB5008;
L_08AB5008:;
    cnd_ = s4 == 0;
    if (cnd_) { goto L_08AB504C; }
    goto L_08AB5010;
L_08AB5010:;
    s0 = LD32(s3+124);
    v0 = LD32(s3+128);
    v1 = 0x20000u;
    a0 = s0 + 12;
    v0 = v0 + v1;
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    ST32(s3+124, a0);
    if (cnd_) { goto L_08AB504C; }
    goto L_08AB5030;
L_08AB5030:;
    v1 = s5 + s3;
    v0 = LD32(v1);
    ST32(s0+4, s1);
    ST32(s0+8, v0);
    ST32(s0, s2);
    ST32(v1, s0);
    goto L_08AB5048;
L_08AB5048:;
    goto L_08AB504C;
L_08AB504C:;
    sp = sp + 32;
    return;
L_08AB506C:;
    a0 = s2 + 0;
    a2 = 1;
    cnd_ = a3 == s2;
    a1 = a3 + 0;
    if (cnd_) { goto L_08AB5048; }
    goto L_08AB507C;
L_08AB507C:;
    v0 = LD32(s2+356);
    v1 = LD32(a3+356);
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AB5098; }
    goto L_08AB5090;
L_08AB5090:;
    a0 = a3 + 0;
    a1 = s2 + 0;
    goto L_08AB5098;
L_08AB5098:;
    v0 = func_088BB7E0(a0, a1, a2, t0, t1, t2, t3);
    goto L_08AB50A0;
L_08AB50A0:;
    s0 = LD32(s0+8);
    goto L_08AB5000;
L_08AB50A8:;
    cnd_ = v0 == s1;
    if (cnd_) { v0 = LD32(s0); goto L_08AB50C4; }
    goto L_08AB50B0;
L_08AB50B0:;
    s0 = LD32(s0+8);
    goto L_08AB50B4;
L_08AB50B4:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD32(s0+4); goto L_08AB50A8; }
    goto L_08AB50BC;
L_08AB50BC:;
    goto L_08AB5008;
L_08AB50C4:;
    cnd_ = v0 != s2;
    if (cnd_) { s0 = LD32(s0+8); goto L_08AB50B4; }
    goto L_08AB50CC;
L_08AB50CC:;
    goto L_08AB504C;
L_08AB50D4:;
    cnd_ = s4 == 0;
    if (cnd_) { goto L_08AB504C; }
    goto L_08AB50DC;
L_08AB50DC:;
    v0 = LD32(a0+128);
    s0 = LD32(a0+124);
    v1 = 0x20000u;
    v0 = v0 + v1;
    a0 = s0 + 12;
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    ST32(s3+124, a0);
    if (cnd_) { goto L_08AB504C; }
    goto L_08AB50FC;
L_08AB50FC:;
    ST32(s0+8, 0);
    ST32(s0+4, s1);
    ST32(s0, a2);
    ST32(a1, s0);
    goto L_08AB504C;
}

/* 08AB5110 */
rv_t func_08AB5110(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_08AB5110:;
    v1 = 0x8420000u;
    v1 = v1 | 0x1085;
    { u64 p_ = (u64)a1 * v1; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    sp = sp - 128;
    s4 = a2 + 0;
    v1 = hi;
    v0 = a1 - v1;
    v0 = v0 >> 1;
    v1 = v1 + v0;
    v1 = v1 >> 4;
    v0 = v1 << 5;
    v0 = v0 - v1;
    v1 = a1 - v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    s2 = a1 + 0;
    s0 = LD32(v1);
    cnd_ = s0 == 0;
    s3 = a3 + 0;
    if (cnd_) { goto L_08AB518C; }
    goto L_08AB5174;
L_08AB5174:;
    v0 = LD32(s0+4);
    goto L_08AB5178;
L_08AB5178:;
    cnd_ = v0 == s2;
    if (cnd_) { s1 = LD32(s0); goto L_08AB51B4; }
    goto L_08AB5180;
L_08AB5180:;
    s0 = LD32(s0+8);
    goto L_08AB5184;
L_08AB5184:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD32(s0+4); goto L_08AB5178; }
    goto L_08AB518C;
L_08AB518C:;
    v1 = 0 + 0;
    goto L_08AB5194;
L_08AB5194:;
    v0 = v1 + 0;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_08AB51B4:;
    v0 = LD32(s1+356);
    cnd_ = s3 == v0;
    if (cnd_) { s0 = LD32(s0+8); goto L_08AB5184; }
    goto L_08AB51C0;
L_08AB51C0:;
    v0 = LD32(s1+248);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(s0+8); goto L_08AB5184; }
    goto L_08AB51D0;
L_08AB51D0:;
    a0 = sp + 80;
    a1 = s1 + 0;
    func_088C3A64(a0, a1);
    goto L_08AB51DC;
L_08AB51DC:;
    v0 = LD32(sp+80);
    v1 = LD32(sp+92);
    a0 = s1 + 208;
    ST32(sp, v0);
    a2 = s1 + 0;
    a3 = sp + 32;
    v0 = LD32(sp+84);
    ST32(sp+12, v1);
    t0 = s1 + 48;
    ST32(sp+4, v0);
    v0 = LD32(sp+88);
    ST32(sp+8, v0);
    v0 = LD32(s1+208);
    ST32(sp+16, v0);
    v1 = LD32(a0+4);
    ST32(sp+20, v1);
    v0 = LD32(a0+8);
    ST32(sp+24, v0);
    v1 = LD32(a0+12);
    ST32(sp+28, v1);
    goto L_08AB522C;
L_08AB522C:;
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
    if (cnd_) { goto L_08AB522C; }
    goto L_08AB5258;
L_08AB5258:;
    a0 = sp + 0;
    a1 = s4 + 0;
    { rv_t r_ = func_08AB3C24(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB5264;
L_08AB5264:;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_08AB5180; }
    goto L_08AB526C;
L_08AB526C:;
    goto L_08AB5194;
}

/* 08AB5274 */
void func_08AB5274(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB5274:;
    f1 = BITSF(LD32(a0));
    f0 = BITSF(LD32(a0+4));
    sp = sp - 16;
    t0 = a0 + 0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a3 = a1 + 0;
    if (cnd_) { goto L_08AB5374; }
    goto L_08AB5294;
L_08AB5294:;
    f0 = BITSF(LD32(a0+8));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(sp+8, FBITS(f0)); goto L_08AB5340; }
    goto L_08AB52A8;
L_08AB52A8:;
    ST32(sp, FBITS(f1));
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    v1 = LD32(sp+4);
    a0 = LD32(sp+8);
    a1 = LD32(sp+12);
    v0 = LD32(sp);
    ST32(a3+4, v1);
    ST32(a3, v0);
    ST32(a3+8, a0);
    ST32(a3+12, a1);
    f1 = BITSF(LD32(t0+8));
    f0 = BITSF(LD32(t0+4));
    goto L_08AB52DC;
L_08AB52DC:;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_08AB52EC; }
    goto L_08AB52EC;
L_08AB52EC:;
    ST32(a2, FBITS(f0));
    v0 = t0 + 32;
    {u32 a_=v0+(16);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=v0+(32);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    {u32 a_=t0+(32);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=a3+(0);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[68]=d0;v[69]=d1;v[70]=d2;v[71]=d3;}
    {float s0=v[56];float s1=v[57];float s2=v[58];float s3=v[59];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[72]=d0;v[73]=d1;v[74]=d2;v[75]=d3;}
    {float t0=v[48];float t1=v[49];float t2=v[50];float o0=0;o0+=v[64]*t0;o0+=v[68]*t1;o0+=v[72]*t2;float o1=0;o1+=v[65]*t0;o1+=v[69]*t1;o1+=v[73]*t2;float o2=0;o2+=v[66]*t0;o2+=v[70]*t1;o2+=v[74]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    a0 = LD32(sp+4);
    a1 = LD32(sp+8);
    v1 = LD32(sp+12);
    v0 = LD32(sp);
    ST32(a3+4, a0);
    ST32(a3, v0);
    ST32(a3+12, v1);
    ST32(a3+8, a1);
    sp = sp + 16;
    return;
L_08AB5340:;
    ST32(sp+4, 0);
    ST32(sp, 0);
    v1 = LD32(sp+4);
    a0 = LD32(sp+8);
    a1 = LD32(sp+12);
    v0 = LD32(sp);
    ST32(a3+4, v1);
    ST32(a3, v0);
    ST32(a3+8, a0);
    ST32(a3+12, a1);
    f1 = BITSF(LD32(t0+4));
    goto L_08AB536C;
L_08AB536C:;
    f0 = BITSF(LD32(t0));
    goto L_08AB52DC;
L_08AB5374:;
    f1 = BITSF(LD32(a0+8));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(sp+8, FBITS(f1)); goto L_08AB5340; }
    goto L_08AB5388;
L_08AB5388:;
    ST32(sp+8, 0);
    ST32(sp+4, FBITS(f0));
    ST32(sp, 0);
    v1 = LD32(sp+4);
    a0 = LD32(sp+8);
    a1 = LD32(sp+12);
    v0 = LD32(sp);
    ST32(a3+4, v1);
    ST32(a3, v0);
    ST32(a3+8, a0);
    ST32(a3+12, a1);
    f1 = BITSF(LD32(t0+8));
    goto L_08AB536C;
}

/* 08AB53BC */
void func_08AB53BC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB53BC:;
    f1 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(a0+8));
    sp = sp - 16;
    t0 = a0 + 0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a3 = a1 + 0;
    if (cnd_) { goto L_08AB5474; }
    goto L_08AB53DC;
L_08AB53DC:;
    f0 = BITSF(LD32(a0+12));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(sp+8, FBITS(f0)); goto L_08AB5440; }
    goto L_08AB53F0;
L_08AB53F0:;
    ST32(sp, FBITS(f1));
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    a0 = LD32(sp+4);
    a1 = LD32(sp+8);
    v1 = LD32(sp+12);
    v0 = LD32(sp);
    ST32(a3+4, a0);
    ST32(a3, v0);
    ST32(a3+12, v1);
    ST32(a3+8, a1);
    f0 = BITSF(LD32(t0+8));
    goto L_08AB5420;
L_08AB5420:;
    f1 = BITSF(LD32(t0+12));
    goto L_08AB5424;
L_08AB5424:;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_08AB5434; }
    goto L_08AB5434;
L_08AB5434:;
    ST32(a2, FBITS(f0));
    sp = sp + 16;
    return;
L_08AB5440:;
    ST32(sp, 0);
    ST32(sp+4, 0);
    a1 = LD32(sp+8);
    a0 = LD32(sp+4);
    v1 = LD32(sp+12);
    v0 = LD32(sp);
    ST32(a3+4, a0);
    ST32(a3, v0);
    ST32(a3+12, v1);
    ST32(a3+8, a1);
    f0 = BITSF(LD32(t0+4));
    f1 = BITSF(LD32(t0+8));
    goto L_08AB5424;
L_08AB5474:;
    f1 = BITSF(LD32(a0+12));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(sp+8, FBITS(f1)); goto L_08AB5440; }
    goto L_08AB5488;
L_08AB5488:;
    ST32(sp+4, FBITS(f0));
    ST32(sp, 0);
    ST32(sp+8, 0);
    a0 = LD32(sp+4);
    a1 = LD32(sp+8);
    v1 = LD32(sp+12);
    v0 = LD32(sp);
    ST32(a3+4, a0);
    ST32(a3, v0);
    ST32(a3+12, v1);
    ST32(a3+8, a1);
    f0 = BITSF(LD32(t0+4));
    goto L_08AB5420;
}

/* 08AB54BC */
void func_08AB54BC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB54BC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB54EC; }
    goto L_08AB54D8;
L_08AB54D8:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB54EC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB54F4;
L_08AB54F4:;
    ST32(s0, 0);
    goto L_08AB54D8;
}

/* 08AB54FC */
void func_08AB54FC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB54FC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB552C; }
    goto L_08AB5518;
L_08AB5518:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB552C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5534;
L_08AB5534:;
    ST32(s0, 0);
    goto L_08AB5518;
}

/* 08AB553C */
void func_08AB553C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB553C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB556C; }
    goto L_08AB5558;
L_08AB5558:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB556C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5574;
L_08AB5574:;
    ST32(s0, 0);
    goto L_08AB5558;
}

/* 08AB557C */
void func_08AB557C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB557C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB55AC; }
    goto L_08AB5598;
L_08AB5598:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB55AC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB55B4;
L_08AB55B4:;
    ST32(s0, 0);
    goto L_08AB5598;
}

/* 08AB55BC */
void func_08AB55BC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB55BC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB55EC; }
    goto L_08AB55D8;
L_08AB55D8:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB55EC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB55F4;
L_08AB55F4:;
    ST32(s0, 0);
    goto L_08AB55D8;
}

/* 08AB55FC */
u32 func_08AB55FC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_08AB55FC:;
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB56AC; }
    goto L_08AB5608;
L_08AB5608:;
    v0 = LD32(a0+12);
    cnd_ = a1 == v0;
    if (cnd_) { v1 = LD32(a0+8); goto L_08AB56AC; }
    goto L_08AB5614;
L_08AB5614:;
    a2 = LD32(a0);
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08AB5654; }
    goto L_08AB5620;
L_08AB5620:;
    a3 = LD32(a2+8);
    goto L_08AB5624;
L_08AB5624:;
    v0 = (s32)a1 < (s32)a3;
    cnd_ = v0 != 0;
    v1 = a2 + 0;
    if (cnd_) { goto L_08AB5644; }
    goto L_08AB5630;
L_08AB5630:;
    v0 = LD32(a0+4);
    v0 = a3 + v0;
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AB5654; }
    goto L_08AB5644;
L_08AB5644:;
    a2 = LD32(a2+12);
    cnd_ = a2 != 0;
    if (cnd_) { a3 = LD32(a2+8); goto L_08AB5624; }
    goto L_08AB5650;
L_08AB5650:;
    v1 = 0 + 0;
    goto L_08AB5654;
L_08AB5654:;
    cnd_ = v1 == 0;
    if (cnd_) { v1 = 0 + 0; goto L_08AB56AC; }
    goto L_08AB565C;
L_08AB565C:;
    a2 = LD32(v1+4);
    v0 = LD32(v1+8);
    t0 = 0 + 0;
    t1 = LD32(a2+12);
    cnd_ = (s32)t1 <= 0;
    t2 = a1 - v0;
    if (cnd_) { goto L_08AB5694; }
    goto L_08AB5674;
L_08AB5674:;
    a2 = LD32(a2+4);
    v0 = LD32(a2);
    goto L_08AB567C;
L_08AB567C:;
    t0 = t0 + 1;
    a3 = (s32)t0 < (s32)t1;
    cnd_ = v0 == t2;
    a2 = a2 + 4;
    if (cnd_) { goto L_08AB56B4; }
    goto L_08AB568C;
L_08AB568C:;
    cnd_ = a3 != 0;
    if (cnd_) { v0 = LD32(a2); goto L_08AB567C; }
    goto L_08AB5694;
L_08AB5694:;
    v0 = 0 + 0;
    goto L_08AB5698;
L_08AB5698:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 0 + 0; goto L_08AB56AC; }
    goto L_08AB56A0;
L_08AB56A0:;
    v1 = v0 + 0;
    ST32(a0+12, a1);
    ST32(a0+8, v0);
    goto L_08AB56AC;
L_08AB56AC:;
    v0 = v1 + 0;
    return v0;
L_08AB56B4:;
    v0 = 400;
    { s64 p_ = (s64)(s32)t2 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = LD32(v1);
    v0 = lo;
    v0 = v1 + v0;
    goto L_08AB5698;
}

/* 08AB56CC */
void func_08AB56CC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB56CC:;
    ST32(a0+4, 0);
    sp = sp - 16;
    v0 = LD32(a0);
    ST32(a0+20, 0);
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08AB5724; }
    goto L_08AB56E8;
L_08AB56E8:;
    ST32(a0+4, v0);
    a0 = a0 + 8;
    goto L_08AB56F0;
L_08AB56F0:;
    a1 = LD32(a2+4);
    ST32(sp+4, 0);
    v0 = LD32(a1+4);
    ST32(a2+12, 0);
    ST32(a2+8, v0);
    v1 = LD32(v0+12);
    ST32(sp, v0);
    v1 = v1 - 1;
    cnd_ = (s32)v1 >= 0;
    ST32(a0+4, v1);
    if (cnd_) { goto L_08AB572C; }
    goto L_08AB5718;
L_08AB5718:;
    v0 = LD32(a1+12);
    cnd_ = v0 != 0;
    ST32(a2+4, v0);
    if (cnd_) { goto L_08AB56F0; }
    goto L_08AB5724;
L_08AB5724:;
    sp = sp + 16;
    return;
L_08AB572C:;
    a0 = LD32(a2+8);
    v1 = v1 << 2;
    a1 = LD32(a1);
    v0 = LD32(a0+4);
    v1 = v1 + v0;
    a0 = LD32(v1);
    v0 = a0 << 4;
    v0 = v0 + a0;
    v0 = v0 << 2;
    a1 = a1 + v0;
    ST32(a2+20, a1);
    ST32(a2+16, a0);
    goto L_08AB5724;
}

/* 08AB5760 */
void func_08AB5760(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB5760:;
    a3 = a0 + 0;
    a0 = a0 + 8;
    v0 = LD32(a0+4);
    sp = sp - 16;
    a1 = a0 + 0;
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08AB57B4; }
    goto L_08AB5780;
L_08AB5780:;
    v0 = LD32(a3+4);
    v0 = LD32(v0+12);
    cnd_ = v0 == 0;
    ST32(a3+4, v0);
    if (cnd_) { goto L_08AB57EC; }
    goto L_08AB5790;
L_08AB5790:;
    v1 = LD32(v0+4);
    ST32(sp+4, 0);
    ST32(a3+8, v1);
    ST32(a3+12, 0);
    v0 = LD32(v1+12);
    ST32(sp, v1);
    v0 = v0 - 1;
    cnd_ = (s32)v0 < 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_08AB5780; }
    goto L_08AB57B4;
L_08AB57B4:;
    v0 = LD32(a3+8);
    v1 = LD32(a0+4);
    a0 = LD32(a3+4);
    a2 = LD32(v0+4);
    v1 = v1 << 2;
    a1 = LD32(a0);
    v1 = v1 + a2;
    a0 = LD32(v1);
    v0 = a0 << 4;
    v0 = v0 + a0;
    v0 = v0 << 2;
    a1 = a1 + v0;
    ST32(a3+20, a1);
    ST32(a3+16, a0);
    goto L_08AB57EC;
L_08AB57EC:;
    sp = sp + 16;
    return;
}

/* 08AB57F4 */
rv_t func_08AB57F4(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB57F4:;
    sp = sp - 16;
    v1 = (u32)-1;
    cnd_ = a1 == v1;
    a3 = a1 + 0;
    if (cnd_) { goto L_08AB5874; }
    goto L_08AB5808;
L_08AB5808:;
    v0 = LD32(a0+12);
    cnd_ = a1 == v0;
    if (cnd_) { ST32(a0+12, v1); goto L_08AB5814; }
    goto L_08AB5814;
L_08AB5814:;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AB5854; }
    goto L_08AB5820;
L_08AB5820:;
    a1 = LD32(v1+8);
    goto L_08AB5824;
L_08AB5824:;
    v0 = (s32)a3 < (s32)a1;
    cnd_ = v0 != 0;
    a2 = v1 + 0;
    if (cnd_) { goto L_08AB5844; }
    goto L_08AB5830;
L_08AB5830:;
    v0 = LD32(a0+4);
    v0 = a1 + v0;
    v0 = (s32)a3 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AB5854; }
    goto L_08AB5844;
L_08AB5844:;
    v1 = LD32(v1+12);
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(v1+8); goto L_08AB5824; }
    goto L_08AB5850;
L_08AB5850:;
    a2 = 0 + 0;
    goto L_08AB5854;
L_08AB5854:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08AB5878; }
    goto L_08AB585C;
L_08AB585C:;
    a0 = LD32(a2+4);
    a1 = LD32(a2+8);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = a3 - a1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB5874;
L_08AB5874:;
    goto L_08AB5878;
L_08AB5878:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB5880 */
u32 func_08AB5880(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08AB5880:;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AB58C0; }
    goto L_08AB588C;
L_08AB588C:;
    a2 = LD32(v1+8);
    goto L_08AB5890;
L_08AB5890:;
    v0 = (s32)a1 < (s32)a2;
    cnd_ = v0 != 0;
    a3 = v1 + 0;
    if (cnd_) { goto L_08AB58B0; }
    goto L_08AB589C;
L_08AB589C:;
    v0 = LD32(a0+4);
    v0 = a2 + v0;
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AB58C0; }
    goto L_08AB58B0;
L_08AB58B0:;
    v1 = LD32(v1+12);
    cnd_ = v1 != 0;
    if (cnd_) { a2 = LD32(v1+8); goto L_08AB5890; }
    goto L_08AB58BC;
L_08AB58BC:;
    a3 = 0 + 0;
    goto L_08AB58C0;
L_08AB58C0:;
    v0 = a3 + 0;
    return v0;
}

/* 08AB58C8 */
void func_08AB58C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB58C8:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB593C; }
    goto L_08AB58E4;
L_08AB58E4:;
    v0 = LD32(s0+4);
    goto L_08AB58E8;
L_08AB58E8:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB5924; }
    goto L_08AB58F0;
L_08AB58F0:;
    s0 = LD32(s0+12);
    goto L_08AB58F4;
L_08AB58F4:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08AB590C; }
    goto L_08AB58FC;
L_08AB58FC:;
    goto L_08AB5900;
L_08AB5900:;
    sp = sp + 16;
    return;
L_08AB590C:;
    func_08AB58C8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB5914;
L_08AB5914:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB591C;
L_08AB591C:;
    goto L_08AB5900;
L_08AB5924:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB5934;
L_08AB5934:;
    s0 = LD32(s0+12);
    goto L_08AB58F4;
L_08AB593C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5944;
L_08AB5944:;
    v0 = LD32(s0+4);
    goto L_08AB58E8;
}

/* 08AB594C */
rv_t func_08AB594C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08AB594C:;
    sp = sp - 64;
    v0 = D_08AF7C50 - (31824);
    v0 = v0 + 31824;
    s0 = a0 + 0;
    a1 = LD32(a0+4);
    ST32(a0, v0);
    v0 = (u32)-1;
    a0 = sp + 0;
    v1 = LD32(a1);
    ST32(sp+16, v0);
    ST32(sp+4, v1);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    ST32(sp, a1);
    func_08AB56CC(a0);
    goto L_08AB599C;
L_08AB599C:;
    v1 = LD32(sp+4);
    goto L_08AB59A0;
L_08AB59A0:;
    cnd_ = v1 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_08AB59D0; }
    goto L_08AB59A8;
L_08AB59A8:;
    cnd_ = (s32)v0 < 0;
    a1 = LD32(sp+16);
    if (cnd_) { goto L_08AB59D0; }
    goto L_08AB59B0;
L_08AB59B0:;
    v0 = LD32(v1+8);
    a0 = LD32(s0+4);
    a1 = a1 + v0;
    { rv_t r_ = func_08AB57F4(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB59C0;
L_08AB59C0:;
    a0 = sp + 0;
    func_08AB5760(a0);
    goto L_08AB59C8;
L_08AB59C8:;
    v1 = LD32(sp+4);
    goto L_08AB59A0;
L_08AB59D0:;
    s1 = LD32(s0+4);
    s2 = LD32(s1);
    cnd_ = s2 == 0;
    s3 = s1 + 0;
    if (cnd_) { goto L_08AB5A10; }
    goto L_08AB59E0;
L_08AB59E0:;
    a0 = LD32(s2);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AB5AE4; }
    goto L_08AB59EC;
L_08AB59EC:;
    a0 = LD32(s2+4);
    goto L_08AB59F0;
L_08AB59F0:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08AB5AD0; }
    goto L_08AB59F8;
L_08AB59F8:;
    s1 = LD32(s2+12);
    goto L_08AB59FC;
L_08AB59FC:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_08AB5AB8; }
    goto L_08AB5A04;
L_08AB5A04:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5A0C;
L_08AB5A0C:;
    s1 = LD32(s0+4);
    goto L_08AB5A10;
L_08AB5A10:;
    v0 = (u32)-1;
    ST32(s3+12, v0);
    cnd_ = s1 == 0;
    ST32(s3, 0);
    if (cnd_) { goto L_08AB5A60; }
    goto L_08AB5A20;
L_08AB5A20:;
    s2 = LD32(s1);
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08AB5A58; }
    goto L_08AB5A2C;
L_08AB5A2C:;
    a0 = LD32(s2);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AB5AA8; }
    goto L_08AB5A38;
L_08AB5A38:;
    a0 = LD32(s2+4);
    goto L_08AB5A3C;
L_08AB5A3C:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08AB5A94; }
    goto L_08AB5A44;
L_08AB5A44:;
    s0 = LD32(s2+12);
    goto L_08AB5A48;
L_08AB5A48:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08AB5A7C; }
    goto L_08AB5A50;
L_08AB5A50:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5A58;
L_08AB5A58:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5A60;
L_08AB5A60:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08AB5A7C:;
    a0 = s0 + 0;
    func_08AB58C8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08AB5A84;
L_08AB5A84:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5A8C;
L_08AB5A8C:;
    goto L_08AB5A50;
L_08AB5A94:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB5AA0;
L_08AB5AA0:;
    s0 = LD32(s2+12);
    goto L_08AB5A48;
L_08AB5AA8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5AB0;
L_08AB5AB0:;
    a0 = LD32(s2+4);
    goto L_08AB5A3C;
L_08AB5AB8:;
    a0 = s1 + 0;
    func_08AB58C8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08AB5AC0;
L_08AB5AC0:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5AC8;
L_08AB5AC8:;
    goto L_08AB5A04;
L_08AB5AD0:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB5ADC;
L_08AB5ADC:;
    s1 = LD32(s2+12);
    goto L_08AB59FC;
L_08AB5AE4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5AEC;
L_08AB5AEC:;
    a0 = LD32(s2+4);
    goto L_08AB59F0;
}

/* 08AB5AF4 */
rv_t func_08AB5AF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08AB5AF4:;
    sp = sp - 64;
    v0 = D_08AF7C50 - (31824);
    v0 = v0 + 31824;
    s3 = a0 + 0;
    a1 = LD32(a0+4);
    ST32(a0, v0);
    v0 = (u32)-1;
    a0 = sp + 0;
    v1 = LD32(a1);
    ST32(sp+16, v0);
    ST32(sp+4, v1);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    ST32(sp, a1);
    func_08AB56CC(a0);
    goto L_08AB5B48;
L_08AB5B48:;
    v1 = LD32(sp+4);
    goto L_08AB5B4C;
L_08AB5B4C:;
    cnd_ = v1 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_08AB5B7C; }
    goto L_08AB5B54;
L_08AB5B54:;
    cnd_ = (s32)v0 < 0;
    a1 = LD32(sp+16);
    if (cnd_) { goto L_08AB5B7C; }
    goto L_08AB5B5C;
L_08AB5B5C:;
    v0 = LD32(v1+8);
    a0 = LD32(s3+4);
    a1 = a1 + v0;
    { rv_t r_ = func_08AB57F4(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB5B6C;
L_08AB5B6C:;
    a0 = sp + 0;
    func_08AB5760(a0);
    goto L_08AB5B74;
L_08AB5B74:;
    v1 = LD32(sp+4);
    goto L_08AB5B4C;
L_08AB5B7C:;
    s1 = LD32(s3+4);
    s2 = LD32(s1);
    cnd_ = s2 == 0;
    s4 = s1 + 0;
    if (cnd_) { goto L_08AB5BBC; }
    goto L_08AB5B8C;
L_08AB5B8C:;
    a0 = LD32(s2);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AB5C9C; }
    goto L_08AB5B98;
L_08AB5B98:;
    a0 = LD32(s2+4);
    goto L_08AB5B9C;
L_08AB5B9C:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08AB5C88; }
    goto L_08AB5BA4;
L_08AB5BA4:;
    s0 = LD32(s2+12);
    goto L_08AB5BA8;
L_08AB5BA8:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08AB5C70; }
    goto L_08AB5BB0;
L_08AB5BB0:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5BB8;
L_08AB5BB8:;
    s1 = LD32(s3+4);
    goto L_08AB5BBC;
L_08AB5BBC:;
    v0 = (u32)-1;
    ST32(s4+12, v0);
    cnd_ = s1 == 0;
    ST32(s4, 0);
    if (cnd_) { goto L_08AB5C0C; }
    goto L_08AB5BCC;
L_08AB5BCC:;
    s2 = LD32(s1);
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08AB5C04; }
    goto L_08AB5BD8;
L_08AB5BD8:;
    a0 = LD32(s2);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AB5C60; }
    goto L_08AB5BE4;
L_08AB5BE4:;
    a0 = LD32(s2+4);
    goto L_08AB5BE8;
L_08AB5BE8:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08AB5C4C; }
    goto L_08AB5BF0;
L_08AB5BF0:;
    s0 = LD32(s2+12);
    goto L_08AB5BF4;
L_08AB5BF4:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08AB5C34; }
    goto L_08AB5BFC;
L_08AB5BFC:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5C04;
L_08AB5C04:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5C0C;
L_08AB5C0C:;
    a0 = s3 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5C14;
L_08AB5C14:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08AB5C34:;
    a0 = s0 + 0;
    func_08AB58C8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08AB5C3C;
L_08AB5C3C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5C44;
L_08AB5C44:;
    goto L_08AB5BFC;
L_08AB5C4C:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB5C58;
L_08AB5C58:;
    s0 = LD32(s2+12);
    goto L_08AB5BF4;
L_08AB5C60:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5C68;
L_08AB5C68:;
    a0 = LD32(s2+4);
    goto L_08AB5BE8;
L_08AB5C70:;
    a0 = s0 + 0;
    func_08AB58C8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08AB5C78;
L_08AB5C78:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5C80;
L_08AB5C80:;
    goto L_08AB5BB0;
L_08AB5C88:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB5C94;
L_08AB5C94:;
    s0 = LD32(s2+12);
    goto L_08AB5BA8;
L_08AB5C9C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5CA4;
L_08AB5CA4:;
    a0 = LD32(s2+4);
    goto L_08AB5B9C;
}

/* 08AB5CAC */
void func_08AB5CAC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08AB5CAC:;
    a3 = LD32(a1);
    cnd_ = a3 == 0;
    v1 = a3 + 0;
    if (cnd_) { goto L_08AB5CC8; }
    goto L_08AB5CB8;
L_08AB5CB8:;
    v0 = LD32(v1);
    v1 = LD32(v1+4);
    cnd_ = v1 != 0;
    ST32(v0+380, a0);
    if (cnd_) { goto L_08AB5CB8; }
    goto L_08AB5CC8;
L_08AB5CC8:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a0, a3); goto L_08AB5CFC; }
    goto L_08AB5CD4;
L_08AB5CD4:;
    v1 = v0 + 0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+4, a3); goto L_08AB5CFC; }
    goto L_08AB5CE4;
L_08AB5CE4:;
    a2 = v0 + 0;
    goto L_08AB5CE8;
L_08AB5CE8:;
    v0 = LD32(a2+4);
    v1 = a2 + 0;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08AB5CE8; }
    goto L_08AB5CF8;
L_08AB5CF8:;
    ST32(v1+4, a3);
    goto L_08AB5CFC;
L_08AB5CFC:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    ST32(a1, 0);
    if (cnd_) { goto L_08AB5D3C; }
    goto L_08AB5D08;
L_08AB5D08:;
    v1 = v0 + 0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a1+4); goto L_08AB5D30; }
    goto L_08AB5D18;
L_08AB5D18:;
    a0 = v0 + 0;
    goto L_08AB5D1C;
L_08AB5D1C:;
    v0 = LD32(a0+4);
    v1 = a0 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB5D1C; }
    goto L_08AB5D2C;
L_08AB5D2C:;
    v0 = LD32(a1+4);
    goto L_08AB5D30;
L_08AB5D30:;
    ST32(v1+4, v0);
    goto L_08AB5D34;
L_08AB5D34:;
    ST32(a1+4, 0);
    return;
L_08AB5D3C:;
    v0 = LD32(a1+4);
    ST32(a0+4, v0);
    goto L_08AB5D34;
}

/* 08AB5D48 */
u64 func_08AB5D48(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB5D48:;
    sp = sp - 16;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08AB5D74; }
    goto L_08AB5D54;
L_08AB5D54:;
    v0 = LD32(a1+124);
    cnd_ = v0 == 0;
    v1 = LD32(a1+128);
    if (cnd_) { goto L_08AB5D80; }
    goto L_08AB5D60;
L_08AB5D60:;
    cnd_ = v1 == 0;
    ST32(v0+128, v1);
    if (cnd_) { goto L_08AB5D6C; }
    goto L_08AB5D68;
L_08AB5D68:;
    ST32(v1+124, v0);
    goto L_08AB5D6C;
L_08AB5D6C:;
    a0 = a1 + 0;
    { u64 r_ = func_088B68BC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5D74;
L_08AB5D74:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB5D80:;
    cnd_ = v1 == 0;
    ST32(a0+48, v1);
    if (cnd_) { goto L_08AB5D6C; }
    goto L_08AB5D88;
L_08AB5D88:;
    ST32(v1+124, 0);
    goto L_08AB5D6C;
}

/* 08AB5D90 */
rv_t func_08AB5D90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08AB5D90:;
    sp = sp - 64;
    v0 = D_08AF7C60 - (31840);
    v0 = v0 + 31840;
    s1 = a0 + 0;
    a1 = LD32(a0+4);
    ST32(a0, v0);
    v0 = (u32)-1;
    a0 = sp + 0;
    v1 = LD32(a1);
    ST32(sp+16, v0);
    ST32(sp+4, v1);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    ST32(sp, a1);
    func_08AB41DC(a0);
    goto L_08AB5DE0;
L_08AB5DE0:;
    v1 = LD32(sp+4);
    goto L_08AB5DE4;
L_08AB5DE4:;
    cnd_ = v1 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_08AB5E14; }
    goto L_08AB5DEC;
L_08AB5DEC:;
    cnd_ = (s32)v0 < 0;
    a1 = LD32(sp+16);
    if (cnd_) { goto L_08AB5E14; }
    goto L_08AB5DF4;
L_08AB5DF4:;
    v0 = LD32(v1+8);
    a0 = LD32(s1+4);
    a1 = a1 + v0;
    func_08AB4304(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08AB5E04;
L_08AB5E04:;
    a0 = sp + 0;
    func_08AB4270(a0);
    goto L_08AB5E0C;
L_08AB5E0C:;
    v1 = LD32(sp+4);
    goto L_08AB5DE4;
L_08AB5E14:;
    s2 = LD32(s1+4);
    s0 = LD32(s2);
    cnd_ = s0 != 0;
    s3 = s2 + 0;
    if (cnd_) { goto L_08AB5E7C; }
    goto L_08AB5E24;
L_08AB5E24:;
    v0 = (u32)-1;
    ST32(s3+12, v0);
    cnd_ = s2 == 0;
    ST32(s3, 0);
    if (cnd_) { goto L_08AB5E48; }
    goto L_08AB5E34;
L_08AB5E34:;
    s0 = LD32(s2);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08AB5E64; }
    goto L_08AB5E40;
L_08AB5E40:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5E48;
L_08AB5E48:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08AB5E64:;
    a0 = s0 + 0;
    func_08AB4390(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08AB5E6C;
L_08AB5E6C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5E74;
L_08AB5E74:;
    goto L_08AB5E40;
L_08AB5E7C:;
    a0 = s0 + 0;
    func_08AB4390(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08AB5E84;
L_08AB5E84:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5E8C;
L_08AB5E8C:;
    s2 = LD32(s1+4);
    goto L_08AB5E24;
}

/* 08AB5E94 */
rv_t func_08AB5E94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08AB5E94:;
    sp = sp - 64;
    v0 = D_08AF7C60 - (31840);
    v0 = v0 + 31840;
    s2 = a0 + 0;
    a1 = LD32(a0+4);
    ST32(a0, v0);
    v0 = (u32)-1;
    a0 = sp + 0;
    v1 = LD32(a1);
    ST32(sp+16, v0);
    ST32(sp+4, v1);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    ST32(sp, a1);
    func_08AB41DC(a0);
    goto L_08AB5EE4;
L_08AB5EE4:;
    v1 = LD32(sp+4);
    goto L_08AB5EE8;
L_08AB5EE8:;
    cnd_ = v1 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_08AB5F18; }
    goto L_08AB5EF0;
L_08AB5EF0:;
    cnd_ = (s32)v0 < 0;
    a1 = LD32(sp+16);
    if (cnd_) { goto L_08AB5F18; }
    goto L_08AB5EF8;
L_08AB5EF8:;
    v0 = LD32(v1+8);
    a0 = LD32(s2+4);
    a1 = a1 + v0;
    func_08AB4304(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08AB5F08;
L_08AB5F08:;
    a0 = sp + 0;
    func_08AB4270(a0);
    goto L_08AB5F10;
L_08AB5F10:;
    v1 = LD32(sp+4);
    goto L_08AB5EE8;
L_08AB5F18:;
    s1 = LD32(s2+4);
    s0 = LD32(s1);
    cnd_ = s0 != 0;
    s3 = s1 + 0;
    if (cnd_) { goto L_08AB5F88; }
    goto L_08AB5F28;
L_08AB5F28:;
    v0 = (u32)-1;
    ST32(s3+12, v0);
    cnd_ = s1 == 0;
    ST32(s3, 0);
    if (cnd_) { goto L_08AB5F4C; }
    goto L_08AB5F38;
L_08AB5F38:;
    s0 = LD32(s1);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08AB5F70; }
    goto L_08AB5F44;
L_08AB5F44:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5F4C;
L_08AB5F4C:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5F54;
L_08AB5F54:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08AB5F70:;
    a0 = s0 + 0;
    func_08AB4390(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08AB5F78;
L_08AB5F78:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5F80;
L_08AB5F80:;
    goto L_08AB5F44;
L_08AB5F88:;
    a0 = s0 + 0;
    func_08AB4390(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08AB5F90;
L_08AB5F90:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB5F98;
L_08AB5F98:;
    s1 = LD32(s2+4);
    goto L_08AB5F28;
}

/* 08AB5FA0 */
void func_08AB5FA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08AB5FA0:;
    sp = sp - 48;
    s4 = a0 + 0;
    s3 = a3 + 0;
    s2 = a2 + 0;
    s1 = a1 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    f20 = f12;
    if (cnd_) { goto L_08AB6060; }
    goto L_08AB5FDC;
L_08AB5FDC:;
    s0 = a0 + 0;
    a0 = s0 + 0;
    goto L_08AB5FE4;
L_08AB5FE4:;
    a1 = s1 + 0;
    a2 = s2 + 0;
    a3 = s3 + 0;
    f12 = f20;
    v0 = func_08AB651C(a0, a1, a2, a3, f12);
    goto L_08AB5FF8;
L_08AB5FF8:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AB6040; }
    goto L_08AB6000;
L_08AB6000:;
    s0 = LD32(s0);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08AB5FE4; }
    goto L_08AB600C;
L_08AB600C:;
    v0 = func_088B68F4(0, 0, 0);
    goto L_08AB6014;
L_08AB6014:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = s2 + 0;
    a3 = s3 + 0;
    f12 = f20;
    s0 = v0 + 0;
    v0 = func_08AB651C(a0, a1, a2, a3, f12);
    goto L_08AB6030;
L_08AB6030:;
    v1 = LD32(s4);
    ST32(s0, v1);
    ST32(s4, s0);
    goto L_08AB603C;
L_08AB603C:;
    goto L_08AB6040;
L_08AB6040:;
    sp = sp + 48;
    return;
L_08AB6060:;
    v0 = func_088B68F4(t1, t2, t3);
    goto L_08AB6068;
L_08AB6068:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = s2 + 0;
    a3 = s3 + 0;
    f12 = f20;
    s0 = v0 + 0;
    v0 = func_08AB651C(a0, a1, a2, a3, f12);
    goto L_08AB6084;
L_08AB6084:;
    ST32(s4, s0);
    goto L_08AB603C;
}

/* 08AB608C */
void func_08AB608C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB608C:;
    v0 = a0 + 288;
    ST32(v0+24, 0);
    sp = sp - 16;
    ST32(v0+28, 0);
    ST32(v0+32, 0);
    s0 = a0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_088B8B58(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB60B4;
L_08AB60B4:;
    ST32(s0+388, 0);
    sp = sp + 16;
    return;
}

/* 08AB60C8 */
void func_08AB60C8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB60C8:;
    sp = sp - 32;
    s4 = a1 + 0;
    s3 = a0 + 0;
    v0 = LD32(a0+12);
    cnd_ = v0 == 0;
    s2 = a0 + 12;
    if (cnd_) { goto L_08AB6128; }
    goto L_08AB60F8;
L_08AB60F8:;
    s1 = v0 + 0;
    goto L_08AB60FC;
L_08AB60FC:;
    s0 = s1 + 8;
    a0 = s0 + 0;
    a1 = s4 + 0;
    v0 = func_088BC000(a0, a1);
    goto L_08AB610C;
L_08AB610C:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_08AB6148; }
    goto L_08AB6118;
L_08AB6118:;
    s2 = s1 + 4;
    v0 = LD32(s2);
    goto L_08AB6120;
L_08AB6120:;
    cnd_ = v0 != 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08AB60FC; }
    goto L_08AB6128;
L_08AB6128:;
    sp = sp + 32;
    return;
L_08AB6148:;
    v0 = LD32(s1+4);
    ST32(s2, v0);
    func_088BBFA8(a0, a1);
    goto L_08AB6154;
L_08AB6154:;
    a0 = s3 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB6160;
L_08AB6160:;
    v0 = LD32(s2);
    goto L_08AB6120;
}

/* 08AB6168 */
void func_08AB6168(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB6168:;
    sp = sp - 32;
    s4 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s4+4); goto L_08AB61F0; }
    goto L_08AB6194;
L_08AB6194:;
    v0 = LD32(a0-4);
    v1 = 400;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s2 = a0 + v0;
    goto L_08AB61A8;
L_08AB61A8:;
    cnd_ = a0 == s2;
    s1 = s2 - 400;
    if (cnd_) { goto L_08AB61E4; }
    goto L_08AB61B0;
L_08AB61B0:;
    a0 = LD32(s1+388);
    s2 = s1 + 0;
    cnd_ = a0 == 0;
    s3 = s1 + 388;
    if (cnd_) { goto L_08AB61D0; }
    goto L_08AB61C0;
L_08AB61C0:;
    s0 = LD32(a0);
    { u64 r_ = func_088B692C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB61C8;
L_08AB61C8:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08AB61C0; }
    goto L_08AB61D0;
L_08AB61D0:;
    ST32(s3, 0);
    a0 = s1 + 288;
    { rv_t r_ = func_088B8B58(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB61DC;
L_08AB61DC:;
    a0 = LD32(s4);
    goto L_08AB61A8;
L_08AB61E4:;
    a0 = a0 - 16;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB61EC;
L_08AB61EC:;
    a0 = LD32(s4+4);
    goto L_08AB61F0;
L_08AB61F0:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08AB623C; }
    goto L_08AB61F8;
L_08AB61F8:;
    s0 = LD32(s4+12);
    goto L_08AB61FC;
L_08AB61FC:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08AB6224; }
    goto L_08AB6204;
L_08AB6204:;
    goto L_08AB6208;
L_08AB6208:;
    sp = sp + 32;
    return;
L_08AB6224:;
    a0 = s0 + 0;
    func_08AB6168(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB622C;
L_08AB622C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB6234;
L_08AB6234:;
    goto L_08AB6208;
L_08AB623C:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB6248;
L_08AB6248:;
    s0 = LD32(s4+12);
    goto L_08AB61FC;
}

/* 08AB6250 */
u32 func_08AB6250(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB6250:;
    sp = sp - 16;
    a1 = LD32(a0);
    cnd_ = a1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08AB62B8; }
    goto L_08AB6268;
L_08AB6268:;
    t1 = (u32)-1;
    a0 = LD32(a1+4);
    goto L_08AB6270;
L_08AB6270:;
    v0 = LD32(a0+12);
    v1 = LD32(a0+8);
    a3 = v0 + 1;
    t0 = v0 << 2;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    a2 = (u32)-1;
    if (cnd_) { goto L_08AB62A4; }
    goto L_08AB628C;
L_08AB628C:;
    v0 = LD32(a0+4);
    ST32(a0+12, a3);
    v0 = t0 + v0;
    a2 = LD32(v0);
    v1 = LD32(a1+8);
    a2 = a2 + v1;
    goto L_08AB62A4;
L_08AB62A4:;
    cnd_ = a2 != t1;
    v1 = a2 + 0;
    if (cnd_) { goto L_08AB6308; }
    goto L_08AB62AC;
L_08AB62AC:;
    a1 = LD32(a1+12);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1+4); goto L_08AB6270; }
    goto L_08AB62B8;
L_08AB62B8:;
    a0 = s0 + 0;
    v0 = func_08AB631C(a0, t1, t2, t3);
    goto L_08AB62C0;
L_08AB62C0:;
    cnd_ = v0 == 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08AB6308; }
    goto L_08AB62C8;
L_08AB62C8:;
    a3 = LD32(s0);
    a1 = LD32(a3+4);
    a2 = LD32(a1+12);
    v0 = LD32(a1+8);
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 == 0;
    a0 = (u32)-1;
    if (cnd_) { goto L_08AB6304; }
    goto L_08AB62E4;
L_08AB62E4:;
    v1 = a2 + 1;
    a0 = LD32(a1+4);
    ST32(a1+12, v1);
    v0 = a2 << 2;
    v0 = v0 + a0;
    a0 = LD32(v0);
    v1 = LD32(a3+8);
    a0 = a0 + v1;
    goto L_08AB6304;
L_08AB6304:;
    v1 = a0 + 0;
    goto L_08AB6308;
L_08AB6308:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 08AB631C */
u32 func_08AB631C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB631C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v1 = LD32(a0);
    a1 = LD32(a0+16);
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AB6354; }
    goto L_08AB633C;
L_08AB633C:;
    v0 = LD32(v1+8);
    goto L_08AB6340;
L_08AB6340:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+4); goto L_08AB638C; }
    goto L_08AB6348;
L_08AB6348:;
    v1 = LD32(v1+12);
    goto L_08AB634C;
L_08AB634C:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AB6340; }
    goto L_08AB6354;
L_08AB6354:;
    a0 = LD32(s0+4);
    v0 = func_08AB6398(a0, a1, t1, t2, t3);
    goto L_08AB635C;
L_08AB635C:;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08AB6378; }
    goto L_08AB6368;
L_08AB6368:;
    v0 = LD32(s0);
    a0 = 1;
    ST32(v1+12, v0);
    ST32(s0, v1);
    goto L_08AB6378;
L_08AB6378:;
    v0 = a0 + 0;
    sp = sp + 16;
    return v0;
L_08AB638C:;
    v1 = a0 + 0;
    a1 = a1 + v0;
    goto L_08AB634C;
}

/* 08AB6398 */
u32 func_08AB6398(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB6398:;
    sp = sp - 32;
    s2 = a0 + 0;
    a0 = 16;
    s6 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB63CC;
L_08AB63CC:;
    s4 = v0 + 0;
    ST32(v0, 0);
    v0 = 0 + 0;
    ST32(s4+4, 0);
    cnd_ = s4 == 0;
    ST32(s4+12, 0);
    if (cnd_) { goto L_08AB6494; }
    goto L_08AB63E4;
L_08AB63E4:;
    a0 = 400;
    { s64 p_ = (s64)(s32)s2 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    s1 = s2 - 1;
    a0 = lo;
    a0 = a0 + 16;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB63FC;
L_08AB63FC:;
    s3 = v0 + 16;
    ST32(s3-4, s2);
    cnd_ = s2 == 0;
    s0 = s3 + 0;
    if (cnd_) { goto L_08AB6424; }
    goto L_08AB640C;
L_08AB640C:;
    s5 = (u32)-1;
    goto L_08AB6410;
L_08AB6410:;
    a0 = s0 + 0;
    s1 = s1 - 1;
    func_08AB608C(a0, 0, 0, 0);
    goto L_08AB641C;
L_08AB641C:;
    cnd_ = s1 != s5;
    s0 = s0 + 400;
    if (cnd_) { goto L_08AB6410; }
    goto L_08AB6424;
L_08AB6424:;
    ST32(s4, s3);
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB6430;
L_08AB6430:;
    s0 = v0 + 0;
    v0 = D_08AF0F80 - (3968);
    v0 = v0 + 3968;
    ST32(s0, v0);
    a0 = s2 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB6448;
L_08AB6448:;
    ST32(s0+4, v0);
    a0 = 0 + 0;
    ST32(s0+12, 0);
    cnd_ = (s32)s2 <= 0;
    ST32(s0+8, s2);
    if (cnd_) { goto L_08AB6474; }
    goto L_08AB645C;
L_08AB645C:;
    v1 = v0 + 0;
    goto L_08AB6460;
L_08AB6460:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < (s32)s2;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08AB6460; }
    goto L_08AB6474;
L_08AB6474:;
    v1 = LD32(s4);
    v0 = D_08AF1BD0 - (7120);
    v0 = v0 + 7120;
    ST32(s0, v0);
    cnd_ = v1 == 0;
    ST32(s4+4, s0);
    if (cnd_) { goto L_08AB64BC; }
    goto L_08AB648C;
L_08AB648C:;
    ST32(s4+8, s6);
    v0 = s4 + 0;
    goto L_08AB6494;
L_08AB6494:;
    sp = sp + 32;
    return v0;
L_08AB64BC:;
    a0 = s4 + 0;
    func_08AB6168(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08AB64C4;
L_08AB64C4:;
    a0 = s4 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB64CC;
L_08AB64CC:;
    v0 = 0 + 0;
    goto L_08AB6494;
}

/* 08AB64D4 */
u32 func_08AB64D4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08AB64D4:;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AB6514; }
    goto L_08AB64E0;
L_08AB64E0:;
    a2 = LD32(v1+8);
    goto L_08AB64E4;
L_08AB64E4:;
    v0 = (s32)a1 < (s32)a2;
    cnd_ = v0 != 0;
    a3 = v1 + 0;
    if (cnd_) { goto L_08AB6504; }
    goto L_08AB64F0;
L_08AB64F0:;
    v0 = LD32(a0+4);
    v0 = a2 + v0;
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AB6514; }
    goto L_08AB6504;
L_08AB6504:;
    v1 = LD32(v1+12);
    cnd_ = v1 != 0;
    if (cnd_) { a2 = LD32(v1+8); goto L_08AB64E4; }
    goto L_08AB6510;
L_08AB6510:;
    a3 = 0 + 0;
    goto L_08AB6514;
L_08AB6514:;
    v0 = a3 + 0;
    return v0;
}

/* 08AB651C */
u32 func_08AB651C(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB651C:;
    t1 = LD32(a0+4);
    sp = sp - 16;
    cnd_ = t1 == 0;
    t0 = a0 + 0;
    if (cnd_) { goto L_08AB6638; }
    goto L_08AB652C;
L_08AB652C:;
    {u32 a_=a0+(16);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=a3+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    v0 = D_08AEC8A4 - (-14172);
    f2 = BITSF(LD32(v0-14172));
    v1 = 0 + 0;
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    if (cnd_) { goto L_08AB662C; }
    goto L_08AB6560;
L_08AB6560:;
    v0 = t1 < 0xfu;
    cnd_ = v0 == 0;
    v0 = v1 + 0;
    if (cnd_) { goto L_08AB6630; }
    goto L_08AB656C;
L_08AB656C:;
    {u32 a_=a1+(0);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {a1=FBITS(vr0);}
    f0 = BITSF(a1);
    f1 = f0 + f12;
    f0 = BITSF(LD32(t0+8));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_08AB6594; }
    goto L_08AB6594;
L_08AB6594:;
    ST32(t0+8, FBITS(f0));
    cnd_ = t1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08AB65F4; }
    goto L_08AB65A0;
L_08AB65A0:;
    v0 = D_08AEC8A4 - (-14172);
    f2 = BITSF(LD32(v0-14172));
    {u32 a_=a2+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    v0 = t0 + 32;
    {u32 a_=v0+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    goto L_08AB65B4;
L_08AB65B4:;
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    a0 = a0 + 1;
    v1 = a0 < t1;
    v0 = v0 + 16;
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {a1=FBITS(vr0);}
    f0 = BITSF(a1);
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    if (cnd_) { goto L_08AB6628; }
    goto L_08AB65E0;
L_08AB65E0:;
    cnd_ = v1 != 0;
    if (cnd_) { {u32 a_=v0+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));} goto L_08AB65B4; }
    goto L_08AB65E8;
L_08AB65E8:;
    v0 = 1;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_08AB662C; }
    goto L_08AB65F4;
L_08AB65F4:;
    v1 = LD32(a2);
    v0 = t1 << 4;
    v0 = t0 + v0;
    ST32(v0+32, v1);
    v0 = v0 + 32;
    v1 = t1 + 1;
    a0 = LD32(a2+4);
    ST32(t0+4, v1);
    ST32(v0+4, a0);
    v1 = LD32(a2+8);
    ST32(v0+8, v1);
    a0 = LD32(a2+12);
    ST32(v0+12, a0);
    goto L_08AB6628;
L_08AB6628:;
    v1 = 1;
    goto L_08AB662C;
L_08AB662C:;
    v0 = v1 + 0;
    goto L_08AB6630;
L_08AB6630:;
    sp = sp + 16;
    { v[0]=vr0;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;return v0; }
L_08AB6638:;
    v0 = LD32(a3);
    ST32(a0+16, v0);
    v1 = LD32(a3+4);
    ST32(a0+20, v1);
    v0 = LD32(a3+8);
    ST32(a0+24, v0);
    v1 = LD32(a3+12);
    ST32(a0+28, v1);
    {u32 a_=a0+(16);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    goto L_08AB656C;
    v[0]=vr0;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;
}

/* 08AB6660 */
void func_08AB6660(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB6660:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AB66BC; }
    goto L_08AB6680;
L_08AB6680:;
    v1 = LD32(a0-4);
    v0 = v1 << 2;
    v0 = v0 + v1;
    v0 = v0 << 3;
    s0 = a0 + v0;
    goto L_08AB6694;
L_08AB6694:;
    cnd_ = a0 == s0;
    s0 = s0 - 40;
    if (cnd_) { goto L_08AB66AC; }
    goto L_08AB669C;
L_08AB669C:;
    a0 = s0 + 0;
    func_088CEED0(a0);
    goto L_08AB66A4;
L_08AB66A4:;
    a0 = LD32(s1);
    goto L_08AB6694;
L_08AB66AC:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB66B4;
L_08AB66B4:;
    ST32(s1, 0);
    goto L_08AB66BC;
L_08AB66BC:;
    v0 = 1;
    sp = sp + 16;
    return;
}

/* 08AB66D0 */
void func_08AB66D0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB66D0:;
    sp = sp - 32;
    s4 = a0 + 0;
    s2 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AB6720; }
    goto L_08AB66F8;
L_08AB66F8:;
    ST32(a0, 0);
    goto L_08AB66FC;
L_08AB66FC:;
    v0 = 1;
    sp = sp + 32;
    return;
L_08AB6720:;
    a0 = a1 << 2;
    a0 = a0 + a1;
    a0 = a0 << 3;
    a0 = a0 + 4;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB6734;
L_08AB6734:;
    s3 = v0 + 4;
    ST32(s3-4, s2);
    s1 = s3 + 0;
    cnd_ = s2 == 0;
    s0 = s2 - 1;
    if (cnd_) { goto L_08AB6760; }
    goto L_08AB6748;
L_08AB6748:;
    s2 = (u32)-1;
    goto L_08AB674C;
L_08AB674C:;
    a0 = s1 + 0;
    s0 = s0 - 1;
    func_088CEEBC(a0);
    goto L_08AB6758;
L_08AB6758:;
    cnd_ = s0 != s2;
    s1 = s1 + 40;
    if (cnd_) { goto L_08AB674C; }
    goto L_08AB6760;
L_08AB6760:;
    ST32(s4, s3);
    goto L_08AB66FC;
}

/* 08AB6768 */
rv_t func_08AB6768(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB6768:;
    v0 = D_08B2C0A0 - (-16224);
    a1 = a0 + 0;
    a0 = LD32(v0-16224);
    sp = sp - 16;
    { u64 r_ = func_088CDE84(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB6784;
L_08AB6784:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB6790 */
rv_t func_08AB6790(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB6790:;
    v0 = D_08B2C0A0 - (-16224);
    a1 = a0 + 0;
    a0 = LD32(v0-16224);
    sp = sp - 16;
    { u64 r_ = func_088CE564(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB67AC;
L_08AB67AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB67B8 */
rv_t func_08AB67B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB67B8:;
    v0 = D_08B2C0A0 - (-16224);
    a1 = a0 + 0;
    a0 = LD32(v0-16224);
    sp = sp - 16;
    { u64 r_ = func_088CEA04(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB67D4;
L_08AB67D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB67E0 */
rv_t func_08AB67E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB67E0:;
    v0 = D_08B2C0A0 - (-16224);
    a1 = a0 + 0;
    a0 = LD32(v0-16224);
    sp = sp - 16;
    { u64 r_ = func_088CEA54(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB67FC;
L_08AB67FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB6808 */
rv_t func_08AB6808(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB6808:;
    v0 = D_08B2C0A0 - (-16224);
    a1 = a0 + 0;
    a0 = LD32(v0-16224);
    sp = sp - 16;
    { rv_t r_ = func_088CEC6C(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB6824;
L_08AB6824:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB6830 */
void func_08AB6830(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB6830:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+36);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB68A0; }
    goto L_08AB6854;
L_08AB6854:;
    v0 = LD32(s0+40);
    goto L_08AB6858;
L_08AB6858:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB6890; }
    goto L_08AB6864;
L_08AB6864:;
    cnd_ = s0 == 0;
    a0 = s0 + 4;
    if (cnd_) { goto L_08AB687C; }
    goto L_08AB686C;
L_08AB686C:;
    { rv_t r_ = func_088D04EC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB6874;
L_08AB6874:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB687C;
L_08AB687C:;
    sp = sp + 16;
    return;
L_08AB6890:;
    func_08AB6830(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB6898;
L_08AB6898:;
    goto L_08AB6864;
L_08AB68A0:;
    func_08AB6830(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB68A8;
L_08AB68A8:;
    v0 = LD32(s0+40);
    goto L_08AB6858;
}

/* 08AB68B0 */
rv_t func_08AB68B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB68B0:;
    a1 = a0 + 0;
    a0 = D_08B2C0FC - (-16132);
    sp = sp - 16;
    a0 = a0 - 16132;
    { u64 r_ = func_088CE4A8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB68C8;
L_08AB68C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB68D4 */
void func_08AB68D4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB68D4:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+16);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB6934; }
    goto L_08AB68F8;
L_08AB68F8:;
    v0 = LD32(s0+20);
    goto L_08AB68FC;
L_08AB68FC:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB6924; }
    goto L_08AB6908;
L_08AB6908:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB6910;
L_08AB6910:;
    sp = sp + 16;
    return;
L_08AB6924:;
    func_08AB68D4(a0, a1, t1, t2, t3);
    goto L_08AB692C;
L_08AB692C:;
    goto L_08AB6908;
L_08AB6934:;
    func_08AB68D4(a0, a1, t1, t2, t3);
    goto L_08AB693C;
L_08AB693C:;
    v0 = LD32(s0+20);
    goto L_08AB68FC;
}

/* 08AB6944 */
u32 func_08AB6944(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB6944:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AB6988; }
    goto L_08AB695C;
L_08AB695C:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AB6964;
L_08AB6964:;
    a0 = v0 + 20;
    a3 = v0 + 16;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AB699C; }
    goto L_08AB697C;
L_08AB697C:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AB6964; }
    goto L_08AB6988;
L_08AB6988:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AB699C; }
    goto L_08AB6994;
L_08AB6994:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AB69AC; }
    goto L_08AB699C;
L_08AB699C:;
    v0 = t0 + 0;
    sp = sp + 16;
    return v0;
L_08AB69AC:;
    a2 = 1;
    v0 = func_08AB6944(a0, a1, a2);
    goto L_08AB69B4;
L_08AB69B4:;
    t0 = v0 + 0;
    goto L_08AB699C;
}

/* 08AB69BC */
u64 func_08AB69BC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08AB69BC:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB69F8; }
    goto L_08AB69C8;
L_08AB69C8:;
    t0 = v0 + 0;
    a3 = a0 + 0;
    v0 = LD32(t0);
    goto L_08AB69D4;
L_08AB69D4:;
    a2 = t0 + 12;
    cnd_ = v0 == a1;
    v1 = a1 < v0;
    if (cnd_) { goto L_08AB6A00; }
    goto L_08AB69E0;
L_08AB69E0:;
    a3 = t0 + 8;
    if (v1 == 0) a3 = a2;
    t0 = LD32(a3);
    cnd_ = t0 != 0;
    if (cnd_) { v0 = LD32(t0); goto L_08AB69D4; }
    goto L_08AB69F4;
L_08AB69F4:;
    v1 = 0 + 0;
    goto L_08AB69F8;
L_08AB69F8:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB6A00:;
    cnd_ = t0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB69F8; }
    goto L_08AB6A08;
L_08AB6A08:;
    v1 = LD32(t0+8);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(t0+12); goto L_08AB6A98; }
    goto L_08AB6A14;
L_08AB6A14:;
    a1 = LD32(t0+12);
    cnd_ = a1 == 0;
    a2 = LD32(a0+4);
    if (cnd_) { goto L_08AB6A90; }
    goto L_08AB6A20;
L_08AB6A20:;
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, a1); goto L_08AB6A88; }
    goto L_08AB6A2C;
L_08AB6A2C:;
    ST32(a3, v1);
    t1 = LD32(t0+12);
    goto L_08AB6A34;
L_08AB6A34:;
    v1 = LD32(a3);
    a1 = LD32(t1);
    goto L_08AB6A3C;
L_08AB6A3C:;
    v0 = LD32(v1);
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AB6A78; }
    goto L_08AB6A4C;
L_08AB6A4C:;
    v0 = LD32(v1+12);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+12, t1); goto L_08AB6A60; }
    goto L_08AB6A58;
L_08AB6A58:;
    v1 = v0 + 0;
    goto L_08AB6A3C;
L_08AB6A60:;
    v0 = a2 - 1;
    ST32(a0+4, v0);
    v1 = t0 + 0;
    ST32(t0+8, 0);
    ST32(t0+12, 0);
    goto L_08AB69F8;
L_08AB6A78:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v0 + 0; goto L_08AB6A3C; }
    goto L_08AB6A80;
L_08AB6A80:;
    ST32(v1+8, t1);
    goto L_08AB6A60;
L_08AB6A88:;
    t1 = LD32(t0+8);
    goto L_08AB6A34;
L_08AB6A90:;
    ST32(a3, v1);
    goto L_08AB6A60;
L_08AB6A98:;
    a2 = LD32(a0+4);
    ST32(a3, v0);
    goto L_08AB6A60;
}

/* 08AB6AA4 */
u32 func_08AB6AA4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08AB6AA4:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB6AE0; }
    goto L_08AB6AB0;
L_08AB6AB0:;
    t0 = v0 + 0;
    a3 = a0 + 0;
    v0 = LD32(t0);
    goto L_08AB6ABC;
L_08AB6ABC:;
    a2 = t0 + 12;
    cnd_ = v0 == a1;
    v1 = a1 < v0;
    if (cnd_) { goto L_08AB6AE8; }
    goto L_08AB6AC8;
L_08AB6AC8:;
    a3 = t0 + 8;
    if (v1 == 0) a3 = a2;
    t0 = LD32(a3);
    cnd_ = t0 != 0;
    if (cnd_) { v0 = LD32(t0); goto L_08AB6ABC; }
    goto L_08AB6ADC;
L_08AB6ADC:;
    v1 = 0 + 0;
    goto L_08AB6AE0;
L_08AB6AE0:;
    v0 = v1 + 0;
    return v0;
L_08AB6AE8:;
    cnd_ = t0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB6AE0; }
    goto L_08AB6AF0;
L_08AB6AF0:;
    v1 = LD32(t0+8);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(t0+12); goto L_08AB6B80; }
    goto L_08AB6AFC;
L_08AB6AFC:;
    a1 = LD32(t0+12);
    cnd_ = a1 == 0;
    a2 = LD32(a0+4);
    if (cnd_) { goto L_08AB6B78; }
    goto L_08AB6B08;
L_08AB6B08:;
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, a1); goto L_08AB6B70; }
    goto L_08AB6B14;
L_08AB6B14:;
    ST32(a3, v1);
    t1 = LD32(t0+12);
    goto L_08AB6B1C;
L_08AB6B1C:;
    v1 = LD32(a3);
    a1 = LD32(t1);
    goto L_08AB6B24;
L_08AB6B24:;
    v0 = LD32(v1);
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AB6B60; }
    goto L_08AB6B34;
L_08AB6B34:;
    v0 = LD32(v1+12);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+12, t1); goto L_08AB6B48; }
    goto L_08AB6B40;
L_08AB6B40:;
    v1 = v0 + 0;
    goto L_08AB6B24;
L_08AB6B48:;
    v0 = a2 - 1;
    ST32(a0+4, v0);
    v1 = t0 + 0;
    ST32(t0+8, 0);
    ST32(t0+12, 0);
    goto L_08AB6AE0;
L_08AB6B60:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v0 + 0; goto L_08AB6B24; }
    goto L_08AB6B68;
L_08AB6B68:;
    ST32(v1+8, t1);
    goto L_08AB6B48;
L_08AB6B70:;
    t1 = LD32(t0+8);
    goto L_08AB6B1C;
L_08AB6B78:;
    ST32(a3, v1);
    goto L_08AB6B48;
L_08AB6B80:;
    a2 = LD32(a0+4);
    ST32(a3, v0);
    goto L_08AB6B48;
}

/* 08AB6B8C */
u64 func_08AB6B8C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_08AB6B8C:;
    v0 = a0 + 24;
    v1 = a0 + 48;
    ST32(a0+4, 0);
    ST32(a0+16, 0);
    ST8(a0+8, 0);
    ST32(a0+12, 0);
    ST32(v0+4, 0);
    ST32(v0+16, 0);
    ST8(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v0+20, 0);
    ST32(a0+48, 0);
    ST32(v1+20, 0);
    ST32(a0, 0);
    ST32(a0+20, 0);
    ST32(a0+24, 0);
    ST32(v1+4, 0);
    ST8(v1+8, 0);
    ST32(v1+12, 0);
    ST32(v1+16, 0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08AB6BE0 */
rv_t func_08AB6BE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB6BE0:;
    v0 = D_08AF7CC0 - (31936);
    v0 = v0 + 31936;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AB6BF0 */
rv_t func_08AB6BF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB6BF0:;
    v0 = D_08AF7CC0 - (31936);
    v0 = v0 + 31936;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB6C0C;
L_08AB6C0C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB6C18 */
rv_t func_08AB6C18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB6C18:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB6C20 */
rv_t func_08AB6C20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB6C20:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB6C28 */
void func_08AB6C28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB6C28:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB6C9C; }
    goto L_08AB6C54;
L_08AB6C54:;
    v0 = LD32(s0+12);
    goto L_08AB6C58;
L_08AB6C58:;
    a0 = s1 + 0;
    a2 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB6C8C; }
    goto L_08AB6C68;
L_08AB6C68:;
    a0 = LD32(s0);
    goto L_08AB6C6C;
L_08AB6C6C:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB6C74;
L_08AB6C74:;
    sp = sp + 16;
    return;
L_08AB6C8C:;
    func_08AB6C28(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB6C94;
L_08AB6C94:;
    a0 = LD32(s0);
    goto L_08AB6C6C;
L_08AB6C9C:;
    func_08AB6C28(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB6CA4;
L_08AB6CA4:;
    v0 = LD32(s0+12);
    goto L_08AB6C58;
}

/* 08AB6CAC */
void func_08AB6CAC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB6CAC:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB6D0C; }
    goto L_08AB6CD0;
L_08AB6CD0:;
    v0 = LD32(s0+12);
    goto L_08AB6CD4;
L_08AB6CD4:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB6CFC; }
    goto L_08AB6CE0;
L_08AB6CE0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB6CE8;
L_08AB6CE8:;
    sp = sp + 16;
    return;
L_08AB6CFC:;
    func_08AB6CAC(a0, a1, t1, t2, t3);
    goto L_08AB6D04;
L_08AB6D04:;
    goto L_08AB6CE0;
L_08AB6D0C:;
    func_08AB6CAC(a0, a1, t1, t2, t3);
    goto L_08AB6D14;
L_08AB6D14:;
    v0 = LD32(s0+12);
    goto L_08AB6CD4;
}

/* 08AB6D1C */
void func_08AB6D1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB6D1C:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB6D90; }
    goto L_08AB6D48;
L_08AB6D48:;
    v0 = LD32(s0+12);
    goto L_08AB6D4C;
L_08AB6D4C:;
    a0 = s1 + 0;
    a2 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB6D80; }
    goto L_08AB6D5C;
L_08AB6D5C:;
    a0 = LD32(s0);
    goto L_08AB6D60;
L_08AB6D60:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB6D68;
L_08AB6D68:;
    sp = sp + 16;
    return;
L_08AB6D80:;
    func_08AB6D1C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB6D88;
L_08AB6D88:;
    a0 = LD32(s0);
    goto L_08AB6D60;
L_08AB6D90:;
    func_08AB6D1C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB6D98;
L_08AB6D98:;
    v0 = LD32(s0+12);
    goto L_08AB6D4C;
}

/* 08AB6DA0 */
void func_08AB6DA0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB6DA0:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+12);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AB6E18; }
    goto L_08AB6DC0;
L_08AB6DC0:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08AB6E04; }
    goto L_08AB6DCC;
L_08AB6DCC:;
    v0 = s1 << 2;
    goto L_08AB6DD0;
L_08AB6DD0:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s0 + 0;
    s1 = s1 + 1;
    { u64 r_ = func_08AB69BC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB6DE4;
L_08AB6DE4:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB6DEC;
L_08AB6DEC:;
    v0 = LD32(s0+16);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s0+12);
    if (cnd_) { goto L_08AB6E04; }
    goto L_08AB6DFC;
L_08AB6DFC:;
    v0 = s1 << 2;
    goto L_08AB6DD0;
L_08AB6E04:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AB6E28; }
    goto L_08AB6E0C;
L_08AB6E0C:;
    ST32(s0+16, 0);
    goto L_08AB6E10;
L_08AB6E10:;
    ST32(s0+12, 0);
    goto L_08AB6E18;
L_08AB6E18:;
    sp = sp + 16;
    return;
L_08AB6E28:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB6E30;
L_08AB6E30:;
    ST32(s0+16, 0);
    goto L_08AB6E10;
}

/* 08AB6E38 */
u64 func_08AB6E38(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB6E38:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB6E98; }
    goto L_08AB6E5C;
L_08AB6E5C:;
    v0 = LD32(s0+12);
    goto L_08AB6E60;
L_08AB6E60:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB6E88; }
    goto L_08AB6E6C;
L_08AB6E6C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB6E74;
L_08AB6E74:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB6E88:;
    { u64 r_ = func_08AB6E38(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB6E90;
L_08AB6E90:;
    goto L_08AB6E6C;
L_08AB6E98:;
    { u64 r_ = func_08AB6E38(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB6EA0;
L_08AB6EA0:;
    v0 = LD32(s0+12);
    goto L_08AB6E60;
}

/* 08AB6EA8 */
void func_08AB6EA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB6EA8:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB6F1C; }
    goto L_08AB6ED4;
L_08AB6ED4:;
    v0 = LD32(s0+12);
    goto L_08AB6ED8;
L_08AB6ED8:;
    a0 = s1 + 0;
    a2 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB6F0C; }
    goto L_08AB6EE8;
L_08AB6EE8:;
    a0 = LD32(s0);
    goto L_08AB6EEC;
L_08AB6EEC:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB6EF4;
L_08AB6EF4:;
    sp = sp + 16;
    return;
L_08AB6F0C:;
    func_08AB6EA8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB6F14;
L_08AB6F14:;
    a0 = LD32(s0);
    goto L_08AB6EEC;
L_08AB6F1C:;
    func_08AB6EA8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB6F24;
L_08AB6F24:;
    v0 = LD32(s0+12);
    goto L_08AB6ED8;
}

/* 08AB6F2C */
void func_08AB6F2C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB6F2C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+12);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AB6FA4; }
    goto L_08AB6F4C;
L_08AB6F4C:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08AB6F90; }
    goto L_08AB6F58;
L_08AB6F58:;
    v0 = s1 << 2;
    goto L_08AB6F5C;
L_08AB6F5C:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s0 + 0;
    s1 = s1 + 1;
    v0 = func_08AB6AA4(a0, a1);
    goto L_08AB6F70;
L_08AB6F70:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB6F78;
L_08AB6F78:;
    v0 = LD32(s0+16);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s0+12);
    if (cnd_) { goto L_08AB6F90; }
    goto L_08AB6F88;
L_08AB6F88:;
    v0 = s1 << 2;
    goto L_08AB6F5C;
L_08AB6F90:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AB6FB4; }
    goto L_08AB6F98;
L_08AB6F98:;
    ST32(s0+16, 0);
    goto L_08AB6F9C;
L_08AB6F9C:;
    ST32(s0+12, 0);
    goto L_08AB6FA4;
L_08AB6FA4:;
    sp = sp + 16;
    return;
L_08AB6FB4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB6FBC;
L_08AB6FBC:;
    ST32(s0+16, 0);
    goto L_08AB6F9C;
}

/* 08AB6FC4 */
u64 func_08AB6FC4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB6FC4:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB7024; }
    goto L_08AB6FE8;
L_08AB6FE8:;
    v0 = LD32(s0+12);
    goto L_08AB6FEC;
L_08AB6FEC:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB7014; }
    goto L_08AB6FF8;
L_08AB6FF8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB7000;
L_08AB7000:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB7014:;
    { u64 r_ = func_08AB6FC4(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB701C;
L_08AB701C:;
    goto L_08AB6FF8;
L_08AB7024:;
    { u64 r_ = func_08AB6FC4(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB702C;
L_08AB702C:;
    v0 = LD32(s0+12);
    goto L_08AB6FEC;
}

/* 08AB7034 */
u64 func_08AB7034(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB7034:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AB7078; }
    goto L_08AB704C;
L_08AB704C:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AB7054;
L_08AB7054:;
    a0 = v0 + 12;
    a3 = v0 + 8;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AB708C; }
    goto L_08AB706C;
L_08AB706C:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AB7054; }
    goto L_08AB7078;
L_08AB7078:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AB708C; }
    goto L_08AB7084;
L_08AB7084:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AB709C; }
    goto L_08AB708C;
L_08AB708C:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB709C:;
    a2 = 1;
    { u64 r_ = func_08AB7034(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB70A4;
L_08AB70A4:;
    t0 = v0 + 0;
    goto L_08AB708C;
}

/* 08AB70AC */
u64 func_08AB70AC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB70AC:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AB70F0; }
    goto L_08AB70C4;
L_08AB70C4:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AB70CC;
L_08AB70CC:;
    a0 = v0 + 12;
    a3 = v0 + 8;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AB7104; }
    goto L_08AB70E4;
L_08AB70E4:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AB70CC; }
    goto L_08AB70F0;
L_08AB70F0:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AB7104; }
    goto L_08AB70FC;
L_08AB70FC:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AB7114; }
    goto L_08AB7104;
L_08AB7104:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB7114:;
    a2 = 1;
    { u64 r_ = func_08AB70AC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB711C;
L_08AB711C:;
    t0 = v0 + 0;
    goto L_08AB7104;
}

/* 08AB7124 */
u32 func_08AB7124(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB7124:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AB7168; }
    goto L_08AB713C;
L_08AB713C:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AB7144;
L_08AB7144:;
    a0 = v0 + 12;
    a3 = v0 + 8;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AB717C; }
    goto L_08AB715C;
L_08AB715C:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AB7144; }
    goto L_08AB7168;
L_08AB7168:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AB717C; }
    goto L_08AB7174;
L_08AB7174:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AB718C; }
    goto L_08AB717C;
L_08AB717C:;
    v0 = t0 + 0;
    sp = sp + 16;
    return v0;
L_08AB718C:;
    a2 = 1;
    v0 = func_08AB7124(a0, a1, a2);
    goto L_08AB7194;
L_08AB7194:;
    t0 = v0 + 0;
    goto L_08AB717C;
}

/* 08AB719C */
u64 func_08AB719C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08AB719C:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AB71FC; }
    goto L_08AB71AC;
L_08AB71AC:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AB71FC; }
    goto L_08AB71D0;
L_08AB71D0:;
    a3 = LD32(a0);
    goto L_08AB71D4;
L_08AB71D4:;
    v0 = LD32(a3);
    v1 = LD32(v0-12);
    v1 = a3 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AB7204; }
    goto L_08AB71EC;
L_08AB71EC:;
    a0 = LD32(a0+4);
    goto L_08AB71F0;
L_08AB71F0:;
    cnd_ = a0 != 0;
    if (cnd_) { a3 = LD32(a0); goto L_08AB71D4; }
    goto L_08AB71F8;
L_08AB71F8:;
    a3 = 0 + 0;
    goto L_08AB71FC;
L_08AB71FC:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB7204:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(a0+8); goto L_08AB7220; }
    goto L_08AB720C;
L_08AB720C:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AB71F0; }
    goto L_08AB721C;
L_08AB721C:;
    v0 = LD_U8(a0+8);
    goto L_08AB7220;
L_08AB7220:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AB71F0; }
    goto L_08AB7228;
L_08AB7228:;
    goto L_08AB71FC;
}

/* 08AB7230 */
void func_08AB7230(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB7230:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AB728C; }
    goto L_08AB7250;
L_08AB7250:;
    v1 = LD32(a0-4);
    v0 = v1 << 4;
    v0 = v0 + v1;
    v0 = v0 << 4;
    s0 = a0 + v0;
    goto L_08AB7264;
L_08AB7264:;
    cnd_ = a0 == s0;
    s0 = s0 - 272;
    if (cnd_) { goto L_08AB727C; }
    goto L_08AB726C;
L_08AB726C:;
    a0 = s0 + 0;
    func_088D7394(a0);
    goto L_08AB7274;
L_08AB7274:;
    a0 = LD32(s1);
    goto L_08AB7264;
L_08AB727C:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB7284;
L_08AB7284:;
    ST32(s1, 0);
    goto L_08AB728C;
L_08AB728C:;
    v0 = 1;
    sp = sp + 16;
    return;
}

/* 08AB72A0 */
void func_08AB72A0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB72A0:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AB72D8; }
    goto L_08AB72BC;
L_08AB72BC:;
    ST32(a0, 0);
    goto L_08AB72C0;
L_08AB72C0:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB72D8:;
    a0 = a1 << 4;
    a0 = a0 + a1;
    a0 = a0 << 4;
    a0 = a0 + 4;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB72EC;
L_08AB72EC:;
    v0 = v0 + 4;
    ST32(v0-4, s0);
    v1 = v0 + 0;
    cnd_ = s0 == 0;
    a0 = s0 - 1;
    if (cnd_) { goto L_08AB731C; }
    goto L_08AB7300;
L_08AB7300:;
    a1 = (u32)-1;
    goto L_08AB7304;
L_08AB7304:;
    a0 = a0 - 1;
    ST32(v1, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    cnd_ = a0 != a1;
    v1 = v1 + 272;
    if (cnd_) { goto L_08AB7304; }
    goto L_08AB731C;
L_08AB731C:;
    ST32(s1, v0);
    goto L_08AB72C0;
}

/* 08AB7324 */
void func_08AB7324(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB7324:;
    sp = sp - 16;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AB738C; }
    goto L_08AB7340;
L_08AB7340:;
    v0 = LD32(v1-4);
    v0 = v0 << 4;
    s0 = v1 + v0;
    goto L_08AB734C;
L_08AB734C:;
    cnd_ = v1 == s0;
    s0 = s0 - 16;
    if (cnd_) { goto L_08AB7380; }
    goto L_08AB7354;
L_08AB7354:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB736C; }
    goto L_08AB7360;
L_08AB7360:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_08AB734C;
L_08AB736C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB7374;
L_08AB7374:;
    ST32(s0, 0);
    v1 = LD32(s1);
    goto L_08AB7360;
L_08AB7380:;
    a0 = v1 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB7388;
L_08AB7388:;
    ST32(s1, 0);
    goto L_08AB738C;
L_08AB738C:;
    v0 = 1;
    sp = sp + 16;
    return;
}

/* 08AB73A4 */
void func_08AB73A4(u32 a0)
{
    u32 v0 = 0;
L_08AB73A4:;
    v0 = (u32)-1;
    ST32(a0, v0);
    return;
}

/* 08AB73B0 */
void func_08AB73B0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB73B0:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB73E0; }
    goto L_08AB73CC;
L_08AB73CC:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB73E0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB73E8;
L_08AB73E8:;
    ST32(s0, 0);
    goto L_08AB73CC;
}

/* 08AB73F0 */
void func_08AB73F0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB73F0:;
    sp = sp - 16;
    v0 = a1 << 2;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AB7424; }
    goto L_08AB740C;
L_08AB740C:;
    ST32(s0, 0);
    goto L_08AB7410;
L_08AB7410:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB7424:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB742C;
L_08AB742C:;
    ST32(s0, v0);
    goto L_08AB7410;
}

/* 08AB7434 */
u32 func_08AB7434(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08AB7434:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB7470; }
    goto L_08AB7440;
L_08AB7440:;
    t0 = v0 + 0;
    a3 = a0 + 0;
    v0 = LD32(t0);
    goto L_08AB744C;
L_08AB744C:;
    a2 = t0 + 148;
    cnd_ = v0 == a1;
    v1 = a1 < v0;
    if (cnd_) { goto L_08AB7478; }
    goto L_08AB7458;
L_08AB7458:;
    a3 = t0 + 144;
    if (v1 == 0) a3 = a2;
    t0 = LD32(a3);
    cnd_ = t0 != 0;
    if (cnd_) { v0 = LD32(t0); goto L_08AB744C; }
    goto L_08AB746C;
L_08AB746C:;
    v1 = 0 + 0;
    goto L_08AB7470;
L_08AB7470:;
    v0 = v1 + 0;
    return v0;
L_08AB7478:;
    cnd_ = t0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB7470; }
    goto L_08AB7480;
L_08AB7480:;
    v1 = LD32(t0+144);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(t0+148); goto L_08AB7510; }
    goto L_08AB748C;
L_08AB748C:;
    a1 = LD32(t0+148);
    cnd_ = a1 == 0;
    a2 = LD32(a0+4);
    if (cnd_) { goto L_08AB7508; }
    goto L_08AB7498;
L_08AB7498:;
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, a1); goto L_08AB7500; }
    goto L_08AB74A4;
L_08AB74A4:;
    ST32(a3, v1);
    t1 = LD32(t0+148);
    goto L_08AB74AC;
L_08AB74AC:;
    v1 = LD32(a3);
    a1 = LD32(t1);
    goto L_08AB74B4;
L_08AB74B4:;
    v0 = LD32(v1);
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+144); goto L_08AB74F0; }
    goto L_08AB74C4;
L_08AB74C4:;
    v0 = LD32(v1+148);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+148, t1); goto L_08AB74D8; }
    goto L_08AB74D0;
L_08AB74D0:;
    v1 = v0 + 0;
    goto L_08AB74B4;
L_08AB74D8:;
    v0 = a2 - 1;
    ST32(a0+4, v0);
    v1 = t0 + 0;
    ST32(t0+144, 0);
    ST32(t0+148, 0);
    goto L_08AB7470;
L_08AB74F0:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v0 + 0; goto L_08AB74B4; }
    goto L_08AB74F8;
L_08AB74F8:;
    ST32(v1+144, t1);
    goto L_08AB74D8;
L_08AB7500:;
    t1 = LD32(t0+144);
    goto L_08AB74AC;
L_08AB7508:;
    ST32(a3, v1);
    goto L_08AB74D8;
L_08AB7510:;
    a2 = LD32(a0+4);
    ST32(a3, v0);
    goto L_08AB74D8;
}

/* 08AB751C */
void func_08AB751C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB751C:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+144);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB7590; }
    goto L_08AB7548;
L_08AB7548:;
    v0 = LD32(s0+148);
    goto L_08AB754C;
L_08AB754C:;
    a0 = s1 + 0;
    a2 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB7580; }
    goto L_08AB755C;
L_08AB755C:;
    a0 = LD32(s0);
    goto L_08AB7560;
L_08AB7560:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB7568;
L_08AB7568:;
    sp = sp + 16;
    return;
L_08AB7580:;
    func_08AB751C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB7588;
L_08AB7588:;
    a0 = LD32(s0);
    goto L_08AB7560;
L_08AB7590:;
    func_08AB751C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB7598;
L_08AB7598:;
    v0 = LD32(s0+148);
    goto L_08AB754C;
}

/* 08AB75A0 */
u64 func_08AB75A0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB75A0:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+12);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AB7618; }
    goto L_08AB75C0;
L_08AB75C0:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08AB7604; }
    goto L_08AB75CC;
L_08AB75CC:;
    v0 = s1 << 2;
    goto L_08AB75D0;
L_08AB75D0:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s0 + 0;
    s1 = s1 + 1;
    v0 = func_08AB7434(a0, a1);
    goto L_08AB75E4;
L_08AB75E4:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB75EC;
L_08AB75EC:;
    v0 = LD32(s0+16);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s0+12);
    if (cnd_) { goto L_08AB7604; }
    goto L_08AB75FC;
L_08AB75FC:;
    v0 = s1 << 2;
    goto L_08AB75D0;
L_08AB7604:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AB7628; }
    goto L_08AB760C;
L_08AB760C:;
    ST32(s0+16, 0);
    goto L_08AB7610;
L_08AB7610:;
    ST32(s0+12, 0);
    goto L_08AB7618;
L_08AB7618:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB7628:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB7630;
L_08AB7630:;
    ST32(s0+16, 0);
    goto L_08AB7610;
}

/* 08AB7638 */
void func_08AB7638(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB7638:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+144);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB7698; }
    goto L_08AB765C;
L_08AB765C:;
    v0 = LD32(s0+148);
    goto L_08AB7660;
L_08AB7660:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB7688; }
    goto L_08AB766C;
L_08AB766C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB7674;
L_08AB7674:;
    sp = sp + 16;
    return;
L_08AB7688:;
    func_08AB7638(a0, a1, t1, t2, t3);
    goto L_08AB7690;
L_08AB7690:;
    goto L_08AB766C;
L_08AB7698:;
    func_08AB7638(a0, a1, t1, t2, t3);
    goto L_08AB76A0;
L_08AB76A0:;
    v0 = LD32(s0+148);
    goto L_08AB7660;
}

/* 08AB76A8 */
u64 func_08AB76A8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08AB76A8:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB76E4; }
    goto L_08AB76B4;
L_08AB76B4:;
    t0 = v0 + 0;
    a3 = a0 + 0;
    v0 = LD32(t0);
    goto L_08AB76C0;
L_08AB76C0:;
    a2 = t0 + 12;
    cnd_ = v0 == a1;
    v1 = a1 < v0;
    if (cnd_) { goto L_08AB76EC; }
    goto L_08AB76CC;
L_08AB76CC:;
    a3 = t0 + 8;
    if (v1 == 0) a3 = a2;
    t0 = LD32(a3);
    cnd_ = t0 != 0;
    if (cnd_) { v0 = LD32(t0); goto L_08AB76C0; }
    goto L_08AB76E0;
L_08AB76E0:;
    v1 = 0 + 0;
    goto L_08AB76E4;
L_08AB76E4:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB76EC:;
    cnd_ = t0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB76E4; }
    goto L_08AB76F4;
L_08AB76F4:;
    v1 = LD32(t0+8);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(t0+12); goto L_08AB7784; }
    goto L_08AB7700;
L_08AB7700:;
    a1 = LD32(t0+12);
    cnd_ = a1 == 0;
    a2 = LD32(a0+4);
    if (cnd_) { goto L_08AB777C; }
    goto L_08AB770C;
L_08AB770C:;
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, a1); goto L_08AB7774; }
    goto L_08AB7718;
L_08AB7718:;
    ST32(a3, v1);
    t1 = LD32(t0+12);
    goto L_08AB7720;
L_08AB7720:;
    v1 = LD32(a3);
    a1 = LD32(t1);
    goto L_08AB7728;
L_08AB7728:;
    v0 = LD32(v1);
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AB7764; }
    goto L_08AB7738;
L_08AB7738:;
    v0 = LD32(v1+12);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+12, t1); goto L_08AB774C; }
    goto L_08AB7744;
L_08AB7744:;
    v1 = v0 + 0;
    goto L_08AB7728;
L_08AB774C:;
    v0 = a2 - 1;
    ST32(a0+4, v0);
    v1 = t0 + 0;
    ST32(t0+8, 0);
    ST32(t0+12, 0);
    goto L_08AB76E4;
L_08AB7764:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v0 + 0; goto L_08AB7728; }
    goto L_08AB776C;
L_08AB776C:;
    ST32(v1+8, t1);
    goto L_08AB774C;
L_08AB7774:;
    t1 = LD32(t0+8);
    goto L_08AB7720;
L_08AB777C:;
    ST32(a3, v1);
    goto L_08AB774C;
L_08AB7784:;
    a2 = LD32(a0+4);
    ST32(a3, v0);
    goto L_08AB774C;
}

/* 08AB7790 */
u64 func_08AB7790(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB7790:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AB77D4; }
    goto L_08AB77A8;
L_08AB77A8:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AB77B0;
L_08AB77B0:;
    a0 = v0 + 12;
    a3 = v0 + 8;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AB77E8; }
    goto L_08AB77C8;
L_08AB77C8:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AB77B0; }
    goto L_08AB77D4;
L_08AB77D4:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AB77E8; }
    goto L_08AB77E0;
L_08AB77E0:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AB77F8; }
    goto L_08AB77E8;
L_08AB77E8:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB77F8:;
    a2 = 1;
    { u64 r_ = func_08AB7790(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB7800;
L_08AB7800:;
    t0 = v0 + 0;
    goto L_08AB77E8;
}

/* 08AB7808 */
u32 func_08AB7808(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB7808:;
    sp = sp - 32;
    s3 = a2 + 0;
    s2 = a0 + 0;
    s1 = a1 + 0;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08AB78A0; }
    goto L_08AB7838;
L_08AB7838:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08AB7870; }
    goto L_08AB7844;
L_08AB7844:;
    v1 = v0 + 0;
    goto L_08AB7848;
L_08AB7848:;
    a0 = v1 + 12;
    s0 = v1 + 8;
    v1 = LD32(v1);
    a1 = 0 + 0;
    v0 = s1 < v1;
    cnd_ = v1 == s1;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_08AB78A0; }
    goto L_08AB7864;
L_08AB7864:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08AB7848; }
    goto L_08AB7870;
L_08AB7870:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB7878;
L_08AB7878:;
    a0 = LD32(s3);
    ST32(v0, s1);
    a1 = v0 + 4;
    ST32(v0+4, a0);
    v1 = LD32(s2+4);
    ST32(v0+8, 0);
    v1 = v1 + 1;
    ST32(v0+12, 0);
    ST32(s2+4, v1);
    ST32(s0, v0);
    goto L_08AB78A0;
L_08AB78A0:;
    v0 = a1 + 0;
    sp = sp + 32;
    return v0;
}

/* 08AB78C0 */
rv_t func_08AB78C0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB78C0:;
    sp = sp - 16;
    s1 = a1 + 0;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08AB7934; }
    goto L_08AB78E0;
L_08AB78E0:;
    a0 = LD32(a0+12);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_08AB7920; }
    goto L_08AB78EC;
L_08AB78EC:;
    v1 = LD32(s0+16);
    a1 = 1;
    v0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0, s1);
    ST32(s0+16, v1);
    goto L_08AB7908;
L_08AB7908:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AB7920:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB7928;
L_08AB7928:;
    ST32(s0+12, v0);
    a0 = v0 + 0;
    goto L_08AB78EC;
L_08AB7934:;
    { u64 r_ = func_08AB76A8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB793C;
L_08AB793C:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08AB7908; }
    goto L_08AB7948;
L_08AB7948:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB7950;
L_08AB7950:;
    a1 = 1;
    goto L_08AB7908;
}

/* 08AB7958 */
void func_08AB7958(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB7958:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB79B8; }
    goto L_08AB797C;
L_08AB797C:;
    v0 = LD32(s0+12);
    goto L_08AB7980;
L_08AB7980:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB79A8; }
    goto L_08AB798C;
L_08AB798C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB7994;
L_08AB7994:;
    sp = sp + 16;
    return;
L_08AB79A8:;
    func_08AB7958(a0, a1, t1, t2, t3);
    goto L_08AB79B0;
L_08AB79B0:;
    goto L_08AB798C;
L_08AB79B8:;
    func_08AB7958(a0, a1, t1, t2, t3);
    goto L_08AB79C0;
L_08AB79C0:;
    v0 = LD32(s0+12);
    goto L_08AB7980;
}

/* 08AB79C8 */
void func_08AB79C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB79C8:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB7A3C; }
    goto L_08AB79F4;
L_08AB79F4:;
    v0 = LD32(s0+12);
    goto L_08AB79F8;
L_08AB79F8:;
    a0 = s1 + 0;
    a2 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB7A2C; }
    goto L_08AB7A08;
L_08AB7A08:;
    a0 = LD32(s0);
    goto L_08AB7A0C;
L_08AB7A0C:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB7A14;
L_08AB7A14:;
    sp = sp + 16;
    return;
L_08AB7A2C:;
    func_08AB79C8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB7A34;
L_08AB7A34:;
    a0 = LD32(s0);
    goto L_08AB7A0C;
L_08AB7A3C:;
    func_08AB79C8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB7A44;
L_08AB7A44:;
    v0 = LD32(s0+12);
    goto L_08AB79F8;
}

/* 08AB7A4C */
void func_08AB7A4C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB7A4C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+12);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AB7AC4; }
    goto L_08AB7A6C;
L_08AB7A6C:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08AB7AB0; }
    goto L_08AB7A78;
L_08AB7A78:;
    v0 = s1 << 2;
    goto L_08AB7A7C;
L_08AB7A7C:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s0 + 0;
    s1 = s1 + 1;
    { u64 r_ = func_08AB76A8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB7A90;
L_08AB7A90:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB7A98;
L_08AB7A98:;
    v0 = LD32(s0+16);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s0+12);
    if (cnd_) { goto L_08AB7AB0; }
    goto L_08AB7AA8;
L_08AB7AA8:;
    v0 = s1 << 2;
    goto L_08AB7A7C;
L_08AB7AB0:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AB7AD4; }
    goto L_08AB7AB8;
L_08AB7AB8:;
    ST32(s0+16, 0);
    goto L_08AB7ABC;
L_08AB7ABC:;
    ST32(s0+12, 0);
    goto L_08AB7AC4;
L_08AB7AC4:;
    sp = sp + 16;
    return;
L_08AB7AD4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB7ADC;
L_08AB7ADC:;
    ST32(s0+16, 0);
    goto L_08AB7ABC;
}

/* 08AB7AE4 */
rv_t func_08AB7AE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB7AE4:;
    v0 = D_08AF7D18 - (32024);
    v0 = v0 + 32024;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AB7AF4 */
rv_t func_08AB7AF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB7AF4:;
    v0 = D_08AF7D18 - (32024);
    v0 = v0 + 32024;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB7B10;
L_08AB7B10:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB7B1C */
rv_t func_08AB7B1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_08AB7B1C:;
    f1 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    f0 = f0 * f1;
    ST32(a1, FBITS(f0));
    f1 = BITSF(LD32(a0+12));
    f2 = f2 * f1;
    ST32(a1+4, FBITS(f2));
    return (rv_t){ v0, v1, f0 };
}

/* 08AB7B40 */
rv_t func_08AB7B40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB7B40:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB7B48 */
rv_t func_08AB7B48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB7B48:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB7B50 */
rv_t func_08AB7B50(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB7B50:;
    v0 = LD_U8(a0+12);
    return (rv_t){ v0, v1, f0 };
}

/* 08AB7B58 */
rv_t func_08AB7B58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB7B58:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB7B60 */
u64 func_08AB7B60(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08AB7B60:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB7B9C; }
    goto L_08AB7B6C;
L_08AB7B6C:;
    t0 = v0 + 0;
    a3 = a0 + 0;
    v0 = LD32(t0);
    goto L_08AB7B78;
L_08AB7B78:;
    a2 = t0 + 16;
    cnd_ = v0 == a1;
    v1 = a1 < v0;
    if (cnd_) { goto L_08AB7BA4; }
    goto L_08AB7B84;
L_08AB7B84:;
    a3 = t0 + 12;
    if (v1 == 0) a3 = a2;
    t0 = LD32(a3);
    cnd_ = t0 != 0;
    if (cnd_) { v0 = LD32(t0); goto L_08AB7B78; }
    goto L_08AB7B98;
L_08AB7B98:;
    v1 = 0 + 0;
    goto L_08AB7B9C;
L_08AB7B9C:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB7BA4:;
    cnd_ = t0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB7B9C; }
    goto L_08AB7BAC;
L_08AB7BAC:;
    v1 = LD32(t0+12);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(t0+16); goto L_08AB7C3C; }
    goto L_08AB7BB8;
L_08AB7BB8:;
    a1 = LD32(t0+16);
    cnd_ = a1 == 0;
    a2 = LD32(a0+4);
    if (cnd_) { goto L_08AB7C34; }
    goto L_08AB7BC4;
L_08AB7BC4:;
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, a1); goto L_08AB7C2C; }
    goto L_08AB7BD0;
L_08AB7BD0:;
    ST32(a3, v1);
    t1 = LD32(t0+16);
    goto L_08AB7BD8;
L_08AB7BD8:;
    v1 = LD32(a3);
    a1 = LD32(t1);
    goto L_08AB7BE0;
L_08AB7BE0:;
    v0 = LD32(v1);
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+12); goto L_08AB7C1C; }
    goto L_08AB7BF0;
L_08AB7BF0:;
    v0 = LD32(v1+16);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+16, t1); goto L_08AB7C04; }
    goto L_08AB7BFC;
L_08AB7BFC:;
    v1 = v0 + 0;
    goto L_08AB7BE0;
L_08AB7C04:;
    v0 = a2 - 1;
    ST32(a0+4, v0);
    v1 = t0 + 0;
    ST32(t0+12, 0);
    ST32(t0+16, 0);
    goto L_08AB7B9C;
L_08AB7C1C:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v0 + 0; goto L_08AB7BE0; }
    goto L_08AB7C24;
L_08AB7C24:;
    ST32(v1+12, t1);
    goto L_08AB7C04;
L_08AB7C2C:;
    t1 = LD32(t0+12);
    goto L_08AB7BD8;
L_08AB7C34:;
    ST32(a3, v1);
    goto L_08AB7C04;
L_08AB7C3C:;
    a2 = LD32(a0+4);
    ST32(a3, v0);
    goto L_08AB7C04;
}

/* 08AB7C48 */
u64 func_08AB7C48(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08AB7C48:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB7C84; }
    goto L_08AB7C54;
L_08AB7C54:;
    t0 = v0 + 0;
    a3 = a0 + 0;
    v0 = LD32(t0);
    goto L_08AB7C60;
L_08AB7C60:;
    a2 = t0 + 12;
    cnd_ = v0 == a1;
    v1 = a1 < v0;
    if (cnd_) { goto L_08AB7C8C; }
    goto L_08AB7C6C;
L_08AB7C6C:;
    a3 = t0 + 8;
    if (v1 == 0) a3 = a2;
    t0 = LD32(a3);
    cnd_ = t0 != 0;
    if (cnd_) { v0 = LD32(t0); goto L_08AB7C60; }
    goto L_08AB7C80;
L_08AB7C80:;
    v1 = 0 + 0;
    goto L_08AB7C84;
L_08AB7C84:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB7C8C:;
    cnd_ = t0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB7C84; }
    goto L_08AB7C94;
L_08AB7C94:;
    v1 = LD32(t0+8);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(t0+12); goto L_08AB7D24; }
    goto L_08AB7CA0;
L_08AB7CA0:;
    a1 = LD32(t0+12);
    cnd_ = a1 == 0;
    a2 = LD32(a0+4);
    if (cnd_) { goto L_08AB7D1C; }
    goto L_08AB7CAC;
L_08AB7CAC:;
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, a1); goto L_08AB7D14; }
    goto L_08AB7CB8;
L_08AB7CB8:;
    ST32(a3, v1);
    t1 = LD32(t0+12);
    goto L_08AB7CC0;
L_08AB7CC0:;
    v1 = LD32(a3);
    a1 = LD32(t1);
    goto L_08AB7CC8;
L_08AB7CC8:;
    v0 = LD32(v1);
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AB7D04; }
    goto L_08AB7CD8;
L_08AB7CD8:;
    v0 = LD32(v1+12);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+12, t1); goto L_08AB7CEC; }
    goto L_08AB7CE4;
L_08AB7CE4:;
    v1 = v0 + 0;
    goto L_08AB7CC8;
L_08AB7CEC:;
    v0 = a2 - 1;
    ST32(a0+4, v0);
    v1 = t0 + 0;
    ST32(t0+8, 0);
    ST32(t0+12, 0);
    goto L_08AB7C84;
L_08AB7D04:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v0 + 0; goto L_08AB7CC8; }
    goto L_08AB7D0C;
L_08AB7D0C:;
    ST32(v1+8, t1);
    goto L_08AB7CEC;
L_08AB7D14:;
    t1 = LD32(t0+8);
    goto L_08AB7CC0;
L_08AB7D1C:;
    ST32(a3, v1);
    goto L_08AB7CEC;
L_08AB7D24:;
    a2 = LD32(a0+4);
    ST32(a3, v0);
    goto L_08AB7CEC;
}

/* 08AB7D30 */
void func_08AB7D30(u32 a0)
{
    u32 v0 = 0;
L_08AB7D30:;
    v0 = a0 + 24;
    ST32(a0+4, 0);
    ST32(a0+16, 0);
    ST8(a0+8, 0);
    ST32(a0+12, 0);
    ST32(a0+24, 0);
    ST32(v0+20, 0);
    ST32(a0, 0);
    ST32(a0+20, 0);
    ST32(v0+4, 0);
    ST8(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v0+16, 0);
    return;
}

/* 08AB7D68 */
void func_08AB7D68(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB7D68:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+12);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB7DDC; }
    goto L_08AB7D94;
L_08AB7D94:;
    v0 = LD32(s0+16);
    goto L_08AB7D98;
L_08AB7D98:;
    a0 = s1 + 0;
    a2 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB7DCC; }
    goto L_08AB7DA8;
L_08AB7DA8:;
    a0 = LD32(s0);
    goto L_08AB7DAC;
L_08AB7DAC:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB7DB4;
L_08AB7DB4:;
    sp = sp + 16;
    return;
L_08AB7DCC:;
    func_08AB7D68(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB7DD4;
L_08AB7DD4:;
    a0 = LD32(s0);
    goto L_08AB7DAC;
L_08AB7DDC:;
    func_08AB7D68(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB7DE4;
L_08AB7DE4:;
    v0 = LD32(s0+16);
    goto L_08AB7D98;
}

/* 08AB7DEC */
void func_08AB7DEC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB7DEC:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+12);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AB7E64; }
    goto L_08AB7E0C;
L_08AB7E0C:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08AB7E50; }
    goto L_08AB7E18;
L_08AB7E18:;
    v0 = s1 << 2;
    goto L_08AB7E1C;
L_08AB7E1C:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s0 + 0;
    s1 = s1 + 1;
    { u64 r_ = func_08AB7B60(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB7E30;
L_08AB7E30:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB7E38;
L_08AB7E38:;
    v0 = LD32(s0+16);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s0+12);
    if (cnd_) { goto L_08AB7E50; }
    goto L_08AB7E48;
L_08AB7E48:;
    v0 = s1 << 2;
    goto L_08AB7E1C;
L_08AB7E50:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AB7E74; }
    goto L_08AB7E58;
L_08AB7E58:;
    ST32(s0+16, 0);
    goto L_08AB7E5C;
L_08AB7E5C:;
    ST32(s0+12, 0);
    goto L_08AB7E64;
L_08AB7E64:;
    sp = sp + 16;
    return;
L_08AB7E74:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB7E7C;
L_08AB7E7C:;
    ST32(s0+16, 0);
    goto L_08AB7E5C;
}

/* 08AB7E84 */
void func_08AB7E84(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB7E84:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+12);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB7EE4; }
    goto L_08AB7EA8;
L_08AB7EA8:;
    v0 = LD32(s0+16);
    goto L_08AB7EAC;
L_08AB7EAC:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB7ED4; }
    goto L_08AB7EB8;
L_08AB7EB8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB7EC0;
L_08AB7EC0:;
    sp = sp + 16;
    return;
L_08AB7ED4:;
    func_08AB7E84(a0, a1, t1, t2, t3);
    goto L_08AB7EDC;
L_08AB7EDC:;
    goto L_08AB7EB8;
L_08AB7EE4:;
    func_08AB7E84(a0, a1, t1, t2, t3);
    goto L_08AB7EEC;
L_08AB7EEC:;
    v0 = LD32(s0+16);
    goto L_08AB7EAC;
}

/* 08AB7EF4 */
void func_08AB7EF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB7EF4:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB7F68; }
    goto L_08AB7F20;
L_08AB7F20:;
    v0 = LD32(s0+12);
    goto L_08AB7F24;
L_08AB7F24:;
    a0 = s1 + 0;
    a2 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB7F58; }
    goto L_08AB7F34;
L_08AB7F34:;
    a0 = LD32(s0);
    goto L_08AB7F38;
L_08AB7F38:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB7F40;
L_08AB7F40:;
    sp = sp + 16;
    return;
L_08AB7F58:;
    func_08AB7EF4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB7F60;
L_08AB7F60:;
    a0 = LD32(s0);
    goto L_08AB7F38;
L_08AB7F68:;
    func_08AB7EF4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB7F70;
L_08AB7F70:;
    v0 = LD32(s0+12);
    goto L_08AB7F24;
}

/* 08AB7F78 */
void func_08AB7F78(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB7F78:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+12);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AB7FF0; }
    goto L_08AB7F98;
L_08AB7F98:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08AB7FDC; }
    goto L_08AB7FA4;
L_08AB7FA4:;
    v0 = s1 << 2;
    goto L_08AB7FA8;
L_08AB7FA8:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s0 + 0;
    s1 = s1 + 1;
    { u64 r_ = func_08AB7C48(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB7FBC;
L_08AB7FBC:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB7FC4;
L_08AB7FC4:;
    v0 = LD32(s0+16);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s0+12);
    if (cnd_) { goto L_08AB7FDC; }
    goto L_08AB7FD4;
L_08AB7FD4:;
    v0 = s1 << 2;
    goto L_08AB7FA8;
L_08AB7FDC:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AB8000; }
    goto L_08AB7FE4;
L_08AB7FE4:;
    ST32(s0+16, 0);
    goto L_08AB7FE8;
L_08AB7FE8:;
    ST32(s0+12, 0);
    goto L_08AB7FF0;
L_08AB7FF0:;
    sp = sp + 16;
    return;
L_08AB8000:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB8008;
L_08AB8008:;
    ST32(s0+16, 0);
    goto L_08AB7FE8;
}

/* 08AB8010 */
u64 func_08AB8010(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB8010:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB8070; }
    goto L_08AB8034;
L_08AB8034:;
    v0 = LD32(s0+12);
    goto L_08AB8038;
L_08AB8038:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB8060; }
    goto L_08AB8044;
L_08AB8044:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB804C;
L_08AB804C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB8060:;
    { u64 r_ = func_08AB8010(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB8068;
L_08AB8068:;
    goto L_08AB8044;
L_08AB8070:;
    { u64 r_ = func_08AB8010(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB8078;
L_08AB8078:;
    v0 = LD32(s0+12);
    goto L_08AB8038;
}

/* 08AB8080 */
u64 func_08AB8080(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB8080:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AB80C4; }
    goto L_08AB8098;
L_08AB8098:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AB80A0;
L_08AB80A0:;
    a0 = v0 + 16;
    a3 = v0 + 12;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AB80D8; }
    goto L_08AB80B8;
L_08AB80B8:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AB80A0; }
    goto L_08AB80C4;
L_08AB80C4:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AB80D8; }
    goto L_08AB80D0;
L_08AB80D0:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AB80E8; }
    goto L_08AB80D8;
L_08AB80D8:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB80E8:;
    a2 = 1;
    { u64 r_ = func_08AB8080(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB80F0;
L_08AB80F0:;
    t0 = v0 + 0;
    goto L_08AB80D8;
}

/* 08AB80F8 */
u32 func_08AB80F8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB80F8:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = a1 + 0;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08AB8188; }
    goto L_08AB8120;
L_08AB8120:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08AB8158; }
    goto L_08AB812C;
L_08AB812C:;
    v1 = v0 + 0;
    goto L_08AB8130;
L_08AB8130:;
    a0 = v1 + 16;
    s0 = v1 + 12;
    v1 = LD32(v1);
    a1 = 0 + 0;
    v0 = s1 < v1;
    cnd_ = v1 == s1;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_08AB8188; }
    goto L_08AB814C;
L_08AB814C:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08AB8130; }
    goto L_08AB8158;
L_08AB8158:;
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB8160;
L_08AB8160:;
    ST32(v0, s1);
    a0 = v0 + 4;
    a1 = a0 + 0;
    v1 = LD32(s2+4);
    ST32(v0+12, 0);
    v1 = v1 + 1;
    ST32(v0+16, 0);
    ST32(s2+4, v1);
    ST32(s0, v0);
    ST8(a0+4, 0);
    goto L_08AB8188;
L_08AB8188:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
}

/* 08AB81A4 */
u32 func_08AB81A4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB81A4:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AB81E8; }
    goto L_08AB81BC;
L_08AB81BC:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AB81C4;
L_08AB81C4:;
    a0 = v0 + 12;
    a3 = v0 + 8;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AB81FC; }
    goto L_08AB81DC;
L_08AB81DC:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AB81C4; }
    goto L_08AB81E8;
L_08AB81E8:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AB81FC; }
    goto L_08AB81F4;
L_08AB81F4:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AB820C; }
    goto L_08AB81FC;
L_08AB81FC:;
    v0 = t0 + 0;
    sp = sp + 16;
    return v0;
L_08AB820C:;
    a2 = 1;
    v0 = func_08AB81A4(a0, a1, a2);
    goto L_08AB8214;
L_08AB8214:;
    t0 = v0 + 0;
    goto L_08AB81FC;
}

/* 08AB821C */
u32 func_08AB821C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08AB821C:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB8258; }
    goto L_08AB8228;
L_08AB8228:;
    t0 = v0 + 0;
    a3 = a0 + 0;
    v0 = LD32(t0);
    goto L_08AB8234;
L_08AB8234:;
    a2 = t0 + 12;
    cnd_ = v0 == a1;
    v1 = a1 < v0;
    if (cnd_) { goto L_08AB8260; }
    goto L_08AB8240;
L_08AB8240:;
    a3 = t0 + 8;
    if (v1 == 0) a3 = a2;
    t0 = LD32(a3);
    cnd_ = t0 != 0;
    if (cnd_) { v0 = LD32(t0); goto L_08AB8234; }
    goto L_08AB8254;
L_08AB8254:;
    v1 = 0 + 0;
    goto L_08AB8258;
L_08AB8258:;
    v0 = v1 + 0;
    return v0;
L_08AB8260:;
    cnd_ = t0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB8258; }
    goto L_08AB8268;
L_08AB8268:;
    v1 = LD32(t0+8);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(t0+12); goto L_08AB82F8; }
    goto L_08AB8274;
L_08AB8274:;
    a1 = LD32(t0+12);
    cnd_ = a1 == 0;
    a2 = LD32(a0+4);
    if (cnd_) { goto L_08AB82F0; }
    goto L_08AB8280;
L_08AB8280:;
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, a1); goto L_08AB82E8; }
    goto L_08AB828C;
L_08AB828C:;
    ST32(a3, v1);
    t1 = LD32(t0+12);
    goto L_08AB8294;
L_08AB8294:;
    v1 = LD32(a3);
    a1 = LD32(t1);
    goto L_08AB829C;
L_08AB829C:;
    v0 = LD32(v1);
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AB82D8; }
    goto L_08AB82AC;
L_08AB82AC:;
    v0 = LD32(v1+12);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+12, t1); goto L_08AB82C0; }
    goto L_08AB82B8;
L_08AB82B8:;
    v1 = v0 + 0;
    goto L_08AB829C;
L_08AB82C0:;
    v0 = a2 - 1;
    ST32(a0+4, v0);
    v1 = t0 + 0;
    ST32(t0+8, 0);
    ST32(t0+12, 0);
    goto L_08AB8258;
L_08AB82D8:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v0 + 0; goto L_08AB829C; }
    goto L_08AB82E0;
L_08AB82E0:;
    ST32(v1+8, t1);
    goto L_08AB82C0;
L_08AB82E8:;
    t1 = LD32(t0+8);
    goto L_08AB8294;
L_08AB82F0:;
    ST32(a3, v1);
    goto L_08AB82C0;
L_08AB82F8:;
    a2 = LD32(a0+4);
    ST32(a3, v0);
    goto L_08AB82C0;
}

/* 08AB8304 */
u32 func_08AB8304(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08AB8304:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB8340; }
    goto L_08AB8310;
L_08AB8310:;
    t0 = v0 + 0;
    a3 = a0 + 0;
    v0 = LD32(t0);
    goto L_08AB831C;
L_08AB831C:;
    a2 = t0 + 12;
    cnd_ = v0 == a1;
    v1 = a1 < v0;
    if (cnd_) { goto L_08AB8348; }
    goto L_08AB8328;
L_08AB8328:;
    a3 = t0 + 8;
    if (v1 == 0) a3 = a2;
    t0 = LD32(a3);
    cnd_ = t0 != 0;
    if (cnd_) { v0 = LD32(t0); goto L_08AB831C; }
    goto L_08AB833C;
L_08AB833C:;
    v1 = 0 + 0;
    goto L_08AB8340;
L_08AB8340:;
    v0 = v1 + 0;
    return v0;
L_08AB8348:;
    cnd_ = t0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AB8340; }
    goto L_08AB8350;
L_08AB8350:;
    v1 = LD32(t0+8);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(t0+12); goto L_08AB83E0; }
    goto L_08AB835C;
L_08AB835C:;
    a1 = LD32(t0+12);
    cnd_ = a1 == 0;
    a2 = LD32(a0+4);
    if (cnd_) { goto L_08AB83D8; }
    goto L_08AB8368;
L_08AB8368:;
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, a1); goto L_08AB83D0; }
    goto L_08AB8374;
L_08AB8374:;
    ST32(a3, v1);
    t1 = LD32(t0+12);
    goto L_08AB837C;
L_08AB837C:;
    v1 = LD32(a3);
    a1 = LD32(t1);
    goto L_08AB8384;
L_08AB8384:;
    v0 = LD32(v1);
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AB83C0; }
    goto L_08AB8394;
L_08AB8394:;
    v0 = LD32(v1+12);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+12, t1); goto L_08AB83A8; }
    goto L_08AB83A0;
L_08AB83A0:;
    v1 = v0 + 0;
    goto L_08AB8384;
L_08AB83A8:;
    v0 = a2 - 1;
    ST32(a0+4, v0);
    v1 = t0 + 0;
    ST32(t0+8, 0);
    ST32(t0+12, 0);
    goto L_08AB8340;
L_08AB83C0:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v0 + 0; goto L_08AB8384; }
    goto L_08AB83C8;
L_08AB83C8:;
    ST32(v1+8, t1);
    goto L_08AB83A8;
L_08AB83D0:;
    t1 = LD32(t0+8);
    goto L_08AB837C;
L_08AB83D8:;
    ST32(a3, v1);
    goto L_08AB83A8;
L_08AB83E0:;
    a2 = LD32(a0+4);
    ST32(a3, v0);
    goto L_08AB83A8;
}

/* 08AB83EC */
void func_08AB83EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB83EC:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB8460; }
    goto L_08AB8418;
L_08AB8418:;
    v0 = LD32(s0+12);
    goto L_08AB841C;
L_08AB841C:;
    a0 = s1 + 0;
    a2 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB8450; }
    goto L_08AB842C;
L_08AB842C:;
    a0 = LD32(s0);
    goto L_08AB8430;
L_08AB8430:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB8438;
L_08AB8438:;
    sp = sp + 16;
    return;
L_08AB8450:;
    func_08AB83EC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB8458;
L_08AB8458:;
    a0 = LD32(s0);
    goto L_08AB8430;
L_08AB8460:;
    func_08AB83EC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB8468;
L_08AB8468:;
    v0 = LD32(s0+12);
    goto L_08AB841C;
}

/* 08AB8470 */
void func_08AB8470(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB8470:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB84D0; }
    goto L_08AB8494;
L_08AB8494:;
    v0 = LD32(s0+12);
    goto L_08AB8498;
L_08AB8498:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB84C0; }
    goto L_08AB84A4;
L_08AB84A4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB84AC;
L_08AB84AC:;
    sp = sp + 16;
    return;
L_08AB84C0:;
    func_08AB8470(a0, a1, t1, t2, t3);
    goto L_08AB84C8;
L_08AB84C8:;
    goto L_08AB84A4;
L_08AB84D0:;
    func_08AB8470(a0, a1, t1, t2, t3);
    goto L_08AB84D8;
L_08AB84D8:;
    v0 = LD32(s0+12);
    goto L_08AB8498;
}

/* 08AB84E0 */
void func_08AB84E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB84E0:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB8554; }
    goto L_08AB850C;
L_08AB850C:;
    v0 = LD32(s0+12);
    goto L_08AB8510;
L_08AB8510:;
    a0 = s1 + 0;
    a2 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB8544; }
    goto L_08AB8520;
L_08AB8520:;
    a0 = LD32(s0);
    goto L_08AB8524;
L_08AB8524:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB852C;
L_08AB852C:;
    sp = sp + 16;
    return;
L_08AB8544:;
    func_08AB84E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB854C;
L_08AB854C:;
    a0 = LD32(s0);
    goto L_08AB8524;
L_08AB8554:;
    func_08AB84E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB855C;
L_08AB855C:;
    v0 = LD32(s0+12);
    goto L_08AB8510;
}

/* 08AB8564 */
void func_08AB8564(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB8564:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB85C4; }
    goto L_08AB8588;
L_08AB8588:;
    v0 = LD32(s0+12);
    goto L_08AB858C;
L_08AB858C:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB85B4; }
    goto L_08AB8598;
L_08AB8598:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB85A0;
L_08AB85A0:;
    sp = sp + 16;
    return;
L_08AB85B4:;
    func_08AB8564(a0, a1, t1, t2, t3);
    goto L_08AB85BC;
L_08AB85BC:;
    goto L_08AB8598;
L_08AB85C4:;
    func_08AB8564(a0, a1, t1, t2, t3);
    goto L_08AB85CC;
L_08AB85CC:;
    v0 = LD32(s0+12);
    goto L_08AB858C;
}

/* 08AB85D4 */
u64 func_08AB85D4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB85D4:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AB8618; }
    goto L_08AB85EC;
L_08AB85EC:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AB85F4;
L_08AB85F4:;
    a0 = v0 + 12;
    a3 = v0 + 8;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AB862C; }
    goto L_08AB860C;
L_08AB860C:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AB85F4; }
    goto L_08AB8618;
L_08AB8618:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AB862C; }
    goto L_08AB8624;
L_08AB8624:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AB863C; }
    goto L_08AB862C;
L_08AB862C:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB863C:;
    a2 = 1;
    { u64 r_ = func_08AB85D4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB8644;
L_08AB8644:;
    t0 = v0 + 0;
    goto L_08AB862C;
}

/* 08AB864C */
u64 func_08AB864C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB864C:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AB8690; }
    goto L_08AB8664;
L_08AB8664:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AB866C;
L_08AB866C:;
    a0 = v0 + 12;
    a3 = v0 + 8;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AB86A4; }
    goto L_08AB8684;
L_08AB8684:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AB866C; }
    goto L_08AB8690;
L_08AB8690:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AB86A4; }
    goto L_08AB869C;
L_08AB869C:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AB86B4; }
    goto L_08AB86A4;
L_08AB86A4:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB86B4:;
    a2 = 1;
    { u64 r_ = func_08AB864C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB86BC;
L_08AB86BC:;
    t0 = v0 + 0;
    goto L_08AB86A4;
}

/* 08AB86C4 */
void func_08AB86C4(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB86C4:;
    sp = sp - 32;
    s3 = a2 + 0;
    s2 = a0 + 0;
    s1 = a1 + 0;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08AB875C; }
    goto L_08AB86F4;
L_08AB86F4:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08AB872C; }
    goto L_08AB8700;
L_08AB8700:;
    v1 = v0 + 0;
    goto L_08AB8704;
L_08AB8704:;
    a0 = v1 + 12;
    s0 = v1 + 8;
    v1 = LD32(v1);
    a1 = 0 + 0;
    v0 = s1 < v1;
    cnd_ = v1 == s1;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_08AB875C; }
    goto L_08AB8720;
L_08AB8720:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08AB8704; }
    goto L_08AB872C;
L_08AB872C:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB8734;
L_08AB8734:;
    ST32(v0, s1);
    a1 = v0 + 4;
    v1 = LD32(s2+4);
    a0 = LD32(s3);
    ST32(v0+8, 0);
    v1 = v1 + 1;
    ST32(v0+12, 0);
    ST32(s2+4, v1);
    ST32(v0+4, a0);
    ST32(s0, v0);
    goto L_08AB875C;
L_08AB875C:;
    v0 = a1 + 0;
    sp = sp + 32;
    return;
}

/* 08AB877C */
void func_08AB877C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB877C:;
    sp = sp - 16;
    s1 = a1 + 0;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08AB87F0; }
    goto L_08AB879C;
L_08AB879C:;
    a0 = LD32(a0+12);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_08AB87DC; }
    goto L_08AB87A8;
L_08AB87A8:;
    v1 = LD32(s0+16);
    a1 = 1;
    v0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0, s1);
    ST32(s0+16, v1);
    goto L_08AB87C4;
L_08AB87C4:;
    v0 = a1 + 0;
    sp = sp + 16;
    return;
L_08AB87DC:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB87E4;
L_08AB87E4:;
    ST32(s0+12, v0);
    a0 = v0 + 0;
    goto L_08AB87A8;
L_08AB87F0:;
    v0 = func_08AB821C(a0, a1);
    goto L_08AB87F8;
L_08AB87F8:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08AB87C4; }
    goto L_08AB8804;
L_08AB8804:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB880C;
L_08AB880C:;
    a1 = 1;
    goto L_08AB87C4;
}

/* 08AB8814 */
void func_08AB8814(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB8814:;
    sp = sp - 16;
    a1 = LD32(a0);
    cnd_ = a1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AB8884; }
    goto L_08AB8830;
L_08AB8830:;
    v0 = LD32(a1-4);
    v1 = 88;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = a1 + v0;
    goto L_08AB8844;
L_08AB8844:;
    cnd_ = a1 == s0;
    s0 = s0 - 88;
    if (cnd_) { goto L_08AB8878; }
    goto L_08AB884C;
L_08AB884C:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB8864; }
    goto L_08AB8858;
L_08AB8858:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_08AB8844;
L_08AB8864:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB886C;
L_08AB886C:;
    ST32(s0, 0);
    a1 = LD32(s1);
    goto L_08AB8858;
L_08AB8878:;
    a0 = a1 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB8880;
L_08AB8880:;
    ST32(s1, 0);
    goto L_08AB8884;
L_08AB8884:;
    v0 = 1;
    sp = sp + 16;
    return;
}

/* 08AB889C */
void func_08AB889C(u32 a0)
{
L_08AB889C:;
    ST32(a0+8, 0);
    ST32(a0, 0);
    ST32(a0+4, 0);
    return;
}

/* 08AB88AC */
rv_t func_08AB88AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB88AC:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB88B4 */
rv_t func_08AB88B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB88B4:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB88BC */
rv_t func_08AB88BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB88BC:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB88C4 */
rv_t func_08AB88C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB88C4:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB88CC */
rv_t func_08AB88CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB88CC:;
    a1 = a0 + 0;
    a0 = D_08B2C0FC - (-16132);
    sp = sp - 16;
    a0 = a0 - 16132;
    { u64 r_ = func_088CE69C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB88E4;
L_08AB88E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB88F0 */
rv_t func_08AB88F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_08AB88F0:;
    v0 = 0 < a1;
    v1 = 0 < a2;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AB894C; }
    goto L_08AB8904;
L_08AB8904:;
    v0 = LD32(a0+320);
    v1 = a0 + 188;
    a3 = a0 + 200;
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    t0 = 1;
    if (cnd_) { goto L_08AB8954; }
    goto L_08AB891C;
L_08AB891C:;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(a0+188));
    f2 = BITSF(LD32(v1+4));
    ST32(a1+8, FBITS(f0));
    ST32(a1, FBITS(f1));
    ST32(a1+4, FBITS(f2));
    f0 = BITSF(LD32(a0+200));
    f1 = BITSF(LD32(a3+8));
    f2 = BITSF(LD32(a3+4));
    ST32(a2, FBITS(f0));
    ST32(a2+8, FBITS(f1));
    ST32(a2+4, FBITS(f2));
    goto L_08AB894C;
L_08AB894C:;
    v0 = t0 + 0;
    return (rv_t){ v0, v1, f0 };
L_08AB8954:;
    t0 = 0 + 0;
    goto L_08AB894C;
}

/* 08AB895C */
rv_t func_08AB895C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_08AB895C:;
    v1 = a0 + 140;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08AB8984; }
    goto L_08AB8968;
L_08AB8968:;
    f0 = BITSF(LD32(a0+140));
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+4));
    ST32(a1, FBITS(f0));
    v0 = 1;
    ST32(a1+8, FBITS(f1));
    ST32(a1+4, FBITS(f2));
    goto L_08AB8984;
L_08AB8984:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB898C */
rv_t func_08AB898C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AB898C:;
    v0 = a0 + 152;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB8994 */
void func_08AB8994(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB8994:;
    f1 = BITSF(LD32(a1+12));
    f0 = BITSF(LD32(a1+16));
    v1 = LD32(a1+4);
    f12 = f12 - f1;
    f0 = f0 - f1;
    v1 = v1 - 1;
    f2 = BITSF(v1);
    v0 = D_08AECDA0 - (-12896);
    f12 = f12 / f0;
    f1 = BITSF(LD32(v0-12896));
    sp = sp - 32;
    f0 = (float)(s32)FBITS(f2);
    f8 = f12 * f0;
    f0 = BITSF(F2I(f8, 1));
    v0 = FBITS(f0);
    cnd_ = (s32)v0 < 0;
    a2 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_08AB8AB4; }
    goto L_08AB89D8;
L_08AB89D8:;
    f12 = (float)(s32)FBITS(f0);
    a3 = v0 << 4;
    cnd_ = a2 != 0;
    v1 = v1 << 4;
    if (cnd_) { goto L_08AB8A1C; }
    goto L_08AB89E8;
L_08AB89E8:;
    v0 = LD32(a1+8);
    v0 = v0 + v1;
    goto L_08AB89F0;
L_08AB89F0:;
    f3 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    ST32(a0, FBITS(f0));
    ST32(a0+4, FBITS(f1));
    ST32(a0+8, FBITS(f2));
    ST32(a0+12, FBITS(f3));
    goto L_08AB8A10;
L_08AB8A10:;
    v0 = a0 + 0;
    sp = sp + 32;
    return;
L_08AB8A1C:;
    f8 = f8 - f12;
    v0 = LD32(a1+8);
    f0 = f1 - f8;
    v0 = v0 + a3;
    f4 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+4));
    f6 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+12));
    f4 = f4 * f0;
    f5 = f5 * f0;
    f1 = f1 * f0;
    f6 = f6 * f0;
    ST32(sp, FBITS(f4));
    v1 = v0 + 16;
    ST32(sp+4, FBITS(f5));
    ST32(sp+8, FBITS(f6));
    ST32(sp+12, FBITS(f1));
    f3 = BITSF(LD32(v0+16));
    f7 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    f7 = f7 * f8;
    f3 = f3 * f8;
    f0 = f0 * f8;
    f2 = f2 * f8;
    f1 = f1 + f7;
    f4 = f4 + f3;
    f5 = f5 + f0;
    f6 = f6 + f2;
    ST32(a0+12, FBITS(f1));
    ST32(a0, FBITS(f4));
    ST32(a0+4, FBITS(f5));
    ST32(a0+8, FBITS(f6));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f2));
    ST32(sp+28, FBITS(f7));
    goto L_08AB8A10;
L_08AB8AB4:;
    v0 = LD32(a1+8);
    goto L_08AB89F0;
}

/* 08AB8ABC */
u64 func_08AB8ABC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB8ABC:;
    sp = sp - 32;
    t0 = 0 + 0;
    s2 = a0 + 0;
    s1 = a1 + 0;
    a1 = LD32(a1);
    cnd_ = a1 == 0;
    t2 = a1 + 0;
    if (cnd_) { goto L_08AB8B4C; }
    goto L_08AB8AF4;
L_08AB8AF4:;
    v0 = LD32(a1);
    cnd_ = v0 == a2;
    v0 = a2 < v0;
    if (cnd_) { goto L_08AB8BBC; }
    goto L_08AB8B00;
L_08AB8B00:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB8B74; }
    goto L_08AB8B08;
L_08AB8B08:;
    a1 = a1 + 8;
    { u64 r_ = func_08AB8ABC(a0, a1, a2, a3, t1, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB8B10;
L_08AB8B10:;
    cnd_ = v0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AB8B4C; }
    goto L_08AB8B18;
L_08AB8B18:;
    a1 = LD32(s1);
    v1 = LD32(a1+8);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08AB8B2C; }
    goto L_08AB8B28;
L_08AB8B28:;
    a0 = LD32(v1+16);
    goto L_08AB8B2C;
L_08AB8B2C:;
    v1 = LD32(a1+12);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08AB8B3C; }
    goto L_08AB8B38;
L_08AB8B38:;
    v0 = LD32(v1+16);
    goto L_08AB8B3C;
L_08AB8B3C:;
    v0 = a0 + v0;
    v0 = v0 + 1;
    t0 = 1;
    ST32(a1+16, v0);
    goto L_08AB8B4C;
L_08AB8B4C:;
    v0 = t0 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08AB8B74:;
    a1 = a1 + 12;
    { u64 r_ = func_08AB8ABC(a0, a1, a2, a3, t1, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB8B7C;
L_08AB8B7C:;
    cnd_ = v0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AB8B4C; }
    goto L_08AB8B84;
L_08AB8B84:;
    a1 = LD32(s1);
    v1 = LD32(a1+8);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08AB8B98; }
    goto L_08AB8B94;
L_08AB8B94:;
    a0 = LD32(v1+16);
    goto L_08AB8B98;
L_08AB8B98:;
    v1 = LD32(a1+12);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08AB8BA8; }
    goto L_08AB8BA4;
L_08AB8BA4:;
    v0 = LD32(v1+16);
    goto L_08AB8BA8;
L_08AB8BA8:;
    v0 = a0 + v0;
    v0 = v0 + 1;
    ST32(a1+16, v0);
    goto L_08AB8BB4;
L_08AB8BB4:;
    t0 = 1;
    goto L_08AB8B4C;
L_08AB8BBC:;
    v0 = LD32(a1+4);
    v1 = LD32(a1+8);
    s4 = a1 + 8;
    ST32(a3, v0);
    cnd_ = v1 != 0;
    s3 = a1 + 12;
    if (cnd_) { goto L_08AB8C34; }
    goto L_08AB8BD4;
L_08AB8BD4:;
    s0 = LD32(a1+12);
    goto L_08AB8BD8;
L_08AB8BD8:;
    cnd_ = t2 != 0;
    if (cnd_) { goto L_08AB8C24; }
    goto L_08AB8BE0;
L_08AB8BE0:;
    v0 = LD32(s2+8);
    goto L_08AB8BE4;
L_08AB8BE4:;
    ST32(s1, s0);
    v0 = v0 - 1;
    cnd_ = s0 == 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_08AB8BB4; }
    goto L_08AB8BF4;
L_08AB8BF4:;
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08AB8C04; }
    goto L_08AB8C00;
L_08AB8C00:;
    a0 = LD32(v1+16);
    goto L_08AB8C04;
L_08AB8C04:;
    v1 = LD32(s0+12);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08AB8C14; }
    goto L_08AB8C10;
L_08AB8C10:;
    v0 = LD32(v1+16);
    goto L_08AB8C14;
L_08AB8C14:;
    v0 = a0 + v0;
    v0 = v0 + 1;
    ST32(s0+16, v0);
    goto L_08AB8BB4;
L_08AB8C24:;
    a0 = t2 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB8C2C;
L_08AB8C2C:;
    v0 = LD32(s2+8);
    goto L_08AB8BE4;
L_08AB8C34:;
    v0 = LD32(a1+12);
    cnd_ = v0 == 0;
    s0 = v1 + 0;
    if (cnd_) { goto L_08AB8BD8; }
    goto L_08AB8C40;
L_08AB8C40:;
    v0 = LD32(v1+16);
    f1 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08AB8D80; }
    goto L_08AB8C50;
L_08AB8C50:;
    s5 = LD32(s4);
    s0 = LD32(s3);
    v1 = LD32(s5+16);
    v0 = LD32(s0+16);
    v0 = v1 + v0;
    f1 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f2 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08AB8D64; }
    goto L_08AB8C70;
L_08AB8C70:;
    f2 = f0 / f2;
    a1 = D_08B25AC0 - (23232);
    v0 = LD32(a1+23232);
    a2 = a1 + 23232;
    v1 = LD32(a2+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    a0 = v0 >> 1;
    f1 = BITSF(a0);
    v1 = v1 + v0;
    ST32(a1+23232, v0);
    v0 = D_08AECE00 - (-12800);
    f0 = (float)(s32)FBITS(f1);
    f1 = BITSF(LD32(v0-12800));
    f0 = f0 * f1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    ST32(a2+4, v1);
    if (cnd_) { goto L_08AB8D14; }
    goto L_08AB8CC4;
L_08AB8CC4:;
    a1 = s5 + 12;
    a0 = s2 + 0;
    a2 = s3 + 0;
    v0 = func_08AB9400(a0, a1, a2);
    goto L_08AB8CD4;
L_08AB8CD4:;
    ST32(s5+12, v0);
    a1 = LD32(s4);
    v1 = LD32(a1+8);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08AB8CEC; }
    goto L_08AB8CE8;
L_08AB8CE8:;
    a0 = LD32(v1+16);
    goto L_08AB8CEC;
L_08AB8CEC:;
    v1 = LD32(a1+12);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08AB8CFC; }
    goto L_08AB8CF8;
L_08AB8CF8:;
    v0 = LD32(v1+16);
    goto L_08AB8CFC;
L_08AB8CFC:;
    t2 = LD32(s1);
    v0 = a0 + v0;
    v0 = v0 + 1;
    s0 = a1 + 0;
    ST32(a1+16, v0);
    goto L_08AB8BD8;
L_08AB8D14:;
    a1 = s4 + 0;
    a0 = s2 + 0;
    a2 = s0 + 8;
    v0 = func_08AB9400(a0, a1, a2);
    goto L_08AB8D24;
L_08AB8D24:;
    ST32(s0+8, v0);
    a1 = LD32(s3);
    v1 = LD32(a1+8);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08AB8D3C; }
    goto L_08AB8D38;
L_08AB8D38:;
    a0 = LD32(v1+16);
    goto L_08AB8D3C;
L_08AB8D3C:;
    v1 = LD32(a1+12);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08AB8D4C; }
    goto L_08AB8D48;
L_08AB8D48:;
    v0 = LD32(v1+16);
    goto L_08AB8D4C;
L_08AB8D4C:;
    v0 = a0 + v0;
    v0 = v0 + 1;
    ST32(a1+16, v0);
    s0 = a1 + 0;
    t2 = LD32(s1);
    goto L_08AB8BD8;
L_08AB8D64:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f2 = (float)(s32)FBITS(f1);
    f2 = f2 + f2;
    goto L_08AB8C70;
L_08AB8D80:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08AB8C50;
}

/* 08AB8D9C */
rv_t func_08AB8D9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB8D9C:;
    sp = sp - 16;
    s0 = LD32(a0);
    cnd_ = s0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AB8DDC; }
    goto L_08AB8DB8;
L_08AB8DB8:;
    v0 = LD32(s0+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB8E24; }
    goto L_08AB8DC4;
L_08AB8DC4:;
    v0 = LD32(s0+12);
    goto L_08AB8DC8;
L_08AB8DC8:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB8E14; }
    goto L_08AB8DD4;
L_08AB8DD4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB8DDC;
L_08AB8DDC:;
    v0 = LD32(s1+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB8DFC; }
    goto L_08AB8DE8;
L_08AB8DE8:;
    goto L_08AB8DEC;
L_08AB8DEC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AB8DFC:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB8E0C;
L_08AB8E0C:;
    goto L_08AB8DEC;
L_08AB8E14:;
    func_08AB8EE0(a0, a1, t1, t2, t3);
    goto L_08AB8E1C;
L_08AB8E1C:;
    goto L_08AB8DD4;
L_08AB8E24:;
    func_08AB8EE0(a0, a1, t1, t2, t3);
    goto L_08AB8E2C;
L_08AB8E2C:;
    v0 = LD32(s0+12);
    goto L_08AB8DC8;
}

/* 08AB8E34 */
void func_08AB8E34(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB8E34:;
    sp = sp - 16;
    s1 = LD32(a0);
    cnd_ = s1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08AB8E70; }
    goto L_08AB8E50;
L_08AB8E50:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AB8ED0; }
    goto L_08AB8E5C;
L_08AB8E5C:;
    a1 = LD32(s1+12);
    goto L_08AB8E60;
L_08AB8E60:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AB8EC0; }
    goto L_08AB8E68;
L_08AB8E68:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB8E70;
L_08AB8E70:;
    a1 = LD32(s0+4);
    ST32(s0+8, 0);
    cnd_ = a1 == 0;
    ST32(s0, 0);
    if (cnd_) { goto L_08AB8EAC; }
    goto L_08AB8E80;
L_08AB8E80:;
    v0 = LD32(a1+8);
    ST32(a1+12, 0);
    cnd_ = (s32)v0 <= 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08AB8EAC; }
    goto L_08AB8E90;
L_08AB8E90:;
    v1 = LD32(a1+4);
    goto L_08AB8E94;
L_08AB8E94:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = LD32(a1+8);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08AB8E94; }
    goto L_08AB8EAC;
L_08AB8EAC:;
    sp = sp + 16;
    return;
L_08AB8EC0:;
    a0 = s0 + 0;
    func_08AB8EE0(a0, a1, t1, t2, t3);
    goto L_08AB8EC8;
L_08AB8EC8:;
    goto L_08AB8E68;
L_08AB8ED0:;
    func_08AB8EE0(a0, a1, t1, t2, t3);
    goto L_08AB8ED8;
L_08AB8ED8:;
    a1 = LD32(s1+12);
    goto L_08AB8E60;
}

/* 08AB8EE0 */
void func_08AB8EE0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB8EE0:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB8F48; }
    goto L_08AB8F04;
L_08AB8F04:;
    v0 = LD32(s0+12);
    goto L_08AB8F08;
L_08AB8F08:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB8F38; }
    goto L_08AB8F14;
L_08AB8F14:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08AB8F24; }
    goto L_08AB8F1C;
L_08AB8F1C:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB8F24;
L_08AB8F24:;
    sp = sp + 16;
    return;
L_08AB8F38:;
    func_08AB8EE0(a0, a1, t1, t2, t3);
    goto L_08AB8F40;
L_08AB8F40:;
    goto L_08AB8F14;
L_08AB8F48:;
    func_08AB8EE0(a0, a1, t1, t2, t3);
    goto L_08AB8F50;
L_08AB8F50:;
    v0 = LD32(s0+12);
    goto L_08AB8F08;
}

/* 08AB8F58 */
u32 func_08AB8F58(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB8F58:;
    sp = sp - 16;
    v1 = a1 + 0;
    s2 = a0 + 0;
    s1 = a2 + 0;
    v0 = LD32(a1+4);
    cnd_ = v0 == a2;
    s0 = a1 + 0;
    if (cnd_) { goto L_08AB8FA8; }
    goto L_08AB8F84;
L_08AB8F84:;
    v0 = LD32(a1+8);
    v1 = 0 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB8FD4; }
    goto L_08AB8F94;
L_08AB8F94:;
    v0 = LD32(s0+12);
    goto L_08AB8F98;
L_08AB8F98:;
    a0 = s2 + 0;
    a2 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AB8FC4; }
    goto L_08AB8FA8;
L_08AB8FA8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08AB8FC4:;
    v0 = func_08AB8F58(a0, a1, a2);
    goto L_08AB8FCC;
L_08AB8FCC:;
    v1 = v0 + 0;
    goto L_08AB8FA8;
L_08AB8FD4:;
    v0 = func_08AB8F58(a0, a1, a2);
    goto L_08AB8FDC;
L_08AB8FDC:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08AB8FA8; }
    goto L_08AB8FE4;
L_08AB8FE4:;
    v0 = LD32(s0+12);
    goto L_08AB8F98;
}

/* 08AB8FEC */
u64 func_08AB8FEC(u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08AB8FEC:;
    cnd_ = a1 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08AB9018; }
    goto L_08AB8FF4;
L_08AB8FF4:;
    v0 = LD32(a1);
    cnd_ = v0 == a2;
    v1 = a2 < v0;
    if (cnd_) { goto L_08AB9010; }
    goto L_08AB9000;
L_08AB9000:;
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD32(a1+12); goto L_08AB8FEC; }
    goto L_08AB9008;
L_08AB9008:;
    a1 = LD32(a1+8);
    goto L_08AB8FEC;
L_08AB9010:;
    v0 = LD32(a1+4);
    return (u64)v0 | ((u64)v1 << 32);
L_08AB9018:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08AB9020 */
u32 func_08AB9020(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB9020:;
    sp = sp - 32;
    s3 = a3 + 0;
    s2 = a1 + 0;
    s1 = a0 + 0;
    t0 = LD32(a1);
    cnd_ = t0 == 0;
    s0 = a2 + 0;
    if (cnd_) { goto L_08AB9170; }
    goto L_08AB9050;
L_08AB9050:;
    v0 = LD32(t0);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(t0+4); goto L_08AB9164; }
    goto L_08AB905C;
L_08AB905C:;
    v0 = LD32(t0+16);
    v0 = v0 + 1;
    f1 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08AB9148; }
    goto L_08AB9070;
L_08AB9070:;
    v1 = D_08AECE04 - (-12796);
    f2 = BITSF(LD32(v1-12796));
    a1 = D_08B25AC0 - (23232);
    v0 = LD32(a1+23232);
    f2 = f2 / f0;
    a2 = a1 + 23232;
    v1 = LD32(a2+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    a0 = v0 >> 1;
    f1 = BITSF(a0);
    v1 = v1 + v0;
    ST32(a1+23232, v0);
    v0 = D_08AECE08 - (-12792);
    f0 = (float)(s32)FBITS(f1);
    f1 = BITSF(LD32(v0-12792));
    f0 = f0 * f1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    ST32(a2+4, v1);
    if (cnd_) { goto L_08AB912C; }
    goto L_08AB90CC;
L_08AB90CC:;
    v0 = LD32(t0);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    a1 = t0 + 8;
    if (cnd_) { goto L_08AB90E0; }
    goto L_08AB90DC;
L_08AB90DC:;
    a1 = t0 + 12;
    goto L_08AB90E0;
L_08AB90E0:;
    a0 = s1 + 0;
    a2 = s0 + 0;
    a3 = s3 + 0;
    v0 = func_08AB9020(a0, a1, a2, a3, t1, t2, t3);
    goto L_08AB90F0;
L_08AB90F0:;
    cnd_ = v0 != 0;
    a0 = 1;
    if (cnd_) { goto L_08AB910C; }
    goto L_08AB90F8;
L_08AB90F8:;
    v1 = LD32(s2);
    a0 = 0 + 0;
    v0 = LD32(v1+16);
    v0 = v0 + 1;
    ST32(v1+16, v0);
    goto L_08AB910C;
L_08AB910C:;
    v0 = a0 + 0;
    sp = sp + 32;
    return v0;
L_08AB912C:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    a2 = s0 + 0;
    a3 = s3 + 0;
    v0 = func_08AB91F8(a0, a1, a2, a3, t1, t2, t3);
    goto L_08AB9140;
L_08AB9140:;
    a0 = v0 + 0;
    goto L_08AB910C;
L_08AB9148:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08AB9070;
L_08AB9164:;
    a0 = 1;
    goto L_08AB9168;
L_08AB9168:;
    ST32(s3, v0);
    goto L_08AB910C;
L_08AB9170:;
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB9178;
L_08AB9178:;
    a1 = v0 + 0;
    v0 = LD32(s1+8);
    a3 = LD32(s1+4);
    ST32(a1+8, 0);
    v1 = v0 + 0;
    v0 = v0 + 1;
    ST32(s1+8, v0);
    v0 = 1;
    ST32(a1+12, 0);
    ST32(a1, s0);
    ST32(a1+4, v1);
    ST32(a1+16, v0);
    cnd_ = a3 == 0;
    ST32(s2, a1);
    if (cnd_) { goto L_08AB91E0; }
    goto L_08AB91B0;
L_08AB91B0:;
    a2 = LD32(a3+12);
    v0 = LD32(a3+8);
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = (u32)-1; goto L_08AB91F0; }
    goto L_08AB91C4;
L_08AB91C4:;
    v1 = a2 + 1;
    a0 = LD32(a3+4);
    ST32(a3+12, v1);
    v0 = a2 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    ST32(a1+4, v1);
    goto L_08AB91E0;
L_08AB91E0:;
    v1 = LD32(s2);
    a0 = 0 + 0;
    v0 = LD32(v1+4);
    goto L_08AB9168;
L_08AB91F0:;
    ST32(a1+4, v0);
    goto L_08AB91E0;
}

/* 08AB91F8 */
u32 func_08AB91F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB91F8:;
    sp = sp - 32;
    s3 = a3 + 0;
    s2 = a1 + 0;
    s1 = a0 + 0;
    a1 = LD32(a1);
    cnd_ = a1 == 0;
    s0 = a2 + 0;
    if (cnd_) { goto L_08AB9378; }
    goto L_08AB9228;
L_08AB9228:;
    v0 = LD32(a1);
    cnd_ = a2 == v0;
    v0 = a2 < v0;
    if (cnd_) { goto L_08AB9368; }
    goto L_08AB9234;
L_08AB9234:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AB92E4; }
    goto L_08AB923C;
L_08AB923C:;
    a1 = a1 + 8;
    v0 = func_08AB91F8(a0, a1, a2, a3, t1, t2, t3);
    goto L_08AB9244;
L_08AB9244:;
    cnd_ = v0 != 0;
    a0 = 1;
    if (cnd_) { goto L_08AB92C4; }
    goto L_08AB924C;
L_08AB924C:;
    a0 = LD32(s2);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = 0 + 0; goto L_08AB92C4; }
    goto L_08AB9258;
L_08AB9258:;
    a1 = LD32(a0+8);
    a2 = 0 + 0;
    v1 = LD32(a1+12);
    ST32(s2, a1);
    ST32(a1+12, a0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08AB9278; }
    goto L_08AB9274;
L_08AB9274:;
    a2 = LD32(v1+16);
    goto L_08AB9278;
L_08AB9278:;
    v1 = LD32(a0+12);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08AB9288; }
    goto L_08AB9284;
L_08AB9284:;
    v0 = LD32(v1+16);
    goto L_08AB9288;
L_08AB9288:;
    v1 = LD32(a1+8);
    v0 = a2 + v0;
    v0 = v0 + 1;
    ST32(a0+16, v0);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08AB92A4; }
    goto L_08AB92A0;
L_08AB92A0:;
    a0 = LD32(v1+16);
    goto L_08AB92A4;
L_08AB92A4:;
    v1 = LD32(a1+12);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08AB92B4; }
    goto L_08AB92B0;
L_08AB92B0:;
    v0 = LD32(v1+16);
    goto L_08AB92B4;
L_08AB92B4:;
    v0 = a0 + v0;
    goto L_08AB92B8;
L_08AB92B8:;
    v0 = v0 + 1;
    ST32(a1+16, v0);
    a0 = 0 + 0;
    goto L_08AB92C4;
L_08AB92C4:;
    v0 = a0 + 0;
    sp = sp + 32;
    return v0;
L_08AB92E4:;
    a1 = a1 + 12;
    v0 = func_08AB91F8(a0, a1, a2, a3, t1, t2, t3);
    goto L_08AB92EC;
L_08AB92EC:;
    cnd_ = v0 != 0;
    a0 = 1;
    if (cnd_) { goto L_08AB92C4; }
    goto L_08AB92F4;
L_08AB92F4:;
    v1 = LD32(s2);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08AB92C4; }
    goto L_08AB9300;
L_08AB9300:;
    a1 = LD32(v1+12);
    a2 = 0 + 0;
    v0 = LD32(a1+8);
    ST32(s2, a1);
    ST32(a1+8, v1);
    a0 = LD32(v1+8);
    cnd_ = a0 == 0;
    ST32(v1+12, v0);
    if (cnd_) { goto L_08AB9324; }
    goto L_08AB9320;
L_08AB9320:;
    a2 = LD32(a0+16);
    goto L_08AB9324;
L_08AB9324:;
    a0 = LD32(v1+12);
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08AB9334; }
    goto L_08AB9330;
L_08AB9330:;
    v0 = LD32(a0+16);
    goto L_08AB9334;
L_08AB9334:;
    a0 = LD32(a1+8);
    v0 = a2 + v0;
    v0 = v0 + 1;
    ST32(v1+16, v0);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AB9350; }
    goto L_08AB934C;
L_08AB934C:;
    a2 = LD32(a0+16);
    goto L_08AB9350;
L_08AB9350:;
    v1 = LD32(a1+12);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08AB9360; }
    goto L_08AB935C;
L_08AB935C:;
    v0 = LD32(v1+16);
    goto L_08AB9360;
L_08AB9360:;
    v0 = a2 + v0;
    goto L_08AB92B8;
L_08AB9368:;
    v0 = LD32(a1+4);
    a0 = 1;
    goto L_08AB9370;
L_08AB9370:;
    ST32(s3, v0);
    goto L_08AB92C4;
L_08AB9378:;
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB9380;
L_08AB9380:;
    a1 = v0 + 0;
    v0 = LD32(s1+8);
    a3 = LD32(s1+4);
    ST32(a1+8, 0);
    v1 = v0 + 0;
    v0 = v0 + 1;
    ST32(s1+8, v0);
    v0 = 1;
    ST32(a1+12, 0);
    ST32(a1, s0);
    ST32(a1+4, v1);
    ST32(a1+16, v0);
    cnd_ = a3 == 0;
    ST32(s2, a1);
    if (cnd_) { goto L_08AB93E8; }
    goto L_08AB93B8;
L_08AB93B8:;
    a2 = LD32(a3+12);
    v0 = LD32(a3+8);
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = (u32)-1; goto L_08AB93F8; }
    goto L_08AB93CC;
L_08AB93CC:;
    v1 = a2 + 1;
    a0 = LD32(a3+4);
    ST32(a3+12, v1);
    v0 = a2 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    ST32(a1+4, v1);
    goto L_08AB93E8;
L_08AB93E8:;
    v1 = LD32(s2);
    a0 = 0 + 0;
    v0 = LD32(v1+4);
    goto L_08AB9370;
L_08AB93F8:;
    ST32(a1+4, v0);
    goto L_08AB93E8;
}

/* 08AB9400 */
u32 func_08AB9400(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB9400:;
    sp = sp - 32;
    a3 = a0 + 0;
    s2 = a1 + 0;
    s0 = LD32(a1);
    cnd_ = s0 != 0;
    s1 = a2 + 0;
    if (cnd_) { goto L_08AB9450; }
    goto L_08AB942C;
L_08AB942C:;
    a2 = LD32(a2);
    goto L_08AB9430;
L_08AB9430:;
    v0 = a2 + 0;
    sp = sp + 32;
    return v0;
L_08AB9450:;
    s3 = LD32(a2);
    cnd_ = s3 == 0;
    a2 = s0 + 0;
    if (cnd_) { goto L_08AB9430; }
    goto L_08AB945C;
L_08AB945C:;
    v0 = LD32(s0+16);
    f1 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08AB9588; }
    goto L_08AB946C;
L_08AB946C:;
    v1 = LD32(s0+16);
    v0 = LD32(s3+16);
    v0 = v1 + v0;
    f1 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f2 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08AB956C; }
    goto L_08AB9484;
L_08AB9484:;
    f2 = f0 / f2;
    a1 = D_08B25AC0 - (23232);
    v0 = LD32(a1+23232);
    a2 = a1 + 23232;
    v1 = LD32(a2+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    a0 = v0 >> 1;
    f1 = BITSF(a0);
    v1 = v1 + v0;
    ST32(a1+23232, v0);
    v0 = D_08AECE0C - (-12788);
    f0 = (float)(s32)FBITS(f1);
    f1 = BITSF(LD32(v0-12788));
    f0 = f0 * f1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    ST32(a2+4, v1);
    if (cnd_) { goto L_08AB9524; }
    goto L_08AB94D8;
L_08AB94D8:;
    a1 = s0 + 12;
    a0 = a3 + 0;
    a2 = s1 + 0;
    v0 = func_08AB9400(a0, a1, a2);
    goto L_08AB94E8;
L_08AB94E8:;
    ST32(s0+12, v0);
    a1 = LD32(s2);
    v1 = LD32(a1+8);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08AB9500; }
    goto L_08AB94FC;
L_08AB94FC:;
    a0 = LD32(v1+16);
    goto L_08AB9500;
L_08AB9500:;
    v1 = LD32(a1+12);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08AB9510; }
    goto L_08AB950C;
L_08AB950C:;
    v0 = LD32(v1+16);
    goto L_08AB9510;
L_08AB9510:;
    v0 = a0 + v0;
    v0 = v0 + 1;
    a2 = a1 + 0;
    ST32(a1+16, v0);
    goto L_08AB9430;
L_08AB9524:;
    a2 = s3 + 8;
    a0 = a3 + 0;
    a1 = s2 + 0;
    v0 = func_08AB9400(a0, a1, a2);
    goto L_08AB9534;
L_08AB9534:;
    ST32(s3+8, v0);
    a2 = LD32(s1);
    v1 = LD32(a2+8);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08AB954C; }
    goto L_08AB9548;
L_08AB9548:;
    a0 = LD32(v1+16);
    goto L_08AB954C;
L_08AB954C:;
    v1 = LD32(a2+12);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08AB955C; }
    goto L_08AB9558;
L_08AB9558:;
    v0 = LD32(v1+16);
    goto L_08AB955C;
L_08AB955C:;
    v0 = a0 + v0;
    v0 = v0 + 1;
    ST32(a2+16, v0);
    goto L_08AB9430;
L_08AB956C:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f2 = (float)(s32)FBITS(f1);
    f2 = f2 + f2;
    goto L_08AB9484;
L_08AB9588:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08AB946C;
}

/* 08AB95A4 */
void func_08AB95A4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB95A4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB95D4; }
    goto L_08AB95C0;
L_08AB95C0:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB95D4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB95DC;
L_08AB95DC:;
    ST32(s0, 0);
    goto L_08AB95C0;
}

/* 08AB95E4 */
void func_08AB95E4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB95E4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB9614; }
    goto L_08AB9600;
L_08AB9600:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB9614:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB961C;
L_08AB961C:;
    ST32(s0, 0);
    goto L_08AB9600;
}

/* 08AB9624 */
void func_08AB9624(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB9624:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AB96C8; }
    goto L_08AB9644;
L_08AB9644:;
    s1 = LD32(s0);
    goto L_08AB9648;
L_08AB9648:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08AB967C; }
    goto L_08AB9650;
L_08AB9650:;
    s0 = LD32(s1);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08AB9670; }
    goto L_08AB965C;
L_08AB965C:;
    a0 = LD32(s0+20);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AB969C; }
    goto L_08AB9668;
L_08AB9668:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08AB968C; }
    goto L_08AB9670;
L_08AB9670:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB9678;
L_08AB9678:;
    goto L_08AB967C;
L_08AB967C:;
    sp = sp + 16;
    return;
L_08AB968C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB9694;
L_08AB9694:;
    goto L_08AB9670;
L_08AB969C:;
    func_08AA5F78(a0);
    goto L_08AB96A4;
L_08AB96A4:;
    a0 = LD32(s0+20);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AB96B8; }
    goto L_08AB96B0;
L_08AB96B0:;
    s0 = LD32(s1);
    goto L_08AB9668;
L_08AB96B8:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB96C0;
L_08AB96C0:;
    s0 = LD32(s1);
    goto L_08AB9668;
L_08AB96C8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB96D0;
L_08AB96D0:;
    s1 = LD32(s0);
    goto L_08AB9648;
}

/* 08AB96D8 */
void func_08AB96D8(void)
{
L_08AB96D8:;
    return;
}

/* 08AB96E0 */
void func_08AB96E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB96E0:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB9754; }
    goto L_08AB96FC;
L_08AB96FC:;
    v0 = LD32(s0+4);
    goto L_08AB9700;
L_08AB9700:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB973C; }
    goto L_08AB9708;
L_08AB9708:;
    s0 = LD32(s0+12);
    goto L_08AB970C;
L_08AB970C:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08AB9724; }
    goto L_08AB9714;
L_08AB9714:;
    goto L_08AB9718;
L_08AB9718:;
    sp = sp + 16;
    return;
L_08AB9724:;
    func_08AB96E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AB972C;
L_08AB972C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB9734;
L_08AB9734:;
    goto L_08AB9718;
L_08AB973C:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB974C;
L_08AB974C:;
    s0 = LD32(s0+12);
    goto L_08AB970C;
L_08AB9754:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB975C;
L_08AB975C:;
    v0 = LD32(s0+4);
    goto L_08AB9700;
}

/* 08AB9764 */
rv_t func_08AB9764(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB9764:;
    sp = sp - 16;
    a1 = LD32(a0);
    cnd_ = a1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08AB97CC; }
    goto L_08AB977C;
L_08AB977C:;
    t1 = (u32)-1;
    a0 = LD32(a1+4);
    goto L_08AB9784;
L_08AB9784:;
    v0 = LD32(a0+12);
    v1 = LD32(a0+8);
    a3 = v0 + 1;
    t0 = v0 << 2;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    a2 = (u32)-1;
    if (cnd_) { goto L_08AB97B8; }
    goto L_08AB97A0;
L_08AB97A0:;
    v0 = LD32(a0+4);
    ST32(a0+12, a3);
    v0 = t0 + v0;
    a2 = LD32(v0);
    v1 = LD32(a1+8);
    a2 = a2 + v1;
    goto L_08AB97B8;
L_08AB97B8:;
    cnd_ = a2 != t1;
    v1 = a2 + 0;
    if (cnd_) { goto L_08AB981C; }
    goto L_08AB97C0;
L_08AB97C0:;
    a1 = LD32(a1+12);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1+4); goto L_08AB9784; }
    goto L_08AB97CC;
L_08AB97CC:;
    a0 = s0 + 0;
    { rv_t r_ = func_08AB9830(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB97D4;
L_08AB97D4:;
    cnd_ = v0 == 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08AB981C; }
    goto L_08AB97DC;
L_08AB97DC:;
    a3 = LD32(s0);
    a1 = LD32(a3+4);
    a2 = LD32(a1+12);
    v0 = LD32(a1+8);
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 == 0;
    a0 = (u32)-1;
    if (cnd_) { goto L_08AB9818; }
    goto L_08AB97F8;
L_08AB97F8:;
    v1 = a2 + 1;
    a0 = LD32(a1+4);
    ST32(a1+12, v1);
    v0 = a2 << 2;
    v0 = v0 + a0;
    a0 = LD32(v0);
    v1 = LD32(a3+8);
    a0 = a0 + v1;
    goto L_08AB9818;
L_08AB9818:;
    v1 = a0 + 0;
    goto L_08AB981C;
L_08AB981C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB9830 */
rv_t func_08AB9830(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB9830:;
    sp = sp - 16;
    s0 = a0 + 0;
    v1 = LD32(a0);
    a1 = LD32(a0+16);
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AB9868; }
    goto L_08AB9850;
L_08AB9850:;
    v0 = LD32(v1+8);
    goto L_08AB9854;
L_08AB9854:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+4); goto L_08AB98A0; }
    goto L_08AB985C;
L_08AB985C:;
    v1 = LD32(v1+12);
    goto L_08AB9860;
L_08AB9860:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AB9854; }
    goto L_08AB9868;
L_08AB9868:;
    a0 = LD32(s0+4);
    { rv_t r_ = func_08AB98AC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB9870;
L_08AB9870:;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08AB988C; }
    goto L_08AB987C;
L_08AB987C:;
    v0 = LD32(s0);
    a0 = 1;
    ST32(v1+12, v0);
    ST32(s0, v1);
    goto L_08AB988C;
L_08AB988C:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AB98A0:;
    v1 = a0 + 0;
    a1 = a1 + v0;
    goto L_08AB9860;
}

/* 08AB98AC */
rv_t func_08AB98AC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AB98AC:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = 16;
    s3 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB98D4;
L_08AB98D4:;
    s2 = v0 + 0;
    ST32(v0, 0);
    v0 = 0 + 0;
    ST32(s2+4, 0);
    cnd_ = s2 == 0;
    ST32(s2+12, 0);
    if (cnd_) { goto L_08AB9984; }
    goto L_08AB98EC;
L_08AB98EC:;
    a0 = s0 << 4;
    a0 = a0 - s0;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB98FC;
L_08AB98FC:;
    cnd_ = s0 == 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_08AB9914; }
    goto L_08AB9904;
L_08AB9904:;
    a0 = (u32)-1;
    v1 = v1 - 1;
    goto L_08AB990C;
L_08AB990C:;
    cnd_ = v1 != a0;
    v1 = v1 - 1;
    if (cnd_) { goto L_08AB990C; }
    goto L_08AB9914;
L_08AB9914:;
    ST32(s2, v0);
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB9920;
L_08AB9920:;
    s1 = v0 + 0;
    v0 = D_08AF0F80 - (3968);
    v0 = v0 + 3968;
    ST32(s1, v0);
    a0 = s0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB9938;
L_08AB9938:;
    ST32(s1+4, v0);
    a0 = 0 + 0;
    ST32(s1+12, 0);
    cnd_ = (s32)s0 <= 0;
    ST32(s1+8, s0);
    if (cnd_) { goto L_08AB9964; }
    goto L_08AB994C;
L_08AB994C:;
    v1 = v0 + 0;
    goto L_08AB9950;
L_08AB9950:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < (s32)s0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08AB9950; }
    goto L_08AB9964;
L_08AB9964:;
    v1 = LD32(s2);
    v0 = D_08AF1BD0 - (7120);
    v0 = v0 + 7120;
    ST32(s1, v0);
    cnd_ = v1 == 0;
    ST32(s2+4, s1);
    if (cnd_) { goto L_08AB99A0; }
    goto L_08AB997C;
L_08AB997C:;
    ST32(s2+8, s3);
    v0 = s2 + 0;
    goto L_08AB9984;
L_08AB9984:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08AB99A0:;
    cnd_ = s1 != 0;
    if (cnd_) { v0 = LD32(v0+4); goto L_08AB99DC; }
    goto L_08AB99A8;
L_08AB99A8:;
    s0 = LD32(s2+12);
    goto L_08AB99AC;
L_08AB99AC:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08AB99C4; }
    goto L_08AB99B4;
L_08AB99B4:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB99BC;
L_08AB99BC:;
    v0 = 0 + 0;
    goto L_08AB9984;
L_08AB99C4:;
    a0 = s0 + 0;
    func_08AB96E0(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08AB99CC;
L_08AB99CC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB99D4;
L_08AB99D4:;
    goto L_08AB99B4;
L_08AB99DC:;
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB99E4;
L_08AB99E4:;
    s0 = LD32(s2+12);
    goto L_08AB99AC;
}

/* 08AB99EC */
u32 func_08AB99EC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08AB99EC:;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AB9A2C; }
    goto L_08AB99F8;
L_08AB99F8:;
    a2 = LD32(v1+8);
    goto L_08AB99FC;
L_08AB99FC:;
    v0 = (s32)a1 < (s32)a2;
    cnd_ = v0 != 0;
    a3 = v1 + 0;
    if (cnd_) { goto L_08AB9A1C; }
    goto L_08AB9A08;
L_08AB9A08:;
    v0 = LD32(a0+4);
    v0 = a2 + v0;
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AB9A2C; }
    goto L_08AB9A1C;
L_08AB9A1C:;
    v1 = LD32(v1+12);
    cnd_ = v1 != 0;
    if (cnd_) { a2 = LD32(v1+8); goto L_08AB99FC; }
    goto L_08AB9A28;
L_08AB9A28:;
    a3 = 0 + 0;
    goto L_08AB9A2C;
L_08AB9A2C:;
    v0 = a3 + 0;
    return v0;
}

/* 08AB9A34 */
void func_08AB9A34(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB9A34:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB9A64; }
    goto L_08AB9A50;
L_08AB9A50:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB9A64:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB9A6C;
L_08AB9A6C:;
    ST32(s0, 0);
    goto L_08AB9A50;
}

/* 08AB9A74 */
u64 func_08AB9A74(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08AB9A74:;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v0+8); goto L_08AB9A90; }
    goto L_08AB9A80;
L_08AB9A80:;
    v0 = LD32(a0);
    v1 = LD32(v0);
    ST32(a0+4, v1);
    return (u64)v0 | ((u64)v1 << 32);
L_08AB9A90:;
    ST32(a0+4, v0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08AB9A98 */
void func_08AB9A98(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB9A98:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB9AC8; }
    goto L_08AB9AB4;
L_08AB9AB4:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB9AC8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB9AD0;
L_08AB9AD0:;
    ST32(s0, 0);
    goto L_08AB9AB4;
}

/* 08AB9AD8 */
void func_08AB9AD8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB9AD8:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AB9B10; }
    goto L_08AB9AF4;
L_08AB9AF4:;
    ST32(a0, 0);
    goto L_08AB9AF8;
L_08AB9AF8:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB9B10:;
    a0 = 52;
    { s64 p_ = (s64)(s32)a1 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = lo;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB9B20;
L_08AB9B20:;
    cnd_ = s0 == 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_08AB9B38; }
    goto L_08AB9B28;
L_08AB9B28:;
    a0 = (u32)-1;
    v1 = v1 - 1;
    goto L_08AB9B30;
L_08AB9B30:;
    cnd_ = v1 != a0;
    if (cnd_) { v1 = v1 - 1; goto L_08AB9B30; }
    goto L_08AB9B38;
L_08AB9B38:;
    ST32(s1, v0);
    goto L_08AB9AF8;
}

/* 08AB9B40 */
void func_08AB9B40(void)
{
L_08AB9B40:;
    return;
}

/* 08AB9B48 */
void func_08AB9B48(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB9B48:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB9B78; }
    goto L_08AB9B64;
L_08AB9B64:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB9B78:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB9B80;
L_08AB9B80:;
    ST32(s0, 0);
    goto L_08AB9B64;
}

/* 08AB9B88 */
void func_08AB9B88(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB9B88:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB9BB8; }
    goto L_08AB9BA4;
L_08AB9BA4:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB9BB8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB9BC0;
L_08AB9BC0:;
    ST32(s0, 0);
    goto L_08AB9BA4;
}

/* 08AB9BC8 */
void func_08AB9BC8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB9BC8:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AB9C00; }
    goto L_08AB9BE4;
L_08AB9BE4:;
    ST32(a0, 0);
    goto L_08AB9BE8;
L_08AB9BE8:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB9C00:;
    a0 = a1 << 5;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB9C08;
L_08AB9C08:;
    cnd_ = s0 == 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_08AB9C20; }
    goto L_08AB9C10;
L_08AB9C10:;
    a0 = (u32)-1;
    v1 = v1 - 1;
    goto L_08AB9C18;
L_08AB9C18:;
    cnd_ = v1 != a0;
    if (cnd_) { v1 = v1 - 1; goto L_08AB9C18; }
    goto L_08AB9C20;
L_08AB9C20:;
    ST32(s1, v0);
    goto L_08AB9BE8;
}

/* 08AB9C28 */
void func_08AB9C28(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB9C28:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB9C58; }
    goto L_08AB9C44;
L_08AB9C44:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB9C58:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB9C60;
L_08AB9C60:;
    ST32(s0, 0);
    goto L_08AB9C44;
}

/* 08AB9C68 */
u32 func_08AB9C68(u32 a0)
{
    u32 v0 = 0;
L_08AB9C68:;
    v0 = D_08AF7DA8 - (32168);
    v0 = v0 + 32168;
    ST32(a0, v0);
    return v0;
}

/* 08AB9C78 */
void func_08AB9C78(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB9C78:;
    sp = sp - 16;
    v0 = a1 << 5;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AB9CAC; }
    goto L_08AB9C94;
L_08AB9C94:;
    ST32(s0, 0);
    goto L_08AB9C98;
L_08AB9C98:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB9CAC:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB9CB4;
L_08AB9CB4:;
    ST32(s0, v0);
    goto L_08AB9C98;
}

/* 08AB9CBC */
void func_08AB9CBC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB9CBC:;
    sp = sp - 16;
    v0 = a1 << 4;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AB9CF0; }
    goto L_08AB9CD8;
L_08AB9CD8:;
    ST32(s0, 0);
    goto L_08AB9CDC;
L_08AB9CDC:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB9CF0:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB9CF8;
L_08AB9CF8:;
    ST32(s0, v0);
    goto L_08AB9CDC;
}

/* 08AB9D00 */
void func_08AB9D00(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB9D00:;
    sp = sp - 16;
    v0 = a1 << 4;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AB9D34; }
    goto L_08AB9D1C;
L_08AB9D1C:;
    ST32(s0, 0);
    goto L_08AB9D20;
L_08AB9D20:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB9D34:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB9D3C;
L_08AB9D3C:;
    ST32(s0, v0);
    goto L_08AB9D20;
}

/* 08AB9D44 */
void func_08AB9D44(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB9D44:;
    v0 = a1 << 2;
    v0 = v0 + a1;
    sp = sp - 16;
    v0 = v0 << 4;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AB9D80; }
    goto L_08AB9D68;
L_08AB9D68:;
    ST32(s0, 0);
    goto L_08AB9D6C;
L_08AB9D6C:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB9D80:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB9D88;
L_08AB9D88:;
    ST32(s0, v0);
    goto L_08AB9D6C;
}

/* 08AB9D90 */
void func_08AB9D90(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB9D90:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AB9DC8; }
    goto L_08AB9DAC;
L_08AB9DAC:;
    ST32(a0, 0);
    goto L_08AB9DB0;
L_08AB9DB0:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB9DC8:;
    a0 = a1 << 3;
    a0 = a0 - a1;
    a0 = a0 << 3;
    a0 = a0 + 4;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB9DDC;
L_08AB9DDC:;
    v0 = v0 + 4;
    ST32(v0-4, s0);
    v1 = v0 + 0;
    cnd_ = s0 == 0;
    a0 = s0 - 1;
    if (cnd_) { goto L_08AB9E08; }
    goto L_08AB9DF0;
L_08AB9DF0:;
    a1 = (u32)-1;
    goto L_08AB9DF4;
L_08AB9DF4:;
    a0 = a0 - 1;
    ST32(v1+48, 0);
    ST32(v1+52, 0);
    cnd_ = a0 != a1;
    v1 = v1 + 56;
    if (cnd_) { goto L_08AB9DF4; }
    goto L_08AB9E08;
L_08AB9E08:;
    ST32(s1, v0);
    goto L_08AB9DB0;
}

/* 08AB9E10 */
void func_08AB9E10(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB9E10:;
    sp = sp - 16;
    v0 = a1 << 5;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AB9E44; }
    goto L_08AB9E2C;
L_08AB9E2C:;
    ST32(s0, 0);
    goto L_08AB9E30;
L_08AB9E30:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB9E44:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB9E4C;
L_08AB9E4C:;
    ST32(s0, v0);
    goto L_08AB9E30;
}

/* 08AB9E54 */
void func_08AB9E54(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB9E54:;
    sp = sp - 16;
    v0 = a1 << 4;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AB9E88; }
    goto L_08AB9E70;
L_08AB9E70:;
    ST32(s0, 0);
    goto L_08AB9E74;
L_08AB9E74:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB9E88:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AB9E90;
L_08AB9E90:;
    ST32(s0, v0);
    goto L_08AB9E74;
}

/* 08AB9E98 */
rv_t func_08AB9E98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB9E98:;
    v0 = D_08AF7DF8 - (32248);
    v0 = v0 + 32248;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_088A8814(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB9EB4;
L_08AB9EB4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB9EC0 */
rv_t func_08AB9EC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB9EC0:;
    v0 = D_08AF7DF8 - (32248);
    v0 = v0 + 32248;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_088A8814(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB9EE0;
L_08AB9EE0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB9EE8;
L_08AB9EE8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AB9EF8 */
void func_08AB9EF8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB9EF8:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AB9F28; }
    goto L_08AB9F14;
L_08AB9F14:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AB9F28:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB9F30;
L_08AB9F30:;
    ST32(s0, 0);
    goto L_08AB9F14;
}

/* 08AB9F38 */
u32 func_08AB9F38(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB9F38:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AB9F7C; }
    goto L_08AB9F50;
L_08AB9F50:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AB9F58;
L_08AB9F58:;
    a0 = v0 + 28;
    a3 = v0 + 24;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AB9F90; }
    goto L_08AB9F70;
L_08AB9F70:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AB9F58; }
    goto L_08AB9F7C;
L_08AB9F7C:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AB9F90; }
    goto L_08AB9F88;
L_08AB9F88:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AB9FA0; }
    goto L_08AB9F90;
L_08AB9F90:;
    v0 = t0 + 0;
    sp = sp + 16;
    return v0;
L_08AB9FA0:;
    a2 = 1;
    v0 = func_08AB9F38(a0, a1, a2);
    goto L_08AB9FA8;
L_08AB9FA8:;
    t0 = v0 + 0;
    goto L_08AB9F90;
}

/* 08AB9FB0 */
void func_08AB9FB0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AB9FB0:;
    sp = sp - 16;
    s2 = a1 + 4;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+24);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08ABA048; }
    goto L_08AB9FDC;
L_08AB9FDC:;
    v0 = LD32(s0+28);
    goto L_08AB9FE0;
L_08AB9FE0:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08ABA038; }
    goto L_08AB9FEC;
L_08AB9FEC:;
    cnd_ = s0 == 0;
    a0 = 15;
    if (cnd_) { goto L_08ABA020; }
    goto L_08AB9FF4;
L_08AB9FF4:;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AB9FFC;
L_08AB9FFC:;
    a0 = s0 + 8;
    func_08AB9EF8(a0, 0, 0, 0);
    goto L_08ABA004;
L_08ABA004:;
    v1 = LD_U8(s2+8);
    a0 = s0 + 20;
    func_08AA0D64(a0, 0, 0, 0);
    goto L_08ABA010;
L_08ABA010:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA018;
L_08ABA018:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA020;
L_08ABA020:;
    sp = sp + 16;
    return;
L_08ABA038:;
    func_08AB9FB0(a0, a1);
    goto L_08ABA040;
L_08ABA040:;
    goto L_08AB9FEC;
L_08ABA048:;
    func_08AB9FB0(a0, a1);
    goto L_08ABA050;
L_08ABA050:;
    v0 = LD32(s0+28);
    goto L_08AB9FE0;
}

/* 08ABA058 */
void func_08ABA058(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08ABA058:;
    sp = sp - 48;
    v1 = 0 + 0;
    s4 = a1 + 0;
    s3 = a2 + 0;
    v0 = LD32(a0+8);
    cnd_ = v0 == 0;
    s2 = a3 + 0;
    if (cnd_) { goto L_08ABA220; }
    goto L_08ABA08C;
L_08ABA08C:;
    s0 = LD32(a0);
    cnd_ = s0 == 0;
    if (cnd_) { ST32(sp, 0); goto L_08ABA0C0; }
    goto L_08ABA098;
L_08ABA098:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA0A0;
L_08ABA0A0:;
    a2 = v0 + 0;
    v0 = v0 + 1;
    a0 = v0 + 0;
    ST32(sp+4, a2);
    ST32(sp+8, v0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABA0B8;
L_08ABA0B8:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08ABA430; }
    goto L_08ABA0C0;
L_08ABA0C0:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    s0 = LD32(sp+4);
    goto L_08ABA0CC;
L_08ABA0CC:;
    s1 = LD32(sp);
    a2 = s0 + 0;
    v0 = s1 + s0;
    v1 = (u32)(s32)LD_S8(v0);
    v0 = 46;
    cnd_ = v1 == v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08ABA110; }
    goto L_08ABA0E8;
L_08ABA0E8:;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = a0 + s0; goto L_08ABA114; }
    goto L_08ABA0F0;
L_08ABA0F0:;
    a1 = 46;
    s0 = s0 - 1;
    goto L_08ABA0F8;
L_08ABA0F8:;
    v0 = a0 + s0;
    v1 = (u32)(s32)LD_S8(v0);
    cnd_ = v1 == a1;
    if (cnd_) { a0 = a0 + s0; goto L_08ABA114; }
    goto L_08ABA108;
L_08ABA108:;
    cnd_ = s0 != 0;
    if (cnd_) { s0 = s0 - 1; goto L_08ABA0F8; }
    goto L_08ABA110;
L_08ABA110:;
    a0 = a0 + s0;
    goto L_08ABA114;
L_08ABA114:;
    v1 = (u32)(s32)LD_S8(a0);
    v0 = 46;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08ABA3A8; }
    goto L_08ABA124;
L_08ABA124:;
    cnd_ = s2 == 0;
    v0 = s1 + a2;
    if (cnd_) { goto L_08ABA144; }
    goto L_08ABA12C;
L_08ABA12C:;
    a0 = LD32(s2);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08ABA390; }
    goto L_08ABA138;
L_08ABA138:;
    ST32(s2+4, 0);
    ST32(s2+8, 0);
    goto L_08ABA140;
L_08ABA140:;
    v0 = s1 + a2;
    goto L_08ABA144;
L_08ABA144:;
    a0 = (u32)(s32)LD_S8(v0);
    v1 = 92;
    cnd_ = a0 == v1;
    s0 = a2 + 0;
    if (cnd_) { goto L_08ABA194; }
    goto L_08ABA154;
L_08ABA154:;
    v0 = 47;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08ABA194; }
    goto L_08ABA160;
L_08ABA160:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08ABA194; }
    goto L_08ABA168;
L_08ABA168:;
    a0 = 92;
    v1 = 47;
    s0 = s0 - 1;
    goto L_08ABA174;
L_08ABA174:;
    v0 = s1 + s0;
    v0 = (u32)(s32)LD_S8(v0);
    cnd_ = v0 == a0;
    if (cnd_) { goto L_08ABA194; }
    goto L_08ABA184;
L_08ABA184:;
    cnd_ = v0 == v1;
    if (cnd_) { goto L_08ABA194; }
    goto L_08ABA18C;
L_08ABA18C:;
    cnd_ = s0 != 0;
    if (cnd_) { s0 = s0 - 1; goto L_08ABA174; }
    goto L_08ABA194;
L_08ABA194:;
    cnd_ = s3 == 0;
    if (cnd_) { a0 = s1 + s0; goto L_08ABA1F0; }
    goto L_08ABA19C;
L_08ABA19C:;
    cnd_ = s0 != 0;
    if (cnd_) { a0 = LD32(s3); goto L_08ABA328; }
    goto L_08ABA1A4;
L_08ABA1A4:;
    v1 = (u32)(s32)LD_S8(s1);
    v0 = 92;
    cnd_ = v1 == v0;
    v0 = 47;
    if (cnd_) { goto L_08ABA324; }
    goto L_08ABA1B4;
L_08ABA1B4:;
    cnd_ = v1 == v0;
    a0 = LD32(s3);
    if (cnd_) { goto L_08ABA328; }
    goto L_08ABA1BC;
L_08ABA1BC:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s3+8, 0); goto L_08ABA1DC; }
    goto L_08ABA1C4;
L_08ABA1C4:;
    cnd_ = s1 == a0;
    if (cnd_) { a0 = s1 + s0; goto L_08ABA1F0; }
    goto L_08ABA1CC;
L_08ABA1CC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA1D4;
L_08ABA1D4:;
    ST32(s3, 0);
    ST32(s3+8, 0);
    goto L_08ABA1DC;
L_08ABA1DC:;
    cnd_ = s1 != 0;
    ST32(s3+4, 0);
    if (cnd_) { goto L_08ABA2D8; }
    goto L_08ABA1E4;
L_08ABA1E4:;
    s1 = LD32(sp);
    ST32(s3, 0);
    goto L_08ABA1EC;
L_08ABA1EC:;
    a0 = s1 + s0;
    goto L_08ABA1F0;
L_08ABA1F0:;
    v1 = (u32)(s32)LD_S8(a0);
    v0 = 92;
    cnd_ = v1 == v0;
    v0 = 47;
    if (cnd_) { goto L_08ABA254; }
    goto L_08ABA200;
L_08ABA200:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08ABA254; }
    goto L_08ABA208;
L_08ABA208:;
    a0 = LD32(sp);
    goto L_08ABA20C;
L_08ABA20C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08ABA244; }
    goto L_08ABA214;
L_08ABA214:;
    ST32(sp+8, 0);
    v1 = 1;
    ST32(sp+4, 0);
    goto L_08ABA220;
L_08ABA220:;
    v0 = v1 + 0;
    sp = sp + 48;
    return;
L_08ABA244:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA24C;
L_08ABA24C:;
    ST32(sp, 0);
    goto L_08ABA214;
L_08ABA254:;
    cnd_ = s4 == 0;
    if (cnd_) { a0 = LD32(sp); goto L_08ABA20C; }
    goto L_08ABA25C;
L_08ABA25C:;
    ST8(a0, 0);
    a0 = LD32(s4);
    cnd_ = a0 == 0;
    s0 = LD32(sp);
    if (cnd_) { goto L_08ABA280; }
    goto L_08ABA26C;
L_08ABA26C:;
    cnd_ = s0 == a0;
    if (cnd_) { a0 = LD32(sp); goto L_08ABA20C; }
    goto L_08ABA274;
L_08ABA274:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA27C;
L_08ABA27C:;
    ST32(s4, 0);
    goto L_08ABA280;
L_08ABA280:;
    ST32(s4+8, 0);
    cnd_ = s0 != 0;
    ST32(s4+4, 0);
    if (cnd_) { goto L_08ABA294; }
    goto L_08ABA28C;
L_08ABA28C:;
    ST32(s4, 0);
    goto L_08ABA208;
L_08ABA294:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA29C;
L_08ABA29C:;
    v1 = v0 + 1;
    ST32(s4+4, v0);
    a0 = v1 + 0;
    ST32(s4+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABA2B0;
L_08ABA2B0:;
    cnd_ = v0 != 0;
    ST32(s4, v0);
    if (cnd_) { goto L_08ABA2C4; }
    goto L_08ABA2B8;
L_08ABA2B8:;
    ST32(s4+4, 0);
    ST32(s4+8, 0);
    goto L_08ABA208;
L_08ABA2C4:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA2D0;
L_08ABA2D0:;
    a0 = LD32(sp);
    goto L_08ABA20C;
L_08ABA2D8:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA2E0;
L_08ABA2E0:;
    v1 = v0 + 1;
    ST32(s3+4, v0);
    a0 = v1 + 0;
    ST32(s3+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABA2F4;
L_08ABA2F4:;
    ST32(s3, v0);
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08ABA314; }
    goto L_08ABA304;
L_08ABA304:;
    s1 = LD32(sp);
    ST32(s3+4, 0);
    ST32(s3+8, 0);
    goto L_08ABA1EC;
L_08ABA314:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA31C;
L_08ABA31C:;
    s1 = LD32(sp);
    goto L_08ABA1EC;
L_08ABA324:;
    a0 = LD32(s3);
    goto L_08ABA328;
L_08ABA328:;
    v0 = s0 + 1;
    cnd_ = a0 == 0;
    s2 = s1 + v0;
    if (cnd_) { goto L_08ABA348; }
    goto L_08ABA334;
L_08ABA334:;
    cnd_ = s2 == a0;
    if (cnd_) { a0 = s1 + s0; goto L_08ABA1F0; }
    goto L_08ABA33C;
L_08ABA33C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA344;
L_08ABA344:;
    ST32(s3, 0);
    goto L_08ABA348;
L_08ABA348:;
    ST32(s3+8, 0);
    cnd_ = s2 == 0;
    ST32(s3+4, 0);
    if (cnd_) { goto L_08ABA1E4; }
    goto L_08ABA354;
L_08ABA354:;
    a0 = s2 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA35C;
L_08ABA35C:;
    v1 = v0 + 1;
    ST32(s3+4, v0);
    a0 = v1 + 0;
    ST32(s3+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABA370;
L_08ABA370:;
    cnd_ = v0 != 0;
    ST32(s3, v0);
    if (cnd_) { goto L_08ABA384; }
    goto L_08ABA378;
L_08ABA378:;
    ST32(s3+4, 0);
    ST32(s3+8, 0);
    goto L_08ABA31C;
L_08ABA384:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    goto L_08ABA314;
L_08ABA390:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA398;
L_08ABA398:;
    ST32(s2, 0);
    goto L_08ABA39C;
L_08ABA39C:;
    a2 = LD32(sp+4);
    s1 = LD32(sp);
    goto L_08ABA138;
L_08ABA3A8:;
    cnd_ = s2 == 0;
    ST8(a0, 0);
    if (cnd_) { goto L_08ABA414; }
    goto L_08ABA3B0;
L_08ABA3B0:;
    s1 = LD32(sp);
    a0 = LD32(s2);
    v0 = s0 + 1;
    cnd_ = a0 == 0;
    s0 = s1 + v0;
    if (cnd_) { goto L_08ABA3D8; }
    goto L_08ABA3C4;
L_08ABA3C4:;
    cnd_ = s0 == a0;
    a2 = LD32(sp+4);
    if (cnd_) { goto L_08ABA140; }
    goto L_08ABA3CC;
L_08ABA3CC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA3D4;
L_08ABA3D4:;
    ST32(s2, 0);
    goto L_08ABA3D8;
L_08ABA3D8:;
    ST32(s2+8, 0);
    cnd_ = s0 == 0;
    ST32(s2+4, 0);
    if (cnd_) { goto L_08ABA420; }
    goto L_08ABA3E4;
L_08ABA3E4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA3EC;
L_08ABA3EC:;
    v1 = v0 + 1;
    ST32(s2+4, v0);
    a0 = v1 + 0;
    ST32(s2+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABA400;
L_08ABA400:;
    cnd_ = v0 == 0;
    ST32(s2, v0);
    if (cnd_) { goto L_08ABA39C; }
    goto L_08ABA408;
L_08ABA408:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA414;
L_08ABA414:;
    a2 = LD32(sp+4);
    s1 = LD32(sp);
    goto L_08ABA140;
L_08ABA420:;
    s1 = LD32(sp);
    a2 = LD32(sp+4);
    ST32(s2, 0);
    goto L_08ABA140;
L_08ABA430:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA43C;
L_08ABA43C:;
    s0 = LD32(sp+4);
    goto L_08ABA0CC;
}

/* 08ABA444 */
void func_08ABA444(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABA444:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08ABA474; }
    goto L_08ABA460;
L_08ABA460:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08ABA474:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA47C;
L_08ABA47C:;
    ST32(s0, 0);
    goto L_08ABA460;
}

/* 08ABA484 */
u32 func_08ABA484(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABA484:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08ABA4C8; }
    goto L_08ABA49C;
L_08ABA49C:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08ABA4A4;
L_08ABA4A4:;
    a0 = v0 + 36;
    a3 = v0 + 32;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08ABA4DC; }
    goto L_08ABA4BC;
L_08ABA4BC:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08ABA4A4; }
    goto L_08ABA4C8;
L_08ABA4C8:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08ABA4DC; }
    goto L_08ABA4D4;
L_08ABA4D4:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08ABA4EC; }
    goto L_08ABA4DC;
L_08ABA4DC:;
    v0 = t0 + 0;
    sp = sp + 16;
    return v0;
L_08ABA4EC:;
    a2 = 1;
    v0 = func_08ABA484(a0, a1, a2);
    goto L_08ABA4F4;
L_08ABA4F4:;
    t0 = v0 + 0;
    goto L_08ABA4DC;
}

/* 08ABA4FC */
void func_08ABA4FC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABA4FC:;
    sp = sp - 16;
    s2 = a1 + 4;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+32);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08ABA598; }
    goto L_08ABA528;
L_08ABA528:;
    v0 = LD32(s0+36);
    goto L_08ABA52C;
L_08ABA52C:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08ABA588; }
    goto L_08ABA538;
L_08ABA538:;
    cnd_ = s0 == 0;
    a0 = 13;
    if (cnd_) { goto L_08ABA570; }
    goto L_08ABA540;
L_08ABA540:;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA548;
L_08ABA548:;
    a0 = s2 + 0;
    func_08ABA444(a0, 0, 0, 0);
    goto L_08ABA550;
L_08ABA550:;
    a0 = s0 + 8;
    func_08AA0D64(a0, 0, 0, 0);
    goto L_08ABA558;
L_08ABA558:;
    a0 = s0 + 12;
    func_08AA0CE4(a0, 0, 0, 0);
    goto L_08ABA560;
L_08ABA560:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA568;
L_08ABA568:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA570;
L_08ABA570:;
    sp = sp + 16;
    return;
L_08ABA588:;
    func_08ABA4FC(a0, a1);
    goto L_08ABA590;
L_08ABA590:;
    goto L_08ABA538;
L_08ABA598:;
    func_08ABA4FC(a0, a1);
    goto L_08ABA5A0;
L_08ABA5A0:;
    v0 = LD32(s0+36);
    goto L_08ABA52C;
}

/* 08ABA5A8 */
void func_08ABA5A8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABA5A8:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08ABA5D8; }
    goto L_08ABA5C4;
L_08ABA5C4:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08ABA5D8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA5E0;
L_08ABA5E0:;
    ST32(s0, 0);
    goto L_08ABA5C4;
}

/* 08ABA5E8 */
u32 func_08ABA5E8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABA5E8:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08ABA62C; }
    goto L_08ABA600;
L_08ABA600:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08ABA608;
L_08ABA608:;
    a0 = v0 + 40;
    a3 = v0 + 36;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08ABA640; }
    goto L_08ABA620;
L_08ABA620:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08ABA608; }
    goto L_08ABA62C;
L_08ABA62C:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08ABA640; }
    goto L_08ABA638;
L_08ABA638:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08ABA650; }
    goto L_08ABA640;
L_08ABA640:;
    v0 = t0 + 0;
    sp = sp + 16;
    return v0;
L_08ABA650:;
    a2 = 1;
    v0 = func_08ABA5E8(a0, a1, a2);
    goto L_08ABA658;
L_08ABA658:;
    t0 = v0 + 0;
    goto L_08ABA640;
}

/* 08ABA660 */
void func_08ABA660(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABA660:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+36);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08ABA6E8; }
    goto L_08ABA684;
L_08ABA684:;
    v0 = LD32(s0+40);
    goto L_08ABA688;
L_08ABA688:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08ABA6D8; }
    goto L_08ABA694;
L_08ABA694:;
    cnd_ = s0 == 0;
    a0 = 12;
    if (cnd_) { goto L_08ABA6C4; }
    goto L_08ABA69C;
L_08ABA69C:;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA6A4;
L_08ABA6A4:;
    a0 = s0 + 20;
    func_08ABA5A8(a0, 0, 0, 0);
    goto L_08ABA6AC;
L_08ABA6AC:;
    a0 = s0 + 24;
    func_08AA0CE4(a0, 0, 0, 0);
    goto L_08ABA6B4;
L_08ABA6B4:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA6BC;
L_08ABA6BC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA6C4;
L_08ABA6C4:;
    sp = sp + 16;
    return;
L_08ABA6D8:;
    func_08ABA660(a0, a1);
    goto L_08ABA6E0;
L_08ABA6E0:;
    goto L_08ABA694;
L_08ABA6E8:;
    func_08ABA660(a0, a1);
    goto L_08ABA6F0;
L_08ABA6F0:;
    v0 = LD32(s0+40);
    goto L_08ABA688;
}

/* 08ABA6F8 */
void func_08ABA6F8(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABA6F8:;
    a3 = a3 & 0xffff;
    sp = sp - 16;
    a0 = a1 + 0;
    a1 = a2 + 0;
    a2 = a3 + 0;
    a3 = t0 + 0;
    t0 = t1 + 0;
    func_08A9B2EC(a0, a1, a2, a3, t0);
    goto L_08ABA71C;
L_08ABA71C:;
    sp = sp + 16;
    return;
}

/* 08ABA728 */
void func_08ABA728(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABA728:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08ABA758; }
    goto L_08ABA744;
L_08ABA744:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08ABA758:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA760;
L_08ABA760:;
    ST32(s0, 0);
    goto L_08ABA744;
}

/* 08ABA768 */
void func_08ABA768(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABA768:;
    sp = sp - 16;
    a1 = LD32(a0);
    cnd_ = a1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08ABA7D4; }
    goto L_08ABA784;
L_08ABA784:;
    v1 = LD32(a1-4);
    v0 = v1 << 3;
    v0 = v0 - v1;
    v0 = v0 << 3;
    s0 = a1 + v0;
    goto L_08ABA798;
L_08ABA798:;
    cnd_ = a1 == s0;
    a0 = 5;
    if (cnd_) { goto L_08ABA7C8; }
    goto L_08ABA7A0;
L_08ABA7A0:;
    s0 = s0 - 56;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA7A8;
L_08ABA7A8:;
    a0 = s0 + 48;
    func_08AA2994(a0, 0, 0, 0);
    goto L_08ABA7B0;
L_08ABA7B0:;
    a0 = s0 + 52;
    func_08ABA878(a0, 0, 0, 0);
    goto L_08ABA7B8;
L_08ABA7B8:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA7C0;
L_08ABA7C0:;
    a1 = LD32(s1);
    goto L_08ABA798;
L_08ABA7C8:;
    a0 = a1 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA7D0;
L_08ABA7D0:;
    ST32(s1, 0);
    goto L_08ABA7D4;
L_08ABA7D4:;
    v0 = 1;
    sp = sp + 16;
    return;
}

/* 08ABA7EC */
void func_08ABA7EC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABA7EC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08ABA81C; }
    goto L_08ABA808;
L_08ABA808:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08ABA81C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA824;
L_08ABA824:;
    ST32(s0, 0);
    goto L_08ABA808;
}

/* 08ABA82C */
void func_08ABA82C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABA82C:;
    v0 = a1 << 1;
    v0 = v0 + a1;
    sp = sp - 16;
    v0 = v0 << 3;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08ABA868; }
    goto L_08ABA850;
L_08ABA850:;
    ST32(s0, 0);
    goto L_08ABA854;
L_08ABA854:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08ABA868:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABA870;
L_08ABA870:;
    ST32(s0, v0);
    goto L_08ABA854;
}

/* 08ABA878 */
void func_08ABA878(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABA878:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08ABA8A8; }
    goto L_08ABA894;
L_08ABA894:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08ABA8A8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABA8B0;
L_08ABA8B0:;
    ST32(s0, 0);
    goto L_08ABA894;
}

/* 08ABA8B8 */
void func_08ABA8B8(void)
{
L_08ABA8B8:;
    return;
}

/* 08ABA8C0 */
void func_08ABA8C0(u32 a0, u32 a1, u32 a2, u32 a3, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19], vr24 = v[24], vr25 = v[25], vr26 = v[26], vr27 = v[27], vr28 = v[28], vr29 = v[29], vr30 = v[30], vr31 = v[31], vr32 = v[32], vr33 = v[33], vr34 = v[34], vr35 = v[35], vr36 = v[36], vr37 = v[37], vr38 = v[38], vr39 = v[39], vr40 = v[40], vr41 = v[41], vr42 = v[42], vr43 = v[43];
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 192);
L_08ABA8C0:;
    f13 = f12 - f13;
    sp = sp - 192;
    t0 = D_08AED1CC - (-11828);
    f12 = f12 / f13;
    s1 = a1 + 0;
    s2 = a0 + 0;
    v1 = a0 + 32;
    a0 = a2 + 32;
    f8 = BITSF(0);
    s0 = a2 + 0;
    f11 = f8;
    f10 = BITSF(LD32(t0-11828));
    {u32 a_=a1+(16);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));vr35=BITSF(LD32(a_+12));}
    {u32 a_=a2+(16);vr40=BITSF(LD32(a_+0));vr41=BITSF(LD32(a_+4));vr42=BITSF(LD32(a_+8));vr43=BITSF(LD32(a_+12));}
    f0 = f10 - f12;
    v0 = FBITS(f12);
    {vr0=BITSF(v0);}
    {v[64]=BITSF(v0);}
    {float s0=vr40;float s1=vr41;float s2=vr42;float s3=vr43;float t0=vr0;vr40=s0*t0;vr41=s1*t0;vr42=s2*t0;vr43=s3*t0;}
    v0 = a1 + 32;
    a1 = FBITS(f0);
    {vr36=BITSF(a1);}
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float t0=vr36;vr32=s0*t0;vr33=s1*t0;vr34=s2*t0;vr35=s3*t0;}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    ST32(sp+112, FBITS(f12));
    {v[44]=BITSF(a1);}
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float t0=vr40;float t1=vr41;float t2=vr42;float t3=vr43;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr32));ST32(a_+4,FBITS(vr33));ST32(a_+8,FBITS(vr34));ST32(a_+12,FBITS(vr35));}
    {u32 a_=s2+(16);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    {u32 a_=s1+(32);vr36=BITSF(LD32(a_+0));vr37=BITSF(LD32(a_+4));vr38=BITSF(LD32(a_+8));vr39=BITSF(LD32(a_+12));}
    {u32 a_=a2+(32);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));vr35=BITSF(LD32(a_+12));}
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float t0=v[64];vr32=s0*t0;vr33=s1*t0;vr34=s2*t0;vr35=s3*t0;}
    {float s0=vr36;float s1=vr37;float s2=vr38;float s3=vr39;float t0=v[44];vr36=s0*t0;vr37=s1*t0;vr38=s2*t0;vr39=s3*t0;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr32));ST32(a_+4,FBITS(vr33));ST32(a_+8,FBITS(vr34));ST32(a_+12,FBITS(vr35));}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    {float s0=vr36;float s1=vr37;float s2=vr38;float s3=vr39;float t0=vr32;float t1=vr33;float t2=vr34;float t3=vr35;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    ST32(sp+28, FBITS(f10));
    {u32 a_=s2+(32);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    f3 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s1+32));
    f0 = BITSF(LD32(s2+32));
    f1 = BITSF(LD32(v1+4));
    f4 = BITSF(LD32(a2+32));
    f5 = BITSF(LD32(a0+4));
    f6 = BITSF(LD32(v0+8));
    f9 = BITSF(LD32(a0+8));
    f7 = BITSF(LD32(v1+8));
    ST32(sp+16, FBITS(f0));
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    v0 = D_08AED1D0 - (-11824);
    ST32(sp+20, FBITS(f1));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f3));
    ST32(sp+40, FBITS(f6));
    ST32(sp+24, FBITS(f7));
    {u32 a_=a3+(0);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {u32 a_=a3+(32);vr24=BITSF(LD32(a_+0));vr25=BITSF(LD32(a_+4));vr26=BITSF(LD32(a_+8));vr27=BITSF(LD32(a_+12));}
    ST32(sp+12, FBITS(f10));
    {u32 a_=a3+(48);vr28=BITSF(LD32(a_+0));vr29=BITSF(LD32(a_+4));vr30=BITSF(LD32(a_+8));vr31=BITSF(LD32(a_+12));}
    {u32 a_=a3+(16);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    ST32(sp, FBITS(f4));
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr24;float s1=vr25;float s2=vr26;float s3=vr27;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    ST32(sp+4, FBITS(f5));
    {float s0=vr28;float s1=vr29;float s2=vr30;float s3=vr31;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {u32 a_=a3+(16);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    ST32(sp+8, FBITS(f9));
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[52]=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    ST32(sp+44, FBITS(f10));
    {u32 a_=sp+(0);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));vr35=BITSF(LD32(a_+12));}
    {float t0=vr32;float t1=vr33;float t2=vr34;float t3=vr35;float o0=0;o0+=vr0*t0;o0+=vr4*t1;o0+=vr8*t2;o0+=vr12*t3;float o1=0;o1+=vr1*t0;o1+=vr5*t1;o1+=vr9*t2;o1+=vr13*t3;float o2=0;o2+=vr2*t0;o2+=vr6*t1;o2+=vr10*t2;o2+=vr14*t3;float o3=0;o3+=vr3*t0;o3+=vr7*t1;o3+=vr11*t2;o3+=vr15*t3;vr40=o0;vr41=o1;vr42=o2;vr43=o3;}
    {u32 a_=sp+(32);vr36=BITSF(LD32(a_+0));vr37=BITSF(LD32(a_+4));vr38=BITSF(LD32(a_+8));vr39=BITSF(LD32(a_+12));}
    f3 = BITSF(LD32(v0-11824));
    {float t0=vr36;float t1=vr37;float t2=vr38;float t3=vr39;float o0=0;o0+=vr16*t0;o0+=v[20]*t1;o0+=vr24*t2;o0+=vr28*t3;float o1=0;o1+=vr17*t0;o1+=v[21]*t1;o1+=vr25*t2;o1+=vr29*t3;float o2=0;o2+=vr18*t0;o2+=v[22]*t1;o2+=vr26*t2;o2+=vr30*t3;float o3=0;o3+=vr19*t0;o3+=v[23]*t1;o3+=vr27*t2;o3+=vr31*t3;vr12=o0;vr13=o1;vr14=o2;vr15=o3;}
    v0 = D_08AED1D4 - (-11820);
    f0 = BITSF(LD32(v0-11820));
    v0 = D_08AED1D8 - (-11816);
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr24;float s1=vr25;float s2=vr26;float s3=vr27;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[56]=d0;v[57]=d1;v[58]=d2;v[59]=d3;}
    {float s0=vr28;float s1=vr29;float s2=vr30;float s3=vr31;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[60]=d0;v[61]=d1;v[62]=d2;v[63]=d3;}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    ST32(sp+48, FBITS(f0));
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    f0 = BITSF(LD32(v0-11816));
    f1 = BITSF(LD32(sp+44));
    ST32(sp+56, FBITS(f8));
    {float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float o0=0;o0+=v[48]*t0;o0+=v[52]*t1;o0+=v[56]*t2;o0+=v[60]*t3;float o1=0;o1+=v[49]*t0;o1+=v[53]*t1;o1+=v[57]*t2;o1+=v[61]*t3;float o2=0;o2+=v[50]*t0;o2+=v[54]*t1;o2+=v[58]*t2;o2+=v[62]*t3;float o3=0;o3+=v[51]*t0;o3+=v[55]*t1;o3+=v[59]*t2;o3+=v[63]*t3;vr8=o0;vr9=o1;vr10=o2;vr11=o3;}
    f1 = f1 + f3;
    ST32(sp+52, FBITS(f0));
    f0 = BITSF(LD32(sp+12));
    f1 = f10 / f1;
    ST32(sp+60, FBITS(f8));
    {u32 a_=sp+(48);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr40;float s1=vr41;float s2=vr42;float s3=vr43;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;float d3=s3*t3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;float d3=s3*t3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    f2 = BITSF(LD32(sp+28));
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;float d3=s3*t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    f0 = f0 + f3;
    f2 = f2 + f3;
    f0 = f10 / f0;
    f2 = f10 / f2;
    v0 = FBITS(f0);
    {v[68]=BITSF(v0);}
    v0 = FBITS(f1);
    {float s0=vr40;float s1=vr41;float s2=vr42;float s3=vr43;float t0=v[68];vr16=s0*t0;vr17=s1*t0;vr18=s2*t0;vr19=s3*t0;}
    {v[72]=BITSF(v0);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=v[72];vr12=s0*t0;vr13=s1*t0;vr14=s2*t0;vr15=s3*t0;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    f0 = sqrtf(f0);
    v0 = FBITS(f2);
    {v[76]=BITSF(v0);}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=v[76];vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;vr3=s3*t0;}
    fcc = FCMP(f0, f8, 2);
    cnd_ = fcc;
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    if (cnd_) { goto L_08ABAAFC; }
    goto L_08ABAADC;
L_08ABAADC:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    f2 = f10 / f0;
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr0=sum;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    f0 = sqrtf(f1);
    f11 = f0 * f2;
    goto L_08ABAAFC;
L_08ABAAFC:;
    f20 = BITSF(LD32(t0-11828));
    ST32(sp+112, FBITS(f11));
    a1 = sp + 116;
    a0 = sp + 112;
    ST32(sp+120, FBITS(f20));
    a2 = sp + 120;
    ST32(sp+116, 0);
    f0 = func_0890BD64(a0, a1, a2);
    goto L_08ABAB1C;
L_08ABAB1C:;
    f20 = f20 - f0;
    {u32 a_=s1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=s0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    a1 = FBITS(f20);
    v0 = FBITS(f0);
    {vr8=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;vr3=s3*t0;}
    {u32 a_=sp+(128);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {vr8=BITSF(a1);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr8;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;vr7=s3*t0;}
    ST32(sp+112, FBITS(f0));
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=s2+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    sp = sp + 192;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[39]=vr39;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;return; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[39]=vr39;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;
}

/* 08ABAB74 */
void func_08ABAB74(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_08ABAB74:;
    v1 = LD_U8(a0+6);
    v0 = 4;
    t1 = a0 + 0;
    t2 = 2;
    a2 = LD_U16(a0);
    cnd_ = v1 == v0;
    a1 = LD_U16(a0+2);
    if (cnd_) { goto L_08ABAC08; }
    goto L_08ABAB90;
L_08ABAB90:;
    v0 = (s32)v1 < 5;
    cnd_ = v0 == 0;
    v0 = 5;
    if (cnd_) { goto L_08ABABF8; }
    goto L_08ABAB9C;
L_08ABAB9C:;
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { t2 = 8; goto L_08ABABB0; }
    goto L_08ABABA8;
L_08ABABA8:;
    return;
L_08ABABB0:;
    ST32(t1+20, 0);
    goto L_08ABABB4;
L_08ABABB4:;
    v1 = 0 + 0;
    a3 = 0 + 0;
    t0 = LD_U8(t1+7);
    goto L_08ABABC0;
L_08ABABC0:;
    { s64 p_ = (s64)(s32)a2 * (s32)a1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = v1 + 1;
    v1 = v1 & 0xff;
    a0 = t0 < v1;
    a2 = a2 >> 1;
    v0 = lo;
    { s64 p_ = (s64)(s32)v0 * (s32)t2; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = a1 >> 1;
    v0 = lo;
    v0 = v0 >> 1;
    cnd_ = a0 == 0;
    a3 = a3 + v0;
    if (cnd_) { goto L_08ABABC0; }
    goto L_08ABABF0;
L_08ABABF0:;
    ST32(t1+20, a3);
    return;
L_08ABABF8:;
    cnd_ = v1 == v0;
    if (cnd_) { ST32(t1+20, 0); goto L_08ABABB4; }
    goto L_08ABAC00;
L_08ABAC00:;
    return;
L_08ABAC08:;
    t2 = 1;
    goto L_08ABABB0;
}

/* 08ABAC10 */
rv_t func_08ABAC10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABAC10:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABAC18 */
rv_t func_08ABAC18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABAC18:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABAC20 */
rv_t func_08ABAC20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABAC20:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABAC28 */
rv_t func_08ABAC28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABAC28:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABAC30 */
rv_t func_08ABAC30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABAC30:;
    v0 = D_08AF7E40 - (32320);
    v0 = v0 + 32320;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08ABAC40 */
rv_t func_08ABAC40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABAC40:;
    v0 = D_08AF7E40 - (32320);
    v0 = v0 + 32320;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABAC5C;
L_08ABAC5C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABAC68 */
rv_t func_08ABAC68(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABAC68:;
    v0 = D_08AF7E40 - (32320);
    v0 = v0 + 32320;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08ABAC78 */
rv_t func_08ABAC78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABAC78:;
    v0 = D_08AF7E40 - (32320);
    v0 = v0 + 32320;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABAC94;
L_08ABAC94:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABACA0 */
void func_08ABACA0(void)
{
L_08ABACA0:;
    return;
}

/* 08ABACA8 */
rv_t func_08ABACA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABACA8:;
    sp = sp - 16;
    v0 = D_08AF7E60 - (32352);
    s0 = a0 + 0;
    v0 = v0 + 32352;
    v1 = LD32(a0+4);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08ABACF4; }
    goto L_08ABACD0;
L_08ABACD0:;
    v0 = D_08AF7E70 - (32368);
    goto L_08ABACD4;
L_08ABACD4:;
    v0 = v0 + 32368;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABACE4;
L_08ABACE4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08ABACF4:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABAD04;
L_08ABAD04:;
    v0 = D_08AF7E70 - (32368);
    goto L_08ABACD4;
}

/* 08ABAD0C */
rv_t func_08ABAD0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABAD0C:;
    sp = sp - 16;
    v0 = D_08AF7E60 - (32352);
    s0 = a0 + 0;
    v0 = v0 + 32352;
    v1 = LD32(a0+4);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08ABAD50; }
    goto L_08ABAD34;
L_08ABAD34:;
    v0 = D_08AF7E70 - (32368);
    goto L_08ABAD38;
L_08ABAD38:;
    v0 = v0 + 32368;
    ST32(s0, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08ABAD50:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABAD60;
L_08ABAD60:;
    v0 = D_08AF7E70 - (32368);
    goto L_08ABAD38;
}

/* 08ABAD68 */
void func_08ABAD68(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08ABAD68:;
    v0 = 0x8000;
    t4 = a0 + 0;
    a0 = a0 + v0;
    a3 = LD32(a0+8212);
    v1 = LD32(a0+8204);
    v0 = a3 + a2;
    v0 = v0 + 2;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    v1 = a3 + 1;
    if (cnd_) { goto L_08ABAD9C; }
    goto L_08ABAD90;
L_08ABAD90:;
    ST32(a0+8212, 0);
    a3 = 0 + 0;
    v1 = a3 + 1;
    goto L_08ABAD9C;
L_08ABAD9C:;
    ST32(a0+8212, v1);
    cnd_ = a2 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08ABADF4; }
    goto L_08ABADA8;
L_08ABADA8:;
    v0 = v1 << 2;
    v0 = v0 + v1;
    v0 = v0 << 2;
    v1 = v0 + t4;
    goto L_08ABADB8;
L_08ABADB8:;
    f1 = BITSF(LD32(a1));
    a0 = a0 + 1;
    v0 = a0 < a2;
    ST32(v1+20, FBITS(f1));
    f0 = BITSF(LD32(a1+4));
    ST32(v1+24, FBITS(f0));
    f1 = BITSF(LD32(a1+8));
    ST32(v1+28, FBITS(f1));
    f0 = BITSF(LD32(a1+12));
    ST32(v1+12, FBITS(f0));
    f1 = BITSF(LD32(a1+16));
    a1 = a1 + 20;
    ST32(v1+16, FBITS(f1));
    cnd_ = v0 != 0;
    v1 = v1 + 20;
    if (cnd_) { goto L_08ABADB8; }
    goto L_08ABADF4;
L_08ABADF4:;
    v0 = a3 << 2;
    v0 = v0 + a3;
    v0 = v0 << 2;
    v0 = v0 + t4;
    a0 = LD32(v0+32);
    a3 = v0 + 32;
    t0 = v0 + 12;
    ST32(v0+12, a0);
    v1 = 0x8000;
    t5 = t4 + v1;
    v0 = LD32(a3+4);
    v1 = LD32(t5+8212);
    t1 = a2 & 0x1;
    ST32(t0+4, v0);
    t2 = v1 + a2;
    v0 = t2 << 2;
    v1 = LD32(a3+8);
    v0 = v0 + t2;
    v0 = v0 << 2;
    ST32(t0+8, v1);
    v0 = v0 + t4;
    a2 = v0 - 8;
    v1 = LD32(a3+12);
    a1 = v0 + 12;
    t3 = t2 + 1;
    ST32(t0+12, v1);
    a0 = LD32(a3+16);
    ST32(t5+8212, t3);
    ST32(t0+16, a0);
    v1 = LD32(v0-8);
    ST32(v0+12, v1);
    a0 = LD32(a2+4);
    ST32(a1+4, a0);
    v0 = LD32(a2+8);
    ST32(a1+8, v0);
    v1 = LD32(a2+12);
    ST32(a1+12, v1);
    v0 = LD32(a2+16);
    cnd_ = t1 == 0;
    ST32(a1+16, v0);
    if (cnd_) { goto L_08ABAEEC; }
    goto L_08ABAE94;
L_08ABAE94:;
    v0 = LD32(t5+8204);
    t1 = t2 + 2;
    v0 = t1 < v0;
    cnd_ = v0 == 0;
    v0 = 0x8000;
    if (cnd_) { goto L_08ABAEF0; }
    goto L_08ABAEA8;
L_08ABAEA8:;
    v0 = t3 << 2;
    v0 = v0 + t3;
    v0 = v0 << 2;
    v0 = v0 + t4;
    a2 = LD32(v0-8);
    a0 = v0 - 8;
    a1 = v0 + 12;
    ST32(v0+12, a2);
    v1 = LD32(a0+4);
    ST32(t5+8212, t1);
    ST32(a1+4, v1);
    v0 = LD32(a0+8);
    ST32(a1+8, v0);
    v1 = LD32(a0+12);
    ST32(a1+12, v1);
    v0 = LD32(a0+16);
    ST32(a1+16, v0);
    goto L_08ABAEEC;
L_08ABAEEC:;
    v0 = 0x8000;
    goto L_08ABAEF0;
L_08ABAEF0:;
    a0 = t4 + v0;
    v1 = LD32(a0+8212);
    v0 = LD32(a0+8216);
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a0+8216, v1); goto L_08ABAFDC; }
    goto L_08ABAF08;
L_08ABAF08:;
    v0 = v1 << 2;
    v0 = v0 + v1;
    v0 = v0 << 2;
    a2 = v1 + 0;
    a3 = a0 + 0;
    a1 = v0 + t4;
    goto L_08ABAF20;
L_08ABAF20:;
    f1 = BITSF(LD32(a1+20));
    f0 = BITSF(LD32(a1+40));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(a3+8216); goto L_08ABAF9C; }
    goto L_08ABAF38;
L_08ABAF38:;
    f1 = BITSF(LD32(a1+24));
    f0 = BITSF(LD32(a1+44));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(a3+8216); goto L_08ABAF9C; }
    goto L_08ABAF50;
L_08ABAF50:;
    f1 = BITSF(LD32(a1+28));
    f0 = BITSF(LD32(a1+48));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(a3+8216); goto L_08ABAF9C; }
    goto L_08ABAF68;
L_08ABAF68:;
    f1 = BITSF(LD32(a1+12));
    f0 = BITSF(LD32(a1+32));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(a3+8216); goto L_08ABAF9C; }
    goto L_08ABAF80;
L_08ABAF80:;
    f1 = BITSF(LD32(a1+16));
    f0 = BITSF(LD32(a1+36));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    v0 = 0x8000;
    if (cnd_) { goto L_08ABAFE0; }
    goto L_08ABAF98;
L_08ABAF98:;
    v0 = LD32(a3+8216);
    goto L_08ABAF9C;
L_08ABAF9C:;
    v0 = v0 - 1;
    v0 = a2 < v0;
    cnd_ = v0 == 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08ABAFDC; }
    goto L_08ABAFAC;
L_08ABAFAC:;
    v0 = LD32(a1-8);
    v1 = LD32(a1-4);
    a0 = LD32(a1+8);
    ST32(a1+12, v0);
    ST32(a1+16, v1);
    v0 = LD32(a1);
    v1 = LD32(a1+4);
    ST32(a1+28, a0);
    ST32(a1+20, v0);
    ST32(a1+24, v1);
    a1 = a1 + 20;
    goto L_08ABAF20;
L_08ABAFDC:;
    v0 = 0x8000;
    goto L_08ABAFE0;
L_08ABAFE0:;
    a0 = t4 + v0;
    v1 = LD32(a0+8212);
    v0 = LD32(a0+8208);
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(a0+8208, v1); goto L_08ABAFF8; }
    goto L_08ABAFF8;
L_08ABAFF8:;
    return;
}

/* 08ABB000 */
void func_08ABB000(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08ABB000:;
    sp = sp - 32;
    s4 = D_08B2C1C4 - (-15932);
    s3 = D_08B2C1F0 - (-15888);
    s2 = a0 + 0;
    goto L_08ABB028;
L_08ABB028:;
    a0 = LD32(s2+8);
    s0 = 0x8000;
    s0 = s2 + s0;
    func_0890C3C0(a0);
    goto L_08ABB038;
L_08ABB038:;
    v0 = LD32(s0+8208);
    s1 = s2 + 12;
    a0 = s1 + 0;
    a1 = v0 << 2;
    a1 = a1 + v0;
    a1 = a1 << 2;
    v0 = sceKernelDcacheWritebackRange(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08ABB054;
L_08ABB054:;
    a2 = LD_U16(s0+8208);
    a0 = 4;
    a1 = 387;
    t0 = s1 + 0;
    a3 = 0 + 0;
    func_08A9B2EC(a0, a1, a2, a3, t0);
    goto L_08ABB06C;
L_08ABB06C:;
    v0 = LD32(s0+8208);
    a1 = s4 - 15932;
    v1 = LD32(a1+40);
    a0 = LD32(s3-15888);
    a2 = LD32(s2+4);
    v0 = v0 - 2;
    a0 = a0 + v0;
    v1 = v1 + v0;
    ST32(a1+40, v1);
    s2 = a2 + 0;
    cnd_ = a2 != 0;
    ST32(s3-15888, a0);
    if (cnd_) { goto L_08ABB028; }
    goto L_08ABB09C;
L_08ABB09C:;
    sp = sp + 32;
    return;
}

/* 08ABB0BC */
rv_t func_08ABB0BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB0BC:;
    v0 = D_08AF7E70 - (32368);
    v0 = v0 + 32368;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB0CC */
rv_t func_08ABB0CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABB0CC:;
    v0 = D_08AF7E70 - (32368);
    v0 = v0 + 32368;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABB0E8;
L_08ABB0E8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB0F4 */
u32 func_08ABB0F4(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08ABB0F4:;
    sp = sp - 32;
    v1 = LD32(a0+140);
    v0 = v1 & 0x10;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08ABB1A0; }
    goto L_08ABB110;
L_08ABB110:;
    f0 = BITSF(LD32(a0+84));
    f1 = BITSF(LD32(a0+128));
    v0 = v1 & 0x8;
    f0 = f0 * f12;
    f0 = f0 * f1;
    f0 = BITSF(F2I(f0, 1));
    a0 = FBITS(f0);
    cnd_ = v0 == 0;
    ST32(sp, FBITS(f0));
    if (cnd_) { goto L_08ABB168; }
    goto L_08ABB134;
L_08ABB134:;
    v1 = LD32(s0+92);
    a1 = LD32(s0+136);
    { u32 x_ = a0, y_ = v1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = hi;
    v0 = a0 << 2;
    v0 = v0 + a0;
    v0 = v0 << 2;
    a0 = a1 + v0;
    goto L_08ABB154;
L_08ABB154:;
    v0 = a0 + 0;
    sp = sp + 32;
    return v0;
L_08ABB168:;
    v0 = LD32(s0+92);
    a0 = sp + 0;
    a1 = sp + 4;
    v0 = v0 - 1;
    a2 = sp + 8;
    ST32(sp+8, v0);
    ST32(sp+4, 0);
    v0 = func_08918050(a0, a1, a2);
    goto L_08ABB188;
L_08ABB188:;
    v1 = v0 << 2;
    a0 = LD32(s0+136);
    v1 = v1 + v0;
    v1 = v1 << 2;
    a0 = a0 + v1;
    goto L_08ABB154;
L_08ABB1A0:;
    v0 = LD32(a0+92);
    a2 = v0 - 1;
    cnd_ = a2 == 0;
    v0 = a2 << 2;
    if (cnd_) { goto L_08ABB1F4; }
    goto L_08ABB1B0;
L_08ABB1B0:;
    a1 = LD32(a0+136);
    v0 = v0 + a2;
    v0 = v0 << 2;
    v0 = v0 + a1;
    v1 = v0 + 0;
    v0 = v0 + 16;
    f0 = BITSF(LD32(v0));
    goto L_08ABB1CC;
L_08ABB1CC:;
    a0 = v1 + 0;
    a2 = a2 - 1;
    fcc = FCMP(f0, f12, 14);
    v0 = v0 - 20;
    cnd_ = fcc;
    v1 = v1 - 20;
    if (cnd_) { goto L_08ABB154; }
    goto L_08ABB1E4;
L_08ABB1E4:;
    cnd_ = a2 != 0;
    if (cnd_) { f0 = BITSF(LD32(v0)); goto L_08ABB1CC; }
    goto L_08ABB1EC;
L_08ABB1EC:;
    a0 = a1 + 0;
    goto L_08ABB154;
L_08ABB1F4:;
    a1 = LD32(a0+136);
    goto L_08ABB1EC;
}

/* 08ABB1FC */
void func_08ABB1FC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08ABB1FC:;
    v0 = 0x8000;
    t4 = a0 + 0;
    a0 = a0 + v0;
    a3 = LD32(a0+8200);
    v1 = LD32(a0+8192);
    v0 = a3 + a2;
    v0 = v0 + 2;
    v1 = v1 < v0;
    cnd_ = v1 == 0;
    v1 = a3 + 1;
    if (cnd_) { goto L_08ABB230; }
    goto L_08ABB224;
L_08ABB224:;
    ST32(a0+8200, 0);
    a3 = 0 + 0;
    v1 = a3 + 1;
    goto L_08ABB230;
L_08ABB230:;
    ST32(a0+8200, v1);
    cnd_ = a2 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08ABB288; }
    goto L_08ABB23C;
L_08ABB23C:;
    v0 = v1 << 2;
    v0 = v0 + v1;
    v0 = v0 << 2;
    v1 = v0 + t4;
    goto L_08ABB24C;
L_08ABB24C:;
    f1 = BITSF(LD32(a1));
    a0 = a0 + 1;
    v0 = a0 < a2;
    ST32(v1+8, FBITS(f1));
    f0 = BITSF(LD32(a1+4));
    ST32(v1+12, FBITS(f0));
    f1 = BITSF(LD32(a1+8));
    ST32(v1+16, FBITS(f1));
    f0 = BITSF(LD32(a1+12));
    ST32(v1, FBITS(f0));
    f1 = BITSF(LD32(a1+16));
    a1 = a1 + 20;
    ST32(v1+4, FBITS(f1));
    cnd_ = v0 != 0;
    v1 = v1 + 20;
    if (cnd_) { goto L_08ABB24C; }
    goto L_08ABB288;
L_08ABB288:;
    v1 = a3 << 2;
    v1 = v1 + a3;
    v1 = v1 << 2;
    v1 = v1 + t4;
    a0 = LD32(v1+20);
    t0 = v1 + 20;
    v0 = 0x8000;
    ST32(v1, a0);
    t3 = t4 + v0;
    a0 = LD32(t0+4);
    v0 = LD32(t3+8200);
    t1 = LD32(t3+8204);
    ST32(v1+4, a0);
    v0 = v0 + a2;
    a0 = v0 << 2;
    a1 = LD32(t0+8);
    a0 = a0 + v0;
    a0 = a0 << 2;
    ST32(v1+8, a1);
    a0 = a0 + t4;
    t2 = v0 + 1;
    a2 = LD32(t0+12);
    a3 = a0 - 20;
    t1 = t2 < t1;
    ST32(v1+12, a2);
    a1 = LD32(t0+16);
    ST32(t3+8200, t2);
    ST32(v1+16, a1);
    v0 = LD32(a0-20);
    ST32(a0, v0);
    v1 = LD32(a3+4);
    ST32(a0+4, v1);
    v0 = LD32(a3+8);
    ST32(a0+8, v0);
    v1 = LD32(a3+12);
    ST32(a0+12, v1);
    v0 = LD32(a3+16);
    cnd_ = t1 == 0;
    ST32(a0+16, v0);
    if (cnd_) { goto L_08ABB41C; }
    goto L_08ABB324;
L_08ABB324:;
    v0 = t2 << 2;
    v0 = v0 + t2;
    v0 = v0 << 2;
    a2 = t2 + 0;
    a3 = t3 + 0;
    a1 = v0 + t4;
    goto L_08ABB33C;
L_08ABB33C:;
    f1 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a1+28));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(a3+8204); goto L_08ABB3B8; }
    goto L_08ABB354;
L_08ABB354:;
    f1 = BITSF(LD32(a1+12));
    f0 = BITSF(LD32(a1+32));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(a3+8204); goto L_08ABB3B8; }
    goto L_08ABB36C;
L_08ABB36C:;
    f1 = BITSF(LD32(a1+16));
    f0 = BITSF(LD32(a1+36));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(a3+8204); goto L_08ABB3B8; }
    goto L_08ABB384;
L_08ABB384:;
    f1 = BITSF(LD32(a1));
    f0 = BITSF(LD32(a1+20));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(a3+8204); goto L_08ABB3B8; }
    goto L_08ABB39C;
L_08ABB39C:;
    f1 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a1+24));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    v0 = 0x8000;
    if (cnd_) { goto L_08ABB3FC; }
    goto L_08ABB3B4;
L_08ABB3B4:;
    v0 = LD32(a3+8204);
    goto L_08ABB3B8;
L_08ABB3B8:;
    v0 = v0 - 1;
    v0 = a2 < v0;
    cnd_ = v0 == 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08ABB3F8; }
    goto L_08ABB3C8;
L_08ABB3C8:;
    v0 = LD32(a1-20);
    v1 = LD32(a1-16);
    a0 = LD32(a1-4);
    ST32(a1, v0);
    ST32(a1+4, v1);
    v0 = LD32(a1-12);
    v1 = LD32(a1-8);
    ST32(a1+16, a0);
    ST32(a1+8, v0);
    ST32(a1+12, v1);
    a1 = a1 + 20;
    goto L_08ABB33C;
L_08ABB3F8:;
    v0 = 0x8000;
    goto L_08ABB3FC;
L_08ABB3FC:;
    a0 = t4 + v0;
    v1 = LD32(a0+8200);
    v0 = LD32(a0+8196);
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(a0+8196, v1); goto L_08ABB414; }
    goto L_08ABB414;
L_08ABB414:;
    return;
L_08ABB41C:;
    ST32(t3+8204, t2);
    goto L_08ABB3F8;
}

/* 08ABB424 */
void func_08ABB424(void)
{
L_08ABB424:;
    return;
}

/* 08ABB42C */
rv_t func_08ABB42C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB42C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB434 */
rv_t func_08ABB434(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB434:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB43C */
rv_t func_08ABB43C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB43C:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB444 */
rv_t func_08ABB444(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB444:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB44C */
rv_t func_08ABB44C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB44C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB454 */
rv_t func_08ABB454(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB454:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB45C */
rv_t func_08ABB45C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB45C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB464 */
rv_t func_08ABB464(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB464:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB46C */
rv_t func_08ABB46C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB46C:;
    v0 = D_08AED418 - (-11240);
    f0 = BITSF(LD32(v0-11240));
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB478 */
rv_t func_08ABB478(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB478:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB480 */
rv_t func_08ABB480(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB480:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB488 */
u32 func_08ABB488(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08ABB488:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08ABB4DC; }
    goto L_08ABB498;
L_08ABB498:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08ABB4DC; }
    goto L_08ABB4BC;
L_08ABB4BC:;
    a0 = LD32(v1);
    goto L_08ABB4C0;
L_08ABB4C0:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08ABB4E4; }
    goto L_08ABB4CC;
L_08ABB4CC:;
    v1 = LD32(v1+4);
    goto L_08ABB4D0;
L_08ABB4D0:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_08ABB4C0; }
    goto L_08ABB4D8;
L_08ABB4D8:;
    a3 = 0 + 0;
    goto L_08ABB4DC;
L_08ABB4DC:;
    v0 = a3 + 0;
    return v0;
L_08ABB4E4:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(v1+8); goto L_08ABB500; }
    goto L_08ABB4EC;
L_08ABB4EC:;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08ABB4D0; }
    goto L_08ABB4FC;
L_08ABB4FC:;
    v0 = LD_U8(v1+8);
    goto L_08ABB500;
L_08ABB500:;
    cnd_ = v0 != 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_08ABB4CC; }
    goto L_08ABB508;
L_08ABB508:;
    goto L_08ABB4DC;
}

/* 08ABB510 */
rv_t func_08ABB510(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB510:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB518 */
rv_t func_08ABB518(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB518:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB520 */
rv_t func_08ABB520(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB520:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB528 */
rv_t func_08ABB528(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB528:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB530 */
rv_t func_08ABB530(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB530:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB538 */
rv_t func_08ABB538(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB538:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB540 */
rv_t func_08ABB540(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB540:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB548 */
rv_t func_08ABB548(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB548:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB550 */
rv_t func_08ABB550(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB550:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB558 */
rv_t func_08ABB558(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB558:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB560 */
rv_t func_08ABB560(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB560:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB568 */
rv_t func_08ABB568(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB568:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB570 */
void func_08ABB570(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABB570:;
    a2 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABB5D8; }
    goto L_08ABB580;
L_08ABB580:;
    a3 = LD32(a2);
    v1 = LD32(a2+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABB590;
L_08ABB590:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABB600; }
    goto L_08ABB59C;
L_08ABB59C:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABB5E8; }
    goto L_08ABB5B0;
L_08ABB5B0:;
    cnd_ = a1 != 0;
    a0 = LD32(a2+8);
    if (cnd_) { goto L_08ABB5CC; }
    goto L_08ABB5B8;
L_08ABB5B8:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08ABB5DC; }
    goto L_08ABB5CC;
L_08ABB5CC:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABB600; }
    goto L_08ABB5D8;
L_08ABB5D8:;
    v0 = LD32(a0+4);
    goto L_08ABB5DC;
L_08ABB5DC:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABB5B0; }
    goto L_08ABB5E4;
L_08ABB5E4:;
    a3 = LD32(a2);
    goto L_08ABB5E8;
L_08ABB5E8:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABB590;
L_08ABB600:;
    return;
}

/* 08ABB608 */
void func_08ABB608(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABB608:;
    a2 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABB670; }
    goto L_08ABB618;
L_08ABB618:;
    a3 = LD32(a2);
    v1 = LD32(a2+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABB628;
L_08ABB628:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABB698; }
    goto L_08ABB634;
L_08ABB634:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABB680; }
    goto L_08ABB648;
L_08ABB648:;
    cnd_ = a1 != 0;
    a0 = LD32(a2+8);
    if (cnd_) { goto L_08ABB664; }
    goto L_08ABB650;
L_08ABB650:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08ABB674; }
    goto L_08ABB664;
L_08ABB664:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABB698; }
    goto L_08ABB670;
L_08ABB670:;
    v0 = LD32(a0+4);
    goto L_08ABB674;
L_08ABB674:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABB648; }
    goto L_08ABB67C;
L_08ABB67C:;
    a3 = LD32(a2);
    goto L_08ABB680;
L_08ABB680:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABB628;
L_08ABB698:;
    return;
}

/* 08ABB6A0 */
void func_08ABB6A0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08ABB6A0:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08ABB734; }
    goto L_08ABB6CC;
L_08ABB6CC:;
    v0 = LD32(s1);
    goto L_08ABB6D0;
L_08ABB6D0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08ABB724; }
    goto L_08ABB6E4;
L_08ABB6E4:;
    v0 = LD_U8(s0+8);
    goto L_08ABB6E8;
L_08ABB6E8:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08ABB764; }
    goto L_08ABB6F0;
L_08ABB6F0:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABB754; }
    goto L_08ABB6F8;
L_08ABB6F8:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08ABB700;
L_08ABB700:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABB70C;
L_08ABB70C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08ABB718;
L_08ABB718:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08ABB6E8; }
    goto L_08ABB720;
L_08ABB720:;
    v1 = LD32(s1+4);
    goto L_08ABB724;
L_08ABB724:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABB6D0; }
    goto L_08ABB734;
L_08ABB734:;
    sp = sp + 32;
    return;
L_08ABB754:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08ABB700;
L_08ABB764:;
    s0 = LD32(s0+4);
    goto L_08ABB718;
}

/* 08ABB76C */
void func_08ABB76C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08ABB76C:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08ABB800; }
    goto L_08ABB798;
L_08ABB798:;
    v0 = LD32(s1);
    goto L_08ABB79C;
L_08ABB79C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08ABB7F0; }
    goto L_08ABB7B0;
L_08ABB7B0:;
    v0 = LD_U8(s0+8);
    goto L_08ABB7B4;
L_08ABB7B4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08ABB830; }
    goto L_08ABB7BC;
L_08ABB7BC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABB820; }
    goto L_08ABB7C4;
L_08ABB7C4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08ABB7CC;
L_08ABB7CC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABB7D8;
L_08ABB7D8:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08ABB7E4;
L_08ABB7E4:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08ABB7B4; }
    goto L_08ABB7EC;
L_08ABB7EC:;
    v1 = LD32(s1+4);
    goto L_08ABB7F0;
L_08ABB7F0:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABB79C; }
    goto L_08ABB800;
L_08ABB800:;
    sp = sp + 32;
    return;
L_08ABB820:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08ABB7CC;
L_08ABB830:;
    s0 = LD32(s0+4);
    goto L_08ABB7E4;
}

/* 08ABB838 */
rv_t func_08ABB838(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB838:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB840 */
rv_t func_08ABB840(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB840:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB848 */
rv_t func_08ABB848(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB848:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB850 */
rv_t func_08ABB850(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB850:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB858 */
rv_t func_08ABB858(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB858:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB860 */
rv_t func_08ABB860(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB860:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB868 */
rv_t func_08ABB868(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB868:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB870 */
rv_t func_08ABB870(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB870:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB878 */
rv_t func_08ABB878(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB878:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB880 */
rv_t func_08ABB880(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABB880:;
    sp = sp - 16;
    v1 = LD32(a0);
    a1 = LD32(v1+64);
    t_ = a1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABB898;
L_08ABB898:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB8A4 */
rv_t func_08ABB8A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB8A4:;
    v0 = D_08AF81A8 - (-32344);
    v0 = v0 - 32344;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB8B4 */
rv_t func_08ABB8B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABB8B4:;
    v0 = D_08AF81A8 - (-32344);
    v0 = v0 - 32344;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABB8D0;
L_08ABB8D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB8DC */
rv_t func_08ABB8DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB8DC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB8E4 */
rv_t func_08ABB8E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB8E4:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB8EC */
rv_t func_08ABB8EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABB8EC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABB8F4 */
void func_08ABB8F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABB8F4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08ABB92C; }
    goto L_08ABB910;
L_08ABB910:;
    v0 = LD32(a0);
    goto L_08ABB914;
L_08ABB914:;
    cnd_ = v0 == a1;
    if (cnd_) { v1 = LD32(a0+8); goto L_08ABB938; }
    goto L_08ABB91C;
L_08ABB91C:;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08ABB914; }
    goto L_08ABB928;
L_08ABB928:;
    goto L_08ABB92C;
L_08ABB92C:;
    sp = sp + 16;
    return;
L_08ABB938:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08ABB988; }
    goto L_08ABB940;
L_08ABB940:;
    ST32(v1+4, v0);
    goto L_08ABB944;
L_08ABB944:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0, v1); goto L_08ABB954; }
    goto L_08ABB950;
L_08ABB950:;
    ST32(v0+8, v1);
    goto L_08ABB954;
L_08ABB954:;
    v0 = LD32(s0+12);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08ABB978; }
    goto L_08ABB960;
L_08ABB960:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABB968;
L_08ABB968:;
    v0 = LD32(s0+16);
    goto L_08ABB96C;
L_08ABB96C:;
    v0 = v0 - 1;
    ST32(s0+16, v0);
    goto L_08ABB928;
L_08ABB978:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABB980;
L_08ABB980:;
    v0 = LD32(s0+16);
    goto L_08ABB96C;
L_08ABB988:;
    ST32(s0+4, v0);
    v1 = LD32(a0+8);
    goto L_08ABB944;
}

/* 08ABB994 */
rv_t func_08ABB994(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABB994:;
    sp = sp - 16;
    s0 = LD32(a0);
    cnd_ = s0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08ABB9D4; }
    goto L_08ABB9B0;
L_08ABB9B0:;
    v1 = LD32(s1+12);
    goto L_08ABB9B4;
L_08ABB9B4:;
    v0 = s0 + 0;
    a0 = s0 + 0;
    cnd_ = v1 != 0;
    s0 = LD32(s0+8);
    if (cnd_) { goto L_08ABB9F4; }
    goto L_08ABB9C4;
L_08ABB9C4:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABB9CC;
L_08ABB9CC:;
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s1+12); goto L_08ABB9B4; }
    goto L_08ABB9D4;
L_08ABB9D4:;
    ST32(s1+16, 0);
    ST32(s1, 0);
    ST32(s1+4, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08ABB9F4:;
    t_ = v1;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABB9FC;
L_08ABB9FC:;
    goto L_08ABB9CC;
}

/* 08ABBA04 */
rv_t func_08ABBA04(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABBA04:;
    sp = sp - 16;
    v1 = 0 + 0;
    a1 = LD32(a0+4);
    cnd_ = a1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08ABBA60; }
    goto L_08ABBA24;
L_08ABBA24:;
    v1 = LD32(a1+4);
    cnd_ = v1 == 0;
    s1 = LD32(a1);
    if (cnd_) { goto L_08ABBA88; }
    goto L_08ABBA30;
L_08ABBA30:;
    v0 = LD32(a1+8);
    ST32(v1+8, v0);
    ST32(a0+4, v1);
    goto L_08ABBA3C;
L_08ABBA3C:;
    v0 = LD32(s0+12);
    cnd_ = v0 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08ABBA78; }
    goto L_08ABBA48;
L_08ABBA48:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABBA50;
L_08ABBA50:;
    v0 = LD32(s0+16);
    goto L_08ABBA54;
L_08ABBA54:;
    v1 = s1 + 0;
    v0 = v0 - 1;
    ST32(s0+16, v0);
    goto L_08ABBA60;
L_08ABBA60:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08ABBA78:;
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABBA80;
L_08ABBA80:;
    v0 = LD32(s0+16);
    goto L_08ABBA54;
L_08ABBA88:;
    ST32(a0, 0);
    ST32(a0+4, 0);
    goto L_08ABBA3C;
}

/* 08ABBA94 */
rv_t func_08ABBA94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABBA94:;
    v0 = D_08AF81A8 - (-32344);
    v0 = v0 - 32344;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABBAB0;
L_08ABBAB0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBABC */
rv_t func_08ABBABC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABBABC:;
    v0 = D_08AF81A8 - (-32344);
    v0 = v0 - 32344;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBACC */
rv_t func_08ABBACC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08ABBACC:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABBAE4;
L_08ABBAE4:;
    v1 = LD32(s0+8);
    a0 = LD32(s0+12);
    a2 = LD32(s0+4);
    ST32(sp, v1);
    v1 = D_08AF8130 - (-32464);
    v1 = v1 - 32464;
    ST32(sp+4, a0);
    ST32(v0, v1);
    ST32(v0+4, a2);
    v1 = LD32(sp);
    ST32(v0+8, v1);
    a0 = LD32(sp+4);
    ST32(v0+12, a0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBB28 */
rv_t func_08ABBB28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABBB28:;
    sp = sp - 16;
    a2 = a1 + 0;
    v1 = a0 + 0;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08ABBB6C; }
    goto L_08ABBB3C;
L_08ABBB3C:;
    a1 = LD32(a0+12);
    v1 = LD32(v1+4);
    a0 = LD32(a0+8);
    v0 = D_08AF8130 - (-32464);
    v0 = v0 - 32464;
    ST32(a2, v0);
    v0 = a2 + 0;
    ST32(a2+4, v1);
    ST32(a2+8, a0);
    ST32(a2+12, a1);
    ST32(sp, a0);
    ST32(sp+4, a1);
    goto L_08ABBB6C;
L_08ABBB6C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBB74 */
rv_t func_08ABBB74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABBB74:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBB7C */
rv_t func_08ABBB7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABBB7C:;
    sp = sp - 16;
    v0 = LD_U8(a0+12);
    v0 = v0 ^ 0x1;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a1 = LD32(a0+12);
    if (cnd_) { goto L_08ABBBB8; }
    goto L_08ABBB98;
L_08ABBB98:;
    a2 = LD32(a0+4);
    v0 = LD32(a0+8);
    goto L_08ABBBA0;
L_08ABBBA0:;
    a0 = (u32)((s32)a1 >> 1);
    t_ = v0;
    a0 = a2 + a0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABBBAC;
L_08ABBBAC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08ABBBB8:;
    a2 = LD32(a0+4);
    v0 = LD32(a0+8);
    v1 = (u32)((s32)a1 >> 1);
    v1 = a2 + v1;
    a0 = LD32(v1);
    a0 = a0 + v0;
    v0 = LD32(a0);
    goto L_08ABBBA0;
}

/* 08ABBBD8 */
rv_t func_08ABBBD8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABBBD8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBBE0 */
rv_t func_08ABBBE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABBBE0:;
    v0 = D_08AF81D0 - (-32304);
    v0 = v0 - 32304;
    ST32(a0, v0);
    sp = sp - 16;
    a0 = a0 + 12;
    { rv_t r_ = func_08ABBC44(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABBBFC;
L_08ABBBFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBC08 */
rv_t func_08ABBC08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABBC08:;
    v0 = D_08AF81D0 - (-32304);
    v0 = v0 - 32304;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 12;
    { rv_t r_ = func_08ABBC44(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABBC2C;
L_08ABBC2C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABBC34;
L_08ABBC34:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBC44 */
rv_t func_08ABBC44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABBC44:;
    sp = sp - 16;
    s0 = LD32(a0);
    cnd_ = s0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08ABBC84; }
    goto L_08ABBC60;
L_08ABBC60:;
    v1 = LD32(s1+12);
    goto L_08ABBC64;
L_08ABBC64:;
    v0 = s0 + 0;
    a0 = s0 + 0;
    cnd_ = v1 != 0;
    s0 = LD32(s0+8);
    if (cnd_) { goto L_08ABBCA4; }
    goto L_08ABBC74;
L_08ABBC74:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABBC7C;
L_08ABBC7C:;
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s1+12); goto L_08ABBC64; }
    goto L_08ABBC84;
L_08ABBC84:;
    ST32(s1+16, 0);
    ST32(s1, 0);
    ST32(s1+4, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08ABBCA4:;
    t_ = v1;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABBCAC;
L_08ABBCAC:;
    goto L_08ABBC7C;
}

/* 08ABBCB4 */
u64 func_08ABBCB4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08ABBCB4:;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v0+8); goto L_08ABBCD0; }
    goto L_08ABBCC0;
L_08ABBCC0:;
    v0 = LD32(a0);
    v1 = LD32(v0);
    ST32(a0+4, v1);
    return (u64)v0 | ((u64)v1 << 32);
L_08ABBCD0:;
    ST32(a0+4, v0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08ABBCD8 */
void func_08ABBCD8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABBCD8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08ABBD10; }
    goto L_08ABBCF4;
L_08ABBCF4:;
    v0 = LD32(a0);
    goto L_08ABBCF8;
L_08ABBCF8:;
    cnd_ = v0 == a1;
    if (cnd_) { v1 = LD32(a0+8); goto L_08ABBD1C; }
    goto L_08ABBD00;
L_08ABBD00:;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08ABBCF8; }
    goto L_08ABBD0C;
L_08ABBD0C:;
    goto L_08ABBD10;
L_08ABBD10:;
    sp = sp + 16;
    return;
L_08ABBD1C:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08ABBD6C; }
    goto L_08ABBD24;
L_08ABBD24:;
    ST32(v1+4, v0);
    goto L_08ABBD28;
L_08ABBD28:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0, v1); goto L_08ABBD38; }
    goto L_08ABBD34;
L_08ABBD34:;
    ST32(v0+8, v1);
    goto L_08ABBD38;
L_08ABBD38:;
    v0 = LD32(s0+12);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08ABBD5C; }
    goto L_08ABBD44;
L_08ABBD44:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABBD4C;
L_08ABBD4C:;
    v0 = LD32(s0+16);
    goto L_08ABBD50;
L_08ABBD50:;
    v0 = v0 - 1;
    ST32(s0+16, v0);
    goto L_08ABBD0C;
L_08ABBD5C:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABBD64;
L_08ABBD64:;
    v0 = LD32(s0+16);
    goto L_08ABBD50;
L_08ABBD6C:;
    ST32(s0+4, v0);
    v1 = LD32(a0+8);
    goto L_08ABBD28;
}

/* 08ABBD78 */
rv_t func_08ABBD78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABBD78:;
    v0 = D_08AF81F0 - (-32272);
    v0 = v0 - 32272;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBD88 */
rv_t func_08ABBD88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABBD88:;
    v0 = D_08AF81F0 - (-32272);
    v0 = v0 - 32272;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABBDA4;
L_08ABBDA4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBDB0 */
void func_08ABBDB0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08ABBDB0:;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v0+8); goto L_08ABBDCC; }
    goto L_08ABBDBC;
L_08ABBDBC:;
    v0 = LD32(a0);
    v1 = LD32(v0);
    ST32(a0+4, v1);
    return;
L_08ABBDCC:;
    ST32(a0+4, v0);
    return;
}

/* 08ABBDD4 */
rv_t func_08ABBDD4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABBDD4:;
    v0 = D_08AF8268 - (-32152);
    v0 = v0 - 32152;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBDE4 */
rv_t func_08ABBDE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABBDE4:;
    v0 = D_08AF8268 - (-32152);
    v0 = v0 - 32152;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABBE00;
L_08ABBE00:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBE0C */
rv_t func_08ABBE0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABBE0C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBE14 */
rv_t func_08ABBE14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABBE14:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBE1C */
rv_t func_08ABBE1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABBE1C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBE24 */
rv_t func_08ABBE24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABBE24:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBE2C */
rv_t func_08ABBE2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABBE2C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBE34 */
rv_t func_08ABBE34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABBE34:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBE3C */
rv_t func_08ABBE3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABBE3C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBE44 */
rv_t func_08ABBE44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABBE44:;
    v0 = D_08AF82C8 - (-32056);
    v0 = v0 - 32056;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBE54 */
rv_t func_08ABBE54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABBE54:;
    v0 = D_08AF82C8 - (-32056);
    v0 = v0 - 32056;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABBE70;
L_08ABBE70:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBE7C */
rv_t func_08ABBE7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABBE7C:;
    sp = sp - 16;
    s0 = LD32(a0);
    cnd_ = s0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08ABBEBC; }
    goto L_08ABBE98;
L_08ABBE98:;
    v1 = LD32(s1+12);
    goto L_08ABBE9C;
L_08ABBE9C:;
    v0 = s0 + 0;
    a0 = s0 + 0;
    cnd_ = v1 != 0;
    s0 = LD32(s0+8);
    if (cnd_) { goto L_08ABBEDC; }
    goto L_08ABBEAC;
L_08ABBEAC:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABBEB4;
L_08ABBEB4:;
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s1+12); goto L_08ABBE9C; }
    goto L_08ABBEBC;
L_08ABBEBC:;
    ST32(s1+16, 0);
    ST32(s1, 0);
    ST32(s1+4, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08ABBEDC:;
    t_ = v1;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABBEE4;
L_08ABBEE4:;
    goto L_08ABBEB4;
}

/* 08ABBEEC */
void func_08ABBEEC(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08ABBEEC:;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v0+8); goto L_08ABBF08; }
    goto L_08ABBEF8;
L_08ABBEF8:;
    v0 = LD32(a0);
    v1 = LD32(v0);
    ST32(a0+4, v1);
    return;
L_08ABBF08:;
    ST32(a0+4, v0);
    return;
}

/* 08ABBF10 */
void func_08ABBF10(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08ABBF10:;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v0+8); goto L_08ABBF2C; }
    goto L_08ABBF1C;
L_08ABBF1C:;
    v0 = LD32(a0);
    v1 = LD32(v0);
    ST32(a0+4, v1);
    return;
L_08ABBF2C:;
    ST32(a0+4, v0);
    return;
}

/* 08ABBF34 */
rv_t func_08ABBF34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABBF34:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBF3C */
rv_t func_08ABBF3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABBF3C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBF44 */
rv_t func_08ABBF44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABBF44:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBF4C */
rv_t func_08ABBF4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABBF4C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABBF54 */
u64 func_08ABBF54(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08ABBF54:;
    v0 = LD32(a0+8);
    cnd_ = v0 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_08ABBFB0; }
    goto L_08ABBF60;
L_08ABBF60:;
    a2 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a2+4);
    a0 = a2 + 0;
    goto L_08ABBF70;
L_08ABBF70:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABBFA8; }
    goto L_08ABBF7C;
L_08ABBF7C:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 != 0;
    ST32(a1+8, a0);
    if (cnd_) { goto L_08ABBFA8; }
    goto L_08ABBF90;
L_08ABBF90:;
    v1 = LD32(a1+4);
    a0 = a2 + 0;
    v1 = v1 + 1;
    ST32(a1+4, v1);
    v0 = LD32(a2+4);
    goto L_08ABBF70;
L_08ABBFA8:;
    return (u64)v0 | ((u64)v1 << 32);
L_08ABBFB0:;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08ABBFA8; }
    goto L_08ABBFBC;
L_08ABBFBC:;
    a2 = LD32(a0);
    goto L_08ABBF90;
}

/* 08ABBFC4 */
void func_08ABBFC4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABBFC4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08ABC018; }
    goto L_08ABBFFC;
L_08ABBFFC:;
    v0 = LD32(a0);
    goto L_08ABC000;
L_08ABC000:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08ABC02C; }
    goto L_08ABC008;
L_08ABC008:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08ABC000; }
    goto L_08ABC018;
L_08ABC018:;
    v0 = 0 + 0;
    goto L_08ABC01C;
L_08ABC01C:;
    sp = sp + 16;
    return;
L_08ABC02C:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08ABC040; }
    goto L_08ABC034;
L_08ABC034:;
    ST8(a0+8, v0);
    goto L_08ABC038;
L_08ABC038:;
    v0 = 1;
    goto L_08ABC01C;
L_08ABC040:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08ABC064; }
    goto L_08ABC048;
L_08ABC048:;
    ST32(a2+4, v0);
    goto L_08ABC04C;
L_08ABC04C:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABC054;
L_08ABC054:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08ABC038;
L_08ABC064:;
    ST32(v1, v0);
    goto L_08ABC04C;
}

/* 08ABC06C */
rv_t func_08ABC06C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABC06C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABC074 */
float func_08ABC074(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08ABC074:;
    sp = sp - 32;
    s5 = 0 + 0;
    s2 = a0 + 0;
    s0 = LD32(a0+4);
    cnd_ = s0 == 0;
    ST32(a0+4, 0);
    if (cnd_) { goto L_08ABC108; }
    goto L_08ABC0A8;
L_08ABC0A8:;
    v0 = LD32(s0);
    s1 = LD_U16(v0+8);
    cnd_ = s1 == 0;
    s4 = LD32(s0+4);
    if (cnd_) { goto L_08ABC1A4; }
    goto L_08ABC0B8;
L_08ABC0B8:;
    v1 = LD32(s2);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08ABC0D4; }
    goto L_08ABC0C4;
L_08ABC0C4:;
    v0 = LD32(v1);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08ABC12C; }
    goto L_08ABC0D4;
L_08ABC0D4:;
    { rv_t r_ = func_08831FE8(t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABC0DC;
L_08ABC0DC:;
    v1 = v0 + 0;
    v0 = LD32(s2);
    ST32(v1, s1);
    ST32(v1+4, v0);
    ST32(v1+8, 0);
    ST32(s2, v1);
    goto L_08ABC0F4;
L_08ABC0F4:;
    v0 = LD32(v1+8);
    goto L_08ABC0F8;
L_08ABC0F8:;
    ST32(s0+4, v0);
    ST32(v1+8, s0);
    goto L_08ABC100;
L_08ABC100:;
    cnd_ = s4 != 0;
    s0 = s4 + 0;
    if (cnd_) { goto L_08ABC0A8; }
    goto L_08ABC108;
L_08ABC108:;
    sp = sp + 32;
    return f0;
L_08ABC12C:;
    v0 = LD32(v1);
    goto L_08ABC130;
L_08ABC130:;
    v0 = v0 < s1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABC184; }
    goto L_08ABC13C;
L_08ABC13C:;
    s3 = v1 + 0;
    v1 = LD32(v1+4);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08ABC130; }
    goto L_08ABC14C;
L_08ABC14C:;
    { rv_t r_ = func_08831FE8(t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABC154;
L_08ABC154:;
    v1 = v0 + 0;
    cnd_ = s3 == 0;
    ST32(v0+8, 0);
    if (cnd_) { goto L_08ABC174; }
    goto L_08ABC160;
L_08ABC160:;
    v0 = LD32(s3+4);
    ST32(v1+4, v0);
    ST32(s3+4, v1);
    goto L_08ABC16C;
L_08ABC16C:;
    ST32(v1, s1);
    goto L_08ABC0F4;
L_08ABC174:;
    v0 = LD32(s2);
    ST32(v1+4, v0);
    ST32(s2, v1);
    goto L_08ABC16C;
L_08ABC184:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08ABC14C; }
    goto L_08ABC18C;
L_08ABC18C:;
    v0 = LD32(v1);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08ABC0F8; }
    goto L_08ABC19C;
L_08ABC19C:;
    goto L_08ABC14C;
L_08ABC1A4:;
    cnd_ = s5 == 0;
    if (cnd_) { ST32(s2+4, s0); goto L_08ABC1B0; }
    goto L_08ABC1AC;
L_08ABC1AC:;
    ST32(s5+4, s0);
    goto L_08ABC1B0;
L_08ABC1B0:;
    s5 = s0 + 0;
    goto L_08ABC100;
}

/* 08ABC1B8 */
u64 func_08ABC1B8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08ABC1B8:;
    sp = sp - 32;
    s4 = a0 + 0;
    s2 = LD32(a0);
    cnd_ = s2 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08ABC23C; }
    goto L_08ABC1E4;
L_08ABC1E4:;
    v0 = LD32(s2+8);
    goto L_08ABC1E8;
L_08ABC1E8:;
    s1 = 0 + 0;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08ABC25C; }
    goto L_08ABC1F4;
L_08ABC1F4:;
    v0 = LD_U8(s0+8);
    goto L_08ABC1F8;
L_08ABC1F8:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s0 + 0; goto L_08ABC28C; }
    goto L_08ABC200;
L_08ABC200:;
    cnd_ = s1 == 0;
    v0 = LD32(s0+4);
    if (cnd_) { goto L_08ABC284; }
    goto L_08ABC208;
L_08ABC208:;
    ST32(s1+4, v0);
    goto L_08ABC20C;
L_08ABC20C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08832050(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABC218;
L_08ABC218:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08ABC1F8; }
    goto L_08ABC220;
L_08ABC220:;
    v0 = LD32(s2+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABC25C; }
    goto L_08ABC22C;
L_08ABC22C:;
    s3 = s2 + 0;
    s2 = LD32(s2+4);
    goto L_08ABC234;
L_08ABC234:;
    cnd_ = s2 != 0;
    if (cnd_) { v0 = LD32(s2+8); goto L_08ABC1E8; }
    goto L_08ABC23C;
L_08ABC23C:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08ABC25C:;
    cnd_ = s3 == 0;
    v0 = LD32(s2+4);
    if (cnd_) { goto L_08ABC27C; }
    goto L_08ABC264;
L_08ABC264:;
    ST32(s3+4, v0);
    goto L_08ABC268;
L_08ABC268:;
    a0 = s2 + 0;
    s2 = LD32(s2+4);
    { u64 r_ = func_08832008(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABC274;
L_08ABC274:;
    goto L_08ABC234;
L_08ABC27C:;
    ST32(s4, v0);
    goto L_08ABC268;
L_08ABC284:;
    ST32(s2+8, v0);
    goto L_08ABC20C;
L_08ABC28C:;
    s0 = LD32(s0+4);
    goto L_08ABC218;
}

/* 08ABC294 */
u64 func_08ABC294(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABC294:;
    a3 = LD32(a0+8);
    a2 = a0 + 0;
    cnd_ = a3 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABC308; }
    goto L_08ABC2A4;
L_08ABC2A4:;
    a3 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABC2B4;
L_08ABC2B4:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABC330; }
    goto L_08ABC2C0;
L_08ABC2C0:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABC318; }
    goto L_08ABC2D4;
L_08ABC2D4:;
    cnd_ = a1 != 0;
    a3 = LD32(a2+8);
    if (cnd_) { goto L_08ABC2FC; }
    goto L_08ABC2DC;
L_08ABC2DC:;
    v1 = LD32(a3);
    v0 = LD32(v1);
    a0 = LD32(v0-16);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a3+4); goto L_08ABC30C; }
    goto L_08ABC2FC;
L_08ABC2FC:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABC330; }
    goto L_08ABC308;
L_08ABC308:;
    v0 = LD32(a3+4);
    goto L_08ABC30C;
L_08ABC30C:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABC2D4; }
    goto L_08ABC314;
L_08ABC314:;
    a3 = LD32(a2);
    goto L_08ABC318;
L_08ABC318:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABC2B4;
L_08ABC330:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08ABC338 */
u32 func_08ABC338(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08ABC338:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABC36C; }
    goto L_08ABC344;
L_08ABC344:;
    v0 = LD32(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08ABC374; }
    goto L_08ABC350;
L_08ABC350:;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08ABC36C; }
    goto L_08ABC35C;
L_08ABC35C:;
    v0 = LD32(a0+4);
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    ST32(a0+4, v1);
    if (cnd_) { goto L_08ABC344; }
    goto L_08ABC36C;
L_08ABC36C:;
    return v0;
L_08ABC374:;
    v1 = LD32(v0+8);
    ST32(a0+8, v1);
    return v0;
}

/* 08ABC380 */
u64 func_08ABC380(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08ABC380:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08ABC414; }
    goto L_08ABC3AC;
L_08ABC3AC:;
    v0 = LD32(s1);
    goto L_08ABC3B0;
L_08ABC3B0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08ABC404; }
    goto L_08ABC3C4;
L_08ABC3C4:;
    v0 = LD_U8(s0+8);
    goto L_08ABC3C8;
L_08ABC3C8:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08ABC444; }
    goto L_08ABC3D0;
L_08ABC3D0:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABC434; }
    goto L_08ABC3D8;
L_08ABC3D8:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08ABC3E0;
L_08ABC3E0:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABC3EC;
L_08ABC3EC:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08ABC3F8;
L_08ABC3F8:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08ABC3C8; }
    goto L_08ABC400;
L_08ABC400:;
    v1 = LD32(s1+4);
    goto L_08ABC404;
L_08ABC404:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABC3B0; }
    goto L_08ABC414;
L_08ABC414:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08ABC434:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08ABC3E0;
L_08ABC444:;
    s0 = LD32(s0+4);
    goto L_08ABC3F8;
}

/* 08ABC44C */
u64 func_08ABC44C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABC44C:;
    a3 = LD32(a0+8);
    a2 = a0 + 0;
    cnd_ = a3 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABC4C0; }
    goto L_08ABC45C;
L_08ABC45C:;
    a3 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABC46C;
L_08ABC46C:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABC4E8; }
    goto L_08ABC478;
L_08ABC478:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABC4D0; }
    goto L_08ABC48C;
L_08ABC48C:;
    cnd_ = a1 != 0;
    a3 = LD32(a2+8);
    if (cnd_) { goto L_08ABC4B4; }
    goto L_08ABC494;
L_08ABC494:;
    v1 = LD32(a3);
    v0 = LD32(v1);
    a0 = LD32(v0-16);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a3+4); goto L_08ABC4C4; }
    goto L_08ABC4B4;
L_08ABC4B4:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABC4E8; }
    goto L_08ABC4C0;
L_08ABC4C0:;
    v0 = LD32(a3+4);
    goto L_08ABC4C4;
L_08ABC4C4:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABC48C; }
    goto L_08ABC4CC;
L_08ABC4CC:;
    a3 = LD32(a2);
    goto L_08ABC4D0;
L_08ABC4D0:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABC46C;
L_08ABC4E8:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08ABC4F0 */
u64 func_08ABC4F0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08ABC4F0:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08ABC584; }
    goto L_08ABC51C;
L_08ABC51C:;
    v0 = LD32(s1);
    goto L_08ABC520;
L_08ABC520:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08ABC574; }
    goto L_08ABC534;
L_08ABC534:;
    v0 = LD_U8(s0+8);
    goto L_08ABC538;
L_08ABC538:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08ABC5B4; }
    goto L_08ABC540;
L_08ABC540:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABC5A4; }
    goto L_08ABC548;
L_08ABC548:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08ABC550;
L_08ABC550:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABC55C;
L_08ABC55C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08ABC568;
L_08ABC568:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08ABC538; }
    goto L_08ABC570;
L_08ABC570:;
    v1 = LD32(s1+4);
    goto L_08ABC574;
L_08ABC574:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABC520; }
    goto L_08ABC584;
L_08ABC584:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08ABC5A4:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08ABC550;
L_08ABC5B4:;
    s0 = LD32(s0+4);
    goto L_08ABC568;
}

/* 08ABC5BC */
u64 func_08ABC5BC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABC5BC:;
    a3 = LD32(a0+8);
    a2 = a0 + 0;
    cnd_ = a3 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABC630; }
    goto L_08ABC5CC;
L_08ABC5CC:;
    a3 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABC5DC;
L_08ABC5DC:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABC658; }
    goto L_08ABC5E8;
L_08ABC5E8:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABC640; }
    goto L_08ABC5FC;
L_08ABC5FC:;
    cnd_ = a1 != 0;
    a3 = LD32(a2+8);
    if (cnd_) { goto L_08ABC624; }
    goto L_08ABC604;
L_08ABC604:;
    v1 = LD32(a3);
    v0 = LD32(v1);
    a0 = LD32(v0-16);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a3+4); goto L_08ABC634; }
    goto L_08ABC624;
L_08ABC624:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABC658; }
    goto L_08ABC630;
L_08ABC630:;
    v0 = LD32(a3+4);
    goto L_08ABC634;
L_08ABC634:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABC5FC; }
    goto L_08ABC63C;
L_08ABC63C:;
    a3 = LD32(a2);
    goto L_08ABC640;
L_08ABC640:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABC5DC;
L_08ABC658:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08ABC660 */
void func_08ABC660(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABC660:;
    a2 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABC6C8; }
    goto L_08ABC670;
L_08ABC670:;
    a3 = LD32(a2);
    v1 = LD32(a2+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABC680;
L_08ABC680:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABC6F0; }
    goto L_08ABC68C;
L_08ABC68C:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABC6D8; }
    goto L_08ABC6A0;
L_08ABC6A0:;
    cnd_ = a1 != 0;
    a0 = LD32(a2+8);
    if (cnd_) { goto L_08ABC6BC; }
    goto L_08ABC6A8;
L_08ABC6A8:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08ABC6CC; }
    goto L_08ABC6BC;
L_08ABC6BC:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABC6F0; }
    goto L_08ABC6C8;
L_08ABC6C8:;
    v0 = LD32(a0+4);
    goto L_08ABC6CC;
L_08ABC6CC:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABC6A0; }
    goto L_08ABC6D4;
L_08ABC6D4:;
    a3 = LD32(a2);
    goto L_08ABC6D8;
L_08ABC6D8:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABC680;
L_08ABC6F0:;
    return;
}

/* 08ABC6F8 */
u32 func_08ABC6F8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08ABC6F8:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08ABC758; }
    goto L_08ABC708;
L_08ABC708:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08ABC758; }
    goto L_08ABC72C;
L_08ABC72C:;
    a3 = LD32(a0);
    goto L_08ABC730;
L_08ABC730:;
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    v1 = a3 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08ABC760; }
    goto L_08ABC748;
L_08ABC748:;
    a0 = LD32(a0+4);
    goto L_08ABC74C;
L_08ABC74C:;
    cnd_ = a0 != 0;
    if (cnd_) { a3 = LD32(a0); goto L_08ABC730; }
    goto L_08ABC754;
L_08ABC754:;
    a3 = 0 + 0;
    goto L_08ABC758;
L_08ABC758:;
    v0 = a3 + 0;
    return v0;
L_08ABC760:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(a0+8); goto L_08ABC77C; }
    goto L_08ABC768;
L_08ABC768:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08ABC74C; }
    goto L_08ABC778;
L_08ABC778:;
    v0 = LD_U8(a0+8);
    goto L_08ABC77C;
L_08ABC77C:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08ABC74C; }
    goto L_08ABC784;
L_08ABC784:;
    goto L_08ABC758;
}

/* 08ABC78C */
float func_08ABC78C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_08ABC78C:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08ABC7D8; }
    goto L_08ABC794;
L_08ABC794:;
    v0 = LD32(a0+76);
    cnd_ = v0 == a1;
    v1 = a0 + 64;
    if (cnd_) { goto L_08ABC7A4; }
    goto L_08ABC7A0;
L_08ABC7A0:;
    ST32(a0+76, a1);
    goto L_08ABC7A4;
L_08ABC7A4:;
    v0 = LD32(a0+60);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = 999; goto L_08ABC7D0; }
    goto L_08ABC7B0;
L_08ABC7B0:;
    f0 = BITSF(LD32(a3+8));
    f1 = BITSF(LD32(a3));
    f2 = BITSF(LD32(a3+4));
    ST32(a0+60, a2);
    ST32(a0+64, FBITS(f1));
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f2));
    return f0;
L_08ABC7D0:;
    cnd_ = a2 == v0;
    v1 = a0 + 64;
    if (cnd_) { goto L_08ABC7E0; }
    goto L_08ABC7D8;
L_08ABC7D8:;
    return f0;
L_08ABC7E0:;
    f0 = BITSF(LD32(a3+8));
    f1 = BITSF(LD32(a3));
    f2 = BITSF(LD32(a3+4));
    ST32(v1+8, FBITS(f0));
    ST32(a0+64, FBITS(f1));
    ST32(v1+4, FBITS(f2));
    return f0;
}

/* 08ABC7FC */
rv_t func_08ABC7FC(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
L_08ABC7FC:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08ABC874; }
    goto L_08ABC804;
L_08ABC804:;
    v0 = LD32(a0+168);
    v1 = LD32(a0+180);
    v0 = a2 + v0;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08ABC85C; }
    goto L_08ABC81C;
L_08ABC81C:;
    f0 = BITSF(a2);
    cnd_ = (s32)a2 < 0;
    f2 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08ABC8BC; }
    goto L_08ABC828;
L_08ABC828:;
    f0 = BITSF(a2);
    cnd_ = (s32)a2 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08ABC8A0; }
    goto L_08ABC834;
L_08ABC834:;
    f3 = BITSF(a3);
    cnd_ = (s32)a3 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08ABC884; }
    goto L_08ABC840;
L_08ABC840:;
    f0 = f1 + f0;
    f1 = BITSF(LD32(a0+68));
    f0 = f2 / f0;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08ABC860; }
    goto L_08ABC85C;
L_08ABC85C:;
    t0 = 1;
    goto L_08ABC860;
L_08ABC860:;
    cnd_ = t0 == 0;
    v0 = D_08AD9BA4 - (-25692);
    if (cnd_) { goto L_08ABC87C; }
    goto L_08ABC868;
L_08ABC868:;
    v0 = D_08AD9BA0 - (-25696);
    v0 = LD32(v0-25696);
    goto L_08ABC870;
L_08ABC870:;
    ST32(a1+244, v0);
    goto L_08ABC874;
L_08ABC874:;
    return (rv_t){ v0, v1, f0 };
L_08ABC87C:;
    v0 = LD32(v0-25692);
    goto L_08ABC870;
L_08ABC884:;
    v1 = a3 >> 1;
    v0 = a3 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08ABC840;
L_08ABC8A0:;
    v1 = a2 >> 1;
    v0 = a2 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f1 = (float)(s32)FBITS(f3);
    f1 = f1 + f1;
    goto L_08ABC834;
L_08ABC8BC:;
    v0 = a2 & 0x1;
    v1 = a2 >> 1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f2 = (float)(s32)FBITS(f3);
    f2 = f2 + f2;
    goto L_08ABC828;
}

/* 08ABC8D8 */
void func_08ABC8D8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABC8D8:;
    a3 = LD32(a0+8);
    a2 = a0 + 0;
    cnd_ = a3 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABC94C; }
    goto L_08ABC8E8;
L_08ABC8E8:;
    a3 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABC8F8;
L_08ABC8F8:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABC974; }
    goto L_08ABC904;
L_08ABC904:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABC95C; }
    goto L_08ABC918;
L_08ABC918:;
    cnd_ = a1 != 0;
    a3 = LD32(a2+8);
    if (cnd_) { goto L_08ABC940; }
    goto L_08ABC920;
L_08ABC920:;
    v1 = LD32(a3);
    v0 = LD32(v1);
    a0 = LD32(v0-16);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a3+4); goto L_08ABC950; }
    goto L_08ABC940;
L_08ABC940:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABC974; }
    goto L_08ABC94C;
L_08ABC94C:;
    v0 = LD32(a3+4);
    goto L_08ABC950;
L_08ABC950:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABC918; }
    goto L_08ABC958;
L_08ABC958:;
    a3 = LD32(a2);
    goto L_08ABC95C;
L_08ABC95C:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABC8F8;
L_08ABC974:;
    return;
}

/* 08ABC97C */
u64 func_08ABC97C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABC97C:;
    a2 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABC9E4; }
    goto L_08ABC98C;
L_08ABC98C:;
    a3 = LD32(a2);
    v1 = LD32(a2+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABC99C;
L_08ABC99C:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABCA0C; }
    goto L_08ABC9A8;
L_08ABC9A8:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABC9F4; }
    goto L_08ABC9BC;
L_08ABC9BC:;
    cnd_ = a1 != 0;
    a0 = LD32(a2+8);
    if (cnd_) { goto L_08ABC9D8; }
    goto L_08ABC9C4;
L_08ABC9C4:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08ABC9E8; }
    goto L_08ABC9D8;
L_08ABC9D8:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABCA0C; }
    goto L_08ABC9E4;
L_08ABC9E4:;
    v0 = LD32(a0+4);
    goto L_08ABC9E8;
L_08ABC9E8:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABC9BC; }
    goto L_08ABC9F0;
L_08ABC9F0:;
    a3 = LD32(a2);
    goto L_08ABC9F4;
L_08ABC9F4:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABC99C;
L_08ABCA0C:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08ABCA14 */
u64 func_08ABCA14(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08ABCA14:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08ABCA74; }
    goto L_08ABCA24;
L_08ABCA24:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08ABCA74; }
    goto L_08ABCA48;
L_08ABCA48:;
    a3 = LD32(a0);
    goto L_08ABCA4C;
L_08ABCA4C:;
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    v1 = a3 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08ABCA7C; }
    goto L_08ABCA64;
L_08ABCA64:;
    a0 = LD32(a0+4);
    goto L_08ABCA68;
L_08ABCA68:;
    cnd_ = a0 != 0;
    if (cnd_) { a3 = LD32(a0); goto L_08ABCA4C; }
    goto L_08ABCA70;
L_08ABCA70:;
    a3 = 0 + 0;
    goto L_08ABCA74;
L_08ABCA74:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08ABCA7C:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(a0+8); goto L_08ABCA98; }
    goto L_08ABCA84;
L_08ABCA84:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08ABCA68; }
    goto L_08ABCA94;
L_08ABCA94:;
    v0 = LD_U8(a0+8);
    goto L_08ABCA98;
L_08ABCA98:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08ABCA68; }
    goto L_08ABCAA0;
L_08ABCAA0:;
    goto L_08ABCA74;
}

/* 08ABCAA8 */
u64 func_08ABCAA8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08ABCAA8:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08ABCB3C; }
    goto L_08ABCAD4;
L_08ABCAD4:;
    v0 = LD32(s1);
    goto L_08ABCAD8;
L_08ABCAD8:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08ABCB2C; }
    goto L_08ABCAEC;
L_08ABCAEC:;
    v0 = LD_U8(s0+8);
    goto L_08ABCAF0;
L_08ABCAF0:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08ABCB6C; }
    goto L_08ABCAF8;
L_08ABCAF8:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABCB5C; }
    goto L_08ABCB00;
L_08ABCB00:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08ABCB08;
L_08ABCB08:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABCB14;
L_08ABCB14:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08ABCB20;
L_08ABCB20:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08ABCAF0; }
    goto L_08ABCB28;
L_08ABCB28:;
    v1 = LD32(s1+4);
    goto L_08ABCB2C;
L_08ABCB2C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABCAD8; }
    goto L_08ABCB3C;
L_08ABCB3C:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08ABCB5C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08ABCB08;
L_08ABCB6C:;
    s0 = LD32(s0+4);
    goto L_08ABCB20;
}

/* 08ABCB74 */
u64 func_08ABCB74(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABCB74:;
    a3 = LD32(a0+8);
    a2 = a0 + 0;
    cnd_ = a3 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABCBE8; }
    goto L_08ABCB84;
L_08ABCB84:;
    a3 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABCB94;
L_08ABCB94:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABCC10; }
    goto L_08ABCBA0;
L_08ABCBA0:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABCBF8; }
    goto L_08ABCBB4;
L_08ABCBB4:;
    cnd_ = a1 != 0;
    a3 = LD32(a2+8);
    if (cnd_) { goto L_08ABCBDC; }
    goto L_08ABCBBC;
L_08ABCBBC:;
    v1 = LD32(a3);
    v0 = LD32(v1);
    a0 = LD32(v0-16);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a3+4); goto L_08ABCBEC; }
    goto L_08ABCBDC;
L_08ABCBDC:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABCC10; }
    goto L_08ABCBE8;
L_08ABCBE8:;
    v0 = LD32(a3+4);
    goto L_08ABCBEC;
L_08ABCBEC:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABCBB4; }
    goto L_08ABCBF4;
L_08ABCBF4:;
    a3 = LD32(a2);
    goto L_08ABCBF8;
L_08ABCBF8:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABCB94;
L_08ABCC10:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08ABCC18 */
void func_08ABCC18(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABCC18:;
    a3 = LD32(a0+8);
    a2 = a0 + 0;
    cnd_ = a3 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABCC8C; }
    goto L_08ABCC28;
L_08ABCC28:;
    a3 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABCC38;
L_08ABCC38:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABCCB4; }
    goto L_08ABCC44;
L_08ABCC44:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABCC9C; }
    goto L_08ABCC58;
L_08ABCC58:;
    cnd_ = a1 != 0;
    a3 = LD32(a2+8);
    if (cnd_) { goto L_08ABCC80; }
    goto L_08ABCC60;
L_08ABCC60:;
    v1 = LD32(a3);
    v0 = LD32(v1);
    a0 = LD32(v0-16);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a3+4); goto L_08ABCC90; }
    goto L_08ABCC80;
L_08ABCC80:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABCCB4; }
    goto L_08ABCC8C;
L_08ABCC8C:;
    v0 = LD32(a3+4);
    goto L_08ABCC90;
L_08ABCC90:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABCC58; }
    goto L_08ABCC98;
L_08ABCC98:;
    a3 = LD32(a2);
    goto L_08ABCC9C;
L_08ABCC9C:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABCC38;
L_08ABCCB4:;
    return;
}

/* 08ABCCBC */
u64 func_08ABCCBC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08ABCCBC:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08ABCD50; }
    goto L_08ABCCE8;
L_08ABCCE8:;
    v0 = LD32(s1);
    goto L_08ABCCEC;
L_08ABCCEC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08ABCD40; }
    goto L_08ABCD00;
L_08ABCD00:;
    v0 = LD_U8(s0+8);
    goto L_08ABCD04;
L_08ABCD04:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08ABCD80; }
    goto L_08ABCD0C;
L_08ABCD0C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABCD70; }
    goto L_08ABCD14;
L_08ABCD14:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08ABCD1C;
L_08ABCD1C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABCD28;
L_08ABCD28:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08ABCD34;
L_08ABCD34:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08ABCD04; }
    goto L_08ABCD3C;
L_08ABCD3C:;
    v1 = LD32(s1+4);
    goto L_08ABCD40;
L_08ABCD40:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABCCEC; }
    goto L_08ABCD50;
L_08ABCD50:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08ABCD70:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08ABCD1C;
L_08ABCD80:;
    s0 = LD32(s0+4);
    goto L_08ABCD34;
}

/* 08ABCD88 */
u64 func_08ABCD88(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABCD88:;
    a2 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABCDF0; }
    goto L_08ABCD98;
L_08ABCD98:;
    a3 = LD32(a2);
    v1 = LD32(a2+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABCDA8;
L_08ABCDA8:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABCE18; }
    goto L_08ABCDB4;
L_08ABCDB4:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABCE00; }
    goto L_08ABCDC8;
L_08ABCDC8:;
    cnd_ = a1 != 0;
    a0 = LD32(a2+8);
    if (cnd_) { goto L_08ABCDE4; }
    goto L_08ABCDD0;
L_08ABCDD0:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08ABCDF4; }
    goto L_08ABCDE4;
L_08ABCDE4:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABCE18; }
    goto L_08ABCDF0;
L_08ABCDF0:;
    v0 = LD32(a0+4);
    goto L_08ABCDF4;
L_08ABCDF4:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABCDC8; }
    goto L_08ABCDFC;
L_08ABCDFC:;
    a3 = LD32(a2);
    goto L_08ABCE00;
L_08ABCE00:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABCDA8;
L_08ABCE18:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08ABCE20 */
void func_08ABCE20(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABCE20:;
    a2 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABCE88; }
    goto L_08ABCE30;
L_08ABCE30:;
    a3 = LD32(a2);
    v1 = LD32(a2+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABCE40;
L_08ABCE40:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABCEB0; }
    goto L_08ABCE4C;
L_08ABCE4C:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABCE98; }
    goto L_08ABCE60;
L_08ABCE60:;
    cnd_ = a1 != 0;
    a0 = LD32(a2+8);
    if (cnd_) { goto L_08ABCE7C; }
    goto L_08ABCE68;
L_08ABCE68:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08ABCE8C; }
    goto L_08ABCE7C;
L_08ABCE7C:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABCEB0; }
    goto L_08ABCE88;
L_08ABCE88:;
    v0 = LD32(a0+4);
    goto L_08ABCE8C;
L_08ABCE8C:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABCE60; }
    goto L_08ABCE94;
L_08ABCE94:;
    a3 = LD32(a2);
    goto L_08ABCE98;
L_08ABCE98:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABCE40;
L_08ABCEB0:;
    return;
}

/* 08ABCEB8 */
void func_08ABCEB8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABCEB8:;
    a2 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABCF20; }
    goto L_08ABCEC8;
L_08ABCEC8:;
    a3 = LD32(a2);
    v1 = LD32(a2+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABCED8;
L_08ABCED8:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABCF48; }
    goto L_08ABCEE4;
L_08ABCEE4:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABCF30; }
    goto L_08ABCEF8;
L_08ABCEF8:;
    cnd_ = a1 != 0;
    a0 = LD32(a2+8);
    if (cnd_) { goto L_08ABCF14; }
    goto L_08ABCF00;
L_08ABCF00:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08ABCF24; }
    goto L_08ABCF14;
L_08ABCF14:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABCF48; }
    goto L_08ABCF20;
L_08ABCF20:;
    v0 = LD32(a0+4);
    goto L_08ABCF24;
L_08ABCF24:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABCEF8; }
    goto L_08ABCF2C;
L_08ABCF2C:;
    a3 = LD32(a2);
    goto L_08ABCF30;
L_08ABCF30:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABCED8;
L_08ABCF48:;
    return;
}

/* 08ABCF50 */
u64 func_08ABCF50(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABCF50:;
    a2 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABCFB8; }
    goto L_08ABCF60;
L_08ABCF60:;
    a3 = LD32(a2);
    v1 = LD32(a2+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABCF70;
L_08ABCF70:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABCFE0; }
    goto L_08ABCF7C;
L_08ABCF7C:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABCFC8; }
    goto L_08ABCF90;
L_08ABCF90:;
    cnd_ = a1 != 0;
    a0 = LD32(a2+8);
    if (cnd_) { goto L_08ABCFAC; }
    goto L_08ABCF98;
L_08ABCF98:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08ABCFBC; }
    goto L_08ABCFAC;
L_08ABCFAC:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABCFE0; }
    goto L_08ABCFB8;
L_08ABCFB8:;
    v0 = LD32(a0+4);
    goto L_08ABCFBC;
L_08ABCFBC:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABCF90; }
    goto L_08ABCFC4;
L_08ABCFC4:;
    a3 = LD32(a2);
    goto L_08ABCFC8;
L_08ABCFC8:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABCF70;
L_08ABCFE0:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08ABCFE8 */
u64 func_08ABCFE8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08ABCFE8:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08ABD07C; }
    goto L_08ABD014;
L_08ABD014:;
    v0 = LD32(s1);
    goto L_08ABD018;
L_08ABD018:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08ABD06C; }
    goto L_08ABD02C;
L_08ABD02C:;
    v0 = LD_U8(s0+8);
    goto L_08ABD030;
L_08ABD030:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08ABD0AC; }
    goto L_08ABD038;
L_08ABD038:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABD09C; }
    goto L_08ABD040;
L_08ABD040:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08ABD048;
L_08ABD048:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABD054;
L_08ABD054:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08ABD060;
L_08ABD060:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08ABD030; }
    goto L_08ABD068;
L_08ABD068:;
    v1 = LD32(s1+4);
    goto L_08ABD06C;
L_08ABD06C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABD018; }
    goto L_08ABD07C;
L_08ABD07C:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08ABD09C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08ABD048;
L_08ABD0AC:;
    s0 = LD32(s0+4);
    goto L_08ABD060;
}

/* 08ABD0B4 */
rv_t func_08ABD0B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABD0B4:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABD0BC */
u32 func_08ABD0BC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08ABD0BC:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08ABD110; }
    goto L_08ABD0CC;
L_08ABD0CC:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08ABD110; }
    goto L_08ABD0F0;
L_08ABD0F0:;
    a0 = LD32(v1);
    goto L_08ABD0F4;
L_08ABD0F4:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08ABD118; }
    goto L_08ABD100;
L_08ABD100:;
    v1 = LD32(v1+4);
    goto L_08ABD104;
L_08ABD104:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_08ABD0F4; }
    goto L_08ABD10C;
L_08ABD10C:;
    a3 = 0 + 0;
    goto L_08ABD110;
L_08ABD110:;
    v0 = a3 + 0;
    return v0;
L_08ABD118:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(v1+8); goto L_08ABD134; }
    goto L_08ABD120;
L_08ABD120:;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08ABD104; }
    goto L_08ABD130;
L_08ABD130:;
    v0 = LD_U8(v1+8);
    goto L_08ABD134;
L_08ABD134:;
    cnd_ = v0 != 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_08ABD100; }
    goto L_08ABD13C;
L_08ABD13C:;
    goto L_08ABD110;
}

/* 08ABD144 */
void func_08ABD144(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABD144:;
    a2 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABD1AC; }
    goto L_08ABD154;
L_08ABD154:;
    a3 = LD32(a2);
    v1 = LD32(a2+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABD164;
L_08ABD164:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABD1D4; }
    goto L_08ABD170;
L_08ABD170:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABD1BC; }
    goto L_08ABD184;
L_08ABD184:;
    cnd_ = a1 != 0;
    a0 = LD32(a2+8);
    if (cnd_) { goto L_08ABD1A0; }
    goto L_08ABD18C;
L_08ABD18C:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08ABD1B0; }
    goto L_08ABD1A0;
L_08ABD1A0:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABD1D4; }
    goto L_08ABD1AC;
L_08ABD1AC:;
    v0 = LD32(a0+4);
    goto L_08ABD1B0;
L_08ABD1B0:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABD184; }
    goto L_08ABD1B8;
L_08ABD1B8:;
    a3 = LD32(a2);
    goto L_08ABD1BC;
L_08ABD1BC:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABD164;
L_08ABD1D4:;
    return;
}

/* 08ABD1DC */
void func_08ABD1DC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08ABD1DC:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08ABD270; }
    goto L_08ABD208;
L_08ABD208:;
    v0 = LD32(s1);
    goto L_08ABD20C;
L_08ABD20C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08ABD260; }
    goto L_08ABD220;
L_08ABD220:;
    v0 = LD_U8(s0+8);
    goto L_08ABD224;
L_08ABD224:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08ABD2A0; }
    goto L_08ABD22C;
L_08ABD22C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABD290; }
    goto L_08ABD234;
L_08ABD234:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08ABD23C;
L_08ABD23C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABD248;
L_08ABD248:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08ABD254;
L_08ABD254:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08ABD224; }
    goto L_08ABD25C;
L_08ABD25C:;
    v1 = LD32(s1+4);
    goto L_08ABD260;
L_08ABD260:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABD20C; }
    goto L_08ABD270;
L_08ABD270:;
    sp = sp + 32;
    return;
L_08ABD290:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08ABD23C;
L_08ABD2A0:;
    s0 = LD32(s0+4);
    goto L_08ABD254;
}

/* 08ABD2A8 */
rv_t func_08ABD2A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABD2A8:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABD2B0 */
rv_t func_08ABD2B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABD2B0:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABD2B8 */
rv_t func_08ABD2B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABD2B8:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABD2C0 */
rv_t func_08ABD2C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABD2C0:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABD2C8 */
rv_t func_08ABD2C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABD2C8:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABD2D0 */
rv_t func_08ABD2D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABD2D0:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABD2D8 */
rv_t func_08ABD2D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABD2D8:;
    v0 = D_08AF8648 - (-31160);
    v0 = v0 - 31160;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABD2F4;
L_08ABD2F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABD300 */
rv_t func_08ABD300(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABD300:;
    v0 = D_08AF8648 - (-31160);
    v0 = v0 - 31160;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABD320;
L_08ABD320:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABD328;
L_08ABD328:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABD338 */
rv_t func_08ABD338(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABD338:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABD340 */
rv_t func_08ABD340(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABD340:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABD348 */
rv_t func_08ABD348(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABD348:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABD350 */
u64 func_08ABD350(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08ABD350:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08ABD3B0; }
    goto L_08ABD360;
L_08ABD360:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08ABD3B0; }
    goto L_08ABD384;
L_08ABD384:;
    a3 = LD32(a0);
    goto L_08ABD388;
L_08ABD388:;
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    v1 = a3 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08ABD3B8; }
    goto L_08ABD3A0;
L_08ABD3A0:;
    a0 = LD32(a0+4);
    goto L_08ABD3A4;
L_08ABD3A4:;
    cnd_ = a0 != 0;
    if (cnd_) { a3 = LD32(a0); goto L_08ABD388; }
    goto L_08ABD3AC;
L_08ABD3AC:;
    a3 = 0 + 0;
    goto L_08ABD3B0;
L_08ABD3B0:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08ABD3B8:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(a0+8); goto L_08ABD3D4; }
    goto L_08ABD3C0;
L_08ABD3C0:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08ABD3A4; }
    goto L_08ABD3D0;
L_08ABD3D0:;
    v0 = LD_U8(a0+8);
    goto L_08ABD3D4;
L_08ABD3D4:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08ABD3A4; }
    goto L_08ABD3DC;
L_08ABD3DC:;
    goto L_08ABD3B0;
}

/* 08ABD3E4 */
rv_t func_08ABD3E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABD3E4:;
    v0 = D_08AF8748 - (-30904);
    v0 = v0 - 30904;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABD400;
L_08ABD400:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABD40C */
rv_t func_08ABD40C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABD40C:;
    v0 = D_08AF8748 - (-30904);
    v0 = v0 - 30904;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABD42C;
L_08ABD42C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABD434;
L_08ABD434:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABD444 */
u64 func_08ABD444(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08ABD444:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08ABD4A4; }
    goto L_08ABD454;
L_08ABD454:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08ABD4A4; }
    goto L_08ABD478;
L_08ABD478:;
    a3 = LD32(a0);
    goto L_08ABD47C;
L_08ABD47C:;
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    v1 = a3 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08ABD4AC; }
    goto L_08ABD494;
L_08ABD494:;
    a0 = LD32(a0+4);
    goto L_08ABD498;
L_08ABD498:;
    cnd_ = a0 != 0;
    if (cnd_) { a3 = LD32(a0); goto L_08ABD47C; }
    goto L_08ABD4A0;
L_08ABD4A0:;
    a3 = 0 + 0;
    goto L_08ABD4A4;
L_08ABD4A4:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08ABD4AC:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(a0+8); goto L_08ABD4C8; }
    goto L_08ABD4B4;
L_08ABD4B4:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08ABD498; }
    goto L_08ABD4C4;
L_08ABD4C4:;
    v0 = LD_U8(a0+8);
    goto L_08ABD4C8;
L_08ABD4C8:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08ABD498; }
    goto L_08ABD4D0;
L_08ABD4D0:;
    goto L_08ABD4A4;
}

/* 08ABD4D8 */
rv_t func_08ABD4D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABD4D8:;
    v0 = D_08AF8780 - (-30848);
    v0 = v0 - 30848;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABD4F4;
L_08ABD4F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABD500 */
rv_t func_08ABD500(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABD500:;
    v0 = D_08AF8780 - (-30848);
    v0 = v0 - 30848;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABD520;
L_08ABD520:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABD528;
L_08ABD528:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABD538 */
u64 func_08ABD538(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABD538:;
    a3 = LD32(a0+8);
    a2 = a0 + 0;
    cnd_ = a3 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABD5AC; }
    goto L_08ABD548;
L_08ABD548:;
    a3 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABD558;
L_08ABD558:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABD5D4; }
    goto L_08ABD564;
L_08ABD564:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABD5BC; }
    goto L_08ABD578;
L_08ABD578:;
    cnd_ = a1 != 0;
    a3 = LD32(a2+8);
    if (cnd_) { goto L_08ABD5A0; }
    goto L_08ABD580;
L_08ABD580:;
    v1 = LD32(a3);
    v0 = LD32(v1);
    a0 = LD32(v0-16);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a3+4); goto L_08ABD5B0; }
    goto L_08ABD5A0;
L_08ABD5A0:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABD5D4; }
    goto L_08ABD5AC;
L_08ABD5AC:;
    v0 = LD32(a3+4);
    goto L_08ABD5B0;
L_08ABD5B0:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABD578; }
    goto L_08ABD5B8;
L_08ABD5B8:;
    a3 = LD32(a2);
    goto L_08ABD5BC;
L_08ABD5BC:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABD558;
L_08ABD5D4:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08ABD5DC */
void func_08ABD5DC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08ABD5DC:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08ABD670; }
    goto L_08ABD608;
L_08ABD608:;
    v0 = LD32(s1);
    goto L_08ABD60C;
L_08ABD60C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08ABD660; }
    goto L_08ABD620;
L_08ABD620:;
    v0 = LD_U8(s0+8);
    goto L_08ABD624;
L_08ABD624:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08ABD6A0; }
    goto L_08ABD62C;
L_08ABD62C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABD690; }
    goto L_08ABD634;
L_08ABD634:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08ABD63C;
L_08ABD63C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABD648;
L_08ABD648:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08ABD654;
L_08ABD654:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08ABD624; }
    goto L_08ABD65C;
L_08ABD65C:;
    v1 = LD32(s1+4);
    goto L_08ABD660;
L_08ABD660:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABD60C; }
    goto L_08ABD670;
L_08ABD670:;
    sp = sp + 32;
    return;
L_08ABD690:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08ABD63C;
L_08ABD6A0:;
    s0 = LD32(s0+4);
    goto L_08ABD654;
}

/* 08ABD6A8 */
rv_t func_08ABD6A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABD6A8:;
    v0 = D_08AF87B8 - (-30792);
    v0 = v0 - 30792;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABD6C4;
L_08ABD6C4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABD6D0 */
rv_t func_08ABD6D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABD6D0:;
    v0 = D_08AF87B8 - (-30792);
    v0 = v0 - 30792;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABD6F0;
L_08ABD6F0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABD6F8;
L_08ABD6F8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABD708 */
u64 func_08ABD708(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08ABD708:;
    v1 = LD32(a0+8);
    cnd_ = v1 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_08ABD754; }
    goto L_08ABD714;
L_08ABD714:;
    a2 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a2+4);
    a0 = a2 + 0;
    goto L_08ABD724;
L_08ABD724:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABD77C; }
    goto L_08ABD730;
L_08ABD730:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a1+8, a0);
    if (cnd_) { goto L_08ABD764; }
    goto L_08ABD744;
L_08ABD744:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABD77C; }
    goto L_08ABD754;
L_08ABD754:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_08ABD744; }
    goto L_08ABD760;
L_08ABD760:;
    a2 = LD32(a1);
    goto L_08ABD764;
L_08ABD764:;
    v1 = LD32(a1+4);
    a0 = a2 + 0;
    v1 = v1 + 1;
    ST32(a1+4, v1);
    v0 = LD32(a2+4);
    goto L_08ABD724;
L_08ABD77C:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08ABD784 */
u64 func_08ABD784(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_08ABD784:;
    v0 = 999;
    cnd_ = a1 == v0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08ABD7D4; }
    goto L_08ABD790;
L_08ABD790:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08ABD7D4; }
    goto L_08ABD7B4;
L_08ABD7B4:;
    v0 = LD32(a0);
    goto L_08ABD7B8;
L_08ABD7B8:;
    v1 = LD32(v0);
    cnd_ = v1 == a1;
    a2 = v0 + 0;
    if (cnd_) { goto L_08ABD7DC; }
    goto L_08ABD7C4;
L_08ABD7C4:;
    a0 = LD32(a0+4);
    goto L_08ABD7C8;
L_08ABD7C8:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08ABD7B8; }
    goto L_08ABD7D0;
L_08ABD7D0:;
    a2 = 0 + 0;
    goto L_08ABD7D4;
L_08ABD7D4:;
    v0 = a2 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08ABD7DC:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08ABD7C8; }
    goto L_08ABD7E8;
L_08ABD7E8:;
    goto L_08ABD7D4;
}

/* 08ABD7F0 */
u64 func_08ABD7F0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08ABD7F0:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08ABD884; }
    goto L_08ABD81C;
L_08ABD81C:;
    v0 = LD32(s1);
    goto L_08ABD820;
L_08ABD820:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08ABD874; }
    goto L_08ABD834;
L_08ABD834:;
    v0 = LD_U8(s0+8);
    goto L_08ABD838;
L_08ABD838:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08ABD8B4; }
    goto L_08ABD840;
L_08ABD840:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABD8A4; }
    goto L_08ABD848;
L_08ABD848:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08ABD850;
L_08ABD850:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABD85C;
L_08ABD85C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08ABD868;
L_08ABD868:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08ABD838; }
    goto L_08ABD870;
L_08ABD870:;
    v1 = LD32(s1+4);
    goto L_08ABD874;
L_08ABD874:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABD820; }
    goto L_08ABD884;
L_08ABD884:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08ABD8A4:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08ABD850;
L_08ABD8B4:;
    s0 = LD32(s0+4);
    goto L_08ABD868;
}

/* 08ABD8BC */
u64 func_08ABD8BC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08ABD8BC:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08ABD91C; }
    goto L_08ABD8CC;
L_08ABD8CC:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08ABD91C; }
    goto L_08ABD8F0;
L_08ABD8F0:;
    a3 = LD32(a0);
    goto L_08ABD8F4;
L_08ABD8F4:;
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    v1 = a3 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08ABD924; }
    goto L_08ABD90C;
L_08ABD90C:;
    a0 = LD32(a0+4);
    goto L_08ABD910;
L_08ABD910:;
    cnd_ = a0 != 0;
    if (cnd_) { a3 = LD32(a0); goto L_08ABD8F4; }
    goto L_08ABD918;
L_08ABD918:;
    a3 = 0 + 0;
    goto L_08ABD91C;
L_08ABD91C:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08ABD924:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(a0+8); goto L_08ABD940; }
    goto L_08ABD92C;
L_08ABD92C:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08ABD910; }
    goto L_08ABD93C;
L_08ABD93C:;
    v0 = LD_U8(a0+8);
    goto L_08ABD940;
L_08ABD940:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08ABD910; }
    goto L_08ABD948;
L_08ABD948:;
    goto L_08ABD91C;
}

/* 08ABD950 */
rv_t func_08ABD950(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABD950:;
    v0 = D_08AF87F0 - (-30736);
    v0 = v0 - 30736;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABD96C;
L_08ABD96C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABD978 */
rv_t func_08ABD978(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABD978:;
    v0 = D_08AF87F0 - (-30736);
    v0 = v0 - 30736;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABD998;
L_08ABD998:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABD9A0;
L_08ABD9A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABD9B0 */
u32 func_08ABD9B0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABD9B0:;
    a2 = LD32(a0+24);
    v0 = (s32)a1 < (s32)a2;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08ABD9D4; }
    goto L_08ABD9C0;
L_08ABD9C0:;
    v0 = LD32(a0+32);
    v1 = a1 << 1;
    cnd_ = v0 == 0;
    v1 = v1 + v0;
    if (cnd_) { goto L_08ABD9DC; }
    goto L_08ABD9D0;
L_08ABD9D0:;
    a3 = LD_U16(v1);
    goto L_08ABD9D4;
L_08ABD9D4:;
    v0 = a3 + 0;
    return v0;
L_08ABD9DC:;
    v0 = 1;
    cnd_ = a2 == v0;
    if (cnd_) { a3 = LD_U16(a0+38); goto L_08ABD9D4; }
    goto L_08ABD9E8;
L_08ABD9E8:;
    goto L_08ABD9D4;
}

/* 08ABD9F0 */
rv_t func_08ABD9F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABD9F0:;
    v0 = D_08AF8828 - (-30680);
    v0 = v0 - 30680;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 44;
    func_0895F11C(a0);
    goto L_08ABDA14;
L_08ABDA14:;
    a0 = s0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABDA1C;
L_08ABDA1C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABDA2C */
rv_t func_08ABDA2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABDA2C:;
    v0 = D_08AF8828 - (-30680);
    v0 = v0 - 30680;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 44;
    func_0895F11C(a0);
    goto L_08ABDA50;
L_08ABDA50:;
    a0 = s0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABDA58;
L_08ABDA58:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABDA60;
L_08ABDA60:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABDA70 */
u64 func_08ABDA70(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABDA70:;
    a3 = LD32(a0+8);
    a2 = a0 + 0;
    cnd_ = a3 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABDAE4; }
    goto L_08ABDA80;
L_08ABDA80:;
    a3 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABDA90;
L_08ABDA90:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABDB0C; }
    goto L_08ABDA9C;
L_08ABDA9C:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABDAF4; }
    goto L_08ABDAB0;
L_08ABDAB0:;
    cnd_ = a1 != 0;
    a3 = LD32(a2+8);
    if (cnd_) { goto L_08ABDAD8; }
    goto L_08ABDAB8;
L_08ABDAB8:;
    v1 = LD32(a3);
    v0 = LD32(v1);
    a0 = LD32(v0-16);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a3+4); goto L_08ABDAE8; }
    goto L_08ABDAD8;
L_08ABDAD8:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABDB0C; }
    goto L_08ABDAE4;
L_08ABDAE4:;
    v0 = LD32(a3+4);
    goto L_08ABDAE8;
L_08ABDAE8:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABDAB0; }
    goto L_08ABDAF0;
L_08ABDAF0:;
    a3 = LD32(a2);
    goto L_08ABDAF4;
L_08ABDAF4:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABDA90;
L_08ABDB0C:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08ABDB14 */
void func_08ABDB14(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08ABDB14:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08ABDBA8; }
    goto L_08ABDB40;
L_08ABDB40:;
    v0 = LD32(s1);
    goto L_08ABDB44;
L_08ABDB44:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08ABDB98; }
    goto L_08ABDB58;
L_08ABDB58:;
    v0 = LD_U8(s0+8);
    goto L_08ABDB5C;
L_08ABDB5C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08ABDBD8; }
    goto L_08ABDB64;
L_08ABDB64:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABDBC8; }
    goto L_08ABDB6C;
L_08ABDB6C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08ABDB74;
L_08ABDB74:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABDB80;
L_08ABDB80:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08ABDB8C;
L_08ABDB8C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08ABDB5C; }
    goto L_08ABDB94;
L_08ABDB94:;
    v1 = LD32(s1+4);
    goto L_08ABDB98;
L_08ABDB98:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABDB44; }
    goto L_08ABDBA8;
L_08ABDBA8:;
    sp = sp + 32;
    return;
L_08ABDBC8:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08ABDB74;
L_08ABDBD8:;
    s0 = LD32(s0+4);
    goto L_08ABDB8C;
}

/* 08ABDBE0 */
u64 func_08ABDBE0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08ABDBE0:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08ABDC40; }
    goto L_08ABDBF0;
L_08ABDBF0:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08ABDC40; }
    goto L_08ABDC14;
L_08ABDC14:;
    a3 = LD32(a0);
    goto L_08ABDC18;
L_08ABDC18:;
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    v1 = a3 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08ABDC48; }
    goto L_08ABDC30;
L_08ABDC30:;
    a0 = LD32(a0+4);
    goto L_08ABDC34;
L_08ABDC34:;
    cnd_ = a0 != 0;
    if (cnd_) { a3 = LD32(a0); goto L_08ABDC18; }
    goto L_08ABDC3C;
L_08ABDC3C:;
    a3 = 0 + 0;
    goto L_08ABDC40;
L_08ABDC40:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08ABDC48:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(a0+8); goto L_08ABDC64; }
    goto L_08ABDC50;
L_08ABDC50:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08ABDC34; }
    goto L_08ABDC60;
L_08ABDC60:;
    v0 = LD_U8(a0+8);
    goto L_08ABDC64;
L_08ABDC64:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08ABDC34; }
    goto L_08ABDC6C;
L_08ABDC6C:;
    goto L_08ABDC40;
}

/* 08ABDC74 */
void func_08ABDC74(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABDC74:;
    a3 = LD32(a0+8);
    a2 = a0 + 0;
    cnd_ = a3 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABDCE8; }
    goto L_08ABDC84;
L_08ABDC84:;
    a3 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABDC94;
L_08ABDC94:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABDD10; }
    goto L_08ABDCA0;
L_08ABDCA0:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABDCF8; }
    goto L_08ABDCB4;
L_08ABDCB4:;
    cnd_ = a1 != 0;
    a3 = LD32(a2+8);
    if (cnd_) { goto L_08ABDCDC; }
    goto L_08ABDCBC;
L_08ABDCBC:;
    v1 = LD32(a3);
    v0 = LD32(v1);
    a0 = LD32(v0-16);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a3+4); goto L_08ABDCEC; }
    goto L_08ABDCDC;
L_08ABDCDC:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABDD10; }
    goto L_08ABDCE8;
L_08ABDCE8:;
    v0 = LD32(a3+4);
    goto L_08ABDCEC;
L_08ABDCEC:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABDCB4; }
    goto L_08ABDCF4;
L_08ABDCF4:;
    a3 = LD32(a2);
    goto L_08ABDCF8;
L_08ABDCF8:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABDC94;
L_08ABDD10:;
    return;
}

/* 08ABDD18 */
void func_08ABDD18(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABDD18:;
    a3 = LD32(a0+8);
    a2 = a0 + 0;
    cnd_ = a3 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABDD8C; }
    goto L_08ABDD28;
L_08ABDD28:;
    a3 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABDD38;
L_08ABDD38:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABDDB4; }
    goto L_08ABDD44;
L_08ABDD44:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABDD9C; }
    goto L_08ABDD58;
L_08ABDD58:;
    cnd_ = a1 != 0;
    a3 = LD32(a2+8);
    if (cnd_) { goto L_08ABDD80; }
    goto L_08ABDD60;
L_08ABDD60:;
    v1 = LD32(a3);
    v0 = LD32(v1);
    a0 = LD32(v0-16);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a3+4); goto L_08ABDD90; }
    goto L_08ABDD80;
L_08ABDD80:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABDDB4; }
    goto L_08ABDD8C;
L_08ABDD8C:;
    v0 = LD32(a3+4);
    goto L_08ABDD90;
L_08ABDD90:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABDD58; }
    goto L_08ABDD98;
L_08ABDD98:;
    a3 = LD32(a2);
    goto L_08ABDD9C;
L_08ABDD9C:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABDD38;
L_08ABDDB4:;
    return;
}

/* 08ABDDBC */
rv_t func_08ABDDBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABDDBC:;
    v0 = D_08AF88D0 - (-30512);
    v0 = v0 - 30512;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABDDD8;
L_08ABDDD8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABDDE4 */
rv_t func_08ABDDE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABDDE4:;
    v0 = D_08AF88D0 - (-30512);
    v0 = v0 - 30512;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABDE04;
L_08ABDE04:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABDE0C;
L_08ABDE0C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABDE1C */
u64 func_08ABDE1C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABDE1C:;
    a2 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABDE84; }
    goto L_08ABDE2C;
L_08ABDE2C:;
    a3 = LD32(a2);
    v1 = LD32(a2+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABDE3C;
L_08ABDE3C:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABDEAC; }
    goto L_08ABDE48;
L_08ABDE48:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABDE94; }
    goto L_08ABDE5C;
L_08ABDE5C:;
    cnd_ = a1 != 0;
    a0 = LD32(a2+8);
    if (cnd_) { goto L_08ABDE78; }
    goto L_08ABDE64;
L_08ABDE64:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08ABDE88; }
    goto L_08ABDE78;
L_08ABDE78:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABDEAC; }
    goto L_08ABDE84;
L_08ABDE84:;
    v0 = LD32(a0+4);
    goto L_08ABDE88;
L_08ABDE88:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABDE5C; }
    goto L_08ABDE90;
L_08ABDE90:;
    a3 = LD32(a2);
    goto L_08ABDE94;
L_08ABDE94:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABDE3C;
L_08ABDEAC:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08ABDEB4 */
u64 func_08ABDEB4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08ABDEB4:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08ABDF48; }
    goto L_08ABDEE0;
L_08ABDEE0:;
    v0 = LD32(s1);
    goto L_08ABDEE4;
L_08ABDEE4:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08ABDF38; }
    goto L_08ABDEF8;
L_08ABDEF8:;
    v0 = LD_U8(s0+8);
    goto L_08ABDEFC;
L_08ABDEFC:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08ABDF78; }
    goto L_08ABDF04;
L_08ABDF04:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABDF68; }
    goto L_08ABDF0C;
L_08ABDF0C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08ABDF14;
L_08ABDF14:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABDF20;
L_08ABDF20:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08ABDF2C;
L_08ABDF2C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08ABDEFC; }
    goto L_08ABDF34;
L_08ABDF34:;
    v1 = LD32(s1+4);
    goto L_08ABDF38;
L_08ABDF38:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABDEE4; }
    goto L_08ABDF48;
L_08ABDF48:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08ABDF68:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08ABDF14;
L_08ABDF78:;
    s0 = LD32(s0+4);
    goto L_08ABDF2C;
}

/* 08ABDF80 */
rv_t func_08ABDF80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABDF80:;
    v0 = D_08AF8FE8 - (-28696);
    v0 = v0 - 28696;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABDF9C;
L_08ABDF9C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABDFA8 */
rv_t func_08ABDFA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABDFA8:;
    v0 = D_08AF8FE8 - (-28696);
    v0 = v0 - 28696;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABDFC8;
L_08ABDFC8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABDFD0;
L_08ABDFD0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABDFE0 */
rv_t func_08ABDFE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABDFE0:;
    v0 = D_08AF8CF0 - (-29456);
    v0 = v0 - 29456;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABDFFC;
L_08ABDFFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE008 */
rv_t func_08ABE008(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE008:;
    v0 = D_08AF8CF0 - (-29456);
    v0 = v0 - 29456;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE028;
L_08ABE028:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABE030;
L_08ABE030:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE040 */
rv_t func_08ABE040(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE040:;
    v0 = D_08AF8FE8 - (-28696);
    v0 = v0 - 28696;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABE05C;
L_08ABE05C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE068 */
rv_t func_08ABE068(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE068:;
    v0 = D_08AF8FE8 - (-28696);
    v0 = v0 - 28696;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE088;
L_08ABE088:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABE090;
L_08ABE090:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE0A0 */
rv_t func_08ABE0A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE0A0:;
    v0 = D_08AF89C8 - (-30264);
    v0 = v0 - 30264;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABE0BC;
L_08ABE0BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE0C8 */
rv_t func_08ABE0C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE0C8:;
    v0 = D_08AF89C8 - (-30264);
    v0 = v0 - 30264;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE0E8;
L_08ABE0E8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABE0F0;
L_08ABE0F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE100 */
u64 func_08ABE100(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08ABE100:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08ABE160; }
    goto L_08ABE110;
L_08ABE110:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08ABE160; }
    goto L_08ABE134;
L_08ABE134:;
    a3 = LD32(a0);
    goto L_08ABE138;
L_08ABE138:;
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    v1 = a3 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08ABE168; }
    goto L_08ABE150;
L_08ABE150:;
    a0 = LD32(a0+4);
    goto L_08ABE154;
L_08ABE154:;
    cnd_ = a0 != 0;
    if (cnd_) { a3 = LD32(a0); goto L_08ABE138; }
    goto L_08ABE15C;
L_08ABE15C:;
    a3 = 0 + 0;
    goto L_08ABE160;
L_08ABE160:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08ABE168:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(a0+8); goto L_08ABE184; }
    goto L_08ABE170;
L_08ABE170:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08ABE154; }
    goto L_08ABE180;
L_08ABE180:;
    v0 = LD_U8(a0+8);
    goto L_08ABE184;
L_08ABE184:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08ABE154; }
    goto L_08ABE18C;
L_08ABE18C:;
    goto L_08ABE160;
}

/* 08ABE194 */
rv_t func_08ABE194(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE194:;
    v0 = D_08AF8A38 - (-30152);
    v0 = v0 - 30152;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABE1B0;
L_08ABE1B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE1BC */
rv_t func_08ABE1BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE1BC:;
    v0 = D_08AF8A38 - (-30152);
    v0 = v0 - 30152;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE1DC;
L_08ABE1DC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABE1E4;
L_08ABE1E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE1F4 */
rv_t func_08ABE1F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE1F4:;
    v0 = D_08AF8A38 - (-30152);
    v0 = v0 - 30152;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE214;
L_08ABE214:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABE21C;
L_08ABE21C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE22C */
rv_t func_08ABE22C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE22C:;
    v0 = D_08AF8A38 - (-30152);
    v0 = v0 - 30152;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABE248;
L_08ABE248:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE254 */
rv_t func_08ABE254(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE254:;
    v0 = D_08AF8A70 - (-30096);
    v0 = v0 - 30096;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABE270;
L_08ABE270:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE27C */
rv_t func_08ABE27C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE27C:;
    v0 = D_08AF8A70 - (-30096);
    v0 = v0 - 30096;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE29C;
L_08ABE29C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABE2A4;
L_08ABE2A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE2B4 */
rv_t func_08ABE2B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE2B4:;
    v0 = D_08AF8AA8 - (-30040);
    v0 = v0 - 30040;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 36;
    func_0895F11C(a0);
    goto L_08ABE2D8;
L_08ABE2D8:;
    a0 = s0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE2E0;
L_08ABE2E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE2F0 */
rv_t func_08ABE2F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE2F0:;
    v0 = D_08AF8AA8 - (-30040);
    v0 = v0 - 30040;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 36;
    func_0895F11C(a0);
    goto L_08ABE314;
L_08ABE314:;
    a0 = s0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE31C;
L_08ABE31C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABE324;
L_08ABE324:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE334 */
rv_t func_08ABE334(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE334:;
    v0 = D_08AF8FE8 - (-28696);
    v0 = v0 - 28696;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABE350;
L_08ABE350:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE35C */
rv_t func_08ABE35C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE35C:;
    v0 = D_08AF8FE8 - (-28696);
    v0 = v0 - 28696;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE37C;
L_08ABE37C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABE384;
L_08ABE384:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE394 */
rv_t func_08ABE394(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE394:;
    v0 = D_08AF8FE8 - (-28696);
    v0 = v0 - 28696;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABE3B0;
L_08ABE3B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE3BC */
rv_t func_08ABE3BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE3BC:;
    v0 = D_08AF8FE8 - (-28696);
    v0 = v0 - 28696;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE3DC;
L_08ABE3DC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABE3E4;
L_08ABE3E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE3F4 */
rv_t func_08ABE3F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE3F4:;
    v0 = D_08AF8A38 - (-30152);
    v0 = v0 - 30152;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABE410;
L_08ABE410:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE41C */
rv_t func_08ABE41C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE41C:;
    v0 = D_08AF8A38 - (-30152);
    v0 = v0 - 30152;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE43C;
L_08ABE43C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABE444;
L_08ABE444:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE454 */
rv_t func_08ABE454(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE454:;
    v0 = D_08AF8FE8 - (-28696);
    v0 = v0 - 28696;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABE470;
L_08ABE470:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE47C */
rv_t func_08ABE47C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE47C:;
    v0 = D_08AF8FE8 - (-28696);
    v0 = v0 - 28696;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE49C;
L_08ABE49C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABE4A4;
L_08ABE4A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE4B4 */
rv_t func_08ABE4B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE4B4:;
    v0 = D_08AF8BD8 - (-29736);
    v0 = v0 - 29736;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABE4D0;
L_08ABE4D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE4DC */
rv_t func_08ABE4DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE4DC:;
    v0 = D_08AF8BD8 - (-29736);
    v0 = v0 - 29736;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE4FC;
L_08ABE4FC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABE504;
L_08ABE504:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE514 */
rv_t func_08ABE514(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE514:;
    v0 = D_08AF8C10 - (-29680);
    v0 = v0 - 29680;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABE530;
L_08ABE530:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE53C */
rv_t func_08ABE53C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE53C:;
    v0 = D_08AF8C10 - (-29680);
    v0 = v0 - 29680;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE55C;
L_08ABE55C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABE564;
L_08ABE564:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE574 */
rv_t func_08ABE574(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE574:;
    v0 = D_08AF8C48 - (-29624);
    v0 = v0 - 29624;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABE590;
L_08ABE590:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE59C */
rv_t func_08ABE59C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE59C:;
    v0 = D_08AF8C48 - (-29624);
    v0 = v0 - 29624;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE5BC;
L_08ABE5BC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABE5C4;
L_08ABE5C4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE5D4 */
rv_t func_08ABE5D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE5D4:;
    v0 = D_08AF8C80 - (-29568);
    v0 = v0 - 29568;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABE5F0;
L_08ABE5F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE5FC */
rv_t func_08ABE5FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE5FC:;
    v0 = D_08AF8C80 - (-29568);
    v0 = v0 - 29568;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE61C;
L_08ABE61C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABE624;
L_08ABE624:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE634 */
rv_t func_08ABE634(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE634:;
    v0 = D_08AF8CB8 - (-29512);
    v0 = v0 - 29512;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABE650;
L_08ABE650:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE65C */
rv_t func_08ABE65C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE65C:;
    v0 = D_08AF8CB8 - (-29512);
    v0 = v0 - 29512;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE67C;
L_08ABE67C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABE684;
L_08ABE684:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE694 */
u32 func_08ABE694(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08ABE694:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08ABE6F4; }
    goto L_08ABE6A4;
L_08ABE6A4:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08ABE6F4; }
    goto L_08ABE6C8;
L_08ABE6C8:;
    a3 = LD32(a0);
    goto L_08ABE6CC;
L_08ABE6CC:;
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    v1 = a3 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08ABE6FC; }
    goto L_08ABE6E4;
L_08ABE6E4:;
    a0 = LD32(a0+4);
    goto L_08ABE6E8;
L_08ABE6E8:;
    cnd_ = a0 != 0;
    if (cnd_) { a3 = LD32(a0); goto L_08ABE6CC; }
    goto L_08ABE6F0;
L_08ABE6F0:;
    a3 = 0 + 0;
    goto L_08ABE6F4;
L_08ABE6F4:;
    v0 = a3 + 0;
    return v0;
L_08ABE6FC:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(a0+8); goto L_08ABE718; }
    goto L_08ABE704;
L_08ABE704:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08ABE6E8; }
    goto L_08ABE714;
L_08ABE714:;
    v0 = LD_U8(a0+8);
    goto L_08ABE718;
L_08ABE718:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08ABE6E8; }
    goto L_08ABE720;
L_08ABE720:;
    goto L_08ABE6F4;
}

/* 08ABE728 */
rv_t func_08ABE728(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE728:;
    v0 = D_08AF8CF0 - (-29456);
    v0 = v0 - 29456;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABE744;
L_08ABE744:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE750 */
rv_t func_08ABE750(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE750:;
    v0 = D_08AF8CF0 - (-29456);
    v0 = v0 - 29456;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE770;
L_08ABE770:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABE778;
L_08ABE778:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE788 */
rv_t func_08ABE788(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABE788:;
    ST32(a0+32, a1);
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE790 */
u64 func_08ABE790(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08ABE790:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08ABE7E4; }
    goto L_08ABE7A0;
L_08ABE7A0:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08ABE7E4; }
    goto L_08ABE7C4;
L_08ABE7C4:;
    a0 = LD32(v1);
    goto L_08ABE7C8;
L_08ABE7C8:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08ABE7EC; }
    goto L_08ABE7D4;
L_08ABE7D4:;
    v1 = LD32(v1+4);
    goto L_08ABE7D8;
L_08ABE7D8:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_08ABE7C8; }
    goto L_08ABE7E0;
L_08ABE7E0:;
    a3 = 0 + 0;
    goto L_08ABE7E4;
L_08ABE7E4:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08ABE7EC:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(v1+8); goto L_08ABE808; }
    goto L_08ABE7F4;
L_08ABE7F4:;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08ABE7D8; }
    goto L_08ABE804;
L_08ABE804:;
    v0 = LD_U8(v1+8);
    goto L_08ABE808;
L_08ABE808:;
    cnd_ = v0 != 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_08ABE7D4; }
    goto L_08ABE810;
L_08ABE810:;
    goto L_08ABE7E4;
}

/* 08ABE818 */
rv_t func_08ABE818(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE818:;
    v0 = D_08AF8D30 - (-29392);
    v0 = v0 - 29392;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABE834;
L_08ABE834:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE840 */
rv_t func_08ABE840(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE840:;
    v0 = D_08AF8D30 - (-29392);
    v0 = v0 - 29392;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE860;
L_08ABE860:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABE868;
L_08ABE868:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE878 */
rv_t func_08ABE878(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE878:;
    v0 = D_08AF8D68 - (-29336);
    v0 = v0 - 29336;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABE894;
L_08ABE894:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE8A0 */
rv_t func_08ABE8A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE8A0:;
    v0 = D_08AF8D68 - (-29336);
    v0 = v0 - 29336;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE8C0;
L_08ABE8C0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABE8C8;
L_08ABE8C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE8D8 */
rv_t func_08ABE8D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE8D8:;
    v0 = D_08AF8DA0 - (-29280);
    v0 = v0 - 29280;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABE8F4;
L_08ABE8F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE900 */
rv_t func_08ABE900(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE900:;
    v0 = D_08AF8DA0 - (-29280);
    v0 = v0 - 29280;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE920;
L_08ABE920:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABE928;
L_08ABE928:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE938 */
rv_t func_08ABE938(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE938:;
    v0 = D_08AF8DD8 - (-29224);
    v0 = v0 - 29224;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABE954;
L_08ABE954:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE960 */
rv_t func_08ABE960(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE960:;
    v0 = D_08AF8DD8 - (-29224);
    v0 = v0 - 29224;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE980;
L_08ABE980:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABE988;
L_08ABE988:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE998 */
rv_t func_08ABE998(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE998:;
    v0 = D_08AF8E10 - (-29168);
    v0 = v0 - 29168;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABE9B4;
L_08ABE9B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE9C0 */
rv_t func_08ABE9C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABE9C0:;
    v0 = D_08AF8E10 - (-29168);
    v0 = v0 - 29168;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABE9E0;
L_08ABE9E0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABE9E8;
L_08ABE9E8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABE9F8 */
u64 func_08ABE9F8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABE9F8:;
    a2 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABEA60; }
    goto L_08ABEA08;
L_08ABEA08:;
    a3 = LD32(a2);
    v1 = LD32(a2+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABEA18;
L_08ABEA18:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABEA88; }
    goto L_08ABEA24;
L_08ABEA24:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABEA70; }
    goto L_08ABEA38;
L_08ABEA38:;
    cnd_ = a1 != 0;
    a0 = LD32(a2+8);
    if (cnd_) { goto L_08ABEA54; }
    goto L_08ABEA40;
L_08ABEA40:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08ABEA64; }
    goto L_08ABEA54;
L_08ABEA54:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABEA88; }
    goto L_08ABEA60;
L_08ABEA60:;
    v0 = LD32(a0+4);
    goto L_08ABEA64;
L_08ABEA64:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABEA38; }
    goto L_08ABEA6C;
L_08ABEA6C:;
    a3 = LD32(a2);
    goto L_08ABEA70;
L_08ABEA70:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABEA18;
L_08ABEA88:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08ABEA90 */
u64 func_08ABEA90(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08ABEA90:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08ABEB24; }
    goto L_08ABEABC;
L_08ABEABC:;
    v0 = LD32(s1);
    goto L_08ABEAC0;
L_08ABEAC0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08ABEB14; }
    goto L_08ABEAD4;
L_08ABEAD4:;
    v0 = LD_U8(s0+8);
    goto L_08ABEAD8;
L_08ABEAD8:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08ABEB54; }
    goto L_08ABEAE0;
L_08ABEAE0:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABEB44; }
    goto L_08ABEAE8;
L_08ABEAE8:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08ABEAF0;
L_08ABEAF0:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABEAFC;
L_08ABEAFC:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08ABEB08;
L_08ABEB08:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08ABEAD8; }
    goto L_08ABEB10;
L_08ABEB10:;
    v1 = LD32(s1+4);
    goto L_08ABEB14;
L_08ABEB14:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABEAC0; }
    goto L_08ABEB24;
L_08ABEB24:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08ABEB44:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08ABEAF0;
L_08ABEB54:;
    s0 = LD32(s0+4);
    goto L_08ABEB08;
}

/* 08ABEB5C */
rv_t func_08ABEB5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABEB5C:;
    v0 = D_08AF8E48 - (-29112);
    v0 = v0 - 29112;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABEB78;
L_08ABEB78:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABEB84 */
rv_t func_08ABEB84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABEB84:;
    v0 = D_08AF8E48 - (-29112);
    v0 = v0 - 29112;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABEBA4;
L_08ABEBA4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABEBAC;
L_08ABEBAC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABEBBC */
rv_t func_08ABEBBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABEBBC:;
    v0 = D_08AF8E80 - (-29056);
    v0 = v0 - 29056;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABEBD8;
L_08ABEBD8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABEBE4 */
rv_t func_08ABEBE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABEBE4:;
    v0 = D_08AF8E80 - (-29056);
    v0 = v0 - 29056;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABEC04;
L_08ABEC04:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABEC0C;
L_08ABEC0C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABEC1C */
rv_t func_08ABEC1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABEC1C:;
    v0 = D_08AF8FE8 - (-28696);
    v0 = v0 - 28696;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABEC38;
L_08ABEC38:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABEC44 */
rv_t func_08ABEC44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABEC44:;
    v0 = D_08AF8FE8 - (-28696);
    v0 = v0 - 28696;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABEC64;
L_08ABEC64:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABEC6C;
L_08ABEC6C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABEC7C */
rv_t func_08ABEC7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABEC7C:;
    v0 = D_08AF8FE8 - (-28696);
    v0 = v0 - 28696;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABEC98;
L_08ABEC98:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABECA4 */
rv_t func_08ABECA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABECA4:;
    v0 = D_08AF8FE8 - (-28696);
    v0 = v0 - 28696;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABECC4;
L_08ABECC4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABECCC;
L_08ABECCC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABECDC */
rv_t func_08ABECDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABECDC:;
    v0 = D_08AF8A38 - (-30152);
    v0 = v0 - 30152;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABECF8;
L_08ABECF8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABED04 */
rv_t func_08ABED04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABED04:;
    v0 = D_08AF8A38 - (-30152);
    v0 = v0 - 30152;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABED24;
L_08ABED24:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABED2C;
L_08ABED2C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABED3C */
rv_t func_08ABED3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABED3C:;
    v0 = D_08AF8FE8 - (-28696);
    v0 = v0 - 28696;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABED58;
L_08ABED58:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABED64 */
rv_t func_08ABED64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABED64:;
    v0 = D_08AF8FE8 - (-28696);
    v0 = v0 - 28696;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABED84;
L_08ABED84:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABED8C;
L_08ABED8C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABED9C */
rv_t func_08ABED9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABED9C:;
    v0 = D_08AF8FB0 - (-28752);
    v0 = v0 - 28752;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABEDB8;
L_08ABEDB8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABEDC4 */
rv_t func_08ABEDC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABEDC4:;
    v0 = D_08AF8FB0 - (-28752);
    v0 = v0 - 28752;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABEDE4;
L_08ABEDE4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABEDEC;
L_08ABEDEC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABEDFC */
rv_t func_08ABEDFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABEDFC:;
    v0 = D_08AF8FE8 - (-28696);
    v0 = v0 - 28696;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABEE18;
L_08ABEE18:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABEE24 */
rv_t func_08ABEE24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABEE24:;
    v0 = D_08AF8FE8 - (-28696);
    v0 = v0 - 28696;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABEE44;
L_08ABEE44:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABEE4C;
L_08ABEE4C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABEE5C */
rv_t func_08ABEE5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABEE5C:;
    v0 = D_08AF8FE8 - (-28696);
    v0 = v0 - 28696;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABEE78;
L_08ABEE78:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABEE84 */
rv_t func_08ABEE84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABEE84:;
    v0 = D_08AF8FE8 - (-28696);
    v0 = v0 - 28696;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABEEA4;
L_08ABEEA4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABEEAC;
L_08ABEEAC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABEEBC */
rv_t func_08ABEEBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABEEBC:;
    v0 = D_08AF9068 - (-28568);
    v0 = v0 - 28568;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABEED8;
L_08ABEED8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABEEE4 */
rv_t func_08ABEEE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABEEE4:;
    v0 = D_08AF9068 - (-28568);
    v0 = v0 - 28568;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABEF04;
L_08ABEF04:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABEF0C;
L_08ABEF0C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABEF1C */
rv_t func_08ABEF1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABEF1C:;
    v0 = D_08AF8A38 - (-30152);
    v0 = v0 - 30152;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABEF38;
L_08ABEF38:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABEF44 */
rv_t func_08ABEF44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABEF44:;
    v0 = D_08AF8A38 - (-30152);
    v0 = v0 - 30152;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABEF64;
L_08ABEF64:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABEF6C;
L_08ABEF6C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABEF7C */
rv_t func_08ABEF7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABEF7C:;
    v0 = D_08AF90D8 - (-28456);
    v0 = v0 - 28456;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08ABEF98;
L_08ABEF98:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABEFA4 */
rv_t func_08ABEFA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABEFA4:;
    v0 = D_08AF90D8 - (-28456);
    v0 = v0 - 28456;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABEFC4;
L_08ABEFC4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABEFCC;
L_08ABEFCC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABEFDC */
rv_t func_08ABEFDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABEFDC:;
    v0 = D_08AF9110 - (-28400);
    v0 = v0 - 28400;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 36;
    func_0895F11C(a0);
    goto L_08ABF000;
L_08ABF000:;
    a0 = s0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABF008;
L_08ABF008:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF018 */
rv_t func_08ABF018(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF018:;
    v0 = D_08AF9110 - (-28400);
    v0 = v0 - 28400;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 36;
    func_0895F11C(a0);
    goto L_08ABF03C;
L_08ABF03C:;
    a0 = s0 + 0;
    v0 = func_08955388(a0);
    goto L_08ABF044;
L_08ABF044:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABF04C;
L_08ABF04C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF05C */
rv_t func_08ABF05C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABF05C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF064 */
rv_t func_08ABF064(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF064:;
    sp = sp - 16;
    v1 = LD32(a0);
    a1 = LD32(v1+68);
    t_ = a1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABF07C;
L_08ABF07C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF088 */
rv_t func_08ABF088(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF088:;
    v0 = D_08AF81A8 - (-32344);
    v0 = v0 - 32344;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABF0A4;
L_08ABF0A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF0B0 */
rv_t func_08ABF0B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABF0B0:;
    v0 = D_08AF81A8 - (-32344);
    v0 = v0 - 32344;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF0C0 */
rv_t func_08ABF0C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08ABF0C0:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABF0D8;
L_08ABF0D8:;
    v1 = LD32(s0+8);
    a0 = LD32(s0+12);
    a2 = LD32(s0+4);
    ST32(sp, v1);
    v1 = D_08AF9278 - (-28040);
    v1 = v1 - 28040;
    ST32(sp+4, a0);
    ST32(v0, v1);
    ST32(v0+4, a2);
    v1 = LD32(sp);
    ST32(v0+8, v1);
    a0 = LD32(sp+4);
    ST32(v0+12, a0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF11C */
rv_t func_08ABF11C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF11C:;
    sp = sp - 16;
    a2 = a1 + 0;
    v1 = a0 + 0;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08ABF160; }
    goto L_08ABF130;
L_08ABF130:;
    a1 = LD32(a0+12);
    v1 = LD32(v1+4);
    a0 = LD32(a0+8);
    v0 = D_08AF9278 - (-28040);
    v0 = v0 - 28040;
    ST32(a2, v0);
    v0 = a2 + 0;
    ST32(a2+4, v1);
    ST32(a2+8, a0);
    ST32(a2+12, a1);
    ST32(sp, a0);
    ST32(sp+4, a1);
    goto L_08ABF160;
L_08ABF160:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF168 */
rv_t func_08ABF168(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABF168:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF170 */
rv_t func_08ABF170(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF170:;
    sp = sp - 16;
    v0 = LD_U8(a0+12);
    v0 = v0 ^ 0x1;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a1 = LD32(a0+12);
    if (cnd_) { goto L_08ABF1AC; }
    goto L_08ABF18C;
L_08ABF18C:;
    a2 = LD32(a0+4);
    v0 = LD32(a0+8);
    goto L_08ABF194;
L_08ABF194:;
    a0 = (u32)((s32)a1 >> 1);
    t_ = v0;
    a0 = a2 + a0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABF1A0;
L_08ABF1A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08ABF1AC:;
    a2 = LD32(a0+4);
    v0 = LD32(a0+8);
    v1 = (u32)((s32)a1 >> 1);
    v1 = a2 + v1;
    a0 = LD32(v1);
    a0 = a0 + v0;
    v0 = LD32(a0);
    goto L_08ABF194;
}

/* 08ABF1CC */
rv_t func_08ABF1CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABF1CC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF1D4 */
rv_t func_08ABF1D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF1D4:;
    v0 = D_08AF9340 - (-27840);
    v0 = v0 - 27840;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_08955F18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABF1F0;
L_08ABF1F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF1FC */
rv_t func_08ABF1FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF1FC:;
    v0 = D_08AF9340 - (-27840);
    v0 = v0 - 27840;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08955F18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABF21C;
L_08ABF21C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABF224;
L_08ABF224:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF234 */
rv_t func_08ABF234(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF234:;
    v0 = D_08AF9390 - (-27760);
    v0 = v0 - 27760;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_08955F18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABF250;
L_08ABF250:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF25C */
rv_t func_08ABF25C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF25C:;
    v0 = D_08AF9390 - (-27760);
    v0 = v0 - 27760;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08955F18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABF27C;
L_08ABF27C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABF284;
L_08ABF284:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF294 */
rv_t func_08ABF294(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF294:;
    v0 = D_08AF9390 - (-27760);
    v0 = v0 - 27760;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_08955F18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABF2B0;
L_08ABF2B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF2BC */
rv_t func_08ABF2BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF2BC:;
    v0 = D_08AF9390 - (-27760);
    v0 = v0 - 27760;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08955F18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABF2DC;
L_08ABF2DC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABF2E4;
L_08ABF2E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF2F4 */
void func_08ABF2F4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABF2F4:;
    a3 = LD32(a0+8);
    a2 = a0 + 0;
    cnd_ = a3 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABF368; }
    goto L_08ABF304;
L_08ABF304:;
    a3 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABF314;
L_08ABF314:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABF390; }
    goto L_08ABF320;
L_08ABF320:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABF378; }
    goto L_08ABF334;
L_08ABF334:;
    cnd_ = a1 != 0;
    a3 = LD32(a2+8);
    if (cnd_) { goto L_08ABF35C; }
    goto L_08ABF33C;
L_08ABF33C:;
    v1 = LD32(a3);
    v0 = LD32(v1);
    a0 = LD32(v0-16);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a3+4); goto L_08ABF36C; }
    goto L_08ABF35C;
L_08ABF35C:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABF390; }
    goto L_08ABF368;
L_08ABF368:;
    v0 = LD32(a3+4);
    goto L_08ABF36C;
L_08ABF36C:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABF334; }
    goto L_08ABF374;
L_08ABF374:;
    a3 = LD32(a2);
    goto L_08ABF378;
L_08ABF378:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABF314;
L_08ABF390:;
    return;
}

/* 08ABF398 */
void func_08ABF398(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08ABF398:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08ABF42C; }
    goto L_08ABF3C4;
L_08ABF3C4:;
    v0 = LD32(s1);
    goto L_08ABF3C8;
L_08ABF3C8:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08ABF41C; }
    goto L_08ABF3DC;
L_08ABF3DC:;
    v0 = LD_U8(s0+8);
    goto L_08ABF3E0;
L_08ABF3E0:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08ABF45C; }
    goto L_08ABF3E8;
L_08ABF3E8:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABF44C; }
    goto L_08ABF3F0;
L_08ABF3F0:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08ABF3F8;
L_08ABF3F8:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABF404;
L_08ABF404:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08ABF410;
L_08ABF410:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08ABF3E0; }
    goto L_08ABF418;
L_08ABF418:;
    v1 = LD32(s1+4);
    goto L_08ABF41C;
L_08ABF41C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08ABF3C8; }
    goto L_08ABF42C;
L_08ABF42C:;
    sp = sp + 32;
    return;
L_08ABF44C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08ABF3F8;
L_08ABF45C:;
    s0 = LD32(s0+4);
    goto L_08ABF410;
}

/* 08ABF464 */
rv_t func_08ABF464(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF464:;
    v0 = D_08AF9390 - (-27760);
    v0 = v0 - 27760;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_08955F18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABF480;
L_08ABF480:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF48C */
rv_t func_08ABF48C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF48C:;
    v0 = D_08AF9390 - (-27760);
    v0 = v0 - 27760;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08955F18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABF4AC;
L_08ABF4AC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABF4B4;
L_08ABF4B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF4C4 */
rv_t func_08ABF4C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF4C4:;
    v0 = D_08AF9390 - (-27760);
    v0 = v0 - 27760;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_08955F18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABF4E0;
L_08ABF4E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF4EC */
rv_t func_08ABF4EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF4EC:;
    v0 = D_08AF9390 - (-27760);
    v0 = v0 - 27760;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08955F18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABF50C;
L_08ABF50C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABF514;
L_08ABF514:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF524 */
rv_t func_08ABF524(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF524:;
    v0 = D_08AF9390 - (-27760);
    v0 = v0 - 27760;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_08955F18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABF540;
L_08ABF540:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF54C */
rv_t func_08ABF54C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF54C:;
    v0 = D_08AF9390 - (-27760);
    v0 = v0 - 27760;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08955F18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABF56C;
L_08ABF56C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABF574;
L_08ABF574:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF584 */
u64 func_08ABF584(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08ABF584:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08ABF5E4; }
    goto L_08ABF594;
L_08ABF594:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08ABF5E4; }
    goto L_08ABF5B8;
L_08ABF5B8:;
    a3 = LD32(a0);
    goto L_08ABF5BC;
L_08ABF5BC:;
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    v1 = a3 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08ABF5EC; }
    goto L_08ABF5D4;
L_08ABF5D4:;
    a0 = LD32(a0+4);
    goto L_08ABF5D8;
L_08ABF5D8:;
    cnd_ = a0 != 0;
    if (cnd_) { a3 = LD32(a0); goto L_08ABF5BC; }
    goto L_08ABF5E0;
L_08ABF5E0:;
    a3 = 0 + 0;
    goto L_08ABF5E4;
L_08ABF5E4:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08ABF5EC:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(a0+8); goto L_08ABF608; }
    goto L_08ABF5F4;
L_08ABF5F4:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08ABF5D8; }
    goto L_08ABF604;
L_08ABF604:;
    v0 = LD_U8(a0+8);
    goto L_08ABF608;
L_08ABF608:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08ABF5D8; }
    goto L_08ABF610;
L_08ABF610:;
    goto L_08ABF5E4;
}

/* 08ABF618 */
rv_t func_08ABF618(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF618:;
    v0 = D_08AF9390 - (-27760);
    v0 = v0 - 27760;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_08955F18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABF634;
L_08ABF634:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF640 */
rv_t func_08ABF640(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF640:;
    v0 = D_08AF9390 - (-27760);
    v0 = v0 - 27760;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08955F18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABF660;
L_08ABF660:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABF668;
L_08ABF668:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF678 */
rv_t func_08ABF678(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABF678:;
    v0 = D_08AF81F0 - (-32272);
    v0 = v0 - 32272;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF688 */
rv_t func_08ABF688(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF688:;
    v0 = D_08AF81F0 - (-32272);
    v0 = v0 - 32272;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABF6A4;
L_08ABF6A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF6B0 */
u64 func_08ABF6B0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABF6B0:;
    a2 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABF718; }
    goto L_08ABF6C0;
L_08ABF6C0:;
    a3 = LD32(a2);
    v1 = LD32(a2+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABF6D0;
L_08ABF6D0:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABF740; }
    goto L_08ABF6DC;
L_08ABF6DC:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABF728; }
    goto L_08ABF6F0;
L_08ABF6F0:;
    cnd_ = a1 != 0;
    a0 = LD32(a2+8);
    if (cnd_) { goto L_08ABF70C; }
    goto L_08ABF6F8;
L_08ABF6F8:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08ABF71C; }
    goto L_08ABF70C;
L_08ABF70C:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABF740; }
    goto L_08ABF718;
L_08ABF718:;
    v0 = LD32(a0+4);
    goto L_08ABF71C;
L_08ABF71C:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABF6F0; }
    goto L_08ABF724;
L_08ABF724:;
    a3 = LD32(a2);
    goto L_08ABF728;
L_08ABF728:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABF6D0;
L_08ABF740:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08ABF748 */
u32 func_08ABF748(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08ABF748:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08ABF79C; }
    goto L_08ABF758;
L_08ABF758:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08ABF79C; }
    goto L_08ABF77C;
L_08ABF77C:;
    a0 = LD32(v1);
    goto L_08ABF780;
L_08ABF780:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08ABF7A4; }
    goto L_08ABF78C;
L_08ABF78C:;
    v1 = LD32(v1+4);
    goto L_08ABF790;
L_08ABF790:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_08ABF780; }
    goto L_08ABF798;
L_08ABF798:;
    a3 = 0 + 0;
    goto L_08ABF79C;
L_08ABF79C:;
    v0 = a3 + 0;
    return v0;
L_08ABF7A4:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(v1+8); goto L_08ABF7C0; }
    goto L_08ABF7AC;
L_08ABF7AC:;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08ABF790; }
    goto L_08ABF7BC;
L_08ABF7BC:;
    v0 = LD_U8(v1+8);
    goto L_08ABF7C0;
L_08ABF7C0:;
    cnd_ = v0 != 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_08ABF78C; }
    goto L_08ABF7C8;
L_08ABF7C8:;
    goto L_08ABF79C;
}

/* 08ABF7D0 */
rv_t func_08ABF7D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF7D0:;
    v0 = D_08AF9600 - (-27136);
    v0 = v0 - 27136;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_089609FC(a0);
    goto L_08ABF7EC;
L_08ABF7EC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF7F8 */
rv_t func_08ABF7F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF7F8:;
    v0 = D_08AF9600 - (-27136);
    v0 = v0 - 27136;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_089609FC(a0);
    goto L_08ABF818;
L_08ABF818:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABF820;
L_08ABF820:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF830 */
rv_t func_08ABF830(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABF830:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF838 */
rv_t func_08ABF838(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABF838:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF840 */
u64 func_08ABF840(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_08ABF840:;
    v0 = 999;
    cnd_ = a1 == v0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08ABF890; }
    goto L_08ABF84C;
L_08ABF84C:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08ABF890; }
    goto L_08ABF870;
L_08ABF870:;
    v0 = LD32(a0);
    goto L_08ABF874;
L_08ABF874:;
    v1 = LD32(v0+4);
    cnd_ = v1 == a1;
    a2 = v0 + 0;
    if (cnd_) { goto L_08ABF898; }
    goto L_08ABF880;
L_08ABF880:;
    a0 = LD32(a0+4);
    goto L_08ABF884;
L_08ABF884:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08ABF874; }
    goto L_08ABF88C;
L_08ABF88C:;
    a2 = 0 + 0;
    goto L_08ABF890;
L_08ABF890:;
    v0 = a2 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08ABF898:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08ABF884; }
    goto L_08ABF8A4;
L_08ABF8A4:;
    goto L_08ABF890;
}

/* 08ABF8AC */
rv_t func_08ABF8AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF8AC:;
    v0 = D_08AF96C0 - (-26944);
    v0 = v0 - 26944;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08924F9C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABF8C8;
L_08ABF8C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF8D4 */
rv_t func_08ABF8D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF8D4:;
    v0 = D_08AF96C0 - (-26944);
    v0 = v0 - 26944;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08924F9C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABF8F4;
L_08ABF8F4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABF8FC;
L_08ABF8FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF90C */
rv_t func_08ABF90C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF90C:;
    v0 = D_08AF9728 - (-26840);
    v0 = v0 - 26840;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08924F9C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABF928;
L_08ABF928:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF934 */
rv_t func_08ABF934(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF934:;
    v0 = D_08AF9728 - (-26840);
    v0 = v0 - 26840;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08924F9C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABF954;
L_08ABF954:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABF95C;
L_08ABF95C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF96C */
rv_t func_08ABF96C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF96C:;
    v0 = D_08AF9758 - (-26792);
    v0 = v0 - 26792;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08961844(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABF988;
L_08ABF988:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF994 */
rv_t func_08ABF994(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABF994:;
    v0 = D_08AF9758 - (-26792);
    v0 = v0 - 26792;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08961844(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABF9B4;
L_08ABF9B4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABF9BC;
L_08ABF9BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABF9CC */
void func_08ABF9CC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08ABF9CC:;
    a2 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08ABFA34; }
    goto L_08ABF9DC;
L_08ABF9DC:;
    a3 = LD32(a2);
    v1 = LD32(a2+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08ABF9EC;
L_08ABF9EC:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08ABFA5C; }
    goto L_08ABF9F8;
L_08ABF9F8:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08ABFA44; }
    goto L_08ABFA0C;
L_08ABFA0C:;
    cnd_ = a1 != 0;
    a0 = LD32(a2+8);
    if (cnd_) { goto L_08ABFA28; }
    goto L_08ABFA14;
L_08ABFA14:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08ABFA38; }
    goto L_08ABFA28;
L_08ABFA28:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABFA5C; }
    goto L_08ABFA34;
L_08ABFA34:;
    v0 = LD32(a0+4);
    goto L_08ABFA38;
L_08ABFA38:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08ABFA0C; }
    goto L_08ABFA40;
L_08ABFA40:;
    a3 = LD32(a2);
    goto L_08ABFA44;
L_08ABFA44:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08ABF9EC;
L_08ABFA5C:;
    return;
}

/* 08ABFA64 */
rv_t func_08ABFA64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABFA64:;
    v0 = D_08AF97A8 - (-26712);
    v0 = v0 - 26712;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_08965988(a0, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABFA80;
L_08ABFA80:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABFA8C */
rv_t func_08ABFA8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABFA8C:;
    v0 = D_08AF97A8 - (-26712);
    v0 = v0 - 26712;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08965988(a0, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABFAAC;
L_08ABFAAC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABFAB4;
L_08ABFAB4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABFAC4 */
rv_t func_08ABFAC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABFAC4:;
    v0 = D_08AF9790 - (-26736);
    v0 = v0 - 26736;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_08965988(a0, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABFAE0;
L_08ABFAE0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABFAEC */
rv_t func_08ABFAEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABFAEC:;
    v0 = D_08AF9790 - (-26736);
    v0 = v0 - 26736;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08965988(a0, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABFB0C;
L_08ABFB0C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABFB14;
L_08ABFB14:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABFB24 */
rv_t func_08ABFB24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABFB24:;
    v0 = D_08AF97D8 - (-26664);
    v0 = v0 - 26664;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_0880B71C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABFB40;
L_08ABFB40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABFB4C */
rv_t func_08ABFB4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABFB4C:;
    v0 = D_08AF97D8 - (-26664);
    v0 = v0 - 26664;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0880B71C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABFB6C;
L_08ABFB6C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABFB74;
L_08ABFB74:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABFB84 */
rv_t func_08ABFB84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABFB84:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABFB8C */
rv_t func_08ABFB8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABFB8C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABFB94 */
rv_t func_08ABFB94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABFB94:;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABFB9C */
rv_t func_08ABFB9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABFB9C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABFBA4 */
float func_08ABFBA4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08ABFBA4:;
    sp = sp - 32;
    s5 = 0 + 0;
    s3 = a0 + 0;
    s0 = LD32(a0+4);
    cnd_ = s0 == 0;
    ST32(a0+4, 0);
    if (cnd_) { goto L_08ABFC44; }
    goto L_08ABFBD8;
L_08ABFBD8:;
    v0 = LD32(s0);
    v1 = LD32(v0);
    a0 = LD32(v1-16);
    v0 = v0 + a0;
    s1 = LD_U16(v0+8);
    cnd_ = s1 == 0;
    s4 = LD32(s0+4);
    if (cnd_) { goto L_08ABFCE0; }
    goto L_08ABFBF4;
L_08ABFBF4:;
    v1 = LD32(s3);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08ABFC10; }
    goto L_08ABFC00;
L_08ABFC00:;
    v0 = LD32(v1);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08ABFC68; }
    goto L_08ABFC10;
L_08ABFC10:;
    { rv_t r_ = func_08831FE8(t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABFC18;
L_08ABFC18:;
    v1 = v0 + 0;
    v0 = LD32(s3);
    ST32(v1, s1);
    ST32(v1+4, v0);
    ST32(v1+8, 0);
    ST32(s3, v1);
    goto L_08ABFC30;
L_08ABFC30:;
    v0 = LD32(v1+8);
    goto L_08ABFC34;
L_08ABFC34:;
    ST32(s0+4, v0);
    ST32(v1+8, s0);
    goto L_08ABFC3C;
L_08ABFC3C:;
    cnd_ = s4 != 0;
    s0 = s4 + 0;
    if (cnd_) { goto L_08ABFBD8; }
    goto L_08ABFC44;
L_08ABFC44:;
    sp = sp + 32;
    return f0;
L_08ABFC68:;
    v0 = LD32(v1);
    goto L_08ABFC6C;
L_08ABFC6C:;
    v0 = v0 < s1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABFCC0; }
    goto L_08ABFC78;
L_08ABFC78:;
    s2 = v1 + 0;
    v1 = LD32(v1+4);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08ABFC6C; }
    goto L_08ABFC88;
L_08ABFC88:;
    { rv_t r_ = func_08831FE8(t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABFC90;
L_08ABFC90:;
    v1 = v0 + 0;
    cnd_ = s2 == 0;
    ST32(v0+8, 0);
    if (cnd_) { goto L_08ABFCB0; }
    goto L_08ABFC9C;
L_08ABFC9C:;
    v0 = LD32(s2+4);
    ST32(v1+4, v0);
    ST32(s2+4, v1);
    goto L_08ABFCA8;
L_08ABFCA8:;
    ST32(v1, s1);
    goto L_08ABFC30;
L_08ABFCB0:;
    v0 = LD32(s3);
    ST32(v1+4, v0);
    ST32(s3, v1);
    goto L_08ABFCA8;
L_08ABFCC0:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08ABFC88; }
    goto L_08ABFCC8;
L_08ABFCC8:;
    v0 = LD32(v1);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08ABFC34; }
    goto L_08ABFCD8;
L_08ABFCD8:;
    goto L_08ABFC88;
L_08ABFCE0:;
    cnd_ = s5 == 0;
    if (cnd_) { ST32(s3+4, s0); goto L_08ABFCEC; }
    goto L_08ABFCE8;
L_08ABFCE8:;
    ST32(s5+4, s0);
    goto L_08ABFCEC;
L_08ABFCEC:;
    s5 = s0 + 0;
    goto L_08ABFC3C;
}

/* 08ABFCF4 */
void func_08ABFCF4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08ABFCF4:;
    sp = sp - 32;
    s4 = a0 + 0;
    s2 = LD32(a0);
    cnd_ = s2 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08ABFD78; }
    goto L_08ABFD20;
L_08ABFD20:;
    v0 = LD32(s2+8);
    goto L_08ABFD24;
L_08ABFD24:;
    s1 = 0 + 0;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08ABFD98; }
    goto L_08ABFD30;
L_08ABFD30:;
    v0 = LD_U8(s0+8);
    goto L_08ABFD34;
L_08ABFD34:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s0 + 0; goto L_08ABFDC8; }
    goto L_08ABFD3C;
L_08ABFD3C:;
    cnd_ = s1 == 0;
    v0 = LD32(s0+4);
    if (cnd_) { goto L_08ABFDC0; }
    goto L_08ABFD44;
L_08ABFD44:;
    ST32(s1+4, v0);
    goto L_08ABFD48;
L_08ABFD48:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08832050(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABFD54;
L_08ABFD54:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08ABFD34; }
    goto L_08ABFD5C;
L_08ABFD5C:;
    v0 = LD32(s2+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABFD98; }
    goto L_08ABFD68;
L_08ABFD68:;
    s3 = s2 + 0;
    s2 = LD32(s2+4);
    goto L_08ABFD70;
L_08ABFD70:;
    cnd_ = s2 != 0;
    if (cnd_) { v0 = LD32(s2+8); goto L_08ABFD24; }
    goto L_08ABFD78;
L_08ABFD78:;
    sp = sp + 32;
    return;
L_08ABFD98:;
    cnd_ = s3 == 0;
    v0 = LD32(s2+4);
    if (cnd_) { goto L_08ABFDB8; }
    goto L_08ABFDA0;
L_08ABFDA0:;
    ST32(s3+4, v0);
    goto L_08ABFDA4;
L_08ABFDA4:;
    a0 = s2 + 0;
    s2 = LD32(s2+4);
    { u64 r_ = func_08832008(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABFDB0;
L_08ABFDB0:;
    goto L_08ABFD70;
L_08ABFDB8:;
    ST32(s4, v0);
    goto L_08ABFDA4;
L_08ABFDC0:;
    ST32(s2+8, v0);
    goto L_08ABFD48;
L_08ABFDC8:;
    s0 = LD32(s0+4);
    goto L_08ABFD54;
}

/* 08ABFDD0 */
void func_08ABFDD0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08ABFDD0:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABFE04; }
    goto L_08ABFDDC;
L_08ABFDDC:;
    v0 = LD32(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08ABFE0C; }
    goto L_08ABFDE8;
L_08ABFDE8:;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08ABFE04; }
    goto L_08ABFDF4;
L_08ABFDF4:;
    v0 = LD32(a0+4);
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    ST32(a0+4, v1);
    if (cnd_) { goto L_08ABFDDC; }
    goto L_08ABFE04;
L_08ABFE04:;
    return;
L_08ABFE0C:;
    v1 = LD32(v0+8);
    ST32(a0+8, v1);
    return;
}

/* 08ABFE18 */
rv_t func_08ABFE18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABFE18:;
    v0 = D_08AF97D8 - (-26664);
    v0 = v0 - 26664;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_0880B71C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABFE34;
L_08ABFE34:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABFE40 */
rv_t func_08ABFE40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08ABFE40:;
    v0 = D_08AF97D8 - (-26664);
    v0 = v0 - 26664;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0880B71C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08ABFE60;
L_08ABFE60:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABFE68;
L_08ABFE68:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABFE78 */
rv_t func_08ABFE78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08ABFE78:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08ABFE80 */
u64 func_08ABFE80(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08ABFE80:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08ABFEE0; }
    goto L_08ABFE90;
L_08ABFE90:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08ABFEE0; }
    goto L_08ABFEB4;
L_08ABFEB4:;
    a3 = LD32(a0);
    goto L_08ABFEB8;
L_08ABFEB8:;
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    v1 = a3 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08ABFEE8; }
    goto L_08ABFED0;
L_08ABFED0:;
    a0 = LD32(a0+4);
    goto L_08ABFED4;
L_08ABFED4:;
    cnd_ = a0 != 0;
    if (cnd_) { a3 = LD32(a0); goto L_08ABFEB8; }
    goto L_08ABFEDC;
L_08ABFEDC:;
    a3 = 0 + 0;
    goto L_08ABFEE0;
L_08ABFEE0:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08ABFEE8:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(a0+8); goto L_08ABFF04; }
    goto L_08ABFEF0;
L_08ABFEF0:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08ABFED4; }
    goto L_08ABFF00;
L_08ABFF00:;
    v0 = LD_U8(a0+8);
    goto L_08ABFF04;
L_08ABFF04:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08ABFED4; }
    goto L_08ABFF0C;
L_08ABFF0C:;
    goto L_08ABFEE0;
}

/* 08ABFF14 */
u32 func_08ABFF14(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08ABFF14:;
    sp = sp - 64;
    v0 = D_08B2BB9C - (-17508);
    s3 = a0 + 0;
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_08AC0088; }
    goto L_08ABFF40;
L_08ABFF40:;
    v1 = D_08B28F44 - (-28860);
    v1 = v1 - 28860;
    v0 = LD32(v1+8);
    a0 = sp + 0;
    a1 = 1;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    s0 = 0 + 0;
    ST32(sp, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08AC0418(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABFF70;
L_08ABFF70:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08ABFFBC; }
    goto L_08ABFF7C;
L_08ABFF7C:;
    v1 = LD32(v0);
    goto L_08ABFF80;
L_08ABFF80:;
    a0 = sp + 0;
    cnd_ = v1 == 0;
    a1 = 1;
    if (cnd_) { goto L_08ABFFA4; }
    goto L_08ABFF8C;
L_08ABFF8C:;
    v0 = LD32(v1+76);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08ABFFA4; }
    goto L_08ABFF9C;
L_08ABFF9C:;
    cnd_ = s0 == s1;
    s0 = s0 + 1;
    if (cnd_) { goto L_08AC0058; }
    goto L_08ABFFA4;
L_08ABFFA4:;
    { u64 r_ = func_08AC0418(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08ABFFAC;
L_08ABFFAC:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08ABFF80; }
    goto L_08ABFFB8;
L_08ABFFB8:;
    a0 = LD32(sp);
    goto L_08ABFFBC;
L_08ABFFBC:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08AC0048; }
    goto L_08ABFFCC;
L_08ABFFCC:;
    v0 = LD32(s3+20);
    goto L_08ABFFD0;
L_08ABFFD0:;
    cnd_ = v0 == 0;
    v1 = D_08B1E450 - (-7088);
    if (cnd_) { goto L_08AC000C; }
    goto L_08ABFFD8;
L_08ABFFD8:;
    v0 = 52;
    { s64 p_ = (s64)(s32)s1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = LD32(s3+24);
    v0 = lo;
    a0 = v1 + v0;
    goto L_08ABFFEC;
L_08ABFFEC:;
    v0 = a0 + 0;
    sp = sp + 64;
    return v0;
L_08AC000C:;
    v0 = (u32)(s32)LD_S8(v1-7088);
    cnd_ = v0 != 0;
    v0 = D_08B1E46C - (-7060);
    if (cnd_) { goto L_08AC0024; }
    goto L_08AC0018;
L_08AC0018:;
    v0 = 1;
    ST8(v1-7088, v0);
    v0 = D_08B1E46C - (-7060);
    goto L_08AC0024;
L_08AC0024:;
    v1 = v0 - 7060;
    ST32(v0-7060, 0);
    v0 = D_08AEE2D0 - (-7472);
    a0 = v1 + 0;
    f0 = BITSF(LD32(v0-7472));
    ST32(v1+8, 0);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(v1+4, FBITS(f0));
    goto L_08ABFFEC;
L_08AC0048:;
    func_08AC0554(a0, 0, 0, 0);
    goto L_08AC0050;
L_08AC0050:;
    v0 = LD32(s3+20);
    goto L_08ABFFD0;
L_08AC0058:;
    a0 = LD32(sp);
    s0 = v1 + 28;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08AC0078; }
    goto L_08AC0070;
L_08AC0070:;
    a0 = s0 + 0;
    goto L_08ABFFEC;
L_08AC0078:;
    func_08AC0554(a0, 0, 0, 0);
    goto L_08AC0080;
L_08AC0080:;
    a0 = s0 + 0;
    goto L_08ABFFEC;
L_08AC0088:;
    v1 = D_08B28F24 - (-28892);
    v1 = v1 - 28892;
    v0 = LD32(v1+8);
    s2 = sp + 16;
    a0 = s2 + 0;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    a1 = 1;
    s0 = 0 + 0;
    ST32(sp+16, v1);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    { u64 r_ = func_08AC04B0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC00BC;
L_08AC00BC:;
    v0 = LD32(sp+24);
    cnd_ = v0 == 0;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_08AC0108; }
    goto L_08AC00C8;
L_08AC00C8:;
    v1 = LD32(v0);
    goto L_08AC00CC;
L_08AC00CC:;
    a0 = s2 + 0;
    cnd_ = v1 == 0;
    a1 = 1;
    if (cnd_) { goto L_08AC00F0; }
    goto L_08AC00D8;
L_08AC00D8:;
    v0 = LD32(v1+52);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC00F0; }
    goto L_08AC00E8;
L_08AC00E8:;
    cnd_ = s0 == s1;
    s0 = s0 + 1;
    if (cnd_) { goto L_08AC0128; }
    goto L_08AC00F0;
L_08AC00F0:;
    { u64 r_ = func_08AC04B0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC00F8;
L_08AC00F8:;
    v0 = LD32(sp+24);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AC00CC; }
    goto L_08AC0104;
L_08AC0104:;
    a0 = LD32(sp+16);
    goto L_08AC0108;
L_08AC0108:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08ABFFCC; }
    goto L_08AC0118;
L_08AC0118:;
    func_08AC0620(a0, 0, 0, 0);
    goto L_08AC0120;
L_08AC0120:;
    v0 = LD32(s3+20);
    goto L_08ABFFD0;
L_08AC0128:;
    a0 = LD32(sp+16);
    s0 = v1 + 4;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08AC0070; }
    goto L_08AC0140;
L_08AC0140:;
    func_08AC0620(a0, 0, 0, 0);
    goto L_08AC0148;
L_08AC0148:;
    a0 = s0 + 0;
    goto L_08ABFFEC;
}

/* 08AC0150 */
u32 func_08AC0150(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr48 = v[48], vr49 = v[49], vr50 = v[50], vr52 = v[52], vr53 = v[53], vr54 = v[54], vr56 = v[56], vr57 = v[57], vr58 = v[58];
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 176);
L_08AC0150:;
    sp = sp - 176;
    v0 = D_08B2BB9C - (-17508);
    s3 = a0 + 0;
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_08AC0350; }
    goto L_08AC017C;
L_08AC017C:;
    v1 = D_08B28F44 - (-28860);
    v1 = v1 - 28860;
    v0 = LD32(v1+8);
    a0 = sp + 0;
    a1 = 1;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    s0 = 0 + 0;
    ST32(sp, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08AC0418(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC01AC;
L_08AC01AC:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08AC01F8; }
    goto L_08AC01B8;
L_08AC01B8:;
    v1 = LD32(v0);
    goto L_08AC01BC;
L_08AC01BC:;
    a0 = sp + 0;
    cnd_ = v1 == 0;
    a1 = 1;
    if (cnd_) { goto L_08AC01E0; }
    goto L_08AC01C8;
L_08AC01C8:;
    v0 = LD32(v1+76);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC01E0; }
    goto L_08AC01D8;
L_08AC01D8:;
    cnd_ = s0 == s1;
    s0 = s0 + 1;
    if (cnd_) { goto L_08AC0320; }
    goto L_08AC01E0;
L_08AC01E0:;
    { u64 r_ = func_08AC0418(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC01E8;
L_08AC01E8:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AC01BC; }
    goto L_08AC01F4;
L_08AC01F4:;
    a0 = LD32(sp);
    goto L_08AC01F8;
L_08AC01F8:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08AC0310; }
    goto L_08AC0208;
L_08AC0208:;
    v0 = LD32(s3+20);
    goto L_08AC020C;
L_08AC020C:;
    cnd_ = v0 == 0;
    v1 = D_08B1E458 - (-7080);
    if (cnd_) { goto L_08AC024C; }
    goto L_08AC0214;
L_08AC0214:;
    v1 = 52;
    { s64 p_ = (s64)(s32)s1 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = LD32(s3+24);
    v1 = lo;
    v0 = v0 + v1;
    a0 = v0 + 12;
    goto L_08AC022C;
L_08AC022C:;
    v0 = a0 + 0;
    sp = sp + 176;
    { v[48]=vr48;v[49]=vr49;v[50]=vr50;v[52]=vr52;v[53]=vr53;v[54]=vr54;v[56]=vr56;v[57]=vr57;v[58]=vr58;return v0; }
L_08AC024C:;
    v0 = (u32)(s32)LD_S8(v1-7080);
    cnd_ = v0 != 0;
    {float m00=1.f;float m01=0.f;float m02=0.f;float m03=0.f;float m10=0.f;float m11=1.f;float m12=0.f;float m13=0.f;float m20=0.f;float m21=0.f;float m22=1.f;float m23=0.f;float m30=0.f;float m31=0.f;float m32=0.f;float m33=1.f;vr48=m00;vr49=m01;vr50=m02;v[51]=m03;vr52=m10;vr53=m11;vr54=m12;v[55]=m13;vr56=m20;vr57=m21;vr58=m22;v[59]=m23;v[60]=m30;v[61]=m31;v[62]=m32;v[63]=m33;}
    if (cnd_) { goto L_08AC0260; }
    goto L_08AC0258;
L_08AC0258:;
    v0 = 1;
    ST8(v1-7080, v0);
    goto L_08AC0260;
L_08AC0260:;
    {a1=FBITS(vr50);}
    f0 = BITSF(a1);
    {a1=FBITS(vr54);}
    f8 = BITSF(a1);
    {a1=FBITS(vr58);}
    f9 = BITSF(a1);
    {a1=FBITS(vr48);}
    f2 = BITSF(a1);
    {a1=FBITS(vr49);}
    f5 = BITSF(a1);
    {a1=FBITS(vr52);}
    f6 = BITSF(a1);
    {a1=FBITS(vr53);}
    f3 = BITSF(a1);
    {a1=FBITS(vr56);}
    f4 = BITSF(a1);
    v1 = D_08B1E478 - (-7048);
    v0 = v1 - 7048;
    f7 = f0;
    ST32(v1-7048, FBITS(f2));
    {a1=FBITS(vr57);}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    ST32(sp+36, FBITS(f5));
    a0 = v0 + 0;
    ST32(sp+40, FBITS(f7));
    ST32(sp+44, FBITS(f6));
    ST32(sp+48, FBITS(f3));
    ST32(sp+52, FBITS(f8));
    ST32(sp+56, FBITS(f4));
    ST32(sp+60, a1);
    ST32(sp+64, FBITS(f9));
    ST32(sp+32, FBITS(f2));
    ST32(v0+4, FBITS(f5));
    ST32(v0+8, FBITS(f7));
    ST32(v0+12, FBITS(f6));
    ST32(v0+16, FBITS(f3));
    ST32(v0+20, FBITS(f8));
    ST32(v0+24, FBITS(f4));
    ST32(v0+28, a1);
    ST32(v0+32, FBITS(f9));
    goto L_08AC022C;
L_08AC0310:;
    func_08AC0554(a0, 0, 0, 0);
    goto L_08AC0318;
L_08AC0318:;
    v0 = LD32(s3+20);
    goto L_08AC020C;
L_08AC0320:;
    a0 = LD32(sp);
    s0 = v1 + 40;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08AC0340; }
    goto L_08AC0338;
L_08AC0338:;
    a0 = s0 + 0;
    goto L_08AC022C;
L_08AC0340:;
    func_08AC0554(a0, 0, 0, 0);
    goto L_08AC0348;
L_08AC0348:;
    a0 = s0 + 0;
    goto L_08AC022C;
L_08AC0350:;
    v1 = D_08B28F24 - (-28892);
    v1 = v1 - 28892;
    v0 = LD32(v1+8);
    s2 = sp + 16;
    a0 = s2 + 0;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    a1 = 1;
    s0 = 0 + 0;
    ST32(sp+16, v1);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    { u64 r_ = func_08AC04B0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC0384;
L_08AC0384:;
    v0 = LD32(sp+24);
    cnd_ = v0 == 0;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_08AC03D0; }
    goto L_08AC0390;
L_08AC0390:;
    v1 = LD32(v0);
    goto L_08AC0394;
L_08AC0394:;
    a0 = s2 + 0;
    cnd_ = v1 == 0;
    a1 = 1;
    if (cnd_) { goto L_08AC03B8; }
    goto L_08AC03A0;
L_08AC03A0:;
    v0 = LD32(v1+52);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC03B8; }
    goto L_08AC03B0;
L_08AC03B0:;
    cnd_ = s0 == s1;
    s0 = s0 + 1;
    if (cnd_) { goto L_08AC03F0; }
    goto L_08AC03B8;
L_08AC03B8:;
    { u64 r_ = func_08AC04B0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC03C0;
L_08AC03C0:;
    v0 = LD32(sp+24);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AC0394; }
    goto L_08AC03CC;
L_08AC03CC:;
    a0 = LD32(sp+16);
    goto L_08AC03D0;
L_08AC03D0:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08AC0208; }
    goto L_08AC03E0;
L_08AC03E0:;
    func_08AC0620(a0, 0, 0, 0);
    goto L_08AC03E8;
L_08AC03E8:;
    v0 = LD32(s3+20);
    goto L_08AC020C;
L_08AC03F0:;
    a0 = LD32(sp+16);
    s0 = v1 + 16;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08AC0338; }
    goto L_08AC0408;
L_08AC0408:;
    func_08AC0620(a0, 0, 0, 0);
    goto L_08AC0410;
L_08AC0410:;
    a0 = s0 + 0;
    goto L_08AC022C;
    v[48]=vr48;v[49]=vr49;v[50]=vr50;v[52]=vr52;v[53]=vr53;v[54]=vr54;v[56]=vr56;v[57]=vr57;v[58]=vr58;
}

/* 08AC0418 */
u64 func_08AC0418(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08AC0418:;
    a2 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08AC0480; }
    goto L_08AC0428;
L_08AC0428:;
    a3 = LD32(a2);
    v1 = LD32(a2+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08AC0438;
L_08AC0438:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AC04A8; }
    goto L_08AC0444;
L_08AC0444:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08AC0490; }
    goto L_08AC0458;
L_08AC0458:;
    cnd_ = a1 != 0;
    a0 = LD32(a2+8);
    if (cnd_) { goto L_08AC0474; }
    goto L_08AC0460;
L_08AC0460:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08AC0484; }
    goto L_08AC0474;
L_08AC0474:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC04A8; }
    goto L_08AC0480;
L_08AC0480:;
    v0 = LD32(a0+4);
    goto L_08AC0484;
L_08AC0484:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08AC0458; }
    goto L_08AC048C;
L_08AC048C:;
    a3 = LD32(a2);
    goto L_08AC0490;
L_08AC0490:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08AC0438;
L_08AC04A8:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08AC04B0 */
u64 func_08AC04B0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08AC04B0:;
    a3 = LD32(a0+8);
    a2 = a0 + 0;
    cnd_ = a3 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08AC0524; }
    goto L_08AC04C0;
L_08AC04C0:;
    a3 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08AC04D0;
L_08AC04D0:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AC054C; }
    goto L_08AC04DC;
L_08AC04DC:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08AC0534; }
    goto L_08AC04F0;
L_08AC04F0:;
    cnd_ = a1 != 0;
    a3 = LD32(a2+8);
    if (cnd_) { goto L_08AC0518; }
    goto L_08AC04F8;
L_08AC04F8:;
    v1 = LD32(a3);
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a3+4); goto L_08AC0528; }
    goto L_08AC0518;
L_08AC0518:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC054C; }
    goto L_08AC0524;
L_08AC0524:;
    v0 = LD32(a3+4);
    goto L_08AC0528;
L_08AC0528:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08AC04F0; }
    goto L_08AC0530;
L_08AC0530:;
    a3 = LD32(a2);
    goto L_08AC0534;
L_08AC0534:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08AC04D0;
L_08AC054C:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08AC0554 */
void func_08AC0554(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AC0554:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AC05E8; }
    goto L_08AC0580;
L_08AC0580:;
    v0 = LD32(s1);
    goto L_08AC0584;
L_08AC0584:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08AC05D8; }
    goto L_08AC0598;
L_08AC0598:;
    v0 = LD_U8(s0+8);
    goto L_08AC059C;
L_08AC059C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08AC0618; }
    goto L_08AC05A4;
L_08AC05A4:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AC0608; }
    goto L_08AC05AC;
L_08AC05AC:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08AC05B4;
L_08AC05B4:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC05C0;
L_08AC05C0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08AC05CC;
L_08AC05CC:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08AC059C; }
    goto L_08AC05D4;
L_08AC05D4:;
    v1 = LD32(s1+4);
    goto L_08AC05D8;
L_08AC05D8:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AC0584; }
    goto L_08AC05E8;
L_08AC05E8:;
    sp = sp + 32;
    return;
L_08AC0608:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08AC05B4;
L_08AC0618:;
    s0 = LD32(s0+4);
    goto L_08AC05CC;
}

/* 08AC0620 */
void func_08AC0620(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AC0620:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AC06B4; }
    goto L_08AC064C;
L_08AC064C:;
    v0 = LD32(s1);
    goto L_08AC0650;
L_08AC0650:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08AC06A4; }
    goto L_08AC0664;
L_08AC0664:;
    v0 = LD_U8(s0+8);
    goto L_08AC0668;
L_08AC0668:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08AC06E4; }
    goto L_08AC0670;
L_08AC0670:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AC06D4; }
    goto L_08AC0678;
L_08AC0678:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08AC0680;
L_08AC0680:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC068C;
L_08AC068C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08AC0698;
L_08AC0698:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08AC0668; }
    goto L_08AC06A0;
L_08AC06A0:;
    v1 = LD32(s1+4);
    goto L_08AC06A4;
L_08AC06A4:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AC0650; }
    goto L_08AC06B4;
L_08AC06B4:;
    sp = sp + 32;
    return;
L_08AC06D4:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08AC0680;
L_08AC06E4:;
    s0 = LD32(s0+4);
    goto L_08AC0698;
}

/* 08AC06EC */
u64 func_08AC06EC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08AC06EC:;
    a3 = LD32(a0+8);
    a2 = a0 + 0;
    cnd_ = a3 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08AC0760; }
    goto L_08AC06FC;
L_08AC06FC:;
    a3 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08AC070C;
L_08AC070C:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AC0788; }
    goto L_08AC0718;
L_08AC0718:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08AC0770; }
    goto L_08AC072C;
L_08AC072C:;
    cnd_ = a1 != 0;
    a3 = LD32(a2+8);
    if (cnd_) { goto L_08AC0754; }
    goto L_08AC0734;
L_08AC0734:;
    v1 = LD32(a3);
    v0 = LD32(v1);
    a0 = LD32(v0-16);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a3+4); goto L_08AC0764; }
    goto L_08AC0754;
L_08AC0754:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC0788; }
    goto L_08AC0760;
L_08AC0760:;
    v0 = LD32(a3+4);
    goto L_08AC0764;
L_08AC0764:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08AC072C; }
    goto L_08AC076C;
L_08AC076C:;
    a3 = LD32(a2);
    goto L_08AC0770;
L_08AC0770:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08AC070C;
L_08AC0788:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08AC0790 */
u64 func_08AC0790(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AC0790:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AC0824; }
    goto L_08AC07BC;
L_08AC07BC:;
    v0 = LD32(s1);
    goto L_08AC07C0;
L_08AC07C0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08AC0814; }
    goto L_08AC07D4;
L_08AC07D4:;
    v0 = LD_U8(s0+8);
    goto L_08AC07D8;
L_08AC07D8:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08AC0854; }
    goto L_08AC07E0;
L_08AC07E0:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AC0844; }
    goto L_08AC07E8;
L_08AC07E8:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08AC07F0;
L_08AC07F0:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC07FC;
L_08AC07FC:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08AC0808;
L_08AC0808:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08AC07D8; }
    goto L_08AC0810;
L_08AC0810:;
    v1 = LD32(s1+4);
    goto L_08AC0814;
L_08AC0814:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AC07C0; }
    goto L_08AC0824;
L_08AC0824:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08AC0844:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08AC07F0;
L_08AC0854:;
    s0 = LD32(s0+4);
    goto L_08AC0808;
}

/* 08AC085C */
u64 func_08AC085C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08AC085C:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AC08B0; }
    goto L_08AC086C;
L_08AC086C:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08AC08B0; }
    goto L_08AC0890;
L_08AC0890:;
    a0 = LD32(v1);
    goto L_08AC0894;
L_08AC0894:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AC08B8; }
    goto L_08AC08A0;
L_08AC08A0:;
    v1 = LD32(v1+4);
    goto L_08AC08A4;
L_08AC08A4:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_08AC0894; }
    goto L_08AC08AC;
L_08AC08AC:;
    a3 = 0 + 0;
    goto L_08AC08B0;
L_08AC08B0:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AC08B8:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(v1+8); goto L_08AC08D4; }
    goto L_08AC08C0;
L_08AC08C0:;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08AC08A4; }
    goto L_08AC08D0;
L_08AC08D0:;
    v0 = LD_U8(v1+8);
    goto L_08AC08D4;
L_08AC08D4:;
    cnd_ = v0 != 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_08AC08A0; }
    goto L_08AC08DC;
L_08AC08DC:;
    goto L_08AC08B0;
}

/* 08AC08E4 */
u64 func_08AC08E4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08AC08E4:;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v0+8); goto L_08AC0900; }
    goto L_08AC08F0;
L_08AC08F0:;
    v0 = LD32(a0);
    v1 = LD32(v0);
    ST32(a0+4, v1);
    return (u64)v0 | ((u64)v1 << 32);
L_08AC0900:;
    ST32(a0+4, v0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08AC0908 */
rv_t func_08AC0908(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC0908:;
    v0 = D_08AF9A08 - (-26104);
    v0 = v0 - 26104;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_0889DB50(a0);
    goto L_08AC0924;
L_08AC0924:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC0930 */
rv_t func_08AC0930(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC0930:;
    v0 = D_08AF9A08 - (-26104);
    v0 = v0 - 26104;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0889DB50(a0);
    goto L_08AC0950;
L_08AC0950:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC0958;
L_08AC0958:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC0968 */
rv_t func_08AC0968(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC0968:;
    v0 = D_08AF11C0 - (4544);
    v0 = v0 + 4544;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_0883F214(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC0984;
L_08AC0984:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC0990 */
rv_t func_08AC0990(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC0990:;
    v0 = D_08AF11C0 - (4544);
    v0 = v0 + 4544;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0883F214(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC09B0;
L_08AC09B0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC09B8;
L_08AC09B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC09C8 */
rv_t func_08AC09C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08AC09C8:;
    sp = sp - 96;
    s3 = a0 + 0;
    { rv_t r_ = func_088400C8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC09EC;
L_08AC09EC:;
    a0 = LD32(s3+152);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AC0D44; }
    goto L_08AC09F8;
L_08AC09F8:;
    v0 = LD32(a0+16);
    cnd_ = v0 == 0;
    s2 = D_08ADDB18 - (-9448);
    if (cnd_) { goto L_08AC0D44; }
    goto L_08AC0A04;
L_08AC0A04:;
    v0 = LD32(s2-9448);
    ST32(sp+32, 0);
    s0 = 0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AC0DC4; }
    goto L_08AC0A18;
L_08AC0A18:;
    a0 = LD32(a0+16);
    s1 = s2 - 9448;
    v1 = v1 + s1;
    s0 = s0 + 1;
    a2 = sp + 32;
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08AC0A38; }
    goto L_08AC0A34;
L_08AC0A34:;
    a1 = LD32(a0+64);
    goto L_08AC0A38;
L_08AC0A38:;
    a0 = LD32(v1);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC0A40;
L_08AC0A40:;
    a0 = LD32(sp+32);
    v1 = s0 << 2;
    cnd_ = a0 != 0;
    v0 = v1 + s1;
    if (cnd_) { goto L_08AC0A6C; }
    goto L_08AC0A50;
L_08AC0A50:;
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC0A64; }
    goto L_08AC0A5C;
L_08AC0A5C:;
    a0 = LD32(s3+152);
    goto L_08AC0A18;
L_08AC0A64:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AC0D44; }
    goto L_08AC0A6C;
L_08AC0A6C:;
    a1 = 0xbeeb0000u;
    a1 = a1 | 0x1a1c;
    a2 = 4;
    { u64 r_ = func_0896CFC8(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC0A7C;
L_08AC0A7C:;
    s1 = v0 + 0;
    v0 = 4;
    cnd_ = s1 == v0;
    s0 = D_08C2933C - (-27844);
    if (cnd_) { goto L_08AC0D40; }
    goto L_08AC0A8C;
L_08AC0A8C:;
    s0 = s0 - 27844;
    s0 = s0 + 1312;
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = func_0897843C(a0, a1);
    goto L_08AC0AA0;
L_08AC0AA0:;
    v1 = v0 >> 24;
    f5 = BITSF(v1);
    v1 = v0 & 0xff;
    f0 = BITSF(v1);
    v1 = (v0 >> 8) & 0xff;
    v0 = (v0 >> 16) & 0xff;
    f1 = BITSF(v1);
    f2 = BITSF(v0);
    f3 = (float)(s32)FBITS(f0);
    f4 = (float)(s32)FBITS(f1);
    f0 = (float)(s32)FBITS(f2);
    f1 = (float)(s32)FBITS(f5);
    v0 = D_08AEE41C - (-7140);
    f20 = BITSF(LD32(v0-7140));
    a0 = s0 + 0;
    a1 = s1 + 0;
    f3 = f3 * f20;
    f4 = f4 * f20;
    f0 = f0 * f20;
    f1 = f1 * f20;
    ST32(sp+8, FBITS(f3));
    ST32(sp+4, FBITS(f4));
    ST32(sp, FBITS(f0));
    ST32(sp+12, FBITS(f1));
    v0 = func_0897848C(a0, a1);
    goto L_08AC0B04;
L_08AC0B04:;
    v1 = v0 >> 24;
    f5 = BITSF(v1);
    v1 = v0 & 0xff;
    f2 = BITSF(v1);
    v1 = (v0 >> 8) & 0xff;
    v0 = (v0 >> 16) & 0xff;
    f3 = BITSF(v1);
    f4 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f1 = (float)(s32)FBITS(f3);
    f2 = (float)(s32)FBITS(f4);
    f3 = (float)(s32)FBITS(f5);
    a0 = LD32(s3+152);
    f0 = f0 * f20;
    f1 = f1 * f20;
    f3 = f3 * f20;
    f2 = f2 * f20;
    v0 = LD32(a0+256);
    ST32(sp+24, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+16, FBITS(f2));
    cnd_ = v0 == 0;
    ST32(sp+28, FBITS(f3));
    if (cnd_) { goto L_08AC0B6C; }
    goto L_08AC0B60;
L_08AC0B60:;
    { rv_t r_ = func_0880B598(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC0B68;
L_08AC0B68:;
    a0 = LD32(s3+152);
    goto L_08AC0B6C;
L_08AC0B6C:;
    v1 = D_08AEE420 - (-7136);
    f0 = BITSF(LD32(v1-7136));
    f1 = BITSF(LD32(sp+12));
    f2 = BITSF(0);
    f1 = f1 * f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    a1 = sp + 0;
    if (cnd_) { goto L_08AC0DB4; }
    goto L_08AC0B90;
L_08AC0B90:;
    a3 = D_08AEE424 - (-7132);
    f0 = BITSF(LD32(a3-7132));
    f0 = f1 + f0;
    goto L_08AC0B9C;
L_08AC0B9C:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(v1-7136));
    v0 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    s1 = v0 << 8;
    if (cnd_) { goto L_08AC0DA8; }
    goto L_08AC0BC4;
L_08AC0BC4:;
    f0 = BITSF(LD32(a3-7132));
    f0 = f2 + f0;
    goto L_08AC0BCC;
L_08AC0BCC:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a1+4));
    v0 = FBITS(f0);
    f0 = BITSF(LD32(v1-7136));
    s1 = s1 + v0;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s1 = s1 << 8;
    if (cnd_) { goto L_08AC0D9C; }
    goto L_08AC0BF8;
L_08AC0BF8:;
    f0 = BITSF(LD32(a3-7132));
    f0 = f1 + f0;
    goto L_08AC0C00;
L_08AC0C00:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a1));
    v0 = FBITS(f0);
    f0 = BITSF(LD32(v1-7136));
    s1 = s1 + v0;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s1 = s1 << 8;
    if (cnd_) { goto L_08AC0D90; }
    goto L_08AC0C2C;
L_08AC0C2C:;
    f0 = BITSF(LD32(a3-7132));
    f0 = f1 + f0;
    goto L_08AC0C34;
L_08AC0C34:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(sp+28));
    a2 = sp + 16;
    v0 = FBITS(f0);
    f0 = BITSF(LD32(v1-7136));
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s1 = s1 + v0;
    if (cnd_) { goto L_08AC0D84; }
    goto L_08AC0C60;
L_08AC0C60:;
    f0 = BITSF(LD32(a3-7132));
    f0 = f1 + f0;
    goto L_08AC0C68;
L_08AC0C68:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(a2+8));
    f1 = BITSF(LD32(v1-7136));
    a1 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    s0 = a1 << 8;
    if (cnd_) { goto L_08AC0D78; }
    goto L_08AC0C90;
L_08AC0C90:;
    f0 = BITSF(LD32(a3-7132));
    f0 = f2 + f0;
    goto L_08AC0C98;
L_08AC0C98:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a2+4));
    v0 = FBITS(f0);
    f0 = BITSF(LD32(v1-7136));
    s0 = s0 + v0;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s0 = s0 << 8;
    if (cnd_) { goto L_08AC0D6C; }
    goto L_08AC0CC4;
L_08AC0CC4:;
    f0 = BITSF(LD32(a3-7132));
    f0 = f1 + f0;
    goto L_08AC0CCC;
L_08AC0CCC:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a2));
    v0 = FBITS(f0);
    f0 = BITSF(LD32(v1-7136));
    s0 = s0 + v0;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s0 = s0 << 8;
    if (cnd_) { goto L_08AC0D60; }
    goto L_08AC0CF8;
L_08AC0CF8:;
    f0 = BITSF(LD32(a3-7132));
    f0 = f1 + f0;
    goto L_08AC0D00;
L_08AC0D00:;
    f0 = BITSF(F2I(f0, 1));
    a0 = LD32(a0+16);
    v0 = FBITS(f0);
    s0 = s0 + v0;
    { u64 r_ = func_088F3ECC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC0D14;
L_08AC0D14:;
    a2 = v0 + 0;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08A6A46C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC0D24;
L_08AC0D24:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AC0D40; }
    goto L_08AC0D2C;
L_08AC0D2C:;
    v1 = LD32(s3+152);
    v0 = RS_FADDR(func_08AB122C, 0x08AB122Cu) - (4652);
    v0 = v0 + 4652;
    ST32(v1+260, v0);
    ST32(v1+256, a0);
    goto L_08AC0D40;
L_08AC0D40:;
    goto L_08AC0D44;
L_08AC0D44:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_08AC0D60:;
    f0 = BITSF(LD32(a3-7132));
    f0 = f1 - f0;
    goto L_08AC0D00;
L_08AC0D6C:;
    f0 = BITSF(LD32(a3-7132));
    f0 = f1 - f0;
    goto L_08AC0CCC;
L_08AC0D78:;
    f0 = BITSF(LD32(a3-7132));
    f0 = f2 - f0;
    goto L_08AC0C98;
L_08AC0D84:;
    f0 = BITSF(LD32(a3-7132));
    f0 = f1 - f0;
    goto L_08AC0C68;
L_08AC0D90:;
    f0 = BITSF(LD32(a3-7132));
    f0 = f1 - f0;
    goto L_08AC0C34;
L_08AC0D9C:;
    f0 = BITSF(LD32(a3-7132));
    f0 = f1 - f0;
    goto L_08AC0C00;
L_08AC0DA8:;
    f0 = BITSF(LD32(a3-7132));
    f0 = f2 - f0;
    goto L_08AC0BCC;
L_08AC0DB4:;
    a3 = D_08AEE424 - (-7132);
    f0 = BITSF(LD32(a3-7132));
    f0 = f1 - f0;
    goto L_08AC0B9C;
L_08AC0DC4:;
    a0 = LD32(sp+32);
    goto L_08AC0A64;
}

/* 08AC0DCC */
rv_t func_08AC0DCC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC0DCC:;
    v0 = D_08AF9AD0 - (-25904);
    v0 = v0 - 25904;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_0883CAE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC0DE8;
L_08AC0DE8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC0DF4 */
rv_t func_08AC0DF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC0DF4:;
    v0 = D_08AF9AD0 - (-25904);
    v0 = v0 - 25904;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_0883CAE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC0E14;
L_08AC0E14:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC0E1C;
L_08AC0E1C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC0E2C */
void func_08AC0E2C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08AC0E2C:;
    a3 = LD32(a0+8);
    a2 = a0 + 0;
    cnd_ = a3 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08AC0EA0; }
    goto L_08AC0E3C;
L_08AC0E3C:;
    a3 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08AC0E4C;
L_08AC0E4C:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AC0EC8; }
    goto L_08AC0E58;
L_08AC0E58:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08AC0EB0; }
    goto L_08AC0E6C;
L_08AC0E6C:;
    cnd_ = a1 != 0;
    a3 = LD32(a2+8);
    if (cnd_) { goto L_08AC0E94; }
    goto L_08AC0E74;
L_08AC0E74:;
    v1 = LD32(a3);
    v0 = LD32(v1);
    a0 = LD32(v0-16);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a3+4); goto L_08AC0EA4; }
    goto L_08AC0E94;
L_08AC0E94:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC0EC8; }
    goto L_08AC0EA0;
L_08AC0EA0:;
    v0 = LD32(a3+4);
    goto L_08AC0EA4;
L_08AC0EA4:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08AC0E6C; }
    goto L_08AC0EAC;
L_08AC0EAC:;
    a3 = LD32(a2);
    goto L_08AC0EB0;
L_08AC0EB0:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08AC0E4C;
L_08AC0EC8:;
    return;
}

/* 08AC0ED0 */
u64 func_08AC0ED0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08AC0ED0:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AC0F0C; }
    goto L_08AC0EDC;
L_08AC0EDC:;
    t0 = v0 + 0;
    a3 = a0 + 0;
    v0 = LD32(t0);
    goto L_08AC0EE8;
L_08AC0EE8:;
    a2 = t0 + 12;
    cnd_ = v0 == a1;
    v1 = a1 < v0;
    if (cnd_) { goto L_08AC0F14; }
    goto L_08AC0EF4;
L_08AC0EF4:;
    a3 = t0 + 8;
    if (v1 == 0) a3 = a2;
    t0 = LD32(a3);
    cnd_ = t0 != 0;
    if (cnd_) { v0 = LD32(t0); goto L_08AC0EE8; }
    goto L_08AC0F08;
L_08AC0F08:;
    v1 = 0 + 0;
    goto L_08AC0F0C;
L_08AC0F0C:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AC0F14:;
    cnd_ = t0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AC0F0C; }
    goto L_08AC0F1C;
L_08AC0F1C:;
    v1 = LD32(t0+8);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(t0+12); goto L_08AC0FAC; }
    goto L_08AC0F28;
L_08AC0F28:;
    a1 = LD32(t0+12);
    cnd_ = a1 == 0;
    a2 = LD32(a0+4);
    if (cnd_) { goto L_08AC0FA4; }
    goto L_08AC0F34;
L_08AC0F34:;
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, a1); goto L_08AC0F9C; }
    goto L_08AC0F40;
L_08AC0F40:;
    ST32(a3, v1);
    t1 = LD32(t0+12);
    goto L_08AC0F48;
L_08AC0F48:;
    v1 = LD32(a3);
    a1 = LD32(t1);
    goto L_08AC0F50;
L_08AC0F50:;
    v0 = LD32(v1);
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AC0F8C; }
    goto L_08AC0F60;
L_08AC0F60:;
    v0 = LD32(v1+12);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+12, t1); goto L_08AC0F74; }
    goto L_08AC0F6C;
L_08AC0F6C:;
    v1 = v0 + 0;
    goto L_08AC0F50;
L_08AC0F74:;
    v0 = a2 - 1;
    ST32(a0+4, v0);
    v1 = t0 + 0;
    ST32(t0+8, 0);
    ST32(t0+12, 0);
    goto L_08AC0F0C;
L_08AC0F8C:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v0 + 0; goto L_08AC0F50; }
    goto L_08AC0F94;
L_08AC0F94:;
    ST32(v1+8, t1);
    goto L_08AC0F74;
L_08AC0F9C:;
    t1 = LD32(t0+8);
    goto L_08AC0F48;
L_08AC0FA4:;
    ST32(a3, v1);
    goto L_08AC0F74;
L_08AC0FAC:;
    a2 = LD32(a0+4);
    ST32(a3, v0);
    goto L_08AC0F74;
}

/* 08AC0FB8 */
rv_t func_08AC0FB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC0FB8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC0FC0 */
rv_t func_08AC0FC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC0FC0:;
    v0 = D_08AF9BB0 - (-25680);
    v0 = v0 - 25680;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_0897B0A4(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC0FDC;
L_08AC0FDC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC0FE8 */
rv_t func_08AC0FE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC0FE8:;
    v0 = D_08AF9BB0 - (-25680);
    v0 = v0 - 25680;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0897B0A4(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC1008;
L_08AC1008:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC1010;
L_08AC1010:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC1020 */
rv_t func_08AC1020(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC1020:;
    v0 = D_08AF9B98 - (-25704);
    v0 = v0 - 25704;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0897B0A4(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC1040;
L_08AC1040:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC1048;
L_08AC1048:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC1058 */
rv_t func_08AC1058(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC1058:;
    v0 = D_08AF9B98 - (-25704);
    v0 = v0 - 25704;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_0897B0A4(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC1074;
L_08AC1074:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC1080 */
rv_t func_08AC1080(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC1080:;
    v0 = D_08AF9B98 - (-25704);
    v0 = v0 - 25704;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_0897B0A4(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC109C;
L_08AC109C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC10A8 */
rv_t func_08AC10A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC10A8:;
    v0 = D_08AF9B98 - (-25704);
    v0 = v0 - 25704;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0897B0A4(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC10C8;
L_08AC10C8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC10D0;
L_08AC10D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC10E0 */
rv_t func_08AC10E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC10E0:;
    v0 = D_08AF9B68 - (-25752);
    v0 = v0 - 25752;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_0897B0A4(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC10FC;
L_08AC10FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC1108 */
rv_t func_08AC1108(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC1108:;
    v0 = D_08AF9B68 - (-25752);
    v0 = v0 - 25752;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0897B0A4(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC1128;
L_08AC1128:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC1130;
L_08AC1130:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC1140 */
rv_t func_08AC1140(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC1140:;
    v0 = D_08AF9B50 - (-25776);
    v0 = v0 - 25776;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_0897B0A4(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC115C;
L_08AC115C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC1168 */
rv_t func_08AC1168(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC1168:;
    v0 = D_08AF9B50 - (-25776);
    v0 = v0 - 25776;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0897B0A4(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC1188;
L_08AC1188:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC1190;
L_08AC1190:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC11A0 */
rv_t func_08AC11A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC11A0:;
    v0 = D_08AF9B38 - (-25800);
    v0 = v0 - 25800;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_0897B0A4(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC11BC;
L_08AC11BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC11C8 */
rv_t func_08AC11C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC11C8:;
    v0 = D_08AF9B38 - (-25800);
    v0 = v0 - 25800;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0897B0A4(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC11E8;
L_08AC11E8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC11F0;
L_08AC11F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC1200 */
void func_08AC1200(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08AC1200:;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v0+8); goto L_08AC121C; }
    goto L_08AC120C;
L_08AC120C:;
    v0 = LD32(a0);
    v1 = LD32(v0);
    ST32(a0+4, v1);
    return;
L_08AC121C:;
    ST32(a0+4, v0);
    return;
}

/* 08AC1224 */
void func_08AC1224(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC1224:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AC1298; }
    goto L_08AC1250;
L_08AC1250:;
    v0 = LD32(s0+12);
    goto L_08AC1254;
L_08AC1254:;
    a0 = s1 + 0;
    a2 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AC1288; }
    goto L_08AC1264;
L_08AC1264:;
    a0 = LD32(s0);
    goto L_08AC1268;
L_08AC1268:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC1270;
L_08AC1270:;
    sp = sp + 16;
    return;
L_08AC1288:;
    func_08AC1224(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AC1290;
L_08AC1290:;
    a0 = LD32(s0);
    goto L_08AC1268;
L_08AC1298:;
    func_08AC1224(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AC12A0;
L_08AC12A0:;
    v0 = LD32(s0+12);
    goto L_08AC1254;
}

/* 08AC12A8 */
void func_08AC12A8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC12A8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+12);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AC1320; }
    goto L_08AC12C8;
L_08AC12C8:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08AC130C; }
    goto L_08AC12D4;
L_08AC12D4:;
    v0 = s1 << 2;
    goto L_08AC12D8;
L_08AC12D8:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s0 + 0;
    s1 = s1 + 1;
    { u64 r_ = func_08AC0ED0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC12EC;
L_08AC12EC:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC12F4;
L_08AC12F4:;
    v0 = LD32(s0+16);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s0+12);
    if (cnd_) { goto L_08AC130C; }
    goto L_08AC1304;
L_08AC1304:;
    v0 = s1 << 2;
    goto L_08AC12D8;
L_08AC130C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AC1330; }
    goto L_08AC1314;
L_08AC1314:;
    ST32(s0+16, 0);
    goto L_08AC1318;
L_08AC1318:;
    ST32(s0+12, 0);
    goto L_08AC1320;
L_08AC1320:;
    sp = sp + 16;
    return;
L_08AC1330:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC1338;
L_08AC1338:;
    ST32(s0+16, 0);
    goto L_08AC1318;
}

/* 08AC1340 */
u64 func_08AC1340(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC1340:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AC1384; }
    goto L_08AC1358;
L_08AC1358:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AC1360;
L_08AC1360:;
    a0 = v0 + 12;
    a3 = v0 + 8;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AC1398; }
    goto L_08AC1378;
L_08AC1378:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AC1360; }
    goto L_08AC1384;
L_08AC1384:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AC1398; }
    goto L_08AC1390;
L_08AC1390:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AC13A8; }
    goto L_08AC1398;
L_08AC1398:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AC13A8:;
    a2 = 1;
    { u64 r_ = func_08AC1340(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC13B0;
L_08AC13B0:;
    t0 = v0 + 0;
    goto L_08AC1398;
}

/* 08AC13B8 */
void func_08AC13B8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC13B8:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AC1418; }
    goto L_08AC13DC;
L_08AC13DC:;
    v0 = LD32(s0+12);
    goto L_08AC13E0;
L_08AC13E0:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AC1408; }
    goto L_08AC13EC;
L_08AC13EC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC13F4;
L_08AC13F4:;
    sp = sp + 16;
    return;
L_08AC1408:;
    func_08AC13B8(a0, a1, t1, t2, t3);
    goto L_08AC1410;
L_08AC1410:;
    goto L_08AC13EC;
L_08AC1418:;
    func_08AC13B8(a0, a1, t1, t2, t3);
    goto L_08AC1420;
L_08AC1420:;
    v0 = LD32(s0+12);
    goto L_08AC13E0;
}

/* 08AC1428 */
rv_t func_08AC1428(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC1428:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_0897DAC0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC1440;
L_08AC1440:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC144C */
rv_t func_08AC144C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC144C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_0897DB98(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC1464;
L_08AC1464:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC1470 */
rv_t func_08AC1470(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC1470:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_0897DDA0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC1488;
L_08AC1488:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC1494 */
void func_08AC1494(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC1494:;
    sp = sp - 16;
    a2 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a1);
    a0 = LD32(a0+4);
    a1 = LD32(s0);
    v1 = LD32(v0-12);
    a0 = a0 - 1;
    v1 = a2 + v1;
    v0 = LD32(v1+4);
    v0 = v0 & a0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AC14FC; }
    goto L_08AC14DC;
L_08AC14DC:;
    a1 = v0 + 0;
    v0 = LD32(a0);
    goto L_08AC14E4;
L_08AC14E4:;
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AC1510; }
    goto L_08AC14EC;
L_08AC14EC:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AC14E4; }
    goto L_08AC14FC;
L_08AC14FC:;
    v0 = 0 + 0;
    goto L_08AC1500;
L_08AC1500:;
    sp = sp + 16;
    return;
L_08AC1510:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AC1524; }
    goto L_08AC1518;
L_08AC1518:;
    ST8(a0+8, v0);
    goto L_08AC151C;
L_08AC151C:;
    v0 = 1;
    goto L_08AC1500;
L_08AC1524:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC1548; }
    goto L_08AC152C;
L_08AC152C:;
    ST32(v1+4, v0);
    goto L_08AC1530;
L_08AC1530:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC1538;
L_08AC1538:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AC151C;
L_08AC1548:;
    ST32(a1, v0);
    goto L_08AC1530;
}

/* 08AC1550 */
rv_t func_08AC1550(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC1550:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC1558 */
rv_t func_08AC1558(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC1558:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC1560 */
rv_t func_08AC1560(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC1560:;
    v0 = LD32(a0+96);
    v0 = (v0 >> 3) & 0x1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC156C */
rv_t func_08AC156C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08AC156C:;
    v0 = LD32(a0+96);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AC1584; }
    goto L_08AC157C;
L_08AC157C:;
    v0 = LD_U8(a0+308);
    v1 = 0 < v0;
    goto L_08AC1584;
L_08AC1584:;
    v0 = v1 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC158C */
void func_08AC158C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC158C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AC15E0; }
    goto L_08AC15C4;
L_08AC15C4:;
    v0 = LD32(a0);
    goto L_08AC15C8;
L_08AC15C8:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AC15F4; }
    goto L_08AC15D0;
L_08AC15D0:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AC15C8; }
    goto L_08AC15E0;
L_08AC15E0:;
    v0 = 0 + 0;
    goto L_08AC15E4;
L_08AC15E4:;
    sp = sp + 16;
    return;
L_08AC15F4:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AC1608; }
    goto L_08AC15FC;
L_08AC15FC:;
    ST8(a0+8, v0);
    goto L_08AC1600;
L_08AC1600:;
    v0 = 1;
    goto L_08AC15E4;
L_08AC1608:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC162C; }
    goto L_08AC1610;
L_08AC1610:;
    ST32(a2+4, v0);
    goto L_08AC1614;
L_08AC1614:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC161C;
L_08AC161C:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AC1600;
L_08AC162C:;
    ST32(v1, v0);
    goto L_08AC1614;
}

/* 08AC1634 */
rv_t func_08AC1634(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC1634:;
    v0 = a0 + 46;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC163C */
rv_t func_08AC163C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC163C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC1644 */
rv_t func_08AC1644(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC1644:;
    v0 = LD32(a0+96);
    v0 = (v0 >> 2) & 0x1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC1650 */
rv_t func_08AC1650(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC1650:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC1658 */
void func_08AC1658(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC1658:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AC16AC; }
    goto L_08AC1690;
L_08AC1690:;
    v0 = LD32(a0);
    goto L_08AC1694;
L_08AC1694:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AC16C0; }
    goto L_08AC169C;
L_08AC169C:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AC1694; }
    goto L_08AC16AC;
L_08AC16AC:;
    v0 = 0 + 0;
    goto L_08AC16B0;
L_08AC16B0:;
    sp = sp + 16;
    return;
L_08AC16C0:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AC16D4; }
    goto L_08AC16C8;
L_08AC16C8:;
    ST8(a0+8, v0);
    goto L_08AC16CC;
L_08AC16CC:;
    v0 = 1;
    goto L_08AC16B0;
L_08AC16D4:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC16F8; }
    goto L_08AC16DC;
L_08AC16DC:;
    ST32(a2+4, v0);
    goto L_08AC16E0;
L_08AC16E0:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC16E8;
L_08AC16E8:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AC16CC;
L_08AC16F8:;
    ST32(v1, v0);
    goto L_08AC16E0;
}

/* 08AC1700 */
u64 func_08AC1700(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08AC1700:;
    a2 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08AC1768; }
    goto L_08AC1710;
L_08AC1710:;
    a3 = LD32(a2);
    v1 = LD32(a2+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08AC1720;
L_08AC1720:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AC1790; }
    goto L_08AC172C;
L_08AC172C:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08AC1778; }
    goto L_08AC1740;
L_08AC1740:;
    cnd_ = a1 != 0;
    a0 = LD32(a2+8);
    if (cnd_) { goto L_08AC175C; }
    goto L_08AC1748;
L_08AC1748:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08AC176C; }
    goto L_08AC175C;
L_08AC175C:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC1790; }
    goto L_08AC1768;
L_08AC1768:;
    v0 = LD32(a0+4);
    goto L_08AC176C;
L_08AC176C:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08AC1740; }
    goto L_08AC1774;
L_08AC1774:;
    a3 = LD32(a2);
    goto L_08AC1778;
L_08AC1778:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08AC1720;
L_08AC1790:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08AC1798 */
void func_08AC1798(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AC1798:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AC182C; }
    goto L_08AC17C4;
L_08AC17C4:;
    v0 = LD32(s1);
    goto L_08AC17C8;
L_08AC17C8:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08AC181C; }
    goto L_08AC17DC;
L_08AC17DC:;
    v0 = LD_U8(s0+8);
    goto L_08AC17E0;
L_08AC17E0:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08AC185C; }
    goto L_08AC17E8;
L_08AC17E8:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AC184C; }
    goto L_08AC17F0;
L_08AC17F0:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08AC17F8;
L_08AC17F8:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC1804;
L_08AC1804:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08AC1810;
L_08AC1810:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08AC17E0; }
    goto L_08AC1818;
L_08AC1818:;
    v1 = LD32(s1+4);
    goto L_08AC181C;
L_08AC181C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AC17C8; }
    goto L_08AC182C;
L_08AC182C:;
    sp = sp + 32;
    return;
L_08AC184C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08AC17F8;
L_08AC185C:;
    s0 = LD32(s0+4);
    goto L_08AC1810;
}

/* 08AC1864 */
void func_08AC1864(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AC1864:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AC18F8; }
    goto L_08AC1890;
L_08AC1890:;
    v0 = LD32(s1);
    goto L_08AC1894;
L_08AC1894:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08AC18E8; }
    goto L_08AC18A8;
L_08AC18A8:;
    v0 = LD_U8(s0+8);
    goto L_08AC18AC;
L_08AC18AC:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08AC1928; }
    goto L_08AC18B4;
L_08AC18B4:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AC1918; }
    goto L_08AC18BC;
L_08AC18BC:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08AC18C4;
L_08AC18C4:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC18D0;
L_08AC18D0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08AC18DC;
L_08AC18DC:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08AC18AC; }
    goto L_08AC18E4;
L_08AC18E4:;
    v1 = LD32(s1+4);
    goto L_08AC18E8;
L_08AC18E8:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AC1894; }
    goto L_08AC18F8;
L_08AC18F8:;
    sp = sp + 32;
    return;
L_08AC1918:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08AC18C4;
L_08AC1928:;
    s0 = LD32(s0+4);
    goto L_08AC18DC;
}

/* 08AC1930 */
rv_t func_08AC1930(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC1930:;
    v0 = D_08AF9DB0 - (-25168);
    v0 = v0 - 25168;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AC1940 */
rv_t func_08AC1940(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC1940:;
    v0 = D_08AF9DB0 - (-25168);
    v0 = v0 - 25168;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC195C;
L_08AC195C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC1968 */
rv_t func_08AC1968(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC1968:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08986F98(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC1980;
L_08AC1980:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC198C */
rv_t func_08AC198C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC198C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08986FEC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC19A4;
L_08AC19A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC19B0 */
rv_t func_08AC19B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC19B0:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_08987054(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC19C8;
L_08AC19C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC19D4 */
rv_t func_08AC19D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC19D4:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC19DC */
rv_t func_08AC19DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC19DC:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC19E4 */
rv_t func_08AC19E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2];
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AC19E4:;
    v0 = a0 + 12;
    f4 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(a0+12));
    f3 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    f3 = f3 - f5;
    f1 = f1 - f0;
    f2 = f2 - f4;
    sp = sp - 32;
    ST32(sp+8, FBITS(f3));
    v0 = FBITS(f1);
    {vr0=BITSF(v0);}
    v0 = FBITS(f2);
    {vr1=BITSF(v0);}
    v0 = FBITS(f3);
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f4 = BITSF(v0);
    v0 = D_08AEE5D0 - (-6704);
    f0 = BITSF(LD32(v0-6704));
    ST32(a3, FBITS(f4));
    f0 = f0 / f4;
    f3 = f3 * f0;
    f1 = f1 * f0;
    f2 = f2 * f0;
    ST32(a2+8, FBITS(f3));
    ST32(a2, FBITS(f1));
    ST32(a2+4, FBITS(f2));
    f1 = BITSF(LD32(a0+24));
    f0 = BITSF(LD32(a3));
    f0 = f0 - f1;
    ST32(a3, FBITS(f0));
    sp = sp + 32;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}

/* 08AC1A84 */
rv_t func_08AC1A84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC1A84:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC1A8C */
rv_t func_08AC1A8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC1A8C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC1A94 */
void func_08AC1A94(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC1A94:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AC1AE8; }
    goto L_08AC1ACC;
L_08AC1ACC:;
    v0 = LD32(a0);
    goto L_08AC1AD0;
L_08AC1AD0:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AC1AFC; }
    goto L_08AC1AD8;
L_08AC1AD8:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AC1AD0; }
    goto L_08AC1AE8;
L_08AC1AE8:;
    v0 = 0 + 0;
    goto L_08AC1AEC;
L_08AC1AEC:;
    sp = sp + 16;
    return;
L_08AC1AFC:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AC1B10; }
    goto L_08AC1B04;
L_08AC1B04:;
    ST8(a0+8, v0);
    goto L_08AC1B08;
L_08AC1B08:;
    v0 = 1;
    goto L_08AC1AEC;
L_08AC1B10:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC1B34; }
    goto L_08AC1B18;
L_08AC1B18:;
    ST32(a2+4, v0);
    goto L_08AC1B1C;
L_08AC1B1C:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC1B24;
L_08AC1B24:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AC1B08;
L_08AC1B34:;
    ST32(v1, v0);
    goto L_08AC1B1C;
}

/* 08AC1B3C */
void func_08AC1B3C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AC1B3C:;
    sp = sp - 32;
    s5 = 0 + 0;
    s2 = a0 + 0;
    s0 = LD32(a0+4);
    cnd_ = s0 == 0;
    ST32(a0+4, 0);
    if (cnd_) { goto L_08AC1BD0; }
    goto L_08AC1B70;
L_08AC1B70:;
    v0 = LD32(s0);
    s1 = LD_U16(v0+8);
    cnd_ = s1 == 0;
    s4 = LD32(s0+4);
    if (cnd_) { goto L_08AC1C6C; }
    goto L_08AC1B80;
L_08AC1B80:;
    v1 = LD32(s2);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08AC1B9C; }
    goto L_08AC1B8C;
L_08AC1B8C:;
    v0 = LD32(v1);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08AC1BF4; }
    goto L_08AC1B9C;
L_08AC1B9C:;
    { rv_t r_ = func_08831FE8(t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC1BA4;
L_08AC1BA4:;
    v1 = v0 + 0;
    v0 = LD32(s2);
    ST32(v1, s1);
    ST32(v1+4, v0);
    ST32(v1+8, 0);
    ST32(s2, v1);
    goto L_08AC1BBC;
L_08AC1BBC:;
    v0 = LD32(v1+8);
    goto L_08AC1BC0;
L_08AC1BC0:;
    ST32(s0+4, v0);
    ST32(v1+8, s0);
    goto L_08AC1BC8;
L_08AC1BC8:;
    cnd_ = s4 != 0;
    s0 = s4 + 0;
    if (cnd_) { goto L_08AC1B70; }
    goto L_08AC1BD0;
L_08AC1BD0:;
    sp = sp + 32;
    return;
L_08AC1BF4:;
    v0 = LD32(v1);
    goto L_08AC1BF8;
L_08AC1BF8:;
    v0 = v0 < s1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC1C4C; }
    goto L_08AC1C04;
L_08AC1C04:;
    s3 = v1 + 0;
    v1 = LD32(v1+4);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08AC1BF8; }
    goto L_08AC1C14;
L_08AC1C14:;
    { rv_t r_ = func_08831FE8(t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC1C1C;
L_08AC1C1C:;
    v1 = v0 + 0;
    cnd_ = s3 == 0;
    ST32(v0+8, 0);
    if (cnd_) { goto L_08AC1C3C; }
    goto L_08AC1C28;
L_08AC1C28:;
    v0 = LD32(s3+4);
    ST32(v1+4, v0);
    ST32(s3+4, v1);
    goto L_08AC1C34;
L_08AC1C34:;
    ST32(v1, s1);
    goto L_08AC1BBC;
L_08AC1C3C:;
    v0 = LD32(s2);
    ST32(v1+4, v0);
    ST32(s2, v1);
    goto L_08AC1C34;
L_08AC1C4C:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08AC1C14; }
    goto L_08AC1C54;
L_08AC1C54:;
    v0 = LD32(v1);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AC1BC0; }
    goto L_08AC1C64;
L_08AC1C64:;
    goto L_08AC1C14;
L_08AC1C6C:;
    cnd_ = s5 == 0;
    if (cnd_) { ST32(s2+4, s0); goto L_08AC1C78; }
    goto L_08AC1C74;
L_08AC1C74:;
    ST32(s5+4, s0);
    goto L_08AC1C78;
L_08AC1C78:;
    s5 = s0 + 0;
    goto L_08AC1BC8;
}

/* 08AC1C80 */
void func_08AC1C80(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC1C80:;
    sp = sp - 16;
    a3 = a0 + 0;
    a2 = 0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    v1 = LD_U16(a1+8);
    if (cnd_) { goto L_08AC1CC0; }
    goto L_08AC1CA0;
L_08AC1CA0:;
    v0 = LD32(a0);
    goto L_08AC1CA4;
L_08AC1CA4:;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC1D28; }
    goto L_08AC1CB0;
L_08AC1CB0:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AC1CA4; }
    goto L_08AC1CC0;
L_08AC1CC0:;
    a0 = LD32(a3+4);
    goto L_08AC1CC4;
L_08AC1CC4:;
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AC1D10; }
    goto L_08AC1CCC;
L_08AC1CCC:;
    v0 = LD32(a0);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AC1CF4; }
    goto L_08AC1CD8;
L_08AC1CD8:;
    v1 = a0 + 0;
    goto L_08AC1CDC;
L_08AC1CDC:;
    a0 = LD32(a0+4);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AC1D14; }
    goto L_08AC1CE8;
L_08AC1CE8:;
    v0 = LD32(a0);
    cnd_ = v0 != a1;
    if (cnd_) { v1 = a0 + 0; goto L_08AC1CDC; }
    goto L_08AC1CF4;
L_08AC1CF4:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AC1D14; }
    goto L_08AC1CFC;
L_08AC1CFC:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC1D20; }
    goto L_08AC1D04;
L_08AC1D04:;
    ST32(v1+4, v0);
    goto L_08AC1D08;
L_08AC1D08:;
    { u64 r_ = func_08832050(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC1D10;
L_08AC1D10:;
    goto L_08AC1D14;
L_08AC1D14:;
    sp = sp + 16;
    return;
L_08AC1D20:;
    ST32(a3+4, v0);
    goto L_08AC1D08;
L_08AC1D28:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(a3+4); goto L_08AC1CC4; }
    goto L_08AC1D30;
L_08AC1D30:;
    s0 = LD32(a0+8);
    cnd_ = s0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AC1CC0; }
    goto L_08AC1D3C;
L_08AC1D3C:;
    v0 = LD32(s0);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AC1D64; }
    goto L_08AC1D48;
L_08AC1D48:;
    v1 = s0 + 0;
    goto L_08AC1D4C;
L_08AC1D4C:;
    s0 = LD32(s0+4);
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(a3+4); goto L_08AC1CC4; }
    goto L_08AC1D58;
L_08AC1D58:;
    v0 = LD32(s0);
    cnd_ = v0 != a1;
    if (cnd_) { v1 = s0 + 0; goto L_08AC1D4C; }
    goto L_08AC1D64;
L_08AC1D64:;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(a3+4); goto L_08AC1CC4; }
    goto L_08AC1D6C;
L_08AC1D6C:;
    v0 = LD32(a3+8);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AC1D80; }
    goto L_08AC1D78;
L_08AC1D78:;
    ST8(s0+8, v0);
    goto L_08AC1D10;
L_08AC1D80:;
    cnd_ = v1 == 0;
    v0 = LD32(s0+4);
    if (cnd_) { goto L_08AC1D94; }
    goto L_08AC1D88;
L_08AC1D88:;
    ST32(v1+4, v0);
    goto L_08AC1D8C;
L_08AC1D8C:;
    a0 = s0 + 0;
    goto L_08AC1D08;
L_08AC1D94:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC1DA4; }
    goto L_08AC1D9C;
L_08AC1D9C:;
    ST32(a0+8, v0);
    goto L_08AC1D8C;
L_08AC1DA4:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC1DC0; }
    goto L_08AC1DAC;
L_08AC1DAC:;
    ST32(a2+4, v0);
    goto L_08AC1DB0;
L_08AC1DB0:;
    { u64 r_ = func_08832008(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC1DB8;
L_08AC1DB8:;
    a0 = s0 + 0;
    goto L_08AC1D08;
L_08AC1DC0:;
    ST32(a3, v0);
    goto L_08AC1DB0;
}

/* 08AC1DC8 */
rv_t func_08AC1DC8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC1DC8:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC1DD0 */
void func_08AC1DD0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC1DD0:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = a1 + 0;
    func_08AC1B3C(a0, t1, t2, t3);
    goto L_08AC1DEC;
L_08AC1DEC:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC1E20; }
    goto L_08AC1DF8;
L_08AC1DF8:;
    v1 = LD32(s0);
    cnd_ = v1 == 0;
    a0 = LD_U16(s1+8);
    if (cnd_) { goto L_08AC1E20; }
    goto L_08AC1E04;
L_08AC1E04:;
    v0 = LD32(v1);
    goto L_08AC1E08;
L_08AC1E08:;
    v0 = v0 < a0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC1E50; }
    goto L_08AC1E14;
L_08AC1E14:;
    v1 = LD32(v1+4);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08AC1E08; }
    goto L_08AC1E20;
L_08AC1E20:;
    { rv_t r_ = func_08832030(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC1E28;
L_08AC1E28:;
    v1 = LD32(s0+4);
    ST32(v0, s1);
    ST32(v0+4, v1);
    ST8(v0+8, 0);
    ST32(s0+4, v0);
    goto L_08AC1E3C;
L_08AC1E3C:;
    sp = sp + 16;
    return;
L_08AC1E50:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08AC1E20; }
    goto L_08AC1E58;
L_08AC1E58:;
    v0 = LD32(v1);
    cnd_ = v0 != a0;
    if (cnd_) { goto L_08AC1E20; }
    goto L_08AC1E64;
L_08AC1E64:;
    a0 = LD32(v1+8);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AC1E20; }
    goto L_08AC1E70;
L_08AC1E70:;
    v0 = LD32(a0);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_08AC1E94; }
    goto L_08AC1E7C;
L_08AC1E7C:;
    a0 = LD32(a0+4);
    goto L_08AC1E80;
L_08AC1E80:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AC1E20; }
    goto L_08AC1E88;
L_08AC1E88:;
    v0 = LD32(a0);
    cnd_ = v0 != s1;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AC1E80; }
    goto L_08AC1E94;
L_08AC1E94:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AC1E20; }
    goto L_08AC1E9C;
L_08AC1E9C:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AC1E20; }
    goto L_08AC1EB0;
L_08AC1EB0:;
    ST8(a0+8, 0);
    goto L_08AC1E3C;
}

/* 08AC1EB8 */
u64 func_08AC1EB8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC1EB8:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AC1F0C; }
    goto L_08AC1EF0;
L_08AC1EF0:;
    v0 = LD32(a0);
    goto L_08AC1EF4;
L_08AC1EF4:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AC1F20; }
    goto L_08AC1EFC;
L_08AC1EFC:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AC1EF4; }
    goto L_08AC1F0C;
L_08AC1F0C:;
    v0 = 0 + 0;
    goto L_08AC1F10;
L_08AC1F10:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AC1F20:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AC1F34; }
    goto L_08AC1F28;
L_08AC1F28:;
    ST8(a0+8, v0);
    goto L_08AC1F2C;
L_08AC1F2C:;
    v0 = 1;
    goto L_08AC1F10;
L_08AC1F34:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC1F58; }
    goto L_08AC1F3C;
L_08AC1F3C:;
    ST32(a2+4, v0);
    goto L_08AC1F40;
L_08AC1F40:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC1F48;
L_08AC1F48:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AC1F2C;
L_08AC1F58:;
    ST32(v1, v0);
    goto L_08AC1F40;
}

/* 08AC1F60 */
rv_t func_08AC1F60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC1F60:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC1F68 */
rv_t func_08AC1F68(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC1F68:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC1F70 */
void func_08AC1F70(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC1F70:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AC1FC4; }
    goto L_08AC1FA8;
L_08AC1FA8:;
    v0 = LD32(a0);
    goto L_08AC1FAC;
L_08AC1FAC:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AC1FD8; }
    goto L_08AC1FB4;
L_08AC1FB4:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AC1FAC; }
    goto L_08AC1FC4;
L_08AC1FC4:;
    v0 = 0 + 0;
    goto L_08AC1FC8;
L_08AC1FC8:;
    sp = sp + 16;
    return;
L_08AC1FD8:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AC1FEC; }
    goto L_08AC1FE0;
L_08AC1FE0:;
    ST8(a0+8, v0);
    goto L_08AC1FE4;
L_08AC1FE4:;
    v0 = 1;
    goto L_08AC1FC8;
L_08AC1FEC:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC2010; }
    goto L_08AC1FF4;
L_08AC1FF4:;
    ST32(a2+4, v0);
    goto L_08AC1FF8;
L_08AC1FF8:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC2000;
L_08AC2000:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AC1FE4;
L_08AC2010:;
    ST32(v1, v0);
    goto L_08AC1FF8;
}

/* 08AC2018 */
void func_08AC2018(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC2018:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AC206C; }
    goto L_08AC2050;
L_08AC2050:;
    v0 = LD32(a0);
    goto L_08AC2054;
L_08AC2054:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AC2080; }
    goto L_08AC205C;
L_08AC205C:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AC2054; }
    goto L_08AC206C;
L_08AC206C:;
    v0 = 0 + 0;
    goto L_08AC2070;
L_08AC2070:;
    sp = sp + 16;
    return;
L_08AC2080:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AC2094; }
    goto L_08AC2088;
L_08AC2088:;
    ST8(a0+8, v0);
    goto L_08AC208C;
L_08AC208C:;
    v0 = 1;
    goto L_08AC2070;
L_08AC2094:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC20B8; }
    goto L_08AC209C;
L_08AC209C:;
    ST32(a2+4, v0);
    goto L_08AC20A0;
L_08AC20A0:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC20A8;
L_08AC20A8:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AC208C;
L_08AC20B8:;
    ST32(v1, v0);
    goto L_08AC20A0;
}

/* 08AC20C0 */
u64 func_08AC20C0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08AC20C0:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AC2114; }
    goto L_08AC20D0;
L_08AC20D0:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08AC2114; }
    goto L_08AC20F4;
L_08AC20F4:;
    a0 = LD32(v1);
    goto L_08AC20F8;
L_08AC20F8:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AC211C; }
    goto L_08AC2104;
L_08AC2104:;
    v1 = LD32(v1+4);
    goto L_08AC2108;
L_08AC2108:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_08AC20F8; }
    goto L_08AC2110;
L_08AC2110:;
    a3 = 0 + 0;
    goto L_08AC2114;
L_08AC2114:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AC211C:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(v1+8); goto L_08AC2138; }
    goto L_08AC2124;
L_08AC2124:;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08AC2108; }
    goto L_08AC2134;
L_08AC2134:;
    v0 = LD_U8(v1+8);
    goto L_08AC2138;
L_08AC2138:;
    cnd_ = v0 != 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_08AC2104; }
    goto L_08AC2140;
L_08AC2140:;
    goto L_08AC2114;
}

/* 08AC2148 */
void func_08AC2148(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AC2148:;
    sp = sp - 32;
    s5 = 0 + 0;
    s2 = a0 + 0;
    s0 = LD32(a0+4);
    cnd_ = s0 == 0;
    ST32(a0+4, 0);
    if (cnd_) { goto L_08AC21DC; }
    goto L_08AC217C;
L_08AC217C:;
    v0 = LD32(s0);
    s1 = LD_U16(v0+8);
    cnd_ = s1 == 0;
    s4 = LD32(s0+4);
    if (cnd_) { goto L_08AC2278; }
    goto L_08AC218C;
L_08AC218C:;
    v1 = LD32(s2);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08AC21A8; }
    goto L_08AC2198;
L_08AC2198:;
    v0 = LD32(v1);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08AC2200; }
    goto L_08AC21A8;
L_08AC21A8:;
    { rv_t r_ = func_08831FE8(t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC21B0;
L_08AC21B0:;
    v1 = v0 + 0;
    v0 = LD32(s2);
    ST32(v1, s1);
    ST32(v1+4, v0);
    ST32(v1+8, 0);
    ST32(s2, v1);
    goto L_08AC21C8;
L_08AC21C8:;
    v0 = LD32(v1+8);
    goto L_08AC21CC;
L_08AC21CC:;
    ST32(s0+4, v0);
    ST32(v1+8, s0);
    goto L_08AC21D4;
L_08AC21D4:;
    cnd_ = s4 != 0;
    s0 = s4 + 0;
    if (cnd_) { goto L_08AC217C; }
    goto L_08AC21DC;
L_08AC21DC:;
    sp = sp + 32;
    return;
L_08AC2200:;
    v0 = LD32(v1);
    goto L_08AC2204;
L_08AC2204:;
    v0 = v0 < s1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC2258; }
    goto L_08AC2210;
L_08AC2210:;
    s3 = v1 + 0;
    v1 = LD32(v1+4);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08AC2204; }
    goto L_08AC2220;
L_08AC2220:;
    { rv_t r_ = func_08831FE8(t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC2228;
L_08AC2228:;
    v1 = v0 + 0;
    cnd_ = s3 == 0;
    ST32(v0+8, 0);
    if (cnd_) { goto L_08AC2248; }
    goto L_08AC2234;
L_08AC2234:;
    v0 = LD32(s3+4);
    ST32(v1+4, v0);
    ST32(s3+4, v1);
    goto L_08AC2240;
L_08AC2240:;
    ST32(v1, s1);
    goto L_08AC21C8;
L_08AC2248:;
    v0 = LD32(s2);
    ST32(v1+4, v0);
    ST32(s2, v1);
    goto L_08AC2240;
L_08AC2258:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08AC2220; }
    goto L_08AC2260;
L_08AC2260:;
    v0 = LD32(v1);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AC21CC; }
    goto L_08AC2270;
L_08AC2270:;
    goto L_08AC2220;
L_08AC2278:;
    cnd_ = s5 == 0;
    if (cnd_) { ST32(s2+4, s0); goto L_08AC2284; }
    goto L_08AC2280;
L_08AC2280:;
    ST32(s5+4, s0);
    goto L_08AC2284;
L_08AC2284:;
    s5 = s0 + 0;
    goto L_08AC21D4;
}

/* 08AC228C */
void func_08AC228C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC228C:;
    sp = sp - 16;
    a3 = a0 + 0;
    a2 = 0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    v1 = LD_U16(a1+8);
    if (cnd_) { goto L_08AC22CC; }
    goto L_08AC22AC;
L_08AC22AC:;
    v0 = LD32(a0);
    goto L_08AC22B0;
L_08AC22B0:;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC2334; }
    goto L_08AC22BC;
L_08AC22BC:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AC22B0; }
    goto L_08AC22CC;
L_08AC22CC:;
    a0 = LD32(a3+4);
    goto L_08AC22D0;
L_08AC22D0:;
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AC231C; }
    goto L_08AC22D8;
L_08AC22D8:;
    v0 = LD32(a0);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AC2300; }
    goto L_08AC22E4;
L_08AC22E4:;
    v1 = a0 + 0;
    goto L_08AC22E8;
L_08AC22E8:;
    a0 = LD32(a0+4);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AC2320; }
    goto L_08AC22F4;
L_08AC22F4:;
    v0 = LD32(a0);
    cnd_ = v0 != a1;
    if (cnd_) { v1 = a0 + 0; goto L_08AC22E8; }
    goto L_08AC2300;
L_08AC2300:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AC2320; }
    goto L_08AC2308;
L_08AC2308:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC232C; }
    goto L_08AC2310;
L_08AC2310:;
    ST32(v1+4, v0);
    goto L_08AC2314;
L_08AC2314:;
    { u64 r_ = func_08832050(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC231C;
L_08AC231C:;
    goto L_08AC2320;
L_08AC2320:;
    sp = sp + 16;
    return;
L_08AC232C:;
    ST32(a3+4, v0);
    goto L_08AC2314;
L_08AC2334:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(a3+4); goto L_08AC22D0; }
    goto L_08AC233C;
L_08AC233C:;
    s0 = LD32(a0+8);
    cnd_ = s0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AC22CC; }
    goto L_08AC2348;
L_08AC2348:;
    v0 = LD32(s0);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AC2370; }
    goto L_08AC2354;
L_08AC2354:;
    v1 = s0 + 0;
    goto L_08AC2358;
L_08AC2358:;
    s0 = LD32(s0+4);
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(a3+4); goto L_08AC22D0; }
    goto L_08AC2364;
L_08AC2364:;
    v0 = LD32(s0);
    cnd_ = v0 != a1;
    if (cnd_) { v1 = s0 + 0; goto L_08AC2358; }
    goto L_08AC2370;
L_08AC2370:;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(a3+4); goto L_08AC22D0; }
    goto L_08AC2378;
L_08AC2378:;
    v0 = LD32(a3+8);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AC238C; }
    goto L_08AC2384;
L_08AC2384:;
    ST8(s0+8, v0);
    goto L_08AC231C;
L_08AC238C:;
    cnd_ = v1 == 0;
    v0 = LD32(s0+4);
    if (cnd_) { goto L_08AC23A0; }
    goto L_08AC2394;
L_08AC2394:;
    ST32(v1+4, v0);
    goto L_08AC2398;
L_08AC2398:;
    a0 = s0 + 0;
    goto L_08AC2314;
L_08AC23A0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC23B0; }
    goto L_08AC23A8;
L_08AC23A8:;
    ST32(a0+8, v0);
    goto L_08AC2398;
L_08AC23B0:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC23CC; }
    goto L_08AC23B8;
L_08AC23B8:;
    ST32(a2+4, v0);
    goto L_08AC23BC;
L_08AC23BC:;
    { u64 r_ = func_08832008(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC23C4;
L_08AC23C4:;
    a0 = s0 + 0;
    goto L_08AC2314;
L_08AC23CC:;
    ST32(a3, v0);
    goto L_08AC23BC;
}

/* 08AC23D4 */
rv_t func_08AC23D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC23D4:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC23DC */
void func_08AC23DC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC23DC:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = a1 + 0;
    func_08AC2148(a0, t1, t2, t3);
    goto L_08AC23F8;
L_08AC23F8:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC242C; }
    goto L_08AC2404;
L_08AC2404:;
    v1 = LD32(s0);
    cnd_ = v1 == 0;
    a0 = LD_U16(s1+8);
    if (cnd_) { goto L_08AC242C; }
    goto L_08AC2410;
L_08AC2410:;
    v0 = LD32(v1);
    goto L_08AC2414;
L_08AC2414:;
    v0 = v0 < a0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC245C; }
    goto L_08AC2420;
L_08AC2420:;
    v1 = LD32(v1+4);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08AC2414; }
    goto L_08AC242C;
L_08AC242C:;
    { rv_t r_ = func_08832030(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC2434;
L_08AC2434:;
    v1 = LD32(s0+4);
    ST32(v0, s1);
    ST32(v0+4, v1);
    ST8(v0+8, 0);
    ST32(s0+4, v0);
    goto L_08AC2448;
L_08AC2448:;
    sp = sp + 16;
    return;
L_08AC245C:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08AC242C; }
    goto L_08AC2464;
L_08AC2464:;
    v0 = LD32(v1);
    cnd_ = v0 != a0;
    if (cnd_) { goto L_08AC242C; }
    goto L_08AC2470;
L_08AC2470:;
    a0 = LD32(v1+8);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AC242C; }
    goto L_08AC247C;
L_08AC247C:;
    v0 = LD32(a0);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_08AC24A0; }
    goto L_08AC2488;
L_08AC2488:;
    a0 = LD32(a0+4);
    goto L_08AC248C;
L_08AC248C:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AC242C; }
    goto L_08AC2494;
L_08AC2494:;
    v0 = LD32(a0);
    cnd_ = v0 != s1;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AC248C; }
    goto L_08AC24A0;
L_08AC24A0:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AC242C; }
    goto L_08AC24A8;
L_08AC24A8:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AC242C; }
    goto L_08AC24BC;
L_08AC24BC:;
    ST8(a0+8, 0);
    goto L_08AC2448;
}

/* 08AC24C4 */
u64 func_08AC24C4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC24C4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AC2518; }
    goto L_08AC24FC;
L_08AC24FC:;
    v0 = LD32(a0);
    goto L_08AC2500;
L_08AC2500:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AC252C; }
    goto L_08AC2508;
L_08AC2508:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AC2500; }
    goto L_08AC2518;
L_08AC2518:;
    v0 = 0 + 0;
    goto L_08AC251C;
L_08AC251C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AC252C:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AC2540; }
    goto L_08AC2534;
L_08AC2534:;
    ST8(a0+8, v0);
    goto L_08AC2538;
L_08AC2538:;
    v0 = 1;
    goto L_08AC251C;
L_08AC2540:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC2564; }
    goto L_08AC2548;
L_08AC2548:;
    ST32(a2+4, v0);
    goto L_08AC254C;
L_08AC254C:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC2554;
L_08AC2554:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AC2538;
L_08AC2564:;
    ST32(v1, v0);
    goto L_08AC254C;
}

/* 08AC256C */
rv_t func_08AC256C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC256C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC2574 */
void func_08AC2574(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC2574:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AC25C8; }
    goto L_08AC25AC;
L_08AC25AC:;
    v0 = LD32(a0);
    goto L_08AC25B0;
L_08AC25B0:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AC25DC; }
    goto L_08AC25B8;
L_08AC25B8:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AC25B0; }
    goto L_08AC25C8;
L_08AC25C8:;
    v0 = 0 + 0;
    goto L_08AC25CC;
L_08AC25CC:;
    sp = sp + 16;
    return;
L_08AC25DC:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AC25F0; }
    goto L_08AC25E4;
L_08AC25E4:;
    ST8(a0+8, v0);
    goto L_08AC25E8;
L_08AC25E8:;
    v0 = 1;
    goto L_08AC25CC;
L_08AC25F0:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC2614; }
    goto L_08AC25F8;
L_08AC25F8:;
    ST32(a2+4, v0);
    goto L_08AC25FC;
L_08AC25FC:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC2604;
L_08AC2604:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AC25E8;
L_08AC2614:;
    ST32(v1, v0);
    goto L_08AC25FC;
}

/* 08AC261C */
void func_08AC261C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC261C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AC2670; }
    goto L_08AC2654;
L_08AC2654:;
    v0 = LD32(a0);
    goto L_08AC2658;
L_08AC2658:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AC2684; }
    goto L_08AC2660;
L_08AC2660:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AC2658; }
    goto L_08AC2670;
L_08AC2670:;
    v0 = 0 + 0;
    goto L_08AC2674;
L_08AC2674:;
    sp = sp + 16;
    return;
L_08AC2684:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AC2698; }
    goto L_08AC268C;
L_08AC268C:;
    ST8(a0+8, v0);
    goto L_08AC2690;
L_08AC2690:;
    v0 = 1;
    goto L_08AC2674;
L_08AC2698:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC26BC; }
    goto L_08AC26A0;
L_08AC26A0:;
    ST32(a2+4, v0);
    goto L_08AC26A4;
L_08AC26A4:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC26AC;
L_08AC26AC:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AC2690;
L_08AC26BC:;
    ST32(v1, v0);
    goto L_08AC26A4;
}

/* 08AC26C4 */
void func_08AC26C4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC26C4:;
    sp = sp - 16;
    a3 = a0 + 0;
    a2 = 0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    v1 = LD_U16(a1+8);
    if (cnd_) { goto L_08AC2704; }
    goto L_08AC26E4;
L_08AC26E4:;
    v0 = LD32(a0);
    goto L_08AC26E8;
L_08AC26E8:;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC276C; }
    goto L_08AC26F4;
L_08AC26F4:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AC26E8; }
    goto L_08AC2704;
L_08AC2704:;
    a0 = LD32(a3+4);
    goto L_08AC2708;
L_08AC2708:;
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AC2754; }
    goto L_08AC2710;
L_08AC2710:;
    v0 = LD32(a0);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AC2738; }
    goto L_08AC271C;
L_08AC271C:;
    v1 = a0 + 0;
    goto L_08AC2720;
L_08AC2720:;
    a0 = LD32(a0+4);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AC2758; }
    goto L_08AC272C;
L_08AC272C:;
    v0 = LD32(a0);
    cnd_ = v0 != a1;
    if (cnd_) { v1 = a0 + 0; goto L_08AC2720; }
    goto L_08AC2738;
L_08AC2738:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AC2758; }
    goto L_08AC2740;
L_08AC2740:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC2764; }
    goto L_08AC2748;
L_08AC2748:;
    ST32(v1+4, v0);
    goto L_08AC274C;
L_08AC274C:;
    { u64 r_ = func_08832050(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC2754;
L_08AC2754:;
    goto L_08AC2758;
L_08AC2758:;
    sp = sp + 16;
    return;
L_08AC2764:;
    ST32(a3+4, v0);
    goto L_08AC274C;
L_08AC276C:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(a3+4); goto L_08AC2708; }
    goto L_08AC2774;
L_08AC2774:;
    s0 = LD32(a0+8);
    cnd_ = s0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AC2704; }
    goto L_08AC2780;
L_08AC2780:;
    v0 = LD32(s0);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AC27A8; }
    goto L_08AC278C;
L_08AC278C:;
    v1 = s0 + 0;
    goto L_08AC2790;
L_08AC2790:;
    s0 = LD32(s0+4);
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(a3+4); goto L_08AC2708; }
    goto L_08AC279C;
L_08AC279C:;
    v0 = LD32(s0);
    cnd_ = v0 != a1;
    if (cnd_) { v1 = s0 + 0; goto L_08AC2790; }
    goto L_08AC27A8;
L_08AC27A8:;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(a3+4); goto L_08AC2708; }
    goto L_08AC27B0;
L_08AC27B0:;
    v0 = LD32(a3+8);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AC27C4; }
    goto L_08AC27BC;
L_08AC27BC:;
    ST8(s0+8, v0);
    goto L_08AC2754;
L_08AC27C4:;
    cnd_ = v1 == 0;
    v0 = LD32(s0+4);
    if (cnd_) { goto L_08AC27D8; }
    goto L_08AC27CC;
L_08AC27CC:;
    ST32(v1+4, v0);
    goto L_08AC27D0;
L_08AC27D0:;
    a0 = s0 + 0;
    goto L_08AC274C;
L_08AC27D8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC27E8; }
    goto L_08AC27E0;
L_08AC27E0:;
    ST32(a0+8, v0);
    goto L_08AC27D0;
L_08AC27E8:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC2804; }
    goto L_08AC27F0;
L_08AC27F0:;
    ST32(a2+4, v0);
    goto L_08AC27F4;
L_08AC27F4:;
    { u64 r_ = func_08832008(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC27FC;
L_08AC27FC:;
    a0 = s0 + 0;
    goto L_08AC274C;
L_08AC2804:;
    ST32(a3, v0);
    goto L_08AC27F4;
}

/* 08AC280C */
rv_t func_08AC280C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC280C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC2814 */
void func_08AC2814(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC2814:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = a1 + 0;
    f0 = func_08ABC074(a0, t1, t2, t3);
    goto L_08AC2830;
L_08AC2830:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC2864; }
    goto L_08AC283C;
L_08AC283C:;
    v1 = LD32(s0);
    cnd_ = v1 == 0;
    a0 = LD_U16(s1+8);
    if (cnd_) { goto L_08AC2864; }
    goto L_08AC2848;
L_08AC2848:;
    v0 = LD32(v1);
    goto L_08AC284C;
L_08AC284C:;
    v0 = v0 < a0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC2894; }
    goto L_08AC2858;
L_08AC2858:;
    v1 = LD32(v1+4);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08AC284C; }
    goto L_08AC2864;
L_08AC2864:;
    { rv_t r_ = func_08832030(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC286C;
L_08AC286C:;
    v1 = LD32(s0+4);
    ST32(v0, s1);
    ST32(v0+4, v1);
    ST8(v0+8, 0);
    ST32(s0+4, v0);
    goto L_08AC2880;
L_08AC2880:;
    sp = sp + 16;
    return;
L_08AC2894:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08AC2864; }
    goto L_08AC289C;
L_08AC289C:;
    v0 = LD32(v1);
    cnd_ = v0 != a0;
    if (cnd_) { goto L_08AC2864; }
    goto L_08AC28A8;
L_08AC28A8:;
    a0 = LD32(v1+8);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AC2864; }
    goto L_08AC28B4;
L_08AC28B4:;
    v0 = LD32(a0);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_08AC28D8; }
    goto L_08AC28C0;
L_08AC28C0:;
    a0 = LD32(a0+4);
    goto L_08AC28C4;
L_08AC28C4:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AC2864; }
    goto L_08AC28CC;
L_08AC28CC:;
    v0 = LD32(a0);
    cnd_ = v0 != s1;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AC28C4; }
    goto L_08AC28D8;
L_08AC28D8:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AC2864; }
    goto L_08AC28E0;
L_08AC28E0:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AC2864; }
    goto L_08AC28F4;
L_08AC28F4:;
    ST8(a0+8, 0);
    goto L_08AC2880;
}

/* 08AC28FC */
void func_08AC28FC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC28FC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AC2950; }
    goto L_08AC2934;
L_08AC2934:;
    v0 = LD32(a0);
    goto L_08AC2938;
L_08AC2938:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AC2964; }
    goto L_08AC2940;
L_08AC2940:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AC2938; }
    goto L_08AC2950;
L_08AC2950:;
    v0 = 0 + 0;
    goto L_08AC2954;
L_08AC2954:;
    sp = sp + 16;
    return;
L_08AC2964:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AC2978; }
    goto L_08AC296C;
L_08AC296C:;
    ST8(a0+8, v0);
    goto L_08AC2970;
L_08AC2970:;
    v0 = 1;
    goto L_08AC2954;
L_08AC2978:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC299C; }
    goto L_08AC2980;
L_08AC2980:;
    ST32(a2+4, v0);
    goto L_08AC2984;
L_08AC2984:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC298C;
L_08AC298C:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AC2970;
L_08AC299C:;
    ST32(v1, v0);
    goto L_08AC2984;
}

/* 08AC29A4 */
void func_08AC29A4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08AC29A4:;
    v0 = LD32(a0+8);
    cnd_ = v0 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_08AC2A00; }
    goto L_08AC29B0;
L_08AC29B0:;
    a2 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a2+4);
    a0 = a2 + 0;
    goto L_08AC29C0;
L_08AC29C0:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AC29F8; }
    goto L_08AC29CC;
L_08AC29CC:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 != 0;
    ST32(a1+8, a0);
    if (cnd_) { goto L_08AC29F8; }
    goto L_08AC29E0;
L_08AC29E0:;
    v1 = LD32(a1+4);
    a0 = a2 + 0;
    v1 = v1 + 1;
    ST32(a1+4, v1);
    v0 = LD32(a2+4);
    goto L_08AC29C0;
L_08AC29F8:;
    return;
L_08AC2A00:;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08AC29F8; }
    goto L_08AC2A0C;
L_08AC2A0C:;
    a2 = LD32(a0);
    goto L_08AC29E0;
}

/* 08AC2A14 */
void func_08AC2A14(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC2A14:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AC2A68; }
    goto L_08AC2A4C;
L_08AC2A4C:;
    v0 = LD32(a0);
    goto L_08AC2A50;
L_08AC2A50:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AC2A7C; }
    goto L_08AC2A58;
L_08AC2A58:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AC2A50; }
    goto L_08AC2A68;
L_08AC2A68:;
    v0 = 0 + 0;
    goto L_08AC2A6C;
L_08AC2A6C:;
    sp = sp + 16;
    return;
L_08AC2A7C:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AC2A90; }
    goto L_08AC2A84;
L_08AC2A84:;
    ST8(a0+8, v0);
    goto L_08AC2A88;
L_08AC2A88:;
    v0 = 1;
    goto L_08AC2A6C;
L_08AC2A90:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC2AB4; }
    goto L_08AC2A98;
L_08AC2A98:;
    ST32(a2+4, v0);
    goto L_08AC2A9C;
L_08AC2A9C:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC2AA4;
L_08AC2AA4:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AC2A88;
L_08AC2AB4:;
    ST32(v1, v0);
    goto L_08AC2A9C;
}

/* 08AC2ABC */
void func_08AC2ABC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08AC2ABC:;
    v0 = LD32(a0+8);
    cnd_ = v0 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_08AC2B18; }
    goto L_08AC2AC8;
L_08AC2AC8:;
    a2 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a2+4);
    a0 = a2 + 0;
    goto L_08AC2AD8;
L_08AC2AD8:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AC2B10; }
    goto L_08AC2AE4;
L_08AC2AE4:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 != 0;
    ST32(a1+8, a0);
    if (cnd_) { goto L_08AC2B10; }
    goto L_08AC2AF8;
L_08AC2AF8:;
    v1 = LD32(a1+4);
    a0 = a2 + 0;
    v1 = v1 + 1;
    ST32(a1+4, v1);
    v0 = LD32(a2+4);
    goto L_08AC2AD8;
L_08AC2B10:;
    return;
L_08AC2B18:;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08AC2B10; }
    goto L_08AC2B24;
L_08AC2B24:;
    a2 = LD32(a0);
    goto L_08AC2AF8;
}

/* 08AC2B2C */
void func_08AC2B2C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC2B2C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AC2B80; }
    goto L_08AC2B64;
L_08AC2B64:;
    v0 = LD32(a0);
    goto L_08AC2B68;
L_08AC2B68:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AC2B94; }
    goto L_08AC2B70;
L_08AC2B70:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AC2B68; }
    goto L_08AC2B80;
L_08AC2B80:;
    v0 = 0 + 0;
    goto L_08AC2B84;
L_08AC2B84:;
    sp = sp + 16;
    return;
L_08AC2B94:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AC2BA8; }
    goto L_08AC2B9C;
L_08AC2B9C:;
    ST8(a0+8, v0);
    goto L_08AC2BA0;
L_08AC2BA0:;
    v0 = 1;
    goto L_08AC2B84;
L_08AC2BA8:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC2BCC; }
    goto L_08AC2BB0;
L_08AC2BB0:;
    ST32(a2+4, v0);
    goto L_08AC2BB4;
L_08AC2BB4:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC2BBC;
L_08AC2BBC:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AC2BA0;
L_08AC2BCC:;
    ST32(v1, v0);
    goto L_08AC2BB4;
}

/* 08AC2BD4 */
void func_08AC2BD4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC2BD4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AC2C28; }
    goto L_08AC2C0C;
L_08AC2C0C:;
    v0 = LD32(a0);
    goto L_08AC2C10;
L_08AC2C10:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AC2C3C; }
    goto L_08AC2C18;
L_08AC2C18:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AC2C10; }
    goto L_08AC2C28;
L_08AC2C28:;
    v0 = 0 + 0;
    goto L_08AC2C2C;
L_08AC2C2C:;
    sp = sp + 16;
    return;
L_08AC2C3C:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AC2C50; }
    goto L_08AC2C44;
L_08AC2C44:;
    ST8(a0+8, v0);
    goto L_08AC2C48;
L_08AC2C48:;
    v0 = 1;
    goto L_08AC2C2C;
L_08AC2C50:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC2C74; }
    goto L_08AC2C58;
L_08AC2C58:;
    ST32(a2+4, v0);
    goto L_08AC2C5C;
L_08AC2C5C:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC2C64;
L_08AC2C64:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AC2C48;
L_08AC2C74:;
    ST32(v1, v0);
    goto L_08AC2C5C;
}

/* 08AC2C7C */
u64 func_08AC2C7C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08AC2C7C:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AC2CDC; }
    goto L_08AC2C8C;
L_08AC2C8C:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AC2CDC; }
    goto L_08AC2CB0;
L_08AC2CB0:;
    a3 = LD32(a0);
    goto L_08AC2CB4;
L_08AC2CB4:;
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    v1 = a3 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AC2CE4; }
    goto L_08AC2CCC;
L_08AC2CCC:;
    a0 = LD32(a0+4);
    goto L_08AC2CD0;
L_08AC2CD0:;
    cnd_ = a0 != 0;
    if (cnd_) { a3 = LD32(a0); goto L_08AC2CB4; }
    goto L_08AC2CD8;
L_08AC2CD8:;
    a3 = 0 + 0;
    goto L_08AC2CDC;
L_08AC2CDC:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AC2CE4:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(a0+8); goto L_08AC2D00; }
    goto L_08AC2CEC;
L_08AC2CEC:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AC2CD0; }
    goto L_08AC2CFC;
L_08AC2CFC:;
    v0 = LD_U8(a0+8);
    goto L_08AC2D00;
L_08AC2D00:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AC2CD0; }
    goto L_08AC2D08;
L_08AC2D08:;
    goto L_08AC2CDC;
}

/* 08AC2D10 */
u32 func_08AC2D10(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_08AC2D10:;
    v0 = 999;
    cnd_ = a1 == v0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AC2D60; }
    goto L_08AC2D1C;
L_08AC2D1C:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AC2D60; }
    goto L_08AC2D40;
L_08AC2D40:;
    v0 = LD32(a0);
    goto L_08AC2D44;
L_08AC2D44:;
    v1 = LD32(v0);
    cnd_ = v1 == a1;
    a2 = v0 + 0;
    if (cnd_) { goto L_08AC2D68; }
    goto L_08AC2D50;
L_08AC2D50:;
    a0 = LD32(a0+4);
    goto L_08AC2D54;
L_08AC2D54:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AC2D44; }
    goto L_08AC2D5C;
L_08AC2D5C:;
    a2 = 0 + 0;
    goto L_08AC2D60;
L_08AC2D60:;
    v0 = a2 + 0;
    return v0;
L_08AC2D68:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AC2D54; }
    goto L_08AC2D74;
L_08AC2D74:;
    goto L_08AC2D60;
}

/* 08AC2D7C */
u64 func_08AC2D7C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08AC2D7C:;
    v1 = LD32(a0+8);
    cnd_ = v1 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_08AC2DC8; }
    goto L_08AC2D88;
L_08AC2D88:;
    a2 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a2+4);
    a0 = a2 + 0;
    goto L_08AC2D98;
L_08AC2D98:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AC2DF0; }
    goto L_08AC2DA4;
L_08AC2DA4:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a1+8, a0);
    if (cnd_) { goto L_08AC2DD8; }
    goto L_08AC2DB8;
L_08AC2DB8:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC2DF0; }
    goto L_08AC2DC8;
L_08AC2DC8:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_08AC2DB8; }
    goto L_08AC2DD4;
L_08AC2DD4:;
    a2 = LD32(a1);
    goto L_08AC2DD8;
L_08AC2DD8:;
    v1 = LD32(a1+4);
    a0 = a2 + 0;
    v1 = v1 + 1;
    ST32(a1+4, v1);
    v0 = LD32(a2+4);
    goto L_08AC2D98;
L_08AC2DF0:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08AC2DF8 */
u64 func_08AC2DF8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AC2DF8:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AC2E8C; }
    goto L_08AC2E24;
L_08AC2E24:;
    v0 = LD32(s1);
    goto L_08AC2E28;
L_08AC2E28:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08AC2E7C; }
    goto L_08AC2E3C;
L_08AC2E3C:;
    v0 = LD_U8(s0+8);
    goto L_08AC2E40;
L_08AC2E40:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08AC2EBC; }
    goto L_08AC2E48;
L_08AC2E48:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AC2EAC; }
    goto L_08AC2E50;
L_08AC2E50:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08AC2E58;
L_08AC2E58:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC2E64;
L_08AC2E64:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08AC2E70;
L_08AC2E70:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08AC2E40; }
    goto L_08AC2E78;
L_08AC2E78:;
    v1 = LD32(s1+4);
    goto L_08AC2E7C;
L_08AC2E7C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AC2E28; }
    goto L_08AC2E8C;
L_08AC2E8C:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08AC2EAC:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08AC2E58;
L_08AC2EBC:;
    s0 = LD32(s0+4);
    goto L_08AC2E70;
}

/* 08AC2EC4 */
void func_08AC2EC4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08AC2EC4:;
    v1 = LD32(a0+8);
    cnd_ = v1 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_08AC2F10; }
    goto L_08AC2ED0;
L_08AC2ED0:;
    a2 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a2+4);
    a0 = a2 + 0;
    goto L_08AC2EE0;
L_08AC2EE0:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AC2F38; }
    goto L_08AC2EEC;
L_08AC2EEC:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a1+8, a0);
    if (cnd_) { goto L_08AC2F20; }
    goto L_08AC2F00;
L_08AC2F00:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC2F38; }
    goto L_08AC2F10;
L_08AC2F10:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_08AC2F00; }
    goto L_08AC2F1C;
L_08AC2F1C:;
    a2 = LD32(a1);
    goto L_08AC2F20;
L_08AC2F20:;
    v1 = LD32(a1+4);
    a0 = a2 + 0;
    v1 = v1 + 1;
    ST32(a1+4, v1);
    v0 = LD32(a2+4);
    goto L_08AC2EE0;
L_08AC2F38:;
    return;
}

/* 08AC2F40 */
void func_08AC2F40(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AC2F40:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AC2FD4; }
    goto L_08AC2F6C;
L_08AC2F6C:;
    v0 = LD32(s1);
    goto L_08AC2F70;
L_08AC2F70:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08AC2FC4; }
    goto L_08AC2F84;
L_08AC2F84:;
    v0 = LD_U8(s0+8);
    goto L_08AC2F88;
L_08AC2F88:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08AC3004; }
    goto L_08AC2F90;
L_08AC2F90:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AC2FF4; }
    goto L_08AC2F98;
L_08AC2F98:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08AC2FA0;
L_08AC2FA0:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC2FAC;
L_08AC2FAC:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08AC2FB8;
L_08AC2FB8:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08AC2F88; }
    goto L_08AC2FC0;
L_08AC2FC0:;
    v1 = LD32(s1+4);
    goto L_08AC2FC4;
L_08AC2FC4:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AC2F70; }
    goto L_08AC2FD4;
L_08AC2FD4:;
    sp = sp + 32;
    return;
L_08AC2FF4:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08AC2FA0;
L_08AC3004:;
    s0 = LD32(s0+4);
    goto L_08AC2FB8;
}

/* 08AC300C */
rv_t func_08AC300C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC300C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08991FF4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3024;
L_08AC3024:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3030 */
rv_t func_08AC3030(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3030:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_08991FF4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3048;
L_08AC3048:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3054 */
rv_t func_08AC3054(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3054:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_0899208C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC306C;
L_08AC306C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3078 */
rv_t func_08AC3078(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3078:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_0899208C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3090;
L_08AC3090:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC309C */
rv_t func_08AC309C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC309C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC30A4 */
rv_t func_08AC30A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC30A4:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC30AC */
rv_t func_08AC30AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC30AC:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC30B4 */
rv_t func_08AC30B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC30B4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_0885E23C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC30CC;
L_08AC30CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC30D8 */
rv_t func_08AC30D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC30D8:;
    v0 = 999;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC30E0 */
rv_t func_08AC30E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC30E0:;
    v0 = LD32(a0+24);
    return (rv_t){ v0, v1, f0 };
}

/* 08AC30E8 */
rv_t func_08AC30E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC30E8:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    s0 = a1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3110;
L_08AC3110:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f0));
    ST32(s0, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3138 */
rv_t func_08AC3138(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3138:;
    sp = sp - 16;
    v1 = LD32(a2);
    v0 = LD32(v1-12);
    a0 = a2 + v0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    s0 = a1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3160;
L_08AC3160:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f0));
    ST32(s0, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3188 */
rv_t func_08AC3188(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3188:;
    v0 = D_08B45AA8 - (23208);
    v0 = v0 + 23208;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3194 */
rv_t func_08AC3194(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f5 = 0;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 224);
L_08AC3194:;
    sp = sp - 224;
    s1 = a1 + 0;
    a1 = a2 + 0;
    a2 = 1;
    s0 = a0 + 0;
    a0 = sp + 16;
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC31CC;
L_08AC31CC:;
    v0 = D_08AEE708 - (-6392);
    v1 = LD32(s0);
    f1 = BITSF(0);
    f0 = BITSF(LD32(v0-6392));
    v0 = LD32(v1+92);
    ST32(sp+52, FBITS(f1));
    a0 = s0 + 0;
    ST32(sp+56, FBITS(f0));
    t_ = v0;
    ST32(sp+48, FBITS(f1));
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC31F4;
L_08AC31F4:;
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
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
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
    f3 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f2 = f2 + f1;
    f0 = BITSF(v0);
    f1 = BITSF(LD32(sp+20));
    ST32(sp+64, FBITS(f3));
    f1 = f1 + f0;
    f0 = BITSF(LD32(sp+24));
    ST32(s1, FBITS(f2));
    f0 = f0 + f5;
    ST32(s1+4, FBITS(f1));
    ST32(s1+8, FBITS(f0));
    ST32(sp+68, v0);
    sp = sp + 224;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC32D8 */
rv_t func_08AC32D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC32D8:;
    f0 = BITSF(0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AC32E4 */
rv_t func_08AC32E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC32E4:;
    v0 = 999;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC32EC */
rv_t func_08AC32EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC32EC:;
    v0 = D_08AEE70C - (-6388);
    f0 = BITSF(LD32(v0-6388));
    return (rv_t){ v0, v1, f0 };
}

/* 08AC32F8 */
rv_t func_08AC32F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC32F8:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3300 */
u64 func_08AC3300(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3300:;
    sp = sp - 16;
    a2 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a1);
    a0 = LD32(a0+4);
    a1 = LD32(s0);
    v1 = LD32(v0-16);
    a0 = a0 - 1;
    v1 = a2 + v1;
    v0 = LD32(v1+4);
    v0 = v0 & a0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AC3368; }
    goto L_08AC3348;
L_08AC3348:;
    a1 = v0 + 0;
    v0 = LD32(a0);
    goto L_08AC3350;
L_08AC3350:;
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AC337C; }
    goto L_08AC3358;
L_08AC3358:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AC3350; }
    goto L_08AC3368;
L_08AC3368:;
    v0 = 0 + 0;
    goto L_08AC336C;
L_08AC336C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AC337C:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AC3390; }
    goto L_08AC3384;
L_08AC3384:;
    ST8(a0+8, v0);
    goto L_08AC3388;
L_08AC3388:;
    v0 = 1;
    goto L_08AC336C;
L_08AC3390:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC33B4; }
    goto L_08AC3398;
L_08AC3398:;
    ST32(v1+4, v0);
    goto L_08AC339C;
L_08AC339C:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC33A4;
L_08AC33A4:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AC3388;
L_08AC33B4:;
    ST32(a1, v0);
    goto L_08AC339C;
}

/* 08AC33BC */
rv_t func_08AC33BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC33BC:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC33C4 */
rv_t func_08AC33C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC33C4:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC33CC */
rv_t func_08AC33CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC33CC:;
    v0 = 3;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC33D4 */
rv_t func_08AC33D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC33D4:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC33DC */
rv_t func_08AC33DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC33DC:;
    v0 = 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC33E4 */
rv_t func_08AC33E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC33E4:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC33EC */
rv_t func_08AC33EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC33EC:;
    v0 = LD32(a0+144);
    v0 = v0 ^ 0x3e7;
    v0 = 0 < v0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC33FC */
rv_t func_08AC33FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC33FC:;
    v0 = LD32(a0+144);
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3404 */
rv_t func_08AC3404(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3404:;
    f0 = BITSF(LD32(a0+164));
    return (rv_t){ v0, v1, f0 };
}

/* 08AC340C */
rv_t func_08AC340C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC340C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3414 */
rv_t func_08AC3414(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3414:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC341C */
rv_t func_08AC341C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC341C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3424 */
rv_t func_08AC3424(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3424:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC342C */
rv_t func_08AC342C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC342C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3434 */
rv_t func_08AC3434(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3434:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC343C */
rv_t func_08AC343C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC343C:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3444 */
rv_t func_08AC3444(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3444:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC344C */
rv_t func_08AC344C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC344C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3454 */
rv_t func_08AC3454(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3454:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC345C */
rv_t func_08AC345C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC345C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3464 */
rv_t func_08AC3464(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3464:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC346C */
rv_t func_08AC346C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC346C:;
    v0 = D_08B45AA8 - (23208);
    v0 = v0 + 23208;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3478 */
rv_t func_08AC3478(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3478:;
    v0 = LD32(a0+108);
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3480 */
rv_t func_08AC3480(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3480:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3488 */
rv_t func_08AC3488(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3488:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3490 */
rv_t func_08AC3490(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3490:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_08AC34AC;
L_08AC34AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC34B8 */
rv_t func_08AC34B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC34B8:;
    v0 = 999;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC34C0 */
rv_t func_08AC34C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC34C0:;
    v0 = 999;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC34C8 */
rv_t func_08AC34C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC34C8:;
    v0 = 999;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC34D0 */
rv_t func_08AC34D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC34D0:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC34D8 */
rv_t func_08AC34D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC34D8:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC34E0 */
rv_t func_08AC34E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC34E0:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC34E8 */
rv_t func_08AC34E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC34E8:;
    v0 = 2;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC34F0 */
rv_t func_08AC34F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC34F0:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC34F8 */
rv_t func_08AC34F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC34F8:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3500 */
rv_t func_08AC3500(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3500:;
    v0 = LD32(a0+112);
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3508 */
rv_t func_08AC3508(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3508:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3510 */
rv_t func_08AC3510(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3510:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3518 */
rv_t func_08AC3518(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3518:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3520 */
rv_t func_08AC3520(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3520:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3528 */
rv_t func_08AC3528(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3528:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3530 */
rv_t func_08AC3530(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3530:;
    v0 = 999;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3538 */
rv_t func_08AC3538(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3538:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3540 */
rv_t func_08AC3540(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3540:;
    v0 = LD_U8(a0+116);
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3548 */
rv_t func_08AC3548(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3548:;
    v0 = LD32(a0+120);
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3550 */
rv_t func_08AC3550(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3550:;
    f0 = BITSF(LD32(a0+160));
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3558 */
rv_t func_08AC3558(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3558:;
    f0 = BITSF(0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3564 */
rv_t func_08AC3564(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3564:;
    f0 = BITSF(0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3570 */
rv_t func_08AC3570(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3570:;
    f0 = BITSF(0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AC357C */
rv_t func_08AC357C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC357C:;
    f0 = BITSF(0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3588 */
rv_t func_08AC3588(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3588:;
    f0 = BITSF(0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3594 */
rv_t func_08AC3594(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3594:;
    f0 = BITSF(0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AC35A0 */
rv_t func_08AC35A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC35A0:;
    f0 = BITSF(LD32(a0+168));
    return (rv_t){ v0, v1, f0 };
}

/* 08AC35A8 */
rv_t func_08AC35A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC35A8:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC35B0 */
rv_t func_08AC35B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC35B0:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC35B8 */
rv_t func_08AC35B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC35B8:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC35C0 */
rv_t func_08AC35C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC35C0:;
    ST8(a0+116, a1);
    return (rv_t){ v0, v1, f0 };
}

/* 08AC35C8 */
rv_t func_08AC35C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC35C8:;
    ST32(a0+120, a1);
    return (rv_t){ v0, v1, f0 };
}

/* 08AC35D0 */
rv_t func_08AC35D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC35D0:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC35D8 */
rv_t func_08AC35D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC35D8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC35E0 */
rv_t func_08AC35E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC35E0:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC35E8 */
rv_t func_08AC35E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC35E8:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC35F0 */
rv_t func_08AC35F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC35F0:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC35F8 */
rv_t func_08AC35F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC35F8:;
    sp = sp - 16;
    a0 = 372;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3614;
L_08AC3614:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08805BA0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3624;
L_08AC3624:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC363C */
rv_t func_08AC363C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC363C:;
    a1 = LD_U8(a0+195);
    v1 = 3;
    v0 = 1;
    if (a1 == 0) v0 = v1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3650 */
rv_t func_08AC3650(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3650:;
    sp = sp - 16;
    a1 = LD_U8(a0+195);
    a1 = a1 ^ 0x1;
    { rv_t r_ = func_08A04770(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3664;
L_08AC3664:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3670 */
rv_t func_08AC3670(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3670:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3678 */
rv_t func_08AC3678(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3678:;
    f0 = BITSF(LD32(a0+180));
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3680 */
rv_t func_08AC3680(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3680:;
    f0 = BITSF(LD32(a0+176));
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3688 */
void func_08AC3688(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3688:;
    sp = sp - 16;
    a2 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a1);
    a0 = LD32(a0+4);
    a1 = LD32(s0);
    v1 = LD32(v0-16);
    a0 = a0 - 1;
    v1 = a2 + v1;
    v0 = LD32(v1+4);
    v0 = v0 & a0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AC36F0; }
    goto L_08AC36D0;
L_08AC36D0:;
    a1 = v0 + 0;
    v0 = LD32(a0);
    goto L_08AC36D8;
L_08AC36D8:;
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AC3704; }
    goto L_08AC36E0;
L_08AC36E0:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AC36D8; }
    goto L_08AC36F0;
L_08AC36F0:;
    v0 = 0 + 0;
    goto L_08AC36F4;
L_08AC36F4:;
    sp = sp + 16;
    return;
L_08AC3704:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AC3718; }
    goto L_08AC370C;
L_08AC370C:;
    ST8(a0+8, v0);
    goto L_08AC3710;
L_08AC3710:;
    v0 = 1;
    goto L_08AC36F4;
L_08AC3718:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC373C; }
    goto L_08AC3720;
L_08AC3720:;
    ST32(v1+4, v0);
    goto L_08AC3724;
L_08AC3724:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC372C;
L_08AC372C:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AC3710;
L_08AC373C:;
    ST32(a1, v0);
    goto L_08AC3724;
}

/* 08AC3744 */
rv_t func_08AC3744(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3744:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08992F84(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC375C;
L_08AC375C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3768 */
rv_t func_08AC3768(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3768:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_08992F84(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3780;
L_08AC3780:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC378C */
rv_t func_08AC378C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC378C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_0899301C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC37A4;
L_08AC37A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC37B0 */
rv_t func_08AC37B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC37B0:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_0899301C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC37C8;
L_08AC37C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC37D4 */
rv_t func_08AC37D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC37D4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-60);
    a0 = a0 + v1;
    { rv_t r_ = func_089930BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC37EC;
L_08AC37EC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC37F8 */
rv_t func_08AC37F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC37F8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-92);
    a0 = a0 + v1;
    { rv_t r_ = func_089930BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3810;
L_08AC3810:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC381C */
rv_t func_08AC381C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC381C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-52);
    a0 = a0 + v1;
    { rv_t r_ = func_08993100(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3834;
L_08AC3834:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3840 */
rv_t func_08AC3840(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3840:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-124);
    a0 = a0 + v1;
    { rv_t r_ = func_08993100(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3858;
L_08AC3858:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3864 */
rv_t func_08AC3864(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3864:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC386C */
rv_t func_08AC386C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC386C:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3874 */
rv_t func_08AC3874(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3874:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC387C */
rv_t func_08AC387C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC387C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-36);
    a0 = a0 + v1;
    { rv_t r_ = func_08AC3874(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3894;
L_08AC3894:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC38A0 */
rv_t func_08AC38A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC38A0:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC38A8 */
rv_t func_08AC38A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC38A8:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC38B0 */
rv_t func_08AC38B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC38B0:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC38B8 */
rv_t func_08AC38B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC38B8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC38C0 */
rv_t func_08AC38C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC38C0:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-96);
    a0 = a0 + v1;
    { rv_t r_ = func_08AC38B8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC38D8;
L_08AC38D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC38E4 */
rv_t func_08AC38E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC38E4:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC38EC */
rv_t func_08AC38EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC38EC:;
    sp = sp - 16;
    v1 = LD32(a0);
    a1 = LD32(v1+80);
    t_ = a1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3904;
L_08AC3904:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3910 */
rv_t func_08AC3910(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3910:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-104);
    a0 = a0 + v1;
    { rv_t r_ = func_08AC38EC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3928;
L_08AC3928:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3934 */
rv_t func_08AC3934(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3934:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC393C */
rv_t func_08AC393C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC393C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3944 */
rv_t func_08AC3944(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3944:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC394C */
rv_t func_08AC394C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC394C:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s0 = a1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3974;
L_08AC3974:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f0));
    ST32(s0, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC399C */
rv_t func_08AC399C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC399C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC39A4 */
rv_t func_08AC39A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC39A4:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC39AC */
rv_t func_08AC39AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC39AC:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC39B4 */
rv_t func_08AC39B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC39B4:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC39BC */
rv_t func_08AC39BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC39BC:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC39C4 */
rv_t func_08AC39C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC39C4:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC39CC */
rv_t func_08AC39CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC39CC:;
    ST32(a1, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AC39D4 */
rv_t func_08AC39D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC39D4:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC39DC */
rv_t func_08AC39DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC39DC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC39E4 */
rv_t func_08AC39E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC39E4:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC39EC */
rv_t func_08AC39EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC39EC:;
    sp = sp - 16;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC39FC;
L_08AC39FC:;
    v1 = v0 + 0;
    a0 = 1;
    v0 = 3;
    if (v1 == 0) v0 = a0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3A18 */
rv_t func_08AC3A18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3A18:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3A20 */
rv_t func_08AC3A20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3A20:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3A28 */
rv_t func_08AC3A28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3A28:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3A30 */
rv_t func_08AC3A30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3A30:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3A38 */
void func_08AC3A38(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3A38:;
    sp = sp - 16;
    a2 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a1);
    a0 = LD32(a0+4);
    a1 = LD32(s0);
    v1 = LD32(v0-16);
    a0 = a0 - 1;
    v1 = a2 + v1;
    v0 = LD32(v1+4);
    v0 = v0 & a0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AC3AA0; }
    goto L_08AC3A80;
L_08AC3A80:;
    a1 = v0 + 0;
    v0 = LD32(a0);
    goto L_08AC3A88;
L_08AC3A88:;
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AC3AB4; }
    goto L_08AC3A90;
L_08AC3A90:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AC3A88; }
    goto L_08AC3AA0;
L_08AC3AA0:;
    v0 = 0 + 0;
    goto L_08AC3AA4;
L_08AC3AA4:;
    sp = sp + 16;
    return;
L_08AC3AB4:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AC3AC8; }
    goto L_08AC3ABC;
L_08AC3ABC:;
    ST8(a0+8, v0);
    goto L_08AC3AC0;
L_08AC3AC0:;
    v0 = 1;
    goto L_08AC3AA4;
L_08AC3AC8:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC3AEC; }
    goto L_08AC3AD0;
L_08AC3AD0:;
    ST32(v1+4, v0);
    goto L_08AC3AD4;
L_08AC3AD4:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC3ADC;
L_08AC3ADC:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AC3AC0;
L_08AC3AEC:;
    ST32(a1, v0);
    goto L_08AC3AD4;
}

/* 08AC3AF4 */
rv_t func_08AC3AF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3AF4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08993B58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3B0C;
L_08AC3B0C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3B18 */
rv_t func_08AC3B18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3B18:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_08993B58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3B30;
L_08AC3B30:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3B3C */
rv_t func_08AC3B3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3B3C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08993C44(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3B54;
L_08AC3B54:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3B60 */
rv_t func_08AC3B60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3B60:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_08993C44(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3B78;
L_08AC3B78:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3B84 */
rv_t func_08AC3B84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3B84:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_08993D38(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3B9C;
L_08AC3B9C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3BA8 */
rv_t func_08AC3BA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3BA8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_08994C30(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3BC0;
L_08AC3BC0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3BCC */
rv_t func_08AC3BCC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3BCC:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-64);
    a0 = a0 + v1;
    { rv_t r_ = func_08994C30(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3BE4;
L_08AC3BE4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3BF0 */
rv_t func_08AC3BF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3BF0:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-36);
    a0 = a0 + v1;
    { rv_t r_ = func_08998C1C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3C08;
L_08AC3C08:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3C14 */
rv_t func_08AC3C14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3C14:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-28);
    a0 = a0 + v1;
    { rv_t r_ = func_08998CA4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3C2C;
L_08AC3C2C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3C38 */
rv_t func_08AC3C38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3C38:;
    v0 = LD32(a0+520);
    v0 = (v0 >> 12) & 0x1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3C44 */
rv_t func_08AC3C44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3C44:;
    f0 = BITSF(LD32(a0+388));
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3C4C */
rv_t func_08AC3C4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3C4C:;
    v0 = LD32(a0+424);
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3C54 */
rv_t func_08AC3C54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3C54:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+196);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3C70;
L_08AC3C70:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 999;
    if (cnd_) { goto L_08AC3C90; }
    goto L_08AC3C7C;
L_08AC3C7C:;
    v1 = LD32(s0);
    v0 = LD32(v1+268);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3C8C;
L_08AC3C8C:;
    v1 = v0 + 0;
    goto L_08AC3C90;
L_08AC3C90:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3CA4 */
rv_t func_08AC3CA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08AC3CA4:;
    v0 = LD32(a0+520);
    v0 = v0 & 0x2000;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AC3CBC; }
    goto L_08AC3CB4;
L_08AC3CB4:;
    v0 = LD_U8(a0+197);
    v1 = v0 < 0x1u;
    goto L_08AC3CBC;
L_08AC3CBC:;
    v0 = v1 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3CC4 */
rv_t func_08AC3CC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3CC4:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08A04248(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3CD8;
L_08AC3CD8:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AC3CF8; }
    goto L_08AC3CE0;
L_08AC3CE0:;
    f1 = BITSF(LD32(s0+364));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08AC3D00; }
    goto L_08AC3CF8;
L_08AC3CF8:;
    v1 = 1;
    goto L_08AC3D00;
L_08AC3D00:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3D10 */
rv_t func_08AC3D10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3D10:;
    v0 = LD32(a0+520);
    v0 = (v0 >> 19) & 0x1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3D1C */
rv_t func_08AC3D1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3D1C:;
    v0 = LD32(a0+520);
    v0 = (v0 >> 4) & 0x1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3D28 */
rv_t func_08AC3D28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3D28:;
    v0 = LD32(a0+448);
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3D30 */
rv_t func_08AC3D30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3D30:;
    v0 = 5;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3D38 */
rv_t func_08AC3D38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3D38:;
    v0 = 60;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3D40 */
rv_t func_08AC3D40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08AC3D40:;
    v0 = LD32(a0+520);
    f0 = BITSF(0);
    v0 = (v0 >> 5) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(a0+168)); goto L_08AC3D54; }
    goto L_08AC3D54;
L_08AC3D54:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3D5C */
rv_t func_08AC3D5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3D5C:;
    f0 = BITSF(LD32(a0+376));
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3D64 */
rv_t func_08AC3D64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3D64:;
    v0 = LD32(a0+424);
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3D6C */
rv_t func_08AC3D6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC3D6C:;
    v0 = 0x203e0000u;
    v0 = v0 | 0x217d;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3D78 */
rv_t func_08AC3D78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3D78:;
    a0 = D_08ADE2B4 - (-7500);
    sp = sp - 16;
    a0 = a0 - 7500;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC3D8C;
L_08AC3D8C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3D98 */
rv_t func_08AC3D98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3D98:;
    sp = sp - 16;
    a0 = 396;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3DB4;
L_08AC3DB4:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_0880B6DC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC3DC4;
L_08AC3DC4:;
    v0 = D_08AF97D8 - (-26664);
    v0 = v0 - 26664;
    ST32(s0, v0);
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC3DE8 */
void func_08AC3DE8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3DE8:;
    sp = sp - 16;
    a2 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a1);
    a0 = LD32(a0+4);
    a1 = LD32(s0);
    v1 = LD32(v0-16);
    a0 = a0 - 1;
    v1 = a2 + v1;
    v0 = LD32(v1+4);
    v0 = v0 & a0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AC3E50; }
    goto L_08AC3E30;
L_08AC3E30:;
    a1 = v0 + 0;
    v0 = LD32(a0);
    goto L_08AC3E38;
L_08AC3E38:;
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AC3E64; }
    goto L_08AC3E40;
L_08AC3E40:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AC3E38; }
    goto L_08AC3E50;
L_08AC3E50:;
    v0 = 0 + 0;
    goto L_08AC3E54;
L_08AC3E54:;
    sp = sp + 16;
    return;
L_08AC3E64:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AC3E78; }
    goto L_08AC3E6C;
L_08AC3E6C:;
    ST8(a0+8, v0);
    goto L_08AC3E70;
L_08AC3E70:;
    v0 = 1;
    goto L_08AC3E54;
L_08AC3E78:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AC3E9C; }
    goto L_08AC3E80;
L_08AC3E80:;
    ST32(v1+4, v0);
    goto L_08AC3E84;
L_08AC3E84:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC3E8C;
L_08AC3E8C:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AC3E70;
L_08AC3E9C:;
    ST32(a1, v0);
    goto L_08AC3E84;
}

/* 08AC3EA4 */
u64 func_08AC3EA4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC3EA4:;
    sp = sp - 16;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08AC3ED8; }
    goto L_08AC3EB0;
L_08AC3EB0:;
    v1 = LD32(a1);
    cnd_ = v1 == 0;
    v0 = LD32(a1+4);
    if (cnd_) { goto L_08AC3EE4; }
    goto L_08AC3EBC;
L_08AC3EBC:;
    ST32(v1+4, v0);
    goto L_08AC3EC0;
L_08AC3EC0:;
    v0 = LD32(a1+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a0+4, v1); goto L_08AC3ED0; }
    goto L_08AC3ECC;
L_08AC3ECC:;
    ST32(v0, v1);
    goto L_08AC3ED0;
L_08AC3ED0:;
    a0 = a1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC3ED8;
L_08AC3ED8:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AC3EE4:;
    ST32(a0, v0);
    v1 = LD32(a1);
    goto L_08AC3EC0;
}

/* 08AC3EF0 */
u64 func_08AC3EF0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08AC3EF0:;
    a3 = LD32(a0+8);
    a2 = a0 + 0;
    cnd_ = a3 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08AC3F64; }
    goto L_08AC3F00;
L_08AC3F00:;
    a3 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08AC3F10;
L_08AC3F10:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AC3F8C; }
    goto L_08AC3F1C;
L_08AC3F1C:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08AC3F74; }
    goto L_08AC3F30;
L_08AC3F30:;
    cnd_ = a1 != 0;
    a3 = LD32(a2+8);
    if (cnd_) { goto L_08AC3F58; }
    goto L_08AC3F38;
L_08AC3F38:;
    v1 = LD32(a3);
    v0 = LD32(v1);
    a0 = LD32(v0-16);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a3+4); goto L_08AC3F68; }
    goto L_08AC3F58;
L_08AC3F58:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AC3F8C; }
    goto L_08AC3F64;
L_08AC3F64:;
    v0 = LD32(a3+4);
    goto L_08AC3F68;
L_08AC3F68:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08AC3F30; }
    goto L_08AC3F70;
L_08AC3F70:;
    a3 = LD32(a2);
    goto L_08AC3F74;
L_08AC3F74:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08AC3F10;
L_08AC3F8C:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08AC3F94 */
u64 func_08AC3F94(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08AC3F94:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AC4028; }
    goto L_08AC3FC0;
L_08AC3FC0:;
    v0 = LD32(s1);
    goto L_08AC3FC4;
L_08AC3FC4:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08AC4018; }
    goto L_08AC3FD8;
L_08AC3FD8:;
    v0 = LD_U8(s0+8);
    goto L_08AC3FDC;
L_08AC3FDC:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08AC4058; }
    goto L_08AC3FE4;
L_08AC3FE4:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AC4048; }
    goto L_08AC3FEC;
L_08AC3FEC:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08AC3FF4;
L_08AC3FF4:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC4000;
L_08AC4000:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08AC400C;
L_08AC400C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08AC3FDC; }
    goto L_08AC4014;
L_08AC4014:;
    v1 = LD32(s1+4);
    goto L_08AC4018;
L_08AC4018:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AC3FC4; }
    goto L_08AC4028;
L_08AC4028:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08AC4048:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08AC3FF4;
L_08AC4058:;
    s0 = LD32(s0+4);
    goto L_08AC400C;
}

/* 08AC4060 */
rv_t func_08AC4060(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC4060:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC4068 */
rv_t func_08AC4068(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC4068:;
    v0 = LD32(a0+68);
    v0 = 0 < v0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC4074 */
rv_t func_08AC4074(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC4074:;
    sp = sp - 16;
    s1 = 0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AC4098;
L_08AC4098:;
    cnd_ = v0 == 0;
    v0 = s1 + 0;
    if (cnd_) { goto L_08AC40B0; }
    goto L_08AC40A0;
L_08AC40A0:;
    v0 = LD32(s0+112);
    v0 = v0 & 0x20;
    s1 = v0 < 0x1u;
    v0 = s1 + 0;
    goto L_08AC40B0;
L_08AC40B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC40C4 */
rv_t func_08AC40C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC40C4:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC40CC */
rv_t func_08AC40CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC40CC:;
    v0 = D_08AFC268 - (-15768);
    v0 = v0 - 15768;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_089DF648(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC40EC;
L_08AC40EC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC40F4;
L_08AC40F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC4104 */
rv_t func_08AC4104(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC4104:;
    v0 = D_08AFC268 - (-15768);
    v0 = v0 - 15768;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_089DF648(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC4120;
L_08AC4120:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC412C */
rv_t func_08AC412C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC412C:;
    v0 = LD_U8(a0+148);
    return (rv_t){ v0, v1, f0 };
}

/* 08AC4134 */
rv_t func_08AC4134(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC4134:;
    v0 = D_08AFC268 - (-15768);
    v0 = v0 - 15768;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_089DF648(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC4150;
L_08AC4150:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC415C */
rv_t func_08AC415C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC415C:;
    v0 = D_08AFC268 - (-15768);
    v0 = v0 - 15768;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_089DF648(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC417C;
L_08AC417C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC4184;
L_08AC4184:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC4194 */
rv_t func_08AC4194(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AC4194:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC419C */
rv_t func_08AC419C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC419C:;
    v0 = D_08AFC268 - (-15768);
    v0 = v0 - 15768;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_089DF648(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC41B8;
L_08AC41B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC41C4 */
rv_t func_08AC41C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC41C4:;
    v0 = D_08AFC268 - (-15768);
    v0 = v0 - 15768;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_089DF648(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC41E4;
L_08AC41E4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC41EC;
L_08AC41EC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC41FC */
rv_t func_08AC41FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC41FC:;
    v0 = D_08AFC268 - (-15768);
    v0 = v0 - 15768;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_089DF648(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC4218;
L_08AC4218:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC4224 */
rv_t func_08AC4224(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC4224:;
    v0 = D_08AFC268 - (-15768);
    v0 = v0 - 15768;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_089DF648(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC4244;
L_08AC4244:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC424C;
L_08AC424C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC425C */
rv_t func_08AC425C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC425C:;
    v0 = D_08AFC268 - (-15768);
    v0 = v0 - 15768;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_089DF648(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC4278;
L_08AC4278:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC4284 */
rv_t func_08AC4284(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC4284:;
    v0 = D_08AFC268 - (-15768);
    v0 = v0 - 15768;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_089DF648(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC42A4;
L_08AC42A4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC42AC;
L_08AC42AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC42BC */
rv_t func_08AC42BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC42BC:;
    v0 = D_08AFC268 - (-15768);
    v0 = v0 - 15768;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_089DF648(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC42D8;
L_08AC42D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC42E4 */
rv_t func_08AC42E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC42E4:;
    v0 = D_08AFC268 - (-15768);
    v0 = v0 - 15768;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_089DF648(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC4304;
L_08AC4304:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC430C;
L_08AC430C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC431C */
rv_t func_08AC431C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC431C:;
    v0 = D_08AFC268 - (-15768);
    v0 = v0 - 15768;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_089DF648(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC4338;
L_08AC4338:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC4344 */
rv_t func_08AC4344(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC4344:;
    v0 = D_08AFC268 - (-15768);
    v0 = v0 - 15768;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_089DF648(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC4364;
L_08AC4364:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC436C;
L_08AC436C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC437C */
rv_t func_08AC437C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC437C:;
    v0 = D_08AFC268 - (-15768);
    v0 = v0 - 15768;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_089DF648(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC4398;
L_08AC4398:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC43A4 */
rv_t func_08AC43A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC43A4:;
    v0 = D_08AFC268 - (-15768);
    v0 = v0 - 15768;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_089DF648(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC43C4;
L_08AC43C4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC43CC;
L_08AC43CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC43DC */
rv_t func_08AC43DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC43DC:;
    v0 = D_08AFC268 - (-15768);
    v0 = v0 - 15768;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_089DF648(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC43F8;
L_08AC43F8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC4404 */
rv_t func_08AC4404(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC4404:;
    v0 = D_08AFC268 - (-15768);
    v0 = v0 - 15768;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_089DF648(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC4424;
L_08AC4424:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC442C;
L_08AC442C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AC443C */
rv_t func_08AC443C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08AC443C:;
    v0 = D_08AFC268 - (-15768);
    v0 = v0 - 15768;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_089DF648(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AC4458;
L_08AC4458:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}
