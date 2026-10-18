/* Native menu overlays (see overlay_ui.h).  Shapes go into one untextured batch and text into one batch textured with the bitmap
 * font (ui_font.h, uploaded through the renderer's texture-decode path); both are drawn into the frame buffer that is about to be
 * shown (gu_native.c disp_job), shapes first. */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "gfx.h"
#include "overlay_ui.h"
#include "ui_font.h"

#define MAXV 8000
static gfx_vtx_t vs[MAXV], vt[MAXV]; static int nvs, nvt;

col_t ov_c(int r, int g, int b, float a){ col_t c = {r / 255.0f, g / 255.0f, b / 255.0f, a}; return c; }
static void V(gfx_vtx_t *o, float x, float y, col_t c, float u, float v){
    o->x = x * (2.0f / 512) - 1; o->y = y * (2.0f / 512) - 1; o->z = 0; o->w = 1; o->u = u; o->v = v; o->r = c.r; o->g = c.g; o->b = c.b; o->a = c.a; o->f = 1; }
static void quad_into(gfx_vtx_t *buf, int *n, float x0, float y0, float x1, float y1, col_t tl, col_t tr, col_t bl, col_t br, float u0, float v0, float u1, float v1){
    if (*n + 6 > MAXV) return;
    gfx_vtx_t *o = buf + *n;
    V(o, x0, y0, tl, u0, v0); V(o + 1, x1, y0, tr, u1, v0); V(o + 2, x0, y1, bl, u0, v1);
    V(o + 3, x1, y0, tr, u1, v0); V(o + 4, x1, y1, br, u1, v1); V(o + 5, x0, y1, bl, u0, v1); *n += 6; }
void ov_quad(float x0, float y0, float x1, float y1, col_t tl, col_t tr, col_t bl, col_t br, float u0, float v0, float u1, float v1){ quad_into(vs, &nvs, x0, y0, x1, y1, tl, tr, bl, br, u0, v0, u1, v1); }
void ov_rect(float x0, float y0, float x1, float y1, col_t c){ ov_quad(x0, y0, x1, y1, c, c, c, c, 0, 0, 0, 0); }
void ov_vgrad(float x0, float y0, float x1, float y1, col_t t, col_t b){ ov_quad(x0, y0, x1, y1, t, t, b, b, 0, 0, 0, 0); }
void ov_frame(float x0, float y0, float x1, float y1, float w, col_t c){ ov_rect(x0, y0, x1, y0 + w, c); ov_rect(x0, y1 - w, x1, y1, c); ov_rect(x0, y0, x0 + w, y1, c); ov_rect(x1 - w, y0, x1, y1, c); }
void ov_tri(float ax, float ay, float bx, float by, float cx, float cy, col_t c){
    if (nvs + 3 > MAXV) return;
    V(vs + nvs, ax, ay, c, 0, 0); V(vs + nvs + 1, bx, by, c, 0, 0); V(vs + nvs + 2, cx, cy, c, 0, 0); nvs += 3; }
void ov_ring(float cx, float cy, float r0, float r1, col_t c){
    for (int i = 0; i < 16; i++) { float a0 = i * 6.2831853f / 16, a1 = (i + 1) * 6.2831853f / 16;
        float x00 = cx + cosf(a0) * r0, y00 = cy + sinf(a0) * r0, x01 = cx + cosf(a0) * r1, y01 = cy + sinf(a0) * r1;
        float x10 = cx + cosf(a1) * r0, y10 = cy + sinf(a1) * r0, x11 = cx + cosf(a1) * r1, y11 = cy + sinf(a1) * r1;
        ov_tri(x00, y00, x01, y01, x10, y10, c); ov_tri(x10, y10, x01, y01, x11, y11, c); } }
float ov_text_w(const char *s, float sc){ float w = 0; for (; *s; s++) { int ch = (unsigned char)*s; if (ch < 32 || ch > 126) ch = '?'; w += ui_font_glyphs[ch - 32].adv * sc; } return w; }
void ov_text(float x, float y, float sc, col_t c, const char *s){
    for (; *s; s++) { int ch = (unsigned char)*s; if (ch < 32 || ch > 126) ch = '?'; const ui_glyph_t *g = &ui_font_glyphs[ch - 32];
        if (ch != ' ') quad_into(vt, &nvt, x + g->ox * sc, y + g->oy * sc, x + (g->ox + g->w) * sc, y + (g->oy + g->h) * sc, c, c, c, c,
                                 (float)g->x / UI_FONT_W, (float)g->y / UI_FONT_H, (float)(g->x + g->w) / UI_FONT_W, (float)(g->y + g->h) / UI_FONT_H);
        x += g->adv * sc; } }
/* a list entry of the game's menus: dark green with grey text, or (with the cursor) the bright bar with a light border, white text */
void ov_entry(float x0, float y0, float x1, float y1, const char *label, int focused){
    if (focused) { ov_vgrad(x0, y0, x1, y1, ov_c(26, 182, 150, 1), ov_c(10, 126, 92, 1)); ov_frame(x0, y0, x1, y1, 1, ov_c(156, 238, 186, 1)); }
    else { ov_vgrad(x0, y0, x1, y1, ov_c(12, 84, 58, 1), ov_c(9, 64, 43, 1)); ov_frame(x0, y0, x1, y1, 1, ov_c(8, 100, 72, 1)); }
    float sc = 0.5f; ov_text((x0 + x1 - ov_text_w(label, sc)) / 2, y0 + (y1 - y0 - UI_FONT_ASC * sc) / 2 - 2, sc, focused ? ov_c(255, 255, 255, 1) : ov_c(150, 172, 160, 1), label); }

static u32 font_hash(void *ud){ (void)ud; return 0x5EED1234u; }
static void font_decode(u32 *dst, void *ud){ (void)ud; for (int i = 0; i < UI_FONT_W * UI_FONT_H; i++) dst[i] = 0x00FFFFFFu | (u32)ui_font_alpha[i] << 24; }

void rs_overlay_draw(u32 addr, u32 stride, u32 fmt){                /* gu_native.c: each finished frame, renderer thread */
    nvs = nvt = 0;
    rs_picker_draw(); rs_savemgr_draw();
    if (!nvs && !nvt) return;
    gfx_state_t st; memset(&st, 0, sizeof st);
    st.fbaddr = gfx_vram(addr); st.fbfmt = (int)fmt; st.fbstride = stride ? (int)stride : 512;
    st.sx1 = 0; st.sy1 = 0; st.sx2 = 479; st.sy2 = 271; st.cmr = st.cmg = st.cmb = 1;
    st.blend = 1; st.bsrc = 2; st.bdst = 3; st.uvs[0] = st.uvs[1] = 1;
    if (nvs) gfx_draw(&st, vs, nvs);
    if (nvt) {
        static gtex_key_t key = {0x0BF00000u, UI_FONT_W, UI_FONT_H, 7, 0, UI_FONT_W, 0x5F0A7u}; gtex_src_t src = {font_hash, font_decode, &key};
        st.texid = gfx_tex_acquire(&key, &src, st.uvs); st.tex = st.texid != 0; st.trgba = 1; st.tfilter = 1; st.tclampu = st.tclampv = 1; st.tenv = 0xFFFFFF;
        if (st.tex) gfx_draw(&st, vt, nvt); }
    gfx_flush(); }
