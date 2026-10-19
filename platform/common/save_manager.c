/* Profile save manager: the PSP's savedata list dialog, native.  The game keeps up to 5 profiles (slots "0000".."0004"; it passes
 * that list with sceUtilitySavedataInitStart in its list modes) and expects the system dialog to let the player choose:
 *   list load   (4): Profile -> "load an existing profile?" and Options -> Profile Management -> Load Profile
 *   list save   (5): Profile Management -> Save Current Profile
 *   list delete (6): Profile Management -> Delete Data
 * The dialog is drawn over the game's frames (overlay_ui.c) while the game polls the status (hle.c): a list of the 5 slots with
 * each profile's name (UTF-16 at offset 0x18 of DATA.BIN) and save time, or "Empty".  Up / down choose, Cross selects, Circle
 * goes back.  Delete and overwriting a used slot ask first ("Yes" / "No", No by default); nothing is changed before Yes.  The chosen
 * slot goes back to the game in the parameter's saveName, as the PSP dialog does, so its autosave keeps using that slot. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/stat.h>
#include <unistd.h>
#include "psp_impl.h"
#include "guest.h"
#include "overlay_ui.h"

extern int rs_setting_int(const char *, int);
extern const char *rs_platform_save_dir(void);
extern int rs_savedata_op(u32 param, int mode, const char *save);   /* hle.c: one load (2) / save (3) of a slot */
typedef struct { u32 buttons; u8 lx, ly, rx, ry; } rs_pad_t;
extern void rs_backend_read_pad(rs_pad_t *p);

#define NSLOT 5
enum { MODE_LOAD = 4, MODE_SAVE = 5, MODE_DELETE = 6, MODE_ALLDELETE = 7 };
typedef struct { char id[20]; int used; char name[40]; char when[24]; } slot_t;
static volatile struct { int active, mode, cursor, confirm, yes, nslots; slot_t s[NSLOT]; char note[64]; } M;
static u32 param_; static int suppress; static u32 prev;
/* the game's Delete Data calls the list-all-delete mode with an empty parameter block (the system dialog would list every save
 * of the title): the title id and slot names then come from the game's last load/save call, or its defaults */
static char game_[16] = "ULUS10292"; static char ids_[NSLOT][20] = {"0000", "0001", "0002", "0003", "0004"};

static void cstr(u32 a, char *o, int n){ int i = 0; for (; i < n - 1; i++) { char c = (char)LB(a + (u32)i); if (!c) break; o[i] = c; } o[i] = 0; }
static void slot_path(int i, char *o, size_t n, const char *file){ snprintf(o, n, "%s/%s%s%s%s", rs_platform_save_dir(), game_, M.s[i].id, file ? "/" : "", file ? file : ""); }
static void scan(void){
    char file[16]; cstr(param_ + 0x64, file, 14); if (!file[0]) strcpy(file, "DATA.BIN");
    u32 list = LW(param_ + 0x60); M.nslots = 0;
    char g[16]; cstr(param_ + 0x3C, g, 14); if (g[0]) strcpy(game_, g);
    if (list) for (int i = 0; i < NSLOT; i++) cstr(list + 20u * (u32)i, ids_[i], 20);
    for (int i = 0; i < NSLOT; i++) {
        slot_t *s = (slot_t *)&M.s[i]; strcpy(s->id, ids_[i]); if (!s->id[0]) break; M.nslots++;
        char p[800]; slot_path(i, p, sizeof p, file); struct stat st; s->used = stat(p, &st) == 0 && st.st_size > 0x40;
        s->name[0] = s->when[0] = 0;
        if (s->used) {
            FILE *f = fopen(p, "rb"); u8 b[64] = {0}; if (f) { fseek(f, 0x18, SEEK_SET); if (fread(b, 1, sizeof b, f)) {} fclose(f); }
            int k = 0; for (int j = 0; j + 1 < (int)sizeof b && k < 32; j += 2) { u16 c = (u16)(b[j] | b[j + 1] << 8); if (!c) break; s->name[k++] = c < 127 && c >= 32 ? (char)c : '?'; }
            s->name[k] = 0; if (!k) strcpy(s->name, "Profile");
            time_t t = st.st_mtime; struct tm *tm = localtime(&t); if (tm) strftime(s->when, sizeof s->when, "%Y-%m-%d %H:%M", tm); } } }

