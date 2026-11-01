/* Custom maps: new levels made with tools/asura/maptool.py, listed in Instant Action's Planet list after the game's own.
 *
 * Files (<data> = /data/SWBFRS on the PS5, ux0:data/SWBFRS on the Vita, RS_DATA_DIR or the game folder on PC):
 *   <data>/mods/maps/<ID>.txt            the map's definition (maptool.py install writes it):
 *                                          Name = shown name     Base = the original map it was made from
 *                                          Modes = 1 1 0 0 (optional)   Space = 0|1 (optional)
 *   <data>/mods/maps/<ERA>/<ID>.PSP      the level, one file per era it has (CLASSIC = Galactic Civil War, PREQUEL = Clone Wars)
 * RS_CUSTOM_MAPS=0 in settings.txt turns them off.
 *
 * How the game is extended:
 *   - its map table (22 entries of 20 bytes at 0x08B1B980: prequel name, classic name, STDTEXT id, 4 per-mode bytes, space flag)
 *     is copied into a larger native table with the custom maps after it; the 8 functions that read it (game_16.c, all bounded by
 *     22) are replaced (tools/dc/hooks.py), as are the two Instant Action list commands that check the bound themselves
 *     (FE_ListAllMaps, FE_SelectMapPlanet).  The game's per-profile "times played" array has 22 slots: custom maps are not counted.
 *   - the names: STDTEXT ids 0x7F00 + n, answered by the text lookup hook (game_patches.c rs_stdtext_get).
 *   - the files: the game finds a level by listing ENVS/<ERA> (func_08A696F4) and opening ENVS/<ERA>/<name>.PSP; the HLE's
 *     directory listing (hle.c sceIoDread) gets the custom files appended and opens / stats of those paths are sent to
 *     <data>/mods/maps.  Any other file the game looks for by the map's name (and does not find) is taken from the Base map's. */
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
#define GIMG(va)  ((uint32_t)(uintptr_t)rs_image_w + ((uint32_t)(va) - 0x08804000u))
#define GU8(a)    (*(volatile uint8_t *)GP(a))
#define GU32(a)   (*(volatile uint32_t *)GP(a))
static void *rs_guest_alloc(size_t size, size_t align){ (void)align; void *p = calloc(1, size + 16); return (void *)(((uintptr_t)p + 15) & ~(uintptr_t)15); }
#endif

extern int rs_setting_int(const char *key, int def);
extern u32 func_0897A064(u32 a0, u32 a1);
extern rv_t func_08898048(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3);
extern rv_t func_08898108(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3);
extern void func_08A275D0(u32 a0);
extern u64 func_08A27590(u32 a0);

#define NORIG    22
#define MAXC     64
#define TABLE    0x08B1B980u
#define TEXT_ID0 0x7F00u
static const char *ERA_DIR[3] = {"CLASSIC", "PREQUEL", "CAMPAIGN"};

typedef struct { char id[32], name[96], base[32]; int eras; } cmap_t;     /* eras: bit 0 classic, 1 prequel, 2 campaign */
static cmap_t cm[MAXC]; static int ncm, total = NORIG, inited;
static u32 tab;                                                          /* guest address of the native table */

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
static u32 gstrdup(const char *s){ size_t n = strlen(s) + 1; char *g = rs_guest_alloc(n, 4); memcpy(g, s, n); return GA(g); }
static int orig_index(const char *name){
    for (int i = 0; i < NORIG; i++) for (int k = 0; k < 2; k++) {
        u32 p = GU32(GIMG(TABLE) + 20 * i + 4 * k); if (p && !strcasecmp((const char *)GP(p), name)) return i; }
    return -1; }

