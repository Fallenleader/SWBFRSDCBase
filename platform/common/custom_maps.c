/* Custom maps and the Instant Action map list.
 *
 * Files (<data> = /data/SWBFRS on the PS5, ux0:data/SWBFRS on the Vita, RS_DATA_DIR or the game folder on PC):
 *   <data>/mods/original_maps.txt        written by the game at every start: the game's own 22 maps, their eras, modes and space flag
 *                                        (a reference: it is not read)
 *   <data>/mods/mod_maps.txt             THE MAP LIST.  One line per map, in the order Instant Action lists them.  Made from
 *                                        original_maps.txt the first time; edit it to reorder, hide (delete or comment out the line),
 *                                        change a map's eras / modes / name, add custom maps and add instances (one level listed again
 *                                        under another id, name and modes).  Custom maps installed but not in the list are appended.
 *   <data>/mods/maps/<ID>.txt            a custom map's definition (maptool.py install): Name, Base, Modes, Space - the defaults of its line
 *   <data>/mods/maps/<ERA>/<ID>.PSP      a custom map's level, one file per era (CLASSIC = Galactic Civil War, PREQUEL = Clone Wars)
 * A line of mod_maps.txt:
 *   map=<ID> [name="Shown name"] [level=<LEVEL>] [base=<MAP>] classic=yes|no prequel=yes|no CQST=0|1 CTF1=0|1 CTF2=0|1 HCTF=0|1 space=0|1
 *     ID     a game map (HOTH ...), a custom map (its files in mods/maps), or a new id for an instance of level=<LEVEL>
 *     level  the level the id plays (a game map or a custom map); default: the id itself
 *     base   the game map whose other files (loading screen, ...) a custom map borrows; default: its definition's Base, else HOTH
 *     modes  CQST Conquest, CTF1 1-Flag CTF, CTF2 2-Flag CTF, HCTF Hero CTF (the game's own codes, table at 0x08B1B900)
 *     eras   an era only counts if the level has a file for it
 * RS_CUSTOM_MAPS=0 in settings.txt turns all of this off (the game's own list).
 *
 * How the game is extended:
 *   - its map table (22 entries of 20 bytes at 0x08B1B980: prequel name, classic name, STDTEXT id, 4 per-mode bytes, space flag)
 *     is copied into a larger native table with the custom maps and instances after it (the game's maps keep their indices 0..21, so
 *     Galactic Conquest, the profile and the server code see the same numbers); the 8 functions that read it (game_16.c, all bounded
 *     by 22) are replaced (tools/dc/hooks.py), as are the two Instant Action list commands (FE_ListAllMaps, FE_SelectMapPlanet), which
 *     list the table in mod_maps.txt's order.  The game's per-profile "times played" array has 22 slots: custom maps are not counted.
 *   - the names: STDTEXT ids 0x7F00 + table index, answered by the text lookup hook (game_patches.c rs_stdtext_get).
 *   - the files: the game finds a level by listing ENVS/<ERA> (func_08A696F4) and opening ENVS/<ERA>/<name>.PSP; the HLE's
 *     directory listing (hle.c sceIoDread) gets the custom ids appended and opens / stats of those paths go to the level's file.
 *     Any other file the game looks for by the map's id (and does not find) is taken from the base map's. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <dirent.h>
#include <sys/stat.h>
#include "psp_impl.h"
#if __has_include("guest.h")
#include "guest.h"
#else                                                   /* 32-bit builds without guest.h: guest addresses are native pointers */
#include <stdint.h>
extern u32 rs_image_w[];
#define GP(a)     ((void *)(uintptr_t)(uint32_t)(a))
#define GA(p)     ((uint32_t)(uintptr_t)(p))
#define GIMG(va)  (({ uint32_t b_ = (uint32_t)(uintptr_t)rs_image_w; __asm__("" : "+r"(b_)); b_; }) + ((uint32_t)(va) - 0x08804000u))
#define GU8(a)    (*(volatile uint8_t *)GP(a))
#define GU32(a)   (*(volatile uint32_t *)GP(a))
static void *rs_guest_alloc(size_t size, size_t align){ (void)align; void *p = calloc(1, size + 16); return (void *)(((uintptr_t)p + 15) & ~(uintptr_t)15); }
#endif
#ifdef _WIN32
#include <direct.h>
#define mkdir_(p) _mkdir(p)
#else
#define mkdir_(p) mkdir(p, 0777)
#endif

extern int rs_setting_int(const char *key, int def);
extern u32 func_0897A064(u32 a0, u32 a1);
extern rv_t func_08898048(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3);
extern rv_t func_08898108(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3);
extern void func_08A275D0(u32 a0);
extern u64 func_08A27590(u32 a0);