static int enabled(void){ static int on = -1; if (on < 0) on = rs_setting_int("RS_SAVE_MANAGER", 1); return on; }
int rs_savemgr_begin(u32 p){
    int mode = (int)LW(p + 0x30);
    if (!enabled()) return 0;
    if (mode == MODE_ALLDELETE) mode = MODE_DELETE;
    else if ((mode != MODE_LOAD && mode != MODE_SAVE && mode != MODE_DELETE) || !LW(p + 0x60)) return 0;
    param_ = p; scan(); if (!M.nslots) return 0;
    int c = 0;
    if (mode == MODE_SAVE) { c = -1; for (int i = 0; i < M.nslots; i++) if (!M.s[i].used) { c = i; break; } if (c < 0) c = 0; }   /* a free slot first */
    else for (int i = 0; i < M.nslots; i++) if (M.s[i].used) { c = i; break; }
    M.mode = mode; M.cursor = c; M.confirm = 0; M.yes = 0; M.note[0] = 0; prev = 0xFFFFFFFFu; suppress = 1; M.active = 1;
    fprintf(stderr, "[SAVEMGR] %s: %d slots\n", mode == MODE_LOAD ? "load" : mode == MODE_SAVE ? "save" : "delete", M.nslots);
    return 1; }
int rs_savemgr_busy(void){ return M.active; }

static void finish(int result, int slot){
    if (slot >= 0) { for (int i = 0; i < 20; i++) SB(param_ + 0x4C + (u32)i, (u8)M.s[slot].id[i]); }   /* the slot the game now uses */
    SW(param_ + 0x1C, (u32)result); M.active = 0;
    fprintf(stderr, "[SAVEMGR] done: result %08x slot %s\n", (unsigned)result, slot >= 0 ? (const char *)M.s[slot].id : "-"); }
static void act(void){
    int i = M.cursor; slot_t *s = (slot_t *)&M.s[i];
    if (M.mode == MODE_LOAD) { int r = rs_savedata_op(param_, 2, s->id); finish(r, r == 0 ? i : -1); }
    else if (M.mode == MODE_SAVE) { int r = rs_savedata_op(param_, 3, s->id); finish(r, r == 0 ? i : -1); }
    else {                                                              /* delete the slot's files and its folder */
        char p[800]; static const char *files[] = {"DATA.BIN", "PARAM.SFO", "ICON0.PNG", "ICON1.PMF", "PIC1.PNG", "SND0.AT3"};
        for (int k = 0; k < 6; k++) { slot_path(i, p, sizeof p, files[k]); remove(p); }
        char f2[16]; cstr(param_ + 0x64, f2, 14); if (f2[0]) { slot_path(i, p, sizeof p, f2); remove(p); }
        slot_path(i, p, sizeof p, NULL); rmdir(p);
        finish(0, i); } }

/* status polling (hle.c, game thread): the dialog's input */
void rs_savemgr_poll(void){
    if (!M.active) return;
    rs_pad_t pd; rs_backend_read_pad(&pd); u32 b = pd.buttons;
    if (pd.ly < 50) b |= 0x10; else if (pd.ly > 206) b |= 0x40;
    if (pd.lx < 50) b |= 0x80; else if (pd.lx > 206) b |= 0x20;
    if (prev == 0xFFFFFFFFu) { prev = b; return; }                       /* the press that opened it is still down */
    u32 e = b & ~prev; prev = b;
    if (M.confirm) {
        if (e & (0x10 | 0x40 | 0x20 | 0x80)) M.yes = !M.yes;
        if (e & 0x4000) { M.confirm = 0; if (M.yes) act(); }
        else if (e & 0x2000) M.confirm = 0;
        return; }
    if (e & 0x10) M.cursor = (M.cursor + M.nslots - 1) % M.nslots;
    if (e & 0x40) M.cursor = (M.cursor + 1) % M.nslots;
    if (e & 0x2000) { finish(1, -1); return; }                         /* back: cancelled */
    if (e & 0x4000) {
        int used = M.s[M.cursor].used;
        if (M.mode != MODE_SAVE && !used) { snprintf((char *)M.note, sizeof M.note, "This slot is empty."); return; }
        if (M.mode == MODE_DELETE || (M.mode == MODE_SAVE && used)) { M.confirm = 1; M.yes = 0; return; }   /* ask first */
        act(); } }

