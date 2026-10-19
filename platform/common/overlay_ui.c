/* Native menu overlays (see overlay_ui.h), drawn with the game's own UI assets: its font (FONTS.ASR, Franklin Gothic Medium
 * Condensed 13 / 9), the main menu's buttons (menu_buttons.tga), the blue dialog box (box_elements.tga) and the green Personalisation
 * panel (personalisation_01.tga), read from the game files on first use (game_ui.c).  Everything goes into one ordered list of
 * quads, each with its texture (or none), drawn in order into the frame buffer that is about to be shown (gu_native.c disp_job).
 * If the game files cannot be read the built-in bitmap font (ui_font.h) and plain shapes are used. */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include "gfx.h"
#include "overlay_ui.h"
#include "ui_font.h"
#include "game_ui.h"

enum { T_NONE, T_UIFONT, T_FONT13, T_FONT9, T_BUTTONS, T_BOX, T_PANEL, T_N };
#define MAXV 12000
#define MAXSEG 512
static gfx_vtx_t vb[MAXV]; static int nv;
static struct { int tex, first, n; } seg[MAXSEG]; static int nseg;

/* ---------------------------------------------------------------- the game's assets (renderer thread, loaded once) */
static gfont_t f13, f9; static int assets_tried;
static struct { uint32_t *px; int w, h; } tx[T_N];
static void load_assets(void){
    if (assets_tried) return; assets_tried = 1;
    if (!rs_game_font_load(&f13, 13)) { tx[T_FONT13].px = f13.rgba; tx[T_FONT13].w = f13.pw; tx[T_FONT13].h = f13.ph; }
    if (!rs_game_font_load(&f9, 9)) { tx[T_FONT9].px = f9.rgba; tx[T_FONT9].w = f9.pw; tx[T_FONT9].h = f9.ph; }
    if (rs_game_ui_texture("GUIMENU/BFF_MAINMENU.GUI", "menu_buttons.tga", &tx[T_BUTTONS].px, &tx[T_BUTTONS].w, &tx[T_BUTTONS].h)) tx[T_BUTTONS].px = NULL;
    if (rs_game_ui_texture("GUIMENU/BFF_MAINMENU.GUI", "box_elements.tga", &tx[T_BOX].px, &tx[T_BOX].w, &tx[T_BOX].h)) tx[T_BOX].px = NULL;
    if (rs_game_ui_texture("GUIMENU/BFF_CUSTOMISATION.GUI", "personalisation_01.tga", &tx[T_PANEL].px, &tx[T_PANEL].w, &tx[T_PANEL].h)) tx[T_PANEL].px = NULL;
    fprintf(stderr, "[UI] game font %s/%s, buttons %s, box %s, panel %s\n", f13.ok ? "ok" : "missing", f9.ok ? "ok" : "missing",
            tx[T_BUTTONS].px ? "ok" : "missing", tx[T_BOX].px ? "ok" : "missing", tx[T_PANEL].px ? "ok" : "missing"); }

/* ---------------------------------------------------------------- the quad list */
col_t ov_c(int r, int g, int b, float a){ col_t c = {r / 255.0f, g / 255.0f, b / 255.0f, a}; return c; }
static void V(gfx_vtx_t *o, float x, float y, col_t c, float u, float v){
    o->x = x * (2.0f / 512) - 1; o->y = y * (2.0f / 512) - 1; o->z = 0; o->w = 1; o->u = u; o->v = v; o->r = c.r; o->g = c.g; o->b = c.b; o->a = c.a; o->f = 1; }
static gfx_vtx_t *room(int tex, int verts){
    if (nv + verts > MAXV) return NULL;
    if (!nseg || seg[nseg - 1].tex != tex) { if (nseg >= MAXSEG) return NULL; seg[nseg].tex = tex; seg[nseg].first = nv; seg[nseg].n = 0; nseg++; }
    gfx_vtx_t *o = vb + nv; nv += verts; seg[nseg - 1].n += verts; return o; }
static void tquad(int tex, float x0, float y0, float x1, float y1, col_t tl, col_t tr, col_t bl, col_t br, float u0, float v0, float u1, float v1){
    gfx_vtx_t *o = room(tex, 6); if (!o) return;
    V(o, x0, y0, tl, u0, v0); V(o + 1, x1, y0, tr, u1, v0); V(o + 2, x0, y1, bl, u0, v1);
    V(o + 3, x1, y0, tr, u1, v0); V(o + 4, x1, y1, br, u1, v1); V(o + 5, x0, y1, bl, u0, v1); }
