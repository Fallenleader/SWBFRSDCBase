/* Personalisation colours chosen with an HSV colour picker instead of the game's 15 predefined swatches (experimental).
 *
 * The game (traced in the decompiled code):
 *  - Each faction has a 12-byte record in the settings block 0x08C2933C (factions 2, 3, 0, 1 at +1448, +1460, +1472, +1484):
 *    +0 body (u32), +4 head (u32), +8 colour 1 index, +9 colour 2 index, +10 / +11 unused.  The record of the faction being edited:
 *    func_08A3729C().  The block is the profile the game saves; +6 is its "changed" flag.
 *  - Colour 1 ("team") = 0x08ADC520[index], colour 2 ("uniform") = 0x08ADC560[index], 0xAARRGGBB, read only through
 *    func_0897843C / func_0897848C (profile + 1312, faction): the menu preview and the game itself.
 *  - Personalisation menu: func_08A359F4 (FE_Personalisation_AcceptCategoryItem) runs when an item of the list is chosen;
 *    category 2 = Colour 1, 3 = Colour 2 open the swatch grid.  func_08A36BA0 redraws the preview soldier.
 *
 * What this does (hooks from tools/dc/hooks.py):
 *  - Choosing Colour 1 / Colour 2 opens the picker instead of the grid: an SV square, a hue slider, Save and Cancel, drawn over
 *    the grid's panel.  The cursor moves between the four with the d-pad / left stick; Cross selects; with the square or slider
 *    selected the d-pad / left stick move its cursor and Circle leaves it; Circle with nothing selected cancels; Start saves.
 *    The preview soldier shows the colour live.  The game gets no input while the picker is up.
 *  - Storage, where the index was: colour n's index byte (+8 / +9) becomes 0x80 | the top 7 bits of a 15-bit RGB (5 bits a
 *    channel), the unused byte (+10 / +11) holds the low 8.  Indices are below 16, so old saves (and colours set from the grid)
 *    read as before; the flag marks a picked colour.
 *  - The colour lookups return the stored colour for flagged records.
 * Drawing: through the renderer interface (gfx.h) into each finished frame, before it is shown, so every platform gets it. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "psp_impl.h"
#include "guest.h"
#include "gfx.h"
#include "game_hooks.h"
#include "overlay_ui.h"

extern int rs_setting_int(const char *, int);
extern u32 func_08A3729C(void);
extern float func_08A36BA0(u32, u32, u32, u32, u32, float, float, float, float, float, float, float, float);
#define IMG(va)  GIMG(va)
#define B8(a)    GU8(a)
#define W32(a)   GU32(a)
#define F32(a)   GF32(a)
#define SETTINGS IMG(0x08C2933C)

static int enabled(void){ static int on = -1; if (on < 0) on = rs_setting_int("RS_COLOUR_PICKER", 1); return on; }

/* ---------------------------------------------------------------- storage */
static u32 rgb_of(u32 rec, int which){                            /* the record's colour n as 0xFFRRGGBB */
    u8 hi = B8(rec + 8 + which), lo = B8(rec + 10 + which);
    if (hi & 0x80) { u32 v = ((u32)(hi & 0x7F) << 8) | lo, r = (v >> 10) & 31, g = (v >> 5) & 31, b = v & 31;
        return 0xFF000000u | (r * 255 / 31) << 16 | (g * 255 / 31) << 8 | (b * 255 / 31); }
    return W32(IMG(which ? 0x08ADC560 : 0x08ADC520) + 4u * (hi & 15)); }
static void store(u32 rec, int which, u32 rgb){
    u32 r = ((rgb >> 16) & 255) * 31 / 255, g = ((rgb >> 8) & 255) * 31 / 255, b = (rgb & 255) * 31 / 255, v = r << 10 | g << 5 | b;
    B8(rec + 8 + which) = (u8)(0x80 | (v >> 8)); B8(rec + 10 + which) = (u8)(v & 255); }

