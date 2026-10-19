/* Twin-stick controls: the PS Vita's right stick turns and looks, the left stick moves and strafes, as in a typical FPS.
 *
 * How the game reads input (traced in the decompiled code and checked at run time on the Linux build):
 *  - The pad read (func_088FDCC0) writes the one PSP stick as floats into an axis array (pointer at 0x08B46200 -> 0x08B28AB8, 39
 *    slots): slot 3 = X, slot 4 = Y (up positive), through the game's own dead zone / curve (func_088FDA34, or func_088FDAD0 when the
 *    game's circular mode flag at 0x08B46208 is set).  Buttons go to a byte array (L = byte 457, R = 458, ...).
 *  - A control scheme (func_08A5F1A4, two of them: 0 = default, 1 = alternate) is a table of actions, each a chain of bindings
 *    (axis / button / "axis while button" composites); an action's value is the largest positive plus the most negative binding.
 *  - The soldier (func_0899530C) moves with (action 5, 0, action 4) and turns with action 0.  In scheme 0 both 0 and 5 are the stick's
 *    X: action 0 while R is released (turn), action 5 while R is held (strafe).  Action 1 (look up/down, negated by the game's
 *    invert-look option) has no binding in scheme 0; scheme 1 puts it on Triangle / Cross.  Actions 2 / 3 are X / Y again (aiming).
 *
 * What this changes (RS_TWIN_STICK=1, the default; 0 = the original controls):
 *  - the right stick goes into two unused axis slots (5 = X, 6 = Y) after every pad read, through the same dead zone / curve;
 *  - scheme 0: turn (0) = right X, strafe (5) = left X, both always (no R modifier); look up/down (1) = right Y, with the turn
 *    binding's response; aiming X / Y (2 / 3) = right stick; move (4) stays on left Y;
 *  - scheme 1 (face buttons look): the right stick is added to turn / look / aim, the face buttons keep working.
 * The bindings are the game's own objects with their tuned scale and ramp values; only the axis slot and the R gating change.  Each
 * binding is checked (class, slot) before it is changed: anything unexpected leaves the scheme as the game built it, with a log line.
 * The composites and their R-button children that are dropped from the chains are left allocated (a few dozen bytes per input
 * object, which the game creates once per controller). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "psp_impl.h"
#include "guest.h"
#include "game_hooks.h"

extern u8 rs_right_stick[2];
extern int rs_setting_int(const char *, int);
extern float func_088FDA34(u32 a0);
extern void func_088FDAD0(u32 a0, u32 a1, u32 a2, u32 a3);
extern void func_08896520(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14);

#define IMG(va)      GIMG(va)   /* game data address -> this build's address */
#define R32(a)       GU32(a)
#define RF(a)        GF32(a)
#define AXIS_PTR     IMG(0x08B46200)          /* -> the axis array */
#define CIRCLE_FLAG  IMG(0x08B46208)          /* the game's circular dead-zone mode */
#define VT_AXIS      IMG(0x08AF7978)          /* binding classes (vtables) */
#define VT_COMPOSITE IMG(0x08AF79B8)          /* "axis while button": +12 button binding, +16 axis binding */
enum { SLOT_LX = 3, SLOT_LY = 4, SLOT_RX = 5, SLOT_RY = 6 };
enum { ACT_TURN = 0, ACT_LOOK = 1, ACT_AIM_X = 2, ACT_AIM_Y = 3, ACT_MOVE = 4, ACT_STRAFE = 5 };

static u32 scheme_obj;                                    /* the input object (for RS_INPUT_LOG) */
static int enabled(void){ static int on = -1; if (on < 0) on = rs_setting_int("RS_TWIN_STICK", 1); return on; }

