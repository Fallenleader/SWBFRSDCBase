/* Texture replacement (mod support): any texture the game uploads can be replaced by a PNG of any size, plus optional PBR maps.
 *
 *   <mods dir>/<mod name>/textures/<key>.png             replacement colour (RGBA; any resolution, keep the aspect ratio)
 *   <mods dir>/<mod name>/textures/<key>-<pal>.png       same, only for one palette of a CLUT texture (team colours etc.)
 *   ..._ms.png   PBR map: R = metalness, G = smoothness, B = ambient occlusion (A reserved for a height map, not used yet);
 *                the layout Materialize-style tools give (smoothness = 1 - roughness)
 *   ..._n.png    tangent-space normal map (OpenGL convention, +Y up)
 *
 * <key> = CRC-32 of the texture's level-0 texel bytes as the game stores them (8 lowercase hex digits; tools/asura/extract.py writes the
 * key of every texture into manifest.json).  <pal> = the runtime palette id; RS_MOD_DUMP=1 writes every texture the game uploads as
 * <dump dir>/<key>-<pal>.png exactly as it appears in game, so the easiest workflow is: dump, edit, drop into a mod (rename to <key>.png
 * to cover every palette).  Mods dir: Vita ux0:data/RS/mods, PC ./mods (RS_MODS_DIR).  Dump dir: ux0:data/RS/dump, PC ./dump.
 * Mods load in alphabetical order; a later mod wins for the same file.  RS_MODS=0 disables all replacements. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <ctype.h>
#include <sys/stat.h>
#include "psp_impl.h"
#ifdef _WIN32
#include <direct.h>
#define MKDIR(p) _mkdir(p)
#else
#define MKDIR(p) mkdir(p, 0777)
#endif
#define STBI_ONLY_PNG
#define STB_IMAGE_IMPLEMENTATION
#define STBI_ASSERT(x) ((void)0)
#include "../common/ext/stb/stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#define STBIW_ASSERT(x) ((void)0)
#include "../common/ext/stb/stb_image_write.h"

int rs_setting_int(const char *key, int def);

typedef struct { unsigned long long key; char *path[3]; } rep_t;   /* key = crc << 32 | palette (0 = any); 0 colour, 1 metal-roughness, 2 normal */
static rep_t *reps; static int nrep, caprep, inited, enabled, dumping;

static u32 crc_tab[256];
static void crc_init(void){ for (u32 i = 0; i < 256; i++) { u32 c = i; for (int k = 0; k < 8; k++) c = (c & 1) ? 0xEDB88320u ^ (c >> 1) : c >> 1; crc_tab[i] = c; } }
u32 rs_crc32(const u8 *p, size_t n){ if (!crc_tab[1]) crc_init(); u32 c = 0xFFFFFFFFu; while (n--) c = crc_tab[(c ^ *p++) & 255] ^ (c >> 8); return c ^ 0xFFFFFFFFu; }

static rep_t *find(unsigned long long key){ int lo = 0, hi = nrep - 1; while (lo <= hi) { int m = (lo + hi) / 2; if (reps[m].key == key) return &reps[m]; if (reps[m].key < key) lo = m + 1; else hi = m - 1; } return 0; }
static rep_t *get(unsigned long long key){ for (int i = 0; i < nrep; i++) if (reps[i].key == key) return &reps[i];
    if (nrep == caprep) { caprep = caprep ? caprep * 2 : 64; reps = realloc(reps, sizeof *reps * (size_t)caprep); }
    memset(&reps[nrep], 0, sizeof reps[0]); reps[nrep].key = key; return &reps[nrep++]; }
static int cmp(const void *a, const void *b){ unsigned long long x = ((const rep_t *)a)->key, y = ((const rep_t *)b)->key; return x < y ? -1 : x > y; }
static int cmpstr(const void *a, const void *b){ return strcmp(*(char * const *)a, *(char * const *)b); }
static int hex8(const char *s){ for (int i = 0; i < 8; i++) if (!isxdigit((unsigned char)s[i])) return 0; return 1; }

/* <key>[-<pal>][@<label>][_ms|_n].png, in dir and its subfolders (a mod can keep the layout of mods/dumps) */
static int scan_dir(const char *dir, int depth){
    DIR *d = opendir(dir); if (!d) return 0; struct dirent *e; int n = 0;
    while ((e = readdir(d))) {
        const char *s = e->d_name; size_t l = strlen(s); if (s[0] == '.') continue;
        char p[1200]; snprintf(p, sizeof p, "%s/%s", dir, s);
        if (l < 12 || !hex8(s)) { struct stat st; if (depth < 6 && stat(p, &st) == 0 && S_ISDIR(st.st_mode)) n += scan_dir(p, depth + 1); continue; }
        const char *ext = s + l - 4; if (strcmp(ext, ".png") && strcmp(ext, ".PNG")) continue;
        char k[9]; memcpy(k, s, 8); k[8] = 0; unsigned long long key = (unsigned long long)strtoul(k, 0, 16) << 32; const char *r = s + 8;
        if (*r == '-' && (size_t)(r + 9 - s) <= l - 4 && hex8(r + 1)) { memcpy(k, r + 1, 8); key |= strtoul(k, 0, 16); r += 9; }
        if (*r == '@') { const char *x = ext; if (x - r > 3 && !strncmp(x - 3, "_ms", 3)) x -= 3; else if (x - r > 2 && !strncmp(x - 2, "_n", 2)) x -= 2; r = x; }   /* a label (dumps): ignored */
        size_t rl = (size_t)(ext - r); int slot;
        if (rl == 0) slot = 0; else if (rl == 3 && !strncmp(r, "_ms", 3)) slot = 1; else if (rl == 2 && !strncmp(r, "_n", 2)) slot = 2; else continue;
        rep_t *rp = get(key); free(rp->path[slot]); rp->path[slot] = strdup(p); n++; }
    closedir(d);
    if (n && !depth) fprintf(stderr, "[MOD] %s: %d texture file(s)\n", dir, n);
    return n; }

