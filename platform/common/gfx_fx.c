/* Graphics features of the PS5GFXExperimental branch (see gfx_fx.h): the current map, a light setup per map, and asset dumps.
 *
 * Map:    the game opens its level as PSP_GAME/USRDIR/ENVS/<ERA>/<MAP>.PSP (hle.c sceIoOpen -> rs_fx_file_opened): era + map name.
 *
 * Lights: <data>/mods/lights/<era>_<map>.txt, one per map:
 *             sun_dir x y z          world-space direction towards the sun (the shadow and PBR light)
 *             sun_color r g b        linear 0..1;  sun_intensity k
 *             ambient r g b
 *             light point|spot x y z [dx dy dz] r g b     the map's local lights (for the ray-traced passes)
 *         The file is made from the game's own lighting the first time a map is played: every lit 3D draw passes its GE lights through
 *         rs_fx_note_lights (renderer thread); the strongest directional light (weighted by brightness and how often it is used) becomes
 *         the sun, point/spot lights are collected by position.  After RS_LIGHT_CAPTURE_FRAMES frames with lights the file is written;
 *         edit it to change a map's light (it is never overwritten; delete it to capture again).
 *
 * Dumps:  RS_DUMP_ASSETS=1: every texture of every container the game opens (maps, GUI files, fonts, HUD) is written once to
 *             <data>/mods/dumps/maps/<map>/            the level's own textures and its sky
 *             <data>/mods/dumps/players/<character>/   characters (graphics\characters), heads under players/heads/
 *             <data>/mods/dumps/weapons/<weapon sheet>/, vehicles/<vehicle>/, objects/<...>/, effects/, ui/<file>/
 *         as <key>@<texture name>.png, where <key> is the texture-replacement key: a dumped file copied into mods/<mod>/textures/ (any
 *         subfolder) replaces that texture as it is; _ms / _n next to it add PBR maps (texrep.c).  A background thread does the work. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <pthread.h>
#include <sys/stat.h>
#include "psp_impl.h"
#include "gfx.h"
#include "asura_tex.h"
#include "gfx_fx.h"

extern int rs_setting_int(const char *key, int def);
extern int rs_png_write(const char *path, int w, int h, const u32 *rgba);
extern void rs_mkdirs(const char *path);

const char *rs_fx_data_dir(void){
#ifdef RS_PS5
    return "/data/SWBFRS";
#else
    const char *e = getenv("RS_DATA_DIR"); return e ? e : ".";
#endif
}

/* ---------------------------------------------------------------- settings */
rs_fx_cfg_t rs_fx;
static void cfg_load(void){
    static int done; if (done) return; done = 1;
    rs_fx.pbr = rs_setting_int("RS_PBR", 1);
    rs_fx.shadows = rs_setting_int("RS_SHADOWS", 1);
    rs_fx.shadow_res = rs_setting_int("RS_SHADOW_RES", 4096);
    rs_fx.shadow_range = rs_setting_int("RS_SHADOW_RANGE", 60);
    rs_fx.shadow_strength = rs_setting_int("RS_SHADOW_STRENGTH", 50);
    rs_fx.rt_shadows = rs_setting_int("RS_RT_SHADOWS", 0);
    rs_fx.rt_reflections = rs_setting_int("RS_RT_REFLECTIONS", 0);
    rs_fx.light_capture = rs_setting_int("RS_LIGHT_CAPTURE", 1);
    rs_fx.capture_frames = rs_setting_int("RS_LIGHT_CAPTURE_FRAMES", 600);
#ifdef RS_PS5
    rs_fx.dump = rs_setting_int("RS_DUMP_ASSETS", 1);
#else
    rs_fx.dump = rs_setting_int("RS_DUMP_ASSETS", 0);
#endif
    fprintf(stderr, "[FX] PBR %d, shadows %d (%d px, %d m, %d%%), ray-traced shadows %d, reflections %d, light capture %d, asset dump %d\n",
            rs_fx.pbr, rs_fx.shadows, rs_fx.shadow_res, rs_fx.shadow_range, rs_fx.shadow_strength, rs_fx.rt_shadows, rs_fx.rt_reflections,
            rs_fx.light_capture, rs_fx.dump); }