#define NORIG    22
#define MAXC     64                                     /* custom maps + instances */
#define MAXL     (NORIG + MAXC)                         /* list entries */
#define TABLE    0x08B1B980u
#define TEXT_ID0 0x7F00u
static const char *ERA_DIR[3] = {"CLASSIC", "PREQUEL", "CAMPAIGN"};
static const char *MODE[4] = {"CQST", "CTF1", "CTF2", "HCTF"};
static const char *MODE_NAME[4] = {"Conquest", "1-Flag CTF", "2-Flag CTF", "Hero CTF"};

/* a table entry after the game's 22: a custom map or an instance */
typedef struct { char id[32], level[32], base[32]; int level_orig, eras; } cmap_t;   /* eras: bit 0 classic, 1 prequel; level_orig: level is a game map */
static cmap_t cm[MAXC]; static int ncm, total = NORIG, inited;
static char names[MAXL][96];                            /* a shown name per table index ("" = the game's text) */
static int order[MAXL], norder = NORIG;                 /* list position -> table index */
static u32 tab;                                          /* guest address of the native table */

static const char *data_dir(void){
#if defined(RS_PS5)
    return "/data/SWBFRS";
#elif defined(__vita__)
    return "ux0:data/SWBFRS";
#else
    const char *e = getenv("RS_DATA_DIR"); return e ? e : ".";
#endif
}
static void trim(char *s){ size_t n = strlen(s); while (n && isspace((unsigned char)s[n - 1])) s[--n] = 0; size_t i = 0; while (isspace((unsigned char)s[i])) i++; if (i) memmove(s, s + i, strlen(s + i) + 1); }
static void upper(char *s){ for (; *s; s++) *s = (char)toupper((unsigned char)*s); }
static u32 gstrdup(const char *s){ size_t n = strlen(s) + 1; char *g = rs_guest_alloc(n, 4); memcpy(g, s, n); return GA(g); }
static u32 ent(u32 idx){ return tab + 20 * idx; }
static int orig_index(const char *name){
    for (int i = 0; i < NORIG; i++) for (int k = 0; k < 2; k++) {
        u32 p = GU32(GIMG(TABLE) + 20 * i + 4 * k); if (p && !strcasecmp((const char *)GP(p), name)) return i; }
    return -1; }
static const char *orig_name(int i){ u32 p = GU32(GIMG(TABLE) + 20 * i + 4); if (!p) p = GU32(GIMG(TABLE) + 20 * i); return p ? (const char *)GP(p) : "?"; }
/* the file name of a game map's level in an era (a few game maps use another name per era: space_kashyyyk_civil / _clone) */
static const char *level_file(const cmap_t *c, int era, char *buf, size_t cap){
    if (c->level_orig) { int o = orig_index(c->level); u32 p = o >= 0 && era < 2 ? GU32(GIMG(TABLE) + 20 * (u32)o + (era == 0 ? 4 : 0)) : 0;
        if (p) { snprintf(buf, cap, "%s", (const char *)GP(p)); upper(buf); return buf; } }
    snprintf(buf, cap, "%s", c->level); return buf; }
static int table_index(const char *id){                                     /* game map or custom / instance id */
    int o = orig_index(id); if (o >= 0) return o;
    for (int i = 0; i < ncm; i++) if (!strcasecmp(cm[i].id, id)) return NORIG + i;
    return -1; }
static int valid_id(const char *s){ size_t n = strlen(s); if (!n || n > 24) return 0; for (; *s; s++) if (!isalnum((unsigned char)*s) && *s != '_') return 0; return 1; }

/* a custom level's definition (mods/maps/<ID>.txt) */
typedef struct { char name[96], base[32]; int modes[4], space, eras; } def_t;
static int read_def(const char *id, def_t *d){
    memset(d, 0, sizeof *d); for (int m = 0; m < 4; m++) d->modes[m] = -1; d->space = -1;
    char root[600], path[800]; snprintf(root, sizeof root, "%s/mods/maps", data_dir());
    for (int era = 0; era < 3; era++) { struct stat st; snprintf(path, sizeof path, "%s/%s/%s.PSP", root, ERA_DIR[era], id); if (stat(path, &st) == 0) d->eras |= 1 << era; }
    if (!(d->eras & 3)) return 0;
    snprintf(path, sizeof path, "%s/%s.txt", root, id); FILE *f = fopen(path, "r");
    if (f) { char ln[512];
        while (fgets(ln, sizeof ln, f)) {
            char *h = strchr(ln, '#'); if (h) *h = 0; char *eq = strchr(ln, '='); if (!eq) continue; *eq = 0; char *k = ln, *v = eq + 1; trim(k); trim(v);
            if (!strcasecmp(k, "Name")) snprintf(d->name, sizeof d->name, "%s", v);
            else if (!strcasecmp(k, "Base")) { snprintf(d->base, sizeof d->base, "%s", v); upper(d->base); }
            else if (!strcasecmp(k, "Modes")) sscanf(v, "%d %d %d %d", &d->modes[0], &d->modes[1], &d->modes[2], &d->modes[3]);
            else if (!strcasecmp(k, "Space")) d->space = atoi(v); }
        fclose(f); }
    return 1; }

