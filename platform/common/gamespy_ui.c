/* Online accounts on the RS server (tools/rsserver/rsmaster.py), every build: the game's GameSpy ID screens, changed.
 *
 *   Username   the "Nickname" field, renamed: the account's name, shown in online matches.
 *   Password   the "Email" field, renamed.  The game's GameSpy code wants an e-mail address, so it is sent as <password>@rs.id
 *              (rsmaster strips it and keeps only a salted hash); the screens' own e-mail check is passed the same way.
 *              The game's own Password field is hidden; the game hashes a fixed word there for the GameSpy login proof.
 *   Install id a random id made once per install (net.c, <data>/rs_install_id.txt), sent with every login and account creation;
 *              the server bans by it, and "I Forgot" finds the account by it.
 *   I Forgot   a new entry at the bottom of the Login menu (Login Using Existing / Create New GameSpy ID): asks the server for the
 *              account last used from this install.  Found: the Login screen opens with the Username filled in, and the
 *              password typed next becomes the account's new password (for 10 minutes).  None: the Create screen opens.
 *   Message of the day   what the server's motd.txt says, shown when the online menus start (the game fetches it from
 *              motd.gamespy.com = the RS server, net.c captures it; the original game fetched it but never showed it).
 * Text entry uses the platform's own keyboard (hle.c sceUtilityOsk -> rs_osk_begin: the Vita's IME, the PC keyboard panel, ...).
 *
 * Game data, changed when it is read (rs_patch_file):
 *   GUIMENU/BFF_MULTIPLAYER.GUI  MP_GameSpy_ChooseLoginOrCreate gets "I Forgot": a copy of MP_GPLogin's "login button" record (a
 *                                button that calls a command), calling RS.Forgot, going nowhere by itself; the two buttons above
 *                                move up to make room.  MP_GPLogin and MP_GPCreate lose W_TB_PasswordField (moved off screen and
 *                                taken out of the up/down links).
 *   MISC/MENU/MENU_AM.ASR        the texts: Email -> Username, the e-mail / password messages, "I Forgot".
 * Hooks (tools/dc/hooks.py): the GameSpy commands' registration (RS.Forgot added), the string variables' registration (where the
 * Nickname / Username buffers are), the login and create calls (username@rs.id, the fixed password), FE_LoadGamespyLoginInfo
 * (a recovered account goes into the fields after the profile's saved ones are loaded). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <stdint.h>
#include "psp_impl.h"
#if __has_include("guest.h")
#include "guest.h"
#else                                   /* PS Vita tree: guest addresses are native pointers */
#define GU16(a) (*(volatile uint16_t *)(uintptr_t)(uint32_t)(a))
#define GA(p)   ((uint32_t)(uintptr_t)(p))
#endif
#include "overlay_ui.h"

const char *rs_platform_data_dir(void);
#ifdef RS_GUEST64
u32 rs_fn_alias(void *fn);
#else                                   /* 32-bit (PS Vita): guest addresses are native pointers */
static u32 rs_fn_alias(void *fn){ return (u32)(uintptr_t)fn; }
static void *rs_guest_alloc(size_t size, size_t align){ (void)align; void *p = calloc(1, size + 16); return (void *)(((uintptr_t)p + 15) & ~(uintptr_t)15); }
#endif
int rs_net_recover(char *nick, int nn, char *user, int un);       /* net.c: 1 found, 0 none, -1 banned, -2 no server */

#define TXT_FORGOT 0x46525352u          /* "RSRF" */
#define ID_FORGOT  0xF6525357u          /* the I Forgot widget (above the page's other ids: the lowest is focused first) */
#define GAME_PASSWORD "RS"              /* rsmaster.py GAME_PASSWORD */
#define USER_SUFFIX "@rs.id"

/* ------------------------------------------------------------------ file helpers (as renderer_option.c) */
typedef struct { unsigned char *p; size_t n, cap; } buf_t;
static int load(const char *path, buf_t *b){
    FILE *f = fopen(path, "rb"); if (!f) return -1;
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    b->cap = (size_t)n + 8192; b->p = malloc(b->cap); b->n = b->p ? fread(b->p, 1, (size_t)n, f) : 0; fclose(f);
    return b->p && b->n == (size_t)n ? 0 : -1; }