void rs_mkdirs(const char *path){                                  /* mkdir -p */
    char p[1024]; snprintf(p, sizeof p, "%s", path);
    for (char *c = p + 1; *c; c++) if (*c == '/') { *c = 0; MKDIR(p); *c = '/'; }
    MKDIR(p); }
static const char *dump_root(void){
#ifdef __vita__
    return "ux0:data/RS/dump";
#elif defined(RS_PS5)
    return "/data/SWBFRS/mods/dumps/all";
#else
    return getenv("RS_DUMP_TEX_DIR") ? getenv("RS_DUMP_TEX_DIR") : "dump";
#endif
}
static void init(void){
    inited = 1; crc_init(); enabled = rs_setting_int("RS_MODS", 1); dumping = rs_setting_int("RS_MOD_DUMP", 0);
    if (dumping) { char p[600]; snprintf(p, sizeof p, "%s/textures", dump_root()); rs_mkdirs(p);
        fprintf(stderr, "[MOD] dumping every texture to %s\n", p); }
    if (!enabled) return;
#ifdef __vita__
    const char *root = "ux0:data/RS/mods";
#elif defined(RS_PS5)
    const char *root = "/data/SWBFRS/mods";
#else
    const char *root = getenv("RS_MODS_DIR") ? getenv("RS_MODS_DIR") : "mods";
#endif
    DIR *d = opendir(root); if (!d) return; struct dirent *e; char *names[256]; int nn = 0;
    while ((e = readdir(d)) && nn < 256) if (e->d_name[0] != '.' && strcmp(e->d_name, "dumps") && strcmp(e->d_name, "lights")) names[nn++] = strdup(e->d_name);
    closedir(d); qsort(names, (size_t)nn, sizeof names[0], cmpstr);          /* alphabetical: later mods override earlier ones */
    for (int i = 0; i < nn; i++) { char p[1024]; snprintf(p, sizeof p, "%s/%s/textures", root, names[i]); scan_dir(p, 0); free(names[i]); }
    for (int i = 0; i < nrep; ) { if (!reps[i].path[0]) { free(reps[i].path[1]); free(reps[i].path[2]); reps[i] = reps[--nrep]; } else i++; }   /* colour file required */
    qsort(reps, (size_t)nrep, sizeof *reps, cmp);
    fprintf(stderr, "[MOD] %d texture replacement(s) active\n", nrep); }

int rs_texrep_active(void){ if (!inited) init(); return (enabled && nrep > 0) || dumping; }
int rs_texrep_dumping(void){ if (!inited) init(); return dumping; }
/* returns 1 if (key, palette) has a replacement - a palette-specific file first, then the any-palette one; path_out[slot] NULL if absent */
int rs_texrep_find(u32 key, u32 pal, const char *path_out[3]){
    if (!inited) init(); if (!enabled || !nrep) return 0;
    rep_t *r = pal ? find((unsigned long long)key << 32 | pal) : 0; if (!r) r = find((unsigned long long)key << 32); if (!r) return 0;
    for (int i = 0; i < 3; i++) path_out[i] = r->path[i]; return 1; }
/* RS_MOD_DUMP: write one decoded texture (once per key/palette per session) */
void rs_texrep_dump(u32 key, u32 pal, int w, int h, const u32 *rgba){
    static unsigned long long *seen; static int nseen, capseen; unsigned long long k = (unsigned long long)key << 32 | pal;
    for (int i = 0; i < nseen; i++) if (seen[i] == k) return;
    if (nseen == capseen) { capseen = capseen ? capseen * 2 : 256; seen = realloc(seen, sizeof *seen * (size_t)capseen); } seen[nseen++] = k;
    char p[700]; if (pal) snprintf(p, sizeof p, "%s/textures/%08x-%08x.png", dump_root(), key, pal); else snprintf(p, sizeof p, "%s/textures/%08x.png", dump_root(), key);
    FILE *f = fopen(p, "rb"); if (f) { fclose(f); return; }                  /* already dumped by an earlier session */
    stbi_write_png(p, w, h, 4, rgba, w * 4); }
/* write RGBA8 as a PNG (0 = written) */
int rs_png_write(const char *path, int w, int h, const u32 *rgba){ return stbi_write_png(path, w, h, 4, rgba, w * 4) ? 0 : -1; }
/* decode a PNG to RGBA8 (malloc'd, caller frees with free()) */
u8 *rs_png_load(const char *path, int *w, int *h){ int c; return stbi_load(path, w, h, &c, 4); }
