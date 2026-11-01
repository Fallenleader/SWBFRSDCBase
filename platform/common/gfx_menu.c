/* Graphics Settings: a panel over the Options menu (opened from its "Graphics Settings" entry, renderer_option.c) with carousels in the
 * style of the game's own (a bar per setting, < value > arrows):
 *   Renderer               OpenGL / Vulkan (PS5) ; OpenGL / Vulkan / DirectX 12 (Windows)          -> RS_RENDERER
 *   Ray Tracing Features   Off / On                                                                 -> RS_RT
 *   Resolution             720p / 1080p / 1440p / 4K                                                -> RS_RESOLUTION, RS_RES_SCALE
 *                          (the internal resolution: 1440x816, 1920x1088, 2880x1632, 3840x2176; PS5: also the video output mode)
 * Up / Down choose, Left / Right change, Cross or Circle close.  Changes go to settings.txt when the panel closes and apply the next
 * time the game starts (the renderer, its surfaces and the video mode are set up before anything is drawn).
 * Drawn by the overlay pass (overlay_ui.c); while it is up the game gets no input (rs_gfxmenu_pad, as the save manager). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "psp_impl.h"
#include "guest.h"
#include "overlay_ui.h"

extern const char *rs_platform_setting(const char *key);
extern int rs_platform_setting_store(const char *key, const char *value);
extern int rs_setting_int(const char *k, int d);
typedef struct { u32 buttons; u8 lx, ly, rx, ry; } rs_pad_t;
extern void rs_backend_read_pad(rs_pad_t *p);

typedef struct { const char *label; int n, cur, orig; const char *names[4], *vals[4]; } row_t;
static volatile int active; static row_t rows[3]; static int nrows, sel; static u32 prev; static int suppress;

static int pick(const char *have, const row_t *r, int dflt){ if (have) for (int i = 0; i < r->n; i++) if (!strcmp(have, r->vals[i])) return i; return dflt; }
static void build(void){
    nrows = 0;
    {   row_t *r = &rows[nrows++]; memset(r, 0, sizeof *r); r->label = "Renderer";
        r->names[0] = "OpenGL"; r->vals[0] = "opengl"; r->names[1] = "Vulkan"; r->vals[1] = "vulkan"; r->n = 2;
#if defined(RS_DESKTOP) && defined(_WIN32)
        r->names[2] = "DirectX 12"; r->vals[2] = "dx12"; r->n = 3;
#endif
        const char *v = rs_platform_setting("RS_RENDERER"); if (v && !strcmp(v, "1")) v = "vulkan";
        r->cur = pick(v, r, 0); }
    {   row_t *r = &rows[nrows++]; memset(r, 0, sizeof *r); r->label = "Ray Tracing Features";
        r->names[0] = "Off"; r->vals[0] = "0"; r->names[1] = "On"; r->vals[1] = "1"; r->n = 2; r->cur = rs_setting_int("RS_RT", 1) ? 1 : 0; }
    {   row_t *r = &rows[nrows++]; memset(r, 0, sizeof *r); r->label = "Resolution";
        static const char *nm[4] = {"720p", "1080p", "1440p", "4K"}, *vl[4] = {"720", "1080", "1440", "2160"};
        for (int i = 0; i < 4; i++) { r->names[i] = nm[i]; r->vals[i] = vl[i]; } r->n = 4;
        const char *v = rs_platform_setting("RS_RESOLUTION"); int c = pick(v, r, -1);
        if (c < 0) { int s = rs_setting_int("RS_RES_SCALE", 2); c = s <= 3 ? 0 : s == 4 ? 1 : s <= 6 ? 2 : 3; }
        r->cur = c; }
    for (int i = 0; i < nrows; i++) rows[i].orig = rows[i].cur; }

static void store(void){
    const row_t *re = &rows[0], *rt = &rows[1], *rz = &rows[2];
    if (re->cur != re->orig) rs_platform_setting_store("RS_RENDERER", re->vals[re->cur]);
    if (rt->cur != rt->orig) rs_platform_setting_store("RS_RT", rt->vals[rt->cur]);
    if (rz->cur != rz->orig) {
        static const char *scale[4] = {"3", "4", "6", "8"};
        rs_platform_setting_store("RS_RESOLUTION", rz->vals[rz->cur]);
        rs_platform_setting_store("RS_RES_SCALE", scale[rz->cur]);
#ifdef RS_PS5
        rs_platform_setting_store("RS_OUTPUT", rz->vals[rz->cur]);                  /* the video output mode */