static int save(const char *path, const buf_t *b){ FILE *f = fopen(path, "wb"); if (!f) return -1; size_t w = fwrite(b->p, 1, b->n, f); return fclose(f) == 0 && w == b->n ? 0 : -1; }
static u32 r32(const unsigned char *p){ u32 v; memcpy(&v, p, 4); return v; }
static void w32(unsigned char *p, u32 v){ memcpy(p, &v, 4); }
static void wf(unsigned char *p, float v){ memcpy(p, &v, 4); }
static int insert(buf_t *b, size_t off, const void *src, size_t n){
    if (b->n + n > b->cap) { size_t c = b->n + n + 8192; unsigned char *q = realloc(b->p, c); if (!q) return -1; b->p = q; b->cap = c; }
    memmove(b->p + off + n, b->p + off, b->n - off); memcpy(b->p + off, src, n); b->n += n; return 0; }
static void cut(buf_t *b, size_t off, size_t n){ memmove(b->p + off, b->p + off + n, b->n - off - n); b->n -= n; }
static long find(const unsigned char *p, size_t from, size_t to, const void *pat, size_t n){
    for (size_t i = from; i + n <= to; i++) if (!memcmp(p + i, pat, n)) return (long)i; return -1; }
static size_t pad4(size_t n){ return (n + 4) & ~(size_t)3; }
static long page(const buf_t *b, const char *name, u32 *size){
    for (size_t o = 8; o + 16 <= b->n; ) {
        u32 sz = r32(b->p + o + 4); if (sz < 16 || o + sz > b->n) return -1;
        if (!memcmp(b->p + o, "UIMP", 4) && !strcmp((const char *)b->p + o + 0x1c, name)) { *size = sz; return (long)o; }
        o += sz; }
    return -1; }
static size_t page_count_off(const buf_t *b, long pg){ return 0x1c + pad4(strlen((const char *)b->p + pg + 0x1c)) + 0x58; }
/* a top-level record of a page: its start (8 bytes before the 0x0b + name), the offset of its name's end */
static long record(const buf_t *b, long pg, u32 pgsz, const char *name, size_t *name_end){
    char pat[80]; size_t n = strlen(name); memcpy(pat, "\x0b\0\0\0", 4); memcpy(pat + 4, name, n + 1);
    long i = find(b->p, (size_t)pg, (size_t)pg + pgsz, pat, 4 + n + 1); if (i < 0) return -1;
    if (name_end) *name_end = (size_t)i + 4 + pad4(n);
    return i - 8; }
/* the end of a record: the next top-level widget record of the page (kind 3, type 2001..2010, then 0x0b) or the page's end */
static long record_end(const buf_t *b, size_t from, size_t to){
    for (size_t i = from; i + 12 <= to; i++)
        if (r32(b->p + i) == 3 && r32(b->p + i + 4) >= 2001 && r32(b->p + i + 4) <= 2010 && r32(b->p + i + 8) == 11) return (long)i;
    return -1; }

/* ------------------------------------------------------------------ the menu pages */
static int hide_password(buf_t *b, const char *pgname){
    u32 sz; long pg = page(b, pgname, &sz); if (pg < 0) return -1;
    size_t ne; long r = record(b, pg, sz, "W_TB_PasswordField", &ne); if (r < 0) return -1;
    u32 id = r32(b->p + ne + 28), up = r32(b->p + ne + 0x5c), down = r32(b->p + ne + 0x60);
    wf(b->p + ne + 16, -2000.0f); wf(b->p + ne + 20, -2000.0f);                      /* off screen */
    /* every link to it goes past it */
    static const char *const names[] = {"W_TB_NicknameField", "W_TB_EmailField", "login button", "W_CB_RememberPassword"};
    for (int i = 0; i < 4; i++) { size_t e; if (record(b, pg, sz, names[i], &e) < 0) continue;
        for (int k = 0; k < 4; k++) { u32 l = r32(b->p + e + 0x5c + 4 * k); if (l == id) w32(b->p + e + 0x5c + 4 * k, k == 0 ? up : k == 1 ? down : r32(b->p + ne + 0x5c + 4 * k)); } }
    w32(b->p + ne + 0x5c, 0); w32(b->p + ne + 0x60, 0);
    return 0; }