static void load(void){
    if (inited) return; inited = 1;
    tab = GA(rs_guest_alloc(20 * (NORIG + MAXC), 16));
    memcpy(GP(tab), GP(GIMG(TABLE)), 20 * NORIG);
    if (!rs_setting_int("RS_CUSTOM_MAPS", 1)) return;
    char root[600]; snprintf(root, sizeof root, "%s/mods/maps", data_dir());
    DIR *d = opendir(root); if (!d) return;
    char *names[MAXC]; int nn = 0; struct dirent *e;
    while ((e = readdir(d)) && nn < MAXC) { size_t l = strlen(e->d_name); if (l > 4 && !strcasecmp(e->d_name + l - 4, ".txt")) names[nn++] = strdup(e->d_name); }
    closedir(d);
    for (int i = 0; i < nn; i++) for (int j = i + 1; j < nn; j++) if (strcasecmp(names[i], names[j]) > 0) { char *t = names[i]; names[i] = names[j]; names[j] = t; }
    for (int i = 0; i < nn; i++) {
        cmap_t c; memset(&c, 0, sizeof c); size_t l = strlen(names[i]) - 4; if (l >= sizeof c.id) l = sizeof c.id - 1;
        for (size_t k = 0; k < l; k++) c.id[k] = (char)toupper((unsigned char)names[i][k]);
        snprintf(c.name, sizeof c.name, "%s", c.id);
        char path[800]; snprintf(path, sizeof path, "%s/%s", root, names[i]); free(names[i]);
        FILE *f = fopen(path, "r"); if (!f) continue;
        int modes[4] = {-1, -1, -1, -1}, space = -1; char ln[512];
        while (fgets(ln, sizeof ln, f)) {
            char *h = strchr(ln, '#'); if (h) *h = 0; char *eq = strchr(ln, '='); if (!eq) continue; *eq = 0; char *k = ln, *v = eq + 1; trim(k); trim(v);
            if (!strcasecmp(k, "Name")) snprintf(c.name, sizeof c.name, "%s", v);
            else if (!strcasecmp(k, "Base")) { snprintf(c.base, sizeof c.base, "%s", v); for (char *p = c.base; *p; p++) *p = (char)toupper((unsigned char)*p); }
            else if (!strcasecmp(k, "Modes")) sscanf(v, "%d %d %d %d", &modes[0], &modes[1], &modes[2], &modes[3]);
            else if (!strcasecmp(k, "Space")) space = atoi(v); }
        fclose(f);
        for (int era = 0; era < 3; era++) { struct stat st; snprintf(path, sizeof path, "%s/%s/%s.PSP", root, ERA_DIR[era], c.id); if (stat(path, &st) == 0) c.eras |= 1 << era; }
        if (!(c.eras & 3)) { fprintf(stderr, "[MAPS] %s: no level file in %s/CLASSIC or PREQUEL: skipped\n", c.id, root); continue; }
        if (orig_index(c.id) >= 0) { fprintf(stderr, "[MAPS] %s: the game has a map of that name: skipped (choose another id)\n", c.id); continue; }
        int b = c.base[0] ? orig_index(c.base) : -1;
        if (b < 0) { fprintf(stderr, "[MAPS] %s: Base = %s is not one of the game's maps: HOTH used\n", c.id, c.base); b = orig_index("HOTH"); snprintf(c.base, sizeof c.base, "HOTH"); }
        u32 ent = tab + 20 * (u32)(NORIG + ncm); u32 be = GIMG(TABLE) + 20 * (u32)(b < 0 ? 0 : b);
        u32 nm = gstrdup(c.id);
        GU32(ent) = (c.eras & 2) ? nm : 0; GU32(ent + 4) = (c.eras & 1) ? nm : 0; GU32(ent + 8) = TEXT_ID0 + (u32)ncm;
        for (int m = 0; m < 4; m++) GU8(ent + 12 + m) = modes[m] >= 0 ? (u8)modes[m] : GU8(be + 12 + m);
        GU32(ent + 16) = space >= 0 ? (u32)space : GU32(be + 16);
        cm[ncm++] = c;
        fprintf(stderr, "[MAPS] custom map %d: %s \"%s\" (base %s, eras%s%s%s)\n", NORIG + ncm - 1, c.id, c.name, c.base,
                (c.eras & 1) ? " classic" : "", (c.eras & 2) ? " prequel" : "", (c.eras & 4) ? " campaign" : ""); }
    total = NORIG + ncm; }

static u32 ent(u32 idx){ return tab + 20 * idx; }

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
    *rv = (u32)total; return 1; }
int rs_map_text_by_name(u32 name, u32 *rv){ u32 i; rs_map_index(name, &i); *rv = i < (u32)total ? GU32(ent(i) + 8) : 0; return 1; }
/* the profile's times-played array has 22 slots */
void rs_map_played(u32 *idx){ if (*idx != 0xFFFFFFFFu && *idx >= NORIG) *idx = 0xFFFFFFFFu; }