int rs_colour_lookup(u32 profile, u32 faction, int which, u32 *rgba){
    static const int off[4] = {168, 180, 144, 156};                  /* colour 1 byte of factions 0..3 (relative to profile + 1312) */
    if (faction > 3) return 0;
    u32 rec = profile + (u32)off[faction] - 8;
    if (!(B8(rec + 8 + which) & 0x80)) return 0;                     /* a palette index: the game's own lookup */
    *rgba = rgb_of(rec, which); return 1; }

/* ---------------------------------------------------------------- picker state */
static volatile struct { int active, focus, selected; float h, s, v; } P;   /* drawn by the renderer thread */
static u32 rec_; static int which_; static u8 orig[4]; static int dirty, refresh_wait, suppress, fresh;

static void hsv_rgb(float h, float s, float v, float *r, float *g, float *b){
    h = fmodf(h, 360.0f); if (h < 0) h += 360.0f; float c = v * s, x = c * (1 - fabsf(fmodf(h / 60.0f, 2) - 1)), m = v - c, R, G, B;
    int k = (int)(h / 60.0f); switch (k) { case 0: R = c; G = x; B = 0; break; case 1: R = x; G = c; B = 0; break; case 2: R = 0; G = c; B = x; break;
                                           case 3: R = 0; G = x; B = c; break; case 4: R = x; G = 0; B = c; break; default: R = c; G = 0; B = x; }
    *r = R + m; *g = G + m; *b = B + m; }
static void rgb_hsv(u32 rgb, float *h, float *s, float *v){
    float r = ((rgb >> 16) & 255) / 255.0f, g = ((rgb >> 8) & 255) / 255.0f, b = (rgb & 255) / 255.0f;
    float mx = fmaxf(r, fmaxf(g, b)), mn = fminf(r, fminf(g, b)), d = mx - mn; *v = mx; *s = mx > 0 ? d / mx : 0;
    if (d <= 0) { *h = 0; return; }
    float hh = mx == r ? fmodf((g - b) / d, 6) : (mx == g ? (b - r) / d + 2 : (r - g) / d + 4); *h = hh * 60; if (*h < 0) *h += 360; }
static u32 picked(void){ float r, g, b; hsv_rgb(P.h, P.s, P.v, &r, &g, &b);
    return 0xFF000000u | (u32)lroundf(r * 255) << 16 | (u32)lroundf(g * 255) << 8 | (u32)lroundf(b * 255); }
static void refresh_preview(void){ func_08A36BA0(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); }

int rs_picker_category(u32 category, u32 query, u32 query2, void *rv){
    if (!enabled() || (query & 255) || (query2 & 255) || (category != 2 && category != 3)) return 0;
    u32 rec = func_08A3729C(); if (!rec) return 0;
    rec_ = rec; which_ = (int)category - 2;
    for (int i = 0; i < 2; i++) { orig[i] = B8(rec + 8 + i); orig[2 + i] = B8(rec + 10 + i); }
    float h, s, v; rgb_hsv(rgb_of(rec, which_), &h, &s, &v);
    P.h = h; P.s = s; P.v = v; P.focus = 0; P.selected = -1; dirty = 0; refresh_wait = 0; suppress = 1; fresh = 1; P.active = 1;
    fprintf(stderr, "[PICKER] colour %d: opened at %06X\n", which_ + 1, (unsigned)(rgb_of(rec, which_) & 0xFFFFFF));
    rv_t *r = rv; r->v0 = 1; r->v1 = 1; r->f0 = 0;                 /* what the game's handler returns when it has handled the item */
    return 1; }

static void close_picker(int save){
    if (save) { store(rec_, which_, picked()); B8(SETTINGS + 6) = 1; }
    else { for (int i = 0; i < 2; i++) { B8(rec_ + 8 + i) = orig[i]; B8(rec_ + 10 + i) = orig[2 + i]; } }
    fprintf(stderr, "[PICKER] colour %d %s: %06X, record bytes %02X %02X %02X %02X\n", which_ + 1, save ? "saved" : "cancelled", (unsigned)(rgb_of(rec_, which_) & 0xFFFFFF),
            B8(rec_ + 8), B8(rec_ + 9), B8(rec_ + 10), B8(rec_ + 11));
    refresh_preview(); P.active = 0; suppress = 1; }