static int add_forgot(buf_t *b){
    u32 csz, lsz; long cp = page(b, "MP_GameSpy_ChooseLoginOrCreate", &csz), lp = page(b, "MP_GPLogin", &lsz);
    if (cp < 0 || lp < 0) return -1;
    /* the source: MP_GPLogin's "login button" (a button calling a command) */
    size_t sne; long src = record(b, lp, lsz, "login button", &sne); if (src < 0) return -1;
    long se = record_end(b, sne, (size_t)lp + lsz); if (se < 0) return -1;
    size_t len = (size_t)(se - src); unsigned char *c = malloc(len + 16); if (!c) return -1;
    memcpy(c, b->p + src, len); size_t ne = sne - (size_t)src;
    /* the command: the name at the record's end (zero padded in place) */
    {   static const char cmd[] = "Menus.GameSpyLogin"; long k = find(c, 0, len, cmd, sizeof cmd); if (k < 0) { free(c); return -1; }
        memset(c + k, 0, sizeof cmd - 1); memcpy(c + k, "RS.Forgot", 9);
        /* the button's target (the widget it goes to), 6 words before the command: itself (it stays) */
        if (k >= 24) w32(c + k - 24, ID_FORGOT); }
    /* the size of the menu's own buttons (the login button's images are 133.83 wide, its text 126.83; the menu's 182.13, 175.13) */
    for (size_t i = 0; i + 4 <= len; i++) { float v; memcpy(&v, c + i, 4);
        if (v > 133.82f && v < 133.84f) wf(c + i, 182.13f); else if (v > 126.82f && v < 126.84f) wf(c + i, 175.13f); }
    /* the label: the text id just before the font name */
    {   long f = find(c, 0, len, "\\fonts\\", 7); if (f < 4) { free(c); return -1; } w32(c + f - 4, TXT_FORGOT); }
    /* the page's two buttons */
    size_t lne, cne; if (record(b, cp, csz, "W_BU_StyleButton", &lne) < 0 || record(b, cp, csz, "W_BU_StyleButton 1", &cne) < 0) { free(c); return -1; }
    u32 id_login = r32(b->p + lne + 28), id_create = r32(b->p + cne + 28);
    float x = 0; memcpy(&x, b->p + lne + 16, 4);
    wf(b->p + lne + 20, 146.0f); wf(b->p + cne + 20, 180.0f);
    /* the widget flags: the login button's has bit 1 (focused when the page opens); the menu's buttons do not */
    for (size_t i = ne + 32; i + 4 <= ne + 0x80 && i + 4 <= len; i += 4) if (r32(c + i) == 0x1ddddd3fu) { w32(c + i, 0x1ddddd3du); break; }
    w32(c + ne + 28, ID_FORGOT); wf(c + ne + 16, x); wf(c + ne + 20, 214.0f);
    w32(c + ne + 0x58, 0); w32(c + ne + 0x5c, id_create); w32(c + ne + 0x60, id_login);     /* +0x58: the login button's link right (Remember) */
    w32(b->p + cne + 0x60, ID_FORGOT); w32(b->p + lne + 0x5c, ID_FORGOT);
    /* insert after the Create button (before Back: the page's records in screen order) */
    long tr = record(b, cp, csz, "W_BU_BackButton", 0); if (tr < 0) { free(c); return -1; }
    size_t co = page_count_off(b, cp); w32(b->p + cp + co, r32(b->p + cp + co) + 1);
    if (insert(b, (size_t)tr, c, len)) { free(c); return -1; }
    free(c);
    w32(b->p + cp + 4, csz + (u32)len);
    return 0; }

static int patch_gui(const char *src, const char *dst){
    buf_t b = {0}; if (load(src, &b)) return -1;
    int ok = !memcmp(b.p + 8, "FNFO", 4) && add_forgot(&b) == 0 && hide_password(&b, "MP_GPLogin") == 0 && hide_password(&b, "MP_GPCreate") == 0;
    if (ok) { w32(b.p + 8 + 16, (u32)b.n); ok = save(dst, &b) == 0; }
    if (!ok) fprintf(stderr, "[GAMESPY] %s: the account screens could not be changed (unexpected layout)\n", src);
    free(b.p); return ok ? 0 : -1; }