#endif
    }
    for (int i = 0; i < nrows; i++) if (rows[i].cur != rows[i].orig)
        fprintf(stderr, "[GFXMENU] %s: %s (from the next start)\n", rows[i].label, rows[i].names[rows[i].cur]); }

int rs_gfxmenu_active(void){ return active; }
void rs_gfxmenu_open(void){ if (active) return; build(); sel = 0; prev = 0xFFFFFFFFu; active = 1; suppress = 1; fprintf(stderr, "[GFXMENU] opened\n"); }

/* every frame after the pad is read (game thread): the panel's input */
void rs_gfxmenu_poll(void){
    if (!active) return;
    rs_pad_t pd; rs_backend_read_pad(&pd); u32 b = pd.buttons;
    if (pd.ly < 50) b |= 0x10; else if (pd.ly > 206) b |= 0x40;
    if (pd.lx < 50) b |= 0x80; else if (pd.lx > 206) b |= 0x20;
    if (prev == 0xFFFFFFFFu) { prev = b; return; }                       /* the press that opened it is still down */
    u32 e = b & ~prev; prev = b;
    if (e & 0x10) sel = (sel + nrows - 1) % nrows;
    if (e & 0x40) sel = (sel + 1) % nrows;
    row_t *r = &rows[sel];
    if (e & 0x80) r->cur = (r->cur + r->n - 1) % r->n;
    if (e & 0x20) r->cur = (r->cur + 1) % r->n;
    if (e & (0x4000 | 0x2000)) { store(); active = 0; } }

/* the game gets no input while the panel is up, nor from the press that closes it until it is released */
void rs_gfxmenu_pad(void){
    if (!active && !suppress) return;
    u32 btn = GU32(GIMG(0x08B46204)), ax = GU32(GIMG(0x08B46200)); if (!btn || !ax) return;
    int any = 0; for (u32 k = 449; k <= 464; k++) { any |= GU8(btn + k) != 0; GU8(btn + k) = 0; }
    float sx = GF32(ax + 12), sy = GF32(ax + 16);
    for (u32 i = 3; i <= 6; i++) GF32(ax + 4 * i) = 0;
    if (!active && !any && sx * sx + sy * sy < 0.04f) suppress = 0; }

/* drawing (renderer thread) */
void rs_gfxmenu_draw(void){
    if (!active) return;
    ov_rect(0, 0, 480, 272, ov_c(0, 0, 0, 0.6f));
    const float x0 = 70, y0 = 50, x1 = 410, y1 = 222;
    ov_box(x0, y0, x1, y1);
    ov_text(x0 + 12, y0 + 6, 0.62f, ov_c(255, 255, 255, 1), "Graphics Settings");
    for (int i = 0; i < nrows; i++) {
        const row_t *r = &rows[i]; float ey0 = y0 + 34 + i * 32, ey1 = ey0 + 26; int f = i == sel;
        ov_entry(x0 + 10, ey0, x1 - 10, ey1, "", f);
        col_t main = f ? ov_c(255, 255, 255, 1) : ov_c(200, 214, 224, 1);
        float ty = ey0 + (26 - ov_text_h(0.45f)) / 2;
        ov_text(x0 + 22, ty, 0.45f, main, r->label);
        /* the carousel: < value > in the right half, the arrows lit on the chosen bar */
        float cx0 = x0 + 200, cx1 = x1 - 22, cy = (ey0 + ey1) / 2; col_t ar = f ? ov_c(120, 210, 255, 1) : ov_c(110, 130, 145, 1);
        ov_tri(cx0, cy, cx0 + 7, cy - 6, cx0 + 7, cy + 6, ar);
        ov_tri(cx1, cy, cx1 - 7, cy - 6, cx1 - 7, cy + 6, ar);
        const char *v = r->names[r->cur]; ov_text((cx0 + cx1 - ov_text_w(v, 0.45f)) / 2, ty, 0.45f, main, v); }
    int changed = 0; for (int i = 0; i < nrows; i++) changed |= rows[i].cur != rows[i].orig;
    ov_text(x0 + 14, y1 - 38, 0.4f, changed ? ov_c(240, 200, 120, 1) : ov_c(140, 160, 175, 1), "Changes apply the next time the game starts.");
    if (rows[1].cur && rows[2].cur == 3) ov_text(x0 + 14, y1 - 52, 0.4f, ov_c(140, 160, 175, 1), "Ray tracing at 4K: lower resolutions keep the frame rate up.");
    ov_text(x1 - 12 - ov_text_w("< > Change   X/O Close", 0.45f), y1 - 20, 0.45f, ov_c(220, 230, 225, 1), "< > Change   X/O Close"); }