/* one line of mod_maps.txt */
typedef struct { char id[32], name[96], level[32], base[32]; int era[2], modes[4], space; } line_t;
static int parse_line(char *ln, line_t *L){
    memset(L, 0, sizeof *L); L->era[0] = L->era[1] = -1; for (int m = 0; m < 4; m++) L->modes[m] = -1; L->space = -1;
    char *p = ln;
    for (;;) {
        while (isspace((unsigned char)*p)) p++;
        if (!*p || *p == '#') break;
        char key[32]; int k = 0; while (*p && *p != '=' && !isspace((unsigned char)*p) && k < 31) key[k++] = *p++; key[k] = 0;
        if (*p != '=') { while (*p && !isspace((unsigned char)*p)) p++; continue; }
        p++; char val[96]; int n = 0;
        if (*p == '"') { p++; while (*p && *p != '"' && n < 95) val[n++] = *p++; if (*p == '"') p++; }
        else while (*p && !isspace((unsigned char)*p) && n < 95) val[n++] = *p++;
        val[n] = 0;
        int yes = !strcasecmp(val, "yes") || !strcmp(val, "1") || !strcasecmp(val, "on") || !strcasecmp(val, "true");
        if (!strcasecmp(key, "map")) { snprintf(L->id, sizeof L->id, "%s", val); upper(L->id); }
        else if (!strcasecmp(key, "name")) snprintf(L->name, sizeof L->name, "%s", val);
        else if (!strcasecmp(key, "level")) { snprintf(L->level, sizeof L->level, "%s", val); upper(L->level); }
        else if (!strcasecmp(key, "base")) { snprintf(L->base, sizeof L->base, "%s", val); upper(L->base); }
        else if (!strcasecmp(key, "classic")) L->era[0] = yes;
        else if (!strcasecmp(key, "prequel")) L->era[1] = yes;
        else if (!strcasecmp(key, "space")) L->space = yes;
        else { int m; for (m = 0; m < 4; m++) if (!strcasecmp(key, MODE[m])) { L->modes[m] = yes; break; }
            if (m == 4) fprintf(stderr, "[MAPS] mod_maps.txt: unknown field %s= (ignored)\n", key); } }
    return L->id[0] != 0; }

static void fmt_line(char *out, size_t cap, const char *id, const char *name, const char *level, const char *base, int eras, const u8 *modes, int space, const char *comment){
    char nm[128] = "", lv[48] = "", bs[48] = "";
    if (name && *name) snprintf(nm, sizeof nm, "  name=\"%s\"", name);
    if (level && *level && strcasecmp(level, id)) snprintf(lv, sizeof lv, "  level=%s", level);
    if (base && *base) snprintf(bs, sizeof bs, "  base=%s", base);
    snprintf(out, cap, "map=%-22s classic=%-3s  prequel=%-3s  CQST=%d CTF1=%d CTF2=%d HCTF=%d  space=%d%s%s%s%s%s\n", id,
             (eras & 1) ? "yes" : "no", (eras & 2) ? "yes" : "no", modes[0] ? 1 : 0, modes[1] ? 1 : 0, modes[2] ? 1 : 0, modes[3] ? 1 : 0, space ? 1 : 0,
             nm, lv, bs, comment ? "    # " : "", comment ? comment : ""); }
static const char *pretty(const char *id, char *buf, size_t cap){                 /* boz_pity -> Boz Pity */
    size_t n = 0; int up = 1; for (const char *s = id; *s && n < cap - 1; s++) { char c = *s == '_' ? ' ' : *s; buf[n++] = (char)(up ? toupper((unsigned char)c) : tolower((unsigned char)c)); up = c == ' '; }
    buf[n] = 0; return buf; }

static char orig_shown[NORIG][64]; static int made_list;       /* the game's names (from its text, once the menus run); mod_maps.txt made this run */
static const char *label_of(int i, char *buf, size_t cap){ return orig_shown[i][0] ? orig_shown[i] : pretty(orig_name(i), buf, cap); }
static const char HEADER[] =
"# Renegade Squadron - Instant Action map list.  See how_to_mod_maps.md (in this folder) for the full guide.\n"
"#\n"
"# One line per map, in the order the Planet list shows them.  Delete or comment out (#) a line to hide that map.\n"
"#   map=<ID>        a game map (as in original_maps.txt), a custom map (files in mods/maps/), or a new id for an instance\n"
"#   name=\"...\"      the name shown (optional; game maps default to their own name, custom maps to their definition's)\n"
"#   level=<LEVEL>   play another map's level under this id (an instance: same level, its own name, eras and modes)\n"
"#   base=<MAP>      the game map a custom map borrows its loading screen and other files from\n"
"#   classic=yes|no  Galactic Civil War era   (only if the level has a CLASSIC file; \"no\" hides the era)\n"
"#   prequel=yes|no  Clone Wars era           (only if the level has a PREQUEL file)\n"
"#   CQST CTF1 CTF2 HCTF = 1|0   game modes: Conquest, 1-Flag CTF, 2-Flag CTF, Hero CTF\n"
"#   space=0|1       a space battle (space maps use the space rules and HUD)\n"
"#\n";