/* FE_ListAllMaps(n) (game_24.c 08A31C38): list entry n, 0 = the end of the list */
int rs_fe_list_all_maps(u32 n, u32 f1, u32 f2, void *rv_){ rv_t *rv = rv_;
    load(); if ((f1 & 0xff) || (f2 & 0xff) || n < NORIG) return 0;         /* the game's own */
    if (n >= (u32)total) { rv->v0 = 0; return 1; }
    u32 txt = func_0897A064(GU32(ent(n) + 8), 0);
    func_08898048(GIMG(0x08AE1E5Cu), txt, 0, 0, 0, 0, 0, 0); rv->v0 = 1; return 1; }
/* FE_SelectMapPlanet(n) (08A31918) */
int rs_fe_select_planet(u32 n, u32 f1, u32 f2, void *rv_){ rv_t *rv = rv_;
    load(); if ((f1 & 0xff) || (f2 & 0xff) || n < NORIG) return 0;
    if (n >= (u32)total) { rv->v0 = 0; return 1; }
    GU32(GIMG(0x08C2CF28u)) = n; GU32(GIMG(0x08C2D19Cu)) = 1;
    func_08A275D0(0xceb65b46u); func_08A27590(0x90f029d1u); rv->v0 = 1; return 1; }

/* ---------------------------------------------------------------- names (STDTEXT ids TEXT_ID0 + n), for game_patches.c */
int rs_custom_maps_text16(u32 id, u16 *out, int max){
    load(); if (id < TEXT_ID0 || id >= TEXT_ID0 + (u32)ncm || max < 2) return 0;
    const unsigned char *s = (const unsigned char *)cm[id - TEXT_ID0].name; int k = 0;
    while (*s && k < max - 1) out[k++] = *s++;                              /* Latin-1 */
    out[k++] = 0; return k; }

/* ---------------------------------------------------------------- files (hle.c) */
/* rel: a game path (any case, / or \).  The custom file for ENVS/<ERA>/<ID>.PSP, or for another path naming a custom map's id
 * that the game folder does not have, the same path with the Base map's name.  out: a host path (1) or a game path to try (2). */
int rs_custom_map_file(const char *rel, char *out, size_t cap){
    load(); if (!ncm) return 0;
    char r[600]; size_t n = 0; for (const char *p = rel; *p && n < sizeof r - 1; p++) r[n++] = (char)toupper((unsigned char)(*p == '\\' ? '/' : *p)); r[n] = 0;
    const char *env = strstr(r, "ENVS/");
    for (int i = 0; i < ncm; i++) {
        char *hit = strstr(r, cm[i].id); if (!hit) continue;
        size_t il = strlen(cm[i].id); char after = hit[il];
        if ((hit > r && (isalnum((unsigned char)hit[-1]) || hit[-1] == '_')) || isalnum((unsigned char)after) || after == '_') continue;
        if (env && hit > env) for (int era = 0; era < 3; era++) {
            char want[96]; snprintf(want, sizeof want, "ENVS/%s/%s.PSP", ERA_DIR[era], cm[i].id);
            if (!strcmp(env, want)) { snprintf(out, cap, "%s/mods/maps/%s/%s.PSP", data_dir(), ERA_DIR[era], cm[i].id); return 1; } }
        /* another file by the map's name: the base map's */
        size_t pre = (size_t)(hit - r); const char *orig = rel;
        snprintf(out, cap, "%.*s%s%s", (int)pre, orig, cm[i].base, orig + pre + il); return 2; }
    return 0; }
/* the custom levels of ENVS/<ERA> for a directory listing: entry k (name only, NUL = no more) */
int rs_custom_map_dirent(const char *dir, int k, char *name, size_t cap, char *host, size_t hcap){
    load(); size_t l = strlen(dir); while (l && (dir[l - 1] == '/' || dir[l - 1] == '\\')) l--;
    int era = -1;
    for (int e = 0; e < 3; e++) { size_t el = strlen(ERA_DIR[e]); if (l >= el + 5 && !strncasecmp(dir + l - el, ERA_DIR[e], el) && !strncasecmp(dir + l - el - 5, "ENVS", 4)) era = e; }
    if (era < 0) return 0;
    for (int i = 0, seen = 0; i < ncm; i++) if (cm[i].eras & (1 << era)) {
        if (seen++ == k) { snprintf(name, cap, "%s.PSP", cm[i].id); snprintf(host, hcap, "%s/mods/maps/%s/%s.PSP", data_dir(), ERA_DIR[era], cm[i].id); return 1; } }
    return 0; }
