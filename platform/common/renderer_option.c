/* The Options menu's renderer switch (builds with the Vulkan renderer, RS_VULKAN): a check box "Vulkan Renderer" under Profile
 * Management in Options, the game's own check-box widget (Profile Management's "Autosave"), saved as RS_RENDERER=vulkan|opengl in
 * settings.txt and applied the next time the game starts (the renderer is chosen before anything is drawn: platform/ps5/main.c).
 *
 * The menu is game data, extended when it is read (rs_patch_file -> rs_renderer_patch_file):
 *   GUIMENU/BFF_OPTIONS.GUI  the page MP_Options_FrontEnd gets a copy of MP_ProfileManagement's W_CB_StyleCheckBox record (its
 *                            images, text and variable binding), under a new id, bound to the variable RS.Vulkan, labelled by a new
 *                            text; the page's six buttons are moved closer (27 px apart from y 64, the game's are 30 px from 70)
 *                            so the seven entries fit above the Back bar, and the up/down links run Profile Management -> the
 *                            check box -> Controls.
 *   MISC/MENU/MENU_AM.ASR    the text table (HTXT) gets the label.
 * The game's page format (UIMP), as far as it is used here: the page's record count at +0x88, then the records, each
 *   u32 kind, u32 type (2001 button, 2002 check box, ...), u32 11, name (NUL, padded to 4), 4 floats colour, x, y, u32 0, u32 id,
 *   ... up/down ids at name end + 0x5c ..., its elements ("E_..." records) inline,
 * then the page's trailer (the first focused id, the menu group).  The file's FNFO chunk holds the file size.
 * Both files are written to <data dir>/patched/ and the game is given those (read-only opens; hle.c).
 *
 * The variable: when the game registers its bool BFF.FE.ProfileAutosaveOn (func_088977A0, hook in tools/dc/hooks.py), RS.Vulkan
 * is registered the same way with a word of ours; rs_renderer_frame (every frame) stores a change in settings.txt. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include "psp_impl.h"
#include "guest.h"

const char *rs_platform_setting(const char *key);
__attribute__((weak)) const char *rs_platform_data_dir(void){ const char *d = getenv("RS_DATA_DIR"); return d ? d : "/tmp"; }
__attribute__((weak)) int rs_platform_setting_store(const char *key, const char *value){ return setenv(key, value, 1); }

#define TEXT_ID   0x564B5352u       /* "RSKV": the label's text id (not a hash any of the game's texts have) */
#define WIDGET_ID 0x564B5357u       /* the check box's widget id */
static const char LABEL[] = "Vulkan Renderer";

static int vulkan_chosen(void){ const char *r = rs_platform_setting("RS_RENDERER"); return r && (!strcmp(r, "vulkan") || !strcmp(r, "Vulkan") || !strcmp(r, "1")); }

/* ------------------------------------------------------------------ file helpers */
typedef struct { unsigned char *p; size_t n, cap; } buf_t;
static int load(const char *path, buf_t *b){
    FILE *f = fopen(path, "rb"); if (!f) return -1;
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    b->cap = (size_t)n + 4096; b->p = malloc(b->cap); b->n = b->p ? fread(b->p, 1, (size_t)n, f) : 0; fclose(f);
    return b->p && b->n == (size_t)n ? 0 : -1; }
static int save(const char *path, const buf_t *b){ FILE *f = fopen(path, "wb"); if (!f) return -1; size_t w = fwrite(b->p, 1, b->n, f); return fclose(f) == 0 && w == b->n ? 0 : -1; }
static u32 r32(const unsigned char *p){ u32 v; memcpy(&v, p, 4); return v; }
static void w32(unsigned char *p, u32 v){ memcpy(p, &v, 4); }
static void wf(unsigned char *p, float v){ memcpy(p, &v, 4); }
/* insert n bytes at off */
static int insert(buf_t *b, size_t off, const void *src, size_t n){
    if (b->n + n > b->cap) { size_t c = b->n + n + 4096; unsigned char *q = realloc(b->p, c); if (!q) return -1; b->p = q; b->cap = c; }
    memmove(b->p + off + n, b->p + off, b->n - off); memcpy(b->p + off, src, n); b->n += n; return 0; }
static long find(const unsigned char *p, size_t from, size_t to, const void *pat, size_t n){
    for (size_t i = from; i + n <= to; i++) if (!memcmp(p + i, pat, n)) return (long)i; return -1; }
static size_t pad4(size_t n){ return (n + 4) & ~(size_t)3; }        /* a name and its NUL, padded to 4 */