static void write_original(const char *path){
    char buf[16384]; size_t n = 0, cap = sizeof buf;
    n += snprintf(buf + n, cap - n, "# Renegade Squadron - the game's own maps, as the game defines them (written by the game at every start; not read).\n"
                                    "# Copy lines from here into mod_maps.txt.  Format: see mod_maps.txt and how_to_mod_maps.md.\n#\n");
    for (int i = 0; i < NORIG && n < cap - 300; i++) {
        u32 e = GIMG(TABLE) + 20 * (u32)i; int eras = (GU32(e + 4) ? 1 : 0) | (GU32(e) ? 2 : 0); u8 md[4]; for (int m = 0; m < 4; m++) md[m] = GU8(e + 12 + m);
        char pn[64], cmt[160], ln[400];
        snprintf(cmt, sizeof cmt, "%s%s", label_of(i, pn, sizeof pn), (eras & 3) == 3 ? "" : ((eras & 1) ? " - no Clone Wars level" : " - no Galactic Civil War level"));
        char id[32]; snprintf(id, sizeof id, "%s", orig_name(i)); upper(id);
        fmt_line(ln, sizeof ln, id, 0, 0, 0, eras, md, (int)GU32(e + 16), cmt);
        n += snprintf(buf + n, cap - n, "%s", ln); }
    FILE *f = fopen(path, "rb"); if (f) { static char old[16384]; size_t k = fread(old, 1, sizeof old, f); fclose(f); if (k == n && !memcmp(old, buf, n)) return; }
    f = fopen(path, "wb"); if (f) { fwrite(buf, 1, n, f); fclose(f); fprintf(stderr, "[MAPS] wrote %s\n", path); } }

static void write_list(const char *path){
    FILE *w = fopen(path, "wb"); if (!w) return;
    fputs(HEADER, w);
    for (int i = 0; i < NORIG; i++) { u32 e = GIMG(TABLE) + 20 * (u32)i; int eras = (GU32(e + 4) ? 1 : 0) | (GU32(e) ? 2 : 0); u8 md[4]; for (int m = 0; m < 4; m++) md[m] = GU8(e + 12 + m);
        char id[32], pn[64], cmt[160], ln[400]; snprintf(id, sizeof id, "%s", orig_name(i)); upper(id);
        snprintf(cmt, sizeof cmt, "%s%s", label_of(i, pn, sizeof pn), (eras & 3) == 3 ? "" : ((eras & 1) ? " - no Clone Wars level" : " - no Galactic Civil War level"));
        fmt_line(ln, sizeof ln, id, 0, 0, 0, eras, md, (int)GU32(e + 16), cmt); fputs(ln, w); }
    fclose(w); fprintf(stderr, "[MAPS] made %s from the game's map list\n", path); }
/* the game's own names, once its text is loaded (first Planet list): original_maps.txt (and a mod_maps.txt made this run) get them */
static void names_from_game(void){
    static int done; if (done) return; done = 1;
    for (int i = 0; i < NORIG; i++) { u32 t = func_0897A064(GU32(GIMG(TABLE) + 20 * (u32)i + 8), 0); if (!t) continue;
        const u16 *w = (const u16 *)GP(t); int k = 0; while (w[k] && k < 63) { orig_shown[i][k] = w[k] < 256 ? (char)w[k] : '?'; k++; } orig_shown[i][k] = 0; }
    char path[800]; snprintf(path, sizeof path, "%s/mods/original_maps.txt", data_dir()); write_original(path);
    if (made_list && !ncm) { snprintf(path, sizeof path, "%s/mods/mod_maps.txt", data_dir()); write_list(path); } }

