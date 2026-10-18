/* Start-up media screen (every boot): checks the converted audio/video (platform/common/convert.c), converts whatever is missing or
 * out of date with a progress display, then returns so the game can start.  Drawn with GXM over the game's own main-menu backdrop
 * (BFF_MAINMENU.GUI: red_schematics_1/2) and logo (menu_logos), read from the user's game files. */
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

#define C_CYAN   0xFFE8C850u     /* 0xAABBGGRR */
#define C_WHITE  0xFFFFFFFFu
#define C_DIM    0xFFB8B0A8u
#define C_RED    0xFF5060F0u
#define C_PANEL  0xD8181010u
#define C_TRACK  0xFF302018u

static gxm_tex_t bg[2], logo; static int have_bg, have_logo;

static void load_art(const char *game_root){
    char p[1100];
    if (!strcmp(game_root, "iso:")) { if (!vfs_iso_resolve("PSP_GAME/USRDIR/GUIMENU/BFF_MAINMENU.GUI", p, sizeof p)) return; }
    else snprintf(p, sizeof p, "%s/PSP_GAME/USRDIR/GUIMENU/BFF_MAINMENU.GUI", game_root);
    uint32_t *px; int w, h;
    if (!asura_load_texture(p, "red_schematics_1.tga", &px, &w, &h)) { have_bg += !gxm_tex_rgba(&bg[0], px, w, h, 1); free(px); }
    if (!asura_load_texture(p, "red_schematics_2.tga", &px, &w, &h)) { have_bg += !gxm_tex_rgba(&bg[1], px, w, h, 1); free(px); }
    if (!asura_load_texture(p, "menu_logos.tga", &px, &w, &h)) { have_logo = !gxm_tex_rgba(&logo, px, w, h, 1); free(px); } }

static void draw_backdrop(void){
    if (have_bg == 2) {      /* the menu backdrop: 256 + 224 px wide, 236 rows, stretched to the screen as the menu does */
        float sx = GXM_W / 480.0f;
        ui_quad(&bg[0], 0, 0, 256 * sx, GXM_H, 0, 0, 1, 236 / 256.0f, C_WHITE);
        ui_quad(&bg[1], 256 * sx, 0, 224 * sx, GXM_H, 0, 0, 224 / 256.0f, 236 / 256.0f, C_WHITE); }
    ui_rect(0, 0, GXM_W, GXM_H, 0x70000000u);
    if (have_logo) { float lw = 201 * 1.9f, lh = 79 * 1.9f; ui_quad(&logo, (GXM_W - lw) / 2, 40, lw, lh, 0, 1 / 256.0f, 201 / 256.0f, 80 / 256.0f, C_WHITE); } }

static void centered(float y, float sc, uint32_t c, const char *s){ ui_text((GXM_W - ui_text_width(s, sc)) / 2, y, sc, c, s); }

static uint64_t free_space(void){
    uint64_t max = 0, fr = 0; if (sceAppMgrGetDevInfo("ux0:", &max, &fr) < 0) return 0; return fr; }

int rs_convert_screen(const char *game_root, const char *out_dir){
    load_art(game_root);
    if (rs_convert_start(game_root, out_dir, 3, free_space())) return -1;
    uint64_t t0 = sceKernelGetProcessTimeWide(), done_at = 0; int choice = 0; unsigned prev = 0;
    for (;;) {
        rs_conv_status_t s; rs_convert_status(&s); uint64_t now = sceKernelGetProcessTimeWide();
        SceCtrlData pad; memset(&pad, 0, sizeof pad); sceCtrlPeekBufferPositive(0, &pad, 1); unsigned pressed = pad.buttons & ~prev; prev = pad.buttons;

        gxm_begin_frame(0xFF000000u);
        draw_backdrop();
        float px = 150, py = 238, pw = GXM_W - 300, ph = 230;
        ui_rect(px, py, pw, ph, C_PANEL); ui_rect(px, py, pw, 2, C_CYAN); ui_rect(px, py + ph - 2, pw, 2, C_CYAN);
        centered(py + 20, 0.95f, C_WHITE, "PREPARING GAME MEDIA");
        const char *line = "Checking converted audio and video...";
        if (s.phase == RS_CONV_CONVERTING) line = "Converting audio and video for PS Vita (first start only)";
        else if (s.phase == RS_CONV_DONE) line = "All media ready";
        else if (s.phase == RS_CONV_FAILED) line = "Media conversion stopped";
        centered(py + 58, 0.72f, s.phase == RS_CONV_FAILED ? C_RED : C_DIM, line);
        float bx = px + 40, by = py + 100, bw = pw - 80, bh = 16;
        double f = s.phase == RS_CONV_DONE ? 1.0 : (s.work_total ? (double)s.work_done / (double)s.work_total : 0.0);
        if (s.phase == RS_CONV_CHECKING) f = 0;
        ui_rect(bx, by, bw, bh, C_TRACK); ui_rect(bx, by, (float)(bw * f), bh, C_CYAN);
        char t[160];
        snprintf(t, sizeof t, "%d of %d files ready", s.files_ok, s.files_total); ui_text(bx, by + 28, 0.62f, C_DIM, t);
        snprintf(t, sizeof t, "%d%%", (int)(f * 100.0 + 0.5)); ui_text(bx + bw - ui_text_width(t, 0.62f), by + 28, 0.62f, C_WHITE, t);
        if (s.phase == RS_CONV_CONVERTING) { float y = by + 58; for (int i = 0; i < 4; i++) if (s.current[i][0]) { ui_text(bx, y, 0.55f, C_DIM, s.current[i]); y += 18; } }
        if (s.phase == RS_CONV_FAILED) {
            ui_text(bx, by + 58, 0.55f, C_WHITE, s.message);
            centered(py + ph - 34, 0.62f, C_CYAN, "X  Retry          O  Start without converted media"); }
        gxm_end_frame();

        if (s.phase == RS_CONV_DONE) { if (!done_at) done_at = now; if (now - done_at > 300000 && now - t0 > 900000) return 0; }  /* keep it on screen briefly */
        if (s.phase == RS_CONV_FAILED) {
            if (pressed & SCE_CTRL_CROSS) { if (rs_convert_start(game_root, out_dir, 3, free_space())) return -1; t0 = now; done_at = 0; }
            else if (pressed & SCE_CTRL_CIRCLE) { choice = 1; return choice; } } } }
