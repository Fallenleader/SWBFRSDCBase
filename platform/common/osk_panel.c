/* Text entry for platforms without a system keyboard dialog (PC: Windows, Steam Deck / Linux; the PS5 when its own keyboard
 * dialog cannot open): the game's on-screen keyboard requests (sceUtilityOsk, hle.c -> rs_osk_begin / rs_osk_poll) become a panel
 * over the game with the field's title, the text, and a keyboard of keys for a controller:
 *   D-pad / left stick  move      Cross  type the key      Square  delete      Triangle  capitals      Start  done      Circle  cancel
 * A PC keyboard types directly (SDL text input, platform/desktop/main.c feeds it): Enter done, Escape cancel, Backspace delete.
 * Fields whose title mentions a password show stars.  RS_OSK_TEXT="first|second|..." (tests) answers the requests in turn. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "psp_impl.h"
#include "overlay_ui.h"

static volatile int on, result;          /* result: 0 typing, 1 entered, -1 cancelled */
/* the controller keyboard: 4 rows of 10 keys, then Caps / Space / Delete / Done */
static const char *const KEYS[4] = {"1234567890", "qwertyuiop", "asdfghjkl-", "zxcvbnm_.@"};
static int kx, ky, caps; static u32 kprev = 0xFFFFFFFFu;
typedef struct { u32 buttons; u8 lx, ly, rx, ry; } rs_pad_t;
extern void rs_backend_read_pad(rs_pad_t *p);
static u16 text[512]; static int len, maxlen, secret; static char title_utf8[256];

static int is_secret(const u16 *t){ char b[128]; int i = 0; for (; t[i] && i < 127; i++) b[i] = (char)(t[i] < 128 ? (t[i] | 0x20) : '?'); b[i] = 0; return strstr(b, "password") != 0 || strstr(b, "passwort") != 0 || strstr(b, "mot de passe") != 0; }

int rs_oskpanel_begin(const u16 *title, const u16 *initial, int max_len){
    static char *script; static char *next;
    if (!script) { const char *e = getenv("RS_OSK_TEXT"); script = strdup(e ? e : ""); next = e ? script : 0; }
    len = 0; maxlen = max_len > 511 ? 511 : max_len; secret = is_secret(title);
    while (initial[len] && len < maxlen) { text[len] = initial[len]; len++; } text[len] = 0;
    { int o = 0; for (int i = 0; title[i] && o < 250; i++) title_utf8[o++] = (char)(title[i] < 128 ? title[i] : '?'); title_utf8[o] = 0; }
    if (next) {                                              /* scripted answer */
        char *bar = strchr(next, '|'); size_t n = bar ? (size_t)(bar - next) : strlen(next);
        len = 0; for (size_t i = 0; i < n && len < maxlen; i++) text[len++] = (u8)next[i]; text[len] = 0;
        next = bar ? bar + 1 : next + n; result = 1; on = 1; fprintf(stderr, "[OSK] '%s': scripted answer\n", title_utf8); return 1; }
    result = 0; on = 1; kx = ky = 0; kprev = 0xFFFFFFFFu; fprintf(stderr, "[OSK] '%s' (keyboard)\n", title_utf8); return 1; }
static void pad_step(void){
    rs_pad_t p; rs_backend_read_pad(&p); u32 b = p.buttons;
    if (p.ly < 50) b |= 0x10; else if (p.ly > 206) b |= 0x40;
    if (p.lx < 50) b |= 0x80; else if (p.lx > 206) b |= 0x20;
    if (kprev == 0xFFFFFFFFu) { kprev = b; return; }                     /* the press that opened it */
    u32 e = b & ~kprev; kprev = b;
    if (e & 0x10) ky = (ky + 4) % 5; if (e & 0x40) ky = (ky + 1) % 5;
    int w = ky < 4 ? 10 : 4;
    if (e & 0x80) kx = (kx + w - 1) % w; if (e & 0x20) kx = (kx + 1) % w;
    if (kx >= w) kx = w - 1;
    if (e & 0x4000) {
        if (ky < 4) { char c = KEYS[ky][kx]; if (caps && c >= 'a' && c <= 'z') c -= 32; if (len < maxlen) { text[len++] = (u8)c; text[len] = 0; } }
        else if (kx == 0) caps = !caps; else if (kx == 1) { if (len < maxlen) { text[len++] = ' '; text[len] = 0; } }
        else if (kx == 2) { if (len) text[--len] = 0; } else result = 1; }
    if (e & 0x8000) { if (len) text[--len] = 0; }
    if (e & 0x1000) caps = !caps;
    if (e & 0x0008) result = 1;
    if (e & 0x2000) result = -1; }