/* add a table entry (custom map or instance) for line L; returns its table index or -1 */
static int add_entry(const line_t *L){
    if (ncm >= MAXC) { fprintf(stderr, "[MAPS] %s: more than %d custom maps / instances: skipped\n", L->id, MAXC); return -1; }
    if (!valid_id(L->id)) { fprintf(stderr, "[MAPS] %s: an id is 1-24 characters A-Z 0-9 _: skipped\n", L->id); return -1; }
    cmap_t c; memset(&c, 0, sizeof c); snprintf(c.id, sizeof c.id, "%s", L->id);
    snprintf(c.level, sizeof c.level, "%s", L->level[0] ? L->level : L->id);
    def_t d; int lo = orig_index(c.level), lvl_eras = 0; u32 src = 0;            /* src: the table entry the defaults come from */
    if (lo >= 0) { c.level_orig = 1; snprintf(c.level, sizeof c.level, "%s", orig_name(lo)); upper(c.level); snprintf(c.base, sizeof c.base, "%s", c.level);
        src = GIMG(TABLE) + 20 * (u32)lo; lvl_eras = (GU32(src + 4) ? 1 : 0) | (GU32(src) ? 2 : 0); memset(&d, 0, sizeof d); for (int m = 0; m < 4; m++) d.modes[m] = -1; d.space = -1; }
    else {
        int ci = -1; for (int i = 0; i < ncm; i++) if (!strcasecmp(cm[i].id, c.level) && !cm[i].level_orig && !strcasecmp(cm[i].level, cm[i].id)) ci = i;
        if (!read_def(c.level, &d)) { fprintf(stderr, "[MAPS] %s: level %s has no file in mods/maps/CLASSIC or PREQUEL: skipped\n", c.id, c.level); return -1; }
        lvl_eras = d.eras & 3;
        snprintf(c.base, sizeof c.base, "%s", L->base[0] ? L->base : (d.base[0] ? d.base : "HOTH"));
        if (orig_index(c.base) < 0) { fprintf(stderr, "[MAPS] %s: base %s is not one of the game's maps: HOTH used\n", c.id, c.base); snprintf(c.base, sizeof c.base, "HOTH"); }
        src = GIMG(TABLE) + 20 * (u32)orig_index(c.base); (void)ci; }
    if (L->base[0] && c.level_orig && orig_index(L->base) >= 0) snprintf(c.base, sizeof c.base, "%s", L->base);
    c.eras = lvl_eras;
    for (int k = 0; k < 2; k++) if (L->era[k] == 0) c.eras &= ~(1 << k); else if (L->era[k] == 1 && !(lvl_eras & (1 << k)))
        fprintf(stderr, "[MAPS] %s: %s=yes but level %s has no %s file: era left out\n", c.id, k ? "prequel" : "classic", c.level, ERA_DIR[k]);
    if (!(c.eras & 3)) { fprintf(stderr, "[MAPS] %s: no era left: skipped\n", c.id); return -1; }
    int idx = NORIG + ncm; u32 e = ent((u32)idx); u32 nm = gstrdup(c.id);
    GU32(e) = (c.eras & 2) ? nm : 0; GU32(e + 4) = (c.eras & 1) ? nm : 0; GU32(e + 8) = TEXT_ID0 + (u32)idx;
    for (int m = 0; m < 4; m++) { int v = L->modes[m] >= 0 ? L->modes[m] : (d.modes[m] >= 0 ? d.modes[m] : GU8(src + 12 + m)); GU8(e + 12 + m) = (u8)(v ? 1 : 0); }
    GU32(e + 16) = (u32)(L->space >= 0 ? L->space : (d.space >= 0 ? d.space : (int)GU32(src + 16)));
    if (L->name[0]) snprintf(names[idx], sizeof names[idx], "%s", L->name);
    else if (!c.level_orig && d.name[0]) snprintf(names[idx], sizeof names[idx], "%s", d.name);
    else if (c.level_orig) names[idx][0] = 0;                                  /* the level's own text */
    else snprintf(names[idx], sizeof names[idx], "%s", c.id);
    if (c.level_orig && !names[idx][0]) GU32(e + 8) = GU32(src + 8);
    cm[ncm++] = c;
    fprintf(stderr, "[MAPS] map %d: %s%s%s%s (level %s%s, base %s, eras%s%s)\n", idx, c.id, names[idx][0] ? " \"" : "", names[idx][0] ? names[idx] : "", names[idx][0] ? "\"" : "",
            c.level, c.level_orig ? " (game map)" : "", c.base, (c.eras & 1) ? " classic" : "", (c.eras & 2) ? " prequel" : "");
    return idx; }