void rs_fx_init(void){ cfg_load(); }

/* ---------------------------------------------------------------- the current map */
static pthread_mutex_t mx = PTHREAD_MUTEX_INITIALIZER;
static char cur_era[32], cur_map[64];
const char *rs_fx_map(void){ return cur_map; }
static void lower(char *s){ for (; *s; s++) *s = (char)tolower((unsigned char)*s); }
static void base_noext(const char *p, char *out, size_t cap){
    const char *b = p; for (const char *c = p; *c; c++) if (*c == '/' || *c == '\\') b = c + 1;
    snprintf(out, cap, "%s", b); char *dot = strrchr(out, '.'); if (dot) *dot = 0; lower(out); }

/* ---------------------------------------------------------------- lights */
#define MAXL 64
typedef struct { int type; float pos[3], dir[3], col[3]; double w; } lrec_t;
static struct {
    int loaded, have_sun, written; float sun[3], sun_col[3], sun_k, sun_level, amb[3];
    lrec_t dl[16]; int ndl;                 /* directional lights seen (capture) */
    lrec_t L[MAXL]; int nL;                 /* local lights */
    double amb_acc[3]; long amb_n; long frames, lit_frames; int frame_lit;
    unsigned gen;                           /* bumped when the sun changes */
} lt;
static void light_path(char *out, size_t cap){ snprintf(out, cap, "%s/mods/lights/%s_%s.txt", rs_fx_data_dir(), cur_era, cur_map); }
static void lights_reset(void){ memset(&lt, 0, sizeof lt); lt.sun_k = 1; lt.gen++; }
static void lights_load(void){
    char p[700]; light_path(p, sizeof p); FILE *f = fopen(p, "r"); lt.loaded = 1; if (!f) return;
    char l[256];
    while (fgets(l, sizeof l, f)) {
        float a[9]; char kind[16];
        if (sscanf(l, "sun_dir %f %f %f", &a[0], &a[1], &a[2]) == 3) { float n = sqrtf(a[0] * a[0] + a[1] * a[1] + a[2] * a[2]); if (n > 1e-6f) { for (int i = 0; i < 3; i++) lt.sun[i] = a[i] / n; lt.have_sun = 1; } }
        else if (sscanf(l, "sun_color %f %f %f", &a[0], &a[1], &a[2]) == 3) memcpy(lt.sun_col, a, 12);
        else if (sscanf(l, "sun_intensity %f", &a[0]) == 1) lt.sun_k = a[0];
        else if (sscanf(l, "ambient %f %f %f", &a[0], &a[1], &a[2]) == 3) memcpy(lt.amb, a, 12);
        else if (sscanf(l, "light %15s", kind) == 1 && lt.nL < MAXL) {
            lrec_t *r = &lt.L[lt.nL]; memset(r, 0, sizeof *r);
            if (!strcmp(kind, "point") && sscanf(l, "light point %f %f %f %f %f %f", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]) == 6) {
                r->type = 1; memcpy(r->pos, a, 12); memcpy(r->col, a + 3, 12); lt.nL++; }
            else if (!strcmp(kind, "spot") && sscanf(l, "light spot %f %f %f %f %f %f %f %f %f", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8]) == 9) {
                r->type = 2; memcpy(r->pos, a, 12); memcpy(r->dir, a + 3, 12); memcpy(r->col, a + 6, 12); lt.nL++; } } }
    fclose(f); lt.written = 1; lt.gen++;
    fprintf(stderr, "[FX] lights of %s_%s: %s, sun %.2f %.2f %.2f, %d local light(s)\n", cur_era, cur_map, p, lt.sun[0], lt.sun[1], lt.sun[2], lt.nL); }