/* ------------------------------------------------------------------ the texts (HTXT: id, characters with the NUL, UTF-16) */
static const struct { u32 id; const char *name, *text; } texts[] = {
    {0x0436a86e, 0, "Username"},                           /* the Nickname field: the name shown in matches */
    {0x28ffb4b6, 0, "Enter Username"},
    {0x05c24b9c, 0, "Password"},                           /* the Email field */
    {0xab85e454, 0, "Enter Password"},
    {0xd7b3e989, 0, "Incorrect username or password"},
    {0x1e4c3e36, 0, "Incorrect username or password"},
    {0xe5a889c1, 0, "Incorrect username or password"},
    {0x62c073a2, 0, "Incorrect username or password"},
    {0xee05705a, 0, "Unknown username"},
    {0x4b40041c, 0, "Username already in use"},
    {0x4884414b, 0, "Suggest Username"},
    {0x6c8eefa0, 0, "Username Suggestions"},
    {0x6ae24eb8, 0, "Invalid username - it must be between 3 and 20 characters long and must not start with a number."},
    {0x4a71fff9, 0, "That username is not registered. Create a new account to register it."},
    {0xf0ea7ee7, 0, "Please enter a valid password"},
    {0xc3b2bf70, 0, "Please enter a valid password"},
    {0xb917a466, 0, "Log In"},
    {0x043e6d59, 0, "Create New Account"},
    {0x2a5d0871, 0, "Remember Me"},
    {0x4889ba9b, 0, ""},                                   /* the hidden (game's own) Password field's label */
    {0xbf5273e7, 0, "Forgot your password? Choose I Forgot on the Login menu."},
    {0x2f7d4c1b, 0, "No RS server was found. Set RS_SERVER in settings.txt, or start one on this network."},
    {TXT_FORGOT, "RS_I_FORGOT", "I Forgot"},
};
static int patch_text(const char *src, const char *dst){
    buf_t b = {0}; if (load(src, &b)) return -1;
    int ok = 0;
    if (b.n < 36 || memcmp(b.p, "Asura   HTXT", 12)) goto out;
    {   u32 cnt = r32(b.p + 24); size_t o = 36; long delta = 0; u32 added = 0; long chars = 0;
        int done[sizeof texts / sizeof texts[0]] = {0};
        for (u32 i = 0; i < cnt; i++) {
            if (o + 8 > b.n) goto out;
            u32 id = r32(b.p + o), nc = r32(b.p + o + 4); size_t el = 8 + 2 * (size_t)nc;
            for (size_t t = 0; t < sizeof texts / sizeof texts[0]; t++) if (texts[t].id == id && !texts[t].name) {
                size_t n2 = strlen(texts[t].text) + 1; n2 = (n2 + 1) & ~(size_t)1;
                unsigned char e[8 + 256]; memset(e, 0, sizeof e); w32(e, id); w32(e + 4, (u32)n2);
                for (size_t k = 0; texts[t].text[k]; k++) e[8 + 2 * k] = (unsigned char)texts[t].text[k];
                cut(&b, o, el); if (insert(&b, o, e, 8 + 2 * n2)) goto out;
                delta += (long)(8 + 2 * n2) - (long)el; chars += (long)n2 - (long)nc; el = 8 + 2 * n2; done[t] = 1; }
            o += el; }
        /* new entries at the end of the list, their names at the end of the names block */
        for (size_t t = 0; t < sizeof texts / sizeof texts[0]; t++) if (texts[t].name) {
            size_t n2 = strlen(texts[t].text) + 1; n2 = (n2 + 1) & ~(size_t)1;
            unsigned char e[8 + 256]; memset(e, 0, sizeof e); w32(e, texts[t].id); w32(e + 4, (u32)n2);
            for (size_t k = 0; texts[t].text[k]; k++) e[8 + 2 * k] = (unsigned char)texts[t].text[k];
            if (insert(&b, o, e, 8 + 2 * n2)) goto out;
            o += 8 + 2 * n2; delta += (long)(8 + 2 * n2); chars += (long)n2; added++;
            u32 nsz = r32(b.p + o); size_t nl = strlen(texts[t].name) + 1;
            if (insert(&b, o + 4 + nsz, texts[t].name, nl)) goto out;
            w32(b.p + o, nsz + (u32)nl); delta += (long)nl; }
        w32(b.p + 24, cnt + added); w32(b.p + 32, (u32)((long)r32(b.p + 32) + 2 * chars));          /* +32: the texts' bytes */
        w32(b.p + 12, (u32)((long)r32(b.p + 12) + delta)); }
    ok = save(dst, &b) == 0;
out:
    if (!ok) fprintf(stderr, "[GAMESPY] %s: the texts could not be changed\n", src);
    free(b.p); return ok ? 0 : -1; }