/* the UIMP chunk of page `name` in a GUI file: offset and size */
static long page(const buf_t *b, const char *name, u32 *size){
    for (size_t o = 8; o + 16 <= b->n; ) {
        u32 sz = r32(b->p + o + 4); if (sz < 16 || o + sz > b->n) return -1;
        if (!memcmp(b->p + o, "UIMP", 4) && !strcmp((const char *)b->p + o + 0x1c, name)) { *size = sz; return (long)o; }
        o += sz; }
    return -1; }
/* a top-level record of a page (by name): its start, the offset of its name's end */
static long record(const buf_t *b, long pg, u32 pgsz, const char *name, size_t *name_end){
    char pat[80]; size_t n = strlen(name); memcpy(pat, "\x0b\0\0\0", 4); memcpy(pat + 4, name, n + 1);
    long i = find(b->p, (size_t)pg, (size_t)pg + pgsz, pat, 4 + n + 1); if (i < 0) return -1;
    if (name_end) *name_end = (size_t)i + 4 + pad4(n);
    return i - 8; }

static int patch_gui(const char *src, const char *dst){
    buf_t b = {0}; if (load(src, &b)) return -1;
    int ok = 0;
    u32 osz, psz; long op = page(&b, "MP_Options_FrontEnd", &osz), pp = page(&b, "MP_ProfileManagement", &psz);
    if (op < 0 || pp < 0 || memcmp(b.p + 8, "FNFO", 4)) goto out;
    /* the check box record of Profile Management: up to the next top-level record ("W_...") */
    size_t cb_ne; long cb = record(&b, pp, psz, "W_CB_StyleCheckBox", &cb_ne); if (cb < 0) goto out;
    long nx = find(b.p, cb_ne, (size_t)pp + psz, "\x0b\0\0\0W_", 6); if (nx < 0) goto out; nx -= 8;
    /* its copy: id, position, links, label, variable */
    size_t clen = (size_t)(nx - cb); unsigned char *c = malloc(clen + 64); if (!c) goto out;
    memcpy(c, b.p + cb, clen); size_t ne = cb_ne - (size_t)cb;
    w32(c + ne + 28, WIDGET_ID);
    {   long t = find(c, 0, clen, "\x4a\x60\x7f\xca", 4); if (t < 0) { free(c); goto out; } w32(c + t, TEXT_ID); }     /* "Autosave" -> our text */
    {   static const char var[] = "BFF.FE.ProfileAutosaveOn"; long v = find(c, 0, clen, var, sizeof var); if (v < 0 || (size_t)v + pad4(sizeof var - 1) != clen) { free(c); goto out; }
        size_t keep = (size_t)v; memset(c + keep, 0, 12); memcpy(c + keep, "RS.Vulkan", 9); clen = keep + 12; }
    /* the Options page: its buttons in their order on screen, 27 px apart from y 64, then the check box */
    static const char *const btn[] = {"W_BU_Controls", "W_BU_AIDifficulty", "W_BU_AudioOptions", "W_BU_ProfileManagement 1", "W_BU_Medals", "W_BU_ProfileManagement"};
    size_t bne[6]; long bo[6];
    for (int i = 0; i < 6; i++) { bo[i] = record(&b, op, osz, btn[i], &bne[i]); if (bo[i] < 0) { free(c); goto out; } }
    u32 id_first = r32(b.p + bne[0] + 28), id_last = r32(b.p + bne[5] + 28);
    for (int i = 0; i < 6; i++) wf(b.p + bne[i] + 20, 64.0f + 27.0f * (float)i);
    wf(c + ne + 16, 30.17f); wf(c + ne + 20, 64.0f + 27.0f * 6 + 0.1f);
    w32(b.p + bne[5] + 0x5c + 4, WIDGET_ID);              /* Profile Management: down -> the check box */
    w32(b.p + bne[0] + 0x5c, WIDGET_ID);                  /* Controls: up -> the check box */
    w32(c + ne + 0x5c, id_last); w32(c + ne + 0x5c + 4, id_first);
    /* the trailer: the first focused id + the menu group "BFF_Options" (after the last record) */
    unsigned char tp[16]; w32(tp, id_first); memcpy(tp + 4, "BFF_Options", 12);
    long tr = find(b.p, (size_t)op, (size_t)op + osz, tp, 16); if (tr < 0 || r32(b.p + op + 0x88) != 13) { free(c); goto out; }
    w32(b.p + op + 0x88, 14);
    if (insert(&b, (size_t)tr, c, clen)) { free(c); goto out; }
    free(c);
    w32(b.p + op + 4, osz + (u32)clen);
    w32(b.p + 8 + 16, (u32)b.n);                          /* FNFO: the file size */
    ok = save(dst, &b) == 0;
out:
    if (!ok) fprintf(stderr, "[RENDERER] %s: the Options page could not be extended (unexpected layout)\n", src);
    free(b.p); return ok ? 0 : -1; }