static void lights_write(void){
    if (!lt.have_sun && !lt.nL) return;
    char d[600]; snprintf(d, sizeof d, "%s/mods/lights", rs_fx_data_dir()); rs_mkdirs(d);
    char p[700]; light_path(p, sizeof p); FILE *f = fopen(p, "r"); if (f) { fclose(f); lt.written = 1; return; }
    f = fopen(p, "w"); if (!f) { fprintf(stderr, "[FX] cannot write %s\n", p); lt.written = 1; return; }
    fprintf(f, "# light setup of %s_%s, captured from the game's own lighting (%ld frames); edit freely - this file is not overwritten\n", cur_era, cur_map, lt.lit_frames);
    fprintf(f, "# sun_dir = world-space direction towards the sun; colours linear 0..1\n");
    if (lt.have_sun) fprintf(f, "# the game's own light level for this sun: %.3f (its lights are dim and summed per colour channel)\n", lt.sun_level);
    if (lt.have_sun) { fprintf(f, "sun_dir %.4f %.4f %.4f\nsun_color %.3f %.3f %.3f\nsun_intensity %.2f\n", lt.sun[0], lt.sun[1], lt.sun[2], lt.sun_col[0], lt.sun_col[1], lt.sun_col[2], lt.sun_k); }
    if (lt.amb_n) fprintf(f, "ambient %.3f %.3f %.3f\n", lt.amb_acc[0] / lt.amb_n, lt.amb_acc[1] / lt.amb_n, lt.amb_acc[2] / lt.amb_n);
    for (int i = 0; i < lt.nL; i++) { const lrec_t *r = &lt.L[i];
        if (r->type == 2) fprintf(f, "light spot %.3f %.3f %.3f %.4f %.4f %.4f %.3f %.3f %.3f\n", r->pos[0], r->pos[1], r->pos[2], r->dir[0], r->dir[1], r->dir[2], r->col[0], r->col[1], r->col[2]);
        else fprintf(f, "light point %.3f %.3f %.3f %.3f %.3f %.3f\n", r->pos[0], r->pos[1], r->pos[2], r->col[0], r->col[1], r->col[2]); }
    fclose(f); lt.written = 1;
    fprintf(stderr, "[FX] lights of %s_%s captured: %s (sun %.2f %.2f %.2f, %d local)\n", cur_era, cur_map, p, lt.sun[0], lt.sun[1], lt.sun[2], lt.nL); }

/* renderer thread: the GE lights of one lit 3D draw */
void rs_fx_note_lights(const gfx_hw_t *h){
    { static long n; if (getenv("RS_FX_DEBUG") && n++ % 20000 == 0) for (int i = 0; i < (int)h->lfl[2]; i++) fprintf(stderr, "[FX] lit draw light %d: type %.0f pos %.2f %.2f %.2f diffuse %.2f %.2f %.2f ambient %.2f %.2f %.2f mat %.2f %.2f %.2f sc %.2f %.2f %.2f\n", i, h->lpos[i*4+3], h->lpos[i*4], h->lpos[i*4+1], h->lpos[i*4+2], h->ld[i*4], h->ld[i*4+1], h->ld[i*4+2], h->la[i*4], h->la[i*4+1], h->la[i*4+2], h->mdif[0], h->mdif[1], h->mdif[2], h->msca[0], h->msca[1], h->msca[2]); }
    if (!rs_fx.light_capture || !cur_map[0] || lt.written || h->lfl[2] < 0.5f) return;
    if (pthread_mutex_trylock(&mx)) return;
    int n = (int)h->lfl[2]; if (n > 4) n = 4; lt.frame_lit = 1;
    /* The game lights each object with up to three directional lights, often one per colour channel (R, G, B) pointing nearly the
     * same way: a per-object light probe.  They are summed into one light (direction weighted by brightness, colours added). */
    float sd[3] = {0, 0, 0}, sc[3] = {0, 0, 0}; int nd = 0;
    lt.amb_acc[0] += h->msca[0]; lt.amb_acc[1] += h->msca[1]; lt.amb_acc[2] += h->msca[2]; lt.amb_n++;
    for (int i = 0; i < n; i++) {
        const float *p = &h->lpos[i * 4], *c = &h->ld[i * 4]; int type = (int)p[3];
        float lum = 0.2126f * c[0] + 0.7152f * c[1] + 0.0722f * c[2], mx = c[0] > c[1] ? (c[0] > c[2] ? c[0] : c[2]) : (c[1] > c[2] ? c[1] : c[2]);
        if (mx < 0.01f) continue;
        if (type == 0) { for (int k = 0; k < 3; k++) { sd[k] += p[k] * mx; sc[k] += c[k]; } nd++; continue; }
        int k = 0; for (; k < lt.nL; k++) { const float *q = lt.L[k].pos; float dx = q[0] - p[0], dy = q[1] - p[1], dz = q[2] - p[2]; if (dx * dx + dy * dy + dz * dz < 0.01f) break; }
        if (k == lt.nL) { if (lt.nL == MAXL) continue; lrec_t *r = &lt.L[k]; memset(r, 0, sizeof *r); r->type = type == 2 ? 2 : 1;
            memcpy(r->pos, p, 12); memcpy(r->dir, &h->lspot[i * 4], 12); memcpy(r->col, c, 12); lt.nL++; }
        lt.L[k].w += lum; }
    float l = sqrtf(sd[0] * sd[0] + sd[1] * sd[1] + sd[2] * sd[2]);
    if (nd && l > 1e-4f) {
        for (int k = 0; k < 3; k++) sd[k] /= l;
        float w = 0.2126f * sc[0] + 0.7152f * sc[1] + 0.0722f * sc[2];
        int k = 0; for (; k < lt.ndl; k++) { const float *d = lt.dl[k].dir; float dl = sqrtf(d[0] * d[0] + d[1] * d[1] + d[2] * d[2]);
            if (dl > 0 && (d[0] * sd[0] + d[1] * sd[1] + d[2] * sd[2]) / dl > 0.97f) break; }
        if (k == lt.ndl) { if (lt.ndl == 16) k = -1; else { memset(&lt.dl[k], 0, sizeof lt.dl[k]); lt.ndl++; } }
        if (k >= 0) { lrec_t *r = &lt.dl[k]; for (int c = 0; c < 3; c++) { r->dir[c] += sd[c] * w; r->col[c] += sc[c] * w; } r->w += w; } }
    pthread_mutex_unlock(&mx); }