/* the game gets no input while the dialog is up, nor from the press that closes it until it is released (pad hook, game thread) */
#define IMG(va) GIMG(va)
void rs_savemgr_pad(void){
    if (!M.active && !suppress) return;
    u32 btn = GU32(IMG(0x08B46204)), ax = GU32(IMG(0x08B46200)); if (!btn || !ax) return;
    int any = 0; for (u32 b = 449; b <= 464; b++) { any |= GU8(btn + b) != 0; GU8(btn + b) = 0; }
    float sx = GF32(ax + 12), sy = GF32(ax + 16);
    for (u32 i = 3; i <= 6; i++) GF32(ax + 4 * i) = 0;
    if (!M.active && !any && sx * sx + sy * sy < 0.04f) suppress = 0; }

/* drawing (renderer thread) */
void rs_savemgr_draw(void){
    if (!M.active) return;
    int mode = M.mode, cur = M.cursor, n = M.nslots;
    ov_rect(0, 0, 480, 272, ov_c(0, 0, 0, 0.6f));
    const float x0 = 90, y0 = 30, x1 = 390, y1 = 244;
    ov_box(x0, y0, x1, y1);
    const char *title = mode == MODE_LOAD ? "Load Profile" : mode == MODE_SAVE ? "Save Profile" : "Delete Profile";
    ov_text(x0 + 12, y0 + 6, 0.62f, ov_c(255, 255, 255, 1), title);
    for (int i = 0; i < n; i++) {                                           /* one main-menu bar per slot: "Slot 1   name   date" */
        const slot_t *s = (const slot_t *)&M.s[i]; float ey0 = y0 + 34 + i * 30, ey1 = ey0 + 24; int f = i == cur && !M.confirm;
        ov_entry(x0 + 10, ey0, x1 - 10, ey1, "", f);
        char lab[16]; snprintf(lab, sizeof lab, "Slot %d", i + 1);
        col_t main = f ? ov_c(255, 255, 255, 1) : ov_c(200, 214, 224, 1), dim = f ? ov_c(225, 235, 245, 1) : ov_c(140, 160, 175, 1);
        float ty = ey0 + (24 - ov_text_h(0.45f)) / 2;
        ov_text(x0 + 22, ty, 0.45f, dim, lab);
        ov_text(x0 + 76, ty, 0.45f, s->used ? main : dim, s->used ? s->name : "Empty");
        if (s->used) ov_text(x1 - 22 - ov_text_w(s->when, 0.45f), ty, 0.45f, dim, s->when); }
    char foot[64]; snprintf(foot, sizeof foot, "%s", M.note[0] ? (const char *)M.note : "");
    if (foot[0]) ov_text(x0 + 14, y1 - 20, 0.45f, ov_c(240, 200, 120, 1), foot);
    ov_text(x1 - 12 - ov_text_w("X Select   O Back", 0.45f), y1 - 20, 0.45f, ov_c(220, 230, 225, 1), "X Select   O Back");
    if (M.confirm) {                                                         /* Yes / No, No first */
        const slot_t *s = (const slot_t *)&M.s[cur]; char q[80];
        if (mode == MODE_DELETE) snprintf(q, sizeof q, "Delete \"%s\"?", s->name); else snprintf(q, sizeof q, "Overwrite \"%s\"?", s->name);
        const float bx0 = 130, by0 = 92, bx1 = 350, by1 = 196;
        ov_rect(0, 0, 480, 272, ov_c(0, 0, 0, 0.45f));
        ov_box(bx0, by0, bx1, by1);
        ov_text((bx0 + bx1 - ov_text_w(q, 0.5f)) / 2, by0 + 10, 0.5f, ov_c(255, 255, 255, 1), q);
        const char *sub = mode == MODE_DELETE ? "This cannot be undone." : "The saved profile will be replaced.";
        ov_text((bx0 + bx1 - ov_text_w(sub, 0.42f)) / 2, by0 + 28, 0.42f, ov_c(200, 220, 210, 1), sub);
        ov_entry(bx0 + 20, by0 + 50, bx1 - 20, by0 + 70, "Yes", M.yes);
        ov_entry(bx0 + 20, by0 + 76, bx1 - 20, by0 + 96, "No", !M.yes); } }