static void load(void){
    if (inited) return; inited = 1;
    tab = GA(rs_guest_alloc(20 * MAXL, 16));
    memcpy(GP(tab), GP(GIMG(TABLE)), 20 * NORIG);
    for (int i = 0; i < NORIG; i++) order[i] = i;
    if (!rs_setting_int("RS_CUSTOM_MAPS", 1)) return;
    char dir[600], path[800]; snprintf(dir, sizeof dir, "%s/mods", data_dir()); mkdir_(dir);
    snprintf(path, sizeof path, "%s/original_maps.txt", dir); { struct stat st; if (stat(path, &st) != 0) write_original(path); }   /* (rewritten with the shown names at the first Planet list) */
    /* the custom maps installed (mods/maps/*.txt or a level file), for the ones mod_maps.txt does not list */
    char found[MAXC][32]; int nf = 0; char root[600]; snprintf(root, sizeof root, "%s/maps", dir);
    for (int era = 0; era < 2; era++) { char ed[700]; snprintf(ed, sizeof ed, "%s/%s", root, ERA_DIR[era]); DIR *d = opendir(ed); if (!d) continue; struct dirent *e;
        while ((e = readdir(d)) && nf < MAXC) { size_t l = strlen(e->d_name); if (l < 5 || l > 28 || strcasecmp(e->d_name + l - 4, ".PSP")) continue;
            char id[32]; snprintf(id, sizeof id, "%.*s", (int)(l - 4), e->d_name); upper(id); int dup = 0; for (int k = 0; k < nf; k++) if (!strcmp(found[k], id)) dup = 1;
            if (!dup) snprintf(found[nf++], 32, "%s", id); }
        closedir(d); }
    for (int i = 0; i < nf; i++) for (int j = i + 1; j < nf; j++) if (strcmp(found[i], found[j]) > 0) { char t[32]; memcpy(t, found[i], 32); memcpy(found[i], found[j], 32); memcpy(found[j], t, 32); }
    /* mod_maps.txt: made from the game's list (and the installed custom maps) if missing */
    snprintf(path, sizeof path, "%s/mod_maps.txt", dir);
    FILE *f = fopen(path, "r");
    if (!f) { write_list(path); made_list = 1;
        f = fopen(path, "r"); }
    norder = 0; int listed[MAXL] = {0}; char seen_custom[MAXC][32]; int nseen = 0;
    if (f) { char ln[1024]; int no = 0;
        while (fgets(ln, sizeof ln, f)) { no++; line_t L; if (!parse_line(ln, &L)) continue;
            int idx = -1, o = orig_index(L.id);
            if (o >= 0 && !L.level[0]) {                                        /* a game map: its overrides */
                idx = o; u32 e = ent((u32)o), src = GIMG(TABLE) + 20 * (u32)o; int has[2] = {GU32(src + 4) != 0, GU32(src) != 0};
                for (int k = 0; k < 2; k++) { u32 slot = k ? e : e + 4, sp = k ? src : src + 4;
                    if (L.era[k] == 0) GU32(slot) = 0; else if (L.era[k] == 1) { if (has[k]) GU32(slot) = GU32(sp); else fprintf(stderr, "[MAPS] mod_maps.txt line %d: %s has no %s level: era left out\n", no, L.id, ERA_DIR[k]); } }
                if (!GU32(e) && !GU32(e + 4)) { fprintf(stderr, "[MAPS] mod_maps.txt line %d: %s has no era left: hidden\n", no, L.id); GU32(e) = GU32(src); GU32(e + 4) = GU32(src + 4); continue; }
                for (int m = 0; m < 4; m++) if (L.modes[m] >= 0) GU8(e + 12 + m) = (u8)L.modes[m];
                if (L.space >= 0) GU32(e + 16) = (u32)L.space;
                if (L.name[0]) { snprintf(names[o], sizeof names[o], "%s", L.name); GU32(e + 8) = TEXT_ID0 + (u32)o; } }
            else if (o >= 0) { fprintf(stderr, "[MAPS] mod_maps.txt line %d: %s is a game map's name: an instance needs a new id\n", no, L.id); continue; }
            else { int ex = table_index(L.id); if (ex >= 0) { fprintf(stderr, "[MAPS] mod_maps.txt line %d: %s listed twice: second line ignored\n", no, L.id); continue; }
                idx = add_entry(&L); if (idx < 0) continue;
                if (!L.level[0] || !strcasecmp(L.level, L.id)) { if (nseen < MAXC) snprintf(seen_custom[nseen++], 32, "%s", L.id); }
                else if (nseen < MAXC) snprintf(seen_custom[nseen++], 32, "%s", L.level); }
            if (listed[idx]) { fprintf(stderr, "[MAPS] mod_maps.txt line %d: %s listed twice: second line ignored\n", no, L.id); continue; }
            listed[idx] = 1; if (norder < MAXL) order[norder++] = idx; }
        fclose(f); }
    /* installed custom maps that mod_maps.txt does not mention: added to the list and to the file */
    FILE *app = 0;
    for (int i = 0; i < nf; i++) { int s = 0; for (int k = 0; k < nseen; k++) if (!strcasecmp(seen_custom[k], found[i])) s = 1;
        if (s || table_index(found[i]) >= 0 || orig_index(found[i]) >= 0) continue;
        line_t L; memset(&L, 0, sizeof L); L.era[0] = L.era[1] = -1; for (int m = 0; m < 4; m++) L.modes[m] = -1; L.space = -1; snprintf(L.id, sizeof L.id, "%s", found[i]);
        int idx = add_entry(&L); if (idx < 0) continue;
        if (norder < MAXL) order[norder++] = idx;
        if (!app) app = fopen(path, "ab");
        if (app) { u32 e = ent((u32)idx); u8 md[4]; for (int m = 0; m < 4; m++) md[m] = GU8(e + 12 + m); char ln[400];
            fmt_line(ln, sizeof ln, L.id, names[idx], 0, cm[idx - NORIG].base, (GU32(e + 4) ? 1 : 0) | (GU32(e) ? 2 : 0), md, (int)GU32(e + 16), "added by the game (installed custom map)"); fputs(ln, app); } }
    if (app) fclose(app);
    if (!norder) { fprintf(stderr, "[MAPS] mod_maps.txt lists no map: the game's list is used\n"); for (int i = 0; i < NORIG; i++) order[i] = i; norder = NORIG; }
    total = NORIG + ncm;
    fprintf(stderr, "[MAPS] Instant Action lists %d maps (%d custom maps / instances)\n", norder, ncm); }