/* renderer thread, once per displayed frame */
void rs_fx_frame(void){
    if (!cur_map[0] || lt.written || !rs_fx.light_capture) return;
    pthread_mutex_lock(&mx);
    lt.frames++; if (lt.frame_lit) lt.lit_frames++; lt.frame_lit = 0;
    if (getenv("RS_FX_DEBUG") && lt.frames % 100 == 0) fprintf(stderr, "[FX] %s: %ld frames, %ld with lights, %d directional, %d local\n", cur_map, lt.frames, lt.lit_frames, lt.ndl, lt.nL);
    if (lt.lit_frames >= rs_fx.capture_frames) {
        int best = -1; for (int k = 0; k < lt.ndl; k++) if (best < 0 || lt.dl[k].w > lt.dl[best].w) best = k;
        if (best >= 0 && lt.dl[best].w > 0) { const lrec_t *r = &lt.dl[best];
            float l = sqrtf(r->dir[0] * r->dir[0] + r->dir[1] * r->dir[1] + r->dir[2] * r->dir[2]); if (l < 1e-6f) l = 1;
            float c[3] = {(float)(r->col[0] / r->w), (float)(r->col[1] / r->w), (float)(r->col[2] / r->w)};
            float m = c[0] > c[1] ? (c[0] > c[2] ? c[0] : c[2]) : (c[1] > c[2] ? c[1] : c[2]); if (m < 1e-4f) m = 1;
            for (int k = 0; k < 3; k++) { lt.sun[k] = r->dir[k] / l; lt.sun_col[k] = c[k] / m; }
            lt.sun_k = 1; lt.sun_level = m; lt.have_sun = 1; lt.gen++; }
        lights_write(); }
    pthread_mutex_unlock(&mx); }

/* the map's sun: direction (towards the sun, world space) and colour x intensity; 0 = none known yet */
int rs_fx_sun(float dir[3], float col[3], unsigned *gen){
    if (!lt.have_sun) return 0;
    pthread_mutex_lock(&mx);
    memcpy(dir, lt.sun, 12); if (col) for (int i = 0; i < 3; i++) col[i] = lt.sun_col[i] * lt.sun_k;
    if (gen) *gen = lt.gen;
    pthread_mutex_unlock(&mx); return 1; }