/* the rectangle (px, py, pw, ph) of texture t drawn to (x0, y0)-(x1, y1) */
static void blit(int t, float x0, float y0, float x1, float y1, float px, float py, float pw, float ph, col_t c){
    float iw = 1.0f / (float)tx[t].w, ih = 1.0f / (float)tx[t].h;
    tquad(t, x0, y0, x1, y1, c, c, c, c, px * iw, py * ih, (px + pw) * iw, (py + ph) * ih); }
/* nine-slice: the corners (b source pixels) keep their size, the edges and the middle stretch */
static void nine(int t, float x0, float y0, float x1, float y1, float sx, float sy, float sw, float sh, float b, col_t c){
    float xs[4] = {x0, x0 + b, x1 - b, x1}, ys[4] = {y0, y0 + b, y1 - b, y1};
    float us[4] = {sx, sx + b, sx + sw - b, sx + sw}, vs[4] = {sy, sy + b, sy + sh - b, sy + sh};
    for (int j = 0; j < 3; j++) for (int i = 0; i < 3; i++) blit(t, xs[i], ys[j], xs[i + 1], ys[j + 1], us[i], vs[j], us[i + 1] - us[i], vs[j + 1] - vs[j], c); }

void ov_quad(float x0, float y0, float x1, float y1, col_t tl, col_t tr, col_t bl, col_t br, float u0, float v0, float u1, float v1){ tquad(T_NONE, x0, y0, x1, y1, tl, tr, bl, br, u0, v0, u1, v1); }
void ov_rect(float x0, float y0, float x1, float y1, col_t c){ ov_quad(x0, y0, x1, y1, c, c, c, c, 0, 0, 0, 0); }
void ov_vgrad(float x0, float y0, float x1, float y1, col_t t, col_t b){ ov_quad(x0, y0, x1, y1, t, t, b, b, 0, 0, 0, 0); }
void ov_frame(float x0, float y0, float x1, float y1, float w, col_t c){ ov_rect(x0, y0, x1, y0 + w, c); ov_rect(x0, y1 - w, x1, y1, c); ov_rect(x0, y0, x0 + w, y1, c); ov_rect(x1 - w, y0, x1, y1, c); }
void ov_tri(float ax, float ay, float bx, float by, float cx, float cy, col_t c){
    gfx_vtx_t *o = room(T_NONE, 3); if (!o) return; V(o, ax, ay, c, 0, 0); V(o + 1, bx, by, c, 0, 0); V(o + 2, cx, cy, c, 0, 0); }
void ov_ring(float cx, float cy, float r0, float r1, col_t c){
    for (int i = 0; i < 16; i++) { float a0 = i * 6.2831853f / 16, a1 = (i + 1) * 6.2831853f / 16;
        float x00 = cx + cosf(a0) * r0, y00 = cy + sinf(a0) * r0, x01 = cx + cosf(a0) * r1, y01 = cy + sinf(a0) * r1;
        float x10 = cx + cosf(a1) * r0, y10 = cy + sinf(a1) * r0, x11 = cx + cosf(a1) * r1, y11 = cy + sinf(a1) * r1;
        ov_tri(x00, y00, x01, y01, x10, y10, c); ov_tri(x10, y10, x01, y01, x11, y11, c); } }

/* ---------------------------------------------------------------- text in the game's font
 * The scale keeps the old meaning (line height ~ 27 x scale): below 0.56 the small face (Cond_9, 16 px) is used, above it the menu
 * face (Cond_13, 21 px); scales near a face's own size snap to 1:1 so the glyphs stay sharp. */
static float snap(float k){ return fabsf(k - 1) < 0.18f ? 1.0f : k; }
static const gfont_t *pick(float sc, float *k, int *t){
    if (f9.ok && sc < 0.56f) { *k = snap(sc / 0.47f); *t = T_FONT9; return &f9; }
    if (f13.ok) { *k = snap(sc / 0.66f); *t = T_FONT13; return &f13; }
    if (f9.ok) { *k = snap(sc / 0.47f); *t = T_FONT9; return &f9; }
    return NULL; }
