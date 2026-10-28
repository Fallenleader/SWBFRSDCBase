#include "game.h"
#include "../../platform/common/game_hooks.h"   /* native hook (tools/dc/hooks.py) */

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

/* 08830E28 */
void func_08830E28(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_08830E28:;
    v0 = a1 << 3;
    ST32(a0+4, a1);
    ST32(a0, v0);
    return;
}

/* 08830E38 */
void func_08830E38(u32 a0, u32 a1, u32 a2)
{
L_08830E38:;
    a2 = a2 << 3;
    ST32(a0+8, a1);
    ST32(a0, a2);
    ST32(a0+4, 0);
    return;
}

/* 08830E4C */
u64 func_08830E4C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    int cnd_;
L_08830E4C:;
    t0 = a0 + 0;
    a0 = LD32(a0);
    v1 = a1 + 0;
    v0 = a0 < a1;
    cnd_ = v0 == 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_08830E70; }
    goto L_08830E64;
L_08830E64:;
    v0 = 0 + 0;
    ST32(t0, 0);
    return (u64)v0 | ((u64)v1 << 32);
L_08830E70:;
    v0 = a0 - a1;
    cnd_ = a1 == 0;
    ST32(t0, v0);
    if (cnd_) { goto L_08830EC8; }
    goto L_08830E7C;
L_08830E7C:;
    t3 = LD32(t0+8);
    t4 = 7;
    t2 = 1;
    goto L_08830E88;
L_08830E88:;
    a1 = LD32(t0+4);
    a3 = v1 - 1;
    a2 = t2 << (a3 & 31);
    v0 = a1 >> 3;
    v0 = t3 + v0;
    a0 = LD_U8(v0);
    v1 = a1 & 0x7;
    v1 = t4 - v1;
    v1 = t2 << (v1 & 31);
    a0 = a0 & v1;
    a2 = t1 | a2;
    a1 = a1 + 1;
    if (a0 != 0) t1 = a2;
    ST32(t0+4, a1);
    cnd_ = a3 != 0;
    v1 = a3 + 0;
    if (cnd_) { goto L_08830E88; }
    goto L_08830EC8;
L_08830EC8:;
    v0 = t1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08830ED0 */
u32 func_08830ED0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08830ED0:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = LD32(a0);
    s2 = LD32(a0+4);
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08830EF4;
L_08830EF4:;
    ST32(s0, s1);
    ST32(s0+4, s2);
    sp = sp + 16;
    return v0;
}

/* 08830F14 */
void func_08830F14(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
L_08830F14:;
    v1 = 0x67450000u;
    a1 = 0xefcd0000u;
    a2 = 0x98ba0000u;
    v0 = 0x10320000u;
    v1 = v1 | 0x2301;
    a1 = a1 | 0xab89;
    a2 = a2 | 0xdcfe;
    v0 = v0 | 0x5476;
    ST32(a0+12, v0);
    ST32(a0, v1);
    ST32(a0+4, a1);
    ST32(a0+8, a2);
    ST32(a0+16, 0);
    ST32(a0+20, 0);
    return;
}

/* 08830F50 */
void func_08830F50(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08830F50:;
    sp = sp - 32;
    v1 = a2 << 3;
    s4 = a1 + 0;
    s3 = a2 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+16);
    a0 = v0 + v1;
    v1 = a0 < v1;
    ST32(s0+16, a0);
    cnd_ = v1 == 0;
    a2 = (v0 >> 3) & 0x3f;
    if (cnd_) { goto L_08830FA0; }
    goto L_08830F94;
L_08830F94:;
    v0 = LD32(s0+20);
    v0 = v0 + 1;
    ST32(s0+20, v0);
    goto L_08830FA0;
L_08830FA0:;
    a0 = LD32(s0+20);
    v0 = 64;
    s2 = v0 - a2;
    v1 = s3 >> 29;
    a0 = a0 + v1;
    v0 = s3 < s2;
    ST32(s0+20, a0);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08830FF8; }
    goto L_08830FC4;
L_08830FC4:;
    a0 = s0 + a2;
    a1 = s4 + s1;
    a2 = s3 - s1;
    a0 = a0 + 24;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08830FD8;
L_08830FD8:;
    sp = sp + 32;
    return;
L_08830FF8:;
    a0 = s0 + a2;
    a0 = a0 + 24;
    a2 = s2 + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08831008;
L_08831008:;
    a2 = s0 + 24;
    a0 = s0 + 0;
    a1 = s0 + 0;
    func_08831100(a1, a2);
    goto L_08831018;
L_08831018:;
    v0 = s2 + 63;
    v0 = v0 < s3;
    cnd_ = v0 != 0;
    s1 = s2 + 0;
    if (cnd_) { goto L_08831030; }
    goto L_08831028;
L_08831028:;
    a2 = 0 + 0;
    goto L_08830FC4;
L_08831030:;
    a2 = s4 + s1;
    goto L_08831034;
L_08831034:;
    a0 = s0 + 0;
    a1 = s0 + 0;
    s1 = s1 + 64;
    func_08831100(a1, a2);
    goto L_08831044;
L_08831044:;
    v0 = s1 + 63;
    v0 = v0 < s3;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = s4 + s1; goto L_08831034; }
    goto L_08831054;
L_08831054:;
    a2 = 0 + 0;
    goto L_08830FC4;
}

/* 0883105C */
void func_0883105C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883105C:;
    sp = sp - 32;
    a2 = a0 + 16;
    a3 = 8;
    s1 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    func_08831C44(a1, a2, a3);
    goto L_08831084;
L_08831084:;
    a1 = D_08B15A1C - (23068);
    v0 = LD32(s0+16);
    a1 = a1 + 23068;
    a0 = s0 + 0;
    a3 = (v0 >> 3) & 0x3f;
    v1 = a3 < 0x38u;
    v0 = 56;
    cnd_ = v1 != 0;
    a2 = v0 - a3;
    if (cnd_) { goto L_088310B0; }
    goto L_088310A8;
L_088310A8:;
    v0 = 120;
    a2 = v0 - a3;
    goto L_088310B0;
L_088310B0:;
    func_08830F50(a0, a1, a2);
    goto L_088310B8;
L_088310B8:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 8;
    func_08830F50(a0, a1, a2);
    goto L_088310C8;
L_088310C8:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = s0 + 0;
    a3 = 16;
    func_08831C44(a1, a2, a3);
    goto L_088310DC;
L_088310DC:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 88;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088310EC;
L_088310EC:;
    sp = sp + 32;
    return;
}

/* 08831100 */
void func_08831100(u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, t9 = 0, fp = 0;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08831100:;
    sp = sp - 128;
    a3 = 64;
    s0 = a1 + 0;
    t9 = LD32(a1+8);
    t7 = LD32(a1+12);
    fp = LD32(a1+4);
    a1 = sp + 0;
    s7 = LD32(s0);
    ST32(sp+64, t7);
    ST32(sp+68, t9);
    func_08831C90(a1, a2, a3);
    goto L_08831154;
L_08831154:;
    v1 = ~(0 | fp);
    t9 = LD32(sp+68);
    t7 = LD32(sp+64);
    t8 = LD32(sp);
    v0 = fp & t9;
    v1 = v1 & t7;
    v0 = v0 | v1;
    v0 = v0 + t8;
    v1 = 0xd76a0000u;
    v0 = s7 + v0;
    v1 = v1 | 0xa478;
    s7 = v0 + v1;
    s7 = ROTR(s7, 25);
    s7 = s7 + fp;
    s4 = LD32(sp+4);
    v1 = ~(0 | s7);
    v1 = v1 & t9;
    v0 = s7 & fp;
    v0 = v0 | v1;
    v0 = v0 + s4;
    v1 = 0xe8c70000u;
    v0 = t7 + v0;
    v1 = v1 | 0xb756;
    t7 = v0 + v1;
    t7 = ROTR(t7, 20);
    t7 = t7 + s7;
    s6 = LD32(sp+8);
    v1 = ~(0 | t7);
    v1 = v1 & fp;
    v0 = t7 & s7;
    v0 = v0 | v1;
    v0 = v0 + s6;
    v1 = 0x24200000u;
    v0 = t9 + v0;
    v1 = v1 | 0x70db;
    t9 = v0 + v1;
    t9 = ROTR(t9, 15);
    t9 = t9 + t7;
    s1 = LD32(sp+12);
    v1 = ~(0 | t9);
    v1 = v1 & s7;
    v0 = t9 & t7;
    v0 = v0 | v1;
    v0 = v0 + s1;
    v1 = 0xc1bd0000u;
    v0 = fp + v0;
    v1 = v1 | 0xceee;
    fp = v0 + v1;
    fp = ROTR(fp, 10);
    fp = fp + t9;
    s5 = LD32(sp+16);
    v1 = ~(0 | fp);
    v1 = v1 & t7;
    v0 = fp & t9;
    v0 = v0 | v1;
    v0 = v0 + s5;
    v1 = 0xf57c0000u;
    v0 = s7 + v0;
    v1 = v1 | 0xfaf;
    s7 = v0 + v1;
    s7 = ROTR(s7, 25);
    s7 = s7 + fp;
    t4 = LD32(sp+20);
    v1 = ~(0 | s7);
    v1 = v1 & t9;
    v0 = s7 & fp;
    v0 = v0 | v1;
    v0 = v0 + t4;
    v1 = 0x47870000u;
    v0 = t7 + v0;
    v1 = v1 | 0xc62a;
    t7 = v0 + v1;
    t7 = ROTR(t7, 20);
    t7 = t7 + s7;
    s2 = LD32(sp+24);
    v1 = ~(0 | t7);
    v1 = v1 & fp;
    v0 = t7 & s7;
    v0 = v0 | v1;
    v0 = v0 + s2;
    v1 = 0xa8300000u;
    v0 = t9 + v0;
    v1 = v1 | 0x4613;
    t9 = v0 + v1;
    t9 = ROTR(t9, 15);
    t9 = t9 + t7;
    t1 = LD32(sp+28);
    v1 = ~(0 | t9);
    v1 = v1 & s7;
    v0 = t9 & t7;
    v0 = v0 | v1;
    v0 = v0 + t1;
    v1 = 0xfd460000u;
    v0 = fp + v0;
    v1 = v1 | 0x9501;
    fp = v0 + v1;
    fp = ROTR(fp, 10);
    fp = fp + t9;
    t5 = LD32(sp+32);
    v1 = ~(0 | fp);
    v1 = v1 & t7;
    v0 = fp & t9;
    v0 = v0 | v1;
    v0 = v0 + t5;
    v1 = 0x69800000u;
    v0 = s7 + v0;
    v1 = v1 | 0x98d8;
    s7 = v0 + v1;
    s7 = ROTR(s7, 25);
    s7 = s7 + fp;
    s3 = LD32(sp+36);
    v1 = ~(0 | s7);
    v1 = v1 & t9;
    v0 = s7 & fp;
    v0 = v0 | v1;
    v0 = v0 + s3;
    v1 = 0x8b440000u;
    v0 = t7 + v0;
    v1 = v1 | 0xf7af;
    t7 = v0 + v1;
    t7 = ROTR(t7, 20);
    t7 = t7 + s7;
    t2 = LD32(sp+40);
    v1 = ~(0 | t7);
    v1 = v1 & fp;
    v0 = t7 & s7;
    v0 = v0 | v1;
    v0 = v0 + t2;
    v1 = 0xffff0000u;
    v0 = t9 + v0;
    v1 = v1 | 0x5bb1;
    t9 = v0 + v1;
    t9 = ROTR(t9, 15);
    t9 = t9 + t7;
    t6 = LD32(sp+44);
    v1 = ~(0 | t9);
    v1 = v1 & s7;
    v0 = t9 & t7;
    v0 = v0 | v1;
    v0 = v0 + t6;
    v1 = 0x895c0000u;
    v0 = fp + v0;
    v1 = v1 | 0xd7be;
    fp = v0 + v1;
    fp = ROTR(fp, 10);
    fp = fp + t9;
    a3 = LD32(sp+48);
    v1 = ~(0 | fp);
    v1 = v1 & t7;
    v0 = fp & t9;
    v0 = v0 | v1;
    v0 = v0 + a3;
    v1 = 0x6b900000u;
    v0 = s7 + v0;
    v1 = v1 | 0x1122;
    s7 = v0 + v1;
    s7 = ROTR(s7, 25);
    s7 = s7 + fp;
    t3 = LD32(sp+52);
    v1 = ~(0 | s7);
    v1 = v1 & t9;
    v0 = s7 & fp;
    v0 = v0 | v1;
    v0 = v0 + t3;
    v1 = 0xfd980000u;
    v0 = t7 + v0;
    v1 = v1 | 0x7193;
    t7 = v0 + v1;
    t7 = ROTR(t7, 20);
    t7 = t7 + s7;
    a2 = LD32(sp+56);
    a1 = ~(0 | t7);
    v1 = a1 & fp;
    v0 = t7 & s7;
    v0 = v0 | v1;
    v0 = v0 + a2;
    v1 = 0xa6790000u;
    v0 = t9 + v0;
    v1 = v1 | 0x438e;
    t9 = v0 + v1;
    t9 = ROTR(t9, 15);
    t9 = t9 + t7;
    t0 = LD32(sp+60);
    a0 = ~(0 | t9);
    v1 = a0 & s7;
    v0 = t9 & t7;
    v0 = v0 | v1;
    v0 = v0 + t0;
    v1 = 0x49b40000u;
    v0 = fp + v0;
    v1 = v1 | 0x821;
    fp = v0 + v1;
    fp = ROTR(fp, 10);
    fp = fp + t9;
    a1 = t9 & a1;
    v0 = fp & t7;
    v0 = v0 | a1;
    v0 = v0 + s4;
    v1 = 0xf61e0000u;
    v0 = s7 + v0;
    v1 = v1 | 0x2562;
    s7 = v0 + v1;
    s7 = ROTR(s7, 27);
    s7 = s7 + fp;
    a0 = fp & a0;
    v0 = s7 & t9;
    v0 = v0 | a0;
    v0 = v0 + s2;
    v1 = 0xc0400000u;
    v0 = t7 + v0;
    v1 = v1 | 0xb340;
    t7 = v0 + v1;
    t7 = ROTR(t7, 23);
    t7 = t7 + s7;
    v1 = ~(0 | fp);
    v1 = s7 & v1;
    v0 = t7 & fp;
    v0 = v0 | v1;
    v0 = v0 + t6;
    v1 = 0x265e0000u;
    v0 = t9 + v0;
    v1 = v1 | 0x5a51;
    t9 = v0 + v1;
    t9 = ROTR(t9, 18);
    t9 = t9 + t7;
    v1 = ~(0 | s7);
    v1 = t7 & v1;
    v0 = t9 & s7;
    v0 = v0 | v1;
    v0 = v0 + t8;
    v1 = 0xe9b60000u;
    v0 = fp + v0;
    v1 = v1 | 0xc7aa;
    fp = v0 + v1;
    fp = ROTR(fp, 12);
    fp = fp + t9;
    v1 = ~(0 | t7);
    v1 = t9 & v1;
    v0 = fp & t7;
    v0 = v0 | v1;
    v0 = v0 + t4;
    v1 = 0xd62f0000u;
    v0 = s7 + v0;
    v1 = v1 | 0x105d;
    s7 = v0 + v1;
    s7 = ROTR(s7, 27);
    s7 = s7 + fp;
    v1 = ~(0 | t9);
    v1 = fp & v1;
    v0 = s7 & t9;
    v0 = v0 | v1;
    v0 = v0 + t2;
    v1 = 0x2440000u;
    v0 = t7 + v0;
    v1 = v1 | 0x1453;
    t7 = v0 + v1;
    t7 = ROTR(t7, 23);
    t7 = t7 + s7;
    v1 = ~(0 | fp);
    v1 = s7 & v1;
    v0 = t7 & fp;
    v0 = v0 | v1;
    v0 = v0 + t0;
    v1 = 0xd8a10000u;
    v0 = t9 + v0;
    v1 = v1 | 0xe681;
    t9 = v0 + v1;
    t9 = ROTR(t9, 18);
    t9 = t9 + t7;
    v1 = ~(0 | s7);
    v1 = t7 & v1;
    v0 = t9 & s7;
    v0 = v0 | v1;
    v0 = v0 + s5;
    v1 = 0xe7d30000u;
    v0 = fp + v0;
    v1 = v1 | 0xfbc8;
    fp = v0 + v1;
    fp = ROTR(fp, 12);
    fp = fp + t9;
    v1 = ~(0 | t7);
    v1 = t9 & v1;
    v0 = fp & t7;
    v0 = v0 | v1;
    v0 = v0 + s3;
    v1 = 0x21e10000u;
    v0 = s7 + v0;
    v1 = v1 | 0xcde6;
    s7 = v0 + v1;
    s7 = ROTR(s7, 27);
    s7 = s7 + fp;
    v1 = ~(0 | t9);
    v1 = fp & v1;
    v0 = s7 & t9;
    v0 = v0 | v1;
    v0 = v0 + a2;
    v1 = 0xc3370000u;
    v0 = t7 + v0;
    v1 = v1 | 0x7d6;
    t7 = v0 + v1;
    t7 = ROTR(t7, 23);
    t7 = t7 + s7;
    v1 = ~(0 | fp);
    v1 = s7 & v1;
    v0 = t7 & fp;
    v0 = v0 | v1;
    v0 = v0 + s1;
    v1 = 0xf4d50000u;
    v0 = t9 + v0;
    v1 = v1 | 0xd87;
    t9 = v0 + v1;
    t9 = ROTR(t9, 18);
    t9 = t9 + t7;
    v1 = ~(0 | s7);
    v1 = t7 & v1;
    v0 = t9 & s7;
    v0 = v0 | v1;
    v0 = v0 + t5;
    v1 = 0x455a0000u;
    v0 = fp + v0;
    v1 = v1 | 0x14ed;
    fp = v0 + v1;
    fp = ROTR(fp, 12);
    fp = fp + t9;
    v1 = ~(0 | t7);
    v1 = t9 & v1;
    v0 = fp & t7;
    v0 = v0 | v1;
    v0 = v0 + t3;
    v1 = 0xa9e30000u;
    v0 = s7 + v0;
    v1 = v1 | 0xe905;
    s7 = v0 + v1;
    s7 = ROTR(s7, 27);
    s7 = s7 + fp;
    v1 = ~(0 | t9);
    v1 = fp & v1;
    v0 = s7 & t9;
    v0 = v0 | v1;
    v0 = v0 + s6;
    v1 = 0xfcef0000u;
    v0 = t7 + v0;
    v1 = v1 | 0xa3f8;
    t7 = v0 + v1;
    t7 = ROTR(t7, 23);
    t7 = t7 + s7;
    v1 = ~(0 | fp);
    v1 = s7 & v1;
    v0 = t7 & fp;
    v0 = v0 | v1;
    v0 = v0 + t1;
    v1 = 0x676f0000u;
    v0 = t9 + v0;
    v1 = v1 | 0x2d9;
    t9 = v0 + v1;
    t9 = ROTR(t9, 18);
    t9 = t9 + t7;
    v1 = ~(0 | s7);
    v1 = t7 & v1;
    v0 = t9 & s7;
    v0 = v0 | v1;
    v0 = v0 + a3;
    v1 = 0x8d2a0000u;
    v0 = fp + v0;
    v1 = v1 | 0x4c8a;
    fp = v0 + v1;
    fp = ROTR(fp, 12);
    fp = fp + t9;
    v0 = fp ^ t9;
    v0 = v0 ^ t7;
    v0 = v0 + t4;
    v1 = 0xfffa0000u;
    v0 = s7 + v0;
    v1 = v1 | 0x3942;
    s7 = v0 + v1;
    s7 = ROTR(s7, 28);
    s7 = s7 + fp;
    v0 = s7 ^ fp;
    v0 = v0 ^ t9;
    v0 = v0 + t5;
    v1 = 0x87710000u;
    v0 = t7 + v0;
    v1 = v1 | 0xf681;
    t7 = v0 + v1;
    t7 = ROTR(t7, 21);
    t7 = t7 + s7;
    v0 = t7 ^ s7;
    v0 = v0 ^ fp;
    v0 = v0 + t6;
    v1 = 0x6d9d0000u;
    v0 = t9 + v0;
    v1 = v1 | 0x6122;
    t9 = v0 + v1;
    t9 = ROTR(t9, 16);
    t9 = t9 + t7;
    v0 = t9 ^ t7;
    v0 = v0 ^ s7;
    v0 = v0 + a2;
    v1 = 0xfde50000u;
    v0 = fp + v0;
    v1 = v1 | 0x380c;
    fp = v0 + v1;
    fp = ROTR(fp, 9);
    fp = fp + t9;
    v0 = fp ^ t9;
    v0 = v0 ^ t7;
    v0 = v0 + s4;
    v1 = 0xa4be0000u;
    v0 = s7 + v0;
    v1 = v1 | 0xea44;
    s7 = v0 + v1;
    s7 = ROTR(s7, 28);
    s7 = s7 + fp;
    v0 = s7 ^ fp;
    v0 = v0 ^ t9;
    v0 = v0 + s5;
    v1 = 0x4bde0000u;
    v0 = t7 + v0;
    v1 = v1 | 0xcfa9;
    t7 = v0 + v1;
    t7 = ROTR(t7, 21);
    t7 = t7 + s7;
    v0 = t7 ^ s7;
    v0 = v0 ^ fp;
    v0 = v0 + t1;
    v1 = 0xf6bb0000u;
    v0 = t9 + v0;
    v1 = v1 | 0x4b60;
    t9 = v0 + v1;
    t9 = ROTR(t9, 16);
    t9 = t9 + t7;
    v0 = t9 ^ t7;
    v0 = v0 ^ s7;
    v0 = v0 + t2;
    v1 = 0xbebf0000u;
    v0 = fp + v0;
    v1 = v1 | 0xbc70;
    fp = v0 + v1;
    fp = ROTR(fp, 9);
    fp = fp + t9;
    v0 = fp ^ t9;
    v0 = v0 ^ t7;
    v0 = v0 + t3;
    v1 = 0x289b0000u;
    v0 = s7 + v0;
    v1 = v1 | 0x7ec6;
    s7 = v0 + v1;
    s7 = ROTR(s7, 28);
    s7 = s7 + fp;
    v0 = s7 ^ fp;
    v0 = v0 ^ t9;
    v0 = v0 + t8;
    v1 = 0xeaa10000u;
    v0 = t7 + v0;
    v1 = v1 | 0x27fa;
    t7 = v0 + v1;
    t7 = ROTR(t7, 21);
    t7 = t7 + s7;
    v0 = t7 ^ s7;
    v0 = v0 ^ fp;
    v0 = v0 + s1;
    v1 = 0xd4ef0000u;
    v0 = t9 + v0;
    v1 = v1 | 0x3085;
    t9 = v0 + v1;
    t9 = ROTR(t9, 16);
    t9 = t9 + t7;
    v0 = t9 ^ t7;
    v0 = v0 ^ s7;
    v0 = v0 + s2;
    v1 = 0x4880000u;
    v0 = fp + v0;
    v1 = v1 | 0x1d05;
    fp = v0 + v1;
    fp = ROTR(fp, 9);
    fp = fp + t9;
    v0 = fp ^ t9;
    v0 = v0 ^ t7;
    v0 = v0 + s3;
    v1 = 0xd9d40000u;
    v0 = s7 + v0;
    v1 = v1 | 0xd039;
    s7 = v0 + v1;
    s7 = ROTR(s7, 28);
    s7 = s7 + fp;
    v0 = s7 ^ fp;
    v0 = v0 ^ t9;
    v0 = v0 + a3;
    v1 = 0xe6db0000u;
    v0 = t7 + v0;
    v1 = v1 | 0x99e5;
    t7 = v0 + v1;
    t7 = ROTR(t7, 21);
    t7 = t7 + s7;
    v0 = t7 ^ s7;
    v0 = v0 ^ fp;
    v0 = v0 + t0;
    v1 = 0x1fa20000u;
    v0 = t9 + v0;
    v1 = v1 | 0x7cf8;
    t9 = v0 + v1;
    t9 = ROTR(t9, 16);
    t9 = t9 + t7;
    v0 = t9 ^ t7;
    v0 = v0 ^ s7;
    v0 = v0 + s6;
    v1 = 0xc4ac0000u;
    v0 = fp + v0;
    v1 = v1 | 0x5665;
    fp = v0 + v1;
    fp = ROTR(fp, 9);
    fp = fp + t9;
    v0 = ~(0 | t7);
    v0 = fp | v0;
    v0 = t9 ^ v0;
    v0 = v0 + t8;
    v1 = 0xf4290000u;
    v0 = s7 + v0;
    v1 = v1 | 0x2244;
    s7 = v0 + v1;
    s7 = ROTR(s7, 26);
    s7 = s7 + fp;
    v0 = ~(0 | t9);
    v0 = s7 | v0;
    v0 = fp ^ v0;
    v0 = v0 + t1;
    v1 = 0x432a0000u;
    v0 = t7 + v0;
    v1 = v1 | 0xff97;
    t7 = v0 + v1;
    t7 = ROTR(t7, 22);
    t7 = t7 + s7;
    v0 = ~(0 | fp);
    v0 = t7 | v0;
    v0 = s7 ^ v0;
    v0 = v0 + a2;
    v1 = 0xab940000u;
    v0 = t9 + v0;
    v1 = v1 | 0x23a7;
    t9 = v0 + v1;
    t9 = ROTR(t9, 17);
    t9 = t9 + t7;
    v0 = ~(0 | s7);
    v0 = t9 | v0;
    v0 = t7 ^ v0;
    v0 = v0 + t4;
    v1 = 0xfc930000u;
    v0 = fp + v0;
    v1 = v1 | 0xa039;
    fp = v0 + v1;
    fp = ROTR(fp, 11);
    fp = fp + t9;
    v0 = ~(0 | t7);
    v0 = fp | v0;
    v0 = t9 ^ v0;
    v0 = v0 + a3;
    v1 = 0x655b0000u;
    v0 = s7 + v0;
    v1 = v1 | 0x59c3;
    s7 = v0 + v1;
    s7 = ROTR(s7, 26);
    s7 = s7 + fp;
    v0 = ~(0 | t9);
    v0 = s7 | v0;
    v0 = fp ^ v0;
    v0 = v0 + s1;
    v1 = 0x8f0c0000u;
    v0 = t7 + v0;
    v1 = v1 | 0xcc92;
    t7 = v0 + v1;
    t7 = ROTR(t7, 22);
    t7 = t7 + s7;
    v0 = ~(0 | fp);
    v0 = t7 | v0;
    v0 = s7 ^ v0;
    v0 = v0 + t2;
    v1 = 0xffef0000u;
    v0 = t9 + v0;
    v1 = v1 | 0xf47d;
    t9 = v0 + v1;
    t9 = ROTR(t9, 17);
    t9 = t9 + t7;
    v0 = ~(0 | s7);
    v0 = t9 | v0;
    v0 = t7 ^ v0;
    v0 = v0 + s4;
    v1 = 0x85840000u;
    v0 = fp + v0;
    v1 = v1 | 0x5dd1;
    fp = v0 + v1;
    fp = ROTR(fp, 11);
    fp = fp + t9;
    v0 = ~(0 | t7);
    v0 = fp | v0;
    v0 = t9 ^ v0;
    v0 = v0 + t5;
    v1 = 0x6fa80000u;
    v0 = s7 + v0;
    v1 = v1 | 0x7e4f;
    s7 = v0 + v1;
    s7 = ROTR(s7, 26);
    s7 = s7 + fp;
    v0 = ~(0 | t9);
    v0 = s7 | v0;
    v0 = fp ^ v0;
    v0 = v0 + t0;
    v1 = 0xfe2c0000u;
    v0 = t7 + v0;
    v1 = v1 | 0xe6e0;
    t7 = v0 + v1;
    t7 = ROTR(t7, 22);
    t7 = t7 + s7;
    v0 = ~(0 | fp);
    v0 = t7 | v0;
    v0 = s7 ^ v0;
    v0 = v0 + s2;
    v1 = 0xa3010000u;
    v0 = t9 + v0;
    v1 = v1 | 0x4314;
    t9 = v0 + v1;
    t9 = ROTR(t9, 17);
    t9 = t9 + t7;
    v0 = ~(0 | s7);
    v0 = t9 | v0;
    v0 = t7 ^ v0;
    v0 = v0 + t3;
    v1 = 0x4e080000u;
    v0 = fp + v0;
    v1 = v1 | 0x11a1;
    fp = v0 + v1;
    fp = ROTR(fp, 11);
    fp = fp + t9;
    v0 = ~(0 | t7);
    v0 = fp | v0;
    v0 = t9 ^ v0;
    v0 = v0 + s5;
    v1 = 0xf7530000u;
    v0 = s7 + v0;
    v1 = v1 | 0x7e82;
    s7 = v0 + v1;
    s7 = ROTR(s7, 26);
    s7 = s7 + fp;
    v0 = ~(0 | t9);
    v0 = s7 | v0;
    v0 = fp ^ v0;
    v0 = v0 + t6;
    v1 = 0xbd3a0000u;
    v0 = t7 + v0;
    v1 = v1 | 0xf235;
    t7 = v0 + v1;
    t7 = ROTR(t7, 22);
    t7 = t7 + s7;
    v0 = ~(0 | fp);
    v0 = t7 | v0;
    v0 = s7 ^ v0;
    v0 = v0 + s6;
    v1 = 0x2ad70000u;
    v0 = t9 + v0;
    v1 = v1 | 0xd2bb;
    t9 = v0 + v1;
    t9 = ROTR(t9, 17);
    t9 = t9 + t7;
    v0 = ~(0 | s7);
    v0 = t9 | v0;
    v0 = t7 ^ v0;
    v0 = v0 + s3;
    v1 = 0xeb860000u;
    v0 = fp + v0;
    v1 = v1 | 0xd391;
    a2 = LD32(s0);
    a3 = LD32(s0+8);
    fp = v0 + v1;
    v1 = LD32(s0+4);
    v0 = LD32(s0+12);
    fp = ROTR(fp, 11);
    fp = fp + t9;
    v1 = v1 + fp;
    a2 = a2 + s7;
    a3 = a3 + t9;
    v0 = v0 + t7;
    ST32(s0, a2);
    a0 = sp + 0;
    a1 = 0 + 0;
    ST32(s0+4, v1);
    a2 = 64;
    ST32(s0+8, a3);
    ST32(s0+12, v0);
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08831C14;
L_08831C14:;
    sp = sp + 128;
    return;
}

/* 08831C44 */
void func_08831C44(u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08831C44:;
    t1 = a1 + 0;
    cnd_ = a3 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08831C88; }
    goto L_08831C50;
L_08831C50:;
    v0 = LD_U8(a2);
    a0 = t1 + t0;
    t0 = t0 + 4;
    ST8(a0, v0);
    a1 = t0 < a3;
    v0 = LD32(a2);
    v0 = v0 >> 8;
    ST8(a0+1, v0);
    v1 = LD_U16(a2+2);
    ST8(a0+2, v1);
    v0 = LD_U8(a2+3);
    a2 = a2 + 4;
    cnd_ = a1 != 0;
    ST8(a0+3, v0);
    if (cnd_) { goto L_08831C50; }
    goto L_08831C88;
L_08831C88:;
    return;
}

/* 08831C90 */
void func_08831C90(u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
L_08831C90:;
    t2 = a2 + 0;
    cnd_ = a3 == 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_08831CE0; }
    goto L_08831C9C;
L_08831C9C:;
    t0 = a1 + 0;
    goto L_08831CA0;
L_08831CA0:;
    v0 = t2 + t1;
    a0 = LD_U8(v0+1);
    v1 = LD_U8(v0);
    a1 = LD_U8(v0+2);
    a2 = LD_U8(v0+3);
    a0 = a0 << 8;
    v1 = v1 | a0;
    a1 = a1 << 16;
    v1 = v1 | a1;
    a2 = a2 << 24;
    t1 = t1 + 4;
    v1 = v1 | a2;
    v0 = t1 < a3;
    ST32(t0, v1);
    cnd_ = v0 != 0;
    t0 = t0 + 4;
    if (cnd_) { goto L_08831CA0; }
    goto L_08831CE0;
L_08831CE0:;
    return;
}

/* 08831CE8 */
void func_08831CE8(u32 a0, u32 a1, u32 a2)
{
    u32 s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08831CE8:;
    sp = sp - 112;
    s0 = a0 + 0;
    a0 = sp + 0;
    s2 = a2 + 0;
    s1 = a1 + 0;
    func_08830F14(a0);
    goto L_08831D10;
L_08831D10:;
    a0 = sp + 0;
    func_08830F14(a0);
    goto L_08831D18;
L_08831D18:;
    a2 = s1 + 0;
    a0 = sp + 0;
    a1 = s0 + 0;
    func_08830F50(a0, a1, a2);
    goto L_08831D28;
L_08831D28:;
    a1 = s2 + 0;
    a0 = sp + 0;
    func_0883105C(a0, a1);
    goto L_08831D34;
L_08831D34:;
    sp = sp + 112;
    return;
}

/* 08831D4C */
u32 func_08831D4C(u32 a0, u32 a1)
{
    u32 v0 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08831D4C:;
    sp = sp - 16;
    a2 = 16;
    v0 = func_08A87A5C(a0, a1, a2);
    goto L_08831D5C;
L_08831D5C:;
    v0 = v0 < 0x1u;
    sp = sp + 16;
    return v0;
}

/* 08831D6C */
void func_08831D6C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08831D6C:;
    sp = sp - 16;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08831D80;
L_08831D80:;
    s0 = 12;
    v1 = 256;
    ST32(v0+4, v1);
    a0 = 12;
    v1 = D_08B23268 - (12904);
    ST32(v0+8, s0);
    ST32(v0, 0);
    ST32(v1+12904, v0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08831DA4;
L_08831DA4:;
    v1 = 64;
    ST32(v0+4, v1);
    v1 = D_08B23264 - (12900);
    ST32(v0+8, s0);
    ST32(v0, 0);
    ST32(v1+12900, v0);
    func_08831EE4(0, 0, 0);
    goto L_08831DC0;
L_08831DC0:;
    sp = sp + 16;
    return;
}

/* 08831DD0 */
void func_08831DD0(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08831DD0:;
    sp = sp - 32;
    s3 = D_08B23268 - (12904);
    s0 = LD32(s3+12904);
    cnd_ = s0 == 0;
    if (cnd_) { s3 = D_08B23264 - (12900); goto L_08831E34; }
    goto L_08831DF8;
L_08831DF8:;
    s1 = LD32(s0);
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08831E24; }
    goto L_08831E04;
L_08831E04:;
    a0 = LD32(s1);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08831ED4; }
    goto L_08831E10;
L_08831E10:;
    s2 = LD32(s1+12);
    goto L_08831E14;
L_08831E14:;
    cnd_ = s2 != 0;
    if (cnd_) { goto L_08831EBC; }
    goto L_08831E1C;
L_08831E1C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08831E24;
L_08831E24:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08831E2C;
L_08831E2C:;
    ST32(s3+12904, 0);
    s3 = D_08B23264 - (12900);
    goto L_08831E34;
L_08831E34:;
    s0 = LD32(s3+12900);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08831E7C; }
    goto L_08831E40;
L_08831E40:;
    s1 = LD32(s0);
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08831E6C; }
    goto L_08831E4C;
L_08831E4C:;
    a0 = LD32(s1);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08831EAC; }
    goto L_08831E58;
L_08831E58:;
    s2 = LD32(s1+12);
    goto L_08831E5C;
L_08831E5C:;
    cnd_ = s2 != 0;
    if (cnd_) { goto L_08831E94; }
    goto L_08831E64;
L_08831E64:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08831E6C;
L_08831E6C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08831E74;
L_08831E74:;
    ST32(s3+12900, 0);
    goto L_08831E7C;
L_08831E7C:;
    sp = sp + 32;
    return;
L_08831E94:;
    a0 = s2 + 0;
    func_08AA3740(a0, t1, t2, t3);
    goto L_08831E9C;
L_08831E9C:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08831EA4;
L_08831EA4:;
    goto L_08831E64;
L_08831EAC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08831EB4;
L_08831EB4:;
    s2 = LD32(s1+12);
    goto L_08831E5C;
L_08831EBC:;
    a0 = s2 + 0;
    func_08AA3740(a0, t1, t2, t3);
    goto L_08831EC4;
L_08831EC4:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08831ECC;
L_08831ECC:;
    goto L_08831E1C;
L_08831ED4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08831EDC;
L_08831EDC:;
    s2 = LD32(s1+12);
    goto L_08831E14;
}

/* 08831EE4 */
void func_08831EE4(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08831EE4:;
    sp = sp - 16;
    v0 = D_08B23268 - (12904);
    s2 = LD32(v0+12904);
    s0 = LD32(s2);
    cnd_ = s0 == 0;
    v0 = D_08B23264 - (12900);
    if (cnd_) { goto L_08831F40; }
    goto L_08831F0C;
L_08831F0C:;
    v0 = LD32(s0+8);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = D_08B23264 - (12900); goto L_08831F40; }
    goto L_08831F18;
L_08831F18:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08831FD8; }
    goto L_08831F24;
L_08831F24:;
    s1 = LD32(s0+12);
    goto L_08831F28;
L_08831F28:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_08831FC0; }
    goto L_08831F30;
L_08831F30:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08831F38;
L_08831F38:;
    ST32(s2, 0);
    v0 = D_08B23264 - (12900);
    goto L_08831F40;
L_08831F40:;
    s2 = LD32(v0+12900);
    s0 = LD32(s2);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08831F84; }
    goto L_08831F50;
L_08831F50:;
    v0 = LD32(s0+8);
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08831F88; }
    goto L_08831F5C;
L_08831F5C:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08831FB0; }
    goto L_08831F68;
L_08831F68:;
    s1 = LD32(s0+12);
    goto L_08831F6C;
L_08831F6C:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_08831F98; }
    goto L_08831F74;
L_08831F74:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08831F7C;
L_08831F7C:;
    ST32(s2, 0);
    goto L_08831F84;
L_08831F84:;
    goto L_08831F88;
L_08831F88:;
    sp = sp + 16;
    return;
L_08831F98:;
    a0 = s1 + 0;
    func_08AA3740(a0, t1, t2, t3);
    goto L_08831FA0;
L_08831FA0:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08831FA8;
L_08831FA8:;
    goto L_08831F74;
L_08831FB0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08831FB8;
L_08831FB8:;
    s1 = LD32(s0+12);
    goto L_08831F6C;
L_08831FC0:;
    a0 = s1 + 0;
    func_08AA3740(a0, t1, t2, t3);
    goto L_08831FC8;
L_08831FC8:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08831FD0;
L_08831FD0:;
    goto L_08831F30;
L_08831FD8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08831FE0;
L_08831FE0:;
    s1 = LD32(s0+12);
    goto L_08831F28;
}

/* 08831FE8 */
rv_t func_08831FE8(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08831FE8:;
    sp = sp - 16;
    v0 = D_08B23264 - (12900);
    a0 = LD32(v0+12900);
    { rv_t r_ = func_08AA37A0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08831FFC;
L_08831FFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08832008 */
u64 func_08832008(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08832008:;
    v0 = D_08B23264 - (12900);
    a1 = a0 + 0;
    a0 = LD32(v0+12900);
    sp = sp - 16;
    { u64 r_ = func_08AA3A90(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08832024;
L_08832024:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08832030 */
rv_t func_08832030(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08832030:;
    sp = sp - 16;
    v0 = D_08B23268 - (12904);
    a0 = LD32(v0+12904);
    { rv_t r_ = func_08AA37A0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08832044;
L_08832044:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08832050 */
u64 func_08832050(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08832050:;
    v0 = D_08B23268 - (12904);
    a1 = a0 + 0;
    a0 = LD32(v0+12904);
    sp = sp - 16;
    { u64 r_ = func_08AA3A90(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883206C;
L_0883206C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08832078 */
void func_08832078(void)
{
L_08832078:;
    return;
}

/* 08832080 */
void func_08832080(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08832080:;
    sp = sp - 16;
    func_088979B8(t1, t2, t3);
    goto L_08832090;
L_08832090:;
    func_0883B864();
    goto L_08832098;
L_08832098:;
    func_0887A954(0, 0, 0);
    goto L_088320A0;
L_088320A0:;
    func_088326D8();
    goto L_088320A8;
L_088320A8:;
    func_088F9190(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088320B0;
L_088320B0:;
    func_08A69764();
    goto L_088320B8;
L_088320B8:;
    func_088CF1D4(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088320C0;
L_088320C0:;
    { rv_t r_ = func_0881D358(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088320C8;
L_088320C8:;
    func_08835888();
    goto L_088320D0;
L_088320D0:;
    func_0883BE78();
    goto L_088320D8;
L_088320D8:;
    func_0889EF64();
    goto L_088320E0;
L_088320E0:;
    func_088CEDE8();
    goto L_088320E8;
L_088320E8:;
    func_088351A8(0, 0, 0);
    goto L_088320F0;
L_088320F0:;
    func_08839AE4(0, 0, 0);
    goto L_088320F8;
L_088320F8:;
    func_0883AB54();
    goto L_08832100;
L_08832100:;
    func_088CB4D4(0, 0, 0, 0, 0, 0);
    goto L_08832108;
L_08832108:;
    sp = sp + 16;
    return;
}

/* 08832114 */
void func_08832114(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08832114:;
    sp = sp - 16;
    func_08A697D4();
    goto L_08832124;
L_08832124:;
    func_0889ABD4();
    goto L_0883212C;
L_0883212C:;
    func_088893C4();
    goto L_08832134;
L_08832134:;
    func_0881AB74();
    goto L_0883213C;
L_0883213C:;
    func_08805970();
    goto L_08832144;
L_08832144:;
    func_0889B564();
    goto L_0883214C;
L_0883214C:;
    func_0889C100(0, 0, 0);
    goto L_08832154;
L_08832154:;
    func_0884D094(0, 0, 0);
    goto L_0883215C;
L_0883215C:;
    func_08832460();
    goto L_08832164;
L_08832164:;
    func_088D9568();
    goto L_0883216C;
L_0883216C:;
    func_08804040();
    goto L_08832174;
L_08832174:;
    func_0881C374();
    goto L_0883217C;
L_0883217C:;
    func_08923C70(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08832184;
L_08832184:;
    func_088F1544();
    goto L_0883218C;
L_0883218C:;
    func_088F1F3C();
    goto L_08832194;
L_08832194:;
    func_08831D6C(0, 0, 0);
    goto L_0883219C;
L_0883219C:;
    func_08876C28();
    goto L_088321A4;
L_088321A4:;
    func_088799A8();
    goto L_088321AC;
L_088321AC:;
    func_08845B04();
    goto L_088321B4;
L_088321B4:;
    func_088D0180();
    goto L_088321BC;
L_088321BC:;
    func_088EDAC8(0, 0, 0);
    goto L_088321C4;
L_088321C4:;
    func_0881CB10();
    goto L_088321CC;
L_088321CC:;
    func_088D2174();
    goto L_088321D4;
L_088321D4:;
    func_088D78B0();
    goto L_088321DC;
L_088321DC:;
    func_088AF78C();
    goto L_088321E4;
L_088321E4:;
    func_08832078();
    goto L_088321EC;
L_088321EC:;
    func_088F2AB0();
    goto L_088321F4;
L_088321F4:;
    sp = sp + 16;
    return;
}

/* 08832200 */
void func_08832200(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08832200:;
    sp = sp - 16;
    func_088CF25C(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08832210;
L_08832210:;
    func_088F2B0C();
    goto L_08832218;
L_08832218:;
    func_08889480(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08832220;
L_08832220:;
    func_088D78B8();
    goto L_08832228;
L_08832228:;
    func_088D217C(0, 0, 0);
    goto L_08832230;
L_08832230:;
    func_088326E0(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08832238;
L_08832238:;
    func_088EDB0C(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08832240;
L_08832240:;
    func_088D0188(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08832248;
L_08832248:;
    func_0883B9AC();
    goto L_08832250;
L_08832250:;
    func_08845B24(0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08832258;
L_08832258:;
    func_088F1F5C();
    goto L_08832260;
L_08832260:;
    func_08876DB8();
    goto L_08832268;
L_08832268:;
    func_08831DD0(0, 0, 0);
    goto L_08832270;
L_08832270:;
    func_088F15C0();
    goto L_08832278;
L_08832278:;
    func_08923CF8(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08832280;
L_08832280:;
    func_0881C380(0, 0, 0);
    goto L_08832288;
L_08832288:;
    func_0880407C();
    goto L_08832290;
L_08832290:;
    func_088799C8();
    goto L_08832298;
L_08832298:;
    func_0884D114(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088322A0;
L_088322A0:;
    func_0889B584();
    goto L_088322A8;
L_088322A8:;
    func_0889C20C(0, 0, 0);
    goto L_088322B0;
L_088322B0:;
    func_088D9A58(0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088322B8;
L_088322B8:;
    func_08805994(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088322C0;
L_088322C0:;
    func_0881AB7C(0, 0, 0);
    goto L_088322C8;
L_088322C8:;
    func_0883AB84();
    goto L_088322D0;
L_088322D0:;
    func_08897EC8(0, 0, 0);
    goto L_088322D8;
L_088322D8:;
    func_08839FE8(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088322E0;
L_088322E0:;
    func_0883524C(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088322E8;
L_088322E8:;
    func_0883BF0C();
    goto L_088322F0;
L_088322F0:;
    func_0889F0D4();
    goto L_088322F8;
L_088322F8:;
    func_088CEDF0();
    goto L_08832300;
L_08832300:;
    func_088CB4F0(0, 0, 0);
    goto L_08832308;
L_08832308:;
    func_088341CC(0, 0, 0);
    goto L_08832310;
L_08832310:;
    func_0887A9C8(0, 0, 0);
    goto L_08832318;
L_08832318:;
    func_0881CB34();
    goto L_08832320;
L_08832320:;
    func_088CF280(0, 0, 0);
    goto L_08832328;
L_08832328:;
    func_088F924C(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08832330;
L_08832330:;
    func_088AFC74();
    goto L_08832338;
L_08832338:;
    sp = sp + 16;
    return;
}

/* 08832344 */
void func_08832344(u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08832344:;
    sp = sp - 16;
    func_088CF29C(t1, t2, t3);
    goto L_08832354;
L_08832354:;
    func_08897E54(0, 0, 0);
    goto L_0883235C;
L_0883235C:;
    func_088F9268();
    goto L_08832364;
L_08832364:;
    func_08876C50();
    goto L_0883236C;
L_0883236C:;
    func_088A54D0();
    goto L_08832374;
L_08832374:;
    func_0884D178(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0883237C;
L_0883237C:;
    func_0880409C();
    goto L_08832384;
L_08832384:;
    func_088799F0();
    goto L_0883238C;
L_0883238C:;
    func_0889EF80();
    goto L_08832394;
L_08832394:;
    func_08845B44(0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0883239C;
L_0883239C:;
    func_088F1288();
    goto L_088323A4;
L_088323A4:;
    func_088059C4(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088323AC;
L_088323AC:;
    func_088CEE10();
    goto L_088323B4;
L_088323B4:;
    a0 = 0 + 0;
    func_0883442C(a0, 0, 0, 0);
    goto L_088323BC;
L_088323BC:;
    func_088F1F7C();
    goto L_088323C4;
L_088323C4:;
    func_0881AB9C(0, 0, 0);
    goto L_088323CC;
L_088323CC:;
    func_0883ABA4();
    goto L_088323D4;
L_088323D4:;
    func_08839DAC(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088323DC;
L_088323DC:;
    func_08835320(0, 0, 0);
    goto L_088323E4;
L_088323E4:;
    func_0883B8BC(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088323EC;
L_088323EC:;
    func_088F162C();
    goto L_088323F4;
L_088323F4:;
    func_088D9C18(0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088323FC;
L_088323FC:;
    func_0889B5A4();
    goto L_08832404;
L_08832404:;
    func_0889C11C(0, 0, 0);
    goto L_0883240C;
L_0883240C:;
    func_088D0244(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08832414;
L_08832414:;
    func_088EDC20(0, 0, 0, 0);
    goto L_0883241C;
L_0883241C:;
    func_0881CB58();
    goto L_08832424;
L_08832424:;
    func_08923D58(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0883242C;
L_0883242C:;
    func_088D219C(0, 0, 0);
    goto L_08832434;
L_08832434:;
    func_088D78D8();
    goto L_0883243C;
L_0883243C:;
    func_088AF848();
    goto L_08832444;
L_08832444:;
    func_08889454();
    goto L_0883244C;
L_0883244C:;
    func_088F2AE8();
    goto L_08832454;
L_08832454:;
    sp = sp + 16;
    return;
}

/* 08832460 */
void func_08832460(void)
{
    u32 v0 = 0, v1 = 0;
L_08832460:;
    v0 = D_08B2326C - (12908);
    v1 = D_08B2326D - (12909);
    ST8(v0+12908, 0);
    v0 = D_08B2326E - (12910);
    ST8(v1+12909, 0);
    v1 = D_08B2326F - (12911);
    ST8(v0+12910, 0);
    v0 = D_08B23270 - (12912);
    ST8(v1+12911, 0);
    ST8(v0+12912, 0);
    return;
}

/* 0883248C */
float func_0883248C(void)
{
    float f0 = 0;
L_0883248C:;
    f0 = BITSF(0);
    return f0;
}

/* 08832498 */
void func_08832498(u32 a1, float f12)
{
    float f0 = 0;
    int fcc = 0;
    int cnd_;
L_08832498:;
    f0 = BITSF(LD32(a1));
    fcc = FCMP(f12, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f12; goto L_088324AC; }
    goto L_088324AC;
L_088324AC:;
    ST32(a1, FBITS(f0));
    return;
}

/* 088324B4 */
void func_088324B4(u32 a1, float f12)
{
    float f0 = 0;
    int fcc = 0;
    int cnd_;
L_088324B4:;
    f0 = BITSF(LD32(a1));
    fcc = FCMP(f0, f12, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f12; goto L_088324C8; }
    goto L_088324C8;
L_088324C8:;
    ST32(a1, FBITS(f0));
    return;
}

/* 088324D0 */
void func_088324D0(u32 a1, float f12)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088324D0:;
    f0 = BITSF(LD32(a1));
    fcc = FCMP(f12, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f12; goto L_088324E4; }
    goto L_088324E4;
L_088324E4:;
    f1 = BITSF(LD32(a1+4));
    fcc = FCMP(f12, f1, 14);
    cnd_ = fcc;
    ST32(a1, FBITS(f0));
    if (cnd_) { goto L_088324FC; }
    goto L_088324F8;
L_088324F8:;
    f1 = f12;
    goto L_088324FC;
L_088324FC:;
    f0 = BITSF(LD32(a1+8));
    fcc = FCMP(f12, f0, 14);
    cnd_ = fcc;
    ST32(a1+4, FBITS(f1));
    if (cnd_) { goto L_08832514; }
    goto L_08832510;
L_08832510:;
    f0 = f12;
    goto L_08832514;
L_08832514:;
    ST32(a1+8, FBITS(f0));
    return;
}

/* 0883251C */
void func_0883251C(u32 a1, float f12)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0883251C:;
    f0 = BITSF(LD32(a1));
    fcc = FCMP(f0, f12, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f12; goto L_08832530; }
    goto L_08832530;
L_08832530:;
    f1 = BITSF(LD32(a1+4));
    fcc = FCMP(f1, f12, 14);
    cnd_ = fcc;
    ST32(a1, FBITS(f0));
    if (cnd_) { goto L_08832548; }
    goto L_08832544;
L_08832544:;
    f1 = f12;
    goto L_08832548;
L_08832548:;
    f0 = BITSF(LD32(a1+8));
    fcc = FCMP(f0, f12, 14);
    cnd_ = fcc;
    ST32(a1+4, FBITS(f1));
    if (cnd_) { goto L_08832560; }
    goto L_0883255C;
L_0883255C:;
    f0 = f12;
    goto L_08832560;
L_08832560:;
    ST32(a1+8, FBITS(f0));
    return;
}

/* 08832568 */
u64 func_08832568(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_08832568:;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088325C8; }
    goto L_08832570;
L_08832570:;
    v0 = (u32)(s32)LD_S8(a0);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088325C4; }
    goto L_0883257C;
L_0883257C:;
    a1 = v0 + 0;
    t0 = 92;
    goto L_08832584;
L_08832584:;
    v0 = a1 - 65;
    v1 = a2 << 5;
    v0 = v0 & 0xff;
    a3 = v1 - a2;
    v0 = v0 < 0x1au;
    v1 = a1 + 32;
    a0 = a0 + 1;
    a2 = a1 ^ t0;
    cnd_ = v0 != 0;
    v1 = (u32)(s32)(s8)v1;
    if (cnd_) { goto L_088325B4; }
    goto L_088325AC;
L_088325AC:;
    v1 = 47;
    if (a2 != 0) v1 = a1;
    goto L_088325B4;
L_088325B4:;
    v0 = (u32)(s32)LD_S8(a0);
    a2 = a3 + v1;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08832584; }
    goto L_088325C4;
L_088325C4:;
    v0 = a2 + 0;
    goto L_088325C8;
L_088325C8:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088325D0 */
u32 func_088325D0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
L_088325D0:;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08832680; }
    goto L_088325D8;
L_088325D8:;
    v1 = LD_U8(a0);
    t1 = 0 + 0;
    cnd_ = v1 == 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_0883260C; }
    goto L_088325E8;
L_088325E8:;
    a2 = v1 + 0;
    a3 = 46;
    goto L_088325F0;
L_088325F0:;
    v0 = (u32)(s32)(s8)a2;
    v0 = v0 ^ a3;
    if (v0 == 0) t1 = a1;
    a1 = a1 + 1;
    v0 = LD_U8(a1);
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_088325F0; }
    goto L_0883260C;
L_0883260C:;
    a1 = (u32)(s32)(s8)v1;
    v0 = a0 ^ t1;
    v0 = 0 < v0;
    v1 = 0 < a1;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0883267C; }
    goto L_08832628;
L_08832628:;
    t2 = 92;
    goto L_0883262C;
L_0883262C:;
    a0 = a0 + 1;
    v0 = a0 ^ t1;
    v1 = a1 - 65;
    t0 = 0 < v0;
    v1 = v1 & 0xff;
    v0 = a2 << 5;
    a3 = v0 - a2;
    v1 = v1 < 0x1au;
    v0 = a1 + 32;
    a2 = a1 ^ t2;
    cnd_ = v1 != 0;
    v0 = (u32)(s32)(s8)v0;
    if (cnd_) { goto L_08832664; }
    goto L_0883265C;
L_0883265C:;
    v0 = 47;
    if (a2 != 0) v0 = a1;
    goto L_08832664;
L_08832664:;
    v1 = (u32)(s32)LD_S8(a0);
    a2 = a3 + v0;
    v0 = 0 < v1;
    v0 = v0 & t0;
    cnd_ = v0 != 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_0883262C; }
    goto L_0883267C;
L_0883267C:;
    v0 = a2 + 0;
    goto L_08832680;
L_08832680:;
    return v0;
}

/* 08832688 */
u32 func_08832688(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08832688:;
    v1 = 0 < a0;
    v0 = 0 < a1;
    a2 = 0x9e370000u;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    a2 = a2 | 0x79b9;
    if (cnd_) { goto L_088326D0; }
    goto L_088326A0;
L_088326A0:;
    a1 = a1 - 1;
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_088326D0; }
    goto L_088326B0;
L_088326B0:;
    a3 = (u32)-1;
    goto L_088326B4;
L_088326B4:;
    v1 = LD_U8(a0);
    v0 = a2 << 5;
    v0 = v0 - a2;
    a1 = a1 - 1;
    a2 = v0 + v1;
    cnd_ = a1 != a3;
    a0 = a0 + 1;
    if (cnd_) { goto L_088326B4; }
    goto L_088326D0;
L_088326D0:;
    v0 = a2 + 0;
    return v0;
}

/* 088326D8 */
void func_088326D8(void)
{
L_088326D8:;
    return;
}

/* 088326E0 */
void func_088326E0(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088326E0:;
    sp = sp - 32;
    s2 = D_08B23274 - (12916);
    v0 = 1;
    v1 = ((u32)(uintptr_t)func_08832A5C) - (10844);
    s0 = LD32(s2+12916);
    s1 = s2 + 12916;
    s3 = v1 + 10844;
    cnd_ = s0 == 0;
    ST8(s1+8, v0);
    if (cnd_) { goto L_08832740; }
    goto L_08832718;
L_08832718:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08832860; }
    goto L_08832724;
L_08832724:;
    a1 = LD32(s0+12);
    goto L_08832728;
L_08832728:;
    cnd_ = a1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08832850; }
    goto L_08832730;
L_08832730:;
    a0 = LD32(s0);
    goto L_08832734;
L_08832734:;
    t_ = s3;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883273C;
L_0883273C:;
    s1 = s2 + 12916;
    goto L_08832740;
L_08832740:;
    a0 = LD32(s1+12);
    cnd_ = a0 == 0;
    if (cnd_) { s0 = LD32(s2+12916); goto L_088327A4; }
    goto L_0883274C;
L_0883274C:;
    v0 = LD32(s1+16);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08832790; }
    goto L_08832758;
L_08832758:;
    v0 = s0 << 2;
    goto L_0883275C;
L_0883275C:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s1 + 0;
    s0 = s0 + 1;
    v0 = func_08AA64D4(a0, a1);
    goto L_08832770;
L_08832770:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08832778;
L_08832778:;
    v0 = LD32(s1+16);
    v0 = s0 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s1+12);
    if (cnd_) { goto L_08832790; }
    goto L_08832788;
L_08832788:;
    v0 = s0 << 2;
    goto L_0883275C;
L_08832790:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08832840; }
    goto L_08832798;
L_08832798:;
    ST32(s1+16, 0);
    goto L_0883279C;
L_0883279C:;
    ST32(s1+12, 0);
    s0 = LD32(s2+12916);
    goto L_088327A4;
L_088327A4:;
    v0 = s2 + 12916;
    ST8(v0+8, 0);
    cnd_ = s0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_088327D4; }
    goto L_088327B4;
L_088327B4:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08832830; }
    goto L_088327C0;
L_088327C0:;
    a1 = LD32(s0+12);
    goto L_088327C4;
L_088327C4:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08832820; }
    goto L_088327CC;
L_088327CC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088327D4;
L_088327D4:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08832810; }
    goto L_088327E0;
L_088327E0:;
    v0 = s2 + 12916;
    goto L_088327E4;
L_088327E4:;
    ST32(s1+16, 0);
    ST32(s2+12916, 0);
    ST32(s1+12, 0);
    ST32(v0+4, 0);
    sp = sp + 32;
    return;
L_08832810:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08832818;
L_08832818:;
    v0 = s2 + 12916;
    goto L_088327E4;
L_08832820:;
    a0 = s1 + 0;
    func_08AA6844(a0, a1, t1, t2, t3);
    goto L_08832828;
L_08832828:;
    goto L_088327CC;
L_08832830:;
    a0 = v0 + 0;
    func_08AA6844(a0, a1, t1, t2, t3);
    goto L_08832838;
L_08832838:;
    a1 = LD32(s0+12);
    goto L_088327C4;
L_08832840:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08832848;
L_08832848:;
    ST32(s1+16, 0);
    goto L_0883279C;
L_08832850:;
    a2 = s3 + 0;
    func_08AA67C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08832858;
L_08832858:;
    a0 = LD32(s0);
    goto L_08832734;
L_08832860:;
    a2 = s3 + 0;
    func_08AA67C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08832868;
L_08832868:;
    a1 = LD32(s0+12);
    goto L_08832728;
}

/* 08832870 */
u32 func_08832870(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08832870:;
    sp = sp - 32;
    v0 = 0 + 0;
    s4 = a2 + 0;
    s3 = a1 + 0;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0883292C; }
    goto L_088328A0;
L_088328A0:;
    s2 = D_08B23274 - (12916);
    v1 = LD32(s2+12916);
    cnd_ = v1 == 0;
    v0 = v1 + 0;
    if (cnd_) { goto L_088328D8; }
    goto L_088328B0;
L_088328B0:;
    v1 = LD32(v0);
    goto L_088328B4;
L_088328B4:;
    a0 = v0 + 12;
    a1 = v0 + 8;
    a2 = v0 + 4;
    v0 = s0 < v1;
    cnd_ = v1 == s0;
    if (v0 == 0) a1 = a0;
    if (cnd_) { goto L_088328E8; }
    goto L_088328CC;
L_088328CC:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_088328B4; }
    goto L_088328D8;
L_088328D8:;
    v0 = s2 + 12916;
    a0 = LD32(v0+20);
    cnd_ = a0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088329E4; }
    goto L_088328E8;
L_088328E8:;
    cnd_ = a2 == 0;
    s1 = a2 + 0;
    if (cnd_) { goto L_08832964; }
    goto L_088328F0;
L_088328F0:;
    s0 = LD32(a2);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_0883294C; }
    goto L_088328FC;
L_088328FC:;
    ST32(s1, 0);
    goto L_08832900;
L_08832900:;
    cnd_ = s1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0883292C; }
    goto L_08832908;
L_08832908:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08832910;
L_08832910:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s3 + 0;
    a2 = s4 + 0;
    func_08832A9C(a0, a1, a2, 0, 0, 0);
    goto L_08832924;
L_08832924:;
    ST32(s1, s0);
    v0 = s0 + 0;
    goto L_0883292C;
L_0883292C:;
    sp = sp + 32;
    return v0;
L_0883294C:;
    a0 = s0 + 0;
    func_08832B28(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08832954;
L_08832954:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883295C;
L_0883295C:;
    ST32(s1, 0);
    goto L_08832900;
L_08832964:;
    v1 = s2 + 12916;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088329DC; }
    goto L_08832974;
L_08832974:;
    v0 = D_08B23274 - (12916);
    v0 = LD32(v0+12916);
    cnd_ = v0 == 0;
    s1 = v1 + 0;
    if (cnd_) { goto L_088329B0; }
    goto L_08832984;
L_08832984:;
    v1 = v0 + 0;
    goto L_08832988;
L_08832988:;
    a0 = v1 + 12;
    s1 = v1 + 8;
    v1 = LD32(v1);
    a1 = 0 + 0;
    v0 = s0 < v1;
    cnd_ = v1 == s0;
    if (v0 == 0) s1 = a0;
    if (cnd_) { goto L_088329DC; }
    goto L_088329A4;
L_088329A4:;
    v0 = LD32(s1);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08832988; }
    goto L_088329B0;
L_088329B0:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088329B8;
L_088329B8:;
    ST32(v0, s0);
    a0 = s2 + 12916;
    a1 = v0 + 4;
    v1 = LD32(a0+4);
    ST32(v0+8, 0);
    v1 = v1 + 1;
    ST32(v0+12, 0);
    ST32(a0+4, v1);
    ST32(s1, v0);
    goto L_088329DC;
L_088329DC:;
    s1 = a1 + 0;
    goto L_08832900;
L_088329E4:;
    a2 = 1;
    a1 = s0 + 0;
    { u64 r_ = func_08AA68B4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088329F0;
L_088329F0:;
    a2 = v0 + 0;
    goto L_088328E8;
}

/* 088329F8 */
rv_t func_088329F8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088329F8:;
    sp = sp - 16;
    v0 = a0 + 0;
    a0 = D_08B23274 - (12916);
    a0 = a0 + 12916;
    s0 = a1 + 0;
    a2 = 1;
    a1 = v0 + 0;
    { u64 r_ = func_08AA68B4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08832A20;
L_08832A20:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 0 + 0; goto L_08832A3C; }
    goto L_08832A28;
L_08832A28:;
    v0 = LD32(v0);
    a1 = s0 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08832A4C; }
    goto L_08832A38;
L_08832A38:;
    v0 = 0 + 0;
    goto L_08832A3C;
L_08832A3C:;
    goto L_08832A40;
L_08832A40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08832A4C:;
    { rv_t r_ = func_08832C90(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08832A54;
L_08832A54:;
    goto L_08832A40;
}

/* 08832A5C */
rv_t func_08832A5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08832A5C:;
    sp = sp - 16;
    s0 = LD32(a1);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08832A84; }
    goto L_08832A74;
L_08832A74:;
    goto L_08832A78;
L_08832A78:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08832A84:;
    func_08832B28(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08832A8C;
L_08832A8C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08832A94;
L_08832A94:;
    goto L_08832A78;
}

/* 08832A9C */
void func_08832A9C(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08832A9C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a1 << 2;
    ST32(s0, a1);
    s1 = a2 + 0;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08832AC0;
L_08832AC0:;
    ST32(s0+4, v0);
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08832ACC;
L_08832ACC:;
    v1 = 0x7fff0000u;
    v1 = v1 | 0xffff;
    ST32(v0+12, v1);
    ST32(v0+8, 0);
    a0 = LD32(s0);
    ST32(s0+12, v0);
    ST32(v0, 0);
    cnd_ = (s32)a0 <= 0;
    ST32(v0+4, 0);
    if (cnd_) { goto L_08832B08; }
    goto L_08832AF0;
L_08832AF0:;
    v1 = LD32(s0+4);
    v0 = a0 + 0;
    goto L_08832AF8;
L_08832AF8:;
    v0 = v0 - 1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08832AF8; }
    goto L_08832B08;
L_08832B08:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08832B10;
L_08832B10:;
    ST32(s0+8, v0);
    sp = sp + 16;
    return;
}

/* 08832B28 */
void func_08832B28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08832B28:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08832BF8; }
    goto L_08832B48;
L_08832B48:;
    a0 = LD32(s0+4);
    goto L_08832B4C;
L_08832B4C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08832BE8; }
    goto L_08832B54;
L_08832B54:;
    s0 = LD32(s0+12);
    goto L_08832B58;
L_08832B58:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08832BA4; }
    goto L_08832B60;
L_08832B60:;
    s1 = LD32(s0);
    cnd_ = s1 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_08832B90; }
    goto L_08832B6C;
L_08832B6C:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08832BD8; }
    goto L_08832B78;
L_08832B78:;
    a1 = LD32(s1+12);
    goto L_08832B7C;
L_08832B7C:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08832BC8; }
    goto L_08832B84;
L_08832B84:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08832B8C;
L_08832B8C:;
    a0 = LD32(s0+4);
    goto L_08832B90;
L_08832B90:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08832BB4; }
    goto L_08832B98;
L_08832B98:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08832BA0;
L_08832BA0:;
    goto L_08832BA4;
L_08832BA4:;
    sp = sp + 16;
    return;
L_08832BB4:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08832BC0;
L_08832BC0:;
    goto L_08832B98;
L_08832BC8:;
    a0 = s0 + 0;
    func_08AA6750(a0, a1, t1, t2, t3);
    goto L_08832BD0;
L_08832BD0:;
    goto L_08832B84;
L_08832BD8:;
    a0 = s0 + 0;
    func_08AA6750(a0, a1, t1, t2, t3);
    goto L_08832BE0;
L_08832BE0:;
    a1 = LD32(s1+12);
    goto L_08832B7C;
L_08832BE8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08832BF0;
L_08832BF0:;
    s0 = LD32(s0+12);
    goto L_08832B58;
L_08832BF8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08832C00;
L_08832C00:;
    a0 = LD32(s0+4);
    goto L_08832B4C;
}

/* 08832C08 */
void func_08832C08(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08832C08:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = LD32(a0+12);
    cnd_ = a0 == 0;
    s0 = a2 + 0;
    if (cnd_) { goto L_08832C48; }
    goto L_08832C28;
L_08832C28:;
    v0 = LD32(s1+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08832C48; }
    goto L_08832C34;
L_08832C34:;
    v0 = LD32(a0+8);
    v1 = LD32(s1);
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = 1; goto L_08832C6C; }
    goto L_08832C48;
L_08832C48:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08832C5C; }
    goto L_08832C50;
L_08832C50:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08832C58;
L_08832C58:;
    goto L_08832C5C;
L_08832C5C:;
    sp = sp + 32;
    return;
L_08832C6C:;
    a3 = sp + 0;
    { rv_t r_ = func_08AA65BC(a0, a1, a2, a3, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08832C74;
L_08832C74:;
    cnd_ = v0 != 0;
    v0 = LD32(sp);
    if (cnd_) { goto L_08832C48; }
    goto L_08832C7C;
L_08832C7C:;
    v1 = LD32(s1+4);
    v0 = v0 << 2;
    v0 = v0 + v1;
    ST32(v0, s0);
    goto L_08832C58;
}

/* 08832C90 */
rv_t func_08832C90(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08832C90:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = LD32(a0+12);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08832CBC; }
    goto L_08832CAC;
L_08832CAC:;
    v0 = LD32(s0+4);
    a2 = 0 + 0;
    cnd_ = v0 != 0;
    a3 = sp + 0;
    if (cnd_) { goto L_08832CD0; }
    goto L_08832CBC;
L_08832CBC:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08832CD0:;
    v0 = (u32)-1;
    ST32(sp, v0);
    { rv_t r_ = func_08AA65BC(a0, a1, a2, a3, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08832CDC;
L_08832CDC:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08832CBC; }
    goto L_08832CE4;
L_08832CE4:;
    v0 = LD32(sp);
    v1 = LD32(s0+4);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    goto L_08832CBC;
}

/* 08832CFC */
u64 func_08832CFC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08832CFC:;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 16;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08832D44; }
    goto L_08832D24;
L_08832D24:;
    v1 = D_08B23274 - (12916);
    v0 = v1 + 12916;
    ST32(v1+12916, 0);
    ST32(v0+20, 0);
    ST32(v0+4, 0);
    ST8(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v0+16, 0);
    goto L_08832D44;
L_08832D44:;
    v0 = a0 < 0x1u;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08832D9C; }
    goto L_08832D54;
L_08832D54:;
    v0 = D_08B23274 - (12916);
    s0 = LD32(v0+12916);
    cnd_ = s0 == 0;
    s1 = v0 + 12916;
    if (cnd_) { goto L_08832D84; }
    goto L_08832D64;
L_08832D64:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08832DCC; }
    goto L_08832D70;
L_08832D70:;
    a1 = LD32(s0+12);
    goto L_08832D74;
L_08832D74:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08832DBC; }
    goto L_08832D7C;
L_08832D7C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08832D84;
L_08832D84:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08832DAC; }
    goto L_08832D90;
L_08832D90:;
    ST32(s1+16, 0);
    goto L_08832D94;
L_08832D94:;
    ST32(s1+12, 0);
    goto L_08832D9C;
L_08832D9C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08832DAC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08832DB4;
L_08832DB4:;
    ST32(s1+16, 0);
    goto L_08832D94;
L_08832DBC:;
    a0 = s1 + 0;
    func_08AA6844(a0, a1, t1, t2, t3);
    goto L_08832DC4;
L_08832DC4:;
    goto L_08832D7C;
L_08832DCC:;
    a0 = s1 + 0;
    func_08AA6844(a0, a1, t1, t2, t3);
    goto L_08832DD4;
L_08832DD4:;
    a1 = LD32(s0+12);
    goto L_08832D74;
}

/* 08832DDC */
rv_t func_08832DDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08832DDC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_08832CFC(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08832DF0;
L_08832DF0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08832DFC */
rv_t func_08832DFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08832DFC:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_08832CFC(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08832E10;
L_08832E10:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08832E1C */
rv_t func_08832E1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08832E1C:;
    sp = sp - 112;
    fp = a2 + 0;
    s6 = a0 + 0;
    s4 = a1 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    ST32(sp+32, a3);
    if (cnd_) { goto L_08832F38; }
    goto L_08832E64;
L_08832E64:;
    f1 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(a1+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v0 = a0 + 4;
    if (cnd_) { goto L_08832EF4; }
    goto L_08832E7C;
L_08832E7C:;
    f1 = BITSF(LD32(a1));
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) {  goto L_08832EF8; }
    goto L_08832E94;
L_08832E94:;
    f1 = BITSF(LD32(a1+12));
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08832EF8; }
    goto L_08832EAC;
L_08832EAC:;
    f1 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08832EF8; }
    goto L_08832EC4;
L_08832EC4:;
    f1 = BITSF(LD32(a1+20));
    f0 = BITSF(LD32(v0+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08832EFC; }
    goto L_08832EDC;
L_08832EDC:;
    f1 = BITSF(LD32(a1+16));
    f0 = BITSF(LD32(v0+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_08832F28; }
    goto L_08832EF4;
L_08832EF4:;
    goto L_08832EF8;
L_08832EF8:;
    goto L_08832EFC;
L_08832EFC:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_08832F28:;
    t_ = a2;
    a0 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08832F30;
L_08832F30:;
    goto L_08832EF8;
L_08832F38:;
    v0 = LD32(sp+32);
    a0 = LD32(a0+4);
    v1 = v0 << 3;
    v1 = v1 - v0;
    v0 = D_08B2328C - (12940);
    v1 = v1 << 7;
    v0 = v0 + 12940;
    s1 = v1 + v0;
    ST32(s1+4, a0);
    a0 = s1 + 0;
    v1 = LD32(s6+8);
    ST32(s1, 0);
    ST32(s1+8, v1);
    v0 = LD32(s6+12);
    ST32(s1+12, v0);
    v1 = LD32(s6+16);
    ST32(s1+16, v1);
    v0 = LD32(s6+20);
    ST32(s1+20, v0);
    v1 = LD32(s6+24);
    ST32(s1+24, v1);
    s1 = s1 + 28;
    cnd_ = s1 == a0;
    s5 = 0 + 0;
    if (cnd_) { goto L_088332D0; }
    goto L_08832F98;
L_08832F98:;
    v0 = D_08AEB754 - (-18604);
    f20 = BITSF(LD32(v0-18604));
    ST32(sp+36, a0);
    s1 = s1 - 28;
    goto L_08832FA8;
L_08832FA8:;
    v1 = LD32(s1+4);
    a0 = LD32(s1+8);
    t0 = LD32(s1+12);
    s0 = LD32(s1);
    ST32(sp, v1);
    v0 = s0 >> 1;
    ST32(sp+4, a0);
    a1 = s0 & 0x1;
    v1 = v0 << 1;
    a2 = LD32(s1+16);
    a3 = LD32(s1+20);
    t1 = LD32(s1+24);
    a0 = LD32(s6+28);
    v1 = v1 + v0;
    v0 = a1 << 1;
    ST32(sp+8, t0);
    v0 = v0 + a1;
    v1 = v1 << 2;
    ST32(sp+12, a2);
    a0 = a0 + v1;
    v0 = v0 << 1;
    ST32(sp+16, a3);
    a0 = a0 + v0;
    a1 = s1 + 4;
    ST32(sp+20, t1);
    f0 = BITSF(LD32(sp));
    v0 = LD_U8(a0);
    f3 = BITSF(LD32(sp+4));
    f4 = BITSF(LD32(sp+12));
    v1 = (u32)(s32)(s8)v0;
    f3 = f3 - f0;
    f1 = BITSF(v1);
    v0 = (v0 >> 7) & 0x1;
    v0 = v0 << 2;
    f3 = f3 * f20;
    f0 = (float)(s32)FBITS(f1);
    v0 = v0 + sp;
    f1 = BITSF(LD32(v0));
    v1 = (u32)(s32)LD_S8(a0+1);
    f0 = f0 * f3;
    f6 = BITSF(LD32(sp+16));
    f5 = BITSF(LD32(sp+20));
    f2 = BITSF(v1);
    f1 = f1 + f0;
    f0 = BITSF(LD32(sp+8));
    v1 = (u32)(s32)LD_S8(a0+2);
    f5 = f5 - f6;
    ST32(v0, FBITS(f1));
    f4 = f4 - f0;
    f0 = BITSF(v1);
    v1 = LD_U8(a0+1);
    f1 = (float)(s32)FBITS(f2);
    f4 = f4 * f20;
    v1 = v1 >> 7;
    v1 = v1 << 2;
    v1 = v1 + sp;
    f1 = f1 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v1+8));
    f5 = f5 * f20;
    f0 = f0 + f1;
    f2 = f2 * f5;
    ST32(v1+8, FBITS(f0));
    v0 = LD_U8(a0+2);
    v0 = v0 >> 7;
    v0 = v0 << 2;
    v0 = v0 + sp;
    f0 = BITSF(LD32(v0+16));
    f0 = f0 + f2;
    ST32(v0+16, FBITS(f0));
    v0 = (u32)(s32)LD_S8(a0+4);
    v1 = LD_U8(a0+3);
    f6 = BITSF(v0);
    v0 = (u32)(s32)LD_S8(a0+5);
    f2 = (float)(s32)FBITS(f6);
    f7 = BITSF(v0);
    v0 = (u32)(s32)(s8)v1;
    f0 = BITSF(v0);
    v1 = (v1 >> 7) & 0x1;
    v1 = v1 << 2;
    f1 = (float)(s32)FBITS(f0);
    v1 = v1 + a1;
    f0 = BITSF(LD32(v1));
    f2 = f2 * f4;
    f1 = f1 * f3;
    f3 = (float)(s32)FBITS(f7);
    f0 = f0 + f1;
    f3 = f3 * f5;
    ST32(v1, FBITS(f0));
    v0 = LD_U8(a0+4);
    v0 = v0 >> 7;
    v0 = v0 << 2;
    v0 = v0 + a1;
    f0 = BITSF(LD32(v0+8));
    f0 = f0 + f2;
    ST32(v0+8, FBITS(f0));
    v1 = LD_U8(a0+5);
    v1 = v1 >> 7;
    v1 = v1 << 2;
    v1 = v1 + a1;
    f0 = BITSF(LD32(v1+16));
    f0 = f0 + f3;
    ST32(v1+16, FBITS(f0));
    f2 = BITSF(LD32(s4+4));
    f0 = BITSF(LD32(sp));
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = 0 + 0; goto L_088331D8; }
    goto L_0883315C;
L_0883315C:;
    f1 = BITSF(LD32(s4));
    f0 = BITSF(LD32(sp+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = 0 + 0; goto L_088331D8; }
    goto L_08833174;
L_08833174:;
    f1 = BITSF(LD32(s4+12));
    f0 = BITSF(LD32(sp+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_088331D8; }
    goto L_0883318C;
L_0883318C:;
    f1 = BITSF(LD32(s4+8));
    f0 = BITSF(LD32(sp+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_088331D8; }
    goto L_088331A4;
L_088331A4:;
    f1 = BITSF(LD32(s4+20));
    f0 = BITSF(LD32(sp+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(s1+4)); goto L_088331DC; }
    goto L_088331BC;
L_088331BC:;
    f1 = BITSF(LD32(s4+16));
    f0 = BITSF(LD32(sp+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_088331D8; }
    goto L_088331D4;
L_088331D4:;
    v0 = 0 + 0;
    goto L_088331D8;
L_088331D8:;
    f0 = BITSF(LD32(s1+4));
    goto L_088331DC;
L_088331DC:;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    s2 = v0 & 0xff;
    if (cnd_) { goto L_08833350; }
    goto L_088331EC;
L_088331EC:;
    f1 = BITSF(LD32(s4));
    f0 = BITSF(LD32(a1+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08833350; }
    goto L_08833204;
L_08833204:;
    f1 = BITSF(LD32(s4+12));
    f0 = BITSF(LD32(a1+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08833350; }
    goto L_0883321C;
L_0883321C:;
    f1 = BITSF(LD32(s4+8));
    f0 = BITSF(LD32(a1+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08833350; }
    goto L_08833234;
L_08833234:;
    f1 = BITSF(LD32(s4+20));
    f0 = BITSF(LD32(a1+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08833350; }
    goto L_0883324C;
L_0883324C:;
    f1 = BITSF(LD32(a1+20));
    f0 = BITSF(LD32(s4+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    v1 = s0 << 1;
    if (cnd_) { goto L_08833350; }
    goto L_08833264;
L_08833264:;
    a1 = LD32(s6);
    a0 = v1 + 2;
    v0 = a0 < a1;
    cnd_ = v0 == 0;
    ST32(sp+40, a0);
    if (cnd_) { goto L_0883331C; }
    goto L_08833278;
L_08833278:;
    v0 = LD32(sp+40);
    ST32(s1, v0);
    cnd_ = s2 == 0;
    s1 = s1 + 28;
    if (cnd_) { goto L_088332C4; }
    goto L_08833288;
L_08833288:;
    v0 = v1 + 1;
    v1 = LD32(sp);
    ST32(s1, v0);
    ST32(s1+4, v1);
    v0 = LD32(sp+4);
    ST32(s1+8, v0);
    v1 = LD32(sp+8);
    ST32(s1+12, v1);
    v0 = LD32(sp+12);
    ST32(s1+16, v0);
    v1 = LD32(sp+16);
    ST32(s1+20, v1);
    v0 = LD32(sp+20);
    ST32(s1+24, v0);
    goto L_088332C0;
L_088332C0:;
    s1 = s1 + 28;
    goto L_088332C4;
L_088332C4:;
    v0 = LD32(sp+36);
    goto L_088332C8;
L_088332C8:;
    cnd_ = s1 != v0;
    s1 = s1 - 28;
    if (cnd_) { goto L_08832FA8; }
    goto L_088332D0;
L_088332D0:;
    s5 = s5 - 1;
    v0 = (u32)-1;
    cnd_ = s5 == v0;
    v1 = LD32(sp+32);
    if (cnd_) { goto L_08832EF4; }
    goto L_088332E0;
L_088332E0:;
    v0 = D_08B2398C - (14732);
    v0 = v0 + 14732;
    s3 = v1 << 10;
    v1 = s3 + s5;
    v1 = v1 << 2;
    s0 = v1 + v0;
    s1 = (u32)-1;
    a0 = LD32(s0);
    goto L_08833300;
L_08833300:;
    s5 = s5 - 1;
    t_ = fp;
    s0 = s0 - 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883330C;
L_0883330C:;
    cnd_ = s5 != s1;
    if (cnd_) { a0 = LD32(s0); goto L_08833300; }
    goto L_08833314;
L_08833314:;
    goto L_08832EF8;
L_0883331C:;
    v0 = LD32(sp+32);
    v1 = 1024;
    cnd_ = s5 == v1;
    s3 = v0 << 10;
    if (cnd_) { goto L_0883340C; }
    goto L_0883332C;
L_0883332C:;
    a0 = LD32(sp+40);
    v0 = s3 + s5;
    v0 = v0 << 2;
    v1 = a0 - a1;
    a0 = D_08B2398C - (14732);
    a0 = a0 + 14732;
    v0 = v0 + a0;
    s5 = s5 + 1;
    ST32(v0, v1);
    goto L_08833350;
L_08833350:;
    cnd_ = s2 == 0;
    v0 = LD32(sp+36);
    if (cnd_) { goto L_088332C8; }
    goto L_08833358;
L_08833358:;
    a1 = LD32(s6);
    v0 = s0 << 1;
    s2 = v0 + 1;
    v1 = s2 < a1;
    cnd_ = v1 != 0;
    v0 = LD32(sp);
    if (cnd_) { goto L_088333D8; }
    goto L_08833370;
L_08833370:;
    v1 = LD32(sp+32);
    a0 = 1024;
    cnd_ = s5 == a0;
    s3 = v1 << 10;
    if (cnd_) { goto L_088333A4; }
    goto L_08833380;
L_08833380:;
    v0 = s3 + s5;
    a0 = D_08B2398C - (14732);
    v0 = v0 << 2;
    a0 = a0 + 14732;
    v1 = s2 - a1;
    v0 = v0 + a0;
    s5 = s5 + 1;
    ST32(v0, v1);
    goto L_088332C4;
L_088333A4:;
    v0 = s3 + s5;
    v1 = D_08B2398C - (14732);
    v0 = v0 << 2;
    v1 = v1 + 14732;
    s0 = v0 + v1;
    s0 = s0 - 4;
    goto L_088333BC;
L_088333BC:;
    a0 = LD32(s0);
    t_ = fp;
    s5 = s5 - 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088333C8;
L_088333C8:;
    cnd_ = s5 != 0;
    if (cnd_) { s0 = s0 - 4; goto L_088333BC; }
    goto L_088333D0;
L_088333D0:;
    a1 = LD32(s6);
    goto L_08833380;
L_088333D8:;
    ST32(s1, s2);
    ST32(s1+4, v0);
    v1 = LD32(sp+4);
    ST32(s1+8, v1);
    v0 = LD32(sp+8);
    ST32(s1+12, v0);
    v1 = LD32(sp+12);
    ST32(s1+16, v1);
    v0 = LD32(sp+16);
    ST32(s1+20, v0);
    v1 = LD32(sp+20);
    ST32(s1+24, v1);
    goto L_088332C0;
L_0883340C:;
    v0 = s3 + s5;
    a0 = D_08B2398C - (14732);
    v0 = v0 << 2;
    a0 = a0 + 14732;
    s7 = v0 + a0;
    s7 = s7 - 4;
    goto L_08833424;
L_08833424:;
    a0 = LD32(s7);
    t_ = fp;
    s5 = s5 - 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08833430;
L_08833430:;
    cnd_ = s5 != 0;
    if (cnd_) { s7 = s7 - 4; goto L_08833424; }
    goto L_08833438;
L_08833438:;
    a1 = LD32(s6);
    goto L_0883332C;
}

/* 08833440 */
rv_t func_08833440(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08833440:;
    sp = sp - 128;
    fp = a1 + 0;
    s7 = a2 + 0;
    s6 = a3 + 0;
    s5 = a0 + 0;
    v0 = LD32(a0);
    ST32(sp+44, t0);
    cnd_ = v0 == 0;
    t0 = t1 + 0;
    if (cnd_) { goto L_088338C0; }
    goto L_08833490;
L_08833490:;
    v0 = D_08AEB758 - (-18600);
    f0 = BITSF(LD32(a2+4));
    f1 = BITSF(LD32(v0-18600));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    v1 = t1 << 3;
    if (cnd_) { goto L_088338AC; }
    goto L_088334AC;
L_088334AC:;
    a0 = LD32(a0+4);
    v1 = v1 - t1;
    v0 = D_08B2328C - (12940);
    v1 = v1 << 7;
    v0 = v0 + 12940;
    s0 = v1 + v0;
    ST32(s0+4, a0);
    t0 = s0 + 0;
    a0 = LD32(s5+8);
    ST32(s0, 0);
    ST32(s0+8, a0);
    v0 = LD32(s5+12);
    ST32(s0+12, v0);
    v1 = LD32(s5+16);
    ST32(s0+16, v1);
    v0 = LD32(s5+20);
    ST32(s0+20, v0);
    v1 = LD32(s5+24);
    ST32(s0+24, v1);
    s0 = s0 + 28;
    cnd_ = s0 == t0;
    v0 = D_08AEB75C - (-18596);
    if (cnd_) { goto L_0883380C; }
    goto L_08833504;
L_08833504:;
    f20 = BITSF(LD32(v0-18596));
    ST32(sp+48, t0);
    s0 = s0 - 28;
    goto L_08833510;
L_08833510:;
    a0 = LD32(s0);
    t2 = LD32(s0+16);
    t3 = LD32(s0+20);
    t4 = LD32(s0+24);
    a1 = LD32(s0+4);
    a2 = LD32(s0+8);
    a3 = LD32(s0+12);
    v1 = a0 >> 1;
    t1 = LD32(s5+28);
    a0 = a0 & 0x1;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v1 = a0 << 1;
    ST32(sp+12, t2);
    v1 = v1 + a0;
    v0 = v0 << 2;
    ST32(sp+16, t3);
    t1 = t1 + v0;
    v1 = v1 << 1;
    ST32(sp+20, t4);
    t1 = t1 + v1;
    t0 = s0 + 4;
    ST32(sp, a1);
    a0 = fp + 0;
    a1 = s7 + 0;
    ST32(sp+4, a2);
    a2 = t0 + 0;
    ST32(sp+8, a3);
    a3 = sp + 36;
    ST32(sp+52, 0);
    v0 = LD_U8(t1);
    f6 = BITSF(LD32(t0+4));
    f1 = BITSF(LD32(s0+4));
    v1 = (u32)(s32)(s8)v0;
    f0 = BITSF(v1);
    f6 = f6 - f1;
    v0 = (v0 >> 7) & 0x1;
    f1 = (float)(s32)FBITS(f0);
    v0 = v0 << 2;
    f6 = f6 * f20;
    v0 = v0 + t0;
    f0 = BITSF(LD32(v0));
    v1 = (u32)(s32)LD_S8(t1+1);
    f1 = f1 * f6;
    f2 = BITSF(LD32(t0+8));
    f7 = BITSF(LD32(t0+12));
    f8 = BITSF(LD32(t0+16));
    f0 = f0 + f1;
    f4 = BITSF(LD32(t0+20));
    f3 = BITSF(v1);
    f7 = f7 - f2;
    v1 = (u32)(s32)LD_S8(t1+2);
    ST32(v0, FBITS(f0));
    f1 = (float)(s32)FBITS(f3);
    f5 = BITSF(v1);
    v1 = LD_U8(t1+1);
    f7 = f7 * f20;
    f4 = f4 - f8;
    v1 = v1 >> 7;
    v1 = v1 << 2;
    v1 = v1 + t0;
    f1 = f1 * f7;
    f0 = BITSF(LD32(v1+8));
    f4 = f4 * f20;
    f2 = (float)(s32)FBITS(f5);
    f0 = f0 + f1;
    f2 = f2 * f4;
    ST32(v1+8, FBITS(f0));
    v0 = LD_U8(t1+2);
    v0 = v0 >> 7;
    v0 = v0 << 2;
    v0 = v0 + t0;
    f0 = BITSF(LD32(v0+16));
    f0 = f0 + f2;
    ST32(v0+16, FBITS(f0));
    t0 = LD_U8(t1+3);
    v0 = (u32)(s32)LD_S8(t1+4);
    v1 = (u32)(s32)LD_S8(t1+5);
    f5 = BITSF(v0);
    v0 = (u32)(s32)(s8)t0;
    f0 = BITSF(v0);
    t0 = (t0 >> 7) & 0x1;
    t0 = t0 << 2;
    f1 = (float)(s32)FBITS(f0);
    t0 = t0 + sp;
    f0 = BITSF(LD32(t0));
    f8 = BITSF(v1);
    f1 = f1 * f6;
    f2 = (float)(s32)FBITS(f5);
    f3 = (float)(s32)FBITS(f8);
    f0 = f0 + f1;
    f2 = f2 * f7;
    f3 = f3 * f4;
    ST32(t0, FBITS(f0));
    v1 = LD_U8(t1+4);
    f1 = BITSF(LD32(s6));
    v1 = v1 >> 7;
    v1 = v1 << 2;
    v1 = v1 + sp;
    f0 = BITSF(LD32(v1+8));
    f0 = f0 + f2;
    ST32(v1+8, FBITS(f0));
    v0 = LD_U8(t1+5);
    v0 = v0 >> 7;
    v0 = v0 << 2;
    v0 = v0 + sp;
    f0 = BITSF(LD32(v0+16));
    f0 = f0 + f3;
    ST32(v0+16, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    { rv_t r_ = func_08833F0C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088336CC;
L_088336CC:;
    a0 = fp + 0;
    f0 = BITSF(LD32(s6));
    a1 = s7 + 0;
    a2 = sp + 0;
    a3 = sp + 40;
    s2 = v0 + 0;
    ST32(sp+40, FBITS(f0));
    { rv_t r_ = func_08833F0C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088336EC;
L_088336EC:;
    s1 = v0 + 0;
    v0 = LD32(s0);
    v0 = v0 << 1;
    s3 = v0 + 2;
    cnd_ = s2 == 0;
    s4 = v0 + 1;
    if (cnd_) { goto L_08833734; }
    goto L_08833704;
L_08833704:;
    cnd_ = s1 == 0;
    f1 = BITSF(LD32(sp+36));
    if (cnd_) { goto L_0883374C; }
    goto L_0883370C;
L_0883370C:;
    f0 = BITSF(LD32(sp+40));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    v0 = 1;
    if (cnd_) { goto L_08833734; }
    goto L_08833720;
L_08833720:;
    v1 = LD32(s5);
    ST32(sp+52, v0);
    v0 = s4 < v1;
    cnd_ = v0 == 0;
    a0 = s4 - v1;
    if (cnd_) { goto L_0883387C; }
    goto L_08833734;
L_08833734:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_0883374C; }
    goto L_0883373C;
L_0883373C:;
    v1 = LD32(s5);
    v0 = s3 < v1;
    cnd_ = v0 == 0;
    v0 = LD32(sp+44);
    if (cnd_) { goto L_08833850; }
    goto L_0883374C;
L_0883374C:;
    cnd_ = s2 == 0;
    v1 = LD32(sp+52);
    if (cnd_) { goto L_08833774; }
    goto L_08833754;
L_08833754:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08833774; }
    goto L_0883375C;
L_0883375C:;
    a0 = LD32(s5);
    v0 = s4 < a0;
    cnd_ = v0 == 0;
    v0 = LD32(sp+44);
    if (cnd_) { goto L_08833840; }
    goto L_0883376C;
L_0883376C:;
    ST32(s0, s4);
    s0 = s0 + 28;
    goto L_08833774;
L_08833774:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_088337E4; }
    goto L_0883377C;
L_0883377C:;
    v0 = LD32(s0+4);
    v1 = LD32(s0+8);
    a0 = LD32(s0+12);
    a1 = LD32(s0+16);
    a2 = LD32(s0+20);
    a3 = LD32(s0+24);
    ST32(s0+32, v0);
    ST32(s0+36, v1);
    ST32(s0+40, a0);
    ST32(s0+44, a1);
    ST32(s0+48, a2);
    ST32(s0+52, a3);
    v0 = LD32(sp);
    ST32(s0, s3);
    ST32(s0+4, v0);
    v1 = LD32(sp+4);
    ST32(s0+8, v1);
    v0 = LD32(sp+8);
    ST32(s0+12, v0);
    v1 = LD32(sp+12);
    ST32(s0+16, v1);
    v0 = LD32(sp+16);
    ST32(s0+20, v0);
    v1 = LD32(sp+20);
    ST32(s0+24, v1);
    s0 = s0 + 28;
    goto L_088337E4;
L_088337E4:;
    cnd_ = s2 == 0;
    v0 = LD32(sp+48);
    if (cnd_) { goto L_08833804; }
    goto L_088337EC;
L_088337EC:;
    v1 = LD32(sp+52);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08833804; }
    goto L_088337F8;
L_088337F8:;
    ST32(s0, s4);
    s0 = s0 + 28;
    v0 = LD32(sp+48);
    goto L_08833804;
L_08833804:;
    cnd_ = s0 != v0;
    s0 = s0 - 28;
    if (cnd_) { goto L_08833510; }
    goto L_0883380C;
L_0883380C:;
    goto L_08833810;
L_08833810:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_08833840:;
    t_ = v0;
    a0 = s4 - a0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08833848;
L_08833848:;
    v0 = LD32(sp+48);
    goto L_08833804;
L_08833850:;
    a0 = s3 - v1;
    t_ = v0;
    s1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883385C;
L_0883385C:;
    f1 = BITSF(LD32(s6));
    f0 = BITSF(LD32(sp+36));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    s2 = s2 & 0x1;
    if (cnd_) { goto L_0883374C; }
    goto L_08833874;
L_08833874:;
    s2 = 0 + 0;
    goto L_0883374C;
L_0883387C:;
    v1 = LD32(sp+44);
    s2 = 0 + 0;
    t_ = v1;
    s1 = s1 & 0x1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883388C;
L_0883388C:;
    f1 = BITSF(LD32(s6));
    f0 = BITSF(LD32(sp+40));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { s1 = 0 + 0; goto L_08833734; }
    goto L_088338A4;
L_088338A4:;
    goto L_08833734;
L_088338AC:;
    a2 = a3 + 0;
    a3 = LD32(sp+44);
    { rv_t r_ = func_088338F8(a0, a1, a2, a3, t0, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088338B8;
L_088338B8:;
    goto L_08833810;
L_088338C0:;
    f0 = BITSF(LD32(a3));
    a2 = a0 + 4;
    a3 = sp + 32;
    a0 = a1 + 0;
    a1 = s7 + 0;
    ST32(sp+32, FBITS(f0));
    { rv_t r_ = func_08833F0C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088338DC;
L_088338DC:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08833810; }
    goto L_088338E4;
L_088338E4:;
    v0 = LD32(sp+44);
    t_ = v0;
    a0 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088338F0;
L_088338F0:;
    goto L_08833810;
}

/* 088338F8 */
rv_t func_088338F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_088338F8:;
    sp = sp - 112;
    v1 = t0 << 3;
    v1 = v1 - t0;
    v0 = D_08B2328C - (12940);
    v1 = v1 << 7;
    s6 = a0 + 0;
    v0 = v0 + 12940;
    s0 = v1 + v0;
    s7 = a1 + 0;
    a0 = LD32(a0+4);
    ST32(s0, 0);
    ST32(s0+4, a0);
    a0 = s0 + 0;
    v1 = LD32(s6+8);
    ST32(sp+32, a3);
    ST32(s0+8, v1);
    v0 = LD32(s6+12);
    ST32(s0+12, v0);
    v1 = LD32(s6+16);
    ST32(s0+16, v1);
    v0 = LD32(s6+20);
    ST32(s0+20, v0);
    v1 = LD32(s6+24);
    ST32(s0+24, v1);
    s0 = s0 + 28;
    cnd_ = s0 == a0;
    fp = a2 + 0;
    if (cnd_) { goto L_08833DAC; }
    goto L_08833998;
L_08833998:;
    v0 = D_08AEB760 - (-18592);
    f22 = BITSF(LD32(v0-18592));
    ST32(sp+36, a0);
    s0 = s0 - 28;
    goto L_088339A8;
L_088339A8:;
    a0 = LD32(s0);
    a2 = LD32(s0+4);
    a3 = LD32(s0+8);
    t0 = LD32(s0+12);
    t1 = LD32(s0+16);
    t2 = LD32(s0+20);
    t3 = LD32(s0+24);
    v1 = a0 >> 1;
    a1 = LD32(s6+28);
    a0 = a0 & 0x1;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v1 = a0 << 1;
    ST32(sp, a2);
    v1 = v1 + a0;
    v0 = v0 << 2;
    ST32(sp+4, a3);
    a1 = a1 + v0;
    v1 = v1 << 1;
    ST32(sp+8, t0);
    a1 = a1 + v1;
    t4 = s0 + 4;
    ST32(sp+12, t1);
    ST32(sp+16, t2);
    ST32(sp+20, t3);
    f1 = BITSF(LD32(s0+4));
    v0 = LD_U8(a1);
    f6 = BITSF(LD32(t4+4));
    f2 = BITSF(LD32(t4+8));
    v1 = (u32)(s32)(s8)v0;
    f6 = f6 - f1;
    f0 = BITSF(v1);
    v0 = (v0 >> 7) & 0x1;
    v0 = v0 << 2;
    f1 = (float)(s32)FBITS(f0);
    f6 = f6 * f22;
    v0 = v0 + t4;
    f0 = BITSF(LD32(v0));
    v1 = (u32)(s32)LD_S8(a1+1);
    f1 = f1 * f6;
    f7 = BITSF(LD32(t4+12));
    f8 = BITSF(LD32(t4+16));
    f4 = BITSF(LD32(t4+20));
    f0 = f0 + f1;
    f3 = BITSF(v1);
    f7 = f7 - f2;
    v1 = (u32)(s32)LD_S8(a1+2);
    ST32(v0, FBITS(f0));
    f1 = (float)(s32)FBITS(f3);
    f5 = BITSF(v1);
    v1 = LD_U8(a1+1);
    f7 = f7 * f22;
    f4 = f4 - f8;
    v1 = v1 >> 7;
    v1 = v1 << 2;
    v1 = v1 + t4;
    f1 = f1 * f7;
    f0 = BITSF(LD32(v1+8));
    f4 = f4 * f22;
    f2 = (float)(s32)FBITS(f5);
    f0 = f0 + f1;
    f2 = f2 * f4;
    ST32(v1+8, FBITS(f0));
    v0 = LD_U8(a1+2);
    v0 = v0 >> 7;
    v0 = v0 << 2;
    v0 = v0 + t4;
    f0 = BITSF(LD32(v0+16));
    f0 = f0 + f2;
    ST32(v0+16, FBITS(f0));
    a0 = LD_U8(a1+3);
    v0 = (u32)(s32)LD_S8(a1+4);
    v1 = (u32)(s32)LD_S8(a1+5);
    f5 = BITSF(v0);
    v0 = (u32)(s32)(s8)a0;
    f0 = BITSF(v0);
    a0 = (a0 >> 7) & 0x1;
    a0 = a0 << 2;
    f1 = (float)(s32)FBITS(f0);
    a0 = a0 + sp;
    f0 = BITSF(LD32(a0));
    f8 = BITSF(v1);
    f1 = f1 * f6;
    f2 = (float)(s32)FBITS(f5);
    f3 = (float)(s32)FBITS(f8);
    f0 = f0 + f1;
    f2 = f2 * f7;
    f3 = f3 * f4;
    ST32(a0, FBITS(f0));
    v1 = LD_U8(a1+4);
    f4 = BITSF(LD32(s7));
    f1 = BITSF(LD32(s0+4));
    v1 = v1 >> 7;
    v1 = v1 << 2;
    v1 = v1 + sp;
    f0 = BITSF(LD32(v1+8));
    f21 = BITSF(LD32(fp));
    fcc = FCMP(f1, f4, 14);
    f0 = f0 + f2;
    f2 = f21;
    ST32(v1+8, FBITS(f0));
    v0 = LD_U8(a1+5);
    v0 = v0 >> 7;
    v0 = v0 << 2;
    v0 = v0 + sp;
    f0 = BITSF(LD32(v0+16));
    f0 = f0 + f3;
    cnd_ = !fcc;
    ST32(v0+16, FBITS(f0));
    if (cnd_) { goto L_08833E54; }
    goto L_08833B5C;
L_08833B5C:;
    f0 = BITSF(LD32(t4+4));
    fcc = FCMP(f4, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = 0 + 0; goto L_08833BEC; }
    goto L_08833B70;
L_08833B70:;
    f1 = BITSF(LD32(s7+8));
    f0 = BITSF(LD32(t4+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = 0 + 0; goto L_08833BEC; }
    goto L_08833B88;
L_08833B88:;
    f0 = BITSF(LD32(t4+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_08833BEC; }
    goto L_08833B9C;
L_08833B9C:;
    f1 = BITSF(LD32(s7+4));
    f0 = BITSF(LD32(t4+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08833BEC; }
    goto L_08833BB4;
L_08833BB4:;
    f0 = f1 + f21;
    f3 = BITSF(LD32(t4+8));
    fcc = FCMP(f3, f0, 14);
    cnd_ = !fcc;
    f0 = BITSF(LD32(sp));
    if (cnd_) { goto L_08833BF0; }
    goto L_08833BCC;
L_08833BCC:;
    f0 = f3 - f1;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_08833BE4; }
    goto L_08833BE4;
L_08833BE4:;
    f21 = f1;
    v0 = 1;
    goto L_08833BEC;
L_08833BEC:;
    f0 = BITSF(LD32(sp));
    goto L_08833BF0;
L_08833BF0:;
    s2 = v0 & 0xff;
    fcc = FCMP(f0, f4, 14);
    cnd_ = !fcc;
    f20 = f2;
    if (cnd_) { goto L_08833E4C; }
    goto L_08833C04;
L_08833C04:;
    f0 = BITSF(LD32(sp+4));
    fcc = FCMP(f4, f0, 14);
    cnd_ = !fcc;
    v1 = 0 + 0;
    if (cnd_) { goto L_08833C94; }
    goto L_08833C18;
L_08833C18:;
    f1 = BITSF(LD32(s7+8));
    f0 = BITSF(LD32(sp+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s0); goto L_08833C98; }
    goto L_08833C30;
L_08833C30:;
    f0 = BITSF(LD32(sp+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s0); goto L_08833C98; }
    goto L_08833C44;
L_08833C44:;
    f1 = BITSF(LD32(s7+4));
    f0 = BITSF(LD32(sp+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s0); goto L_08833C98; }
    goto L_08833C5C;
L_08833C5C:;
    f0 = f1 + f2;
    f2 = BITSF(LD32(sp+8));
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s0); goto L_08833C98; }
    goto L_08833C74;
L_08833C74:;
    f0 = f2 - f1;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_08833C8C; }
    goto L_08833C8C;
L_08833C8C:;
    f20 = f1;
    v1 = 1;
    goto L_08833C94;
L_08833C94:;
    v0 = LD32(s0);
    goto L_08833C98;
L_08833C98:;
    s1 = v1 & 0xff;
    s5 = 0 + 0;
    v0 = v0 << 1;
    s3 = v0 + 2;
    cnd_ = s2 == 0;
    s4 = v0 + 1;
    if (cnd_) { goto L_08833CD8; }
    goto L_08833CB0;
L_08833CB0:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08833CF0; }
    goto L_08833CB8;
L_08833CB8:;
    fcc = FCMP(f21, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08833CD8; }
    goto L_08833CC8;
L_08833CC8:;
    v1 = LD32(s6);
    v0 = s4 < v1;
    cnd_ = v0 == 0;
    s5 = 1;
    if (cnd_) { goto L_08833E20; }
    goto L_08833CD8;
L_08833CD8:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08833CF0; }
    goto L_08833CE0;
L_08833CE0:;
    v1 = LD32(s6);
    v0 = s3 < v1;
    cnd_ = v0 == 0;
    v0 = LD32(sp+32);
    if (cnd_) { goto L_08833DF8; }
    goto L_08833CF0;
L_08833CF0:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08833D18; }
    goto L_08833CF8;
L_08833CF8:;
    cnd_ = s5 != 0;
    if (cnd_) { goto L_08833D18; }
    goto L_08833D00;
L_08833D00:;
    a0 = LD32(s6);
    v0 = s4 < a0;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+32); goto L_08833DE8; }
    goto L_08833D10;
L_08833D10:;
    ST32(s0, s4);
    s0 = s0 + 28;
    goto L_08833D18;
L_08833D18:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08833D88; }
    goto L_08833D20;
L_08833D20:;
    v0 = LD32(s0+4);
    v1 = LD32(s0+8);
    a0 = LD32(s0+12);
    a1 = LD32(s0+16);
    a2 = LD32(s0+20);
    a3 = LD32(s0+24);
    ST32(s0+32, v0);
    ST32(s0+36, v1);
    ST32(s0+40, a0);
    ST32(s0+44, a1);
    ST32(s0+48, a2);
    ST32(s0+52, a3);
    v0 = LD32(sp);
    ST32(s0, s3);
    ST32(s0+4, v0);
    v1 = LD32(sp+4);
    ST32(s0+8, v1);
    v0 = LD32(sp+8);
    ST32(s0+12, v0);
    v1 = LD32(sp+12);
    ST32(s0+16, v1);
    v0 = LD32(sp+16);
    ST32(s0+20, v0);
    v1 = LD32(sp+20);
    ST32(s0+24, v1);
    s0 = s0 + 28;
    goto L_08833D88;
L_08833D88:;
    cnd_ = s2 == 0;
    v0 = LD32(sp+36);
    if (cnd_) { goto L_08833DA4; }
    goto L_08833D90;
L_08833D90:;
    cnd_ = s5 == 0;
    if (cnd_) { goto L_08833DA4; }
    goto L_08833D98;
L_08833D98:;
    ST32(s0, s4);
    s0 = s0 + 28;
    v0 = LD32(sp+36);
    goto L_08833DA4;
L_08833DA4:;
    cnd_ = s0 != v0;
    s0 = s0 - 28;
    if (cnd_) { goto L_088339A8; }
    goto L_08833DAC;
L_08833DAC:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_08833DE8:;
    t_ = v1;
    a0 = s4 - a0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08833DF0;
L_08833DF0:;
    v0 = LD32(sp+36);
    goto L_08833DA4;
L_08833DF8:;
    a0 = s3 - v1;
    t_ = v0;
    s1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08833E04;
L_08833E04:;
    f0 = BITSF(LD32(fp));
    fcc = FCMP(f21, f0, 12);
    cnd_ = fcc;
    s2 = s2 & 0x1;
    if (cnd_) { goto L_08833CF0; }
    goto L_08833E18;
L_08833E18:;
    s2 = 0 + 0;
    goto L_08833CF0;
L_08833E20:;
    a0 = s4 - v1;
    v1 = LD32(sp+32);
    t_ = v1;
    s2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08833E30;
L_08833E30:;
    f0 = BITSF(LD32(fp));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { s1 = 0 + 0; goto L_08833CD8; }
    goto L_08833E44;
L_08833E44:;
    goto L_08833CD8;
L_08833E4C:;
    v1 = 0 + 0;
    goto L_08833C94;
L_08833E54:;
    v0 = 0 + 0;
    goto L_08833BEC;
}

/* 08833E5C */
void func_08833E5C(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08833E5C:;
    sp = sp - 32;
    v0 = 12;
    ST32(sp, v0);
    ST32(sp+4, a0);
    s2 = a1 + 0;
    s1 = sp + 0;
    s0 = 0 + 0;
    a1 = LD32(s1+4);
    goto L_08833E8C;
L_08833E8C:;
    a0 = s2 + 0;
    a1 = a1 + s0;
    func_0882DAA0(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08833E98;
L_08833E98:;
    v1 = LD32(s1);
    s0 = s0 + 1;
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s1+4); goto L_08833E8C; }
    goto L_08833EAC;
L_08833EAC:;
    sp = sp + 32;
    return;
}

/* 08833EC4 */
void func_08833EC4(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08833EC4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a1 + 0;
    s1 = a1 + 0;
    a1 = s0 + 0;
    s0 = s0 + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08833EEC;
L_08833EEC:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    func_0882E1D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08833EF8;
L_08833EF8:;
    sp = sp + 16;
    return;
}

/* 08833F0C */
rv_t func_08833F0C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08833F0C:;
    f5 = BITSF(LD32(a2+20));
    f4 = BITSF(LD32(a2+12));
    f0 = BITSF(LD32(a2));
    f1 = BITSF(LD32(a2+8));
    f2 = BITSF(LD32(a2+16));
    f3 = BITSF(LD32(a2+4));
    v0 = D_08AEB768 - (-18584);
    sp = sp - 32;
    t4 = D_08AEB764 - (-18588);
    f6 = BITSF(LD32(v0-18584));
    v1 = D_08AEB76C - (-18580);
    v0 = D_08AEB770 - (-18576);
    ST32(sp+20, FBITS(f4));
    t2 = a0 + 0;
    t1 = a1 + 0;
    ST32(sp+24, FBITS(f5));
    t3 = (u32)-1;
    t0 = 0 + 0;
    ST32(sp, FBITS(f0));
    a2 = sp + 0;
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+16, FBITS(f3));
    f5 = BITSF(LD32(v1-18580));
    f7 = BITSF(LD32(v0-18576));
    f4 = BITSF(LD32(t4-18588));
    f1 = BITSF(LD32(a0));
    goto L_08833F78;
L_08833F78:;
    f0 = BITSF(LD32(a2));
    f2 = BITSF(LD32(t4-18588));
    v0 = 0 + 0;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    f3 = f0 - f1;
    if (cnd_) { goto L_088340FC; }
    goto L_08833F94;
L_08833F94:;
    f0 = BITSF(LD32(a1));
    fcc = FCMP(f0, f6, 14);
    goto L_08833FA0;
L_08833FA0:;
    cnd_ = fcc;
    if (cnd_) { goto L_088340E4; }
    goto L_08833FA8;
L_08833FA8:;
    f0 = f5 / f0;
    f2 = f3 * f0;
    goto L_08833FB0;
L_08833FB0:;
    fcc = FCMP(f4, f2, 12);
    a0 = a0 + 4;
    a2 = a2 + 4;
    cnd_ = !fcc;
    a1 = a1 + 4;
    if (cnd_) { goto L_08833FCC; }
    goto L_08833FC4;
L_08833FC4:;
    f4 = f2;
    t3 = t0 + 0;
    goto L_08833FCC;
L_08833FCC:;
    t0 = t0 + 1;
    v0 = (s32)t0 < 3;
    cnd_ = v0 != 0;
    if (cnd_) { f1 = BITSF(LD32(a0)); goto L_08833F78; }
    goto L_08833FDC;
L_08833FDC:;
    v0 = (u32)-1;
    cnd_ = t3 == v0;
    v0 = 1;
    if (cnd_) { goto L_088340F4; }
    goto L_08833FE8;
L_08833FE8:;
    f0 = BITSF(LD32(a3));
    fcc = FCMP(f0, f4, 12);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_088340E4; }
    goto L_08833FFC;
L_08833FFC:;
    a2 = 0x55550000u;
    a0 = t3 + 1;
    a2 = a2 | 0x5556;
    { s64 p_ = (s64)(s32)a0 * (s32)a2; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = (u32)((s32)a0 >> 31);
    a1 = hi;
    v1 = a1 - v1;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v1 = a0 - v0;
    a0 = v1 << 2;
    v0 = a0 + t1;
    f0 = BITSF(LD32(v0));
    v1 = a0 + t2;
    f2 = BITSF(LD32(v1));
    f0 = f4 * f0;
    v0 = sp + a0;
    f1 = BITSF(LD32(v0));
    f2 = f2 + f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_088340E4; }
    goto L_08834058;
L_08834058:;
    t0 = sp + 16;
    v0 = t0 + a0;
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_088340E4; }
    goto L_08834074;
L_08834074:;
    a0 = t3 + 2;
    { s64 p_ = (s64)(s32)a0 * (s32)a2; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = (u32)((s32)a0 >> 31);
    a1 = hi;
    v1 = a1 - v1;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v1 = a0 - v0;
    a0 = v1 << 2;
    v0 = a0 + t1;
    f0 = BITSF(LD32(v0));
    v1 = a0 + t2;
    f2 = BITSF(LD32(v1));
    f0 = f4 * f0;
    v0 = sp + a0;
    f1 = BITSF(LD32(v0));
    f2 = f2 + f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_088340E4; }
    goto L_088340C8;
L_088340C8:;
    v0 = t0 + a0;
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(a3, FBITS(f4)); goto L_088340EC; }
    goto L_088340E0;
L_088340E0:;
    v0 = 0 + 0;
    goto L_088340E4;
L_088340E4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088340EC:;
    v0 = 1;
    goto L_088340E4;
L_088340F4:;
    ST32(a3, 0);
    goto L_088340E4;
L_088340FC:;
    f0 = BITSF(LD32(a2+16));
    v0 = 0 + 0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    f3 = f0 - f1;
    if (cnd_) { goto L_08833FB0; }
    goto L_08834114;
L_08834114:;
    f0 = BITSF(LD32(a1));
    fcc = FCMP(f7, f0, 14);
    goto L_08833FA0;
}

/* 08834124 */
void func_08834124(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08834124:;
    sp = sp - 16;
    s1 = D_08B259A4 - (22948);
    v0 = LD_U8(s1+22948);
    s0 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088341BC; }
    goto L_08834148;
L_08834148:;
    a0 = 68;
    goto L_0883414C;
L_0883414C:;
    v0 = 1;
    s2 = D_08B25998 - (22936);
    ST8(s1+22948, v0);
    ST32(s2+22936, s0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08834160;
L_08834160:;
    v1 = D_08B2599C - (22940);
    ST32(v1+22940, v0);
    a0 = v0 + 0;
    v1 = 0 + 0;
    goto L_08834170;
L_08834170:;
    v1 = v1 + 1;
    v0 = v1 < 0x11u;
    ST32(a0, 0);
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_08834170; }
    goto L_08834184;
L_08834184:;
    a0 = D_08AD3E98 - (16024);
    a1 = s2 + 22936;
    a0 = a0 + 16024;
    a2 = 0 + 0;
    a3 = 9;
    t0 = 0 + 0;
    t1 = 0 + 0;
    func_088977D4(a0, a1, a2, a3, t0, t1);
    goto L_088341A4;
L_088341A4:;
    sp = sp + 16;
    return;
L_088341BC:;
    func_088341CC(t1, t2, t3);
    goto L_088341C4;
L_088341C4:;
    a0 = 68;
    goto L_0883414C;
}

/* 088341CC */
void func_088341CC(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088341CC:;
    sp = sp - 32;
    s3 = D_08B259A4 - (22948);
    v0 = LD_U8(s3+22948);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0883425C; }
    goto L_088341F0;
L_088341F0:;
    s1 = D_08B25990 - (22928);
    a0 = LD32(s1+22928);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088342B0; }
    goto L_08834200;
L_08834200:;
    s0 = D_08B2598C - (22924);
    a0 = LD32(s0+22924);
    goto L_08834208;
L_08834208:;
    cnd_ = a0 != 0;
    ST32(s1+22928, 0);
    if (cnd_) { goto L_088342A0; }
    goto L_08834210;
L_08834210:;
    ST32(s0+22924, 0);
    goto L_08834214;
L_08834214:;
    s1 = 0 + 0;
    s2 = D_08B2599C - (22940);
    ST8(s3+22948, 0);
    v1 = LD32(s2+22940);
    goto L_08834224;
L_08834224:;
    v0 = s1 << 2;
    s1 = s1 + 1;
    v0 = v0 + v1;
    s0 = LD32(v0);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08834288; }
    goto L_0883423C;
L_0883423C:;
    v0 = s1 < 0x11u;
    goto L_08834240;
L_08834240:;
    cnd_ = v0 != 0;
    v1 = LD32(s2+22940);
    if (cnd_) { goto L_08834224; }
    goto L_08834248;
L_08834248:;
    a0 = LD32(s2+22940);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08834278; }
    goto L_08834254;
L_08834254:;
    v0 = D_08B2599C - (22940);
    goto L_08834258;
L_08834258:;
    ST32(v0+22940, 0);
    goto L_0883425C;
L_0883425C:;
    sp = sp + 32;
    return;
L_08834278:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08834280;
L_08834280:;
    v0 = D_08B2599C - (22940);
    goto L_08834258;
L_08834288:;
    func_0883465C(a0, t1, t2, t3);
    goto L_08834290;
L_08834290:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08834298;
L_08834298:;
    v0 = s1 < 0x11u;
    goto L_08834240;
L_088342A0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088342A8;
L_088342A8:;
    ST32(s0+22924, 0);
    goto L_08834214;
L_088342B0:;
    s0 = D_08B2598C - (22924);
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088342B8;
L_088342B8:;
    a0 = LD32(s0+22924);
    goto L_08834208;
}

/* 088342C0 */
u32 func_088342C0(void)
{
    u32 v0 = 0, v1 = 0;
L_088342C0:;
    v1 = D_08B25998 - (22936);
    v0 = LD32(v1+22936);
    return v0;
}

/* 088342CC */
u32 func_088342CC(void)
{
    u32 v0 = 0, v1 = 0;
L_088342CC:;
    v0 = D_08B25998 - (22936);
    v1 = LD32(v0+22936);
    v0 = D_08B15A5C - (23132);
    v0 = v0 + 23132;
    v1 = v1 << 2;
    v1 = v1 + v0;
    v0 = LD32(v1);
    return v0;
}

/* 088342EC */
u32 func_088342EC(u32 a0)
{
    u32 v0 = 0;
L_088342EC:;
    v0 = D_08B15A5C - (23132);
    v0 = v0 + 23132;
    a0 = a0 << 2;
    a0 = a0 + v0;
    v0 = LD32(a0);
    return v0;
}

/* 08834304 */
static u32 func_08834304__orig(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08834304:;
    cnd_ = (s32)a0 < 0;
    v1 = D_08B25994 - (22932);
    if (cnd_) { goto L_0883433C; }
    goto L_0883430C;
L_0883430C:;
    v0 = LD32(v1+22932);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08834340; }
    goto L_0883431C;
L_0883431C:;
    v1 = D_08B2598C - (22924);
    v0 = a0 << 2;
    a0 = LD32(v1+22924);
    cnd_ = a0 == 0;
    v0 = v0 + a0;
    if (cnd_) { goto L_0883433C; }
    goto L_08834330;
L_08834330:;
    v0 = LD32(v0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08834340; }
    goto L_0883433C;
L_0883433C:;
    v1 = 0 + 0;
    goto L_08834340;
L_08834340:;
    v0 = v1 + 0;
    return v0;
}

u32 func_08834304(u32 a0)
{
    u32 r_ = 0;
    if (rs_stdtext_get(a0, &r_)) return r_;   /* native hook (tools/dc/hooks.py) */
    return func_08834304__orig(a0);
}

/* 08834348 */
u32 func_08834348(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08834348:;
    sp = sp - 16;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08834358;
L_08834358:;
    v1 = D_08B25990 - (22928);
    ST32(v1+22928, v0);
    sp = sp + 16;
    return v0;
}

/* 0883436C */
u32 func_0883436C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883436C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08834384;
L_08834384:;
    v1 = v0 + 0;
    v0 = D_08B2598C - (22924);
    ST32(v0+22924, v1);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088343C4; }
    goto L_08834398;
L_08834398:;
    v0 = D_08B25994 - (22932);
    ST32(v0+22932, s0);
    cnd_ = s0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088343C0; }
    goto L_088343A8;
L_088343A8:;
    a0 = s0 + 0;
    goto L_088343AC;
L_088343AC:;
    a1 = a1 + 1;
    v0 = a1 < a0;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088343AC; }
    goto L_088343C0;
L_088343C0:;
    v0 = 1;
    goto L_088343C4;
L_088343C4:;
    sp = sp + 16;
    return v0;
}

/* 088343D4 */
void func_088343D4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_088343D4:;
    v0 = D_08B25994 - (22932);
    v1 = LD32(v0+22932);
    a2 = a0 << 2;
    v1 = v1 < a0;
    cnd_ = v1 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0883440C; }
    goto L_088343EC;
L_088343EC:;
    v0 = D_08B2598C - (22924);
    v1 = LD32(v0+22924);
    a0 = a2 + v1;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0883440C; }
    goto L_08834404;
L_08834404:;
    ST32(a0, a1);
    a3 = 1;
    goto L_0883440C;
L_0883440C:;
    v0 = a3 + 0;
    return;
}

/* 08834414 */
void func_08834414(u32 a0)
{
    u32 v0 = 0;
L_08834414:;
    v0 = D_08B259A0 - (22944);
    ST32(v0+22944, a0);
    return;
}

/* 08834420 */
u32 func_08834420(void)
{
    u32 v0 = 0, v1 = 0;
L_08834420:;
    v1 = D_08B259A0 - (22944);
    v0 = LD32(v1+22944);
    return v0;
}

/* 0883442C */
void func_0883442C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883442C:;
    sp = sp - 32;
    s3 = D_08B2599C - (22940);
    v0 = LD32(s3+22940);
    s4 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0883448C; }
    goto L_08834458;
L_08834458:;
    s1 = 0 + 0;
    v0 = LD32(s3+22940);
    goto L_08834460;
L_08834460:;
    s2 = s1 << 2;
    v0 = s2 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08834480; }
    goto L_08834474;
L_08834474:;
    v0 = LD32(s0+4);
    cnd_ = v0 == s4;
    a0 = s0 + 0;
    if (cnd_) { goto L_088344AC; }
    goto L_08834480;
L_08834480:;
    v0 = s1 < 0x11u;
    cnd_ = v0 != 0;
    v0 = LD32(s3+22940);
    if (cnd_) { goto L_08834460; }
    goto L_0883448C;
L_0883448C:;
    sp = sp + 32;
    return;
L_088344AC:;
    func_0883465C(a0, t1, t2, t3);
    goto L_088344B4;
L_088344B4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088344BC;
L_088344BC:;
    v0 = LD32(s3+22940);
    v0 = s2 + v0;
    ST32(v0, 0);
    goto L_08834480;
}

/* 088344CC */
u32 func_088344CC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088344CC:;
    sp = sp - 32;
    s4 = a1 + 0;
    a1 = 1;
    s3 = a2 + 0;
    s2 = a0 + 0;
    v0 = func_08834710(a0, a1);
    goto L_088344FC;
L_088344FC:;
    s1 = v0 + 0;
    cnd_ = s1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08834514; }
    goto L_08834508;
L_08834508:;
    v0 = LD32(s1);
    cnd_ = v0 == 0;
    a0 = 20;
    if (cnd_) { goto L_08834534; }
    goto L_08834514;
L_08834514:;
    sp = sp + 32;
    return v0;
L_08834534:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883453C;
L_0883453C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    a2 = s4 + 0;
    a3 = s3 + 0;
    func_088345D8(a0, a1, a2, a3, 0, 0, 0);
    goto L_08834554;
L_08834554:;
    ST32(s1, s0);
    v0 = s0 + 0;
    goto L_08834514;
}

/* 08834560 */
u32 func_08834560(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08834560:;
    sp = sp - 16;
    a1 = 0 + 0;
    v0 = func_08834710(a0, a1);
    goto L_08834570;
L_08834570:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0883457C; }
    goto L_08834578;
L_08834578:;
    v1 = LD32(v0);
    goto L_0883457C;
L_0883457C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 0883458C */
u32 func_0883458C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883458C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a1 + 0;
    v0 = func_08834560(a0);
    goto L_088345A4;
L_088345A4:;
    v1 = D_08AD3EC4 - (16068);
    a0 = v0 + 0;
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = v1 + 16068;
    if (cnd_) { goto L_088345C4; }
    goto L_088345B8;
L_088345B8:;
    v0 = func_088346E0(a0, a1);
    goto L_088345C0;
L_088345C0:;
    v1 = v0 + 0;
    goto L_088345C4;
L_088345C4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 088345D8 */
void func_088345D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088345D8:;
    sp = sp - 16;
    v0 = D_08B259A0 - (22944);
    s2 = a0 + 0;
    s1 = a2 + 0;
    s0 = a3 + 0;
    v1 = LD32(v0+22944);
    ST32(a0, a1);
    a0 = a2 << 2;
    ST32(s2+4, v1);
    ST32(s2+16, a2);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08834614;
L_08834614:;
    ST32(s2+8, v0);
    a0 = s0 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08834620;
L_08834620:;
    ST32(s2+12, v0);
    cnd_ = s1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08834644; }
    goto L_0883462C;
L_0883462C:;
    a0 = LD32(s2+8);
    goto L_08834630;
L_08834630:;
    v1 = v1 + 1;
    v0 = v1 < s1;
    ST32(a0, 0);
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_08834630; }
    goto L_08834644;
L_08834644:;
    sp = sp + 16;
    return;
}

/* 0883465C */
void func_0883465C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883465C:;
    sp = sp - 16;
    v1 = LD32(a0+8);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08834688; }
    goto L_08834674;
L_08834674:;
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088346A8; }
    goto L_08834680;
L_08834680:;
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08834698; }
    goto L_08834688;
L_08834688:;
    goto L_0883468C;
L_0883468C:;
    sp = sp + 16;
    return;
L_08834698:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088346A0;
L_088346A0:;
    goto L_0883468C;
L_088346A8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088346B0;
L_088346B0:;
    v1 = LD32(s0+8);
    goto L_08834680;
}

/* 088346B8 */
void func_088346B8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088346B8:;
    v0 = LD32(a0+8);
    a1 = a1 << 2;
    a1 = a1 + v0;
    v1 = LD32(a1);
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088346D8; }
    goto L_088346D0;
L_088346D0:;
    ST32(a1, a2);
    v0 = 1;
    goto L_088346D8;
L_088346D8:;
    return;
}

/* 088346E0 */
static u32 func_088346E0__orig(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088346E0:;
    cnd_ = (s32)a1 < 0;
    if (cnd_) { goto L_08834708; }
    goto L_088346E8;
L_088346E8:;
    v0 = LD32(a0+16);
    v0 = a1 < v0;
    cnd_ = v0 == 0;
    v1 = a1 << 2;
    if (cnd_) { goto L_08834708; }
    goto L_088346F8;
L_088346F8:;
    v0 = LD32(a0+8);
    v0 = v1 + v0;
    v0 = LD32(v0);
    return v0;
L_08834708:;
    v0 = 0 + 0;
    return v0;
}

u32 func_088346E0(u32 a0, u32 a1)
{
    u32 r_ = 0;
    if (rs_text_get(a0, a1, &r_)) return r_;   /* native hook (tools/dc/hooks.py) */
    return func_088346E0__orig(a0, a1);
}

/* 08834710 */
u32 func_08834710(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_08834710:;
    v1 = 0xf0f00000u;
    v1 = v1 | 0xf0f1;
    { u64 p_ = (u64)a0 * v1; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    v0 = D_08B2599C - (22940);
    a2 = LD32(v0+22940);
    a1 = a1 & 0xff;
    t0 = 0 + 0;
    v1 = hi;
    v1 = v1 >> 4;
    v0 = v1 << 4;
    v0 = v0 + v1;
    cnd_ = a2 == 0;
    v1 = a0 - v0;
    if (cnd_) { goto L_08834788; }
    goto L_08834744;
L_08834744:;
    t1 = a2 + 0;
    t2 = 17;
    a2 = v1 + 0;
    v0 = a2 << 2;
    goto L_08834754;
L_08834754:;
    v0 = v0 + t1;
    a3 = LD32(v0);
    cnd_ = a3 == 0;
    t0 = v0 + 0;
    if (cnd_) { goto L_08834790; }
    goto L_08834764;
L_08834764:;
    v0 = LD32(a3);
    cnd_ = v0 == a0;
    if (cnd_) { goto L_08834788; }
    goto L_08834770;
L_08834770:;
    a2 = a2 + 1;
    goto L_08834774;
L_08834774:;
    v0 = a2 ^ t2;
    if (v0 == 0) a2 = 0;
    cnd_ = v1 != a2;
    if (cnd_) { v0 = a2 << 2; goto L_08834754; }
    goto L_08834784;
L_08834784:;
    t0 = 0 + 0;
    goto L_08834788;
L_08834788:;
    v0 = t0 + 0;
    return v0;
L_08834790:;
    cnd_ = a1 == 0;
    if (cnd_) { a2 = a2 + 1; goto L_08834774; }
    goto L_08834798;
L_08834798:;
    goto L_08834788;
}

/* 088347A0 */
rv_t func_088347A0(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr4 = v[4], vr5 = v[5], vr6 = v[6];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088347A0:;
    f4 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(a0));
    f1 = BITSF(LD32(a0+4));
    f5 = BITSF(LD32(a2+8));
    f2 = BITSF(LD32(a2));
    f3 = BITSF(LD32(a2+4));
    f5 = f5 - f4;
    f2 = f2 - f0;
    f3 = f3 - f1;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;v[7]=d3;}
    t0 = FBITS(f5);
    a0 = FBITS(f2);
    a2 = FBITS(f3);
    v0 = LD32(a1);
    t1 = LD32(a1+8);
    {vr0=BITSF(v0);}
    {vr4=BITSF(a0);}
    v1 = LD32(a1+4);
    {vr5=BITSF(a2);}
    {vr1=BITSF(v1);}
    {vr6=BITSF(t0);}
    {vr2=BITSF(t1);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v0=FBITS(vr4);}
    f0 = BITSF(v0);
    f4 = BITSF(v0);
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;v[7]=d3;}
    f1 = f0 * f0;
    f0 = BITSF(0);
    {vr4=BITSF(a0);}
    {vr5=BITSF(a2);}
    fcc = FCMP(f4, f0, 12);
    {vr6=BITSF(t0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    sp = sp - 16;
    ST32(sp, FBITS(f2));
    f12 = f12 * f12;
    f1 = f0 - f1;
    ST32(sp+4, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f5));
    if (cnd_) { goto L_0883485C; }
    goto L_0883484C;
L_0883484C:;
    fcc = FCMP(f12, f0, 12);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_08834890; }
    goto L_0883485C;
L_0883485C:;
    fcc = FCMP(f12, f1, 12);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_08834890; }
    goto L_0883486C;
L_0883486C:;
    fcc = FCMP(f12, f0, 12);
    v0 = 1;
    cnd_ = a3 == 0;
    f0 = f12 - f1;
    if (cnd_) { goto L_08834890; }
    goto L_0883487C;
L_0883487C:;
    f0 = sqrtf(f0);
    cnd_ = !fcc;
    f0 = f4 - f0;
    if (cnd_) { goto L_08834898; }
    goto L_08834888;
L_08834888:;
    ST32(a3, FBITS(f0));
    goto L_0883488C;
L_0883488C:;
    v0 = 1;
    goto L_08834890;
L_08834890:;
    sp = sp + 16;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;return (rv_t){ v0, v1, f0 }; }
L_08834898:;
    ST32(a3, 0);
    goto L_0883488C;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;
}

/* 088348A0 */
rv_t func_088348A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19];
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_088348A0:;
    f13 = BITSF(LD32(a2+8));
    f11 = BITSF(LD32(a2));
    f12 = BITSF(LD32(a2+4));
    f8 = BITSF(LD32(a3+8));
    f9 = BITSF(LD32(t0+8));
    f4 = BITSF(LD32(a3));
    f5 = BITSF(LD32(a3+4));
    f6 = BITSF(LD32(t0));
    f7 = BITSF(LD32(t0+4));
    f4 = f4 - f11;
    f5 = f5 - f12;
    f8 = f8 - f13;
    f6 = f6 - f11;
    f7 = f7 - f12;
    f9 = f9 - f13;
    a3 = LD32(a1+8);
    a2 = LD32(a1);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;v[15]=d3;}
    a1 = LD32(a1+4);
    v0 = FBITS(f4);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;v[11]=d3;}
    {vr12=BITSF(v0);}
    t0 = FBITS(f6);
    v0 = FBITS(f7);
    {vr8=BITSF(t0);}
    {vr0=BITSF(a2);}
    {vr9=BITSF(v0);}
    t0 = FBITS(f5);
    v0 = FBITS(f9);
    {vr13=BITSF(t0);}
    {vr10=BITSF(v0);}
    t0 = FBITS(f8);
    {vr1=BITSF(a1);}
    {vr14=BITSF(t0);}
    {vr2=BITSF(a3);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {t0=FBITS(vr4);}
    {v0=FBITS(vr6);}
    f1 = BITSF(t0);
    f3 = BITSF(v0);
    f2 = BITSF(t0);
    {t0=FBITS(vr5);}
    f0 = BITSF(t0);
    v0 = FBITS(f1);
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    f1 = BITSF(t0);
    {vr0=BITSF(v0);}
    t0 = FBITS(f3);
    v0 = FBITS(f0);
    {vr1=BITSF(v0);}
    {vr2=BITSF(t0);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr12=sum;}
    {v0=FBITS(vr12);}
    f10 = BITSF(v0);
    v0 = D_08AEB778 - (-18568);
    f0 = BITSF(LD32(v0-18568));
    sp = sp - 96;
    ST32(sp, FBITS(f4));
    fcc = FCMP(f0, f10, 12);
    f14 = f10;
    ST32(sp+4, FBITS(f5));
    ST32(sp+8, FBITS(f8));
    ST32(sp+16, FBITS(f6));
    ST32(sp+20, FBITS(f7));
    ST32(sp+24, FBITS(f9));
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f3));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f1));
    cnd_ = !fcc;
    ST32(sp+40, FBITS(f3));
    if (cnd_) { goto L_088349D8; }
    goto L_088349C0;
L_088349C0:;
    v0 = D_08AEB774 - (-18572);
    f0 = BITSF(LD32(v0-18572));
    fcc = FCMP(f10, f0, 12);
    cnd_ = fcc;
    v0 = D_08AEB77C - (-18564);
    if (cnd_) { goto L_08834B28; }
    goto L_088349D8;
L_088349D8:;
    v0 = D_08AEB780 - (-18560);
    f6 = BITSF(LD32(v0-18560));
    f4 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(a0));
    f10 = f6 / f14;
    f3 = BITSF(LD32(a0+4));
    v0 = LD32(sp+32);
    v1 = LD32(sp+36);
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr4=BITSF(v0);}
    v0 = LD32(sp+40);
    {vr5=BITSF(v1);}
    {vr6=BITSF(v0);}
    f7 = BITSF(0);
    f2 = f2 - f11;
    f3 = f3 - f12;
    f4 = f4 - f13;
    v0 = FBITS(f2);
    v1 = FBITS(f3);
    a0 = FBITS(f4);
    {vr0=BITSF(v0);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {t0=FBITS(vr0);}
    f0 = BITSF(t0);
    ST32(sp+48, FBITS(f2));
    f5 = f0 * f10;
    ST32(sp+52, FBITS(f3));
    fcc = FCMP(f5, f7, 12);
    cnd_ = fcc;
    ST32(sp+56, FBITS(f4));
    if (cnd_) { goto L_08834B24; }
    goto L_08834A60;
L_08834A60:;
    fcc = FCMP(f6, f5, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = D_08AEB77C - (-18564); goto L_08834B28; }
    goto L_08834A70;
L_08834A70:;
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;v[11]=d3;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr8=BITSF(v0);}
    v0 = LD32(sp);
    {vr9=BITSF(v1);}
    {vr0=BITSF(v0);}
    v1 = LD32(sp+4);
    v0 = LD32(sp+8);
    {vr1=BITSF(v1);}
    {vr10=BITSF(a0);}
    {vr2=BITSF(v0);}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {v0=FBITS(vr6);}
    f4 = BITSF(v0);
    {v0=FBITS(vr5);}
    f0 = BITSF(v0);
    {t0=FBITS(vr4);}
    f2 = BITSF(v0);
    v1 = FBITS(f0);
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    v0 = FBITS(f4);
    {vr4=BITSF(a2);}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr5=BITSF(a1);}
    {vr0=BITSF(t0);}
    {vr6=BITSF(a3);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {a1=FBITS(vr4);}
    f0 = BITSF(a1);
    ST32(sp+80, t0);
    f0 = f0 * f10;
    ST32(sp+84, FBITS(f2));
    fcc = FCMP(f0, f7, 12);
    ST32(sp+88, FBITS(f4));
    ST32(sp+64, t0);
    ST32(sp+68, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+72, FBITS(f4));
    if (cnd_) { goto L_08834B24; }
    goto L_08834B10;
L_08834B10:;
    f0 = f5 + f0;
    fcc = FCMP(f6, f0, 12);
    cnd_ = !fcc;
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    if (cnd_) { goto L_08834B34; }
    goto L_08834B24;
L_08834B24:;
    v0 = D_08AEB77C - (-18564);
    goto L_08834B28;
L_08834B28:;
    f0 = BITSF(LD32(v0-18564));
    goto L_08834B2C;
L_08834B2C:;
    sp = sp + 96;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;return (rv_t){ v0, v1, f0 }; }
L_08834B34:;
    fcc = FCMP(f10, f7, 12);
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr4=BITSF(t0);}
    {vr5=BITSF(v1);}
    v1 = LD32(sp+20);
    {vr6=BITSF(v0);}
    v0 = LD32(sp+16);
    {vr0=BITSF(v0);}
    v0 = LD32(sp+24);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {t0=FBITS(vr0);}
    f0 = BITSF(t0);
    cnd_ = !fcc;
    f0 = f0 * f10;
    if (cnd_) { goto L_08834B80; }
    goto L_08834B78;
L_08834B78:;
    ST8(t1, 0);
    goto L_08834B2C;
L_08834B80:;
    v0 = 1;
    ST8(t1, v0);
    goto L_08834B2C;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;
}

/* 08834B8C */
rv_t func_08834B8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2)
{
    u32 v0 = 0, v1 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08834B8C:;
    f4 = BITSF(LD32(a2+4));
    t7 = D_08AEB794 - (-18540);
    f3 = BITSF(LD32(a2+16));
    f5 = BITSF(LD32(a2+12));
    f6 = BITSF(LD32(a2+20));
    f0 = BITSF(LD32(a2));
    f2 = BITSF(LD32(a2+8));
    f1 = BITSF(LD32(t7-18540));
    sp = sp - 80;
    v0 = D_08AEB798 - (-18536);
    ST32(sp+16, FBITS(f4));
    v1 = D_08AEB79C - (-18532);
    t6 = 1;
    f4 = BITSF(LD32(v0-18536));
    v0 = D_08AEB7A0 - (-18528);
    ST32(sp+8, FBITS(f3));
    t5 = 0 + 0;
    t4 = a1 + 0;
    ST32(sp+20, FBITS(f5));
    a2 = sp + 0;
    t3 = a0 + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f2));
    ST32(sp+24, FBITS(f6));
    ST32(sp+40, FBITS(f1));
    ST32(sp+32, FBITS(f1));
    ST32(sp+36, FBITS(f1));
    f3 = BITSF(LD32(v1-18532));
    f5 = BITSF(LD32(v0-18528));
    goto L_08834C00;
L_08834C00:;
    f0 = BITSF(LD32(t3));
    f1 = BITSF(LD32(a2));
    v0 = 0 + 0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    f2 = f1 - f0;
    if (cnd_) { goto L_08834E0C; }
    goto L_08834C1C;
L_08834C1C:;
    f0 = BITSF(LD32(t4));
    t6 = 0 + 0;
    fcc = FCMP(f0, f4, 14);
    goto L_08834C2C;
L_08834C2C:;
    cnd_ = fcc;
    if (cnd_) { goto L_08834CD4; }
    goto L_08834C34;
L_08834C34:;
    f0 = f3 / f0;
    ST32(a2+48, FBITS(f1));
    f0 = f2 * f0;
    ST32(a2+32, FBITS(f0));
    goto L_08834C44;
L_08834C44:;
    t5 = t5 + 1;
    v0 = (s32)t5 < 3;
    t3 = t3 + 4;
    a2 = a2 + 4;
    cnd_ = v0 != 0;
    t4 = t4 + 4;
    if (cnd_) { goto L_08834C00; }
    goto L_08834C5C;
L_08834C5C:;
    cnd_ = t6 == 0;
    f1 = BITSF(LD32(sp+36));
    if (cnd_) { goto L_08834CDC; }
    goto L_08834C64;
L_08834C64:;
    cnd_ = t0 == 0;
    if (cnd_) { goto L_08834C84; }
    goto L_08834C6C;
L_08834C6C:;
    f0 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(a0));
    f2 = BITSF(LD32(a0+4));
    ST32(t0+8, FBITS(f0));
    ST32(t0, FBITS(f1));
    ST32(t0+4, FBITS(f2));
    goto L_08834C84;
L_08834C84:;
    cnd_ = a3 != 0;
    if (cnd_) { ST32(a3, 0); goto L_08834C8C; }
    goto L_08834C8C;
L_08834C8C:;
    cnd_ = t1 == 0;
    v0 = 1;
    if (cnd_) { goto L_08834C98; }
    goto L_08834C94;
L_08834C94:;
    ST8(t1, v0);
    goto L_08834C98;
L_08834C98:;
    cnd_ = t2 == 0;
    v0 = 1;
    if (cnd_) { goto L_08834CD4; }
    goto L_08834CA0;
L_08834CA0:;
    f0 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    ST32(t2+8, FBITS(f0));
    ST32(t2, FBITS(f1));
    ST32(t2+4, FBITS(f2));
    ST32(sp+64, FBITS(f1));
    ST32(sp+68, FBITS(f2));
    ST32(sp+72, FBITS(f0));
    goto L_08834CD0;
L_08834CD0:;
    v0 = 1;
    goto L_08834CD4;
L_08834CD4:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08834CDC:;
    f0 = BITSF(LD32(sp+32));
    t4 = 0 + 0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    t6 = sp + 32;
    if (cnd_) { goto L_08834CF8; }
    goto L_08834CF4;
L_08834CF4:;
    t4 = 1;
    goto L_08834CF8;
L_08834CF8:;
    v0 = t4 << 2;
    v0 = t6 + v0;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+40));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { t4 = 2; goto L_08834D18; }
    goto L_08834D18;
L_08834D18:;
    v0 = t4 << 2;
    t5 = t6 + v0;
    a2 = 0 + 0;
    t3 = sp + 0;
    goto L_08834D28;
L_08834D28:;
    v0 = a2 << 2;
    v1 = v0 + a1;
    cnd_ = a2 == t4;
    v0 = v0 + a0;
    if (cnd_) { goto L_08834D74; }
    goto L_08834D38;
L_08834D38:;
    f3 = BITSF(LD32(v1));
    f0 = BITSF(LD32(t5));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(t3));
    f0 = f0 * f3;
    f1 = f1 + f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = fcc;
    ST32(t3+48, FBITS(f1));
    if (cnd_) { goto L_08834E04; }
    goto L_08834D60;
L_08834D60:;
    f0 = BITSF(LD32(t3+16));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_08834CD4; }
    goto L_08834D74;
L_08834D74:;
    a2 = a2 + 1;
    v0 = (s32)a2 < 3;
    cnd_ = v0 != 0;
    t3 = t3 + 4;
    if (cnd_) { goto L_08834D28; }
    goto L_08834D84;
L_08834D84:;
    cnd_ = t0 == 0;
    f0 = BITSF(LD32(sp+48));
    if (cnd_) { goto L_08834DA0; }
    goto L_08834D8C;
L_08834D8C:;
    f1 = BITSF(LD32(sp+56));
    ST32(t0, FBITS(f0));
    f0 = BITSF(LD32(sp+52));
    ST32(t0+8, FBITS(f1));
    ST32(t0+4, FBITS(f0));
    goto L_08834DA0;
L_08834DA0:;
    cnd_ = a3 == 0;
    v0 = t4 << 2;
    if (cnd_) { goto L_08834DB4; }
    goto L_08834DA8;
L_08834DA8:;
    v0 = t6 + v0;
    f0 = BITSF(LD32(v0));
    ST32(a3, FBITS(f0));
    goto L_08834DB4;
L_08834DB4:;
    cnd_ = t1 != 0;
    if (cnd_) { ST8(t1, 0); goto L_08834DBC; }
    goto L_08834DBC;
L_08834DBC:;
    cnd_ = t2 == 0;
    v1 = t4 << 2;
    if (cnd_) { goto L_08834CD0; }
    goto L_08834DC4;
L_08834DC4:;
    f0 = BITSF(0);
    v0 = v1 + a1;
    ST32(t2+8, FBITS(f0));
    ST32(t2+4, FBITS(f0));
    ST32(t2, FBITS(f0));
    f1 = BITSF(LD32(v0));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v1 + t2;
    if (cnd_) { goto L_08834DF8; }
    goto L_08834DEC;
L_08834DEC:;
    f0 = BITSF(LD32(t7-18540));
    goto L_08834DF0;
L_08834DF0:;
    ST32(v0, FBITS(f0));
    goto L_08834CD0;
L_08834DF8:;
    v1 = D_08AEB79C - (-18532);
    f0 = BITSF(LD32(v1-18532));
    goto L_08834DF0;
L_08834E04:;
    v0 = 0 + 0;
    goto L_08834CD4;
L_08834E0C:;
    f1 = BITSF(LD32(a2+16));
    v0 = 0 + 0;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    f2 = f1 - f0;
    if (cnd_) { goto L_08834C44; }
    goto L_08834E24;
L_08834E24:;
    f0 = BITSF(LD32(t4));
    fcc = FCMP(f5, f0, 14);
    t6 = 0 + 0;
    goto L_08834C2C;
}

/* 08834E34 */
rv_t func_08834E34(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08834E34:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08834E4C;
L_08834E4C:;
    v1 = D_08B259A8 - (22952);
    s1 = v1 + 22952;
    a0 = s0 + 0;
    a1 = s1 + 0;
    f0 = func_08877AB4(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08834E60;
L_08834E60:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    v0 = s1 + 0;
    if (cnd_) { goto L_08834E70; }
    goto L_08834E6C;
L_08834E6C:;
    ST8(s1+32, 0);
    goto L_08834E70;
L_08834E70:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08834E84 */
rv_t func_08834E84(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08834E84:;
    sp = sp - 16;
    v1 = D_08B259D0 - (22992);
    s1 = D_08B259A8 - (22952);
    s1 = s1 + 22952;
    s0 = a0 + 0;
    v0 = LD32(v1+22992);
    f12 = BITSF(LD32(a0+40));
    a0 = s1 + 0;
    v0 = v0 + 1;
    ST32(v1+22992, v0);
    func_08834F74(a0, f12);
    goto L_08834EBC;
L_08834EBC:;
    a0 = s0 + 0;
    a2 = LD32(s0+48);
    a3 = LD32(s0+52);
    a1 = s1 + 0;
    v1 = D_08B15AAC - (23212);
    v0 = D_08B259D4 - (22996);
    ST32(v1+23212, a3);
    ST32(v0+22996, a2);
    { rv_t r_ = func_088B84B0(a0, a1, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08834EE0;
L_08834EE0:;
    v1 = v0 + 0;
    ST8(s1+32, v1);
    v0 = s1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08834F00 */
u32 func_08834F00(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08834F00:;
    sp = sp - 16;
    v1 = D_08B259D0 - (22992);
    s1 = D_08B259A8 - (22952);
    s1 = s1 + 22952;
    s0 = a0 + 0;
    v0 = LD32(v1+22992);
    f12 = BITSF(LD32(a0+40));
    a0 = s1 + 0;
    v0 = v0 + 1;
    ST32(v1+22992, v0);
    func_08834F74(a0, f12);
    goto L_08834F38;
L_08834F38:;
    a0 = s0 + 0;
    a2 = LD32(s0+48);
    a3 = LD32(s0+52);
    a1 = s1 + 0;
    v0 = D_08B259D4 - (22996);
    v1 = D_08B15AAC - (23212);
    ST32(v0+22996, a2);
    ST32(v1+23212, a3);
    f0 = func_08877AB4(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08834F5C;
L_08834F5C:;
    v0 = s1 + 0;
    sp = sp + 16;
    return v0;
}

/* 08834F74 */
void func_08834F74(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_08834F74:;
    ST32(a0, FBITS(f12));
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f2 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    v0 = (u32)-1;
    v1 = a0 + 20;
    ST32(v1+8, FBITS(f0));
    ST16(a0+18, v0);
    ST32(a0+20, FBITS(f2));
    ST32(v1+4, FBITS(f1));
    ST32(a0+4, 0);
    ST32(a0+8, v0);
    ST32(a0+12, v0);
    ST16(a0+16, 0);
    ST8(a0+32, 0);
    ST8(a0+33, 0);
    return;
}

/* 08834FC0 */
void func_08834FC0(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_08834FC0:;
    f0 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    ST32(a0+8, FBITS(f0));
    v0 = (u32)-1;
    v1 = a0 + 12;
    ST32(a0+4, FBITS(f1));
    ST32(a0, FBITS(f2));
    f0 = BITSF(LD32(a2+8));
    f2 = BITSF(LD32(a2));
    f1 = BITSF(LD32(a2+4));
    ST32(a0+52, v0);
    v0 = 8;
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(a0+12, FBITS(f2));
    ST32(a0+36, a3);
    ST32(a0+40, FBITS(f12));
    ST32(a0+48, v0);
    ST32(a0+44, 0);
    return;
}

/* 08835014 */
void func_08835014(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_08835014:;
    f0 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    ST32(a0+8, FBITS(f0));
    v0 = (u32)-1;
    v1 = a0 + 12;
    ST32(a0+4, FBITS(f1));
    t0 = t0 & 0x1;
    ST32(a0, FBITS(f2));
    f0 = BITSF(LD32(a2+8));
    f2 = BITSF(LD32(a2));
    f1 = BITSF(LD32(a2+4));
    ST32(a0+52, v0);
    v0 = 8;
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(a0+12, FBITS(f2));
    ST32(a0+36, a3);
    ST32(a0+40, FBITS(f12));
    ST32(a0+44, t0);
    ST32(a0+48, v0);
    return;
}

/* 0883506C */
void func_0883506C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_0883506C:;
    f0 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    ST32(a0+8, FBITS(f0));
    v1 = a0 + 12;
    t0 = t0 & 0x1;
    ST32(a0+4, FBITS(f1));
    v0 = (u32)-1;
    ST32(a0, FBITS(f2));
    f0 = BITSF(LD32(a2+8));
    f2 = BITSF(LD32(a2));
    f1 = BITSF(LD32(a2+4));
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(a0+52, v0);
    ST32(a0+12, FBITS(f2));
    ST32(a0+36, a3);
    ST32(a0+40, FBITS(f12));
    ST32(a0+44, t0);
    ST32(a0+48, t1);
    return;
}

/* 088350C0 */
void func_088350C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, float f12)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_088350C0:;
    f0 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    ST32(a0+8, FBITS(f0));
    v0 = a0 + 12;
    t0 = t0 & 0x1;
    ST32(a0+4, FBITS(f1));
    ST32(a0, FBITS(f2));
    f0 = BITSF(LD32(a2+8));
    f2 = BITSF(LD32(a2));
    f1 = BITSF(LD32(a2+4));
    ST32(v0+8, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    ST32(a0+52, t2);
    ST32(a0+12, FBITS(f2));
    ST32(a0+36, a3);
    ST32(a0+40, FBITS(f12));
    ST32(a0+44, t0);
    ST32(a0+48, t1);
    return;
}

/* 08835110 */
u32 func_08835110(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08835110:;
    v0 = a0 ^ 0x1;
    a1 = a1 ^ 0xffff;
    a1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 16;
    a0 = D_08B259A8 - (22952);
    a1 = a1 & v0;
    cnd_ = a1 != 0;
    a0 = a0 + 22952;
    if (cnd_) { goto L_08835144; }
    goto L_08835138;
L_08835138:;
    goto L_0883513C;
L_0883513C:;
    sp = sp + 16;
    return v0;
L_08835144:;
    func_08AA692C();
    goto L_0883514C;
L_0883514C:;
    goto L_0883513C;
}

/* 08835154 */
rv_t func_08835154(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08835154:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    v0 = func_08835110(a0, a1);
    goto L_08835168;
L_08835168:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08835174 */
void func_08835174(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_08835174:;
    a1 = (u32)-1;
    v0 = a0 + 0;
    v1 = 1;
    goto L_08835180;
L_08835180:;
    v1 = v1 - 1;
    ST32(v0, a1);
    ST32(v0+8, a1);
    ST32(v0+16, a1);
    cnd_ = (s32)v1 >= 0;
    v0 = v0 + 4;
    if (cnd_) { goto L_08835180; }
    goto L_08835198;
L_08835198:;
    ST32(a0+32, 0);
    ST32(a0+24, 0);
    ST32(a0+28, 0);
    return;
}

/* 088351A8 */
void func_088351A8(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088351A8:;
    sp = sp - 16;
    a0 = 18000;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088351BC;
L_088351BC:;
    v1 = D_08B259D8 - (23000);
    a0 = 16;
    ST32(v1+23000, v0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088351CC;
L_088351CC:;
    s0 = v0 + 0;
    v0 = D_08AF0F80 - (3968);
    v0 = v0 + 3968;
    ST32(s0, v0);
    a0 = 2000;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088351E4;
L_088351E4:;
    ST32(s0+4, v0);
    v1 = 500;
    a0 = 0 + 0;
    ST32(s0+12, 0);
    ST32(s0+8, v1);
    v1 = v0 + 0;
    goto L_088351FC;
L_088351FC:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < 500;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088351FC; }
    goto L_08835210;
L_08835210:;
    v0 = D_08B259DC - (23004);
    a0 = 2000;
    ST32(v0+23004, s0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08835220;
L_08835220:;
    v1 = D_08B259E0 - (23008);
    ST32(v1+23008, v0);
    v1 = 499;
    goto L_0883522C;
L_0883522C:;
    v1 = v1 - 1;
    ST32(v0, 0);
    cnd_ = (s32)v1 >= 0;
    v0 = v0 + 4;
    if (cnd_) { goto L_0883522C; }
    goto L_0883523C;
L_0883523C:;
    sp = sp + 16;
    return;
}

/* 0883524C */
void func_0883524C(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883524C:;
    sp = sp - 32;
    s0 = D_08B259D8 - (23000);
    v0 = LD32(s0+23000);
    s3 = D_08B259E4 - (23012);
    a0 = v0 + 0;
    s2 = D_08B259E0 - (23008);
    s1 = D_08B259DC - (23004);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08835310; }
    goto L_08835280;
L_08835280:;
    v0 = LD32(s1+23004);
    goto L_08835284;
L_08835284:;
    ST32(s0+23000, 0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088352F8; }
    goto L_08835290;
L_08835290:;
    v0 = LD32(s2+23008);
    goto L_08835294;
L_08835294:;
    ST32(s1+23004, 0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088352E8; }
    goto L_088352A0;
L_088352A0:;
    v0 = LD32(s3+23012);
    goto L_088352A4;
L_088352A4:;
    ST32(s2+23008, 0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088352D8; }
    goto L_088352B0;
L_088352B0:;
    ST32(s3+23012, 0);
    goto L_088352B4;
L_088352B4:;
    v0 = D_08B259E8 - (23016);
    ST32(v0+23016, 0);
    sp = sp + 32;
    return;
L_088352D8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088352E0;
L_088352E0:;
    ST32(s3+23012, 0);
    goto L_088352B4;
L_088352E8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088352F0;
L_088352F0:;
    v0 = LD32(s3+23012);
    goto L_088352A4;
L_088352F8:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08835308;
L_08835308:;
    v0 = LD32(s2+23008);
    goto L_08835294;
L_08835310:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08835318;
L_08835318:;
    v0 = LD32(s1+23004);
    goto L_08835284;
}

/* 08835320 */
void func_08835320(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08835320:;
    sp = sp - 16;
    v0 = D_08B259DC - (23004);
    a0 = 0 + 0;
    a1 = LD32(v0+23004);
    v0 = LD32(a1+8);
    cnd_ = (s32)v0 <= 0;
    ST32(a1+12, 0);
    if (cnd_) { goto L_08835360; }
    goto L_08835344;
L_08835344:;
    v1 = LD32(a1+4);
    goto L_08835348;
L_08835348:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = LD32(a1+8);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08835348; }
    goto L_08835360;
L_08835360:;
    v0 = D_08B259E0 - (23008);
    v0 = LD32(v0+23008);
    v1 = 499;
    goto L_0883536C;
L_0883536C:;
    v1 = v1 - 1;
    ST32(v0, 0);
    cnd_ = (s32)v1 >= 0;
    v0 = v0 + 4;
    if (cnd_) { goto L_0883536C; }
    goto L_0883537C;
L_0883537C:;
    s0 = D_08B259E4 - (23012);
    a0 = LD32(s0+23012);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088353A8; }
    goto L_0883538C;
L_0883538C:;
    ST32(s0+23012, 0);
    goto L_08835390;
L_08835390:;
    v0 = D_08B259E8 - (23016);
    ST32(v0+23016, 0);
    sp = sp + 16;
    return;
L_088353A8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088353B0;
L_088353B0:;
    ST32(s0+23012, 0);
    goto L_08835390;
}

/* 088353B8 */
u64 func_088353B8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_088353B8:;
    a1 = a0 - 1000;
    v0 = (u32)-1;
    a2 = a1 < 0x1f4u;
    cnd_ = a0 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08835400; }
    goto L_088353CC;
L_088353CC:;
    cnd_ = a2 == 0;
    a3 = a1 << 2;
    if (cnd_) { goto L_08835400; }
    goto L_088353D4;
L_088353D4:;
    v0 = D_08B259E0 - (23008);
    v1 = LD32(v0+23008);
    a0 = a1 << 3;
    a0 = a0 + a1;
    v1 = a3 + v1;
    v0 = LD32(v1);
    cnd_ = v0 == 0;
    a0 = a0 << 2;
    if (cnd_) { goto L_08835408; }
    goto L_088353F4;
L_088353F4:;
    v0 = D_08B259D8 - (23000);
    v1 = LD32(v0+23000);
    v1 = v1 + a0;
    goto L_08835400;
L_08835400:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08835408:;
    v1 = 0 + 0;
    goto L_08835400;
}

/* 08835410 */
u64 func_08835410(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08835410:;
    sp = sp - 16;
    v0 = (u32)-1;
    s0 = a1 + 0;
    a1 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08835450; }
    goto L_0883542C;
L_0883542C:;
    { u64 r_ = func_088353B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08835434;
L_08835434:;
    a1 = v0 + 0;
    cnd_ = a1 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0883544C; }
    goto L_08835440;
L_08835440:;
    v0 = s0 << 2;
    v0 = v0 + a1;
    v0 = LD32(v0);
    goto L_0883544C;
L_0883544C:;
    a1 = v0 + 0;
    goto L_08835450;
L_08835450:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08835464 */
u32 func_08835464(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08835464:;
    sp = sp - 16;
    v0 = D_08B259DC - (23004);
    a0 = LD32(v0+23004);
    v1 = LD32(a0+12);
    v0 = LD32(a0+8);
    a2 = v1 + 1;
    t0 = v1 << 2;
    v1 = (s32)v1 < (s32)v0;
    cnd_ = v1 != 0;
    a1 = (u32)-1;
    if (cnd_) { goto L_088354A8; }
    goto L_08835494;
L_08835494:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
L_088354A8:;
    a1 = LD32(a0+4);
    ST32(a0+12, a2);
    v0 = D_08B259E0 - (23008);
    a1 = t0 + a1;
    s0 = LD32(a1);
    a2 = LD32(v0+23008);
    v1 = D_08B263B8 - (25528);
    a3 = LD32(v1+25528);
    v0 = D_08B259D8 - (23000);
    a0 = LD32(v0+23000);
    v0 = s0 << 2;
    v0 = v0 + a2;
    v1 = s0 << 3;
    v1 = v1 + s0;
    ST32(v0, a3);
    v1 = v1 << 2;
    a0 = a0 + v1;
    func_08835174(a0);
    goto L_088354F0;
L_088354F0:;
    a1 = s0 + 1000;
    goto L_08835494;
}

/* 088354F8 */
u32 func_088354F8(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088354F8:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08835464();
    goto L_0883550C;
L_0883550C:;
    v1 = D_08B259E4 - (23012);
    a0 = LD32(v1+23012);
    s0 = s0 << 2;
    s0 = s0 + a0;
    ST32(s0, v0);
    sp = sp + 16;
    return v0;
}

/* 08835530 */
void func_08835530(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08835530:;
    sp = sp - 16;
    s1 = D_08B259E4 - (23012);
    v0 = LD32(s1+23012);
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0883557C; }
    goto L_08835554;
L_08835554:;
    a0 = s0 << 2;
    goto L_08835558;
L_08835558:;
    v0 = D_08B259E8 - (23016);
    ST32(v0+23016, s0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08835564;
L_08835564:;
    ST32(s1+23012, v0);
    sp = sp + 16;
    return;
L_0883557C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08835584;
L_08835584:;
    a0 = s0 << 2;
    goto L_08835558;
}

/* 0883558C */
u64 func_0883558C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_0883558C:;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    v1 = (u32)-1;
    if (cnd_) { goto L_088355C4; }
    goto L_08835598;
L_08835598:;
    cnd_ = (s32)a0 < 0;
    if (cnd_) { goto L_088355C4; }
    goto L_088355A0;
L_088355A0:;
    v1 = D_08B259E8 - (23016);
    v0 = LD32(v1+23016);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 == 0;
    a1 = a0 << 2;
    if (cnd_) { goto L_088355CC; }
    goto L_088355B4;
L_088355B4:;
    v1 = D_08B259E4 - (23012);
    v0 = LD32(v1+23012);
    v0 = a1 + v0;
    v1 = LD32(v0);
    goto L_088355C4;
L_088355C4:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_088355CC:;
    v1 = (u32)-1;
    goto L_088355C4;
}

/* 088355D4 */
u32 func_088355D4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088355D4:;
    sp = sp - 16;
    s1 = a2 + 0;
    s0 = a1 + 0;
    { u64 r_ = func_088353B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088355F0;
L_088355F0:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08835614; }
    goto L_088355F8;
L_088355F8:;
    v0 = LD32(v0+32);
    a0 = D_08B22E60 - (11872);
    a0 = a0 + 11872;
    a1 = v0 + 0;
    a2 = s0 + 0;
    cnd_ = v0 != 0;
    a3 = s1 + 0;
    if (cnd_) { goto L_0883562C; }
    goto L_08835614;
L_08835614:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_0883562C:;
    v0 = func_0881A99C(a0, a1, a2, a3);
    goto L_08835634;
L_08835634:;
    v1 = v0 & 0xff;
    goto L_08835614;
}

/* 0883563C */
rv_t func_0883563C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883563C:;
    sp = sp - 16;
    a2 = 0 + 0;
    a3 = LD32(a0+24);
    a1 = LD32(a0+32);
    a0 = D_08B22E60 - (11872);
    a0 = a0 + 11872;
    { rv_t r_ = func_0881A9F8(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883565C;
L_0883565C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08835668 */
void func_08835668(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19];
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08835668:;
    {u32 a_=a1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=a0+(0);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr16;float t1=vr17;float t2=vr18;float t3=vr19;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    f1 = BITSF(0);
    sp = sp - 48;
    f4 = f1;
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f2 = BITSF(v0);
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    if (cnd_) { goto L_088356EC; }
    goto L_088356A4;
L_088356A4:;
    {u32 a_=a2+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr16;float t1=vr17;float t2=vr18;float t3=vr19;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    v0 = D_08AEB7B4 - (-18508);
    f3 = BITSF(LD32(v0-18508));
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f0 = f0 / f2;
    fcc = FCMP(f0, f4, 12);
    cnd_ = fcc;
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    if (cnd_) { goto L_088356E8; }
    goto L_088356D4;
L_088356D4:;
    fcc = FCMP(f3, f0, 12);
    cnd_ = fcc;
    f4 = f3;
    if (cnd_) { goto L_088356E8; }
    goto L_088356E4;
L_088356E4:;
    f4 = f0;
    goto L_088356E8;
L_088356E8:;
    f1 = f4;
    goto L_088356EC;
L_088356EC:;
    v0 = FBITS(f1);
    {vr12=BITSF(v0);}
    {float s0=vr12;float s1=vr12;float s2=vr12;float s3=vr12;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[20];float s1=v[21];float s2=v[22];float t0=vr12;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a0 = LD32(sp+20);
    a1 = LD32(sp+24);
    v1 = LD32(sp+28);
    v0 = LD32(sp+16);
    ST32(a3+4, a0);
    ST32(a3, v0);
    ST32(a3+12, v1);
    ST32(a3+8, a1);
    sp = sp + 48;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;return; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;
}

/* 08835730 */
void func_08835730(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2];
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08835730:;
    sp = sp - 80;
    f9 = BITSF(0);
    s1 = a0 + 0;
    s0 = a3 + 0;
    f3 = BITSF(LD32(a1+8));
    f6 = BITSF(LD32(a0));
    f7 = BITSF(LD32(a0+4));
    f8 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    f3 = f3 - f8;
    f1 = f1 - f6;
    f2 = f2 - f7;
    a0 = sp + 48;
    t1 = FBITS(f3);
    v1 = FBITS(f1);
    t0 = FBITS(f2);
    {vr0=BITSF(v1);}
    {vr1=BITSF(t0);}
    {vr2=BITSF(t1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f10 = BITSF(v0);
    a1 = sp + 52;
    fcc = FCMP(f9, f0, 12);
    v0 = a2 + 0;
    ST32(sp, FBITS(f1));
    a2 = sp + 56;
    ST32(sp+4, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f3));
    if (cnd_) { goto L_08835800; }
    goto L_088357BC;
L_088357BC:;
    f2 = BITSF(LD32(sp+8));
    f1 = BITSF(LD32(sp));
    f0 = BITSF(LD32(sp+4));
    f2 = f2 * f9;
    f1 = f1 * f9;
    f0 = f0 * f9;
    f2 = f8 + f2;
    f1 = f6 + f1;
    f0 = f7 + f0;
    ST32(s0+8, FBITS(f2));
    ST32(s0, FBITS(f1));
    ST32(s0+4, FBITS(f0));
    sp = sp + 80;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return; }
L_08835800:;
    f4 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = f4 - f8;
    f2 = f2 - f6;
    f3 = f3 - f7;
    v0 = D_08AEB7B8 - (-18504);
    f5 = BITSF(LD32(v0-18504));
    {v[4]=BITSF(v1);}
    v0 = FBITS(f2);
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;v[3]=d3;}
    {v[5]=BITSF(t0);}
    {vr0=BITSF(v0);}
    {v[6]=BITSF(t1);}
    v0 = FBITS(f3);
    {vr1=BITSF(v0);}
    v0 = FBITS(f4);
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp+52, FBITS(f9));
    f1 = f0 / f10;
    ST32(sp+56, FBITS(f5));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f4));
    ST32(sp+48, FBITS(f1));
    f0 = func_08836074(a0, a1, a2);
    goto L_08835874;
L_08835874:;
    f9 = f0;
    f8 = BITSF(LD32(s1+8));
    f6 = BITSF(LD32(s1));
    f7 = BITSF(LD32(s1+4));
    goto L_088357BC;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}

/* 08835888 */
void func_08835888(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
L_08835888:;
    a2 = D_08B25AC0 - (23232);
    v0 = D_08B25AC8 - (23240);
    a0 = (u32)-1;
    v1 = a2 + 23232;
    a1 = v0 + 23240;
    ST32(v1+4, 0);
    ST32(v0+23240, a0);
    ST32(a2+23232, a0);
    ST32(a1+4, 0);
    return;
}

/* 088358B0 */
u32 func_088358B0(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
L_088358B0:;
    f3 = BITSF(LD32(a0));
    f2 = BITSF(LD32(a1));
    f0 = f3 - f2;
    v1 = FBITS(f0);
    v1 = (v1 >> 0) & 0x7fffffff;
    f1 = BITSF(v1);
    fcc = FCMP(f1, f12, 12);
    cnd_ = !fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_08835A18; }
    goto L_088358D8;
L_088358D8:;
    f3 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(a1+4));
    f1 = f3 - f0;
    v1 = FBITS(f1);
    v1 = (v1 >> 0) & 0x7fffffff;
    f2 = BITSF(v1);
    fcc = FCMP(f2, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08835A18; }
    goto L_08835900;
L_08835900:;
    f3 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(a1+8));
    f1 = f3 - f0;
    v1 = FBITS(f1);
    v1 = (v1 >> 0) & 0x7fffffff;
    f2 = BITSF(v1);
    fcc = FCMP(f2, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08835A18; }
    goto L_08835928;
L_08835928:;
    f3 = BITSF(LD32(a0+12));
    f0 = BITSF(LD32(a1+12));
    f1 = f3 - f0;
    v1 = FBITS(f1);
    v1 = (v1 >> 0) & 0x7fffffff;
    f2 = BITSF(v1);
    fcc = FCMP(f2, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08835A18; }
    goto L_08835950;
L_08835950:;
    f3 = BITSF(LD32(a0+16));
    f0 = BITSF(LD32(a1+16));
    f1 = f3 - f0;
    v1 = FBITS(f1);
    v1 = (v1 >> 0) & 0x7fffffff;
    f2 = BITSF(v1);
    fcc = FCMP(f2, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08835A18; }
    goto L_08835978;
L_08835978:;
    f3 = BITSF(LD32(a0+20));
    f0 = BITSF(LD32(a1+20));
    f1 = f3 - f0;
    v1 = FBITS(f1);
    v1 = (v1 >> 0) & 0x7fffffff;
    f2 = BITSF(v1);
    fcc = FCMP(f2, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08835A18; }
    goto L_088359A0;
L_088359A0:;
    f3 = BITSF(LD32(a0+24));
    f0 = BITSF(LD32(a1+24));
    f1 = f3 - f0;
    v1 = FBITS(f1);
    v1 = (v1 >> 0) & 0x7fffffff;
    f2 = BITSF(v1);
    fcc = FCMP(f2, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08835A18; }
    goto L_088359C8;
L_088359C8:;
    f3 = BITSF(LD32(a0+28));
    f0 = BITSF(LD32(a1+28));
    f1 = f3 - f0;
    v1 = FBITS(f1);
    v1 = (v1 >> 0) & 0x7fffffff;
    f2 = BITSF(v1);
    fcc = FCMP(f2, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08835A18; }
    goto L_088359F0;
L_088359F0:;
    f3 = BITSF(LD32(a0+32));
    f0 = BITSF(LD32(a1+32));
    f1 = f3 - f0;
    v1 = FBITS(f1);
    v1 = (v1 >> 0) & 0x7fffffff;
    f2 = BITSF(v1);
    fcc = FCMP(f2, f12, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = 1; goto L_08835A18; }
    goto L_08835A18;
L_08835A18:;
    return v0;
}

/* 08835A20 */
float func_08835A20(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08835A20:;
    f1 = BITSF(LD32(a0));
    v0 = D_08B45A9C - (23196);
    sp = sp - 16;
    ST32(a1, FBITS(f1));
    f4 = BITSF(0);
    f2 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(v0+23196));
    v0 = v0 + 23196;
    ST32(a1+4, FBITS(f2));
    fcc = FCMP(f1, f0, 2);
    f1 = BITSF(LD32(a0+8));
    cnd_ = !fcc;
    ST32(a1+8, FBITS(f1));
    if (cnd_) { goto L_08835A94; }
    goto L_08835A54;
L_08835A54:;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f2, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(a1); goto L_08835A98; }
    goto L_08835A68;
L_08835A68:;
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    f2 = f4;
    if (cnd_) { goto L_08835A94; }
    goto L_08835A7C;
L_08835A7C:;
    v0 = D_08AEB7BC - (-18500);
    f0 = BITSF(LD32(v0-18500));
    ST32(a1+4, FBITS(f0));
    goto L_08835A88;
L_08835A88:;
    f0 = f2;
    sp = sp + 16;
    return f0;
L_08835A94:;
    v0 = LD32(a1);
    goto L_08835A98;
L_08835A98:;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    v1 = LD32(a1+4);
    {v[8]=BITSF(v0);}
    v0 = LD32(a1+8);
    {v[9]=BITSF(v1);}
    {v[10]=BITSF(v0);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f4, 2);
    cnd_ = fcc;
    {float s0=v[0];float d0=sqrtf(s0);v[12]=d0;}
    if (cnd_) { goto L_08835B0C; }
    goto L_08835ACC;
L_08835ACC:;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[12];float d0=s0/t0;v[0]=d0;}
    {v0=FBITS(v[12]);}
    f4 = BITSF(v0);
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+8, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(a1+8, FBITS(f3));
    ST32(a1, FBITS(f2));
    ST32(a1+4, v0);
    goto L_08835B0C;
L_08835B0C:;
    v0 = FBITS(f4);
    {v[16]=BITSF(v0);}
    {float s0=v[16];float d0=(s0<-1?-1:(s0>1?1:s0));v[4]=d0;}
    f0 = BITSF(LD32(a0+12));
    {float s0=v[4];float d0=asinf(s0)*0.63661977236f;v[4]=d0;}
    v0 = FBITS(f0);
    {v[20]=BITSF(v0);}
    {float s0=v[20];float d0=(float)((s0>0)-(s0<0));v[0]=d0;}
    {v0=FBITS(v[0]);}
    {v[0]=1.57079632679f;}
    f2 = BITSF(v0);
    {float s0=v[4];float t0=v[0];float d0=s0*t0;v[4]=d0;}
    {v0=FBITS(v[4]);}
    f1 = BITSF(v0);
    f0 = f1 + f1;
    f2 = f0 * f2;
    goto L_08835A88;
}

/* 08835B50 */
void func_08835B50(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08835B50:;
    f4 = BITSF(LD32(a1+4));
    f6 = BITSF(LD32(a1+8));
    t2 = LD32(a2+8);
    v1 = LD32(a2);
    a3 = LD32(a1);
    a2 = LD32(a2+4);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    t0 = FBITS(f4);
    t1 = FBITS(f6);
    {v[4]=BITSF(a3);}
    {v[0]=BITSF(v1);}
    {v[5]=BITSF(t0);}
    {v[1]=BITSF(a2);}
    {v[6]=BITSF(t1);}
    {v[2]=BITSF(t2);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f5 = BITSF(v0);
    v0 = D_08AEB7C4 - (-18492);
    f0 = BITSF(LD32(v0-18492));
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    fcc = FCMP(f5, f0, 2);
    {v[4]=BITSF(a3);}
    {v[0]=BITSF(v1);}
    {v[5]=BITSF(t0);}
    {v[1]=BITSF(a2);}
    {v[6]=BITSF(t1);}
    {v[2]=BITSF(t2);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[8]=d0;v[9]=d1;v[10]=d2;}
    {v0=FBITS(v[10]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[8]);}
    f2 = BITSF(v0);
    sp = sp - 64;
    {v0=FBITS(v[9]);}
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f3));
    if (cnd_) { goto L_08835CE8; }
    goto L_08835BFC;
L_08835BFC:;
    v0 = (t0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    v0 = D_08AEB7C8 - (-18488);
    f0 = BITSF(LD32(v0-18488));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(a0, FBITS(f6)); goto L_08835CD0; }
    goto L_08835C1C;
L_08835C1C:;
    f0 = BITSF(FBITS(f4) ^ 0x80000000u);
    ST32(a0+4, 0);
    ST32(a0, FBITS(f0));
    ST32(a0+8, 0);
    ST32(a0+12, 0);
    goto L_08835C30;
L_08835C30:;
    v0 = LD32(a0);
    v1 = LD32(a0+4);
    {v[12]=BITSF(v0);}
    f1 = BITSF(0);
    {v[13]=BITSF(v1);}
    v0 = LD32(a0+8);
    v1 = LD32(a0+12);
    {v[14]=BITSF(v0);}
    {v[15]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float t0=v[12];float t1=v[13];float t2=v[14];float t3=v[15];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    if (cnd_) { goto L_08835CC8; }
    goto L_08835C70;
L_08835C70:;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;v[3]=s3*t0;}
    {v0=FBITS(v[3]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[1]);}
    f2 = BITSF(v0);
    ST32(a0, FBITS(f3));
    {v0=FBITS(v[2]);}
    ST32(a0+4, FBITS(f2));
    ST32(a0+8, v0);
    ST32(a0+12, FBITS(f4));
    v0 = LD32(a0);
    a1 = LD32(a0+12);
    v1 = LD32(a0+4);
    a0 = LD32(a0+8);
    ST32(sp+48, v0);
    ST32(sp+52, v1);
    ST32(sp+56, a0);
    ST32(sp+60, a1);
    goto L_08835CC8;
L_08835CC8:;
    sp = sp + 64;
    return;
L_08835CD0:;
    ST32(a0+4, 0);
    f0 = BITSF(LD32(a1));
    ST32(a0+12, 0);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(a0+8, FBITS(f0));
    goto L_08835C30;
L_08835CE8:;
    v0 = D_08AEB7CC - (-18484);
    f4 = BITSF(LD32(v0-18484));
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    f4 = f5 + f4;
    {v[8]=BITSF(a3);}
    {v[0]=BITSF(v1);}
    {v[9]=BITSF(t0);}
    {v[1]=BITSF(a2);}
    {v[10]=BITSF(t1);}
    {v[2]=BITSF(t2);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];float t1=v[1];float t2=v[2];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[4]=d0;v[5]=d1;v[6]=d2;}
    {v0=FBITS(v[6]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f2 = BITSF(v0);
    ST32(a0+8, FBITS(f3));
    {v0=FBITS(v[5]);}
    ST32(a0, FBITS(f2));
    ST32(a0+4, v0);
    ST32(a0+12, FBITS(f4));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    goto L_08835C30;
}

/* 08835D58 */
void func_08835D58(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08835D58:;
    {u32 a_=a2+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[8]=d0;v[9]=d1;v[10]=d2;}
    sp = sp - 32;
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f4 = BITSF(v0);
    v0 = D_08AEB7D0 - (-18480);
    f0 = BITSF(LD32(v0-18480));
    fcc = FCMP(f4, f0, 2);
    cnd_ = !fcc;
    a2 = a0 + 0;
    if (cnd_) { goto L_08835E84; }
    goto L_08835D8C;
L_08835D8C:;
    f1 = BITSF(LD32(a1+4));
    v0 = FBITS(f1);
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    v0 = D_08AEB7D4 - (-18476);
    f0 = BITSF(LD32(v0-18476));
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    if (cnd_) { goto L_08835E64; }
    goto L_08835DB4;
L_08835DB4:;
    ST32(a0, FBITS(f1));
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(a0+12, 0);
    goto L_08835DC4;
L_08835DC4:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    {v[8]=BITSF(v0);}
    a0 = LD32(a2+8);
    a1 = LD32(a2+12);
    {v[9]=BITSF(v1);}
    f1 = BITSF(0);
    {v[10]=BITSF(a0);}
    {v[11]=BITSF(a1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=v[8];float t1=v[9];float t2=v[10];float t3=v[11];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    if (cnd_) { goto L_08835E5C; }
    goto L_08835E04;
L_08835E04:;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[0];float d0=s0/t0;v[12]=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=v[12];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;v[3]=s3*t0;}
    {v0=FBITS(v[3]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[1]);}
    f2 = BITSF(v0);
    ST32(a2, FBITS(f3));
    {v0=FBITS(v[2]);}
    ST32(a2+4, FBITS(f2));
    ST32(a2+8, v0);
    ST32(a2+12, FBITS(f4));
    v0 = LD32(a2);
    a1 = LD32(a2+12);
    v1 = LD32(a2+4);
    a0 = LD32(a2+8);
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    ST32(sp+24, a0);
    ST32(sp+28, a1);
    goto L_08835E5C;
L_08835E5C:;
    sp = sp + 32;
    return;
L_08835E64:;
    f0 = BITSF(LD32(a1+8));
    ST32(a0+4, 0);
    ST32(a0, FBITS(f0));
    f0 = BITSF(LD32(a1));
    ST32(a0+12, 0);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(a0+8, FBITS(f0));
    goto L_08835DC4;
L_08835E84:;
    v0 = D_08AEB7D8 - (-18472);
    f1 = BITSF(LD32(v0-18472));
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    f2 = BITSF(LD32(sp+4));
    f1 = f4 + f1;
    f3 = BITSF(LD32(sp+8));
    f0 = BITSF(LD32(sp));
    ST32(a0+4, FBITS(f2));
    ST32(a0, FBITS(f0));
    ST32(a0+8, FBITS(f3));
    ST32(a0+12, FBITS(f1));
    goto L_08835DC4;
}

/* 08835EB4 */
rv_t func_08835EB4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, t8 = 0;
    float f0 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3];
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08835EB4:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    sp = sp - 48;
    t8 = a1 & a0;
    cnd_ = t8 == 0;
    if (cnd_) { goto L_0883605C; }
    goto L_08835EE0;
L_08835EE0:;
    v0 = D_08AEB7DC - (-18468);
    f0 = BITSF(LD32(v0-18468));
    ST32(sp+4, 0);
    a3 = D_08B25A50 - (23120);
    t0 = D_08B25A00 - (23040);
    ST32(sp, FBITS(f0));
    t3 = D_08B25A08 - (23048);
    t4 = D_08B25A20 - (23072);
    v1 = LD32(sp);
    s3 = LD32(sp+4);
    s1 = D_08B25A30 - (23088);
    t5 = D_08B25A40 - (23104);
    a0 = a3 + 23120;
    a2 = s1 + 23088;
    a1 = t5 + 23104;
    t6 = t3 + 23048;
    t7 = t4 + 23072;
    v0 = t0 + 23040;
    ST32(sp+8, 0);
    t2 = a0 + 16;
    s2 = D_08B25A80 - (23168);
    t1 = LD32(sp+12);
    ST32(sp, 0);
    s0 = s2 + 23168;
    ST32(sp+4, FBITS(f0));
    ST32(a3+23120, v1);
    a3 = a0 + 32;
    ST32(v0+4, 0);
    ST32(t0+23040, 0);
    ST32(t3+23048, 0);
    ST32(t6+8, 0);
    ST32(t4+23072, 0);
    ST32(t7+8, 0);
    ST32(s1+23088, 0);
    ST32(a2+12, 0);
    ST32(t5+23104, 0);
    ST32(a1+12, FBITS(f0));
    ST32(a0+4, s3);
    v0 = LD32(sp+8);
    ST32(a0+8, v0);
    v1 = LD32(sp);
    ST32(a0+16, v1);
    ST32(t6+4, 0);
    ST32(t7+4, 0);
    ST32(a2+4, 0);
    ST32(a2+8, 0);
    ST32(a1+4, 0);
    ST32(a1+8, 0);
    ST32(a0+12, t1);
    v0 = LD32(sp+4);
    ST32(sp+8, 0);
    ST32(t2+4, v0);
    ST32(sp+20, 0);
    ST32(sp+16, FBITS(f0));
    ST32(sp+24, 0);
    ST32(sp+28, 0);
    ST32(sp, 0);
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=s2+(23168);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+20, FBITS(f0));
    ST32(sp+16, 0);
    v0 = LD32(sp);
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v1 = LD32(sp+8);
    ST32(sp+20, 0);
    {u32 a_=s0+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+24, FBITS(f0));
    ST32(sp+4, 0);
    ST32(sp+8, FBITS(f0));
    ST32(a0+32, v0);
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=s0+(32);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(a3+12, t1);
    ST32(t2+8, v1);
    ST32(t2+12, t1);
    v0 = LD32(sp+4);
    ST32(a3+4, v0);
    v1 = LD32(sp+8);
    ST32(a3+8, v1);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+28, FBITS(f0));
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    cnd_ = t8 == 0;
    {u32 a_=s0+(48);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    if (cnd_) { goto L_0883605C; }
    goto L_08836038;
L_08836038:;
    a2 = D_08B25AC0 - (23232);
    v0 = D_08B25AC8 - (23240);
    a0 = (u32)-1;
    v1 = a2 + 23232;
    a1 = v0 + 23240;
    ST32(v1+4, 0);
    ST32(v0+23240, a0);
    ST32(a2+23232, a0);
    ST32(a1+4, 0);
    goto L_0883605C;
L_0883605C:;
    sp = sp + 48;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;
}

/* 08836074 */
float func_08836074(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08836074:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088360A0; }
    goto L_0883608C;
L_0883608C:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088360A0; }
    goto L_088360A0;
L_088360A0:;
    return f0;
}

/* 088360A8 */
rv_t func_088360A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088360A8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08835EB4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088360BC;
L_088360BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088360C8 */
void func_088360C8(u32 a0)
{
L_088360C8:;
    ST32(a0+4, 0);
    ST32(a0, 0);
    return;
}

/* 088360D4 */
void func_088360D4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088360D4:;
    sp = sp - 16;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0883611C; }
    goto L_088360F0;
L_088360F0:;
    a1 = LD32(a0+4);
    cnd_ = a1 == 0;
    if (cnd_) { ST32(s1+4, 0); goto L_08836120; }
    goto L_088360FC;
L_088360FC:;
    s0 = LD32(a1);
    goto L_08836100;
L_08836100:;
    a0 = LD32(s1);
    { u64 r_ = func_088362AC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08836108;
L_08836108:;
    v0 = LD32(s1+4);
    cnd_ = s0 == v0;
    a1 = s0 + 0;
    if (cnd_) { goto L_0883611C; }
    goto L_08836114;
L_08836114:;
    s0 = LD32(s0);
    goto L_08836100;
L_0883611C:;
    ST32(s1+4, 0);
    goto L_08836120;
L_08836120:;
    sp = sp + 16;
    return;
}

/* 08836134 */
void func_08836134(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08836134:;
    sp = sp - 16;
    s2 = a2 >> 3;
    v1 = a1 + 0;
    s1 = s2 << 3;
    a1 = s1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088361AC; }
    goto L_08836168;
L_08836168:;
    ST32(s0+4, v1);
    s1 = s2 << 3;
    goto L_08836170;
L_08836170:;
    v0 = LD32(s0+4);
    ST32(v0, v0);
    v1 = LD32(s0+4);
    ST32(v1+4, s2);
    v0 = LD32(s0+4);
    ST32(s0+12, s1);
    ST32(s0+8, s1);
    ST32(s0+20, v0);
    ST32(s0+16, 0);
    sp = sp + 16;
    return;
L_088361AC:;
    { u64 r_ = func_088361BC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088361B4;
L_088361B4:;
    ST32(s0+4, v0);
    goto L_08836170;
}

/* 088361BC */
u64 func_088361BC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088361BC:;
    sp = sp - 16;
    v0 = 1;
    if (a1 == 0) a1 = v0;
    v0 = a1 + 7;
    v0 = v0 >> 3;
    t1 = LD32(a0+4);
    s0 = a0 + 0;
    t0 = v0 + 1;
    a2 = 0 + 0;
    t2 = t1 + 0;
    cnd_ = t1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08836248; }
    goto L_088361F4;
L_088361F4:;
    a0 = LD32(t1);
    t3 = t0 << 3;
    goto L_088361FC;
L_088361FC:;
    v1 = LD32(a0+4);
    v0 = v1 < t0;
    cnd_ = v0 == 0;
    a3 = a2 < v1;
    if (cnd_) { goto L_0883625C; }
    goto L_0883620C;
L_0883620C:;
    t1 = a0 + 0;
    cnd_ = a0 == t2;
    if (a3 != 0) a2 = v1;
    if (cnd_) { goto L_08836220; }
    goto L_08836218;
L_08836218:;
    a0 = LD32(a0);
    goto L_088361FC;
L_08836220:;
    a2 = a2 << 3;
    a0 = D_08AD3EC8 - (16072);
    a2 = a2 - 8;
    a0 = a0 + 16072;
    { u64 r_ = func_088FB130(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08836234;
L_08836234:;
    a1 = LD32(s0+12);
    a0 = D_08AD3F14 - (16148);
    a0 = a0 + 16148;
    { u64 r_ = func_088FB130(a0, a1, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08836244;
L_08836244:;
    a0 = 0 + 0;
    goto L_08836248;
L_08836248:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0883625C:;
    cnd_ = v1 == t0;
    v0 = v1 - t0;
    if (cnd_) { goto L_08836298; }
    goto L_08836264;
L_08836264:;
    v1 = v0 << 3;
    ST32(a0+4, v0);
    a0 = a0 + v1;
    ST32(a0+4, t0);
    goto L_08836274;
L_08836274:;
    v1 = LD32(s0+16);
    v0 = LD32(s0+12);
    a0 = a0 + 8;
    v1 = v1 + 1;
    v0 = v0 - t3;
    ST32(s0+12, v0);
    ST32(s0+4, t1);
    ST32(s0+16, v1);
    goto L_08836248;
L_08836298:;
    v0 = LD32(a0);
    cnd_ = t1 != a0;
    ST32(t1, v0);
    if (cnd_) { goto L_08836274; }
    goto L_088362A4;
L_088362A4:;
    t1 = 0 + 0;
    goto L_08836274;
}

/* 088362AC */
u64 func_088362AC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_088362AC:;
    cnd_ = a1 == 0;
    t1 = a0 + 0;
    if (cnd_) { goto L_08836400; }
    goto L_088362B4;
L_088362B4:;
    v0 = LD32(a0+20);
    a0 = LD32(a0+8);
    t0 = a1 - 8;
    v1 = t0 < v0;
    v0 = v0 + a0;
    v0 = t0 < v0;
    v0 = v0 ^ 0x1;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08836400; }
    goto L_088362DC;
L_088362DC:;
    v1 = LD32(t1+4);
    cnd_ = v1 != 0;
    v0 = v1 < t0;
    if (cnd_) { goto L_08836314; }
    goto L_088362E8;
L_088362E8:;
    ST32(a1-8, t0);
    v0 = LD32(t1+16);
    ST32(t1+4, t0);
    v0 = v0 - 1;
    ST32(t1+16, v0);
    v1 = LD32(t0+4);
    v0 = LD32(t1+12);
    v1 = v1 << 3;
    v0 = v0 + v1;
    ST32(t1+12, v0);
    return (u64)v0 | ((u64)v1 << 32);
L_08836314:;
    cnd_ = v0 != 0;
    a3 = v1 + 0;
    if (cnd_) { goto L_08836430; }
    goto L_0883631C;
L_0883631C:;
    cnd_ = t0 == a3;
    a0 = a3 < t0;
    if (cnd_) { goto L_08836400; }
    goto L_08836324;
L_08836324:;
    a2 = LD32(a3);
    v0 = a3 < a2;
    cnd_ = v0 != 0;
    v1 = t0 < a2;
    if (cnd_) { goto L_08836344; }
    goto L_08836334;
L_08836334:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a3+4); goto L_08836364; }
    goto L_0883633C;
L_0883633C:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(a3+4); goto L_08836364; }
    goto L_08836344;
L_08836344:;
    v0 = a2 < t0;
    cnd_ = v0 == 0;
    a3 = a2 + 0;
    if (cnd_) { goto L_0883631C; }
    goto L_08836350;
L_08836350:;
    v0 = LD32(a2);
    v1 = t0 < v0;
    cnd_ = v1 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_0883631C; }
    goto L_08836360;
L_08836360:;
    v0 = LD32(a3+4);
    goto L_08836364;
L_08836364:;
    a0 = LD32(t0+4);
    a1 = LD32(a2+4);
    v0 = v0 << 3;
    v0 = a3 + v0;
    v1 = t0 < a3;
    v0 = t0 < v0;
    v1 = v1 ^ 0x1;
    a0 = a0 << 3;
    v1 = v1 & v0;
    a1 = a1 << 3;
    v0 = t0 + a0;
    cnd_ = v1 != 0;
    a0 = a2 + a1;
    if (cnd_) { goto L_08836400; }
    goto L_08836398;
L_08836398:;
    v1 = v0 < a0;
    v0 = a2 < v0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08836400; }
    goto L_088363AC;
L_088363AC:;
    v1 = LD32(t1+16);
    a0 = LD32(t1+12);
    v1 = v1 - 1;
    ST32(t1+16, v1);
    v0 = LD32(t0+4);
    v0 = v0 << 3;
    a0 = a0 + v0;
    ST32(t1+12, a0);
    a0 = LD32(t0+4);
    v1 = LD32(a3);
    v0 = a0 << 3;
    v0 = t0 + v0;
    cnd_ = v0 == v1;
    if (cnd_) { v0 = LD32(v1+4); goto L_08836420; }
    goto L_088363E4;
L_088363E4:;
    a0 = LD32(a3+4);
    v0 = a0 << 3;
    v0 = a3 + v0;
    cnd_ = v0 == t0;
    ST32(t0, v1);
    if (cnd_) { goto L_08836408; }
    goto L_088363F8;
L_088363F8:;
    ST32(a3, t0);
    goto L_088363FC;
L_088363FC:;
    ST32(t1+4, a3);
    goto L_08836400;
L_08836400:;
    return (u64)v0 | ((u64)v1 << 32);
L_08836408:;
    v0 = LD32(t0+4);
    v1 = LD32(t0);
    v0 = a0 + v0;
    ST32(a3+4, v0);
    ST32(a3, v1);
    goto L_088363FC;
L_08836420:;
    v1 = LD32(v1);
    v0 = a0 + v0;
    ST32(t0+4, v0);
    goto L_088363E4;
L_08836430:;
    v0 = LD32(v1);
    v0 = t0 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0883631C; }
    goto L_08836440;
L_08836440:;
    a2 = LD32(v1);
    goto L_08836360;
}

/* 08836448 */
rv_t func_08836448(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08836448:;
    v0 = D_08AEB7E0 - (-18464);
    f0 = BITSF(LD32(a0+36));
    f1 = BITSF(LD32(v0-18464));
    sp = sp - 64;
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    a2 = a0 + 0;
    if (cnd_) { goto L_08836500; }
    goto L_08836468;
L_08836468:;
    f1 = BITSF(LD32(a1));
    f0 = BITSF(LD32(a0));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = 0 + 0; goto L_088364F4; }
    goto L_08836480;
L_08836480:;
    f0 = BITSF(LD32(a0+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_088364F4; }
    goto L_08836494;
L_08836494:;
    f1 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a0+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_088364F4; }
    goto L_088364AC;
L_088364AC:;
    f0 = BITSF(LD32(a0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v0 = v0 & 0xff;
    if (cnd_) { goto L_088364F8; }
    goto L_088364C0;
L_088364C0:;
    f2 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a0+16));
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_088364F8; }
    goto L_088364D8;
L_088364D8:;
    f0 = BITSF(LD32(a0+20));
    v0 = 1;
    fcc = FCMP(f2, f0, 14);
    goto L_088364E8;
L_088364E8:;
    cnd_ = fcc;
    v0 = v0 & 0xff;
    if (cnd_) { goto L_088364F8; }
    goto L_088364F0;
L_088364F0:;
    v0 = 0 + 0;
    goto L_088364F4;
L_088364F4:;
    v0 = v0 & 0xff;
    goto L_088364F8;
L_088364F8:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08836500:;
    f9 = BITSF(LD32(a0));
    f10 = BITSF(LD32(a0+4));
    v0 = D_08AEB7E4 - (-18460);
    f0 = BITSF(LD32(v0-18460));
    f6 = f9 + f10;
    f11 = BITSF(LD32(a0+8));
    f12 = BITSF(LD32(a0+12));
    f13 = BITSF(LD32(a0+16));
    f14 = BITSF(LD32(a0+20));
    f6 = f6 * f0;
    v0 = LD32(a0+28);
    v1 = LD32(a0+24);
    f2 = BITSF(LD32(a1));
    a0 = LD32(a0+32);
    f7 = f11 + f12;
    f8 = f13 + f14;
    ST32(sp+32, v1);
    f2 = f2 - f6;
    f7 = f7 * f0;
    ST32(sp+36, v0);
    f8 = f8 * f0;
    ST32(sp+40, a0);
    f4 = BITSF(LD32(sp+32));
    f1 = BITSF(LD32(sp+36));
    f0 = BITSF(LD32(sp+40));
    f5 = BITSF(LD32(a1+8));
    f3 = BITSF(LD32(a1+4));
    ST32(sp+16, FBITS(f2));
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f3 = f3 - f7;
    ST32(sp, FBITS(f6));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f5 = f5 - f8;
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    v0 = LD32(a2+36);
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f5));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f0));
    ST32(sp+4, FBITS(f7));
    ST32(sp+8, FBITS(f8));
    ST32(sp+44, v0);
    ST32(sp+32, FBITS(f4));
    {v[112]=BITSF(LD32(sp+(32)));}
    {v[113]=BITSF(LD32(sp+(36)));}
    {v[114]=BITSF(LD32(sp+(40)));}
    {v[115]=BITSF(LD32(sp+(44)));}
    {v[116]=BITSF(LD32(sp+(16)));}
    {v[117]=BITSF(LD32(sp+(20)));}
    {v[118]=BITSF(LD32(sp+(24)));}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[116];float t1=v[117];float t2=v[118];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[96]=d0;v[97]=d1;v[98]=d2;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[115];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;v[96]=d0;v[97]=d1;v[98]=d2;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[116];float t1=v[117];float t2=v[118];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[103]=sum;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[103];v[100]=s0*t0;v[101]=s1*t0;v[102]=s2*t0;}
    {float s0=v[100];float s1=v[101];float s2=v[102];float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;v[100]=d0;v[101]=d1;v[102]=d2;}
    {float s0=v[115];float t0=v[115];float d0=s0*t0;v[104]=d0;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[112];float t1=v[113];float t2=v[114];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[105]=sum;}
    {float s0=v[104];float t0=v[105];float d0=s0-t0;v[107]=d0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float t0=v[107];v[104]=s0*t0;v[105]=s1*t0;v[106]=s2*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[100];float t1=v[101];float t2=v[102];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[120]=d0;v[121]=d1;v[122]=d2;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float t0=v[104];float t1=v[105];float t2=v[106];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[120]=d0;v[121]=d1;v[122]=d2;}
    {ST32(sp+(16),FBITS(v[120]));}
    {ST32(sp+(20),FBITS(v[121]));}
    {ST32(sp+(24),FBITS(v[122]));}
    f1 = BITSF(LD32(sp+16));
    f0 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+20));
    f3 = f1 + f0;
    f0 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+24));
    f2 = f2 + f0;
    f0 = BITSF(LD32(sp+8));
    fcc = FCMP(f9, f3, 14);
    ST32(sp+48, FBITS(f3));
    f1 = f1 + f0;
    ST32(sp+52, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+56, FBITS(f1));
    if (cnd_) { goto L_088364F0; }
    goto L_08836644;
L_08836644:;
    fcc = FCMP(f3, f10, 14);
    cnd_ = !fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_088364F4; }
    goto L_08836654;
L_08836654:;
    fcc = FCMP(f11, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_088364F4; }
    goto L_08836664;
L_08836664:;
    fcc = FCMP(f2, f12, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = v0 & 0xff; goto L_088364F8; }
    goto L_08836674;
L_08836674:;
    fcc = FCMP(f13, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = v0 & 0xff; goto L_088364F8; }
    goto L_08836684;
L_08836684:;
    fcc = FCMP(f1, f14, 14);
    v0 = 1;
    goto L_088364E8;
}

/* 08836690 */
void func_08836690(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08836690:;
    sp = sp - 80;
    v0 = D_08AEB7F0 - (-18448);
    t0 = a1 + 0;
    s1 = a2 + 0;
    f0 = BITSF(LD32(a0+36));
    f1 = BITSF(LD32(v0-18448));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    s0 = a0 + 0;
    if (cnd_) { goto L_088366E0; }
    goto L_088366C4;
L_088366C4:;
    func_088F7670(a0, a1, a2);
    goto L_088366CC;
L_088366CC:;
    goto L_088366D0;
L_088366D0:;
    sp = sp + 80;
    return;
L_088366E0:;
    f0 = BITSF(LD32(a0+20));
    f6 = BITSF(LD32(a0+16));
    f2 = BITSF(LD32(a0+4));
    f1 = BITSF(LD32(a0+12));
    f7 = BITSF(LD32(a0+8));
    f8 = BITSF(LD32(a0));
    v0 = D_08AEB7F4 - (-18444);
    v1 = LD32(a0+24);
    a3 = LD32(a0+32);
    f6 = f6 + f0;
    f0 = BITSF(LD32(v0-18444));
    v0 = LD32(a0+28);
    f8 = f8 + f2;
    f7 = f7 + f1;
    ST32(sp+32, v1);
    f6 = f6 * f0;
    f8 = f8 * f0;
    ST32(sp+40, a3);
    f7 = f7 * f0;
    a1 = sp + 48;
    ST32(sp+36, v0);
    f5 = BITSF(LD32(t0+8));
    f0 = BITSF(LD32(t0));
    f1 = BITSF(LD32(t0+4));
    f5 = f5 - f6;
    f0 = f0 - f8;
    f1 = f1 - f7;
    f3 = BITSF(LD32(sp+32));
    f4 = BITSF(LD32(sp+36));
    f2 = BITSF(LD32(sp+40));
    ST32(sp+16, FBITS(f0));
    f3 = BITSF(FBITS(f3) ^ 0x80000000u);
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    ST32(sp+20, FBITS(f1));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    ST32(sp+24, FBITS(f5));
    ST32(sp, FBITS(f8));
    ST32(sp+4, FBITS(f7));
    ST32(sp+8, FBITS(f6));
    v0 = LD32(a0+36);
    ST32(sp+32, FBITS(f3));
    ST32(sp+44, v0);
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f2));
    {v[112]=BITSF(LD32(sp+(32)));}
    {v[113]=BITSF(LD32(sp+(36)));}
    {v[114]=BITSF(LD32(sp+(40)));}
    {v[115]=BITSF(LD32(sp+(44)));}
    {v[116]=BITSF(LD32(sp+(16)));}
    {v[117]=BITSF(LD32(sp+(20)));}
    {v[118]=BITSF(LD32(sp+(24)));}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[116];float t1=v[117];float t2=v[118];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[96]=d0;v[97]=d1;v[98]=d2;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[115];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;v[96]=d0;v[97]=d1;v[98]=d2;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[116];float t1=v[117];float t2=v[118];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[103]=sum;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[103];v[100]=s0*t0;v[101]=s1*t0;v[102]=s2*t0;}
    {float s0=v[100];float s1=v[101];float s2=v[102];float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;v[100]=d0;v[101]=d1;v[102]=d2;}
    {float s0=v[115];float t0=v[115];float d0=s0*t0;v[104]=d0;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[112];float t1=v[113];float t2=v[114];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[105]=sum;}
    {float s0=v[104];float t0=v[105];float d0=s0-t0;v[107]=d0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float t0=v[107];v[104]=s0*t0;v[105]=s1*t0;v[106]=s2*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[100];float t1=v[101];float t2=v[102];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[120]=d0;v[121]=d1;v[122]=d2;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float t0=v[104];float t1=v[105];float t2=v[106];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[120]=d0;v[121]=d1;v[122]=d2;}
    {ST32(sp+(16),FBITS(v[120]));}
    {ST32(sp+(20),FBITS(v[121]));}
    {ST32(sp+(24),FBITS(v[122]));}
    f0 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+16));
    f2 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+24));
    f3 = f3 + f0;
    f0 = BITSF(LD32(sp+4));
    f2 = f2 + f0;
    f0 = BITSF(LD32(sp+8));
    ST32(sp+48, FBITS(f3));
    f1 = f1 + f0;
    ST32(sp+52, FBITS(f2));
    ST32(sp+56, FBITS(f1));
    func_088F7670(a0, a1, a2);
    goto L_08836824;
L_08836824:;
    {v[112]=BITSF(LD32(s0+(24)));}
    {v[113]=BITSF(LD32(s0+(28)));}
    {v[114]=BITSF(LD32(s0+(32)));}
    {v[115]=BITSF(LD32(s0+(36)));}
    {v[116]=BITSF(LD32(s1+(0)));}
    {v[117]=BITSF(LD32(s1+(4)));}
    {v[118]=BITSF(LD32(s1+(8)));}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[116];float t1=v[117];float t2=v[118];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[96]=d0;v[97]=d1;v[98]=d2;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[115];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;v[96]=d0;v[97]=d1;v[98]=d2;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[116];float t1=v[117];float t2=v[118];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[103]=sum;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[103];v[100]=s0*t0;v[101]=s1*t0;v[102]=s2*t0;}
    {float s0=v[100];float s1=v[101];float s2=v[102];float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;v[100]=d0;v[101]=d1;v[102]=d2;}
    {float s0=v[115];float t0=v[115];float d0=s0*t0;v[104]=d0;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[112];float t1=v[113];float t2=v[114];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[105]=sum;}
    {float s0=v[104];float t0=v[105];float d0=s0-t0;v[107]=d0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float t0=v[107];v[104]=s0*t0;v[105]=s1*t0;v[106]=s2*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[100];float t1=v[101];float t2=v[102];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[120]=d0;v[121]=d1;v[122]=d2;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float t0=v[104];float t1=v[105];float t2=v[106];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[120]=d0;v[121]=d1;v[122]=d2;}
    {ST32(s1+(0),FBITS(v[120]));}
    {ST32(s1+(4),FBITS(v[121]));}
    {ST32(s1+(8),FBITS(v[122]));}
    goto L_088366D0;
}

/* 0883688C */
void func_0883688C(u32 a0, u32 a1)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883688C:;
    ST32(a0+8, a1);
    sp = sp - 16;
    func_088368F4(a0);
    goto L_088368A0;
L_088368A0:;
    sp = sp + 16;
    return;
}

/* 088368AC */
void func_088368AC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    u32 hi = 0, lo = 0;
L_088368AC:;
    a3 = D_08B25AC0 - (23232);
    v1 = LD32(a3+23232);
    t1 = a3 + 23232;
    a1 = LD32(t1+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    a2 = LD32(a0+8);
    v1 = v1 + v0;
    v1 = v1 + a1;
    v0 = v1 >> 1;
    { u32 x_ = v0, y_ = a2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a1 = a1 + v1;
    ST32(t1+4, a1);
    ST32(a3+23232, v1);
    ST32(a0+16, 0);
    t0 = hi;
    ST32(a0+4, t0);
    return;
}

/* 088368F4 */
void func_088368F4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088368F4:;
    sp = sp - 16;
    t1 = D_08B25AC0 - (23232);
    t4 = t1 + 23232;
    t2 = 7;
    s0 = a0 + 0;
    v1 = LD32(t1+23232);
    a2 = LD32(t4+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a2;
    a1 = v1 >> 1;
    v0 = 13;
    { u32 x_ = a1, y_ = v0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    t0 = (u32)((s32)v1 >> 16);
    v0 = v1 << 16;
    a2 = a2 + v1;
    v0 = v0 + t0;
    v0 = v0 + a2;
    t3 = v0 >> 1;
    a1 = (u32)((s32)v0 >> 16);
    v1 = v0 << 16;
    a2 = a2 + v0;
    v1 = v1 + a1;
    v1 = v1 + a2;
    t0 = v1 >> 1;
    a1 = 5;
    a2 = a2 + v1;
    ST32(t1+23232, v1);
    ST32(t4+4, a2);
    a2 = LD32(a0+8);
    a3 = hi;
    { u32 x_ = t3, y_ = t2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a3 = a3 + 1;
    v0 = hi;
    { u32 x_ = t0, y_ = a1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v0 = v0 + 1;
    v1 = hi;
    { s64 p_ = (s64)(s32)a3 * (s32)a2; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = v1 + 1;
    a3 = lo;
    a3 = a3 + v0;
    { s64 p_ = (s64)(s32)a3 * (s32)a2; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a3 = lo;
    a3 = a3 + v1;
    a3 = (a3 & ~(0x3u << 30)) | ((0 & 0x3) << 30);
    ST32(a0, a3);
    func_088368AC(a0);
    goto L_088369BC;
L_088369BC:;
    v1 = D_08AD3F30 - (16176);
    v0 = LD32(v1+16176);
    a1 = LD32(s0+8);
    v1 = v1 + 16176;
    v0 = (s32)v0 < (s32)a1;
    cnd_ = v0 == 0;
    ST32(s0+12, v1);
    if (cnd_) { goto L_088369F0; }
    goto L_088369D8;
L_088369D8:;
    a0 = v1 + 0;
    goto L_088369DC;
L_088369DC:;
    v0 = LD32(a0+4);
    v0 = (s32)v0 < (s32)a1;
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_088369DC; }
    goto L_088369EC;
L_088369EC:;
    ST32(s0+12, a0);
    goto L_088369F0;
L_088369F0:;
    a0 = LD32(s0+12);
    a1 = LD32(s0);
    v0 = LD32(a0);
    { s32 x_ = (s32)a1, y_ = (s32)v0; if (y_ == 0) { lo = x_ < 0 ? 1 : 0xFFFFFFFFu; hi = (u32)x_; } else if (x_ == INT32_MIN && y_ == -1) { lo = 0x80000000u; hi = 0; } else { lo = (u32)(x_ / y_); hi = (u32)(x_ % y_); } }
    v1 = hi;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08836A14; }
    goto L_08836A0C;
L_08836A0C:;
    v0 = a1 + 1;
    ST32(s0, v0);
    goto L_08836A14;
L_08836A14:;
    sp = sp + 16;
    return;
}

/* 08836A20 */
u32 func_08836A20(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_08836A20:;
    t0 = LD32(a0+12);
    a3 = LD32(a0+16);
    v0 = LD32(t0);
    cnd_ = a3 == v0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08836A78; }
    goto L_08836A34;
L_08836A34:;
    a1 = LD32(a0+4);
    t2 = LD32(a0);
    t1 = LD32(a0+8);
    v0 = LD32(t0);
    a1 = a1 + t2;
    goto L_08836A48;
L_08836A48:;
    v1 = a3 + 1;
    { s32 x_ = (s32)a1, y_ = (s32)v0; if (y_ == 0) { lo = x_ < 0 ? 1 : 0xFFFFFFFFu; hi = (u32)x_; } else if (x_ == INT32_MIN && y_ == -1) { lo = 0x80000000u; hi = 0; } else { lo = (u32)(x_ / y_); hi = (u32)(x_ % y_); } }
    a3 = v1 + 0;
    a2 = hi;
    v0 = (s32)a2 < (s32)t1;
    a1 = hi;
    cnd_ = v0 != 0;
    ST32(a0+16, v1);
    if (cnd_) { goto L_08836A80; }
    goto L_08836A68;
L_08836A68:;
    v0 = LD32(t0);
    cnd_ = v1 != v0;
    if (cnd_) { a1 = a1 + t2; goto L_08836A48; }
    goto L_08836A74;
L_08836A74:;
    v1 = (u32)-1;
    goto L_08836A78;
L_08836A78:;
    v0 = v1 + 0;
    return v0;
L_08836A80:;
    v1 = a2 + 0;
    ST32(a0+4, a2);
    goto L_08836A78;
}

/* 08836A8C */
rv_t func_08836A8C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f1 = 0;
L_08836A8C:;
    v0 = D_08B2858C - (-31348);
    f1 = BITSF(LD32(v0-31348));
    v0 = D_08AEB7FC - (-18436);
    f0 = BITSF(LD32(v0-18436));
    v0 = ((u32)(uintptr_t)func_08AA6B20) - (27424);
    v1 = a0 + 12;
    a1 = a0 + 32;
    a2 = a0 + 52;
    v0 = v0 + 27424;
    ST32(a1+8, 0);
    ST32(a2+8, 0);
    ST32(v1+8, v0);
    v0 = ((u32)(uintptr_t)func_08AA6B40) - (27456);
    v0 = v0 + 27456;
    ST32(a0+4, 0);
    ST32(a1+12, 0);
    ST32(v1+16, 0);
    ST32(v1+4, 0);
    ST32(a1+16, 0);
    ST32(a2+12, 0);
    ST32(a2+16, 0);
    ST32(a0, FBITS(f0));
    ST32(a0+88, FBITS(f1));
    ST32(a0+92, 0);
    ST32(v1+12, v0);
    ST8(a0+8, 0);
    ST32(a0+12, 0);
    ST32(a0+32, 0);
    ST32(a1+4, 0);
    ST32(a0+52, 0);
    ST32(a2+4, 0);
    ST32(a0+72, 0);
    ST32(a0+76, 0);
    ST32(a0+80, 0);
    ST32(a0+84, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 08836B1C */
rv_t func_08836B1C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08836B1C:;
    sp = sp - 96;
    s7 = a0 + 12;
    s5 = a0 + 0;
    a0 = sp + 0;
    ST32(sp, s7);
    ST32(sp+4, 0);
    { u64 r_ = func_08AA6C68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08836B5C;
L_08836B5C:;
    s1 = LD32(sp+4);
    cnd_ = s1 == 0;
    s3 = D_08B25B18 - (23320);
    if (cnd_) { goto L_08836BA8; }
    goto L_08836B68;
L_08836B68:;
    s2 = D_08B25B0C - (23308);
    a0 = sp + 0;
    goto L_08836B70;
L_08836B70:;
    s0 = LD32(s1);
    { u64 r_ = func_08AA6C68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08836B78;
L_08836B78:;
    a1 = LD32(s1);
    a0 = LD32(sp);
    func_08AA6C8C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08836B84;
L_08836B84:;
    a1 = LD32(s0+4);
    a0 = s3 + 23320;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08836B90;
L_08836B90:;
    a1 = s0 + 0;
    a0 = s2 + 23308;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08836B9C;
L_08836B9C:;
    s1 = LD32(sp+4);
    cnd_ = s1 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08836B70; }
    goto L_08836BA8;
L_08836BA8:;
    s4 = sp + 16;
    s6 = s5 + 32;
    a0 = s4 + 0;
    ST32(sp+16, s6);
    ST32(sp+20, 0);
    { u64 r_ = func_08AA6C68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08836BC0;
L_08836BC0:;
    s1 = LD32(sp+20);
    cnd_ = s1 == 0;
    s3 = D_08B25B18 - (23320);
    if (cnd_) { goto L_08836C0C; }
    goto L_08836BCC;
L_08836BCC:;
    s2 = D_08B25B0C - (23308);
    a0 = s4 + 0;
    goto L_08836BD4;
L_08836BD4:;
    s0 = LD32(s1);
    { u64 r_ = func_08AA6C68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08836BDC;
L_08836BDC:;
    a1 = LD32(s1);
    a0 = LD32(sp+16);
    func_08AA6C8C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08836BE8;
L_08836BE8:;
    a1 = LD32(s0+4);
    a0 = s3 + 23320;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08836BF4;
L_08836BF4:;
    a1 = s0 + 0;
    a0 = s2 + 23308;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08836C00;
L_08836C00:;
    s1 = LD32(sp+20);
    cnd_ = s1 != 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08836BD4; }
    goto L_08836C0C;
L_08836C0C:;
    s3 = sp + 32;
    s2 = s5 + 52;
    a0 = s3 + 0;
    ST32(sp+32, s2);
    ST32(sp+36, 0);
    { u64 r_ = func_08AA6D2C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08836C24;
L_08836C24:;
    s1 = LD32(sp+36);
    cnd_ = s1 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08836C74; }
    goto L_08836C30;
L_08836C30:;
    a0 = s2 + 0;
    func_08AA6BF8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08836C38;
L_08836C38:;
    a0 = s6 + 0;
    { rv_t r_ = func_08AA6B88(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08836C40;
L_08836C40:;
    a0 = s7 + 0;
    { rv_t r_ = func_08AA6B88(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08836C48;
L_08836C48:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_08836C74:;
    s0 = LD32(s1);
    { u64 r_ = func_08AA6D2C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08836C7C;
L_08836C7C:;
    a1 = LD32(s1);
    a0 = LD32(sp+32);
    func_08AA6D50(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08836C88;
L_08836C88:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08836C90;
L_08836C90:;
    s1 = LD32(sp+36);
    cnd_ = s1 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08836C74; }
    goto L_08836C9C;
L_08836C9C:;
    goto L_08836C30;
}

/* 08836CA4 */
rv_t func_08836CA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08836CA4:;
    v0 = 1;
    ST8(a0+8, v0);
    sp = sp - 112;
    s6 = D_08AEB800 - (-18432);
    s2 = a0 + 0;
    f0 = func_0883BCF4(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08836CF4;
L_08836CF4:;
    v0 = D_08B2858C - (-31348);
    f21 = BITSF(LD32(v0-31348));
    f22 = f0;
    f0 = BITSF(LD32(s2+88));
    f1 = BITSF(LD32(s2+92));
    f2 = BITSF(LD32(s6-18432));
    f0 = f21 - f0;
    v0 = LD32(s2+12);
    s4 = LD32(s2+84);
    a1 = 0 + 0;
    f0 = f0 - f1;
    f0 = f0 * f2;
    f1 = f1 + f0;
    cnd_ = v0 == 0;
    ST32(s2+92, FBITS(f1));
    if (cnd_) { goto L_08836D34; }
    goto L_08836D30;
L_08836D30:;
    a1 = LD32(v0);
    goto L_08836D34;
L_08836D34:;
    cnd_ = a1 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08836E00; }
    goto L_08836D3C;
L_08836D3C:;
    f0 = BITSF(LD32(a1+16));
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    v0 = D_08AEB804 - (-18428);
    if (cnd_) { goto L_08836E00; }
    goto L_08836D50;
L_08836D50:;
    v1 = D_08AEB80C - (-18420);
    f23 = BITSF(LD32(v0-18428));
    f24 = BITSF(LD32(v1-18420));
    s3 = s2 + 12;
    s5 = ((u32)(uintptr_t)func_08AA6B64) - (27492);
    s7 = D_08AEB808 - (-18424);
    f0 = BITSF(LD32(s0+12));
    goto L_08836D6C;
L_08836D6C:;
    fcc = FCMP(f0, f21, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_08836F70; }
    goto L_08836D7C;
L_08836D7C:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    func_08AA6C8C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08836D88;
L_08836D88:;
    s1 = 0 + 0;
    f0 = func_0883BCF4(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08836D90;
L_08836D90:;
    f0 = f21 + f0;
    f1 = BITSF(LD32(s0+8));
    a1 = s0 + 0;
    a0 = s3 + 0;
    f0 = f0 + f1;
    a2 = s5 + 27492;
    ST32(s0+16, FBITS(f0));
    { rv_t r_ = func_08AA69FC(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08836DB0;
L_08836DB0:;
    v0 = LD32(s2+12);
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(v0); goto L_08836DBC; }
    goto L_08836DBC;
L_08836DBC:;
    s0 = s1 + 0;
    f0 = func_0883BCF4(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08836DC4;
L_08836DC4:;
    f0 = f0 - f22;
    f1 = BITSF(LD32(s1+20));
    f2 = BITSF(LD32(s2));
    f0 = f0 + f1;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08836E00; }
    goto L_08836DE4;
L_08836DE4:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08836E00; }
    goto L_08836DEC;
L_08836DEC:;
    f0 = BITSF(LD32(s1+16));
    fcc = FCMP(f0, f21, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = BITSF(LD32(s0+12)); goto L_08836D6C; }
    goto L_08836E00;
L_08836E00:;
    f0 = func_0883BCF4(0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08836E08;
L_08836E08:;
    v0 = LD32(s2+84);
    f0 = f0 - f22;
    f4 = BITSF(LD32(s2+76));
    v0 = v0 - s4;
    f1 = BITSF(v0);
    f3 = BITSF(LD32(s2+80));
    f0 = f0 - f4;
    f2 = (float)(s32)FBITS(f1);
    f1 = BITSF(LD32(s6-18432));
    v1 = s2 + 32;
    v0 = LD32(v1+16);
    f2 = f2 - f3;
    f0 = f0 * f1;
    ST32(s2+88, FBITS(f21));
    f2 = f2 * f1;
    f4 = f4 + f0;
    ST8(s2+8, 0);
    f3 = f3 + f2;
    ST32(s2+76, FBITS(f4));
    cnd_ = v0 != 0;
    ST32(s2+80, FBITS(f3));
    if (cnd_) { goto L_08836F08; }
    goto L_08836E5C;
L_08836E5C:;
    v1 = s2 + 52;
    goto L_08836E60;
L_08836E60:;
    v0 = LD32(v1+16);
    cnd_ = v0 != 0;
    s3 = sp + 16;
    if (cnd_) { goto L_08836EAC; }
    goto L_08836E6C;
L_08836E6C:;
    goto L_08836E70;
L_08836E70:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_08836EAC:;
    a0 = s3 + 0;
    ST32(sp+16, v1);
    ST32(sp+20, 0);
    { u64 r_ = func_08AA6D2C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08836EBC;
L_08836EBC:;
    s1 = LD32(sp+20);
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08836E70; }
    goto L_08836EC8;
L_08836EC8:;
    a0 = s3 + 0;
    goto L_08836ECC;
L_08836ECC:;
    s0 = LD32(s1);
    { u64 r_ = func_08AA6D2C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08836ED4;
L_08836ED4:;
    a1 = LD32(s1);
    a0 = LD32(sp+16);
    func_08AA6D50(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08836EE0;
L_08836EE0:;
    a1 = LD32(s0);
    a0 = s2 + 0;
    { rv_t r_ = func_08837194(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08836EEC;
L_08836EEC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08836EF4;
L_08836EF4:;
    s1 = LD32(sp+20);
    cnd_ = s1 != 0;
    if (cnd_) { a0 = s3 + 0; goto L_08836ECC; }
    goto L_08836F00;
L_08836F00:;
    goto L_08836E70;
L_08836F08:;
    a0 = sp + 0;
    ST32(sp, v1);
    ST32(sp+4, 0);
    { u64 r_ = func_08AA6C68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08836F18;
L_08836F18:;
    s1 = LD32(sp+4);
    cnd_ = s1 == 0;
    v1 = s2 + 52;
    if (cnd_) { goto L_08836E60; }
    goto L_08836F24;
L_08836F24:;
    s3 = s2 + 12;
    s5 = ((u32)(uintptr_t)func_08AA6B64) - (27492);
    goto L_08836F2C;
L_08836F2C:;
    a0 = sp + 0;
    s0 = LD32(s1);
    { u64 r_ = func_08AA6C68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08836F38;
L_08836F38:;
    a1 = LD32(s1);
    a0 = LD32(sp);
    func_08AA6C8C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08836F44;
L_08836F44:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    a2 = s5 + 27492;
    { rv_t r_ = func_08AA69FC(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08836F54;
L_08836F54:;
    v0 = LD32(s2+84);
    s1 = LD32(sp+4);
    v0 = v0 + 1;
    cnd_ = s1 != 0;
    ST32(s2+84, v0);
    if (cnd_) { goto L_08836F2C; }
    goto L_08836F68;
L_08836F68:;
    v1 = s2 + 52;
    goto L_08836E60;
L_08836F70:;
    f0 = func_0883BCF4(0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08836F78;
L_08836F78:;
    a0 = LD32(s0+4);
    f12 = BITSF(LD32(s0+12));
    f20 = f0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    f12 = f21 - f12;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08836F94;
L_08836F94:;
    f0 = func_0883BCF4(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08836F9C;
L_08836F9C:;
    f1 = BITSF(LD32(s0+12));
    f6 = BITSF(LD32(s7-18424));
    f0 = f0 - f20;
    f5 = f21 - f1;
    f4 = BITSF(LD32(s0+20));
    f2 = f5 + f23;
    f3 = f0 - f4;
    fcc = FCMP(f2, f6, 14);
    cnd_ = fcc;
    f1 = f2;
    if (cnd_) { goto L_08836FCC; }
    goto L_08836FC8;
L_08836FC8:;
    f1 = f6;
    goto L_08836FCC;
L_08836FCC:;
    f0 = BITSF(LD32(s0+8));
    f1 = f3 * f1;
    ST32(s0+12, FBITS(f21));
    f0 = f24 / f0;
    f1 = f4 + f1;
    fcc = FCMP(f2, f6, 14);
    f0 = f5 * f0;
    ST32(s0+20, FBITS(f1));
    f1 = BITSF(LD32(s2+72));
    cnd_ = fcc;
    f0 = f0 - f1;
    if (cnd_) { goto L_08836FFC; }
    goto L_08836FF8;
L_08836FF8:;
    f2 = f6;
    goto L_08836FFC;
L_08836FFC:;
    f0 = f0 * f2;
    s4 = s4 - 1;
    f0 = f1 + f0;
    ST32(s2+72, FBITS(f0));
    goto L_08836D7C;
}

/* 08837010 */
rv_t func_08837010(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08837010:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = D_08B25B0C - (23308);
    a0 = a0 + 23308;
    s2 = a1 + 0;
    f20 = f12;
    { rv_t r_ = func_08AA37A0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08837040;
L_08837040:;
    s1 = v0 + 0;
    cnd_ = s1 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0883713C; }
    goto L_0883704C;
L_0883704C:;
    v0 = LD32(s0+4);
    a0 = D_08B25B18 - (23320);
    a0 = a0 + 23320;
    v1 = v0 + 0;
    v0 = v0 + 1;
    ST32(s0+4, v0);
    ST32(s1, v1);
    { rv_t r_ = func_08AA37A0(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883706C;
L_0883706C:;
    v1 = LD32(s2);
    a1 = v0 + 0;
    v0 = LD32(v1+12);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08837080;
L_08837080:;
    a3 = D_08B25AC0 - (23232);
    a1 = LD32(a3+23232);
    t0 = a3 + 23232;
    a2 = LD32(t0+4);
    v1 = (u32)((s32)a1 >> 16);
    a1 = a1 << 16;
    a1 = a1 + v1;
    a1 = a1 + a2;
    v1 = a1 >> 1;
    f0 = BITSF(v1);
    a0 = D_08AEB810 - (-18416);
    v1 = D_08B2858C - (-31348);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(a0-18416));
    f2 = BITSF(LD32(v1-31348));
    v1 = LD_U8(s0+8);
    f1 = f1 * f0;
    a2 = a2 + a1;
    ST32(t0+4, a2);
    f1 = f1 * f20;
    ST32(s1+4, v0);
    f2 = f2 + f1;
    ST32(a3+23232, a1);
    f0 = f2 - f20;
    ST32(s1+20, FBITS(f20));
    ST32(s1+12, FBITS(f0));
    ST32(s1+8, FBITS(f20));
    cnd_ = v1 == 0;
    ST32(s1+16, FBITS(f2));
    if (cnd_) { goto L_08837170; }
    goto L_088370F4;
L_088370F4:;
    s0 = s0 + 32;
    v0 = LD32(s0+8);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08837160; }
    goto L_08837104;
L_08837104:;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883710C;
L_0883710C:;
    v1 = v0 + 0;
    goto L_08837110;
L_08837110:;
    v0 = LD32(s0);
    ST32(v1, s1);
    ST32(v1+8, v0);
    cnd_ = v0 == 0;
    ST32(v1+4, 0);
    if (cnd_) { goto L_08837158; }
    goto L_08837124;
L_08837124:;
    ST32(v0+4, v1);
    goto L_08837128;
L_08837128:;
    v0 = LD32(s0+16);
    ST32(s0, v1);
    v0 = v0 + 1;
    ST32(s0+16, v0);
    goto L_08837138;
L_08837138:;
    v0 = LD32(s1);
    goto L_0883713C;
L_0883713C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08837158:;
    ST32(s0+4, v1);
    goto L_08837128;
L_08837160:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08837168;
L_08837168:;
    v1 = v0 + 0;
    goto L_08837110;
L_08837170:;
    a2 = ((u32)(uintptr_t)func_08AA6B64) - (27492);
    a0 = s0 + 12;
    a2 = a2 + 27492;
    a1 = s1 + 0;
    { rv_t r_ = func_08AA69FC(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08837184;
L_08837184:;
    v0 = LD32(s0+84);
    v0 = v0 + 1;
    ST32(s0+84, v0);
    goto L_08837138;
}

/* 08837194 */
rv_t func_08837194(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08837194:;
    sp = sp - 48;
    s3 = a1 + 0;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08837240; }
    goto L_088371BC;
L_088371BC:;
    s0 = a0 + 52;
    a0 = 4;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088371C8;
L_088371C8:;
    s1 = v0 + 0;
    v0 = LD32(s0+8);
    cnd_ = v0 != 0;
    ST32(s1, s3);
    if (cnd_) { goto L_08837230; }
    goto L_088371D8;
L_088371D8:;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088371E0;
L_088371E0:;
    v1 = v0 + 0;
    goto L_088371E4;
L_088371E4:;
    v0 = LD32(s0);
    ST32(v1, s1);
    ST32(v1+8, v0);
    cnd_ = v0 == 0;
    ST32(v1+4, 0);
    if (cnd_) { goto L_08837228; }
    goto L_088371F8;
L_088371F8:;
    ST32(v0+4, v1);
    goto L_088371FC;
L_088371FC:;
    v0 = LD32(s0+16);
    ST32(s0, v1);
    v0 = v0 + 1;
    ST32(s0+16, v0);
    goto L_0883720C;
L_0883720C:;
    goto L_08837210;
L_08837210:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08837228:;
    ST32(s0+4, v1);
    goto L_088371FC;
L_08837230:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08837238;
L_08837238:;
    v1 = v0 + 0;
    goto L_088371E4;
L_08837240:;
    v0 = a0 + 12;
    a0 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    { u64 r_ = func_08AA6C68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837254;
L_08837254:;
    s0 = LD32(sp+4);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08837210; }
    goto L_08837260;
L_08837260:;
    s1 = LD32(s0);
    goto L_08837264;
L_08837264:;
    v0 = LD32(s1);
    cnd_ = v0 == s3;
    a0 = sp + 0;
    if (cnd_) { goto L_0883728C; }
    goto L_08837270;
L_08837270:;
    { u64 r_ = func_08AA6C68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837278;
L_08837278:;
    s0 = LD32(sp+4);
    cnd_ = s0 != 0;
    if (cnd_) { s1 = LD32(s0); goto L_08837264; }
    goto L_08837284;
L_08837284:;
    goto L_08837210;
L_0883728C:;
    a0 = sp + 0;
    { u64 r_ = func_08AA6C68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837294;
L_08837294:;
    a1 = LD32(s0);
    a0 = LD32(sp);
    func_08AA6C8C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088372A0;
L_088372A0:;
    a1 = LD32(s1+4);
    a0 = D_08B25B18 - (23320);
    a0 = a0 + 23320;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088372B0;
L_088372B0:;
    a0 = D_08B25B0C - (23308);
    a0 = a0 + 23308;
    a1 = s1 + 0;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088372C0;
L_088372C0:;
    v0 = LD32(s2+84);
    v0 = v0 - 1;
    ST32(s2+84, v0);
    goto L_0883720C;
}

/* 088372D0 */
u64 func_088372D0(u32 a0, u32 a1, u32 t1, u32 t2)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088372D0:;
    sp = sp - 32;
    v0 = a0 ^ 0x1;
    s3 = a1 ^ 0xffff;
    v0 = v0 < 0x1u;
    t3 = s3 < 0x1u;
    v0 = t3 & v0;
    t4 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0883734C; }
    goto L_08837304;
L_08837304:;
    t0 = D_08B25B00 - (23296);
    t1 = D_08B25B0C - (23308);
    t2 = D_08B25B18 - (23320);
    a0 = 16;
    a1 = t0 + 23296;
    a2 = t1 + 23308;
    a3 = t2 + 23320;
    v0 = 12;
    v1 = 24;
    ST32(a1+8, v0);
    ST32(a1+4, a0);
    ST32(a2+8, v1);
    ST32(a2+4, a0);
    ST32(a3+8, a0);
    ST32(t0+23296, 0);
    ST32(t1+23308, 0);
    ST32(t2+23320, 0);
    ST32(a3+4, a0);
    goto L_0883734C;
L_0883734C:;
    s2 = t4 < 0x1u;
    v0 = t3 & s2;
    cnd_ = v0 == 0;
    v0 = s3 < 0x1u;
    if (cnd_) { goto L_08837390; }
    goto L_0883735C;
L_0883735C:;
    v0 = D_08B25B18 - (23320);
    s0 = LD32(v0+23320);
    cnd_ = s0 == 0;
    if (cnd_) { v0 = s3 < 0x1u; goto L_08837390; }
    goto L_0883736C;
L_0883736C:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08837490; }
    goto L_08837378;
L_08837378:;
    s1 = LD32(s0+12);
    goto L_0883737C;
L_0883737C:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_08837478; }
    goto L_08837384;
L_08837384:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883738C;
L_0883738C:;
    v0 = s3 < 0x1u;
    goto L_08837390;
L_08837390:;
    v0 = v0 & s2;
    cnd_ = v0 == 0;
    v0 = s3 < 0x1u;
    if (cnd_) { goto L_088373D0; }
    goto L_0883739C;
L_0883739C:;
    v0 = D_08B25B0C - (23308);
    s0 = LD32(v0+23308);
    cnd_ = s0 == 0;
    if (cnd_) { v0 = s3 < 0x1u; goto L_088373D0; }
    goto L_088373AC;
L_088373AC:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08837468; }
    goto L_088373B8;
L_088373B8:;
    s1 = LD32(s0+12);
    goto L_088373BC;
L_088373BC:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_08837450; }
    goto L_088373C4;
L_088373C4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088373CC;
L_088373CC:;
    v0 = s3 < 0x1u;
    goto L_088373D0;
L_088373D0:;
    v0 = v0 & s2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08837410; }
    goto L_088373DC;
L_088373DC:;
    v0 = D_08B25B00 - (23296);
    s0 = LD32(v0+23296);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08837414; }
    goto L_088373EC;
L_088373EC:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08837440; }
    goto L_088373F8;
L_088373F8:;
    s1 = LD32(s0+12);
    goto L_088373FC;
L_088373FC:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_08837428; }
    goto L_08837404;
L_08837404:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883740C;
L_0883740C:;
    goto L_08837410;
L_08837410:;
    goto L_08837414;
L_08837414:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08837428:;
    a0 = s1 + 0;
    func_08AA3740(a0, t1, t2, t3);
    goto L_08837430;
L_08837430:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837438;
L_08837438:;
    goto L_08837404;
L_08837440:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837448;
L_08837448:;
    s1 = LD32(s0+12);
    goto L_088373FC;
L_08837450:;
    a0 = s1 + 0;
    func_08AA3740(a0, t1, t2, t3);
    goto L_08837458;
L_08837458:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837460;
L_08837460:;
    goto L_088373C4;
L_08837468:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837470;
L_08837470:;
    s1 = LD32(s0+12);
    goto L_088373BC;
L_08837478:;
    a0 = s1 + 0;
    func_08AA3740(a0, t1, t2, t3);
    goto L_08837480;
L_08837480:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837488;
L_08837488:;
    goto L_08837384;
L_08837490:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837498;
L_08837498:;
    s1 = LD32(s0+12);
    goto L_0883737C;
}

/* 088374A0 */
rv_t func_088374A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088374A0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_088372D0(a0, a1, t1, t2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088374B4;
L_088374B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088374C0 */
rv_t func_088374C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088374C0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_088372D0(a0, a1, t1, t2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088374D4;
L_088374D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088374E0 */
void func_088374E0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088374E0:;
    v0 = LD_U16(a1);
    v0 = v0 < 0x100u;
    cnd_ = v0 == 0;
    v1 = 63;
    if (cnd_) { goto L_088374F4; }
    goto L_088374F0;
L_088374F0:;
    v1 = LD_U8(a1);
    goto L_088374F4;
L_088374F4:;
    ST8(a0, v1);
    return;
}

/* 088374FC */
void func_088374FC(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_088374FC:;
    v0 = LD_U8(a1);
    ST16(a0, v0);
    return;
}

/* 08837508 */
void func_08837508(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08837508:;
    v0 = a2 + 0;
    t0 = t0 & 0xff;
    sp = sp - 16;
    a2 = a3 + 0;
    a3 = t0 + 0;
    t0 = v0 + 0;
    { rv_t r_ = func_088385C8(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08837528;
L_08837528:;
    sp = sp + 16;
    return;
}

/* 08837534 */
void func_08837534(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08837534:;
    v0 = a2 + 0;
    t0 = t0 & 0xff;
    sp = sp - 16;
    a2 = a3 + 0;
    a3 = t0 + 0;
    t0 = v0 + 0;
    { rv_t r_ = func_08838958(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08837554;
L_08837554:;
    sp = sp + 16;
    return;
}

/* 08837560 */
rv_t func_08837560(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08837560:;
    sp = sp - 32;
    ST32(sp+16, t0);
    a3 = a3 & 0xff;
    t0 = sp + 16;
    ST32(sp+20, t1);
    ST32(sp+24, t2);
    ST32(sp+28, t3);
    { rv_t r_ = func_088385C8(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08837584;
L_08837584:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08837590 */
rv_t func_08837590(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08837590:;
    sp = sp - 32;
    ST32(sp+16, t0);
    a3 = a3 & 0xff;
    t0 = sp + 16;
    ST32(sp+20, t1);
    ST32(sp+24, t2);
    ST32(sp+28, t3);
    { rv_t r_ = func_08838958(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088375B4;
L_088375B4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088375C0 */
rv_t func_088375C0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0, f22 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088375C0:;
    sp = sp - 48;
    s3 = a1 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088375FC; }
    goto L_088375EC;
L_088375EC:;
    v0 = (u32)(s32)LD_S8(a0);
    f21 = BITSF(0);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0883762C; }
    goto L_088375FC;
L_088375FC:;
    v1 = 0 + 0;
    goto L_08837600;
L_08837600:;
    v0 = v1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0883762C:;
    a0 = (u32)(s32)LD_S8(s0);
    v0 = func_08A87120(a0);
    goto L_08837634;
L_08837634:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = (u32)(s32)LD_S8(s0); goto L_08837644; }
    goto L_0883763C;
L_0883763C:;
    s0 = s0 + 1;
    goto L_0883762C;
L_08837644:;
    s0 = s0 + 1;
    v1 = s1 ^ 0x2d;
    v0 = s1 ^ 0x2b;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 == 0;
    s2 = s1 + 0;
    if (cnd_) { goto L_0883766C; }
    goto L_08837664;
L_08837664:;
    s1 = (u32)(s32)LD_S8(s0);
    s0 = s0 + 1;
    goto L_0883766C;
L_0883766C:;
    a0 = s1 + 0;
    v0 = func_08A87108(a0);
    goto L_08837674;
L_08837674:;
    cnd_ = v0 != 0;
    v0 = D_08AEB824 - (-18396);
    if (cnd_) { goto L_0883768C; }
    goto L_0883767C;
L_0883767C:;
    v0 = 46;
    cnd_ = s1 != v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08837600; }
    goto L_08837688;
L_08837688:;
    v0 = D_08AEB824 - (-18396);
    goto L_0883768C;
L_0883768C:;
    f20 = BITSF(LD32(v0-18396));
    goto L_08837690;
L_08837690:;
    a0 = s1 + 0;
    v0 = func_08A87108(a0);
    goto L_08837698;
L_08837698:;
    v1 = s1 - 48;
    f0 = BITSF(v1);
    f1 = f21 * f20;
    cnd_ = v0 == 0;
    f0 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_088376BC; }
    goto L_088376AC;
L_088376AC:;
    f21 = f1 + f0;
    s1 = (u32)(s32)LD_S8(s0);
    s0 = s0 + 1;
    goto L_08837690;
L_088376BC:;
    v0 = 46;
    cnd_ = s1 == v0;
    v0 = D_08AEB828 - (-18392);
    if (cnd_) { goto L_08837710; }
    goto L_088376C8;
L_088376C8:;
    v0 = 102;
    cnd_ = s1 == v0;
    if (cnd_) { s1 = (u32)(s32)LD_S8(s0); goto L_088376D4; }
    goto L_088376D4;
L_088376D4:;
    cnd_ = s1 != 0;
    v0 = 45;
    if (cnd_) { goto L_088376F8; }
    goto L_088376DC;
L_088376DC:;
    cnd_ = s2 == v0;
    f0 = f21;
    if (cnd_) { goto L_088376F0; }
    goto L_088376E4;
L_088376E4:;
    ST32(s3, FBITS(f0));
    v1 = 1;
    goto L_08837600;
L_088376F0:;
    f0 = BITSF(FBITS(f21) ^ 0x80000000u);
    goto L_088376E4;
L_088376F8:;
    a0 = s1 + 0;
    v0 = func_08A87120(a0);
    goto L_08837700;
L_08837700:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08837600; }
    goto L_08837708;
L_08837708:;
    v0 = 45;
    goto L_088376DC;
L_08837710:;
    f20 = BITSF(LD32(v0-18392));
    s1 = (u32)(s32)LD_S8(s0);
    s0 = s0 + 1;
    f22 = f20;
    goto L_08837720;
L_08837720:;
    a0 = s1 + 0;
    v0 = func_08A87108(a0);
    goto L_08837728;
L_08837728:;
    v1 = s1 - 48;
    f0 = BITSF(v1);
    cnd_ = v0 == 0;
    f0 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_088376C8; }
    goto L_08837738;
L_08837738:;
    f0 = f0 * f20;
    f20 = f20 * f22;
    s1 = (u32)(s32)LD_S8(s0);
    s0 = s0 + 1;
    f21 = f21 + f0;
    goto L_08837720;
}

/* 08837750 */
u64 func_08837750(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08837750:;
    sp = sp - 32;
    s5 = a1 + 0;
    s3 = a2 & 0xff;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0883778C; }
    goto L_0883777C;
L_0883777C:;
    v0 = (u32)(s32)LD_S8(a0);
    s1 = a0 + 0;
    cnd_ = v0 != 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088377B8; }
    goto L_0883778C;
L_0883778C:;
    v1 = 0 + 0;
    goto L_08837790;
L_08837790:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088377B8:;
    a0 = (u32)(s32)LD_S8(s1);
    v0 = func_08A87120(a0);
    goto L_088377C0;
L_088377C0:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = (u32)(s32)LD_S8(s1); goto L_088377D0; }
    goto L_088377C8;
L_088377C8:;
    s1 = s1 + 1;
    goto L_088377B8;
L_088377D0:;
    s1 = s1 + 1;
    v1 = s0 ^ 0x2d;
    v0 = s0 ^ 0x2b;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 == 0;
    s4 = s0 + 0;
    if (cnd_) { goto L_088377F8; }
    goto L_088377F0;
L_088377F0:;
    s0 = (u32)(s32)LD_S8(s1);
    s1 = s1 + 1;
    goto L_088377F8;
L_088377F8:;
    v0 = 48;
    cnd_ = s0 == v0;
    if (cnd_) { a0 = (u32)(s32)LD_S8(s1); goto L_08837908; }
    goto L_08837804;
L_08837804:;
    cnd_ = s3 == 0;
    if (cnd_) { goto L_088378CC; }
    goto L_0883780C;
L_0883780C:;
    s3 = s1 + 0;
    goto L_08837810;
L_08837810:;
    a0 = s0 + 0;
    v0 = func_08A87108(a0);
    goto L_08837818;
L_08837818:;
    v1 = s0 - 65;
    a2 = s0 - 97;
    a0 = s2 << 4;
    v1 = v1 & 0xff;
    a0 = a0 + s0;
    a3 = v1 < 0x6u;
    cnd_ = v0 != 0;
    a1 = a2 + 0;
    if (cnd_) { goto L_08837858; }
    goto L_08837838;
L_08837838:;
    v1 = s0 - 65;
    v0 = a2 & 0xff;
    v1 = v1 & 0xff;
    v0 = v0 < 0x6u;
    cnd_ = v0 != 0;
    v1 = v1 < 0x6u;
    if (cnd_) { goto L_08837858; }
    goto L_08837850;
L_08837850:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0883788C; }
    goto L_08837858;
L_08837858:;
    v0 = a1 & 0xff;
    v0 = v0 < 0x6u;
    cnd_ = v0 == 0;
    v0 = s2 << 4;
    if (cnd_) { goto L_08837878; }
    goto L_08837868;
L_08837868:;
    s2 = a0 - 87;
    goto L_0883786C;
L_0883786C:;
    s0 = (u32)(s32)LD_S8(s1);
    s1 = s1 + 1;
    goto L_08837810;
L_08837878:;
    a0 = v0 + s0;
    cnd_ = a3 != 0;
    s2 = a0 - 55;
    if (cnd_) { goto L_0883786C; }
    goto L_08837884;
L_08837884:;
    s2 = a0 - 48;
    goto L_0883786C;
L_0883788C:;
    cnd_ = s1 == s3;
    v1 = 0 + 0;
    if (cnd_) { goto L_08837790; }
    goto L_08837894;
L_08837894:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088378B4; }
    goto L_0883789C;
L_0883789C:;
    v1 = s4 ^ 0x2d;
    goto L_088378A0;
L_088378A0:;
    v0 = 0 - s2;
    if (v1 == 0) s2 = v0;
    ST32(s5, s2);
    v1 = 1;
    goto L_08837790;
L_088378B4:;
    a0 = s0 + 0;
    v0 = func_08A87120(a0);
    goto L_088378BC;
L_088378BC:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08837790; }
    goto L_088378C4;
L_088378C4:;
    v1 = s4 ^ 0x2d;
    goto L_088378A0;
L_088378CC:;
    a0 = s0 + 0;
    v0 = func_08A87108(a0);
    goto L_088378D4;
L_088378D4:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08837790; }
    goto L_088378DC;
L_088378DC:;
    a0 = s0 + 0;
    v0 = func_08A87108(a0);
    goto L_088378E4;
L_088378E4:;
    v1 = s2 << 2;
    v1 = v1 + s2;
    v1 = v1 << 1;
    cnd_ = v0 == 0;
    v1 = v1 + s0;
    if (cnd_) { goto L_08837894; }
    goto L_088378F8;
L_088378F8:;
    s0 = (u32)(s32)LD_S8(s1);
    s2 = v1 - 48;
    s1 = s1 + 1;
    goto L_088378DC;
L_08837908:;
    cnd_ = a0 == 0;
    v1 = a0 ^ 0x58;
    if (cnd_) { goto L_08837804; }
    goto L_08837910;
L_08837910:;
    v0 = a0 ^ 0x78;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08837938; }
    goto L_08837928;
L_08837928:;
    s1 = s1 + 1;
    s0 = (u32)(s32)LD_S8(s1);
    s1 = s1 + 1;
    goto L_0883780C;
L_08837938:;
    v0 = func_08A87108(a0);
    goto L_08837940;
L_08837940:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08837804; }
    goto L_08837948;
L_08837948:;
    cnd_ = s3 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08837790; }
    goto L_08837950;
L_08837950:;
    s3 = s1 + 0;
    goto L_08837810;
}

/* 08837958 */
u64 func_08837958(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08837958:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08837980; }
    goto L_08837974;
L_08837974:;
    v0 = LD_U8(a0);
    cnd_ = v0 != 0;
    v0 = (u32)(s32)(s8)v0;
    if (cnd_) { goto L_088379A0; }
    goto L_08837980;
L_08837980:;
    v1 = 0 + 0;
    goto L_08837984;
L_08837984:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0883799C:;
    v0 = (u32)(s32)(s8)v0;
    goto L_088379A0;
L_088379A0:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088379C4; }
    goto L_088379A8;
L_088379A8:;
    v0 = func_08A87120(a0);
    goto L_088379B0;
L_088379B0:;
    cnd_ = v0 == 0;
    a1 = D_08AD40D4 - (16596);
    if (cnd_) { goto L_088379C8; }
    goto L_088379B8;
L_088379B8:;
    s0 = s0 + 1;
    v0 = LD_U8(s0);
    goto L_0883799C;
L_088379C4:;
    a1 = D_08AD40D4 - (16596);
    goto L_088379C8;
L_088379C8:;
    a1 = a1 + 16596;
    a0 = s0 + 0;
    { u64 r_ = func_08A89724(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088379D4;
L_088379D4:;
    cnd_ = v0 != 0;
    a1 = D_08AD40D8 - (16600);
    if (cnd_) { goto L_088379EC; }
    goto L_088379DC;
L_088379DC:;
    v0 = 1;
    goto L_088379E0;
L_088379E0:;
    v1 = 1;
    ST8(s1, v0);
    goto L_08837984;
L_088379EC:;
    a1 = a1 + 16600;
    a0 = s0 + 0;
    { u64 r_ = func_08A89724(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088379F8;
L_088379F8:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_088379E0; }
    goto L_08837A00;
L_08837A00:;
    a1 = D_08AD40E0 - (16608);
    a1 = a1 + 16608;
    a0 = s0 + 0;
    { u64 r_ = func_08A89724(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837A10;
L_08837A10:;
    cnd_ = v0 != 0;
    a1 = D_08AD40E4 - (16612);
    if (cnd_) { goto L_08837A24; }
    goto L_08837A18;
L_08837A18:;
    ST8(s1, 0);
    goto L_08837A1C;
L_08837A1C:;
    v1 = 1;
    goto L_08837984;
L_08837A24:;
    a0 = s0 + 0;
    a1 = a1 + 16612;
    { u64 r_ = func_08A89724(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837A30;
L_08837A30:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08837984; }
    goto L_08837A38;
L_08837A38:;
    ST8(s1, 0);
    goto L_08837A1C;
}

/* 08837A40 */
u32 func_08837A40(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08837A40:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08837A68; }
    goto L_08837A5C;
L_08837A5C:;
    v0 = LD_U16(a0);
    cnd_ = v0 != 0;
    v0 = v0 & 0xffff;
    if (cnd_) { goto L_08837A88; }
    goto L_08837A68;
L_08837A68:;
    v1 = 0 + 0;
    goto L_08837A6C;
L_08837A6C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08837A84:;
    v0 = v0 & 0xffff;
    goto L_08837A88;
L_08837A88:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08837AAC; }
    goto L_08837A90;
L_08837A90:;
    { u64 r_ = func_08A8715C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837A98;
L_08837A98:;
    cnd_ = v0 == 0;
    a1 = D_08AD40EC - (16620);
    if (cnd_) { goto L_08837AB0; }
    goto L_08837AA0;
L_08837AA0:;
    s0 = s0 + 2;
    v0 = LD_U16(s0);
    goto L_08837A84;
L_08837AAC:;
    a1 = D_08AD40EC - (16620);
    goto L_08837AB0;
L_08837AB0:;
    a1 = a1 + 16620;
    a0 = s0 + 0;
    { u64 r_ = func_088F8F38(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837ABC;
L_08837ABC:;
    cnd_ = v0 != 0;
    a1 = D_08AD40F0 - (16624);
    if (cnd_) { goto L_08837AD4; }
    goto L_08837AC4;
L_08837AC4:;
    v0 = 1;
    goto L_08837AC8;
L_08837AC8:;
    v1 = 1;
    ST8(s1, v0);
    goto L_08837A6C;
L_08837AD4:;
    a1 = a1 + 16624;
    a0 = s0 + 0;
    { u64 r_ = func_088F8F38(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837AE0;
L_08837AE0:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08837AC8; }
    goto L_08837AE8;
L_08837AE8:;
    a1 = D_08AD40FC - (16636);
    a1 = a1 + 16636;
    a0 = s0 + 0;
    { u64 r_ = func_088F8F38(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837AF8;
L_08837AF8:;
    cnd_ = v0 != 0;
    a1 = D_08AD4100 - (16640);
    if (cnd_) { goto L_08837B0C; }
    goto L_08837B00;
L_08837B00:;
    ST8(s1, 0);
    goto L_08837B04;
L_08837B04:;
    v1 = 1;
    goto L_08837A6C;
L_08837B0C:;
    a0 = s0 + 0;
    a1 = a1 + 16640;
    { u64 r_ = func_088F8F38(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837B18;
L_08837B18:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08837A6C; }
    goto L_08837B20;
L_08837B20:;
    ST8(s1, 0);
    goto L_08837B04;
}

/* 08837B28 */
u32 func_08837B28(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0, f22 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08837B28:;
    sp = sp - 48;
    s3 = a1 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08837B64; }
    goto L_08837B54;
L_08837B54:;
    v0 = LD_U16(a0);
    f21 = BITSF(0);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08837B94; }
    goto L_08837B64;
L_08837B64:;
    v1 = 0 + 0;
    goto L_08837B68;
L_08837B68:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_08837B94:;
    a0 = LD_U16(s0);
    { u64 r_ = func_08A8715C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837B9C;
L_08837B9C:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD_U16(s0); goto L_08837BAC; }
    goto L_08837BA4;
L_08837BA4:;
    s0 = s0 + 2;
    goto L_08837B94;
L_08837BAC:;
    s0 = s0 + 2;
    v1 = s1 ^ 0x2d;
    v0 = s1 ^ 0x2b;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 == 0;
    s2 = s1 + 0;
    if (cnd_) { goto L_08837BD4; }
    goto L_08837BCC;
L_08837BCC:;
    s1 = LD_U16(s0);
    s0 = s0 + 2;
    goto L_08837BD4;
L_08837BD4:;
    a0 = s1 + 0;
    v0 = func_08A87150(a0);
    goto L_08837BDC;
L_08837BDC:;
    cnd_ = v0 != 0;
    v0 = D_08AEB82C - (-18388);
    if (cnd_) { goto L_08837BF4; }
    goto L_08837BE4;
L_08837BE4:;
    v0 = 46;
    cnd_ = s1 != v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08837B68; }
    goto L_08837BF0;
L_08837BF0:;
    v0 = D_08AEB82C - (-18388);
    goto L_08837BF4;
L_08837BF4:;
    f20 = BITSF(LD32(v0-18388));
    goto L_08837BF8;
L_08837BF8:;
    a0 = s1 + 0;
    v0 = func_08A87150(a0);
    goto L_08837C00;
L_08837C00:;
    v1 = s1 - 48;
    f0 = BITSF(v1);
    f1 = f21 * f20;
    cnd_ = v0 == 0;
    f0 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08837C24; }
    goto L_08837C14;
L_08837C14:;
    f21 = f1 + f0;
    s1 = LD_U16(s0);
    s0 = s0 + 2;
    goto L_08837BF8;
L_08837C24:;
    v0 = 46;
    cnd_ = s1 == v0;
    v0 = D_08AEB830 - (-18384);
    if (cnd_) { goto L_08837C78; }
    goto L_08837C30;
L_08837C30:;
    v0 = 102;
    cnd_ = s1 == v0;
    if (cnd_) { s1 = LD_U16(s0); goto L_08837C3C; }
    goto L_08837C3C;
L_08837C3C:;
    cnd_ = s1 != 0;
    v0 = 45;
    if (cnd_) { goto L_08837C60; }
    goto L_08837C44;
L_08837C44:;
    cnd_ = s2 == v0;
    f0 = f21;
    if (cnd_) { goto L_08837C58; }
    goto L_08837C4C;
L_08837C4C:;
    ST32(s3, FBITS(f0));
    v1 = 1;
    goto L_08837B68;
L_08837C58:;
    f0 = BITSF(FBITS(f21) ^ 0x80000000u);
    goto L_08837C4C;
L_08837C60:;
    a0 = s1 + 0;
    { u64 r_ = func_08A8715C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837C68;
L_08837C68:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08837B68; }
    goto L_08837C70;
L_08837C70:;
    v0 = 45;
    goto L_08837C44;
L_08837C78:;
    f20 = BITSF(LD32(v0-18384));
    s1 = LD_U16(s0);
    s0 = s0 + 2;
    f22 = f20;
    goto L_08837C88;
L_08837C88:;
    a0 = s1 + 0;
    v0 = func_08A87150(a0);
    goto L_08837C90;
L_08837C90:;
    v1 = s1 - 48;
    f0 = BITSF(v1);
    cnd_ = v0 == 0;
    f0 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08837C30; }
    goto L_08837CA0;
L_08837CA0:;
    f0 = f20 * f0;
    f20 = f20 * f22;
    s1 = LD_U16(s0);
    s0 = s0 + 2;
    f21 = f21 + f0;
    goto L_08837C88;
}

/* 08837CB8 */
u32 func_08837CB8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08837CB8:;
    sp = sp - 32;
    s5 = a1 + 0;
    s3 = a2 & 0xff;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08837CF4; }
    goto L_08837CE4;
L_08837CE4:;
    v0 = LD_U16(a0);
    s1 = a0 + 0;
    cnd_ = v0 != 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08837D20; }
    goto L_08837CF4;
L_08837CF4:;
    v1 = 0 + 0;
    goto L_08837CF8;
L_08837CF8:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_08837D20:;
    a0 = LD_U16(s1);
    { u64 r_ = func_08A8715C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837D28;
L_08837D28:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD_U16(s1); goto L_08837D38; }
    goto L_08837D30;
L_08837D30:;
    s1 = s1 + 2;
    goto L_08837D20;
L_08837D38:;
    s1 = s1 + 2;
    v1 = s0 ^ 0x2d;
    v0 = s0 ^ 0x2b;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 == 0;
    s4 = s0 + 0;
    if (cnd_) { goto L_08837D60; }
    goto L_08837D58;
L_08837D58:;
    s0 = LD_U16(s1);
    s1 = s1 + 2;
    goto L_08837D60;
L_08837D60:;
    v0 = 48;
    cnd_ = s0 == v0;
    if (cnd_) { a0 = LD_U16(s1); goto L_08837E64; }
    goto L_08837D6C;
L_08837D6C:;
    cnd_ = s3 == 0;
    if (cnd_) { goto L_08837E28; }
    goto L_08837D74;
L_08837D74:;
    s3 = s1 + 0;
    goto L_08837D78;
L_08837D78:;
    a0 = s0 + 0;
    v0 = func_08A87150(a0);
    goto L_08837D80;
L_08837D80:;
    a2 = s0 - 97;
    v1 = s2 << 4;
    a0 = s0 - 65;
    a3 = v1 + s0;
    a0 = a0 < 0x6u;
    cnd_ = v0 != 0;
    a1 = a2 + 0;
    if (cnd_) { goto L_08837DB4; }
    goto L_08837D9C;
L_08837D9C:;
    v0 = a2 & 0xffff;
    v0 = v0 < 0x6u;
    cnd_ = v0 != 0;
    v0 = a1 & 0xffff;
    if (cnd_) { goto L_08837DB8; }
    goto L_08837DAC;
L_08837DAC:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08837DE8; }
    goto L_08837DB4;
L_08837DB4:;
    v0 = a1 & 0xffff;
    goto L_08837DB8;
L_08837DB8:;
    v0 = v0 < 0x6u;
    cnd_ = v0 == 0;
    v0 = s2 << 4;
    if (cnd_) { goto L_08837DD4; }
    goto L_08837DC4;
L_08837DC4:;
    s2 = a3 - 87;
    goto L_08837DC8;
L_08837DC8:;
    s0 = LD_U16(s1);
    s1 = s1 + 2;
    goto L_08837D78;
L_08837DD4:;
    a1 = v0 + s0;
    cnd_ = a0 != 0;
    s2 = a1 - 55;
    if (cnd_) { goto L_08837DC8; }
    goto L_08837DE0;
L_08837DE0:;
    s2 = a1 - 48;
    goto L_08837DC8;
L_08837DE8:;
    cnd_ = s1 == s3;
    v1 = 0 + 0;
    if (cnd_) { goto L_08837CF8; }
    goto L_08837DF0;
L_08837DF0:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08837E10; }
    goto L_08837DF8;
L_08837DF8:;
    v1 = s4 ^ 0x2d;
    goto L_08837DFC;
L_08837DFC:;
    v0 = 0 - s2;
    if (v1 == 0) s2 = v0;
    ST32(s5, s2);
    v1 = 1;
    goto L_08837CF8;
L_08837E10:;
    a0 = s0 + 0;
    { u64 r_ = func_08A8715C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837E18;
L_08837E18:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08837CF8; }
    goto L_08837E20;
L_08837E20:;
    v1 = s4 ^ 0x2d;
    goto L_08837DFC;
L_08837E28:;
    a0 = s0 + 0;
    v0 = func_08A87150(a0);
    goto L_08837E30;
L_08837E30:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08837CF8; }
    goto L_08837E38;
L_08837E38:;
    a0 = s0 + 0;
    v0 = func_08A87150(a0);
    goto L_08837E40;
L_08837E40:;
    v1 = s2 << 2;
    v1 = v1 + s2;
    v1 = v1 << 1;
    cnd_ = v0 == 0;
    v1 = v1 + s0;
    if (cnd_) { goto L_08837DF0; }
    goto L_08837E54;
L_08837E54:;
    s0 = LD_U16(s1);
    s2 = v1 - 48;
    s1 = s1 + 2;
    goto L_08837E38;
L_08837E64:;
    cnd_ = a0 == 0;
    v1 = a0 ^ 0x58;
    if (cnd_) { goto L_08837D6C; }
    goto L_08837E6C;
L_08837E6C:;
    v0 = a0 ^ 0x78;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08837E94; }
    goto L_08837E84;
L_08837E84:;
    s1 = s1 + 2;
    s0 = LD_U16(s1);
    s1 = s1 + 2;
    goto L_08837D74;
L_08837E94:;
    v0 = func_08A87150(a0);
    goto L_08837E9C;
L_08837E9C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08837D6C; }
    goto L_08837EA4;
L_08837EA4:;
    cnd_ = s3 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08837CF8; }
    goto L_08837EAC;
L_08837EAC:;
    s3 = s1 + 0;
    goto L_08837D78;
}

/* 08837EB4 */
void func_08837EB4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08837EB4:;
    sp = sp - 32;
    a2 = sp + 0;
    v0 = func_08837EF4(a0, a1, a2);
    goto L_08837EC4;
L_08837EC4:;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08837EE4; }
    goto L_08837ED0;
L_08837ED0:;
    a0 = v0 + 0;
    v0 = LD32(sp);
    v0 = v0 << 1;
    v0 = v0 + v1;
    ST16(v0, 0);
    goto L_08837EE4;
L_08837EE4:;
    v0 = a0 + 0;
    sp = sp + 32;
    return;
}

/* 08837EF4 */
u32 func_08837EF4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08837EF4:;
    sp = sp - 32;
    v0 = 0 + 0;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s1 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08837FB4; }
    goto L_08837F20;
L_08837F20:;
    v0 = a1 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD_U16(s1); goto L_08837F54; }
    goto L_08837F2C;
L_08837F2C:;
    v1 = LD_U16(s1);
    v0 = v1 & 0xffff;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08837F58; }
    goto L_08837F3C;
L_08837F3C:;
    { u64 r_ = func_08A8715C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837F44;
L_08837F44:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD_U16(s1); goto L_08837F54; }
    goto L_08837F4C;
L_08837F4C:;
    s1 = s1 + 2;
    goto L_08837F2C;
L_08837F54:;
    v0 = v1 & 0xffff;
    goto L_08837F58;
L_08837F58:;
    cnd_ = v0 == 0;
    s0 = s1 + 0;
    if (cnd_) { goto L_08837F70; }
    goto L_08837F60;
L_08837F60:;
    s0 = s0 + 2;
    goto L_08837F64;
L_08837F64:;
    v0 = LD_U16(s0);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = s0 + 2; goto L_08837F64; }
    goto L_08837F70;
L_08837F70:;
    v0 = s2 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08837FA0; }
    goto L_08837F7C;
L_08837F7C:;
    v0 = s1 < s0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08837FA0; }
    goto L_08837F88;
L_08837F88:;
    a0 = LD_U16(s0-2);
    { u64 r_ = func_08A8715C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837F90;
L_08837F90:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08837FA0; }
    goto L_08837F98;
L_08837F98:;
    s0 = s0 - 2;
    goto L_08837F7C;
L_08837FA0:;
    cnd_ = s3 == 0;
    v0 = s0 - s1;
    if (cnd_) { goto L_08837FB0; }
    goto L_08837FA8;
L_08837FA8:;
    v0 = (u32)((s32)v0 >> 1);
    ST32(s3, v0);
    goto L_08837FB0;
L_08837FB0:;
    v0 = s1 + 0;
    goto L_08837FB4;
L_08837FB4:;
    sp = sp + 32;
    return v0;
}

/* 08837FD0 */
u32 func_08837FD0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08837FD0:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = 0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08838004; }
    goto L_08837FEC;
L_08837FEC:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08837FF4;
L_08837FF4:;
    v0 = v0 + 1;
    a0 = v0 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08838000;
L_08838000:;
    s0 = v0 + 0;
    goto L_08838004;
L_08838004:;
    a1 = s1 + 0;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08838018; }
    goto L_08838010;
L_08838010:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08838018;
L_08838018:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 08838030 */
rv_t func_08838030(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08838030:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = 0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08838068; }
    goto L_0883804C;
L_0883804C:;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08838054;
L_08838054:;
    v0 = v0 + 1;
    v0 = v0 << 1;
    a0 = v0 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08838064;
L_08838064:;
    s0 = v0 + 0;
    goto L_08838068;
L_08838068:;
    a1 = s1 + 0;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0883807C; }
    goto L_08838074;
L_08838074:;
    { u64 r_ = func_088F9110(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883807C;
L_0883807C:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08838094 */
u32 func_08838094(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08838094:;
    sp = sp - 32;
    s2 = a1 + 0;
    s1 = 0 + 0;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088380CC; }
    goto L_088380C0;
L_088380C0:;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088380C8;
L_088380C8:;
    s1 = v0 + 0;
    goto L_088380CC;
L_088380CC:;
    v0 = s1 < 0x2u;
    cnd_ = v0 != 0;
    v0 = s1 << 1;
    if (cnd_) { goto L_088380EC; }
    goto L_088380D8;
L_088380D8:;
    a2 = LD_U16(s0);
    v1 = v0 + s0;
    v0 = 34;
    cnd_ = a2 == v0;
    s3 = v1 - 2;
    if (cnd_) { goto L_08838118; }
    goto L_088380EC;
L_088380EC:;
    cnd_ = s2 != 0;
    if (cnd_) { ST32(s2, s1); goto L_088380F4; }
    goto L_088380F4;
L_088380F4:;
    v0 = s0 + 0;
    sp = sp + 32;
    return v0;
L_08838118:;
    v0 = LD_U16(v1-2);
    s4 = s0 + 2;
    a0 = s4 + 0;
    cnd_ = v0 != a2;
    a1 = 34;
    if (cnd_) { goto L_088380EC; }
    goto L_0883812C;
L_0883812C:;
    { u64 r_ = func_088F9058(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08838134;
L_08838134:;
    cnd_ = v0 != s3;
    if (cnd_) { goto L_088380EC; }
    goto L_0883813C;
L_0883813C:;
    s0 = s4 + 0;
    s1 = s1 - 2;
    goto L_088380EC;
}

/* 08838148 */
u64 func_08838148(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08838148:;
    sp = sp - 16;
    v1 = 0 + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08838188; }
    goto L_08838168;
L_08838168:;
    { u64 r_ = func_08A89EE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08838170;
L_08838170:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08838188; }
    goto L_08838178;
L_08838178:;
    cnd_ = s1 == 0;
    v0 = v0 - s0;
    if (cnd_) { goto L_08838184; }
    goto L_08838180;
L_08838180:;
    ST32(s1, v0);
    goto L_08838184;
L_08838184:;
    v1 = 1;
    goto L_08838188;
L_08838188:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088381A0 */
void func_088381A0(u32 a0)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088381A0:;
    sp = sp - 16;
    s1 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088381EC; }
    goto L_088381B8;
L_088381B8:;
    s0 = (u32)(s32)LD_S8(s1);
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088381EC; }
    goto L_088381C4;
L_088381C4:;
    v0 = func_08A87138(a0);
    goto L_088381CC;
L_088381CC:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088381DC; }
    goto L_088381D4;
L_088381D4:;
    s1 = s1 + 1;
    goto L_088381B8;
L_088381DC:;
    v0 = func_08A8B240(a0);
    goto L_088381E4;
L_088381E4:;
    ST8(s1, v0);
    goto L_088381D4;
L_088381EC:;
    sp = sp + 16;
    return;
}

/* 08838200 */
void func_08838200(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t7 = 0, s0 = 0, t8 = 0, t9 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08838200:;
    sp = sp - 16;
    t1 = a0 + 0;
    t0 = a1 + 0;
    v0 = LD_U16(a0);
    a3 = 0 + 0;
    cnd_ = v0 == 0;
    t3 = 0 + 0;
    if (cnd_) { goto L_08838270; }
    goto L_08838220;
L_08838220:;
    a0 = 0 + 0;
    s0 = (u32)-64;
    t8 = (u32)-128;
    t9 = (u32)-32;
    v0 = a0 + t1;
    goto L_08838234;
L_08838234:;
    a0 = LD_U16(v0);
    a1 = t0 + a3;
    v0 = a0 < 0x80u;
    v1 = a0 & 0x7f;
    cnd_ = v0 == 0;
    t2 = a0 < 0x800u;
    if (cnd_) { goto L_08838288; }
    goto L_0883824C;
L_0883824C:;
    a3 = a3 + 1;
    ST8(a1, v1);
    goto L_08838254;
L_08838254:;
    t3 = t3 + 1;
    v0 = t3 << 1;
    v1 = v0 + t1;
    a0 = v0 + 0;
    v0 = LD_U16(v1);
    cnd_ = v0 != 0;
    v0 = a0 + t1;
    if (cnd_) { goto L_08838234; }
    goto L_08838270;
L_08838270:;
    v0 = t0 + a3;
    ST8(v0, 0);
    v0 = a3 + 0;
    sp = sp + 16;
    return;
L_08838288:;
    a1 = a0 & 0x3f;
    v0 = (a0 >> 6) & 0x1f;
    v1 = a0 >> 12;
    a0 = (a0 >> 6) & 0x3f;
    t7 = t0 + a3;
    t4 = v0 | s0;
    a1 = a1 | t8;
    t5 = v1 | t9;
    cnd_ = t2 == 0;
    a0 = a0 | t8;
    if (cnd_) { goto L_088382C8; }
    goto L_088382B0;
L_088382B0:;
    a3 = a3 + 1;
    v0 = t0 + a3;
    a3 = a3 + 1;
    ST8(t7, t4);
    goto L_088382C0;
L_088382C0:;
    ST8(v0, a1);
    goto L_08838254;
L_088382C8:;
    a3 = a3 + 1;
    v1 = t0 + a3;
    a3 = a3 + 1;
    v0 = t0 + a3;
    ST8(t7, t5);
    a3 = a3 + 1;
    ST8(v1, a0);
    goto L_088382C0;
}

/* 088382E8 */
void func_088382E8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    int cnd_;
L_088382E8:;
    a2 = LD_U8(a0);
    v0 = (u32)(s32)(s8)a2;
    cnd_ = v0 == 0;
    t2 = 0 + 0;
    if (cnd_) { goto L_08838350; }
    goto L_088382F8;
L_088382F8:;
    v1 = v0 + 0;
    t3 = 224;
    t4 = 192;
    a3 = a1 + 0;
    goto L_08838308;
L_08838308:;
    v0 = a2 & 0xf;
    t1 = v0 << 12;
    v0 = v1 & 0xe0;
    cnd_ = v0 == t3;
    t0 = v1 & 0xc0;
    if (cnd_) { goto L_0883838C; }
    goto L_0883831C;
L_0883831C:;
    v1 = a2 & 0x1f;
    v0 = a2 << 24;
    v1 = v1 << 6;
    cnd_ = t0 == t4;
    v0 = (u32)((s32)v0 >> 24);
    if (cnd_) { goto L_08838364; }
    goto L_08838330;
L_08838330:;
    ST16(a3, v0);
    t2 = t2 + 1;
    a3 = a3 + 2;
    a0 = a0 + 1;
    goto L_08838340;
L_08838340:;
    a2 = LD_U8(a0);
    v0 = (u32)(s32)(s8)a2;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08838308; }
    goto L_08838350;
L_08838350:;
    v0 = t2 << 1;
    v0 = v0 + a1;
    ST16(v0, 0);
    v0 = t2 + 0;
    return;
L_08838364:;
    ST16(a3, v1);
    a0 = a0 + 1;
    t2 = t2 + 1;
    v0 = LD_U8(a0);
    a0 = a0 + 1;
    v0 = v0 & 0x3f;
    v0 = v1 + v0;
    goto L_08838380;
L_08838380:;
    ST16(a3, v0);
    a3 = a3 + 2;
    goto L_08838340;
L_0883838C:;
    ST16(a3, t1);
    a0 = a0 + 1;
    t2 = t2 + 1;
    v0 = LD_U8(a0);
    a0 = a0 + 1;
    v0 = v0 & 0x3f;
    v0 = v0 << 6;
    v0 = t1 + v0;
    ST16(a3, v0);
    v1 = LD_U8(a0);
    a0 = a0 + 1;
    v1 = v1 & 0x3f;
    v0 = v0 + v1;
    goto L_08838380;
}

/* 088383C4 */
void func_088383C4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088383C4:;
    sp = sp - 64;
    s7 = 0 + 0;
    s5 = 0 + 0;
    s4 = a0 + 0;
    s6 = LD32(a0+4);
    ST32(sp, 0);
    ST32(sp+4, 0);
    cnd_ = s6 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_088384AC; }
    goto L_08838410;
L_08838410:;
    fp = 92;
    v0 = LD32(s4);
    goto L_08838418;
L_08838418:;
    v0 = v0 + s5;
    s2 = (u32)(s32)LD_S8(v0);
    v0 = 92;
    v1 = s2 ^ 0x2f;
    if (v1 == 0) s2 = v0;
    cnd_ = s2 == fp;
    if (cnd_) { goto L_088385A8; }
    goto L_08838434;
L_08838434:;
    s7 = 0 + 0;
    goto L_08838438;
L_08838438:;
    v0 = LD32(sp+8);
    a0 = 1;
    v1 = 2;
    if (v0 != 0) v1 = a0;
    s3 = v0 + v1;
    a0 = s3 + 0;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08838454;
L_08838454:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    s1 = sp + 0;
    if (cnd_) { goto L_0883849C; }
    goto L_08838460;
L_08838460:;
    a1 = LD32(sp);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08838584; }
    goto L_0883846C;
L_0883846C:;
    v0 = LD32(s1+4);
    goto L_08838470;
L_08838470:;
    ST32(s1, s0);
    v0 = s0 + v0;
    ST32(s1+8, s3);
    ST8(v0, s2);
    v1 = LD32(s1+4);
    v0 = LD32(s1);
    v0 = v0 + v1;
    ST8(v0+1, 0);
    v1 = LD32(s1+4);
    v1 = v1 + 1;
    ST32(s1+4, v1);
    goto L_0883849C;
L_0883849C:;
    s5 = s5 + 1;
    goto L_088384A0;
L_088384A0:;
    v0 = s5 < s6;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s4); goto L_08838418; }
    goto L_088384AC;
L_088384AC:;
    a1 = LD32(sp);
    a0 = s4 + 0;
    a2 = 1;
    { u64 r_ = func_08AA3308(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088384BC;
L_088384BC:;
    cnd_ = v0 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08838520; }
    goto L_088384C4;
L_088384C4:;
    a0 = LD32(s4);
    cnd_ = a0 == 0;
    s0 = LD32(sp);
    if (cnd_) { goto L_088384E4; }
    goto L_088384D0;
L_088384D0:;
    cnd_ = s0 == a0;
    if (cnd_) { a0 = LD32(sp); goto L_08838520; }
    goto L_088384D8;
L_088384D8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088384E0;
L_088384E0:;
    ST32(s4, 0);
    goto L_088384E4;
L_088384E4:;
    ST32(s4+8, 0);
    cnd_ = s0 == 0;
    ST32(s4+4, 0);
    if (cnd_) { goto L_0883857C; }
    goto L_088384F0;
L_088384F0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088384F8;
L_088384F8:;
    v1 = v0 + 1;
    ST32(s4+4, v0);
    a0 = v1 + 0;
    ST32(s4+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883850C;
L_0883850C:;
    cnd_ = v0 != 0;
    ST32(s4, v0);
    if (cnd_) { goto L_08838568; }
    goto L_08838514;
L_08838514:;
    ST32(s4+4, 0);
    ST32(s4+8, 0);
    goto L_0883851C;
L_0883851C:;
    a0 = LD32(sp);
    goto L_08838520;
L_08838520:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08838558; }
    goto L_08838528;
L_08838528:;
    sp = sp + 64;
    return;
L_08838558:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08838560;
L_08838560:;
    ST32(sp, 0);
    goto L_08838528;
L_08838568:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08838574;
L_08838574:;
    a0 = LD32(sp);
    goto L_08838520;
L_0883857C:;
    ST32(s4, 0);
    goto L_0883851C;
L_08838584:;
    a0 = v0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883858C;
L_0883858C:;
    a0 = LD32(sp);
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(s1+4); goto L_08838470; }
    goto L_08838598;
L_08838598:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088385A0;
L_088385A0:;
    v0 = LD32(s1+4);
    goto L_08838470;
L_088385A8:;
    cnd_ = s5 != 0;
    v0 = 1;
    if (cnd_) { goto L_088385B8; }
    goto L_088385B0;
L_088385B0:;
    s7 = 1;
    goto L_0883849C;
L_088385B8:;
    cnd_ = s7 == v0;
    if (cnd_) { s5 = s5 + 1; goto L_088384A0; }
    goto L_088385C0;
L_088385C0:;
    s7 = 1;
    goto L_08838438;
}

/* 088385C8 */
rv_t func_088385C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_088385C8:;
    v1 = a1 < 0x1u;
    v0 = a0 < 0x1u;
    sp = sp - 80;
    v0 = v0 | v1;
    v1 = 0 + 0;
    s5 = a3 & 0xff;
    s4 = a2 + 0;
    s1 = t0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088387C8; }
    goto L_08838608;
L_08838608:;
    s2 = a2 + 0;
    ST32(sp+44, a0);
    cnd_ = a2 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08838784; }
    goto L_08838618;
L_08838618:;
    a2 = LD_U8(s0);
    v0 = (u32)(s32)(s8)a2;
    v1 = v0 ^ 0x25;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0883865C; }
    goto L_08838638;
L_08838638:;
    s0 = s0 + 1;
    goto L_0883863C;
L_0883863C:;
    a2 = LD_U8(s0);
    v0 = (u32)(s32)(s8)a2;
    v1 = v0 ^ 0x25;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = s0 + 1; goto L_0883863C; }
    goto L_0883865C;
L_0883865C:;
    v0 = a0 < s0;
    cnd_ = v0 == 0;
    v0 = (u32)(s32)(s8)a2;
    if (cnd_) { goto L_088386C0; }
    goto L_08838668;
L_08838668:;
    t0 = s0 - a0;
    a3 = LD32(sp+44);
    v0 = s2 < t0;
    if (v0 != 0) t0 = s2;
    v1 = a3 + 0;
    cnd_ = t0 == 0;
    a1 = t0 + 0;
    if (cnd_) { goto L_088386AC; }
    goto L_08838684;
L_08838684:;
    v0 = LD_U8(a0);
    goto L_08838688;
L_08838688:;
    a1 = a1 - 1;
    a0 = a0 + 1;
    ST8(v1, v0);
    cnd_ = v0 == 0;
    v1 = v1 + 1;
    if (cnd_) { goto L_088386A4; }
    goto L_0883869C;
L_0883869C:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD_U8(a0); goto L_08838688; }
    goto L_088386A4;
L_088386A4:;
    a2 = LD_U8(s0);
    a3 = LD32(sp+44);
    goto L_088386AC;
L_088386AC:;
    v0 = t0 - a1;
    a3 = a3 + v0;
    ST32(sp+44, a3);
    s2 = s2 - v0;
    v0 = (u32)(s32)(s8)a2;
    goto L_088386C0;
L_088386C0:;
    v0 = v0 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08838784; }
    goto L_088386D4;
L_088386D4:;
    a1 = s1 + 0;
    a2 = sp + 0;
    a3 = sp + 36;
    t0 = sp + 40;
    func_08838CF0(a0, a1, a2, a3, t0);
    goto L_088386E8;
L_088386E8:;
    v0 = LD32(sp+40);
    v1 = v0 - 1;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    ST32(sp+40, v1);
    if (cnd_) { goto L_08838714; }
    goto L_088386FC;
L_088386FC:;
    v0 = v1 + 0;
    v1 = (u32)-1;
    goto L_08838704;
L_08838704:;
    v0 = v0 - 1;
    cnd_ = v0 != v1;
    s1 = s1 + 4;
    if (cnd_) { goto L_08838704; }
    goto L_08838710;
L_08838710:;
    ST32(sp+40, v0);
    goto L_08838714;
L_08838714:;
    v0 = LD_U8(sp);
    a3 = LD32(sp+44);
    v0 = v0 - 37;
    v0 = v0 & 0xff;
    v1 = v0 < 0x54u;
    cnd_ = v1 == 0;
    s3 = a3 + 0;
    if (cnd_) { goto L_08838904; }
    goto L_08838730;
L_08838730:;
    v1 = D_08AD410C - (16652);
    v0 = v0 << 2;
    v1 = v1 + 16652;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0883874Cu: goto L_0883874C; case 0x088387F0u: goto L_088387F0; case 0x08838808u: goto L_08838808; case 0x08838838u: goto L_08838838; case 0x08838858u: goto L_08838858; case 0x08838880u: goto L_08838880; case 0x088388B4u: goto L_088388B4; case 0x088388CCu: goto L_088388CC; case 0x088388E4u: goto L_088388E4; case 0x08838904u: goto L_08838904; default: rs_break(0, 0x08838744); }
L_0883874C:;
    t1 = LD32(sp+36);
    a0 = sp + 44;
    a1 = s2 + 0;
    a2 = sp + 0;
    a3 = s1 + 0;
    goto L_08838760;
L_08838760:;
    t0 = s0 + 0;
    f0 = func_08838F5C(a0, a1, a3, t0, t1);
    goto L_08838768;
L_08838768:;
    a3 = LD32(sp+44);
    goto L_0883876C;
L_0883876C:;
    t0 = LD32(sp+36);
    s1 = s1 + 4;
    goto L_08838774;
L_08838774:;
    v0 = a3 - s3;
    s2 = s2 - v0;
    cnd_ = s2 != 0;
    s0 = s0 + t0;
    if (cnd_) { goto L_08838618; }
    goto L_08838784;
L_08838784:;
    cnd_ = s2 != 0;
    a2 = s4 - s2;
    if (cnd_) { goto L_08838794; }
    goto L_0883878C;
L_0883878C:;
    cnd_ = s5 == 0;
    v1 = a2 + 0;
    if (cnd_) { goto L_088387C8; }
    goto L_08838794;
L_08838794:;
    v0 = s2 < 0x1u;
    v1 = 0 < a2;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = LD32(sp+44);
    if (cnd_) { goto L_088387B8; }
    goto L_088387A8;
L_088387A8:;
    a2 = a2 - 1;
    a3 = v0 - 1;
    ST32(sp+44, a3);
    v0 = LD32(sp+44);
    goto L_088387B8;
L_088387B8:;
    ST8(v0, 0);
    v0 = v0 + 1;
    ST32(sp+44, v0);
    v1 = a2 + 0;
    goto L_088387C8;
L_088387C8:;
    v0 = v1 + 0;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_088387F0:;
    v0 = 37;
    ST8(a3, v0);
    a3 = a3 + 1;
    t0 = LD32(sp+36);
    goto L_08838800;
L_08838800:;
    ST32(sp+44, a3);
    goto L_08838774;
L_08838808:;
    v1 = LD_U16(s1);
    a3 = sp + 34;
    a0 = sp + 44;
    a1 = s2 + 0;
    a2 = sp + 0;
    t0 = 1;
    ST16(sp+34, v1);
    func_0883920C(a0, a1, a2, a3, t0);
    goto L_08838828;
L_08838828:;
    a3 = LD32(sp+44);
    goto L_0883882C;
L_0883882C:;
    s1 = s1 + 4;
    goto L_08838830;
L_08838830:;
    t0 = LD32(sp+36);
    goto L_08838774;
L_08838838:;
    a3 = LD32(s1);
    a0 = sp + 44;
    a1 = s2 + 0;
    a2 = sp + 0;
    t0 = (u32)-1;
    func_0883920C(a0, a1, a2, a3, t0);
    goto L_08838850;
L_08838850:;
    a3 = LD32(sp+44);
    goto L_0883876C;
L_08838858:;
    v1 = LD_U8(s1);
    a3 = sp + 32;
    a0 = sp + 44;
    a1 = s2 + 0;
    a2 = sp + 0;
    t0 = 1;
    ST8(sp+32, v1);
    func_08839038(a0, a1, a2, a3, t0);
    goto L_08838878;
L_08838878:;
    a3 = LD32(sp+44);
    goto L_0883882C;
L_08838880:;
    t1 = LD32(sp+36);
    a3 = s1 + 0;
    t0 = s0 + 0;
    a0 = sp + 44;
    a1 = s2 + 0;
    a2 = sp + 0;
    f0 = func_08838F5C(a0, a1, a3, t0, t1);
    goto L_0883889C;
L_0883889C:;
    s1 = s1 + 7;
    a3 = LD32(sp+44);
    t0 = LD32(sp+36);
    s1 = (s1 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    s1 = s1 + 8;
    goto L_08838774;
L_088388B4:;
    v1 = LD32(s1);
    cnd_ = v1 == 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_08838830; }
    goto L_088388C0;
L_088388C0:;
    v0 = s4 - s2;
    ST32(v1, v0);
    goto L_08838830;
L_088388CC:;
    t1 = LD32(sp+36);
    a3 = s1 + 0;
    a0 = sp + 44;
    a1 = s2 + 0;
    a2 = sp + 0;
    goto L_08838760;
L_088388E4:;
    a3 = LD32(s1);
    a0 = sp + 44;
    a1 = s2 + 0;
    a2 = sp + 0;
    t0 = (u32)-1;
    func_08839038(a0, a1, a2, a3, t0);
    goto L_088388FC;
L_088388FC:;
    a3 = LD32(sp+44);
    goto L_0883876C;
L_08838904:;
    t0 = LD32(sp+36);
    a2 = s2 + 0;
    a0 = s3 + 0;
    v0 = s2 < t0;
    if (v0 == 0) a2 = t0;
    v1 = s0 + 0;
    cnd_ = a2 == 0;
    a1 = a2 + 0;
    if (cnd_) { goto L_0883894C; }
    goto L_08838924;
L_08838924:;
    v0 = LD_U8(v1);
    goto L_08838928;
L_08838928:;
    a1 = a1 - 1;
    v1 = v1 + 1;
    ST8(a0, v0);
    cnd_ = v0 == 0;
    a0 = a0 + 1;
    if (cnd_) { goto L_08838944; }
    goto L_0883893C;
L_0883893C:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD_U8(v1); goto L_08838928; }
    goto L_08838944;
L_08838944:;
    a3 = LD32(sp+44);
    t0 = LD32(sp+36);
    goto L_0883894C;
L_0883894C:;
    v0 = a2 - a1;
    a3 = a3 + v0;
    goto L_08838800;
}

/* 08838958 */
rv_t func_08838958(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08838958:;
    v1 = a1 < 0x1u;
    v0 = a0 < 0x1u;
    sp = sp - 80;
    v0 = v0 | v1;
    v1 = 0 + 0;
    s5 = a3 & 0xff;
    s4 = a2 + 0;
    s1 = t0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08838B64; }
    goto L_08838998;
L_08838998:;
    s2 = a2 + 0;
    ST32(sp+44, a0);
    cnd_ = a2 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08838B20; }
    goto L_088389A8;
L_088389A8:;
    a2 = LD_U16(s0);
    v0 = a2 & 0xffff;
    v1 = v0 ^ 0x25;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088389EC; }
    goto L_088389C8;
L_088389C8:;
    s0 = s0 + 2;
    goto L_088389CC;
L_088389CC:;
    a2 = LD_U16(s0);
    v0 = a2 & 0xffff;
    v1 = v0 ^ 0x25;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = s0 + 2; goto L_088389CC; }
    goto L_088389EC;
L_088389EC:;
    v0 = a0 < s0;
    cnd_ = v0 == 0;
    v0 = a2 & 0xffff;
    if (cnd_) { goto L_08838A58; }
    goto L_088389F8;
L_088389F8:;
    v0 = s0 - a0;
    a3 = (u32)((s32)v0 >> 1);
    t0 = LD32(sp+44);
    v0 = s2 < a3;
    if (v0 != 0) a3 = s2;
    a1 = a0 + 0;
    v1 = a3 + 0;
    cnd_ = a3 == 0;
    a0 = t0 + 0;
    if (cnd_) { goto L_08838A40; }
    goto L_08838A1C;
L_08838A1C:;
    v0 = LD_U16(a1);
    goto L_08838A20;
L_08838A20:;
    v1 = v1 - 1;
    a1 = a1 + 2;
    ST16(a0, v0);
    cnd_ = v0 == 0;
    a0 = a0 + 2;
    if (cnd_) { goto L_08838A3C; }
    goto L_08838A34;
L_08838A34:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD_U16(a1); goto L_08838A20; }
    goto L_08838A3C;
L_08838A3C:;
    a2 = LD_U16(s0);
    goto L_08838A40;
L_08838A40:;
    v1 = a3 - v1;
    v0 = v1 << 1;
    t0 = t0 + v0;
    ST32(sp+44, t0);
    s2 = s2 - v1;
    v0 = a2 & 0xffff;
    goto L_08838A58;
L_08838A58:;
    v0 = v0 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08838B20; }
    goto L_08838A6C;
L_08838A6C:;
    a1 = s1 + 0;
    a2 = sp + 0;
    a3 = sp + 36;
    t0 = sp + 40;
    func_088393E0(a0, a1, a2, a3, t0);
    goto L_08838A80;
L_08838A80:;
    v0 = LD32(sp+40);
    v1 = v0 - 1;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    ST32(sp+40, v1);
    if (cnd_) { goto L_08838AAC; }
    goto L_08838A94;
L_08838A94:;
    v0 = v1 + 0;
    v1 = (u32)-1;
    goto L_08838A9C;
L_08838A9C:;
    v0 = v0 - 1;
    cnd_ = v0 != v1;
    s1 = s1 + 4;
    if (cnd_) { goto L_08838A9C; }
    goto L_08838AA8;
L_08838AA8:;
    ST32(sp+40, v0);
    goto L_08838AAC;
L_08838AAC:;
    v0 = LD_U16(sp);
    t0 = LD32(sp+44);
    v0 = v0 - 37;
    v1 = v0 < 0x54u;
    cnd_ = v1 == 0;
    s3 = t0 + 0;
    if (cnd_) { goto L_08838CA0; }
    goto L_08838AC4;
L_08838AC4:;
    v1 = D_08AD425C - (16988);
    v0 = v0 << 2;
    v1 = v1 + 16988;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08838AE0u: goto L_08838AE0; case 0x08838B8Cu: goto L_08838B8C; case 0x08838BA4u: goto L_08838BA4; case 0x08838BD4u: goto L_08838BD4; case 0x08838BF4u: goto L_08838BF4; case 0x08838C1Cu: goto L_08838C1C; case 0x08838C50u: goto L_08838C50; case 0x08838C68u: goto L_08838C68; case 0x08838C80u: goto L_08838C80; case 0x08838CA0u: goto L_08838CA0; default: rs_break(0, 0x08838ad8); }
L_08838AE0:;
    t1 = LD32(sp+36);
    a0 = sp + 44;
    a1 = s2 + 0;
    a2 = sp + 0;
    a3 = s1 + 0;
    goto L_08838AF4;
L_08838AF4:;
    t0 = s0 + 0;
    f0 = func_08839638(a0, a1, a3, t0, t1);
    goto L_08838AFC;
L_08838AFC:;
    t0 = LD32(sp+44);
    goto L_08838B00;
L_08838B00:;
    v1 = LD32(sp+36);
    s1 = s1 + 4;
    goto L_08838B08;
L_08838B08:;
    v0 = t0 - s3;
    v0 = (u32)((s32)v0 >> 1);
    v1 = v1 << 1;
    s2 = s2 - v0;
    cnd_ = s2 != 0;
    s0 = s0 + v1;
    if (cnd_) { goto L_088389A8; }
    goto L_08838B20;
L_08838B20:;
    cnd_ = s2 != 0;
    a2 = s4 - s2;
    if (cnd_) { goto L_08838B30; }
    goto L_08838B28;
L_08838B28:;
    cnd_ = s5 == 0;
    v1 = a2 + 0;
    if (cnd_) { goto L_08838B64; }
    goto L_08838B30;
L_08838B30:;
    v0 = s2 < 0x1u;
    v1 = 0 < a2;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = LD32(sp+44);
    if (cnd_) { goto L_08838B54; }
    goto L_08838B44;
L_08838B44:;
    a2 = a2 - 1;
    t0 = v0 - 2;
    ST32(sp+44, t0);
    v0 = LD32(sp+44);
    goto L_08838B54;
L_08838B54:;
    ST16(v0, 0);
    v0 = v0 + 2;
    ST32(sp+44, v0);
    v1 = a2 + 0;
    goto L_08838B64;
L_08838B64:;
    v0 = v1 + 0;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08838B8C:;
    v1 = LD32(sp+36);
    v0 = 37;
    t0 = t0 + 2;
    ST16(s3, v0);
    goto L_08838B9C;
L_08838B9C:;
    ST32(sp+44, t0);
    goto L_08838B08;
L_08838BA4:;
    v1 = LD_U8(s1);
    a3 = sp + 34;
    a0 = sp + 44;
    a1 = s2 + 0;
    a2 = sp + 0;
    t0 = 1;
    ST8(sp+34, v1);
    func_088398F8(a0, a1, a2, a3, t0);
    goto L_08838BC4;
L_08838BC4:;
    t0 = LD32(sp+44);
    goto L_08838BC8;
L_08838BC8:;
    s1 = s1 + 4;
    goto L_08838BCC;
L_08838BCC:;
    v1 = LD32(sp+36);
    goto L_08838B08;
L_08838BD4:;
    a3 = LD32(s1);
    a0 = sp + 44;
    a1 = s2 + 0;
    a2 = sp + 0;
    t0 = (u32)-1;
    func_088398F8(a0, a1, a2, a3, t0);
    goto L_08838BEC;
L_08838BEC:;
    t0 = LD32(sp+44);
    goto L_08838B00;
L_08838BF4:;
    v1 = LD_U16(s1);
    a3 = sp + 32;
    a0 = sp + 44;
    a1 = s2 + 0;
    a2 = sp + 0;
    t0 = 1;
    ST16(sp+32, v1);
    func_08839724(a0, a1, a2, a3, t0);
    goto L_08838C14;
L_08838C14:;
    t0 = LD32(sp+44);
    goto L_08838BC8;
L_08838C1C:;
    t1 = LD32(sp+36);
    a3 = s1 + 0;
    t0 = s0 + 0;
    a0 = sp + 44;
    a1 = s2 + 0;
    a2 = sp + 0;
    f0 = func_08839638(a0, a1, a3, t0, t1);
    goto L_08838C38;
L_08838C38:;
    s1 = s1 + 7;
    t0 = LD32(sp+44);
    v1 = LD32(sp+36);
    s1 = (s1 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    s1 = s1 + 8;
    goto L_08838B08;
L_08838C50:;
    v1 = LD32(s1);
    cnd_ = v1 == 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_08838BCC; }
    goto L_08838C5C;
L_08838C5C:;
    v0 = s4 - s2;
    ST32(v1, v0);
    goto L_08838BCC;
L_08838C68:;
    t1 = LD32(sp+36);
    a3 = s1 + 0;
    a0 = sp + 44;
    a1 = s2 + 0;
    a2 = sp + 0;
    goto L_08838AF4;
L_08838C80:;
    a3 = LD32(s1);
    a0 = sp + 44;
    a1 = s2 + 0;
    a2 = sp + 0;
    t0 = (u32)-1;
    func_08839724(a0, a1, a2, a3, t0);
    goto L_08838C98;
L_08838C98:;
    t0 = LD32(sp+44);
    goto L_08838B00;
L_08838CA0:;
    v1 = LD32(sp+36);
    a3 = s2 + 0;
    a2 = s3 + 0;
    v0 = s2 < v1;
    if (v0 == 0) a3 = v1;
    a1 = s0 + 0;
    cnd_ = a3 == 0;
    a0 = a3 + 0;
    if (cnd_) { goto L_08838CE0; }
    goto L_08838CC0;
L_08838CC0:;
    v0 = LD_U16(a1);
    goto L_08838CC4;
L_08838CC4:;
    a0 = a0 - 1;
    a1 = a1 + 2;
    ST16(a2, v0);
    cnd_ = v0 == 0;
    a2 = a2 + 2;
    if (cnd_) { goto L_08838CE0; }
    goto L_08838CD8;
L_08838CD8:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD_U16(a1); goto L_08838CC4; }
    goto L_08838CE0;
L_08838CE0:;
    v0 = a3 - a0;
    v0 = v0 << 1;
    t0 = s3 + v0;
    goto L_08838B9C;
}

/* 08838CF0 */
void func_08838CF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0;
    int cnd_;
    u32 t_;
L_08838CF0:;
    v0 = (u32)-1;
    ST32(a2+8, v0);
    t7 = a0 + 0;
    t1 = a0 + 1;
    ST32(a2+4, v0);
    t2 = 1;
    ST8(a2, 0);
    ST8(a2+12, 0);
    ST8(a2+13, 0);
    ST8(a2+14, 0);
    ST8(a2+15, 0);
    ST8(a2+16, 0);
    ST8(a2+17, 0);
    ST8(a2+18, 0);
    ST8(a2+19, 0);
    ST8(a2+20, 0);
    goto L_08838D30;
L_08838D30:;
    v0 = (u32)(s32)LD_S8(t1);
    v0 = v0 - 32;
    v0 = v0 & 0xff;
    v1 = v0 < 0x11u;
    cnd_ = v1 == 0;
    if (cnd_) { t2 = 0 + 0; goto L_08838D6C; }
    goto L_08838D48;
L_08838D48:;
    v1 = D_08AD43AC - (17324);
    v0 = v0 << 2;
    v1 = v1 + 17324;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08838D64u: goto L_08838D64; case 0x08838F24u: goto L_08838F24; case 0x08838F30u: goto L_08838F30; case 0x08838F3Cu: goto L_08838F3C; case 0x08838F48u: goto L_08838F48; case 0x08838F50u: goto L_08838F50; default: rs_break(0, 0x08838d5c); }
L_08838D64:;
    v0 = 1;
    ST8(a2+12, v0);
    goto L_08838D6C;
L_08838D6C:;
    cnd_ = t2 == 0;
    if (cnd_) { a0 = LD_U8(t1); goto L_08838D7C; }
    goto L_08838D74;
L_08838D74:;
    t1 = t1 + 1;
    goto L_08838D30;
L_08838D7C:;
    v0 = 42;
    v1 = (u32)(s32)(s8)a0;
    cnd_ = v1 == v0;
    t6 = 0 + 0;
    if (cnd_) { goto L_08838F08; }
    goto L_08838D8C;
L_08838D8C:;
    v0 = v1 - 48;
    v0 = v0 < 0xau;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    v0 = 46;
    if (cnd_) { goto L_08838DF0; }
    goto L_08838DA0;
L_08838DA0:;
    ST32(a2+8, 0);
    a0 = LD_U8(t1);
    v1 = LD32(a2+8);
    goto L_08838DAC;
L_08838DAC:;
    a0 = (u32)(s32)(s8)a0;
    t1 = t1 + 1;
    v0 = v1 << 2;
    v0 = v0 + v1;
    v0 = v0 << 1;
    v0 = v0 + a0;
    v0 = v0 - 48;
    ST32(a2+8, v0);
    a0 = LD_U8(t1);
    v0 = a0 - 48;
    v0 = v0 & 0xff;
    v0 = v0 < 0xau;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(a2+8); goto L_08838DAC; }
    goto L_08838DE8;
L_08838DE8:;
    v1 = (u32)(s32)(s8)a0;
    v0 = 46;
    goto L_08838DF0;
L_08838DF0:;
    cnd_ = v1 == v0;
    if (cnd_) { t1 = t1 + 1; goto L_08838E7C; }
    goto L_08838DF8;
L_08838DF8:;
    a1 = 1;
    goto L_08838DFC;
L_08838DFC:;
    t3 = 104;
    t5 = 76;
    t4 = 108;
    t2 = 1;
    goto L_08838E0C;
L_08838E0C:;
    v1 = (u32)(s32)(s8)a0;
    cnd_ = v1 == t3;
    v0 = (s32)v1 < 105;
    if (cnd_) { goto L_08838E74; }
    goto L_08838E18;
L_08838E18:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08838E58; }
    goto L_08838E20;
L_08838E20:;
    cnd_ = v1 == t5;
    if (cnd_) { ST8(a2+17, t2); goto L_08838E2C; }
    goto L_08838E28;
L_08838E28:;
    a1 = 0 + 0;
    goto L_08838E2C;
L_08838E2C:;
    cnd_ = a1 == 0;
    if (cnd_) { v1 = LD_U8(t1); goto L_08838E40; }
    goto L_08838E34;
L_08838E34:;
    t1 = t1 + 1;
    a0 = LD_U8(t1);
    goto L_08838E0C;
L_08838E40:;
    t1 = t1 + 1;
    v0 = t1 - t7;
    ST8(a2, v1);
    ST32(a3, v0);
    ST32(t0, t6);
    return;
L_08838E58:;
    cnd_ = v1 != t4;
    if (cnd_) { a1 = 0 + 0; goto L_08838E2C; }
    goto L_08838E60;
L_08838E60:;
    v0 = (u32)(s32)LD_S8(t1+1);
    cnd_ = v0 == v1;
    if (cnd_) { t1 = t1 + 1; goto L_08838E6C; }
    goto L_08838E6C;
L_08838E6C:;
    ST8(a2+19, t2);
    goto L_08838E2C;
L_08838E74:;
    ST8(a2+18, t2);
    goto L_08838E2C;
L_08838E7C:;
    a0 = LD_U8(t1);
    v0 = 42;
    v1 = (u32)(s32)(s8)a0;
    cnd_ = v1 == v0;
    v0 = v1 - 48;
    if (cnd_) { goto L_08838EF0; }
    goto L_08838E90;
L_08838E90:;
    v0 = v0 < 0xau;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = 1; goto L_08838DFC; }
    goto L_08838EA0;
L_08838EA0:;
    ST32(a2+4, 0);
    a0 = LD_U8(t1);
    v1 = LD32(a2+4);
    goto L_08838EAC;
L_08838EAC:;
    a0 = (u32)(s32)(s8)a0;
    t1 = t1 + 1;
    v0 = v1 << 2;
    v0 = v0 + v1;
    v0 = v0 << 1;
    v0 = v0 + a0;
    v0 = v0 - 48;
    ST32(a2+4, v0);
    a0 = LD_U8(t1);
    v0 = a0 - 48;
    v0 = v0 & 0xff;
    v0 = v0 < 0xau;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(a2+4); goto L_08838EAC; }
    goto L_08838EE8;
L_08838EE8:;
    a1 = 1;
    goto L_08838DFC;
L_08838EF0:;
    v0 = LD32(a1);
    t1 = t1 + 1;
    t6 = t6 + 1;
    ST32(a2+4, v0);
    a0 = LD_U8(t1);
    goto L_08838DF8;
L_08838F08:;
    v1 = LD32(a1);
    t1 = t1 + 1;
    a1 = a1 + 4;
    ST32(a2+8, v1);
    t6 = 1;
    a0 = LD_U8(t1);
    goto L_08838DE8;
L_08838F24:;
    v0 = 1;
    ST8(a2+13, v0);
    goto L_08838D6C;
L_08838F30:;
    v0 = 1;
    ST8(a2+15, v0);
    goto L_08838D6C;
L_08838F3C:;
    v0 = 1;
    ST8(a2+14, v0);
    goto L_08838D6C;
L_08838F48:;
    t2 = 0 + 0;
    goto L_08838D6C;
L_08838F50:;
    v0 = 1;
    ST8(a2+16, v0);
    goto L_08838D6C;
}

/* 08838F5C */
float func_08838F5C(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08838F5C:;
    v1 = t1 < 0x10u;
    v0 = 15;
    if (v1 == 0) t1 = v0;
    sp = sp - 16;
    t2 = D_08B25B64 - (23396);
    t1 = t1 - 1;
    v0 = (u32)-1;
    a2 = a3 + 0;
    s2 = a0 + 0;
    v1 = t2 + 23396;
    s1 = a1 + 0;
    cnd_ = t1 == v0;
    if (cnd_) { goto L_08838FB8; }
    goto L_08838F9C;
L_08838F9C:;
    a0 = (u32)-1;
    goto L_08838FA0;
L_08838FA0:;
    v0 = LD_U8(t0);
    t1 = t1 - 1;
    t0 = t0 + 1;
    ST8(v1, v0);
    cnd_ = t1 != a0;
    v1 = v1 + 1;
    if (cnd_) { goto L_08838FA0; }
    goto L_08838FB8;
L_08838FB8:;
    v0 = D_08B25B24 - (23332);
    ST8(v1, 0);
    s0 = v0 + 23332;
    a1 = t2 + 23396;
    a0 = s0 + 0;
    { rv_t r_ = func_08A8E17C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08838FD0;
L_08838FD0:;
    cnd_ = (s32)v0 <= 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08839020; }
    goto L_08838FD8;
L_08838FD8:;
    a3 = LD32(s2);
    v0 = s1 < v0;
    if (v0 != 0) a2 = s1;
    a0 = s0 + 0;
    a1 = a3 + 0;
    cnd_ = a2 == 0;
    v1 = a2 + 0;
    if (cnd_) { goto L_08839014; }
    goto L_08838FF4;
L_08838FF4:;
    v0 = LD_U8(a0);
    goto L_08838FF8;
L_08838FF8:;
    v1 = v1 - 1;
    a0 = a0 + 1;
    ST8(a1, v0);
    cnd_ = v0 == 0;
    a1 = a1 + 1;
    if (cnd_) { goto L_08839014; }
    goto L_0883900C;
L_0883900C:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD_U8(a0); goto L_08838FF8; }
    goto L_08839014;
L_08839014:;
    v0 = a2 - v1;
    a3 = a3 + v0;
    ST32(s2, a3);
    goto L_08839020;
L_08839020:;
    sp = sp + 16;
    return f0;
}

/* 08839038 */
void func_08839038(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08839038:;
    sp = sp - 32;
    v0 = 0x7fff0000u;
    s6 = a0 + 0;
    s5 = a2 + 0;
    v0 = v0 | 0xffff;
    s4 = 0 + 0;
    s2 = a1 + 0;
    t1 = LD32(a2+8);
    a2 = LD32(a2+4);
    s1 = LD32(s6);
    a0 = ~(0 | t1);
    v1 = ~(0 | a2);
    if (v1 == 0) a2 = v0;
    cnd_ = a3 == 0;
    if (a0 == 0) t1 = 0;
    if (cnd_) { goto L_08839204; }
    goto L_08839094;
L_08839094:;
    cnd_ = t0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088390DC; }
    goto L_0883909C;
L_0883909C:;
    a2 = a2 - 1;
    cnd_ = a2 == v0;
    if (cnd_) { a0 = LD_U8(s5+14); goto L_088390E0; }
    goto L_088390A8;
L_088390A8:;
    v0 = (u32)(s32)LD_S8(a3);
    cnd_ = v0 == 0;
    v1 = a3 + 1;
    if (cnd_) { goto L_088390DC; }
    goto L_088390B4;
L_088390B4:;
    a0 = (u32)-1;
    goto L_088390B8;
L_088390B8:;
    s4 = s4 + 1;
    v0 = s4 < t0;
    cnd_ = v0 == 0;
    a2 = a2 - 1;
    if (cnd_) { goto L_088390DC; }
    goto L_088390C8;
L_088390C8:;
    cnd_ = a2 == a0;
    if (cnd_) { a0 = LD_U8(s5+14); goto L_088390E0; }
    goto L_088390D0;
L_088390D0:;
    v0 = LD_U8(v1);
    cnd_ = v0 != 0;
    v1 = v1 + 1;
    if (cnd_) { goto L_088390B8; }
    goto L_088390DC;
L_088390DC:;
    a0 = LD_U8(s5+14);
    goto L_088390E0;
L_088390E0:;
    v1 = t1 - s4;
    v0 = s4 < t1;
    s3 = 0 + 0;
    if (v0 != 0) s3 = v1;
    cnd_ = a0 != 0;
    v1 = 0 < a1;
    if (cnd_) { goto L_08839134; }
    goto L_088390F8;
L_088390F8:;
    v0 = LD_U8(s5+16);
    cnd_ = v0 != 0;
    v0 = 0 < s3;
    if (cnd_) { goto L_08839134; }
    goto L_08839104;
L_08839104:;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08839134; }
    goto L_08839110;
L_08839110:;
    a0 = 32;
    goto L_08839114;
L_08839114:;
    s3 = s3 - 1;
    s2 = s2 - 1;
    v0 = 0 < s3;
    v1 = 0 < s2;
    v0 = v0 & v1;
    ST8(s1, a0);
    cnd_ = v0 != 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08839114; }
    goto L_08839134;
L_08839134:;
    cnd_ = a3 != 0;
    s0 = a3 + 0;
    if (cnd_) { goto L_08839144; }
    goto L_0883913C;
L_0883913C:;
    v0 = D_08AD43F0 - (17392);
    s0 = v0 + 17392;
    goto L_08839144;
L_08839144:;
    v0 = 0 < s4;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088391D4; }
    goto L_08839154;
L_08839154:;
    v0 = LD_U8(s5+14);
    goto L_08839158;
L_08839158:;
    cnd_ = v0 != 0;
    a0 = LD_U8(s5+16);
    if (cnd_) { goto L_08839168; }
    goto L_08839160;
L_08839160:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s6, s1); goto L_088391A8; }
    goto L_08839168;
L_08839168:;
    v0 = 0 < s3;
    v0 = v0 & v1;
    a0 = a0 & 0xff;
    a3 = 48;
    v1 = 32;
    cnd_ = v0 == 0;
    if (a0 == 0) a3 = v1;
    if (cnd_) { goto L_088391A4; }
    goto L_08839184;
L_08839184:;
    s3 = s3 - 1;
    s2 = s2 - 1;
    v1 = 0 < s3;
    v0 = 0 < s2;
    v1 = v1 & v0;
    ST8(s1, a3);
    cnd_ = v1 != 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08839184; }
    goto L_088391A4;
L_088391A4:;
    ST32(s6, s1);
    goto L_088391A8;
L_088391A8:;
    sp = sp + 32;
    return;
L_088391D0:;
    a0 = s1 + 0;
    goto L_088391D4;
L_088391D4:;
    a1 = s0 + 0;
    s4 = s4 - 1;
    s2 = s2 - 1;
    func_08839ACC(a0, a1);
    goto L_088391E4;
L_088391E4:;
    v0 = 0 < s4;
    v1 = 0 < s2;
    v0 = v0 & v1;
    s1 = s1 + 1;
    cnd_ = v0 != 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_088391D0; }
    goto L_088391FC;
L_088391FC:;
    v0 = LD_U8(s5+14);
    goto L_08839158;
L_08839204:;
    s4 = 6;
    goto L_088390DC;
}

/* 0883920C */
void func_0883920C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883920C:;
    sp = sp - 32;
    v0 = 0x7fff0000u;
    s6 = a0 + 0;
    s5 = a2 + 0;
    v0 = v0 | 0xffff;
    s4 = 0 + 0;
    s2 = a1 + 0;
    t1 = LD32(a2+8);
    a2 = LD32(a2+4);
    s1 = LD32(s6);
    a0 = ~(0 | t1);
    v1 = ~(0 | a2);
    if (v1 == 0) a2 = v0;
    cnd_ = a3 == 0;
    if (a0 == 0) t1 = 0;
    if (cnd_) { goto L_088393D8; }
    goto L_08839268;
L_08839268:;
    cnd_ = t0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088392B0; }
    goto L_08839270;
L_08839270:;
    a2 = a2 - 1;
    cnd_ = a2 == v0;
    if (cnd_) { a0 = LD_U8(s5+14); goto L_088392B4; }
    goto L_0883927C;
L_0883927C:;
    v0 = LD_U16(a3);
    cnd_ = v0 == 0;
    v1 = a3 + 2;
    if (cnd_) { goto L_088392B0; }
    goto L_08839288;
L_08839288:;
    a0 = (u32)-1;
    goto L_0883928C;
L_0883928C:;
    s4 = s4 + 1;
    v0 = s4 < t0;
    cnd_ = v0 == 0;
    a2 = a2 - 1;
    if (cnd_) { goto L_088392B0; }
    goto L_0883929C;
L_0883929C:;
    cnd_ = a2 == a0;
    if (cnd_) { a0 = LD_U8(s5+14); goto L_088392B4; }
    goto L_088392A4;
L_088392A4:;
    v0 = LD_U16(v1);
    cnd_ = v0 != 0;
    v1 = v1 + 2;
    if (cnd_) { goto L_0883928C; }
    goto L_088392B0;
L_088392B0:;
    a0 = LD_U8(s5+14);
    goto L_088392B4;
L_088392B4:;
    v1 = t1 - s4;
    v0 = s4 < t1;
    s3 = 0 + 0;
    if (v0 != 0) s3 = v1;
    cnd_ = a0 != 0;
    v1 = 0 < a1;
    if (cnd_) { goto L_08839308; }
    goto L_088392CC;
L_088392CC:;
    v0 = LD_U8(s5+16);
    cnd_ = v0 != 0;
    v0 = 0 < s3;
    if (cnd_) { goto L_08839308; }
    goto L_088392D8;
L_088392D8:;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08839308; }
    goto L_088392E4;
L_088392E4:;
    a0 = 32;
    goto L_088392E8;
L_088392E8:;
    s3 = s3 - 1;
    s2 = s2 - 1;
    v0 = 0 < s3;
    v1 = 0 < s2;
    v0 = v0 & v1;
    ST8(s1, a0);
    cnd_ = v0 != 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_088392E8; }
    goto L_08839308;
L_08839308:;
    cnd_ = a3 != 0;
    s0 = a3 + 0;
    if (cnd_) { goto L_08839318; }
    goto L_08839310;
L_08839310:;
    v0 = D_08AD43F8 - (17400);
    s0 = v0 + 17400;
    goto L_08839318;
L_08839318:;
    v0 = 0 < s4;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088393A8; }
    goto L_08839328;
L_08839328:;
    v0 = LD_U8(s5+14);
    goto L_0883932C;
L_0883932C:;
    cnd_ = v0 != 0;
    a0 = LD_U8(s5+16);
    if (cnd_) { goto L_0883933C; }
    goto L_08839334;
L_08839334:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s6, s1); goto L_0883937C; }
    goto L_0883933C;
L_0883933C:;
    v0 = 0 < s3;
    v0 = v0 & v1;
    a0 = a0 & 0xff;
    a3 = 48;
    v1 = 32;
    cnd_ = v0 == 0;
    if (a0 == 0) a3 = v1;
    if (cnd_) { goto L_08839378; }
    goto L_08839358;
L_08839358:;
    s3 = s3 - 1;
    s2 = s2 - 1;
    v1 = 0 < s3;
    v0 = 0 < s2;
    v1 = v1 & v0;
    ST8(s1, a3);
    cnd_ = v1 != 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08839358; }
    goto L_08839378;
L_08839378:;
    ST32(s6, s1);
    goto L_0883937C;
L_0883937C:;
    sp = sp + 32;
    return;
L_088393A4:;
    a0 = s1 + 0;
    goto L_088393A8;
L_088393A8:;
    a1 = s0 + 0;
    s4 = s4 - 1;
    s2 = s2 - 1;
    func_088374E0(a0, a1);
    goto L_088393B8;
L_088393B8:;
    v0 = 0 < s4;
    v1 = 0 < s2;
    v0 = v0 & v1;
    s1 = s1 + 1;
    cnd_ = v0 != 0;
    s0 = s0 + 2;
    if (cnd_) { goto L_088393A4; }
    goto L_088393D0;
L_088393D0:;
    v0 = LD_U8(s5+14);
    goto L_0883932C;
L_088393D8:;
    s4 = 6;
    goto L_088392B0;
}

/* 088393E0 */
void func_088393E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0;
    int cnd_;
    u32 t_;
L_088393E0:;
    v0 = (u32)-1;
    ST32(a2+8, v0);
    t7 = a0 + 0;
    t2 = a0 + 2;
    ST32(a2+4, v0);
    t4 = 1;
    ST16(a2, 0);
    ST8(a2+12, 0);
    ST8(a2+13, 0);
    ST8(a2+14, 0);
    ST8(a2+15, 0);
    ST8(a2+16, 0);
    ST8(a2+17, 0);
    ST8(a2+18, 0);
    ST8(a2+19, 0);
    ST8(a2+20, 0);
    goto L_08839420;
L_08839420:;
    t1 = LD_U16(t2);
    v0 = t1 & 0xffff;
    v0 = v0 - 32;
    v1 = v0 < 0x11u;
    cnd_ = v1 == 0;
    t3 = t1 + 0;
    if (cnd_) { goto L_08839624; }
    goto L_08839438;
L_08839438:;
    v1 = D_08AD4408 - (17416);
    v0 = v0 << 2;
    v1 = v1 + 17416;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08839454u: goto L_08839454; case 0x08839600u: goto L_08839600; case 0x0883960Cu: goto L_0883960C; case 0x08839618u: goto L_08839618; case 0x08839624u: goto L_08839624; case 0x0883962Cu: goto L_0883962C; default: rs_break(0, 0x0883944c); }
L_08839454:;
    v0 = 1;
    ST8(a2+12, v0);
    goto L_0883945C;
L_0883945C:;
    cnd_ = t4 == 0;
    v1 = t3 & 0xffff;
    if (cnd_) { goto L_0883946C; }
    goto L_08839464;
L_08839464:;
    t2 = t2 + 2;
    goto L_08839420;
L_0883946C:;
    v0 = 42;
    cnd_ = v1 == v0;
    t6 = 0 + 0;
    if (cnd_) { goto L_088395E4; }
    goto L_08839478;
L_08839478:;
    v0 = v1 - 48;
    v0 = v0 < 0xau;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    v1 = t1 & 0xffff;
    if (cnd_) { goto L_088394D0; }
    goto L_0883948C;
L_0883948C:;
    ST32(a2+8, 0);
    t3 = 0 + 0;
    goto L_08839494;
L_08839494:;
    t2 = t2 + 2;
    a0 = t1 & 0xffff;
    t1 = LD_U16(t2);
    v1 = t3 << 2;
    v1 = v1 + t3;
    v0 = t1 - 48;
    v0 = v0 & 0xffff;
    v1 = v1 << 1;
    v0 = v0 < 0xau;
    v1 = v1 + a0;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    t3 = v1 - 48;
    if (cnd_) { goto L_08839494; }
    goto L_088394C8;
L_088394C8:;
    ST32(a2+8, t3);
    goto L_088394CC;
L_088394CC:;
    v1 = t1 & 0xffff;
    goto L_088394D0;
L_088394D0:;
    v0 = 46;
    cnd_ = v1 == v0;
    if (cnd_) { t2 = t2 + 2; goto L_08839564; }
    goto L_088394DC;
L_088394DC:;
    a0 = 1;
    goto L_088394E0;
L_088394E0:;
    t3 = 104;
    t5 = 76;
    t4 = 108;
    a1 = 1;
    goto L_088394F0;
L_088394F0:;
    v1 = t1 & 0xffff;
    cnd_ = v1 == t3;
    v0 = (s32)v1 < 105;
    if (cnd_) { goto L_0883955C; }
    goto L_088394FC;
L_088394FC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08839540; }
    goto L_08839504;
L_08839504:;
    cnd_ = v1 == t5;
    if (cnd_) { ST8(a2+17, a1); goto L_08839510; }
    goto L_0883950C;
L_0883950C:;
    a0 = 0 + 0;
    goto L_08839510;
L_08839510:;
    cnd_ = a0 == 0;
    if (cnd_) { v1 = LD_U16(t2); goto L_08839524; }
    goto L_08839518;
L_08839518:;
    t2 = t2 + 2;
    t1 = LD_U16(t2);
    goto L_088394F0;
L_08839524:;
    t2 = t2 + 2;
    v0 = t2 - t7;
    v0 = (u32)((s32)v0 >> 1);
    ST32(a3, v0);
    ST16(a2, v1);
    ST32(t0, t6);
    return;
L_08839540:;
    cnd_ = v1 != t4;
    if (cnd_) { a0 = 0 + 0; goto L_08839510; }
    goto L_08839548;
L_08839548:;
    v0 = LD_U16(t2+2);
    cnd_ = v0 == v1;
    if (cnd_) { t2 = t2 + 2; goto L_08839554; }
    goto L_08839554;
L_08839554:;
    ST8(a2+19, a1);
    goto L_08839510;
L_0883955C:;
    ST8(a2+18, a1);
    goto L_08839510;
L_08839564:;
    t1 = LD_U16(t2);
    v0 = 42;
    v1 = t1 & 0xffff;
    cnd_ = v1 == v0;
    v0 = v1 - 48;
    if (cnd_) { goto L_088395CC; }
    goto L_08839578;
L_08839578:;
    v0 = v0 < 0xau;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = 1;
    if (cnd_) { goto L_088394E0; }
    goto L_08839588;
L_08839588:;
    ST32(a2+4, 0);
    a1 = 0 + 0;
    goto L_08839590;
L_08839590:;
    t2 = t2 + 2;
    a0 = t1 & 0xffff;
    t1 = LD_U16(t2);
    v1 = a1 << 2;
    v1 = v1 + a1;
    v0 = t1 - 48;
    v0 = v0 & 0xffff;
    v1 = v1 << 1;
    v0 = v0 < 0xau;
    v1 = v1 + a0;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    a1 = v1 - 48;
    if (cnd_) { goto L_08839590; }
    goto L_088395C4;
L_088395C4:;
    ST32(a2+4, a1);
    goto L_088394DC;
L_088395CC:;
    t2 = t2 + 2;
    v0 = LD32(a1);
    t1 = LD_U16(t2);
    t6 = t6 + 1;
    ST32(a2+4, v0);
    goto L_088394DC;
L_088395E4:;
    t2 = t2 + 2;
    v1 = LD32(a1);
    t1 = LD_U16(t2);
    a1 = a1 + 4;
    t6 = 1;
    ST32(a2+8, v1);
    goto L_088394CC;
L_08839600:;
    v0 = 1;
    ST8(a2+13, v0);
    goto L_0883945C;
L_0883960C:;
    v0 = 1;
    ST8(a2+15, v0);
    goto L_0883945C;
L_08839618:;
    v0 = 1;
    ST8(a2+14, v0);
    goto L_0883945C;
L_08839624:;
    t4 = 0 + 0;
    goto L_0883945C;
L_0883962C:;
    v0 = 1;
    ST8(a2+16, v0);
    goto L_0883945C;
}

/* 08839638 */
float func_08839638(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08839638:;
    v1 = t1 < 0x10u;
    v0 = 15;
    if (v1 == 0) t1 = v0;
    sp = sp - 16;
    t2 = D_08B25BB4 - (23476);
    t1 = t1 - 1;
    v0 = (u32)-1;
    a2 = a3 + 0;
    s2 = a0 + 0;
    v1 = t2 + 23476;
    s1 = a1 + 0;
    cnd_ = t1 == v0;
    if (cnd_) { goto L_08839694; }
    goto L_08839678;
L_08839678:;
    a0 = (u32)-1;
    goto L_0883967C;
L_0883967C:;
    v0 = LD_U8(t0);
    t1 = t1 - 1;
    t0 = t0 + 2;
    ST8(v1, v0);
    cnd_ = t1 != a0;
    v1 = v1 + 1;
    if (cnd_) { goto L_0883967C; }
    goto L_08839694;
L_08839694:;
    v0 = D_08B25B74 - (23412);
    ST8(v1, 0);
    s0 = v0 + 23412;
    a1 = t2 + 23476;
    a0 = s0 + 0;
    { rv_t r_ = func_08A8E17C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088396AC;
L_088396AC:;
    cnd_ = (s32)v0 <= 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_0883970C; }
    goto L_088396B4;
L_088396B4:;
    t0 = LD32(s2);
    v0 = s1 < v0;
    if (v0 != 0) a3 = s1;
    a0 = s0 + 0;
    a2 = t0 + 0;
    cnd_ = a3 == 0;
    a1 = a3 + 0;
    if (cnd_) { goto L_088396FC; }
    goto L_088396D0;
L_088396D0:;
    v0 = LD_U8(a0);
    goto L_088396D4;
L_088396D4:;
    a1 = a1 - 1;
    a0 = a0 + 1;
    v0 = v0 << 24;
    v0 = (u32)((s32)v0 >> 24);
    v1 = v0 & 0xffff;
    ST16(a2, v0);
    cnd_ = v1 == 0;
    a2 = a2 + 2;
    if (cnd_) { goto L_088396FC; }
    goto L_088396F4;
L_088396F4:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD_U8(a0); goto L_088396D4; }
    goto L_088396FC;
L_088396FC:;
    v0 = a3 - a1;
    v0 = v0 << 1;
    t0 = t0 + v0;
    ST32(s2, t0);
    goto L_0883970C;
L_0883970C:;
    sp = sp + 16;
    return f0;
}

/* 08839724 */
void func_08839724(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08839724:;
    sp = sp - 32;
    v0 = 0x7fff0000u;
    s6 = a0 + 0;
    s5 = a2 + 0;
    v0 = v0 | 0xffff;
    s4 = 0 + 0;
    s2 = a1 + 0;
    t1 = LD32(a2+8);
    a2 = LD32(a2+4);
    s1 = LD32(s6);
    a0 = ~(0 | t1);
    v1 = ~(0 | a2);
    if (v1 == 0) a2 = v0;
    cnd_ = a3 == 0;
    if (a0 == 0) t1 = 0;
    if (cnd_) { goto L_088398F0; }
    goto L_08839780;
L_08839780:;
    cnd_ = t0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088397C8; }
    goto L_08839788;
L_08839788:;
    a2 = a2 - 1;
    cnd_ = a2 == v0;
    if (cnd_) { a0 = LD_U8(s5+14); goto L_088397CC; }
    goto L_08839794;
L_08839794:;
    v0 = LD_U16(a3);
    cnd_ = v0 == 0;
    v1 = a3 + 2;
    if (cnd_) { goto L_088397C8; }
    goto L_088397A0;
L_088397A0:;
    a0 = (u32)-1;
    goto L_088397A4;
L_088397A4:;
    s4 = s4 + 1;
    v0 = s4 < t0;
    cnd_ = v0 == 0;
    a2 = a2 - 1;
    if (cnd_) { goto L_088397C8; }
    goto L_088397B4;
L_088397B4:;
    cnd_ = a2 == a0;
    if (cnd_) { a0 = LD_U8(s5+14); goto L_088397CC; }
    goto L_088397BC;
L_088397BC:;
    v0 = LD_U16(v1);
    cnd_ = v0 != 0;
    v1 = v1 + 2;
    if (cnd_) { goto L_088397A4; }
    goto L_088397C8;
L_088397C8:;
    a0 = LD_U8(s5+14);
    goto L_088397CC;
L_088397CC:;
    v1 = t1 - s4;
    v0 = s4 < t1;
    s3 = 0 + 0;
    if (v0 != 0) s3 = v1;
    cnd_ = a0 != 0;
    v1 = 0 < a1;
    if (cnd_) { goto L_08839820; }
    goto L_088397E4;
L_088397E4:;
    v0 = LD_U8(s5+16);
    cnd_ = v0 != 0;
    v0 = 0 < s3;
    if (cnd_) { goto L_08839820; }
    goto L_088397F0;
L_088397F0:;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08839820; }
    goto L_088397FC;
L_088397FC:;
    a1 = 32;
    goto L_08839800;
L_08839800:;
    s3 = s3 - 1;
    s2 = s2 - 1;
    v0 = 0 < s3;
    v1 = 0 < s2;
    v0 = v0 & v1;
    ST16(s1, a1);
    cnd_ = v0 != 0;
    s1 = s1 + 2;
    if (cnd_) { goto L_08839800; }
    goto L_08839820;
L_08839820:;
    cnd_ = a3 != 0;
    s0 = a3 + 0;
    if (cnd_) { goto L_08839830; }
    goto L_08839828;
L_08839828:;
    v0 = D_08AD43F8 - (17400);
    s0 = v0 + 17400;
    goto L_08839830;
L_08839830:;
    v0 = 0 < s4;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_088398C0; }
    goto L_08839840;
L_08839840:;
    v0 = a0 & 0xff;
    cnd_ = v0 != 0;
    a0 = LD_U8(s5+16);
    if (cnd_) { goto L_08839854; }
    goto L_0883984C;
L_0883984C:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s6, s1); goto L_08839894; }
    goto L_08839854;
L_08839854:;
    v0 = 0 < s3;
    v0 = v0 & v1;
    a0 = a0 & 0xff;
    a3 = 48;
    v1 = 32;
    cnd_ = v0 == 0;
    if (a0 == 0) a3 = v1;
    if (cnd_) { goto L_08839890; }
    goto L_08839870;
L_08839870:;
    s3 = s3 - 1;
    s2 = s2 - 1;
    v1 = 0 < s3;
    v0 = 0 < s2;
    v1 = v1 & v0;
    ST16(s1, a3);
    cnd_ = v1 != 0;
    s1 = s1 + 2;
    if (cnd_) { goto L_08839870; }
    goto L_08839890;
L_08839890:;
    ST32(s6, s1);
    goto L_08839894;
L_08839894:;
    sp = sp + 32;
    return;
L_088398BC:;
    a0 = s1 + 0;
    goto L_088398C0;
L_088398C0:;
    a1 = s0 + 0;
    s4 = s4 - 1;
    s2 = s2 - 1;
    func_08839AD8(a0, a1);
    goto L_088398D0;
L_088398D0:;
    v0 = 0 < s4;
    v1 = 0 < s2;
    v0 = v0 & v1;
    s1 = s1 + 2;
    cnd_ = v0 != 0;
    s0 = s0 + 2;
    if (cnd_) { goto L_088398BC; }
    goto L_088398E8;
L_088398E8:;
    a0 = LD_U8(s5+14);
    goto L_08839840;
L_088398F0:;
    s4 = 6;
    goto L_088397C8;
}

/* 088398F8 */
void func_088398F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088398F8:;
    sp = sp - 32;
    v0 = 0x7fff0000u;
    s6 = a0 + 0;
    s5 = a2 + 0;
    v0 = v0 | 0xffff;
    s4 = 0 + 0;
    s2 = a1 + 0;
    t1 = LD32(a2+8);
    a2 = LD32(a2+4);
    s1 = LD32(s6);
    a0 = ~(0 | t1);
    v1 = ~(0 | a2);
    if (v1 == 0) a2 = v0;
    cnd_ = a3 == 0;
    if (a0 == 0) t1 = 0;
    if (cnd_) { goto L_08839AC4; }
    goto L_08839954;
L_08839954:;
    cnd_ = t0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0883999C; }
    goto L_0883995C;
L_0883995C:;
    a2 = a2 - 1;
    cnd_ = a2 == v0;
    if (cnd_) { a0 = LD_U8(s5+14); goto L_088399A0; }
    goto L_08839968;
L_08839968:;
    v0 = (u32)(s32)LD_S8(a3);
    cnd_ = v0 == 0;
    v1 = a3 + 1;
    if (cnd_) { goto L_0883999C; }
    goto L_08839974;
L_08839974:;
    a0 = (u32)-1;
    goto L_08839978;
L_08839978:;
    s4 = s4 + 1;
    v0 = s4 < t0;
    cnd_ = v0 == 0;
    a2 = a2 - 1;
    if (cnd_) { goto L_0883999C; }
    goto L_08839988;
L_08839988:;
    cnd_ = a2 == a0;
    if (cnd_) { a0 = LD_U8(s5+14); goto L_088399A0; }
    goto L_08839990;
L_08839990:;
    v0 = LD_U8(v1);
    cnd_ = v0 != 0;
    v1 = v1 + 1;
    if (cnd_) { goto L_08839978; }
    goto L_0883999C;
L_0883999C:;
    a0 = LD_U8(s5+14);
    goto L_088399A0;
L_088399A0:;
    v1 = t1 - s4;
    v0 = s4 < t1;
    s3 = 0 + 0;
    if (v0 != 0) s3 = v1;
    cnd_ = a0 != 0;
    v1 = 0 < a1;
    if (cnd_) { goto L_088399F4; }
    goto L_088399B8;
L_088399B8:;
    v0 = LD_U8(s5+16);
    cnd_ = v0 != 0;
    v0 = 0 < s3;
    if (cnd_) { goto L_088399F4; }
    goto L_088399C4;
L_088399C4:;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088399F4; }
    goto L_088399D0;
L_088399D0:;
    a1 = 32;
    goto L_088399D4;
L_088399D4:;
    s3 = s3 - 1;
    s2 = s2 - 1;
    v0 = 0 < s3;
    v1 = 0 < s2;
    v0 = v0 & v1;
    ST16(s1, a1);
    cnd_ = v0 != 0;
    s1 = s1 + 2;
    if (cnd_) { goto L_088399D4; }
    goto L_088399F4;
L_088399F4:;
    cnd_ = a3 != 0;
    s0 = a3 + 0;
    if (cnd_) { goto L_08839A04; }
    goto L_088399FC;
L_088399FC:;
    v0 = D_08AD43F0 - (17392);
    s0 = v0 + 17392;
    goto L_08839A04;
L_08839A04:;
    v0 = 0 < s4;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_08839A94; }
    goto L_08839A14;
L_08839A14:;
    v0 = a0 & 0xff;
    cnd_ = v0 != 0;
    a0 = LD_U8(s5+16);
    if (cnd_) { goto L_08839A28; }
    goto L_08839A20;
L_08839A20:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s6, s1); goto L_08839A68; }
    goto L_08839A28;
L_08839A28:;
    v0 = 0 < s3;
    v0 = v0 & v1;
    a0 = a0 & 0xff;
    a3 = 48;
    v1 = 32;
    cnd_ = v0 == 0;
    if (a0 == 0) a3 = v1;
    if (cnd_) { goto L_08839A64; }
    goto L_08839A44;
L_08839A44:;
    s3 = s3 - 1;
    s2 = s2 - 1;
    v1 = 0 < s3;
    v0 = 0 < s2;
    v1 = v1 & v0;
    ST16(s1, a3);
    cnd_ = v1 != 0;
    s1 = s1 + 2;
    if (cnd_) { goto L_08839A44; }
    goto L_08839A64;
L_08839A64:;
    ST32(s6, s1);
    goto L_08839A68;
L_08839A68:;
    sp = sp + 32;
    return;
L_08839A90:;
    a0 = s1 + 0;
    goto L_08839A94;
L_08839A94:;
    a1 = s0 + 0;
    s4 = s4 - 1;
    s2 = s2 - 1;
    func_088374FC(a0, a1);
    goto L_08839AA4;
L_08839AA4:;
    v0 = 0 < s4;
    v1 = 0 < s2;
    v0 = v0 & v1;
    s1 = s1 + 2;
    cnd_ = v0 != 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_08839A90; }
    goto L_08839ABC;
L_08839ABC:;
    a0 = LD_U8(s5+14);
    goto L_08839A14;
L_08839AC4:;
    s4 = 6;
    goto L_0883999C;
}

/* 08839ACC */
void func_08839ACC(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_08839ACC:;
    v0 = LD_U8(a1);
    ST8(a0, v0);
    return;
}

/* 08839AD8 */
void func_08839AD8(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_08839AD8:;
    v0 = LD_U16(a1);
    ST16(a0, v0);
    return;
}

/* 08839AE4 */
void func_08839AE4(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08839AE4:;
    sp = sp - 16;
    a0 = 24;
    v0 = D_08B25BD8 - (23512);
    ST32(v0+23512, 0);
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08839B00;
L_08839B00:;
    v1 = D_08B25BD0 - (23504);
    ST32(v0+20, 0);
    a0 = 16;
    ST32(v0+4, 0);
    ST32(v0, 0);
    ST8(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v0+16, 0);
    ST32(v1+23504, v0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08839B28;
L_08839B28:;
    s0 = v0 + 0;
    v0 = D_08AF0F80 - (3968);
    v0 = v0 + 3968;
    ST32(s0, v0);
    a0 = 1000;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08839B40;
L_08839B40:;
    ST32(s0+4, v0);
    v1 = 250;
    a0 = 0 + 0;
    ST32(s0+12, 0);
    ST32(s0+8, v1);
    v1 = v0 + 0;
    goto L_08839B58;
L_08839B58:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < 250;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08839B58; }
    goto L_08839B6C;
L_08839B6C:;
    v0 = D_08B25BD4 - (23508);
    ST32(v0+23508, s0);
    a0 = 3;
    v0 = D_08B263B8 - (25528);
    v1 = D_08B25BDC - (23516);
    ST32(v0+25528, a0);
    v0 = D_08B25FC4 - (24516);
    t0 = v1 + 23516;
    a3 = v0 + 24516;
    v1 = D_08B263B0 - (25520);
    v0 = D_08B263B4 - (25524);
    ST32(v1+25520, 0);
    a1 = 0 + 0;
    a2 = (u32)-1;
    ST32(v0+25524, 0);
    goto L_08839BA8;
L_08839BA8:;
    v0 = a1 << 2;
    a1 = a1 + 1;
    a0 = v0 + a3;
    v1 = (s32)a1 < 250;
    v0 = v0 + t0;
    ST32(v0, a2);
    cnd_ = v1 != 0;
    ST32(a0, 0);
    if (cnd_) { goto L_08839BA8; }
    goto L_08839BC8;
L_08839BC8:;
    func_0890C36C();
    goto L_08839BD0;
L_08839BD0:;
    func_08A698BC();
    goto L_08839BD8;
L_08839BD8:;
    sp = sp + 16;
    return;
}

/* 08839BE8 */
u64 func_08839BE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08839BE8:;
    sp = sp - 32;
    s3 = D_08B25BC4 - (23492);
    s2 = a0 + 0;
    s0 = s3 + 23492;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08839C10;
L_08839C10:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_08839C2C; }
    goto L_08839C20;
L_08839C20:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08839C28;
L_08839C28:;
    ST32(s0+4, s1);
    goto L_08839C2C;
L_08839C2C:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    s0 = D_08B25BD0 - (23504);
    v0 = LD32(s0+23504);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08839CA8; }
    goto L_08839C48;
L_08839C48:;
    s0 = s3 + 23492;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08839C74; }
    goto L_08839C58;
L_08839C58:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08839C8C; }
    goto L_08839C70;
L_08839C70:;
    goto L_08839C74;
L_08839C74:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08839C8C:;
    v0 = func_088F8C18();
    goto L_08839C94;
L_08839C94:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08839CA0;
L_08839CA0:;
    goto L_08839C74;
L_08839CA8:;
    a0 = s2 + 0;
    { u64 r_ = func_0883A944(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08839CB0;
L_08839CB0:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08839C48; }
    goto L_08839CB8;
L_08839CB8:;
    a0 = s2 + 0;
    func_0890C2D8(a0);
    goto L_08839CC0;
L_08839CC0:;
    s0 = LD32(s0+23504);
    v0 = D_08B25BDC - (23516);
    v0 = v0 + 23516;
    a0 = s2 << 2;
    a0 = a0 + v0;
    v1 = (u32)-1;
    ST32(a0, v1);
    v0 = LD_U8(s0+8);
    cnd_ = v0 == 0;
    s1 = LD32(s1+4);
    if (cnd_) { goto L_08839D64; }
    goto L_08839CE8;
L_08839CE8:;
    a0 = LD32(s0+12);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_08839D50; }
    goto L_08839CF4;
L_08839CF4:;
    v1 = LD32(s0+16);
    v0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0, s1);
    ST32(s0+16, v1);
    goto L_08839D0C;
L_08839D0C:;
    v0 = D_08B25BD4 - (23508);
    goto L_08839D10;
L_08839D10:;
    a0 = LD32(v0+23508);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08839D24;
L_08839D24:;
    v1 = D_08B15AB4 - (23220);
    v0 = LD32(v1+23220);
    cnd_ = v0 == s2;
    v0 = (u32)-1;
    if (cnd_) { goto L_08839D48; }
    goto L_08839D34;
L_08839D34:;
    v1 = D_08B25BD8 - (23512);
    v0 = LD32(v1+23512);
    v0 = v0 - 1;
    ST32(v1+23512, v0);
    goto L_08839C48;
L_08839D48:;
    ST32(v1+23220, v0);
    goto L_08839D34;
L_08839D50:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08839D58;
L_08839D58:;
    ST32(s0+12, v0);
    a0 = v0 + 0;
    goto L_08839CF4;
L_08839D64:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08AA6DF0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08839D70;
L_08839D70:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08839D0C; }
    goto L_08839D78;
L_08839D78:;
    a0 = LD32(v0+12);
    cnd_ = a0 != 0;
    s1 = v0 + 12;
    if (cnd_) { goto L_08839D9C; }
    goto L_08839D84;
L_08839D84:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08839D94;
L_08839D94:;
    v0 = D_08B25BD4 - (23508);
    goto L_08839D10;
L_08839D9C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08839DA4;
L_08839DA4:;
    ST32(s0+12, 0);
    goto L_08839D84;
}

/* 08839DAC */
void func_08839DAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08839DAC:;
    sp = sp - 16;
    s2 = D_08B25BC4 - (23492);
    s0 = s2 + 23492;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08839DCC;
L_08839DCC:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_08839DE8; }
    goto L_08839DDC;
L_08839DDC:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08839DE4;
L_08839DE4:;
    ST32(s0+4, s1);
    goto L_08839DE8;
L_08839DE8:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = D_08B25BDC - (23516);
    s1 = v0 + 23516;
    s0 = 0 + 0;
    v1 = LD32(s1);
    goto L_08839E04;
L_08839E04:;
    a0 = s0 + 0;
    s1 = s1 + 4;
    v0 = (s32)v1 < 2;
    v0 = v0 ^ 0x1;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_08839EBC; }
    goto L_08839E24;
L_08839E24:;
    v0 = (s32)s0 < 250;
    goto L_08839E28;
L_08839E28:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_08839E04; }
    goto L_08839E30;
L_08839E30:;
    s1 = D_08B263B0 - (25520);
    a0 = LD32(s1+25520);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08839EAC; }
    goto L_08839E40;
L_08839E40:;
    v0 = D_08B263B4 - (25524);
    goto L_08839E44;
L_08839E44:;
    s0 = s2 + 23492;
    ST32(v0+25524, 0);
    ST32(s1+25520, 0);
    func_0890C39C();
    goto L_08839E54;
L_08839E54:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08839E7C; }
    goto L_08839E60;
L_08839E60:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08839E90; }
    goto L_08839E78;
L_08839E78:;
    goto L_08839E7C;
L_08839E7C:;
    sp = sp + 16;
    return;
L_08839E90:;
    v0 = func_088F8C18();
    goto L_08839E98;
L_08839E98:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08839EA4;
L_08839EA4:;
    goto L_08839E7C;
L_08839EAC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08839EB4;
L_08839EB4:;
    v0 = D_08B263B4 - (25524);
    goto L_08839E44;
L_08839EBC:;
    { u64 r_ = func_08839BE8(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08839EC4;
L_08839EC4:;
    v0 = (s32)s0 < 250;
    goto L_08839E28;
}

/* 08839ECC */
void func_08839ECC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08839ECC:;
    sp = sp - 32;
    s3 = D_08B25BC4 - (23492);
    s2 = a0 + 0;
    s0 = s3 + 23492;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08839EF4;
L_08839EF4:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_08839F10; }
    goto L_08839F04;
L_08839F04:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08839F0C;
L_08839F0C:;
    ST32(s0+4, s1);
    goto L_08839F10;
L_08839F10:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = D_08B25BDC - (23516);
    s1 = v0 + 23516;
    s0 = 0 + 0;
    v0 = LD32(s1);
    goto L_08839F2C;
L_08839F2C:;
    a0 = s0 + 0;
    s1 = s1 + 4;
    cnd_ = v0 == s2;
    s0 = s0 + 1;
    if (cnd_) { goto L_08839FD8; }
    goto L_08839F3C;
L_08839F3C:;
    v0 = (s32)s0 < 250;
    goto L_08839F40;
L_08839F40:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08839F2C; }
    goto L_08839F48;
L_08839F48:;
    s1 = D_08B263B0 - (25520);
    a0 = LD32(s1+25520);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08839FC8; }
    goto L_08839F58;
L_08839F58:;
    v0 = D_08B263B4 - (25524);
    goto L_08839F5C;
L_08839F5C:;
    s0 = s3 + 23492;
    ST32(v0+25524, 0);
    ST32(s1+25520, 0);
    func_0890C39C();
    goto L_08839F6C;
L_08839F6C:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08839F94; }
    goto L_08839F78;
L_08839F78:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08839FAC; }
    goto L_08839F90;
L_08839F90:;
    goto L_08839F94;
L_08839F94:;
    sp = sp + 32;
    return;
L_08839FAC:;
    v0 = func_088F8C18();
    goto L_08839FB4;
L_08839FB4:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08839FC0;
L_08839FC0:;
    goto L_08839F94;
L_08839FC8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08839FD0;
L_08839FD0:;
    v0 = D_08B263B4 - (25524);
    goto L_08839F5C;
L_08839FD8:;
    { u64 r_ = func_08839BE8(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08839FE0;
L_08839FE0:;
    v0 = (s32)s0 < 250;
    goto L_08839F40;
}

/* 08839FE8 */
void func_08839FE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08839FE8:;
    sp = sp - 32;
    s3 = D_08B25BD0 - (23504);
    { u64 r_ = func_0883A768(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A008;
L_0883A008:;
    v0 = D_08B25BD8 - (23512);
    s0 = LD32(s3+23504);
    cnd_ = s0 == 0;
    ST32(v0+23512, 0);
    if (cnd_) { goto L_0883A078; }
    goto L_0883A018;
L_0883A018:;
    s1 = LD32(s0);
    cnd_ = s1 == 0;
    if (cnd_) { a0 = LD32(s0+12); goto L_0883A05C; }
    goto L_0883A024;
L_0883A024:;
    a1 = LD32(s1+24);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0883A118; }
    goto L_0883A030;
L_0883A030:;
    a1 = LD32(s1+28);
    goto L_0883A034;
L_0883A034:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0883A108; }
    goto L_0883A03C;
L_0883A03C:;
    a0 = LD32(s1+12);
    goto L_0883A040;
L_0883A040:;
    cnd_ = a0 != 0;
    s2 = s1 + 12;
    if (cnd_) { goto L_0883A0F8; }
    goto L_0883A048;
L_0883A048:;
    ST32(s2+4, 0);
    a0 = s1 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A058;
L_0883A058:;
    a0 = LD32(s0+12);
    goto L_0883A05C;
L_0883A05C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0883A0E8; }
    goto L_0883A064;
L_0883A064:;
    ST32(s0+12, 0);
    goto L_0883A068;
L_0883A068:;
    a0 = s0 + 0;
    ST32(s0+16, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A074;
L_0883A074:;
    ST32(s3+23504, 0);
    goto L_0883A078;
L_0883A078:;
    s0 = D_08B25BD4 - (23508);
    a0 = LD32(s0+23508);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0883A0D4; }
    goto L_0883A088;
L_0883A088:;
    s0 = D_08B263B0 - (25520);
    a0 = LD32(s0+25520);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0883A0BC; }
    goto L_0883A098;
L_0883A098:;
    func_0890C394();
    goto L_0883A0A0;
L_0883A0A0:;
    sp = sp + 32;
    return;
L_0883A0BC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A0C4;
L_0883A0C4:;
    v0 = D_08B263B4 - (25524);
    ST32(s0+25520, 0);
    ST32(v0+25524, 0);
    goto L_0883A098;
L_0883A0D4:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883A0E0;
L_0883A0E0:;
    ST32(s0+23508, 0);
    goto L_0883A088;
L_0883A0E8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A0F0;
L_0883A0F0:;
    ST32(s0+12, 0);
    goto L_0883A068;
L_0883A0F8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A100;
L_0883A100:;
    ST32(s1+12, 0);
    goto L_0883A048;
L_0883A108:;
    a0 = s0 + 0;
    func_08AA6ED8(a0, a1, 0, 0, 0);
    goto L_0883A110;
L_0883A110:;
    a0 = LD32(s1+12);
    goto L_0883A040;
L_0883A118:;
    a0 = s0 + 0;
    func_08AA6ED8(a0, a1, 0, 0, 0);
    goto L_0883A120;
L_0883A120:;
    a1 = LD32(s1+28);
    goto L_0883A034;
}

/* 0883A128 */
void func_0883A128(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883A128:;
    sp = sp - 32;
    s3 = D_08B25BC4 - (23492);
    s2 = a0 + 0;
    s0 = s3 + 23492;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A150;
L_0883A150:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_0883A16C; }
    goto L_0883A160;
L_0883A160:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A168;
L_0883A168:;
    ST32(s0+4, s1);
    goto L_0883A16C;
L_0883A16C:;
    v0 = LD32(s0+8);
    s1 = D_08B263B0 - (25520);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    s0 = s3 + 23492;
    v0 = LD32(s1+25520);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883A1F8; }
    goto L_0883A18C;
L_0883A18C:;
    a0 = s2 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883A194;
L_0883A194:;
    v1 = LD32(s0+8);
    ST32(s1+25520, v0);
    v0 = D_08B263B4 - (25524);
    cnd_ = v1 == 0;
    ST32(v0+25524, s2);
    if (cnd_) { goto L_0883A1C0; }
    goto L_0883A1A8;
L_0883A1A8:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0883A1DC; }
    goto L_0883A1C0;
L_0883A1C0:;
    goto L_0883A1C4;
L_0883A1C4:;
    sp = sp + 32;
    return;
L_0883A1DC:;
    v0 = func_088F8C18();
    goto L_0883A1E4;
L_0883A1E4:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A1F0;
L_0883A1F0:;
    goto L_0883A1C4;
L_0883A1F8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A200;
L_0883A200:;
    goto L_0883A18C;
}

/* 0883A208 */
u64 func_0883A208(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_0883A208:;
    cnd_ = (s32)a0 < 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0883A234; }
    goto L_0883A210;
L_0883A210:;
    v1 = D_08B263B4 - (25524);
    v0 = LD32(v1+25524);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 == 0;
    a1 = a0 << 2;
    if (cnd_) { goto L_0883A234; }
    goto L_0883A224;
L_0883A224:;
    v1 = D_08B263B0 - (25520);
    v0 = LD32(v1+25520);
    v0 = a1 + v0;
    a2 = LD32(v0);
    goto L_0883A234;
L_0883A234:;
    v0 = a2 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0883A23C */
u32 func_0883A23C(void)
{
    u32 v0 = 0, v1 = 0;
L_0883A23C:;
    v1 = D_08B15AB4 - (23220);
    v0 = LD32(v1+23220);
    return v0;
}

/* 0883A248 */
u32 func_0883A248(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883A248:;
    sp = sp - 32;
    s4 = D_08B25BC4 - (23492);
    s3 = a1 + 0;
    s2 = a0 + 0;
    s0 = s4 + 23492;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A278;
L_0883A278:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_0883A294; }
    goto L_0883A288;
L_0883A288:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A290;
L_0883A290:;
    ST32(s0+4, s1);
    goto L_0883A294;
L_0883A294:;
    v0 = LD32(s0+8);
    a0 = s2 + 0;
    a2 = 0 + 0;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = D_08B263B8 - (25528);
    s0 = s4 + 23492;
    a1 = LD32(v0+25528);
    v0 = func_0883A334(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_0883A2B8;
L_0883A2B8:;
    v1 = D_08B263B0 - (25520);
    a0 = LD32(v1+25520);
    s1 = v0 + 0;
    v0 = s3 << 2;
    v0 = v0 + a0;
    ST32(v0, s1);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    v0 = s1 + 0;
    if (cnd_) { goto L_0883A2F8; }
    goto L_0883A2DC;
L_0883A2DC:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0883A318; }
    goto L_0883A2F4;
L_0883A2F4:;
    v0 = s1 + 0;
    goto L_0883A2F8;
L_0883A2F8:;
    sp = sp + 32;
    return v0;
L_0883A318:;
    v0 = func_088F8C18();
    goto L_0883A320;
L_0883A320:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A32C;
L_0883A32C:;
    v0 = s1 + 0;
    goto L_0883A2F8;
}

/* 0883A334 */
u32 func_0883A334(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0883A334:;
    sp = sp - 48;
    s4 = a2 + 0;
    s3 = a1 + 0;
    s2 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0883A37C; }
    goto L_0883A370;
L_0883A370:;
    v0 = (u32)(s32)LD_S8(a0);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0883A3B0; }
    goto L_0883A37C;
L_0883A37C:;
    v0 = (u32)-1;
    goto L_0883A380;
L_0883A380:;
    sp = sp + 48;
    return v0;
L_0883A3B0:;
    s7 = D_08B25BC4 - (23492);
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A3B8;
L_0883A3B8:;
    s0 = s7 + 23492;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_0883A3D8; }
    goto L_0883A3CC;
L_0883A3CC:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A3D4;
L_0883A3D4:;
    ST32(s0+4, s1);
    goto L_0883A3D8;
L_0883A3D8:;
    v0 = LD32(s0+8);
    a0 = s3 + 0;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = D_08B263B8 - (25528);
    s5 = LD32(v0+25528);
    func_0883A828(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_0883A3F4;
L_0883A3F4:;
    a0 = s2 + 0;
    v0 = func_088325D0(a0);
    goto L_0883A3FC;
L_0883A3FC:;
    a0 = v0 + 0;
    { u64 r_ = func_0883A8BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A404;
L_0883A404:;
    cnd_ = s4 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0883A418; }
    goto L_0883A40C;
L_0883A40C:;
    v0 = ~(0 | v0);
    v0 = v0 < 0x1u;
    ST8(s4, v0);
    goto L_0883A418;
L_0883A418:;
    v0 = (u32)-1;
    cnd_ = s1 == v0;
    fp = D_08B25BD8 - (23512);
    if (cnd_) { goto L_0883A478; }
    goto L_0883A424;
L_0883A424:;
    a0 = s5 + 0;
    goto L_0883A428;
L_0883A428:;
    s0 = s7 + 23492;
    func_0883A828(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_0883A430;
L_0883A430:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    v0 = s1 + 0;
    if (cnd_) { goto L_0883A380; }
    goto L_0883A43C;
L_0883A43C:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0883A45C; }
    goto L_0883A454;
L_0883A454:;
    v0 = s1 + 0;
    goto L_0883A380;
L_0883A45C:;
    v0 = func_088F8C18();
    goto L_0883A464;
L_0883A464:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A470;
L_0883A470:;
    v0 = s1 + 0;
    goto L_0883A380;
L_0883A478:;
    v0 = LD32(fp+23512);
    v0 = (s32)v0 < 250;
    cnd_ = v0 == 0;
    a0 = s5 + 0;
    if (cnd_) { goto L_0883A428; }
    goto L_0883A488;
L_0883A488:;
    a0 = s2 + 0;
    v0 = func_088325D0(a0);
    goto L_0883A490;
L_0883A490:;
    s3 = v0 + 0;
    v0 = D_08B25BD0 - (23504);
    s4 = LD32(v0+23504);
    v1 = LD_U8(s4+8);
    cnd_ = v1 != 0;
    a0 = s5 + 0;
    if (cnd_) { goto L_0883A428; }
    goto L_0883A4A8;
L_0883A4A8:;
    v0 = LD32(s4);
    cnd_ = v0 == 0;
    s0 = s4 + 0;
    if (cnd_) { goto L_0883A4DC; }
    goto L_0883A4B4;
L_0883A4B4:;
    v1 = v0 + 0;
    goto L_0883A4B8;
L_0883A4B8:;
    a0 = v1 + 28;
    s0 = v1 + 24;
    v1 = LD32(v1);
    v0 = s3 < v1;
    cnd_ = v1 == s3;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_0883A424; }
    goto L_0883A4D0;
L_0883A4D0:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0883A4B8; }
    goto L_0883A4DC;
L_0883A4DC:;
    a0 = 32;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883A4E4;
L_0883A4E4:;
    v1 = v0 + 12;
    ST32(v1+8, 0);
    s6 = v0 + 4;
    ST32(v1+4, 0);
    ST32(v0, s3);
    v1 = LD32(s4+4);
    ST32(v0+24, 0);
    v1 = v1 + 1;
    ST32(v0+28, 0);
    ST32(s4+4, v1);
    ST32(s0, v0);
    cnd_ = s6 == 0;
    ST32(v0+12, 0);
    if (cnd_) { goto L_0883A424; }
    goto L_0883A518;
L_0883A518:;
    v0 = D_08B25BD4 - (23508);
    a1 = LD32(v0+23508);
    v1 = LD32(a1+12);
    v0 = LD32(a1+8);
    v0 = (s32)v1 < (s32)v0;
    cnd_ = v0 == 0;
    s1 = (u32)-1;
    if (cnd_) { goto L_0883A54C; }
    goto L_0883A534;
L_0883A534:;
    v0 = v1 + 1;
    a0 = LD32(a1+4);
    ST32(a1+12, v0);
    v1 = v1 << 2;
    v1 = v1 + a0;
    s1 = LD32(v1);
    goto L_0883A54C;
L_0883A54C:;
    a0 = LD32(s6+8);
    ST32(s6+4, s3);
    s0 = s6 + 8;
    cnd_ = a0 == 0;
    ST32(s6, s1);
    if (cnd_) { goto L_0883A574; }
    goto L_0883A560;
L_0883A560:;
    cnd_ = s2 == a0;
    a1 = LD32(fp+23512);
    if (cnd_) { goto L_0883A5B0; }
    goto L_0883A568;
L_0883A568:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A570;
L_0883A570:;
    ST32(s6+8, 0);
    goto L_0883A574;
L_0883A574:;
    ST32(s0+8, 0);
    cnd_ = s2 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_0883A608; }
    goto L_0883A580;
L_0883A580:;
    a0 = s2 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A588;
L_0883A588:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883A59C;
L_0883A59C:;
    cnd_ = v0 != 0;
    ST32(s6+8, v0);
    if (cnd_) { goto L_0883A5F4; }
    goto L_0883A5A4;
L_0883A5A4:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_0883A5AC;
L_0883A5AC:;
    a1 = LD32(fp+23512);
    goto L_0883A5B0;
L_0883A5B0:;
    v1 = D_08B25FC4 - (24516);
    v0 = D_08B25BDC - (23516);
    a2 = s1 << 2;
    v0 = v0 + 23516;
    v1 = v1 + 24516;
    v1 = a2 + v1;
    a0 = 1;
    a2 = a2 + v0;
    v0 = D_08B263AC - (25516);
    a1 = a1 + 1;
    ST8(v0+25516, a0);
    v0 = D_08B15AB4 - (23220);
    ST32(fp+23512, a1);
    ST32(a2, 0);
    ST32(v1, 0);
    ST32(v0+23220, s1);
    goto L_0883A424;
L_0883A5F4:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A600;
L_0883A600:;
    a1 = LD32(fp+23512);
    goto L_0883A5B0;
L_0883A608:;
    ST32(s6+8, 0);
    goto L_0883A5AC;
}

/* 0883A610 */
void func_0883A610(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883A610:;
    sp = sp - 32;
    s2 = D_08B25BC4 - (23492);
    s0 = s2 + 23492;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A634;
L_0883A634:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_0883A650; }
    goto L_0883A644;
L_0883A644:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A64C;
L_0883A64C:;
    ST32(s0+4, s1);
    goto L_0883A650;
L_0883A650:;
    v0 = LD32(s0+8);
    v1 = D_08B263AC - (25516);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = LD_U8(v1+25516);
    cnd_ = v0 == 0;
    s0 = s2 + 23492;
    if (cnd_) { goto L_0883A6C8; }
    goto L_0883A66C;
L_0883A66C:;
    v0 = D_08B25BD0 - (23504);
    s0 = LD32(v0+23504);
    cnd_ = s0 == 0;
    ST8(v1+25516, 0);
    if (cnd_) { goto L_0883A6C4; }
    goto L_0883A67C;
L_0883A67C:;
    s1 = LD32(s0);
    v0 = 1;
    v1 = ((u32)(uintptr_t)func_0883A744) - (-22716);
    ST8(s0+8, v0);
    cnd_ = s1 == 0;
    s3 = v1 - 22716;
    if (cnd_) { goto L_0883A6B8; }
    goto L_0883A694;
L_0883A694:;
    a1 = LD32(s1+24);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_0883A734; }
    goto L_0883A6A0;
L_0883A6A0:;
    a1 = LD32(s1+28);
    goto L_0883A6A4;
L_0883A6A4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_0883A724; }
    goto L_0883A6AC;
L_0883A6AC:;
    a0 = LD32(s1);
    goto L_0883A6B0;
L_0883A6B0:;
    t_ = s3;
    a1 = s1 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883A6B8;
L_0883A6B8:;
    a0 = s0 + 0;
    { u64 r_ = func_08AA7028(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A6C0;
L_0883A6C0:;
    ST8(s0+8, 0);
    goto L_0883A6C4;
L_0883A6C4:;
    s0 = s2 + 23492;
    goto L_0883A6C8;
L_0883A6C8:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0883A6F0; }
    goto L_0883A6D4;
L_0883A6D4:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0883A708; }
    goto L_0883A6EC;
L_0883A6EC:;
    goto L_0883A6F0;
L_0883A6F0:;
    sp = sp + 32;
    return;
L_0883A708:;
    v0 = func_088F8C18();
    goto L_0883A710;
L_0883A710:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A71C;
L_0883A71C:;
    goto L_0883A6F0;
L_0883A724:;
    a2 = s3 + 0;
    func_08AA7100(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0883A72C;
L_0883A72C:;
    a0 = LD32(s1);
    goto L_0883A6B0;
L_0883A734:;
    a2 = s3 + 0;
    func_08AA7100(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0883A73C;
L_0883A73C:;
    a1 = LD32(s1+28);
    goto L_0883A6A4;
}

/* 0883A744 */
rv_t func_0883A744(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883A744:;
    sp = sp - 16;
    a0 = a1 + 0;
    a0 = a0 + 8;
    a1 = LD32(a1);
    func_0890C058();
    goto L_0883A75C;
L_0883A75C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0883A768 */
u64 func_0883A768(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883A768:;
    sp = sp - 16;
    s2 = D_08B25BC4 - (23492);
    s0 = s2 + 23492;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A788;
L_0883A788:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_0883A7A4; }
    goto L_0883A798;
L_0883A798:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A7A0;
L_0883A7A0:;
    ST32(s0+4, s1);
    goto L_0883A7A4;
L_0883A7A4:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    s0 = 0 + 0;
    a0 = s0 + 0;
    goto L_0883A7B8;
L_0883A7B8:;
    s0 = s0 + 1;
    { u64 r_ = func_08839BE8(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A7C0;
L_0883A7C0:;
    v0 = (s32)s0 < 250;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0883A7B8; }
    goto L_0883A7CC;
L_0883A7CC:;
    s0 = s2 + 23492;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0883A7F8; }
    goto L_0883A7DC;
L_0883A7DC:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0883A80C; }
    goto L_0883A7F4;
L_0883A7F4:;
    goto L_0883A7F8;
L_0883A7F8:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0883A80C:;
    v0 = func_088F8C18();
    goto L_0883A814;
L_0883A814:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A820;
L_0883A820:;
    goto L_0883A7F8;
}

/* 0883A828 */
void func_0883A828(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883A828:;
    sp = sp - 16;
    s1 = D_08B263B8 - (25528);
    v0 = LD32(s1+25528);
    s0 = a0 + 0;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_0883A854; }
    goto L_0883A848;
L_0883A848:;
    func_0883A610(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0883A850;
L_0883A850:;
    ST32(s1+25528, s0);
    goto L_0883A854;
L_0883A854:;
    sp = sp + 16;
    return;
}

/* 0883A868 */
u32 func_0883A868(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883A868:;
    sp = sp - 16;
    v0 = D_08B263B8 - (25528);
    s0 = a0 + 0;
    a0 = a1 + 0;
    s1 = LD32(v0+25528);
    func_0883A828(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0883A88C;
L_0883A88C:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_08827BEC(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883A898;
L_0883A898:;
    s0 = v0 + 0;
    a0 = s1 + 0;
    func_0883A828(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_0883A8A4;
L_0883A8A4:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 0883A8BC */
u64 func_0883A8BC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883A8BC:;
    sp = sp - 16;
    a1 = a0 + 0;
    cnd_ = a0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0883A928; }
    goto L_0883A8D0;
L_0883A8D0:;
    v0 = D_08B25BD0 - (23504);
    t0 = LD32(v0+23504);
    v1 = LD32(t0);
    cnd_ = v1 == 0;
    if (cnd_) { a0 = LD32(t0+20); goto L_0883A914; }
    goto L_0883A8E4;
L_0883A8E4:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_0883A8EC;
L_0883A8EC:;
    a0 = v0 + 28;
    a2 = v0 + 24;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_0883A91C; }
    goto L_0883A904;
L_0883A904:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0883A8EC; }
    goto L_0883A910;
L_0883A910:;
    a0 = LD32(t0+20);
    goto L_0883A914;
L_0883A914:;
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0883A934; }
    goto L_0883A91C;
L_0883A91C:;
    cnd_ = a3 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0883A928; }
    goto L_0883A924;
L_0883A924:;
    v0 = LD32(a3);
    goto L_0883A928;
L_0883A928:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0883A934:;
    a2 = 1;
    { u64 r_ = func_08AA7184(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A93C;
L_0883A93C:;
    a3 = v0 + 0;
    goto L_0883A91C;
}

/* 0883A944 */
u64 func_0883A944(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883A944:;
    sp = sp - 32;
    s2 = D_08B25BC4 - (23492);
    ST32(sp, a0);
    s0 = s2 + 23492;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A968;
L_0883A968:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_0883A984; }
    goto L_0883A978;
L_0883A978:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A980;
L_0883A980:;
    ST32(s0+4, s1);
    goto L_0883A984;
L_0883A984:;
    v0 = LD32(s0+8);
    s1 = s2 + 23492;
    a2 = ((u32)(uintptr_t)func_0883AA3C) - (-21956);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = D_08B25BD0 - (23504);
    s2 = D_08B263BC - (25532);
    s0 = LD32(v0+23504);
    v0 = 1;
    a3 = sp + 0;
    v1 = LD32(s0);
    a2 = a2 - 21956;
    a0 = s0 + 0;
    ST8(s0+8, v0);
    a1 = v1 + 0;
    cnd_ = v1 != 0;
    ST32(s2+25532, 0);
    if (cnd_) { goto L_0883AA2C; }
    goto L_0883A9C8;
L_0883A9C8:;
    a0 = s0 + 0;
    { u64 r_ = func_08AA7028(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883A9D0;
L_0883A9D0:;
    v0 = LD32(s1+8);
    cnd_ = v0 == 0;
    ST8(s0+8, 0);
    if (cnd_) { goto L_0883A9F4; }
    goto L_0883A9DC;
L_0883A9DC:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    ST32(s1+8, v0);
    v1 = LD32(s1+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0883AA10; }
    goto L_0883A9F4;
L_0883A9F4:;
    v0 = LD32(s2+25532);
    goto L_0883A9F8;
L_0883A9F8:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_0883AA10:;
    v0 = func_088F8C18();
    goto L_0883AA18;
L_0883AA18:;
    ST32(s1+4, v0);
    a0 = s1 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883AA24;
L_0883AA24:;
    v0 = LD32(s2+25532);
    goto L_0883A9F8;
L_0883AA2C:;
    v0 = func_08AA6F80(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0883AA34;
L_0883AA34:;
    goto L_0883A9C8;
}

/* 0883AA3C */
rv_t func_0883AA3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_0883AA3C:;
    v1 = LD32(a2);
    v0 = LD32(a1);
    cnd_ = v0 == v1;
    a0 = 1;
    if (cnd_) { goto L_0883AA54; }
    goto L_0883AA4C;
L_0883AA4C:;
    v0 = a0 + 0;
    return (rv_t){ v0, v1, f0 };
L_0883AA54:;
    v0 = D_08B263BC - (25532);
    ST32(v0+25532, a1);
    a0 = 0 + 0;
    goto L_0883AA4C;
}

/* 0883AA64 */
u64 func_0883AA64(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883AA64:;
    sp = sp - 32;
    s1 = a0 + 0;
    v0 = a1 ^ 0xffff;
    v1 = s1 ^ 0x1;
    v1 = v1 < 0x1u;
    s0 = v0 < 0x1u;
    a0 = D_08AD444C - (17484);
    s2 = D_08B25BC4 - (23492);
    v1 = s0 & v1;
    a0 = a0 + 17484;
    a1 = 0 + 0;
    a2 = 1;
    a3 = 1;
    t0 = 0 + 0;
    cnd_ = v1 != 0;
    s3 = s2 + 23492;
    if (cnd_) { goto L_0883AAF4; }
    goto L_0883AAB8;
L_0883AAB8:;
    v0 = s1 < 0x1u;
    goto L_0883AABC;
L_0883AABC:;
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    v0 = D_08B25BC4 - (23492);
    if (cnd_) { goto L_0883AAE4; }
    goto L_0883AAC8;
L_0883AAC8:;
    goto L_0883AACC;
L_0883AACC:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_0883AAE4:;
    a0 = LD32(v0+23492);
    v0 = sceKernelDeleteSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0883AAEC;
L_0883AAEC:;
    goto L_0883AACC;
L_0883AAF4:;
    v0 = sceKernelCreateSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0883AAFC;
L_0883AAFC:;
    ST32(s2+23492, v0);
    ST32(s3+8, 0);
    v0 = func_088F8C18();
    goto L_0883AB08;
L_0883AB08:;
    ST32(s3+4, v0);
    v0 = s1 < 0x1u;
    goto L_0883AABC;
}

/* 0883AB14 */
rv_t func_0883AB14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883AB14:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_0883AA64(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883AB28;
L_0883AB28:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0883AB34 */
rv_t func_0883AB34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883AB34:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_0883AA64(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883AB48;
L_0883AB48:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0883AB54 */
void func_0883AB54(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883AB54:;
    sp = sp - 16;
    v1 = 0 + 0;
    v1 = v1 + 1;
    goto L_0883AB64;
L_0883AB64:;
    v0 = v1 < 0xa0u;
    cnd_ = v0 != 0;
    v1 = v1 + 1;
    if (cnd_) { goto L_0883AB64; }
    goto L_0883AB70;
L_0883AB70:;
    func_08A698C4();
    goto L_0883AB78;
L_0883AB78:;
    sp = sp + 16;
    return;
}

/* 0883AB84 */
void func_0883AB84(void)
{
    u32 a0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883AB84:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = (u32)-1;
    func_0883ABE0(a0, a1);
    goto L_0883AB98;
L_0883AB98:;
    sp = sp + 16;
    return;
}

/* 0883ABA4 */
void func_0883ABA4(void)
{
    u32 a0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883ABA4:;
    sp = sp - 16;
    a0 = 2;
    a1 = (u32)-1;
    func_0883ABE0(a0, a1);
    goto L_0883ABB8;
L_0883ABB8:;
    sp = sp + 16;
    return;
}

/* 0883ABC4 */
void func_0883ABC4(u32 a0)
{
    u32 a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883ABC4:;
    sp = sp - 16;
    a1 = a0 + 0;
    func_0883ABE0(a0, a1);
    goto L_0883ABD4;
L_0883ABD4:;
    sp = sp + 16;
    return;
}

/* 0883ABE0 */
void func_0883ABE0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883ABE0:;
    sp = sp - 32;
    v0 = D_08B263C0 - (25536);
    s3 = a1 + 0;
    s2 = a0 + 0;
    s1 = 0 + 0;
    s0 = v0 + 25536;
    goto L_0883AC0C;
L_0883AC0C:;
    v0 = LD_U8(s0+48);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+44); goto L_0883AC44; }
    goto L_0883AC18;
L_0883AC18:;
    s1 = s1 + 1;
    goto L_0883AC1C;
L_0883AC1C:;
    v0 = s1 < 0xa0u;
    goto L_0883AC20;
L_0883AC20:;
    cnd_ = v0 != 0;
    s0 = s0 + 52;
    if (cnd_) { goto L_0883AC0C; }
    goto L_0883AC28;
L_0883AC28:;
    sp = sp + 32;
    return;
L_0883AC44:;
    v1 = s3 < v0;
    v0 = v0 < s2;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = s1 + 1; goto L_0883AC1C; }
    goto L_0883AC54;
L_0883AC54:;
    cnd_ = v1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0883AC18; }
    goto L_0883AC5C;
L_0883AC5C:;
    s1 = s1 + 1;
    func_0883AF3C(a0);
    goto L_0883AC64;
L_0883AC64:;
    v0 = s1 < 0xa0u;
    goto L_0883AC20;
}

/* 0883AC6C */
void func_0883AC6C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883AC6C:;
    sp = sp - 32;
    s5 = a0 + 0;
    s3 = (u32)-1;
    s1 = a1 + 0;
    v0 = func_0883AE14(a0);
    goto L_0883AC9C;
L_0883AC9C:;
    cnd_ = v0 == s3;
    v1 = v0 + 0;
    if (cnd_) { goto L_0883ACCC; }
    goto L_0883ACA4;
L_0883ACA4:;
    v0 = v1 + 0;
    sp = sp + 32;
    return;
L_0883ACCC:;
    s4 = D_08B263C0 - (25536);
    v0 = s4 + 25536;
    v1 = v0 + 48;
    a0 = 0 + 0;
    v0 = LD_U8(v1);
    goto L_0883ACE0;
L_0883ACE0:;
    cnd_ = v0 == 0;
    v1 = v1 + 52;
    if (cnd_) { goto L_0883AE0C; }
    goto L_0883ACE8;
L_0883ACE8:;
    a0 = a0 + 1;
    v0 = a0 < 0xa0u;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(v1); goto L_0883ACE0; }
    goto L_0883ACF8;
L_0883ACF8:;
    v0 = (u32)-1;
    cnd_ = s3 == v0;
    v0 = 52;
    if (cnd_) { goto L_0883ADE8; }
    goto L_0883AD04;
L_0883AD04:;
    { s64 p_ = (s64)(s32)s3 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = s4 + 25536;
    v0 = lo;
    s0 = v0 + v1;
    a0 = LD32(s0);
    cnd_ = a0 == 0;
    s2 = LD32(s1);
    if (cnd_) { goto L_0883AD34; }
    goto L_0883AD20;
L_0883AD20:;
    cnd_ = s2 == a0;
    v1 = 52;
    if (cnd_) { goto L_0883AD70; }
    goto L_0883AD28;
L_0883AD28:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883AD30;
L_0883AD30:;
    ST32(s0, 0);
    goto L_0883AD34;
L_0883AD34:;
    ST32(s0+8, 0);
    cnd_ = s2 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_0883AE04; }
    goto L_0883AD40;
L_0883AD40:;
    a0 = s2 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883AD48;
L_0883AD48:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883AD5C;
L_0883AD5C:;
    cnd_ = v0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0883ADF0; }
    goto L_0883AD64;
L_0883AD64:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_0883AD6C;
L_0883AD6C:;
    v1 = 52;
    goto L_0883AD70;
L_0883AD70:;
    { s64 p_ = (s64)(s32)s3 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = D_08B263B8 - (25528);
    a0 = LD32(s1+12);
    a3 = LD32(v0+25528);
    a1 = LD32(s1+44);
    a2 = LD32(s1+40);
    v0 = s4 + 25536;
    v1 = lo;
    f0 = BITSF(LD32(s1+16));
    f1 = BITSF(LD32(s1+20));
    f2 = BITSF(LD32(s1+24));
    f3 = BITSF(LD32(s1+28));
    f4 = BITSF(LD32(s1+32));
    f5 = BITSF(LD32(s1+36));
    v1 = v1 + v0;
    v0 = (u32)-1;
    ST32(s0+12, a0);
    ST32(v1+12, v0);
    v0 = 1;
    ST32(s0+44, a1);
    ST32(s0+40, a2);
    ST32(s0+16, FBITS(f0));
    ST32(s0+20, FBITS(f1));
    ST32(s0+24, FBITS(f2));
    ST32(s0+28, FBITS(f3));
    ST32(s0+32, FBITS(f4));
    ST32(s0+36, FBITS(f5));
    ST32(v1+40, s5);
    ST32(v1+44, a3);
    ST8(v1+48, v0);
    goto L_0883ADE8;
L_0883ADE8:;
    v1 = s3 + 0;
    goto L_0883ACA4;
L_0883ADF0:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883ADFC;
L_0883ADFC:;
    v1 = 52;
    goto L_0883AD70;
L_0883AE04:;
    ST32(s0, 0);
    goto L_0883AD6C;
L_0883AE0C:;
    s3 = a0 + 0;
    goto L_0883ACF8;
}

/* 0883AE14 */
u32 func_0883AE14(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_0883AE14:;
    v0 = D_08B263C0 - (25536);
    a2 = v0 + 25536;
    a1 = 0 + 0;
    goto L_0883AE20;
L_0883AE20:;
    v0 = LD_U8(a2+48);
    a3 = a1 + 0;
    a1 = a1 + 1;
    cnd_ = v0 == 0;
    v1 = a1 < 0xa0u;
    if (cnd_) { goto L_0883AE40; }
    goto L_0883AE34;
L_0883AE34:;
    v0 = LD32(a2+40);
    cnd_ = a0 == v0;
    if (cnd_) { goto L_0883AE4C; }
    goto L_0883AE40;
L_0883AE40:;
    cnd_ = v1 != 0;
    a2 = a2 + 52;
    if (cnd_) { goto L_0883AE20; }
    goto L_0883AE48;
L_0883AE48:;
    a3 = (u32)-1;
    goto L_0883AE4C;
L_0883AE4C:;
    v0 = a3 + 0;
    return v0;
}

/* 0883AE54 */
u32 func_0883AE54(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883AE54:;
    sp = sp - 16;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0883AE98; }
    goto L_0883AE60;
L_0883AE60:;
    v0 = func_0883AE14(a0);
    goto L_0883AE68;
L_0883AE68:;
    a0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    v1 = 52;
    if (cnd_) { goto L_0883AE98; }
    goto L_0883AE78;
L_0883AE78:;
    { s64 p_ = (s64)(s32)a0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = D_08B263C0 - (25536);
    v0 = v0 + 25536;
    v1 = lo;
    v0 = v1 + v0;
    goto L_0883AE8C;
L_0883AE8C:;
    sp = sp + 16;
    return v0;
L_0883AE98:;
    v0 = 0 + 0;
    goto L_0883AE8C;
}

/* 0883AEA0 */
void func_0883AEA0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883AEA0:;
    sp = sp - 16;
    v0 = D_08B263C0 - (25536);
    s0 = v0 + 25536;
    s1 = s0 + 8320;
    v0 = LD_U8(s0+48);
    goto L_0883AEC0;
L_0883AEC0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0883AEEC; }
    goto L_0883AEC8;
L_0883AEC8:;
    s0 = s0 + 52;
    v0 = s0 < s1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(s0+48); goto L_0883AEC0; }
    goto L_0883AED8;
L_0883AED8:;
    sp = sp + 16;
    return;
L_0883AEEC:;
    a0 = LD32(s0);
    v0 = func_088325D0(a0);
    goto L_0883AEF4;
L_0883AEF4:;
    a0 = v0 + 0;
    { u64 r_ = func_0883A8BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883AEFC;
L_0883AEFC:;
    ST32(s0+12, v0);
    goto L_0883AEC8;
}

/* 0883AF04 */
u64 func_0883AF04(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_0883AF04:;
    v0 = a0 < 0xa0u;
    cnd_ = v0 == 0;
    v1 = D_08B263C0 - (25536);
    if (cnd_) { goto L_0883AF30; }
    goto L_0883AF10;
L_0883AF10:;
    v0 = 52;
    { s64 p_ = (s64)(s32)a0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = v1 + 25536;
    v0 = lo;
    v0 = v0 + v1;
    a0 = LD_U8(v0+48);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0883AF34; }
    goto L_0883AF30;
L_0883AF30:;
    v0 = 0 + 0;
    goto L_0883AF34;
L_0883AF34:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0883AF3C */
void func_0883AF3C(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883AF3C:;
    v1 = 52;
    { s64 p_ = (s64)(s32)a0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    sp = sp - 16;
    v0 = D_08B263C0 - (25536);
    v0 = v0 + 25536;
    a0 = lo;
    s0 = a0 + v0;
    a0 = LD32(s0+12);
    ST8(s0+48, 0);
    v0 = func_0883AFB8(a0);
    goto L_0883AF6C;
L_0883AF6C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0883AFA8; }
    goto L_0883AF74;
L_0883AF74:;
    v0 = LD32(s0);
    goto L_0883AF78;
L_0883AF78:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883AF98; }
    goto L_0883AF80;
L_0883AF80:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    sp = sp + 16;
    return;
L_0883AF98:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883AFA0;
L_0883AFA0:;
    ST32(s0, 0);
    goto L_0883AF80;
L_0883AFA8:;
    a0 = LD32(s0+12);
    { u64 r_ = func_08839BE8(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883AFB0;
L_0883AFB0:;
    v0 = LD32(s0);
    goto L_0883AF78;
}

/* 0883AFB8 */
u32 func_0883AFB8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_0883AFB8:;
    v0 = D_08B263C0 - (25536);
    v1 = v0 + 25536;
    a1 = v1 + 8320;
    v0 = LD_U8(v1+48);
    goto L_0883AFC8;
L_0883AFC8:;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_0883AFDC; }
    goto L_0883AFD0;
L_0883AFD0:;
    v0 = LD32(v1+12);
    cnd_ = a0 == v0;
    if (cnd_) { goto L_0883AFF0; }
    goto L_0883AFDC;
L_0883AFDC:;
    v1 = v1 + 52;
    v0 = v1 < a1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(v1+48); goto L_0883AFC8; }
    goto L_0883AFEC;
L_0883AFEC:;
    a2 = 0 + 0;
    goto L_0883AFF0;
L_0883AFF0:;
    v0 = a2 + 0;
    return v0;
}

/* 0883AFF8 */
u64 func_0883AFF8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883AFF8:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s3 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s3 < 0x1u;
    v0 = v0 & v1;
    s4 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0883B054; }
    goto L_0883B030;
L_0883B030:;
    v0 = D_08B263C0 - (25536);
    s1 = v0 + 25536;
    s0 = 159;
    s2 = (u32)-1;
    goto L_0883B040;
L_0883B040:;
    a0 = s1 + 0;
    s0 = s0 - 1;
    func_08AA71FC(a0);
    goto L_0883B04C;
L_0883B04C:;
    cnd_ = s0 != s2;
    s1 = s1 + 52;
    if (cnd_) { goto L_0883B040; }
    goto L_0883B054;
L_0883B054:;
    v0 = s3 < 0x1u;
    v1 = s4 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0883B0B0; }
    goto L_0883B068;
L_0883B068:;
    v0 = D_08B263C0 - (25536);
    v0 = v0 + 25536;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0883B0B0; }
    goto L_0883B078;
L_0883B078:;
    s0 = v0 + 8320;
    goto L_0883B07C;
L_0883B07C:;
    cnd_ = s0 == s1;
    s0 = s0 - 52;
    if (cnd_) { goto L_0883B0AC; }
    goto L_0883B084;
L_0883B084:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883B09C; }
    goto L_0883B090;
L_0883B090:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_0883B07C;
L_0883B09C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883B0A4;
L_0883B0A4:;
    ST32(s0, 0);
    goto L_0883B090;
L_0883B0AC:;
    goto L_0883B0B0;
L_0883B0B0:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0883B0CC */
rv_t func_0883B0CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883B0CC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_0883AFF8(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883B0E0;
L_0883B0E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0883B0EC */
rv_t func_0883B0EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883B0EC:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_0883AFF8(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883B100;
L_0883B100:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0883B10C */
u32 func_0883B10C(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, ra = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883B10C:;
    sp = sp - 16;
    func_088F8CD0(a1, a2, a3, t0, t1, t2, t3);
    goto L_0883B11C;
L_0883B11C:;
    v0 = D_08B28440 - (-31680);
    v0 = v0 - 31680;
    sp = sp + 16;
    return v0;
L_0883B130:;
    sp = sp - 16;
    ST32(sp+4, s1);
    s1 = a0 + 0;
    ST32(sp, s0);
    s0 = a1 + 0;
    ST32(sp+12, ra);
    ST32(sp+8, s2);
    v0 = func_0896FD8C();
    goto L_0883B150;
L_0883B150:;
    v1 = v0 + 0;
    v0 = 1;
    cnd_ = s0 == v0;
    v0 = (s32)s0 < 2;
    if (cnd_) { goto L_0883B32C; }
    goto L_0883B160;
L_0883B160:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_0883B1E0; }
    goto L_0883B168;
L_0883B168:;
    cnd_ = s0 == v0;
    s2 = D_08B28448 - (-31672);
    if (cnd_) { goto L_0883B18C; }
    goto L_0883B170;
L_0883B170:;
    v0 = s2 - 31672;
    goto L_0883B174;
L_0883B174:;
    ra = LD32(sp+12);
    s2 = LD32(sp+8);
    s1 = LD32(sp+4);
    s0 = LD32(sp);
    sp = sp + 16;
    return v0;
L_0883B18C:;
    a0 = s1 + 0;
    v0 = func_0883B73C(a0);
    goto L_0883B194;
L_0883B194:;
    a0 = v0 + 0;
    v0 = func_0896FC84(a0);
    goto L_0883B19C;
L_0883B19C:;
    a0 = LD_U8(s1+2);
    s0 = v0 + 0;
    s2 = D_08B28448 - (-31672);
    v0 = func_0896FCDC(a0);
    goto L_0883B1AC;
L_0883B1AC:;
    t1 = LD_U8(s1+3);
    t3 = LD_U16(s1);
    a1 = D_08AD4490 - (17552);
    t1 = t1 + 1;
    a0 = s2 - 31672;
    a1 = a1 + 17552;
    t0 = s0 + 0;
    t2 = v0 + 0;
    goto L_0883B1CC;
L_0883B1CC:;
    a2 = 64;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883B1D8;
L_0883B1D8:;
    v0 = s2 - 31672;
    goto L_0883B174;
L_0883B1E0:;
    cnd_ = s0 != 0;
    s2 = D_08B28448 - (-31672);
    if (cnd_) { goto L_0883B170; }
    goto L_0883B1E8;
L_0883B1E8:;
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    v0 = s2 - 31672;
    if (cnd_) { goto L_0883B174; }
    goto L_0883B1F4;
L_0883B1F4:;
    v0 = v1 << 2;
    v1 = D_08AD4580 - (17792);
    v1 = v1 + 17792;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0883B210u: goto L_0883B210; case 0x0883B270u: goto L_0883B270; case 0x0883B298u: goto L_0883B298; case 0x0883B2B4u: goto L_0883B2B4; case 0x0883B2C0u: goto L_0883B2C0; case 0x0883B304u: goto L_0883B304; default: rs_break(0, 0x0883b208); }
L_0883B210:;
    t2 = LD_U16(s1);
    v0 = 0x51eb0000u;
    v0 = v0 | 0x851f;
    { u64 p_ = (u64)t2 * v0; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    t0 = LD_U8(s1+3);
    t1 = LD_U8(s1+2);
    goto L_0883B228;
L_0883B228:;
    v0 = hi;
    v0 = v0 >> 5;
    v1 = 100;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    s2 = D_08B28448 - (-31672);
    t0 = t0 + 1;
    t1 = t1 + 1;
    v0 = lo;
    t2 = t2 - v0;
    t2 = t2 & 0xffff;
    goto L_0883B250;
L_0883B250:;
    a1 = D_08AD44B4 - (17588);
    a0 = s2 - 31672;
    a1 = a1 + 17588;
    goto L_0883B25C;
L_0883B25C:;
    a2 = 64;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883B268;
L_0883B268:;
    v0 = s2 - 31672;
    goto L_0883B174;
L_0883B270:;
    t0 = LD_U8(s1+3);
    t1 = LD_U8(s1+2);
    goto L_0883B278;
L_0883B278:;
    t2 = LD_U16(s1);
    s2 = D_08B28448 - (-31672);
    a1 = D_08AD44D4 - (17620);
    t0 = t0 + 1;
    t1 = t1 + 1;
    a0 = s2 - 31672;
    a1 = a1 + 17620;
    goto L_0883B25C;
L_0883B298:;
    t2 = LD_U16(s1);
    v0 = 0x51eb0000u;
    v0 = v0 | 0x851f;
    { u64 p_ = (u64)t2 * v0; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    t0 = LD_U8(s1+2);
    t1 = LD_U8(s1+3);
    goto L_0883B228;
L_0883B2B4:;
    t0 = LD_U8(s1+2);
    t1 = LD_U8(s1+3);
    goto L_0883B278;
L_0883B2C0:;
    t0 = LD_U16(s1);
    v0 = 0x51eb0000u;
    v0 = v0 | 0x851f;
    { u64 p_ = (u64)t0 * v0; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    v1 = 100;
    t2 = LD_U8(s1+3);
    t1 = LD_U8(s1+2);
    s2 = D_08B28448 - (-31672);
    v0 = hi;
    v0 = v0 >> 5;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    t1 = t1 + 1;
    t2 = t2 + 1;
    v0 = lo;
    t0 = t0 - v0;
    t0 = t0 & 0xffff;
    goto L_0883B250;
L_0883B304:;
    t2 = LD_U8(s1+3);
    t1 = LD_U8(s1+2);
    t0 = LD_U16(s1);
    s2 = D_08B28448 - (-31672);
    a1 = D_08AD44F4 - (17652);
    t1 = t1 + 1;
    t2 = t2 + 1;
    a0 = s2 - 31672;
    a1 = a1 + 17652;
    goto L_0883B25C;
L_0883B32C:;
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    s2 = D_08B28448 - (-31672);
    if (cnd_) { goto L_0883B170; }
    goto L_0883B338;
L_0883B338:;
    v0 = v1 << 2;
    v1 = D_08AD4598 - (17816);
    v1 = v1 + 17816;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0883B354u: goto L_0883B354; case 0x0883B3B8u: goto L_0883B3B8; case 0x0883B3F0u: goto L_0883B3F0; case 0x0883B41Cu: goto L_0883B41C; case 0x0883B438u: goto L_0883B438; case 0x0883B48Cu: goto L_0883B48C; default: rs_break(0, 0x0883b34c); }
L_0883B354:;
    a0 = s1 + 0;
    v0 = func_0883B73C(a0);
    goto L_0883B35C;
L_0883B35C:;
    a0 = v0 + 0;
    v0 = func_0896FD34(a0);
    goto L_0883B364;
L_0883B364:;
    t3 = LD_U16(s1);
    v1 = 0x51eb0000u;
    v1 = v1 | 0x851f;
    { u64 p_ = (u64)t3 * v1; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    t1 = LD_U8(s1+3);
    t2 = LD_U8(s1+2);
    goto L_0883B37C;
L_0883B37C:;
    v1 = hi;
    v1 = v1 >> 5;
    a0 = 100;
    { s64 p_ = (s64)(s32)v1 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    s2 = D_08B28448 - (-31672);
    t1 = t1 + 1;
    t2 = t2 + 1;
    v1 = lo;
    t3 = t3 - v1;
    t3 = t3 & 0xffff;
    goto L_0883B3A4;
L_0883B3A4:;
    a1 = D_08AD4514 - (17684);
    a0 = s2 - 31672;
    a1 = a1 + 17684;
    goto L_0883B3B0;
L_0883B3B0:;
    t0 = v0 + 0;
    goto L_0883B1CC;
L_0883B3B8:;
    a0 = s1 + 0;
    v0 = func_0883B73C(a0);
    goto L_0883B3C0;
L_0883B3C0:;
    a0 = v0 + 0;
    v0 = func_0896FD34(a0);
    goto L_0883B3C8;
L_0883B3C8:;
    t1 = LD_U8(s1+3);
    t2 = LD_U8(s1+2);
    goto L_0883B3D0;
L_0883B3D0:;
    t3 = LD_U16(s1);
    s2 = D_08B28448 - (-31672);
    a1 = D_08AD4538 - (17720);
    t1 = t1 + 1;
    t2 = t2 + 1;
    a0 = s2 - 31672;
    a1 = a1 + 17720;
    goto L_0883B3B0;
L_0883B3F0:;
    a0 = s1 + 0;
    v0 = func_0883B73C(a0);
    goto L_0883B3F8;
L_0883B3F8:;
    a0 = v0 + 0;
    v0 = func_0896FD34(a0);
    goto L_0883B400;
L_0883B400:;
    t3 = LD_U16(s1);
    v1 = 0x51eb0000u;
    v1 = v1 | 0x851f;
    { u64 p_ = (u64)t3 * v1; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    t1 = LD_U8(s1+2);
    t2 = LD_U8(s1+3);
    goto L_0883B37C;
L_0883B41C:;
    a0 = s1 + 0;
    v0 = func_0883B73C(a0);
    goto L_0883B424;
L_0883B424:;
    a0 = v0 + 0;
    v0 = func_0896FD34(a0);
    goto L_0883B42C;
L_0883B42C:;
    t1 = LD_U8(s1+2);
    t2 = LD_U8(s1+3);
    goto L_0883B3D0;
L_0883B438:;
    a0 = s1 + 0;
    v0 = func_0883B73C(a0);
    goto L_0883B440;
L_0883B440:;
    a0 = v0 + 0;
    v0 = func_0896FD34(a0);
    goto L_0883B448;
L_0883B448:;
    t1 = LD_U16(s1);
    v1 = 0x51eb0000u;
    v1 = v1 | 0x851f;
    { u64 p_ = (u64)t1 * v1; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    a0 = 100;
    t3 = LD_U8(s1+3);
    t2 = LD_U8(s1+2);
    s2 = D_08B28448 - (-31672);
    v1 = hi;
    v1 = v1 >> 5;
    { s64 p_ = (s64)(s32)v1 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    t2 = t2 + 1;
    t3 = t3 + 1;
    v1 = lo;
    t1 = t1 - v1;
    t1 = t1 & 0xffff;
    goto L_0883B3A4;
L_0883B48C:;
    a0 = s1 + 0;
    v0 = func_0883B73C(a0);
    goto L_0883B494;
L_0883B494:;
    a0 = v0 + 0;
    v0 = func_0896FD34(a0);
    goto L_0883B49C;
L_0883B49C:;
    t3 = LD_U8(s1+3);
    t2 = LD_U8(s1+2);
    t1 = LD_U16(s1);
    s2 = D_08B28448 - (-31672);
    a1 = D_08AD455C - (17756);
    t2 = t2 + 1;
    t3 = t3 + 1;
    a0 = s2 - 31672;
    a1 = a1 + 17756;
    goto L_0883B3B0;
}

/* 0883B4C4 */
u32 func_0883B4C4(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883B4C4:;
    sp = sp - 16;
    v1 = LD_U8(a0+2);
    cnd_ = v1 == 0;
    s0 = LD_U16(a0);
    if (cnd_) { goto L_0883B4EC; }
    goto L_0883B4DC;
L_0883B4DC:;
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = s0 + 1;
    if (cnd_) { goto L_0883B518; }
    goto L_0883B4E8;
L_0883B4E8:;
    s0 = v0 & 0xffff;
    goto L_0883B4EC;
L_0883B4EC:;
    a0 = s0 + 0;
    v0 = func_0883B598(a0);
    goto L_0883B4F4;
L_0883B4F4:;
    cnd_ = v0 != 0;
    v1 = s0 + 1;
    if (cnd_) { goto L_0883B504; }
    goto L_0883B4FC;
L_0883B4FC:;
    s0 = v1 & 0xffff;
    goto L_0883B4EC;
L_0883B504:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
L_0883B518:;
    v0 = LD_U8(a0+3);
    v0 = v0 < 0x1du;
    cnd_ = v0 != 0;
    v0 = s0 + 1;
    if (cnd_) { goto L_0883B4EC; }
    goto L_0883B528;
L_0883B528:;
    s0 = v0 & 0xffff;
    goto L_0883B4EC;
}

/* 0883B530 */
u32 func_0883B530(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883B530:;
    sp = sp - 16;
    v1 = LD_U8(a0+2);
    cnd_ = v1 == 0;
    s0 = LD_U16(a0);
    if (cnd_) { goto L_0883B58C; }
    goto L_0883B548;
L_0883B548:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD_U8(a0+3); goto L_0883B580; }
    goto L_0883B554;
L_0883B554:;
    a0 = s0 + 0;
    v0 = func_0883B598(a0);
    goto L_0883B55C;
L_0883B55C:;
    cnd_ = v0 != 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_0883B56C; }
    goto L_0883B564;
L_0883B564:;
    s0 = v1 & 0xffff;
    goto L_0883B554;
L_0883B56C:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
L_0883B580:;
    v0 = v0 < 0x1du;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0883B554; }
    goto L_0883B58C;
L_0883B58C:;
    v0 = s0 - 1;
    s0 = v0 & 0xffff;
    goto L_0883B554;
}

/* 0883B598 */
u32 func_0883B598(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_0883B598:;
    v0 = 0x51eb0000u;
    a0 = a0 & 0xffff;
    v0 = v0 | 0x851f;
    { u64 p_ = (u64)a0 * v0; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    v1 = 100;
    a1 = 400;
    a3 = a0 & 0x3;
    t0 = 0 + 0;
    v0 = hi;
    a2 = v0 >> 7;
    v0 = v0 >> 5;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    { s64 p_ = (s64)(s32)a2 * (s32)a1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = a0 - v0;
    v0 = v0 & 0xffff;
    v0 = v0 < 0x1u;
    a2 = lo;
    a0 = a0 - a2;
    a0 = a0 & 0xffff;
    cnd_ = a3 != 0;
    a0 = a0 < 0x1u;
    if (cnd_) { goto L_0883B600; }
    goto L_0883B5F0;
L_0883B5F0:;
    cnd_ = v0 == 0;
    if (cnd_) { t0 = 1; goto L_0883B600; }
    goto L_0883B5F8;
L_0883B5F8:;
    cnd_ = a0 != 0;
    if (cnd_) { t0 = 1; goto L_0883B600; }
    goto L_0883B600;
L_0883B600:;
    v0 = t0 + 0;
    return v0;
}

/* 0883B608 */
u32 func_0883B608(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u32 hi = 0, lo = 0;
L_0883B608:;
    v1 = 0x51eb0000u;
    v0 = a0 & 0xffff;
    v1 = v1 | 0x851f;
    { u64 p_ = (u64)v0 * v1; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    v0 = v0 >> 2;
    v1 = hi;
    a0 = (v1 >> 5) & 0xffff;
    v0 = v0 - a0;
    v1 = (v1 >> 7) & 0xffff;
    v0 = v0 + v1;
    return v0;
}

/* 0883B634 */
u32 func_0883B634(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_0883B634:;
    v1 = LD_U8(a0+2);
    v0 = 11;
    v1 = (s32)v1 < (s32)v0 ? v1 : v0;
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0883B664; }
    goto L_0883B648;
L_0883B648:;
    v0 = D_08B15AB8 - (23224);
    a1 = v0 + 23224;
    goto L_0883B650;
L_0883B650:;
    v0 = LD32(a1);
    v1 = v1 - 1;
    a1 = a1 + 4;
    cnd_ = v1 != 0;
    a2 = a2 + v0;
    if (cnd_) { goto L_0883B650; }
    goto L_0883B664;
L_0883B664:;
    v0 = LD_U8(a0+3);
    a2 = a2 + v0;
    v0 = a2 + 0;
    return v0;
}

/* 0883B674 */
u32 func_0883B674(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883B674:;
    sp = sp - 16;
    a1 = D_08B28568 - (-31384);
    s2 = a0 + 0;
    v0 = (u32)(s32)LD_S8(a1-31384);
    cnd_ = v0 != 0;
    s0 = D_08B28570 - (-31376);
    if (cnd_) { goto L_0883B6C4; }
    goto L_0883B69C;
L_0883B69C:;
    v0 = s0 - 31376;
    v1 = 1;
    a0 = 1970;
    ST8(a1-31384, v1);
    ST16(s0-31376, a0);
    ST8(v0+7, 0);
    ST8(v0+2, 0);
    ST8(v0+3, 0);
    ST8(v0+5, 0);
    ST8(v0+6, 0);
    goto L_0883B6C4;
L_0883B6C4:;
    a0 = s0 - 31376;
    v0 = func_0883B4C4(a0);
    goto L_0883B6CC;
L_0883B6CC:;
    v0 = v0 & 0xffff;
    a0 = v0 + 0;
    v0 = func_0883B608(a0);
    goto L_0883B6D8;
L_0883B6D8:;
    a0 = s2 + 0;
    s1 = v0 + 0;
    v0 = func_0883B530(a0);
    goto L_0883B6E4;
L_0883B6E4:;
    v0 = v0 & 0xffff;
    a0 = v0 + 0;
    v0 = func_0883B608(a0);
    goto L_0883B6F0;
L_0883B6F0:;
    a0 = LD_U16(s0-31376);
    s0 = LD_U16(s2);
    v1 = 365;
    v0 = v0 - s1;
    s0 = s0 - a0;
    { s64 p_ = (s64)(s32)s0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = s2 + 0;
    v0 = v0 + 1;
    s0 = lo;
    s0 = s0 + v0;
    v0 = func_0883B634(a0);
    goto L_0883B71C;
L_0883B71C:;
    s0 = s0 + v0;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 0883B73C */
u32 func_0883B73C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883B73C:;
    sp = sp - 16;
    a2 = D_08B28578 - (-31368);
    s1 = a0 + 0;
    v0 = (u32)(s32)LD_S8(a2-31368);
    cnd_ = v0 != 0;
    a1 = D_08B28580 - (-31360);
    if (cnd_) { goto L_0883B788; }
    goto L_0883B760;
L_0883B760:;
    v0 = a1 - 31360;
    v1 = 1;
    a0 = 2004;
    ST8(a2-31368, v1);
    ST16(a1-31360, a0);
    ST8(v0+7, 0);
    ST8(v0+2, 0);
    ST8(v0+3, 0);
    ST8(v0+5, 0);
    ST8(v0+6, 0);
    goto L_0883B788;
L_0883B788:;
    a0 = a1 - 31360;
    v0 = func_0883B674(a0);
    goto L_0883B790;
L_0883B790:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_0883B674(a0);
    goto L_0883B79C;
L_0883B79C:;
    v1 = s0 - v0;
    a1 = v1 + 3;
    v1 = v0 - s0;
    a3 = 0x92490000u;
    a0 = v1 + 4;
    s0 = (s32)s0 < (s32)v0;
    a3 = a3 | 0x2493;
    t0 = (u32)((s32)a1 >> 31);
    cnd_ = s0 == 0;
    v1 = (u32)((s32)a0 >> 31);
    if (cnd_) { goto L_0883B7F8; }
    goto L_0883B7C4;
L_0883B7C4:;
    { s64 p_ = (s64)(s32)a0 * (s32)a3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = hi;
    v0 = v0 + a0;
    v0 = (u32)((s32)v0 >> 2);
    v0 = v0 - v1;
    goto L_0883B7D8;
L_0883B7D8:;
    v1 = v0 << 3;
    v1 = v1 - v0;
    v0 = a0 - v1;
    sp = sp + 16;
    return v0;
L_0883B7F8:;
    { s64 p_ = (s64)(s32)a1 * (s32)a3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = 7;
    v0 = hi;
    v0 = v0 + a1;
    v0 = (u32)((s32)v0 >> 2);
    v0 = v0 - t0;
    v1 = v0 << 3;
    v1 = v1 - v0;
    v1 = a1 - v1;
    a0 = a0 - v1;
    { s64 p_ = (s64)(s32)a0 * (s32)a3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = (u32)((s32)a0 >> 31);
    v0 = hi;
    v0 = v0 + a0;
    v0 = (u32)((s32)v0 >> 2);
    v0 = v0 - a1;
    goto L_0883B7D8;
}

/* 0883B83C */
void func_0883B83C(void)
{
L_0883B83C:;
    return;
}

/* 0883B844 */
rv_t func_0883B844(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883B844:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    func_0883B83C();
    goto L_0883B858;
L_0883B858:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0883B864 */
void func_0883B864(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f12 = 0, f13 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883B864:;
    sp = sp - 16;
    func_088F8DA4();
    goto L_0883B874;
L_0883B874:;
    v1 = D_08B285B0 - (-31312);
    v0 = D_08B285AC - (-31316);
    ST32(v1-31312, 0);
    ST32(v0-31316, 0);
    func_0883B8BC(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_0883B888;
L_0883B888:;
    v0 = D_08AEB834 - (-18380);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-18380));
    a0 = D_08AD45BC - (17852);
    a1 = D_08B285A4 - (-31324);
    a0 = a0 + 17852;
    a1 = a1 - 31324;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_0883B8B0;
L_0883B8B0:;
    sp = sp + 16;
    return;
}

/* 0883B8BC */
void func_0883B8BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883B8BC:;
    sp = sp - 16;
    func_088F8DAC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0883B8CC;
L_0883B8CC:;
    f0 = func_088F8EB8();
    goto L_0883B8D4;
L_0883B8D4:;
    v0 = D_08AEB838 - (-18376);
    f1 = BITSF(LD32(v0-18376));
    v1 = D_08B285B8 - (-31304);
    v0 = D_08B285A8 - (-31320);
    f1 = f0 * f1;
    ST32(v0-31320, FBITS(f0));
    ST32(v1-31304, FBITS(f1));
    f0 = func_088F8EC4();
    goto L_0883B8F4;
L_0883B8F4:;
    a2 = D_08AEB83C - (-18372);
    f1 = BITSF(LD32(a2-18372));
    v0 = D_08B28594 - (-31340);
    ST32(v0-31340, FBITS(f0));
    f1 = f1 / f0;
    v0 = D_08B28598 - (-31336);
    v1 = D_08B285D4 - (-31276);
    ST32(v0-31336, FBITS(f0));
    v0 = D_08B28588 - (-31352);
    a1 = v1 - 31276;
    ST32(v0-31352, 0);
    v1 = D_08B2858C - (-31348);
    v0 = D_08B285D0 - (-31280);
    ST32(v1-31348, 0);
    v1 = D_08B285BC - (-31300);
    f2 = f0;
    ST32(v0-31280, 0);
    v0 = D_08B285C0 - (-31296);
    a0 = 0 + 0;
    ST32(v1-31300, 0);
    v1 = D_08B285C8 - (-31288);
    ST32(v0-31296, 0);
    v0 = D_08B2859C - (-31332);
    ST32(v1-31288, FBITS(f1));
    v1 = D_08B28590 - (-31344);
    ST32(v0-31332, FBITS(f1));
    v0 = D_08B285C4 - (-31292);
    ST32(v1-31344, FBITS(f1));
    ST32(v0-31292, FBITS(f0));
    goto L_0883B968;
L_0883B968:;
    a0 = a0 + 1;
    v0 = a0 < 0xau;
    ST32(a1, FBITS(f2));
    cnd_ = v0 != 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_0883B968; }
    goto L_0883B97C;
L_0883B97C:;
    f0 = BITSF(LD32(a2-18372));
    v0 = D_08B285A4 - (-31324);
    v1 = D_08B285B4 - (-31308);
    ST32(v0-31324, FBITS(f0));
    v0 = D_08B2867C - (-31108);
    ST32(v1-31308, 0);
    v1 = D_08B28680 - (-31104);
    ST32(v0-31108, 0);
    ST8(v1-31104, 0);
    sp = sp + 16;
    return;
}

/* 0883B9AC */
void func_0883B9AC(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883B9AC:;
    sp = sp - 16;
    func_088F8DD0();
    goto L_0883B9BC;
L_0883B9BC:;
    sp = sp + 16;
    return;
}

/* 0883B9C8 */
void func_0883B9C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883B9C8:;
    sp = sp - 32;
    s0 = D_08B285C0 - (-31296);
    f0 = BITSF(0);
    f1 = BITSF(LD32(s0-31296));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0883BCD0; }
    goto L_0883B9F8;
L_0883B9F8:;
    func_088F8DD8(a1, a2, a3, t0, t1, t2, t3);
    goto L_0883BA00;
L_0883BA00:;
    v0 = func_088F8E4C(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_0883BA08;
L_0883BA08:;
    f0 = BITSF(v0);
    a1 = v0 + 0;
    cnd_ = (s32)v0 < 0;
    f2 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_0883BCB4; }
    goto L_0883BA18;
L_0883BA18:;
    v0 = D_08B285B8 - (-31304);
    f1 = BITSF(LD32(v0-31304));
    f0 = BITSF(0);
    f1 = f2 / f1;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s0 = D_08AEB840 - (-18368);
    if (cnd_) { goto L_0883BCA4; }
    goto L_0883BA38;
L_0883BA38:;
    v0 = D_08AEB844 - (-18364);
    f0 = BITSF(LD32(v0-18364));
    f0 = f1 + f0;
    goto L_0883BA44;
L_0883BA44:;
    f3 = BITSF(F2I(f0, 1));
    a0 = D_08B285B0 - (-31312);
    v0 = D_08B285A8 - (-31320);
    v1 = LD32(a0-31312);
    f1 = BITSF(LD32(v0-31320));
    s1 = D_08B2859C - (-31332);
    v0 = FBITS(f3);
    f0 = BITSF(LD32(s1-31332));
    f20 = f2 / f1;
    v1 = v1 + v0;
    v0 = D_08B28590 - (-31344);
    ST32(v0-31344, FBITS(f0));
    ST32(a0-31312, v1);
    cnd_ = a1 == 0;
    f0 = BITSF(LD32(s0-18368));
    if (cnd_) { goto L_0883BC94; }
    goto L_0883BA80;
L_0883BA80:;
    f0 = f0 / f2;
    a0 = D_08B28594 - (-31340);
    f0 = f1 * f0;
    goto L_0883BA8C;
L_0883BA8C:;
    ST32(a0-31340, FBITS(f0));
    v0 = D_08AEB848 - (-18360);
    f0 = BITSF(LD32(v0-18360));
    f2 = BITSF(LD32(a0-31340));
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(s0-18368)); goto L_0883BAB8; }
    goto L_0883BAAC;
L_0883BAAC:;
    ST32(a0-31340, FBITS(f0));
    f2 = f0;
    f0 = BITSF(LD32(s0-18368));
    goto L_0883BAB8;
L_0883BAB8:;
    v1 = D_08B28588 - (-31352);
    v0 = D_08B285D0 - (-31280);
    f3 = f0 / f2;
    f4 = BITSF(LD32(v0-31280));
    f1 = BITSF(LD32(v1-31352));
    f0 = BITSF(0);
    v0 = D_08B285C4 - (-31292);
    ST32(v0-31292, FBITS(f2));
    v0 = D_08B285C8 - (-31288);
    fcc = FCMP(f0, f4, 12);
    f1 = f1 + f3;
    ST32(s1-31332, FBITS(f3));
    ST32(v1-31352, FBITS(f1));
    cnd_ = !fcc;
    ST32(v0-31288, FBITS(f3));
    if (cnd_) { goto L_0883BC80; }
    goto L_0883BAF4;
L_0883BAF4:;
    v0 = D_08B285A4 - (-31324);
    f0 = BITSF(LD32(v0-31324));
    t2 = D_08B285A0 - (-31328);
    f0 = f4 * f0;
    goto L_0883BB04;
L_0883BB04:;
    ST32(t2-31328, FBITS(f0));
    t0 = D_08B2858C - (-31348);
    t1 = D_08B285FC - (-31236);
    f1 = BITSF(LD32(t0-31348));
    f0 = BITSF(LD32(t2-31328));
    v1 = LD32(t1-31236);
    a3 = D_08B285AC - (-31316);
    f1 = f1 + f0;
    a2 = v1 << 2;
    f0 = BITSF(LD32(a0-31340));
    v1 = v1 + 1;
    a0 = D_08B285D4 - (-31276);
    a1 = LD32(a3-31316);
    a0 = a0 - 31276;
    v0 = v1 ^ 0xa;
    if (v0 == 0) v1 = 0;
    a2 = a2 + a0;
    ST32(t0-31348, FBITS(f1));
    f1 = BITSF(0);
    a1 = a1 + 1;
    ST32(a2, FBITS(f0));
    ST32(t1-31236, v1);
    ST32(a3-31316, a1);
    a1 = 0 + 0;
    goto L_0883BB64;
L_0883BB64:;
    f0 = BITSF(LD32(a0));
    a1 = a1 + 1;
    v0 = a1 < 0xau;
    f1 = f1 + f0;
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_0883BB64; }
    goto L_0883BB7C;
L_0883BB7C:;
    v1 = D_08AEB84C - (-18356);
    f0 = BITSF(LD32(v1-18356));
    v0 = D_08B28680 - (-31104);
    a0 = LD_U8(v0-31104);
    f0 = f1 * f0;
    v0 = D_08B28598 - (-31336);
    f1 = f20;
    cnd_ = a0 == 0;
    ST32(v0-31336, FBITS(f0));
    if (cnd_) { goto L_0883BC14; }
    goto L_0883BBA0;
L_0883BBA0:;
    v0 = D_08B28600 - (-31232);
    v1 = v0 - 31232;
    a0 = 0 + 0;
    goto L_0883BBAC;
L_0883BBAC:;
    f0 = BITSF(LD32(v1));
    a0 = a0 + 1;
    v0 = a0 < 0x1eu;
    f0 = f0 + f20;
    ST32(v1, FBITS(f0));
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0883BBAC; }
    goto L_0883BBC8;
L_0883BBC8:;
    v1 = D_08B2867C - (-31108);
    v0 = D_08AEB850 - (-18352);
    f2 = BITSF(LD32(v1-31108));
    f0 = BITSF(LD32(v0-18352));
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = D_08AEB858 - (-18344);
    if (cnd_) { goto L_0883BC3C; }
    goto L_0883BBE8;
L_0883BBE8:;
    v0 = D_08AEB854 - (-18348);
    f0 = BITSF(LD32(t2-31328));
    f1 = BITSF(LD32(v0-18348));
    f1 = f0 * f1;
    fcc = FCMP(f2, f1, 12);
    cnd_ = fcc;
    if (cnd_) { f1 = f2; goto L_0883BC08; }
    goto L_0883BC08;
L_0883BC08:;
    f0 = f2 - f1;
    f1 = f20 - f1;
    goto L_0883BC10;
L_0883BC10:;
    ST32(v1-31108, FBITS(f0));
    goto L_0883BC14;
L_0883BC14:;
    v0 = D_08B285B4 - (-31308);
    goto L_0883BC18;
L_0883BC18:;
    f0 = BITSF(LD32(v0-31308));
    f0 = f0 + f1;
    ST32(v0-31308, FBITS(f0));
    sp = sp + 32;
    return;
L_0883BC3C:;
    f0 = BITSF(LD32(v0-18344));
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    v0 = D_08B285B4 - (-31308);
    if (cnd_) { goto L_0883BC18; }
    goto L_0883BC50;
L_0883BC50:;
    v0 = D_08AEB85C - (-18340);
    f0 = BITSF(LD32(t2-31328));
    f1 = BITSF(LD32(v0-18340));
    f3 = BITSF(FBITS(f2) ^ 0x80000000u);
    f1 = f0 * f1;
    fcc = FCMP(f3, f1, 12);
    cnd_ = fcc;
    if (cnd_) { f1 = f3; goto L_0883BC74; }
    goto L_0883BC74;
L_0883BC74:;
    f0 = f2 + f1;
    f1 = f20 + f1;
    goto L_0883BC10;
L_0883BC80:;
    v0 = D_08B285A4 - (-31324);
    f0 = BITSF(LD32(v0-31324));
    t2 = D_08B285A0 - (-31328);
    f0 = f3 * f0;
    goto L_0883BB04;
L_0883BC94:;
    f0 = func_088F8EC4();
    goto L_0883BC9C;
L_0883BC9C:;
    a0 = D_08B28594 - (-31340);
    goto L_0883BA8C;
L_0883BCA4:;
    v0 = D_08AEB844 - (-18364);
    f0 = BITSF(LD32(v0-18364));
    f0 = f1 - f0;
    goto L_0883BA44;
L_0883BCB4:;
    v0 = v0 & 0x1;
    v1 = a1 >> 1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    f2 = f2 + f2;
    goto L_0883BA18;
L_0883BCD0:;
    f0 = func_0883BCF4(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0883BCD8;
L_0883BCD8:;
    f1 = BITSF(LD32(s0-31296));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0883BCD0; }
    goto L_0883BCEC;
L_0883BCEC:;
    goto L_0883B9F8;
}

/* 0883BCF4 */
float func_0883BCF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883BCF4:;
    sp = sp - 16;
    v0 = func_088F8E8C(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0883BD04;
L_0883BD04:;
    f2 = BITSF(v0);
    v1 = D_08B285A8 - (-31320);
    f1 = BITSF(LD32(v1-31320));
    a0 = v0 >> 1;
    v1 = v0 & 0x1;
    v1 = v1 | a0;
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_0883BD34; }
    goto L_0883BD24;
L_0883BD24:;
    f0 = f0 / f1;
    sp = sp + 16;
    return f0;
L_0883BD34:;
    f2 = BITSF(v1);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_0883BD24;
}

/* 0883BD44 */
rv_t func_0883BD44(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_0883BD44:;
    a0 = a0 & 0xff;
    cnd_ = a0 != 0;
    v1 = D_08B28680 - (-31104);
    if (cnd_) { goto L_0883BD5C; }
    goto L_0883BD50;
L_0883BD50:;
    v0 = LD_U8(v1-31104);
    cnd_ = v0 != 0;
    a2 = D_08B28678 - (-31112);
    if (cnd_) { goto L_0883BD9C; }
    goto L_0883BD5C;
L_0883BD5C:;
    v0 = 1;
    ST8(v1-31104, v0);
    v0 = D_08B285B4 - (-31308);
    a1 = D_08B28600 - (-31232);
    ST32(v0-31308, FBITS(f12));
    v0 = D_08B2867C - (-31108);
    a1 = a1 - 31232;
    ST32(v0-31108, 0);
    v1 = 0 + 0;
    goto L_0883BD80;
L_0883BD80:;
    v1 = v1 + 1;
    v0 = v1 < 0x1eu;
    ST32(a1, FBITS(f12));
    cnd_ = v0 != 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_0883BD80; }
    goto L_0883BD94;
L_0883BD94:;
    return (rv_t){ v0, v1, f0 };
L_0883BD9C:;
    v0 = LD32(a2-31112);
    a1 = D_08B28600 - (-31232);
    a1 = a1 - 31232;
    a0 = v0 << 2;
    v0 = v0 + 1;
    v1 = v0 ^ 0x1e;
    if (v1 == 0) v0 = 0;
    a0 = a0 + a1;
    ST32(a0, FBITS(f12));
    f2 = BITSF(0);
    ST32(a2-31112, v0);
    v1 = 0 + 0;
    goto L_0883BDCC;
L_0883BDCC:;
    f0 = BITSF(LD32(a1));
    v1 = v1 + 1;
    v0 = v1 < 0x1eu;
    f2 = f2 + f0;
    cnd_ = v0 != 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_0883BDCC; }
    goto L_0883BDE4;
L_0883BDE4:;
    v1 = D_08AEB860 - (-18336);
    f0 = BITSF(LD32(v1-18336));
    v0 = D_08B285B4 - (-31308);
    f1 = BITSF(LD32(v0-31308));
    f0 = f2 * f0;
    v0 = D_08B2867C - (-31108);
    f1 = f1 - f0;
    ST32(v0-31108, FBITS(f1));
    return (rv_t){ v0, v1, f0 };
}

/* 0883BE08 */
u32 func_0883BE08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883BE08:;
    sp = sp - 16;
    f0 = func_0883BCF4(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0883BE18;
L_0883BE18:;
    v0 = D_08AEB864 - (-18332);
    f1 = BITSF(LD32(v0-18332));
    f1 = f0 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEB868 - (-18328);
    if (cnd_) { goto L_0883BE60; }
    goto L_0883BE38;
L_0883BE38:;
    f0 = BITSF(LD32(v0-18328));
    f0 = f1 + f0;
    goto L_0883BE40;
L_0883BE40:;
    f0 = BITSF(F2I(f0, 1));
    v1 = D_08B285B0 - (-31312);
    v0 = LD32(v1-31312);
    v1 = FBITS(f0);
    v0 = v0 + v1;
    sp = sp + 16;
    return v0;
L_0883BE60:;
    f0 = BITSF(LD32(v0-18328));
    f0 = f1 - f0;
    goto L_0883BE40;
}

/* 0883BE6C */
u32 func_0883BE6C(void)
{
    u32 v0 = 0, v1 = 0;
L_0883BE6C:;
    v1 = D_08B28680 - (-31104);
    v0 = LD_U8(v1-31104);
    return v0;
}

/* 0883BE78 */
void func_0883BE78(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883BE78:;
    v0 = D_08B28AB1 - (-30031);
    ST8(v0-30031, 0);
    v0 = D_08B28684 - (-31100);
    sp = sp - 16;
    a3 = v0 - 31100;
    v0 = D_08B28B55 - (-29867);
    v1 = D_08B28AB3 - (-30029);
    a1 = 0 + 0;
    ST8(v0-29867, 0);
    ST8(v1-30029, 0);
    v1 = D_08B2889C - (-30564);
    a2 = v1 - 30564;
    goto L_0883BEAC;
L_0883BEAC:;
    v0 = a1 + a3;
    a0 = a1 + a2;
    a1 = a1 + 1;
    v1 = (s32)a1 < 533;
    ST8(v0, 0);
    cnd_ = v1 != 0;
    ST8(a0, 0);
    if (cnd_) { goto L_0883BEAC; }
    goto L_0883BEC8;
L_0883BEC8:;
    v0 = D_08B28AB8 - (-30024);
    v0 = v0 - 30024;
    v1 = 38;
    goto L_0883BED4;
L_0883BED4:;
    v1 = v1 - 1;
    ST32(v0, 0);
    cnd_ = (s32)v1 >= 0;
    v0 = v0 + 4;
    if (cnd_) { goto L_0883BED4; }
    goto L_0883BEE4;
L_0883BEE4:;
    func_088FD934();
    goto L_0883BEEC;
L_0883BEEC:;
    func_08A698CC();
    goto L_0883BEF4;
L_0883BEF4:;
    v1 = 1;
    v0 = D_08B28B54 - (-29868);
    ST8(v0-29868, v1);
    sp = sp + 16;
    return;
}

/* 0883BF0C */
void func_0883BF0C(void)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883BF0C:;
    sp = sp - 16;
    func_088FD95C();
    goto L_0883BF1C;
L_0883BF1C:;
    func_08A698D4();
    goto L_0883BF24;
L_0883BF24:;
    v0 = D_08B28B54 - (-29868);
    ST8(v0-29868, 0);
    sp = sp + 16;
    return;
}

/* 0883BF38 */
void func_0883BF38(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883BF38:;
    sp = sp - 16;
    v0 = D_08B28684 - (-31100);
    v1 = D_08B2889C - (-30564);
    a3 = v0 - 31100;
    a2 = v1 - 30564;
    a1 = 0 + 0;
    goto L_0883BF54;
L_0883BF54:;
    v0 = a1 + a3;
    a0 = a1 + a2;
    a1 = a1 + 1;
    v1 = (s32)a1 < 533;
    ST8(v0, 0);
    cnd_ = v1 != 0;
    ST8(a0, 0);
    if (cnd_) { goto L_0883BF54; }
    goto L_0883BF70;
L_0883BF70:;
    v0 = D_08B28AB8 - (-30024);
    v0 = v0 - 30024;
    v1 = 38;
    goto L_0883BF7C;
L_0883BF7C:;
    v1 = v1 - 1;
    ST32(v0, 0);
    cnd_ = (s32)v1 >= 0;
    v0 = v0 + 4;
    if (cnd_) { goto L_0883BF7C; }
    goto L_0883BF8C;
L_0883BF8C:;
    func_088FD978();
    goto L_0883BF94;
L_0883BF94:;
    func_08A698DC();
    goto L_0883BF9C;
L_0883BF9C:;
    sp = sp + 16;
    return;
}

/* 0883BFA8 */
void func_0883BFA8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883BFA8:;
    sp = sp - 16;
    s2 = D_08B2889C - (-30564);
    v0 = D_08B28AB1 - (-30031);
    s1 = D_08B28684 - (-31100);
    v1 = D_08B28AB3 - (-30029);
    s0 = s2 - 30564;
    a0 = s1 - 31100;
    a1 = s0 + 0;
    a2 = 533;
    ST8(v0-30031, 0);
    v0 = D_08B28B55 - (-29867);
    ST8(v1-30029, 0);
    ST8(v0-29867, 0);
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883BFF0;
L_0883BFF0:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 533;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883C000;
L_0883C000:;
    a0 = D_08B28AB8 - (-30024);
    a0 = a0 - 30024;
    a1 = 0 + 0;
    a2 = 156;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883C014;
L_0883C014:;
    func_088FD994(0, 0, 0, 0, 0, 0);
    goto L_0883C01C;
L_0883C01C:;
    func_08A698E4();
    goto L_0883C024;
L_0883C024:;
    ST8(s1-31100, 0);
    ST8(s2-30564, 0);
    sp = sp + 16;
    return;
}

/* 0883C044 */
u64 func_0883C044(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_0883C044:;
    v1 = D_08B28AB1 - (-30031);
    v0 = LD_U8(v1-30031);
    cnd_ = v0 != 0;
    a2 = D_08B28AB2 - (-30030);
    if (cnd_) { goto L_0883C084; }
    goto L_0883C054;
L_0883C054:;
    v0 = 1;
    ST8(a2-30030, 0);
    a0 = 532;
    ST8(v1-30031, v0);
    v1 = D_08B2889C - (-30564);
    a1 = v1 - 30564;
    v0 = a0 + a1;
    goto L_0883C070;
L_0883C070:;
    v1 = LD_U8(v0);
    cnd_ = v1 != 0;
    a0 = a0 - 1;
    if (cnd_) { goto L_0883C08C; }
    goto L_0883C07C;
L_0883C07C:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = a0 + a1; goto L_0883C070; }
    goto L_0883C084;
L_0883C084:;
    v0 = LD_U8(a2-30030);
    return (u64)v0 | ((u64)v1 << 32);
L_0883C08C:;
    v0 = 1;
    ST8(a2-30030, v0);
    goto L_0883C084;
}

/* 0883C098 */
rv_t func_0883C098(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0883C098:;
    v1 = D_08B28B55 - (-29867);
    v0 = LD_U8(v1-29867);
    cnd_ = v0 != 0;
    a1 = D_08B28B56 - (-29866);
    if (cnd_) { goto L_0883C0F4; }
    goto L_0883C0A8;
L_0883C0A8:;
    v0 = 1;
    ST8(v1-29867, v0);
    v0 = D_08B28AB8 - (-30024);
    v0 = v0 - 30024;
    a0 = v0 + 152;
    v0 = D_08AEB86C - (-18324);
    ST8(a1-29866, 0);
    v1 = 38;
    f1 = BITSF(LD32(v0-18324));
    v0 = LD32(a0);
    goto L_0883C0D0;
L_0883C0D0:;
    v1 = v1 - 1;
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    a0 = a0 - 4;
    if (cnd_) { goto L_0883C0FC; }
    goto L_0883C0EC;
L_0883C0EC:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0883C0D0; }
    goto L_0883C0F4;
L_0883C0F4:;
    v0 = LD_U8(a1-29866);
    return (rv_t){ v0, v1, f0 };
L_0883C0FC:;
    v0 = 1;
    ST8(a1-29866, v0);
    goto L_0883C0F4;
}

/* 0883C108 */
u32 func_0883C108(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_0883C108:;
    t1 = D_08B28AB3 - (-30029);
    v0 = LD_U8(t1-30029);
    cnd_ = v0 != 0;
    t0 = D_08B28AB4 - (-30028);
    if (cnd_) { goto L_0883C160; }
    goto L_0883C118;
L_0883C118:;
    ST8(t0-30028, 0);
    v0 = D_08B2889C - (-30564);
    v1 = D_08B28684 - (-31100);
    a2 = v0 - 30564;
    a3 = v1 - 31100;
    a0 = 532;
    v0 = a0 + a2;
    goto L_0883C134;
L_0883C134:;
    v1 = LD_U8(v0);
    a1 = a0 + a3;
    cnd_ = v1 == 0;
    a0 = a0 - 1;
    if (cnd_) { goto L_0883C150; }
    goto L_0883C144;
L_0883C144:;
    v0 = LD_U8(a1);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0883C168; }
    goto L_0883C150;
L_0883C150:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = a0 + a2; goto L_0883C134; }
    goto L_0883C158;
L_0883C158:;
    v0 = 1;
    ST8(t1-30029, v0);
    goto L_0883C160;
L_0883C160:;
    v0 = LD_U8(t0-30028);
    return v0;
L_0883C168:;
    ST8(t0-30028, v0);
    goto L_0883C158;
}

/* 0883C170 */
u64 func_0883C170(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883C170:;
    sp = sp - 32;
    v0 = 292;
    s2 = a3 + 0;
    s1 = a1 + 0;
    s0 = a2 + 0;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_0883C3F0; }
    goto L_0883C19C;
L_0883C19C:;
    v0 = (s32)a0 < 293;
    cnd_ = v0 == 0;
    v0 = 295;
    if (cnd_) { goto L_0883C318; }
    goto L_0883C1A8;
L_0883C1A8:;
    v0 = 8;
    cnd_ = a0 == v0;
    v0 = 291;
    if (cnd_) { goto L_0883C2B0; }
    goto L_0883C1B4;
L_0883C1B4:;
    cnd_ = a0 == v0;
    v0 = a0 - 352;
    if (cnd_) { goto L_0883C2A0; }
    goto L_0883C1BC;
L_0883C1BC:;
    v0 = v0 < 0xau;
    cnd_ = v0 != 0;
    s3 = a0 - 304;
    if (cnd_) { goto L_0883C1DC; }
    goto L_0883C1C8;
L_0883C1C8:;
    v0 = a0 - 32;
    v0 = v0 < 0xe0u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0883C20C; }
    goto L_0883C1D8;
L_0883C1D8:;
    s3 = a0 + 0;
    goto L_0883C1DC;
L_0883C1DC:;
    a0 = s1 + 0;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883C1E4;
L_0883C1E4:;
    a2 = LD32(s2);
    v1 = v0 + 0;
    v0 = a2 < s0;
    cnd_ = v0 != 0;
    v0 = v1 + 2;
    if (cnd_) { goto L_0883C224; }
    goto L_0883C1F8;
L_0883C1F8:;
    v0 = 1;
    ST32(s2, v0);
    ST16(s1, s3);
    ST16(s1+2, 0);
    goto L_0883C208;
L_0883C208:;
    goto L_0883C20C;
L_0883C20C:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_0883C224:;
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0883C20C; }
    goto L_0883C230;
L_0883C230:;
    cnd_ = v1 == a2;
    v0 = v1 + 1;
    if (cnd_) { goto L_0883C27C; }
    goto L_0883C238;
L_0883C238:;
    v0 = a2 < v0;
    cnd_ = v0 == 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_0883C264; }
    goto L_0883C244;
L_0883C244:;
    v0 = v1 << 1;
    a0 = v0 + s1;
    goto L_0883C24C;
L_0883C24C:;
    v1 = LD_U16(a0);
    v0 = a2 < a1;
    a1 = a1 - 1;
    ST16(a0+2, v1);
    cnd_ = v0 != 0;
    a0 = a0 - 2;
    if (cnd_) { goto L_0883C24C; }
    goto L_0883C264;
L_0883C264:;
    v0 = a2 << 1;
    v0 = v0 + s1;
    v1 = a2 + 1;
    ST16(v0, s3);
    ST32(s2, v1);
    goto L_0883C208;
L_0883C27C:;
    a0 = a2 + 1;
    v1 = a0 << 1;
    v0 = a2 << 1;
    v1 = v1 + s1;
    v0 = v0 + s1;
    ST16(v0, s3);
    ST32(s2, a0);
    ST16(v1, 0);
    goto L_0883C208;
L_0883C2A0:;
    a0 = a1 + 0;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883C2A8;
L_0883C2A8:;
    ST32(s2, v0);
    goto L_0883C208;
L_0883C2B0:;
    v1 = LD32(a3);
    v0 = v1 < a2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0883C2CC; }
    goto L_0883C2C0;
L_0883C2C0:;
    ST32(s2, 0);
    goto L_0883C2C4;
L_0883C2C4:;
    ST16(s1, 0);
    goto L_0883C208;
L_0883C2CC:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0883C20C; }
    goto L_0883C2D4;
L_0883C2D4:;
    a0 = a1 + 0;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883C2DC;
L_0883C2DC:;
    a2 = LD32(s2);
    a3 = v0 + 0;
    v0 = v0 < a2;
    cnd_ = v0 != 0;
    a1 = a2 + 0;
    if (cnd_) { goto L_0883C310; }
    goto L_0883C2F0;
L_0883C2F0:;
    v0 = a2 << 1;
    a0 = v0 + s1;
    goto L_0883C2F8;
L_0883C2F8:;
    v0 = LD_U16(a0);
    a1 = a1 + 1;
    v1 = a3 < a1;
    ST16(a0-2, v0);
    cnd_ = v1 == 0;
    a0 = a0 + 2;
    if (cnd_) { goto L_0883C2F8; }
    goto L_0883C310;
L_0883C310:;
    v0 = a2 - 1;
    goto L_0883C2A8;
L_0883C318:;
    cnd_ = a0 == v0;
    v0 = (s32)a0 < 296;
    if (cnd_) { goto L_0883C3D0; }
    goto L_0883C320;
L_0883C320:;
    cnd_ = v0 == 0;
    v0 = 302;
    if (cnd_) { goto L_0883C364; }
    goto L_0883C328;
L_0883C328:;
    v0 = 293;
    cnd_ = a0 != v0;
    v0 = a0 - 352;
    if (cnd_) { goto L_0883C1BC; }
    goto L_0883C334;
L_0883C334:;
    v1 = LD32(a3);
    v0 = v1 < a2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0883C354; }
    goto L_0883C344;
L_0883C344:;
    cnd_ = v1 != 0;
    v0 = v1 - 1;
    if (cnd_) { goto L_0883C2A8; }
    goto L_0883C34C;
L_0883C34C:;
    goto L_0883C20C;
L_0883C354:;
    a0 = a1 + 0;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883C35C;
L_0883C35C:;
    v0 = v0 - 1;
    goto L_0883C2A8;
L_0883C364:;
    cnd_ = a0 != v0;
    v0 = a0 - 352;
    if (cnd_) { goto L_0883C1BC; }
    goto L_0883C36C;
L_0883C36C:;
    v0 = LD32(a3);
    v0 = v0 < a2;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s2, 0); goto L_0883C2C4; }
    goto L_0883C37C;
L_0883C37C:;
    a0 = a1 + 0;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883C384;
L_0883C384:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0883C208; }
    goto L_0883C38C;
L_0883C38C:;
    a3 = LD32(s2);
    v0 = a3 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0883C20C; }
    goto L_0883C39C;
L_0883C39C:;
    a3 = a3 + 1;
    v0 = a1 < a3;
    cnd_ = v0 != 0;
    v0 = a3 << 1;
    if (cnd_) { goto L_0883C20C; }
    goto L_0883C3AC;
L_0883C3AC:;
    a0 = v0 + s1;
    goto L_0883C3B0;
L_0883C3B0:;
    v0 = LD_U16(a0);
    a3 = a3 + 1;
    v1 = a1 < a3;
    ST16(a0-2, v0);
    cnd_ = v1 == 0;
    a0 = a0 + 2;
    if (cnd_) { goto L_0883C3B0; }
    goto L_0883C3C8;
L_0883C3C8:;
    goto L_0883C20C;
L_0883C3D0:;
    a0 = a1 + 0;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883C3D8;
L_0883C3D8:;
    v1 = LD32(s2);
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0883C20C; }
    goto L_0883C3E8;
L_0883C3E8:;
    v0 = v1 + 1;
    goto L_0883C2A8;
L_0883C3F0:;
    ST32(a3, 0);
    goto L_0883C208;
}

/* 0883C3F8 */
rv_t func_0883C3F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883C3F8:;
    sp = sp - 32;
    s1 = t1 + 0;
    s1 = s1 - 1;
    s6 = a0 + 0;
    s5 = a1 + 0;
    s4 = a2 + 0;
    s2 = a3 + 0;
    s0 = t0 + 0;
    func_088FD9B0();
    goto L_0883C43C;
L_0883C43C:;
    v0 = (u32)-1;
    cnd_ = s1 == v0;
    s3 = (u32)-1;
    if (cnd_) { goto L_0883C47C; }
    goto L_0883C448;
L_0883C448:;
    cnd_ = s2 == 0;
    s1 = s1 - 1;
    if (cnd_) { goto L_0883C460; }
    goto L_0883C450;
L_0883C450:;
    t_ = s2;
    a0 = LD_U16(s0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883C458;
L_0883C458:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0883C474; }
    goto L_0883C460;
L_0883C460:;
    a0 = LD_U16(s0);
    a1 = s6 + 0;
    a2 = s5 + 0;
    a3 = s4 + 0;
    { u64 r_ = func_0883C170(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883C474;
L_0883C474:;
    cnd_ = s1 != s3;
    s0 = s0 + 2;
    if (cnd_) { goto L_0883C448; }
    goto L_0883C47C;
L_0883C47C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0883C4A4 */
void func_0883C4A4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883C4A4:;
    sp = sp - 32;
    v0 = D_08AF0F98 - (3992);
    v1 = a0 + 44;
    v0 = v0 + 3992;
    s5 = a0 + 16;
    s4 = a0 + 4;
    s3 = a0 + 80;
    s1 = a0 + 0;
    s0 = 8;
    ST32(s4+4, 0);
    ST32(s4+8, 0);
    ST32(s5+4, 0);
    ST32(s5+8, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    ST32(a0, v0);
    a0 = 100;
    ST32(s1+4, 0);
    ST32(s1+16, 0);
    ST32(s1+44, 0);
    ST32(s3+4, 0);
    ST32(s3+8, s0);
    s6 = a1 + 0;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883C524;
L_0883C524:;
    v0 = v0 + 4;
    ST32(v0-4, s0);
    v1 = v0 + 0;
    a0 = 7;
    a1 = (u32)-1;
    goto L_0883C538;
L_0883C538:;
    a0 = a0 - 1;
    ST32(v1, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    cnd_ = a0 != a1;
    v1 = v1 + 12;
    if (cnd_) { goto L_0883C538; }
    goto L_0883C550;
L_0883C550:;
    s2 = s1 + 92;
    s0 = 8;
    ST32(s3, v0);
    a0 = 100;
    ST32(s2+4, 0);
    ST32(s2+8, s0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883C56C;
L_0883C56C:;
    v0 = v0 + 4;
    ST32(v0-4, s0);
    v1 = v0 + 0;
    a0 = 7;
    a1 = (u32)-1;
    goto L_0883C580;
L_0883C580:;
    a0 = a0 - 1;
    ST32(v1, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    cnd_ = a0 != a1;
    v1 = v1 + 12;
    if (cnd_) { goto L_0883C580; }
    goto L_0883C598;
L_0883C598:;
    s3 = s1 + 104;
    s0 = 8;
    ST32(s2, v0);
    a0 = 100;
    ST32(s3+4, 0);
    ST32(s3+8, s0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883C5B4;
L_0883C5B4:;
    v0 = v0 + 4;
    ST32(v0-4, s0);
    v1 = v0 + 0;
    a0 = 7;
    a1 = (u32)-1;
    goto L_0883C5C8;
L_0883C5C8:;
    a0 = a0 - 1;
    ST32(v1, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    cnd_ = a0 != a1;
    v1 = v1 + 12;
    if (cnd_) { goto L_0883C5C8; }
    goto L_0883C5E0;
L_0883C5E0:;
    s2 = s1 + 116;
    s0 = 8;
    ST32(s3, v0);
    a0 = 100;
    ST32(s2+4, 0);
    ST32(s2+8, s0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883C5FC;
L_0883C5FC:;
    v0 = v0 + 4;
    ST32(v0-4, s0);
    v1 = v0 + 0;
    a0 = 7;
    a1 = (u32)-1;
    goto L_0883C610;
L_0883C610:;
    a0 = a0 - 1;
    ST32(v1, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    cnd_ = a0 != a1;
    v1 = v1 + 12;
    if (cnd_) { goto L_0883C610; }
    goto L_0883C628;
L_0883C628:;
    a0 = LD32(s1+4);
    ST32(s2, v0);
    cnd_ = a0 == 0;
    s0 = LD32(s6);
    if (cnd_) { goto L_0883C64C; }
    goto L_0883C638;
L_0883C638:;
    cnd_ = s0 == a0;
    if (cnd_) { a0 = LD32(s1+16); goto L_0883C688; }
    goto L_0883C640;
L_0883C640:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883C648;
L_0883C648:;
    ST32(s1+4, 0);
    goto L_0883C64C;
L_0883C64C:;
    ST32(s4+8, 0);
    cnd_ = s0 == 0;
    ST32(s4+4, 0);
    if (cnd_) { goto L_0883C7BC; }
    goto L_0883C658;
L_0883C658:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883C660;
L_0883C660:;
    v1 = v0 + 1;
    ST32(s4+4, v0);
    a0 = v1 + 0;
    ST32(s4+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883C674;
L_0883C674:;
    cnd_ = v0 != 0;
    ST32(s4, v0);
    if (cnd_) { goto L_0883C7A8; }
    goto L_0883C67C;
L_0883C67C:;
    ST32(s4+4, 0);
    ST32(s4+8, 0);
    goto L_0883C684;
L_0883C684:;
    a0 = LD32(s1+16);
    goto L_0883C688;
L_0883C688:;
    v0 = D_08AD45DC - (17884);
    cnd_ = a0 == 0;
    s0 = v0 + 17884;
    if (cnd_) { goto L_0883C6A4; }
    goto L_0883C694;
L_0883C694:;
    cnd_ = a0 == s0;
    if (cnd_) { v0 = D_08AEB870 - (-18320); goto L_0883C6E0; }
    goto L_0883C69C;
L_0883C69C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0883C798; }
    goto L_0883C6A4;
L_0883C6A4:;
    ST32(s5+8, 0);
    cnd_ = s0 == 0;
    ST32(s5+4, 0);
    if (cnd_) { goto L_0883C790; }
    goto L_0883C6B0;
L_0883C6B0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883C6B8;
L_0883C6B8:;
    v1 = v0 + 1;
    ST32(s5+4, v0);
    a0 = v1 + 0;
    ST32(s5+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883C6CC;
L_0883C6CC:;
    cnd_ = v0 != 0;
    ST32(s5, v0);
    if (cnd_) { goto L_0883C77C; }
    goto L_0883C6D4;
L_0883C6D4:;
    ST32(s5+4, 0);
    ST32(s5+8, 0);
    goto L_0883C6DC;
L_0883C6DC:;
    v0 = D_08AEB870 - (-18320);
    goto L_0883C6E0;
L_0883C6E0:;
    f0 = BITSF(LD32(v0-18320));
    a0 = (u32)-1;
    v0 = (u32)-1;
    v1 = 516;
    ST16(s1+78, v0);
    ST32(s1+72, v1);
    ST32(s1+56, a0);
    ST32(s1+184, FBITS(f0));
    ST32(s1+176, 0);
    ST32(s1+28, 0);
    ST32(s1+32, 0);
    ST32(s1+36, 0);
    ST32(s1+40, 0);
    ST8(s1+136, 0);
    ST8(s1+128, 0);
    ST8(s1+129, 0);
    ST8(s1+137, 0);
    ST32(s1+64, 0);
    ST32(s1+68, 0);
    ST32(s1+140, 0);
    ST32(s1+148, 0);
    ST8(s1+152, 0);
    ST8(s1+153, 0);
    ST8(s1+154, 0);
    ST32(s1+156, a0);
    ST32(s1+60, FBITS(f0));
    ST32(s1+160, 0);
    ST32(s1+180, a0);
    ST8(s1+76, 0);
    sp = sp + 32;
    return;
L_0883C77C:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883C788;
L_0883C788:;
    v0 = D_08AEB870 - (-18320);
    goto L_0883C6E0;
L_0883C790:;
    ST32(s5, 0);
    goto L_0883C6DC;
L_0883C798:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883C7A0;
L_0883C7A0:;
    ST32(s1+16, 0);
    goto L_0883C6A4;
L_0883C7A8:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883C7B4;
L_0883C7B4:;
    a0 = LD32(s1+16);
    goto L_0883C688;
L_0883C7BC:;
    ST32(s4, 0);
    goto L_0883C684;
}

/* 0883C7C4 */
void func_0883C7C4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883C7C4:;
    sp = sp - 32;
    v0 = D_08AF0F98 - (3992);
    v1 = a0 + 44;
    v0 = v0 + 3992;
    s5 = a0 + 16;
    s4 = a0 + 4;
    s3 = a0 + 80;
    s1 = a0 + 0;
    s0 = 8;
    ST32(s4+4, 0);
    ST32(s4+8, 0);
    ST32(s5+4, 0);
    ST32(s5+8, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    ST32(a0, v0);
    a0 = 100;
    ST32(s1+4, 0);
    ST32(s1+16, 0);
    ST32(s1+44, 0);
    ST32(s3+4, 0);
    ST32(s3+8, s0);
    s6 = a1 + 0;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883C844;
L_0883C844:;
    v0 = v0 + 4;
    ST32(v0-4, s0);
    v1 = v0 + 0;
    a0 = 7;
    a1 = (u32)-1;
    goto L_0883C858;
L_0883C858:;
    a0 = a0 - 1;
    ST32(v1, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    cnd_ = a0 != a1;
    v1 = v1 + 12;
    if (cnd_) { goto L_0883C858; }
    goto L_0883C870;
L_0883C870:;
    s2 = s1 + 92;
    s0 = 8;
    ST32(s3, v0);
    a0 = 100;
    ST32(s2+4, 0);
    ST32(s2+8, s0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883C88C;
L_0883C88C:;
    v0 = v0 + 4;
    ST32(v0-4, s0);
    v1 = v0 + 0;
    a0 = 7;
    a1 = (u32)-1;
    goto L_0883C8A0;
L_0883C8A0:;
    a0 = a0 - 1;
    ST32(v1, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    cnd_ = a0 != a1;
    v1 = v1 + 12;
    if (cnd_) { goto L_0883C8A0; }
    goto L_0883C8B8;
L_0883C8B8:;
    s3 = s1 + 104;
    s0 = 8;
    ST32(s2, v0);
    a0 = 100;
    ST32(s3+4, 0);
    ST32(s3+8, s0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883C8D4;
L_0883C8D4:;
    v0 = v0 + 4;
    ST32(v0-4, s0);
    v1 = v0 + 0;
    a0 = 7;
    a1 = (u32)-1;
    goto L_0883C8E8;
L_0883C8E8:;
    a0 = a0 - 1;
    ST32(v1, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    cnd_ = a0 != a1;
    v1 = v1 + 12;
    if (cnd_) { goto L_0883C8E8; }
    goto L_0883C900;
L_0883C900:;
    s2 = s1 + 116;
    s0 = 8;
    ST32(s3, v0);
    a0 = 100;
    ST32(s2+4, 0);
    ST32(s2+8, s0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883C91C;
L_0883C91C:;
    v0 = v0 + 4;
    ST32(v0-4, s0);
    v1 = v0 + 0;
    a0 = 7;
    a1 = (u32)-1;
    goto L_0883C930;
L_0883C930:;
    a0 = a0 - 1;
    ST32(v1, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    cnd_ = a0 != a1;
    v1 = v1 + 12;
    if (cnd_) { goto L_0883C930; }
    goto L_0883C948;
L_0883C948:;
    a0 = LD32(s1+4);
    ST32(s2, v0);
    cnd_ = a0 == 0;
    s0 = LD32(s6);
    if (cnd_) { goto L_0883C96C; }
    goto L_0883C958;
L_0883C958:;
    cnd_ = s0 == a0;
    if (cnd_) { a0 = LD32(s1+16); goto L_0883C9A8; }
    goto L_0883C960;
L_0883C960:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883C968;
L_0883C968:;
    ST32(s1+4, 0);
    goto L_0883C96C;
L_0883C96C:;
    ST32(s4+8, 0);
    cnd_ = s0 == 0;
    ST32(s4+4, 0);
    if (cnd_) { goto L_0883CADC; }
    goto L_0883C978;
L_0883C978:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883C980;
L_0883C980:;
    v1 = v0 + 1;
    ST32(s4+4, v0);
    a0 = v1 + 0;
    ST32(s4+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883C994;
L_0883C994:;
    cnd_ = v0 != 0;
    ST32(s4, v0);
    if (cnd_) { goto L_0883CAC8; }
    goto L_0883C99C;
L_0883C99C:;
    ST32(s4+4, 0);
    ST32(s4+8, 0);
    goto L_0883C9A4;
L_0883C9A4:;
    a0 = LD32(s1+16);
    goto L_0883C9A8;
L_0883C9A8:;
    v0 = D_08AD45DC - (17884);
    cnd_ = a0 == 0;
    s0 = v0 + 17884;
    if (cnd_) { goto L_0883C9C4; }
    goto L_0883C9B4;
L_0883C9B4:;
    cnd_ = a0 == s0;
    if (cnd_) { v0 = D_08AEB874 - (-18316); goto L_0883CA00; }
    goto L_0883C9BC;
L_0883C9BC:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0883CAB8; }
    goto L_0883C9C4;
L_0883C9C4:;
    ST32(s5+8, 0);
    cnd_ = s0 == 0;
    ST32(s5+4, 0);
    if (cnd_) { goto L_0883CAB0; }
    goto L_0883C9D0;
L_0883C9D0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883C9D8;
L_0883C9D8:;
    v1 = v0 + 1;
    ST32(s5+4, v0);
    a0 = v1 + 0;
    ST32(s5+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883C9EC;
L_0883C9EC:;
    cnd_ = v0 != 0;
    ST32(s5, v0);
    if (cnd_) { goto L_0883CA9C; }
    goto L_0883C9F4;
L_0883C9F4:;
    ST32(s5+4, 0);
    ST32(s5+8, 0);
    goto L_0883C9FC;
L_0883C9FC:;
    v0 = D_08AEB874 - (-18316);
    goto L_0883CA00;
L_0883CA00:;
    f0 = BITSF(LD32(v0-18316));
    a0 = (u32)-1;
    v0 = (u32)-1;
    v1 = 516;
    ST16(s1+78, v0);
    ST32(s1+72, v1);
    ST32(s1+56, a0);
    ST32(s1+184, FBITS(f0));
    ST32(s1+176, 0);
    ST32(s1+28, 0);
    ST32(s1+32, 0);
    ST32(s1+36, 0);
    ST32(s1+40, 0);
    ST8(s1+136, 0);
    ST8(s1+128, 0);
    ST8(s1+129, 0);
    ST8(s1+137, 0);
    ST32(s1+64, 0);
    ST32(s1+68, 0);
    ST32(s1+140, 0);
    ST32(s1+148, 0);
    ST8(s1+152, 0);
    ST8(s1+153, 0);
    ST8(s1+154, 0);
    ST32(s1+156, a0);
    ST32(s1+60, FBITS(f0));
    ST32(s1+160, 0);
    ST32(s1+180, a0);
    ST8(s1+76, 0);
    sp = sp + 32;
    return;
L_0883CA9C:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CAA8;
L_0883CAA8:;
    v0 = D_08AEB874 - (-18316);
    goto L_0883CA00;
L_0883CAB0:;
    ST32(s5, 0);
    goto L_0883C9FC;
L_0883CAB8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CAC0;
L_0883CAC0:;
    ST32(s1+16, 0);
    goto L_0883C9C4;
L_0883CAC8:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CAD4;
L_0883CAD4:;
    a0 = LD32(s1+16);
    goto L_0883C9A8;
L_0883CADC:;
    ST32(s4, 0);
    goto L_0883C9A4;
}

/* 0883CAE4 */
u64 func_0883CAE4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883CAE4:;
    v0 = D_08AF0F98 - (3992);
    v0 = v0 + 3992;
    ST32(a0, v0);
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 4;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CB10;
L_0883CB10:;
    v0 = LD_U8(s1+128);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0883CDEC; }
    goto L_0883CB1C;
L_0883CB1C:;
    a0 = LD32(s1+176);
    goto L_0883CB20;
L_0883CB20:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0883CDDC; }
    goto L_0883CB28;
L_0883CB28:;
    a1 = LD32(s1+28);
    goto L_0883CB2C;
L_0883CB2C:;
    cnd_ = (s32)a1 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0883CB5C; }
    goto L_0883CB34;
L_0883CB34:;
    v1 = LD32(s1+32);
    goto L_0883CB38;
L_0883CB38:;
    v0 = s0 << 2;
    s0 = s0 + 1;
    v0 = v0 + v1;
    v0 = LD32(v0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883CDC4; }
    goto L_0883CB50;
L_0883CB50:;
    v0 = (s32)s0 < (s32)a1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+32); goto L_0883CB38; }
    goto L_0883CB5C;
L_0883CB5C:;
    a0 = s1 + 32;
    func_08AA720C(a0, 0, 0, 0);
    goto L_0883CB64;
L_0883CB64:;
    a1 = LD32(s1+36);
    cnd_ = (s32)a1 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0883CB98; }
    goto L_0883CB70;
L_0883CB70:;
    v1 = LD32(s1+40);
    goto L_0883CB74;
L_0883CB74:;
    v0 = s0 << 2;
    s0 = s0 + 1;
    v0 = v0 + v1;
    v0 = LD32(v0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883CDAC; }
    goto L_0883CB8C;
L_0883CB8C:;
    v0 = (s32)s0 < (s32)a1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+40); goto L_0883CB74; }
    goto L_0883CB98;
L_0883CB98:;
    a0 = s1 + 40;
    func_08AA724C(a0, 0, 0, 0);
    goto L_0883CBA0;
L_0883CBA0:;
    s2 = s1 + 116;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CBA8;
L_0883CBA8:;
    a0 = LD32(s1+116);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+104); goto L_0883CC0C; }
    goto L_0883CBB4;
L_0883CBB4:;
    v1 = LD32(a0-4);
    a1 = a0 + 0;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    goto L_0883CBCC;
L_0883CBCC:;
    cnd_ = a1 == s0;
    s0 = s0 - 12;
    if (cnd_) { goto L_0883CC00; }
    goto L_0883CBD4;
L_0883CBD4:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883CBEC; }
    goto L_0883CBE0;
L_0883CBE0:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_0883CBCC;
L_0883CBEC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CBF4;
L_0883CBF4:;
    ST32(s0, 0);
    a1 = LD32(s2);
    goto L_0883CBE0;
L_0883CC00:;
    a0 = a1 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CC08;
L_0883CC08:;
    a0 = LD32(s1+104);
    goto L_0883CC0C;
L_0883CC0C:;
    cnd_ = a0 == 0;
    s2 = s1 + 104;
    if (cnd_) { goto L_0883CC68; }
    goto L_0883CC14;
L_0883CC14:;
    v1 = LD32(a0-4);
    a1 = a0 + 0;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    goto L_0883CC2C;
L_0883CC2C:;
    cnd_ = a1 == s0;
    s0 = s0 - 12;
    if (cnd_) { goto L_0883CC60; }
    goto L_0883CC34;
L_0883CC34:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883CC4C; }
    goto L_0883CC40;
L_0883CC40:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_0883CC2C;
L_0883CC4C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CC54;
L_0883CC54:;
    ST32(s0, 0);
    a1 = LD32(s2);
    goto L_0883CC40;
L_0883CC60:;
    a0 = a1 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CC68;
L_0883CC68:;
    a0 = LD32(s1+92);
    cnd_ = a0 == 0;
    s2 = s1 + 92;
    if (cnd_) { goto L_0883CCC8; }
    goto L_0883CC74;
L_0883CC74:;
    v1 = LD32(a0-4);
    a1 = a0 + 0;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    goto L_0883CC8C;
L_0883CC8C:;
    cnd_ = a1 == s0;
    s0 = s0 - 12;
    if (cnd_) { goto L_0883CCC0; }
    goto L_0883CC94;
L_0883CC94:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883CCAC; }
    goto L_0883CCA0;
L_0883CCA0:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_0883CC8C;
L_0883CCAC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CCB4;
L_0883CCB4:;
    ST32(s0, 0);
    a1 = LD32(s2);
    goto L_0883CCA0;
L_0883CCC0:;
    a0 = a1 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CCC8;
L_0883CCC8:;
    a0 = LD32(s1+80);
    cnd_ = a0 == 0;
    s2 = s1 + 80;
    if (cnd_) { goto L_0883CD28; }
    goto L_0883CCD4;
L_0883CCD4:;
    v1 = LD32(a0-4);
    a1 = a0 + 0;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    goto L_0883CCEC;
L_0883CCEC:;
    cnd_ = a1 == s0;
    s0 = s0 - 12;
    if (cnd_) { goto L_0883CD20; }
    goto L_0883CCF4;
L_0883CCF4:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883CD0C; }
    goto L_0883CD00;
L_0883CD00:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_0883CCEC;
L_0883CD0C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CD14;
L_0883CD14:;
    ST32(s0, 0);
    a1 = LD32(s2);
    goto L_0883CD00;
L_0883CD20:;
    a0 = a1 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CD28;
L_0883CD28:;
    a0 = LD32(s1+44);
    cnd_ = a0 != 0;
    s0 = s1 + 44;
    if (cnd_) { goto L_0883CD9C; }
    goto L_0883CD34;
L_0883CD34:;
    a0 = LD32(s1+16);
    ST32(s0+4, 0);
    s2 = s1 + 16;
    cnd_ = a0 != 0;
    ST32(s0+8, 0);
    if (cnd_) { goto L_0883CD8C; }
    goto L_0883CD48;
L_0883CD48:;
    a0 = LD32(s1+4);
    ST32(s2+4, 0);
    s0 = s1 + 4;
    cnd_ = a0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_0883CD7C; }
    goto L_0883CD5C;
L_0883CD5C:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0883CD7C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CD84;
L_0883CD84:;
    ST32(s1+4, 0);
    goto L_0883CD5C;
L_0883CD8C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CD94;
L_0883CD94:;
    ST32(s1+16, 0);
    goto L_0883CD48;
L_0883CD9C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CDA4;
L_0883CDA4:;
    ST32(s1+44, 0);
    goto L_0883CD34;
L_0883CDAC:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883CDBC;
L_0883CDBC:;
    a1 = LD32(s1+36);
    goto L_0883CB8C;
L_0883CDC4:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883CDD4;
L_0883CDD4:;
    a1 = LD32(s1+28);
    goto L_0883CB50;
L_0883CDDC:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CDE4;
L_0883CDE4:;
    a1 = LD32(s1+28);
    goto L_0883CB2C;
L_0883CDEC:;
    a0 = s1 + 0;
    { rv_t r_ = func_0883D888(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883CDF4;
L_0883CDF4:;
    a0 = LD32(s1+176);
    goto L_0883CB20;
}

/* 0883CDFC */
rv_t func_0883CDFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883CDFC:;
    v0 = D_08AF0F98 - (3992);
    v0 = v0 + 3992;
    ST32(a0, v0);
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 4;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CE28;
L_0883CE28:;
    v0 = LD_U8(s1+128);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0883D104; }
    goto L_0883CE34;
L_0883CE34:;
    a0 = LD32(s1+176);
    goto L_0883CE38;
L_0883CE38:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0883D0F4; }
    goto L_0883CE40;
L_0883CE40:;
    a1 = LD32(s1+28);
    goto L_0883CE44;
L_0883CE44:;
    cnd_ = (s32)a1 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0883CE74; }
    goto L_0883CE4C;
L_0883CE4C:;
    v1 = LD32(s1+32);
    goto L_0883CE50;
L_0883CE50:;
    v0 = s0 << 2;
    s0 = s0 + 1;
    v0 = v0 + v1;
    v0 = LD32(v0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883D0DC; }
    goto L_0883CE68;
L_0883CE68:;
    v0 = (s32)s0 < (s32)a1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+32); goto L_0883CE50; }
    goto L_0883CE74;
L_0883CE74:;
    a0 = s1 + 32;
    func_08AA720C(a0, 0, 0, 0);
    goto L_0883CE7C;
L_0883CE7C:;
    a1 = LD32(s1+36);
    cnd_ = (s32)a1 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0883CEB0; }
    goto L_0883CE88;
L_0883CE88:;
    v1 = LD32(s1+40);
    goto L_0883CE8C;
L_0883CE8C:;
    v0 = s0 << 2;
    s0 = s0 + 1;
    v0 = v0 + v1;
    v0 = LD32(v0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883D0C4; }
    goto L_0883CEA4;
L_0883CEA4:;
    v0 = (s32)s0 < (s32)a1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+40); goto L_0883CE8C; }
    goto L_0883CEB0;
L_0883CEB0:;
    a0 = s1 + 40;
    func_08AA724C(a0, 0, 0, 0);
    goto L_0883CEB8;
L_0883CEB8:;
    s2 = s1 + 116;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CEC0;
L_0883CEC0:;
    a0 = LD32(s1+116);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+104); goto L_0883CF24; }
    goto L_0883CECC;
L_0883CECC:;
    v1 = LD32(a0-4);
    a1 = a0 + 0;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    goto L_0883CEE4;
L_0883CEE4:;
    cnd_ = a1 == s0;
    s0 = s0 - 12;
    if (cnd_) { goto L_0883CF18; }
    goto L_0883CEEC;
L_0883CEEC:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883CF04; }
    goto L_0883CEF8;
L_0883CEF8:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_0883CEE4;
L_0883CF04:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CF0C;
L_0883CF0C:;
    ST32(s0, 0);
    a1 = LD32(s2);
    goto L_0883CEF8;
L_0883CF18:;
    a0 = a1 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CF20;
L_0883CF20:;
    a0 = LD32(s1+104);
    goto L_0883CF24;
L_0883CF24:;
    cnd_ = a0 == 0;
    s2 = s1 + 104;
    if (cnd_) { goto L_0883CF80; }
    goto L_0883CF2C;
L_0883CF2C:;
    v1 = LD32(a0-4);
    a1 = a0 + 0;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    goto L_0883CF44;
L_0883CF44:;
    cnd_ = a1 == s0;
    s0 = s0 - 12;
    if (cnd_) { goto L_0883CF78; }
    goto L_0883CF4C;
L_0883CF4C:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883CF64; }
    goto L_0883CF58;
L_0883CF58:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_0883CF44;
L_0883CF64:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CF6C;
L_0883CF6C:;
    ST32(s0, 0);
    a1 = LD32(s2);
    goto L_0883CF58;
L_0883CF78:;
    a0 = a1 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CF80;
L_0883CF80:;
    a0 = LD32(s1+92);
    cnd_ = a0 == 0;
    s2 = s1 + 92;
    if (cnd_) { goto L_0883CFE0; }
    goto L_0883CF8C;
L_0883CF8C:;
    v1 = LD32(a0-4);
    a1 = a0 + 0;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    goto L_0883CFA4;
L_0883CFA4:;
    cnd_ = a1 == s0;
    s0 = s0 - 12;
    if (cnd_) { goto L_0883CFD8; }
    goto L_0883CFAC;
L_0883CFAC:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883CFC4; }
    goto L_0883CFB8;
L_0883CFB8:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_0883CFA4;
L_0883CFC4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CFCC;
L_0883CFCC:;
    ST32(s0, 0);
    a1 = LD32(s2);
    goto L_0883CFB8;
L_0883CFD8:;
    a0 = a1 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883CFE0;
L_0883CFE0:;
    a0 = LD32(s1+80);
    cnd_ = a0 == 0;
    s2 = s1 + 80;
    if (cnd_) { goto L_0883D040; }
    goto L_0883CFEC;
L_0883CFEC:;
    v1 = LD32(a0-4);
    a1 = a0 + 0;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    goto L_0883D004;
L_0883D004:;
    cnd_ = a1 == s0;
    s0 = s0 - 12;
    if (cnd_) { goto L_0883D038; }
    goto L_0883D00C;
L_0883D00C:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883D024; }
    goto L_0883D018;
L_0883D018:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_0883D004;
L_0883D024:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D02C;
L_0883D02C:;
    ST32(s0, 0);
    a1 = LD32(s2);
    goto L_0883D018;
L_0883D038:;
    a0 = a1 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D040;
L_0883D040:;
    a0 = LD32(s1+44);
    cnd_ = a0 != 0;
    s0 = s1 + 44;
    if (cnd_) { goto L_0883D0B4; }
    goto L_0883D04C;
L_0883D04C:;
    a0 = LD32(s1+16);
    ST32(s0+4, 0);
    s2 = s1 + 16;
    cnd_ = a0 != 0;
    ST32(s0+8, 0);
    if (cnd_) { goto L_0883D0A4; }
    goto L_0883D060;
L_0883D060:;
    a0 = LD32(s1+4);
    ST32(s2+4, 0);
    s0 = s1 + 4;
    cnd_ = a0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_0883D094; }
    goto L_0883D074;
L_0883D074:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883D094:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D09C;
L_0883D09C:;
    ST32(s1+4, 0);
    goto L_0883D074;
L_0883D0A4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D0AC;
L_0883D0AC:;
    ST32(s1+16, 0);
    goto L_0883D060;
L_0883D0B4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D0BC;
L_0883D0BC:;
    ST32(s1+44, 0);
    goto L_0883D04C;
L_0883D0C4:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D0D4;
L_0883D0D4:;
    a1 = LD32(s1+36);
    goto L_0883CEA4;
L_0883D0DC:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D0EC;
L_0883D0EC:;
    a1 = LD32(s1+28);
    goto L_0883CE68;
L_0883D0F4:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D0FC;
L_0883D0FC:;
    a1 = LD32(s1+28);
    goto L_0883CE44;
L_0883D104:;
    a0 = s1 + 0;
    { rv_t r_ = func_0883D888(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D10C;
L_0883D10C:;
    a0 = LD32(s1+176);
    goto L_0883CE38;
}

/* 0883D114 */
rv_t func_0883D114(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883D114:;
    v0 = D_08AF0F98 - (3992);
    v0 = v0 + 3992;
    ST32(a0, v0);
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 4;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D140;
L_0883D140:;
    v0 = LD_U8(s1+128);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0883D424; }
    goto L_0883D14C;
L_0883D14C:;
    a0 = LD32(s1+176);
    goto L_0883D150;
L_0883D150:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0883D414; }
    goto L_0883D158;
L_0883D158:;
    a1 = LD32(s1+28);
    goto L_0883D15C;
L_0883D15C:;
    cnd_ = (s32)a1 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0883D18C; }
    goto L_0883D164;
L_0883D164:;
    v1 = LD32(s1+32);
    goto L_0883D168;
L_0883D168:;
    v0 = s0 << 2;
    s0 = s0 + 1;
    v0 = v0 + v1;
    v0 = LD32(v0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883D3FC; }
    goto L_0883D180;
L_0883D180:;
    v0 = (s32)s0 < (s32)a1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+32); goto L_0883D168; }
    goto L_0883D18C;
L_0883D18C:;
    a0 = s1 + 32;
    func_08AA720C(a0, 0, 0, 0);
    goto L_0883D194;
L_0883D194:;
    a1 = LD32(s1+36);
    cnd_ = (s32)a1 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0883D1C8; }
    goto L_0883D1A0;
L_0883D1A0:;
    v1 = LD32(s1+40);
    goto L_0883D1A4;
L_0883D1A4:;
    v0 = s0 << 2;
    s0 = s0 + 1;
    v0 = v0 + v1;
    v0 = LD32(v0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883D3E4; }
    goto L_0883D1BC;
L_0883D1BC:;
    v0 = (s32)s0 < (s32)a1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+40); goto L_0883D1A4; }
    goto L_0883D1C8;
L_0883D1C8:;
    a0 = s1 + 40;
    func_08AA724C(a0, 0, 0, 0);
    goto L_0883D1D0;
L_0883D1D0:;
    s2 = s1 + 116;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D1D8;
L_0883D1D8:;
    a0 = LD32(s1+116);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+104); goto L_0883D23C; }
    goto L_0883D1E4;
L_0883D1E4:;
    v1 = LD32(a0-4);
    a1 = a0 + 0;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    goto L_0883D1FC;
L_0883D1FC:;
    cnd_ = a1 == s0;
    s0 = s0 - 12;
    if (cnd_) { goto L_0883D230; }
    goto L_0883D204;
L_0883D204:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883D21C; }
    goto L_0883D210;
L_0883D210:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_0883D1FC;
L_0883D21C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D224;
L_0883D224:;
    ST32(s0, 0);
    a1 = LD32(s2);
    goto L_0883D210;
L_0883D230:;
    a0 = a1 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D238;
L_0883D238:;
    a0 = LD32(s1+104);
    goto L_0883D23C;
L_0883D23C:;
    cnd_ = a0 == 0;
    s2 = s1 + 104;
    if (cnd_) { goto L_0883D298; }
    goto L_0883D244;
L_0883D244:;
    v1 = LD32(a0-4);
    a1 = a0 + 0;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    goto L_0883D25C;
L_0883D25C:;
    cnd_ = a1 == s0;
    s0 = s0 - 12;
    if (cnd_) { goto L_0883D290; }
    goto L_0883D264;
L_0883D264:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883D27C; }
    goto L_0883D270;
L_0883D270:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_0883D25C;
L_0883D27C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D284;
L_0883D284:;
    ST32(s0, 0);
    a1 = LD32(s2);
    goto L_0883D270;
L_0883D290:;
    a0 = a1 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D298;
L_0883D298:;
    a0 = LD32(s1+92);
    cnd_ = a0 == 0;
    s2 = s1 + 92;
    if (cnd_) { goto L_0883D2F8; }
    goto L_0883D2A4;
L_0883D2A4:;
    v1 = LD32(a0-4);
    a1 = a0 + 0;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    goto L_0883D2BC;
L_0883D2BC:;
    cnd_ = a1 == s0;
    s0 = s0 - 12;
    if (cnd_) { goto L_0883D2F0; }
    goto L_0883D2C4;
L_0883D2C4:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883D2DC; }
    goto L_0883D2D0;
L_0883D2D0:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_0883D2BC;
L_0883D2DC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D2E4;
L_0883D2E4:;
    ST32(s0, 0);
    a1 = LD32(s2);
    goto L_0883D2D0;
L_0883D2F0:;
    a0 = a1 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D2F8;
L_0883D2F8:;
    a0 = LD32(s1+80);
    cnd_ = a0 == 0;
    s2 = s1 + 80;
    if (cnd_) { goto L_0883D358; }
    goto L_0883D304;
L_0883D304:;
    v1 = LD32(a0-4);
    a1 = a0 + 0;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    goto L_0883D31C;
L_0883D31C:;
    cnd_ = a1 == s0;
    s0 = s0 - 12;
    if (cnd_) { goto L_0883D350; }
    goto L_0883D324;
L_0883D324:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883D33C; }
    goto L_0883D330;
L_0883D330:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_0883D31C;
L_0883D33C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D344;
L_0883D344:;
    ST32(s0, 0);
    a1 = LD32(s2);
    goto L_0883D330;
L_0883D350:;
    a0 = a1 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D358;
L_0883D358:;
    a0 = LD32(s1+44);
    cnd_ = a0 != 0;
    s0 = s1 + 44;
    if (cnd_) { goto L_0883D3D4; }
    goto L_0883D364;
L_0883D364:;
    a0 = LD32(s1+16);
    ST32(s0+4, 0);
    s2 = s1 + 16;
    cnd_ = a0 != 0;
    ST32(s0+8, 0);
    if (cnd_) { goto L_0883D3C4; }
    goto L_0883D378;
L_0883D378:;
    a0 = LD32(s1+4);
    ST32(s2+4, 0);
    s0 = s1 + 4;
    cnd_ = a0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_0883D3B4; }
    goto L_0883D38C;
L_0883D38C:;
    ST32(s0+4, 0);
    a0 = s1 + 0;
    ST32(s0+8, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D39C;
L_0883D39C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883D3B4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D3BC;
L_0883D3BC:;
    ST32(s1+4, 0);
    goto L_0883D38C;
L_0883D3C4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D3CC;
L_0883D3CC:;
    ST32(s1+16, 0);
    goto L_0883D378;
L_0883D3D4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D3DC;
L_0883D3DC:;
    ST32(s1+44, 0);
    goto L_0883D364;
L_0883D3E4:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D3F4;
L_0883D3F4:;
    a1 = LD32(s1+36);
    goto L_0883D1BC;
L_0883D3FC:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D40C;
L_0883D40C:;
    a1 = LD32(s1+28);
    goto L_0883D180;
L_0883D414:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D41C;
L_0883D41C:;
    a1 = LD32(s1+28);
    goto L_0883D15C;
L_0883D424:;
    a0 = s1 + 0;
    { rv_t r_ = func_0883D888(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D42C;
L_0883D42C:;
    a0 = LD32(s1+176);
    goto L_0883D150;
}

/* 0883D434 */
u32 func_0883D434(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883D434:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = func_0897A0B0(a1, t1, t2, t3);
    goto L_0883D450;
L_0883D450:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0883D46C; }
    goto L_0883D458;
L_0883D458:;
    sp = sp + 16;
    return v0;
L_0883D46C:;
    cnd_ = s0 != 0;
    a0 = 188;
    if (cnd_) { goto L_0883D458; }
    goto L_0883D474;
L_0883D474:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D47C;
L_0883D47C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    func_0883C7C4(a0, a1, 0, 0, 0);
    goto L_0883D48C;
L_0883D48C:;
    v0 = s0 + 0;
    goto L_0883D458;
}

/* 0883D494 */
rv_t func_0883D494(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883D494:;
    sp = sp - 16;
    s1 = 0 + 0;
    s0 = a0 + 0;
    a1 = LD_U16(a0+78);
    a0 = D_08B29170 - (-28304);
    a0 = a0 - 28304;
    { u64 r_ = func_0887A0D0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D4BC;
L_0883D4BC:;
    v1 = LD32(s0+28);
    v0 = (u32)-1;
    cnd_ = (s32)v1 <= 0;
    ST16(s0+78, v0);
    if (cnd_) { goto L_0883D4FC; }
    goto L_0883D4CC;
L_0883D4CC:;
    v1 = LD32(s0+32);
    goto L_0883D4D0;
L_0883D4D0:;
    v0 = s1 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a1 = LD32(a0);
    v1 = LD32(a1+8);
    t_ = v1;
    s1 = s1 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D4EC;
L_0883D4EC:;
    v0 = LD32(s0+28);
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+32); goto L_0883D4D0; }
    goto L_0883D4FC;
L_0883D4FC:;
    v0 = LD32(s0+36);
    cnd_ = (s32)v0 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0883D53C; }
    goto L_0883D508;
L_0883D508:;
    v1 = LD32(s0+40);
    goto L_0883D50C;
L_0883D50C:;
    v0 = s1 << 2;
    a1 = s0 + 0;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v0 = LD32(a0);
    v1 = LD32(v0+8);
    t_ = v1;
    s1 = s1 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D52C;
L_0883D52C:;
    v0 = LD32(s0+36);
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+40); goto L_0883D50C; }
    goto L_0883D53C;
L_0883D53C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0883D550 */
rv_t func_0883D550(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_0883D550:;
    sp = sp - 272;
    v0 = LD_U8(a0+128);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0883D870; }
    goto L_0883D570;
L_0883D570:;
    v1 = LD32(s1+28);
    goto L_0883D574;
L_0883D574:;
    v0 = 1;
    ST8(s1+129, v0);
    s0 = 0 + 0;
    ST32(s1+132, 0);
    ST8(s1+128, v0);
    ST8(s1+137, 0);
    ST32(s1+140, 0);
    ST32(s1+148, 0);
    ST32(s1+160, 0);
    cnd_ = (s32)v1 <= 0;
    ST8(s1+154, 0);
    if (cnd_) { goto L_0883D5D0; }
    goto L_0883D5A0;
L_0883D5A0:;
    v1 = LD32(s1+32);
    goto L_0883D5A4;
L_0883D5A4:;
    v0 = s0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    s0 = s0 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D5C0;
L_0883D5C0:;
    v1 = LD32(s1+28);
    v0 = (s32)s0 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+32); goto L_0883D5A4; }
    goto L_0883D5D0;
L_0883D5D0:;
    cnd_ = (s32)v1 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0883D608; }
    goto L_0883D5D8;
L_0883D5D8:;
    v1 = LD32(s1+32);
    goto L_0883D5DC;
L_0883D5DC:;
    v0 = s0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a1 = LD32(a0);
    v1 = LD32(a1+20);
    t_ = v1;
    s0 = s0 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D5F8;
L_0883D5F8:;
    v0 = LD32(s1+28);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+32); goto L_0883D5DC; }
    goto L_0883D608;
L_0883D608:;
    a0 = s1 + 0;
    { rv_t r_ = func_0883E2B0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D610;
L_0883D610:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+72); goto L_0883D628; }
    goto L_0883D618;
L_0883D618:;
    v1 = 1;
    v0 = D_08B2C1BC - (-15940);
    ST8(v0-15940, v1);
    v0 = LD32(s1+72);
    goto L_0883D628;
L_0883D628:;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+36); goto L_0883D688; }
    goto L_0883D634;
L_0883D634:;
    v0 = LD32(s1+28);
    ST32(s1+68, 0);
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0883D684; }
    goto L_0883D644;
L_0883D644:;
    v0 = LD32(s1+32);
    goto L_0883D648;
L_0883D648:;
    v1 = s0 << 2;
    s0 = s0 + 1;
    v1 = v1 + v0;
    a0 = LD32(v1);
    f0 = func_0883EF40(a0);
    goto L_0883D65C;
L_0883D65C:;
    f1 = f0;
    f0 = BITSF(LD32(s1+68));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s1+68, FBITS(f1)); goto L_0883D674; }
    goto L_0883D674;
L_0883D674:;
    v0 = LD32(s1+28);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+32); goto L_0883D648; }
    goto L_0883D684;
L_0883D684:;
    v0 = LD32(s1+36);
    goto L_0883D688;
L_0883D688:;
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0883D6C0; }
    goto L_0883D690;
L_0883D690:;
    v1 = LD32(s1+40);
    goto L_0883D694;
L_0883D694:;
    v0 = s0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a1 = LD32(a0);
    v1 = LD32(a1+12);
    t_ = v1;
    s0 = s0 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D6B0;
L_0883D6B0:;
    v0 = LD32(s1+36);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+40); goto L_0883D694; }
    goto L_0883D6C0;
L_0883D6C0:;
    v1 = LD32(s1);
    v0 = LD32(v1+56);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D6D0;
L_0883D6D0:;
    cnd_ = v0 == 0;
    if (cnd_) { f12 = BITSF(LD32(s1+64)); goto L_0883D768; }
    goto L_0883D6D8;
L_0883D6D8:;
    v0 = LD32(s1+72);
    v0 = v0 & 0x800;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_0883D7E4; }
    goto L_0883D6E8;
L_0883D6E8:;
    a0 = LD32(s1);
    goto L_0883D6EC;
L_0883D6EC:;
    v1 = 1;
    v0 = D_08B28BCC - (-29748);
    ST8(v0-29748, v1);
    a2 = sp + 0;
    a3 = 256;
    v0 = LD32(a0+84);
    a1 = LD32(s1+44);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D710;
L_0883D710:;
    a0 = sp + 0;
    a1 = 0 + 0;
    v0 = func_088DC9D0(a0, a1);
    goto L_0883D71C;
L_0883D71C:;
    a0 = v0 + 0;
    ST32(s1+56, v0);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    a2 = 1;
    if (cnd_) { goto L_0883D764; }
    goto L_0883D730;
L_0883D730:;
    a1 = 0 + 0;
    func_088DCA88(a0, a1, a2);
    goto L_0883D738;
L_0883D738:;
    a0 = s1 + 0;
    a1 = 1;
    { u64 r_ = func_0883E738(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D744;
L_0883D744:;
    v0 = 1;
    ST8(s1+152, v0);
    a0 = LD32(s1+56);
    func_088DCAD4(a0);
    goto L_0883D754;
L_0883D754:;
    v0 = LD32(s1+72);
    v0 = v0 & 0x1000;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0883D7B4; }
    goto L_0883D764;
L_0883D764:;
    f12 = BITSF(LD32(s1+64));
    goto L_0883D768;
L_0883D768:;
    f0 = BITSF(0);
    goto L_0883D76C;
L_0883D76C:;
    fcc = FCMP(f12, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_0883D7A4; }
    goto L_0883D77C;
L_0883D77C:;
    a0 = D_08B28B64 - (-29852);
    goto L_0883D780;
L_0883D780:;
    a1 = s1 + 0;
    a0 = a0 - 29852;
    { rv_t r_ = func_088465C8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D78C;
L_0883D78C:;
    sp = sp + 272;
    return (rv_t){ v0, v1, f0 };
L_0883D7A4:;
    a0 = s1 + 0;
    { rv_t r_ = func_0883DDC0(a0, 0, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D7AC;
L_0883D7AC:;
    a0 = D_08B28B64 - (-29852);
    goto L_0883D780;
L_0883D7B4:;
    a0 = LD32(s1+56);
    f0 = func_088DCCF4(a0);
    goto L_0883D7BC;
L_0883D7BC:;
    f12 = f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { f12 = BITSF(LD32(s1+64)); goto L_0883D76C; }
    goto L_0883D7D4;
L_0883D7D4:;
    a0 = s1 + 0;
    func_0883E69C(a0, f12);
    goto L_0883D7DC;
L_0883D7DC:;
    f12 = BITSF(LD32(s1+64));
    goto L_0883D768;
L_0883D7E4:;
    v0 = LD32(v1+88);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D7F0;
L_0883D7F0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0883D860; }
    goto L_0883D7F8;
L_0883D7F8:;
    a0 = 0 + 0;
    func_088D5A34(a0);
    goto L_0883D800;
L_0883D800:;
    s2 = D_08B30A34 - (2612);
    func_088E1DDC();
    goto L_0883D808;
L_0883D808:;
    v0 = LD32(s2+2612);
    s0 = LD32(v0+12);
    v0 = func_0890F1D0();
    goto L_0883D814;
L_0883D814:;
    cnd_ = s0 != v0;
    if (cnd_) { a0 = LD32(s1); goto L_0883D6EC; }
    goto L_0883D81C;
L_0883D81C:;
    v0 = func_088D7E04();
    goto L_0883D824;
L_0883D824:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1); goto L_0883D6EC; }
    goto L_0883D82C;
L_0883D82C:;
    a0 = 1;
    func_088D5A84(a0);
    goto L_0883D834;
L_0883D834:;
    func_088D5B08();
    goto L_0883D83C;
L_0883D83C:;
    v0 = LD32(s2+2612);
    s0 = LD32(v0+12);
    v0 = func_0890F1D0();
    goto L_0883D848;
L_0883D848:;
    cnd_ = s0 != v0;
    if (cnd_) { a0 = LD32(s1); goto L_0883D6EC; }
    goto L_0883D850;
L_0883D850:;
    { u64 r_ = func_088DCBD4(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D858;
L_0883D858:;
    a0 = LD32(s1);
    goto L_0883D6EC;
L_0883D860:;
    a0 = 0 + 0;
    func_088D5A34(a0);
    goto L_0883D868;
L_0883D868:;
    s2 = D_08B30A34 - (2612);
    goto L_0883D808;
L_0883D870:;
    v0 = LD32(a0);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D880;
L_0883D880:;
    v1 = LD32(s1+28);
    goto L_0883D574;
}

/* 0883D888 */
rv_t func_0883D888(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883D888:;
    sp = sp - 32;
    v0 = LD_U8(a0+128);
    cnd_ = v0 == 0;
    s3 = a0 + 0;
    if (cnd_) { goto L_0883DA3C; }
    goto L_0883D8B0;
L_0883D8B0:;
    v0 = LD32(a0+36);
    ST8(a0+128, 0);
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0883D8F0; }
    goto L_0883D8C0;
L_0883D8C0:;
    v1 = LD32(s3+40);
    goto L_0883D8C4;
L_0883D8C4:;
    v0 = s0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a1 = LD32(a0);
    v1 = LD32(a1+16);
    t_ = v1;
    s0 = s0 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D8E0;
L_0883D8E0:;
    v0 = LD32(s3+36);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s3+40); goto L_0883D8C4; }
    goto L_0883D8F0;
L_0883D8F0:;
    v0 = LD32(s3+28);
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0883D92C; }
    goto L_0883D8FC;
L_0883D8FC:;
    v1 = LD32(s3+32);
    goto L_0883D900;
L_0883D900:;
    v0 = s0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a1 = LD32(a0);
    v1 = LD32(a1+24);
    t_ = v1;
    s0 = s0 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D91C;
L_0883D91C:;
    v0 = LD32(s3+28);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s3+32); goto L_0883D900; }
    goto L_0883D92C;
L_0883D92C:;
    v1 = LD32(s3);
    v0 = LD32(v1+56);
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D93C;
L_0883D93C:;
    cnd_ = v0 == 0;
    v0 = D_08B28BCC - (-29748);
    if (cnd_) { goto L_0883D978; }
    goto L_0883D944;
L_0883D944:;
    a0 = LD32(s3+56);
    s0 = (u32)-1;
    cnd_ = a0 == s0;
    ST8(v0-29748, 0);
    if (cnd_) { goto L_0883D968; }
    goto L_0883D954;
L_0883D954:;
    { rv_t r_ = func_088DCB1C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D95C;
L_0883D95C:;
    a0 = LD32(s3+56);
    { rv_t r_ = func_088DCB5C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D964;
L_0883D964:;
    ST32(s3+56, s0);
    goto L_0883D968;
L_0883D968:;
    v0 = LD32(s3+72);
    v0 = v0 & 0x800;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0883DA78; }
    goto L_0883D978;
L_0883D978:;
    a0 = s3 + 0;
    { rv_t r_ = func_0883E2B0(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D980;
L_0883D980:;
    cnd_ = v0 == 0;
    a0 = D_08B28B64 - (-29852);
    if (cnd_) { goto L_0883D990; }
    goto L_0883D988;
L_0883D988:;
    v0 = D_08B2C1BC - (-15940);
    ST8(v0-15940, 0);
    goto L_0883D990;
L_0883D990:;
    a0 = a0 - 29852;
    a1 = s3 + 0;
    { rv_t r_ = func_08846634(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883D99C;
L_0883D99C:;
    s4 = LD32(s3+176);
    cnd_ = s4 == 0;
    if (cnd_) { goto L_0883DA40; }
    goto L_0883D9A8;
L_0883D9A8:;
    v0 = LD_U8(s4);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_0883DA44; }
    goto L_0883D9B4;
L_0883D9B4:;
    v0 = LD32(s4+20);
    f12 = BITSF(0);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0883D9D8; }
    goto L_0883D9C4;
L_0883D9C4:;
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f12 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_0883DA5C; }
    goto L_0883D9D0;
L_0883D9D0:;
    f0 = BITSF(LD32(s4+16));
    f12 = f0 / f12;
    goto L_0883D9D8;
L_0883D9D8:;
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D9E0;
L_0883D9E0:;
    f12 = BITSF(LD32(s4+12));
    s0 = v0 + 0;
    s1 = v1 + 0;
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883D9F0;
L_0883D9F0:;
    a2 = LD32(s4+20);
    t3 = LD32(s4+4);
    a0 = 1;
    a1 = a0 < a2;
    if (a1 != 0) a0 = a2;
    { u32 x_ = t3, y_ = a0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    s2 = LD32(s3+4);
    t2 = LD32(s4+8);
    a0 = D_08AD45E0 - (17888);
    t0 = v0 + 0;
    a0 = a0 + 17888;
    a1 = s2 + 0;
    a2 = s0 + 0;
    a3 = s1 + 0;
    t3 = lo;
    t1 = v1 + 0;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883DA34;
L_0883DA34:;
    v0 = LD32(s3+176);
    ST8(v0, 0);
    goto L_0883DA3C;
L_0883DA3C:;
    goto L_0883DA40;
L_0883DA40:;
    goto L_0883DA44;
L_0883DA44:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0883DA5C:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f12 = (float)(s32)FBITS(f0);
    f12 = f12 + f12;
    goto L_0883D9D0;
L_0883DA78:;
    func_088D5B08();
    goto L_0883DA80;
L_0883DA80:;
    goto L_0883D978;
}

/* 0883DA88 */
rv_t func_0883DA88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883DA88:;
    sp = sp - 16;
    v0 = 0xffff;
    a1 = LD_U16(a0+78);
    cnd_ = a1 == v0;
    v0 = D_08B2BB9C - (-17508);
    if (cnd_) { goto L_0883DAC4; }
    goto L_0883DAA0;
L_0883DAA0:;
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0883DAC8; }
    goto L_0883DAAC;
L_0883DAAC:;
    v0 = LD_U8(a0+154);
    a0 = D_08B29170 - (-28304);
    f12 = BITSF(0);
    a0 = a0 - 28304;
    cnd_ = v0 == 0;
    a2 = 999;
    if (cnd_) { goto L_0883DAD0; }
    goto L_0883DAC4;
L_0883DAC4:;
    goto L_0883DAC8;
L_0883DAC8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883DAD0:;
    { rv_t r_ = func_08879DB8(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883DAD8;
L_0883DAD8:;
    goto L_0883DAC8;
}

/* 0883DAE0 */
rv_t func_0883DAE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883DAE0:;
    sp = sp - 32;
    s1 = a0 + 0;
    v0 = (u32)-1;
    a0 = LD32(a0+56);
    cnd_ = a0 == v0;
    f21 = f12;
    if (cnd_) { goto L_0883DB28; }
    goto L_0883DB0C;
L_0883DB0C:;
    v0 = LD_U8(s1+152);
    cnd_ = v0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0883DB28; }
    goto L_0883DB18;
L_0883DB18:;
    v0 = LD_U8(s1+153);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0883DD78; }
    goto L_0883DB24;
L_0883DB24:;
    v0 = (u32)-1;
    goto L_0883DB28;
L_0883DB28:;
    cnd_ = a0 == v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0883DB38; }
    goto L_0883DB30;
L_0883DB30:;
    a1 = 0 + 0;
    { u64 r_ = func_0883E738(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883DB38;
L_0883DB38:;
    f1 = BITSF(LD32(s1+68));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    f0 = BITSF(LD32(s1+132));
    if (cnd_) { goto L_0883DB6C; }
    goto L_0883DB50;
L_0883DB50:;
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v0 = D_08B28B60 - (-29856);
    if (cnd_) { goto L_0883DB6C; }
    goto L_0883DB60;
L_0883DB60:;
    v1 = LD_U8(v0-29856);
    cnd_ = v1 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_0883DD54; }
    goto L_0883DB6C;
L_0883DB6C:;
    f3 = BITSF(0);
    fcc = FCMP(f21, f3, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f0 + f21; goto L_0883DB8C; }
    goto L_0883DB80;
L_0883DB80:;
    v0 = D_08B285A0 - (-31328);
    f21 = BITSF(LD32(v0-31328));
    f0 = f0 + f21;
    goto L_0883DB8C;
L_0883DB8C:;
    fcc = FCMP(f1, f3, 2);
    f2 = f1;
    cnd_ = fcc;
    ST32(s1+132, FBITS(f0));
    if (cnd_) { goto L_0883DC10; }
    goto L_0883DB9C;
L_0883DB9C:;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s1+36); goto L_0883DC14; }
    goto L_0883DBAC;
L_0883DBAC:;
    v0 = LD32(s1+72);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = f0 - f1; goto L_0883DD38; }
    goto L_0883DBBC;
L_0883DBBC:;
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s1); goto L_0883DBE0; }
    goto L_0883DBC4;
L_0883DBC4:;
    f0 = f0 - f2;
    goto L_0883DBC8;
L_0883DBC8:;
    fcc = FCMP(f2, f0, 14);
    cnd_ = fcc;
    if (cnd_) { f0 = f0 - f2; goto L_0883DBC8; }
    goto L_0883DBD8;
L_0883DBD8:;
    ST32(s1+132, FBITS(f0));
    v1 = LD32(s1);
    goto L_0883DBE0;
L_0883DBE0:;
    f20 = BITSF(LD32(s1+64));
    ST32(s1+64, 0);
    a0 = s1 + 0;
    v0 = LD32(v1+16);
    t_ = v0;
    f21 = BITSF(LD32(s1+132));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883DBF8;
L_0883DBF8:;
    v1 = LD32(s1);
    v0 = LD32(v1+12);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883DC08;
L_0883DC08:;
    ST32(s1+64, FBITS(f20));
    ST32(s1+132, FBITS(f21));
    goto L_0883DC10;
L_0883DC10:;
    v0 = LD32(s1+36);
    goto L_0883DC14;
L_0883DC14:;
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0883DC48; }
    goto L_0883DC1C;
L_0883DC1C:;
    v1 = LD32(s1+40);
    goto L_0883DC20;
L_0883DC20:;
    v0 = s0 << 2;
    a1 = s1 + 0;
    v0 = v0 + v1;
    a0 = LD32(v0);
    s0 = s0 + 1;
    { rv_t r_ = func_088441DC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883DC38;
L_0883DC38:;
    v0 = LD32(s1+36);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+40); goto L_0883DC20; }
    goto L_0883DC48;
L_0883DC48:;
    v0 = LD32(s1+28);
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0883DC88; }
    goto L_0883DC54;
L_0883DC54:;
    v1 = LD32(s1+32);
    goto L_0883DC58;
L_0883DC58:;
    v0 = s0 << 2;
    f12 = f21;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v0 = LD32(a0);
    v1 = LD32(v0+28);
    t_ = v1;
    s0 = s0 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883DC78;
L_0883DC78:;
    v0 = LD32(s1+28);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+32); goto L_0883DC58; }
    goto L_0883DC88;
L_0883DC88:;
    a1 = LD32(s1+176);
    cnd_ = a1 == 0;
    v0 = 1;
    if (cnd_) { goto L_0883DD18; }
    goto L_0883DC94;
L_0883DC94:;
    v0 = LD_U8(a1);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0883DD18; }
    goto L_0883DCA0;
L_0883DCA0:;
    v0 = D_08B2C1C4 - (-15932);
    a0 = v0 - 15932;
    a2 = 0 + 0;
    v1 = 10;
    goto L_0883DCB0;
L_0883DCB0:;
    v0 = LD32(a0);
    v1 = v1 - 1;
    a0 = a0 + 4;
    cnd_ = (s32)v1 >= 0;
    a2 = a2 + v0;
    if (cnd_) { goto L_0883DCB0; }
    goto L_0883DCC4;
L_0883DCC4:;
    v0 = LD32(a1+4);
    v1 = LD32(a1+8);
    v0 = v0 + a2;
    v1 = v1 < a2;
    cnd_ = v1 == 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_0883DCE0; }
    goto L_0883DCDC;
L_0883DCDC:;
    ST32(a1+8, a2);
    goto L_0883DCE0;
L_0883DCE0:;
    v0 = D_08B28594 - (-31340);
    f1 = BITSF(LD32(v0-31340));
    f0 = BITSF(LD32(a1+12));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a1+12, FBITS(f1)); goto L_0883DCFC; }
    goto L_0883DCFC;
L_0883DCFC:;
    f0 = BITSF(LD32(a1+16));
    v0 = LD32(a1+20);
    f0 = f0 + f1;
    v0 = v0 + 1;
    ST32(a1+20, v0);
    ST32(a1+16, FBITS(f0));
    v0 = 1;
    goto L_0883DD18;
L_0883DD18:;
    ST8(s1+137, v0);
    goto L_0883DD20;
L_0883DD20:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0883DD38:;
    f21 = f21 - f0;
    fcc = FCMP(f21, f3, 12);
    cnd_ = fcc;
    if (cnd_) { f21 = f3; goto L_0883DD4C; }
    goto L_0883DD4C;
L_0883DD4C:;
    ST32(s1+132, FBITS(f1));
    goto L_0883DC10;
L_0883DD54:;
    v0 = LD32(v1+16);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883DD60;
L_0883DD60:;
    v1 = LD32(s1);
    v0 = LD32(v1+28);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883DD70;
L_0883DD70:;
    goto L_0883DD20;
L_0883DD78:;
    v0 = func_088DCBA4(a0);
    goto L_0883DD80;
L_0883DD80:;
    cnd_ = v0 == 0;
    v0 = D_08B28B60 - (-29856);
    if (cnd_) { goto L_0883DD98; }
    goto L_0883DD88;
L_0883DD88:;
    v0 = LD_U8(s1+137);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0883DDB0; }
    goto L_0883DD94;
L_0883DD94:;
    v0 = D_08B28B60 - (-29856);
    goto L_0883DD98;
L_0883DD98:;
    v1 = LD_U8(v0-29856);
    cnd_ = v1 != 0;
    a0 = LD32(s1+56);
    if (cnd_) { goto L_0883DB24; }
    goto L_0883DDA4;
L_0883DDA4:;
    f21 = BITSF(0);
    v0 = (u32)-1;
    goto L_0883DB28;
L_0883DDB0:;
    a0 = LD32(s1+56);
    func_088DCAF8(a0);
    goto L_0883DDB8;
L_0883DDB8:;
    ST8(s1+152, 0);
    goto L_0883DD94;
}

/* 0883DDC0 */
rv_t func_0883DDC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883DDC0:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = LD_U8(a0+128);
    cnd_ = v0 == 0;
    f20 = f12;
    if (cnd_) { goto L_0883DE24; }
    goto L_0883DDE0;
L_0883DDE0:;
    f12 = BITSF(LD32(a0+132));
    fcc = FCMP(f20, f12, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(a0); goto L_0883DE50; }
    goto L_0883DDF4;
L_0883DDF4:;
    v1 = LD32(s0);
    f12 = f20 - f12;
    v0 = 1;
    ST8(s0+153, v0);
    v0 = LD32(v1+32);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883DE10;
L_0883DE10:;
    v1 = LD_U8(s0+154);
    f12 = BITSF(0);
    cnd_ = v1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0883DE38; }
    goto L_0883DE20;
L_0883DE20:;
    ST8(s0+153, 0);
    goto L_0883DE24;
L_0883DE24:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0883DE38:;
    v0 = LD32(s0);
    v1 = LD32(v0+32);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883DE48;
L_0883DE48:;
    ST8(s0+153, 0);
    goto L_0883DE24;
L_0883DE50:;
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883DE5C;
L_0883DE5C:;
    a1 = LD32(s0);
    v0 = LD32(a1+12);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883DE6C;
L_0883DE6C:;
    f12 = BITSF(LD32(s0+132));
    goto L_0883DDF4;
}

/* 0883DE74 */
rv_t func_0883DE74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883DE74:;
    sp = sp - 16;
    v0 = LD_U8(a0+128);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0883DEC4; }
    goto L_0883DE8C;
L_0883DE8C:;
    f1 = BITSF(LD32(a0+68));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(s0); goto L_0883DEB8; }
    goto L_0883DEA4;
L_0883DEA4:;
    v0 = LD32(a0+72);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    v0 = D_08AEB878 - (-18312);
    if (cnd_) { goto L_0883DED4; }
    goto L_0883DEB4;
L_0883DEB4:;
    v1 = LD32(s0);
    goto L_0883DEB8;
L_0883DEB8:;
    v0 = LD32(v1+16);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883DEC4;
L_0883DEC4:;
    goto L_0883DEC8;
L_0883DEC8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883DED4:;
    f12 = BITSF(LD32(v0-18312));
    f12 = f1 + f12;
    { rv_t r_ = func_0883DDC0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883DEE0;
L_0883DEE0:;
    v0 = LD_U8(s0+128);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0883DEC4; }
    goto L_0883DEEC;
L_0883DEEC:;
    v0 = LD32(s0);
    v1 = D_08AEB87C - (-18308);
    a1 = LD32(v0+32);
    t_ = a1;
    f12 = BITSF(LD32(v1-18308));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883DF00;
L_0883DF00:;
    goto L_0883DEC8;
}

/* 0883DF08 */
rv_t func_0883DF08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883DF08:;
    sp = sp - 16;
    v0 = LD_U8(a0+128);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0883DF6C; }
    goto L_0883DF24;
L_0883DF24:;
    v0 = LD_U8(a0+137);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a0); goto L_0883DF80; }
    goto L_0883DF30;
L_0883DF30:;
    v0 = LD32(s1+28);
    goto L_0883DF34;
L_0883DF34:;
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0883DF6C; }
    goto L_0883DF3C;
L_0883DF3C:;
    v1 = LD32(s1+32);
    goto L_0883DF40;
L_0883DF40:;
    v0 = s0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a1 = LD32(a0);
    v1 = LD32(a1+32);
    t_ = v1;
    s0 = s0 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883DF5C;
L_0883DF5C:;
    v0 = LD32(s1+28);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+32); goto L_0883DF40; }
    goto L_0883DF6C;
L_0883DF6C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883DF80:;
    f12 = BITSF(0);
    v0 = LD32(v1+32);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883DF90;
L_0883DF90:;
    v0 = LD32(s1+28);
    goto L_0883DF34;
}

/* 0883DF98 */
rv_t func_0883DF98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883DF98:;
    sp = sp - 16;
    v0 = LD_U8(a0+128);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0883DFFC; }
    goto L_0883DFB4;
L_0883DFB4:;
    v0 = LD_U8(a0+137);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a0); goto L_0883E010; }
    goto L_0883DFC0;
L_0883DFC0:;
    v0 = LD32(s1+28);
    goto L_0883DFC4;
L_0883DFC4:;
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0883DFFC; }
    goto L_0883DFCC;
L_0883DFCC:;
    v1 = LD32(s1+32);
    goto L_0883DFD0;
L_0883DFD0:;
    v0 = s0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a1 = LD32(a0);
    v1 = LD32(a1+36);
    t_ = v1;
    s0 = s0 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883DFEC;
L_0883DFEC:;
    v0 = LD32(s1+28);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+32); goto L_0883DFD0; }
    goto L_0883DFFC;
L_0883DFFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883E010:;
    f12 = BITSF(0);
    v0 = LD32(v1+32);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883E020;
L_0883E020:;
    v0 = LD32(s1+28);
    goto L_0883DFC4;
}

/* 0883E028 */
float func_0883E028(u32 a0, u32 a1, float f12)
{
    float f0 = 0;
L_0883E028:;
    f0 = BITSF(LD32(a0+132));
    ST32(a0+148, FBITS(f12));
    ST32(a0+140, a1);
    ST32(a0+144, FBITS(f0));
    return f0;
}

/* 0883E03C */
rv_t func_0883E03C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883E03C:;
    sp = sp - 16;
    a1 = LD32(a0+140);
    cnd_ = a1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0883E070; }
    goto L_0883E054;
L_0883E054:;
    f1 = BITSF(LD32(a0+132));
    f0 = BITSF(LD32(a0+148));
    a0 = 0x25c20000u;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = a0 | 0xaf8a;
    if (cnd_) { goto L_0883E080; }
    goto L_0883E070;
L_0883E070:;
    goto L_0883E074;
L_0883E074:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883E080:;
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883E088;
L_0883E088:;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0883E070; }
    goto L_0883E094;
L_0883E094:;
    f0 = BITSF(LD32(s0+132));
    f1 = BITSF(LD32(s0+144));
    f2 = BITSF(LD32(s0+148));
    v0 = D_08AEB884 - (-18300);
    f1 = f0 - f1;
    f2 = f2 - f0;
    fcc = FCMP(f1, f2, 14);
    cnd_ = fcc;
    f12 = BITSF(LD32(v0-18300));
    if (cnd_) { goto L_0883E0C0; }
    goto L_0883E0BC;
L_0883E0BC:;
    f1 = f2;
    goto L_0883E0C0;
L_0883E0C0:;
    v0 = D_08AEB880 - (-18304);
    f0 = BITSF(LD32(v0-18304));
    f0 = f1 * f0;
    fcc = FCMP(f12, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f12 = f0; goto L_0883E0DC; }
    goto L_0883E0DC;
L_0883E0DC:;
    v1 = LD32(s0);
    v0 = LD32(v1+44);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883E0EC;
L_0883E0EC:;
    goto L_0883E074;
}

/* 0883E0F4 */
void func_0883E0F4(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883E0F4:;
    sp = sp - 16;
    v0 = D_08AEB888 - (-18296);
    s0 = a0 + 0;
    f0 = BITSF(LD32(v0-18296));
    v0 = D_08AEB88C - (-18292);
    ST32(a0, FBITS(f0));
    f0 = BITSF(LD32(v0-18292));
    ST32(a0+8, FBITS(f0));
    f0 = func_08845B84();
    goto L_0883E120;
L_0883E120:;
    v0 = D_08AEB890 - (-18288);
    f2 = BITSF(LD32(v0-18288));
    v1 = D_08AEB894 - (-18284);
    f1 = BITSF(LD32(v1-18284));
    f0 = f2 - f0;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_0883E144; }
    goto L_0883E144;
L_0883E144:;
    ST32(s0+12, FBITS(f2));
    ST32(s0+4, FBITS(f1));
    sp = sp + 16;
    return;
}

/* 0883E15C */
rv_t func_0883E15C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0883E15C:;
    sp = sp - 48;
    a0 = sp + 0;
    s0 = a1 + 0;
    f20 = f12;
    func_0883E0F4(a0);
    goto L_0883E17C;
L_0883E17C:;
    v0 = D_08B28BC4 - (-29756);
    a0 = LD32(v0-29756);
    func_088CD5B0(a0);
    goto L_0883E188;
L_0883E188:;
    v0 = D_08AEB898 - (-18280);
    f0 = BITSF(LD32(v0-18280));
    a1 = 0xff0000u;
    f20 = f20 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    a1 = a1 | 0xffff;
    if (cnd_) { goto L_0883E204; }
    goto L_0883E1AC;
L_0883E1AC:;
    v0 = D_08AEB89C - (-18276);
    f0 = BITSF(LD32(v0-18276));
    f0 = f20 + f0;
    goto L_0883E1B8;
L_0883E1B8:;
    f0 = BITSF(F2I(f0, 1));
    f12 = BITSF(0);
    a3 = s0 + 0;
    a0 = sp + 0;
    v1 = FBITS(f0);
    a2 = 197;
    f13 = f12;
    v0 = v1 << 24;
    a1 = a1 | v0;
    v1 = D_08AEB8A0 - (-18272);
    v0 = D_08AEB8A4 - (-18268);
    f14 = BITSF(LD32(v1-18272));
    f15 = BITSF(LD32(v0-18268));
    { rv_t r_ = func_088CBE34(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883E1F0;
L_0883E1F0:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0883E204:;
    v0 = D_08AEB89C - (-18276);
    f0 = BITSF(LD32(v0-18276));
    f0 = f20 - f0;
    goto L_0883E1B8;
}

/* 0883E214 */
rv_t func_0883E214(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883E214:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0883E29C; }
    goto L_0883E22C;
L_0883E22C:;
    v0 = D_08B2BBA0 - (-17504);
    v1 = LD32(v0-17504);
    if (v1 == 0) a1 = 0;
    cnd_ = a1 == 0;
    if (cnd_) { a0 = LD32(s0+176); goto L_0883E2A0; }
    goto L_0883E240;
L_0883E240:;
    a1 = LD32(a0+176);
    cnd_ = a1 == 0;
    a0 = 24;
    if (cnd_) { goto L_0883E280; }
    goto L_0883E24C;
L_0883E24C:;
    v1 = D_08AEB8A8 - (-18264);
    goto L_0883E250;
L_0883E250:;
    f0 = BITSF(LD32(v1-18264));
    v0 = 1;
    ST32(a1+20, 0);
    ST8(a1, v0);
    ST32(a1+12, FBITS(f0));
    ST32(a1+4, 0);
    ST32(a1+8, 0);
    ST32(a1+16, 0);
    goto L_0883E270;
L_0883E270:;
    goto L_0883E274;
L_0883E274:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883E280:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883E288;
L_0883E288:;
    ST32(s0+176, v0);
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0883E270; }
    goto L_0883E294;
L_0883E294:;
    v1 = D_08AEB8A8 - (-18264);
    goto L_0883E250;
L_0883E29C:;
    a0 = LD32(s0+176);
    goto L_0883E2A0;
L_0883E2A0:;
    cnd_ = a0 != 0;
    if (cnd_) { ST8(a0, 0); goto L_0883E270; }
    goto L_0883E2A8;
L_0883E2A8:;
    goto L_0883E274;
}

/* 0883E2B0 */
rv_t func_0883E2B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883E2B0:;
    sp = sp - 16;
    v0 = D_08B28B62 - (-29854);
    v1 = LD_U8(v0-29854);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0883E2D4; }
    goto L_0883E2C8;
L_0883E2C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883E2D4:;
    { rv_t r_ = func_0883E5D8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883E2DC;
L_0883E2DC:;
    v0 = 0 < v0;
    goto L_0883E2C8;
}

/* 0883E2E4 */
rv_t func_0883E2E4(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0883E2E4:;
    f1 = BITSF(LD32(a0+68));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_0883E31C; }
    goto L_0883E2FC;
L_0883E2FC:;
    v0 = LD32(a0+72);
    fcc = FCMP(f12, f1, 12);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    a0 = 1;
    if (cnd_) { goto L_0883E31C; }
    goto L_0883E310;
L_0883E310:;
    cnd_ = !fcc;
    if (cnd_) { a0 = 0 + 0; goto L_0883E318; }
    goto L_0883E318;
L_0883E318:;
    v1 = a0 + 0;
    goto L_0883E31C;
L_0883E31C:;
    v0 = v1 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 0883E324 */
rv_t func_0883E324(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883E324:;
    sp = sp - 16;
    s1 = a0 + 0;
    a2 = LD32(a0+36);
    cnd_ = (s32)a2 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0883E374; }
    goto L_0883E348;
L_0883E348:;
    s2 = 4;
    v0 = LD32(s1+40);
    goto L_0883E350;
L_0883E350:;
    v1 = s0 << 2;
    v1 = v1 + v0;
    v1 = LD32(v1);
    v0 = LD32(v1+8);
    cnd_ = v0 == s2;
    s0 = s0 + 1;
    if (cnd_) { goto L_0883E39C; }
    goto L_0883E368;
L_0883E368:;
    v0 = (s32)s0 < (s32)a2;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+40); goto L_0883E350; }
    goto L_0883E374;
L_0883E374:;
    v1 = LD32(s1);
    v0 = LD32(v1+28);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883E384;
L_0883E384:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883E39C:;
    v0 = LD32(v1+60);
    a0 = v1 + 0;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0883E368; }
    goto L_0883E3B0;
L_0883E3B0:;
    v0 = LD32(v1);
    v1 = LD32(v0+20);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883E3C0;
L_0883E3C0:;
    a2 = LD32(s1+36);
    goto L_0883E368;
}

/* 0883E3C8 */
rv_t func_0883E3C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883E3C8:;
    sp = sp - 16;
    a0 = a2 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883E3D8;
L_0883E3D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0883E3E4 */
u32 func_0883E3E4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_0883E3E4:;
    t0 = LD32(a0+28);
    cnd_ = (s32)t0 <= 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0883E414; }
    goto L_0883E3F0;
L_0883E3F0:;
    a0 = LD32(a0+32);
    v1 = LD32(a0);
    goto L_0883E3F8;
L_0883E3F8:;
    a3 = a3 + 1;
    a2 = (s32)a3 < (s32)t0;
    v0 = LD32(v1+24);
    cnd_ = v0 == a1;
    a0 = a0 + 4;
    if (cnd_) { goto L_0883E418; }
    goto L_0883E40C;
L_0883E40C:;
    cnd_ = a2 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0883E3F8; }
    goto L_0883E414;
L_0883E414:;
    v1 = 0 + 0;
    goto L_0883E418;
L_0883E418:;
    v0 = v1 + 0;
    return v0;
}

/* 0883E420 */
u64 func_0883E420(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883E420:;
    sp = sp - 32;
    v0 = 0 + 0;
    s3 = a1 + 0;
    s1 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0883E490; }
    goto L_0883E448;
L_0883E448:;
    v0 = LD32(a0+28);
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0883E48C; }
    goto L_0883E454;
L_0883E454:;
    v0 = LD32(s1+32);
    goto L_0883E458;
L_0883E458:;
    s2 = s0 << 2;
    a0 = s3 + 0;
    v0 = s2 + v0;
    v1 = LD32(v0);
    s0 = s0 + 1;
    a1 = LD32(v1+8);
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883E474;
L_0883E474:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+32); goto L_0883E4AC; }
    goto L_0883E47C;
L_0883E47C:;
    v0 = LD32(s1+28);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+32); goto L_0883E458; }
    goto L_0883E48C;
L_0883E48C:;
    v0 = 0 + 0;
    goto L_0883E490;
L_0883E490:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_0883E4AC:;
    v0 = s2 + v0;
    v0 = LD32(v0);
    goto L_0883E490;
}

/* 0883E4B8 */
rv_t func_0883E4B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883E4B8:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0883E4FC; }
    goto L_0883E4D8;
L_0883E4D8:;
    v1 = LD32(a1);
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883E4E8;
L_0883E4E8:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0883E500; }
    goto L_0883E4F0;
L_0883E4F0:;
    v0 = LD_U8(s1+128);
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_0883E518; }
    goto L_0883E4FC;
L_0883E4FC:;
    v1 = 0 + 0;
    goto L_0883E500;
L_0883E500:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883E518:;
    ST32(s1+160, s0);
    goto L_0883E500;
}

/* 0883E520 */
rv_t func_0883E520(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883E520:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = 0 + 0;
    v0 = LD32(a0+28);
    cnd_ = (s32)v0 <= 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0883E584; }
    goto L_0883E54C;
L_0883E54C:;
    v0 = LD32(s1+32);
    goto L_0883E550;
L_0883E550:;
    s0 = s2 << 2;
    v0 = s0 + v0;
    a0 = LD32(v0);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    s2 = s2 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883E56C;
L_0883E56C:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+32); goto L_0883E5A4; }
    goto L_0883E574;
L_0883E574:;
    v0 = LD32(s1+28);
    goto L_0883E578;
L_0883E578:;
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+32); goto L_0883E550; }
    goto L_0883E584;
L_0883E584:;
    v0 = 0 + 0;
    goto L_0883E58C;
L_0883E58C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0883E5A4:;
    v0 = s0 + v0;
    v1 = LD32(v0);
    a0 = LD32(v1+8);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883E5B4;
L_0883E5B4:;
    cnd_ = v0 != s3;
    if (cnd_) { v0 = LD32(s1+28); goto L_0883E578; }
    goto L_0883E5BC;
L_0883E5BC:;
    v0 = LD32(s1+32);
    a0 = s1 + 0;
    v0 = s0 + v0;
    a1 = LD32(v0);
    { rv_t r_ = func_0883E4B8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883E5D0;
L_0883E5D0:;
    goto L_0883E58C;
}

/* 0883E5D8 */
rv_t func_0883E5D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883E5D8:;
    sp = sp - 16;
    v0 = LD32(a0+180);
    cnd_ = (s32)v0 < 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0883E608; }
    goto L_0883E5F4;
L_0883E5F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883E608:;
    v0 = LD32(a0+28);
    ST32(a0+180, 0);
    cnd_ = (s32)v0 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0883E65C; }
    goto L_0883E618;
L_0883E618:;
    v1 = LD32(s0+32);
    goto L_0883E61C;
L_0883E61C:;
    v0 = s1 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    s1 = s1 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883E638;
L_0883E638:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+28); goto L_0883E650; }
    goto L_0883E640;
L_0883E640:;
    v0 = LD32(s0+180);
    v0 = v0 + 1;
    ST32(s0+180, v0);
    v0 = LD32(s0+28);
    goto L_0883E650;
L_0883E650:;
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+32); goto L_0883E61C; }
    goto L_0883E65C;
L_0883E65C:;
    v0 = LD32(s0+180);
    goto L_0883E5F4;
}

/* 0883E664 */
rv_t func_0883E664(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883E664:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0883E2B0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883E678;
L_0883E678:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0883E688; }
    goto L_0883E680;
L_0883E680:;
    v0 = LD32(s0+72);
    a0 = (v0 >> 2) & 0x1;
    goto L_0883E688;
L_0883E688:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0883E69C */
void func_0883E69C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
L_0883E69C:;
    t0 = LD32(a0+36);
    v0 = D_08AEB8AC - (-18260);
    f5 = f12;
    f4 = BITSF(LD32(v0-18260));
    f12 = BITSF(0);
    f2 = BITSF(LD32(a0+64));
    cnd_ = (s32)t0 <= 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0883E6E8; }
    goto L_0883E6BC;
L_0883E6BC:;
    a1 = LD32(a0+40);
    t1 = 1;
    f6 = f4;
    v1 = LD32(a1);
    goto L_0883E6CC;
L_0883E6CC:;
    a2 = a2 + 1;
    a3 = (s32)a2 < (s32)t0;
    v0 = LD32(v1+8);
    cnd_ = v0 == t1;
    a1 = a1 + 4;
    if (cnd_) { goto L_0883E6FC; }
    goto L_0883E6E0;
L_0883E6E0:;
    cnd_ = a3 != 0;
    if (cnd_) { v1 = LD32(a1); goto L_0883E6CC; }
    goto L_0883E6E8;
L_0883E6E8:;
    f0 = f5 - f12;
    goto L_0883E6EC;
L_0883E6EC:;
    f0 = f0 * f4;
    f2 = f2 + f0;
    ST32(a0+68, FBITS(f2));
    return;
L_0883E6FC:;
    f1 = BITSF(LD32(v1+12));
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    f3 = f1 - f2;
    if (cnd_) { goto L_0883E720; }
    goto L_0883E710;
L_0883E710:;
    f0 = f6 / f4;
    f2 = f1;
    f0 = f3 * f0;
    f12 = f12 + f0;
    goto L_0883E720;
L_0883E720:;
    fcc = FCMP(f5, f12, 14);
    cnd_ = fcc;
    f0 = f5 - f12;
    if (cnd_) { goto L_0883E6EC; }
    goto L_0883E730;
L_0883E730:;
    f4 = BITSF(LD32(v1+72));
    goto L_0883E6E0;
}

/* 0883E738 */
u64 func_0883E738(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883E738:;
    sp = sp - 32;
    v1 = (u32)-1;
    s1 = a1 & 0xff;
    v0 = LD32(a0+56);
    cnd_ = v0 == v1;
    s0 = a0 + 0;
    if (cnd_) { goto L_0883E7B8; }
    goto L_0883E760;
L_0883E760:;
    v0 = LD32(a0);
    v1 = LD32(v0+24);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883E770;
L_0883E770:;
    f1 = BITSF(LD32(s0+60));
    a0 = 0x92930000u;
    a0 = a0 | 0x4229;
    f20 = f0 * f1;
    { u64 r_ = func_088E0698(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883E784;
L_0883E784:;
    a0 = v0 + 0;
    f0 = func_088E0858(a0);
    goto L_0883E78C;
L_0883E78C:;
    f20 = f20 * f0;
    f1 = BITSF(LD32(s0+184));
    fcc = FCMP(f20, f1, 2);
    cnd_ = !fcc;
    f12 = f20;
    if (cnd_) { goto L_0883E7AC; }
    goto L_0883E7A4;
L_0883E7A4:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_0883E7BC; }
    goto L_0883E7AC;
L_0883E7AC:;
    ST32(s0+184, FBITS(f20));
    a0 = LD32(s0+56);
    { u64 r_ = func_088DCC54(a0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883E7B8;
L_0883E7B8:;
    goto L_0883E7BC;
L_0883E7BC:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0883E7D0 */
void func_0883E7D0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
L_0883E7D0:;
    v0 = D_08AF12F0 - (4848);
    v1 = a0 + 8;
    a3 = 999;
    v0 = v0 + 4848;
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    ST32(a0, v0);
    ST32(a0+40, a1);
    ST32(a0+108, 0);
    ST32(a0+4, a2);
    ST32(a0+28, a3);
    ST32(a0+8, 0);
    ST32(a0+32, 0);
    ST32(a0+36, 0);
    ST32(a0+24, a3);
    ST8(a0+104, 0);
    ST32(a0+20, 0);
    ST32(a0+48, 0);
    ST8(a0+52, 0);
    return;
}

/* 0883E820 */
rv_t func_0883E820(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883E820:;
    v0 = D_08AF12F0 - (4848);
    v0 = v0 + 4848;
    ST32(a0, v0);
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 4;
    s0 = 0 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883E84C;
L_0883E84C:;
    a1 = LD32(s1+32);
    cnd_ = (s32)a1 <= 0;
    if (cnd_) { goto L_0883E880; }
    goto L_0883E858;
L_0883E858:;
    v1 = LD32(s1+36);
    goto L_0883E85C;
L_0883E85C:;
    v0 = s0 << 2;
    s0 = s0 + 1;
    v0 = v0 + v1;
    v0 = LD32(v0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883E8E4; }
    goto L_0883E874;
L_0883E874:;
    v0 = (s32)s0 < (s32)a1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+36); goto L_0883E85C; }
    goto L_0883E880;
L_0883E880:;
    a0 = s1 + 36;
    func_08AA72B8(a0, 0, 0, 0);
    goto L_0883E888;
L_0883E888:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883E890;
L_0883E890:;
    a0 = LD32(s1+108);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0883E8D4; }
    goto L_0883E89C;
L_0883E89C:;
    a0 = LD32(s1+8);
    cnd_ = a0 != 0;
    s0 = s1 + 8;
    if (cnd_) { goto L_0883E8C4; }
    goto L_0883E8A8;
L_0883E8A8:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883E8C4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883E8CC;
L_0883E8CC:;
    ST32(s1+8, 0);
    goto L_0883E8A8;
L_0883E8D4:;
    { rv_t r_ = func_088BA7D8(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883E8DC;
L_0883E8DC:;
    ST32(s1+108, 0);
    goto L_0883E89C;
L_0883E8E4:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883E8F4;
L_0883E8F4:;
    a1 = LD32(s1+32);
    goto L_0883E874;
}

/* 0883E8FC */
rv_t func_0883E8FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883E8FC:;
    v0 = D_08AF12F0 - (4848);
    v0 = v0 + 4848;
    ST32(a0, v0);
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 4;
    s0 = 0 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883E928;
L_0883E928:;
    a1 = LD32(s1+32);
    cnd_ = (s32)a1 <= 0;
    if (cnd_) { goto L_0883E95C; }
    goto L_0883E934;
L_0883E934:;
    v1 = LD32(s1+36);
    goto L_0883E938;
L_0883E938:;
    v0 = s0 << 2;
    s0 = s0 + 1;
    v0 = v0 + v1;
    v0 = LD32(v0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883E9C0; }
    goto L_0883E950;
L_0883E950:;
    v0 = (s32)s0 < (s32)a1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+36); goto L_0883E938; }
    goto L_0883E95C;
L_0883E95C:;
    a0 = s1 + 36;
    func_08AA72B8(a0, 0, 0, 0);
    goto L_0883E964;
L_0883E964:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883E96C;
L_0883E96C:;
    a0 = LD32(s1+108);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0883E9B0; }
    goto L_0883E978;
L_0883E978:;
    a0 = LD32(s1+8);
    cnd_ = a0 != 0;
    s0 = s1 + 8;
    if (cnd_) { goto L_0883E9A0; }
    goto L_0883E984;
L_0883E984:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883E9A0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883E9A8;
L_0883E9A8:;
    ST32(s1+8, 0);
    goto L_0883E984;
L_0883E9B0:;
    { rv_t r_ = func_088BA7D8(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883E9B8;
L_0883E9B8:;
    ST32(s1+108, 0);
    goto L_0883E978;
L_0883E9C0:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883E9D0;
L_0883E9D0:;
    a1 = LD32(s1+32);
    goto L_0883E950;
}

/* 0883E9D8 */
rv_t func_0883E9D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883E9D8:;
    v0 = D_08AF12F0 - (4848);
    v0 = v0 + 4848;
    ST32(a0, v0);
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 4;
    s0 = 0 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883EA04;
L_0883EA04:;
    a1 = LD32(s1+32);
    cnd_ = (s32)a1 <= 0;
    if (cnd_) { goto L_0883EA38; }
    goto L_0883EA10;
L_0883EA10:;
    v1 = LD32(s1+36);
    goto L_0883EA14;
L_0883EA14:;
    v0 = s0 << 2;
    s0 = s0 + 1;
    v0 = v0 + v1;
    v0 = LD32(v0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883EAA4; }
    goto L_0883EA2C;
L_0883EA2C:;
    v0 = (s32)s0 < (s32)a1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+36); goto L_0883EA14; }
    goto L_0883EA38;
L_0883EA38:;
    a0 = s1 + 36;
    func_08AA72B8(a0, 0, 0, 0);
    goto L_0883EA40;
L_0883EA40:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883EA48;
L_0883EA48:;
    a0 = LD32(s1+108);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0883EA94; }
    goto L_0883EA54;
L_0883EA54:;
    a0 = LD32(s1+8);
    cnd_ = a0 != 0;
    s0 = s1 + 8;
    if (cnd_) { goto L_0883EA84; }
    goto L_0883EA60;
L_0883EA60:;
    ST32(s0+4, 0);
    a0 = s1 + 0;
    ST32(s0+8, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883EA70;
L_0883EA70:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883EA84:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883EA8C;
L_0883EA8C:;
    ST32(s1+8, 0);
    goto L_0883EA60;
L_0883EA94:;
    { rv_t r_ = func_088BA7D8(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883EA9C;
L_0883EA9C:;
    ST32(s1+108, 0);
    goto L_0883EA54;
L_0883EAA4:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883EAB4;
L_0883EAB4:;
    a1 = LD32(s1+32);
    goto L_0883EA2C;
}

/* 0883EABC */
u32 func_0883EABC(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883EABC:;
    sp = sp - 16;
    s1 = a1 & 0xff;
    a1 = s1 + 0;
    s2 = a2 + 0;
    s0 = a0 + 0;
    v0 = func_0897A1F4(a0, a1, a2, t1, t2, t3);
    goto L_0883EAE4;
L_0883EAE4:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0883EB08; }
    goto L_0883EAEC;
L_0883EAEC:;
    goto L_0883EAF0;
L_0883EAF0:;
    goto L_0883EAF4;
L_0883EAF4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_0883EB08:;
    v0 = 1;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_0883EBC4; }
    goto L_0883EB14;
L_0883EB14:;
    v0 = (s32)s0 < 2;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_0883EB84; }
    goto L_0883EB20;
L_0883EB20:;
    cnd_ = s0 == v0;
    v0 = 3;
    if (cnd_) { goto L_0883EB58; }
    goto L_0883EB28;
L_0883EB28:;
    cnd_ = s0 != v0;
    if (cnd_) { goto L_0883EAF0; }
    goto L_0883EB30;
L_0883EB30:;
    cnd_ = s1 != 0;
    if (cnd_) {  goto L_0883EAF4; }
    goto L_0883EB38;
L_0883EB38:;
    a0 = 272;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883EB40;
L_0883EB40:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    s0 = v0 + 0;
    func_08841E64(a0, a1);
    goto L_0883EB50;
L_0883EB50:;
    v1 = s0 + 0;
    goto L_0883EAEC;
L_0883EB58:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_0883EAF0; }
    goto L_0883EB60;
L_0883EB60:;
    a0 = 160;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883EB68;
L_0883EB68:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    a2 = 2;
    s0 = v0 + 0;
    func_08840094(a0, a1, a2);
    goto L_0883EB7C;
L_0883EB7C:;
    v1 = s0 + 0;
    goto L_0883EAEC;
L_0883EB84:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_0883EAF0; }
    goto L_0883EB8C;
L_0883EB8C:;
    cnd_ = s1 != 0;
    if (cnd_) {  goto L_0883EAF4; }
    goto L_0883EB94;
L_0883EB94:;
    a0 = 180;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883EB9C;
L_0883EB9C:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    a2 = 0 + 0;
    s0 = v0 + 0;
    func_08840ECC(a0, a1, a2);
    goto L_0883EBB0;
L_0883EBB0:;
    v0 = D_08AF10E0 - (4320);
    v1 = s0 + 0;
    v0 = v0 + 4320;
    goto L_0883EBBC;
L_0883EBBC:;
    ST32(s0, v0);
    goto L_0883EAEC;
L_0883EBC4:;
    a0 = 112;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883EBCC;
L_0883EBCC:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    a2 = 1;
    s0 = v0 + 0;
    func_0883E7D0(a0, a1, a2);
    goto L_0883EBE0;
L_0883EBE0:;
    v0 = D_08AF1360 - (4960);
    v1 = s0 + 0;
    v0 = v0 + 4960;
    goto L_0883EBBC;
}

/* 0883EBF0 */
rv_t func_0883EBF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_0883EBF0:;
    sp = sp - 128;
    {float m00=1.f;float m01=0.f;float m02=0.f;float m03=0.f;float m10=0.f;float m11=1.f;float m12=0.f;float m13=0.f;float m20=0.f;float m21=0.f;float m22=1.f;float m23=0.f;float m30=0.f;float m31=0.f;float m32=0.f;float m33=1.f;v[48]=m00;v[49]=m01;v[50]=m02;v[51]=m03;v[52]=m10;v[53]=m11;v[54]=m12;v[55]=m13;v[56]=m20;v[57]=m21;v[58]=m22;v[59]=m23;v[60]=m30;v[61]=m31;v[62]=m32;v[63]=m33;}
    {a1=FBITS(v[50]);}
    f0 = BITSF(a1);
    v0 = D_08AEB8B4 - (-18252);
    f2 = BITSF(LD32(v0-18252));
    f8 = f0;
    {a1=FBITS(v[54]);}
    f9 = BITSF(a1);
    {a1=FBITS(v[58]);}
    f10 = BITSF(a1);
    {a1=FBITS(v[48]);}
    f7 = BITSF(a1);
    {a1=FBITS(v[49]);}
    f5 = BITSF(a1);
    {a1=FBITS(v[52]);}
    f6 = BITSF(a1);
    {a1=FBITS(v[53]);}
    f3 = BITSF(a1);
    {a1=FBITS(v[56]);}
    f4 = BITSF(a1);
    {a1=FBITS(v[57]);}
    f0 = BITSF(a1);
    v0 = a0 + 68;
    ST32(a0+44, 0);
    a1 = 1;
    ST32(v0+32, FBITS(f10));
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    ST32(v0+4, FBITS(f5));
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    ST32(v0+8, FBITS(f8));
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    ST32(v0+12, FBITS(f6));
    ST32(v0+16, FBITS(f3));
    ST32(v0+20, FBITS(f9));
    ST32(v0+24, FBITS(f4));
    ST32(v0+28, FBITS(f0));
    ST32(a0+68, FBITS(f7));
    ST32(a0+56, FBITS(f2));
    ST32(a0+48, 0);
    ST32(a0+64, FBITS(f2));
    ST32(a0+60, FBITS(f2));
    ST8(a0+104, 0);
    ST32(sp, FBITS(f7));
    ST32(sp+4, FBITS(f5));
    ST32(sp+8, FBITS(f8));
    ST32(sp+12, FBITS(f6));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f9));
    ST32(sp+24, FBITS(f4));
    ST32(sp+28, FBITS(f0));
    ST32(sp+32, FBITS(f10));
    { rv_t r_ = func_0883F050(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883ECCC;
L_0883ECCC:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
}

/* 0883ECD8 */
rv_t func_0883ECD8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883ECD8:;
    sp = sp - 16;
    a1 = 0 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_0883F050(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883ECF0;
L_0883ECF0:;
    v0 = LD32(s0+108);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883ED0C; }
    goto L_0883ECFC;
L_0883ECFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883ED0C:;
    { rv_t r_ = func_088BA7D8(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883ED14;
L_0883ED14:;
    ST32(s0+108, 0);
    goto L_0883ECFC;
}

/* 0883ED1C */
rv_t func_0883ED1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0883ED1C:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = LD_U8(a0+52);
    cnd_ = v0 != 0;
    f20 = f12;
    if (cnd_) { goto L_0883EE44; }
    goto L_0883ED40;
L_0883ED40:;
    a1 = LD32(s0+32);
    goto L_0883ED44;
L_0883ED44:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0883EDFC; }
    goto L_0883ED4C;
L_0883ED4C:;
    v0 = LD_U8(s0+20);
    v0 = v0 ^ 0x1;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { f12 = BITSF(LD32(s0+48)); goto L_0883EE30; }
    goto L_0883ED60;
L_0883ED60:;
    v0 = LD32(s0+44);
    a0 = LD32(s0+36);
    a2 = 0 + 0;
    v1 = v0 + 1;
    v0 = v0 << 2;
    v0 = v0 + a0;
    v1 = (s32)v1 < (s32)a1;
    cnd_ = v1 == 0;
    a0 = LD32(v0);
    if (cnd_) { goto L_0883ED88; }
    goto L_0883ED84;
L_0883ED84:;
    a2 = LD32(v0+4);
    goto L_0883ED88;
L_0883ED88:;
    v0 = LD_U8(s0+104);
    cnd_ = v0 == 0;
    if (cnd_) { f12 = BITSF(LD32(s0+48)); goto L_0883EE20; }
    goto L_0883ED94;
L_0883ED94:;
    v0 = LD32(s0+20);
    goto L_0883ED98;
L_0883ED98:;
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0883EDFC; }
    goto L_0883EDA4;
L_0883EDA4:;
    s1 = LD32(s0+108);
    cnd_ = s1 != 0;
    a1 = s0 + 56;
    if (cnd_) { goto L_0883EDE4; }
    goto L_0883EDB0;
L_0883EDB0:;
    a0 = 3;
    { rv_t r_ = func_088BA110(a0, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883EDB8;
L_0883EDB8:;
    v1 = LD32(s0);
    ST32(s0+108, v0);
    v0 = LD32(v1+96);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883EDCC;
L_0883EDCC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0883EE10; }
    goto L_0883EDD4;
L_0883EDD4:;
    s1 = LD32(s0+108);
    goto L_0883EDD8;
L_0883EDD8:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_0883EDFC; }
    goto L_0883EDE0;
L_0883EDE0:;
    a1 = s0 + 56;
    goto L_0883EDE4;
L_0883EDE4:;
    a0 = s1 + 0;
    { rv_t r_ = func_088BAB18(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883EDEC;
L_0883EDEC:;
    a0 = LD32(s0+108);
    a1 = s0 + 68;
    { rv_t r_ = func_088BAB50(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883EDF8;
L_0883EDF8:;
    goto L_0883EDFC;
L_0883EDFC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0883EE10:;
    a0 = LD32(s0+108);
    { rv_t r_ = func_088BA7D8(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883EE18;
L_0883EE18:;
    ST32(s0+108, 0);
    goto L_0883EDD8;
L_0883EE20:;
    a1 = s0 + 56;
    { rv_t r_ = func_08847A6C(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883EE28;
L_0883EE28:;
    v0 = LD32(s0+20);
    goto L_0883ED98;
L_0883EE30:;
    a0 = s0 + 0;
    f12 = f12 + f20;
    f0 = func_0883EE54(a0, f12);
    goto L_0883EE3C;
L_0883EE3C:;
    a1 = LD32(s0+32);
    goto L_0883ED60;
L_0883EE44:;
    a1 = 1;
    { rv_t r_ = func_0883F050(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883EE4C;
L_0883EE4C:;
    a1 = LD32(s0+32);
    goto L_0883ED44;
}

/* 0883EE54 */
float func_0883EE54(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0883EE54:;
    f0 = BITSF(LD32(a0+48));
    fcc = FCMP(f12, f0, 12);
    cnd_ = !fcc;
    a1 = a0 + 0;
    if (cnd_) { goto L_0883EE6C; }
    goto L_0883EE68;
L_0883EE68:;
    ST32(a0+44, 0);
    goto L_0883EE6C;
L_0883EE6C:;
    a2 = LD32(a1+44);
    a3 = LD32(a1+32);
    v0 = a2 + 1;
    v0 = (s32)v0 < (s32)a3;
    cnd_ = v0 == 0;
    ST32(a1+48, FBITS(f12));
    if (cnd_) { goto L_0883EEE8; }
    goto L_0883EE84;
L_0883EE84:;
    a0 = LD32(a1+36);
    v0 = a2 << 2;
    a0 = v0 + a0;
    v1 = LD32(a0+4);
    v0 = LD32(v1+12);
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f0, f12, 14);
    cnd_ = !fcc;
    v0 = a2 + 2;
    if (cnd_) { goto L_0883EEE8; }
    goto L_0883EEAC;
L_0883EEAC:;
    a0 = a0 + 4;
    goto L_0883EEB0;
L_0883EEB0:;
    v1 = a2 + 1;
    v0 = (s32)v0 < (s32)a3;
    a0 = a0 + 4;
    a2 = v1 + 0;
    cnd_ = v0 == 0;
    ST32(a1+44, v1);
    if (cnd_) { goto L_0883EEE8; }
    goto L_0883EEC8;
L_0883EEC8:;
    v1 = LD32(a0);
    f1 = BITSF(LD32(a1+48));
    v0 = LD32(v1+12);
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    v0 = a2 + 2;
    if (cnd_) { goto L_0883EEB0; }
    goto L_0883EEE8;
L_0883EEE8:;
    return f0;
}

/* 0883EEF0 */
rv_t func_0883EEF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883EEF0:;
    sp = sp - 16;
    a3 = a0 + 0;
    a1 = a3 + 68;
    v0 = LD32(a0+44);
    a2 = LD32(a3+32);
    a0 = LD32(a0+36);
    v1 = v0 + 1;
    v0 = v0 << 2;
    v0 = v0 + a0;
    v1 = (s32)v1 < (s32)a2;
    a0 = LD32(v0);
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0883EF2C; }
    goto L_0883EF28;
L_0883EF28:;
    a2 = LD32(v0+4);
    goto L_0883EF2C;
L_0883EF2C:;
    f12 = BITSF(LD32(a3+48));
    { rv_t r_ = func_088488F4(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883EF34;
L_0883EF34:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0883EF40 */
float func_0883EF40(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883EF40:;
    sp = sp - 16;
    f0 = BITSF(0);
    v0 = LD32(a0+32);
    cnd_ = v0 == 0;
    v1 = v0 << 2;
    if (cnd_) { goto L_0883EF68; }
    goto L_0883EF58;
L_0883EF58:;
    v0 = LD32(a0+36);
    v0 = v1 + v0;
    a0 = LD32(v0-4);
    f0 = func_08848BB8(a0);
    goto L_0883EF68;
L_0883EF68:;
    sp = sp + 16;
    return f0;
}

/* 0883EF74 */
rv_t func_0883EF74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883EF74:;
    sp = sp - 16;
    v1 = 0 + 0;
    v0 = LD32(a1+4);
    cnd_ = v0 != 0;
    s1 = a2 + 0;
    if (cnd_) { goto L_0883EFB4; }
    goto L_0883EF98;
L_0883EF98:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883EFB4:;
    a0 = LD32(a1);
    s0 = D_08B204FC - (1276);
    s2 = s0 + 1276;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883EFC4;
L_0883EFC4:;
    v1 = LD32(s0+1276);
    cnd_ = v1 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0883EFFC; }
    goto L_0883EFD0;
L_0883EFD0:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_0883EFD8;
L_0883EFD8:;
    a0 = v0 + 120;
    a2 = v0 + 116;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_0883F008; }
    goto L_0883EFF0;
L_0883EFF0:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0883EFD8; }
    goto L_0883EFFC;
L_0883EFFC:;
    a0 = LD32(s2+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0883F040; }
    goto L_0883F008;
L_0883F008:;
    cnd_ = a3 != 0;
    v1 = 1;
    if (cnd_) { goto L_0883EF98; }
    goto L_0883F010;
L_0883F010:;
    a0 = LD32(s1);
    cnd_ = a0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0883F024; }
    goto L_0883F01C;
L_0883F01C:;
    v0 = (u32)(s32)LD_S8(a0);
    v0 = v0 < 0x1u;
    goto L_0883F024;
L_0883F024:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0883EF98; }
    goto L_0883F030;
L_0883F030:;
    { rv_t r_ = func_08827B7C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F038;
L_0883F038:;
    v1 = v0 + 0;
    goto L_0883EF98;
L_0883F040:;
    a2 = 1;
    { u64 r_ = func_08AA178C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883F048;
L_0883F048:;
    a3 = v0 + 0;
    goto L_0883F008;
}

/* 0883F050 */
rv_t func_0883F050(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883F050:;
    sp = sp - 16;
    v0 = 999;
    a3 = a0 + 0;
    a2 = LD32(a0+28);
    t0 = a1 & 0xff;
    cnd_ = a2 == v0;
    ST8(a0+52, 0);
    if (cnd_) { goto L_0883F0E8; }
    goto L_0883F070;
L_0883F070:;
    v0 = LD32(a0+40);
    v1 = LD_U8(v0+76);
    cnd_ = v1 == 0;
    a0 = D_08B28E68 - (-29080);
    if (cnd_) { goto L_0883F114; }
    goto L_0883F080;
L_0883F080:;
    a0 = D_08B28EF4 - (-28940);
    v1 = a0 - 28940;
    v0 = LD32(v1+4);
    a1 = LD32(a0-28940);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0883F0D8; }
    goto L_0883F0AC;
L_0883F0AC:;
    a0 = LD32(a1);
    goto L_0883F0B0;
L_0883F0B0:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0883F0F4; }
    goto L_0883F0C8;
L_0883F0C8:;
    a1 = LD32(a1+4);
    goto L_0883F0CC;
L_0883F0CC:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0883F0B0; }
    goto L_0883F0D4;
L_0883F0D4:;
    a0 = 0 + 0;
    goto L_0883F0D8;
L_0883F0D8:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0883F0EC; }
    goto L_0883F0E0;
L_0883F0E0:;
    a1 = t0 + 0;
    { rv_t r_ = func_08864F54(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F0E8;
L_0883F0E8:;
    goto L_0883F0EC;
L_0883F0EC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883F0F4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0883F0CC; }
    goto L_0883F100;
L_0883F100:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0883F0CC; }
    goto L_0883F10C;
L_0883F10C:;
    goto L_0883F0D8;
L_0883F114:;
    v1 = a0 - 29080;
    v0 = LD32(v1+4);
    a1 = LD32(a0-29080);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0883F168; }
    goto L_0883F13C;
L_0883F13C:;
    a0 = LD32(a1);
    goto L_0883F140;
L_0883F140:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0883F194; }
    goto L_0883F158;
L_0883F158:;
    a1 = LD32(a1+4);
    goto L_0883F15C;
L_0883F15C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0883F140; }
    goto L_0883F164;
L_0883F164:;
    a0 = 0 + 0;
    goto L_0883F168;
L_0883F168:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0883F180; }
    goto L_0883F170;
L_0883F170:;
    a1 = t0 + 0;
    { rv_t r_ = func_0885E7B0(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F178;
L_0883F178:;
    goto L_0883F0EC;
L_0883F180:;
    cnd_ = t0 == 0;
    if (cnd_) { goto L_0883F0EC; }
    goto L_0883F188;
L_0883F188:;
    v0 = 1;
    ST8(a3+52, v0);
    goto L_0883F0EC;
L_0883F194:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0883F15C; }
    goto L_0883F1A0;
L_0883F1A0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0883F15C; }
    goto L_0883F1AC;
L_0883F1AC:;
    goto L_0883F168;
}

/* 0883F1B4 */
void func_0883F1B4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883F1B4:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_0883E7D0(a0, a1, a2);
    goto L_0883F1C8;
L_0883F1C8:;
    v0 = D_08AF1258 - (4696);
    v0 = v0 + 4696;
    v1 = (u32)-1;
    ST32(s0, v0);
    v0 = 1;
    ST32(s0+120, v1);
    ST32(s0+132, v0);
    ST32(s0+112, 0);
    ST32(s0+116, v1);
    ST32(s0+124, 0);
    ST32(s0+128, 0);
    ST32(s0+136, 0);
    ST32(s0+140, 0);
    ST32(s0+144, 0);
    ST8(s0+148, 0);
    sp = sp + 16;
    return;
}

/* 0883F214 */
rv_t func_0883F214(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883F214:;
    v0 = D_08AF1258 - (4696);
    v0 = v0 + 4696;
    ST32(a0, v0);
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 4;
    s0 = 0 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883F240;
L_0883F240:;
    a1 = LD32(s1+140);
    cnd_ = (s32)a1 <= 0;
    if (cnd_) { goto L_0883F274; }
    goto L_0883F24C;
L_0883F24C:;
    v1 = LD32(s1+144);
    goto L_0883F250;
L_0883F250:;
    v0 = s0 << 2;
    s0 = s0 + 1;
    v0 = v0 + v1;
    v0 = LD32(v0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883F2C0; }
    goto L_0883F268;
L_0883F268:;
    v0 = (s32)s0 < (s32)a1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+144); goto L_0883F250; }
    goto L_0883F274;
L_0883F274:;
    a0 = s1 + 144;
    func_08AA72F8(a0, 0, 0, 0);
    goto L_0883F27C;
L_0883F27C:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883F284;
L_0883F284:;
    a0 = LD32(s1+112);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0883F2AC; }
    goto L_0883F290;
L_0883F290:;
    a0 = s1 + 0;
    { rv_t r_ = func_0883E820(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F298;
L_0883F298:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883F2AC:;
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F2B8;
L_0883F2B8:;
    goto L_0883F290;
L_0883F2C0:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F2D0;
L_0883F2D0:;
    a1 = LD32(s1+140);
    goto L_0883F268;
}

/* 0883F2D8 */
rv_t func_0883F2D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883F2D8:;
    v0 = D_08AF1258 - (4696);
    v0 = v0 + 4696;
    ST32(a0, v0);
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 4;
    s0 = 0 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883F304;
L_0883F304:;
    a1 = LD32(s1+140);
    cnd_ = (s32)a1 <= 0;
    if (cnd_) { goto L_0883F338; }
    goto L_0883F310;
L_0883F310:;
    v1 = LD32(s1+144);
    goto L_0883F314;
L_0883F314:;
    v0 = s0 << 2;
    s0 = s0 + 1;
    v0 = v0 + v1;
    v0 = LD32(v0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883F384; }
    goto L_0883F32C;
L_0883F32C:;
    v0 = (s32)s0 < (s32)a1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+144); goto L_0883F314; }
    goto L_0883F338;
L_0883F338:;
    a0 = s1 + 144;
    func_08AA72F8(a0, 0, 0, 0);
    goto L_0883F340;
L_0883F340:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883F348;
L_0883F348:;
    a0 = LD32(s1+112);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0883F370; }
    goto L_0883F354;
L_0883F354:;
    a0 = s1 + 0;
    { rv_t r_ = func_0883E820(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F35C;
L_0883F35C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883F370:;
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F37C;
L_0883F37C:;
    goto L_0883F354;
L_0883F384:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F394;
L_0883F394:;
    a1 = LD32(s1+140);
    goto L_0883F32C;
}

/* 0883F39C */
rv_t func_0883F39C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883F39C:;
    v0 = D_08AF1258 - (4696);
    v0 = v0 + 4696;
    ST32(a0, v0);
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 4;
    s0 = 0 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883F3C8;
L_0883F3C8:;
    a1 = LD32(s1+140);
    cnd_ = (s32)a1 <= 0;
    if (cnd_) { goto L_0883F3FC; }
    goto L_0883F3D4;
L_0883F3D4:;
    v1 = LD32(s1+144);
    goto L_0883F3D8;
L_0883F3D8:;
    v0 = s0 << 2;
    s0 = s0 + 1;
    v0 = v0 + v1;
    v0 = LD32(v0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883F450; }
    goto L_0883F3F0;
L_0883F3F0:;
    v0 = (s32)s0 < (s32)a1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+144); goto L_0883F3D8; }
    goto L_0883F3FC;
L_0883F3FC:;
    a0 = s1 + 144;
    func_08AA72F8(a0, 0, 0, 0);
    goto L_0883F404;
L_0883F404:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883F40C;
L_0883F40C:;
    a0 = LD32(s1+112);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0883F43C; }
    goto L_0883F418;
L_0883F418:;
    a0 = s1 + 0;
    { rv_t r_ = func_0883E820(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F420;
L_0883F420:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883F428;
L_0883F428:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883F43C:;
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F448;
L_0883F448:;
    goto L_0883F418;
L_0883F450:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F460;
L_0883F460:;
    a1 = LD32(s1+140);
    goto L_0883F3F0;
}

/* 0883F468 */
rv_t func_0883F468(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883F468:;
    sp = sp - 16;
    s0 = a0 + 0;
    s2 = 0 + 0;
    { rv_t r_ = func_0883EBF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F488;
L_0883F488:;
    f12 = BITSF(0);
    v0 = LD32(s0+44);
    a0 = LD32(s0+36);
    a2 = LD32(s0+32);
    v1 = v0 + 1;
    v0 = v0 << 2;
    v0 = v0 + a0;
    v1 = (s32)v1 < (s32)a2;
    a1 = s0 + 56;
    cnd_ = v1 == 0;
    s1 = LD32(v0);
    if (cnd_) { goto L_0883F4B8; }
    goto L_0883F4B4;
L_0883F4B4:;
    s2 = LD32(v0+4);
    goto L_0883F4B8;
L_0883F4B8:;
    a0 = s1 + 0;
    a2 = s2 + 0;
    { rv_t r_ = func_08847A6C(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F4C4;
L_0883F4C4:;
    f12 = BITSF(0);
    a1 = s0 + 68;
    a0 = s1 + 0;
    a2 = s2 + 0;
    { rv_t r_ = func_088488F4(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F4D8;
L_0883F4D8:;
    ST8(s0+148, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0883F4F4 */
rv_t func_0883F4F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883F4F4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+112);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0883F528; }
    goto L_0883F510;
L_0883F510:;
    a0 = s0 + 0;
    { rv_t r_ = func_0883ECD8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F518;
L_0883F518:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883F528:;
    v0 = LD32(v0);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F538;
L_0883F538:;
    ST32(s0+112, 0);
    goto L_0883F510;
}

/* 0883F540 */
rv_t func_0883F540(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 224);
L_0883F540:;
    sp = sp - 224;
    s1 = a0 + 0;
    v0 = LD32(a0+32);
    cnd_ = v0 != 0;
    f20 = f12;
    if (cnd_) { goto L_0883F58C; }
    goto L_0883F56C;
L_0883F56C:;
    goto L_0883F570;
L_0883F570:;
    sp = sp + 224;
    return (rv_t){ v0, v1, f0 };
L_0883F58C:;
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = func_0883ED1C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F5A0;
L_0883F5A0:;
    v0 = LD_U8(s1+104);
    {u32 a_=sp+(112);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(128);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(160);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0883F870; }
    goto L_0883F5B8;
L_0883F5B8:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    v0 = LD32(v1+100);
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    t_ = v0;
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F5D8;
L_0883F5D8:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_0883F6B4; }
    goto L_0883F5E0;
L_0883F5E0:;
    v0 = LD_U8(s1+148);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_0883F6BC; }
    goto L_0883F5EC;
L_0883F5EC:;
    cnd_ = s2 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0883F6B4; }
    goto L_0883F5F4;
L_0883F5F4:;
    ST32(s2+220, v0);
    ST32(s2+224, v0);
    v1 = LD32(s1+140);
    cnd_ = (s32)v1 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0883F638; }
    goto L_0883F608;
L_0883F608:;
    v1 = LD32(s1+144);
    goto L_0883F60C;
L_0883F60C:;
    v0 = s0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v1 = LD32(a0);
    v0 = LD32(v1+36);
    t_ = v0;
    s0 = s0 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F628;
L_0883F628:;
    v1 = LD32(s1+140);
    v0 = (s32)s0 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+144); goto L_0883F60C; }
    goto L_0883F638;
L_0883F638:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_0883F648; }
    goto L_0883F640;
L_0883F640:;
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_0883F68C; }
    goto L_0883F648;
L_0883F648:;
    cnd_ = (s32)v1 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0883F56C; }
    goto L_0883F650;
L_0883F650:;
    v1 = LD32(s1+144);
    goto L_0883F654;
L_0883F654:;
    v0 = s0 << 2;
    f12 = f20;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v0 = LD32(a0);
    v1 = LD32(v0+20);
    t_ = v1;
    s0 = s0 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F674;
L_0883F674:;
    v0 = LD32(s1+140);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+144); goto L_0883F654; }
    goto L_0883F684;
L_0883F684:;
    goto L_0883F570;
L_0883F68C:;
    v0 = LD32(v1+108);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F698;
L_0883F698:;
    a1 = s1 + 56;
    a2 = s1 + 68;
    a0 = s2 + 0;
    a3 = 0x3000000u;
    { rv_t r_ = func_0880688C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F6AC;
L_0883F6AC:;
    v1 = LD32(s1+140);
    goto L_0883F648;
L_0883F6B4:;
    v1 = LD32(s1+140);
    goto L_0883F638;
L_0883F6BC:;
    a0 = s1 + 0;
    v0 = LD32(v1+108);
    t_ = v0;
    s0 = s2 + 76;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F6CC;
L_0883F6CC:;
    a1 = LD32(s2+16);
    {u32 a_=sp+(112);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(128);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = a1 == 0;
    {u32 a_=sp+(160);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0883F70C; }
    goto L_0883F6E4;
L_0883F6E4:;
    v0 = D_08B285AC - (-31316);
    s3 = LD32(v0-31316);
    v1 = LD32(s2+220);
    cnd_ = v1 == s3;
    a0 = s0 + 0;
    if (cnd_) { goto L_0883F710; }
    goto L_0883F6F8;
L_0883F6F8:;
    v0 = LD32(s0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AEB8B8 - (-18248);
    if (cnd_) { goto L_0883F84C; }
    goto L_0883F708;
L_0883F708:;
    ST32(s2+220, s3);
    goto L_0883F70C;
L_0883F70C:;
    a0 = s0 + 0;
    goto L_0883F710;
L_0883F710:;
    a1 = sp + 0;
    a2 = 0 + 0;
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = func_08816684(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F72C;
L_0883F72C:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0883F5EC; }
    goto L_0883F738;
L_0883F738:;
    v0 = LD32(s1+44);
    v1 = LD32(s1+36);
    f12 = BITSF(LD32(s1+48));
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    f0 = func_08848C1C(a0, f12);
    goto L_0883F754;
L_0883F754:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    {u32 a_=sp+(160);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0883F5EC; }
    goto L_0883F768;
L_0883F768:;
    a0 = s1 + 68;
    a2 = s1 + 56;
    a1 = LD32(a0+4);
    v1 = LD32(a0+8);
    v0 = LD32(s1+68);
    f5 = BITSF(LD32(s1+56));
    f6 = BITSF(LD32(a2+4));
    f4 = BITSF(LD32(a2+8));
    {u32 a_=sp+(64);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(v0);}
    {u32 a_=sp+(80);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    v0 = LD32(a0+16);
    {v[49]=BITSF(a1);}
    {u32 a_=sp+(96);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    a1 = LD32(a0+32);
    {v[50]=BITSF(v1);}
    {u32 a_=sp+(48);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v1 = LD32(a0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[16]=BITSF(v1);}
    v1 = LD32(a0+20);
    {v[17]=BITSF(v0);}
    v0 = LD32(a0+24);
    {v[18]=BITSF(v1);}
    {v[32]=BITSF(v0);}
    v1 = LD32(a0+28);
    v0 = LD32(sp+4);
    {v[33]=BITSF(v1);}
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(sp);
    {v[34]=BITSF(a1);}
    {v[20]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[21]=BITSF(v0);}
    v1 = LD32(sp+8);
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f0 = BITSF(v0);
    f5 = f5 + f2;
    f4 = f4 + f3;
    f6 = f6 + f0;
    ST32(sp+32, FBITS(f2));
    ST32(a2+8, FBITS(f4));
    ST32(a2+4, FBITS(f6));
    ST32(s1+56, FBITS(f5));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    goto L_0883F5EC;
L_0883F84C:;
    f12 = BITSF(LD32(v0-18248));
    a0 = s0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_088155D0(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F85C;
L_0883F85C:;
    {u32 a_=sp+(160);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(128);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(112);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    goto L_0883F708;
L_0883F870:;
    v1 = LD32(s1);
    v0 = LD32(v1+68);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883F880;
L_0883F880:;
    {u32 a_=sp+(160);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(128);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(112);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    goto L_0883F5B8;
}

/* 0883F894 */
rv_t func_0883F894(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883F894:;
    sp = sp - 16;
    v0 = (u32)-1;
    a1 = LD32(a0+120);
    cnd_ = a1 == v0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0883F974; }
    goto L_0883F8B8;
L_0883F8B8:;
    a2 = LD32(a0+40);
    cnd_ = (s32)a1 < 0;
    s2 = a2 + 104;
    if (cnd_) { goto L_0883F914; }
    goto L_0883F8C4;
L_0883F8C4:;
    v0 = LD32(s2+8);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    v0 = a1 << 1;
    if (cnd_) { goto L_0883F914; }
    goto L_0883F8D4;
L_0883F8D4:;
    a0 = LD32(a2+104);
    v0 = v0 + a1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0883F914; }
    goto L_0883F8F0;
L_0883F8F0:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0883FAC8; }
    goto L_0883F8FC;
L_0883F8FC:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    v0 = LD32(s2+4);
    v0 = v0 - 1;
    ST32(s2+4, v0);
    a1 = LD32(s1+120);
    goto L_0883F914;
L_0883F914:;
    cnd_ = (s32)a1 < 0;
    s2 = a2 + 116;
    if (cnd_) { goto L_0883F96C; }
    goto L_0883F91C;
L_0883F91C:;
    v0 = LD32(s2+8);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0883F970; }
    goto L_0883F92C;
L_0883F92C:;
    v0 = LD32(a2+116);
    v1 = a1 << 1;
    v1 = v1 + a1;
    v1 = v1 << 2;
    s0 = v0 + v1;
    a0 = LD32(s0+8);
    cnd_ = a0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0883F970; }
    goto L_0883F94C;
L_0883F94C:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0883FAB8; }
    goto L_0883F958;
L_0883F958:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    v0 = LD32(s2+4);
    v0 = v0 - 1;
    ST32(s2+4, v0);
    goto L_0883F96C;
L_0883F96C:;
    v0 = (u32)-1;
    goto L_0883F970;
L_0883F970:;
    ST32(s1+120, v0);
    goto L_0883F974;
L_0883F974:;
    a1 = LD32(s1+116);
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    if (cnd_) { v0 = LD32(s1+140); goto L_0883FA44; }
    goto L_0883F984;
L_0883F984:;
    a2 = LD32(s1+40);
    cnd_ = (s32)a1 < 0;
    s2 = a2 + 80;
    if (cnd_) { goto L_0883F9E0; }
    goto L_0883F990;
L_0883F990:;
    v0 = LD32(s2+8);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    v0 = a1 << 1;
    if (cnd_) { goto L_0883F9E0; }
    goto L_0883F9A0;
L_0883F9A0:;
    a0 = LD32(a2+80);
    v0 = v0 + a1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0883F9E0; }
    goto L_0883F9BC;
L_0883F9BC:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0883FAA4; }
    goto L_0883F9C8;
L_0883F9C8:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    v0 = LD32(s2+4);
    v0 = v0 - 1;
    ST32(s2+4, v0);
    a1 = LD32(s1+116);
    goto L_0883F9E0;
L_0883F9E0:;
    cnd_ = (s32)a1 < 0;
    s2 = a2 + 92;
    if (cnd_) { goto L_0883FA38; }
    goto L_0883F9E8;
L_0883F9E8:;
    v0 = LD32(s2+8);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0883FA3C; }
    goto L_0883F9F8;
L_0883F9F8:;
    v0 = LD32(a2+92);
    v1 = a1 << 1;
    v1 = v1 + a1;
    v1 = v1 << 2;
    s0 = v0 + v1;
    a0 = LD32(s0+8);
    cnd_ = a0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0883FA3C; }
    goto L_0883FA18;
L_0883FA18:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0883FA94; }
    goto L_0883FA24;
L_0883FA24:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    v0 = LD32(s2+4);
    v0 = v0 - 1;
    ST32(s2+4, v0);
    goto L_0883FA38;
L_0883FA38:;
    v0 = (u32)-1;
    goto L_0883FA3C;
L_0883FA3C:;
    ST32(s1+116, v0);
    v0 = LD32(s1+140);
    goto L_0883FA44;
L_0883FA44:;
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0883FA7C; }
    goto L_0883FA4C;
L_0883FA4C:;
    v1 = LD32(s1+144);
    goto L_0883FA50;
L_0883FA50:;
    v0 = s0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a1 = LD32(a0);
    v1 = LD32(a1+32);
    t_ = v1;
    s0 = s0 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883FA6C;
L_0883FA6C:;
    v0 = LD32(s1+140);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+144); goto L_0883FA50; }
    goto L_0883FA7C;
L_0883FA7C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883FA94:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883FA9C;
L_0883FA9C:;
    ST32(s0, 0);
    goto L_0883FA24;
L_0883FAA4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883FAAC;
L_0883FAAC:;
    ST32(s0, 0);
    a2 = LD32(s1+40);
    goto L_0883F9C8;
L_0883FAB8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883FAC0;
L_0883FAC0:;
    ST32(s0, 0);
    goto L_0883F958;
L_0883FAC8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883FAD0;
L_0883FAD0:;
    ST32(s0, 0);
    a2 = LD32(s1+40);
    goto L_0883F8FC;
}

/* 0883FADC */
rv_t func_0883FADC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[240] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 240);
L_0883FADC:;
    sp = sp - 240;
    s0 = a0 + 0;
    v0 = (u32)-1;
    a0 = LD32(a0+116);
    cnd_ = a0 == v0;
    if (cnd_) {  goto L_0883FB48; }
    goto L_0883FB08;
L_0883FB08:;
    a1 = LD32(s0+40);
    cnd_ = (s32)a0 < 0;
    v1 = a1 + 80;
    if (cnd_) { goto L_0883FD58; }
    goto L_0883FB14;
L_0883FB14:;
    v0 = LD32(v1+8);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(v1); goto L_0883FB38; }
    goto L_0883FB24;
L_0883FB24:;
    v1 = LD32(a1+80);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    s1 = v1 + v0;
    goto L_0883FB38;
L_0883FB38:;
    v0 = LD32(s1+4);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1); goto L_0883FB60; }
    goto L_0883FB44;
L_0883FB44:;
    goto L_0883FB48;
L_0883FB48:;
    sp = sp + 240;
    return (rv_t){ v0, v1, f0 };
L_0883FB60:;
    s3 = D_08B204FC - (1276);
    a0 = s3 + 1276;
    { u64 r_ = func_088058B4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883FB6C;
L_0883FB6C:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s0+40); goto L_0883FC08; }
    goto L_0883FB74;
L_0883FB74:;
    a0 = LD32(s0+120);
    goto L_0883FB78;
L_0883FB78:;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_0883FB48; }
    goto L_0883FB84;
L_0883FB84:;
    a2 = LD32(s0+40);
    cnd_ = (s32)a0 < 0;
    v1 = a2 + 104;
    if (cnd_) { goto L_0883FC00; }
    goto L_0883FB90;
L_0883FB90:;
    v0 = LD32(v1+8);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(v1); goto L_0883FBB4; }
    goto L_0883FBA0;
L_0883FBA0:;
    v0 = a0 << 1;
    v1 = LD32(a2+104);
    v0 = v0 + a0;
    v0 = v0 << 2;
    a1 = v1 + v0;
    goto L_0883FBB4;
L_0883FBB4:;
    cnd_ = (s32)a0 < 0;
    v1 = a2 + 116;
    if (cnd_) { goto L_0883FBF8; }
    goto L_0883FBBC;
L_0883FBBC:;
    v0 = LD32(v1+8);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(v1); goto L_0883FBE0; }
    goto L_0883FBCC;
L_0883FBCC:;
    v1 = LD32(a2+116);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    a2 = v1 + v0;
    goto L_0883FBE0;
L_0883FBE0:;
    v1 = LD32(s0);
    v0 = LD32(v1+72);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883FBF0;
L_0883FBF0:;
    goto L_0883FB48;
L_0883FBF8:;
    a2 = LD32(v1);
    goto L_0883FBE0;
L_0883FC00:;
    a1 = LD32(v1);
    goto L_0883FBB4;
L_0883FC08:;
    a0 = LD32(s0+116);
    cnd_ = (s32)a0 < 0;
    v1 = a1 + 92;
    if (cnd_) { goto L_0883FD50; }
    goto L_0883FC14;
L_0883FC14:;
    v0 = LD32(v1+8);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = LD32(v1); goto L_0883FC38; }
    goto L_0883FC24;
L_0883FC24:;
    v1 = LD32(a1+92);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    s2 = v1 + v0;
    goto L_0883FC38;
L_0883FC38:;
    a0 = LD32(s2);
    cnd_ = a0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0883FC4C; }
    goto L_0883FC44;
L_0883FC44:;
    v0 = (u32)(s32)LD_S8(a0);
    v0 = v0 < 0x1u;
    goto L_0883FC4C;
L_0883FC4C:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    if (cnd_) { t0 = LD32(s1); goto L_0883FC68; }
    goto L_0883FC58;
L_0883FC58:;
    { rv_t r_ = func_08827B7C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883FC60;
L_0883FC60:;
    a0 = LD32(s0+120);
    goto L_0883FB78;
L_0883FC68:;
    a1 = D_08AD4638 - (17976);
    a0 = sp + 0;
    a1 = a1 + 17976;
    a2 = 200;
    a3 = 1;
    t1 = t0 + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883FC84;
L_0883FC84:;
    a0 = sp + 0;
    { rv_t r_ = func_08827B7C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883FC8C;
L_0883FC8C:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1); goto L_0883FCA8; }
    goto L_0883FC94;
L_0883FC94:;
    v1 = LD32(s0+40);
    v0 = LD32(v1+20);
    cnd_ = v0 != 0;
    if (cnd_) { t0 = LD32(v1+16); goto L_0883FD24; }
    goto L_0883FCA4;
L_0883FCA4:;
    a1 = LD32(s1);
    goto L_0883FCA8;
L_0883FCA8:;
    a0 = s3 + 1276;
    { u64 r_ = func_088058B4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883FCB0;
L_0883FCB0:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+120); goto L_0883FB78; }
    goto L_0883FCB8;
L_0883FCB8:;
    a0 = LD32(s2);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s2+8, 0); goto L_0883FCDC; }
    goto L_0883FCC4;
L_0883FCC4:;
    cnd_ = sp == a0;
    if (cnd_) { a0 = LD32(s0+120); goto L_0883FB78; }
    goto L_0883FCCC;
L_0883FCCC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883FCD4;
L_0883FCD4:;
    ST32(s2, 0);
    ST32(s2+8, 0);
    goto L_0883FCDC;
L_0883FCDC:;
    a0 = sp + 0;
    ST32(s2+4, 0);
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883FCE8;
L_0883FCE8:;
    v1 = v0 + 1;
    ST32(s2+4, v0);
    a0 = v1 + 0;
    ST32(s2+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883FCFC;
L_0883FCFC:;
    cnd_ = v0 != 0;
    ST32(s2, v0);
    if (cnd_) { goto L_0883FD10; }
    goto L_0883FD04;
L_0883FD04:;
    ST32(s2+4, 0);
    ST32(s2+8, 0);
    goto L_0883FB74;
L_0883FD10:;
    a0 = v0 + 0;
    a1 = sp + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883FD1C;
L_0883FD1C:;
    a0 = LD32(s0+120);
    goto L_0883FB78;
L_0883FD24:;
    t1 = LD32(s1);
    a1 = D_08AD4650 - (18000);
    a0 = sp + 0;
    a1 = a1 + 18000;
    a2 = 200;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883FD40;
L_0883FD40:;
    a0 = sp + 0;
    { rv_t r_ = func_08827B7C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883FD48;
L_0883FD48:;
    a1 = LD32(s1);
    goto L_0883FCA8;
L_0883FD50:;
    s2 = LD32(v1);
    goto L_0883FC38;
L_0883FD58:;
    s1 = LD32(v1);
    goto L_0883FB38;
}

/* 0883FD60 */
rv_t func_0883FD60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 224);
L_0883FD60:;
    sp = sp - 224;
    a3 = 0 + 0;
    s2 = a2 + 0;
    s1 = a0 + 0;
    v0 = LD32(a1+4);
    cnd_ = v0 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_0883FDA8; }
    goto L_0883FD8C;
L_0883FD8C:;
    v0 = a3 + 0;
    sp = sp + 224;
    return (rv_t){ v0, v1, f0 };
L_0883FDA8:;
    { rv_t r_ = func_0883EF74(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883FDB0;
L_0883FDB0:;
    cnd_ = v0 != 0;
    a3 = 1;
    if (cnd_) { goto L_0883FD8C; }
    goto L_0883FDB8;
L_0883FDB8:;
    a1 = LD32(s1+40);
    a0 = LD32(s1+116);
    cnd_ = (s32)a0 < 0;
    v1 = a1 + 80;
    if (cnd_) { goto L_0883FEF8; }
    goto L_0883FDC8;
L_0883FDC8:;
    v0 = LD32(v1+8);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(v1); goto L_0883FDEC; }
    goto L_0883FDD8;
L_0883FDD8:;
    v1 = LD32(a1+80);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v1 = v1 + v0;
    goto L_0883FDEC;
L_0883FDEC:;
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0883FD8C; }
    goto L_0883FDF8;
L_0883FDF8:;
    t0 = LD32(v1);
    t1 = LD32(s0);
    a1 = D_08AD466C - (18028);
    a0 = sp + 0;
    a1 = a1 + 18028;
    a2 = 200;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883FE18;
L_0883FE18:;
    a0 = sp + 0;
    { rv_t r_ = func_08827B7C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883FE20;
L_0883FE20:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0883FE38; }
    goto L_0883FE28;
L_0883FE28:;
    a0 = LD32(s1+40);
    v0 = LD32(a0+20);
    cnd_ = v0 != 0;
    if (cnd_) { t0 = LD32(a0+16); goto L_0883FECC; }
    goto L_0883FE38;
L_0883FE38:;
    a0 = LD32(s0);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883FE40;
L_0883FE40:;
    a0 = D_08B204FC - (1276);
    a0 = a0 + 1276;
    a1 = v0 + 0;
    a2 = 1;
    { u64 r_ = func_08AA178C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883FE54;
L_0883FE54:;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0883FD8C; }
    goto L_0883FE5C;
L_0883FE5C:;
    a0 = LD32(s2);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s2+8, 0); goto L_0883FE80; }
    goto L_0883FE68;
L_0883FE68:;
    cnd_ = sp == a0;
    a3 = 1;
    if (cnd_) { goto L_0883FD8C; }
    goto L_0883FE70;
L_0883FE70:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883FE78;
L_0883FE78:;
    ST32(s2, 0);
    ST32(s2+8, 0);
    goto L_0883FE80;
L_0883FE80:;
    a0 = sp + 0;
    ST32(s2+4, 0);
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883FE8C;
L_0883FE8C:;
    v1 = v0 + 1;
    ST32(s2+4, v0);
    a0 = v1 + 0;
    ST32(s2+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883FEA0;
L_0883FEA0:;
    cnd_ = v0 != 0;
    ST32(s2, v0);
    if (cnd_) { goto L_0883FEB8; }
    goto L_0883FEA8;
L_0883FEA8:;
    ST32(s2+4, 0);
    ST32(s2+8, 0);
    a3 = 1;
    goto L_0883FD8C;
L_0883FEB8:;
    a0 = v0 + 0;
    a1 = sp + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0883FEC4;
L_0883FEC4:;
    a3 = 1;
    goto L_0883FD8C;
L_0883FECC:;
    t1 = LD32(s0);
    a1 = D_08AD4688 - (18056);
    a0 = sp + 0;
    a1 = a1 + 18056;
    a2 = 200;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883FEE8;
L_0883FEE8:;
    a0 = sp + 0;
    { rv_t r_ = func_08827B7C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883FEF0;
L_0883FEF0:;
    goto L_0883FE38;
L_0883FEF8:;
    v1 = LD32(v1);
    goto L_0883FDEC;
}

/* 0883FF00 */
rv_t func_0883FF00(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883FF00:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    t1 = LD32(a0+140);
    cnd_ = (s32)t1 <= 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_0883FF3C; }
    goto L_0883FF18;
L_0883FF18:;
    a0 = LD32(a0+144);
    a3 = LD32(a0);
    goto L_0883FF20;
L_0883FF20:;
    t0 = t0 + 1;
    v1 = (s32)t0 < (s32)t1;
    v0 = LD32(a3+36);
    cnd_ = v0 == a1;
    a0 = a0 + 4;
    if (cnd_) { goto L_0883FF48; }
    goto L_0883FF34;
L_0883FF34:;
    cnd_ = v1 != 0;
    if (cnd_) { a3 = LD32(a0); goto L_0883FF20; }
    goto L_0883FF3C;
L_0883FF3C:;
    goto L_0883FF40;
L_0883FF40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883FF48:;
    a0 = a3 + 0;
    a1 = a2 + 0;
    { rv_t r_ = func_088425A8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883FF54;
L_0883FF54:;
    goto L_0883FF40;
}

/* 0883FF5C */
rv_t func_0883FF5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0883FF5C:;
    sp = sp - 16;
    v1 = 0 + 0;
    v0 = LD32(a0+108);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0883FF94; }
    goto L_0883FF7C;
L_0883FF7C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0883FF94:;
    v1 = LD32(a0);
    v0 = LD32(v1+100);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883FFA4;
L_0883FFA4:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0883FFB4; }
    goto L_0883FFAC;
L_0883FFAC:;
    v1 = 0 + 0;
    goto L_0883FF7C;
L_0883FFB4:;
    v1 = LD32(s1);
    v0 = LD32(v1+100);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883FFC4;
L_0883FFC4:;
    v1 = LD32(v0+16);
    cnd_ = v1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0883FFAC; }
    goto L_0883FFD0;
L_0883FFD0:;
    v1 = LD32(s1);
    v0 = LD32(v1+100);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0883FFE0;
L_0883FFE0:;
    a0 = LD32(v0+16);
    v0 = func_08817BF8(a0);
    goto L_0883FFE8;
L_0883FFE8:;
    cnd_ = v0 == 0;
    a0 = 40;
    if (cnd_) { goto L_08840020; }
    goto L_0883FFF0;
L_0883FFF0:;
    v1 = LD32(s1);
    v0 = LD32(v1+100);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08840000;
L_08840000:;
    a0 = LD32(v0+16);
    v0 = func_08817BF8(a0);
    goto L_08840008;
L_08840008:;
    a0 = LD32(s1+108);
    a1 = v0 + 0;
    goto L_08840010;
L_08840010:;
    { rv_t r_ = func_088BAEB8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08840018;
L_08840018:;
    v1 = 1;
    goto L_0883FF7C;
L_08840020:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08840028;
L_08840028:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+100);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884003C;
L_0884003C:;
    a0 = LD32(v0+16);
    v0 = func_08817C00(a0);
    goto L_08840044;
L_08840044:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    func_0884B4EC(a0, a1);
    goto L_08840050;
L_08840050:;
    ST32(s1+112, s0);
    a1 = s0 + 0;
    a0 = LD32(s1+108);
    goto L_08840010;
}

/* 08840060 */
void func_08840060(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08840060:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_0883F1B4(a0, a1, a2);
    goto L_08840074;
L_08840074:;
    v0 = D_08AF11C0 - (4544);
    v0 = v0 + 4544;
    ST32(s0, v0);
    ST32(s0+152, 0);
    sp = sp + 16;
    return;
}

/* 08840094 */
void func_08840094(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08840094:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_0883F1B4(a0, a1, a2);
    goto L_088400A8;
L_088400A8:;
    v0 = D_08AF11C0 - (4544);
    v0 = v0 + 4544;
    ST32(s0, v0);
    ST32(s0+152, 0);
    sp = sp + 16;
    return;
}

/* 088400C8 */
rv_t func_088400C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088400C8:;
    sp = sp - 16;
    s2 = a0 + 0;
    { rv_t r_ = func_0883F468(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088400E4;
L_088400E4:;
    v0 = (u32)-1;
    a0 = LD32(s2+116);
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088401A4; }
    goto L_088400F4;
L_088400F4:;
    a1 = LD32(s2+40);
    cnd_ = (s32)a0 < 0;
    v1 = a1 + 80;
    if (cnd_) { goto L_0884022C; }
    goto L_08840100;
L_08840100:;
    v0 = LD32(v1+8);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(v1); goto L_08840124; }
    goto L_08840110;
L_08840110:;
    v1 = LD32(a1+80);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    s1 = v1 + v0;
    goto L_08840124;
L_08840124:;
    v0 = LD32(s1+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088401A4; }
    goto L_08840130;
L_08840130:;
    v1 = LD32(s2+152);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0884020C; }
    goto L_0884013C;
L_0884013C:;
    a0 = LD32(s2+136);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088401F8; }
    goto L_08840148;
L_08840148:;
    v1 = LD32(s2+152);
    goto L_0884014C;
L_0884014C:;
    a1 = LD32(s2+120);
    v0 = 1;
    ST8(v1+12, v0);
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    ST32(s2+156, 0);
    if (cnd_) { goto L_088401A0; }
    goto L_08840164;
L_08840164:;
    a0 = LD32(s2+40);
    cnd_ = (s32)a1 < 0;
    v1 = a0 + 104;
    if (cnd_) { goto L_088401F0; }
    goto L_08840170;
L_08840170:;
    v0 = LD32(v1+8);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(v1); goto L_08840194; }
    goto L_08840180;
L_08840180:;
    v1 = LD32(a0+104);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v1 = v1 + v0;
    goto L_08840194;
L_08840194:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088401B8; }
    goto L_088401A0;
L_088401A0:;
    goto L_088401A4;
L_088401A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088401B8:;
    a0 = LD32(v1);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088401C0;
L_088401C0:;
    a0 = LD32(s2+152);
    a2 = LD32(s2+124);
    f12 = BITSF(0);
    f13 = BITSF(LD32(s2+128));
    a0 = a0 + 4;
    a2 = (a2 & ~(0x3u << 30)) | ((0 & 0x3) << 30);
    a1 = v0 + 0;
    { rv_t r_ = func_0880D060(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088401E0;
L_088401E0:;
    v1 = LD32(s2+124);
    v1 = (v1 >> 30) & 0x1;
    ST8(s2+148, v1);
    goto L_088401A0;
L_088401F0:;
    v1 = LD32(v1);
    goto L_08840194;
L_088401F8:;
    { u64 r_ = func_0883A8BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08840200;
L_08840200:;
    v1 = LD32(s2+152);
    ST32(v1+252, v0);
    goto L_0884014C;
L_0884020C:;
    a0 = 372;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08840214;
L_08840214:;
    a1 = LD32(s1);
    s0 = v0 + 0;
    a0 = v0 + 0;
    f0 = func_088059F4(a0, a1);
    goto L_08840224;
L_08840224:;
    ST32(s2+152, s0);
    goto L_0884013C;
L_0884022C:;
    s1 = LD32(v1);
    goto L_08840124;
}

/* 08840234 */
rv_t func_08840234(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08840234:;
    sp = sp - 16;
    s1 = 0 + 0;
    v0 = LD32(a0+140);
    cnd_ = (s32)v0 <= 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08840284; }
    goto L_08840254;
L_08840254:;
    v1 = LD32(s0+144);
    goto L_08840258;
L_08840258:;
    v0 = s1 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a1 = LD32(a0);
    v1 = LD32(a1+12);
    t_ = v1;
    s1 = s1 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08840274;
L_08840274:;
    v0 = LD32(s0+140);
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+144); goto L_08840258; }
    goto L_08840284;
L_08840284:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08840298 */
rv_t func_08840298(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08840298:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = 0 + 0;
    { rv_t r_ = func_0883F4F4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088402B4;
L_088402B4:;
    v0 = LD32(s1+140);
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { a0 = LD32(s1+152); goto L_088402F4; }
    goto L_088402C0;
L_088402C0:;
    v1 = LD32(s1+144);
    goto L_088402C4;
L_088402C4:;
    v0 = s0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a1 = LD32(a0);
    v1 = LD32(a1+16);
    t_ = v1;
    s0 = s0 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088402E0;
L_088402E0:;
    v0 = LD32(s1+140);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+144); goto L_088402C4; }
    goto L_088402F0;
L_088402F0:;
    a0 = LD32(s1+152);
    goto L_088402F4;
L_088402F4:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08840314; }
    goto L_088402FC;
L_088402FC:;
    ST32(s1+152, 0);
    goto L_08840300;
L_08840300:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08840314:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08840320;
L_08840320:;
    ST32(s1+152, 0);
    goto L_08840300;
}

/* 08840328 */
rv_t func_08840328(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08840328:;
    sp = sp - 16;
    v0 = LD32(a0+32);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08840378; }
    goto L_08840340;
L_08840340:;
    v0 = D_08B28B61 - (-29855);
    v1 = LD_U8(v0-29855);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_0884037C; }
    goto L_08840350;
L_08840350:;
    v0 = LD32(a0+152);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08840380; }
    goto L_0884035C;
L_0884035C:;
    v0 = LD32(a0+40);
    f1 = BITSF(LD32(a0+156));
    f0 = BITSF(LD32(v0+132));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(a0+44); goto L_08840388; }
    goto L_08840378;
L_08840378:;
    goto L_0884037C;
L_0884037C:;
    goto L_08840380;
L_08840380:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08840388:;
    v1 = LD32(a0+36);
    f12 = BITSF(LD32(a0+48));
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    f0 = func_08848C1C(a0, f12);
    goto L_088403A0;
L_088403A0:;
    f1 = BITSF(0);
    f12 = f0;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    a1 = 0 + 0;
    if (cnd_) { goto L_088403E4; }
    goto L_088403B8;
L_088403B8:;
    v0 = LD32(s0+40);
    goto L_088403BC;
L_088403BC:;
    f0 = BITSF(LD32(s0+156));
    a0 = LD32(s0+152);
    f12 = BITSF(LD32(v0+132));
    a1 = 1;
    f12 = f12 - f0;
    { rv_t r_ = func_08806C1C(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088403D4;
L_088403D4:;
    v0 = LD32(s0+40);
    f0 = BITSF(LD32(v0+132));
    ST32(s0+156, FBITS(f0));
    goto L_08840378;
L_088403E4:;
    a0 = LD32(s0+152);
    a0 = a0 + 4;
    func_0880D42C(a0, a1, f12);
    goto L_088403F0;
L_088403F0:;
    v0 = LD32(s0+40);
    goto L_088403BC;
}

/* 088403F8 */
rv_t func_088403F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088403F8:;
    sp = sp - 16;
    v0 = LD_U8(a0+104);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0884050C; }
    goto L_08840418;
L_08840418:;
    v0 = LD32(a0+32);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08840510; }
    goto L_08840424;
L_08840424:;
    v0 = D_08B28B61 - (-29855);
    v1 = LD_U8(v0-29855);
    cnd_ = v1 != 0;
    if (cnd_) {  goto L_08840510; }
    goto L_08840434;
L_08840434:;
    v0 = LD32(a0+152);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08840510; }
    goto L_08840440;
L_08840440:;
    a1 = LD32(a0+40);
    f1 = BITSF(LD32(a0+156));
    f0 = BITSF(LD32(a1+132));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(a0+44); goto L_08840524; }
    goto L_0884045C;
L_0884045C:;
    v0 = LD32(a1+72);
    a2 = LD32(s0+132);
    s2 = 0x1000000u;
    v0 = v0 & 0x10;
    v1 = 0x21000000u;
    a0 = a2 & 0x1;
    cnd_ = a0 == 0;
    if (v0 != 0) s2 = v1;
    if (cnd_) { goto L_08840484; }
    goto L_0884047C;
L_0884047C:;
    v0 = 0x40000000u;
    s2 = s2 | v0;
    goto L_08840484;
L_08840484:;
    v0 = a2 & 0x2;
    cnd_ = v0 == 0;
    f12 = BITSF(LD32(a1+132));
    if (cnd_) { goto L_08840498; }
    goto L_08840490;
L_08840490:;
    v0 = 0x2000000u;
    s2 = s2 | v0;
    goto L_08840498;
L_08840498:;
    a0 = LD32(s0+152);
    a1 = 0 + 0;
    f12 = f12 - f1;
    s1 = 0 + 0;
    { rv_t r_ = func_08806C1C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088404AC;
L_088404AC:;
    a0 = LD32(s0+152);
    a1 = s0 + 56;
    a2 = s0 + 68;
    a3 = s2 + 0;
    { rv_t r_ = func_0880688C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088404C0;
L_088404C0:;
    a0 = LD32(s0+152);
    { rv_t r_ = func_08806B30(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088404C8;
L_088404C8:;
    v0 = LD32(s0+40);
    v1 = LD32(s0+140);
    f0 = BITSF(LD32(v0+132));
    cnd_ = (s32)v1 <= 0;
    ST32(s0+156, FBITS(f0));
    if (cnd_) { goto L_0884050C; }
    goto L_088404DC;
L_088404DC:;
    v1 = LD32(s0+144);
    goto L_088404E0;
L_088404E0:;
    v0 = s1 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a1 = LD32(a0);
    v1 = LD32(a1+24);
    t_ = v1;
    s1 = s1 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088404FC;
L_088404FC:;
    v0 = LD32(s0+140);
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+144); goto L_088404E0; }
    goto L_0884050C;
L_0884050C:;
    goto L_08840510;
L_08840510:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08840524:;
    v1 = LD32(a0+36);
    f12 = BITSF(LD32(a0+48));
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    f0 = func_08848C1C(a0, f12);
    goto L_0884053C;
L_0884053C:;
    f12 = f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f12, 12);
    cnd_ = fcc;
    if (cnd_) { a0 = LD32(s0+152); goto L_08840560; }
    goto L_08840554;
L_08840554:;
    a1 = LD32(s0+40);
    goto L_08840558;
L_08840558:;
    f1 = BITSF(LD32(s0+156));
    goto L_0884045C;
L_08840560:;
    a1 = 0 + 0;
    a0 = a0 + 4;
    func_0880D42C(a0, a1, f12);
    goto L_0884056C;
L_0884056C:;
    a1 = LD32(s0+40);
    goto L_08840558;
}

/* 08840574 */
rv_t func_08840574(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08840574:;
    sp = sp - 16;
    v0 = LD_U8(a0+104);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088405C8; }
    goto L_08840590;
L_08840590:;
    v0 = D_08B28B61 - (-29855);
    v1 = LD_U8(v0-29855);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088405CC; }
    goto L_088405A0;
L_088405A0:;
    a0 = LD32(a0+152);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088405CC; }
    goto L_088405AC;
L_088405AC:;
    v1 = LD32(s0+132);
    v0 = v1 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_088405D0; }
    goto L_088405BC;
L_088405BC:;
    v0 = v1 & 0x2;
    cnd_ = v0 == 0;
    a1 = s0 + 56;
    if (cnd_) { goto L_088405DC; }
    goto L_088405C8;
L_088405C8:;
    goto L_088405CC;
L_088405CC:;
    goto L_088405D0;
L_088405D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088405DC:;
    a2 = s0 + 68;
    a3 = 0 + 0;
    func_0880696C();
    goto L_088405E8;
L_088405E8:;
    v0 = LD32(s0+140);
    cnd_ = (s32)v0 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088405C8; }
    goto L_088405F4;
L_088405F4:;
    v1 = LD32(s0+144);
    goto L_088405F8;
L_088405F8:;
    v0 = s1 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a1 = LD32(a0);
    v1 = LD32(a1+28);
    t_ = v1;
    s1 = s1 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08840614;
L_08840614:;
    v0 = LD32(s0+140);
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+144); goto L_088405F8; }
    goto L_08840624;
L_08840624:;
    goto L_088405CC;
}

/* 0884062C */
rv_t func_0884062C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0884062C:;
    sp = sp - 64;
    s3 = a2 + 0;
    s2 = a0 + 0;
    f21 = f13;
    v0 = LD32(a0+152);
    cnd_ = v0 == 0;
    f20 = f12;
    if (cnd_) { goto L_088406F0; }
    goto L_08840664;
L_08840664:;
    a0 = LD32(a0+40);
    s1 = sp + 0;
    cnd_ = (s32)a1 < 0;
    v1 = a0 + 104;
    if (cnd_) { goto L_08840770; }
    goto L_08840674;
L_08840674:;
    v0 = LD32(v1+8);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1); goto L_08840698; }
    goto L_08840684;
L_08840684:;
    v1 = LD32(a0+104);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v0 = v1 + v0;
    goto L_08840698;
L_08840698:;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    if (cnd_) { ST32(s1+4, 0); goto L_08840768; }
    goto L_088406A4;
L_088406A4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088406AC;
L_088406AC:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(s1+4, v0);
    ST32(s1+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088406C0;
L_088406C0:;
    cnd_ = v0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_08840754; }
    goto L_088406C8;
L_088406C8:;
    ST32(s1+4, 0);
    goto L_088406CC;
L_088406CC:;
    ST32(s1+8, 0);
    v0 = LD32(sp+4);
    goto L_088406D4;
L_088406D4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08840724; }
    goto L_088406DC;
L_088406DC:;
    a0 = LD32(sp);
    goto L_088406E0;
L_088406E0:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08840714; }
    goto L_088406E8;
L_088406E8:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    goto L_088406F0;
L_088406F0:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08840714:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884071C;
L_0884071C:;
    ST32(sp, 0);
    goto L_088406E8;
L_08840724:;
    a0 = LD32(sp);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884072C;
L_0884072C:;
    f13 = BITSF(LD32(s2+156));
    a0 = LD32(s2+152);
    a1 = v0 + 0;
    f13 = f20 - f13;
    a0 = a0 + 4;
    a2 = s3 + 0;
    f12 = f21;
    { rv_t r_ = func_0880D060(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884074C;
L_0884074C:;
    a0 = LD32(sp);
    goto L_088406E0;
L_08840754:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08840760;
L_08840760:;
    v0 = LD32(sp+4);
    goto L_088406D4;
L_08840768:;
    ST32(s1, 0);
    goto L_088406CC;
L_08840770:;
    v0 = LD32(v1);
    goto L_08840698;
}

/* 08840778 */
rv_t func_08840778(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08840778:;
    sp = sp - 16;
    f1 = BITSF(LD32(a0+156));
    a0 = LD32(a0+152);
    f0 = f12 - f1;
    a0 = a0 + 4;
    f12 = f13;
    f13 = f0;
    { rv_t r_ = func_0880D060(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884079C;
L_0884079C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088407A8 */
rv_t func_088407A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088407A8:;
    sp = sp - 64;
    s3 = a2 + 0;
    s2 = a0 + 0;
    f23 = f12;
    f22 = f15;
    f21 = f14;
    v0 = LD32(a0+152);
    cnd_ = v0 == 0;
    f20 = f13;
    if (cnd_) { goto L_0884087C; }
    goto L_088407F0;
L_088407F0:;
    a0 = LD32(a0+40);
    s1 = sp + 0;
    cnd_ = (s32)a1 < 0;
    v1 = a0 + 104;
    if (cnd_) { goto L_0884091C; }
    goto L_08840800;
L_08840800:;
    v0 = LD32(v1+8);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1); goto L_08840824; }
    goto L_08840810;
L_08840810:;
    v1 = LD32(a0+104);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v0 = v1 + v0;
    goto L_08840824;
L_08840824:;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    if (cnd_) { ST32(s1+4, 0); goto L_08840914; }
    goto L_08840830;
L_08840830:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08840838;
L_08840838:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(s1+4, v0);
    ST32(s1+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884084C;
L_0884084C:;
    cnd_ = v0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_08840900; }
    goto L_08840854;
L_08840854:;
    ST32(s1+4, 0);
    goto L_08840858;
L_08840858:;
    ST32(s1+8, 0);
    v0 = LD32(sp+4);
    goto L_08840860;
L_08840860:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088408B8; }
    goto L_08840868;
L_08840868:;
    a0 = LD32(sp);
    goto L_0884086C;
L_0884086C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088408A8; }
    goto L_08840874;
L_08840874:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    goto L_0884087C;
L_0884087C:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_088408A8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088408B0;
L_088408B0:;
    ST32(sp, 0);
    goto L_08840874;
L_088408B8:;
    a0 = LD32(sp);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088408C0;
L_088408C0:;
    a0 = LD32(s2+152);
    a1 = v0 + 0;
    f12 = f20;
    a0 = a0 + 4;
    f13 = f21;
    a2 = s3 + 0;
    f14 = f22;
    f0 = func_0880CF50(a0, a1, a2, f12, f13, f14);
    goto L_088408E0;
L_088408E0:;
    f12 = BITSF(LD32(s2+156));
    a0 = LD32(s2+152);
    a1 = 0 + 0;
    f12 = f23 - f12;
    a0 = a0 + 4;
    { rv_t r_ = func_0880D3F4(a0, a1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088408F8;
L_088408F8:;
    a0 = LD32(sp);
    goto L_0884086C;
L_08840900:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884090C;
L_0884090C:;
    v0 = LD32(sp+4);
    goto L_08840860;
L_08840914:;
    ST32(s1, 0);
    goto L_08840858;
L_0884091C:;
    v0 = LD32(v1);
    goto L_08840824;
}

/* 08840924 */
rv_t func_08840924(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08840924:;
    sp = sp - 16;
    v1 = 0 + 0;
    v0 = LD32(a0+152);
    cnd_ = v0 != 0;
    a0 = v0 + 4;
    if (cnd_) { goto L_0884094C; }
    goto L_0884093C;
L_0884093C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0884094C:;
    { rv_t r_ = func_0880D4C0(a0, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08840954;
L_08840954:;
    v1 = v0 + 0;
    goto L_0884093C;
}

/* 0884095C */
rv_t func_0884095C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0884095C:;
    sp = sp - 64;
    v1 = (u32)-1;
    s4 = a3 & 0xff;
    s3 = a0 + 0;
    s2 = a2 + 0;
    f22 = f14;
    f21 = f13;
    v0 = LD32(a0+152);
    cnd_ = v0 == 0;
    f20 = f12;
    if (cnd_) { goto L_08840A84; }
    goto L_088409A8;
L_088409A8:;
    a0 = LD32(a0+40);
    s1 = sp + 0;
    cnd_ = (s32)a1 < 0;
    v1 = a0 + 104;
    if (cnd_) { goto L_08840B04; }
    goto L_088409B8;
L_088409B8:;
    v0 = LD32(v1+8);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1); goto L_088409DC; }
    goto L_088409C8;
L_088409C8:;
    v1 = LD32(a0+104);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v0 = v1 + v0;
    goto L_088409DC;
L_088409DC:;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    if (cnd_) { ST32(s1+4, 0); goto L_08840AFC; }
    goto L_088409E8;
L_088409E8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088409F0;
L_088409F0:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(s1+4, v0);
    ST32(s1+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08840A04;
L_08840A04:;
    cnd_ = v0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_08840AE8; }
    goto L_08840A0C;
L_08840A0C:;
    ST32(s1+4, 0);
    goto L_08840A10;
L_08840A10:;
    ST32(s1+8, 0);
    v0 = LD32(sp+4);
    goto L_08840A18;
L_08840A18:;
    cnd_ = v0 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08840AC4; }
    goto L_08840A20;
L_08840A20:;
    v0 = s2 | 0x8;
    if (s4 != 0) s2 = v0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08840A2C;
L_08840A2C:;
    f13 = BITSF(LD32(s3+156));
    a0 = LD32(s3+152);
    a1 = v0 + 0;
    f13 = f20 - f13;
    a0 = a0 + 4;
    f12 = f21;
    a2 = s2 + 0;
    { rv_t r_ = func_0880D158(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08840A4C;
L_08840A4C:;
    s0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = s0 == v0;
    f12 = f22;
    if (cnd_) { goto L_08840A6C; }
    goto L_08840A5C;
L_08840A5C:;
    a0 = LD32(s3+152);
    a1 = s0 + 0;
    a0 = a0 + 4;
    func_0880D474();
    goto L_08840A6C;
L_08840A6C:;
    a0 = LD32(sp);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08840AB4; }
    goto L_08840A78;
L_08840A78:;
    ST32(sp+8, 0);
    v1 = s0 + 0;
    goto L_08840A80;
L_08840A80:;
    ST32(sp+4, 0);
    goto L_08840A84;
L_08840A84:;
    v0 = v1 + 0;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08840AB4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08840ABC;
L_08840ABC:;
    ST32(sp, 0);
    goto L_08840A78;
L_08840AC4:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08840AD8; }
    goto L_08840ACC;
L_08840ACC:;
    v1 = (u32)-1;
    ST32(sp+8, 0);
    goto L_08840A80;
L_08840AD8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08840AE0;
L_08840AE0:;
    ST32(sp, 0);
    goto L_08840ACC;
L_08840AE8:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08840AF4;
L_08840AF4:;
    v0 = LD32(sp+4);
    goto L_08840A18;
L_08840AFC:;
    ST32(s1, 0);
    goto L_08840A10;
L_08840B04:;
    v0 = LD32(v1);
    goto L_088409DC;
}

/* 08840B0C */
rv_t func_08840B0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08840B0C:;
    sp = sp - 80;
    v1 = (u32)-1;
    s4 = a3 & 0xff;
    s3 = a0 + 0;
    s2 = a2 + 0;
    f24 = f16;
    f23 = f12;
    f22 = f14;
    f21 = f13;
    v0 = LD32(a0+152);
    cnd_ = v0 == 0;
    f20 = f15;
    if (cnd_) { goto L_08840C5C; }
    goto L_08840B68;
L_08840B68:;
    a0 = LD32(a0+40);
    s1 = sp + 0;
    cnd_ = (s32)a1 < 0;
    v1 = a0 + 104;
    if (cnd_) { goto L_08840CE4; }
    goto L_08840B78;
L_08840B78:;
    v0 = LD32(v1+8);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1); goto L_08840B9C; }
    goto L_08840B88;
L_08840B88:;
    v1 = LD32(a0+104);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v0 = v1 + v0;
    goto L_08840B9C;
L_08840B9C:;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    if (cnd_) { ST32(s1+4, 0); goto L_08840CDC; }
    goto L_08840BA8;
L_08840BA8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08840BB0;
L_08840BB0:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(s1+4, v0);
    ST32(s1+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08840BC4;
L_08840BC4:;
    cnd_ = v0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_08840CC8; }
    goto L_08840BCC;
L_08840BCC:;
    ST32(s1+4, 0);
    goto L_08840BD0;
L_08840BD0:;
    ST32(s1+8, 0);
    v0 = LD32(sp+4);
    goto L_08840BD8;
L_08840BD8:;
    cnd_ = v0 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08840CA4; }
    goto L_08840BE0;
L_08840BE0:;
    v0 = s2 | 0x8;
    if (s4 != 0) s2 = v0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08840BEC;
L_08840BEC:;
    a0 = LD32(s3+152);
    a1 = v0 + 0;
    f12 = f20;
    a0 = a0 + 4;
    f13 = f21;
    f14 = f22;
    a2 = s2 + 0;
    { rv_t r_ = func_0880D230(a0, a1, a2, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08840C0C;
L_08840C0C:;
    s0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = s0 == v0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08840C44; }
    goto L_08840C1C;
L_08840C1C:;
    f12 = BITSF(LD32(s3+156));
    a0 = LD32(s3+152);
    f12 = f23 - f12;
    a0 = a0 + 4;
    { rv_t r_ = func_0880D3F4(a0, a1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08840C30;
L_08840C30:;
    a0 = LD32(s3+152);
    f12 = f24;
    a1 = s0 + 0;
    a0 = a0 + 4;
    func_0880D474();
    goto L_08840C44;
L_08840C44:;
    a0 = LD32(sp);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08840C94; }
    goto L_08840C50;
L_08840C50:;
    ST32(sp+8, 0);
    v1 = s0 + 0;
    goto L_08840C58;
L_08840C58:;
    ST32(sp+4, 0);
    goto L_08840C5C;
L_08840C5C:;
    v0 = v1 + 0;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08840C94:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08840C9C;
L_08840C9C:;
    ST32(sp, 0);
    goto L_08840C50;
L_08840CA4:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08840CB8; }
    goto L_08840CAC;
L_08840CAC:;
    v1 = (u32)-1;
    ST32(sp+8, 0);
    goto L_08840C58;
L_08840CB8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08840CC0;
L_08840CC0:;
    ST32(sp, 0);
    goto L_08840CAC;
L_08840CC8:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08840CD4;
L_08840CD4:;
    v0 = LD32(sp+4);
    goto L_08840BD8;
L_08840CDC:;
    ST32(s1, 0);
    goto L_08840BD0;
L_08840CE4:;
    v0 = LD32(v1);
    goto L_08840B9C;
}

/* 08840CEC */
rv_t func_08840CEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08840CEC:;
    sp = sp - 16;
    a0 = LD32(a0+152);
    a0 = a0 + 4;
    { rv_t r_ = func_0880D320(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08840D00;
L_08840D00:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08840D0C */
rv_t func_08840D0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08840D0C:;
    sp = sp - 32;
    s1 = a0 + 0;
    v0 = a2 & 0x1;
    s0 = a2 + 0;
    a0 = LD32(a0+152);
    cnd_ = a0 == 0;
    f20 = f12;
    if (cnd_) { goto L_08840D54; }
    goto L_08840D38;
L_08840D38:;
    cnd_ = v0 != 0;
    a0 = a0 + 264;
    if (cnd_) { goto L_08840D6C; }
    goto L_08840D40;
L_08840D40:;
    v0 = s0 & 0x2;
    goto L_08840D44;
L_08840D44:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08840D58; }
    goto L_08840D4C;
L_08840D4C:;
    v0 = LD32(s1+152);
    ST32(v0+276, FBITS(f20));
    goto L_08840D54;
L_08840D54:;
    goto L_08840D58;
L_08840D58:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08840D6C:;
    func_0881B1AC(a0, a1);
    goto L_08840D74;
L_08840D74:;
    v0 = s0 & 0x2;
    goto L_08840D44;
}

/* 08840D7C */
rv_t func_08840D7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 192);
L_08840D7C:;
    sp = sp - 192;
    v0 = a0 + 56;
    s1 = a1 + 0;
    s0 = a0 + 0;
    f0 = BITSF(LD32(a0+56));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    a0 = LD32(a0+152);
    ST32(a1, FBITS(f0));
    ST32(a1+4, FBITS(f1));
    cnd_ = a0 != 0;
    ST32(a1+8, FBITS(f2));
    if (cnd_) { goto L_08840DCC; }
    goto L_08840DB8;
L_08840DB8:;
    sp = sp + 192;
    return (rv_t){ v0, v1, f0 };
L_08840DCC:;
    a1 = sp + 0;
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { rv_t r_ = func_088096C8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08840DE4;
L_08840DE4:;
    cnd_ = v0 == 0;
    {u32 a_=sp+(160);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_08840DB8; }
    goto L_08840DEC;
L_08840DEC:;
    a0 = s0 + 68;
    v1 = LD32(s0+68);
    v0 = LD32(a0+4);
    a1 = LD32(a0+32);
    f5 = BITSF(LD32(s1));
    f6 = BITSF(LD32(s1+4));
    f4 = BITSF(LD32(s1+8));
    {u32 a_=sp+(64);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(v1);}
    {u32 a_=sp+(96);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = LD32(a0+8);
    {v[49]=BITSF(v0);}
    {u32 a_=sp+(48);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v0 = LD32(a0+16);
    {v[50]=BITSF(v1);}
    v1 = LD32(a0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(80);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(a0+20);
    {v[49]=BITSF(v0);}
    v0 = LD32(a0+24);
    {v[50]=BITSF(v1);}
    {v[32]=BITSF(v0);}
    v1 = LD32(a0+28);
    v0 = LD32(sp+4);
    {v[33]=BITSF(v1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(sp);
    {v[34]=BITSF(a1);}
    {v[20]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[21]=BITSF(v0);}
    v1 = LD32(sp+8);
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f0 = BITSF(v0);
    f5 = f5 + f2;
    f4 = f4 + f3;
    f6 = f6 + f0;
    ST32(sp+32, FBITS(f2));
    ST32(s1+8, FBITS(f4));
    ST32(s1+4, FBITS(f6));
    ST32(s1, FBITS(f5));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    goto L_08840DB8;
}

/* 08840ECC */
void func_08840ECC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08840ECC:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_0883E7D0(a0, a1, a2);
    goto L_08840EE0;
L_08840EE0:;
    v0 = D_08AF1150 - (4432);
    v1 = s0 + 140;
    v0 = v0 + 4432;
    ST32(s0, v0);
    ST32(v1+8, 0);
    ST32(s0+140, 0);
    ST32(v1+4, 0);
    ST32(s0+156, 0);
    ST32(s0+160, 0);
    f0 = func_0897A0F4();
    goto L_08840F08;
L_08840F08:;
    v0 = D_08AEB8C0 - (-18240);
    f1 = BITSF(LD32(v0-18240));
    v0 = D_08AEB8CC - (-18228);
    ST32(s0+152, FBITS(f0));
    f0 = BITSF(LD32(v0-18228));
    v0 = D_08AEB8BC - (-18244);
    ST32(s0+124, FBITS(f1));
    ST32(s0+136, FBITS(f0));
    f0 = BITSF(LD32(v0-18244));
    v0 = D_08AEB8C4 - (-18236);
    ST8(s0+112, 0);
    ST32(s0+116, FBITS(f0));
    f0 = BITSF(LD32(v0-18236));
    v0 = D_08AEB8C8 - (-18232);
    ST32(s0+120, FBITS(f1));
    ST32(s0+128, FBITS(f0));
    f0 = BITSF(LD32(v0-18232));
    ST32(s0+132, FBITS(f0));
    sp = sp + 16;
    return;
}

/* 08840F60 */
rv_t func_08840F60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08840F60:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0883EBF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08840F74;
L_08840F74:;
    v0 = 1;
    v1 = LD32(s0+140);
    f0 = BITSF(LD32(s0+152));
    a1 = v1 + 0;
    cnd_ = v1 == 0;
    ST32(s0+176, FBITS(f0));
    if (cnd_) { goto L_08840F94; }
    goto L_08840F8C;
L_08840F8C:;
    v0 = (u32)(s32)LD_S8(v1);
    v0 = v0 < 0x1u;
    goto L_08840F94;
L_08840F94:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08840FD8; }
    goto L_08840FA0;
L_08840FA0:;
    ST32(s0+156, 0);
    goto L_08840FA4;
L_08840FA4:;
    a0 = LD32(s0+40);
    v0 = LD32(a0+160);
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08840FC8; }
    goto L_08840FB4;
L_08840FB4:;
    ST32(s0+160, 0);
    goto L_08840FB8;
L_08840FB8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08840FC8:;
    { rv_t r_ = func_0883E4B8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08840FD0;
L_08840FD0:;
    ST32(s0+160, 0);
    goto L_08840FB8;
L_08840FD8:;
    a0 = LD32(s0+40);
    { u64 r_ = func_0883E420(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08840FE0;
L_08840FE0:;
    ST32(s0+156, v0);
    goto L_08840FA4;
}

/* 08840FE8 */
rv_t func_08840FE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[352] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 352);
L_08840FE8:;
    sp = sp - 352;
    v0 = LD32(a0+32);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08841040; }
    goto L_08841018;
L_08841018:;
    goto L_0884101C;
L_0884101C:;
    sp = sp + 352;
    return (rv_t){ v0, v1, f0 };
L_08841040:;
    s2 = 0 + 0;
    { rv_t r_ = func_0883ED1C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08841048;
L_08841048:;
    v0 = LD32(s0+44);
    a0 = LD32(s0+36);
    a1 = LD32(s0+32);
    v1 = v0 + 1;
    v0 = v0 << 2;
    v0 = v0 + a0;
    v1 = (s32)v1 < (s32)a1;
    cnd_ = v1 == 0;
    s1 = LD32(v0);
    if (cnd_) { goto L_08841070; }
    goto L_0884106C;
L_0884106C:;
    s2 = LD32(v0+4);
    goto L_08841070;
L_08841070:;
    v1 = LD32(s0+156);
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08841084; }
    goto L_0884107C;
L_0884107C:;
    v0 = LD32(v1+32);
    a1 = 0 < v0;
    goto L_08841084;
L_08841084:;
    a0 = LD32(s0+160);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0884109C; }
    goto L_08841090;
L_08841090:;
    v0 = LD32(s0+172);
    v0 = (v0 >> 29) & 0x1;
    if (v0 == 0) a1 = 0;
    goto L_0884109C;
L_0884109C:;
    cnd_ = a1 == 0;
    if (cnd_) { v0 = LD_U8(s0+104); goto L_08841BEC; }
    goto L_088410A4;
L_088410A4:;
    f0 = BITSF(LD32(v1+56));
    f1 = BITSF(LD32(s0+56));
    v0 = v1 + 56;
    v1 = s0 + 56;
    f0 = f0 - f1;
    f4 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v1+8));
    f3 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1+4));
    f5 = BITSF(0);
    f4 = f4 - f2;
    f3 = f3 - f1;
    fcc = FCMP(f0, f5, 2);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_08841108; }
    goto L_088410E8;
L_088410E8:;
    fcc = FCMP(f3, f5, 2);
    cnd_ = !fcc;
    v0 = LD32(sp);
    if (cnd_) { goto L_0884110C; }
    goto L_088410F8;
L_088410F8:;
    fcc = FCMP(f4, f5, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s1+28); goto L_08841190; }
    goto L_08841108;
L_08841108:;
    v0 = LD32(sp);
    goto L_0884110C;
L_0884110C:;
    {u32 a_=sp+(176);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+4);
    {v[12]=BITSF(v0);}
    f1 = BITSF(0);
    v0 = LD32(sp+8);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    a0 = s0 + 68;
    if (cnd_) { goto L_08841184; }
    goto L_08841144;
L_08841144:;
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
    a0 = s0 + 68;
    goto L_08841184;
L_08841184:;
    a1 = sp + 0;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884118C;
L_0884118C:;
    v0 = LD32(s1+28);
    goto L_08841190;
L_08841190:;
    v0 = v0 & 0x4;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+40); goto L_08841734; }
    goto L_0884119C;
L_0884119C:;
    a0 = LD32(s0+160);
    goto L_088411A0;
L_088411A0:;
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD_U8(s0+112); goto L_088414B0; }
    goto L_088411A8;
L_088411A8:;
    v0 = LD32(s0+40);
    f1 = BITSF(LD32(s0+168));
    f2 = BITSF(LD32(s0+164));
    f0 = BITSF(LD32(v0+132));
    f0 = f0 - f1;
    f2 = f2 + f0;
    ST32(s0+164, FBITS(f2));
    f0 = BITSF(LD32(v0+132));
    ST32(s0+168, FBITS(f0));
    f0 = BITSF(0);
    f1 = BITSF(LD32(a0+20));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_08841228; }
    goto L_088411E4;
L_088411E4:;
    v0 = LD32(s0+172);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08841228; }
    goto L_088411F4;
L_088411F4:;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08841228; }
    goto L_08841204;
L_08841204:;
    f0 = BITSF(LD32(s0+164));
    goto L_08841208;
L_08841208:;
    f0 = f0 - f1;
    ST32(s0+164, FBITS(f0));
    f1 = BITSF(LD32(a0+20));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = BITSF(LD32(s0+164)); goto L_08841208; }
    goto L_08841224;
L_08841224:;
    f1 = BITSF(LD32(a0+20));
    goto L_08841228;
L_08841228:;
    f2 = BITSF(0);
    f0 = BITSF(LD32(s0+164));
    fcc = FCMP(f1, f2, 2);
    cnd_ = fcc;
    v0 = D_08AEB8E4 - (-18204);
    if (cnd_) { goto L_08841244; }
    goto L_08841240;
L_08841240:;
    f0 = f0 / f1;
    goto L_08841244;
L_08841244:;
    fcc = FCMP(f0, f2, 12);
    f12 = BITSF(0);
    cnd_ = fcc;
    f1 = BITSF(LD32(v0-18204));
    if (cnd_) { goto L_08841268; }
    goto L_08841254;
L_08841254:;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    f12 = f1;
    if (cnd_) { goto L_08841268; }
    goto L_08841264;
L_08841264:;
    f12 = f0;
    goto L_08841268;
L_08841268:;
    a0 = LD32(s0+160);
    a1 = 0 + 0;
    a2 = sp + 16;
    a3 = sp + 144;
    { rv_t r_ = func_088182B4(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884127C;
L_0884127C:;
    a0 = s0 + 68;
    v1 = LD32(a0+4);
    v0 = LD32(s0+68);
    {u32 a_=sp+(272);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v0);}
    v0 = LD32(a0+8);
    {v[49]=BITSF(v1);}
    v1 = LD32(a0+12);
    {v[50]=BITSF(v0);}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v0 = LD32(a0+16);
    {u32 a_=sp+(256);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a1 = s0 + 56;
    {u32 a_=sp+(288);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {v[16]=BITSF(v1);}
    v1 = LD32(a0+20);
    {v[17]=BITSF(v0);}
    {v[18]=BITSF(v1);}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    v1 = LD32(a0+24);
    v0 = LD32(a0+28);
    f6 = BITSF(LD32(a1+4));
    f5 = BITSF(LD32(s0+56));
    f4 = BITSF(LD32(a1+8));
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(304);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    v1 = LD32(a0+32);
    {v[33]=BITSF(v0);}
    {v[112]=BITSF(LD32(sp+(144)));}
    {v[113]=BITSF(LD32(sp+(148)));}
    {v[114]=BITSF(LD32(sp+(152)));}
    {v[115]=BITSF(LD32(sp+(156)));}
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
    {ST32(sp+(96),FBITS(v[96]));}
    {ST32(sp+(100),FBITS(v[97]));}
    {ST32(sp+(104),FBITS(v[98]));}
    {ST32(sp+(108),FBITS(v[100]));}
    {ST32(sp+(112),FBITS(v[101]));}
    {ST32(sp+(116),FBITS(v[102]));}
    {ST32(sp+(120),FBITS(v[104]));}
    {ST32(sp+(124),FBITS(v[105]));}
    {ST32(sp+(128),FBITS(v[106]));}
    {v[34]=BITSF(v1);}
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    {v[20]=BITSF(v0);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    v0 = LD32(sp+24);
    {v[21]=BITSF(v1);}
    {v[22]=BITSF(v0);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f0 = BITSF(v0);
    f5 = f5 + f2;
    f4 = f4 + f3;
    f6 = f6 + f0;
    ST32(sp+160, FBITS(f2));
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    ST32(a1+4, FBITS(f6));
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    ST32(a1+8, FBITS(f4));
    ST32(s0+56, FBITS(f5));
    ST32(sp+164, v0);
    ST32(sp+168, FBITS(f3));
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    {v[112]=BITSF(LD32(sp+(96)));}
    {v[113]=BITSF(LD32(sp+(100)));}
    {v[114]=BITSF(LD32(sp+(104)));}
    {v[116]=BITSF(LD32(sp+(108)));}
    {v[117]=BITSF(LD32(sp+(112)));}
    {v[118]=BITSF(LD32(sp+(116)));}
    {v[120]=BITSF(LD32(sp+(120)));}
    {v[121]=BITSF(LD32(sp+(124)));}
    {v[122]=BITSF(LD32(sp+(128)));}
    {v[96]=BITSF(LD32(s0+(68)));}
    {v[97]=BITSF(LD32(s0+(72)));}
    {v[98]=BITSF(LD32(s0+(76)));}
    {v[100]=BITSF(LD32(s0+(80)));}
    {v[101]=BITSF(LD32(s0+(84)));}
    {v[102]=BITSF(LD32(s0+(88)));}
    {v[104]=BITSF(LD32(s0+(92)));}
    {v[105]=BITSF(LD32(s0+(96)));}
    {v[106]=BITSF(LD32(s0+(100)));}
    {float m00=0;m00+=v[112]*v[96];m00+=v[116]*v[97];m00+=v[120]*v[98];float m01=0;m01+=v[113]*v[96];m01+=v[117]*v[97];m01+=v[121]*v[98];float m02=0;m02+=v[114]*v[96];m02+=v[118]*v[97];m02+=v[122]*v[98];float m10=0;m10+=v[112]*v[100];m10+=v[116]*v[101];m10+=v[120]*v[102];float m11=0;m11+=v[113]*v[100];m11+=v[117]*v[101];m11+=v[121]*v[102];float m12=0;m12+=v[114]*v[100];m12+=v[118]*v[101];m12+=v[122]*v[102];float m20=0;m20+=v[112]*v[104];m20+=v[116]*v[105];m20+=v[120]*v[106];float m21=0;m21+=v[113]*v[104];m21+=v[117]*v[105];m21+=v[121]*v[106];float m22=0;m22+=v[114]*v[104];m22+=v[118]*v[105];m22+=v[122]*v[106];v[80]=m00;v[81]=m01;v[82]=m02;v[84]=m10;v[85]=m11;v[86]=m12;v[88]=m20;v[89]=m21;v[90]=m22;}
    {ST32(sp+(32),FBITS(v[80]));}
    {ST32(sp+(36),FBITS(v[81]));}
    {ST32(sp+(40),FBITS(v[82]));}
    {ST32(sp+(44),FBITS(v[84]));}
    {ST32(sp+(48),FBITS(v[85]));}
    {ST32(sp+(52),FBITS(v[86]));}
    {ST32(sp+(56),FBITS(v[88]));}
    {ST32(sp+(60),FBITS(v[89]));}
    {ST32(sp+(64),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+32));
    f1 = BITSF(LD32(sp+36));
    ST32(s0+68, FBITS(f0));
    f0 = BITSF(LD32(sp+40));
    ST32(a0+4, FBITS(f1));
    ST32(a0+8, FBITS(f0));
    f1 = BITSF(LD32(sp+44));
    f0 = BITSF(LD32(sp+64));
    ST32(a0+12, FBITS(f1));
    ST32(a0+32, FBITS(f0));
    f1 = BITSF(LD32(sp+48));
    f0 = BITSF(LD32(sp+52));
    ST32(a0+16, FBITS(f1));
    ST32(a0+20, FBITS(f0));
    f1 = BITSF(LD32(sp+56));
    f0 = BITSF(LD32(sp+60));
    ST32(a0+24, FBITS(f1));
    ST32(a0+28, FBITS(f0));
    v0 = LD_U8(s0+112);
    goto L_088414B0;
L_088414B0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0884101C; }
    goto L_088414B8;
L_088414B8:;
    v0 = LD32(s0+44);
    v1 = LD32(s0+36);
    f12 = BITSF(LD32(s0+48));
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    f0 = func_08848C1C(a0, f12);
    goto L_088414D4;
L_088414D4:;
    f23 = f0;
    f0 = BITSF(LD32(s0+132));
    v0 = D_08AEB8E4 - (-18204);
    f1 = BITSF(LD32(v0-18204));
    f23 = f23 * f0;
    fcc = FCMP(f1, f23, 12);
    cnd_ = fcc;
    if (cnd_) { f23 = f1; goto L_088414F8; }
    goto L_088414F8;
L_088414F8:;
    f0 = BITSF(LD32(s0+136));
    fcc = FCMP(f23, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f23 = f0; goto L_0884150C; }
    goto L_0884150C;
L_0884150C:;
    f0 = BITSF(LD32(s0+116));
    f12 = BITSF(LD32(s0+48));
    f4 = BITSF(LD32(s0+68));
    f8 = BITSF(LD32(s0+80));
    f12 = f12 * f0;
    f5 = BITSF(LD32(s0+92));
    f6 = BITSF(LD32(s0+72));
    f7 = BITSF(LD32(s0+84));
    f12 = f12 * f23;
    f2 = BITSF(LD32(s0+88));
    f3 = BITSF(LD32(s0+100));
    f1 = BITSF(LD32(s0+76));
    f0 = BITSF(LD32(s0+96));
    a0 = 0 + 0;
    f22 = BITSF(LD32(s0+120));
    ST32(sp+160, FBITS(f4));
    f22 = f23 * f22;
    ST32(sp+164, FBITS(f8));
    ST32(sp+168, FBITS(f5));
    ST32(sp+16, FBITS(f6));
    ST32(sp+20, FBITS(f7));
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f3));
    ST32(sp, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    { rv_t r_ = func_088EF02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08841574;
L_08841574:;
    v0 = D_08AEB8E8 - (-18200);
    f1 = BITSF(LD32(s0+116));
    f12 = BITSF(LD32(s0+48));
    f22 = f22 * f0;
    f0 = BITSF(LD32(v0-18200));
    f12 = f12 * f1;
    a0 = 0 + 0;
    f21 = BITSF(LD32(s0+124));
    f12 = f12 * f23;
    f21 = f23 * f21;
    f12 = f12 + f0;
    { rv_t r_ = func_088EF02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088415A4;
L_088415A4:;
    f1 = BITSF(LD32(s0+116));
    f12 = BITSF(LD32(s0+48));
    v0 = D_08AEB8EC - (-18196);
    f21 = f21 * f0;
    f12 = f12 * f1;
    f0 = BITSF(LD32(v0-18196));
    f20 = BITSF(LD32(s0+128));
    a0 = 0 + 0;
    f12 = f12 * f23;
    f20 = f23 * f20;
    f12 = f12 + f0;
    { rv_t r_ = func_088EF02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088415D4;
L_088415D4:;
    f20 = f20 * f0;
    ST32(sp+80, FBITS(f22));
    v0 = s0 + 68;
    ST32(sp+84, FBITS(f21));
    ST32(sp+88, FBITS(f20));
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
    {ST32(sp+(96),FBITS(v[96]));}
    {ST32(sp+(100),FBITS(v[97]));}
    {ST32(sp+(104),FBITS(v[98]));}
    {ST32(sp+(108),FBITS(v[100]));}
    {ST32(sp+(112),FBITS(v[101]));}
    {ST32(sp+(116),FBITS(v[102]));}
    {ST32(sp+(120),FBITS(v[104]));}
    {ST32(sp+(124),FBITS(v[105]));}
    {ST32(sp+(128),FBITS(v[106]));}
    {v[112]=BITSF(LD32(sp+(96)));}
    {v[113]=BITSF(LD32(sp+(100)));}
    {v[114]=BITSF(LD32(sp+(104)));}
    {v[116]=BITSF(LD32(sp+(108)));}
    {v[117]=BITSF(LD32(sp+(112)));}
    {v[118]=BITSF(LD32(sp+(116)));}
    {v[120]=BITSF(LD32(sp+(120)));}
    {v[121]=BITSF(LD32(sp+(124)));}
    {v[122]=BITSF(LD32(sp+(128)));}
    {v[96]=BITSF(LD32(s0+(68)));}
    {v[97]=BITSF(LD32(s0+(72)));}
    {v[98]=BITSF(LD32(s0+(76)));}
    {v[100]=BITSF(LD32(s0+(80)));}
    {v[101]=BITSF(LD32(s0+(84)));}
    {v[102]=BITSF(LD32(s0+(88)));}
    {v[104]=BITSF(LD32(s0+(92)));}
    {v[105]=BITSF(LD32(s0+(96)));}
    {v[106]=BITSF(LD32(s0+(100)));}
    {float m00=0;m00+=v[112]*v[96];m00+=v[116]*v[97];m00+=v[120]*v[98];float m01=0;m01+=v[113]*v[96];m01+=v[117]*v[97];m01+=v[121]*v[98];float m02=0;m02+=v[114]*v[96];m02+=v[118]*v[97];m02+=v[122]*v[98];float m10=0;m10+=v[112]*v[100];m10+=v[116]*v[101];m10+=v[120]*v[102];float m11=0;m11+=v[113]*v[100];m11+=v[117]*v[101];m11+=v[121]*v[102];float m12=0;m12+=v[114]*v[100];m12+=v[118]*v[101];m12+=v[122]*v[102];float m20=0;m20+=v[112]*v[104];m20+=v[116]*v[105];m20+=v[120]*v[106];float m21=0;m21+=v[113]*v[104];m21+=v[117]*v[105];m21+=v[121]*v[106];float m22=0;m22+=v[114]*v[104];m22+=v[118]*v[105];m22+=v[122]*v[106];v[80]=m00;v[81]=m01;v[82]=m02;v[84]=m10;v[85]=m11;v[86]=m12;v[88]=m20;v[89]=m21;v[90]=m22;}
    {ST32(sp+(32),FBITS(v[80]));}
    {ST32(sp+(36),FBITS(v[81]));}
    {ST32(sp+(40),FBITS(v[82]));}
    {ST32(sp+(44),FBITS(v[84]));}
    {ST32(sp+(48),FBITS(v[85]));}
    {ST32(sp+(52),FBITS(v[86]));}
    {ST32(sp+(56),FBITS(v[88]));}
    {ST32(sp+(60),FBITS(v[89]));}
    {ST32(sp+(64),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+32));
    f1 = BITSF(LD32(sp+64));
    ST32(s0+68, FBITS(f0));
    f0 = BITSF(LD32(sp+36));
    ST32(v0+32, FBITS(f1));
    ST32(v0+4, FBITS(f0));
    f1 = BITSF(LD32(sp+40));
    f0 = BITSF(LD32(sp+44));
    ST32(v0+8, FBITS(f1));
    ST32(v0+12, FBITS(f0));
    f1 = BITSF(LD32(sp+48));
    f0 = BITSF(LD32(sp+52));
    ST32(v0+16, FBITS(f1));
    ST32(v0+20, FBITS(f0));
    f1 = BITSF(LD32(sp+56));
    f0 = BITSF(LD32(sp+60));
    ST32(v0+24, FBITS(f1));
    ST32(v0+28, FBITS(f0));
    goto L_08841018;
L_08841734:;
    a0 = s1 + 0;
    a1 = sp + 32;
    f12 = BITSF(LD32(v0+132));
    a2 = s2 + 0;
    { rv_t r_ = func_088488F4(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08841748;
L_08841748:;
    {v[112]=BITSF(LD32(sp+(32)));}
    {v[113]=BITSF(LD32(sp+(36)));}
    {v[114]=BITSF(LD32(sp+(40)));}
    {v[116]=BITSF(LD32(sp+(44)));}
    {v[117]=BITSF(LD32(sp+(48)));}
    {v[118]=BITSF(LD32(sp+(52)));}
    {v[120]=BITSF(LD32(sp+(56)));}
    {v[121]=BITSF(LD32(sp+(60)));}
    {v[122]=BITSF(LD32(sp+(64)));}
    {v[124]=1.57079632679f;}
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088419C8; }
    goto L_08841784;
L_08841784:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08841908; }
    goto L_08841794;
L_08841794:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0884182C; }
    goto L_088417BC;
L_088417BC:;
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
    if (cnd_) { goto L_08841808; }
    goto L_088417F8;
L_088417F8:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_08841808;
L_08841808:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0884184C; }
    goto L_08841818;
L_08841818:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0884184C; }
    goto L_08841828;
L_08841828:;
    goto L_0884182C;
L_0884182C:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0884184C; }
    goto L_08841840;
L_08841840:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0884184C;
L_0884184C:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_088418DC; }
    goto L_0884186C;
L_0884186C:;
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
    if (cnd_) { goto L_088418B8; }
    goto L_088418A8;
L_088418A8:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_088418B8;
L_088418B8:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088418FC; }
    goto L_088418C8;
L_088418C8:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_088418FC; }
    goto L_088418D8;
L_088418D8:;
    goto L_088418DC;
L_088418DC:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088418FC; }
    goto L_088418F0;
L_088418F0:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_088418FC;
L_088418FC:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08841A80; }
    goto L_08841904;
L_08841904:;
    goto L_08841908;
L_08841908:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0884199C; }
    goto L_0884192C;
L_0884192C:;
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
    if (cnd_) { goto L_08841978; }
    goto L_08841968;
L_08841968:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_08841978;
L_08841978:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088419BC; }
    goto L_08841988;
L_08841988:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_088419BC; }
    goto L_08841998;
L_08841998:;
    goto L_0884199C;
L_0884199C:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088419BC; }
    goto L_088419B0;
L_088419B0:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_088419BC;
L_088419BC:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08841A80; }
    goto L_088419C4;
L_088419C4:;
    goto L_088419C8;
L_088419C8:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08841A5C; }
    goto L_088419EC;
L_088419EC:;
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
    if (cnd_) { goto L_08841A38; }
    goto L_08841A28;
L_08841A28:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_08841A38;
L_08841A38:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08841A7C; }
    goto L_08841A48;
L_08841A48:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_08841A7C; }
    goto L_08841A58;
L_08841A58:;
    goto L_08841A5C;
L_08841A5C:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08841A7C; }
    goto L_08841A70;
L_08841A70:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_08841A7C;
L_08841A7C:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_08841A80;
L_08841A80:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(80),FBITS(v[96]));}
    {ST32(sp+(84),FBITS(v[97]));}
    {ST32(sp+(88),FBITS(v[98]));}
    ST32(sp+80, 0);
    v0 = s0 + 68;
    ST32(sp+84, 0);
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
    {v[112]=BITSF(LD32(sp+(32)));}
    {v[113]=BITSF(LD32(sp+(36)));}
    {v[114]=BITSF(LD32(sp+(40)));}
    {v[116]=BITSF(LD32(sp+(44)));}
    {v[117]=BITSF(LD32(sp+(48)));}
    {v[118]=BITSF(LD32(sp+(52)));}
    {v[120]=BITSF(LD32(sp+(56)));}
    {v[121]=BITSF(LD32(sp+(60)));}
    {v[122]=BITSF(LD32(sp+(64)));}
    {v[96]=BITSF(LD32(s0+(68)));}
    {v[97]=BITSF(LD32(s0+(72)));}
    {v[98]=BITSF(LD32(s0+(76)));}
    {v[100]=BITSF(LD32(s0+(80)));}
    {v[101]=BITSF(LD32(s0+(84)));}
    {v[102]=BITSF(LD32(s0+(88)));}
    {v[104]=BITSF(LD32(s0+(92)));}
    {v[105]=BITSF(LD32(s0+(96)));}
    {v[106]=BITSF(LD32(s0+(100)));}
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
    f0 = BITSF(LD32(sp+100));
    f1 = BITSF(LD32(sp+128));
    ST32(v0+4, FBITS(f0));
    ST32(v0+32, FBITS(f1));
    f0 = BITSF(LD32(sp+104));
    f1 = BITSF(LD32(sp+108));
    ST32(v0+8, FBITS(f0));
    ST32(v0+12, FBITS(f1));
    f0 = BITSF(LD32(sp+112));
    f1 = BITSF(LD32(sp+116));
    ST32(v0+16, FBITS(f0));
    ST32(v0+20, FBITS(f1));
    f0 = BITSF(LD32(sp+120));
    f1 = BITSF(LD32(sp+124));
    ST32(v0+24, FBITS(f0));
    ST32(v0+28, FBITS(f1));
    f0 = BITSF(LD32(sp+96));
    a0 = LD32(s0+160);
    ST32(s0+68, FBITS(f0));
    goto L_088411A0;
L_08841BEC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088411A0; }
    goto L_08841BF4;
L_08841BF4:;
    f12 = BITSF(LD32(s0+48));
    a1 = s0 + 68;
    a0 = s1 + 0;
    a2 = s2 + 0;
    { rv_t r_ = func_088488F4(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08841C08;
L_08841C08:;
    a0 = LD32(s0+160);
    goto L_088411A0;
}

/* 08841C10 */
rv_t func_08841C10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08841C10:;
    v0 = 8;
    return (rv_t){ v0, v1, f0 };
}

/* 08841C18 */
rv_t func_08841C18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08841C18:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = (u32)-1;
    a0 = LD32(a0+40);
    ST32(s0+172, a2);
    a3 = a0 + 104;
    f0 = BITSF(LD32(a0+132));
    ST32(s0+160, 0);
    f0 = f0 - f12;
    ST32(s0+164, FBITS(f0));
    f1 = BITSF(LD32(a0+132));
    cnd_ = a1 == v0;
    ST32(s0+168, FBITS(f1));
    if (cnd_) { goto L_08841CA8; }
    goto L_08841C54;
L_08841C54:;
    cnd_ = (s32)a1 < 0;
    if (cnd_) { v0 = LD32(a3); goto L_08841C7C; }
    goto L_08841C5C;
L_08841C5C:;
    v1 = LD32(a3+8);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v1 = (s32)a1 < (s32)v1;
    cnd_ = v1 == 0;
    a2 = v0 << 2;
    if (cnd_) { goto L_08841CB8; }
    goto L_08841C74;
L_08841C74:;
    v0 = LD32(a0+104);
    v0 = v0 + a2;
    goto L_08841C7C;
L_08841C7C:;
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08841CA8; }
    goto L_08841C88;
L_08841C88:;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08841C90;
L_08841C90:;
    a0 = D_08B204FC - (1276);
    a0 = a0 + 1276;
    a1 = v0 + 0;
    a2 = 1;
    { u64 r_ = func_08AA178C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08841CA4;
L_08841CA4:;
    ST32(s0+160, v0);
    goto L_08841CA8;
L_08841CA8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08841CB8:;
    v0 = LD32(a3);
    goto L_08841C7C;
}

/* 08841CC0 */
u64 func_08841CC0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08841CC0:;
    sp = sp - 16;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08841CF0; }
    goto L_08841CD4;
L_08841CD4:;
    a0 = LD32(a0+40);
    { u64 r_ = func_0883E420(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08841CDC;
L_08841CDC:;
    ST32(s0+156, v0);
    goto L_08841CE0;
L_08841CE0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08841CF0:;
    ST32(a0+156, 0);
    goto L_08841CE0;
}

/* 08841CF8 */
rv_t func_08841CF8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f12 = 0, f13 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08841CF8:;
    sp = sp - 16;
    v0 = D_08B28B62 - (-29854);
    s0 = a0 + 0;
    v1 = LD_U8(v0-29854);
    cnd_ = v1 == 0;
    a0 = a0 + 56;
    if (cnd_) { goto L_08841D28; }
    goto L_08841D18;
L_08841D18:;
    goto L_08841D1C;
L_08841D1C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08841D28:;
    func_0881CBAC(a0);
    goto L_08841D30;
L_08841D30:;
    a0 = s0 + 68;
    func_0881CBE4(a0);
    goto L_08841D38;
L_08841D38:;
    a2 = D_08B15A04 - (23044);
    v1 = LD32(a2+23044);
    v0 = D_08AEB8F0 - (-18192);
    f13 = BITSF(LD32(v0-18192));
    cnd_ = v1 == 0;
    a1 = 1;
    if (cnd_) { goto L_08841D7C; }
    goto L_08841D50;
L_08841D50:;
    v0 = D_08B22E88 - (11912);
    v0 = v0 + 11912;
    v1 = D_08B159FC - (23036);
    ST32(v1+23036, v0);
    v0 = D_08B230A8 - (12456);
    a0 = D_08B230B0 - (12464);
    ST8(v0+12456, a1);
    v0 = D_08B15A0C - (23052);
    ST8(a0+12464, a1);
    ST32(a2+23044, 0);
    ST8(v0+23052, a1);
    goto L_08841D7C;
L_08841D7C:;
    f12 = BITSF(LD32(s0+176));
    { rv_t r_ = func_0881D084(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08841D84;
L_08841D84:;
    goto L_08841D1C;
}

/* 08841D8C */
rv_t func_08841D8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08841D8C:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08840FE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08841DA0;
L_08841DA0:;
    v1 = LD32(s0+40);
    v0 = LD32(v1+160);
    cnd_ = s0 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08841DC0; }
    goto L_08841DB0;
L_08841DB0:;
    goto L_08841DB4;
L_08841DB4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08841DC0:;
    { rv_t r_ = func_08841CF8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08841DC8;
L_08841DC8:;
    goto L_08841DB4;
}

/* 08841DD0 */
void func_08841DD0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08841DD0:;
    sp = sp - 16;
    a2 = 3;
    s0 = a0 + 0;
    func_0883E7D0(a0, a1, a2);
    goto L_08841DE8;
L_08841DE8:;
    v0 = D_08AF1070 - (4208);
    v1 = 1;
    v0 = v0 + 4208;
    ST32(s0+116, v1);
    ST32(s0, v0);
    ST32(s0+112, 0);
    sp = sp + 16;
    return;
}

/* 08841E10 */
rv_t func_08841E10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08841E10:;
    sp = sp - 16;
    v0 = LD32(a0+32);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08841E38; }
    goto L_08841E28;
L_08841E28:;
    goto L_08841E2C;
L_08841E2C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08841E38:;
    { rv_t r_ = func_0883ED1C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08841E40;
L_08841E40:;
    v0 = LD_U8(s0+104);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08841E28; }
    goto L_08841E4C;
L_08841E4C:;
    v0 = LD32(s0);
    v1 = LD32(v0+68);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08841E5C;
L_08841E5C:;
    goto L_08841E2C;
}

/* 08841E64 */
void func_08841E64(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08841E64:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08841DD0(a0, a1);
    goto L_08841E78;
L_08841E78:;
    v0 = D_08AF1000 - (4096);
    v0 = v0 + 4096;
    ST32(s0, v0);
    s0 = s0 + 120;
    a0 = s0 + 0;
    func_088D06E4(a0, 0, 0, 0);
    goto L_08841E90;
L_08841E90:;
    sp = sp + 16;
    return;
}

/* 08841EA0 */
rv_t func_08841EA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08841EA0:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0883EBF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08841EB8;
L_08841EB8:;
    s1 = s0 + 120;
    a1 = LD32(s0+112);
    a0 = s1 + 0;
    { rv_t r_ = func_088D0A64(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08841EC8;
L_08841EC8:;
    v0 = LD32(s0+116);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = LD32(s1+116);
    if (cnd_) { goto L_08841EF4; }
    goto L_08841ED8;
L_08841ED8:;
    v0 = v0 | 0x2;
    goto L_08841EDC;
L_08841EDC:;
    ST32(s1+116, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08841EF4:;
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    goto L_08841EDC;
}

/* 08841EFC */
rv_t func_08841EFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08841EFC:;
    sp = sp - 16;
    v0 = LD_U8(a0+104);
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08841F58; }
    goto L_08841F14;
L_08841F14:;
    v0 = LD32(a0+40);
    cnd_ = v0 == 0;
    s0 = a0 + 120;
    if (cnd_) { goto L_08841F64; }
    goto L_08841F20;
L_08841F20:;
    v0 = LD32(v0+72);
    v0 = v0 & 0x10;
    cnd_ = v0 == 0;
    v0 = LD32(s0+116);
    if (cnd_) { goto L_08841F68; }
    goto L_08841F30;
L_08841F30:;
    v0 = v0 | 0x40;
    goto L_08841F34;
L_08841F34:;
    ST32(s0+116, v0);
    a1 = a0 + 56;
    a2 = a0 + 68;
    a0 = s0 + 0;
    { rv_t r_ = func_088D0D04(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08841F48;
L_08841F48:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088D1050(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08841F54;
L_08841F54:;
    goto L_08841F58;
L_08841F58:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08841F64:;
    v0 = LD32(s0+116);
    goto L_08841F68;
L_08841F68:;
    v0 = (v0 & ~(0x1u << 6)) | ((0 & 0x1) << 6);
    goto L_08841F34;
}

/* 08841F70 */
rv_t func_08841F70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08841F70:;
    sp = sp - 16;
    v0 = LD_U8(a0+104);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08841F9C; }
    goto L_08841F84;
L_08841F84:;
    v0 = LD32(a0+116);
    a1 = 0 + 0;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a0 = a0 + 120;
    if (cnd_) { goto L_08841FA4; }
    goto L_08841F98;
L_08841F98:;
    goto L_08841F9C;
L_08841F9C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08841FA4:;
    func_088D1894();
    goto L_08841FAC;
L_08841FAC:;
    goto L_08841F9C;
}

/* 08841FB4 */
u32 func_08841FB4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08841FB4:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = a1 + 0;
    v0 = func_0897A10C();
    goto L_08841FD4;
L_08841FD4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08841FF8; }
    goto L_08841FDC;
L_08841FDC:;
    v0 = s0 + 0;
    goto L_08841FE0;
L_08841FE0:;
    sp = sp + 16;
    return v0;
L_08841FF8:;
    v0 = s1 < 0x6u;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08841FDC; }
    goto L_08842004;
L_08842004:;
    v1 = D_08AD469C - (18076);
    v0 = s1 << 2;
    v1 = v1 + 18076;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08842020u: goto L_08842020; case 0x08842040u: goto L_08842040; case 0x08842060u: goto L_08842060; case 0x08842080u: goto L_08842080; case 0x088420A0u: goto L_088420A0; case 0x088420C0u: goto L_088420C0; default: rs_break(0, 0x08842018); }
L_08842020:;
    a0 = 56;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08842028;
L_08842028:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    s0 = v0 + 0;
    func_0884260C(a0, a1);
    goto L_08842038;
L_08842038:;
    v0 = s0 + 0;
    goto L_08841FE0;
L_08842040:;
    a0 = 200;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08842048;
L_08842048:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    s0 = v0 + 0;
    func_08842B20(a0, a1);
    goto L_08842058;
L_08842058:;
    v0 = s0 + 0;
    goto L_08841FE0;
L_08842060:;
    a0 = 64;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08842068;
L_08842068:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    s0 = v0 + 0;
    func_08842D20(a0, a1);
    goto L_08842078;
L_08842078:;
    v0 = s0 + 0;
    goto L_08841FE0;
L_08842080:;
    a0 = 68;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08842088;
L_08842088:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    s0 = v0 + 0;
    func_08842FE0(a0, a1);
    goto L_08842098;
L_08842098:;
    v0 = s0 + 0;
    goto L_08841FE0;
L_088420A0:;
    a0 = 80;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088420A8;
L_088420A8:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    s0 = v0 + 0;
    func_088436D0(a0, a1);
    goto L_088420B8;
L_088420B8:;
    v0 = s0 + 0;
    goto L_08841FE0;
L_088420C0:;
    a0 = 60;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088420C8;
L_088420C8:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    s0 = v0 + 0;
    func_088439F4(a0, a1);
    goto L_088420D8;
L_088420D8:;
    v0 = s0 + 0;
    goto L_08841FE0;
}

/* 088420E0 */
void func_088420E0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
L_088420E0:;
    v0 = D_08AF1538 - (5432);
    v0 = v0 + 5432;
    v1 = a0 + 8;
    a2 = a0 + 24;
    ST32(a0, v0);
    v0 = 1;
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    ST32(a2+8, 0);
    ST32(a2+4, 0);
    ST32(a0+4, a1);
    ST32(a0+8, 0);
    ST32(a0+20, v0);
    ST32(a0+36, 0);
    ST32(a0+24, 0);
    ST8(a0+40, 0);
    return;
}

/* 08842124 */
u64 func_08842124(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08842124:;
    sp = sp - 16;
    v0 = D_08AF1538 - (5432);
    v0 = v0 + 5432;
    s0 = a0 + 0;
    s2 = s0 + 24;
    v1 = LD32(a0+24);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088421A0; }
    goto L_08842158;
L_08842158:;
    v0 = LD32(s0+8);
    ST32(s2+4, 0);
    s1 = s0 + 8;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_08842190; }
    goto L_08842170;
L_08842170:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08842190:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08842198;
L_08842198:;
    ST32(s0+8, 0);
    goto L_08842170;
L_088421A0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088421A8;
L_088421A8:;
    ST32(s0+24, 0);
    goto L_08842158;
}

/* 088421B0 */
rv_t func_088421B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088421B0:;
    sp = sp - 16;
    v0 = D_08AF1538 - (5432);
    v0 = v0 + 5432;
    s0 = a0 + 0;
    s2 = s0 + 24;
    v1 = LD32(a0+24);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0884222C; }
    goto L_088421E4;
L_088421E4:;
    v0 = LD32(s0+8);
    ST32(s2+4, 0);
    s1 = s0 + 8;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_0884221C; }
    goto L_088421FC;
L_088421FC:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0884221C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08842224;
L_08842224:;
    ST32(s0+8, 0);
    goto L_088421FC;
L_0884222C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08842234;
L_08842234:;
    ST32(s0+24, 0);
    goto L_088421E4;
}

/* 0884223C */
rv_t func_0884223C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884223C:;
    sp = sp - 16;
    v0 = D_08AF1538 - (5432);
    v0 = v0 + 5432;
    s0 = a0 + 0;
    s1 = s0 + 24;
    v1 = LD32(a0+24);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088422C0; }
    goto L_08842270;
L_08842270:;
    v0 = LD32(s0+8);
    ST32(s1+4, 0);
    s2 = s0 + 8;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_088422B0; }
    goto L_08842288;
L_08842288:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08842298;
L_08842298:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088422B0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088422B8;
L_088422B8:;
    ST32(s0+8, 0);
    goto L_08842288;
L_088422C0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088422C8;
L_088422C8:;
    ST32(s0+24, 0);
    goto L_08842270;
}

/* 088422D0 */
rv_t func_088422D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 304);
L_088422D0:;
    sp = sp - 304;
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    s0 = a0 + 0;
    s2 = a1 + 0;
    a0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = LD32(v1+100);
    t_ = v0;
    s1 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08842310;
L_08842310:;
    a0 = v0 + 0;
    v1 = 0 + 0;
    {u32 a_=sp+(224);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);v[120]=BITSF(LD32(a_+0));v[121]=BITSF(LD32(a_+4));v[122]=BITSF(LD32(a_+8));v[123]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(272);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0884234C; }
    goto L_0884232C;
L_0884232C:;
    a1 = LD32(s0+8);
    cnd_ = a1 == 0;
    v0 = 1;
    if (cnd_) { goto L_08842340; }
    goto L_08842338;
L_08842338:;
    v0 = (u32)(s32)LD_S8(a1);
    v0 = v0 < 0x1u;
    goto L_08842340;
L_08842340:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08842368; }
    goto L_0884234C;
L_0884234C:;
    v0 = v1 + 0;
    sp = sp + 304;
    return (rv_t){ v0, v1, f0 };
L_08842368:;
    a2 = sp + 48;
    a3 = sp + 0;
    t0 = 0 + 0;
    t1 = (u32)-1;
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    { rv_t r_ = func_088072F4(a0, a1, a2, a3, t0, t1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884238C;
L_0884238C:;
    v1 = 0 + 0;
    cnd_ = v0 == 0;
    {u32 a_=sp+(272);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0884234C; }
    goto L_08842398;
L_08842398:;
    a2 = LD32(s0+4);
    {u32 a_=sp+(176);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = a2 + 68;
    v0 = LD32(a2+68);
    v1 = LD32(a0+4);
    a1 = LD32(a0+32);
    {v[96]=BITSF(v0);}
    v0 = LD32(a0+8);
    {v[97]=BITSF(v1);}
    v1 = LD32(a0+12);
    {v[98]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(a0+16);
    v1 = LD32(a0+20);
    {v[1]=BITSF(v0);}
    v0 = LD32(a0+24);
    {v[2]=BITSF(v1);}
    v1 = LD32(a0+28);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[116]=d0;v[117]=d1;v[118]=d2;v[119]=d3;}
    {u32 a_=sp+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    v0 = LD32(sp+52);
    v1 = LD32(sp+56);
    a3 = LD32(sp+48);
    {u32 a_=sp+(160);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float s0=v[124];float s1=v[125];float s2=v[126];float s3=v[127];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[20]=BITSF(a3);}
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[18]);}
    f5 = BITSF(v1);
    {v1=FBITS(v[16]);}
    f1 = BITSF(v1);
    f4 = BITSF(v1);
    {v1=FBITS(v[17]);}
    f0 = BITSF(v1);
    ST32(sp+96, FBITS(f1));
    v0 = a2 + 56;
    f3 = BITSF(v1);
    ST32(sp+100, FBITS(f0));
    v1 = 1;
    ST32(sp+80, FBITS(f1));
    ST32(sp+84, FBITS(f0));
    ST32(sp+104, FBITS(f5));
    ST32(sp+88, FBITS(f5));
    f0 = BITSF(LD32(a2+56));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = f0 + f4;
    f2 = f2 + f5;
    f1 = f1 + f3;
    ST32(s2, FBITS(f0));
    ST32(s2+4, FBITS(f1));
    ST32(s2+8, FBITS(f2));
    ST32(sp+64, FBITS(f0));
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f2));
    {v[112]=BITSF(LD32(sp+(0)));}
    {v[113]=BITSF(LD32(sp+(4)));}
    {v[114]=BITSF(LD32(sp+(8)));}
    {v[116]=BITSF(LD32(sp+(12)));}
    {v[117]=BITSF(LD32(sp+(16)));}
    {v[118]=BITSF(LD32(sp+(20)));}
    {v[120]=BITSF(LD32(sp+(24)));}
    {v[121]=BITSF(LD32(sp+(28)));}
    {v[122]=BITSF(LD32(sp+(32)));}
    {v[96]=BITSF(LD32(a2+(68)));}
    {v[97]=BITSF(LD32(a2+(72)));}
    {v[98]=BITSF(LD32(a2+(76)));}
    {v[100]=BITSF(LD32(a2+(80)));}
    {v[101]=BITSF(LD32(a2+(84)));}
    {v[102]=BITSF(LD32(a2+(88)));}
    {v[104]=BITSF(LD32(a2+(92)));}
    {v[105]=BITSF(LD32(a2+(96)));}
    {v[106]=BITSF(LD32(a2+(100)));}
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
    ST32(s1, FBITS(f0));
    f1 = BITSF(LD32(sp+116));
    f0 = BITSF(LD32(sp+120));
    ST32(s1+4, FBITS(f1));
    ST32(s1+8, FBITS(f0));
    f1 = BITSF(LD32(sp+144));
    f0 = BITSF(LD32(sp+124));
    ST32(s1+32, FBITS(f1));
    ST32(s1+12, FBITS(f0));
    f1 = BITSF(LD32(sp+128));
    f0 = BITSF(LD32(sp+132));
    ST32(s1+16, FBITS(f1));
    ST32(s1+20, FBITS(f0));
    f1 = BITSF(LD32(sp+136));
    f0 = BITSF(LD32(sp+140));
    ST32(s1+24, FBITS(f1));
    ST32(s1+28, FBITS(f0));
    goto L_0884234C;
}

/* 08842558 */
rv_t func_08842558(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08842558:;
    sp = sp - 16;
    v0 = LD32(a0+20);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_0884257C; }
    goto L_08842570;
L_08842570:;
    goto L_08842574;
L_08842574:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0884257C:;
    { rv_t r_ = func_088425A8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08842584;
L_08842584:;
    goto L_08842574;
}

/* 0884258C */
rv_t func_0884258C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884258C:;
    sp = sp - 16;
    a1 = 0 + 0;
    { rv_t r_ = func_088425A8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884259C;
L_0884259C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088425A8 */
rv_t func_088425A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088425A8:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    v0 = LD_U8(a0+40);
    cnd_ = v0 == a1;
    s0 = a0 + 0;
    if (cnd_) { goto L_088425D8; }
    goto L_088425C4;
L_088425C4:;
    v1 = LD32(a0);
    ST8(a0+40, a1);
    v0 = LD32(v1+56);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088425D8;
L_088425D8:;
    a0 = LD32(s0+4);
    v1 = LD32(a0);
    v0 = LD32(v1+100);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088425EC;
L_088425EC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088425FC */
u64 func_088425FC(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_088425FC:;
    v0 = LD32(a0+4);
    v1 = LD32(v0+40);
    v0 = LD_U8(v1+76);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0884260C */
void func_0884260C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884260C:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_088420E0(a0, a1);
    goto L_08842620;
L_08842620:;
    v0 = D_08AF14F0 - (5360);
    v1 = (u32)-1;
    v0 = v0 + 5360;
    ST32(s0, v0);
    ST32(s0+52, v1);
    ST32(s0+44, 0);
    ST32(s0+48, v1);
    sp = sp + 16;
    return;
}

/* 0884264C */
rv_t func_0884264C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884264C:;
    v0 = D_08AF14F0 - (5360);
    v0 = v0 + 5360;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08842124(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08842668;
L_08842668:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08842674 */
rv_t func_08842674(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08842674:;
    v0 = D_08AF14F0 - (5360);
    v0 = v0 + 5360;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08842124(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08842694;
L_08842694:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884269C;
L_0884269C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088426AC */
rv_t func_088426AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088426AC:;
    sp = sp - 32;
    s1 = a0 + 0;
    { u64 r_ = func_088425FC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088426CC;
L_088426CC:;
    cnd_ = v0 != 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088427B8; }
    goto L_088426D4;
L_088426D4:;
    a0 = LD32(s1+48);
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088427B8; }
    goto L_088426E0;
L_088426E0:;
    a2 = LD32(s1+4);
    a1 = LD32(a2+40);
    cnd_ = (s32)a0 < 0;
    v1 = a1 + 80;
    if (cnd_) { goto L_088427F4; }
    goto L_088426F0;
L_088426F0:;
    v0 = LD32(v1+8);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = LD32(v1); goto L_08842714; }
    goto L_08842700;
L_08842700:;
    v1 = LD32(a1+80);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    s2 = v1 + v0;
    goto L_08842714;
L_08842714:;
    v0 = LD32(s2+4);
    cnd_ = v0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088427B8; }
    goto L_08842720;
L_08842720:;
    a1 = LD32(s1+52);
    cnd_ = a1 == v0;
    if (cnd_) { goto L_088427B8; }
    goto L_0884272C;
L_0884272C:;
    a0 = LD32(a2+40);
    cnd_ = (s32)a1 < 0;
    v1 = a0 + 104;
    if (cnd_) { goto L_088427EC; }
    goto L_08842738;
L_08842738:;
    v0 = LD32(v1+8);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { s3 = LD32(v1); goto L_0884275C; }
    goto L_08842748;
L_08842748:;
    v1 = LD32(a0+104);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    s3 = v1 + v0;
    goto L_0884275C;
L_0884275C:;
    v0 = LD32(s3+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088427B8; }
    goto L_08842768;
L_08842768:;
    a0 = LD32(s1+44);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088427DC; }
    goto L_08842774;
L_08842774:;
    a0 = 372;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884277C;
L_0884277C:;
    a1 = LD32(s2);
    a0 = v0 + 0;
    s0 = v0 + 0;
    f0 = func_088059F4(a0, a1);
    goto L_0884278C;
L_0884278C:;
    ST32(s1+44, s0);
    goto L_08842790;
L_08842790:;
    a0 = LD32(s3);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08842798;
L_08842798:;
    a1 = v0 + 0;
    a0 = LD32(s1+44);
    v0 = D_08AEB8F4 - (-18188);
    f13 = BITSF(0);
    f12 = BITSF(LD32(v0-18188));
    a0 = a0 + 4;
    a2 = 1;
    { rv_t r_ = func_0880D060(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088427B8;
L_088427B8:;
    a0 = s1 + 0;
    { rv_t r_ = func_08842558(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088427C0;
L_088427C0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088427DC:;
    a1 = LD32(s2);
    func_0880655C(a0, a1);
    goto L_088427E4;
L_088427E4:;
    goto L_08842790;
L_088427EC:;
    s3 = LD32(v1);
    goto L_0884275C;
L_088427F4:;
    s2 = LD32(v1);
    goto L_08842714;
}

/* 088427FC */
rv_t func_088427FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088427FC:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0884258C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08842810;
L_08842810:;
    v0 = LD32(s0+44);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08842830; }
    goto L_0884281C;
L_0884281C:;
    ST32(s0+44, 0);
    goto L_08842820;
L_08842820:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08842830:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08842840;
L_08842840:;
    ST32(s0+44, 0);
    goto L_08842820;
}

/* 08842848 */
rv_t func_08842848(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08842848:;
    sp = sp - 16;
    v0 = 1;
    v1 = LD32(a0+8);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0884286C; }
    goto L_08842864;
L_08842864:;
    v0 = (u32)(s32)LD_S8(v1);
    v0 = v0 < 0x1u;
    goto L_0884286C;
L_0884286C:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0884288C; }
    goto L_08842878;
L_08842878:;
    { u64 r_ = func_088425FC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08842880;
L_08842880:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_08842898; }
    goto L_08842888;
L_08842888:;
    goto L_0884288C;
L_0884288C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08842898:;
    v1 = LD32(a0);
    v0 = LD32(v1+100);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088428A8;
L_088428A8:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08842888; }
    goto L_088428B0;
L_088428B0:;
    a2 = LD32(s0+44);
    cnd_ = a2 == 0;
    if (cnd_) { goto L_0884288C; }
    goto L_088428BC;
L_088428BC:;
    a0 = v0 + 0;
    v0 = LD_U8(s0+40);
    a1 = a2 + 0;
    a3 = 0 + 0;
    cnd_ = v0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_088428E4; }
    goto L_088428D4;
L_088428D4:;
    a2 = LD32(s0+8);
    { rv_t r_ = func_088081F4(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088428DC;
L_088428DC:;
    goto L_0884288C;
L_088428E4:;
    a0 = v1 + 0;
    a1 = a2 + 0;
    { rv_t r_ = func_08808534(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088428F0;
L_088428F0:;
    goto L_0884288C;
}

/* 088428F8 */
rv_t func_088428F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088428F8:;
    sp = sp - 32;
    v0 = (u32)-1;
    s2 = a0 + 0;
    v1 = LD32(a0+4);
    a1 = LD32(a0+52);
    cnd_ = a1 == v0;
    s1 = LD32(v1+40);
    if (cnd_) { goto L_088429E0; }
    goto L_08842928;
L_08842928:;
    cnd_ = (s32)a1 < 0;
    s3 = s1 + 104;
    if (cnd_) { goto L_08842980; }
    goto L_08842930;
L_08842930:;
    v0 = LD32(s3+8);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    v0 = a1 << 1;
    if (cnd_) { goto L_08842980; }
    goto L_08842940;
L_08842940:;
    a0 = LD32(s1+104);
    v0 = v0 + a1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08842980; }
    goto L_0884295C;
L_0884295C:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08842AF4; }
    goto L_08842968;
L_08842968:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    v0 = LD32(s3+4);
    v0 = v0 - 1;
    ST32(s3+4, v0);
    a1 = LD32(s2+52);
    goto L_08842980;
L_08842980:;
    cnd_ = (s32)a1 < 0;
    s3 = s1 + 116;
    if (cnd_) { goto L_088429D8; }
    goto L_08842988;
L_08842988:;
    v0 = LD32(s3+8);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088429DC; }
    goto L_08842998;
L_08842998:;
    v0 = a1 << 1;
    a0 = LD32(s1+116);
    v0 = v0 + a1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088429DC; }
    goto L_088429B8;
L_088429B8:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08842AE4; }
    goto L_088429C4;
L_088429C4:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    v0 = LD32(s3+4);
    v0 = v0 - 1;
    ST32(s3+4, v0);
    goto L_088429D8;
L_088429D8:;
    v0 = (u32)-1;
    goto L_088429DC;
L_088429DC:;
    ST32(s2+52, v0);
    goto L_088429E0;
L_088429E0:;
    a1 = LD32(s2+48);
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08842AAC; }
    goto L_088429F0;
L_088429F0:;
    cnd_ = (s32)a1 < 0;
    s3 = s1 + 80;
    if (cnd_) { goto L_08842A48; }
    goto L_088429F8;
L_088429F8:;
    v0 = LD32(s3+8);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    v0 = a1 << 1;
    if (cnd_) { goto L_08842A48; }
    goto L_08842A08;
L_08842A08:;
    a0 = LD32(s1+80);
    v0 = v0 + a1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08842A48; }
    goto L_08842A24;
L_08842A24:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08842AD4; }
    goto L_08842A30;
L_08842A30:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    v0 = LD32(s3+4);
    v0 = v0 - 1;
    ST32(s3+4, v0);
    a1 = LD32(s2+48);
    goto L_08842A48;
L_08842A48:;
    cnd_ = (s32)a1 < 0;
    s3 = s1 + 92;
    if (cnd_) { goto L_08842AA0; }
    goto L_08842A50;
L_08842A50:;
    v0 = LD32(s3+8);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08842AA4; }
    goto L_08842A60;
L_08842A60:;
    v0 = LD32(s1+92);
    v1 = a1 << 1;
    v1 = v1 + a1;
    v1 = v1 << 2;
    s0 = v0 + v1;
    a0 = LD32(s0+8);
    cnd_ = a0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08842AA4; }
    goto L_08842A80;
L_08842A80:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08842AC4; }
    goto L_08842A8C;
L_08842A8C:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    v0 = LD32(s3+4);
    v0 = v0 - 1;
    ST32(s3+4, v0);
    goto L_08842AA0;
L_08842AA0:;
    v0 = (u32)-1;
    goto L_08842AA4;
L_08842AA4:;
    ST32(s2+48, v0);
    goto L_08842AAC;
L_08842AAC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08842AC4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08842ACC;
L_08842ACC:;
    ST32(s0, 0);
    goto L_08842A8C;
L_08842AD4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08842ADC;
L_08842ADC:;
    ST32(s0, 0);
    goto L_08842A30;
L_08842AE4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08842AEC;
L_08842AEC:;
    ST32(s0, 0);
    goto L_088429C4;
L_08842AF4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08842AFC;
L_08842AFC:;
    ST32(s0, 0);
    goto L_08842968;
}

/* 08842B04 */
rv_t func_08842B04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08842B04:;
    v0 = LD32(a0+44);
    cnd_ = v0 == 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08842B18; }
    goto L_08842B10;
L_08842B10:;
    ST32(v0+220, v1);
    ST32(v0+224, v1);
    goto L_08842B18;
L_08842B18:;
    return (rv_t){ v0, v1, f0 };
}

/* 08842B20 */
void func_08842B20(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08842B20:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_088420E0(a0, a1);
    goto L_08842B34;
L_08842B34:;
    v0 = D_08AF14A8 - (5288);
    v0 = v0 + 5288;
    ST32(s0, v0);
    s0 = s0 + 48;
    a0 = s0 + 0;
    func_088D06E4(a0, 0, 0, 0);
    goto L_08842B4C;
L_08842B4C:;
    sp = sp + 16;
    return;
}

/* 08842B5C */
rv_t func_08842B5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08842B5C:;
    v0 = D_08AF14A8 - (5288);
    v0 = v0 + 5288;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 48;
    { rv_t r_ = func_088D0994(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08842B80;
L_08842B80:;
    a0 = s0 + 0;
    { u64 r_ = func_08842124(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08842B88;
L_08842B88:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08842B98 */
rv_t func_08842B98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08842B98:;
    v0 = D_08AF14A8 - (5288);
    v0 = v0 + 5288;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 48;
    { rv_t r_ = func_088D0994(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08842BBC;
L_08842BBC:;
    a0 = s0 + 0;
    { u64 r_ = func_08842124(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08842BC4;
L_08842BC4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08842BCC;
L_08842BCC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08842BDC */
rv_t func_08842BDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08842BDC:;
    sp = sp - 16;
    a1 = 0 + 0;
    s1 = a0 + 48;
    s0 = a0 + 0;
    a0 = s1 + 0;
    s2 = LD32(s1+4);
    { rv_t r_ = func_088D0A64(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08842C08;
L_08842C08:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    { rv_t r_ = func_088D0A64(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08842C14;
L_08842C14:;
    a0 = s0 + 0;
    { rv_t r_ = func_08842558(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08842C1C;
L_08842C1C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08842C34 */
rv_t func_08842C34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08842C34:;
    sp = sp - 80;
    s2 = sp + 48;
    a1 = s2 + 0;
    a2 = sp + 0;
    v0 = LD_U8(a0+40);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08842C78; }
    goto L_08842C60;
L_08842C60:;
    goto L_08842C64;
L_08842C64:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08842C78:;
    { rv_t r_ = func_088422D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08842C80;
L_08842C80:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08842C64; }
    goto L_08842C88;
L_08842C88:;
    v0 = LD32(s0+4);
    v0 = LD32(v0+40);
    cnd_ = v0 == 0;
    s1 = s0 + 48;
    if (cnd_) { goto L_08842CD4; }
    goto L_08842C98;
L_08842C98:;
    v0 = LD32(v0+72);
    v0 = v0 & 0x10;
    cnd_ = v0 == 0;
    v0 = LD32(s1+116);
    if (cnd_) { goto L_08842CD8; }
    goto L_08842CA8;
L_08842CA8:;
    v0 = v0 | 0x40;
    goto L_08842CAC;
L_08842CAC:;
    ST32(s1+116, v0);
    a1 = s2 + 0;
    a0 = s1 + 0;
    a2 = sp + 0;
    { rv_t r_ = func_088D0D04(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08842CC0;
L_08842CC0:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088D1050(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08842CCC;
L_08842CCC:;
    goto L_08842C64;
L_08842CD4:;
    v0 = LD32(s1+116);
    goto L_08842CD8;
L_08842CD8:;
    v0 = (v0 & ~(0x1u << 6)) | ((0 & 0x1) << 6);
    goto L_08842CAC;
}

/* 08842CE0 */
rv_t func_08842CE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08842CE0:;
    sp = sp - 16;
    v1 = a0 + 48;
    a1 = 0 + 0;
    v0 = LD_U8(a0+40);
    cnd_ = v0 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08842D08; }
    goto L_08842CFC;
L_08842CFC:;
    goto L_08842D00;
L_08842D00:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08842D08:;
    func_088D1894();
    goto L_08842D10;
L_08842D10:;
    goto L_08842D00;
}

/* 08842D18 */
rv_t func_08842D18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08842D18:;
    return (rv_t){ v0, v1, f0 };
}

/* 08842D20 */
void func_08842D20(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08842D20:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_088420E0(a0, a1);
    goto L_08842D34;
L_08842D34:;
    v0 = D_08AF1460 - (5216);
    v0 = v0 + 5216;
    v1 = s0 + 48;
    ST32(s0, v0);
    ST32(s0+60, 0);
    ST32(s0+48, 0);
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    sp = sp + 16;
    return;
}

/* 08842D64 */
rv_t func_08842D64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08842D64:;
    sp = sp - 32;
    s4 = a0 + 0;
    v1 = LD32(a0+4);
    ST32(a0+60, 0);
    s0 = LD32(v1+40);
    v0 = LD32(s0+28);
    cnd_ = (s32)v0 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08842DDC; }
    goto L_08842D9C;
L_08842D9C:;
    s3 = a0 + 48;
    v0 = LD32(s0+32);
    goto L_08842DA4;
L_08842DA4:;
    s2 = s1 << 2;
    a0 = s3 + 0;
    v0 = s2 + v0;
    v1 = LD32(v0);
    a2 = 1;
    s1 = s1 + 1;
    a1 = LD32(v1+8);
    { u64 r_ = func_08AA3308(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08842DC4;
L_08842DC4:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+32); goto L_08842E04; }
    goto L_08842DCC;
L_08842DCC:;
    v0 = LD32(s0+28);
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+32); goto L_08842DA4; }
    goto L_08842DDC;
L_08842DDC:;
    a0 = s4 + 0;
    { rv_t r_ = func_08842558(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08842DE4;
L_08842DE4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08842E04:;
    v0 = s2 + v0;
    v1 = LD32(v0);
    ST32(s4+60, v1);
    goto L_08842DDC;
}

/* 08842E14 */
rv_t func_08842E14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08842E14:;
    sp = sp - 16;
    s1 = LD32(a0+60);
    cnd_ = s1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08842E64; }
    goto L_08842E30;
L_08842E30:;
    { u64 r_ = func_088425FC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08842E38;
L_08842E38:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08842E68; }
    goto L_08842E40;
L_08842E40:;
    v1 = LD_U8(s0+40);
    cnd_ = v1 == 0;
    if (cnd_) { ST8(s1+104, v1); goto L_08842E68; }
    goto L_08842E4C;
L_08842E4C:;
    v0 = LD_U8(s1+104);
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s1+104, v1); goto L_08842E68; }
    goto L_08842E58;
L_08842E58:;
    ST8(s0+40, 0);
    v1 = 0 + 0;
    ST8(s1+104, v1);
    goto L_08842E64;
L_08842E64:;
    goto L_08842E68;
L_08842E68:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08842E78 */
rv_t func_08842E78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08842E78:;
    sp = sp - 80;
    v0 = LD_U8(a0+40);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08842EA0; }
    goto L_08842E90;
L_08842E90:;
    v0 = LD32(a0+60);
    a1 = sp + 48;
    cnd_ = v0 != 0;
    a2 = sp + 0;
    if (cnd_) { goto L_08842EB0; }
    goto L_08842EA0;
L_08842EA0:;
    goto L_08842EA4;
L_08842EA4:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08842EB0:;
    { rv_t r_ = func_088422D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08842EB8;
L_08842EB8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08842EA4; }
    goto L_08842EC0;
L_08842EC0:;
    v1 = LD32(s0+60);
    f0 = BITSF(LD32(sp+52));
    f1 = BITSF(LD32(sp+48));
    a0 = v1 + 56;
    ST32(a0+4, FBITS(f0));
    v0 = v1 + 68;
    f0 = BITSF(LD32(sp+56));
    ST32(v1+56, FBITS(f1));
    ST32(a0+8, FBITS(f0));
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+32));
    ST32(v1+68, FBITS(f0));
    f0 = BITSF(LD32(sp+4));
    ST32(v0+32, FBITS(f1));
    ST32(v0+4, FBITS(f0));
    f1 = BITSF(LD32(sp+8));
    f0 = BITSF(LD32(sp+12));
    ST32(v0+8, FBITS(f1));
    ST32(v0+12, FBITS(f0));
    f1 = BITSF(LD32(sp+16));
    f0 = BITSF(LD32(sp+20));
    ST32(v0+16, FBITS(f1));
    ST32(v0+20, FBITS(f0));
    f1 = BITSF(LD32(sp+24));
    f0 = BITSF(LD32(sp+28));
    ST32(v0+24, FBITS(f1));
    ST32(v0+28, FBITS(f0));
    goto L_08842EA4;
}

/* 08842F30 */
rv_t func_08842F30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08842F30:;
    sp = sp - 16;
    v0 = LD_U8(a0+40);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08842F54; }
    goto L_08842F48;
L_08842F48:;
    v0 = LD32(a0+60);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08842F64; }
    goto L_08842F54;
L_08842F54:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08842F64:;
    v1 = LD32(v0);
    ST8(v0+104, 0);
    v0 = LD32(v1+32);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08842F78;
L_08842F78:;
    v1 = LD32(s0+60);
    v0 = 1;
    ST8(v1+104, v0);
    goto L_08842F54;
}

/* 08842F88 */
rv_t func_08842F88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08842F88:;
    sp = sp - 16;
    v0 = LD_U8(a0+40);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08842FAC; }
    goto L_08842FA0;
L_08842FA0:;
    v0 = LD32(a0+60);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08842FBC; }
    goto L_08842FAC;
L_08842FAC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08842FBC:;
    v1 = LD32(v0);
    ST8(v0+104, 0);
    v0 = LD32(v1+36);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08842FD0;
L_08842FD0:;
    v1 = LD32(s0+60);
    v0 = 1;
    ST8(v1+104, v0);
    goto L_08842FAC;
}

/* 08842FE0 */
void func_08842FE0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08842FE0:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_088420E0(a0, a1);
    goto L_08842FF4;
L_08842FF4:;
    f0 = BITSF(0);
    v0 = D_08AF1418 - (5144);
    v0 = v0 + 5144;
    v1 = 999;
    a0 = s0 + 48;
    ST32(s0, v0);
    ST32(s0+60, v1);
    ST8(s0+66, 0);
    ST32(s0+48, FBITS(f0));
    ST16(s0+64, 0);
    ST32(a0+8, FBITS(f0));
    ST32(a0+4, FBITS(f0));
    sp = sp + 16;
    return;
}

/* 08843034 */
rv_t func_08843034(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08843034:;
    sp = sp - 16;
    v0 = 999;
    s1 = LD32(a0+60);
    cnd_ = s1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08843064; }
    goto L_08843054;
L_08843054:;
    { u64 r_ = func_088425FC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884305C;
L_0884305C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+4); goto L_08843078; }
    goto L_08843064;
L_08843064:;
    goto L_08843068;
L_08843068:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08843078:;
    a1 = LD_U16(s0+64);
    a2 = LD_U8(s0+40);
    v1 = LD32(v0+40);
    a0 = s1 + 0;
    a3 = LD32(v1+72);
    a3 = (a3 >> 4) & 0x1;
    { rv_t r_ = func_0884340C(a0, a1, a2, a3, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843094;
L_08843094:;
    v0 = LD_U8(s0+40);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08843064; }
    goto L_088430A0;
L_088430A0:;
    ST8(s0+66, 0);
    { rv_t r_ = func_0884328C(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088430A8;
L_088430A8:;
    goto L_08843068;
}

/* 088430B0 */
rv_t func_088430B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088430B0:;
    a3 = LD32(a0+60);
    sp = sp - 16;
    a1 = D_08B28FFC - (-28676);
    v0 = 999;
    cnd_ = a3 == v0;
    v1 = a1 - 28676;
    if (cnd_) { goto L_088431E8; }
    goto L_088430CC;
L_088430CC:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-28676);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0884311C; }
    goto L_088430F0;
L_088430F0:;
    a1 = LD32(a2);
    goto L_088430F4;
L_088430F4:;
    v0 = LD32(a1);
    v1 = LD32(v0-12);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_088431F0; }
    goto L_0884310C;
L_0884310C:;
    a2 = LD32(a2+4);
    goto L_08843110;
L_08843110:;
    cnd_ = a2 != 0;
    if (cnd_) { a1 = LD32(a2); goto L_088430F4; }
    goto L_08843118;
L_08843118:;
    a1 = 0 + 0;
    goto L_0884311C;
L_0884311C:;
    cnd_ = a1 == 0;
    if (cnd_) { ST16(a0+64, 0); goto L_08843148; }
    goto L_08843124;
L_08843124:;
    v1 = LD32(a1);
    v0 = LD32(v1-12);
    v0 = a1 + v0;
    v1 = LD_U16(v0+8);
    v0 = 17;
    cnd_ = v1 == v0;
    ST16(a0+64, v1);
    if (cnd_) { goto L_08843154; }
    goto L_08843140;
L_08843140:;
    { rv_t r_ = func_08842558(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843148;
L_08843148:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08843154:;
    a2 = D_08B28E38 - (-29128);
    v0 = 999;
    a1 = a2 - 29128;
    cnd_ = a3 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088431B8; }
    goto L_08843168;
L_08843168:;
    v0 = LD32(a1+4);
    v1 = LD32(a2-29128);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088431B8; }
    goto L_0884318C;
L_0884318C:;
    a1 = LD32(a2);
    goto L_08843190;
L_08843190:;
    v0 = LD32(a1);
    v1 = LD32(v0-16);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_088431C8; }
    goto L_088431A8;
L_088431A8:;
    a2 = LD32(a2+4);
    goto L_088431AC;
L_088431AC:;
    cnd_ = a2 != 0;
    if (cnd_) { a1 = LD32(a2); goto L_08843190; }
    goto L_088431B4;
L_088431B4:;
    v1 = 0 + 0;
    goto L_088431B8;
L_088431B8:;
    v0 = LD32(v1+168);
    goto L_088431BC;
L_088431BC:;
    v0 = v0 | 0x10;
    ST32(v1+168, v0);
    goto L_08843140;
L_088431C8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a1 + 0;
    if (cnd_) { goto L_088431A8; }
    goto L_088431D4;
L_088431D4:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_088431AC; }
    goto L_088431E0;
L_088431E0:;
    v0 = LD32(v1+168);
    goto L_088431BC;
L_088431E8:;
    ST16(a0+64, 0);
    goto L_08843148;
L_088431F0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08843110; }
    goto L_088431FC;
L_088431FC:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08843110; }
    goto L_08843208;
L_08843208:;
    goto L_0884311C;
}

/* 08843210 */
rv_t func_08843210(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08843210:;
    sp = sp - 16;
    v0 = 17;
    s0 = a0 + 0;
    a2 = 1;
    v1 = LD_U16(a0+64);
    a0 = D_08B28E38 - (-29128);
    cnd_ = v1 == v0;
    a0 = a0 - 29128;
    if (cnd_) { goto L_08843250; }
    goto L_08843238;
L_08843238:;
    a0 = s0 + 0;
    { rv_t r_ = func_0884258C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843240;
L_08843240:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08843250:;
    a1 = LD32(s0+60);
    { u64 r_ = func_08AA791C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08843258;
L_08843258:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08843238; }
    goto L_08843260;
L_08843260:;
    v0 = LD32(v0+168);
    v0 = (v0 & ~(0x1u << 4)) | ((0 & 0x1) << 4);
    ST32(v1+168, v0);
    goto L_08843238;
}

/* 08843270 */
rv_t func_08843270(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08843270:;
    sp = sp - 16;
    { rv_t r_ = func_0884328C(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843280;
L_08843280:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0884328C */
rv_t func_0884328C(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_0884328C:;
    sp = sp - 112;
    v0 = LD_U8(a0+40);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088433F4; }
    goto L_088432AC;
L_088432AC:;
    v1 = LD32(a0+60);
    v0 = 999;
    cnd_ = v1 == v0;
    s2 = sp + 48;
    if (cnd_) { goto L_088433F4; }
    goto L_088432BC;
L_088432BC:;
    a1 = s2 + 0;
    a2 = sp + 0;
    { rv_t r_ = func_088422D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088432C8;
L_088432C8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088433F8; }
    goto L_088432D0;
L_088432D0:;
    t1 = LD_U8(s0+66);
    ST32(sp+72, 0);
    s1 = s0 + 48;
    ST32(sp+68, 0);
    cnd_ = t1 == 0;
    ST32(sp+64, 0);
    if (cnd_) { goto L_08843358; }
    goto L_088432E8;
L_088432E8:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    v0 = D_08AEB8F8 - (-18184);
    f0 = BITSF(LD32(v0-18184));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    v0 = D_08AEB8FC - (-18180);
    if (cnd_) { goto L_08843358; }
    goto L_08843308;
L_08843308:;
    f0 = BITSF(LD32(v0-18180));
    f2 = BITSF(LD32(s0+48));
    f4 = BITSF(LD32(s1+4));
    f0 = f0 / f1;
    f1 = BITSF(LD32(sp+48));
    f5 = BITSF(LD32(s1+8));
    f3 = BITSF(LD32(sp+52));
    f1 = f1 - f2;
    f2 = BITSF(LD32(sp+56));
    f3 = f3 - f4;
    f2 = f2 - f5;
    f4 = f1 * f0;
    f5 = f3 * f0;
    ST32(sp+80, FBITS(f1));
    f0 = f2 * f0;
    ST32(sp+64, FBITS(f4));
    ST32(sp+68, FBITS(f5));
    ST32(sp+72, FBITS(f0));
    ST32(sp+84, FBITS(f3));
    ST32(sp+88, FBITS(f2));
    goto L_08843358;
L_08843358:;
    cnd_ = t1 == 0;
    f8 = BITSF(LD32(sp+48));
    if (cnd_) { goto L_088433B4; }
    goto L_08843360;
L_08843360:;
    f3 = BITSF(LD32(s1+4));
    f0 = BITSF(LD32(s0+48));
    f7 = BITSF(LD32(sp+52));
    f2 = BITSF(LD32(s1+8));
    f0 = f8 - f0;
    f3 = f7 - f3;
    f6 = BITSF(LD32(sp+56));
    v0 = D_08AEB900 - (-18176);
    f1 = f0 * f0;
    f2 = f6 - f2;
    f4 = f3 * f3;
    ST32(sp+80, FBITS(f0));
    f5 = f2 * f2;
    f1 = f1 + f4;
    f0 = BITSF(LD32(v0-18176));
    ST32(sp+84, FBITS(f3));
    f1 = f1 + f5;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    ST32(sp+88, FBITS(f2));
    if (cnd_) { goto L_088433E0; }
    goto L_088433B4;
L_088433B4:;
    a1 = LD_U16(s0+64);
    a0 = LD32(s0+60);
    t1 = t1 ^ 0x1;
    t1 = t1 & 0xff;
    a2 = s2 + 0;
    t0 = sp + 64;
    a3 = sp + 0;
    { rv_t r_ = func_088435DC(a0, a1, a2, a3, t1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088433D4;
L_088433D4:;
    f8 = BITSF(LD32(sp+48));
    f7 = BITSF(LD32(sp+52));
    f6 = BITSF(LD32(sp+56));
    goto L_088433E0;
L_088433E0:;
    v0 = 1;
    ST32(s1+8, FBITS(f6));
    ST8(s0+66, v0);
    ST32(s0+48, FBITS(f8));
    ST32(s1+4, FBITS(f7));
    goto L_088433F4;
L_088433F4:;
    goto L_088433F8;
L_088433F8:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
}

/* 0884340C */
rv_t func_0884340C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884340C:;
    sp = sp - 16;
    a1 = a1 & 0xffff;
    v0 = 17;
    t0 = a0 + 0;
    s2 = a3 & 0xff;
    s1 = a2 & 0xff;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_088435B0; }
    goto L_08843438;
L_08843438:;
    v0 = (s32)a1 < 18;
    cnd_ = v0 == 0;
    v0 = 33;
    if (cnd_) { goto L_088434FC; }
    goto L_08843444;
L_08843444:;
    v0 = 14;
    cnd_ = a1 == v0;
    a0 = D_08B28F64 - (-28828);
    if (cnd_) { goto L_08843468; }
    goto L_08843450;
L_08843450:;
    goto L_08843454;
L_08843454:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08843468:;
    v0 = 999;
    cnd_ = t0 == v0;
    v1 = a0 - 28828;
    if (cnd_) { goto L_08843450; }
    goto L_08843474;
L_08843474:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-28828);
    v0 = v0 - 1;
    v0 = t0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088434C4; }
    goto L_08843498;
L_08843498:;
    a0 = LD32(a2);
    goto L_0884349C;
L_0884349C:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == t0;
    if (cnd_) { v0 = LD32(v1+16); goto L_088434DC; }
    goto L_088434B4;
L_088434B4:;
    a2 = LD32(a2+4);
    goto L_088434B8;
L_088434B8:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_0884349C; }
    goto L_088434C0;
L_088434C0:;
    a0 = 0 + 0;
    goto L_088434C4;
L_088434C4:;
    cnd_ = a0 == 0;
    if (cnd_) {  goto L_08843454; }
    goto L_088434CC;
L_088434CC:;
    a1 = s1 + 0;
    { u64 r_ = func_088695B4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088434D4;
L_088434D4:;
    goto L_08843454;
L_088434DC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_088434B8; }
    goto L_088434E8;
L_088434E8:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_088434B8; }
    goto L_088434F4;
L_088434F4:;
    goto L_088434C4;
L_088434FC:;
    cnd_ = a1 != v0;
    if (cnd_) { goto L_08843454; }
    goto L_08843504;
L_08843504:;
    a0 = D_08B28E28 - (-29144);
    v0 = 999;
    cnd_ = t0 == v0;
    v1 = a0 - 29144;
    if (cnd_) { goto L_08843454; }
    goto L_08843514;
L_08843514:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-29144);
    v0 = v0 - 1;
    v0 = t0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08843564; }
    goto L_08843538;
L_08843538:;
    a0 = LD32(a2);
    goto L_0884353C;
L_0884353C:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == t0;
    if (cnd_) { v0 = LD32(v1+16); goto L_08843590; }
    goto L_08843554;
L_08843554:;
    a2 = LD32(a2+4);
    goto L_08843558;
L_08843558:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_0884353C; }
    goto L_08843560;
L_08843560:;
    s0 = 0 + 0;
    goto L_08843564;
L_08843564:;
    cnd_ = s0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08843450; }
    goto L_0884356C;
L_0884356C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08859C04(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843574;
L_08843574:;
    cnd_ = s2 == 0;
    if (cnd_) {  goto L_08843454; }
    goto L_0884357C;
L_0884357C:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    { u64 r_ = func_08859C64(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08843588;
L_08843588:;
    goto L_08843454;
L_08843590:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08843554; }
    goto L_0884359C;
L_0884359C:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08843558; }
    goto L_088435A8;
L_088435A8:;
    goto L_08843564;
L_088435B0:;
    a0 = D_08B28E38 - (-29128);
    a0 = a0 - 29128;
    a1 = t0 + 0;
    a2 = 1;
    { u64 r_ = func_08AA791C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088435C4;
L_088435C4:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08843450; }
    goto L_088435CC;
L_088435CC:;
    a1 = s1 + 0;
    { u64 r_ = func_0885BFD4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088435D4;
L_088435D4:;
    goto L_08843454;
}

/* 088435DC */
rv_t func_088435DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088435DC:;
    sp = sp - 16;
    a1 = a1 & 0xffff;
    v0 = 17;
    v1 = a0 + 0;
    s2 = a3 + 0;
    s1 = t1 & 0xff;
    s0 = a2 + 0;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_088436A0; }
    goto L_0884360C;
L_0884360C:;
    v0 = (s32)a1 < 18;
    cnd_ = v0 == 0;
    v0 = 33;
    if (cnd_) { goto L_08843664; }
    goto L_08843618;
L_08843618:;
    v0 = 14;
    cnd_ = a1 == v0;
    a0 = D_08B28F64 - (-28828);
    if (cnd_) { goto L_08843640; }
    goto L_08843624;
L_08843624:;
    v0 = 0 + 0;
    goto L_08843628;
L_08843628:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08843640:;
    a1 = v1 + 0;
    a0 = a0 - 28828;
    a2 = 1;
    v0 = func_08AA79B0(a0, a1, a2);
    goto L_08843650;
L_08843650:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_088695E8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884365C;
L_0884365C:;
    v0 = 1;
    goto L_08843628;
L_08843664:;
    cnd_ = a1 != v0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08843628; }
    goto L_0884366C;
L_0884366C:;
    a0 = D_08B28E28 - (-29144);
    a0 = a0 - 29144;
    a1 = v1 + 0;
    a2 = 1;
    { u64 r_ = func_08AA7A44(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08843680;
L_08843680:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0884365C; }
    goto L_08843688;
L_08843688:;
    a1 = s0 + 0;
    a2 = s2 + 0;
    a3 = s1 + 0;
    { rv_t r_ = func_08859B34(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843698;
L_08843698:;
    v0 = 1;
    goto L_08843628;
L_088436A0:;
    a0 = D_08B28E38 - (-29128);
    a0 = a0 - 29128;
    a1 = v1 + 0;
    a2 = 1;
    { u64 r_ = func_08AA791C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088436B4;
L_088436B4:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0884365C; }
    goto L_088436BC;
L_088436BC:;
    a1 = s0 + 0;
    a2 = s2 + 0;
    { rv_t r_ = func_0885C000(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088436C8;
L_088436C8:;
    v0 = 1;
    goto L_08843628;
}

/* 088436D0 */
void func_088436D0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088436D0:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_088420E0(a0, a1);
    goto L_088436E4;
L_088436E4:;
    v0 = D_08AEB90C - (-18164);
    f1 = BITSF(LD32(v0-18164));
    v0 = D_08AF0E70 - (3696);
    v0 = v0 + 3696;
    ST32(s0, v0);
    v0 = D_08AEB910 - (-18160);
    v1 = (u32)-1;
    f0 = BITSF(LD32(v0-18160));
    v0 = 1;
    ST32(s0+56, FBITS(f1));
    ST32(s0+60, FBITS(f0));
    ST32(s0+64, v0);
    ST32(s0+72, v1);
    ST32(s0+76, 0);
    ST32(s0+48, FBITS(f1));
    ST32(s0+52, FBITS(f1));
    ST32(s0+68, v1);
    sp = sp + 16;
    return;
}

/* 08843738 */
rv_t func_08843738(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08843738:;
    sp = sp - 48;
    v0 = LD_U8(a0+40);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088437EC; }
    goto L_0884376C;
L_0884376C:;
    a0 = LD32(a0+76);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088437A4; }
    goto L_08843778;
L_08843778:;
    goto L_0884377C;
L_0884377C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088437A4:;
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088437B0;
L_088437B0:;
    a1 = LD32(s1+76);
    a0 = D_08B44C2C - (19500);
    a0 = a0 + 19500;
    a1 = a1 + 64;
    { rv_t r_ = func_088EC1E8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088437C4;
L_088437C4:;
    a0 = LD32(s1+76);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088437D8; }
    goto L_088437D0;
L_088437D0:;
    ST32(s1+76, 0);
    goto L_08843778;
L_088437D8:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088437E4;
L_088437E4:;
    ST32(s1+76, 0);
    goto L_08843778;
L_088437EC:;
    a0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = LD32(v1+100);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843800;
L_08843800:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_08843778; }
    goto L_08843808;
L_08843808:;
    v0 = LD32(s1+68);
    s0 = (u32)-1;
    cnd_ = v0 == s0;
    s3 = D_08B44C2C - (19500);
    if (cnd_) { goto L_08843778; }
    goto L_08843818;
L_08843818:;
    a0 = s3 + 19500;
    { rv_t r_ = func_088EBDD0(a0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843820;
L_08843820:;
    cnd_ = v0 == s0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08843778; }
    goto L_08843828;
L_08843828:;
    t1 = LD32(s3+19500);
    v0 = LD32(t1+12);
    cnd_ = s2 == v0;
    f0 = BITSF(LD32(s1+60));
    if (cnd_) { goto L_088439EC; }
    goto L_08843838;
L_08843838:;
    a0 = LD32(t1);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08843878; }
    goto L_08843844;
L_08843844:;
    a1 = LD32(a0+8);
    goto L_08843848;
L_08843848:;
    v0 = (s32)s2 < (s32)a1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08843868; }
    goto L_08843854;
L_08843854:;
    v0 = LD32(t1+4);
    v0 = a1 + v0;
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08843878; }
    goto L_08843868;
L_08843868:;
    a0 = LD32(a0+12);
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0+8); goto L_08843848; }
    goto L_08843874;
L_08843874:;
    v1 = 0 + 0;
    goto L_08843878;
L_08843878:;
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088439CC; }
    goto L_08843880;
L_08843880:;
    a0 = LD32(v1+4);
    v0 = LD32(v1+8);
    t0 = LD32(a0+12);
    cnd_ = (s32)t0 <= 0;
    a3 = s2 - v0;
    if (cnd_) { goto L_088438B4; }
    goto L_08843894;
L_08843894:;
    a0 = LD32(a0+4);
    v0 = LD32(a0);
    goto L_0884389C;
L_0884389C:;
    a2 = a2 + 1;
    a1 = (s32)a2 < (s32)t0;
    cnd_ = v0 == a3;
    a0 = a0 + 4;
    if (cnd_) { goto L_088439D4; }
    goto L_088438AC;
L_088438AC:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0884389C; }
    goto L_088438B4;
L_088438B4:;
    v0 = 0 + 0;
    goto L_088438B8;
L_088438B8:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088438CC; }
    goto L_088438C0;
L_088438C0:;
    a0 = v0 + 0;
    ST32(t1+8, v0);
    ST32(t1+12, s2);
    goto L_088438CC;
L_088438CC:;
    cnd_ = a0 != 0;
    if (cnd_) { ST32(a0+28, FBITS(f0)); goto L_088438D4; }
    goto L_088438D4;
L_088438D4:;
    a0 = LD32(s3+19500);
    a1 = s2 + 0;
    s0 = LD32(s1+68);
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088438E4;
L_088438E4:;
    cnd_ = v0 == 0;
    s3 = D_08B44C2C - (19500);
    if (cnd_) { goto L_088438F0; }
    goto L_088438EC;
L_088438EC:;
    ST32(v0+32, s0);
    goto L_088438F0;
L_088438F0:;
    a0 = LD32(s3+19500);
    a1 = s2 + 0;
    f21 = BITSF(LD32(s1+48));
    f22 = BITSF(LD32(s1+52));
    f20 = BITSF(LD32(s1+56));
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08843908;
L_08843908:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s3+19500); goto L_08843920; }
    goto L_08843910;
L_08843910:;
    ST32(v0+44, FBITS(f20));
    ST32(v0+36, FBITS(f21));
    ST32(v0+40, FBITS(f22));
    a0 = LD32(s3+19500);
    goto L_08843920;
L_08843920:;
    a1 = s2 + 0;
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08843928;
L_08843928:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08843940; }
    goto L_08843930;
L_08843930:;
    v1 = 1;
    v0 = LD32(v0+24);
    v0 = (v0 & ~(0x1u << 1)) | ((v1 & 0x1) << 1);
    ST32(a0+24, v0);
    goto L_08843940;
L_08843940:;
    v0 = LD32(s1+64);
    a0 = LD32(s3+19500);
    a1 = s2 + 0;
    s0 = v0 & 0x1;
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08843954;
L_08843954:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08843968; }
    goto L_0884395C;
L_0884395C:;
    v0 = LD32(v0+24);
    v0 = (v0 & ~(0x1u << 3)) | ((s0 & 0x1) << 3);
    ST32(v1+24, v0);
    goto L_08843968;
L_08843968:;
    a0 = LD32(s3+19500);
    a1 = s2 + 0;
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08843974;
L_08843974:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08843988; }
    goto L_0884397C;
L_0884397C:;
    v0 = LD32(v0+24);
    v0 = v0 | 0x20;
    ST32(v1+24, v0);
    goto L_08843988;
L_08843988:;
    a0 = 68;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843990;
L_08843990:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    a2 = 1;
    v0 = func_0880ED38(a0, a1, a2);
    goto L_088439A4;
L_088439A4:;
    v1 = LD32(s0);
    a2 = LD32(s1+8);
    ST32(s1+76, s0);
    a0 = s0 + 0;
    a1 = s4 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a3 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088439C4;
L_088439C4:;
    goto L_0884377C;
L_088439CC:;
    a0 = 0 + 0;
    goto L_088438CC;
L_088439D4:;
    v1 = LD32(v1);
    v0 = a3 << 4;
    v0 = v0 - a3;
    v0 = v0 << 2;
    v0 = v1 + v0;
    goto L_088438B8;
L_088439EC:;
    a0 = LD32(t1+8);
    goto L_088438CC;
}

/* 088439F4 */
void func_088439F4(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088439F4:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_088420E0(a0, a1);
    goto L_08843A08;
L_08843A08:;
    v0 = D_08AF13D0 - (5072);
    v0 = v0 + 5072;
    ST32(s0, v0);
    ST8(s0+56, 0);
    ST32(s0+48, 0);
    ST32(s0+52, 0);
    sp = sp + 16;
    return;
}

/* 08843A30 */
rv_t func_08843A30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08843A30:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+52);
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08843A6C; }
    goto L_08843A54;
L_08843A54:;
    a0 = s0 + 0;
    { rv_t r_ = func_0884258C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843A5C;
L_08843A5C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08843A6C:;
    { u64 r_ = func_088E8900(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08843A74;
L_08843A74:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_08843A88; }
    goto L_08843A80;
L_08843A80:;
    { rv_t r_ = func_088E44C8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843A88;
L_08843A88:;
    ST32(s0+52, 0);
    goto L_08843A54;
}

/* 08843A90 */
rv_t func_08843A90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08843A90:;
    sp = sp - 16;
    v0 = LD_U8(a0+40);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08843B60; }
    goto L_08843AA8;
L_08843AA8:;
    a1 = LD32(a0+52);
    cnd_ = a1 != 0;
    a0 = D_08B30B5C - (2908);
    if (cnd_) { goto L_08843B40; }
    goto L_08843AB4;
L_08843AB4:;
    a2 = LD32(s0+48);
    cnd_ = a2 != 0;
    a0 = D_08B45A9C - (23196);
    if (cnd_) { goto L_08843AD0; }
    goto L_08843AC0;
L_08843AC0:;
    goto L_08843AC4;
L_08843AC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08843AD0:;
    a1 = D_08B45AA8 - (23208);
    a0 = a0 + 23196;
    a1 = a1 + 23208;
    a3 = 0 + 0;
    t0 = 15;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843AE8;
L_08843AE8:;
    ST32(s0+52, v0);
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    a1 = v0 + 0;
    { u64 r_ = func_088E8900(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08843AFC;
L_08843AFC:;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08843B1C; }
    goto L_08843B04;
L_08843B04:;
    v0 = LD32(s0+4);
    v1 = LD32(v0+40);
    a0 = LD32(v1+72);
    a1 = (a0 >> 4) & 0x1;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08843B30; }
    goto L_08843B1C;
L_08843B1C:;
    ST8(s0+56, 0);
    goto L_08843B20;
L_08843B20:;
    a0 = s0 + 0;
    { rv_t r_ = func_08843BAC(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843B28;
L_08843B28:;
    goto L_08843AC4;
L_08843B30:;
    a0 = a2 + 0;
    func_088E2D44(a0, a1);
    goto L_08843B38;
L_08843B38:;
    ST8(s0+56, 0);
    goto L_08843B20;
L_08843B40:;
    a0 = a0 + 2908;
    { u64 r_ = func_088E8900(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08843B48;
L_08843B48:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08843B58; }
    goto L_08843B50;
L_08843B50:;
    a1 = 1;
    { rv_t r_ = func_088E44C8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843B58;
L_08843B58:;
    ST32(s0+52, 0);
    goto L_08843AB4;
L_08843B60:;
    a1 = LD32(a0+52);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08843AC4; }
    goto L_08843B6C;
L_08843B6C:;
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    { u64 r_ = func_088E8900(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08843B78;
L_08843B78:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08843AC0; }
    goto L_08843B80;
L_08843B80:;
    a1 = 0 + 0;
    { rv_t r_ = func_088E44C8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843B88;
L_08843B88:;
    goto L_08843AC4;
}

/* 08843B90 */
rv_t func_08843B90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08843B90:;
    sp = sp - 16;
    { rv_t r_ = func_08843BAC(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843BA0;
L_08843BA0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08843BAC */
rv_t func_08843BAC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08843BAC:;
    sp = sp - 80;
    v0 = LD_U8(a0+40);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08843BE0; }
    goto L_08843BCC;
L_08843BCC:;
    v0 = LD32(a0+52);
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08843BF8; }
    goto L_08843BE0;
L_08843BE0:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08843BF8:;
    { u64 r_ = func_088E8900(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08843C00;
L_08843C00:;
    s2 = sp + 48;
    s1 = v0 + 0;
    a2 = sp + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08843BE0; }
    goto L_08843C18;
L_08843C18:;
    { rv_t r_ = func_088422D0(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843C20;
L_08843C20:;
    a2 = sp + 0;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08843BE0; }
    goto L_08843C30;
L_08843C30:;
    a3 = LD_U8(s0+56);
    a3 = a3 ^ 0x1;
    { rv_t r_ = func_088E48F4(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843C3C;
L_08843C3C:;
    v0 = 1;
    ST8(s0+56, v0);
    goto L_08843BE0;
}

/* 08843C48 */
void func_08843C48(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08843C48:;
    sp = sp - 32;
    v0 = D_08AF1900 - (6400);
    s5 = D_08AD46B4 - (18100);
    v0 = v0 + 6400;
    s3 = s5 + 18100;
    s2 = a0 + 44;
    s1 = a0 + 20;
    ST32(s2+4, 0);
    ST32(s2+8, 0);
    s4 = a2 + 0;
    ST32(a0+8, a1);
    s0 = a0 + 0;
    ST32(a0, v0);
    ST32(a0+20, 0);
    ST32(a0+44, 0);
    ST32(a0+12, 0);
    ST32(a0+16, 0);
    ST32(s1+8, 0);
    cnd_ = s3 == 0;
    ST32(s1+4, 0);
    if (cnd_) { goto L_08843CE0; }
    goto L_08843CB4;
L_08843CB4:;
    a0 = s3 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08843CBC;
L_08843CBC:;
    v1 = v0 + 1;
    ST32(s1+4, v0);
    a0 = v1 + 0;
    ST32(s1+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843CD0;
L_08843CD0:;
    cnd_ = v0 != 0;
    ST32(s0+20, v0);
    if (cnd_) { goto L_08843DA4; }
    goto L_08843CD8;
L_08843CD8:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    goto L_08843CE0;
L_08843CE0:;
    a0 = LD32(s0+44);
    goto L_08843CE4;
L_08843CE4:;
    v0 = (u32)-1;
    ST32(s0+32, v0);
    v0 = 1;
    s1 = s5 + 18100;
    ST32(s0+4, s4);
    ST32(s0+36, v0);
    cnd_ = a0 == 0;
    ST32(s0+40, 0);
    if (cnd_) { goto L_08843D14; }
    goto L_08843D04;
L_08843D04:;
    cnd_ = a0 == s1;
    if (cnd_) { ST32(s0+56, 0); goto L_08843D50; }
    goto L_08843D0C;
L_08843D0C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08843D94; }
    goto L_08843D14;
L_08843D14:;
    ST32(s2+8, 0);
    cnd_ = s1 == 0;
    ST32(s2+4, 0);
    if (cnd_) { goto L_08843D8C; }
    goto L_08843D20;
L_08843D20:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08843D28;
L_08843D28:;
    v1 = v0 + 1;
    ST32(s2+4, v0);
    a0 = v1 + 0;
    ST32(s2+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843D3C;
L_08843D3C:;
    cnd_ = v0 != 0;
    ST32(s2, v0);
    if (cnd_) { goto L_08843D78; }
    goto L_08843D44;
L_08843D44:;
    ST32(s2+4, 0);
    ST32(s2+8, 0);
    goto L_08843D4C;
L_08843D4C:;
    ST32(s0+56, 0);
    goto L_08843D50;
L_08843D50:;
    ST32(s0+60, 0);
    sp = sp + 32;
    return;
L_08843D78:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08843D84;
L_08843D84:;
    ST32(s0+56, 0);
    goto L_08843D50;
L_08843D8C:;
    ST32(s2, 0);
    goto L_08843D4C;
L_08843D94:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08843D9C;
L_08843D9C:;
    ST32(s0+44, 0);
    goto L_08843D14;
L_08843DA4:;
    a0 = v0 + 0;
    a1 = s3 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08843DB0;
L_08843DB0:;
    a0 = LD32(s0+44);
    goto L_08843CE4;
}

/* 08843DB8 */
u32 func_08843DB8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08843DB8:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = func_0897A348();
    goto L_08843DD4;
L_08843DD4:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08843DF4; }
    goto L_08843DDC;
L_08843DDC:;
    goto L_08843DE0;
L_08843DE0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08843DF4:;
    v0 = s0 < 0x14u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08843DE0; }
    goto L_08843E00;
L_08843E00:;
    v1 = D_08AD46B8 - (18104);
    v0 = s0 << 2;
    v1 = v1 + 18104;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08843E1Cu: goto L_08843E1C; case 0x08843E3Cu: goto L_08843E3C; case 0x08843E5Cu: goto L_08843E5C; case 0x08843E7Cu: goto L_08843E7C; case 0x08843E9Cu: goto L_08843E9C; case 0x08843EBCu: goto L_08843EBC; case 0x08843EDCu: goto L_08843EDC; case 0x08843F04u: goto L_08843F04; case 0x08843F20u: goto L_08843F20; case 0x08843F40u: goto L_08843F40; case 0x08843F60u: goto L_08843F60; case 0x08843F80u: goto L_08843F80; case 0x08843F9Cu: goto L_08843F9C; case 0x08843FBCu: goto L_08843FBC; case 0x08843FECu: goto L_08843FEC; case 0x0884400Cu: goto L_0884400C; case 0x0884402Cu: goto L_0884402C; case 0x0884404Cu: goto L_0884404C; case 0x0884406Cu: goto L_0884406C; case 0x0884408Cu: goto L_0884408C; default: rs_break(0, 0x08843e14); }
L_08843E1C:;
    a0 = 92;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843E24;
L_08843E24:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_08844320(a0, a1, 0, 0, 0);
    goto L_08843E34;
L_08843E34:;
    v1 = s0 + 0;
    goto L_08843DDC;
L_08843E3C:;
    a0 = 80;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843E44;
L_08843E44:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_08844920(a0, a1, 0, 0, 0);
    goto L_08843E54;
L_08843E54:;
    v1 = s0 + 0;
    goto L_08843DDC;
L_08843E5C:;
    a0 = 88;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843E64;
L_08843E64:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_088449D8(a0, a1, 0, 0, 0);
    goto L_08843E74;
L_08843E74:;
    v1 = s0 + 0;
    goto L_08843DDC;
L_08843E7C:;
    a0 = 104;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843E84;
L_08843E84:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_08844648(a0, a1, 0, 0, 0);
    goto L_08843E94;
L_08843E94:;
    v1 = s0 + 0;
    goto L_08843DDC;
L_08843E9C:;
    a0 = 76;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843EA4;
L_08843EA4:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_08844C28(a0, a1, 0, 0, 0);
    goto L_08843EB4;
L_08843EB4:;
    v1 = s0 + 0;
    goto L_08843DDC;
L_08843EBC:;
    a0 = 80;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843EC4;
L_08843EC4:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_08844D20(a0, a1, 0, 0, 0);
    goto L_08843ED4;
L_08843ED4:;
    v1 = s0 + 0;
    goto L_08843DDC;
L_08843EDC:;
    a0 = 76;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843EE4;
L_08843EE4:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a2 = s1 + 0;
    a1 = 6;
    goto L_08843EF4;
L_08843EF4:;
    func_08844EB8(a0, a1, a2, 0, 0, 0);
    goto L_08843EFC;
L_08843EFC:;
    v1 = s0 + 0;
    goto L_08843DDC;
L_08843F04:;
    a0 = 76;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843F0C;
L_08843F0C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a2 = s1 + 0;
    a1 = 7;
    goto L_08843EF4;
L_08843F20:;
    a0 = 72;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843F28;
L_08843F28:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_08845270(a0, a1, 0, 0, 0);
    goto L_08843F38;
L_08843F38:;
    v1 = s0 + 0;
    goto L_08843DDC;
L_08843F40:;
    a0 = 200;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843F48;
L_08843F48:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_088452C4(a0, a1, 0, 0, 0);
    goto L_08843F58;
L_08843F58:;
    v1 = s0 + 0;
    goto L_08843DDC;
L_08843F60:;
    a0 = 92;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843F68;
L_08843F68:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_088454D4(a0, a1, 0, 0, 0);
    goto L_08843F78;
L_08843F78:;
    v1 = s0 + 0;
    goto L_08843DDC;
L_08843F80:;
    a0 = 76;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843F88;
L_08843F88:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a2 = s1 + 0;
    a1 = 11;
    goto L_08843EF4;
L_08843F9C:;
    a0 = 100;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843FA4;
L_08843FA4:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_088456E8(a0, a1, 0, 0, 0);
    goto L_08843FB4;
L_08843FB4:;
    v1 = s0 + 0;
    goto L_08843DDC;
L_08843FBC:;
    a0 = 72;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843FC4;
L_08843FC4:;
    a0 = v0 + 0;
    a2 = s1 + 0;
    a1 = 13;
    s0 = v0 + 0;
    func_08843C48(a0, a1, a2, 0, 0, 0);
    goto L_08843FD8;
L_08843FD8:;
    v0 = D_08AF1938 - (6456);
    v0 = v0 + 6456;
    v1 = s0 + 0;
    ST32(s0, v0);
    goto L_08843DDC;
L_08843FEC:;
    a0 = 84;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08843FF4;
L_08843FF4:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_08844884(a0, a1, 0, 0, 0);
    goto L_08844004;
L_08844004:;
    v1 = s0 + 0;
    goto L_08843DDC;
L_0884400C:;
    a0 = 80;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844014;
L_08844014:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_08845880(a0, a1, 0, 0, 0);
    goto L_08844024;
L_08844024:;
    v1 = s0 + 0;
    goto L_08843DDC;
L_0884402C:;
    a0 = 84;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844034;
L_08844034:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_08845984(a0, a1, 0, 0, 0);
    goto L_08844044;
L_08844044:;
    v1 = s0 + 0;
    goto L_08843DDC;
L_0884404C:;
    a0 = 72;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844054;
L_08844054:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_088459CC(a0, a1, 0, 0, 0);
    goto L_08844064;
L_08844064:;
    v1 = s0 + 0;
    goto L_08843DDC;
L_0884406C:;
    a0 = 84;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844074;
L_08844074:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_08845A60(a0, a1, 0, 0, 0);
    goto L_08844084;
L_08844084:;
    v1 = s0 + 0;
    goto L_08843DDC;
L_0884408C:;
    a0 = 80;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844094;
L_08844094:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_08844FAC(a0, a1, 0, 0, 0);
    goto L_088440A4;
L_088440A4:;
    v1 = s0 + 0;
    goto L_08843DDC;
}

/* 088440AC */
rv_t func_088440AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088440AC:;
    f0 = BITSF(LD32(a0+12));
    ST8(a0+64, 0);
    ST32(a0+68, FBITS(f0));
    return (rv_t){ v0, v1, f0 };
}

/* 088440BC */
rv_t func_088440BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
L_088440BC:;
    v0 = LD32(a0+40);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_088440E8; }
    goto L_088440C8;
L_088440C8:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 1; goto L_088440E8; }
    goto L_088440D4;
L_088440D4:;
    f0 = BITSF(LD32(v0+132));
    f1 = BITSF(LD32(a0+12));
    f0 = f0 + f1;
    ST32(a0+68, FBITS(f0));
    v0 = 1;
    goto L_088440E8;
L_088440E8:;
    ST8(a0+64, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 088440F0 */
u32 func_088440F0(u32 a0)
{
    u32 v0 = 0;
L_088440F0:;
    v0 = LD_U8(a0+64);
    return v0;
}

/* 088440F8 */
rv_t func_088440F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088440F8:;
    v0 = LD32(a0+40);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08844128; }
    goto L_08844104;
L_08844104:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08844128; }
    goto L_08844110;
L_08844110:;
    f1 = BITSF(LD32(v0+132));
    f0 = BITSF(LD32(a0+68));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST8(a0+64, 0); goto L_08844128; }
    goto L_08844128;
L_08844128:;
    return (rv_t){ v0, v1, f0 };
}

/* 08844130 */
rv_t func_08844130(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08844130:;
    sp = sp - 16;
    a1 = 0 + 0;
    s0 = a0 + 0;
    v1 = LD32(a0+40);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08844190; }
    goto L_08844150;
L_08844150:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08844180; }
    goto L_0884415C;
L_0884415C:;
    f0 = BITSF(LD32(s0+68));
    fcc = FCMP(f0, f12, 14);
    cnd_ = !fcc;
    if (cnd_) {  goto L_08844184; }
    goto L_08844170;
L_08844170:;
    v0 = 1;
    ST8(s0+64, v0);
    a1 = 1;
    goto L_0884417C;
L_0884417C:;
    goto L_08844180;
L_08844180:;
    goto L_08844184;
L_08844184:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08844190:;
    v1 = LD32(v1);
    v0 = LD32(v1+60);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088441A0;
L_088441A0:;
    v1 = LD32(s0+36);
    v0 = v0 & v1;
    a1 = 0 < v0;
    goto L_0884417C;
}

/* 088441B0 */
float func_088441B0(u32 a0, float f12, float f13)
{
    float f0 = 0;
    int fcc = 0;
    int cnd_;
L_088441B0:;
    f0 = BITSF(LD32(a0+12));
    fcc = FCMP(f13, f0, 14);
    cnd_ = !fcc;
    f12 = f12 - f13;
    if (cnd_) { goto L_088441D4; }
    goto L_088441C4;
L_088441C4:;
    f0 = BITSF(LD32(a0+68));
    ST8(a0+64, 0);
    f0 = f0 + f12;
    ST32(a0+68, FBITS(f0));
    goto L_088441D4;
L_088441D4:;
    return f0;
}

/* 088441DC */
rv_t func_088441DC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088441DC:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = func_088440F0(a0);
    goto L_088441F8;
L_088441F8:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08844228; }
    goto L_08844204;
L_08844204:;
    v0 = LD32(s0);
    v1 = LD32(v0+24);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844214;
L_08844214:;
    goto L_08844218;
L_08844218:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08844228:;
    f12 = BITSF(LD32(s1+132));
    a0 = s0 + 0;
    { rv_t r_ = func_08844130(a0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844234;
L_08844234:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08844218; }
    goto L_0884423C;
L_0884423C:;
    v0 = LD32(s0+60);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08844258; }
    goto L_0884424C;
L_0884424C:;
    v0 = LD_U8(s1+153);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08844268; }
    goto L_08844258;
L_08844258:;
    v0 = func_08844290(a0);
    goto L_08844260;
L_08844260:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08844278; }
    goto L_08844268;
L_08844268:;
    a1 = s1 + 0;
    { rv_t r_ = func_088440BC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844270;
L_08844270:;
    goto L_08844218;
L_08844278:;
    v1 = LD32(s0);
    v0 = LD32(v1+20);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844288;
L_08844288:;
    goto L_08844218;
}

/* 08844290 */
u32 func_08844290(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08844290:;
    a1 = a0 + 0;
    a0 = LD32(a0+56);
    v0 = 1;
    a3 = 1;
    v1 = a0 - 1;
    cnd_ = a0 == 0;
    a2 = v0 << (v1 & 31);
    if (cnd_) { goto L_088442BC; }
    goto L_088442AC;
L_088442AC:;
    v1 = LD32(a1+4);
    v0 = LD32(v1+156);
    v0 = v0 & a2;
    a3 = 0 < v0;
    goto L_088442BC;
L_088442BC:;
    v0 = a3 + 0;
    return v0;
}

/* 088442C4 */
void func_088442C4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088442C4:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 0 + 0;
    s0 = a0 + 0;
    func_08843C48(a0, a1, a2, t1, t2, t3);
    goto L_088442E0;
L_088442E0:;
    v1 = (u32)-1;
    ST32(s0+72, v1);
    v1 = D_08AEB914 - (-18156);
    v0 = D_08AF18C8 - (6344);
    f0 = BITSF(LD32(v1-18156));
    v0 = v0 + 6344;
    ST32(s0, v0);
    v0 = 1;
    ST32(s0+76, v0);
    ST32(s0+80, FBITS(f0));
    ST32(s0+88, 0);
    ST32(s0+84, 0);
    sp = sp + 16;
    return;
}

/* 08844320 */
void func_08844320(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08844320:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 0 + 0;
    s0 = a0 + 0;
    func_08843C48(a0, a1, a2, t1, t2, t3);
    goto L_0884433C;
L_0884433C:;
    v1 = (u32)-1;
    ST32(s0+72, v1);
    v1 = D_08AEB918 - (-18152);
    v0 = D_08AF18C8 - (6344);
    f0 = BITSF(LD32(v1-18152));
    v0 = v0 + 6344;
    ST32(s0, v0);
    v0 = 1;
    ST32(s0+76, v0);
    ST32(s0+80, FBITS(f0));
    ST32(s0+88, 0);
    ST32(s0+84, 0);
    sp = sp + 16;
    return;
}

/* 0884437C */
rv_t func_0884437C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884437C:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_088440BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844394;
L_08844394:;
    v1 = LD32(s0+16);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088443B4; }
    goto L_088443A0;
L_088443A0:;
    goto L_088443A4;
L_088443A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088443B4:;
    v1 = LD32(v1);
    v0 = LD32(v1+44);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088443C4;
L_088443C4:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0+16); goto L_08844450; }
    goto L_088443CC;
L_088443CC:;
    a3 = LD32(s0+72);
    v0 = (u32)-1;
    cnd_ = a3 == v0;
    a2 = 0x3fff0000u;
    if (cnd_) { goto L_088443A0; }
    goto L_088443DC;
L_088443DC:;
    v0 = LD32(s0+76);
    s1 = LD32(s0+16);
    a2 = a2 | 0xfffe;
    a1 = a3 + 0;
    a2 = v0 & a2;
    cnd_ = (s32)v0 < 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0884442C; }
    goto L_088443F8;
L_088443F8:;
    v1 = LD32(s1);
    v0 = (v0 & ~(0x3u << 30)) | ((0 & 0x3) << 30);
    a2 = v0 + 0;
    f12 = BITSF(LD32(s0+68));
    f13 = BITSF(LD32(s0+80));
    v0 = LD32(v1+112);
    a1 = a3 + 0;
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884441C;
L_0884441C:;
    v0 = LD32(s0+76);
    goto L_08844420;
L_08844420:;
    v0 = (v0 >> 30) & 0x1;
    ST8(s1+148, v0);
    goto L_088443A0;
L_0884442C:;
    v1 = LD32(s1);
    f12 = BITSF(LD32(s0+68));
    f13 = BITSF(LD32(s0+84));
    f14 = BITSF(LD32(s0+88));
    v0 = LD32(v1+120);
    t_ = v0;
    f15 = BITSF(LD32(s0+80));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, f14, f15, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844448;
L_08844448:;
    v0 = LD32(s0+76);
    goto L_08844420;
L_08844450:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088443A0; }
    goto L_0884445C;
L_0884445C:;
    v1 = LD32(v1);
    a2 = LD32(s0+76);
    a1 = LD32(s0+72);
    v0 = LD32(v1+100);
    t_ = v0;
    f12 = BITSF(LD32(s0+68));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844474;
L_08844474:;
    goto L_088443A4;
}

/* 0884447C */
rv_t func_0884447C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884447C:;
    sp = sp - 16;
    t0 = LD32(a0+16);
    cnd_ = t0 == 0;
    if (cnd_) {  goto L_08844510; }
    goto L_08844490;
L_08844490:;
    a3 = LD32(a0+72);
    v0 = (u32)-1;
    cnd_ = a3 == v0;
    if (cnd_) {  goto L_08844510; }
    goto L_088444A0;
L_088444A0:;
    a0 = LD32(a0+4);
    cnd_ = (s32)a3 < 0;
    v1 = a0 + 104;
    if (cnd_) { goto L_08844520; }
    goto L_088444AC;
L_088444AC:;
    v0 = LD32(v1+8);
    v0 = (s32)a3 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(v1); goto L_088444D0; }
    goto L_088444BC;
L_088444BC:;
    v0 = a3 << 1;
    v1 = LD32(a0+104);
    v0 = v0 + a3;
    v0 = v0 << 2;
    a1 = v1 + v0;
    goto L_088444D0;
L_088444D0:;
    cnd_ = (s32)a3 < 0;
    v1 = a0 + 116;
    if (cnd_) { goto L_08844518; }
    goto L_088444D8;
L_088444D8:;
    v0 = LD32(v1+8);
    v0 = (s32)a3 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(v1); goto L_088444FC; }
    goto L_088444E8;
L_088444E8:;
    v1 = LD32(a0+116);
    v0 = a3 << 1;
    v0 = v0 + a3;
    v0 = v0 << 2;
    a2 = v1 + v0;
    goto L_088444FC;
L_088444FC:;
    v1 = LD32(t0);
    v0 = LD32(v1+72);
    t_ = v0;
    a0 = t0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884450C;
L_0884450C:;
    goto L_08844510;
L_08844510:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08844518:;
    a2 = LD32(v1);
    goto L_088444FC;
L_08844520:;
    a1 = LD32(v1);
    goto L_088444D0;
}

/* 08844528 */
rv_t func_08844528(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08844528:;
    sp = sp - 32;
    v0 = (u32)-1;
    s3 = a0 + 0;
    a2 = LD32(a0+72);
    cnd_ = a2 == v0;
    s1 = a1 + 0;
    if (cnd_) { goto L_0884460C; }
    goto L_08844554;
L_08844554:;
    cnd_ = (s32)a2 < 0;
    s2 = a1 + 104;
    if (cnd_) { goto L_088445AC; }
    goto L_0884455C;
L_0884455C:;
    v0 = LD32(s2+8);
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 == 0;
    v0 = a2 << 1;
    if (cnd_) { goto L_088445AC; }
    goto L_0884456C;
L_0884456C:;
    a0 = LD32(a1+104);
    v0 = v0 + a2;
    v0 = v0 << 2;
    s0 = a0 + v0;
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088445AC; }
    goto L_08844588;
L_08844588:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08844638; }
    goto L_08844594;
L_08844594:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    v0 = LD32(s2+4);
    v0 = v0 - 1;
    ST32(s2+4, v0);
    a2 = LD32(s3+72);
    goto L_088445AC;
L_088445AC:;
    cnd_ = (s32)a2 < 0;
    s2 = s1 + 116;
    if (cnd_) { goto L_08844604; }
    goto L_088445B4;
L_088445B4:;
    v0 = LD32(s2+8);
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08844608; }
    goto L_088445C4;
L_088445C4:;
    v0 = LD32(s1+116);
    v1 = a2 << 1;
    v1 = v1 + a2;
    v1 = v1 << 2;
    s0 = v0 + v1;
    a0 = LD32(s0+8);
    cnd_ = a0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08844608; }
    goto L_088445E4;
L_088445E4:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08844628; }
    goto L_088445F0;
L_088445F0:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    v0 = LD32(s2+4);
    v0 = v0 - 1;
    ST32(s2+4, v0);
    goto L_08844604;
L_08844604:;
    v0 = (u32)-1;
    goto L_08844608;
L_08844608:;
    ST32(s3+72, v0);
    goto L_0884460C;
L_0884460C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08844628:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08844630;
L_08844630:;
    ST32(s0, 0);
    goto L_088445F0;
L_08844638:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08844640;
L_08844640:;
    ST32(s0, 0);
    goto L_08844594;
}

/* 08844648 */
void func_08844648(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08844648:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_088442C4(a0, a1, t1, t2, t3);
    goto L_0884465C;
L_0884465C:;
    v0 = D_08AF1890 - (6288);
    v0 = v0 + 6288;
    ST32(s0, v0);
    v0 = D_08AEB920 - (-18144);
    v1 = (u32)-1;
    f0 = BITSF(LD32(v0-18144));
    ST32(s0+100, v1);
    v1 = 3;
    ST32(s0+8, v1);
    ST32(s0+92, FBITS(f0));
    ST32(s0+96, 0);
    ST32(s0+80, 0);
    sp = sp + 16;
    return;
}

/* 0884469C */
rv_t func_0884469C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884469C:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_088440AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088446B0;
L_088446B0:;
    v0 = (u32)-1;
    ST32(s0+100, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088446C8 */
rv_t func_088446C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088446C8:;
    sp = sp - 16;
    s1 = (u32)-1;
    a1 = LD32(a0+100);
    cnd_ = a1 == s1;
    s0 = a0 + 0;
    if (cnd_) { goto L_088446F4; }
    goto L_088446E8;
L_088446E8:;
    v0 = LD32(a0+16);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08844708; }
    goto L_088446F4;
L_088446F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08844708:;
    v0 = LD32(v0);
    v1 = LD32(v0+132);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844718;
L_08844718:;
    ST32(s0+100, s1);
    goto L_088446F4;
}

/* 08844720 */
rv_t func_08844720(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08844720:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_088440BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844734;
L_08844734:;
    t0 = LD32(s0+16);
    cnd_ = t0 == 0;
    if (cnd_) { goto L_088447D4; }
    goto L_08844740;
L_08844740:;
    t2 = LD32(s0+72);
    v0 = (u32)-1;
    cnd_ = t2 == v0;
    t3 = 1;
    if (cnd_) { goto L_088447D4; }
    goto L_08844750;
L_08844750:;
    f1 = BITSF(LD32(s0+96));
    f0 = BITSF(0);
    v0 = 0x3fff0000u;
    v0 = v0 | 0xfffe;
    fcc = FCMP(f1, f0, 2);
    a0 = t0 + 0;
    cnd_ = fcc;
    a1 = t2 + 0;
    if (cnd_) { goto L_08844774; }
    goto L_08844770;
L_08844770:;
    t3 = 0 + 0;
    goto L_08844774;
L_08844774:;
    t1 = LD32(s0+76);
    a3 = t3 + 0;
    cnd_ = (s32)t1 < 0;
    a2 = t1 & v0;
    if (cnd_) { goto L_088447E0; }
    goto L_08844784;
L_08844784:;
    v1 = LD32(t0);
    f12 = BITSF(LD32(s0+68));
    f13 = BITSF(LD32(s0+92));
    f14 = BITSF(LD32(s0+80));
    v0 = LD32(v1+124);
    t1 = (t1 & ~(0x3u << 30)) | ((0 & 0x3) << 30);
    a0 = t0 + 0;
    a1 = t2 + 0;
    a2 = t1 + 0;
    t_ = v0;
    a3 = t3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088447B0;
L_088447B0:;
    f1 = BITSF(LD32(s0+96));
    goto L_088447B4;
L_088447B4:;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    ST32(s0+100, v0);
    if (cnd_) { goto L_088447D0; }
    goto L_088447C8;
L_088447C8:;
    v0 = (u32)-1;
    ST32(s0+100, v0);
    goto L_088447D0;
L_088447D0:;
    goto L_088447D4;
L_088447D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088447E0:;
    v1 = LD32(t0);
    f12 = BITSF(LD32(s0+68));
    f13 = BITSF(LD32(s0+84));
    f14 = BITSF(LD32(s0+88));
    f15 = BITSF(LD32(s0+92));
    v0 = LD32(v1+128);
    t_ = v0;
    f16 = BITSF(LD32(s0+80));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844800;
L_08844800:;
    f1 = BITSF(LD32(s0+96));
    goto L_088447B4;
}

/* 08844808 */
rv_t func_08844808(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08844808:;
    sp = sp - 16;
    s1 = (u32)-1;
    v0 = LD32(a0+100);
    cnd_ = v0 == s1;
    s0 = a0 + 0;
    if (cnd_) { goto L_08844858; }
    goto L_08844828;
L_08844828:;
    f0 = BITSF(LD32(a0+96));
    f1 = BITSF(LD32(a0+68));
    f2 = BITSF(LD32(a1+132));
    f0 = f0 + f1;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884485C; }
    goto L_08844848;
L_08844848:;
    a1 = v0 + 0;
    v0 = LD32(a0+16);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0884486C; }
    goto L_08844858;
L_08844858:;
    goto L_0884485C;
L_0884485C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0884486C:;
    v0 = LD32(v0);
    v1 = LD32(v0+132);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884487C;
L_0884487C:;
    ST32(s0+100, s1);
    goto L_08844858;
}

/* 08844884 */
void func_08844884(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08844884:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 14;
    s0 = a0 + 0;
    func_08843C48(a0, a1, a2, t1, t2, t3);
    goto L_088448A0;
L_088448A0:;
    v1 = D_08AEB928 - (-18136);
    f0 = BITSF(LD32(v1-18136));
    v0 = D_08AF1858 - (6232);
    v0 = v0 + 6232;
    ST32(s0, v0);
    ST32(s0+76, FBITS(f0));
    ST32(s0+80, 0);
    ST32(s0+72, 0);
    sp = sp + 16;
    return;
}

/* 088448D0 */
rv_t func_088448D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088448D0:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_088440BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088448E4;
L_088448E4:;
    v1 = LD32(s0+16);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08844900; }
    goto L_088448F0;
L_088448F0:;
    goto L_088448F4;
L_088448F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08844900:;
    v1 = LD32(v1);
    a2 = LD32(s0+80);
    a1 = LD32(s0+72);
    v0 = LD32(v1+136);
    t_ = v0;
    f12 = BITSF(LD32(s0+76));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844918;
L_08844918:;
    goto L_088448F4;
}

/* 08844920 */
void func_08844920(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08844920:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 1;
    s0 = a0 + 0;
    func_08843C48(a0, a1, a2, t1, t2, t3);
    goto L_0884493C;
L_0884493C:;
    v0 = D_08AEB930 - (-18128);
    f0 = BITSF(LD32(v0-18128));
    v0 = D_08AF1820 - (6176);
    v0 = v0 + 6176;
    ST32(s0+76, FBITS(f0));
    ST32(s0, v0);
    ST32(s0+72, FBITS(f0));
    sp = sp + 16;
    return;
}

/* 08844968 */
rv_t func_08844968(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08844968:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_088440AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884497C;
L_0884497C:;
    v0 = D_08B285A4 - (-31324);
    f0 = BITSF(LD32(v0-31324));
    ST32(s0+76, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08844998 */
rv_t func_08844998(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08844998:;
    f0 = BITSF(LD32(a0+76));
    v0 = D_08B285A4 - (-31324);
    ST32(v0-31324, FBITS(f0));
    return (rv_t){ v0, v1, f0 };
}

/* 088449A8 */
rv_t func_088449A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088449A8:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_088440BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088449BC;
L_088449BC:;
    v0 = D_08B285A4 - (-31324);
    f0 = BITSF(LD32(s0+72));
    ST32(v0-31324, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088449D8 */
void func_088449D8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088449D8:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 2;
    s0 = a0 + 0;
    func_08843C48(a0, a1, a2, t1, t2, t3);
    goto L_088449F4;
L_088449F4:;
    v0 = D_08AEB938 - (-18120);
    f0 = BITSF(LD32(v0-18120));
    v0 = D_08AF17E8 - (6120);
    v0 = v0 + 6120;
    ST32(s0+76, FBITS(f0));
    ST32(s0, v0);
    ST32(s0+72, 0);
    sp = sp + 16;
    return;
}

/* 08844A20 */
rv_t func_08844A20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08844A20:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = a1 + 0;
    { rv_t r_ = func_088440BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844A3C;
L_08844A3C:;
    v1 = LD32(s0+20);
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_08844A50; }
    goto L_08844A48;
L_08844A48:;
    v0 = (u32)(s32)LD_S8(v1);
    v0 = v0 < 0x1u;
    goto L_08844A50;
L_08844A50:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0+16); goto L_08844AA8; }
    goto L_08844A5C;
L_08844A5C:;
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    f0 = BITSF(LD32(v1+92));
    f0 = f0 + f0;
    goto L_08844A6C;
L_08844A6C:;
    v0 = D_08AEB93C - (-18116);
    f1 = BITSF(LD32(v0-18116));
    f0 = f0 * f1;
    goto L_08844A78;
L_08844A78:;
    v1 = LD32(s0);
    ST32(s0+80, FBITS(f0));
    a0 = s0 + 0;
    ST8(s0+84, 0);
    v0 = LD32(v1+24);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844A94;
L_08844A94:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08844AA8:;
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08844AB8; }
    goto L_08844AB0;
L_08844AB0:;
    f0 = BITSF(LD32(s0+76));
    goto L_08844A78;
L_08844AB8:;
    v1 = LD32(v1);
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844AC8;
L_08844AC8:;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s0+76)); goto L_08844A78; }
    goto L_08844AD0;
L_08844AD0:;
    v1 = LD32(s0+16);
    f0 = BITSF(LD32(v1+176));
    goto L_08844A6C;
}

/* 08844ADC */
rv_t func_08844ADC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08844ADC:;
    sp = sp - 32;
    v0 = LD_U8(a0+84);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08844BC4; }
    goto L_08844B00;
L_08844B00:;
    v0 = D_08B28B62 - (-29854);
    v1 = LD_U8(v0-29854);
    cnd_ = v1 != 0;
    if (cnd_) {  goto L_08844BC8; }
    goto L_08844B10;
L_08844B10:;
    f3 = BITSF(LD32(a0+72));
    f2 = BITSF(LD32(a0+68));
    f1 = BITSF(LD32(a1+132));
    f0 = f3 + f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    f0 = f1 - f2;
    if (cnd_) { goto L_08844C0C; }
    goto L_08844B30;
L_08844B30:;
    f20 = BITSF(LD32(a0+76));
    v0 = 1;
    ST8(a0+84, v0);
    goto L_08844B3C;
L_08844B3C:;
    v0 = D_08AEB940 - (-18112);
    f0 = BITSF(LD32(v0-18112));
    v1 = LD32(s0+20);
    a0 = 1;
    cnd_ = v1 == 0;
    f20 = f20 * f0;
    if (cnd_) { goto L_08844B5C; }
    goto L_08844B54;
L_08844B54:;
    v0 = (u32)(s32)LD_S8(v1);
    a0 = v0 < 0x1u;
    goto L_08844B5C;
L_08844B5C:;
    v0 = a0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+16); goto L_08844BE0; }
    goto L_08844B68;
L_08844B68:;
    v1 = LD32(s0+4);
    v0 = LD32(v1+28);
    cnd_ = (s32)v0 <= 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08844BC4; }
    goto L_08844B78;
L_08844B78:;
    v0 = LD32(v1+32);
    s1 = s2 << 2;
    v0 = s1 + v0;
    a0 = LD32(v0);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844B98;
L_08844B98:;
    cnd_ = v0 == 0;
    a0 = LD32(s0+4);
    if (cnd_) { goto L_08844BB0; }
    goto L_08844BA0;
L_08844BA0:;
    v0 = LD32(a0+32);
    v0 = s1 + v0;
    v1 = LD32(v0);
    ST32(v1+176, FBITS(f20));
    goto L_08844BB0;
L_08844BB0:;
    v0 = LD32(a0+28);
    s2 = s2 + 1;
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08844B78; }
    goto L_08844BC4;
L_08844BC4:;
    goto L_08844BC8;
L_08844BC8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08844BE0:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08844BC8; }
    goto L_08844BE8;
L_08844BE8:;
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844BF8;
L_08844BF8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08844BC8; }
    goto L_08844C00;
L_08844C00:;
    v0 = LD32(s0+16);
    ST32(v0+176, FBITS(f20));
    goto L_08844BC8;
L_08844C0C:;
    f2 = BITSF(LD32(a0+80));
    f1 = BITSF(LD32(a0+76));
    f0 = f0 / f3;
    f1 = f1 - f2;
    f1 = f1 * f0;
    f20 = f2 + f1;
    goto L_08844B3C;
}

/* 08844C28 */
void func_08844C28(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08844C28:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 4;
    s0 = a0 + 0;
    func_08843C48(a0, a1, a2, t1, t2, t3);
    goto L_08844C44;
L_08844C44:;
    v0 = D_08AF17B0 - (6064);
    v1 = (u32)-1;
    v0 = v0 + 6064;
    ST16(s0+72, v1);
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 08844C68 */
rv_t func_08844C68(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08844C68:;
    sp = sp - 16;
    s0 = a0 + 0;
    a1 = LD_U16(a0+72);
    a0 = D_08B29170 - (-28304);
    a0 = a0 - 28304;
    { u64 r_ = func_0887A0D0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08844C88;
L_08844C88:;
    v0 = (u32)-1;
    ST16(s0+72, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08844CA0 */
rv_t func_08844CA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08844CA0:;
    sp = sp - 16;
    v0 = 0xffff;
    s1 = a1 + 0;
    a2 = LD_U16(a0+72);
    cnd_ = a2 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08844CF0; }
    goto L_08844CC4;
L_08844CC4:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08844CF4; }
    goto L_08844CD4;
L_08844CD4:;
    v0 = LD_U8(a1+154);
    a0 = D_08B29170 - (-28304);
    a1 = a2 + 0;
    f12 = BITSF(0);
    a0 = a0 - 28304;
    cnd_ = v0 == 0;
    a2 = 999;
    if (cnd_) { goto L_08844D10; }
    goto L_08844CF0;
L_08844CF0:;
    a0 = s0 + 0;
    goto L_08844CF4;
L_08844CF4:;
    a1 = s1 + 0;
    { rv_t r_ = func_088440BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844CFC;
L_08844CFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08844D10:;
    { rv_t r_ = func_08879DB8(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844D18;
L_08844D18:;
    a0 = s0 + 0;
    goto L_08844CF4;
}

/* 08844D20 */
void func_08844D20(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08844D20:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 5;
    s0 = a0 + 0;
    func_08843C48(a0, a1, a2, t1, t2, t3);
    goto L_08844D3C;
L_08844D3C:;
    v0 = D_08AF1778 - (6008);
    v1 = (u32)-1;
    v0 = v0 + 6008;
    ST32(s0+76, v1);
    ST32(s0, v0);
    ST32(s0+72, 0);
    sp = sp + 16;
    return;
}

/* 08844D64 */
rv_t func_08844D64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08844D64:;
    sp = sp - 32;
    s2 = a1 + 0;
    v0 = LD32(a0+76);
    cnd_ = (s32)v0 < 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08844EA8; }
    goto L_08844D90;
L_08844D90:;
    v1 = LD32(a1+40);
    v0 = v0 << 2;
    f2 = BITSF(LD32(a0+12));
    v0 = v0 + v1;
    v0 = LD32(v0);
    f1 = BITSF(0);
    f0 = BITSF(LD32(v0+12));
    f0 = f2 - f0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    ST32(a0+72, FBITS(f0));
    if (cnd_) { goto L_08844DC4; }
    goto L_08844DC0;
L_08844DC0:;
    ST32(a0+72, FBITS(f1));
    goto L_08844DC4;
L_08844DC4:;
    f21 = BITSF(LD32(v0+12));
    goto L_08844DC8;
L_08844DC8:;
    f1 = f2 - f21;
    f3 = BITSF(0);
    fcc = FCMP(f1, f3, 2);
    cnd_ = fcc;
    f20 = f2;
    if (cnd_) { goto L_08844E28; }
    goto L_08844DE0;
L_08844DE0:;
    f4 = BITSF(LD32(s2+132));
    f0 = f4 - f2;
    f12 = f0 / f1;
    fcc = FCMP(f3, f12, 12);
    cnd_ = !fcc;
    v0 = D_08AEB944 - (-18108);
    if (cnd_) { goto L_08844E9C; }
    goto L_08844DFC;
L_08844DFC:;
    f0 = BITSF(LD32(v0-18108));
    f0 = f12 + f0;
    goto L_08844E04;
L_08844E04:;
    f0 = BITSF(F2I(f0, 1));
    f0 = (float)(s32)FBITS(f0);
    f0 = f0 * f1;
    f20 = f2 + f0;
    f0 = f20 + f1;
    fcc = FCMP(f0, f4, 14);
    cnd_ = fcc;
    if (cnd_) { f20 = f0; goto L_08844E28; }
    goto L_08844E28;
L_08844E28:;
    a2 = LD32(s2+36);
    cnd_ = (s32)a2 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08844E7C; }
    goto L_08844E34;
L_08844E34:;
    v1 = LD32(s2+40);
    goto L_08844E38;
L_08844E38:;
    a1 = LD32(s1+16);
    v0 = s0 << 2;
    v0 = v0 + v1;
    s0 = s0 + 1;
    f12 = f20;
    f13 = f21;
    cnd_ = a1 == 0;
    a0 = LD32(v0);
    if (cnd_) { goto L_08844E64; }
    goto L_08844E58;
L_08844E58:;
    v0 = LD32(a0+16);
    cnd_ = v0 != a1;
    v0 = (s32)s0 < (s32)a2;
    if (cnd_) { goto L_08844E74; }
    goto L_08844E64;
L_08844E64:;
    f0 = func_088441B0(a0, f12, f13);
    goto L_08844E6C;
L_08844E6C:;
    a2 = LD32(s2+36);
    v0 = (s32)s0 < (s32)a2;
    goto L_08844E74;
L_08844E74:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s2+40); goto L_08844E38; }
    goto L_08844E7C;
L_08844E7C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08844E9C:;
    f0 = BITSF(LD32(v0-18108));
    f0 = f12 - f0;
    goto L_08844E04;
L_08844EA8:;
    f2 = BITSF(LD32(a0+12));
    f0 = BITSF(LD32(a0+72));
    f21 = f2 - f0;
    goto L_08844DC8;
}

/* 08844EB8 */
void func_08844EB8(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08844EB8:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08843C48(a0, a1, a2, t1, t2, t3);
    goto L_08844ECC;
L_08844ECC:;
    v0 = D_08AF1740 - (5952);
    v0 = v0 + 5952;
    ST32(s0, v0);
    ST32(s0+72, 0);
    sp = sp + 16;
    return;
}

/* 08844EEC */
rv_t func_08844EEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08844EEC:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_088440BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844F04;
L_08844F04:;
    v1 = LD32(s0+16);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08844F24; }
    goto L_08844F10;
L_08844F10:;
    goto L_08844F14;
L_08844F14:;
    goto L_08844F18;
L_08844F18:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08844F24:;
    v1 = LD32(v1);
    v0 = LD32(v1+44);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844F34;
L_08844F34:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08844F14; }
    goto L_08844F3C;
L_08844F3C:;
    v1 = LD32(s0+72);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08844F18; }
    goto L_08844F48;
L_08844F48:;
    s1 = LD32(s0+16);
    a3 = LD32(s0+8);
    v0 = 6;
    a1 = v1 + 0;
    a2 = 1;
    cnd_ = a3 == v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08844F84; }
    goto L_08844F64;
L_08844F64:;
    v0 = 11;
    a1 = v1 + 0;
    a0 = s1 + 0;
    cnd_ = a3 == v0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08844F94; }
    goto L_08844F78;
L_08844F78:;
    a0 = s1 + 0;
    a1 = v1 + 0;
    a2 = 0 + 0;
    goto L_08844F84;
L_08844F84:;
    { rv_t r_ = func_0883FF00(a0, a1, a2, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844F8C;
L_08844F8C:;
    goto L_08844F14;
L_08844F94:;
    { rv_t r_ = func_0883FF00(a0, a1, a2, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08844F9C;
L_08844F9C:;
    a1 = LD32(s0+72);
    a0 = s1 + 0;
    a2 = 1;
    goto L_08844F84;
}

/* 08844FAC */
void func_08844FAC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08844FAC:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 19;
    s0 = a0 + 0;
    func_08843C48(a0, a1, a2, t1, t2, t3);
    goto L_08844FC8;
L_08844FC8:;
    v0 = D_08AF1708 - (5896);
    v0 = v0 + 5896;
    ST32(s0, v0);
    ST32(s0+76, 0);
    ST32(s0+72, 0);
    sp = sp + 16;
    return;
}

/* 08844FEC */
rv_t func_08844FEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08844FEC:;
    sp = sp - 16;
    v0 = D_08AF1708 - (5896);
    s0 = a0 + 0;
    v0 = v0 + 5896;
    v1 = LD32(a0+76);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08845090; }
    goto L_0884501C;
L_0884501C:;
    v1 = LD32(s0+44);
    goto L_08845020;
L_08845020:;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s1 = s0 + 44;
    a0 = v1 + 0;
    s2 = s0 + 20;
    cnd_ = v1 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08845080; }
    goto L_0884503C;
L_0884503C:;
    v0 = LD32(s0+20);
    ST32(s1+4, 0);
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_08845070; }
    goto L_08845050;
L_08845050:;
    ST32(s2+4, 0);
    ST32(s2+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08845070:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08845078;
L_08845078:;
    ST32(s0+20, 0);
    goto L_08845050;
L_08845080:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08845088;
L_08845088:;
    ST32(s0+44, 0);
    goto L_0884503C;
L_08845090:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08845098;
L_08845098:;
    v1 = LD32(s0+44);
    goto L_08845020;
}

/* 088450A0 */
rv_t func_088450A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088450A0:;
    sp = sp - 16;
    v0 = D_08AF1708 - (5896);
    s0 = a0 + 0;
    v0 = v0 + 5896;
    v1 = LD32(a0+76);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0884514C; }
    goto L_088450D0;
L_088450D0:;
    v1 = LD32(s0+44);
    goto L_088450D4;
L_088450D4:;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s1 = s0 + 44;
    a0 = v1 + 0;
    s2 = s0 + 20;
    cnd_ = v1 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0884513C; }
    goto L_088450F0;
L_088450F0:;
    v0 = LD32(s0+20);
    ST32(s1+4, 0);
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_0884512C; }
    goto L_08845104;
L_08845104:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08845114;
L_08845114:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0884512C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08845134;
L_08845134:;
    ST32(s0+20, 0);
    goto L_08845104;
L_0884513C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08845144;
L_08845144:;
    ST32(s0+44, 0);
    goto L_088450F0;
L_0884514C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08845154;
L_08845154:;
    v1 = LD32(s0+44);
    goto L_088450D4;
}

/* 0884515C */
rv_t func_0884515C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0884515C:;
    sp = sp - 32;
    s0 = a0 + 0;
    { rv_t r_ = func_088440BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08845188;
L_08845188:;
    a0 = LD32(s0+16);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088451BC; }
    goto L_08845194;
L_08845194:;
    goto L_08845198;
L_08845198:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088451BC:;
    v0 = LD32(v1+44);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088451C8;
L_088451C8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08845198; }
    goto L_088451D0;
L_088451D0:;
    a3 = LD32(s0+72);
    s3 = LD32(s0+16);
    cnd_ = a3 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08845198; }
    goto L_088451E0;
L_088451E0:;
    s4 = 2;
    s6 = 1;
    s5 = 3;
    v0 = LD32(s0+76);
    goto L_088451F0;
L_088451F0:;
    s1 = s2 << 3;
    a0 = s3 + 0;
    a1 = s1 + v0;
    v0 = LD32(a1+4);
    a2 = 0 + 0;
    cnd_ = v0 == s4;
    v1 = v0 < 0x3u;
    if (cnd_) { goto L_08845234; }
    goto L_0884520C;
L_0884520C:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08845248; }
    goto L_08845214;
L_08845214:;
    cnd_ = v0 == s6;
    a2 = 1;
    if (cnd_) { goto L_08845234; }
    goto L_0884521C;
L_0884521C:;
    s2 = s2 + 1;
    goto L_08845220;
L_08845220:;
    v0 = s2 < a3;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+76); goto L_088451F0; }
    goto L_0884522C;
L_0884522C:;
    goto L_08845198;
L_08845234:;
    a1 = LD32(a1);
    goto L_08845238;
L_08845238:;
    s2 = s2 + 1;
    { rv_t r_ = func_0883FF00(a0, a1, a2, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08845240;
L_08845240:;
    a3 = LD32(s0+72);
    goto L_08845220;
L_08845248:;
    cnd_ = v0 != s5;
    a2 = 0 + 0;
    if (cnd_) { goto L_0884521C; }
    goto L_08845250;
L_08845250:;
    a1 = LD32(a1);
    { rv_t r_ = func_0883FF00(a0, a1, a2, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08845258;
L_08845258:;
    v0 = LD32(s0+76);
    a0 = s3 + 0;
    a2 = 1;
    v0 = s1 + v0;
    a1 = LD32(v0);
    goto L_08845238;
}

/* 08845270 */
void func_08845270(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08845270:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 8;
    s0 = a0 + 0;
    func_08843C48(a0, a1, a2, t1, t2, t3);
    goto L_0884528C;
L_0884528C:;
    v0 = D_08AF16D0 - (5840);
    v0 = v0 + 5840;
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 088452A8 */
rv_t func_088452A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088452A8:;
    sp = sp - 16;
    { rv_t r_ = func_088440BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088452B8;
L_088452B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088452C4 */
void func_088452C4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088452C4:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 9;
    s0 = a0 + 0;
    func_08843C48(a0, a1, a2, t1, t2, t3);
    goto L_088452E0;
L_088452E0:;
    v0 = D_08AEB950 - (-18096);
    v1 = D_08AEB954 - (-18092);
    f0 = BITSF(LD32(v0-18096));
    f1 = BITSF(0);
    f2 = BITSF(LD32(v1-18092));
    v0 = D_08AF1698 - (5784);
    a1 = s0 + 128;
    a2 = s0 + 144;
    a3 = s0 + 160;
    v1 = s0 + 72;
    a0 = s0 + 84;
    v0 = v0 + 5784;
    ST32(v1+4, FBITS(f1));
    t0 = s0 + 176;
    ST32(v1+8, FBITS(f1));
    ST32(a0+4, FBITS(f1));
    ST32(a0+8, FBITS(f1));
    ST32(s0+72, FBITS(f1));
    ST32(s0+104, FBITS(f2));
    ST32(s0+112, FBITS(f1));
    ST32(s0+84, FBITS(f1));
    ST32(s0+96, FBITS(f0));
    ST32(s0+100, FBITS(f2));
    ST32(s0+108, FBITS(f1));
    ST32(s0+116, FBITS(f0));
    ST32(s0+128, FBITS(f0));
    ST32(s0, v0);
    ST32(a1+12, FBITS(f0));
    ST32(a1+4, FBITS(f0));
    ST32(a1+8, FBITS(f0));
    ST32(s0+192, 0);
    ST32(s0+144, FBITS(f0));
    ST32(s0+120, 0);
    ST32(a2+12, FBITS(f0));
    ST32(a2+4, FBITS(f0));
    ST32(a2+8, FBITS(f0));
    ST32(s0+160, FBITS(f0));
    ST32(a3+12, FBITS(f0));
    ST32(a3+4, FBITS(f0));
    ST32(a3+8, FBITS(f0));
    ST32(s0+176, FBITS(f0));
    ST32(t0+12, FBITS(f0));
    ST32(t0+4, FBITS(f0));
    ST32(t0+8, FBITS(f0));
    sp = sp + 16;
    return;
}

/* 088453A0 */
rv_t func_088453A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088453A0:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+192);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088453CC; }
    goto L_088453BC;
L_088453BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088453CC:;
    { u64 r_ = func_088EB150(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088453D4;
L_088453D4:;
    ST32(s0+192, 0);
    goto L_088453BC;
}

/* 088453DC */
rv_t func_088453DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088453DC:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = a1 + 0;
    { rv_t r_ = func_088440BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088453F8;
L_088453F8:;
    f0 = BITSF(0);
    f1 = BITSF(LD32(s0+96));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_08845420; }
    goto L_08845410;
L_08845410:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08845420:;
    v0 = D_08AEB958 - (-18088);
    f0 = BITSF(LD32(v0-18088));
    a0 = LD32(s0+120);
    f0 = f0 / f1;
    ST32(s0+116, FBITS(f0));
    v0 = func_0883AE14(a0);
    goto L_08845438;
L_08845438:;
    ST32(s0+124, v0);
    a0 = s0 + 72;
    a1 = s0 + 84;
    a2 = s0 + 100;
    { rv_t r_ = func_088EB240(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884544C;
L_0884544C:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08845460; }
    goto L_08845458;
L_08845458:;
    v0 = LD32(v0+4);
    ST32(s0+192, v0);
    goto L_08845460;
L_08845460:;
    f0 = BITSF(LD32(s0+12));
    v1 = LD32(s0);
    ST32(s0+196, FBITS(f0));
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08845478;
L_08845478:;
    goto L_08845410;
}

/* 08845480 */
rv_t func_08845480(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08845480:;
    sp = sp - 16;
    v0 = a0 + 0;
    a0 = LD32(a0+192);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088454B8; }
    goto L_08845498;
L_08845498:;
    f0 = BITSF(LD32(v0+12));
    f1 = BITSF(LD32(v0+96));
    f2 = BITSF(LD32(v0+196));
    f0 = f0 + f1;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(a1+132)); goto L_088454C0; }
    goto L_088454B8;
L_088454B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088454C0:;
    f12 = f0 - f2;
    ST32(v0+196, FBITS(f0));
    { rv_t r_ = func_088EB4E8(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088454CC;
L_088454CC:;
    goto L_088454B8;
}

/* 088454D4 */
void func_088454D4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088454D4:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 10;
    s0 = a0 + 0;
    func_08843C48(a0, a1, a2, t1, t2, t3);
    goto L_088454F0;
L_088454F0:;
    v1 = 1;
    ST32(s0+88, v1);
    v1 = D_08AEB960 - (-18080);
    v0 = D_08AF1660 - (5728);
    f0 = BITSF(LD32(v1-18080));
    v0 = v0 + 5728;
    ST32(s0, v0);
    ST32(s0+84, FBITS(f0));
    ST32(s0+72, 0);
    ST32(s0+80, 0);
    ST32(s0+76, 0);
    sp = sp + 16;
    return;
}

/* 0884552C */
rv_t func_0884552C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884552C:;
    v0 = LD32(a0+88);
    sp = sp - 16;
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0884554C; }
    goto L_08845540;
L_08845540:;
    goto L_08845544;
L_08845544:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0884554C:;
    v0 = func_088EE90C();
    goto L_08845554;
L_08845554:;
    goto L_08845544;
}

/* 0884555C */
rv_t func_0884555C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0884555C:;
    sp = sp - 48;
    s2 = a1 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_088440BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08845584;
L_08845584:;
    v0 = D_08AEB964 - (-18076);
    f0 = BITSF(LD32(s0+72));
    f1 = BITSF(LD32(v0-18076));
    f2 = BITSF(0);
    f1 = f0 * f1;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    v1 = D_08AEB968 - (-18072);
    if (cnd_) { goto L_088456DC; }
    goto L_088455A8;
L_088455A8:;
    f0 = BITSF(LD32(v1-18072));
    f0 = f1 + f0;
    goto L_088455B0;
L_088455B0:;
    f4 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0-18076));
    f0 = BITSF(LD32(s0+76));
    f2 = BITSF(0);
    f1 = f0 * f1;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v1-18072));
    if (cnd_) { goto L_088456D4; }
    goto L_088455D4;
L_088455D4:;
    f0 = f1 + f0;
    goto L_088455D8;
L_088455D8:;
    f3 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(s0+80));
    f0 = BITSF(LD32(v0-18076));
    f2 = BITSF(0);
    f1 = f1 * f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v1-18072));
    if (cnd_) { goto L_088456CC; }
    goto L_088455FC;
L_088455FC:;
    f0 = f1 + f0;
    goto L_08845600;
L_08845600:;
    v0 = FBITS(f4);
    v1 = FBITS(f3);
    f0 = BITSF(F2I(f0, 1));
    a0 = v0 << 16;
    v0 = v1 << 8;
    a0 = a0 | v0;
    a1 = LD32(s0+88);
    v0 = FBITS(f0);
    a2 = LD_U8(s2+153);
    a1 = a1 & 0x1;
    a0 = a0 | v0;
    s1 = 1;
    v0 = 0xff000000u;
    v1 = 2;
    s3 = a0 | v0;
    if (a1 == 0) s1 = v1;
    cnd_ = a2 == 0;
    f20 = BITSF(LD32(s0+84));
    if (cnd_) { goto L_0884566C; }
    goto L_08845648;
L_08845648:;
    f1 = BITSF(LD32(s0+12));
    f0 = BITSF(LD32(s2+132));
    f2 = BITSF(0);
    f0 = f0 - f1;
    f20 = f20 - f0;
    fcc = FCMP(f20, f2, 12);
    cnd_ = fcc;
    if (cnd_) { f20 = f2; goto L_0884566C; }
    goto L_0884566C;
L_0884566C:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08845694; }
    goto L_08845674;
L_08845674:;
    v0 = LD_U8(s2+154);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08845694; }
    goto L_08845680;
L_08845680:;
    f0 = BITSF(0);
    fcc = FCMP(f20, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_088456B0; }
    goto L_08845694;
L_08845694:;
    v0 = func_088EE90C();
    goto L_0884569C;
L_0884569C:;
    a0 = s1 + 0;
    f12 = f20;
    a1 = s3 + 0;
    { rv_t r_ = func_088EE898(a0, a1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088456AC;
L_088456AC:;
    goto L_088456B0;
L_088456B0:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088456CC:;
    f0 = f1 - f0;
    goto L_08845600;
L_088456D4:;
    f0 = f1 - f0;
    goto L_088455D8;
L_088456DC:;
    f0 = BITSF(LD32(v1-18072));
    f0 = f1 - f0;
    goto L_088455B0;
}

/* 088456E8 */
void func_088456E8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088456E8:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 12;
    s0 = a0 + 0;
    func_08843C48(a0, a1, a2, t1, t2, t3);
    goto L_08845704;
L_08845704:;
    v0 = D_08AF1628 - (5672);
    v0 = v0 + 5672;
    ST32(s0, v0);
    ST32(s0+76, 0);
    ST32(s0+72, 0);
    sp = sp + 16;
    return;
}

/* 08845728 */
rv_t func_08845728(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08845728:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_088440AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884573C;
L_0884573C:;
    v0 = D_08B44C34 - (19508);
    f2 = BITSF(LD32(v0+19508));
    v1 = D_08B44C38 - (19512);
    v0 = D_08B16158 - (24920);
    f3 = BITSF(LD32(v1+19512));
    f1 = BITSF(LD32(v0+24920));
    v1 = D_08B1615C - (24924);
    v0 = D_08B16154 - (24916);
    f0 = BITSF(LD32(v1+24924));
    v1 = LD32(v0+24916);
    ST32(s0+80, FBITS(f2));
    ST32(s0+96, v1);
    ST32(s0+84, FBITS(f3));
    ST32(s0+88, FBITS(f1));
    ST32(s0+92, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08845788 */
rv_t func_08845788(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08845788:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_088440F0(a0);
    goto L_0884579C;
L_0884579C:;
    cnd_ = v0 != 0;
    if (cnd_) { f12 = BITSF(LD32(s0+80)); goto L_088457B4; }
    goto L_088457A4;
L_088457A4:;
    goto L_088457A8;
L_088457A8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088457B4:;
    f13 = BITSF(LD32(s0+84));
    { u64 r_ = func_088EDAB4(f12, f13); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088457BC;
L_088457BC:;
    f13 = BITSF(LD32(s0+92));
    a0 = LD32(s0+96);
    f12 = BITSF(LD32(s0+88));
    { u64 r_ = func_088EDA98(a0, f12, f13); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088457CC;
L_088457CC:;
    goto L_088457A8;
}

/* 088457D4 */
rv_t func_088457D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088457D4:;
    sp = sp - 16;
    v0 = D_08B28B62 - (-29854);
    v1 = LD_U8(v0-29854);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08845800; }
    goto L_088457F0;
L_088457F0:;
    goto L_088457F4;
L_088457F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08845800:;
    { rv_t r_ = func_088440BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08845808;
L_08845808:;
    f1 = BITSF(0);
    f12 = BITSF(LD32(s0+72));
    fcc = FCMP(f12, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s0+16); goto L_08845838; }
    goto L_08845820;
L_08845820:;
    f0 = BITSF(LD32(s0+76));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_08845870; }
    goto L_08845834;
L_08845834:;
    v0 = LD32(s0+16);
    goto L_08845838;
L_08845838:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08845854; }
    goto L_08845840;
L_08845840:;
    a0 = LD32(v0+24);
    f13 = BITSF(LD32(s0+76));
    { u64 r_ = func_088EDA98(a0, f12, f13); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884584C;
L_0884584C:;
    goto L_088457F4;
L_08845854:;
    { rv_t r_ = func_088ED9D0(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884585C;
L_0884585C:;
    f13 = BITSF(LD32(s0+76));
    f12 = BITSF(LD32(s0+72));
    { u64 r_ = func_088EDAB4(f12, f13); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08845868;
L_08845868:;
    goto L_088457F4;
L_08845870:;
    { rv_t r_ = func_088ED9D0(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08845878;
L_08845878:;
    goto L_088457F4;
}

/* 08845880 */
void func_08845880(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08845880:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 15;
    s0 = a0 + 0;
    func_08843C48(a0, a1, a2, t1, t2, t3);
    goto L_0884589C;
L_0884589C:;
    v0 = D_08AF15F0 - (5616);
    v0 = v0 + 5616;
    ST32(s0, v0);
    ST32(s0+76, 0);
    ST32(s0+72, 0);
    sp = sp + 16;
    return;
}

/* 088458C0 */
rv_t func_088458C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088458C0:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_088440BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088458DC;
L_088458DC:;
    a2 = 0 + 0;
    a3 = LD32(s1+36);
    cnd_ = (s32)a3 <= 0;
    f12 = BITSF(LD32(s1+68));
    if (cnd_) { goto L_08845914; }
    goto L_088458EC;
L_088458EC:;
    v1 = LD32(s1+40);
    t0 = 15;
    a0 = LD32(v1);
    goto L_088458F8;
L_088458F8:;
    a2 = a2 + 1;
    a1 = (s32)a2 < (s32)a3;
    v0 = LD32(a0+8);
    cnd_ = v0 == t0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08845964; }
    goto L_0884590C;
L_0884590C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_088458F8; }
    goto L_08845914;
L_08845914:;
    f1 = BITSF(LD32(s0+76));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { a1 = LD32(s0+72); goto L_08845948; }
    goto L_0884592C;
L_0884592C:;
    f0 = BITSF(LD32(s0+12));
    f0 = f1 + f0;
    fcc = FCMP(f12, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f12 = f0; goto L_08845944; }
    goto L_08845944;
L_08845944:;
    a1 = LD32(s0+72);
    goto L_08845948;
L_08845948:;
    a0 = s1 + 0;
    f0 = func_0883E028(a0, a1, f12);
    goto L_08845950;
L_08845950:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08845964:;
    f1 = BITSF(LD32(a0+12));
    f0 = BITSF(LD32(s0+12));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884590C; }
    goto L_0884597C;
L_0884597C:;
    f12 = f1;
    goto L_08845914;
}

/* 08845984 */
void func_08845984(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08845984:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 16;
    s0 = a0 + 0;
    func_08843C48(a0, a1, a2, t1, t2, t3);
    goto L_088459A0;
L_088459A0:;
    v0 = D_08AF0E38 - (3640);
    v0 = v0 + 3640;
    v1 = s0 + 72;
    ST32(s0, v0);
    ST32(s0+72, 0);
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    sp = sp + 16;
    return;
}

/* 088459CC */
void func_088459CC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088459CC:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 17;
    s0 = a0 + 0;
    func_08843C48(a0, a1, a2, t1, t2, t3);
    goto L_088459E8;
L_088459E8:;
    v0 = D_08AF15B8 - (5560);
    v0 = v0 + 5560;
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 08845A04 */
rv_t func_08845A04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08845A04:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_088440BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08845A18;
L_08845A18:;
    v1 = LD32(s0+16);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08845A34; }
    goto L_08845A24;
L_08845A24:;
    goto L_08845A28;
L_08845A28:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08845A34:;
    v1 = LD32(v1);
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08845A44;
L_08845A44:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08845A28; }
    goto L_08845A4C;
L_08845A4C:;
    a1 = LD32(s0+16);
    a0 = LD32(s0+4);
    { rv_t r_ = func_0883E4B8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08845A58;
L_08845A58:;
    goto L_08845A28;
}

/* 08845A60 */
void func_08845A60(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08845A60:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 18;
    s0 = a0 + 0;
    func_08843C48(a0, a1, a2, t1, t2, t3);
    goto L_08845A7C;
L_08845A7C:;
    v0 = D_08AF1580 - (5504);
    v0 = v0 + 5504;
    v1 = s0 + 72;
    ST32(s0, v0);
    ST32(s0+72, 0);
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    sp = sp + 16;
    return;
}

/* 08845AA8 */
rv_t func_08845AA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08845AA8:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_088440BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08845ABC;
L_08845ABC:;
    v1 = LD32(s0+16);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08845AD8; }
    goto L_08845AC8;
L_08845AC8:;
    goto L_08845ACC;
L_08845ACC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08845AD8:;
    v1 = LD32(v1);
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08845AE8;
L_08845AE8:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08845ACC; }
    goto L_08845AF0;
L_08845AF0:;
    a1 = LD32(s0+72);
    a0 = LD32(s0+16);
    { u64 r_ = func_08841CC0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08845AFC;
L_08845AFC:;
    goto L_08845ACC;
}

/* 08845B04 */
void func_08845B04(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08845B04:;
    a0 = D_08B28B64 - (-29852);
    sp = sp - 16;
    a0 = a0 - 29852;
    func_08845FF4();
    goto L_08845B18;
L_08845B18:;
    sp = sp + 16;
    return;
}

/* 08845B24 */
void func_08845B24(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08845B24:;
    a0 = D_08B28B64 - (-29852);
    sp = sp - 16;
    a0 = a0 - 29852;
    func_08845FFC(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08845B38;
L_08845B38:;
    sp = sp + 16;
    return;
}

/* 08845B44 */
void func_08845B44(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08845B44:;
    a0 = D_08B28B64 - (-29852);
    sp = sp - 16;
    a0 = a0 - 29852;
    func_08846018(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08845B58;
L_08845B58:;
    sp = sp + 16;
    return;
}

/* 08845B64 */
void func_08845B64(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08845B64:;
    a0 = D_08B28B64 - (-29852);
    sp = sp - 16;
    a0 = a0 - 29852;
    func_088461CC(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08845B78;
L_08845B78:;
    sp = sp + 16;
    return;
}

/* 08845B84 */
float func_08845B84(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
L_08845B84:;
    v0 = D_08B15AEC - (23276);
    v1 = D_08B15A08 - (23048);
    f0 = BITSF(LD32(v0+23276));
    f1 = BITSF(LD32(v1+23048));
    v0 = D_08AEB96C - (-18068);
    f3 = BITSF(LD32(v0-18068));
    f0 = f0 / f1;
    v0 = D_08AEB970 - (-18064);
    f2 = BITSF(LD32(v0-18064));
    f0 = f0 - f3;
    f0 = f0 * f2;
    f1 = f0 + f0;
    f1 = f1 + f3;
    f3 = f3 / f1;
    f0 = f0 * f3;
    return f0;
}

/* 08845BC4 */
u32 func_08845BC4(u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08845BC4:;
    sp = sp - 16;
    v0 = D_08B2C1BC - (-15940);
    a0 = D_08B28B64 - (-29852);
    v1 = LD_U8(v0-15940);
    a0 = a0 - 29852;
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08845BF0; }
    goto L_08845BE4;
L_08845BE4:;
    goto L_08845BE8;
L_08845BE8:;
    sp = sp + 16;
    return v0;
L_08845BF0:;
    v0 = func_08846A60(a0, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08845BF8;
L_08845BF8:;
    goto L_08845BE8;
}

/* 08845C00 */
void func_08845C00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08845C00:;
    sp = sp - 32;
    v0 = D_08B28BC8 - (-29752);
    v0 = LD32(v0-29752);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08845C54; }
    goto L_08845C2C;
L_08845C2C:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08845C34;
L_08845C34:;
    goto L_08845C38;
L_08845C38:;
    sp = sp + 32;
    return;
L_08845C54:;
    s0 = D_08B2C12C - (-16084);
    func_08901714();
    goto L_08845C5C;
L_08845C5C:;
    s0 = s0 - 16084;
    f0 = func_08845B84();
    goto L_08845C64;
L_08845C64:;
    v0 = D_08B306EC - (1772);
    f23 = f0;
    f0 = BITSF(LD32(v0+1772));
    v1 = D_08B306F0 - (1776);
    f1 = BITSF(LD32(v1+1776));
    f22 = (float)(s32)FBITS(f0);
    v0 = D_08B15AE8 - (23272);
    v1 = LD32(v0+23272);
    f20 = (float)(s32)FBITS(f1);
    f21 = f23 * f22;
    f12 = BITSF(0);
    v0 = (u32)-1;
    ST32(s0+64, v1);
    v1 = 1;
    f13 = f12;
    ST32(s0+84, v1);
    f14 = f20;
    f15 = f21;
    ST32(s0+80, v0);
    a0 = s0 + 0;
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_08845CB8;
L_08845CB8:;
    a1 = 1;
    a0 = s0 + 0;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08845CC4;
L_08845CC4:;
    v0 = D_08AEB978 - (-18056);
    f13 = BITSF(LD32(v0-18056));
    f12 = BITSF(0);
    f14 = f20;
    f13 = f13 - f23;
    f15 = f21;
    a0 = s0 + 0;
    f13 = f13 * f22;
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_08845CE8;
L_08845CE8:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08845CF4;
L_08845CF4:;
    v0 = func_08901790();
    goto L_08845CFC;
L_08845CFC:;
    goto L_08845C38;
}

/* 08845D04 */
rv_t func_08845D04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08845D04:;
    sp = sp - 16;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08845D1C; }
    goto L_08845D10;
L_08845D10:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08845D28; }
    goto L_08845D1C;
L_08845D1C:;
    goto L_08845D20;
L_08845D20:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08845D28:;
    { rv_t r_ = func_0883E03C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08845D30;
L_08845D30:;
    goto L_08845D20;
}

/* 08845D38 */
u64 func_08845D38(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08845D38:;
    a0 = D_08B28B64 - (-29852);
    sp = sp - 16;
    a0 = a0 - 29852;
    { u64 r_ = func_08846C44(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08845D4C;
L_08845D4C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08845D58 */
void func_08845D58(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08845D58:;
    sp = sp - 16;
    v0 = a0 + 0;
    a0 = D_08B28B64 - (-29852);
    a0 = a0 - 29852;
    s0 = D_08B28BD0 - (-29744);
    ST32(s0-29744, v0);
    func_08846D4C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08845D7C;
L_08845D7C:;
    ST32(s0-29744, 0);
    sp = sp + 16;
    return;
}

/* 08845D90 */
u64 func_08845D90(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
L_08845D90:;
    v0 = a0 + 24;
    v1 = a0 + 48;
    a1 = a0 + 72;
    ST32(a0+4, 0);
    ST8(a0+8, 0);
    ST32(a0+12, 0);
    ST32(a0+16, 0);
    ST32(a0+20, 0);
    ST32(v0+4, 0);
    ST32(v0+20, 0);
    ST8(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v0+16, 0);
    ST32(v1+20, 0);
    ST32(v1+4, 0);
    ST8(v1+8, 0);
    ST32(v1+12, 0);
    ST32(v1+16, 0);
    ST32(a0+72, 0);
    ST32(a1+20, 0);
    ST32(a0, 0);
    ST32(a0+24, 0);
    ST32(a0+48, 0);
    ST32(a1+4, 0);
    ST8(a1+8, 0);
    ST32(a1+12, 0);
    ST32(a1+16, 0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08845E00 */
u64 func_08845E00(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08845E00:;
    sp = sp - 32;
    s2 = a0 + 72;
    s0 = LD32(a0+72);
    cnd_ = s0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08845E48; }
    goto L_08845E28;
L_08845E28:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08845FE4; }
    goto L_08845E34;
L_08845E34:;
    a1 = LD32(s0+12);
    goto L_08845E38;
L_08845E38:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08845FD4; }
    goto L_08845E40;
L_08845E40:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08845E48;
L_08845E48:;
    a0 = LD32(s2+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08845FC4; }
    goto L_08845E54;
L_08845E54:;
    s0 = LD32(s1+48);
    goto L_08845E58;
L_08845E58:;
    ST32(s2+16, 0);
    s3 = s1 + 48;
    cnd_ = s0 == 0;
    ST32(s2+12, 0);
    if (cnd_) { goto L_08845E88; }
    goto L_08845E68;
L_08845E68:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08845FB4; }
    goto L_08845E74;
L_08845E74:;
    a1 = LD32(s0+12);
    goto L_08845E78;
L_08845E78:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08845FA4; }
    goto L_08845E80;
L_08845E80:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08845E88;
L_08845E88:;
    a0 = LD32(s3+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08845F94; }
    goto L_08845E94;
L_08845E94:;
    s0 = LD32(s1+24);
    goto L_08845E98;
L_08845E98:;
    ST32(s3+16, 0);
    s2 = s1 + 24;
    cnd_ = s0 == 0;
    ST32(s3+12, 0);
    if (cnd_) { goto L_08845EC8; }
    goto L_08845EA8;
L_08845EA8:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08845F84; }
    goto L_08845EB4;
L_08845EB4:;
    a1 = LD32(s0+12);
    goto L_08845EB8;
L_08845EB8:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08845F74; }
    goto L_08845EC0;
L_08845EC0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08845EC8;
L_08845EC8:;
    a0 = LD32(s2+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08845F64; }
    goto L_08845ED4;
L_08845ED4:;
    s0 = LD32(s1);
    goto L_08845ED8;
L_08845ED8:;
    ST32(s2+16, 0);
    cnd_ = s0 == 0;
    ST32(s2+12, 0);
    if (cnd_) { goto L_08845F04; }
    goto L_08845EE4;
L_08845EE4:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08845F54; }
    goto L_08845EF0;
L_08845EF0:;
    a1 = LD32(s0+12);
    goto L_08845EF4;
L_08845EF4:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08845F44; }
    goto L_08845EFC;
L_08845EFC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08845F04;
L_08845F04:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08845F34; }
    goto L_08845F10;
L_08845F10:;
    ST32(s1+16, 0);
    goto L_08845F14;
L_08845F14:;
    ST32(s1+12, 0);
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08845F34:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08845F3C;
L_08845F3C:;
    ST32(s1+16, 0);
    goto L_08845F14;
L_08845F44:;
    a0 = s1 + 0;
    func_08AA92AC(a0, a1, t1, t2, t3);
    goto L_08845F4C;
L_08845F4C:;
    goto L_08845EFC;
L_08845F54:;
    a0 = s1 + 0;
    func_08AA92AC(a0, a1, t1, t2, t3);
    goto L_08845F5C;
L_08845F5C:;
    a1 = LD32(s0+12);
    goto L_08845EF4;
L_08845F64:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08845F6C;
L_08845F6C:;
    s0 = LD32(s1);
    goto L_08845ED8;
L_08845F74:;
    a0 = s2 + 0;
    func_08AA92AC(a0, a1, t1, t2, t3);
    goto L_08845F7C;
L_08845F7C:;
    goto L_08845EC0;
L_08845F84:;
    a0 = s2 + 0;
    func_08AA92AC(a0, a1, t1, t2, t3);
    goto L_08845F8C;
L_08845F8C:;
    a1 = LD32(s0+12);
    goto L_08845EB8;
L_08845F94:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08845F9C;
L_08845F9C:;
    s0 = LD32(s1+24);
    goto L_08845E98;
L_08845FA4:;
    a0 = s3 + 0;
    func_08AA92AC(a0, a1, t1, t2, t3);
    goto L_08845FAC;
L_08845FAC:;
    goto L_08845E80;
L_08845FB4:;
    a0 = s3 + 0;
    func_08AA92AC(a0, a1, t1, t2, t3);
    goto L_08845FBC;
L_08845FBC:;
    a1 = LD32(s0+12);
    goto L_08845E78;
L_08845FC4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08845FCC;
L_08845FCC:;
    s0 = LD32(s1+48);
    goto L_08845E58;
L_08845FD4:;
    a0 = s2 + 0;
    func_08AA92AC(a0, a1, t1, t2, t3);
    goto L_08845FDC;
L_08845FDC:;
    goto L_08845E40;
L_08845FE4:;
    a0 = s2 + 0;
    func_08AA92AC(a0, a1, t1, t2, t3);
    goto L_08845FEC;
L_08845FEC:;
    a1 = LD32(s0+12);
    goto L_08845E38;
}

/* 08845FF4 */
void func_08845FF4(void)
{
L_08845FF4:;
    return;
}

/* 08845FFC */
void func_08845FFC(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08845FFC:;
    sp = sp - 16;
    func_08846018(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0884600C;
L_0884600C:;
    sp = sp + 16;
    return;
}

/* 08846018 */
void func_08846018(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08846018:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08846748(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08846034;
L_08846034:;
    v0 = 1;
    s1 = LD32(s0);
    v1 = ((u32)(uintptr_t)func_08846190) - (24976);
    ST8(s0+8, v0);
    cnd_ = s1 == 0;
    s2 = v1 + 24976;
    if (cnd_) { goto L_08846070; }
    goto L_0884604C;
L_0884604C:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08846180; }
    goto L_08846058;
L_08846058:;
    a1 = LD32(s1+12);
    goto L_0884605C;
L_0884605C:;
    cnd_ = a1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08846170; }
    goto L_08846064;
L_08846064:;
    a0 = LD32(s1);
    goto L_08846068;
L_08846068:;
    t_ = s2;
    a1 = s1 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08846070;
L_08846070:;
    a0 = LD32(s0+12);
    cnd_ = a0 == 0;
    if (cnd_) { s1 = LD32(s0); goto L_088460D4; }
    goto L_0884607C;
L_0884607C:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088460C0; }
    goto L_08846088;
L_08846088:;
    v0 = s1 << 2;
    goto L_0884608C;
L_0884608C:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s0 + 0;
    s1 = s1 + 1;
    { u64 r_ = func_08AA8E60(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088460A0;
L_088460A0:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088460A8;
L_088460A8:;
    v0 = LD32(s0+16);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s0+12);
    if (cnd_) { goto L_088460C0; }
    goto L_088460B8;
L_088460B8:;
    v0 = s1 << 2;
    goto L_0884608C;
L_088460C0:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08846160; }
    goto L_088460C8;
L_088460C8:;
    ST32(s0+12, 0);
    goto L_088460CC;
L_088460CC:;
    ST32(s0+16, 0);
    s1 = LD32(s0);
    goto L_088460D4;
L_088460D4:;
    cnd_ = s1 == 0;
    ST8(s0+8, 0);
    if (cnd_) { goto L_088460FC; }
    goto L_088460DC;
L_088460DC:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08846150; }
    goto L_088460E8;
L_088460E8:;
    a1 = LD32(s1+12);
    goto L_088460EC;
L_088460EC:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08846140; }
    goto L_088460F4;
L_088460F4:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088460FC;
L_088460FC:;
    a0 = LD32(s0+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08846130; }
    goto L_08846108;
L_08846108:;
    ST32(s0, 0);
    goto L_0884610C;
L_0884610C:;
    ST32(s0+12, 0);
    ST32(s0+16, 0);
    ST32(s0+4, 0);
    sp = sp + 16;
    return;
L_08846130:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08846138;
L_08846138:;
    ST32(s0, 0);
    goto L_0884610C;
L_08846140:;
    a0 = s0 + 0;
    func_08AA92AC(a0, a1, 0, 0, 0);
    goto L_08846148;
L_08846148:;
    goto L_088460F4;
L_08846150:;
    a0 = s0 + 0;
    func_08AA92AC(a0, a1, 0, 0, 0);
    goto L_08846158;
L_08846158:;
    a1 = LD32(s1+12);
    goto L_088460EC;
L_08846160:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08846168;
L_08846168:;
    ST32(s0+12, 0);
    goto L_088460CC;
L_08846170:;
    a2 = s2 + 0;
    func_08AA931C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08846178;
L_08846178:;
    a0 = LD32(s1);
    goto L_08846068;
L_08846180:;
    a2 = s2 + 0;
    func_08AA931C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08846188;
L_08846188:;
    a1 = LD32(s1+12);
    goto L_0884605C;
}

/* 08846190 */
rv_t func_08846190(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08846190:;
    sp = sp - 16;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088461A8; }
    goto L_0884619C;
L_0884619C:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088461B4; }
    goto L_088461A8;
L_088461A8:;
    goto L_088461AC;
L_088461AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088461B4:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088461C4;
L_088461C4:;
    goto L_088461AC;
}

/* 088461CC */
void func_088461CC(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088461CC:;
    sp = sp - 32;
    s0 = a0 + 48;
    v0 = LD32(s0+4);
    cnd_ = (s32)v0 <= 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08846280; }
    goto L_088461F4;
L_088461F4:;
    s1 = LD32(a0+48);
    v0 = 1;
    v1 = ((u32)(uintptr_t)func_088466A0) - (26272);
    ST8(s0+8, v0);
    cnd_ = s1 == 0;
    s3 = v1 + 26272;
    if (cnd_) { goto L_08846230; }
    goto L_0884620C;
L_0884620C:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08846430; }
    goto L_08846218;
L_08846218:;
    a1 = LD32(s1+12);
    goto L_0884621C;
L_0884621C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_08846420; }
    goto L_08846224;
L_08846224:;
    a0 = LD32(s1);
    goto L_08846228;
L_08846228:;
    t_ = s3;
    a1 = s1 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08846230;
L_08846230:;
    a0 = s0 + 0;
    { u64 r_ = func_08AA93A0(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08846238;
L_08846238:;
    s1 = LD32(s2+48);
    cnd_ = s1 == 0;
    ST8(s0+8, 0);
    if (cnd_) { goto L_08846264; }
    goto L_08846244;
L_08846244:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08846410; }
    goto L_08846250;
L_08846250:;
    a1 = LD32(s1+12);
    goto L_08846254;
L_08846254:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08846400; }
    goto L_0884625C;
L_0884625C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08846264;
L_08846264:;
    a0 = LD32(s0+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088463F0; }
    goto L_08846270;
L_08846270:;
    ST32(s0, 0);
    goto L_08846274;
L_08846274:;
    ST32(s0+12, 0);
    ST32(s0+16, 0);
    ST32(s0+4, 0);
    goto L_08846280;
L_08846280:;
    s0 = s2 + 72;
    v0 = LD32(s0+4);
    cnd_ = (s32)v0 <= 0;
    v0 = 1;
    if (cnd_) { goto L_08846318; }
    goto L_08846290;
L_08846290:;
    s1 = LD32(s2+72);
    v1 = ((u32)(uintptr_t)func_08846708) - (26376);
    ST8(s0+8, v0);
    cnd_ = s1 == 0;
    s3 = v1 + 26376;
    if (cnd_) { goto L_088462C8; }
    goto L_088462A4;
L_088462A4:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_088463E0; }
    goto L_088462B0;
L_088462B0:;
    a1 = LD32(s1+12);
    goto L_088462B4;
L_088462B4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_088463D0; }
    goto L_088462BC;
L_088462BC:;
    a0 = LD32(s1);
    goto L_088462C0;
L_088462C0:;
    t_ = s3;
    a1 = s1 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088462C8;
L_088462C8:;
    a0 = s0 + 0;
    { u64 r_ = func_08AA93A0(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088462D0;
L_088462D0:;
    s1 = LD32(s2+72);
    cnd_ = s1 == 0;
    ST8(s0+8, 0);
    if (cnd_) { goto L_088462FC; }
    goto L_088462DC;
L_088462DC:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088463C0; }
    goto L_088462E8;
L_088462E8:;
    a1 = LD32(s1+12);
    goto L_088462EC;
L_088462EC:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088463B0; }
    goto L_088462F4;
L_088462F4:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088462FC;
L_088462FC:;
    a0 = LD32(s0+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088463A0; }
    goto L_08846308;
L_08846308:;
    ST32(s0, 0);
    goto L_0884630C;
L_0884630C:;
    ST32(s0+12, 0);
    ST32(s0+16, 0);
    ST32(s0+4, 0);
    goto L_08846318;
L_08846318:;
    s0 = LD32(s2+24);
    s1 = s2 + 24;
    v0 = 1;
    v1 = ((u32)(uintptr_t)func_08846440) - (25664);
    ST8(s1+8, v0);
    cnd_ = s0 == 0;
    s2 = v1 + 25664;
    if (cnd_) { goto L_08846358; }
    goto L_08846334;
L_08846334:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_08846390; }
    goto L_08846340;
L_08846340:;
    a1 = LD32(s0+12);
    goto L_08846344;
L_08846344:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_08846380; }
    goto L_0884634C;
L_0884634C:;
    a0 = LD32(s0);
    goto L_08846350;
L_08846350:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, a2, a3, t0, t1, t2, t3, 0.0f, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08846358;
L_08846358:;
    a0 = s1 + 0;
    { u64 r_ = func_08AA93A0(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08846360;
L_08846360:;
    ST8(s1+8, 0);
    sp = sp + 32;
    return;
L_08846380:;
    a2 = s2 + 0;
    func_08AA931C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08846388;
L_08846388:;
    a0 = LD32(s0);
    goto L_08846350;
L_08846390:;
    a2 = s2 + 0;
    func_08AA931C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08846398;
L_08846398:;
    a1 = LD32(s0+12);
    goto L_08846344;
L_088463A0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088463A8;
L_088463A8:;
    ST32(s0, 0);
    goto L_0884630C;
L_088463B0:;
    a0 = s0 + 0;
    func_08AA92AC(a0, a1, 0, 0, 0);
    goto L_088463B8;
L_088463B8:;
    goto L_088462F4;
L_088463C0:;
    a0 = s0 + 0;
    func_08AA92AC(a0, a1, 0, 0, 0);
    goto L_088463C8;
L_088463C8:;
    a1 = LD32(s1+12);
    goto L_088462EC;
L_088463D0:;
    a2 = s3 + 0;
    func_08AA931C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088463D8;
L_088463D8:;
    a0 = LD32(s1);
    goto L_088462C0;
L_088463E0:;
    a2 = s3 + 0;
    func_08AA931C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088463E8;
L_088463E8:;
    a1 = LD32(s1+12);
    goto L_088462B4;
L_088463F0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088463F8;
L_088463F8:;
    ST32(s0, 0);
    goto L_08846274;
L_08846400:;
    a0 = s0 + 0;
    func_08AA92AC(a0, a1, 0, 0, 0);
    goto L_08846408;
L_08846408:;
    goto L_0884625C;
L_08846410:;
    a0 = s0 + 0;
    func_08AA92AC(a0, a1, 0, 0, 0);
    goto L_08846418;
L_08846418:;
    a1 = LD32(s1+12);
    goto L_08846254;
L_08846420:;
    a2 = s3 + 0;
    func_08AA931C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08846428;
L_08846428:;
    a0 = LD32(s1);
    goto L_08846228;
L_08846430:;
    a2 = s3 + 0;
    func_08AA931C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08846438;
L_08846438:;
    a1 = LD32(s1+12);
    goto L_0884621C;
}

/* 08846440 */
rv_t func_08846440(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08846440:;
    sp = sp - 16;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08846470; }
    goto L_0884644C;
L_0884644C:;
    a1 = LD32(a1);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08846474; }
    goto L_08846458;
L_08846458:;
    v0 = LD_U8(a1+76);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08846474; }
    goto L_08846464;
L_08846464:;
    v0 = LD_U8(a1+128);
    cnd_ = v0 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_0884647C; }
    goto L_08846470;
L_08846470:;
    goto L_08846474;
L_08846474:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0884647C:;
    a1 = LD32(a1);
    v0 = D_08B285A0 - (-31328);
    v1 = LD32(a1+32);
    t_ = v1;
    f12 = BITSF(LD32(v0-31328));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08846490;
L_08846490:;
    goto L_08846474;
}

/* 08846498 */
u64 func_08846498(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08846498:;
    sp = sp - 16;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    t0 = a0 + 0;
    if (cnd_) { goto L_088464D8; }
    goto L_088464AC;
L_088464AC:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_088464B4;
L_088464B4:;
    a0 = v0 + 12;
    a2 = v0 + 8;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_088464E4; }
    goto L_088464CC;
L_088464CC:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_088464B4; }
    goto L_088464D8;
L_088464D8:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088464FC; }
    goto L_088464E4;
L_088464E4:;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088464F0; }
    goto L_088464EC;
L_088464EC:;
    v0 = LD32(a3);
    goto L_088464F0;
L_088464F0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088464FC:;
    a2 = 1;
    { u64 r_ = func_08AA9168(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08846504;
L_08846504:;
    a3 = v0 + 0;
    goto L_088464E4;
}

/* 0884650C */
void func_0884650C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0884650C:;
    sp = sp - 32;
    s2 = a0 + 0;
    v1 = LD32(a1+4);
    ST32(sp, a1);
    a0 = v1 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08846534;
L_08846534:;
    s1 = v0 + 0;
    v0 = LD_U8(s2+8);
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088465AC; }
    goto L_08846544;
L_08846544:;
    v0 = LD32(s2);
    cnd_ = v0 == 0;
    s0 = s2 + 0;
    if (cnd_) { goto L_0884657C; }
    goto L_08846550;
L_08846550:;
    v1 = v0 + 0;
    goto L_08846554;
L_08846554:;
    a0 = v1 + 12;
    s0 = v1 + 8;
    v1 = LD32(v1);
    a1 = 0 + 0;
    v0 = s1 < v1;
    cnd_ = v1 == s1;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_088465AC; }
    goto L_08846570;
L_08846570:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08846554; }
    goto L_0884657C;
L_0884657C:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08846584;
L_08846584:;
    ST32(v0, s1);
    a1 = v0 + 4;
    v1 = LD32(s2+4);
    a0 = LD32(sp);
    ST32(v0+8, 0);
    v1 = v1 + 1;
    ST32(v0+12, 0);
    ST32(s2+4, v1);
    ST32(v0+4, a0);
    ST32(s0, v0);
    goto L_088465AC;
L_088465AC:;
    v0 = 0 < a1;
    sp = sp + 32;
    return;
}

/* 088465C8 */
rv_t func_088465C8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088465C8:;
    sp = sp - 32;
    s0 = a0 + 0;
    v1 = LD32(a1+4);
    ST32(sp, a1);
    a0 = v1 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088465EC;
L_088465EC:;
    a1 = v0 + 0;
    a0 = s0 + 72;
    s1 = v0 + 0;
    s0 = s0 + 48;
    { rv_t r_ = func_08AA94F0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08846600;
L_08846600:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a2 = sp + 0;
    if (cnd_) { goto L_08846624; }
    goto L_08846610;
L_08846610:;
    goto L_08846614;
L_08846614:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08846624:;
    { rv_t r_ = func_08AA9438(a0, a1, a2, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884662C;
L_0884662C:;
    goto L_08846614;
}

/* 08846634 */
rv_t func_08846634(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08846634:;
    sp = sp - 32;
    s0 = a0 + 0;
    v1 = LD32(a1+4);
    ST32(sp, a1);
    a0 = v1 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08846658;
L_08846658:;
    a1 = v0 + 0;
    a0 = s0 + 48;
    s1 = v0 + 0;
    s0 = s0 + 72;
    { rv_t r_ = func_08AA94F0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884666C;
L_0884666C:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a2 = sp + 0;
    if (cnd_) { goto L_08846690; }
    goto L_0884667C;
L_0884667C:;
    goto L_08846680;
L_08846680:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08846690:;
    { rv_t r_ = func_08AA9438(a0, a1, a2, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08846698;
L_08846698:;
    goto L_08846680;
}

/* 088466A0 */
rv_t func_088466A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088466A0:;
    sp = sp - 16;
    cnd_ = a1 == 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_088466C8; }
    goto L_088466B0;
L_088466B0:;
    v0 = LD32(a1);
    a0 = D_08B28B64 - (-29852);
    a0 = a0 - 29852;
    a1 = v1 + 0;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_088466D4; }
    goto L_088466C8;
L_088466C8:;
    goto L_088466CC;
L_088466CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088466D4:;
    { rv_t r_ = func_088466E4(a0, a1, a2, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088466DC;
L_088466DC:;
    goto L_088466CC;
}

/* 088466E4 */
rv_t func_088466E4(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088466E4:;
    sp = sp - 32;
    ST32(sp, a2);
    a0 = a0 + 24;
    a2 = sp + 0;
    { rv_t r_ = func_08AA9438(a0, a1, a2, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088466FC;
L_088466FC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08846708 */
rv_t func_08846708(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08846708:;
    a1 = a0 + 0;
    a0 = D_08B28B64 - (-29852);
    sp = sp - 16;
    a0 = a0 - 29852;
    { rv_t r_ = func_0884672C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08846720;
L_08846720:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0884672C */
rv_t func_0884672C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884672C:;
    sp = sp - 16;
    a0 = a0 + 24;
    { rv_t r_ = func_08AA94F0(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884673C;
L_0884673C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08846748 */
void func_08846748(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08846748:;
    sp = sp - 32;
    v0 = 1;
    v1 = ((u32)(uintptr_t)func_088466A0) - (26272);
    s2 = a0 + 48;
    s3 = a0 + 0;
    s1 = v1 + 26272;
    s0 = LD32(a0+48);
    cnd_ = s0 == 0;
    ST8(s2+8, v0);
    if (cnd_) { goto L_088467A8; }
    goto L_08846784;
L_08846784:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08846A14; }
    goto L_08846790;
L_08846790:;
    a1 = LD32(s0+12);
    goto L_08846794;
L_08846794:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s2 + 0; goto L_08846A04; }
    goto L_0884679C;
L_0884679C:;
    a0 = LD32(s0);
    goto L_088467A0;
L_088467A0:;
    t_ = s1;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088467A8;
L_088467A8:;
    a0 = s2 + 0;
    { u64 r_ = func_08AA93A0(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088467B0;
L_088467B0:;
    s0 = LD32(s3+48);
    v0 = 1;
    v1 = ((u32)(uintptr_t)func_08846708) - (26376);
    ST8(s2+8, v0);
    cnd_ = s0 == 0;
    s1 = v1 + 26376;
    if (cnd_) { goto L_088467EC; }
    goto L_088467C8;
L_088467C8:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s2 + 0; goto L_088469F4; }
    goto L_088467D4;
L_088467D4:;
    a1 = LD32(s0+12);
    goto L_088467D8;
L_088467D8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s2 + 0; goto L_088469E4; }
    goto L_088467E0;
L_088467E0:;
    a0 = LD32(s0);
    goto L_088467E4;
L_088467E4:;
    t_ = s1;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088467EC;
L_088467EC:;
    a0 = s2 + 0;
    { u64 r_ = func_08AA93A0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088467F4;
L_088467F4:;
    s1 = LD32(s3+24);
    s0 = s3 + 24;
    v0 = ((u32)(uintptr_t)func_08846A24) - (27172);
    v1 = 1;
    ST8(s2+8, 0);
    s4 = v0 + 27172;
    cnd_ = s1 == 0;
    ST8(s0+8, v1);
    if (cnd_) { goto L_08846838; }
    goto L_08846814;
L_08846814:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_088469D4; }
    goto L_08846820;
L_08846820:;
    a1 = LD32(s1+12);
    goto L_08846824;
L_08846824:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_088469C4; }
    goto L_0884682C;
L_0884682C:;
    a0 = LD32(s1);
    goto L_08846830;
L_08846830:;
    t_ = s4;
    a1 = s1 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08846838;
L_08846838:;
    a0 = s0 + 0;
    { u64 r_ = func_08AA93A0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08846840;
L_08846840:;
    s1 = LD32(s3+24);
    cnd_ = s1 == 0;
    ST8(s0+8, 0);
    if (cnd_) { goto L_0884686C; }
    goto L_0884684C;
L_0884684C:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088469B4; }
    goto L_08846858;
L_08846858:;
    a1 = LD32(s1+12);
    goto L_0884685C;
L_0884685C:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088469A4; }
    goto L_08846864;
L_08846864:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884686C;
L_0884686C:;
    a0 = LD32(s0+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08846994; }
    goto L_08846878;
L_08846878:;
    ST32(s0, 0);
    goto L_0884687C;
L_0884687C:;
    s1 = LD32(s3+48);
    ST32(s0+12, 0);
    ST32(s0+16, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_088468B0; }
    goto L_08846890;
L_08846890:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08846984; }
    goto L_0884689C;
L_0884689C:;
    a1 = LD32(s1+12);
    goto L_088468A0;
L_088468A0:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08846974; }
    goto L_088468A8;
L_088468A8:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088468B0;
L_088468B0:;
    a0 = LD32(s2+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08846964; }
    goto L_088468BC;
L_088468BC:;
    ST32(s2, 0);
    goto L_088468C0;
L_088468C0:;
    s0 = s3 + 72;
    s1 = LD32(s3+72);
    ST32(s2+12, 0);
    ST32(s2+16, 0);
    cnd_ = s1 == 0;
    ST32(s2+4, 0);
    if (cnd_) { goto L_088468F8; }
    goto L_088468D8;
L_088468D8:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08846954; }
    goto L_088468E4;
L_088468E4:;
    a1 = LD32(s1+12);
    goto L_088468E8;
L_088468E8:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08846944; }
    goto L_088468F0;
L_088468F0:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088468F8;
L_088468F8:;
    a0 = LD32(s0+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08846934; }
    goto L_08846904;
L_08846904:;
    ST32(s0, 0);
    goto L_08846908;
L_08846908:;
    ST32(s0+12, 0);
    ST32(s0+16, 0);
    ST32(s0+4, 0);
    sp = sp + 32;
    return;
L_08846934:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884693C;
L_0884693C:;
    ST32(s0, 0);
    goto L_08846908;
L_08846944:;
    a0 = s0 + 0;
    func_08AA92AC(a0, a1, 0, 0, 0);
    goto L_0884694C;
L_0884694C:;
    goto L_088468F0;
L_08846954:;
    a0 = s0 + 0;
    func_08AA92AC(a0, a1, 0, 0, 0);
    goto L_0884695C;
L_0884695C:;
    a1 = LD32(s1+12);
    goto L_088468E8;
L_08846964:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884696C;
L_0884696C:;
    ST32(s2, 0);
    goto L_088468C0;
L_08846974:;
    a0 = s2 + 0;
    func_08AA92AC(a0, a1, 0, 0, 0);
    goto L_0884697C;
L_0884697C:;
    goto L_088468A8;
L_08846984:;
    a0 = s2 + 0;
    func_08AA92AC(a0, a1, 0, 0, 0);
    goto L_0884698C;
L_0884698C:;
    a1 = LD32(s1+12);
    goto L_088468A0;
L_08846994:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884699C;
L_0884699C:;
    ST32(s0, 0);
    goto L_0884687C;
L_088469A4:;
    a0 = s0 + 0;
    func_08AA92AC(a0, a1, 0, 0, 0);
    goto L_088469AC;
L_088469AC:;
    goto L_08846864;
L_088469B4:;
    a0 = s0 + 0;
    func_08AA92AC(a0, a1, 0, 0, 0);
    goto L_088469BC;
L_088469BC:;
    a1 = LD32(s1+12);
    goto L_0884685C;
L_088469C4:;
    a2 = s4 + 0;
    func_08AA931C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088469CC;
L_088469CC:;
    a0 = LD32(s1);
    goto L_08846830;
L_088469D4:;
    a2 = s4 + 0;
    func_08AA931C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088469DC;
L_088469DC:;
    a1 = LD32(s1+12);
    goto L_08846824;
L_088469E4:;
    a2 = s1 + 0;
    func_08AA931C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088469EC;
L_088469EC:;
    a0 = LD32(s0);
    goto L_088467E4;
L_088469F4:;
    a2 = s1 + 0;
    func_08AA931C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088469FC;
L_088469FC:;
    a1 = LD32(s0+12);
    goto L_088467D8;
L_08846A04:;
    a2 = s1 + 0;
    func_08AA931C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08846A0C;
L_08846A0C:;
    a0 = LD32(s0);
    goto L_088467A0;
L_08846A14:;
    a2 = s1 + 0;
    func_08AA931C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08846A1C;
L_08846A1C:;
    a1 = LD32(s0+12);
    goto L_08846794;
}

/* 08846A24 */
rv_t func_08846A24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08846A24:;
    sp = sp - 16;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08846A3C; }
    goto L_08846A30;
L_08846A30:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08846A48; }
    goto L_08846A3C;
L_08846A3C:;
    goto L_08846A40;
L_08846A40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08846A48:;
    v0 = LD32(v0);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08846A58;
L_08846A58:;
    goto L_08846A40;
}

/* 08846A60 */
u32 func_08846A60(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08846A60:;
    sp = sp - 32;
    v0 = 1;
    v1 = ((u32)(uintptr_t)func_08846B24) - (27428);
    s0 = a0 + 24;
    s2 = v1 + 27428;
    s1 = LD32(a0+24);
    ST8(s0+8, v0);
    cnd_ = s1 == 0;
    ST8(sp, 0);
    if (cnd_) { goto L_08846AE4; }
    goto L_08846A94;
L_08846A94:;
    v0 = LD32(s1+8);
    a0 = s0 + 0;
    a2 = s2 + 0;
    a1 = v0 + 0;
    cnd_ = v0 != 0;
    a3 = sp + 0;
    if (cnd_) { goto L_08846B0C; }
    goto L_08846AAC;
L_08846AAC:;
    v0 = LD32(s1+12);
    goto L_08846AB0;
L_08846AB0:;
    a0 = s0 + 0;
    a2 = s2 + 0;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a3 = sp + 0;
    if (cnd_) { goto L_08846AD4; }
    goto L_08846AC4;
L_08846AC4:;
    v0 = func_08AA95D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08846ACC;
L_08846ACC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08846AE4; }
    goto L_08846AD4;
L_08846AD4:;
    a0 = LD32(s1);
    a1 = s1 + 4;
    t_ = s2;
    a2 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08846AE4;
L_08846AE4:;
    a0 = s0 + 0;
    { u64 r_ = func_08AA93A0(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08846AEC;
L_08846AEC:;
    v0 = LD_U8(sp);
    ST8(s0+8, 0);
    sp = sp + 32;
    return v0;
L_08846B0C:;
    v0 = func_08AA95D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08846B14;
L_08846B14:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08846AE4; }
    goto L_08846B1C;
L_08846B1C:;
    v0 = LD32(s1+12);
    goto L_08846AB0;
}

/* 08846B24 */
rv_t func_08846B24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08846B24:;
    sp = sp - 16;
    s0 = a2 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08846B44; }
    goto L_08846B38;
L_08846B38:;
    v1 = LD32(a1);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08846B5C; }
    goto L_08846B44;
L_08846B44:;
    v1 = 1;
    goto L_08846B48;
L_08846B48:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08846B5C:;
    v1 = LD32(v1);
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08846B6C;
L_08846B6C:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08846B44; }
    goto L_08846B74;
L_08846B74:;
    v0 = 1;
    ST8(s0, v0);
    goto L_08846B48;
}

/* 08846B80 */
u32 func_08846B80(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08846B80:;
    sp = sp - 32;
    v1 = a1 + 0;
    v0 = D_08B15AF0 - (23280);
    a2 = ((u32)(uintptr_t)func_08846BF0) - (27632);
    s0 = a0 + 0;
    t0 = LD32(a0);
    ST32(v0+23280, v1);
    v0 = 1;
    a1 = t0 + 0;
    a3 = sp + 0;
    a2 = a2 + 27632;
    ST8(a0+8, v0);
    cnd_ = t0 != 0;
    ST32(sp, 0);
    if (cnd_) { goto L_08846BE0; }
    goto L_08846BC0;
L_08846BC0:;
    a0 = s0 + 0;
    { u64 r_ = func_08AA93A0(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08846BC8;
L_08846BC8:;
    ST8(s0+8, 0);
    v0 = LD32(sp);
    sp = sp + 32;
    return v0;
L_08846BE0:;
    v0 = func_08AA95D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08846BE8;
L_08846BE8:;
    goto L_08846BC0;
}

/* 08846BF0 */
rv_t func_08846BF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08846BF0:;
    sp = sp - 16;
    s0 = a2 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08846C10; }
    goto L_08846C04;
L_08846C04:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08846C28; }
    goto L_08846C10;
L_08846C10:;
    v1 = 1;
    goto L_08846C14;
L_08846C14:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08846C28:;
    v0 = D_08B15AF0 - (23280);
    a1 = LD32(v0+23280);
    v0 = func_0883E3E4(a0, a1);
    goto L_08846C34;
L_08846C34:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08846C10; }
    goto L_08846C3C;
L_08846C3C:;
    ST32(s0, v0);
    goto L_08846C14;
}

/* 08846C44 */
u64 func_08846C44(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08846C44:;
    sp = sp - 16;
    v0 = 1;
    v1 = ((u32)(uintptr_t)func_08846CEC) - (27884);
    s1 = a0 + 24;
    s2 = v1 + 27884;
    s0 = LD32(a0+24);
    cnd_ = s0 == 0;
    ST8(s1+8, v0);
    if (cnd_) { goto L_08846CA8; }
    goto L_08846C74;
L_08846C74:;
    v0 = LD32(s0+8);
    a2 = s2 + 0;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08846CDC; }
    goto L_08846C88;
L_08846C88:;
    v0 = LD32(s0+12);
    goto L_08846C8C;
L_08846C8C:;
    a2 = s2 + 0;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08846CCC; }
    goto L_08846C9C;
L_08846C9C:;
    a0 = LD32(s0);
    goto L_08846CA0;
L_08846CA0:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08846CA8;
L_08846CA8:;
    a0 = s1 + 0;
    { u64 r_ = func_08AA93A0(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08846CB0;
L_08846CB0:;
    ST8(s1+8, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08846CCC:;
    func_08AA931C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08846CD4;
L_08846CD4:;
    a0 = LD32(s0);
    goto L_08846CA0;
L_08846CDC:;
    func_08AA931C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08846CE4;
L_08846CE4:;
    v0 = LD32(s0+12);
    goto L_08846C8C;
}

/* 08846CEC */
rv_t func_08846CEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08846CEC:;
    sp = sp - 16;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08846D08; }
    goto L_08846CFC;
L_08846CFC:;
    s0 = LD32(a1);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08846D18; }
    goto L_08846D08;
L_08846D08:;
    goto L_08846D0C;
L_08846D0C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08846D18:;
    { rv_t r_ = func_0883E2B0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08846D20;
L_08846D20:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08846D0C; }
    goto L_08846D28;
L_08846D28:;
    v0 = LD_U8(s0+128);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08846D0C; }
    goto L_08846D34;
L_08846D34:;
    v0 = LD32(s0);
    v1 = LD32(v0+20);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08846D44;
L_08846D44:;
    goto L_08846D0C;
}

/* 08846D4C */
void func_08846D4C(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08846D4C:;
    sp = sp - 16;
    v0 = D_08B28BD0 - (-29744);
    s1 = LD32(v0-29744);
    cnd_ = s1 == 0;
    v0 = D_08B28BD4 - (-29740);
    if (cnd_) { goto L_08846DEC; }
    goto L_08846D70;
L_08846D70:;
    s0 = LD32(a0+24);
    s2 = a0 + 24;
    v0 = 1;
    cnd_ = s0 == 0;
    ST8(s2+8, v0);
    if (cnd_) { goto L_08846DA8; }
    goto L_08846D84;
L_08846D84:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08846DDC; }
    goto L_08846D90;
L_08846D90:;
    a1 = LD32(s0+12);
    goto L_08846D94;
L_08846D94:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s2 + 0; goto L_08846DCC; }
    goto L_08846D9C;
L_08846D9C:;
    a0 = LD32(s0);
    goto L_08846DA0;
L_08846DA0:;
    t_ = s1;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08846DA8;
L_08846DA8:;
    a0 = s2 + 0;
    { u64 r_ = func_08AA93A0(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08846DB0;
L_08846DB0:;
    ST8(s2+8, 0);
    goto L_08846DB4;
L_08846DB4:;
    goto L_08846DB8;
L_08846DB8:;
    sp = sp + 16;
    return;
L_08846DCC:;
    a2 = s1 + 0;
    func_08AA931C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08846DD4;
L_08846DD4:;
    a0 = LD32(s0);
    goto L_08846DA0;
L_08846DDC:;
    a2 = s1 + 0;
    func_08AA931C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08846DE4;
L_08846DE4:;
    a1 = LD32(s0+12);
    goto L_08846D94;
L_08846DEC:;
    a2 = LD32(v0-29740);
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08846DB8; }
    goto L_08846DF8;
L_08846DF8:;
    a1 = LD32(a0+24);
    s0 = a0 + 24;
    v0 = 1;
    v1 = D_08B28BD8 - (-29736);
    ST8(s0+8, v0);
    cnd_ = a1 != 0;
    a3 = LD32(v1-29736);
    if (cnd_) { goto L_08846E24; }
    goto L_08846E14;
L_08846E14:;
    a0 = s0 + 0;
    { u64 r_ = func_08AA93A0(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08846E1C;
L_08846E1C:;
    ST8(s0+8, 0);
    goto L_08846DB4;
L_08846E24:;
    a0 = s0 + 0;
    v0 = func_08AA95D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08846E2C;
L_08846E2C:;
    goto L_08846E14;
}

/* 08846E34 */
u64 func_08846E34(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08846E34:;
    sp = sp - 16;
    v0 = a0 ^ 0x1;
    a1 = a1 ^ 0xffff;
    v0 = v0 < 0x1u;
    s0 = a1 < 0x1u;
    v0 = s0 & v0;
    s1 = a0 + 0;
    a0 = D_08B28B64 - (-29852);
    cnd_ = v0 != 0;
    a0 = a0 - 29852;
    if (cnd_) { goto L_08846EA0; }
    goto L_08846E68;
L_08846E68:;
    v0 = s1 < 0x1u;
    goto L_08846E6C;
L_08846E6C:;
    a0 = D_08B28B64 - (-29852);
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    a0 = a0 - 29852;
    if (cnd_) { goto L_08846E90; }
    goto L_08846E7C;
L_08846E7C:;
    goto L_08846E80;
L_08846E80:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08846E90:;
    { u64 r_ = func_08845E00(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08846E98;
L_08846E98:;
    goto L_08846E80;
L_08846EA0:;
    { u64 r_ = func_08845D90(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08846EA8;
L_08846EA8:;
    v0 = s1 < 0x1u;
    goto L_08846E6C;
}

/* 08846EB0 */
rv_t func_08846EB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08846EB0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_08846E34(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08846EC4;
L_08846EC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08846ED0 */
rv_t func_08846ED0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08846ED0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_08846E34(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08846EE4;
L_08846EE4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08846EF0 */
void func_08846EF0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_08846EF0:;
    v0 = D_08AF1970 - (6512);
    v1 = a0 + 52;
    v0 = v0 + 6512;
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    ST32(a0, v0);
    ST32(a0+24, 0);
    ST32(a0+52, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(a0+32, 0);
    ST32(a0+36, 0);
    ST32(a0+40, 0);
    ST32(a0+12, 0);
    ST32(a0+16, 0);
    ST32(a0+20, 0);
    ST32(a0+28, 0);
    ST32(a0+44, 0);
    ST32(a0+48, 0);
    return;
}

/* 08846F40 */
rv_t func_08846F40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08846F40:;
    v0 = D_08AF1970 - (6512);
    v0 = v0 + 6512;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 4;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08846F68;
L_08846F68:;
    a0 = s0 + 8;
    func_08AA119C(a0, 0, 0, 0);
    goto L_08846F70;
L_08846F70:;
    a0 = s0 + 36;
    func_08AA109C(a0, 0, 0, 0);
    goto L_08846F78;
L_08846F78:;
    a0 = s0 + 48;
    func_08AA109C(a0, 0, 0, 0);
    goto L_08846F80;
L_08846F80:;
    a0 = s0 + 12;
    func_08AA109C(a0, 0, 0, 0);
    goto L_08846F88;
L_08846F88:;
    a0 = s0 + 20;
    func_08AA2B7C(a0, 0, 0, 0);
    goto L_08846F90;
L_08846F90:;
    a0 = s0 + 16;
    func_08AA109C(a0, 0, 0, 0);
    goto L_08846F98;
L_08846F98:;
    a0 = s0 + 44;
    func_08AA9678(a0, 0, 0, 0);
    goto L_08846FA0;
L_08846FA0:;
    a0 = s0 + 24;
    func_08AA109C(a0, 0, 0, 0);
    goto L_08846FA8;
L_08846FA8:;
    s1 = s0 + 52;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08846FB0;
L_08846FB0:;
    v1 = LD32(s0+52);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08846FD8; }
    goto L_08846FBC;
L_08846FBC:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08846FD8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08846FE0;
L_08846FE0:;
    ST32(s0+52, 0);
    goto L_08846FBC;
}

/* 08846FE8 */
rv_t func_08846FE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08846FE8:;
    v0 = D_08AF1970 - (6512);
    v0 = v0 + 6512;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 4;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08847010;
L_08847010:;
    a0 = s0 + 8;
    func_08AA119C(a0, 0, 0, 0);
    goto L_08847018;
L_08847018:;
    a0 = s0 + 36;
    func_08AA109C(a0, 0, 0, 0);
    goto L_08847020;
L_08847020:;
    a0 = s0 + 48;
    func_08AA109C(a0, 0, 0, 0);
    goto L_08847028;
L_08847028:;
    a0 = s0 + 12;
    func_08AA109C(a0, 0, 0, 0);
    goto L_08847030;
L_08847030:;
    a0 = s0 + 20;
    func_08AA2B7C(a0, 0, 0, 0);
    goto L_08847038;
L_08847038:;
    a0 = s0 + 16;
    func_08AA109C(a0, 0, 0, 0);
    goto L_08847040;
L_08847040:;
    a0 = s0 + 44;
    func_08AA9678(a0, 0, 0, 0);
    goto L_08847048;
L_08847048:;
    a0 = s0 + 24;
    func_08AA109C(a0, 0, 0, 0);
    goto L_08847050;
L_08847050:;
    s1 = s0 + 52;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08847058;
L_08847058:;
    v1 = LD32(s0+52);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08847088; }
    goto L_08847064;
L_08847064:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08847074;
L_08847074:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08847088:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08847090;
L_08847090:;
    ST32(s0+52, 0);
    goto L_08847064;
}

/* 08847098 */
rv_t func_08847098(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08847098:;
    sp = sp - 32;
    s3 = a0 + 8;
    s0 = a0 + 0;
    a0 = 4;
    s6 = s0 + 44;
    s5 = s0 + 20;
    s4 = s0 + 12;
    s2 = a2 + 0;
    s1 = a1 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088470E0;
L_088470E0:;
    a0 = s3 + 0;
    func_08AA119C(a0, 0, 0, 0);
    goto L_088470E8;
L_088470E8:;
    ST32(s0+8, 0);
    a0 = s0 + 36;
    func_08AA109C(a0, 0, 0, 0);
    goto L_088470F4;
L_088470F4:;
    ST32(s0+36, 0);
    a0 = s0 + 48;
    func_08AA109C(a0, 0, 0, 0);
    goto L_08847100;
L_08847100:;
    ST32(s0+48, 0);
    a0 = s4 + 0;
    func_08AA109C(a0, 0, 0, 0);
    goto L_0884710C;
L_0884710C:;
    ST32(s0+12, 0);
    a0 = s0 + 16;
    func_08AA109C(a0, 0, 0, 0);
    goto L_08847118;
L_08847118:;
    ST32(s0+16, 0);
    a0 = s5 + 0;
    func_08AA2B7C(a0, 0, 0, 0);
    goto L_08847124;
L_08847124:;
    ST32(s0+20, 0);
    a0 = s6 + 0;
    func_08AA9678(a0, 0, 0, 0);
    goto L_08847130;
L_08847130:;
    ST32(s0+44, 0);
    a0 = s0 + 24;
    func_08AA109C(a0, 0, 0, 0);
    goto L_0884713C;
L_0884713C:;
    v0 = 1;
    ST32(s0+24, 0);
    ST32(s0+32, 0);
    ST32(s0+36, 0);
    cnd_ = s1 == v0;
    ST32(s0+40, 0);
    if (cnd_) { goto L_08847280; }
    goto L_08847154;
L_08847154:;
    a1 = s1 + 2;
    ST32(s0+4, a1);
    a0 = s3 + 0;
    s3 = (s32)0 < (s32)s1;
    func_08AA2D50(a0, a1, 0, 0, 0);
    goto L_08847168;
L_08847168:;
    cnd_ = s3 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088471A8; }
    goto L_08847170;
L_08847170:;
    a2 = LD32(s0+8);
    a1 = s1 + 0;
    goto L_08847178;
L_08847178:;
    v0 = s2 + a0;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    v1 = a2 + a0;
    v0 = v1 + 12;
    a1 = a1 - 1;
    ST32(v1+12, FBITS(f0));
    a0 = a0 + 12;
    ST32(v0+8, FBITS(f2));
    cnd_ = a1 != 0;
    ST32(v0+4, FBITS(f1));
    if (cnd_) { goto L_08847178; }
    goto L_088471A8;
L_088471A8:;
    a0 = s0 + 0;
    func_088472B4(a0);
    goto L_088471B0;
L_088471B0:;
    v0 = s1 - 1;
    ST32(s0+32, v0);
    goto L_088471B8;
L_088471B8:;
    a1 = s1 + 0;
    a0 = s4 + 0;
    func_08AA3FC0(a0, a1, 0, 0, 0);
    goto L_088471C4;
L_088471C4:;
    cnd_ = s3 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088471EC; }
    goto L_088471CC;
L_088471CC:;
    v1 = LD32(s0+12);
    goto L_088471D0;
L_088471D0:;
    f1 = BITSF(a1);
    a1 = a1 + 1;
    v0 = (s32)a1 < (s32)s1;
    f0 = (float)(s32)FBITS(f1);
    ST32(v1, FBITS(f0));
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088471D0; }
    goto L_088471EC;
L_088471EC:;
    a0 = s5 + 0;
    a1 = s1 + 0;
    func_08AA4EE8(a0, a1, 0, 0, 0);
    goto L_088471F8;
L_088471F8:;
    cnd_ = s3 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08847214; }
    goto L_08847200;
L_08847200:;
    v0 = LD32(s0+20);
    goto L_08847204;
L_08847204:;
    a1 = a1 - 1;
    ST32(v0, 0);
    cnd_ = a1 != 0;
    v0 = v0 + 4;
    if (cnd_) { goto L_08847204; }
    goto L_08847214;
L_08847214:;
    a0 = s6 + 0;
    a1 = s1 + 0;
    func_08AA96B8(a0, a1, 0, 0, 0);
    goto L_08847220;
L_08847220:;
    cnd_ = s3 == 0;
    v0 = D_08AEB980 - (-18048);
    if (cnd_) { goto L_08847250; }
    goto L_08847228;
L_08847228:;
    f0 = BITSF(LD32(v0-18048));
    a0 = LD32(s0+44);
    a1 = s1 + 0;
    goto L_08847234;
L_08847234:;
    a1 = a1 - 1;
    ST32(a0, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(a0+12, FBITS(f0));
    cnd_ = a1 != 0;
    a0 = a0 + 16;
    if (cnd_) { goto L_08847234; }
    goto L_08847250;
L_08847250:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08847258;
L_08847258:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08847280:;
    ST32(s0+4, s1);
    a0 = s3 + 0;
    a1 = 1;
    func_08AA2D50(a0, a1, 0, 0, 0);
    goto L_08847290;
L_08847290:;
    v0 = LD32(s0+8);
    f2 = BITSF(LD32(s2+8));
    f0 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s2+4));
    s3 = 1;
    ST32(v0+8, FBITS(f2));
    ST32(v0, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    goto L_088471B8;
}

/* 088472B4 */
void func_088472B4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088472B4:;
    sp = sp - 48;
    a2 = LD32(a0+4);
    v0 = (s32)a2 < 4;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088473B0; }
    goto L_088472D0;
L_088472D0:;
    v0 = LD32(a0+28);
    v0 = v0 & 0x20;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088473C0; }
    goto L_088472E0;
L_088472E0:;
    v1 = LD32(s0+8);
    a0 = a2 << 1;
    a0 = a0 + a2;
    v0 = v1 + 12;
    f0 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1+12));
    f0 = f0 + f0;
    f3 = f3 + f3;
    f1 = f1 + f1;
    a1 = v1 + 24;
    ST32(sp+24, FBITS(f0));
    a0 = a0 << 2;
    a0 = v1 + a0;
    ST32(sp+16, FBITS(f1));
    v0 = a0 - 24;
    a2 = a0 - 36;
    ST32(sp+20, FBITS(f3));
    a3 = a0 - 12;
    f2 = BITSF(LD32(a1+8));
    f4 = BITSF(LD32(a1+4));
    f5 = BITSF(LD32(v1+24));
    f0 = f0 - f2;
    f3 = f3 - f4;
    f1 = f1 - f5;
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(v1+8, FBITS(f0));
    ST32(v1, FBITS(f1));
    ST32(sp+4, FBITS(f3));
    ST32(v1+4, FBITS(f3));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(a0-24));
    f2 = f2 + f2;
    f1 = f1 + f1;
    f0 = f0 + f0;
    ST32(sp+8, FBITS(f2));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    f3 = BITSF(LD32(a2+8));
    f4 = BITSF(LD32(a2+4));
    f5 = BITSF(LD32(a0-36));
    f2 = f2 - f3;
    f1 = f1 - f4;
    f0 = f0 - f5;
    ST32(sp+24, FBITS(f2));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(a0-12, FBITS(f0));
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f2));
    goto L_088473B0;
L_088473B0:;
    sp = sp + 48;
    return;
L_088473C0:;
    v0 = func_08848B98(a0);
    goto L_088473C8;
L_088473C8:;
    v0 = (s32)v0 < 3;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(s0+4); goto L_088472E0; }
    goto L_088473D4;
L_088473D4:;
    v1 = LD32(s0+4);
    a0 = LD32(s0+8);
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    v0 = a0 + v0;
    v1 = v0 - 36;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    a1 = a0 + 24;
    ST32(a0+8, FBITS(f0));
    v1 = v0 - 12;
    ST32(a0+4, FBITS(f1));
    f3 = BITSF(LD32(a0+24));
    f0 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(v0-36));
    f2 = BITSF(LD32(a1+4));
    ST32(v1+8, FBITS(f0));
    ST32(a0, FBITS(f1));
    ST32(v1+4, FBITS(f2));
    ST32(v0-12, FBITS(f3));
    goto L_088473B0;
}

/* 0884742C */
void func_0884742C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f12 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[368] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 368);
L_0884742C:;
    sp = sp - 368;
    v0 = 1;
    v1 = LD32(a0+4);
    cnd_ = v1 == v0;
    s3 = a0 + 0;
    if (cnd_) { goto L_08847698; }
    goto L_08847470;
L_08847470:;
    func_088472B4(a0);
    goto L_08847478;
L_08847478:;
    a0 = 4;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08847480;
L_08847480:;
    v0 = LD32(s3+36);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s3+32); goto L_088479DC; }
    goto L_0884748C;
L_0884748C:;
    v1 = LD32(s3+48);
    goto L_08847490;
L_08847490:;
    cnd_ = v1 != 0;
    if (cnd_) { a3 = LD32(s3+36); goto L_088474AC; }
    goto L_08847498;
L_08847498:;
    a2 = LD32(s3+28);
    v0 = a2 & 0x40;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s3+32); goto L_088479BC; }
    goto L_088474A8;
L_088474A8:;
    a3 = LD32(s3+36);
    goto L_088474AC;
L_088474AC:;
    a1 = LD32(s3+32);
    s2 = v1 + 0;
    ST32(a3, 0);
    s4 = 0 + 0;
    cnd_ = (s32)a1 <= 0;
    ST32(s3+40, 0);
    if (cnd_) { goto L_088479B4; }
    goto L_088474C4;
L_088474C4:;
    s7 = 0 + 0;
    fp = D_08AEB984 - (-18044);
    goto L_088474CC;
L_088474CC:;
    t2 = LD32(s3+20);
    s6 = s4 << 2;
    f20 = BITSF(0);
    v1 = s6 + t2;
    v0 = LD32(v1);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    f21 = BITSF(LD32(fp-18044));
    if (cnd_) { goto L_088478E0; }
    goto L_088474EC;
L_088474EC:;
    v0 = LD32(s3+8);
    {u32 a_=sp+(272);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a2 = LD32(s3+28);
    v0 = v0 + s7;
    v1 = v0 + 24;
    a0 = v0 + 12;
    f5 = BITSF(LD32(v0+12));
    f3 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v0+24));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(a0+4));
    f4 = BITSF(LD32(a0+8));
    f0 = f0 - f5;
    f1 = f1 - f2;
    f3 = f3 - f4;
    v0 = FBITS(f0);
    v1 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp, FBITS(f0));
    v0 = a2 & 0x40;
    ST32(sp+4, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    f20 = BITSF(v1);
    ST32(sp+8, FBITS(f3));
    cnd_ = v0 == 0;
    f2 = f0;
    if (cnd_) { goto L_088475A0; }
    goto L_0884756C;
L_0884756C:;
    f3 = BITSF(LD32(fp-18044));
    v1 = 0 + 0;
    goto L_08847574;
L_08847574:;
    f1 = BITSF(v1);
    v1 = v1 + 1;
    v0 = (s32)v1 < 20;
    f0 = (float)(s32)FBITS(f1);
    f1 = BITSF(LD32(s3+40));
    f0 = f2 * f0;
    f0 = f0 * f3;
    f1 = f1 + f0;
    ST32(s2, FBITS(f1));
    cnd_ = v0 != 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_08847574; }
    goto L_088475A0;
L_088475A0:;
    f0 = BITSF(LD32(s3+40));
    s4 = s4 + 1;
    v1 = s6 + a3;
    f0 = f0 + f20;
    v0 = (s32)s4 < (s32)a1;
    s7 = s7 + 12;
    ST32(s3+40, FBITS(f0));
    cnd_ = v0 != 0;
    ST32(v1+4, FBITS(f0));
    if (cnd_) { goto L_088474CC; }
    goto L_088475C4;
L_088475C4:;
    cnd_ = s2 == 0;
    v0 = a2 & 0x80;
    if (cnd_) { goto L_088475D4; }
    goto L_088475CC;
L_088475CC:;
    f0 = BITSF(LD32(s3+40));
    ST32(s2, FBITS(f0));
    goto L_088475D4;
L_088475D4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08847690; }
    goto L_088475DC;
L_088475DC:;
    t3 = LD32(s3+24);
    cnd_ = t3 == 0;
    if (cnd_) { a1 = a1 + 1; goto L_088478D0; }
    goto L_088475E8;
L_088475E8:;
    cnd_ = (s32)a1 < 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08847638; }
    goto L_088475F0;
L_088475F0:;
    v0 = D_08AEB988 - (-18040);
    f4 = BITSF(LD32(v0-18040));
    t2 = LD32(s3+20);
    t3 = LD32(s3+24);
    f3 = BITSF(0);
    goto L_08847604;
L_08847604:;
    a0 = a2 << 2;
    v0 = a0 + t2;
    v1 = LD32(v0);
    t0 = a2 + 1;
    v0 = a0 + t3;
    v1 = v1 & 0x2;
    a3 = a2 - 1;
    cnd_ = v1 == 0;
    t1 = (s32)a2 < (s32)a1;
    if (cnd_) { goto L_08847844; }
    goto L_08847628;
L_08847628:;
    ST32(v0, 0);
    goto L_0884762C;
L_0884762C:;
    v0 = (s32)a1 < (s32)t0;
    cnd_ = v0 == 0;
    a2 = t0 + 0;
    if (cnd_) { goto L_08847604; }
    goto L_08847638;
L_08847638:;
    cnd_ = (s32)a1 < 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0884767C; }
    goto L_08847640;
L_08847640:;
    v0 = D_08AEB988 - (-18040);
    v1 = D_08AEB98C - (-18036);
    f7 = BITSF(LD32(v0-18040));
    f6 = BITSF(LD32(v1-18036));
    t2 = LD32(s3+20);
    a0 = a3 << 2;
    goto L_08847658;
L_08847658:;
    v1 = a0 + t2;
    v0 = LD32(v1);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s3+24); goto L_0884772C; }
    goto L_0884766C;
L_0884766C:;
    a3 = a3 + 1;
    v0 = (s32)a1 < (s32)a3;
    cnd_ = v0 == 0;
    a0 = a3 << 2;
    if (cnd_) { goto L_08847658; }
    goto L_0884767C;
L_0884767C:;
    v0 = LD32(s3+28);
    v1 = 48;
    v0 = v0 & 0x30;
    cnd_ = v0 == v1;
    if (cnd_) { a0 = LD32(s3+24); goto L_088476D0; }
    goto L_08847690;
L_08847690:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08847698;
L_08847698:;
    sp = sp + 368;
    return;
L_088476D0:;
    f1 = BITSF(0);
    f2 = BITSF(LD32(a0));
    fcc = FCMP(f2, f1, 2);
    cnd_ = fcc;
    v0 = a1 << 2;
    if (cnd_) { goto L_08847704; }
    goto L_088476E8;
L_088476E8:;
    v1 = v0 + a0;
    f0 = BITSF(LD32(v1));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    f0 = f2 + f0;
    if (cnd_) { goto L_08847714; }
    goto L_08847700;
L_08847700:;
    v0 = a1 << 2;
    goto L_08847704;
L_08847704:;
    v0 = v0 + a0;
    ST32(a0, FBITS(f1));
    ST32(v0, FBITS(f1));
    goto L_08847690;
L_08847714:;
    v0 = D_08AEB98C - (-18036);
    f1 = BITSF(LD32(v0-18036));
    f0 = f0 * f1;
    ST32(a0, FBITS(f0));
    ST32(v1, FBITS(f0));
    goto L_08847690;
L_0884772C:;
    t0 = a0 + v1;
    cnd_ = a3 == 0;
    f4 = BITSF(LD32(t0));
    if (cnd_) { goto L_088477B0; }
    goto L_08847738;
L_08847738:;
    v0 = LD32(s3+12);
    a2 = LD32(s3+16);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0-4));
    f0 = BITSF(LD32(v0));
    cnd_ = a2 == 0;
    f1 = f0 - f1;
    if (cnd_) { goto L_08847760; }
    goto L_08847754;
L_08847754:;
    v0 = a0 + a2;
    f0 = BITSF(LD32(v0-4));
    f1 = f1 - f0;
    goto L_08847760;
L_08847760:;
    f5 = BITSF(0);
    fcc = FCMP(f1, f5, 2);
    cnd_ = fcc;
    if (cnd_) { t0 = a0 + v1; goto L_088477B0; }
    goto L_08847774;
L_08847774:;
    f3 = f7 / f1;
    v0 = LD32(s3+36);
    f2 = BITSF(LD32(t0-4));
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0-4));
    f0 = BITSF(LD32(v0));
    f0 = f0 - f1;
    f0 = f0 + f0;
    f0 = f0 * f3;
    f4 = f0 - f2;
    fcc = FCMP(f4, f5, 12);
    cnd_ = fcc;
    if (cnd_) { f4 = f5; goto L_088477AC; }
    goto L_088477AC;
L_088477AC:;
    t0 = a0 + v1;
    goto L_088477B0;
L_088477B0:;
    v0 = (s32)a3 < (s32)a1;
    cnd_ = v0 == 0;
    f2 = BITSF(LD32(t0));
    if (cnd_) { goto L_08847830; }
    goto L_088477BC;
L_088477BC:;
    v0 = LD32(s3+12);
    a2 = LD32(s3+16);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    cnd_ = a2 == 0;
    f1 = f0 - f1;
    if (cnd_) { goto L_088477E4; }
    goto L_088477D8;
L_088477D8:;
    v0 = a0 + a2;
    f0 = BITSF(LD32(v0));
    f1 = f1 - f0;
    goto L_088477E4;
L_088477E4:;
    f5 = BITSF(0);
    fcc = FCMP(f1, f5, 2);
    cnd_ = fcc;
    f0 = f4 + f2;
    if (cnd_) { goto L_08847834; }
    goto L_088477F8;
L_088477F8:;
    f3 = f7 / f1;
    v0 = LD32(s3+36);
    f2 = BITSF(LD32(t0+4));
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f0 = f0 - f1;
    f0 = f0 + f0;
    f0 = f0 * f3;
    f2 = f0 - f2;
    fcc = FCMP(f2, f5, 12);
    cnd_ = fcc;
    if (cnd_) { f2 = f5; goto L_08847830; }
    goto L_08847830;
L_08847830:;
    f0 = f4 + f2;
    goto L_08847834;
L_08847834:;
    v0 = a0 + v1;
    f0 = f0 * f6;
    ST32(v0, FBITS(f0));
    goto L_0884766C;
L_08847844:;
    v0 = 0 + 0;
    t5 = a0 + t3;
    t0 = a2 + 1;
    if (a2 != 0) v0 = a3;
    t4 = t5 + 0;
    a3 = v0 << 2;
    cnd_ = t1 != 0;
    v1 = t0 + 0;
    if (cnd_) { goto L_08847868; }
    goto L_08847864;
L_08847864:;
    v1 = a1 + 0;
    goto L_08847868;
L_08847868:;
    v0 = LD32(s3+12);
    t1 = v1 << 2;
    a0 = LD32(s3+16);
    v1 = t1 + v0;
    v0 = a3 + v0;
    f1 = BITSF(LD32(v1));
    f0 = BITSF(LD32(v0));
    a2 = a3 + a0;
    cnd_ = a0 == 0;
    f1 = f1 - f0;
    if (cnd_) { goto L_08847898; }
    goto L_08847890;
L_08847890:;
    f0 = BITSF(LD32(a2));
    f1 = f1 - f0;
    goto L_08847898;
L_08847898:;
    fcc = FCMP(f1, f3, 2);
    cnd_ = fcc;
    if (cnd_) { ST32(t4, 0); goto L_0884762C; }
    goto L_088478A8;
L_088478A8:;
    f2 = f4 / f1;
    v0 = LD32(s3+36);
    v1 = t1 + v0;
    v0 = a3 + v0;
    f0 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v0));
    f0 = f0 - f1;
    f0 = f0 * f2;
    ST32(t5, FBITS(f0));
    goto L_0884762C;
L_088478D0:;
    a0 = s3 + 24;
    func_08AA3FC0(a0, a1, 0, t2, t3);
    goto L_088478D8;
L_088478D8:;
    a1 = LD32(s3+32);
    goto L_088475E8;
L_088478E0:;
    s5 = sp + 16;
    s0 = 0 + 0;
    s1 = s5 + 0;
    goto L_088478EC;
L_088478EC:;
    f0 = BITSF(s0);
    a2 = s1 + 0;
    a0 = s3 + 0;
    f12 = (float)(s32)FBITS(f0);
    a1 = s4 + 0;
    s0 = s0 + 1;
    s1 = s1 + 12;
    f12 = f12 * f21;
    { rv_t r_ = func_088493E0(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08847910;
L_08847910:;
    v0 = (s32)s0 < 21;
    cnd_ = v0 != 0;
    v0 = s5 + 0;
    if (cnd_) { goto L_088478EC; }
    goto L_0884791C;
L_0884791C:;
    a2 = LD32(s3+28);
    v1 = 19;
    a0 = a2 & 0x40;
    goto L_08847928;
L_08847928:;
    cnd_ = a0 == 0;
    v1 = v1 - 1;
    if (cnd_) { goto L_08847940; }
    goto L_08847930;
L_08847930:;
    f0 = BITSF(LD32(s3+40));
    f0 = f0 + f20;
    ST32(s2, FBITS(f0));
    s2 = s2 + 4;
    goto L_08847940;
L_08847940:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+12));
    f1 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(v0+16));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+20));
    f0 = f0 - f5;
    f1 = f1 - f4;
    f2 = f2 - f3;
    {u32 a_=sp+(288);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a1 = FBITS(f0);
    {v[0]=BITSF(a1);}
    a1 = FBITS(f1);
    {v[1]=BITSF(a1);}
    a1 = FBITS(f2);
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp, FBITS(f0));
    v0 = v0 + 12;
    ST32(sp+4, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {a1=FBITS(v[0]);}
    f0 = BITSF(a1);
    ST32(sp+8, FBITS(f2));
    cnd_ = (s32)v1 >= 0;
    f20 = f20 + f0;
    if (cnd_) { goto L_08847928; }
    goto L_088479A8;
L_088479A8:;
    a3 = LD32(s3+36);
    a1 = LD32(s3+32);
    goto L_088475A0;
L_088479B4:;
    a2 = LD32(s3+28);
    goto L_088475C4;
L_088479BC:;
    a0 = s3 + 48;
    a1 = v0 << 2;
    a1 = a1 + v0;
    a1 = a1 << 2;
    a1 = a1 + 1;
    func_08AA3FC0(a0, a1, 0, 0, 0);
    goto L_088479D4;
L_088479D4:;
    v1 = LD32(s3+48);
    goto L_088474A8;
L_088479DC:;
    a0 = s3 + 36;
    a1 = a1 + 1;
    func_08AA3FC0(a0, a1, 0, 0, 0);
    goto L_088479E8;
L_088479E8:;
    v1 = LD32(s3+48);
    goto L_08847490;
}

/* 088479F0 */
u32 func_088479F0(u32 a0, u32 a1, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088479F0:;
    sp = sp - 32;
    v0 = 1;
    s1 = a1 + 0;
    a2 = sp + 4;
    s0 = a0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == v0;
    a1 = sp + 0;
    if (cnd_) { goto L_08847A4C; }
    goto L_08847A1C;
L_08847A1C:;
    func_08848EE4(a0, a1, a2, a3, f12);
    goto L_08847A24;
L_08847A24:;
    a1 = LD32(sp+4);
    f12 = BITSF(LD32(sp));
    a0 = s0 + 0;
    a2 = s1 + 0;
    { rv_t r_ = func_088493E0(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08847A38;
L_08847A38:;
    sp = sp + 32;
    return v0;
L_08847A4C:;
    v0 = LD32(a0+8);
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s1+8, FBITS(f0));
    ST32(s1, FBITS(f1));
    ST32(s1+4, FBITS(f2));
    goto L_08847A38;
}

/* 08847A6C */
rv_t func_08847A6C(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08847A6C:;
    sp = sp - 96;
    v0 = 1;
    s2 = a2 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == v0;
    f21 = f12;
    if (cnd_) { goto L_08847BE4; }
    goto L_08847AA4;
L_08847AA4:;
    f0 = func_08848E14(a0, f12);
    goto L_08847AAC;
L_08847AAC:;
    f12 = f0;
    a0 = s0 + 0;
    a1 = sp + 48;
    a2 = sp + 52;
    a3 = 0 + 0;
    { u64 r_ = func_088490B4(a0, a1, a2, a3, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08847AC4;
L_08847AC4:;
    a1 = LD32(sp+52);
    f12 = BITSF(LD32(sp+48));
    a0 = s0 + 0;
    a2 = s1 + 0;
    { rv_t r_ = func_088493E0(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08847AD8;
L_08847AD8:;
    v0 = LD32(s0+28);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08847B08; }
    goto L_08847AE8;
L_08847AE8:;
    goto L_08847AEC;
L_08847AEC:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_08847B08:;
    a0 = s0 + 0;
    f0 = func_08848BB8(a0);
    goto L_08847B10;
L_08847B10:;
    fcc = FCMP(f0, f21, 12);
    f20 = f0;
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_08847B24; }
    goto L_08847B20;
L_08847B20:;
    v1 = 0 + 0;
    goto L_08847B24;
L_08847B24:;
    v0 = 0 < s2;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08847AEC; }
    goto L_08847B34;
L_08847B34:;
    a0 = s2 + 0;
    { rv_t r_ = func_08848BAC(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08847B3C;
L_08847B3C:;
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    f12 = f0;
    if (cnd_) { goto L_08847AE8; }
    goto L_08847B4C;
L_08847B4C:;
    f1 = f21 - f20;
    f0 = f0 - f20;
    v0 = D_08AEB990 - (-18032);
    f2 = BITSF(LD32(v0-18032));
    f20 = f1 / f0;
    fcc = FCMP(f2, f20, 12);
    cnd_ = fcc;
    if (cnd_) { f20 = f2; goto L_08847B70; }
    goto L_08847B70;
L_08847B70:;
    a0 = s2 + 0;
    a1 = sp + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_08847A6C(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08847B80;
L_08847B80:;
    f4 = BITSF(LD32(s1));
    f5 = BITSF(LD32(s1+4));
    f3 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    f0 = f0 - f4;
    f1 = f1 - f5;
    f2 = f2 - f3;
    f6 = f0 * f20;
    f7 = f1 * f20;
    f8 = f2 * f20;
    ST32(sp+32, FBITS(f0));
    f4 = f4 + f6;
    f5 = f5 + f7;
    f3 = f3 + f8;
    ST32(sp+36, FBITS(f1));
    ST32(s1+8, FBITS(f3));
    ST32(s1, FBITS(f4));
    ST32(s1+4, FBITS(f5));
    ST32(sp+40, FBITS(f2));
    ST32(sp+16, FBITS(f6));
    ST32(sp+20, FBITS(f7));
    ST32(sp+24, FBITS(f8));
    goto L_08847AE8;
L_08847BE4:;
    v0 = LD32(a0+8);
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(a1+8, FBITS(f0));
    ST32(a1, FBITS(f1));
    ST32(a1+4, FBITS(f2));
    goto L_08847AD8;
}

/* 08847C04 */
void func_08847C04(u32 a0, u32 a1, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_08847C04:;
    sp = sp - 144;
    v0 = 1;
    s1 = a1 + 0;
    a1 = sp + 48;
    s0 = a0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == v0;
    f21 = f12;
    if (cnd_) { goto L_08847D54; }
    goto L_08847C38;
L_08847C38:;
    v0 = D_08AEB994 - (-18028);
    f20 = BITSF(LD32(v0-18028));
    f12 = f12 - f20;
    f20 = f21 + f20;
    v0 = func_088479F0(a0, a1, a3, f12);
    goto L_08847C4C;
L_08847C4C:;
    a0 = s0 + 0;
    a1 = sp + 64;
    f12 = f20;
    v0 = func_088479F0(a0, a1, 0, f12);
    goto L_08847C5C;
L_08847C5C:;
    f0 = BITSF(LD32(sp+48));
    f3 = BITSF(LD32(sp+64));
    f1 = BITSF(LD32(sp+68));
    f2 = BITSF(LD32(sp+72));
    f3 = f3 - f0;
    f0 = BITSF(LD32(sp+52));
    f4 = BITSF(0);
    f1 = f1 - f0;
    f0 = BITSF(LD32(sp+56));
    fcc = FCMP(f3, f4, 2);
    ST32(s1, FBITS(f3));
    f2 = f2 - f0;
    ST32(s1+4, FBITS(f1));
    ST32(s1+8, FBITS(f2));
    ST32(sp+80, FBITS(f3));
    ST32(sp+84, FBITS(f1));
    cnd_ = !fcc;
    ST32(sp+88, FBITS(f2));
    if (cnd_) { goto L_08847CC4; }
    goto L_08847CA4;
L_08847CA4:;
    fcc = FCMP(f1, f4, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s1); goto L_08847CC8; }
    goto L_08847CB4;
L_08847CB4:;
    fcc = FCMP(f2, f4, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_08847D3C; }
    goto L_08847CC4;
L_08847CC4:;
    v0 = LD32(s1);
    goto L_08847CC8;
L_08847CC8:;
    v1 = LD32(s1+4);
    a0 = LD32(s1+8);
    {u32 a_=sp+(96);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    f0 = BITSF(0);
    {v[8]=BITSF(v0);}
    {v[9]=BITSF(v1);}
    {v[10]=BITSF(a0);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    if (cnd_) { goto L_08847D38; }
    goto L_08847D00;
L_08847D00:;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[0];float d0=s0/t0;v[12]=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[12];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(s1+8, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(s1, FBITS(f2));
    ST32(sp+84, v0);
    ST32(sp+80, FBITS(f2));
    ST32(sp+88, FBITS(f3));
    ST32(s1+4, v0);
    goto L_08847D38;
L_08847D38:;
    goto L_08847D3C;
L_08847D3C:;
    sp = sp + 144;
    return;
L_08847D54:;
    v0 = LD32(a0+44);
    {v[112]=BITSF(LD32(v0+(0)));}
    {v[113]=BITSF(LD32(v0+(4)));}
    {v[114]=BITSF(LD32(v0+(8)));}
    {v[115]=BITSF(LD32(v0+(12)));}
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
    f2 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+32));
    f0 = BITSF(LD32(sp+8));
    ST32(s1+4, FBITS(f2));
    ST32(s1, FBITS(f0));
    ST32(s1+8, FBITS(f1));
    goto L_08847D38;
}

/* 08847DEC */
u64 func_08847DEC(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr80 = v[80], vr81 = v[81], vr82 = v[82], vr83 = v[83], vr84 = v[84], vr85 = v[85], vr86 = v[86], vr87 = v[87], vr90 = v[90], vr91 = v[91], vr92 = v[92], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr99 = v[99], vr100 = v[100], vr101 = v[101], vr102 = v[102], vr104 = v[104], vr105 = v[105], vr106 = v[106], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr119 = v[119], vr120 = v[120], vr121 = v[121], vr122 = v[122], vr123 = v[123], vr124 = v[124], vr125 = v[125];
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08847DEC:;
    sp = sp - 48;
    v0 = 1;
    s1 = a1 + 0;
    a2 = sp + 20;
    a3 = 0 + 0;
    s0 = a0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == v0;
    a1 = sp + 16;
    if (cnd_) { goto L_08847F8C; }
    goto L_08847E1C;
L_08847E1C:;
    { u64 r_ = func_088490B4(a0, a1, a2, a3, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08847E24;
L_08847E24:;
    a0 = D_08AEB9A4 - (-18012);
    v1 = LD32(sp+20);
    f0 = BITSF(LD32(sp+16));
    v0 = LD32(s0+44);
    f1 = BITSF(LD32(a0-18012));
    v1 = v1 << 4;
    v0 = v0 + v1;
    a0 = FBITS(f1);
    v1 = FBITS(f0);
    {vr112=BITSF(LD32(v0+(0)));}
    {vr113=BITSF(LD32(v0+(4)));}
    {vr114=BITSF(LD32(v0+(8)));}
    {vr115=BITSF(LD32(v0+(12)));}
    {vr116=BITSF(LD32(v0+(16)));}
    {vr117=BITSF(LD32(v0+(20)));}
    {vr118=BITSF(LD32(v0+(24)));}
    {vr119=BITSF(LD32(v0+(28)));}
    {vr124=BITSF(v1);}
    {v[127]=BITSF(a0);}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr96=sum;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=vr0;vr98=(float)1;}
    {float s0=vr97;float t0=vr96;float d0=(s0>=t0?1.f:0.f);vr99=d0;}
    {float s0=vr96;float d0=fabsf(s0);vr96=d0;}
    {float s0=vr98;float t0=vr124;float d0=s0-t0;vr125=d0;}
    {float s0=vr96;float t0=v[127];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08847EB4; }
    goto L_08847E94;
L_08847E94:;
    {float s0=vr96;float d0=asinf(s0)*0.63661977236f;vr100=d0;}
    {float s0=vr98;float t0=vr100;float d0=s0-t0;vr100=d0;}
    {float s0=vr100;float d0=sinf(s0*1.57079632679f);vr101=d0;}
    {float s0=vr124;float s1=vr125;float t0=vr100;vr124=s0*t0;vr125=s1*t0;}
    {float s0=vr101;float d0=1.0f/s0;vr102=d0;}
    {float s0=vr124;float s1=vr125;float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=vr102;vr124=s0*t0;vr125=s1*t0;}
    goto L_08847EB4;
L_08847EB4:;
    {float s0=vr99;float t0=vr99;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08847EC8; }
    goto L_08847EC0;
L_08847EC0:;
    {float s0=vr124;float d0=-s0;vr124=d0;}
    goto L_08847EC8;
L_08847EC8:;
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr125;vr80=s0*t0;vr81=s1*t0;vr82=s2*t0;vr83=s3*t0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float t0=vr124;vr84=s0*t0;vr85=s1*t0;vr86=s2*t0;vr87=s3*t0;}
    {float s0=vr80;float s1=vr81;float s2=vr82;float s3=vr83;float t0=vr84;float t1=vr85;float t2=vr86;float t3=vr87;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr120=d0;vr121=d1;vr122=d2;vr123=d3;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float s3=vr123;float t0=vr120;float t1=vr121;float t2=vr122;float t3=vr123;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr92=sum;}
    {float s0=vr92;float t0=vr92;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08847EF0; }
    goto L_08847EE4;
L_08847EE4:;
    {float s0=vr92;float d0=1.0f/sqrtf(s0);vr92=d0;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float s3=vr123;float t0=vr92;vr120=s0*t0;vr121=s1*t0;vr122=s2*t0;vr123=s3*t0;}
    goto L_08847EF0;
L_08847EF0:;
    {ST32(sp+(0),FBITS(vr120));}
    {ST32(sp+(4),FBITS(vr121));}
    {ST32(sp+(8),FBITS(vr122));}
    {ST32(sp+(12),FBITS(vr123));}
    {vr112=BITSF(LD32(sp+(0)));}
    {vr113=BITSF(LD32(sp+(4)));}
    {vr114=BITSF(LD32(sp+(8)));}
    {vr115=BITSF(LD32(sp+(12)));}
    {float s0=vr0;vr120=(float)1;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr112;vr80=s0*t0;vr81=s1*t0;vr82=s2*t0;vr83=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr113;vr84=s0*t0;vr85=s1*t0;vr86=s2*t0;vr87=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr114;v[88]=s0*t0;v[89]=s1*t0;vr90=s2*t0;vr91=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr115;vr92=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
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
    {ST32(s1+(0),FBITS(vr96));}
    {ST32(s1+(4),FBITS(vr97));}
    {ST32(s1+(8),FBITS(vr98));}
    {ST32(s1+(12),FBITS(vr100));}
    {ST32(s1+(16),FBITS(vr101));}
    {ST32(s1+(20),FBITS(vr102));}
    {ST32(s1+(24),FBITS(vr104));}
    {ST32(s1+(28),FBITS(vr105));}
    {ST32(s1+(32),FBITS(vr106));}
    goto L_08847F7C;
L_08847F7C:;
    sp = sp + 48;
    { v[80]=vr80;v[81]=vr81;v[82]=vr82;v[83]=vr83;v[84]=vr84;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[90]=vr90;v[91]=vr91;v[92]=vr92;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;return (u64)v0 | ((u64)v1 << 32); }
L_08847F8C:;
    v0 = LD32(a0+44);
    {vr112=BITSF(LD32(v0+(0)));}
    {vr113=BITSF(LD32(v0+(4)));}
    {vr114=BITSF(LD32(v0+(8)));}
    {vr115=BITSF(LD32(v0+(12)));}
    {float s0=vr0;vr120=(float)1;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr112;vr80=s0*t0;vr81=s1*t0;vr82=s2*t0;vr83=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr113;vr84=s0*t0;vr85=s1*t0;vr86=s2*t0;vr87=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr114;v[88]=s0*t0;v[89]=s1*t0;vr90=s2*t0;vr91=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr115;vr92=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
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
    {ST32(s1+(0),FBITS(vr96));}
    {ST32(s1+(4),FBITS(vr97));}
    {ST32(s1+(8),FBITS(vr98));}
    {ST32(s1+(12),FBITS(vr100));}
    {ST32(s1+(16),FBITS(vr101));}
    {ST32(s1+(20),FBITS(vr102));}
    {ST32(s1+(24),FBITS(vr104));}
    {ST32(s1+(28),FBITS(vr105));}
    {ST32(s1+(32),FBITS(vr106));}
    goto L_08847F7C;
    v[80]=vr80;v[81]=vr81;v[82]=vr82;v[83]=vr83;v[84]=vr84;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[90]=vr90;v[91]=vr91;v[92]=vr92;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;
}

/* 08848010 */
rv_t func_08848010(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr13 = v[13], vr14 = v[14], vr64 = v[64], vr65 = v[65], vr66 = v[66], vr67 = v[67], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr71 = v[71], vr73 = v[73], vr76 = v[76], vr77 = v[77], vr78 = v[78], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr120 = v[120], vr121 = v[121], vr122 = v[122], vr124 = v[124], vr125 = v[125], vr126 = v[126], vr127 = v[127];
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_08848010:;
    sp = sp - 176;
    s3 = sp + 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a0+28);
    v0 = v0 & 0x6;
    cnd_ = v0 != 0;
    f20 = f12;
    if (cnd_) { goto L_0884858C; }
    goto L_08848048;
L_08848048:;
    f12 = f20;
    goto L_0884804C;
L_0884804C:;
    a0 = s1 + 0;
    f0 = func_08848B2C(a0, f12);
    goto L_08848054;
L_08848054:;
    s2 = sp + 80;
    f12 = f0;
    a0 = s1 + 0;
    a1 = s2 + 0;
    ({ v[0]=vr0;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[120]=vr120;func_08847C04(a0, a1, 0, f12); vr0=v[0];vr96=v[96];vr97=v[97];vr98=v[98];vr112=v[112];vr113=v[113];vr114=v[114];vr120=v[120];});
    goto L_08848068;
L_08848068:;
    v0 = LD32(s1+28);
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08848128; }
    goto L_08848078;
L_08848078:;
    ST32(sp+84, 0);
    f0 = BITSF(LD32(sp+80));
    f2 = BITSF(LD32(sp+84));
    fcc = FCMP(f0, f2, 2);
    cnd_ = !fcc;
    f1 = BITSF(LD32(sp+88));
    if (cnd_) { goto L_088480AC; }
    goto L_08848094;
L_08848094:;
    fcc = FCMP(f1, f2, 2);
    cnd_ = !fcc;
    v0 = D_08AEB9AC - (-18004);
    if (cnd_) { goto L_088480AC; }
    goto L_088480A4;
L_088480A4:;
    f0 = BITSF(LD32(v0-18004));
    ST32(sp+80, FBITS(f0));
    goto L_088480AC;
L_088480AC:;
    v0 = FBITS(f0);
    {u32 a_=sp+(112);v[12]=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v[12]=BITSF(v0);}
    v0 = 0 + 0;
    {vr13=BITSF(v0);}
    v0 = FBITS(f1);
    f1 = BITSF(0);
    {vr14=BITSF(v0);}
    {float s0=v[12];float s1=vr13;float s2=vr14;float t0=v[12];float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    a0 = s3 + 0;
    if (cnd_) { goto L_08848128; }
    goto L_088480E8;
L_088480E8:;
    {float s0=vr0;float d0=sqrtf(s0);v[8]=d0;}
    {float s0=vr0;float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(vr0);}
    f2 = BITSF(v0);
    ST32(sp+104, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+96, FBITS(f2));
    ST32(sp+100, v0);
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, v0);
    ST32(sp+88, FBITS(f3));
    a0 = s3 + 0;
    goto L_08848128;
L_08848128:;
    a1 = s2 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[13]=vr13;v[14]=vr14;__auto_type vr_t_ = func_088F82FC(a0, a1); vr0=v[0];vr13=v[13];vr14=v[14];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08848130;
L_08848130:;
    v0 = LD32(s1+28);
    v0 = v0 & 0x4;
    cnd_ = v0 != 0;
    f0 = BITSF(LD32(sp+16));
    if (cnd_) { goto L_088481A4; }
    goto L_08848140;
L_08848140:;
    f1 = BITSF(LD32(sp+48));
    ST32(s0, FBITS(f0));
    f0 = BITSF(LD32(sp+20));
    ST32(s0+32, FBITS(f1));
    ST32(s0+4, FBITS(f0));
    f1 = BITSF(LD32(sp+24));
    f0 = BITSF(LD32(sp+28));
    ST32(s0+8, FBITS(f1));
    ST32(s0+12, FBITS(f0));
    f1 = BITSF(LD32(sp+32));
    f0 = BITSF(LD32(sp+36));
    ST32(s0+16, FBITS(f1));
    ST32(s0+20, FBITS(f0));
    f1 = BITSF(LD32(sp+40));
    f0 = BITSF(LD32(sp+44));
    ST32(s0+24, FBITS(f1));
    ST32(s0+28, FBITS(f0));
    goto L_08848188;
L_08848188:;
    sp = sp + 176;
    { v[0]=vr0;v[13]=vr13;v[14]=vr14;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[124]=vr124;v[125]=vr125;v[126]=vr126;v[127]=vr127;return (rv_t){ v0, v1, f0 }; }
L_088481A4:;
    {vr112=BITSF(LD32(sp+(16)));}
    {vr113=BITSF(LD32(sp+(20)));}
    {vr114=BITSF(LD32(sp+(24)));}
    {vr116=BITSF(LD32(sp+(28)));}
    {vr117=BITSF(LD32(sp+(32)));}
    {vr118=BITSF(LD32(sp+(36)));}
    {vr120=BITSF(LD32(sp+(40)));}
    {vr121=BITSF(LD32(sp+(44)));}
    {vr122=BITSF(LD32(sp+(48)));}
    {vr124=1.57079632679f;}
    {float s0=vr0;vr125=(float)1;}
    {float s0=-(vr118);float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08848424; }
    goto L_088481E0;
L_088481E0:;
    {float s0=vr118;float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08848364; }
    goto L_088481F0;
L_088481F0:;
    {float s0=-(vr118);float d0=asinf(s0)*0.63661977236f;vr96=d0;}
    {float s0=vr114;float d0=s0;vr64=d0;}
    {float s0=vr122;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08848288; }
    goto L_08848218;
L_08848218:;
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
    if (cnd_) { goto L_08848264; }
    goto L_08848254;
L_08848254:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08848264;
L_08848264:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088482A8; }
    goto L_08848274;
L_08848274:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_088482A8; }
    goto L_08848284;
L_08848284:;
    goto L_08848288;
L_08848288:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088482A8; }
    goto L_0884829C;
L_0884829C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_088482A8;
L_088482A8:;
    {float s0=vr78;float d0=s0;vr97=d0;}
    {float s0=vr116;float d0=s0;vr64=d0;}
    {float s0=vr117;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08848338; }
    goto L_088482C8;
L_088482C8:;
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
    if (cnd_) { goto L_08848314; }
    goto L_08848304;
L_08848304:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08848314;
L_08848314:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08848358; }
    goto L_08848324;
L_08848324:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08848358; }
    goto L_08848334;
L_08848334:;
    goto L_08848338;
L_08848338:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08848358; }
    goto L_0884834C;
L_0884834C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08848358;
L_08848358:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_088484DC; }
    goto L_08848360;
L_08848360:;
    goto L_08848364;
L_08848364:;
    {float s0=vr125;float d0=-s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=vr120;float d0=s0;vr64=d0;}
    {float s0=vr112;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_088483F8; }
    goto L_08848388;
L_08848388:;
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
    if (cnd_) { goto L_088483D4; }
    goto L_088483C4;
L_088483C4:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_088483D4;
L_088483D4:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08848418; }
    goto L_088483E4;
L_088483E4:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08848418; }
    goto L_088483F4;
L_088483F4:;
    goto L_088483F8;
L_088483F8:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08848418; }
    goto L_0884840C;
L_0884840C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08848418;
L_08848418:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_088484DC; }
    goto L_08848420;
L_08848420:;
    goto L_08848424;
L_08848424:;
    {float s0=vr125;float d0=s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=vr113;float d0=s0;vr64=d0;}
    {float s0=vr121;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_088484B8; }
    goto L_08848448;
L_08848448:;
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
    if (cnd_) { goto L_08848494; }
    goto L_08848484;
L_08848484:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08848494;
L_08848494:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088484D8; }
    goto L_088484A4;
L_088484A4:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_088484D8; }
    goto L_088484B4;
L_088484B4:;
    goto L_088484B8;
L_088484B8:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088484D8; }
    goto L_088484CC;
L_088484CC:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_088484D8;
L_088484D8:;
    {float s0=vr78;float d0=s0;vr98=d0;}
    goto L_088484DC;
L_088484DC:;
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr124;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {ST32(sp+(64),FBITS(vr96));}
    {ST32(sp+(68),FBITS(vr97));}
    {ST32(sp+(72),FBITS(vr98));}
    f0 = BITSF(LD32(sp+8));
    ST32(sp+72, FBITS(f0));
    {vr112=BITSF(LD32(sp+(64)));}
    {vr113=BITSF(LD32(sp+(68)));}
    {vr114=BITSF(LD32(sp+(72)));}
    {v[115]=0.63661977236f;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=v[115];vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float d0=cosf(s0*1.57079632679f);float d1=cosf(s1*1.57079632679f);float d2=cosf(s2*1.57079632679f);vr116=d0;vr117=d1;vr118=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);float d2=sinf(s2*1.57079632679f);vr120=d0;vr121=d1;vr122=d2;}
    {float s0=vr120;float t0=vr121;float d0=s0*t0;v[115]=d0;}
    {float s0=v[115];float t0=vr122;float d0=s0*t0;v[123]=d0;}
    {float s0=vr117;float t0=vr118;float d0=s0*t0;vr127=d0;}
    {float s0=v[123];float s1=vr127;float t=0;t+=s0;t+=s1;vr96=t;}
    {float s0=v[115];float t0=vr118;float d0=s0*t0;v[123]=d0;}
    {float s0=vr117;float t0=vr122;float d0=s0*t0;vr127=d0;}
    {float s0=vr121;float t0=vr118;float d0=s0*t0;vr126=d0;}
    {float s0=vr126;float s1=vr127;float d0=-s0;float d1=-s1;vr126=d0;vr127=d1;}
    {float s0=v[123];float s1=vr127;float t=0;t+=s0;t+=s1;vr97=t;}
    {float s0=vr116;float t0=vr121;float d0=s0*t0;vr98=d0;}
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
    {ST32(s0+(0),FBITS(vr96));}
    {ST32(s0+(4),FBITS(vr97));}
    {ST32(s0+(8),FBITS(vr98));}
    {ST32(s0+(12),FBITS(v[100]));}
    {ST32(s0+(16),FBITS(v[101]));}
    {ST32(s0+(20),FBITS(v[102]));}
    {ST32(s0+(24),FBITS(v[104]));}
    {ST32(s0+(28),FBITS(v[105]));}
    {ST32(s0+(32),FBITS(v[106]));}
    goto L_08848188;
L_0884858C:;
    a1 = s3 + 0;
    { u64 r_ = ({ v[0]=vr0;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[124]=vr124;v[125]=vr125;v[127]=vr127;__auto_type vr_t_ = func_08847DEC(a0, a1, f12); vr96=v[96];vr97=v[97];vr98=v[98];vr112=v[112];vr113=v[113];vr114=v[114];vr116=v[116];vr117=v[117];vr118=v[118];vr120=v[120];vr121=v[121];vr122=v[122];vr124=v[124];vr125=v[125];vr127=v[127];vr_t_; }); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08848594;
L_08848594:;
    v0 = LD32(s1+28);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    f0 = BITSF(LD32(sp+16));
    if (cnd_) { goto L_08848140; }
    goto L_088485A4;
L_088485A4:;
    {vr112=BITSF(LD32(sp+(16)));}
    {vr113=BITSF(LD32(sp+(20)));}
    {vr114=BITSF(LD32(sp+(24)));}
    {vr116=BITSF(LD32(sp+(28)));}
    {vr117=BITSF(LD32(sp+(32)));}
    {vr118=BITSF(LD32(sp+(36)));}
    {vr120=BITSF(LD32(sp+(40)));}
    {vr121=BITSF(LD32(sp+(44)));}
    {vr122=BITSF(LD32(sp+(48)));}
    {vr124=1.57079632679f;}
    {float s0=vr0;vr125=(float)1;}
    {float s0=-(vr118);float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08848824; }
    goto L_088485E0;
L_088485E0:;
    {float s0=vr118;float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08848764; }
    goto L_088485F0;
L_088485F0:;
    {float s0=-(vr118);float d0=asinf(s0)*0.63661977236f;vr96=d0;}
    {float s0=vr114;float d0=s0;vr64=d0;}
    {float s0=vr122;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08848688; }
    goto L_08848618;
L_08848618:;
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
    if (cnd_) { goto L_08848664; }
    goto L_08848654;
L_08848654:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08848664;
L_08848664:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088486A8; }
    goto L_08848674;
L_08848674:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_088486A8; }
    goto L_08848684;
L_08848684:;
    goto L_08848688;
L_08848688:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088486A8; }
    goto L_0884869C;
L_0884869C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_088486A8;
L_088486A8:;
    {float s0=vr78;float d0=s0;vr97=d0;}
    {float s0=vr116;float d0=s0;vr64=d0;}
    {float s0=vr117;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08848738; }
    goto L_088486C8;
L_088486C8:;
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
    if (cnd_) { goto L_08848714; }
    goto L_08848704;
L_08848704:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08848714;
L_08848714:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08848758; }
    goto L_08848724;
L_08848724:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08848758; }
    goto L_08848734;
L_08848734:;
    goto L_08848738;
L_08848738:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08848758; }
    goto L_0884874C;
L_0884874C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08848758;
L_08848758:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_088488DC; }
    goto L_08848760;
L_08848760:;
    goto L_08848764;
L_08848764:;
    {float s0=vr125;float d0=-s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=vr120;float d0=s0;vr64=d0;}
    {float s0=vr112;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_088487F8; }
    goto L_08848788;
L_08848788:;
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
    if (cnd_) { goto L_088487D4; }
    goto L_088487C4;
L_088487C4:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_088487D4;
L_088487D4:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08848818; }
    goto L_088487E4;
L_088487E4:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08848818; }
    goto L_088487F4;
L_088487F4:;
    goto L_088487F8;
L_088487F8:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08848818; }
    goto L_0884880C;
L_0884880C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08848818;
L_08848818:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_088488DC; }
    goto L_08848820;
L_08848820:;
    goto L_08848824;
L_08848824:;
    {float s0=vr125;float d0=s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=vr113;float d0=s0;vr64=d0;}
    {float s0=vr121;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_088488B8; }
    goto L_08848848;
L_08848848:;
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
    if (cnd_) { goto L_08848894; }
    goto L_08848884;
L_08848884:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08848894;
L_08848894:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088488D8; }
    goto L_088488A4;
L_088488A4:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_088488D8; }
    goto L_088488B4;
L_088488B4:;
    goto L_088488B8;
L_088488B8:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088488D8; }
    goto L_088488CC;
L_088488CC:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_088488D8;
L_088488D8:;
    {float s0=vr78;float d0=s0;vr98=d0;}
    goto L_088488DC;
L_088488DC:;
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr124;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {ST32(sp+(0),FBITS(vr96));}
    {ST32(sp+(4),FBITS(vr97));}
    {ST32(sp+(8),FBITS(vr98));}
    f12 = f20;
    goto L_0884804C;
    v[0]=vr0;v[13]=vr13;v[14]=vr14;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[124]=vr124;v[125]=vr125;v[126]=vr126;v[127]=vr127;
}