/* ---------------------------------------------------------------- input (game thread, after every pad read) */
enum { BX = 449, BO = 450, BSTART = 455, BUP = 461, BDOWN = 462, BLEFT = 463, BRIGHT = 464 };
void rs_picker_pad(void){
    if (!enabled() || (!P.active && !suppress)) return;
    u32 btn = W32(IMG(0x08B46204)), ax = W32(IMG(0x08B46200)); if (!btn || !ax) return;
    int down[465] = {0}; static int prev[465]; int any = 0;
    for (int b = 449; b <= 464; b++) { down[b] = B8(btn + (u32)b) != 0; any |= down[b]; }
    float sx = F32(ax + 12), sy = F32(ax + 16);                         /* left stick (the game's curve), up positive */
    #define PRESSED(b) (down[b] && !prev[b])
    if (P.active && fresh) fresh = 0;                                   /* first read: the press that opened it is still down */
    else if (P.active) {
        static int hold, sdir; int dx = down[BRIGHT] - down[BLEFT], dy = down[BUP] - down[BDOWN];
        int sdx = sx > 0.5f ? 1 : (sx < -0.5f ? -1 : 0), sdy = sy > 0.5f ? 1 : (sy < -0.5f ? -1 : 0), nd = sdx * 3 + sdy;
        int stick_edge = nd != 0 && nd != sdir; sdir = nd;
        if (P.selected < 0) {                                           /* moving between the four inputs */
            int mx = 0, my = 0;
            if (PRESSED(BLEFT)) mx = -1; else if (PRESSED(BRIGHT)) mx = 1; else if (PRESSED(BUP)) my = 1; else if (PRESSED(BDOWN)) my = -1;
            else if (stick_edge) { if (sdx) mx = sdx; else my = sdy; }
            int f = P.focus;
            if (mx > 0 && f == 0) f = 1; else if (mx < 0 && f == 1) f = 0;
            else if (my < 0) f = f <= 1 ? 2 : 3; else if (my > 0) f = f == 3 ? 2 : (f == 2 ? 0 : f);
            P.focus = f;
            if (PRESSED(BX)) { if (f <= 1) P.selected = f; else { close_picker(f == 2); goto done; } }
            else if (PRESSED(BO)) { close_picker(0); goto done; } }
        else {                                                          /* moving the square's / slider's cursor */
            hold = (dx || dy) ? hold + 1 : 0; float step = hold > 20 ? 0.024f : 0.008f;
            float mx = dx * step + (fabsf(sx) > 0.15f ? sx * 0.03f : 0), my = dy * step + (fabsf(sy) > 0.15f ? sy * 0.03f : 0);
            if (P.selected == 0) { P.s = fminf(1, fmaxf(0, P.s + mx)); P.v = fminf(1, fmaxf(0, P.v + my)); }
            else { float t = 1 - P.h / 360.0f; t = fminf(1, fmaxf(0, t - my)); P.h = (1 - t) * 360.0f; }
            if (mx != 0 || my != 0) dirty = 1;
            if (PRESSED(BX) || PRESSED(BO)) P.selected = -1; }
        if (PRESSED(BSTART)) { close_picker(1); goto done; }
        if (dirty && ++refresh_wait >= 3) { store(rec_, which_, picked()); refresh_preview(); dirty = 0; refresh_wait = 0; } }   /* live preview */
done:
    for (int b = 449; b <= 464; b++) prev[b] = down[b];
    if (!P.active && suppress && !any && fabsf(sx) < 0.2f && fabsf(sy) < 0.2f) suppress = 0;   /* the closing press is released */
    for (int b = 449; b <= 464; b++) B8(btn + (u32)b) = 0;           /* the game sees nothing while the picker is up */
    for (int i = 3; i <= 6; i++) F32(ax + 4u * (u32)i) = 0; }