int rs_fx_local_lights(rs_fx_light_t *out, int max){
    pthread_mutex_lock(&mx); int n = lt.nL < max ? lt.nL : max;
    for (int i = 0; i < n; i++) { out[i].type = lt.L[i].type; memcpy(out[i].pos, lt.L[i].pos, 12); memcpy(out[i].dir, lt.L[i].dir, 12); memcpy(out[i].col, lt.L[i].col, 12); }
    pthread_mutex_unlock(&mx); return n; }

/* ---------------------------------------------------------------- asset dumps (background thread) */
#define QN 64
static char *queue[QN]; static int qh, qt, worker_on; static pthread_cond_t qc = PTHREAD_COND_INITIALIZER; static pthread_mutex_t qm = PTHREAD_MUTEX_INITIALIZER;
typedef struct { char map[64], file[64]; int n_new, n_all, loadscreen; } dctx_t;
/* sanitise a label: letters, digits, '-' and '_' (and never ending in _n / _ms, the PBR suffixes) */
static void label(const char *in, char *out, size_t cap){
    size_t j = 0; for (const char *c = in; *c && j + 2 < cap; c++) { char ch = (char)tolower((unsigned char)*c); out[j++] = isalnum((unsigned char)ch) || ch == '-' || ch == '_' ? ch : '-'; }
    out[j] = 0;
    size_t l = strlen(out); if ((l >= 2 && !strcmp(out + l - 2, "_n")) || (l >= 3 && !strcmp(out + l - 3, "_ms"))) { if (l + 1 < cap) { out[l] = '-'; out[l + 1] = 0; } } }
/* the dump folder of a texture from its resource name: "\graphics\characters\mediumrebel.tga" -> players/mediumrebel */
static void category(const char *res, const dctx_t *c, char *out, size_t cap){
    char n[256]; size_t j = 0; for (const char *s = res; *s && j + 1 < sizeof n; s++) n[j++] = *s == '\\' ? '/' : (char)tolower((unsigned char)*s); n[j] = 0;
    char *p = n; while (*p == '/') p++;
    if (!strncmp(p, "graphics/", 9)) p += 9;
    char b[128]; base_noext(p, b, sizeof b); char lb[128]; label(b, lb, sizeof lb);
    const char *map = c->map[0] ? c->map : "unknown";
    if (!strncmp(p, "characters/", 11)) snprintf(out, cap, "players/%s", lb);
    else if (!strncmp(p, "objects/unit_heads/", 19)) snprintf(out, cap, "players/heads/%s", lb);
    else if (!strncmp(p, "vehicles/", 9)) snprintf(out, cap, "vehicles/%s", lb);
    else if (!strncmp(p, "weapons/", 8)) snprintf(out, cap, "weapons/%s", lb);
    else if (!strncmp(p, "environments/sky/", 17)) snprintf(out, cap, "maps/%s/sky", map);
    else if (!strncmp(p, "environments/", 13)) snprintf(out, cap, "maps/%s", map);
    else if (!strncmp(p, "objects/", 8)) { char d[160]; snprintf(d, sizeof d, "%s", p + 8); char *e = strrchr(d, '/');
        if (e) { *e = 0; for (char *q = d; *q; q++) if (!isalnum((unsigned char)*q) && *q != '/' && *q != '_' && *q != '-') *q = '-'; snprintf(out, cap, "objects/%s", d); }
        else snprintf(out, cap, "objects"); }
    else if (!strncmp(p, "specialfx/", 10)) snprintf(out, cap, "effects");
    else if (c->loadscreen) snprintf(out, cap, "maps/%s/loadscreen", c->file);
    else snprintf(out, cap, "ui/%s", c->file); }