static int patch_text(const char *src, const char *dst){
    buf_t b = {0}; if (load(src, &b)) return -1;
    int ok = 0;
    if (b.n < 36 || memcmp(b.p, "Asura   HTXT", 12)) goto out;
    {   u32 csz = r32(b.p + 12), cnt = r32(b.p + 24), tot = r32(b.p + 32);
        size_t o = 36;
        for (u32 i = 0; i < cnt; i++) { if (o + 8 > b.n) goto out; o += 8 + 2 * (size_t)r32(b.p + o + 4); }
        /* the entry: id, characters (with the NUL, even), UTF-16 */
        size_t nc = strlen(LABEL) + 1; nc = (nc + 1) & ~(size_t)1;
        unsigned char e[8 + 128]; memset(e, 0, sizeof e); w32(e, TEXT_ID); w32(e + 4, (u32)nc);
        for (size_t i = 0; LABEL[i]; i++) e[8 + 2 * i] = (unsigned char)LABEL[i];
        size_t elen = 8 + 2 * nc;
        if (insert(&b, o, e, elen)) goto out;
        /* the names block after the entries: its size, then a NUL-terminated name per entry */
        size_t nb = o + elen; u32 nsz = r32(b.p + nb);
        static const char nm[] = "RS_VULKAN_RENDERER";
        if (insert(&b, nb + 4 + nsz, nm, sizeof nm)) goto out;
        w32(b.p + nb, nsz + (u32)sizeof nm);
        w32(b.p + 24, cnt + 1); w32(b.p + 32, tot + (u32)(2 * nc));
        w32(b.p + 12, csz + (u32)(elen + sizeof nm)); }
    ok = save(dst, &b) == 0;
out:
    if (!ok) fprintf(stderr, "[RENDERER] %s: the text table could not be extended\n", src);
    free(b.p); return ok ? 0 : -1; }

/* rs_patch_file (settings.c): the patched copy of a game file, or NULL */
const char *rs_renderer_patch_file(const char *rel, const char *host){
#ifdef RS_VULKAN
    static char out[2][512]; static int done[2];
    int k; size_t n = strlen(rel);
    if (n >= 15 && !strcasecmp(rel + n - 15, "BFF_OPTIONS.GUI")) k = 0;
    else if (n >= 11 && !strcasecmp(rel + n - 11, "MENU_AM.ASR")) k = 1;
    else return NULL;
    if (!done[k]) {
        char dir[480]; snprintf(dir, sizeof dir, "%s/patched", rs_platform_data_dir()); mkdir(dir, 0777);
        snprintf(out[k], sizeof out[k], "%s/%s", dir, k ? "MENU_AM.ASR" : "BFF_OPTIONS.GUI");
        done[k] = (k ? patch_text(host, out[k]) : patch_gui(host, out[k])) == 0 ? 1 : -1;
        if (done[k] > 0) fprintf(stderr, "[RENDERER] %s -> %s (the Options menu's Vulkan Renderer check box)\n", rel, out[k]); }
    return done[k] > 0 ? out[k] : NULL;
#else
    (void)rel; (void)host; return NULL;
#endif
}

/* ------------------------------------------------------------------ the variable */
static u32 *var; static u32 var_seen;
void rs_game_var_bool(u32 name, u32 v, u32 a2, u32 a3){
#ifdef RS_VULKAN
    static const char want[] = "BFF.FE.ProfileAutosaveOn"; int i = 0;
    for (; want[i]; i++) if (GU16(name + 2u * (u32)i) != (u16)want[i]) return;
    if (GU16(name + 2u * (u32)i) || var) return;
    static const char mine[] = "RS.Vulkan";
    u16 *nm = rs_guest_alloc(sizeof mine * 2, 4); var = rs_guest_alloc(16, 16); if (!nm || !var) return;
    for (i = 0; mine[i]; i++) nm[i] = (u16)mine[i]; nm[i] = 0;
    memset(var, 0, 16); *var = var_seen = (u32)vulkan_chosen();
    extern rv_t func_088977A0(u32, u32, u32, u32);
    func_088977A0(GA(nm), GA(var), a2, a3);
    fprintf(stderr, "[RENDERER] RS.Vulkan registered (%s now)\n", var_seen ? "Vulkan" : "OpenGL");
#else
    (void)name; (void)v; (void)a2; (void)a3;
#endif
}
/* every frame: the check box changed -> settings.txt */
void rs_renderer_frame(void){
    if (!var) return;
    u32 now = (*var & 0xFF) ? 1u : 0u;
    if (now == var_seen) return;
    var_seen = now;
    int r = rs_platform_setting_store("RS_RENDERER", now ? "vulkan" : "opengl");
    fprintf(stderr, "[RENDERER] RS_RENDERER=%s stored%s; used from the next start\n", now ? "vulkan" : "opengl", r ? " (FAILED)" : ""); }
