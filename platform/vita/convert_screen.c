/* Start-up media screen (every boot): checks the converted audio/video (platform/common/convert.c), converts whatever is missing or
 * out of date with a progress display, then returns so the game can start.  Drawn with GXM over the game's own main-menu backdrop
 * (BFF_MAINMENU.GUI: red_schematics_1/2), logo (menu_logos) and blue dialog box (box_elements), in the game's font (FONTS.ASR),
 * all read from the user's game files. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <psp2/ctrl.h>
#include <psp2/kernel/threadmgr.h>
#include <psp2/kernel/processmgr.h>
#include <psp2/appmgr.h>
#include "gxm_core.h"
#include "convert.h"
#include "asura_tex.h"
#include "vfs.h"
#include "game_ui.h"

#define C_CYAN   0xFFE8C850u     /* 0xAABBGGRR */
#define C_WHITE  0xFFFFFFFFu
#define C_DIM    0xFFB8B0A8u
#define C_RED    0xFF5060F0u
#define C_PANEL  0xD8181010u
#define C_TRACK  0xFF302018u

static gxm_tex_t bg[2], logo, box, fpage; static int have_bg, have_logo, have_box;
static gfont_t font;                                       /* Franklin Gothic Medium Cond_13: the game's menu face */

static void load_art(const char *game_root){
    char p[1100];
    if (!strcmp(game_root, "iso:")) { if (!vfs_iso_resolve("PSP_GAME/USRDIR/GUIMENU/BFF_MAINMENU.GUI", p, sizeof p)) return; }
    else snprintf(p, sizeof p, "%s/PSP_GAME/USRDIR/GUIMENU/BFF_MAINMENU.GUI", game_root);
    uint32_t *px; int w, h;
    if (!asura_load_texture(p, "red_schematics_1.tga", &px, &w, &h)) { have_bg += !gxm_tex_rgba(&bg[0], px, w, h, 1); free(px); }
    if (!asura_load_texture(p, "red_schematics_2.tga", &px, &w, &h)) { have_bg += !gxm_tex_rgba(&bg[1], px, w, h, 1); free(px); }
    if (!asura_load_texture(p, "menu_logos.tga", &px, &w, &h)) { have_logo = !gxm_tex_rgba(&logo, px, w, h, 1); free(px); }
    if (!asura_load_texture(p, "box_elements.tga", &px, &w, &h)) { have_box = !gxm_tex_rgba(&box, px, w, h, 1); free(px); }
    if (!strcmp(game_root, "iso:")) { if (!vfs_iso_resolve("PSP_GAME/USRDIR/GRAPHICS/FONTS.ASR", p, sizeof p)) return; }
    else snprintf(p, sizeof p, "%s/PSP_GAME/USRDIR/GRAPHICS/FONTS.ASR", game_root);
    if (!rs_game_font_load_path(&font, p, 13) && gxm_tex_rgba(&fpage, font.rgba, font.pw, font.ph, 1)) font.ok = 0;
    free(font.rgba); font.rgba = NULL; }

/* text: the game's font (k = size relative to the game's own 21 px menu text at 480 x 272; 2 = the same size on this screen), else
 * the built-in one */
static float text_w(const char *s, float k){
    if (!font.ok) return ui_text_width(s, k * 0.5f);
    float w = 0; for (; *s; s++) w += font.g[(unsigned char)*s].w * k; return w; }
static void text(float x, float y, float k, uint32_t c, const char *s){
    if (!font.ok) { ui_text(x, y, k * 0.5f, c, s); return; }
    float iw = 1.0f / font.pw, ih = 1.0f / font.ph, h = (float)font.height;
    for (; *s; s++) { const gfont_glyph_t *g = &font.g[(unsigned char)*s]; if (g->w <= 0) continue;
        if (*s != ' ') ui_quad(&fpage, x, y, g->w * k, h * k, g->u * iw, g->v * ih, (g->u + g->w) * iw, (g->v + h) * ih, c);
        x += g->w * k; } }
/* the game's blue dialog box, nine-sliced at twice its size */
static void panel(float x, float y, float w, float h){
    if (!have_box) { ui_rect(x, y, w, h, C_PANEL); ui_rect(x, y, w, 2, C_CYAN); ui_rect(x, y + h - 2, w, 2, C_CYAN); return; }
    const float b = 14, s = 2, sx = GUI_BOX_X, sy = GUI_BOX_Y, sw = GUI_BOX_W, sh = GUI_BOX_H, it = 1 / 256.0f;
    float xs[4] = {x, x + b * s, x + w - b * s, x + w}, ys[4] = {y, y + b * s, y + h - b * s, y + h};
    float us[4] = {sx, sx + b, sx + sw - b, sx + sw}, vs[4] = {sy, sy + b, sy + sh - b, sy + sh};
    ui_rect(x + 4, y + 4, w - 8, h - 8, 0xFF402810u);
    for (int j = 0; j < 3; j++) for (int i = 0; i < 3; i++)
        ui_quad(&box, xs[i], ys[j], xs[i + 1] - xs[i], ys[j + 1] - ys[j], us[i] * it, vs[j] * it, us[i + 1] * it, vs[j + 1] * it, C_WHITE); }

