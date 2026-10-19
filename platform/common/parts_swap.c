/* Personalisation: any head on any body of the faction (experimental).
 *
 * The game (traced in the decompiled code):
 *  - A faction has three bodies; 0x08C29190[faction * 3 + body] is a body's id (func_089780FC).  Each body's data lists its
 *    own three heads as the properties "Head 1".."Head 3".  The faction record (colour_picker.c) holds the body (+0) and the
 *    head (+4) as indices 0..2, the head being one of that body's three.
 *  - func_08977FFC(faction, head, body) looks up the head of a body; the menu preview and the game's spawn (func_08A08EF8)
 *    both get the head from it, and pass the body and the head on separately.
 *  - Personalisation's Body / Head carousel: func_08A35BB0 lists its items (three, the head names of the current body),
 *    func_08A35B00 stores the one chosen.
 *
 * What this does (hooks from tools/dc/hooks.py): the Head carousel lists the heads of all three bodies (nine), named
 * "<body>: <head>".  A head of the current body is stored as before (0..2); a head of another body is stored as
 * 3 + body * 3 + head, which the head lookup turns back into that body's head.  So a Scout Trooper head can go on a Dark
 * Trooper body, and saves that only use the game's own choices are unchanged. */
#include <stdio.h>
#include <string.h>
#include "psp_impl.h"
#include "guest.h"
#include "game_hooks.h"

extern int rs_setting_int(const char *, int);
extern u32 func_08A3729C(void);
extern float func_08A36BA0(u32, u32, u32, u32, u32, float, float, float, float, float, float, float, float);
extern u32 func_08977FFC(u32, u32, u32);
extern u32 func_089780FC(u32, u32);
extern u32 func_08899420(u32, u32, u32, u32);
extern rv_t func_0888B320(u32, u32, u32, u32, u32, u32, float, float, float, float, float, float, float, float);
extern void func_0888FCA8(u32, u32);
extern u64 func_0881C3E0(u32, u32, u32);
extern u32 func_0896CE48(u32, u32, u32, u32, u32, u32);
extern u32 func_08834304(u32);
extern rv_t func_08898048(u32, u32, u32, u32, u32, u32, u32, u32);
extern u64 func_0888B1B4(u32);
extern u64 func_0888ABE4(u32);
extern u32 func_08A28C68(void);
extern u64 func_0888FC44(u32, u32);
extern rv_t func_08A35D88(u32, u32, u32, u32, u32, u32, u32, u32, float, float, float, float, float, float, float, float);
extern rv_t func_08A35BB0(u32, u32, u32, u32, u32, u32, u32, u32, float, float, float, float, float, float, float, float);
#define IMG(va)  GIMG(va)
#define B8(a)    GU8(a)
#define W32(a)   GU32(a)

#define NB 3                                        /* bodies of a faction, and heads of a body */
static int enabled(void){ static int on = -1; if (on < 0) on = rs_setting_int("RS_ANY_HEAD", 1); return on; }

int rs_head_lookup(u32 faction, u32 head, u32 body, u32 *rv){
    if (head < NB || head >= NB + NB * NB) return 0;                /* the game's own: a head of this body */
    head -= NB; *rv = func_08977FFC(faction, head % NB, head / NB); return 1; }

static u32 category(void){ return func_08899420(IMG(0x08AE3558), 0, 0, 0); }   /* 0 Body, 1 Head (the carousel's) */
static u32 item_of(u32 rec){ u32 h = W32(rec + 4), b = W32(rec); return h < NB ? (b < NB ? b : 0) * NB + h : h < NB + NB * NB ? h - NB : 0; }

/* a string property of a body's data (the game's func_08A35BB0 does the same for one) */
static const u16 *body_text(u32 faction, u32 body, u32 key){
    u32 obj = 0; func_0881C3E0(0x203E217Du, func_089780FC(faction, body), GA(&obj));   /* (a game thread: its stack is guest memory) */
    return (const u16 *)GP(func_08834304(func_0896CE48(obj, key, 0, 0, 0, 0))); }

/* The carousel (a list widget) has as many entries as it has entry slots (widget +408, made from its template by
 * func_0888FC44), three in the menu's file; populating stops at the first item the list function has no name for.  The Head
 * list needs nine: the slots are set each frame, after the pad is read (outside the menu's update), for the list shown. */
void rs_parts_frame(void){
    if (!enabled()) return;
    u32 w = func_0888B320(0x7EA08E83u, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0).v0;
    if ((s32)w <= 0) return;
    u32 want = category() == 1 ? NB * NB : NB;
    if (W32(w + 408) != want) func_0888FC44(w, want); }

int rs_parts_list(u32 index, u32 flag, void *rv){
    if (!enabled() || (flag & 0xFF) || category() != 1) return 0;
    rv_t *r = rv; r->v0 = 0; r->v1 = 0; r->f0 = 0;
    u32 faction = func_08A28C68(), last = IMG(0x08B1C2D0), cat = category();
    if (W32(last) != cat) {                                          /* the carousel has just been opened: select the stored head */
        u32 widget = func_0888B320(0x7EA08E83u, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0).v0, rec = func_08A3729C();
        if ((s32)widget > 0 && (s32)rec > 0) func_0888FCA8(widget, item_of(rec));
        W32(last) = cat; }
    if (index >= NB * NB) return 1;                                  /* the end of the list */
    static u16 (*names)[64]; if (!names) names = rs_guest_alloc(sizeof(u16) * 64 * NB * NB, 16);   /* the game reads them */
    u16 *o = names[index]; int n = 0;
    const u16 *b = body_text(faction, index / NB, 0x6588132Du), *h = body_text(faction, index / NB, W32(IMG(0x08AE3E28) + 4 * (index % NB)));
    for (; b && *b && n < 30; b++) o[n++] = *b;
    o[n++] = ':'; o[n++] = ' ';
    for (; h && *h && n < 62; h++) o[n++] = *h;
    o[n] = 0;
    func_08898048(GA(o), 0, 0, 0, 0, 0, 0, 0);
    r->v0 = 1; return 1; }

/* the item's 3D head: the game's own, listed for the item's body (made current for the call) */
int rs_parts_anim(u32 index, u32 flag, void *rv){
    static int inside;
    if (inside || !enabled() || (flag & 0xFF) || category() != 1) return 0;
    rv_t *r = rv; r->v0 = 0; r->v1 = 0; r->f0 = 0;
    if (index >= NB * NB) return 1;
    u32 rec = func_08A3729C(); if (!rec) return 0;
    u32 b = W32(rec); W32(rec) = index / NB; inside = 1;
    *r = func_08A35D88(index % NB, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    inside = 0; W32(rec) = b; return 1; }

int rs_parts_accept(u32 index, u32 flag, void *rv){
    if (!enabled() || (flag & 0xFF) || category() != 1) return 0;
    rv_t *r = rv; r->v0 = 1; r->v1 = 0; r->f0 = 0;
    u32 rec = func_08A3729C();
    if (rec && index < NB * NB) W32(rec + 4) = index / NB == W32(rec) ? index % NB : NB + index;
    B8(IMG(0x08C29342)) = 1;                                         /* the profile has changed */
    func_08A36BA0(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);            /* the preview soldier */
    u32 w = (u32)func_0888B1B4(0x3C8EDDD1u); if (w) W32(w + 172) = 0;  /* as the game's handler finishes */
    func_0888ABE4(0xCD12E72Fu);
    return 1; }