/* rs_patch_file (settings.c): src is the file to change (the game's, or another patch's result) */
const char *rs_gamespy_patch_file(const char *rel, const char *src){
    static char out[2][512]; static int done[2];
    int k; size_t n = strlen(rel);
    if (n >= 19 && !strcasecmp(rel + n - 19, "BFF_MULTIPLAYER.GUI")) k = 0;
    else if (n >= 11 && !strcasecmp(rel + n - 11, "MENU_AM.ASR")) k = 1;
    else return NULL;
    if (!done[k]) {
        char dir[480]; snprintf(dir, sizeof dir, "%s/patched", rs_platform_data_dir()); mkdir(dir, 0777);
        snprintf(out[k], sizeof out[k], "%s/%s", dir, k ? "MENU_AM_RS.ASR" : "BFF_MULTIPLAYER.GUI");
        done[k] = (k ? patch_text(src, out[k]) : patch_gui(src, out[k])) == 0 ? 1 : -1;
        if (done[k] > 0) fprintf(stderr, "[GAMESPY] %s -> %s (RS server accounts)\n", rel, out[k]); }
    return done[k] > 0 ? out[k] : NULL; }

/* ------------------------------------------------------------------ the game's variables and calls */
static u32 var_nick, var_user;          /* UTF-16 buffers of Menus.GameSpyNick / Menus.GameSpyEmail */
static int ueq(u32 g, const char *s){ int i = 0; for (; s[i]; i++) if (GU16(g + 2u * (u32)i) != (u16)s[i]) return 0; return GU16(g + 2u * (u32)i) == 0; }
static void uput(u32 g, int max, const char *s){ int i = 0; for (; s[i] && i < max - 1; i++) GU16(g + 2u * (u32)i) = (u8)s[i]; GU16(g + 2u * (u32)i) = 0; }
static int uget(u32 g, char *o, int max){ int i = 0; for (; i < max - 1; i++) { u16 c = GU16(g + 2u * (u32)i); if (!c) break; o[i] = (char)(c < 128 ? c : '?'); } o[i] = 0; return i; }
static u32 ualloc(const char *s){ size_t n = strlen(s); u16 *p = rs_guest_alloc((n + 1) * 2, 4); for (size_t i = 0; i <= n; i++) p[i] = (u8)s[i]; return GA(p); }

void rs_gs_string_var(u32 name, u32 buf){                 /* before func_08897890 (a string variable registered) */
    if (ueq(name, "Menus.GameSpyNick")) var_nick = buf;
    else if (ueq(name, "Menus.GameSpyEmail")) var_user = buf; }

/* the login and create calls: (nickname, e-mail, password) as UTF-16 */
static u32 user_arg(u32 email){
    static u32 bufs[2]; static int k; char u[64]; uget(email, u, 40);
    if (!u[0] || strchr(u, '@')) return email;
    if (!bufs[0]) { bufs[0] = GA(rs_guest_alloc(128, 4)); bufs[1] = GA(rs_guest_alloc(128, 4)); }
    char full[64]; snprintf(full, sizeof full, "%s%s", u, USER_SUFFIX); u32 g = bufs[k++ & 1]; uput(g, 60, full); return g; }
void rs_gs_login(u32 *nick, u32 *email, u32 *pass){ static u32 pw; if (!pw) pw = ualloc(GAME_PASSWORD); (void)nick; *email = user_arg(*email); *pass = pw; }

/* "I Forgot": the command, the server's answer, then the menu: Up (Create) [Up (Login)] Cross */
static char rec_nick[32], rec_user[64]; static int rec_pending;
static u32 inj[8]; static int inj_n, inj_i, inj_t;
static char msg[256]; static int msg_on, msg_hold;     /* msg_hold: closed, the game gets nothing until the buttons are let go */
static void inject(const u32 *seq, int n){ for (int i = 0; i < n && i < 8; i++) inj[i] = seq[i]; inj_n = n; inj_i = 0; inj_t = 0; }
void rs_pad_press(u32 b){ if (inj_i >= inj_n) { u32 q[1] = {b}; inject(q, 1); } }   /* one press (dedicated_host.c) */
u32 rs_pad_inject(u32 buttons){                          /* hle.c sceCtrlReadBuffer: injected presses, 6 reads down, 6 up */
    if (msg_on) return 0;
    if (msg_hold) { if (buttons & 0xF3F9) return 0; msg_hold = 0; }
    if (inj_i >= inj_n) return buttons;
    u32 b = inj_t < 6 ? inj[inj_i] : 0;
    if (++inj_t >= 12) { inj_t = 0; inj_i++; }
    return b; }