static void draw_backdrop(void){
    if (have_bg == 2) {      /* the menu backdrop: 256 + 224 px wide, 236 rows, stretched to the screen as the menu does */
        float sx = GXM_W / 480.0f;
        ui_quad(&bg[0], 0, 0, 256 * sx, GXM_H, 0, 0, 1, 236 / 256.0f, C_WHITE);
        ui_quad(&bg[1], 256 * sx, 0, 224 * sx, GXM_H, 0, 0, 224 / 256.0f, 236 / 256.0f, C_WHITE); }
    ui_rect(0, 0, GXM_W, GXM_H, 0x70000000u);
    if (have_logo) { float lw = 201 * 1.9f, lh = 79 * 1.9f; ui_quad(&logo, (GXM_W - lw) / 2, 40, lw, lh, 0, 1 / 256.0f, 201 / 256.0f, 80 / 256.0f, C_WHITE); } }

static void centered(float y, float k, uint32_t c, const char *s){ text((GXM_W - text_w(s, k)) / 2, y, k, c, s); }

static uint64_t free_space(void){
    uint64_t max = 0, fr = 0; if (sceAppMgrGetDevInfo("ux0:", &max, &fr) < 0) return 0; return fr; }

/* 0: media ready; 2: ready after converting (the caller restarts the game: hours of decoding leave the address space too fragmented
 * for the renderer's 1024 x 1024 render target); 1: the player chose to go on without converted media; -1: no conversion possible */
int rs_convert_screen(const char *game_root, const char *out_dir){
    load_art(game_root);
    if (rs_convert_start(game_root, out_dir, 3, free_space())) return -1;
    uint64_t t0 = sceKernelGetProcessTimeWide(), done_at = 0; int choice = 0, worked = 0; unsigned prev = 0;
    for (;;) {
        rs_conv_status_t s; rs_convert_status(&s); uint64_t now = sceKernelGetProcessTimeWide(); worked |= s.phase == RS_CONV_CONVERTING;
        SceCtrlData pad; memset(&pad, 0, sizeof pad); sceCtrlPeekBufferPositive(0, &pad, 1); unsigned pressed = pad.buttons & ~prev; prev = pad.buttons;

        gxm_begin_frame(0xFF000000u);
        draw_backdrop();
        float px = 150, py = 232, pw = GXM_W - 300, ph = 240;
        panel(px, py, pw, ph);
        centered(py + 18, 2.0f, C_WHITE, "PREPARING GAME MEDIA");
        const char *line = "Checking converted audio and video...";
        if (s.phase == RS_CONV_CONVERTING) line = "Converting audio and video for PS Vita (first start only)";
        else if (s.phase == RS_CONV_DONE) line = worked ? "All media ready - restarting the game" : "All media ready";
        else if (s.phase == RS_CONV_FAILED) line = "Media conversion stopped";
        centered(py + 62, 1.3f, s.phase == RS_CONV_FAILED ? C_RED : C_DIM, line);
        float bx = px + 40, by = py + 104, bw = pw - 80, bh = 16;
        double f = s.phase == RS_CONV_DONE ? 1.0 : (s.work_total ? (double)s.work_done / (double)s.work_total : 0.0);
        if (s.phase == RS_CONV_CHECKING) f = 0;
        ui_rect(bx, by, bw, bh, C_TRACK); ui_rect(bx, by, (float)(bw * f), bh, C_CYAN);
        char t[160];
        snprintf(t, sizeof t, "%d of %d files ready", s.files_ok, s.files_total); text(bx, by + 24, 1.3f, C_DIM, t);
        snprintf(t, sizeof t, "%d%%", (int)(f * 100.0 + 0.5)); text(bx + bw - text_w(t, 1.3f), by + 24, 1.3f, C_WHITE, t);
        if (s.phase == RS_CONV_CONVERTING) { float y = by + 54; for (int i = 0; i < 4; i++) if (s.current[i][0]) { text(bx, y, 1.1f, C_DIM, s.current[i]); y += 22; } }
        if (s.phase == RS_CONV_FAILED) {
            text(bx, by + 54, 1.1f, C_WHITE, s.message);
            centered(py + ph - 40, 1.3f, C_CYAN, "X  Retry          O  Start without converted media"); }
        gxm_end_frame();

        if (s.phase == RS_CONV_DONE) { if (!done_at) done_at = now; if (now - done_at > (worked ? 1500000u : 300000u) && now - t0 > 900000) return worked ? 2 : 0; }  /* keep it on screen briefly */
        if (s.phase == RS_CONV_FAILED) {
            if (pressed & SCE_CTRL_CROSS) { if (rs_convert_start(game_root, out_dir, 3, free_space())) return -1; t0 = now; done_at = 0; }
            else if (pressed & SCE_CTRL_CIRCLE) { choice = 1; return choice; } } } }