void rs_input_after_pad(void){
    if (!enabled()) return;
    u32 ax = R32(AXIS_PTR); if (!ax) return;
    u32 rx = rs_right_stick[0], ry = rs_right_stick[1];
    if (GU8(CIRCLE_FLAG)) func_088FDAD0(rx, ry, ax + SLOT_RX * 4, ax + SLOT_RY * 4);
    else { RF(ax + SLOT_RX * 4) = func_088FDA34(rx); RF(ax + SLOT_RY * 4) = -func_088FDA34(ry); }   /* as the left stick: up = positive */
    static int log = -1; static unsigned n; if (log < 0) log = getenv("RS_INPUT_LOG") != 0;      /* diagnostics: action values */
    if (log && scheme_obj && ++n % 20 == 0) { u32 o = scheme_obj, t = R32(o + 8) + R32(o + 12) * 16, v = R32(t + 12);
        fprintf(stderr, "[INPUT] read %u scheme %u  sticks L %.2f %.2f R %.2f %.2f  turn %.3f look %.3f aimx %.3f aimy %.3f move %.3f strafe %.3f\n", n, R32(o + 12),
                RF(ax + 12), RF(ax + 16), RF(ax + 20), RF(ax + 24), RF(v), RF(v + 4), RF(v + 8), RF(v + 12), RF(v + 16), RF(v + 20)); }
}

/* binding objects: +0 class, +4 scale, +8 next in chain; axis: +12 slot, +16 state, +20 / +24 ramp, +28 sign mode */
static int is_axis(u32 b, int slot){ return b && R32(b) == VT_AXIS && (slot < 0 || (int)R32(b + 12) == slot); }
static int is_composite(u32 b){ return b && R32(b) == VT_COMPOSITE && R32(b + 8) == 0; }
static u32 head_at(u32 tbl, int act){ return R32(tbl + 4) + 4u * (u32)act; }
static void add_axis(u32 tbl, int act, int slot, u32 like){        /* a new axis binding with the response of an existing one */
    func_08896520(tbl, (u32)act, (u32)slot, R32(like + 28), 0, 0, 0, RF(like + 4), RF(like + 20), RF(like + 24)); }

void rs_input_after_scheme(u32 obj, u32 idx){
    if (!enabled() || idx > 1) return;
    scheme_obj = obj;
    u32 tbl = R32(obj + 8) + idx * 16; if (R32(tbl) < 6 || !R32(tbl + 4)) return;
    if (idx == 0) {
        u32 c_turn = R32(head_at(tbl, ACT_TURN)), c_strafe = R32(head_at(tbl, ACT_STRAFE));
        u32 aim_x = R32(head_at(tbl, ACT_AIM_X)), aim_y = R32(head_at(tbl, ACT_AIM_Y));
        if (!is_composite(c_turn) || !is_composite(c_strafe) || !is_axis(R32(c_turn + 16), SLOT_LX) || !is_axis(R32(c_strafe + 16), SLOT_LX) ||
            R32(head_at(tbl, ACT_LOOK)) != 0) {
            fprintf(stderr, "[INPUT] control scheme 0 is not laid out as expected: original controls kept\n"); return; }
        u32 turn = R32(c_turn + 16), strafe = R32(c_strafe + 16);
        R32(turn + 12) = SLOT_RX; R32(turn + 8) = 0; R32(head_at(tbl, ACT_TURN)) = turn;        /* turn: right X, always */
        R32(strafe + 8) = 0; R32(head_at(tbl, ACT_STRAFE)) = strafe;                             /* strafe: left X, always */
        if (is_axis(aim_x, SLOT_LX) && !R32(aim_x + 8)) R32(aim_x + 12) = SLOT_RX;               /* aiming: right stick */
        if (is_axis(aim_y, SLOT_LY) && !R32(aim_y + 8)) R32(aim_y + 12) = SLOT_RY;
        add_axis(tbl, ACT_LOOK, SLOT_RY, turn);                                                   /* look up / down: right Y */
        fprintf(stderr, "[INPUT] twin-stick controls: left stick move + strafe, right stick turn + look\n");
    } else {
        u32 t0 = R32(obj + 8);                                                                    /* scheme 0, already converted */
        u32 turn = R32(head_at(t0, ACT_TURN)), aim_x = R32(head_at(t0, ACT_AIM_X)), aim_y = R32(head_at(t0, ACT_AIM_Y));
        if (!is_axis(turn, SLOT_RX)) return;
        add_axis(tbl, ACT_TURN, SLOT_RX, turn); add_axis(tbl, ACT_LOOK, SLOT_RY, turn);
        if (is_axis(aim_x, SLOT_RX)) add_axis(tbl, ACT_AIM_X, SLOT_RX, aim_x);
        if (is_axis(aim_y, SLOT_RY)) add_axis(tbl, ACT_AIM_Y, SLOT_RY, aim_y);
    }
}