static rv_t forgot_cmd(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19){
    (void)a0; (void)a1; (void)a2; (void)a3; (void)t0; (void)t1; (void)t2; (void)t3; (void)f12; (void)f13; (void)f14; (void)f15; (void)f16; (void)f17; (void)f18; (void)f19;
    char n[32], u[64]; int r = rs_net_recover(n, sizeof n, u, sizeof u);
    fprintf(stderr, "[GAMESPY] I Forgot: %s\n", r > 0 ? "account found" : r == 0 ? "no account from this install" : r == -1 ? "banned" : "no server");
    if (r > 0) { snprintf(rec_nick, sizeof rec_nick, "%s", n); rec_user[0] = 0; rec_pending = 1; (void)u;
        if (var_nick) uput(var_nick, 21, rec_nick);
        if (var_user) uput(var_user, 51, "");
        snprintf(msg, sizeof msg, "Account found: %s. Enter a new password on the Log In screen within 10 minutes: it replaces the old one.", rec_nick); msg_on = 1;
        static const u32 s[] = {0x10, 0x10, 0x4000}; inject(s, 3); }
    else if (r == 0) { static const u32 s[] = {0x10, 0x4000}; inject(s, 2); }
    else { snprintf(msg, sizeof msg, "%s", r == -1 ? "This account is banned from this server." : "The RS server could not be reached."); msg_on = 1; }
    rv_t v = {0, 0, 0}; return v; }
void rs_gs_register(void){                               /* after func_0889FE7C (the GameSpy commands registered) */
    static u32 name, fn;
    if (!name) { name = ualloc("RS.Forgot"); fn = rs_fn_alias((void *)forgot_cmd); }
    extern void func_08897664(u32, u32, u32, u32, u32, u32, u32);
    func_08897664(name, fn, 1, 0, 0, 0, 0); }
void rs_gs_loaded(void){                                 /* after FE_LoadGamespyLoginInfo: a recovered account over the saved one */
    if (!rec_pending) return; rec_pending = 0;
    if (var_nick) uput(var_nick, 21, rec_nick);
    if (var_user) uput(var_user, 51, rec_user);
    fprintf(stderr, "[GAMESPY] recovered account %s in the Login fields\n", rec_nick); }

/* ------------------------------------------------------------------ message of the day (net.c), and the messages above */
void rs_motd_set(const char *text){
    if (!text || !*text) return;
    snprintf(msg, sizeof msg, "%s", text); msg_on = 2;
    fprintf(stderr, "[GAMESPY] message of the day: %s\n", msg); }
typedef struct { u32 buttons; u8 lx, ly, rx, ry; } rs_pad_t;
extern void rs_backend_read_pad(rs_pad_t *p);
void rs_gs_frame(void){                                  /* after each pad read: a message is closed with Cross or Circle */
    static u32 prev = 0xFFFFFFFFu; static int was;
    if (!msg_on) { was = 0; return; }
    rs_pad_t p; rs_backend_read_pad(&p);
    if (!was) { was = 1; prev = p.buttons; return; }
    u32 e = p.buttons & ~prev; prev = p.buttons;
    if (e & (0x4000 | 0x2000)) { msg_on = 0; msg_hold = 1; } }
void rs_gs_draw(void){
    if (!msg_on) return;
    ov_rect(0, 0, 480, 272, ov_c(0, 0, 0, 0.55f));
    const float x0 = 50, y0 = 70, x1 = 430, y1 = 200;
    ov_box(x0, y0, x1, y1);
    ov_text(x0 + 12, y0 + 8, 0.55f, ov_c(255, 255, 255, 1), msg_on == 2 ? "Message of the Day" : "RS Server");
    /* the text, wrapped */
    char line[128]; const char *s = msg; float y = y0 + 34;
    while (*s && y < y1 - 40) {
        int n = 0, cut_at = -1;
        while (s[n] && s[n] != '\n' && n < 120) { line[n] = s[n]; line[n + 1] = 0; if (s[n] == ' ') cut_at = n; if (ov_text_w(line, 0.45f) > x1 - x0 - 28) break; n++; }
        if (s[n] && s[n] != '\n' && cut_at > 0) n = cut_at;
        memcpy(line, s, (size_t)n); line[n] = 0; ov_text(x0 + 14, y, 0.45f, ov_c(220, 230, 240, 1), line); y += 16;
        s += n; while (*s == ' ' || *s == '\n') s++; }
    ov_text(x1 - 12 - ov_text_w("X/O Close", 0.45f), y1 - 22, 0.45f, ov_c(220, 230, 225, 1), "X/O Close"); }