/* ---------------------------------------------------------------- the map table's readers (hooks: replace, always) */
int rs_map_has_era(u32 era, u32 idx, u64 *rv){ load(); *rv = idx < (u32)total ? (GU32(ent(idx) + (era == 1 ? 4 : 0)) != 0) : 1; return 1; }
int rs_map_mode(u32 mode, u32 idx, u64 *rv){ load(); *rv = idx < (u32)total ? GU8(ent(idx) + 12 + mode) : 1; return 1; }
int rs_map_space(u32 idx, u32 *rv){ load(); *rv = idx < (u32)total ? GU8(ent(idx) + 16) : 0; return 1; }
int rs_map_prequel(u32 idx, u32 *rv){ load(); *rv = idx < (u32)total ? GU32(ent(idx)) : 0; return 1; }
int rs_map_classic(u32 idx, u32 *rv){ load(); *rv = idx < (u32)total ? GU32(ent(idx) + 4) : 0; return 1; }
int rs_map_text(u32 idx, u32 *rv){ load(); *rv = idx < (u32)total ? GU32(ent(idx) + 8) : 0xFFFFFFFFu; return 1; }
int rs_map_index(u32 name, u32 *rv){
    load(); const char *s = name ? (const char *)GP(name) : "";
    for (int i = 0; i < total; i++) for (int k = 1; k >= 0; k--) { u32 p = GU32(ent((u32)i) + 4 * (u32)k); if (p && !strcasecmp((const char *)GP(p), s)) { *rv = (u32)i; return 1; } }
    int o = orig_index(s); *rv = o >= 0 ? (u32)o : (u32)total; return 1; }               /* (a game map whose eras mod_maps.txt hid) */
int rs_map_text_by_name(u32 name, u32 *rv){ u32 i; rs_map_index(name, &i); *rv = i < (u32)total ? GU32(ent(i) + 8) : 0; return 1; }
/* the profile's times-played array has 22 slots */
void rs_map_played(u32 *idx){ if (*idx != 0xFFFFFFFFu && *idx >= NORIG) *idx = 0xFFFFFFFFu; }

/* FE_ListAllMaps(n) (game_24.c 08A31C38): list entry n, 0 = the end of the list */
int rs_fe_list_all_maps(u32 n, u32 f1, u32 f2, void *rv_){ rv_t *rv = rv_;
    load(); if ((f1 & 0xff) || (f2 & 0xff)) return 0;                                  /* the game's own */
    if (n == 0 && rs_setting_int("RS_CUSTOM_MAPS", 1)) names_from_game();
    if (n >= (u32)norder) { rv->v0 = 0; return 1; }
    u32 txt = func_0897A064(GU32(ent((u32)order[n]) + 8), 0);
    func_08898048(GIMG(0x08AE1E5Cu), txt, 0, 0, 0, 0, 0, 0); rv->v0 = 1; return 1; }
/* FE_SelectMapPlanet(n) (08A31918): the list entry n -> the selected map (a table index) */
int rs_fe_select_planet(u32 n, u32 f1, u32 f2, void *rv_){ rv_t *rv = rv_;
    load(); if ((f1 & 0xff) || (f2 & 0xff)) return 0;
    if (n >= (u32)norder) { rv->v0 = 0; return 1; }
    GU32(GIMG(0x08C2CF28u)) = (u32)order[n]; GU32(GIMG(0x08C2D19Cu)) = 1;
    func_08A275D0(0xceb65b46u); func_08A27590(0x90f029d1u); rv->v0 = 1; return 1; }