int rs_oskpanel_poll(u16 *out, int max_len){
    if (!on) return -1;
    if (!result) pad_step();
    if (!result) return 0;
    int n = 0; while (n < len && n < max_len - 1) { out[n] = text[n]; n++; } out[n] = 0;
    int r = result; on = 0; return r; }
int rs_oskpanel_active(void){ return on && !result; }
/* the platform's keyboard */
void rs_oskpanel_char(unsigned ch){ if (on && !result && ch >= 32 && len < maxlen) { text[len++] = (u16)ch; text[len] = 0; } }
void rs_oskpanel_backspace(void){ if (on && !result && len > 0) text[--len] = 0; }
void rs_oskpanel_finish(int ok){ if (on && !result) result = ok ? 1 : -1; }

void rs_oskpanel_draw(void){
    if (!on || result) return;
    ov_rect(0, 0, 480, 272, ov_c(0, 0, 0, 0.55f));
    const float x0 = 40, y0 = 40, x1 = 440, y1 = 232;
    ov_box(x0, y0, x1, y1);
    ov_text(x0 + 12, y0 + 8, 0.5f, ov_c(255, 255, 255, 1), title_utf8[0] ? title_utf8 : "Enter text");
    char b[600]; int o = 0;
    for (int i = 0; i < len && o < 590; i++) { u16 c = text[i]; b[o++] = secret ? '*' : (char)(c < 128 ? c : '?'); }
    b[o++] = '_'; b[o] = 0;
    ov_entry(x0 + 10, y0 + 32, x1 - 10, y0 + 58, "", 1);
    float w = ov_text_w(b, 0.48f); const char *show = b; while (w > x1 - x0 - 40 && *show) { show++; w = ov_text_w(show, 0.48f); }
    ov_text(x0 + 20, y0 + 36, 0.48f, ov_c(255, 255, 255, 1), show);
    /* the controller keyboard */
    float gy = y0 + 66, kw = 34, kh = 20, gx = x0 + (x1 - x0 - 10 * kw) / 2;
    for (int r = 0; r < 5; r++) {
        int w = r < 4 ? 10 : 4; float wide = r < 4 ? kw : kw * 2.5f;
        for (int k = 0; k < w; k++) {
            float bx = gx + k * wide, by = gy + r * (kh + 2); int f = r == ky && k == kx;
            ov_rect(bx + 1, by, bx + wide - 1, by + kh, f ? ov_c(70, 160, 220, 0.95f) : ov_c(20, 40, 60, 0.85f));
            char lab[8]; if (r < 4) { lab[0] = KEYS[r][k]; if (caps && lab[0] >= 'a' && lab[0] <= 'z') lab[0] -= 32; lab[1] = 0; }
            else snprintf(lab, sizeof lab, "%s", k == 0 ? (caps ? "abc" : "ABC") : k == 1 ? "Space" : k == 2 ? "Del" : "Done");
            ov_text(bx + (wide - ov_text_w(lab, 0.42f)) / 2, by + 3, 0.42f, ov_c(255, 255, 255, 1), lab); } }
    ov_text(x0 + 12, y1 - 18, 0.36f, ov_c(170, 190, 205, 1), "X type   [] delete   /\\ caps   Start done   O cancel   (keyboard: type, Enter)");
}