/* ---------------------------------------------------------------- drawing (renderer thread, each finished frame: overlay_ui.c) */
void rs_picker_draw(void){
    if (!P.active) return;
    float h = P.h, s = P.s, v = P.v; int focus = P.focus, sel = P.selected;
    const float px0 = 153, py0 = 24, px1 = 291, py1 = 221;          /* the swatch grid's panel (PSP pixels) */
    const float qx0 = 160, qy0 = 32, qx1 = 258, qy1 = 130;          /* saturation x value square */
    const float hx0 = 266, hx1 = 282;                                /* hue slider */
    ov_vgrad(px0, py0, px1, py1, ov_c(11, 77, 53, 1), ov_c(10, 62, 42, 1));
    /* square: per-vertex HSV on a 12 x 12 grid */
    for (int j = 0; j < 12; j++) for (int i = 0; i < 12; i++) {
        float s0 = i / 12.0f, s1 = (i + 1) / 12.0f, v0 = 1 - j / 12.0f, v1 = 1 - (j + 1) / 12.0f; col_t c[4]; float r, g, b;
        hsv_rgb(h, s0, v0, &r, &g, &b); c[0] = (col_t){r, g, b, 1}; hsv_rgb(h, s1, v0, &r, &g, &b); c[1] = (col_t){r, g, b, 1};
        hsv_rgb(h, s0, v1, &r, &g, &b); c[2] = (col_t){r, g, b, 1}; hsv_rgb(h, s1, v1, &r, &g, &b); c[3] = (col_t){r, g, b, 1};
        ov_quad( qx0 + (qx1 - qx0) * s0, qy0 + (qy1 - qy0) * (1 - v0), qx0 + (qx1 - qx0) * s1, qy0 + (qy1 - qy0) * (1 - v1), c[0], c[1], c[2], c[3], 0, 0, 0, 0); }
    /* hue: red at the top, through magenta, blue, cyan, green, yellow to red at the bottom */
    for (int k = 0; k < 6; k++) { float r0, g0, b0, r1, g1, b1; hsv_rgb(360 - k * 60.0f, 1, 1, &r0, &g0, &b0); hsv_rgb(360 - (k + 1) * 60.0f, 1, 1, &r1, &g1, &b1);
        float y0 = qy0 + (qy1 - qy0) * k / 6, y1 = qy0 + (qy1 - qy0) * (k + 1) / 6; ov_vgrad(hx0, y0, hx1, y1, (col_t){r0, g0, b0, 1}, (col_t){r1, g1, b1, 1}); }
    /* frames: the cursor's input lighter, the selected one white */
    for (int k = 0; k < 2; k++) { float x0 = k ? hx0 : qx0, x1 = k ? hx1 : qx1;
        if (sel == k) ov_frame(x0 - 2, qy0 - 2, x1 + 2, qy1 + 2, 2, ov_c(255, 255, 255, 1));
        else if (focus == k) ov_frame(x0 - 2, qy0 - 2, x1 + 2, qy1 + 2, 1, ov_c(156, 238, 186, 1));
        else ov_frame(x0 - 1, qy0 - 1, x1 + 1, qy1 + 1, 1, ov_c(0, 0, 0, 0.6f)); }
    /* square cursor (a ring) and hue markers (triangles at both sides) */
    { float cx = qx0 + (qx1 - qx0) * s, cy = qy0 + (qy1 - qy0) * (1 - v); ov_ring(cx, cy, 3.5f, 5.0f, ov_c(0, 0, 0, 0.7f)); ov_ring(cx, cy, 2.5f, 3.5f, ov_c(255, 255, 255, 1)); }
    { float y = qy0 + (qy1 - qy0) * (1 - h / 360.0f); ov_tri(hx0 - 6, y - 4, hx0 - 6, y + 4, hx0 - 1, y, ov_c(230, 230, 230, 1)); ov_tri(hx1 + 6, y - 4, hx1 + 1, y, hx1 + 6, y + 4, ov_c(230, 230, 230, 1)); }
    ov_entry(qx0, 146, hx1, 170, "Save", focus == 2 && sel < 0);
    ov_entry(qx0, 176, hx1, 200, "Cancel", focus == 3 && sel < 0);
    /* swatch of the colour being picked, under the buttons */
    { float r, g, b; hsv_rgb(h, s, v, &r, &g, &b); ov_rect(qx0, 206, hx1, 214, (col_t){r, g, b, 1}); ov_frame(qx0 - 1, 205, hx1 + 1, 215, 1, ov_c(0, 0, 0, 0.6f)); }

}