/* ---------------------------------------------------------------- names (STDTEXT ids TEXT_ID0 + table index), for game_patches.c */
int rs_custom_maps_text16(u32 id, u16 *out, int max){
    load(); if (id < TEXT_ID0 || id >= TEXT_ID0 + (u32)total || max < 2) return 0;
    const unsigned char *s = (const unsigned char *)names[id - TEXT_ID0]; if (!*s) return 0; int k = 0;
    while (*s && k < max - 1) out[k++] = *s++;                              /* Latin-1 */
    out[k++] = 0; return k; }

/* ---------------------------------------------------------------- files (hle.c) */
/* rel: a game path (any case, / or \).  ENVS/<ERA>/<ID>.PSP of a custom map or instance -> its level's file: a host path (1, a custom
 * level) or the game path of a game map's level (2); another path naming the id that the game folder does not have -> the same path
 * with the base map's name (2). */
int rs_custom_map_file(const char *rel, char *out, size_t cap){
    load(); if (!ncm) return 0;
    char r[600]; size_t n = 0; for (const char *p = rel; *p && n < sizeof r - 1; p++) r[n++] = (char)toupper((unsigned char)(*p == '\\' ? '/' : *p)); r[n] = 0;
    const char *env = strstr(r, "ENVS/");
    for (int i = 0; i < ncm; i++) {
        char *hit = strstr(r, cm[i].id); if (!hit) continue;
        size_t il = strlen(cm[i].id); char after = hit[il];
        if ((hit > r && (isalnum((unsigned char)hit[-1]) || hit[-1] == '_')) || isalnum((unsigned char)after) || after == '_') continue;
        size_t pre = (size_t)(hit - r); const char *orig = rel;
        if (env && hit > env) for (int era = 0; era < 3; era++) {
            char want[96]; snprintf(want, sizeof want, "ENVS/%s/%s.PSP", ERA_DIR[era], cm[i].id);
            if (!strcmp(env, want)) {
                char lf[32]; level_file(&cm[i], era, lf, sizeof lf);
                if (cm[i].level_orig) { snprintf(out, cap, "%.*s%s%s", (int)pre, orig, lf, orig + pre + il); return 2; }
                snprintf(out, cap, "%s/mods/maps/%s/%s.PSP", data_dir(), ERA_DIR[era], cm[i].level); return 1; } }
        /* another file by the map's name: the base map's */
        snprintf(out, cap, "%.*s%s%s", (int)pre, orig, cm[i].base, orig + pre + il); return 2; }
    return 0; }
/* the custom ids of ENVS/<ERA> for a directory listing: entry k (name only, NUL = no more); host: the level's file */
int rs_custom_map_dirent(const char *dir, int k, char *name, size_t cap, char *host, size_t hcap){
    load(); size_t l = strlen(dir); while (l && (dir[l - 1] == '/' || dir[l - 1] == '\\')) l--;
    int era = -1;
    for (int e = 0; e < 3; e++) { size_t el = strlen(ERA_DIR[e]); if (l >= el + 5 && !strncasecmp(dir + l - el, ERA_DIR[e], el) && !strncasecmp(dir + l - el - 5, "ENVS", 4)) era = e; }
    if (era < 0) return 0;
    for (int i = 0, seen = 0; i < ncm; i++) if (cm[i].eras & (1 << era)) {
        if (seen++ == k) { snprintf(name, cap, "%s.PSP", cm[i].id);
            char lf[32]; level_file(&cm[i], era, lf, sizeof lf);
            if (cm[i].level_orig) snprintf(host, hcap, "%.*s/%s.PSP", (int)l, dir, lf);    /* the game map's own file, in this folder */
            else snprintf(host, hcap, "%s/mods/maps/%s/%s.PSP", data_dir(), ERA_DIR[era], cm[i].level);
            return 1; } }
    return 0; }

/* Any game file replaced by a mod: <data>/mods/files/<its path on the disc> (e.g. mods/files/PSP_GAME/USRDIR/ENVS/CLASSIC/HOTH.PSP,
 * as tools/asura's character and weapon tools write them).  rel: the path the game opened (without the device). */
int rs_mod_file(const char *rel, char *out, size_t cap){
    static int any = -1; char root[600];
    snprintf(root, sizeof root, "%s/mods/files", data_dir());
    if (any < 0) { struct stat st; any = stat(root, &st) == 0; }
    if (!any) return 0;
    while (*rel == '/' || *rel == '\\') rel++;
    char r[600]; size_t n = 0; for (const char *p = rel; *p && n < sizeof r - 1; p++) r[n++] = (char)toupper((unsigned char)(*p == '\\' ? '/' : *p)); r[n] = 0;
    snprintf(out, cap, "%s/%s", root, r); struct stat st;
    return stat(out, &st) == 0 && st.st_size > 0; }
