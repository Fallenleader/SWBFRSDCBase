/* The game's own UI assets for the platform's screens (game_ui.h).
 *
 * FONTS.ASR: RSCF textures (the glyph pages, "franklin gothic medium cond_13_0.tga" ...) and one FONT chunk (version 3) per size:
 *   +0x00 name (0x64 bytes), +0x64 f32 line height, +0x68 u32 page count, +0x6C page names, +0xD8 u16 first code, u16 last code,
 *   +0xDC u32 page width, u32 page height, u32 glyph count, +0xE8 glyphs: { f32 u, f32 v (0..1 on the page), f32 width (px),
 *   u16 code, u16 ? } x count.  A glyph is the cell (u, v, width, line height) on page 0. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vfs.h"
#include "asura_tex.h"
#include "game_ui.h"

const char *rs_game_root(void) __attribute__((weak));
const char *rs_game_root(void){ return "."; }

int rs_game_file(const char *rel, char *out, unsigned cap){
    char r[512]; snprintf(r, sizeof r, "PSP_GAME/USRDIR/%s", rel);
    if (vfs_iso_active()) return vfs_iso_resolve(r, out, cap);
    snprintf(out, cap, "%s/%s", rs_game_root(), r); return 1; }

int rs_game_ui_texture(const char *rel, const char *name, uint32_t **rgba, int *w, int *h){
    char p[1100]; if (!rs_game_file(rel, p, sizeof p)) return -1;
    return asura_load_texture(p, name, rgba, w, h); }

static uint32_t rd32(const uint8_t *p){ return (uint32_t)p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24); }
static float rdf(const uint8_t *p){ uint32_t u = rd32(p); float f; memcpy(&f, &u, 4); return f; }

int rs_game_font_load(gfont_t *f, int size){
    memset(f, 0, sizeof *f);
    char p[1100]; if (!rs_game_file("GRAPHICS/FONTS.ASR", p, sizeof p)) return -1;
    return rs_game_font_load_path(f, p, size); }
int rs_game_font_load_path(gfont_t *f, const char *p, int size){
    memset(f, 0, sizeof *f);
    FILE *fp = vfs_fopen(p, "rb"); if (!fp) return -1;
    fseek(fp, 0, SEEK_END); long n = ftell(fp); fseek(fp, 0, SEEK_SET);
    uint8_t *d = n > 16 ? malloc((size_t)n) : NULL; if (!d || fread(d, 1, (size_t)n, fp) != (size_t)n) { free(d); fclose(fp); return -1; } fclose(fp);
    char want[32]; snprintf(want, sizeof want, "Cond_%d.asr", size);
    int rc = -2;
    for (long q = 8; q + 16 <= n; ) {
        uint32_t sz = rd32(d + q + 4); if (sz < 16 || q + (long)sz > n) break;
        const uint8_t *b = d + q + 16; long bl = (long)sz - 16;
        if (!memcmp(d + q, "FONT", 4) && bl > 0xE8 && strstr((const char *)b, want)) {
            f->height = (int)(rdf(b + 0x64) + 0.5f); f->pw = (int)rd32(b + 0xDC); f->ph = (int)rd32(b + 0xE0);
            uint32_t cnt = rd32(b + 0xE4);
            for (uint32_t i = 0; i < cnt && 0xE8 + 16 * (long)i + 16 <= bl; i++) {
                const uint8_t *e = b + 0xE8 + 16 * i; unsigned code = (unsigned)(e[12] | (e[13] << 8));
                if (code < 256) { f->g[code].u = rdf(e) * (float)f->pw; f->g[code].v = rdf(e + 4) * (float)f->ph; f->g[code].w = rdf(e + 8); } }
            rc = 0; break; }
        q += sz; }
    free(d);
    if (rc) return rc;
    char page[48]; snprintf(page, sizeof page, "cond_%d_0.tga", size);
    int w, h; if (asura_load_texture(p, page, &f->rgba, &w, &h)) return -3;
    f->pw = w; f->ph = h; f->ok = 1; return 0; }