float ov_text_h(float sc){ float k; int t; const gfont_t *f = pick(sc, &k, &t); return f ? f->height * k : UI_FONT_LINE * sc; }
float ov_text_w(const char *s, float sc){
    float k; int t; const gfont_t *f = pick(sc, &k, &t); float w = 0;
    if (f) { for (; *s; s++) w += f->g[(unsigned char)*s].w * k; return w; }
    for (; *s; s++) { int ch = (unsigned char)*s; if (ch < 32 || ch > 126) ch = '?'; w += ui_font_glyphs[ch - 32].adv * sc; } return w; }
void ov_text(float x, float y, float sc, col_t c, const char *s){
    float k; int t; const gfont_t *f = pick(sc, &k, &t);
    if (f) { x = floorf(x + 0.5f); y = floorf(y + 0.5f);
        for (; *s; s++) { const gfont_glyph_t *g = &f->g[(unsigned char)*s]; if (g->w <= 0) continue;
            if (*s != ' ') blit(t, x, y, x + g->w * k, y + f->height * k, g->u, g->v, g->w, (float)f->height, c);
            x += g->w * k; }
        return; }
    for (; *s; s++) { int ch = (unsigned char)*s; if (ch < 32 || ch > 126) ch = '?'; const ui_glyph_t *g = &ui_font_glyphs[ch - 32];
        if (ch != ' ') tquad(T_UIFONT, x + g->ox * sc, y + g->oy * sc, x + (g->ox + g->w) * sc, y + (g->oy + g->h) * sc, c, c, c, c,
                             (float)g->x / UI_FONT_W, (float)g->y / UI_FONT_H, (float)(g->x + g->w) / UI_FONT_W, (float)(g->y + g->h) / UI_FONT_H);
        x += g->adv * sc; } }

/* ---------------------------------------------------------------- the game's widgets */
/* a main-menu button (Single Player, Multiplayer ...): the dark bar, or with the cursor the bright one; the label centred */
void ov_entry(float x0, float y0, float x1, float y1, const char *label, int focused){
    col_t w = ov_c(255, 255, 255, 1);
    if (tx[T_BUTTONS].px) {
        float sy = focused ? GUI_BUTTON_SEL_Y : GUI_BUTTON_Y, e = 12;
        blit(T_BUTTONS, x0, y0, x0 + e, y1, GUI_BUTTON_X, sy, e, GUI_BUTTON_H, w);
        blit(T_BUTTONS, x0 + e, y0, x1 - e, y1, GUI_BUTTON_X + e, sy, GUI_BUTTON_W - 2 * e, GUI_BUTTON_H, w);
        blit(T_BUTTONS, x1 - e, y0, x1, y1, GUI_BUTTON_X + GUI_BUTTON_W - e, sy, e, GUI_BUTTON_H, w); }
    else if (focused) { ov_vgrad(x0, y0, x1, y1, ov_c(26, 182, 150, 1), ov_c(10, 126, 92, 1)); ov_frame(x0, y0, x1, y1, 1, ov_c(156, 238, 186, 1)); }
    else { ov_vgrad(x0, y0, x1, y1, ov_c(12, 84, 58, 1), ov_c(9, 64, 43, 1)); ov_frame(x0, y0, x1, y1, 1, ov_c(8, 100, 72, 1)); }
    if (label && *label) { float sc = y1 - y0 >= 19 ? 0.66f : 0.5f;
        ov_text((x0 + x1 - ov_text_w(label, sc)) / 2, y0 + (y1 - y0 - ov_text_h(sc)) / 2, sc, focused ? w : ov_c(200, 214, 224, 1), label); } }
/* the green Personalisation panel */
void ov_panel(float x0, float y0, float x1, float y1){
    if (tx[T_PANEL].px) {                                            /* the game's panel is see-through: an opaque base of its own centre colour */
        uint32_t m = tx[T_PANEL].px[(GUI_PANEL_Y + GUI_PANEL_H / 2) * tx[T_PANEL].w + GUI_PANEL_X + GUI_PANEL_W / 2];
        col_t b = ov_c((int)(m & 255) * 3 / 4, (int)(m >> 8 & 255) * 3 / 4, (int)(m >> 16 & 255) * 3 / 4, 1);
        ov_rect(x0 + 2, y0 + 2, x1 - 2, y1 - 2, b);
        nine(T_PANEL, x0, y0, x1, y1, GUI_PANEL_X, GUI_PANEL_Y, GUI_PANEL_W, GUI_PANEL_H, 10, ov_c(255, 255, 255, 1)); return; }
    ov_vgrad(x0, y0, x1, y1, ov_c(10, 68, 46, 1), ov_c(12, 112, 74, 1));
    ov_frame(x0, y0, x1, y1, 1, ov_c(82, 91, 87, 1)); ov_frame(x0 - 1, y0 - 1, x1 + 1, y1 + 1, 1, ov_c(35, 35, 35, 1)); }
