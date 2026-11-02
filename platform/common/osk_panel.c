/* Text entry for platforms without a system keyboard dialog (PC: Windows, Steam Deck / Linux): the game's on-screen keyboard
 * requests (sceUtilityOsk, hle.c -> rs_osk_begin / rs_osk_poll) become a panel over the game with the field's title and the text
 * being typed on the PC keyboard (SDL text input, platform/desktop/main.c feeds it).  Enter accepts, Escape cancels.
 * Fields whose title mentions a password show dots.  RS_OSK_TEXT="first|second|..." (tests) answers the requests in turn. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "psp_impl.h"
#include "overlay_ui.h"

static volatile int on, result;          /* result: 0 typing, 1 entered, -1 cancelled */
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
    result = 0; on = 1; fprintf(stderr, "[OSK] '%s' (keyboard)\n", title_utf8); return 1; }
int rs_oskpanel_poll(u16 *out, int max_len){
    if (!on) return -1;
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
    const float x0 = 40, y0 = 90, x1 = 440, y1 = 182;
    ov_box(x0, y0, x1, y1);
    ov_text(x0 + 12, y0 + 8, 0.5f, ov_c(255, 255, 255, 1), title_utf8[0] ? title_utf8 : "Enter text");
    char b[600]; int o = 0;
    for (int i = 0; i < len && o < 590; i++) { u16 c = text[i]; b[o++] = secret ? '*' : (char)(c < 128 ? c : '?'); }
    b[o++] = '_'; b[o] = 0;
    ov_entry(x0 + 10, y0 + 32, x1 - 10, y0 + 58, "", 1);
    float w = ov_text_w(b, 0.48f); const char *show = b; while (w > x1 - x0 - 40 && *show) { show++; w = ov_text_w(show, 0.48f); }
    ov_text(x0 + 20, y0 + 36, 0.48f, ov_c(255, 255, 255, 1), show);
    ov_text(x0 + 12, y1 - 20, 0.4f, ov_c(170, 190, 205, 1), "Type on the keyboard.   Enter: accept    Esc: cancel    Backspace: delete");
}