static void dump_tex(const char *name, uint32_t key, const uint32_t *rgba, int w, int h, void *ud){
    dctx_t *c = ud; char cat[256], b[128], lb[128]; category(name, c, cat, sizeof cat); base_noext(name, b, sizeof b); label(b, lb, sizeof lb);
    char dir[800]; snprintf(dir, sizeof dir, "%s/mods/dumps/%s", rs_fx_data_dir(), cat); rs_mkdirs(dir);
    char p[1100]; snprintf(p, sizeof p, "%s/%08x@%s.png", dir, (unsigned)key, lb); c->n_all++;
    struct stat st; if (stat(p, &st) == 0) return;
    if (!rs_png_write(p, w, h, rgba)) c->n_new++; }
static void *dump_thread(void *arg){
    (void)arg;
    for (;;) {
        pthread_mutex_lock(&qm); while (qh == qt) pthread_cond_wait(&qc, &qm); char *job = queue[qh]; qh = (qh + 1) % QN; pthread_mutex_unlock(&qm);
        dctx_t c; memset(&c, 0, sizeof c);
        char *tab = strchr(job, '\t'); if (tab) { *tab = 0; snprintf(c.map, sizeof c.map, "%s", tab + 1); }
        base_noext(job, c.file, sizeof c.file);
        { char lj[1024]; snprintf(lj, sizeof lj, "%s", job); lower(lj); c.loadscreen = strstr(lj, "/loadscreens/") && strcmp(c.file, "loadingbar") && strcmp(c.file, "frontend"); }
        int n = asura_each_texture(job, dump_tex, &c);
        if (n > 0) fprintf(stderr, "[FX] dumped %s: %d texture(s), %d new -> %s/mods/dumps\n", job, c.n_all, c.n_new, rs_fx_data_dir());
        free(job); } }
static void dump_queue(const char *path, const char *map){
    static char *seen[512]; static int nseen;
    for (int i = 0; i < nseen; i++) if (!strcmp(seen[i], path)) return;
    if (nseen < 512) seen[nseen++] = strdup(path);
    pthread_mutex_lock(&qm);
    if (!worker_on) { pthread_t t; pthread_attr_t at; pthread_attr_init(&at); pthread_attr_setstacksize(&at, 512 * 1024);
        worker_on = pthread_create(&t, &at, dump_thread, 0) == 0; if (worker_on) pthread_detach(t); }
    if ((qt + 1) % QN != qh) { size_t l = strlen(path) + strlen(map) + 2; char *j = malloc(l); snprintf(j, l, "%s\t%s", path, map); queue[qt] = j; qt = (qt + 1) % QN; pthread_cond_signal(&qc); }
    pthread_mutex_unlock(&qm); }

/* ---------------------------------------------------------------- file opens (game thread) */
static int ends_ci(const char *s, const char *suf){ size_t a = strlen(s), b = strlen(suf); if (a < b) return 0; for (size_t i = 0; i < b; i++) if (tolower((unsigned char)s[a - b + i]) != tolower((unsigned char)suf[i])) return 0; return 1; }
void rs_fx_file_opened(const char *full){
    cfg_load();
    char lc[1024]; snprintf(lc, sizeof lc, "%s", full); lower(lc); for (char *c = lc; *c; c++) if (*c == '\\') *c = '/';
    const char *e = strstr(lc, "/envs/");
    if (e && ends_ci(lc, ".psp")) {                                        /* a level: ENVS/<ERA>/<MAP>.PSP */
        const char *era = e + 6, *sl = strchr(era, '/'); char er[32] = "", mp[64];
        if (sl) snprintf(er, sizeof er, "%.*s", (int)(sl - era), era);
        base_noext(lc, mp, sizeof mp);
        pthread_mutex_lock(&mx);
        if (strcmp(mp, cur_map) || strcmp(er, cur_era)) {
            snprintf(cur_map, sizeof cur_map, "%s", mp); snprintf(cur_era, sizeof cur_era, "%s", er[0] ? er : "envs");
            lights_reset(); lights_load();
            fprintf(stderr, "[FX] map %s (%s)%s\n", cur_map, cur_era, lt.written ? "" : ": capturing its lights"); }
        pthread_mutex_unlock(&mx); }
    if (rs_fx.dump && (ends_ci(lc, ".psp") || ends_ci(lc, ".asr") || ends_ci(lc, ".gui"))) dump_queue(full, e ? cur_map : "");
}
