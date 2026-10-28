#include "game.h"
#include "../../platform/common/game_hooks.h"   /* native hook (tools/dc/hooks.py) */

/* 08984A0C */
float func_08984A0C(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08984A0C:;
    sp = sp - 16;
    v0 = a1 + 0;
    a2 = 0 + 0;
    s0 = a0 + 0;
    a3 = 0 + 0;
    a0 = 0x807d;
    a1 = 8;
    v1 = LD32(s0+4);
    cnd_ = v1 != 0;
    s1 = v0 & 0xff;
    if (cnd_) { goto L_08984A54; }
    goto L_08984A40;
L_08984A40:;
    goto L_08984A44;
L_08984A44:;
    sp = sp + 16;
    return f0;
L_08984A54:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08984A5C;
L_08984A5C:;
    t0 = LD32(v0+24);
    t1 = v0 + 0;
    a0 = v0 + 0;
    a2 = 1;
    t2 = 1;
    cnd_ = t0 == 0;
    a1 = 1;
    if (cnd_) { goto L_08984AB8; }
    goto L_08984A78;
L_08984A78:;
    a3 = LD_U8(s0+8);
    v1 = LD32(t0);
    v0 = D_08B1BBA8 - (-17496);
    v1 = (v1 & ~(0x1u << 0)) | ((a3 & 0x1) << 0);
    f2 = BITSF(LD32(v0-17496));
    ST32(t0, v1);
    f0 = BITSF(LD32(s0+12));
    ST32(t0+4, FBITS(f0));
    f1 = BITSF(LD32(s0+12));
    fcc = FCMP(f2, f1, 14);
    cnd_ = fcc;
    v0 = v1 + 0;
    if (cnd_) { goto L_08984AB0; }
    goto L_08984AAC;
L_08984AAC:;
    t2 = 0 + 0;
    goto L_08984AB0;
L_08984AB0:;
    v0 = (v0 & ~(0x1u << 1)) | ((t2 & 0x1) << 1);
    ST32(t0, v0);
    goto L_08984AB8;
L_08984AB8:;
    cnd_ = s1 == 0;
    if (cnd_) { a3 = LD32(s0+4); goto L_08984AD0; }
    goto L_08984AC0;
L_08984AC0:;
    v0 = LD32(t1+28);
    v0 = v0 | 0x1;
    ST32(t1+28, v0);
    a3 = LD32(s0+4);
    goto L_08984AD0;
L_08984AD0:;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    v1 = LD32(v0+4);
    ST32(t1+4, v1);
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    a3 = a3 + v1;
    v0 = LD32(a3+4);
    ST32(t1, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, t1, t2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08984AFC;
L_08984AFC:;
    goto L_08984A44;
}

/* 08984B04 */
float func_08984B04(u32 a0, u32 a1)
{
    u32 v0 = 0;
    float f0 = 0;
    int cnd_;
L_08984B04:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08984B40; }
    goto L_08984B10;
L_08984B10:;
    v0 = LD_U8(v0+195);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08984B40; }
    goto L_08984B1C;
L_08984B1C:;
    cnd_ = a1 == 0;
    v0 = 1;
    if (cnd_) { goto L_08984B3C; }
    goto L_08984B24;
L_08984B24:;
    v0 = LD32(a1+112);
    f0 = BITSF(LD32(a1+116));
    v0 = (v0 >> 2) & 0x1;
    ST8(a0+8, v0);
    ST32(a0+12, FBITS(f0));
    v0 = 1;
    goto L_08984B3C;
L_08984B3C:;
    ST8(a0+10, v0);
    goto L_08984B40;
L_08984B40:;
    return f0;
}

/* 08984B48 */
void func_08984B48(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08984B48:;
    sp = sp - 16;
    a2 = LD32(a0+4);
    cnd_ = a2 == 0;
    if (cnd_) {  goto L_08984BC0; }
    goto L_08984B5C;
L_08984B5C:;
    v0 = LD_U8(a2+195);
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(a0+12));
    if (cnd_) { goto L_08984B84; }
    goto L_08984B68;
L_08984B68:;
    v0 = D_08B1BBA0 - (-17504);
    f12 = BITSF(LD32(v0-17504));
    fcc = FCMP(f0, f12, 14);
    cnd_ = !fcc;
    if (cnd_) { f12 = f0; goto L_08984B80; }
    goto L_08984B80;
L_08984B80:;
    f0 = f12;
    goto L_08984B84;
L_08984B84:;
    v1 = LD32(a2);
    f12 = f0;
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = a2 + v0;
    ST32(v0+196, FBITS(f0));
    v1 = LD32(a2);
    v0 = LD32(v1-12);
    v0 = a2 + v0;
    v1 = LD32(v0+100);
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08984BBC; }
    goto L_08984BB4;
L_08984BB4:;
    { rv_t r_ = func_08809AB8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08984BBC;
L_08984BBC:;
    goto L_08984BC0;
L_08984BC0:;
    sp = sp + 16;
    return;
}

/* 08984BC8 */
void func_08984BC8(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08984BC8:;
    sp = sp - 16;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08984C70; }
    goto L_08984BE4;
L_08984BE4:;
    v0 = LD_U8(v1+195);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08984C00; }
    goto L_08984BF0;
L_08984BF0:;
    v0 = LD_U8(a0+10);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08984CF8; }
    goto L_08984BFC;
L_08984BFC:;
    v0 = LD_U8(v1+195);
    goto L_08984C00;
L_08984C00:;
    cnd_ = v0 == 0;
    if (cnd_) { f1 = BITSF(LD32(s0+12)); goto L_08984C6C; }
    goto L_08984C08;
L_08984C08:;
    v0 = LD_U8(s0+11);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08984C34; }
    goto L_08984C14;
L_08984C14:;
    v0 = D_08AEE564 - (-6812);
    f0 = BITSF(LD32(s0+12));
    f1 = BITSF(LD32(v0-6812));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_08984C74; }
    goto L_08984C30;
L_08984C30:;
    v0 = LD_U8(s0+8);
    goto L_08984C34;
L_08984C34:;
    cnd_ = v0 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08984CCC; }
    goto L_08984C3C;
L_08984C3C:;
    a0 = s0 + 0;
    func_08984D14(a0);
    goto L_08984C44;
L_08984C44:;
    a0 = s0 + 0;
    func_08984D9C(a0);
    goto L_08984C4C;
L_08984C4C:;
    f0 = BITSF(LD32(s0+16));
    f1 = BITSF(LD32(s0+12));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_08984C98; }
    goto L_08984C64;
L_08984C64:;
    cnd_ = s1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_08984C84; }
    goto L_08984C6C;
L_08984C6C:;
    ST32(s0+16, FBITS(f1));
    goto L_08984C70;
L_08984C70:;
    goto L_08984C74;
L_08984C74:;
    sp = sp + 16;
    return;
L_08984C84:;
    a1 = 1;
    goto L_08984C88;
L_08984C88:;
    f0 = func_08984A0C(a0, a1, 0, 0);
    goto L_08984C90;
L_08984C90:;
    f1 = BITSF(LD32(s0+12));
    goto L_08984C6C;
L_08984C98:;
    a0 = s0 + 0;
    func_08984B48(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08984CA0;
L_08984CA0:;
    v0 = D_08AEE564 - (-6812);
    f0 = BITSF(LD32(s0+12));
    f1 = BITSF(LD32(v0-6812));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    a1 = 0 + 0;
    if (cnd_) { goto L_08984CC4; }
    goto L_08984CBC;
L_08984CBC:;
    v0 = LD_U8(s0+8);
    a1 = v0 < 0x1u;
    goto L_08984CC4;
L_08984CC4:;
    a0 = s0 + 0;
    goto L_08984C88;
L_08984CCC:;
    a0 = s0 + 0;
    func_08984E3C(a0);
    goto L_08984CD4;
L_08984CD4:;
    a0 = s0 + 0;
    func_08984E78(a0);
    goto L_08984CDC;
L_08984CDC:;
    a0 = s0 + 0;
    func_08984F00(a0);
    goto L_08984CE4;
L_08984CE4:;
    a0 = s0 + 0;
    func_08984F14(a0);
    goto L_08984CEC;
L_08984CEC:;
    v0 = LD_U8(s0+8);
    s1 = v0 < 0x1u;
    goto L_08984C3C;
L_08984CF8:;
    func_08984B48(a0, a3, t0, t1, t2, t3, f13, f14, f15, f16, f17, f18, f19);
    goto L_08984D00;
L_08984D00:;
    a0 = s0 + 0;
    func_089849A0(a0);
    goto L_08984D08;
L_08984D08:;
    f1 = BITSF(LD32(s0+12));
    ST8(s0+10, 0);
    goto L_08984C6C;
}

/* 08984D14 */
void func_08984D14(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08984D14:;
    sp = sp - 32;
    a1 = LD32(a0+4);
    cnd_ = a1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08984D50; }
    goto L_08984D30;
L_08984D30:;
    v0 = D_08B285A0 - (-31328);
    v1 = D_08B1BBAC - (-17492);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(v1-17492));
    v0 = LD_U8(s0+8);
    a0 = a1 + 0;
    cnd_ = v0 != 0;
    f20 = f0 * f1;
    if (cnd_) { goto L_08984D64; }
    goto L_08984D50;
L_08984D50:;
    goto L_08984D54;
L_08984D54:;
    sp = sp + 32;
    return;
L_08984D64:;
    v0 = LD32(a1);
    v1 = LD32(v0+344);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08984D74;
L_08984D74:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    f12 = f20;
    if (cnd_) { goto L_08984D8C; }
    goto L_08984D84;
L_08984D84:;
    ST8(s0+8, 0);
    goto L_08984D50;
L_08984D8C:;
    a0 = LD32(s0+4);
    { rv_t r_ = func_089DCE7C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08984D94;
L_08984D94:;
    goto L_08984D54;
}

/* 08984D9C */
void func_08984D9C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
L_08984D9C:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08984DEC; }
    goto L_08984DA8;
L_08984DA8:;
    f2 = BITSF(LD32(a0+12));
    f3 = BITSF(0);
    fcc = FCMP(f3, f2, 12);
    cnd_ = !fcc;
    v1 = D_08B1BBA4 - (-17500);
    if (cnd_) { goto L_08984DEC; }
    goto L_08984DC0;
L_08984DC0:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f1 = BITSF(LD32(v1-17500));
    f0 = f0 * f1;
    f0 = f2 - f0;
    fcc = FCMP(f3, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f3; goto L_08984DE4; }
    goto L_08984DE4;
L_08984DE4:;
    ST32(a0+12, FBITS(f0));
    return;
L_08984DEC:;
    cnd_ = v0 != 0;
    v0 = D_08AEE568 - (-6808);
    if (cnd_) { goto L_08984E34; }
    goto L_08984DF4;
L_08984DF4:;
    f3 = BITSF(LD32(v0-6808));
    f2 = BITSF(LD32(a0+12));
    fcc = FCMP(f2, f3, 12);
    cnd_ = !fcc;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_08984E34; }
    goto L_08984E0C;
L_08984E0C:;
    v1 = D_08B1BBA4 - (-17500);
    f0 = BITSF(LD32(v0-31328));
    f1 = BITSF(LD32(v1-17500));
    f0 = f0 * f1;
    f0 = f2 + f0;
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f3; goto L_08984E30; }
    goto L_08984E30;
L_08984E30:;
    ST32(a0+12, FBITS(f0));
    goto L_08984E34;
L_08984E34:;
    return;
}

/* 08984E3C */
void func_08984E3C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08984E3C:;
    a1 = LD32(a0+4);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08984E70; }
    goto L_08984E48;
L_08984E48:;
    v0 = LD32(a1);
    f0 = BITSF(LD32(a0+20));
    v1 = LD32(v0-12);
    v1 = a1 + v1;
    f1 = BITSF(LD32(v1+80));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { ST8(a0+8, 0); goto L_08984E6C; }
    goto L_08984E6C;
L_08984E6C:;
    ST32(a0+20, FBITS(f1));
    goto L_08984E70;
L_08984E70:;
    return;
}

/* 08984E78 */
void func_08984E78(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08984E78:;
    sp = sp - 16;
    a1 = LD32(a0+4);
    cnd_ = a1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08984EAC; }
    goto L_08984E90;
L_08984E90:;
    a2 = LD32(a1);
    v1 = 0x8005;
    v0 = LD32(a2-16);
    v0 = a1 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    if (cnd_) { v0 = LD32(a1+520); goto L_08984EBC; }
    goto L_08984EAC;
L_08984EAC:;
    goto L_08984EB0;
L_08984EB0:;
    sp = sp + 16;
    return;
L_08984EBC:;
    v1 = (v0 >> 3) & 0x1;
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { ST8(s0+8, 0); goto L_08984EAC; }
    goto L_08984ECC;
L_08984ECC:;
    cnd_ = v1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08984EAC; }
    goto L_08984ED4;
L_08984ED4:;
    v0 = LD32(a2+384);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08984EE0;
L_08984EE0:;
    v1 = 0xfd900000u;
    cnd_ = v0 == 0;
    v1 = v1 | 0x85c9;
    if (cnd_) { goto L_08984EAC; }
    goto L_08984EEC;
L_08984EEC:;
    v0 = LD32(v0+20);
    cnd_ = v0 == v1;
    if (cnd_) { goto L_08984EB0; }
    goto L_08984EF8;
L_08984EF8:;
    ST8(s0+8, 0);
    goto L_08984EB0;
}

/* 08984F00 */
void func_08984F00(u32 a0)
{
    u32 v0 = 0;
    int cnd_;
L_08984F00:;
    v0 = LD_U8(a0+11);
    cnd_ = v0 == 0;
    if (cnd_) { ST8(a0+8, 0); goto L_08984F0C; }
    goto L_08984F0C;
L_08984F0C:;
    return;
}

/* 08984F14 */
void func_08984F14(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08984F14:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08984F40; }
    goto L_08984F30;
L_08984F30:;
    goto L_08984F34;
L_08984F34:;
    sp = sp + 16;
    return;
L_08984F40:;
    { u64 r_ = func_089DD748(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08984F48;
L_08984F48:;
    cnd_ = v0 != 0;
    if (cnd_) { ST8(s0+8, 0); goto L_08984F30; }
    goto L_08984F50;
L_08984F50:;
    goto L_08984F34;
}

/* 08984F58 */
rv_t func_08984F58(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08984F58:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2A0D8 - (-24360);
    t1 = D_08C2A0E8 - (-24344);
    t2 = D_08C2A0F8 - (-24328);
    a1 = a1 & a0;
    v1 = t0 - 24360;
    a2 = t1 - 24344;
    cnd_ = a1 == 0;
    a3 = t2 - 24328;
    if (cnd_) { goto L_08985010; }
    goto L_08984F88;
L_08984F88:;
    v0 = D_08AEE56C - (-6804);
    f4 = BITSF(LD32(v0-6804));
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
    ST32(t0-24360, FBITS(f2));
    ST32(t1-24344, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-24328, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08985010;
L_08985010:;
    return (rv_t){ v0, v1, f0 };
}

/* 08985018 */
rv_t func_08985018(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08985018:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08984F58(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898502C;
L_0898502C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08985038 */
void func_08985038(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08985038:;
    v0 = 999;
    ST32(a0+128, v0);
    ST8(a0+120, 0);
    ST8(a0+121, 0);
    ST8(a0+122, 0);
    ST8(a0+123, 0);
    ST8(a0+124, 0);
    ST8(a0+125, 0);
    ST8(a0+126, 0);
    cnd_ = a1 == 0;
    ST8(a0+127, 0);
    if (cnd_) { goto L_08985078; }
    goto L_08985064;
L_08985064:;
    v0 = LD32(a1);
    v1 = LD32(v0-16);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    ST32(a0+128, v0);
    goto L_08985078;
L_08985078:;
    a1 = 0 + 0;
    v1 = a0 + 0;
    goto L_08985080;
L_08985080:;
    a1 = a1 + 1;
    v0 = a1 < 0xcu;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08985080; }
    goto L_08985094;
L_08985094:;
    a1 = 0 + 0;
    v1 = a0 + 72;
    goto L_0898509C;
L_0898509C:;
    a1 = a1 + 1;
    v0 = a1 < 0xcu;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898509C; }
    goto L_089850B0;
L_089850B0:;
    a0 = a0 + 48;
    v1 = 0 + 0;
    goto L_089850B8;
L_089850B8:;
    v1 = v1 + 1;
    v0 = v1 < 0x6u;
    ST32(a0, 0);
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_089850B8; }
    goto L_089850CC;
L_089850CC:;
    return;
}

/* 089850D4 */
void func_089850D4(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089850D4:;
    sp = sp - 16;
    f0 = func_0898673C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089850E4;
L_089850E4:;
    sp = sp + 16;
    return;
}

/* 089850F0 */
void func_089850F0(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089850F0:;
    sp = sp - 16;
    s2 = a0 + 0;
    v0 = LD_U8(a0+122);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08985148; }
    goto L_08985114;
L_08985114:;
    s0 = a0 + 0;
    v0 = LD32(s0);
    goto L_0898511C;
L_0898511C:;
    s1 = s1 + 1;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089851B4; }
    goto L_08985128;
L_08985128:;
    v0 = LD32(s0+72);
    goto L_0898512C;
L_0898512C:;
    s0 = s0 + 4;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089851A4; }
    goto L_08985138;
L_08985138:;
    v0 = LD_U8(s2+122);
    goto L_0898513C;
L_0898513C:;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_0898511C; }
    goto L_08985148;
L_08985148:;
    v1 = LD_U8(s2+123);
    cnd_ = v1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0898517C; }
    goto L_08985154;
L_08985154:;
    s0 = s2 + 48;
    v0 = LD32(s0);
    goto L_0898515C;
L_0898515C:;
    s1 = s1 + 1;
    s0 = s0 + 4;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08985194; }
    goto L_0898516C;
L_0898516C:;
    v0 = v1 & 0xff;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_0898515C; }
    goto L_0898517C;
L_0898517C:;
    sp = sp + 16;
    return;
L_08985194:;
    func_08A186EC(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0898519C;
L_0898519C:;
    v1 = LD_U8(s2+123);
    goto L_0898516C;
L_089851A4:;
    func_08A186EC(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089851AC;
L_089851AC:;
    v0 = LD_U8(s2+122);
    goto L_0898513C;
L_089851B4:;
    func_08A186EC(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089851BC;
L_089851BC:;
    v0 = LD32(s0+72);
    goto L_0898512C;
}

/* 089851C4 */
u64 func_089851C4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089851C4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a1 = LD_U8(a0+120);
    v0 = a1 & 0xff;
    v0 = v0 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08985250; }
    goto L_089851F0;
L_089851F0:;
    v0 = a1 & 0xff;
    v0 = v0 << 2;
    v0 = v0 + s0;
    v1 = LD32(v0+72);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08985240; }
    goto L_08985208;
L_08985208:;
    v0 = LD_U8(s0+121);
    goto L_0898520C;
L_0898520C:;
    v0 = v0 << 2;
    v0 = v0 + s0;
    v1 = LD32(v0+48);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08985230; }
    goto L_08985220;
L_08985220:;
    goto L_08985224;
L_08985224:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08985230:;
    func_08A186DC(a0);
    goto L_08985238;
L_08985238:;
    goto L_08985224;
L_08985240:;
    func_08A186DC(a0);
    goto L_08985248;
L_08985248:;
    v0 = LD_U8(s0+121);
    goto L_0898520C;
L_08985250:;
    func_08A186DC(a0);
    goto L_08985258;
L_08985258:;
    a1 = LD_U8(s0+120);
    goto L_089851F0;
}

/* 08985260 */
u64 func_08985260(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
    int cnd_;
L_08985260:;
    v1 = LD_U8(a0+122);
    t2 = a0 + 0;
    a0 = LD_U8(a0+123);
    v0 = (s32)v1 > (s32)a0 ? v1 : a0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089852F0; }
    goto L_08985278;
L_08985278:;
    a3 = v1 + 0;
    t5 = a0 + 0;
    t4 = v0 + 0;
    t3 = v1 + 0;
    v0 = a2 << 2;
    goto L_0898528C;
L_0898528C:;
    a0 = a2 + 1;
    t1 = v0 + t2;
    t0 = a2 < t5;
    v0 = a2 < a3;
    a2 = a0 & 0xff;
    v1 = t1 + 0;
    a0 = (s32)a2 < (s32)t4;
    cnd_ = v0 == 0;
    a3 = t3 + 0;
    if (cnd_) { goto L_089852C8; }
    goto L_089852B0;
L_089852B0:;
    v0 = LD32(t1);
    cnd_ = v0 == 0;
    t1 = 1;
    if (cnd_) { goto L_089852C8; }
    goto L_089852BC;
L_089852BC:;
    v0 = LD32(v0+188);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_089852F4; }
    goto L_089852C8;
L_089852C8:;
    cnd_ = t0 == 0;
    if (cnd_) { goto L_089852E8; }
    goto L_089852D0;
L_089852D0:;
    v1 = LD32(v1+48);
    cnd_ = v1 == 0;
    t1 = 1;
    if (cnd_) { goto L_089852E8; }
    goto L_089852DC;
L_089852DC:;
    v0 = LD32(v1+188);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_089852F4; }
    goto L_089852E8;
L_089852E8:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = a2 << 2; goto L_0898528C; }
    goto L_089852F0;
L_089852F0:;
    t1 = 0 + 0;
    goto L_089852F4;
L_089852F4:;
    v0 = t1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089852FC */
void func_089852FC(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089852FC:;
    sp = sp - 16;
    a2 = (u32)(s32)(s8)a2;
    v1 = LD_U8(a0+122);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089853A8; }
    goto L_0898531C;
L_0898531C:;
    a0 = LD_U8(a0+120);
    a1 = a0 << 2;
    v0 = a1 + s0;
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08985344; }
    goto L_08985334;
L_08985334:;
    v0 = LD32(v0);
    v0 = v0 ^ 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089853AC; }
    goto L_08985344;
L_08985344:;
    cnd_ = (s32)a2 < 0;
    v0 = a0 + 1;
    if (cnd_) { goto L_08985428; }
    goto L_0898534C;
L_0898534C:;
    ST8(s0+120, a2);
    goto L_08985350;
L_08985350:;
    v0 = LD_U8(s0+120);
    cnd_ = v0 == a0;
    s1 = a1 + s0;
    if (cnd_) { goto L_089853A8; }
    goto L_0898535C;
L_0898535C:;
    a0 = LD32(s1);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08985414; }
    goto L_08985368;
L_08985368:;
    a0 = LD32(s1+72);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08985400; }
    goto L_08985374;
L_08985374:;
    v1 = LD_U8(s0+120);
    v0 = v1 & 0xff;
    v0 = v0 << 2;
    v0 = v0 + s0;
    a0 = LD32(v0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089853DC; }
    goto L_08985390;
L_08985390:;
    v0 = v1 & 0xff;
    v0 = v0 << 2;
    v0 = v0 + s0;
    a0 = LD32(v0+72);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089853BC; }
    goto L_089853A8;
L_089853A8:;
    goto L_089853AC;
L_089853AC:;
    sp = sp + 16;
    return;
L_089853BC:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A199D8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089853C4;
L_089853C4:;
    v0 = LD_U8(s0+120);
    v0 = v0 << 2;
    v0 = v0 + s0;
    v1 = LD32(v0+72);
    ST32(v1+256, 0);
    goto L_089853A8;
L_089853DC:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A199D8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089853E4;
L_089853E4:;
    v0 = LD_U8(s0+120);
    v0 = v0 << 2;
    v0 = v0 + s0;
    v1 = LD32(v0);
    ST32(v1+256, 0);
    v1 = LD_U8(s0+120);
    goto L_08985390;
L_08985400:;
    f0 = func_08A19B08(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08985408;
L_08985408:;
    v0 = LD32(s1+72);
    ST32(v0+256, 0);
    goto L_08985374;
L_08985414:;
    f0 = func_08A19B08(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0898541C;
L_0898541C:;
    v0 = LD32(s1);
    ST32(v0+256, 0);
    goto L_08985368;
L_08985428:;
    { s32 x_ = (s32)v0, y_ = (s32)v1; if (y_ == 0) { lo = x_ < 0 ? 1 : 0xFFFFFFFFu; hi = (u32)x_; } else if (x_ == INT32_MIN && y_ == -1) { lo = 0x80000000u; hi = 0; } else { lo = (u32)(x_ / y_); hi = (u32)(x_ % y_); } }
    v1 = hi;
    ST8(s0+120, v1);
    goto L_08985350;
}

/* 08985438 */
u32 func_08985438(u32 a0, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08985438:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD_U8(a0+122);
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08985500; }
    goto L_08985458;
L_08985458:;
    a1 = LD_U8(s0+120);
    v1 = 0 + 0;
    cnd_ = a0 == 0;
    a3 = a1 & 0xff;
    if (cnd_) { goto L_089854A0; }
    goto L_08985468;
L_08985468:;
    a1 = a0 + 0;
    v0 = v1 << 2;
    goto L_08985470;
L_08985470:;
    v0 = v0 + s0;
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    a0 = v1 + 1;
    if (cnd_) { goto L_0898548C; }
    goto L_08985480;
L_08985480:;
    v0 = LD32(v0+188);
    cnd_ = v0 == a2;
    if (cnd_) { ST8(s0+120, v1); goto L_0898548C; }
    goto L_0898548C;
L_0898548C:;
    v1 = a0 & 0xff;
    v0 = v1 < a1;
    cnd_ = v0 != 0;
    v0 = v1 << 2;
    if (cnd_) { goto L_08985470; }
    goto L_0898549C;
L_0898549C:;
    a1 = LD_U8(s0+120);
    goto L_089854A0;
L_089854A0:;
    v0 = a1 & 0xff;
    cnd_ = v0 == a3;
    v0 = a3 << 2;
    if (cnd_) { goto L_089854FC; }
    goto L_089854AC;
L_089854AC:;
    s1 = v0 + s0;
    a0 = LD32(s1);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08985570; }
    goto L_089854BC;
L_089854BC:;
    a0 = LD32(s1+72);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898555C; }
    goto L_089854C8;
L_089854C8:;
    a1 = LD_U8(s0+120);
    v0 = a1 & 0xff;
    v0 = v0 << 2;
    v0 = v0 + s0;
    a0 = LD32(v0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08985538; }
    goto L_089854E4;
L_089854E4:;
    v0 = a1 & 0xff;
    v0 = v0 << 2;
    v0 = v0 + s0;
    a0 = LD32(v0+72);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08985514; }
    goto L_089854FC;
L_089854FC:;
    v0 = a1 & 0xff;
    goto L_08985500;
L_08985500:;
    sp = sp + 16;
    return v0;
L_08985514:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A199D8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898551C;
L_0898551C:;
    v0 = LD_U8(s0+120);
    v0 = v0 << 2;
    v0 = v0 + s0;
    v1 = LD32(v0+72);
    ST32(v1+256, 0);
    a1 = LD_U8(s0+120);
    goto L_089854FC;
L_08985538:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A199D8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08985540;
L_08985540:;
    v0 = LD_U8(s0+120);
    v0 = v0 << 2;
    v0 = v0 + s0;
    v1 = LD32(v0);
    ST32(v1+256, 0);
    a1 = LD_U8(s0+120);
    goto L_089854E4;
L_0898555C:;
    f0 = func_08A19B08(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08985564;
L_08985564:;
    v0 = LD32(s1+72);
    ST32(v0+256, 0);
    goto L_089854C8;
L_08985570:;
    f0 = func_08A19B08(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08985578;
L_08985578:;
    v0 = LD32(s1);
    ST32(v0+256, 0);
    goto L_089854BC;
}

/* 08985584 */
rv_t func_08985584(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08985584:;
    sp = sp - 16;
    a2 = (u32)(s32)(s8)a2;
    v1 = LD_U8(a0+123);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0898560C; }
    goto L_089855A4;
L_089855A4:;
    a0 = LD_U8(a0+121);
    a1 = a0 << 2;
    v0 = a1 + s0;
    v0 = LD32(v0+48);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089855CC; }
    goto L_089855BC;
L_089855BC:;
    v0 = LD32(v0);
    v0 = v0 ^ 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08985610; }
    goto L_089855CC;
L_089855CC:;
    cnd_ = (s32)a2 < 0;
    v0 = a0 + 1;
    if (cnd_) { goto L_08985658; }
    goto L_089855D4;
L_089855D4:;
    ST8(s0+121, a2);
    goto L_089855D8;
L_089855D8:;
    v1 = LD_U8(s0+121);
    v0 = v1 & 0xff;
    cnd_ = v0 == a0;
    s1 = a1 + s0;
    if (cnd_) { goto L_0898560C; }
    goto L_089855E8;
L_089855E8:;
    a0 = LD32(s1+48);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08985640; }
    goto L_089855F4;
L_089855F4:;
    v0 = v1 & 0xff;
    v0 = v0 << 2;
    v0 = v0 + s0;
    a0 = LD32(v0+48);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08985620; }
    goto L_0898560C;
L_0898560C:;
    goto L_08985610;
L_08985610:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08985620:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A199D8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08985628;
L_08985628:;
    v0 = LD_U8(s0+121);
    v0 = v0 << 2;
    v0 = v0 + s0;
    v1 = LD32(v0+48);
    ST32(v1+256, 0);
    goto L_0898560C;
L_08985640:;
    f0 = func_08A19B08(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08985648;
L_08985648:;
    v0 = LD32(s1+48);
    ST32(v0+256, 0);
    v1 = LD_U8(s0+121);
    goto L_089855F4;
L_08985658:;
    { s32 x_ = (s32)v0, y_ = (s32)v1; if (y_ == 0) { lo = x_ < 0 ? 1 : 0xFFFFFFFFu; hi = (u32)x_; } else if (x_ == INT32_MIN && y_ == -1) { lo = 0x80000000u; hi = 0; } else { lo = (u32)(x_ / y_); hi = (u32)(x_ % y_); } }
    v1 = hi;
    ST8(s0+121, v1);
    goto L_089855D8;
}

/* 08985668 */
rv_t func_08985668(u32 a0, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08985668:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD_U8(a0+123);
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08985708; }
    goto L_08985688;
L_08985688:;
    a1 = LD_U8(s0+121);
    v1 = 0 + 0;
    cnd_ = a0 == 0;
    a3 = a1 & 0xff;
    if (cnd_) { goto L_089856D0; }
    goto L_08985698;
L_08985698:;
    a1 = a0 + 0;
    v0 = v1 << 2;
    goto L_089856A0;
L_089856A0:;
    v0 = v0 + s0;
    v0 = LD32(v0+48);
    cnd_ = v0 == 0;
    a0 = v1 + 1;
    if (cnd_) { goto L_089856BC; }
    goto L_089856B0;
L_089856B0:;
    v0 = LD32(v0+188);
    cnd_ = v0 == a2;
    if (cnd_) { ST8(s0+121, v1); goto L_089856BC; }
    goto L_089856BC;
L_089856BC:;
    v1 = a0 & 0xff;
    v0 = v1 < a1;
    cnd_ = v0 != 0;
    v0 = v1 << 2;
    if (cnd_) { goto L_089856A0; }
    goto L_089856CC;
L_089856CC:;
    a1 = LD_U8(s0+121);
    goto L_089856D0;
L_089856D0:;
    v0 = a1 & 0xff;
    cnd_ = v0 == a3;
    v0 = a3 << 2;
    if (cnd_) { goto L_08985704; }
    goto L_089856DC;
L_089856DC:;
    s1 = v0 + s0;
    a0 = LD32(s1+48);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08985740; }
    goto L_089856EC;
L_089856EC:;
    v0 = a1 & 0xff;
    v0 = v0 << 2;
    v0 = v0 + s0;
    a0 = LD32(v0+48);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898571C; }
    goto L_08985704;
L_08985704:;
    v0 = a1 & 0xff;
    goto L_08985708;
L_08985708:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0898571C:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A199D8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08985724;
L_08985724:;
    v0 = LD_U8(s0+121);
    v0 = v0 << 2;
    v0 = v0 + s0;
    v1 = LD32(v0+48);
    ST32(v1+256, 0);
    a1 = LD_U8(s0+121);
    goto L_08985704;
L_08985740:;
    f0 = func_08A19B08(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08985748;
L_08985748:;
    v0 = LD32(s1+48);
    ST32(v0+256, 0);
    a1 = LD_U8(s0+121);
    goto L_089856EC;
}

/* 08985758 */
float func_08985758(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08985758:;
    sp = sp - 32;
    s3 = a0 + 0;
    s2 = a1 + 0;
    s1 = 0 + 0;
    s0 = a0 + 0;
    v0 = LD32(s0);
    goto L_08985784;
L_08985784:;
    s1 = s1 + 1;
    a1 = s2 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0898581C; }
    goto L_08985794;
L_08985794:;
    v0 = LD32(s0+72);
    goto L_08985798;
L_08985798:;
    a1 = s2 + 0;
    s0 = s0 + 4;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0898580C; }
    goto L_089857A8;
L_089857A8:;
    v0 = s1 < 0xcu;
    goto L_089857AC;
L_089857AC:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_08985784; }
    goto L_089857B4;
L_089857B4:;
    s0 = s3 + 48;
    s1 = 0 + 0;
    v0 = LD32(s0);
    goto L_089857C0;
L_089857C0:;
    s1 = s1 + 1;
    s0 = s0 + 4;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_089857FC; }
    goto L_089857D4;
L_089857D4:;
    v0 = s1 < 0x6u;
    goto L_089857D8;
L_089857D8:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_089857C0; }
    goto L_089857E0;
L_089857E0:;
    sp = sp + 32;
    return f0;
L_089857FC:;
    { rv_t r_ = func_08A19C8C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08985804;
L_08985804:;
    v0 = s1 < 0x6u;
    goto L_089857D8;
L_0898580C:;
    { rv_t r_ = func_08A19C8C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08985814;
L_08985814:;
    v0 = s1 < 0xcu;
    goto L_089857AC;
L_0898581C:;
    { rv_t r_ = func_08A19C8C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08985824;
L_08985824:;
    v0 = LD32(s0+72);
    goto L_08985798;
}

/* 0898582C */
u32 func_0898582C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0898582C:;
    sp = sp - 48;
    s6 = a0 + 0;
    s5 = a1 & 0xff;
    s4 = 0 + 0;
    s3 = 0 + 0;
    a3 = LD_U8(a0+123);
    a2 = LD_U8(a0+122);
    v1 = a3 & 0xff;
    s7 = a2 & 0xff;
    v0 = s7 < v1;
    if (v0 != 0) s7 = v1;
    cnd_ = s7 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08985924; }
    goto L_08985884;
L_08985884:;
    v0 = a2 & 0xff;
    v0 = s3 < v0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08985898; }
    goto L_08985894;
L_08985894:;
    a0 = LD32(s2);
    goto L_08985898;
L_08985898:;
    v0 = a2 & 0xff;
    v0 = s3 < v0;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089858AC; }
    goto L_089858A8;
L_089858A8:;
    s0 = LD32(s2+72);
    goto L_089858AC;
L_089858AC:;
    v0 = a3 & 0xff;
    v0 = s3 < v0;
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089858C0; }
    goto L_089858BC;
L_089858BC:;
    s1 = LD32(s2+48);
    goto L_089858C0;
L_089858C0:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089858D4; }
    goto L_089858C8;
L_089858C8:;
    a1 = s5 + 0;
    v0 = func_08A19C3C(a0, a1);
    goto L_089858D0;
L_089858D0:;
    s4 = v0 + 0;
    goto L_089858D4;
L_089858D4:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089858E8; }
    goto L_089858DC;
L_089858DC:;
    a1 = s5 + 0;
    v0 = func_08A19C3C(a0, a1);
    goto L_089858E4;
L_089858E4:;
    s4 = v0 + 0;
    goto L_089858E8;
L_089858E8:;
    cnd_ = s1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08985900; }
    goto L_089858F0;
L_089858F0:;
    a1 = s5 + 0;
    v0 = func_08A19BF0(a0, a1);
    goto L_089858F8;
L_089858F8:;
    v0 = s4 | v0;
    s4 = 0 < v0;
    goto L_08985900;
L_08985900:;
    cnd_ = s4 != 0;
    v0 = 1;
    if (cnd_) { goto L_08985928; }
    goto L_08985908;
L_08985908:;
    s3 = s3 + 1;
    v0 = s3 < s7;
    cnd_ = v0 == 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_08985924; }
    goto L_08985918;
L_08985918:;
    a3 = LD_U8(s6+123);
    a2 = LD_U8(s6+122);
    goto L_08985884;
L_08985924:;
    v0 = 0 + 0;
    goto L_08985928;
L_08985928:;
    sp = sp + 48;
    return v0;
}

/* 08985954 */
void func_08985954(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08985954:;
    sp = sp - 48;
    s6 = a1 + 0;
    s5 = a0 + 0;
    s4 = 0 + 0;
    s3 = s5 + 0;
    a0 = LD_U8(a0+122);
    v0 = LD_U8(s5+123);
    s7 = a0 & 0xff;
    v1 = s7 < v0;
    if (v1 != 0) s7 = v0;
    cnd_ = s7 == 0;
    s2 = a2 & 0xff;
    if (cnd_) { goto L_08985A9C; }
    goto L_089859A8;
L_089859A8:;
    v0 = a0 & 0xff;
    v0 = s4 < v0;
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089859BC; }
    goto L_089859B8;
L_089859B8:;
    s1 = LD32(s3);
    goto L_089859BC;
L_089859BC:;
    cnd_ = s1 == 0;
    s0 = s6 + 0;
    if (cnd_) { goto L_089859F4; }
    goto L_089859C4;
L_089859C4:;
    a0 = s1 + 0;
    goto L_089859C8;
L_089859C8:;
    a1 = s2 + 0;
    v0 = func_08A19C3C(a0, a1);
    goto L_089859D0;
L_089859D0:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089859F0; }
    goto L_089859D8;
L_089859D8:;
    cnd_ = (s32)s0 <= 0;
    if (cnd_) { a0 = LD_U8(s5+122); goto L_089859F4; }
    goto L_089859E0;
L_089859E0:;
    s0 = s0 - 1;
    func_08A19BB4(a0);
    goto L_089859E8;
L_089859E8:;
    a0 = s1 + 0;
    goto L_089859C8;
L_089859F0:;
    a0 = LD_U8(s5+122);
    goto L_089859F4;
L_089859F4:;
    v0 = a0 & 0xff;
    v0 = s4 < v0;
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08985A08; }
    goto L_08985A04;
L_08985A04:;
    s1 = LD32(s3+72);
    goto L_08985A08;
L_08985A08:;
    cnd_ = s1 == 0;
    s0 = s6 + 0;
    if (cnd_) { goto L_08985A3C; }
    goto L_08985A10;
L_08985A10:;
    a0 = s1 + 0;
    goto L_08985A14;
L_08985A14:;
    a1 = s2 + 0;
    v0 = func_08A19C3C(a0, a1);
    goto L_08985A1C;
L_08985A1C:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08985A3C; }
    goto L_08985A24;
L_08985A24:;
    cnd_ = (s32)s0 <= 0;
    if (cnd_) { v0 = LD_U8(s5+123); goto L_08985A40; }
    goto L_08985A2C;
L_08985A2C:;
    s0 = s0 - 1;
    func_08A19BB4(a0);
    goto L_08985A34;
L_08985A34:;
    a0 = s1 + 0;
    goto L_08985A14;
L_08985A3C:;
    v0 = LD_U8(s5+123);
    goto L_08985A40;
L_08985A40:;
    v0 = s4 < v0;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08985A50; }
    goto L_08985A4C;
L_08985A4C:;
    s0 = LD32(s3+48);
    goto L_08985A50;
L_08985A50:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08985A84; }
    goto L_08985A58;
L_08985A58:;
    a1 = s2 + 0;
    v0 = func_08A19BF0(a0, a1);
    goto L_08985A60;
L_08985A60:;
    cnd_ = v0 == 0;
    if (cnd_) { s4 = s4 + 1; goto L_08985A88; }
    goto L_08985A68;
L_08985A68:;
    cnd_ = (s32)s6 <= 0;
    if (cnd_) { s4 = s4 + 1; goto L_08985A88; }
    goto L_08985A70;
L_08985A70:;
    v0 = LD32(s0+84);
    v1 = LD32(s0+80);
    v0 = v0 + s6;
    v1 = (s32)v1 < (s32)v0 ? v1 : v0;
    ST32(s0+84, v1);
    goto L_08985A84;
L_08985A84:;
    s4 = s4 + 1;
    goto L_08985A88;
L_08985A88:;
    v0 = s4 < s7;
    cnd_ = v0 == 0;
    s3 = s3 + 4;
    if (cnd_) { goto L_08985A9C; }
    goto L_08985A94;
L_08985A94:;
    a0 = LD_U8(s5+122);
    goto L_089859A8;
L_08985A9C:;
    sp = sp + 48;
    return;
}

/* 08985AC8 */
u32 func_08985AC8(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08985AC8:;
    sp = sp - 16;
    v0 = 999;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a2 = LD32(a0+128);
    a0 = D_08C2B3A4 - (-19548);
    cnd_ = a2 == v0;
    v1 = a0 - 19548;
    if (cnd_) { goto L_08985BC8; }
    goto L_08985AF4;
L_08985AF4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19548);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08985B44; }
    goto L_08985B18;
L_08985B18:;
    a0 = LD32(a1);
    goto L_08985B1C;
L_08985B1C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08985BE4; }
    goto L_08985B34;
L_08985B34:;
    a1 = LD32(a1+4);
    goto L_08985B38;
L_08985B38:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08985B1C; }
    goto L_08985B40;
L_08985B40:;
    a0 = 0 + 0;
    goto L_08985B44;
L_08985B44:;
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08985BCC; }
    goto L_08985B4C;
L_08985B4C:;
    v1 = LD32(a0);
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08985B5C;
L_08985B5C:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_08A23598(a0, a1);
    goto L_08985B68;
L_08985B68:;
    a1 = LD_U8(s1+123);
    v1 = LD_U8(s1+122);
    s0 = v0 + 0;
    v0 = a1 < v1;
    if (v0 != 0) a1 = v1;
    cnd_ = a1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08985BC8; }
    goto L_08985B84;
L_08985B84:;
    a0 = s1 + 0;
    v0 = LD32(a0);
    goto L_08985B8C;
L_08985B8C:;
    a3 = a3 + 1;
    cnd_ = v0 == 0;
    a2 = a3 < a1;
    if (cnd_) { goto L_08985BA4; }
    goto L_08985B98;
L_08985B98:;
    v0 = LD32(v0+152);
    cnd_ = v0 == s0;
    v1 = 1;
    if (cnd_) { goto L_08985BCC; }
    goto L_08985BA4;
L_08985BA4:;
    v0 = LD32(a0+48);
    v1 = 1;
    cnd_ = v0 == 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_08985BC0; }
    goto L_08985BB4;
L_08985BB4:;
    v0 = LD32(v0+152);
    cnd_ = v0 == s0;
    if (cnd_) { goto L_08985BD0; }
    goto L_08985BC0;
L_08985BC0:;
    cnd_ = a2 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08985B8C; }
    goto L_08985BC8;
L_08985BC8:;
    v1 = 0 + 0;
    goto L_08985BCC;
L_08985BCC:;
    goto L_08985BD0;
L_08985BD0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08985BE4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08985B38; }
    goto L_08985BF0;
L_08985BF0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08985B38; }
    goto L_08985BFC;
L_08985BFC:;
    goto L_08985B44;
}

/* 08985C04 */
rv_t func_08985C04(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08985C04:;
    sp = sp - 80;
    s3 = a0 + 0;
    s2 = 0 + 0;
    a0 = LD_U8(a0+122);
    v1 = LD_U8(s3+123);
    s4 = a0 & 0xff;
    v0 = s4 < v1;
    if (v0 != 0) s4 = v1;
    cnd_ = s4 == 0;
    f20 = f12;
    if (cnd_) { goto L_08985D48; }
    goto L_08985C50;
L_08985C50:;
    s5 = D_08AEE570 - (-6800);
    f21 = BITSF(LD32(s5-6800));
    s1 = s3 + 0;
    goto L_08985C5C;
L_08985C5C:;
    v0 = a0 & 0xff;
    v0 = s2 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08985C70; }
    goto L_08985C6C;
L_08985C6C:;
    v1 = LD32(s1);
    goto L_08985C70;
L_08985C70:;
    cnd_ = v1 == 0;
    v0 = a0 & 0xff;
    if (cnd_) { goto L_08985CB4; }
    goto L_08985C78;
L_08985C78:;
    f0 = BITSF(LD32(v1+44));
    f1 = BITSF(0);
    f0 = f0 - f20;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    f2 = BITSF(LD32(s5-6800));
    if (cnd_) { goto L_08985CA8; }
    goto L_08985C94;
L_08985C94:;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    f1 = f2;
    if (cnd_) { goto L_08985CA8; }
    goto L_08985CA4;
L_08985CA4:;
    f1 = f0;
    goto L_08985CA8;
L_08985CA8:;
    ST32(v1+44, FBITS(f1));
    a0 = LD_U8(s3+122);
    v0 = a0 & 0xff;
    goto L_08985CB4;
L_08985CB4:;
    v0 = s2 < v0;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08985CC4; }
    goto L_08985CC0;
L_08985CC0:;
    s0 = LD32(s1+72);
    goto L_08985CC4;
L_08985CC4:;
    cnd_ = s0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08985CF0; }
    goto L_08985CCC;
L_08985CCC:;
    f0 = BITSF(LD32(s0+44));
    a1 = sp + 4;
    f0 = f0 - f20;
    a2 = sp + 8;
    ST32(sp+4, 0);
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f21));
    f0 = func_08986A8C(a0, a1, a2);
    goto L_08985CEC;
L_08985CEC:;
    ST32(s0+44, FBITS(f0));
    goto L_08985CF0;
L_08985CF0:;
    v0 = LD_U8(s3+123);
    v0 = s2 < v0;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08985D04; }
    goto L_08985D00;
L_08985D00:;
    s0 = LD32(s1+48);
    goto L_08985D04;
L_08985D04:;
    cnd_ = s0 == 0;
    a0 = sp + 12;
    if (cnd_) { goto L_08985D30; }
    goto L_08985D0C;
L_08985D0C:;
    f0 = BITSF(LD32(s0+44));
    a1 = sp + 16;
    f0 = f0 - f20;
    a2 = sp + 20;
    ST32(sp+16, 0);
    ST32(sp+12, FBITS(f0));
    ST32(sp+20, FBITS(f21));
    f0 = func_08986A8C(a0, a1, a2);
    goto L_08985D2C;
L_08985D2C:;
    ST32(s0+44, FBITS(f0));
    goto L_08985D30;
L_08985D30:;
    s2 = s2 + 1;
    v0 = s2 < s4;
    cnd_ = v0 == 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_08985D48; }
    goto L_08985D40;
L_08985D40:;
    a0 = LD_U8(s3+122);
    goto L_08985C5C;
L_08985D48:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
}

/* 08985D74 */
float func_08985D74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08985D74:;
    sp = sp - 80;
    s4 = a2 + 0;
    s2 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0898622C; }
    goto L_08985DB4;
L_08985DB4:;
    v0 = LD_U8(a0+121);
    v1 = LD_U8(a0+122);
    s7 = LD_U8(a0+120);
    v0 = v0 << 2;
    v0 = v0 + a0;
    s6 = LD32(v0+48);
    ST32(sp+8, v1);
    cnd_ = s6 == 0;
    fp = 4;
    if (cnd_) { goto L_08985E28; }
    goto L_08985DD8;
L_08985DD8:;
    v1 = LD32(s6+20);
    v0 = 0x72ab0000u;
    v0 = v0 | 0x24ac;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_089866B0; }
    goto L_08985DEC;
L_08985DEC:;
    cnd_ = v0 != 0;
    v0 = 0xc8d30000u;
    if (cnd_) { goto L_089866C8; }
    goto L_08985DF4;
L_08985DF4:;
    v0 = 0x10ed0000u;
    v0 = v0 | 0xd4e;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_089866C0; }
    goto L_08985E04;
L_08985E04:;
    cnd_ = v0 != 0;
    v0 = 0x3e2c0000u;
    if (cnd_) { goto L_0898668C; }
    goto L_08985E0C;
L_08985E0C:;
    v0 = 0x350000u;
    v0 = v0 | 0x4b4d;
    cnd_ = v1 == v0;
    v0 = 0x6740000u;
    if (cnd_) { goto L_08986684; }
    goto L_08985E1C;
L_08985E1C:;
    v0 = v0 | 0x326a;
    goto L_08985E20;
L_08985E20:;
    cnd_ = v1 == v0;
    if (cnd_) { fp = 2; goto L_08985E28; }
    goto L_08985E28;
L_08985E28:;
    a0 = s2 + 0;
    f0 = func_0898673C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08985E30;
L_08985E30:;
    v0 = D_08AEE574 - (-6796);
    ST8(s2+124, 0);
    s3 = s0 + 0;
    s5 = 0 + 0;
    ST32(sp+12, 0);
    ST8(s2+125, 0);
    ST8(s2+127, 0);
    f20 = BITSF(LD32(v0-6796));
    goto L_08985E50;
L_08985E50:;
    s0 = LD32(s3);
    cnd_ = s0 != 0;
    if (cnd_) { a1 = LD32(s2+128); goto L_08986368; }
    goto L_08985E5C;
L_08985E5C:;
    s5 = s5 + 1;
    goto L_08985E60;
L_08985E60:;
    v0 = s5 < 0x5u;
    cnd_ = v0 != 0;
    s3 = s3 + 4;
    if (cnd_) { goto L_08985E50; }
    goto L_08985E6C;
L_08985E6C:;
    v0 = LD32(s4);
    a1 = D_08C2A6C8 - (-22840);
    v1 = LD32(v0-16);
    v0 = 999;
    v1 = s4 + v1;
    a2 = LD32(v1+4);
    cnd_ = a2 == v0;
    a0 = a1 - 22840;
    if (cnd_) { goto L_08985EEC; }
    goto L_08985E8C;
L_08985E8C:;
    v0 = LD32(a0+4);
    v1 = LD32(a1-22840);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08985EDC; }
    goto L_08985EB0;
L_08985EB0:;
    a0 = LD32(a1);
    goto L_08985EB4;
L_08985EB4:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08986348; }
    goto L_08985ECC;
L_08985ECC:;
    a1 = LD32(a1+4);
    goto L_08985ED0;
L_08985ED0:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08985EB4; }
    goto L_08985ED8;
L_08985ED8:;
    a0 = 0 + 0;
    goto L_08985EDC;
L_08985EDC:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_08985EF0; }
    goto L_08985EE4;
L_08985EE4:;
    a1 = LD32(sp+12);
    f0 = func_0899E5A8(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08985EEC;
L_08985EEC:;
    a0 = LD32(sp+8);
    goto L_08985EF0;
L_08985EF0:;
    v1 = 0 < s6;
    v0 = 0 < a0;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s2+121); goto L_08985FFC; }
    goto L_08985F04;
L_08985F04:;
    v1 = LD_U8(s2+122);
    a0 = LD_U8(s2+123);
    a1 = LD32(sp+8);
    v0 = v1 ^ 0x1;
    if (v0 == 0) s7 = 0;
    v0 = 1;
    cnd_ = a1 == v0;
    t0 = a0 & 0xff;
    if (cnd_) { goto L_0898633C; }
    goto L_08985F24;
L_08985F24:;
    a2 = 0 + 0;
    cnd_ = t0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08985FF0; }
    goto L_08985F30;
L_08985F30:;
    t2 = 0x350000u;
    t3 = 0x6740000u;
    s1 = 0x36220000u;
    s0 = 0x536c0000u;
    t6 = 0x8ee80000u;
    t7 = 0xc56c0000u;
    t5 = 0xe3740000u;
    t4 = 0xfd900000u;
    t1 = a0 & 0xff;
    t2 = t2 | 0x4b4d;
    t3 = t3 | 0x326a;
    s1 = s1 | 0x332a;
    s0 = s0 | 0x95a9;
    t6 = t6 | 0xd26f;
    t7 = t7 | 0x8efd;
    t5 = t5 | 0xc413;
    t4 = t4 | 0x85c9;
    a1 = s2 + 48;
    goto L_08985F78;
L_08985F78:;
    v0 = a3 < t1;
    v1 = 0 + 0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08985F8C; }
    goto L_08985F88;
L_08985F88:;
    a0 = LD32(a1);
    goto L_08985F8C;
L_08985F8C:;
    cnd_ = a0 == 0;
    v0 = 0x72ab0000u;
    if (cnd_) { goto L_08985FE0; }
    goto L_08985F94;
L_08985F94:;
    a0 = LD32(a0+20);
    v0 = v0 | 0x24ac;
    cnd_ = a0 == v0;
    v0 = v0 < a0;
    if (cnd_) { goto L_0898629C; }
    goto L_08985FA4;
L_08985FA4:;
    cnd_ = v0 != 0;
    v0 = 0xc8d30000u;
    if (cnd_) { goto L_089862BC; }
    goto L_08985FAC;
L_08985FAC:;
    v0 = 0x10ed0000u;
    v0 = v0 | 0xd4e;
    cnd_ = a0 == v0;
    v0 = v0 < a0;
    if (cnd_) { goto L_089862B4; }
    goto L_08985FBC;
L_08985FBC:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 0x3e2c0000u; goto L_08986280; }
    goto L_08985FC4;
L_08985FC4:;
    cnd_ = a0 == t2;
    if (cnd_) { v1 = 2; goto L_08985FD4; }
    goto L_08985FCC;
L_08985FCC:;
    cnd_ = a0 == t3;
    if (cnd_) { v1 = 2; goto L_08985FD4; }
    goto L_08985FD4;
L_08985FD4:;
    v1 = v1 ^ fp;
    goto L_08985FD8;
L_08985FD8:;
    v0 = a3 & 0xff;
    if (v1 == 0) a2 = v0;
    goto L_08985FE0;
L_08985FE0:;
    a3 = a3 + 1;
    v0 = a3 < t0;
    cnd_ = v0 != 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_08985F78; }
    goto L_08985FF0;
L_08985FF0:;
    cnd_ = t0 != 0;
    ST8(s2+120, s7);
    if (cnd_) { goto L_08986260; }
    goto L_08985FF8;
L_08985FF8:;
    v0 = LD_U8(s2+121);
    goto L_08985FFC;
L_08985FFC:;
    v0 = v0 << 2;
    v0 = v0 + s2;
    a0 = LD32(v0+48);
    cnd_ = a0 == 0;
    if (cnd_) { v1 = LD_U8(s2+120); goto L_08986034; }
    goto L_08986010;
L_08986010:;
    f0 = func_08A19B08(a0, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08986018;
L_08986018:;
    v0 = LD_U8(s2+121);
    a1 = 1;
    v0 = v0 << 2;
    v0 = v0 + s2;
    a0 = LD32(v0+48);
    { rv_t r_ = func_08A199D8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08986030;
L_08986030:;
    v1 = LD_U8(s2+120);
    goto L_08986034;
L_08986034:;
    v0 = v1 & 0xff;
    v0 = v0 << 2;
    v0 = v0 + s2;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v0 = v1 & 0xff;
    if (cnd_) { goto L_08986074; }
    goto L_0898604C;
L_0898604C:;
    f0 = func_08A19B08(a0, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08986054;
L_08986054:;
    v0 = LD_U8(s2+120);
    a1 = 1;
    v0 = v0 << 2;
    v0 = v0 + s2;
    a0 = LD32(v0);
    { rv_t r_ = func_08A199D8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898606C;
L_0898606C:;
    v1 = LD_U8(s2+120);
    v0 = v1 & 0xff;
    goto L_08986074;
L_08986074:;
    v0 = v0 << 2;
    v0 = v0 + s2;
    a0 = LD32(v0+72);
    cnd_ = a0 == 0;
    v0 = v1 & 0xff;
    if (cnd_) { goto L_089860B0; }
    goto L_08986088;
L_08986088:;
    f0 = func_08A19B08(a0, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08986090;
L_08986090:;
    v0 = LD_U8(s2+120);
    a1 = 1;
    v0 = v0 << 2;
    v0 = v0 + s2;
    a0 = LD32(v0+72);
    { rv_t r_ = func_08A199D8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089860A8;
L_089860A8:;
    v1 = LD_U8(s2+120);
    v0 = v1 & 0xff;
    goto L_089860B0;
L_089860B0:;
    v0 = v0 << 2;
    v0 = v0 + s2;
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08986230; }
    goto L_089860C4;
L_089860C4:;
    v0 = LD32(v0+364);
    v0 = (v0 >> 6) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08986234; }
    goto L_089860D4;
L_089860D4:;
    v0 = LD_U8(s2+122);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08986180; }
    goto L_089860E0;
L_089860E0:;
    a0 = 0x802b;
    goto L_089860E4;
L_089860E4:;
    a1 = 8;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089860F4;
L_089860F4:;
    t1 = v0 + 0;
    v0 = s0 << 2;
    v1 = v0 + s2;
    a0 = t1 + 0;
    a1 = 1;
    cnd_ = t1 == 0;
    a2 = 1;
    if (cnd_) { goto L_08986168; }
    goto L_08986110;
L_08986110:;
    a3 = LD32(t1+24);
    v0 = LD32(a3);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    v0 = (v0 & ~(0x3u << 1)) | ((s0 & 0x3) << 1);
    ST32(a3, v0);
    v1 = LD32(v1);
    v0 = LD32(v1+152);
    ST32(a3+4, v0);
    v1 = LD32(s4);
    t0 = LD32(t1+28);
    v0 = LD32(v1-16);
    t0 = t0 | 0x1;
    v0 = s4 + v0;
    v1 = LD32(v0+4);
    ST32(t1+4, v1);
    a3 = LD32(s4);
    v0 = LD32(a3-16);
    v0 = s4 + v0;
    v1 = LD32(v0+4);
    ST32(t1+28, t0);
    ST32(t1, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08986168;
L_08986168:;
    v0 = LD_U8(s2+122);
    v1 = s0 + 1;
    s0 = v1 & 0xff;
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    a0 = 0x802b;
    if (cnd_) { goto L_089860E4; }
    goto L_08986180;
L_08986180:;
    v0 = LD_U8(s2+123);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0898622C; }
    goto L_0898618C;
L_0898618C:;
    a0 = 0x802b;
    goto L_08986190;
L_08986190:;
    a1 = 8;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089861A0;
L_089861A0:;
    t1 = v0 + 0;
    v0 = s0 << 2;
    v1 = v0 + s2;
    a0 = t1 + 0;
    a1 = 1;
    cnd_ = t1 == 0;
    a2 = 1;
    if (cnd_) { goto L_08986214; }
    goto L_089861BC;
L_089861BC:;
    a3 = LD32(t1+24);
    v0 = LD32(a3);
    v0 = v0 | 0x1;
    v0 = (v0 & ~(0x3u << 1)) | ((s0 & 0x3) << 1);
    ST32(a3, v0);
    v1 = LD32(v1+48);
    v0 = LD32(v1+152);
    ST32(a3+4, v0);
    v1 = LD32(s4);
    t0 = LD32(t1+28);
    v0 = LD32(v1-16);
    t0 = t0 | 0x1;
    v0 = s4 + v0;
    v1 = LD32(v0+4);
    ST32(t1+4, v1);
    a3 = LD32(s4);
    v0 = LD32(a3-16);
    v0 = s4 + v0;
    v1 = LD32(v0+4);
    ST32(t1+28, t0);
    ST32(t1, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08986214;
L_08986214:;
    v0 = LD_U8(s2+123);
    v1 = s0 + 1;
    s0 = v1 & 0xff;
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    a0 = 0x802b;
    if (cnd_) { goto L_08986190; }
    goto L_0898622C;
L_0898622C:;
    goto L_08986230;
L_08986230:;
    goto L_08986234;
L_08986234:;
    sp = sp + 80;
    return f0;
L_08986260:;
    a2 = (u32)(s32)(s8)a2;
    a0 = s2 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_08985584(a0, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08986270;
L_08986270:;
    v0 = LD_U8(s2+121);
    goto L_08985FFC;
L_08986278:;
    v1 = 2;
    goto L_08985FD4;
L_08986280:;
    v0 = v0 | 0x2ac5;
    cnd_ = a0 == v0;
    v0 = v0 < a0;
    if (cnd_) { goto L_089862B4; }
    goto L_0898628C;
L_0898628C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089862A4; }
    goto L_08986294;
L_08986294:;
    cnd_ = a0 != s1;
    if (cnd_) { v1 = v1 ^ fp; goto L_08985FD8; }
    goto L_0898629C;
L_0898629C:;
    v1 = 1;
    goto L_08985FD4;
L_089862A4:;
    cnd_ = a0 != s0;
    if (cnd_) { v1 = v1 ^ fp; goto L_08985FD8; }
    goto L_089862AC;
L_089862AC:;
    v1 = 1;
    goto L_08985FD4;
L_089862B4:;
    v1 = 0 + 0;
    goto L_08985FD4;
L_089862BC:;
    v0 = v0 | 0x46d4;
    cnd_ = a0 == v0;
    v0 = v0 < a0;
    if (cnd_) { goto L_089862B4; }
    goto L_089862C8;
L_089862C8:;
    cnd_ = v0 != 0;
    v0 = 0xfcab0000u;
    if (cnd_) { goto L_08986308; }
    goto L_089862D0;
L_089862D0:;
    v0 = 0xb39c0000u;
    v0 = v0 | 0x40a8;
    cnd_ = a0 == v0;
    v0 = v0 < a0;
    if (cnd_) { goto L_08986278; }
    goto L_089862E0;
L_089862E0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089862F8; }
    goto L_089862E8;
L_089862E8:;
    cnd_ = a0 != t6;
    if (cnd_) { v1 = v1 ^ fp; goto L_08985FD8; }
    goto L_089862F0;
L_089862F0:;
    v1 = 2;
    goto L_08985FD4;
L_089862F8:;
    cnd_ = a0 != t7;
    if (cnd_) { v1 = v1 ^ fp; goto L_08985FD8; }
    goto L_08986300;
L_08986300:;
    v1 = 1;
    goto L_08985FD4;
L_08986308:;
    v0 = v0 | 0x2c09;
    cnd_ = a0 == v0;
    v0 = v0 < a0;
    if (cnd_) { goto L_089862B4; }
    goto L_08986314;
L_08986314:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0898632C; }
    goto L_0898631C;
L_0898631C:;
    cnd_ = a0 != t5;
    if (cnd_) { v1 = v1 ^ fp; goto L_08985FD8; }
    goto L_08986324;
L_08986324:;
    v1 = 0 + 0;
    goto L_08985FD4;
L_0898632C:;
    cnd_ = a0 != t4;
    if (cnd_) { v1 = v1 ^ fp; goto L_08985FD8; }
    goto L_08986334;
L_08986334:;
    v1 = 1;
    goto L_08985FD4;
L_0898633C:;
    v0 = v1 - 1;
    s7 = v0 & 0xff;
    goto L_08985F24;
L_08986348:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08985ED0; }
    goto L_08986354;
L_08986354:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08985ED0; }
    goto L_08986360;
L_08986360:;
    goto L_08985EDC;
L_08986368:;
    a0 = D_08C2B3A4 - (-19548);
    a0 = a0 - 19548;
    a2 = 1;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08986378;
L_08986378:;
    cnd_ = v0 == 0;
    s1 = 4;
    if (cnd_) { goto L_08986398; }
    goto L_08986380;
L_08986380:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08986394;
L_08986394:;
    s1 = v0 + 0;
    goto L_08986398;
L_08986398:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = func_08A23598(a0, a1);
    goto L_089863A4;
L_089863A4:;
    a0 = 0xd0cd0000u;
    a2 = sp + 0;
    a1 = v0 + 0;
    a0 = a0 | 0xc21c;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089863BC;
L_089863BC:;
    a2 = LD32(sp);
    cnd_ = a2 != 0;
    a1 = 0xd0ca0000u;
    if (cnd_) { goto L_089864C0; }
    goto L_089863C8;
L_089863C8:;
    v1 = LD32(s3);
    v0 = 0x8040000u;
    v0 = v0 | 0x3d02;
    cnd_ = v1 == v0;
    a0 = 1;
    if (cnd_) { goto L_089864B8; }
    goto L_089863DC;
L_089863DC:;
    a1 = 0x7e770000u;
    a0 = a2 + 0;
    a1 = a1 | 0x9b80;
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089863F0;
L_089863F0:;
    cnd_ = v0 == 0;
    if (cnd_) { s5 = s5 + 1; goto L_08985E60; }
    goto L_089863F8;
L_089863F8:;
    v1 = LD32(s3);
    v0 = 0xf0d40000u;
    v0 = v0 | 0x8f47;
    cnd_ = v1 == v0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0898642C; }
    goto L_0898640C;
L_0898640C:;
    a0 = LD32(sp);
    a1 = 0xd0cd0000u;
    a1 = a1 | 0xc21c;
    a2 = v0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_0881BB34(a0, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08986424;
L_08986424:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s3); goto L_08986434; }
    goto L_0898642C;
L_0898642C:;
    s0 = 1;
    v1 = LD32(s3);
    goto L_08986434;
L_08986434:;
    v0 = 0x9a450000u;
    v0 = v0 | 0x832;
    ST8(s2+125, s0);
    cnd_ = v1 == v0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08986468; }
    goto L_08986448;
L_08986448:;
    a0 = LD32(sp);
    a1 = 0xd0cd0000u;
    a1 = a1 | 0xc21c;
    a2 = v0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_0881BB34(a0, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08986460;
L_08986460:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s3); goto L_08986470; }
    goto L_08986468;
L_08986468:;
    s0 = 1;
    v1 = LD32(s3);
    goto L_08986470;
L_08986470:;
    v0 = 0xfd900000u;
    v0 = v0 | 0x85c9;
    ST8(s2+124, s0);
    cnd_ = v1 == v0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089864A4; }
    goto L_08986484;
L_08986484:;
    a0 = LD32(sp);
    a1 = 0xd0cd0000u;
    a1 = a1 | 0xc21c;
    a2 = v0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_0881BB34(a0, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898649C;
L_0898649C:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s3); goto L_089864AC; }
    goto L_089864A4;
L_089864A4:;
    s0 = 1;
    a1 = LD32(s3);
    goto L_089864AC;
L_089864AC:;
    ST8(s2+126, s0);
    ST32(sp+12, a1);
    goto L_08985E5C;
L_089864B8:;
    ST8(s2+127, a0);
    goto L_089863DC;
L_089864C0:;
    a0 = a2 + 0;
    a1 = a1 | 0x6f27;
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089864D0;
L_089864D0:;
    cnd_ = v0 != 0;
    a2 = LD32(sp);
    if (cnd_) { goto L_089863C8; }
    goto L_089864D8;
L_089864D8:;
    a0 = LD32(sp);
    a1 = 0xed3d0000u;
    a1 = a1 | 0xe02;
    a2 = 1;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089864EC;
L_089864EC:;
    cnd_ = v0 == 0;
    a0 = 372;
    if (cnd_) { goto L_08986640; }
    goto L_089864F4;
L_089864F4:;
    a0 = LD32(sp);
    a1 = 0x57f90000u;
    a1 = a1 | 0x21fa;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08986508;
L_08986508:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD_U8(s2+122); goto L_08986604; }
    goto L_08986510;
L_08986510:;
    a1 = s1 + 0;
    a0 = v0 + 0;
    v0 = func_08A23598(a0, a1);
    goto L_0898651C;
L_0898651C:;
    a0 = 0xd0cd0000u;
    a1 = v0 + 0;
    a2 = sp + 4;
    a0 = a0 | 0xc21c;
    ST32(sp+4, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08986534;
L_08986534:;
    a0 = 372;
    s0 = LD_U8(s2+122);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08986540;
L_08986540:;
    t0 = LD_U8(s2+122);
    a1 = LD32(sp+4);
    a2 = s4 + 0;
    a3 = 0 + 0;
    a0 = v0 + 0;
    s1 = v0 + 0;
    s0 = s0 << 2;
    func_08A16FD8(a0, a1, a2, a3, t0, 0, 0);
    goto L_08986560;
L_08986560:;
    v1 = LD_U8(s2+122);
    s0 = s0 + s2;
    ST32(s0+72, s1);
    v1 = v1 << 2;
    v1 = v1 + s2;
    a1 = LD32(v1+72);
    v1 = 1;
    a0 = 372;
    v0 = LD32(a1+364);
    v0 = (v0 & ~(0x1u << 13)) | ((v1 & 0x1) << 13);
    ST32(a1+364, v0);
    v1 = LD_U8(s2+122);
    v1 = v1 << 2;
    v1 = v1 + s2;
    v0 = LD32(v1+72);
    f0 = BITSF(LD32(v0+52));
    f0 = f0 * f20;
    ST32(v0+48, FBITS(f0));
    s0 = LD_U8(s2+122);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089865B0;
L_089865B0:;
    t0 = LD_U8(s2+122);
    a1 = LD32(sp);
    a0 = v0 + 0;
    a2 = s4 + 0;
    a3 = 0 + 0;
    s1 = v0 + 0;
    s0 = s0 << 2;
    func_08A16FD8(a0, a1, a2, a3, t0, 0, 0);
    goto L_089865D0;
L_089865D0:;
    v0 = LD_U8(s2+122);
    s0 = s0 + s2;
    ST32(s0, s1);
    v0 = v0 << 2;
    v0 = v0 + s2;
    a0 = LD32(v0+72);
    v1 = LD32(v0);
    a2 = LD32(sp);
    ST32(v1+312, a0);
    v0 = LD_U8(s2+122);
    goto L_089865F8;
L_089865F8:;
    v0 = v0 + 1;
    ST8(s2+122, v0);
    goto L_089863C8;
L_08986604:;
    a0 = 372;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898660C;
L_0898660C:;
    t0 = LD_U8(s2+122);
    a1 = LD32(sp);
    s0 = s0 << 2;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a2 = s4 + 0;
    s0 = s0 + s2;
    a3 = 0 + 0;
    func_08A16FD8(a0, a1, a2, a3, t0, 0, 0);
    goto L_08986630;
L_08986630:;
    v0 = LD_U8(s2+122);
    a2 = LD32(sp);
    ST32(s0, s1);
    goto L_089865F8;
L_08986640:;
    s0 = LD_U8(s2+123);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08986648;
L_08986648:;
    t0 = LD_U8(s2+123);
    a1 = LD32(sp);
    a0 = v0 + 0;
    a2 = s4 + 0;
    a3 = 1;
    s1 = v0 + 0;
    func_08A16FD8(a0, a1, a2, a3, t0, 0, 0);
    goto L_08986664;
L_08986664:;
    v0 = LD_U8(s2+123);
    a2 = LD32(sp);
    s0 = s0 << 2;
    s0 = s0 + s2;
    v0 = v0 + 1;
    ST32(s0+48, s1);
    ST8(s2+123, v0);
    goto L_089863C8;
L_08986684:;
    fp = 2;
    goto L_08985E28;
L_0898668C:;
    v0 = v0 | 0x2ac5;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_089866C0; }
    goto L_08986698;
L_08986698:;
    cnd_ = v0 != 0;
    v0 = 0x536c0000u;
    if (cnd_) { goto L_089866B8; }
    goto L_089866A0;
L_089866A0:;
    v0 = 0x36220000u;
    v0 = v0 | 0x332a;
    goto L_089866A8;
L_089866A8:;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08985E28; }
    goto L_089866B0;
L_089866B0:;
    fp = 1;
    goto L_08985E28;
L_089866B8:;
    v0 = v0 | 0x95a9;
    goto L_089866A8;
L_089866C0:;
    fp = 0 + 0;
    goto L_08985E28;
L_089866C8:;
    v0 = v0 | 0x46d4;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_089866C0; }
    goto L_089866D4;
L_089866D4:;
    cnd_ = v0 != 0;
    v0 = 0xfcab0000u;
    if (cnd_) { goto L_08986708; }
    goto L_089866DC;
L_089866DC:;
    v0 = 0xb39c0000u;
    v0 = v0 | 0x40a8;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_08986684; }
    goto L_089866EC;
L_089866EC:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 0xc56c0000u; goto L_08986700; }
    goto L_089866F4;
L_089866F4:;
    v0 = 0x8ee80000u;
    v0 = v0 | 0xd26f;
    goto L_08985E20;
L_08986700:;
    v0 = v0 | 0x8efd;
    goto L_089866A8;
L_08986708:;
    v0 = v0 | 0x2c09;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_089866C0; }
    goto L_08986714;
L_08986714:;
    cnd_ = v0 != 0;
    v0 = 0xfd900000u;
    if (cnd_) { goto L_08986734; }
    goto L_0898671C;
L_0898671C:;
    v0 = 0xe3740000u;
    v0 = v0 | 0xc413;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08985E28; }
    goto L_0898672C;
L_0898672C:;
    fp = 0 + 0;
    goto L_08985E28;
L_08986734:;
    v0 = v0 | 0x85c9;
    goto L_089866A8;
}

/* 0898673C */
float func_0898673C(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898673C:;
    sp = sp - 32;
    s2 = a0 + 0;
    v0 = LD_U8(a0+121);
    v0 = v0 << 2;
    v0 = v0 + a0;
    a0 = LD32(v0+48);
    cnd_ = a0 == 0;
    if (cnd_) { v1 = LD_U8(s2+120); goto L_0898677C; }
    goto L_08986770;
L_08986770:;
    f0 = func_08A19B08(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08986778;
L_08986778:;
    v1 = LD_U8(s2+120);
    goto L_0898677C;
L_0898677C:;
    v0 = v1 & 0xff;
    v0 = v0 << 2;
    v0 = v0 + s2;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v0 = v1 & 0xff;
    if (cnd_) { goto L_089867A4; }
    goto L_08986794;
L_08986794:;
    f0 = func_08A19B08(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0898679C;
L_0898679C:;
    v1 = LD_U8(s2+120);
    v0 = v1 & 0xff;
    goto L_089867A4;
L_089867A4:;
    v0 = v0 << 2;
    v0 = v0 + s2;
    a0 = LD32(v0+72);
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD_U8(s2+122); goto L_089867C4; }
    goto L_089867B8;
L_089867B8:;
    f0 = func_08A19B08(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089867C0;
L_089867C0:;
    v0 = LD_U8(s2+122);
    goto L_089867C4;
L_089867C4:;
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089867FC; }
    goto L_089867CC;
L_089867CC:;
    s1 = s2 + 0;
    goto L_089867D0;
L_089867D0:;
    s0 = LD32(s1);
    s3 = s3 + 1;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0898688C; }
    goto L_089867E0;
L_089867E0:;
    s0 = LD32(s1+72);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08986874; }
    goto L_089867EC;
L_089867EC:;
    v0 = LD_U8(s2+122);
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_089867D0; }
    goto L_089867FC;
L_089867FC:;
    v1 = LD_U8(s2+123);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0898682C; }
    goto L_08986808;
L_08986808:;
    s1 = s2 + 0;
    goto L_0898680C;
L_0898680C:;
    s0 = LD32(s1+48);
    s3 = s3 + 1;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08986858; }
    goto L_0898681C;
L_0898681C:;
    v0 = v1 & 0xff;
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_0898680C; }
    goto L_0898682C;
L_0898682C:;
    ST8(s2+121, 0);
    ST8(s2+122, 0);
    ST8(s2+123, 0);
    ST8(s2+120, 0);
    sp = sp + 32;
    return f0;
L_08986858:;
    func_08A17B30(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08986860;
L_08986860:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08986868;
L_08986868:;
    ST32(s1+48, 0);
    v1 = LD_U8(s2+123);
    goto L_0898681C;
L_08986874:;
    func_08A17B30(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0898687C;
L_0898687C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08986884;
L_08986884:;
    ST32(s1+72, 0);
    goto L_089867EC;
L_0898688C:;
    func_08A17B30(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08986894;
L_08986894:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898689C;
L_0898689C:;
    ST32(s1, 0);
    goto L_089867E0;
}

/* 089868A4 */
u64 func_089868A4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_089868A4:;
    v0 = LD_U8(a0+122);
    cnd_ = v0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_089868E0; }
    goto L_089868B0;
L_089868B0:;
    t1 = v0 + 0;
    a2 = a0 + 0;
    v1 = LD32(a2);
    goto L_089868BC;
L_089868BC:;
    t0 = t0 + 1;
    a3 = t0 < t1;
    cnd_ = v1 == 0;
    a2 = a2 + 4;
    if (cnd_) { goto L_089868D8; }
    goto L_089868CC;
L_089868CC:;
    v0 = LD32(v1+20);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08986920; }
    goto L_089868D8;
L_089868D8:;
    cnd_ = a3 != 0;
    if (cnd_) { v1 = LD32(a2); goto L_089868BC; }
    goto L_089868E0;
L_089868E0:;
    v0 = LD_U8(a0+123);
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0898691C; }
    goto L_089868EC;
L_089868EC:;
    t0 = v0 + 0;
    a0 = a0 + 48;
    v1 = LD32(a0);
    goto L_089868F8;
L_089868F8:;
    a3 = a3 + 1;
    a2 = a3 < t0;
    cnd_ = v1 == 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_08986914; }
    goto L_08986908;
L_08986908:;
    v0 = LD32(v1+20);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08986920; }
    goto L_08986914;
L_08986914:;
    cnd_ = a2 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089868F8; }
    goto L_0898691C;
L_0898691C:;
    v1 = 0 + 0;
    goto L_08986920;
L_08986920:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08986928 */
void func_08986928(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_08986928:;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    if (cnd_) { a1 = LD_U8(a0+123); goto L_0898698C; }
    goto L_08986934;
L_08986934:;
    v0 = LD_U8(a0+122);
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0898697C; }
    goto L_08986940;
L_08986940:;
    v1 = a0 + 0;
    v0 = LD32(v1);
    goto L_08986948;
L_08986948:;
    cnd_ = v0 == 0;
    a1 = a1 + 1;
    if (cnd_) { goto L_08986958; }
    goto L_08986950;
L_08986950:;
    ST32(v0+296, 0);
    ST32(v0+300, 0);
    goto L_08986958;
L_08986958:;
    v0 = LD32(v1+72);
    cnd_ = v0 == 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898696C; }
    goto L_08986964;
L_08986964:;
    ST32(v0+296, 0);
    ST32(v0+300, 0);
    goto L_0898696C;
L_0898696C:;
    v0 = LD_U8(a0+122);
    v0 = a1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08986948; }
    goto L_0898697C;
L_0898697C:;
    return;
L_08986984:;
    return;
L_0898698C:;
    cnd_ = a1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0898697C; }
    goto L_08986994;
L_08986994:;
    v1 = a0 + 48;
    v0 = LD32(v1);
    goto L_0898699C;
L_0898699C:;
    a2 = a2 + 1;
    cnd_ = v0 == 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089869B4; }
    goto L_089869A8;
L_089869A8:;
    ST32(v0+296, 0);
    ST32(v0+300, 0);
    a1 = LD_U8(a0+123);
    goto L_089869B4;
L_089869B4:;
    v0 = a1 & 0xff;
    v0 = a2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_0898699C; }
    goto L_089869C4;
L_089869C4:;
    goto L_08986984;
}

/* 089869CC */
rv_t func_089869CC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089869CC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2A10C - (-24308);
    t1 = D_08C2A11C - (-24292);
    t2 = D_08C2A12C - (-24276);
    a1 = a1 & a0;
    v1 = t0 - 24308;
    a2 = t1 - 24292;
    cnd_ = a1 == 0;
    a3 = t2 - 24276;
    if (cnd_) { goto L_08986A84; }
    goto L_089869FC;
L_089869FC:;
    v0 = D_08AEE578 - (-6792);
    f4 = BITSF(LD32(v0-6792));
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
    ST32(t0-24308, FBITS(f2));
    ST32(t1-24292, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-24276, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08986A84;
L_08986A84:;
    return (rv_t){ v0, v1, f0 };
}

/* 08986A8C */
float func_08986A8C(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08986A8C:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08986AB8; }
    goto L_08986AA4;
L_08986AA4:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_08986AB8; }
    goto L_08986AB8;
L_08986AB8:;
    return f0;
}

/* 08986AC0 */
rv_t func_08986AC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08986AC0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089869CC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08986AD4;
L_08986AD4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08986AE0 */
void func_08986AE0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_08986AE0:;
    ST8(a0, 0);
    a1 = 0 + 0;
    ST8(a0+1, 0);
    goto L_08986AEC;
L_08986AEC:;
    v0 = a1 + 1;
    v1 = a1 << 2;
    a1 = v0 & 0xff;
    v1 = v1 + a0;
    v0 = a1 < 0xcu;
    cnd_ = v0 != 0;
    ST32(v1+4, 0);
    if (cnd_) { goto L_08986AEC; }
    goto L_08986B08;
L_08986B08:;
    a1 = 0 + 0;
    goto L_08986B0C;
L_08986B0C:;
    v0 = a1 + 1;
    v1 = a1 << 2;
    a1 = v0 & 0xff;
    v1 = v1 + a0;
    v0 = a1 < 0x6u;
    cnd_ = v0 != 0;
    ST32(v1+52, 0);
    if (cnd_) { goto L_08986B0C; }
    goto L_08986B28;
L_08986B28:;
    return;
}

/* 08986B30 */
void func_08986B30(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08986B30:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = 0 + 0;
    v0 = s1 << 2;
    goto L_08986B50;
L_08986B50:;
    s0 = v0 + s2;
    v1 = LD32(s0+4);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08986BC8; }
    goto L_08986B60;
L_08986B60:;
    v0 = s1 + 1;
    s1 = v0 & 0xff;
    v1 = s1 < 0xcu;
    cnd_ = v1 != 0;
    v0 = s1 << 2;
    if (cnd_) { goto L_08986B50; }
    goto L_08986B74;
L_08986B74:;
    s1 = 0 + 0;
    v0 = s1 << 2;
    goto L_08986B7C;
L_08986B7C:;
    s0 = v0 + s2;
    v1 = LD32(s0+52);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08986BB8; }
    goto L_08986B8C;
L_08986B8C:;
    v0 = s1 + 1;
    s1 = v0 & 0xff;
    v1 = s1 < 0x6u;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = s1 << 2; goto L_08986B7C; }
    goto L_08986BA0;
L_08986BA0:;
    sp = sp + 16;
    return;
L_08986BB8:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08986BC0;
L_08986BC0:;
    ST32(s0+52, 0);
    goto L_08986B8C;
L_08986BC8:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08986BD0;
L_08986BD0:;
    ST32(s0+4, 0);
    goto L_08986B60;
}

/* 08986BD8 */
u32 func_08986BD8(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08986BD8:;
    sp = sp - 16;
    a0 = 76;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08986BEC;
L_08986BEC:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    func_08986AE0(a0);
    goto L_08986BF8;
L_08986BF8:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 08986C0C */
rv_t func_08986C0C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08986C0C:;
    sp = sp - 16;
    v0 = 0x8063;
    s1 = a0 + 0;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08986DC4; }
    goto L_08986C34;
L_08986C34:;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = 0x8066;
    if (cnd_) { goto L_08986DB4; }
    goto L_08986C40;
L_08986C40:;
    v0 = 0x802b;
    cnd_ = v1 == v0;
    v0 = 0x805e;
    if (cnd_) { goto L_08986CA0; }
    goto L_08986C4C;
L_08986C4C:;
    cnd_ = v1 == v0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08986C6C; }
    goto L_08986C54;
L_08986C54:;
    goto L_08986C58;
L_08986C58:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08986C6C:;
    v0 = LD32(s0+24);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 1; goto L_08986C54; }
    goto L_08986C78;
L_08986C78:;
    a1 = LD_U8(v0);
    a0 = s1 + 0;
    { u64 r_ = func_08986DE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08986C84;
L_08986C84:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 1; goto L_08986C54; }
    goto L_08986C8C;
L_08986C8C:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08A24788(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08986C98;
L_08986C98:;
    v0 = 1;
    goto L_08986C54;
L_08986CA0:;
    s2 = LD32(a1+24);
    cnd_ = s2 == 0;
    v0 = 1;
    if (cnd_) { goto L_08986C54; }
    goto L_08986CAC;
L_08986CAC:;
    a1 = LD32(s2);
    v1 = a1 & 0x1;
    cnd_ = v1 == 0;
    v0 = (a1 >> 1) & 0x3;
    if (cnd_) { goto L_08986D40; }
    goto L_08986CBC;
L_08986CBC:;
    v0 = 1;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08986C58; }
    goto L_08986CC8;
L_08986CC8:;
    v0 = (a1 >> 1) & 0x3;
    v0 = v0 << 2;
    v0 = v0 + a0;
    a0 = LD32(v0+52);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08986D20; }
    goto L_08986CE0;
L_08986CE0:;
    v0 = (a1 >> 1) & 0x3;
    v0 = v0 << 2;
    s1 = v0 + s1;
    v1 = LD32(s1+52);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = 1; goto L_08986C54; }
    goto L_08986CF8;
L_08986CF8:;
    a0 = 40;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08986D00;
L_08986D00:;
    a2 = LD32(s2);
    a1 = LD32(s2+4);
    a0 = v0 + 0;
    a2 = (a2 >> 1) & 0x3;
    s0 = v0 + 0;
    { rv_t r_ = func_08A24280(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08986D18;
L_08986D18:;
    ST32(s1+52, s0);
    goto L_08986C98;
L_08986D20:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08986D28;
L_08986D28:;
    a1 = LD32(s2);
    v0 = (a1 >> 1) & 0x3;
    v0 = v0 << 2;
    v0 = v0 + s1;
    ST32(v0+52, 0);
    goto L_08986CE0;
L_08986D40:;
    v0 = v0 << 2;
    v0 = v0 + a0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08986D94; }
    goto L_08986D54;
L_08986D54:;
    v0 = (a1 >> 1) & 0x3;
    v0 = v0 << 2;
    s1 = v0 + s1;
    v1 = LD32(s1+4);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = 1; goto L_08986C54; }
    goto L_08986D6C;
L_08986D6C:;
    a0 = 40;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08986D74;
L_08986D74:;
    a2 = LD32(s2);
    a1 = LD32(s2+4);
    a0 = v0 + 0;
    a2 = (a2 >> 1) & 0x3;
    s0 = v0 + 0;
    { rv_t r_ = func_08A24280(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08986D8C;
L_08986D8C:;
    ST32(s1+4, s0);
    goto L_08986C98;
L_08986D94:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08986D9C;
L_08986D9C:;
    a1 = LD32(s2);
    v0 = (a1 >> 1) & 0x3;
    v0 = v0 << 2;
    v0 = v0 + s1;
    ST32(v0+4, 0);
    goto L_08986D54;
L_08986DB4:;
    cnd_ = v1 == v0;
    v0 = 0x807e;
    if (cnd_) { goto L_08986C6C; }
    goto L_08986DBC;
L_08986DBC:;
    goto L_08986C4C;
L_08986DC4:;
    v0 = LD32(a1+24);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 1; goto L_08986C54; }
    goto L_08986DD0;
L_08986DD0:;
    a1 = LD32(v0);
    a0 = LD32(v0+4);
    { rv_t r_ = func_08A010B0(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08986DDC;
L_08986DDC:;
    v0 = 1;
    goto L_08986C54;
}

/* 08986DE4 */
u64 func_08986DE4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08986DE4:;
    a1 = a1 & 0xff;
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08986E14; }
    goto L_08986DF0;
L_08986DF0:;
    v0 = 1;
    cnd_ = a1 == v0;
    if (cnd_) { v0 = LD_U8(a0+1); goto L_08986E04; }
    goto L_08986DFC;
L_08986DFC:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08986E04:;
    v0 = v0 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0+52);
    goto L_08986DFC;
L_08986E14:;
    v0 = LD_U8(a0);
    v0 = v0 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0+4);
    goto L_08986DFC;
}

/* 08986E28 */
rv_t func_08986E28(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08986E28:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2A13C - (-24260);
    t1 = D_08C2A14C - (-24244);
    t2 = D_08C2A15C - (-24228);
    a1 = a1 & a0;
    v1 = t0 - 24260;
    a2 = t1 - 24244;
    cnd_ = a1 == 0;
    a3 = t2 - 24228;
    if (cnd_) { goto L_08986EE0; }
    goto L_08986E58;
L_08986E58:;
    v0 = D_08AEE57C - (-6788);
    f4 = BITSF(LD32(v0-6788));
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
    ST32(t0-24260, FBITS(f2));
    ST32(t1-24244, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-24228, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08986EE0;
L_08986EE0:;
    return (rv_t){ v0, v1, f0 };
}

/* 08986EE8 */
rv_t func_08986EE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08986EE8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08986E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08986EFC;
L_08986EFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08986F08 */
rv_t func_08986F08(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08986F08:;
    sp = sp - 16;
    s1 = a0 + 24;
    s0 = a0 + 0;
    a0 = s1 + 0;
    func_08873BF8(a0);
    goto L_08986F28;
L_08986F28:;
    a1 = D_08AF9E08 - (-25080);
    a1 = a1 - 25080;
    a1 = a1 + 4;
    a0 = s0 + 0;
    f0 = func_08874764(a0, a1);
    goto L_08986F3C;
L_08986F3C:;
    v1 = D_08AF9DC4 - (-25148);
    v1 = v1 - 25148;
    v0 = v1 + 44;
    ST32(s0+24, v0);
    a1 = 0 + 0;
    a0 = s0 + 0;
    ST32(s0, v1);
    ST32(s0+4, 0);
    goto L_08986F5C;
L_08986F5C:;
    a1 = a1 + 1;
    v0 = a1 < 0x2u;
    ST32(a0+8, 0);
    ST32(a0+16, 0);
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_08986F5C; }
    goto L_08986F74;
L_08986F74:;
    v0 = (u32)-32759;
    v1 = D_08C2A19C - (-24164);
    ST16(s1+8, v0);
    ST32(v1-24164, s0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08986F98 */
rv_t func_08986F98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08986F98:;
    v0 = D_08AF9DC4 - (-25148);
    v0 = v0 - 25148;
    v1 = v0 + 44;
    ST32(a0+24, v1);
    a1 = D_08AF9E08 - (-25080);
    sp = sp - 16;
    ST32(a0, v0);
    a1 = a1 - 25080;
    v0 = D_08C2A19C - (-24164);
    a1 = a1 + 4;
    s0 = a0 + 24;
    ST32(v0-24164, 0);
    func_08874844(a0, a1, t1, t2, t3);
    goto L_08986FD4;
L_08986FD4:;
    a0 = s0 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08986FDC;
L_08986FDC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08986FEC */
rv_t func_08986FEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08986FEC:;
    v0 = D_08AF9DC4 - (-25148);
    v0 = v0 - 25148;
    v1 = v0 + 44;
    ST32(a0+24, v1);
    a1 = D_08AF9E08 - (-25080);
    sp = sp - 16;
    ST32(a0, v0);
    a1 = a1 - 25080;
    v0 = D_08C2A19C - (-24164);
    a1 = a1 + 4;
    s1 = a0 + 24;
    ST32(v0-24164, 0);
    s0 = a0 + 0;
    func_08874844(a0, a1, t1, t2, t3);
    goto L_08987030;
L_08987030:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08987038;
L_08987038:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08987040;
L_08987040:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08987054 */
rv_t func_08987054(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08987054:;
    sp = sp - 16;
    v0 = 90;
    s0 = a1 + 0;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    a2 = a0 + 0;
    if (cnd_) { goto L_089870B0; }
    goto L_08987074;
L_08987074:;
    v0 = 0x8020;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089870A0; }
    goto L_08987080;
L_08987080:;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = a2 + a0;
    { rv_t r_ = func_08873DB8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08987090;
L_08987090:;
    goto L_08987094;
L_08987094:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089870A0:;
    a0 = s0 + 0;
    { rv_t r_ = func_08975194(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089870A8;
L_089870A8:;
    v0 = 1;
    goto L_08987090;
L_089870B0:;
    f1 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a0+4));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = 1;
    if (cnd_) { goto L_08987090; }
    goto L_089870C8;
L_089870C8:;
    ST32(a0+4, FBITS(f1));
    a0 = LD32(a1+24);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08987094; }
    goto L_089870D8;
L_089870D8:;
    a1 = a2 + 0;
    func_0898858C(a0, a1);
    goto L_089870E0;
L_089870E0:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = 1; goto L_08987090; }
    goto L_089870F0;
L_089870F0:;
    goto L_089870A0;
}

/* 089870F8 */
void func_089870F8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089870F8:;
    sp = sp - 32;
    v0 = (s32)a1 < 2;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08987150; }
    goto L_0898712C;
L_0898712C:;
    sp = sp + 32;
    return;
L_08987150:;
    s3 = a1 << 2;
    v0 = s3 + a0;
    v1 = LD32(v0+8);
    a0 = a2 < 0xbu;
    v1 = v1 < 0xbu;
    v1 = v1 ^ 0x1;
    v1 = v1 & a0;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08987180; }
    goto L_08987174;
L_08987174:;
    v0 = s3 + s1;
    goto L_08987178;
L_08987178:;
    ST32(v0+8, s2);
    goto L_0898712C;
L_08987180:;
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08987188;
L_08987188:;
    a2 = v0 + 0;
    a0 = D_08C29F04 - (-24828);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 24828;
    if (cnd_) { goto L_08987174; }
    goto L_0898719C;
L_0898719C:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24828);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089871EC; }
    goto L_089871C0;
L_089871C0:;
    a0 = LD32(a1);
    goto L_089871C4;
L_089871C4:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08987254; }
    goto L_089871DC;
L_089871DC:;
    a1 = LD32(a1+4);
    goto L_089871E0;
L_089871E0:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089871C4; }
    goto L_089871E8;
L_089871E8:;
    a0 = 0 + 0;
    goto L_089871EC;
L_089871EC:;
    cnd_ = a0 == 0;
    v0 = 4;
    if (cnd_) { goto L_08987174; }
    goto L_089871F4;
L_089871F4:;
    a0 = LD32(a0+64);
    cnd_ = a0 == v0;
    v0 = s3 + s1;
    if (cnd_) { goto L_08987178; }
    goto L_08987200;
L_08987200:;
    s5 = 1;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08987208;
L_08987208:;
    cnd_ = v0 == s0;
    s4 = 64;
    if (cnd_) { goto L_08987248; }
    goto L_08987210;
L_08987210:;
    a0 = s5 + 0;
    a1 = s4 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_08A4EF78(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08987220;
L_08987220:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = s3 + s1; goto L_08987178; }
    goto L_08987228;
L_08987228:;
    f12 = BITSF(0);
    a0 = s5 + 0;
    a1 = s4 + 0;
    a2 = 0 + 0;
    a3 = 1;
    { rv_t r_ = func_08A4ED60(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08987240;
L_08987240:;
    v0 = s3 + s1;
    goto L_08987178;
L_08987248:;
    s5 = 2;
    s4 = 63;
    goto L_08987210;
L_08987254:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089871E0; }
    goto L_08987260;
L_08987260:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089871E0; }
    goto L_0898726C;
L_0898726C:;
    goto L_089871EC;
}

/* 08987274 */
u64 func_08987274(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08987274:;
    v0 = a1 << 2;
    a1 = (s32)a1 < 2;
    v0 = v0 + a0;
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0898728C; }
    goto L_08987288;
L_08987288:;
    v1 = LD32(v0+8);
    goto L_0898728C;
L_0898728C:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08987294 */
void func_08987294(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0;
    int cnd_;
L_08987294:;
    v0 = a1 << 2;
    a1 = (s32)a1 < 2;
    cnd_ = a1 != 0;
    v0 = v0 + a0;
    if (cnd_) { goto L_089872AC; }
    goto L_089872A4;
L_089872A4:;
    return;
L_089872AC:;
    ST32(v0+16, a2);
    return;
}

/* 089872B4 */
u32 func_089872B4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_089872B4:;
    v0 = a1 << 2;
    a1 = (s32)a1 < 2;
    v0 = v0 + a0;
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089872CC; }
    goto L_089872C8;
L_089872C8:;
    v1 = LD32(v0+16);
    goto L_089872CC;
L_089872CC:;
    v0 = v1 + 0;
    return v0;
}

/* 089872D4 */
rv_t func_089872D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089872D4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 44;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089872F0;
L_089872F0:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_08986F08(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089872FC;
L_089872FC:;
    a0 = s1 + 0;
    cnd_ = s1 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_0898731C; }
    goto L_08987308;
L_08987308:;
    goto L_0898730C;
L_0898730C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0898731C:;
    v1 = LD32(s1);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898732C;
L_0898732C:;
    goto L_0898730C;
}

/* 08987334 */
rv_t func_08987334(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08987334:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2A16C - (-24212);
    t1 = D_08C2A17C - (-24196);
    t2 = D_08C2A18C - (-24180);
    a1 = a1 & a0;
    v1 = t0 - 24212;
    a2 = t1 - 24196;
    cnd_ = a1 == 0;
    a3 = t2 - 24180;
    if (cnd_) { goto L_089873EC; }
    goto L_08987364;
L_08987364:;
    v0 = D_08AEE580 - (-6784);
    f4 = BITSF(LD32(v0-6784));
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
    ST32(t0-24212, FBITS(f2));
    ST32(t1-24196, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-24180, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_089873EC;
L_089873EC:;
    return (rv_t){ v0, v1, f0 };
}

/* 089873F4 */
rv_t func_089873F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089873F4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08987334(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08987408;
L_08987408:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08987414 */
u64 func_08987414(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08987414:;
    sp = sp - 48;
    fp = D_08C29334 - (-27852);
    s7 = D_08C28F60 - (-28832);
    s6 = 5;
    s5 = D_08C29330 - (-27856);
    s4 = 0 + 0;
    s1 = a0 + 0;
    s2 = s1 + 28;
    func_08873E94(a0, a1);
    goto L_08987460;
L_08987460:;
    v0 = D_08AF9E70 - (-24976);
    v0 = v0 - 24976;
    ST32(s1, v0);
    ST32(s1+60, 0);
    ST8(s1+64, 0);
    ST8(s1+65, 0);
    goto L_08987478;
L_08987478:;
    v0 = LD32(s7-28832);
    cnd_ = v0 == s6;
    s3 = (u32)-1;
    if (cnd_) { goto L_08987538; }
    goto L_08987484;
L_08987484:;
    v0 = LD32(s5-27856);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = D_08C294C4 - (-27452); goto L_0898752C; }
    goto L_08987490;
L_08987490:;
    s3 = LD32(fp-27852);
    goto L_08987494;
L_08987494:;
    if (s4 == 0) s3 = v0;
    goto L_08987498;
L_08987498:;
    s0 = s4 << 2;
    v0 = func_08973660();
    goto L_089874A0;
L_089874A0:;
    v1 = (u32)-1;
    s4 = s4 + 1;
    if (v0 != 0) v1 = s3;
    s0 = s0 + s1;
    v0 = s4 < 0x2u;
    ST32(s2, v1);
    s2 = s2 + 4;
    cnd_ = v0 != 0;
    ST32(s0+36, 0);
    if (cnd_) { goto L_08987478; }
    goto L_089874C4;
L_089874C4:;
    a0 = 0 + 0;
    v1 = s1 + 68;
    goto L_089874CC;
L_089874CC:;
    a0 = a0 + 1;
    v0 = a0 < 0x4u;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089874CC; }
    goto L_089874E0;
L_089874E0:;
    v0 = D_08C2A1D0 - (-24112);
    ST32(v0-24112, s1);
    v1 = 2;
    v0 = (u32)-32759;
    ST32(s1+52, v1);
    ST16(s1+8, v0);
    ST32(s1+56, 0);
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_0898752C:;
    v0 = v0 - 27452;
    s3 = LD32(v0+32);
    goto L_08987498;
L_08987538:;
    v0 = func_08979DF4();
    goto L_08987540;
L_08987540:;
    v1 = 2;
    cnd_ = v0 != v1;
    v1 = D_08ADDE48 - (-8632);
    if (cnd_) { goto L_08987498; }
    goto L_0898754C;
L_0898754C:;
    v0 = LD32(v1-8632);
    v1 = D_08ADDE44 - (-8636);
    s3 = LD32(v1-8636);
    goto L_08987494;
}

/* 0898755C */
rv_t func_0898755C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898755C:;
    v1 = D_08AF9E70 - (-24976);
    v1 = v1 - 24976;
    ST32(a0, v1);
    sp = sp - 16;
    a1 = D_08C2A1D0 - (-24112);
    ST32(a1-24112, 0);
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898757C;
L_0898757C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08987588 */
rv_t func_08987588(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08987588:;
    v0 = D_08AF9E70 - (-24976);
    v0 = v0 - 24976;
    ST32(a0, v0);
    sp = sp - 16;
    v1 = D_08C2A1D0 - (-24112);
    s0 = a0 + 0;
    ST32(v1-24112, 0);
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089875B0;
L_089875B0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089875B8;
L_089875B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089875C8 */
rv_t func_089875C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_089875C8:;
    sp = sp - 80;
    v1 = 0xffff0000u;
    v1 = v1 | 0x7ffe;
    s0 = a1 + 0;
    v0 = LD_U16(a1+16);
    v0 = v0 + v1;
    a1 = v0 < 0x21u;
    cnd_ = a1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08987AE4; }
    goto L_08987608;
L_08987608:;
    v1 = D_08ADDDC0 - (-8768);
    v0 = v0 << 2;
    v1 = v1 - 8768;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08987624u: goto L_08987624; case 0x08987770u: goto L_08987770; case 0x08987790u: goto L_08987790; case 0x089877D4u: goto L_089877D4; case 0x08987A04u: goto L_08987A04; case 0x08987A20u: goto L_08987A20; case 0x08987AD4u: goto L_08987AD4; case 0x08987AE4u: goto L_08987AE4; case 0x08987AF8u: goto L_08987AF8; default: rs_break(0, 0x0898761c); }
L_08987624:;
    s2 = LD32(s0+24);
    cnd_ = s2 == 0;
    v0 = 1;
    if (cnd_) { goto L_08987680; }
    goto L_08987630;
L_08987630:;
    a0 = LD32(s2+4);
    s3 = 0 + 0;
    { u64 r_ = func_08A26FF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898763C;
L_0898763C:;
    s4 = v0 + 0;
    v0 = D_08C29328 - (-27864);
    a0 = LD32(v0-27864);
    v1 = 5;
    cnd_ = a0 == v1;
    if (cnd_) { goto L_08987754; }
    goto L_08987654;
L_08987654:;
    s3 = 1;
    goto L_08987658;
L_08987658:;
    a0 = LD_U16(s0+16);
    goto L_0898765C;
L_0898765C:;
    v0 = 0x8003;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08987724; }
    goto L_08987668;
L_08987668:;
    cnd_ = v0 != 0;
    v0 = 0x8004;
    if (cnd_) { goto L_089876C8; }
    goto L_08987670;
L_08987670:;
    v0 = 0x8002;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_089876A4; }
    goto L_0898767C;
L_0898767C:;
    v0 = 1;
    goto L_08987680;
L_08987680:;
    goto L_08987684;
L_08987684:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_089876A4:;
    cnd_ = s3 == 0;
    if (cnd_) { v0 = 1; goto L_08987680; }
    goto L_089876AC;
L_089876AC:;
    a2 = LD32(s2+8);
    a0 = s1 + 0;
    a1 = s4 + 0;
    goto L_089876B8;
L_089876B8:;
    { u64 r_ = func_0898810C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089876C0;
L_089876C0:;
    v0 = 1;
    goto L_08987680;
L_089876C8:;
    cnd_ = a0 != v0;
    v0 = 1;
    if (cnd_) { goto L_08987680; }
    goto L_089876D0;
L_089876D0:;
    cnd_ = s3 == 0;
    if (cnd_) { goto L_08987684; }
    goto L_089876D8;
L_089876D8:;
    a0 = s1 + 0;
    a1 = s4 + 0;
    { u64 r_ = func_08987FA4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089876E4;
L_089876E4:;
    v1 = LD32(s2+8);
    a0 = s1 + 0;
    v1 = v1 < v0;
    cnd_ = v1 == 0;
    a1 = s4 + 0;
    if (cnd_) { goto L_0898771C; }
    goto L_089876F8;
L_089876F8:;
    a0 = s1 + 0;
    a1 = s4 + 0;
    { u64 r_ = func_08987FA4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08987704;
L_08987704:;
    v1 = LD32(s2+8);
    a0 = s1 + 0;
    a1 = s4 + 0;
    v0 = v0 - v1;
    a2 = v0 + 0;
    goto L_089876B8;
L_0898771C:;
    a2 = 0 + 0;
    goto L_089876B8;
L_08987724:;
    cnd_ = s3 == 0;
    v0 = 1;
    if (cnd_) { goto L_08987680; }
    goto L_0898772C;
L_0898772C:;
    { u64 r_ = func_08A3CC70(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08987734;
L_08987734:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 1; goto L_08987680; }
    goto L_0898773C;
L_0898773C:;
    a2 = LD32(s2+8);
    a0 = s1 + 0;
    a1 = s4 + 0;
    { u64 r_ = func_08987FEC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898774C;
L_0898774C:;
    v0 = 1;
    goto L_08987680;
L_08987754:;
    v0 = func_08979DF4();
    goto L_0898775C;
L_0898775C:;
    v1 = 2;
    cnd_ = v0 != v1;
    if (cnd_) { a0 = LD_U16(s0+16); goto L_0898765C; }
    goto L_08987768;
L_08987768:;
    s3 = 1;
    goto L_08987658;
L_08987770:;
    a0 = LD32(s0+24);
    cnd_ = a0 == 0;
    if (cnd_) { v0 = 1; goto L_08987680; }
    goto L_0898777C;
L_0898777C:;
    a0 = LD32(a0+4);
    { u64 r_ = func_08A26FF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08987784;
L_08987784:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    goto L_0898771C;
L_08987790:;
    s0 = LD32(s0+24);
    cnd_ = s0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08987680; }
    goto L_0898779C;
L_0898779C:;
    a0 = LD32(s0+4);
    { u64 r_ = func_08A26FF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089877A4;
L_089877A4:;
    a0 = v0 + 0;
    func_0897392C(a0);
    goto L_089877AC;
L_089877AC:;
    v0 = LD32(s0);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08987680; }
    goto L_089877B8;
L_089877B8:;
    a1 = LD32(s0+12);
    a0 = LD32(s0+8);
    v0 = D_08B1C14C - (-16052);
    v1 = D_08C2D0B4 - (-12108);
    ST32(v0-16052, a0);
    ST32(v1-12108, a1);
    goto L_0898767C;
L_089877D4:;
    s2 = LD32(s0+24);
    cnd_ = s2 == 0;
    a0 = D_08C2C31C - (-15588);
    if (cnd_) { goto L_0898767C; }
    goto L_089877E0;
L_089877E0:;
    a2 = LD32(s0+4);
    v0 = 999;
    ST32(sp, 0);
    s3 = 4;
    v1 = a0 - 15588;
    ST32(sp+4, 0);
    cnd_ = a2 == v0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_089879A0; }
    goto L_08987800;
L_08987800:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-15588);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08987850; }
    goto L_08987824;
L_08987824:;
    a0 = LD32(a1);
    goto L_08987828;
L_08987828:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089879E4; }
    goto L_08987840;
L_08987840:;
    a1 = LD32(a1+4);
    goto L_08987844;
L_08987844:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08987828; }
    goto L_0898784C;
L_0898784C:;
    s1 = 0 + 0;
    goto L_08987850;
L_08987850:;
    cnd_ = s1 == 0;
    if (cnd_) { t0 = LD32(s2+8); goto L_089879A4; }
    goto L_08987858;
L_08987858:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08987874;
L_08987874:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089878A8; }
    goto L_089878A4;
L_089878A4:;
    a0 = LD32(v0+16);
    goto L_089878A8;
L_089878A8:;
    cnd_ = a0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08987934; }
    goto L_089878B0;
L_089878B0:;
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089878C8; }
    goto L_089878C4;
L_089878C4:;
    v1 = LD32(v0+16);
    goto L_089878C8;
L_089878C8:;
    v0 = v1 + 4;
    f4 = BITSF(LD32(v0+20));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+12));
    f6 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+16));
    f3 = BITSF(LD32(v1+4));
    f6 = f6 + f0;
    f2 = f2 + f4;
    f3 = f3 + f1;
    v0 = D_08AEE58C - (-6772);
    f0 = BITSF(LD32(v0-6772));
    f4 = BITSF(LD32(a0));
    f5 = BITSF(LD32(a0+4));
    f2 = f2 * f0;
    f3 = f3 * f0;
    f6 = f6 * f0;
    f1 = BITSF(LD32(a0+8));
    ST32(sp+24, FBITS(f2));
    f4 = f4 + f3;
    f5 = f5 + f6;
    f1 = f1 + f2;
    ST32(sp+16, FBITS(f3));
    ST32(a0+4, FBITS(f5));
    ST32(a0+8, FBITS(f1));
    ST32(a0, FBITS(f4));
    ST32(sp+20, FBITS(f6));
    goto L_08987934;
L_08987934:;
    a0 = LD32(s0+4);
    a1 = D_08C2B4CC - (-19252);
    v0 = 999;
    cnd_ = a0 == v0;
    v1 = a1 - 19252;
    if (cnd_) { goto L_089879A0; }
    goto L_08987948;
L_08987948:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-19252);
    v0 = v0 - 1;
    v0 = a0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a3 = LD32(v0);
    cnd_ = a3 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08987998; }
    goto L_0898796C;
L_0898796C:;
    a2 = LD32(a3);
    goto L_08987970;
L_08987970:;
    v0 = LD32(a2);
    v1 = LD32(v0-16);
    v1 = a2 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a0;
    if (cnd_) { v0 = LD32(v1+16); goto L_089879C4; }
    goto L_08987988;
L_08987988:;
    a3 = LD32(a3+4);
    goto L_0898798C;
L_0898798C:;
    cnd_ = a3 != 0;
    if (cnd_) { a2 = LD32(a3); goto L_08987970; }
    goto L_08987994;
L_08987994:;
    v1 = 0 + 0;
    goto L_08987998;
L_08987998:;
    cnd_ = v1 != 0;
    if (cnd_) { s3 = LD32(v1+12); goto L_089879A0; }
    goto L_089879A0;
L_089879A0:;
    t0 = LD32(s2+8);
    goto L_089879A4;
L_089879A4:;
    a3 = LD32(s2+4);
    a0 = s3 + 0;
    a1 = 999;
    a2 = sp + 0;
    t1 = 1;
    { rv_t r_ = func_089F8238(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089879BC;
L_089879BC:;
    v0 = 1;
    goto L_08987680;
L_089879C4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a3 = LD32(a3+4); goto L_0898798C; }
    goto L_089879D0;
L_089879D0:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 != 0;
    v1 = a2 + 0;
    if (cnd_) { goto L_08987988; }
    goto L_089879DC;
L_089879DC:;
    goto L_08987998;
L_089879E4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08987844; }
    goto L_089879F0;
L_089879F0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08987840; }
    goto L_089879FC;
L_089879FC:;
    goto L_08987850;
L_08987A04:;
    v0 = LD32(s0+24);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 1; goto L_08987680; }
    goto L_08987A10;
L_08987A10:;
    a0 = LD32(v0+4);
    { u64 r_ = func_08979CD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08987A18;
L_08987A18:;
    v0 = 1;
    goto L_08987680;
L_08987A20:;
    a0 = LD32(s0+24);
    a1 = D_08C2A08C - (-24436);
    v0 = 999;
    a3 = LD32(a0);
    cnd_ = a3 == v0;
    v1 = a1 - 24436;
    if (cnd_) { goto L_08987AA4; }
    goto L_08987A38;
L_08987A38:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-24436);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08987A7C; }
    goto L_08987A5C;
L_08987A5C:;
    a2 = LD32(v1);
    goto L_08987A60;
L_08987A60:;
    v0 = LD32(a2+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(a2+16); goto L_08987AB4; }
    goto L_08987A6C;
L_08987A6C:;
    v1 = LD32(v1+4);
    goto L_08987A70;
L_08987A70:;
    cnd_ = v1 != 0;
    if (cnd_) { a2 = LD32(v1); goto L_08987A60; }
    goto L_08987A78;
L_08987A78:;
    a2 = 0 + 0;
    goto L_08987A7C;
L_08987A7C:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08987AA4; }
    goto L_08987A84;
L_08987A84:;
    a2 = LD32(a2+88);
    v0 = 4;
    cnd_ = a2 == v0;
    if (cnd_) { goto L_08987AA4; }
    goto L_08987A94;
L_08987A94:;
    v1 = LD32(a0+4);
    v0 = a2 << 2;
    v0 = v0 + s1;
    ST32(v0+68, v1);
    goto L_08987AA4;
L_08987AA4:;
    a0 = LD32(a0);
    func_08974C2C(a0);
    goto L_08987AAC;
L_08987AAC:;
    v0 = 1;
    goto L_08987680;
L_08987AB4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08987A70; }
    goto L_08987AC0;
L_08987AC0:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08987A70; }
    goto L_08987ACC;
L_08987ACC:;
    goto L_08987A7C;
L_08987AD4:;
    a0 = s0 + 0;
    { rv_t r_ = func_08975194(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08987ADC;
L_08987ADC:;
    v0 = 1;
    goto L_08987680;
L_08987AE4:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08874198(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08987AF0;
L_08987AF0:;
    goto L_08987684;
L_08987AF8:;
    { u64 r_ = func_08A3CC70(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08987B00;
L_08987B00:;
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08987680; }
    goto L_08987B08;
L_08987B08:;
    s0 = LD32(s0+24);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08987684; }
    goto L_08987B14;
L_08987B14:;
    a0 = LD32(s0+4);
    v0 = (s32)a0 < 2;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08987684; }
    goto L_08987B24;
L_08987B24:;
    { u64 r_ = func_08A26FF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08987B2C;
L_08987B2C:;
    s2 = v0 + 0;
    v0 = D_08C294E4 - (-27420);
    v0 = LD32(v0-27420);
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08987BF8; }
    goto L_08987B44;
L_08987B44:;
    f0 = BITSF(LD32(s0+8));
    v0 = D_08AEE584 - (-6780);
    a0 = s1 + 0;
    f0 = f1 * f0;
    f1 = BITSF(LD32(v0-6780));
    a1 = s2 + 0;
    f20 = f0 * f1;
    { u64 r_ = func_08987FA4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08987B64;
L_08987B64:;
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08987BDC; }
    goto L_08987B70;
L_08987B70:;
    f1 = f1 + f20;
    f0 = BITSF(0);
    a0 = s1 + 0;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    a1 = s2 + 0;
    if (cnd_) { goto L_0898771C; }
    goto L_08987B8C;
L_08987B8C:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    { u64 r_ = func_08987FA4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08987B98;
L_08987B98:;
    a2 = v0 + 0;
    v0 = D_08AEE588 - (-6776);
    f0 = BITSF(LD32(v0-6776));
    f1 = BITSF(F2I(f20, 1));
    fcc = FCMP(f0, f20, 14);
    v1 = FBITS(f1);
    cnd_ = !fcc;
    if (cnd_) { a2 = a2 + v1; goto L_08987BD0; }
    goto L_08987BB8;
L_08987BB8:;
    f0 = f20 - f0;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v1 = v1 | v0;
    a2 = a2 + v1;
    goto L_08987BD0;
L_08987BD0:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    goto L_089876B8;
L_08987BDC:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_08987B70;
L_08987BF8:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_08987B44;
}

/* 08987C14 */
rv_t func_08987C14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08987C14:;
    sp = sp - 16;
    a1 = 52;
    s1 = a0 + 0;
    a3 = 0 + 0;
    a2 = LD_U16(a0+8);
    a0 = 90;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08987C3C;
L_08987C3C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08987C6C; }
    goto L_08987C44;
L_08987C44:;
    v0 = LD32(v0+24);
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08987C5C; }
    goto L_08987C54;
L_08987C54:;
    func_089883F8(a0, a1);
    goto L_08987C5C;
L_08987C5C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = 2;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08987C6C;
L_08987C6C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08987C80 */
rv_t func_08987C80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08987C80:;
    sp = sp - 48;
    v0 = D_08C2BA34 - (-17868);
    v1 = LD32(v0-17868);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08987CCC; }
    goto L_08987CAC;
L_08987CAC:;
    goto L_08987CB0;
L_08987CB0:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08987CCC:;
    { u64 r_ = func_089739F8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08987CD4;
L_08987CD4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08987CB0; }
    goto L_08987CDC;
L_08987CDC:;
    v0 = D_08AEE590 - (-6768);
    f20 = BITSF(LD32(v0-6768));
    s2 = 0 + 0;
    s3 = D_08B285A0 - (-31328);
    s1 = s0 + 0;
    goto L_08987CF0;
L_08987CF0:;
    a0 = s2 + 0;
    v0 = func_08973DE0(a0);
    goto L_08987CF8;
L_08987CF8:;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08987D98; }
    goto L_08987D00;
L_08987D00:;
    s2 = s2 + 1;
    goto L_08987D04;
L_08987D04:;
    v0 = s2 < 0x2u;
    cnd_ = v0 != 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_08987CF0; }
    goto L_08987D10;
L_08987D10:;
    a0 = 0 + 0;
    { u64 r_ = func_08973E80(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08987D18;
L_08987D18:;
    s1 = v0 + 0;
    v0 = LD32(s0+52);
    cnd_ = s1 == v0;
    v0 = 2;
    if (cnd_) { goto L_08987D34; }
    goto L_08987D28;
L_08987D28:;
    ST32(s0+52, s1);
    ST32(s0+56, 0);
    goto L_08987CAC;
L_08987D34:;
    cnd_ = s1 == v0;
    if (cnd_) { goto L_08987CB0; }
    goto L_08987D3C;
L_08987D3C:;
    a0 = s1 + 0;
    { u64 r_ = func_08973F18(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08987D44;
L_08987D44:;
    cnd_ = v0 == 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_08987D88; }
    goto L_08987D4C;
L_08987D4C:;
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s0+56));
    v0 = D_08AEE594 - (-6764);
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0-6764));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    ST32(s0+56, FBITS(f0));
    if (cnd_) { goto L_08987CAC; }
    goto L_08987D70;
L_08987D70:;
    ST32(s0+56, 0);
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_089880D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08987D80;
L_08987D80:;
    goto L_08987CB0;
L_08987D88:;
    { u64 r_ = func_08973F90(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08987D90;
L_08987D90:;
    goto L_08987CB0;
L_08987D98:;
    v0 = func_08984034(a0);
    goto L_08987DA0;
L_08987DA0:;
    f2 = BITSF(0);
    cnd_ = v0 != 0;
    if (cnd_) { s2 = s2 + 1; goto L_08987D04; }
    goto L_08987DAC;
L_08987DAC:;
    f1 = BITSF(LD32(s1+44));
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(s1+44, FBITS(f20)); goto L_08987D00; }
    goto L_08987DC0;
L_08987DC0:;
    f0 = BITSF(LD32(s3-31328));
    a0 = s0 + 0;
    a1 = s2 + 0;
    f0 = f1 - f0;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    ST32(s1+44, FBITS(f0));
    if (cnd_) { goto L_08987D00; }
    goto L_08987DE0;
L_08987DE0:;
    ST32(s1+44, FBITS(f20));
    { rv_t r_ = func_089880D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08987DE8;
L_08987DE8:;
    s2 = s2 + 1;
    goto L_08987D04;
}

/* 08987DF0 */
rv_t func_08987DF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08987DF0:;
    sp = sp - 32;
    s2 = a1 + 0;
    a1 = 2;
    s3 = a0 + 0;
    a0 = s2 + 0;
    s1 = 0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08987E20;
L_08987E20:;
    a0 = s3 + 0;
    a1 = s2 + 0;
    { rv_t r_ = func_088750A8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08987E2C;
L_08987E2C:;
    a0 = s2 + 0;
    a1 = 4;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08987E38;
L_08987E38:;
    s0 = s3 + 68;
    goto L_08987E3C;
L_08987E3C:;
    a1 = LD32(s0);
    a0 = s2 + 0;
    s1 = s1 + 1;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08987E4C;
L_08987E4C:;
    v1 = s1 < 0x4u;
    cnd_ = v1 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08987E3C; }
    goto L_08987E58;
L_08987E58:;
    a1 = LD32(s3+60);
    a0 = s2 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08987E64;
L_08987E64:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08987E80 */
rv_t func_08987E80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08987E80:;
    sp = sp - 48;
    s3 = a1 + 0;
    a1 = sp + 0;
    s2 = a0 + 0;
    a0 = s3 + 0;
    ST32(sp, 0);
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08987EB0;
L_08987EB0:;
    a0 = s2 + 0;
    a1 = s3 + 0;
    { rv_t r_ = func_08874FD8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08987EBC;
L_08987EBC:;
    a2 = LD32(sp);
    cnd_ = (s32)a2 <= 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08987F4C; }
    goto L_08987EC8;
L_08987EC8:;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08987ED0;
L_08987ED0:;
    v0 = LD32(sp+4);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08987F10; }
    goto L_08987EDC;
L_08987EDC:;
    s0 = s2 + 68;
    goto L_08987EE0;
L_08987EE0:;
    a0 = s3 + 0;
    a1 = sp + 8;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08987EEC;
L_08987EEC:;
    v0 = LD32(sp+4);
    v1 = s1 < 0x4u;
    s1 = s1 + 1;
    cnd_ = v1 == 0;
    a0 = s1 < v0;
    if (cnd_) { goto L_08987F08; }
    goto L_08987F00;
L_08987F00:;
    v0 = LD32(sp+8);
    ST32(s0, v0);
    goto L_08987F08;
L_08987F08:;
    cnd_ = a0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08987EE0; }
    goto L_08987F10;
L_08987F10:;
    a2 = LD32(sp);
    goto L_08987F14;
L_08987F14:;
    v0 = (s32)a2 < 2;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = s2 + 60; goto L_08987F3C; }
    goto L_08987F20;
L_08987F20:;
    goto L_08987F24;
L_08987F24:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08987F3C:;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08987F44;
L_08987F44:;
    goto L_08987F24;
L_08987F4C:;
    v0 = 0x29520000u;
    v1 = 0x31a40000u;
    a0 = 0x90e80000u;
    a1 = 0x8d5b0000u;
    v0 = v0 | 0x34f4;
    v1 = v1 | 0xad3e;
    a0 = a0 | 0xbffa;
    a1 = a1 | 0x865d;
    ST32(s2+76, v0);
    ST32(s2+72, v1);
    ST32(s2+68, a0);
    ST32(s2+80, a1);
    goto L_08987F14;
}

/* 08987F80 */
u64 func_08987F80(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08987F80:;
    v0 = a1 << 2;
    a1 = (s32)a1 < 2;
    v1 = v0 + a0;
    cnd_ = a1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08987F9C; }
    goto L_08987F94;
L_08987F94:;
    return (u64)v0 | ((u64)v1 << 32);
L_08987F9C:;
    v0 = LD32(v1+28);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08987FA4 */
u64 func_08987FA4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08987FA4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a1 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08987FBC;
L_08987FBC:;
    v1 = v0 << 2;
    v0 = (s32)v0 < 2;
    v1 = v1 + s0;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08987FE4; }
    goto L_08987FD0;
L_08987FD0:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08987FE4:;
    a0 = LD32(v1+28);
    goto L_08987FD0;
}

/* 08987FEC */
u64 func_08987FEC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08987FEC:;
    sp = sp - 16;
    s2 = a1 + 0;
    s1 = a0 + 0;
    s0 = a2 + 0;
    { u64 r_ = func_08987FA4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08988010;
L_08988010:;
    v0 = v0 + s0;
    a0 = s1 + 0;
    a1 = s2 + 0;
    a2 = v0 + 0;
    { u64 r_ = func_0898810C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08988024;
L_08988024:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0898803C */
rv_t func_0898803C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898803C:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s2 = a2 + 0;
    s0 = a1 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08988064;
L_08988064:;
    v1 = v0 << 2;
    v0 = (s32)v0 < 2;
    v1 = v1 + s1;
    cnd_ = v0 == 0;
    a3 = 1;
    if (cnd_) { goto L_0898809C; }
    goto L_08988078;
L_08988078:;
    v1 = LD32(v1+28);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    t0 = v1 < s2;
    if (cnd_) { goto L_0898809C; }
    goto L_08988088;
L_08988088:;
    a2 = v1 - s2;
    a0 = s1 + 0;
    a1 = s0 + 0;
    cnd_ = t0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089880B8; }
    goto L_0898809C;
L_0898809C:;
    v0 = a3 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089880B8:;
    { u64 r_ = func_0898810C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089880C0;
L_089880C0:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089882BC(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089880CC;
L_089880CC:;
    a3 = 1;
    goto L_0898809C;
}

/* 089880D4 */
rv_t func_089880D4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089880D4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a1 + 0;
    { u64 r_ = func_08A26FF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089880EC;
L_089880EC:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = 1;
    { rv_t r_ = func_0898803C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089880FC;
L_089880FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898810C */
u64 func_0898810C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898810C:;
    sp = sp - 32;
    s3 = a0 + 0;
    a0 = a1 + 0;
    s2 = a2 + 0;
    s0 = a1 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08988138;
L_08988138:;
    s1 = v0 + 0;
    v0 = (s32)v0 < 2;
    cnd_ = v0 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08988164; }
    goto L_08988148;
L_08988148:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08988164:;
    cnd_ = s2 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_0898817C; }
    goto L_0898816C;
L_0898816C:;
    v0 = s1 << 2;
    goto L_08988170;
L_08988170:;
    v0 = v0 + s3;
    ST32(v0+28, s2);
    goto L_08988148;
L_0898817C:;
    { u64 r_ = func_08987FA4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08988184;
L_08988184:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0898816C; }
    goto L_0898818C;
L_0898818C:;
    { u64 r_ = func_089738EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08988194;
L_08988194:;
    v0 = s1 << 2;
    goto L_08988170;
}

/* 0898819C */
u32 func_0898819C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0898819C:;
    v0 = a1 << 2;
    a1 = (s32)a1 < 2;
    v0 = v0 + a0;
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089881B4; }
    goto L_089881B0;
L_089881B0:;
    v1 = LD32(v0+36);
    goto L_089881B4;
L_089881B4:;
    v0 = v1 + 0;
    return v0;
}

/* 089881BC */
void func_089881BC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_089881BC:;
    v0 = a1 << 2;
    a1 = (s32)a1 < 2;
    cnd_ = a1 != 0;
    v1 = v0 + a0;
    if (cnd_) { goto L_089881D4; }
    goto L_089881CC;
L_089881CC:;
    return;
L_089881D4:;
    v0 = LD32(v1+36);
    v0 = v0 + 1;
    ST32(v1+36, v0);
    return;
}

/* 089881E4 */
u32 func_089881E4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089881E4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a1 + 0;
    { u64 r_ = func_08A26FF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089881FC;
L_089881FC:;
    v1 = v0 << 2;
    v0 = v0 < 0x4u;
    v1 = v1 + s0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08988214; }
    goto L_08988210;
L_08988210:;
    a0 = LD32(v1+68);
    goto L_08988214;
L_08988214:;
    v0 = a0 + 0;
    sp = sp + 16;
    return v0;
}

/* 08988228 */
u64 func_08988228(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08988228:;
    sp = sp - 16;
    v0 = D_08C2A1D0 - (-24112);
    a0 = 84;
    v1 = LD32(v0-24112);
    cnd_ = v1 == 0;
    v0 = v1 + 0;
    if (cnd_) { goto L_08988258; }
    goto L_08988248;
L_08988248:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08988258:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08988260;
L_08988260:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = 999;
    { u64 r_ = func_08987414(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08988270;
L_08988270:;
    v0 = s0 + 0;
    goto L_08988248;
}

/* 08988278 */
u32 func_08988278(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08988278:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 84;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08988294;
L_08988294:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08987414(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089882A4;
L_089882A4:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 089882BC */
rv_t func_089882BC(u32 a0, u32 a2, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089882BC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v1 = LD_U8(a0+64);
    s1 = LD32(a0+28);
    cnd_ = v1 == 0;
    s2 = LD32(a0+32);
    if (cnd_) { goto L_089882F0; }
    goto L_089882E4;
L_089882E4:;
    v0 = LD_U8(a0+65);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08988344; }
    goto L_089882F0;
L_089882F0:;
    v0 = s2 - s1;
    v0 = (s32)v0 < 31;
    cnd_ = v0 != 0;
    v0 = s1 - s2;
    if (cnd_) { goto L_0898831C; }
    goto L_08988300;
L_08988300:;
    v0 = (s32)s1 < 20;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089883CC; }
    goto L_0898830C;
L_0898830C:;
    v0 = LD_U8(s0+65);
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(s0+4); goto L_089883A8; }
    goto L_08988318;
L_08988318:;
    v0 = s1 - s2;
    goto L_0898831C;
L_0898831C:;
    v0 = (s32)v0 < 31;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08988344; }
    goto L_08988328;
L_08988328:;
    v0 = (s32)s2 < 20;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+64); goto L_0898837C; }
    goto L_08988334;
L_08988334:;
    v0 = LD_U8(s0+65);
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(s0+4); goto L_08988358; }
    goto L_08988340;
L_08988340:;
    goto L_08988344;
L_08988344:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08988358:;
    a0 = 0x306f0000u;
    a1 = 0xf4d70000u;
    a0 = a0 | 0x91a;
    a1 = a1 | 0xee65;
    a3 = 1;
    { rv_t r_ = func_08A66150(a0, a1, a2, a3, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08988370;
L_08988370:;
    v0 = 1;
    ST8(s0+65, v0);
    goto L_08988340;
L_0898837C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08988344; }
    goto L_08988384;
L_08988384:;
    a2 = LD32(s0+4);
    a1 = 0xc7f10000u;
    a0 = 0 + 0;
    a1 = a1 | 0x2198;
    a3 = 1;
    { rv_t r_ = func_08A66150(a0, a1, a2, a3, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898839C;
L_0898839C:;
    v0 = 1;
    ST8(s0+64, v0);
    goto L_08988340;
L_089883A8:;
    a0 = 0xf4d70000u;
    a1 = 0x306f0000u;
    a0 = a0 | 0xee65;
    a1 = a1 | 0x91a;
    a3 = 1;
    { rv_t r_ = func_08A66150(a0, a1, a2, a3, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089883C0;
L_089883C0:;
    v0 = 1;
    ST8(s0+65, v0);
    goto L_08988318;
L_089883CC:;
    cnd_ = v1 != 0;
    v0 = s1 - s2;
    if (cnd_) { goto L_0898831C; }
    goto L_089883D4;
L_089883D4:;
    a2 = LD32(s0+4);
    a0 = 0xc7f10000u;
    a0 = a0 | 0x2198;
    a1 = 0 + 0;
    a3 = 1;
    { rv_t r_ = func_08A66150(a0, a1, a2, a3, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089883EC;
L_089883EC:;
    v0 = 1;
    ST8(s0+64, v0);
    goto L_08988318;
}

/* 089883F8 */
void func_089883F8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089883F8:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = a0 + 0;
    s1 = 0 + 0;
    s0 = a0 + 0;
    goto L_08988420;
L_08988420:;
    a1 = s1 + 0;
    a0 = s3 + 0;
    { u64 r_ = func_08987F80(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898842C;
L_0898842C:;
    ST32(s0, v0);
    a1 = s1 + 0;
    a0 = s3 + 0;
    s1 = s1 + 1;
    v0 = func_0898819C(a0, a1);
    goto L_08988440;
L_08988440:;
    v1 = s1 < 0x2u;
    ST32(s0+8, v0);
    cnd_ = v1 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08988420; }
    goto L_08988450;
L_08988450:;
    v0 = D_08C28F3C - (-28868);
    v1 = LD32(v0-28868);
    v0 = 2;
    cnd_ = v1 == v0;
    ST32(s2+16, v1);
    if (cnd_) { goto L_08988584; }
    goto L_08988464;
L_08988464:;
    v0 = D_08C28F48 - (-28856);
    v1 = D_08B285B4 - (-31308);
    f0 = BITSF(LD32(v0-28856));
    f1 = BITSF(LD32(v1-31308));
    f0 = f0 + f1;
    ST32(s2+20, FBITS(f0));
    goto L_0898847C;
L_0898847C:;
    v0 = D_08B1BB48 - (-17592);
    f2 = BITSF(LD32(v0-17592));
    f0 = BITSF(0);
    v1 = D_08C28F4C - (-28852);
    f1 = BITSF(LD32(v1-28852));
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    ST32(s2+24, FBITS(f1));
    if (cnd_) { goto L_08988574; }
    goto L_089884A0;
L_089884A0:;
    v1 = D_08AEE598 - (-6760);
    f0 = BITSF(LD32(v1-6760));
    f0 = f2 + f0;
    goto L_089884AC;
L_089884AC:;
    v0 = D_08C28F50 - (-28848);
    f1 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(v0-28848));
    f0 = BITSF(LD32(s2+24));
    v0 = D_08AEE59C - (-6756);
    ST32(s2+28, FBITS(f1));
    f2 = f2 - f0;
    f1 = BITSF(0);
    f0 = BITSF(LD32(v0-6756));
    f2 = f2 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v1-6760));
    if (cnd_) { goto L_0898856C; }
    goto L_089884E4;
L_089884E4:;
    f0 = f2 + f0;
    goto L_089884E8;
L_089884E8:;
    f0 = BITSF(F2I(f0, 1));
    v0 = D_08B1B91C - (-18148);
    v1 = LD32(v0-18148);
    ST32(s2+32, FBITS(f0));
    ST32(s2+36, v1);
    { u64 r_ = func_08975384(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08988500;
L_08988500:;
    ST32(s2+40, v0);
    ST32(s2+48, 0);
    v0 = func_08A64FAC();
    goto L_0898850C;
L_0898850C:;
    v0 = 0 < v0;
    v1 = LD32(s2+48);
    v1 = (v1 & ~(0x1u << 1)) | ((v0 & 0x1) << 1);
    a0 = v1 + 0;
    v0 = D_08C2933C - (-27844);
    a0 = (a0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    v0 = v0 - 27844;
    cnd_ = v0 == 0;
    ST32(s2+48, a0);
    if (cnd_) { goto L_08988540; }
    goto L_08988530;
L_08988530:;
    v1 = LD32(v0+416);
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = a0 | 0x4;
    if (cnd_) { goto L_08988564; }
    goto L_08988540;
L_08988540:;
    v0 = LD32(s3+60);
    ST32(s2+44, v0);
    sp = sp + 32;
    return;
L_08988564:;
    ST32(s2+48, v0);
    goto L_08988540;
L_0898856C:;
    f0 = f2 - f0;
    goto L_089884E8;
L_08988574:;
    v1 = D_08AEE598 - (-6760);
    f0 = BITSF(LD32(v1-6760));
    f0 = f2 - f0;
    goto L_089884AC;
L_08988584:;
    ST32(s2+20, 0);
    goto L_0898847C;
}

/* 0898858C */
void func_0898858C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0898858C:;
    sp = sp - 48;
    s3 = a1 + 0;
    s2 = a0 + 0;
    s1 = 0 + 0;
    s0 = a0 + 0;
    goto L_089885B8;
L_089885B8:;
    a2 = LD32(s0);
    a1 = s1 + 0;
    a0 = s3 + 0;
    func_089870F8(a0, a1, a2);
    goto L_089885C8;
L_089885C8:;
    a2 = LD32(s0+8);
    a1 = s1 + 0;
    a0 = s3 + 0;
    s1 = s1 + 1;
    func_08987294(a0, a1, a2);
    goto L_089885DC;
L_089885DC:;
    v0 = s1 < 0x2u;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_089885B8; }
    goto L_089885E8;
L_089885E8:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0898863C; }
    goto L_089885F8;
L_089885F8:;
    a0 = LD32(s2+48);
    goto L_089885FC;
L_089885FC:;
    a1 = (a0 >> 1) & 0x1;
    a0 = a0 & 0x1;
    func_08974054(a0, a1);
    goto L_08988608;
L_08988608:;
    a0 = LD32(s2+48);
    a0 = (a0 >> 2) & 0x1;
    func_08974068(a0);
    goto L_08988614;
L_08988614:;
    a0 = LD32(s2+44);
    func_08974074(a0);
    goto L_0898861C;
L_0898861C:;
    sp = sp + 48;
    return;
L_0898863C:;
    f12 = BITSF(LD32(s2+20));
    func_08973FE4(f12);
    goto L_08988644;
L_08988644:;
    a0 = LD32(s2+36);
    func_08974010(a0);
    goto L_0898864C;
L_0898864C:;
    v0 = D_08C28F3C - (-28868);
    v1 = LD32(v0-28868);
    a0 = LD32(s2+16);
    cnd_ = v1 == a0;
    if (cnd_) { goto L_08988668; }
    goto L_08988660;
L_08988660:;
    func_08973FA0(a0);
    goto L_08988668;
L_08988668:;
    f12 = BITSF(LD32(s2+24));
    func_0897403C(f12);
    goto L_08988670;
L_08988670:;
    f0 = BITSF(LD32(s2+32));
    v0 = D_08AEE5A0 - (-6752);
    f12 = BITSF(LD32(s2+24));
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-6752));
    f2 = BITSF(LD32(s2+28));
    f1 = f1 * f0;
    f20 = (float)(s32)FBITS(f2);
    f12 = f12 + f1;
    func_08974048(f12);
    goto L_08988698;
L_08988698:;
    f12 = f20;
    func_08974030(f12);
    goto L_089886A0;
L_089886A0:;
    a0 = LD32(s2+48);
    goto L_089885FC;
}

/* 089886A8 */
void func_089886A8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089886A8:;
    sp = sp - 16;
    s0 = a0 & 0xffff;
    a0 = 20;
    s1 = a1 & 0xffff;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089886CC;
L_089886CC:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 13;
    t0 = 52;
    func_088A5E94(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_089886E8;
L_089886E8:;
    a0 = s2 + 0;
    func_08988710(a0);
    goto L_089886F0;
L_089886F0:;
    a0 = s2 + 0;
    func_088A6464(a0);
    goto L_089886F8;
L_089886F8:;
    sp = sp + 16;
    return;
}

/* 08988710 */
void func_08988710(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    float f12 = 0, f20 = 0;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08988710:;
    sp = sp - 96;
    f20 = BITSF(0);
    a1 = 0 + 0;
    s0 = a0 + 0;
    f12 = f20;
    a2 = 5;
    a3 = 0 + 0;
    t0 = 32;
    t1 = 2;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08988748;
L_08988748:;
    f12 = f20;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 8;
    t0 = 32;
    t1 = 2;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_0898876C;
L_0898876C:;
    t3 = 1;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 13;
    a3 = 16;
    t0 = 32;
    t1 = 3;
    t2 = 1;
    func_088A6290(a0, a2, a3, t0, t1, t2, t3);
    goto L_08988790;
L_08988790:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 6;
    a3 = 20;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089887B4;
L_089887B4:;
    f12 = f20;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 6;
    a3 = 24;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089887D8;
L_089887D8:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 13;
    a3 = 28;
    t0 = 32;
    t1 = 5;
    t2 = 1;
    t3 = 1;
    func_088A6290(a0, a2, a3, t0, t1, t2, t3);
    goto L_089887FC;
L_089887FC:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 13;
    a3 = 32;
    t0 = 32;
    t1 = 6;
    t2 = 1;
    t3 = 1;
    func_088A6290(a0, a2, a3, t0, t1, t2, t3);
    goto L_08988820;
L_08988820:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 13;
    a3 = 36;
    t0 = 32;
    t1 = 3;
    t2 = 1;
    t3 = 1;
    func_088A6290(a0, a2, a3, t0, t1, t2, t3);
    goto L_08988844;
L_08988844:;
    v0 = D_08ADBD94 - (-17004);
    t1 = LD32(v0-17004);
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 13;
    a3 = 40;
    t0 = 32;
    t2 = 1;
    t3 = 1;
    func_088A6290(a0, a2, a3, t0, t1, t2, t3);
    goto L_0898886C;
L_0898886C:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 13;
    a3 = 44;
    t0 = 32;
    t1 = 2;
    t2 = 1;
    t3 = 1;
    func_088A6290(a0, a2, a3, t0, t1, t2, t3);
    goto L_08988890;
L_08988890:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 13;
    a3 = 48;
    t0 = 32;
    t1 = 3;
    t2 = 1;
    t3 = 1;
    func_088A6290(a0, a2, a3, t0, t1, t2, t3);
    goto L_089888B4;
L_089888B4:;
    sp = sp + 96;
    return;
}

/* 089888C8 */
rv_t func_089888C8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089888C8:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2A1A0 - (-24160);
    t1 = D_08C2A1B0 - (-24144);
    t2 = D_08C2A1C0 - (-24128);
    a1 = a1 & a0;
    v1 = t0 - 24160;
    a2 = t1 - 24144;
    cnd_ = a1 == 0;
    a3 = t2 - 24128;
    if (cnd_) { goto L_08988980; }
    goto L_089888F8;
L_089888F8:;
    v0 = D_08AEE5A4 - (-6748);
    f4 = BITSF(LD32(v0-6748));
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
    ST32(t0-24160, FBITS(f2));
    ST32(t1-24144, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-24128, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08988980;
L_08988980:;
    return (rv_t){ v0, v1, f0 };
}

/* 08988988 */
rv_t func_08988988(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08988988:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089888C8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898899C;
L_0898899C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089889A8 */
rv_t func_089889A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089889A8:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089889CC;
L_089889CC:;
    a1 = s1 + 12;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089889D8;
L_089889D8:;
    f12 = BITSF(LD32(s1+24));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089889E4;
L_089889E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089889F8 */
rv_t func_089889F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089889F8:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08988A1C;
L_08988A1C:;
    a1 = s1 + 12;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08988A40; }
    goto L_08988A2C;
L_08988A2C:;
    goto L_08988A30;
L_08988A30:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08988A40:;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08988A48;
L_08988A48:;
    a1 = s1 + 24;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08988A54;
L_08988A54:;
    goto L_08988A30;
}

/* 08988A5C */
void func_08988A5C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08988A5C:;
    sp = sp - 32;
    v0 = 1;
    a1 = sp + 0;
    s1 = a0 + 12;
    s0 = a0 + 0;
    ST32(a0+4, v0);
    v0 = D_08AF9EC0 - (-24896);
    v0 = v0 - 24896;
    ST32(s0, v0);
    v0 = D_08AEE5B4 - (-6732);
    a0 = s1 + 0;
    f0 = BITSF(LD32(v0-6732));
    ST32(s0+8, 0);
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f0));
    f0 = func_08AA0F30(a0, a1);
    goto L_08988AAC;
L_08988AAC:;
    v0 = D_08AEE5B8 - (-6728);
    f0 = BITSF(LD32(v0-6728));
    a0 = s1 + 0;
    a1 = sp + 0;
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f0));
    f0 = func_08AA0F30(a0, a1);
    goto L_08988ACC;
L_08988ACC:;
    v0 = D_08AEE5BC - (-6724);
    v1 = s0 + 36;
    ST32(s0+36, 0);
    f0 = BITSF(LD32(v0-6724));
    ST32(v1+12, FBITS(f0));
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    sp = sp + 32;
    return;
}

/* 08988AFC */
rv_t func_08988AFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08988AFC:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 0 + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08988B20;
L_08988B20:;
    a1 = s0 + 12;
    a0 = s1 + 0;
    s0 = s0 + 36;
    { rv_t r_ = func_0882E248(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08988B30;
L_08988B30:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0882DCBC(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08988B3C;
L_08988B3C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08988B50 */
rv_t func_08988B50(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08988B50:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08988B74;
L_08988B74:;
    a1 = s1 + 12;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08988B98; }
    goto L_08988B84;
L_08988B84:;
    goto L_08988B88;
L_08988B88:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08988B98:;
    func_0882E1D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08988BA0;
L_08988BA0:;
    a1 = s1 + 36;
    a0 = s0 + 0;
    { rv_t r_ = func_0882DC70(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08988BAC;
L_08988BAC:;
    goto L_08988B88;
}

/* 08988BB4 */
void func_08988BB4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
L_08988BB4:;
    f1 = BITSF(LD32(a1));
    f0 = BITSF(0);
    v0 = D_08AEE5C0 - (-6720);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    f4 = BITSF(LD32(v0-6720));
    if (cnd_) { goto L_08988D04; }
    goto L_08988BD0;
L_08988BD0:;
    f2 = BITSF(LD32(a0));
    f0 = f1 - f2;
    f3 = f0 * f0;
    fcc = FCMP(f3, f4, 12);
    cnd_ = !fcc;
    f1 = BITSF(LD32(a1+4));
    if (cnd_) { goto L_08988C08; }
    goto L_08988BEC;
L_08988BEC:;
    f0 = BITSF(FBITS(f2) ^ 0x80000000u);
    f2 = BITSF(LD32(a1+8));
    f4 = f3;
    ST32(a2, FBITS(f0));
    ST32(a2+4, FBITS(f1));
    ST32(a2+8, FBITS(f2));
    goto L_08988C04;
L_08988C04:;
    f1 = BITSF(LD32(a1+4));
    goto L_08988C08;
L_08988C08:;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f3 = BITSF(LD32(a0+4)); goto L_08988CD4; }
    goto L_08988C1C;
L_08988C1C:;
    f2 = BITSF(LD32(a0+4));
    f0 = f1 - f2;
    f3 = f0 * f0;
    fcc = FCMP(f3, f4, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(a1+8)); goto L_08988C58; }
    goto L_08988C38;
L_08988C38:;
    f0 = BITSF(FBITS(f2) ^ 0x80000000u);
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+8));
    f4 = f3;
    ST32(a2, FBITS(f1));
    ST32(a2+4, FBITS(f0));
    ST32(a2+8, FBITS(f2));
    goto L_08988C54;
L_08988C54:;
    f1 = BITSF(LD32(a1+8));
    goto L_08988C58;
L_08988C58:;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    f2 = BITSF(LD32(a0+8));
    if (cnd_) { goto L_08988CA4; }
    goto L_08988C6C;
L_08988C6C:;
    f0 = f1 - f2;
    f0 = f0 * f0;
    fcc = FCMP(f0, f4, 12);
    cnd_ = !fcc;
    f0 = BITSF(FBITS(f2) ^ 0x80000000u);
    if (cnd_) { goto L_08988C9C; }
    goto L_08988C84;
L_08988C84:;
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    ST32(a2+8, FBITS(f0));
    ST32(a2, FBITS(f1));
    ST32(a2+4, FBITS(f2));
    return;
L_08988C9C:;
    return;
L_08988CA4:;
    f0 = f1 - f2;
    f0 = f0 * f0;
    fcc = FCMP(f0, f4, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08988C9C; }
    goto L_08988CBC;
L_08988CBC:;
    f1 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a1));
    ST32(a2+8, FBITS(f2));
    ST32(a2, FBITS(f0));
    ST32(a2+4, FBITS(f1));
    return;
L_08988CD4:;
    f0 = f1 - f3;
    f2 = f0 * f0;
    fcc = FCMP(f2, f4, 12);
    cnd_ = !fcc;
    f1 = BITSF(LD32(a1+8));
    if (cnd_) { goto L_08988C58; }
    goto L_08988CEC;
L_08988CEC:;
    f0 = BITSF(LD32(a1));
    ST32(a2+4, FBITS(f3));
    f4 = f2;
    ST32(a2, FBITS(f0));
    ST32(a2+8, FBITS(f1));
    goto L_08988C54;
L_08988D04:;
    f3 = BITSF(LD32(a0));
    f0 = f1 - f3;
    f2 = f0 * f0;
    fcc = FCMP(f2, f4, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(a1+4)); goto L_08988C08; }
    goto L_08988D20;
L_08988D20:;
    f0 = BITSF(LD32(a1+4));
    f1 = BITSF(LD32(a1+8));
    ST32(a2, FBITS(f3));
    f4 = f2;
    ST32(a2+4, FBITS(f0));
    ST32(a2+8, FBITS(f1));
    goto L_08988C04;
}

/* 08988D3C */
rv_t func_08988D3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr8 = v[8], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr100 = v[100], vr101 = v[101], vr102 = v[102], vr104 = v[104], vr105 = v[105], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr120 = v[120], vr121 = v[121], vr122 = v[122];
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_08988D3C:;
    sp = sp - 160;
    s0 = a0 + 12;
    s1 = a0 + 0;
    a0 = s0 + 0;
    s4 = a3 + 0;
    s3 = a2 + 0;
    s2 = a1 + 0;
    { rv_t r_ = ({ v[96]=vr96;v[97]=vr97;v[98]=vr98;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;__auto_type vr_t_ = func_08836448(a0, a1); vr96=v[96];vr97=v[97];vr98=v[98];vr100=v[100];vr101=v[101];vr102=v[102];vr104=v[104];vr105=v[105];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr116=v[116];vr117=v[117];vr118=v[118];vr120=v[120];vr121=v[121];vr122=v[122];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08988D74;
L_08988D74:;
    cnd_ = v0 == 0;
    v0 = D_08AEE5C4 - (-6716);
    if (cnd_) { goto L_08989040; }
    goto L_08988D7C;
L_08988D7C:;
    f6 = BITSF(LD32(s1+12));
    f5 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s0+16));
    f2 = BITSF(LD32(s0+20));
    f4 = BITSF(LD32(s0+4));
    f3 = BITSF(LD32(s0+12));
    f10 = f0 + f2;
    f8 = f6 + f4;
    f9 = f5 + f3;
    f1 = BITSF(LD32(v0-6716));
    f4 = f4 - f6;
    f3 = f3 - f5;
    f2 = f2 - f0;
    f8 = f8 * f1;
    f9 = f9 * f1;
    f10 = f10 * f1;
    v0 = D_08AEE5C8 - (-6712);
    f11 = BITSF(LD32(s1+48));
    f5 = BITSF(LD32(s2));
    f6 = BITSF(LD32(s2+4));
    f7 = BITSF(LD32(s2+8));
    f0 = BITSF(LD32(v0-6712));
    f2 = f2 * f1;
    f5 = f5 - f8;
    f6 = f6 - f9;
    f7 = f7 - f10;
    f4 = f4 * f1;
    f3 = f3 * f1;
    fcc = FCMP(f11, f0, 2);
    ST32(sp+24, FBITS(f2));
    a1 = sp + 32;
    a0 = sp + 16;
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f3));
    ST32(sp+32, FBITS(f5));
    ST32(sp+36, FBITS(f6));
    ST32(sp+40, FBITS(f7));
    ST32(sp, FBITS(f8));
    ST32(sp+4, FBITS(f9));
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f10));
    if (cnd_) { goto L_08988F00; }
    goto L_08988E20;
L_08988E20:;
    a2 = sp + 48;
    func_08988BB4(a0, a1, a2);
    goto L_08988E28;
L_08988E28:;
    f0 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s2+8));
    f5 = BITSF(LD32(sp+48));
    f4 = BITSF(LD32(sp+52));
    f3 = BITSF(LD32(sp+56));
    f5 = f5 - f0;
    f4 = f4 - f1;
    f3 = f3 - f2;
    {u32 a_=sp+(96);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f5);
    f1 = BITSF(0);
    {vr12=BITSF(v0);}
    v0 = FBITS(f4);
    {vr13=BITSF(v0);}
    v0 = FBITS(f3);
    {vr14=BITSF(v0);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp+80, FBITS(f5));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+84, FBITS(f4));
    ST32(sp+88, FBITS(f3));
    ST32(s3, FBITS(f5));
    ST32(s3+4, FBITS(f4));
    cnd_ = fcc;
    ST32(s3+8, FBITS(f3));
    if (cnd_) { goto L_08988ED4; }
    goto L_08988E98;
L_08988E98:;
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr4=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    f3 = BITSF(v0);
    {v0=FBITS(vr0);}
    f2 = BITSF(v0);
    ST32(s3+8, FBITS(f3));
    {v0=FBITS(vr1);}
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, v0);
    ST32(sp+88, FBITS(f3));
    ST32(s3, FBITS(f2));
    ST32(s3+4, v0);
    goto L_08988ED4;
L_08988ED4:;
    v0 = D_08AEE5CC - (-6708);
    f0 = BITSF(LD32(v0-6708));
    ST32(s4, FBITS(f0));
    goto L_08988EE0;
L_08988EE0:;
    sp = sp + 160;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[8]=vr8;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;return (rv_t){ v0, v1, f0 }; }
L_08988F00:;
    v0 = LD32(s1+36);
    v1 = LD32(s1+40);
    a3 = LD32(s1+44);
    ST32(sp+64, v0);
    a2 = sp + 48;
    ST32(sp+68, v1);
    ST32(sp+72, a3);
    f1 = BITSF(LD32(sp+64));
    f2 = BITSF(LD32(sp+68));
    f0 = BITSF(LD32(sp+72));
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    v0 = LD32(s1+48);
    ST32(sp+64, FBITS(f1));
    ST32(sp+68, FBITS(f2));
    ST32(sp+72, FBITS(f0));
    ST32(sp+76, v0);
    {vr112=BITSF(LD32(sp+(64)));}
    {vr113=BITSF(LD32(sp+(68)));}
    {vr114=BITSF(LD32(sp+(72)));}
    {vr115=BITSF(LD32(sp+(76)));}
    {vr116=BITSF(LD32(sp+(32)));}
    {vr117=BITSF(LD32(sp+(36)));}
    {vr118=BITSF(LD32(sp+(40)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr115;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[103]=sum;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=v[103];vr100=s0*t0;vr101=s1*t0;vr102=s2*t0;}
    {float s0=vr100;float s1=vr101;float s2=vr102;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr100=d0;vr101=d1;vr102=d2;}
    {float s0=vr115;float t0=vr115;float d0=s0*t0;vr104=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr112;float t1=vr113;float t2=vr114;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr105=sum;}
    {float s0=vr104;float t0=vr105;float d0=s0-t0;v[107]=d0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float t0=v[107];vr104=s0*t0;vr105=s1*t0;v[106]=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr100;float t1=vr101;float t2=vr102;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float t0=vr104;float t1=vr105;float t2=v[106];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {ST32(sp+(32),FBITS(vr120));}
    {ST32(sp+(36),FBITS(vr121));}
    {ST32(sp+(40),FBITS(vr122));}
    func_08988BB4(a0, a1, a2);
    goto L_08988FAC;
L_08988FAC:;
    {vr112=BITSF(LD32(s1+(36)));}
    {vr113=BITSF(LD32(s1+(40)));}
    {vr114=BITSF(LD32(s1+(44)));}
    {vr115=BITSF(LD32(s1+(48)));}
    {vr116=BITSF(LD32(sp+(48)));}
    {vr117=BITSF(LD32(sp+(52)));}
    {vr118=BITSF(LD32(sp+(56)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr115;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[103]=sum;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=v[103];vr100=s0*t0;vr101=s1*t0;vr102=s2*t0;}
    {float s0=vr100;float s1=vr101;float s2=vr102;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr100=d0;vr101=d1;vr102=d2;}
    {float s0=vr115;float t0=vr115;float d0=s0*t0;vr104=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr112;float t1=vr113;float t2=vr114;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr105=sum;}
    {float s0=vr104;float t0=vr105;float d0=s0-t0;v[107]=d0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float t0=v[107];vr104=s0*t0;vr105=s1*t0;v[106]=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr100;float t1=vr101;float t2=vr102;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float t0=vr104;float t1=vr105;float t2=v[106];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {ST32(sp+(48),FBITS(vr120));}
    {ST32(sp+(52),FBITS(vr121));}
    {ST32(sp+(56),FBITS(vr122));}
    f3 = BITSF(LD32(sp+48));
    f0 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+52));
    f1 = BITSF(LD32(sp+56));
    f3 = f3 + f0;
    f0 = BITSF(LD32(sp+4));
    f2 = f2 + f0;
    f0 = BITSF(LD32(sp+8));
    ST32(sp+48, FBITS(f3));
    f1 = f1 + f0;
    ST32(sp+52, FBITS(f2));
    ST32(sp+56, FBITS(f1));
    goto L_08988E28;
L_08989040:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    a2 = s3 + 0;
    ({ v[96]=vr96;v[97]=vr97;v[98]=vr98;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;func_08836690(a0, a1, a2); vr96=v[96];vr97=v[97];vr98=v[98];vr100=v[100];vr101=v[101];vr102=v[102];vr104=v[104];vr105=v[105];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr116=v[116];vr117=v[117];vr118=v[118];vr120=v[120];vr121=v[121];vr122=v[122];});
    goto L_08989050;
L_08989050:;
    f2 = BITSF(LD32(s3));
    f3 = BITSF(LD32(s3+4));
    f4 = BITSF(LD32(s3+8));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f3 = BITSF(FBITS(f3) ^ 0x80000000u);
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    {u32 a_=sp+(112);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f2);
    f5 = BITSF(0);
    {vr12=BITSF(v0);}
    v0 = FBITS(f3);
    {vr13=BITSF(v0);}
    v0 = FBITS(f4);
    {vr14=BITSF(v0);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(s3, FBITS(f2));
    fcc = FCMP(f0, f5, 2);
    ST32(s3+4, FBITS(f3));
    cnd_ = fcc;
    ST32(s3+8, FBITS(f4));
    if (cnd_) { goto L_089890EC; }
    goto L_089890A8;
L_089890A8:;
    {float s0=vr0;float d0=sqrtf(s0);vr4=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr8=(float)1;v[9]=(float)1;v[10]=(float)1;v[11]=(float)1;}
    {v0=FBITS(vr4);}
    f5 = BITSF(v0);
    {float s0=vr8;float t0=vr4;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    f3 = BITSF(v0);
    {v0=FBITS(vr0);}
    f2 = BITSF(v0);
    ST32(s3+8, FBITS(f3));
    {v0=FBITS(vr1);}
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, v0);
    ST32(sp+88, FBITS(f3));
    ST32(s3, FBITS(f2));
    ST32(s3+4, v0);
    goto L_089890EC;
L_089890EC:;
    ST32(s4, FBITS(f5));
    goto L_08988EE0;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[8]=vr8;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;
}

/* 089890F4 */
void func_089890F4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089890F4:;
    sp = sp - 32;
    s3 = D_08C2A204 - (-24060);
    s2 = s3 - 24060;
    s1 = a0 + 0;
    func_08873E94(a0, a1);
    goto L_0898911C;
L_0898911C:;
    v0 = D_08AEE5DC - (-6692);
    f1 = BITSF(0);
    f3 = BITSF(LD32(v0-6692));
    v0 = D_08AEE5E0 - (-6688);
    f0 = BITSF(LD32(v0-6688));
    ST32(s1+40, FBITS(f1));
    v1 = s1 + 40;
    a0 = s1 + 52;
    ST32(s1+52, FBITS(f1));
    v0 = D_08B45A9C - (23196);
    a1 = v0 + 23196;
    ST32(v1+4, FBITS(f3));
    a2 = s1 + 76;
    a3 = 1;
    ST32(a0+4, FBITS(f3));
    ST32(v1+8, FBITS(f0));
    v1 = s1 + 64;
    ST32(a0+8, FBITS(f1));
    a0 = s1 + 0;
    f4 = BITSF(LD32(v0+23196));
    v0 = D_08AF9EF0 - (-24848);
    f0 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1+4));
    v0 = v0 - 24848;
    ST32(s1, v0);
    v0 = 1;
    ST8(s1+28, v0);
    v0 = 999;
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f2));
    v1 = 2;
    ST32(s1+88, v0);
    v0 = (u32)-32734;
    ST32(s1+32, v1);
    ST32(s1+64, FBITS(f4));
    ST8(s1+92, a3);
    ST32(s1+36, a3);
    ST32(s1+76, FBITS(f1));
    ST32(a2+8, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST16(s1+8, v0);
    ST8(s1+93, 0);
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089891C8;
L_089891C8:;
    a0 = s1 + 0;
    a1 = 1;
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089891D4;
L_089891D4:;
    v0 = LD32(s2+4);
    s0 = LD32(s1+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089891EC;
L_089891EC:;
    a0 = LD32(s3-24060);
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

/* 08989234 */
rv_t func_08989234(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08989234:;
    v0 = D_08AF9EF0 - (-24848);
    v0 = v0 - 24848;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2A204 - (-24060);
    a1 = s0 + 0;
    a0 = a0 - 24060;
    func_08AC1A94(a0, a1, t1, t2, t3);
    goto L_08989260;
L_08989260:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08989268;
L_08989268:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08989278 */
rv_t func_08989278(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08989278:;
    v0 = D_08AF9EF0 - (-24848);
    v0 = v0 - 24848;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2A204 - (-24060);
    a1 = s0 + 0;
    a0 = a0 - 24060;
    func_08AC1A94(a0, a1, t1, t2, t3);
    goto L_089892A4;
L_089892A4:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089892AC;
L_089892AC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089892B4;
L_089892B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089892C4 */
rv_t func_089892C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089892C4:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 2;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089892E8;
L_089892E8:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_088750A8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089892F4;
L_089892F4:;
    a1 = LD_U8(s1+28);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989300;
L_08989300:;
    a1 = LD32(s1+32);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898930C;
L_0898930C:;
    a1 = LD32(s1+36);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989318;
L_08989318:;
    a1 = s1 + 40;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989324;
L_08989324:;
    a1 = s1 + 52;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989330;
L_08989330:;
    a1 = s1 + 64;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898933C;
L_0898933C:;
    a1 = s1 + 76;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989348;
L_08989348:;
    a1 = LD32(s1+88);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989354;
L_08989354:;
    a1 = LD_U8(s1+92);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989360;
L_08989360:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08989374 */
rv_t func_08989374(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08989374:;
    sp = sp - 48;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989398;
L_08989398:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08874FD8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089893A4;
L_089893A4:;
    v1 = LD32(sp);
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = 1;
    if (cnd_) { goto L_089894CC; }
    goto L_089893B4;
L_089893B4:;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0898944C; }
    goto L_089893BC;
L_089893BC:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089893D8; }
    goto L_089893C4;
L_089893C4:;
    goto L_089893C8;
L_089893C8:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089893D8:;
    a1 = sp + 20;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089893E0;
L_089893E0:;
    v0 = LD32(sp+20);
    a0 = s0 + 0;
    a1 = sp + 24;
    v0 = 0 < v0;
    ST8(s1+28, v0);
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089893F8;
L_089893F8:;
    v0 = LD32(sp+24);
    a0 = s0 + 0;
    a1 = sp + 24;
    ST32(s1+32, v0);
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898940C;
L_0898940C:;
    v0 = LD32(sp+24);
    a1 = s1 + 40;
    a0 = s0 + 0;
    ST32(s1+36, v0);
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989420;
L_08989420:;
    a1 = s1 + 52;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898942C;
L_0898942C:;
    a1 = s1 + 64;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989438;
L_08989438:;
    a1 = s1 + 76;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989444;
L_08989444:;
    goto L_089893C8;
L_0898944C:;
    a1 = sp + 12;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989454;
L_08989454:;
    v0 = LD32(sp+12);
    a0 = s0 + 0;
    a1 = sp + 16;
    v0 = 0 < v0;
    ST8(s1+28, v0);
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898946C;
L_0898946C:;
    v0 = LD32(sp+16);
    a0 = s0 + 0;
    a1 = sp + 16;
    ST32(s1+32, v0);
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989480;
L_08989480:;
    v0 = LD32(sp+16);
    a1 = s1 + 40;
    a0 = s0 + 0;
    ST32(s1+36, v0);
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989494;
L_08989494:;
    a1 = s1 + 52;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089894A0;
L_089894A0:;
    a1 = s1 + 64;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089894AC;
L_089894AC:;
    a1 = s1 + 76;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089894B8;
L_089894B8:;
    a1 = s1 + 88;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089894C4;
L_089894C4:;
    goto L_089893C8;
L_089894CC:;
    a0 = s0 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089894D8;
L_089894D8:;
    v0 = LD32(sp+4);
    a0 = s0 + 0;
    a1 = sp + 8;
    v0 = 0 < v0;
    ST8(s1+28, v0);
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089894F0;
L_089894F0:;
    v0 = LD32(sp+8);
    a0 = s0 + 0;
    a1 = sp + 8;
    ST32(s1+32, v0);
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989504;
L_08989504:;
    v0 = LD32(sp+8);
    a1 = s1 + 40;
    a0 = s0 + 0;
    ST32(s1+36, v0);
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989518;
L_08989518:;
    a1 = s1 + 52;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989524;
L_08989524:;
    a1 = s1 + 64;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989530;
L_08989530:;
    a1 = s1 + 76;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898953C;
L_0898953C:;
    a1 = s1 + 88;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989548;
L_08989548:;
    a0 = s0 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989554;
L_08989554:;
    v1 = LD32(sp+4);
    v1 = 0 < v1;
    ST8(s1+92, v1);
    goto L_089893C4;
}

/* 08989564 */
rv_t func_08989564(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08989564:;
    sp = sp - 32;
    v0 = 4;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    a3 = a0 + 0;
    if (cnd_) { goto L_0898960C; }
    goto L_0898957C;
L_0898957C:;
    v0 = (s32)v1 < 5;
    cnd_ = v0 == 0;
    v0 = 0x800c;
    if (cnd_) { goto L_089895E0; }
    goto L_08989588;
L_08989588:;
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD_U8(a0+28); goto L_089895A8; }
    goto L_08989594;
L_08989594:;
    a0 = a3 + 0;
    { rv_t r_ = func_08874198(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898959C;
L_0898959C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089895A8:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a0+4); goto L_089895B8; }
    goto L_089895B0;
L_089895B0:;
    v0 = 1;
    goto L_0898959C;
L_089895B8:;
    v0 = 1;
    ST8(a0+28, v0);
    a1 = sp + 0;
    v0 = 7;
    goto L_089895C8;
L_089895C8:;
    ST32(sp, v0);
    ST32(sp+4, v1);
    goto L_089895D0;
L_089895D0:;
    { u64 r_ = func_08989668(a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089895D8;
L_089895D8:;
    v0 = 1;
    goto L_0898959C;
L_089895E0:;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08989594; }
    goto L_089895E8;
L_089895E8:;
    v0 = LD32(a1+24);
    a2 = LD32(a0+4);
    a1 = sp + 0;
    v1 = LD32(v0+4);
    v0 = 9;
    ST32(sp, v0);
    ST32(a0+32, v1);
    ST32(sp+4, a2);
    goto L_089895D0;
L_0898960C:;
    v0 = LD_U8(a0+28);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 1; goto L_0898959C; }
    goto L_08989618;
L_08989618:;
    v1 = LD32(a0+4);
    ST8(a0+28, 0);
    a1 = sp + 0;
    v0 = 8;
    goto L_089895C8;
}

/* 0898962C */
rv_t func_0898962C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898962C:;
    sp = sp - 32;
    v0 = LD_U8(a0+28);
    cnd_ = v0 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_0898964C; }
    goto L_08989640;
L_08989640:;
    goto L_08989644;
L_08989644:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0898964C:;
    v1 = LD32(a0+4);
    v0 = 7;
    ST32(sp, v0);
    ST32(sp+4, v1);
    { u64 r_ = func_08989668(a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08989660;
L_08989660:;
    goto L_08989644;
}

/* 08989668 */
u64 func_08989668(u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08989668:;
    sp = sp - 48;
    a3 = D_08C2A508 - (-23288);
    v1 = a3 - 23288;
    s0 = a1 + 0;
    a0 = sp + 0;
    v0 = LD32(v1+8);
    a2 = LD32(v1+4);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    cnd_ = a2 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_089896FC; }
    goto L_089896B4;
L_089896B4:;
    a3 = LD32(a3-23288);
    goto L_089896B8;
L_089896B8:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089896EC; }
    goto L_089896D0;
L_089896D0:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_08989700; }
    goto L_089896E0;
L_089896E0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089896D0; }
    goto L_089896EC;
L_089896EC:;
    v0 = a1 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089896B8; }
    goto L_089896FC;
L_089896FC:;
    a0 = LD32(sp+8);
    goto L_08989700;
L_08989700:;
    cnd_ = a0 != 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_089897C4; }
    goto L_08989708;
L_08989708:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0898978C; }
    goto L_08989718;
L_08989718:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0898978C; }
    goto L_08989724;
L_08989724:;
    v0 = LD32(s1);
    goto L_08989728;
L_08989728:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0898977C; }
    goto L_0898973C;
L_0898973C:;
    v0 = LD_U8(s0+8);
    goto L_08989740;
L_08989740:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089897BC; }
    goto L_08989748;
L_08989748:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089897AC; }
    goto L_08989750;
L_08989750:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08989758;
L_08989758:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08989764;
L_08989764:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08989770;
L_08989770:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08989740; }
    goto L_08989778;
L_08989778:;
    v1 = LD32(s1+4);
    goto L_0898977C;
L_0898977C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08989728; }
    goto L_0898978C;
L_0898978C:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_089897AC:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08989758;
L_089897BC:;
    s0 = LD32(s0+4);
    goto L_08989770;
L_089897C4:;
    a0 = LD32(a0);
    goto L_089897C8;
L_089897C8:;
    a1 = s0 + 0;
    { rv_t r_ = func_0898EDBC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089897D0;
L_089897D0:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08AC1700(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089897DC;
L_089897DC:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    if (cnd_) { a0 = LD32(a0); goto L_089897C8; }
    goto L_089897E8;
L_089897E8:;
    s1 = LD32(sp);
    goto L_08989708;
}

/* 089897F0 */
rv_t func_089897F0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089897F0:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08989914; }
    goto L_08989824;
L_08989824:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEE5E4 - (-6684);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-6684));
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
    t0 = D_08C2A1D4 - (-24108);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2A1E4 - (-24092);
    a3 = D_08C2A1F4 - (-24076);
    v1 = t0 - 24108;
    a1 = v0 - 24092;
    a2 = a3 - 24076;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2A204 - (-24060);
    s0 = s3 - 24060;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-24092, FBITS(f5));
    v0 = 4;
    ST32(t0-24108, FBITS(f1));
    ST32(a3-24076, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089898DC;
L_089898DC:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-24060, v0);
    if (cnd_) { goto L_08989908; }
    goto L_089898EC;
L_089898EC:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089898F4;
L_089898F4:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089898F4; }
    goto L_08989908;
L_08989908:;
    v0 = s3 - 24060;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08989914;
L_08989914:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08989938; }
    goto L_08989928;
L_08989928:;
    v0 = D_08C2A204 - (-24060);
    a0 = LD32(v0-24060);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08989950; }
    goto L_08989938;
L_08989938:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08989950:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08989958;
L_08989958:;
    goto L_08989938;
}

/* 08989960 */
rv_t func_08989960(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08989960:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089897F0(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989974;
L_08989974:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08989980 */
rv_t func_08989980(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08989980:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089897F0(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989994;
L_08989994:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089899A0 */
void func_089899A0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089899A0:;
    sp = sp - 32;
    s3 = D_08C2A244 - (-23996);
    s2 = s3 - 23996;
    s1 = a0 + 0;
    func_0886A19C(a0, a1);
    goto L_089899C8;
L_089899C8:;
    v0 = 999;
    ST32(s1+80, v0);
    v0 = 1;
    a0 = 12;
    ST32(s1+88, v0);
    v0 = D_08AF9F40 - (-24768);
    v0 = v0 - 24768;
    ST32(s1+84, 0);
    ST32(s1, v0);
    v0 = (u32)-32733;
    v1 = LD32(s2+4);
    s0 = LD32(s1+4);
    ST16(s1+8, v0);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989A08;
L_08989A08:;
    a0 = LD32(s3-23996);
    s0 = s0 << 2;
    v1 = LD32(s2+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    ST32(v0, s1);
    a0 = s2 + 16;
    v1 = v1 + 1;
    ST32(v0+4, a1);
    a1 = s1 + 0;
    ST32(s0, v0);
    ST8(v0+8, 0);
    ST32(s2+12, v1);
    func_08AC1DD0(a0, a1, 0, 0, 0);
    goto L_08989A40;
L_08989A40:;
    sp = sp + 32;
    return;
}

/* 08989A5C */
rv_t func_08989A5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08989A5C:;
    v0 = D_08AF9F40 - (-24768);
    sp = sp - 16;
    v0 = v0 - 24768;
    s0 = D_08C2A244 - (-23996);
    s0 = s0 - 23996;
    ST32(a0, v0);
    s1 = a0 + 0;
    a1 = s1 + 0;
    a0 = s0 + 0;
    s0 = s0 + 16;
    { u64 r_ = func_08AC1EB8(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08989A94;
L_08989A94:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = 1;
    func_08AC1C80(a0, a1, 0, 0, 0);
    goto L_08989AA4;
L_08989AA4:;
    v0 = LD32(s1+28);
    a0 = D_08C2A260 - (-23968);
    a0 = a0 - 23968;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08989AD8; }
    goto L_08989ABC;
L_08989ABC:;
    a0 = s1 + 0;
    { u64 r_ = func_0886A2F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08989AC4;
L_08989AC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08989AD8:;
    { u64 r_ = func_08AC1EB8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08989AE0;
L_08989AE0:;
    goto L_08989ABC;
}

/* 08989AE8 */
rv_t func_08989AE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08989AE8:;
    v0 = D_08AF9F40 - (-24768);
    sp = sp - 16;
    v0 = v0 - 24768;
    s0 = D_08C2A244 - (-23996);
    s0 = s0 - 23996;
    ST32(a0, v0);
    s1 = a0 + 0;
    a1 = s1 + 0;
    a0 = s0 + 0;
    s0 = s0 + 16;
    { u64 r_ = func_08AC1EB8(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08989B20;
L_08989B20:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = 1;
    func_08AC1C80(a0, a1, 0, 0, 0);
    goto L_08989B30;
L_08989B30:;
    v0 = LD32(s1+28);
    a0 = D_08C2A260 - (-23968);
    a0 = a0 - 23968;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08989B6C; }
    goto L_08989B48;
L_08989B48:;
    a0 = s1 + 0;
    { u64 r_ = func_0886A2F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08989B50;
L_08989B50:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08989B58;
L_08989B58:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08989B6C:;
    { u64 r_ = func_08AC1EB8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08989B74;
L_08989B74:;
    goto L_08989B48;
}

/* 08989B7C */
rv_t func_08989B7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08989B7C:;
    sp = sp - 32;
    s2 = D_08C2A260 - (-23968);
    s1 = s2 - 23968;
    s3 = a0 + 0;
    { rv_t r_ = func_0886A108(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989BA4;
L_08989BA4:;
    a0 = 12;
    v0 = LD32(s1+4);
    s0 = LD32(s3+4);
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989BBC;
L_08989BBC:;
    a0 = LD32(s2-23968);
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
    return (rv_t){ v0, v1, f0 };
}

/* 08989C04 */
rv_t func_08989C04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08989C04:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0886A130(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989C18;
L_08989C18:;
    a0 = D_08C2A260 - (-23968);
    a1 = s0 + 0;
    a0 = a0 - 23968;
    { u64 r_ = func_08AC1EB8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08989C28;
L_08989C28:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08989C38 */
rv_t func_08989C38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08989C38:;
    sp = sp - 16;
    a1 = 1;
    { rv_t r_ = func_08874390(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989C48;
L_08989C48:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08989C54 */
rv_t func_08989C54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08989C54:;
    sp = sp - 16;
    { rv_t r_ = func_08869FCC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989C64;
L_08989C64:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08989C70 */
void func_08989C70(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08989C70:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 92;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989C94;
L_08989C94:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_089899A0(a0, a1);
    goto L_08989CA4;
L_08989CA4:;
    a0 = s2 + 0;
    cnd_ = s2 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08989CC8; }
    goto L_08989CB0;
L_08989CB0:;
    goto L_08989CB4;
L_08989CB4:;
    sp = sp + 16;
    return;
L_08989CC8:;
    v0 = LD32(s2);
    v1 = LD32(v0+44);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989CD8;
L_08989CD8:;
    goto L_08989CB4;
}

/* 08989CE0 */
rv_t func_08989CE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08989CE0:;
    sp = sp - 48;
    s3 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_0886A474(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989D04;
L_08989D04:;
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_08989D0C;
L_08989D0C:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08989D0C; }
    goto L_08989D30;
L_08989D30:;
    a1 = s3 + 80;
    a2 = 0 + 0;
    goto L_08989D38;
L_08989D38:;
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
    if (cnd_) { goto L_08989D38; }
    goto L_08989D60;
L_08989D60:;
    a1 = s3 + 84;
    a2 = 0 + 0;
    goto L_08989D68;
L_08989D68:;
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
    if (cnd_) { goto L_08989D68; }
    goto L_08989D90;
L_08989D90:;
    a1 = s3 + 88;
    a2 = 0 + 0;
    goto L_08989D98;
L_08989D98:;
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
    if (cnd_) { goto L_08989D98; }
    goto L_08989DC0;
L_08989DC0:;
    v0 = LD32(s3+28);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s2 = D_08C2A260 - (-23968);
    if (cnd_) { goto L_08989DEC; }
    goto L_08989DD0;
L_08989DD0:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08989DEC:;
    s1 = s2 - 23968;
    v0 = LD32(s1+4);
    s0 = LD32(s3+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989E08;
L_08989E08:;
    a0 = LD32(s2-23968);
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
    goto L_08989DD0;
}

/* 08989E38 */
rv_t func_08989E38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08989E38:;
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_0886A67C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989E54;
L_08989E54:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989E60;
L_08989E60:;
    a1 = LD32(s1+80);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989E6C;
L_08989E6C:;
    a1 = LD32(s1+84);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989E78;
L_08989E78:;
    a1 = LD32(s1+88);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989E84;
L_08989E84:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08989E98 */
rv_t func_08989E98(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08989E98:;
    sp = sp - 32;
    s3 = a0 ^ 0x1;
    v1 = s3 < 0x1u;
    s1 = a1 ^ 0xffff;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s4 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08989FD0; }
    goto L_08989ED0;
L_08989ED0:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEE5E8 - (-6680);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-6680));
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
    t0 = D_08C2A214 - (-24044);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2A224 - (-24028);
    a3 = D_08C2A234 - (-24012);
    s0 = D_08C2A244 - (-23996);
    a1 = v0 - 24028;
    v1 = t0 - 24044;
    a2 = a3 - 24012;
    f1 = f1 * f3;
    s2 = s0 - 23996;
    ST32(v0-24028, FBITS(f5));
    v0 = 16;
    a0 = 64;
    ST32(a2+12, FBITS(f2));
    ST32(v1+4, FBITS(f4));
    ST32(v1+8, FBITS(f5));
    ST32(a1+4, FBITS(f6));
    ST32(a1+8, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(s2+4, v0);
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(t0-24044, FBITS(f1));
    ST32(a3-24012, FBITS(f2));
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08989F88;
L_08989F88:;
    a1 = 0 + 0;
    a0 = LD32(s2+4);
    cnd_ = a0 == 0;
    ST32(s0-23996, v0);
    if (cnd_) { goto L_08989FB0; }
    goto L_08989F98;
L_08989F98:;
    v1 = v0 + 0;
    goto L_08989F9C;
L_08989F9C:;
    a1 = a1 + 1;
    v0 = a1 < a0;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08989F9C; }
    goto L_08989FB0;
L_08989FB0:;
    v0 = s0 - 23996;
    v1 = v0 + 16;
    ST32(s2+8, 0);
    ST32(v0+16, 0);
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    ST32(s2+12, 0);
    v1 = s3 < 0x1u;
    goto L_08989FD0;
L_08989FD0:;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    s2 = D_08C2A260 - (-23968);
    if (cnd_) { goto L_0898A060; }
    goto L_08989FE0;
L_08989FE0:;
    s0 = s4 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & s0;
    cnd_ = v0 == 0;
    v0 = s1 < 0x1u;
    if (cnd_) { goto L_0898A008; }
    goto L_08989FF4;
L_08989FF4:;
    v0 = D_08C2A260 - (-23968);
    a0 = LD32(v0-23968);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898A050; }
    goto L_0898A004;
L_0898A004:;
    v0 = s1 < 0x1u;
    goto L_0898A008;
L_0898A008:;
    v0 = v0 & s0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0898A024; }
    goto L_0898A014;
L_0898A014:;
    v0 = D_08C2A244 - (-23996);
    a0 = LD32(v0-23996);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898A040; }
    goto L_0898A024;
L_0898A024:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0898A040:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898A048;
L_0898A048:;
    goto L_0898A024;
L_0898A050:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898A058;
L_0898A058:;
    v0 = s1 < 0x1u;
    goto L_0898A008;
L_0898A060:;
    s0 = s2 - 23968;
    v0 = 8;
    ST32(s0+4, v0);
    a0 = 32;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A074;
L_0898A074:;
    v1 = LD32(s0+4);
    a0 = 0 + 0;
    cnd_ = v1 == 0;
    ST32(s2-23968, v0);
    if (cnd_) { goto L_0898A0A0; }
    goto L_0898A084;
L_0898A084:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_0898A08C;
L_0898A08C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898A08C; }
    goto L_0898A0A0;
L_0898A0A0:;
    v0 = s2 - 23968;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08989FE0;
}

/* 0898A0B0 */
rv_t func_0898A0B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898A0B0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08989E98(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A0C4;
L_0898A0C4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898A0D0 */
rv_t func_0898A0D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898A0D0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08989E98(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A0E4;
L_0898A0E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898A0F0 */
void func_0898A0F0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898A0F0:;
    sp = sp - 32;
    s3 = D_08C2A270 - (-23952);
    s2 = s3 - 23952;
    s1 = a0 + 0;
    func_08873E94(a0, a1);
    goto L_0898A118;
L_0898A118:;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v0+23196));
    v0 = s1 + 28;
    ST32(v0+4, FBITS(f1));
    a0 = s1 + 0;
    ST32(v0+8, FBITS(f0));
    v0 = D_08AF9FA8 - (-24664);
    v0 = v0 - 24664;
    ST32(s1, v0);
    v0 = D_08AEE5F0 - (-6672);
    f0 = BITSF(LD32(v0-6672));
    v0 = (u32)-32750;
    ST32(s1+28, FBITS(f2));
    ST32(s1+40, FBITS(f0));
    ST16(s1+8, v0);
    ST32(s1+44, 0);
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898A168;
L_0898A168:;
    a0 = s1 + 0;
    a1 = 1;
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A174;
L_0898A174:;
    v0 = LD32(s2+4);
    s0 = LD32(s1+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A18C;
L_0898A18C:;
    a0 = LD32(s3-23952);
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

/* 0898A1D4 */
rv_t func_0898A1D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898A1D4:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = D_08AF9FA8 - (-24664);
    v0 = v0 - 24664;
    a0 = LD32(a0+44);
    cnd_ = a0 == 0;
    ST32(s1, v0);
    if (cnd_) { goto L_0898A20C; }
    goto L_0898A1FC;
L_0898A1FC:;
    s0 = LD32(a0+8);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898A204;
L_0898A204:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0898A1FC; }
    goto L_0898A20C;
L_0898A20C:;
    a0 = D_08C2A270 - (-23952);
    a1 = s1 + 0;
    a0 = a0 - 23952;
    func_08AC1F70(a0, a1, t1, t2, t3);
    goto L_0898A21C;
L_0898A21C:;
    a0 = s1 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898A224;
L_0898A224:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898A238 */
rv_t func_0898A238(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898A238:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = D_08AF9FA8 - (-24664);
    v0 = v0 - 24664;
    a0 = LD32(a0+44);
    cnd_ = a0 == 0;
    ST32(s1, v0);
    if (cnd_) { goto L_0898A270; }
    goto L_0898A260;
L_0898A260:;
    s0 = LD32(a0+8);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898A268;
L_0898A268:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0898A260; }
    goto L_0898A270;
L_0898A270:;
    a0 = D_08C2A270 - (-23952);
    a1 = s1 + 0;
    a0 = a0 - 23952;
    func_08AC1F70(a0, a1, t1, t2, t3);
    goto L_0898A280;
L_0898A280:;
    a0 = s1 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898A288;
L_0898A288:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898A290;
L_0898A290:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898A2A4 */
rv_t func_0898A2A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898A2A4:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 0 + 0;
    s2 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A2CC;
L_0898A2CC:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_088750A8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A2D8;
L_0898A2D8:;
    a1 = s2 + 28;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A2E4;
L_0898A2E4:;
    f12 = BITSF(LD32(s2+40));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A2F0;
L_0898A2F0:;
    s0 = LD32(s2+44);
    cnd_ = s0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0898A308; }
    goto L_0898A2FC;
L_0898A2FC:;
    s0 = LD32(s0+8);
    cnd_ = s0 != 0;
    a1 = a1 + 1;
    if (cnd_) { goto L_0898A2FC; }
    goto L_0898A308;
L_0898A308:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A310;
L_0898A310:;
    s0 = LD32(s2+44);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_0898A34C; }
    goto L_0898A31C;
L_0898A31C:;
    a1 = LD32(s0+4);
    goto L_0898A320;
L_0898A320:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A328;
L_0898A328:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A33C;
L_0898A33C:;
    s0 = LD32(s0+8);
    cnd_ = s0 != 0;
    if (cnd_) { a1 = LD32(s0+4); goto L_0898A320; }
    goto L_0898A348;
L_0898A348:;
    goto L_0898A34C;
L_0898A34C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898A360 */
rv_t func_0898A360(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0898A360:;
    sp = sp - 80;
    s1 = a1 + 0;
    a1 = sp + 0;
    s2 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A3A0;
L_0898A3A0:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08874FD8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A3AC;
L_0898A3AC:;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = s2 + 28; goto L_0898A3E8; }
    goto L_0898A3B8;
L_0898A3B8:;
    goto L_0898A3BC;
L_0898A3BC:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_0898A3E8:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A3F0;
L_0898A3F0:;
    a1 = s2 + 40;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A3FC;
L_0898A3FC:;
    a0 = s1 + 0;
    a1 = sp + 4;
    ST32(sp+4, 0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A40C;
L_0898A40C:;
    v0 = LD32(sp+4);
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0898A3B8; }
    goto L_0898A418;
L_0898A418:;
    v0 = D_08AEE5F4 - (-6668);
    f20 = BITSF(LD32(v0-6668));
    s6 = D_08B45A9C - (23196);
    v0 = D_08AF9ED8 - (-24872);
    s7 = v0 - 24872;
    s4 = 1;
    s5 = s6 + 23196;
    goto L_0898A434;
L_0898A434:;
    a0 = s1 + 0;
    a1 = sp + 8;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A440;
L_0898A440:;
    v0 = LD32(sp+8);
    a0 = 28;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0898A4AC; }
    goto L_0898A450;
L_0898A450:;
    cnd_ = v0 == s4;
    a0 = 52;
    if (cnd_) { goto L_0898A490; }
    goto L_0898A458;
L_0898A458:;
    v1 = LD32(s0);
    goto L_0898A45C;
L_0898A45C:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = LD32(v1+4);
    t_ = v0;
    s3 = s3 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A470;
L_0898A470:;
    v0 = LD32(sp+4);
    v1 = LD32(s2+44);
    v0 = s3 < v0;
    ST32(s0+8, v1);
    cnd_ = v0 != 0;
    ST32(s2+44, s0);
    if (cnd_) { goto L_0898A434; }
    goto L_0898A488;
L_0898A488:;
    goto L_0898A3BC;
L_0898A490:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A498;
L_0898A498:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_08988A5C(a0);
    goto L_0898A4A4;
L_0898A4A4:;
    v1 = LD32(s0);
    goto L_0898A45C;
L_0898A4AC:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A4B4;
L_0898A4B4:;
    f2 = BITSF(LD32(s6+23196));
    f1 = BITSF(LD32(s5+4));
    f0 = BITSF(LD32(s5+8));
    v1 = v0 + 12;
    s0 = v0 + 0;
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(v0+12, FBITS(f2));
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    ST32(v0, s7);
    ST32(v0+24, FBITS(f20));
    goto L_0898A458;
}

/* 0898A4E8 */
void func_0898A4E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_0898A4E8:;
    sp = sp - 112;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    s3 = a3 + 0;
    s2 = a1 + 0;
    s0 = a2 + 0;
    f22 = f12;
    f1 = BITSF(LD32(v0+23196));
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    s1 = LD32(a0+44);
    v0 = D_08AEE5F8 - (-6664);
    ST32(a2, FBITS(f1));
    ST32(a2+4, FBITS(f0));
    ST32(a2+8, FBITS(f2));
    f21 = BITSF(LD32(v0-6664));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    cnd_ = s1 == 0;
    ST32(sp+32, 0);
    if (cnd_) { goto L_0898A608; }
    goto L_0898A560;
L_0898A560:;
    v0 = D_08AEE5FC - (-6660);
    f20 = BITSF(LD32(v0-6660));
    f23 = BITSF(LD32(sp+32));
    v0 = LD32(s1);
    goto L_0898A570;
L_0898A570:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    v1 = LD32(v0+8);
    a2 = sp + 0;
    t_ = v1;
    a3 = sp + 32;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A588;
L_0898A588:;
    f0 = f20 / f22;
    f6 = BITSF(LD32(sp+32));
    f3 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f0 = f6 * f0;
    f4 = f20 - f0;
    fcc = FCMP(f23, f4, 14);
    cnd_ = fcc;
    f5 = BITSF(LD32(sp+8));
    if (cnd_) { goto L_0898A5B4; }
    goto L_0898A5B0;
L_0898A5B0:;
    f4 = f23;
    goto L_0898A5B4;
L_0898A5B4:;
    f5 = f5 * f4;
    f3 = f3 * f4;
    f4 = f1 * f4;
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = f0 + f3;
    f1 = f1 + f4;
    f2 = f2 + f5;
    fcc = FCMP(f6, f21, 12);
    ST32(s0, FBITS(f0));
    ST32(s0+4, FBITS(f1));
    ST32(s0+8, FBITS(f2));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f5));
    if (cnd_) { goto L_0898A5FC; }
    goto L_0898A5F8;
L_0898A5F8:;
    f21 = f6;
    goto L_0898A5FC;
L_0898A5FC:;
    s1 = LD32(s1+8);
    cnd_ = s1 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0898A570; }
    goto L_0898A608;
L_0898A608:;
    v0 = LD32(s0);
    {u32 a_=sp+(48);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(s0+4);
    {v[12]=BITSF(v0);}
    f1 = BITSF(0);
    v0 = LD32(s0+8);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { ST32(s3, FBITS(f21)); goto L_0898A684; }
    goto L_0898A644;
L_0898A644:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(s0+8, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    ST32(s0, FBITS(f2));
    ST32(s0+4, v0);
    ST32(s3, FBITS(f21));
    goto L_0898A684;
L_0898A684:;
    sp = sp + 112;
    return;
}

/* 0898A6B0 */
u32 func_0898A6B0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_0898A6B0:;
    v1 = LD32(a0+44);
    v0 = a1 + 0;
    ST32(a1+8, v1);
    ST32(a0+44, a1);
    return v0;
}

/* 0898A6C4 */
u32 func_0898A6C4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0898A6C4:;
    v1 = LD32(a0+44);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0898A6E4; }
    goto L_0898A6D0;
L_0898A6D0:;
    cnd_ = v1 == a1;
    v0 = v1 + 0;
    if (cnd_) { goto L_0898A6E4; }
    goto L_0898A6D8;
L_0898A6D8:;
    v1 = LD32(v1+8);
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0898A6D0; }
    goto L_0898A6E4;
L_0898A6E4:;
    return v0;
}

/* 0898A6EC */
u32 func_0898A6EC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_0898A6EC:;
    v1 = LD32(a0+44);
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0898A710; }
    goto L_0898A6F8;
L_0898A6F8:;
    cnd_ = v1 == a1;
    if (cnd_) { goto L_0898A718; }
    goto L_0898A700;
L_0898A700:;
    a2 = v1 + 0;
    v1 = LD32(v1+8);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_0898A6F8; }
    goto L_0898A710;
L_0898A710:;
    v0 = 0 + 0;
    return v0;
L_0898A718:;
    cnd_ = a2 == 0;
    v0 = LD32(v1+8);
    if (cnd_) { goto L_0898A72C; }
    goto L_0898A720;
L_0898A720:;
    ST32(a2+8, v0);
    goto L_0898A724;
L_0898A724:;
    v0 = v1 + 0;
    return v0;
L_0898A72C:;
    ST32(a0+44, v0);
    goto L_0898A724;
}

/* 0898A734 */
rv_t func_0898A734(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898A734:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0898A7B4; }
    goto L_0898A768;
L_0898A768:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0898A78C; }
    goto L_0898A77C;
L_0898A77C:;
    v0 = D_08C2A270 - (-23952);
    a0 = LD32(v0-23952);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898A7A4; }
    goto L_0898A78C;
L_0898A78C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0898A7A4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898A7AC;
L_0898A7AC:;
    goto L_0898A78C;
L_0898A7B4:;
    s3 = D_08C2A270 - (-23952);
    s0 = s3 - 23952;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A7CC;
L_0898A7CC:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-23952, v0);
    if (cnd_) { goto L_0898A7F8; }
    goto L_0898A7DC;
L_0898A7DC:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_0898A7E4;
L_0898A7E4:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898A7E4; }
    goto L_0898A7F8;
L_0898A7F8:;
    v0 = s3 - 23952;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_0898A768;
}

/* 0898A808 */
rv_t func_0898A808(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898A808:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0898A734(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A81C;
L_0898A81C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898A828 */
rv_t func_0898A828(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898A828:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0898A734(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A83C;
L_0898A83C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898A848 */
void func_0898A848(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898A848:;
    sp = sp - 32;
    s3 = a0 + 0;
    func_08873E94(a0, a1);
    goto L_0898A868;
L_0898A868:;
    v0 = D_08AF9FF8 - (-24584);
    v0 = v0 - 24584;
    ST32(s3, v0);
    v0 = (u32)-32756;
    a0 = 0 + 0;
    ST16(s3+8, v0);
    a1 = 999;
    v1 = s3 + 32;
    ST32(s3+28, 0);
    ST8(s3+80, 0);
    ST32(s3+72, 0);
    goto L_0898A894;
L_0898A894:;
    a0 = a0 + 1;
    v0 = a0 < 0xau;
    ST32(v1, a1);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898A894; }
    goto L_0898A8A8;
L_0898A8A8:;
    ST32(s3+88, 0);
    a0 = 0 + 0;
    a2 = 999;
    ST32(s3+92, 0);
    a1 = 16;
    v1 = s3 + 0;
    goto L_0898A8C0;
L_0898A8C0:;
    a0 = a0 + 1;
    v0 = a0 < 0x8u;
    ST32(v1+96, a2);
    ST32(v1+128, a1);
    ST32(v1+160, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898A8C0; }
    goto L_0898A8DC;
L_0898A8DC:;
    s2 = D_08C2A330 - (-23760);
    s1 = s2 - 23760;
    v0 = LD32(s1+4);
    s0 = LD32(s3+4);
    ST8(s3+81, 0);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A900;
L_0898A900:;
    a0 = LD32(s2-23760);
    s0 = s0 << 2;
    v1 = LD32(s1+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    ST32(v0, s3);
    v1 = v1 + 1;
    a0 = s3 + 0;
    ST32(v0+4, a1);
    ST8(v0+8, 0);
    ST32(s0, v0);
    ST32(s1+12, v1);
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898A934;
L_0898A934:;
    v0 = D_08B20494 - (1172);
    v0 = v0 + 1172;
    v1 = LD_U8(v0+8);
    cnd_ = v1 == 0;
    if (cnd_) { a0 = LD32(s3+28); goto L_0898A958; }
    goto L_0898A948;
L_0898A948:;
    v0 = LD_U16(v0+10);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0898A990; }
    goto L_0898A954;
L_0898A954:;
    a0 = LD32(s3+28);
    goto L_0898A958;
L_0898A958:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0898A97C; }
    goto L_0898A960;
L_0898A960:;
    goto L_0898A964;
L_0898A964:;
    sp = sp + 32;
    return;
L_0898A97C:;
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A988;
L_0898A988:;
    goto L_0898A964;
L_0898A990:;
    a0 = 52;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898A998;
L_0898A998:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s3 + 0;
    { u64 r_ = func_08955C18(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898A9A8;
L_0898A9A8:;
    ST32(s3+28, s0);
    goto L_0898A954;
}

/* 0898A9B0 */
rv_t func_0898A9B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898A9B0:;
    sp = sp - 16;
    v0 = D_08AF9FF8 - (-24584);
    s0 = a0 + 0;
    v0 = v0 - 24584;
    v1 = LD32(a0+28);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0898AA00; }
    goto L_0898A9D8;
L_0898A9D8:;
    a0 = D_08C2A330 - (-23760);
    goto L_0898A9DC;
L_0898A9DC:;
    a1 = s0 + 0;
    a0 = a0 - 23760;
    func_08AC2018(a0, a1, t1, t2, t3);
    goto L_0898A9E8;
L_0898A9E8:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898A9F0;
L_0898A9F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0898AA00:;
    v0 = LD32(v1);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898AA10;
L_0898AA10:;
    v1 = LD32(s0+28);
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0898A9D8; }
    goto L_0898AA1C;
L_0898AA1C:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898AA2C;
L_0898AA2C:;
    a0 = D_08C2A330 - (-23760);
    goto L_0898A9DC;
}

/* 0898AA34 */
rv_t func_0898AA34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898AA34:;
    sp = sp - 16;
    v0 = D_08AF9FF8 - (-24584);
    s0 = a0 + 0;
    v0 = v0 - 24584;
    v1 = LD32(a0+28);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0898AA8C; }
    goto L_0898AA5C;
L_0898AA5C:;
    a0 = D_08C2A330 - (-23760);
    goto L_0898AA60;
L_0898AA60:;
    a1 = s0 + 0;
    a0 = a0 - 23760;
    func_08AC2018(a0, a1, t1, t2, t3);
    goto L_0898AA6C;
L_0898AA6C:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898AA74;
L_0898AA74:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898AA7C;
L_0898AA7C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0898AA8C:;
    v0 = LD32(v1);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898AA9C;
L_0898AA9C:;
    v1 = LD32(s0+28);
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0898AA5C; }
    goto L_0898AAA8;
L_0898AAA8:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898AAB8;
L_0898AAB8:;
    a0 = D_08C2A330 - (-23760);
    goto L_0898AA60;
}

/* 0898AAC0 */
rv_t func_0898AAC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898AAC0:;
    sp = sp - 16;
    v0 = LD_U8(a0+80);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0898AAE4; }
    goto L_0898AAD8;
L_0898AAD8:;
    v0 = LD32(a0+28);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0898AAFC; }
    goto L_0898AAE4;
L_0898AAE4:;
    a0 = s0 + 0;
    { rv_t r_ = func_0898AB10(a0, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898AAEC;
L_0898AAEC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0898AAFC:;
    func_08955D74(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0898AB04;
L_0898AB04:;
    v0 = 1;
    ST8(s0+80, v0);
    goto L_0898AAE4;
}

/* 0898AB10 */
rv_t func_0898AB10(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898AB10:;
    sp = sp - 16;
    a1 = D_08C28F60 - (-28832);
    v0 = 5;
    v1 = LD32(a1-28832);
    cnd_ = v1 == v0;
    a2 = a0 + 0;
    if (cnd_) { goto L_0898ABDC; }
    goto L_0898AB2C;
L_0898AB2C:;
    v1 = LD32(a1-28832);
    goto L_0898AB30;
L_0898AB30:;
    v0 = 5;
    cnd_ = v1 == v0;
    v0 = D_08C29324 - (-27868);
    if (cnd_) { goto L_0898ABC8; }
    goto L_0898AB3C;
L_0898AB3C:;
    v0 = LD32(a1-28832);
    goto L_0898AB40;
L_0898AB40:;
    cnd_ = v0 != 0;
    v1 = LD32(a1-28832);
    if (cnd_) { goto L_0898AB70; }
    goto L_0898AB48;
L_0898AB48:;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 != 0;
    v0 = LD32(a1-28832);
    if (cnd_) { goto L_0898ABB8; }
    goto L_0898AB58;
L_0898AB58:;
    cnd_ = v0 != 0;
    v1 = LD32(a1-28832);
    if (cnd_) { goto L_0898AB70; }
    goto L_0898AB60;
L_0898AB60:;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 == 0;
    v1 = LD32(a1-28832);
    if (cnd_) { goto L_0898ABA8; }
    goto L_0898AB70;
L_0898AB70:;
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = 2;
    if (cnd_) { goto L_0898AB98; }
    goto L_0898AB7C;
L_0898AB7C:;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_0898AB98; }
    goto L_0898AB84;
L_0898AB84:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0898AB98; }
    goto L_0898AB8C;
L_0898AB8C:;
    goto L_0898AB90;
L_0898AB90:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0898AB98:;
    a0 = a2 + 0;
    { rv_t r_ = func_0898B644(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898ABA0;
L_0898ABA0:;
    goto L_0898AB90;
L_0898ABA8:;
    a0 = a2 + 0;
    { rv_t r_ = func_0898ABFC(a0, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898ABB0;
L_0898ABB0:;
    goto L_0898AB90;
L_0898ABB8:;
    a0 = a2 + 0;
    { rv_t r_ = func_0898AFA0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898ABC0;
L_0898ABC0:;
    goto L_0898AB90;
L_0898ABC8:;
    v1 = LD_U8(v0-27868);
    cnd_ = v1 != 0;
    v0 = LD32(a1-28832);
    if (cnd_) { goto L_0898AB40; }
    goto L_0898ABD4;
L_0898ABD4:;
    goto L_0898ABB8;
L_0898ABDC:;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 != 0;
    v1 = LD32(a1-28832);
    if (cnd_) { goto L_0898AB30; }
    goto L_0898ABEC;
L_0898ABEC:;
    { rv_t r_ = func_0898B210(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898ABF4;
L_0898ABF4:;
    goto L_0898AB90;
}

/* 0898ABFC */
rv_t func_0898ABFC(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_0898ABFC:;
    sp = sp - 96;
    s7 = D_08C25390 - (21392);
    v0 = LD32(s7+21392);
    s5 = 0 + 0;
    s1 = a0 + 0;
    ST32(a0+88, 0);
    cnd_ = v0 == 0;
    ST32(a0+92, 0);
    if (cnd_) { goto L_0898AD34; }
    goto L_0898AC50;
L_0898AC50:;
    v0 = D_08AEE604 - (-6652);
    v1 = D_08AEE608 - (-6648);
    f21 = BITSF(LD32(v0-6652));
    f22 = BITSF(LD32(v1-6648));
    v1 = D_08B1B510 - (-19184);
    fp = D_08C2BA28 - (-17880);
    s3 = v1 - 19184;
    s6 = 999;
    s2 = a0 + 0;
    goto L_0898AC74;
L_0898AC74:;
    a2 = LD32(s3);
    f20 = BITSF(0);
    cnd_ = a2 == s6;
    v1 = D_08C2BA28 - (-17880);
    if (cnd_) { goto L_0898ACF0; }
    goto L_0898AC84;
L_0898AC84:;
    v1 = v1 - 17880;
    v0 = LD32(v1+4);
    v1 = LD32(fp-17880);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0898ACD8; }
    goto L_0898ACAC;
L_0898ACAC:;
    a0 = LD32(a1);
    goto L_0898ACB0;
L_0898ACB0:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0898AF80; }
    goto L_0898ACC8;
L_0898ACC8:;
    a1 = LD32(a1+4);
    goto L_0898ACCC;
L_0898ACCC:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0898ACB0; }
    goto L_0898ACD4;
L_0898ACD4:;
    a3 = 0 + 0;
    goto L_0898ACD8;
L_0898ACD8:;
    cnd_ = a3 == 0;
    if (cnd_) { f0 = BITSF(LD32(s1+92)); goto L_0898ACF4; }
    goto L_0898ACE0;
L_0898ACE0:;
    v1 = LD32(a3+12);
    v0 = LD32(s1+76);
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD_U8(s1+84); goto L_0898AD70; }
    goto L_0898ACF0;
L_0898ACF0:;
    f0 = BITSF(LD32(s1+92));
    goto L_0898ACF4;
L_0898ACF4:;
    v0 = LD32(s3);
    a0 = LD32(s7+21392);
    v1 = LD32(s1+88);
    f0 = f0 + f20;
    s5 = s5 + 1;
    ST32(s2+96, v0);
    v1 = v1 + 1;
    v0 = 16;
    a0 = s5 < a0;
    ST32(s2+128, v0);
    s3 = s3 + 4;
    ST32(s2+160, FBITS(f20));
    s2 = s2 + 4;
    ST32(s1+92, FBITS(f0));
    cnd_ = a0 != 0;
    ST32(s1+88, v1);
    if (cnd_) { goto L_0898AC74; }
    goto L_0898AD34;
L_0898AD34:;
    sp = sp + 96;
    { v[0]=vr0;return (rv_t){ v0, v1, f0 }; }
L_0898AD70:;
    v0 = (u32)((s32)v0 >> (s5 & 31));
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = D_08C2932D - (-27859);
    if (cnd_) { goto L_0898ADC8; }
    goto L_0898AD80;
L_0898AD80:;
    v1 = D_08C25394 - (21396);
    v1 = v1 + 21396;
    v0 = s5 + v1;
    a0 = LD_U8(v0);
    v1 = LD_U8(s1+83);
    v0 = D_08AEE600 - (-6656);
    f0 = BITSF(LD32(v0-6656));
    a0 = a0 & v1;
    v1 = 0 + 0;
    v0 = (u32)((s32)a0 >> (v1 & 31));
    goto L_0898ADA8;
L_0898ADA8:;
    v0 = v0 & 0x1;
    v1 = v1 + 1;
    cnd_ = v0 == 0;
    a1 = v1 < 0x8u;
    if (cnd_) { goto L_0898ADBC; }
    goto L_0898ADB8;
L_0898ADB8:;
    f20 = f20 + f0;
    goto L_0898ADBC;
L_0898ADBC:;
    cnd_ = a1 != 0;
    v0 = (u32)((s32)a0 >> (v1 & 31));
    if (cnd_) { goto L_0898ADA8; }
    goto L_0898ADC4;
L_0898ADC4:;
    v0 = D_08C2932D - (-27859);
    goto L_0898ADC8;
L_0898ADC8:;
    v1 = LD_U8(v0-27859);
    cnd_ = v1 != 0;
    if (cnd_) { f0 = BITSF(LD32(s1+92)); goto L_0898ACF4; }
    goto L_0898ADD4;
L_0898ADD4:;
    v1 = D_08C2A08C - (-24436);
    v0 = v1 - 24436;
    v1 = LD32(v0+4);
    v0 = D_08C2A08C - (-24436);
    a0 = LD32(v0-24436);
    v1 = v1 - 1;
    v1 = v1 & 0x3e8;
    v1 = v1 << 2;
    v1 = v1 + a0;
    v1 = LD32(v1);
    cnd_ = v1 == 0;
    a1 = 1000;
    if (cnd_) { goto L_0898AE20; }
    goto L_0898AE04;
L_0898AE04:;
    a0 = LD32(v1);
    goto L_0898AE08;
L_0898AE08:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(a0+16); goto L_0898AF60; }
    goto L_0898AE14;
L_0898AE14:;
    v1 = LD32(v1+4);
    goto L_0898AE18;
L_0898AE18:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_0898AE08; }
    goto L_0898AE20;
L_0898AE20:;
    a0 = 0 + 0;
    goto L_0898AE24;
L_0898AE24:;
    cnd_ = a0 == 0;
    v1 = D_08C2A880 - (-22400);
    if (cnd_) { goto L_0898ACF0; }
    goto L_0898AE2C;
L_0898AE2C:;
    a2 = LD32(a0+28);
    cnd_ = a2 == s6;
    v0 = v1 - 22400;
    if (cnd_) { goto L_0898ACF0; }
    goto L_0898AE38;
L_0898AE38:;
    v0 = LD32(v0+4);
    v1 = LD32(v1-22400);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_0898AE88; }
    goto L_0898AE5C;
L_0898AE5C:;
    a0 = LD32(a1);
    goto L_0898AE60;
L_0898AE60:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0898AF40; }
    goto L_0898AE78;
L_0898AE78:;
    a1 = LD32(a1+4);
    goto L_0898AE7C;
L_0898AE7C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0898AE60; }
    goto L_0898AE84;
L_0898AE84:;
    s4 = 0 + 0;
    goto L_0898AE88;
L_0898AE88:;
    cnd_ = s4 == 0;
    if (cnd_) { f0 = BITSF(LD32(s1+92)); goto L_0898ACF4; }
    goto L_0898AE90;
L_0898AE90:;
    v0 = LD32(a3);
    a0 = LD32(v0-12);
    a0 = a3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898AEAC;
L_0898AEAC:;
    s0 = v0 + 0;
    v0 = LD32(s4);
    a0 = LD32(v0-12);
    a0 = s4 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898AECC;
L_0898AECC:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f1 = f1 - f2;
    f0 = f0 - f3;
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+8, FBITS(f4));
    v1 = FBITS(f1);
    v0 = FBITS(f0);
    {vr0=BITSF(v1);}
    v1 = FBITS(f4);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f21, 12);
    cnd_ = fcc;
    if (cnd_) { f20 = f20 + f22; goto L_0898ACF0; }
    goto L_0898AF38;
L_0898AF38:;
    f0 = BITSF(LD32(s1+92));
    goto L_0898ACF4;
L_0898AF40:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s4 = a0 + 0;
    if (cnd_) { goto L_0898AE78; }
    goto L_0898AF4C;
L_0898AF4C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0898AE7C; }
    goto L_0898AF58;
L_0898AF58:;
    goto L_0898AE88;
L_0898AF60:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_0898AE18; }
    goto L_0898AF6C;
L_0898AF6C:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_0898AE18; }
    goto L_0898AF78;
L_0898AF78:;
    goto L_0898AE24;
L_0898AF80:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_0898ACC8; }
    goto L_0898AF8C;
L_0898AF8C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0898ACCC; }
    goto L_0898AF98;
L_0898AF98:;
    goto L_0898ACD8;
    v[0]=vr0;
}

/* 0898AFA0 */
rv_t func_0898AFA0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0898AFA0:;
    sp = sp - 64;
    ST32(a0+88, 0);
    a2 = D_08C2BA28 - (-17880);
    v1 = a2 - 17880;
    s1 = a0 + 0;
    v0 = LD32(v1+8);
    a1 = LD32(v1+4);
    ST32(a0+92, 0);
    v0 = v0 + 1;
    a0 = sp + 0;
    ST32(v1+8, v0);
    ST32(sp, v1);
    ST32(sp+4, 0);
    cnd_ = a1 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_0898B048; }
    goto L_0898AFFC;
L_0898AFFC:;
    a2 = LD32(a2-17880);
    a3 = a1 + 0;
    goto L_0898B004;
L_0898B004:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0898B038; }
    goto L_0898B01C;
L_0898B01C:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_0898B04C; }
    goto L_0898B02C;
L_0898B02C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0898B01C; }
    goto L_0898B038;
L_0898B038:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0898B004; }
    goto L_0898B048;
L_0898B048:;
    a0 = LD32(sp+8);
    goto L_0898B04C;
L_0898B04C:;
    cnd_ = a0 == 0;
    v0 = D_08AEE60C - (-6644);
    if (cnd_) { goto L_0898B0A8; }
    goto L_0898B054;
L_0898B054:;
    v1 = D_08AEE610 - (-6640);
    f21 = BITSF(LD32(v0-6644));
    f20 = BITSF(LD32(v1-6640));
    s2 = 16;
    s0 = LD32(a0);
    goto L_0898B068;
L_0898B068:;
    a1 = 1;
    a0 = sp + 0;
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898B074;
L_0898B074:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_0898B0A0; }
    goto L_0898B080;
L_0898B080:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0898B0A0; }
    goto L_0898B08C;
L_0898B08C:;
    v1 = LD32(s0+12);
    v0 = LD32(s1+76);
    cnd_ = v1 == v0;
    if (cnd_) { a0 = LD32(s0); goto L_0898B170; }
    goto L_0898B09C;
L_0898B09C:;
    a0 = LD32(sp+8);
    goto L_0898B0A0;
L_0898B0A0:;
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_0898B068; }
    goto L_0898B0A8;
L_0898B0A8:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0898B130; }
    goto L_0898B0BC;
L_0898B0BC:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0898B130; }
    goto L_0898B0C8;
L_0898B0C8:;
    v0 = LD32(s1);
    goto L_0898B0CC;
L_0898B0CC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0898B120; }
    goto L_0898B0E0;
L_0898B0E0:;
    v0 = LD_U8(s0+8);
    goto L_0898B0E4;
L_0898B0E4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0898B168; }
    goto L_0898B0EC;
L_0898B0EC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0898B158; }
    goto L_0898B0F4;
L_0898B0F4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0898B0FC;
L_0898B0FC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898B108;
L_0898B108:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0898B114;
L_0898B114:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0898B0E4; }
    goto L_0898B11C;
L_0898B11C:;
    v1 = LD32(s1+4);
    goto L_0898B120;
L_0898B120:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0898B0CC; }
    goto L_0898B130;
L_0898B130:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_0898B158:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0898B0FC;
L_0898B168:;
    s0 = LD32(s0+4);
    goto L_0898B114;
L_0898B170:;
    a1 = LD32(s1+88);
    v0 = LD32(a0-16);
    v1 = a1 << 2;
    a0 = v1 + s1;
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(a0+96, v1);
    v1 = LD32(s0+192);
    v0 = (v1 >> 2) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_0898B1C8; }
    goto L_0898B19C;
L_0898B19C:;
    ST32(a0+128, s2);
    ST32(a0+160, FBITS(f20));
    goto L_0898B1A4;
L_0898B1A4:;
    v0 = a1 << 2;
    v0 = v0 + s1;
    f1 = BITSF(LD32(v0+160));
    f0 = BITSF(LD32(s1+92));
    v0 = a1 + 1;
    ST32(s1+88, v0);
    f0 = f0 + f1;
    ST32(s1+92, FBITS(f0));
    goto L_0898B09C;
L_0898B1C8:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898B1E0;
L_0898B1E0:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    { u64 r_ = func_0898B768(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898B1EC;
L_0898B1EC:;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    a1 = LD32(s1+88);
    if (cnd_) { goto L_0898B1A4; }
    goto L_0898B1F8;
L_0898B1F8:;
    v0 = 1;
    v1 = a1 << 2;
    v1 = v1 + s1;
    ST32(v1+128, v0);
    ST32(v1+160, FBITS(f21));
    goto L_0898B1A4;
}

/* 0898B210 */
rv_t func_0898B210(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_0898B210:;
    sp = sp - 128;
    a2 = D_08C2A35C - (-23716);
    v1 = a2 - 23716;
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
    if (cnd_) { goto L_0898B2C0; }
    goto L_0898B274;
L_0898B274:;
    a2 = LD32(a2-23716);
    a3 = a1 + 0;
    goto L_0898B27C;
L_0898B27C:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0898B2B0; }
    goto L_0898B294;
L_0898B294:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0898B2C4; }
    goto L_0898B2A4;
L_0898B2A4:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0898B294; }
    goto L_0898B2B0;
L_0898B2B0:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0898B27C; }
    goto L_0898B2C0;
L_0898B2C0:;
    v0 = LD32(sp+8);
    goto L_0898B2C4;
L_0898B2C4:;
    cnd_ = v0 != 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_0898B60C; }
    goto L_0898B2CC;
L_0898B2CC:;
    a0 = D_08C2A08C - (-24436);
    goto L_0898B2D0;
L_0898B2D0:;
    a0 = a0 - 24436;
    a1 = 1000;
    a2 = 1;
    { u64 r_ = func_08AC085C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898B2E0;
L_0898B2E0:;
    cnd_ = v0 == 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_0898B3BC; }
    goto L_0898B2E8;
L_0898B2E8:;
    a1 = LD32(v0+28);
    a0 = D_08C2A880 - (-22400);
    a0 = a0 - 22400;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898B2FC;
L_0898B2FC:;
    s3 = v0 + 0;
    ST32(s2+88, 0);
    cnd_ = v0 == 0;
    ST32(s2+92, 0);
    if (cnd_) { goto L_0898B3B8; }
    goto L_0898B30C;
L_0898B30C:;
    v1 = LD32(v0+12);
    v0 = LD32(s2+76);
    cnd_ = v1 == v0;
    v1 = D_08C2BA28 - (-17880);
    if (cnd_) { goto L_0898B3B8; }
    goto L_0898B31C;
L_0898B31C:;
    v1 = v1 - 17880;
    v0 = LD32(v1+8);
    s5 = sp + 16;
    a0 = s5 + 0;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    a1 = 1;
    ST32(sp+16, v1);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898B348;
L_0898B348:;
    a0 = LD32(sp+24);
    cnd_ = a0 == 0;
    v0 = D_08AEE614 - (-6636);
    if (cnd_) { goto L_0898B3A4; }
    goto L_0898B354;
L_0898B354:;
    f20 = BITSF(LD32(v0-6636));
    v1 = D_08AEE618 - (-6632);
    v0 = D_08AEE61C - (-6628);
    f21 = BITSF(LD32(v1-6632));
    f22 = BITSF(LD32(v0-6628));
    s6 = 4;
    s7 = 16;
    s1 = LD32(a0);
    goto L_0898B374;
L_0898B374:;
    a1 = 1;
    a0 = s5 + 0;
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898B380;
L_0898B380:;
    v0 = LD_U8(s1+5);
    cnd_ = v0 == 0;
    a0 = LD32(sp+24);
    if (cnd_) { goto L_0898B39C; }
    goto L_0898B38C;
L_0898B38C:;
    v0 = LD_U8(s1+64);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0898B4A0; }
    goto L_0898B398;
L_0898B398:;
    a0 = LD32(sp+24);
    goto L_0898B39C;
L_0898B39C:;
    cnd_ = a0 != 0;
    if (cnd_) { s1 = LD32(a0); goto L_0898B374; }
    goto L_0898B3A4;
L_0898B3A4:;
    a0 = LD32(sp+16);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0898B490; }
    goto L_0898B3B8;
L_0898B3B8:;
    s1 = LD32(sp);
    goto L_0898B3BC;
L_0898B3BC:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0898B440; }
    goto L_0898B3CC;
L_0898B3CC:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0898B440; }
    goto L_0898B3D8;
L_0898B3D8:;
    v0 = LD32(s1);
    goto L_0898B3DC;
L_0898B3DC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0898B430; }
    goto L_0898B3F0;
L_0898B3F0:;
    v0 = LD_U8(s0+8);
    goto L_0898B3F4;
L_0898B3F4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0898B488; }
    goto L_0898B3FC;
L_0898B3FC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0898B478; }
    goto L_0898B404;
L_0898B404:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0898B40C;
L_0898B40C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898B418;
L_0898B418:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0898B424;
L_0898B424:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0898B3F4; }
    goto L_0898B42C;
L_0898B42C:;
    v1 = LD32(s1+4);
    goto L_0898B430;
L_0898B430:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0898B3DC; }
    goto L_0898B440;
L_0898B440:;
    sp = sp + 128;
    { v[0]=vr0;return (rv_t){ v0, v1, f0 }; }
L_0898B478:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0898B40C;
L_0898B488:;
    s0 = LD32(s0+4);
    goto L_0898B424;
L_0898B490:;
    { u64 r_ = func_08ABC380(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898B498;
L_0898B498:;
    s1 = LD32(sp);
    goto L_0898B3BC;
L_0898B4A0:;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898B4B8;
L_0898B4B8:;
    s0 = v0 + 0;
    v0 = LD32(s3);
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898B4D8;
L_0898B4D8:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f1 = f1 - f2;
    f0 = f0 - f3;
    {u32 a_=sp+(48);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+40, FBITS(f4));
    v0 = FBITS(f1);
    {vr0=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+36, FBITS(f0));
    ST32(sp+32, FBITS(f1));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    v1 = LD32(s3+12);
    if (cnd_) { goto L_0898B604; }
    goto L_0898B544;
L_0898B544:;
    v0 = LD32(s1+12);
    cnd_ = v1 == v0;
    a0 = LD32(sp+24);
    if (cnd_) { goto L_0898B39C; }
    goto L_0898B550;
L_0898B550:;
    cnd_ = v0 == s6;
    if (cnd_) { goto L_0898B5E0; }
    goto L_0898B558;
L_0898B558:;
    cnd_ = s4 == 0;
    a1 = LD32(s2+88);
    if (cnd_) { goto L_0898B57C; }
    goto L_0898B560;
L_0898B560:;
    v1 = LD32(s1);
    a0 = LD32(s4+80);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 == a0;
    if (cnd_) { goto L_0898B5C8; }
    goto L_0898B57C;
L_0898B57C:;
    f0 = f0 * f22;
    v0 = a1 << 2;
    v0 = v0 + s2;
    ST32(v0+160, FBITS(f0));
    goto L_0898B58C;
L_0898B58C:;
    ST32(v0+128, s7);
    goto L_0898B590;
L_0898B590:;
    a0 = LD32(s1);
    v1 = a1 << 2;
    v1 = v1 + s2;
    v0 = LD32(a0-16);
    f0 = BITSF(LD32(s2+92));
    f1 = BITSF(LD32(v1+160));
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    f0 = f0 + f1;
    v0 = a1 + 1;
    ST32(v1+96, a0);
    ST32(s2+92, FBITS(f0));
    ST32(s2+88, v0);
    goto L_0898B398;
L_0898B5C8:;
    v1 = LD32(s4+92);
    v0 = a1 << 2;
    v0 = v0 + s2;
    ST32(v0+128, v1);
    ST32(v0+160, FBITS(f21));
    goto L_0898B590;
L_0898B5E0:;
    cnd_ = v1 == v0;
    a0 = LD32(sp+24);
    if (cnd_) { goto L_0898B39C; }
    goto L_0898B5E8;
L_0898B5E8:;
    cnd_ = v0 == s6;
    if (cnd_) { goto L_0898B39C; }
    goto L_0898B5F0;
L_0898B5F0:;
    a1 = LD32(s2+88);
    v0 = a1 << 2;
    v0 = v0 + s2;
    ST32(v0+160, FBITS(f21));
    goto L_0898B58C;
L_0898B604:;
    v0 = LD32(s1+12);
    goto L_0898B5E0;
L_0898B60C:;
    s0 = LD32(v0);
    goto L_0898B610;
L_0898B610:;
    a0 = sp + 0;
    a1 = 1;
    func_08ABCEB8(a0, a1);
    goto L_0898B61C;
L_0898B61C:;
    v1 = LD32(s0+84);
    v0 = LD32(s2+76);
    cnd_ = v1 != v0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0898B63C; }
    goto L_0898B62C;
L_0898B62C:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_0898B610; }
    goto L_0898B634;
L_0898B634:;
    a0 = D_08C2A08C - (-24436);
    goto L_0898B2D0;
L_0898B63C:;
    s4 = s0 + 0;
    goto L_0898B2CC;
    v[0]=vr0;
}

/* 0898B644 */
rv_t func_0898B644(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0898B644:;
    sp = sp - 48;
    ST32(a0+88, 0);
    v1 = D_08C2BA28 - (-17880);
    v1 = v1 - 17880;
    a1 = 1;
    s1 = a0 + 0;
    v0 = LD32(v1+8);
    ST32(a0+92, 0);
    a0 = sp + 0;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898B694;
L_0898B694:;
    a2 = LD32(sp+8);
    cnd_ = a2 == 0;
    v0 = D_08AEE620 - (-6624);
    if (cnd_) { goto L_0898B6D0; }
    goto L_0898B6A0;
L_0898B6A0:;
    f20 = BITSF(LD32(v0-6624));
    s2 = 16;
    s0 = LD32(a2);
    goto L_0898B6AC;
L_0898B6AC:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898B6B8;
L_0898B6B8:;
    v1 = LD32(s0+12);
    v0 = LD32(s1+76);
    cnd_ = v1 == v0;
    a2 = LD32(sp+8);
    if (cnd_) { goto L_0898B710; }
    goto L_0898B6C8;
L_0898B6C8:;
    cnd_ = a2 != 0;
    if (cnd_) { s0 = LD32(a2); goto L_0898B6AC; }
    goto L_0898B6D0;
L_0898B6D0:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0898B700; }
    goto L_0898B6E4;
L_0898B6E4:;
    goto L_0898B6E8;
L_0898B6E8:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0898B700:;
    { u64 r_ = func_08ABC380(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898B708;
L_0898B708:;
    goto L_0898B6E8;
L_0898B710:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0898B6C8; }
    goto L_0898B71C;
L_0898B71C:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0898B6C8; }
    goto L_0898B728;
L_0898B728:;
    a0 = LD32(s0);
    f0 = BITSF(LD32(s1+92));
    a1 = LD32(s1+88);
    v0 = LD32(a0-16);
    f0 = f0 + f20;
    v1 = a1 << 2;
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    v1 = v1 + s1;
    a1 = a1 + 1;
    ST32(v1+160, FBITS(f20));
    ST32(s1+92, FBITS(f0));
    ST32(v1+96, a0);
    ST32(s1+88, a1);
    ST32(v1+128, s2);
    goto L_0898B6C8;
}

/* 0898B768 */
u64 func_0898B768(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_0898B768:;
    sp = sp - 96;
    a3 = D_08C2A880 - (-22400);
    v1 = a3 - 22400;
    s2 = a0 + 0;
    s1 = a1 + 0;
    a0 = sp + 0;
    v0 = LD32(v1+8);
    a2 = LD32(v1+4);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    cnd_ = a2 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_0898B80C; }
    goto L_0898B7C4;
L_0898B7C4:;
    a3 = LD32(a3-22400);
    goto L_0898B7C8;
L_0898B7C8:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0898B7FC; }
    goto L_0898B7E0;
L_0898B7E0:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_0898B810; }
    goto L_0898B7F0;
L_0898B7F0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0898B7E0; }
    goto L_0898B7FC;
L_0898B7FC:;
    v0 = a1 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0898B7C8; }
    goto L_0898B80C;
L_0898B80C:;
    v1 = LD32(sp+8);
    goto L_0898B810;
L_0898B810:;
    cnd_ = v1 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_0898B878; }
    goto L_0898B818;
L_0898B818:;
    v0 = D_08AEE624 - (-6620);
    f21 = BITSF(LD32(v0-6620));
    f20 = BITSF(0);
    s0 = LD32(v1);
    goto L_0898B828;
L_0898B828:;
    a1 = 1;
    a0 = sp + 0;
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898B834;
L_0898B834:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_0898B870; }
    goto L_0898B840;
L_0898B840:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0898B870; }
    goto L_0898B84C;
L_0898B84C:;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    f0 = BITSF(LD32(v1+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_0898B948; }
    goto L_0898B86C;
L_0898B86C:;
    v1 = LD32(sp+8);
    goto L_0898B870;
L_0898B870:;
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(v1); goto L_0898B828; }
    goto L_0898B878;
L_0898B878:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0898B900; }
    goto L_0898B88C;
L_0898B88C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0898B900; }
    goto L_0898B898;
L_0898B898:;
    v0 = LD32(s1);
    goto L_0898B89C;
L_0898B89C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0898B8F0; }
    goto L_0898B8B0;
L_0898B8B0:;
    v0 = LD_U8(s0+8);
    goto L_0898B8B4;
L_0898B8B4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0898B940; }
    goto L_0898B8BC;
L_0898B8BC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0898B930; }
    goto L_0898B8C4;
L_0898B8C4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0898B8CC;
L_0898B8CC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898B8D8;
L_0898B8D8:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0898B8E4;
L_0898B8E4:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0898B8B4; }
    goto L_0898B8EC;
L_0898B8EC:;
    v1 = LD32(s1+4);
    goto L_0898B8F0;
L_0898B8F0:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0898B89C; }
    goto L_0898B900;
L_0898B900:;
    v0 = s5 + 0;
    sp = sp + 96;
    return (u64)v0 | ((u64)v1 << 32);
L_0898B930:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0898B8CC;
L_0898B940:;
    s0 = LD32(s0+4);
    goto L_0898B8E4;
L_0898B948:;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898B950;
L_0898B950:;
    cnd_ = v0 != 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_0898B870; }
    goto L_0898B958;
L_0898B958:;
    v1 = LD32(s0+12);
    v0 = LD32(s2+76);
    cnd_ = v1 != v0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_0898B870; }
    goto L_0898B968;
L_0898B968:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898B984;
L_0898B984:;
    f5 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s1));
    f3 = BITSF(LD32(s1+4));
    f4 = BITSF(LD32(s1+8));
    f0 = f0 - f2;
    f1 = f1 - f3;
    f5 = f5 - f4;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f5));
    if (cnd_) { goto L_0898B86C; }
    goto L_0898B9EC;
L_0898B9EC:;
    s5 = s5 + 1;
    goto L_0898B86C;
}

/* 0898B9F4 */
u32 func_0898B9F4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
L_0898B9F4:;
    v0 = LD32(a0+88);
    a3 = a0 + 0;
    cnd_ = v0 == 0;
    v1 = 999;
    if (cnd_) { goto L_0898BAF8; }
    goto L_0898BA04;
L_0898BA04:;
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
    v0 = D_08AEE628 - (-6616);
    f3 = BITSF(LD32(a3+92));
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-6616));
    f2 = BITSF(0);
    a0 = a0 + v1;
    f1 = f1 * f0;
    ST32(a2+4, a0);
    a0 = 0 + 0;
    f1 = f1 * f3;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    ST32(a1+23232, v1);
    if (cnd_) { goto L_0898BAA0; }
    goto L_0898BA64;
L_0898BA64:;
    a2 = LD32(a3+88);
    cnd_ = a2 == 0;
    v1 = a3 + 0;
    if (cnd_) { goto L_0898BAA0; }
    goto L_0898BA70;
L_0898BA70:;
    v0 = LD32(v1+128);
    goto L_0898BA74;
L_0898BA74:;
    a0 = a0 + 1;
    cnd_ = v0 == 0;
    a1 = a0 < a2;
    if (cnd_) { goto L_0898BA88; }
    goto L_0898BA80;
L_0898BA80:;
    f0 = BITSF(LD32(v1+160));
    f1 = f1 - f0;
    goto L_0898BA88;
L_0898BA88:;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898BAA0; }
    goto L_0898BA98;
L_0898BA98:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(v1+128); goto L_0898BA74; }
    goto L_0898BAA0;
L_0898BAA0:;
    a0 = a0 - 1;
    v0 = a0 << 2;
    v1 = v0 + a3;
    a1 = LD32(v1+128);
    cnd_ = a1 == 0;
    if (cnd_) { v1 = 999; goto L_0898BAF8; }
    goto L_0898BAB8;
L_0898BAB8:;
    v0 = LD32(a3+88);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 999; goto L_0898BAF8; }
    goto L_0898BAC8;
L_0898BAC8:;
    f1 = BITSF(LD32(v1+160));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = 999; goto L_0898BAF8; }
    goto L_0898BAE0;
L_0898BAE0:;
    v0 = a1 - 1;
    cnd_ = v0 != 0;
    ST32(v1+128, v0);
    if (cnd_) { goto L_0898BAF4; }
    goto L_0898BAEC;
L_0898BAEC:;
    f0 = f3 - f1;
    ST32(a3+92, FBITS(f0));
    goto L_0898BAF4;
L_0898BAF4:;
    v1 = LD32(v1+96);
    goto L_0898BAF8;
L_0898BAF8:;
    v0 = v1 + 0;
    return v0;
}

/* 0898BB00 */
u32 func_0898BB00(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898BB00:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 192;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898BB1C;
L_0898BB1C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    func_0898A848(a0, a1);
    goto L_0898BB2C;
L_0898BB2C:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 0898BB44 */
rv_t func_0898BB44(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898BB44:;
    sp = sp - 16;
    s0 = a0 + 0;
    a1 = 0 + 0;
    v0 = LD32(s0+72);
    v0 = v0 < 0xau;
    cnd_ = v0 == 0;
    a0 = 999;
    if (cnd_) { goto L_0898BB98; }
    goto L_0898BB68;
L_0898BB68:;
    { rv_t r_ = func_0898DB14(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898BB70;
L_0898BB70:;
    a0 = LD32(s0+76);
    a1 = v0 + 0;
    ST32(v0+32, a0);
    v1 = LD32(s0+72);
    a0 = v1 << 2;
    v1 = v1 + 1;
    ST32(s0+72, v1);
    a0 = a0 + s0;
    v1 = LD32(v0+4);
    ST32(a0+32, v1);
    goto L_0898BB98;
L_0898BB98:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898BBAC */
void func_0898BBAC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898BBAC:;
    sp = sp - 32;
    a2 = 0 + 0;
    s3 = a1 + 0;
    s2 = a0 + 0;
    v1 = LD32(a0+72);
    cnd_ = v1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0898BC18; }
    goto L_0898BBE0;
L_0898BBE0:;
    s4 = 999;
    s0 = a0 + 0;
    a1 = s1 + 0;
    goto L_0898BBEC;
L_0898BBEC:;
    cnd_ = a2 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0898BC00; }
    goto L_0898BBF4;
L_0898BBF4:;
    v0 = LD32(s0+32);
    ST32(s0+32, s4);
    ST32(s0+28, v0);
    goto L_0898BC00;
L_0898BC00:;
    cnd_ = s3 == s1;
    s0 = s0 + 4;
    if (cnd_) { goto L_0898BC4C; }
    goto L_0898BC08;
L_0898BC08:;
    s1 = s1 + 1;
    goto L_0898BC0C;
L_0898BC0C:;
    v0 = s1 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = s1 + 0; goto L_0898BBEC; }
    goto L_0898BC18;
L_0898BC18:;
    v0 = 1;
    cnd_ = a2 == v0;
    v0 = v1 - 1;
    if (cnd_) { goto L_0898BC44; }
    goto L_0898BC24;
L_0898BC24:;
    sp = sp + 32;
    return;
L_0898BC44:;
    ST32(s2+72, v0);
    goto L_0898BC24;
L_0898BC4C:;
    s1 = s1 + 1;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898BC54;
L_0898BC54:;
    a0 = v0 + 0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898BC5C;
L_0898BC5C:;
    v1 = LD32(s2+72);
    a2 = 1;
    goto L_0898BC0C;
}

/* 0898BC68 */
u64 func_0898BC68(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898BC68:;
    sp = sp - 16;
    v0 = LD32(a0+72);
    v1 = v0 < 0xbu;
    v0 = a1 < v0;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0898BC9C; }
    goto L_0898BC84;
L_0898BC84:;
    v0 = a1 << 2;
    v0 = v0 + a0;
    a0 = D_08C2A42C - (-23508);
    a0 = a0 - 23508;
    cnd_ = v1 != 0;
    a2 = 1;
    if (cnd_) { goto L_0898BCAC; }
    goto L_0898BC9C;
L_0898BC9C:;
    v0 = a3 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0898BCAC:;
    a1 = LD32(v0+32);
    { u64 r_ = func_08AC20C0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898BCB4;
L_0898BCB4:;
    a3 = v0 + 0;
    goto L_0898BC9C;
}

/* 0898BCBC */
rv_t func_0898BCBC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898BCBC:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0898BDE0; }
    goto L_0898BCF0;
L_0898BCF0:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEE62C - (-6612);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-6612));
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
    t0 = D_08C2A280 - (-23936);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2A290 - (-23920);
    a3 = D_08C2A2A0 - (-23904);
    v1 = t0 - 23936;
    a1 = v0 - 23920;
    a2 = a3 - 23904;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2A330 - (-23760);
    s0 = s3 - 23760;
    ST32(v1+8, FBITS(f5));
    a0 = 64;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-23920, FBITS(f5));
    v0 = 16;
    ST32(t0-23936, FBITS(f1));
    ST32(a3-23904, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898BDA8;
L_0898BDA8:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-23760, v0);
    if (cnd_) { goto L_0898BDD4; }
    goto L_0898BDB8;
L_0898BDB8:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_0898BDC0;
L_0898BDC0:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898BDC0; }
    goto L_0898BDD4;
L_0898BDD4:;
    v0 = s3 - 23760;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_0898BDE0;
L_0898BDE0:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0898BE04; }
    goto L_0898BDF4;
L_0898BDF4:;
    v0 = D_08C2A330 - (-23760);
    a0 = LD32(v0-23760);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898BE1C; }
    goto L_0898BE04;
L_0898BE04:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0898BE1C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898BE24;
L_0898BE24:;
    goto L_0898BE04;
}

/* 0898BE2C */
rv_t func_0898BE2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898BE2C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0898BCBC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898BE40;
L_0898BE40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898BE4C */
rv_t func_0898BE4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898BE4C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0898BCBC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898BE60;
L_0898BE60:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898BE6C */
void func_0898BE6C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898BE6C:;
    sp = sp - 32;
    s3 = a0 + 0;
    func_0886A19C(a0, a1);
    goto L_0898BE8C;
L_0898BE8C:;
    v0 = D_08AFA048 - (-24504);
    v0 = v0 - 24504;
    ST32(s3, v0);
    v0 = (u32)-32732;
    v1 = 999;
    ST16(s3+8, v0);
    v0 = 1;
    a1 = 0 + 0;
    ST32(s3+80, v1);
    a0 = s3 + 0;
    ST32(s3+92, v0);
    ST32(s3+84, 0);
    ST32(s3+88, 0);
    goto L_0898BEC0;
L_0898BEC0:;
    a1 = a1 + 1;
    v0 = a1 < 0x4u;
    ST8(a0+144, 0);
    ST8(a0+148, 0);
    cnd_ = v0 != 0;
    a0 = a0 + 1;
    if (cnd_) { goto L_0898BEC0; }
    goto L_0898BED8;
L_0898BED8:;
    s2 = D_08C2A340 - (-23744);
    s1 = s2 - 23744;
    v0 = LD32(s1+4);
    s0 = LD32(s3+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898BEF8;
L_0898BEF8:;
    a0 = LD32(s2-23744);
    s0 = s0 << 2;
    v1 = LD32(s1+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    ST32(v0, s3);
    a0 = s1 + 16;
    v1 = v1 + 1;
    ST32(v0+4, a1);
    a1 = s3 + 0;
    ST32(s0, v0);
    ST8(v0+8, 0);
    ST32(s1+12, v1);
    func_08AC23DC(a0, a1, 0, 0, 0);
    goto L_0898BF30;
L_0898BF30:;
    sp = sp + 32;
    return;
}

/* 0898BF4C */
rv_t func_0898BF4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898BF4C:;
    v0 = D_08AFA048 - (-24504);
    sp = sp - 16;
    v0 = v0 - 24504;
    s0 = D_08C2A340 - (-23744);
    s0 = s0 - 23744;
    ST32(a0, v0);
    s1 = a0 + 0;
    a1 = s1 + 0;
    a0 = s0 + 0;
    s0 = s0 + 16;
    { u64 r_ = func_08AC24C4(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898BF84;
L_0898BF84:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = 1;
    func_08AC228C(a0, a1, 0, 0, 0);
    goto L_0898BF94;
L_0898BF94:;
    v0 = LD32(s1+28);
    a0 = D_08C2A35C - (-23716);
    a0 = a0 - 23716;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0898BFC8; }
    goto L_0898BFAC;
L_0898BFAC:;
    a0 = s1 + 0;
    { u64 r_ = func_0886A2F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898BFB4;
L_0898BFB4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0898BFC8:;
    { u64 r_ = func_08AC24C4(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898BFD0;
L_0898BFD0:;
    goto L_0898BFAC;
}

/* 0898BFD8 */
rv_t func_0898BFD8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898BFD8:;
    v0 = D_08AFA048 - (-24504);
    sp = sp - 16;
    v0 = v0 - 24504;
    s0 = D_08C2A340 - (-23744);
    s0 = s0 - 23744;
    ST32(a0, v0);
    s1 = a0 + 0;
    a1 = s1 + 0;
    a0 = s0 + 0;
    s0 = s0 + 16;
    { u64 r_ = func_08AC24C4(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898C010;
L_0898C010:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = 1;
    func_08AC228C(a0, a1, 0, 0, 0);
    goto L_0898C020;
L_0898C020:;
    v0 = LD32(s1+28);
    a0 = D_08C2A35C - (-23716);
    a0 = a0 - 23716;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0898C05C; }
    goto L_0898C038;
L_0898C038:;
    a0 = s1 + 0;
    { u64 r_ = func_0886A2F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898C040;
L_0898C040:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898C048;
L_0898C048:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0898C05C:;
    { u64 r_ = func_08AC24C4(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898C064;
L_0898C064:;
    goto L_0898C038;
}

/* 0898C06C */
rv_t func_0898C06C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898C06C:;
    sp = sp - 32;
    s2 = D_08C2A35C - (-23716);
    s1 = s2 - 23716;
    s3 = a0 + 0;
    { rv_t r_ = func_0886A108(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C094;
L_0898C094:;
    a0 = 12;
    v0 = LD32(s1+4);
    s0 = LD32(s3+4);
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C0AC;
L_0898C0AC:;
    a0 = LD32(s2-23716);
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
    return (rv_t){ v0, v1, f0 };
}

/* 0898C0F4 */
rv_t func_0898C0F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898C0F4:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0886A130(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C108;
L_0898C108:;
    a0 = D_08C2A35C - (-23716);
    a1 = s0 + 0;
    a0 = a0 - 23716;
    { u64 r_ = func_08AC24C4(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898C118;
L_0898C118:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898C128 */
rv_t func_0898C128(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898C128:;
    sp = sp - 16;
    a1 = 1;
    { rv_t r_ = func_08874390(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C138;
L_0898C138:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898C144 */
rv_t func_0898C144(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898C144:;
    sp = sp - 16;
    { rv_t r_ = func_08869FCC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C154;
L_0898C154:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898C160 */
void func_0898C160(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898C160:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 152;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C184;
L_0898C184:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_0898BE6C(a0, a1);
    goto L_0898C194;
L_0898C194:;
    a0 = s2 + 0;
    cnd_ = s2 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0898C1B8; }
    goto L_0898C1A0;
L_0898C1A0:;
    goto L_0898C1A4;
L_0898C1A4:;
    sp = sp + 16;
    return;
L_0898C1B8:;
    v0 = LD32(s2);
    v1 = LD32(v0+44);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C1C8;
L_0898C1C8:;
    goto L_0898C1A4;
}

/* 0898C1D0 */
rv_t func_0898C1D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0898C1D0:;
    sp = sp - 48;
    s3 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_0886A474(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C1F4;
L_0898C1F4:;
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_0898C1FC;
L_0898C1FC:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0898C1FC; }
    goto L_0898C220;
L_0898C220:;
    a1 = s3 + 80;
    a2 = 0 + 0;
    goto L_0898C228;
L_0898C228:;
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
    if (cnd_) { goto L_0898C228; }
    goto L_0898C250;
L_0898C250:;
    a1 = s3 + 84;
    a2 = 0 + 0;
    goto L_0898C258;
L_0898C258:;
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
    if (cnd_) { goto L_0898C258; }
    goto L_0898C280;
L_0898C280:;
    a1 = s3 + 88;
    a2 = 0 + 0;
    goto L_0898C288;
L_0898C288:;
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
    if (cnd_) { goto L_0898C288; }
    goto L_0898C2B0;
L_0898C2B0:;
    v0 = LD32(s3+88);
    cnd_ = v0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_0898C304; }
    goto L_0898C2BC;
L_0898C2BC:;
    a3 = s3 + 0;
    goto L_0898C2C0;
L_0898C2C0:;
    a1 = a3 + 96;
    a2 = 0 + 0;
    goto L_0898C2C8;
L_0898C2C8:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0xcu;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0898C2C8; }
    goto L_0898C2F0;
L_0898C2F0:;
    v0 = LD32(s3+88);
    t0 = t0 + 1;
    v0 = t0 < v0;
    cnd_ = v0 != 0;
    a3 = a3 + 12;
    if (cnd_) { goto L_0898C2C0; }
    goto L_0898C304;
L_0898C304:;
    v0 = LD32(sp);
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { v0 = LD32(s3+28); goto L_0898C344; }
    goto L_0898C310;
L_0898C310:;
    a1 = s3 + 92;
    a2 = 0 + 0;
    goto L_0898C318;
L_0898C318:;
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
    if (cnd_) { goto L_0898C318; }
    goto L_0898C340;
L_0898C340:;
    v0 = LD32(s3+28);
    goto L_0898C344;
L_0898C344:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s2 = D_08C2A35C - (-23716);
    if (cnd_) { goto L_0898C36C; }
    goto L_0898C350;
L_0898C350:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0898C36C:;
    s1 = s2 - 23716;
    v0 = LD32(s1+4);
    s0 = LD32(s3+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C388;
L_0898C388:;
    a0 = LD32(s2-23716);
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
    goto L_0898C350;
}

/* 0898C3B8 */
rv_t func_0898C3B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898C3B8:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = 0 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_0886A67C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C3E0;
L_0898C3E0:;
    a0 = s3 + 0;
    a1 = 1;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C3EC;
L_0898C3EC:;
    a1 = LD32(s1+80);
    a0 = s3 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C3F8;
L_0898C3F8:;
    a1 = LD32(s1+84);
    a0 = s3 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C404;
L_0898C404:;
    a1 = LD32(s1+88);
    a0 = s3 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C410;
L_0898C410:;
    v1 = LD32(s1+88);
    cnd_ = v1 == 0;
    s0 = s1 + 96;
    if (cnd_) { goto L_0898C43C; }
    goto L_0898C41C;
L_0898C41C:;
    a1 = s0 + 0;
    a0 = s3 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C428;
L_0898C428:;
    v1 = LD32(s1+88);
    s2 = s2 + 1;
    v1 = s2 < v1;
    cnd_ = v1 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_0898C41C; }
    goto L_0898C43C;
L_0898C43C:;
    a1 = LD32(s1+92);
    a0 = s3 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C448;
L_0898C448:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0898C464 */
rv_t func_0898C464(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898C464:;
    sp = sp - 32;
    s1 = a1 ^ 0xffff;
    v0 = s1 < 0x1u;
    s0 = a0 ^ 0x1;
    v1 = s0 < 0x1u;
    v0 = v0 & v1;
    s4 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0898C580; }
    goto L_0898C49C;
L_0898C49C:;
    v1 = s0 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { s2 = D_08C2A35C - (-23716); goto L_0898C530; }
    goto L_0898C4B0;
L_0898C4B0:;
    s0 = s4 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & s0;
    cnd_ = v0 == 0;
    v0 = s1 < 0x1u;
    if (cnd_) { goto L_0898C4D8; }
    goto L_0898C4C4;
L_0898C4C4:;
    v0 = D_08C2A35C - (-23716);
    a0 = LD32(v0-23716);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898C520; }
    goto L_0898C4D4;
L_0898C4D4:;
    v0 = s1 < 0x1u;
    goto L_0898C4D8;
L_0898C4D8:;
    v0 = v0 & s0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0898C4F4; }
    goto L_0898C4E4;
L_0898C4E4:;
    v0 = D_08C2A340 - (-23744);
    a0 = LD32(v0-23744);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898C510; }
    goto L_0898C4F4;
L_0898C4F4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0898C510:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898C518;
L_0898C518:;
    goto L_0898C4F4;
L_0898C520:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898C528;
L_0898C528:;
    v0 = s1 < 0x1u;
    goto L_0898C4D8;
L_0898C530:;
    s0 = s2 - 23716;
    v0 = 8;
    ST32(s0+4, v0);
    a0 = 32;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C544;
L_0898C544:;
    v1 = LD32(s0+4);
    a0 = 0 + 0;
    cnd_ = v1 == 0;
    ST32(s2-23716, v0);
    if (cnd_) { goto L_0898C570; }
    goto L_0898C554;
L_0898C554:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_0898C55C;
L_0898C55C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898C55C; }
    goto L_0898C570;
L_0898C570:;
    v0 = s2 - 23716;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_0898C4B0;
L_0898C580:;
    s3 = D_08C2A340 - (-23744);
    s2 = s3 - 23744;
    v0 = 16;
    ST32(s2+4, v0);
    a0 = 64;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C598;
L_0898C598:;
    a1 = LD32(s2+4);
    a0 = 0 + 0;
    cnd_ = a1 == 0;
    ST32(s3-23744, v0);
    if (cnd_) { goto L_0898C5C0; }
    goto L_0898C5A8;
L_0898C5A8:;
    v1 = v0 + 0;
    goto L_0898C5AC;
L_0898C5AC:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898C5AC; }
    goto L_0898C5C0;
L_0898C5C0:;
    v0 = s3 - 23744;
    v1 = v0 + 16;
    ST32(s2+8, 0);
    ST32(v0+16, 0);
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    ST32(s2+12, 0);
    goto L_0898C49C;
}

/* 0898C5E0 */
rv_t func_0898C5E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898C5E0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0898C464(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C5F4;
L_0898C5F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898C600 */
rv_t func_0898C600(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898C600:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0898C464(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C614;
L_0898C614:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898C620 */
void func_0898C620(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898C620:;
    sp = sp - 32;
    s3 = D_08C2A36C - (-23700);
    s2 = a0 + 0;
    s1 = s3 - 23700;
    func_0886A19C(a0, a1);
    goto L_0898C648;
L_0898C648:;
    v0 = D_08AFA0B0 - (-24400);
    v0 = v0 - 24400;
    v1 = LD32(s1+4);
    ST32(s2, v0);
    v0 = (u32)-32731;
    v1 = v1 - 1;
    s0 = LD32(s2+4);
    ST16(s2+8, v0);
    a0 = 12;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C674;
L_0898C674:;
    a0 = LD32(s3-23700);
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
    sp = sp + 32;
    return;
}

/* 0898C6BC */
rv_t func_0898C6BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898C6BC:;
    v0 = D_08AFA0B0 - (-24400);
    v0 = v0 - 24400;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2A36C - (-23700);
    a1 = s0 + 0;
    a0 = a0 - 23700;
    func_08AC2574(a0, a1, t1, t2, t3);
    goto L_0898C6E8;
L_0898C6E8:;
    a0 = s0 + 0;
    { u64 r_ = func_0886A2F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898C6F0;
L_0898C6F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898C700 */
rv_t func_0898C700(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898C700:;
    v0 = D_08AFA0B0 - (-24400);
    v0 = v0 - 24400;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2A36C - (-23700);
    a1 = s0 + 0;
    a0 = a0 - 23700;
    func_08AC2574(a0, a1, t1, t2, t3);
    goto L_0898C72C;
L_0898C72C:;
    a0 = s0 + 0;
    { u64 r_ = func_0886A2F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898C734;
L_0898C734:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898C73C;
L_0898C73C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898C74C */
rv_t func_0898C74C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898C74C:;
    sp = sp - 16;
    a1 = 1;
    { rv_t r_ = func_08874390(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C75C;
L_0898C75C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898C768 */
rv_t func_0898C768(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898C768:;
    sp = sp - 16;
    { rv_t r_ = func_08869FCC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C778;
L_0898C778:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898C784 */
void func_0898C784(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898C784:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 80;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C7A8;
L_0898C7A8:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_0898C620(a0, a1);
    goto L_0898C7B8;
L_0898C7B8:;
    a0 = s2 + 0;
    cnd_ = s2 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0898C7DC; }
    goto L_0898C7C4;
L_0898C7C4:;
    goto L_0898C7C8;
L_0898C7C8:;
    sp = sp + 16;
    return;
L_0898C7DC:;
    v0 = LD32(s2);
    v1 = LD32(v0+44);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C7EC;
L_0898C7EC:;
    goto L_0898C7C8;
}

/* 0898C7F4 */
rv_t func_0898C7F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898C7F4:;
    sp = sp - 32;
    t0 = a0 + 0;
    a3 = sp + 0;
    a2 = 0 + 0;
    goto L_0898C808;
L_0898C808:;
    v0 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(a1, v0);
    ST8(a3, v1);
    cnd_ = a0 != 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_0898C808; }
    goto L_0898C82C;
L_0898C82C:;
    a0 = t0 + 0;
    { rv_t r_ = func_0886A474(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C834;
L_0898C834:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0898C840 */
rv_t func_0898C840(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898C840:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C864;
L_0898C864:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0886A67C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C870;
L_0898C870:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898C884 */
rv_t func_0898C884(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898C884:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0898C904; }
    goto L_0898C8B8;
L_0898C8B8:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0898C8DC; }
    goto L_0898C8CC;
L_0898C8CC:;
    v0 = D_08C2A36C - (-23700);
    a0 = LD32(v0-23700);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898C8F4; }
    goto L_0898C8DC;
L_0898C8DC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0898C8F4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898C8FC;
L_0898C8FC:;
    goto L_0898C8DC;
L_0898C904:;
    s3 = D_08C2A36C - (-23700);
    s0 = s3 - 23700;
    a0 = 64;
    v0 = 16;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C91C;
L_0898C91C:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-23700, v0);
    if (cnd_) { goto L_0898C948; }
    goto L_0898C92C;
L_0898C92C:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_0898C934;
L_0898C934:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898C934; }
    goto L_0898C948;
L_0898C948:;
    v0 = s3 - 23700;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_0898C8B8;
}

/* 0898C958 */
rv_t func_0898C958(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898C958:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0898C884(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C96C;
L_0898C96C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898C978 */
rv_t func_0898C978(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898C978:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0898C884(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898C98C;
L_0898C98C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898C998 */
float func_0898C998(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898C998:;
    sp = sp - 32;
    s3 = a0 + 0;
    func_08873E94(a0, a1);
    goto L_0898C9B8;
L_0898C9B8:;
    v0 = D_08B45A9C - (23196);
    ST32(s3+48, 0);
    v1 = v0 + 23196;
    a1 = s3 + 64;
    ST32(s3+52, 0);
    a2 = s3 + 88;
    a0 = s3 + 100;
    ST32(s3+56, 0);
    f1 = BITSF(LD32(v0+23196));
    f2 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1+8));
    ST32(s3+64, FBITS(f1));
    ST32(a1+4, FBITS(f2));
    ST32(a1+8, FBITS(f0));
    ST32(s3+84, 0);
    f2 = BITSF(LD32(v0+23196));
    v0 = D_08AFA118 - (-24296);
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    v0 = v0 - 24296;
    ST32(s3, v0);
    v0 = 4;
    v1 = 1010;
    ST32(s3+32, v0);
    v0 = 999;
    ST32(a2+8, FBITS(f0));
    ST32(s3+76, v1);
    ST32(s3+80, v0);
    ST32(a2+4, FBITS(f1));
    ST32(s3+88, FBITS(f2));
    ST32(s3+28, 0);
    ST32(s3+36, 0);
    ST8(s3+40, 0);
    ST8(s3+41, 0);
    ST8(s3+42, 0);
    ST8(s3+43, 0);
    ST8(s3+44, 0);
    ST32(s3+60, 0);
    func_08991C3C(a0);
    goto L_0898CA54;
L_0898CA54:;
    v0 = 1;
    ST8(s3+241, v0);
    v0 = (u32)-32757;
    a1 = 0 + 0;
    ST16(s3+8, v0);
    a2 = 999;
    a0 = s3 + 196;
    ST32(s3+172, 0);
    v1 = s3 + 0;
    ST8(s3+240, 0);
    goto L_0898CA7C;
L_0898CA7C:;
    a1 = a1 + 1;
    v0 = a1 < 0x5u;
    ST32(v1+204, 0);
    ST8(a0, 0);
    a0 = a0 + 1;
    ST32(v1+152, a2);
    ST32(v1+176, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898CA7C; }
    goto L_0898CAA0;
L_0898CAA0:;
    a0 = 0 + 0;
    v1 = s3 + 224;
    goto L_0898CAA8;
L_0898CAA8:;
    a0 = a0 + 1;
    v0 = a0 < 0x4u;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898CAA8; }
    goto L_0898CABC;
L_0898CABC:;
    s2 = D_08C2A42C - (-23508);
    s1 = s2 - 23508;
    v0 = LD32(s1+4);
    s0 = LD32(s3+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898CADC;
L_0898CADC:;
    a0 = LD32(s2-23508);
    s0 = s0 << 2;
    v1 = LD32(s1+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    ST32(v0, s3);
    v1 = v1 + 1;
    a0 = s3 + 0;
    ST32(v0+4, a1);
    ST8(v0+8, 0);
    ST32(s0, v0);
    ST32(s1+12, v1);
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898CB10;
L_0898CB10:;
    v0 = D_08B20494 - (1172);
    v0 = v0 + 1172;
    v1 = LD_U8(v0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0898CB34; }
    goto L_0898CB24;
L_0898CB24:;
    v0 = LD_U16(v0+10);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0898CB4C; }
    goto L_0898CB30;
L_0898CB30:;
    goto L_0898CB34;
L_0898CB34:;
    sp = sp + 32;
    return f0;
L_0898CB4C:;
    a0 = 52;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898CB54;
L_0898CB54:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s3 + 0;
    f0 = func_08956784(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0898CB64;
L_0898CB64:;
    cnd_ = s0 == 0;
    ST32(s3+28, s0);
    if (cnd_) { goto L_0898CB30; }
    goto L_0898CB6C;
L_0898CB6C:;
    v1 = LD32(s0);
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898CB7C;
L_0898CB7C:;
    goto L_0898CB34;
}

/* 0898CB84 */
rv_t func_0898CB84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898CB84:;
    sp = sp - 16;
    v0 = D_08AFA118 - (-24296);
    s0 = a0 + 0;
    v0 = v0 - 24296;
    v1 = LD32(a0+28);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0898CBE0; }
    goto L_0898CBAC;
L_0898CBAC:;
    ST32(s0+28, 0);
    goto L_0898CBB0;
L_0898CBB0:;
    a0 = D_08C2A42C - (-23508);
    a1 = s0 + 0;
    a0 = a0 - 23508;
    func_08AC261C(a0, a1, t1, t2, t3);
    goto L_0898CBC0;
L_0898CBC0:;
    a0 = s0 + 100;
    func_08991C64();
    goto L_0898CBC8;
L_0898CBC8:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898CBD0;
L_0898CBD0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0898CBE0:;
    v0 = LD32(v1);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898CBF0;
L_0898CBF0:;
    v1 = LD32(s0+28);
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0898CBAC; }
    goto L_0898CBFC;
L_0898CBFC:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898CC0C;
L_0898CC0C:;
    ST32(s0+28, 0);
    goto L_0898CBB0;
}

/* 0898CC14 */
rv_t func_0898CC14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898CC14:;
    sp = sp - 16;
    v0 = D_08AFA118 - (-24296);
    s0 = a0 + 0;
    v0 = v0 - 24296;
    v1 = LD32(a0+28);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0898CC78; }
    goto L_0898CC3C;
L_0898CC3C:;
    ST32(s0+28, 0);
    goto L_0898CC40;
L_0898CC40:;
    a0 = D_08C2A42C - (-23508);
    a1 = s0 + 0;
    a0 = a0 - 23508;
    func_08AC261C(a0, a1, t1, t2, t3);
    goto L_0898CC50;
L_0898CC50:;
    a0 = s0 + 100;
    func_08991C64();
    goto L_0898CC58;
L_0898CC58:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898CC60;
L_0898CC60:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898CC68;
L_0898CC68:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0898CC78:;
    v0 = LD32(v1);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898CC88;
L_0898CC88:;
    v1 = LD32(s0+28);
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0898CC3C; }
    goto L_0898CC94;
L_0898CC94:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898CCA4;
L_0898CCA4:;
    ST32(s0+28, 0);
    goto L_0898CC40;
}

/* 0898CCAC */
rv_t func_0898CCAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898CCAC:;
    sp = sp - 16;
    v0 = LD_U8(a0+40);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0898CCD0; }
    goto L_0898CCC4;
L_0898CCC4:;
    v0 = LD32(a0+28);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0898CCF8; }
    goto L_0898CCD0;
L_0898CCD0:;
    a0 = s0 + 0;
    func_0898D1D8(a0);
    goto L_0898CCD8;
L_0898CCD8:;
    a0 = s0 + 0;
    { rv_t r_ = func_0898CD0C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898CCE0;
L_0898CCE0:;
    a0 = s0 + 0;
    { rv_t r_ = func_0898D324(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898CCE8;
L_0898CCE8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0898CCF8:;
    func_089569EC(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0898CD00;
L_0898CD00:;
    v0 = 1;
    ST8(s0+40, v0);
    goto L_0898CCD0;
}

/* 0898CD0C */
rv_t func_0898CD0C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0, ra = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0898CD0C:;
    sp = sp - 48;
    a3 = LD32(a0+172);
    v0 = a3 < 0x6u;
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0898CDEC; }
    goto L_0898CD40;
L_0898CD40:;
    cnd_ = a3 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0898CDEC; }
    goto L_0898CD48;
L_0898CD48:;
    f20 = BITSF(0);
    s4 = D_08C2A880 - (-22400);
    s5 = s4 - 22400;
    s3 = 999;
    s0 = a0 + 152;
    goto L_0898CD5C;
L_0898CD5C:;
    a2 = LD32(s0);
    cnd_ = a2 == s3;
    v1 = LD32(s4-22400);
    if (cnd_) { goto L_0898CE14; }
    goto L_0898CD68;
L_0898CD68:;
    v0 = LD32(s5+4);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0898CDB4; }
    goto L_0898CD88;
L_0898CD88:;
    a0 = LD32(a1);
    goto L_0898CD8C;
L_0898CD8C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0898CE28; }
    goto L_0898CDA4;
L_0898CDA4:;
    a1 = LD32(a1+4);
    goto L_0898CDA8;
L_0898CDA8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0898CD8C; }
    goto L_0898CDB0;
L_0898CDB0:;
    a0 = 0 + 0;
    goto L_0898CDB4;
L_0898CDB4:;
    cnd_ = a0 == 0;
    if (cnd_) { a1 = LD32(s0); goto L_0898CE18; }
    goto L_0898CDBC;
L_0898CDBC:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    f0 = BITSF(LD32(v1+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) { a1 = LD32(s0); goto L_0898CE18; }
    goto L_0898CDDC;
L_0898CDDC:;
    s2 = s2 + 1;
    v0 = s2 < a3;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_0898CD5C; }
    goto L_0898CDEC;
L_0898CDEC:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0898CE14:;
    a1 = LD32(s0);
    goto L_0898CE18;
L_0898CE18:;
    a0 = s1 + 0;
    { rv_t r_ = func_0898D7A8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898CE20;
L_0898CE20:;
    a3 = LD32(s1+172);
    goto L_0898CDDC;
L_0898CE28:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0898CDA8; }
    goto L_0898CE34;
L_0898CE34:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0898CDA8; }
    goto L_0898CE40;
L_0898CE40:;
    goto L_0898CDB4;
L_0898CE48:;
    sp = sp - 176;
    v0 = 1;
    ST32(sp+132, s5);
    s5 = a0 + 0;
    ST32(sp+148, ra);
    ST32(sp+144, fp);
    ST32(sp+140, s7);
    ST32(sp+136, s6);
    ST32(sp+128, s4);
    ST32(sp+124, s3);
    ST32(sp+120, s2);
    ST32(sp+116, s1);
    ST32(sp+112, s0);
    ST32(sp+172, FBITS(f23));
    ST32(sp+168, FBITS(f22));
    ST32(sp+164, FBITS(f21));
    cnd_ = a1 == v0;
    ST32(sp+160, FBITS(f20));
    if (cnd_) { goto L_0898D1BC; }
    goto L_0898CE90;
L_0898CE90:;
    cnd_ = a1 == 0;
    v1 = D_08C29E74 - (-24972);
    if (cnd_) { goto L_0898D1B0; }
    goto L_0898CE98;
L_0898CE98:;
    v0 = 2;
    cnd_ = a1 == v0;
    v1 = D_08C29E64 - (-24988);
    if (cnd_) { goto L_0898D1A4; }
    goto L_0898CEA4;
L_0898CEA4:;
    v0 = 3;
    cnd_ = a1 == v0;
    v1 = D_08C29E54 - (-25004);
    if (cnd_) { goto L_0898D194; }
    goto L_0898CEB0;
L_0898CEB0:;
    f2 = BITSF(LD32(v1-25004));
    v0 = v1 - 25004;
    goto L_0898CEB8;
L_0898CEB8:;
    f3 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    v0 = LD32(s5+76);
    ST32(sp+16, FBITS(f2));
    v0 = v0 - 1008;
    v1 = v0 < 0xau;
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f1));
    cnd_ = v1 == 0;
    ST32(sp+28, FBITS(f3));
    if (cnd_) { goto L_0898D134; }
    goto L_0898CEE4;
L_0898CEE4:;
    v1 = D_08ADDEB0 - (-8528);
    v0 = v0 << 2;
    v1 = v1 - 8528;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0898CF00u: goto L_0898CF00; case 0x0898D128u: goto L_0898D128; case 0x0898D134u: goto L_0898D134; case 0x0898D140u: goto L_0898D140; case 0x0898D14Cu: goto L_0898D14C; case 0x0898D158u: goto L_0898D158; case 0x0898D164u: goto L_0898D164; case 0x0898D170u: goto L_0898D170; case 0x0898D17Cu: goto L_0898D17C; case 0x0898D188u: goto L_0898D188; default: rs_break(0, 0x0898cef8); }
L_0898CF00:;
    v0 = D_08B1B530 - (-19152);
    fp = LD32(v0-19152);
    goto L_0898CF08;
L_0898CF08:;
    v0 = LD32(s5+172);
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0898CFB8; }
    goto L_0898CF14;
L_0898CF14:;
    v0 = D_08AEE630 - (-6608);
    f21 = BITSF(LD32(v0-6608));
    v1 = D_08AEE638 - (-6600);
    v0 = D_08AEE63C - (-6596);
    f22 = BITSF(LD32(v1-6600));
    f23 = BITSF(LD32(v0-6596));
    s7 = D_08C2A880 - (-22400);
    s2 = s5 + 152;
    goto L_0898CF34;
L_0898CF34:;
    a1 = LD32(s2);
    a0 = s7 - 22400;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898CF44;
L_0898CF44:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0898CFA4; }
    goto L_0898CF4C;
L_0898CF4C:;
    v0 = LD32(v0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s4 = sp + 32;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898CF68;
L_0898CF68:;
    ST32(sp+52, FBITS(f21));
    a0 = s4 + 0;
    a1 = 1;
    f0 = BITSF(LD32(v0+4));
    ST32(sp+48, 0);
    f0 = f0 + f21;
    ST32(sp+56, 0);
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+8));
    ST32(sp+36, FBITS(f0));
    ST32(sp+32, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898CF9C;
L_0898CF9C:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_0898CFF8; }
    goto L_0898CFA4;
L_0898CFA4:;
    v0 = LD32(s5+172);
    goto L_0898CFA8;
L_0898CFA8:;
    s3 = s3 + 1;
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_0898CF34; }
    goto L_0898CFB8;
L_0898CFB8:;
    ra = LD32(sp+148);
    fp = LD32(sp+144);
    s7 = LD32(sp+140);
    s6 = LD32(sp+136);
    s5 = LD32(sp+132);
    s4 = LD32(sp+128);
    s3 = LD32(sp+124);
    s2 = LD32(sp+120);
    s1 = LD32(sp+116);
    s0 = LD32(sp+112);
    f23 = BITSF(LD32(sp+172));
    f22 = BITSF(LD32(sp+168));
    f21 = BITSF(LD32(sp+164));
    f20 = BITSF(LD32(sp+160));
    sp = sp + 176;
    return (rv_t){ v0, v1, f0 };
L_0898CFF8:;
    s6 = sp + 64;
    a0 = s6 + 0;
    v0 = LD32(v1-16);
    v1 = D_08ADDE4C - (-8628);
    a1 = v1 - 8628;
    v0 = s0 + v0;
    t1 = LD32(v0+4);
    v0 = D_08ADDE54 - (-8620);
    a2 = 36;
    a3 = 1;
    t0 = v0 - 8620;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898D028;
L_0898D028:;
    v1 = D_08AEE634 - (-6604);
    f20 = BITSF(LD32(v1-6604));
    f12 = BITSF(0);
    a0 = s6 + 0;
    a1 = s4 + 0;
    a2 = sp + 16;
    f13 = f20;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898D04C;
L_0898D04C:;
    cnd_ = s3 != 0;
    if (cnd_) { v0 = LD32(s5+172); goto L_0898CFA8; }
    goto L_0898D054;
L_0898D054:;
    v1 = D_08ADDE5C - (-8612);
    a2 = D_08ADDE68 - (-8600);
    t0 = v1 - 8612;
    t1 = fp + 0;
    a1 = a2 - 8600;
    a0 = s6 + 0;
    a2 = 36;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898D078;
L_0898D078:;
    f0 = BITSF(LD32(sp+36));
    f12 = BITSF(0);
    f13 = f20;
    f0 = f0 - f22;
    a1 = s4 + 0;
    a2 = sp + 16;
    a3 = 0 + 0;
    a0 = s6 + 0;
    ST32(sp+36, FBITS(f0));
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898D0A0;
L_0898D0A0:;
    a0 = s5 + 0;
    { rv_t r_ = func_0898D4F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898D0A8;
L_0898D0A8:;
    f12 = BITSF(LD32(v0));
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898D0B0;
L_0898D0B0:;
    a0 = s5 + 0;
    s1 = v1 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_0898D4F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898D0C0;
L_0898D0C0:;
    f12 = BITSF(LD32(v0+8));
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898D0C8;
L_0898D0C8:;
    t1 = D_08ADDE70 - (-8592);
    a1 = t1 - 8592;
    t1 = D_08ADDE88 - (-8568);
    a0 = s6 + 0;
    a2 = 36;
    a3 = 1;
    t2 = s0 + 0;
    t3 = s1 + 0;
    ST32(sp, v0);
    ST32(sp+4, v1);
    t0 = t1 - 8568;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898D0F8;
L_0898D0F8:;
    f12 = BITSF(0);
    f0 = BITSF(LD32(sp+36));
    a0 = s6 + 0;
    a1 = s4 + 0;
    f0 = f0 + f23;
    f13 = f20;
    a2 = sp + 16;
    a3 = 0 + 0;
    ST32(sp+36, FBITS(f0));
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898D120;
L_0898D120:;
    v0 = LD32(s5+172);
    goto L_0898CFA8;
L_0898D128:;
    v0 = D_08B1B548 - (-19128);
    fp = LD32(v0-19128);
    goto L_0898CF08;
L_0898D134:;
    v0 = D_08ADDE94 - (-8556);
    fp = v0 - 8556;
    goto L_0898CF08;
L_0898D140:;
    v0 = D_08B1B534 - (-19148);
    fp = LD32(v0-19148);
    goto L_0898CF08;
L_0898D14C:;
    v0 = D_08B1B538 - (-19144);
    fp = LD32(v0-19144);
    goto L_0898CF08;
L_0898D158:;
    v0 = D_08B1B53C - (-19140);
    fp = LD32(v0-19140);
    goto L_0898CF08;
L_0898D164:;
    v0 = D_08B1B544 - (-19132);
    fp = LD32(v0-19132);
    goto L_0898CF08;
L_0898D170:;
    v0 = D_08B1B540 - (-19136);
    fp = LD32(v0-19136);
    goto L_0898CF08;
L_0898D17C:;
    v0 = D_08B1B54C - (-19124);
    fp = LD32(v0-19124);
    goto L_0898CF08;
L_0898D188:;
    v0 = D_08ADDEA8 - (-8536);
    fp = v0 - 8536;
    goto L_0898CF08;
L_0898D194:;
    v1 = D_08C29E94 - (-24940);
    f2 = BITSF(LD32(v1-24940));
    v0 = v1 - 24940;
    goto L_0898CEB8;
L_0898D1A4:;
    f2 = BITSF(LD32(v1-24988));
    v0 = v1 - 24988;
    goto L_0898CEB8;
L_0898D1B0:;
    f2 = BITSF(LD32(v1-24972));
    v0 = v1 - 24972;
    goto L_0898CEB8;
L_0898D1BC:;
    v1 = D_08C29E84 - (-24956);
    f2 = BITSF(LD32(v1-24956));
    v0 = v1 - 24956;
    goto L_0898CEB8;
}

/* 0898D1CC */
u32 func_0898D1CC(u32 a0)
{
    u32 v0 = 0;
L_0898D1CC:;
    v0 = LD32(a0+172);
    v0 = v0 < 0x1u;
    return v0;
}

/* 0898D1D8 */
void func_0898D1D8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0898D1D8:;
    sp = sp - 48;
    s1 = a0 + 0;
    a2 = 1;
    v0 = LD_U8(a0+148);
    a0 = D_08C2A880 - (-22400);
    cnd_ = v0 != 0;
    a0 = a0 - 22400;
    if (cnd_) { goto L_0898D21C; }
    goto L_0898D204;
L_0898D204:;
    sp = sp + 48;
    return;
L_0898D21C:;
    v0 = LD32(s1+28);
    v1 = LD32(v0+48);
    a1 = LD32(v1+152);
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898D22C;
L_0898D22C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0898D204; }
    goto L_0898D234;
L_0898D234:;
    v0 = LD32(v0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898D250;
L_0898D250:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    v0 = s1 + 88;
    ST32(v0+8, FBITS(f2));
    ST32(s1+88, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898D294;
L_0898D294:;
    v1 = LD32(s0);
    f20 = BITSF(LD32(v0));
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898D2B4;
L_0898D2B4:;
    f13 = BITSF(LD32(v0+8));
    f12 = f20;
    f0 = func_08A9F5FC(f12, f13);
    goto L_0898D2C0;
L_0898D2C0:;
    ST32(s1+84, FBITS(f0));
    goto L_0898D204;
}

/* 0898D2C8 */
u64 func_0898D2C8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898D2C8:;
    sp = sp - 16;
    a2 = 1;
    v0 = LD32(a0+28);
    a0 = D_08C2A880 - (-22400);
    a0 = a0 - 22400;
    v1 = LD32(v0+48);
    a1 = LD32(v1+152);
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898D2EC;
L_0898D2EC:;
    v1 = v0 + 0;
    v0 = D_08B45A9C - (23196);
    cnd_ = v1 == 0;
    v0 = v0 + 23196;
    if (cnd_) { goto L_0898D318; }
    goto L_0898D2FC;
L_0898D2FC:;
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898D318;
L_0898D318:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0898D324 */
rv_t func_0898D324(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898D324:;
    sp = sp - 32;
    s3 = a0 + 0;
    v1 = s3 + 224;
    a0 = 0 + 0;
    goto L_0898D34C;
L_0898D34C:;
    a0 = a0 + 1;
    v0 = a0 < 0x4u;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898D34C; }
    goto L_0898D360;
L_0898D360:;
    v0 = LD32(s3+172);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0898D3CC; }
    goto L_0898D36C;
L_0898D36C:;
    s4 = D_08C2A880 - (-22400);
    s1 = s3 + 152;
    a1 = LD32(s1);
    goto L_0898D378;
L_0898D378:;
    a2 = 1;
    a0 = s4 - 22400;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898D384;
L_0898D384:;
    s2 = s2 + 1;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_0898D3BC; }
    goto L_0898D394;
L_0898D394:;
    v0 = LD32(v0+176);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s3+172); goto L_0898D3C0; }
    goto L_0898D3A0;
L_0898D3A0:;
    v0 = LD32(v0+44);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0898D3BC; }
    goto L_0898D3AC;
L_0898D3AC:;
    v0 = func_08960A84(a0);
    goto L_0898D3B4;
L_0898D3B4:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+176); goto L_0898D3EC; }
    goto L_0898D3BC;
L_0898D3BC:;
    v0 = LD32(s3+172);
    goto L_0898D3C0;
L_0898D3C0:;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1); goto L_0898D378; }
    goto L_0898D3CC;
L_0898D3CC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0898D3EC:;
    a0 = LD32(v0+44);
    v0 = func_08960A84(a0);
    goto L_0898D3F4;
L_0898D3F4:;
    f12 = BITSF(LD32(s3+84));
    a0 = v0 + 0;
    a1 = s3 + 224;
    { rv_t r_ = func_0896313C(a0, a1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898D404;
L_0898D404:;
    v0 = LD32(s3+172);
    goto L_0898D3C0;
}

/* 0898D40C */
float func_0898D40C(u32 a0, u32 a1)
{
    float f0 = 0;
L_0898D40C:;
    a1 = a1 << 2;
    a1 = a1 + a0;
    f0 = BITSF(LD32(a1+224));
    return f0;
}

/* 0898D41C */
rv_t func_0898D41C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
L_0898D41C:;
    f1 = BITSF(0);
    a0 = a0 + 224;
    v1 = 0 + 0;
    goto L_0898D428;
L_0898D428:;
    f0 = BITSF(LD32(a0));
    v1 = v1 + 1;
    v0 = v1 < 0x4u;
    f1 = f1 + f0;
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_0898D428; }
    goto L_0898D440;
L_0898D440:;
    f0 = f1;
    return (rv_t){ v0, v1, f0 };
}

/* 0898D448 */
u64 func_0898D448(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_0898D448:;
    a3 = LD32(a0+60);
    a1 = D_08C2BA28 - (-17880);
    v0 = 999;
    cnd_ = a3 == v0;
    v1 = a1 - 17880;
    if (cnd_) { goto L_0898D4C4; }
    goto L_0898D45C;
L_0898D45C:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-17880);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0898D4AC; }
    goto L_0898D480;
L_0898D480:;
    a1 = LD32(a2);
    goto L_0898D484;
L_0898D484:;
    v0 = LD32(a1);
    v1 = LD32(v0-16);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_0898D4D0; }
    goto L_0898D49C;
L_0898D49C:;
    a2 = LD32(a2+4);
    goto L_0898D4A0;
L_0898D4A0:;
    cnd_ = a2 != 0;
    if (cnd_) { a1 = LD32(a2); goto L_0898D484; }
    goto L_0898D4A8;
L_0898D4A8:;
    v1 = 0 + 0;
    goto L_0898D4AC;
L_0898D4AC:;
    cnd_ = v1 == 0;
    if (cnd_) { a0 = 0 + 0; goto L_0898D4C8; }
    goto L_0898D4B4;
L_0898D4B4:;
    v0 = LD32(a0+32);
    v1 = LD32(v1+12);
    cnd_ = v1 == v0;
    a0 = 1;
    if (cnd_) { goto L_0898D4C8; }
    goto L_0898D4C4;
L_0898D4C4:;
    a0 = 0 + 0;
    goto L_0898D4C8;
L_0898D4C8:;
    v0 = a0 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_0898D4D0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a1 + 0;
    if (cnd_) { goto L_0898D49C; }
    goto L_0898D4DC;
L_0898D4DC:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_0898D4A0; }
    goto L_0898D4E8;
L_0898D4E8:;
    goto L_0898D4AC;
}

/* 0898D4F0 */
rv_t func_0898D4F0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898D4F0:;
    sp = sp - 16;
    v0 = 999;
    s0 = a0 + 0;
    v1 = a0 + 64;
    a3 = LD32(a0+60);
    cnd_ = a3 == v0;
    a2 = a3 + 0;
    if (cnd_) { goto L_0898D5A4; }
    goto L_0898D518;
L_0898D518:;
    a0 = D_08C2A08C - (-24436);
    v1 = a0 - 24436;
    v0 = LD32(v1+4);
    a1 = LD32(a0-24436);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0898D564; }
    goto L_0898D544;
L_0898D544:;
    v1 = LD32(a0);
    goto L_0898D548;
L_0898D548:;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0898D708; }
    goto L_0898D554;
L_0898D554:;
    a0 = LD32(a0+4);
    goto L_0898D558;
L_0898D558:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0898D548; }
    goto L_0898D560;
L_0898D560:;
    v1 = 0 + 0;
    goto L_0898D564;
L_0898D564:;
    cnd_ = v1 == 0;
    s1 = D_08C2A880 - (-22400);
    if (cnd_) { goto L_0898D5C0; }
    goto L_0898D56C;
L_0898D56C:;
    a1 = LD32(v1+28);
    a0 = s1 - 22400;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898D57C;
L_0898D57C:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0898D5BC; }
    goto L_0898D584;
L_0898D584:;
    v0 = LD32(v1);
    goto L_0898D588;
L_0898D588:;
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898D5A0;
L_0898D5A0:;
    v1 = v0 + 0;
    goto L_0898D5A4;
L_0898D5A4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0898D5BC:;
    a3 = LD32(s0+60);
    goto L_0898D5C0;
L_0898D5C0:;
    a0 = s1 - 22400;
    a1 = a3 + 0;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898D5D0;
L_0898D5D0:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0898D584; }
    goto L_0898D5D8;
L_0898D5D8:;
    a1 = LD32(s0+60);
    a0 = D_08C2BA28 - (-17880);
    a0 = a0 - 17880;
    a2 = 1;
    v0 = func_08ABC6F8(a0, a1, a2);
    goto L_0898D5EC;
L_0898D5EC:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0898D584; }
    goto L_0898D5F4;
L_0898D5F4:;
    a3 = LD32(s0+60);
    a0 = D_08B28F74 - (-28812);
    v0 = 999;
    cnd_ = a3 == v0;
    v1 = a0 - 28812;
    if (cnd_) { goto L_0898D654; }
    goto L_0898D608;
L_0898D608:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-28812);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { a2 = 0 + 0; goto L_0898D64C; }
    goto L_0898D62C;
L_0898D62C:;
    v1 = LD32(a1);
    goto L_0898D630;
L_0898D630:;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_0898D6E8; }
    goto L_0898D63C;
L_0898D63C:;
    a1 = LD32(a1+4);
    goto L_0898D640;
L_0898D640:;
    cnd_ = a1 != 0;
    if (cnd_) { v1 = LD32(a1); goto L_0898D630; }
    goto L_0898D648;
L_0898D648:;
    a2 = 0 + 0;
    goto L_0898D64C;
L_0898D64C:;
    cnd_ = a2 != 0;
    v1 = a2 + 32;
    if (cnd_) { goto L_0898D5A4; }
    goto L_0898D654;
L_0898D654:;
    a0 = D_08C2BF38 - (-16584);
    v0 = 999;
    cnd_ = a3 == v0;
    v1 = a0 - 16584;
    if (cnd_) { goto L_0898D6BC; }
    goto L_0898D664;
L_0898D664:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-16584);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0898D6B4; }
    goto L_0898D688;
L_0898D688:;
    a0 = LD32(a1);
    goto L_0898D68C;
L_0898D68C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_0898D6C8; }
    goto L_0898D6A4;
L_0898D6A4:;
    a1 = LD32(a1+4);
    goto L_0898D6A8;
L_0898D6A8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0898D68C; }
    goto L_0898D6B0;
L_0898D6B0:;
    v1 = 0 + 0;
    goto L_0898D6B4;
L_0898D6B4:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_0898D588; }
    goto L_0898D6BC;
L_0898D6BC:;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    goto L_0898D5A4;
L_0898D6C8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0898D6A4; }
    goto L_0898D6D4;
L_0898D6D4:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0898D6A8; }
    goto L_0898D6E0;
L_0898D6E0:;
    goto L_0898D6B4;
L_0898D6E8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a2 = v1 + 0;
    if (cnd_) { goto L_0898D63C; }
    goto L_0898D6F4;
L_0898D6F4:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0898D640; }
    goto L_0898D700;
L_0898D700:;
    goto L_0898D64C;
L_0898D708:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0898D558; }
    goto L_0898D714;
L_0898D714:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0898D558; }
    goto L_0898D720;
L_0898D720:;
    goto L_0898D564;
}

/* 0898D728 */
u64 func_0898D728(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898D728:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = D_08C2A880 - (-22400);
    a0 = a0 - 22400;
    a2 = 1;
    s1 = a1 + 0;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898D750;
L_0898D750:;
    a0 = 0 < v0;
    a1 = LD32(s0+172);
    a2 = v0 + 0;
    a3 = 1;
    v0 = a1 < 0x5u;
    v1 = a1 << 2;
    v0 = v0 & a0;
    cnd_ = v0 == 0;
    v1 = v1 + s0;
    if (cnd_) { goto L_0898D794; }
    goto L_0898D774;
L_0898D774:;
    ST32(v1+152, s1);
    ST32(a2+240, a1);
    ST32(a2+228, s0);
    ST8(a2+232, a3);
    v0 = LD32(s0+172);
    ST8(s0+241, a3);
    v0 = v0 + 1;
    ST32(s0+172, v0);
    goto L_0898D794;
L_0898D794:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0898D7A8 */
rv_t func_0898D7A8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0898D7A8:;
    sp = sp - 48;
    s6 = 0 + 0;
    s5 = a1 + 0;
    s4 = 0 + 0;
    v1 = LD32(a0+172);
    cnd_ = v1 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_0898D824; }
    goto L_0898D7EC;
L_0898D7EC:;
    s7 = D_08C2A880 - (-22400);
    fp = 999;
    s3 = a0 + 0;
    goto L_0898D7F8;
L_0898D7F8:;
    cnd_ = s6 != 0;
    s1 = s4 << 2;
    if (cnd_) { goto L_0898D8A4; }
    goto L_0898D800;
L_0898D800:;
    s0 = s1 + s2;
    v0 = LD32(s0+152);
    cnd_ = s5 == v0;
    a0 = s7 - 22400;
    if (cnd_) { goto L_0898D864; }
    goto L_0898D810;
L_0898D810:;
    v1 = LD32(s2+172);
    s4 = s4 + 1;
    v0 = s4 < v1;
    cnd_ = v0 != 0;
    s3 = s3 + 1;
    if (cnd_) { goto L_0898D7F8; }
    goto L_0898D824;
L_0898D824:;
    v1 = v1 - 1;
    v0 = 1;
    ST8(s2+241, v0);
    ST32(s2+172, v1);
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0898D864:;
    a1 = s5 + 0;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898D870;
L_0898D870:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0+204); goto L_0898D888; }
    goto L_0898D878;
L_0898D878:;
    ST32(v0+240, 0);
    ST32(v0+228, 0);
    ST8(v0+232, 0);
    v1 = LD32(s0+204);
    goto L_0898D888;
L_0898D888:;
    cnd_ = v1 == 0;
    s6 = 1;
    if (cnd_) { goto L_0898D810; }
    goto L_0898D890;
L_0898D890:;
    v0 = LD32(v1+28);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(v1+28, v0);
    ST32(s0+204, 0);
    goto L_0898D810;
L_0898D8A4:;
    s0 = s1 + s2;
    a1 = LD32(s0+152);
    a0 = s7 - 22400;
    a2 = 1;
    ST32(s0+148, a1);
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898D8BC;
L_0898D8BC:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0898D8D8; }
    goto L_0898D8C4;
L_0898D8C4:;
    v0 = s4 - 1;
    ST32(v1+240, v0);
    v0 = 1;
    ST32(v1+228, s2);
    ST8(v1+232, v0);
    goto L_0898D8D8;
L_0898D8D8:;
    f0 = BITSF(LD32(s0+176));
    v0 = LD_U8(s3+196);
    v1 = LD32(s0+204);
    ST32(s0+172, FBITS(f0));
    ST8(s3+195, v0);
    ST32(s0+200, v1);
    ST32(s0+204, 0);
    ST32(s0+152, fp);
    ST32(s0+176, 0);
    ST8(s3+196, 0);
    goto L_0898D800;
}

/* 0898D904 */
void func_0898D904(u32 a0, u32 a1)
{
L_0898D904:;
    ST8(a0+41, a1);
    return;
}

/* 0898D90C */
rv_t func_0898D90C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898D90C:;
    sp = sp - 32;
    v1 = 1;
    v0 = LD_U8(a0+41);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0898D95C; }
    goto L_0898D938;
L_0898D938:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0898D95C:;
    s3 = 0 + 0;
    { rv_t r_ = func_0898CD0C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898D964;
L_0898D964:;
    v0 = LD32(s0+172);
    cnd_ = v0 == 0;
    s4 = D_08C2A880 - (-22400);
    if (cnd_) { goto L_0898D9EC; }
    goto L_0898D970;
L_0898D970:;
    s1 = s0 + 152;
    a1 = LD32(s1);
    goto L_0898D978;
L_0898D978:;
    a0 = s4 - 22400;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898D984;
L_0898D984:;
    v1 = v0 + 0;
    s1 = s1 + 4;
    cnd_ = v0 == 0;
    s2 = s0 + 100;
    if (cnd_) { goto L_0898D9D8; }
    goto L_0898D994;
L_0898D994:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s0+172); goto L_0898D9DC; }
    goto L_0898D99C;
L_0898D99C:;
    v0 = LD32(v0);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898D9B8;
L_0898D9B8:;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a1 = s3 + 0;
    a3 = s0 + 88;
    t0 = s0 + 84;
    { rv_t r_ = func_08991D5C(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898D9D0;
L_0898D9D0:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0898D938; }
    goto L_0898D9D8;
L_0898D9D8:;
    v0 = LD32(s0+172);
    goto L_0898D9DC;
L_0898D9DC:;
    s3 = s3 + 1;
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1); goto L_0898D978; }
    goto L_0898D9EC;
L_0898D9EC:;
    v1 = 1;
    goto L_0898D938;
}

/* 0898D9F4 */
rv_t func_0898D9F4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0898D9F4:;
    sp = sp - 80;
    s1 = a0 + 0;
    s2 = 0 + 0;
    { rv_t r_ = func_0898CD0C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898DA20;
L_0898DA20:;
    v0 = LD32(s1+172);
    cnd_ = v0 == 0;
    v0 = D_08AEE640 - (-6592);
    if (cnd_) { goto L_0898DAEC; }
    goto L_0898DA2C;
L_0898DA2C:;
    f20 = BITSF(LD32(v0-6592));
    s4 = D_08C2A880 - (-22400);
    s3 = s1 + 88;
    s0 = s1 + 152;
    a1 = LD32(s0);
    goto L_0898DA40;
L_0898DA40:;
    a0 = s4 - 22400;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898DA4C;
L_0898DA4C:;
    s2 = s2 + 1;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_0898DADC; }
    goto L_0898DA5C;
L_0898DA5C:;
    v0 = LD32(v0);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898DA78;
L_0898DA78:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s1+88));
    f1 = BITSF(LD32(s3+4));
    f4 = BITSF(LD32(s3+8));
    f2 = f2 - f0;
    f3 = f3 - f1;
    f5 = f5 - f4;
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f2));
    v0 = 0 + 0;
    fcc = FCMP(f20, f0, 12);
    ST32(sp+4, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f5));
    if (cnd_) { goto L_0898DAF0; }
    goto L_0898DADC;
L_0898DADC:;
    v0 = LD32(s1+172);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s0); goto L_0898DA40; }
    goto L_0898DAEC;
L_0898DAEC:;
    v0 = 1;
    goto L_0898DAF0;
L_0898DAF0:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
}

/* 0898DB14 */
rv_t func_0898DB14(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898DB14:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 248;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898DB30;
L_0898DB30:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    f0 = func_0898C998(a0, a1);
    goto L_0898DB40;
L_0898DB40:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898DB58 */
rv_t func_0898DB58(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898DB58:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0898DC7C; }
    goto L_0898DB8C;
L_0898DB8C:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEE644 - (-6588);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-6588));
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
    t0 = D_08C2A37C - (-23684);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2A38C - (-23668);
    a3 = D_08C2A39C - (-23652);
    v1 = t0 - 23684;
    a1 = v0 - 23668;
    a2 = a3 - 23652;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2A42C - (-23508);
    s0 = s3 - 23508;
    ST32(v1+8, FBITS(f5));
    a0 = 64;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-23668, FBITS(f5));
    v0 = 16;
    ST32(t0-23684, FBITS(f1));
    ST32(a3-23652, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898DC44;
L_0898DC44:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-23508, v0);
    if (cnd_) { goto L_0898DC70; }
    goto L_0898DC54;
L_0898DC54:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_0898DC5C;
L_0898DC5C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898DC5C; }
    goto L_0898DC70;
L_0898DC70:;
    v0 = s3 - 23508;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_0898DC7C;
L_0898DC7C:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0898DCA0; }
    goto L_0898DC90;
L_0898DC90:;
    v0 = D_08C2A42C - (-23508);
    a0 = LD32(v0-23508);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898DCB8; }
    goto L_0898DCA0;
L_0898DCA0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0898DCB8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898DCC0;
L_0898DCC0:;
    goto L_0898DCA0;
}

/* 0898DCC8 */
rv_t func_0898DCC8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898DCC8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0898DB58(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898DCDC;
L_0898DCDC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898DCE8 */
rv_t func_0898DCE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898DCE8:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0898DB58(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898DCFC;
L_0898DCFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898DD08 */
void func_0898DD08(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898DD08:;
    sp = sp - 32;
    s3 = a0 + 0;
    func_0886A19C(a0, a1);
    goto L_0898DD28;
L_0898DD28:;
    v0 = D_08AFA168 - (-24216);
    v0 = v0 - 24216;
    ST32(s3, v0);
    v0 = (u32)-32746;
    a3 = D_08B45A9C - (23196);
    ST16(s3+8, v0);
    a1 = 0 + 0;
    a2 = a3 + 23196;
    a0 = s3 + 136;
    v1 = s3 + 0;
    goto L_0898DD50;
L_0898DD50:;
    f0 = BITSF(LD32(a3+23196));
    f1 = BITSF(LD32(a2+4));
    f2 = BITSF(LD32(a2+8));
    a1 = a1 + 1;
    v0 = a1 < 0x4u;
    ST32(v1+88, FBITS(f0));
    ST32(v1+92, FBITS(f1));
    ST32(v1+96, FBITS(f2));
    v1 = v1 + 12;
    ST8(a0, 0);
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_0898DD50; }
    goto L_0898DD80;
L_0898DD80:;
    v1 = 999;
    v0 = 1;
    ST32(s3+84, v1);
    s2 = D_08C2A43C - (-23492);
    s1 = s2 - 23492;
    ST32(s3+80, v1);
    a0 = 12;
    ST32(s3+168, v0);
    v0 = LD32(s1+4);
    s0 = LD32(s3+4);
    ST16(s3+152, 0);
    v0 = v0 - 1;
    s0 = s0 & v0;
    ST32(s3+156, 0);
    s0 = s0 << 2;
    ST32(s3+164, 0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898DDC4;
L_0898DDC4:;
    a0 = LD32(s2-23492);
    v1 = LD32(s1+12);
    ST32(v0, s3);
    s0 = s0 + a0;
    v1 = v1 + 1;
    a1 = LD32(s0);
    ST8(v0+8, 0);
    a0 = s1 + 16;
    ST32(v0+4, a1);
    a1 = s3 + 0;
    ST32(s0, v0);
    ST32(s1+12, v1);
    func_08AC2814(a0, a1, 0, 0, 0);
    goto L_0898DDF8;
L_0898DDF8:;
    a0 = s3 + 0;
    a1 = 1;
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898DE04;
L_0898DE04:;
    sp = sp + 32;
    return;
}

/* 0898DE20 */
rv_t func_0898DE20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898DE20:;
    v0 = D_08AFA168 - (-24216);
    sp = sp - 16;
    v0 = v0 - 24216;
    s1 = D_08C2A43C - (-23492);
    s1 = s1 - 23492;
    ST32(a0, v0);
    s0 = a0 + 0;
    a1 = s0 + 0;
    a0 = s1 + 0;
    s1 = s1 + 16;
    func_08AC28FC(a0, a1, t1, t2, t3);
    goto L_0898DE58;
L_0898DE58:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    a2 = 1;
    func_08AC26C4(a0, a1, 0, 0, 0);
    goto L_0898DE68;
L_0898DE68:;
    a0 = s0 + 0;
    { u64 r_ = func_0886A2F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898DE70;
L_0898DE70:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898DE84 */
rv_t func_0898DE84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898DE84:;
    v0 = D_08AFA168 - (-24216);
    sp = sp - 16;
    v0 = v0 - 24216;
    s1 = D_08C2A43C - (-23492);
    s1 = s1 - 23492;
    ST32(a0, v0);
    s0 = a0 + 0;
    a1 = s0 + 0;
    a0 = s1 + 0;
    s1 = s1 + 16;
    func_08AC28FC(a0, a1, t1, t2, t3);
    goto L_0898DEBC;
L_0898DEBC:;
    a1 = s0 + 0;
    a2 = 1;
    a0 = s1 + 0;
    func_08AC26C4(a0, a1, 0, 0, 0);
    goto L_0898DECC;
L_0898DECC:;
    a0 = s0 + 0;
    { u64 r_ = func_0886A2F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898DED4;
L_0898DED4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898DEDC;
L_0898DEDC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898DEF0 */
rv_t func_0898DEF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898DEF0:;
    sp = sp - 16;
    a1 = 1;
    { rv_t r_ = func_08874390(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898DF00;
L_0898DF00:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898DF0C */
rv_t func_0898DF0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898DF0C:;
    sp = sp - 16;
    { rv_t r_ = func_08869FCC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898DF1C;
L_0898DF1C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898DF28 */
void func_0898DF28(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898DF28:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 172;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898DF4C;
L_0898DF4C:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_0898DD08(a0, a1);
    goto L_0898DF5C;
L_0898DF5C:;
    a0 = s2 + 0;
    cnd_ = s2 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0898DF80; }
    goto L_0898DF68;
L_0898DF68:;
    goto L_0898DF6C;
L_0898DF6C:;
    sp = sp + 16;
    return;
L_0898DF80:;
    v0 = LD32(s2);
    v1 = LD32(v0+44);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898DF90;
L_0898DF90:;
    goto L_0898DF6C;
}

/* 0898DF98 */
rv_t func_0898DF98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898DF98:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_0886A474(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898DFB4;
L_0898DFB4:;
    a2 = sp + 4;
    a1 = 0 + 0;
    goto L_0898DFBC;
L_0898DFBC:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0898DFBC; }
    goto L_0898DFE0;
L_0898DFE0:;
    a1 = s1 + 80;
    a2 = 0 + 0;
    goto L_0898DFE8;
L_0898DFE8:;
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
    if (cnd_) { goto L_0898DFE8; }
    goto L_0898E010;
L_0898E010:;
    a1 = s1 + 84;
    a2 = 0 + 0;
    goto L_0898E018;
L_0898E018:;
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
    if (cnd_) { goto L_0898E018; }
    goto L_0898E040;
L_0898E040:;
    a1 = s1 + 164;
    a2 = 0 + 0;
    goto L_0898E048;
L_0898E048:;
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
    if (cnd_) { goto L_0898E048; }
    goto L_0898E070;
L_0898E070:;
    a1 = s1 + 152;
    a2 = 0 + 0;
    goto L_0898E078;
L_0898E078:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x2u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0898E078; }
    goto L_0898E0A0;
L_0898E0A0:;
    ST16(sp, 0);
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_0898E0AC;
L_0898E0AC:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x2u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0898E0AC; }
    goto L_0898E0D0;
L_0898E0D0:;
    t0 = 0 + 0;
    a3 = s1 + 0;
    goto L_0898E0D8;
L_0898E0D8:;
    a1 = a3 + 88;
    a2 = 0 + 0;
    goto L_0898E0E0;
L_0898E0E0:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0xcu;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0898E0E0; }
    goto L_0898E108;
L_0898E108:;
    t0 = t0 + 1;
    v0 = t0 < 0x4u;
    cnd_ = v0 != 0;
    a3 = a3 + 12;
    if (cnd_) { goto L_0898E0D8; }
    goto L_0898E118;
L_0898E118:;
    v1 = LD32(sp+4);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0898E138; }
    goto L_0898E128;
L_0898E128:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0898E138:;
    a1 = s1 + 168;
    a2 = 0 + 0;
    goto L_0898E140;
L_0898E140:;
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
    if (cnd_) { goto L_0898E140; }
    goto L_0898E168;
L_0898E168:;
    a1 = s1 + 160;
    a2 = 0 + 0;
    goto L_0898E170;
L_0898E170:;
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
    if (cnd_) { goto L_0898E170; }
    goto L_0898E198;
L_0898E198:;
    goto L_0898E128;
}

/* 0898E1A0 */
rv_t func_0898E1A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898E1A0:;
    sp = sp - 32;
    s1 = a1 + 0;
    s3 = 0 + 0;
    s2 = a0 + 0;
    { rv_t r_ = func_0886A67C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898E1C8;
L_0898E1C8:;
    a0 = s1 + 0;
    a1 = 1;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898E1D4;
L_0898E1D4:;
    a1 = LD32(s2+80);
    a0 = s1 + 0;
    s0 = s2 + 88;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898E1E4;
L_0898E1E4:;
    a1 = LD32(s2+84);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898E1F0;
L_0898E1F0:;
    f12 = BITSF(LD32(s2+164));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898E1FC;
L_0898E1FC:;
    a1 = LD_U16(s2+152);
    a0 = s1 + 0;
    { rv_t r_ = func_0882DA60(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898E208;
L_0898E208:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_0882DA60(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898E214;
L_0898E214:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    s3 = s3 + 1;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898E224;
L_0898E224:;
    v1 = s3 < 0x4u;
    cnd_ = v1 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_0898E214; }
    goto L_0898E230;
L_0898E230:;
    a1 = LD32(s2+168);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898E23C;
L_0898E23C:;
    a1 = LD32(s2+160);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898E248;
L_0898E248:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0898E264 */
rv_t func_0898E264(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898E264:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s0 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s0 < 0x1u;
    v0 = v0 & v1;
    s1 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0898E2E4; }
    goto L_0898E298;
L_0898E298:;
    v0 = s0 < 0x1u;
    v1 = s1 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0898E2BC; }
    goto L_0898E2AC;
L_0898E2AC:;
    v0 = D_08C2A43C - (-23492);
    a0 = LD32(v0-23492);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898E2D4; }
    goto L_0898E2BC;
L_0898E2BC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0898E2D4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898E2DC;
L_0898E2DC:;
    goto L_0898E2BC;
L_0898E2E4:;
    s3 = D_08C2A43C - (-23492);
    s2 = s3 - 23492;
    a0 = 64;
    v0 = 16;
    ST32(s2+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898E2FC;
L_0898E2FC:;
    a0 = 0 + 0;
    a1 = LD32(s2+4);
    cnd_ = a1 == 0;
    ST32(s3-23492, v0);
    if (cnd_) { goto L_0898E324; }
    goto L_0898E30C;
L_0898E30C:;
    v1 = v0 + 0;
    goto L_0898E310;
L_0898E310:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898E310; }
    goto L_0898E324;
L_0898E324:;
    v0 = s3 - 23492;
    v1 = v0 + 16;
    ST32(s2+8, 0);
    ST32(v0+16, 0);
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    ST32(s2+12, 0);
    goto L_0898E298;
}

/* 0898E344 */
rv_t func_0898E344(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898E344:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0898E264(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898E358;
L_0898E358:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898E364 */
rv_t func_0898E364(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898E364:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0898E264(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898E378;
L_0898E378:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898E384 */
void func_0898E384(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898E384:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = a2 + 0;
    s3 = a0 + 0;
    s1 = s3 + 32;
    func_08873E94(a0, a1);
    goto L_0898E3B4;
L_0898E3B4:;
    v0 = D_08AFA1D0 - (-24112);
    v0 = v0 - 24112;
    ST32(s3, v0);
    v0 = 4;
    a0 = 16;
    ST32(s3+28, s0);
    ST32(s1+4, v0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898E3D4;
L_0898E3D4:;
    a1 = LD32(s1+4);
    ST32(s3+32, v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0898E3FC; }
    goto L_0898E3E4;
L_0898E3E4:;
    v1 = v0 + 0;
    goto L_0898E3E8;
L_0898E3E8:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898E3E8; }
    goto L_0898E3FC;
L_0898E3FC:;
    s0 = s3 + 48;
    v0 = 4;
    ST32(s1+8, 0);
    a0 = 16;
    ST32(s0+4, v0);
    ST32(s1+12, 0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898E418;
L_0898E418:;
    a1 = LD32(s0+4);
    ST32(s3+48, v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0898E440; }
    goto L_0898E428;
L_0898E428:;
    v1 = v0 + 0;
    goto L_0898E42C;
L_0898E42C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898E42C; }
    goto L_0898E440;
L_0898E440:;
    s1 = s3 + 64;
    v0 = 4;
    ST32(s0+8, 0);
    a0 = 16;
    ST32(s1+4, v0);
    ST32(s0+12, 0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898E45C;
L_0898E45C:;
    a1 = LD32(s1+4);
    ST32(s3+64, v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0898E484; }
    goto L_0898E46C;
L_0898E46C:;
    v1 = v0 + 0;
    goto L_0898E470;
L_0898E470:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898E470; }
    goto L_0898E484;
L_0898E484:;
    s0 = s3 + 80;
    v0 = 4;
    ST32(s1+8, 0);
    a0 = 16;
    ST32(s0+4, v0);
    ST32(s1+12, 0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898E4A0;
L_0898E4A0:;
    a1 = LD32(s0+4);
    ST32(s3+80, v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0898E4C8; }
    goto L_0898E4B0;
L_0898E4B0:;
    v1 = v0 + 0;
    goto L_0898E4B4;
L_0898E4B4:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898E4B4; }
    goto L_0898E4C8;
L_0898E4C8:;
    s1 = s3 + 96;
    v0 = 4;
    ST32(s0+8, 0);
    a0 = 16;
    ST32(s1+4, v0);
    ST32(s0+12, 0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898E4E4;
L_0898E4E4:;
    a1 = LD32(s1+4);
    ST32(s3+96, v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0898E50C; }
    goto L_0898E4F4;
L_0898E4F4:;
    v1 = v0 + 0;
    goto L_0898E4F8;
L_0898E4F8:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898E4F8; }
    goto L_0898E50C;
L_0898E50C:;
    s0 = s3 + 112;
    v0 = 4;
    ST32(s1+8, 0);
    a0 = 16;
    ST32(s0+4, v0);
    ST32(s1+12, 0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898E528;
L_0898E528:;
    a1 = LD32(s0+4);
    ST32(s3+112, v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0898E550; }
    goto L_0898E538;
L_0898E538:;
    v1 = v0 + 0;
    goto L_0898E53C;
L_0898E53C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898E53C; }
    goto L_0898E550;
L_0898E550:;
    v0 = s3 + 128;
    a1 = 4;
    s4 = s3 + 140;
    v1 = 999;
    ST32(s0+8, 0);
    a0 = 16;
    ST32(s0+12, 0);
    ST32(v0+8, 0);
    ST32(s3+128, v1);
    ST32(v0+4, 0);
    ST32(s4+4, a1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898E580;
L_0898E580:;
    a1 = LD32(s4+4);
    ST32(s3+140, v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0898E5A8; }
    goto L_0898E590;
L_0898E590:;
    v1 = v0 + 0;
    goto L_0898E594;
L_0898E594:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0898E594; }
    goto L_0898E5A8;
L_0898E5A8:;
    v0 = (u32)-32758;
    ST16(s3+8, v0);
    s2 = D_08C2A508 - (-23288);
    a0 = s3 + 0;
    ST32(s4+8, 0);
    s1 = s2 - 23288;
    ST32(s4+12, 0);
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898E5C8;
L_0898E5C8:;
    a0 = s3 + 0;
    a1 = 1;
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898E5D4;
L_0898E5D4:;
    v0 = LD32(s1+4);
    s0 = LD32(s3+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898E5EC;
L_0898E5EC:;
    a0 = LD32(s2-23288);
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
}

/* 0898E638 */
rv_t func_0898E638(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0898E638:;
    v0 = D_08AFA1D0 - (-24112);
    v0 = v0 - 24112;
    ST32(a0, v0);
    sp = sp - 64;
    v1 = a0 + 32;
    s2 = a0 + 0;
    a0 = sp + 0;
    ST32(sp, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    func_08AC29A4(a0);
    goto L_0898E678;
L_0898E678:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    v0 = s2 + 48;
    if (cnd_) { goto L_0898E974; }
    goto L_0898E684;
L_0898E684:;
    a0 = sp + 0;
    goto L_0898E688;
L_0898E688:;
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    func_08AC29A4(a0);
    goto L_0898E698;
L_0898E698:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    v0 = s2 + 64;
    if (cnd_) { goto L_0898E940; }
    goto L_0898E6A4;
L_0898E6A4:;
    a0 = sp + 0;
    goto L_0898E6A8;
L_0898E6A8:;
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    func_08AC29A4(a0);
    goto L_0898E6B8;
L_0898E6B8:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    v0 = s2 + 80;
    if (cnd_) { goto L_0898E90C; }
    goto L_0898E6C4;
L_0898E6C4:;
    a0 = sp + 0;
    goto L_0898E6C8;
L_0898E6C8:;
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    func_08AC29A4(a0);
    goto L_0898E6D8;
L_0898E6D8:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    v0 = s2 + 96;
    if (cnd_) { goto L_0898E8D8; }
    goto L_0898E6E4;
L_0898E6E4:;
    a0 = sp + 0;
    goto L_0898E6E8;
L_0898E6E8:;
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    func_08AC29A4(a0);
    goto L_0898E6F8;
L_0898E6F8:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    v0 = s2 + 112;
    if (cnd_) { goto L_0898E8A4; }
    goto L_0898E704;
L_0898E704:;
    a0 = sp + 0;
    goto L_0898E708;
L_0898E708:;
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    func_08AC29A4(a0);
    goto L_0898E718;
L_0898E718:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    s3 = sp + 16;
    if (cnd_) { goto L_0898E870; }
    goto L_0898E724;
L_0898E724:;
    v0 = s2 + 140;
    a0 = s3 + 0;
    ST32(sp+16, v0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    func_08AC2ABC(a0);
    goto L_0898E73C;
L_0898E73C:;
    s1 = LD32(sp+24);
    cnd_ = s1 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_0898E840; }
    goto L_0898E748;
L_0898E748:;
    a0 = D_08C2A508 - (-23288);
    goto L_0898E74C;
L_0898E74C:;
    a0 = a0 - 23288;
    a1 = s2 + 0;
    func_08AC2BD4(a0, a1, 0, 0, 0);
    goto L_0898E758;
L_0898E758:;
    a0 = LD32(s2+140);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898E830; }
    goto L_0898E764;
L_0898E764:;
    a0 = LD32(s2+112);
    goto L_0898E768;
L_0898E768:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898E820; }
    goto L_0898E770;
L_0898E770:;
    a0 = LD32(s2+96);
    goto L_0898E774;
L_0898E774:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898E810; }
    goto L_0898E77C;
L_0898E77C:;
    a0 = LD32(s2+80);
    goto L_0898E780;
L_0898E780:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898E800; }
    goto L_0898E788;
L_0898E788:;
    a0 = LD32(s2+64);
    goto L_0898E78C;
L_0898E78C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898E7F0; }
    goto L_0898E794;
L_0898E794:;
    a0 = LD32(s2+48);
    goto L_0898E798;
L_0898E798:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898E7E0; }
    goto L_0898E7A0;
L_0898E7A0:;
    a0 = LD32(s2+32);
    goto L_0898E7A4;
L_0898E7A4:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898E7D0; }
    goto L_0898E7AC;
L_0898E7AC:;
    a0 = s2 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898E7B4;
L_0898E7B4:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_0898E7D0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898E7D8;
L_0898E7D8:;
    goto L_0898E7AC;
L_0898E7E0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898E7E8;
L_0898E7E8:;
    a0 = LD32(s2+32);
    goto L_0898E7A4;
L_0898E7F0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898E7F8;
L_0898E7F8:;
    a0 = LD32(s2+48);
    goto L_0898E798;
L_0898E800:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898E808;
L_0898E808:;
    a0 = LD32(s2+64);
    goto L_0898E78C;
L_0898E810:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898E818;
L_0898E818:;
    a0 = LD32(s2+80);
    goto L_0898E780;
L_0898E820:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898E828;
L_0898E828:;
    a0 = LD32(s2+96);
    goto L_0898E774;
L_0898E830:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898E838;
L_0898E838:;
    a0 = LD32(s2+112);
    goto L_0898E768;
L_0898E840:;
    s0 = LD32(s1);
    func_08AC2ABC(a0);
    goto L_0898E848;
L_0898E848:;
    a1 = LD32(s1);
    a0 = LD32(sp+16);
    func_08AC2B2C(a0, a1, 0, 0, 0);
    goto L_0898E854;
L_0898E854:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898E85C;
L_0898E85C:;
    s1 = LD32(sp+24);
    cnd_ = s1 != 0;
    if (cnd_) { a0 = s3 + 0; goto L_0898E840; }
    goto L_0898E868;
L_0898E868:;
    a0 = D_08C2A508 - (-23288);
    goto L_0898E74C;
L_0898E870:;
    a0 = sp + 0;
    goto L_0898E874;
L_0898E874:;
    s0 = LD32(s1);
    func_08AC29A4(a0);
    goto L_0898E87C;
L_0898E87C:;
    a1 = LD32(s1);
    a0 = LD32(sp);
    func_08AC2A14(a0, a1, 0, 0, 0);
    goto L_0898E888;
L_0898E888:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898E890;
L_0898E890:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0898E874; }
    goto L_0898E89C;
L_0898E89C:;
    s3 = sp + 16;
    goto L_0898E724;
L_0898E8A4:;
    a0 = sp + 0;
    goto L_0898E8A8;
L_0898E8A8:;
    s0 = LD32(s1);
    func_08AC29A4(a0);
    goto L_0898E8B0;
L_0898E8B0:;
    a1 = LD32(s1);
    a0 = LD32(sp);
    func_08AC2A14(a0, a1, 0, 0, 0);
    goto L_0898E8BC;
L_0898E8BC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898E8C4;
L_0898E8C4:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0898E8A8; }
    goto L_0898E8D0;
L_0898E8D0:;
    v0 = s2 + 112;
    goto L_0898E708;
L_0898E8D8:;
    a0 = sp + 0;
    goto L_0898E8DC;
L_0898E8DC:;
    s0 = LD32(s1);
    func_08AC29A4(a0);
    goto L_0898E8E4;
L_0898E8E4:;
    a1 = LD32(s1);
    a0 = LD32(sp);
    func_08AC2A14(a0, a1, 0, 0, 0);
    goto L_0898E8F0;
L_0898E8F0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898E8F8;
L_0898E8F8:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0898E8DC; }
    goto L_0898E904;
L_0898E904:;
    v0 = s2 + 96;
    goto L_0898E6E8;
L_0898E90C:;
    a0 = sp + 0;
    goto L_0898E910;
L_0898E910:;
    s0 = LD32(s1);
    func_08AC29A4(a0);
    goto L_0898E918;
L_0898E918:;
    a1 = LD32(s1);
    a0 = LD32(sp);
    func_08AC2A14(a0, a1, 0, 0, 0);
    goto L_0898E924;
L_0898E924:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898E92C;
L_0898E92C:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0898E910; }
    goto L_0898E938;
L_0898E938:;
    v0 = s2 + 80;
    goto L_0898E6C8;
L_0898E940:;
    a0 = sp + 0;
    goto L_0898E944;
L_0898E944:;
    s0 = LD32(s1);
    func_08AC29A4(a0);
    goto L_0898E94C;
L_0898E94C:;
    a1 = LD32(s1);
    a0 = LD32(sp);
    func_08AC2A14(a0, a1, 0, 0, 0);
    goto L_0898E958;
L_0898E958:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898E960;
L_0898E960:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0898E944; }
    goto L_0898E96C;
L_0898E96C:;
    v0 = s2 + 64;
    goto L_0898E6A8;
L_0898E974:;
    a0 = sp + 0;
    goto L_0898E978;
L_0898E978:;
    s0 = LD32(s1);
    func_08AC29A4(a0);
    goto L_0898E980;
L_0898E980:;
    a1 = LD32(s1);
    a0 = LD32(sp);
    func_08AC2A14(a0, a1, 0, 0, 0);
    goto L_0898E98C;
L_0898E98C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898E994;
L_0898E994:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0898E978; }
    goto L_0898E9A0;
L_0898E9A0:;
    v0 = s2 + 48;
    goto L_0898E688;
}

/* 0898E9A8 */
rv_t func_0898E9A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0898E9A8:;
    v0 = D_08AFA1D0 - (-24112);
    v0 = v0 - 24112;
    ST32(a0, v0);
    sp = sp - 64;
    v1 = a0 + 32;
    s2 = a0 + 0;
    a0 = sp + 0;
    ST32(sp, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    func_08AC29A4(a0);
    goto L_0898E9E8;
L_0898E9E8:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    v0 = s2 + 48;
    if (cnd_) { goto L_0898ECEC; }
    goto L_0898E9F4;
L_0898E9F4:;
    a0 = sp + 0;
    goto L_0898E9F8;
L_0898E9F8:;
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    func_08AC29A4(a0);
    goto L_0898EA08;
L_0898EA08:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    v0 = s2 + 64;
    if (cnd_) { goto L_0898ECB8; }
    goto L_0898EA14;
L_0898EA14:;
    a0 = sp + 0;
    goto L_0898EA18;
L_0898EA18:;
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    func_08AC29A4(a0);
    goto L_0898EA28;
L_0898EA28:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    v0 = s2 + 80;
    if (cnd_) { goto L_0898EC84; }
    goto L_0898EA34;
L_0898EA34:;
    a0 = sp + 0;
    goto L_0898EA38;
L_0898EA38:;
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    func_08AC29A4(a0);
    goto L_0898EA48;
L_0898EA48:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    v0 = s2 + 96;
    if (cnd_) { goto L_0898EC50; }
    goto L_0898EA54;
L_0898EA54:;
    a0 = sp + 0;
    goto L_0898EA58;
L_0898EA58:;
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    func_08AC29A4(a0);
    goto L_0898EA68;
L_0898EA68:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    v0 = s2 + 112;
    if (cnd_) { goto L_0898EC1C; }
    goto L_0898EA74;
L_0898EA74:;
    a0 = sp + 0;
    goto L_0898EA78;
L_0898EA78:;
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    func_08AC29A4(a0);
    goto L_0898EA88;
L_0898EA88:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    s3 = sp + 16;
    if (cnd_) { goto L_0898EBE8; }
    goto L_0898EA94;
L_0898EA94:;
    v0 = s2 + 140;
    a0 = s3 + 0;
    ST32(sp+16, v0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    func_08AC2ABC(a0);
    goto L_0898EAAC;
L_0898EAAC:;
    s1 = LD32(sp+24);
    cnd_ = s1 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_0898EBB8; }
    goto L_0898EAB8;
L_0898EAB8:;
    a0 = D_08C2A508 - (-23288);
    goto L_0898EABC;
L_0898EABC:;
    a0 = a0 - 23288;
    a1 = s2 + 0;
    func_08AC2BD4(a0, a1, 0, 0, 0);
    goto L_0898EAC8;
L_0898EAC8:;
    a0 = LD32(s2+140);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898EBA8; }
    goto L_0898EAD4;
L_0898EAD4:;
    a0 = LD32(s2+112);
    goto L_0898EAD8;
L_0898EAD8:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898EB98; }
    goto L_0898EAE0;
L_0898EAE0:;
    a0 = LD32(s2+96);
    goto L_0898EAE4;
L_0898EAE4:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898EB88; }
    goto L_0898EAEC;
L_0898EAEC:;
    a0 = LD32(s2+80);
    goto L_0898EAF0;
L_0898EAF0:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898EB78; }
    goto L_0898EAF8;
L_0898EAF8:;
    a0 = LD32(s2+64);
    goto L_0898EAFC;
L_0898EAFC:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898EB68; }
    goto L_0898EB04;
L_0898EB04:;
    a0 = LD32(s2+48);
    goto L_0898EB08;
L_0898EB08:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898EB58; }
    goto L_0898EB10;
L_0898EB10:;
    a0 = LD32(s2+32);
    goto L_0898EB14;
L_0898EB14:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0898EB48; }
    goto L_0898EB1C;
L_0898EB1C:;
    a0 = s2 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898EB24;
L_0898EB24:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898EB2C;
L_0898EB2C:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_0898EB48:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898EB50;
L_0898EB50:;
    goto L_0898EB1C;
L_0898EB58:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898EB60;
L_0898EB60:;
    a0 = LD32(s2+32);
    goto L_0898EB14;
L_0898EB68:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898EB70;
L_0898EB70:;
    a0 = LD32(s2+48);
    goto L_0898EB08;
L_0898EB78:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898EB80;
L_0898EB80:;
    a0 = LD32(s2+64);
    goto L_0898EAFC;
L_0898EB88:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898EB90;
L_0898EB90:;
    a0 = LD32(s2+80);
    goto L_0898EAF0;
L_0898EB98:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898EBA0;
L_0898EBA0:;
    a0 = LD32(s2+96);
    goto L_0898EAE4;
L_0898EBA8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898EBB0;
L_0898EBB0:;
    a0 = LD32(s2+112);
    goto L_0898EAD8;
L_0898EBB8:;
    s0 = LD32(s1);
    func_08AC2ABC(a0);
    goto L_0898EBC0;
L_0898EBC0:;
    a1 = LD32(s1);
    a0 = LD32(sp+16);
    func_08AC2B2C(a0, a1, 0, 0, 0);
    goto L_0898EBCC;
L_0898EBCC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898EBD4;
L_0898EBD4:;
    s1 = LD32(sp+24);
    cnd_ = s1 != 0;
    if (cnd_) { a0 = s3 + 0; goto L_0898EBB8; }
    goto L_0898EBE0;
L_0898EBE0:;
    a0 = D_08C2A508 - (-23288);
    goto L_0898EABC;
L_0898EBE8:;
    a0 = sp + 0;
    goto L_0898EBEC;
L_0898EBEC:;
    s0 = LD32(s1);
    func_08AC29A4(a0);
    goto L_0898EBF4;
L_0898EBF4:;
    a1 = LD32(s1);
    a0 = LD32(sp);
    func_08AC2A14(a0, a1, 0, 0, 0);
    goto L_0898EC00;
L_0898EC00:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898EC08;
L_0898EC08:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0898EBEC; }
    goto L_0898EC14;
L_0898EC14:;
    s3 = sp + 16;
    goto L_0898EA94;
L_0898EC1C:;
    a0 = sp + 0;
    goto L_0898EC20;
L_0898EC20:;
    s0 = LD32(s1);
    func_08AC29A4(a0);
    goto L_0898EC28;
L_0898EC28:;
    a1 = LD32(s1);
    a0 = LD32(sp);
    func_08AC2A14(a0, a1, 0, 0, 0);
    goto L_0898EC34;
L_0898EC34:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898EC3C;
L_0898EC3C:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0898EC20; }
    goto L_0898EC48;
L_0898EC48:;
    v0 = s2 + 112;
    goto L_0898EA78;
L_0898EC50:;
    a0 = sp + 0;
    goto L_0898EC54;
L_0898EC54:;
    s0 = LD32(s1);
    func_08AC29A4(a0);
    goto L_0898EC5C;
L_0898EC5C:;
    a1 = LD32(s1);
    a0 = LD32(sp);
    func_08AC2A14(a0, a1, 0, 0, 0);
    goto L_0898EC68;
L_0898EC68:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898EC70;
L_0898EC70:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0898EC54; }
    goto L_0898EC7C;
L_0898EC7C:;
    v0 = s2 + 96;
    goto L_0898EA58;
L_0898EC84:;
    a0 = sp + 0;
    goto L_0898EC88;
L_0898EC88:;
    s0 = LD32(s1);
    func_08AC29A4(a0);
    goto L_0898EC90;
L_0898EC90:;
    a1 = LD32(s1);
    a0 = LD32(sp);
    func_08AC2A14(a0, a1, 0, 0, 0);
    goto L_0898EC9C;
L_0898EC9C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898ECA4;
L_0898ECA4:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0898EC88; }
    goto L_0898ECB0;
L_0898ECB0:;
    v0 = s2 + 80;
    goto L_0898EA38;
L_0898ECB8:;
    a0 = sp + 0;
    goto L_0898ECBC;
L_0898ECBC:;
    s0 = LD32(s1);
    func_08AC29A4(a0);
    goto L_0898ECC4;
L_0898ECC4:;
    a1 = LD32(s1);
    a0 = LD32(sp);
    func_08AC2A14(a0, a1, 0, 0, 0);
    goto L_0898ECD0;
L_0898ECD0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898ECD8;
L_0898ECD8:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0898ECBC; }
    goto L_0898ECE4;
L_0898ECE4:;
    v0 = s2 + 64;
    goto L_0898EA18;
L_0898ECEC:;
    a0 = sp + 0;
    goto L_0898ECF0;
L_0898ECF0:;
    s0 = LD32(s1);
    func_08AC29A4(a0);
    goto L_0898ECF8;
L_0898ECF8:;
    a1 = LD32(s1);
    a0 = LD32(sp);
    func_08AC2A14(a0, a1, 0, 0, 0);
    goto L_0898ED04;
L_0898ED04:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898ED0C;
L_0898ED0C:;
    s1 = LD32(sp+8);
    cnd_ = s1 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0898ECF0; }
    goto L_0898ED18;
L_0898ED18:;
    v0 = s2 + 48;
    goto L_0898E9F8;
}

/* 0898ED20 */
rv_t func_0898ED20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898ED20:;
    sp = sp - 32;
    v0 = 0x8075;
    s1 = a0 + 0;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    s0 = a1 + 0;
    if (cnd_) { goto L_0898EDAC; }
    goto L_0898ED44;
L_0898ED44:;
    v0 = 0x801f;
    cnd_ = v1 == v0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0898ED6C; }
    goto L_0898ED50;
L_0898ED50:;
    { rv_t r_ = func_08874198(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898ED58;
L_0898ED58:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0898ED6C:;
    a1 = LD32(a1+4);
    { u64 r_ = func_08990394(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898ED74;
L_0898ED74:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a2 = sp + 0;
    if (cnd_) { goto L_0898EDA4; }
    goto L_0898ED84;
L_0898ED84:;
    v0 = 999;
    ST32(sp+4, v0);
    v0 = 9;
    a3 = LD32(s0+24);
    ST32(sp, v0);
    v1 = LD32(a3);
    ST32(sp+4, v1);
    { rv_t r_ = func_089919F4(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898EDA4;
L_0898EDA4:;
    v0 = 1;
    goto L_0898ED58;
L_0898EDAC:;
    a1 = LD32(a1+24);
    { rv_t r_ = func_0898EDBC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898EDB4;
L_0898EDB4:;
    v0 = 1;
    goto L_0898ED58;
}

/* 0898EDBC */
rv_t func_0898EDBC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898EDBC:;
    v1 = LD32(a1);
    sp = sp - 16;
    v0 = v1 < 0xeu;
    cnd_ = v0 == 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_0898EDF8; }
    goto L_0898EDD4;
L_0898EDD4:;
    v0 = v1 << 2;
    v1 = D_08ADE030 - (-8144);
    v1 = v1 - 8144;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0898EDF0u: goto L_0898EDF0; case 0x0898EDF8u: goto L_0898EDF8; case 0x0898EE04u: goto L_0898EE04; case 0x0898EE14u: goto L_0898EE14; case 0x0898EE24u: goto L_0898EE24; case 0x0898EE34u: goto L_0898EE34; case 0x0898EE44u: goto L_0898EE44; case 0x0898EE54u: goto L_0898EE54; case 0x0898EE64u: goto L_0898EE64; case 0x0898EE74u: goto L_0898EE74; case 0x0898EE84u: goto L_0898EE84; case 0x0898EE94u: goto L_0898EE94; case 0x0898EEA4u: goto L_0898EEA4; case 0x0898EEB4u: goto L_0898EEB4; default: rs_break(0, 0x0898ede8); }
L_0898EDF0:;
    a0 = a2 + 0;
    { rv_t r_ = func_0898F104(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898EDF8;
L_0898EDF8:;
    goto L_0898EDFC;
L_0898EDFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0898EE04:;
    a0 = a2 + 0;
    { rv_t r_ = func_0898F1C8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898EE0C;
L_0898EE0C:;
    goto L_0898EDFC;
L_0898EE14:;
    a0 = a2 + 0;
    { rv_t r_ = func_0898F268(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898EE1C;
L_0898EE1C:;
    goto L_0898EDFC;
L_0898EE24:;
    a0 = a2 + 0;
    { rv_t r_ = func_0898F53C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898EE2C;
L_0898EE2C:;
    goto L_0898EDFC;
L_0898EE34:;
    a0 = a2 + 0;
    { rv_t r_ = func_0898F750(a0, a1, a2, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898EE3C;
L_0898EE3C:;
    goto L_0898EDFC;
L_0898EE44:;
    a0 = a2 + 0;
    { rv_t r_ = func_0898F820(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898EE4C;
L_0898EE4C:;
    goto L_0898EDFC;
L_0898EE54:;
    a0 = a2 + 0;
    { rv_t r_ = func_0898F9BC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898EE5C;
L_0898EE5C:;
    goto L_0898EDFC;
L_0898EE64:;
    a0 = a2 + 0;
    { u64 r_ = func_0898FAEC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898EE6C;
L_0898EE6C:;
    goto L_0898EDFC;
L_0898EE74:;
    a0 = a2 + 0;
    { rv_t r_ = func_0898FB48(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898EE7C;
L_0898EE7C:;
    goto L_0898EDFC;
L_0898EE84:;
    a0 = a2 + 0;
    { rv_t r_ = func_0898FC3C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898EE8C;
L_0898EE8C:;
    goto L_0898EDFC;
L_0898EE94:;
    a0 = a2 + 0;
    { rv_t r_ = func_0898FCB4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898EE9C;
L_0898EE9C:;
    goto L_0898EDFC;
L_0898EEA4:;
    a0 = a2 + 0;
    { rv_t r_ = func_0898FCD0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898EEAC;
L_0898EEAC:;
    goto L_0898EDFC;
L_0898EEB4:;
    a0 = a2 + 0;
    { rv_t r_ = func_0898FDF0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898EEBC;
L_0898EEBC:;
    goto L_0898EDFC;
}

/* 0898EEC4 */
u64 func_0898EEC4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0898EEC4:;
    sp = sp - 48;
    a2 = D_08C2A508 - (-23288);
    v1 = a2 - 23288;
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
    if (cnd_) { goto L_0898EF60; }
    goto L_0898EF14;
L_0898EF14:;
    a2 = LD32(a2-23288);
    a3 = a1 + 0;
    goto L_0898EF1C;
L_0898EF1C:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0898EF50; }
    goto L_0898EF34;
L_0898EF34:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0898EF64; }
    goto L_0898EF44;
L_0898EF44:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0898EF34; }
    goto L_0898EF50;
L_0898EF50:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0898EF1C; }
    goto L_0898EF60;
L_0898EF60:;
    v0 = LD32(sp+8);
    goto L_0898EF64;
L_0898EF64:;
    cnd_ = v0 == 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_0898EF98; }
    goto L_0898EF6C;
L_0898EF6C:;
    s3 = LD32(v0);
    goto L_0898EF70;
L_0898EF70:;
    a0 = sp + 0;
    v0 = LD32(s3+28);
    cnd_ = v0 == s0;
    a1 = 1;
    if (cnd_) { goto L_0898F05C; }
    goto L_0898EF80;
L_0898EF80:;
    { u64 r_ = func_08AC1700(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898EF88;
L_0898EF88:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { s3 = LD32(v0); goto L_0898EF70; }
    goto L_0898EF94;
L_0898EF94:;
    s1 = LD32(sp);
    goto L_0898EF98;
L_0898EF98:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0898F01C; }
    goto L_0898EFA8;
L_0898EFA8:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0898F01C; }
    goto L_0898EFB4;
L_0898EFB4:;
    v0 = LD32(s1);
    goto L_0898EFB8;
L_0898EFB8:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0898F00C; }
    goto L_0898EFCC;
L_0898EFCC:;
    v0 = LD_U8(s0+8);
    goto L_0898EFD0;
L_0898EFD0:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0898F054; }
    goto L_0898EFD8;
L_0898EFD8:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0898F044; }
    goto L_0898EFE0;
L_0898EFE0:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0898EFE8;
L_0898EFE8:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898EFF4;
L_0898EFF4:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0898F000;
L_0898F000:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0898EFD0; }
    goto L_0898F008;
L_0898F008:;
    v1 = LD32(s1+4);
    goto L_0898F00C;
L_0898F00C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0898EFB8; }
    goto L_0898F01C;
L_0898F01C:;
    v0 = 0 + 0;
    goto L_0898F020;
L_0898F020:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_0898F044:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0898EFE8;
L_0898F054:;
    s0 = LD32(s0+4);
    goto L_0898F000;
L_0898F05C:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0898F0E4; }
    goto L_0898F070;
L_0898F070:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_0898F0E4; }
    goto L_0898F07C;
L_0898F07C:;
    v0 = LD32(s1);
    goto L_0898F080;
L_0898F080:;
    s5 = s4 << 2;
    v0 = s5 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0898F0D4; }
    goto L_0898F094;
L_0898F094:;
    v0 = LD_U8(s0+8);
    goto L_0898F098;
L_0898F098:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0898F0FC; }
    goto L_0898F0A0;
L_0898F0A0:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0898F0EC; }
    goto L_0898F0A8;
L_0898F0A8:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0898F0B0;
L_0898F0B0:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898F0BC;
L_0898F0BC:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0898F0C8;
L_0898F0C8:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0898F098; }
    goto L_0898F0D0;
L_0898F0D0:;
    v1 = LD32(s1+4);
    goto L_0898F0D4;
L_0898F0D4:;
    s4 = s4 + 1;
    v0 = s4 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0898F080; }
    goto L_0898F0E4;
L_0898F0E4:;
    v0 = s3 + 0;
    goto L_0898F020;
L_0898F0EC:;
    v1 = LD32(s0+4);
    v0 = s5 + v0;
    ST32(v0, v1);
    goto L_0898F0B0;
L_0898F0FC:;
    s0 = LD32(s0+4);
    goto L_0898F0C8;
}

/* 0898F104 */
rv_t func_0898F104(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898F104:;
    sp = sp - 16;
    v0 = 999;
    s0 = a0 + 0;
    a2 = LD32(a1+4);
    a1 = D_08C2B2A8 - (-19800);
    cnd_ = a2 == v0;
    v1 = a1 - 19800;
    if (cnd_) { goto L_0898F198; }
    goto L_0898F128;
L_0898F128:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-19800);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0898F178; }
    goto L_0898F14C;
L_0898F14C:;
    a1 = LD32(a0);
    goto L_0898F150;
L_0898F150:;
    v0 = LD32(a1);
    v1 = LD32(v0-16);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0898F1A8; }
    goto L_0898F168;
L_0898F168:;
    a0 = LD32(a0+4);
    goto L_0898F16C;
L_0898F16C:;
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0); goto L_0898F150; }
    goto L_0898F174;
L_0898F174:;
    a1 = 0 + 0;
    goto L_0898F178;
L_0898F178:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0898F19C; }
    goto L_0898F180;
L_0898F180:;
    a0 = s0 + 0;
    { rv_t r_ = func_08990124(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898F188;
L_0898F188:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0898F198; }
    goto L_0898F190;
L_0898F190:;
    a1 = v0 + 0;
    { rv_t r_ = func_0899129C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898F198;
L_0898F198:;
    goto L_0898F19C;
L_0898F19C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0898F1A8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0898F16C; }
    goto L_0898F1B4;
L_0898F1B4:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0898F16C; }
    goto L_0898F1C0;
L_0898F1C0:;
    goto L_0898F178;
}

/* 0898F1C8 */
rv_t func_0898F1C8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0898F1C8:;
    sp = sp - 48;
    s1 = a0 + 0;
    a0 = D_08C2B2A8 - (-19800);
    a0 = a0 - 19800;
    a2 = 0 + 0;
    a1 = LD32(a1+4);
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898F1F0;
L_0898F1F0:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0898F228; }
    goto L_0898F1FC;
L_0898F1FC:;
    v1 = LD32(v0);
    a2 = LD32(v0+204);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    a1 = LD32(v0+4);
    { u64 r_ = func_08990394(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898F214;
L_0898F214:;
    v1 = v0 + 0;
    a0 = s1 + 0;
    a1 = sp + 16;
    cnd_ = v0 != 0;
    ST32(sp+16, v0);
    if (cnd_) { goto L_0898F23C; }
    goto L_0898F228;
L_0898F228:;
    goto L_0898F22C;
L_0898F22C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0898F23C:;
    v0 = LD32(v0+8);
    ST32(sp, v0);
    v1 = LD32(v1+12);
    ST32(sp+4, v1);
    a2 = LD32(s0+204);
    func_089907B8(a0, a1, a2);
    goto L_0898F254;
L_0898F254:;
    a0 = s1 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_08991768(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898F260;
L_0898F260:;
    goto L_0898F22C;
}

/* 0898F268 */
rv_t func_0898F268(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0898F268:;
    sp = sp - 80;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0898F3DC; }
    goto L_0898F294;
L_0898F294:;
    a1 = LD32(a1+4);
    a0 = D_08C2BF38 - (-16584);
    v0 = 999;
    cnd_ = a1 == v0;
    v1 = a0 - 16584;
    if (cnd_) { goto L_0898F3DC; }
    goto L_0898F2A8;
L_0898F2A8:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-16584);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_0898F2F8; }
    goto L_0898F2CC;
L_0898F2CC:;
    a0 = LD32(a2);
    goto L_0898F2D0;
L_0898F2D0:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_0898F51C; }
    goto L_0898F2E8;
L_0898F2E8:;
    a2 = LD32(a2+4);
    goto L_0898F2EC;
L_0898F2EC:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_0898F2D0; }
    goto L_0898F2F4;
L_0898F2F4:;
    s4 = 0 + 0;
    goto L_0898F2F8;
L_0898F2F8:;
    cnd_ = s4 == 0;
    a3 = 999;
    if (cnd_) { goto L_0898F3DC; }
    goto L_0898F300;
L_0898F300:;
    v0 = LD32(s4);
    v1 = LD32(v0-16);
    v1 = s4 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    ST32(s0+128, v0);
    if (cnd_) { goto L_0898F324; }
    goto L_0898F318;
L_0898F318:;
    a1 = LD32(s0+136);
    cnd_ = a1 != 0;
    v0 = 1;
    if (cnd_) { goto L_0898F468; }
    goto L_0898F324;
L_0898F324:;
    a0 = s0 + 0;
    a1 = 3;
    a2 = 999;
    { u64 r_ = func_089904DC(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898F334;
L_0898F334:;
    cnd_ = v0 == 0;
    a1 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_0898F37C; }
    goto L_0898F33C;
L_0898F33C:;
    s3 = sp + 16;
    s2 = 1;
    s1 = 999;
    a1 = v0 + 0;
    goto L_0898F34C;
L_0898F34C:;
    a2 = s3 + 0;
    a0 = s0 + 0;
    ST32(sp+16, s2);
    ST32(sp+20, s1);
    { rv_t r_ = func_089919F4(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898F360;
L_0898F360:;
    a0 = s0 + 0;
    a1 = 3;
    a2 = 999;
    { u64 r_ = func_089904DC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898F370;
L_0898F370:;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0898F34C; }
    goto L_0898F378;
L_0898F378:;
    a1 = D_08B25AC0 - (23232);
    goto L_0898F37C;
L_0898F37C:;
    v1 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEE64C - (-6580);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-6580));
    v0 = D_08B1BBB0 - (-17488);
    f2 = BITSF(LD32(v0-17488));
    f1 = f1 * f0;
    v0 = D_08AEE648 - (-6584);
    f0 = BITSF(LD32(v0-6584));
    ST32(a2+4, a0);
    f1 = f1 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = fcc;
    ST32(a1+23232, v1);
    if (cnd_) { goto L_0898F3FC; }
    goto L_0898F3DC;
L_0898F3DC:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_0898F3FC:;
    v0 = 6;
    ST32(sp+36, v0);
    v1 = LD32(s4);
    a0 = LD32(v1-12);
    a0 = s4 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898F420;
L_0898F420:;
    t0 = v0 + 0;
    a0 = s0 + 0;
    a1 = 1;
    a2 = sp + 36;
    goto L_0898F430;
L_0898F430:;
    a3 = 1;
    { rv_t r_ = func_0899106C(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898F438;
L_0898F438:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0898F3DC; }
    goto L_0898F440;
L_0898F440:;
    v1 = LD32(s0+128);
    a1 = v0 + 0;
    a2 = sp + 16;
    v0 = 7;
    a0 = s0 + 0;
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    { rv_t r_ = func_089919F4(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898F460;
L_0898F460:;
    ST32(s0+136, s1);
    goto L_0898F3DC;
L_0898F468:;
    a0 = s0 + 0;
    a2 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, a3);
    { rv_t r_ = func_089919F4(a0, a1, a2, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898F47C;
L_0898F47C:;
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
    v0 = D_08AEE64C - (-6580);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-6580));
    v0 = D_08B1BBB0 - (-17488);
    f2 = BITSF(LD32(v0-17488));
    f1 = f1 * f0;
    v0 = D_08AEE648 - (-6584);
    f0 = BITSF(LD32(v0-6584));
    ST32(a2+4, a0);
    f1 = f1 * f0;
    ST32(a1+23232, v1);
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    ST32(s0+136, 0);
    if (cnd_) { goto L_0898F3DC; }
    goto L_0898F4E4;
L_0898F4E4:;
    v0 = 6;
    ST32(sp+32, v0);
    v1 = LD32(s4);
    a0 = LD32(v1-12);
    a0 = s4 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898F508;
L_0898F508:;
    t0 = v0 + 0;
    a0 = s0 + 0;
    a1 = 1;
    a2 = sp + 32;
    goto L_0898F430;
L_0898F51C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s4 = a0 + 0;
    if (cnd_) { goto L_0898F2E8; }
    goto L_0898F528;
L_0898F528:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_0898F2EC; }
    goto L_0898F534;
L_0898F534:;
    goto L_0898F2F8;
}

/* 0898F53C */
rv_t func_0898F53C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0898F53C:;
    sp = sp - 64;
    v0 = D_08C29324 - (-27868);
    s2 = a1 + 0;
    v1 = LD_U8(v0-27868);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0898F584; }
    goto L_0898F568;
L_0898F568:;
    goto L_0898F56C;
L_0898F56C:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_0898F584:;
    a1 = LD32(a1+4);
    a0 = D_08C2B2A8 - (-19800);
    a0 = a0 - 19800;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898F598;
L_0898F598:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_0898F568; }
    goto L_0898F5A0;
L_0898F5A0:;
    a1 = LD32(s2+4);
    a0 = s0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_08990394(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898F5B0;
L_0898F5B0:;
    a0 = LD32(s3+12);
    s1 = v0 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898F5BC;
L_0898F5BC:;
    v1 = LD32(s0+28);
    cnd_ = v0 != v1;
    if (cnd_) { a1 = LD32(s0+136); goto L_0898F664; }
    goto L_0898F5C8;
L_0898F5C8:;
    s2 = LD32(s0+136);
    v0 = 1;
    cnd_ = s2 == 0;
    ST32(s0+132, v0);
    if (cnd_) { goto L_0898F634; }
    goto L_0898F5D8;
L_0898F5D8:;
    cnd_ = s1 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_0898F624; }
    goto L_0898F5E0;
L_0898F5E0:;
    v1 = LD32(s1);
    v0 = LD32(s2);
    cnd_ = v1 == v0;
    v0 = 7;
    if (cnd_) { goto L_0898F568; }
    goto L_0898F5F0;
L_0898F5F0:;
    v1 = LD32(s0+128);
    ST32(s0+136, s1);
    a1 = s1 + 0;
    a0 = s0 + 0;
    a2 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, v1);
    { rv_t r_ = func_089919F4(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898F610;
L_0898F610:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    { rv_t r_ = func_0899129C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898F61C;
L_0898F61C:;
    goto L_0898F56C;
L_0898F624:;
    a0 = s0 + 0;
    { rv_t r_ = func_0899129C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898F62C;
L_0898F62C:;
    ST32(s0+136, 0);
    goto L_0898F568;
L_0898F634:;
    cnd_ = s1 == 0;
    a2 = sp + 0;
    if (cnd_) { goto L_0898F568; }
    goto L_0898F63C;
L_0898F63C:;
    v1 = LD32(s0+128);
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = 7;
    ST32(s0+136, s1);
    goto L_0898F650;
L_0898F650:;
    ST32(sp, v0);
    ST32(sp+4, v1);
    { rv_t r_ = func_089919F4(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898F65C;
L_0898F65C:;
    goto L_0898F56C;
L_0898F664:;
    v0 = 2;
    cnd_ = a1 != 0;
    ST32(s0+132, v0);
    if (cnd_) { goto L_0898F72C; }
    goto L_0898F670;
L_0898F670:;
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
    v0 = D_08AEE654 - (-6572);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-6572));
    v0 = D_08B1BBB4 - (-17484);
    f2 = BITSF(LD32(v0-17484));
    f1 = f1 * f0;
    v0 = D_08AEE650 - (-6576);
    f0 = BITSF(LD32(v0-6576));
    ST32(a2+4, a0);
    f1 = f1 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    ST32(a1+23232, v1);
    if (cnd_) { goto L_0898F568; }
    goto L_0898F6D4;
L_0898F6D4:;
    v0 = 6;
    ST32(sp+16, v0);
    v1 = LD32(s3);
    a0 = LD32(v1-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898F6F8;
L_0898F6F8:;
    t0 = v0 + 0;
    a0 = s0 + 0;
    a1 = 1;
    a2 = sp + 16;
    a3 = 1;
    { rv_t r_ = func_0899106C(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898F710;
L_0898F710:;
    cnd_ = v0 == 0;
    a2 = sp + 0;
    if (cnd_) { goto L_0898F568; }
    goto L_0898F718;
L_0898F718:;
    v1 = LD32(s2+4);
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = 3;
    goto L_0898F650;
L_0898F72C:;
    v0 = 1;
    v1 = 999;
    a0 = s0 + 0;
    a2 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, v1);
    { rv_t r_ = func_089919F4(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898F748;
L_0898F748:;
    ST32(s0+136, 0);
    goto L_0898F670;
}

/* 0898F750 */
rv_t func_0898F750(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0898F750:;
    sp = sp - 48;
    v0 = D_08C29324 - (-27868);
    s1 = a1 + 0;
    v1 = LD_U8(v0-27868);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0898F7F4; }
    goto L_0898F77C;
L_0898F77C:;
    v1 = LD32(a0+128);
    v0 = 999;
    cnd_ = v1 == v0;
    if (cnd_) { a2 = LD32(s1+4); goto L_0898F79C; }
    goto L_0898F78C;
L_0898F78C:;
    a1 = LD32(a0+136);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0898F810; }
    goto L_0898F798;
L_0898F798:;
    a2 = LD32(s1+4);
    goto L_0898F79C;
L_0898F79C:;
    a0 = s0 + 0;
    a1 = 3;
    { u64 r_ = func_089904DC(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898F7A8;
L_0898F7A8:;
    cnd_ = v0 == 0;
    s3 = 1;
    if (cnd_) { goto L_0898F7E4; }
    goto L_0898F7B0;
L_0898F7B0:;
    s2 = 999;
    a1 = v0 + 0;
    goto L_0898F7B8;
L_0898F7B8:;
    a2 = sp + 0;
    a0 = s0 + 0;
    ST32(sp, s3);
    ST32(sp+4, s2);
    { rv_t r_ = func_089919F4(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898F7CC;
L_0898F7CC:;
    a0 = s0 + 0;
    a2 = LD32(s1+4);
    a1 = 3;
    { u64 r_ = func_089904DC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898F7DC;
L_0898F7DC:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = v0 + 0; goto L_0898F7B8; }
    goto L_0898F7E4;
L_0898F7E4:;
    v0 = 999;
    goto L_0898F7E8;
L_0898F7E8:;
    ST32(s0+128, v0);
    ST32(s0+136, 0);
    ST32(s0+132, 0);
    goto L_0898F7F4;
L_0898F7F4:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0898F810:;
    { rv_t r_ = func_0899129C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898F818;
L_0898F818:;
    v0 = 999;
    goto L_0898F7E8;
}

/* 0898F820 */
rv_t func_0898F820(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0898F820:;
    sp = sp - 64;
    v0 = D_08C29324 - (-27868);
    s3 = a1 + 0;
    v1 = LD_U8(v0-27868);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0898F918; }
    goto L_0898F84C;
L_0898F84C:;
    v1 = LD32(a0+128);
    v0 = 999;
    cnd_ = v1 == v0;
    ST32(a0+132, 0);
    if (cnd_) { goto L_0898F868; }
    goto L_0898F85C;
L_0898F85C:;
    v0 = LD32(a0+136);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0898F91C; }
    goto L_0898F868;
L_0898F868:;
    a1 = 3;
    a2 = 999;
    { u64 r_ = func_089904DC(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898F874;
L_0898F874:;
    cnd_ = v0 == 0;
    a1 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_0898F8B8; }
    goto L_0898F87C;
L_0898F87C:;
    s2 = 1;
    s1 = 999;
    a1 = v0 + 0;
    goto L_0898F888;
L_0898F888:;
    a2 = sp + 0;
    a0 = s0 + 0;
    ST32(sp, s2);
    ST32(sp+4, s1);
    { rv_t r_ = func_089919F4(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898F89C;
L_0898F89C:;
    a0 = s0 + 0;
    a1 = 3;
    a2 = 999;
    { u64 r_ = func_089904DC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898F8AC;
L_0898F8AC:;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0898F888; }
    goto L_0898F8B4;
L_0898F8B4:;
    a1 = D_08B25AC0 - (23232);
    goto L_0898F8B8;
L_0898F8B8:;
    v1 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEE65C - (-6564);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-6564));
    v0 = D_08B1BBB0 - (-17488);
    f2 = BITSF(LD32(v0-17488));
    f1 = f1 * f0;
    v0 = D_08AEE658 - (-6568);
    f0 = BITSF(LD32(v0-6568));
    ST32(a2+4, a0);
    f1 = f1 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = fcc;
    ST32(a1+23232, v1);
    if (cnd_) { goto L_0898F934; }
    goto L_0898F918;
L_0898F918:;
    goto L_0898F91C;
L_0898F91C:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_0898F934:;
    a1 = LD32(s3+4);
    a0 = D_08C2BF38 - (-16584);
    a0 = a0 - 16584;
    a2 = 1;
    { u64 r_ = func_08AC2C7C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898F948;
L_0898F948:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0898F918; }
    goto L_0898F950;
L_0898F950:;
    v0 = 6;
    ST32(sp+16, v0);
    v1 = LD32(a1);
    a0 = LD32(v1-12);
    a0 = a1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898F974;
L_0898F974:;
    t0 = v0 + 0;
    a0 = s0 + 0;
    a1 = 1;
    a2 = sp + 16;
    a3 = 1;
    { rv_t r_ = func_0899106C(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898F98C;
L_0898F98C:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0898F918; }
    goto L_0898F994;
L_0898F994:;
    v1 = LD32(s0+128);
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = 7;
    a2 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, v1);
    { rv_t r_ = func_089919F4(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898F9B4;
L_0898F9B4:;
    ST32(s0+136, s1);
    goto L_0898F918;
}

/* 0898F9BC */
rv_t func_0898F9BC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898F9BC:;
    sp = sp - 16;
    v0 = 999;
    s0 = a0 + 0;
    a2 = LD32(a1+4);
    a1 = D_08C2A204 - (-24060);
    cnd_ = a2 == v0;
    v1 = a1 - 24060;
    if (cnd_) { goto L_0898FA48; }
    goto L_0898F9E0;
L_0898F9E0:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-24060);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0898FA24; }
    goto L_0898FA04;
L_0898FA04:;
    a1 = LD32(v1);
    goto L_0898FA08;
L_0898FA08:;
    v0 = LD32(a1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(a1+16); goto L_0898FACC; }
    goto L_0898FA14;
L_0898FA14:;
    v1 = LD32(v1+4);
    goto L_0898FA18;
L_0898FA18:;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(v1); goto L_0898FA08; }
    goto L_0898FA20;
L_0898FA20:;
    a1 = 0 + 0;
    goto L_0898FA24;
L_0898FA24:;
    cnd_ = a1 == 0;
    v0 = 1;
    if (cnd_) { goto L_0898FA48; }
    goto L_0898FA2C;
L_0898FA2C:;
    v1 = LD32(a1+36);
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_0898FAAC; }
    goto L_0898FA38;
L_0898FA38:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_0898FA84; }
    goto L_0898FA40;
L_0898FA40:;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(a1+32); goto L_0898FA58; }
    goto L_0898FA48;
L_0898FA48:;
    goto L_0898FA4C;
L_0898FA4C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0898FA58:;
    v0 = LD32(s0+28);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0898FA4C; }
    goto L_0898FA64;
L_0898FA64:;
    a0 = s0 + 0;
    { rv_t r_ = func_089907FC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FA6C;
L_0898FA6C:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0898FA48; }
    goto L_0898FA74;
L_0898FA74:;
    a1 = v0 + 0;
    { rv_t r_ = func_08990070(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FA7C;
L_0898FA7C:;
    goto L_0898FA4C;
L_0898FA84:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_0898FA4C; }
    goto L_0898FA8C;
L_0898FA8C:;
    a0 = s0 + 0;
    { rv_t r_ = func_089907FC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FA94;
L_0898FA94:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0898FA48; }
    goto L_0898FA9C;
L_0898FA9C:;
    a1 = v0 + 0;
    { rv_t r_ = func_0898FF10(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FAA4;
L_0898FAA4:;
    goto L_0898FA4C;
L_0898FAAC:;
    a0 = s0 + 0;
    { rv_t r_ = func_089907FC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FAB4;
L_0898FAB4:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0898FA48; }
    goto L_0898FABC;
L_0898FABC:;
    a1 = v0 + 0;
    { rv_t r_ = func_0898FFBC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FAC4;
L_0898FAC4:;
    goto L_0898FA4C;
L_0898FACC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_0898FA18; }
    goto L_0898FAD8;
L_0898FAD8:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_0898FA18; }
    goto L_0898FAE4;
L_0898FAE4:;
    goto L_0898FA24;
}

/* 0898FAEC */
u64 func_0898FAEC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898FAEC:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = LD32(a1+4);
    { u64 r_ = func_089908D8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898FB04;
L_0898FB04:;
    cnd_ = v0 == 0;
    ST32(sp, v0);
    if (cnd_) { goto L_0898FB28; }
    goto L_0898FB0C;
L_0898FB0C:;
    v0 = LD32(v0+16);
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0898FB38; }
    goto L_0898FB1C;
L_0898FB1C:;
    a0 = s0 + 0;
    goto L_0898FB20;
L_0898FB20:;
    a1 = sp + 0;
    { u64 r_ = func_08990948(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898FB28;
L_0898FB28:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_0898FB38:;
    { rv_t r_ = func_0899129C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FB40;
L_0898FB40:;
    a0 = s0 + 0;
    goto L_0898FB20;
}

/* 0898FB48 */
rv_t func_0898FB48(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898FB48:;
    sp = sp - 16;
    s2 = a0 + 0;
    a0 = D_08C2A204 - (-24060);
    a0 = a0 - 24060;
    a2 = 1;
    a1 = LD32(a1+4);
    { u64 r_ = func_08ABE790(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898FB74;
L_0898FB74:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0898FBB4; }
    goto L_0898FB7C;
L_0898FB7C:;
    a1 = LD32(v0+4);
    a0 = s2 + 0;
    { u64 r_ = func_089908D8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898FB88;
L_0898FB88:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0898FBB4; }
    goto L_0898FB90;
L_0898FB90:;
    v1 = LD32(s0+32);
    v0 = LD32(s2+28);
    cnd_ = v1 != v0;
    if (cnd_) { v1 = LD32(s1+8); goto L_0898FBDC; }
    goto L_0898FBA0;
L_0898FBA0:;
    a1 = LD32(s1+16);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0898FBCC; }
    goto L_0898FBAC;
L_0898FBAC:;
    ST32(s1+4, v1);
    ST32(s1+16, 0);
    goto L_0898FBB4;
L_0898FBB4:;
    goto L_0898FBB8;
L_0898FBB8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0898FBCC:;
    a0 = s2 + 0;
    { rv_t r_ = func_0899129C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FBD4;
L_0898FBD4:;
    v1 = LD32(s0+32);
    goto L_0898FBAC;
L_0898FBDC:;
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_0898FC28; }
    goto L_0898FBE8;
L_0898FBE8:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_0898FC0C; }
    goto L_0898FBF0;
L_0898FBF0:;
    cnd_ = v1 != v0;
    if (cnd_) {  goto L_0898FBB8; }
    goto L_0898FBF8;
L_0898FBF8:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08990070(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FC04;
L_0898FC04:;
    goto L_0898FBB8;
L_0898FC0C:;
    cnd_ = v1 != 0;
    if (cnd_) {  goto L_0898FBB8; }
    goto L_0898FC14;
L_0898FC14:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_0898FF10(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FC20;
L_0898FC20:;
    goto L_0898FBB8;
L_0898FC28:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_0898FFBC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FC34;
L_0898FC34:;
    goto L_0898FBB8;
}

/* 0898FC3C */
rv_t func_0898FC3C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898FC3C:;
    sp = sp - 32;
    a2 = 0 + 0;
    s0 = a0 + 0;
    a1 = LD32(a1+4);
    { u64 r_ = func_08990394(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898FC58;
L_0898FC58:;
    v1 = v0 + 0;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0898FC94; }
    goto L_0898FC68;
L_0898FC68:;
    v0 = LD32(v0+8);
    ST32(sp, v0);
    v1 = LD32(v1+12);
    ST32(sp+4, v1);
    { rv_t r_ = func_0899129C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FC7C;
L_0898FC7C:;
    a0 = s0 + 0;
    v0 = LD32(sp);
    v0 = v0 - 3;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    a1 = sp + 0;
    if (cnd_) { goto L_0898FCA4; }
    goto L_0898FC94;
L_0898FC94:;
    goto L_0898FC98;
L_0898FC98:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0898FCA4:;
    { rv_t r_ = func_08991768(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FCAC;
L_0898FCAC:;
    goto L_0898FC98;
}

/* 0898FCB4 */
rv_t func_0898FCB4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0898FCB4:;
    sp = sp - 16;
    { rv_t r_ = func_0898F1C8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FCC4;
L_0898FCC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0898FCD0 */
rv_t func_0898FCD0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0898FCD0:;
    sp = sp - 48;
    s1 = a0 + 0;
    a0 = D_08C2B2A8 - (-19800);
    a0 = a0 - 19800;
    a2 = 1;
    a1 = LD32(a1+4);
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898FCFC;
L_0898FCFC:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0898FDD8; }
    goto L_0898FD04;
L_0898FD04:;
    a0 = LD32(v0+12);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898FD0C;
L_0898FD0C:;
    v1 = LD32(s1+28);
    cnd_ = v0 == v1;
    a1 = D_08ADE068 - (-8088);
    if (cnd_) { goto L_0898FDD8; }
    goto L_0898FD18;
L_0898FD18:;
    v0 = 999;
    ST32(sp+4, v0);
    v0 = 3;
    ST32(sp, v0);
    a3 = a1 - 8088;
    v1 = LD32(s0);
    a0 = LD32(a1-8088);
    a2 = LD32(a3+4);
    v0 = LD32(v1-16);
    ST32(sp+16, a0);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(sp+20, a2);
    ST32(sp+4, v1);
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s2 = sp + 16;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FD6C;
L_0898FD6C:;
    t0 = v0 + 0;
    a0 = s1 + 0;
    a1 = 1;
    a2 = s2 + 0;
    a3 = 2;
    { rv_t r_ = func_0899106C(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FD84;
L_0898FD84:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0898FDDC; }
    goto L_0898FD8C;
L_0898FD8C:;
    a1 = v0 + 0;
    goto L_0898FD90;
L_0898FD90:;
    a2 = sp + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_089919F4(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FD9C;
L_0898FD9C:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FDB8;
L_0898FDB8:;
    t0 = v0 + 0;
    a0 = s1 + 0;
    a1 = 1;
    a2 = s2 + 0;
    a3 = 2;
    { rv_t r_ = func_0899106C(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FDD0;
L_0898FDD0:;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0898FD90; }
    goto L_0898FDD8;
L_0898FDD8:;
    goto L_0898FDDC;
L_0898FDDC:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 0898FDF0 */
rv_t func_0898FDF0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0898FDF0:;
    sp = sp - 48;
    s1 = a0 + 0;
    a0 = D_08C2B2A8 - (-19800);
    a0 = a0 - 19800;
    a2 = 1;
    a1 = LD32(a1+4);
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898FE1C;
L_0898FE1C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0898FEF8; }
    goto L_0898FE24;
L_0898FE24:;
    a0 = LD32(v0+12);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898FE2C;
L_0898FE2C:;
    v1 = LD32(s1+28);
    cnd_ = v0 == v1;
    a1 = D_08ADE068 - (-8088);
    if (cnd_) { goto L_0898FEF8; }
    goto L_0898FE38;
L_0898FE38:;
    v0 = 999;
    ST32(sp+4, v0);
    v0 = 4;
    ST32(sp, v0);
    a3 = a1 - 8088;
    v1 = LD32(s0);
    a0 = LD32(a1-8088);
    a2 = LD32(a3+4);
    v0 = LD32(v1-16);
    ST32(sp+16, a0);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(sp+20, a2);
    ST32(sp+4, v1);
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s2 = sp + 16;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FE8C;
L_0898FE8C:;
    t0 = v0 + 0;
    a0 = s1 + 0;
    a1 = 1;
    a2 = s2 + 0;
    a3 = 2;
    { rv_t r_ = func_0899106C(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FEA4;
L_0898FEA4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0898FEFC; }
    goto L_0898FEAC;
L_0898FEAC:;
    a1 = v0 + 0;
    goto L_0898FEB0;
L_0898FEB0:;
    a2 = sp + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_089919F4(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FEBC;
L_0898FEBC:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FED8;
L_0898FED8:;
    t0 = v0 + 0;
    a0 = s1 + 0;
    a1 = 1;
    a2 = s2 + 0;
    a3 = 2;
    { rv_t r_ = func_0899106C(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FEF0;
L_0898FEF0:;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0898FEB0; }
    goto L_0898FEF8;
L_0898FEF8:;
    goto L_0898FEFC;
L_0898FEFC:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 0898FF10 */
rv_t func_0898FF10(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0898FF10:;
    sp = sp - 32;
    s2 = a1 + 0;
    a2 = 1;
    s1 = a0 + 0;
    a0 = D_08C2A204 - (-24060);
    a0 = a0 - 24060;
    a1 = LD32(a1);
    { u64 r_ = func_08ABE790(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898FF40;
L_0898FF40:;
    cnd_ = v0 == 0;
    a2 = v0 + 40;
    if (cnd_) { goto L_0898FF90; }
    goto L_0898FF48;
L_0898FF48:;
    v1 = LD32(s2+4);
    v0 = LD32(s1+28);
    a0 = s1 + 0;
    cnd_ = v1 == v0;
    a1 = 3;
    if (cnd_) { goto L_0898FFA8; }
    goto L_0898FF5C;
L_0898FF5C:;
    { u64 r_ = func_08990EEC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898FF64;
L_0898FF64:;
    s0 = v0 + 0;
    a1 = v0 + 0;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a2 = sp + 0;
    if (cnd_) { goto L_0898FF90; }
    goto L_0898FF78;
L_0898FF78:;
    v1 = LD32(s2);
    v0 = 8;
    ST32(sp, v0);
    ST32(sp+4, v1);
    { rv_t r_ = func_089919F4(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0898FF8C;
L_0898FF8C:;
    ST32(s2+16, s0);
    goto L_0898FF90;
L_0898FF90:;
    goto L_0898FF94;
L_0898FF94:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0898FFA8:;
    v0 = 2;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_0898FF94; }
    goto L_0898FFB4;
L_0898FFB4:;
    goto L_0898FF5C;
}

/* 0898FFBC */
rv_t func_0898FFBC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0898FFBC:;
    sp = sp - 48;
    s2 = a1 + 0;
    a2 = 1;
    s1 = a0 + 0;
    a0 = D_08C2A204 - (-24060);
    a0 = a0 - 24060;
    a1 = LD32(a1);
    { u64 r_ = func_08ABE790(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0898FFEC;
L_0898FFEC:;
    cnd_ = v0 == 0;
    t0 = v0 + 40;
    if (cnd_) { goto L_08990058; }
    goto L_0898FFF4;
L_0898FFF4:;
    v1 = LD32(s2+4);
    v0 = LD32(s1+28);
    t2 = D_08ADE068 - (-8088);
    a0 = s1 + 0;
    a1 = 1;
    a2 = sp + 0;
    a3 = 2;
    cnd_ = v1 == v0;
    t1 = t2 - 8088;
    if (cnd_) { goto L_08990058; }
    goto L_08990018;
L_08990018:;
    v0 = LD32(t2-8088);
    v1 = LD32(t1+4);
    ST32(sp, v0);
    ST32(sp+4, v1);
    { rv_t r_ = func_0899106C(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899002C;
L_0899002C:;
    s0 = v0 + 0;
    a0 = s1 + 0;
    a2 = sp + 16;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08990058; }
    goto L_08990040;
L_08990040:;
    v1 = LD32(s2);
    v0 = 2;
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    { rv_t r_ = func_089919F4(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08990054;
L_08990054:;
    ST32(s2+16, s0);
    goto L_08990058;
L_08990058:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08990070 */
rv_t func_08990070(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08990070:;
    sp = sp - 48;
    s2 = a1 + 0;
    a2 = 1;
    s1 = a0 + 0;
    a0 = D_08C2A204 - (-24060);
    a0 = a0 - 24060;
    a1 = LD32(a1);
    { u64 r_ = func_08ABE790(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089900A0;
L_089900A0:;
    cnd_ = v0 == 0;
    t0 = v0 + 40;
    if (cnd_) { goto L_0899010C; }
    goto L_089900A8;
L_089900A8:;
    v1 = LD32(s2+4);
    v0 = LD32(s1+28);
    t2 = D_08ADE068 - (-8088);
    a0 = s1 + 0;
    a1 = 0 + 0;
    a2 = sp + 0;
    a3 = 2;
    cnd_ = v1 == v0;
    t1 = t2 - 8088;
    if (cnd_) { goto L_0899010C; }
    goto L_089900CC;
L_089900CC:;
    v0 = LD32(t2-8088);
    v1 = LD32(t1+4);
    ST32(sp, v0);
    ST32(sp+4, v1);
    { rv_t r_ = func_0899106C(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089900E0;
L_089900E0:;
    s0 = v0 + 0;
    a0 = s1 + 0;
    a2 = sp + 16;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0899010C; }
    goto L_089900F4;
L_089900F4:;
    v1 = LD32(s2);
    v0 = 2;
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    { rv_t r_ = func_089919F4(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08990108;
L_08990108:;
    ST32(s2+16, s0);
    goto L_0899010C;
L_0899010C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08990124 */
rv_t func_08990124(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08990124:;
    sp = sp - 32;
    s3 = a0 + 0;
    a0 = 16;
    s0 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899014C;
L_0899014C:;
    s2 = v0 + 0;
    v1 = 999;
    v0 = 6;
    ST32(s2+4, v0);
    v0 = 0 + 0;
    ST32(s2+12, v1);
    ST32(s2, v1);
    cnd_ = s2 == 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_089901DC; }
    goto L_08990170;
L_08990170:;
    v1 = LD32(s0);
    a0 = 0x716f0000u;
    a0 = a0 | 0x625;
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    a1 = LD32(v0+4);
    ST32(s2, a1);
    v1 = LD32(s0+204);
    cnd_ = v1 == a0;
    if (cnd_) { s1 = s3 + 32; goto L_08990374; }
    goto L_08990198;
L_08990198:;
    v0 = a0 < v1;
    cnd_ = v0 != 0;
    v0 = 0xccc40000u;
    if (cnd_) { goto L_089902CC; }
    goto L_089901A4;
L_089901A4:;
    v0 = 0x101b0000u;
    v0 = v0 | 0x8a0d;
    cnd_ = v1 == v0;
    if (cnd_) { s1 = s3 + 112; goto L_089902A4; }
    goto L_089901B4;
L_089901B4:;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    v0 = 0x45230000u;
    if (cnd_) { goto L_08990244; }
    goto L_089901C0;
L_089901C0:;
    cnd_ = v1 == 0;
    v0 = s2 + 0;
    if (cnd_) { goto L_089901DC; }
    goto L_089901C8;
L_089901C8:;
    v0 = 0x300000u;
    v0 = v0 | 0xcffa;
    cnd_ = v1 == v0;
    s1 = s3 + 96;
    if (cnd_) { goto L_089901F8; }
    goto L_089901D8;
L_089901D8:;
    v0 = s2 + 0;
    goto L_089901DC;
L_089901DC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089901F8:;
    s0 = LD32(s1+4);
    v0 = 4;
    ST32(s2+4, v0);
    a0 = 12;
    s0 = s0 - 1;
    s0 = a1 & s0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08990214;
L_08990214:;
    a0 = LD32(s3+96);
    goto L_08990218;
L_08990218:;
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
    goto L_089901D8;
L_08990244:;
    v0 = v0 | 0x135e;
    cnd_ = v1 == v0;
    s1 = s3 + 112;
    if (cnd_) { goto L_089902A4; }
    goto L_08990250;
L_08990250:;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    v0 = 0x64e50000u;
    if (cnd_) { goto L_08990294; }
    goto L_0899025C;
L_0899025C:;
    v0 = 0x3ec20000u;
    v0 = v0 | 0xf729;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = s2 + 0; goto L_089901DC; }
    goto L_0899026C;
L_0899026C:;
    s1 = s3 + 80;
    s0 = LD32(s1+4);
    v0 = 3;
    ST32(s2+4, v0);
    a0 = 12;
    s0 = s0 - 1;
    s0 = a1 & s0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899028C;
L_0899028C:;
    a0 = LD32(s3+80);
    goto L_08990218;
L_08990294:;
    v0 = v0 | 0xf43d;
    goto L_08990298;
L_08990298:;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = s2 + 0; goto L_089901DC; }
    goto L_089902A0;
L_089902A0:;
    s1 = s3 + 112;
    goto L_089902A4;
L_089902A4:;
    v1 = LD32(s1+4);
    v0 = 5;
    s0 = LD32(s2);
    ST32(s2+4, v0);
    v1 = v1 - 1;
    a0 = 12;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089902C4;
L_089902C4:;
    a0 = LD32(s3+112);
    goto L_08990218;
L_089902CC:;
    v0 = v0 | 0xf0bd;
    cnd_ = v1 == v0;
    s1 = s3 + 48;
    if (cnd_) { goto L_08990350; }
    goto L_089902D8;
L_089902D8:;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    v0 = 0xe1120000u;
    if (cnd_) { goto L_08990324; }
    goto L_089902E4;
L_089902E4:;
    v0 = 0xad8a0000u;
    v0 = v0 | 0x26cf;
    cnd_ = v1 == v0;
    s1 = s3 + 64;
    if (cnd_) { goto L_08990300; }
    goto L_089902F4;
L_089902F4:;
    v0 = 0xb3910000u;
    v0 = v0 | 0x260c;
    goto L_08990298;
L_08990300:;
    s0 = LD32(s1+4);
    v0 = 2;
    ST32(s2+4, v0);
    a0 = 12;
    s0 = s0 - 1;
    s0 = a1 & s0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899031C;
L_0899031C:;
    a0 = LD32(s3+64);
    goto L_08990218;
L_08990324:;
    v0 = v0 | 0x20ea;
    cnd_ = v1 == v0;
    s1 = s3 + 112;
    if (cnd_) { goto L_089902A4; }
    goto L_08990330;
L_08990330:;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 0xf5ec0000u; goto L_08990348; }
    goto L_0899033C;
L_0899033C:;
    v0 = 0xd09a0000u;
    v0 = v0 | 0x5036;
    goto L_08990298;
L_08990348:;
    v0 = v0 | 0xfc51;
    goto L_08990298;
L_08990350:;
    s0 = LD32(s1+4);
    v0 = 1;
    ST32(s2+4, v0);
    a0 = 12;
    s0 = s0 - 1;
    s0 = a1 & s0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899036C;
L_0899036C:;
    a0 = LD32(s3+48);
    goto L_08990218;
L_08990374:;
    s0 = LD32(s1+4);
    ST32(s2+4, 0);
    a0 = 12;
    s0 = s0 - 1;
    s0 = a1 & s0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899038C;
L_0899038C:;
    a0 = LD32(s3+32);
    goto L_08990218;
}

/* 08990394 */
u64 func_08990394(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08990394:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = a1 + 0;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_089904B4; }
    goto L_089903B4;
L_089903B4:;
    s0 = 0 + 0;
    goto L_089903B8;
L_089903B8:;
    v0 = s0 < 0x7u;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s0 + 1; goto L_08990444; }
    goto L_089903C4;
L_089903C4:;
    v1 = D_08ADE070 - (-8080);
    v0 = s0 << 2;
    v1 = v1 - 8080;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089903E0u: goto L_089903E0; case 0x08990440u: goto L_08990440; case 0x0899047Cu: goto L_0899047C; case 0x08990494u: goto L_08990494; case 0x0899049Cu: goto L_0899049C; case 0x089904A4u: goto L_089904A4; case 0x089904ACu: goto L_089904AC; default: rs_break(0, 0x089903d8); }
L_089903E0:;
    v0 = 999;
    v1 = s2 + 32;
    cnd_ = s1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08990434; }
    goto L_089903F0;
L_089903F0:;
    v0 = LD32(v1+4);
    v1 = LD32(s2+32);
    v0 = v0 - 1;
    v0 = s1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    v0 = a0 + 0;
    if (cnd_) { goto L_08990438; }
    goto L_08990414;
L_08990414:;
    a0 = LD32(v1);
    goto L_08990418;
L_08990418:;
    v0 = LD32(a0);
    cnd_ = v0 == s1;
    if (cnd_) { v0 = LD_U8(v1+8); goto L_0899046C; }
    goto L_08990424;
L_08990424:;
    v1 = LD32(v1+4);
    goto L_08990428;
L_08990428:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_08990418; }
    goto L_08990430;
L_08990430:;
    a0 = 0 + 0;
    goto L_08990434;
L_08990434:;
    v0 = a0 + 0;
    goto L_08990438;
L_08990438:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08990450; }
    goto L_08990440;
L_08990440:;
    s0 = s0 + 1;
    goto L_08990444;
L_08990444:;
    v0 = (s32)s0 < 6;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089903B8; }
    goto L_08990450;
L_08990450:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0899046C:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08990428; }
    goto L_08990474;
L_08990474:;
    v0 = a0 + 0;
    goto L_08990438;
L_0899047C:;
    a0 = s2 + 48;
    goto L_08990480;
L_08990480:;
    a1 = s1 + 0;
    a2 = 1;
    v0 = func_08AC2D10(a0, a1);
    goto L_0899048C;
L_0899048C:;
    goto L_08990438;
L_08990494:;
    a0 = s2 + 64;
    goto L_08990480;
L_0899049C:;
    a0 = s2 + 80;
    goto L_08990480;
L_089904A4:;
    a0 = s2 + 96;
    goto L_08990480;
L_089904AC:;
    a0 = s2 + 112;
    goto L_08990480;
L_089904B4:;
    a1 = a2 + 0;
    v0 = func_089909E0(a0, a1);
    goto L_089904BC;
L_089904BC:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08990450; }
    goto L_089904C4;
L_089904C4:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = 1;
    v0 = func_08AC2D10(a0, a1);
    goto L_089904D4;
L_089904D4:;
    v1 = v0 + 0;
    goto L_08990450;
}

/* 089904DC */
u64 func_089904DC(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089904DC:;
    sp = sp - 64;
    fp = a0 + 0;
    s7 = 0 + 0;
    s6 = a2 + 0;
    s5 = a1 + 0;
    v0 = s7 < 0x7u;
    goto L_0899051C;
L_0899051C:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08990544; }
    goto L_08990524;
L_08990524:;
    v1 = D_08ADE08C - (-8052);
    v0 = s7 << 2;
    v1 = v1 - 8052;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08990540u: goto L_08990540; case 0x08990544u: goto L_08990544; case 0x08990790u: goto L_08990790; case 0x08990798u: goto L_08990798; case 0x089907A0u: goto L_089907A0; case 0x089907A8u: goto L_089907A8; case 0x089907B0u: goto L_089907B0; default: rs_break(0, 0x08990538); }
L_08990540:;
    a1 = fp + 32;
    goto L_08990544;
L_08990544:;
    v0 = LD32(a1+8);
    ST32(sp, a1);
    a0 = sp + 0;
    v0 = v0 + 1;
    ST32(a1+8, v0);
    ST32(sp+4, 0);
    v0 = LD32(a1+4);
    cnd_ = v0 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_089905BC; }
    goto L_08990568;
L_08990568:;
    a3 = LD32(a1);
    a2 = a1 + 0;
    a1 = LD32(a0+4);
    goto L_08990574;
L_08990574:;
    v0 = a1 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089905A4; }
    goto L_08990588;
L_08990588:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089905C0; }
    goto L_08990598;
L_08990598:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08990588; }
    goto L_089905A4;
L_089905A4:;
    v0 = a1 + 1;
    ST32(a0+4, v0);
    v1 = LD32(a2+4);
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a0+4); goto L_08990574; }
    goto L_089905BC;
L_089905BC:;
    v0 = LD32(sp+8);
    goto L_089905C0;
L_089905C0:;
    cnd_ = v0 == 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_089905F4; }
    goto L_089905C8;
L_089905C8:;
    s0 = 999;
    s1 = LD32(v0);
    goto L_089905D0;
L_089905D0:;
    v0 = LD32(s1+8);
    cnd_ = v0 == s5;
    a0 = sp + 0;
    if (cnd_) { goto L_089906D4; }
    goto L_089905DC;
L_089905DC:;
    a1 = 1;
    { u64 r_ = func_08AC2D7C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089905E4;
L_089905E4:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(v0); goto L_089905D0; }
    goto L_089905F0;
L_089905F0:;
    s1 = LD32(sp);
    goto L_089905F4;
L_089905F4:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08990678; }
    goto L_08990604;
L_08990604:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08990678; }
    goto L_08990610;
L_08990610:;
    v0 = LD32(s1);
    goto L_08990614;
L_08990614:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08990668; }
    goto L_08990628;
L_08990628:;
    v0 = LD_U8(s0+8);
    goto L_0899062C;
L_0899062C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089906CC; }
    goto L_08990634;
L_08990634:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089906BC; }
    goto L_0899063C;
L_0899063C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08990644;
L_08990644:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08990650;
L_08990650:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0899065C;
L_0899065C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0899062C; }
    goto L_08990664;
L_08990664:;
    v1 = LD32(s1+4);
    goto L_08990668;
L_08990668:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08990614; }
    goto L_08990678;
L_08990678:;
    s7 = s7 + 1;
    v0 = (s32)s7 < 6;
    cnd_ = v0 != 0;
    v0 = s7 < 0x7u;
    if (cnd_) { goto L_0899051C; }
    goto L_08990688;
L_08990688:;
    v0 = 0 + 0;
    goto L_0899068C;
L_0899068C:;
    sp = sp + 64;
    return (u64)v0 | ((u64)v1 << 32);
L_089906BC:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08990644;
L_089906CC:;
    s0 = LD32(s0+4);
    goto L_0899065C;
L_089906D4:;
    cnd_ = s6 == s0;
    s2 = LD32(sp);
    if (cnd_) { goto L_089906EC; }
    goto L_089906DC;
L_089906DC:;
    v0 = LD32(s1+12);
    cnd_ = v0 != s6;
    a0 = sp + 0;
    if (cnd_) { goto L_089905DC; }
    goto L_089906E8;
L_089906E8:;
    s2 = LD32(sp);
    goto L_089906EC;
L_089906EC:;
    v0 = LD32(s2+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_08990770; }
    goto L_089906FC;
L_089906FC:;
    v1 = LD32(s2+4);
    cnd_ = v1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08990770; }
    goto L_08990708;
L_08990708:;
    v0 = LD32(s2);
    goto L_0899070C;
L_0899070C:;
    s5 = s4 << 2;
    v0 = s5 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08990760; }
    goto L_08990720;
L_08990720:;
    v0 = LD_U8(s0+8);
    goto L_08990724;
L_08990724:;
    cnd_ = v0 == 0;
    if (cnd_) { s3 = s0 + 0; goto L_08990788; }
    goto L_0899072C;
L_0899072C:;
    cnd_ = s3 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_08990778; }
    goto L_08990734;
L_08990734:;
    v0 = LD32(s0+4);
    ST32(s3+4, v0);
    goto L_0899073C;
L_0899073C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08990748;
L_08990748:;
    v0 = LD32(s2+12);
    v0 = v0 - 1;
    ST32(s2+12, v0);
    goto L_08990754;
L_08990754:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08990724; }
    goto L_0899075C;
L_0899075C:;
    v1 = LD32(s2+4);
    goto L_08990760;
L_08990760:;
    s4 = s4 + 1;
    v0 = s4 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s2); goto L_0899070C; }
    goto L_08990770;
L_08990770:;
    v0 = s1 + 0;
    goto L_0899068C;
L_08990778:;
    v1 = LD32(s0+4);
    v0 = s5 + v0;
    ST32(v0, v1);
    goto L_0899073C;
L_08990788:;
    s0 = LD32(s0+4);
    goto L_08990754;
L_08990790:;
    a1 = fp + 48;
    goto L_08990544;
L_08990798:;
    a1 = fp + 64;
    goto L_08990544;
L_089907A0:;
    a1 = fp + 80;
    goto L_08990544;
L_089907A8:;
    a1 = fp + 96;
    goto L_08990544;
L_089907B0:;
    a1 = fp + 112;
    goto L_08990544;
}

/* 089907B8 */
void func_089907B8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089907B8:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = a2 + 0;
    v0 = func_089909E0(a0, a1);
    goto L_089907D0;
L_089907D0:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089907EC; }
    goto L_089907D8;
L_089907D8:;
    a1 = LD32(s0);
    func_08AC2A14(a0, a1, 0, 0, 0);
    goto L_089907E0;
L_089907E0:;
    a0 = LD32(s0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089907E8;
L_089907E8:;
    ST32(s0, 0);
    goto L_089907EC;
L_089907EC:;
    sp = sp + 16;
    return;
}

/* 089907FC */
rv_t func_089907FC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089907FC:;
    sp = sp - 32;
    s4 = a0 + 0;
    s3 = a0 + 140;
    a0 = 20;
    s2 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899082C;
L_0899082C:;
    s1 = v0 + 0;
    v0 = 999;
    ST32(s1, v0);
    v1 = 3;
    v0 = 2;
    a0 = 12;
    a2 = 0 + 0;
    ST32(s1+4, v0);
    ST32(s1+8, v1);
    ST8(s1+12, 0);
    cnd_ = s1 == 0;
    ST32(s1+16, 0);
    if (cnd_) { goto L_089908B4; }
    goto L_0899085C;
L_0899085C:;
    s0 = LD32(s2+4);
    a1 = LD32(s2+36);
    v1 = LD32(s2+32);
    ST32(s1, s0);
    v0 = LD32(s3+4);
    ST32(s1+4, v1);
    v0 = v0 - 1;
    ST32(s1+8, a1);
    s0 = s0 & v0;
    s0 = s0 << 2;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08990888;
L_08990888:;
    a0 = LD32(s4+140);
    v1 = LD32(s3+12);
    ST32(v0, s1);
    s0 = s0 + a0;
    v1 = v1 + 1;
    a1 = LD32(s0);
    ST32(s3+12, v1);
    a2 = s1 + 0;
    ST32(v0+4, a1);
    ST8(v0+8, 0);
    ST32(s0, v0);
    goto L_089908B4;
L_089908B4:;
    v0 = a2 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089908D8 */
u64 func_089908D8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_089908D8:;
    v0 = 999;
    v1 = a0 + 140;
    cnd_ = a1 == v0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0899092C; }
    goto L_089908E8;
L_089908E8:;
    v0 = LD32(v1+4);
    v1 = LD32(a0+140);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0899092C; }
    goto L_0899090C;
L_0899090C:;
    v0 = LD32(a0);
    goto L_08990910;
L_08990910:;
    v1 = LD32(v0);
    cnd_ = v1 == a1;
    a2 = v0 + 0;
    if (cnd_) { goto L_08990934; }
    goto L_0899091C;
L_0899091C:;
    a0 = LD32(a0+4);
    goto L_08990920;
L_08990920:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08990910; }
    goto L_08990928;
L_08990928:;
    a2 = 0 + 0;
    goto L_0899092C;
L_0899092C:;
    v0 = a2 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08990934:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08990920; }
    goto L_08990940;
L_08990940:;
    goto L_0899092C;
}

/* 08990948 */
u64 func_08990948(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08990948:;
    sp = sp - 16;
    a0 = a0 + 140;
    s0 = a1 + 0;
    a1 = LD32(a1);
    func_08AC2B2C(a0, a1, t1, t2, t3);
    goto L_08990964;
L_08990964:;
    a0 = LD32(s0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899096C;
L_0899096C:;
    ST32(s0, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08990980 */
u32 func_08990980(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
    u32 t_;
L_08990980:;
    v0 = a1 < 0x7u;
    cnd_ = v0 == 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_089909D8; }
    goto L_0899098C;
L_0899098C:;
    v1 = D_08ADE0A8 - (-8024);
    v0 = a1 << 2;
    v1 = v1 - 8024;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089909A8u: goto L_089909A8; case 0x089909B0u: goto L_089909B0; case 0x089909B8u: goto L_089909B8; case 0x089909C0u: goto L_089909C0; case 0x089909C8u: goto L_089909C8; case 0x089909D0u: goto L_089909D0; case 0x089909D8u: goto L_089909D8; default: rs_break(0, 0x089909a0); }
L_089909A8:;
    v0 = a2 + 32;
    return v0;
L_089909B0:;
    v0 = a2 + 48;
    return v0;
L_089909B8:;
    v0 = a2 + 64;
    return v0;
L_089909C0:;
    v0 = a2 + 80;
    return v0;
L_089909C8:;
    v0 = a2 + 96;
    return v0;
L_089909D0:;
    v0 = a2 + 112;
    return v0;
L_089909D8:;
    v0 = 0 + 0;
    return v0;
}

/* 089909E0 */
u32 func_089909E0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_089909E0:;
    v0 = 0x716f0000u;
    v0 = v0 | 0x625;
    cnd_ = a1 == v0;
    v1 = a0 + 32;
    if (cnd_) { goto L_08990A2C; }
    goto L_089909F0;
L_089909F0:;
    v0 = v0 < a1;
    cnd_ = v0 != 0;
    v0 = 0xccc40000u;
    if (cnd_) { goto L_08990A80; }
    goto L_089909FC;
L_089909FC:;
    v0 = 0x101b0000u;
    v0 = v0 | 0x8a0d;
    cnd_ = a1 == v0;
    if (cnd_) { v1 = a0 + 112; goto L_08990A2C; }
    goto L_08990A0C;
L_08990A0C:;
    v0 = v0 < a1;
    cnd_ = v0 != 0;
    v0 = 0x45230000u;
    if (cnd_) { goto L_08990A44; }
    goto L_08990A18;
L_08990A18:;
    v0 = 0x300000u;
    v0 = v0 | 0xcffa;
    cnd_ = a1 != 0;
    v1 = a0 + 96;
    if (cnd_) { goto L_08990A34; }
    goto L_08990A28;
L_08990A28:;
    v1 = 0 + 0;
    goto L_08990A2C;
L_08990A2C:;
    v0 = v1 + 0;
    return v0;
L_08990A34:;
    cnd_ = a1 != v0;
    if (cnd_) { v1 = 0 + 0; goto L_08990A2C; }
    goto L_08990A3C;
L_08990A3C:;
    goto L_08990A2C;
L_08990A44:;
    v0 = v0 | 0x135e;
    cnd_ = a1 == v0;
    v1 = a0 + 112;
    if (cnd_) { goto L_08990A2C; }
    goto L_08990A50;
L_08990A50:;
    v0 = v0 < a1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 0x64e50000u; goto L_08990A6C; }
    goto L_08990A5C;
L_08990A5C:;
    v0 = 0x3ec20000u;
    v0 = v0 | 0xf729;
    v1 = a0 + 80;
    goto L_08990A34;
L_08990A6C:;
    v0 = v0 | 0xf43d;
    goto L_08990A70;
L_08990A70:;
    cnd_ = a1 != v0;
    if (cnd_) { v1 = 0 + 0; goto L_08990A2C; }
    goto L_08990A78;
L_08990A78:;
    v1 = a0 + 112;
    goto L_08990A2C;
L_08990A80:;
    v0 = v0 | 0xf0bd;
    cnd_ = a1 == v0;
    v1 = a0 + 48;
    if (cnd_) { goto L_08990A2C; }
    goto L_08990A8C;
L_08990A8C:;
    v0 = v0 < a1;
    cnd_ = v0 != 0;
    v0 = 0xe1120000u;
    if (cnd_) { goto L_08990AB4; }
    goto L_08990A98;
L_08990A98:;
    v0 = 0xad8a0000u;
    v0 = v0 | 0x26cf;
    cnd_ = a1 == v0;
    v1 = a0 + 64;
    if (cnd_) { goto L_08990A2C; }
    goto L_08990AA8;
L_08990AA8:;
    v0 = 0xb3910000u;
    v0 = v0 | 0x260c;
    goto L_08990A70;
L_08990AB4:;
    v0 = v0 | 0x20ea;
    cnd_ = a1 == v0;
    v1 = a0 + 112;
    if (cnd_) { goto L_08990A2C; }
    goto L_08990AC0;
L_08990AC0:;
    v0 = v0 < a1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 0xf5ec0000u; goto L_08990AD8; }
    goto L_08990ACC;
L_08990ACC:;
    v0 = 0xd09a0000u;
    v0 = v0 | 0x5036;
    goto L_08990A70;
L_08990AD8:;
    v0 = v0 | 0xfc51;
    goto L_08990A70;
}

/* 08990AE0 */
u32 func_08990AE0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08990AE0:;
    sp = sp - 48;
    v1 = a0 + 140;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a0 = sp + 0;
    v0 = LD32(v1+8);
    a2 = LD32(v1+4);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    cnd_ = a2 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08990B74; }
    goto L_08990B2C;
L_08990B2C:;
    a3 = LD32(s0+140);
    goto L_08990B30;
L_08990B30:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08990B64; }
    goto L_08990B48;
L_08990B48:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08990B78; }
    goto L_08990B58;
L_08990B58:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08990B48; }
    goto L_08990B64;
L_08990B64:;
    v0 = a1 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08990B30; }
    goto L_08990B74;
L_08990B74:;
    v0 = LD32(sp+8);
    goto L_08990B78;
L_08990B78:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(sp); goto L_08990BAC; }
    goto L_08990B80;
L_08990B80:;
    a2 = LD32(v0);
    goto L_08990B84;
L_08990B84:;
    a0 = sp + 0;
    v0 = LD32(a2+8);
    cnd_ = v0 == s1;
    a1 = 1;
    if (cnd_) { goto L_08990C6C; }
    goto L_08990B94;
L_08990B94:;
    func_08AC2EC4(a0);
    goto L_08990B9C;
L_08990B9C:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(v0); goto L_08990B84; }
    goto L_08990BA8;
L_08990BA8:;
    s1 = LD32(sp);
    goto L_08990BAC;
L_08990BAC:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08990C30; }
    goto L_08990BBC;
L_08990BBC:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08990C30; }
    goto L_08990BC8;
L_08990BC8:;
    v0 = LD32(s1);
    goto L_08990BCC;
L_08990BCC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08990C20; }
    goto L_08990BE0;
L_08990BE0:;
    v0 = LD_U8(s0+8);
    goto L_08990BE4;
L_08990BE4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08990C64; }
    goto L_08990BEC;
L_08990BEC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08990C54; }
    goto L_08990BF4;
L_08990BF4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08990BFC;
L_08990BFC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08990C08;
L_08990C08:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08990C14;
L_08990C14:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08990BE4; }
    goto L_08990C1C;
L_08990C1C:;
    v1 = LD32(s1+4);
    goto L_08990C20;
L_08990C20:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08990BCC; }
    goto L_08990C30;
L_08990C30:;
    v0 = 0 + 0;
    goto L_08990C34;
L_08990C34:;
    sp = sp + 48;
    return v0;
L_08990C54:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08990BFC;
L_08990C64:;
    s0 = LD32(s0+4);
    goto L_08990C14;
L_08990C6C:;
    v1 = LD32(a2+4);
    v0 = LD32(s0+28);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08990B94; }
    goto L_08990C7C;
L_08990C7C:;
    v0 = LD32(a2+16);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08990B94; }
    goto L_08990C88;
L_08990C88:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08990D10; }
    goto L_08990C9C;
L_08990C9C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08990D10; }
    goto L_08990CA8;
L_08990CA8:;
    v0 = LD32(s1);
    goto L_08990CAC;
L_08990CAC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08990D00; }
    goto L_08990CC0;
L_08990CC0:;
    v0 = LD_U8(s0+8);
    goto L_08990CC4;
L_08990CC4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08990D28; }
    goto L_08990CCC;
L_08990CCC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08990D18; }
    goto L_08990CD4;
L_08990CD4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08990CDC;
L_08990CDC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08990CE8;
L_08990CE8:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08990CF4;
L_08990CF4:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08990CC4; }
    goto L_08990CFC;
L_08990CFC:;
    v1 = LD32(s1+4);
    goto L_08990D00;
L_08990D00:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08990CAC; }
    goto L_08990D10;
L_08990D10:;
    v0 = 1;
    goto L_08990C34;
L_08990D18:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08990CDC;
L_08990D28:;
    s0 = LD32(s0+4);
    goto L_08990CF4;
}

/* 08990D30 */
u32 func_08990D30(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08990D30:;
    sp = sp - 32;
    v1 = a0 + 140;
    s2 = a0 + 0;
    a0 = sp + 0;
    s1 = a1 + 0;
    a1 = 1;
    s0 = 0 + 0;
    v0 = LD32(v1+8);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    func_08AC2EC4(a0);
    goto L_08990D78;
L_08990D78:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08990EA4; }
    goto L_08990D84;
L_08990D84:;
    a2 = LD32(v0);
    goto L_08990D88;
L_08990D88:;
    a0 = sp + 0;
    v0 = LD32(a2+8);
    cnd_ = v0 == s1;
    a1 = 1;
    if (cnd_) { goto L_08990ECC; }
    goto L_08990D98;
L_08990D98:;
    func_08AC2EC4(a0);
    goto L_08990DA0;
L_08990DA0:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(v0); goto L_08990D88; }
    goto L_08990DAC;
L_08990DAC:;
    cnd_ = s0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08990EA0; }
    goto L_08990DB4;
L_08990DB4:;
    a1 = 1;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    func_08AC2EC4(a0);
    goto L_08990DC4;
L_08990DC4:;
    a1 = D_08B25AC0 - (23232);
    v0 = LD32(a1+23232);
    a3 = a1 + 23232;
    a0 = LD32(a3+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    { u32 x_ = v1, y_ = s0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = a0 + v0;
    ST32(a3+4, a0);
    ST32(a1+23232, v0);
    a3 = LD32(sp+8);
    a2 = hi;
    s0 = a2 + 1;
    a2 = LD32(a3);
    goto L_08990E08;
L_08990E08:;
    a0 = sp + 0;
    v0 = LD32(a2+8);
    cnd_ = v0 == s1;
    a1 = 1;
    if (cnd_) { goto L_08990E70; }
    goto L_08990E18;
L_08990E18:;
    func_08AC2EC4(a0);
    goto L_08990E20;
L_08990E20:;
    a3 = LD32(sp+8);
    cnd_ = a3 != 0;
    if (cnd_) { a2 = LD32(a3); goto L_08990E08; }
    goto L_08990E2C;
L_08990E2C:;
    a0 = LD32(sp);
    goto L_08990E30;
L_08990E30:;
    s0 = LD32(a3);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08990E60; }
    goto L_08990E44;
L_08990E44:;
    v0 = s0 + 0;
    goto L_08990E48;
L_08990E48:;
    sp = sp + 32;
    return v0;
L_08990E60:;
    func_08AC2F40(a0, 0, 0, 0);
    goto L_08990E68;
L_08990E68:;
    v0 = s0 + 0;
    goto L_08990E48;
L_08990E70:;
    v1 = LD32(a2+4);
    v0 = LD32(s2+28);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08990E18; }
    goto L_08990E80;
L_08990E80:;
    v0 = LD32(a2+16);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08990E18; }
    goto L_08990E8C;
L_08990E8C:;
    s0 = s0 - 1;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08990E18; }
    goto L_08990E98;
L_08990E98:;
    a0 = LD32(sp);
    goto L_08990E30;
L_08990EA0:;
    a0 = LD32(sp);
    goto L_08990EA4;
L_08990EA4:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08990EBC; }
    goto L_08990EB4;
L_08990EB4:;
    v0 = 0 + 0;
    goto L_08990E48;
L_08990EBC:;
    func_08AC2F40(a0, 0, 0, 0);
    goto L_08990EC4;
L_08990EC4:;
    v0 = 0 + 0;
    goto L_08990E48;
L_08990ECC:;
    v1 = LD32(a2+4);
    v0 = LD32(s2+28);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08990D98; }
    goto L_08990EDC;
L_08990EDC:;
    v0 = LD32(a2+16);
    v0 = v0 < 0x1u;
    s0 = s0 + v0;
    goto L_08990D98;
}

/* 08990EEC */
u64 func_08990EEC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08990EEC:;
    sp = sp - 96;
    s1 = a2 + 0;
    v0 = func_08990980(a0, a1);
    goto L_08990F10;
L_08990F10:;
    v1 = v0 + 0;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08990FA4; }
    goto L_08990F1C;
L_08990F1C:;
    v0 = LD32(v1+8);
    a1 = 1;
    a0 = sp + 0;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    v0 = D_08AEE664 - (-6556);
    s3 = 0 + 0;
    f20 = BITSF(LD32(v0-6556));
    ST32(sp, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08AC2D7C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08990F4C;
L_08990F4C:;
    a1 = LD32(sp+8);
    cnd_ = a1 == 0;
    s2 = D_08C2B2A8 - (-19800);
    if (cnd_) { goto L_08990F8C; }
    goto L_08990F58;
L_08990F58:;
    s0 = LD32(a1);
    goto L_08990F5C;
L_08990F5C:;
    a0 = s2 - 19800;
    v0 = LD32(s0+8);
    v0 = v0 < 0x2u;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    a2 = 1;
    if (cnd_) { goto L_08990FD4; }
    goto L_08990F74;
L_08990F74:;
    a1 = 1;
    a0 = sp + 0;
    { u64 r_ = func_08AC2D7C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08990F80;
L_08990F80:;
    a1 = LD32(sp+8);
    cnd_ = a1 != 0;
    if (cnd_) { s0 = LD32(a1); goto L_08990F5C; }
    goto L_08990F8C;
L_08990F8C:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08990FC4; }
    goto L_08990FA0;
L_08990FA0:;
    v0 = s3 + 0;
    goto L_08990FA4;
L_08990FA4:;
    sp = sp + 96;
    return (u64)v0 | ((u64)v1 << 32);
L_08990FC4:;
    { u64 r_ = func_08AC2DF8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08990FCC;
L_08990FCC:;
    v0 = s3 + 0;
    goto L_08990FA4;
L_08990FD4:;
    a1 = LD32(s0);
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08990FDC;
L_08990FDC:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08990F74; }
    goto L_08990FE4;
L_08990FE4:;
    v0 = LD32(v0);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08991000;
L_08991000:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(s1));
    f2 = BITSF(LD32(s1+4));
    f3 = BITSF(LD32(s1+8));
    f1 = f1 - f0;
    f2 = f2 - f4;
    f3 = f3 - f5;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f1));
    fcc = FCMP(f0, f20, 12);
    ST32(sp+20, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f3));
    if (cnd_) { goto L_08990F74; }
    goto L_08991060;
L_08991060:;
    f20 = BITSF(v0);
    s3 = s0 + 0;
    goto L_08990F74;
}

/* 0899106C */
rv_t func_0899106C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_0899106C:;
    sp = sp - 160;
    fp = a1 & 0xff;
    s7 = a0 + 0;
    s6 = a2 + 0;
    s5 = t0 + 0;
    s4 = (s32)0 < (s32)a3;
    s3 = a3 + 0;
    s2 = sp + 0;
    s0 = 0 + 0;
    goto L_089910C0;
L_089910C0:;
    v0 = s0 ^ 0x5;
    a1 = v0 < 0x1u;
    cnd_ = s4 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08991108; }
    goto L_089910D0;
L_089910D0:;
    cnd_ = a1 != 0;
    s1 = s2 + 0;
    if (cnd_) { goto L_0899110C; }
    goto L_089910D8;
L_089910D8:;
    a2 = s6 + 0;
    v0 = LD32(a2);
    goto L_089910E0;
L_089910E0:;
    a3 = a3 + 1;
    a0 = 0 < a1;
    v0 = s0 ^ v0;
    a1 = 1;
    v1 = (s32)a3 < (s32)s3;
    if (v0 != 0) a1 = a0;
    cnd_ = v1 == 0;
    a2 = a2 + 4;
    if (cnd_) { goto L_08991108; }
    goto L_08991100;
L_08991100:;
    cnd_ = a1 == 0;
    if (cnd_) { v0 = LD32(a2); goto L_089910E0; }
    goto L_08991108;
L_08991108:;
    s1 = s2 + 0;
    goto L_0899110C;
L_0899110C:;
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08991284; }
    goto L_08991114;
L_08991114:;
    s0 = s0 + 1;
    v0 = (s32)s0 < 6;
    ST32(s1, v1);
    cnd_ = v0 != 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_089910C0; }
    goto L_08991128;
L_08991128:;
    cnd_ = fp == 0;
    v0 = D_08AEE66C - (-6548);
    if (cnd_) { goto L_0899127C; }
    goto L_08991130;
L_08991130:;
    v0 = D_08AEE668 - (-6552);
    f21 = BITSF(LD32(v0-6552));
    goto L_08991138;
L_08991138:;
    s3 = D_08AEE670 - (-6544);
    f20 = BITSF(LD32(s3-6544));
    s1 = 0 + 0;
    s2 = D_08C2B2A8 - (-19800);
    s0 = sp + 0;
    goto L_0899114C;
L_0899114C:;
    a1 = LD32(s0);
    a0 = s2 - 19800;
    cnd_ = a1 != 0;
    a2 = 1;
    if (cnd_) { goto L_089911DC; }
    goto L_0899115C;
L_0899115C:;
    ST32(s0+32, FBITS(f20));
    goto L_08991160;
L_08991160:;
    s1 = s1 + 1;
    v0 = (s32)s1 < 6;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_0899114C; }
    goto L_08991170;
L_08991170:;
    f1 = BITSF(LD32(s3-6544));
    v0 = 0 + 0;
    v1 = sp + 0;
    a0 = 5;
    goto L_08991180;
L_08991180:;
    f0 = BITSF(LD32(v1+32));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = a0 - 1;
    if (cnd_) { goto L_0899119C; }
    goto L_08991194;
L_08991194:;
    v0 = LD32(v1);
    f1 = f0;
    goto L_0899119C;
L_0899119C:;
    cnd_ = (s32)a0 >= 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08991180; }
    goto L_089911A4;
L_089911A4:;
    sp = sp + 160;
    return (rv_t){ v0, v1, f0 };
L_089911DC:;
    a1 = LD32(a1);
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089911E4;
L_089911E4:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0899115C; }
    goto L_089911EC;
L_089911EC:;
    v0 = LD32(v0);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08991208;
L_08991208:;
    f5 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s5));
    f3 = BITSF(LD32(s5+4));
    f4 = BITSF(LD32(s5+8));
    f0 = f0 - f2;
    f1 = f1 - f3;
    f5 = f5 - f4;
    f3 = BITSF(s1);
    v0 = FBITS(f0);
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f2 = (float)(s32)FBITS(f3);
    ST32(sp+68, FBITS(f1));
    f2 = f21 * f2;
    ST32(sp+64, FBITS(f0));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    ST32(sp+72, FBITS(f5));
    f0 = f1 * f2;
    ST32(s0+32, FBITS(f0));
    goto L_08991160;
L_0899127C:;
    f21 = BITSF(LD32(v0-6548));
    goto L_08991138;
L_08991284:;
    a0 = s7 + 0;
    a1 = s0 + 0;
    a2 = s5 + 0;
    { u64 r_ = func_08990EEC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08991294;
L_08991294:;
    v1 = v0 + 0;
    goto L_08991114;
}

/* 0899129C */
rv_t func_0899129C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0899129C:;
    sp = sp - 32;
    s1 = a1 + 0;
    v1 = LD32(a1+4);
    v0 = v1 < 0x7u;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0899136C; }
    goto L_089912C4;
L_089912C4:;
    v0 = v1 << 2;
    v1 = D_08ADE0C4 - (-7996);
    v1 = v1 - 7996;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089912E0u: goto L_089912E0; case 0x0899136Cu: goto L_0899136C; case 0x089913CCu: goto L_089913CC; case 0x0899158Cu: goto L_0899158C; case 0x08991640u: goto L_08991640; default: rs_break(0, 0x089912d8); }
L_089912E0:;
    v1 = LD32(s0+128);
    v0 = 999;
    cnd_ = v1 == v0;
    v0 = 1;
    if (cnd_) { goto L_08991370; }
    goto L_089912F0;
L_089912F0:;
    v0 = LD32(s0+132);
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08991370; }
    goto L_089912FC;
L_089912FC:;
    v0 = LD32(s0+136);
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08991370; }
    goto L_08991308;
L_08991308:;
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
    v0 = D_08AEE678 - (-6536);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-6536));
    v0 = D_08B1BBB0 - (-17488);
    f2 = BITSF(LD32(v0-17488));
    f1 = f1 * f0;
    v0 = D_08AEE674 - (-6540);
    f0 = BITSF(LD32(v0-6540));
    ST32(a2+4, a0);
    f1 = f1 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = fcc;
    ST32(a1+23232, v1);
    if (cnd_) { goto L_089913A4; }
    goto L_0899136C;
L_0899136C:;
    v0 = 1;
    goto L_08991370;
L_08991370:;
    v1 = 999;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, v1);
    { rv_t r_ = func_089919F4(a0, a1, a2, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899138C;
L_0899138C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089913A4:;
    v1 = LD32(s0+128);
    v0 = 7;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, v1);
    { rv_t r_ = func_089919F4(a0, a1, a2, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089913C4;
L_089913C4:;
    ST32(s0+136, s1);
    goto L_0899138C;
L_089913CC:;
    v1 = LD32(s0+128);
    v0 = 999;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08991458; }
    goto L_089913DC;
L_089913DC:;
    v0 = LD32(s0+132);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08991458; }
    goto L_089913E8;
L_089913E8:;
    v0 = LD32(s0+136);
    cnd_ = v0 != 0;
    a1 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_08991458; }
    goto L_089913F4;
L_089913F4:;
    v1 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEE678 - (-6536);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-6536));
    v0 = D_08B1BBB0 - (-17488);
    f2 = BITSF(LD32(v0-17488));
    f1 = f1 * f0;
    v0 = D_08AEE674 - (-6540);
    f0 = BITSF(LD32(v0-6540));
    ST32(a2+4, a0);
    f1 = f1 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = fcc;
    ST32(a1+23232, v1);
    if (cnd_) { goto L_089913A4; }
    goto L_08991454;
L_08991454:;
    a0 = s0 + 0;
    goto L_08991458;
L_08991458:;
    a1 = 2;
    v0 = func_08990AE0(a0, a1, t1, t2, t3);
    goto L_08991460;
L_08991460:;
    cnd_ = v0 == 0;
    a1 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_089914C8; }
    goto L_08991468;
L_08991468:;
    v1 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEE678 - (-6536);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-6536));
    v0 = D_08B1BBBC - (-17476);
    f2 = BITSF(LD32(v0-17476));
    f1 = f1 * f0;
    v0 = D_08AEE674 - (-6540);
    f0 = BITSF(LD32(v0-6540));
    ST32(a2+4, a0);
    f1 = f1 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = fcc;
    ST32(a1+23232, v1);
    if (cnd_) { goto L_08991580; }
    goto L_089914C8;
L_089914C8:;
    a0 = s0 + 0;
    a1 = 1;
    v0 = func_08990AE0(a0, a1, 0, 0, 0);
    goto L_089914D4;
L_089914D4:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08991370; }
    goto L_089914DC;
L_089914DC:;
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
    v0 = D_08AEE678 - (-6536);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-6536));
    v0 = D_08B1BBB8 - (-17480);
    f2 = BITSF(LD32(v0-17480));
    f1 = f1 * f0;
    v0 = D_08AEE674 - (-6540);
    f0 = BITSF(LD32(v0-6540));
    ST32(a2+4, a0);
    f1 = f1 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    ST32(a1+23232, v1);
    if (cnd_) { goto L_0899136C; }
    goto L_08991540;
L_08991540:;
    a0 = s0 + 0;
    goto L_08991544;
L_08991544:;
    a1 = 1;
    goto L_08991548;
L_08991548:;
    v0 = func_08990D30(a0, a1);
    goto L_08991550;
L_08991550:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_0899136C; }
    goto L_08991558;
L_08991558:;
    v1 = LD32(v0);
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = sp + 0;
    v0 = 2;
    goto L_0899156C;
L_0899156C:;
    ST32(sp, v0);
    ST32(sp+4, v1);
    { rv_t r_ = func_089919F4(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08991578;
L_08991578:;
    ST32(s2+16, s1);
    goto L_0899138C;
L_08991580:;
    a0 = s0 + 0;
    goto L_08991584;
L_08991584:;
    a1 = 2;
    goto L_08991548;
L_0899158C:;
    v1 = LD32(s0+128);
    v0 = 999;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08991618; }
    goto L_0899159C;
L_0899159C:;
    v0 = LD32(s0+132);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08991618; }
    goto L_089915A8;
L_089915A8:;
    v0 = LD32(s0+136);
    cnd_ = v0 != 0;
    a1 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_08991618; }
    goto L_089915B4;
L_089915B4:;
    v1 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEE678 - (-6536);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-6536));
    v0 = D_08B1BBB0 - (-17488);
    f2 = BITSF(LD32(v0-17488));
    f1 = f1 * f0;
    v0 = D_08AEE674 - (-6540);
    f0 = BITSF(LD32(v0-6540));
    ST32(a2+4, a0);
    f1 = f1 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = fcc;
    ST32(a1+23232, v1);
    if (cnd_) { goto L_089913A4; }
    goto L_08991614;
L_08991614:;
    a0 = s0 + 0;
    goto L_08991618;
L_08991618:;
    a1 = 2;
    v0 = func_08990AE0(a0, a1, t1, t2, t3);
    goto L_08991620;
L_08991620:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08991584; }
    goto L_08991628;
L_08991628:;
    a1 = 1;
    v0 = func_08990AE0(a0, a1, 0, 0, 0);
    goto L_08991630;
L_08991630:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08991370; }
    goto L_08991638;
L_08991638:;
    a0 = s0 + 0;
    goto L_08991544;
L_08991640:;
    v1 = LD32(s0+128);
    v0 = 999;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089916CC; }
    goto L_08991650;
L_08991650:;
    v0 = LD32(s0+132);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089916CC; }
    goto L_0899165C;
L_0899165C:;
    v0 = LD32(s0+136);
    cnd_ = v0 != 0;
    a1 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_089916CC; }
    goto L_08991668;
L_08991668:;
    v1 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEE678 - (-6536);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-6536));
    v0 = D_08B1BBB0 - (-17488);
    f2 = BITSF(LD32(v0-17488));
    f1 = f1 * f0;
    v0 = D_08AEE674 - (-6540);
    f0 = BITSF(LD32(v0-6540));
    ST32(a2+4, a0);
    f1 = f1 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = fcc;
    ST32(a1+23232, v1);
    if (cnd_) { goto L_089913A4; }
    goto L_089916C8;
L_089916C8:;
    a0 = s0 + 0;
    goto L_089916CC;
L_089916CC:;
    a1 = 0 + 0;
    v0 = func_08990AE0(a0, a1, t1, t2, t3);
    goto L_089916D4;
L_089916D4:;
    cnd_ = v0 == 0;
    a1 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_0899136C; }
    goto L_089916DC;
L_089916DC:;
    v1 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEE678 - (-6536);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-6536));
    v0 = D_08B1BBC0 - (-17472);
    f2 = BITSF(LD32(v0-17472));
    f1 = f1 * f0;
    v0 = D_08AEE674 - (-6540);
    f0 = BITSF(LD32(v0-6540));
    ST32(a2+4, a0);
    f1 = f1 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    ST32(a1+23232, v1);
    if (cnd_) { goto L_0899136C; }
    goto L_0899173C;
L_0899173C:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    v0 = func_08990D30(a0, a1);
    goto L_08991748;
L_08991748:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_0899136C; }
    goto L_08991750;
L_08991750:;
    v1 = LD32(v0);
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = sp + 0;
    v0 = 8;
    goto L_0899156C;
}

/* 08991768 */
rv_t func_08991768(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08991768:;
    sp = sp - 32;
    s1 = a0 + 0;
    v1 = LD32(a1);
    v0 = v1 < 0xbu;
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089917D8; }
    goto L_0899178C;
L_0899178C:;
    v0 = v1 << 2;
    v1 = D_08ADE0E0 - (-7968);
    v1 = v1 - 7968;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089917A8u: goto L_089917A8; case 0x089917D8u: goto L_089917D8; case 0x089918D8u: goto L_089918D8; case 0x0899195Cu: goto L_0899195C; case 0x08991964u: goto L_08991964; default: rs_break(0, 0x089917a0); }
L_089917A8:;
    a1 = LD32(a1+4);
    a0 = s1 + 0;
    { u64 r_ = func_089908D8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089917B4;
L_089917B4:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_089917D8; }
    goto L_089917BC;
L_089917BC:;
    v1 = LD32(v0+8);
    ST32(v0+16, 0);
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = 1;
    if (cnd_) { goto L_08991860; }
    goto L_089917D0;
L_089917D0:;
    cnd_ = v1 == v0;
    a1 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_089917EC; }
    goto L_089917D8;
L_089917D8:;
    goto L_089917DC;
L_089917DC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089917EC:;
    v1 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEE680 - (-6528);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-6528));
    v0 = D_08B1BBB8 - (-17480);
    f2 = BITSF(LD32(v0-17480));
    f1 = f1 * f0;
    v0 = D_08AEE67C - (-6532);
    f0 = BITSF(LD32(v0-6532));
    ST32(a2+4, a0);
    f1 = f1 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    ST32(a1+23232, v1);
    if (cnd_) { goto L_089917D8; }
    goto L_0899184C;
L_0899184C:;
    a0 = s1 + 0;
    a1 = a3 + 0;
    { rv_t r_ = func_0898FFBC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08991858;
L_08991858:;
    goto L_089917DC;
L_08991860:;
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
    v0 = D_08AEE680 - (-6528);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-6528));
    v0 = D_08B1BBBC - (-17476);
    f2 = BITSF(LD32(v0-17476));
    f1 = f1 * f0;
    v0 = D_08AEE67C - (-6532);
    f0 = BITSF(LD32(v0-6532));
    ST32(a2+4, a0);
    f1 = f1 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    ST32(a1+23232, v1);
    if (cnd_) { goto L_089917D8; }
    goto L_089918C4;
L_089918C4:;
    a0 = s1 + 0;
    a1 = a3 + 0;
    { rv_t r_ = func_08990070(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089918D0;
L_089918D0:;
    goto L_089917DC;
L_089918D8:;
    a1 = LD32(a1+4);
    a0 = D_08C2B2A8 - (-19800);
    a2 = 1;
    a0 = a0 - 19800;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089918EC;
L_089918EC:;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_089917D8; }
    goto L_089918F4;
L_089918F4:;
    v0 = D_08ADE068 - (-8088);
    v1 = v0 - 8088;
    a0 = LD32(v0-8088);
    a1 = LD32(v1+4);
    ST32(sp, a0);
    ST32(sp+4, a1);
    v0 = LD32(a2);
    a0 = LD32(v0-12);
    a0 = a2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08991928;
L_08991928:;
    t0 = v0 + 0;
    a0 = s1 + 0;
    a1 = 1;
    a2 = sp + 0;
    a3 = 2;
    { rv_t r_ = func_0899106C(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08991940;
L_08991940:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089917D8; }
    goto L_08991948;
L_08991948:;
    a0 = s1 + 0;
    a2 = s0 + 0;
    { rv_t r_ = func_089919F4(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08991954;
L_08991954:;
    goto L_089917DC;
L_0899195C:;
    ST32(s1+136, 0);
    goto L_089917D8;
L_08991964:;
    a1 = LD32(a1+4);
    a0 = s1 + 0;
    { u64 r_ = func_089908D8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08991970;
L_08991970:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_089917D8; }
    goto L_08991978;
L_08991978:;
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
    v0 = D_08AEE680 - (-6528);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-6528));
    v0 = D_08B1BBC0 - (-17472);
    f2 = BITSF(LD32(v0-17472));
    f1 = f1 * f0;
    v0 = D_08AEE67C - (-6532);
    f0 = BITSF(LD32(v0-6532));
    ST32(a2+4, a0);
    f1 = f1 * f0;
    ST32(a1+23232, v1);
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    ST32(a3+16, 0);
    if (cnd_) { goto L_089917D8; }
    goto L_089919E0;
L_089919E0:;
    a0 = s1 + 0;
    a1 = a3 + 0;
    { rv_t r_ = func_0898FF10(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089919EC;
L_089919EC:;
    goto L_089917DC;
}

/* 089919F4 */
rv_t func_089919F4(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089919F4:;
    sp = sp - 16;
    a3 = 0 + 0;
    s2 = a0 + 0;
    s1 = a1 + 0;
    a0 = 0x8076;
    s0 = a2 + 0;
    v0 = LD32(a2);
    ST32(a1+8, v0);
    a1 = 8;
    v0 = LD32(a2+4);
    a2 = 0 + 0;
    ST32(s1+12, v0);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08991A38;
L_08991A38:;
    t0 = v0 + 0;
    a0 = v0 + 0;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_08991A74; }
    goto L_08991A4C;
L_08991A4C:;
    a3 = LD32(v0+24);
    v0 = LD32(s0);
    ST32(a3, v0);
    v1 = LD32(s0+4);
    ST32(a3+4, v1);
    v0 = LD32(s1);
    ST32(t0, v0);
    v1 = LD32(s2+4);
    ST32(t0+4, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08991A74;
L_08991A74:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08991A8C */
rv_t func_08991A8C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08991A8C:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08991BB0; }
    goto L_08991AC0;
L_08991AC0:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEE684 - (-6524);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-6524));
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
    t0 = D_08C2A458 - (-23464);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2A468 - (-23448);
    a3 = D_08C2A478 - (-23432);
    v1 = t0 - 23464;
    a1 = v0 - 23448;
    a2 = a3 - 23432;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2A508 - (-23288);
    s0 = s3 - 23288;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-23448, FBITS(f5));
    v0 = 4;
    ST32(t0-23464, FBITS(f1));
    ST32(a3-23432, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08991B78;
L_08991B78:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-23288, v0);
    if (cnd_) { goto L_08991BA4; }
    goto L_08991B88;
L_08991B88:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08991B90;
L_08991B90:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08991B90; }
    goto L_08991BA4;
L_08991BA4:;
    v0 = s3 - 23288;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08991BB0;
L_08991BB0:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08991BD4; }
    goto L_08991BC4;
L_08991BC4:;
    v0 = D_08C2A508 - (-23288);
    a0 = LD32(v0-23288);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08991BEC; }
    goto L_08991BD4;
L_08991BD4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08991BEC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08991BF4;
L_08991BF4:;
    goto L_08991BD4;
}

/* 08991BFC */
rv_t func_08991BFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08991BFC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08991A8C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08991C10;
L_08991C10:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08991C1C */
rv_t func_08991C1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08991C1C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08991A8C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08991C30;
L_08991C30:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08991C3C */
void func_08991C3C(u32 a0)
{
    u32 v1 = 0;
    float f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08991C3C:;
    v1 = D_08AEE68C - (-6516);
    ST8(a0+48, 0);
    sp = sp - 16;
    f12 = BITSF(LD32(v1-6516));
    func_08991C6C(a0, f12);
    goto L_08991C58;
L_08991C58:;
    sp = sp + 16;
    return;
}

/* 08991C64 */
void func_08991C64(void)
{
L_08991C64:;
    return;
}

/* 08991C6C */
void func_08991C6C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
L_08991C6C:;
    v0 = D_08B1BBC4 - (-17468);
    f0 = BITSF(LD32(v0-17468));
    v0 = D_08AEE690 - (-6512);
    f2 = BITSF(LD32(v0-6512));
    f3 = f0 + f0;
    v0 = D_08AEE69C - (-6500);
    f0 = f0 * f12;
    f1 = BITSF(LD32(v0-6500));
    f3 = f3 * f12;
    v0 = D_08AEE694 - (-6508);
    f2 = f0 * f2;
    f1 = f0 * f1;
    v1 = D_08AEE698 - (-6504);
    f4 = BITSF(LD32(v0-6508));
    f5 = BITSF(LD32(v1-6504));
    v0 = 2;
    ST32(a0, v0);
    ST32(a0+40, FBITS(f5));
    ST32(a0+12, FBITS(f2));
    ST32(a0+28, FBITS(f1));
    ST32(a0+32, FBITS(f4));
    ST32(a0+36, FBITS(f3));
    ST32(a0+44, FBITS(f12));
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(a0+16, FBITS(f4));
    ST32(a0+20, FBITS(f0));
    ST32(a0+24, FBITS(f5));
    return;
}

/* 08991CE0 */
void func_08991CE0(u32 a0, float f12)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
L_08991CE0:;
    v0 = D_08B1BBC4 - (-17468);
    f2 = BITSF(LD32(v0-17468));
    v0 = D_08AEE6B0 - (-6480);
    f1 = BITSF(LD32(v0-6480));
    f2 = f2 * f12;
    v0 = D_08AEE6BC - (-6468);
    f3 = BITSF(LD32(v0-6468));
    v0 = D_08AEE6B4 - (-6476);
    f0 = BITSF(LD32(v0-6476));
    f1 = f2 * f1;
    v0 = D_08AEE6B8 - (-6472);
    ST32(a0+16, FBITS(f0));
    f0 = BITSF(LD32(v0-6472));
    ST32(a0+40, FBITS(f3));
    ST32(a0+24, FBITS(f0));
    ST32(a0+28, FBITS(f1));
    ST32(a0+36, FBITS(f2));
    ST32(a0+44, FBITS(f12));
    ST32(a0, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(a0+12, FBITS(f1));
    ST32(a0+20, FBITS(f1));
    ST32(a0+32, FBITS(f3));
    return;
}

/* 08991D44 */
u64 func_08991D44(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08991D44:;
    v1 = D_08AEE6D4 - (-6444);
    f0 = BITSF(LD32(v1-6444));
    v0 = 4;
    ST32(a0, v0);
    ST32(a0+44, FBITS(f0));
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08991D5C */
rv_t func_08991D5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr4 = v[4];
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08991D5C:;
    a1 = a1 << 3;
    a1 = a1 + a0;
    f0 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(t0));
    {vr4=0.63661977236f;}
    f3 = BITSF(LD32(a1+4));
    f0 = f0 + f1;
    sp = sp - 32;
    ST32(sp+4, 0);
    v1 = 1;
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    {float s0=vr0;float t0=vr4;float d0=s0*t0;vr4=d0;}
    f8 = BITSF(LD32(a3+8));
    f7 = BITSF(LD32(a3+4));
    f6 = BITSF(LD32(a2+8));
    f4 = BITSF(LD32(a2));
    {float s0=vr4;float d0=sinf(s0*1.57079632679f);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    {float s0=vr4;float d0=cosf(s0*1.57079632679f);vr4=d0;}
    {v0=FBITS(vr4);}
    f3 = f3 * f0;
    f1 = BITSF(v0);
    f0 = BITSF(LD32(a3));
    f2 = BITSF(LD32(a2+4));
    ST32(sp, FBITS(f3));
    f3 = f3 + f0;
    f2 = f2 - f7;
    f5 = BITSF(LD32(a1+4));
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;v[3]=d3;}
    f4 = f4 - f3;
    f5 = f5 * f1;
    ST32(sp, FBITS(f3));
    v0 = FBITS(f4);
    f5 = f5 + f8;
    {vr0=BITSF(v0);}
    v0 = FBITS(f2);
    {vr1=BITSF(v0);}
    f6 = f6 - f5;
    ST32(sp+4, FBITS(f7));
    v0 = FBITS(f6);
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    v0 = D_08AEE6D8 - (-6440);
    f0 = BITSF(LD32(v0-6440));
    ST32(sp+8, FBITS(f5));
    fcc = FCMP(f1, f0, 12);
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f6));
    if (cnd_) { goto L_08991E38; }
    goto L_08991E34;
L_08991E34:;
    v1 = 0 + 0;
    goto L_08991E38;
L_08991E38:;
    v0 = v1 + 0;
    sp = sp + 32;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;
}

/* 08991E44 */
void func_08991E44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08991E44:;
    v0 = a1 << 3;
    a1 = a1 < 0x5u;
    sp = sp - 16;
    cnd_ = a1 == 0;
    v0 = v0 + a0;
    if (cnd_) { goto L_08991ED0; }
    goto L_08991E58;
L_08991E58:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(t0));
    {v[4]=0.63661977236f;}
    f2 = BITSF(LD32(v0+4));
    f0 = f0 + f1;
    ST32(sp+4, 0);
    v1 = FBITS(f0);
    {v[0]=BITSF(v1);}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[4]=d0;}
    f5 = BITSF(LD32(a3+8));
    f3 = BITSF(LD32(a3));
    f4 = BITSF(LD32(a3+4));
    {float s0=v[4];float d0=sinf(s0*1.57079632679f);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);v[4]=d0;}
    {v1=FBITS(v[4]);}
    f2 = f2 * f0;
    f1 = BITSF(v1);
    ST32(sp, FBITS(f2));
    f2 = f2 + f3;
    f0 = BITSF(LD32(v0+4));
    ST32(a2+4, FBITS(f4));
    f0 = f0 * f1;
    ST32(a2, FBITS(f2));
    f0 = f0 + f5;
    ST32(sp, FBITS(f2));
    ST32(a2+8, FBITS(f0));
    ST32(sp+4, FBITS(f4));
    ST32(sp+8, FBITS(f0));
    goto L_08991ED0;
L_08991ED0:;
    sp = sp + 16;
    return;
}

/* 08991ED8 */
void func_08991ED8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08991ED8:;
    sp = sp - 32;
    s4 = a0 + 516;
    s0 = D_08AFA4D0 - (-23344);
    s0 = s0 - 23344;
    s1 = a0 + 0;
    a0 = s4 + 0;
    s3 = D_08C2A5C8 - (-23096);
    func_08873BF8(a0);
    goto L_08991F10;
L_08991F10:;
    a0 = s1 + 252;
    a1 = s0 + 36;
    s0 = s0 + 4;
    func_0885D56C(a0, a1);
    goto L_08991F20;
L_08991F20:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_089D9AEC(a0, a1);
    goto L_08991F2C;
L_08991F2C:;
    v1 = D_08AFA228 - (-24024);
    v1 = v1 - 24024;
    v0 = v1 + 544;
    ST32(s1+252, v0);
    v0 = D_08AEE6E0 - (-6432);
    f1 = BITSF(0);
    f0 = BITSF(LD32(v0-6432));
    a2 = v1 + 656;
    a1 = s1 + 240;
    v0 = (u32)-32762;
    ST32(s1+236, FBITS(f0));
    s2 = s3 - 23096;
    a0 = 12;
    ST32(s1, v1);
    ST32(s1+240, FBITS(f1));
    ST32(s1+516, a2);
    ST32(a1+8, FBITS(f1));
    ST32(a1+4, FBITS(f1));
    ST16(s4+8, v0);
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    v0 = LD32(a1-16);
    v1 = v1 - 1;
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08991F98;
L_08991F98:;
    a0 = LD32(s3-23096);
    s0 = s0 << 2;
    a2 = LD32(s2+12);
    s0 = s0 + a0;
    v1 = LD32(s0);
    ST32(v0, s1);
    a0 = D_08C2C21C - (-15844);
    a2 = a2 + 1;
    ST32(v0+4, v1);
    a1 = s1 + 0;
    a0 = a0 - 15844;
    ST32(s0, v0);
    ST8(v0+8, 0);
    ST32(s2+12, a2);
    { u64 r_ = func_08AC3300(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08991FD4;
L_08991FD4:;
    sp = sp + 32;
    return;
}

/* 08991FF4 */
rv_t func_08991FF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08991FF4:;
    v1 = D_08AFA228 - (-24024);
    sp = sp - 32;
    v1 = v1 - 24024;
    v0 = v1 + 544;
    s1 = a0 + 0;
    a0 = v1 + 656;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+516, a0);
    a0 = D_08C2A5C8 - (-23096);
    a0 = a0 - 23096;
    ST32(s1+252, v0);
    s0 = D_08AFA4D0 - (-23344);
    s0 = s0 - 23344;
    s3 = s1 + 516;
    func_08AC3688(a0, a1, t1, t2, t3);
    goto L_08992048;
L_08992048:;
    s2 = s1 + 252;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 36;
    func_089DA1FC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0899205C;
L_0899205C:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08992068;
L_08992068:;
    a0 = s3 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08992070;
L_08992070:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0899208C */
rv_t func_0899208C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0899208C:;
    v1 = D_08AFA228 - (-24024);
    sp = sp - 32;
    v1 = v1 - 24024;
    v0 = v1 + 544;
    s1 = a0 + 0;
    a0 = v1 + 656;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+516, a0);
    a0 = D_08C2A5C8 - (-23096);
    a0 = a0 - 23096;
    ST32(s1+252, v0);
    s0 = D_08AFA4D0 - (-23344);
    s0 = s0 - 23344;
    s3 = s1 + 516;
    func_08AC3688(a0, a1, t1, t2, t3);
    goto L_089920E0;
L_089920E0:;
    s2 = s1 + 252;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 36;
    func_089DA1FC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089920F4;
L_089920F4:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08992100;
L_08992100:;
    a0 = s3 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08992108;
L_08992108:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08992110;
L_08992110:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0899212C */
rv_t func_0899212C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[368] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 368);
L_0899212C:;
    sp = sp - 368;
    v0 = LD32(a0+92);
    cnd_ = v0 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_089926C4; }
    goto L_08992158;
L_08992158:;
    a0 = s2 + 0;
    { rv_t r_ = func_089DBCF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08992160;
L_08992160:;
    a0 = LD32(s2+92);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08992174;
L_08992174:;
    a2 = LD32(s2+92);
    ST32(sp, FBITS(f0));
    a1 = 3;
    v0 = LD32(a2);
    v1 = LD32(v0+8);
    t_ = v1;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08992190;
L_08992190:;
    a0 = LD32(s2+92);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    v1 = LD32(a0);
    ST32(sp+4, FBITS(f0));
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 2;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089921AC;
L_089921AC:;
    a2 = LD32(s2+92);
    ST32(sp+8, FBITS(f0));
    a1 = 5;
    v0 = LD32(a2);
    v1 = LD32(v0+8);
    t_ = v1;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089921C8;
L_089921C8:;
    f1 = BITSF(LD32(s2+236));
    f1 = f1 + f0;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    ST32(s2+236, FBITS(f1));
    if (cnd_) { goto L_089921FC; }
    goto L_089921E4;
L_089921E4:;
    v0 = D_08AEE6E4 - (-6428);
    f0 = BITSF(LD32(v0-6428));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_089921FC; }
    goto L_089921FC;
L_089921FC:;
    ST32(s2+236, FBITS(f0));
    a1 = 1;
    a0 = LD32(s2+92);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    s0 = D_08B2859C - (-31332);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08992218;
L_08992218:;
    f1 = BITSF(LD32(s0-31332));
    v0 = D_08AEE6E8 - (-6424);
    a2 = LD32(s2+92);
    f0 = f0 * f1;
    f1 = BITSF(LD32(v0-6424));
    a0 = a2 + 0;
    f0 = f0 * f1;
    ST32(sp+16, FBITS(f0));
    v0 = LD32(a2);
    v1 = LD32(v0+8);
    t_ = v1;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08992248;
L_08992248:;
    f1 = BITSF(LD32(s0-31332));
    v0 = D_08AEE6EC - (-6420);
    f22 = BITSF(LD32(v0-6420));
    f0 = f0 * f1;
    v0 = s2 + 240;
    f3 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(sp+16));
    f0 = f0 * f22;
    f2 = BITSF(LD32(s2+240));
    a1 = D_08ADE11C - (-7908);
    a2 = D_08ADE120 - (-7904);
    f2 = f2 + f1;
    f3 = f3 + f0;
    a0 = v0 + 0;
    a1 = a1 - 7908;
    ST32(s2+240, FBITS(f2));
    a2 = a2 - 7904;
    ST32(v0+4, FBITS(f3));
    ST32(sp+24, 0);
    ST32(sp+20, FBITS(f0));
    f0 = func_08992DF8(a0, a1, a2);
    goto L_0899229C;
L_0899229C:;
    v0 = D_08AEE6F0 - (-6416);
    f20 = BITSF(LD32(v0-6416));
    f12 = BITSF(LD32(s2+244));
    ST32(s2+240, FBITS(f0));
    f21 = f22 - f20;
    f13 = f21;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089922B8;
L_089922B8:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f1 = f0 + f21;
    if (cnd_) { goto L_089922DC; }
    goto L_089922C8;
L_089922C8:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_089922DC; }
    goto L_089922D8;
L_089922D8:;
    f1 = f0;
    goto L_089922DC;
L_089922DC:;
    a0 = LD32(s2+40);
    ST32(s2+244, FBITS(f1));
    {v[112]=BITSF(LD32(s2+(240)));}
    {v[113]=BITSF(LD32(s2+(244)));}
    {v[114]=BITSF(LD32(s2+(248)));}
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
    cnd_ = a0 != 0;
    if (cnd_) { f1 = BITSF(LD32(s2+236)); goto L_0899256C; }
    goto L_0899237C;
L_0899237C:;
    v1 = LD32(s2);
    goto L_08992380;
L_08992380:;
    a0 = s2 + 0;
    v0 = LD32(v1+244);
    f20 = BITSF(0);
    t_ = v0;
    s0 = sp + 128;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08992394;
L_08992394:;
    v1 = LD32(s2);
    s1 = v0 + 0;
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089923A8;
L_089923A8:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089923B4;
L_089923B4:;
    a0 = LD32(s2);
    v0 = D_08B285B4 - (-31308);
    f12 = BITSF(LD32(v0-31308));
    v1 = LD32(a0-12);
    a1 = s1 + 0;
    a2 = s0 + 0;
    v1 = s2 + v1;
    a0 = LD32(v1+4);
    a3 = 0 + 0;
    { rv_t r_ = func_0887916C(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089923DC;
L_089923DC:;
    a0 = LD32(s2+92);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 6;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089923F0;
L_089923F0:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { a0 = LD32(s2+92); goto L_08992414; }
    goto L_08992400;
L_08992400:;
    v1 = LD32(s2+92);
    v0 = LD_U8(v1+72);
    v0 = v0 ^ 0x1;
    ST8(v1+72, v0);
    a0 = LD32(s2+92);
    goto L_08992414;
L_08992414:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 7;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08992424;
L_08992424:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { a0 = LD32(s2+92); goto L_08992448; }
    goto L_08992434;
L_08992434:;
    v1 = D_08C2C3E4 - (-15388);
    v0 = LD_U8(v1-15388);
    v0 = v0 ^ 0x1;
    ST8(v1-15388, v0);
    a0 = LD32(s2+92);
    goto L_08992448;
L_08992448:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 8;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08992458;
L_08992458:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    v0 = D_08B159FC - (23036);
    if (cnd_) { goto L_0899248C; }
    goto L_08992468;
L_08992468:;
    goto L_0899246C;
L_0899246C:;
    sp = sp + 368;
    return (rv_t){ v0, v1, f0 };
L_0899248C:;
    t1 = LD32(v0+23036);
    a0 = LD32(s2);
    v0 = D_08AEE6F4 - (-6412);
    f0 = BITSF(LD32(t1));
    f1 = BITSF(LD32(t1+4));
    f2 = BITSF(LD32(t1+8));
    ST32(sp+112, FBITS(f0));
    s0 = sp + 144;
    a1 = sp + 112;
    ST32(sp+116, FBITS(f1));
    a2 = sp + 96;
    t0 = 0 + 0;
    ST32(sp+120, FBITS(f2));
    f0 = BITSF(LD32(t1+20));
    v1 = LD32(a0-16);
    f12 = BITSF(LD32(v0-6412));
    ST32(sp+96, FBITS(f0));
    v1 = s2 + v1;
    a0 = s0 + 0;
    f0 = BITSF(LD32(t1+32));
    a3 = LD32(v1+4);
    ST32(sp+100, FBITS(f0));
    f0 = BITSF(LD32(t1+44));
    ST32(sp+104, FBITS(f0));
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_089924F0;
L_089924F0:;
    a0 = s0 + 0;
    { rv_t r_ = func_08834E34(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089924F8;
L_089924F8:;
    a0 = 0x8000;
    a1 = 4;
    a2 = 0 + 0;
    a3 = 0 + 0;
    s1 = v0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08992510;
L_08992510:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08992468; }
    goto L_08992518;
L_08992518:;
    v1 = LD32(v0+24);
    cnd_ = v1 == 0;
    if (cnd_) { v1 = LD32(s2); goto L_08992540; }
    goto L_08992524;
L_08992524:;
    v0 = LD32(s1+4);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v1, v0); goto L_0899253C; }
    goto L_08992530;
L_08992530:;
    v0 = D_08ADE118 - (-7912);
    v0 = LD32(v0-7912);
    ST32(v1, v0);
    goto L_0899253C;
L_0899253C:;
    v1 = LD32(s2);
    goto L_08992540;
L_08992540:;
    v0 = LD32(v1+48);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899254C;
L_0899254C:;
    v1 = LD32(s2);
    a1 = s0 + 0;
    a2 = v0 + 0;
    a0 = LD32(v1-16);
    a0 = s2 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08992564;
L_08992564:;
    goto L_0899246C;
L_0899256C:;
    f5 = BITSF(LD32(sp+8));
    f0 = BITSF(LD32(sp));
    f4 = BITSF(LD32(sp+4));
    f5 = f5 * f1;
    f0 = f0 * f1;
    f4 = f4 * f1;
    v1 = LD32(sp+32);
    v0 = LD32(sp+36);
    {u32 a_=sp+(288);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    v1 = LD32(sp+40);
    {v[33]=BITSF(v0);}
    {v[34]=BITSF(v1);}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(272);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(224);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v1 = LD32(sp+44);
    v0 = LD32(sp+48);
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(304);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    v1 = LD32(sp+52);
    {v[33]=BITSF(v0);}
    v0 = LD32(sp+60);
    {v[34]=BITSF(v1);}
    v1 = LD32(sp+56);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(320);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
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
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {v0=FBITS(v[17]);}
    ST32(sp+96, FBITS(f0));
    ST32(sp+80, FBITS(f2));
    ST32(sp+88, FBITS(f3));
    ST32(sp+100, FBITS(f4));
    ST32(sp+104, FBITS(f5));
    ST32(sp+112, FBITS(f2));
    ST32(sp+120, FBITS(f3));
    ST32(sp+84, v0);
    ST32(sp+116, v0);
    { rv_t r_ = func_088BA824(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08992658;
L_08992658:;
    a1 = sp + 112;
    f0 = BITSF(LD32(s0-31332));
    f5 = BITSF(LD32(sp+80));
    f4 = BITSF(LD32(sp+84));
    f3 = BITSF(LD32(sp+88));
    f5 = f5 * f0;
    f4 = f4 * f0;
    f3 = f3 * f0;
    a0 = LD32(s2+40);
    ST32(sp+96, FBITS(f5));
    ST32(sp+100, FBITS(f4));
    ST32(sp+104, FBITS(f3));
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    f1 = f1 + f5;
    f0 = f0 + f3;
    f2 = f2 + f4;
    ST32(sp+112, FBITS(f1));
    ST32(sp+120, FBITS(f0));
    ST32(sp+116, FBITS(f2));
    { rv_t r_ = func_088BAAA4(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089926B0;
L_089926B0:;
    a1 = sp + 32;
    a0 = LD32(s2+40);
    { rv_t r_ = func_088BAB50(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089926BC;
L_089926BC:;
    v1 = LD32(s2);
    goto L_08992380;
L_089926C4:;
    a0 = 76;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089926CC;
L_089926CC:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    func_08A5ED9C(a0);
    goto L_089926D8;
L_089926D8:;
    ST32(s2+92, s0);
    goto L_08992158;
}

/* 089926E0 */
rv_t func_089926E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr121 = v[121], vr122 = v[122], vr126 = v[126], vr127 = v[127];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089926E0:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    s0 = a1 + 0;
    { rv_t r_ = ({ v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[121]=vr121;v[122]=vr122;v[126]=vr126;v[127]=vr127;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr116=v[116];vr117=v[117];vr118=v[118];vr121=v[121];vr122=v[122];vr126=v[126];vr127=v[127];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899270C;
L_0899270C:;
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    v0 = D_08AEE6F8 - (-6408);
    f0 = BITSF(LD32(v0-6408));
    ST32(s0+8, FBITS(f2));
    f1 = f1 - f0;
    ST32(s0, FBITS(f3));
    ST32(s0+4, FBITS(f1));
    {vr112=BITSF(LD32(s1+(240)));}
    {vr113=BITSF(LD32(s1+(244)));}
    {vr114=BITSF(LD32(s1+(248)));}
    {vr115=0.63661977236f;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr115;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float d0=cosf(s0*1.57079632679f);float d1=cosf(s1*1.57079632679f);float d2=cosf(s2*1.57079632679f);vr116=d0;vr117=d1;vr118=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);float d2=sinf(s2*1.57079632679f);v[120]=d0;vr121=d1;vr122=d2;}
    {float s0=v[120];float t0=vr121;float d0=s0*t0;vr115=d0;}
    {float s0=vr115;float t0=vr122;float d0=s0*t0;v[123]=d0;}
    {float s0=vr117;float t0=vr118;float d0=s0*t0;vr127=d0;}
    {float s0=v[123];float s1=vr127;float t=0;t+=s0;t+=s1;v[96]=t;}
    {float s0=vr115;float t0=vr118;float d0=s0*t0;v[123]=d0;}
    {float s0=vr117;float t0=vr122;float d0=s0*t0;vr127=d0;}
    {float s0=vr121;float t0=vr118;float d0=s0*t0;vr126=d0;}
    {float s0=vr126;float s1=vr127;float d0=-s0;float d1=-s1;vr126=d0;vr127=d1;}
    {float s0=v[123];float s1=vr127;float t=0;t+=s0;t+=s1;v[97]=t;}
    {float s0=vr116;float t0=vr121;float d0=s0*t0;v[98]=d0;}
    {float s0=vr116;float t0=vr122;float d0=s0*t0;v[100]=d0;}
    {float s0=vr116;float t0=vr118;float d0=s0*t0;v[101]=d0;}
    {float s0=v[120];float d0=-s0;v[102]=d0;}
    {float s0=v[120];float t0=vr117;float d0=s0*t0;v[124]=d0;}
    {float s0=v[124];float t0=vr122;float d0=s0*t0;vr127=d0;}
    {float s0=vr126;float s1=vr127;float t=0;t+=s0;t+=s1;v[104]=t;}
    {float s0=v[124];float t0=vr118;float d0=s0*t0;vr127=d0;}
    {float s0=vr121;float t0=vr122;float d0=s0*t0;vr126=d0;}
    {float s0=vr126;float s1=vr127;float t=0;t+=s0;t+=s1;v[105]=t;}
    {float s0=vr116;float t0=vr117;float d0=s0*t0;v[106]=d0;}
    {ST32(s2+(0),FBITS(v[96]));}
    {ST32(s2+(4),FBITS(v[97]));}
    {ST32(s2+(8),FBITS(v[98]));}
    {ST32(s2+(12),FBITS(v[100]));}
    {ST32(s2+(16),FBITS(v[101]));}
    {ST32(s2+(20),FBITS(v[102]));}
    {ST32(s2+(24),FBITS(v[104]));}
    {ST32(s2+(28),FBITS(v[105]));}
    {ST32(s2+(32),FBITS(v[106]));}
    sp = sp + 16;
    { v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[121]=vr121;v[122]=vr122;v[126]=vr126;v[127]=vr127;return (rv_t){ v0, v1, f0 }; }
    v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[121]=vr121;v[122]=vr122;v[126]=vr126;v[127]=vr127;
}

/* 089927D8 */
rv_t func_089927D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr64 = v[64], vr65 = v[65], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr73 = v[73], vr76 = v[76], vr77 = v[77], vr78 = v[78];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089927D8:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = LD32(a1+24);
    cnd_ = s0 == 0;
    s2 = s0 + 24;
    if (cnd_) { goto L_08992B90; }
    goto L_089927FC;
L_089927FC:;
    v1 = LD32(a0);
    v0 = LD32(v1+240);
    t_ = v0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr70=v[70];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899280C;
L_0899280C:;
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
    {float s0=vr0;v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08992A8C; }
    goto L_08992848;
L_08992848:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089929CC; }
    goto L_08992858;
L_08992858:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;vr64=d0;}
    {float s0=v[122];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089928F0; }
    goto L_08992880;
L_08992880:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);vr70=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
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
    if (cnd_) { goto L_089928CC; }
    goto L_089928BC;
L_089928BC:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_089928CC;
L_089928CC:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08992910; }
    goto L_089928DC;
L_089928DC:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08992910; }
    goto L_089928EC;
L_089928EC:;
    goto L_089928F0;
L_089928F0:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08992910; }
    goto L_08992904;
L_08992904:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08992910;
L_08992910:;
    {float s0=vr78;float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;vr64=d0;}
    {float s0=v[117];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089929A0; }
    goto L_08992930;
L_08992930:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);vr70=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
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
    if (cnd_) { goto L_0899297C; }
    goto L_0899296C;
L_0899296C:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_0899297C;
L_0899297C:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089929C0; }
    goto L_0899298C;
L_0899298C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_089929C0; }
    goto L_0899299C;
L_0899299C:;
    goto L_089929A0;
L_089929A0:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089929C0; }
    goto L_089929B4;
L_089929B4:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_089929C0;
L_089929C0:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08992B44; }
    goto L_089929C8;
L_089929C8:;
    goto L_089929CC;
L_089929CC:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=v[120];float d0=s0;vr64=d0;}
    {float s0=v[112];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08992A60; }
    goto L_089929F0;
L_089929F0:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);vr70=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
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
    if (cnd_) { goto L_08992A3C; }
    goto L_08992A2C;
L_08992A2C:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08992A3C;
L_08992A3C:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08992A80; }
    goto L_08992A4C;
L_08992A4C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08992A80; }
    goto L_08992A5C;
L_08992A5C:;
    goto L_08992A60;
L_08992A60:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08992A80; }
    goto L_08992A74;
L_08992A74:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08992A80;
L_08992A80:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08992B44; }
    goto L_08992A88;
L_08992A88:;
    goto L_08992A8C;
L_08992A8C:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=v[113];float d0=s0;vr64=d0;}
    {float s0=v[121];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08992B20; }
    goto L_08992AB0;
L_08992AB0:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);vr70=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
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
    if (cnd_) { goto L_08992AFC; }
    goto L_08992AEC;
L_08992AEC:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08992AFC;
L_08992AFC:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08992B40; }
    goto L_08992B0C;
L_08992B0C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08992B40; }
    goto L_08992B1C;
L_08992B1C:;
    goto L_08992B20;
L_08992B20:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08992B40; }
    goto L_08992B34;
L_08992B34:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08992B40;
L_08992B40:;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    goto L_08992B44;
L_08992B44:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(s0+(0),FBITS(v[96]));}
    {ST32(s0+(4),FBITS(v[97]));}
    {ST32(s0+(8),FBITS(v[98]));}
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr70=v[70];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08992B64;
L_08992B64:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s2+8, FBITS(f0));
    a1 = s0 + 12;
    ST32(s0+24, FBITS(f1));
    ST32(s2+4, FBITS(f2));
    v0 = LD32(s1);
    v1 = LD32(v0+276);
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr70=v[70];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08992B90;
L_08992B90:;
    v0 = 1;
    sp = sp + 16;
    { v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;return (rv_t){ v0, v1, f0 }; }
    v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;
}

/* 08992BAC */
rv_t func_08992BAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08992BAC:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 536;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08992BC8;
L_08992BC8:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    func_08991ED8(a0);
    goto L_08992BD4;
L_08992BD4:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08992BE8;
L_08992BE8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08992BFC */
rv_t func_08992BFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08992BFC:;
    sp = sp - 16;
    s1 = a0 + 0;
    { rv_t r_ = func_08A049C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08992C14;
L_08992C14:;
    a1 = 1;
    s0 = LD32(s1+40);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08992C38; }
    goto L_08992C24;
L_08992C24:;
    goto L_08992C28;
L_08992C28:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08992C38:;
    func_088BB4A4(a0, a1);
    goto L_08992C40;
L_08992C40:;
    a1 = 1;
    a0 = s0 + 0;
    { u64 r_ = func_088BB4CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08992C4C;
L_08992C4C:;
    a0 = LD32(s1+40);
    v0 = func_088BB4E4(a0);
    goto L_08992C54;
L_08992C54:;
    v0 = v0 | 0x400;
    a0 = LD32(s1+40);
    v0 = v0 & 0xffff;
    a1 = v0 + 0;
    { rv_t r_ = func_088BB4F0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08992C68;
L_08992C68:;
    goto L_08992C28;
}

/* 08992C70 */
u32 func_08992C70(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08992C70:;
    v1 = LD32(a0+92);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08992C80; }
    goto L_08992C7C;
L_08992C7C:;
    v0 = LD_U8(v1+72);
    goto L_08992C80;
L_08992C80:;
    return v0;
}

/* 08992C88 */
rv_t func_08992C88(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08992C88:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08992DAC; }
    goto L_08992CBC;
L_08992CBC:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEE6FC - (-6404);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-6404));
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
    t0 = D_08C2A518 - (-23272);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2A528 - (-23256);
    a3 = D_08C2A538 - (-23240);
    v1 = t0 - 23272;
    a1 = v0 - 23256;
    a2 = a3 - 23240;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2A5C8 - (-23096);
    s0 = s3 - 23096;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-23256, FBITS(f5));
    v0 = 4;
    ST32(t0-23272, FBITS(f1));
    ST32(a3-23240, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08992D74;
L_08992D74:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-23096, v0);
    if (cnd_) { goto L_08992DA0; }
    goto L_08992D84;
L_08992D84:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08992D8C;
L_08992D8C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08992D8C; }
    goto L_08992DA0;
L_08992DA0:;
    v0 = s3 - 23096;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08992DAC;
L_08992DAC:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08992DD0; }
    goto L_08992DC0;
L_08992DC0:;
    v0 = D_08C2A5C8 - (-23096);
    a0 = LD32(v0-23096);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08992DE8; }
    goto L_08992DD0;
L_08992DD0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08992DE8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08992DF0;
L_08992DF0:;
    goto L_08992DD0;
}

/* 08992DF8 */
float func_08992DF8(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08992DF8:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08992E24; }
    goto L_08992E10;
L_08992E10:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_08992E24; }
    goto L_08992E24;
L_08992E24:;
    return f0;
}

/* 08992E2C */
rv_t func_08992E2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08992E2C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08992C88(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08992E40;
L_08992E40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08992E4C */
rv_t func_08992E4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08992E4C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08992C88(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08992E60;
L_08992E60:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08992E6C */
rv_t func_08992E6C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08992E6C:;
    sp = sp - 32;
    s5 = a0 + 276;
    s1 = a0 + 0;
    a0 = s5 + 0;
    s0 = D_08AFAD98 - (-21096);
    s0 = s0 - 21096;
    s2 = s1 + 200;
    s4 = D_08C2A608 - (-23032);
    func_08873E94(a0, a1);
    goto L_08992EAC;
L_08992EAC:;
    a1 = s0 + 36;
    a0 = s2 + 0;
    a2 = (u32)-1;
    s0 = s0 + 4;
    func_088628D0(a0, a1, a2, 0, 0, 0);
    goto L_08992EC0;
L_08992EC0:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    a2 = 999;
    func_089E13B8(a0, a1);
    goto L_08992ED0;
L_08992ED0:;
    v1 = D_08AFAB18 - (-21736);
    v1 = v1 - 21736;
    v0 = v1 + 360;
    ST32(s1+200, v0);
    a0 = v1 + 564;
    v0 = (u32)-32762;
    ST32(s1, v1);
    s3 = s4 - 23032;
    ST32(s1+276, a0);
    a0 = 12;
    ST16(s5+8, v0);
    v1 = LD32(s2+64);
    v0 = LD32(s2+8);
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    v0 = v0 | 0x1000;
    ST32(s2+8, v0);
    ST32(s2+64, v1);
    a1 = LD32(s1);
    v1 = LD32(s3+4);
    v0 = LD32(a1-16);
    v1 = v1 - 1;
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08992F34;
L_08992F34:;
    a0 = LD32(s4-23032);
    s0 = s0 << 2;
    v1 = LD32(s3+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s3+12, v1);
    ST32(v0+4, a1);
    ST32(v0, s1);
    ST32(s0, v0);
    ST8(v0+8, 0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08992F84 */
rv_t func_08992F84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08992F84:;
    v1 = D_08AFAB18 - (-21736);
    sp = sp - 32;
    v1 = v1 - 21736;
    v0 = v1 + 360;
    s1 = a0 + 0;
    a0 = v1 + 564;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+276, a0);
    a0 = D_08C2A608 - (-23032);
    a0 = a0 - 23032;
    ST32(s1+200, v0);
    s0 = D_08AFAD98 - (-21096);
    s0 = s0 - 21096;
    s3 = s1 + 276;
    func_08AC3A38(a0, a1, t1, t2, t3);
    goto L_08992FD8;
L_08992FD8:;
    s2 = s1 + 200;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 36;
    func_089E15D8(a0, a1, 0, 0);
    goto L_08992FEC;
L_08992FEC:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08992FF8;
L_08992FF8:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08993000;
L_08993000:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0899301C */
rv_t func_0899301C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0899301C:;
    v1 = D_08AFAB18 - (-21736);
    sp = sp - 32;
    v1 = v1 - 21736;
    v0 = v1 + 360;
    s1 = a0 + 0;
    a0 = v1 + 564;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+276, a0);
    a0 = D_08C2A608 - (-23032);
    a0 = a0 - 23032;
    ST32(s1+200, v0);
    s0 = D_08AFAD98 - (-21096);
    s0 = s0 - 21096;
    s3 = s1 + 276;
    func_08AC3A38(a0, a1, t1, t2, t3);
    goto L_08993070;
L_08993070:;
    s2 = s1 + 200;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 36;
    func_089E15D8(a0, a1, 0, 0);
    goto L_08993084;
L_08993084:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08993090;
L_08993090:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08993098;
L_08993098:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089930A0;
L_089930A0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089930BC */
rv_t func_089930BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089930BC:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089930E0;
L_089930E0:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089E36F8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089930EC;
L_089930EC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08993100 */
rv_t func_08993100(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08993100:;
    sp = sp - 32;
    t0 = a0 + 0;
    a3 = sp + 0;
    a2 = 0 + 0;
    goto L_08993114;
L_08993114:;
    v0 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(a1, v0);
    ST8(a3, v1);
    cnd_ = a0 != 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_08993114; }
    goto L_08993138;
L_08993138:;
    a0 = t0 + 0;
    { rv_t r_ = func_089E3748(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993140;
L_08993140:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0899314C */
void func_0899314C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0899314C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 304;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993170;
L_08993170:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08992E6C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993180;
L_08993180:;
    a0 = s2 + 0;
    cnd_ = s2 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_089931A4; }
    goto L_0899318C;
L_0899318C:;
    goto L_08993190;
L_08993190:;
    sp = sp + 16;
    return;
L_089931A4:;
    v0 = LD32(s2);
    v1 = LD32(v0+60);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089931B4;
L_089931B4:;
    goto L_08993190;
}

/* 089931BC */
rv_t func_089931BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089931BC:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089E39C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089931D0;
L_089931D0:;
    a1 = 1;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    s0 = s0 + v0;
    s0 = LD32(s0+4);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089931FC; }
    goto L_089931EC;
L_089931EC:;
    goto L_089931F0;
L_089931F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089931FC:;
    func_088BB4A4(a0, a1);
    goto L_08993204;
L_08993204:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_088BB4CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08993210;
L_08993210:;
    goto L_089931F0;
}

/* 08993218 */
rv_t func_08993218(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08993218:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0899333C; }
    goto L_0899324C;
L_0899324C:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEE710 - (-6384);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-6384));
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
    t0 = D_08C2A5D8 - (-23080);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2A5E8 - (-23064);
    a3 = D_08C2A5F8 - (-23048);
    v1 = t0 - 23080;
    a1 = v0 - 23064;
    a2 = a3 - 23048;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2A608 - (-23032);
    s0 = s3 - 23032;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-23064, FBITS(f5));
    v0 = 4;
    ST32(t0-23080, FBITS(f1));
    ST32(a3-23048, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993304;
L_08993304:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-23032, v0);
    if (cnd_) { goto L_08993330; }
    goto L_08993314;
L_08993314:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_0899331C;
L_0899331C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0899331C; }
    goto L_08993330;
L_08993330:;
    v0 = s3 - 23032;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_0899333C;
L_0899333C:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08993360; }
    goto L_08993350;
L_08993350:;
    v0 = D_08C2A608 - (-23032);
    a0 = LD32(v0-23032);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08993378; }
    goto L_08993360;
L_08993360:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08993378:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08993380;
L_08993380:;
    goto L_08993360;
}

/* 08993388 */
rv_t func_08993388(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08993388:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08993218(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899339C;
L_0899339C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089933A8 */
rv_t func_089933A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089933A8:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08993218(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089933BC;
L_089933BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089933C8 */
rv_t func_089933C8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_089933C8:;
    sp = sp - 80;
    s3 = a0 + 788;
    s0 = D_08AFB700 - (-18688);
    s0 = s0 - 18688;
    s7 = a0 + 0;
    a0 = s3 + 0;
    s2 = D_08C2A6C8 - (-22840);
    s1 = s2 - 22840;
    func_08873BF8(a0);
    goto L_08993414;
L_08993414:;
    a1 = s0 + 36;
    a0 = s7 + 524;
    s0 = s0 + 4;
    func_0885D56C(a0, a1);
    goto L_08993424;
L_08993424:;
    a1 = s0 + 0;
    a0 = s7 + 0;
    func_089D9AEC(a0, a1);
    goto L_08993430;
L_08993430:;
    v1 = D_08AFB418 - (-19432);
    v1 = v1 - 19432;
    a0 = v1 + 716;
    v0 = v1 + 604;
    ST32(s7+524, v0);
    a3 = D_08B45AA8 - (23208);
    a1 = a3 + 23208;
    ST32(s7+788, a0);
    v0 = s7 + 240;
    a2 = s7 + 276;
    ST32(s7, v1);
    v1 = D_08AEE738 - (-6344);
    t2 = s7 + 320;
    f6 = BITSF(LD32(a3+23208));
    f0 = BITSF(LD32(a1+4));
    f1 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1+12));
    f3 = BITSF(LD32(a1+16));
    f4 = BITSF(LD32(a1+20));
    ST32(v0+4, FBITS(f0));
    t3 = D_08B45ACC - (23244);
    t1 = t3 + 23244;
    ST32(v0+8, FBITS(f1));
    t0 = 999;
    t4 = s7 + 496;
    ST32(v0+12, FBITS(f2));
    a0 = 12;
    ST32(v0+16, FBITS(f3));
    f5 = BITSF(LD32(a1+24));
    ST32(v0+20, FBITS(f4));
    ST32(s7+240, FBITS(f6));
    f3 = BITSF(LD32(a1+8));
    f4 = BITSF(LD32(a1+12));
    f8 = BITSF(LD32(a3+23208));
    f6 = BITSF(LD32(a1+20));
    ST32(v0+24, FBITS(f5));
    f1 = BITSF(LD32(a1+28));
    f5 = BITSF(LD32(a1+16));
    f0 = BITSF(LD32(a1+32));
    f2 = BITSF(LD32(a1+4));
    f7 = BITSF(LD32(a1+24));
    ST32(s7+276, FBITS(f8));
    ST32(a2+4, FBITS(f2));
    ST32(a2+8, FBITS(f3));
    ST32(a2+12, FBITS(f4));
    ST32(a2+16, FBITS(f5));
    ST32(v0+32, FBITS(f0));
    ST32(v0+28, FBITS(f1));
    v0 = D_08AEE740 - (-6336);
    ST32(a2+20, FBITS(f6));
    f0 = BITSF(LD32(a1+28));
    f20 = BITSF(LD32(v0-6336));
    v0 = D_08AEE73C - (-6340);
    f2 = BITSF(LD32(a1+32));
    ST32(a2+28, FBITS(f0));
    f1 = BITSF(LD32(v1-6344));
    f0 = BITSF(LD32(v0-6340));
    v0 = D_08AEE744 - (-6332);
    ST32(a2+24, FBITS(f7));
    ST32(a2+32, FBITS(f2));
    ST32(s7+312, 0);
    ST32(s7+316, 0);
    ST32(t2+8, 0);
    ST32(t2+4, FBITS(f1));
    ST32(s7+364, FBITS(f0));
    f0 = BITSF(LD32(v0-6332));
    ST32(s7+348, FBITS(f1));
    ST32(s7+396, FBITS(f0));
    ST32(s7+320, 0);
    ST32(s7+332, 0);
    ST8(s7+336, 0);
    ST32(s7+340, 0);
    ST32(s7+344, 0);
    ST32(s7+352, 0);
    ST32(s7+356, 0);
    ST32(s7+360, 0);
    ST32(s7+368, FBITS(f20));
    ST32(s7+372, FBITS(f20));
    ST32(s7+376, 0);
    ST32(s7+380, 0);
    ST32(s7+384, FBITS(f20));
    ST32(s7+388, 0);
    ST32(s7+392, 0);
    ST32(s7+400, 0);
    v0 = LD32(t3+23244);
    ST32(s7+404, v0);
    v1 = LD32(t1+4);
    ST32(s7+512, 0);
    ST32(s7+408, v1);
    v0 = LD32(t1+8);
    ST32(s7+516, 0);
    ST32(s7+412, v0);
    v0 = (u32)-32763;
    v1 = LD32(t1+12);
    ST32(s7+488, t0);
    ST32(s7+420, t0);
    ST32(s7+424, t0);
    ST32(s7+432, t0);
    ST32(s7+436, t0);
    ST32(s7+428, 0);
    ST32(s7+444, 0);
    ST32(s7+448, 0);
    ST32(s7+452, 0);
    ST8(s7+492, 0);
    ST8(s7+493, 0);
    ST8(s7+494, 0);
    ST8(s7+495, 0);
    ST32(s7+416, v1);
    ST32(t4+8, FBITS(f20));
    ST32(t4+4, 0);
    ST32(s7+508, 0);
    ST32(s7+520, 0);
    ST16(s3+8, v0);
    a1 = LD32(s7);
    v1 = LD32(s1+4);
    ST32(s7+496, 0);
    v1 = v1 - 1;
    v0 = LD32(a1-16);
    v0 = s7 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993618;
L_08993618:;
    a0 = LD32(s2-22840);
    s0 = s0 << 2;
    v1 = LD32(s1+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s1+12, v1);
    a0 = 132;
    ST32(v0+4, a1);
    ST32(v0, s7);
    ST32(s0, v0);
    ST8(v0+8, 0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899364C;
L_0899364C:;
    a0 = v0 + 0;
    a1 = s7 + 0;
    s0 = v0 + 0;
    func_08985038(a0, a1);
    goto L_0899365C;
L_0899365C:;
    v0 = LD32(s7+88);
    cnd_ = v0 != 0;
    ST32(s7+236, s0);
    if (cnd_) { goto L_08993920; }
    goto L_08993668;
L_08993668:;
    ST32(s7+20, 0);
    goto L_0899366C;
L_0899366C:;
    a0 = 0x22af0000u;
    a1 = 0x36f20000u;
    a0 = a0 | 0x2090;
    a1 = a1 | 0x868b;
    a2 = sp + 0;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08993688;
L_08993688:;
    a1 = 0xb8c30000u;
    a0 = LD32(sp);
    a2 = 0x9d150000u;
    a1 = a1 | 0xb5f8;
    a2 = a2 | 0x74a9;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089936A0;
L_089936A0:;
    a0 = 0x22af0000u;
    a1 = 0xf18d0000u;
    v1 = D_08C2A6D8 - (-22824);
    a0 = a0 | 0x2090;
    a1 = a1 | 0xd139;
    a2 = sp + 0;
    ST32(v1-22824, v0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089936C0;
L_089936C0:;
    a1 = 0xb8c30000u;
    a0 = LD32(sp);
    a2 = 0x53f50000u;
    a1 = a1 | 0xb5f8;
    a2 = a2 | 0xa0b7;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_089936D8;
L_089936D8:;
    a0 = 0xd0cd0000u;
    a1 = 0xae20000u;
    a2 = sp + 0;
    v1 = D_08C2A6DC - (-22820);
    a0 = a0 | 0xc21c;
    a1 = a1 | 0x6e48;
    ST32(v1-22820, v0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089936F8;
L_089936F8:;
    a1 = 0x6a320000u;
    a0 = LD32(sp);
    f12 = f20;
    a1 = a1 | 0x6a4;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899370C;
L_0899370C:;
    v0 = D_08AEE748 - (-6328);
    f1 = BITSF(LD32(v0-6328));
    v1 = LD32(s7+520);
    a0 = s7 + 0;
    f0 = f0 * f1;
    v1 = (v1 & ~(0x3u << 6)) | ((0 & 0x3) << 6);
    ST32(s7+520, v1);
    s1 = 0 + 0;
    ST32(s7+384, FBITS(f0));
    { rv_t r_ = func_08A58154(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993734;
L_08993734:;
    a0 = s7 + 0;
    { rv_t r_ = func_08A5562C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899373C;
L_0899373C:;
    v0 = D_08ADE2E0 - (-7456);
    s2 = v0 - 7456;
    goto L_08993744;
L_08993744:;
    s0 = s1 << 2;
    v0 = s0 + s2;
    a1 = LD32(v0);
    a0 = 0xd0cd0000u;
    a0 = a0 | 0xc21c;
    a2 = sp + 0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08993760;
L_08993760:;
    a0 = LD32(sp);
    a1 = 0x63520000u;
    a1 = a1 | 0x552;
    a2 = 0 + 0;
    s1 = s1 + 1;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08993778;
L_08993778:;
    s0 = s0 + s7;
    v1 = (s32)s1 < 4;
    ST32(s0+456, v0);
    cnd_ = v1 != 0;
    ST32(s0+472, 0);
    if (cnd_) { goto L_08993744; }
    goto L_0899378C;
L_0899378C:;
    v0 = D_08ADE130 - (-7888);
    s0 = v0 - 7888;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899379C;
L_0899379C:;
    cnd_ = v0 == 0;
    a1 = D_08C2A700 - (-22784);
    if (cnd_) { goto L_08993904; }
    goto L_089937A4;
L_089937A4:;
    v0 = D_08ADE154 - (-7852);
    goto L_089937A8;
L_089937A8:;
    s0 = v0 - 7852;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089937B4;
L_089937B4:;
    cnd_ = v0 == 0;
    v0 = D_08B30A04 - (2564);
    if (cnd_) { goto L_089938DC; }
    goto L_089937BC;
L_089937BC:;
    v0 = D_08ADE1A0 - (-7776);
    goto L_089937C0;
L_089937C0:;
    s0 = v0 - 7776;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089937CC;
L_089937CC:;
    cnd_ = v0 == 0;
    v0 = D_08B30A04 - (2564);
    if (cnd_) { goto L_089938B4; }
    goto L_089937D4;
L_089937D4:;
    a0 = 0x10000u;
    goto L_089937D8;
L_089937D8:;
    a1 = 0xb8a80000u;
    a0 = a0 | 0x94f7;
    a1 = a1 | 0xcf5b;
    a2 = sp + 0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089937EC;
L_089937EC:;
    v0 = D_08AEE74C - (-6324);
    f12 = BITSF(LD32(v0-6324));
    a0 = LD32(sp);
    a1 = 0xd4560000u;
    a1 = a1 | 0xb7b8;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993804;
L_08993804:;
    v0 = D_08B2BFA4 - (-16476);
    v1 = LD_U8(v0-16476);
    cnd_ = v1 == 0;
    ST32(s7+204, FBITS(f0));
    if (cnd_) { goto L_08993830; }
    goto L_08993814;
L_08993814:;
    v0 = D_08B2BFC0 - (-16448);
    f1 = BITSF(LD32(v0-16448));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_0899382C; }
    goto L_0899382C;
L_0899382C:;
    ST32(s7+204, FBITS(f0));
    goto L_08993830;
L_08993830:;
    v0 = D_08AEE750 - (-6320);
    f12 = BITSF(LD32(v0-6320));
    a0 = LD32(sp);
    a1 = 0xcdb30000u;
    a1 = a1 | 0x8b5;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993848;
L_08993848:;
    ST32(s7+208, FBITS(f0));
    v0 = D_08AEE754 - (-6316);
    a1 = 0xa6d70000u;
    a0 = LD32(sp);
    f12 = BITSF(LD32(v0-6316));
    a1 = a1 | 0xd4f4;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993864;
L_08993864:;
    ST32(s7+212, FBITS(f0));
    v0 = D_08AEE758 - (-6312);
    a1 = 0xcc3b0000u;
    a0 = LD32(sp);
    f12 = BITSF(LD32(v0-6312));
    a1 = a1 | 0x53f9;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993880;
L_08993880:;
    ST32(s7+216, FBITS(f0));
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_089938B4:;
    a3 = LD32(v0+2564);
    a1 = D_08B1BBCC - (-17460);
    a0 = s0 + 0;
    a1 = a1 - 17460;
    a2 = 1;
    t0 = 1;
    t1 = 0 + 0;
    func_088977D4(a0, a1, a2, a3, t0, t1);
    goto L_089938D4;
L_089938D4:;
    a0 = 0x10000u;
    goto L_089937D8;
L_089938DC:;
    a3 = LD32(v0+2564);
    a1 = D_08B1BBC8 - (-17464);
    a0 = s0 + 0;
    a1 = a1 - 17464;
    a2 = 1;
    t0 = 1;
    t1 = 0 + 0;
    func_088977D4(a0, a1, a2, a3, t0, t1);
    goto L_089938FC;
L_089938FC:;
    v0 = D_08ADE1A0 - (-7776);
    goto L_089937C0;
L_08993904:;
    a0 = s0 + 0;
    a1 = a1 - 22784;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993918;
L_08993918:;
    v0 = D_08ADE154 - (-7852);
    goto L_089937A8;
L_08993920:;
    a0 = 152;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993928;
L_08993928:;
    a1 = LD32(s7+88);
    a0 = v0 + 0;
    func_0899FEF0(a0, a1);
    goto L_08993934;
L_08993934:;
    a0 = 164;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899393C;
L_0899393C:;
    a1 = LD32(s7+88);
    a0 = v0 + 0;
    s6 = v0 + 0;
    func_089A32C0(a0, a1);
    goto L_0899394C;
L_0899394C:;
    a0 = 156;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993954;
L_08993954:;
    a1 = LD32(s7+88);
    a0 = v0 + 0;
    s5 = v0 + 0;
    func_089A2D48(a0, a1);
    goto L_08993964;
L_08993964:;
    a0 = 152;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899396C;
L_0899396C:;
    a1 = LD32(s7+88);
    a0 = v0 + 0;
    s3 = v0 + 0;
    func_089A0210(a0, a1);
    goto L_0899397C;
L_0899397C:;
    a0 = 160;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993984;
L_08993984:;
    a1 = LD32(s7+88);
    a0 = v0 + 0;
    s2 = v0 + 0;
    func_089A03DC(a0, a1);
    goto L_08993994;
L_08993994:;
    a0 = 156;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899399C;
L_0899399C:;
    a1 = LD32(s7+88);
    a0 = v0 + 0;
    s1 = v0 + 0;
    func_089A2CEC(a0, a1);
    goto L_089939AC;
L_089939AC:;
    a0 = 220;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089939B4;
L_089939B4:;
    a1 = LD32(s7+88);
    a0 = v0 + 0;
    s4 = v0 + 0;
    func_089A0E0C(a0, a1);
    goto L_089939C4;
L_089939C4:;
    a0 = 160;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089939CC;
L_089939CC:;
    a1 = LD32(s7+88);
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_089A5894(a0, a1);
    goto L_089939DC;
L_089939DC:;
    a0 = s3 + 0;
    a1 = s1 + 0;
    func_089DFF88(a0, a1, 0, 0, 0);
    goto L_089939E8;
L_089939E8:;
    a0 = s3 + 0;
    a1 = s2 + 0;
    func_089DFF88(a0, a1, 0, 0, 0);
    goto L_089939F4;
L_089939F4:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    func_089DFF88(a0, a1, 0, 0, 0);
    goto L_08993A00;
L_08993A00:;
    a1 = s0 + 0;
    a0 = s3 + 0;
    func_089DFF88(a0, a1, 0, 0, 0);
    goto L_08993A0C;
L_08993A0C:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    func_089DFF88(a0, a1, 0, 0, 0);
    goto L_08993A18;
L_08993A18:;
    a0 = s4 + 0;
    a1 = s1 + 0;
    func_089DFF88(a0, a1, 0, 0, 0);
    goto L_08993A24;
L_08993A24:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    func_089DFF88(a0, a1, 0, 0, 0);
    goto L_08993A30;
L_08993A30:;
    a1 = s0 + 0;
    a0 = s0 + 0;
    func_089DFF88(a0, a1, 0, 0, 0);
    goto L_08993A3C;
L_08993A3C:;
    a0 = 152;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993A44;
L_08993A44:;
    a1 = LD32(s7+88);
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_089A38D4(a0, a1);
    goto L_08993A54;
L_08993A54:;
    a0 = LD32(s7+88);
    a1 = s0 + 0;
    func_089DF074(a0, a1, 0, 0, 0);
    goto L_08993A60;
L_08993A60:;
    a0 = LD32(s7+88);
    a1 = s3 + 0;
    func_089DF074(a0, a1, 0, 0, 0);
    goto L_08993A6C;
L_08993A6C:;
    a0 = LD32(s7+88);
    a1 = s1 + 0;
    func_089DF074(a0, a1, 0, 0, 0);
    goto L_08993A78;
L_08993A78:;
    a0 = LD32(s7+88);
    a1 = s6 + 0;
    func_089DF074(a0, a1, 0, 0, 0);
    goto L_08993A84;
L_08993A84:;
    a0 = LD32(s7+88);
    a1 = s5 + 0;
    func_089DF074(a0, a1, 0, 0, 0);
    goto L_08993A90;
L_08993A90:;
    a0 = 152;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993A98;
L_08993A98:;
    a1 = LD32(s7+88);
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_089A3E14(a0, a1);
    goto L_08993AA8;
L_08993AA8:;
    a0 = LD32(s7+88);
    a1 = s0 + 0;
    func_089DF074(a0, a1, 0, 0, 0);
    goto L_08993AB4;
L_08993AB4:;
    a0 = LD32(s7+88);
    a1 = s4 + 0;
    func_089DF074(a0, a1, 0, 0, 0);
    goto L_08993AC0;
L_08993AC0:;
    a0 = 152;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993AC8;
L_08993AC8:;
    a1 = LD32(s7+88);
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_089A4C90(a0, a1);
    goto L_08993AD8;
L_08993AD8:;
    a0 = LD32(s7+88);
    a1 = s0 + 0;
    func_089DF074(a0, a1, 0, 0, 0);
    goto L_08993AE4;
L_08993AE4:;
    a0 = 152;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993AEC;
L_08993AEC:;
    a1 = LD32(s7+88);
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_089A5160(a0, a1);
    goto L_08993AFC;
L_08993AFC:;
    a0 = LD32(s7+88);
    a1 = s0 + 0;
    func_089DF074(a0, a1, 0, 0, 0);
    goto L_08993B08;
L_08993B08:;
    a0 = 156;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993B10;
L_08993B10:;
    a1 = LD32(s7+88);
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_089A54D0(a0, a1);
    goto L_08993B20;
L_08993B20:;
    a0 = LD32(s7+88);
    a1 = s0 + 0;
    func_089DF074(a0, a1, 0, 0, 0);
    goto L_08993B2C;
L_08993B2C:;
    a0 = 152;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993B34;
L_08993B34:;
    a1 = LD32(s7+88);
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_089A5CE4(a0, a1);
    goto L_08993B44;
L_08993B44:;
    a0 = LD32(s7+88);
    a1 = s0 + 0;
    func_089DF074(a0, a1, 0, 0, 0);
    goto L_08993B50;
L_08993B50:;
    ST32(s7+20, 0);
    goto L_0899366C;
}

/* 08993B58 */
rv_t func_08993B58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08993B58:;
    v1 = D_08AFB418 - (-19432);
    sp = sp - 16;
    v1 = v1 - 19432;
    v0 = v1 + 604;
    s1 = a0 + 0;
    a0 = v1 + 716;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+788, a0);
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    ST32(s1+524, v0);
    func_08AC3DE8(a0, a1, t1, t2, t3);
    goto L_08993B9C;
L_08993B9C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08993BA4;
L_08993BA4:;
    a0 = s1 + 0;
    { u64 r_ = func_08A556D8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08993BAC;
L_08993BAC:;
    a0 = s1 + 0;
    func_08994B88(a0, 0, 0, 0);
    goto L_08993BB4;
L_08993BB4:;
    s0 = LD32(s1+236);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08993C2C; }
    goto L_08993BC0;
L_08993BC0:;
    s2 = s1 + 512;
    goto L_08993BC4;
L_08993BC4:;
    a0 = LD32(s2+4);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s2+4, 0); goto L_08993BE4; }
    goto L_08993BD0;
L_08993BD0:;
    s0 = LD32(a0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08993BD8;
L_08993BD8:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08993BD0; }
    goto L_08993BE0;
L_08993BE0:;
    ST32(s2+4, 0);
    goto L_08993BE4;
L_08993BE4:;
    s0 = D_08AFB700 - (-18688);
    s0 = s0 - 18688;
    ST32(s2, 0);
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 36;
    func_089DA1FC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08993C00;
L_08993C00:;
    a1 = s0 + 0;
    a0 = s1 + 524;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08993C0C;
L_08993C0C:;
    a0 = s1 + 788;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08993C14;
L_08993C14:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08993C2C:;
    a0 = s0 + 0;
    func_089850D4(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08993C34;
L_08993C34:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08993C3C;
L_08993C3C:;
    s2 = s1 + 512;
    goto L_08993BC4;
}

/* 08993C44 */
rv_t func_08993C44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08993C44:;
    v1 = D_08AFB418 - (-19432);
    sp = sp - 16;
    v1 = v1 - 19432;
    v0 = v1 + 604;
    s1 = a0 + 0;
    a0 = v1 + 716;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+788, a0);
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    ST32(s1+524, v0);
    func_08AC3DE8(a0, a1, t1, t2, t3);
    goto L_08993C88;
L_08993C88:;
    a0 = s1 + 0;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08993C90;
L_08993C90:;
    a0 = s1 + 0;
    { u64 r_ = func_08A556D8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08993C98;
L_08993C98:;
    a0 = s1 + 0;
    func_08994B88(a0, 0, 0, 0);
    goto L_08993CA0;
L_08993CA0:;
    s0 = LD32(s1+236);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08993D20; }
    goto L_08993CAC;
L_08993CAC:;
    s2 = s1 + 512;
    goto L_08993CB0;
L_08993CB0:;
    a0 = LD32(s2+4);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s2+4, 0); goto L_08993CD0; }
    goto L_08993CBC;
L_08993CBC:;
    s0 = LD32(a0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08993CC4;
L_08993CC4:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08993CBC; }
    goto L_08993CCC;
L_08993CCC:;
    ST32(s2+4, 0);
    goto L_08993CD0;
L_08993CD0:;
    s0 = D_08AFB700 - (-18688);
    s0 = s0 - 18688;
    ST32(s2, 0);
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 36;
    func_089DA1FC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08993CEC;
L_08993CEC:;
    a1 = s0 + 0;
    a0 = s1 + 524;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08993CF8;
L_08993CF8:;
    a0 = s1 + 788;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08993D00;
L_08993D00:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08993D08;
L_08993D08:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08993D20:;
    a0 = s0 + 0;
    func_089850D4(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08993D28;
L_08993D28:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08993D30;
L_08993D30:;
    s2 = s1 + 512;
    goto L_08993CB0;
}

/* 08993D38 */
rv_t func_08993D38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08993D38:;
    sp = sp - 48;
    v0 = LD_U8(a0+495);
    cnd_ = v0 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08994628; }
    goto L_08993D5C;
L_08993D5C:;
    v0 = LD_U8(s2+195);
    goto L_08993D60;
L_08993D60:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s2+104); goto L_08994614; }
    goto L_08993D68;
L_08993D68:;
    v0 = LD32(s2+104);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(s2+4); goto L_08993D9C; }
    goto L_08993D74;
L_08993D74:;
    v1 = LD32(s2);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s2 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089945D8; }
    goto L_08993D98;
L_08993D98:;
    v0 = LD_U8(s2+4);
    goto L_08993D9C;
L_08993D9C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08993DB0; }
    goto L_08993DA4;
L_08993DA4:;
    v0 = LD_U8(s2+68);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(s2+195); goto L_08993DBC; }
    goto L_08993DB0;
L_08993DB0:;
    a0 = s2 + 0;
    func_08994B88(a0, t1, t2, t3);
    goto L_08993DB8;
L_08993DB8:;
    v0 = LD_U8(s2+195);
    goto L_08993DBC;
L_08993DBC:;
    cnd_ = v0 == 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_08993DE4; }
    goto L_08993DC4;
L_08993DC4:;
    f2 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s2+360));
    f1 = BITSF(0);
    f0 = f0 - f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    ST32(s2+360, FBITS(f0));
    if (cnd_) { goto L_08994560; }
    goto L_08993DE4;
L_08993DE4:;
    a0 = s2 + 0;
    { u64 r_ = func_089DE320(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08993DEC;
L_08993DEC:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s2); goto L_0899454C; }
    goto L_08993DF4;
L_08993DF4:;
    a0 = s2 + 0;
    { rv_t r_ = func_089DA874(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993DFC;
L_08993DFC:;
    v1 = LD32(s2);
    v0 = LD32(v1+492);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993E0C;
L_08993E0C:;
    a0 = s2 + 0;
    { u64 r_ = func_0899D738(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08993E14;
L_08993E14:;
    a0 = LD32(s2+236);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0899445C; }
    goto L_08993E20;
L_08993E20:;
    a0 = LD32(s2);
    goto L_08993E24;
L_08993E24:;
    f20 = BITSF(0);
    v0 = LD32(a0-12);
    v0 = s2 + v0;
    f0 = BITSF(LD32(v0+80));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s2+520); goto L_08993E58; }
    goto L_08993E44;
L_08993E44:;
    v0 = LD32(s2+520);
    v0 = v0 | 0x10;
    v0 = (v0 & ~(0x3u << 2)) | ((0 & 0x3) << 2);
    ST32(s2+520, v0);
    v1 = LD32(s2+520);
    goto L_08993E58;
L_08993E58:;
    v0 = 0x80000u;
    v0 = v0 | 0x10;
    v0 = v1 & v0;
    cnd_ = v0 != 0;
    v0 = v1 & 0x4;
    if (cnd_) { goto L_08993EC0; }
    goto L_08993E6C;
L_08993E6C:;
    cnd_ = v0 == 0;
    v0 = v1 & 0x8;
    if (cnd_) { goto L_08993EA4; }
    goto L_08993E74;
L_08993E74:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s2+356));
    v0 = (v1 >> 1) & 0x1;
    f0 = f0 - f1;
    cnd_ = v0 == 0;
    ST32(s2+356, FBITS(f0));
    if (cnd_) { goto L_08994444; }
    goto L_08993E90;
L_08993E90:;
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_08994430; }
    goto L_08993EA0;
L_08993EA0:;
    v0 = v1 & 0x8;
    goto L_08993EA4;
L_08993EA4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08993EC0; }
    goto L_08993EAC;
L_08993EAC:;
    v0 = LD_U8(s2+195);
    cnd_ = v0 != 0;
    v0 = D_08AEE75C - (-6308);
    if (cnd_) { goto L_08994404; }
    goto L_08993EB8;
L_08993EB8:;
    a0 = s2 + 0;
    func_0899B858(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08993EC0;
L_08993EC0:;
    a0 = s2 + 0;
    { rv_t r_ = func_08A04248(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993EC8;
L_08993EC8:;
    cnd_ = v0 == 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_089943F4; }
    goto L_08993ED0;
L_08993ED0:;
    v0 = D_08AEE764 - (-6300);
    f0 = BITSF(LD32(v0-6300));
    goto L_08993ED8;
L_08993ED8:;
    v0 = LD32(s2+520);
    v0 = (v0 >> 15) & 0x1;
    cnd_ = v0 != 0;
    ST32(s2+364, FBITS(f0));
    if (cnd_) { goto L_08994370; }
    goto L_08993EE8;
L_08993EE8:;
    a0 = LD32(s2+236);
    goto L_08993EEC;
L_08993EEC:;
    cnd_ = a0 == 0;
    if (cnd_) { v1 = LD32(s2); goto L_08993F3C; }
    goto L_08993EF4;
L_08993EF4:;
    a2 = LD_U8(s2+492);
    v1 = LD_U8(a0+120);
    v0 = a2 & 0xff;
    cnd_ = v0 == v1;
    a2 = (u32)(s32)(s8)a2;
    if (cnd_) { goto L_08993F14; }
    goto L_08993F08;
L_08993F08:;
    a1 = s2 + 0;
    func_089852FC(a0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08993F10;
L_08993F10:;
    a0 = LD32(s2+236);
    goto L_08993F14;
L_08993F14:;
    a2 = LD_U8(s2+493);
    v1 = LD_U8(a0+121);
    v0 = a2 & 0xff;
    cnd_ = v0 == v1;
    a2 = (u32)(s32)(s8)a2;
    if (cnd_) { goto L_08993F30; }
    goto L_08993F28;
L_08993F28:;
    a1 = s2 + 0;
    { rv_t r_ = func_08985584(a0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08993F30;
L_08993F30:;
    a0 = LD32(s2+236);
    func_089850F0(a0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08993F38;
L_08993F38:;
    v1 = LD32(s2);
    goto L_08993F3C;
L_08993F3C:;
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s2 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(s2+508)); goto L_08993F6C; }
    goto L_08993F5C;
L_08993F5C:;
    a0 = LD32(s2+40);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08994314; }
    goto L_08993F68;
L_08993F68:;
    f1 = BITSF(LD32(s2+508));
    goto L_08993F6C;
L_08993F6C:;
    f2 = BITSF(0);
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(s2+380)); goto L_08993F94; }
    goto L_08993F80;
L_08993F80:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f0 = f1 - f0;
    ST32(s2+508, FBITS(f0));
    f1 = BITSF(LD32(s2+380));
    goto L_08993F94;
L_08993F94:;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(s2+400)); goto L_08993FB8; }
    goto L_08993FA4;
L_08993FA4:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f0 = f1 - f0;
    ST32(s2+380, FBITS(f0));
    f1 = BITSF(LD32(s2+400));
    goto L_08993FB8;
L_08993FB8:;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(s2+195); goto L_08993FDC; }
    goto L_08993FC8;
L_08993FC8:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f0 = f1 - f0;
    ST32(s2+400, FBITS(f0));
    v0 = LD_U8(s2+195);
    goto L_08993FDC;
L_08993FDC:;
    cnd_ = v0 == 0;
    v0 = D_08AEE76C - (-6292);
    if (cnd_) { goto L_0899405C; }
    goto L_08993FE4;
L_08993FE4:;
    v1 = LD32(s2+520);
    v0 = LD32(s2+88);
    v1 = (v1 & ~(0x3u << 10)) | ((0 & 0x3) << 10);
    v1 = (v1 & ~(0x1u << 14)) | ((0 & 0x1) << 14);
    cnd_ = v0 == 0;
    ST32(s2+520, v1);
    if (cnd_) { goto L_08994058; }
    goto L_08993FFC;
L_08993FFC:;
    a2 = LD32(v0+56);
    cnd_ = a2 == 0;
    v0 = 0x9a450000u;
    if (cnd_) { goto L_08994058; }
    goto L_08994008;
L_08994008:;
    a0 = LD32(a2+36);
    v0 = v0 | 0x832;
    a0 = a0 ^ v0;
    a0 = a0 < 0x1u;
    v1 = (v1 & ~(0x1u << 11)) | ((a0 & 0x1) << 11);
    ST32(s2+520, v1);
    a0 = 0xf0d40000u;
    a0 = a0 | 0x8f47;
    v0 = LD32(a2+36);
    a1 = 0x8040000u;
    a1 = a1 | 0x3d02;
    v0 = v0 ^ a0;
    v0 = v0 < 0x1u;
    v1 = (v1 & ~(0x1u << 10)) | ((v0 & 0x1) << 10);
    ST32(s2+520, v1);
    v0 = LD32(a2+36);
    v0 = v0 ^ a1;
    v0 = v0 < 0x1u;
    v1 = (v1 & ~(0x1u << 14)) | ((v0 & 0x1) << 14);
    ST32(s2+520, v1);
    goto L_08994058;
L_08994058:;
    v0 = D_08AEE76C - (-6292);
    goto L_0899405C;
L_0899405C:;
    f0 = BITSF(LD32(s2+348));
    f1 = BITSF(LD32(v0-6292));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s2); goto L_0899429C; }
    goto L_08994074;
L_08994074:;
    a0 = s2 + 0;
    f0 = func_0899EA60(a0);
    goto L_0899407C;
L_0899407C:;
    v1 = LD32(s2+520);
    v0 = v1 & 0x1000;
    cnd_ = v0 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08994098; }
    goto L_0899408C;
L_0899408C:;
    v0 = LD_U8(s2+336);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s2 + 0; goto L_08994284; }
    goto L_08994098;
L_08994098:;
    v0 = a0 & 0x1000;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(s2+195); goto L_089940B4; }
    goto L_089940A4;
L_089940A4:;
    v0 = LD_U8(s2+336);
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08994270; }
    goto L_089940B0;
L_089940B0:;
    v0 = LD_U8(s2+195);
    goto L_089940B4;
L_089940B4:;
    v1 = (v1 & ~(0x1u << 20)) | ((0 & 0x1) << 20);
    cnd_ = v0 != 0;
    ST32(s2+520, v1);
    if (cnd_) { goto L_08994148; }
    goto L_089940C0;
L_089940C0:;
    v1 = LD_U8(s2+232);
    goto L_089940C4;
L_089940C4:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_089940F4; }
    goto L_089940CC;
L_089940CC:;
    v0 = LD32(s2+520);
    v0 = (v0 & ~(0x1u << 21)) | ((v1 & 0x1) << 21);
    ST32(s2+520, v0);
    goto L_089940D8;
L_089940D8:;
    goto L_089940DC;
L_089940DC:;
    goto L_089940E0;
L_089940E0:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089940F4:;
    a0 = s2 + 0;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089940FC;
L_089940FC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089940DC; }
    goto L_08994104;
L_08994104:;
    v0 = LD32(s2+88);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_089940E0; }
    goto L_08994110;
L_08994110:;
    v0 = LD32(v0+56);
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_089940E0; }
    goto L_0899411C;
L_0899411C:;
    a0 = s2 + 0;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08994124;
L_08994124:;
    a0 = v0 + 0;
    { rv_t r_ = func_088BAA20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899412C;
L_0899412C:;
    v1 = LD32(s2);
    a1 = v0 + 0;
    v0 = LD32(v1+480);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08994140;
L_08994140:;
    goto L_089940DC;
L_08994148:;
    v1 = LD32(s2);
    v0 = LD32(v1+388);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08994158;
L_08994158:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD_U8(s2+232); goto L_089940C4; }
    goto L_08994160;
L_08994160:;
    v1 = LD32(s2);
    v0 = LD32(v1+388);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08994170;
L_08994170:;
    v1 = LD32(v0+20);
    v0 = 0xda0c0000u;
    v0 = v0 | 0xae3b;
    cnd_ = v1 != v0;
    if (cnd_) { v1 = LD_U8(s2+232); goto L_089940C4; }
    goto L_08994184;
L_08994184:;
    a2 = LD32(s2+432);
    a0 = D_08C2B0A8 - (-20312);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 20312;
    if (cnd_) { goto L_089940D8; }
    goto L_08994198;
L_08994198:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-20312);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089941E8; }
    goto L_089941BC;
L_089941BC:;
    a0 = LD32(a1);
    goto L_089941C0;
L_089941C0:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08994250; }
    goto L_089941D8;
L_089941D8:;
    a1 = LD32(a1+4);
    goto L_089941DC;
L_089941DC:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089941C0; }
    goto L_089941E4;
L_089941E4:;
    a0 = 0 + 0;
    goto L_089941E8;
L_089941E8:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089940DC; }
    goto L_089941F0;
L_089941F0:;
    v0 = LD_U8(a0+444);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08994204; }
    goto L_089941FC;
L_089941FC:;
    v0 = LD32(a0+852);
    s1 = (v0 >> 5) & 0x1;
    goto L_08994204;
L_08994204:;
    v1 = LD32(a0);
    v0 = LD32(v1+52);
    t_ = v0;
    s1 = s1 & 0xff;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08994214;
L_08994214:;
    v1 = LD32(s2);
    s0 = v0 + 0;
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08994228;
L_08994228:;
    s0 = s0 ^ v0;
    cnd_ = s1 != 0;
    s0 = s0 < 0x1u;
    if (cnd_) { goto L_089940C0; }
    goto L_08994234;
L_08994234:;
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD_U8(s2+232); goto L_089940C4; }
    goto L_0899423C;
L_0899423C:;
    v0 = LD32(s2+520);
    v1 = 0x100000u;
    v0 = v0 | v1;
    ST32(s2+520, v0);
    goto L_089940C0;
L_08994250:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089941DC; }
    goto L_0899425C;
L_0899425C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089941DC; }
    goto L_08994268;
L_08994268:;
    goto L_089941E8;
L_08994270:;
    a1 = 0 + 0;
    f0 = func_0899E738(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08994278;
L_08994278:;
    ST8(s2+336, 0);
    v1 = LD32(s2+520);
    goto L_089940B0;
L_08994284:;
    a1 = 1;
    f0 = func_0899E738(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0899428C;
L_0899428C:;
    v1 = LD32(s2+520);
    v0 = 1;
    ST8(s2+336, v0);
    goto L_089940B0;
L_0899429C:;
    ST32(sp+4, 0);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_089942B0;
L_089942B0:;
    a0 = 0x203e0000u;
    a0 = a0 | 0x217d;
    a1 = v0 + 0;
    a2 = sp + 4;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089942C4;
L_089942C4:;
    a0 = LD32(sp+4);
    cnd_ = a0 != 0;
    v0 = D_08AEE770 - (-6288);
    if (cnd_) { goto L_089942D8; }
    goto L_089942D0;
L_089942D0:;
    ST32(s2+348, 0);
    goto L_08994074;
L_089942D8:;
    f12 = BITSF(LD32(v0-6288));
    a1 = 0x184c0000u;
    a1 = a1 | 0xf3b1;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089942E8;
L_089942E8:;
    ST32(s2+344, FBITS(f0));
    v0 = D_08AEE774 - (-6284);
    a1 = 0x64830000u;
    a0 = LD32(sp+4);
    f12 = BITSF(LD32(v0-6284));
    a1 = a1 | 0x54af;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08994304;
L_08994304:;
    f1 = BITSF(LD32(s2+344));
    ST32(s2+340, FBITS(f0));
    ST32(s2+348, FBITS(f1));
    goto L_08994074;
L_08994314:;
    { u64 r_ = func_088BB1C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899431C;
L_0899431C:;
    cnd_ = v0 != 0;
    if (cnd_) { f1 = BITSF(LD32(s2+508)); goto L_08993F6C; }
    goto L_08994324;
L_08994324:;
    a0 = LD32(s2+40);
    { u64 r_ = func_088BB1F8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899432C;
L_0899432C:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s2+40); goto L_08994360; }
    goto L_08994334;
L_08994334:;
    v1 = LD32(s2);
    goto L_08994338;
L_08994338:;
    v0 = LD32(v1+452);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08994344;
L_08994344:;
    cnd_ = v0 == 0;
    if (cnd_) { f1 = BITSF(LD32(s2+508)); goto L_08993F6C; }
    goto L_0899434C;
L_0899434C:;
    a0 = LD32(s2+40);
    a1 = 1;
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08994358;
L_08994358:;
    f1 = BITSF(LD32(s2+508));
    goto L_08993F6C;
L_08994360:;
    a1 = 1;
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08994368;
L_08994368:;
    v1 = LD32(s2);
    goto L_08994338;
L_08994370:;
    a0 = (u32)-1;
    ST32(sp, 0);
    v0 = func_08A5FB08(a0);
    goto L_0899437C;
L_0899437C:;
    a0 = 0xde350000u;
    a1 = v0 + 0;
    a2 = sp + 0;
    a0 = a0 | 0x46b6;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08994390;
L_08994390:;
    v0 = D_08AEE768 - (-6296);
    f12 = BITSF(LD32(v0-6296));
    a0 = LD32(sp);
    a1 = 0xe7830000u;
    a1 = a1 | 0xde13;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089943A8;
L_089943A8:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    a0 = s2 + 0;
    f0 = f0 * f1;
    f12 = f0;
    { rv_t r_ = func_089DCE7C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089943C0;
L_089943C0:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s2+236); goto L_08993EEC; }
    goto L_089943C8;
L_089943C8:;
    v1 = LD32(s2);
    v0 = LD32(v1+348);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089943D8;
L_089943D8:;
    f1 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_089943EC; }
    goto L_089943EC;
L_089943EC:;
    ST32(s2+160, FBITS(f1));
    goto L_08993EE8;
L_089943F4:;
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s2+364));
    f0 = f0 - f1;
    goto L_08993ED8;
L_08994404:;
    f0 = BITSF(LD32(v0-6308));
    a1 = LD32(s2);
    ST32(s2+360, FBITS(f0));
    v1 = LD32(a1+460);
    t_ = v1;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899441C;
L_0899441C:;
    v1 = 1;
    v0 = LD32(s2+520);
    v0 = (v0 & ~(0x1u << 19)) | ((v1 & 0x1) << 19);
    ST32(s2+520, v0);
    goto L_08993EB8;
L_08994430:;
    a0 = s2 + 0;
    func_0899B7D8(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08994438;
L_08994438:;
    ST32(s2+356, FBITS(f20));
    v1 = LD32(s2+520);
    goto L_08993EA0;
L_08994444:;
    v0 = LD32(a0+412);
    a1 = 1;
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08994454;
L_08994454:;
    v1 = LD32(s2+520);
    goto L_08993EA0;
L_0899445C:;
    { u64 r_ = func_089851C4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08994464;
L_08994464:;
    a0 = LD32(s2+236);
    v0 = LD_U8(a0+120);
    v0 = v0 << 2;
    v0 = v0 + a0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    if (cnd_) { v0 = LD_U8(a0+121); goto L_089944F0; }
    goto L_08994480;
L_08994480:;
    v0 = LD32(s0+296);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s2); goto L_089944A8; }
    goto L_0899448C;
L_0899448C:;
    f1 = BITSF(LD32(s0+300));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089944C4; }
    goto L_089944A4;
L_089944A4:;
    v0 = LD32(s2);
    goto L_089944A8;
L_089944A8:;
    a0 = s2 + 0;
    v1 = LD32(v0+412);
    t_ = v1;
    a1 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089944B8;
L_089944B8:;
    v0 = LD32(s2+520);
    v0 = v0 | 0x4;
    ST32(s2+520, v0);
    goto L_089944C4;
L_089944C4:;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(s2+236); goto L_089944EC; }
    goto L_089944CC;
L_089944CC:;
    a0 = LD32(s2+96);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s2+236); goto L_089944EC; }
    goto L_089944D8;
L_089944D8:;
    v1 = LD32(a0+8);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s0+256); goto L_08994538; }
    goto L_089944E8;
L_089944E8:;
    a0 = LD32(s2+236);
    goto L_089944EC;
L_089944EC:;
    v0 = LD_U8(a0+121);
    goto L_089944F0;
L_089944F0:;
    v0 = v0 << 2;
    v0 = v0 + a0;
    a0 = LD32(v0+48);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s2); goto L_08993E24; }
    goto L_08994504;
L_08994504:;
    v0 = LD32(a0+296);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s2+520); goto L_0899452C; }
    goto L_08994510;
L_08994510:;
    f1 = BITSF(LD32(a0+300));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(s2); goto L_08993E24; }
    goto L_08994528;
L_08994528:;
    v0 = LD32(s2+520);
    goto L_0899452C;
L_0899452C:;
    v0 = v0 | 0x8;
    ST32(s2+520, v0);
    goto L_08993E20;
L_08994538:;
    v0 = v0 << 2;
    v0 = v0 + s0;
    f0 = BITSF(LD32(v0+240));
    ST32(a0+104, FBITS(f0));
    goto L_089944E8;
L_0899454C:;
    v0 = LD32(v1+476);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08994558;
L_08994558:;
    goto L_08993DF4;
L_08994560:;
    a0 = s2 + 0;
    v0 = func_0899DBA0(a0, a3, t0, t1, t2, t3, f13, f14, f15, f16, f17, f18, f19);
    goto L_08994568;
L_08994568:;
    cnd_ = v0 != 0;
    v0 = D_08AEE760 - (-6304);
    if (cnd_) { goto L_089945B4; }
    goto L_08994570;
L_08994570:;
    v0 = D_08AEE75C - (-6308);
    f0 = BITSF(LD32(v0-6308));
    v1 = LD32(s2);
    ST32(s2+360, FBITS(f0));
    v0 = LD32(v1+460);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899458C;
L_0899458C:;
    a2 = LD32(s2);
    a0 = s2 + 0;
    v1 = LD32(a2+412);
    t_ = v1;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089945A0;
L_089945A0:;
    v1 = 1;
    v0 = LD32(s2+520);
    v0 = (v0 & ~(0x1u << 19)) | ((v1 & 0x1) << 19);
    goto L_089945AC;
L_089945AC:;
    ST32(s2+520, v0);
    goto L_08993DE4;
L_089945B4:;
    f0 = BITSF(LD32(v0-6304));
    a1 = LD32(s2);
    ST32(s2+360, FBITS(f0));
    v1 = LD32(a1+464);
    t_ = v1;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089945CC;
L_089945CC:;
    v0 = LD32(s2+520);
    v0 = (v0 & ~(0x1u << 19)) | ((0 & 0x1) << 19);
    goto L_089945AC;
L_089945D8:;
    a0 = 32;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089945E0;
L_089945E0:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A5D70C(a0, a1);
    goto L_089945F0;
L_089945F0:;
    cnd_ = s0 == 0;
    ST32(s2+104, s0);
    if (cnd_) { goto L_08993D98; }
    goto L_089945F8;
L_089945F8:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+8);
    goto L_08994604;
L_08994604:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899460C;
L_0899460C:;
    v0 = LD_U8(s2+4);
    goto L_08993D9C;
L_08994614:;
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD_U8(s2+4); goto L_08993D9C; }
    goto L_0899461C;
L_0899461C:;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    goto L_08994604;
L_08994628:;
    v0 = 1;
    ST8(a0+495, v0);
    a1 = 0 + 0;
    a0 = 93;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08994644;
L_08994644:;
    v1 = LD32(s2);
    s0 = v0 + 0;
    v0 = LD32(v1-16);
    v0 = s2 + v0;
    v1 = LD32(v0+4);
    ST32(s0, v1);
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08994660;
L_08994660:;
    v1 = LD32(s0+28);
    ST32(s0+4, v0);
    a0 = s0 + 0;
    v1 = v1 | 0x1;
    ST32(s0+28, v1);
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08994680;
L_08994680:;
    v0 = LD_U8(s2+195);
    goto L_08993D60;
}

/* 08994688 */
rv_t func_08994688(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_08994688:;
    sp = sp - 144;
    f0 = BITSF(0);
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    s1 = a0 + 0;
    if (cnd_) { goto L_08994B5C; }
    goto L_089946D8;
L_089946D8:;
    v0 = LD32(a0+520);
    s0 = 0 + 0;
    a0 = 0 + 0;
    v0 = v0 & 0xc0;
    cnd_ = v0 != 0;
    s3 = s1 + 512;
    if (cnd_) { goto L_0899471C; }
    goto L_089946F0;
L_089946F0:;
    v0 = LD32(s1+452);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = 1; goto L_08994720; }
    goto L_089946FC;
L_089946FC:;
    v0 = LD32(s3+4);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08994720; }
    goto L_08994708;
L_08994708:;
    v0 = LD32(v0);
    cnd_ = v0 != 0;
    v1 = v1 + 1;
    if (cnd_) { goto L_08994708; }
    goto L_08994714;
L_08994714:;
    cnd_ = v1 == 0;
    v0 = a0 + 0;
    if (cnd_) { goto L_08994724; }
    goto L_0899471C;
L_0899471C:;
    a0 = 1;
    goto L_08994720;
L_08994720:;
    v0 = a0 + 0;
    goto L_08994724;
L_08994724:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_08994AA4; }
    goto L_0899472C;
L_0899472C:;
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s3+4); goto L_0899479C; }
    goto L_08994734;
L_08994734:;
    v1 = LD32(s1+520);
    v0 = v1 & 0x40;
    cnd_ = v0 != 0;
    v0 = D_08C2A6D8 - (-22824);
    if (cnd_) { goto L_08994A2C; }
    goto L_08994744;
L_08994744:;
    v0 = v1 & 0x80;
    cnd_ = v0 != 0;
    v0 = D_08C2A6DC - (-22820);
    if (cnd_) { goto L_089949BC; }
    goto L_08994750;
L_08994750:;
    s4 = 0 + 0;
    s7 = 1;
    s0 = s1 + 0;
    s5 = 0 + 0;
    fp = D_08B45AA8 - (23208);
    goto L_08994764;
L_08994764:;
    v1 = LD32(s1+452);
    v0 = s7 << (s4 & 31);
    v0 = v1 | v0;
    cnd_ = v0 == v1;
    s6 = s5 + 0;
    if (cnd_) { goto L_089948A0; }
    goto L_08994778;
L_08994778:;
    v0 = LD32(s0+472);
    cnd_ = v0 != 0;
    a1 = s0 + 472;
    if (cnd_) { goto L_08994820; }
    goto L_08994784;
L_08994784:;
    s4 = s4 + 1;
    v0 = (s32)s4 < 4;
    goto L_0899478C;
L_0899478C:;
    s5 = s5 + 4;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08994764; }
    goto L_08994798;
L_08994798:;
    s0 = LD32(s3+4);
    goto L_0899479C;
L_0899479C:;
    cnd_ = s0 == 0;
    s2 = D_08B30B5C - (2908);
    if (cnd_) { goto L_089947D4; }
    goto L_089947A4;
L_089947A4:;
    a1 = LD32(s0+8);
    goto L_089947A8;
L_089947A8:;
    a0 = s2 + 2908;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089947B0;
L_089947B0:;
    a0 = v0 + 0;
    a1 = sp + 0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08994804; }
    goto L_089947C0;
L_089947C0:;
    { rv_t r_ = func_088E4910(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089947C8;
L_089947C8:;
    s0 = LD32(s0);
    goto L_089947CC;
L_089947CC:;
    cnd_ = s0 != 0;
    if (cnd_) { a1 = LD32(s0+8); goto L_089947A8; }
    goto L_089947D4;
L_089947D4:;
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
L_08994804:;
    v0 = LD32(s0);
    a1 = s0 + 0;
    a0 = s3 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_08AC3EA4(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08994818;
L_08994818:;
    goto L_089947CC;
L_08994820:;
    s2 = D_08B30B5C - (2908);
    a0 = s2 + 2908;
    func_088E89F8(a0, a1);
    goto L_0899482C;
L_0899482C:;
    v1 = LD32(s3+4);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08994858; }
    goto L_08994838;
L_08994838:;
    a1 = LD32(s0+472);
    v0 = LD32(v1+8);
    goto L_08994840;
L_08994840:;
    cnd_ = v0 == a1;
    a0 = v1 + 0;
    if (cnd_) { goto L_08994858; }
    goto L_08994848;
L_08994848:;
    v1 = LD32(v1);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08994840; }
    goto L_08994854;
L_08994854:;
    a0 = 0 + 0;
    goto L_08994858;
L_08994858:;
    cnd_ = a0 == 0;
    v0 = s6 + s1;
    if (cnd_) { goto L_0899488C; }
    goto L_08994860;
L_08994860:;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08994894; }
    goto L_0899486C;
L_0899486C:;
    ST32(v1+4, v0);
    goto L_08994870;
L_08994870:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s3+4, v1); goto L_08994880; }
    goto L_0899487C;
L_0899487C:;
    ST32(v0, v1);
    goto L_08994880;
L_08994880:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08994888;
L_08994888:;
    v0 = s6 + s1;
    goto L_0899488C;
L_0899488C:;
    ST32(v0+472, 0);
    goto L_08994784;
L_08994894:;
    ST32(s3, v0);
    v1 = LD32(a0);
    goto L_08994870;
L_089948A0:;
    a1 = LD32(s0+472);
    cnd_ = a1 != 0;
    s2 = D_08B30B5C - (2908);
    if (cnd_) { goto L_08994968; }
    goto L_089948AC;
L_089948AC:;
    a2 = LD32(s0+456);
    a0 = sp + 0;
    a1 = fp + 23208;
    a3 = 0 + 0;
    t0 = 15;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089948C4;
L_089948C4:;
    cnd_ = v0 == 0;
    ST32(sp+84, v0);
    if (cnd_) { goto L_08994784; }
    goto L_089948CC;
L_089948CC:;
    s2 = D_08B30B5C - (2908);
    a0 = s2 + 2908;
    a1 = v0 + 0;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089948DC;
L_089948DC:;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_089948F4; }
    goto L_089948E4;
L_089948E4:;
    v0 = LD_U8(s1+195);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1); goto L_08994934; }
    goto L_089948F0;
L_089948F0:;
    ST8(a2+233, s7);
    goto L_089948F4;
L_089948F4:;
    v1 = LD32(sp+84);
    goto L_089948F8;
L_089948F8:;
    v0 = s6 + s1;
    a0 = 12;
    ST32(v0+472, v1);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08994908;
L_08994908:;
    a3 = LD32(s1+512);
    a0 = v0 + 0;
    a1 = sp + 84;
    a2 = 0 + 0;
    s2 = v0 + 0;
    func_08AAFA30(a0, a1, a2, a3);
    goto L_08994920;
L_08994920:;
    v0 = LD32(s3+4);
    cnd_ = v0 != 0;
    ST32(s1+512, s2);
    if (cnd_) { goto L_08994784; }
    goto L_0899492C;
L_0899492C:;
    ST32(s3+4, s2);
    goto L_08994784;
L_08994934:;
    v0 = D_08C2A6F0 - (-22800);
    v0 = v0 - 22800;
    v1 = s5 + v0;
    v0 = LD32(a0-16);
    a1 = LD32(v1);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a1 == v1;
    a0 = a2 + 0;
    if (cnd_) { goto L_089948F4; }
    goto L_08994958;
L_08994958:;
    a1 = 1;
    { rv_t r_ = func_088E6240(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08994960;
L_08994960:;
    v1 = LD32(sp+84);
    goto L_089948F8;
L_08994968:;
    a0 = s2 + 2908;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08994970;
L_08994970:;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08994784; }
    goto L_08994978;
L_08994978:;
    a0 = LD32(s1);
    v0 = D_08C2A6F0 - (-22800);
    v0 = v0 - 22800;
    v1 = s5 + v0;
    v0 = LD32(a0-16);
    a1 = LD32(v1);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a1 == v1;
    a0 = a2 + 0;
    if (cnd_) { goto L_089949B4; }
    goto L_089949A0;
L_089949A0:;
    a1 = 1;
    goto L_089949A4;
L_089949A4:;
    s4 = s4 + 1;
    { rv_t r_ = func_088E6240(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089949AC;
L_089949AC:;
    v0 = (s32)s4 < 4;
    goto L_0899478C;
L_089949B4:;
    a1 = 0 + 0;
    goto L_089949A4;
L_089949BC:;
    a2 = LD32(v0-22820);
    v0 = D_08AEE778 - (-6280);
    f0 = BITSF(LD32(v0-6280));
    a1 = sp + 64;
    a3 = 0 + 0;
    t0 = 15;
    a0 = sp + 0;
    ST32(sp+64, FBITS(f0));
    ST32(sp+68, 0);
    ST32(sp+72, 0);
    { rv_t r_ = func_088E37E0(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089949E8;
L_089949E8:;
    a0 = 12;
    ST32(sp+80, v0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089949F4;
L_089949F4:;
    a0 = v0 + 0;
    a3 = LD32(s1+512);
    a1 = sp + 80;
    a2 = 0 + 0;
    s0 = v0 + 0;
    func_08AAFA30(a0, a1, a2, a3);
    goto L_08994A0C;
L_08994A0C:;
    v0 = LD32(s3+4);
    cnd_ = v0 != 0;
    ST32(s1+512, s0);
    if (cnd_) { goto L_08994A1C; }
    goto L_08994A18;
L_08994A18:;
    ST32(s3+4, s0);
    goto L_08994A1C;
L_08994A1C:;
    v0 = LD32(s1+520);
    v0 = (v0 & ~(0x1u << 7)) | ((0 & 0x1) << 7);
    ST32(s1+520, v0);
    goto L_08994750;
L_08994A2C:;
    a2 = LD32(v0-22824);
    v0 = D_08AEE778 - (-6280);
    f0 = BITSF(LD32(v0-6280));
    a1 = sp + 64;
    a0 = sp + 0;
    a3 = 0 + 0;
    t0 = 15;
    ST32(sp+64, FBITS(f0));
    ST32(sp+68, 0);
    ST32(sp+72, 0);
    { rv_t r_ = func_088E37E0(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08994A58;
L_08994A58:;
    a0 = 12;
    s0 = v0 + 0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08994A64;
L_08994A64:;
    v1 = v0 + 0;
    v0 = LD32(s1+512);
    ST32(v1+8, s0);
    ST32(v1, 0);
    cnd_ = v0 == 0;
    ST32(v1+4, v0);
    if (cnd_) { goto L_08994A80; }
    goto L_08994A7C;
L_08994A7C:;
    ST32(v0, v1);
    goto L_08994A80;
L_08994A80:;
    v0 = LD32(s3+4);
    cnd_ = v0 != 0;
    ST32(s1+512, v1);
    if (cnd_) { goto L_08994A90; }
    goto L_08994A8C;
L_08994A8C:;
    ST32(s3+4, v1);
    goto L_08994A90;
L_08994A90:;
    v0 = LD32(s1+520);
    v0 = (v0 & ~(0x1u << 6)) | ((0 & 0x1) << 6);
    ST32(s1+520, v0);
    v1 = v0 + 0;
    goto L_08994744;
L_08994AA4:;
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08994AB0;
L_08994AB0:;
    f2 = BITSF(LD32(v0+8));
    v1 = LD32(s1);
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    ST32(sp+8, FBITS(f2));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08994AD8;
L_08994AD8:;
    v1 = LD32(s1);
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    t2 = LD32(v1-12);
    ST32(sp+16, FBITS(f0));
    a1 = 0x5a30000u;
    t2 = s1 + t2;
    ST32(sp+20, FBITS(f1));
    a0 = t2 + 0;
    a3 = sp + 16;
    ST32(sp+24, FBITS(f2));
    a1 = a1 | 0xe701;
    a2 = sp + 0;
    ST32(sp+28, FBITS(f3));
    t0 = 1;
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f5));
    ST32(sp+40, FBITS(f6));
    ST32(sp+44, FBITS(f7));
    ST32(sp+48, FBITS(f8));
    v1 = LD32(t2);
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08994B54;
L_08994B54:;
    goto L_0899472C;
L_08994B5C:;
    s3 = a0 + 512;
    func_08994B88(a0, t1, t2, t3);
    goto L_08994B64;
L_08994B64:;
    v0 = LD32(s3+4);
    s0 = 1;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08994B80; }
    goto L_08994B74;
L_08994B74:;
    v0 = LD32(v0);
    cnd_ = v0 != 0;
    v1 = v1 + 1;
    if (cnd_) { goto L_08994B74; }
    goto L_08994B80;
L_08994B80:;
    v0 = 0 < v1;
    goto L_08994724;
}

/* 08994B88 */
void func_08994B88(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08994B88:;
    sp = sp - 48;
    s2 = a0 + 512;
    s1 = LD32(s2+4);
    cnd_ = s1 == 0;
    s4 = a0 + 0;
    if (cnd_) { goto L_08994BE8; }
    goto L_08994BB4;
L_08994BB4:;
    s3 = D_08B30B5C - (2908);
    v0 = LD32(s1+8);
    goto L_08994BBC;
L_08994BBC:;
    a0 = s3 + 2908;
    a1 = sp + 0;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08994C20; }
    goto L_08994BCC;
L_08994BCC:;
    s0 = LD32(s1);
    goto L_08994BD0;
L_08994BD0:;
    a1 = s1 + 0;
    a0 = s2 + 0;
    s1 = s0 + 0;
    { u64 r_ = func_08AC3EA4(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08994BE0;
L_08994BE0:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD32(s1+8); goto L_08994BBC; }
    goto L_08994BE8;
L_08994BE8:;
    a0 = s4 + 472;
    v0 = 3;
    goto L_08994BF0;
L_08994BF0:;
    v0 = v0 - 1;
    ST32(a0, 0);
    cnd_ = (s32)v0 >= 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_08994BF0; }
    goto L_08994C00;
L_08994C00:;
    sp = sp + 48;
    return;
L_08994C20:;
    func_088E89F8(a0, a1);
    goto L_08994C28;
L_08994C28:;
    s0 = LD32(s1);
    goto L_08994BD0;
}

/* 08994C30 */
rv_t func_08994C30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08994C30:;
    sp = sp - 112;
    v1 = 1;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08994CA4; }
    goto L_08994C5C;
L_08994C5C:;
    v1 = LD_U16(a1+16);
    v0 = 0x805f;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_08995228; }
    goto L_08994C6C;
L_08994C6C:;
    cnd_ = v0 != 0;
    v0 = 0x8073;
    if (cnd_) { goto L_0899504C; }
    goto L_08994C74;
L_08994C74:;
    v0 = 0x8030;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_08995024; }
    goto L_08994C80;
L_08994C80:;
    cnd_ = v0 != 0;
    v0 = 0x803a;
    if (cnd_) { goto L_08994F80; }
    goto L_08994C88;
L_08994C88:;
    v0 = 90;
    cnd_ = v1 == v0;
    if (cnd_) { s2 = LD32(a1+24); goto L_08994CC8; }
    goto L_08994C94;
L_08994C94:;
    a0 = s1 + 0;
    goto L_08994C98;
L_08994C98:;
    a1 = s0 + 0;
    { rv_t r_ = func_089DAD88(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08994CA0;
L_08994CA0:;
    v1 = v0 + 0;
    goto L_08994CA4;
L_08994CA4:;
    goto L_08994CA8;
L_08994CA8:;
    v0 = v1 + 0;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_08994CC8:;
    cnd_ = s2 == 0;
    f20 = BITSF(LD32(a1+8));
    if (cnd_) { goto L_08994E5C; }
    goto L_08994CD0;
L_08994CD0:;
    v1 = LD32(a0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    a0 = 1;
    if (cnd_) { goto L_08994CF8; }
    goto L_08994CF4;
L_08994CF4:;
    a0 = 0 + 0;
    goto L_08994CF8;
L_08994CF8:;
    v0 = LD_U8(s1+195);
    cnd_ = v0 != 0;
    s3 = a0 & 0xff;
    if (cnd_) { goto L_08994D8C; }
    goto L_08994D04;
L_08994D04:;
    v0 = LD32(s2+120);
    v1 = LD32(s1+520);
    v0 = (v0 >> 7) & 0x1;
    v1 = (v1 & ~(0x1u << 11)) | ((v0 & 0x1) << 11);
    ST32(s1+520, v1);
    v0 = LD32(s2+120);
    v0 = (v0 >> 6) & 0x1;
    v1 = (v1 & ~(0x1u << 10)) | ((v0 & 0x1) << 10);
    ST32(s1+520, v1);
    v0 = LD32(s2+120);
    v0 = (v0 >> 8) & 0x1;
    v1 = (v1 & ~(0x1u << 14)) | ((v0 & 0x1) << 14);
    ST32(s1+520, v1);
    v0 = LD32(s2+120);
    v0 = (v0 >> 9) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1+88); goto L_08994D54; }
    goto L_08994D48;
L_08994D48:;
    v0 = v1 | 0x2;
    ST32(s1+520, v0);
    a0 = LD32(s1+88);
    goto L_08994D54;
L_08994D54:;
    cnd_ = a0 == 0;
    if (cnd_) { a1 = LD32(s2+120); goto L_08994D7C; }
    goto L_08994D5C;
L_08994D5C:;
    a0 = LD32(a0+56);
    cnd_ = a0 == 0;
    v0 = 0x9a450000u;
    if (cnd_) { goto L_08994D78; }
    goto L_08994D68;
L_08994D68:;
    v1 = LD32(a0+36);
    v0 = v0 | 0x832;
    cnd_ = v1 == v0;
    if (cnd_) { f0 = BITSF(LD32(s2+140)); goto L_08994F6C; }
    goto L_08994D78;
L_08994D78:;
    a1 = LD32(s2+120);
    goto L_08994D7C;
L_08994D7C:;
    a0 = s1 + 0;
    a1 = (a1 >> 10) & 0x1;
    func_0899F418(a0, a1);
    goto L_08994D88;
L_08994D88:;
    v0 = LD_U8(s1+195);
    goto L_08994D8C;
L_08994D8C:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08994DA4; }
    goto L_08994D98;
L_08994D98:;
    v0 = LD_U8(s1+124);
    cnd_ = v0 != 0;
    f12 = f20;
    if (cnd_) { goto L_08994F5C; }
    goto L_08994DA4;
L_08994DA4:;
    f12 = f20;
    a1 = s1 + 0;
    func_089A8A98(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08994DB0;
L_08994DB0:;
    v0 = LD_U8(s1+124);
    cnd_ = v0 == 0;
    v1 = LD32(s1);
    if (cnd_) { goto L_08994E64; }
    goto L_08994DBC;
L_08994DBC:;
    v0 = 1;
    goto L_08994DC0;
L_08994DC0:;
    ST8(s1+124, v0);
    goto L_08994DC4;
L_08994DC4:;
    v0 = LD32(v1-12);
    f0 = BITSF(0);
    v0 = s1 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v1 = 1;
    if (cnd_) { goto L_08994CA4; }
    goto L_08994DE4;
L_08994DE4:;
    cnd_ = s3 != 0;
    if (cnd_) { goto L_08994CA4; }
    goto L_08994DEC;
L_08994DEC:;
    v0 = LD32(s1+88);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08994CA8; }
    goto L_08994DF8;
L_08994DF8:;
    v0 = LD32(v0+56);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08994E08; }
    goto L_08994E04;
L_08994E04:;
    v1 = LD32(v0+36);
    goto L_08994E08;
L_08994E08:;
    s0 = 0x86200000u;
    s0 = s0 | 0x5043;
    cnd_ = v1 == s0;
    if (cnd_) { v1 = 1; goto L_08994CA4; }
    goto L_08994E18;
L_08994E18:;
    a0 = sp + 12;
    func_0897A7A0(a0);
    goto L_08994E20;
L_08994E20:;
    v0 = LD32(sp);
    v1 = LD32(sp+8);
    a0 = LD32(s1+88);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    v1 = v1 | 0x1;
    ST32(sp, v0);
    a1 = s0 + 0;
    a2 = sp + 0;
    v0 = 999;
    ST32(sp+4, s0);
    ST32(sp+8, v1);
    ST32(sp+20, v0);
    ST32(sp+24, 0);
    ST8(sp+44, 0);
    f0 = func_089DF378(a0, a1, a2);
    goto L_08994E5C;
L_08994E5C:;
    v1 = 1;
    goto L_08994CA4;
L_08994E64:;
    a0 = s1 + 0;
    v0 = LD32(v1+240);
    t_ = v0;
    s0 = s1 + 276;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08994E74;
L_08994E74:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    func_0899CFE4(a0, a1);
    goto L_08994E80;
L_08994E80:;
    v1 = LD32(s1);
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08994E90;
L_08994E90:;
    f1 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+28));
    f2 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+12));
    f5 = BITSF(LD32(v0+16));
    f6 = BITSF(LD32(v0+20));
    f7 = BITSF(LD32(v0+24));
    ST32(s0+28, FBITS(f0));
    ST32(s0+32, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    ST32(s0+8, FBITS(f3));
    ST32(s0+12, FBITS(f4));
    ST32(s0+16, FBITS(f5));
    ST32(s0+20, FBITS(f6));
    ST32(s0+24, FBITS(f7));
    v1 = LD32(s1);
    f0 = BITSF(LD32(v0));
    v0 = LD32(v1-12);
    ST32(s1+276, FBITS(f0));
    f0 = BITSF(0);
    v0 = s1 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v0 = 1;
    if (cnd_) { goto L_08994DC0; }
    goto L_08994EFC;
L_08994EFC:;
    v0 = LD32(s1+88);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08994DC0; }
    goto L_08994F08;
L_08994F08:;
    a0 = sp + 12;
    func_0897A7A0(a0);
    goto L_08994F10;
L_08994F10:;
    v0 = 0x86200000u;
    v0 = v0 | 0x5043;
    a0 = LD32(s1+88);
    a3 = LD32(sp);
    v1 = LD32(sp+8);
    a1 = v0 + 0;
    ST32(sp+4, v0);
    v0 = D_08AEE77C - (-6276);
    v1 = v1 | 0x1;
    f0 = BITSF(LD32(v0-6276));
    a3 = (a3 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    a2 = sp + 0;
    ST32(sp, a3);
    ST32(sp+8, v1);
    ST32(sp+24, FBITS(f0));
    ST8(sp+44, 0);
    f0 = func_089DF378(a0, a1, a2);
    goto L_08994F54;
L_08994F54:;
    v1 = LD32(s1);
    goto L_08994DBC;
L_08994F5C:;
    a1 = s1 + 0;
    func_089A8BEC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08994F64;
L_08994F64:;
    v1 = LD32(s1);
    goto L_08994DC4;
L_08994F6C:;
    a1 = sp + 48;
    ST32(sp+48, FBITS(f0));
    func_089A2CE0(a0, a1);
    goto L_08994F78;
L_08994F78:;
    a1 = LD32(s2+120);
    goto L_08994D7C;
L_08994F80:;
    cnd_ = v1 == v0;
    v0 = 0x803b;
    if (cnd_) { goto L_08994FEC; }
    goto L_08994F88;
L_08994F88:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = s1 + 0; goto L_08994C98; }
    goto L_08994F90;
L_08994F90:;
    s0 = LD32(a1+24);
    cnd_ = s0 == 0;
    a0 = a0 + 224;
    if (cnd_) { goto L_08994E5C; }
    goto L_08994F9C;
L_08994F9C:;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08994FC8; }
    goto L_08994FA8;
L_08994FA8:;
    a2 = LD32(s1+424);
    v0 = LD32(v1+8);
    goto L_08994FB0;
L_08994FB0:;
    cnd_ = v0 == a2;
    a1 = v1 + 0;
    if (cnd_) { goto L_08994FC8; }
    goto L_08994FB8;
L_08994FB8:;
    v1 = LD32(v1);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08994FB0; }
    goto L_08994FC4;
L_08994FC4:;
    a1 = 0 + 0;
    goto L_08994FC8;
L_08994FC8:;
    { u64 r_ = func_08AC3EA4(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08994FD0;
L_08994FD0:;
    v1 = LD32(s1);
    a1 = LD32(s0);
    v0 = LD32(v1+440);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08994FE4;
L_08994FE4:;
    v1 = 1;
    goto L_08994CA4;
L_08994FEC:;
    a1 = LD32(a1+24);
    cnd_ = a1 == 0;
    v1 = 1;
    if (cnd_) { goto L_08994CA4; }
    goto L_08994FF8;
L_08994FF8:;
    a0 = LD32(a0+236);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08994CA8; }
    goto L_08995004;
L_08995004:;
    a1 = LD32(a1);
    { u64 r_ = func_089868A4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899500C;
L_0899500C:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 1; goto L_08994CA4; }
    goto L_08995014;
L_08995014:;
    a0 = v0 + 0;
    f0 = func_08A17C64(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0899501C;
L_0899501C:;
    v1 = 1;
    goto L_08994CA4;
L_08995024:;
    v0 = LD_U8(a0+195);
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08994CA4; }
    goto L_08995030;
L_08995030:;
    a1 = LD32(s0+24);
    cnd_ = a1 == 0;
    if (cnd_) { v1 = 1; goto L_08994CA4; }
    goto L_0899503C;
L_0899503C:;
    f0 = func_0899E9AC(a0, a1);
    goto L_08995044;
L_08995044:;
    v1 = 1;
    goto L_08994CA4;
L_0899504C:;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_08995180; }
    goto L_08995054;
L_08995054:;
    cnd_ = v0 != 0;
    v0 = 0x807a;
    if (cnd_) { goto L_089950E0; }
    goto L_0899505C;
L_0899505C:;
    v0 = 0x8060;
    cnd_ = v1 == v0;
    v0 = 0x8061;
    if (cnd_) { goto L_0899508C; }
    goto L_08995068;
L_08995068:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = s1 + 0; goto L_08994C98; }
    goto L_08995070;
L_08995070:;
    a0 = LD32(a0+236);
    cnd_ = a0 == 0;
    a1 = LD32(a1+24);
    if (cnd_) { goto L_08994E5C; }
    goto L_0899507C;
L_0899507C:;
    a1 = LD_U8(a1);
    func_08986928(a0, a1);
    goto L_08995084;
L_08995084:;
    v1 = 1;
    goto L_08994CA4;
L_0899508C:;
    v1 = LD32(a0+236);
    cnd_ = v1 == 0;
    a1 = LD32(a1+24);
    if (cnd_) { goto L_08994E5C; }
    goto L_08995098;
L_08995098:;
    v0 = LD_U8(a1);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(v1+121); goto L_089950D0; }
    goto L_089950A4;
L_089950A4:;
    v0 = LD_U8(v1+120);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0);
    goto L_089950B4;
L_089950B4:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 1; goto L_08994CA4; }
    goto L_089950BC;
L_089950BC:;
    f1 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(v0+300));
    f0 = f0 + f1;
    ST32(v0+300, FBITS(f0));
    goto L_08994E5C;
L_089950D0:;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0+48);
    goto L_089950B4;
L_089950E0:;
    cnd_ = v1 == v0;
    v0 = 0x8084;
    if (cnd_) { goto L_08995168; }
    goto L_089950E8;
L_089950E8:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = s1 + 0; goto L_08994C98; }
    goto L_089950F0;
L_089950F0:;
    v0 = LD_U8(a0+195);
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08994CA4; }
    goto L_089950FC;
L_089950FC:;
    v1 = LD32(a0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { v1 = 1; goto L_08994CA4; }
    goto L_08995120;
L_08995120:;
    v0 = LD32(v1+388);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899512C;
L_0899512C:;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_08994CA4; }
    goto L_08995134;
L_08995134:;
    s0 = LD32(s0+24);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08994CA8; }
    goto L_08995140;
L_08995140:;
    v1 = LD32(s1);
    v0 = LD32(v1+388);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08995150;
L_08995150:;
    f12 = BITSF(LD32(s0+4));
    a1 = LD32(s0);
    a0 = v0 + 0;
    func_08A23994(a0, a1, f12);
    goto L_08995160;
L_08995160:;
    v1 = 1;
    goto L_08994CA4;
L_08995168:;
    v0 = LD_U8(a0+494);
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08994CA4; }
    goto L_08995174;
L_08995174:;
    v0 = 1;
    ST8(a0+494, v0);
    goto L_08995030;
L_08995180:;
    v0 = LD32(a1+24);
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_08994CA4; }
    goto L_0899518C;
L_0899518C:;
    a1 = LD32(v0);
    a0 = D_08C2BE78 - (-16776);
    v0 = 999;
    cnd_ = a1 == v0;
    v1 = a0 - 16776;
    if (cnd_) { goto L_08994E5C; }
    goto L_089951A0;
L_089951A0:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-16776);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089951F0; }
    goto L_089951C4;
L_089951C4:;
    a0 = LD32(a2);
    goto L_089951C8;
L_089951C8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_08995208; }
    goto L_089951E0;
L_089951E0:;
    a2 = LD32(a2+4);
    goto L_089951E4;
L_089951E4:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_089951C8; }
    goto L_089951EC;
L_089951EC:;
    a0 = 0 + 0;
    goto L_089951F0;
L_089951F0:;
    cnd_ = a0 == 0;
    if (cnd_) { v1 = 1; goto L_08994CA4; }
    goto L_089951F8;
L_089951F8:;
    a1 = s1 + 0;
    f0 = func_089F5BA8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08995200;
L_08995200:;
    v1 = 1;
    goto L_08994CA4;
L_08995208:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_089951E4; }
    goto L_08995214;
L_08995214:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_089951E4; }
    goto L_08995220;
L_08995220:;
    goto L_089951F0;
L_08995228:;
    v1 = LD32(a0+236);
    cnd_ = v1 == 0;
    a1 = LD32(a1+24);
    if (cnd_) { goto L_08994E5C; }
    goto L_08995234;
L_08995234:;
    v0 = LD_U8(a1);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(v1+121); goto L_0899526C; }
    goto L_08995240;
L_08995240:;
    v0 = LD_U8(v1+120);
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    goto L_08995250;
L_08995250:;
    cnd_ = a0 == 0;
    if (cnd_) { v1 = 1; goto L_08994CA4; }
    goto L_08995258;
L_08995258:;
    v1 = LD_U8(a1+1);
    v0 = LD32(a0+296);
    v0 = v0 + v1;
    ST32(a0+296, v0);
    goto L_08994E5C;
L_0899526C:;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0+48);
    goto L_08995250;
}

/* 0899527C */
u32 func_0899527C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_0899527C:;
    sp = sp - 128;
    v0 = D_08B159FC - (23036);
    a2 = sp + 16;
    s0 = sp + 48;
    a1 = sp + 0;
    t1 = LD32(v0+23036);
    v0 = LD32(a0);
    t0 = 0 + 0;
    f0 = BITSF(LD32(t1));
    f1 = BITSF(LD32(t1+4));
    f2 = BITSF(LD32(t1+8));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    f0 = BITSF(LD32(t1+20));
    v1 = LD32(v0-16);
    v0 = D_08AEE780 - (-6272);
    ST32(sp+16, FBITS(f0));
    a0 = a0 + v1;
    f0 = BITSF(LD32(t1+32));
    a3 = LD32(a0+4);
    f12 = BITSF(LD32(v0-6272));
    ST32(sp+20, FBITS(f0));
    a0 = s0 + 0;
    f0 = BITSF(LD32(t1+44));
    ST32(sp+24, FBITS(f0));
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_089952F0;
L_089952F0:;
    a0 = s0 + 0;
    { rv_t r_ = func_08834E34(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089952F8;
L_089952F8:;
    v0 = LD32(v0+4);
    sp = sp + 128;
    return v0;
}

/* 0899530C */
static rv_t func_0899530C__orig(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr64 = v[64], vr65 = v[65], vr68 = v[68], vr77 = v[77], vr78 = v[78];
    u8 stack_[1040] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1040);
L_0899530C:;
    sp = sp - 1040;
    v0 = LD32(a0+92);
    cnd_ = v0 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08997F18; }
    goto L_08995358;
L_08995358:;
    a0 = s2 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_089DBCF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08995360;
L_08995360:;
    v0 = D_08C2C3E0 - (-15392);
    v0 = LD32(v0-15392);
    cnd_ = v0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08995378; }
    goto L_08995370;
L_08995370:;
    v0 = LD_U8(v0+68);
    s4 = 0 < v0;
    goto L_08995378;
L_08995378:;
    a0 = (u32)-1;
    ST32(sp+208, 0);
    v0 = func_08A5FB08(a0);
    goto L_08995384;
L_08995384:;
    a0 = 0xde350000u;
    a1 = v0 + 0;
    a2 = sp + 208;
    a0 = a0 | 0x46b6;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08995398;
L_08995398:;
    a0 = s2 + 0;
    ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;func_0899B62C(a0); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];});
    goto L_089953A0;
L_089953A0:;
    v1 = LD32(s2);
    f20 = BITSF(0);
    v0 = LD32(v1-12);
    ST32(sp, FBITS(f20));
    v0 = s2 + v0;
    f0 = BITSF(LD32(v0+80));
    ST32(sp+4, FBITS(f20));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f20));
    if (cnd_) { goto L_08996090; }
    goto L_089953CC;
L_089953CC:;
    a0 = LD32(s2+92);
    goto L_089953D0;
L_089953D0:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 10;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089953E0;
L_089953E0:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    v0 = 999;
    if (cnd_) { goto L_08995400; }
    goto L_089953F4;
L_089953F4:;
    s0 = LD32(s2+432);
    cnd_ = s0 == v0;
    if (cnd_) { goto L_08996014; }
    goto L_08995400;
L_08995400:;
    a0 = s2 + 0;
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08995408;
L_08995408:;
    cnd_ = v0 == 0;
    v0 = D_08AEE7A4 - (-6236);
    if (cnd_) { goto L_08995A54; }
    goto L_08995410;
L_08995410:;
    a1 = LD32(s2+88);
    v0 = LD32(a1+56);
    v0 = LD32(v0+112);
    v1 = (v0 >> 16) & 0x1;
    cnd_ = v1 == 0;
    v0 = (v0 >> 4) & 0x1;
    if (cnd_) { goto L_08995A38; }
    goto L_08995428;
L_08995428:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s2); goto L_08995A24; }
    goto L_08995430;
L_08995430:;
    a0 = LD32(s2+40);
    goto L_08995434;
L_08995434:;
    cnd_ = a0 == 0;
    if (cnd_) { v1 = LD32(s2); goto L_08995498; }
    goto L_0899543C;
L_0899543C:;
    a1 = LD32(s2+88);
    cnd_ = a1 == 0;
    if (cnd_) { v1 = LD32(s2); goto L_0899555C; }
    goto L_08995448;
L_08995448:;
    v0 = LD32(a1+56);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s2); goto L_0899555C; }
    goto L_08995454;
L_08995454:;
    v0 = LD32(v0+112);
    v0 = (v0 >> 15) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0899554C; }
    goto L_08995464;
L_08995464:;
    v1 = LD32(s2);
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08995474;
L_08995474:;
    a0 = LD32(s2+40);
    a1 = v0 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_088BAB50(a0, a1); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08995480;
L_08995480:;
    v1 = LD32(s2+88);
    a0 = LD32(v1+56);
    v0 = LD32(a0+112);
    v0 = (v0 >> 17) & 0x1;
    cnd_ = v0 != 0;
    v1 = LD32(s2);
    if (cnd_) { goto L_08995534; }
    goto L_08995498;
L_08995498:;
    a0 = s2 + 0;
    v0 = LD32(v1+244);
    t_ = v0;
    s0 = sp + 144;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089954A8;
L_089954A8:;
    v1 = LD32(s2);
    s1 = v0 + 0;
    v0 = LD32(v1+92);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089954BC;
L_089954BC:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089954C8;
L_089954C8:;
    a0 = LD32(s2);
    v0 = D_08B285B4 - (-31308);
    f12 = BITSF(LD32(v0-31308));
    v1 = LD32(a0-12);
    a1 = s1 + 0;
    a2 = s0 + 0;
    v1 = s2 + v1;
    a0 = LD32(v1+4);
    a3 = 0 + 0;
    { rv_t r_ = func_0887916C(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089954F0;
L_089954F0:;
    goto L_089954F4;
L_089954F4:;
    sp = sp + 1040;
    { v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;return (rv_t){ v0, v1, f0 }; }
L_08995534:;
    a0 = s2 + 0;
    v0 = LD32(v1+500);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08995544;
L_08995544:;
    v1 = LD32(s2);
    goto L_08995498;
L_0899554C:;
    a1 = a1 + 72;
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08995554;
L_08995554:;
    v1 = LD32(s2);
    goto L_08995498;
L_0899555C:;
    ST32(sp+160, 0);
    a0 = s2 + 0;
    ST32(sp+164, 0);
    ST32(sp+168, 0);
    v0 = LD32(v1+452);
    t_ = v0;
    s4 = sp + 160;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08995578;
L_08995578:;
    cnd_ = v0 == 0;
    v1 = LD32(s2);
    if (cnd_) { goto L_08995A0C; }
    goto L_08995580;
L_08995580:;
    v0 = LD32(v1-12);
    v0 = s2 + v0;
    s0 = LD32(v0+100);
    cnd_ = s0 == 0;
    s7 = D_08AEE784 - (-6268);
    if (cnd_) { goto L_089955E4; }
    goto L_08995594;
L_08995594:;
    a1 = LD32(s0+16);
    cnd_ = a1 == 0;
    s1 = s0 + 76;
    if (cnd_) { goto L_089955C8; }
    goto L_089955A0;
L_089955A0:;
    v0 = D_08B285AC - (-31316);
    s3 = LD32(v0-31316);
    v1 = LD32(s0+220);
    cnd_ = v1 == s3;
    a0 = s1 + 0;
    if (cnd_) { goto L_089955CC; }
    goto L_089955B4;
L_089955B4:;
    v0 = LD32(s1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    f12 = BITSF(LD32(s7-6268));
    if (cnd_) { goto L_089959FC; }
    goto L_089955C4;
L_089955C4:;
    ST32(s0+220, s3);
    goto L_089955C8;
L_089955C8:;
    a0 = s1 + 0;
    goto L_089955CC;
L_089955CC:;
    a1 = s4 + 0;
    { rv_t r_ = func_088166EC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089955D4;
L_089955D4:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089959C0; }
    goto L_089955E0;
L_089955E0:;
    v1 = LD32(s2);
    goto L_089955E4;
L_089955E4:;
    f0 = BITSF(LD32(s7-6268));
    f20 = BITSF(0);
    v0 = LD32(v1+240);
    ST32(sp+16, FBITS(f0));
    a0 = s2 + 0;
    ST32(sp+20, FBITS(f20));
    t_ = v0;
    ST32(sp+24, FBITS(f20));
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08995604;
L_08995604:;
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(624);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {u32 a_=sp+(560);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+16);
    a1 = LD32(v0+32);
    {u32 a_=sp+(608);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {u32 a_=sp+(640);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+24);
    a0 = LD32(v0+28);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v0 = LD32(sp+20);
    {float s0=v[24];float s1=v[25];float s2=v[26];float s3=v[27];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(656);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(544);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    v1 = LD32(sp+16);
    {v[33]=BITSF(a0);}
    {v[20]=BITSF(v1);}
    a0 = LD32(s2);
    {v[34]=BITSF(a1);}
    v1 = LD32(sp+24);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[18]);}
    f3 = BITSF(v1);
    {a2=FBITS(v[16]);}
    {v1=FBITS(v[17]);}
    v0 = LD32(a0+472);
    ST32(sp+64, a2);
    a0 = s2 + 0;
    {u32 a_=sp+(592);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    ST32(sp+68, v1);
    ST32(sp+176, a2);
    ST32(sp+180, v1);
    ST32(sp+72, FBITS(f3));
    t_ = v0;
    ST32(sp+184, FBITS(f3));
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089956D4;
L_089956D4:;
    v1 = LD32(v0);
    a1 = LD32(v0+8);
    a0 = LD32(v0+4);
    {u32 a_=sp+(672);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+64);
    {v[4]=BITSF(v1);}
    {u32 a_=sp+(688);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+68);
    {v[0]=BITSF(v0);}
    {v[5]=BITSF(a0);}
    {v[1]=BITSF(v1);}
    v0 = LD32(sp+72);
    {v[6]=BITSF(a1);}
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[8]=d0;v[9]=d1;v[10]=d2;}
    {a2=FBITS(v[9]);}
    f0 = BITSF(a2);
    {v0=FBITS(v[10]);}
    {v1=FBITS(v[8]);}
    fcc = FCMP(f20, f0, 12);
    ST32(sp+176, v1);
    ST32(sp+184, v0);
    ST32(sp+16, v1);
    ST32(sp+20, a2);
    ST32(sp+24, v0);
    cnd_ = !fcc;
    ST32(sp+180, a2);
    if (cnd_) { goto L_0899575C; }
    goto L_08995740;
L_08995740:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    v0 = LD32(v1+456);
    t_ = v0;
    a1 = s4 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08995754;
L_08995754:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = sp + 176; goto L_08995864; }
    goto L_0899575C;
L_0899575C:;
    v1 = LD32(s2);
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899576C;
L_0899576C:;
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(912);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {u32 a_=sp+(848);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+16);
    a1 = LD32(v0+32);
    {u32 a_=sp+(896);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {u32 a_=sp+(928);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    {u32 a_=sp+(864);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+24);
    a0 = LD32(v0+28);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v0 = LD32(sp+164);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(944);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(832);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    {float s0=v[24];float s1=v[25];float s2=v[26];float s3=v[27];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    v1 = LD32(sp+160);
    {v[33]=BITSF(a0);}
    {v[20]=BITSF(v1);}
    {v[34]=BITSF(a1);}
    v1 = LD32(sp+168);
    {v[21]=BITSF(v0);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    {v1=FBITS(v[16]);}
    {a2=FBITS(v[17]);}
    ST32(sp+160, v1);
    {u32 a_=sp+(880);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    ST32(sp+164, a2);
    ST32(sp+168, v0);
    ST32(sp+16, v1);
    ST32(sp+20, a2);
    ST32(sp+24, v0);
    ST32(sp+192, v1);
    ST32(sp+196, a2);
    ST32(sp+200, v0);
    a0 = LD32(s2+40);
    goto L_08995838;
L_08995838:;
    a1 = s4 + 0;
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08995840;
L_08995840:;
    v1 = LD32(s2);
    goto L_08995844;
L_08995844:;
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08995850;
L_08995850:;
    a0 = LD32(s2+40);
    a1 = v0 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_088BAB50(a0, a1); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899585C;
L_0899585C:;
    v1 = LD32(s2);
    goto L_08995498;
L_08995864:;
    a0 = sp + 80;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899586C;
L_0899586C:;
    v1 = LD32(sp+80);
    {u32 a_=sp+(768);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+84);
    {u32 a_=sp+(784);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(sp+88);
    {v[49]=BITSF(v0);}
    v0 = LD32(sp+96);
    {v[50]=BITSF(v1);}
    v1 = LD32(sp+92);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {u32 a_=sp+(720);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(800);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(sp+100);
    {v[49]=BITSF(v0);}
    {v[50]=BITSF(v1);}
    {u32 a_=sp+(736);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    a0 = LD32(s2);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[24];float s1=v[25];float s2=v[26];float s3=v[27];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    v1 = LD32(sp+104);
    v0 = LD32(sp+108);
    {u32 a_=sp+(816);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(704);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    v1 = LD32(sp+112);
    {v[33]=BITSF(v0);}
    v0 = LD32(sp+164);
    {v[34]=BITSF(v1);}
    v1 = LD32(sp+160);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[20]=BITSF(v1);}
    v1 = LD32(sp+168);
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[18]);}
    f3 = BITSF(v1);
    {a2=FBITS(v[16]);}
    {v1=FBITS(v[17]);}
    ST32(sp+160, a2);
    {u32 a_=sp+(752);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    ST32(sp+192, a2);
    ST32(sp+16, a2);
    ST32(sp+168, FBITS(f3));
    ST32(sp+200, FBITS(f3));
    ST32(sp+24, FBITS(f3));
    ST32(sp+164, v1);
    ST32(sp+196, v1);
    ST32(sp+20, v1);
    v0 = LD32(a0+244);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08995948;
L_08995948:;
    v1 = LD32(s2);
    s0 = v0 + 0;
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899595C;
L_0899595C:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+176));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 + f0;
    f1 = BITSF(LD32(sp+180));
    f0 = BITSF(LD32(sp+184));
    a0 = D_08ADE1E4 - (-7708);
    f3 = f3 + f1;
    f4 = f4 + f0;
    a0 = a0 - 7708;
    ST32(sp+192, FBITS(f2));
    ST32(sp+196, FBITS(f3));
    ST32(sp+200, FBITS(f4));
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08995998;
L_08995998:;
    v1 = D_08AEE7AC - (-6228);
    f12 = BITSF(LD32(v1-6228));
    a2 = D_08C29E64 - (-24988);
    a0 = s0 + 0;
    a1 = sp + 192;
    a2 = a2 - 24988;
    a3 = v0 + 0;
    { u64 r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_0897B744(a0, a1, a2, a3, f12); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089959B8;
L_089959B8:;
    a0 = LD32(s2+40);
    goto L_08995838;
L_089959C0:;
    a0 = s2 + 0;
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089959C8;
L_089959C8:;
    cnd_ = v0 != 0;
    v1 = LD32(s2);
    if (cnd_) { goto L_089955E4; }
    goto L_089959D0;
L_089959D0:;
    f1 = BITSF(LD32(s2+368));
    f3 = BITSF(LD32(sp+160));
    f2 = BITSF(LD32(sp+164));
    f0 = BITSF(LD32(sp+168));
    f3 = f3 * f1;
    f2 = f2 * f1;
    f0 = f0 * f1;
    ST32(sp+160, FBITS(f3));
    ST32(sp+164, FBITS(f2));
    ST32(sp+168, FBITS(f0));
    goto L_089955E4;
L_089959FC:;
    a2 = 0 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_088155D0(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08995A04;
L_08995A04:;
    ST32(s0+220, s3);
    goto L_089955C8;
L_08995A0C:;
    a0 = s2 + 0;
    v0 = LD32(v1+500);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08995A1C;
L_08995A1C:;
    v1 = LD32(s2);
    goto L_08995844;
L_08995A24:;
    v0 = LD32(v1+488);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08995A30;
L_08995A30:;
    a0 = LD32(s2+40);
    goto L_08995434;
L_08995A38:;
    v0 = LD32(s2);
    a1 = a1 + 72;
    v1 = LD32(v0+484);
    t_ = v1;
    a0 = s2 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08995A4C;
L_08995A4C:;
    a0 = LD32(s2+40);
    goto L_08995434;
L_08995A54:;
    f12 = BITSF(LD32(v0-6236));
    a0 = LD32(sp+208);
    a1 = 0x44ef0000u;
    a1 = a1 | 0xd6b6;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08995A68;
L_08995A68:;
    v0 = LD32(s2+520);
    v0 = (v0 >> 5) & 0x1;
    cnd_ = v0 == 0;
    f20 = f0;
    if (cnd_) { goto L_08995AC4; }
    goto L_08995A78;
L_08995A78:;
    v0 = LD_U8(s2+195);
    cnd_ = v0 == 0;
    v0 = D_08AEE7A8 - (-6232);
    if (cnd_) { goto L_08995AAC; }
    goto L_08995A84;
L_08995A84:;
    v1 = LD32(s2);
    v0 = LD32(v1+344);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08995A94;
L_08995A94:;
    f1 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s2); goto L_08995AC8; }
    goto L_08995AA8;
L_08995AA8:;
    v0 = D_08AEE7A8 - (-6232);
    goto L_08995AAC;
L_08995AAC:;
    f12 = BITSF(LD32(v0-6232));
    a0 = LD32(sp+208);
    a1 = 0xd16f0000u;
    a1 = a1 | 0xa7fd;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08995AC0;
L_08995AC0:;
    f20 = f0;
    goto L_08995AC4;
L_08995AC4:;
    v1 = LD32(s2);
    goto L_08995AC8;
L_08995AC8:;
    f0 = BITSF(LD32(s2+368));
    a0 = s2 + 0;
    v0 = LD32(v1+92);
    f20 = f20 * f0;
    t_ = v0;
    s0 = sp + 64;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08995AE0;
L_08995AE0:;
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
    if (cnd_) { goto L_08995D60; }
    goto L_08995B1C;
L_08995B1C:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08995CA0; }
    goto L_08995B2C;
L_08995B2C:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;vr64=d0;}
    {float s0=v[122];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08995BC4; }
    goto L_08995B54;
L_08995B54:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08995BA0; }
    goto L_08995B90;
L_08995B90:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08995BA0;
L_08995BA0:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08995BE4; }
    goto L_08995BB0;
L_08995BB0:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08995BE4; }
    goto L_08995BC0;
L_08995BC0:;
    goto L_08995BC4;
L_08995BC4:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08995BE4; }
    goto L_08995BD8;
L_08995BD8:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08995BE4;
L_08995BE4:;
    {float s0=vr78;float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;vr64=d0;}
    {float s0=v[117];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08995C74; }
    goto L_08995C04;
L_08995C04:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08995C50; }
    goto L_08995C40;
L_08995C40:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08995C50;
L_08995C50:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08995C94; }
    goto L_08995C60;
L_08995C60:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08995C94; }
    goto L_08995C70;
L_08995C70:;
    goto L_08995C74;
L_08995C74:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08995C94; }
    goto L_08995C88;
L_08995C88:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08995C94;
L_08995C94:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08995E18; }
    goto L_08995C9C;
L_08995C9C:;
    goto L_08995CA0;
L_08995CA0:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;vr64=d0;}
    {float s0=v[112];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08995D34; }
    goto L_08995CC4;
L_08995CC4:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08995D10; }
    goto L_08995D00;
L_08995D00:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08995D10;
L_08995D10:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08995D54; }
    goto L_08995D20;
L_08995D20:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08995D54; }
    goto L_08995D30;
L_08995D30:;
    goto L_08995D34;
L_08995D34:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08995D54; }
    goto L_08995D48;
L_08995D48:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08995D54;
L_08995D54:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08995E18; }
    goto L_08995D5C;
L_08995D5C:;
    goto L_08995D60;
L_08995D60:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;vr64=d0;}
    {float s0=v[121];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08995DF4; }
    goto L_08995D84;
L_08995D84:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08995DD0; }
    goto L_08995DC0;
L_08995DC0:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08995DD0;
L_08995DD0:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08995E14; }
    goto L_08995DE0;
L_08995DE0:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08995E14; }
    goto L_08995DF0;
L_08995DF0:;
    goto L_08995DF4;
L_08995DF4:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08995E14; }
    goto L_08995E08;
L_08995E08:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08995E14;
L_08995E14:;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    goto L_08995E18;
L_08995E18:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(48),FBITS(v[96]));}
    {ST32(sp+(52),FBITS(v[97]));}
    {ST32(sp+(56),FBITS(v[98]));}
    ST32(sp+48, 0);
    {u32 a_=sp+(384);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(400);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
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
    {ST32(sp+(80),FBITS(v[96]));}
    {ST32(sp+(84),FBITS(v[97]));}
    {ST32(sp+(88),FBITS(v[98]));}
    {ST32(sp+(92),FBITS(v[100]));}
    {ST32(sp+(96),FBITS(v[101]));}
    {ST32(sp+(100),FBITS(v[102]));}
    {ST32(sp+(104),FBITS(v[104]));}
    {ST32(sp+(108),FBITS(v[105]));}
    {ST32(sp+(112),FBITS(v[106]));}
    {u32 a_=sp+(416);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    f6 = BITSF(LD32(sp+8));
    f4 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+4));
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    v0 = LD32(sp+80);
    v1 = LD32(sp+84);
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    f6 = f6 * f20;
    f4 = f4 * f20;
    f3 = f3 * f20;
    {u32 a_=sp+(432);vr64=BITSF(LD32(a_+0));vr65=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[40]=d0;v[41]=d1;v[42]=d2;v[43]=d3;}
    {u32 a_=sp+(448);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr64=BITSF(v0);}
    v0 = LD32(sp+88);
    {vr65=BITSF(v1);}
    v1 = LD32(sp+96);
    {v[66]=BITSF(v0);}
    v0 = LD32(sp+92);
    {u32 a_=sp+(368);ST32(a_+0,FBITS(vr64));ST32(a_+4,FBITS(vr65));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(480);ST32(a_+0,FBITS(vr64));ST32(a_+4,FBITS(vr65));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+100);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = LD32(sp+104);
    v1 = LD32(sp+108);
    {u32 a_=sp+(464);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(v[24]));ST32(a_+4,FBITS(v[25]));ST32(a_+8,FBITS(v[26]));ST32(a_+12,FBITS(v[27]));}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(v[40]));ST32(a_+4,FBITS(v[41]));ST32(a_+8,FBITS(v[42]));ST32(a_+12,FBITS(v[43]));}
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+112);
    {v[1]=BITSF(v1);}
    v1 = LD32(s2);
    {v[2]=BITSF(v0);}
    {u32 a_=sp+(528);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(400);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    v0 = FBITS(f4);
    a2 = FBITS(f6);
    {float s0=v[24];float s1=v[25];float s2=v[26];float s3=v[27];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(288);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[24]));ST32(a_+4,FBITS(v[25]));ST32(a_+8,FBITS(v[26]));ST32(a_+12,FBITS(v[27]));}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {u32 a_=sp+(336);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[5]=BITSF(v0);}
    {v[6]=BITSF(a2);}
    {float t0=v[4];float t1=v[5];float t2=v[6];float o0=0;o0+=v[16]*t0;o0+=v[17]*t1;o0+=v[18]*t2;float o1=0;o1+=v[20]*t0;o1+=v[21]*t1;o1+=v[22]*t2;float o2=0;o2+=v[24]*t0;o2+=v[25]*t1;o2+=v[26]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    {v0=FBITS(v[2]);}
    f5 = BITSF(v0);
    {a2=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp+64, a2);
    a0 = s2 + 0;
    a1 = s0 + 0;
    ST32(sp+68, v0);
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr64));ST32(a_+4,FBITS(vr65));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    ST32(sp+164, v0);
    ST32(sp+72, FBITS(f5));
    v0 = LD32(v1+480);
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f6));
    ST32(sp+160, a2);
    t_ = v0;
    ST32(sp+168, FBITS(f5));
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08995FF8;
L_08995FF8:;
    v1 = LD32(s2);
    a1 = s0 + 0;
    v0 = LD32(v1+484);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899600C;
L_0899600C:;
    a0 = LD32(s2+40);
    goto L_08995434;
L_08996014:;
    a0 = s2 + 0;
    v0 = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_0899527C(a0); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; });
    goto L_0899601C;
L_0899601C:;
    a0 = v0 + 0;
    v0 = D_08C2B89C - (-18276);
    v1 = LD32(v0-18276);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08995400; }
    goto L_08996030;
L_08996030:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08995400; }
    goto L_08996038;
L_08996038:;
    s1 = LD32(s2+432);
    cnd_ = s1 != s0;
    a1 = 4;
    if (cnd_) { goto L_08995400; }
    goto L_08996044;
L_08996044:;
    a2 = 0 + 0;
    a3 = 0 + 0;
    a0 = 0x8000;
    { u64 r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08996054;
L_08996054:;
    s0 = v0 + 0;
    v0 = LD32(v0+24);
    ST32(v0, s1);
    v1 = LD32(s2);
    v0 = LD32(v1+48);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08996070;
L_08996070:;
    v1 = LD32(s2);
    a1 = s0 + 0;
    a2 = v0 + 0;
    goto L_0899607C;
L_0899607C:;
    a0 = LD32(v1-16);
    a0 = s2 + a0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08996088;
L_08996088:;
    goto L_089954F4;
L_08996090:;
    a0 = s2 + 0;
    { u64 r_ = func_089DD9AC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08996098;
L_08996098:;
    cnd_ = v0 == 0;
    s7 = D_08AEE784 - (-6268);
    if (cnd_) { goto L_08997E14; }
    goto L_089960A0;
L_089960A0:;
    a0 = LD32(s2+520);
    goto L_089960A4;
L_089960A4:;
    a0 = (a0 & ~(0x1u << 13)) | ((0 & 0x1) << 13);
    goto L_089960A8;
L_089960A8:;
    ST32(s2+520, a0);
    a0 = s2 + 0;
    { u64 r_ = func_089DD9AC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089960B4;
L_089960B4:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s2+92); goto L_08997D94; }
    goto L_089960BC;
L_089960BC:;
    a0 = s2 + 0;
    { u64 r_ = func_089DD9AC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089960C4;
L_089960C4:;
    cnd_ = v0 == 0;
    v0 = D_08ADE2D0 - (-7472);
    if (cnd_) { goto L_08997D8C; }
    goto L_089960CC;
L_089960CC:;
    v0 = D_08ADE2D8 - (-7464);
    a1 = LD32(v0-7464);
    goto L_089960D4;
L_089960D4:;
    s5 = D_08AEE788 - (-6264);
    a0 = LD32(sp+208);
    f12 = BITSF(LD32(s5-6264));
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089960E4;
L_089960E4:;
    a0 = s2 + 0;
    f21 = f0;
    { u64 r_ = func_089DD9AC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089960F0;
L_089960F0:;
    cnd_ = v0 == 0;
    v0 = D_08ADE2D4 - (-7468);
    if (cnd_) { goto L_08997D84; }
    goto L_089960F8;
L_089960F8:;
    v0 = D_08ADE2DC - (-7460);
    a1 = LD32(v0-7460);
    goto L_08996100;
L_08996100:;
    v0 = D_08AEE78C - (-6260);
    f12 = BITSF(LD32(v0-6260));
    a0 = LD32(sp+208);
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08996110;
L_08996110:;
    v0 = D_08AEE790 - (-6256);
    f12 = BITSF(LD32(v0-6256));
    a0 = LD32(sp+208);
    a1 = 0xb4620000u;
    a1 = a1 | 0xf7f2;
    f22 = f0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899612C;
L_0899612C:;
    v0 = D_08AEE794 - (-6252);
    f12 = BITSF(LD32(v0-6252));
    a0 = LD32(sp+208);
    a1 = 0x86570000u;
    a1 = a1 | 0xe184;
    ST32(sp+228, FBITS(f0));
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08996148;
L_08996148:;
    a1 = 0x6e6b0000u;
    a0 = LD32(sp+208);
    f12 = BITSF(LD32(s7-6268));
    a1 = a1 | 0x3925;
    ST32(sp+232, FBITS(f0));
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08996160;
L_08996160:;
    a0 = s2 + 0;
    f24 = f0;
    { u64 r_ = func_089DD9AC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899616C;
L_0899616C:;
    cnd_ = v0 == 0;
    v0 = D_08C2933C - (-27844);
    if (cnd_) { goto L_08997D68; }
    goto L_08996174;
L_08996174:;
    v0 = v0 - 27844;
    v1 = D_08AEE798 - (-6248);
    f2 = BITSF(LD32(v1-6248));
    f0 = BITSF(LD32(v0+68));
    f1 = BITSF(LD32(v0+64));
    goto L_08996188;
L_08996188:;
    f0 = f0 + f2;
    f1 = f1 + f2;
    v0 = LD32(s2+520);
    f21 = f21 * f0;
    v0 = (v0 >> 15) & 0x1;
    cnd_ = v0 != 0;
    f22 = f22 * f1;
    if (cnd_) { goto L_08997D5C; }
    goto L_089961A4;
L_089961A4:;
    f1 = BITSF(LD32(s2+400));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { a2 = LD32(s2+424); goto L_089961EC; }
    goto L_089961BC;
L_089961BC:;
    f20 = BITSF(LD32(s7-6268));
    a0 = LD32(sp+208);
    a1 = 0xfe390000u;
    a1 = a1 | 0x6e6c;
    f12 = f20;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089961D4;
L_089961D4:;
    f0 = f20 - f0;
    f1 = BITSF(LD32(s2+400));
    f0 = f0 * f1;
    f0 = f20 - f0;
    f21 = f21 * f0;
    a2 = LD32(s2+424);
    goto L_089961EC;
L_089961EC:;
    a0 = D_08C2C21C - (-15844);
    v0 = 999;
    v1 = a0 - 15844;
    cnd_ = a2 == v0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08996250; }
    goto L_08996200;
L_08996200:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-15844);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08996250; }
    goto L_08996224;
L_08996224:;
    a0 = LD32(a1);
    goto L_08996228;
L_08996228:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08997D3C; }
    goto L_08996240;
L_08996240:;
    a1 = LD32(a1+4);
    goto L_08996244;
L_08996244:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08996228; }
    goto L_0899624C;
L_0899624C:;
    s0 = 0 + 0;
    goto L_08996250;
L_08996250:;
    a0 = s2 + 0;
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08996258;
L_08996258:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08996278; }
    goto L_08996260;
L_08996260:;
    a0 = LD32(s2+88);
    v1 = LD32(a0+56);
    v0 = LD32(v1+112);
    v0 = (v0 >> 19) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0899758C; }
    goto L_08996278;
L_08996278:;
    cnd_ = s0 == 0;
    s6 = D_08C29B58 - (-25768);
    if (cnd_) { goto L_08996298; }
    goto L_08996280;
L_08996280:;
    v1 = LD32(s2);
    v0 = LD32(v1+200);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08996290;
L_08996290:;
    cnd_ = v0 != 0;
    s6 = D_08C29B58 - (-25768);
    if (cnd_) { goto L_0899734C; }
    goto L_08996298;
L_08996298:;
    v1 = LD32(s6-25768);
    v0 = 1;
    cnd_ = v1 == v0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08997334; }
    goto L_089962A8;
L_089962A8:;
    a0 = s2 + 0;
    {v[112]=BITSF(LD32(s2+(276)));}
    {v[113]=BITSF(LD32(s2+(280)));}
    {v[114]=BITSF(LD32(s2+(284)));}
    {v[116]=BITSF(LD32(s2+(288)));}
    {v[117]=BITSF(LD32(s2+(292)));}
    {v[118]=BITSF(LD32(s2+(296)));}
    {v[120]=BITSF(LD32(s2+(300)));}
    {v[121]=BITSF(LD32(s2+(304)));}
    {v[122]=BITSF(LD32(s2+(308)));}
    {v[124]=1.57079632679f;}
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899652C; }
    goto L_089962E8;
L_089962E8:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899646C; }
    goto L_089962F8;
L_089962F8:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;vr64=d0;}
    {float s0=v[122];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08996390; }
    goto L_08996320;
L_08996320:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899636C; }
    goto L_0899635C;
L_0899635C:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_0899636C;
L_0899636C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089963B0; }
    goto L_0899637C;
L_0899637C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_089963B0; }
    goto L_0899638C;
L_0899638C:;
    goto L_08996390;
L_08996390:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089963B0; }
    goto L_089963A4;
L_089963A4:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_089963B0;
L_089963B0:;
    {float s0=vr78;float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;vr64=d0;}
    {float s0=v[117];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08996440; }
    goto L_089963D0;
L_089963D0:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899641C; }
    goto L_0899640C;
L_0899640C:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_0899641C;
L_0899641C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08996460; }
    goto L_0899642C;
L_0899642C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08996460; }
    goto L_0899643C;
L_0899643C:;
    goto L_08996440;
L_08996440:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08996460; }
    goto L_08996454;
L_08996454:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08996460;
L_08996460:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089965E4; }
    goto L_08996468;
L_08996468:;
    goto L_0899646C;
L_0899646C:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;vr64=d0;}
    {float s0=v[112];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08996500; }
    goto L_08996490;
L_08996490:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089964DC; }
    goto L_089964CC;
L_089964CC:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_089964DC;
L_089964DC:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08996520; }
    goto L_089964EC;
L_089964EC:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08996520; }
    goto L_089964FC;
L_089964FC:;
    goto L_08996500;
L_08996500:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08996520; }
    goto L_08996514;
L_08996514:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08996520;
L_08996520:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089965E4; }
    goto L_08996528;
L_08996528:;
    goto L_0899652C;
L_0899652C:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;vr64=d0;}
    {float s0=v[121];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089965C0; }
    goto L_08996550;
L_08996550:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899659C; }
    goto L_0899658C;
L_0899658C:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_0899659C;
L_0899659C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089965E0; }
    goto L_089965AC;
L_089965AC:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_089965E0; }
    goto L_089965BC;
L_089965BC:;
    goto L_089965C0;
L_089965C0:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089965E0; }
    goto L_089965D4;
L_089965D4:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_089965E0;
L_089965E0:;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    goto L_089965E4;
L_089965E4:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(48),FBITS(v[96]));}
    {ST32(sp+(52),FBITS(v[97]));}
    {ST32(sp+(56),FBITS(v[98]));}
    { u64 r_ = func_089DD9AC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089965F8;
L_089965F8:;
    cnd_ = v0 == 0;
    a0 = LD32(s2+92);
    if (cnd_) { goto L_08997248; }
    goto L_08996600;
L_08996600:;
    a1 = 3;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    s0 = D_08B285A0 - (-31328);
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08996614;
L_08996614:;
    f1 = BITSF(LD32(s0-31328));
    a0 = LD32(s2+92);
    a1 = 2;
    f0 = f0 * f1;
    v1 = LD32(a0);
    f0 = f0 * f22;
    v0 = LD32(v1+8);
    t_ = v0;
    ST32(sp+212, FBITS(f0));
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08996638;
L_08996638:;
    f1 = BITSF(LD32(s0-31328));
    f0 = f0 * f1;
    f0 = f0 * f21;
    cnd_ = s1 == 0;
    ST32(sp+216, FBITS(f0));
    if (cnd_) { goto L_0899722C; }
    goto L_0899664C;
L_0899664C:;
    v0 = LD32(s2+520);
    goto L_08996650;
L_08996650:;
    v0 = v0 & 0x1000;
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(s7-6268));
    if (cnd_) { goto L_08996660; }
    goto L_0899665C;
L_0899665C:;
    f0 = BITSF(LD32(s2+384));
    goto L_08996660;
L_08996660:;
    f2 = BITSF(LD32(sp+212));
    f3 = BITSF(LD32(sp+216));
    f1 = BITSF(LD32(sp+48));
    f2 = f2 * f0;
    f3 = f3 * f0;
    f0 = BITSF(LD32(sp+52));
    ST32(sp+56, 0);
    f1 = f1 + f2;
    f0 = f0 + f3;
    ST32(sp+48, FBITS(f1));
    goto L_08996688;
L_08996688:;
    a0 = sp + 48;
    a1 = sp + 228;
    a2 = sp + 232;
    ST32(sp+52, FBITS(f0));
    f0 = func_0899F814(a0, a1, a2);
    goto L_0899669C;
L_0899669C:;
    v0 = D_08AEE79C - (-6244);
    f20 = BITSF(LD32(v0-6244));
    f22 = BITSF(LD32(s5-6264));
    f12 = BITSF(LD32(sp+52));
    ST32(sp+48, FBITS(f0));
    f21 = f22 - f20;
    f13 = f21;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089966BC;
L_089966BC:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f1 = f0 + f21;
    if (cnd_) { goto L_089966E0; }
    goto L_089966CC;
L_089966CC:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_089966E0; }
    goto L_089966DC;
L_089966DC:;
    f1 = f0;
    goto L_089966E0;
L_089966E0:;
    ST32(sp+52, FBITS(f1));
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
    {ST32(s2+(276),FBITS(v[96]));}
    {ST32(s2+(280),FBITS(v[97]));}
    {ST32(s2+(284),FBITS(v[98]));}
    {ST32(s2+(288),FBITS(v[100]));}
    {ST32(s2+(292),FBITS(v[101]));}
    {ST32(s2+(296),FBITS(v[102]));}
    {ST32(s2+(300),FBITS(v[104]));}
    {ST32(s2+(304),FBITS(v[105]));}
    {ST32(s2+(308),FBITS(v[106]));}
    goto L_08996774;
L_08996774:;
    a0 = LD32(s2+92);
    f20 = BITSF(0);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 7;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899678C;
L_0899678C:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    v0 = LD32(s2+520);
    if (cnd_) { goto L_089967B0; }
    goto L_0899679C;
L_0899679C:;
    v1 = v0 & 0x1;
    v1 = v1 ^ 0x1;
    v0 = (v0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    ST32(s2+520, v0);
    v0 = LD32(s2+520);
    goto L_089967B0;
L_089967B0:;
    a2 = LD32(s2+92);
    a1 = 8;
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST32(s2+520, v0);
    v0 = LD32(a2);
    v1 = LD32(v0+8);
    t_ = v1;
    a0 = a2 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089967D0;
L_089967D0:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    a0 = LD32(s2+520);
    if (cnd_) { goto L_08996828; }
    goto L_089967E0;
L_089967E0:;
    v1 = LD32(s2+236);
    v0 = LD_U8(v1+120);
    v0 = v0 << 2;
    v0 = v0 + v1;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08996828; }
    goto L_089967FC;
L_089967FC:;
    v0 = (a0 >> 15) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s2); goto L_0899719C; }
    goto L_08996808;
L_08996808:;
    v0 = LD_U8(s2+196);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = (a0 & ~(0x1u << 3)) | ((0 & 0x1) << 3); goto L_0899682C; }
    goto L_08996814;
L_08996814:;
    v1 = LD32(s0+20);
    v0 = 0xf4a20000u;
    v0 = v0 | 0xac2b;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(s2); goto L_0899719C; }
    goto L_08996828;
L_08996828:;
    a0 = (a0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    goto L_0899682C;
L_0899682C:;
    ST32(s2+520, a0);
    a0 = LD32(s2+92);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 9;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08996844;
L_08996844:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_089968E4; }
    goto L_08996858;
L_08996858:;
    v1 = LD32(s2+236);
    v0 = LD_U8(v1+121);
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0+48);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089968E4; }
    goto L_08996874;
L_08996874:;
    v1 = LD32(s2+520);
    v0 = (v1 >> 15) & 0x1;
    cnd_ = v0 != 0;
    v0 = v1 | 0x8;
    if (cnd_) { goto L_089968E4; }
    goto L_08996884;
L_08996884:;
    ST32(s2+520, v0);
    v1 = LD32(a0+80);
    cnd_ = (s32)v1 <= 0;
    if (cnd_) { v1 = LD32(a0); goto L_089968C0; }
    goto L_08996894;
L_08996894:;
    v0 = LD32(a0+100);
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { v1 = LD32(a0); goto L_089968C0; }
    goto L_089968A0;
L_089968A0:;
    v0 = LD32(a0+88);
    cnd_ = (s32)v0 <= 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08997178; }
    goto L_089968AC;
L_089968AC:;
    v1 = 1;
    goto L_089968B0;
L_089968B0:;
    v0 = LD32(s2+520);
    goto L_089968B4;
L_089968B4:;
    v0 = (v0 & ~(0x1u << 3)) | ((v1 & 0x1) << 3);
    ST32(s2+520, v0);
    v1 = LD32(a0);
    goto L_089968C0;
L_089968C0:;
    v0 = v1 ^ 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2+520); goto L_089968DC; }
    goto L_089968CC;
L_089968CC:;
    v0 = v1 ^ 0x6;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089968E4; }
    goto L_089968D8;
L_089968D8:;
    v0 = LD32(s2+520);
    goto L_089968DC;
L_089968DC:;
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(s2+520, v0);
    goto L_089968E4;
L_089968E4:;
    cnd_ = s4 != 0;
    if (cnd_) { a0 = LD32(s2+92); goto L_0899690C; }
    goto L_089968EC;
L_089968EC:;
    v0 = LD_U8(s2+197);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s2+92); goto L_0899713C; }
    goto L_089968F8;
L_089968F8:;
    cnd_ = s4 != 0;
    a0 = LD32(s2+92);
    if (cnd_) { goto L_0899690C; }
    goto L_08996900;
L_08996900:;
    v0 = LD_U8(s2+197);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08997100; }
    goto L_0899690C;
L_0899690C:;
    f20 = BITSF(0);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 20;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08996920;
L_08996920:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    a0 = s2 + 0;
    if (cnd_) { goto L_089970F0; }
    goto L_08996930;
L_08996930:;
    a0 = s2 + 0;
    ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;func_089DE1D4(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];});
    goto L_08996938;
L_08996938:;
    a0 = LD32(s2+92);
    a1 = 21;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    s0 = 0 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08996950;
L_08996950:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s2+520); goto L_0899699C; }
    goto L_08996960;
L_08996960:;
    v0 = LD32(sp);
    {u32 a_=sp+(272);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+4);
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+8);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    if (cnd_) { s0 = 1; goto L_08996998; }
    goto L_08996998;
L_08996998:;
    v0 = LD32(s2+520);
    goto L_0899699C;
L_0899699C:;
    v0 = (v0 & ~(0x1u << 5)) | ((s0 & 0x1) << 5);
    v1 = v0 & 0x20;
    cnd_ = v1 == 0;
    ST32(s2+520, v0);
    if (cnd_) { goto L_089969B8; }
    goto L_089969AC;
L_089969AC:;
    v0 = LD_U8(s2+195);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s2); goto L_089970DC; }
    goto L_089969B8;
L_089969B8:;
    a1 = LD32(s6-25768);
    goto L_089969BC;
L_089969BC:;
    v0 = 1;
    cnd_ = a1 == v0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0899709C; }
    goto L_089969C8;
L_089969C8:;
    v1 = LD32(s2+236);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08996A50; }
    goto L_089969D4;
L_089969D4:;
    v0 = LD_U8(v1+120);
    v0 = v0 << 2;
    v0 = v0 + v1;
    s1 = LD32(v0);
    cnd_ = s1 == 0;
    a0 = LD32(s2+96);
    if (cnd_) { goto L_08996A54; }
    goto L_089969EC;
L_089969EC:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s2+92); goto L_08996A68; }
    goto L_089969F4;
L_089969F4:;
    v0 = LD32(s1+236);
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(s7-6268));
    if (cnd_) { goto L_08997084; }
    goto L_08996A00;
L_08996A00:;
    a0 = LD32(s2+92);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 18;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08996A14;
L_08996A14:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { a0 = LD32(s2+96); goto L_08996A54; }
    goto L_08996A28;
L_08996A28:;
    cnd_ = s0 != 0;
    if (cnd_) { a0 = LD32(s2+96); goto L_08996A54; }
    goto L_08996A30;
L_08996A30:;
    v0 = LD32(s2+520);
    v0 = v0 & 0x800;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s2+96); goto L_08996A54; }
    goto L_08996A40;
L_08996A40:;
    v1 = LD32(s2+436);
    v0 = 999;
    cnd_ = v1 == v0;
    if (cnd_) { a2 = LD32(s1+256); goto L_08997000; }
    goto L_08996A50;
L_08996A50:;
    a0 = LD32(s2+96);
    goto L_08996A54;
L_08996A54:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s2+92); goto L_08996A68; }
    goto L_08996A5C;
L_08996A5C:;
    cnd_ = s3 != 0;
    if (cnd_) { s0 = LD32(a0+8); goto L_08996C04; }
    goto L_08996A64;
L_08996A64:;
    a0 = LD32(s2+92);
    goto L_08996A68;
L_08996A68:;
    a1 = 25;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    s0 = 0 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08996A7C;
L_08996A7C:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s2+520); goto L_08996AC4; }
    goto L_08996A90;
L_08996A90:;
    v0 = LD32(s2+436);
    v1 = 999;
    cnd_ = v0 == v1;
    if (cnd_) { v0 = LD32(s2+520); goto L_08996AC4; }
    goto L_08996AA0;
L_08996AA0:;
    v0 = LD32(s2+432);
    cnd_ = v0 == v1;
    if (cnd_) { s0 = 1; goto L_08996AC0; }
    goto L_08996AAC;
L_08996AAC:;
    v0 = LD32(s2+428);
    v0 = v0 < 0x4u;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2+520); goto L_08996AC4; }
    goto L_08996ABC;
L_08996ABC:;
    s0 = 1;
    goto L_08996AC0;
L_08996AC0:;
    v0 = LD32(s2+520);
    goto L_08996AC4;
L_08996AC4:;
    v0 = (v0 & ~(0x1u << 9)) | ((s0 & 0x1) << 9);
    ST32(s2+520, v0);
    a0 = LD32(s2+92);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 24;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08996AE0;
L_08996AE0:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(s2+440); goto L_08996B24; }
    goto L_08996AF4;
L_08996AF4:;
    v0 = LD32(s2+432);
    v1 = 999;
    cnd_ = v0 == v1;
    if (cnd_) { v1 = LD32(s2+440); goto L_08996B24; }
    goto L_08996B04;
L_08996B04:;
    v0 = LD32(s2+428);
    v0 = v0 < 0x4u;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s2+440); goto L_08996B24; }
    goto L_08996B14;
L_08996B14:;
    v0 = LD32(s2+436);
    cnd_ = v0 == v1;
    if (cnd_) { goto L_08996BD0; }
    goto L_08996B20;
L_08996B20:;
    v1 = LD32(s2+440);
    goto L_08996B24;
L_08996B24:;
    v0 = 999;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = LD32(s2+92); goto L_089953D0; }
    goto L_08996B30;
L_08996B30:;
    v1 = LD32(s2+520);
    v0 = (v1 >> 10) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s2+92); goto L_089953D0; }
    goto L_08996B40;
L_08996B40:;
    v0 = (v1 >> 11) & 0x1;
    cnd_ = v0 != 0;
    a0 = LD32(s2+92);
    if (cnd_) { goto L_089953D0; }
    goto L_08996B4C;
L_08996B4C:;
    v0 = LD_U8(s2+196);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089953D0; }
    goto L_08996B58;
L_08996B58:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 25;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08996B68;
L_08996B68:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { a0 = LD32(s2+92); goto L_089953D0; }
    goto L_08996B7C;
L_08996B7C:;
    func_08A274F0();
    goto L_08996B84;
L_08996B84:;
    a0 = 0x820c0000u;
    a0 = a0 | 0x81de;
    a1 = 1;
    a2 = 1;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_0888ADB0(a0, a1, a2); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08996B98;
L_08996B98:;
    v1 = LD32(s2+84);
    cnd_ = v1 == 0;
    f0 = BITSF(LD32(s7-6268));
    if (cnd_) { goto L_08996BB4; }
    goto L_08996BA4;
L_08996BA4:;
    v0 = LD_U8(v1+11);
    cnd_ = v0 != 0;
    if (cnd_) { ST8(v1+11, 0); goto L_08996BB4; }
    goto L_08996BB0;
L_08996BB0:;
    f0 = BITSF(LD32(s7-6268));
    goto L_08996BB4;
L_08996BB4:;
    v0 = LD32(s2+96);
    a1 = 0 + 0;
    ST32(v0+104, FBITS(f0));
    a0 = LD32(s2+96);
    { u64 r_ = func_0896D8D0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08996BC8;
L_08996BC8:;
    a0 = LD32(s2+92);
    goto L_089953D0;
L_08996BD0:;
    a0 = s2 + 0;
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08996BD8;
L_08996BD8:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s2+440); goto L_08996B24; }
    goto L_08996BE0;
L_08996BE0:;
    a1 = 4;
    a2 = 0 + 0;
    a0 = 0x8040;
    a3 = 0 + 0;
    { u64 r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08996BF4;
L_08996BF4:;
    v1 = LD32(s2);
    a2 = LD32(s2+432);
    a1 = v0 + 0;
    goto L_0899607C;
L_08996C04:;
    s0 = s0 ^ 0x1;
    s0 = 0 < s0;
    a1 = s0 + 0;
    { u64 r_ = func_0896D8D0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08996C14;
L_08996C14:;
    cnd_ = s0 != 0;
    if (cnd_) { a0 = LD32(s2+92); goto L_08996A68; }
    goto L_08996C1C;
L_08996C1C:;
    {v[112]=BITSF(LD32(s2+(276)));}
    {v[113]=BITSF(LD32(s2+(280)));}
    {v[114]=BITSF(LD32(s2+(284)));}
    {v[116]=BITSF(LD32(s2+(288)));}
    {v[117]=BITSF(LD32(s2+(292)));}
    {v[118]=BITSF(LD32(s2+(296)));}
    {v[120]=BITSF(LD32(s2+(300)));}
    {v[121]=BITSF(LD32(s2+(304)));}
    {v[122]=BITSF(LD32(s2+(308)));}
    {v[124]=1.57079632679f;}
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08996E9C; }
    goto L_08996C58;
L_08996C58:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08996DDC; }
    goto L_08996C68;
L_08996C68:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;vr64=d0;}
    {float s0=v[122];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08996D00; }
    goto L_08996C90;
L_08996C90:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08996CDC; }
    goto L_08996CCC;
L_08996CCC:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08996CDC;
L_08996CDC:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08996D20; }
    goto L_08996CEC;
L_08996CEC:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08996D20; }
    goto L_08996CFC;
L_08996CFC:;
    goto L_08996D00;
L_08996D00:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08996D20; }
    goto L_08996D14;
L_08996D14:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08996D20;
L_08996D20:;
    {float s0=vr78;float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;vr64=d0;}
    {float s0=v[117];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08996DB0; }
    goto L_08996D40;
L_08996D40:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08996D8C; }
    goto L_08996D7C;
L_08996D7C:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08996D8C;
L_08996D8C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08996DD0; }
    goto L_08996D9C;
L_08996D9C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08996DD0; }
    goto L_08996DAC;
L_08996DAC:;
    goto L_08996DB0;
L_08996DB0:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08996DD0; }
    goto L_08996DC4;
L_08996DC4:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08996DD0;
L_08996DD0:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08996F54; }
    goto L_08996DD8;
L_08996DD8:;
    goto L_08996DDC;
L_08996DDC:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;vr64=d0;}
    {float s0=v[112];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08996E70; }
    goto L_08996E00;
L_08996E00:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08996E4C; }
    goto L_08996E3C;
L_08996E3C:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08996E4C;
L_08996E4C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08996E90; }
    goto L_08996E5C;
L_08996E5C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08996E90; }
    goto L_08996E6C;
L_08996E6C:;
    goto L_08996E70;
L_08996E70:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08996E90; }
    goto L_08996E84;
L_08996E84:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08996E90;
L_08996E90:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08996F54; }
    goto L_08996E98;
L_08996E98:;
    goto L_08996E9C;
L_08996E9C:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;vr64=d0;}
    {float s0=v[121];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08996F30; }
    goto L_08996EC0;
L_08996EC0:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08996F0C; }
    goto L_08996EFC;
L_08996EFC:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08996F0C;
L_08996F0C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08996F50; }
    goto L_08996F1C;
L_08996F1C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08996F50; }
    goto L_08996F2C;
L_08996F2C:;
    goto L_08996F30;
L_08996F30:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08996F50; }
    goto L_08996F44;
L_08996F44:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08996F50;
L_08996F50:;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    goto L_08996F54;
L_08996F54:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(48),FBITS(v[96]));}
    {ST32(sp+(52),FBITS(v[97]));}
    {ST32(sp+(56),FBITS(v[98]));}
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
    {ST32(s2+(276),FBITS(v[96]));}
    {ST32(s2+(280),FBITS(v[97]));}
    {ST32(s2+(284),FBITS(v[98]));}
    {ST32(s2+(288),FBITS(v[100]));}
    {ST32(s2+(292),FBITS(v[101]));}
    {ST32(s2+(296),FBITS(v[102]));}
    {ST32(s2+(300),FBITS(v[104]));}
    {ST32(s2+(304),FBITS(v[105]));}
    {ST32(s2+(308),FBITS(v[106]));}
    a0 = LD32(s2+92);
    goto L_08996A68;
L_08997000:;
    cnd_ = a2 != 0;
    if (cnd_) { a1 = LD32(s1+236); goto L_08997028; }
    goto L_08997008;
L_08997008:;
    v1 = LD32(s2+96);
    v0 = LD32(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1+236); goto L_08997028; }
    goto L_08997018;
L_08997018:;
    f0 = BITSF(LD32(s1+240));
    s3 = 1;
    ST32(v1+104, FBITS(f0));
    goto L_08996A50;
L_08997028:;
    v0 = a1 - 1;
    cnd_ = a2 == v0;
    if (cnd_) { v0 = LD32(s2+96); goto L_08997060; }
    goto L_08997034;
L_08997034:;
    v0 = a2 + 1;
    goto L_08997038;
L_08997038:;
    { u32 x_ = v0, y_ = a1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    s3 = 0 + 0;
    v1 = hi;
    ST32(s1+256, v1);
    v1 = v1 << 2;
    v1 = v1 + s1;
    f0 = BITSF(LD32(v1+240));
    v0 = LD32(s2+96);
    goto L_08997058;
L_08997058:;
    ST32(v0+104, FBITS(f0));
    goto L_08996A50;
L_08997060:;
    v1 = 1;
    a0 = LD32(v0+8);
    cnd_ = a0 != v1;
    if (cnd_) { v0 = a2 + 1; goto L_08997038; }
    goto L_08997070;
L_08997070:;
    ST32(s1+256, 0);
    s3 = 1;
    v0 = LD32(s2+96);
    f0 = BITSF(LD32(s7-6268));
    goto L_08997058;
L_08997084:;
    a1 = 0 + 0;
    ST32(a0+104, FBITS(f0));
    a0 = LD32(s2+96);
    { u64 r_ = func_0896D8D0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08997094;
L_08997094:;
    a0 = LD32(s2+96);
    goto L_08996A54;
L_0899709C:;
    v0 = LD32(s2+436);
    a0 = LD32(s2+432);
    v1 = 999;
    v0 = v0 ^ 0x3e7;
    cnd_ = a0 == v1;
    s0 = 0 < v0;
    if (cnd_) { goto L_089970C0; }
    goto L_089970B4;
L_089970B4:;
    v0 = LD32(s2+428);
    v0 = v0 < 0x4u;
    if (v0 == 0) s0 = a1;
    goto L_089970C0;
L_089970C0:;
    v0 = LD32(s2+440);
    a0 = s2 + 0;
    v0 = v0 ^ 0x3e7;
    if (v0 != 0) s0 = a1;
    { u64 r_ = func_089DD9AC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089970D4;
L_089970D4:;
    if (v0 != 0) s0 = 0;
    goto L_089969C8;
L_089970DC:;
    v0 = LD32(v1+344);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089970E8;
L_089970E8:;
    a1 = LD32(s6-25768);
    goto L_089969BC;
L_089970F0:;
    a1 = 1;
    ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;func_089DD9CC(a0, a1, 0, 0, 0); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];});
    goto L_089970F8;
L_089970F8:;
    goto L_08996930;
L_08997100:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 23;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08997110;
L_08997110:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { a0 = LD32(s2+92); goto L_0899690C; }
    goto L_08997124;
L_08997124:;
    a0 = LD32(s2+236);
    a1 = s2 + 0;
    a2 = (u32)-1;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_08985584(a0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08997134;
L_08997134:;
    a0 = LD32(s2+92);
    goto L_0899690C;
L_0899713C:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 22;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899714C;
L_0899714C:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_089968F8; }
    goto L_08997160;
L_08997160:;
    a0 = LD32(s2+236);
    a1 = s2 + 0;
    a2 = (u32)-1;
    ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;func_089852FC(a0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];});
    goto L_08997170;
L_08997170:;
    goto L_089968F8;
L_08997178:;
    v0 = LD32(a0+84);
    cnd_ = (s32)v0 > 0;
    if (cnd_) { v1 = 1; goto L_089968B0; }
    goto L_08997184;
L_08997184:;
    v0 = LD32(a0+364);
    v0 = (v0 >> 7) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2+520); goto L_089968B4; }
    goto L_08997194;
L_08997194:;
    v1 = 1;
    goto L_089968B0;
L_0899719C:;
    a0 = s2 + 0;
    v0 = LD32(v1+412);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089971AC;
L_089971AC:;
    v1 = LD32(s2+520);
    a0 = v1 | 0x4;
    ST32(s2+520, a0);
    v0 = LD32(s0+80);
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { v1 = LD32(s0); goto L_089971F0; }
    goto L_089971C4;
L_089971C4:;
    v0 = LD32(s0+100);
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { v1 = LD32(s0); goto L_089971F0; }
    goto L_089971D0;
L_089971D0:;
    v0 = LD32(s0+88);
    cnd_ = (s32)v0 <= 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0899721C; }
    goto L_089971DC;
L_089971DC:;
    v1 = v1 ^ 0x1;
    v0 = a0 + 0;
    v0 = (v0 & ~(0x1u << 2)) | ((v1 & 0x1) << 2);
    ST32(s2+520, v0);
    v1 = LD32(s0);
    goto L_089971F0;
L_089971F0:;
    v0 = v1 ^ 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2+520); goto L_0899720C; }
    goto L_089971FC;
L_089971FC:;
    v0 = v1 ^ 0x6;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s2+520); goto L_08996828; }
    goto L_08997208;
L_08997208:;
    v0 = LD32(s2+520);
    goto L_0899720C;
L_0899720C:;
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    a0 = v0 + 0;
    ST32(s2+520, v0);
    goto L_08996828;
L_0899721C:;
    v0 = LD32(s0+84);
    v0 = (s32)v1 < (s32)v0;
    v1 = v0 < 0x1u;
    goto L_089971DC;
L_0899722C:;
    a1 = LD32(sp+208);
    a0 = s2 + 0;
    a2 = sp + 212;
    a3 = sp + 216;
    ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;func_089DAF7C(a0, a1, a2, a3); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];});
    goto L_08997240;
L_08997240:;
    v0 = LD32(s2+520);
    goto L_08996650;
L_08997248:;
    a1 = 1;
    s0 = D_08B285A0 - (-31328);
    v1 = LD32(a0);
    f20 = BITSF(0);
    v0 = LD32(v1+8);
    t_ = v0;
    s3 = 1;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08997264;
L_08997264:;
    f1 = BITSF(LD32(s0-31328));
    a0 = LD32(s2+92);
    a1 = 0 + 0;
    f0 = f0 * f1;
    v1 = LD32(a0);
    f0 = f0 * f22;
    v0 = LD32(v1+8);
    t_ = v0;
    ST32(sp+220, FBITS(f0));
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08997288;
L_08997288:;
    f1 = BITSF(LD32(s0-31328));
    f2 = BITSF(LD32(sp+220));
    f0 = f0 * f1;
    fcc = FCMP(f2, f20, 2);
    f0 = f0 * f21;
    cnd_ = fcc;
    ST32(sp+224, FBITS(f0));
    if (cnd_) { goto L_089972A8; }
    goto L_089972A4;
L_089972A4:;
    s3 = 0 + 0;
    goto L_089972A8;
L_089972A8:;
    cnd_ = s1 == 0;
    a1 = LD32(sp+208);
    if (cnd_) { goto L_0899731C; }
    goto L_089972B0;
L_089972B0:;
    cnd_ = s3 == 0;
    f2 = BITSF(LD32(sp+220));
    if (cnd_) { goto L_089972CC; }
    goto L_089972B8;
L_089972B8:;
    f0 = BITSF(LD32(s2+508));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    f12 = BITSF(LD32(sp+48));
    if (cnd_) { goto L_08997308; }
    goto L_089972CC;
L_089972CC:;
    f0 = BITSF(0);
    fcc = FCMP(f2, f0, 2);
    cnd_ = fcc;
    if (cnd_) { f0 = BITSF(LD32(sp+52)); goto L_089972F8; }
    goto L_089972E0;
L_089972E0:;
    f0 = BITSF(LD32(sp+48));
    f1 = BITSF(LD32(s7-6268));
    f0 = f0 + f2;
    ST32(s2+508, FBITS(f1));
    ST32(sp+48, FBITS(f0));
    goto L_089972F4;
L_089972F4:;
    f0 = BITSF(LD32(sp+52));
    goto L_089972F8;
L_089972F8:;
    f1 = BITSF(LD32(sp+224));
    ST32(sp+56, 0);
    f0 = f0 + f1;
    goto L_08996688;
L_08997308:;
    f13 = f22;
    a0 = s2 + 0;
    f0 = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_0899C694(a0, 0, 0, 0, 0, 0, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; });
    goto L_08997314;
L_08997314:;
    ST32(sp+48, FBITS(f0));
    goto L_089972F4;
L_0899731C:;
    a0 = s2 + 0;
    a2 = sp + 220;
    a3 = sp + 224;
    ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;func_089DAF7C(a0, a1, a2, a3); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];});
    goto L_0899732C;
L_0899732C:;
    goto L_089972B0;
L_08997334:;
    a1 = LD32(sp+208);
    a2 = s2 + 276;
    a0 = s2 + 0;
    v0 = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_089DB5B0(a0, a1, a2); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; });
    goto L_08997344;
L_08997344:;
    s1 = v0 + 0;
    goto L_089962A8;
L_0899734C:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    v0 = LD32(v1+388);
    t_ = v0;
    s3 = 0 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08997360;
L_08997360:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s2); goto L_08997574; }
    goto L_08997368;
L_08997368:;
    v0 = LD32(s0);
    f12 = BITSF(LD32(s2+376));
    s1 = sp + 16;
    a3 = LD32(v0+56);
    a0 = s0 + 0;
    a2 = s3 + 0;
    t_ = a3;
    a1 = s1 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08997388;
L_08997388:;
    v1 = D_08B159FC - (23036);
    v0 = LD32(v1+23036);
    f2 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(s2+376));
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f1 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+24));
    fcc = FCMP(f24, f4, 14);
    f1 = f1 - f3;
    f0 = f0 - f5;
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f1));
    cnd_ = !fcc;
    ST32(sp+72, FBITS(f0));
    if (cnd_) { goto L_089973F4; }
    goto L_089973D8;
L_089973D8:;
    a0 = s2 + 276;
    a1 = s1 + 0;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089973E4;
L_089973E4:;
    f0 = BITSF(LD32(s7-6268));
    goto L_089973E8;
L_089973E8:;
    s6 = D_08C29B58 - (-25768);
    ST32(s2+508, FBITS(f0));
    goto L_08996774;
L_089973F4:;
    s0 = sp + 80;
    a1 = s1 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08997404;
L_08997404:;
    a0 = sp + 128;
    a1 = s0 + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08997410;
L_08997410:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f24, 12);
    cnd_ = !fcc;
    f1 = BITSF(LD32(s7-6268));
    if (cnd_) { goto L_0899742C; }
    goto L_08997424;
L_08997424:;
    f0 = BITSF(LD32(s2+376));
    f1 = f0 / f24;
    goto L_0899742C;
L_0899742C:;
    v0 = D_08AEE7A0 - (-6240);
    f0 = BITSF(LD32(v0-6240));
    v1 = FBITS(f1);
    a2 = FBITS(f0);
    {v[112]=BITSF(LD32(s2+(404)));}
    {v[113]=BITSF(LD32(s2+(408)));}
    {v[114]=BITSF(LD32(s2+(412)));}
    {v[115]=BITSF(LD32(s2+(416)));}
    {v[116]=BITSF(LD32(sp+(128)));}
    {v[117]=BITSF(LD32(sp+(132)));}
    {v[118]=BITSF(LD32(sp+(136)));}
    {v[119]=BITSF(LD32(sp+(140)));}
    {v[124]=BITSF(v1);}
    {v[127]=BITSF(a2);}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[116];float t1=v[117];float t2=v[118];float t3=v[119];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[96]=sum;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[0];v[98]=(float)1;}
    {float s0=v[97];float t0=v[96];float d0=(s0>=t0?1.f:0.f);v[99]=d0;}
    {float s0=v[96];float d0=fabsf(s0);v[96]=d0;}
    {float s0=v[98];float t0=v[124];float d0=s0-t0;v[125]=d0;}
    {float s0=v[96];float t0=v[127];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089974A8; }
    goto L_08997488;
L_08997488:;
    {float s0=v[96];float d0=asinf(s0)*0.63661977236f;v[100]=d0;}
    {float s0=v[98];float t0=v[100];float d0=s0-t0;v[100]=d0;}
    {float s0=v[100];float d0=sinf(s0*1.57079632679f);v[101]=d0;}
    {float s0=v[124];float s1=v[125];float t0=v[100];v[124]=s0*t0;v[125]=s1*t0;}
    {float s0=v[101];float d0=1.0f/s0;v[102]=d0;}
    {float s0=v[124];float s1=v[125];float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=v[102];v[124]=s0*t0;v[125]=s1*t0;}
    goto L_089974A8;
L_089974A8:;
    {float s0=v[99];float t0=v[99];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089974BC; }
    goto L_089974B4;
L_089974B4:;
    {float s0=v[124];float d0=-s0;v[124]=d0;}
    goto L_089974BC;
L_089974BC:;
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[125];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float t0=v[124];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float t0=v[84];float t1=v[85];float t2=v[86];float t3=v[87];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[120];float t1=v[121];float t2=v[122];float t3=v[123];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[92]=sum;}
    {float s0=v[92];float t0=v[92];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089974E4; }
    goto L_089974D8;
L_089974D8:;
    {float s0=v[92];float d0=1.0f/sqrtf(s0);v[92]=d0;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[92];v[120]=s0*t0;v[121]=s1*t0;v[122]=s2*t0;v[123]=s3*t0;}
    goto L_089974E4;
L_089974E4:;
    {ST32(sp+(144),FBITS(v[120]));}
    {ST32(sp+(148),FBITS(v[121]));}
    {ST32(sp+(152),FBITS(v[122]));}
    {ST32(sp+(156),FBITS(v[123]));}
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
    {ST32(s2+(276),FBITS(v[96]));}
    {ST32(s2+(280),FBITS(v[97]));}
    {ST32(s2+(284),FBITS(v[98]));}
    {ST32(s2+(288),FBITS(v[100]));}
    {ST32(s2+(292),FBITS(v[101]));}
    {ST32(s2+(296),FBITS(v[102]));}
    {ST32(s2+(300),FBITS(v[104]));}
    {ST32(s2+(304),FBITS(v[105]));}
    {ST32(s2+(308),FBITS(v[106]));}
    f0 = BITSF(LD32(s7-6268));
    goto L_089973E8;
L_08997574:;
    v0 = LD32(v1+388);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08997580;
L_08997580:;
    v1 = LD_U8(v0+324);
    s3 = 0 < v1;
    goto L_08997368;
L_0899758C:;
    {v[112]=BITSF(LD32(a0+(84)));}
    {v[113]=BITSF(LD32(a0+(88)));}
    {v[114]=BITSF(LD32(a0+(92)));}
    {v[116]=BITSF(LD32(a0+(96)));}
    {v[117]=BITSF(LD32(a0+(100)));}
    {v[118]=BITSF(LD32(a0+(104)));}
    {v[120]=BITSF(LD32(a0+(108)));}
    {v[121]=BITSF(LD32(a0+(112)));}
    {v[122]=BITSF(LD32(a0+(116)));}
    {v[124]=1.57079632679f;}
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899780C; }
    goto L_089975C8;
L_089975C8:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899774C; }
    goto L_089975D8;
L_089975D8:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;vr64=d0;}
    {float s0=v[122];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08997670; }
    goto L_08997600;
L_08997600:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899764C; }
    goto L_0899763C;
L_0899763C:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_0899764C;
L_0899764C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08997690; }
    goto L_0899765C;
L_0899765C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08997690; }
    goto L_0899766C;
L_0899766C:;
    goto L_08997670;
L_08997670:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08997690; }
    goto L_08997684;
L_08997684:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08997690;
L_08997690:;
    {float s0=vr78;float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;vr64=d0;}
    {float s0=v[117];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08997720; }
    goto L_089976B0;
L_089976B0:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089976FC; }
    goto L_089976EC;
L_089976EC:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_089976FC;
L_089976FC:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08997740; }
    goto L_0899770C;
L_0899770C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08997740; }
    goto L_0899771C;
L_0899771C:;
    goto L_08997720;
L_08997720:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08997740; }
    goto L_08997734;
L_08997734:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08997740;
L_08997740:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089978C4; }
    goto L_08997748;
L_08997748:;
    goto L_0899774C;
L_0899774C:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;vr64=d0;}
    {float s0=v[112];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089977E0; }
    goto L_08997770;
L_08997770:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089977BC; }
    goto L_089977AC;
L_089977AC:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_089977BC;
L_089977BC:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08997800; }
    goto L_089977CC;
L_089977CC:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08997800; }
    goto L_089977DC;
L_089977DC:;
    goto L_089977E0;
L_089977E0:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08997800; }
    goto L_089977F4;
L_089977F4:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08997800;
L_08997800:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089978C4; }
    goto L_08997808;
L_08997808:;
    goto L_0899780C;
L_0899780C:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;vr64=d0;}
    {float s0=v[121];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089978A0; }
    goto L_08997830;
L_08997830:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899787C; }
    goto L_0899786C;
L_0899786C:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_0899787C;
L_0899787C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089978C0; }
    goto L_0899788C;
L_0899788C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_089978C0; }
    goto L_0899789C;
L_0899789C:;
    goto L_089978A0;
L_089978A0:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089978C0; }
    goto L_089978B4;
L_089978B4:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_089978C0;
L_089978C0:;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    goto L_089978C4;
L_089978C4:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(32),FBITS(v[96]));}
    {ST32(sp+(36),FBITS(v[97]));}
    {ST32(sp+(40),FBITS(v[98]));}
    {v[112]=BITSF(LD32(s2+(276)));}
    {v[113]=BITSF(LD32(s2+(280)));}
    {v[114]=BITSF(LD32(s2+(284)));}
    {v[116]=BITSF(LD32(s2+(288)));}
    {v[117]=BITSF(LD32(s2+(292)));}
    {v[118]=BITSF(LD32(s2+(296)));}
    {v[120]=BITSF(LD32(s2+(300)));}
    {v[121]=BITSF(LD32(s2+(304)));}
    {v[122]=BITSF(LD32(s2+(308)));}
    {v[124]=1.57079632679f;}
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08997B54; }
    goto L_08997910;
L_08997910:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08997A94; }
    goto L_08997920;
L_08997920:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;vr64=d0;}
    {float s0=v[122];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089979B8; }
    goto L_08997948;
L_08997948:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08997994; }
    goto L_08997984;
L_08997984:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08997994;
L_08997994:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089979D8; }
    goto L_089979A4;
L_089979A4:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_089979D8; }
    goto L_089979B4;
L_089979B4:;
    goto L_089979B8;
L_089979B8:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089979D8; }
    goto L_089979CC;
L_089979CC:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_089979D8;
L_089979D8:;
    {float s0=vr78;float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;vr64=d0;}
    {float s0=v[117];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08997A68; }
    goto L_089979F8;
L_089979F8:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08997A44; }
    goto L_08997A34;
L_08997A34:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08997A44;
L_08997A44:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08997A88; }
    goto L_08997A54;
L_08997A54:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08997A88; }
    goto L_08997A64;
L_08997A64:;
    goto L_08997A68;
L_08997A68:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08997A88; }
    goto L_08997A7C;
L_08997A7C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08997A88;
L_08997A88:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08997C0C; }
    goto L_08997A90;
L_08997A90:;
    goto L_08997A94;
L_08997A94:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;vr64=d0;}
    {float s0=v[112];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08997B28; }
    goto L_08997AB8;
L_08997AB8:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08997B04; }
    goto L_08997AF4;
L_08997AF4:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08997B04;
L_08997B04:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08997B48; }
    goto L_08997B14;
L_08997B14:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08997B48; }
    goto L_08997B24;
L_08997B24:;
    goto L_08997B28;
L_08997B28:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08997B48; }
    goto L_08997B3C;
L_08997B3C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08997B48;
L_08997B48:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08997C0C; }
    goto L_08997B50;
L_08997B50:;
    goto L_08997B54;
L_08997B54:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;vr64=d0;}
    {float s0=v[121];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08997BE8; }
    goto L_08997B78;
L_08997B78:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08997BC4; }
    goto L_08997BB4;
L_08997BB4:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08997BC4;
L_08997BC4:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08997C08; }
    goto L_08997BD4;
L_08997BD4:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08997C08; }
    goto L_08997BE4;
L_08997BE4:;
    goto L_08997BE8;
L_08997BE8:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08997C08; }
    goto L_08997BFC;
L_08997BFC:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08997C08;
L_08997C08:;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    goto L_08997C0C;
L_08997C0C:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(48),FBITS(v[96]));}
    {ST32(sp+(52),FBITS(v[97]));}
    {ST32(sp+(56),FBITS(v[98]));}
    f0 = BITSF(LD32(sp+36));
    f12 = BITSF(LD32(sp+48));
    a0 = s2 + 0;
    f13 = f22;
    ST32(sp+52, FBITS(f0));
    f0 = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_0899C694(a0, 0, 0, 0, 0, 0, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; });
    goto L_08997C34;
L_08997C34:;
    f0 = BITSF(LD32(sp+48));
    f1 = BITSF(LD32(sp+228));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    v0 = D_08AEE79C - (-6244);
    if (cnd_) { goto L_08997C64; }
    goto L_08997C4C;
L_08997C4C:;
    f1 = BITSF(LD32(sp+232));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_08997C64; }
    goto L_08997C60;
L_08997C60:;
    v0 = D_08AEE79C - (-6244);
    goto L_08997C64;
L_08997C64:;
    f20 = BITSF(LD32(v0-6244));
    f25 = BITSF(LD32(s5-6264));
    f12 = BITSF(LD32(sp+52));
    ST32(sp+48, FBITS(f1));
    f23 = f25 - f20;
    f13 = f23;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08997C80;
L_08997C80:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f1 = f0 + f23;
    if (cnd_) { goto L_08997CA4; }
    goto L_08997C90;
L_08997C90:;
    fcc = FCMP(f25, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f23;
    if (cnd_) { goto L_08997CA4; }
    goto L_08997CA0;
L_08997CA0:;
    f1 = f0;
    goto L_08997CA4;
L_08997CA4:;
    ST32(sp+52, FBITS(f1));
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
    {ST32(s2+(276),FBITS(v[96]));}
    {ST32(s2+(280),FBITS(v[97]));}
    {ST32(s2+(284),FBITS(v[98]));}
    {ST32(s2+(288),FBITS(v[100]));}
    {ST32(s2+(292),FBITS(v[101]));}
    {ST32(s2+(296),FBITS(v[102]));}
    {ST32(s2+(300),FBITS(v[104]));}
    {ST32(s2+(304),FBITS(v[105]));}
    {ST32(s2+(308),FBITS(v[106]));}
    goto L_08996278;
L_08997D3C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08996240; }
    goto L_08997D48;
L_08997D48:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08996244; }
    goto L_08997D54;
L_08997D54:;
    goto L_08996250;
L_08997D5C:;
    f0 = BITSF(LD32(s7-6268));
    ST32(s2+400, FBITS(f0));
    goto L_089961BC;
L_08997D68:;
    v0 = v0 - 27844;
    v0 = v0 + 64;
    v1 = D_08AEE798 - (-6248);
    f2 = BITSF(LD32(v1-6248));
    f0 = BITSF(LD32(v0+12));
    f1 = BITSF(LD32(v0+8));
    goto L_08996188;
L_08997D84:;
    a1 = LD32(v0-7468);
    goto L_08996100;
L_08997D8C:;
    a1 = LD32(v0-7472);
    goto L_089960D4;
L_08997D94:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 16;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08997DA4;
L_08997DA4:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_089960BC; }
    goto L_08997DB8;
L_08997DB8:;
    v0 = LD32(s2+520);
    v0 = v0 & 0x2000;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s2 + 404; goto L_08997E04; }
    goto L_08997DC8;
L_08997DC8:;
    a0 = s2 + 0;
    v0 = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_0899D630(a0); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; });
    goto L_08997DD0;
L_08997DD0:;
    v1 = LD32(s2+520);
    v1 = (v1 & ~(0x1u << 13)) | ((v0 & 0x1) << 13);
    ST32(s2+520, v1);
    a1 = 0 + 0;
    a0 = LD32(s2+92);
    ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;func_08A5E390(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];});
    goto L_08997DE8;
L_08997DE8:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    v0 = LD32(v1+412);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08997DFC;
L_08997DFC:;
    goto L_089960BC;
L_08997E04:;
    a1 = s2 + 276;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08997E0C;
L_08997E0C:;
    goto L_08997DC8;
L_08997E14:;
    a0 = LD32(s2+92);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 5;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08997E28;
L_08997E28:;
    v0 = LD32(s2+92);
    ST32(sp, FBITS(f0));
    a0 = v0 + 0;
    v1 = LD32(v0);
    ST32(sp+4, FBITS(f20));
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 4;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08997E48;
L_08997E48:;
    a0 = LD32(s2+520);
    f2 = f0;
    v0 = a0 & 0x1000;
    cnd_ = v0 == 0;
    ST32(sp+8, FBITS(f0));
    if (cnd_) { goto L_08997E74; }
    goto L_08997E5C;
L_08997E5C:;
    f0 = BITSF(LD32(s2+384));
    f1 = BITSF(LD32(sp));
    f2 = f2 * f0;
    f1 = f1 * f0;
    ST32(sp+8, FBITS(f2));
    ST32(sp, FBITS(f1));
    goto L_08997E74;
L_08997E74:;
    s7 = D_08AEE784 - (-6268);
    f2 = BITSF(LD32(s7-6268));
    a1 = LD32(sp);
    {u32 a_=sp+(240);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+4);
    {v[0]=BITSF(a1);}
    v1 = LD32(sp+8);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {a2=FBITS(v[0]);}
    f0 = BITSF(a2);
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = (a0 & ~(0x1u << 13)) | ((0 & 0x1) << 13); goto L_089960A8; }
    goto L_08997EB4;
L_08997EB4:;
    {u32 a_=sp+(256);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v[12]=BITSF(a1);}
    {v[13]=BITSF(v0);}
    {v[14]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { a0 = (a0 & ~(0x1u << 13)) | ((0 & 0x1) << 13); goto L_089960A8; }
    goto L_08997EE0;
L_08997EE0:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    {a2=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp+16, a2);
    ST32(sp+20, v0);
    ST32(sp+24, v1);
    ST32(sp, a2);
    ST32(sp+4, v0);
    ST32(sp+8, v1);
    goto L_089960A4;
L_08997F18:;
    a0 = 72;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_08A94784(a0, t1, t2, t3); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08997F20;
L_08997F20:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;func_08A5F02C(a0); vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];});
    goto L_08997F2C;
L_08997F2C:;
    ST32(s2+92, s0);
    goto L_08995358;
    v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;
}

rv_t func_0899530C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    rs_soldier_frame(a0);   /* native hook (tools/dc/hooks.py) */
    return func_0899530C__orig(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
}

/* 08997F34 */
rv_t func_08997F34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr64 = v[64], vr65 = v[65], vr68 = v[68], vr69 = v[69], vr76 = v[76], vr77 = v[77], vr78 = v[78];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08997F34:;
    sp = sp - 16;
    s2 = LD32(a1+24);
    cnd_ = s2 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089983CC; }
    goto L_08997F54;
L_08997F54:;
    v1 = LD32(a0);
    v0 = LD32(v1+92);
    t_ = v0;
    s0 = s2 + 24;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08997F64;
L_08997F64:;
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
    if (cnd_) { goto L_089981E4; }
    goto L_08997FA0;
L_08997FA0:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08998124; }
    goto L_08997FB0;
L_08997FB0:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;vr64=d0;}
    {float s0=v[122];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08998048; }
    goto L_08997FD8;
L_08997FD8:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=vr69;float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;vr76=d0;}
    {float s0=vr76;float t0=vr64;float d0=s0*t0;vr76=d0;}
    {float s0=vr76;float t0=vr76;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=vr76;float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08998024; }
    goto L_08998014;
L_08998014:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08998024;
L_08998024:;
    {float s0=-(vr69);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08998068; }
    goto L_08998034;
L_08998034:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08998068; }
    goto L_08998044;
L_08998044:;
    goto L_08998048;
L_08998048:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08998068; }
    goto L_0899805C;
L_0899805C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08998068;
L_08998068:;
    {float s0=vr78;float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;vr64=d0;}
    {float s0=v[117];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089980F8; }
    goto L_08998088;
L_08998088:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=vr69;float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;vr76=d0;}
    {float s0=vr76;float t0=vr64;float d0=s0*t0;vr76=d0;}
    {float s0=vr76;float t0=vr76;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=vr76;float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089980D4; }
    goto L_089980C4;
L_089980C4:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_089980D4;
L_089980D4:;
    {float s0=-(vr69);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08998118; }
    goto L_089980E4;
L_089980E4:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08998118; }
    goto L_089980F4;
L_089980F4:;
    goto L_089980F8;
L_089980F8:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08998118; }
    goto L_0899810C;
L_0899810C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08998118;
L_08998118:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_0899829C; }
    goto L_08998120;
L_08998120:;
    goto L_08998124;
L_08998124:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;vr64=d0;}
    {float s0=v[112];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089981B8; }
    goto L_08998148;
L_08998148:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=vr69;float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;vr76=d0;}
    {float s0=vr76;float t0=vr64;float d0=s0*t0;vr76=d0;}
    {float s0=vr76;float t0=vr76;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=vr76;float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08998194; }
    goto L_08998184;
L_08998184:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08998194;
L_08998194:;
    {float s0=-(vr69);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089981D8; }
    goto L_089981A4;
L_089981A4:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_089981D8; }
    goto L_089981B4;
L_089981B4:;
    goto L_089981B8;
L_089981B8:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089981D8; }
    goto L_089981CC;
L_089981CC:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_089981D8;
L_089981D8:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_0899829C; }
    goto L_089981E0;
L_089981E0:;
    goto L_089981E4;
L_089981E4:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;vr64=d0;}
    {float s0=v[121];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08998278; }
    goto L_08998208;
L_08998208:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=vr69;float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;vr76=d0;}
    {float s0=vr76;float t0=vr64;float d0=s0*t0;vr76=d0;}
    {float s0=vr76;float t0=vr76;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=vr76;float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08998254; }
    goto L_08998244;
L_08998244:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08998254;
L_08998254:;
    {float s0=-(vr69);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08998298; }
    goto L_08998264;
L_08998264:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08998298; }
    goto L_08998274;
L_08998274:;
    goto L_08998278;
L_08998278:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08998298; }
    goto L_0899828C;
L_0899828C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08998298;
L_08998298:;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    goto L_0899829C;
L_0899829C:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(s2+(0),FBITS(v[96]));}
    {ST32(s2+(4),FBITS(v[97]));}
    {ST32(s2+(8),FBITS(v[98]));}
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089982BC;
L_089982BC:;
    f0 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f0));
    a0 = s1 + 0;
    ST32(s0+4, FBITS(f1));
    ST32(s2+24, FBITS(f2));
    v1 = LD32(s1+520);
    v0 = LD32(s2+48);
    v1 = v1 & 0x1;
    v0 = (v0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    ST32(s2+48, v0);
    v1 = LD32(s1+520);
    v1 = (v1 >> 1) & 0x1;
    v0 = (v0 & ~(0x1u << 6)) | ((v1 & 0x1) << 6);
    ST32(s2+48, v0);
    v1 = LD32(s1+520);
    v1 = (v1 >> 2) & 0x1;
    v0 = (v0 & ~(0x1u << 1)) | ((v1 & 0x1) << 1);
    ST32(s2+48, v0);
    v1 = LD32(s1+520);
    v1 = (v1 >> 3) & 0x1;
    v0 = (v0 & ~(0x1u << 2)) | ((v1 & 0x1) << 2);
    ST32(s2+48, v0);
    v1 = LD32(s1+520);
    v1 = (v1 >> 11) & 0x1;
    v0 = (v0 & ~(0x1u << 4)) | ((v1 & 0x1) << 4);
    ST32(s2+48, v0);
    v1 = LD32(s1+520);
    v1 = (v1 >> 10) & 0x1;
    v0 = (v0 & ~(0x1u << 3)) | ((v1 & 0x1) << 3);
    ST32(s2+48, v0);
    v1 = LD32(s1+520);
    v1 = (v1 >> 14) & 0x1;
    v0 = (v0 & ~(0x1u << 5)) | ((v1 & 0x1) << 5);
    ST32(s2+48, v0);
    v1 = LD32(s1);
    v0 = LD32(v1+276);
    t_ = v0;
    a1 = s2 + 12;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899835C;
L_0899835C:;
    a0 = LD32(s1+88);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s2+56, 0); goto L_08998388; }
    goto L_08998368;
L_08998368:;
    a0 = LD32(a0+56);
    cnd_ = a0 == 0;
    v0 = 0x9a450000u;
    if (cnd_) { goto L_08998384; }
    goto L_08998374;
L_08998374:;
    v1 = LD32(a0+36);
    v0 = v0 | 0x832;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08998440; }
    goto L_08998384;
L_08998384:;
    ST32(s2+56, 0);
    goto L_08998388;
L_08998388:;
    v0 = LD32(s2+48);
    ST8(s2+52, 0);
    v0 = (v0 & ~(0x1u << 7)) | ((0 & 0x1) << 7);
    ST32(s2+48, v0);
    ST8(s2+53, 0);
    v1 = LD32(s1);
    v0 = LD32(v1+388);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089983AC;
L_089983AC:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_08998400; }
    goto L_089983B4;
L_089983B4:;
    v1 = LD32(s1);
    v0 = LD32(v1+384);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089983C4;
L_089983C4:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_089983E8; }
    goto L_089983CC;
L_089983CC:;
    v0 = 1;
    sp = sp + 16;
    { v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[76]=vr76;v[77]=vr77;v[78]=vr78;return (rv_t){ v0, v1, f0 }; }
L_089983E8:;
    v0 = LD32(v1+384);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089983F4;
L_089983F4:;
    v1 = LD_U8(v0+269);
    ST8(s2+53, v1);
    goto L_089983CC;
L_08998400:;
    v0 = LD32(v1+388);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899840C;
L_0899840C:;
    a1 = LD_U8(v0+269);
    ST8(s2+52, a1);
    v1 = LD32(s1);
    v0 = LD32(v1+388);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08998424;
L_08998424:;
    v1 = LD32(v0);
    v0 = LD32(s2+48);
    v1 = v1 ^ 0x2;
    v1 = v1 < 0x1u;
    v0 = (v0 & ~(0x1u << 7)) | ((v1 & 0x1) << 7);
    ST32(s2+48, v0);
    goto L_089983B4;
L_08998440:;
    v0 = func_089A2CD8(a0);
    goto L_08998448;
L_08998448:;
    f0 = BITSF(LD32(v0));
    ST32(s2+56, FBITS(f0));
    goto L_08998388;
    v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[76]=vr76;v[77]=vr77;v[78]=vr78;
}

/* 08998454 */
rv_t func_08998454(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08998454:;
    sp = sp - 32;
    s4 = a2 + 0;
    s2 = a0 + 0;
    a0 = LD32(a0+88);
    cnd_ = a0 != 0;
    s3 = a1 + 0;
    if (cnd_) { goto L_0899850C; }
    goto L_08998484;
L_08998484:;
    a0 = LD32(s2+40);
    goto L_08998488;
L_08998488:;
    cnd_ = a0 != 0;
    s1 = s2 + 224;
    if (cnd_) { goto L_089984E8; }
    goto L_08998490;
L_08998490:;
    a0 = LD32(s1+4);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s1+4, 0); goto L_089984B0; }
    goto L_0899849C;
L_0899849C:;
    s0 = LD32(a0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089984A4;
L_089984A4:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0899849C; }
    goto L_089984AC;
L_089984AC:;
    ST32(s1+4, 0);
    goto L_089984B0;
L_089984B0:;
    a0 = s2 + 0;
    a1 = s3 + 0;
    ST32(s1, 0);
    a2 = s4 + 0;
    ST32(s2+364, 0);
    { rv_t r_ = func_089DC428(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089984C8;
L_089984C8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089984E8:;
    { u64 r_ = func_088BB1C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089984F0;
L_089984F0:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s2 + 224; goto L_08998490; }
    goto L_089984F8;
L_089984F8:;
    a0 = LD32(s2+40);
    a1 = 0 + 0;
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08998504;
L_08998504:;
    s1 = s2 + 224;
    goto L_08998490;
L_0899850C:;
    a1 = 1;
    func_089DF188(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08998514;
L_08998514:;
    a0 = LD32(s2+40);
    goto L_08998488;
}

/* 0899851C */
rv_t func_0899851C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_0899851C:;
    a1 = a1 & 0xff;
    f0 = BITSF(0);
    cnd_ = a1 == 0;
    if (cnd_) { ST32(a0+352, FBITS(f0)); goto L_0899858C; }
    goto L_0899852C;
L_0899852C:;
    v1 = LD32(a0+236);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08998584; }
    goto L_08998538;
L_08998538:;
    v0 = LD_U8(v1+120);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    v0 = D_08AEE7B0 - (-6224);
    if (cnd_) { goto L_08998584; }
    goto L_08998550;
L_08998550:;
    f0 = BITSF(LD32(v0-6224));
    cnd_ = a1 == 0;
    ST32(a0+352, FBITS(f0));
    if (cnd_) { goto L_0899858C; }
    goto L_0899855C;
L_0899855C:;
    v1 = LD32(a0+520);
    v0 = v1 & 0x2;
    cnd_ = v0 != 0;
    v0 = v1 + 0;
    if (cnd_) { goto L_0899857C; }
    goto L_0899856C;
L_0899856C:;
    v0 = D_08AEE7B4 - (-6220);
    f0 = BITSF(LD32(v0-6220));
    ST32(a0+356, FBITS(f0));
    goto L_08998578;
L_08998578:;
    v0 = v1 + 0;
    goto L_0899857C;
L_0899857C:;
    v0 = (v0 & ~(0x1u << 1)) | ((a1 & 0x1) << 1);
    ST32(a0+520, v0);
    goto L_08998584;
L_08998584:;
    return (rv_t){ v0, v1, f0 };
L_0899858C:;
    v1 = LD32(a0+520);
    goto L_08998578;
}

/* 08998594 */
rv_t func_08998594(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08998594:;
    v0 = LD32(a0+520);
    v1 = 0x10000u;
    ST32(a0+352, 0);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    v0 = v0 | v1;
    v1 = D_08AEE7B8 - (-6216);
    f0 = BITSF(LD32(v1-6216));
    ST32(a0+520, v0);
    ST32(a0+356, FBITS(f0));
    return (rv_t){ v0, v1, f0 };
}

/* 089985BC */
rv_t func_089985BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089985BC:;
    v0 = LD32(a0+520);
    v0 = (v0 & ~(0x1u << 16)) | ((0 & 0x1) << 16);
    ST32(a0+520, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 089985CC */
rv_t func_089985CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089985CC:;
    sp = sp - 16;
    v1 = a1 & 0xff;
    v0 = LD32(a0+96);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089985FC; }
    goto L_089985E8;
L_089985E8:;
    a0 = v0 + 0;
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0899860C; }
    goto L_089985F4;
L_089985F4:;
    a1 = 1;
    { u64 r_ = func_0896D8D0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089985FC;
L_089985FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0899860C:;
    { u64 r_ = func_0896D8D0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08998614;
L_08998614:;
    v1 = D_08AEE7BC - (-6212);
    v0 = LD32(s0+96);
    f0 = BITSF(LD32(v1-6212));
    ST32(v0+104, FBITS(f0));
    goto L_089985FC;
}

/* 08998628 */
rv_t func_08998628(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08998628:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 1;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v1 = v1 + 88;
    v0 = LD32(v1+12);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08998674; }
    goto L_0899865C;
L_0899865C:;
    v0 = D_08AEE7C0 - (-6208);
    f0 = BITSF(LD32(v0-6208));
    ST32(a0+16, FBITS(f0));
    f12 = f0;
    a0 = LD32(v1+12);
    { rv_t r_ = func_08809AB8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08998674;
L_08998674:;
    a1 = s1 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_089DC70C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08998680;
L_08998680:;
    v0 = LD32(s0+236);
    a1 = s0 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089986F8; }
    goto L_08998690;
L_08998690:;
    v0 = LD_U8(s0+195);
    goto L_08998694;
L_08998694:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089986E8; }
    goto L_0899869C;
L_0899869C:;
    v0 = LD32(s0+520);
    goto L_089986A0;
L_089986A0:;
    v1 = LD_U8(s0+194);
    a2 = 0 + 0;
    a0 = v0 + 0;
    cnd_ = v1 != 0;
    a1 = (v0 >> 18) & 0x1;
    if (cnd_) { goto L_089986C0; }
    goto L_089986B4;
L_089986B4:;
    v0 = LD_U8(s0+195);
    cnd_ = v0 == 0;
    v0 = a1 | a2;
    if (cnd_) { goto L_089986C8; }
    goto L_089986C0;
L_089986C0:;
    a2 = 1;
    v0 = a1 | a2;
    goto L_089986C8;
L_089986C8:;
    a0 = (a0 & ~(0x1u << 18)) | ((v0 & 0x1) << 18);
    ST32(s0+356, 0);
    ST32(s0+520, a0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089986E8:;
    f0 = func_08998F54();
    goto L_089986F0;
L_089986F0:;
    v0 = LD32(s0+520);
    goto L_089986A0;
L_089986F8:;
    f0 = func_08985758(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08998700;
L_08998700:;
    v0 = LD_U8(s0+195);
    goto L_08998694;
}

/* 08998708 */
rv_t func_08998708(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08998708:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089DE474(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899871C;
L_0899871C:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08998734; }
    goto L_08998724;
L_08998724:;
    v0 = LD32(s0+520);
    v1 = 0x40000u;
    v0 = v0 & v1;
    a0 = v0 < 0x1u;
    goto L_08998734;
L_08998734:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08998748 */
rv_t func_08998748(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08998748:;
    sp = sp - 32;
    s1 = a1 + 0;
    v0 = LD32(a0+424);
    cnd_ = a1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089987D4; }
    goto L_08998774;
L_08998774:;
    v0 = 999;
    cnd_ = a1 == v0;
    ST32(s0+424, a1);
    if (cnd_) { goto L_089987B8; }
    goto L_08998780;
L_08998780:;
    s2 = a0 + 224;
    v1 = LD32(s2+4);
    cnd_ = v1 == 0;
    s3 = a0 + 424;
    if (cnd_) { goto L_089987A8; }
    goto L_08998790;
L_08998790:;
    v0 = LD32(v1+8);
    goto L_08998794;
L_08998794:;
    cnd_ = v0 == a1;
    a0 = v1 + 0;
    if (cnd_) { goto L_089987AC; }
    goto L_0899879C;
L_0899879C:;
    v1 = LD32(v1);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08998794; }
    goto L_089987A8;
L_089987A8:;
    a0 = 0 + 0;
    goto L_089987AC;
L_089987AC:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089987F4; }
    goto L_089987B4;
L_089987B4:;
    v0 = 999;
    goto L_089987B8;
L_089987B8:;
    cnd_ = s1 == v0;
    v1 = D_08AEE7C4 - (-6204);
    if (cnd_) { goto L_089987D4; }
    goto L_089987C0;
L_089987C0:;
    v0 = LD32(s0+520);
    f0 = BITSF(LD32(v1-6204));
    v0 = (v0 & ~(0x1u << 8)) | ((0 & 0x1) << 8);
    ST32(s0+520, v0);
    ST32(s0+380, FBITS(f0));
    goto L_089987D4;
L_089987D4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089987F4:;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089987FC;
L_089987FC:;
    a3 = LD32(s0+224);
    a0 = v0 + 0;
    a1 = s3 + 0;
    a2 = 0 + 0;
    s4 = v0 + 0;
    func_08AAFA30(a0, a1, a2, a3);
    goto L_08998814;
L_08998814:;
    v0 = LD32(s2+4);
    cnd_ = v0 != 0;
    ST32(s0+224, s4);
    if (cnd_) { goto L_089987B4; }
    goto L_08998820;
L_08998820:;
    ST32(s2+4, s4);
    goto L_089987B4;
}

/* 08998828 */
rv_t func_08998828(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08998828:;
    sp = sp - 80;
    s1 = a1 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+452);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899885C;
L_0899885C:;
    cnd_ = v0 != 0;
    if (cnd_) { f1 = BITSF(LD32(s1+8)); goto L_089988E4; }
    goto L_08998864;
L_08998864:;
    v1 = LD32(s0);
    v0 = LD32(v1+248);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08998874;
L_08998874:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+520); goto L_089988B8; }
    goto L_0899887C;
L_0899887C:;
    a0 = s0 + 0;
    { rv_t r_ = func_089DE500(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08998884;
L_08998884:;
    v1 = LD32(s0);
    a1 = 16;
    a2 = 0x1410000u;
    t0 = LD32(v1+504);
    v1 = 12;
    if (v0 == 0) a1 = v1;
    v0 = D_08AEE7C8 - (-6200);
    f12 = BITSF(LD32(v0-6200));
    a0 = s0 + 0;
    a2 = a2 | 0xa;
    t_ = t0;
    a3 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089988B4;
L_089988B4:;
    v0 = LD32(s0+520);
    goto L_089988B8;
L_089988B8:;
    v0 = (v0 & ~(0x1u << 15)) | ((0 & 0x1) << 15);
    ST32(s0+520, v0);
    goto L_089988C0;
L_089988C0:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_089988E4:;
    f0 = BITSF(LD32(s1));
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(s0);
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = 0 + 0;
    {v[1]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f21 = BITSF(0);
    ST32(sp, FBITS(f0));
    a0 = s0 + 0;
    a1 = sp + 0;
    ST32(sp+8, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    ST32(sp+4, FBITS(f21));
    {v0=FBITS(v[0]);}
    f20 = BITSF(v0);
    v0 = LD32(v1+456);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899893C;
L_0899893C:;
    v1 = LD32(s0);
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = LD32(v1+508);
    t_ = v0;
    f12 = f20;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08998954;
L_08998954:;
    a0 = s0 + 0;
    s1 = v0 + 0;
    { rv_t r_ = func_089DE500(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08998960;
L_08998960:;
    cnd_ = v0 != 0;
    a1 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_08998974; }
    goto L_08998968;
L_08998968:;
    cnd_ = s1 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_08998A48; }
    goto L_08998970;
L_08998970:;
    a1 = D_08B25AC0 - (23232);
    goto L_08998974;
L_08998974:;
    v1 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEE7D0 - (-6192);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-6192));
    v0 = D_08AEE7C8 - (-6200);
    ST32(a2+4, a0);
    f1 = f1 * f0;
    s3 = D_08B285A0 - (-31328);
    goto L_089989B8;
L_089989B8:;
    f0 = BITSF(LD32(v0-6200));
    f1 = f1 + f0;
    v0 = D_08AEE7D4 - (-6188);
    f0 = BITSF(LD32(v0-6188));
    v0 = 999;
    ST32(a1+23232, v1);
    f1 = f1 * f0;
    ST32(s0+488, v0);
    ST32(s0+396, FBITS(f1));
    goto L_089989DC;
L_089989DC:;
    v0 = LD32(s0);
    goto L_089989E0;
L_089989E0:;
    a2 = 0x1410000u;
    a0 = s0 + 0;
    v1 = LD32(v0+504);
    v0 = D_08AEE7D8 - (-6184);
    f12 = BITSF(LD32(v0-6184));
    a1 = s1 + 0;
    a2 = a2 | 0xa;
    t_ = v1;
    a3 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08998A04;
L_08998A04:;
    a0 = LD32(s0+520);
    f0 = BITSF(LD32(s3-31328));
    f1 = BITSF(LD32(s0+368));
    a2 = LD32(s0);
    a1 = a0 & 0x1000;
    v1 = 7;
    v0 = 3;
    if (a1 == 0) v0 = v1;
    f0 = f0 * f1;
    v1 = LD32(a2-12);
    v0 = s1 ^ v0;
    v0 = v0 < 0x1u;
    a0 = (a0 & ~(0x1u << 15)) | ((v0 & 0x1) << 15);
    v1 = s0 + v1;
    ST32(s0+520, a0);
    ST32(v1+200, FBITS(f0));
    goto L_089988C0;
L_08998A48:;
    v0 = LD32(v1+288);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08998A54;
L_08998A54:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    { u64 r_ = func_08998E60(a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08998A60;
L_08998A60:;
    cnd_ = v0 == 0;
    a1 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_08998974; }
    goto L_08998A68;
L_08998A68:;
    s3 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(s3-31328));
    f0 = BITSF(LD32(s0+396));
    f0 = f0 - f1;
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    ST32(s0+396, FBITS(f0));
    if (cnd_) { goto L_089989DC; }
    goto L_08998A88;
L_08998A88:;
    a2 = LD32(s0+488);
    v0 = a2 < 0x2u;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_08998AD4; }
    goto L_08998A98;
L_08998A98:;
    a1 = D_08B25AC0 - (23232);
    v0 = LD32(a1+23232);
    a2 = a1 + 23232;
    v1 = LD32(a2+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    a0 = (v0 >> 1) & 0x1;
    v1 = v1 + v0;
    ST32(a2+4, v1);
    a2 = a0 + 0;
    ST32(a1+23232, v0);
    ST32(s0+488, a0);
    v1 = LD32(s0);
    goto L_08998AD4;
L_08998AD4:;
    a1 = D_08AEE7CC - (-6196);
    s1 = 18;
    v0 = LD32(v1+248);
    a0 = s0 + 0;
    v1 = 19;
    if (a2 != 0) s1 = v1;
    t_ = v0;
    f20 = BITSF(LD32(a1-6196));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08998AF4;
L_08998AF4:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08998BB0; }
    goto L_08998AFC;
L_08998AFC:;
    v1 = LD32(s0);
    v0 = LD32(v1+288);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08998B0C;
L_08998B0C:;
    v1 = v0 + 0;
    v0 = LD32(s2+56);
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    a1 = 3507;
    if (cnd_) { goto L_08998B58; }
    goto L_08998B20;
L_08998B20:;
    v0 = LD32(s2+60);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    v0 = D_08B204FC - (1276);
    if (cnd_) { goto L_08998B5C; }
    goto L_08998B30;
L_08998B30:;
    v0 = LD32(s2+64);
    cnd_ = v0 == 0;
    v0 = D_08B204FC - (1276);
    if (cnd_) { goto L_08998B5C; }
    goto L_08998B3C;
L_08998B3C:;
    v0 = v1 << 2;
    v0 = v0 + s2;
    a0 = LD32(v0+4);
    v1 = s1 << 2;
    v1 = v1 + a0;
    v0 = LD32(v1);
    a1 = LD32(v0);
    goto L_08998B58;
L_08998B58:;
    v0 = D_08B204FC - (1276);
    goto L_08998B5C;
L_08998B5C:;
    v1 = LD32(v0+1276);
    cnd_ = v1 == 0;
    t0 = v0 + 1276;
    if (cnd_) { goto L_08998B94; }
    goto L_08998B68;
L_08998B68:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08998B70;
L_08998B70:;
    a0 = v0 + 120;
    a2 = v0 + 116;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_08998BA0; }
    goto L_08998B88;
L_08998B88:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08998B70; }
    goto L_08998B94;
L_08998B94:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08998C0C; }
    goto L_08998BA0;
L_08998BA0:;
    cnd_ = a3 == 0;
    if (cnd_) { f0 = BITSF(LD32(s0+396)); goto L_08998BB4; }
    goto L_08998BA8;
L_08998BA8:;
    f0 = BITSF(LD32(a3+20));
    f20 = BITSF(FBITS(f0) ^ 0x80000000u);
    goto L_08998BB0;
L_08998BB0:;
    f0 = BITSF(LD32(s0+396));
    goto L_08998BB4;
L_08998BB4:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s0); goto L_089989E0; }
    goto L_08998BC4;
L_08998BC4:;
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
    v0 = D_08AEE7D0 - (-6192);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-6192));
    v0 = D_08AEE7C8 - (-6200);
    ST32(a2+4, a0);
    f1 = f1 * f0;
    goto L_089989B8;
L_08998C0C:;
    a2 = 1;
    { u64 r_ = func_08AA178C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08998C14;
L_08998C14:;
    a3 = v0 + 0;
    goto L_08998BA0;
}

/* 08998C1C */
rv_t func_08998C1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08998C1C:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a2 + 0;
    { rv_t r_ = func_08A04B94(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08998C38;
L_08998C38:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    func_0899CFE4(a0, a1);
    goto L_08998C44;
L_08998C44:;
    f0 = BITSF(LD32(s0));
    v0 = s1 + 276;
    f8 = BITSF(LD32(s0+32));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(s0+12));
    f4 = BITSF(LD32(s0+16));
    f5 = BITSF(LD32(s0+20));
    f6 = BITSF(LD32(s0+24));
    f7 = BITSF(LD32(s0+28));
    ST32(s1+276, FBITS(f0));
    ST32(v0+32, FBITS(f8));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    ST32(v0+12, FBITS(f3));
    ST32(v0+16, FBITS(f4));
    ST32(v0+20, FBITS(f5));
    ST32(v0+24, FBITS(f6));
    ST32(v0+28, FBITS(f7));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08998CA4 */
rv_t func_08998CA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08998CA4:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08998CB8;
L_08998CB8:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08998CD8; }
    goto L_08998CC0;
L_08998CC0:;
    v0 = LD32(s0+88);
    a1 = LD32(v0+56);
    v1 = LD_U16(a1+114);
    v1 = v1 & 0x1;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08998CE4; }
    goto L_08998CD8;
L_08998CD8:;
    v0 = LD_U8(s0+124);
    cnd_ = v0 != 0;
    v1 = s0 + 240;
    if (cnd_) { goto L_08998CF0; }
    goto L_08998CE4;
L_08998CE4:;
    { rv_t r_ = func_089DC5D4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08998CEC;
L_08998CEC:;
    v1 = v0 + 0;
    goto L_08998CF0;
L_08998CF0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08998D04 */
rv_t func_08998D04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08998D04:;
    sp = sp - 16;
    s2 = D_08B285AC - (-31316);
    s1 = a0 + 276;
    v0 = LD_U8(a0+195);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08998D58; }
    goto L_08998D2C;
L_08998D2C:;
    v1 = LD32(s2-31316);
    v0 = LD32(a0+312);
    cnd_ = v0 == v1;
    a1 = s1 + 0;
    if (cnd_) { goto L_08998D58; }
    goto L_08998D3C;
L_08998D3C:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    a0 = LD32(v1+4);
    { rv_t r_ = func_08878E84(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08998D50;
L_08998D50:;
    v0 = LD32(s2-31316);
    ST32(s0+312, v0);
    goto L_08998D58;
L_08998D58:;
    v0 = s1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08998D74 */
rv_t func_08998D74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08998D74:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089DE500(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08998D88;
L_08998D88:;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08998DE0; }
    goto L_08998D90;
L_08998D90:;
    v1 = LD32(s0+200);
    v0 = 0xc51c0000u;
    v0 = v0 | 0x7177;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_08998E30; }
    goto L_08998DA4;
L_08998DA4:;
    cnd_ = v0 == 0;
    a0 = LD32(s0+520);
    if (cnd_) { goto L_08998DBC; }
    goto L_08998DAC;
L_08998DAC:;
    v0 = 0xec940000u;
    v0 = v0 | 0x19d1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08998E00; }
    goto L_08998DBC;
L_08998DBC:;
    v0 = 0x10000u;
    v0 = v0 | 0x2;
    v0 = a0 & v0;
    v1 = 2;
    cnd_ = v0 == v1;
    v1 = a0 & 0x1;
    if (cnd_) { goto L_08998DF4; }
    goto L_08998DD4;
L_08998DD4:;
    a1 = 6;
    v0 = 4;
    goto L_08998DDC;
L_08998DDC:;
    if (v1 == 0) a1 = v0;
    goto L_08998DE0;
L_08998DE0:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08998DF4:;
    a1 = 7;
    v0 = 5;
    goto L_08998DDC;
L_08998E00:;
    v0 = 0x10000u;
    v0 = v0 | 0x2;
    v0 = a0 & v0;
    v1 = 2;
    cnd_ = v0 == v1;
    v1 = a0 & 0x1;
    if (cnd_) { goto L_08998E24; }
    goto L_08998E18;
L_08998E18:;
    a1 = 10;
    v0 = 8;
    goto L_08998DDC;
L_08998E24:;
    a1 = 11;
    v0 = 9;
    goto L_08998DDC;
L_08998E30:;
    a2 = LD32(s0+520);
    v0 = 0x10000u;
    v0 = v0 | 0x2;
    a0 = 2;
    v1 = a2 & 0x1;
    a1 = a0 + 0;
    v0 = a2 & v0;
    cnd_ = v0 != a0;
    if (v1 == 0) a1 = 0;
    if (cnd_) { goto L_08998DE0; }
    goto L_08998E54;
L_08998E54:;
    a1 = 3;
    v0 = 1;
    goto L_08998DDC;
}

/* 08998E60 */
u64 func_08998E60(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u32 t_;
L_08998E60:;
    v0 = a1 < 0xbu;
    cnd_ = v0 == 0;
    v1 = D_08ADE1F4 - (-7692);
    if (cnd_) { goto L_08998E8C; }
    goto L_08998E6C;
L_08998E6C:;
    v0 = a1 << 2;
    v1 = v1 - 7692;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08998E84u: goto L_08998E84; case 0x08998E8Cu: goto L_08998E8C; default: rs_break(0, 0x08998e7c); }
L_08998E84:;
    v0 = 1;
    return (u64)v0 | ((u64)v1 << 32);
L_08998E8C:;
    v0 = 0 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08998E94 */
rv_t func_08998E94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08998E94:;
    sp = sp - 48;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s1 = a0 + 0;
    v0 = LD32(s1+96);
    cnd_ = v0 != 0;
    a0 = 188;
    if (cnd_) { goto L_08998EFC; }
    goto L_08998EC4;
L_08998EC4:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08998ECC;
L_08998ECC:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    a3 = 0xd8620000u;
    v0 = LD32(v1-16);
    a2 = 0 + 0;
    a3 = a3 | 0xd8b3;
    v0 = s1 + v0;
    a1 = LD32(v0+4);
    a0 = s0 + 0;
    func_0896D1A0(a0, a1, a2, a3);
    goto L_08998EF4;
L_08998EF4:;
    cnd_ = s0 == 0;
    ST32(s1+96, s0);
    if (cnd_) { goto L_08998F28; }
    goto L_08998EFC;
L_08998EFC:;
    v1 = LD32(s1);
    v0 = LD32(v1+92);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08998F0C;
L_08998F0C:;
    a1 = v0 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08998F18;
L_08998F18:;
    a0 = LD32(s1+96);
    a1 = sp + 0;
    a2 = 0 + 0;
    func_0896D91C(a0, a1, a2);
    goto L_08998F28;
L_08998F28:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    a2 = s3 + 0;
    { rv_t r_ = func_089DC7BC(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08998F38;
L_08998F38:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08998F54 */
float func_08998F54(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08998F54:;
    v0 = D_08B159FC - (23036);
    a0 = LD32(v0+23036);
    sp = sp - 16;
    f0 = func_088F5900(a0);
    goto L_08998F6C;
L_08998F6C:;
    { rv_t r_ = func_0881D358(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08998F74;
L_08998F74:;
    sp = sp + 16;
    return f0;
}

/* 08998F80 */
rv_t func_08998F80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08998F80:;
    sp = sp - 128;
    s0 = a0 + 0;
    a0 = (u32)-1;
    s2 = a1 + 0;
    s1 = a2 & 0xff;
    f20 = f12;
    ST32(sp+80, 0);
    v0 = func_08A5FB08(a0);
    goto L_08998FBC;
L_08998FBC:;
    a0 = 0xde350000u;
    a2 = sp + 80;
    a1 = v0 + 0;
    a0 = a0 | 0x46b6;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08998FD0;
L_08998FD0:;
    v0 = D_08AEE7DC - (-6180);
    f12 = BITSF(LD32(v0-6180));
    a0 = LD32(sp+80);
    a1 = 0x310000u;
    a1 = a1 | 0xe947;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08998FE8;
L_08998FE8:;
    v0 = D_08AEE7E0 - (-6176);
    f12 = BITSF(LD32(v0-6176));
    a0 = LD32(sp+80);
    a1 = 0x2af20000u;
    a1 = a1 | 0x554;
    f21 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08999004;
L_08999004:;
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    f22 = f0;
    if (cnd_) { goto L_0899901C; }
    goto L_08999014;
L_08999014:;
    cnd_ = s1 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_089991A0; }
    goto L_0899901C;
L_0899901C:;
    fcc = FCMP(f21, f20, 14);
    cnd_ = !fcc;
    v0 = LD32(s0);
    if (cnd_) { goto L_08999034; }
    goto L_0899902C;
L_0899902C:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_089990A8; }
    goto L_08999034;
L_08999034:;
    a1 = 0x5a30000u;
    a1 = a1 | 0xe701;
    goto L_0899903C;
L_0899903C:;
    a0 = LD32(v0-12);
    a2 = s2 + 0;
    a3 = 0 + 0;
    a0 = s0 + a0;
    v1 = LD32(a0);
    t0 = 1;
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08999060;
L_08999060:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0899908C; }
    goto L_08999068;
L_08999068:;
    goto L_0899906C;
L_0899906C:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_0899908C:;
    f12 = BITSF(0);
    a0 = s0 + 0;
    a1 = s2 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_089DD1BC(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089990A0;
L_089990A0:;
    goto L_0899906C;
L_089990A8:;
    ST32(sp, 0);
    a1 = 0x5a30000u;
    a2 = sp + 16;
    a0 = LD32(v0-12);
    ST32(sp+4, 0);
    a1 = a1 | 0xe701;
    a0 = s0 + a0;
    v1 = LD32(a0);
    ST32(sp+8, 0);
    a3 = 0 + 0;
    t0 = 1;
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089990EC;
L_089990EC:;
    cnd_ = v0 == 0;
    a1 = 0x300000u;
    if (cnd_) { goto L_0899908C; }
    goto L_089990F4;
L_089990F4:;
    v0 = LD32(s0);
    a1 = a1 | 0xcde0;
    a0 = LD32(v0-12);
    a2 = sp + 0;
    a3 = 0 + 0;
    a0 = s0 + a0;
    v1 = LD32(a0);
    t0 = 1;
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08999120;
L_08999120:;
    cnd_ = v0 == 0;
    f2 = f22 - f21;
    if (cnd_) { goto L_0899908C; }
    goto L_08999128;
L_08999128:;
    f1 = f20 - f21;
    f4 = BITSF(LD32(sp+16));
    f5 = BITSF(LD32(sp+20));
    f6 = BITSF(LD32(sp+24));
    f1 = f1 / f2;
    f0 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f3 = BITSF(LD32(sp+8));
    f0 = f0 - f4;
    f2 = f2 - f5;
    f3 = f3 - f6;
    f7 = f0 * f1;
    f8 = f2 * f1;
    f1 = f3 * f1;
    ST32(sp+64, FBITS(f0));
    f4 = f4 + f7;
    f5 = f5 + f8;
    f6 = f6 + f1;
    ST32(sp+68, FBITS(f2));
    ST32(s2+8, FBITS(f6));
    ST32(s2, FBITS(f4));
    ST32(s2+4, FBITS(f5));
    ST32(sp+72, FBITS(f3));
    ST32(sp+48, FBITS(f7));
    ST32(sp+52, FBITS(f8));
    ST32(sp+56, FBITS(f1));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f5));
    ST32(sp+40, FBITS(f6));
    goto L_08999068;
L_089991A0:;
    a1 = 0x300000u;
    a1 = a1 | 0xcde0;
    goto L_0899903C;
}

/* 089991AC */
rv_t func_089991AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089991AC:;
    v1 = LD32(a0+236);
    v0 = LD_U8(v1+120);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089991CC; }
    goto L_089991C8;
L_089991C8:;
    a0 = LD32(v0+84);
    goto L_089991CC;
L_089991CC:;
    v0 = a0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089991D4 */
rv_t func_089991D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_089991D4:;
    v1 = LD32(a0+236);
    v0 = LD_U8(v1+120);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08999208; }
    goto L_089991F0;
L_089991F0:;
    v1 = LD32(v0+80);
    cnd_ = v1 == 0;
    v0 = LD32(v0+88);
    if (cnd_) { goto L_08999204; }
    goto L_089991FC;
L_089991FC:;
    { s32 x_ = (s32)v0, y_ = (s32)v1; if (y_ == 0) { lo = x_ < 0 ? 1 : 0xFFFFFFFFu; hi = (u32)x_; } else if (x_ == INT32_MIN && y_ == -1) { lo = 0x80000000u; hi = 0; } else { lo = (u32)(x_ / y_); hi = (u32)(x_ % y_); } }
    v0 = lo;
    goto L_08999204;
L_08999204:;
    a0 = v0 + 0;
    goto L_08999208;
L_08999208:;
    v0 = a0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08999210 */
rv_t func_08999210(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08999210:;
    v1 = LD32(a0+236);
    v0 = LD_U8(v1+120);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08999238; }
    goto L_0899922C;
L_0899922C:;
    v0 = LD32(v0);
    v0 = v0 ^ 0x2;
    a0 = v0 < 0x1u;
    goto L_08999238;
L_08999238:;
    v0 = a0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08999240 */
rv_t func_08999240(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08999240:;
    v1 = LD32(a0+236);
    v0 = LD_U8(v1+120);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08999268; }
    goto L_0899925C;
L_0899925C:;
    v0 = LD32(v0);
    v0 = v0 ^ 0x4;
    a0 = v0 < 0x1u;
    goto L_08999268;
L_08999268:;
    v0 = a0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08999270 */
rv_t func_08999270(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08999270:;
    v1 = LD32(a0+236);
    v0 = LD_U8(v1+120);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08999298; }
    goto L_0899928C;
L_0899928C:;
    v0 = LD32(v0);
    v0 = v0 ^ 0x6;
    a0 = v0 < 0x1u;
    goto L_08999298;
L_08999298:;
    v0 = a0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089992A0 */
rv_t func_089992A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089992A0:;
    v0 = LD32(a0+236);
    v1 = LD_U8(v0+121);
    v1 = v1 << 2;
    v1 = v1 + v0;
    v0 = LD32(v1+48);
    return (rv_t){ v0, v1, f0 };
}

/* 089992B8 */
rv_t func_089992B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089992B8:;
    v0 = LD32(a0+236);
    v1 = LD_U8(v0+120);
    v1 = v1 << 2;
    v1 = v1 + v0;
    v0 = LD32(v1);
    return (rv_t){ v0, v1, f0 };
}

/* 089992D0 */
rv_t func_089992D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089992D0:;
    v1 = LD32(a0+236);
    v0 = LD_U8(v1+120);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    a0 = 999;
    if (cnd_) { goto L_089992F0; }
    goto L_089992EC;
L_089992EC:;
    a0 = LD32(v0+264);
    goto L_089992F0;
L_089992F0:;
    v0 = a0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089992F8 */
rv_t func_089992F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089992F8:;
    sp = sp - 32;
    f3 = BITSF(0);
    v1 = LD32(a0+236);
    v0 = LD_U8(v1+120);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    f0 = f3;
    if (cnd_) { goto L_08999344; }
    goto L_08999320;
L_08999320:;
    f2 = BITSF(LD32(v0+112));
    a0 = sp + 0;
    a1 = sp + 4;
    fcc = FCMP(f3, f2, 12);
    cnd_ = fcc;
    a2 = sp + 8;
    if (cnd_) { goto L_08999350; }
    goto L_0899933C;
L_0899933C:;
    v0 = D_08AEE7E4 - (-6172);
    f0 = BITSF(LD32(v0-6172));
    goto L_08999344;
L_08999344:;
    goto L_08999348;
L_08999348:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08999350:;
    f0 = BITSF(LD32(v0+108));
    v0 = D_08AEE7E4 - (-6172);
    f1 = BITSF(LD32(v0-6172));
    f0 = f0 / f2;
    ST32(sp+4, FBITS(f3));
    ST32(sp+8, FBITS(f1));
    ST32(sp, FBITS(f0));
    f0 = func_0899F814(a0, a1, a2);
    goto L_08999370;
L_08999370:;
    goto L_08999348;
}

/* 08999378 */
rv_t func_08999378(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08999378:;
    sp = sp - 32;
    a1 = sp + 4;
    a2 = sp + 8;
    v1 = LD32(a0+236);
    f0 = BITSF(0);
    v0 = LD_U8(v1+120);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_089993D0; }
    goto L_089993A8;
L_089993A8:;
    f1 = BITSF(LD32(v0+120));
    v0 = D_08AEE7E8 - (-6168);
    f0 = BITSF(LD32(v0-6168));
    v0 = D_08AEE7EC - (-6164);
    ST32(sp+4, 0);
    f1 = f1 * f0;
    f0 = BITSF(LD32(v0-6164));
    ST32(sp, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    f0 = func_0899F814(a0, a1, a2);
    goto L_089993D0;
L_089993D0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089993DC */
rv_t func_089993DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089993DC:;
    sp = sp - 32;
    f3 = BITSF(0);
    v1 = LD32(a0+236);
    v0 = LD_U8(v1+120);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    f0 = f3;
    if (cnd_) { goto L_08999428; }
    goto L_08999404;
L_08999404:;
    f2 = BITSF(LD32(v0+68));
    a0 = sp + 0;
    a1 = sp + 4;
    fcc = FCMP(f3, f2, 12);
    cnd_ = fcc;
    a2 = sp + 8;
    if (cnd_) { goto L_08999434; }
    goto L_08999420;
L_08999420:;
    v0 = D_08AEE7F0 - (-6160);
    f0 = BITSF(LD32(v0-6160));
    goto L_08999428;
L_08999428:;
    goto L_0899942C;
L_0899942C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08999434:;
    f0 = BITSF(LD32(v0+44));
    v0 = D_08AEE7F0 - (-6160);
    f1 = BITSF(LD32(v0-6160));
    f0 = f0 / f2;
    ST32(sp+4, FBITS(f3));
    ST32(sp+8, FBITS(f1));
    f1 = f1 - f0;
    ST32(sp, FBITS(f1));
    f0 = func_0899F814(a0, a1, a2);
    goto L_08999458;
L_08999458:;
    goto L_0899942C;
}

/* 08999460 */
rv_t func_08999460(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08999460:;
    sp = sp - 16;
    s1 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    s0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08999484;
L_08999484:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f0));
    a1 = 0x300000u;
    a2 = s0 + 0;
    ST32(s0, FBITS(f1));
    a1 = a1 | 0xcde0;
    a3 = 0 + 0;
    ST32(s0+4, FBITS(f2));
    t0 = 1;
    t1 = (u32)-1;
    v0 = LD32(s1);
    v1 = LD32(v0-12);
    s1 = s1 + v1;
    t2 = LD32(s1);
    v0 = LD32(t2+60);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089994D0;
L_089994D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089994E4 */
rv_t func_089994E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089994E4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0+496);
    t_ = v1;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08999500;
L_08999500:;
    v0 = LD32(s0+316);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08999514 */
rv_t func_08999514(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08999514:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    v1 = LD32(v0+496);
    t_ = v1;
    s0 = s0 + 320;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08999534;
L_08999534:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08999548 */
rv_t func_08999548(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08999548:;
    sp = sp - 128;
    v0 = D_08B28588 - (-31352);
    s2 = a0 + 320;
    s1 = sp + 16;
    f1 = BITSF(LD32(v0-31352));
    f0 = BITSF(LD32(a0+332));
    v0 = D_08AEE7F4 - (-6156);
    f20 = BITSF(LD32(v0-6156));
    f0 = f1 - f0;
    fcc = FCMP(f20, f0, 14);
    cnd_ = fcc;
    s0 = a0 + 0;
    if (cnd_) { goto L_089995AC; }
    goto L_08999590;
L_08999590:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_089995AC:;
    ST32(a0+332, FBITS(f1));
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089995C0;
L_089995C0:;
    a0 = LD32(s0);
    f0 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    v1 = LD32(a0-16);
    f1 = BITSF(LD32(v0));
    f0 = f0 - f20;
    v1 = s0 + v1;
    v0 = D_08AEE7F8 - (-6152);
    a3 = LD32(v1+4);
    f12 = BITSF(LD32(v0-6152));
    a0 = s1 + 0;
    a2 = sp + 80;
    a1 = sp + 0;
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+84, FBITS(f20));
    ST32(sp+80, 0);
    ST32(sp+88, 0);
    func_08834FC0(a0, a1, a2, a3, f12);
    goto L_08999610;
L_08999610:;
    a0 = s1 + 0;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08999618;
L_08999618:;
    ST32(s0+316, 0);
    s1 = v0 + 0;
    v0 = D_08AEE7FC - (-6148);
    f0 = BITSF(LD32(v0-6148));
    v1 = LD_U8(s1+32);
    ST32(sp+80, 0);
    ST32(s2+4, FBITS(f0));
    ST32(sp+88, 0);
    ST32(sp+84, FBITS(f0));
    ST32(s0+320, 0);
    cnd_ = v1 == 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_08999590; }
    goto L_08999648;
L_08999648:;
    a0 = (u32)(s32)LD_S16(s1+18);
    { u64 r_ = func_088353B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08999650;
L_08999650:;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s1+20)); goto L_08999668; }
    goto L_08999658;
L_08999658:;
    a0 = LD32(v0+28);
    v0 = func_08A66DBC(a0);
    goto L_08999660;
L_08999660:;
    ST32(s0+316, v0);
    f0 = BITSF(LD32(s1+20));
    goto L_08999668;
L_08999668:;
    v0 = s1 + 20;
    f1 = BITSF(LD32(v0+8));
    ST32(s0+320, FBITS(f0));
    f0 = BITSF(LD32(v0+4));
    ST32(s2+8, FBITS(f1));
    ST32(s2+4, FBITS(f0));
    goto L_08999590;
}

/* 08999684 */
rv_t func_08999684(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08999684:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = 808;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089996A4;
L_089996A4:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_089933C8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089996B0;
L_089996B0:;
    a1 = s0 + 0;
    cnd_ = s1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089996D4; }
    goto L_089996BC;
L_089996BC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089996D4:;
    v1 = LD32(s1);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089996E4;
L_089996E4:;
    v1 = LD32(s1);
    v0 = LD32(v1+348);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089996F4;
L_089996F4:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    v0 = LD32(v1+348);
    t_ = v0;
    f20 = f0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08999708;
L_08999708:;
    fcc = FCMP(f20, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f20 = f0; goto L_08999718; }
    goto L_08999718;
L_08999718:;
    ST32(s1+160, FBITS(f20));
    goto L_089996BC;
}

/* 08999720 */
rv_t func_08999720(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08999720:;
    sp = sp - 32;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v0 = D_08AEE800 - (-6144);
    f0 = BITSF(LD32(v0-6144));
    v1 = a0 + v1;
    ST32(v1+200, FBITS(f0));
    a1 = LD32(a0);
    v0 = LD32(a1+112);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08999754;
L_08999754:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08999768; }
    goto L_0899975C;
L_0899975C:;
    v0 = LD_U8(s0+195);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_089997E0; }
    goto L_08999768;
L_08999768:;
    a0 = s0 + 0;
    { rv_t r_ = func_0899C2E4(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08999770;
L_08999770:;
    f1 = BITSF(LD32(s0+352));
    f2 = BITSF(0);
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089997B8; }
    goto L_08999788;
L_08999788:;
    v0 = LD32(s0+520);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_089997BC; }
    goto L_08999798;
L_08999798:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f0 = f1 - f0;
    fcc = FCMP(f0, f2, 14);
    cnd_ = fcc;
    ST32(s0+352, FBITS(f0));
    if (cnd_) { goto L_089997C4; }
    goto L_089997B4;
L_089997B4:;
    goto L_089997B8;
L_089997B8:;
    goto L_089997BC;
L_089997BC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089997C4:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+412);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089997D8;
L_089997D8:;
    goto L_089997B8;
L_089997E0:;
    a0 = s0 + 0;
    v1 = LD32(v0+276);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089997F0;
L_089997F0:;
    a0 = s0 + 0;
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089997F8;
L_089997F8:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_08999834; }
    goto L_08999800;
L_08999800:;
    v0 = LD32(s0+88);
    a0 = LD32(v0+56);
    v1 = LD_U16(a0+114);
    v1 = v1 & 0x1;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08999768; }
    goto L_08999818;
L_08999818:;
    v1 = LD32(s0);
    goto L_0899981C;
L_0899981C:;
    a0 = s0 + 0;
    v0 = LD32(v1+484);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899982C;
L_0899982C:;
    goto L_08999768;
L_08999834:;
    a0 = s0 + 0;
    v0 = LD32(v1+480);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08999844;
L_08999844:;
    v1 = LD32(s0);
    goto L_0899981C;
}

/* 0899984C */
rv_t func_0899984C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 224);
L_0899984C:;
    sp = sp - 224;
    v0 = D_08AEE804 - (-6140);
    s3 = sp + 16;
    s2 = sp + 32;
    s1 = sp + 48;
    s0 = a0 + 0;
    f3 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1));
    f21 = BITSF(LD32(v0-6140));
    v1 = FBITS(f3);
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = 0 + 0;
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f2));
    fcc = FCMP(f21, f0, 12);
    ST32(sp+4, 0);
    cnd_ = fcc;
    ST32(sp+8, FBITS(f3));
    if (cnd_) { goto L_089998F8; }
    goto L_089998C4;
L_089998C4:;
    v1 = LD32(s0);
    goto L_089998C8;
L_089998C8:;
    v0 = LD32(v1+488);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089998D4;
L_089998D4:;
    sp = sp + 224;
    return (rv_t){ v0, v1, f0 };
L_089998F8:;
    v1 = LD32(a0);
    v0 = LD32(v1+456);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08999908;
L_08999908:;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08999938; }
    goto L_08999914;
L_08999914:;
    f2 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    goto L_08999938;
L_08999938:;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08999940;
L_08999940:;
    v0 = D_08B285A0 - (-31328);
    v1 = D_08AEE808 - (-6136);
    f0 = BITSF(LD32(v1-6136));
    f1 = BITSF(LD32(v0-31328));
    a1 = s0 + 240;
    a0 = s3 + 0;
    f20 = f1 * f0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08999960;
L_08999960:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899996C;
L_0899996C:;
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+24);
    {v[5]=BITSF(v1);}
    v1 = LD32(sp+28);
    {v[6]=BITSF(v0);}
    v0 = LD32(sp+32);
    {v[7]=BITSF(v1);}
    {v[0]=BITSF(v0);}
    v1 = LD32(sp+36);
    v0 = LD32(sp+40);
    {v[1]=BITSF(v1);}
    v1 = LD32(sp+44);
    {v[2]=BITSF(v0);}
    {v[3]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[4]=sum;}
    {v0=FBITS(v[4]);}
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    fcc = FCMP(f0, f21, 12);
    cnd_ = fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_08999B20; }
    goto L_089999CC;
L_089999CC:;
    v0 = D_08AEE810 - (-6128);
    goto L_089999D0;
L_089999D0:;
    f0 = BITSF(LD32(v0-6128));
    a1 = s1 + 0;
    a0 = s0 + 0;
    v1 = FBITS(f20);
    v0 = FBITS(f0);
    {v[112]=BITSF(LD32(sp+(16)));}
    {v[113]=BITSF(LD32(sp+(20)));}
    {v[114]=BITSF(LD32(sp+(24)));}
    {v[115]=BITSF(LD32(sp+(28)));}
    {v[116]=BITSF(LD32(sp+(32)));}
    {v[117]=BITSF(LD32(sp+(36)));}
    {v[118]=BITSF(LD32(sp+(40)));}
    {v[119]=BITSF(LD32(sp+(44)));}
    {v[124]=BITSF(v1);}
    {v[127]=BITSF(v0);}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[116];float t1=v[117];float t2=v[118];float t3=v[119];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[96]=sum;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[0];v[98]=(float)1;}
    {float s0=v[97];float t0=v[96];float d0=(s0>=t0?1.f:0.f);v[99]=d0;}
    {float s0=v[96];float d0=fabsf(s0);v[96]=d0;}
    {float s0=v[98];float t0=v[124];float d0=s0-t0;v[125]=d0;}
    {float s0=v[96];float t0=v[127];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08999A50; }
    goto L_08999A30;
L_08999A30:;
    {float s0=v[96];float d0=asinf(s0)*0.63661977236f;v[100]=d0;}
    {float s0=v[98];float t0=v[100];float d0=s0-t0;v[100]=d0;}
    {float s0=v[100];float d0=sinf(s0*1.57079632679f);v[101]=d0;}
    {float s0=v[124];float s1=v[125];float t0=v[100];v[124]=s0*t0;v[125]=s1*t0;}
    {float s0=v[101];float d0=1.0f/s0;v[102]=d0;}
    {float s0=v[124];float s1=v[125];float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=v[102];v[124]=s0*t0;v[125]=s1*t0;}
    goto L_08999A50;
L_08999A50:;
    {float s0=v[99];float t0=v[99];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08999A64; }
    goto L_08999A5C;
L_08999A5C:;
    {float s0=v[124];float d0=-s0;v[124]=d0;}
    goto L_08999A64;
L_08999A64:;
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[125];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float t0=v[124];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float t0=v[84];float t1=v[85];float t2=v[86];float t3=v[87];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[120];float t1=v[121];float t2=v[122];float t3=v[123];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[92]=sum;}
    {float s0=v[92];float t0=v[92];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08999A8C; }
    goto L_08999A80;
L_08999A80:;
    {float s0=v[92];float d0=1.0f/sqrtf(s0);v[92]=d0;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[92];v[120]=s0*t0;v[121]=s1*t0;v[122]=s2*t0;v[123]=s3*t0;}
    goto L_08999A8C;
L_08999A8C:;
    {ST32(sp+(16),FBITS(v[120]));}
    {ST32(sp+(20),FBITS(v[121]));}
    {ST32(sp+(24),FBITS(v[122]));}
    {ST32(sp+(28),FBITS(v[123]));}
    {v[112]=BITSF(LD32(sp+(16)));}
    {v[113]=BITSF(LD32(sp+(20)));}
    {v[114]=BITSF(LD32(sp+(24)));}
    {v[115]=BITSF(LD32(sp+(28)));}
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
    func_0899CFE4(a0, a1);
    goto L_08999B18;
L_08999B18:;
    v1 = LD32(s0);
    goto L_089998C8;
L_08999B20:;
    v1 = LD32(s0);
    v0 = LD32(v1+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08999B30;
L_08999B30:;
    v1 = D_08AEE80C - (-6132);
    f0 = BITSF(LD32(v1-6132));
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
    if (cnd_) { goto L_08999DB8; }
    goto L_08999B74;
L_08999B74:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08999CF8; }
    goto L_08999B84;
L_08999B84:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08999C1C; }
    goto L_08999BAC;
L_08999BAC:;
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
    if (cnd_) { goto L_08999BF8; }
    goto L_08999BE8;
L_08999BE8:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_08999BF8;
L_08999BF8:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08999C3C; }
    goto L_08999C08;
L_08999C08:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_08999C3C; }
    goto L_08999C18;
L_08999C18:;
    goto L_08999C1C;
L_08999C1C:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08999C3C; }
    goto L_08999C30;
L_08999C30:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_08999C3C;
L_08999C3C:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08999CCC; }
    goto L_08999C5C;
L_08999C5C:;
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
    if (cnd_) { goto L_08999CA8; }
    goto L_08999C98;
L_08999C98:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_08999CA8;
L_08999CA8:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08999CEC; }
    goto L_08999CB8;
L_08999CB8:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_08999CEC; }
    goto L_08999CC8;
L_08999CC8:;
    goto L_08999CCC;
L_08999CCC:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08999CEC; }
    goto L_08999CE0;
L_08999CE0:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_08999CEC;
L_08999CEC:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08999E70; }
    goto L_08999CF4;
L_08999CF4:;
    goto L_08999CF8;
L_08999CF8:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08999D8C; }
    goto L_08999D1C;
L_08999D1C:;
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
    if (cnd_) { goto L_08999D68; }
    goto L_08999D58;
L_08999D58:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_08999D68;
L_08999D68:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08999DAC; }
    goto L_08999D78;
L_08999D78:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_08999DAC; }
    goto L_08999D88;
L_08999D88:;
    goto L_08999D8C;
L_08999D8C:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08999DAC; }
    goto L_08999DA0;
L_08999DA0:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_08999DAC;
L_08999DAC:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08999E70; }
    goto L_08999DB4;
L_08999DB4:;
    goto L_08999DB8;
L_08999DB8:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08999E4C; }
    goto L_08999DDC;
L_08999DDC:;
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
    if (cnd_) { goto L_08999E28; }
    goto L_08999E18;
L_08999E18:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_08999E28;
L_08999E28:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08999E6C; }
    goto L_08999E38;
L_08999E38:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_08999E6C; }
    goto L_08999E48;
L_08999E48:;
    goto L_08999E4C;
L_08999E4C:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08999E6C; }
    goto L_08999E60;
L_08999E60:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_08999E6C;
L_08999E6C:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_08999E70;
L_08999E70:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(160),FBITS(v[96]));}
    {ST32(sp+(164),FBITS(v[97]));}
    {ST32(sp+(168),FBITS(v[98]));}
    v0 = sp + 112;
    fcc = FCMP(f20, f0, 12);
    ST32(sp+160, 0);
    a0 = s2 + 0;
    a1 = v0 + 0;
    ST32(sp+168, 0);
    {v[112]=BITSF(LD32(sp+(160)));}
    {v[113]=BITSF(LD32(sp+(164)));}
    {v[114]=BITSF(LD32(sp+(168)));}
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
    {ST32(sp+(112),FBITS(v[96]));}
    {ST32(sp+(116),FBITS(v[97]));}
    {ST32(sp+(120),FBITS(v[98]));}
    {ST32(sp+(124),FBITS(v[100]));}
    {ST32(sp+(128),FBITS(v[101]));}
    {ST32(sp+(132),FBITS(v[102]));}
    {ST32(sp+(136),FBITS(v[104]));}
    {ST32(sp+(140),FBITS(v[105]));}
    {ST32(sp+(144),FBITS(v[106]));}
    cnd_ = fcc;
    if (cnd_) { goto L_08999F38; }
    goto L_08999F30;
L_08999F30:;
    f20 = f20 - f0;
    a0 = s3 + 0;
    goto L_08999F38;
L_08999F38:;
    f20 = f20 + f20;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08999F40;
L_08999F40:;
    v0 = D_08AEE810 - (-6128);
    goto L_089999D0;
}

/* 08999F48 */
rv_t func_08999F48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr64 = v[64], vr65 = v[65], vr66 = v[66], vr67 = v[67], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr71 = v[71], vr73 = v[73], vr76 = v[76], vr77 = v[77], vr78 = v[78], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr120 = v[120], vr121 = v[121], vr122 = v[122], vr124 = v[124], vr125 = v[125], vr127 = v[127];
    u8 stack_[256] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 256);
L_08999F48:;
    sp = sp - 256;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    s0 = LD32(v0+100);
    cnd_ = s0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0899A948; }
    goto L_08999F84;
L_08999F84:;
    v0 = LD32(v1+240);
    v1 = D_08AEE814 - (-6124);
    f0 = BITSF(LD32(v1-6124));
    s3 = D_08AEE818 - (-6120);
    s2 = D_08AEE81C - (-6116);
    t_ = v0;
    ST32(sp+196, FBITS(f0));
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[124]=vr124;v[125]=vr125;v[127]=vr127;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr64=v[64];vr65=v[65];vr66=v[66];vr67=v[67];vr68=v[68];vr69=v[69];vr70=v[70];vr71=v[71];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr96=v[96];vr97=v[97];vr98=v[98];vr112=v[112];vr113=v[113];vr114=v[114];vr116=v[116];vr117=v[117];vr118=v[118];vr120=v[120];vr121=v[121];vr122=v[122];vr124=v[124];vr125=v[125];vr127=v[127];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08999FA0;
L_08999FA0:;
    v1 = LD32(s1);
    {vr112=BITSF(LD32(v0+(0)));}
    {vr113=BITSF(LD32(v0+(4)));}
    {vr114=BITSF(LD32(v0+(8)));}
    {vr116=BITSF(LD32(v0+(12)));}
    {vr117=BITSF(LD32(v0+(16)));}
    {vr118=BITSF(LD32(v0+(20)));}
    {vr120=BITSF(LD32(v0+(24)));}
    {vr121=BITSF(LD32(v0+(28)));}
    {vr122=BITSF(LD32(v0+(32)));}
    {vr124=1.57079632679f;}
    {float s0=vr0;vr125=(float)1;}
    {float s0=-(vr118);float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899A224; }
    goto L_08999FE0;
L_08999FE0:;
    {float s0=vr118;float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899A164; }
    goto L_08999FF0;
L_08999FF0:;
    {float s0=-(vr118);float d0=asinf(s0)*0.63661977236f;vr96=d0;}
    {float s0=vr114;float d0=s0;vr64=d0;}
    {float s0=vr122;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899A088; }
    goto L_0899A018;
L_0899A018:;
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
    if (cnd_) { goto L_0899A064; }
    goto L_0899A054;
L_0899A054:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_0899A064;
L_0899A064:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899A0A8; }
    goto L_0899A074;
L_0899A074:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0899A0A8; }
    goto L_0899A084;
L_0899A084:;
    goto L_0899A088;
L_0899A088:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899A0A8; }
    goto L_0899A09C;
L_0899A09C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0899A0A8;
L_0899A0A8:;
    {float s0=vr78;float d0=s0;vr97=d0;}
    {float s0=vr116;float d0=s0;vr64=d0;}
    {float s0=vr117;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899A138; }
    goto L_0899A0C8;
L_0899A0C8:;
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
    if (cnd_) { goto L_0899A114; }
    goto L_0899A104;
L_0899A104:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_0899A114;
L_0899A114:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899A158; }
    goto L_0899A124;
L_0899A124:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0899A158; }
    goto L_0899A134;
L_0899A134:;
    goto L_0899A138;
L_0899A138:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899A158; }
    goto L_0899A14C;
L_0899A14C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0899A158;
L_0899A158:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_0899A2DC; }
    goto L_0899A160;
L_0899A160:;
    goto L_0899A164;
L_0899A164:;
    {float s0=vr125;float d0=-s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=vr120;float d0=s0;vr64=d0;}
    {float s0=vr112;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899A1F8; }
    goto L_0899A188;
L_0899A188:;
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
    if (cnd_) { goto L_0899A1D4; }
    goto L_0899A1C4;
L_0899A1C4:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_0899A1D4;
L_0899A1D4:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899A218; }
    goto L_0899A1E4;
L_0899A1E4:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0899A218; }
    goto L_0899A1F4;
L_0899A1F4:;
    goto L_0899A1F8;
L_0899A1F8:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899A218; }
    goto L_0899A20C;
L_0899A20C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0899A218;
L_0899A218:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_0899A2DC; }
    goto L_0899A220;
L_0899A220:;
    goto L_0899A224;
L_0899A224:;
    {float s0=vr125;float d0=s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=vr113;float d0=s0;vr64=d0;}
    {float s0=vr121;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899A2B8; }
    goto L_0899A248;
L_0899A248:;
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
    if (cnd_) { goto L_0899A294; }
    goto L_0899A284;
L_0899A284:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_0899A294;
L_0899A294:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899A2D8; }
    goto L_0899A2A4;
L_0899A2A4:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0899A2D8; }
    goto L_0899A2B4;
L_0899A2B4:;
    goto L_0899A2B8;
L_0899A2B8:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899A2D8; }
    goto L_0899A2CC;
L_0899A2CC:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0899A2D8;
L_0899A2D8:;
    {float s0=vr78;float d0=s0;vr98=d0;}
    goto L_0899A2DC;
L_0899A2DC:;
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr124;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {ST32(sp+(0),FBITS(vr96));}
    {ST32(sp+(4),FBITS(vr97));}
    {ST32(sp+(8),FBITS(vr98));}
    v0 = LD32(v1+92);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[124]=vr124;v[125]=vr125;v[127]=vr127;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr66=v[66];vr67=v[67];vr68=v[68];vr69=v[69];vr70=v[70];vr71=v[71];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr96=v[96];vr97=v[97];vr98=v[98];vr112=v[112];vr113=v[113];vr114=v[114];vr116=v[116];vr117=v[117];vr118=v[118];vr120=v[120];vr121=v[121];vr122=v[122];vr124=v[124];vr125=v[125];vr127=v[127];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899A2F8;
L_0899A2F8:;
    {vr112=BITSF(LD32(v0+(0)));}
    {vr113=BITSF(LD32(v0+(4)));}
    {vr114=BITSF(LD32(v0+(8)));}
    {vr116=BITSF(LD32(v0+(12)));}
    {vr117=BITSF(LD32(v0+(16)));}
    {vr118=BITSF(LD32(v0+(20)));}
    {vr120=BITSF(LD32(v0+(24)));}
    {vr121=BITSF(LD32(v0+(28)));}
    {vr122=BITSF(LD32(v0+(32)));}
    {vr124=1.57079632679f;}
    {float s0=vr0;vr125=(float)1;}
    {float s0=-(vr118);float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899A578; }
    goto L_0899A334;
L_0899A334:;
    {float s0=vr118;float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899A4B8; }
    goto L_0899A344;
L_0899A344:;
    {float s0=-(vr118);float d0=asinf(s0)*0.63661977236f;vr96=d0;}
    {float s0=vr114;float d0=s0;vr64=d0;}
    {float s0=vr122;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899A3DC; }
    goto L_0899A36C;
L_0899A36C:;
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
    if (cnd_) { goto L_0899A3B8; }
    goto L_0899A3A8;
L_0899A3A8:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_0899A3B8;
L_0899A3B8:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899A3FC; }
    goto L_0899A3C8;
L_0899A3C8:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0899A3FC; }
    goto L_0899A3D8;
L_0899A3D8:;
    goto L_0899A3DC;
L_0899A3DC:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899A3FC; }
    goto L_0899A3F0;
L_0899A3F0:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0899A3FC;
L_0899A3FC:;
    {float s0=vr78;float d0=s0;vr97=d0;}
    {float s0=vr116;float d0=s0;vr64=d0;}
    {float s0=vr117;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899A48C; }
    goto L_0899A41C;
L_0899A41C:;
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
    if (cnd_) { goto L_0899A468; }
    goto L_0899A458;
L_0899A458:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_0899A468;
L_0899A468:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899A4AC; }
    goto L_0899A478;
L_0899A478:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0899A4AC; }
    goto L_0899A488;
L_0899A488:;
    goto L_0899A48C;
L_0899A48C:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899A4AC; }
    goto L_0899A4A0;
L_0899A4A0:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0899A4AC;
L_0899A4AC:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_0899A630; }
    goto L_0899A4B4;
L_0899A4B4:;
    goto L_0899A4B8;
L_0899A4B8:;
    {float s0=vr125;float d0=-s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=vr120;float d0=s0;vr64=d0;}
    {float s0=vr112;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899A54C; }
    goto L_0899A4DC;
L_0899A4DC:;
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
    if (cnd_) { goto L_0899A528; }
    goto L_0899A518;
L_0899A518:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_0899A528;
L_0899A528:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899A56C; }
    goto L_0899A538;
L_0899A538:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0899A56C; }
    goto L_0899A548;
L_0899A548:;
    goto L_0899A54C;
L_0899A54C:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899A56C; }
    goto L_0899A560;
L_0899A560:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0899A56C;
L_0899A56C:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_0899A630; }
    goto L_0899A574;
L_0899A574:;
    goto L_0899A578;
L_0899A578:;
    {float s0=vr125;float d0=s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=vr113;float d0=s0;vr64=d0;}
    {float s0=vr121;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899A60C; }
    goto L_0899A59C;
L_0899A59C:;
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
    if (cnd_) { goto L_0899A5E8; }
    goto L_0899A5D8;
L_0899A5D8:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_0899A5E8;
L_0899A5E8:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899A62C; }
    goto L_0899A5F8;
L_0899A5F8:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0899A62C; }
    goto L_0899A608;
L_0899A608:;
    goto L_0899A60C;
L_0899A60C:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899A62C; }
    goto L_0899A620;
L_0899A620:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0899A62C;
L_0899A62C:;
    {float s0=vr78;float d0=s0;vr98=d0;}
    goto L_0899A630;
L_0899A630:;
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr124;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {ST32(sp+(16),FBITS(vr96));}
    {ST32(sp+(20),FBITS(vr97));}
    {ST32(sp+(24),FBITS(vr98));}
    f0 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+16));
    f2 = BITSF(LD32(sp+20));
    f20 = BITSF(LD32(s2-6116));
    f3 = f3 - f0;
    f0 = BITSF(LD32(sp+4));
    f22 = BITSF(LD32(s3-6120));
    f1 = BITSF(LD32(sp+24));
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+8));
    f21 = f22 - f20;
    f12 = f3;
    f1 = f1 - f0;
    ST32(sp+36, FBITS(f2));
    f13 = f21;
    ST32(sp+40, FBITS(f1));
    ST32(sp+32, FBITS(f3));
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899A688;
L_0899A688:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f1 = f0 + f21;
    if (cnd_) { goto L_0899A6AC; }
    goto L_0899A698;
L_0899A698:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_0899A6AC; }
    goto L_0899A6A8;
L_0899A6A8:;
    f1 = f0;
    goto L_0899A6AC;
L_0899A6AC:;
    f20 = BITSF(LD32(s2-6116));
    f22 = BITSF(LD32(s3-6120));
    f12 = BITSF(LD32(sp+36));
    ST32(sp+32, FBITS(f1));
    f21 = f22 - f20;
    f13 = f21;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899A6C8;
L_0899A6C8:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f1 = f0 + f21;
    if (cnd_) { goto L_0899A6EC; }
    goto L_0899A6D8;
L_0899A6D8:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_0899A6EC; }
    goto L_0899A6E8;
L_0899A6E8:;
    f1 = f0;
    goto L_0899A6EC;
L_0899A6EC:;
    f20 = BITSF(LD32(s2-6116));
    f22 = BITSF(LD32(s3-6120));
    f12 = BITSF(LD32(sp+40));
    ST32(sp+36, FBITS(f1));
    f21 = f22 - f20;
    f13 = f21;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899A708;
L_0899A708:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f2 = f0 + f21;
    if (cnd_) { goto L_0899A72C; }
    goto L_0899A718;
L_0899A718:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f2 = f0 - f21;
    if (cnd_) { goto L_0899A72C; }
    goto L_0899A728;
L_0899A728:;
    f2 = f0;
    goto L_0899A72C;
L_0899A72C:;
    f0 = BITSF(LD32(sp+32));
    v0 = D_08AEE820 - (-6112);
    f1 = BITSF(LD32(sp+36));
    ST32(sp+48, FBITS(f0));
    a0 = sp + 52;
    a1 = sp + 192;
    f0 = BITSF(LD32(v0-6112));
    a2 = sp + 196;
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f2));
    ST32(sp+40, FBITS(f2));
    ST32(sp+192, FBITS(f0));
    f0 = func_0899F814(a0, a1, a2);
    goto L_0899A760;
L_0899A760:;
    v0 = D_08AEE824 - (-6108);
    f4 = BITSF(LD32(v0-6108));
    v0 = LD32(sp+48);
    f1 = BITSF(LD32(sp+48));
    f2 = BITSF(LD32(sp+56));
    ST32(sp+16, v0);
    f1 = f1 * f4;
    f2 = f2 * f4;
    v0 = LD32(sp+56);
    ST32(sp+68, FBITS(f0));
    a0 = s1 + 240;
    ST32(sp+24, v0);
    ST32(sp+64, FBITS(f1));
    f3 = BITSF(LD32(sp+24));
    f1 = BITSF(LD32(sp+16));
    v0 = LD32(sp+64);
    f3 = f3 * f4;
    f1 = f1 * f4;
    ST32(sp+52, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    ST32(sp+72, FBITS(f2));
    ST32(sp+24, FBITS(f3));
    ST32(sp+20, 0);
    ST32(s0+372, v0);
    v1 = LD32(sp+68);
    ST32(s0+376, v1);
    v0 = LD32(sp+72);
    ST32(s0+380, v0);
    v1 = LD32(sp+16);
    ST32(s0+384, v1);
    v0 = LD32(sp+20);
    ST32(s0+388, v0);
    v1 = LD32(sp+24);
    ST32(s0+392, v1);
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+36));
    ST32(sp+80, 0);
    f0 = f0 - f1;
    ST32(sp+88, 0);
    ST32(sp+84, FBITS(f0));
    {vr112=BITSF(LD32(sp+(80)));}
    {vr113=BITSF(LD32(sp+(84)));}
    {vr114=BITSF(LD32(sp+(88)));}
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
    {float s0=vr121;float t0=vr118;float d0=s0*t0;v[126]=d0;}
    {float s0=v[126];float s1=vr127;float d0=-s0;float d1=-s1;v[126]=d0;vr127=d1;}
    {float s0=v[123];float s1=vr127;float t=0;t+=s0;t+=s1;vr97=t;}
    {float s0=vr116;float t0=vr121;float d0=s0*t0;vr98=d0;}
    {float s0=vr116;float t0=vr122;float d0=s0*t0;v[100]=d0;}
    {float s0=vr116;float t0=vr118;float d0=s0*t0;v[101]=d0;}
    {float s0=vr120;float d0=-s0;v[102]=d0;}
    {float s0=vr120;float t0=vr117;float d0=s0*t0;vr124=d0;}
    {float s0=vr124;float t0=vr122;float d0=s0*t0;vr127=d0;}
    {float s0=v[126];float s1=vr127;float t=0;t+=s0;t+=s1;v[104]=t;}
    {float s0=vr124;float t0=vr118;float d0=s0*t0;vr127=d0;}
    {float s0=vr121;float t0=vr122;float d0=s0*t0;v[126]=d0;}
    {float s0=v[126];float s1=vr127;float t=0;t+=s0;t+=s1;v[105]=t;}
    {float s0=vr116;float t0=vr117;float d0=s0*t0;v[106]=d0;}
    {ST32(sp+(96),FBITS(vr96));}
    {ST32(sp+(100),FBITS(vr97));}
    {ST32(sp+(104),FBITS(vr98));}
    {ST32(sp+(108),FBITS(v[100]));}
    {ST32(sp+(112),FBITS(v[101]));}
    {ST32(sp+(116),FBITS(v[102]));}
    {ST32(sp+(120),FBITS(v[104]));}
    {ST32(sp+(124),FBITS(v[105]));}
    {ST32(sp+(128),FBITS(v[106]));}
    {vr112=BITSF(LD32(s1+(240)));}
    {vr113=BITSF(LD32(s1+(244)));}
    {vr114=BITSF(LD32(s1+(248)));}
    {vr116=BITSF(LD32(s1+(252)));}
    {vr117=BITSF(LD32(s1+(256)));}
    {vr118=BITSF(LD32(s1+(260)));}
    {vr120=BITSF(LD32(s1+(264)));}
    {vr121=BITSF(LD32(s1+(268)));}
    {vr122=BITSF(LD32(s1+(272)));}
    {vr96=BITSF(LD32(sp+(96)));}
    {vr97=BITSF(LD32(sp+(100)));}
    {vr98=BITSF(LD32(sp+(104)));}
    {v[100]=BITSF(LD32(sp+(108)));}
    {v[101]=BITSF(LD32(sp+(112)));}
    {v[102]=BITSF(LD32(sp+(116)));}
    {v[104]=BITSF(LD32(sp+(120)));}
    {v[105]=BITSF(LD32(sp+(124)));}
    {v[106]=BITSF(LD32(sp+(128)));}
    {float m00=0;m00+=vr112*vr96;m00+=vr116*vr97;m00+=vr120*vr98;float m01=0;m01+=vr113*vr96;m01+=vr117*vr97;m01+=vr121*vr98;float m02=0;m02+=vr114*vr96;m02+=vr118*vr97;m02+=vr122*vr98;float m10=0;m10+=vr112*v[100];m10+=vr116*v[101];m10+=vr120*v[102];float m11=0;m11+=vr113*v[100];m11+=vr117*v[101];m11+=vr121*v[102];float m12=0;m12+=vr114*v[100];m12+=vr118*v[101];m12+=vr122*v[102];float m20=0;m20+=vr112*v[104];m20+=vr116*v[105];m20+=vr120*v[106];float m21=0;m21+=vr113*v[104];m21+=vr117*v[105];m21+=vr121*v[106];float m22=0;m22+=vr114*v[104];m22+=vr118*v[105];m22+=vr122*v[106];v[80]=m00;v[81]=m01;v[82]=m02;v[84]=m10;v[85]=m11;v[86]=m12;v[88]=m20;v[89]=m21;v[90]=m22;}
    {ST32(sp+(144),FBITS(v[80]));}
    {ST32(sp+(148),FBITS(v[81]));}
    {ST32(sp+(152),FBITS(v[82]));}
    {ST32(sp+(156),FBITS(v[84]));}
    {ST32(sp+(160),FBITS(v[85]));}
    {ST32(sp+(164),FBITS(v[86]));}
    {ST32(sp+(168),FBITS(v[88]));}
    {ST32(sp+(172),FBITS(v[89]));}
    {ST32(sp+(176),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+144));
    f1 = BITSF(LD32(sp+176));
    ST32(s1+240, FBITS(f0));
    f0 = BITSF(LD32(sp+148));
    ST32(a0+32, FBITS(f1));
    ST32(a0+4, FBITS(f0));
    f1 = BITSF(LD32(sp+152));
    f0 = BITSF(LD32(sp+156));
    ST32(a0+8, FBITS(f1));
    ST32(a0+12, FBITS(f0));
    f1 = BITSF(LD32(sp+160));
    f0 = BITSF(LD32(sp+164));
    ST32(a0+16, FBITS(f1));
    ST32(a0+20, FBITS(f0));
    f1 = BITSF(LD32(sp+168));
    f0 = BITSF(LD32(sp+172));
    ST32(a0+24, FBITS(f1));
    ST32(a0+28, FBITS(f0));
    goto L_0899A948;
L_0899A948:;
    sp = sp + 256;
    { v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[124]=vr124;v[125]=vr125;v[127]=vr127;return (rv_t){ v0, v1, f0 }; }
    v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[124]=vr124;v[125]=vr125;v[127]=vr127;
}
