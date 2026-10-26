#include "game.h"
#include "../../platform/common/game_hooks.h"   /* native hook (tools/dc/hooks.py) */

/* 08911F14 */
rv_t func_08911F14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08911F14:;
    sp = sp - 48;
    s3 = D_08BD82C4 - (-32060);
    s2 = a0 + 0;
    s0 = s3 - 32060;
    f21 = f12;
    f20 = f13;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911F4C;
L_08911F4C:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_08911F68; }
    goto L_08911F5C;
L_08911F5C:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911F64;
L_08911F64:;
    ST32(s0+4, s1);
    goto L_08911F68;
L_08911F68:;
    v1 = D_08AED25C - (-11684);
    f0 = BITSF(LD32(v1-11684));
    f1 = sqrtf(f20);
    v0 = LD32(s0+8);
    a0 = s2 << 2;
    a0 = a0 + s2;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = D_08AED260 - (-11680);
    s0 = s3 - 32060;
    f3 = BITSF(LD32(v0-11680));
    a1 = LD32(s0+8);
    v0 = D_08BD8184 - (-32380);
    a0 = a0 << 2;
    v0 = v0 - 32380;
    a0 = a0 + v0;
    f0 = f0 - f20;
    f1 = f21 * f1;
    f0 = sqrtf(f0);
    f1 = f1 * f3;
    f0 = f21 * f0;
    f2 = BITSF(F2I(f1, 1));
    f0 = f0 * f3;
    ST32(a0+12, FBITS(f2));
    f1 = BITSF(F2I(f0, 1));
    cnd_ = a1 == 0;
    ST32(a0+8, FBITS(f1));
    if (cnd_) { goto L_08911FEC; }
    goto L_08911FD4;
L_08911FD4:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08912014; }
    goto L_08911FEC;
L_08911FEC:;
    goto L_08911FF0;
L_08911FF0:;
    v0 = 1;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08912014:;
    v0 = func_088F8C18();
    goto L_0891201C;
L_0891201C:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08912028;
L_08912028:;
    goto L_08911FF0;
}

/* 08912030 */
rv_t func_08912030(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08912030:;
    sp = sp - 64;
    s3 = D_08BD82C4 - (-32060);
    s2 = a0 + 0;
    s0 = s3 - 32060;
    f20 = f12;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08912060;
L_08912060:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_0891207C; }
    goto L_08912070;
L_08912070:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08912078;
L_08912078:;
    ST32(s0+4, s1);
    goto L_0891207C;
L_0891207C:;
    v0 = LD32(s0+8);
    v1 = s2 << 2;
    v1 = v1 + s2;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = D_08BD8184 - (-32380);
    v1 = v1 << 2;
    v0 = v0 - 32380;
    s0 = v1 + v0;
    a0 = LD32(s0);
    v0 = func_08913460(a0);
    goto L_089120A8;
L_089120A8:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s3 - 32060; goto L_089120D8; }
    goto L_089120B0;
L_089120B0:;
    f0 = BITSF(0);
    fcc = FCMP(f20, f0, 2);
    cnd_ = !fcc;
    f12 = BITSF(LD32(v0+8));
    if (cnd_) { goto L_08912150; }
    goto L_089120C4;
L_089120C4:;
    v1 = LD32(s0+16);
    v0 = (v1 >> 9) & 0x1;
    cnd_ = v0 == 0;
    v0 = v1 | 0x200;
    if (cnd_) { goto L_0891213C; }
    goto L_089120D4;
L_089120D4:;
    s0 = s3 - 32060;
    goto L_089120D8;
L_089120D8:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08912100; }
    goto L_089120E4;
L_089120E4:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08912120; }
    goto L_089120FC;
L_089120FC:;
    goto L_08912100;
L_08912100:;
    v0 = 1;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08912120:;
    v0 = func_088F8C18();
    goto L_08912128;
L_08912128:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08912134;
L_08912134:;
    goto L_08912100;
L_0891213C:;
    ST32(s0+16, v0);
    a0 = s2 + 0;
    func_089121A8(a0);
    goto L_08912148;
L_08912148:;
    s0 = s3 - 32060;
    goto L_089120D8;
L_08912150:;
    f0 = f20 * f12;
    v0 = 1;
    ST32(sp+4, v0);
    a0 = sp + 0;
    f1 = BITSF(F2I(f0, 1));
    v0 = 16384;
    a1 = sp + 4;
    a2 = sp + 8;
    ST32(sp, FBITS(f1));
    ST32(sp+8, v0);
    v0 = func_089125A8(a0, a1, a2);
    goto L_0891217C;
L_0891217C:;
    v1 = LD32(s0+16);
    ST32(s0+4, v0);
    v0 = (v1 >> 9) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s3 - 32060; goto L_089120D8; }
    goto L_08912190;
L_08912190:;
    v1 = (v1 & ~(0x1u << 9)) | ((0 & 0x1) << 9);
    ST32(s0+16, v1);
    a0 = s2 + 0;
    func_089121E4(a0);
    goto L_089121A0;
L_089121A0:;
    s0 = s3 - 32060;
    goto L_089120D8;
}

/* 089121A8 */
void func_089121A8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_089121A8:;
    v1 = a0 << 2;
    v1 = v1 + a0;
    v0 = D_08BD8184 - (-32380);
    v0 = v0 - 32380;
    v1 = v1 << 2;
    v1 = v1 + v0;
    a0 = LD32(v1+16);
    a1 = a0 | 0x20;
    v0 = (a0 >> 8) & 0x1;
    a0 = (a0 >> 9) & 0x1;
    cnd_ = v0 == a0;
    a1 = (a1 & ~(0x1u << 6)) | ((0 & 0x1) << 6);
    if (cnd_) { goto L_089121DC; }
    goto L_089121D8;
L_089121D8:;
    ST32(v1+16, a1);
    goto L_089121DC;
L_089121DC:;
    return;
}

/* 089121E4 */
void func_089121E4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_089121E4:;
    v1 = a0 << 2;
    v1 = v1 + a0;
    v0 = D_08BD8184 - (-32380);
    v0 = v0 - 32380;
    v1 = v1 << 2;
    v1 = v1 + v0;
    a0 = LD32(v1+16);
    v0 = (a0 >> 8) & 0x1;
    cnd_ = v0 != 0;
    a1 = (a0 >> 9) & 0x1;
    if (cnd_) { goto L_0891221C; }
    goto L_0891220C;
L_0891220C:;
    a0 = (a0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    cnd_ = a1 != 0;
    v0 = a0 | 0x40;
    if (cnd_) { goto L_0891221C; }
    goto L_08912218;
L_08912218:;
    ST32(v1+16, v0);
    goto L_0891221C;
L_0891221C:;
    return;
}

/* 08912224 */
void func_08912224(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08912224:;
    sp = sp - 16;
    a1 = LD32(a1+4);
    v0 = func_08A96CFC(a0, a1, t1, t2, t3);
    goto L_08912234;
L_08912234:;
    v0 = ~(0 | v0);
    v0 = v0 >> 31;
    sp = sp + 16;
    return;
}

/* 08912248 */
void func_08912248(u32 a0, u32 a1)
{
    u32 v0 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0, f22 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08912248:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = 0 + 0;
    s0 = a1 + 0;
    f0 = BITSF(LD32(a1+8));
    f20 = (float)(s32)FBITS(f0);
    f0 = func_088D9E34(a0);
    goto L_0891227C;
L_0891227C:;
    f1 = BITSF(LD32(s0+12));
    a0 = 0 + 0;
    f20 = f20 * f0;
    f21 = (float)(s32)FBITS(f1);
    f0 = func_088D9E34(a0);
    goto L_08912290;
L_08912290:;
    a0 = s1 + 0;
    f22 = BITSF(F2I(f20, 1));
    f21 = f21 * f0;
    a3 = 0 + 0;
    a1 = FBITS(f22);
    f0 = BITSF(F2I(f21, 1));
    a2 = FBITS(f0);
    t0 = 0 + 0;
    v0 = func_08A96C98(a0, a1, a2, a3, t0);
    goto L_089122B4;
L_089122B4:;
    v0 = ~(0 | v0);
    v0 = v0 >> 31;
    sp = sp + 32;
    return;
}

/* 089122DC */
u32 func_089122DC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089122DC:;
    sp = sp - 16;
    v1 = 0 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1);
    cnd_ = (s32)v0 < 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08912338; }
    goto L_08912304;
L_08912304:;
    v0 = func_08913460(a0);
    goto L_0891230C;
L_0891230C:;
    v1 = 0 + 0;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08912338; }
    goto L_08912318;
L_08912318:;
    a3 = LD32(s0+16);
    a2 = LD32(v0+4);
    a1 = LD32(v0);
    a3 = (a3 >> 3) & 0x1;
    a2 = a2 >> 1;
    v0 = func_08A96D4C(a0, a1, a2, a3);
    goto L_08912330;
L_08912330:;
    v0 = ~(0 | v0);
    v1 = v0 >> 31;
    goto L_08912338;
L_08912338:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 08912350 */
u32 func_08912350(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08912350:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08A96BC8(a0, a3, t0, t1, t2, t3);
    goto L_08912364;
L_08912364:;
    a0 = s0 + 0;
    cnd_ = (s32)v0 < 0;
    v1 = 1;
    if (cnd_) { goto L_08912384; }
    goto L_08912370;
L_08912370:;
    goto L_08912374;
L_08912374:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08912384:;
    v0 = func_08A96C04(a0, 0, 0, 0, 0, 0);
    goto L_0891238C;
L_0891238C:;
    a1 = 0 + 0;
    cnd_ = (s32)v0 < 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089123B0; }
    goto L_08912398;
L_08912398:;
    a0 = s0 + 0;
    v0 = func_08A96BC8(a0, 0, 0, 0, 0, 0);
    goto L_089123A0;
L_089123A0:;
    cnd_ = (s32)v0 >= 0;
    v1 = 1;
    if (cnd_) { goto L_08912370; }
    goto L_089123A8;
L_089123A8:;
    v1 = 0 + 0;
    goto L_08912370;
L_089123B0:;
    v0 = func_08A96C40(a0, a1, 0, 0);
    goto L_089123B8;
L_089123B8:;
    a0 = s0 + 0;
    v0 = func_08A96C04(a0, 0, 0, 0, 0, 0);
    goto L_089123C0;
L_089123C0:;
    cnd_ = (s32)v0 >= 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08912398; }
    goto L_089123C8;
L_089123C8:;
    goto L_08912374;
}

/* 089123D0 */
u32 func_089123D0(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089123D0:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08A96C04(a0, a3, t0, t1, t2, t3);
    goto L_089123E4;
L_089123E4:;
    a1 = 0 + 0;
    a0 = s0 + 0;
    cnd_ = (s32)v0 < 0;
    v1 = 1;
    if (cnd_) { goto L_08912408; }
    goto L_089123F4;
L_089123F4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08912408:;
    v0 = func_08A96C40(a0, a1, 0, 0);
    goto L_08912410;
L_08912410:;
    a0 = s0 + 0;
    v0 = func_08A96C04(a0, 0, 0, 0, 0, 0);
    goto L_08912418;
L_08912418:;
    v0 = ~(0 | v0);
    v1 = v0 >> 31;
    goto L_089123F4;
}

/* 08912424 */
u32 func_08912424(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08912424:;
    sp = sp - 16;
    a1 = 1;
    v0 = func_08A96C40(a0, a1, t2, t3);
    goto L_08912434;
L_08912434:;
    v0 = ~(0 | v0);
    v0 = v0 >> 31;
    sp = sp + 16;
    return v0;
}

/* 08912448 */
u32 func_08912448(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08912448:;
    sp = sp - 16;
    a1 = 0 + 0;
    v0 = func_08A96C40(a0, a1, t2, t3);
    goto L_08912458;
L_08912458:;
    v0 = ~(0 | v0);
    v0 = v0 >> 31;
    sp = sp + 16;
    return v0;
}

/* 0891246C */
u32 func_0891246C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0891246C:;
    sp = sp - 32;
    v0 = D_08BD8184 - (-32380);
    s3 = 0 + 0;
    s2 = a0 + 0;
    s1 = v0 - 32380;
    s0 = 0 + 0;
    goto L_08912498;
L_08912498:;
    v0 = LD32(s1+16);
    v0 = v0 & 0x13;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s0 + 1; goto L_089124B8; }
    goto L_089124A8;
L_089124A8:;
    v0 = LD32(s1);
    cnd_ = v0 == s2;
    a0 = s0 + 0;
    if (cnd_) { goto L_089124E4; }
    goto L_089124B4;
L_089124B4:;
    s0 = s0 + 1;
    goto L_089124B8;
L_089124B8:;
    v0 = s0 < 0x10u;
    cnd_ = v0 != 0;
    s1 = s1 + 20;
    if (cnd_) { goto L_08912498; }
    goto L_089124C4;
L_089124C4:;
    v0 = s3 + 0;
    sp = sp + 32;
    return v0;
L_089124E4:;
    s0 = s0 + 1;
    v0 = func_08911B40(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089124EC;
L_089124EC:;
    v0 = 0 < v0;
    s3 = s3 + v0;
    goto L_089124B8;
}

/* 089124F8 */
u64 func_089124F8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089124F8:;
    sp = sp - 32;
    s1 = a0 + 0;
    v0 = a1 ^ 0xffff;
    v1 = s1 ^ 0x1;
    v1 = v1 < 0x1u;
    s0 = v0 < 0x1u;
    a0 = D_08AD95A0 - (-27232);
    s2 = D_08BD82C4 - (-32060);
    v1 = s0 & v1;
    a0 = a0 - 27232;
    a1 = 0 + 0;
    a2 = 1;
    a3 = 1;
    t0 = 0 + 0;
    cnd_ = v1 != 0;
    s3 = s2 - 32060;
    if (cnd_) { goto L_08912588; }
    goto L_0891254C;
L_0891254C:;
    v0 = s1 < 0x1u;
    goto L_08912550;
L_08912550:;
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    v0 = D_08BD82C4 - (-32060);
    if (cnd_) { goto L_08912578; }
    goto L_0891255C;
L_0891255C:;
    goto L_08912560;
L_08912560:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08912578:;
    a0 = LD32(v0-32060);
    v0 = sceKernelDeleteSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08912580;
L_08912580:;
    goto L_08912560;
L_08912588:;
    v0 = sceKernelCreateSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08912590;
L_08912590:;
    ST32(s2-32060, v0);
    ST32(s3+8, 0);
    v0 = func_088F8C18();
    goto L_0891259C;
L_0891259C:;
    ST32(s3+4, v0);
    v0 = s1 < 0x1u;
    goto L_08912550;
}

/* 089125A8 */
u32 func_089125A8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_089125A8:;
    a0 = LD32(a0);
    v1 = LD32(a1);
    v0 = (s32)a0 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089125C4; }
    goto L_089125BC;
L_089125BC:;
    v0 = LD32(a2);
    v1 = (s32)v0 < (s32)a0 ? v0 : a0;
    goto L_089125C4;
L_089125C4:;
    v0 = v1 + 0;
    return v0;
}

/* 089125CC */
rv_t func_089125CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089125CC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_089124F8(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089125E0;
L_089125E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089125EC */
rv_t func_089125EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089125EC:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_089124F8(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08912600;
L_08912600:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0891260C */
u32 func_0891260C(u32 a0, u32 a1, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0, f22 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_0891260C:;
    sp = sp - 96;
    a2 = D_08BE8300 - (-32000);
    v1 = D_08BD8300 - (-32000);
    v1 = v1 - 32000;
    fp = a1 + 0;
    s7 = a2 - 32000;
    s5 = v1 + 0;
    s4 = 0 + 0;
    s3 = 0 + 0;
    s2 = 0xaaaa0000u;
    s2 = s2 | 0xaaab;
    s0 = 0 + 0;
    f20 = BITSF(0);
    f22 = f20;
    f21 = f20;
    v0 = LD32(a2-32000);
    v0 = v0 << 13;
    s6 = v0 + v1;
    ST32(a0, s6);
    goto L_0891268C;
L_0891268C:;
    a2 = s0 << 2;
    t1 = a2 + s7;
    v1 = LD32(t1);
    t2 = a2 + sp;
    a0 = s0 + 0;
    t0 = v1 + 1;
    { u64 p_ = (u64)t0 * s2; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    v1 = a2 + v1;
    v1 = v1 << 13;
    v1 = v1 + s5;
    ST32(t2, v1);
    a3 = hi;
    a3 = a3 >> 1;
    v0 = a3 << 1;
    v0 = v0 + a3;
    t0 = t0 - v0;
    a2 = a2 + t0;
    ST32(t1, t0);
    a2 = a2 << 13;
    a1 = v1 + 0;
    a2 = a2 + s5;
    a3 = sp + 16;
    s1 = 0 + 0;
    v0 = func_0890F754(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089126EC;
L_089126EC:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s0 + 1; goto L_0891271C; }
    goto L_089126F4;
L_089126F4:;
    f0 = BITSF(LD32(sp+16));
    fcc = FCMP(f21, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { s0 = s0 + 1; goto L_0891271C; }
    goto L_08912708;
L_08912708:;
    cnd_ = s0 != 0;
    s1 = 1;
    if (cnd_) { goto L_089128DC; }
    goto L_08912710;
L_08912710:;
    f22 = f0;
    goto L_08912714;
L_08912714:;
    s4 = s4 + 1;
    s0 = s0 + 1;
    goto L_0891271C;
L_0891271C:;
    v0 = (s32)s0 < 2;
    cnd_ = v0 != 0;
    s3 = s3 | s1;
    if (cnd_) { goto L_0891268C; }
    goto L_08912728;
L_08912728:;
    v0 = D_08AED26C - (-11668);
    v1 = 2;
    cnd_ = s4 == v1;
    f0 = BITSF(LD32(v0-11668));
    if (cnd_) { goto L_08912740; }
    goto L_08912738;
L_08912738:;
    v0 = D_08AED268 - (-11672);
    f0 = BITSF(LD32(v0-11672));
    goto L_08912740;
L_08912740:;
    v1 = D_08B1B464 - (-19356);
    f1 = BITSF(LD32(v1-19356));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    v0 = D_08AED270 - (-11664);
    if (cnd_) { goto L_089128B8; }
    goto L_08912758;
L_08912758:;
    f2 = f0;
    f0 = BITSF(LD32(v0-11664));
    f0 = f1 + f0;
    fcc = FCMP(f2, f0, 14);
    goto L_0891276C;
L_0891276C:;
    cnd_ = !fcc;
    if (cnd_) { f2 = f0; goto L_08912774; }
    goto L_08912774;
L_08912774:;
    ST32(v1-19356, FBITS(f2));
    goto L_08912778;
L_08912778:;
    cnd_ = s3 == 0;
    v0 = D_08AED264 - (-11676);
    if (cnd_) { goto L_08912870; }
    goto L_08912780;
L_08912780:;
    f0 = BITSF(LD32(v1-19356));
    a2 = LD32(sp);
    v1 = s6 + 0;
    f1 = f20 * f0;
    f0 = f22 * f0;
    a1 = LD32(sp+4);
    a0 = FBITS(f1);
    v0 = FBITS(f0);
    {v[32]=BITSF(v0);}
    {v[33]=BITSF(a0);}
    a0 = 0 + 0;
    goto L_089127AC;
L_089127AC:;
    {u32 a_=a2+(0);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(0);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {u32 a_=a2+(16);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(16);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    {float s0=v[96];float s1=v[97];u32 in_[4]={FBITS(s0),FBITS(s1),0,0};u32 out_[4]={0,0,0,0};for(int i=0;i<2;i++)for(int j=0;j<2;j++)out_[2*i+j]=((in_[i]>>(16*j))&0xffff)<<16;float d0=BITSF(out_[0]);float d1=BITSF(out_[1]);float d2=BITSF(out_[2]);float d3=BITSF(out_[3]);v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    {float s0=v[112];float s1=v[113];u32 in_[4]={FBITS(s0),FBITS(s1),0,0};u32 out_[4]={0,0,0,0};for(int i=0;i<2;i++)for(int j=0;j<2;j++)out_[2*i+j]=((in_[i]>>(16*j))&0xffff)<<16;float d0=BITSF(out_[0]);float d1=BITSF(out_[1]);float d2=BITSF(out_[2]);float d3=BITSF(out_[3]);v[80]=d0;v[81]=d1;v[82]=d2;v[83]=d3;}
    {float s0=v[98];float s1=v[99];u32 in_[4]={FBITS(s0),FBITS(s1),0,0};u32 out_[4]={0,0,0,0};for(int i=0;i<2;i++)for(int j=0;j<2;j++)out_[2*i+j]=((in_[i]>>(16*j))&0xffff)<<16;float d0=BITSF(out_[0]);float d1=BITSF(out_[1]);float d2=BITSF(out_[2]);float d3=BITSF(out_[3]);v[68]=d0;v[69]=d1;v[70]=d2;v[71]=d3;}
    {float s0=v[114];float s1=v[115];u32 in_[4]={FBITS(s0),FBITS(s1),0,0};u32 out_[4]={0,0,0,0};for(int i=0;i<2;i++)for(int j=0;j<2;j++)out_[2*i+j]=((in_[i]>>(16*j))&0xffff)<<16;float d0=BITSF(out_[0]);float d1=BITSF(out_[1]);float d2=BITSF(out_[2]);float d3=BITSF(out_[3]);v[84]=d0;v[85]=d1;v[86]=d2;v[87]=d3;}
    {float s0=v[100];float s1=v[101];u32 in_[4]={FBITS(s0),FBITS(s1),0,0};u32 out_[4]={0,0,0,0};for(int i=0;i<2;i++)for(int j=0;j<2;j++)out_[2*i+j]=((in_[i]>>(16*j))&0xffff)<<16;float d0=BITSF(out_[0]);float d1=BITSF(out_[1]);float d2=BITSF(out_[2]);float d3=BITSF(out_[3]);v[72]=d0;v[73]=d1;v[74]=d2;v[75]=d3;}
    {float s0=v[116];float s1=v[117];u32 in_[4]={FBITS(s0),FBITS(s1),0,0};u32 out_[4]={0,0,0,0};for(int i=0;i<2;i++)for(int j=0;j<2;j++)out_[2*i+j]=((in_[i]>>(16*j))&0xffff)<<16;float d0=BITSF(out_[0]);float d1=BITSF(out_[1]);float d2=BITSF(out_[2]);float d3=BITSF(out_[3]);v[88]=d0;v[89]=d1;v[90]=d2;v[91]=d3;}
    {float s0=v[102];float s1=v[103];u32 in_[4]={FBITS(s0),FBITS(s1),0,0};u32 out_[4]={0,0,0,0};for(int i=0;i<2;i++)for(int j=0;j<2;j++)out_[2*i+j]=((in_[i]>>(16*j))&0xffff)<<16;float d0=BITSF(out_[0]);float d1=BITSF(out_[1]);float d2=BITSF(out_[2]);float d3=BITSF(out_[3]);v[76]=d0;v[77]=d1;v[78]=d2;v[79]=d3;}
    {float s0=v[118];float s1=v[119];u32 in_[4]={FBITS(s0),FBITS(s1),0,0};u32 out_[4]={0,0,0,0};for(int i=0;i<2;i++)for(int j=0;j<2;j++)out_[2*i+j]=((in_[i]>>(16*j))&0xffff)<<16;float d0=BITSF(out_[0]);float d1=BITSF(out_[1]);float d2=BITSF(out_[2]);float d3=BITSF(out_[3]);v[92]=d0;v[93]=d1;v[94]=d2;v[95]=d3;}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=(float)(s32)FBITS(s0)*BITSF(0x38800000u);float d1=(float)(s32)FBITS(s1)*BITSF(0x38800000u);float d2=(float)(s32)FBITS(s2)*BITSF(0x38800000u);float d3=(float)(s32)FBITS(s3)*BITSF(0x38800000u);v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float d0=(float)(s32)FBITS(s0)*BITSF(0x38800000u);float d1=(float)(s32)FBITS(s1)*BITSF(0x38800000u);float d2=(float)(s32)FBITS(s2)*BITSF(0x38800000u);float d3=(float)(s32)FBITS(s3)*BITSF(0x38800000u);v[80]=d0;v[81]=d1;v[82]=d2;v[83]=d3;}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=(float)(s32)FBITS(s0)*BITSF(0x38800000u);float d1=(float)(s32)FBITS(s1)*BITSF(0x38800000u);float d2=(float)(s32)FBITS(s2)*BITSF(0x38800000u);float d3=(float)(s32)FBITS(s3)*BITSF(0x38800000u);v[68]=d0;v[69]=d1;v[70]=d2;v[71]=d3;}
    {float s0=v[84];float s1=v[85];float s2=v[86];float s3=v[87];float d0=(float)(s32)FBITS(s0)*BITSF(0x38800000u);float d1=(float)(s32)FBITS(s1)*BITSF(0x38800000u);float d2=(float)(s32)FBITS(s2)*BITSF(0x38800000u);float d3=(float)(s32)FBITS(s3)*BITSF(0x38800000u);v[84]=d0;v[85]=d1;v[86]=d2;v[87]=d3;}
    {float s0=v[72];float s1=v[73];float s2=v[74];float s3=v[75];float d0=(float)(s32)FBITS(s0)*BITSF(0x38800000u);float d1=(float)(s32)FBITS(s1)*BITSF(0x38800000u);float d2=(float)(s32)FBITS(s2)*BITSF(0x38800000u);float d3=(float)(s32)FBITS(s3)*BITSF(0x38800000u);v[72]=d0;v[73]=d1;v[74]=d2;v[75]=d3;}
    {float s0=v[88];float s1=v[89];float s2=v[90];float s3=v[91];float d0=(float)(s32)FBITS(s0)*BITSF(0x38800000u);float d1=(float)(s32)FBITS(s1)*BITSF(0x38800000u);float d2=(float)(s32)FBITS(s2)*BITSF(0x38800000u);float d3=(float)(s32)FBITS(s3)*BITSF(0x38800000u);v[88]=d0;v[89]=d1;v[90]=d2;v[91]=d3;}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=(float)(s32)FBITS(s0)*BITSF(0x38800000u);float d1=(float)(s32)FBITS(s1)*BITSF(0x38800000u);float d2=(float)(s32)FBITS(s2)*BITSF(0x38800000u);float d3=(float)(s32)FBITS(s3)*BITSF(0x38800000u);v[76]=d0;v[77]=d1;v[78]=d2;v[79]=d3;}
    {float s0=v[92];float s1=v[93];float s2=v[94];float s3=v[95];float d0=(float)(s32)FBITS(s0)*BITSF(0x38800000u);float d1=(float)(s32)FBITS(s1)*BITSF(0x38800000u);float d2=(float)(s32)FBITS(s2)*BITSF(0x38800000u);float d3=(float)(s32)FBITS(s3)*BITSF(0x38800000u);v[92]=d0;v[93]=d1;v[94]=d2;v[95]=d3;}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float t0=v[32];v[64]=s0*t0;v[65]=s1*t0;v[66]=s2*t0;v[67]=s3*t0;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float t0=v[33];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float t0=v[32];v[68]=s0*t0;v[69]=s1*t0;v[70]=s2*t0;v[71]=s3*t0;}
    {float s0=v[84];float s1=v[85];float s2=v[86];float s3=v[87];float t0=v[33];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[72];float s1=v[73];float s2=v[74];float s3=v[75];float t0=v[32];v[72]=s0*t0;v[73]=s1*t0;v[74]=s2*t0;v[75]=s3*t0;}
    {float s0=v[88];float s1=v[89];float s2=v[90];float s3=v[91];float t0=v[33];v[88]=s0*t0;v[89]=s1*t0;v[90]=s2*t0;v[91]=s3*t0;}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float t0=v[32];v[76]=s0*t0;v[77]=s1*t0;v[78]=s2*t0;v[79]=s3*t0;}
    {float s0=v[92];float s1=v[93];float s2=v[94];float s3=v[95];float t0=v[33];v[92]=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float t0=v[80];float t1=v[81];float t2=v[82];float t3=v[83];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float t0=v[84];float t1=v[85];float t2=v[86];float t3=v[87];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[68]=d0;v[69]=d1;v[70]=d2;v[71]=d3;}
    {float s0=v[72];float s1=v[73];float s2=v[74];float s3=v[75];float t0=v[88];float t1=v[89];float t2=v[90];float t3=v[91];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[72]=d0;v[73]=d1;v[74]=d2;v[75]=d3;}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float t0=v[92];float t1=v[93];float t2=v[94];float t3=v[95];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[76]=d0;v[77]=d1;v[78]=d2;v[79]=d3;}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=BITSF(F2I(s0*BITSF(0x46800000u),0));float d1=BITSF(F2I(s1*BITSF(0x46800000u),0));float d2=BITSF(F2I(s2*BITSF(0x46800000u),0));float d3=BITSF(F2I(s3*BITSF(0x46800000u),0));v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=BITSF(F2I(s0*BITSF(0x46800000u),0));float d1=BITSF(F2I(s1*BITSF(0x46800000u),0));float d2=BITSF(F2I(s2*BITSF(0x46800000u),0));float d3=BITSF(F2I(s3*BITSF(0x46800000u),0));v[68]=d0;v[69]=d1;v[70]=d2;v[71]=d3;}
    {float s0=v[72];float s1=v[73];float s2=v[74];float s3=v[75];float d0=BITSF(F2I(s0*BITSF(0x46800000u),0));float d1=BITSF(F2I(s1*BITSF(0x46800000u),0));float d2=BITSF(F2I(s2*BITSF(0x46800000u),0));float d3=BITSF(F2I(s3*BITSF(0x46800000u),0));v[72]=d0;v[73]=d1;v[74]=d2;v[75]=d3;}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=BITSF(F2I(s0*BITSF(0x46800000u),0));float d1=BITSF(F2I(s1*BITSF(0x46800000u),0));float d2=BITSF(F2I(s2*BITSF(0x46800000u),0));float d3=BITSF(F2I(s3*BITSF(0x46800000u),0));v[76]=d0;v[77]=d1;v[78]=d2;v[79]=d3;}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];u32 in_[4]={FBITS(s0),FBITS(s1),FBITS(s2),FBITS(s3)};u32 out_[4]={0,0,0,0};for(int i=0;i<4;i++)out_[i>>1]|=(((u32)((s32)in_[i]>>16))&0xffff)<<(16*(i&1));float d0=BITSF(out_[0]);float d1=BITSF(out_[1]);v[48]=d0;v[49]=d1;}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];u32 in_[4]={FBITS(s0),FBITS(s1),FBITS(s2),FBITS(s3)};u32 out_[4]={0,0,0,0};for(int i=0;i<4;i++)out_[i>>1]|=(((u32)((s32)in_[i]>>16))&0xffff)<<(16*(i&1));float d0=BITSF(out_[0]);float d1=BITSF(out_[1]);v[50]=d0;v[51]=d1;}
    {float s0=v[72];float s1=v[73];float s2=v[74];float s3=v[75];u32 in_[4]={FBITS(s0),FBITS(s1),FBITS(s2),FBITS(s3)};u32 out_[4]={0,0,0,0};for(int i=0;i<4;i++)out_[i>>1]|=(((u32)((s32)in_[i]>>16))&0xffff)<<(16*(i&1));float d0=BITSF(out_[0]);float d1=BITSF(out_[1]);v[52]=d0;v[53]=d1;}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];u32 in_[4]={FBITS(s0),FBITS(s1),FBITS(s2),FBITS(s3)};u32 out_[4]={0,0,0,0};for(int i=0;i<4;i++)out_[i>>1]|=(((u32)((s32)in_[i]>>16))&0xffff)<<(16*(i&1));float d0=BITSF(out_[0]);float d1=BITSF(out_[1]);v[54]=d0;v[55]=d1;}
    a2 = a2 + 32;
    {u32 a_=v1+(0);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    a1 = a1 + 32;
    {u32 a_=v1+(16);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    a0 = a0 + 16;
    v0 = a0 < 0x1000u;
    cnd_ = v0 != 0;
    v1 = v1 + 32;
    if (cnd_) { goto L_089127AC; }
    goto L_0891286C;
L_0891286C:;
    v0 = D_08AED264 - (-11676);
    goto L_08912870;
L_08912870:;
    f0 = BITSF(LD32(v0-11676));
    v0 = s3 + 0;
    ST32(fp, FBITS(f0));
    sp = sp + 96;
    return v0;
L_089128B8:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    f2 = f0;
    if (cnd_) { goto L_08912778; }
    goto L_089128C8;
L_089128C8:;
    f0 = BITSF(LD32(v0-11664));
    f0 = f1 - f0;
    fcc = FCMP(f0, f2, 14);
    goto L_0891276C;
L_089128DC:;
    f20 = f0;
    goto L_08912714;
}

/* 089128E4 */
rv_t func_089128E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089128E4:;
    sp = sp - 64;
    v0 = 0 + 0;
    fpu_csr = v0 & 0x0183FFFFu; fcc = (v0 >> 23) & 1;
    a0 = D_08BD8300 - (-32000);
    a0 = a0 - 32000;
    a1 = 0 + 0;
    a2 = 0x10000u;
    s6 = D_08B1B45C - (-19364);
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08912934;
L_08912934:;
    v1 = LD_U8(s6-19364);
    cnd_ = v1 == 0;
    v0 = D_08AED274 - (-11660);
    if (cnd_) { goto L_08912A6C; }
    goto L_08912940;
L_08912940:;
    v1 = D_08AED278 - (-11656);
    f22 = BITSF(LD32(v0-11660));
    f21 = BITSF(LD32(v1-11656));
    f20 = BITSF(0);
    s5 = D_08BD82C4 - (-32060);
    a0 = sp + 0;
    goto L_08912958;
L_08912958:;
    a1 = sp + 4;
    v0 = func_0891260C(a0, a1, 0);
    goto L_08912960;
L_08912960:;
    a0 = LD32(sp);
    a1 = sp + 8;
    s3 = v0 + 0;
    s2 = 0 + 0;
    v0 = func_088FE430(a0, a1, 0, 0);
    goto L_08912974;
L_08912974:;
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(sp+8));
    if (cnd_) { goto L_0891298C; }
    goto L_0891297C;
L_0891297C:;
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    if (cnd_) { s2 = 1; goto L_0891298C; }
    goto L_0891298C;
L_0891298C:;
    s0 = s5 - 32060;
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08912994;
L_08912994:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_089129B0; }
    goto L_089129A4;
L_089129A4:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089129AC;
L_089129AC:;
    ST32(s0+4, s1);
    goto L_089129B0;
L_089129B0:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = func_089111B4(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_089129C0;
L_089129C0:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_08912B54; }
    goto L_089129C8;
L_089129C8:;
    cnd_ = s2 == 0;
    f0 = BITSF(LD32(sp+8));
    if (cnd_) { goto L_08912AC8; }
    goto L_089129D0;
L_089129D0:;
    f0 = f0 * f22;
    f1 = f0 + f21;
    fcc = FCMP(f20, f0, 12);
    f1 = BITSF(F2I(f1, 1));
    s1 = FBITS(f1);
    cnd_ = fcc;
    s0 = 0 + 0;
    if (cnd_) { goto L_089129F8; }
    goto L_089129EC;
L_089129EC:;
    f0 = f0 - f21;
    f0 = BITSF(F2I(f0, 1));
    s1 = FBITS(f0);
    goto L_089129F8;
L_089129F8:;
    a0 = LD32(sp);
    goto L_089129FC;
L_089129FC:;
    v0 = s0 << 2;
    a1 = s1 + 0;
    a0 = a0 + v0;
    a2 = s1 + 0;
    s0 = s0 + 256;
    func_08A96A64(a0, a1, a2, 0, 0);
    goto L_08912A14;
L_08912A14:;
    v1 = s0 < 0x800u;
    cnd_ = v1 != 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_089129FC; }
    goto L_08912A20;
L_08912A20:;
    s0 = s5 - 32060;
    goto L_08912A24;
L_08912A24:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08912A48; }
    goto L_08912A30;
L_08912A30:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08912AAC; }
    goto L_08912A48;
L_08912A48:;
    cnd_ = s3 != 0;
    a1 = LD32(sp);
    if (cnd_) { goto L_08912A58; }
    goto L_08912A50;
L_08912A50:;
    cnd_ = s4 == 0;
    if (cnd_) { goto L_08912A60; }
    goto L_08912A58;
L_08912A58:;
    a0 = 0x8000;
    v0 = sceAudioOutput2OutputBlocking(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08912A60;
L_08912A60:;
    v0 = LD_U8(s6-19364);
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08912958; }
    goto L_08912A6C;
L_08912A6C:;
    a0 = 0 + 0;
    v0 = sceKernelExitThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08912A74;
L_08912A74:;
    v0 = 0 + 0;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08912AAC:;
    v0 = func_088F8C18();
    goto L_08912AB4;
L_08912AB4:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08912AC0;
L_08912AC0:;
    goto L_08912A48;
L_08912AC8:;
    cnd_ = s3 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08912B2C; }
    goto L_08912AD0;
L_08912AD0:;
    f0 = BITSF(LD32(sp+4));
    f0 = f0 * f22;
    f1 = f0 + f21;
    fcc = FCMP(f20, f0, 12);
    f1 = BITSF(F2I(f1, 1));
    s1 = FBITS(f1);
    cnd_ = fcc;
    a0 = LD32(sp);
    if (cnd_) { goto L_08912B00; }
    goto L_08912AF0;
L_08912AF0:;
    f0 = f0 - f21;
    f0 = BITSF(F2I(f0, 1));
    s1 = FBITS(f0);
    s0 = 0 + 0;
    goto L_08912B00;
L_08912B00:;
    v0 = s0 << 2;
    a1 = s1 + 0;
    a0 = a0 + v0;
    a2 = s1 + 0;
    s0 = s0 + 256;
    func_08A96A64(a0, a1, a2, 0, 0);
    goto L_08912B18;
L_08912B18:;
    v1 = s0 < 0x800u;
    cnd_ = v1 != 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08912B00; }
    goto L_08912B24;
L_08912B24:;
    s0 = s5 - 32060;
    goto L_08912A24;
L_08912B2C:;
    a0 = LD32(sp);
    goto L_08912B30;
L_08912B30:;
    v0 = s0 << 2;
    s0 = s0 + 256;
    a0 = a0 + v0;
    func_08A96A0C(a0, 0, 0, 0, 0);
    goto L_08912B40;
L_08912B40:;
    v1 = s0 < 0x800u;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(sp); goto L_08912B30; }
    goto L_08912B4C;
L_08912B4C:;
    s0 = s5 - 32060;
    goto L_08912A24;
L_08912B54:;
    cnd_ = s2 != 0;
    s0 = s5 - 32060;
    if (cnd_) { goto L_08912A24; }
    goto L_08912B5C;
L_08912B5C:;
    cnd_ = s3 != 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08912A24; }
    goto L_08912B64;
L_08912B64:;
    a1 = 0 + 0;
    a2 = 8192;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08912B70;
L_08912B70:;
    s0 = s5 - 32060;
    goto L_08912A24;
}

/* 08912B78 */
void func_08912B78(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08912B78:;
    sp = sp - 16;
    v0 = D_08BE8300 - (-32000);
    v0 = v0 - 32000;
    v1 = 1;
    goto L_08912B90;
L_08912B90:;
    v1 = v1 - 1;
    ST32(v0, 0);
    cnd_ = (s32)v1 >= 0;
    v0 = v0 + 4;
    if (cnd_) { goto L_08912B90; }
    goto L_08912BA0;
L_08912BA0:;
    a0 = 2048;
    v0 = sceAudioOutput2Reserve(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08912BA8;
L_08912BA8:;
    a0 = D_08AD95AC - (-27220);
    a1 = ((u32)(uintptr_t)func_089128E4) - (10468);
    a0 = a0 - 27220;
    a1 = a1 + 10468;
    a2 = 20;
    a3 = 0x8000;
    t0 = 16384;
    t1 = 0 + 0;
    v0 = sceKernelCreateThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08912BCC;
L_08912BCC:;
    cnd_ = (s32)v0 < 0;
    s0 = D_08B1B460 - (-19360);
    if (cnd_) { goto L_08912BF0; }
    goto L_08912BD4;
L_08912BD4:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    ST32(s0-19360, v0);
    v0 = sceKernelStartThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08912BE8;
L_08912BE8:;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { goto L_08912C00; }
    goto L_08912BF0;
L_08912BF0:;
    sp = sp + 16;
    return;
L_08912C00:;
    a0 = LD32(s0-19360);
    v0 = sceKernelDeleteThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08912C08;
L_08912C08:;
    v1 = (u32)-1;
    ST32(s0-19360, v1);
    goto L_08912BF0;
}

/* 08912C14 */
void func_08912C14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08912C14:;
    sp = sp - 48;
    s3 = D_08BD82C4 - (-32060);
    s0 = s3 - 32060;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08912C38;
L_08912C38:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_08912C54; }
    goto L_08912C48;
L_08912C48:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08912C50;
L_08912C50:;
    ST32(s0+4, s1);
    goto L_08912C54;
L_08912C54:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = D_08B1B45C - (-19364);
    s0 = s3 - 32060;
    ST8(v0-19364, 0);
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    s2 = D_08B1B460 - (-19360);
    if (cnd_) { goto L_08912C94; }
    goto L_08912C78;
L_08912C78:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08912D54; }
    goto L_08912C90;
L_08912C90:;
    s2 = D_08B1B460 - (-19360);
    goto L_08912C94;
L_08912C94:;
    a0 = LD32(s2-19360);
    v0 = 0xf0000u;
    v0 = v0 | 0x4240;
    a1 = sp + 0;
    s1 = s3 - 32060;
    ST32(sp, v0);
    v0 = sceKernelWaitThreadEnd(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08912CB0;
L_08912CB0:;
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08912CB8;
L_08912CB8:;
    s0 = v0 + 0;
    v0 = LD32(s1+4);
    cnd_ = v0 == s0;
    if (cnd_) { goto L_08912CD4; }
    goto L_08912CC8;
L_08912CC8:;
    a0 = s1 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08912CD0;
L_08912CD0:;
    ST32(s1+4, s0);
    goto L_08912CD4;
L_08912CD4:;
    v0 = LD32(s1+8);
    a0 = LD32(s2-19360);
    s0 = s3 - 32060;
    v0 = v0 + 1;
    ST32(s1+8, v0);
    v0 = sceKernelDeleteThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08912CEC;
L_08912CEC:;
    v1 = (u32)-1;
    ST32(s2-19360, v1);
    v0 = sceAudioOutput2Release(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08912CF8;
L_08912CF8:;
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08912D20; }
    goto L_08912D04;
L_08912D04:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08912D38; }
    goto L_08912D1C;
L_08912D1C:;
    goto L_08912D20;
L_08912D20:;
    sp = sp + 48;
    return;
L_08912D38:;
    v0 = func_088F8C18();
    goto L_08912D40;
L_08912D40:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08912D4C;
L_08912D4C:;
    goto L_08912D20;
L_08912D54:;
    v0 = func_088F8C18();
    goto L_08912D5C;
L_08912D5C:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08912D68;
L_08912D68:;
    s2 = D_08B1B460 - (-19360);
    goto L_08912C94;
}

/* 08912D70 */
void func_08912D70(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08912D70:;
    sp = sp - 16;
    v0 = D_08BE8340 - (-31936);
    a0 = v0 - 31936;
    v1 = 0 + 0;
    a1 = (u32)-1;
    goto L_08912D88;
L_08912D88:;
    v1 = v1 + 1;
    v0 = v1 < 0x10u;
    ST32(a0, a1);
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_08912D88; }
    goto L_08912D9C;
L_08912D9C:;
    func_089110C8(t1, t2, t3);
    goto L_08912DA4;
L_08912DA4:;
    func_08910D60(0, 0, 0, 0);
    goto L_08912DAC;
L_08912DAC:;
    func_08912B78(0, 0, 0, 0, 0, 0, 0);
    goto L_08912DB4;
L_08912DB4:;
    v1 = 16;
    v0 = D_08B1B468 - (-19352);
    ST32(v0-19352, v1);
    sp = sp + 16;
    return;
}

/* 08912DCC */
void func_08912DCC(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08912DCC:;
    sp = sp - 32;
    s4 = D_08BEDB00 - (-9472);
    s3 = D_08BEDD00 - (-8960);
    s2 = 2;
    func_08910DF8(a1, a2, a3, t0, t1, t2, t3);
    goto L_08912E00;
L_08912E00:;
    s0 = 0 + 0;
    func_089111AC();
    goto L_08912E08;
L_08912E08:;
    v0 = D_08BE8380 - (-31872);
    v0 = v0 - 31872;
    s1 = v0 + 0;
    s6 = v0 + 4;
    s5 = v0 + 0;
    goto L_08912E1C;
L_08912E1C:;
    v0 = LD32(s1);
    cnd_ = v0 == s2;
    a0 = s0 << 4;
    if (cnd_) { goto L_08912E9C; }
    goto L_08912E28;
L_08912E28:;
    s0 = s0 + 1;
    goto L_08912E2C;
L_08912E2C:;
    v0 = s0 < 0x578u;
    cnd_ = v0 != 0;
    s1 = s1 + 16;
    if (cnd_) { goto L_08912E1C; }
    goto L_08912E38;
L_08912E38:;
    v0 = D_08BEDD00 - (-8960);
    v1 = D_08BEDB00 - (-9472);
    a2 = v0 - 8960;
    a1 = v1 - 9472;
    a0 = 0 + 0;
    goto L_08912E4C;
L_08912E4C:;
    v0 = a0 + a2;
    v1 = LD_U8(v0);
    a0 = a0 + 1;
    cnd_ = v1 != 0;
    v0 = a0 < 0x2u;
    if (cnd_) { goto L_08912E64; }
    goto L_08912E60;
L_08912E60:;
    ST8(a1, 0);
    goto L_08912E64;
L_08912E64:;
    cnd_ = v0 != 0;
    a1 = a1 + 256;
    if (cnd_) { goto L_08912E4C; }
    goto L_08912E6C;
L_08912E6C:;
    v0 = D_08BEDD04 - (-8956);
    ST32(v0-8956, 0);
    sp = sp + 32;
    return;
L_08912E9C:;
    v0 = a0 + s5;
    a2 = LD32(v0+4);
    a3 = 0 + 0;
    a1 = 0 + 0;
    t0 = s3 - 8960;
    v1 = s4 - 9472;
    goto L_08912EB4;
L_08912EB4:;
    cnd_ = a2 == v1;
    v0 = a1 + t0;
    if (cnd_) { goto L_08912EF0; }
    goto L_08912EBC;
L_08912EBC:;
    a1 = a1 + 1;
    v0 = a1 < 0x2u;
    cnd_ = v0 != 0;
    v1 = v1 + 256;
    if (cnd_) { goto L_08912EB4; }
    goto L_08912ECC;
L_08912ECC:;
    cnd_ = a3 != 0;
    if (cnd_) { s0 = s0 + 1; goto L_08912E2C; }
    goto L_08912ED4;
L_08912ED4:;
    ST32(s1, 0);
    a0 = a0 + s6;
    a1 = 0 + 0;
    a2 = 12;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08912EE8;
L_08912EE8:;
    s0 = s0 + 1;
    goto L_08912E2C;
L_08912EF0:;
    a3 = LD_U8(v0);
    goto L_08912ECC;
}

/* 08912EF8 */
void func_08912EF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08912EF8:;
    sp = sp - 16;
    func_08912C14(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08912F08;
L_08912F08:;
    func_089100F8(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08912F10;
L_08912F10:;
    func_08911174();
    goto L_08912F18;
L_08912F18:;
    sp = sp + 16;
    return;
}

/* 08912F24 */
void func_08912F24(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_08912F24:;
    v0 = D_08BEDD00 - (-8960);
    v1 = D_08BEDB00 - (-9472);
    t0 = v0 - 8960;
    v1 = v1 - 9472;
    a1 = 0 + 0;
    a3 = 1;
    v0 = (u32)(s32)LD_S8(v1);
    goto L_08912F40;
L_08912F40:;
    a2 = a1 + t0;
    a1 = a1 + 1;
    v1 = v1 + 256;
    cnd_ = v0 == 0;
    a0 = a1 < 0x2u;
    if (cnd_) { goto L_08912F58; }
    goto L_08912F54;
L_08912F54:;
    ST8(a2, a3);
    goto L_08912F58;
L_08912F58:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = (u32)(s32)LD_S8(v1); goto L_08912F40; }
    goto L_08912F60;
L_08912F60:;
    return;
}

/* 08912F68 */
u32 func_08912F68(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08912F68:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = func_08913448(a0);
    goto L_08912F84;
L_08912F84:;
    v0 = v0 ^ 0x1;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08912FD0; }
    goto L_08912F94;
L_08912F94:;
    v0 = func_08911818(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08912F9C;
L_08912F9C:;
    v1 = v0 + 0;
    goto L_08912FA0;
L_08912FA0:;
    cnd_ = v1 == 0;
    a0 = s1 << 2;
    if (cnd_) { goto L_08912FB8; }
    goto L_08912FA8;
L_08912FA8:;
    v0 = D_08BE8340 - (-31936);
    v0 = v0 - 31936;
    v0 = a0 + v0;
    ST32(v0, s0);
    goto L_08912FB8;
L_08912FB8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08912FD0:;
    v0 = func_08913448(a0);
    goto L_08912FD8;
L_08912FD8:;
    v1 = D_08BE8380 - (-31872);
    a0 = s0 << 4;
    v1 = v1 - 31872;
    v0 = v0 ^ 0x2;
    a2 = a0 + v1;
    t0 = 0 + 0;
    a0 = s1 + 0;
    t1 = 1;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08912FA0; }
    goto L_08913000;
L_08913000:;
    a3 = LD32(a2+12);
    a1 = LD32(a2+4);
    a2 = LD32(a2+8);
    v0 = func_089105B4(a0, a1, a2, a3, t0, t1, 0, 0);
    goto L_08913010;
L_08913010:;
    v1 = v0 + 0;
    goto L_08912FA0;
}

/* 08913018 */
u32 func_08913018(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08913018:;
    sp = sp - 16;
    v0 = D_08BE8340 - (-31936);
    v1 = a0 << 2;
    v0 = v0 - 31936;
    s1 = v1 + v0;
    s0 = a0 + 0;
    s2 = a1 & 0xff;
    a0 = LD32(s1);
    v0 = func_08913448(a0);
    goto L_0891304C;
L_0891304C:;
    v0 = v0 ^ 0x1;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08913084; }
    goto L_0891305C;
L_0891305C:;
    v0 = func_08911940(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08913064;
L_08913064:;
    v1 = v0 + 0;
    goto L_08913068;
L_08913068:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08913084:;
    a0 = LD32(s1);
    v0 = func_08913448(a0);
    goto L_0891308C;
L_0891308C:;
    v0 = v0 ^ 0x2;
    a0 = s0 + 0;
    a1 = s2 + 0;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08913068; }
    goto L_089130A0;
L_089130A0:;
    func_08910BE4(a0, a1);
    goto L_089130A8;
L_089130A8:;
    v1 = 1;
    goto L_08913068;
}

/* 089130B0 */
u64 func_089130B0(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089130B0:;
    sp = sp - 16;
    v0 = D_08BE8340 - (-31936);
    v1 = a0 << 2;
    v0 = v0 - 31936;
    s1 = v1 + v0;
    s0 = a0 + 0;
    a0 = LD32(s1);
    v0 = func_08913448(a0);
    goto L_089130DC;
L_089130DC:;
    v0 = v0 ^ 0x1;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0891310C; }
    goto L_089130E8;
L_089130E8:;
    v0 = func_08911A6C(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_089130F0;
L_089130F0:;
    v1 = v0 + 0;
    goto L_089130F4;
L_089130F4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0891310C:;
    a0 = LD32(s1);
    v0 = func_08913448(a0);
    goto L_08913114;
L_08913114:;
    v0 = v0 ^ 0x2;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089130F4; }
    goto L_08913124;
L_08913124:;
    v0 = func_08910D0C(a0);
    goto L_0891312C;
L_0891312C:;
    v1 = v0 + 0;
    goto L_089130F4;
}

/* 08913134 */
void func_08913134(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08913134:;
    sp = sp - 32;
    s3 = D_08BE8340 - (-31936);
    v0 = s3 - 31936;
    s2 = a0 << 2;
    s1 = s2 + v0;
    s0 = a0 + 0;
    a0 = LD32(s1);
    v0 = func_08913448(a0);
    goto L_08913168;
L_08913168:;
    v0 = v0 ^ 0x1;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089131B0; }
    goto L_08913174;
L_08913174:;
    v0 = func_08911C44(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_0891317C;
L_0891317C:;
    a1 = v0 + 0;
    goto L_08913180;
L_08913180:;
    v1 = s3 - 31936;
    v1 = s2 + v1;
    v0 = a1 + 0;
    a0 = (u32)-1;
    ST32(v1, a0);
    sp = sp + 32;
    return;
L_089131B0:;
    a0 = LD32(s1);
    v0 = func_08913448(a0);
    goto L_089131B8;
L_089131B8:;
    v0 = v0 ^ 0x2;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08913180; }
    goto L_089131C8;
L_089131C8:;
    func_08910930(a0);
    goto L_089131D0;
L_089131D0:;
    a1 = 1;
    goto L_08913180;
}

/* 089131D8 */
u64 func_089131D8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089131D8:;
    sp = sp - 16;
    v0 = D_08BE8340 - (-31936);
    v1 = a0 << 2;
    v0 = v0 - 31936;
    s1 = v1 + v0;
    s0 = a0 + 0;
    a0 = LD32(s1);
    v0 = func_08913448(a0);
    goto L_08913204;
L_08913204:;
    v0 = v0 ^ 0x1;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08913234; }
    goto L_08913210;
L_08913210:;
    v0 = func_08911D34(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08913218;
L_08913218:;
    v1 = v0 + 0;
    goto L_0891321C;
L_0891321C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08913234:;
    a0 = LD32(s1);
    v0 = func_08913448(a0);
    goto L_0891323C;
L_0891323C:;
    v0 = v0 ^ 0x2;
    a0 = s0 + 0;
    a1 = 1;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0891321C; }
    goto L_08913250;
L_08913250:;
    func_08910C38(a0, a1);
    goto L_08913258;
L_08913258:;
    v1 = 1;
    goto L_0891321C;
}

/* 08913260 */
u64 func_08913260(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08913260:;
    sp = sp - 16;
    v0 = D_08BE8340 - (-31936);
    v1 = a0 << 2;
    v0 = v0 - 31936;
    s1 = v1 + v0;
    s0 = a0 + 0;
    a0 = LD32(s1);
    v0 = func_08913448(a0);
    goto L_0891328C;
L_0891328C:;
    v0 = v0 ^ 0x1;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089132BC; }
    goto L_08913298;
L_08913298:;
    v0 = func_08911E24(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_089132A0;
L_089132A0:;
    v1 = v0 + 0;
    goto L_089132A4;
L_089132A4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_089132BC:;
    a0 = LD32(s1);
    v0 = func_08913448(a0);
    goto L_089132C4;
L_089132C4:;
    v0 = v0 ^ 0x2;
    a0 = s0 + 0;
    a1 = 0 + 0;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089132A4; }
    goto L_089132D8;
L_089132D8:;
    func_08910C38(a0, a1);
    goto L_089132E0;
L_089132E0:;
    v1 = 1;
    goto L_089132A4;
}

/* 089132E8 */
rv_t func_089132E8(u32 a0, float f12, float f13, float f14)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089132E8:;
    sp = sp - 32;
    v0 = D_08BE8340 - (-31936);
    v1 = a0 << 2;
    v0 = v0 - 31936;
    s1 = v1 + v0;
    s0 = a0 + 0;
    f22 = f12;
    f21 = f13;
    f20 = f14;
    a0 = LD32(s1);
    v0 = func_08913448(a0);
    goto L_0891332C;
L_0891332C:;
    v0 = v0 ^ 0x1;
    a0 = s0 + 0;
    f12 = f22;
    f13 = f21;
    cnd_ = v0 != 0;
    f14 = f20;
    if (cnd_) { goto L_08913374; }
    goto L_08913344;
L_08913344:;
    { rv_t r_ = func_08911F14(a0, 0, 0, 0, 0, 0, 0, 0, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891334C;
L_0891334C:;
    v1 = v0 + 0;
    goto L_08913350;
L_08913350:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08913374:;
    a0 = LD32(s1);
    v0 = func_08913448(a0);
    goto L_0891337C;
L_0891337C:;
    v0 = v0 ^ 0x2;
    a0 = s0 + 0;
    f12 = f22;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08913350; }
    goto L_08913390;
L_08913390:;
    { u64 r_ = func_08910F10(a0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08913398;
L_08913398:;
    v1 = 1;
    goto L_08913350;
}

/* 089133A0 */
rv_t func_089133A0(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089133A0:;
    sp = sp - 32;
    v0 = D_08BE8340 - (-31936);
    v1 = a0 << 2;
    v0 = v0 - 31936;
    s1 = v1 + v0;
    s0 = a0 + 0;
    f20 = f12;
    a0 = LD32(s1);
    v0 = func_08913448(a0);
    goto L_089133D4;
L_089133D4:;
    v0 = v0 ^ 0x1;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    f12 = f20;
    if (cnd_) { goto L_0891340C; }
    goto L_089133E4;
L_089133E4:;
    { rv_t r_ = func_08912030(a0, 0, 0, 0, 0, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089133EC;
L_089133EC:;
    v1 = v0 + 0;
    goto L_089133F0;
L_089133F0:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0891340C:;
    a0 = LD32(s1);
    v0 = func_08913448(a0);
    goto L_08913414;
L_08913414:;
    f0 = BITSF(0);
    v0 = v0 ^ 0x2;
    a0 = s0 + 0;
    fcc = FCMP(f20, f0, 2);
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089133F0; }
    goto L_0891342C;
L_0891342C:;
    cnd_ = fcc;
    a1 = 1;
    if (cnd_) { goto L_08913438; }
    goto L_08913434;
L_08913434:;
    a1 = 0 + 0;
    goto L_08913438;
L_08913438:;
    func_08910C38(a0, a1);
    goto L_08913440;
L_08913440:;
    v1 = 1;
    goto L_089133F0;
}

/* 08913448 */
u32 func_08913448(u32 a0)
{
    u32 v0 = 0;
L_08913448:;
    v0 = D_08BE8380 - (-31872);
    v0 = v0 - 31872;
    a0 = a0 << 4;
    a0 = a0 + v0;
    v0 = LD32(a0);
    return v0;
}

/* 08913460 */
u32 func_08913460(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_08913460:;
    v0 = D_08BE8380 - (-31872);
    v0 = v0 - 31872;
    a0 = a0 << 4;
    v1 = a0 + v0;
    a1 = LD32(v1);
    v0 = v0 + 4;
    v1 = 1;
    cnd_ = a1 != v1;
    v0 = a0 + v0;
    if (cnd_) { goto L_0891348C; }
    goto L_08913484;
L_08913484:;
    return v0;
L_0891348C:;
    v0 = 0 + 0;
    return v0;
}

/* 08913494 */
void func_08913494(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0;
L_08913494:;
    v0 = D_08BE8380 - (-31872);
    v0 = v0 - 31872;
    a0 = a0 << 4;
    a0 = a0 + v0;
    a2 = a2 & 0xff;
    v0 = LD32(a0+8);
    v1 = 1;
    v0 = (v0 & ~(0x1u << 0)) | ((a2 & 0x1) << 0);
    v0 = (v0 & ~(0x7fffffffu << 1)) | ((a3 & 0x7fffffff) << 1);
    ST32(a0+8, v0);
    ST32(a0, v1);
    ST32(a0+4, a1);
    ST32(a0+12, FBITS(f12));
    return;
}

/* 089134CC */
void func_089134CC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089134CC:;
    v0 = D_08BE8380 - (-31872);
    v0 = v0 - 31872;
    v1 = a0 << 4;
    a0 = v0 + 4;
    a0 = v1 + a0;
    v1 = v1 + v0;
    ST32(v1, 0);
    sp = sp - 16;
    a1 = 0 + 0;
    a2 = 12;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089134FC;
L_089134FC:;
    sp = sp + 16;
    return;
}

/* 08913508 */
void func_08913508(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08913508:;
    sp = sp - 16;
    s1 = D_08BEDD04 - (-8956);
    v0 = D_08BEDB00 - (-9472);
    a1 = 0 + 0;
    ST32(s1-8956, 0);
    s0 = v0 - 9472;
    goto L_0891352C;
L_0891352C:;
    v0 = (u32)(s32)LD_S8(s0);
    a1 = a1 + 1;
    cnd_ = v0 == 0;
    v1 = a1 < 0x2u;
    if (cnd_) { goto L_08913558; }
    goto L_0891353C;
L_0891353C:;
    cnd_ = v1 != 0;
    s0 = s0 + 256;
    if (cnd_) { goto L_0891352C; }
    goto L_08913544;
L_08913544:;
    sp = sp + 16;
    return;
L_08913558:;
    a1 = D_08AD95C0 - (-27200);
    t0 = a0 + 0;
    a1 = a1 - 27200;
    a0 = s0 + 0;
    a2 = 256;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08913574;
L_08913574:;
    ST32(s1-8956, s0);
    goto L_08913544;
}

/* 0891357C */
void func_0891357C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891357C:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = a3 + 0;
    s0 = a2 + 0;
    v0 = func_088DAB48(a0, a1, t1, t2, t3);
    goto L_0891359C;
L_0891359C:;
    v1 = D_08BE8380 - (-31872);
    a0 = v0 << 4;
    v1 = v1 - 31872;
    cnd_ = (s32)v0 < 0;
    a0 = a0 + v1;
    if (cnd_) { goto L_089135CC; }
    goto L_089135B0;
L_089135B0:;
    v0 = D_08BEDD04 - (-8956);
    v1 = LD32(v0-8956);
    v0 = 2;
    ST32(a0+12, s0);
    ST32(a0, v0);
    ST32(a0+8, s1);
    ST32(a0+4, v1);
    goto L_089135CC;
L_089135CC:;
    sp = sp + 16;
    return;
}

/* 089135E0 */
void func_089135E0(void)
{
L_089135E0:;
    return;
}

/* 089135E8 */
void func_089135E8(void)
{
L_089135E8:;
    return;
}

/* 089135F0 */
void func_089135F0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089135F0:;
    sp = sp - 16;
    v0 = D_08B2C18C - (-15988);
    s0 = v0 - 15988;
    v0 = 1;
    v1 = LD_U8(s0+18);
    a0 = s0 + 0;
    cnd_ = v1 == v0;
    a1 = 1;
    if (cnd_) { goto L_08913620; }
    goto L_08913618;
L_08913618:;
    { u64 r_ = func_0890CFE8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08913620;
L_08913620:;
    v0 = LD_U8(s0+24);
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0891366C; }
    goto L_08913630;
L_08913630:;
    v0 = LD32(s0+40);
    goto L_08913634;
L_08913634:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0891365C; }
    goto L_08913640;
L_08913640:;
    v0 = D_08B44C28 - (19496);
    goto L_08913644;
L_08913644:;
    a0 = LD32(v0+19496);
    func_0890C3C0(a0);
    goto L_0891364C;
L_0891364C:;
    sp = sp + 16;
    return;
L_0891365C:;
    func_0890D298(a0, a1);
    goto L_08913664;
L_08913664:;
    v0 = D_08B44C28 - (19496);
    goto L_08913644;
L_0891366C:;
    v0 = func_0890D084(a0, a1);
    goto L_08913674;
L_08913674:;
    v0 = LD32(s0+40);
    goto L_08913634;
}

/* 0891367C */
void func_0891367C(void)
{
L_0891367C:;
    return;
}

/* 08913684 */
void func_08913684(void)
{
    u32 v0 = 0;
L_08913684:;
    v0 = D_08BF3D60 - (15712);
    ST32(v0+15712, 0);
    return;
}

/* 08913690 */
void func_08913690(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, t8 = 0, t9 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08913690:;
    v0 = D_08B159FC - (23036);
    t8 = LD32(v0+23036);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    f1 = BITSF(0);
    v0 = t8 + 12;
    f5 = BITSF(LD32(v0+32));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+20));
    v1 = D_08BF3DA0 - (15776);
    a0 = FBITS(f4);
    v0 = FBITS(f3);
    {v[12]=BITSF(a0);}
    a0 = FBITS(f5);
    {v[13]=BITSF(v0);}
    {v[14]=BITSF(a0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    sp = sp - 32;
    t9 = v1 + 15776;
    fcc = FCMP(f0, f1, 2);
    ST32(sp, FBITS(f4));
    ST32(sp+4, FBITS(f3));
    ST32(sp+8, FBITS(f5));
    ST32(v1+15776, FBITS(f4));
    ST32(t9+4, FBITS(f3));
    cnd_ = fcc;
    ST32(t9+8, FBITS(f5));
    if (cnd_) { goto L_08913738; }
    goto L_08913700;
L_08913700:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {a0=FBITS(v[2]);}
    f3 = BITSF(a0);
    {v0=FBITS(v[0]);}
    {a0=FBITS(v[1]);}
    ST32(sp, v0);
    ST32(sp+4, a0);
    ST32(sp+8, FBITS(f3));
    ST32(v1+15776, v0);
    ST32(t9+4, a0);
    ST32(t9+8, FBITS(f3));
    goto L_08913738;
L_08913738:;
    v0 = D_08AED27C - (-11652);
    f1 = BITSF(LD32(t8+80));
    f0 = BITSF(LD32(v0-11652));
    f4 = BITSF(LD32(v1+15776));
    f5 = BITSF(LD32(t9+4));
    f1 = f1 + f0;
    f3 = BITSF(LD32(t9+8));
    a0 = D_08BF3D64 - (15716);
    v1 = a0 + 15716;
    f3 = f3 * f1;
    f4 = f4 * f1;
    f5 = f5 * f1;
    a1 = v1 + 12;
    ST32(sp+24, FBITS(f3));
    a2 = v1 + 24;
    a3 = v1 + 36;
    ST32(sp+16, FBITS(f4));
    v0 = D_08BD3780 - (14208);
    v0 = v0 + 14208;
    ST32(sp+20, FBITS(f5));
    t2 = v0 + 176;
    t3 = v0 + 192;
    f0 = BITSF(LD32(t8));
    f1 = BITSF(LD32(t8+4));
    f2 = BITSF(LD32(t8+8));
    f0 = f0 + f4;
    f1 = f1 + f5;
    f2 = f2 + f3;
    t1 = v0 + 208;
    ST32(a0+15716, FBITS(f0));
    t0 = v0 + 224;
    a0 = v1 + 48;
    ST32(v1+4, FBITS(f1));
    t4 = t9 + 12;
    t5 = t9 + 24;
    ST32(v1+8, FBITS(f2));
    t6 = t9 + 36;
    t7 = t9 + 48;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    f1 = BITSF(LD32(t8));
    f2 = BITSF(LD32(t8+4));
    f0 = BITSF(LD32(t8+8));
    ST32(v1+12, FBITS(f1));
    ST32(a1+8, FBITS(f0));
    ST32(a1+4, FBITS(f2));
    f1 = BITSF(LD32(t8));
    f2 = BITSF(LD32(t8+4));
    f0 = BITSF(LD32(t8+8));
    ST32(v1+24, FBITS(f1));
    ST32(a2+8, FBITS(f0));
    ST32(a2+4, FBITS(f2));
    f0 = BITSF(LD32(t8));
    f2 = BITSF(LD32(t8+8));
    f1 = BITSF(LD32(t8+4));
    ST32(v1+36, FBITS(f0));
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f2));
    f5 = BITSF(LD32(v0+224));
    f3 = BITSF(LD32(t2+8));
    f2 = BITSF(LD32(t3+8));
    f4 = BITSF(LD32(t1+8));
    f6 = BITSF(LD32(t0+8));
    f7 = BITSF(LD32(v0+176));
    f8 = BITSF(LD32(t2+4));
    f9 = BITSF(LD32(v0+192));
    f10 = BITSF(LD32(t3+4));
    f11 = BITSF(LD32(v0+208));
    f12 = BITSF(LD32(t1+4));
    f13 = BITSF(LD32(t0+4));
    f7 = BITSF(FBITS(f7) ^ 0x80000000u);
    f8 = BITSF(FBITS(f8) ^ 0x80000000u);
    f3 = BITSF(FBITS(f3) ^ 0x80000000u);
    f9 = BITSF(FBITS(f9) ^ 0x80000000u);
    f10 = BITSF(FBITS(f10) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f11 = BITSF(FBITS(f11) ^ 0x80000000u);
    f12 = BITSF(FBITS(f12) ^ 0x80000000u);
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    f5 = BITSF(FBITS(f5) ^ 0x80000000u);
    f13 = BITSF(FBITS(f13) ^ 0x80000000u);
    f6 = BITSF(FBITS(f6) ^ 0x80000000u);
    f0 = BITSF(LD32(t8+8));
    f1 = BITSF(LD32(t8));
    f14 = BITSF(LD32(t8+4));
    ST32(a0+8, FBITS(f0));
    ST32(v1+48, FBITS(f1));
    ST32(a0+4, FBITS(f14));
    ST32(t4+8, FBITS(f3));
    ST32(t4+4, FBITS(f8));
    ST32(t5+8, FBITS(f2));
    ST32(t5+4, FBITS(f10));
    ST32(t6+8, FBITS(f4));
    ST32(t6+4, FBITS(f12));
    ST32(t9+48, FBITS(f5));
    ST32(t7+8, FBITS(f6));
    ST32(t9+12, FBITS(f7));
    ST32(t9+24, FBITS(f9));
    ST32(t9+36, FBITS(f11));
    ST32(t7+4, FBITS(f13));
    sp = sp + 32;
    return;
}

/* 089138D4 */
u32 func_089138D4(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11];
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_089138D4:;
    f9 = BITSF(LD32(a2+8));
    f7 = BITSF(LD32(a2));
    f8 = BITSF(LD32(a2+4));
    f12 = BITSF(LD32(a0+4));
    f10 = BITSF(LD32(a0+8));
    f11 = BITSF(LD32(a0));
    f5 = f12 - f8;
    f6 = f10 - f9;
    f4 = f11 - f7;
    t1 = LD32(a3+8);
    a2 = LD32(a3);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    a3 = LD32(a3+4);
    v0 = FBITS(f4);
    t2 = FBITS(f5);
    {vr4=BITSF(v0);}
    f1 = BITSF(0);
    {vr5=BITSF(t2);}
    v0 = FBITS(f6);
    f13 = BITSF(LD32(a1));
    {vr6=BITSF(v0);}
    f14 = BITSF(LD32(a1+4));
    f15 = BITSF(LD32(a1+8));
    {vr0=BITSF(a2);}
    {vr1=BITSF(a3);}
    {vr2=BITSF(t1);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {t2=FBITS(vr4);}
    f0 = BITSF(t2);
    f3 = f13 - f7;
    f2 = f15 - f9;
    fcc = FCMP(f0, f1, 12);
    f1 = f14 - f8;
    sp = sp - 80;
    t2 = FBITS(f3);
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    v0 = FBITS(f1);
    {vr4=BITSF(t2);}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr5=BITSF(v0);}
    t2 = FBITS(f2);
    {vr0=BITSF(a2);}
    {vr6=BITSF(t2);}
    {vr1=BITSF(a3);}
    ST32(sp, FBITS(f4));
    {vr2=BITSF(t1);}
    t0 = a0 + 0;
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    ST32(sp+4, FBITS(f5));
    {v0=FBITS(vr4);}
    t2 = 0 + 0;
    f4 = BITSF(v0);
    ST32(sp+8, FBITS(f6));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f1));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f2));
    if (cnd_) { goto L_089139BC; }
    goto L_089139B8;
L_089139B8:;
    t2 = 1;
    goto L_089139BC;
L_089139BC:;
    f0 = BITSF(0);
    fcc = FCMP(f4, f0, 12);
    cnd_ = fcc;
    v1 = 0 + 0;
    if (cnd_) { goto L_089139D4; }
    goto L_089139D0;
L_089139D0:;
    v1 = 1;
    goto L_089139D4;
L_089139D4:;
    cnd_ = t2 != 0;
    if (cnd_) { goto L_08913B08; }
    goto L_089139DC;
L_089139DC:;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08913AEC; }
    goto L_089139E4;
L_089139E4:;
    f5 = f13 - f11;
    goto L_089139E8;
L_089139E8:;
    f6 = f14 - f12;
    f4 = f15 - f10;
    v0 = a2 + 0;
    f0 = BITSF(0);
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr4=BITSF(a2);}
    a2 = FBITS(f5);
    {vr5=BITSF(a3);}
    {vr0=BITSF(a2);}
    {vr6=BITSF(t1);}
    a2 = FBITS(f6);
    {vr1=BITSF(a2);}
    a2 = FBITS(f4);
    {vr2=BITSF(a2);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {a2=FBITS(vr4);}
    f13 = BITSF(a2);
    f1 = f7 - f11;
    f2 = f8 - f12;
    f3 = f9 - f10;
    fcc = FCMP(f13, f0, 2);
    a2 = FBITS(f1);
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    ST32(sp+32, FBITS(f1));
    {vr4=BITSF(a2);}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    ST32(sp+36, FBITS(f2));
    {vr0=BITSF(v0);}
    a2 = FBITS(f3);
    v0 = FBITS(f2);
    {vr1=BITSF(a3);}
    {vr5=BITSF(v0);}
    ST32(sp+40, FBITS(f3));
    {vr6=BITSF(a2);}
    {vr2=BITSF(t1);}
    ST32(sp+32, FBITS(f5));
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    ST32(sp+36, FBITS(f6));
    f0 = BITSF(v0);
    ST32(sp+40, FBITS(f4));
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_08913AEC; }
    goto L_08913A98;
L_08913A98:;
    f0 = f0 / f13;
    ST32(sp+64, FBITS(f5));
    ST32(sp+68, FBITS(f6));
    ST32(sp+72, FBITS(f4));
    f2 = f4 * f0;
    f1 = f5 * f0;
    f0 = f6 * f0;
    f6 = f10 + f2;
    f4 = f11 + f1;
    f5 = f12 + f0;
    ST32(sp+48, FBITS(f1));
    ST32(sp+52, FBITS(f0));
    ST32(sp+56, FBITS(f2));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f5));
    cnd_ = t2 != 0;
    ST32(sp+40, FBITS(f6));
    if (cnd_) { goto L_08913AF4; }
    goto L_08913ADC;
L_08913ADC:;
    v0 = 1;
    ST32(t0+8, FBITS(f6));
    ST32(t0, FBITS(f4));
    ST32(t0+4, FBITS(f5));
    goto L_08913AEC;
L_08913AEC:;
    sp = sp + 80;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;return v0; }
L_08913AF4:;
    ST32(a1+8, FBITS(f6));
    v0 = 1;
    ST32(a1, FBITS(f4));
    ST32(a1+4, FBITS(f5));
    goto L_08913AEC;
L_08913B08:;
    cnd_ = v1 != 0;
    v0 = 1;
    if (cnd_) { goto L_08913AEC; }
    goto L_08913B10;
L_08913B10:;
    f5 = f13 - f11;
    goto L_089139E8;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;
}

/* 08913B18 */
void func_08913B18(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr12 = v[12], vr13 = v[13], vr14 = v[14];
    u8 stack_[736] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 736);
L_08913B18:;
    sp = sp - 736;
    s5 = D_08BF3D60 - (15712);
    v0 = LD32(s5+15712);
    s2 = a0 + 0;
    v0 = v0 < 0x400u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08913C58; }
    goto L_08913B70;
L_08913B70:;
    v0 = D_08B2C18C - (-15988);
    a0 = v0 - 15988;
    a1 = LD32(s2+40);
    v0 = LD32(a0+28);
    cnd_ = v0 == a1;
    v0 = D_08B159FC - (23036);
    if (cnd_) { goto L_08913B94; }
    goto L_08913B88;
L_08913B88:;
    func_0890D108(a0, a1);
    goto L_08913B90;
L_08913B90:;
    v0 = D_08B159FC - (23036);
    goto L_08913B94;
L_08913B94:;
    v1 = LD32(v0+23036);
    a2 = s2 + 44;
    f5 = BITSF(LD32(a2+8));
    v0 = v1 + 12;
    f0 = BITSF(LD32(v1+12));
    f1 = BITSF(LD32(v0+12));
    f2 = BITSF(LD32(v0+24));
    ST32(sp+96, FBITS(f0));
    s3 = sp + 176;
    a0 = s3 + 0;
    ST32(sp+100, FBITS(f1));
    a1 = s2 + 0;
    s4 = sp + 160;
    ST32(sp+104, FBITS(f2));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+16));
    f2 = BITSF(LD32(v0+28));
    ST32(sp+112, FBITS(f0));
    ST32(sp+116, FBITS(f1));
    ST32(sp+120, FBITS(f2));
    f0 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+20));
    ST32(sp+136, FBITS(f0));
    ST32(sp+128, FBITS(f1));
    ST32(sp+132, FBITS(f2));
    f4 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v1+4));
    f3 = BITSF(LD32(a2+4));
    f2 = BITSF(LD32(s2+44));
    ST32(sp+148, FBITS(f1));
    ST32(sp+144, FBITS(f0));
    ST32(sp+152, FBITS(f4));
    ST32(sp+160, FBITS(f2));
    ST32(sp+164, FBITS(f3));
    ST32(sp+168, FBITS(f5));
    func_088EB720(a0, a1);
    goto L_08913C2C;
L_08913C2C:;
    v0 = D_08BF3D64 - (15716);
    v1 = D_08BF3DA0 - (15776);
    s0 = v0 + 15716;
    s1 = v1 + 15776;
    a0 = s4 + 0;
    a1 = s3 + 0;
    a2 = s0 + 0;
    a3 = s1 + 0;
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[9]=vr9;v[10]=vr10;__auto_type vr_t_ = func_089138D4(a0, a1, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr_t_; });
    goto L_08913C50;
L_08913C50:;
    cnd_ = v0 != 0;
    a2 = s0 + 12;
    if (cnd_) { goto L_08913CA0; }
    goto L_08913C58;
L_08913C58:;
    goto L_08913C5C;
L_08913C5C:;
    sp = sp + 736;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;return; }
L_08913CA0:;
    a3 = s1 + 12;
    a0 = s4 + 0;
    a1 = s3 + 0;
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[9]=vr9;v[10]=vr10;__auto_type vr_t_ = func_089138D4(a0, a1, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr_t_; });
    goto L_08913CB0;
L_08913CB0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08913C5C; }
    goto L_08913CB8;
L_08913CB8:;
    a2 = s0 + 24;
    a3 = s1 + 24;
    a0 = s4 + 0;
    a1 = s3 + 0;
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[9]=vr9;v[10]=vr10;__auto_type vr_t_ = func_089138D4(a0, a1, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr_t_; });
    goto L_08913CCC;
L_08913CCC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08913C5C; }
    goto L_08913CD4;
L_08913CD4:;
    a2 = s0 + 36;
    a3 = s1 + 36;
    a0 = s4 + 0;
    a1 = s3 + 0;
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[9]=vr9;v[10]=vr10;__auto_type vr_t_ = func_089138D4(a0, a1, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr_t_; });
    goto L_08913CE8;
L_08913CE8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08913C5C; }
    goto L_08913CF0;
L_08913CF0:;
    a2 = s0 + 48;
    a3 = s1 + 48;
    a0 = s4 + 0;
    a1 = s3 + 0;
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[9]=vr9;v[10]=vr10;__auto_type vr_t_ = func_089138D4(a0, a1, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr_t_; });
    goto L_08913D04;
L_08913D04:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08913C5C; }
    goto L_08913D0C;
L_08913D0C:;
    a0 = s2 + 0;
    a1 = sp + 320;
    a2 = sp + 324;
    func_088EB778(a0, a1, a2);
    goto L_08913D1C;
L_08913D1C:;
    f0 = BITSF(LD32(sp+160));
    f4 = BITSF(LD32(sp+144));
    f3 = BITSF(LD32(sp+148));
    f2 = BITSF(LD32(sp+152));
    f4 = f4 - f0;
    f0 = BITSF(LD32(sp+164));
    f20 = BITSF(0);
    {u32 a_=sp+(336);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f3 = f3 - f0;
    f0 = BITSF(LD32(sp+168));
    v0 = FBITS(f4);
    {vr12=BITSF(v0);}
    f2 = f2 - f0;
    v1 = FBITS(f3);
    {vr13=BITSF(v1);}
    ST32(sp+192, FBITS(f4));
    v0 = FBITS(f2);
    {vr14=BITSF(v0);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    ST32(sp+196, FBITS(f3));
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    ST32(sp+200, FBITS(f2));
    if (cnd_) { goto L_08913DBC; }
    goto L_08913D84;
L_08913D84:;
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];vr4=(float)1;vr5=(float)1;vr6=(float)1;v[7]=(float)1;}
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    f3 = BITSF(v0);
    {v1=FBITS(vr0);}
    {v0=FBITS(vr1);}
    ST32(sp+208, v1);
    ST32(sp+212, v0);
    ST32(sp+216, FBITS(f3));
    ST32(sp+192, v1);
    ST32(sp+196, v0);
    ST32(sp+200, FBITS(f3));
    goto L_08913DBC;
L_08913DBC:;
    s0 = sp + 224;
    s1 = sp + 240;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    func_088EB618(a0, a1, a2);
    goto L_08913DD4;
L_08913DD4:;
    v0 = D_08AED284 - (-11644);
    f1 = BITSF(LD32(v0-11644));
    f0 = BITSF(LD32(sp+236));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    s6 = D_08AED288 - (-11640);
    if (cnd_) { goto L_08914B00; }
    goto L_08913DF4;
L_08913DF4:;
    f0 = BITSF(LD32(s6-11640));
    f0 = f1 + f0;
    goto L_08913DFC;
L_08913DFC:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(v0-11644));
    v1 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    s3 = v1 << 8;
    if (cnd_) { goto L_08914AF4; }
    goto L_08913E24;
L_08913E24:;
    f0 = BITSF(LD32(s6-11640));
    f0 = f2 + f0;
    goto L_08913E2C;
L_08913E2C:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(v0-11644));
    v1 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    s3 = s3 + v1;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s3 = s3 << 8;
    if (cnd_) { goto L_08914AE8; }
    goto L_08913E58;
L_08913E58:;
    f0 = BITSF(LD32(s6-11640));
    f0 = f1 + f0;
    goto L_08913E60;
L_08913E60:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(v0-11644));
    v1 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    s3 = s3 + v1;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s3 = s3 << 8;
    if (cnd_) { goto L_08914ADC; }
    goto L_08913E8C;
L_08913E8C:;
    f0 = BITSF(LD32(s6-11640));
    f0 = f1 + f0;
    goto L_08913E94;
L_08913E94:;
    f1 = BITSF(F2I(f0, 1));
    f0 = BITSF(LD32(v0-11644));
    f2 = BITSF(0);
    v1 = FBITS(f1);
    f1 = BITSF(LD32(sp+252));
    f1 = f1 * f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    s3 = s3 + v1;
    if (cnd_) { goto L_08914AD0; }
    goto L_08913EBC;
L_08913EBC:;
    f0 = BITSF(LD32(s6-11640));
    f0 = f1 + f0;
    goto L_08913EC4;
L_08913EC4:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(s1+8));
    f1 = BITSF(LD32(v0-11644));
    v1 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    s4 = v1 << 8;
    if (cnd_) { goto L_08914AC4; }
    goto L_08913EEC;
L_08913EEC:;
    f0 = BITSF(LD32(s6-11640));
    f0 = f2 + f0;
    goto L_08913EF4;
L_08913EF4:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(s1+4));
    f0 = BITSF(LD32(v0-11644));
    v1 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    s4 = s4 + v1;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s4 = s4 << 8;
    if (cnd_) { goto L_08914AB8; }
    goto L_08913F20;
L_08913F20:;
    f0 = BITSF(LD32(s6-11640));
    f0 = f1 + f0;
    goto L_08913F28;
L_08913F28:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(s1));
    f0 = BITSF(LD32(v0-11644));
    v0 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    s4 = s4 + v0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s4 = s4 << 8;
    if (cnd_) { goto L_08914AAC; }
    goto L_08913F54;
L_08913F54:;
    f0 = BITSF(LD32(s6-11640));
    f0 = f1 + f0;
    goto L_08913F5C;
L_08913F5C:;
    f0 = BITSF(F2I(f0, 1));
    v0 = LD32(s2);
    v1 = FBITS(f0);
    a0 = LD32(v0+20);
    s4 = s4 + v1;
    v0 = func_0883AE54(a0);
    goto L_08913F74;
L_08913F74:;
    s1 = v0 + 0;
    v0 = D_08AED280 - (-11648);
    f2 = BITSF(LD32(v0-11648));
    v0 = D_08AED28C - (-11636);
    f0 = BITSF(LD32(v0-11636));
    a0 = s2 + 56;
    t5 = LD32(s2+56);
    a1 = LD32(sp+192);
    f0 = f2 - f0;
    a2 = LD32(sp+196);
    t4 = LD32(sp+200);
    {u32 a_=sp+(352);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(368);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr4=BITSF(a1);}
    {vr0=BITSF(t5);}
    {vr5=BITSF(a2);}
    a3 = LD32(a0+4);
    {vr6=BITSF(t4);}
    t0 = LD32(a0+8);
    {vr1=BITSF(a3);}
    {vr2=BITSF(t0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v0=FBITS(vr4);}
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(544);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_08914628; }
    goto L_08913FE8;
L_08913FE8:;
    fcc = FCMP(f2, f1, 14);
    cnd_ = !fcc;
    {u32 a_=sp+(384);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089145D0; }
    goto L_08913FF8;
L_08913FF8:;
    f0 = BITSF(LD32(sp+96));
    f1 = BITSF(LD32(sp+100));
    ST32(sp+208, FBITS(f0));
    f0 = BITSF(LD32(sp+104));
    ST32(sp+212, FBITS(f1));
    ST32(sp+216, FBITS(f0));
    goto L_08914010;
L_08914010:;
    v1 = LD32(a0+8);
    v0 = LD32(a0+4);
    {u32 a_=sp+(416);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(432);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr4=BITSF(t5);}
    {vr0=BITSF(a1);}
    {vr5=BITSF(v0);}
    {vr1=BITSF(a2);}
    {vr6=BITSF(v1);}
    {vr2=BITSF(t4);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {v0=FBITS(vr8);}
    {v1=FBITS(vr10);}
    f3 = BITSF(v0);
    f4 = BITSF(v1);
    f1 = BITSF(v0);
    {v0=FBITS(vr9);}
    f0 = BITSF(v0);
    f2 = BITSF(v0);
    v1 = FBITS(f1);
    f5 = BITSF(0);
    {u32 a_=sp+(448);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    {vr12=BITSF(v1);}
    v1 = FBITS(f0);
    {vr13=BITSF(v1);}
    {vr14=BITSF(v0);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    ST32(sp+256, FBITS(f3));
    fcc = FCMP(f0, f5, 2);
    ST32(sp+260, FBITS(f2));
    ST32(sp+264, FBITS(f4));
    ST32(sp+272, FBITS(f3));
    ST32(sp+276, FBITS(f2));
    ST32(sp+280, FBITS(f4));
    ST32(sp+208, FBITS(f3));
    ST32(sp+212, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+216, FBITS(f4));
    if (cnd_) { goto L_089140EC; }
    goto L_089140B4;
L_089140B4:;
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];vr4=(float)1;vr5=(float)1;vr6=(float)1;v[7]=(float)1;}
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    f3 = BITSF(v0);
    {v1=FBITS(vr0);}
    {v0=FBITS(vr1);}
    ST32(sp+272, v1);
    ST32(sp+276, v0);
    ST32(sp+280, FBITS(f3));
    ST32(sp+208, v1);
    ST32(sp+212, v0);
    ST32(sp+216, FBITS(f3));
    goto L_089140EC;
L_089140EC:;
    v0 = LD32(sp+208);
    v1 = LD32(sp+216);
    a0 = LD32(sp+128);
    {u32 a_=sp+(464);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    a1 = LD32(sp+132);
    {vr8=BITSF(a0);}
    a2 = LD32(sp+136);
    {vr9=BITSF(a1);}
    {u32 a_=sp+(480);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr10=BITSF(a2);}
    {vr0=BITSF(v0);}
    v0 = LD32(sp+212);
    {vr1=BITSF(v0);}
    {vr2=BITSF(v1);}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {v0=FBITS(vr4);}
    {v1=FBITS(vr6);}
    f3 = BITSF(v0);
    f4 = BITSF(v1);
    f1 = BITSF(v0);
    {v0=FBITS(vr5);}
    f0 = BITSF(v0);
    f2 = BITSF(v0);
    v1 = FBITS(f1);
    {u32 a_=sp+(496);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    {vr12=BITSF(v1);}
    v1 = FBITS(f0);
    {vr13=BITSF(v1);}
    {vr14=BITSF(v0);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    ST32(sp+256, FBITS(f3));
    fcc = FCMP(f0, f5, 2);
    ST32(sp+260, FBITS(f2));
    ST32(sp+264, FBITS(f4));
    ST32(sp+272, FBITS(f3));
    ST32(sp+276, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+280, FBITS(f4));
    if (cnd_) { goto L_089141C8; }
    goto L_08914190;
L_08914190:;
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];vr4=(float)1;vr5=(float)1;vr6=(float)1;v[7]=(float)1;}
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    f3 = BITSF(v0);
    {v1=FBITS(vr0);}
    {v0=FBITS(vr1);}
    ST32(sp+256, v1);
    ST32(sp+260, v0);
    ST32(sp+264, FBITS(f3));
    ST32(sp+272, v1);
    ST32(sp+276, v0);
    ST32(sp+280, FBITS(f3));
    goto L_089141C8;
L_089141C8:;
    f2 = BITSF(LD32(sp+320));
    f4 = BITSF(LD32(sp+272));
    f5 = BITSF(LD32(sp+276));
    f6 = BITSF(LD32(sp+280));
    f3 = BITSF(FBITS(f2) ^ 0x80000000u);
    v1 = FBITS(f4);
    v0 = FBITS(f5);
    {u32 a_=sp+(512);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(528);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr4=BITSF(a0);}
    {vr0=BITSF(v1);}
    {vr5=BITSF(a1);}
    v1 = FBITS(f6);
    {vr1=BITSF(v0);}
    {vr6=BITSF(a2);}
    {vr2=BITSF(v1);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {v1=FBITS(vr8);}
    {v0=FBITS(vr10);}
    f1 = BITSF(v1);
    f11 = BITSF(v0);
    {v0=FBITS(vr9);}
    f0 = BITSF(v0);
    f15 = f6 * f3;
    f16 = f4 * f3;
    f17 = f5 * f3;
    f9 = f1 * f2;
    f10 = f0 * f2;
    f7 = f1 * f3;
    f8 = f0 * f3;
    f14 = f11 * f2;
    f4 = f4 * f2;
    f5 = f5 * f2;
    f6 = f6 * f2;
    f3 = f11 * f3;
    f0 = BITSF(LD32(sp+160));
    f1 = BITSF(LD32(sp+164));
    f2 = BITSF(LD32(sp+168));
    f18 = f16 + f0;
    f19 = f17 + f1;
    f20 = f15 + f2;
    a1 = LD32(s5+15712);
    f7 = f7 + f0;
    f8 = f8 + f1;
    f3 = f3 + f2;
    f4 = f4 + f0;
    f5 = f5 + f1;
    f6 = f6 + f2;
    f9 = f9 + f0;
    f10 = f10 + f1;
    f14 = f14 + f2;
    f12 = BITSF(v1);
    f13 = BITSF(v0);
    v0 = a1 << 1;
    s0 = D_08BEDD60 - (-8864);
    v0 = v0 + a1;
    ST32(sp, FBITS(f7));
    s0 = s0 - 8864;
    v0 = v0 << 3;
    ST32(sp+4, FBITS(f8));
    v0 = v0 + s0;
    v1 = sp + 0;
    ST32(sp+8, FBITS(f3));
    a0 = 3;
    ST32(sp+12, FBITS(f4));
    ST32(sp+16, FBITS(f5));
    ST32(sp+20, FBITS(f6));
    ST32(sp+24, FBITS(f9));
    ST32(sp+28, FBITS(f10));
    ST32(sp+32, FBITS(f14));
    ST32(sp+36, FBITS(f18));
    ST32(sp+40, FBITS(f19));
    ST32(sp+44, FBITS(f20));
    ST32(sp+256, FBITS(f12));
    ST32(sp+260, FBITS(f13));
    ST32(sp+264, FBITS(f11));
    ST32(sp+288, FBITS(f16));
    ST32(sp+292, FBITS(f17));
    ST32(sp+296, FBITS(f15));
    ST32(sp+304, FBITS(f18));
    ST32(sp+308, FBITS(f19));
    ST32(sp+312, FBITS(f20));
    goto L_08914310;
L_08914310:;
    f0 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    a0 = a0 - 1;
    ST32(v0+12, FBITS(f0));
    v1 = v1 + 12;
    ST32(v0+16, FBITS(f1));
    ST32(v0+20, FBITS(f2));
    ST32(v0+8, s3);
    cnd_ = (s32)a0 >= 0;
    v0 = v0 + 24;
    if (cnd_) { goto L_08914310; }
    goto L_0891433C;
L_0891433C:;
    v0 = a1 << 1;
    f1 = BITSF(LD32(s1+16));
    v0 = v0 + a1;
    v0 = v0 << 3;
    v0 = v0 + s0;
    ST32(v0, FBITS(f1));
    f1 = BITSF(LD32(s1+28));
    f0 = BITSF(LD32(s1+20));
    f3 = BITSF(LD32(s6-11640));
    f0 = f0 + f1;
    f0 = f0 * f3;
    ST32(v0+4, FBITS(f0));
    f1 = BITSF(LD32(s1+16));
    ST32(v0+24, FBITS(f1));
    f2 = BITSF(LD32(s1+20));
    ST32(v0+28, FBITS(f2));
    f1 = BITSF(LD32(s1+24));
    f0 = BITSF(LD32(s1+16));
    f0 = f0 + f1;
    f0 = f0 * f3;
    ST32(v0+48, FBITS(f0));
    f1 = BITSF(LD32(s1+20));
    ST32(v0+52, FBITS(f1));
    f0 = BITSF(LD32(s1+16));
    ST32(v0+72, FBITS(f0));
    f1 = BITSF(LD32(s1+20));
    ST32(v0+76, FBITS(f1));
    v0 = sceKernelDcacheWritebackAll(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089143AC;
L_089143AC:;
    v0 = LD32(s5+15712);
    a0 = 5;
    a1 = 415;
    t0 = v0 << 1;
    t0 = t0 + v0;
    t0 = t0 << 3;
    a2 = 4;
    t0 = t0 + s0;
    a3 = 0 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;func_08A9B2EC(a0, a1, a2, a3, t0); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr8=v[8];vr9=v[9];vr10=v[10];vr12=v[12];vr13=v[13];vr14=v[14];});
    goto L_089143D4;
L_089143D4:;
    f0 = BITSF(LD32(sp+324));
    f3 = BITSF(LD32(sp+256));
    f4 = BITSF(LD32(sp+260));
    f1 = BITSF(FBITS(f0) ^ 0x80000000u);
    f5 = BITSF(LD32(sp+264));
    f6 = BITSF(LD32(sp+272));
    f7 = BITSF(LD32(sp+276));
    f8 = BITSF(LD32(sp+280));
    f12 = f6 * f1;
    f14 = f7 * f1;
    f13 = f8 * f1;
    f11 = f5 * f0;
    f9 = f3 * f0;
    f10 = f4 * f0;
    f3 = f3 * f1;
    f4 = f4 * f1;
    f5 = f5 * f1;
    f6 = f6 * f0;
    f7 = f7 * f0;
    f8 = f8 * f0;
    f1 = BITSF(LD32(sp+176));
    f0 = BITSF(LD32(sp+180));
    f2 = BITSF(LD32(sp+184));
    a0 = LD32(s5+15712);
    f15 = f12 + f1;
    f16 = f14 + f0;
    f17 = f13 + f2;
    f3 = f3 + f1;
    f4 = f4 + f0;
    f5 = f5 + f2;
    f6 = f6 + f1;
    f7 = f7 + f0;
    f8 = f8 + f2;
    f9 = f9 + f1;
    f10 = f10 + f0;
    f11 = f11 + f2;
    a0 = a0 + 4;
    v1 = a0 << 1;
    v0 = D_08BEDD60 - (-8864);
    v1 = v1 + a0;
    ST32(sp, FBITS(f3));
    s0 = v0 - 8864;
    v1 = v1 << 3;
    ST32(sp+4, FBITS(f4));
    a2 = a0 + 0;
    v1 = v1 + s0;
    ST32(sp+8, FBITS(f5));
    v0 = sp + 0;
    a1 = 3;
    ST32(sp+12, FBITS(f6));
    ST32(sp+16, FBITS(f7));
    ST32(sp+20, FBITS(f8));
    ST32(sp+24, FBITS(f9));
    ST32(sp+28, FBITS(f10));
    ST32(sp+32, FBITS(f11));
    ST32(sp+36, FBITS(f15));
    ST32(sp+40, FBITS(f16));
    ST32(sp+44, FBITS(f17));
    ST32(s5+15712, a0);
    ST32(sp+288, FBITS(f12));
    ST32(sp+292, FBITS(f14));
    ST32(sp+296, FBITS(f13));
    ST32(sp+304, FBITS(f15));
    ST32(sp+308, FBITS(f16));
    ST32(sp+312, FBITS(f17));
    goto L_089144D8;
L_089144D8:;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    a1 = a1 - 1;
    ST32(v1+12, FBITS(f0));
    v0 = v0 + 12;
    ST32(v1+16, FBITS(f1));
    ST32(v1+20, FBITS(f2));
    ST32(v1+8, s4);
    cnd_ = (s32)a1 >= 0;
    v1 = v1 + 24;
    if (cnd_) { goto L_089144D8; }
    goto L_08914504;
L_08914504:;
    v0 = a2 << 1;
    f1 = BITSF(LD32(s1+24));
    v0 = v0 + a2;
    v0 = v0 << 3;
    v0 = v0 + s0;
    ST32(v0, FBITS(f1));
    f1 = BITSF(LD32(s1+28));
    f0 = BITSF(LD32(s1+20));
    f3 = BITSF(LD32(s6-11640));
    f0 = f0 + f1;
    f0 = f0 * f3;
    ST32(v0+4, FBITS(f0));
    f1 = BITSF(LD32(s1+24));
    ST32(v0+24, FBITS(f1));
    f2 = BITSF(LD32(s1+28));
    ST32(v0+28, FBITS(f2));
    f1 = BITSF(LD32(s1+24));
    f0 = BITSF(LD32(s1+16));
    f0 = f0 + f1;
    f0 = f0 * f3;
    ST32(v0+48, FBITS(f0));
    f1 = BITSF(LD32(s1+28));
    ST32(v0+52, FBITS(f1));
    f0 = BITSF(LD32(s1+24));
    ST32(v0+72, FBITS(f0));
    f1 = BITSF(LD32(s1+28));
    ST32(v0+76, FBITS(f1));
    v0 = sceKernelDcacheWritebackAll(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08914574;
L_08914574:;
    v0 = LD32(s5+15712);
    a0 = 5;
    a1 = 415;
    t0 = v0 << 1;
    t0 = t0 + v0;
    t0 = t0 << 3;
    a2 = 4;
    t0 = t0 + s0;
    a3 = 0 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;func_08A9B2EC(a0, a1, a2, a3, t0); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr8=v[8];vr9=v[9];vr10=v[10];vr12=v[12];vr13=v[13];vr14=v[14];});
    goto L_0891459C;
L_0891459C:;
    a1 = D_08B2C1C4 - (-15932);
    a1 = a1 - 15932;
    a2 = D_08B2C1F0 - (-15888);
    v0 = LD32(s5+15712);
    v1 = LD32(a1+40);
    a0 = LD32(a2-15888);
    v0 = v0 + 4;
    v1 = v1 + 8;
    a0 = a0 + 8;
    goto L_089145C0;
L_089145C0:;
    ST32(s5+15712, v0);
    ST32(a1+40, v1);
    ST32(a2-15888, a0);
    goto L_08913C58;
L_089145D0:;
    {u32 a_=sp+(400);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr4=BITSF(t5);}
    {vr0=BITSF(a1);}
    {vr5=BITSF(a3);}
    {vr1=BITSF(a2);}
    {vr6=BITSF(t0);}
    {vr2=BITSF(t4);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {v0=FBITS(vr10);}
    f3 = BITSF(v0);
    {v1=FBITS(vr8);}
    {v0=FBITS(vr9);}
    ST32(sp+208, v1);
    ST32(sp+212, v0);
    ST32(sp+216, FBITS(f3));
    ST32(sp+272, v1);
    ST32(sp+276, v0);
    ST32(sp+280, FBITS(f3));
    ST32(sp+256, v1);
    ST32(sp+260, v0);
    ST32(sp+264, FBITS(f3));
    goto L_08914010;
L_08914628:;
    {u32 a_=sp+(560);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr4=BITSF(t5);}
    {vr0=BITSF(a1);}
    {vr5=BITSF(a3);}
    {vr1=BITSF(a2);}
    {vr6=BITSF(t0);}
    {vr2=BITSF(t4);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {v0=FBITS(vr8);}
    {v1=FBITS(vr10);}
    f3 = BITSF(v0);
    f4 = BITSF(v1);
    f1 = BITSF(v0);
    {v0=FBITS(vr9);}
    f0 = BITSF(v0);
    f2 = BITSF(v0);
    v1 = FBITS(f1);
    f5 = BITSF(0);
    {u32 a_=sp+(576);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    {vr12=BITSF(v1);}
    v1 = FBITS(f0);
    {vr13=BITSF(v1);}
    {vr14=BITSF(v0);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    ST32(sp+288, FBITS(f3));
    fcc = FCMP(f0, f5, 2);
    ST32(sp+292, FBITS(f2));
    ST32(sp+296, FBITS(f4));
    ST32(sp+304, FBITS(f3));
    ST32(sp+308, FBITS(f2));
    ST32(sp+312, FBITS(f4));
    ST32(sp+208, FBITS(f3));
    ST32(sp+212, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+216, FBITS(f4));
    if (cnd_) { goto L_089146F8; }
    goto L_089146C0;
L_089146C0:;
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];vr4=(float)1;vr5=(float)1;vr6=(float)1;v[7]=(float)1;}
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    f3 = BITSF(v0);
    {v1=FBITS(vr0);}
    {v0=FBITS(vr1);}
    ST32(sp+304, v1);
    ST32(sp+308, v0);
    ST32(sp+312, FBITS(f3));
    ST32(sp+208, v1);
    ST32(sp+212, v0);
    ST32(sp+216, FBITS(f3));
    goto L_089146F8;
L_089146F8:;
    v0 = LD32(sp+208);
    v1 = LD32(sp+216);
    a0 = LD32(sp+128);
    {u32 a_=sp+(592);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    a1 = LD32(sp+132);
    {vr8=BITSF(a0);}
    a2 = LD32(sp+136);
    {vr9=BITSF(a1);}
    {u32 a_=sp+(608);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr10=BITSF(a2);}
    {vr0=BITSF(v0);}
    v0 = LD32(sp+212);
    {vr1=BITSF(v0);}
    {vr2=BITSF(v1);}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {v0=FBITS(vr4);}
    {v1=FBITS(vr6);}
    f3 = BITSF(v0);
    f4 = BITSF(v1);
    f1 = BITSF(v0);
    {v0=FBITS(vr5);}
    f0 = BITSF(v0);
    f2 = BITSF(v0);
    v1 = FBITS(f1);
    {u32 a_=sp+(624);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    {vr12=BITSF(v1);}
    v1 = FBITS(f0);
    {vr13=BITSF(v1);}
    {vr14=BITSF(v0);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    ST32(sp+288, FBITS(f3));
    fcc = FCMP(f0, f5, 2);
    ST32(sp+292, FBITS(f2));
    ST32(sp+296, FBITS(f4));
    ST32(sp+304, FBITS(f3));
    ST32(sp+308, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+312, FBITS(f4));
    if (cnd_) { goto L_089147D4; }
    goto L_0891479C;
L_0891479C:;
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];vr4=(float)1;vr5=(float)1;vr6=(float)1;v[7]=(float)1;}
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    f3 = BITSF(v0);
    {v1=FBITS(vr0);}
    {v0=FBITS(vr1);}
    ST32(sp+288, v1);
    ST32(sp+292, v0);
    ST32(sp+296, FBITS(f3));
    ST32(sp+304, v1);
    ST32(sp+308, v0);
    ST32(sp+312, FBITS(f3));
    goto L_089147D4;
L_089147D4:;
    f3 = BITSF(LD32(sp+320));
    f4 = BITSF(LD32(sp+324));
    f7 = BITSF(LD32(sp+304));
    f8 = BITSF(LD32(sp+308));
    f9 = BITSF(LD32(sp+312));
    f6 = BITSF(FBITS(f4) ^ 0x80000000u);
    f5 = BITSF(FBITS(f3) ^ 0x80000000u);
    v1 = FBITS(f7);
    v0 = FBITS(f8);
    {u32 a_=sp+(640);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(656);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr4=BITSF(a0);}
    {vr0=BITSF(v1);}
    {vr5=BITSF(a1);}
    v1 = FBITS(f9);
    {vr6=BITSF(a2);}
    {vr1=BITSF(v0);}
    {vr2=BITSF(v1);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {v1=FBITS(vr8);}
    {v0=FBITS(vr10);}
    f1 = BITSF(v1);
    f17 = BITSF(v0);
    {v0=FBITS(vr9);}
    f0 = BITSF(v0);
    f21 = f1 * f4;
    f12 = f7 * f3;
    f13 = f8 * f3;
    f22 = f9 * f3;
    f23 = f1 * f5;
    f24 = f1 * f3;
    f18 = f17 * f4;
    f19 = f17 * f5;
    f20 = f17 * f3;
    f4 = f0 * f4;
    f5 = f0 * f5;
    f3 = f0 * f3;
    f25 = f1 * f6;
    f26 = f0 * f6;
    f27 = f17 * f6;
    f0 = BITSF(LD32(sp+160));
    f1 = BITSF(LD32(sp+164));
    f2 = BITSF(LD32(sp+168));
    f14 = BITSF(LD32(sp+176));
    f15 = BITSF(LD32(sp+180));
    f16 = BITSF(LD32(sp+184));
    f9 = f9 * f6;
    f7 = f7 * f6;
    f8 = f8 * f6;
    f25 = f25 + f14;
    f26 = f26 + f15;
    f27 = f27 + f16;
    f21 = f21 + f14;
    f4 = f4 + f15;
    f18 = f18 + f16;
    f24 = f24 + f0;
    f3 = f3 + f1;
    f20 = f20 + f2;
    f12 = f12 + f0;
    f13 = f13 + f1;
    f22 = f22 + f2;
    f23 = f23 + f0;
    f5 = f5 + f1;
    f19 = f19 + f2;
    f14 = f7 + f14;
    f15 = f8 + f15;
    f16 = f9 + f16;
    ST32(sp+288, v1);
    s0 = D_08BEDD60 - (-8864);
    a0 = s0 - 8864;
    ST32(sp+292, v0);
    a3 = 0 + 0;
    a2 = sp + 0;
    ST32(sp, FBITS(f12));
    ST32(sp+4, FBITS(f13));
    ST32(sp+8, FBITS(f22));
    ST32(sp+12, FBITS(f23));
    ST32(sp+16, FBITS(f5));
    ST32(sp+20, FBITS(f19));
    ST32(sp+24, FBITS(f24));
    ST32(sp+28, FBITS(f3));
    ST32(sp+32, FBITS(f20));
    ST32(sp+36, FBITS(f25));
    ST32(sp+40, FBITS(f26));
    ST32(sp+44, FBITS(f27));
    ST32(sp+48, FBITS(f21));
    ST32(sp+52, FBITS(f4));
    ST32(sp+56, FBITS(f18));
    ST32(sp+296, FBITS(f17));
    ST32(sp+256, FBITS(f7));
    ST32(sp+260, FBITS(f8));
    ST32(sp+264, FBITS(f9));
    v1 = LD32(s5+15712);
    ST32(sp+60, FBITS(f14));
    v0 = v1 << 1;
    v0 = v0 + v1;
    ST32(sp+64, FBITS(f15));
    v0 = v0 << 3;
    a1 = v0 + a0;
    ST32(sp+68, FBITS(f16));
    ST32(sp+272, FBITS(f14));
    ST32(sp+276, FBITS(f15));
    ST32(sp+280, FBITS(f16));
    goto L_08914970;
L_08914970:;
    f0 = BITSF(LD32(a2));
    f1 = BITSF(LD32(a2+4));
    f2 = BITSF(LD32(a2+8));
    v0 = (s32)a3 < 3;
    v1 = s3 + 0;
    a3 = a3 + 1;
    if (v0 == 0) v1 = s4;
    a0 = (s32)a3 < 6;
    ST32(a1+12, FBITS(f0));
    a2 = a2 + 12;
    ST32(a1+16, FBITS(f1));
    ST32(a1+20, FBITS(f2));
    ST32(a1+8, v1);
    cnd_ = a0 != 0;
    a1 = a1 + 24;
    if (cnd_) { goto L_08914970; }
    goto L_089149AC;
L_089149AC:;
    v1 = LD32(s5+15712);
    f1 = BITSF(LD32(s1+16));
    s0 = s0 - 8864;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 3;
    v0 = v0 + s0;
    ST32(v0, FBITS(f1));
    f0 = BITSF(LD32(s1+20));
    f3 = BITSF(LD32(s6-11640));
    ST32(v0+4, FBITS(f0));
    f1 = BITSF(LD32(s1+16));
    ST32(v0+24, FBITS(f1));
    f1 = BITSF(LD32(s1+28));
    f0 = BITSF(LD32(s1+20));
    f0 = f0 + f1;
    f0 = f0 * f3;
    ST32(v0+28, FBITS(f0));
    f0 = BITSF(LD32(s1+24));
    f1 = BITSF(LD32(s1+16));
    f1 = f1 + f0;
    f1 = f1 * f3;
    ST32(v0+48, FBITS(f1));
    f2 = BITSF(LD32(s1+20));
    ST32(v0+52, FBITS(f2));
    f1 = BITSF(LD32(s1+24));
    f0 = BITSF(LD32(s1+16));
    f0 = f0 + f1;
    f0 = f0 * f3;
    ST32(v0+72, FBITS(f0));
    f1 = BITSF(LD32(s1+28));
    ST32(v0+76, FBITS(f1));
    f2 = BITSF(LD32(s1+24));
    ST32(v0+96, FBITS(f2));
    f1 = BITSF(LD32(s1+28));
    f0 = BITSF(LD32(s1+20));
    f0 = f0 + f1;
    f0 = f0 * f3;
    ST32(v0+100, FBITS(f0));
    f1 = BITSF(LD32(s1+24));
    ST32(v0+120, FBITS(f1));
    f0 = BITSF(LD32(s1+28));
    ST32(v0+124, FBITS(f0));
    v0 = sceKernelDcacheWritebackAll(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08914A5C;
L_08914A5C:;
    v0 = LD32(s5+15712);
    a0 = 4;
    a1 = 415;
    t0 = v0 << 1;
    t0 = t0 + v0;
    t0 = t0 << 3;
    a2 = 6;
    t0 = t0 + s0;
    a3 = 0 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;func_08A9B2EC(a0, a1, a2, a3, t0); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr8=v[8];vr9=v[9];vr10=v[10];vr12=v[12];vr13=v[13];vr14=v[14];});
    goto L_08914A84;
L_08914A84:;
    a1 = D_08B2C1C4 - (-15932);
    a1 = a1 - 15932;
    a2 = D_08B2C1F0 - (-15888);
    v0 = LD32(s5+15712);
    v1 = LD32(a1+40);
    a0 = LD32(a2-15888);
    v0 = v0 + 6;
    v1 = v1 + 6;
    a0 = a0 + 6;
    goto L_089145C0;
L_08914AAC:;
    f0 = BITSF(LD32(s6-11640));
    f0 = f1 - f0;
    goto L_08913F5C;
L_08914AB8:;
    f0 = BITSF(LD32(s6-11640));
    f0 = f1 - f0;
    goto L_08913F28;
L_08914AC4:;
    f0 = BITSF(LD32(s6-11640));
    f0 = f2 - f0;
    goto L_08913EF4;
L_08914AD0:;
    f0 = BITSF(LD32(s6-11640));
    f0 = f1 - f0;
    goto L_08913EC4;
L_08914ADC:;
    f0 = BITSF(LD32(s6-11640));
    f0 = f1 - f0;
    goto L_08913E94;
L_08914AE8:;
    f0 = BITSF(LD32(s6-11640));
    f0 = f1 - f0;
    goto L_08913E60;
L_08914AF4:;
    f0 = BITSF(LD32(s6-11640));
    f0 = f2 - f0;
    goto L_08913E2C;
L_08914B00:;
    f0 = BITSF(LD32(s6-11640));
    f0 = f1 - f0;
    goto L_08913DFC;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;
}

/* 08914B0C */
void func_08914B0C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08914B0C:;
    sp = sp - 16;
    a2 = D_08B15A04 - (23044);
    v0 = LD32(a2+23044);
    cnd_ = v0 == 0;
    v0 = D_08B22E88 - (11912);
    if (cnd_) { goto L_08914B5C; }
    goto L_08914B30;
L_08914B30:;
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
    goto L_08914B5C;
L_08914B5C:;
    s2 = D_08B44C20 - (19488);
    func_089014F0();
    goto L_08914B64;
L_08914B64:;
    a0 = 0 + 0;
    func_08904FB8(a0);
    goto L_08914B6C;
L_08914B6C:;
    s1 = 0 + 0;
    func_08913690();
    goto L_08914B74;
L_08914B74:;
    v0 = LD32(s2+19488);
    cnd_ = v0 == 0;
    v0 = D_08B43C20 - (15392);
    if (cnd_) { goto L_08914BA0; }
    goto L_08914B80;
L_08914B80:;
    s0 = v0 + 15392;
    goto L_08914B84;
L_08914B84:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08914BB8; }
    goto L_08914B90;
L_08914B90:;
    v0 = LD32(s2+19488);
    goto L_08914B94;
L_08914B94:;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08914B84; }
    goto L_08914BA0;
L_08914BA0:;
    sp = sp + 16;
    return;
L_08914BB8:;
    a0 = v0 + 0;
    v0 = LD32(v0+72);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = LD32(s2+19488);
    if (cnd_) { goto L_08914B94; }
    goto L_08914BCC;
L_08914BCC:;
    func_08913B18(a0);
    goto L_08914BD4;
L_08914BD4:;
    v1 = LD32(s0);
    v0 = LD32(v1+72);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(v1+72, v0);
    goto L_08914B90;
}

/* 08914BE8 */
void func_08914BE8(void)
{
L_08914BE8:;
    return;
}

/* 08914BF0 */
rv_t func_08914BF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08914BF0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    func_08914BE8();
    goto L_08914C04;
L_08914C04:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08914C10 */
void func_08914C10(void)
{
L_08914C10:;
    return;
}

/* 08914C18 */
void func_08914C18(void)
{
L_08914C18:;
    return;
}

/* 08914C20 */
void func_08914C20(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08914C20:;
    sp = sp - 16;
    func_08903530();
    goto L_08914C34;
L_08914C34:;
    a0 = 0 + 0;
    func_08904FB8(a0);
    goto L_08914C3C;
L_08914C3C:;
    v0 = D_08B2C18C - (-15988);
    s0 = v0 - 15988;
    v1 = LD32(s0+40);
    cnd_ = v1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_08914D30; }
    goto L_08914C50;
L_08914C50:;
    v0 = LD_U8(s0+18);
    goto L_08914C54;
L_08914C54:;
    s1 = 1;
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_08914C68; }
    goto L_08914C60;
L_08914C60:;
    a1 = 1;
    { u64 r_ = func_0890CFE8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08914C68;
L_08914C68:;
    v0 = LD_U8(s0+24);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08914D20; }
    goto L_08914C74;
L_08914C74:;
    v1 = LD32(s0+28);
    goto L_08914C78;
L_08914C78:;
    v0 = 5;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08914C8C; }
    goto L_08914C84;
L_08914C84:;
    a1 = 5;
    func_0890D108(a0, a1);
    goto L_08914C8C;
L_08914C8C:;
    v0 = LD_U8(s0+36);
    cnd_ = v0 == s1;
    v1 = 10;
    if (cnd_) { goto L_08914D0C; }
    goto L_08914C98;
L_08914C98:;
    a0 = s0 + 0;
    goto L_08914C9C;
L_08914C9C:;
    a1 = 1;
    ST32(s0+44, v1);
    func_0890D250(a0, a1);
    goto L_08914CA8;
L_08914CA8:;
    a0 = 0 + 0;
    func_08904D74(a0);
    goto L_08914CB0;
L_08914CB0:;
    a0 = 0 + 0;
    func_08904E30(a0);
    goto L_08914CB8;
L_08914CB8:;
    a0 = 2;
    a1 = (u32)-1;
    func_08904E88(a0, a1);
    goto L_08914CC4;
L_08914CC4:;
    a0 = D_08BF51EC - (20972);
    v0 = D_08B285AC - (-31316);
    v0 = LD32(v0-31316);
    v1 = LD32(a0+20972);
    cnd_ = v1 == v0;
    v1 = D_08BF51E4 - (20964);
    if (cnd_) { goto L_08914CEC; }
    goto L_08914CDC;
L_08914CDC:;
    ST32(a0+20972, v0);
    v0 = D_08BF51E0 - (20960);
    ST32(v0+20960, 0);
    ST32(v1+20964, 0);
    goto L_08914CEC;
L_08914CEC:;
    v1 = (u32)-1;
    v0 = D_08BF51E8 - (20968);
    ST32(v0+20968, v1);
    sp = sp + 16;
    return;
L_08914D0C:;
    v0 = LD32(s0+44);
    cnd_ = v0 != v1;
    a0 = s0 + 0;
    if (cnd_) { goto L_08914C9C; }
    goto L_08914D18;
L_08914D18:;
    goto L_08914CA8;
L_08914D20:;
    a1 = 0 + 0;
    v0 = func_0890D084(a0, a1);
    goto L_08914D28;
L_08914D28:;
    v1 = LD32(s0+28);
    goto L_08914C78;
L_08914D30:;
    a1 = 0 + 0;
    func_0890D298(a0, a1);
    goto L_08914D38;
L_08914D38:;
    v0 = LD_U8(s0+18);
    goto L_08914C54;
}

/* 08914D40 */
void func_08914D40(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08914D40:;
    sp = sp - 16;
    s0 = D_08BF51E0 - (20960);
    a2 = LD32(s0+20960);
    s1 = D_08BF51E4 - (20964);
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08914DD8; }
    goto L_08914D64;
L_08914D64:;
    v1 = LD32(s1+20964);
    v0 = D_08BF3DE0 - (15840);
    s2 = v0 + 15840;
    a0 = v1 << 2;
    v0 = a2 - v1;
    a0 = a0 + v1;
    a1 = v0 << 2;
    a1 = a1 + v0;
    a0 = a0 << 2;
    a0 = a0 + s2;
    cnd_ = a2 == v1;
    a1 = a1 << 2;
    if (cnd_) { goto L_08914DD8; }
    goto L_08914D94;
L_08914D94:;
    v0 = sceKernelDcacheWritebackRange(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08914D9C;
L_08914D9C:;
    v0 = LD32(s1+20964);
    a2 = LD_U16(s0+20960);
    v1 = LD_U16(s1+20964);
    t0 = v0 << 2;
    t0 = t0 + v0;
    a2 = a2 - v1;
    t0 = t0 << 2;
    a3 = 0 + 0;
    t0 = t0 + s2;
    a2 = a2 & 0xffff;
    a0 = 6;
    a1 = 413;
    func_08A9B2EC(a0, a1, a2, a3, t0);
    goto L_08914DD0;
L_08914DD0:;
    v0 = LD32(s0+20960);
    ST32(s1+20964, v0);
    goto L_08914DD8;
L_08914DD8:;
    sp = sp + 16;
    return;
}

/* 08914DF0 */
rv_t func_08914DF0(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2];
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_08914DF0:;
    sp = sp - 160;
    s3 = D_08BF51E0 - (20960);
    v0 = 256;
    v1 = LD32(s3+20960);
    s2 = s3 + 0;
    s0 = a0 + 0;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08915190; }
    goto L_08914E24;
L_08914E24:;
    s1 = D_08BF51E8 - (20968);
    v1 = LD32(s1+20968);
    v0 = LD32(a0+32);
    cnd_ = v1 == v0;
    a1 = D_08B15A04 - (23044);
    if (cnd_) { goto L_08914E54; }
    goto L_08914E38;
L_08914E38:;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;func_08914D40(a3, t0, t1, t2, t3); vr0=v[0];vr1=v[1];vr2=v[2];});
    goto L_08914E40;
L_08914E40:;
    a0 = LD32(s0+32);
    func_0890C3C0(a0);
    goto L_08914E48;
L_08914E48:;
    v0 = LD32(s0+32);
    ST32(s1+20968, v0);
    a1 = D_08B15A04 - (23044);
    goto L_08914E54;
L_08914E54:;
    v0 = LD32(a1+23044);
    f20 = BITSF(LD32(s0+28));
    cnd_ = v0 == 0;
    s1 = D_08B159FC - (23036);
    if (cnd_) { goto L_08914E90; }
    goto L_08914E64;
L_08914E64:;
    v0 = D_08B22E88 - (11912);
    a0 = 1;
    v1 = D_08B230B0 - (12464);
    v0 = v0 + 11912;
    ST8(v1+12464, a0);
    v1 = D_08B15A0C - (23052);
    ST32(s1+23036, v0);
    v0 = D_08B230A8 - (12456);
    ST32(a1+23044, 0);
    ST8(v0+12456, a0);
    ST8(v1+23052, a0);
    goto L_08914E90;
L_08914E90:;
    func_089014F0();
    goto L_08914E98;
L_08914E98:;
    a3 = LD32(s1+23036);
    v0 = LD32(s2+20960);
    t1 = D_08BF3DE0 - (15840);
    a1 = a3 + 12;
    f0 = BITSF(LD32(a3+12));
    f1 = BITSF(LD32(a1+12));
    f2 = BITSF(LD32(a1+24));
    f6 = f0 * f20;
    f7 = f1 * f20;
    f8 = f2 * f20;
    v1 = v0 << 2;
    ST32(sp+16, FBITS(f0));
    v1 = v1 + v0;
    v1 = v1 << 2;
    ST32(sp+20, FBITS(f1));
    v0 = t1 + 15840;
    a0 = v1 + v0;
    ST32(sp+24, FBITS(f2));
    t0 = (u32)-128;
    a2 = v0 + 8;
    ST32(sp, FBITS(f6));
    a2 = v1 + a2;
    v0 = v0 + 28;
    ST32(sp+4, FBITS(f7));
    v1 = v1 + v0;
    v0 = D_08AED290 - (-11632);
    ST32(sp+8, FBITS(f8));
    f5 = BITSF(LD32(a1+28));
    f3 = BITSF(LD32(a1+4));
    f4 = BITSF(LD32(a1+16));
    ST8(a0+21, t0);
    f5 = f5 * f20;
    f3 = f3 * f20;
    ST8(a0+20, t0);
    f4 = f4 * f20;
    ST8(a0, 0);
    ST8(a0+1, 0);
    f1 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(s0+8));
    f1 = f1 - f6;
    f2 = f2 - f7;
    f0 = f0 - f8;
    ST32(sp+16, FBITS(f3));
    f1 = f1 - f3;
    f2 = f2 - f4;
    f0 = f0 - f5;
    ST32(sp+20, FBITS(f4));
    ST32(a2+8, FBITS(f0));
    ST32(a2, FBITS(f1));
    ST32(a2+4, FBITS(f2));
    f0 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0+4));
    f0 = f0 + f6;
    f2 = f2 + f8;
    f1 = f1 + f7;
    ST32(sp+24, FBITS(f5));
    f3 = f0 + f3;
    f5 = f2 + f5;
    f4 = f1 + f4;
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    ST32(sp+48, FBITS(f3));
    {u32 a_=sp+(64);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(v1+8, FBITS(f5));
    ST32(v1+4, FBITS(f4));
    ST32(v1, FBITS(f3));
    ST32(sp+56, FBITS(f5));
    ST32(sp+52, FBITS(f4));
    f6 = BITSF(LD32(a3+8));
    f3 = BITSF(LD32(a3));
    f4 = BITSF(LD32(a3+4));
    f0 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0+4));
    f3 = f3 - f0;
    f6 = f6 - f2;
    f4 = f4 - f1;
    t0 = LD32(s0+24);
    a1 = FBITS(f3);
    a3 = FBITS(f6);
    a2 = FBITS(f4);
    {vr0=BITSF(a1);}
    {vr1=BITSF(a2);}
    {vr2=BITSF(a3);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    v1 = t0 & 0x8;
    f5 = BITSF(LD32(v0-11632));
    ST32(sp+48, FBITS(f3));
    ST32(sp+52, FBITS(f4));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f2 = BITSF(v0);
    cnd_ = v1 == 0;
    ST32(sp+56, FBITS(f6));
    if (cnd_) { goto L_0891508C; }
    goto L_08915020;
L_08915020:;
    f3 = BITSF(0);
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    f5 = f3;
    if (cnd_) { goto L_0891508C; }
    goto L_08915034;
L_08915034:;
    a0 = s0 + 12;
    v1 = LD32(a0+4);
    {u32 a_=sp+(96);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = LD32(s0+12);
    {v[4]=BITSF(a1);}
    {u32 a_=sp+(80);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a1 = LD32(a0+8);
    {v[5]=BITSF(a2);}
    {vr0=BITSF(v0);}
    {v[6]=BITSF(a3);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    f5 = f0 / f2;
    fcc = FCMP(f5, f3, 12);
    cnd_ = !fcc;
    v0 = D_08AED29C - (-11620);
    if (cnd_) { goto L_089151D0; }
    goto L_08915084;
L_08915084:;
    v0 = D_08AED298 - (-11624);
    f5 = BITSF(LD32(v0-11624));
    goto L_0891508C;
L_0891508C:;
    v0 = t0 & 0x20;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(s0+36)); goto L_089150D8; }
    goto L_08915098;
L_08915098:;
    v0 = D_08AED2A0 - (-11616);
    f0 = BITSF(LD32(v0-11616));
    f1 = BITSF(0);
    f2 = f2 - f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(s0+36)); goto L_089150DC; }
    goto L_089150B8;
L_089150B8:;
    v0 = D_08AED2A4 - (-11612);
    f0 = BITSF(LD32(v0-11612));
    v0 = D_08AED294 - (-11628);
    f2 = f2 * f0;
    f0 = BITSF(LD32(v0-11628));
    f0 = f0 - f2;
    f5 = f5 * f0;
    f0 = BITSF(LD32(s0+36));
    goto L_089150D8;
L_089150D8:;
    f1 = BITSF(0);
    goto L_089150DC;
L_089150DC:;
    f2 = f5 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    v1 = D_08AED2A8 - (-11608);
    if (cnd_) { goto L_089151C4; }
    goto L_089150F0;
L_089150F0:;
    f0 = BITSF(LD32(v1-11608));
    f0 = f2 + f0;
    goto L_089150F8;
L_089150F8:;
    f3 = BITSF(F2I(f0, 1));
    f0 = BITSF(LD32(s0+40));
    f1 = BITSF(0);
    f2 = f5 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v1-11608));
    if (cnd_) { goto L_089151BC; }
    goto L_08915118;
L_08915118:;
    f0 = f2 + f0;
    goto L_0891511C;
L_0891511C:;
    f1 = BITSF(F2I(f0, 1));
    f0 = BITSF(LD32(s0+44));
    a0 = FBITS(f1);
    f1 = f5 * f0;
    f0 = BITSF(0);
    v0 = a0 << 8;
    a0 = FBITS(f3);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = a0 + v0;
    if (cnd_) { goto L_089151B0; }
    goto L_08915148;
L_08915148:;
    f0 = BITSF(LD32(v1-11608));
    f0 = f1 + f0;
    goto L_08915150;
L_08915150:;
    f0 = BITSF(F2I(f0, 1));
    a1 = LD32(s3+20960);
    a2 = t1 + 15840;
    v1 = FBITS(f0);
    a0 = v1 << 16;
    a0 = v0 + a0;
    v0 = a1 << 2;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v1 = 0xff000000u;
    a0 = a0 + v1;
    v0 = v0 + a2;
    a1 = a1 + 2;
    ST32(v0+24, a0);
    ST32(s3+20960, a1);
    ST32(v0+4, a0);
    goto L_08915190;
L_08915190:;
    sp = sp + 160;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return (rv_t){ v0, v1, f0 }; }
L_089151B0:;
    f0 = BITSF(LD32(v1-11608));
    f0 = f1 - f0;
    goto L_08915150;
L_089151BC:;
    f0 = f2 - f0;
    goto L_0891511C;
L_089151C4:;
    f0 = BITSF(LD32(v1-11608));
    f0 = f2 - f0;
    goto L_089150F8;
L_089151D0:;
    f0 = BITSF(LD32(v0-11620));
    v0 = D_08AED298 - (-11624);
    f1 = BITSF(LD32(v0-11624));
    f0 = f5 * f0;
    f5 = f0 + f1;
    goto L_0891508C;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}

/* 089151E8 */
void func_089151E8(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089151E8:;
    sp = sp - 16;
    func_08914D40(a3, t0, t1, t2, t3);
    goto L_089151F8;
L_089151F8:;
    sp = sp + 16;
    return;
}

/* 08915204 */
void func_08915204(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08915204:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    sp = sp - 16;
    a1 = a1 & a0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08915254; }
    goto L_08915230;
L_08915230:;
    v0 = D_08BF3DE0 - (15840);
    s1 = v0 + 15840;
    s0 = 255;
    s2 = (u32)-1;
    goto L_08915240;
L_08915240:;
    a0 = s1 + 0;
    s0 = s0 - 1;
    func_08ABACA0();
    goto L_0891524C;
L_0891524C:;
    cnd_ = s0 != s2;
    s1 = s1 + 20;
    if (cnd_) { goto L_08915240; }
    goto L_08915254;
L_08915254:;
    sp = sp + 16;
    return;
}

/* 0891526C */
rv_t func_0891526C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891526C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    func_08915204(a0, a1);
    goto L_08915280;
L_08915280:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0891528C */
void func_0891528C(void)
{
L_0891528C:;
    return;
}

/* 08915294 */
void func_08915294(void)
{
L_08915294:;
    return;
}

/* 0891529C */
void func_0891529C(void)
{
L_0891529C:;
    return;
}

/* 089152A4 */
void func_089152A4(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089152A4:;
    sp = sp - 32;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s0 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    s1 = t0 + 0;
    if (cnd_) { goto L_089152F4; }
    goto L_089152D4;
L_089152D4:;
    v1 = LD32(t0+28);
    v0 = LD32(a0+8);
    a1 = s2 + 0;
    goto L_089152E0;
L_089152E0:;
    cnd_ = v0 == v1;
    a2 = s3 + 0;
    if (cnd_) { goto L_08915344; }
    goto L_089152E8;
L_089152E8:;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0+8); goto L_089152E0; }
    goto L_089152F4;
L_089152F4:;
    a0 = 0xa01c;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089152FC;
L_089152FC:;
    a3 = 0x8000;
    a3 = v0 + a3;
    v1 = 2048;
    ST32(a3+8204, v1);
    v1 = D_08AF7E60 - (32352);
    v1 = v1 + 32352;
    ST32(a3+8216, 0);
    a0 = v0 + 0;
    a1 = s2 + 0;
    ST32(a3+8208, 0);
    a2 = s3 + 0;
    ST32(a3+8212, 0);
    a3 = LD32(s0);
    t0 = LD32(s1+28);
    ST32(v0, v1);
    ST32(v0+8, t0);
    ST32(v0+4, a3);
    ST32(s0, v0);
    goto L_08915344;
L_08915344:;
    func_08ABAD68(a0, a1, a2);
    goto L_0891534C;
L_0891534C:;
    sp = sp + 32;
    return;
}

/* 08915368 */
void func_08915368(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08915368:;
    sp = sp - 32;
    s1 = a0 + 0;
    func_089034FC();
    goto L_08915388;
L_08915388:;
    v0 = LD32(s1);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089154CC; }
    goto L_08915394;
L_08915394:;
    s3 = D_08B162B8 - (25272);
    v0 = LD32(s3+25272);
    v1 = (u32)-10;
    cnd_ = v0 == v1;
    a0 = (u32)-10;
    if (cnd_) { goto L_089153B0; }
    goto L_089153A8;
L_089153A8:;
    ST32(s3+25272, v1);
    func_08A98808(a0);
    goto L_089153B0;
L_089153B0:;
    v0 = D_08B2C18C - (-15988);
    s0 = v0 - 15988;
    v1 = LD_U8(s0+18);
    s2 = 1;
    cnd_ = v1 == s2;
    a0 = s0 + 0;
    if (cnd_) { goto L_089153D0; }
    goto L_089153C8;
L_089153C8:;
    a1 = 1;
    { u64 r_ = func_0890CFE8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089153D0;
L_089153D0:;
    v0 = LD_U8(s0+24);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08915504; }
    goto L_089153DC;
L_089153DC:;
    v1 = LD32(s0+40);
    goto L_089153E0;
L_089153E0:;
    v0 = 2;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089153F4; }
    goto L_089153EC;
L_089153EC:;
    a1 = 2;
    func_0890D298(a0, a1);
    goto L_089153F4;
L_089153F4:;
    v0 = LD32(s0+28);
    cnd_ = v0 == s2;
    a0 = s0 + 0;
    if (cnd_) { goto L_08915408; }
    goto L_08915400;
L_08915400:;
    a1 = 1;
    func_0890D108(a0, a1);
    goto L_08915408;
L_08915408:;
    a0 = 0 + 0;
    func_08904FB8(a0);
    goto L_08915410;
L_08915410:;
    a0 = 0 + 0;
    func_08904E30(a0);
    goto L_08915418;
L_08915418:;
    a1 = (u32)-1;
    a0 = 1;
    func_08904E88(a0, a1);
    goto L_08915424;
L_08915424:;
    a0 = 2;
    func_08A9A13C(a0);
    goto L_0891542C;
L_0891542C:;
    s0 = 0x8000;
    func_08A9A274();
    goto L_08915434;
L_08915434:;
    func_08A9A170();
    goto L_0891543C;
L_0891543C:;
    s1 = LD32(s1);
    a0 = LD32(s1+8);
    s0 = s1 + s0;
    s2 = s1 + 12;
    func_0890C3C0(a0);
    goto L_08915450;
L_08915450:;
    v0 = LD32(s0+8208);
    a0 = s2 + 0;
    a1 = v0 << 2;
    a1 = a1 + v0;
    a1 = a1 << 2;
    v0 = sceKernelDcacheWritebackRange(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08915468;
L_08915468:;
    a2 = LD_U16(s0+8208);
    a0 = 4;
    a1 = 387;
    t0 = s2 + 0;
    a3 = 0 + 0;
    func_08A9B2EC(a0, a1, a2, a3, t0);
    goto L_08915480;
L_08915480:;
    a1 = D_08B2C1C4 - (-15932);
    a0 = LD32(s0+8208);
    a1 = a1 - 15932;
    a2 = D_08B2C1F0 - (-15888);
    v0 = LD32(a1+40);
    v1 = LD32(a2-15888);
    s1 = LD32(s1+4);
    a0 = a0 - 2;
    v1 = v1 + a0;
    v0 = v0 + a0;
    ST32(a1+40, v0);
    cnd_ = s1 != 0;
    ST32(a2-15888, v1);
    if (cnd_) { goto L_089154F4; }
    goto L_089154B4;
L_089154B4:;
    func_08A9A2C4();
    goto L_089154BC;
L_089154BC:;
    v0 = LD32(s3+25272);
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089154E4; }
    goto L_089154C8;
L_089154C8:;
    goto L_089154CC;
L_089154CC:;
    sp = sp + 32;
    return;
L_089154E4:;
    ST32(s3+25272, 0);
    func_08A98808(a0);
    goto L_089154EC;
L_089154EC:;
    goto L_089154CC;
L_089154F4:;
    a0 = s1 + 0;
    func_08ABB000(a0);
    goto L_089154FC;
L_089154FC:;
    goto L_089154B4;
L_08915504:;
    a1 = 0 + 0;
    v0 = func_0890D084(a0, a1);
    goto L_0891550C;
L_0891550C:;
    v1 = LD32(s0+40);
    goto L_089153E0;
}

/* 08915514 */
void func_08915514(void)
{
L_08915514:;
    return;
}

/* 0891551C */
void func_0891551C(void)
{
L_0891551C:;
    return;
}

/* 08915524 */
void func_08915524(void)
{
L_08915524:;
    return;
}

/* 0891552C */
void func_0891552C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891552C:;
    sp = sp - 16;
    v0 = D_08B306F0 - (1776);
    v1 = D_08B306EC - (1772);
    s0 = D_08B2C12C - (-16084);
    s0 = s0 - 16084;
    f1 = BITSF(LD32(v0+1776));
    f0 = BITSF(LD32(v1+1772));
    v1 = a0 + 0;
    f12 = BITSF(0);
    v0 = 1;
    f14 = (float)(s32)FBITS(f1);
    f15 = (float)(s32)FBITS(f0);
    ST32(s0+64, v1);
    v1 = (u32)-1;
    a0 = s0 + 0;
    ST32(s0+84, v0);
    f13 = f12;
    ST32(s0+80, v1);
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_08915580;
L_08915580:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0891558C;
L_0891558C:;
    sp = sp + 16;
    return;
}

/* 0891559C */
void func_0891559C(void)
{
L_0891559C:;
    return;
}

/* 089155A4 */
void func_089155A4(void)
{
L_089155A4:;
    return;
}

/* 089155AC */
void func_089155AC(void)
{
    u32 v0 = 0;
L_089155AC:;
    v0 = 1;
    return;
}

/* 089155B4 */
void func_089155B4(void)
{
L_089155B4:;
    return;
}

/* 089155BC */
void func_089155BC(void)
{
L_089155BC:;
    return;
}

/* 089155C4 */
void func_089155C4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089155C4:;
    sp = sp - 32;
    s1 = D_08B1B46C - (-19348);
    v0 = (u32)-2;
    v1 = LD32(s1-19348);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0891575C; }
    goto L_089155E4;
L_089155E4:;
    v0 = D_08B2C18C - (-15988);
    s0 = v0 - 15988;
    v1 = LD32(s0+32);
    cnd_ = v1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0891574C; }
    goto L_089155F8;
L_089155F8:;
    a0 = 2;
    goto L_089155FC;
L_089155FC:;
    a1 = (u32)-1;
    func_08904E88(a0, a1);
    goto L_08915604;
L_08915604:;
    v1 = LD_U8(s0+18);
    v0 = 1;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0891561C; }
    goto L_08915614;
L_08915614:;
    a1 = 1;
    { u64 r_ = func_0890CFE8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0891561C;
L_0891561C:;
    v0 = LD_U8(s0+24);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0891573C; }
    goto L_08915628;
L_08915628:;
    a0 = LD32(s1-19348);
    func_0890C3C0(a0);
    goto L_08915630;
L_08915630:;
    v0 = LD32(s0+40);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0891572C; }
    goto L_0891563C;
L_0891563C:;
    a0 = 0 + 0;
    func_08904FB8(a0);
    goto L_08915644;
L_08915644:;
    a0 = 0 + 0;
    func_08904E30(a0);
    goto L_0891564C;
L_0891564C:;
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    a3 = D_08C19210 - (-28144);
    t1 = LD32(sp+12);
    f0 = BITSF(LD32(v1+12));
    a1 = v1 + 12;
    f1 = BITSF(LD32(a1+12));
    f2 = BITSF(LD32(a1+24));
    ST32(sp, FBITS(f0));
    a0 = a3 - 28144;
    t0 = D_08C19220 - (-28128);
    v0 = LD32(sp);
    ST32(sp+4, FBITS(f1));
    a2 = t0 - 28128;
    t2 = D_08C19230 - (-28112);
    ST32(sp+8, FBITS(f2));
    ST32(a3-28144, v0);
    v1 = LD32(sp+4);
    ST32(a0+4, v1);
    v0 = LD32(sp+8);
    ST32(a0+12, t1);
    ST32(a0+8, v0);
    v0 = D_08B285AC - (-31316);
    a0 = 10;
    f1 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a1+28));
    f2 = BITSF(LD32(a1+16));
    ST32(sp, FBITS(f1));
    a3 = LD32(v0-31316);
    v0 = LD32(sp);
    ST32(sp+8, FBITS(f0));
    ST32(sp+4, FBITS(f2));
    ST32(t0-28128, v0);
    v0 = D_08C191F4 - (-28172);
    ST32(a2+12, t1);
    v1 = LD32(sp+4);
    ST32(v0-28172, a0);
    ST32(a2+4, v1);
    v1 = D_08C191F8 - (-28168);
    v0 = LD32(sp+8);
    a1 = LD32(t2-28112);
    ST32(v1-28168, 0);
    cnd_ = a1 == a3;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08915710; }
    goto L_089156FC;
L_089156FC:;
    v0 = D_08C191FC - (-28164);
    v1 = D_08C191F0 - (-28176);
    ST32(t2-28112, a3);
    ST32(v0-28164, 0);
    ST32(v1-28176, 0);
    goto L_08915710;
L_08915710:;
    v0 = D_08C19200 - (-28160);
    ST8(v0-28160, 0);
    sp = sp + 32;
    return;
L_0891572C:;
    a1 = 0 + 0;
    func_0890D298(a0, a1);
    goto L_08915734;
L_08915734:;
    goto L_0891563C;
L_0891573C:;
    a1 = 0 + 0;
    v0 = func_0890D084(a0, a1);
    goto L_08915744;
L_08915744:;
    goto L_08915628;
L_0891574C:;
    a1 = 0 + 0;
    func_0890D248(a0, a1);
    goto L_08915754;
L_08915754:;
    a0 = 2;
    goto L_089155FC;
L_0891575C:;
    a0 = D_08AD95C4 - (-27196);
    a0 = a0 - 27196;
    v0 = func_088325D0(a0);
    goto L_08915768;
L_08915768:;
    a0 = v0 + 0;
    { u64 r_ = func_0883A8BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08915770;
L_08915770:;
    ST32(s1-19348, v0);
    goto L_089155E4;
}

/* 08915778 */
void func_08915778(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08915778:;
    sp = sp - 16;
    v0 = D_08B2C18C - (-15988);
    s1 = D_08C191F8 - (-28168);
    s0 = v0 - 15988;
    v0 = LD32(s1-28168);
    s2 = D_08C191FC - (-28164);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08915858; }
    goto L_089157A4;
L_089157A4:;
    v0 = D_08C191F4 - (-28172);
    v1 = LD32(v0-28172);
    a2 = LD32(s0+28);
    a0 = s0 + 0;
    cnd_ = a2 == v1;
    a1 = v1 + 0;
    if (cnd_) { goto L_089157C4; }
    goto L_089157BC;
L_089157BC:;
    func_0890D108(a0, a1);
    goto L_089157C4;
L_089157C4:;
    v0 = D_08C19200 - (-28160);
    v1 = LD_U8(v0-28160);
    a2 = LD32(s0+20);
    a0 = s0 + 0;
    v1 = 0 < v1;
    cnd_ = a2 == v1;
    a1 = v1 + 0;
    if (cnd_) { goto L_089157E8; }
    goto L_089157E0;
L_089157E0:;
    func_0890D028(a0, a1);
    goto L_089157E8;
L_089157E8:;
    v0 = LD32(s2-28164);
    v1 = LD32(s1-28168);
    a0 = v0 << 1;
    a0 = a0 + v0;
    a1 = v1 << 1;
    v0 = D_08BF51F0 - (20976);
    s0 = v0 + 20976;
    a1 = a1 + v1;
    a0 = a0 << 3;
    a0 = a0 + s0;
    a1 = a1 << 3;
    v0 = sceKernelDcacheWritebackRange(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08915818;
L_08915818:;
    v0 = D_08B30C1C - (3100);
    v0 = LD32(v0+3100);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2-28164); goto L_08915834; }
    goto L_08915828;
L_08915828:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08915830;
L_08915830:;
    v0 = LD32(s2-28164);
    goto L_08915834;
L_08915834:;
    a2 = LD_U16(s1-28168);
    a0 = 4;
    t0 = v0 << 1;
    t0 = t0 + v0;
    t0 = t0 << 3;
    a1 = 415;
    a3 = 0 + 0;
    t0 = t0 + s0;
    func_08A9B2EC(a0, a1, a2, a3, t0);
    goto L_08915858;
L_08915858:;
    v0 = D_08C191F0 - (-28176);
    v1 = LD32(v0-28176);
    ST32(s1-28168, 0);
    ST32(s2-28164, v1);
    sp = sp + 16;
    return;
}

/* 08915880 */
void func_08915880(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08915880:;
    sp = sp - 16;
    func_08915778(a3, t0, t1, t2, t3);
    goto L_08915890;
L_08915890:;
    sp = sp + 16;
    return;
}

/* 0891589C */
rv_t func_0891589C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0, f28 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr23 = v[23], vr24 = v[24], vr25 = v[25], vr26 = v[26], vr27 = v[27], vr32 = v[32], vr33 = v[33], vr34 = v[34], vr35 = v[35], vr36 = v[36], vr37 = v[37], vr38 = v[38], vr39 = v[39], vr47 = v[47], vr51 = v[51], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr121 = v[121], vr122 = v[122], vr126 = v[126], vr127 = v[127];
    u8 stack_[864] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 864);
L_0891589C:;
    v1 = D_08B15A00 - (23040);
    v0 = LD32(v1+23040);
    sp = sp - 864;
    a0 = a0 & 0xff;
    s4 = t0 + 0;
    f27 = f12;
    ST32(sp+440, a1);
    ST32(sp+444, a2);
    ST32(sp+448, a3);
    ST32(sp+452, t1);
    ST32(sp+456, t2);
    ST32(sp+436, a0);
    cnd_ = (s32)v0 <= 0;
    ST32(sp+460, 0);
    if (cnd_) { goto L_08915968; }
    goto L_08915920;
L_08915920:;
    ST32(sp+760, 0);
    goto L_08915924;
L_08915924:;
    a0 = LD32(sp+436);
    t1 = LD32(sp+460);
    v0 = (u32)((s32)a0 >> (t1 & 31));
    v0 = v0 ^ 0x1;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    t0 = D_08B15A04 - (23044);
    if (cnd_) { goto L_089159BC; }
    goto L_08915940;
L_08915940:;
    a0 = LD32(sp+460);
    v1 = D_08B15A00 - (23040);
    t1 = LD32(sp+760);
    v0 = LD32(v1+23040);
    a0 = a0 + 1;
    t1 = t1 + 136;
    v0 = (s32)a0 < (s32)v0;
    ST32(sp+460, a0);
    cnd_ = v0 != 0;
    ST32(sp+760, t1);
    if (cnd_) { goto L_08915924; }
    goto L_08915968;
L_08915968:;
    sp = sp + 864;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[121]=vr121;v[122]=vr122;v[126]=vr126;v[127]=vr127;return (rv_t){ v0, v1, f0 }; }
L_089159BC:;
    v0 = LD32(t0+23044);
    cnd_ = t1 == v0;
    a3 = D_08B159FC - (23036);
    if (cnd_) { goto L_08915A00; }
    goto L_089159C8;
L_089159C8:;
    v0 = LD32(sp+760);
    a0 = D_08B22E88 - (11912);
    a2 = 1;
    a0 = a0 + 11912;
    a0 = v0 + a0;
    a1 = a2 << (t1 & 31);
    v0 = D_08B230A8 - (12456);
    ST8(v0+12456, a1);
    v1 = D_08B230B0 - (12464);
    v0 = D_08B15A0C - (23052);
    ST8(v1+12464, a2);
    ST32(a3+23036, a0);
    ST32(t0+23044, t1);
    ST8(v0+23052, a2);
    goto L_08915A00;
L_08915A00:;
    v0 = LD32(a3+23036);
    v1 = LD32(sp+448);
    ST32(sp+464, 0);
    f0 = BITSF(LD32(v0));
    ST32(sp+64, FBITS(f0));
    f1 = BITSF(LD32(v0+4));
    ST32(sp+68, FBITS(f1));
    f0 = BITSF(LD32(v0+8));
    cnd_ = v1 == 0;
    ST32(sp+72, FBITS(f0));
    if (cnd_) { goto L_08915C28; }
    goto L_08915A28;
L_08915A28:;
    v0 = D_08AED2B4 - (-11596);
    a0 = D_08AED2AC - (-11604);
    f28 = BITSF(LD32(v0-11596));
    f25 = BITSF(LD32(a0-11604));
    f26 = BITSF(0);
    s7 = LD32(sp+444);
    goto L_08915A40;
L_08915A40:;
    f2 = BITSF(LD32(s4+12));
    f0 = BITSF(LD32(s4+16));
    f1 = BITSF(LD32(s7+24));
    v0 = LD32(s4+4);
    f0 = f0 - f2;
    f1 = f1 - f2;
    a0 = v0 - 1;
    f2 = BITSF(a0);
    f0 = f25 / f0;
    f3 = BITSF(LD32(s7+4));
    f4 = BITSF(LD32(s7+8));
    f5 = (float)(s32)FBITS(f2);
    f2 = BITSF(LD32(s7));
    f1 = f1 * f0;
    ST32(sp+84, FBITS(f3));
    f0 = f1 * f5;
    ST32(sp+80, FBITS(f2));
    f3 = BITSF(F2I(f0, 1));
    v1 = FBITS(f3);
    cnd_ = (s32)v1 < 0;
    ST32(sp+88, FBITS(f4));
    if (cnd_) { goto L_08916CEC; }
    goto L_08915A94;
L_08915A94:;
    v0 = (s32)v1 < (s32)a0;
    cnd_ = v0 != 0;
    f1 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08916C50; }
    goto L_08915AA0;
L_08915AA0:;
    v0 = LD32(s4+8);
    v1 = a0 << 4;
    v0 = v0 + v1;
    goto L_08915AAC;
L_08915AAC:;
    f3 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    ST32(sp+96, FBITS(f0));
    ST32(sp+100, FBITS(f1));
    ST32(sp+104, FBITS(f2));
    ST32(sp+108, FBITS(f3));
    goto L_08915ACC;
L_08915ACC:;
    v1 = D_08B30C18 - (3096);
    v0 = LD32(v1+3096);
    cnd_ = v0 == 0;
    a0 = LD32(sp+456);
    if (cnd_) { goto L_08915AF0; }
    goto L_08915ADC;
L_08915ADC:;
    a2 = LD32(sp+464);
    s6 = sp + 96;
    a3 = s6 + 0;
    t_ = v0;
    a1 = s4 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[121]=vr121;v[122]=vr122;v[126]=vr126;v[127]=vr127;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];vr15=v[15];vr16=v[16];vr17=v[17];vr18=v[18];vr19=v[19];vr20=v[20];vr21=v[21];vr22=v[22];vr23=v[23];vr24=v[24];vr25=v[25];vr26=v[26];vr27=v[27];vr32=v[32];vr33=v[33];vr34=v[34];vr35=v[35];vr36=v[36];vr37=v[37];vr38=v[38];vr39=v[39];vr47=v[47];vr51=v[51];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr116=v[116];vr117=v[117];vr118=v[118];vr121=v[121];vr122=v[122];vr126=v[126];vr127=v[127];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08915AF0;
L_08915AF0:;
    t6 = LD32(s4+140);
    v0 = t6 & 0x1;
    cnd_ = v0 == 0;
    v1 = t6 + 0;
    if (cnd_) { goto L_08915B40; }
    goto L_08915B00;
L_08915B00:;
    a0 = LD32(sp+452);
    f2 = BITSF(LD32(sp+96));
    f1 = BITSF(LD32(sp+100));
    f0 = BITSF(LD32(a0));
    f3 = BITSF(LD32(a0+4));
    f4 = BITSF(LD32(a0+8));
    f0 = f0 + f0;
    f3 = f3 + f3;
    f4 = f4 + f4;
    f2 = f2 * f0;
    f0 = BITSF(LD32(sp+104));
    f1 = f1 * f3;
    f0 = f0 * f4;
    ST32(sp+96, FBITS(f2));
    ST32(sp+100, FBITS(f1));
    ST32(sp+104, FBITS(f0));
    goto L_08915B40;
L_08915B40:;
    v0 = 0x110000u;
    v0 = t6 & v0;
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(sp+108));
    if (cnd_) { goto L_08915C00; }
    goto L_08915B50;
L_08915B50:;
    {u32 a_=sp+(80);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(64);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    f1 = BITSF(LD32(s4+112));
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {t1=FBITS(vr0);}
    f0 = BITSF(t1);
    f3 = BITSF(t1);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f2 = BITSF(LD32(s4+120)); goto L_08915BBC; }
    goto L_08915B88;
L_08915B88:;
    v0 = 0x10000u;
    v0 = t6 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { f2 = BITSF(LD32(s4+120)); goto L_08915BBC; }
    goto L_08915B98;
L_08915B98:;
    f4 = BITSF(LD32(s4+116));
    f2 = BITSF(0);
    f0 = f1 - f4;
    fcc = FCMP(f0, f2, 2);
    cnd_ = !fcc;
    if (cnd_) { f2 = f25 / f0; goto L_08916C38; }
    goto L_08915BB4;
L_08915BB4:;
    ST32(sp+108, FBITS(f2));
    goto L_08915BB8;
L_08915BB8:;
    f2 = BITSF(LD32(s4+120));
    goto L_08915BBC;
L_08915BBC:;
    fcc = FCMP(f2, f3, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(sp+108));
    if (cnd_) { goto L_08915C00; }
    goto L_08915BCC;
L_08915BCC:;
    v0 = 0x100000u;
    v0 = v1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08915C00; }
    goto L_08915BDC;
L_08915BDC:;
    f0 = BITSF(LD32(s4+124));
    f1 = BITSF(0);
    f2 = f2 - f0;
    fcc = FCMP(f2, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { f2 = f25 / f2; goto L_08916C20; }
    goto L_08915BF8;
L_08915BF8:;
    ST32(sp+108, FBITS(f1));
    goto L_08915BFC;
L_08915BFC:;
    f0 = BITSF(LD32(sp+108));
    goto L_08915C00;
L_08915C00:;
    fcc = FCMP(f0, f26, 14);
    cnd_ = !fcc;
    t1 = LD32(sp+464);
    if (cnd_) { goto L_08915C68; }
    goto L_08915C10;
L_08915C10:;
    v1 = LD32(sp+448);
    s7 = s7 + 32;
    t1 = t1 + 1;
    v0 = t1 < v1;
    cnd_ = v0 != 0;
    ST32(sp+464, t1);
    if (cnd_) { goto L_08915A40; }
    goto L_08915C28;
L_08915C28:;
    a2 = D_08B2C1C4 - (-15932);
    a2 = a2 - 15932;
    a3 = D_08B2C1F0 - (-15888);
    t0 = D_08B2C1FC - (-15876);
    t1 = LD32(sp+448);
    v1 = LD32(a2+36);
    a0 = LD32(a3-15888);
    a1 = LD32(t0-15876);
    v0 = t1 << 2;
    a0 = a0 + v0;
    v1 = v1 + v0;
    a1 = a1 + t1;
    ST32(a2+36, v1);
    ST32(a3-15888, a0);
    ST32(t0-15876, a1);
    goto L_08915940;
L_08915C68:;
    v1 = s4 + 20;
    f2 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(s7+24));
    f1 = BITSF(LD32(v1+16));
    v0 = LD32(v1+4);
    f0 = f0 - f2;
    f1 = f1 - f2;
    a1 = v0 - 1;
    f3 = BITSF(a1);
    v0 = D_08AED2AC - (-11604);
    f0 = f0 / f1;
    f2 = (float)(s32)FBITS(f3);
    f0 = f0 * f2;
    f1 = BITSF(F2I(f0, 1));
    a0 = FBITS(f1);
    cnd_ = (s32)a0 < 0;
    f3 = BITSF(LD32(v0-11604));
    if (cnd_) { goto L_08916C18; }
    goto L_08915CAC;
L_08915CAC:;
    v0 = (s32)a0 < (s32)a1;
    cnd_ = v0 != 0;
    f2 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08916BEC; }
    goto L_08915CB8;
L_08915CB8:;
    v1 = LD32(v1+8);
    v0 = a1 << 2;
    v0 = v0 + v1;
    goto L_08915CC4;
L_08915CC4:;
    f0 = BITSF(LD32(v0));
    goto L_08915CC8;
L_08915CC8:;
    f12 = BITSF(LD32(s7+24));
    a0 = s4 + 60;
    f20 = f0 * f27;
    { rv_t r_ = func_08AABE50(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08915CD8;
L_08915CD8:;
    f5 = BITSF(LD32(s7+28));
    t6 = LD32(s4+140);
    f4 = BITSF(0);
    f0 = f5 * f0;
    v0 = t6 & 0x8000;
    f3 = f5;
    f0 = f25 - f0;
    cnd_ = v0 == 0;
    f20 = f20 * f0;
    if (cnd_) { goto L_08916B24; }
    goto L_08915CFC;
L_08915CFC:;
    a0 = LD32(s4+108);
    v0 = D_08AED2B0 - (-11600);
    f1 = BITSF(LD32(s4+100));
    f0 = BITSF(LD32(v0-11600));
    v1 = a0 < 0x2u;
    cnd_ = v1 != 0;
    f4 = f1 * f0;
    if (cnd_) { goto L_08915D50; }
    goto L_08915D18;
L_08915D18:;
    f0 = BITSF(a0);
    cnd_ = (s32)a0 < 0;
    f2 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08916B08; }
    goto L_08915D24;
L_08915D24:;
    f2 = f3 * f2;
    f0 = BITSF(a0);
    f1 = BITSF(F2I(f2, 1));
    f3 = (float)(s32)FBITS(f0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 * f28;
    cnd_ = (s32)a0 < 0;
    f2 = f0 + f0;
    if (cnd_) { goto L_08916AEC; }
    goto L_08915D44;
L_08915D44:;
    f0 = f25 / f3;
    f0 = f2 * f0;
    f4 = f4 + f0;
    goto L_08915D50;
L_08915D50:;
    v0 = t6 & 0x200;
    goto L_08915D54;
L_08915D54:;
    cnd_ = v0 == 0;
    a0 = LD32(sp+440);
    if (cnd_) { goto L_08916880; }
    goto L_08915D5C;
L_08915D5C:;
    ST32(sp+176, FBITS(f4));
    a0 = FBITS(f20);
    {u32 a_=sp+(480);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+180, FBITS(f4));
    {vr0=BITSF(a0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(480);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+184, 0);
    {vr112=BITSF(LD32(sp+(176)));}
    {vr113=BITSF(LD32(sp+(180)));}
    {vr114=BITSF(LD32(sp+(184)));}
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
    {ST32(sp+(192),FBITS(v[96]));}
    {ST32(sp+(196),FBITS(v[97]));}
    {ST32(sp+(200),FBITS(v[98]));}
    {ST32(sp+(204),FBITS(v[100]));}
    {ST32(sp+(208),FBITS(v[101]));}
    {ST32(sp+(212),FBITS(v[102]));}
    {ST32(sp+(216),FBITS(v[104]));}
    {ST32(sp+(220),FBITS(v[105]));}
    {ST32(sp+(224),FBITS(v[106]));}
    {u32 a_=sp+(496);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(sp+192));
    f1 = BITSF(LD32(sp+204));
    {vr4=BITSF(a0);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    ST32(sp+256, FBITS(f0));
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(480);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(sp+216));
    ST32(sp+260, FBITS(f1));
    ST32(sp+264, FBITS(f0));
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    f0 = BITSF(LD32(sp+196));
    {u32 a_=sp+(496);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a0 = LD32(sp+240);
    ST32(sp+240, FBITS(f0));
    f0 = BITSF(LD32(sp+208));
    v0 = LD32(sp+244);
    v1 = LD32(sp+248);
    ST32(sp+244, FBITS(f0));
    f0 = BITSF(LD32(sp+220));
    ST32(sp+148, v0);
    ST32(sp+248, FBITS(f0));
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    v0 = LD32(sp+252);
    ST32(sp+152, v1);
    ST32(sp+144, a0);
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+156, v0);
    v1 = LD32(sp+256);
    v0 = LD32(sp+260);
    ST32(sp+160, v1);
    ST32(sp+164, v0);
    v1 = LD32(sp+264);
    v0 = LD32(sp+268);
    ST32(sp+168, v1);
    ST32(sp+172, v0);
    goto L_08915EB4;
L_08915EB4:;
    v0 = t6 & 0x2;
    cnd_ = v0 == 0;
    v0 = 0x20000u;
    if (cnd_) { goto L_08916638; }
    goto L_08915EC0;
L_08915EC0:;
    v0 = t6 & v0;
    cnd_ = v0 == 0;
    f4 = BITSF(LD32(s4+84));
    if (cnd_) { goto L_08915EF0; }
    goto L_08915ECC;
L_08915ECC:;
    v0 = D_08AED2BC - (-11588);
    f0 = BITSF(LD32(v0-11588));
    f3 = BITSF(LD32(s4+88));
    f0 = f5 * f0;
    f1 = BITSF(F2I(f0, 1));
    f2 = (float)(s32)FBITS(f1);
    f0 = f0 - f2;
    f0 = f0 * f3;
    f4 = f4 + f0;
    goto L_08915EF0;
L_08915EF0:;
    f0 = BITSF(LD32(s7+24));
    f3 = BITSF(LD32(s4+96));
    f0 = f0 * f4;
    fcc = FCMP(f3, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f3 = f0; goto L_08915F0C; }
    goto L_08915F0C;
L_08915F0C:;
    f0 = BITSF(LD32(s7+12));
    f1 = BITSF(LD32(s7+16));
    f2 = BITSF(LD32(s7+20));
    ST32(sp+272, FBITS(f0));
    v0 = FBITS(f3);
    ST32(sp+280, FBITS(f2));
    {u32 a_=sp+(640);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    ST32(sp+276, FBITS(f1));
    {u32 a_=sp+(640);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(640);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(272);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(80);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+240);
    v1 = LD32(sp+244);
    ST32(sp+272, v0);
    ST32(sp+276, v1);
    v0 = LD32(sp+248);
    v1 = LD32(sp+252);
    ST32(sp+280, v0);
    ST32(sp+284, v1);
    {u32 a_=sp+(272);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {float s0=vr16;float s1=vr17;float s2=vr18;float t0=vr16;float t1=vr17;float t2=vr18;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    v0 = D_08AED2C0 - (-11584);
    f0 = BITSF(LD32(v0-11584));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(144);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_08915FE4; }
    goto L_08915FA4;
L_08915FA4:;
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    v0 = D_08AED2C4 - (-11580);
    f0 = BITSF(LD32(v0-11580));
    {u32 a_=sp+(656);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v1 = FBITS(f0);
    {vr0=BITSF(v1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr0=(float)1;vr1=(float)1;vr2=(float)1;vr3=(float)1;}
    {float s0=vr0;float t0=vr8;float d0=s0/t0;vr4=d0;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float t0=vr4;vr16=s0*t0;vr17=s1*t0;vr18=s2*t0;}
    {u32 a_=sp+(656);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr16;float s1=vr17;float s2=vr18;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr16=d0;vr17=d1;vr18=d2;}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(144);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    goto L_08915FE4;
L_08915FE4:;
    {float s0=vr16;float s1=vr17;float s2=vr18;float t0=vr20;float t1=vr21;float t2=vr22;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {u32 a_=sp+(160);vr24=BITSF(LD32(a_+0));vr25=BITSF(LD32(a_+4));vr26=BITSF(LD32(a_+8));vr27=BITSF(LD32(a_+12));}
    {v1=FBITS(vr0);}
    v0 = (v1 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    {float s0=vr16;float s1=vr17;float s2=vr18;float t0=vr24;float t1=vr25;float t2=vr26;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    a0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(a0);
    fcc = FCMP(f0, f1, 12);
    f1 = BITSF(v1);
    f0 = BITSF(v0);
    cnd_ = !fcc;
    if (cnd_) { goto L_08916564; }
    goto L_0891601C;
L_0891601C:;
    fcc = FCMP(f26, f1, 12);
    cnd_ = !fcc;
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr16;float t1=vr17;float t2=vr18;float t3=vr19;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    if (cnd_) { goto L_089164C8; }
    goto L_0891602C;
L_0891602C:;
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr16;float t1=vr17;float t2=vr18;float t3=vr19;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(256);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr16;float t1=vr17;float t2=vr18;float t3=vr19;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    a2 = LD32(sp+304);
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    a3 = LD32(sp+308);
    t0 = LD32(sp+312);
    t1 = LD32(sp+316);
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    t2 = LD32(sp+304);
    t3 = LD32(sp+308);
    t4 = LD32(sp+312);
    t5 = LD32(sp+316);
    v1 = LD32(sp+244);
    a0 = LD32(sp+248);
    a1 = LD32(sp+252);
    v0 = LD32(sp+240);
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(vr23));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, a0);
    ST32(sp+12, a1);
    ST32(sp+16, a2);
    ST32(sp+20, a3);
    ST32(sp+24, t0);
    ST32(sp+28, t1);
    ST32(sp+32, t2);
    ST32(sp+36, t3);
    ST32(sp+40, t4);
    ST32(sp+44, t5);
    goto L_089160C8;
L_089160C8:;
    v0 = LD32(sp+304);
    v1 = LD32(sp+308);
    ST32(sp+48, v0);
    ST32(sp+52, v1);
    v0 = LD32(sp+312);
    v1 = LD32(sp+316);
    goto L_089160E0;
L_089160E0:;
    ST32(sp+56, v0);
    v0 = t6 & 0x100;
    ST32(sp+60, v1);
    cnd_ = v0 == 0;
    fp = 0 + 0;
    if (cnd_) { goto L_08916108; }
    goto L_089160F4;
L_089160F4:;
    v0 = D_08AED2C8 - (-11576);
    f0 = BITSF(LD32(v0-11576));
    f0 = f5 * f0;
    f0 = BITSF(F2I(f0, 1));
    fp = FBITS(f0);
    goto L_08916108;
L_08916108:;
    v0 = 0x200000u;
    v0 = t6 & v0;
    cnd_ = v0 == 0;
    f24 = BITSF(LD32(sp+108));
    if (cnd_) { goto L_089164AC; }
    goto L_08916118;
L_08916118:;
    f12 = BITSF(LD32(s7+24));
    a0 = s4 + 0;
    a1 = sp + 400;
    a2 = sp + 404;
    a3 = sp + 408;
    func_088EA090(a0, a1, a2, a3, f12);
    goto L_08916130;
L_08916130:;
    v0 = D_08AED2CC - (-11572);
    v1 = D_08AED2D0 - (-11568);
    f23 = BITSF(LD32(v0-11572));
    v0 = D_08AED2AC - (-11604);
    f21 = BITSF(LD32(v1-11568));
    f22 = BITSF(LD32(v0-11604));
    v1 = fp < 0x3u;
    v0 = fp < 0x2u;
    a1 = LD32(sp+400);
    f20 = BITSF(0);
    ST32(sp+752, v0);
    s6 = sp + 96;
    s3 = D_08C191F0 - (-28176);
    ST32(sp+756, v1);
    s5 = D_08C191F8 - (-28168);
    goto L_0891616C;
L_0891616C:;
    v0 = LD32(s3-28176);
    t1 = D_08BF5208 - (21000);
    a0 = t1 + 21000;
    v1 = v0 << 1;
    v1 = v1 + v0;
    v0 = LD32(sp+752);
    v1 = v1 << 3;
    cnd_ = v0 == 0;
    s2 = v1 + a0;
    if (cnd_) { goto L_0891648C; }
    goto L_08916190;
L_08916190:;
    f0 = BITSF(LD32(a1));
    ST32(s2, FBITS(f0));
    f1 = BITSF(LD32(a1+8));
    ST32(s2+24, FBITS(f1));
    f0 = BITSF(LD32(a1+8));
    ST32(s2+48, FBITS(f0));
    f1 = BITSF(LD32(a1));
    goto L_089161AC;
L_089161AC:;
    v1 = LD32(sp+756);
    cnd_ = v1 == 0;
    ST32(s2+72, FBITS(f1));
    if (cnd_) { goto L_08916478; }
    goto L_089161B8;
L_089161B8:;
    cnd_ = fp != 0;
    if (cnd_) { f0 = BITSF(LD32(a1+12)); goto L_0891645C; }
    goto L_089161C0;
L_089161C0:;
    f0 = BITSF(LD32(a1+4));
    goto L_089161C4;
L_089161C4:;
    ST32(s2+4, FBITS(f0));
    f1 = BITSF(LD32(a1+4));
    ST32(s2+28, FBITS(f1));
    f0 = BITSF(LD32(a1+12));
    ST32(s2+52, FBITS(f0));
    f1 = BITSF(LD32(a1+12));
    goto L_089161DC;
L_089161DC:;
    ST32(s2+76, FBITS(f1));
    a0 = D_08AED2AC - (-11604);
    f0 = BITSF(LD32(sp+408));
    f2 = BITSF(LD32(a0-11604));
    f1 = f24 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    ST32(sp+108, FBITS(f1));
    if (cnd_) { goto L_08916218; }
    goto L_08916204;
L_08916204:;
    fcc = FCMP(f2, f1, 12);
    cnd_ = fcc;
    f0 = f2;
    if (cnd_) { goto L_08916218; }
    goto L_08916214;
L_08916214:;
    f0 = f1;
    goto L_08916218;
L_08916218:;
    f1 = f0 * f23;
    f0 = f1 + f21;
    fcc = FCMP(f20, f1, 12);
    cnd_ = fcc;
    f0 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_08916238; }
    goto L_08916230;
L_08916230:;
    f0 = f1 - f21;
    f0 = BITSF(F2I(f0, 1));
    goto L_08916238;
L_08916238:;
    t1 = FBITS(f0);
    a0 = s6 + 8;
    a1 = sp + 412;
    a2 = sp + 416;
    s0 = t1 << 8;
    ST32(sp+412, FBITS(f20));
    ST32(sp+416, FBITS(f22));
    f0 = func_0891801C(a0, a1, a2);
    goto L_08916258;
L_08916258:;
    f1 = f0 * f23;
    f0 = f1 + f21;
    fcc = FCMP(f20, f1, 12);
    cnd_ = fcc;
    f0 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_08916278; }
    goto L_08916270;
L_08916270:;
    f0 = f1 - f21;
    f0 = BITSF(F2I(f0, 1));
    goto L_08916278;
L_08916278:;
    v0 = FBITS(f0);
    a0 = s6 + 4;
    a1 = sp + 420;
    a2 = sp + 424;
    s0 = s0 + v0;
    ST32(sp+420, FBITS(f20));
    s0 = s0 << 8;
    ST32(sp+424, FBITS(f22));
    f0 = func_0891801C(a0, a1, a2);
    goto L_0891629C;
L_0891629C:;
    f1 = f0 * f23;
    f0 = f1 + f21;
    fcc = FCMP(f20, f1, 12);
    cnd_ = fcc;
    f0 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_089162BC; }
    goto L_089162B4;
L_089162B4:;
    f0 = f1 - f21;
    f0 = BITSF(F2I(f0, 1));
    goto L_089162BC;
L_089162BC:;
    v1 = FBITS(f0);
    a0 = s6 + 0;
    a1 = sp + 428;
    a2 = sp + 432;
    s0 = s0 + v1;
    ST32(sp+428, FBITS(f20));
    s0 = s0 << 8;
    ST32(sp+432, FBITS(f22));
    f0 = func_0891801C(a0, a1, a2);
    goto L_089162E0;
L_089162E0:;
    f1 = f0 * f23;
    f0 = f1 + f21;
    fcc = FCMP(f20, f1, 12);
    cnd_ = fcc;
    f0 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_08916300; }
    goto L_089162F8;
L_089162F8:;
    f0 = f1 - f21;
    f0 = BITSF(F2I(f0, 1));
    goto L_08916300;
L_08916300:;
    v1 = LD32(s4+140);
    a0 = FBITS(f0);
    v0 = 0x400000u;
    v1 = v1 & v0;
    s0 = s0 + a0;
    v0 = s2 + 0;
    a0 = sp + 0;
    cnd_ = v1 != 0;
    a1 = 3;
    if (cnd_) { goto L_08916438; }
    goto L_08916324;
L_08916324:;
    f0 = BITSF(LD32(a0));
    f1 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(a0+8));
    a1 = a1 - 1;
    ST32(v0+12, FBITS(f0));
    a0 = a0 + 16;
    ST32(v0+16, FBITS(f1));
    ST32(v0+20, FBITS(f2));
    ST32(v0+8, s0);
    cnd_ = (s32)a1 >= 0;
    v0 = v0 + 24;
    if (cnd_) { goto L_08916324; }
    goto L_08916350;
L_08916350:;
    a0 = LD32(s2+8);
    a1 = LD32(s2+12);
    t7 = LD32(s2+48);
    s0 = LD32(s2+52);
    s1 = LD32(s2+56);
    t2 = LD32(s2+72);
    t3 = LD32(s2+76);
    t4 = LD32(s2+80);
    t5 = LD32(s2+60);
    t6 = LD32(s2+64);
    t1 = LD32(s2+68);
    v0 = LD32(s2);
    v1 = LD32(s2+4);
    a2 = LD32(s2+16);
    a3 = LD32(s2+20);
    t0 = LD32(s2+84);
    ST32(s2-16, a0);
    ST32(s2-12, a1);
    a0 = LD32(s2+92);
    a1 = LD32(s2+88);
    ST32(s2-24, v0);
    ST32(s2-20, v1);
    ST32(s2-8, a2);
    ST32(s2-4, a3);
    ST32(s2+48, t2);
    ST32(s2+52, t3);
    ST32(s2+56, t4);
    ST32(s2+72, t7);
    ST32(s2+76, s0);
    ST32(s2+80, s1);
    ST32(s2+84, t5);
    ST32(s2+88, t6);
    ST32(s2+92, t1);
    ST32(s2+60, t0);
    v0 = LD32(s3-28176);
    v1 = LD32(s5-28168);
    ST32(s2+116, t1);
    v0 = v0 + 6;
    v1 = v1 + 6;
    ST32(s2+64, a1);
    ST32(s2+68, a0);
    ST32(s2+96, t7);
    ST32(s2+100, s0);
    ST32(s2+104, s1);
    ST32(s2+108, t5);
    ST32(s2+112, t6);
    goto L_08916408;
L_08916408:;
    f0 = BITSF(LD32(sp+408));
    ST32(s3-28176, v0);
    f0 = f22 - f0;
    v0 = LD32(sp+404);
    ST32(s5-28168, v1);
    a1 = v0 + 0;
    ST32(sp+404, 0);
    ST32(sp+400, v0);
    cnd_ = v0 != 0;
    ST32(sp+408, FBITS(f0));
    if (cnd_) { goto L_0891616C; }
    goto L_08916430;
L_08916430:;
    t1 = LD32(sp+464);
    goto L_08915C10;
L_08916438:;
    a0 = s2 + 0;
    a2 = s0 + 0;
    a1 = sp + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;func_089175C4(a0, a1, a2); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];vr15=v[15];vr16=v[16];vr17=v[17];vr18=v[18];vr19=v[19];vr20=v[20];vr21=v[21];vr22=v[22];vr23=v[23];vr24=v[24];vr25=v[25];vr26=v[26];vr27=v[27];});
    goto L_08916448;
L_08916448:;
    v0 = LD32(s3-28176);
    v1 = LD32(s5-28168);
    v0 = v0 + 26;
    v1 = v1 + 26;
    goto L_08916408;
L_0891645C:;
    ST32(s2+4, FBITS(f0));
    f1 = BITSF(LD32(a1+12));
    ST32(s2+28, FBITS(f1));
    f0 = BITSF(LD32(a1+4));
    ST32(s2+52, FBITS(f0));
    f1 = BITSF(LD32(a1+4));
    goto L_089161DC;
L_08916478:;
    v0 = 3;
    cnd_ = fp != v0;
    if (cnd_) { f0 = BITSF(LD32(a1+12)); goto L_0891645C; }
    goto L_08916484;
L_08916484:;
    f0 = BITSF(LD32(a1+4));
    goto L_089161C4;
L_0891648C:;
    f0 = BITSF(LD32(a1+8));
    ST32(s2, FBITS(f0));
    f1 = BITSF(LD32(a1));
    ST32(s2+24, FBITS(f1));
    f0 = BITSF(LD32(a1));
    ST32(s2+48, FBITS(f0));
    f1 = BITSF(LD32(a1+8));
    goto L_089161AC;
L_089164AC:;
    f12 = BITSF(LD32(s7+24));
    a0 = s4 + 0;
    v0 = func_08ABB0F4(a0, f12);
    goto L_089164B8;
L_089164B8:;
    ST32(sp+400, v0);
    ST32(sp+404, 0);
    ST32(sp+408, FBITS(f25));
    goto L_08916130;
L_089164C8:;
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr16;float t1=vr17;float t2=vr18;float t3=vr19;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    a2 = LD32(sp+304);
    a3 = LD32(sp+308);
    t0 = LD32(sp+312);
    t1 = LD32(sp+316);
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    t2 = LD32(sp+304);
    t3 = LD32(sp+308);
    t4 = LD32(sp+312);
    t5 = LD32(sp+316);
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+304);
    v1 = LD32(sp+308);
    a0 = LD32(sp+312);
    a1 = LD32(sp+316);
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    goto L_08916530;
L_08916530:;
    ST32(sp, a2);
    ST32(sp+4, a3);
    ST32(sp+8, t0);
    ST32(sp+12, t1);
    ST32(sp+16, t2);
    ST32(sp+20, t3);
    ST32(sp+24, t4);
    ST32(sp+28, t5);
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    ST32(sp+40, a0);
    ST32(sp+44, a1);
    goto L_089160C8;
L_08916564:;
    fcc = FCMP(f26, f0, 12);
    cnd_ = !fcc;
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr16;float t1=vr17;float t2=vr18;float t3=vr19;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    if (cnd_) { goto L_089165EC; }
    goto L_08916574;
L_08916574:;
    {u32 a_=sp+(256);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr16;float t1=vr17;float t2=vr18;float t3=vr19;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr16;float t1=vr17;float t2=vr18;float t3=vr19;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    a2 = LD32(sp+304);
    a3 = LD32(sp+308);
    t0 = LD32(sp+312);
    t1 = LD32(sp+316);
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    goto L_089165C0;
L_089165C0:;
    t2 = LD32(sp+304);
    t3 = LD32(sp+308);
    t4 = LD32(sp+312);
    t5 = LD32(sp+316);
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    v0 = LD32(sp+304);
    v1 = LD32(sp+308);
    a0 = LD32(sp+312);
    a1 = LD32(sp+316);
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_08916530;
L_089165EC:;
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr16;float t1=vr17;float t2=vr18;float t3=vr19;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    a2 = LD32(sp+304);
    a3 = LD32(sp+308);
    t0 = LD32(sp+312);
    t1 = LD32(sp+316);
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    goto L_089165C0;
L_08916638:;
    fcc = FCMP(f4, f26, 2);
    cnd_ = fcc;
    {u32 a_=sp+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089167D8; }
    goto L_08916648;
L_08916648:;
    {vr4=0.63661977236f;}
    {u32 a_=sp+(672);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    t1 = FBITS(f4);
    {vr0=BITSF(t1);}
    {float s0=vr0;float t0=vr4;float d0=s0*t0;vr4=d0;}
    {u32 a_=sp+(144);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {u32 a_=sp+(672);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(160);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(80);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));vr35=BITSF(LD32(a_+12));}
    {float s0=vr4;float d0=cosf(s0*1.57079632679f);vr0=d0;}
    {v0=FBITS(vr0);}
    {u32 a_=sp+(688);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;v[28]=s0*t0;v[29]=s1*t0;v[30]=s2*t0;}
    v1 = v0 + 0;
    {u32 a_=sp+(688);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr4;float d0=sinf(s0*1.57079632679f);vr4=d0;}
    {u32 a_=sp+(704);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {v0=FBITS(vr4);}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr12=s0*t0;vr13=s1*t0;vr14=s2*t0;}
    {float s0=v[28];float s1=v[29];float s2=v[30];float d0=-s0;float d1=-s1;float d2=-s2;v[44]=d0;v[45]=d1;v[46]=d2;}
    {u32 a_=sp+(736);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;vr36=s0*t0;vr37=s1*t0;vr38=s2*t0;}
    {u32 a_=sp+(704);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(720);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    {u32 a_=sp+(720);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=v[44];float s1=v[45];float s2=v[46];float s3=vr47;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr36;float s1=vr37;float s2=vr38;float d0=-s0;float d1=-s1;float d2=-s2;v[48]=d0;v[49]=d1;v[50]=d2;}
    {u32 a_=sp+(736);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=v[28];float s1=v[29];float s2=v[30];float s3=v[31];float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=vr51;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=v[28];float s1=v[29];float s2=v[30];float s3=v[31];float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr36;float s1=vr37;float s2=vr38;float s3=vr39;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[40]=d0;v[41]=d1;v[42]=d2;v[43]=d3;}
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=v[44];float s1=v[45];float s2=v[46];float s3=vr47;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[56]=d0;v[57]=d1;v[58]=d2;v[59]=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float t0=vr16;float t1=vr17;float t2=vr18;float t3=vr19;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr36;float s1=vr37;float s2=vr38;float s3=vr39;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=v[40];float t1=v[41];float t2=v[42];float t3=v[43];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float t0=v[56];float t1=v[57];float t2=v[58];float t3=v[59];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+240);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=vr51;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[52]=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    ST32(sp, v0);
    {u32 a_=sp+(384);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    v0 = LD32(sp+244);
    a3 = LD32(sp+384);
    v1 = LD32(sp+252);
    a0 = LD32(sp+388);
    ST32(sp+4, v0);
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float t0=v[52];float t1=v[53];float t2=v[54];float t3=v[55];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    v0 = LD32(sp+248);
    a1 = LD32(sp+392);
    a2 = LD32(sp+396);
    ST32(sp+8, v0);
    {u32 a_=sp+(384);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    ST32(sp+12, v1);
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    ST32(sp+16, a3);
    ST32(sp+20, a0);
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[44]));ST32(a_+4,FBITS(v[45]));ST32(a_+8,FBITS(v[46]));ST32(a_+12,FBITS(vr47));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    v0 = LD32(sp+384);
    v1 = LD32(sp+388);
    ST32(sp+24, a1);
    {u32 a_=sp+(368);ST32(a_+0,FBITS(vr32));ST32(a_+4,FBITS(vr33));ST32(a_+8,FBITS(vr34));ST32(a_+12,FBITS(vr35));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(vr51));}
    ST32(sp+32, v0);
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    v0 = LD32(sp+392);
    ST32(sp+36, v1);
    v1 = LD32(sp+396);
    {u32 a_=sp+(384);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(vr23));}
    ST32(sp+40, v0);
    v0 = LD32(sp+384);
    ST32(sp+28, a2);
    ST32(sp+48, v0);
    v0 = LD32(sp+388);
    ST32(sp+44, v1);
    ST32(sp+52, v0);
    goto L_089167CC;
L_089167CC:;
    v0 = LD32(sp+392);
    v1 = LD32(sp+396);
    goto L_089160E0;
L_089167D8:;
    {u32 a_=sp+(80);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(160);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a2 = LD32(sp+384);
    a3 = LD32(sp+388);
    t0 = LD32(sp+392);
    t1 = LD32(sp+396);
    {u32 a_=sp+(384);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    t2 = LD32(sp+384);
    t3 = LD32(sp+388);
    t4 = LD32(sp+392);
    t5 = LD32(sp+396);
    {u32 a_=sp+(384);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+384);
    v1 = LD32(sp+388);
    a0 = LD32(sp+392);
    a1 = LD32(sp+396);
    {u32 a_=sp+(384);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    ST32(sp+32, v0);
    v0 = LD32(sp+384);
    ST32(sp+36, v1);
    ST32(sp, a2);
    ST32(sp+4, a3);
    ST32(sp+8, t0);
    ST32(sp+12, t1);
    ST32(sp+16, t2);
    ST32(sp+20, t3);
    ST32(sp+24, t4);
    ST32(sp+28, t5);
    ST32(sp+40, a0);
    ST32(sp+44, a1);
    ST32(sp+48, v0);
    v1 = LD32(sp+388);
    ST32(sp+52, v1);
    goto L_089167CC;
L_08916880:;
    v0 = (t6 >> 12) & 0x1;
    v1 = 0 < a0;
    v0 = v1 & v0;
    cnd_ = v0 == 0;
    v0 = (t6 >> 13) & 0x1;
    if (cnd_) { goto L_08916954; }
    goto L_08916894;
L_08916894:;
    f0 = BITSF(LD32(a0+4));
    f1 = BITSF(LD32(a0+16));
    f2 = BITSF(LD32(a0+28));
    ST32(sp+240, FBITS(f0));
    t1 = FBITS(f20);
    ST32(sp+248, FBITS(f2));
    {u32 a_=sp+(512);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(528);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    ST32(sp+244, FBITS(f1));
    {vr0=BITSF(t1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr4=BITSF(t1);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(528);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    f0 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(a0+20));
    f2 = BITSF(LD32(a0+32));
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(512);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    ST32(sp+240, FBITS(f0));
    ST32(sp+244, FBITS(f1));
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(528);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    goto L_08916900;
L_08916900:;
    ST32(sp+248, FBITS(f2));
    {u32 a_=sp+(240);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    v0 = LD32(sp+256);
    v1 = LD32(sp+260);
    a0 = LD32(sp+264);
    a1 = LD32(sp+268);
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+144, v0);
    ST32(sp+148, v1);
    v0 = LD32(sp+256);
    v1 = LD32(sp+260);
    ST32(sp+152, a0);
    ST32(sp+160, v0);
    ST32(sp+164, v1);
    v0 = LD32(sp+264);
    v1 = LD32(sp+268);
    ST32(sp+156, a1);
    ST32(sp+168, v0);
    ST32(sp+172, v1);
    goto L_08915EB4;
L_08916954:;
    v0 = v1 & v0;
    cnd_ = v0 == 0;
    v0 = (t6 >> 14) & 0x1;
    if (cnd_) { goto L_089169D4; }
    goto L_08916960;
L_08916960:;
    v0 = LD32(sp+440);
    v1 = FBITS(f20);
    {u32 a_=sp+(544);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+12));
    f2 = BITSF(LD32(v0+24));
    ST32(sp+240, FBITS(f0));
    {vr0=BITSF(v1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(560);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    ST32(sp+244, FBITS(f1));
    {u32 a_=sp+(544);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {vr4=BITSF(v1);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    ST32(sp+248, FBITS(f2));
    {u32 a_=sp+(560);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(544);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+20));
    f2 = BITSF(LD32(v0+32));
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    ST32(sp+240, FBITS(f0));
    ST32(sp+244, FBITS(f1));
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(560);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    goto L_08916900;
L_089169D4:;
    v0 = v1 & v0;
    cnd_ = v0 == 0;
    a0 = D_08C19210 - (-28144);
    if (cnd_) { goto L_08916A54; }
    goto L_089169E0;
L_089169E0:;
    v0 = LD32(sp+440);
    v1 = FBITS(f20);
    {u32 a_=sp+(576);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+12));
    f2 = BITSF(LD32(v0+24));
    ST32(sp+240, FBITS(f0));
    {vr0=BITSF(v1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(592);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    ST32(sp+244, FBITS(f1));
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {vr4=BITSF(v1);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    ST32(sp+248, FBITS(f2));
    {u32 a_=sp+(592);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(576);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+16));
    f2 = BITSF(LD32(v0+28));
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    ST32(sp+240, FBITS(f0));
    ST32(sp+244, FBITS(f1));
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(592);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    goto L_08916900;
L_08916A54:;
    v0 = a0 - 28144;
    a1 = D_08C19220 - (-28128);
    a2 = LD32(a0-28144);
    a3 = LD32(v0+12);
    t0 = LD32(a1-28128);
    a0 = LD32(v0+4);
    v1 = a1 - 28128;
    a1 = LD32(v0+8);
    t2 = LD32(v1+12);
    t1 = LD32(v1+4);
    v0 = LD32(v1+8);
    ST32(sp+144, a2);
    v1 = FBITS(f20);
    {u32 a_=sp+(624);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+148, a0);
    {vr0=BITSF(v1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+152, a1);
    {u32 a_=sp+(608);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {vr4=BITSF(v1);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    ST32(sp+156, a3);
    {u32 a_=sp+(608);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr0=d0;vr1=d1;vr2=d2;}
    ST32(sp+160, t0);
    {u32 a_=sp+(624);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    ST32(sp+164, t1);
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+168, v0);
    ST32(sp+172, t2);
    {u32 a_=sp+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_08915EB4;
L_08916AEC:;
    v1 = a0 >> 1;
    v0 = a0 & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f3 = (float)(s32)FBITS(f1);
    f3 = f3 + f3;
    goto L_08915D44;
L_08916B08:;
    v0 = a0 & 0x1;
    v1 = a0 >> 1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f2 = (float)(s32)FBITS(f1);
    f2 = f2 + f2;
    goto L_08915D24;
L_08916B24:;
    v1 = t6 & 0x202;
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = t6 & 0x4;
    if (cnd_) { goto L_08915D50; }
    goto L_08916B34;
L_08916B34:;
    cnd_ = v0 == 0;
    v0 = D_08B285A4 - (-31324);
    if (cnd_) { goto L_08916BC8; }
    goto L_08916B3C;
L_08916B3C:;
    f0 = BITSF(LD32(v0-31324));
    fcc = FCMP(f0, f4, 2);
    cnd_ = fcc;
    f1 = f4;
    if (cnd_) { goto L_08916BA0; }
    goto L_08916B50;
L_08916B50:;
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
    v1 = D_08AED2B8 - (-11592);
    a0 = a0 + v0;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v1-11592));
    ST32(a2+4, a0);
    f1 = f1 * f0;
    ST32(a1+23232, v0);
    f1 = f1 * f28;
    t6 = LD32(s4+140);
    f1 = f1 + f1;
    goto L_08916BA0;
L_08916BA0:;
    f4 = f1;
    goto L_08916BA4;
L_08916BA4:;
    v0 = t6 & 0x400;
    cnd_ = v0 == 0;
    v0 = t6 & 0x200;
    if (cnd_) { goto L_08915D54; }
    goto L_08916BB0;
L_08916BB0:;
    v0 = LD32(s7+28);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { f4 = BITSF(FBITS(f4) ^ 0x80000000u); goto L_08915D50; }
    goto L_08916BC0;
L_08916BC0:;
    v0 = t6 & 0x200;
    goto L_08915D54;
L_08916BC8:;
    f12 = BITSF(LD32(s7+24));
    a0 = s4 + 40;
    { rv_t r_ = func_08AABE50(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08916BD4;
L_08916BD4:;
    f5 = BITSF(LD32(s7+28));
    t6 = LD32(s4+140);
    f0 = f5 + f0;
    f0 = f0 * f28;
    f4 = f0 + f0;
    goto L_08916BA4;
L_08916BEC:;
    v1 = LD32(v1+8);
    v0 = a0 << 2;
    f2 = f0 - f2;
    v0 = v0 + v1;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0));
    f3 = f3 - f2;
    f1 = f1 * f2;
    f0 = f0 * f3;
    f0 = f0 + f1;
    goto L_08915CC8;
L_08916C18:;
    v0 = LD32(v1+8);
    goto L_08915CC4;
L_08916C20:;
    f1 = f3 - f0;
    f0 = BITSF(LD32(sp+108));
    f1 = f1 * f2;
    f0 = f0 * f1;
    ST32(sp+108, FBITS(f0));
    goto L_08915BFC;
L_08916C38:;
    f0 = BITSF(LD32(sp+108));
    f1 = f3 - f4;
    f1 = f1 * f2;
    f0 = f0 * f1;
    ST32(sp+108, FBITS(f0));
    goto L_08915BB8;
L_08916C50:;
    v0 = LD32(s4+8);
    v1 = v1 << 4;
    f1 = f0 - f1;
    v0 = v0 + v1;
    f7 = BITSF(LD32(v0));
    f8 = BITSF(LD32(v0+4));
    f0 = f25 - f1;
    f6 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    v1 = v0 + 16;
    f7 = f7 * f0;
    f3 = f3 * f0;
    f8 = f8 * f0;
    f6 = f6 * f0;
    ST32(sp+112, FBITS(f7));
    ST32(sp+116, FBITS(f8));
    ST32(sp+120, FBITS(f6));
    ST32(sp+124, FBITS(f3));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    f5 = f5 * f1;
    f4 = f4 * f1;
    f0 = f0 * f1;
    f2 = f2 * f1;
    f3 = f3 + f5;
    f7 = f7 + f4;
    f8 = f8 + f0;
    f6 = f6 + f2;
    ST32(sp+108, FBITS(f3));
    ST32(sp+96, FBITS(f7));
    ST32(sp+100, FBITS(f8));
    ST32(sp+104, FBITS(f6));
    ST32(sp+128, FBITS(f4));
    ST32(sp+132, FBITS(f0));
    ST32(sp+136, FBITS(f2));
    ST32(sp+140, FBITS(f5));
    goto L_08915ACC;
L_08916CEC:;
    v0 = LD32(s4+8);
    goto L_08915AAC;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[121]=vr121;v[122]=vr122;v[126]=vr126;v[127]=vr127;
}

/* 08916CF4 */
rv_t func_08916CF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f12 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[592] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 592);
L_08916CF4:;
    v1 = D_08B15A00 - (23040);
    v0 = LD32(v1+23040);
    sp = sp - 592;
    a0 = a0 & 0xff;
    fp = a2 + 0;
    s7 = 0 + 0;
    s3 = a3 + 0;
    ST32(sp+340, a1);
    ST32(sp+344, t0);
    cnd_ = (s32)v0 <= 0;
    ST32(sp+336, a0);
    if (cnd_) { goto L_08916DA8; }
    goto L_08916D5C;
L_08916D5C:;
    v1 = D_08B22E88 - (11912);
    v1 = v1 + 11912;
    a1 = a2 << 2;
    ST32(sp+508, v1);
    ST32(sp+464, a1);
    goto L_08916D70;
L_08916D70:;
    a3 = LD32(sp+336);
    v0 = (u32)((s32)a3 >> (s7 & 31));
    v0 = v0 ^ 0x1;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = D_08B15A04 - (23044); goto L_08916DEC; }
    goto L_08916D88;
L_08916D88:;
    v1 = D_08B15A00 - (23040);
    a1 = LD32(sp+508);
    v0 = LD32(v1+23040);
    s7 = s7 + 1;
    a1 = a1 + 136;
    v0 = (s32)s7 < (s32)v0;
    cnd_ = v0 != 0;
    ST32(sp+508, a1);
    if (cnd_) { goto L_08916D70; }
    goto L_08916DA8;
L_08916DA8:;
    sp = sp + 592;
    return (rv_t){ v0, v1, f0 };
L_08916DEC:;
    v0 = LD32(a0+23044);
    cnd_ = s7 == v0;
    a1 = D_08B159FC - (23036);
    if (cnd_) { goto L_08916E2C; }
    goto L_08916DF8;
L_08916DF8:;
    v1 = 1;
    v0 = v1 << (s7 & 31);
    v1 = D_08B230A8 - (12456);
    ST8(v1+12456, v0);
    a3 = 1;
    v0 = D_08B15A0C - (23052);
    ST8(v0+23052, a3);
    v1 = D_08B230AC - (12460);
    v1 = v1 + 12460;
    v0 = LD32(sp+508);
    ST32(a0+23044, s7);
    ST32(a1+23036, v0);
    ST8(v1+4, a3);
    goto L_08916E2C;
L_08916E2C:;
    v0 = LD32(a1+23036);
    s5 = 0 + 0;
    f0 = BITSF(LD32(v0));
    ST32(sp+64, FBITS(f0));
    f1 = BITSF(LD32(v0+4));
    ST32(sp+68, FBITS(f1));
    f0 = BITSF(LD32(v0+8));
    cnd_ = fp == 0;
    ST32(sp+72, FBITS(f0));
    if (cnd_) { goto L_08917390; }
    goto L_08916E50;
L_08916E50:;
    v0 = D_08AED2D4 - (-11564);
    v1 = D_08AED2DC - (-11556);
    f23 = BITSF(LD32(v0-11564));
    v0 = D_08AED2E0 - (-11552);
    f24 = BITSF(LD32(v1-11556));
    f22 = BITSF(LD32(v0-11552));
    {v[0]=0.63661977236f;}
    v0 = s3 + 20;
    v1 = s3 + 60;
    a1 = s3 + 40;
    f21 = BITSF(0);
    ST32(sp+496, v0);
    {u32 a_=sp+(480);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    s4 = sp + 96;
    ST32(sp+504, v1);
    s6 = D_08C191F0 - (-28176);
    ST32(sp+500, a1);
    s2 = LD32(sp+340);
    goto L_08916E98;
L_08916E98:;
    f0 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s2+8));
    f12 = BITSF(LD32(s2+24));
    a0 = s4 + 0;
    a1 = s3 + 0;
    ST32(sp+80, FBITS(f0));
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f2));
    func_08AB8994(a0, a1, f12);
    goto L_08916EC0;
L_08916EC0:;
    a3 = D_08B30C18 - (3096);
    v0 = LD32(a3+3096);
    cnd_ = v0 == 0;
    a0 = LD32(sp+344);
    if (cnd_) { goto L_08916EE0; }
    goto L_08916ED0;
L_08916ED0:;
    a1 = s3 + 0;
    a2 = s5 + 0;
    t_ = v0;
    a3 = s4 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08916EE0;
L_08916EE0:;
    f12 = BITSF(LD32(s2+24));
    a0 = LD32(sp+496);
    { rv_t r_ = func_08AABE50(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08916EEC;
L_08916EEC:;
    a0 = LD32(sp+504);
    f12 = BITSF(LD32(s2+24));
    f20 = f0;
    { rv_t r_ = func_08AABE50(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08916EFC;
L_08916EFC:;
    f1 = BITSF(LD32(s2+28));
    f12 = BITSF(LD32(s2+24));
    a0 = LD32(sp+500);
    f1 = f1 * f0;
    f1 = f23 - f1;
    f20 = f20 * f1;
    { rv_t r_ = func_08AABE50(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08916F18;
L_08916F18:;
    f1 = BITSF(LD32(s2+28));
    v0 = D_08C19210 - (-28144);
    {u32 a_=v0+(-28144);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f1 = f1 + f0;
    v0 = D_08AED2D8 - (-11560);
    f0 = BITSF(LD32(v0-11560));
    {u32 a_=sp+(352);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v1 = FBITS(f20);
    f1 = f1 * f0;
    {v[4]=BITSF(v1);}
    {float s0=v[4];float s1=v[4];float s2=v[4];float s3=v[4];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    v1 = D_08C19220 - (-28128);
    f1 = f1 + f1;
    {u32 a_=v1+(-28128);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(480);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    a1 = FBITS(f20);
    {u32 a_=sp+(368);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(a1);}
    {float s0=v[4];float s1=v[4];float s2=v[4];float s3=v[4];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[4];v[8]=s0*t0;v[9]=s1*t0;v[10]=s2*t0;}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = FBITS(f1);
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(384);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {float s0=v[0];float t0=v[12];float d0=s0*t0;v[4]=d0;}
    v0 = LD32(sp+144);
    v1 = LD32(sp+148);
    a1 = LD32(sp+152);
    a2 = LD32(sp+156);
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    ST32(sp+112, v0);
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);v[0]=d0;}
    {float s0=v[4];float d0=sinf(s0*1.57079632679f);v[4]=d0;}
    {v0=FBITS(v[0]);}
    {u32 a_=sp+(400);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = v0 + 0;
    {v[0]=BITSF(v0);}
    {float s0=v[0];float s1=v[0];float s2=v[0];float s3=v[0];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    v0 = LD32(sp+144);
    ST32(sp+116, v1);
    {u32 a_=sp+(80);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = FBITS(f0);
    ST32(sp+128, v0);
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(448);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+148);
    ST32(sp+120, a1);
    {v[4]=BITSF(v1);}
    {float s0=v[4];float s1=v[4];float s2=v[4];float s3=v[4];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    ST32(sp+124, a2);
    ST32(sp+132, v0);
    {u32 a_=sp+(112);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];v[36]=s0*t0;v[37]=s1*t0;v[38]=s2*t0;}
    v0 = LD32(sp+152);
    {u32 a_=sp+(416);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v1);}
    {float s0=v[0];float s1=v[0];float s2=v[0];float s3=v[0];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    ST32(sp+136, v0);
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];v[8]=s0*t0;v[9]=s1*t0;v[10]=s2*t0;}
    {u32 a_=sp+(448);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+156);
    {float s0=v[36];float s1=v[37];float s2=v[38];float d0=-s0;float d1=-s1;float d2=-s2;v[44]=d0;v[45]=d1;v[46]=d2;}
    {u32 a_=sp+(432);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    ST32(sp+140, v0);
    {v[12]=BITSF(a0);}
    {float s0=v[12];float s1=v[12];float s2=v[12];float s3=v[12];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    {u32 a_=sp+(128);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[20];v[12]=s0*t0;v[13]=s1*t0;v[14]=s2*t0;}
    {u32 a_=sp+(432);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[20];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {float s0=v[44];float s1=v[45];float s2=v[46];float s3=v[47];float t0=v[8];float t1=v[9];float t2=v[10];float t3=v[11];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[36];float s1=v[37];float s2=v[38];float s3=v[39];float t0=v[8];float t1=v[9];float t2=v[10];float t3=v[11];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float d0=-s0;float d1=-s1;float d2=-s2;v[48]=d0;v[49]=d1;v[50]=d2;}
    {float s0=v[36];float s1=v[37];float s2=v[38];float s3=v[39];float t0=v[8];float t1=v[9];float t2=v[10];float t3=v[11];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=v[44];float s1=v[45];float s2=v[46];float s3=v[47];float t0=v[8];float t1=v[9];float t2=v[10];float t3=v[11];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[56]=d0;v[57]=d1;v[58]=d2;v[59]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[40]=d0;v[41]=d1;v[42]=d2;v[43]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float t0=v[16];float t1=v[17];float t2=v[18];float t3=v[19];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float t0=v[20];float t1=v[21];float t2=v[22];float t3=v[23];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[24];float t1=v[25];float t2=v[26];float t3=v[27];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float t0=v[56];float t1=v[57];float t2=v[58];float t3=v[59];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[52]=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float t0=v[40];float t1=v[41];float t2=v[42];float t3=v[43];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {float s0=v[20];float s1=v[21];float s2=v[22];float s3=v[23];float t0=v[28];float t1=v[29];float t2=v[30];float t3=v[31];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    v0 = LD32(sp+208);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float t0=v[52];float t1=v[53];float t2=v[54];float t3=v[55];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    ST32(sp, v0);
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[36]));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    v0 = LD32(sp+212);
    t2 = LD32(sp+292);
    t3 = LD32(sp+296);
    ST32(sp+4, v0);
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    v0 = LD32(sp+216);
    t4 = LD32(sp+300);
    v1 = LD32(sp+288);
    ST32(sp+8, v0);
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[20]));ST32(a_+4,FBITS(v[21]));ST32(a_+8,FBITS(v[22]));ST32(a_+12,FBITS(v[23]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[44]));ST32(a_+4,FBITS(v[45]));ST32(a_+8,FBITS(v[46]));ST32(a_+12,FBITS(v[47]));}
    v0 = LD32(sp+220);
    a1 = LD32(sp+288);
    a2 = LD32(sp+292);
    a3 = LD32(sp+296);
    t0 = LD32(sp+300);
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[24]));ST32(a_+4,FBITS(v[25]));ST32(a_+8,FBITS(v[26]));ST32(a_+12,FBITS(v[27]));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    ST32(sp+12, v0);
    v0 = D_08BF5208 - (21000);
    t1 = v0 + 21000;
    v0 = LD32(sp+288);
    ST32(sp+16, v1);
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    v1 = LD32(sp+292);
    ST32(sp+48, v0);
    a0 = s3 + 0;
    v0 = LD32(sp+296);
    ST32(sp+52, v1);
    v1 = LD32(s6-28176);
    ST32(sp+20, t2);
    ST32(sp+24, t3);
    ST32(sp+28, t4);
    ST32(sp+32, a1);
    ST32(sp+36, a2);
    ST32(sp+40, a3);
    ST32(sp+44, t0);
    ST32(sp+56, v0);
    v0 = v1 << 1;
    v0 = v0 + v1;
    f12 = BITSF(LD32(s2+24));
    v1 = LD32(sp+300);
    v0 = v0 << 3;
    s0 = v0 + t1;
    ST32(sp+60, v1);
    v0 = func_08ABB0F4(a0, f12);
    goto L_0891718C;
L_0891718C:;
    a0 = sp + 108;
    f1 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s0+96, FBITS(f1));
    a1 = sp + 304;
    a2 = sp + 308;
    ST32(s0+24, FBITS(f1));
    ST32(s0+72, FBITS(f1));
    ST32(s0+48, FBITS(f0));
    ST32(s0+28, FBITS(f2));
    ST32(s0+100, FBITS(f3));
    ST32(s0-24, FBITS(f0));
    ST32(s0, FBITS(f0));
    ST32(s0-20, FBITS(f2));
    ST32(s0+4, FBITS(f2));
    ST32(s0+76, FBITS(f3));
    ST32(s0+52, FBITS(f3));
    ST32(sp+304, FBITS(f21));
    ST32(sp+308, FBITS(f23));
    f0 = func_0891801C(a0, a1, a2);
    goto L_089171E4;
L_089171E4:;
    f1 = f0 * f24;
    f0 = f1 + f22;
    fcc = FCMP(f21, f1, 12);
    cnd_ = fcc;
    f0 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_08917204; }
    goto L_089171FC;
L_089171FC:;
    f0 = f1 - f22;
    f0 = BITSF(F2I(f0, 1));
    goto L_08917204;
L_08917204:;
    v1 = FBITS(f0);
    a0 = s4 + 8;
    a1 = sp + 312;
    a2 = sp + 316;
    s1 = v1 << 8;
    ST32(sp+312, FBITS(f21));
    ST32(sp+316, FBITS(f23));
    f0 = func_0891801C(a0, a1, a2);
    goto L_08917224;
L_08917224:;
    f1 = f0 * f24;
    f0 = f1 + f22;
    fcc = FCMP(f21, f1, 12);
    cnd_ = fcc;
    f0 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_08917244; }
    goto L_0891723C;
L_0891723C:;
    f0 = f1 - f22;
    f0 = BITSF(F2I(f0, 1));
    goto L_08917244;
L_08917244:;
    a3 = FBITS(f0);
    a0 = s4 + 4;
    a1 = sp + 320;
    a2 = sp + 324;
    s1 = s1 + a3;
    ST32(sp+320, FBITS(f21));
    s1 = s1 << 8;
    ST32(sp+324, FBITS(f23));
    f0 = func_0891801C(a0, a1, a2);
    goto L_08917268;
L_08917268:;
    f1 = f0 * f24;
    f0 = f1 + f22;
    fcc = FCMP(f21, f1, 12);
    cnd_ = fcc;
    f0 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_08917288; }
    goto L_08917280;
L_08917280:;
    f0 = f1 - f22;
    f0 = BITSF(F2I(f0, 1));
    goto L_08917288;
L_08917288:;
    v0 = FBITS(f0);
    a0 = s4 + 0;
    a1 = sp + 328;
    a2 = sp + 332;
    s1 = s1 + v0;
    ST32(sp+328, FBITS(f21));
    s1 = s1 << 8;
    ST32(sp+332, FBITS(f23));
    f0 = func_0891801C(a0, a1, a2);
    goto L_089172AC;
L_089172AC:;
    f1 = f0 * f24;
    f0 = f1 + f22;
    fcc = FCMP(f21, f1, 12);
    cnd_ = fcc;
    f0 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_089172CC; }
    goto L_089172C4;
L_089172C4:;
    f0 = f1 - f22;
    f0 = BITSF(F2I(f0, 1));
    goto L_089172CC;
L_089172CC:;
    f2 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+4));
    f4 = BITSF(LD32(sp+8));
    f7 = BITSF(LD32(sp+40));
    f5 = BITSF(LD32(sp+32));
    f6 = BITSF(LD32(sp+36));
    ST32(s0+12, FBITS(f2));
    v1 = FBITS(f0);
    a1 = D_08C191F8 - (-28168);
    ST32(s0+16, FBITS(f3));
    s1 = s1 + v1;
    s5 = s5 + 1;
    ST32(s0+20, FBITS(f4));
    a0 = s5 < fp;
    s2 = s2 + 32;
    f0 = BITSF(LD32(sp+16));
    ST32(s0+36, FBITS(f0));
    f1 = BITSF(LD32(sp+20));
    ST32(s0+40, FBITS(f1));
    f0 = BITSF(LD32(sp+24));
    ST32(s0+44, FBITS(f0));
    f1 = BITSF(LD32(sp+48));
    ST32(s0+60, FBITS(f1));
    f0 = BITSF(LD32(sp+52));
    ST32(s0+64, FBITS(f0));
    f1 = BITSF(LD32(sp+56));
    ST32(s0+108, FBITS(f5));
    ST32(s0+68, FBITS(f1));
    ST32(s0-12, FBITS(f2));
    ST32(s0-8, FBITS(f3));
    ST32(s0-4, FBITS(f4));
    ST32(s0-16, s1);
    ST32(s0+8, s1);
    ST32(s0+32, s1);
    ST32(s0+84, FBITS(f5));
    ST32(s0+88, FBITS(f6));
    ST32(s0+92, FBITS(f7));
    ST32(s0+80, s1);
    ST32(s0+56, s1);
    ST32(s0+112, FBITS(f6));
    v0 = LD32(s6-28176);
    v1 = LD32(a1-28168);
    ST32(s0+116, FBITS(f7));
    v0 = v0 + 6;
    v1 = v1 + 6;
    ST32(s0+104, s1);
    ST32(s6-28176, v0);
    cnd_ = a0 != 0;
    ST32(a1-28168, v1);
    if (cnd_) { goto L_08916E98; }
    goto L_08917390;
L_08917390:;
    a3 = D_08B2C1C4 - (-15932);
    a1 = D_08B2C1F0 - (-15888);
    a3 = a3 - 15932;
    a0 = LD32(a3+36);
    v0 = LD32(a1-15888);
    a3 = LD32(sp+464);
    a2 = D_08B2C1FC - (-15876);
    v1 = LD32(a2-15876);
    v0 = v0 + a3;
    ST32(a1-15888, v0);
    v0 = D_08B2C1C4 - (-15932);
    a0 = a0 + a3;
    v1 = v1 + fp;
    v0 = v0 - 15932;
    ST32(a2-15876, v1);
    ST32(v0+36, a0);
    goto L_08916D88;
}

/* 089173D4 */
rv_t func_089173D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f20 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089173D4:;
    sp = sp - 64;
    v1 = 0x400000u;
    s6 = t0 + 0;
    s3 = a1 + 0;
    s2 = a0 + 0;
    s1 = a2 + 0;
    s0 = a3 + 0;
    v0 = LD32(a3+140);
    v1 = v0 & v1;
    v0 = (v0 >> 21) & 0x1;
    cnd_ = v1 != 0;
    a0 = a2 << (v0 & 31);
    if (cnd_) { goto L_08917590; }
    goto L_0891742C;
L_0891742C:;
    v0 = D_08AD95DC - (-27172);
    v1 = LD32(v0-27172);
    goto L_08917434;
L_08917434:;
    { s64 p_ = (s64)(s32)a0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = D_08C191F0 - (-28176);
    v0 = LD32(v1-28176);
    a0 = lo;
    v0 = v0 + a0;
    v0 = v0 < 0x1800u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08917528; }
    goto L_08917454;
L_08917454:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_0891752C; }
    goto L_0891745C;
L_0891745C:;
    v0 = s0 < 0x1u;
    v1 = s3 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08917530; }
    goto L_08917470;
L_08917470:;
    s4 = D_08B1B46C - (-19348);
    v1 = LD32(s4-19348);
    v0 = LD32(s0+132);
    cnd_ = v1 == v0;
    s7 = D_08C191F4 - (-28172);
    if (cnd_) { goto L_0891749C; }
    goto L_08917484;
L_08917484:;
    func_08915778(a3, t0, t1, t2, t3);
    goto L_0891748C;
L_0891748C:;
    v0 = LD32(s0+132);
    a0 = v0 + 0;
    ST32(s4-19348, v0);
    func_0890C3C0(a0);
    goto L_0891749C;
L_0891749C:;
    v0 = LD_U16(s2+20);
    a0 = LD32(s7-28172);
    v1 = LD32(s0+80);
    s4 = (v0 >> 11) & 0x1;
    cnd_ = a0 == v1;
    s5 = D_08C19200 - (-28160);
    if (cnd_) { goto L_0891757C; }
    goto L_089174B4;
L_089174B4:;
    func_08915778(a3, t0, t1, t2, t3);
    goto L_089174BC;
L_089174BC:;
    v0 = LD32(s0+80);
    ST8(s5-28160, s4);
    ST32(s7-28172, v0);
    v1 = LD32(s0+140);
    goto L_089174CC;
L_089174CC:;
    v0 = 0x750000u;
    v0 = v0 | 0xf305;
    v0 = v1 & v0;
    cnd_ = v0 == 0;
    v0 = 0x40000u;
    if (cnd_) { goto L_0891755C; }
    goto L_089174E0;
L_089174E0:;
    v0 = v1 & v0;
    cnd_ = v0 == 0;
    v0 = D_08AED2E4 - (-11548);
    if (cnd_) { goto L_08917554; }
    goto L_089174EC;
L_089174EC:;
    f20 = BITSF(LD32(s2+60));
    goto L_089174F0;
L_089174F0:;
    v1 = LD32(s2);
    v0 = LD32(v1+24);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08917500;
L_08917500:;
    a0 = LD_U8(s2+22);
    f12 = f20;
    a1 = v0 + 0;
    a2 = s3 + 0;
    a3 = s1 + 0;
    t0 = s0 + 0;
    t1 = s6 + 0;
    t2 = s2 + 0;
    { rv_t r_ = func_0891589C(a0, a1, a2, a3, t0, t1, t2, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08917524;
L_08917524:;
    goto L_08917528;
L_08917528:;
    goto L_0891752C;
L_0891752C:;
    goto L_08917530;
L_08917530:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08917554:;
    f20 = BITSF(LD32(v0-11548));
    goto L_089174F0;
L_0891755C:;
    a0 = LD_U8(s2+22);
    a1 = s3 + 0;
    a2 = s1 + 0;
    a3 = s0 + 0;
    t0 = s2 + 0;
    { rv_t r_ = func_08916CF4(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08917574;
L_08917574:;
    goto L_08917528;
L_0891757C:;
    v0 = LD_U8(s5-28160);
    cnd_ = v0 != s4;
    if (cnd_) { goto L_089174B4; }
    goto L_08917588;
L_08917588:;
    v1 = LD32(s0+140);
    goto L_089174CC;
L_08917590:;
    v0 = D_08AD95E0 - (-27168);
    v1 = LD32(v0-27168);
    goto L_08917434;
}

/* 0891759C */
u32 func_0891759C(void)
{
    u32 v0 = 0;
L_0891759C:;
    v0 = 0 + 0;
    return v0;
}

/* 089175A4 */
void func_089175A4(void)
{
L_089175A4:;
    return;
}

/* 089175AC */
void func_089175AC(void)
{
    u32 v0 = 0, v1 = 0;
L_089175AC:;
    v1 = (u32)-2;
    v0 = D_08B1B46C - (-19348);
    ST32(v0-19348, v1);
    return;
}

/* 089175BC */
void func_089175BC(void)
{
L_089175BC:;
    return;
}

/* 089175C4 */
void func_089175C4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, t9 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0, f28 = 0, f29 = 0, f30 = 0, f31 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr23 = v[23], vr24 = v[24], vr28 = v[28];
    u8 stack_[752] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 752);
L_089175C4:;
    sp = sp - 752;
    t2 = LD32(a1+20);
    t3 = LD32(a1+24);
    t4 = LD32(a1+28);
    v0 = LD32(a1);
    v1 = LD32(a1+4);
    a3 = LD32(a1+8);
    t0 = LD32(a1+12);
    t1 = LD32(a1+16);
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, a3);
    ST32(sp+12, t0);
    ST32(sp+48, t1);
    {u32 a_=sp+(0);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    ST32(sp+52, t2);
    ST32(sp+56, t3);
    ST32(sp+60, t4);
    {u32 a_=sp+(48);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    v1 = LD32(a1+52);
    v0 = LD32(a1+48);
    t4 = LD32(a1+44);
    a3 = LD32(a1+56);
    t0 = LD32(a1+60);
    t1 = LD32(a1+32);
    t2 = LD32(a1+36);
    t3 = LD32(a1+40);
    ST32(sp+196, v1);
    v1 = D_08AED2E8 - (-11544);
    {u32 a_=sp+(272);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+192, v0);
    v0 = LD32(v1-11544);
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    ST32(sp+200, a3);
    {vr20=BITSF(v0);}
    {float s0=vr20;float s1=vr20;float s2=vr20;float s3=vr20;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {vr24=BITSF(v0);}
    {float s0=vr24;float s1=vr24;float s2=vr24;float s3=vr24;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    ST32(sp+204, t0);
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr28=BITSF(v0);}
    {float s0=vr28;float s1=vr28;float s2=vr28;float s3=vr28;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {u32 a_=sp+(192);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    ST32(sp+240, t1);
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+288);
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr20;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    v1 = LD32(sp+296);
    ST32(sp+16, v0);
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    v0 = LD32(sp+292);
    ST32(sp+244, t2);
    {u32 a_=sp+(272);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    ST32(sp+20, v0);
    v0 = LD32(sp+300);
    ST32(sp+248, t3);
    ST32(sp+252, t4);
    ST32(sp+24, v1);
    ST32(sp+28, v0);
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a1 = LD32(sp+288);
    a3 = LD32(sp+292);
    t0 = LD32(sp+296);
    t1 = LD32(sp+300);
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    v0 = LD32(sp+288);
    v1 = LD32(sp+292);
    ST32(sp+32, a1);
    ST32(sp+64, v0);
    ST32(sp+68, v1);
    v0 = LD32(sp+296);
    v1 = LD32(sp+300);
    ST32(sp+36, a3);
    ST32(sp+72, v0);
    ST32(sp+76, v1);
    {u32 a_=sp+(64);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    ST32(sp+40, t0);
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    ST32(sp+44, t1);
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+288);
    v1 = LD32(sp+292);
    ST32(sp+80, v0);
    ST32(sp+84, v1);
    v0 = LD32(sp+296);
    v1 = LD32(sp+300);
    ST32(sp+88, v0);
    ST32(sp+92, v1);
    {u32 a_=sp+(80);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+288);
    v1 = LD32(sp+292);
    ST32(sp+96, v0);
    ST32(sp+100, v1);
    v0 = LD32(sp+296);
    v1 = LD32(sp+300);
    ST32(sp+104, v0);
    ST32(sp+108, v1);
    {u32 a_=sp+(96);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+288);
    v1 = LD32(sp+292);
    a1 = LD32(sp+296);
    a3 = LD32(sp+300);
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    ST32(sp+112, v0);
    ST32(sp+116, v1);
    v0 = LD32(sp+288);
    v1 = LD32(sp+292);
    ST32(sp+120, a1);
    ST32(sp+128, v0);
    ST32(sp+132, v1);
    v0 = LD32(sp+296);
    v1 = LD32(sp+300);
    ST32(sp+124, a3);
    ST32(sp+136, v0);
    ST32(sp+140, v1);
    {u32 a_=sp+(128);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+288);
    v1 = LD32(sp+292);
    ST32(sp+144, v0);
    ST32(sp+148, v1);
    v0 = LD32(sp+296);
    v1 = LD32(sp+300);
    ST32(sp+152, v0);
    ST32(sp+156, v1);
    {u32 a_=sp+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+288);
    v1 = LD32(sp+292);
    f0 = BITSF(LD32(a0+24));
    ST32(sp+160, v0);
    ST32(sp+164, v1);
    v0 = LD32(sp+296);
    v1 = LD32(sp+300);
    ST32(sp+592, FBITS(f0));
    ST32(sp+168, v0);
    ST32(sp+172, v1);
    {u32 a_=sp+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    f0 = BITSF(LD32(a0+28));
    f5 = BITSF(LD32(a0));
    f6 = BITSF(LD32(a0+4));
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+288);
    v1 = LD32(sp+292);
    a1 = LD32(sp+296);
    a3 = LD32(sp+300);
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    ST32(sp+176, v0);
    ST32(sp+180, v1);
    v0 = LD32(sp+288);
    v1 = LD32(sp+292);
    ST32(sp+184, a1);
    ST32(sp+208, v0);
    ST32(sp+212, v1);
    v0 = LD32(sp+296);
    v1 = LD32(sp+300);
    ST32(sp+188, a3);
    ST32(sp+216, v0);
    ST32(sp+220, v1);
    {u32 a_=sp+(208);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    ST32(sp+596, FBITS(f0));
    f0 = BITSF(LD32(a0+48));
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+288);
    ST32(sp+600, FBITS(f0));
    f0 = BITSF(LD32(sp+592));
    v1 = LD32(sp+292);
    ST32(sp+288, FBITS(f5));
    ST32(sp+336, FBITS(f0));
    f0 = BITSF(LD32(sp+596));
    ST32(sp+292, FBITS(f6));
    ST32(sp+340, FBITS(f0));
    ST32(sp+224, v0);
    ST32(sp+344, 0);
    v0 = LD32(sp+296);
    ST32(sp+296, 0);
    {u32 a_=sp+(336);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    f16 = BITSF(LD32(a0+72));
    f17 = BITSF(LD32(a0+76));
    f0 = BITSF(LD32(a0+52));
    ST32(sp+480, FBITS(f16));
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr24;vr12=s0*t0;vr13=s1*t0;vr14=s2*t0;}
    a0 = a0 - 24;
    ST32(sp+484, FBITS(f17));
    t0 = a0 + 12;
    t1 = a0 + 36;
    ST32(sp+488, 0);
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    t2 = a0 + 60;
    ST32(sp+604, FBITS(f0));
    {u32 a_=sp+(480);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    {float s0=vr20;float s1=vr21;float s2=vr22;float s3=vr23;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    f0 = BITSF(LD32(sp+600));
    ST32(sp+228, v1);
    {float s0=vr20;float s1=vr21;float s2=vr22;float s3=vr23;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    t3 = a0 + 84;
    v1 = LD32(sp+300);
    ST32(sp+528, FBITS(f0));
    t4 = a0 + 108;
    t5 = a0 + 132;
    f0 = BITSF(LD32(sp+604));
    ST32(sp+232, v0);
    s0 = a0 + 204;
    s1 = a0 + 228;
    ST32(sp+236, v1);
    t6 = a0 + 156;
    t7 = a0 + 180;
    ST32(sp+532, FBITS(f0));
    s2 = a0 + 252;
    s3 = a0 + 276;
    ST32(sp+536, 0);
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+576);
    {float s0=vr16;float s1=vr17;float s2=vr18;float t0=vr28;vr16=s0*t0;vr17=s1*t0;vr18=s2*t0;}
    {u32 a_=sp+(560);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+304, v0);
    {u32 a_=sp+(544);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    s5 = a0 + 300;
    v0 = LD32(sp+580);
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr16;float t1=vr17;float t2=vr18;float t3=vr19;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    s4 = a0 + 324;
    ST32(sp+308, v0);
    s6 = a0 + 348;
    s7 = a0 + 372;
    v0 = LD32(sp+584);
    t8 = a0 + 396;
    t9 = a0 + 420;
    ST32(sp+312, v0);
    fp = a0 + 444;
    v0 = LD32(sp+588);
    ST32(sp+316, v0);
    {u32 a_=sp+(304);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+576);
    a1 = LD32(sp+580);
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    v0 = LD32(sp+576);
    ST32(sp+320, v1);
    ST32(sp+352, v0);
    v0 = LD32(sp+580);
    ST32(sp+324, a1);
    ST32(sp+356, v0);
    v0 = LD32(sp+584);
    ST32(sp+360, v0);
    v0 = LD32(sp+588);
    ST32(sp+364, v0);
    v0 = a0 + 468;
    {u32 a_=sp+(352);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    ST32(sp+616, v0);
    v0 = a0 + 492;
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr16;float t1=vr17;float t2=vr18;float t3=vr19;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    ST32(sp+620, v0);
    v0 = a0 + 516;
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+624, v0);
    v0 = a0 + 540;
    ST32(sp+628, v0);
    v0 = LD32(sp+576);
    ST32(sp+368, v0);
    v0 = a0 + 564;
    ST32(sp+632, v0);
    v0 = a0 + 588;
    ST32(sp+636, v0);
    v0 = LD32(sp+580);
    v1 = LD32(sp+588);
    ST32(sp+372, v0);
    v0 = a0 + 612;
    ST32(sp+640, v0);
    v0 = LD32(sp+584);
    ST32(sp+380, v1);
    ST32(sp+376, v0);
    {u32 a_=sp+(368);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+576);
    v1 = LD32(sp+580);
    ST32(sp+384, v0);
    ST32(sp+388, v1);
    v0 = LD32(sp+584);
    v1 = LD32(sp+588);
    ST32(sp+392, v0);
    ST32(sp+396, v1);
    {u32 a_=sp+(384);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a3 = LD32(sp+580);
    a1 = LD32(sp+576);
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+576);
    v1 = LD32(sp+580);
    ST32(sp+416, v0);
    ST32(sp+420, v1);
    v0 = LD32(sp+584);
    v1 = LD32(sp+588);
    ST32(sp+424, v0);
    ST32(sp+428, v1);
    {u32 a_=sp+(416);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    ST32(sp+400, a1);
    ST32(sp+404, a3);
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+576);
    v1 = LD32(sp+580);
    ST32(sp+432, v0);
    ST32(sp+436, v1);
    v0 = LD32(sp+584);
    v1 = LD32(sp+588);
    ST32(sp+440, v0);
    ST32(sp+444, v1);
    {u32 a_=sp+(432);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+576);
    v1 = LD32(sp+580);
    ST32(sp+448, v0);
    ST32(sp+452, v1);
    v0 = LD32(sp+584);
    v1 = LD32(sp+588);
    ST32(sp+456, v0);
    ST32(sp+460, v1);
    {u32 a_=sp+(448);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a3 = LD32(sp+580);
    a1 = LD32(sp+576);
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(vr23));}
    v0 = LD32(sp+576);
    v1 = LD32(sp+580);
    ST32(sp+496, v0);
    ST32(sp+500, v1);
    v0 = LD32(sp+584);
    v1 = LD32(sp+588);
    ST32(sp+504, v0);
    ST32(sp+508, v1);
    {u32 a_=sp+(496);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    ST32(sp+464, a1);
    f1 = BITSF(LD32(sp));
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    f31 = BITSF(LD32(sp+304));
    f29 = BITSF(LD32(sp+308));
    f15 = BITSF(LD32(sp+16));
    f30 = BITSF(LD32(sp+24));
    f3 = BITSF(LD32(sp+352));
    f4 = BITSF(LD32(sp+356));
    v0 = LD32(sp+576);
    f2 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f14 = BITSF(LD32(sp+20));
    v1 = LD32(sp+580);
    ST32(sp+512, v0);
    ST32(a0, FBITS(f5));
    ST32(a0+4, FBITS(f6));
    ST32(a0+12, FBITS(f1));
    ST32(sp+468, a3);
    ST32(sp+516, v1);
    ST32(a0+8, a2);
    ST32(t0+8, FBITS(f0));
    ST32(t0+4, FBITS(f2));
    ST32(a0+24, FBITS(f5));
    ST32(a0+28, FBITS(f6));
    ST32(a0+36, FBITS(f1));
    ST32(t1+8, FBITS(f0));
    ST32(t1+4, FBITS(f2));
    ST32(a0+48, FBITS(f31));
    ST32(a0+52, FBITS(f29));
    ST32(a0+60, FBITS(f15));
    ST32(t2+8, FBITS(f30));
    ST32(t2+4, FBITS(f14));
    ST32(a0+72, FBITS(f3));
    ST32(a0+32, a2);
    f20 = BITSF(LD32(sp+368));
    f21 = BITSF(LD32(sp+372));
    f22 = BITSF(LD32(sp+80));
    f23 = BITSF(LD32(sp+84));
    f13 = BITSF(LD32(sp+88));
    f11 = BITSF(LD32(sp+432));
    f5 = BITSF(LD32(sp+420));
    f6 = BITSF(LD32(sp+128));
    f0 = BITSF(LD32(sp+64));
    ST32(a0+76, FBITS(f4));
    f2 = BITSF(LD32(sp+68));
    f4 = BITSF(LD32(sp+416));
    f1 = BITSF(LD32(sp+72));
    f7 = BITSF(LD32(sp+132));
    f3 = BITSF(LD32(sp+136));
    f12 = BITSF(LD32(sp+436));
    ST32(a0+84, FBITS(f0));
    ST32(a0+56, a2);
    ST32(t3+8, FBITS(f1));
    ST32(t3+4, FBITS(f2));
    ST32(a0+80, a2);
    ST32(a0+96, FBITS(f20));
    ST32(a0+100, FBITS(f21));
    ST32(a0+108, FBITS(f22));
    ST32(a0+104, a2);
    ST32(t4+8, FBITS(f13));
    ST32(t4+4, FBITS(f23));
    ST32(a0+128, a2);
    ST32(a0+120, FBITS(f4));
    ST32(a0+124, FBITS(f5));
    ST32(a0+132, FBITS(f6));
    ST32(t5+8, FBITS(f3));
    ST32(t5+4, FBITS(f7));
    ST32(a0+144, FBITS(f11));
    f9 = BITSF(LD32(sp+144));
    f4 = BITSF(LD32(sp+496));
    f5 = BITSF(LD32(sp+500));
    f6 = BITSF(LD32(sp+208));
    f10 = BITSF(LD32(sp+148));
    f8 = BITSF(LD32(sp+152));
    f1 = BITSF(LD32(sp+192));
    f7 = BITSF(LD32(sp+212));
    f3 = BITSF(LD32(sp+216));
    f2 = BITSF(LD32(sp+196));
    f0 = BITSF(LD32(sp+200));
    f28 = BITSF(LD32(sp+512));
    ST32(a0+148, FBITS(f12));
    ST32(a0+156, FBITS(f9));
    ST32(a0+152, a2);
    ST32(t6+8, FBITS(f8));
    ST32(t6+4, FBITS(f10));
    ST32(a0+176, a2);
    ST32(a0+168, FBITS(f16));
    ST32(a0+172, FBITS(f17));
    ST32(a0+180, FBITS(f1));
    ST32(t7+8, FBITS(f0));
    ST32(t7+4, FBITS(f2));
    ST32(a0+192, FBITS(f4));
    ST32(a0+196, FBITS(f5));
    ST32(a0+204, FBITS(f6));
    ST32(s0+8, FBITS(f3));
    ST32(s0+4, FBITS(f7));
    ST32(a0+216, FBITS(f4));
    ST32(a0+220, FBITS(f5));
    ST32(a0+228, FBITS(f6));
    ST32(s1+8, FBITS(f3));
    ST32(s1+4, FBITS(f7));
    ST32(a0+200, a2);
    f0 = BITSF(LD32(sp+168));
    f25 = BITSF(LD32(sp+516));
    f26 = BITSF(LD32(sp+224));
    ST32(sp+608, FBITS(f0));
    f0 = BITSF(LD32(sp+384));
    f27 = BITSF(LD32(sp+228));
    f24 = BITSF(LD32(sp+232));
    f16 = BITSF(LD32(sp+448));
    f17 = BITSF(LD32(sp+452));
    f18 = BITSF(LD32(sp+160));
    f19 = BITSF(LD32(sp+164));
    ST32(sp+612, FBITS(f0));
    f0 = BITSF(LD32(sp+608));
    ST32(a0+240, FBITS(f28));
    ST32(a0+244, FBITS(f25));
    ST32(a0+252, FBITS(f26));
    ST32(a0+224, a2);
    ST32(s2+8, FBITS(f24));
    ST32(s2+4, FBITS(f27));
    ST32(a0+248, a2);
    ST32(a0+264, FBITS(f11));
    ST32(a0+268, FBITS(f12));
    ST32(a0+276, FBITS(f9));
    ST32(s3+8, FBITS(f8));
    ST32(s3+4, FBITS(f10));
    ST32(a0+288, FBITS(f16));
    ST32(a0+292, FBITS(f17));
    ST32(a0+300, FBITS(f18));
    ST32(s5+8, FBITS(f0));
    ST32(s5+4, FBITS(f19));
    ST32(a0+312, FBITS(f20));
    ST32(a0+316, FBITS(f21));
    ST32(a0+324, FBITS(f22));
    ST32(s4+8, FBITS(f13));
    ST32(s4+4, FBITS(f23));
    f0 = BITSF(LD32(sp+612));
    f1 = BITSF(LD32(sp+320));
    f2 = BITSF(LD32(sp+324));
    f3 = BITSF(LD32(sp+32));
    f11 = BITSF(LD32(sp+388));
    f12 = BITSF(LD32(sp+96));
    f4 = BITSF(LD32(sp+36));
    ST32(a0+336, FBITS(f0));
    f13 = BITSF(LD32(sp+100));
    f10 = BITSF(LD32(sp+104));
    f0 = BITSF(LD32(sp+40));
    ST32(a0+340, FBITS(f11));
    ST32(a0+348, FBITS(f12));
    ST32(a0+272, a2);
    ST32(s6+8, FBITS(f10));
    ST32(s6+4, FBITS(f13));
    ST32(a0+296, a2);
    ST32(a0+360, FBITS(f31));
    ST32(a0+364, FBITS(f29));
    ST32(a0+372, FBITS(f15));
    ST32(a0+320, a2);
    ST32(s7+8, FBITS(f30));
    ST32(s7+4, FBITS(f14));
    ST32(a0+344, a2);
    ST32(a0+384, FBITS(f1));
    ST32(a0+388, FBITS(f2));
    ST32(a0+396, FBITS(f3));
    ST32(t8+8, FBITS(f0));
    ST32(t8+4, FBITS(f4));
    ST32(a0+408, FBITS(f1));
    ST32(a0+412, FBITS(f2));
    ST32(a0+420, FBITS(f3));
    ST32(t9+8, FBITS(f0));
    f0 = BITSF(LD32(sp+592));
    ST32(t9+4, FBITS(f4));
    ST32(a0+432, FBITS(f0));
    f0 = BITSF(LD32(sp+596));
    f2 = BITSF(LD32(sp+52));
    f1 = BITSF(LD32(sp+56));
    ST32(a0+436, FBITS(f0));
    f0 = BITSF(LD32(sp+48));
    v0 = LD32(sp+616);
    f4 = BITSF(LD32(sp+400));
    ST32(a0+444, FBITS(f0));
    f0 = BITSF(LD32(sp+612));
    f5 = BITSF(LD32(sp+404));
    f6 = BITSF(LD32(sp+112));
    f3 = BITSF(LD32(sp+120));
    f8 = BITSF(LD32(sp+464));
    f9 = BITSF(LD32(sp+468));
    f7 = BITSF(LD32(sp+116));
    ST32(fp+8, FBITS(f1));
    ST32(fp+4, FBITS(f2));
    ST32(a0+456, FBITS(f0));
    ST32(a0+460, FBITS(f11));
    ST32(a0+468, FBITS(f12));
    ST32(v0+8, FBITS(f10));
    ST32(v0+4, FBITS(f13));
    v0 = LD32(sp+620);
    ST32(a0+480, FBITS(f4));
    ST32(a0+484, FBITS(f5));
    ST32(a0+492, FBITS(f6));
    ST32(a0+368, a2);
    ST32(v0+8, FBITS(f3));
    ST32(a0+392, a2);
    ST32(a0+416, a2);
    ST32(v0+4, FBITS(f7));
    v0 = LD32(sp+624);
    f0 = BITSF(LD32(sp+608));
    ST32(a0+504, FBITS(f16));
    ST32(a0+508, FBITS(f17));
    ST32(a0+516, FBITS(f18));
    ST32(v0+4, FBITS(f19));
    ST32(v0+8, FBITS(f0));
    v0 = LD32(sp+628);
    f0 = BITSF(LD32(sp+176));
    f2 = BITSF(LD32(sp+180));
    f1 = BITSF(LD32(sp+184));
    f3 = BITSF(LD32(sp+240));
    f5 = BITSF(LD32(sp+244));
    f4 = BITSF(LD32(sp+248));
    ST32(a0+540, FBITS(f0));
    ST32(a0+528, FBITS(f8));
    ST32(a0+532, FBITS(f9));
    f0 = BITSF(LD32(sp+600));
    ST32(v0+8, FBITS(f1));
    ST32(v0+4, FBITS(f2));
    v0 = LD32(sp+632);
    ST32(a0+552, FBITS(f28));
    ST32(a0+556, FBITS(f25));
    ST32(a0+564, FBITS(f26));
    ST32(v0+8, FBITS(f24));
    ST32(v0+4, FBITS(f27));
    ST32(a0+576, FBITS(f0));
    f0 = BITSF(LD32(sp+604));
    ST32(a0+440, a2);
    ST32(a0+464, a2);
    ST32(a0+488, a2);
    ST32(a0+512, a2);
    ST32(a0+608, a2);
    ST32(a0+536, a2);
    ST32(a0+580, FBITS(f0));
    v0 = LD32(sp+636);
    f0 = BITSF(LD32(sp+600));
    ST32(a0+588, FBITS(f3));
    ST32(v0+8, FBITS(f4));
    ST32(v0+4, FBITS(f5));
    ST32(a0+600, FBITS(f0));
    v0 = LD32(sp+640);
    f0 = BITSF(LD32(sp+604));
    ST32(a0+612, FBITS(f3));
    ST32(a0+604, FBITS(f0));
    ST32(a0+560, a2);
    ST32(v0+8, FBITS(f4));
    ST32(v0+4, FBITS(f5));
    ST32(a0+584, a2);
    sp = sp + 752;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[28]=vr28;return; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[28]=vr28;
}

/* 08918014 */
void func_08918014(void)
{
L_08918014:;
    return;
}

/* 0891801C */
float func_0891801C(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0891801C:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08918048; }
    goto L_08918034;
L_08918034:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_08918048; }
    goto L_08918048;
L_08918048:;
    return f0;
}

/* 08918050 */
u32 func_08918050(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08918050:;
    a0 = LD32(a0);
    v1 = LD32(a1);
    v0 = a0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08918070; }
    goto L_08918064;
L_08918064:;
    v1 = LD32(a2);
    v0 = v1 < a0;
    if (v0 == 0) v1 = a0;
    goto L_08918070;
L_08918070:;
    v0 = v1 + 0;
    return v0;
}

/* 08918078 */
rv_t func_08918078(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08918078:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    func_08918014();
    goto L_0891808C;
L_0891808C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08918098 */
void func_08918098(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08918098:;
    v0 = D_08C19240 - (-28096);
    v1 = 0x8000;
    v0 = v0 - 28096;
    v0 = v0 + v1;
    a0 = (u32)-1;
    v1 = D_08B1B470 - (-19344);
    ST32(v1-19344, a0);
    sp = sp - 16;
    ST32(v0+8204, 0);
    ST32(v0+8196, 0);
    ST32(v0+8200, 0);
    func_0883A610(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089180D0;
L_089180D0:;
    sp = sp + 16;
    return;
}

/* 089180DC */
void func_089180DC(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089180DC:;
    sp = sp - 16;
    func_08918098(a1, a2, a3, t0, t1, t2, t3);
    goto L_089180EC;
L_089180EC:;
    sp = sp + 16;
    return;
}

/* 089180F8 */
void func_089180F8(void)
{
    u32 v0 = 0, v1 = 0;
L_089180F8:;
    v0 = D_08C19240 - (-28096);
    v0 = v0 - 28096;
    v1 = 0x8000;
    v0 = v0 + v1;
    ST32(v0+8204, 0);
    ST32(v0+8196, 0);
    ST32(v0+8200, 0);
    return;
}

/* 08918118 */
void func_08918118(u32 a0, u32 a1)
{
    u32 v0 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08918118:;
    v0 = a0 + 0;
    a0 = D_08C19240 - (-28096);
    sp = sp - 16;
    a2 = a1 + 0;
    a0 = a0 - 28096;
    a1 = v0 + 0;
    func_08ABB1FC(a0, a1, a2);
    goto L_08918138;
L_08918138:;
    sp = sp + 16;
    return;
}

/* 08918144 */
void func_08918144(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08918144:;
    sp = sp - 32;
    s4 = D_08C19240 - (-28096);
    v0 = s4 - 28096;
    v1 = 0x8000;
    v0 = v0 + v1;
    a0 = LD32(v0+8196);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089182A8; }
    goto L_0891817C;
L_0891817C:;
    s2 = D_08B1B470 - (-19344);
    v1 = LD32(s2-19344);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = D_08B263B8 - (25528);
    if (cnd_) { goto L_08918300; }
    goto L_08918190;
L_08918190:;
    s3 = D_08B162B8 - (25272);
    func_08903530();
    goto L_08918198;
L_08918198:;
    v0 = LD32(s3+25272);
    v1 = (u32)-100;
    cnd_ = v0 == v1;
    a0 = (u32)-100;
    if (cnd_) { goto L_089181B0; }
    goto L_089181A8;
L_089181A8:;
    ST32(s3+25272, v1);
    func_08A98808(a0);
    goto L_089181B0;
L_089181B0:;
    s1 = D_08B2C18C - (-15988);
    s0 = s1 - 15988;
    v0 = LD_U8(s0+24);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089182F0; }
    goto L_089181C4;
L_089181C4:;
    v0 = LD32(s0+40);
    goto L_089181C8;
L_089181C8:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089182E0; }
    goto L_089181D0;
L_089181D0:;
    a2 = LD32(s2-19344);
    goto L_089181D4;
L_089181D4:;
    v0 = (u32)-2;
    cnd_ = a2 == v0;
    v0 = LD32(s1-15988);
    if (cnd_) { goto L_089182D8; }
    goto L_089181E0;
L_089181E0:;
    cnd_ = a2 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089181F0; }
    goto L_089181E8;
L_089181E8:;
    a1 = 0 + 0;
    func_0890CFBC(a2);
    goto L_089181F0;
L_089181F0:;
    a0 = s1 - 15988;
    v1 = LD32(a0+28);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0891820C; }
    goto L_08918204;
L_08918204:;
    a1 = 1;
    func_0890D108(a0, a1);
    goto L_0891820C;
L_0891820C:;
    a0 = 0 + 0;
    func_08904FB8(a0);
    goto L_08918214;
L_08918214:;
    a0 = 0 + 0;
    func_08904E30(a0);
    goto L_0891821C;
L_0891821C:;
    a0 = 1;
    a1 = (u32)-1;
    func_08904E88(a0, a1);
    goto L_08918228;
L_08918228:;
    s0 = s4 - 28096;
    v0 = 0x8000;
    s1 = s0 + v0;
    v1 = LD32(s1+8196);
    a0 = s0 + 0;
    a1 = v1 << 2;
    a1 = a1 + v1;
    a1 = a1 << 2;
    v0 = sceKernelDcacheWritebackRange(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0891824C;
L_0891824C:;
    a2 = LD_U16(s1+8196);
    a0 = 4;
    a1 = 387;
    a3 = 0 + 0;
    t0 = s0 + 0;
    func_08A9B2EC(a0, a1, a2, a3, t0);
    goto L_08918264;
L_08918264:;
    a1 = D_08B2C1C4 - (-15932);
    v0 = LD32(s1+8196);
    a1 = a1 - 15932;
    a2 = D_08B2C1F0 - (-15888);
    v1 = LD32(a1+32);
    a0 = LD32(a2-15888);
    a3 = LD32(s3+25272);
    v0 = v0 - 2;
    a0 = a0 + v0;
    v1 = v1 + v0;
    ST32(a1+32, v1);
    cnd_ = a3 != 0;
    ST32(a2-15888, a0);
    if (cnd_) { goto L_089182C4; }
    goto L_08918298;
L_08918298:;
    ST32(s1+8204, 0);
    goto L_0891829C;
L_0891829C:;
    ST32(s1+8196, 0);
    ST32(s1+8200, 0);
    goto L_089182A8;
L_089182A8:;
    sp = sp + 32;
    return;
L_089182C4:;
    a0 = 0 + 0;
    ST32(s3+25272, 0);
    func_08A98808(a0);
    goto L_089182D0;
L_089182D0:;
    ST32(s1+8204, 0);
    goto L_0891829C;
L_089182D8:;
    ST32(s1-15988, a2);
    goto L_089181F0;
L_089182E0:;
    a1 = 0 + 0;
    func_0890D298(a0, a1);
    goto L_089182E8;
L_089182E8:;
    a2 = LD32(s2-19344);
    goto L_089181D4;
L_089182F0:;
    a1 = 0 + 0;
    v0 = func_0890D084(a0, a1);
    goto L_089182F8;
L_089182F8:;
    v0 = LD32(s0+40);
    goto L_089181C8;
L_08918300:;
    a1 = LD32(v0+25528);
    a0 = D_08AD95E4 - (-27164);
    a0 = a0 - 27164;
    a2 = 0 + 0;
    v0 = func_0883A334(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08918314;
L_08918314:;
    ST32(s2-19344, v0);
    goto L_08918190;
}

/* 0891831C */
u64 func_0891831C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0891831C:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    v0 = D_08C19240 - (-28096);
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    v0 = v0 - 28096;
    v1 = 0x8000;
    a1 = a1 & a0;
    cnd_ = a1 == 0;
    v1 = v0 + v1;
    if (cnd_) { goto L_08918358; }
    goto L_08918344;
L_08918344:;
    v0 = 2024;
    ST32(v1+8192, v0);
    ST32(v1+8204, 0);
    ST32(v1+8196, 0);
    ST32(v1+8200, 0);
    goto L_08918358;
L_08918358:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08918360 */
rv_t func_08918360(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08918360:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_0891831C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08918374;
L_08918374:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08918380 */
rv_t func_08918380(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08918380:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_0891831C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08918394;
L_08918394:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089183A0 */
void func_089183A0(void)
{
L_089183A0:;
    return;
}

/* 089183A8 */
void func_089183A8(void)
{
L_089183A8:;
    return;
}

/* 089183B0 */
void func_089183B0(void)
{
L_089183B0:;
    return;
}

/* 089183B8 */
void func_089183B8(void)
{
L_089183B8:;
    return;
}

/* 089183C0 */
void func_089183C0(void)
{
L_089183C0:;
    return;
}

/* 089183C8 */
void func_089183C8(void)
{
L_089183C8:;
    return;
}

/* 089183D0 */
void func_089183D0(void)
{
L_089183D0:;
    return;
}

/* 089183D8 */
void func_089183D8(void)
{
L_089183D8:;
    return;
}

/* 089183E0 */
void func_089183E0(void)
{
L_089183E0:;
    return;
}

/* 089183E8 */
void func_089183E8(void)
{
L_089183E8:;
    return;
}

/* 089183F0 */
void func_089183F0(void)
{
L_089183F0:;
    return;
}

/* 089183F8 */
void func_089183F8(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089183F8:;
    sp = sp - 16;
    func_08918508(a3, t0, t1, t2, t3);
    goto L_08918408;
L_08918408:;
    sp = sp + 16;
    return;
}

/* 08918414 */
void func_08918414(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08918414:;
    sp = sp - 16;
    func_089184D4();
    goto L_08918424;
L_08918424:;
    sp = sp + 16;
    return;
}

/* 08918430 */
void func_08918430(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08918430:;
    sp = sp - 16;
    func_089184CC();
    goto L_08918440;
L_08918440:;
    sp = sp + 16;
    return;
}

/* 0891844C */
void func_0891844C(void)
{
    u32 a0 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891844C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0 + 0;
    a2 = 2;
    func_0890BDD8(a0, a1, a2);
    goto L_08918464;
L_08918464:;
    a1 = 254;
    a2 = 255;
    a0 = 1;
    func_0890BE58(a0, a1, a2);
    goto L_08918474;
L_08918474:;
    a0 = 1;
    func_0890BEE0(a0);
    goto L_0891847C;
L_0891847C:;
    a0 = 0 + 0;
    func_08A99208(a0);
    goto L_08918484;
L_08918484:;
    func_08918D18();
    goto L_0891848C;
L_0891848C:;
    a0 = 1;
    a1 = 0 + 0;
    a2 = 255;
    func_0890BE58(a0, a1, a2);
    goto L_0891849C;
L_0891849C:;
    sp = sp + 16;
    return;
}

/* 089184A8 */
void func_089184A8(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089184A8:;
    sp = sp - 16;
    func_08918500();
    goto L_089184B8;
L_089184B8:;
    sp = sp + 16;
    return;
}

/* 089184C4 */
u32 func_089184C4(void)
{
    u32 v0 = 0;
L_089184C4:;
    v0 = 1;
    return v0;
}

/* 089184CC */
void func_089184CC(void)
{
L_089184CC:;
    return;
}

/* 089184D4 */
void func_089184D4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
L_089184D4:;
    v0 = D_08B1B4EC - (-19220);
    a0 = v0 - 19220;
    v1 = 0 + 0;
    a1 = (u32)-1;
    goto L_089184E4;
L_089184E4:;
    v1 = v1 + 1;
    v0 = v1 < 0x6u;
    ST32(a0, a1);
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_089184E4; }
    goto L_089184F8;
L_089184F8:;
    return;
}

/* 08918500 */
void func_08918500(void)
{
L_08918500:;
    return;
}

/* 08918508 */
void func_08918508(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, t9 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0, f28 = 0, f29 = 0, f30 = 0, f31 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr4 = v[4];
    u8 stack_[384] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 384);
L_08918508:;
    sp = sp - 384;
    v0 = D_08B45014 - (20500);
    v1 = D_08B1B4EC - (-19220);
    fp = D_08B45092 - (20626);
    s7 = v0 + 20500;
    s6 = 4;
    s5 = 2;
    s4 = v1 - 19220;
    s3 = 0 + 0;
    s1 = 0 + 0;
    s0 = 0 + 0;
    goto L_0891858C;
L_0891858C:;
    cnd_ = s0 == s5;
    v0 = LD_U8(fp+20626);
    if (cnd_) { goto L_08918D04; }
    goto L_08918594;
L_08918594:;
    cnd_ = s0 == s6;
    v1 = s1 + s7;
    if (cnd_) { goto L_08918CE8; }
    goto L_0891859C;
L_0891859C:;
    v1 = LD32(v1);
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_089185B0; }
    goto L_089185A8;
L_089185A8:;
    v0 = (u32)(s32)LD_S8(v1);
    v0 = v0 < 0x1u;
    goto L_089185B0;
L_089185B0:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = s0 + 1; goto L_089185E8; }
    goto L_089185BC;
L_089185BC:;
    cnd_ = s0 == s5;
    s2 = s4 + 0;
    if (cnd_) { goto L_08918CD0; }
    goto L_089185C4;
L_089185C4:;
    cnd_ = s0 == s6;
    a0 = s3 + s7;
    if (cnd_) { goto L_08918CB4; }
    goto L_089185CC;
L_089185CC:;
    v0 = D_08B263B8 - (25528);
    a0 = LD32(a0);
    a1 = LD32(v0+25528);
    a2 = 0 + 0;
    v0 = ({ v[0]=vr0;v[4]=vr4;__auto_type vr_t_ = func_0883A334(a0, a1, a2, a3, t0, t1, t2, t3); vr0=v[0];vr4=v[4];vr_t_; });
    goto L_089185E0;
L_089185E0:;
    ST32(s2, v0);
    s0 = s0 + 1;
    goto L_089185E8;
L_089185E8:;
    v0 = (s32)s0 < 6;
    s1 = s1 + 12;
    s4 = s4 + 4;
    cnd_ = v0 != 0;
    s3 = s3 + 12;
    if (cnd_) { goto L_0891858C; }
    goto L_089185FC;
L_089185FC:;
    {vr0=0.63661977236f;}
    v1 = D_08B45074 - (20596);
    v0 = LD32(v1+20596);
    {u32 a_=sp+(208);vr4=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    {v[8]=BITSF(v0);}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {float s0=vr4;float t0=vr0;float d0=s0*t0;vr4=d0;}
    {float s0=v[8];float t0=vr0;float d0=s0*t0;vr0=d0;}
    v0 = D_08B45092 - (20626);
    v1 = D_08B45093 - (20627);
    v0 = LD_U8(v0+20626);
    v1 = LD_U8(v1+20627);
    {float s0=vr0;float d0=sinf(s0*1.57079632679f);vr0=d0;}
    ST32(sp+240, v0);
    {float s0=vr4;float d0=cosf(s0*1.57079632679f);vr4=d0;}
    {v0=FBITS(vr0);}
    ST32(sp+244, v1);
    {v1=FBITS(vr4);}
    t7 = 0 + 0;
    ST32(sp+192, v0);
    ST32(sp+224, v1);
    goto L_08918658;
L_08918658:;
    a0 = D_08B1B4D4 - (-19244);
    s6 = t7 << 2;
    a0 = a0 - 19244;
    a3 = 0 + 0;
    t0 = s6 + a0;
    a2 = sp + 0;
    goto L_08918670;
L_08918670:;
    v0 = t0 + a3;
    v1 = LD_U8(v0);
    t1 = D_08B1B474 - (-19340);
    t1 = t1 - 19340;
    v1 = v1 << 2;
    v0 = v1 + t1;
    t1 = D_08B1B4B4 - (-19276);
    t1 = t1 - 19276;
    a0 = v1 + t1;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(a0));
    f3 = BITSF(LD32(sp+224));
    f2 = BITSF(LD32(sp+192));
    f13 = BITSF(LD32(sp+192));
    v0 = D_08B1B494 - (-19308);
    f4 = f0 * f2;
    f2 = f1 * f3;
    f0 = f0 * f3;
    f1 = f1 * f13;
    v0 = v0 - 19308;
    v1 = v1 + v0;
    f2 = f2 - f4;
    f0 = f0 + f1;
    f3 = BITSF(LD32(v1));
    a3 = a3 + 1;
    a1 = (s32)a3 < 4;
    ST32(a2+4, FBITS(f3));
    ST32(a2, FBITS(f0));
    ST32(a2+8, FBITS(f2));
    cnd_ = a1 != 0;
    a2 = a2 + 12;
    if (cnd_) { goto L_08918670; }
    goto L_089186EC;
L_089186EC:;
    f0 = BITSF(LD32(sp+24));
    f1 = BITSF(LD32(sp+28));
    f2 = BITSF(LD32(sp+32));
    ST32(sp+228, FBITS(f0));
    fp = 0 + 0;
    ST32(sp+232, FBITS(f1));
    f13 = BITSF(LD32(sp+228));
    f0 = BITSF(LD32(sp+12));
    f1 = BITSF(LD32(sp+16));
    ST32(sp+236, FBITS(f2));
    f3 = f0 - f13;
    f0 = BITSF(LD32(sp+232));
    ST32(sp+48, FBITS(f3));
    f4 = f1 - f0;
    f0 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+36));
    ST32(sp+52, FBITS(f4));
    f2 = f0 - f2;
    f17 = f1 - f13;
    f0 = BITSF(LD32(sp+40));
    f1 = BITSF(LD32(sp+232));
    f13 = BITSF(LD32(sp+236));
    ST32(sp+56, FBITS(f2));
    f16 = f0 - f1;
    f1 = BITSF(LD32(sp+44));
    ST32(sp+64, FBITS(f17));
    f15 = f1 - f13;
    ST32(sp+68, FBITS(f16));
    cnd_ = (s32)t7 <= 0;
    ST32(sp+72, FBITS(f15));
    if (cnd_) { goto L_08918784; }
    goto L_08918764;
L_08918764:;
    v0 = (s32)t7 < 3;
    cnd_ = v0 != 0;
    v0 = LD32(sp+240);
    if (cnd_) { goto L_08918CAC; }
    goto L_08918770;
L_08918770:;
    v0 = (s32)t7 < 5;
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(sp+48));
    if (cnd_) { goto L_08918788; }
    goto L_0891877C;
L_0891877C:;
    v1 = LD32(sp+244);
    fp = v1 & 0xff;
    goto L_08918784;
L_08918784:;
    f0 = BITSF(LD32(sp+48));
    goto L_08918788;
L_08918788:;
    v0 = D_08B45092 - (20626);
    v1 = D_08B45093 - (20627);
    f1 = BITSF(LD32(sp+52));
    f2 = BITSF(LD32(sp+56));
    v0 = LD_U8(v0+20626);
    v1 = LD_U8(v1+20627);
    ST32(sp+256, FBITS(f0));
    t4 = 0 + 0;
    f0 = BITSF(LD32(sp+72));
    f3 = BITSF(LD32(sp+64));
    f13 = BITSF(LD32(sp+68));
    ST32(sp+260, FBITS(f1));
    ST32(sp+264, FBITS(f2));
    ST32(sp+276, FBITS(f0));
    ST32(sp+248, v0);
    ST32(sp+252, v1);
    ST32(sp+268, FBITS(f3));
    ST32(sp+272, FBITS(f13));
    f12 = BITSF(LD32(sp+112));
    f11 = BITSF(LD32(sp+116));
    f10 = BITSF(LD32(sp+120));
    f9 = BITSF(LD32(sp+96));
    f8 = BITSF(LD32(sp+100));
    f7 = BITSF(LD32(sp+104));
    f6 = BITSF(LD32(sp+128));
    f5 = BITSF(LD32(sp+132));
    f4 = BITSF(LD32(sp+136));
    f0 = BITSF(LD32(sp+80));
    f2 = BITSF(LD32(sp+84));
    f1 = BITSF(LD32(sp+88));
    goto L_08918800;
L_08918800:;
    f13 = BITSF(t4);
    cnd_ = (s32)t4 < 0;
    f3 = (float)(s32)FBITS(f13);
    if (cnd_) { goto L_08918C90; }
    goto L_0891880C;
L_0891880C:;
    v0 = D_08AED2F4 - (-11532);
    v0 = v0 - 11532;
    f13 = BITSF(LD32(v0));
    t8 = t4 + 1;
    f18 = f3 * f13;
    f13 = BITSF(t8);
    cnd_ = (s32)t8 < 0;
    f3 = (float)(s32)FBITS(f13);
    if (cnd_) { goto L_08918C74; }
    goto L_0891882C;
L_0891882C:;
    v0 = 4;
    t6 = 2;
    if (fp == 0) t6 = v0;
    v0 = D_08AED2F4 - (-11532);
    v0 = v0 - 11532;
    f13 = BITSF(LD32(v0));
    t3 = 0 + 0;
    cnd_ = t6 == 0;
    f14 = f3 * f13;
    if (cnd_) { goto L_08918A50; }
    goto L_08918850;
L_08918850:;
    f3 = BITSF(LD32(sp+256));
    f4 = BITSF(LD32(sp+260));
    f2 = BITSF(LD32(sp+264));
    f0 = f3 * f14;
    f28 = f3 * f18;
    f3 = BITSF(LD32(sp+228));
    f25 = f2 * f18;
    f26 = f4 * f18;
    f1 = f4 * f14;
    f2 = f2 * f14;
    f13 = BITSF(LD32(sp+232));
    f24 = f3 + f0;
    f0 = BITSF(LD32(sp+236));
    v0 = D_08AED2F4 - (-11532);
    v0 = v0 - 11532;
    v1 = LD32(sp+248);
    a0 = LD32(sp+252);
    f31 = f3 + f28;
    f23 = f13 + f1;
    f22 = f0 + f2;
    f29 = f13 + f26;
    f27 = f0 + f25;
    f30 = BITSF(LD32(v0));
    f17 = BITSF(LD32(sp+268));
    v0 = D_08C23258 - (12888);
    f16 = BITSF(LD32(sp+272));
    f15 = BITSF(LD32(sp+276));
    t5 = v0 + 12888;
    s3 = t5 + 20;
    s2 = t5 + 40;
    s1 = t5 + 60;
    s5 = v1 & 0xff;
    s7 = a0 & 0xff;
    s0 = t5 - 8;
    t9 = 2;
    s4 = 4;
    goto L_089188E0;
L_089188E0:;
    v0 = s6 + t3;
    v0 = v0 << 2;
    v1 = t3 >> 1;
    a1 = t3 + 1;
    t1 = t3 & 0x1;
    v0 = v0 + t4;
    v0 = v0 << 2;
    t1 = t1 | v1;
    t2 = a1 & 0x1;
    v1 = a1 >> 1;
    t2 = t2 | v1;
    f1 = BITSF(t3);
    v1 = v0 << 2;
    a0 = v1 + v0;
    a0 = a0 << 2;
    a2 = a0 + t5;
    a3 = a0 + s3;
    t0 = a0 + s2;
    v1 = a0 + s0;
    f13 = f31;
    f12 = f29;
    f11 = f27;
    a0 = a0 + s1;
    cnd_ = (s32)t3 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08918C64; }
    goto L_08918944;
L_08918944:;
    f3 = BITSF(a1);
    f8 = f0 * f30;
    t3 = a1 + 0;
    v0 = a1 < t6;
    f0 = (float)(s32)FBITS(f3);
    f21 = f28;
    f20 = f26;
    cnd_ = (s32)a1 < 0;
    f19 = f25;
    if (cnd_) { goto L_08918C54; }
    goto L_08918968;
L_08918968:;
    f6 = f0 * f30;
    f0 = f17 * f6;
    f2 = f16 * f6;
    f1 = f15 * f6;
    f4 = f24 + f0;
    f5 = f23 + f2;
    f3 = f22 + f1;
    ST32(a2, FBITS(f4));
    f4 = f17 * f8;
    ST32(a2+8, FBITS(f3));
    f3 = f15 * f8;
    f9 = f24 + f4;
    ST32(a2+4, FBITS(f5));
    f5 = f16 * f8;
    f10 = f22 + f3;
    ST32(a3, FBITS(f9));
    f9 = f13 + f4;
    f7 = f23 + f5;
    ST32(a3+8, FBITS(f10));
    f10 = f11 + f3;
    f4 = f0;
    ST32(a3+4, FBITS(f7));
    f7 = f12 + f5;
    f3 = f1;
    ST32(t0+8, FBITS(f10));
    f10 = f11 + f1;
    f5 = f2;
    ST32(t0, FBITS(f9));
    f9 = f13 + f0;
    ST32(t0+4, FBITS(f7));
    f7 = f12 + f2;
    ST32(a0+8, FBITS(f10));
    ST32(a0, FBITS(f9));
    cnd_ = t7 == t9;
    ST32(a0+4, FBITS(f7));
    if (cnd_) { goto L_08918C44; }
    goto L_089189F4;
L_089189F4:;
    cnd_ = t7 == s4;
    if (cnd_) { goto L_08918C24; }
    goto L_089189FC;
L_089189FC:;
    ST32(v1, FBITS(f14));
    goto L_08918A00;
L_08918A00:;
    ST32(v1+64, FBITS(f6));
    ST32(v1+44, FBITS(f8));
    ST32(v1+4, FBITS(f6));
    ST32(v1+20, FBITS(f14));
    ST32(v1+24, FBITS(f8));
    ST32(v1+40, FBITS(f18));
    cnd_ = v0 != 0;
    ST32(v1+60, FBITS(f18));
    if (cnd_) { goto L_089188E0; }
    goto L_08918A20;
L_08918A20:;
    f2 = f5;
    f0 = f4;
    f5 = f7;
    f4 = f10;
    f6 = f9;
    f10 = f11;
    f1 = f3;
    f11 = f12;
    f7 = f19;
    f8 = f20;
    f9 = f21;
    f12 = f13;
    goto L_08918A50;
L_08918A50:;
    v0 = t8 < 0x4u;
    cnd_ = v0 != 0;
    t4 = t8 + 0;
    if (cnd_) { goto L_08918800; }
    goto L_08918A5C;
L_08918A5C:;
    t7 = t7 + 1;
    v0 = (s32)t7 < 6;
    ST32(sp+88, FBITS(f1));
    ST32(sp+84, FBITS(f2));
    ST32(sp+80, FBITS(f0));
    ST32(sp+136, FBITS(f4));
    ST32(sp+132, FBITS(f5));
    ST32(sp+128, FBITS(f6));
    ST32(sp+104, FBITS(f7));
    ST32(sp+100, FBITS(f8));
    ST32(sp+96, FBITS(f9));
    ST32(sp+120, FBITS(f10));
    ST32(sp+116, FBITS(f11));
    cnd_ = v0 != 0;
    ST32(sp+112, FBITS(f12));
    if (cnd_) { goto L_08918658; }
    goto L_08918A98;
L_08918A98:;
    v0 = D_08B45078 - (20600);
    f1 = BITSF(LD32(v0+20600));
    f0 = BITSF(0);
    s1 = D_08AED2FC - (-11524);
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    f2 = BITSF(LD32(s1-11524));
    if (cnd_) { goto L_08918ACC; }
    goto L_08918AB8;
L_08918AB8:;
    fcc = FCMP(f2, f1, 12);
    cnd_ = fcc;
    f0 = f2;
    if (cnd_) { goto L_08918ACC; }
    goto L_08918AC8;
L_08918AC8:;
    f0 = f1;
    goto L_08918ACC;
L_08918ACC:;
    s2 = D_08AED300 - (-11520);
    f1 = BITSF(LD32(s2-11520));
    f2 = BITSF(F2I(f0, 1));
    fcc = FCMP(f1, f0, 14);
    s0 = FBITS(f2);
    cnd_ = !fcc;
    v0 = D_08B4507C - (20604);
    if (cnd_) { goto L_08918B00; }
    goto L_08918AE8;
L_08918AE8:;
    f0 = f0 - f1;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    s0 = FBITS(f0);
    s0 = s0 | v0;
    v0 = D_08B4507C - (20604);
    goto L_08918B00;
L_08918B00:;
    f0 = BITSF(LD32(v0+20604));
    f1 = BITSF(LD32(s1-11524));
    a0 = sp + 144;
    a1 = sp + 148;
    a2 = sp + 152;
    ST32(sp+152, FBITS(f1));
    ST32(sp+144, FBITS(f0));
    ST32(sp+148, 0);
    f0 = func_08918F5C(a0, a1, a2);
    goto L_08918B24;
L_08918B24:;
    f3 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(s2-11520));
    fcc = FCMP(f1, f0, 14);
    v1 = FBITS(f3);
    cnd_ = !fcc;
    v0 = D_08B45080 - (20608);
    if (cnd_) { goto L_08918B54; }
    goto L_08918B3C;
L_08918B3C:;
    f0 = f0 - f1;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v1 = v1 | v0;
    v0 = D_08B45080 - (20608);
    goto L_08918B54;
L_08918B54:;
    f0 = BITSF(LD32(v0+20608));
    f1 = BITSF(LD32(s1-11524));
    v0 = v1 << 8;
    a0 = sp + 156;
    a1 = sp + 160;
    a2 = sp + 164;
    ST32(sp+164, FBITS(f1));
    s0 = s0 + v0;
    ST32(sp+156, FBITS(f0));
    ST32(sp+160, 0);
    f0 = func_08918F5C(a0, a1, a2);
    goto L_08918B80;
L_08918B80:;
    f13 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(s2-11520));
    fcc = FCMP(f1, f0, 14);
    v1 = FBITS(f13);
    cnd_ = !fcc;
    v0 = v1 << 16;
    if (cnd_) { goto L_08918BB0; }
    goto L_08918B98;
L_08918B98:;
    f0 = f0 - f1;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v1 = v1 | v0;
    v0 = v1 << 16;
    goto L_08918BB0;
L_08918BB0:;
    v0 = s0 + v0;
    v1 = 0xff000000u;
    v0 = v0 + v1;
    a0 = D_08C25050 - (20560);
    ST32(a0+20560, v0);
    sp = sp + 384;
    { v[0]=vr0;v[4]=vr4;return; }
L_08918C24:;
    cnd_ = s7 == 0;
    if (cnd_) { ST32(v1, FBITS(f14)); goto L_08918A00; }
    goto L_08918C2C;
L_08918C2C:;
    a0 = D_08AED2F8 - (-11528);
    goto L_08918C30;
L_08918C30:;
    a0 = a0 - 11528;
    f0 = BITSF(LD32(a0));
    f8 = f0 - f8;
    f6 = f0 - f6;
    goto L_089189FC;
L_08918C44:;
    cnd_ = s5 != 0;
    if (cnd_) { a0 = D_08AED2F8 - (-11528); goto L_08918C30; }
    goto L_08918C4C;
L_08918C4C:;
    goto L_089189F4;
L_08918C54:;
    f1 = BITSF(t2);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08918968;
L_08918C64:;
    f2 = BITSF(t1);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08918944;
L_08918C74:;
    v0 = t8 & 0x1;
    v1 = t8 >> 1;
    v0 = v0 | v1;
    f13 = BITSF(v0);
    f3 = (float)(s32)FBITS(f13);
    f3 = f3 + f3;
    goto L_0891882C;
L_08918C90:;
    v0 = t4 & 0x1;
    v1 = t4 >> 1;
    v0 = v0 | v1;
    f13 = BITSF(v0);
    f3 = (float)(s32)FBITS(f13);
    f3 = f3 + f3;
    goto L_0891880C;
L_08918CAC:;
    fp = v0 & 0xff;
    goto L_08918784;
L_08918CB4:;
    v1 = D_08B45093 - (20627);
    v0 = LD_U8(v1+20627);
    t1 = D_08B45038 - (20536);
    cnd_ = v0 != 0;
    a0 = t1 + 20536;
    if (cnd_) { goto L_089185CC; }
    goto L_08918CC8;
L_08918CC8:;
    a0 = s3 + s7;
    goto L_089185CC;
L_08918CD0:;
    v0 = LD_U8(fp+20626);
    t1 = D_08B45020 - (20512);
    cnd_ = v0 != 0;
    a0 = t1 + 20512;
    if (cnd_) { goto L_089185CC; }
    goto L_08918CE0;
L_08918CE0:;
    goto L_089185C4;
L_08918CE8:;
    t1 = D_08B45093 - (20627);
    v0 = LD_U8(t1+20627);
    a0 = D_08B45038 - (20536);
    cnd_ = v0 != 0;
    v1 = a0 + 20536;
    if (cnd_) { goto L_0891859C; }
    goto L_08918CFC;
L_08918CFC:;
    v1 = s1 + s7;
    goto L_0891859C;
L_08918D04:;
    a0 = D_08B45020 - (20512);
    cnd_ = v0 != 0;
    v1 = a0 + 20512;
    if (cnd_) { goto L_0891859C; }
    goto L_08918D10;
L_08918D10:;
    goto L_08918594;
    v[0]=vr0;v[4]=vr4;
}

/* 08918D18 */
void func_08918D18(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08918D18:;
    sp = sp - 96;
    a0 = 0 + 0;
    s0 = D_08B2C18C - (-15988);
    func_08904E30(a0);
    goto L_08918D44;
L_08918D44:;
    a0 = 0 + 0;
    func_08904FB8(a0);
    goto L_08918D4C;
L_08918D4C:;
    v0 = D_08C25050 - (20560);
    a1 = LD32(v0+20560);
    a0 = 4;
    func_08904E88(a0, a1);
    goto L_08918D5C;
L_08918D5C:;
    a0 = s0 - 15988;
    v0 = LD32(a0+28);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08918EE4; }
    goto L_08918D6C;
L_08918D6C:;
    a0 = 1;
    func_08A9A13C(a0);
    goto L_08918D74;
L_08918D74:;
    func_08A9A274();
    goto L_08918D7C;
L_08918D7C:;
    a0 = sp + 0;
    func_08A9A230(a0);
    goto L_08918D84;
L_08918D84:;
    a0 = sp + 0;
    ST32(sp+48, 0);
    ST32(sp+52, 0);
    ST32(sp+56, 0);
    func_08A9A1D8(a0);
    goto L_08918D98;
L_08918D98:;
    a0 = 1;
    a1 = 1;
    func_08A98D8C(a0, a1);
    goto L_08918DA4;
L_08918DA4:;
    v0 = D_08B162C4 - (25284);
    f0 = BITSF(LD32(v0+25284));
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v1 = D_08B162C8 - (25288);
    if (cnd_) { goto L_08918DD4; }
    goto L_08918DC0;
L_08918DC0:;
    f0 = BITSF(LD32(v1+25288));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { s0 = s0 - 15988; goto L_08918DEC; }
    goto L_08918DD4;
L_08918DD4:;
    ST32(v0+25284, 0);
    f12 = BITSF(LD32(v0+25284));
    f13 = f12;
    ST32(v1+25288, FBITS(f12));
    func_08A98E9C(f12, f13);
    goto L_08918DE8;
L_08918DE8:;
    s0 = s0 - 15988;
    goto L_08918DEC;
L_08918DEC:;
    v0 = LD_U8(s0+18);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08918ED4; }
    goto L_08918DF8;
L_08918DF8:;
    v0 = LD_U8(s0+24);
    goto L_08918DFC;
L_08918DFC:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08918EC4; }
    goto L_08918E04;
L_08918E04:;
    v0 = LD32(s0+40);
    goto L_08918E08;
L_08918E08:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08918EB4; }
    goto L_08918E10;
L_08918E10:;
    v0 = D_08B1B4EC - (-19220);
    goto L_08918E14;
L_08918E14:;
    v1 = D_08C23250 - (12880);
    s3 = v0 - 19220;
    s5 = v1 + 12880;
    s2 = 0 + 0;
    s4 = 0 + 0;
    goto L_08918E28;
L_08918E28:;
    a0 = LD32(s3);
    cnd_ = (s32)a0 < 0;
    if (cnd_) { s2 = s2 + 1; goto L_08918E6C; }
    goto L_08918E34;
L_08918E34:;
    s1 = 0 + 0;
    func_0890C3C0(a0);
    goto L_08918E3C;
L_08918E3C:;
    s0 = s4 + s5;
    goto L_08918E40;
L_08918E40:;
    t0 = s0 + 0;
    a0 = 5;
    a1 = 387;
    a2 = 4;
    a3 = 0 + 0;
    s1 = s1 + 1;
    func_08A9B2EC(a0, a1, a2, a3, t0);
    goto L_08918E5C;
L_08918E5C:;
    v0 = s1 < 0x10u;
    cnd_ = v0 != 0;
    s0 = s0 + 80;
    if (cnd_) { goto L_08918E40; }
    goto L_08918E68;
L_08918E68:;
    s2 = s2 + 1;
    goto L_08918E6C;
L_08918E6C:;
    v0 = s2 < 0x6u;
    s4 = s4 + 1280;
    cnd_ = v0 != 0;
    s3 = s3 + 4;
    if (cnd_) { goto L_08918E28; }
    goto L_08918E7C;
L_08918E7C:;
    a0 = 0 + 0;
    a1 = 0 + 0;
    func_08A98D8C(a0, a1);
    goto L_08918E88;
L_08918E88:;
    func_08A9A2C4();
    goto L_08918E90;
L_08918E90:;
    sp = sp + 96;
    return;
L_08918EB4:;
    a1 = 0 + 0;
    func_0890D298(a0, a1);
    goto L_08918EBC;
L_08918EBC:;
    v0 = D_08B1B4EC - (-19220);
    goto L_08918E14;
L_08918EC4:;
    a1 = 0 + 0;
    v0 = func_0890D084(a0, a1);
    goto L_08918ECC;
L_08918ECC:;
    v0 = LD32(s0+40);
    goto L_08918E08;
L_08918ED4:;
    a1 = 0 + 0;
    { u64 r_ = func_0890CFE8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08918EDC;
L_08918EDC:;
    v0 = LD_U8(s0+24);
    goto L_08918DFC;
L_08918EE4:;
    a1 = 0 + 0;
    func_0890D108(a0, a1);
    goto L_08918EEC;
L_08918EEC:;
    goto L_08918D6C;
}

/* 08918EF4 */
void func_08918EF4(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08918EF4:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    sp = sp - 16;
    a1 = a1 & a0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08918F44; }
    goto L_08918F20;
L_08918F20:;
    v0 = D_08C23250 - (12880);
    s1 = v0 + 12880;
    s0 = 383;
    s2 = (u32)-1;
    goto L_08918F30;
L_08918F30:;
    a0 = s1 + 0;
    s0 = s0 - 1;
    func_08ABB424();
    goto L_08918F3C;
L_08918F3C:;
    cnd_ = s0 != s2;
    s1 = s1 + 20;
    if (cnd_) { goto L_08918F30; }
    goto L_08918F44;
L_08918F44:;
    sp = sp + 16;
    return;
}

/* 08918F5C */
float func_08918F5C(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08918F5C:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08918F88; }
    goto L_08918F74;
L_08918F74:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_08918F88; }
    goto L_08918F88;
L_08918F88:;
    return f0;
}

/* 08918F90 */
rv_t func_08918F90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08918F90:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    func_08918EF4(a0, a1);
    goto L_08918FA4;
L_08918FA4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08918FB0 */
void func_08918FB0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
L_08918FB0:;
    v0 = D_08B45A9C - (23196);
    f2 = BITSF(LD32(v0+23196));
    v1 = v0 + 23196;
    v0 = D_08AED308 - (-11512);
    f3 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v0-11512));
    v0 = (u32)-1;
    ST32(a0, FBITS(f2));
    ST32(a0+20, FBITS(f0));
    ST32(a0+4, FBITS(f1));
    ST32(a0+8, FBITS(f3));
    ST32(a0+16, v0);
    ST32(a0+12, 0);
    return;
}

/* 08918FEC */
void func_08918FEC(u32 a0)
{
    u32 a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0;
    float f12 = 0, f20 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08918FEC:;
    sp = sp - 64;
    f20 = BITSF(0);
    s0 = a0 + 0;
    a0 = sp + 0;
    func_08918FB0(a0);
    goto L_0891900C;
L_0891900C:;
    f12 = f20;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 7;
    a3 = 0 + 0;
    t0 = 96;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08919030;
L_08919030:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 6;
    a3 = 12;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08919054;
L_08919054:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 16;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08919078;
L_08919078:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 6;
    a3 = 20;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_0891909C;
L_0891909C:;
    sp = sp + 64;
    return;
}

/* 089190B0 */
void func_089190B0(void)
{
    u32 v0 = 0, v1 = 0;
L_089190B0:;
    v0 = D_08C25054 - (20564);
    v1 = D_08C25058 - (20568);
    ST32(v0+20564, 0);
    ST32(v1+20568, 0);
    return;
}

/* 089190C4 */
rv_t func_089190C4(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089190C4:;
    sp = sp - 16;
    s1 = D_08C25054 - (20564);
    v0 = LD32(s1+20564);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08919134; }
    goto L_089190E4;
L_089190E4:;
    s0 = 0 + 0;
    cnd_ = v0 == 0;
    s2 = D_08C25058 - (20568);
    if (cnd_) { goto L_0891911C; }
    goto L_089190F0;
L_089190F0:;
    v1 = LD32(s2+20568);
    goto L_089190F4;
L_089190F4:;
    v0 = s0 << 2;
    s0 = s0 + 1;
    v0 = v0 + v1;
    v0 = LD32(v0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0891915C; }
    goto L_0891910C;
L_0891910C:;
    v0 = LD32(s1+20564);
    goto L_08919110;
L_08919110:;
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    v1 = LD32(s2+20568);
    if (cnd_) { goto L_089190F4; }
    goto L_0891911C;
L_0891911C:;
    a0 = LD32(s2+20568);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0891914C; }
    goto L_08919128;
L_08919128:;
    v0 = D_08C25058 - (20568);
    goto L_0891912C;
L_0891912C:;
    ST32(v0+20568, 0);
    ST32(s1+20564, 0);
    goto L_08919134;
L_08919134:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0891914C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08919154;
L_08919154:;
    v0 = D_08C25058 - (20568);
    goto L_0891912C;
L_0891915C:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891916C;
L_0891916C:;
    v0 = LD32(s1+20564);
    goto L_08919110;
}

/* 08919174 */
void func_08919174(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08919174:;
    sp = sp - 16;
    { rv_t r_ = func_089190C4(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919184;
L_08919184:;
    v0 = D_08C25054 - (20564);
    v1 = D_08C25058 - (20568);
    ST32(v0+20564, 0);
    ST32(v1+20568, 0);
    sp = sp + 16;
    return;
}

/* 089191A0 */
rv_t func_089191A0(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089191A0:;
    v0 = D_08B2BB6E - (-17554);
    v1 = LD_U8(v0-17554);
    cnd_ = v1 == 0;
    v0 = D_08B2858C - (-31348);
    if (cnd_) { goto L_089191BC; }
    goto L_089191B0;
L_089191B0:;
    v0 = D_08B285B4 - (-31308);
    f0 = BITSF(LD32(v0-31308));
    return (rv_t){ v0, v1, f0 };
L_089191BC:;
    f0 = BITSF(LD32(v0-31348));
    return (rv_t){ v0, v1, f0 };
}

/* 089191C4 */
void func_089191C4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089191C4:;
    sp = sp - 16;
    v1 = a0 + 0;
    v0 = D_08C25054 - (20564);
    a0 = a0 << 2;
    ST32(v0+20564, v1);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089191E0;
L_089191E0:;
    v1 = D_08C25058 - (20568);
    ST32(v1+20568, v0);
    sp = sp + 16;
    return;
}

/* 089191F4 */
void func_089191F4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_089191F4:;
    v0 = D_08C25058 - (20568);
    v1 = LD32(v0+20568);
    a0 = a0 << 2;
    a0 = a0 + v1;
    ST32(a0, a1);
    return;
}

/* 0891920C */
u32 func_0891920C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_0891920C:;
    v0 = D_08C25054 - (20564);
    v1 = LD32(v0+20564);
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0891924C; }
    goto L_0891921C;
L_0891921C:;
    v0 = D_08C25058 - (20568);
    a1 = LD32(v0+20568);
    a3 = v1 + 0;
    v0 = LD32(a1);
    goto L_0891922C;
L_0891922C:;
    t0 = a2 + 0;
    a2 = a2 + 1;
    v1 = LD32(v0+8);
    a1 = a1 + 4;
    cnd_ = v1 == a0;
    v0 = a2 < a3;
    if (cnd_) { goto L_08919250; }
    goto L_08919244;
L_08919244:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a1); goto L_0891922C; }
    goto L_0891924C;
L_0891924C:;
    t0 = (u32)-1;
    goto L_08919250;
L_08919250:;
    v0 = t0 + 0;
    return v0;
}

/* 08919258 */
u64 func_08919258(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_08919258:;
    v0 = D_08C25058 - (20568);
    v1 = LD32(v0+20568);
    a0 = a0 << 2;
    a0 = a0 + v1;
    v0 = LD32(a0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08919270 */
void func_08919270(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_08919270:;
    v0 = D_08AF7F58 - (32600);
    v1 = 2;
    v0 = v0 + 32600;
    ST32(a0+4, v1);
    ST32(a0, v0);
    ST32(a0+8, 0);
    ST32(a0+12, 0);
    ST32(a0+16, 0);
    ST32(a0+20, 0);
    ST32(a0+24, 0);
    return;
}

/* 0891929C */
u32 func_0891929C(u32 a0)
{
    u32 v0 = 0;
L_0891929C:;
    v0 = D_08AF7F58 - (32600);
    v0 = v0 + 32600;
    ST32(a0, v0);
    return v0;
}

/* 089192AC */
rv_t func_089192AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089192AC:;
    v0 = D_08AF7F58 - (32600);
    v0 = v0 + 32600;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 089192BC */
rv_t func_089192BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089192BC:;
    v0 = D_08AF7F58 - (32600);
    v0 = v0 + 32600;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089192D8;
L_089192D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089192E4 */
rv_t func_089192E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089192E4:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919308;
L_08919308:;
    a1 = s1 + 4;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0891932C; }
    goto L_08919318;
L_08919318:;
    goto L_0891931C;
L_0891931C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0891932C:;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919334;
L_08919334:;
    a1 = s1 + 8;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919340;
L_08919340:;
    a1 = s1 + 12;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891934C;
L_0891934C:;
    a1 = s1 + 16;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919358;
L_08919358:;
    a1 = s1 + 20;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919364;
L_08919364:;
    goto L_0891931C;
}

/* 0891936C */
void func_0891936C(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891936C:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08919270(a0);
    goto L_08919380;
L_08919380:;
    v0 = D_08AF7F40 - (32576);
    v1 = (u32)-1;
    v0 = v0 + 32576;
    ST32(s0+32, v1);
    ST32(s0, v0);
    ST32(s0+28, 0);
    sp = sp + 16;
    return;
}

/* 089193A8 */
rv_t func_089193A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089193A8:;
    v0 = D_08AF7F40 - (32576);
    v0 = v0 + 32576;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_0891929C(a0);
    goto L_089193C4;
L_089193C4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089193D0 */
rv_t func_089193D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089193D0:;
    v0 = D_08AF7F40 - (32576);
    v0 = v0 + 32576;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0891929C(a0);
    goto L_089193F0;
L_089193F0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089193F8;
L_089193F8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08919408 */
rv_t func_08919408(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08919408:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891942C;
L_0891942C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089192E4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919438;
L_08919438:;
    v0 = LD32(sp);
    a1 = s1 + 28;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0891945C; }
    goto L_08919448;
L_08919448:;
    goto L_0891944C;
L_0891944C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0891945C:;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919464;
L_08919464:;
    a1 = s1 + 32;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919470;
L_08919470:;
    goto L_0891944C;
}

/* 08919478 */
void func_08919478(u32 a0)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08919478:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08919270(a0);
    goto L_0891948C;
L_0891948C:;
    v0 = D_08AF7F28 - (32552);
    v0 = v0 + 32552;
    ST32(s0, v0);
    ST32(s0+28, 0);
    sp = sp + 16;
    return;
}

/* 089194AC */
rv_t func_089194AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089194AC:;
    v0 = D_08AF7F28 - (32552);
    v0 = v0 + 32552;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_0891929C(a0);
    goto L_089194C8;
L_089194C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089194D4 */
rv_t func_089194D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089194D4:;
    v0 = D_08AF7F28 - (32552);
    v0 = v0 + 32552;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0891929C(a0);
    goto L_089194F4;
L_089194F4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089194FC;
L_089194FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0891950C */
rv_t func_0891950C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0891950C:;
    sp = sp - 32;
    s1 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919530;
L_08919530:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_089192E4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891953C;
L_0891953C:;
    v0 = LD32(sp);
    s0 = s0 + 28;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08919564; }
    goto L_08919550;
L_08919550:;
    goto L_08919554;
L_08919554:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08919564:;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891956C;
L_0891956C:;
    goto L_08919554;
}

/* 08919574 */
void func_08919574(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08919574:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08919270(a0);
    goto L_08919588;
L_08919588:;
    v0 = D_08AF7F10 - (32528);
    v0 = v0 + 32528;
    ST32(s0, v0);
    v1 = D_08B45AA8 - (23208);
    v0 = v1 + 23208;
    f0 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f8 = BITSF(LD32(v1+23208));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    v1 = s0 + 28;
    ST32(v1+32, FBITS(f0));
    v0 = D_08B45A9C - (23196);
    a0 = v0 + 23196;
    ST32(v1+4, FBITS(f1));
    a1 = s0 + 64;
    ST32(v1+8, FBITS(f2));
    ST32(v1+12, FBITS(f3));
    ST32(v1+16, FBITS(f4));
    ST32(v1+20, FBITS(f5));
    ST32(v1+24, FBITS(f6));
    ST32(v1+28, FBITS(f7));
    ST32(s0+28, FBITS(f8));
    f0 = BITSF(LD32(v0+23196));
    f1 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(a0+4));
    ST32(s0+64, FBITS(f0));
    ST32(a1+8, FBITS(f1));
    ST32(a1+4, FBITS(f2));
    sp = sp + 16;
    return;
}

/* 0891961C */
rv_t func_0891961C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891961C:;
    v0 = D_08AF7F10 - (32528);
    v0 = v0 + 32528;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_0891929C(a0);
    goto L_08919638;
L_08919638:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08919644 */
rv_t func_08919644(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08919644:;
    v0 = D_08AF7F10 - (32528);
    v0 = v0 + 32528;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0891929C(a0);
    goto L_08919664;
L_08919664:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0891966C;
L_0891966C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0891967C */
rv_t func_0891967C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0891967C:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089196A0;
L_089196A0:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089192E4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089196AC;
L_089196AC:;
    v0 = LD32(sp);
    a1 = s1 + 28;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089196D0; }
    goto L_089196BC;
L_089196BC:;
    goto L_089196C0;
L_089196C0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089196D0:;
    { rv_t r_ = func_0882E0F4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089196D8;
L_089196D8:;
    a1 = s1 + 64;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089196E4;
L_089196E4:;
    goto L_089196C0;
}

/* 089196EC */
void func_089196EC(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089196EC:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08919270(a0);
    goto L_08919700;
L_08919700:;
    v1 = D_08AF7EF8 - (32504);
    v0 = LD32(s0+4);
    v1 = v1 + 32504;
    ST32(s0, v1);
    v0 = v0 | 0x2;
    ST32(s0+4, v0);
    v0 = D_08AED310 - (-11504);
    f0 = BITSF(LD32(v0-11504));
    ST32(s0+28, FBITS(f0));
    sp = sp + 16;
    return;
}

/* 08919734 */
rv_t func_08919734(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08919734:;
    v0 = D_08AF7EF8 - (32504);
    v0 = v0 + 32504;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_0891929C(a0);
    goto L_08919750;
L_08919750:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0891975C */
rv_t func_0891975C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891975C:;
    v0 = D_08AF7EF8 - (32504);
    v0 = v0 + 32504;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0891929C(a0);
    goto L_0891977C;
L_0891977C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08919784;
L_08919784:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08919794 */
rv_t func_08919794(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08919794:;
    sp = sp - 32;
    s1 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089197B8;
L_089197B8:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_089192E4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089197C4;
L_089197C4:;
    v0 = LD32(sp);
    s0 = s0 + 28;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089197EC; }
    goto L_089197D8;
L_089197D8:;
    goto L_089197DC;
L_089197DC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089197EC:;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089197F4;
L_089197F4:;
    goto L_089197DC;
}

/* 089197FC */
void func_089197FC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089197FC:;
    sp = sp - 16;
    v0 = D_08AD9600 - (-27136);
    s2 = v0 - 27136;
    v0 = D_08AF7EE0 - (32480);
    v1 = (u32)-1;
    s0 = a0 + 0;
    v0 = v0 + 32480;
    a0 = s2 + 0;
    s1 = s0 + 12;
    ST32(s0+4, a1);
    ST32(s0+8, v1);
    cnd_ = s2 == 0;
    ST32(s0, v0);
    if (cnd_) { goto L_089198A0; }
    goto L_08919840;
L_08919840:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08919848;
L_08919848:;
    v1 = v0 + 1;
    ST32(s1+4, v0);
    a0 = v1 + 0;
    ST32(s1+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891985C;
L_0891985C:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    cnd_ = v0 != 0;
    ST32(s0+12, v0);
    if (cnd_) { goto L_08919890; }
    goto L_0891986C;
L_0891986C:;
    ST32(s1+4, 0);
    goto L_08919870;
L_08919870:;
    ST32(s1+8, 0);
    ST32(s0+24, 0);
    goto L_08919878;
L_08919878:;
    sp = sp + 16;
    return;
L_08919890:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08919898;
L_08919898:;
    ST32(s0+24, 0);
    goto L_08919878;
L_089198A0:;
    ST32(s1+4, 0);
    ST32(s0+12, 0);
    goto L_08919870;
}

/* 089198AC */
rv_t func_089198AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089198AC:;
    v0 = D_08AF7EE0 - (32480);
    v0 = v0 + 32480;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = a0 + 12;
    { rv_t r_ = func_08919B60(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089198D4;
L_089198D4:;
    v0 = LD32(s0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089198FC; }
    goto L_089198E0;
L_089198E0:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089198FC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08919904;
L_08919904:;
    ST32(s0+12, 0);
    goto L_089198E0;
}

/* 0891990C */
rv_t func_0891990C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891990C:;
    v0 = D_08AF7EE0 - (32480);
    v0 = v0 + 32480;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = a0 + 12;
    { rv_t r_ = func_08919B60(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919934;
L_08919934:;
    v0 = LD32(s0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0891995C; }
    goto L_08919940;
L_08919940:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0891995C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08919964;
L_08919964:;
    ST32(s0+12, 0);
    goto L_08919940;
}

/* 0891996C */
rv_t func_0891996C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891996C:;
    v0 = D_08AF7EE0 - (32480);
    v0 = v0 + 32480;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = a0 + 12;
    { rv_t r_ = func_08919B60(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919994;
L_08919994:;
    v0 = LD32(s0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089199C4; }
    goto L_089199A0;
L_089199A0:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089199B0;
L_089199B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089199C4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089199CC;
L_089199CC:;
    ST32(s0+12, 0);
    goto L_089199A0;
}

/* 089199D4 */
rv_t func_089199D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089199D4:;
    sp = sp - 64;
    s2 = a1 + 0;
    a1 = sp + 0;
    s3 = a0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919A10;
L_08919A10:;
    v1 = LD32(sp);
    cnd_ = v1 == 0;
    a1 = s3 + 8;
    if (cnd_) { goto L_08919A48; }
    goto L_08919A1C;
L_08919A1C:;
    goto L_08919A20;
L_08919A20:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08919A48:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919A50;
L_08919A50:;
    a1 = s3 + 12;
    a0 = s2 + 0;
    f0 = func_0882DE98(a0, a1);
    goto L_08919A5C;
L_08919A5C:;
    a0 = s2 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919A68;
L_08919A68:;
    v1 = LD32(sp+4);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08919A20; }
    goto L_08919A74;
L_08919A74:;
    v1 = v1 - 1;
    v0 = (u32)-1;
    ST32(sp+4, v1);
    cnd_ = v1 == v0;
    s1 = s3 + 24;
    if (cnd_) { goto L_08919A20; }
    goto L_08919A88;
L_08919A88:;
    s5 = 1;
    s6 = 2;
    s7 = 3;
    s4 = (u32)-1;
    goto L_08919A98;
L_08919A98:;
    v0 = LD32(s3+4);
    cnd_ = v0 == s5;
    a0 = 32;
    if (cnd_) { goto L_08919B44; }
    goto L_08919AA4;
L_08919AA4:;
    cnd_ = v0 == 0;
    a0 = 36;
    if (cnd_) { goto L_08919B28; }
    goto L_08919AAC;
L_08919AAC:;
    cnd_ = v0 == s6;
    a0 = 76;
    if (cnd_) { goto L_08919B0C; }
    goto L_08919AB4;
L_08919AB4:;
    cnd_ = v0 == s7;
    a0 = 32;
    if (cnd_) { goto L_08919AF0; }
    goto L_08919ABC;
L_08919ABC:;
    a0 = LD32(s1);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919AD0;
L_08919AD0:;
    v0 = LD32(sp+4);
    v1 = LD32(s1);
    v0 = v0 - 1;
    s1 = v1 + 24;
    cnd_ = v0 != s4;
    ST32(sp+4, v0);
    if (cnd_) { goto L_08919A98; }
    goto L_08919AE8;
L_08919AE8:;
    goto L_08919A20;
L_08919AF0:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919AF8;
L_08919AF8:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_089196EC(a0);
    goto L_08919B04;
L_08919B04:;
    ST32(s1, s0);
    goto L_08919ABC;
L_08919B0C:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919B14;
L_08919B14:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_08919574(a0);
    goto L_08919B20;
L_08919B20:;
    ST32(s1, s0);
    goto L_08919ABC;
L_08919B28:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919B30;
L_08919B30:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_0891936C(a0);
    goto L_08919B3C;
L_08919B3C:;
    ST32(s1, s0);
    goto L_08919ABC;
L_08919B44:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919B4C;
L_08919B4C:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_08919478(a0);
    goto L_08919B58;
L_08919B58:;
    ST32(s1, s0);
    goto L_08919ABC;
}

/* 08919B60 */
rv_t func_08919B60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08919B60:;
    sp = sp - 16;
    v1 = LD32(a0+24);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08919B94; }
    goto L_08919B78;
L_08919B78:;
    v0 = LD32(v1+24);
    a0 = v1 + 0;
    cnd_ = v1 != 0;
    ST32(s0+24, v0);
    if (cnd_) { goto L_08919BA4; }
    goto L_08919B88;
L_08919B88:;
    v0 = LD32(s0+24);
    goto L_08919B8C;
L_08919B8C:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08919B78; }
    goto L_08919B94;
L_08919B94:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08919BA4:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919BB4;
L_08919BB4:;
    v0 = LD32(s0+24);
    goto L_08919B8C;
}

/* 08919BBC */
rv_t func_08919BBC(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08919BBC:;
    sp = sp - 48;
    s2 = a0 + 0;
    s0 = LD32(a0+24);
    cnd_ = s0 == 0;
    f20 = f12;
    if (cnd_) { goto L_08919C8C; }
    goto L_08919BF4;
L_08919BF4:;
    v0 = D_08AED314 - (-11500);
    f23 = BITSF(LD32(v0-11500));
    f22 = BITSF(0);
    s3 = 1;
    s1 = D_08B204FC - (1276);
    v1 = LD32(s0+4);
    goto L_08919C0C;
L_08919C0C:;
    v0 = v1 & 0x2;
    cnd_ = v0 == 0;
    v0 = v1 & 0x1;
    if (cnd_) { goto L_08919C30; }
    goto L_08919C18;
L_08919C18:;
    f20 = f20 - f23;
    fcc = FCMP(f20, f22, 14);
    cnd_ = fcc;
    v0 = s0 + 0;
    if (cnd_) { goto L_08919C90; }
    goto L_08919C2C;
L_08919C2C:;
    v0 = v1 & 0x1;
    goto L_08919C30;
L_08919C30:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s0+8); goto L_08919D28; }
    goto L_08919C38;
L_08919C38:;
    v0 = LD32(s2+4);
    f21 = BITSF(0);
    cnd_ = v0 == 0;
    if (cnd_) { f21 = BITSF(LD32(s0+28)); goto L_08919C50; }
    goto L_08919C48;
L_08919C48:;
    cnd_ = v0 == s3;
    if (cnd_) { f21 = BITSF(LD32(s0+28)); goto L_08919C50; }
    goto L_08919C50;
L_08919C50:;
    fcc = FCMP(f21, f22, 2);
    cnd_ = fcc;
    v0 = s0 + 0;
    if (cnd_) { goto L_08919C90; }
    goto L_08919C60;
L_08919C60:;
    v0 = v1 & 0x8;
    cnd_ = v0 == 0;
    v1 = LD32(s1+1276);
    if (cnd_) { goto L_08919CBC; }
    goto L_08919C6C;
L_08919C6C:;
    f20 = f20 - f21;
    goto L_08919C70;
L_08919C70:;
    fcc = FCMP(f20, f22, 14);
    cnd_ = fcc;
    v0 = s0 + 0;
    if (cnd_) { goto L_08919C90; }
    goto L_08919C80;
L_08919C80:;
    s0 = LD32(s0+24);
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s0+4); goto L_08919C0C; }
    goto L_08919C8C;
L_08919C8C:;
    v0 = 0 + 0;
    goto L_08919C90;
L_08919C90:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08919CBC:;
    a1 = LD32(s0+8);
    cnd_ = v1 == 0;
    t0 = s1 + 1276;
    if (cnd_) { goto L_08919CF4; }
    goto L_08919CC8;
L_08919CC8:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08919CD0;
L_08919CD0:;
    a0 = v0 + 120;
    a2 = v0 + 116;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_08919D00; }
    goto L_08919CE8;
L_08919CE8:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08919CD0; }
    goto L_08919CF4;
L_08919CF4:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08919D18; }
    goto L_08919D00;
L_08919D00:;
    cnd_ = a3 == 0;
    if (cnd_) { goto L_08919C70; }
    goto L_08919D08;
L_08919D08:;
    f0 = BITSF(LD32(a3+20));
    f0 = f21 * f0;
    goto L_08919D10;
L_08919D10:;
    f20 = f20 - f0;
    goto L_08919C70;
L_08919D18:;
    a2 = 1;
    { u64 r_ = func_08AA178C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08919D20;
L_08919D20:;
    a3 = v0 + 0;
    goto L_08919D00;
L_08919D28:;
    a0 = s1 + 1276;
    a2 = 1;
    { u64 r_ = func_08AA178C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08919D34;
L_08919D34:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08919C70; }
    goto L_08919D3C;
L_08919D3C:;
    f0 = BITSF(LD32(v0+20));
    goto L_08919D10;
}

/* 08919D44 */
rv_t func_08919D44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr48 = v[48], vr49 = v[49], vr50 = v[50], vr52 = v[52], vr53 = v[53], vr54 = v[54], vr56 = v[56], vr57 = v[57], vr58 = v[58];
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08919D44:;
    {float m00=1.f;float m01=0.f;float m02=0.f;float m03=0.f;float m10=0.f;float m11=1.f;float m12=0.f;float m13=0.f;float m20=0.f;float m21=0.f;float m22=1.f;float m23=0.f;float m30=0.f;float m31=0.f;float m32=0.f;float m33=1.f;vr48=m00;vr49=m01;vr50=m02;v[51]=m03;vr52=m10;vr53=m11;vr54=m12;v[55]=m13;vr56=m20;vr57=m21;vr58=m22;v[59]=m23;v[60]=m30;v[61]=m31;v[62]=m32;v[63]=m33;}
    {v0=FBITS(vr50);}
    f0 = BITSF(v0);
    f2 = BITSF(0);
    {v0=FBITS(vr54);}
    f10 = BITSF(v0);
    {v0=FBITS(vr58);}
    f8 = BITSF(v0);
    {v0=FBITS(vr48);}
    f7 = BITSF(v0);
    {v0=FBITS(vr49);}
    f5 = BITSF(v0);
    {v0=FBITS(vr52);}
    f6 = BITSF(v0);
    {v0=FBITS(vr53);}
    f3 = BITSF(v0);
    {v0=FBITS(vr56);}
    f4 = BITSF(v0);
    sp = sp - 112;
    f9 = f0;
    ST32(a1, FBITS(f2));
    {v0=FBITS(vr57);}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(v[51]));}
    ST32(a1+8, FBITS(f2));
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(v[59]));}
    ST32(a1+4, FBITS(f2));
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    ST32(a2+32, FBITS(f8));
    ST32(a2, FBITS(f7));
    ST32(a2+4, FBITS(f5));
    ST32(a2+8, FBITS(f9));
    ST32(a2+12, FBITS(f6));
    ST32(a2+16, FBITS(f3));
    ST32(a2+20, FBITS(f10));
    ST32(a2+24, FBITS(f4));
    ST32(a2+28, v0);
    sp = sp + 112;
    { v[48]=vr48;v[49]=vr49;v[50]=vr50;v[52]=vr52;v[53]=vr53;v[54]=vr54;v[56]=vr56;v[57]=vr57;v[58]=vr58;return (rv_t){ v0, v1, f0 }; }
    v[48]=vr48;v[49]=vr49;v[50]=vr50;v[52]=vr52;v[53]=vr53;v[54]=vr54;v[56]=vr56;v[57]=vr57;v[58]=vr58;
}

/* 08919DE0 */
void func_08919DE0(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08919DE0:;
    sp = sp - 16;
    a1 = 0 + 0;
    s0 = a0 + 0;
    func_089197FC(a0, a1);
    goto L_08919DF8;
L_08919DF8:;
    v0 = D_08AF7EC8 - (32456);
    v0 = v0 + 32456;
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 08919E14 */
rv_t func_08919E14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08919E14:;
    v0 = D_08AF7EC8 - (32456);
    v0 = v0 + 32456;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_089198AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919E30;
L_08919E30:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08919E3C */
rv_t func_08919E3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08919E3C:;
    v0 = D_08AF7EC8 - (32456);
    v0 = v0 + 32456;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089198AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919E5C;
L_08919E5C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08919E64;
L_08919E64:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08919E74 */
rv_t func_08919E74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08919E74:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919E98;
L_08919E98:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089199D4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919EA4;
L_08919EA4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08919EB8 */
void func_08919EB8(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08919EB8:;
    sp = sp - 16;
    a1 = 1;
    s0 = a0 + 0;
    func_089197FC(a0, a1);
    goto L_08919ED0;
L_08919ED0:;
    v0 = D_08AF7EB0 - (32432);
    v0 = v0 + 32432;
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 08919EEC */
rv_t func_08919EEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08919EEC:;
    v0 = D_08AF7EB0 - (32432);
    v0 = v0 + 32432;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_089198AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919F08;
L_08919F08:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08919F14 */
rv_t func_08919F14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08919F14:;
    v0 = D_08AF7EB0 - (32432);
    v0 = v0 + 32432;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089198AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919F34;
L_08919F34:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08919F3C;
L_08919F3C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08919F4C */
rv_t func_08919F4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08919F4C:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919F70;
L_08919F70:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089199D4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919F7C;
L_08919F7C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08919F90 */
void func_08919F90(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08919F90:;
    sp = sp - 16;
    a1 = 2;
    s0 = a0 + 0;
    func_089197FC(a0, a1);
    goto L_08919FA8;
L_08919FA8:;
    v0 = D_08AF7E98 - (32408);
    v0 = v0 + 32408;
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 08919FC4 */
rv_t func_08919FC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08919FC4:;
    v0 = D_08AF7E98 - (32408);
    v0 = v0 + 32408;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_089198AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08919FE0;
L_08919FE0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08919FEC */
rv_t func_08919FEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08919FEC:;
    v0 = D_08AF7E98 - (32408);
    v0 = v0 + 32408;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089198AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891A00C;
L_0891A00C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0891A014;
L_0891A014:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0891A024 */
rv_t func_0891A024(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0891A024:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891A048;
L_0891A048:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089199D4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891A054;
L_0891A054:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0891A068 */
rv_t func_0891A068(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[416] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 416);
L_0891A068:;
    {float m00=1.f;float m01=0.f;float m02=0.f;float m03=0.f;float m10=0.f;float m11=1.f;float m12=0.f;float m13=0.f;float m20=0.f;float m21=0.f;float m22=1.f;float m23=0.f;float m30=0.f;float m31=0.f;float m32=0.f;float m33=1.f;v[48]=m00;v[49]=m01;v[50]=m02;v[51]=m03;v[52]=m10;v[53]=m11;v[54]=m12;v[55]=m13;v[56]=m20;v[57]=m21;v[58]=m22;v[59]=m23;v[60]=m30;v[61]=m31;v[62]=m32;v[63]=m33;}
    {v0=FBITS(v[50]);}
    f0 = BITSF(v0);
    {v0=FBITS(v[54]);}
    f8 = BITSF(v0);
    {v0=FBITS(v[58]);}
    f9 = BITSF(v0);
    {v0=FBITS(v[48]);}
    f6 = BITSF(v0);
    {v0=FBITS(v[49]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[52]);}
    f5 = BITSF(v0);
    {v0=FBITS(v[53]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[56]);}
    f3 = BITSF(v0);
    sp = sp - 416;
    f7 = f0;
    s0 = a2 + 0;
    ST32(a1+8, 0);
    {v0=FBITS(v[57]);}
    ST32(a1+4, 0);
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    s3 = a1 + 0;
    ST32(a1, 0);
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    f20 = f12;
    ST32(a2, FBITS(f6));
    ST32(a2+4, FBITS(f4));
    ST32(a2+8, FBITS(f7));
    ST32(a2+12, FBITS(f5));
    ST32(a2+16, FBITS(f2));
    ST32(a2+20, FBITS(f8));
    ST32(a2+24, FBITS(f3));
    ST32(s0+28, v0);
    ST32(a2+32, FBITS(f9));
    s1 = LD32(a0+24);
    ST32(sp, FBITS(f6));
    ST32(sp+4, FBITS(f4));
    ST32(sp+8, FBITS(f7));
    ST32(sp+12, FBITS(f5));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f8));
    ST32(sp+24, FBITS(f3));
    ST32(sp+28, v0);
    cnd_ = s1 == 0;
    ST32(sp+32, FBITS(f9));
    if (cnd_) { goto L_0891A440; }
    goto L_0891A154;
L_0891A154:;
    v0 = D_08AED320 - (-11488);
    v1 = D_08AED324 - (-11484);
    f23 = BITSF(LD32(v0-11488));
    f22 = BITSF(LD32(v1-11484));
    v0 = LD32(s1+4);
    goto L_0891A168;
L_0891A168:;
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { f20 = f20 - f23; goto L_0891A174; }
    goto L_0891A174;
L_0891A174:;
    f21 = BITSF(0);
    fcc = FCMP(f20, f21, 14);
    cnd_ = fcc;
    a0 = D_08B204FC - (1276);
    if (cnd_) { goto L_0891A440; }
    goto L_0891A188;
L_0891A188:;
    a1 = LD32(s1+8);
    a0 = a0 + 1276;
    a2 = 1;
    { u64 r_ = func_08AA178C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0891A198;
L_0891A198:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_0891A434; }
    goto L_0891A1A0;
L_0891A1A0:;
    f0 = BITSF(LD32(v0+20));
    a1 = sp + 228;
    a2 = sp + 232;
    f0 = f22 / f0;
    a0 = sp + 224;
    ST32(sp+228, FBITS(f21));
    ST32(sp+232, FBITS(f22));
    f0 = f20 * f0;
    ST32(sp+224, FBITS(f0));
    f0 = func_0891A598(a0, a1, a2);
    goto L_0891A1C8;
L_0891A1C8:;
    f12 = f0;
    a0 = s2 + 0;
    a1 = 0 + 0;
    a2 = sp + 48;
    a3 = sp + 64;
    t0 = 0 + 0;
    { rv_t r_ = func_08818A04(a0, a1, a2, a3, t0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891A1E4;
L_0891A1E4:;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s2+20)); goto L_0891A420; }
    goto L_0891A1EC;
L_0891A1EC:;
    v1 = LD32(s0);
    v0 = LD32(s0+4);
    {u32 a_=sp+(320);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(s0+8);
    {v[49]=BITSF(v0);}
    {v[50]=BITSF(v1);}
    v1 = LD32(s0+12);
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v0 = LD32(s0+16);
    {u32 a_=sp+(304);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(s0+20);
    {v[49]=BITSF(v0);}
    {v[50]=BITSF(v1);}
    v1 = LD32(s0+24);
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v0 = LD32(s0+28);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(352);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    v1 = LD32(s0+32);
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {v[33]=BITSF(v0);}
    {v[34]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(256);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    f4 = BITSF(LD32(s3));
    f5 = BITSF(LD32(s3+4));
    f6 = BITSF(LD32(s3+8));
    {u32 a_=sp+(240);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
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
    {ST32(sp+(0),FBITS(v[96]));}
    {ST32(sp+(4),FBITS(v[97]));}
    {ST32(sp+(8),FBITS(v[98]));}
    {ST32(sp+(12),FBITS(v[100]));}
    {ST32(sp+(16),FBITS(v[101]));}
    {ST32(sp+(20),FBITS(v[102]));}
    {ST32(sp+(24),FBITS(v[104]));}
    {ST32(sp+(28),FBITS(v[105]));}
    {ST32(sp+(32),FBITS(v[106]));}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v0 = LD32(sp+48);
    v1 = LD32(sp+52);
    {v[20]=BITSF(v0);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    v0 = LD32(sp+56);
    {v[21]=BITSF(v1);}
    {v[22]=BITSF(v0);}
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
    ST32(sp+96, FBITS(f2));
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    ST32(s3, FBITS(f4));
    ST32(s3+4, FBITS(f5));
    ST32(s3+8, FBITS(f6));
    ST32(sp+100, v0);
    ST32(sp+104, FBITS(f3));
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, v0);
    ST32(sp+88, FBITS(f3));
    {v[112]=BITSF(LD32(sp+(0)));}
    {v[113]=BITSF(LD32(sp+(4)));}
    {v[114]=BITSF(LD32(sp+(8)));}
    {v[116]=BITSF(LD32(sp+(12)));}
    {v[117]=BITSF(LD32(sp+(16)));}
    {v[118]=BITSF(LD32(sp+(20)));}
    {v[120]=BITSF(LD32(sp+(24)));}
    {v[121]=BITSF(LD32(sp+(28)));}
    {v[122]=BITSF(LD32(sp+(32)));}
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
    f0 = BITSF(LD32(s2+20));
    goto L_0891A420;
L_0891A420:;
    f20 = f20 - f0;
    fcc = FCMP(f20, f21, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0891A444; }
    goto L_0891A434;
L_0891A434:;
    s1 = LD32(s1+24);
    cnd_ = s1 != 0;
    if (cnd_) { v0 = LD32(s1+4); goto L_0891A168; }
    goto L_0891A440;
L_0891A440:;
    goto L_0891A444;
L_0891A444:;
    sp = sp + 416;
    return (rv_t){ v0, v1, f0 };
}

/* 0891A46C */
void func_0891A46C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891A46C:;
    sp = sp - 16;
    a1 = 3;
    s0 = a0 + 0;
    func_089197FC(a0, a1);
    goto L_0891A484;
L_0891A484:;
    v1 = D_08AED330 - (-11472);
    f0 = BITSF(LD32(v1-11472));
    v0 = D_08AF7E80 - (32384);
    v0 = v0 + 32384;
    ST32(s0, v0);
    v0 = D_08AED334 - (-11468);
    ST32(s0+28, FBITS(f0));
    f0 = BITSF(LD32(v0-11468));
    ST32(s0+36, 0);
    ST32(s0+32, FBITS(f0));
    sp = sp + 16;
    return;
}

/* 0891A4BC */
rv_t func_0891A4BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891A4BC:;
    v0 = D_08AF7E80 - (32384);
    v0 = v0 + 32384;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_089198AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891A4D8;
L_0891A4D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0891A4E4 */
rv_t func_0891A4E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891A4E4:;
    v0 = D_08AF7E80 - (32384);
    v0 = v0 + 32384;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089198AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891A504;
L_0891A504:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0891A50C;
L_0891A50C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0891A51C */
rv_t func_0891A51C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0891A51C:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891A540;
L_0891A540:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089199D4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891A54C;
L_0891A54C:;
    v0 = LD32(sp);
    a1 = s1 + 28;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0891A570; }
    goto L_0891A55C;
L_0891A55C:;
    goto L_0891A560;
L_0891A560:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0891A570:;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891A578;
L_0891A578:;
    a1 = s1 + 32;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891A584;
L_0891A584:;
    a1 = s1 + 36;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891A590;
L_0891A590:;
    goto L_0891A560;
}

/* 0891A598 */
float func_0891A598(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0891A598:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0891A5C4; }
    goto L_0891A5B0;
L_0891A5B0:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_0891A5C4; }
    goto L_0891A5C4;
L_0891A5C4:;
    return f0;
}

/* 0891A5CC */
void func_0891A5CC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891A5CC:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 5;
    s1 = a0 + 0;
    { u64 r_ = func_08921E00(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0891A5EC;
L_0891A5EC:;
    v0 = D_08AF7F70 - (32624);
    a2 = LD32(s0+4);
    v0 = v0 + 32624;
    a0 = D_08B28EF4 - (-28940);
    ST32(s1, v0);
    v0 = 999;
    v1 = a0 - 28940;
    t2 = 0 + 0;
    cnd_ = a2 == v0;
    ST32(s1+24, s0);
    if (cnd_) { goto L_0891A664; }
    goto L_0891A614;
L_0891A614:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-28940);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { ST32(s1+36, 0); goto L_0891A668; }
    goto L_0891A638;
L_0891A638:;
    a0 = LD32(a1);
    goto L_0891A63C;
L_0891A63C:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0891A784; }
    goto L_0891A654;
L_0891A654:;
    a1 = LD32(a1+4);
    goto L_0891A658;
L_0891A658:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0891A63C; }
    goto L_0891A660;
L_0891A660:;
    t2 = 0 + 0;
    goto L_0891A664;
L_0891A664:;
    ST32(s1+36, 0);
    goto L_0891A668;
L_0891A668:;
    a2 = D_08B45A9C - (23196);
    a1 = a2 + 23196;
    ST32(s1+48, 0);
    a0 = 999;
    a3 = s1 + 128;
    ST32(s1+52, 0);
    t0 = s1 + 200;
    t1 = D_08B45AA8 - (23208);
    ST32(s1+56, 0);
    v0 = t1 + 23208;
    v1 = s1 + 216;
    ST32(s1+60, 0);
    ST32(s1+64, 0);
    ST32(s1+68, 0);
    ST32(s1+72, 0);
    ST32(s1+76, 0);
    f2 = BITSF(LD32(a2+23196));
    f1 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a1+8));
    ST32(s1+28, t2);
    ST32(a3+8, FBITS(f0));
    ST32(a3+4, FBITS(f1));
    ST32(s1+128, FBITS(f2));
    ST32(s1+156, a0);
    ST32(s1+140, a0);
    ST32(s1+144, a0);
    ST32(s1+148, a0);
    ST32(s1+152, a0);
    ST32(s1+32, 0);
    ST32(s1+40, 0);
    ST32(s1+44, 0);
    ST32(s1+160, 0);
    ST32(s1+164, 0);
    ST32(s1+168, 0);
    ST32(s1+172, 0);
    ST32(s1+176, 0);
    ST32(s1+180, 0);
    ST32(s1+184, 0);
    ST32(s1+188, 0);
    ST32(s1+192, 0);
    ST32(s1+196, 0);
    f0 = BITSF(LD32(a2+23196));
    f1 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1+4));
    ST32(s1+200, FBITS(f0));
    ST32(t0+8, FBITS(f1));
    ST32(t0+4, FBITS(f2));
    ST32(s1+212, 0);
    f0 = BITSF(LD32(t1+23208));
    f1 = BITSF(LD32(v0+32));
    f2 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+12));
    f5 = BITSF(LD32(v0+16));
    f6 = BITSF(LD32(v0+20));
    f7 = BITSF(LD32(v0+24));
    f8 = BITSF(LD32(v0+28));
    ST32(s1+216, FBITS(f0));
    ST32(v1+32, FBITS(f1));
    ST32(v1+4, FBITS(f2));
    ST32(v1+8, FBITS(f3));
    ST32(v1+12, FBITS(f4));
    ST32(v1+16, FBITS(f5));
    ST32(v1+20, FBITS(f6));
    ST32(v1+24, FBITS(f7));
    ST32(v1+28, FBITS(f8));
    sp = sp + 16;
    return;
L_0891A784:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    t2 = a0 + 0;
    if (cnd_) { goto L_0891A654; }
    goto L_0891A790;
L_0891A790:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0891A658; }
    goto L_0891A79C;
L_0891A79C:;
    ST32(s1+36, 0);
    goto L_0891A668;
}

/* 0891A7A4 */
u32 func_0891A7A4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0891A7A4:;
    sp = sp - 32;
    v0 = D_08AF7F70 - (32624);
    v0 = v0 + 32624;
    s0 = a0 + 0;
    a2 = LD32(a0+16);
    cnd_ = a2 != 0;
    ST32(a0, v0);
    if (cnd_) { goto L_0891A7E0; }
    goto L_0891A7C8;
L_0891A7C8:;
    a0 = s0 + 0;
    v0 = func_08921E48(a0);
    goto L_0891A7D0;
L_0891A7D0:;
    sp = sp + 32;
    return v0;
L_0891A7E0:;
    a1 = a2 + 0;
    a0 = s0 + 0;
    ST32(sp, a2);
    v0 = func_089224D8(a0, a1);
    goto L_0891A7F0;
L_0891A7F0:;
    a0 = LD32(sp);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891A7F8;
L_0891A7F8:;
    a0 = LD32(s0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891A80C;
L_0891A80C:;
    v1 = LD32(s0+16);
    cnd_ = v1 != 0;
    a2 = v1 + 0;
    if (cnd_) { goto L_0891A7E0; }
    goto L_0891A818;
L_0891A818:;
    goto L_0891A7C8;
}

/* 0891A820 */
rv_t func_0891A820(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0891A820:;
    sp = sp - 32;
    v0 = D_08AF7F70 - (32624);
    v0 = v0 + 32624;
    s0 = a0 + 0;
    a2 = LD32(a0+16);
    cnd_ = a2 != 0;
    ST32(a0, v0);
    if (cnd_) { goto L_0891A85C; }
    goto L_0891A844;
L_0891A844:;
    a0 = s0 + 0;
    v0 = func_08921E48(a0);
    goto L_0891A84C;
L_0891A84C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0891A85C:;
    a1 = a2 + 0;
    a0 = s0 + 0;
    ST32(sp, a2);
    v0 = func_089224D8(a0, a1);
    goto L_0891A86C;
L_0891A86C:;
    a0 = LD32(sp);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891A874;
L_0891A874:;
    a0 = LD32(s0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891A888;
L_0891A888:;
    v1 = LD32(s0+16);
    cnd_ = v1 != 0;
    a2 = v1 + 0;
    if (cnd_) { goto L_0891A85C; }
    goto L_0891A894;
L_0891A894:;
    goto L_0891A844;
}

/* 0891A89C */
rv_t func_0891A89C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0891A89C:;
    sp = sp - 32;
    v0 = D_08AF7F70 - (32624);
    v0 = v0 + 32624;
    s0 = a0 + 0;
    a2 = LD32(a0+16);
    cnd_ = a2 != 0;
    ST32(a0, v0);
    if (cnd_) { goto L_0891A8E0; }
    goto L_0891A8C0;
L_0891A8C0:;
    a0 = s0 + 0;
    v0 = func_08921E48(a0);
    goto L_0891A8C8;
L_0891A8C8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0891A8D0;
L_0891A8D0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0891A8E0:;
    a1 = a2 + 0;
    a0 = s0 + 0;
    ST32(sp, a2);
    v0 = func_089224D8(a0, a1);
    goto L_0891A8F0;
L_0891A8F0:;
    a0 = LD32(sp);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891A8F8;
L_0891A8F8:;
    a0 = LD32(s0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891A90C;
L_0891A90C:;
    v1 = LD32(s0+16);
    cnd_ = v1 != 0;
    a2 = v1 + 0;
    if (cnd_) { goto L_0891A8E0; }
    goto L_0891A918;
L_0891A918:;
    goto L_0891A8C0;
}

/* 0891A920 */
rv_t func_0891A920(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_0891A920:;
    sp = sp - 112;
    s3 = a1 + 0;
    a1 = sp + 0;
    s2 = a0 + 0;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891A94C;
L_0891A94C:;
    v1 = LD32(sp);
    v0 = (s32)v1 < 2;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0891AEA4; }
    goto L_0891A95C;
L_0891A95C:;
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = v1 < 0x2u;
    if (cnd_) { goto L_0891AC30; }
    goto L_0891A968;
L_0891A968:;
    cnd_ = v0 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_0891AA14; }
    goto L_0891A970;
L_0891A970:;
    v0 = LD32(s2+40);
    goto L_0891A974;
L_0891A974:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s2+176); goto L_0891A994; }
    goto L_0891A97C;
L_0891A97C:;
    v0 = LD32(s2+160);
    v0 = v0 - 1;
    v0 = v0 < 0x3u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0891AA04; }
    goto L_0891A990;
L_0891A990:;
    v1 = LD32(s2+176);
    goto L_0891A994;
L_0891A994:;
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s2); goto L_0891A9D0; }
    goto L_0891A9A0;
L_0891A9A0:;
    v0 = v1 << 2;
    v1 = D_08AD9608 - (-27128);
    v1 = v1 - 27128;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0891A9BCu: goto L_0891A9BC; case 0x0891A9CCu: goto L_0891A9CC; case 0x0891A9F8u: goto L_0891A9F8; default: rs_break(0, 0x0891a9b4); }
L_0891A9BC:;
    a0 = s2 + 0;
    a1 = 1;
    goto L_0891A9C4;
L_0891A9C4:;
    func_0892004C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891A9CC;
L_0891A9CC:;
    v1 = LD32(s2);
    goto L_0891A9D0;
L_0891A9D0:;
    v0 = LD32(v1+48);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891A9DC;
L_0891A9DC:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_0891A9F8:;
    a0 = s2 + 0;
    a1 = 3;
    goto L_0891A9C4;
L_0891AA04:;
    a0 = s2 + 0;
    func_0891EFC4(a0);
    goto L_0891AA0C;
L_0891AA0C:;
    v1 = LD32(s2+176);
    goto L_0891A994;
L_0891AA14:;
    a1 = sp + 36;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AA1C;
L_0891AA1C:;
    v0 = LD32(sp+36);
    a0 = s3 + 0;
    a1 = sp + 40;
    ST32(s2+32, v0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AA30;
L_0891AA30:;
    v1 = LD32(s2+32);
    cnd_ = v1 != 0;
    a1 = LD32(sp+40);
    if (cnd_) { goto L_0891ABDC; }
    goto L_0891AA3C;
L_0891AA3C:;
    a1 = s2 + 48;
    goto L_0891AA40;
L_0891AA40:;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AA48;
L_0891AA48:;
    a1 = s2 + 52;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AA54;
L_0891AA54:;
    a1 = s2 + 56;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AA60;
L_0891AA60:;
    a1 = s2 + 60;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AA6C;
L_0891AA6C:;
    a1 = s2 + 72;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AA78;
L_0891AA78:;
    a1 = s2 + 76;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AA84;
L_0891AA84:;
    a1 = s2 + 68;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AA90;
L_0891AA90:;
    s0 = s2 + 80;
    s1 = 3;
    goto L_0891AA98;
L_0891AA98:;
    a1 = s0 + 0;
    a0 = s3 + 0;
    s1 = s1 - 1;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AAA8;
L_0891AAA8:;
    cnd_ = (s32)s1 >= 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_0891AA98; }
    goto L_0891AAB0;
L_0891AAB0:;
    a1 = s2 + 128;
    a0 = s3 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AABC;
L_0891AABC:;
    a1 = s2 + 140;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AAC8;
L_0891AAC8:;
    a1 = s2 + 144;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AAD4;
L_0891AAD4:;
    a1 = s2 + 148;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AAE0;
L_0891AAE0:;
    a1 = s2 + 152;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AAEC;
L_0891AAEC:;
    a1 = s2 + 156;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AAF8;
L_0891AAF8:;
    a0 = s3 + 0;
    a1 = sp + 44;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AB04;
L_0891AB04:;
    v0 = LD32(sp+44);
    a0 = s3 + 0;
    a1 = sp + 48;
    ST32(s2+160, v0);
    s0 = (u32)-1;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AB1C;
L_0891AB1C:;
    a0 = LD32(sp+48);
    cnd_ = a0 == s0;
    if (cnd_) { a0 = s3 + 0; goto L_0891AB48; }
    goto L_0891AB28;
L_0891AB28:;
    v0 = func_0891920C(a0);
    goto L_0891AB30;
L_0891AB30:;
    cnd_ = v0 == s0;
    a0 = s3 + 0;
    if (cnd_) { goto L_0891AB48; }
    goto L_0891AB38;
L_0891AB38:;
    a0 = v0 + 0;
    { u64 r_ = func_08919258(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0891AB40;
L_0891AB40:;
    ST32(s2+164, v0);
    a0 = s3 + 0;
    goto L_0891AB48;
L_0891AB48:;
    a1 = sp + 52;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AB50;
L_0891AB50:;
    { rv_t r_ = func_089191A0(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AB58;
L_0891AB58:;
    f1 = BITSF(LD32(sp+52));
    a1 = s2 + 172;
    a0 = s3 + 0;
    f1 = f1 + f0;
    ST32(s2+168, FBITS(f1));
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AB70;
L_0891AB70:;
    a0 = s3 + 0;
    a1 = sp + 56;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AB7C;
L_0891AB7C:;
    v0 = LD32(sp+56);
    a0 = s3 + 0;
    a1 = sp + 60;
    ST32(s2+176, v0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AB90;
L_0891AB90:;
    v0 = LD32(sp+60);
    a0 = s3 + 0;
    a1 = sp + 64;
    ST32(s2+180, v0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891ABA4;
L_0891ABA4:;
    v0 = LD32(sp+64);
    a1 = s2 + 200;
    a0 = s3 + 0;
    ST32(s2+196, v0);
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891ABB8;
L_0891ABB8:;
    v1 = LD32(sp);
    v0 = 1;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(s2+40); goto L_0891A974; }
    goto L_0891ABC8;
L_0891ABC8:;
    a1 = s3 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_08921E58(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891ABD4;
L_0891ABD4:;
    v0 = LD32(s2+40);
    goto L_0891A974;
L_0891ABDC:;
    a0 = D_08B28E18 - (-29160);
    a0 = a0 - 29160;
    a2 = 1;
    v0 = func_08AAAADC(a0, a1, a2);
    goto L_0891ABEC;
L_0891ABEC:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    ST32(s2+40, v0);
    if (cnd_) { goto L_0891AC14; }
    goto L_0891ABF8;
L_0891ABF8:;
    v1 = LD_U16(v0+8);
    v0 = 60;
    cnd_ = v1 == v0;
    v0 = a0 + 84;
    if (cnd_) { goto L_0891AC0C; }
    goto L_0891AC08;
L_0891AC08:;
    v0 = a0 + 60;
    goto L_0891AC0C;
L_0891AC0C:;
    ST32(s2+44, v0);
    goto L_0891AA3C;
L_0891AC14:;
    v0 = LD32(s2+8);
    a0 = s2 + 0;
    v0 = v0 | 0x10;
    ST32(s2+8, v0);
    func_0891CA18(a0);
    goto L_0891AC28;
L_0891AC28:;
    a1 = s2 + 48;
    goto L_0891AA40;
L_0891AC30:;
    a0 = s3 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AC3C;
L_0891AC3C:;
    v0 = LD32(sp+4);
    a0 = s3 + 0;
    a1 = sp + 8;
    ST32(s2+32, v0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AC50;
L_0891AC50:;
    v1 = LD32(s2+32);
    cnd_ = v1 == 0;
    a1 = s2 + 48;
    if (cnd_) { goto L_0891ACDC; }
    goto L_0891AC5C;
L_0891AC5C:;
    a1 = LD32(sp+8);
    a2 = D_08B28E18 - (-29160);
    v0 = 999;
    v1 = a2 - 29160;
    cnd_ = a1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0891ACB8; }
    goto L_0891AC74;
L_0891AC74:;
    v0 = LD32(v1+4);
    v1 = LD32(a2-29160);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0891ACB8; }
    goto L_0891AC98;
L_0891AC98:;
    a0 = LD32(v1);
    goto L_0891AC9C;
L_0891AC9C:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(a0+16); goto L_0891AE84; }
    goto L_0891ACA8;
L_0891ACA8:;
    v1 = LD32(v1+4);
    goto L_0891ACAC;
L_0891ACAC:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_0891AC9C; }
    goto L_0891ACB4;
L_0891ACB4:;
    a0 = 0 + 0;
    goto L_0891ACB8;
L_0891ACB8:;
    cnd_ = a0 == 0;
    ST32(s2+40, a0);
    if (cnd_) { goto L_0891AE68; }
    goto L_0891ACC0;
L_0891ACC0:;
    v1 = LD_U16(a0+8);
    v0 = 60;
    cnd_ = v1 == v0;
    v0 = a0 + 84;
    if (cnd_) { goto L_0891ACD4; }
    goto L_0891ACD0;
L_0891ACD0:;
    v0 = a0 + 60;
    goto L_0891ACD4;
L_0891ACD4:;
    ST32(s2+44, v0);
    a1 = s2 + 48;
    goto L_0891ACDC;
L_0891ACDC:;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891ACE4;
L_0891ACE4:;
    a1 = s2 + 52;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891ACF0;
L_0891ACF0:;
    a1 = s2 + 56;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891ACFC;
L_0891ACFC:;
    a1 = s2 + 60;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AD08;
L_0891AD08:;
    a1 = s2 + 64;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AD14;
L_0891AD14:;
    a1 = s2 + 72;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AD20;
L_0891AD20:;
    a1 = s2 + 76;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AD2C;
L_0891AD2C:;
    a1 = s2 + 68;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AD38;
L_0891AD38:;
    s0 = s2 + 80;
    s1 = 3;
    goto L_0891AD40;
L_0891AD40:;
    a1 = s0 + 0;
    a0 = s3 + 0;
    s1 = s1 - 1;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AD50;
L_0891AD50:;
    cnd_ = (s32)s1 >= 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_0891AD40; }
    goto L_0891AD58;
L_0891AD58:;
    a1 = s2 + 128;
    a0 = s3 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AD64;
L_0891AD64:;
    a1 = s2 + 140;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AD70;
L_0891AD70:;
    a1 = s2 + 144;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AD7C;
L_0891AD7C:;
    a1 = s2 + 148;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AD88;
L_0891AD88:;
    a1 = s2 + 152;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AD94;
L_0891AD94:;
    a1 = s2 + 156;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891ADA0;
L_0891ADA0:;
    a0 = s3 + 0;
    a1 = sp + 12;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891ADAC;
L_0891ADAC:;
    v0 = LD32(sp+12);
    a0 = s3 + 0;
    a1 = sp + 16;
    ST32(s2+160, v0);
    s0 = (u32)-1;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891ADC4;
L_0891ADC4:;
    a0 = LD32(sp+16);
    cnd_ = a0 == s0;
    if (cnd_) { a0 = s3 + 0; goto L_0891ADF0; }
    goto L_0891ADD0;
L_0891ADD0:;
    v0 = func_0891920C(a0);
    goto L_0891ADD8;
L_0891ADD8:;
    cnd_ = v0 == s0;
    a0 = s3 + 0;
    if (cnd_) { goto L_0891ADF0; }
    goto L_0891ADE0;
L_0891ADE0:;
    a0 = v0 + 0;
    { u64 r_ = func_08919258(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0891ADE8;
L_0891ADE8:;
    ST32(s2+164, v0);
    a0 = s3 + 0;
    goto L_0891ADF0;
L_0891ADF0:;
    a1 = sp + 20;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891ADF8;
L_0891ADF8:;
    { rv_t r_ = func_089191A0(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AE00;
L_0891AE00:;
    f1 = BITSF(LD32(sp+20));
    a1 = s2 + 172;
    a0 = s3 + 0;
    f1 = f1 + f0;
    ST32(s2+168, FBITS(f1));
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AE18;
L_0891AE18:;
    a0 = s3 + 0;
    a1 = sp + 24;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AE24;
L_0891AE24:;
    v0 = LD32(sp+24);
    a0 = s3 + 0;
    a1 = sp + 28;
    ST32(s2+176, v0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AE38;
L_0891AE38:;
    v0 = LD32(sp+28);
    a0 = s3 + 0;
    a1 = sp + 32;
    ST32(s2+180, v0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AE4C;
L_0891AE4C:;
    v0 = LD32(sp+32);
    a1 = s2 + 200;
    a0 = s3 + 0;
    ST32(s2+196, v0);
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AE60;
L_0891AE60:;
    v0 = LD32(s2+40);
    goto L_0891A974;
L_0891AE68:;
    v0 = LD32(s2+8);
    a0 = s2 + 0;
    v0 = v0 | 0x10;
    ST32(s2+8, v0);
    func_0891CA18(a0);
    goto L_0891AE7C;
L_0891AE7C:;
    a1 = s2 + 48;
    goto L_0891ACDC;
L_0891AE84:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_0891ACAC; }
    goto L_0891AE90;
L_0891AE90:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_0891ACAC; }
    goto L_0891AE9C;
L_0891AE9C:;
    goto L_0891ACB8;
L_0891AEA4:;
    a1 = s3 + 0;
    { rv_t r_ = func_08921E58(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AEAC;
L_0891AEAC:;
    v1 = LD32(sp);
    goto L_0891A95C;
}

/* 0891AEB4 */
rv_t func_0891AEB4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0891AEB4:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = 2;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AEE0;
L_0891AEE0:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08921EB8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AEEC;
L_0891AEEC:;
    a1 = LD32(s1+32);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AEF8;
L_0891AEF8:;
    v0 = LD32(s1+40);
    cnd_ = v0 == 0;
    a1 = 999;
    if (cnd_) { goto L_0891AF08; }
    goto L_0891AF04;
L_0891AF04:;
    a1 = LD32(v0+4);
    goto L_0891AF08;
L_0891AF08:;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AF10;
L_0891AF10:;
    a1 = LD32(s1+48);
    a0 = s0 + 0;
    s2 = s1 + 80;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AF20;
L_0891AF20:;
    f12 = BITSF(LD32(s1+52));
    a0 = s0 + 0;
    s3 = 3;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AF30;
L_0891AF30:;
    f12 = BITSF(LD32(s1+56));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AF3C;
L_0891AF3C:;
    f12 = BITSF(LD32(s1+60));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AF48;
L_0891AF48:;
    f12 = BITSF(LD32(s1+64));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AF54;
L_0891AF54:;
    f12 = BITSF(LD32(s1+72));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AF60;
L_0891AF60:;
    f12 = BITSF(LD32(s1+76));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AF6C;
L_0891AF6C:;
    f12 = BITSF(LD32(s1+68));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AF78;
L_0891AF78:;
    a1 = s2 + 0;
    a0 = s0 + 0;
    s3 = s3 - 1;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AF88;
L_0891AF88:;
    cnd_ = (s32)s3 >= 0;
    s2 = s2 + 12;
    if (cnd_) { goto L_0891AF78; }
    goto L_0891AF90;
L_0891AF90:;
    a1 = s1 + 128;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AF9C;
L_0891AF9C:;
    a1 = LD32(s1+140);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AFA8;
L_0891AFA8:;
    a1 = LD32(s1+144);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AFB4;
L_0891AFB4:;
    a1 = LD32(s1+148);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AFC0;
L_0891AFC0:;
    a1 = LD32(s1+152);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AFCC;
L_0891AFCC:;
    a1 = LD32(s1+156);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AFD8;
L_0891AFD8:;
    a1 = LD32(s1+160);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AFE4;
L_0891AFE4:;
    v0 = LD32(s1+164);
    cnd_ = v0 == 0;
    a1 = (u32)-1;
    if (cnd_) { goto L_0891AFF4; }
    goto L_0891AFF0;
L_0891AFF0:;
    a1 = LD32(v0+8);
    goto L_0891AFF4;
L_0891AFF4:;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891AFFC;
L_0891AFFC:;
    { rv_t r_ = func_089191A0(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B004;
L_0891B004:;
    f12 = BITSF(LD32(s1+168));
    a0 = s0 + 0;
    f12 = f12 - f0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B014;
L_0891B014:;
    a1 = LD32(s1+172);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B020;
L_0891B020:;
    a1 = LD32(s1+176);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B02C;
L_0891B02C:;
    a1 = LD32(s1+180);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B038;
L_0891B038:;
    a1 = LD32(s1+196);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B044;
L_0891B044:;
    a1 = s1 + 200;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B050;
L_0891B050:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0891B06C */
rv_t func_0891B06C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0891B06C:;
    sp = sp - 32;
    v1 = LD_U16(a1+16);
    v1 = v1 - 57;
    v0 = v1 < 0x19u;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0891B348; }
    goto L_0891B094;
L_0891B094:;
    v0 = v1 << 2;
    v1 = D_08AD961C - (-27108);
    v1 = v1 - 27108;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0891B0B0u: goto L_0891B0B0; case 0x0891B17Cu: goto L_0891B17C; case 0x0891B198u: goto L_0891B198; case 0x0891B1C4u: goto L_0891B1C4; case 0x0891B1D0u: goto L_0891B1D0; case 0x0891B204u: goto L_0891B204; case 0x0891B244u: goto L_0891B244; case 0x0891B2D0u: goto L_0891B2D0; case 0x0891B314u: goto L_0891B314; case 0x0891B348u: goto L_0891B348; case 0x0891B350u: goto L_0891B350; default: rs_break(0, 0x0891b0a8); }
L_0891B0B0:;
    v0 = LD32(a1+24);
    a1 = D_08B28DD8 - (-29224);
    a0 = LD32(v0+4);
    v0 = 999;
    cnd_ = a0 == v0;
    v1 = a1 - 29224;
    if (cnd_) { goto L_0891B13C; }
    goto L_0891B0C8;
L_0891B0C8:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-29224);
    v0 = v0 - 1;
    v0 = a0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0891B10C; }
    goto L_0891B0EC;
L_0891B0EC:;
    a1 = LD32(v1);
    goto L_0891B0F0;
L_0891B0F0:;
    v0 = LD32(a1+4);
    cnd_ = v0 == a0;
    if (cnd_) { v0 = LD32(a1+16); goto L_0891B15C; }
    goto L_0891B0FC;
L_0891B0FC:;
    v1 = LD32(v1+4);
    goto L_0891B100;
L_0891B100:;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(v1); goto L_0891B0F0; }
    goto L_0891B108;
L_0891B108:;
    s1 = 0 + 0;
    goto L_0891B10C;
L_0891B10C:;
    cnd_ = s1 == 0;
    v1 = 1;
    if (cnd_) { goto L_0891B140; }
    goto L_0891B114;
L_0891B114:;
    a0 = s0 + 0;
    f0 = func_0891CA60(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0891B11C;
L_0891B11C:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    func_0891C654(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891B128;
L_0891B128:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+152);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B13C;
L_0891B13C:;
    v1 = 1;
    goto L_0891B140;
L_0891B140:;
    goto L_0891B144;
L_0891B144:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0891B15C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_0891B100; }
    goto L_0891B168;
L_0891B168:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_0891B0FC; }
    goto L_0891B174;
L_0891B174:;
    goto L_0891B10C;
L_0891B17C:;
    a0 = s0 + 0;
    f0 = func_0891CA60(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0891B184;
L_0891B184:;
    v0 = LD32(s0+48);
    v1 = 1;
    v0 = v0 | 0x400;
    goto L_0891B190;
L_0891B190:;
    ST32(s0+48, v0);
    goto L_0891B140;
L_0891B198:;
    s1 = LD32(a1+24);
    a0 = LD32(s0+40);
    a2 = sp + 0;
    a1 = LD32(s1+4);
    a3 = 0 + 0;
    { rv_t r_ = func_089217C8(a0, a1, a2, a3, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B1B0;
L_0891B1B0:;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_0891B140; }
    goto L_0891B1B8;
L_0891B1B8:;
    v0 = LD32(s1+4);
    ST32(s0+156, v0);
    goto L_0891B140;
L_0891B1C4:;
    v0 = LD32(s0+48);
    v0 = (v0 & ~(0x1u << 11)) | ((0 & 0x1) << 11);
    ST32(s0+48, v0);
    goto L_0891B1D0;
L_0891B1D0:;
    v0 = LD32(s0+40);
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_0891B140; }
    goto L_0891B1DC;
L_0891B1DC:;
    v1 = LD_U16(v0+8);
    v0 = 55;
    cnd_ = v1 == v0;
    v0 = 58;
    if (cnd_) { goto L_0891B1F4; }
    goto L_0891B1EC;
L_0891B1EC:;
    cnd_ = v1 != v0;
    v1 = 1;
    if (cnd_) { goto L_0891B140; }
    goto L_0891B1F4;
L_0891B1F4:;
    v0 = LD32(s0+48);
    goto L_0891B1F8;
L_0891B1F8:;
    v0 = v0 | 0x8;
    goto L_0891B1FC;
L_0891B1FC:;
    ST32(s0+48, v0);
    goto L_0891B13C;
L_0891B204:;
    v1 = LD32(s0+40);
    cnd_ = v1 == 0;
    if (cnd_) { v1 = 1; goto L_0891B140; }
    goto L_0891B210;
L_0891B210:;
    a0 = LD_U16(v1+8);
    v0 = 55;
    cnd_ = a0 == v0;
    v0 = 58;
    if (cnd_) { goto L_0891B228; }
    goto L_0891B220;
L_0891B220:;
    cnd_ = a0 != v0;
    if (cnd_) { v1 = 1; goto L_0891B140; }
    goto L_0891B228;
L_0891B228:;
    v0 = LD32(a1+24);
    a0 = LD32(v1+4);
    v1 = LD32(v0+4);
    cnd_ = v1 != a0;
    v1 = 1;
    if (cnd_) { goto L_0891B140; }
    goto L_0891B23C;
L_0891B23C:;
    v0 = LD32(s0+48);
    goto L_0891B1F8;
L_0891B244:;
    s2 = LD32(a1+24);
    a0 = D_08B28DD8 - (-29224);
    a0 = a0 - 29224;
    a1 = LD32(s2+4);
    a2 = 1;
    v0 = func_08AABDC8(a0, a1, a2);
    goto L_0891B25C;
L_0891B25C:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0891B13C; }
    goto L_0891B268;
L_0891B268:;
    v1 = LD_U16(v0+8);
    v0 = 58;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(s0+32); goto L_0891B2AC; }
    goto L_0891B278;
L_0891B278:;
    cnd_ = s1 == 0;
    v1 = 1;
    if (cnd_) { goto L_0891B140; }
    goto L_0891B280;
L_0891B280:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0891B144; }
    goto L_0891B288;
L_0891B288:;
    a0 = s0 + 0;
    f0 = func_0891CA60(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891B290;
L_0891B290:;
    f12 = BITSF(LD32(s2+24));
    goto L_0891B294;
L_0891B294:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = 0 + 0;
    f0 = func_0891C504(a0, a1, a2, f12);
    goto L_0891B2A4;
L_0891B2A4:;
    v1 = 1;
    goto L_0891B140;
L_0891B2AC:;
    v0 = 1;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_0891B278; }
    goto L_0891B2B8;
L_0891B2B8:;
    v0 = LD32(s0+24);
    v1 = LD32(s1+168);
    a0 = LD32(v0+4);
    v1 = v1 ^ a0;
    a0 = v1 < 0x1u;
    goto L_0891B278;
L_0891B2D0:;
    v1 = LD32(s0+32);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0891B300; }
    goto L_0891B2E0;
L_0891B2E0:;
    v0 = 2;
    cnd_ = v1 != v0;
    v1 = 1;
    if (cnd_) { goto L_0891B140; }
    goto L_0891B2EC;
L_0891B2EC:;
    v0 = LD32(s0+40);
    v1 = 58;
    a0 = LD_U16(v0+8);
    cnd_ = a0 != v1;
    v1 = 1;
    if (cnd_) { goto L_0891B140; }
    goto L_0891B300;
L_0891B300:;
    a0 = s0 + 0;
    f0 = func_0891CA60(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0891B308;
L_0891B308:;
    v0 = LD32(s0+48);
    v0 = v0 | 0x400;
    goto L_0891B1FC;
L_0891B314:;
    v0 = LD32(a1+24);
    a0 = D_08B28DD8 - (-29224);
    a0 = a0 - 29224;
    a1 = LD32(v0+4);
    a2 = 1;
    v0 = func_08AABDC8(a0, a1, a2);
    goto L_0891B32C;
L_0891B32C:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0891B13C; }
    goto L_0891B334;
L_0891B334:;
    a0 = s0 + 0;
    f0 = func_0891CA60(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891B33C;
L_0891B33C:;
    v0 = D_08AED33C - (-11460);
    f12 = BITSF(LD32(v0-11460));
    goto L_0891B294;
L_0891B348:;
    v1 = 0 + 0;
    goto L_0891B140;
L_0891B350:;
    v0 = LD32(s0+48);
    v1 = 1;
    v0 = v0 | 0x800;
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    goto L_0891B190;
}

/* 0891B364 */
rv_t func_0891B364(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891B364:;
    sp = sp - 16;
    v0 = 1;
    v1 = LD32(a0+32);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0891B394; }
    goto L_0891B37C;
L_0891B37C:;
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B38C;
L_0891B38C:;
    v0 = 1;
    goto L_0891B394;
L_0891B394:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0891B39C */
rv_t func_0891B39C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891B39C:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_0891CA18(a0);
    goto L_0891B3B0;
L_0891B3B0:;
    v0 = 1;
    v1 = LD32(s0+32);
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0891B3D0; }
    goto L_0891B3C0;
L_0891B3C0:;
    v0 = LD32(s0);
    v1 = LD32(v0+52);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B3D0;
L_0891B3D0:;
    v1 = LD32(s0);
    v0 = LD32(v1+140);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B3E0;
L_0891B3E0:;
    ST32(s0+48, 0);
    a2 = D_08B45A9C - (23196);
    a0 = a2 + 23196;
    ST32(s0+52, 0);
    t3 = s0 + 80;
    t1 = s0 + 92;
    ST32(s0+56, 0);
    t0 = s0 + 104;
    a3 = s0 + 116;
    ST32(s0+60, 0);
    a1 = 999;
    t2 = s0 + 128;
    ST32(s0+64, 0);
    t4 = s0 + 200;
    t5 = D_08B45AA8 - (23208);
    ST32(s0+68, 0);
    v0 = t5 + 23208;
    v1 = s0 + 216;
    ST32(s0+72, 0);
    ST32(s0+76, 0);
    f2 = BITSF(LD32(a2+23196));
    f1 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(a0+8));
    ST32(s0+80, FBITS(f2));
    ST32(a3+8, FBITS(f0));
    ST32(a3+4, FBITS(f1));
    ST32(t0+8, FBITS(f0));
    ST32(t0+4, FBITS(f1));
    ST32(t1+8, FBITS(f0));
    ST32(t1+4, FBITS(f1));
    ST32(t3+8, FBITS(f0));
    ST32(t3+4, FBITS(f1));
    ST32(s0+116, FBITS(f2));
    ST32(s0+104, FBITS(f2));
    ST32(s0+92, FBITS(f2));
    f1 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(a2+23196));
    f0 = BITSF(LD32(a0+8));
    ST32(t2+4, FBITS(f1));
    ST32(t2+8, FBITS(f0));
    ST32(s0+128, FBITS(f2));
    ST32(s0+140, a1);
    ST32(s0+32, 0);
    ST32(s0+40, 0);
    ST32(s0+44, 0);
    ST32(s0+144, a1);
    ST32(s0+168, 0);
    ST32(s0+184, 0);
    ST32(s0+188, 0);
    ST32(s0+192, 0);
    f2 = BITSF(LD32(a2+23196));
    f0 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(a0+4));
    ST32(s0+156, a1);
    ST32(t4+8, FBITS(f0));
    ST32(t4+4, FBITS(f1));
    ST32(s0+148, a1);
    ST32(s0+152, a1);
    ST32(s0+200, FBITS(f2));
    ST32(s0+160, 0);
    ST32(s0+164, 0);
    ST32(s0+172, 0);
    ST32(s0+176, 0);
    ST32(s0+180, 0);
    ST32(s0+196, 0);
    ST32(s0+212, 0);
    f0 = BITSF(LD32(t5+23208));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    ST32(s0+216, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    ST32(v1+12, FBITS(f3));
    ST32(v1+16, FBITS(f4));
    ST32(v1+20, FBITS(f5));
    ST32(v1+24, FBITS(f6));
    f0 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+28));
    ST32(v1+32, FBITS(f0));
    ST32(v1+28, FBITS(f1));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0891B540 */
rv_t func_0891B540(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891B540:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0+52);
    t_ = v1;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B55C;
L_0891B55C:;
    a1 = LD32(s0);
    v0 = LD32(a1+140);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B56C;
L_0891B56C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0891B57C */
rv_t func_0891B57C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891B57C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    t_ = v1;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B598;
L_0891B598:;
    v1 = LD32(s0+44);
    a0 = s0 + 0;
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0891B5B0; }
    goto L_0891B5A8;
L_0891B5A8:;
    v0 = LD32(v1+4);
    a1 = (v0 >> 3) & 0x1;
    goto L_0891B5B0;
L_0891B5B0:;
    v1 = LD32(s0);
    v0 = LD32(v1+136);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B5C0;
L_0891B5C0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0891B5D0 */
rv_t func_0891B5D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0891B5D0:;
    sp = sp - 48;
    s0 = a0 + 0;
    v0 = LD32(a0+8);
    v0 = v0 & 0x18;
    cnd_ = v0 != 0;
    f20 = f12;
    if (cnd_) { goto L_0891B620; }
    goto L_0891B5F4;
L_0891B5F4:;
    v0 = LD32(a0+48);
    v0 = v0 & 0x400;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_0891B634; }
    goto L_0891B604;
L_0891B604:;
    { rv_t r_ = func_0891E59C(a0, a2, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B60C;
L_0891B60C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_0891B634; }
    goto L_0891B614;
L_0891B614:;
    v0 = LD32(s0+8);
    v0 = v0 | 0x8;
    ST32(s0+8, v0);
    goto L_0891B620;
L_0891B620:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0891B634:;
    ST32(s0+36, FBITS(f20));
    a0 = s0 + 0;
    v1 = LD32(v0+108);
    t_ = v1;
    ST32(s0+212, 0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B648;
L_0891B648:;
    v1 = LD32(s0+32);
    v0 = v1 < 0x7u;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s0+68)); goto L_0891B684; }
    goto L_0891B658;
L_0891B658:;
    v0 = v1 << 2;
    v1 = D_08AD9680 - (-27008);
    v1 = v1 - 27008;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0891B674u: goto L_0891B674; case 0x0891B6CCu: goto L_0891B6CC; case 0x0891B6DCu: goto L_0891B6DC; case 0x0891B6ECu: goto L_0891B6EC; case 0x0891B6FCu: goto L_0891B6FC; case 0x0891B70Cu: goto L_0891B70C; case 0x0891B71Cu: goto L_0891B71C; default: rs_break(0, 0x0891b66c); }
L_0891B674:;
    a0 = s0 + 0;
    func_0891BF10();
    goto L_0891B67C;
L_0891B67C:;
    v1 = LD32(s0+32);
    goto L_0891B680;
L_0891B680:;
    f0 = BITSF(LD32(s0+68));
    goto L_0891B684;
L_0891B684:;
    v0 = 1;
    f0 = f0 + f20;
    cnd_ = v1 == v0;
    ST32(s0+68, FBITS(f0));
    if (cnd_) { goto L_0891B6AC; }
    goto L_0891B694;
L_0891B694:;
    v0 = LD32(s0);
    a2 = LD32(s0+212);
    a1 = s0 + 216;
    v1 = LD32(v0+104);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B6AC;
L_0891B6AC:;
    v0 = LD32(s0);
    a0 = s0 + 0;
    v1 = LD32(v0+92);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B6C0;
L_0891B6C0:;
    f0 = BITSF(LD32(sp+4));
    ST32(s0+76, FBITS(f0));
    goto L_0891B620;
L_0891B6CC:;
    a0 = s0 + 0;
    func_0891BF18(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891B6D4;
L_0891B6D4:;
    v1 = LD32(s0+32);
    goto L_0891B680;
L_0891B6DC:;
    a0 = s0 + 0;
    func_0891C06C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891B6E4;
L_0891B6E4:;
    v1 = LD32(s0+32);
    goto L_0891B680;
L_0891B6EC:;
    a0 = s0 + 0;
    func_0891C314(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891B6F4;
L_0891B6F4:;
    v1 = LD32(s0+32);
    goto L_0891B680;
L_0891B6FC:;
    a0 = s0 + 0;
    func_0891C408(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891B704;
L_0891B704:;
    v1 = LD32(s0+32);
    goto L_0891B680;
L_0891B70C:;
    a0 = s0 + 0;
    func_0891C468(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891B714;
L_0891B714:;
    v1 = LD32(s0+32);
    goto L_0891B680;
L_0891B71C:;
    a0 = s0 + 0;
    func_0891C4FC();
    goto L_0891B724;
L_0891B724:;
    v1 = LD32(s0+32);
    goto L_0891B680;
}

/* 0891B72C */
rv_t func_0891B72C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891B72C:;
    sp = sp - 16;
    v0 = LD32(a0+28);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0891B754; }
    goto L_0891B740;
L_0891B740:;
    v0 = LD32(v0+4);
    a1 = 3;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0891B75C; }
    goto L_0891B750;
L_0891B750:;
    goto L_0891B754;
L_0891B754:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0891B75C:;
    { rv_t r_ = func_088BA5D4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B764;
L_0891B764:;
    goto L_0891B754;
}

/* 0891B76C */
rv_t func_0891B76C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891B76C:;
    sp = sp - 16;
    v0 = LD32(a0+28);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0891B794; }
    goto L_0891B780;
L_0891B780:;
    v0 = LD32(v0+4);
    a1 = 1;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0891B79C; }
    goto L_0891B790;
L_0891B790:;
    goto L_0891B794;
L_0891B794:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0891B79C:;
    { rv_t r_ = func_088BA5D4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B7A4;
L_0891B7A4:;
    goto L_0891B794;
}

/* 0891B7AC */
rv_t func_0891B7AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891B7AC:;
    sp = sp - 16;
    s0 = a1 + 0;
    v1 = LD32(a0+28);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0891B7D8; }
    goto L_0891B7C8;
L_0891B7C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0891B7D8:;
    v1 = LD32(v1);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B7E8;
L_0891B7E8:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f0));
    ST32(s0, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    goto L_0891B7C8;
}

/* 0891B804 */
rv_t func_0891B804(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[544] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 544);
L_0891B804:;
    sp = sp - 544;
    s2 = a0 + 0;
    v1 = 0 + 0;
    s1 = a1 + 0;
    a0 = LD32(a0+28);
    cnd_ = a0 != 0;
    s0 = a2 & 0xff;
    if (cnd_) { goto L_0891B854; }
    goto L_0891B834;
L_0891B834:;
    v0 = v1 + 0;
    sp = sp + 544;
    return (rv_t){ v0, v1, f0 };
L_0891B854:;
    v1 = LD32(a0);
    {u32 a_=sp+(448);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(464);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v0 = LD32(v1+20);
    {u32 a_=sp+(480);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    t_ = v0;
    {u32 a_=sp+(496);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B870;
L_0891B870:;
    f0 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(s1));
    f3 = BITSF(LD32(s1+4));
    f5 = BITSF(LD32(v0+8));
    f1 = f1 - f0;
    f3 = f3 - f4;
    f2 = BITSF(LD32(s1+8));
    s3 = D_08AED340 - (-11456);
    f0 = f1 * f1;
    f2 = f2 - f5;
    f4 = f3 * f3;
    f6 = BITSF(LD32(s3-11456));
    ST32(sp+32, FBITS(f1));
    f5 = f2 * f2;
    f0 = f0 + f4;
    ST32(sp+36, FBITS(f3));
    {u32 a_=sp+(448);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(464);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    f0 = f0 + f5;
    ST32(sp+40, FBITS(f2));
    {u32 a_=sp+(480);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    fcc = FCMP(f0, f6, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(496);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0891B8DC; }
    goto L_0891B8D8;
L_0891B8D8:;
    s0 = 0 + 0;
    goto L_0891B8DC;
L_0891B8DC:;
    cnd_ = s0 == 0;
    a0 = LD32(s2+28);
    if (cnd_) { goto L_0891BC20; }
    goto L_0891B8E4;
L_0891B8E4:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0891B8F4; }
    goto L_0891B8F0;
L_0891B8F0:;
    v1 = LD32(v0+16);
    goto L_0891B8F4;
L_0891B8F4:;
    v0 = v1 + 4;
    if (v1 == 0) v0 = 0;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_0891B834; }
    goto L_0891B904;
L_0891B904:;
    v1 = LD32(a0);
    {u32 a_=sp+(496);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    v0 = LD32(v1+20);
    {u32 a_=sp+(464);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    t_ = v0;
    {u32 a_=sp+(480);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B920;
L_0891B920:;
    f0 = BITSF(LD32(v0));
    f3 = BITSF(LD32(s1));
    f4 = BITSF(LD32(s1+4));
    ST32(sp+48, FBITS(f0));
    f1 = BITSF(LD32(v0+4));
    a1 = LD32(s2+28);
    f2 = BITSF(LD32(s1+8));
    ST32(sp+52, FBITS(f1));
    f0 = BITSF(LD32(v0+8));
    ST32(sp+72, FBITS(f2));
    ST32(sp+56, FBITS(f0));
    ST32(sp+64, FBITS(f3));
    {u32 a_=sp+(48);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    ST32(sp+68, FBITS(f4));
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v1 = LD32(a1);
    v0 = LD32(v1+24);
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891B974;
L_0891B974:;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+12));
    f2 = BITSF(LD32(v0+24));
    ST32(sp+144, FBITS(f0));
    a3 = sp + 160;
    ST32(sp+148, FBITS(f1));
    ST32(sp+152, FBITS(f2));
    v1 = LD32(sp+144);
    a0 = LD32(sp+148);
    a1 = LD32(sp+156);
    ST32(sp+96, v1);
    v1 = LD32(sp+152);
    ST32(sp+100, a0);
    ST32(sp+104, v1);
    ST32(sp+108, a1);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+16));
    f2 = BITSF(LD32(v0+28));
    ST32(sp+144, FBITS(f0));
    ST32(sp+148, FBITS(f1));
    ST32(sp+152, FBITS(f2));
    v1 = LD32(sp+144);
    a0 = LD32(sp+148);
    ST32(sp+124, a1);
    ST32(sp+112, v1);
    v1 = LD32(sp+152);
    ST32(sp+116, a0);
    ST32(sp+120, v1);
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+20));
    ST32(sp+144, FBITS(f1));
    v0 = LD32(sp+144);
    ST32(sp+148, FBITS(f0));
    ST32(sp+152, FBITS(f2));
    ST32(sp+128, v0);
    {u32 a_=sp+(496);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+148);
    v1 = LD32(sp+152);
    ST32(sp+140, a1);
    ST32(sp+132, v0);
    ST32(sp+136, v1);
    v0 = LD32(s2+28);
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0891BA30; }
    goto L_0891BA2C;
L_0891BA2C:;
    a2 = LD32(v0+16);
    goto L_0891BA30;
L_0891BA30:;
    v1 = a2 + 4;
    if (a2 == 0) v1 = 0;
    f5 = BITSF(LD32(v1));
    f0 = BITSF(LD32(v1+4));
    f4 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+16));
    f0 = f0 - f5;
    f2 = BITSF(LD32(v1+12));
    f3 = BITSF(LD32(v1+20));
    ST32(a3+12, a1);
    f2 = f2 - f4;
    f3 = f3 - f1;
    ST32(sp+144, FBITS(f0));
    {u32 a_=sp+(96);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(112);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+144);
    ST32(sp+148, FBITS(f2));
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    {u32 a_=sp+(432);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    ST32(sp+152, FBITS(f3));
    {float s0=v[56];float s1=v[57];float s2=v[58];float s3=v[59];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[68]=d0;v[69]=d1;v[70]=d2;v[71]=d3;}
    t0 = a3 + 32;
    ST32(a3, v0);
    a2 = sp + 96;
    t1 = sp + 144;
    v0 = LD32(sp+148);
    ST32(a3+4, v0);
    v0 = LD32(sp+152);
    ST32(a3+8, v0);
    v0 = D_08AED344 - (-11452);
    f1 = BITSF(LD32(v0-11452));
    {u32 a_=a3+(0);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(128);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[52]=BITSF(v0);}
    {float s0=v[52];float s1=v[52];float s2=v[52];float s3=v[52];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[52]=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float t0=v[52];float t1=v[53];float t2=v[54];float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;v[48]=d0;v[49]=d1;v[50]=d2;}
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[72]=d0;v[73]=d1;v[74]=d2;v[75]=d3;}
    {u32 a_=a3+(0);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    f6 = BITSF(LD32(v1+20));
    f3 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    f4 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+12));
    f5 = BITSF(LD32(v1+16));
    f3 = f3 + f2;
    f4 = f4 + f0;
    f5 = f5 + f6;
    f3 = f3 * f1;
    f4 = f4 * f1;
    f5 = f5 * f1;
    ST32(sp+240, FBITS(f3));
    ST32(sp+244, FBITS(f4));
    ST32(sp+248, FBITS(f5));
    ST32(sp+32, FBITS(f3));
    {u32 a_=sp+(240);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float t0=v[4];float t1=v[5];float t2=v[6];float o0=0;o0+=v[64]*t0;o0+=v[68]*t1;o0+=v[72]*t2;float o1=0;o1+=v[65]*t0;o1+=v[69]*t1;o1+=v[73]*t2;float o2=0;o2+=v[66]*t0;o2+=v[70]*t1;o2+=v[74]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    ST32(sp+36, FBITS(f4));
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = LD32(sp+144);
    ST32(sp+40, FBITS(f5));
    ST32(a3+16, v0);
    v0 = LD32(sp+148);
    ST32(a3+20, v0);
    v1 = LD32(sp+152);
    ST32(a3+24, v1);
    v0 = LD32(sp+156);
    ST32(a3+28, v0);
    goto L_0891BB44;
L_0891BB44:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    a0 = LD32(a2+8);
    a1 = LD32(a2+12);
    ST32(t0, v0);
    a2 = a2 + 16;
    t0 = t0 + 16;
    ST32(t0-12, v1);
    ST32(t0-8, a0);
    cnd_ = a2 != t1;
    ST32(t0-4, a1);
    if (cnd_) { goto L_0891BB44; }
    goto L_0891BB70;
L_0891BB70:;
    s0 = sp + 256;
    v0 = 1;
    v1 = (u32)-1;
    a1 = sp + 48;
    a2 = sp + 80;
    a0 = s0 + 0;
    t0 = 0 + 0;
    t1 = 0xffff;
    t2 = 1;
    t3 = 1;
    ST32(sp+4, v0);
    ST32(sp, v0);
    ST32(sp+20, v1);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    ST32(sp+16, v1);
    func_088B9090(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_0891BBB4;
L_0891BBB4:;
    v0 = LD32(s2+28);
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    a1 = (u32)-1;
    if (cnd_) { goto L_0891BBC8; }
    goto L_0891BBC4;
L_0891BBC4:;
    a1 = LD32(v0+8);
    goto L_0891BBC8;
L_0891BBC8:;
    a0 = s0 + 0;
    func_088B91F4(a0, a1);
    goto L_0891BBD0;
L_0891BBD0:;
    a0 = sp + 400;
    a1 = s0 + 0;
    func_088B9294(a0, a1);
    goto L_0891BBDC;
L_0891BBDC:;
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(400);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    f2 = BITSF(LD32(s3-11456));
    v0 = 1;
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    if (cnd_) { goto L_0891BC10; }
    goto L_0891BC0C;
L_0891BC0C:;
    v0 = 0 + 0;
    goto L_0891BC10;
L_0891BC10:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0891B834; }
    goto L_0891BC1C;
L_0891BC1C:;
    a0 = LD32(s2+28);
    goto L_0891BC20;
L_0891BC20:;
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891BC30;
L_0891BC30:;
    v1 = 1;
    goto L_0891B834;
}

/* 0891BC38 */
rv_t func_0891BC38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891BC38:;
    sp = sp - 16;
    s0 = a1 + 0;
    v1 = LD32(a0+28);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0891BC64; }
    goto L_0891BC54;
L_0891BC54:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0891BC64:;
    v1 = LD32(v1);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891BC74;
L_0891BC74:;
    f0 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+12));
    f5 = BITSF(LD32(v0+16));
    f6 = BITSF(LD32(v0+20));
    f7 = BITSF(LD32(v0+24));
    f8 = BITSF(LD32(v0+28));
    ST32(s0+32, FBITS(f0));
    ST32(s0, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    ST32(s0+8, FBITS(f3));
    ST32(s0+12, FBITS(f4));
    ST32(s0+16, FBITS(f5));
    ST32(s0+20, FBITS(f6));
    ST32(s0+24, FBITS(f7));
    ST32(s0+28, FBITS(f8));
    goto L_0891BC54;
}

/* 0891BCC0 */
rv_t func_0891BCC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891BCC0:;
    sp = sp - 16;
    v0 = LD32(a0+28);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0891BCE0; }
    goto L_0891BCD4;
L_0891BCD4:;
    goto L_0891BCD8;
L_0891BCD8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0891BCE0:;
    v0 = LD32(v0);
    v1 = LD32(v0+48);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891BCF0;
L_0891BCF0:;
    goto L_0891BCD8;
}

/* 0891BCF8 */
rv_t func_0891BCF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0891BCF8:;
    sp = sp - 32;
    s2 = a1 + 0;
    v0 = LD32(a0+24);
    a0 = D_08B28E68 - (-29080);
    ST32(a1+8, 0);
    v1 = a0 - 29080;
    a2 = LD32(v0+4);
    v0 = 999;
    ST32(a1+4, 0);
    cnd_ = a2 == v0;
    ST32(a1, 0);
    if (cnd_) { goto L_0891BDDC; }
    goto L_0891BD38;
L_0891BD38:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-29080);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0891BD88; }
    goto L_0891BD5C;
L_0891BD5C:;
    a0 = LD32(a1);
    goto L_0891BD60;
L_0891BD60:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0891BE10; }
    goto L_0891BD78;
L_0891BD78:;
    a1 = LD32(a1+4);
    goto L_0891BD7C;
L_0891BD7C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0891BD60; }
    goto L_0891BD84;
L_0891BD84:;
    v1 = 0 + 0;
    goto L_0891BD88;
L_0891BD88:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0891BDE0; }
    goto L_0891BD90;
L_0891BD90:;
    s0 = LD32(v1+100);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_0891BDE4; }
    goto L_0891BD9C;
L_0891BD9C:;
    a1 = LD32(s0+16);
    cnd_ = a1 == 0;
    s1 = s0 + 76;
    if (cnd_) { goto L_0891BDD0; }
    goto L_0891BDA8;
L_0891BDA8:;
    v0 = D_08B285AC - (-31316);
    s3 = LD32(v0-31316);
    v1 = LD32(s0+220);
    cnd_ = v1 == s3;
    a0 = s1 + 0;
    if (cnd_) { goto L_0891BDD4; }
    goto L_0891BDBC;
L_0891BDBC:;
    v0 = LD32(s1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AED348 - (-11448);
    if (cnd_) { goto L_0891BDF8; }
    goto L_0891BDCC;
L_0891BDCC:;
    ST32(s0+220, s3);
    goto L_0891BDD0;
L_0891BDD0:;
    a0 = s1 + 0;
    goto L_0891BDD4;
L_0891BDD4:;
    a1 = s2 + 0;
    { rv_t r_ = func_088166EC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891BDDC;
L_0891BDDC:;
    goto L_0891BDE0;
L_0891BDE0:;
    goto L_0891BDE4;
L_0891BDE4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0891BDF8:;
    f12 = BITSF(LD32(v0-11448));
    a0 = s1 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_088155D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891BE08;
L_0891BE08:;
    ST32(s0+220, s3);
    goto L_0891BDD0;
L_0891BE10:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0891BD78; }
    goto L_0891BE1C;
L_0891BE1C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0891BD7C; }
    goto L_0891BE28;
L_0891BE28:;
    goto L_0891BD88;
}

/* 0891BE30 */
rv_t func_0891BE30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0891BE30:;
    sp = sp - 48;
    s0 = a0 + 0;
    a0 = D_08B28EF4 - (-28940);
    a0 = a0 - 28940;
    a2 = 1;
    { u64 r_ = func_08AAAC7C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0891BE54;
L_0891BE54:;
    v1 = 0 < v0;
    a1 = LD32(s0+28);
    s1 = v0 + 0;
    v0 = 0 < a1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_0891BF04; }
    goto L_0891BE70;
L_0891BE70:;
    v1 = LD32(a1);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891BE80;
L_0891BE80:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891BE94;
L_0891BE94:;
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
    v0 = FBITS(f1);
    {vr0=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    goto L_0891BEF0;
L_0891BEF0:;
    sp = sp + 48;
    { v[0]=vr0;return (rv_t){ v0, v1, f0 }; }
L_0891BF04:;
    v0 = D_08AED34C - (-11444);
    f0 = BITSF(LD32(v0-11444));
    goto L_0891BEF0;
    v[0]=vr0;
}

/* 0891BF10 */
void func_0891BF10(void)
{
L_0891BF10:;
    return;
}

/* 0891BF18 */
void func_0891BF18(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891BF18:;
    sp = sp - 16;
    a3 = LD32(a0+16);
    v0 = LD32(a3+8);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0891BFCC; }
    goto L_0891BF3C;
L_0891BF3C:;
    a2 = LD32(a0+140);
    v0 = 999;
    a0 = D_08B28DF8 - (-29192);
    cnd_ = a2 == v0;
    v1 = a0 - 29192;
    if (cnd_) { goto L_0891BFCC; }
    goto L_0891BF50;
L_0891BF50:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-29192);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0891BF94; }
    goto L_0891BF74;
L_0891BF74:;
    v1 = LD32(a0);
    goto L_0891BF78;
L_0891BF78:;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0891C04C; }
    goto L_0891BF84;
L_0891BF84:;
    a0 = LD32(a0+4);
    goto L_0891BF88;
L_0891BF88:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0891BF78; }
    goto L_0891BF90;
L_0891BF90:;
    a1 = 0 + 0;
    goto L_0891BF94;
L_0891BF94:;
    cnd_ = a1 == 0;
    s1 = a1 + 84;
    if (cnd_) { goto L_0891BFCC; }
    goto L_0891BF9C;
L_0891BF9C:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    func_0891D2AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0891BFA8;
L_0891BFA8:;
    v0 = LD32(s0+48);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a3 = LD32(s0+16); goto L_0891BFCC; }
    goto L_0891BFB8;
L_0891BFB8:;
    v0 = LD32(s1+4);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0891C034; }
    goto L_0891BFC8;
L_0891BFC8:;
    a3 = LD32(s0+16);
    goto L_0891BFCC;
L_0891BFCC:;
    v1 = LD32(a3+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    v0 = (v1 >> 3) & 0x1;
    if (cnd_) { goto L_0891BFE4; }
    goto L_0891BFDC;
L_0891BFDC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0891C000; }
    goto L_0891BFE4;
L_0891BFE4:;
    a0 = s0 + 0;
    f0 = func_0891CAF8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0891BFEC;
L_0891BFEC:;
    v0 = LD32(s0+8);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s0+144); goto L_0891C010; }
    goto L_0891BFFC;
L_0891BFFC:;
    goto L_0891C000;
L_0891C000:;
    sp = sp + 16;
    return;
L_0891C010:;
    a0 = D_08B28DD8 - (-29224);
    a0 = a0 - 29224;
    a2 = 1;
    v0 = func_08AABDC8(a0, a1, a2);
    goto L_0891C020;
L_0891C020:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    func_0891C654(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891C02C;
L_0891C02C:;
    goto L_0891C000;
L_0891C034:;
    a0 = s0 + 0;
    f0 = func_0891CA60(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891C03C;
L_0891C03C:;
    v0 = LD32(s0+48);
    v0 = v0 | 0x400;
    ST32(s0+48, v0);
    goto L_0891BFFC;
L_0891C04C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_0891BF84; }
    goto L_0891C058;
L_0891C058:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0891BF88; }
    goto L_0891C064;
L_0891C064:;
    goto L_0891BF94;
}

/* 0891C06C */
void func_0891C06C(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0891C06C:;
    sp = sp - 64;
    a1 = sp + 0;
    s1 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+92);
    t_ = v0;
    s2 = LD32(a0+40);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891C09C;
L_0891C09C:;
    v1 = LD32(s1+48);
    f0 = BITSF(LD32(s2+32));
    v0 = s2 + 32;
    v1 = v1 & 0x10;
    cnd_ = v1 != 0;
    ST32(sp, FBITS(f0));
    if (cnd_) { goto L_0891C0BC; }
    goto L_0891C0B4;
L_0891C0B4:;
    f0 = BITSF(LD32(v0+4));
    ST32(sp+4, FBITS(f0));
    goto L_0891C0BC;
L_0891C0BC:;
    f0 = BITSF(LD32(v0+8));
    v1 = LD32(s1);
    s3 = s2 + 60;
    ST32(sp+8, FBITS(f0));
    a1 = sp + 0;
    a0 = s1 + 0;
    a2 = LD32(s3+4);
    v0 = LD32(v1+96);
    a2 = (a2 >> 4) & 0x1;
    t_ = v0;
    a2 = a2 ^ 0x1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891C0E8;
L_0891C0E8:;
    v1 = LD32(s1);
    v0 = LD32(v1+148);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891C0F8;
L_0891C0F8:;
    v1 = LD32(s1);
    v0 = LD32(v1+144);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891C108;
L_0891C108:;
    a1 = s2 + 48;
    a0 = s1 + 0;
    func_0891DBF4(a0, a1);
    goto L_0891C114;
L_0891C114:;
    a0 = s1 + 0;
    a1 = sp + 16;
    ST32(sp+16, 0);
    v0 = func_0891D088(a0, a1, 0, 0, 0);
    goto L_0891C124;
L_0891C124:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+48); goto L_0891C2EC; }
    goto L_0891C12C;
L_0891C12C:;
    a0 = s1 + 0;
    goto L_0891C130;
L_0891C130:;
    a1 = sp + 0;
    func_0891F964(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891C138;
L_0891C138:;
    v1 = LD32(s1+48);
    v0 = v1 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0891C204; }
    goto L_0891C148;
L_0891C148:;
    v1 = v1 & 0x30;
    v0 = 16;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0891C1EC; }
    goto L_0891C158;
L_0891C158:;
    a0 = s1 + 0;
    func_0891E8DC(a0);
    goto L_0891C160;
L_0891C160:;
    v1 = LD32(s1+48);
    v0 = v1 & 0x100;
    cnd_ = v0 != 0;
    v0 = v1 & 0x9;
    if (cnd_) { goto L_0891C1DC; }
    goto L_0891C170;
L_0891C170:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0891C194; }
    goto L_0891C178;
L_0891C178:;
    v1 = 0 + 0;
    if (s2 != 0) v1 = s3;
    v0 = LD32(v1+4);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0891C1AC; }
    goto L_0891C190;
L_0891C190:;
    goto L_0891C194;
L_0891C194:;
    sp = sp + 64;
    return;
L_0891C1AC:;
    a0 = s1 + 0;
    v0 = func_0891D3DC(a0);
    goto L_0891C1B4;
L_0891C1B4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0891C194; }
    goto L_0891C1BC;
L_0891C1BC:;
    a0 = s1 + 0;
    func_0891CC38(a0);
    goto L_0891C1C4;
L_0891C1C4:;
    a0 = s1 + 0;
    f0 = func_0891E934(a0);
    goto L_0891C1CC;
L_0891C1CC:;
    v0 = LD32(s1+48);
    v0 = v0 | 0x400;
    ST32(s1+48, v0);
    goto L_0891C190;
L_0891C1DC:;
    a0 = s1 + 0;
    func_0891C9BC(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891C1E4;
L_0891C1E4:;
    goto L_0891C194;
L_0891C1EC:;
    a0 = s1 + 0;
    func_0891E488(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891C1F4;
L_0891C1F4:;
    v0 = LD32(s1+48);
    v0 = v0 | 0x20;
    ST32(s1+48, v0);
    goto L_0891C158;
L_0891C204:;
    a0 = s1 + 0;
    v0 = func_0891D3DC(a0);
    goto L_0891C20C;
L_0891C20C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0891C21C; }
    goto L_0891C214;
L_0891C214:;
    v1 = LD32(s1+48);
    goto L_0891C148;
L_0891C21C:;
    a0 = s1 + 0;
    func_0891CC38(a0);
    goto L_0891C224;
L_0891C224:;
    a1 = LD32(sp+16);
    cnd_ = a1 == 0;
    if (cnd_) { a1 = LD32(s1+140); goto L_0891C2D0; }
    goto L_0891C230;
L_0891C230:;
    v0 = LD32(a1+128);
    v0 = (v0 >> 6) & 0x1;
    cnd_ = v0 == 0;
    a0 = D_08B28DD8 - (-29224);
    if (cnd_) { goto L_0891C2C0; }
    goto L_0891C240;
L_0891C240:;
    a1 = LD32(a1+80);
    a0 = a0 - 29224;
    a2 = 1;
    v0 = func_08AABDC8(a0, a1, a2);
    goto L_0891C250;
L_0891C250:;
    a1 = v0 + 0;
    v0 = D_08AED350 - (-11440);
    f12 = BITSF(LD32(v0-11440));
    a2 = LD32(sp+16);
    a0 = s1 + 0;
    f0 = func_0891C504(a0, a1, a2, f12);
    goto L_0891C268;
L_0891C268:;
    a0 = LD32(sp+16);
    { rv_t r_ = func_08857F54(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891C270;
L_0891C270:;
    v0 = D_08AED354 - (-11436);
    f1 = BITSF(LD32(v0-11436));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s1+48); goto L_0891C148; }
    goto L_0891C288;
L_0891C288:;
    v0 = LD32(sp+16);
    a0 = D_08B28DD8 - (-29224);
    a0 = a0 - 29224;
    a1 = LD32(v0+80);
    a2 = 1;
    v0 = func_08AABDC8(a0, a1, a2);
    goto L_0891C2A0;
L_0891C2A0:;
    s0 = v0 + 0;
    a0 = s1 + 0;
    func_0891CCB4(a0);
    goto L_0891C2AC;
L_0891C2AC:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    func_0891C654(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891C2B8;
L_0891C2B8:;
    v1 = LD32(s1+48);
    goto L_0891C148;
L_0891C2C0:;
    a0 = s1 + 0;
    func_0891C8E0(a0, a1);
    goto L_0891C2C8;
L_0891C2C8:;
    goto L_0891C268;
L_0891C2D0:;
    a0 = D_08B28DF8 - (-29192);
    a0 = a0 - 29192;
    a2 = 1;
    v0 = func_08ABB488(a0, a1, a2);
    goto L_0891C2E0;
L_0891C2E0:;
    ST32(sp+16, v0);
    a1 = v0 + 0;
    goto L_0891C230;
L_0891C2EC:;
    v1 = LD32(sp+16);
    a0 = s1 + 0;
    v0 = v0 | 0x2;
    ST32(s1+48, v0);
    a1 = v1 + 0;
    v0 = LD32(v1+4);
    ST32(s1+140, v0);
    func_0891CF44(a0, a1);
    goto L_0891C30C;
L_0891C30C:;
    a0 = s1 + 0;
    goto L_0891C130;
}

/* 0891C314 */
void func_0891C314(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0891C314:;
    sp = sp - 32;
    v0 = LD32(a0);
    v1 = LD32(v0+144);
    t_ = v1;
    s1 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891C334;
L_0891C334:;
    a0 = s1 + 0;
    a1 = sp + 0;
    ST32(sp, 0);
    v0 = func_0891D0EC(a0, a1);
    goto L_0891C344;
L_0891C344:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0891C3E8; }
    goto L_0891C34C;
L_0891C34C:;
    a0 = s1 + 0;
    func_0891D848(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891C354;
L_0891C354:;
    v0 = LD32(s1+48);
    v0 = v0 & 0x10;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0891C3D8; }
    goto L_0891C364;
L_0891C364:;
    a0 = s1 + 0;
    func_0891E8DC(a0);
    goto L_0891C36C;
L_0891C36C:;
    v0 = LD32(s1+48);
    v1 = v0 & 0x1;
    v0 = v0 & 0x100;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0891C3C8; }
    goto L_0891C380;
L_0891C380:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0891C3A0; }
    goto L_0891C388;
L_0891C388:;
    v1 = LD32(s1+44);
    v0 = LD32(v1+4);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0891C3B0; }
    goto L_0891C39C;
L_0891C39C:;
    goto L_0891C3A0;
L_0891C3A0:;
    sp = sp + 32;
    return;
L_0891C3B0:;
    f0 = func_0891CA60(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891C3B8;
L_0891C3B8:;
    v0 = LD32(s1+48);
    v0 = v0 | 0x400;
    ST32(s1+48, v0);
    goto L_0891C39C;
L_0891C3C8:;
    func_0891C9BC(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891C3D0;
L_0891C3D0:;
    goto L_0891C3A0;
L_0891C3D8:;
    func_0891E488(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891C3E0;
L_0891C3E0:;
    goto L_0891C364;
L_0891C3E8:;
    s0 = LD32(s1+40);
    func_0891CCB4(a0);
    goto L_0891C3F0;
L_0891C3F0:;
    a2 = LD32(sp);
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_0891C91C(a0, a1, a2);
    goto L_0891C400;
L_0891C400:;
    goto L_0891C34C;
}

/* 0891C408 */
void func_0891C408(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891C408:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_0891D848(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0891C41C;
L_0891C41C:;
    v1 = LD32(s0+48);
    v0 = v1 & 0x10;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0891C458; }
    goto L_0891C42C;
L_0891C42C:;
    v0 = v1 & 0x100;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0891C448; }
    goto L_0891C438;
L_0891C438:;
    goto L_0891C43C;
L_0891C43C:;
    sp = sp + 16;
    return;
L_0891C448:;
    func_0891C9BC(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891C450;
L_0891C450:;
    goto L_0891C43C;
L_0891C458:;
    func_0891E488(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891C460;
L_0891C460:;
    v1 = LD32(s0+48);
    goto L_0891C42C;
}

/* 0891C468 */
void func_0891C468(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0891C468:;
    sp = sp - 32;
    v1 = LD32(a0);
    v0 = LD32(v1+56);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891C484;
L_0891C484:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_0891C4A0; }
    goto L_0891C490;
L_0891C490:;
    goto L_0891C494;
L_0891C494:;
    sp = sp + 32;
    return;
L_0891C4A0:;
    v0 = LD32(s0);
    v1 = LD32(v0+92);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891C4B0;
L_0891C4B0:;
    f0 = BITSF(LD32(s0+204));
    f1 = BITSF(LD32(sp+4));
    v0 = D_08AED358 - (-11432);
    f1 = f1 - f0;
    f0 = BITSF(LD32(v0-11432));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_0891C4EC; }
    goto L_0891C4D4;
L_0891C4D4:;
    f0 = func_0891CA60(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891C4DC;
L_0891C4DC:;
    v0 = LD32(s0+48);
    v0 = v0 | 0x400;
    ST32(s0+48, v0);
    goto L_0891C490;
L_0891C4EC:;
    a0 = s0 + 0;
    func_0891D848(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891C4F4;
L_0891C4F4:;
    goto L_0891C494;
}

/* 0891C4FC */
void func_0891C4FC(void)
{
L_0891C4FC:;
    return;
}

/* 0891C504 */
float func_0891C504(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0891C504:;
    sp = sp - 48;
    v1 = (u32)-138;
    s2 = a2 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    f20 = f12;
    v0 = LD32(a0+48);
    v0 = v0 & v1;
    ST32(a0+48, v0);
    func_0891D598(a0, a1);
    goto L_0891C540;
L_0891C540:;
    v1 = LD_U16(s1+8);
    v0 = 58;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s0+24); goto L_0891C648; }
    goto L_0891C550;
L_0891C550:;
    v0 = D_08AED35C - (-11428);
    f0 = BITSF(LD32(v0-11428));
    v1 = 1;
    ST32(sp+4, s1);
    ST32(sp+12, FBITS(f0));
    ST32(s0+32, v1);
    ST32(sp, 0);
    cnd_ = s2 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_0891C638; }
    goto L_0891C574;
L_0891C574:;
    v0 = 2;
    a0 = s2 + 0;
    ST32(sp, v0);
    ST32(sp+8, s2);
    f0 = func_08857030(a0);
    goto L_0891C588;
L_0891C588:;
    ST32(sp+12, FBITS(f0));
    goto L_0891C58C;
L_0891C58C:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+60);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891C5A0;
L_0891C5A0:;
    s1 = v0 + 0;
    v0 = LD32(s0+8);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_0891C628; }
    goto L_0891C5B4;
L_0891C5B4:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_0891C5C4; }
    goto L_0891C5BC;
L_0891C5BC:;
    cnd_ = v1 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0891C618; }
    goto L_0891C5C4;
L_0891C5C4:;
    a0 = s0 + 0;
    func_0891CA18(a0);
    goto L_0891C5CC;
L_0891C5CC:;
    v0 = LD32(s0+8);
    v1 = LD32(s0);
    a1 = s1 + 0;
    v0 = v0 | 0x10;
    ST32(s0+8, v0);
    v0 = LD32(v1+64);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891C5EC;
L_0891C5EC:;
    v1 = LD32(s0);
    goto L_0891C5F0;
L_0891C5F0:;
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891C5FC;
L_0891C5FC:;
    sp = sp + 48;
    return f0;
L_0891C618:;
    a0 = s0 + 0;
    { u64 r_ = func_08922370(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0891C620;
L_0891C620:;
    v1 = LD32(s0);
    goto L_0891C5F0;
L_0891C628:;
    a0 = s1 + 0;
    { rv_t r_ = func_08921F94(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891C630;
L_0891C630:;
    v1 = v0 + 0;
    goto L_0891C5B4;
L_0891C638:;
    ST32(sp, v1);
    ST32(sp+12, FBITS(f20));
    ST32(sp+8, 0);
    goto L_0891C58C;
L_0891C648:;
    v1 = LD32(v0+4);
    ST32(s1+168, v1);
    goto L_0891C550;
}

/* 0891C654 */
void func_0891C654(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0891C654:;
    sp = sp - 80;
    s1 = a0 + 0;
    s2 = a1 + 0;
    func_0891D62C(a0, a1, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0891C678;
L_0891C678:;
    v1 = LD32(s1+48);
    v0 = v1 & 0x200;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0891C8C4; }
    goto L_0891C688;
L_0891C688:;
    v1 = (v1 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    v0 = LD32(s1+24);
    ST32(s1+48, v1);
    s0 = 2;
    a0 = s2 + 0;
    a1 = LD32(v0+4);
    ST32(s1+32, s0);
    func_08855BE0(a0, a1);
    goto L_0891C6A8;
L_0891C6A8:;
    a0 = s2 + 0;
    a1 = sp + 0;
    f0 = func_08855C68(a0, a1);
    goto L_0891C6B4;
L_0891C6B4:;
    v0 = LD32(s1+32);
    cnd_ = v0 == s0;
    if (cnd_) { f0 = BITSF(LD32(s1+52)); goto L_0891C6DC; }
    goto L_0891C6C0;
L_0891C6C0:;
    goto L_0891C6C4;
L_0891C6C4:;
    sp = sp + 80;
    return;
L_0891C6DC:;
    f1 = BITSF(LD32(s1+36));
    v1 = LD32(s1);
    ST32(sp+32, 0);
    f0 = f0 + f1;
    a0 = s1 + 0;
    v0 = LD32(v1+144);
    t_ = v0;
    ST32(s1+52, FBITS(f0));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891C6FC;
L_0891C6FC:;
    v1 = LD32(s2+104);
    v0 = (v1 >> 7) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+48); goto L_0891C71C; }
    goto L_0891C70C;
L_0891C70C:;
    v0 = (v1 >> 6) & 0x1;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0891C728; }
    goto L_0891C718;
L_0891C718:;
    v0 = LD32(s1+48);
    goto L_0891C71C;
L_0891C71C:;
    v0 = v0 & 0x800;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0891C738; }
    goto L_0891C728;
L_0891C728:;
    a1 = sp + 32;
    v0 = func_0891D088(a0, a1, 0, 0, 0);
    goto L_0891C730;
L_0891C730:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0891C7F4; }
    goto L_0891C738;
L_0891C738:;
    a0 = s1 + 0;
    v0 = func_0891D3E8(a0);
    goto L_0891C740;
L_0891C740:;
    cnd_ = v0 != 0;
    v0 = LD32(sp+32);
    if (cnd_) { goto L_0891C7DC; }
    goto L_0891C748;
L_0891C748:;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0891C764; }
    goto L_0891C750;
L_0891C750:;
    a0 = s1 + 0;
    v0 = func_0891CD18(a0, 0, 0, 0);
    goto L_0891C758;
L_0891C758:;
    cnd_ = v0 == 0;
    ST32(sp+32, v0);
    if (cnd_) { goto L_0891C6C0; }
    goto L_0891C760;
L_0891C760:;
    a1 = v0 + 0;
    goto L_0891C764;
L_0891C764:;
    a0 = s1 + 0;
    func_0891CF44(a0, a1);
    goto L_0891C76C;
L_0891C76C:;
    v0 = LD32(sp+32);
    a0 = s1 + 0;
    v1 = LD32(v0+4);
    ST32(s1+140, v1);
    func_0891D61C(a0);
    goto L_0891C780;
L_0891C780:;
    a0 = s1 + 0;
    func_0891CC38(a0);
    goto L_0891C788;
L_0891C788:;
    a1 = LD32(sp+32);
    v0 = LD32(a1+128);
    v0 = (v0 >> 6) & 0x1;
    cnd_ = v0 == 0;
    a0 = D_08B28DD8 - (-29224);
    if (cnd_) { goto L_0891C7CC; }
    goto L_0891C79C;
L_0891C79C:;
    a1 = LD32(a1+80);
    a0 = a0 - 29224;
    a2 = 1;
    v0 = func_08AABDC8(a0, a1, a2);
    goto L_0891C7AC;
L_0891C7AC:;
    a1 = v0 + 0;
    v0 = D_08AED364 - (-11420);
    a2 = LD32(sp+32);
    f12 = BITSF(LD32(v0-11420));
    a0 = s1 + 0;
    f0 = func_0891C504(a0, a1, a2, f12);
    goto L_0891C7C4;
L_0891C7C4:;
    goto L_0891C6C4;
L_0891C7CC:;
    a0 = s1 + 0;
    func_0891C8E0(a0, a1);
    goto L_0891C7D4;
L_0891C7D4:;
    goto L_0891C6C4;
L_0891C7DC:;
    a0 = s1 + 0;
    func_0891D60C(a0);
    goto L_0891C7E4;
L_0891C7E4:;
    v0 = LD32(s1+48);
    v0 = v0 | 0x1;
    ST32(s1+48, v0);
    goto L_0891C6C0;
L_0891C7F4:;
    a0 = s1 + 0;
    func_0891D60C(a0);
    goto L_0891C7FC;
L_0891C7FC:;
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
    s0 = s2 + 60;
    v0 = D_08AED360 - (-11424);
    f2 = (float)(s32)FBITS(f0);
    f3 = BITSF(LD32(s0+16));
    f0 = BITSF(LD32(v0-11424));
    f1 = BITSF(LD32(s0+20));
    v0 = LD32(s1);
    f2 = f2 * f0;
    f1 = f1 - f3;
    a0 = a0 + v1;
    ST32(a1+23232, v1);
    s3 = sp + 16;
    f2 = f2 * f1;
    ST32(a2+4, a0);
    a1 = s3 + 0;
    a0 = s1 + 0;
    f3 = f3 + f2;
    v1 = LD32(v0+92);
    t_ = v1;
    ST32(s1+52, FBITS(f3));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891C874;
L_0891C874:;
    v0 = LD32(s1+48);
    f0 = BITSF(LD32(s2+32));
    a0 = s2 + 32;
    v0 = v0 & 0x10;
    cnd_ = v0 != 0;
    ST32(sp+16, FBITS(f0));
    if (cnd_) { goto L_0891C894; }
    goto L_0891C88C;
L_0891C88C:;
    f0 = BITSF(LD32(a0+4));
    ST32(sp+20, FBITS(f0));
    goto L_0891C894;
L_0891C894:;
    f0 = BITSF(LD32(a0+8));
    v1 = LD32(s1);
    a2 = LD32(s0+4);
    ST32(sp+24, FBITS(f0));
    a0 = s1 + 0;
    a2 = (a2 >> 4) & 0x1;
    v0 = LD32(v1+96);
    a2 = a2 ^ 0x1;
    t_ = v0;
    a1 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891C8BC;
L_0891C8BC:;
    goto L_0891C6C4;
L_0891C8C4:;
    a0 = s1 + 0;
    func_0891D4F0(a0);
    goto L_0891C8CC;
L_0891C8CC:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    func_0891D598(a0, a1);
    goto L_0891C8D8;
L_0891C8D8:;
    v1 = LD32(s1+48);
    goto L_0891C688;
}

/* 0891C8E0 */
void func_0891C8E0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891C8E0:;
    sp = sp - 16;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0891C90C; }
    goto L_0891C8F4;
L_0891C8F4:;
    func_0891D7E0(a0, a1);
    goto L_0891C8FC;
L_0891C8FC:;
    v0 = 3;
    v1 = 999;
    ST32(s0+32, v0);
    ST32(s0+140, v1);
    goto L_0891C90C;
L_0891C90C:;
    sp = sp + 16;
    return;
}

/* 0891C91C */
void func_0891C91C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f12 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891C91C:;
    sp = sp - 16;
    s2 = a2 + 0;
    s0 = a0 + 0;
    s1 = s0 + 80;
    f12 = BITSF(LD32(a0+60));
    a0 = a1 + 0;
    a1 = s1 + 0;
    func_08856F08(a0, a1, f12);
    goto L_0891C94C;
L_0891C94C:;
    v1 = LD32(s0);
    a1 = s0 + 92;
    v0 = LD32(v1+92);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891C960;
L_0891C960:;
    a2 = s0 + 116;
    a1 = s0 + 104;
    a0 = s2 + 0;
    func_08857078(a0, a1, a2);
    goto L_0891C970;
L_0891C970:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    f0 = func_08849674(a0, a1);
    goto L_0891C97C;
L_0891C97C:;
    ST32(s0+72, FBITS(f0));
    a1 = s2 + 0;
    a0 = s0 + 0;
    func_0891D7E0(a0, a1);
    goto L_0891C98C;
L_0891C98C:;
    v0 = 4;
    ST32(s0+32, v0);
    ST32(s0+56, 0);
    ST32(s0+60, 0);
    ST32(s0+64, 0);
    ST32(s0+68, 0);
    sp = sp + 16;
    return;
}

/* 0891C9BC */
void func_0891C9BC(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891C9BC:;
    sp = sp - 16;
    v0 = LD32(a0+32);
    v1 = (s32)v0 < 5;
    v0 = (s32)v0 < 2;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0891C9E4; }
    goto L_0891C9DC;
L_0891C9DC:;
    cnd_ = v1 != 0;
    a1 = a0 + 200;
    if (cnd_) { goto L_0891C9F4; }
    goto L_0891C9E4;
L_0891C9E4:;
    sp = sp + 16;
    return;
L_0891C9F4:;
    v0 = LD32(a0);
    v1 = LD32(v0+92);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891CA04;
L_0891CA04:;
    a0 = LD32(s0+32);
    v0 = 5;
    ST32(s0+32, v0);
    ST32(s0+196, a0);
    goto L_0891C9E4;
}

/* 0891CA18 */
void func_0891CA18(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891CA18:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_0891D60C(a0);
    goto L_0891CA2C;
L_0891CA2C:;
    a0 = s0 + 0;
    func_0891D4F0(a0);
    goto L_0891CA34;
L_0891CA34:;
    a0 = s0 + 0;
    func_0891D48C(a0);
    goto L_0891CA3C;
L_0891CA3C:;
    v0 = LD32(s0+8);
    v1 = 6;
    ST32(s0+32, v1);
    v0 = v0 | 0x8;
    ST32(s0+8, v0);
    sp = sp + 16;
    return;
}

/* 0891CA60 */
float func_0891CA60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891CA60:;
    sp = sp - 16;
    v1 = LD32(a0+32);
    v0 = v1 < 0x8u;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0891CAA0; }
    goto L_0891CA7C;
L_0891CA7C:;
    v0 = v1 << 2;
    v1 = D_08AD969C - (-26980);
    v1 = v1 - 26980;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0891CA98u: goto L_0891CA98; case 0x0891CAA0u: goto L_0891CAA0; case 0x0891CAB0u: goto L_0891CAB0; case 0x0891CAC8u: goto L_0891CAC8; case 0x0891CAD8u: goto L_0891CAD8; case 0x0891CAE8u: goto L_0891CAE8; default: rs_break(0, 0x0891ca90); }
L_0891CA98:;
    a0 = s0 + 0;
    f0 = func_0891CAF8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0891CAA0;
L_0891CAA0:;
    goto L_0891CAA4;
L_0891CAA4:;
    sp = sp + 16;
    return f0;
L_0891CAB0:;
    a0 = s0 + 0;
    func_0891CC38(a0);
    goto L_0891CAB8;
L_0891CAB8:;
    a0 = s0 + 0;
    f0 = func_0891E934(a0);
    goto L_0891CAC0;
L_0891CAC0:;
    goto L_0891CAA4;
L_0891CAC8:;
    a0 = s0 + 0;
    func_0891CCB4(a0);
    goto L_0891CAD0;
L_0891CAD0:;
    goto L_0891CAB8;
L_0891CAD8:;
    a0 = s0 + 0;
    f0 = func_0891CCC8(a0);
    goto L_0891CAE0;
L_0891CAE0:;
    goto L_0891CAA4;
L_0891CAE8:;
    a0 = s0 + 0;
    func_0891CD00(a0);
    goto L_0891CAF0;
L_0891CAF0:;
    goto L_0891CAA4;
}

/* 0891CAF8 */
float func_0891CAF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0891CAF8:;
    sp = sp - 32;
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    t_ = v1;
    s2 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891CB1C;
L_0891CB1C:;
    a0 = LD32(s2+28);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0891CC0C; }
    goto L_0891CB28;
L_0891CB28:;
    a1 = LD32(s2+144);
    goto L_0891CB2C;
L_0891CB2C:;
    a0 = D_08B28DD8 - (-29224);
    a0 = a0 - 29224;
    a2 = 1;
    v0 = func_08AABDC8(a0, a1, a2);
    goto L_0891CB3C;
L_0891CB3C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2+8); goto L_0891CBB0; }
    goto L_0891CB44;
L_0891CB44:;
    v1 = LD_U16(v0+8);
    v0 = 58;
    cnd_ = v1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0891CBC8; }
    goto L_0891CB54;
L_0891CB54:;
    s1 = LD32(s2+16);
    goto L_0891CB58;
L_0891CB58:;
    cnd_ = s1 == 0;
    if (cnd_) { v0 = LD32(s2+8); goto L_0891CBB0; }
    goto L_0891CB60;
L_0891CB60:;
    a1 = s1 + 0;
    a0 = s2 + 0;
    s0 = LD32(s1+8);
    v0 = func_089224D8(a0, a1);
    goto L_0891CB70;
L_0891CB70:;
    a0 = s1 + 0;
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891CB78;
L_0891CB78:;
    v1 = LD32(s2);
    s0 = (s0 >> 4) & 0x1;
    a1 = s1 + 0;
    v0 = LD32(v1+64);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891CB90;
L_0891CB90:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD32(s2+8); goto L_0891CBB0; }
    goto L_0891CB98;
L_0891CB98:;
    goto L_0891CB9C;
L_0891CB9C:;
    sp = sp + 32;
    return f0;
L_0891CBB0:;
    a0 = s2 + 0;
    v0 = v0 | 0x10;
    ST32(s2+8, v0);
    func_0891CA18(a0);
    goto L_0891CBC0;
L_0891CBC0:;
    goto L_0891CB9C;
L_0891CBC8:;
    a0 = 65;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0891CBD8;
L_0891CBD8:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_0891CB54; }
    goto L_0891CBE0;
L_0891CBE0:;
    v0 = LD32(s2+144);
    v1 = LD32(s2+24);
    a0 = a3 + 0;
    ST32(a3, v0);
    a1 = 1;
    a2 = 1;
    v0 = LD32(v1+4);
    ST32(a3+4, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891CC04;
L_0891CC04:;
    s1 = LD32(s2+16);
    goto L_0891CB58;
L_0891CC0C:;
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891CC18;
L_0891CC18:;
    a1 = v0 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891CC24;
L_0891CC24:;
    a0 = s2 + 0;
    a1 = sp + 0;
    func_0891DCA0(a0, a1);
    goto L_0891CC30;
L_0891CC30:;
    a1 = LD32(s2+144);
    goto L_0891CB2C;
}

/* 0891CC38 */
void func_0891CC38(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891CC38:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+40);
    func_08855C24(a0);
    goto L_0891CC50;
L_0891CC50:;
    a0 = s0 + 0;
    func_0891D48C(a0);
    goto L_0891CC58;
L_0891CC58:;
    v0 = LD32(s0+48);
    a1 = LD32(s0+40);
    ST32(s0+60, 0);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(s0+48, v0);
    v0 = 7;
    v1 = LD_U16(a1+8);
    ST32(s0+32, v0);
    v0 = 58;
    cnd_ = v1 == v0;
    ST32(s0+64, 0);
    if (cnd_) { goto L_0891CC94; }
    goto L_0891CC84;
L_0891CC84:;
    goto L_0891CC88;
L_0891CC88:;
    sp = sp + 16;
    return;
L_0891CC94:;
    v0 = LD32(s0+24);
    a0 = LD32(a1+168);
    v1 = LD32(v0+4);
    cnd_ = a0 != v1;
    if (cnd_) { goto L_0891CC88; }
    goto L_0891CCA8;
L_0891CCA8:;
    v0 = 999;
    ST32(a1+168, v0);
    goto L_0891CC88;
}

/* 0891CCB4 */
void func_0891CCB4(u32 a0)
{
    u32 v0 = 0;
L_0891CCB4:;
    v0 = 7;
    ST32(a0+32, v0);
    ST32(a0+60, 0);
    ST32(a0+64, 0);
    return;
}

/* 0891CCC8 */
float func_0891CCC8(u32 a0)
{
    u32 v0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891CCC8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+40);
    f0 = func_08857054(a0);
    goto L_0891CCE0;
L_0891CCE0:;
    v0 = 7;
    ST32(s0+32, v0);
    ST32(s0+60, FBITS(f0));
    ST32(s0+64, 0);
    sp = sp + 16;
    return f0;
}

/* 0891CD00 */
void func_0891CD00(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_0891CD00:;
    v0 = LD32(a0+48);
    v1 = LD32(a0+196);
    v0 = (v0 & ~(0x1u << 8)) | ((0 & 0x1) << 8);
    ST32(a0+32, v1);
    ST32(a0+48, v0);
    return;
}

/* 0891CD18 */
u32 func_0891CD18(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0891CD18:;
    sp = sp - 64;
    s5 = 0 + 0;
    s3 = 0 + 0;
    s1 = a0 + 0;
    s0 = 999;
    a1 = LD32(a0+156);
    cnd_ = a1 == s0;
    ST32(sp, s0);
    if (cnd_) { goto L_0891CDE0; }
    goto L_0891CD5C;
L_0891CD5C:;
    a0 = LD32(a0+40);
    a2 = sp + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_089217C8(a0, a1, a2, a3, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891CD6C;
L_0891CD6C:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0891CDD8; }
    goto L_0891CD74;
L_0891CD74:;
    a1 = LD32(sp);
    a0 = D_08B28DF8 - (-29192);
    a0 = a0 - 29192;
    a2 = 1;
    v0 = func_08ABB488(a0, a1, a2);
    goto L_0891CD88;
L_0891CD88:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0891CDA4; }
    goto L_0891CD90;
L_0891CD90:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    v0 = func_0891CFB4(a0, a1);
    goto L_0891CD9C;
L_0891CD9C:;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_0891CDA8; }
    goto L_0891CDA4;
L_0891CDA4:;
    a1 = 0 + 0;
    goto L_0891CDA8;
L_0891CDA8:;
    v0 = a1 + 0;
    sp = sp + 64;
    return v0;
L_0891CDD8:;
    ST32(s1+156, s0);
    goto L_0891CDA8;
L_0891CDE0:;
    a3 = LD32(a0+40);
    s7 = 999;
    s2 = 0 + 0;
    v0 = LD32(a3+28);
    v0 = (v0 >> 4) & 0xff;
    cnd_ = v0 == 0;
    v1 = a3 + 0;
    if (cnd_) { goto L_0891CDA4; }
    goto L_0891CDFC;
L_0891CDFC:;
    s4 = D_08B28DF8 - (-29192);
    s6 = 1;
    goto L_0891CE04;
L_0891CE04:;
    v0 = LD32(v1+44);
    v1 = s2 << 2;
    a0 = s4 - 29192;
    v1 = v1 + v0;
    a1 = LD32(v1);
    a2 = 1;
    v0 = func_08ABB488(a0, a1, a2);
    goto L_0891CE20;
L_0891CE20:;
    s0 = v0 + 0;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0891CE68; }
    goto L_0891CE30;
L_0891CE30:;
    v0 = func_0891CFB4(a0, a1);
    goto L_0891CE38;
L_0891CE38:;
    cnd_ = v0 == 0;
    v1 = s6 << (s2 & 31);
    if (cnd_) { goto L_0891CE68; }
    goto L_0891CE40;
L_0891CE40:;
    v0 = LD32(s0+48);
    s5 = s5 | v1;
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 != 0;
    s3 = s3 + 1;
    if (cnd_) { goto L_0891CE64; }
    goto L_0891CE54;
L_0891CE54:;
    v0 = LD32(s0+128);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a3 = LD32(s1+40); goto L_0891CE6C; }
    goto L_0891CE64;
L_0891CE64:;
    s7 = LD32(s0+4);
    goto L_0891CE68;
L_0891CE68:;
    a3 = LD32(s1+40);
    goto L_0891CE6C;
L_0891CE6C:;
    s2 = s2 + 1;
    v0 = LD32(a3+28);
    v0 = (v0 >> 4) & 0xff;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    v1 = a3 + 0;
    if (cnd_) { goto L_0891CE04; }
    goto L_0891CE84;
L_0891CE84:;
    cnd_ = s3 == 0;
    v0 = 999;
    if (cnd_) { goto L_0891CDA4; }
    goto L_0891CE8C;
L_0891CE8C:;
    cnd_ = s7 == v0;
    if (cnd_) { a1 = D_08B25AC0 - (23232); goto L_0891CEB0; }
    goto L_0891CE94;
L_0891CE94:;
    a0 = D_08B28DF8 - (-29192);
    goto L_0891CE98;
L_0891CE98:;
    a1 = s7 + 0;
    a0 = a0 - 29192;
    a2 = 1;
    v0 = func_08ABB488(a0, a1, a2);
    goto L_0891CEA8;
L_0891CEA8:;
    a1 = v0 + 0;
    goto L_0891CDA8;
L_0891CEB0:;
    v0 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    { u32 x_ = v1, y_ = s3; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = a0 + v0;
    ST32(a2+4, a0);
    a2 = 0 + 0;
    ST32(a1+23232, v0);
    a1 = LD32(a3+28);
    v0 = (a1 >> 4) & 0xff;
    v1 = hi;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0891CE94; }
    goto L_0891CEF8;
L_0891CEF8:;
    a1 = v0 + 0;
    t0 = 1;
    v0 = t0 << (a0 & 31);
    goto L_0891CF04;
L_0891CF04:;
    v0 = s5 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = a0 + 1; goto L_0891CF1C; }
    goto L_0891CF10;
L_0891CF10:;
    cnd_ = v1 == a2;
    a2 = a2 + 1;
    if (cnd_) { goto L_0891CF30; }
    goto L_0891CF18;
L_0891CF18:;
    a0 = a0 + 1;
    goto L_0891CF1C;
L_0891CF1C:;
    v0 = a0 < a1;
    cnd_ = v0 != 0;
    v0 = t0 << (a0 & 31);
    if (cnd_) { goto L_0891CF04; }
    goto L_0891CF28;
L_0891CF28:;
    a0 = D_08B28DF8 - (-29192);
    goto L_0891CE98;
L_0891CF30:;
    v1 = LD32(a3+44);
    v0 = a0 << 2;
    v0 = v0 + v1;
    s7 = LD32(v0);
    goto L_0891CE94;
}

/* 0891CF44 */
void func_0891CF44(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891CF44:;
    sp = sp - 16;
    a3 = a1 + 0;
    s0 = a0 + 0;
    a2 = 1;
    v0 = LD32(a1+128);
    v1 = LD32(a0+48);
    v0 = v0 & 0x1;
    v1 = (v1 & ~(0x1u << 9)) | ((v0 & 0x1) << 9);
    a1 = v1 & 0x200;
    cnd_ = a1 == 0;
    ST32(a0+48, v1);
    if (cnd_) { goto L_0891CF90; }
    goto L_0891CF78;
L_0891CF78:;
    func_0891D4F0(a0);
    goto L_0891CF80;
L_0891CF80:;
    goto L_0891CF84;
L_0891CF84:;
    sp = sp + 16;
    return;
L_0891CF90:;
    a1 = LD32(a3+80);
    a0 = D_08B28DD8 - (-29224);
    a0 = a0 - 29224;
    v0 = func_08AABDC8(a0, a1, a2);
    goto L_0891CFA0;
L_0891CFA0:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    func_0891D554(a0, a1);
    goto L_0891CFAC;
L_0891CFAC:;
    goto L_0891CF84;
}

/* 0891CFB4 */
u32 func_0891CFB4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891CFB4:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = D_08B28DD8 - (-29224);
    a2 = 1;
    s0 = a1 + 0;
    a0 = a0 - 29224;
    v0 = LD32(a1+48);
    v0 = v0 ^ 0x1;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0891D004; }
    goto L_0891CFEC;
L_0891CFEC:;
    goto L_0891CFF0;
L_0891CFF0:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
L_0891D004:;
    a1 = LD32(s0+80);
    v0 = func_08AABDC8(a0, a1, a2);
    goto L_0891D00C;
L_0891D00C:;
    v1 = v0 + 0;
    v0 = LD32(v0+104);
    v0 = (v0 >> 5) & 0x1;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0891D030; }
    goto L_0891D020;
L_0891D020:;
    v1 = LD32(v1+4);
    v0 = LD32(s1+148);
    cnd_ = v1 != v0;
    if (cnd_) { goto L_0891CFF0; }
    goto L_0891D030;
L_0891D030:;
    v0 = LD32(s0+48);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0891D050; }
    goto L_0891D040;
L_0891D040:;
    v1 = LD32(s0+4);
    v0 = LD32(s1+152);
    cnd_ = v1 != v0;
    if (cnd_) { goto L_0891CFF0; }
    goto L_0891D050;
L_0891D050:;
    v0 = LD32(s0+128);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0891D068; }
    goto L_0891D060;
L_0891D060:;
    a1 = 1;
    goto L_0891CFEC;
L_0891D068:;
    v1 = LD32(s1);
    v0 = LD32(v1+88);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891D078;
L_0891D078:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0891CFEC; }
    goto L_0891D080;
L_0891D080:;
    a1 = 1;
    goto L_0891CFEC;
}

/* 0891D088 */
u32 func_0891D088(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891D088:;
    sp = sp - 16;
    s0 = a1 + 0;
    v0 = LD32(a0+48);
    a1 = v0 & 0x9;
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0891D0D8; }
    goto L_0891D0AC;
L_0891D0AC:;
    cnd_ = a1 != 0;
    v0 = 999;
    if (cnd_) { goto L_0891D0C0; }
    goto L_0891D0B4;
L_0891D0B4:;
    v1 = LD32(a0+156);
    cnd_ = v1 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0891D0D8; }
    goto L_0891D0C0;
L_0891D0C0:;
    v0 = func_0891CD18(a0, t1, t2, t3);
    goto L_0891D0C8;
L_0891D0C8:;
    ST32(s0, v0);
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_0891D0D8; }
    goto L_0891D0D4;
L_0891D0D4:;
    v1 = 0 + 0;
    goto L_0891D0D8;
L_0891D0D8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 0891D0EC */
u32 func_0891D0EC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891D0EC:;
    sp = sp - 16;
    a2 = 0 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v1 = LD32(a0+40);
    v0 = LD32(v1+28);
    v0 = (v0 >> 4) & 0xff;
    cnd_ = v0 != 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_0891D134; }
    goto L_0891D11C;
L_0891D11C:;
    goto L_0891D120;
L_0891D120:;
    v0 = a2 + 0;
    sp = sp + 16;
    return v0;
L_0891D134:;
    v0 = func_0891CFB4(a0, a1);
    goto L_0891D13C;
L_0891D13C:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0891D164; }
    goto L_0891D144;
L_0891D144:;
    v0 = LD32(s0+48);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0891D164; }
    goto L_0891D154;
L_0891D154:;
    v1 = LD32(s0+156);
    v0 = 999;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0891D120; }
    goto L_0891D164;
L_0891D164:;
    v0 = func_0891CD18(a0, 0, 0, 0);
    goto L_0891D16C;
L_0891D16C:;
    ST32(s1, v0);
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0891D11C; }
    goto L_0891D17C;
L_0891D17C:;
    func_0891D4F0(a0);
    goto L_0891D184;
L_0891D184:;
    a1 = LD32(s1);
    a0 = s0 + 0;
    func_0891CF44(a0, a1);
    goto L_0891D190;
L_0891D190:;
    a2 = 1;
    goto L_0891D11C;
}

/* 0891D198 */
rv_t func_0891D198(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891D198:;
    sp = sp - 16;
    a2 = LD32(a0+48);
    v0 = a2 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0891D20C; }
    goto L_0891D1B4;
L_0891D1B4:;
    a1 = LD32(a0+44);
    v1 = LD32(a1+28);
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_0891D210; }
    goto L_0891D1C8;
L_0891D1C8:;
    v0 = v1 << 2;
    v1 = D_08AD96BC - (-26948);
    v1 = v1 - 26948;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0891D1E4u: goto L_0891D1E4; case 0x0891D20Cu: goto L_0891D20C; case 0x0891D21Cu: goto L_0891D21C; case 0x0891D244u: goto L_0891D244; case 0x0891D25Cu: goto L_0891D25C; case 0x0891D29Cu: goto L_0891D29C; default: rs_break(0, 0x0891d1dc); }
L_0891D1E4:;
    f0 = BITSF(LD32(s0+52));
    f1 = BITSF(LD32(s0+36));
    f2 = BITSF(0);
    f0 = f0 - f1;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    ST32(s0+52, FBITS(f0));
    if (cnd_) { goto L_0891D20C; }
    goto L_0891D204;
L_0891D204:;
    v0 = a2 | 0x1;
    goto L_0891D208;
L_0891D208:;
    ST32(s0+48, v0);
    goto L_0891D20C;
L_0891D20C:;
    goto L_0891D210;
L_0891D210:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0891D21C:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+68);
    goto L_0891D228;
L_0891D228:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891D230;
L_0891D230:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0891D210; }
    goto L_0891D238;
L_0891D238:;
    v0 = LD32(s0+48);
    goto L_0891D23C;
L_0891D23C:;
    v0 = v0 | 0x1;
    goto L_0891D208;
L_0891D244:;
    v1 = LD32(s0+160);
    v0 = 4;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_0891D210; }
    goto L_0891D254;
L_0891D254:;
    v0 = a2 | 0x1;
    goto L_0891D208;
L_0891D25C:;
    a1 = LD32(a1+40);
    v0 = 999;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_0891D210; }
    goto L_0891D26C;
L_0891D26C:;
    v1 = LD32(s0);
    v0 = LD32(v1+132);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891D27C;
L_0891D27C:;
    v0 = LD32(s0+44);
    f1 = BITSF(LD32(v0+36));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0891D210; }
    goto L_0891D294;
L_0891D294:;
    v0 = LD32(s0+48);
    goto L_0891D23C;
L_0891D29C:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+72);
    goto L_0891D228;
}

/* 0891D2AC */
void func_0891D2AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891D2AC:;
    sp = sp - 16;
    v1 = LD32(a0);
    s1 = LD32(a0+44);
    ST32(a0+44, a1);
    v0 = LD32(v1+144);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891D2D4;
L_0891D2D4:;
    ST32(s0+44, s1);
    sp = sp + 16;
    return;
}

/* 0891D2EC */
rv_t func_0891D2EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0891D2EC:;
    return (rv_t){ v0, v1, f0 };
}

/* 0891D2F4 */
void func_0891D2F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891D2F4:;
    sp = sp - 16;
    v0 = 1;
    s1 = LD32(a0+40);
    v1 = LD32(s1+148);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0891D3D0; }
    goto L_0891D318;
L_0891D318:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(a0+48); goto L_0891D3C8; }
    goto L_0891D320;
L_0891D320:;
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_0891D3A8; }
    goto L_0891D32C;
L_0891D32C:;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(s1+152); goto L_0891D368; }
    goto L_0891D334;
L_0891D334:;
    v1 = LD32(s0);
    goto L_0891D338;
L_0891D338:;
    v0 = LD32(v1+56);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891D344;
L_0891D344:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0891D358; }
    goto L_0891D34C;
L_0891D34C:;
    v0 = LD32(s0+48);
    v0 = v0 | 0x40;
    ST32(s0+48, v0);
    goto L_0891D358;
L_0891D358:;
    sp = sp + 16;
    return;
L_0891D368:;
    v0 = 999;
    cnd_ = a1 == v0;
    if (cnd_) { v1 = LD32(s0); goto L_0891D338; }
    goto L_0891D374;
L_0891D374:;
    v1 = LD32(a0);
    v0 = LD32(v1+132);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891D384;
L_0891D384:;
    f1 = BITSF(LD32(s1+156));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0); goto L_0891D338; }
    goto L_0891D398;
L_0891D398:;
    v0 = LD32(s0+48);
    v0 = v0 | 0x40;
    goto L_0891D3A0;
L_0891D3A0:;
    ST32(s0+48, v0);
    goto L_0891D334;
L_0891D3A8:;
    v1 = LD32(a0);
    v0 = LD32(v1+72);
    goto L_0891D3B0;
L_0891D3B0:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891D3B8;
L_0891D3B8:;
    v1 = LD32(s0+48);
    v1 = (v1 & ~(0x1u << 6)) | ((v0 & 0x1) << 6);
    ST32(s0+48, v1);
    goto L_0891D334;
L_0891D3C8:;
    v0 = (v0 & ~(0x1u << 6)) | ((0 & 0x1) << 6);
    goto L_0891D3A0;
L_0891D3D0:;
    v1 = LD32(a0);
    v0 = LD32(v1+68);
    goto L_0891D3B0;
}

/* 0891D3DC */
u32 func_0891D3DC(u32 a0)
{
    u32 v0 = 0;
L_0891D3DC:;
    v0 = LD32(a0+176);
    v0 = v0 < 0x1u;
    return v0;
}

/* 0891D3E8 */
u32 func_0891D3E8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891D3E8:;
    sp = sp - 16;
    s1 = 0 + 0;
    v1 = LD32(a0+40);
    v0 = LD32(v1+28);
    v0 = (v0 >> 4) & 0xff;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0891D46C; }
    goto L_0891D414;
L_0891D414:;
    s2 = D_08B28DF8 - (-29192);
    v1 = LD32(v1+44);
    goto L_0891D41C;
L_0891D41C:;
    v0 = s1 << 2;
    a0 = s2 - 29192;
    v0 = v0 + v1;
    a1 = LD32(v0);
    a2 = 1;
    s1 = s1 + 1;
    v0 = func_08ABB488(a0, a1, a2);
    goto L_0891D438;
L_0891D438:;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0891D454; }
    goto L_0891D444;
L_0891D444:;
    v0 = func_0891CFB4(a0, a1);
    goto L_0891D44C;
L_0891D44C:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0891D470; }
    goto L_0891D454;
L_0891D454:;
    v1 = LD32(s0+40);
    v0 = LD32(v1+28);
    v0 = (v0 >> 4) & 0xff;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+44); goto L_0891D41C; }
    goto L_0891D46C;
L_0891D46C:;
    v1 = 1;
    goto L_0891D470;
L_0891D470:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 0891D48C */
void func_0891D48C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891D48C:;
    sp = sp - 16;
    s1 = 999;
    a2 = 1;
    s0 = a0 + 0;
    v0 = LD32(a0+144);
    a0 = D_08B28DD8 - (-29224);
    a0 = a0 - 29224;
    cnd_ = v0 == s1;
    a1 = v0 + 0;
    if (cnd_) { goto L_0891D4DC; }
    goto L_0891D4BC;
L_0891D4BC:;
    v0 = func_08AABDC8(a0, a1, a2);
    goto L_0891D4C4;
L_0891D4C4:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0891D4D8; }
    goto L_0891D4CC;
L_0891D4CC:;
    v0 = LD32(v0+104);
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    ST32(v1+104, v0);
    goto L_0891D4D8;
L_0891D4D8:;
    ST32(s0+144, s1);
    goto L_0891D4DC;
L_0891D4DC:;
    sp = sp + 16;
    return;
}

/* 0891D4F0 */
void func_0891D4F0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891D4F0:;
    sp = sp - 16;
    s1 = 999;
    a2 = 1;
    s0 = a0 + 0;
    v0 = LD32(a0+148);
    a0 = D_08B28DD8 - (-29224);
    a0 = a0 - 29224;
    cnd_ = v0 == s1;
    a1 = v0 + 0;
    if (cnd_) { goto L_0891D540; }
    goto L_0891D520;
L_0891D520:;
    v0 = func_08AABDC8(a0, a1, a2);
    goto L_0891D528;
L_0891D528:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0891D53C; }
    goto L_0891D530;
L_0891D530:;
    v0 = LD32(v0+104);
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    ST32(v1+104, v0);
    goto L_0891D53C;
L_0891D53C:;
    ST32(s0+148, s1);
    goto L_0891D540;
L_0891D540:;
    sp = sp + 16;
    return;
}

/* 0891D554 */
void func_0891D554(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891D554:;
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = a0 + 0;
    func_0891D4F0(a0);
    goto L_0891D570;
L_0891D570:;
    v1 = LD32(s0+4);
    ST32(s1+148, v1);
    v0 = LD32(s0+104);
    v0 = v0 | 0x20;
    ST32(s0+104, v0);
    sp = sp + 16;
    return;
}

/* 0891D598 */
void func_0891D598(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891D598:;
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = a0 + 0;
    func_0891D48C(a0);
    goto L_0891D5B4;
L_0891D5B4:;
    v0 = LD32(s0+104);
    v1 = LD32(s0+4);
    v0 = v0 | 0x20;
    ST32(s0+104, v0);
    ST32(s1+144, v1);
    sp = sp + 16;
    return;
}

/* 0891D5DC */
u32 func_0891D5DC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_0891D5DC:;
    v0 = LD32(a0+48);
    v0 = v0 & 0x44;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0891D604; }
    goto L_0891D5EC;
L_0891D5EC:;
    v1 = LD32(a0+160);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = 1; goto L_0891D5FC; }
    goto L_0891D5FC;
L_0891D5FC:;
    v0 = a1 + 0;
    return v0;
L_0891D604:;
    a1 = 1;
    goto L_0891D5FC;
}

/* 0891D60C */
void func_0891D60C(u32 a0)
{
    u32 v0 = 0;
L_0891D60C:;
    v0 = LD32(a0+48);
    v0 = v0 | 0x4;
    ST32(a0+48, v0);
    return;
}

/* 0891D61C */
void func_0891D61C(u32 a0)
{
    u32 v0 = 0;
L_0891D61C:;
    v0 = LD32(a0+48);
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST32(a0+48, v0);
    return;
}

/* 0891D62C */
void func_0891D62C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891D62C:;
    sp = sp - 16;
    v1 = (u32)-138;
    v0 = LD32(a0+48);
    ST32(a0+40, a1);
    v0 = v0 & v1;
    ST32(a0+48, v0);
    v0 = 60;
    v1 = LD_U16(a1+8);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0891D7D8; }
    goto L_0891D65C;
L_0891D65C:;
    v0 = a1 + 60;
    goto L_0891D660;
L_0891D660:;
    if (a1 == 0) v0 = 0;
    ST32(s0+44, v0);
    a2 = LD32(s0+44);
    v1 = LD32(a2+4);
    v0 = v1 & 0x20;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0891D684; }
    goto L_0891D67C;
L_0891D67C:;
    v0 = v1 & 0x80;
    a0 = v0 < 0x1u;
    goto L_0891D684;
L_0891D684:;
    v0 = LD32(s0+48);
    v0 = (v0 & ~(0x1u << 4)) | ((a0 & 0x1) << 4);
    ST32(s0+48, v0);
    a3 = D_08B25AC0 - (23232);
    t0 = a3 + 23232;
    v0 = LD32(a3+23232);
    a0 = LD32(t0+4);
    f3 = BITSF(LD32(a2+16));
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    f0 = BITSF(v1);
    v1 = D_08AED368 - (-11416);
    f1 = BITSF(LD32(a2+20));
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v1-11416));
    a0 = a0 + v0;
    ST32(t0+4, a0);
    f1 = f1 - f3;
    f2 = f2 * f0;
    ST32(a3+23232, v0);
    v1 = LD32(s0+48);
    f2 = f2 * f1;
    a0 = LD32(s0+156);
    v1 = (v1 & ~(0x1u << 6)) | ((0 & 0x1) << 6);
    ST32(s0+48, v1);
    f3 = f3 + f2;
    v0 = LD32(a1+4);
    ST32(s0+68, 0);
    cnd_ = a0 == v0;
    ST32(s0+52, FBITS(f3));
    if (cnd_) { goto L_0891D7CC; }
    goto L_0891D708;
L_0891D708:;
    v0 = LD32(a2+4);
    v1 = (v0 >> 1) & 0x1;
    a1 = v0 & 0x1;
    cnd_ = a1 == v1;
    a0 = s0 + 0;
    if (cnd_) { goto L_0891D768; }
    goto L_0891D71C;
L_0891D71C:;
    v1 = LD32(s0);
    goto L_0891D720;
L_0891D720:;
    v0 = LD32(v1+116);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891D72C;
L_0891D72C:;
    a2 = LD32(s0+44);
    v0 = LD32(s0);
    goto L_0891D734;
L_0891D734:;
    a1 = LD32(a2+4);
    a0 = s0 + 0;
    v1 = LD32(v0+136);
    t_ = v1;
    a1 = (a1 >> 3) & 0x1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891D748;
L_0891D748:;
    v0 = LD32(s0+44);
    a0 = s0 + 0;
    a1 = LD32(v0+24);
    func_0891EF34(a0, a1);
    goto L_0891D758;
L_0891D758:;
    sp = sp + 16;
    return;
L_0891D768:;
    v0 = LD32(a3+23232);
    a0 = LD32(t0+4);
    a1 = 3;
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    { u32 x_ = v1, y_ = a1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = a0 + v0;
    ST32(t0+4, a0);
    v1 = hi;
    cnd_ = v1 == 0;
    ST32(a3+23232, v0);
    if (cnd_) { goto L_0891D7BC; }
    goto L_0891D7A0;
L_0891D7A0:;
    v0 = 1;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(s0); goto L_0891D734; }
    goto L_0891D7AC;
L_0891D7AC:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = 0 + 0;
    goto L_0891D720;
L_0891D7BC:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = 1;
    goto L_0891D720;
L_0891D7CC:;
    v0 = 999;
    ST32(s0+156, v0);
    goto L_0891D708;
L_0891D7D8:;
    v0 = a1 + 84;
    goto L_0891D660;
}

/* 0891D7E0 */
void func_0891D7E0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891D7E0:;
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = a0 + 0;
    func_0891D61C(a0);
    goto L_0891D7FC;
L_0891D7FC:;
    a0 = s1 + 0;
    v0 = LD32(s0+48);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_0891D82C; }
    goto L_0891D810;
L_0891D810:;
    v1 = LD32(s0+72);
    ST32(s1+152, v1);
    v0 = LD32(s0+48);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 == 0;
    v0 = 999;
    if (cnd_) { goto L_0891D82C; }
    goto L_0891D828;
L_0891D828:;
    ST32(s1+152, v0);
    goto L_0891D82C;
L_0891D82C:;
    func_0891D62C(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891D834;
L_0891D834:;
    sp = sp + 16;
    return;
}

/* 0891D848 */
void func_0891D848(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_0891D848:;
    sp = sp - 144;
    v0 = D_08B285A4 - (-31324);
    f20 = BITSF(0);
    f0 = BITSF(LD32(v0-31324));
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    s1 = a0 + 0;
    if (cnd_) { goto L_0891D8A0; }
    goto L_0891D880;
L_0891D880:;
    goto L_0891D884;
L_0891D884:;
    sp = sp + 144;
    return;
L_0891D8A0:;
    v1 = LD32(a0);
    v0 = LD32(v1+56);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891D8B0;
L_0891D8B0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0891D884; }
    goto L_0891D8B8;
L_0891D8B8:;
    v0 = LD32(s1+160);
    v1 = 5;
    cnd_ = v0 == v1;
    if (cnd_) { v0 = LD32(s1+40); goto L_0891DAA0; }
    goto L_0891D8C8;
L_0891D8C8:;
    v0 = LD32(s1+32);
    cnd_ = v0 == v1;
    if (cnd_) { v1 = LD32(s1); goto L_0891D8F0; }
    goto L_0891D8D4;
L_0891D8D4:;
    a0 = s1 + 0;
    func_0891D2F4(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891D8DC;
L_0891D8DC:;
    a0 = s1 + 0;
    v0 = func_0891D5DC(a0);
    goto L_0891D8E4;
L_0891D8E4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0891D884; }
    goto L_0891D8EC;
L_0891D8EC:;
    v1 = LD32(s1);
    goto L_0891D8F0;
L_0891D8F0:;
    a0 = s1 + 0;
    v0 = LD32(v1+92);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891D900;
L_0891D900:;
    v1 = D_08AED36C - (-11412);
    f0 = BITSF(LD32(v1-11412));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    ST32(sp+64, FBITS(f0));
    if (cnd_) { goto L_0891D96C; }
    goto L_0891D918;
L_0891D918:;
    s0 = 3;
    s2 = 4;
    s3 = 5;
    v0 = LD32(s1+32);
    goto L_0891D928;
L_0891D928:;
    a0 = s1 + 0;
    cnd_ = v0 == s0;
    a1 = sp + 64;
    if (cnd_) { goto L_0891DA90; }
    goto L_0891D934;
L_0891D934:;
    cnd_ = v0 == s2;
    if (cnd_) { goto L_0891DA80; }
    goto L_0891D93C;
L_0891D93C:;
    cnd_ = v0 != s3;
    if (cnd_) { goto L_0891D96C; }
    goto L_0891D944;
L_0891D944:;
    func_0891E244(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891D94C;
L_0891D94C:;
    a0 = s1 + 0;
    v0 = func_0891D5DC(a0);
    goto L_0891D954;
L_0891D954:;
    cnd_ = v0 != 0;
    f0 = BITSF(LD32(sp+64));
    if (cnd_) { goto L_0891D96C; }
    goto L_0891D95C;
L_0891D95C:;
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s1+32); goto L_0891D928; }
    goto L_0891D96C;
L_0891D96C:;
    v0 = LD32(s1);
    a0 = s1 + 0;
    v1 = LD32(v0+92);
    t_ = v1;
    a1 = sp + 16;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891D980;
L_0891D980:;
    a0 = LD32(s1+32);
    v0 = 3;
    cnd_ = a0 == v0;
    if (cnd_) { v1 = LD32(s1+40); goto L_0891D9B0; }
    goto L_0891D990;
L_0891D990:;
    f5 = BITSF(LD32(sp+16));
    goto L_0891D994;
L_0891D994:;
    f4 = BITSF(LD32(sp+20));
    f3 = BITSF(LD32(sp+24));
    s0 = s1 + 128;
    goto L_0891D9A0;
L_0891D9A0:;
    ST32(s1+128, FBITS(f5));
    goto L_0891D9A4;
L_0891D9A4:;
    ST32(s0+8, FBITS(f3));
    ST32(s0+4, FBITS(f4));
    goto L_0891D880;
L_0891D9B0:;
    v0 = LD32(v1+128);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 != 0;
    f5 = BITSF(LD32(sp+16));
    if (cnd_) { goto L_0891D994; }
    goto L_0891D9C0;
L_0891D9C0:;
    s0 = s1 + 128;
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s1+128));
    f3 = BITSF(LD32(sp+24));
    ST32(sp+36, 0);
    f6 = f5 - f0;
    f2 = f3 - f1;
    f4 = BITSF(LD32(sp+20));
    ST32(sp+32, FBITS(f6));
    ST32(sp+40, FBITS(f2));
    v0 = LD32(v1+128);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 == 0;
    v1 = D_08AED370 - (-11408);
    if (cnd_) { goto L_0891DA20; }
    goto L_0891D9F8;
L_0891D9F8:;
    f0 = BITSF(LD32(sp+36));
    f1 = BITSF(FBITS(f6) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(sp+32, FBITS(f1));
    ST32(sp+36, FBITS(f0));
    ST32(sp+40, FBITS(f2));
    ST32(sp+48, FBITS(f1));
    ST32(sp+52, FBITS(f0));
    ST32(sp+56, FBITS(f2));
    goto L_0891DA20;
L_0891DA20:;
    f0 = BITSF(LD32(v1-11408));
    f2 = BITSF(LD32(s1+36));
    v0 = LD32(sp+32);
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f2 = f2 * f0;
    {v[0]=BITSF(v0);}
    v1 = LD32(sp+40);
    v0 = LD32(sp+36);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(s1+128, FBITS(f5)); goto L_0891D9A4; }
    goto L_0891DA64;
L_0891DA64:;
    a1 = sp + 32;
    a0 = s1 + 0;
    func_0891DAD4(a0, a1);
    goto L_0891DA70;
L_0891DA70:;
    f5 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(sp+20));
    f3 = BITSF(LD32(sp+24));
    goto L_0891D9A0;
L_0891DA80:;
    func_0891E104(a0, a1);
    goto L_0891DA88;
L_0891DA88:;
    goto L_0891D94C;
L_0891DA90:;
    func_0891DE74(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891DA98;
L_0891DA98:;
    goto L_0891D94C;
L_0891DAA0:;
    a0 = D_08B28DD8 - (-29224);
    a2 = 1;
    a1 = LD32(v0+80);
    a0 = a0 - 29224;
    v0 = func_08AABDC8(a0, a1, a2);
    goto L_0891DAB4;
L_0891DAB4:;
    s0 = v0 + 0;
    a0 = s1 + 0;
    func_0891CCB4(a0);
    goto L_0891DAC0;
L_0891DAC0:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    func_0891C654(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891DACC;
L_0891DACC:;
    goto L_0891D884;
}

/* 0891DAD4 */
void func_0891DAD4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891DAD4:;
    sp = sp - 16;
    v0 = D_08C25068 - (20584);
    v1 = D_08C25060 - (20576);
    s1 = v0 + 20584;
    v0 = (u32)(s32)LD_S8(v1+20576);
    s0 = a0 + 0;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0891DB08; }
    goto L_0891DB00;
L_0891DB00:;
    v0 = 1;
    ST8(v1+20576, v0);
    goto L_0891DB08;
L_0891DB08:;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891DB10;
L_0891DB10:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    func_0891DB30(a0, a1);
    goto L_0891DB1C;
L_0891DB1C:;
    sp = sp + 16;
    return;
}

/* 0891DB30 */
void func_0891DB30(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891DB30:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = a1 + 0;
    func_0891DB88(a0, a1);
    goto L_0891DB4C;
L_0891DB4C:;
    a0 = s0 + 0;
    v0 = LD32(s0+160);
    v0 = v0 - 2;
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0891DB78; }
    goto L_0891DB64;
L_0891DB64:;
    goto L_0891DB68;
L_0891DB68:;
    sp = sp + 16;
    return;
L_0891DB78:;
    func_0891DD34(a0, a1);
    goto L_0891DB80;
L_0891DB80:;
    goto L_0891DB68;
}

/* 0891DB88 */
void func_0891DB88(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
L_0891DB88:;
    v0 = LD32(a0+212);
    v0 = (s32)v0 < 2;
    cnd_ = v0 != 0;
    v1 = a0 + 216;
    if (cnd_) { goto L_0891DBA0; }
    goto L_0891DB98;
L_0891DB98:;
    return;
L_0891DBA0:;
    v0 = 1;
    ST32(a0+212, v0);
    f8 = BITSF(LD32(a1+32));
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    f3 = BITSF(LD32(a1+12));
    f4 = BITSF(LD32(a1+16));
    f5 = BITSF(LD32(a1+20));
    f6 = BITSF(LD32(a1+24));
    f7 = BITSF(LD32(a1+28));
    ST32(a0+216, FBITS(f0));
    ST32(v1+32, FBITS(f8));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    ST32(v1+12, FBITS(f3));
    ST32(v1+16, FBITS(f4));
    ST32(v1+20, FBITS(f5));
    ST32(v1+24, FBITS(f6));
    ST32(v1+28, FBITS(f7));
    return;
}

/* 0891DBF4 */
void func_0891DBF4(u32 a0, u32 a1)
{
    u32 v0 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    float *v = vfpu_v;
L_0891DBF4:;
    v0 = LD32(a0+212);
    v0 = (s32)v0 < 3;
    cnd_ = v0 == 0;
    v0 = 2;
    if (cnd_) { goto L_0891DC98; }
    goto L_0891DC04;
L_0891DC04:;
    ST32(a0+212, v0);
    {v[112]=BITSF(LD32(a1+(0)));}
    {v[113]=BITSF(LD32(a1+(4)));}
    {v[114]=BITSF(LD32(a1+(8)));}
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
    {ST32(a0+(216),FBITS(v[96]));}
    {ST32(a0+(220),FBITS(v[97]));}
    {ST32(a0+(224),FBITS(v[98]));}
    {ST32(a0+(228),FBITS(v[100]));}
    {ST32(a0+(232),FBITS(v[101]));}
    {ST32(a0+(236),FBITS(v[102]));}
    {ST32(a0+(240),FBITS(v[104]));}
    {ST32(a0+(244),FBITS(v[105]));}
    {ST32(a0+(248),FBITS(v[106]));}
    goto L_0891DC98;
L_0891DC98:;
    return;
}

/* 0891DCA0 */
void func_0891DCA0(u32 a0, u32 a1)
{
    u32 v0 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    float *v = vfpu_v;
L_0891DCA0:;
    v0 = LD32(a0+212);
    v0 = (s32)v0 < 3;
    cnd_ = v0 == 0;
    v0 = 2;
    if (cnd_) { goto L_0891DD2C; }
    goto L_0891DCB0;
L_0891DCB0:;
    ST32(a0+212, v0);
    {v[112]=BITSF(LD32(a1+(0)));}
    {v[113]=BITSF(LD32(a1+(4)));}
    {v[114]=BITSF(LD32(a1+(8)));}
    {v[115]=BITSF(LD32(a1+(12)));}
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
    {ST32(a0+(216),FBITS(v[96]));}
    {ST32(a0+(220),FBITS(v[97]));}
    {ST32(a0+(224),FBITS(v[98]));}
    {ST32(a0+(228),FBITS(v[100]));}
    {ST32(a0+(232),FBITS(v[101]));}
    {ST32(a0+(236),FBITS(v[102]));}
    {ST32(a0+(240),FBITS(v[104]));}
    {ST32(a0+(244),FBITS(v[105]));}
    {ST32(a0+(248),FBITS(v[106]));}
    goto L_0891DD2C;
L_0891DD2C:;
    return;
}

/* 0891DD34 */
void func_0891DD34(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
L_0891DD34:;
    v0 = LD32(a0+212);
    v0 = (s32)v0 < 4;
    cnd_ = v0 == 0;
    v1 = a0 + 216;
    if (cnd_) { goto L_0891DD94; }
    goto L_0891DD44;
L_0891DD44:;
    v0 = 3;
    ST32(a0+212, v0);
    f8 = BITSF(LD32(a1+32));
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    f3 = BITSF(LD32(a1+12));
    f4 = BITSF(LD32(a1+16));
    f5 = BITSF(LD32(a1+20));
    f6 = BITSF(LD32(a1+24));
    f7 = BITSF(LD32(a1+28));
    ST32(a0+216, FBITS(f0));
    ST32(v1+32, FBITS(f8));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    ST32(v1+12, FBITS(f3));
    ST32(v1+16, FBITS(f4));
    ST32(v1+20, FBITS(f5));
    ST32(v1+24, FBITS(f6));
    ST32(v1+28, FBITS(f7));
    goto L_0891DD94;
L_0891DD94:;
    return;
}

/* 0891DD9C */
float func_0891DD9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891DD9C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+80);
    t_ = v0;
    s1 = LD32(a0+40);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891DDC0;
L_0891DDC0:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0891DDEC; }
    goto L_0891DDC8;
L_0891DDC8:;
    v0 = LD32(s0);
    v1 = LD32(v0+84);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891DDD8;
L_0891DDD8:;
    sp = sp + 16;
    return f0;
L_0891DDEC:;
    v1 = LD32(s0);
    v0 = LD32(v1+88);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891DDFC;
L_0891DDFC:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0891DE68; }
    goto L_0891DE04;
L_0891DE04:;
    f12 = BITSF(LD32(s0+60));
    f0 = func_08856F7C(a0, f12);
    goto L_0891DE0C;
L_0891DE0C:;
    f1 = f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AED374 - (-11404);
    if (cnd_) { goto L_0891DE6C; }
    goto L_0891DE24;
L_0891DE24:;
    f0 = BITSF(LD32(v0-11404));
    v0 = D_08AED378 - (-11400);
    f2 = f0;
    f0 = BITSF(LD32(v0-11400));
    f0 = f0 / f1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f2; goto L_0891DDD8; }
    goto L_0891DE48;
L_0891DE48:;
    v0 = D_08AED37C - (-11396);
    f2 = BITSF(LD32(v0-11396));
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f2 = f0; goto L_0891DE60; }
    goto L_0891DE60;
L_0891DE60:;
    f0 = f2;
    goto L_0891DDD8;
L_0891DE68:;
    v0 = D_08AED374 - (-11404);
    goto L_0891DE6C;
L_0891DE6C:;
    f0 = BITSF(LD32(v0-11404));
    goto L_0891DDD8;
}

/* 0891DE74 */
void func_0891DE74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_0891DE74:;
    sp = sp - 160;
    s2 = a1 + 0;
    s1 = a0 + 0;
    f22 = BITSF(0);
    f23 = f22;
    s0 = LD32(a0+40);
    f0 = BITSF(LD32(a0+36));
    f1 = BITSF(LD32(a1));
    v0 = LD32(s0+128);
    v0 = (v0 >> 5) & 0x1;
    cnd_ = v0 == 0;
    f21 = f0 * f1;
    if (cnd_) { goto L_0891DED4; }
    goto L_0891DEC8;
L_0891DEC8:;
    v0 = LD32(a0+164);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0891E088; }
    goto L_0891DED4;
L_0891DED4:;
    a0 = s1 + 0;
    f0 = func_0891DD9C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0891DEDC;
L_0891DEDC:;
    f21 = f21 * f0;
    f12 = BITSF(LD32(s1+60));
    s3 = sp + 16;
    a0 = s0 + 0;
    f12 = f12 + f21;
    a1 = sp + 0;
    a2 = s3 + 0;
    f0 = func_08856E74(a0, a1, a2, f12);
    goto L_0891DEFC;
L_0891DEFC:;
    f23 = f0;
    goto L_0891DF00;
L_0891DF00:;
    v1 = LD32(s1);
    goto L_0891DF04;
L_0891DF04:;
    a2 = LD32(s0+88);
    a0 = s1 + 0;
    v0 = LD32(v1+96);
    a2 = (a2 >> 4) & 0x1;
    a2 = a2 ^ 0x1;
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891DF20;
L_0891DF20:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s2, 0); goto L_0891DF94; }
    goto L_0891DF28;
L_0891DF28:;
    v0 = LD32(s0+128);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = s3 + 0; goto L_0891DFE4; }
    goto L_0891DF38;
L_0891DF38:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f23, 12);
    cnd_ = !fcc;
    v0 = 3;
    if (cnd_) { goto L_0891DFC0; }
    goto L_0891DF4C;
L_0891DF4C:;
    v1 = LD32(s1+160);
    cnd_ = v1 == v0;
    a0 = D_08B28DD8 - (-29224);
    if (cnd_) { goto L_0891DFC0; }
    goto L_0891DF58;
L_0891DF58:;
    f1 = BITSF(LD32(s2));
    a1 = LD32(s0+80);
    f0 = f1 * f23;
    a2 = 1;
    a0 = a0 - 29224;
    f0 = f0 / f21;
    f1 = f1 - f0;
    ST32(s2, FBITS(f1));
    v0 = func_08AABDC8(a0, a1, a2);
    goto L_0891DF7C;
L_0891DF7C:;
    s0 = v0 + 0;
    a0 = s1 + 0;
    func_0891CCB4(a0);
    goto L_0891DF88;
L_0891DF88:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    func_0891C654(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891DF94;
L_0891DF94:;
    goto L_0891DF98;
L_0891DF98:;
    sp = sp + 160;
    return;
L_0891DFC0:;
    f0 = BITSF(LD32(s1+60));
    ST32(s1+64, FBITS(f22));
    a0 = s1 + 0;
    f0 = f0 + f21;
    ST32(s1+60, FBITS(f0));
    ST32(s2, 0);
    func_0891E520(a0);
    goto L_0891DFDC;
L_0891DFDC:;
    goto L_0891DF98;
L_0891DFE4:;
    a0 = s1 + 0;
    func_0891DCA0(a0, a1);
    goto L_0891DFEC;
L_0891DFEC:;
    v0 = LD32(s1+160);
    v0 = v0 - 2;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0891DF38; }
    goto L_0891E000;
L_0891E000:;
    a1 = sp + 48;
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
    func_0891DD34(a0, a1);
    goto L_0891E080;
L_0891E080:;
    goto L_0891DF38;
L_0891E088:;
    a1 = sp + 32;
    v1 = LD32(v0+112);
    t_ = v1;
    s3 = sp + 16;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891E098;
L_0891E098:;
    v0 = LD32(sp+32);
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+36);
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+40);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f2 = BITSF(LD32(s1+64));
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = s3 + 0;
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f20 = BITSF(v0);
    f1 = f0 * f21;
    f22 = f2 + f1;
    f12 = f22;
    f0 = func_08857F6C(a0, a1, a2, f12);
    goto L_0891E0E8;
L_0891E0E8:;
    fcc = FCMP(f23, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s1); goto L_0891DF04; }
    goto L_0891E0F8;
L_0891E0F8:;
    f0 = f22 - f0;
    f23 = f0 / f20;
    goto L_0891DF00;
}

/* 0891E104 */
void func_0891E104(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0891E104:;
    sp = sp - 80;
    s4 = 0 + 0;
    s3 = sp + 16;
    s2 = a1 + 0;
    s0 = a0 + 0;
    s1 = LD32(a0+40);
    a0 = s1 + 0;
    f0 = func_08856DD4(a0);
    goto L_0891E148;
L_0891E148:;
    f1 = BITSF(LD32(s0+36));
    f2 = BITSF(LD32(s0+56));
    f3 = BITSF(LD32(s0+72));
    f21 = f0 * f1;
    v0 = D_08AED380 - (-11392);
    a0 = s0 + 80;
    a1 = sp + 0;
    f20 = f21 + f2;
    fcc = FCMP(f3, f20, 12);
    cnd_ = !fcc;
    f22 = BITSF(LD32(v0-11392));
    if (cnd_) { goto L_0891E180; }
    goto L_0891E178;
L_0891E178:;
    f20 = f3;
    s4 = 1;
    goto L_0891E180;
L_0891E180:;
    f12 = f20 / f3;
    { rv_t r_ = func_088497D8(a0, a1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891E188;
L_0891E188:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+92);
    t_ = v0;
    a1 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891E19C;
L_0891E19C:;
    f0 = BITSF(LD32(sp));
    v1 = LD32(s0);
    a1 = s3 + 0;
    ST32(sp+16, FBITS(f0));
    a0 = s0 + 0;
    f0 = BITSF(LD32(sp+8));
    v0 = LD32(v1+96);
    ST32(sp+24, FBITS(f0));
    a2 = LD32(s1+88);
    a2 = (a2 >> 4) & 0x1;
    t_ = v0;
    a2 = a2 ^ 0x1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891E1CC;
L_0891E1CC:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s2, 0); goto L_0891E1E4; }
    goto L_0891E1D4;
L_0891E1D4:;
    cnd_ = s4 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0891E210; }
    goto L_0891E1DC;
L_0891E1DC:;
    ST32(s0+56, FBITS(f20));
    ST32(s2, 0);
    goto L_0891E1E4;
L_0891E1E4:;
    goto L_0891E1E8;
L_0891E1E8:;
    sp = sp + 80;
    return;
L_0891E210:;
    f0 = f22 / f21;
    f1 = BITSF(LD32(s0+56));
    f2 = BITSF(LD32(s2));
    f1 = f20 - f1;
    f1 = f1 * f0;
    f2 = f2 - f1;
    ST32(s2, FBITS(f2));
    f0 = func_0891CCC8(a0);
    goto L_0891E230;
L_0891E230:;
    a1 = LD32(s0+40);
    a0 = s0 + 0;
    func_0891C8E0(a0, a1);
    goto L_0891E23C;
L_0891E23C:;
    goto L_0891E1E8;
}

/* 0891E244 */
void func_0891E244(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_0891E244:;
    sp = sp - 96;
    s2 = a1 + 0;
    a1 = sp + 16;
    s1 = a0 + 0;
    s0 = a0 + 200;
    f0 = BITSF(LD32(a0+200));
    f2 = BITSF(LD32(s0+8));
    v1 = LD32(a0);
    f1 = BITSF(LD32(s0+4));
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    v0 = LD32(v1+92);
    t_ = v0;
    ST32(sp+4, FBITS(f1));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891E28C;
L_0891E28C:;
    f4 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    f7 = BITSF(LD32(sp+16));
    f8 = BITSF(LD32(sp+20));
    f5 = BITSF(LD32(sp+24));
    f4 = f4 - f7;
    f3 = f3 - f8;
    f2 = f2 - f5;
    {u32 a_=sp+(64);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    f6 = BITSF(0);
    {v[8]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[9]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[10]=BITSF(v0);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    a1 = s0 + 0;
    a0 = s1 + 0;
    fcc = FCMP(f0, f6, 2);
    a2 = 1;
    {float s0=v[0];float d0=sqrtf(s0);v[12]=d0;}
    ST32(sp, FBITS(f4));
    ST32(sp+4, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_0891E344; }
    goto L_0891E300;
L_0891E300:;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[12];float d0=s0/t0;v[0]=d0;}
    {v0=FBITS(v[12]);}
    f4 = BITSF(v0);
    f6 = f4;
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+40, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    goto L_0891E344;
L_0891E344:;
    v0 = D_08AED384 - (-11388);
    f0 = BITSF(LD32(s1+36));
    f1 = BITSF(LD32(v0-11388));
    f3 = f0 * f1;
    fcc = FCMP(f6, f3, 14);
    cnd_ = !fcc;
    f2 = BITSF(LD32(sp));
    if (cnd_) { goto L_0891E398; }
    goto L_0891E364;
L_0891E364:;
    v1 = LD32(s1);
    v0 = LD32(v1+96);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891E374;
L_0891E374:;
    a0 = s1 + 0;
    f0 = func_0891CA60(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891E37C;
L_0891E37C:;
    ST32(s2, 0);
    goto L_0891E380;
L_0891E380:;
    sp = sp + 96;
    return;
L_0891E398:;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f2 = f2 * f3;
    f1 = f1 * f3;
    f0 = f0 * f3;
    v1 = LD32(s1);
    f3 = f7 + f2;
    f4 = f8 + f1;
    f5 = f5 + f0;
    ST32(sp+48, FBITS(f2));
    a0 = s1 + 0;
    a1 = sp + 32;
    ST32(sp+32, FBITS(f3));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f0));
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f5));
    v0 = LD32(v1+96);
    t_ = v0;
    a2 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891E3E8;
L_0891E3E8:;
    ST32(s2, 0);
    goto L_0891E380;
}

/* 0891E3F0 */
u32 func_0891E3F0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    float f0 = 0, f12 = 0, f20 = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_0891E3F0:;
    sp = sp - 112;
    v0 = D_08AED388 - (-11384);
    a2 = sp + 64;
    a3 = 999;
    t0 = 0 + 0;
    t1 = 8;
    s0 = a1 + 0;
    f20 = BITSF(LD32(v0-11384));
    v0 = D_08AED38C - (-11380);
    f12 = BITSF(LD32(v0-11380));
    a1 = a0 + 0;
    a0 = sp + 0;
    ST32(sp+64, 0);
    ST32(sp+68, FBITS(f20));
    ST32(sp+72, 0);
    func_0883506C(a0, a1, a2, a3, t0, t1, f12);
    goto L_0891E43C;
L_0891E43C:;
    a0 = sp + 0;
    f0 = BITSF(LD32(sp+4));
    f0 = f0 - f20;
    ST32(sp+4, FBITS(f0));
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891E450;
L_0891E450:;
    v1 = v0 + 0;
    v0 = LD_U8(v0+32);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0891E470; }
    goto L_0891E460;
L_0891E460:;
    f0 = BITSF(LD32(v1));
    a0 = 1;
    f0 = f0 - f20;
    ST32(s0, FBITS(f0));
    goto L_0891E470;
L_0891E470:;
    v0 = a0 + 0;
    sp = sp + 112;
    return v0;
}

/* 0891E488 */
void func_0891E488(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0891E488:;
    sp = sp - 48;
    a1 = sp + 0;
    v0 = LD32(a0);
    v1 = LD32(v0+92);
    t_ = v1;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891E4A8;
L_0891E4A8:;
    a0 = sp + 0;
    a1 = sp + 16;
    v0 = func_0891E3F0(a0, a1);
    goto L_0891E4B4;
L_0891E4B4:;
    cnd_ = v0 == 0;
    v0 = D_08AED394 - (-11372);
    if (cnd_) { goto L_0891E500; }
    goto L_0891E4BC;
L_0891E4BC:;
    f0 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+16));
    v0 = D_08AED390 - (-11376);
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0-11376));
    f0 = f0 - f1;
    ST32(sp+4, FBITS(f0));
    goto L_0891E4D8;
L_0891E4D8:;
    v1 = LD32(s0);
    goto L_0891E4DC;
L_0891E4DC:;
    a0 = s0 + 0;
    a1 = sp + 0;
    v0 = LD32(v1+96);
    t_ = v0;
    a2 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891E4F0;
L_0891E4F0:;
    sp = sp + 48;
    return;
L_0891E500:;
    f1 = BITSF(LD32(s0+76));
    f0 = BITSF(LD32(v0-11372));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { ST32(sp+4, FBITS(f1)); goto L_0891E4D8; }
    goto L_0891E518;
L_0891E518:;
    v1 = LD32(s0);
    goto L_0891E4DC;
}

/* 0891E520 */
void func_0891E520(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891E520:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+40);
    f0 = func_08856DD4(a0);
    goto L_0891E538;
L_0891E538:;
    v0 = D_08AED398 - (-11368);
    f2 = BITSF(LD32(v0-11368));
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0891E574; }
    goto L_0891E550;
L_0891E550:;
    f0 = BITSF(LD32(s0+192));
    f1 = BITSF(LD32(s0+36));
    a0 = s0 + 0;
    f0 = f0 + f1;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    ST32(s0+192, FBITS(f0));
    if (cnd_) { goto L_0891E580; }
    goto L_0891E570;
L_0891E570:;
    goto L_0891E574;
L_0891E574:;
    sp = sp + 16;
    return;
L_0891E580:;
    v1 = LD32(s0);
    ST32(s0+192, 0);
    v0 = LD32(v1+124);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891E594;
L_0891E594:;
    goto L_0891E574;
}

/* 0891E59C */
rv_t func_0891E59C(u32 a0, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0891E59C:;
    sp = sp - 64;
    a3 = D_08C25090 - (20624);
    v0 = (u32)(s32)LD_S8(a3+20624);
    cnd_ = v0 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_0891E810; }
    goto L_0891E5CC;
L_0891E5CC:;
    v1 = D_08AED3A0 - (-11360);
    f4 = BITSF(LD32(v1-11360));
    v1 = D_08AED3A8 - (-11352);
    f2 = BITSF(LD32(v1-11352));
    v1 = D_08AED39C - (-11364);
    f0 = BITSF(LD32(v1-11364));
    a1 = D_08C25098 - (20632);
    v0 = a1 + 20632;
    a2 = v0 + 12;
    ST32(v0+4, 0);
    v1 = D_08AED3A4 - (-11356);
    ST32(a2+4, FBITS(f0));
    ST32(v0+8, 0);
    ST32(a2+8, 0);
    a2 = v0 + 24;
    ST32(a2+4, FBITS(f4));
    ST32(a2+8, 0);
    a2 = v0 + 36;
    f5 = BITSF(LD32(v1-11356));
    v1 = D_08AED3AC - (-11348);
    f1 = BITSF(LD32(v1-11348));
    ST32(a2+4, FBITS(f2));
    v1 = D_08AED3B0 - (-11344);
    ST32(a2+8, 0);
    a2 = v0 + 48;
    f3 = BITSF(LD32(v1-11344));
    ST32(a2+4, FBITS(f2));
    v1 = D_08AED3B4 - (-11340);
    ST32(a2+8, 0);
    a2 = v0 + 60;
    f0 = BITSF(LD32(v1-11340));
    ST32(a2+4, FBITS(f2));
    v1 = D_08AED3B8 - (-11336);
    ST32(a2+8, FBITS(f5));
    a2 = v0 + 72;
    ST32(a2+4, FBITS(f2));
    ST32(a2+8, FBITS(f4));
    a2 = v0 + 84;
    ST32(a2+4, FBITS(f1));
    ST32(a2+8, 0);
    a2 = v0 + 96;
    ST32(a1+20632, 0);
    ST32(a2+4, FBITS(f0));
    ST32(v0+12, 0);
    ST32(v0+24, 0);
    ST32(v0+36, FBITS(f5));
    ST32(v0+48, FBITS(f4));
    ST32(v0+60, 0);
    ST32(v0+72, 0);
    ST32(v0+84, 0);
    ST32(v0+96, FBITS(f3));
    ST32(a2+8, 0);
    a2 = v0 + 108;
    ST32(a2+4, FBITS(f0));
    ST32(a2+8, 0);
    a2 = v0 + 120;
    f2 = BITSF(LD32(v1-11336));
    ST32(a2+4, FBITS(f0));
    v1 = D_08AED3BC - (-11332);
    ST32(a2+8, FBITS(f3));
    a2 = v0 + 132;
    ST32(a2+4, FBITS(f0));
    ST32(a2+8, FBITS(f1));
    a2 = v0 + 144;
    ST32(a2+8, 0);
    ST32(a2+4, FBITS(f2));
    a2 = v0 + 156;
    ST32(a2+8, 0);
    ST32(a2+4, FBITS(f1));
    a2 = v0 + 168;
    ST32(a2+8, 0);
    ST32(a2+4, FBITS(f1));
    a2 = v0 + 180;
    f0 = BITSF(LD32(v1-11332));
    ST32(a2+8, FBITS(f3));
    v1 = D_08AED3C0 - (-11328);
    ST32(a2+4, FBITS(f1));
    a2 = v0 + 192;
    ST32(a2+8, FBITS(f1));
    ST32(a2+4, FBITS(f1));
    a2 = v0 + 204;
    ST32(a2+4, FBITS(f0));
    ST32(a2+8, 0);
    a2 = v0 + 216;
    ST32(a2+8, 0);
    ST32(a2+4, FBITS(f2));
    a2 = v0 + 228;
    ST32(v0+108, FBITS(f1));
    ST32(v0+120, 0);
    ST32(v0+132, 0);
    ST32(v0+144, 0);
    ST32(v0+156, FBITS(f3));
    ST32(v0+168, FBITS(f1));
    ST32(v0+180, 0);
    ST32(v0+192, 0);
    ST32(v0+204, 0);
    ST32(v0+216, FBITS(f3));
    ST32(v0+228, FBITS(f1));
    ST32(a2+4, FBITS(f2));
    ST32(a2+8, 0);
    a2 = v0 + 240;
    f0 = BITSF(LD32(v1-11328));
    ST32(a2+8, FBITS(f3));
    v1 = D_08AED3C4 - (-11324);
    ST32(a2+4, FBITS(f2));
    a2 = v0 + 252;
    ST32(a2+8, FBITS(f1));
    ST32(a2+4, FBITS(f2));
    a2 = v0 + 264;
    ST32(a2+4, FBITS(f0));
    f0 = BITSF(LD32(v1-11324));
    ST32(a2+8, 0);
    v1 = D_08AED3C8 - (-11320);
    a2 = v0 + 276;
    ST32(a2+4, FBITS(f0));
    f0 = BITSF(LD32(v1-11320));
    ST32(a2+8, 0);
    v1 = D_08AED3CC - (-11316);
    a2 = v0 + 288;
    ST32(a2+4, FBITS(f0));
    f0 = BITSF(LD32(v1-11316));
    ST32(a2+8, 0);
    v1 = D_08AED3D0 - (-11312);
    a2 = v0 + 300;
    ST32(a2+4, FBITS(f0));
    f0 = BITSF(LD32(v1-11312));
    ST32(a2+8, 0);
    v1 = D_08AED3D4 - (-11308);
    a2 = v0 + 312;
    ST32(a2+4, FBITS(f0));
    f0 = BITSF(LD32(v1-11308));
    ST32(a2+8, 0);
    v1 = 1;
    a2 = v0 + 324;
    ST32(a2+4, FBITS(f0));
    ST32(a2+8, 0);
    ST8(a3+20624, v1);
    ST32(v0+324, 0);
    ST32(v0+240, 0);
    ST32(v0+252, 0);
    ST32(v0+264, 0);
    ST32(v0+276, 0);
    ST32(v0+288, 0);
    ST32(v0+300, 0);
    ST32(v0+312, 0);
    goto L_0891E810;
L_0891E810:;
    v0 = LD32(s2);
    a1 = sp + 0;
    s0 = 0 + 0;
    v1 = LD32(v0+92);
    s1 = 3;
    t_ = v1;
    s5 = sp + 16;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891E82C;
L_0891E82C:;
    v0 = D_08C25098 - (20632);
    s4 = v0 + 20632;
    s3 = 28;
    v0 = s0 << 1;
    goto L_0891E83C;
L_0891E83C:;
    v0 = v0 + s0;
    v0 = v0 << 2;
    v0 = v0 + s4;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f0 = f0 + f2;
    f1 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    v1 = LD32(s2);
    f1 = f1 + f3;
    f2 = f2 + f4;
    v0 = LD32(v1+96);
    ST32(sp+16, FBITS(f0));
    s0 = s0 + 1;
    a0 = s2 + 0;
    ST32(sp+20, FBITS(f1));
    a1 = s5 + 0;
    a2 = 1;
    ST32(sp+24, FBITS(f2));
    t_ = v0;
    s1 = s1 - 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891E898;
L_0891E898:;
    v1 = s0 ^ s3;
    if (v1 == 0) s0 = 0;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_0891E8B4; }
    goto L_0891E8A8;
L_0891E8A8:;
    cnd_ = s1 != 0;
    v0 = s0 << 1;
    if (cnd_) { goto L_0891E83C; }
    goto L_0891E8B0;
L_0891E8B0:;
    v1 = 0 + 0;
    goto L_0891E8B4;
L_0891E8B4:;
    v0 = v1 + 0;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
}

/* 0891E8DC */
void func_0891E8DC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891E8DC:;
    sp = sp - 16;
    v1 = LD32(a0+160);
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_0891E918; }
    goto L_0891E8F4;
L_0891E8F4:;
    v0 = v1 << 2;
    v1 = D_08AD96DC - (-26916);
    v1 = v1 - 26916;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0891E910u: goto L_0891E910; case 0x0891E918u: goto L_0891E918; case 0x0891E924u: goto L_0891E924; default: rs_break(0, 0x0891e908); }
L_0891E910:;
    a0 = a1 + 0;
    func_0891EA3C(a0);
    goto L_0891E918;
L_0891E918:;
    goto L_0891E91C;
L_0891E91C:;
    sp = sp + 16;
    return;
L_0891E924:;
    a0 = a1 + 0;
    func_0891EA8C(a0);
    goto L_0891E92C;
L_0891E92C:;
    goto L_0891E91C;
}

/* 0891E934 */
float func_0891E934(u32 a0)
{
    u32 s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891E934:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_0891F8C4(a0);
    goto L_0891E948;
L_0891E948:;
    ST32(s0+160, 0);
    sp = sp + 16;
    return f0;
}

/* 0891E95C */
void func_0891E95C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891E95C:;
    v0 = 1;
    ST32(a0+160, v0);
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_089191A0(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891E980;
L_0891E980:;
    v0 = D_08AED3D8 - (-11304);
    f1 = BITSF(LD32(v0-11304));
    ST32(s0+164, s1);
    a0 = s0 + 0;
    f0 = f0 + f1;
    ST32(s0+168, FBITS(f0));
    func_0891EFC4(a0);
    goto L_0891E99C;
L_0891E99C:;
    sp = sp + 16;
    return;
}

/* 0891E9B0 */
void func_0891E9B0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891E9B0:;
    v0 = LD32(a1+4);
    v1 = 2;
    a2 = 3;
    v0 = v0 ^ 0x2;
    if (v0 != 0) a2 = v1;
    ST32(a0+160, a2);
    sp = sp - 16;
    ST32(a0+164, a1);
    s0 = a0 + 0;
    { rv_t r_ = func_089191A0(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891E9E0;
L_0891E9E0:;
    ST32(s0+168, FBITS(f0));
    a0 = s0 + 0;
    func_0891EFC4(a0);
    goto L_0891E9EC;
L_0891E9EC:;
    sp = sp + 16;
    return;
}

/* 0891E9FC */
void func_0891E9FC(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891E9FC:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_0891F8C4(a0);
    goto L_0891EA10;
L_0891EA10:;
    a0 = 5;
    v1 = LD32(s0+164);
    v0 = LD32(v1+4);
    v1 = 4;
    v0 = v0 ^ 0x2;
    if (v0 != 0) a0 = v1;
    ST32(s0+160, a0);
    sp = sp + 16;
    return;
}

/* 0891EA3C */
void func_0891EA3C(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891EA3C:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089191A0(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891EA50;
L_0891EA50:;
    f1 = BITSF(LD32(s0+168));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    a0 = 3;
    if (cnd_) { goto L_0891EA7C; }
    goto L_0891EA64;
L_0891EA64:;
    v0 = LD32(s0+164);
    v1 = LD32(v0+4);
    v0 = 2;
    v1 = v1 ^ 0x2;
    if (v1 != 0) a0 = v0;
    ST32(s0+160, a0);
    goto L_0891EA7C;
L_0891EA7C:;
    sp = sp + 16;
    return;
}

/* 0891EA8C */
void func_0891EA8C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[480] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 480);
L_0891EA8C:;
    sp = sp - 480;
    v0 = LD32(a0+164);
    cnd_ = v0 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_0891EACC; }
    goto L_0891EAB0;
L_0891EAB0:;
    goto L_0891EAB4;
L_0891EAB4:;
    sp = sp + 480;
    return;
L_0891EACC:;
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = func_089191A0(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891EAE0;
L_0891EAE0:;
    f1 = BITSF(LD32(s2+168));
    a0 = LD32(s2+164);
    f20 = f0 - f1;
    f12 = f20;
    { rv_t r_ = func_08919BBC(a0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891EAF4;
L_0891EAF4:;
    a0 = v0 + 0;
    {u32 a_=sp+(384);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(400);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(416);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(432);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0891EF18; }
    goto L_0891EB0C;
L_0891EB0C:;
    v0 = LD32(v0+4);
    v1 = 1;
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 == v1;
    if (cnd_) { v0 = LD32(a0+16); goto L_0891EF10; }
    goto L_0891EB20;
L_0891EB20:;
    v0 = LD32(s2+164);
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    v0 = 2;
    if (cnd_) { goto L_0891EE60; }
    goto L_0891EB30;
L_0891EB30:;
    cnd_ = v1 != v0;
    if (cnd_) {  goto L_0891EAB4; }
    goto L_0891EB38;
L_0891EB38:;
    a0 = LD32(s2+40);
    a1 = sp + 64;
    a2 = sp + 16;
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    func_08856CB0(a0, a1, a2);
    goto L_0891EB58;
L_0891EB58:;
    a0 = LD32(s2+164);
    v0 = D_08AED3DC - (-11300);
    f12 = BITSF(LD32(v0-11300));
    v1 = LD32(a0);
    s0 = sp + 80;
    s1 = sp + 96;
    a3 = LD32(v1+8);
    a2 = s1 + 0;
    t_ = a3;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891EB80;
L_0891EB80:;
    a0 = sp + 144;
    a1 = s0 + 0;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891EB8C;
L_0891EB8C:;
    v0 = LD32(sp+148);
    v1 = LD32(sp+152);
    {u32 a_=sp+(288);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+156);
    {v[5]=BITSF(v1);}
    v1 = LD32(sp+168);
    {v[6]=BITSF(v0);}
    {v0=FBITS(v[4]);}
    f6 = BITSF(v0);
    v0 = LD32(sp+164);
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+172);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {v0=FBITS(v[1]);}
    f5 = BITSF(v0);
    {v0=FBITS(v[2]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[5]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f4 = BITSF(v0);
    ST32(sp+164, FBITS(f2));
    {v0=FBITS(v[6]);}
    f12 = f20;
    ST32(sp+168, FBITS(f3));
    a1 = s0 + 0;
    a2 = s1 + 0;
    ST32(sp+172, FBITS(f4));
    ST32(sp+152, FBITS(f5));
    ST32(sp+156, FBITS(f6));
    ST32(sp+148, v0);
    {v[112]=BITSF(LD32(sp+(144)));}
    {v[113]=BITSF(LD32(sp+(148)));}
    {v[114]=BITSF(LD32(sp+(152)));}
    {v[116]=BITSF(LD32(sp+(156)));}
    {v[117]=BITSF(LD32(sp+(160)));}
    {v[118]=BITSF(LD32(sp+(164)));}
    {v[120]=BITSF(LD32(sp+(168)));}
    {v[121]=BITSF(LD32(sp+(172)));}
    {v[122]=BITSF(LD32(sp+(176)));}
    {v[96]=BITSF(LD32(sp+(16)));}
    {v[97]=BITSF(LD32(sp+(20)));}
    {v[98]=BITSF(LD32(sp+(24)));}
    {v[100]=BITSF(LD32(sp+(28)));}
    {v[101]=BITSF(LD32(sp+(32)));}
    {v[102]=BITSF(LD32(sp+(36)));}
    {v[104]=BITSF(LD32(sp+(40)));}
    {v[105]=BITSF(LD32(sp+(44)));}
    {v[106]=BITSF(LD32(sp+(48)));}
    {float m00=0;m00+=v[112]*v[96];m00+=v[116]*v[97];m00+=v[120]*v[98];float m01=0;m01+=v[113]*v[96];m01+=v[117]*v[97];m01+=v[121]*v[98];float m02=0;m02+=v[114]*v[96];m02+=v[118]*v[97];m02+=v[122]*v[98];float m10=0;m10+=v[112]*v[100];m10+=v[116]*v[101];m10+=v[120]*v[102];float m11=0;m11+=v[113]*v[100];m11+=v[117]*v[101];m11+=v[121]*v[102];float m12=0;m12+=v[114]*v[100];m12+=v[118]*v[101];m12+=v[122]*v[102];float m20=0;m20+=v[112]*v[104];m20+=v[116]*v[105];m20+=v[120]*v[106];float m21=0;m21+=v[113]*v[104];m21+=v[117]*v[105];m21+=v[121]*v[106];float m22=0;m22+=v[114]*v[104];m22+=v[118]*v[105];m22+=v[122]*v[106];v[80]=m00;v[81]=m01;v[82]=m02;v[84]=m10;v[85]=m11;v[86]=m12;v[88]=m20;v[89]=m21;v[90]=m22;}
    {ST32(sp+(192),FBITS(v[80]));}
    {ST32(sp+(196),FBITS(v[81]));}
    {ST32(sp+(200),FBITS(v[82]));}
    {ST32(sp+(204),FBITS(v[84]));}
    {ST32(sp+(208),FBITS(v[85]));}
    {ST32(sp+(212),FBITS(v[86]));}
    {ST32(sp+(216),FBITS(v[88]));}
    {ST32(sp+(220),FBITS(v[89]));}
    {ST32(sp+(224),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+192));
    f1 = BITSF(LD32(sp+196));
    ST32(sp+16, FBITS(f0));
    f0 = BITSF(LD32(sp+200));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    f1 = BITSF(LD32(sp+204));
    f0 = BITSF(LD32(sp+208));
    ST32(sp+28, FBITS(f1));
    ST32(sp+32, FBITS(f0));
    f1 = BITSF(LD32(sp+212));
    f0 = BITSF(LD32(sp+216));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f0));
    f1 = BITSF(LD32(sp+220));
    f0 = BITSF(LD32(sp+224));
    ST32(sp+44, FBITS(f1));
    ST32(sp+48, FBITS(f0));
    a0 = LD32(s2+164);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891ECE0;
L_0891ECE0:;
    {u32 a_=sp+(432);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+16);
    v0 = LD32(sp+20);
    f2 = BITSF(LD32(sp+68));
    {u32 a_=sp+(336);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(v1);}
    {u32 a_=sp+(368);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+24);
    {v[49]=BITSF(v0);}
    {u32 a_=sp+(320);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+32);
    {v[50]=BITSF(v1);}
    v1 = LD32(sp+28);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(352);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(sp+36);
    {v[49]=BITSF(v0);}
    v0 = LD32(sp+44);
    {v[50]=BITSF(v1);}
    v1 = LD32(sp+40);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[32]=BITSF(v1);}
    v1 = LD32(sp+48);
    {v[33]=BITSF(v0);}
    v0 = LD32(sp+84);
    {v[34]=BITSF(v1);}
    v1 = LD32(sp+80);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[20]=BITSF(v1);}
    v1 = LD32(sp+88);
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f5 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f0 = BITSF(v0);
    f1 = BITSF(LD32(sp+64));
    v1 = LD32(s2);
    f2 = f2 + f0;
    f0 = BITSF(LD32(sp+72));
    f1 = f1 + f4;
    ST32(sp+276, v0);
    f0 = f0 + f5;
    a1 = sp + 240;
    ST32(sp+260, v0);
    a0 = s2 + 0;
    a2 = 1;
    ST32(sp+272, FBITS(f4));
    ST32(sp+240, FBITS(f1));
    ST32(sp+244, FBITS(f2));
    ST32(sp+248, FBITS(f0));
    ST32(sp+280, FBITS(f5));
    ST32(sp+256, FBITS(f4));
    ST32(sp+264, FBITS(f5));
    {v[112]=BITSF(LD32(sp+(96)));}
    {v[113]=BITSF(LD32(sp+(100)));}
    {v[114]=BITSF(LD32(sp+(104)));}
    {v[116]=BITSF(LD32(sp+(108)));}
    {v[117]=BITSF(LD32(sp+(112)));}
    {v[118]=BITSF(LD32(sp+(116)));}
    {v[120]=BITSF(LD32(sp+(120)));}
    {v[121]=BITSF(LD32(sp+(124)));}
    {v[122]=BITSF(LD32(sp+(128)));}
    {v[96]=BITSF(LD32(sp+(16)));}
    {v[97]=BITSF(LD32(sp+(20)));}
    {v[98]=BITSF(LD32(sp+(24)));}
    {v[100]=BITSF(LD32(sp+(28)));}
    {v[101]=BITSF(LD32(sp+(32)));}
    {v[102]=BITSF(LD32(sp+(36)));}
    {v[104]=BITSF(LD32(sp+(40)));}
    {v[105]=BITSF(LD32(sp+(44)));}
    {v[106]=BITSF(LD32(sp+(48)));}
    {float m00=0;m00+=v[112]*v[96];m00+=v[116]*v[97];m00+=v[120]*v[98];float m01=0;m01+=v[113]*v[96];m01+=v[117]*v[97];m01+=v[121]*v[98];float m02=0;m02+=v[114]*v[96];m02+=v[118]*v[97];m02+=v[122]*v[98];float m10=0;m10+=v[112]*v[100];m10+=v[116]*v[101];m10+=v[120]*v[102];float m11=0;m11+=v[113]*v[100];m11+=v[117]*v[101];m11+=v[121]*v[102];float m12=0;m12+=v[114]*v[100];m12+=v[118]*v[101];m12+=v[122]*v[102];float m20=0;m20+=v[112]*v[104];m20+=v[116]*v[105];m20+=v[120]*v[106];float m21=0;m21+=v[113]*v[104];m21+=v[117]*v[105];m21+=v[121]*v[106];float m22=0;m22+=v[114]*v[104];m22+=v[118]*v[105];m22+=v[122]*v[106];v[80]=m00;v[81]=m01;v[82]=m02;v[84]=m10;v[85]=m11;v[86]=m12;v[88]=m20;v[89]=m21;v[90]=m22;}
    {ST32(sp+(192),FBITS(v[80]));}
    {ST32(sp+(196),FBITS(v[81]));}
    {ST32(sp+(200),FBITS(v[82]));}
    {ST32(sp+(204),FBITS(v[84]));}
    {ST32(sp+(208),FBITS(v[85]));}
    {ST32(sp+(212),FBITS(v[86]));}
    {ST32(sp+(216),FBITS(v[88]));}
    {ST32(sp+(220),FBITS(v[89]));}
    {ST32(sp+(224),FBITS(v[90]));}
    v0 = LD32(v1+96);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891EE48;
L_0891EE48:;
    a0 = s2 + 0;
    a1 = sp + 192;
    goto L_0891EE50;
L_0891EE50:;
    func_0891DD34(a0, a1);
    goto L_0891EE58;
L_0891EE58:;
    goto L_0891EAB4;
L_0891EE60:;
    v0 = LD32(s2+40);
    a0 = s2 + 0;
    a1 = sp + 16;
    f0 = BITSF(LD32(v0+52));
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
    goto L_0891EE50;
L_0891EF10:;
    ST32(s2+172, v0);
    goto L_0891EB20;
L_0891EF18:;
    a0 = s2 + 0;
    func_0891E9FC(a0);
    goto L_0891EF20;
L_0891EF20:;
    {u32 a_=sp+(384);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(400);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(416);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(432);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    goto L_0891EB20;
}

/* 0891EF34 */
void func_0891EF34(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891EF34:;
    sp = sp - 16;
    s1 = (u32)-1;
    s0 = a0 + 0;
    a0 = a1 + 0;
    cnd_ = a1 == s1;
    if (cnd_) { goto L_0891EFB4; }
    goto L_0891EF54;
L_0891EF54:;
    v0 = func_0891920C(a0);
    goto L_0891EF5C;
L_0891EF5C:;
    cnd_ = v0 == s1;
    a0 = v0 + 0;
    if (cnd_) { goto L_0891EFB4; }
    goto L_0891EF64;
L_0891EF64:;
    { u64 r_ = func_08919258(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0891EF6C;
L_0891EF6C:;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_0891EFB4; }
    goto L_0891EF74;
L_0891EF74:;
    v0 = D_08B2BB6E - (-17554);
    v1 = LD_U8(v0-17554);
    a0 = s0 + 0;
    cnd_ = v1 == 0;
    a1 = a2 + 0;
    if (cnd_) { goto L_0891EFA4; }
    goto L_0891EF88;
L_0891EF88:;
    func_0891E95C(a0, a1);
    goto L_0891EF90;
L_0891EF90:;
    goto L_0891EF94;
L_0891EF94:;
    sp = sp + 16;
    return;
L_0891EFA4:;
    a1 = a2 + 0;
    func_0891E9B0(a0, a1);
    goto L_0891EFAC;
L_0891EFAC:;
    goto L_0891EF94;
L_0891EFB4:;
    a0 = s0 + 0;
    f0 = func_0891E934(a0);
    goto L_0891EFBC;
L_0891EFBC:;
    goto L_0891EF94;
}

/* 0891EFC4 */
void func_0891EFC4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[320] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 320);
L_0891EFC4:;
    sp = sp - 320;
    v0 = LD32(a0+164);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0891EFF4; }
    goto L_0891EFE0;
L_0891EFE0:;
    goto L_0891EFE4;
L_0891EFE4:;
    sp = sp + 320;
    return;
L_0891EFF4:;
    a0 = sp + 0;
    func_08918FB0(a0);
    goto L_0891EFFC;
L_0891EFFC:;
    a0 = LD32(s1+164);
    v1 = LD32(a0+4);
    cnd_ = v1 != 0;
    v0 = 2;
    if (cnd_) { goto L_0891F068; }
    goto L_0891F00C;
L_0891F00C:;
    v0 = LD32(s1+40);
    ST32(sp+32, 0);
    v1 = v0 + 32;
    f1 = BITSF(LD32(v0+52));
    ST32(sp+40, 0);
    ST32(sp+36, FBITS(f1));
    f0 = BITSF(LD32(v0+52));
    ST32(sp+12, FBITS(f0));
    f1 = BITSF(LD32(v0+32));
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    goto L_0891F044;
L_0891F044:;
    v0 = LD32(a0+8);
    f0 = BITSF(LD32(s1+168));
    a0 = s1 + 0;
    a1 = sp + 0;
    ST32(sp+20, FBITS(f0));
    ST32(sp+16, v0);
    f0 = func_0891F904(a0, a1, 0, 0);
    goto L_0891F060;
L_0891F060:;
    goto L_0891EFE4;
L_0891F068:;
    cnd_ = v1 == v0;
    a0 = LD32(s1+40);
    if (cnd_) { goto L_0891F3EC; }
    goto L_0891F070;
L_0891F070:;
    a1 = sp + 112;
    a2 = sp + 224;
    func_08856CB0(a0, a1, a2);
    goto L_0891F07C;
L_0891F07C:;
    {v[112]=BITSF(LD32(sp+(224)));}
    {v[113]=BITSF(LD32(sp+(228)));}
    {v[114]=BITSF(LD32(sp+(232)));}
    {v[116]=BITSF(LD32(sp+(236)));}
    {v[117]=BITSF(LD32(sp+(240)));}
    {v[118]=BITSF(LD32(sp+(244)));}
    {v[120]=BITSF(LD32(sp+(248)));}
    {v[121]=BITSF(LD32(sp+(252)));}
    {v[122]=BITSF(LD32(sp+(256)));}
    {v[124]=1.57079632679f;}
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0891F2FC; }
    goto L_0891F0B8;
L_0891F0B8:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0891F23C; }
    goto L_0891F0C8;
L_0891F0C8:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0891F160; }
    goto L_0891F0F0;
L_0891F0F0:;
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
    if (cnd_) { goto L_0891F13C; }
    goto L_0891F12C;
L_0891F12C:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0891F13C;
L_0891F13C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0891F180; }
    goto L_0891F14C;
L_0891F14C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0891F180; }
    goto L_0891F15C;
L_0891F15C:;
    goto L_0891F160;
L_0891F160:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0891F180; }
    goto L_0891F174;
L_0891F174:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0891F180;
L_0891F180:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0891F210; }
    goto L_0891F1A0;
L_0891F1A0:;
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
    if (cnd_) { goto L_0891F1EC; }
    goto L_0891F1DC;
L_0891F1DC:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0891F1EC;
L_0891F1EC:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0891F230; }
    goto L_0891F1FC;
L_0891F1FC:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0891F230; }
    goto L_0891F20C;
L_0891F20C:;
    goto L_0891F210;
L_0891F210:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0891F230; }
    goto L_0891F224;
L_0891F224:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0891F230;
L_0891F230:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_0891F3B4; }
    goto L_0891F238;
L_0891F238:;
    goto L_0891F23C;
L_0891F23C:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0891F2D0; }
    goto L_0891F260;
L_0891F260:;
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
    if (cnd_) { goto L_0891F2AC; }
    goto L_0891F29C;
L_0891F29C:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0891F2AC;
L_0891F2AC:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0891F2F0; }
    goto L_0891F2BC;
L_0891F2BC:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0891F2F0; }
    goto L_0891F2CC;
L_0891F2CC:;
    goto L_0891F2D0;
L_0891F2D0:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0891F2F0; }
    goto L_0891F2E4;
L_0891F2E4:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0891F2F0;
L_0891F2F0:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_0891F3B4; }
    goto L_0891F2F8;
L_0891F2F8:;
    goto L_0891F2FC;
L_0891F2FC:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0891F390; }
    goto L_0891F320;
L_0891F320:;
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
    if (cnd_) { goto L_0891F36C; }
    goto L_0891F35C;
L_0891F35C:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0891F36C;
L_0891F36C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0891F3B0; }
    goto L_0891F37C;
L_0891F37C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0891F3B0; }
    goto L_0891F38C;
L_0891F38C:;
    goto L_0891F390;
L_0891F390:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0891F3B0; }
    goto L_0891F3A4;
L_0891F3A4:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0891F3B0;
L_0891F3B0:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_0891F3B4;
L_0891F3B4:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(32),FBITS(v[96]));}
    {ST32(sp+(36),FBITS(v[97]));}
    {ST32(sp+(40),FBITS(v[98]));}
    f0 = BITSF(LD32(sp+36));
    f1 = BITSF(LD32(sp+112));
    a0 = LD32(s1+164);
    ST32(sp+12, FBITS(f0));
    ST32(sp, FBITS(f1));
    f0 = BITSF(LD32(sp+116));
    f1 = BITSF(LD32(sp+120));
    goto L_0891F3E0;
L_0891F3E0:;
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    goto L_0891F044;
L_0891F3EC:;
    a1 = sp + 48;
    a2 = sp + 64;
    func_08856CB0(a0, a1, a2);
    goto L_0891F3F8;
L_0891F3F8:;
    a0 = LD32(s1+164);
    s0 = sp + 112;
    a2 = sp + 128;
    v0 = LD32(a0);
    a1 = s0 + 0;
    v1 = LD32(v0+8);
    v0 = D_08AED3E0 - (-11296);
    t_ = v1;
    f12 = BITSF(LD32(v0-11296));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891F41C;
L_0891F41C:;
    a0 = sp + 176;
    a1 = s0 + 0;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891F428;
L_0891F428:;
    v0 = LD32(sp+180);
    v1 = LD32(sp+184);
    {u32 a_=sp+(272);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+188);
    {v[5]=BITSF(v1);}
    v1 = LD32(sp+200);
    {v[6]=BITSF(v0);}
    {v0=FBITS(v[4]);}
    f6 = BITSF(v0);
    v0 = LD32(sp+196);
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+204);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {v0=FBITS(v[1]);}
    f5 = BITSF(v0);
    {v0=FBITS(v[2]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[5]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+196, FBITS(f4));
    {v0=FBITS(v[6]);}
    ST32(sp+200, FBITS(f3));
    ST32(sp+204, FBITS(f2));
    ST32(sp+180, v0);
    ST32(sp+184, FBITS(f5));
    ST32(sp+188, FBITS(f6));
    {v[112]=BITSF(LD32(sp+(176)));}
    {v[113]=BITSF(LD32(sp+(180)));}
    {v[114]=BITSF(LD32(sp+(184)));}
    {v[116]=BITSF(LD32(sp+(188)));}
    {v[117]=BITSF(LD32(sp+(192)));}
    {v[118]=BITSF(LD32(sp+(196)));}
    {v[120]=BITSF(LD32(sp+(200)));}
    {v[121]=BITSF(LD32(sp+(204)));}
    {v[122]=BITSF(LD32(sp+(208)));}
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
    f1 = BITSF(LD32(sp+228));
    ST32(sp+64, FBITS(f0));
    f0 = BITSF(LD32(sp+232));
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f0));
    f1 = BITSF(LD32(sp+236));
    f0 = BITSF(LD32(sp+240));
    ST32(sp+76, FBITS(f1));
    ST32(sp+80, FBITS(f0));
    f1 = BITSF(LD32(sp+244));
    f0 = BITSF(LD32(sp+248));
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f0));
    f1 = BITSF(LD32(sp+252));
    f0 = BITSF(LD32(sp+256));
    ST32(sp+92, FBITS(f1));
    ST32(sp+96, FBITS(f0));
    {v[112]=BITSF(LD32(sp+(64)));}
    {v[113]=BITSF(LD32(sp+(68)));}
    {v[114]=BITSF(LD32(sp+(72)));}
    {v[116]=BITSF(LD32(sp+(76)));}
    {v[117]=BITSF(LD32(sp+(80)));}
    {v[118]=BITSF(LD32(sp+(84)));}
    {v[120]=BITSF(LD32(sp+(88)));}
    {v[121]=BITSF(LD32(sp+(92)));}
    {v[122]=BITSF(LD32(sp+(96)));}
    {v[124]=1.57079632679f;}
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0891F7DC; }
    goto L_0891F598;
L_0891F598:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0891F71C; }
    goto L_0891F5A8;
L_0891F5A8:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0891F640; }
    goto L_0891F5D0;
L_0891F5D0:;
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
    if (cnd_) { goto L_0891F61C; }
    goto L_0891F60C;
L_0891F60C:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0891F61C;
L_0891F61C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0891F660; }
    goto L_0891F62C;
L_0891F62C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0891F660; }
    goto L_0891F63C;
L_0891F63C:;
    goto L_0891F640;
L_0891F640:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0891F660; }
    goto L_0891F654;
L_0891F654:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0891F660;
L_0891F660:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0891F6F0; }
    goto L_0891F680;
L_0891F680:;
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
    if (cnd_) { goto L_0891F6CC; }
    goto L_0891F6BC;
L_0891F6BC:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0891F6CC;
L_0891F6CC:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0891F710; }
    goto L_0891F6DC;
L_0891F6DC:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0891F710; }
    goto L_0891F6EC;
L_0891F6EC:;
    goto L_0891F6F0;
L_0891F6F0:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0891F710; }
    goto L_0891F704;
L_0891F704:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0891F710;
L_0891F710:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_0891F894; }
    goto L_0891F718;
L_0891F718:;
    goto L_0891F71C;
L_0891F71C:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0891F7B0; }
    goto L_0891F740;
L_0891F740:;
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
    if (cnd_) { goto L_0891F78C; }
    goto L_0891F77C;
L_0891F77C:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0891F78C;
L_0891F78C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0891F7D0; }
    goto L_0891F79C;
L_0891F79C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0891F7D0; }
    goto L_0891F7AC;
L_0891F7AC:;
    goto L_0891F7B0;
L_0891F7B0:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0891F7D0; }
    goto L_0891F7C4;
L_0891F7C4:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0891F7D0;
L_0891F7D0:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_0891F894; }
    goto L_0891F7D8;
L_0891F7D8:;
    goto L_0891F7DC;
L_0891F7DC:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0891F870; }
    goto L_0891F800;
L_0891F800:;
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
    if (cnd_) { goto L_0891F84C; }
    goto L_0891F83C;
L_0891F83C:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0891F84C;
L_0891F84C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0891F890; }
    goto L_0891F85C;
L_0891F85C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0891F890; }
    goto L_0891F86C;
L_0891F86C:;
    goto L_0891F870;
L_0891F870:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0891F890; }
    goto L_0891F884;
L_0891F884:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0891F890;
L_0891F890:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_0891F894;
L_0891F894:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(32),FBITS(v[96]));}
    {ST32(sp+(36),FBITS(v[97]));}
    {ST32(sp+(40),FBITS(v[98]));}
    f0 = BITSF(LD32(sp+36));
    f1 = BITSF(LD32(sp+48));
    a0 = LD32(s1+164);
    ST32(sp+12, FBITS(f0));
    ST32(sp, FBITS(f1));
    f0 = BITSF(LD32(sp+52));
    f1 = BITSF(LD32(sp+56));
    goto L_0891F3E0;
}

/* 0891F8C4 */
float func_0891F8C4(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0891F8C4:;
    ST32(a0+172, 0);
    sp = sp - 48;
    s0 = a0 + 0;
    a0 = sp + 0;
    func_08918FB0(a0);
    goto L_0891F8E0;
L_0891F8E0:;
    a0 = s0 + 0;
    v0 = (u32)-1;
    a1 = sp + 0;
    ST32(sp+16, v0);
    f0 = func_0891F904(a0, a1, 0, 0);
    goto L_0891F8F4;
L_0891F8F4:;
    sp = sp + 48;
    return f0;
}

/* 0891F904 */
float func_0891F904(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891F904:;
    sp = sp - 16;
    a3 = a1 + 0;
    a2 = 0 + 0;
    a1 = 24;
    s0 = a0 + 0;
    a0 = 61;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0891F928;
L_0891F928:;
    t0 = v0 + 0;
    a0 = v0 + 0;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_0891F954; }
    goto L_0891F93C;
L_0891F93C:;
    v0 = LD32(s0+24);
    v1 = LD32(v0+4);
    ST32(t0+4, v1);
    a3 = LD32(v0+4);
    ST32(t0, a3);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891F954;
L_0891F954:;
    sp = sp + 16;
    return f0;
}

/* 0891F964 */
void func_0891F964(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[256] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 256);
L_0891F964:;
    sp = sp - 256;
    s1 = a0 + 0;
    v1 = LD32(a0+176);
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_0891F9C0; }
    goto L_0891F988;
L_0891F988:;
    v0 = v1 << 2;
    v1 = D_08AD96F4 - (-26892);
    v1 = v1 - 26892;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0891F9A4u: goto L_0891F9A4; case 0x0891FBB0u: goto L_0891FBB0; case 0x0891FBD0u: goto L_0891FBD0; case 0x0891FBF0u: goto L_0891FBF0; case 0x0891FC10u: goto L_0891FC10; default: rs_break(0, 0x0891f99c); }
L_0891F9A4:;
    a0 = s1 + 0;
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    func_08920268(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0891F9BC;
L_0891F9BC:;
    {u32 a_=sp+(224);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    goto L_0891F9C0;
L_0891F9C0:;
    f3 = BITSF(LD32(s1+184));
    f4 = BITSF(0);
    fcc = FCMP(f4, f3, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0891FBA0; }
    goto L_0891F9D8;
L_0891F9D8:;
    v1 = LD32(s1+180);
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = 1;
    if (cnd_) { goto L_0891FBA0; }
    goto L_0891F9E8;
L_0891F9E8:;
    f2 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+24, FBITS(f4));
    ST32(sp+16, FBITS(f3));
    cnd_ = v1 == v0;
    ST32(sp+20, FBITS(f4));
    if (cnd_) { goto L_0891FA18; }
    goto L_0891FA10;
L_0891FA10:;
    f0 = BITSF(FBITS(f3) ^ 0x80000000u);
    ST32(sp+16, FBITS(f0));
    goto L_0891FA18;
L_0891FA18:;
    v0 = LD32(s1+40);
    {u32 a_=sp+(128);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[112]=BITSF(LD32(v0+(48)));}
    {v[113]=BITSF(LD32(v0+(52)));}
    {v[114]=BITSF(LD32(v0+(56)));}
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
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v0 = LD32(sp+32);
    v1 = LD32(sp+36);
    {v[32]=BITSF(v0);}
    f2 = BITSF(LD32(sp+4));
    {v[33]=BITSF(v1);}
    v0 = LD32(sp+40);
    v1 = LD32(sp+44);
    {v[34]=BITSF(v0);}
    {u32 a_=sp+(144);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+48);
    {v[48]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[49]=BITSF(v0);}
    v1 = LD32(sp+52);
    v0 = LD32(sp+56);
    {v[50]=BITSF(v1);}
    {u32 a_=sp+(160);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+60);
    {v[16]=BITSF(v0);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[17]=BITSF(v1);}
    v0 = LD32(sp+64);
    v1 = LD32(sp+16);
    {v[18]=BITSF(v0);}
    {u32 a_=sp+(112);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+20);
    {v[20]=BITSF(v1);}
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[21]=BITSF(v0);}
    v1 = LD32(sp+24);
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f5 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f0 = BITSF(v0);
    f1 = BITSF(LD32(sp));
    v1 = LD32(s1);
    f2 = f2 + f0;
    f0 = BITSF(LD32(sp+8));
    f1 = f1 + f4;
    ST32(sp+100, v0);
    f0 = f0 + f5;
    a0 = s1 + 0;
    ST32(sp+84, v0);
    a1 = sp + 0;
    ST32(sp+96, FBITS(f4));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f0));
    ST32(sp+104, FBITS(f5));
    ST32(sp+80, FBITS(f4));
    ST32(sp+88, FBITS(f5));
    v0 = LD32(v1+96);
    t_ = v0;
    a2 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891FB9C;
L_0891FB9C:;
    goto L_0891FBA0;
L_0891FBA0:;
    sp = sp + 256;
    return;
L_0891FBB0:;
    a0 = s1 + 0;
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    func_089202D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0891FBC8;
L_0891FBC8:;
    {u32 a_=sp+(224);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    goto L_0891F9C0;
L_0891FBD0:;
    a0 = s1 + 0;
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    func_0892034C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0891FBE8;
L_0891FBE8:;
    {u32 a_=sp+(224);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    goto L_0891F9C0;
L_0891FBF0:;
    a0 = s1 + 0;
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    func_089203A8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0891FC08;
L_0891FC08:;
    {u32 a_=sp+(224);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    goto L_0891F9C0;
L_0891FC10:;
    a0 = s1 + 0;
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    func_089203FC(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0891FC28;
L_0891FC28:;
    {u32 a_=sp+(224);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    goto L_0891F9C0;
}

/* 0891FC30 */
u32 func_0891FC30(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_0891FC30:;
    sp = sp - 96;
    v1 = 1;
    v0 = LD32(a0+48);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0891FC70; }
    goto L_0891FC5C;
L_0891FC5C:;
    v0 = LD32(a0+160);
    v0 = v0 - 1;
    v0 = v0 < 0x3u;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a0); goto L_0891FC90; }
    goto L_0891FC70;
L_0891FC70:;
    goto L_0891FC74;
L_0891FC74:;
    v0 = v1 + 0;
    sp = sp + 96;
    return v0;
L_0891FC90:;
    v0 = LD32(v1+128);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891FC9C;
L_0891FC9C:;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_0891FC70; }
    goto L_0891FCA4;
L_0891FCA4:;
    v0 = LD32(s0);
    a1 = sp + 16;
    v1 = LD32(v0+92);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891FCB8;
L_0891FCB8:;
    f1 = BITSF(LD32(sp));
    f0 = BITSF(LD32(sp+16));
    f2 = BITSF(LD32(sp+4));
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f12 = f1 - f0;
    f0 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+8));
    v1 = 1;
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+24));
    v0 = FBITS(f12);
    {v[0]=BITSF(v0);}
    f13 = f1 - f0;
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    ST32(sp+32, FBITS(f12));
    v0 = FBITS(f13);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    v0 = D_08AED3E4 - (-11292);
    f0 = BITSF(LD32(v0-11292));
    ST32(sp+36, FBITS(f2));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    ST32(sp+40, FBITS(f13));
    if (cnd_) { goto L_0891FC70; }
    goto L_0891FD28;
L_0891FD28:;
    v0 = FBITS(f2);
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    v0 = D_08AED3E8 - (-11288);
    f0 = BITSF(LD32(v0-11288));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0891FC74; }
    goto L_0891FD4C;
L_0891FD4C:;
    ST32(sp+36, 0);
    f0 = func_08A9F5FC(f12, f13);
    goto L_0891FD54;
L_0891FD54:;
    v0 = D_08AED3F0 - (-11280);
    s0 = LD32(s0+40);
    v1 = D_08AED3EC - (-11284);
    f20 = BITSF(LD32(v0-11280));
    f1 = BITSF(LD32(s0+52));
    f22 = BITSF(LD32(v1-11284));
    f0 = f0 - f1;
    f21 = f22 - f20;
    f12 = f0;
    f13 = f21;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891FD80;
L_0891FD80:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f1 = f0 + f21;
    if (cnd_) { goto L_0891FDA4; }
    goto L_0891FD90;
L_0891FD90:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_0891FDA4; }
    goto L_0891FDA0;
L_0891FDA0:;
    f1 = f0;
    goto L_0891FDA4;
L_0891FDA4:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(FBITS(f1) ^ 0x80000000u); goto L_0891FDD4; }
    goto L_0891FDB8;
L_0891FDB8:;
    f0 = BITSF(LD32(s0+108));
    goto L_0891FDBC;
L_0891FDBC:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_0891FC70; }
    goto L_0891FDCC;
L_0891FDCC:;
    v1 = 0 + 0;
    goto L_0891FC70;
L_0891FDD4:;
    f0 = BITSF(LD32(s0+112));
    goto L_0891FDBC;
}

/* 0891FDDC */
u32 func_0891FDDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0891FDDC:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+88);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891FDF8;
L_0891FDF8:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_0891FE18; }
    goto L_0891FE04;
L_0891FE04:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_0891FE18:;
    v0 = func_0891FC30(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0891FE20;
L_0891FE20:;
    v1 = v0 + 0;
    goto L_0891FE04;
}

/* 0891FE28 */
void func_0891FE28(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0891FE28:;
    sp = sp - 64;
    s2 = 0 + 0;
    s1 = a0 + 0;
    a1 = LD32(a0+44);
    v0 = LD32(a1+4);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    a0 = LD32(a0+40);
    if (cnd_) { goto L_0891FE98; }
    goto L_0891FE5C;
L_0891FE5C:;
    v1 = LD32(a0+104);
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 == 0;
    v0 = (v1 >> 4) & 0x1;
    if (cnd_) { goto L_0891FE7C; }
    goto L_0891FE6C;
L_0891FE6C:;
    ST32(sp, 0);
    s2 = 1;
    v1 = LD32(a0+104);
    v0 = (v1 >> 4) & 0x1;
    goto L_0891FE7C;
L_0891FE7C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a1+4); goto L_0891FE9C; }
    goto L_0891FE84;
L_0891FE84:;
    v0 = s2 << 2;
    v0 = v0 + sp;
    v1 = 1;
    ST32(v0, v1);
    s2 = s2 + 1;
    goto L_0891FE98;
L_0891FE98:;
    v0 = LD32(a1+4);
    goto L_0891FE9C;
L_0891FE9C:;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0891FF08; }
    goto L_0891FEA8;
L_0891FEA8:;
    v1 = LD32(a0+104);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    v0 = (v1 >> 1) & 0x1;
    if (cnd_) { goto L_0891FEC8; }
    goto L_0891FEB8;
L_0891FEB8:;
    ST32(sp+16, 0);
    s0 = 1;
    v1 = LD32(a0+104);
    v0 = (v1 >> 1) & 0x1;
    goto L_0891FEC8;
L_0891FEC8:;
    cnd_ = v0 == 0;
    v0 = (v1 >> 2) & 0x1;
    if (cnd_) { goto L_0891FEEC; }
    goto L_0891FED0;
L_0891FED0:;
    v0 = s0 << 2;
    v1 = 1;
    v0 = v0 + sp;
    ST32(v0+16, v1);
    s0 = s0 + 1;
    v1 = LD32(a0+104);
    v0 = (v1 >> 2) & 0x1;
    goto L_0891FEEC;
L_0891FEEC:;
    cnd_ = v0 == 0;
    v0 = s0 | s2;
    if (cnd_) { goto L_0891FF0C; }
    goto L_0891FEF4;
L_0891FEF4:;
    v0 = s0 << 2;
    v0 = v0 + sp;
    v1 = 2;
    ST32(v0+16, v1);
    s0 = s0 + 1;
    goto L_0891FF08;
L_0891FF08:;
    v0 = s0 | s2;
    goto L_0891FF0C;
L_0891FF0C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0891FFD8; }
    goto L_0891FF14;
L_0891FF14:;
    v0 = 0 < s2;
    v1 = 0 < s0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    s3 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_0891FF80; }
    goto L_0891FF28;
L_0891FF28:;
    v1 = LD32(s3+23232);
    a3 = s3 + 23232;
    a2 = LD32(a3+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a2;
    a1 = v1 >> 1;
    v0 = s2 + s0;
    { u32 x_ = a1, y_ = v0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a2 = a2 + v1;
    ST32(a3+4, a2);
    a0 = hi;
    a0 = a0 < s0;
    cnd_ = a0 == 0;
    ST32(s3+23232, v1);
    if (cnd_) { goto L_08920030; }
    goto L_0891FF68;
L_0891FF68:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    a1 = 1;
    v0 = LD32(v1+116);
    t_ = v0;
    s2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891FF80;
L_0891FF80:;
    cnd_ = s0 == 0;
    v0 = LD32(s3+23232);
    if (cnd_) { goto L_0891FFF0; }
    goto L_0891FF88;
L_0891FF88:;
    a2 = s3 + 23232;
    a1 = LD32(a2+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a1;
    v1 = v0 >> 1;
    { u32 x_ = v1, y_ = s0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a1 = a1 + v0;
    ST32(s3+23232, v0);
    ST32(a2+4, a1);
    a0 = hi;
    a0 = a0 << 2;
    a0 = a0 + sp;
    v0 = LD32(a0+16);
    goto L_0891FFC4;
L_0891FFC4:;
    ST32(s1+180, v0);
    a0 = s1 + 0;
    a1 = 1;
    func_0892004C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0891FFD4;
L_0891FFD4:;
    goto L_0891FFD8;
L_0891FFD8:;
    sp = sp + 64;
    return;
L_0891FFF0:;
    a2 = s3 + 23232;
    a1 = LD32(a2+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a1;
    v1 = v0 >> 1;
    { u32 x_ = v1, y_ = s2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a1 = a1 + v0;
    ST32(s3+23232, v0);
    ST32(a2+4, a1);
    a0 = hi;
    a0 = a0 << 2;
    a0 = a0 + sp;
    v0 = LD32(a0);
    goto L_0891FFC4;
L_08920030:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    v0 = LD32(v1+116);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08920044;
L_08920044:;
    v0 = LD32(s3+23232);
    goto L_0891FFF0;
}

/* 0892004C */
void func_0892004C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892004C:;
    sp = sp - 16;
    v0 = a1 < 0x5u;
    s0 = a0 + 0;
    cnd_ = v0 == 0;
    ST32(a0+176, a1);
    if (cnd_) { goto L_089200AC; }
    goto L_08920068;
L_08920068:;
    v1 = D_08AD9708 - (-26872);
    v0 = a1 << 2;
    v1 = v1 - 26872;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08920084u: goto L_08920084; case 0x089200BCu: goto L_089200BC; case 0x08920134u: goto L_08920134; case 0x0892019Cu: goto L_0892019C; case 0x0892020Cu: goto L_0892020C; default: rs_break(0, 0x0892007c); }
L_08920084:;
    v0 = D_08AED3F4 - (-11276);
    f0 = BITSF(LD32(v0-11276));
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = 0 + 0;
    ST32(s0+184, 0);
    ST32(s0+188, FBITS(f0));
    goto L_089200A0;
L_089200A0:;
    v0 = LD32(v1+120);
    goto L_089200A4;
L_089200A4:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089200AC;
L_089200AC:;
    goto L_089200B0;
L_089200B0:;
    sp = sp + 16;
    return;
L_089200BC:;
    v1 = LD32(s0+180);
    v0 = 1;
    ST32(s0+184, 0);
    cnd_ = v1 == v0;
    ST32(s0+188, 0);
    if (cnd_) { goto L_08920124; }
    goto L_089200D0;
L_089200D0:;
    v0 = (s32)v1 < 2;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_0892010C; }
    goto L_089200DC;
L_089200DC:;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_089200B0; }
    goto L_089200E4;
L_089200E4:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+120);
    t_ = v0;
    a1 = 3;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089200F8;
L_089200F8:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = 0 + 0;
    goto L_08920104;
L_08920104:;
    v0 = LD32(v1+116);
    goto L_089200A4;
L_0892010C:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_089200B0; }
    goto L_08920114;
L_08920114:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = 1;
    goto L_089200A0;
L_08920124:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = 2;
    goto L_089200A0;
L_08920134:;
    a2 = D_08B25AC0 - (23232);
    a0 = LD32(a2+23232);
    a3 = a2 + 23232;
    a1 = LD32(a3+4);
    v0 = (u32)((s32)a0 >> 16);
    a0 = a0 << 16;
    a0 = a0 + v0;
    a0 = a0 + a1;
    v0 = a0 >> 1;
    f0 = BITSF(v0);
    v1 = D_08AED3FC - (-11268);
    v0 = D_08AED3F8 - (-11272);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v1-11268));
    f2 = BITSF(LD32(v0-11272));
    v0 = D_08AED3F4 - (-11276);
    f1 = f1 * f0;
    f0 = BITSF(LD32(v0-11276));
    a1 = a1 + a0;
    ST32(a3+4, a1);
    f1 = f1 * f2;
    ST32(s0+184, FBITS(f0));
    f1 = f1 + f2;
    ST32(a2+23232, a0);
    goto L_08920194;
L_08920194:;
    ST32(s0+188, FBITS(f1));
    goto L_089200AC;
L_0892019C:;
    v1 = LD32(s0+180);
    v0 = 1;
    cnd_ = v1 == v0;
    ST32(s0+188, 0);
    if (cnd_) { goto L_089201FC; }
    goto L_089201AC;
L_089201AC:;
    v0 = (s32)v1 < 2;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_089201E4; }
    goto L_089201B8;
L_089201B8:;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_089200B0; }
    goto L_089201C0;
L_089201C0:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+120);
    t_ = v0;
    a1 = 6;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089201D4;
L_089201D4:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = 1;
    goto L_08920104;
L_089201E4:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_089200B0; }
    goto L_089201EC;
L_089201EC:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = 4;
    goto L_089200A0;
L_089201FC:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = 5;
    goto L_089200A0;
L_0892020C:;
    a2 = D_08B25AC0 - (23232);
    a0 = LD32(a2+23232);
    a3 = a2 + 23232;
    a1 = LD32(a3+4);
    v0 = (u32)((s32)a0 >> 16);
    a0 = a0 << 16;
    a0 = a0 + v0;
    a0 = a0 + a1;
    v0 = a0 >> 1;
    f0 = BITSF(v0);
    v1 = D_08AED3FC - (-11268);
    v0 = D_08AED3F8 - (-11272);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v1-11268));
    f2 = BITSF(LD32(v0-11272));
    a1 = a1 + a0;
    f1 = f1 * f0;
    ST32(a3+4, a1);
    f1 = f1 * f2;
    ST32(a2+23232, a0);
    f1 = f1 + f2;
    ST32(s0+184, 0);
    goto L_08920194;
}

/* 08920268 */
void func_08920268(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08920268:;
    sp = sp - 16;
    f2 = BITSF(0);
    s0 = a0 + 0;
    f0 = BITSF(LD32(a0+188));
    f1 = BITSF(LD32(a0+36));
    f0 = f0 - f1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    ST32(a0+188, FBITS(f0));
    if (cnd_) { goto L_089202A8; }
    goto L_08920298;
L_08920298:;
    goto L_0892029C;
L_0892029C:;
    sp = sp + 16;
    return;
L_089202A8:;
    v0 = D_08AED400 - (-11264);
    f0 = BITSF(LD32(v0-11264));
    ST32(a0+188, FBITS(f0));
    v0 = func_0891FC30(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089202B8;
L_089202B8:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08920298; }
    goto L_089202C0;
L_089202C0:;
    func_0891FE28(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089202C8;
L_089202C8:;
    goto L_0892029C;
}

/* 089202D0 */
void func_089202D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089202D0:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0891FDDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089202E4;
L_089202E4:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = 3;
    if (cnd_) { goto L_0892033C; }
    goto L_089202F0;
L_089202F0:;
    v1 = D_08AED404 - (-11260);
    f2 = BITSF(LD32(s0+36));
    f0 = BITSF(LD32(v1-11260));
    f1 = BITSF(LD32(s0+184));
    v0 = D_08AED408 - (-11256);
    f2 = f2 * f0;
    f3 = BITSF(LD32(v0-11256));
    a0 = s0 + 0;
    a1 = 2;
    f1 = f1 + f2;
    fcc = FCMP(f3, f1, 14);
    cnd_ = fcc;
    ST32(s0+184, FBITS(f1));
    if (cnd_) { goto L_08920338; }
    goto L_08920328;
L_08920328:;
    goto L_0892032C;
L_0892032C:;
    sp = sp + 16;
    return;
L_08920338:;
    ST32(s0+184, FBITS(f3));
    goto L_0892033C;
L_0892033C:;
    func_0892004C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08920344;
L_08920344:;
    goto L_0892032C;
}

/* 0892034C */
void func_0892034C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892034C:;
    sp = sp - 16;
    f2 = BITSF(0);
    s0 = a0 + 0;
    f0 = BITSF(LD32(a0+188));
    f1 = BITSF(LD32(a0+36));
    f0 = f0 - f1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    ST32(a0+188, FBITS(f0));
    if (cnd_) { goto L_0892038C; }
    goto L_0892037C;
L_0892037C:;
    v0 = func_0891FDDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08920384;
L_08920384:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0892039C; }
    goto L_0892038C;
L_0892038C:;
    a0 = s0 + 0;
    a1 = 3;
    func_0892004C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08920398;
L_08920398:;
    goto L_0892039C;
L_0892039C:;
    sp = sp + 16;
    return;
}

/* 089203A8 */
void func_089203A8(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089203A8:;
    sp = sp - 16;
    v0 = D_08AED40C - (-11252);
    f3 = BITSF(0);
    f2 = BITSF(LD32(a0+36));
    f0 = BITSF(LD32(v0-11252));
    f1 = BITSF(LD32(a0+184));
    a1 = 4;
    f2 = f2 * f0;
    f1 = f1 - f2;
    fcc = FCMP(f1, f3, 14);
    cnd_ = fcc;
    ST32(a0+184, FBITS(f1));
    if (cnd_) { goto L_089203EC; }
    goto L_089203E0;
L_089203E0:;
    goto L_089203E4;
L_089203E4:;
    sp = sp + 16;
    return;
L_089203EC:;
    ST32(a0+184, FBITS(f3));
    func_0892004C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089203F4;
L_089203F4:;
    goto L_089203E4;
}

/* 089203FC */
void func_089203FC(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089203FC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0891FC30(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08920410;
L_08920410:;
    a1 = 0 + 0;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08920470; }
    goto L_0892041C;
L_0892041C:;
    f0 = BITSF(LD32(s0+188));
    goto L_08920420;
L_08920420:;
    f2 = BITSF(LD32(s0+36));
    f1 = BITSF(0);
    a0 = s0 + 0;
    f0 = f0 - f2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    ST32(s0+188, FBITS(f0));
    if (cnd_) { goto L_08920450; }
    goto L_08920440;
L_08920440:;
    goto L_08920444;
L_08920444:;
    sp = sp + 16;
    return;
L_08920450:;
    v0 = func_0891FDDC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08920458;
L_08920458:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08920440; }
    goto L_08920460;
L_08920460:;
    func_0891FE28(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08920468;
L_08920468:;
    goto L_08920444;
L_08920470:;
    func_0892004C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08920478;
L_08920478:;
    f0 = BITSF(LD32(s0+188));
    goto L_08920420;
}

/* 08920480 */
rv_t func_08920480(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08920480:;
    sp = sp - 64;
    a2 = 1;
    s1 = a1 + 0;
    a1 = a1 + 32;
    v1 = LD32(a0);
    v0 = LD32(v1+96);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089204AC;
L_089204AC:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = sp + 0;
    v0 = LD32(v1+104);
    a2 = 2;
    {v[112]=BITSF(LD32(s1+(48)));}
    {v[113]=BITSF(LD32(s1+(52)));}
    {v[114]=BITSF(LD32(s1+(56)));}
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
    t_ = v0;
    {ST32(sp+(32),FBITS(v[106]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08920554;
L_08920554:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
}

/* 08920568 */
u64 func_08920568(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08920568:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 1;
    s0 = a0 + 0;
    { u64 r_ = func_08921E00(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08920588;
L_08920588:;
    v0 = D_08AF80C0 - (-32576);
    v0 = v0 - 32576;
    ST32(s0+24, s1);
    ST32(s0, v0);
    ST32(s0+44, 0);
    ST32(s0+28, 0);
    ST32(s0+32, 0);
    ST32(s0+36, 0);
    ST32(s0+40, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089205C0 */
rv_t func_089205C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089205C0:;
    sp = sp - 16;
    v0 = D_08AF80C0 - (-32576);
    s0 = a0 + 0;
    v0 = v0 - 32576;
    v1 = LD32(a0+32);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08920600; }
    goto L_089205E8;
L_089205E8:;
    a0 = s0 + 0;
    v0 = func_08921E48(a0);
    goto L_089205F0;
L_089205F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08920600:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08920608;
L_08920608:;
    goto L_089205E8;
}

/* 08920610 */
rv_t func_08920610(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08920610:;
    sp = sp - 16;
    v0 = D_08AF80C0 - (-32576);
    s0 = a0 + 0;
    v0 = v0 - 32576;
    v1 = LD32(a0+32);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08920658; }
    goto L_08920638;
L_08920638:;
    a0 = s0 + 0;
    v0 = func_08921E48(a0);
    goto L_08920640;
L_08920640:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08920648;
L_08920648:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08920658:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08920660;
L_08920660:;
    goto L_08920638;
}

/* 08920668 */
rv_t func_08920668(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08920668:;
    sp = sp - 16;
    v0 = 41;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089206A4; }
    goto L_08920688;
L_08920688:;
    a2 = 0 + 0;
    goto L_0892068C;
L_0892068C:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089206A4:;
    s1 = LD32(a1+24);
    cnd_ = s1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08920688; }
    goto L_089206B0;
L_089206B0:;
    v0 = LD32(s1+8);
    a0 = v0 << 2;
    cnd_ = v0 == 0;
    ST32(s0+28, v0);
    if (cnd_) { goto L_0892068C; }
    goto L_089206C0;
L_089206C0:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089206C8;
L_089206C8:;
    a0 = v0 + 0;
    a2 = 0 + 0;
    cnd_ = v0 == 0;
    ST32(s0+32, v0);
    if (cnd_) { goto L_0892068C; }
    goto L_089206D8;
L_089206D8:;
    a2 = LD32(s0+28);
    a1 = LD32(s1+12);
    a2 = a2 << 2;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089206E8;
L_089206E8:;
    v1 = LD32(s1+16);
    a2 = 1;
    ST32(s0+36, v1);
    goto L_0892068C;
}

/* 089206F8 */
rv_t func_089206F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089206F8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a2 = 0 + 0;
    v0 = LD32(a0+24);
    ST32(a0+40, 0);
    a0 = v0 + 0;
    v1 = LD32(v0);
    ST32(s0+44, 0);
    a3 = LD32(s0+32);
    v0 = LD32(v1+44);
    t_ = v0;
    a1 = LD32(a3);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08920730;
L_08920730:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0892074C; }
    goto L_08920740;
L_08920740:;
    { u64 r_ = func_08922370(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08920748;
L_08920748:;
    v1 = 1;
    goto L_0892074C;
L_0892074C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08920760 */
rv_t func_08920760(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08920760:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = LD32(a0+16);
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    ST32(sp, v0);
    if (cnd_) { goto L_0892079C; }
    goto L_08920780;
L_08920780:;
    v0 = func_089224D8(a0, a1);
    goto L_08920788;
L_08920788:;
    a0 = LD32(s0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892079C;
L_0892079C:;
    ST32(s0+44, 0);
    ST32(s0+40, 0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089207B4 */
rv_t func_089207B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089207B4:;
    sp = sp - 32;
    v1 = LD32(a0+16);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089207DC; }
    goto L_089207CC;
L_089207CC:;
    v0 = LD32(v1+8);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 != 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_089207EC; }
    goto L_089207DC;
L_089207DC:;
    goto L_089207E0;
L_089207E0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089207EC:;
    ST32(sp, v1);
    v0 = func_089224D8(a0, a1);
    goto L_089207F4;
L_089207F4:;
    a0 = LD32(sp);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089207FC;
L_089207FC:;
    a0 = LD32(s0+24);
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08920810;
L_08920810:;
    v0 = LD32(s0+40);
    v1 = LD32(s0+28);
    v0 = v0 + 1;
    cnd_ = v0 == v1;
    ST32(s0+40, v0);
    if (cnd_) { goto L_08920880; }
    goto L_08920824;
L_08920824:;
    a0 = LD32(s0+24);
    v1 = LD32(s0+40);
    v0 = LD32(s0+32);
    a1 = LD32(a0);
    v1 = v1 << 2;
    v1 = v1 + v0;
    v0 = LD32(a1+44);
    a1 = LD32(v1);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892084C;
L_0892084C:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08920864; }
    goto L_08920854;
L_08920854:;
    v0 = LD32(s0+8);
    v0 = v0 | 0x10;
    goto L_0892085C;
L_0892085C:;
    ST32(s0+8, v0);
    goto L_089207DC;
L_08920864:;
    a0 = v0 + 0;
    { rv_t r_ = func_08921F94(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892086C;
L_0892086C:;
    a1 = LD32(sp);
    a0 = s0 + 0;
    { u64 r_ = func_08922370(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08920878;
L_08920878:;
    goto L_089207E0;
L_08920880:;
    v1 = LD32(s0+36);
    cnd_ = v1 == 0;
    if (cnd_) { ST32(s0+40, 0); goto L_08920824; }
    goto L_0892088C;
L_0892088C:;
    v0 = LD32(s0+44);
    v0 = v0 + 1;
    v1 = (s32)v0 < (s32)v1;
    cnd_ = v1 == 0;
    ST32(s0+44, v0);
    if (cnd_) { goto L_089208A8; }
    goto L_089208A0;
L_089208A0:;
    ST32(s0+40, 0);
    goto L_08920824;
L_089208A8:;
    v0 = LD32(s0+8);
    v0 = v0 | 0x8;
    goto L_0892085C;
}

/* 089208B4 */
u64 func_089208B4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089208B4:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 2;
    s0 = a0 + 0;
    { u64 r_ = func_08921E00(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089208D4;
L_089208D4:;
    v0 = D_08AF8088 - (-32632);
    v0 = v0 - 32632;
    ST32(s0+24, s1);
    ST32(s0, v0);
    ST32(s0+36, 0);
    ST32(s0+28, 0);
    ST32(s0+32, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08920904 */
rv_t func_08920904(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08920904:;
    sp = sp - 16;
    v0 = D_08AF8088 - (-32632);
    s0 = a0 + 0;
    v0 = v0 - 32632;
    v1 = LD32(a0+32);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08920944; }
    goto L_0892092C;
L_0892092C:;
    a0 = s0 + 0;
    v0 = func_08921E48(a0);
    goto L_08920934;
L_08920934:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08920944:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892094C;
L_0892094C:;
    goto L_0892092C;
}

/* 08920954 */
rv_t func_08920954(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08920954:;
    sp = sp - 16;
    v0 = D_08AF8088 - (-32632);
    s0 = a0 + 0;
    v0 = v0 - 32632;
    v1 = LD32(a0+32);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0892099C; }
    goto L_0892097C;
L_0892097C:;
    a0 = s0 + 0;
    v0 = func_08921E48(a0);
    goto L_08920984;
L_08920984:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892098C;
L_0892098C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0892099C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089209A4;
L_089209A4:;
    goto L_0892097C;
}

/* 089209AC */
rv_t func_089209AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089209AC:;
    sp = sp - 16;
    v0 = 41;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089209E8; }
    goto L_089209CC;
L_089209CC:;
    v1 = 0 + 0;
    goto L_089209D0;
L_089209D0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089209E8:;
    s1 = LD32(a1+24);
    cnd_ = s1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089209CC; }
    goto L_089209F4;
L_089209F4:;
    v0 = LD32(s1+8);
    a0 = v0 << 2;
    cnd_ = v0 == 0;
    ST32(s0+28, v0);
    if (cnd_) { goto L_089209D0; }
    goto L_08920A04;
L_08920A04:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08920A0C;
L_08920A0C:;
    a0 = v0 + 0;
    v1 = 0 + 0;
    cnd_ = v0 == 0;
    ST32(s0+32, v0);
    if (cnd_) { goto L_089209D0; }
    goto L_08920A1C;
L_08920A1C:;
    a2 = LD32(s0+28);
    a1 = LD32(s1+12);
    a2 = a2 << 2;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08920A2C;
L_08920A2C:;
    v1 = 1;
    goto L_089209D0;
}

/* 08920A34 */
rv_t func_08920A34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08920A34:;
    sp = sp - 32;
    s2 = 0 + 0;
    s1 = 0 + 0;
    f20 = BITSF(0);
    v0 = LD32(a0+28);
    cnd_ = (s32)v0 <= 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08920AAC; }
    goto L_08920A64;
L_08920A64:;
    a0 = LD32(s0+24);
    goto L_08920A68;
L_08920A68:;
    v1 = LD32(s0+32);
    v0 = s1 << 2;
    a2 = LD32(a0);
    v0 = v0 + v1;
    v1 = LD32(a2+40);
    t_ = v1;
    a1 = LD32(v0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08920A84;
L_08920A84:;
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    v0 = LD32(s0+28);
    if (cnd_) { goto L_08920A9C; }
    goto L_08920A94;
L_08920A94:;
    f20 = f0;
    s2 = s1 + 0;
    goto L_08920A9C;
L_08920A9C:;
    s1 = s1 + 1;
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+24); goto L_08920A68; }
    goto L_08920AAC;
L_08920AAC:;
    a0 = LD32(s0+24);
    v1 = LD32(s0+32);
    v0 = s2 << 2;
    a2 = LD32(a0);
    v0 = v0 + v1;
    a1 = LD32(v0);
    v0 = LD32(a2+44);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08920AD0;
L_08920AD0:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08920AE8; }
    goto L_08920AD8;
L_08920AD8:;
    a0 = s0 + 0;
    a1 = v0 + 0;
    { u64 r_ = func_08922370(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08920AE4;
L_08920AE4:;
    v1 = 1;
    goto L_08920AE8;
L_08920AE8:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08920B08 */
rv_t func_08920B08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08920B08:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_08920B50; }
    goto L_08920B24;
L_08920B24:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08920B2C;
L_08920B2C:;
    a0 = LD32(s0+24);
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08920B40;
L_08920B40:;
    v0 = LD32(s0+16);
    ST32(sp, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08920B24; }
    goto L_08920B50;
L_08920B50:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08920B60 */
rv_t func_08920B60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08920B60:;
    sp = sp - 48;
    v0 = LD32(a0+8);
    v0 = v0 & 0x10;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08920C60; }
    goto L_08920B88;
L_08920B88:;
    v0 = LD32(a0+28);
    s2 = 0 + 0;
    f20 = BITSF(0);
    cnd_ = (s32)v0 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08920BE4; }
    goto L_08920B9C;
L_08920B9C:;
    a0 = LD32(s0+24);
    goto L_08920BA0;
L_08920BA0:;
    v1 = LD32(s0+32);
    v0 = s1 << 2;
    a2 = LD32(a0);
    v0 = v0 + v1;
    v1 = LD32(a2+40);
    t_ = v1;
    a1 = LD32(v0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08920BBC;
L_08920BBC:;
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    v0 = LD32(s0+28);
    if (cnd_) { goto L_08920BD4; }
    goto L_08920BCC;
L_08920BCC:;
    f20 = f0;
    s2 = s1 + 0;
    goto L_08920BD4;
L_08920BD4:;
    s1 = s1 + 1;
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+24); goto L_08920BA0; }
    goto L_08920BE4;
L_08920BE4:;
    v0 = LD32(s0+32);
    s1 = s2 << 2;
    a0 = LD32(s0+36);
    v0 = s1 + v0;
    v1 = LD32(v0);
    cnd_ = v1 == a0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08920C60; }
    goto L_08920C00;
L_08920C00:;
    v0 = LD32(s0+16);
    a1 = v0 + 0;
    ST32(sp, v0);
    v0 = func_089224D8(a0, a1);
    goto L_08920C10;
L_08920C10:;
    a0 = LD32(sp);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08920C18;
L_08920C18:;
    a0 = LD32(s0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08920C2C;
L_08920C2C:;
    a0 = LD32(s0+24);
    v0 = LD32(s0+32);
    v1 = LD32(a0);
    v0 = s1 + v0;
    a1 = LD32(v0);
    v0 = LD32(v1+44);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08920C4C;
L_08920C4C:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08920C7C; }
    goto L_08920C54;
L_08920C54:;
    v0 = LD32(s0+8);
    v0 = v0 | 0x10;
    ST32(s0+8, v0);
    goto L_08920C60;
L_08920C60:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08920C7C:;
    a0 = v0 + 0;
    { rv_t r_ = func_08921F94(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08920C84;
L_08920C84:;
    a1 = LD32(sp);
    a0 = s0 + 0;
    { u64 r_ = func_08922370(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08920C90;
L_08920C90:;
    v0 = LD32(sp);
    v1 = LD32(v0+4);
    ST32(s0+36, v1);
    goto L_08920C60;
}

/* 08920CA0 */
u64 func_08920CA0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08920CA0:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 3;
    s0 = a0 + 0;
    { u64 r_ = func_08921E00(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08920CC0;
L_08920CC0:;
    v0 = D_08AF8050 - (-32688);
    v0 = v0 - 32688;
    ST32(s0+24, s1);
    ST32(s0, v0);
    ST32(s0+48, 0);
    ST32(s0+28, 0);
    ST32(s0+32, 0);
    ST32(s0+36, 0);
    ST8(s0+40, 0);
    ST32(s0+44, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08920CFC */
rv_t func_08920CFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08920CFC:;
    sp = sp - 16;
    v0 = D_08AF8050 - (-32688);
    s0 = a0 + 0;
    v0 = v0 - 32688;
    v1 = LD32(a0+32);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08920D3C; }
    goto L_08920D24;
L_08920D24:;
    a0 = s0 + 0;
    v0 = func_08921E48(a0);
    goto L_08920D2C;
L_08920D2C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08920D3C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08920D44;
L_08920D44:;
    goto L_08920D24;
}

/* 08920D4C */
rv_t func_08920D4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08920D4C:;
    sp = sp - 16;
    v0 = D_08AF8050 - (-32688);
    s0 = a0 + 0;
    v0 = v0 - 32688;
    v1 = LD32(a0+32);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08920D94; }
    goto L_08920D74;
L_08920D74:;
    a0 = s0 + 0;
    v0 = func_08921E48(a0);
    goto L_08920D7C;
L_08920D7C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08920D84;
L_08920D84:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08920D94:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08920D9C;
L_08920D9C:;
    goto L_08920D74;
}

/* 08920DA4 */
rv_t func_08920DA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08920DA4:;
    sp = sp - 16;
    v0 = 41;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08920DDC; }
    goto L_08920DC4;
L_08920DC4:;
    v0 = 0 + 0;
    goto L_08920DC8;
L_08920DC8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08920DDC:;
    s0 = LD32(a1+24);
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08920DC4; }
    goto L_08920DE8;
L_08920DE8:;
    a0 = LD32(s0+8);
    cnd_ = a0 == 0;
    ST32(s1+28, a0);
    if (cnd_) { goto L_08920DC8; }
    goto L_08920DF4;
L_08920DF4:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08920DFC;
L_08920DFC:;
    a0 = v0 + 0;
    ST32(s1+32, v0);
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08920DC8; }
    goto L_08920E0C;
L_08920E0C:;
    a2 = LD32(s1+28);
    a1 = LD32(s0+12);
    a2 = a2 << 2;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08920E1C;
L_08920E1C:;
    v1 = LD_U8(s0+20);
    v0 = LD32(s0+16);
    ST8(s1+40, v1);
    cnd_ = v1 == 0;
    ST32(s1+36, v0);
    if (cnd_) { goto L_08920EBC; }
    goto L_08920E30;
L_08920E30:;
    a0 = LD32(s1+28);
    cnd_ = (s32)a0 <= 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08920EBC; }
    goto L_08920E3C;
L_08920E3C:;
    t1 = LD32(s1+32);
    t0 = D_08B25AC0 - (23232);
    t2 = t0 + 23232;
    v1 = LD32(t0+23232);
    goto L_08920E4C;
L_08920E4C:;
    a1 = LD32(t2+4);
    a0 = a0 - 1;
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a1;
    a0 = a0 - a3;
    v0 = v1 >> 1;
    { u32 x_ = v0, y_ = a0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a1 = a1 + v1;
    v0 = a3 + 1;
    ST32(t2+4, a1);
    a0 = a3 << 2;
    a3 = v0 + 0;
    ST32(t0+23232, v1);
    a0 = a0 + t1;
    a1 = LD32(a0);
    a2 = hi;
    v0 = v0 + a2;
    v0 = v0 << 2;
    v0 = v0 + t1;
    v1 = LD32(v0);
    ST32(a0, v1);
    ST32(v0, a1);
    a0 = LD32(s1+28);
    v0 = (s32)a3 < (s32)a0;
    cnd_ = v0 != 0;
    v1 = LD32(t0+23232);
    if (cnd_) { goto L_08920E4C; }
    goto L_08920EBC;
L_08920EBC:;
    v0 = 1;
    goto L_08920DC8;
}

/* 08920EC4 */
rv_t func_08920EC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08920EC4:;
    sp = sp - 16;
    a3 = D_08B25AC0 - (23232);
    t0 = a3 + 23232;
    s0 = a0 + 0;
    v0 = LD_U8(a0+40);
    ST32(a0+44, 0);
    cnd_ = v0 == 0;
    ST32(a0+48, 0);
    if (cnd_) { goto L_08920F38; }
    goto L_08920EEC;
L_08920EEC:;
    v0 = LD32(a0+32);
    a1 = LD32(v0);
    goto L_08920EF4;
L_08920EF4:;
    a0 = LD32(s0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08920F08;
L_08920F08:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08920F24; }
    goto L_08920F18;
L_08920F18:;
    { u64 r_ = func_08922370(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08920F20;
L_08920F20:;
    v1 = 1;
    goto L_08920F24;
L_08920F24:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08920F38:;
    v1 = LD32(a3+23232);
    a1 = LD32(t0+4);
    a2 = LD32(a0+28);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a1;
    v0 = v1 >> 1;
    { u32 x_ = v0, y_ = a2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a1 = a1 + v1;
    v0 = LD32(s0+32);
    ST32(t0+4, a1);
    ST32(a3+23232, v1);
    a0 = hi;
    a0 = a0 << 2;
    a0 = a0 + v0;
    a1 = LD32(a0);
    goto L_08920EF4;
}

/* 08920F80 */
rv_t func_08920F80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08920F80:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = LD32(a0+16);
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08920FBC; }
    goto L_08920FA0;
L_08920FA0:;
    v0 = func_089224D8(a0, a1);
    goto L_08920FA8;
L_08920FA8:;
    a0 = LD32(s0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08920FBC;
L_08920FBC:;
    ST32(s0+48, 0);
    ST32(s0+44, 0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08920FD4 */
rv_t func_08920FD4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08920FD4:;
    sp = sp - 32;
    v1 = LD32(a0+16);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08921000; }
    goto L_08920FF0;
L_08920FF0:;
    v0 = LD32(v1+8);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 != 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_08921014; }
    goto L_08921000;
L_08921000:;
    goto L_08921004;
L_08921004:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08921014:;
    ST32(sp, v1);
    v0 = func_089224D8(a0, a1);
    goto L_0892101C;
L_0892101C:;
    a0 = LD32(sp);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08921024;
L_08921024:;
    a0 = LD32(s1+24);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08921038;
L_08921038:;
    v1 = LD_U8(s1+40);
    cnd_ = v1 == 0;
    a3 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_08921168; }
    goto L_08921044;
L_08921044:;
    v0 = LD32(s1+48);
    v1 = LD32(s1+28);
    a0 = v0 + 1;
    cnd_ = a0 == v1;
    ST32(s1+48, a0);
    if (cnd_) { goto L_089210B4; }
    goto L_08921058;
L_08921058:;
    a3 = LD32(s1+32);
    v0 = LD32(s1+48);
    goto L_08921060;
L_08921060:;
    v0 = v0 << 2;
    v0 = v0 + a3;
    a1 = LD32(v0);
    goto L_0892106C;
L_0892106C:;
    a0 = LD32(s1+24);
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08921080;
L_08921080:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089210A4; }
    goto L_08921088;
L_08921088:;
    a0 = v0 + 0;
    { rv_t r_ = func_08921F94(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08921090;
L_08921090:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08922370(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892109C;
L_0892109C:;
    goto L_08921004;
L_089210A4:;
    v0 = LD32(s1+8);
    v0 = v0 | 0x10;
    ST32(s1+8, v0);
    goto L_08921000;
L_089210B4:;
    v1 = LD32(s1+36);
    cnd_ = v1 == 0;
    if (cnd_) { ST32(s1+48, 0); goto L_089210D8; }
    goto L_089210C0;
L_089210C0:;
    v0 = LD32(s1+44);
    v0 = v0 + 1;
    v1 = (s32)v0 < (s32)v1;
    cnd_ = v1 == 0;
    ST32(s1+44, v0);
    if (cnd_) { goto L_08921000; }
    goto L_089210D4;
L_089210D4:;
    ST32(s1+48, 0);
    goto L_089210D8;
L_089210D8:;
    cnd_ = (s32)a0 <= 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08921058; }
    goto L_089210E0;
L_089210E0:;
    a3 = LD32(s1+32);
    t1 = D_08B25AC0 - (23232);
    t2 = t1 + 23232;
    v1 = LD32(t1+23232);
    goto L_089210F0;
L_089210F0:;
    a1 = LD32(t2+4);
    a0 = a0 - 1;
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a1;
    a0 = a0 - t0;
    v0 = v1 >> 1;
    { u32 x_ = v0, y_ = a0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a1 = a1 + v1;
    v0 = t0 + 1;
    ST32(t2+4, a1);
    a0 = t0 << 2;
    t0 = v0 + 0;
    ST32(t1+23232, v1);
    a0 = a0 + a3;
    a1 = LD32(a0);
    a2 = hi;
    v0 = v0 + a2;
    v0 = v0 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    ST32(a0, v1);
    ST32(v0, a1);
    a0 = LD32(s1+28);
    v0 = (s32)t0 < (s32)a0;
    cnd_ = v0 != 0;
    v1 = LD32(t1+23232);
    if (cnd_) { goto L_089210F0; }
    goto L_08921160;
L_08921160:;
    v0 = LD32(s1+48);
    goto L_08921060;
L_08921168:;
    v1 = LD32(a3+23232);
    t0 = a3 + 23232;
    a1 = LD32(t0+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    a2 = LD32(s1+28);
    v1 = v1 + v0;
    v1 = v1 + a1;
    v0 = v1 >> 1;
    { u32 x_ = v0, y_ = a2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a1 = a1 + v1;
    v0 = LD32(s1+32);
    ST32(t0+4, a1);
    ST32(a3+23232, v1);
    a0 = hi;
    a0 = a0 << 2;
    a0 = a0 + v0;
    a1 = LD32(a0);
    goto L_0892106C;
}

/* 089211B4 */
u64 func_089211B4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089211B4:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 4;
    s0 = a0 + 0;
    { u64 r_ = func_08921E00(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089211D4;
L_089211D4:;
    v0 = D_08AF8018 - (-32744);
    v0 = v0 - 32744;
    ST32(s0+24, s1);
    ST32(s0, v0);
    ST32(s0+32, 0);
    ST32(s0+28, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08921200 */
rv_t func_08921200(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08921200:;
    sp = sp - 16;
    v0 = D_08AF8018 - (-32744);
    s0 = a0 + 0;
    v0 = v0 - 32744;
    v1 = LD32(a0+32);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08921240; }
    goto L_08921228;
L_08921228:;
    a0 = s0 + 0;
    v0 = func_08921E48(a0);
    goto L_08921230;
L_08921230:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08921240:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08921248;
L_08921248:;
    goto L_08921228;
}

/* 08921250 */
rv_t func_08921250(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08921250:;
    sp = sp - 16;
    v0 = D_08AF8018 - (-32744);
    s0 = a0 + 0;
    v0 = v0 - 32744;
    v1 = LD32(a0+32);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08921298; }
    goto L_08921278;
L_08921278:;
    a0 = s0 + 0;
    v0 = func_08921E48(a0);
    goto L_08921280;
L_08921280:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08921288;
L_08921288:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08921298:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089212A0;
L_089212A0:;
    goto L_08921278;
}

/* 089212A8 */
rv_t func_089212A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089212A8:;
    sp = sp - 16;
    v0 = 41;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089212E4; }
    goto L_089212C8;
L_089212C8:;
    v1 = 0 + 0;
    goto L_089212CC;
L_089212CC:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089212E4:;
    s1 = LD32(a1+24);
    cnd_ = s1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089212C8; }
    goto L_089212F0;
L_089212F0:;
    v0 = LD32(s1+8);
    a0 = v0 << 2;
    cnd_ = v0 == 0;
    ST32(s0+28, v0);
    if (cnd_) { goto L_089212CC; }
    goto L_08921300;
L_08921300:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08921308;
L_08921308:;
    a0 = v0 + 0;
    v1 = 0 + 0;
    cnd_ = v0 == 0;
    ST32(s0+32, v0);
    if (cnd_) { goto L_089212CC; }
    goto L_08921318;
L_08921318:;
    a2 = LD32(s0+28);
    a1 = LD32(s1+12);
    a2 = a2 << 2;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08921328;
L_08921328:;
    v1 = 1;
    goto L_089212CC;
}

/* 08921330 */
rv_t func_08921330(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08921330:;
    sp = sp - 16;
    s1 = 0 + 0;
    v0 = LD32(a0+28);
    cnd_ = (s32)v0 <= 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089213A0; }
    goto L_08921350;
L_08921350:;
    a0 = LD32(s0+24);
    goto L_08921354;
L_08921354:;
    v1 = LD32(s0+32);
    v0 = s1 << 2;
    a2 = LD32(a0);
    v0 = v0 + v1;
    a1 = LD32(v0);
    v0 = LD32(a2+44);
    a2 = 0 + 0;
    t_ = v0;
    s1 = s1 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08921378;
L_08921378:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089213A4; }
    goto L_08921388;
L_08921388:;
    { u64 r_ = func_08922370(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08921390;
L_08921390:;
    v0 = LD32(s0+28);
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+24); goto L_08921354; }
    goto L_089213A0;
L_089213A0:;
    v1 = 1;
    goto L_089213A4;
L_089213A4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089213BC */
rv_t func_089213BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089213BC:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_08921404; }
    goto L_089213D8;
L_089213D8:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_089213E0;
L_089213E0:;
    a0 = LD32(s0+24);
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089213F4;
L_089213F4:;
    v0 = LD32(s0+16);
    ST32(sp, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089213D8; }
    goto L_08921404;
L_08921404:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08921414 */
rv_t func_08921414(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08921414:;
    v1 = LD32(a0+16);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0892143C; }
    goto L_08921420;
L_08921420:;
    v0 = LD32(v1+8);
    goto L_08921424;
L_08921424:;
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+8); goto L_08921444; }
    goto L_08921430;
L_08921430:;
    v1 = LD32(v1+12);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08921424; }
    goto L_0892143C;
L_0892143C:;
    return (rv_t){ v0, v1, f0 };
L_08921444:;
    v0 = v0 | 0x8;
    ST32(a0+8, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08921450 */
rv_t func_08921450(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08921450:;
    v0 = D_08C251FC - (20988);
    f6 = BITSF(LD32(v0+20988));
    f0 = BITSF(0);
    v1 = D_08C251F0 - (20976);
    sp = sp - 16;
    fcc = FCMP(f6, f0, 2);
    a1 = v1 + 20976;
    cnd_ = !fcc;
    v0 = a0 + 32;
    if (cnd_) { goto L_089214D4; }
    goto L_08921474;
L_08921474:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v1+20976));
    f4 = BITSF(LD32(a1+8));
    f3 = BITSF(LD32(a1+4));
    f1 = BITSF(LD32(a0+32));
    f2 = f2 - f4;
    f0 = f0 - f3;
    f1 = f1 - f5;
    ST32(sp+8, FBITS(f2));
    v0 = FBITS(f1);
    {vr0=BITSF(v0);}
    v0 = FBITS(f0);
    {vr1=BITSF(v0);}
    v0 = FBITS(f2);
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    goto L_089214CC;
L_089214CC:;
    sp = sp + 16;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return (rv_t){ v0, v1, f0 }; }
L_089214D4:;
    fcc = FCMP(f6, f0, 12);
    a2 = D_08C251F0 - (20976);
    v1 = a0 + 32;
    t0 = a2 + 20976;
    f7 = f0;
    cnd_ = !fcc;
    f8 = f0;
    if (cnd_) { goto L_08921564; }
    goto L_089214F0;
L_089214F0:;
    f3 = BITSF(LD32(v1+8));
    f4 = BITSF(LD32(t0+8));
    f0 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(t0+4));
    f1 = BITSF(LD32(a0+32));
    f5 = BITSF(LD32(a2+20976));
    f0 = f0 - f2;
    f3 = f3 - f4;
    f1 = f1 - f5;
    ST32(sp+4, FBITS(f0));
    v0 = FBITS(f1);
    {vr0=BITSF(v0);}
    v0 = FBITS(f0);
    {vr1=BITSF(v0);}
    v0 = FBITS(f3);
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp, FBITS(f1));
    ST32(sp+8, FBITS(f3));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f0 = f6 - f0;
    fcc = FCMP(f0, f7, 14);
    cnd_ = !fcc;
    if (cnd_) { f8 = f0; goto L_0892155C; }
    goto L_0892155C;
L_0892155C:;
    f0 = f8;
    goto L_089214CC;
L_08921564:;
    f5 = BITSF(LD32(a2+20976));
    f3 = BITSF(LD32(v1+8));
    f4 = BITSF(LD32(t0+8));
    f0 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(t0+4));
    f1 = BITSF(LD32(a0+32));
    f3 = f3 - f4;
    f0 = f0 - f2;
    f1 = f1 - f5;
    ST32(sp+8, FBITS(f3));
    v0 = FBITS(f1);
    {vr0=BITSF(v0);}
    v0 = FBITS(f0);
    {vr1=BITSF(v0);}
    v0 = FBITS(f3);
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f1 = f0 - f6;
    fcc = FCMP(f1, f7, 14);
    cnd_ = !fcc;
    if (cnd_) { f7 = f1; goto L_089215D0; }
    goto L_089215D0;
L_089215D0:;
    f0 = f7;
    goto L_089214CC;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}

/* 089215D8 */
rv_t func_089215D8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_089215D8:;
    v0 = D_08C251EC - (20972);
    v1 = LD32(v0+20972);
    v0 = D_08AED41C - (-11236);
    f1 = BITSF(LD32(v0-11236));
    a3 = 0 + 0;
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0892162C; }
    goto L_089215F4;
L_089215F4:;
    a2 = v1 + 0;
    goto L_089215F8;
L_089215F8:;
    v0 = LD_U8(a0+16);
    a1 = a1 + 1;
    cnd_ = v0 == 0;
    v1 = a1 < a2;
    if (cnd_) { goto L_08921624; }
    goto L_08921608;
L_08921608:;
    f0 = BITSF(LD32(a0+8));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08921624; }
    goto L_0892161C;
L_0892161C:;
    f1 = f0;
    a3 = a0 + 0;
    goto L_08921624;
L_08921624:;
    cnd_ = v1 != 0;
    a0 = a0 + 28;
    if (cnd_) { goto L_089215F8; }
    goto L_0892162C;
L_0892162C:;
    v0 = a3 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08921634 */
rv_t func_08921634(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08921634:;
    sp = sp - 16;
    a1 = a0 + 0;
    a2 = D_08B28E18 - (-29160);
    v0 = 999;
    v1 = a2 - 29160;
    cnd_ = a1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08921698; }
    goto L_08921654;
L_08921654:;
    v0 = LD32(v1+4);
    v1 = LD32(a2-29160);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    if (cnd_) { v1 = LD_U16(a0+8); goto L_0892169C; }
    goto L_08921678;
L_08921678:;
    a0 = LD32(v1);
    goto L_0892167C;
L_0892167C:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(a0+16); goto L_089216C0; }
    goto L_08921688;
L_08921688:;
    v1 = LD32(v1+4);
    goto L_0892168C;
L_0892168C:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_0892167C; }
    goto L_08921694;
L_08921694:;
    a0 = 0 + 0;
    goto L_08921698;
L_08921698:;
    v1 = LD_U16(a0+8);
    goto L_0892169C;
L_0892169C:;
    v0 = 60;
    f0 = BITSF(0);
    cnd_ = v1 != v0;
    if (cnd_) { goto L_089216B8; }
    goto L_089216AC;
L_089216AC:;
    a1 = (u32)-1;
    { rv_t r_ = func_08857F20(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089216B4;
L_089216B4:;
    goto L_089216B8;
L_089216B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089216C0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_0892168C; }
    goto L_089216CC;
L_089216CC:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_0892168C; }
    goto L_089216D8;
L_089216D8:;
    v1 = LD_U16(a0+8);
    goto L_0892169C;
}

/* 089216E0 */
u32 func_089216E0(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_089216E0:;
    v0 = a0 ^ a1;
    v0 = v0 < 0x1u;
    return v0;
}

/* 089216EC */
u64 func_089216EC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089216EC:;
    sp = sp - 16;
    v0 = a0 + 0;
    a0 = D_08B28E18 - (-29160);
    a0 = a0 - 29160;
    s2 = a1 + 0;
    a2 = 1;
    a1 = v0 + 0;
    v0 = func_08AAAADC(a0, a1, a2);
    goto L_0892171C;
L_0892171C:;
    s1 = v0 + 0;
    v1 = LD_U16(v0+8);
    v0 = 60;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = LD32(s1+92); goto L_08921734; }
    goto L_08921730;
L_08921730:;
    a0 = LD32(s1+68);
    goto L_08921734;
L_08921734:;
    v1 = D_08C251E8 - (20968);
    a1 = LD32(v1+20968);
    v0 = a0 << 3;
    v0 = v0 - a0;
    v0 = v0 << 2;
    s0 = a1 + v0;
    a0 = LD32(s0+24);
    { rv_t r_ = func_08921634(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08921754;
L_08921754:;
    f1 = BITSF(LD32(s2));
    v0 = LD_U8(s0+16);
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    f1 = f1 + f0;
    if (cnd_) { goto L_08921774; }
    goto L_08921768;
L_08921768:;
    v0 = LD_U8(s0+17);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0, FBITS(f1)); goto L_0892178C; }
    goto L_08921774;
L_08921774:;
    f0 = BITSF(LD32(s0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089217B4; }
    goto L_08921788;
L_08921788:;
    ST32(s0, FBITS(f1));
    goto L_0892178C;
L_0892178C:;
    ST32(s0+20, s2);
    { rv_t r_ = func_08921450(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08921794;
L_08921794:;
    f1 = BITSF(LD32(s0));
    v0 = 1;
    ST8(s0+16, v0);
    f1 = f1 + f0;
    ST32(s0+4, FBITS(f0));
    ST32(s0+8, FBITS(f1));
    ST8(s0+17, 0);
    goto L_089217B4;
L_089217B4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089217C8 */
rv_t func_089217C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089217C8:;
    sp = sp - 64;
    s3 = a0 + 0;
    a0 = 0 + 0;
    s5 = a3 & 0xff;
    s4 = a1 + 0;
    cnd_ = s3 == 0;
    ST32(sp, a2);
    if (cnd_) { goto L_089219EC; }
    goto L_0892180C;
L_0892180C:;
    v0 = LD32(s3+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_089219F0; }
    goto L_08921818;
L_08921818:;
    func_08921A48(t1, t2, t3);
    goto L_08921820;
L_08921820:;
    v0 = D_08B28E18 - (-29160);
    a0 = v0 - 29160;
    a1 = s4 + 0;
    a2 = 1;
    v0 = func_08AAAADC(a0, a1, a2);
    goto L_08921834;
L_08921834:;
    v1 = v0 + 32;
    f1 = BITSF(LD32(v0+32));
    v0 = D_08C251EC - (20972);
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    a1 = LD32(v0+20972);
    v0 = D_08C251F0 - (20976);
    v1 = v0 + 20976;
    ST32(v0+20976, FBITS(f1));
    v0 = D_08C251FC - (20988);
    a0 = 0 + 0;
    ST32(v1+8, FBITS(f2));
    ST32(v1+4, FBITS(f0));
    cnd_ = a1 == 0;
    ST32(v0+20988, 0);
    if (cnd_) { goto L_089219EC; }
    goto L_08921870;
L_08921870:;
    cnd_ = a1 == 0;
    fp = D_08C251E8 - (20968);
    if (cnd_) { goto L_08921894; }
    goto L_08921878;
L_08921878:;
    v1 = LD32(fp+20968);
    goto L_0892187C;
L_0892187C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST8(v1+16, 0);
    ST8(v1+17, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 28;
    if (cnd_) { goto L_0892187C; }
    goto L_08921894;
L_08921894:;
    v1 = LD_U16(s3+8);
    v0 = 60;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(s3+92); goto L_089218A8; }
    goto L_089218A4;
L_089218A4:;
    v1 = LD32(s3+68);
    goto L_089218A8;
L_089218A8:;
    a0 = LD32(fp+20968);
    v0 = v1 << 3;
    v0 = v0 - v1;
    v0 = v0 << 2;
    s2 = a0 + v0;
    v1 = 1;
    ST8(s2+16, v1);
    a0 = s3 + 0;
    s7 = 60;
    ST32(s2, 0);
    s6 = 1;
    { rv_t r_ = func_08921450(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089218D8;
L_089218D8:;
    f1 = BITSF(LD32(s2));
    ST32(s2+20, 0);
    f1 = f0 + f1;
    ST32(s2+4, FBITS(f0));
    ST32(s2+8, FBITS(f1));
    goto L_089218EC;
L_089218EC:;
    a0 = LD32(fp+20968);
    { rv_t r_ = func_089215D8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089218F4;
L_089218F4:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08921A34; }
    goto L_089218FC;
L_089218FC:;
    a1 = LD32(s2+24);
    v1 = D_08B28E18 - (-29160);
    a0 = v1 - 29160;
    a2 = 1;
    v0 = func_08AAAADC(a0, a1, a2);
    goto L_08921910;
L_08921910:;
    cnd_ = s5 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0892192C; }
    goto L_08921918;
L_08921918:;
    cnd_ = v0 == s3;
    v1 = 55;
    if (cnd_) { goto L_0892192C; }
    goto L_08921920;
L_08921920:;
    v0 = LD_U16(v0+8);
    cnd_ = v0 == v1;
    if (cnd_) { v0 = LD32(s0+104); goto L_08921A20; }
    goto L_0892192C;
L_0892192C:;
    a0 = LD32(s2+24);
    goto L_08921930;
L_08921930:;
    a1 = s4 + 0;
    v0 = func_089216E0(a0, a1);
    goto L_08921938;
L_08921938:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s3+4); goto L_089219B0; }
    goto L_08921940;
L_08921940:;
    v0 = LD_U16(s0+8);
    cnd_ = v0 == s7;
    if (cnd_) { a0 = LD32(s0+80); goto L_089219A0; }
    goto L_0892194C;
L_0892194C:;
    v0 = LD32(s0+28);
    goto L_08921950;
L_08921950:;
    v0 = (v0 >> 4) & 0xff;
    cnd_ = v0 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08921968; }
    goto L_0892195C;
L_0892195C:;
    ST8(s2+16, 0);
    goto L_08921960;
L_08921960:;
    ST8(s2+17, s6);
    goto L_089218EC;
L_08921968:;
    v1 = LD32(s0+44);
    goto L_0892196C;
L_0892196C:;
    v0 = s1 << 2;
    a1 = s2 + 0;
    v0 = v0 + v1;
    a0 = LD32(v0);
    s1 = s1 + 1;
    { u64 r_ = func_089216EC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08921984;
L_08921984:;
    v0 = LD32(s0+28);
    v0 = (v0 >> 4) & 0xff;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+44); goto L_0892196C; }
    goto L_08921998;
L_08921998:;
    ST8(s2+16, 0);
    goto L_08921960;
L_089219A0:;
    a1 = s2 + 0;
    { u64 r_ = func_089216EC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089219A8;
L_089219A8:;
    v0 = LD32(s0+28);
    goto L_08921950;
L_089219B0:;
    v1 = LD32(sp);
    cnd_ = s2 == 0;
    ST32(v1, v0);
    if (cnd_) { goto L_089219E8; }
    goto L_089219BC;
L_089219BC:;
    v0 = LD32(s2+20);
    cnd_ = v0 == 0;
    a0 = 1;
    if (cnd_) { goto L_089219EC; }
    goto L_089219C8;
L_089219C8:;
    v1 = LD32(v0+20);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s2+24); goto L_089219E0; }
    goto L_089219D4;
L_089219D4:;
    s2 = v0 + 0;
    v0 = v1 + 0;
    goto L_089219C8;
L_089219E0:;
    v1 = LD32(sp);
    ST32(v1, v0);
    goto L_089219E8;
L_089219E8:;
    a0 = 1;
    goto L_089219EC;
L_089219EC:;
    goto L_089219F0;
L_089219F0:;
    v0 = a0 + 0;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08921A20:;
    v0 = (v0 >> 5) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { ST8(s2+16, 0); goto L_08921960; }
    goto L_08921A2C;
L_08921A2C:;
    a0 = LD32(s2+24);
    goto L_08921930;
L_08921A34:;
    v0 = 0 + 0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089219EC; }
    goto L_08921A40;
L_08921A40:;
    v0 = LD32(s3+4);
    goto L_089219B0;
}

/* 08921A48 */
void func_08921A48(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08921A48:;
    sp = sp - 96;
    s2 = D_08C251E8 - (20968);
    a0 = LD32(s2+20968);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08921BB0; }
    goto L_08921A70;
L_08921A70:;
    s3 = D_08B28DD8 - (-29224);
    v0 = s3 - 29224;
    v1 = LD32(v0+8);
    a2 = LD32(v0+4);
    s1 = D_08C251EC - (20972);
    v1 = v1 + 1;
    a0 = a0 < a2;
    ST32(v0+8, v1);
    a1 = sp + 0;
    ST32(s1+20972, 0);
    ST32(sp, v0);
    ST32(sp+4, 0);
    cnd_ = a0 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_08921AF0; }
    goto L_08921AA8;
L_08921AA8:;
    a3 = LD32(s3-29224);
    goto L_08921AAC;
L_08921AAC:;
    a0 = LD32(a1+4);
    v0 = a0 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a1+8, v1);
    if (cnd_) { goto L_08921AE0; }
    goto L_08921AC4;
L_08921AC4:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08921AF4; }
    goto L_08921AD4;
L_08921AD4:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_08921AC4; }
    goto L_08921AE0;
L_08921AE0:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_08921AAC; }
    goto L_08921AF0;
L_08921AF0:;
    v0 = LD32(sp+8);
    goto L_08921AF4;
L_08921AF4:;
    cnd_ = v0 != 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08921D6C; }
    goto L_08921AFC;
L_08921AFC:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08921D5C; }
    goto L_08921B0C;
L_08921B0C:;
    s4 = D_08B28DF8 - (-29192);
    v0 = s4 - 29192;
    goto L_08921B14;
L_08921B14:;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp+16, v0);
    v1 = v1 + 1;
    a0 = sp + 16;
    ST32(v0+8, v1);
    ST32(sp+24, 0);
    cnd_ = a1 == 0;
    ST32(sp+20, 0);
    if (cnd_) { goto L_08921B84; }
    goto L_08921B38;
L_08921B38:;
    a2 = LD32(s4-29192);
    a3 = a1 + 0;
    goto L_08921B40;
L_08921B40:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08921B74; }
    goto L_08921B58;
L_08921B58:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+24);
    if (cnd_) { goto L_08921B88; }
    goto L_08921B68;
L_08921B68:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08921B58; }
    goto L_08921B74;
L_08921B74:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08921B40; }
    goto L_08921B84;
L_08921B84:;
    v0 = LD32(sp+24);
    goto L_08921B88;
L_08921B88:;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08921D30; }
    goto L_08921B90;
L_08921B90:;
    a0 = LD32(sp+16);
    goto L_08921B94;
L_08921B94:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08921D20; }
    goto L_08921BA4;
L_08921BA4:;
    v0 = LD32(s1+20972);
    goto L_08921BA8;
L_08921BA8:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = v0 << 3; goto L_08921BD0; }
    goto L_08921BB0;
L_08921BB0:;
    goto L_08921BB4;
L_08921BB4:;
    sp = sp + 96;
    return;
L_08921BD0:;
    a0 = a0 - v0;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08921BDC;
L_08921BDC:;
    a2 = s3 - 29224;
    v1 = LD32(a2+8);
    s3 = sp + 32;
    a0 = s3 + 0;
    v1 = v1 + 1;
    ST32(a2+8, v1);
    a1 = 1;
    s1 = 0 + 0;
    ST32(sp+32, a2);
    ST32(s2+20968, v0);
    ST32(sp+36, 0);
    ST32(sp+40, 0);
    func_08ABB570(a0, a1);
    goto L_08921C10;
L_08921C10:;
    a2 = LD32(sp+40);
    cnd_ = a2 == 0;
    a0 = LD32(sp+32);
    if (cnd_) { goto L_08921C60; }
    goto L_08921C1C;
L_08921C1C:;
    s0 = 0 + 0;
    v0 = LD32(s2+20968);
    goto L_08921C24;
L_08921C24:;
    a2 = LD32(a2);
    a0 = s3 + 0;
    v0 = s0 + v0;
    ST32(v0+12, s1);
    a1 = 1;
    s0 = s0 + 28;
    v1 = LD32(a2+4);
    ST32(v0+24, v1);
    ST32(a2+68, s1);
    s1 = s1 + 1;
    func_08ABB570(a0, a1);
    goto L_08921C50;
L_08921C50:;
    a2 = LD32(sp+40);
    cnd_ = a2 != 0;
    v0 = LD32(s2+20968);
    if (cnd_) { goto L_08921C24; }
    goto L_08921C5C;
L_08921C5C:;
    a0 = LD32(sp+32);
    goto L_08921C60;
L_08921C60:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08921D10; }
    goto L_08921C70;
L_08921C70:;
    v1 = s4 - 29192;
    goto L_08921C74;
L_08921C74:;
    v0 = LD32(v1+8);
    s3 = sp + 48;
    a0 = s3 + 0;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    a1 = 1;
    ST32(sp+48, v1);
    ST32(sp+52, 0);
    ST32(sp+56, 0);
    func_08ABB608(a0, a1);
    goto L_08921C9C;
L_08921C9C:;
    a2 = LD32(sp+56);
    cnd_ = a2 == 0;
    v0 = s1 << 3;
    if (cnd_) { goto L_08921CEC; }
    goto L_08921CA8;
L_08921CA8:;
    v0 = v0 - s1;
    s0 = v0 << 2;
    v0 = LD32(s2+20968);
    goto L_08921CB4;
L_08921CB4:;
    a2 = LD32(a2);
    a0 = s3 + 0;
    v0 = s0 + v0;
    ST32(v0+12, s1);
    a1 = 1;
    s0 = s0 + 28;
    v1 = LD32(a2+4);
    ST32(v0+24, v1);
    ST32(a2+92, s1);
    s1 = s1 + 1;
    func_08ABB608(a0, a1);
    goto L_08921CE0;
L_08921CE0:;
    a2 = LD32(sp+56);
    cnd_ = a2 != 0;
    v0 = LD32(s2+20968);
    if (cnd_) { goto L_08921CB4; }
    goto L_08921CEC;
L_08921CEC:;
    a0 = LD32(sp+48);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08921BB0; }
    goto L_08921D00;
L_08921D00:;
    func_08ABB76C(a0, 0, 0, 0);
    goto L_08921D08;
L_08921D08:;
    goto L_08921BB4;
L_08921D10:;
    func_08ABB6A0(a0, 0, 0, 0);
    goto L_08921D18;
L_08921D18:;
    v1 = s4 - 29192;
    goto L_08921C74;
L_08921D20:;
    func_08ABB76C(a0, t1, t2, t3);
    goto L_08921D28;
L_08921D28:;
    v0 = LD32(s1+20972);
    goto L_08921BA8;
L_08921D30:;
    v0 = LD32(s1+20972);
    goto L_08921D34;
L_08921D34:;
    a0 = s0 + 0;
    a1 = 1;
    v0 = v0 + 1;
    ST32(s1+20972, v0);
    func_08ABB608(a0, a1);
    goto L_08921D48;
L_08921D48:;
    v0 = LD32(sp+24);
    cnd_ = v0 != 0;
    v0 = LD32(s1+20972);
    if (cnd_) { goto L_08921D34; }
    goto L_08921D54;
L_08921D54:;
    a0 = LD32(sp+16);
    goto L_08921B94;
L_08921D5C:;
    s4 = D_08B28DF8 - (-29192);
    func_08ABB6A0(a0, t1, t2, t3);
    goto L_08921D64;
L_08921D64:;
    v0 = s4 - 29192;
    goto L_08921B14;
L_08921D6C:;
    v0 = LD32(s1+20972);
    goto L_08921D70;
L_08921D70:;
    a0 = sp + 0;
    a1 = 1;
    v0 = v0 + 1;
    ST32(s1+20972, v0);
    func_08ABB570(a0, a1);
    goto L_08921D84;
L_08921D84:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    v0 = LD32(s1+20972);
    if (cnd_) { goto L_08921D70; }
    goto L_08921D90;
L_08921D90:;
    a0 = LD32(sp);
    goto L_08921AFC;
}

/* 08921D98 */
rv_t func_08921D98(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_08921D98:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    v0 = D_08B45A9C - (23196);
    v1 = D_08C251F0 - (20976);
    a1 = a1 & a0;
    a3 = v0 + 23196;
    cnd_ = a1 == 0;
    a2 = v1 + 20976;
    if (cnd_) { goto L_08921DD8; }
    goto L_08921DC0;
L_08921DC0:;
    f0 = BITSF(LD32(v0+23196));
    f1 = BITSF(LD32(a3+8));
    f2 = BITSF(LD32(a3+4));
    ST32(v1+20976, FBITS(f0));
    ST32(a2+8, FBITS(f1));
    ST32(a2+4, FBITS(f2));
    goto L_08921DD8;
L_08921DD8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08921DE0 */
rv_t func_08921DE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08921DE0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08921D98(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08921DF4;
L_08921DF4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08921E00 */
u64 func_08921E00(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
L_08921E00:;
    v1 = LD32(a0+8);
    a3 = D_08C25200 - (20992);
    a2 = LD32(a3+20992);
    v1 = (v1 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    v1 = v1 | 0x4;
    v0 = D_08AF80F8 - (-32520);
    a2 = a2 + 1;
    v1 = (v1 & ~(0x3u << 3)) | ((0 & 0x3) << 3);
    v0 = v0 - 32520;
    ST32(a3+20992, a2);
    ST32(a0, v0);
    ST32(a0+8, v1);
    ST32(a0+4, a2);
    ST16(a0+10, a1);
    ST32(a0+20, 0);
    ST32(a0+12, 0);
    ST32(a0+16, 0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08921E48 */
u32 func_08921E48(u32 a0)
{
    u32 v0 = 0;
L_08921E48:;
    v0 = D_08AF80F8 - (-32520);
    v0 = v0 - 32520;
    ST32(a0, v0);
    return v0;
}

/* 08921E58 */
rv_t func_08921E58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08921E58:;
    sp = sp - 32;
    s1 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08921E7C;
L_08921E7C:;
    s0 = s0 + 8;
    v1 = LD32(sp);
    v0 = 1;
    a0 = s1 + 0;
    cnd_ = v1 == v0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08921EA8; }
    goto L_08921E94;
L_08921E94:;
    goto L_08921E98;
L_08921E98:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08921EA8:;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08921EB0;
L_08921EB0:;
    goto L_08921E98;
}

/* 08921EB8 */
rv_t func_08921EB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08921EB8:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 1;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08921EDC;
L_08921EDC:;
    a0 = s0 + 0;
    a1 = LD32(s1+8);
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08921EE8;
L_08921EE8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08921EFC */
rv_t func_08921EFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08921EFC:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = a2 & 0xff;
    v0 = LD32(a0+8);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08921F34; }
    goto L_08921F2C;
L_08921F2C:;
    cnd_ = s2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08921F78; }
    goto L_08921F34;
L_08921F34:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+16);
    t_ = v0;
    a1 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08921F48;
L_08921F48:;
    s0 = LD32(s0+16);
    cnd_ = s0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08921F74; }
    goto L_08921F54;
L_08921F54:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    a2 = s2 + 0;
    { rv_t r_ = func_08921EFC(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08921F64;
L_08921F64:;
    s0 = LD32(s0+12);
    v0 = s1 | v0;
    cnd_ = s0 != 0;
    s1 = 0 < v0;
    if (cnd_) { goto L_08921F54; }
    goto L_08921F74;
L_08921F74:;
    v0 = s1 + 0;
    goto L_08921F78;
L_08921F78:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08921F94 */
rv_t func_08921F94(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08921F94:;
    sp = sp - 16;
    a1 = 1;
    v1 = LD32(a0+8);
    v0 = v1 & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08921FD4; }
    goto L_08921FBC;
L_08921FBC:;
    v0 = v1 & 0x2;
    cnd_ = v0 == 0;
    v0 = v1 | 0x1;
    if (cnd_) { goto L_08921FF0; }
    goto L_08921FC8;
L_08921FC8:;
    { rv_t r_ = func_0892216C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08921FD0;
L_08921FD0:;
    a1 = 1;
    goto L_08921FD4;
L_08921FD4:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08921FF0:;
    ST32(a0+8, v0);
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922004;
L_08922004:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08921FD4; }
    goto L_0892200C;
L_0892200C:;
    v0 = LD32(s1+8);
    s0 = LD32(s1+16);
    s2 = 1;
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    v0 = (v0 & ~(0x3u << 3)) | ((0 & 0x3) << 3);
    cnd_ = s0 == 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0892203C; }
    goto L_08922028;
L_08922028:;
    a0 = s0 + 0;
    { rv_t r_ = func_08921F94(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922030;
L_08922030:;
    s0 = LD32(s0+12);
    cnd_ = s0 != 0;
    s2 = s2 & v0;
    if (cnd_) { goto L_08922028; }
    goto L_0892203C;
L_0892203C:;
    a1 = s2 + 0;
    goto L_08921FD4;
}

/* 08922044 */
rv_t func_08922044(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08922044:;
    sp = sp - 16;
    v1 = LD32(a0+8);
    v0 = v1 & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089220C8; }
    goto L_08922064;
L_08922064:;
    v0 = v1 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089220B8; }
    goto L_08922070;
L_08922070:;
    { rv_t r_ = func_0892216C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922078;
L_08922078:;
    s0 = LD32(s1+16);
    cnd_ = s0 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892209C; }
    goto L_08922084;
L_08922084:;
    a0 = s0 + 0;
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892208C;
L_0892208C:;
    s0 = LD32(s0+12);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08922084; }
    goto L_08922098;
L_08922098:;
    v0 = LD32(s1);
    goto L_0892209C;
L_0892209C:;
    v1 = LD32(v0+24);
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089220A8;
L_089220A8:;
    v0 = LD32(s1+8);
    v0 = (v0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    ST32(s1+8, v0);
    goto L_089220B8;
L_089220B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089220C8:;
    s0 = LD32(a0+16);
    cnd_ = s0 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892209C; }
    goto L_089220D4;
L_089220D4:;
    a0 = s0 + 0;
    { rv_t r_ = func_08922044(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089220DC;
L_089220DC:;
    s0 = LD32(s0+12);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_089220D4; }
    goto L_089220E8;
L_089220E8:;
    v0 = LD32(s1);
    goto L_0892209C;
}

/* 089220F0 */
void func_089220F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089220F0:;
    sp = sp - 16;
    v1 = LD32(a0+8);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08922158; }
    goto L_08922110;
L_08922110:;
    v0 = v1 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0892215C; }
    goto L_0892211C;
L_0892211C:;
    s0 = LD32(a0+16);
    cnd_ = s0 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08922140; }
    goto L_08922128;
L_08922128:;
    a0 = s0 + 0;
    func_089220F0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08922130;
L_08922130:;
    s0 = LD32(s0+12);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08922128; }
    goto L_0892213C;
L_0892213C:;
    v0 = LD32(s1);
    goto L_08922140;
L_08922140:;
    v1 = LD32(v0+28);
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892214C;
L_0892214C:;
    v0 = LD32(s1+8);
    v0 = v0 | 0x2;
    ST32(s1+8, v0);
    goto L_08922158;
L_08922158:;
    goto L_0892215C;
L_0892215C:;
    sp = sp + 16;
    return;
}

/* 0892216C */
rv_t func_0892216C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892216C:;
    sp = sp - 16;
    v0 = LD32(a0+8);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089221A0; }
    goto L_0892218C;
L_0892218C:;
    goto L_08922194;
L_08922194:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089221A0:;
    v0 = LD32(a0);
    v1 = LD32(v0+32);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089221B0;
L_089221B0:;
    v0 = LD32(s1+8);
    s0 = LD32(s1+16);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    cnd_ = s0 == 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0892218C; }
    goto L_089221C4;
L_089221C4:;
    a0 = s0 + 0;
    { rv_t r_ = func_0892216C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089221CC;
L_089221CC:;
    s0 = LD32(s0+12);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_089221C4; }
    goto L_089221D8;
L_089221D8:;
    goto L_08922194;
}

/* 089221E0 */
rv_t func_089221E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089221E0:;
    sp = sp - 32;
    s1 = a0 + 0;
    v1 = LD32(a0+8);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    f20 = f12;
    if (cnd_) { goto L_0892224C; }
    goto L_08922208;
L_08922208:;
    v0 = v1 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08922250; }
    goto L_08922214;
L_08922214:;
    s0 = LD32(a0+16);
    cnd_ = s0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_0892223C; }
    goto L_08922220;
L_08922220:;
    a0 = s0 + 0;
    goto L_08922224;
L_08922224:;
    f12 = f20;
    { rv_t r_ = func_089221E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892222C;
L_0892222C:;
    s0 = LD32(s0+12);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08922224; }
    goto L_08922238;
L_08922238:;
    v1 = LD32(s1);
    goto L_0892223C;
L_0892223C:;
    a0 = s1 + 0;
    v0 = LD32(v1+36);
    t_ = v0;
    f12 = f20;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892224C;
L_0892224C:;
    goto L_08922250;
L_08922250:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08922264 */
float func_08922264(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08922264:;
    sp = sp - 32;
    s1 = a0 + 0;
    v1 = LD32(a0+8);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    f20 = f12;
    if (cnd_) { goto L_089222D0; }
    goto L_0892228C;
L_0892228C:;
    v0 = v1 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089222D4; }
    goto L_08922298;
L_08922298:;
    s0 = LD32(a0+16);
    cnd_ = s0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089222C0; }
    goto L_089222A4;
L_089222A4:;
    a0 = s0 + 0;
    goto L_089222A8;
L_089222A8:;
    f12 = f20;
    f0 = func_08922264(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089222B0;
L_089222B0:;
    s0 = LD32(s0+12);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089222A8; }
    goto L_089222BC;
L_089222BC:;
    v1 = LD32(s1);
    goto L_089222C0;
L_089222C0:;
    a0 = s1 + 0;
    v0 = LD32(v1+40);
    t_ = v0;
    f12 = f20;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089222D0;
L_089222D0:;
    goto L_089222D4;
L_089222D4:;
    sp = sp + 32;
    return f0;
}

/* 089222E8 */
rv_t func_089222E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089222E8:;
    sp = sp - 16;
    v1 = LD32(a0+8);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08922310; }
    goto L_08922304;
L_08922304:;
    v0 = v1 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0); goto L_08922320; }
    goto L_08922310;
L_08922310:;
    goto L_08922314;
L_08922314:;
    goto L_08922318;
L_08922318:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08922320:;
    v1 = LD32(v0+44);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892232C;
L_0892232C:;
    s0 = LD32(s0+16);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08922314; }
    goto L_08922338;
L_08922338:;
    a0 = s0 + 0;
    { rv_t r_ = func_089222E8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922340;
L_08922340:;
    s0 = LD32(s0+12);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08922338; }
    goto L_0892234C;
L_0892234C:;
    goto L_08922318;
}

/* 08922354 */
u32 func_08922354(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_08922354:;
    v0 = LD32(a0+12);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08922368; }
    goto L_08922360;
L_08922360:;
    a0 = v0 + 0;
    goto L_08922354;
L_08922368:;
    ST32(a0+12, a1);
    return v0;
}

/* 08922370 */
u64 func_08922370(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08922370:;
    sp = sp - 16;
    v1 = a0 + 0;
    v0 = LD32(a0+16);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08922398; }
    goto L_08922388;
L_08922388:;
    ST32(v1+16, a1);
    goto L_08922390;
L_08922390:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08922398:;
    v0 = func_08922354(a0, a1);
    goto L_089223A0;
L_089223A0:;
    goto L_08922390;
}

/* 089223A8 */
u32 func_089223A8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089223A8:;
    sp = sp - 16;
    v1 = LD32(a0+12);
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089223D8; }
    goto L_089223BC;
L_089223BC:;
    v0 = LD_U16(v1+10);
    a0 = v1 + 0;
    cnd_ = v0 == a1;
    a2 = v1 + 0;
    if (cnd_) { goto L_089223D8; }
    goto L_089223CC;
L_089223CC:;
    v0 = func_089223A8(a0, a1);
    goto L_089223D4;
L_089223D4:;
    a2 = v0 + 0;
    goto L_089223D8;
L_089223D8:;
    v0 = a2 + 0;
    sp = sp + 16;
    return v0;
}

/* 089223E8 */
u64 func_089223E8(u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089223E8:;
    sp = sp - 16;
    s2 = a3 & 0xff;
    s1 = a1 + 0;
    a0 = LD32(a1+16);
    cnd_ = a0 == 0;
    s0 = a2 + 0;
    if (cnd_) { goto L_08922480; }
    goto L_08922410;
L_08922410:;
    v0 = LD_U16(a0+10);
    cnd_ = v0 == a2;
    v1 = a0 + 0;
    if (cnd_) { goto L_0892242C; }
    goto L_0892241C;
L_0892241C:;
    a1 = a2 + 0;
    v0 = func_089223A8(a0, a1);
    goto L_08922424;
L_08922424:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08922448; }
    goto L_0892242C;
L_0892242C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08922448:;
    cnd_ = s2 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0892242C; }
    goto L_08922450;
L_08922450:;
    s1 = LD32(s1+16);
    cnd_ = s1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0892242C; }
    goto L_0892245C;
L_0892245C:;
    a1 = s1 + 0;
    a2 = s0 + 0;
    a3 = 1;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892246C;
L_0892246C:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0892242C; }
    goto L_08922474;
L_08922474:;
    s1 = LD32(s1+12);
    cnd_ = s1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0892245C; }
    goto L_08922480;
L_08922480:;
    v1 = 0 + 0;
    goto L_0892242C;
}

/* 08922488 */
u32 func_08922488(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08922488:;
    sp = sp - 16;
    a3 = a0 + 0;
    v1 = LD32(a0+12);
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089224B8; }
    goto L_089224A0;
L_089224A0:;
    a0 = v1 + 0;
    cnd_ = v1 == a1;
    a2 = 1;
    if (cnd_) { goto L_089224C8; }
    goto L_089224AC;
L_089224AC:;
    v0 = func_08922488(a0, a1);
    goto L_089224B4;
L_089224B4:;
    a2 = v0 + 0;
    goto L_089224B8;
L_089224B8:;
    v0 = a2 + 0;
    sp = sp + 16;
    return v0;
L_089224C8:;
    v0 = LD32(v1+12);
    ST32(a3+12, v0);
    ST32(v1+12, 0);
    goto L_089224B8;
}

/* 089224D8 */
u32 func_089224D8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089224D8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+16);
    cnd_ = a0 == 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_0892253C; }
    goto L_089224F8;
L_089224F8:;
    cnd_ = a0 == a1;
    if (cnd_) { v0 = LD32(a1+12); goto L_08922558; }
    goto L_08922500;
L_08922500:;
    v0 = func_08922488(a0, a1);
    goto L_08922508;
L_08922508:;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08922540; }
    goto L_08922510;
L_08922510:;
    s0 = LD32(s0+16);
    cnd_ = s0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08922540; }
    goto L_0892251C;
L_0892251C:;
    a0 = s0 + 0;
    goto L_08922520;
L_08922520:;
    a1 = s1 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08922528;
L_08922528:;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08922540; }
    goto L_08922530;
L_08922530:;
    s0 = LD32(s0+12);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08922520; }
    goto L_0892253C;
L_0892253C:;
    v1 = 0 + 0;
    goto L_08922540;
L_08922540:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08922558:;
    v1 = 1;
    ST32(a1+12, 0);
    ST32(s0+16, v0);
    goto L_08922540;
}

/* 08922568 */
u32 func_08922568(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_08922568:;
    v1 = LD32(a0+12);
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08922594; }
    goto L_08922574;
L_08922574:;
    v0 = LD_U16(v1+10);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+12); goto L_08922588; }
    goto L_08922580;
L_08922580:;
    a0 = v1 + 0;
    goto L_08922568;
L_08922588:;
    a2 = v1 + 0;
    ST32(a0+12, v0);
    ST32(v1+12, 0);
    goto L_08922594;
L_08922594:;
    v0 = a2 + 0;
    return v0;
}

/* 0892259C */
u64 func_0892259C(u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892259C:;
    sp = sp - 16;
    s2 = a3 & 0xff;
    s1 = a2 + 0;
    a0 = LD32(a1+16);
    cnd_ = a0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08922634; }
    goto L_089225C4;
L_089225C4:;
    v0 = LD_U16(a0+10);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(a0+12); goto L_0892263C; }
    goto L_089225D0;
L_089225D0:;
    a1 = a2 + 0;
    v0 = func_08922568(a0, a1);
    goto L_089225D8;
L_089225D8:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089225FC; }
    goto L_089225E0;
L_089225E0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_089225FC:;
    cnd_ = s2 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089225E0; }
    goto L_08922604;
L_08922604:;
    s0 = LD32(s0+16);
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089225E0; }
    goto L_08922610;
L_08922610:;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 1;
    { u64 r_ = func_0892259C(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08922620;
L_08922620:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089225E0; }
    goto L_08922628;
L_08922628:;
    s0 = LD32(s0+12);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08922610; }
    goto L_08922634;
L_08922634:;
    v1 = 0 + 0;
    goto L_089225E0;
L_0892263C:;
    v1 = a0 + 0;
    ST32(a0+12, 0);
    ST32(a1+16, v0);
    goto L_089225E0;
}

/* 0892264C */
u32 func_0892264C(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0892264C:;
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
    v0 = func_08922698(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0892268C;
L_0892268C:;
    sp = sp + 48;
    return v0;
}

/* 08922698 */
u32 func_08922698(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08922698:;
    sp = sp - 48;
    v1 = 0 + 0;
    v0 = LD32(a0+8);
    cnd_ = v0 == 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_089226F0; }
    goto L_089226C8;
L_089226C8:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_089226F0:;
    func_08919174(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089226F8;
L_089226F8:;
    a0 = s1 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922704;
L_08922704:;
    a0 = LD32(sp);
    cnd_ = a0 == 0;
    v1 = 1;
    if (cnd_) { goto L_089226C8; }
    goto L_08922710;
L_08922710:;
    s2 = 0 + 0;
    func_089191C4(a0, 0, 0, 0);
    goto L_08922718;
L_08922718:;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    s3 = 1;
    if (cnd_) { goto L_0892276C; }
    goto L_08922724;
L_08922724:;
    s4 = 2;
    s5 = 3;
    a0 = s1 + 0;
    goto L_08922730;
L_08922730:;
    a1 = sp + 4;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922738;
L_08922738:;
    v1 = LD32(sp+4);
    cnd_ = v1 == s3;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_089227F8; }
    goto L_08922744;
L_08922744:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089227D4; }
    goto L_0892274C;
L_0892274C:;
    cnd_ = v1 == s4;
    if (cnd_) { goto L_089227B8; }
    goto L_08922754;
L_08922754:;
    cnd_ = v1 == s5;
    v0 = LD32(sp);
    if (cnd_) { goto L_08922774; }
    goto L_0892275C;
L_0892275C:;
    s2 = s2 + 1;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08922730; }
    goto L_0892276C;
L_0892276C:;
    v1 = 1;
    goto L_089226C8;
L_08922774:;
    a0 = 40;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892277C;
L_0892277C:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_0891A46C(a0);
    goto L_08922788;
L_08922788:;
    cnd_ = s0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089226C8; }
    goto L_08922790;
L_08922790:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+12);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089227A4;
L_089227A4:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    func_089191F4(a0, a1);
    goto L_089227B0;
L_089227B0:;
    v0 = LD32(sp);
    goto L_0892275C;
L_089227B8:;
    a0 = 28;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089227C0;
L_089227C0:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_08919F90(a0);
    goto L_089227CC;
L_089227CC:;
    goto L_08922788;
L_089227D4:;
    cnd_ = v1 != 0;
    v0 = LD32(sp);
    if (cnd_) { goto L_0892275C; }
    goto L_089227DC;
L_089227DC:;
    a0 = 28;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089227E4;
L_089227E4:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_08919DE0(a0);
    goto L_089227F0;
L_089227F0:;
    goto L_08922788;
L_089227F8:;
    a0 = 28;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922800;
L_08922800:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_08919EB8(a0);
    goto L_0892280C;
L_0892280C:;
    goto L_08922788;
}

/* 08922814 */
float func_08922814(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08922814:;
    a2 = a0 + 20;
    sp = sp - 16;
    ST32(a0+16, 0);
    v1 = (u32)-1;
    s1 = D_08C2520C - (21004);
    v0 = s1 + 21004;
    s0 = a0 + 0;
    a0 = 12;
    ST32(a2+8, 0);
    a3 = LD32(v0+8);
    v0 = D_08AF8158 - (-32424);
    v0 = v0 - 32424;
    ST32(s0+4, a1);
    ST32(s0+8, v1);
    ST32(s0, v0);
    ST32(a2+16, 0);
    ST32(s0+12, 0);
    ST32(s0+20, 0);
    ST32(a2+4, 0);
    cnd_ = a3 != 0;
    ST32(a2+12, 0);
    if (cnd_) { goto L_089228C8; }
    goto L_08922874;
L_08922874:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892287C;
L_0892287C:;
    v1 = LD32(s1+21004);
    goto L_08922880;
L_08922880:;
    ST32(v0, s0);
    a0 = s1 + 21004;
    ST32(v0+4, 0);
    cnd_ = v1 == 0;
    ST32(v0+8, v1);
    if (cnd_) { goto L_089228C0; }
    goto L_08922894;
L_08922894:;
    ST32(v1+4, v0);
    goto L_08922898;
L_08922898:;
    v1 = s1 + 21004;
    ST32(s1+21004, v0);
    v0 = LD32(v1+16);
    v0 = v0 + 1;
    ST32(v1+16, v0);
    sp = sp + 16;
    return f0;
L_089228C0:;
    ST32(a0+4, v0);
    goto L_08922898;
L_089228C8:;
    t_ = a3;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089228D0;
L_089228D0:;
    v1 = LD32(s1+21004);
    goto L_08922880;
}

/* 089228D8 */
rv_t func_089228D8(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089228D8:;
    sp = sp - 16;
    a1 = D_08C2520C - (21004);
    v0 = D_08AF8158 - (-32424);
    v0 = v0 - 32424;
    s0 = a0 + 0;
    v1 = LD32(a1+21004);
    cnd_ = v1 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_08922920; }
    goto L_08922904;
L_08922904:;
    s1 = a1 + 21004;
    v0 = LD32(v1);
    goto L_0892290C;
L_0892290C:;
    cnd_ = v0 == s0;
    if (cnd_) { a0 = LD32(v1+8); goto L_0892293C; }
    goto L_08922914;
L_08922914:;
    v1 = LD32(v1+8);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_0892290C; }
    goto L_08922920;
L_08922920:;
    a0 = s0 + 20;
    { rv_t r_ = func_08ABB994(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922928;
L_08922928:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0892293C:;
    cnd_ = a0 == 0;
    v0 = LD32(v1+4);
    if (cnd_) { goto L_0892298C; }
    goto L_08922944;
L_08922944:;
    ST32(a0+4, v0);
    goto L_08922948;
L_08922948:;
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a1+21004, a0); goto L_08922958; }
    goto L_08922954;
L_08922954:;
    ST32(v0+8, a0);
    goto L_08922958;
L_08922958:;
    v0 = LD32(s1+12);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0892297C; }
    goto L_08922964;
L_08922964:;
    a0 = v1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892296C;
L_0892296C:;
    v0 = LD32(s1+16);
    goto L_08922970;
L_08922970:;
    v0 = v0 - 1;
    ST32(s1+16, v0);
    goto L_08922920;
L_0892297C:;
    t_ = v0;
    a0 = v1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922984;
L_08922984:;
    v0 = LD32(s1+16);
    goto L_08922970;
L_0892298C:;
    ST32(s1+4, v0);
    a0 = LD32(v1+8);
    goto L_08922948;
}

/* 08922998 */
rv_t func_08922998(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08922998:;
    v0 = D_08AF8158 - (-32424);
    v0 = v0 - 32424;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2520C - (21004);
    a1 = s0 + 0;
    a0 = a0 + 21004;
    s0 = s0 + 20;
    func_08ABB8F4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089229C8;
L_089229C8:;
    a0 = s0 + 0;
    { rv_t r_ = func_08ABB994(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089229D0;
L_089229D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089229E0 */
rv_t func_089229E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089229E0:;
    v0 = D_08AF8158 - (-32424);
    v0 = v0 - 32424;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2520C - (21004);
    a1 = s0 + 0;
    a0 = a0 + 21004;
    func_08ABB8F4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08922A0C;
L_08922A0C:;
    a0 = s0 + 20;
    { rv_t r_ = func_08ABB994(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922A14;
L_08922A14:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08922A1C;
L_08922A1C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08922A2C */
rv_t func_08922A2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08922A2C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0+52);
    t_ = v1;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922A48;
L_08922A48:;
    v0 = LD32(s0+16);
    v0 = v0 | 0x4;
    ST32(s0+16, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08922A64 */
rv_t func_08922A64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08922A64:;
    sp = sp - 16;
    v0 = LD32(a0+16);
    a1 = LD32(a0);
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST32(a0+16, v0);
    v1 = LD32(a1+56);
    t_ = v1;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922A8C;
L_08922A8C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08923664(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922A94;
L_08922A94:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08922AA4 */
rv_t func_08922AA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08922AA4:;
    sp = sp - 16;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    s0 = a0 + 20;
    if (cnd_) { goto L_08922B40; }
    goto L_08922AC4;
L_08922AC4:;
    a0 = a1 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088AC8FC(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922AD0;
L_08922AD0:;
    s1 = v0 + 0;
    v0 = LD32(s0+8);
    cnd_ = v0 != 0;
    a0 = 12;
    if (cnd_) { goto L_08922B30; }
    goto L_08922AE0;
L_08922AE0:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922AE8;
L_08922AE8:;
    v1 = v0 + 0;
    goto L_08922AEC;
L_08922AEC:;
    v0 = LD32(s0);
    ST32(v1, s1);
    ST32(v1+4, 0);
    cnd_ = v0 == 0;
    ST32(v1+8, v0);
    if (cnd_) { goto L_08922B28; }
    goto L_08922B00;
L_08922B00:;
    ST32(v0+4, v1);
    goto L_08922B04;
L_08922B04:;
    v0 = LD32(s0+16);
    ST32(s0, v1);
    v0 = v0 + 1;
    ST32(s0+16, v0);
    goto L_08922B18;
L_08922B18:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08922B28:;
    ST32(s0+4, v1);
    goto L_08922B04;
L_08922B30:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922B38;
L_08922B38:;
    v1 = v0 + 0;
    goto L_08922AEC;
L_08922B40:;
    v1 = LD32(a0);
    v0 = LD32(v1+60);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922B50;
L_08922B50:;
    goto L_08922B18;
}

/* 08922B58 */
rv_t func_08922B58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08922B58:;
    sp = sp - 16;
    v0 = 4;
    a1 = LD32(a0+16);
    v1 = a1 & 0x6;
    cnd_ = v1 == v0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08922B98; }
    goto L_08922B80;
L_08922B80:;
    goto L_08922B84;
L_08922B84:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08922B98:;
    a0 = LD32(a0+12);
    cnd_ = a0 != 0;
    v0 = a1 | 0x1;
    if (cnd_) { goto L_08922C40; }
    goto L_08922BA4;
L_08922BA4:;
    s0 = s2 + 20;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08922B84; }
    goto L_08922BB4;
L_08922BB4:;
    a1 = LD32(s0+4);
    goto L_08922BB8;
L_08922BB8:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08922B84; }
    goto L_08922BC0;
L_08922BC0:;
    v1 = LD32(a1+4);
    cnd_ = v1 == 0;
    s1 = LD32(a1);
    if (cnd_) { goto L_08922C34; }
    goto L_08922BCC;
L_08922BCC:;
    v0 = LD32(a1+8);
    ST32(v1+8, v0);
    ST32(s0+4, v1);
    goto L_08922BD8;
L_08922BD8:;
    v0 = LD32(s0+12);
    cnd_ = v0 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08922C24; }
    goto L_08922BE4;
L_08922BE4:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08922BEC;
L_08922BEC:;
    v0 = LD32(s0+16);
    goto L_08922BF0;
L_08922BF0:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    v0 = v0 - 1;
    cnd_ = s1 == 0;
    ST32(s0+16, v0);
    if (cnd_) { goto L_08922B80; }
    goto L_08922C04;
L_08922C04:;
    v1 = LD32(s2);
    v0 = LD32(v1+60);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922C14;
L_08922C14:;
    a0 = s1 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08922C1C;
L_08922C1C:;
    a1 = LD32(s0+4);
    goto L_08922BB8;
L_08922C24:;
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922C2C;
L_08922C2C:;
    v0 = LD32(s0+16);
    goto L_08922BF0;
L_08922C34:;
    ST32(s2+20, 0);
    ST32(s0+4, 0);
    goto L_08922BD8;
L_08922C40:;
    ST32(s2+16, v0);
    { rv_t r_ = func_089221E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922C48;
L_08922C48:;
    v0 = LD32(s2+16);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s2+16, v0);
    goto L_08922BA4;
}

/* 08922C58 */
rv_t func_08922C58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08922C58:;
    sp = sp - 16;
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08922C78; }
    goto L_08922C6C;
L_08922C6C:;
    goto L_08922C70;
L_08922C70:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08922C78:;
    { rv_t r_ = func_089222E8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922C80;
L_08922C80:;
    goto L_08922C70;
}

/* 08922C88 */
rv_t func_08922C88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08922C88:;
    sp = sp - 80;
    s2 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922CBC;
L_08922CBC:;
    v0 = 4;
    v1 = LD32(sp);
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_08922F54; }
    goto L_08922CCC;
L_08922CCC:;
    cnd_ = v1 == v0;
    v0 = 2;
    if (cnd_) { goto L_08922EAC; }
    goto L_08922CD4;
L_08922CD4:;
    cnd_ = v1 == v0;
    v0 = 1;
    if (cnd_) { goto L_08922E28; }
    goto L_08922CDC;
L_08922CDC:;
    cnd_ = v1 == v0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08922D2C; }
    goto L_08922CE4;
L_08922CE4:;
    v0 = LD32(s1+16);
    goto L_08922CE8;
L_08922CE8:;
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_08922D18; }
    goto L_08922CF4;
L_08922CF4:;
    goto L_08922CF8;
L_08922CF8:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08922D18:;
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922D24;
L_08922D24:;
    goto L_08922CF8;
L_08922D2C:;
    a1 = sp + 32;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922D34;
L_08922D34:;
    v0 = LD32(sp+32);
    cnd_ = (s32)v0 <= 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_08922CE4; }
    goto L_08922D40;
L_08922D40:;
    a0 = s2 + 0;
    goto L_08922D44;
L_08922D44:;
    a1 = sp + 36;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922D4C;
L_08922D4C:;
    v1 = LD32(s1);
    a1 = LD32(sp+36);
    a0 = s1 + 0;
    v0 = LD32(v1+44);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922D64;
L_08922D64:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_08922E0C; }
    goto L_08922D6C;
L_08922D6C:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    func_089237B8(a0, a1);
    goto L_08922D78;
L_08922D78:;
    v1 = LD32(s4);
    a1 = s2 + 0;
    a0 = s4 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    s3 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922D90;
L_08922D90:;
    a0 = s2 + 0;
    a1 = sp + 40;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922D9C;
L_08922D9C:;
    v1 = LD32(sp+40);
    cnd_ = (s32)v1 <= 0;
    v0 = LD32(sp+32);
    if (cnd_) { goto L_08922E10; }
    goto L_08922DA8;
L_08922DA8:;
    a0 = s2 + 0;
    goto L_08922DAC;
L_08922DAC:;
    a1 = sp + 36;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922DB4;
L_08922DB4:;
    v1 = LD32(s1);
    a1 = LD32(sp+36);
    a0 = s1 + 0;
    v0 = LD32(v1+44);
    a2 = 0 + 0;
    t_ = v0;
    s3 = s3 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922DD0;
L_08922DD0:;
    s0 = v0 + 0;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08922DFC; }
    goto L_08922DE0;
L_08922DE0:;
    v0 = func_08922354(a0, a1);
    goto L_08922DE8;
L_08922DE8:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922DFC;
L_08922DFC:;
    v0 = LD32(sp+40);
    v0 = (s32)s3 < (s32)v0;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08922DAC; }
    goto L_08922E0C;
L_08922E0C:;
    v0 = LD32(sp+32);
    goto L_08922E10;
L_08922E10:;
    s5 = s5 + 1;
    v0 = (s32)s5 < (s32)v0;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08922D44; }
    goto L_08922E20;
L_08922E20:;
    v0 = LD32(s1+16);
    goto L_08922CE8;
L_08922E28:;
    a0 = s2 + 0;
    a1 = sp + 24;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922E34;
L_08922E34:;
    v0 = LD32(sp+24);
    cnd_ = (s32)v0 <= 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08922CE4; }
    goto L_08922E40;
L_08922E40:;
    a0 = s2 + 0;
    goto L_08922E44;
L_08922E44:;
    a1 = sp + 28;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922E4C;
L_08922E4C:;
    v1 = LD32(s1);
    a1 = LD32(sp+28);
    a0 = s1 + 0;
    v0 = LD32(v1+44);
    a2 = 0 + 0;
    t_ = v0;
    s3 = s3 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922E68;
L_08922E68:;
    s0 = v0 + 0;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08922E94; }
    goto L_08922E78;
L_08922E78:;
    func_089237B8(a0, a1);
    goto L_08922E80;
L_08922E80:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922E94;
L_08922E94:;
    v0 = LD32(sp+24);
    v0 = (s32)s3 < (s32)v0;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08922E44; }
    goto L_08922EA4;
L_08922EA4:;
    v0 = LD32(s1+16);
    goto L_08922CE8;
L_08922EAC:;
    a0 = s2 + 0;
    a1 = sp + 12;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922EB8;
L_08922EB8:;
    v0 = LD32(sp+12);
    v1 = LD32(s1+16);
    a0 = s2 + 0;
    v0 = 0 < v0;
    v1 = (v1 & ~(0x1u << 1)) | ((v0 & 0x1) << 1);
    ST32(s1+16, v1);
    a1 = sp + 16;
    s3 = 0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922EDC;
L_08922EDC:;
    v1 = LD32(sp+16);
    cnd_ = (s32)v1 <= 0;
    if (cnd_) { v0 = LD32(s1+16); goto L_08922CE8; }
    goto L_08922EE8;
L_08922EE8:;
    a0 = s2 + 0;
    goto L_08922EEC;
L_08922EEC:;
    a1 = sp + 20;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922EF4;
L_08922EF4:;
    v1 = LD32(s1);
    a1 = LD32(sp+20);
    a0 = s1 + 0;
    v0 = LD32(v1+44);
    a2 = 0 + 0;
    t_ = v0;
    s3 = s3 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922F10;
L_08922F10:;
    s0 = v0 + 0;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08922F3C; }
    goto L_08922F20;
L_08922F20:;
    func_089237B8(a0, a1);
    goto L_08922F28;
L_08922F28:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922F3C;
L_08922F3C:;
    v0 = LD32(sp+16);
    v0 = (s32)s3 < (s32)v0;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08922EEC; }
    goto L_08922F4C;
L_08922F4C:;
    v0 = LD32(s1+16);
    goto L_08922CE8;
L_08922F54:;
    a1 = s1 + 16;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922F60;
L_08922F60:;
    a0 = s2 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922F6C;
L_08922F6C:;
    v0 = LD32(sp+4);
    cnd_ = (s32)v0 <= 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08922CE4; }
    goto L_08922F78;
L_08922F78:;
    a0 = s2 + 0;
    goto L_08922F7C;
L_08922F7C:;
    a1 = sp + 8;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922F84;
L_08922F84:;
    v1 = LD32(s1);
    a1 = LD32(sp+8);
    a0 = s1 + 0;
    v0 = LD32(v1+44);
    a2 = 0 + 0;
    t_ = v0;
    s3 = s3 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922FA0;
L_08922FA0:;
    s0 = v0 + 0;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08922FCC; }
    goto L_08922FB0;
L_08922FB0:;
    func_089237B8(a0, a1);
    goto L_08922FB8;
L_08922FB8:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08922FCC;
L_08922FCC:;
    v0 = LD32(sp+4);
    v0 = (s32)s3 < (s32)v0;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08922F7C; }
    goto L_08922FDC;
L_08922FDC:;
    v0 = LD32(s1+16);
    goto L_08922CE8;
}

/* 08922FE4 */
rv_t func_08922FE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08922FE4:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 4;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923008;
L_08923008:;
    a0 = s1 + 0;
    a1 = LD32(s0+16);
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923014;
L_08923014:;
    v0 = LD32(s0+12);
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0892302C; }
    goto L_08923020;
L_08923020:;
    v0 = LD32(v0+20);
    cnd_ = v0 != 0;
    a1 = a1 + 1;
    if (cnd_) { goto L_08923020; }
    goto L_0892302C;
L_0892302C:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923034;
L_08923034:;
    s0 = LD32(s0+12);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08923070; }
    goto L_08923040;
L_08923040:;
    a1 = LD_U16(s0+10);
    goto L_08923044;
L_08923044:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892304C;
L_0892304C:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+12);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923060;
L_08923060:;
    s0 = LD32(s0+20);
    cnd_ = s0 != 0;
    if (cnd_) { a1 = LD_U16(s0+10); goto L_08923044; }
    goto L_0892306C;
L_0892306C:;
    goto L_08923070;
L_08923070:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08923080 */
rv_t func_08923080(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08923080:;
    f0 = BITSF(0);
    return (rv_t){ v0, v1, f0 };
}

/* 0892308C */
rv_t func_0892308C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0892308C:;
    sp = sp - 48;
    s0 = a0 + 0;
    a2 = D_08AD9728 - (-26840);
    a0 = D_08C25220 - (21024);
    v0 = (u32)-1;
    v1 = LD32(s0+8);
    a3 = a2 - 26840;
    a1 = sp + 0;
    cnd_ = v1 == v0;
    a0 = a0 + 21024;
    if (cnd_) { goto L_089230D8; }
    goto L_089230BC;
L_089230BC:;
    v0 = LD32(s0+16);
    v0 = v0 | 0x8;
    ST32(s0+16, v0);
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089230D8:;
    v1 = D_08AED420 - (-11232);
    a2 = LD32(a2-26840);
    a3 = LD32(a3+4);
    f12 = BITSF(LD32(v1-11232));
    v0 = D_08AF8130 - (-32464);
    v0 = v0 - 32464;
    ST32(sp, v0);
    ST32(sp+4, s0);
    ST32(sp+8, a2);
    ST32(sp+12, a3);
    ST32(sp+16, a2);
    ST32(sp+20, a3);
    { rv_t r_ = func_08837010(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892310C;
L_0892310C:;
    ST32(s0+8, v0);
    v0 = D_08AF81A8 - (-32344);
    v0 = v0 - 32344;
    ST32(sp, v0);
    goto L_089230BC;
}

/* 08923120 */
rv_t func_08923120(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08923120:;
    sp = sp - 16;
    s1 = (u32)-1;
    s0 = a0 + 0;
    a0 = D_08C25220 - (21024);
    a0 = a0 + 21024;
    v0 = LD32(s0+16);
    v1 = LD32(s0+8);
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    a1 = v1 + 0;
    cnd_ = v1 == s1;
    ST32(s0+16, v0);
    if (cnd_) { goto L_08923164; }
    goto L_08923158;
L_08923158:;
    { rv_t r_ = func_08837194(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923160;
L_08923160:;
    ST32(s0+8, s1);
    goto L_08923164;
L_08923164:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08923178 */
rv_t func_08923178(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08923178:;
    sp = sp - 48;
    s2 = 0 + 0;
    s1 = a0 + 0;
    v1 = LD_U16(a1+16);
    v1 = v1 - 3;
    v0 = v1 < 0x56u;
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089234C0; }
    goto L_089231A8;
L_089231A8:;
    v0 = v1 << 2;
    v1 = D_08AD9730 - (-26832);
    v1 = v1 - 26832;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089231C4u: goto L_089231C4; case 0x08923210u: goto L_08923210; case 0x08923248u: goto L_08923248; case 0x089233A8u: goto L_089233A8; case 0x0892343Cu: goto L_0892343C; case 0x089234C0u: goto L_089234C0; case 0x089234E4u: goto L_089234E4; case 0x08923530u: goto L_08923530; default: rs_break(0, 0x089231bc); }
L_089231C4:;
    v0 = LD32(s1+16);
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089231F4; }
    goto L_089231D4;
L_089231D4:;
    s2 = 1;
    goto L_089231D8;
L_089231D8:;
    v0 = s2 + 0;
    goto L_089231DC;
L_089231DC:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089231F4:;
    v1 = LD32(v0+52);
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923200;
L_08923200:;
    v0 = LD32(s1+16);
    v0 = v0 | 0x4;
    goto L_08923208;
L_08923208:;
    ST32(s1+16, v0);
    goto L_089231D4;
L_08923210:;
    v1 = LD32(s1+16);
    v0 = v1 & 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = 1; goto L_089231D8; }
    goto L_08923220;
L_08923220:;
    v1 = (v1 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST32(s1+16, v1);
    v0 = LD32(s1);
    v1 = LD32(v0+56);
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923238;
L_08923238:;
    a0 = s1 + 0;
    { rv_t r_ = func_08923664(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923240;
L_08923240:;
    s2 = 1;
    goto L_089231D8;
L_08923248:;
    v0 = LD32(a1+24);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = s2 + 0; goto L_089231DC; }
    goto L_08923254;
L_08923254:;
    v1 = LD32(v0+4);
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 3;
    if (cnd_) { goto L_08923364; }
    goto L_08923264;
L_08923264:;
    cnd_ = v0 == 0;
    v0 = 3;
    if (cnd_) { goto L_089232CC; }
    goto L_0892326C;
L_0892326C:;
    v0 = 1;
    cnd_ = v1 != v0;
    v0 = s2 + 0;
    if (cnd_) { goto L_089231DC; }
    goto L_08923278;
L_08923278:;
    v1 = LD32(s1);
    a2 = a1 + 0;
    a0 = s1 + 0;
    v0 = LD32(v1+44);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923290;
L_08923290:;
    cnd_ = v0 == 0;
    ST32(sp, v0);
    if (cnd_) { goto L_089231D4; }
    goto L_08923298;
L_08923298:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_089236BC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089232A4;
L_089232A4:;
    cnd_ = v0 != 0;
    s2 = 1;
    if (cnd_) { goto L_089231D8; }
    goto L_089232AC;
L_089232AC:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    a1 = sp + 0;
    goto L_089232B8;
L_089232B8:;
    v0 = LD32(v1+48);
    t_ = v0;
    s2 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089232C4;
L_089232C4:;
    v0 = s2 + 0;
    goto L_089231DC;
L_089232CC:;
    cnd_ = v1 == v0;
    v0 = 4;
    if (cnd_) { goto L_08923320; }
    goto L_089232D4;
L_089232D4:;
    cnd_ = v1 != v0;
    v0 = s2 + 0;
    if (cnd_) { goto L_089231DC; }
    goto L_089232DC;
L_089232DC:;
    v1 = LD32(s1);
    a2 = a1 + 0;
    a0 = s1 + 0;
    v0 = LD32(v1+44);
    t_ = v0;
    a1 = 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089232F4;
L_089232F4:;
    cnd_ = v0 == 0;
    ST32(sp+12, v0);
    if (cnd_) { goto L_089231D4; }
    goto L_089232FC;
L_089232FC:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_089236BC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923308;
L_08923308:;
    cnd_ = v0 != 0;
    s2 = 1;
    if (cnd_) { goto L_089231D8; }
    goto L_08923310;
L_08923310:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    a1 = sp + 12;
    goto L_089232B8;
L_08923320:;
    v1 = LD32(s1);
    a2 = a1 + 0;
    a0 = s1 + 0;
    v0 = LD32(v1+44);
    t_ = v0;
    a1 = 3;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923338;
L_08923338:;
    cnd_ = v0 == 0;
    ST32(sp+8, v0);
    if (cnd_) { goto L_089231D4; }
    goto L_08923340;
L_08923340:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_089236BC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892334C;
L_0892334C:;
    cnd_ = v0 != 0;
    s2 = 1;
    if (cnd_) { goto L_089231D8; }
    goto L_08923354;
L_08923354:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    a1 = sp + 8;
    goto L_089232B8;
L_08923364:;
    v1 = LD32(s1);
    a2 = a1 + 0;
    a0 = s1 + 0;
    v0 = LD32(v1+44);
    t_ = v0;
    a1 = 2;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892337C;
L_0892337C:;
    cnd_ = v0 == 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_089231D4; }
    goto L_08923384;
L_08923384:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_089236BC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923390;
L_08923390:;
    cnd_ = v0 != 0;
    s2 = 1;
    if (cnd_) { goto L_089231D8; }
    goto L_08923398;
L_08923398:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    a1 = sp + 4;
    goto L_089232B8;
L_089233A8:;
    v1 = LD32(s1+16);
    v0 = v1 & 0x4;
    cnd_ = v0 == 0;
    s2 = 1;
    if (cnd_) { goto L_089231D8; }
    goto L_089233B8;
L_089233B8:;
    s0 = LD32(a1+24);
    cnd_ = s0 == 0;
    v0 = (v1 >> 1) & 0x1;
    if (cnd_) { goto L_089231D8; }
    goto L_089233C4;
L_089233C4:;
    a0 = LD_U8(s0+4);
    cnd_ = a0 == v0;
    if (cnd_) { v0 = s2 + 0; goto L_089231DC; }
    goto L_089233D0;
L_089233D0:;
    cnd_ = a0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_08923414; }
    goto L_089233D8;
L_089233D8:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08923404; }
    goto L_089233E4;
L_089233E4:;
    v1 = LD32(s1);
    goto L_089233E8;
L_089233E8:;
    v0 = LD32(v1+56);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089233F4;
L_089233F4:;
    v1 = LD_U8(s0+4);
    goto L_089233F8;
L_089233F8:;
    v0 = LD32(s1+16);
    v0 = (v0 & ~(0x1u << 1)) | ((v1 & 0x1) << 1);
    goto L_08923208;
L_08923404:;
    func_089220F0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0892340C;
L_0892340C:;
    v1 = LD32(s1);
    goto L_089233E8;
L_08923414:;
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923420;
L_08923420:;
    a0 = LD32(s1+12);
    cnd_ = a0 == 0;
    if (cnd_) { v1 = LD_U8(s0+4); goto L_089233F8; }
    goto L_0892342C;
L_0892342C:;
    { rv_t r_ = func_0892216C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923434;
L_08923434:;
    v1 = LD_U8(s0+4);
    goto L_089233F8;
L_0892343C:;
    a0 = LD32(s1+12);
    cnd_ = a0 == 0;
    v0 = 5;
    if (cnd_) { goto L_08923468; }
    goto L_08923448;
L_08923448:;
    v1 = LD_U16(a0+10);
    cnd_ = v1 == v0;
    a1 = a0 + 0;
    if (cnd_) { goto L_089234C4; }
    goto L_08923454;
L_08923454:;
    a2 = 5;
    a3 = 1;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08923460;
L_08923460:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+12); goto L_089234C4; }
    goto L_08923468;
L_08923468:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    a1 = 5;
    v0 = LD32(v1+44);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923480;
L_08923480:;
    cnd_ = v0 == 0;
    ST32(sp+16, v0);
    if (cnd_) { goto L_089231D8; }
    goto L_08923488;
L_08923488:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_089236BC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923494;
L_08923494:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(sp+16); goto L_089234AC; }
    goto L_0892349C;
L_0892349C:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    a1 = sp + 16;
    goto L_089232B8;
L_089234AC:;
    a1 = s0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_08921EFC(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089234B8;
L_089234B8:;
    s2 = 1;
    goto L_089231D8;
L_089234C0:;
    a0 = LD32(s1+12);
    goto L_089234C4;
L_089234C4:;
    cnd_ = a0 == 0;
    v0 = s2 + 0;
    if (cnd_) { goto L_089231DC; }
    goto L_089234CC;
L_089234CC:;
    a1 = s0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_08921EFC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089234D8;
L_089234D8:;
    v0 = s2 | v0;
    s2 = 0 < v0;
    goto L_089231D8;
L_089234E4:;
    v0 = LD32(s1+16);
    v1 = 4;
    v0 = v0 & 0x6;
    cnd_ = v0 != v1;
    s2 = 1;
    if (cnd_) { goto L_089231D8; }
    goto L_089234F8;
L_089234F8:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08923520; }
    goto L_08923504;
L_08923504:;
    v0 = LD32(s1);
    goto L_08923508;
L_08923508:;
    v1 = LD32(v0+56);
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923514;
L_08923514:;
    v0 = LD32(s1+16);
    v0 = v0 | 0x2;
    goto L_08923208;
L_08923520:;
    func_089220F0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08923528;
L_08923528:;
    v0 = LD32(s1);
    goto L_08923508;
L_08923530:;
    v0 = LD32(s1+16);
    v1 = 6;
    v0 = v0 & 0x6;
    cnd_ = v0 != v1;
    s2 = 1;
    if (cnd_) { goto L_089231D8; }
    goto L_08923544;
L_08923544:;
    v1 = LD32(s1);
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923554;
L_08923554:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0892356C; }
    goto L_08923560;
L_08923560:;
    v0 = LD32(s1+16);
    goto L_08923564;
L_08923564:;
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    goto L_08923208;
L_0892356C:;
    { rv_t r_ = func_0892216C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923574;
L_08923574:;
    v0 = LD32(s1+16);
    goto L_08923564;
}

/* 0892357C */
rv_t func_0892357C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0892357C:;
    sp = sp - 32;
    v0 = 4;
    a1 = LD32(a0+16);
    v1 = a1 & 0x6;
    cnd_ = v1 == v0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089235BC; }
    goto L_089235A4;
L_089235A4:;
    goto L_089235A8;
L_089235A8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089235BC:;
    a0 = LD32(a0+12);
    cnd_ = a0 != 0;
    v0 = a1 | 0x1;
    if (cnd_) { goto L_08923610; }
    goto L_089235C8;
L_089235C8:;
    s2 = s1 + 20;
    v0 = LD32(s2+16);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089235A8; }
    goto L_089235D8;
L_089235D8:;
    a0 = s2 + 0;
    { rv_t r_ = func_08ABBA04(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089235E0;
L_089235E0:;
    s0 = v0 + 0;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089235A4; }
    goto L_089235F0;
L_089235F0:;
    v1 = LD32(s1);
    v0 = LD32(v1+60);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923600;
L_08923600:;
    a0 = s0 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08923608;
L_08923608:;
    goto L_089235D8;
L_08923610:;
    ST32(s1+16, v0);
    f0 = func_08922264(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08923618;
L_08923618:;
    v0 = LD32(s1+12);
    v0 = LD32(v0+8);
    v1 = (v0 >> 3) & 0x1;
    cnd_ = v1 != 0;
    v0 = (v0 >> 4) & 0x1;
    if (cnd_) { goto L_08923634; }
    goto L_0892362C;
L_0892362C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+16); goto L_08923658; }
    goto L_08923634;
L_08923634:;
    a0 = s1 + 0;
    { rv_t r_ = func_0892375C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892363C;
L_0892363C:;
    v1 = LD32(s1);
    ST32(sp, v0);
    a0 = s1 + 0;
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923654;
L_08923654:;
    v0 = LD32(s1+16);
    goto L_08923658;
L_08923658:;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s1+16, v0);
    goto L_089235C8;
}

/* 08923664 */
rv_t func_08923664(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08923664:;
    sp = sp - 32;
    s0 = a0 + 0;
    { rv_t r_ = func_0892375C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923678;
L_08923678:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08923690; }
    goto L_08923680;
L_08923680:;
    goto L_08923684;
L_08923684:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08923690:;
    v0 = LD32(s0);
    a1 = sp + 0;
    v1 = LD32(v0+48);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089236A4;
L_089236A4:;
    a0 = s0 + 0;
    { rv_t r_ = func_0892375C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089236AC;
L_089236AC:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08923690; }
    goto L_089236B4;
L_089236B4:;
    goto L_08923684;
}

/* 089236BC */
rv_t func_089236BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089236BC:;
    sp = sp - 16;
    v1 = 0 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08923708; }
    goto L_089236DC;
L_089236DC:;
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0892374C; }
    goto L_089236E8;
L_089236E8:;
    a0 = s0 + 0;
    { rv_t r_ = func_08921F94(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089236F0;
L_089236F0:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08923720; }
    goto L_089236F8;
L_089236F8:;
    v0 = LD32(s1+12);
    v1 = 1;
    ST32(s0+20, v0);
    ST32(s1+12, s0);
    goto L_08923708;
L_08923708:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08923720:;
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923728;
L_08923728:;
    v0 = LD32(s1+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0892373C; }
    goto L_08923734;
L_08923734:;
    v1 = 0 + 0;
    goto L_08923708;
L_0892373C:;
    { rv_t r_ = func_0892216C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923744;
L_08923744:;
    v1 = 0 + 0;
    goto L_08923708;
L_0892374C:;
    func_089220F0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08923754;
L_08923754:;
    goto L_089236E8;
}

/* 0892375C */
rv_t func_0892375C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892375C:;
    sp = sp - 16;
    v0 = 0 + 0;
    s1 = a0 + 0;
    s0 = LD32(a0+12);
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089237A4; }
    goto L_08923780;
L_08923780:;
    { rv_t r_ = func_08922044(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923788;
L_08923788:;
    v0 = LD32(s0+20);
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    ST32(s1+12, v0);
    if (cnd_) { goto L_089237A0; }
    goto L_08923798;
L_08923798:;
    { rv_t r_ = func_0892216C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089237A0;
L_089237A0:;
    v0 = s0 + 0;
    goto L_089237A4;
L_089237A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089237B8 */
void func_089237B8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_089237B8:;
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089237CC; }
    goto L_089237C4;
L_089237C4:;
    ST32(a0+12, a1);
    return;
L_089237CC:;
    v0 = LD32(v0+20);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089237EC; }
    goto L_089237D8;
L_089237D8:;
    a0 = v0 + 0;
    goto L_089237DC;
L_089237DC:;
    v0 = LD32(a0+20);
    v1 = a0 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089237DC; }
    goto L_089237EC;
L_089237EC:;
    ST32(v1+20, a1);
    return;
}

/* 089237F4 */
u32 func_089237F4(void)
{
    u32 v0 = 0;
L_089237F4:;
    v0 = 252;
    return v0;
}

/* 089237FC */
u64 func_089237FC(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089237FC:;
    v0 = D_08AF81D0 - (-32304);
    v1 = a0 + 12;
    v0 = v0 - 32304;
    ST32(a0, v0);
    ST32(a0+12, 0);
    ST32(v1+16, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    ST32(v1+12, 0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0892382C */
rv_t func_0892382C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892382C:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 12;
    s0 = D_08B1B504 - (-19196);
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892384C;
L_0892384C:;
    v1 = 32;
    a1 = LD32(s0-19196);
    ST32(s1+4, v0);
    a0 = 12;
    ST32(v0+8, v1);
    ST32(v0+4, a1);
    ST32(v0, 0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892386C;
L_0892386C:;
    ST32(s1+8, v0);
    v1 = 4;
    a0 = LD32(s0-19196);
    ST32(v0+4, a0);
    ST32(v0+8, v1);
    ST32(v0, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08923898 */
rv_t func_08923898(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08923898:;
    sp = sp - 64;
    v0 = D_08B285A0 - (-31328);
    s3 = a0 + 0;
    f20 = BITSF(LD32(v0-31328));
    v1 = LD32(a0+12);
    v0 = a0 + 12;
    ST32(sp, v0);
    ST32(sp+4, v1);
    cnd_ = v1 == 0;
    s0 = v1 + 0;
    if (cnd_) { goto L_08923944; }
    goto L_089238DC;
L_089238DC:;
    f21 = BITSF(0);
    s1 = LD32(s0);
    goto L_089238E4;
L_089238E4:;
    f0 = BITSF(LD32(s1+28));
    f0 = f0 - f20;
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    ST32(s1+28, FBITS(f0));
    if (cnd_) { goto L_089239C4; }
    goto L_089238FC;
L_089238FC:;
    a0 = sp + 0;
    { u64 r_ = func_08ABBCB4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08923904;
L_08923904:;
    s2 = LD32(sp);
    a0 = LD32(s2);
    cnd_ = a0 == 0;
    v1 = LD32(s0);
    if (cnd_) { goto L_0892392C; }
    goto L_08923914;
L_08923914:;
    v0 = LD32(a0);
    goto L_08923918;
L_08923918:;
    cnd_ = v0 == v1;
    if (cnd_) { v1 = LD32(a0+8); goto L_08923968; }
    goto L_08923920;
L_08923920:;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08923918; }
    goto L_0892392C;
L_0892392C:;
    a0 = LD32(s3+4);
    a1 = s1 + 0;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08923938;
L_08923938:;
    s0 = LD32(sp+4);
    goto L_0892393C;
L_0892393C:;
    cnd_ = s0 != 0;
    if (cnd_) { s1 = LD32(s0); goto L_089238E4; }
    goto L_08923944;
L_08923944:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08923968:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_089239B8; }
    goto L_08923970;
L_08923970:;
    ST32(v1+4, v0);
    goto L_08923974;
L_08923974:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s2, v1); goto L_08923984; }
    goto L_08923980;
L_08923980:;
    ST32(v0+8, v1);
    goto L_08923984;
L_08923984:;
    v0 = LD32(s2+12);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089239A8; }
    goto L_08923990;
L_08923990:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08923998;
L_08923998:;
    v0 = LD32(s2+16);
    goto L_0892399C;
L_0892399C:;
    v0 = v0 - 1;
    ST32(s2+16, v0);
    goto L_0892392C;
L_089239A8:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089239B0;
L_089239B0:;
    v0 = LD32(s2+16);
    goto L_0892399C;
L_089239B8:;
    ST32(s2+4, v0);
    v1 = LD32(a0+8);
    goto L_08923974;
L_089239C4:;
    a0 = sp + 0;
    { u64 r_ = func_08ABBCB4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089239CC;
L_089239CC:;
    s0 = LD32(sp+4);
    goto L_0892393C;
}

/* 089239D4 */
rv_t func_089239D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089239D4:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = a0 + 12;
    { rv_t r_ = func_08ABBC44(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089239F8;
L_089239F8:;
    s0 = LD32(s1+8);
    cnd_ = s0 == 0;
    if (cnd_) { s0 = LD32(s1+4); goto L_08923A3C; }
    goto L_08923A04;
L_08923A04:;
    s2 = LD32(s0);
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08923A30; }
    goto L_08923A10;
L_08923A10:;
    a0 = LD32(s2);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08923AD8; }
    goto L_08923A1C;
L_08923A1C:;
    s3 = LD32(s2+12);
    goto L_08923A20;
L_08923A20:;
    cnd_ = s3 != 0;
    if (cnd_) { goto L_08923AC0; }
    goto L_08923A28;
L_08923A28:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08923A30;
L_08923A30:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08923A38;
L_08923A38:;
    s0 = LD32(s1+4);
    goto L_08923A3C;
L_08923A3C:;
    cnd_ = s0 == 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_08923A78; }
    goto L_08923A44;
L_08923A44:;
    s2 = LD32(s0);
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08923A70; }
    goto L_08923A50;
L_08923A50:;
    a0 = LD32(s2);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08923AB0; }
    goto L_08923A5C;
L_08923A5C:;
    s3 = LD32(s2+12);
    goto L_08923A60;
L_08923A60:;
    cnd_ = s3 != 0;
    if (cnd_) { goto L_08923A98; }
    goto L_08923A68;
L_08923A68:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08923A70;
L_08923A70:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08923A78;
L_08923A78:;
    ST32(s1+8, 0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08923A98:;
    a0 = s3 + 0;
    func_08AA3740(a0, 0, 0, 0);
    goto L_08923AA0;
L_08923AA0:;
    a0 = s3 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08923AA8;
L_08923AA8:;
    goto L_08923A68;
L_08923AB0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08923AB8;
L_08923AB8:;
    s3 = LD32(s2+12);
    goto L_08923A60;
L_08923AC0:;
    a0 = s3 + 0;
    func_08AA3740(a0, 0, 0, 0);
    goto L_08923AC8;
L_08923AC8:;
    a0 = s3 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08923AD0;
L_08923AD0:;
    goto L_08923A28;
L_08923AD8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08923AE0;
L_08923AE0:;
    s3 = LD32(s2+12);
    goto L_08923A20;
}

/* 08923AE8 */
u64 func_08923AE8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08923AE8:;
    sp = sp - 32;
    v0 = a0 + 12;
    s2 = a0 + 0;
    a0 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    { u64 r_ = func_08ABBCB4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08923B14;
L_08923B14:;
    s1 = LD32(sp+4);
    cnd_ = s1 != 0;
    if (cnd_) { goto L_08923B34; }
    goto L_08923B20;
L_08923B20:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08923B34:;
    a0 = sp + 0;
    goto L_08923B38;
L_08923B38:;
    s0 = LD32(s1);
    { u64 r_ = func_08ABBCB4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08923B40;
L_08923B40:;
    a1 = LD32(s1);
    a0 = LD32(sp);
    func_08ABBCD8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08923B4C;
L_08923B4C:;
    a0 = LD32(s2+4);
    a1 = s0 + 0;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08923B58;
L_08923B58:;
    s1 = LD32(sp+4);
    cnd_ = s1 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08923B38; }
    goto L_08923B64;
L_08923B64:;
    goto L_08923B20;
}

/* 08923B6C */
rv_t func_08923B6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08923B6C:;
    sp = sp - 48;
    s5 = t0 + 0;
    s4 = a2 + 0;
    s3 = a1 + 0;
    s2 = a0 + 12;
    s1 = a3 + 0;
    f20 = f12;
    a0 = LD32(a0+4);
    { rv_t r_ = func_08AA37A0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923BB0;
L_08923BB0:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    v1 = v0 + 8;
    if (cnd_) { goto L_08923C30; }
    goto L_08923BBC;
L_08923BBC:;
    v0 = D_08B1B508 - (-19192);
    f3 = BITSF(LD32(v0-19192));
    f2 = BITSF(LD32(s1+8));
    f1 = BITSF(LD32(s1));
    f0 = BITSF(LD32(s1+4));
    v0 = LD32(s2+8);
    ST32(v1+8, FBITS(f2));
    a0 = 12;
    ST32(v1+4, FBITS(f0));
    ST32(s0, s3);
    ST32(s0+4, s4);
    ST32(s0+8, FBITS(f1));
    ST32(s0+20, FBITS(f20));
    ST32(s0+24, s5);
    cnd_ = v0 != 0;
    ST32(s0+28, FBITS(f3));
    if (cnd_) { goto L_08923C60; }
    goto L_08923BFC;
L_08923BFC:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923C04;
L_08923C04:;
    v1 = v0 + 0;
    goto L_08923C08;
L_08923C08:;
    v0 = LD32(s2);
    ST32(v1, s0);
    ST32(v1+4, 0);
    cnd_ = v0 == 0;
    ST32(v1+8, v0);
    if (cnd_) { goto L_08923C58; }
    goto L_08923C1C;
L_08923C1C:;
    ST32(v0+4, v1);
    goto L_08923C20;
L_08923C20:;
    v0 = LD32(s2+16);
    ST32(s2, v1);
    v0 = v0 + 1;
    ST32(s2+16, v0);
    goto L_08923C30;
L_08923C30:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08923C58:;
    ST32(s2+4, v1);
    goto L_08923C20;
L_08923C60:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923C68;
L_08923C68:;
    v1 = v0 + 0;
    goto L_08923C08;
}

/* 08923C70 */
void func_08923C70(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08923C70:;
    sp = sp - 16;
    s0 = D_08C25204 - (20996);
    v0 = LD32(s0+20996);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08923C98; }
    goto L_08923C88;
L_08923C88:;
    v0 = func_0895E918(t1, t2, t3);
    goto L_08923C90;
L_08923C90:;
    cnd_ = v0 == 0;
    ST32(s0+20996, v0);
    if (cnd_) { goto L_08923CAC; }
    goto L_08923C98;
L_08923C98:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923CAC;
L_08923CAC:;
    sp = sp + 16;
    return;
}

/* 08923CBC */
void func_08923CBC(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08923CBC:;
    sp = sp - 16;
    v0 = D_08C25204 - (20996);
    v0 = LD32(v0+20996);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08923CE0; }
    goto L_08923CD4;
L_08923CD4:;
    goto L_08923CD8;
L_08923CD8:;
    sp = sp + 16;
    return;
L_08923CE0:;
    v0 = LD32(v0);
    v1 = LD32(v0+12);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923CF0;
L_08923CF0:;
    goto L_08923CD8;
}

/* 08923CF8 */
void func_08923CF8(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08923CF8:;
    sp = sp - 16;
    s0 = D_08C25204 - (20996);
    v0 = LD32(s0+20996);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08923D24; }
    goto L_08923D14;
L_08923D14:;
    goto L_08923D18;
L_08923D18:;
    sp = sp + 16;
    return;
L_08923D24:;
    v0 = LD32(v0);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923D34;
L_08923D34:;
    v0 = LD32(s0+20996);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08923D14; }
    goto L_08923D40;
L_08923D40:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923D50;
L_08923D50:;
    goto L_08923D18;
}

/* 08923D58 */
void func_08923D58(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08923D58:;
    sp = sp - 16;
    v0 = D_08C25204 - (20996);
    v0 = LD32(v0+20996);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08923D7C; }
    goto L_08923D70;
L_08923D70:;
    goto L_08923D74;
L_08923D74:;
    sp = sp + 16;
    return;
L_08923D7C:;
    v0 = LD32(v0);
    v1 = LD32(v0+20);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923D8C;
L_08923D8C:;
    goto L_08923D74;
}

/* 08923D94 */
void func_08923D94(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08923D94:;
    sp = sp - 16;
    v0 = D_08C25204 - (20996);
    v0 = LD32(v0+20996);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08923DB8; }
    goto L_08923DAC;
L_08923DAC:;
    goto L_08923DB0;
L_08923DB0:;
    sp = sp + 16;
    return;
L_08923DB8:;
    v0 = LD32(v0);
    v1 = LD32(v0+24);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923DC8;
L_08923DC8:;
    goto L_08923DB0;
}

/* 08923DD0 */
rv_t func_08923DD0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08923DD0:;
    sp = sp - 16;
    func_089190B0();
    goto L_08923DE0;
L_08923DE0:;
    v0 = D_08C25204 - (20996);
    a0 = LD32(v0+20996);
    v1 = LD32(a0);
    v0 = LD32(v1+28);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923DF8;
L_08923DF8:;
    v1 = v0 + 0;
    a0 = v0 + 0;
    v0 = D_08C25208 - (21000);
    cnd_ = v1 != 0;
    ST32(v0+21000, v1);
    if (cnd_) { goto L_08923E18; }
    goto L_08923E0C;
L_08923E0C:;
    goto L_08923E10;
L_08923E10:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08923E18:;
    v0 = LD32(v1);
    v1 = LD32(v0+8);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923E28;
L_08923E28:;
    goto L_08923E10;
}

/* 08923E30 */
rv_t func_08923E30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08923E30:;
    sp = sp - 48;
    v0 = D_08C2520C - (21004);
    v1 = D_08B285A0 - (-31328);
    a0 = LD32(v0+21004);
    f20 = BITSF(LD32(v1-31328));
    v0 = v0 + 21004;
    ST32(sp, v0);
    cnd_ = a0 != 0;
    ST32(sp+4, a0);
    if (cnd_) { goto L_08923EA8; }
    goto L_08923E5C;
L_08923E5C:;
    a0 = D_08C25220 - (21024);
    goto L_08923E60;
L_08923E60:;
    a0 = a0 + 21024;
    { rv_t r_ = func_08836CA4(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923E68;
L_08923E68:;
    a0 = D_08C25280 - (21120);
    a0 = a0 + 21120;
    { rv_t r_ = func_08836CA4(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923E74;
L_08923E74:;
    v0 = D_08C25208 - (21000);
    a0 = LD32(v0+21000);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08923E94; }
    goto L_08923E84;
L_08923E84:;
    goto L_08923E88;
L_08923E88:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08923E94:;
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923EA0;
L_08923EA0:;
    goto L_08923E88;
L_08923EA8:;
    a0 = LD32(a0);
    goto L_08923EAC;
L_08923EAC:;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    f12 = f20;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923EBC;
L_08923EBC:;
    a0 = sp + 0;
    func_08ABBDB0(a0);
    goto L_08923EC4;
L_08923EC4:;
    a0 = LD32(sp+4);
    cnd_ = a0 != 0;
    if (cnd_) { a0 = LD32(a0); goto L_08923EAC; }
    goto L_08923ED0;
L_08923ED0:;
    a0 = D_08C25220 - (21024);
    goto L_08923E60;
}

/* 08923ED8 */
rv_t func_08923ED8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08923ED8:;
    sp = sp - 16;
    v0 = D_08C25208 - (21000);
    s1 = v0 + 21000;
    s0 = a0 + 0;
    v1 = LD32(v0+21000);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08923F30; }
    goto L_08923F00;
L_08923F00:;
    v1 = LD32(s0);
    goto L_08923F04;
L_08923F04:;
    a0 = s0 + 0;
    v0 = LD32(v1+32);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923F14;
L_08923F14:;
    { rv_t r_ = func_089190C4(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923F1C;
L_08923F1C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08923F30:;
    v0 = LD32(v1);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923F40;
L_08923F40:;
    v1 = LD32(s0);
    goto L_08923F04;
}

/* 08923F48 */
rv_t func_08923F48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08923F48:;
    v0 = D_08C25208 - (21000);
    v1 = LD32(v0+21000);
    sp = sp - 16;
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08923F6C; }
    goto L_08923F60;
L_08923F60:;
    goto L_08923F64;
L_08923F64:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08923F6C:;
    { u64 r_ = func_08923AE8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08923F74;
L_08923F74:;
    goto L_08923F64;
}

/* 08923F7C */
rv_t func_08923F7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08923F7C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08923F84 */
rv_t func_08923F84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08923F84:;
    sp = sp - 16;
    a0 = 32;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923F98;
L_08923F98:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    { u64 r_ = func_089237FC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08923FA4;
L_08923FA4:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08923FB8 */
rv_t func_08923FB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08923FB8:;
    v0 = LD32(a1);
    sp = sp - 16;
    a0 = v0 + 0;
    s0 = a1 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08923FE8; }
    goto L_08923FD4;
L_08923FD4:;
    ST32(s0, 0);
    goto L_08923FD8;
L_08923FD8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08923FE8:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08923FF8;
L_08923FF8:;
    ST32(s0, 0);
    goto L_08923FD8;
}

/* 08924000 */
rv_t func_08924000(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08924000:;
    sp = sp - 16;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    v0 = v0 < 0x1u;
    s0 = a1 < 0x1u;
    v0 = s0 & v0;
    s1 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08924060; }
    goto L_0892402C;
L_0892402C:;
    v1 = D_08C2520C - (21004);
    v0 = v1 + 21004;
    ST32(v0+16, 0);
    a0 = D_08C25220 - (21024);
    a0 = a0 + 21024;
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v1+21004, 0);
    { rv_t r_ = func_08836A8C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924054;
L_08924054:;
    a0 = D_08C25280 - (21120);
    a0 = a0 + 21120;
    { rv_t r_ = func_08836A8C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924060;
L_08924060:;
    v0 = s1 < 0x1u;
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = D_08C25280 - (21120); goto L_08924084; }
    goto L_08924070;
L_08924070:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08924084:;
    a0 = a0 + 21120;
    { rv_t r_ = func_08836B1C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892408C;
L_0892408C:;
    a0 = D_08C25220 - (21024);
    a0 = a0 + 21024;
    { rv_t r_ = func_08836B1C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924098;
L_08924098:;
    v0 = D_08C2520C - (21004);
    s0 = LD32(v0+21004);
    cnd_ = s0 == 0;
    s1 = v0 + 21004;
    if (cnd_) { goto L_089240CC; }
    goto L_089240A8;
L_089240A8:;
    v1 = LD32(s1+12);
    goto L_089240AC;
L_089240AC:;
    v0 = s0 + 0;
    a0 = s0 + 0;
    cnd_ = v1 != 0;
    s0 = LD32(s0+8);
    if (cnd_) { goto L_089240DC; }
    goto L_089240BC;
L_089240BC:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089240C4;
L_089240C4:;
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s1+12); goto L_089240AC; }
    goto L_089240CC;
L_089240CC:;
    ST32(s1+16, 0);
    ST32(s1, 0);
    ST32(s1+4, 0);
    goto L_08924070;
L_089240DC:;
    t_ = v1;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089240E4;
L_089240E4:;
    goto L_089240C4;
}

/* 089240EC */
rv_t func_089240EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089240EC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08924000(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924100;
L_08924100:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0892410C */
rv_t func_0892410C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892410C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08924000(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924120;
L_08924120:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0892412C */
void func_0892412C(u32 a0)
{
    u32 v0 = 0;
L_0892412C:;
    v0 = D_08AF8220 - (-32224);
    v0 = v0 - 32224;
    ST32(a0, v0);
    ST32(a0+12, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    return;
}

/* 08924148 */
u32 func_08924148(u32 a0)
{
    u32 v0 = 0;
L_08924148:;
    v0 = D_08AF8268 - (-32152);
    v0 = v0 - 32152;
    ST32(a0, v0);
    return v0;
}

/* 08924158 */
rv_t func_08924158(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08924158:;
    v0 = D_08AF8268 - (-32152);
    v0 = v0 - 32152;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08924168 */
rv_t func_08924168(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08924168:;
    v0 = D_08AF8268 - (-32152);
    v0 = v0 - 32152;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08924184;
L_08924184:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08924190 */
rv_t func_08924190(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08924190:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08924218; }
    goto L_089241B4;
L_089241B4:;
    v0 = LD32(s0+8);
    goto L_089241B8;
L_089241B8:;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08924200; }
    goto L_089241C4;
L_089241C4:;
    v0 = LD32(s0+12);
    goto L_089241C8;
L_089241C8:;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089241E8; }
    goto L_089241D4;
L_089241D4:;
    goto L_089241D8;
L_089241D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089241E8:;
    v0 = LD32(v0);
    v1 = LD32(v0+8);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089241F8;
L_089241F8:;
    goto L_089241D8;
L_08924200:;
    v0 = LD32(v0);
    v1 = LD32(v0+8);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924210;
L_08924210:;
    v0 = LD32(s0+12);
    goto L_089241C8;
L_08924218:;
    v0 = LD32(v0);
    v1 = LD32(v0+8);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924228;
L_08924228:;
    v0 = LD32(s0+8);
    goto L_089241B8;
}

/* 08924230 */
rv_t func_08924230(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08924230:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924254;
L_08924254:;
    v0 = 1;
    v1 = LD32(sp);
    cnd_ = v1 == v0;
    if (cnd_) { a0 = LD32(s1+4); goto L_089242D4; }
    goto L_08924264;
L_08924264:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08924294; }
    goto L_0892426C;
L_0892426C:;
    a0 = LD32(s1+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089242C4; }
    goto L_08924278;
L_08924278:;
    a0 = LD32(s1+8);
    goto L_0892427C;
L_0892427C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089242B4; }
    goto L_08924284;
L_08924284:;
    a0 = LD32(s1+12);
    goto L_08924288;
L_08924288:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089242A4; }
    goto L_08924290;
L_08924290:;
    goto L_08924294;
L_08924294:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089242A4:;
    a1 = s0 + 0;
    { rv_t r_ = func_089250AC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089242AC;
L_089242AC:;
    goto L_08924294;
L_089242B4:;
    a1 = s0 + 0;
    { rv_t r_ = func_089249E8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089242BC;
L_089242BC:;
    a0 = LD32(s1+12);
    goto L_08924288;
L_089242C4:;
    a1 = s0 + 0;
    { rv_t r_ = func_08925704(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089242CC;
L_089242CC:;
    a0 = LD32(s1+8);
    goto L_0892427C;
L_089242D4:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08924320; }
    goto L_089242DC;
L_089242DC:;
    a0 = LD32(s1+8);
    goto L_089242E0;
L_089242E0:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0892430C; }
    goto L_089242E8;
L_089242E8:;
    a0 = LD32(s1+12);
    goto L_089242EC;
L_089242EC:;
    cnd_ = a0 == 0;
    if (cnd_) {  goto L_08924294; }
    goto L_089242F4;
L_089242F4:;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924304;
L_08924304:;
    goto L_08924294;
L_0892430C:;
    v0 = LD32(v1+12);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924318;
L_08924318:;
    a0 = LD32(s1+12);
    goto L_089242EC;
L_08924320:;
    v0 = LD32(v1+12);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892432C;
L_0892432C:;
    a0 = LD32(s1+8);
    goto L_089242E0;
}

/* 08924334 */
rv_t func_08924334(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08924334:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 1;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924358;
L_08924358:;
    a1 = s1 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089243CC; }
    goto L_08924368;
L_08924368:;
    v0 = LD32(s0+8);
    goto L_0892436C;
L_0892436C:;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089243B4; }
    goto L_08924378;
L_08924378:;
    v0 = LD32(s0+12);
    goto L_0892437C;
L_0892437C:;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0892439C; }
    goto L_08924388;
L_08924388:;
    goto L_0892438C;
L_0892438C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0892439C:;
    v0 = LD32(v0);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089243AC;
L_089243AC:;
    goto L_0892438C;
L_089243B4:;
    v0 = LD32(v0);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089243C4;
L_089243C4:;
    v0 = LD32(s0+12);
    goto L_0892437C;
L_089243CC:;
    v0 = LD32(v0);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089243DC;
L_089243DC:;
    v0 = LD32(s0+8);
    goto L_0892436C;
}

/* 089243E4 */
rv_t func_089243E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089243E4:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+40);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924400;
L_08924400:;
    v1 = LD32(s0);
    ST32(s0+4, v0);
    v0 = LD32(v1+48);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924414;
L_08924414:;
    v1 = LD32(s0);
    ST32(s0+8, v0);
    v0 = LD32(v1+56);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924428;
L_08924428:;
    ST32(s0+12, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0892443C */
rv_t func_0892443C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0892443C:;
    sp = sp - 32;
    s0 = a0 + 0;
    f20 = f12;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089244C4; }
    goto L_08924460;
L_08924460:;
    v0 = LD32(s0+8);
    goto L_08924464;
L_08924464:;
    f12 = f20;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089244AC; }
    goto L_08924470;
L_08924470:;
    v0 = LD32(s0+12);
    goto L_08924474;
L_08924474:;
    f12 = f20;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08924494; }
    goto L_08924480;
L_08924480:;
    goto L_08924484;
L_08924484:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08924494:;
    v0 = LD32(v0);
    v1 = LD32(v0+20);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089244A4;
L_089244A4:;
    goto L_08924484;
L_089244AC:;
    v0 = LD32(v0);
    v1 = LD32(v0+20);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089244BC;
L_089244BC:;
    v0 = LD32(s0+12);
    goto L_08924474;
L_089244C4:;
    v0 = LD32(v0);
    v1 = LD32(v0+20);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089244D4;
L_089244D4:;
    v0 = LD32(s0+8);
    goto L_08924464;
}

/* 089244DC */
rv_t func_089244DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089244DC:;
    sp = sp - 16;
    a1 = a0 + 4;
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089244FC;
L_089244FC:;
    v1 = LD32(s0);
    a1 = s0 + 8;
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924510;
L_08924510:;
    v1 = LD32(s0);
    a1 = s0 + 12;
    v0 = LD32(v1+60);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924524;
L_08924524:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08924534 */
rv_t func_08924534(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08924534:;
    sp = sp - 16;
    s2 = a1 + 0;
    s1 = 0 + 0;
    s0 = a0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089245D4; }
    goto L_08924560;
L_08924560:;
    v1 = LD32(s0+8);
    a1 = s2 + 0;
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089245B8; }
    goto L_08924570;
L_08924570:;
    v1 = LD32(s0+12);
    a1 = s2 + 0;
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0892459C; }
    goto L_08924580;
L_08924580:;
    v0 = s1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0892459C:;
    v1 = LD32(v1);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089245AC;
L_089245AC:;
    v0 = s1 | v0;
    s1 = 0 < v0;
    goto L_08924580;
L_089245B8:;
    v1 = LD32(v1);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089245C8;
L_089245C8:;
    v0 = s1 | v0;
    s1 = 0 < v0;
    goto L_08924570;
L_089245D4:;
    v1 = LD32(v1);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089245E4;
L_089245E4:;
    s1 = 0 < v0;
    goto L_08924560;
}

/* 089245EC */
rv_t func_089245EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089245EC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08924660; }
    goto L_08924608;
L_08924608:;
    v0 = LD32(s0+8);
    goto L_0892460C;
L_0892460C:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08924648; }
    goto L_08924614;
L_08924614:;
    v0 = LD32(s0+12);
    goto L_08924618;
L_08924618:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08924630; }
    goto L_08924620;
L_08924620:;
    goto L_08924624;
L_08924624:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08924630:;
    v0 = LD32(v0);
    v1 = LD32(v0+28);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924640;
L_08924640:;
    goto L_08924624;
L_08924648:;
    v0 = LD32(v0);
    v1 = LD32(v0+28);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924658;
L_08924658:;
    v0 = LD32(s0+12);
    goto L_08924618;
L_08924660:;
    v0 = LD32(v0);
    v1 = LD32(v0+28);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924670;
L_08924670:;
    v0 = LD32(s0+8);
    goto L_0892460C;
}

/* 08924678 */
rv_t func_08924678(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08924678:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 68;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924694;
L_08924694:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_089254C0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089246A4;
L_089246A4:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089246BC */
rv_t func_089246BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089246BC:;
    v0 = LD32(a1);
    sp = sp - 16;
    a0 = v0 + 0;
    s0 = a1 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089246EC; }
    goto L_089246D8;
L_089246D8:;
    ST32(s0, 0);
    goto L_089246DC;
L_089246DC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089246EC:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089246FC;
L_089246FC:;
    ST32(s0, 0);
    goto L_089246DC;
}

/* 08924704 */
rv_t func_08924704(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08924704:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 60;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924720;
L_08924720:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08924898(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924730;
L_08924730:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08924748 */
rv_t func_08924748(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08924748:;
    v0 = LD32(a1);
    sp = sp - 16;
    a0 = v0 + 0;
    s0 = a1 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08924778; }
    goto L_08924764;
L_08924764:;
    ST32(s0, 0);
    goto L_08924768;
L_08924768:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08924778:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924788;
L_08924788:;
    ST32(s0, 0);
    goto L_08924768;
}

/* 08924790 */
rv_t func_08924790(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08924790:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 56;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089247AC;
L_089247AC:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08924ED0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089247BC;
L_089247BC:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089247D4 */
rv_t func_089247D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089247D4:;
    v0 = LD32(a1);
    sp = sp - 16;
    a0 = v0 + 0;
    s0 = a1 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08924804; }
    goto L_089247F0;
L_089247F0:;
    ST32(s0, 0);
    goto L_089247F4;
L_089247F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08924804:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924814;
L_08924814:;
    ST32(s0, 0);
    goto L_089247F4;
}

/* 0892481C */
rv_t func_0892481C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_0892481C:;
    a2 = D_08B45A9C - (23196);
    v1 = a2 + 23196;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    v0 = a0 + 8;
    f2 = BITSF(LD32(a2+23196));
    ST32(v0+8, FBITS(f0));
    a3 = a0 + 40;
    ST32(v0+4, FBITS(f1));
    v0 = a0 + 20;
    f0 = BITSF(LD32(v1+8));
    ST32(a0+8, FBITS(f2));
    f1 = BITSF(LD32(v1+4));
    v1 = D_08AED424 - (-11228);
    ST32(v0+8, FBITS(f0));
    f2 = BITSF(LD32(a2+23196));
    f0 = BITSF(LD32(v1-11228));
    ST32(v0+4, FBITS(f1));
    v0 = D_08AF8298 - (-32104);
    v0 = v0 - 32104;
    ST32(a0+4, a1);
    ST32(a0+20, FBITS(f2));
    ST32(a0, v0);
    ST32(a0+36, FBITS(f0));
    ST32(a0+40, 0);
    ST32(a3+16, 0);
    ST32(a0+32, 0);
    ST32(a3+4, 0);
    ST32(a3+8, 0);
    ST32(a3+12, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 08924898 */
rv_t func_08924898(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_08924898:;
    a2 = D_08B45A9C - (23196);
    v1 = a2 + 23196;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    v0 = a0 + 8;
    f2 = BITSF(LD32(a2+23196));
    ST32(v0+8, FBITS(f0));
    a3 = a0 + 40;
    ST32(v0+4, FBITS(f1));
    v0 = a0 + 20;
    f0 = BITSF(LD32(v1+8));
    ST32(a0+8, FBITS(f2));
    f1 = BITSF(LD32(v1+4));
    v1 = D_08AED428 - (-11224);
    ST32(v0+8, FBITS(f0));
    f2 = BITSF(LD32(a2+23196));
    f0 = BITSF(LD32(v1-11224));
    ST32(v0+4, FBITS(f1));
    v0 = D_08AF8298 - (-32104);
    v0 = v0 - 32104;
    ST32(a0+4, a1);
    ST32(a0+20, FBITS(f2));
    ST32(a0, v0);
    ST32(a0+36, FBITS(f0));
    ST32(a0+40, 0);
    ST32(a3+16, 0);
    ST32(a0+32, 0);
    ST32(a3+4, 0);
    ST32(a3+8, 0);
    ST32(a3+12, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 08924914 */
rv_t func_08924914(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08924914:;
    v0 = D_08AF8298 - (-32104);
    v0 = v0 - 32104;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08924D04(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08924934;
L_08924934:;
    a0 = s0 + 40;
    { rv_t r_ = func_08ABBE7C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892493C;
L_0892493C:;
    v0 = D_08AF82C8 - (-32056);
    v0 = v0 - 32056;
    ST32(s0, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08924958 */
rv_t func_08924958(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08924958:;
    v0 = D_08AF8298 - (-32104);
    v0 = v0 - 32104;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08924D04(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08924978;
L_08924978:;
    a0 = s0 + 40;
    { rv_t r_ = func_08ABBE7C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924980;
L_08924980:;
    v0 = D_08AF82C8 - (-32056);
    v0 = v0 - 32056;
    ST32(s0, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0892499C */
rv_t func_0892499C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892499C:;
    v0 = D_08AF8298 - (-32104);
    v0 = v0 - 32104;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08924D04(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089249BC;
L_089249BC:;
    a0 = s0 + 40;
    { rv_t r_ = func_08ABBE7C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089249C4;
L_089249C4:;
    v0 = D_08AF82C8 - (-32056);
    v0 = v0 - 32056;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089249D8;
L_089249D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089249E8 */
rv_t func_089249E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089249E8:;
    sp = sp - 32;
    s1 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924A0C;
L_08924A0C:;
    s0 = s0 + 36;
    v0 = LD32(sp);
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08924A34; }
    goto L_08924A20;
L_08924A20:;
    goto L_08924A24;
L_08924A24:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08924A34:;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924A3C;
L_08924A3C:;
    goto L_08924A24;
}

/* 08924A44 */
rv_t func_08924A44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08924A44:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924A68;
L_08924A68:;
    a0 = s0 + 0;
    f12 = BITSF(LD32(s1+36));
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924A74;
L_08924A74:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08924A88 */
rv_t func_08924A88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08924A88:;
    sp = sp - 80;
    s2 = a0 + 0;
    { u64 r_ = func_08924D04(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08924AB8;
L_08924AB8:;
    f2 = BITSF(0);
    f0 = BITSF(LD32(s2+32));
    f1 = BITSF(LD32(s2+36));
    f0 = f0 * f1;
    fcc = FCMP(f0, f2, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_08924B44; }
    goto L_08924AD8;
L_08924AD8:;
    v0 = D_08C25208 - (21000);
    v1 = LD32(v0+21000);
    ST32(sp+4, 0);
    v0 = v1 + 12;
    a0 = LD32(v1+12);
    ST32(sp, v0);
    ST32(sp+4, a0);
    cnd_ = a0 == 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08924B44; }
    goto L_08924AFC;
L_08924AFC:;
    s6 = D_08B1E460 - (-7072);
    s5 = D_08B1E464 - (-7068);
    s7 = 1;
    s4 = s2 + 8;
    a0 = sp + 0;
    goto L_08924B10;
L_08924B10:;
    s0 = LD32(v1);
    func_08ABBEEC(a0);
    goto L_08924B18;
L_08924B18:;
    v1 = LD32(s2);
    a1 = s0 + 0;
    v0 = LD32(v1+32);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924B2C;
L_08924B2C:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s6-7072); goto L_08924B6C; }
    goto L_08924B34;
L_08924B34:;
    v1 = LD32(sp+4);
    cnd_ = v1 != 0;
    if (cnd_) { a0 = sp + 0; goto L_08924B10; }
    goto L_08924B40;
L_08924B40:;
    goto L_08924B44;
L_08924B44:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08924B6C:;
    s3 = s2 + 40;
    { rv_t r_ = func_08AA37A0(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924B74;
L_08924B74:;
    s1 = v0 + 0;
    a1 = s0 + 8;
    a2 = v0 + 28;
    cnd_ = v0 == 0;
    a3 = v0 + 40;
    if (cnd_) { goto L_08924B34; }
    goto L_08924B88;
L_08924B88:;
    v0 = LD32(s5-7068);
    ST32(s1+20, 0);
    a0 = 12;
    v0 = v0 + 1;
    ST32(s5-7068, v0);
    ST32(s1, v0);
    v1 = LD32(s0);
    f2 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a1+8));
    ST32(s1+4, v1);
    ST32(a2+8, FBITS(f0));
    ST32(a2+4, FBITS(f1));
    ST32(s1+28, FBITS(f2));
    v0 = LD32(s0+4);
    f4 = BITSF(LD32(s0+8));
    f5 = BITSF(LD32(a1+8));
    f3 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(s2+8));
    f1 = BITSF(LD32(s4+4));
    f2 = BITSF(LD32(s4+8));
    ST32(s1+8, v0);
    f0 = f0 - f4;
    f1 = f1 - f3;
    ST32(s1+12, s7);
    f2 = f2 - f5;
    v0 = LD32(s0+24);
    t0 = LD32(s3+8);
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    ST32(s1+16, v0);
    ST32(s1+40, FBITS(f0));
    ST32(a3+4, FBITS(f1));
    cnd_ = t0 != 0;
    ST32(a3+8, FBITS(f2));
    if (cnd_) { goto L_08924C58; }
    goto L_08924C18;
L_08924C18:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924C20;
L_08924C20:;
    v1 = v0 + 0;
    goto L_08924C24;
L_08924C24:;
    v0 = LD32(s3);
    ST32(v1, s1);
    ST32(v1+4, 0);
    cnd_ = v0 == 0;
    ST32(v1+8, v0);
    if (cnd_) { goto L_08924C50; }
    goto L_08924C38;
L_08924C38:;
    ST32(v0+4, v1);
    goto L_08924C3C;
L_08924C3C:;
    v0 = LD32(s3+16);
    ST32(s3, v1);
    v0 = v0 + 1;
    ST32(s3+16, v0);
    goto L_08924B34;
L_08924C50:;
    ST32(s3+4, v1);
    goto L_08924C3C;
L_08924C58:;
    t_ = t0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924C60;
L_08924C60:;
    v1 = v0 + 0;
    goto L_08924C24;
}

/* 08924C68 */
rv_t func_08924C68(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08924C68:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08924C70 */
rv_t func_08924C70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08924C70:;
    f0 = BITSF(LD32(a0+32));
    f2 = BITSF(LD32(a1+20));
    f1 = BITSF(LD32(a0+36));
    v0 = a1 + 8;
    f2 = f2 * f0;
    v1 = a0 + 8;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v1+4));
    f2 = f2 * f1;
    f4 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(v1+8));
    f6 = BITSF(LD32(a0+8));
    f3 = f3 - f0;
    f5 = f5 - f1;
    f4 = f4 - f6;
    f2 = f2 * f2;
    sp = sp - 16;
    ST32(sp+4, FBITS(f3));
    v0 = FBITS(f4);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f4));
    v0 = 1;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    ST32(sp+8, FBITS(f5));
    if (cnd_) { goto L_08924CFC; }
    goto L_08924CF8;
L_08924CF8:;
    v0 = 0 + 0;
    goto L_08924CFC;
L_08924CFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08924D04 */
u64 func_08924D04(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08924D04:;
    sp = sp - 48;
    v0 = LD32(a0+40);
    a0 = a0 + 40;
    ST32(sp, a0);
    ST32(sp+4, v0);
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08924D8C; }
    goto L_08924D34;
L_08924D34:;
    s3 = D_08B1E460 - (-7072);
    goto L_08924D38;
L_08924D38:;
    s2 = LD32(s0);
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08924D84; }
    goto L_08924D44;
L_08924D44:;
    a0 = sp + 0;
    func_08ABBF10(a0);
    goto L_08924D4C;
L_08924D4C:;
    s1 = LD32(sp);
    a0 = LD32(s1);
    cnd_ = a0 == 0;
    v1 = LD32(s0);
    if (cnd_) { goto L_08924D74; }
    goto L_08924D5C;
L_08924D5C:;
    v0 = LD32(a0);
    goto L_08924D60;
L_08924D60:;
    cnd_ = v0 == v1;
    if (cnd_) { v1 = LD32(a0+8); goto L_08924DA8; }
    goto L_08924D68;
L_08924D68:;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08924D60; }
    goto L_08924D74;
L_08924D74:;
    a0 = LD32(s3-7072);
    a1 = s2 + 0;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08924D80;
L_08924D80:;
    v0 = LD32(sp+4);
    goto L_08924D84;
L_08924D84:;
    cnd_ = v0 != 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08924D38; }
    goto L_08924D8C;
L_08924D8C:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_08924DA8:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08924DF8; }
    goto L_08924DB0;
L_08924DB0:;
    ST32(v1+4, v0);
    goto L_08924DB4;
L_08924DB4:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s1, v1); goto L_08924DC4; }
    goto L_08924DC0;
L_08924DC0:;
    ST32(v0+8, v1);
    goto L_08924DC4;
L_08924DC4:;
    v0 = LD32(s1+12);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08924DE8; }
    goto L_08924DD0;
L_08924DD0:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08924DD8;
L_08924DD8:;
    v0 = LD32(s1+16);
    goto L_08924DDC;
L_08924DDC:;
    v0 = v0 - 1;
    ST32(s1+16, v0);
    goto L_08924D74;
L_08924DE8:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924DF0;
L_08924DF0:;
    v0 = LD32(s1+16);
    goto L_08924DDC;
L_08924DF8:;
    ST32(s1+4, v0);
    v1 = LD32(a0+8);
    goto L_08924DB4;
}

/* 08924E04 */
rv_t func_08924E04(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08924E04:;
    sp = sp - 16;
    a2 = D_08B45A9C - (23196);
    v1 = a2 + 23196;
    v0 = a0 + 8;
    s0 = a0 + 0;
    s1 = a0 + 40;
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(a2+23196));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f0));
    v0 = a0 + 20;
    ST32(a0+8, FBITS(f2));
    a0 = 16;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    v1 = D_08AED42C - (-11220);
    ST32(v0+8, FBITS(f0));
    f2 = BITSF(LD32(a2+23196));
    ST32(v0+4, FBITS(f1));
    v0 = D_08AF82F0 - (-32016);
    v0 = v0 - 32016;
    f0 = BITSF(LD32(v1-11220));
    ST32(s0, v0);
    v0 = 4;
    ST32(s0+4, a1);
    ST32(s0+20, FBITS(f2));
    ST32(s0+36, FBITS(f0));
    ST32(s1+4, v0);
    ST32(s0+32, 0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924E8C;
L_08924E8C:;
    a1 = LD32(s1+4);
    ST32(s0+40, v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08924EB4; }
    goto L_08924E9C;
L_08924E9C:;
    v1 = v0 + 0;
    goto L_08924EA0;
L_08924EA0:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08924EA0; }
    goto L_08924EB4;
L_08924EB4:;
    ST32(s1+8, 0);
    ST32(s1+12, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08924ED0 */
rv_t func_08924ED0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08924ED0:;
    sp = sp - 16;
    a2 = D_08B45A9C - (23196);
    v1 = a2 + 23196;
    v0 = a0 + 8;
    s0 = a0 + 0;
    s1 = a0 + 40;
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(a2+23196));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f0));
    v0 = a0 + 20;
    ST32(a0+8, FBITS(f2));
    a0 = 16;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    v1 = D_08AED430 - (-11216);
    ST32(v0+8, FBITS(f0));
    f2 = BITSF(LD32(a2+23196));
    ST32(v0+4, FBITS(f1));
    v0 = D_08AF82F0 - (-32016);
    v0 = v0 - 32016;
    f0 = BITSF(LD32(v1-11216));
    ST32(s0, v0);
    v0 = 4;
    ST32(s0+4, a1);
    ST32(s0+20, FBITS(f2));
    ST32(s0+36, FBITS(f0));
    ST32(s1+4, v0);
    ST32(s0+32, 0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08924F58;
L_08924F58:;
    a1 = LD32(s1+4);
    ST32(s0+40, v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08924F80; }
    goto L_08924F68;
L_08924F68:;
    v1 = v0 + 0;
    goto L_08924F6C;
L_08924F6C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08924F6C; }
    goto L_08924F80;
L_08924F80:;
    ST32(s1+8, 0);
    ST32(s1+12, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08924F9C */
u64 func_08924F9C(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08924F9C:;
    v0 = D_08AF82F0 - (-32016);
    v0 = v0 - 32016;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08925300(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08924FBC;
L_08924FBC:;
    v0 = LD32(s0+40);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08924FE4; }
    goto L_08924FC8;
L_08924FC8:;
    v0 = D_08AF82C8 - (-32056);
    goto L_08924FCC;
L_08924FCC:;
    v0 = v0 - 32056;
    ST32(s0, v0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08924FE4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08924FEC;
L_08924FEC:;
    v0 = D_08AF82C8 - (-32056);
    goto L_08924FCC;
}

/* 08924FF4 */
rv_t func_08924FF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08924FF4:;
    v0 = D_08AF82F0 - (-32016);
    v0 = v0 - 32016;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08925300(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08925014;
L_08925014:;
    v0 = LD32(s0+40);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0892503C; }
    goto L_08925020;
L_08925020:;
    v0 = D_08AF82C8 - (-32056);
    goto L_08925024;
L_08925024:;
    v0 = v0 - 32056;
    ST32(s0, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0892503C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08925044;
L_08925044:;
    v0 = D_08AF82C8 - (-32056);
    goto L_08925024;
}

/* 0892504C */
rv_t func_0892504C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892504C:;
    v0 = D_08AF82F0 - (-32016);
    v0 = v0 - 32016;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08925300(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892506C;
L_0892506C:;
    v0 = LD32(s0+40);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0892509C; }
    goto L_08925078;
L_08925078:;
    v0 = D_08AF82C8 - (-32056);
    goto L_0892507C;
L_0892507C:;
    v0 = v0 - 32056;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892508C;
L_0892508C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0892509C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089250A4;
L_089250A4:;
    v0 = D_08AF82C8 - (-32056);
    goto L_0892507C;
}

/* 089250AC */
rv_t func_089250AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089250AC:;
    sp = sp - 32;
    s1 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089250D0;
L_089250D0:;
    s0 = s0 + 36;
    v0 = LD32(sp);
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089250F8; }
    goto L_089250E4;
L_089250E4:;
    goto L_089250E8;
L_089250E8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089250F8:;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08925100;
L_08925100:;
    goto L_089250E8;
}

/* 08925108 */
rv_t func_08925108(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08925108:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892512C;
L_0892512C:;
    a0 = s0 + 0;
    f12 = BITSF(LD32(s1+36));
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08925138;
L_08925138:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0892514C */
rv_t func_0892514C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0892514C:;
    sp = sp - 64;
    v0 = a0 + 40;
    f20 = f12;
    a1 = sp + 0;
    v1 = LD32(v0+4);
    ST32(sp, v0);
    ST32(sp+4, 0);
    cnd_ = v1 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_089251C0; }
    goto L_08925190;
L_08925190:;
    a3 = LD32(a0+40);
    a2 = v1 + 0;
    goto L_08925198;
L_08925198:;
    v0 = LD32(a1+4);
    v1 = v0 << 2;
    v1 = v1 + a3;
    a0 = LD32(v1);
    v0 = v0 + 1;
    v1 = v0 < a2;
    cnd_ = a0 != 0;
    ST32(a1+8, a0);
    if (cnd_) { goto L_089251C0; }
    goto L_089251B8;
L_089251B8:;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_08925198; }
    goto L_089251C0;
L_089251C0:;
    s0 = LD32(sp+8);
    cnd_ = s0 == 0;
    s3 = D_08B1B50C - (-19188);
    if (cnd_) { goto L_08925260; }
    goto L_089251CC;
L_089251CC:;
    s4 = D_08B1E460 - (-7072);
    s5 = 1;
    s1 = LD32(s0);
    goto L_089251D8;
L_089251D8:;
    f1 = BITSF(LD32(s3-19188));
    f0 = BITSF(LD32(s1+20));
    f0 = f0 + f20;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    ST32(s1+20, FBITS(f0));
    if (cnd_) { goto L_089252BC; }
    goto L_089251F4;
L_089251F4:;
    a0 = sp + 0;
    { u64 r_ = func_08ABBF54(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089251FC;
L_089251FC:;
    s2 = LD32(sp);
    a1 = LD32(s0);
    v0 = LD32(s2+4);
    v1 = LD32(a1+4);
    a0 = LD32(s2);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08925248; }
    goto L_0892522C;
L_0892522C:;
    v0 = LD32(a0);
    goto L_08925230;
L_08925230:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s2+8); goto L_08925288; }
    goto L_08925238;
L_08925238:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08925230; }
    goto L_08925248;
L_08925248:;
    a0 = LD32(s4-7072);
    a1 = s1 + 0;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08925254;
L_08925254:;
    s0 = LD32(sp+8);
    goto L_08925258;
L_08925258:;
    cnd_ = s0 != 0;
    if (cnd_) { s1 = LD32(s0); goto L_089251D8; }
    goto L_08925260;
L_08925260:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08925288:;
    cnd_ = v0 != 0;
    if (cnd_) { ST8(a0+8, s5); goto L_08925248; }
    goto L_08925290;
L_08925290:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_089252B4; }
    goto L_08925298;
L_08925298:;
    ST32(a2+4, v0);
    goto L_0892529C;
L_0892529C:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089252A4;
L_089252A4:;
    v0 = LD32(s2+12);
    v0 = v0 - 1;
    ST32(s2+12, v0);
    goto L_08925248;
L_089252B4:;
    ST32(v1, v0);
    goto L_0892529C;
L_089252BC:;
    a0 = sp + 0;
    { u64 r_ = func_08ABBF54(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089252C4;
L_089252C4:;
    s0 = LD32(sp+8);
    goto L_08925258;
}

/* 089252CC */
rv_t func_089252CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089252CC:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089252D4 */
rv_t func_089252D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
L_089252D4:;
    f2 = BITSF(LD32(a0+36));
    f0 = BITSF(LD32(a0+32));
    f1 = BITSF(0);
    f0 = f0 * f2;
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_089252F8; }
    goto L_089252F4;
L_089252F4:;
    v0 = 0 + 0;
    goto L_089252F8;
L_089252F8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08925300 */
u64 func_08925300(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08925300:;
    sp = sp - 32;
    v0 = a0 + 40;
    a0 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABBF54(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892532C;
L_0892532C:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08925374; }
    goto L_08925338;
L_08925338:;
    s2 = D_08B1E460 - (-7072);
    goto L_0892533C;
L_0892533C:;
    s1 = LD32(s0);
    cnd_ = s1 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0892536C; }
    goto L_08925348;
L_08925348:;
    { u64 r_ = func_08ABBF54(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08925350;
L_08925350:;
    a1 = LD32(s0);
    a0 = LD32(sp);
    func_08ABBFC4(a0, a1, 0, 0, 0);
    goto L_0892535C;
L_0892535C:;
    a0 = LD32(s2-7072);
    a1 = s1 + 0;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08925368;
L_08925368:;
    v0 = LD32(sp+8);
    goto L_0892536C;
L_0892536C:;
    cnd_ = v0 != 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0892533C; }
    goto L_08925374;
L_08925374:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0892538C */
void func_0892538C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f5 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr4 = v[4], vr8 = v[8], vr12 = v[12];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892538C:;
    sp = sp - 16;
    {vr4=0.63661977236f;}
    v1 = D_08AED434 - (-11212);
    a2 = D_08B45A9C - (23196);
    s0 = a0 + 0;
    s1 = a0 + 52;
    v0 = LD32(v1-11212);
    {vr8=BITSF(v0);}
    {float s0=vr8;float t0=vr4;float d0=s0*t0;vr8=d0;}
    {vr0=BITSF(v0);}
    {v[16]=BITSF(v0);}
    {float s0=vr0;float t0=vr4;float d0=s0*t0;vr12=d0;}
    {float s0=v[16];float t0=vr4;float d0=s0*t0;vr4=d0;}
    v1 = a2 + 23196;
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1+8));
    {float s0=vr8;float d0=cosf(s0*1.57079632679f);v[16]=d0;}
    {float s0=vr8;float d0=sinf(s0*1.57079632679f);vr8=d0;}
    v0 = a0 + 8;
    {float s0=vr4;float d0=cosf(s0*1.57079632679f);v[20]=d0;}
    {float s0=vr12;float d0=cosf(s0*1.57079632679f);v[24]=d0;}
    {float s0=vr4;float d0=sinf(s0*1.57079632679f);vr4=d0;}
    {float s0=vr12;float d0=sinf(s0*1.57079632679f);vr12=d0;}
    ST32(v0+8, FBITS(f0));
    {float s0=vr8;float t0=v[16];float d0=s0/t0;vr0=d0;}
    ST32(v0+4, FBITS(f1));
    {v0=FBITS(vr0);}
    f5 = BITSF(v0);
    f2 = BITSF(LD32(a2+23196));
    f1 = BITSF(LD32(v1+8));
    v0 = a0 + 20;
    ST32(a0+8, FBITS(f2));
    a0 = 16;
    f2 = BITSF(LD32(v1+4));
    ST32(v0+8, FBITS(f1));
    {float s0=vr4;float t0=v[20];float d0=s0/t0;vr0=d0;}
    {v1=FBITS(vr0);}
    ST32(v0+4, FBITS(f2));
    f3 = BITSF(LD32(a2+23196));
    ST32(s0+4, a1);
    ST32(s0+20, FBITS(f3));
    ST32(s0+36, FBITS(f5));
    {float s0=vr12;float t0=v[24];float d0=s0/t0;vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    v0 = D_08AF8320 - (-31968);
    v0 = v0 - 31968;
    ST32(s0, v0);
    v0 = D_08AED438 - (-11208);
    ST32(s0+44, FBITS(f0));
    f0 = BITSF(LD32(v0-11208));
    v0 = 4;
    ST32(s0+40, v1);
    ST32(s0+48, FBITS(f0));
    ST32(s1+4, v0);
    ST32(s0+32, 0);
    { rv_t r_ = ({ v[0]=vr0;v[4]=vr4;v[8]=vr8;v[12]=vr12;__auto_type vr_t_ = func_08A94838(a0, t1, t2, t3); vr0=v[0];vr4=v[4];vr8=v[8];vr12=v[12];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892547C;
L_0892547C:;
    a1 = LD32(s1+4);
    ST32(s0+52, v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089254A4; }
    goto L_0892548C;
L_0892548C:;
    v1 = v0 + 0;
    goto L_08925490;
L_08925490:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08925490; }
    goto L_089254A4;
L_089254A4:;
    ST32(s1+8, 0);
    ST32(s1+12, 0);
    sp = sp + 16;
    { v[0]=vr0;v[4]=vr4;v[8]=vr8;v[12]=vr12;return; }
    v[0]=vr0;v[4]=vr4;v[8]=vr8;v[12]=vr12;
}

/* 089254C0 */
rv_t func_089254C0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f5 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr4 = v[4], vr8 = v[8], vr12 = v[12];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089254C0:;
    sp = sp - 16;
    {vr4=0.63661977236f;}
    v1 = D_08AED43C - (-11204);
    a2 = D_08B45A9C - (23196);
    s0 = a0 + 0;
    s1 = a0 + 52;
    v0 = LD32(v1-11204);
    {vr8=BITSF(v0);}
    {float s0=vr8;float t0=vr4;float d0=s0*t0;vr8=d0;}
    {vr0=BITSF(v0);}
    {v[16]=BITSF(v0);}
    {float s0=vr0;float t0=vr4;float d0=s0*t0;vr12=d0;}
    {float s0=v[16];float t0=vr4;float d0=s0*t0;vr4=d0;}
    v1 = a2 + 23196;
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1+8));
    {float s0=vr8;float d0=cosf(s0*1.57079632679f);v[16]=d0;}
    {float s0=vr8;float d0=sinf(s0*1.57079632679f);vr8=d0;}
    v0 = a0 + 8;
    {float s0=vr4;float d0=cosf(s0*1.57079632679f);v[20]=d0;}
    {float s0=vr12;float d0=cosf(s0*1.57079632679f);v[24]=d0;}
    {float s0=vr4;float d0=sinf(s0*1.57079632679f);vr4=d0;}
    {float s0=vr12;float d0=sinf(s0*1.57079632679f);vr12=d0;}
    ST32(v0+8, FBITS(f0));
    {float s0=vr8;float t0=v[16];float d0=s0/t0;vr0=d0;}
    ST32(v0+4, FBITS(f1));
    {v0=FBITS(vr0);}
    f5 = BITSF(v0);
    f2 = BITSF(LD32(a2+23196));
    f1 = BITSF(LD32(v1+8));
    v0 = a0 + 20;
    ST32(a0+8, FBITS(f2));
    a0 = 16;
    f2 = BITSF(LD32(v1+4));
    ST32(v0+8, FBITS(f1));
    {float s0=vr4;float t0=v[20];float d0=s0/t0;vr0=d0;}
    {v1=FBITS(vr0);}
    ST32(v0+4, FBITS(f2));
    f3 = BITSF(LD32(a2+23196));
    ST32(s0+4, a1);
    ST32(s0+20, FBITS(f3));
    ST32(s0+36, FBITS(f5));
    {float s0=vr12;float t0=v[24];float d0=s0/t0;vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    v0 = D_08AF8320 - (-31968);
    v0 = v0 - 31968;
    ST32(s0, v0);
    v0 = D_08AED440 - (-11200);
    ST32(s0+44, FBITS(f0));
    f0 = BITSF(LD32(v0-11200));
    v0 = 4;
    ST32(s0+40, v1);
    ST32(s0+48, FBITS(f0));
    ST32(s1+4, v0);
    ST32(s0+32, 0);
    { rv_t r_ = ({ v[0]=vr0;v[4]=vr4;v[8]=vr8;v[12]=vr12;__auto_type vr_t_ = func_08A94838(a0, t1, t2, t3); vr0=v[0];vr4=v[4];vr8=v[8];vr12=v[12];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089255B0;
L_089255B0:;
    a1 = LD32(s1+4);
    ST32(s0+52, v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089255D8; }
    goto L_089255C0;
L_089255C0:;
    v1 = v0 + 0;
    goto L_089255C4;
L_089255C4:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089255C4; }
    goto L_089255D8;
L_089255D8:;
    ST32(s1+8, 0);
    ST32(s1+12, 0);
    sp = sp + 16;
    { v[0]=vr0;v[4]=vr4;v[8]=vr8;v[12]=vr12;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;v[4]=vr4;v[8]=vr8;v[12]=vr12;
}

/* 089255F4 */
u64 func_089255F4(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089255F4:;
    v0 = D_08AF8320 - (-31968);
    v0 = v0 - 31968;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_0892598C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08925614;
L_08925614:;
    v0 = LD32(s0+52);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0892563C; }
    goto L_08925620;
L_08925620:;
    v0 = D_08AF82C8 - (-32056);
    goto L_08925624;
L_08925624:;
    v0 = v0 - 32056;
    ST32(s0, v0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0892563C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08925644;
L_08925644:;
    v0 = D_08AF82C8 - (-32056);
    goto L_08925624;
}

/* 0892564C */
rv_t func_0892564C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892564C:;
    v0 = D_08AF8320 - (-31968);
    v0 = v0 - 31968;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_0892598C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892566C;
L_0892566C:;
    v0 = LD32(s0+52);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08925694; }
    goto L_08925678;
L_08925678:;
    v0 = D_08AF82C8 - (-32056);
    goto L_0892567C;
L_0892567C:;
    v0 = v0 - 32056;
    ST32(s0, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08925694:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892569C;
L_0892569C:;
    v0 = D_08AF82C8 - (-32056);
    goto L_0892567C;
}

/* 089256A4 */
rv_t func_089256A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089256A4:;
    v0 = D_08AF8320 - (-31968);
    v0 = v0 - 31968;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_0892598C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089256C4;
L_089256C4:;
    v0 = LD32(s0+52);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089256F4; }
    goto L_089256D0;
L_089256D0:;
    v0 = D_08AF82C8 - (-32056);
    goto L_089256D4;
L_089256D4:;
    v0 = v0 - 32056;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089256E4;
L_089256E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089256F4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089256FC;
L_089256FC:;
    v0 = D_08AF82C8 - (-32056);
    goto L_089256D4;
}

/* 08925704 */
rv_t func_08925704(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08925704:;
    sp = sp - 32;
    s1 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08925728;
L_08925728:;
    s0 = s0 + 48;
    v0 = LD32(sp);
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08925750; }
    goto L_0892573C;
L_0892573C:;
    goto L_08925740;
L_08925740:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08925750:;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08925758;
L_08925758:;
    goto L_08925740;
}

/* 08925760 */
rv_t func_08925760(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08925760:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08925784;
L_08925784:;
    a0 = s0 + 0;
    f12 = BITSF(LD32(s1+48));
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08925790;
L_08925790:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089257A4 */
rv_t func_089257A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089257A4:;
    return (rv_t){ v0, v1, f0 };
}

/* 089257AC */
rv_t func_089257AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089257AC:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089257B4 */
rv_t func_089257B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_089257B4:;
    f1 = BITSF(LD32(a0+48));
    f0 = BITSF(LD32(a0+32));
    f0 = f0 * f1;
    fcc = FCMP(f0, f12, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_089257D4; }
    goto L_089257D0;
L_089257D0:;
    v0 = 0 + 0;
    goto L_089257D4;
L_089257D4:;
    return (rv_t){ v0, v1, f0 };
}

/* 089257DC */
rv_t func_089257DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f2 = 0, f3 = 0;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr48 = v[48], vr49 = v[49], vr50 = v[50];
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 224);
L_089257DC:;
    sp = sp - 224;
    v0 = a0 + 20;
    s1 = a0 + 0;
    a0 = sp + 0;
    s0 = a1 + 0;
    a1 = v0 + 0;
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08925814;
L_08925814:;
    {u32 a_=sp+(192);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(s0+8);
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    a1 = LD32(s1);
    {u32 a_=sp+(80);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(112);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(128);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {vr48=BITSF(v1);}
    v1 = LD32(sp+8);
    {vr49=BITSF(v0);}
    v0 = LD32(sp+16);
    {vr50=BITSF(v1);}
    v1 = LD32(sp+12);
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(96);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {vr48=BITSF(v1);}
    v1 = LD32(sp+20);
    {vr49=BITSF(v0);}
    v0 = LD32(sp+28);
    {vr50=BITSF(v1);}
    v1 = LD32(sp+24);
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[32]=BITSF(v1);}
    v1 = LD32(sp+32);
    {v[33]=BITSF(v0);}
    v0 = LD32(s0);
    {v[34]=BITSF(v1);}
    {v[20]=BITSF(v0);}
    v1 = LD32(s0+4);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[21]=BITSF(v1);}
    {v[22]=BITSF(a0);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[4]*t1;o0+=v[8]*t2;float o1=0;o1+=v[1]*t0;o1+=v[5]*t1;o1+=v[9]*t2;float o2=0;o2+=v[2]*t0;o2+=v[6]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[18]);}
    f3 = BITSF(v1);
    {v1=FBITS(v[16]);}
    f2 = BITSF(v1);
    v0 = LD32(a1+40);
    {v1=FBITS(v[17]);}
    ST32(sp+48, FBITS(f2));
    a0 = s1 + 0;
    a1 = sp + 48;
    ST32(sp+52, v1);
    ST32(sp+56, FBITS(f3));
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, v1);
    t_ = v0;
    ST32(sp+72, FBITS(f3));
    { rv_t r_ = ({ v[48]=vr48;v[49]=vr49;v[50]=vr50;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr48=v[48];vr49=v[49];vr50=v[50];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089258DC;
L_089258DC:;
    v0 = v0 ^ 0x1;
    v0 = v0 & 0xff;
    sp = sp + 224;
    { v[48]=vr48;v[49]=vr49;v[50]=vr50;return (rv_t){ v0, v1, f0 }; }
    v[48]=vr48;v[49]=vr49;v[50]=vr50;
}

/* 089258F8 */
rv_t func_089258F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
L_089258F8:;
    f4 = BITSF(0);
    f3 = BITSF(LD32(a1+8));
    fcc = FCMP(f3, f4, 12);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_08925974; }
    goto L_08925910;
L_08925910:;
    f0 = BITSF(LD32(a0+36));
    f1 = BITSF(LD32(a1));
    f0 = f3 * f0;
    f2 = BITSF(FBITS(f1) ^ 0x80000000u);
    f1 = f1 - f0;
    fcc = FCMP(f4, f1, 12);
    cnd_ = fcc;
    f2 = f2 - f0;
    if (cnd_) { goto L_08925974; }
    goto L_08925934;
L_08925934:;
    fcc = FCMP(f4, f2, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08925974; }
    goto L_08925944;
L_08925944:;
    f1 = BITSF(LD32(a1+4));
    fcc = FCMP(f1, f4, 12);
    cnd_ = !fcc;
    f2 = BITSF(FBITS(f1) ^ 0x80000000u);
    if (cnd_) { goto L_0892597C; }
    goto L_08925958;
L_08925958:;
    f0 = BITSF(LD32(a0+40));
    f0 = f3 * f0;
    f0 = f2 - f0;
    goto L_08925964;
L_08925964:;
    fcc = FCMP(f4, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = 1; goto L_08925974; }
    goto L_08925974;
L_08925974:;
    return (rv_t){ v0, v1, f0 };
L_0892597C:;
    f0 = BITSF(LD32(a0+44));
    f0 = f3 * f0;
    f0 = f1 - f0;
    goto L_08925964;
}

/* 0892598C */
u64 func_0892598C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0892598C:;
    sp = sp - 48;
    v0 = a0 + 52;
    a1 = sp + 0;
    v1 = LD32(v0+4);
    ST32(sp, v0);
    ST32(sp+4, 0);
    cnd_ = v1 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_089259F0; }
    goto L_089259C0;
L_089259C0:;
    a3 = LD32(a0+52);
    a2 = v1 + 0;
    goto L_089259C8;
L_089259C8:;
    v0 = LD32(a1+4);
    v1 = v0 << 2;
    v1 = v1 + a3;
    a0 = LD32(v1);
    v0 = v0 + 1;
    v1 = v0 < a2;
    cnd_ = a0 != 0;
    ST32(a1+8, a0);
    if (cnd_) { goto L_089259F0; }
    goto L_089259E8;
L_089259E8:;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_089259C8; }
    goto L_089259F0;
L_089259F0:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08925A78; }
    goto L_089259FC;
L_089259FC:;
    s3 = D_08B1E460 - (-7072);
    goto L_08925A00;
L_08925A00:;
    s2 = LD32(s0);
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08925A70; }
    goto L_08925A0C;
L_08925A0C:;
    a0 = sp + 0;
    { u64 r_ = func_08ABBF54(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08925A14;
L_08925A14:;
    s1 = LD32(sp);
    a1 = LD32(s0);
    v0 = LD32(s1+4);
    v1 = LD32(a1+4);
    a0 = LD32(s1);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08925A60; }
    goto L_08925A44;
L_08925A44:;
    v0 = LD32(a0);
    goto L_08925A48;
L_08925A48:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s1+8); goto L_08925A94; }
    goto L_08925A50;
L_08925A50:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08925A48; }
    goto L_08925A60;
L_08925A60:;
    a0 = LD32(s3-7072);
    a1 = s2 + 0;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08925A6C;
L_08925A6C:;
    v0 = LD32(sp+8);
    goto L_08925A70;
L_08925A70:;
    cnd_ = v0 != 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08925A00; }
    goto L_08925A78;
L_08925A78:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_08925A94:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08925AA4; }
    goto L_08925A9C;
L_08925A9C:;
    ST8(a0+8, v0);
    goto L_08925A60;
L_08925AA4:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08925AC8; }
    goto L_08925AAC;
L_08925AAC:;
    ST32(a2+4, v0);
    goto L_08925AB0;
L_08925AB0:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08925AB8;
L_08925AB8:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08925A60;
L_08925AC8:;
    ST32(v1, v0);
    goto L_08925AB0;
}

/* 08925AD0 */
void func_08925AD0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08925AD0:;
    v0 = D_08AF8358 - (-31912);
    v1 = 999;
    v0 = v0 - 31912;
    ST32(a0, v0);
    a1 = a0 + 16;
    a2 = 0 + 0;
    ST32(a0+64, v1);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST8(a0+56, 0);
    ST32(a0+60, v1);
    goto L_08925AFC;
L_08925AFC:;
    a2 = a2 + 1;
    v0 = a2 < 0xau;
    ST32(a1, 0);
    cnd_ = v0 != 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_08925AFC; }
    goto L_08925B10;
L_08925B10:;
    return;
}

/* 08925B18 */
u32 func_08925B18(u32 a0)
{
    u32 v0 = 0;
L_08925B18:;
    v0 = D_08AF8358 - (-31912);
    v0 = v0 - 31912;
    ST32(a0, v0);
    return v0;
}

/* 08925B28 */
rv_t func_08925B28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08925B28:;
    sp = sp - 16;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08925B58; }
    goto L_08925B3C;
L_08925B3C:;
    v0 = LD32(a1+48);
    ST32(a0+4, v0);
    func_0892706C(a0, t1, t2, t3);
    goto L_08925B48;
L_08925B48:;
    v0 = D_08C28F60 - (-28832);
    v1 = LD32(v0-28832);
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08925B68; }
    goto L_08925B58;
L_08925B58:;
    goto L_08925B5C;
L_08925B5C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08925B68:;
    { rv_t r_ = func_08925B78(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08925B70;
L_08925B70:;
    goto L_08925B5C;
}

/* 08925B78 */
rv_t func_08925B78(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08925B78:;
    sp = sp - 80;
    a2 = D_08C2BA28 - (-17880);
    v1 = a2 - 17880;
    s3 = a0 + 0;
    a0 = sp + 0;
    v0 = LD32(v1+8);
    a1 = LD32(v1+4);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08925C10; }
    goto L_08925BC4;
L_08925BC4:;
    a2 = LD32(a2-17880);
    a3 = a1 + 0;
    goto L_08925BCC;
L_08925BCC:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08925C00; }
    goto L_08925BE4;
L_08925BE4:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    s1 = D_08C2A43C - (-23492);
    if (cnd_) { goto L_08925C14; }
    goto L_08925BF4;
L_08925BF4:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08925BE4; }
    goto L_08925C00;
L_08925C00:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08925BCC; }
    goto L_08925C10;
L_08925C10:;
    s1 = D_08C2A43C - (-23492);
    goto L_08925C14;
L_08925C14:;
    s1 = s1 - 23492;
    s0 = s1 + 16;
    v0 = LD32(s0+8);
    a0 = s0 + 0;
    s2 = sp + 16;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    f0 = func_08ABC074(a0, t1, t2, t3);
    goto L_08925C34;
L_08925C34:;
    v0 = LD32(s1+16);
    ST32(sp+16, s0);
    ST32(sp+20, v0);
    cnd_ = v0 == 0;
    ST32(sp+24, 0);
    if (cnd_) { goto L_08925C70; }
    goto L_08925C48;
L_08925C48:;
    v0 = LD32(s2+8);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2+4); goto L_08925E84; }
    goto L_08925C54;
L_08925C54:;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_08925C70; }
    goto L_08925C60;
L_08925C60:;
    v0 = LD32(s2+4);
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    ST32(s2+4, v1);
    if (cnd_) { goto L_08925C48; }
    goto L_08925C70;
L_08925C70:;
    a0 = LD32(sp+8);
    cnd_ = a0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08925CEC; }
    goto L_08925C7C;
L_08925C7C:;
    v0 = D_08B1B510 - (-19184);
    v0 = v0 - 19184;
    s4 = v0 - 4;
    s0 = LD32(a0);
    goto L_08925C8C;
L_08925C8C:;
    a1 = 1;
    a0 = sp + 0;
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08925C98;
L_08925C98:;
    cnd_ = s0 == 0;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_08925CE4; }
    goto L_08925CA0;
L_08925CA0:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08925CE4; }
    goto L_08925CAC;
L_08925CAC:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08925CE4; }
    goto L_08925CB8;
L_08925CB8:;
    v0 = LD32(s0+192);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08925CE4; }
    goto L_08925CC8;
L_08925CC8:;
    v0 = LD32(s0);
    s4 = s4 + 4;
    s1 = s1 + 1;
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    ST32(s4, v0);
    goto L_08925CE4;
L_08925CE4:;
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_08925C8C; }
    goto L_08925CEC;
L_08925CEC:;
    v0 = LD32(sp+24);
    s4 = D_08C25390 - (21392);
    ST32(s4+21392, s1);
    cnd_ = v0 == 0;
    s1 = s2 + 0;
    if (cnd_) { goto L_08925D54; }
    goto L_08925D00;
L_08925D00:;
    s2 = 999;
    s0 = LD32(v0);
    goto L_08925D08;
L_08925D08:;
    a0 = s1 + 0;
    v0 = func_08ABC338(a0);
    goto L_08925D10;
L_08925D10:;
    a0 = s3 + 0;
    t0 = sp + 32;
    cnd_ = s0 == 0;
    t1 = sp + 36;
    if (cnd_) { goto L_08925D48; }
    goto L_08925D20;
L_08925D20:;
    a1 = LD32(s0+4);
    a2 = LD32(s0+80);
    a3 = LD32(s0+84);
    ST32(sp+32, s2);
    ST32(sp+36, s2);
    func_08927018(a2, a3, t0, t1);
    goto L_08925D38;
L_08925D38:;
    a0 = s3 + 0;
    a1 = LD32(sp+32);
    a2 = LD32(sp+36);
    func_08926F80(a1, a2);
    goto L_08925D48;
L_08925D48:;
    v0 = LD32(sp+24);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08925D08; }
    goto L_08925D54;
L_08925D54:;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 != 0;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_08925DA4; }
    goto L_08925D64;
L_08925D64:;
    v1 = LD32(s4+21392);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08925DA0; }
    goto L_08925D70;
L_08925D70:;
    v0 = D_08C25394 - (21396);
    a2 = v0 + 21396;
    a1 = v1 + 0;
    a3 = 1;
    v0 = a0 + a2;
    goto L_08925D84;
L_08925D84:;
    v1 = LD_U8(v0);
    a0 = a0 + 1;
    cnd_ = v1 != 0;
    v0 = a0 < a1;
    if (cnd_) { goto L_08925D98; }
    goto L_08925D94;
L_08925D94:;
    ST8(s3+56, a3);
    goto L_08925D98;
L_08925D98:;
    cnd_ = v0 != 0;
    v0 = a0 + a2;
    if (cnd_) { goto L_08925D84; }
    goto L_08925DA0;
L_08925DA0:;
    a0 = LD32(sp+16);
    goto L_08925DA4;
L_08925DA4:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08925E74; }
    goto L_08925DB4;
L_08925DB4:;
    s1 = LD32(sp);
    goto L_08925DB8;
L_08925DB8:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08925E3C; }
    goto L_08925DC8;
L_08925DC8:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08925E3C; }
    goto L_08925DD4;
L_08925DD4:;
    v0 = LD32(s1);
    goto L_08925DD8;
L_08925DD8:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08925E2C; }
    goto L_08925DEC;
L_08925DEC:;
    v0 = LD_U8(s0+8);
    goto L_08925DF0;
L_08925DF0:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08925E6C; }
    goto L_08925DF8;
L_08925DF8:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08925E5C; }
    goto L_08925E00;
L_08925E00:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08925E08;
L_08925E08:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08925E14;
L_08925E14:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08925E20;
L_08925E20:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08925DF0; }
    goto L_08925E28;
L_08925E28:;
    v1 = LD32(s1+4);
    goto L_08925E2C;
L_08925E2C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08925DD8; }
    goto L_08925E3C;
L_08925E3C:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08925E5C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08925E08;
L_08925E6C:;
    s0 = LD32(s0+4);
    goto L_08925E20;
L_08925E74:;
    { u64 r_ = func_08ABC1B8(a0, t1, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08925E7C;
L_08925E7C:;
    s1 = LD32(sp);
    goto L_08925DB8;
L_08925E84:;
    v1 = LD32(v0+8);
    ST32(s2+8, v1);
    goto L_08925C70;
}

/* 08925E90 */
rv_t func_08925E90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08925E90:;
    return (rv_t){ v0, v1, f0 };
}

/* 08925E98 */
rv_t func_08925E98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08925E98:;
    sp = sp - 64;
    a2 = D_08C2A880 - (-22400);
    v1 = a2 - 22400;
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
    if (cnd_) { goto L_08925F38; }
    goto L_08925EEC;
L_08925EEC:;
    a2 = LD32(a2-22400);
    a3 = a1 + 0;
    goto L_08925EF4;
L_08925EF4:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08925F28; }
    goto L_08925F0C;
L_08925F0C:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08925F3C; }
    goto L_08925F1C;
L_08925F1C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08925F0C; }
    goto L_08925F28;
L_08925F28:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08925EF4; }
    goto L_08925F38;
L_08925F38:;
    v0 = LD32(sp+8);
    goto L_08925F3C;
L_08925F3C:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(sp); goto L_08925F90; }
    goto L_08925F44;
L_08925F44:;
    f20 = BITSF(0);
    s5 = 1;
    s0 = LD32(v0);
    goto L_08925F50;
L_08925F50:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08925F5C;
L_08925F5C:;
    cnd_ = s0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08925F84; }
    goto L_08925F64;
L_08925F64:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08925F84; }
    goto L_08925F70;
L_08925F70:;
    v0 = LD32(s0+200);
    v0 = (v0 >> 5) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(s0+329); goto L_08926054; }
    goto L_08925F80;
L_08925F80:;
    v0 = LD32(sp+8);
    goto L_08925F84;
L_08925F84:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08925F50; }
    goto L_08925F8C;
L_08925F8C:;
    s1 = LD32(sp);
    goto L_08925F90;
L_08925F90:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08926014; }
    goto L_08925FA0;
L_08925FA0:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08926014; }
    goto L_08925FAC;
L_08925FAC:;
    v0 = LD32(s1);
    goto L_08925FB0;
L_08925FB0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08926004; }
    goto L_08925FC4;
L_08925FC4:;
    v0 = LD_U8(s0+8);
    goto L_08925FC8;
L_08925FC8:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0892604C; }
    goto L_08925FD0;
L_08925FD0:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892603C; }
    goto L_08925FD8;
L_08925FD8:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08925FE0;
L_08925FE0:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08925FEC;
L_08925FEC:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08925FF8;
L_08925FF8:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08925FC8; }
    goto L_08926000;
L_08926000:;
    v1 = LD32(s1+4);
    goto L_08926004;
L_08926004:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08925FB0; }
    goto L_08926014;
L_08926014:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_0892603C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08925FE0;
L_0892604C:;
    s0 = LD32(s0+4);
    goto L_08925FF8;
L_08926054:;
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08925F84; }
    goto L_0892605C;
L_0892605C:;
    v0 = LD32(s0+224);
    v0 = v0 ^ 0x3e7;
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08925F84; }
    goto L_0892606C;
L_0892606C:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08925F84; }
    goto L_08926078;
L_08926078:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08925F84; }
    goto L_08926084;
L_08926084:;
    v1 = LD32(v1+76);
    v0 = LD32(s0+12);
    cnd_ = v0 != v1;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08925F84; }
    goto L_08926094;
L_08926094:;
    a0 = s0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892609C;
L_0892609C:;
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08925F84; }
    goto L_089260A4;
L_089260A4:;
    a0 = s0 + 0;
    v0 = func_089E3BC4(a0);
    goto L_089260AC;
L_089260AC:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08925F84; }
    goto L_089260B4;
L_089260B4:;
    v0 = LD_U8(s0+232);
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08925F84; }
    goto L_089260C0;
L_089260C0:;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    f0 = BITSF(LD32(v1+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08925F84; }
    goto L_089260E0;
L_089260E0:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = 1;
    { rv_t r_ = func_089269AC(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089260F0;
L_089260F0:;
    s4 = v0 + 0;
    a0 = D_08C2B2A8 - (-19800);
    v0 = 999;
    v1 = a0 - 19800;
    cnd_ = s4 == v0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08926158; }
    goto L_08926108;
L_08926108:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19800);
    v0 = v0 - 1;
    v0 = s4 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v0 = s4 ^ 0x3e7;
    if (cnd_) { goto L_0892615C; }
    goto L_0892612C;
L_0892612C:;
    a0 = LD32(a1);
    goto L_08926130;
L_08926130:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s4;
    if (cnd_) { v0 = LD32(v1+16); goto L_08926200; }
    goto L_08926148;
L_08926148:;
    a1 = LD32(a1+4);
    goto L_0892614C;
L_0892614C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08926130; }
    goto L_08926154;
L_08926154:;
    s3 = 0 + 0;
    goto L_08926158;
L_08926158:;
    v0 = s4 ^ 0x3e7;
    goto L_0892615C;
L_0892615C:;
    v0 = 0 < v0;
    v1 = 0 < s3;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = D_08C29324 - (-27868);
    if (cnd_) { goto L_089261E4; }
    goto L_08926170;
L_08926170:;
    v0 = LD32(s3);
    v1 = LD32(v0-12);
    v1 = s3 + v1;
    f0 = BITSF(LD32(v1+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08925F84; }
    goto L_08926190;
L_08926190:;
    a0 = 0x8037;
    a1 = 4;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089261A4;
L_089261A4:;
    s2 = v0 + 0;
    v0 = LD32(v0+24);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0, s4); goto L_089261B4; }
    goto L_089261B4;
L_089261B4:;
    a0 = LD32(s0+176);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089261C8; }
    goto L_089261C0;
L_089261C0:;
    a1 = s2 + 0;
    { rv_t r_ = func_08922AA4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089261C8;
L_089261C8:;
    a0 = s2 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089261D0;
L_089261D0:;
    ST32(s0+224, s4);
    v0 = LD32(s3+228);
    v0 = (v0 & ~(0x1u << 5)) | ((s5 & 0x1) << 5);
    ST32(s3+228, v0);
    goto L_08925F80;
L_089261E4:;
    v1 = LD_U8(v0-27868);
    cnd_ = v1 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08925F84; }
    goto L_089261F0;
L_089261F0:;
    v0 = LD32(s0+200);
    v0 = (v0 & ~(0x1u << 5)) | ((v1 & 0x1) << 5);
    ST32(s0+200, v0);
    goto L_08925F80;
L_08926200:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s3 = a0 + 0;
    if (cnd_) { goto L_08926148; }
    goto L_0892620C;
L_0892620C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0892614C; }
    goto L_08926218;
L_08926218:;
    v0 = s4 ^ 0x3e7;
    goto L_0892615C;
}

/* 08926220 */
static rv_t func_08926220__orig(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08926220:;
    sp = sp - 48;
    v1 = D_08C2A880 - (-22400);
    v1 = v1 - 22400;
    s1 = a0 + 0;
    a1 = 1;
    a0 = sp + 0;
    v0 = LD32(v1+8);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926264;
L_08926264:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    ST32(s1+12, 0);
    if (cnd_) { goto L_089262A0; }
    goto L_08926270;
L_08926270:;
    f20 = BITSF(0);
    s0 = LD32(v0);
    goto L_08926278;
L_08926278:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926284;
L_08926284:;
    v0 = LD32(s0+200);
    v0 = (v0 >> 5) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+328); goto L_08926334; }
    goto L_08926294;
L_08926294:;
    v0 = LD32(sp+8);
    goto L_08926298;
L_08926298:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08926278; }
    goto L_089262A0;
L_089262A0:;
    a0 = LD32(s1+12);
    v0 = a0 < 0x11u;
    cnd_ = v0 != 0;
    v1 = a0 << 2;
    if (cnd_) { goto L_089262C0; }
    goto L_089262B0;
L_089262B0:;
    v0 = 16;
    ST32(s1+12, v0);
    a0 = 16;
    v1 = a0 << 2;
    goto L_089262C0;
L_089262C0:;
    v1 = v1 + a0;
    v0 = D_08AD9888 - (-26488);
    v1 = v1 << 3;
    v0 = v0 - 26488;
    a1 = v1 + v0;
    a0 = s1 + 16;
    a2 = 0 + 0;
    goto L_089262DC;
L_089262DC:;
    v0 = LD32(a1);
    a2 = a2 + 1;
    v1 = a2 < 0xau;
    ST32(a0, v0);
    a1 = a1 + 4;
    cnd_ = v1 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_089262DC; }
    goto L_089262F8;
L_089262F8:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08926324; }
    goto L_0892630C;
L_0892630C:;
    goto L_08926310;
L_08926310:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08926324:;
    { u64 r_ = func_08ABC4F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892632C;
L_0892632C:;
    goto L_08926310;
L_08926334:;
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08926298; }
    goto L_0892633C;
L_0892633C:;
    v1 = LD32(s0);
    v0 = LD32(v1+168);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892634C;
L_0892634C:;
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08926298; }
    goto L_08926354;
L_08926354:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08926298; }
    goto L_08926360;
L_08926360:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08926298; }
    goto L_0892636C;
L_0892636C:;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    f0 = BITSF(LD32(v1+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08926298; }
    goto L_0892638C;
L_0892638C:;
    a0 = s0 + 0;
    v0 = func_089E3BC4(a0);
    goto L_08926394;
L_08926394:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08926298; }
    goto L_0892639C;
L_0892639C:;
    a0 = s0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089263A4;
L_089263A4:;
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08926298; }
    goto L_089263AC;
L_089263AC:;
    v0 = LD32(s1+4);
    a0 = LD32(s0+12);
    v1 = LD32(v0+76);
    cnd_ = a0 != v1;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08926298; }
    goto L_089263C0;
L_089263C0:;
    v0 = LD32(s1+12);
    v0 = v0 + 1;
    ST32(s1+12, v0);
    goto L_08926294;
}

rv_t func_08926220(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    rv_t v_ = func_08926220__orig(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    rs_ai_squad_caps(a0);   /* native hook (tools/dc/hooks.py) */
    return v_;
}

/* 089263D0 */
rv_t func_089263D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089263D0:;
    return (rv_t){ v0, v1, f0 };
}

/* 089263D8 */
void func_089263D8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089263D8:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0892641C; }
    goto L_08926404;
L_08926404:;
    sp = sp + 16;
    return;
L_0892641C:;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926424;
L_08926424:;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08926404; }
    goto L_0892642C;
L_0892642C:;
    a0 = LD32(s0+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926434;
L_08926434:;
    v1 = 1008;
    ST32(v0+76, v1);
    a1 = s1 + 0;
    a0 = LD32(s0+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926448;
L_08926448:;
    ST32(v0+60, s2);
    a1 = s1 + 0;
    a0 = LD32(s0+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926458;
L_08926458:;
    v1 = 1;
    ST8(v0+42, v1);
    a1 = s1 + 0;
    a0 = LD32(s0+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892646C;
L_0892646C:;
    v1 = 999;
    ST32(v0+80, v1);
    goto L_08926404;
}

/* 08926478 */
static void func_08926478__orig(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08926478:;
    sp = sp - 128;
    s4 = a1 + 0;
    s2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    s3 = a2 + 0;
    if (cnd_) { goto L_089264E0; }
    goto L_089264B4;
L_089264B4:;
    goto L_089264B8;
L_089264B8:;
    sp = sp + 128;
    return;
L_089264E0:;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089264E8;
L_089264E8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089264B8; }
    goto L_089264F0;
L_089264F0:;
    a0 = LD32(s2+4);
    a1 = s4 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089264FC;
L_089264FC:;
    v1 = LD32(v0+60);
    cnd_ = v1 == s3;
    a0 = LD32(s2+4);
    if (cnd_) { goto L_08926644; }
    goto L_08926508;
L_08926508:;
    a1 = s4 + 0;
    s1 = D_08C2A43C - (-23492);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926514;
L_08926514:;
    a0 = v0 + 0;
    { u64 r_ = func_0898D2C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892651C;
L_0892651C:;
    a1 = v0 + 0;
    a2 = 0 + 0;
    a0 = s2 + 0;
    v0 = func_08926DF0(a0, a1, a2);
    goto L_0892652C;
L_0892652C:;
    ST32(s2+64, v0);
    s1 = s1 - 23492;
    s0 = s1 + 16;
    v0 = LD32(s0+8);
    a0 = s0 + 0;
    s6 = sp + 64;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    f20 = BITSF(0);
    s5 = 0 + 0;
    f0 = func_08ABC074(a0, 0, 0, 0);
    goto L_08926558;
L_08926558:;
    v0 = LD32(s1+16);
    a0 = s6 + 0;
    ST32(sp+64, s0);
    ST32(sp+68, v0);
    ST32(sp+72, 0);
    v0 = func_08ABC338(a0);
    goto L_08926570;
L_08926570:;
    a0 = LD32(sp+72);
    cnd_ = a0 == 0;
    a1 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_089265B4; }
    goto L_0892657C;
L_0892657C:;
    s1 = sp + 0;
    s0 = LD32(a0);
    goto L_08926584;
L_08926584:;
    a0 = s6 + 0;
    v0 = func_08ABC338(a0);
    goto L_0892658C;
L_0892658C:;
    cnd_ = s0 == 0;
    a0 = LD32(sp+72);
    if (cnd_) { goto L_089265A8; }
    goto L_08926594;
L_08926594:;
    a1 = LD32(s0+80);
    cnd_ = a1 == s3;
    v1 = LD32(s0+84);
    if (cnd_) { goto L_089266C0; }
    goto L_089265A0;
L_089265A0:;
    cnd_ = v1 == s3;
    if (cnd_) { v0 = LD32(s2+64); goto L_08926698; }
    goto L_089265A8;
L_089265A8:;
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_08926584; }
    goto L_089265B0;
L_089265B0:;
    a1 = D_08B25AC0 - (23232);
    goto L_089265B4;
L_089265B4:;
    v0 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    f0 = BITSF(v1);
    v1 = D_08AED444 - (-11196);
    a0 = a0 + v0;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v1-11196));
    ST32(a2+4, a0);
    f2 = BITSF(0);
    f1 = f1 * f0;
    ST32(a1+23232, v0);
    a0 = 0 + 0;
    cnd_ = s5 == 0;
    f1 = f1 * f20;
    if (cnd_) { goto L_0892662C; }
    goto L_08926604;
L_08926604:;
    v0 = sp + 0;
    goto L_08926608;
L_08926608:;
    f0 = BITSF(LD32(v0+32));
    a0 = a0 + 1;
    f2 = f2 + f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = fcc;
    v1 = a0 < s5;
    if (cnd_) { goto L_0892668C; }
    goto L_08926624;
L_08926624:;
    cnd_ = v1 != 0;
    v0 = v0 + 4;
    if (cnd_) { goto L_08926608; }
    goto L_0892662C;
L_0892662C:;
    a0 = LD32(sp+64);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0892667C; }
    goto L_08926640;
L_08926640:;
    a0 = LD32(s2+4);
    goto L_08926644;
L_08926644:;
    a1 = s4 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892664C;
L_0892664C:;
    v1 = 1010;
    ST32(v0+76, v1);
    a1 = s4 + 0;
    a0 = LD32(s2+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926660;
L_08926660:;
    ST32(v0+60, s3);
    a1 = s4 + 0;
    a0 = LD32(s2+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926670;
L_08926670:;
    v1 = LD32(s2+60);
    ST32(v0+80, v1);
    goto L_089264B4;
L_0892667C:;
    { u64 r_ = func_08ABC1B8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926684;
L_08926684:;
    a0 = LD32(s2+4);
    goto L_08926644;
L_0892668C:;
    v0 = LD32(v0);
    ST32(s2+60, v0);
    goto L_0892662C;
L_08926698:;
    cnd_ = a1 != v0;
    if (cnd_) { goto L_089265A8; }
    goto L_089266A0;
L_089266A0:;
    f0 = BITSF(LD32(s0+164));
    goto L_089266A4;
L_089266A4:;
    v0 = LD32(s0+4);
    s5 = s5 + 1;
    f20 = f20 + f0;
    ST32(s1, v0);
    ST32(s1+32, FBITS(f0));
    s1 = s1 + 4;
    goto L_089265A8;
L_089266C0:;
    v0 = LD32(s2+64);
    cnd_ = v1 != v0;
    if (cnd_) { goto L_089265A0; }
    goto L_089266CC;
L_089266CC:;
    f0 = BITSF(LD32(s0+164));
    goto L_089266A4;
}

void func_08926478(u32 a0, u32 a1, u32 a2)
{
    if (rs_ai_assign(a0, a1, a2)) return;   /* native hook (tools/dc/hooks.py) */
    func_08926478__orig(a0, a1, a2);
}

/* 089266D4 */
void func_089266D4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089266D4:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08926718; }
    goto L_08926700;
L_08926700:;
    sp = sp + 16;
    return;
L_08926718:;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926720;
L_08926720:;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08926700; }
    goto L_08926728;
L_08926728:;
    a0 = LD32(s0+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926730;
L_08926730:;
    v1 = 1013;
    ST32(v0+76, v1);
    a1 = s1 + 0;
    a0 = LD32(s0+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926744;
L_08926744:;
    ST32(v0+60, s2);
    a1 = s1 + 0;
    a0 = LD32(s0+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926754;
L_08926754:;
    v1 = 999;
    ST32(v0+80, v1);
    goto L_08926700;
}

/* 08926760 */
u64 func_08926760(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08926760:;
    sp = sp - 32;
    s2 = a1 + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089267AC; }
    goto L_08926790;
L_08926790:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_089267AC:;
    s3 = 999;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089267B4;
L_089267B4:;
    cnd_ = v0 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08926790; }
    goto L_089267BC;
L_089267BC:;
    a0 = LD32(s0+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089267C4;
L_089267C4:;
    v1 = 1014;
    ST32(v0+76, v1);
    a1 = s2 + 0;
    a0 = LD32(s0+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089267D8;
L_089267D8:;
    f2 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(s1));
    f1 = BITSF(LD32(s1+4));
    v1 = v0 + 64;
    ST32(v0+64, FBITS(f0));
    a1 = s2 + 0;
    ST32(v1+8, FBITS(f2));
    ST32(v1+4, FBITS(f1));
    a0 = LD32(s0+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926800;
L_08926800:;
    ST32(v0+60, s3);
    a1 = s2 + 0;
    a0 = LD32(s0+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926810;
L_08926810:;
    ST32(v0+80, s3);
    goto L_08926790;
}

/* 08926818 */
void func_08926818(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08926818:;
    sp = sp - 32;
    s2 = a1 + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08926864; }
    goto L_08926848;
L_08926848:;
    sp = sp + 32;
    return;
L_08926864:;
    s3 = 999;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892686C;
L_0892686C:;
    cnd_ = v0 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08926848; }
    goto L_08926874;
L_08926874:;
    a0 = LD32(s0+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892687C;
L_0892687C:;
    v1 = 1015;
    ST32(v0+76, v1);
    a1 = s2 + 0;
    a0 = LD32(s0+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926890;
L_08926890:;
    f2 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(s1));
    f1 = BITSF(LD32(s1+4));
    v1 = v0 + 64;
    ST32(v0+64, FBITS(f0));
    a1 = s2 + 0;
    ST32(v1+8, FBITS(f2));
    ST32(v1+4, FBITS(f1));
    a0 = LD32(s0+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089268B8;
L_089268B8:;
    ST32(v0+60, s3);
    a1 = s2 + 0;
    a0 = LD32(s0+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089268C8;
L_089268C8:;
    ST32(v0+80, s3);
    goto L_08926848;
}

/* 089268D0 */
rv_t func_089268D0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089268D0:;
    sp = sp - 32;
    s1 = a1 + 0;
    a0 = LD32(a0+4);
    { rv_t r_ = func_0898BB44(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089268EC;
L_089268EC:;
    s0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08926998; }
    goto L_089268F8;
L_089268F8:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08926914;
L_08926914:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    v1 = s0 + 88;
    v0 = 999;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(s0+88, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    ST32(s0+60, v0);
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08926960;
L_08926960:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    v0 = s0 + 64;
    ST32(v0+8, FBITS(f0));
    a0 = s0 + 0;
    ST32(v0+4, FBITS(f2));
    ST32(s0+64, FBITS(f1));
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    a1 = LD32(v0+4);
    { u64 r_ = func_0898D728(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926994;
L_08926994:;
    v0 = s0 + 0;
    goto L_08926998;
L_08926998:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089269AC */
rv_t func_089269AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_089269AC:;
    sp = sp - 144;
    v0 = 999;
    s5 = a2 & 0xff;
    s4 = a0 + 0;
    s3 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08926B84; }
    goto L_089269EC;
L_089269EC:;
    v0 = LD32(a1);
    s6 = 999;
    a0 = LD32(v0-12);
    a0 = a1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s2 = sp + 16;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08926A0C;
L_08926A0C:;
    a2 = D_08C2B2A8 - (-19800);
    a0 = a2 - 19800;
    v1 = LD32(a0+8);
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    a1 = LD32(a0+4);
    v1 = v1 + 1;
    v0 = D_08AED448 - (-11192);
    ST32(a0+8, v1);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    f20 = BITSF(LD32(v0-11192));
    ST32(sp+16, a0);
    ST32(sp+20, 0);
    cnd_ = a1 == 0;
    ST32(sp+24, 0);
    if (cnd_) { goto L_08926AA0; }
    goto L_08926A54;
L_08926A54:;
    a0 = LD32(a2-19800);
    a2 = a1 + 0;
    goto L_08926A5C;
L_08926A5C:;
    a1 = LD32(s2+4);
    v0 = a1 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s2+8, v1);
    if (cnd_) { goto L_08926A90; }
    goto L_08926A74;
L_08926A74:;
    v1 = LD32(s2+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+24); goto L_08926AA4; }
    goto L_08926A84;
L_08926A84:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_08926A74; }
    goto L_08926A90;
L_08926A90:;
    v0 = a1 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s2+4, v0);
    if (cnd_) { goto L_08926A5C; }
    goto L_08926AA0;
L_08926AA0:;
    v1 = LD32(sp+24);
    goto L_08926AA4;
L_08926AA4:;
    cnd_ = v1 == 0;
    v0 = D_08AED44C - (-11188);
    if (cnd_) { goto L_08926AF8; }
    goto L_08926AAC;
L_08926AAC:;
    f21 = BITSF(LD32(v0-11188));
    s1 = LD32(v1);
    goto L_08926AB4;
L_08926AB4:;
    a0 = s2 + 0;
    a1 = 1;
    { u64 r_ = func_08ABC5BC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926AC0;
L_08926AC0:;
    a2 = LD32(s1);
    v1 = 0x801e;
    v0 = LD32(a2-16);
    v0 = s1 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    v1 = LD32(sp+24);
    if (cnd_) { goto L_08926AF0; }
    goto L_08926ADC;
L_08926ADC:;
    v0 = LD32(s1+228);
    v0 = (v0 >> 5) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s3); goto L_08926BCC; }
    goto L_08926AEC;
L_08926AEC:;
    v1 = LD32(sp+24);
    goto L_08926AF0;
L_08926AF0:;
    cnd_ = v1 != 0;
    if (cnd_) { s1 = LD32(v1); goto L_08926AB4; }
    goto L_08926AF8;
L_08926AF8:;
    s1 = LD32(sp+16);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08926B80; }
    goto L_08926B0C;
L_08926B0C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08926B80; }
    goto L_08926B18;
L_08926B18:;
    v0 = LD32(s1);
    goto L_08926B1C;
L_08926B1C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08926B70; }
    goto L_08926B30;
L_08926B30:;
    v0 = LD_U8(s0+8);
    goto L_08926B34;
L_08926B34:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08926BC4; }
    goto L_08926B3C;
L_08926B3C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08926BB4; }
    goto L_08926B44;
L_08926B44:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08926B4C;
L_08926B4C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926B58;
L_08926B58:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08926B64;
L_08926B64:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08926B34; }
    goto L_08926B6C;
L_08926B6C:;
    v1 = LD32(s1+4);
    goto L_08926B70;
L_08926B70:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08926B1C; }
    goto L_08926B80;
L_08926B80:;
    v0 = s6 + 0;
    goto L_08926B84;
L_08926B84:;
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
L_08926BB4:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08926B4C;
L_08926BC4:;
    s0 = LD32(s0+4);
    goto L_08926B64;
L_08926BCC:;
    v0 = LD32(a2+232);
    a0 = s1 + 0;
    v1 = LD32(a1-16);
    a2 = 0 + 0;
    v1 = s3 + v1;
    t_ = v0;
    a1 = LD32(v1+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08926BE8;
L_08926BE8:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+236);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08926BFC;
L_08926BFC:;
    s0 = (s32)s0 < (s32)v0;
    s0 = s0 ^ 0x1;
    cnd_ = s0 == 0;
    v1 = LD32(sp+24);
    if (cnd_) { goto L_08926AF0; }
    goto L_08926C0C;
L_08926C0C:;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 != 0;
    v0 = D_08C28F60 - (-28832);
    if (cnd_) { goto L_08926D64; }
    goto L_08926C1C;
L_08926C1C:;
    a0 = LD32(v0-28832);
    v1 = 5;
    cnd_ = a0 == v1;
    if (cnd_) { v0 = LD32(s1+204); goto L_08926D30; }
    goto L_08926C2C;
L_08926C2C:;
    v1 = LD32(s1);
    goto L_08926C30;
L_08926C30:;
    ST32(sp+48, 0);
    a0 = s1 + 0;
    a1 = sp + 48;
    v0 = LD32(v1+180);
    t_ = v0;
    s0 = 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08926C48;
L_08926C48:;
    a0 = LD32(sp+48);
    cnd_ = a0 != 0;
    a1 = 0xbeeb0000u;
    if (cnd_) { goto L_08926D1C; }
    goto L_08926C54;
L_08926C54:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08926C70;
L_08926C70:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f3 = f3 - f1;
    f4 = f4 - f0;
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+32, FBITS(f2));
    fcc = FCMP(f0, f20, 12);
    ST32(sp+36, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+40, FBITS(f4));
    if (cnd_) { goto L_08926AEC; }
    goto L_08926CD0;
L_08926CD0:;
    v0 = 4;
    cnd_ = s0 == v0;
    if (cnd_) { v1 = LD32(s1); goto L_08926CF4; }
    goto L_08926CDC;
L_08926CDC:;
    cnd_ = s5 != 0;
    v0 = LD32(s4+4);
    if (cnd_) { goto L_08926D08; }
    goto L_08926CE4;
L_08926CE4:;
    v1 = LD32(v0+76);
    cnd_ = s0 == v1;
    v1 = LD32(sp+24);
    if (cnd_) { goto L_08926AF0; }
    goto L_08926CF0;
L_08926CF0:;
    v1 = LD32(s1);
    goto L_08926CF4;
L_08926CF4:;
    f20 = f0;
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    s6 = LD32(v0+4);
    goto L_08926AEC;
L_08926D08:;
    v1 = LD32(v0+76);
    cnd_ = s0 != v1;
    if (cnd_) { v1 = LD32(sp+24); goto L_08926AF0; }
    goto L_08926D14;
L_08926D14:;
    v1 = LD32(s1);
    goto L_08926CF4;
L_08926D1C:;
    a1 = a1 | 0x1a1c;
    a2 = 4;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08926D28;
L_08926D28:;
    s0 = v0 + 0;
    goto L_08926C54;
L_08926D30:;
    a0 = 0xb3910000u;
    v1 = 0xe1120000u;
    a0 = a0 | 0x260c;
    v1 = v1 | 0x20ea;
    v1 = v0 ^ v1;
    v0 = v0 ^ a0;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(sp+24); goto L_08926AF0; }
    goto L_08926D5C;
L_08926D5C:;
    v1 = LD32(s1);
    goto L_08926C30;
L_08926D64:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08926D80;
L_08926D80:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f3 = f3 - f1;
    f4 = f4 - f0;
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f3));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f21, f0, 12);
    cnd_ = fcc;
    ST32(sp+40, FBITS(f4));
    if (cnd_) { goto L_08926AEC; }
    goto L_08926DE8;
L_08926DE8:;
    v0 = D_08C28F60 - (-28832);
    goto L_08926C1C;
}

/* 08926DF0 */
u32 func_08926DF0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08926DF0:;
    sp = sp - 96;
    v1 = D_08C2BA28 - (-17880);
    v1 = v1 - 17880;
    s4 = a0 + 0;
    a0 = sp + 0;
    s2 = a2 & 0xff;
    s3 = 999;
    s1 = a1 + 0;
    a1 = 1;
    v0 = LD32(v1+8);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    v0 = D_08AED450 - (-11184);
    f20 = BITSF(LD32(v0-11184));
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926E54;
L_08926E54:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08926EA8; }
    goto L_08926E60;
L_08926E60:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08926E98; }
    goto L_08926E70;
L_08926E70:;
    v0 = s3 + 0;
    goto L_08926E74;
L_08926E74:;
    sp = sp + 96;
    { v[0]=vr0;return v0; }
L_08926E98:;
    { u64 r_ = func_08ABC380(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926EA0;
L_08926EA0:;
    v0 = s3 + 0;
    goto L_08926E74;
L_08926EA8:;
    s0 = LD32(v0);
    goto L_08926EAC;
L_08926EAC:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08926EB8;
L_08926EB8:;
    cnd_ = s0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08926F70; }
    goto L_08926EC0;
L_08926EC0:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08926EDC;
L_08926EDC:;
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s1));
    f3 = BITSF(LD32(s1+4));
    f4 = BITSF(LD32(s1+8));
    f1 = f1 - f0;
    f2 = f2 - f3;
    f5 = f5 - f4;
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {vr0=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f1));
    fcc = FCMP(f0, f20, 12);
    ST32(sp+20, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f5));
    if (cnd_) { goto L_08926F6C; }
    goto L_08926F3C;
L_08926F3C:;
    cnd_ = s2 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_08926F5C; }
    goto L_08926F44;
L_08926F44:;
    v0 = LD32(s4+4);
    a0 = LD32(s0+12);
    v1 = LD32(v0+76);
    cnd_ = a0 == v1;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08926F70; }
    goto L_08926F58;
L_08926F58:;
    v1 = LD32(s0);
    goto L_08926F5C;
L_08926F5C:;
    f20 = f0;
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    s3 = LD32(v0+4);
    goto L_08926F6C;
L_08926F6C:;
    v0 = LD32(sp+8);
    goto L_08926F70;
L_08926F70:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08926EAC; }
    goto L_08926F78;
L_08926F78:;
    a0 = LD32(sp);
    goto L_08926E60;
    v[0]=vr0;
}

/* 08926F80 */
void func_08926F80(u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_08926F80:;
    v0 = D_08C25394 - (21396);
    v0 = v0 + 21396;
    v1 = 1;
    t0 = v1 << (a1 & 31);
    a3 = a1 + v0;
    v1 = v1 << (a2 & 31);
    a0 = a2 + v0;
    a1 = a1 < 0x8u;
    a2 = a2 < 0x8u;
    a1 = a1 & a2;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08926FC8; }
    goto L_08926FB0;
L_08926FB0:;
    v0 = LD_U8(a3);
    v0 = v0 | v1;
    ST8(a3, v0);
    v1 = LD_U8(a0);
    v1 = v1 | t0;
    ST8(a0, v1);
    goto L_08926FC8;
L_08926FC8:;
    return;
}

/* 08926FD0 */
u32 func_08926FD0(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_08926FD0:;
    v0 = D_08C25390 - (21392);
    v0 = LD32(v0+21392);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0892700C; }
    goto L_08926FE0;
L_08926FE0:;
    t0 = v0 + 0;
    v0 = D_08B1B510 - (-19184);
    a0 = v0 - 19184;
    v0 = LD32(a0);
    goto L_08926FF0;
L_08926FF0:;
    a3 = a2 + 0;
    a2 = a2 + 1;
    a0 = a0 + 4;
    cnd_ = a1 == v0;
    v1 = a2 < t0;
    if (cnd_) { goto L_08927010; }
    goto L_08927004;
L_08927004:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08926FF0; }
    goto L_0892700C;
L_0892700C:;
    a3 = 999;
    goto L_08927010;
L_08927010:;
    v0 = a3 + 0;
    return v0;
}

/* 08927018 */
void func_08927018(u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
L_08927018:;
    v0 = 999;
    ST32(t0, v0);
    a1 = D_08C25390 - (21392);
    ST32(t1, v0);
    v0 = LD32(a1+21392);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08927064; }
    goto L_08927034;
L_08927034:;
    v0 = D_08B1B510 - (-19184);
    v1 = v0 - 19184;
    goto L_0892703C;
L_0892703C:;
    v0 = LD32(v1);
    cnd_ = a2 == v0;
    if (cnd_) { ST32(t0, a0); goto L_08927050; }
    goto L_08927048;
L_08927048:;
    cnd_ = a3 == v0;
    if (cnd_) { ST32(t1, a0); goto L_08927050; }
    goto L_08927050;
L_08927050:;
    v0 = LD32(a1+21392);
    a0 = a0 + 1;
    v0 = a0 < v0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0892703C; }
    goto L_08927064;
L_08927064:;
    return;
}

/* 0892706C */
void func_0892706C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0892706C:;
    sp = sp - 48;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089271A0; }
    goto L_08927094;
L_08927094:;
    a2 = D_08C2A330 - (-23760);
    v0 = a2 - 23760;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_0892710C; }
    goto L_089270C0;
L_089270C0:;
    a2 = LD32(a2-23760);
    a3 = a1 + 0;
    goto L_089270C8;
L_089270C8:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089270FC; }
    goto L_089270E0;
L_089270E0:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(sp+8); goto L_08927110; }
    goto L_089270F0;
L_089270F0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089270E0; }
    goto L_089270FC;
L_089270FC:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089270C8; }
    goto L_0892710C;
L_0892710C:;
    a2 = LD32(sp+8);
    goto L_08927110;
L_08927110:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = sp + 0; goto L_089271D8; }
    goto L_08927118;
L_08927118:;
    s1 = LD32(sp);
    goto L_0892711C;
L_0892711C:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089271A0; }
    goto L_0892712C;
L_0892712C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089271A0; }
    goto L_08927138;
L_08927138:;
    v0 = LD32(s1);
    goto L_0892713C;
L_0892713C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08927190; }
    goto L_08927150;
L_08927150:;
    v0 = LD_U8(s0+8);
    goto L_08927154;
L_08927154:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089271D0; }
    goto L_0892715C;
L_0892715C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089271C0; }
    goto L_08927164;
L_08927164:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0892716C;
L_0892716C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08927178;
L_08927178:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08927184;
L_08927184:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08927154; }
    goto L_0892718C;
L_0892718C:;
    v1 = LD32(s1+4);
    goto L_08927190;
L_08927190:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892713C; }
    goto L_089271A0;
L_089271A0:;
    sp = sp + 48;
    return;
L_089271C0:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0892716C;
L_089271D0:;
    s0 = LD32(s0+4);
    goto L_08927184;
L_089271D8:;
    a1 = 1;
    s0 = LD32(a2);
    func_08ABC660(a0, a1);
    goto L_089271E4;
L_089271E4:;
    a0 = LD32(s1+4);
    v1 = LD32(s0+76);
    v0 = LD32(a0+76);
    cnd_ = v1 == v0;
    a2 = LD32(sp+8);
    if (cnd_) { goto L_089271FC; }
    goto L_089271F8;
L_089271F8:;
    ST32(s1+8, s0);
    goto L_089271FC;
L_089271FC:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = sp + 0; goto L_089271D8; }
    goto L_08927204;
L_08927204:;
    s1 = LD32(sp);
    goto L_0892711C;
}

/* 0892720C */
rv_t func_0892720C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0892720C:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C252E0 - (21216);
    t1 = D_08C252F0 - (21232);
    t2 = D_08C25300 - (21248);
    a1 = a1 & a0;
    v1 = t0 + 21216;
    a2 = t1 + 21232;
    cnd_ = a1 == 0;
    a3 = t2 + 21248;
    if (cnd_) { goto L_089272C4; }
    goto L_0892723C;
L_0892723C:;
    v0 = D_08AED454 - (-11180);
    f4 = BITSF(LD32(v0-11180));
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
    ST32(t0+21216, FBITS(f2));
    ST32(t1+21232, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+21248, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_089272C4;
L_089272C4:;
    return (rv_t){ v0, v1, f0 };
}

/* 089272CC */
rv_t func_089272CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089272CC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0892720C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089272E0;
L_089272E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089272EC */
void func_089272EC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089272EC:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08925AD0(a0);
    goto L_08927300;
L_08927300:;
    v0 = D_08AF8378 - (-31880);
    v1 = (u32)-1;
    v0 = v0 - 31880;
    ST32(s0, v0);
    a2 = 0 + 0;
    a1 = s0 + 0;
    ST8(s0+76, v1);
    a0 = s0 + 0;
    ST32(s0+68, 0);
    ST8(s0+72, 0);
    ST8(s0+73, 0);
    ST8(s0+74, 0);
    ST8(s0+75, v1);
    goto L_08927334;
L_08927334:;
    a2 = a2 + 1;
    v0 = a2 < 0x8u;
    ST8(a0+120, 0);
    ST32(a1+80, 0);
    ST32(a1+128, 0);
    a1 = a1 + 4;
    ST8(a0+112, 0);
    cnd_ = v0 != 0;
    a0 = a0 + 1;
    if (cnd_) { goto L_08927334; }
    goto L_08927358;
L_08927358:;
    v1 = D_08AED45C - (-11172);
    f0 = BITSF(LD32(v1-11172));
    v0 = 999;
    ST32(s0+164, v0);
    ST32(s0+160, FBITS(f0));
    ST32(s0+168, 0);
    ST32(s0+172, 0);
    sp = sp + 16;
    return;
}

/* 08927384 */
rv_t func_08927384(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08927384:;
    v0 = D_08AF8378 - (-31880);
    v0 = v0 - 31880;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08925B18(a0);
    goto L_089273A0;
L_089273A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089273AC */
rv_t func_089273AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089273AC:;
    v0 = D_08AF8378 - (-31880);
    v0 = v0 - 31880;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08925B18(a0);
    goto L_089273CC;
L_089273CC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089273D4;
L_089273D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089273E4 */
rv_t func_089273E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089273E4:;
    sp = sp - 16;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089273F8; }
    goto L_089273F0;
L_089273F0:;
    { rv_t r_ = func_08925B28(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089273F8;
L_089273F8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08927404 */
rv_t func_08927404(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08927404:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08927434; }
    goto L_0892741C;
L_0892741C:;
    v0 = LD32(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08927438; }
    goto L_08927428;
L_08927428:;
    v0 = LD_U8(a0+56);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08927444; }
    goto L_08927434;
L_08927434:;
    goto L_08927438;
L_08927438:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08927444:;
    func_08928170(a0, t1, t2, t3);
    goto L_0892744C;
L_0892744C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08928020(a0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08927454;
L_08927454:;
    goto L_08927438;
}

/* 0892745C */
rv_t func_0892745C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0892745C:;
    sp = sp - 64;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089275F4; }
    goto L_08927490;
L_08927490:;
    a0 = LD_U8(a0+56);
    cnd_ = a0 != 0;
    if (cnd_) {  goto L_089275F8; }
    goto L_0892749C;
L_0892749C:;
    a3 = D_08C2A880 - (-22400);
    v0 = a3 - 22400;
    v1 = LD32(v0+8);
    a2 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = a0 < a2;
    ST32(v0+8, v1);
    a1 = sp + 0;
    ST32(sp+4, 0);
    cnd_ = a0 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_08927514; }
    goto L_089274CC;
L_089274CC:;
    a3 = LD32(a3-22400);
    goto L_089274D0;
L_089274D0:;
    a0 = LD32(a1+4);
    v0 = a0 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a1+8, v1);
    if (cnd_) { goto L_08927504; }
    goto L_089274E8;
L_089274E8:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08927518; }
    goto L_089274F8;
L_089274F8:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_089274E8; }
    goto L_08927504;
L_08927504:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_089274D0; }
    goto L_08927514;
L_08927514:;
    v0 = LD32(sp+8);
    goto L_08927518;
L_08927518:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08927564; }
    goto L_08927520;
L_08927520:;
    f20 = BITSF(0);
    s3 = 1017;
    s4 = 999;
    s5 = 1010;
    s6 = 1;
    s0 = LD32(v0);
    goto L_08927538;
L_08927538:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08927544;
L_08927544:;
    cnd_ = s0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892755C; }
    goto L_0892754C;
L_0892754C:;
    v0 = LD_U8(s0+232);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08927638; }
    goto L_08927558;
L_08927558:;
    v0 = LD32(sp+8);
    goto L_0892755C;
L_0892755C:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08927538; }
    goto L_08927564;
L_08927564:;
    a0 = s1 + 0;
    { rv_t r_ = func_08925E98(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892756C;
L_0892756C:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089275F4; }
    goto L_08927580;
L_08927580:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089275F4; }
    goto L_0892758C;
L_0892758C:;
    v0 = LD32(s1);
    goto L_08927590;
L_08927590:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089275E4; }
    goto L_089275A4;
L_089275A4:;
    v0 = LD_U8(s0+8);
    goto L_089275A8;
L_089275A8:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08927630; }
    goto L_089275B0;
L_089275B0:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08927620; }
    goto L_089275B8;
L_089275B8:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089275C0;
L_089275C0:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089275CC;
L_089275CC:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089275D8;
L_089275D8:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089275A8; }
    goto L_089275E0;
L_089275E0:;
    v1 = LD32(s1+4);
    goto L_089275E4;
L_089275E4:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08927590; }
    goto L_089275F4;
L_089275F4:;
    goto L_089275F8;
L_089275F8:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08927620:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089275C0;
L_08927630:;
    s0 = LD32(s0+4);
    goto L_089275D8;
L_08927638:;
    a0 = s0 + 0;
    v0 = func_089E3BC4(a0);
    goto L_08927640;
L_08927640:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892755C; }
    goto L_08927648;
L_08927648:;
    a0 = s0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08927650;
L_08927650:;
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892755C; }
    goto L_08927658;
L_08927658:;
    a0 = s0 + 0;
    { u64 r_ = func_089E2F6C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08927660;
L_08927660:;
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892755C; }
    goto L_08927668;
L_08927668:;
    a1 = LD32(s0);
    v0 = LD32(a1-12);
    v0 = s0 + v0;
    f0 = BITSF(LD32(v0+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892755C; }
    goto L_08927688;
L_08927688:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892755C; }
    goto L_08927694;
L_08927694:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892755C; }
    goto L_089276A0;
L_089276A0:;
    v0 = LD32(s1+4);
    a0 = LD32(s0+12);
    v1 = LD32(v0+76);
    cnd_ = a0 != v1;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892755C; }
    goto L_089276B4;
L_089276B4:;
    v0 = LD32(a1+168);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089276C0;
L_089276C0:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08927728; }
    goto L_089276C8;
L_089276C8:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089276E4;
L_089276E4:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    a2 = 1;
    v0 = func_08926DF0(a0, a1, a2);
    goto L_089276F4;
L_089276F4:;
    s2 = v0 + 0;
    v0 = LD_U8(s0+329);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892755C; }
    goto L_08927704;
L_08927704:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_089268D0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08927710;
L_08927710:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(sp+8); goto L_0892755C; }
    goto L_08927718;
L_08927718:;
    ST32(v0+60, s2);
    ST8(v0+42, s6);
    ST32(v0+76, s5);
    goto L_08927558;
L_08927728:;
    a1 = s0 + 0;
    { rv_t r_ = func_089268D0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08927730;
L_08927730:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089276C8; }
    goto L_08927738;
L_08927738:;
    v0 = 1;
    ST8(v1+44, v0);
    ST32(v1+76, s3);
    ST32(v1+60, s4);
    goto L_089276C8;
}