/* the blue dialog box of the game's menus */
void ov_box(float x0, float y0, float x1, float y1){
    if (tx[T_BOX].px) {
        uint32_t m = tx[T_BOX].px[(GUI_BOX_Y + GUI_BOX_H / 2) * tx[T_BOX].w + GUI_BOX_X + GUI_BOX_W / 2];
        ov_rect(x0 + 2, y0 + 2, x1 - 2, y1 - 2, ov_c((int)(m & 255) * 3 / 4, (int)(m >> 8 & 255) * 3 / 4, (int)(m >> 16 & 255) * 3 / 4, 1));
        nine(T_BOX, x0, y0, x1, y1, GUI_BOX_X, GUI_BOX_Y, GUI_BOX_W, GUI_BOX_H, 14, ov_c(255, 255, 255, 1)); return; }
    ov_vgrad(x0, y0, x1, y1, ov_c(10, 40, 70, 1), ov_c(14, 70, 110, 1)); ov_frame(x0, y0, x1, y1, 1, ov_c(140, 170, 190, 1)); }

/* ---------------------------------------------------------------- drawing */
static u32 tex_hash(void *ud){ return 0x5EED0000u + (u32)(uintptr_t)ud; }
static void tex_decode(u32 *dst, void *ud){
    int t = (int)(uintptr_t)ud;
    if (t == T_UIFONT) { for (int i = 0; i < UI_FONT_W * UI_FONT_H; i++) dst[i] = 0x00FFFFFFu | (u32)ui_font_alpha[i] << 24; return; }
    memcpy(dst, tx[t].px, (size_t)tx[t].w * tx[t].h * 4); }

void rs_overlay_draw(u32 addr, u32 stride, u32 fmt){                /* gu_native.c: each finished frame, renderer thread */
    nv = nseg = 0;
    rs_picker_draw(); rs_savemgr_draw();                              /* nothing up: nothing is loaded or drawn */
    if (!nv) return;
    if (!assets_tried) { load_assets(); nv = nseg = 0; rs_picker_draw(); rs_savemgr_draw(); }
    gfx_state_t st; memset(&st, 0, sizeof st);
    st.fbaddr = gfx_vram(addr); st.fbfmt = (int)fmt; st.fbstride = stride ? (int)stride : 512;
    st.sx1 = 0; st.sy1 = 0; st.sx2 = 479; st.sy2 = 271; st.cmr = st.cmg = st.cmb = 1;
    st.blend = 1; st.bsrc = 2; st.bdst = 3;
    static gtex_key_t key[T_N];
    for (int i = 0; i < nseg; i++) {
        int t = seg[i].tex; st.uvs[0] = st.uvs[1] = 1; st.uvs[2] = st.uvs[3] = 0;
        if (t == T_NONE) { st.tex = 0; st.texid = 0; }
        else {
            if (t != T_UIFONT && !tx[t].px) continue;
            int w = t == T_UIFONT ? UI_FONT_W : tx[t].w, h = t == T_UIFONT ? UI_FONT_H : tx[t].h;
            key[t] = (gtex_key_t){0x0BF00000u + 0x10000u * (u32)t, w, h, 7, 0, w, 0x5F0A7u + (u32)t};
            gtex_src_t src = {tex_hash, tex_decode, (void *)(uintptr_t)t};
            st.texid = gfx_tex_acquire(&key[t], &src, st.uvs); st.tex = st.texid != 0;
            st.trgba = 1; st.tfilter = 1; st.tclampu = st.tclampv = 1; st.tenv = 0xFFFFFF;
            if (!st.tex) continue; }
        gfx_draw(&st, vb + seg[i].first, seg[i].n); }
    gfx_flush(); }
