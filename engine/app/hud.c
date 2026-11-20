/* The in-match HUD, traced from the game (see hud.h and docs/NATIVE_ENGINE.md, 1.10).
 *
 * Sprites: the game keeps a table of 46 sprite name hashes (0x08B1C8A4, 8 bytes each: h31 of "HUD_....tga", then the sprite found
 * at load, func 08A5CE38) and draws by index (func 08A4FCE8: index, position, centred?, colour 0xAARRGGBB): a centred sprite is
 * moved up and left by half its size; the size is the TTXT rectangle in texels.  A bar (func 08A512F8) is drawn whole in its back
 * colour (when not 0), then cut to the fill fraction (its right edge: u1 = u0 + (u1 - u0) x f) in the fill colour.
 * Text (func 088CBBF4 -> 088CC808): flags 0x1000 printf, 4 centred across, 8 right-aligned, 0x20 the bottom at y, 0x40 centred down. */
#include "hud.h"
#include "../assets/asura.h"
#include "../render/ak_gfx.h"
#include "../core/ak_math.h"
#include "../core/ak_settings.h"
#include <string.h>
#include <stdio.h>
#include <math.h>

typedef struct { u32 hash; f32 u0, v0, u1, v1, w, h; ak_gfx_tex *tex; } sprite;
typedef struct { u16 ch; f32 u, v, w; } glyph;

#define MAX_SPRITES 192
static sprite spr[MAX_SPRITES]; static u32 nspr;
typedef struct { glyph g[512]; u32 n; f32 line, tw, th; ak_gfx_tex *tex; } fontdef;
static fontdef fonts[2], *fontp = &fonts[0];   /* Franklin Gothic Medium Cond 9 (most of the HUD) and 13 (the timer, 08A5BE24) */
#define font (*fontp)
static ak_arena mem; static bool ready;
static u32 wpn_first[2], wpn_n[2];                 /* the weapon icons: classic, prequel */

static u32 h31(const char *s) { u32 h = 0; for (; *s; s++) { u8 c = (u8)*s; if (c >= 'A' && c <= 'Z') c += 32; h = h * 31 + c; } return h; }
static f32 rdf(const u8 *b) { f32 f; memcpy(&f, b, 4); return f; }
static int ieq(const char *a, const char *b) { for (; *a && *b; a++, b++) { int x = *a, y = *b; if (x >= 'A' && x <= 'Z') x += 32; if (y >= 'A' && y <= 'Z') y += 32; if (x != y) return 1; } return *a != *b; }

/* the game's table, in its order (index = what the HUD code passes): h31 of "HUD_....tga", 0x08B1C8A4 (8 bytes each).
 * 0 Reticule_01, 1 Radar_Background_Half, 2 Radar_Blip, 3 Ammo_Underlay, 4 Arrow_Lock, 5 Arrow_NPC, 6 Capture_Point, 7 Health_Bar,
 * 8..10 Health_3/4/5_Bar, 0xB..0xE Logo_Alliance/Empire/CIS/Republic, 0xF Objective_Flag, 0x10 Radar_Blip_NPC, 0x11 Stamina_Bar,
 * 0x12 Stamina_Bar_Frame, 0x13 Hit_Direction, 0x14 Level_Indicator, 0x15 Icon_Health, 0x16 Icon_Stamina, 0x17 Lock_On_Quarter,
 * 0x18 Target_Leading_Indicator, 0x19 Icon_Energy, 0x1A Force_Bar, 0x1B Radar_Blip_NPC_Level, 0x1C Space_Lock_On_Quarter,
 * 0x1D Space_Arrow_Lock, 0x1E Icon_Jetpack, 0x1F..0x21 Text_Box_Bottom/Mid/Top, 0x22 PowerUp_Bar, 0x23 PowerUp_Frame,
 * 0x24 Infinity_Symbol, 0x25 Flag_Carrier_Icon, 0x26 (a picture not on the disc), 0x27 Radar_Blip_Flag_Carrier,
 * 0x28 Target_Info_Bracket, 0x29 Radar_Blip_CZ, 0x2A Capture_Point_Cross, 0x2B..0x2D Icon_CTF_Bacta_Tank/Data_Cube/Energy_Cell */
static const u32 table[] = {
    0xAFAAE005, 0x8EE36003, 0x2B9E8932, 0x3D4CABB5, 0xFB3A84C9, 0xC615E843, 0xC7E867EF, 0x2A8DDD58,
    0xBEA6DC0C, 0x52EB4B0D, 0xE72FBA0E, 0x1273BEE3, 0x6FF53DC0, 0x8E506B61, 0x4F8F6A88, 0x27D7E35A,
    0x6E354954, 0xA7989ADB, 0x32D57809, 0xF6B4D06B, 0xA4A4BF2C, 0xFF31FDFA, 0xCC17D3D1, 0x116EF9F8,
    0x9AB85090, 0x20683826, 0xE3BEE557, 0x8E53B659, 0x2EF44F3F, 0x5B68BF22, 0xBF0D7014, 0xF67A9B09,
    0x7F62D76A, 0xFC94A3F7, 0x0C75B1CC, 0xE4208FE6, 0x41661627, 0x12A505EB, 0x1AE1BC90, 0x72F92FD2,
    0x29F6F99D, 0x0A04D664, 0x4E207370, 0x92D5A200, 0x1EF01562, 0x37349CF1,
};
enum { S_RETICLE = 0, S_RADAR_HALF = 1, S_RADAR_BLIP = 2, S_AMMO_UNDERLAY = 3, S_CAPTURE_POINT = 6, S_LOCK_QUARTER = 0x17, S_BLIP_NPC_LEVEL = 0x1B, S_HEALTH_BAR = 7, S_HEALTH_3 = 8, S_HEALTH_4 = 9, S_HEALTH_5 = 10, S_ICON_HEALTH = 0x15,
       S_INFINITY = 0x24, S_COUNT = sizeof table / sizeof table[0] };
static s32 by_index[S_COUNT];

static const sprite *find(u32 h, u32 first, u32 n) { for (u32 i = first; i < first + n; i++) if (spr[i].hash == h) return &spr[i]; return NULL; }

/* a TTXT sheet: u32 n; the sheet's name; n x { f32 u0, v0, u1, v1, w, h; the picture's name }, names padded to 4; its texture
 * is the RSCF type 2 in the same file */
static u32 load_sheet(ak_vfs *vfs, const char *path)
{
    ak_blob b; if (!ak_vfs_read(vfs, path, &mem, &b) || !ak_asura_check(&b)) { AK_WARN("hud", "%s missing", path); return 0; }
    u32 pos = 8, first = nspr; ak_chunk c; ak_gfx_tex *tex = NULL;
    while (ak_asura_next(&b, &pos, &c)) {
        ak_rscf r; ak_texture t;
        if (ak_chunk_tag(&c) == AK_TAG('R', 'S', 'C', 'F') && ak_rscf_parse(&c, &r) && r.type == AK_RSCF_TEXTURE && ak_texture_parse(&r, &mem, &t)) tex = ak_gfx_texture(&t);
    }
    pos = 8;
    while (ak_asura_next(&b, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('T', 'T', 'X', 'T') || c.size < 8) continue;
        u32 n = ak_rd32(c.body), p = 4; p += ((u32)strnlen((const char *)c.body + p, c.size - p) + 1 + 3) & ~3u;
        for (u32 i = 0; i < n && p + 24 < c.size && nspr < MAX_SPRITES; i++) {
            sprite *s = &spr[nspr++];
            s->u0 = rdf(c.body + p); s->v0 = rdf(c.body + p + 4); s->u1 = rdf(c.body + p + 8); s->v1 = rdf(c.body + p + 12);
            s->w = rdf(c.body + p + 16); s->h = rdf(c.body + p + 20); s->tex = tex; p += 24;
            const char *nm = (const char *)c.body + p; s->hash = h31(nm);
            p += ((u32)strnlen(nm, c.size - p) + 1 + 3) & ~3u;
        }
    }
    return nspr - first;
}

/* FONT (version 3): char name[100]; f32 line height; u32 pages; char page name[100]; u32; u16 first, last; u32 sheet w, h;
 * u32 n; n x { f32 u, v, f32 width in texels, u16 char, u16 } - the cell is a line high */
static bool load_font(ak_vfs *vfs, const char *want)
{
    ak_blob b; if (!ak_vfs_read(vfs, "PSP_GAME/USRDIR/GRAPHICS/FONTS.ASR", &mem, &b) || !ak_asura_check(&b)) return false;
    u32 pos = 8; ak_chunk c; const char *page = NULL;
    while (ak_asura_next(&b, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('F', 'O', 'N', 'T') || c.size < 0xE8 || !strstr((const char *)c.body, want)) continue;
        font.line = rdf(c.body + 0x64); page = (const char *)c.body + 0x6C;
        font.tw = (f32)ak_rd32(c.body + 0xDC); font.th = (f32)ak_rd32(c.body + 0xE0);
        u32 n = ak_rd32(c.body + 0xE4);
        for (u32 i = 0; i < n && 0xE8 + i * 16 + 16 <= c.size && font.n < 512; i++) {
            const u8 *g = c.body + 0xE8 + i * 16; glyph *o = &font.g[font.n++];
            o->u = rdf(g); o->v = rdf(g + 4); o->w = rdf(g + 8); o->ch = ak_rd16(g + 12);
        }
        break;
    }
    if (!page) return false;
    char tail[64]; const char *bs = strrchr(page, '\\'); snprintf(tail, sizeof tail, "%s", bs ? bs + 1 : page);   /* the sheet by name */
    pos = 8;
    while (ak_asura_next(&b, &pos, &c)) {
        ak_rscf r; ak_texture t;
        if (ak_chunk_tag(&c) != AK_TAG('R', 'S', 'C', 'F') || !ak_rscf_parse(&c, &r) || r.type != AK_RSCF_TEXTURE) continue;
        const char *rb = strrchr(r.name, '\\'); rb = rb ? rb + 1 : r.name;
        if (!ieq(rb, tail) && ak_texture_parse(&r, &mem, &t)) { font.tex = ak_gfx_texture(&t); break; }
    }
    return font.tex != NULL;
}

/* TEXT/CPNAMES.ASR: one PTXT per language - u32 table hash (0x3A6386FB), u32 n, u32 language, "CPNames", then n x { u32 length,
 * UTF-16 text with its 0 } - the length counts the 0, nothing padded; language 0 is English */
static u16 *cpname[128]; static u32 cplen[128], ncp;
static u16 **stdtext; static u32 *stdlen, nstd;            /* TEXT/STDTEXT.ASR: LTXT per language - u32 n, u32 language, n x { u32 length with the 0, UTF-16 } */
static void load_stdtext(ak_vfs *vfs)
{
    ak_blob b; if (!ak_vfs_read(vfs, "PSP_GAME/USRDIR/TEXT/STDTEXT.ASR", &mem, &b) || !ak_asura_check(&b)) return;
    u32 pos = 8; ak_chunk c; int lang = ak_setting_int("AK_LANGUAGE", 0);
    while (ak_asura_next(&b, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('L', 'T', 'X', 'T') || c.size < 8 || (int)ak_rd32(c.body + 4) != lang) continue;
        u32 n = ak_rd32(c.body), p = 8; if (n > 4096) break;
        stdtext = ak_arena_alloc(&mem, n * sizeof *stdtext, 8); stdlen = ak_arena_alloc(&mem, n * 4, 4); if (!stdtext || !stdlen) break;
        for (u32 i = 0; i < n && p + 4 <= c.size; i++) {
            u32 len = ak_rd32(c.body + p); p += 4; if (p + len * 2 > c.size) break;
            stdtext[i] = ak_arena_alloc(&mem, (len + 1) * 2, 2); stdlen[i] = len ? len - 1 : 0;
            if (stdtext[i]) for (u32 k = 0; k < len; k++) stdtext[i][k] = ak_rd16(c.body + p + k * 2);
            p += len * 2; nstd = i + 1;
        }
        break;
    }
}
static const u16 *stdtext_get(u32 id, u32 *len) { if (!stdtext || id >= nstd || !stdtext[id]) { *len = 0; return NULL; } *len = stdlen[id]; return stdtext[id]; }
const u16 *ak_hud_post_name(s32 i, u32 *len) { if (i < 0 || (u32)i >= ncp) { *len = 0; return NULL; } *len = cplen[i]; return cpname[i]; }
static void load_cpnames(ak_vfs *vfs)
{
    ak_blob b; if (!ak_vfs_read(vfs, "PSP_GAME/USRDIR/TEXT/CPNAMES.ASR", &mem, &b) || !ak_asura_check(&b)) return;
    u32 pos = 8; ak_chunk c; int lang = ak_setting_int("AK_LANGUAGE", 0);
    while (ak_asura_next(&b, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('P', 'T', 'X', 'T') || c.size < 16 || (int)ak_rd32(c.body + 8) != lang) continue;
        u32 n = ak_rd32(c.body + 4), p = 12; p += ((u32)strnlen((const char *)c.body + p, c.size - p) + 1 + 3) & ~3u;
        for (u32 i = 0; i < n && i < 128 && p + 4 <= c.size; i++) {
            u32 len = ak_rd32(c.body + p); p += 4; if (p + len * 2 > c.size) break;
            cpname[i] = ak_arena_alloc(&mem, (len + 1) * 2, 2); cplen[i] = len ? len - 1 : 0;
            if (cpname[i]) for (u32 k = 0; k < len; k++) cpname[i][k] = ak_rd16(c.body + p + k * 2);
            p += len * 2; ncp = i + 1;
        }
        break;
    }
}

/* TEXT/BOTNAMES_<faction>.ASR: the AI soldiers' names, laid out as CPNAMES (48 a side; Empire's are "AG 176"...).  Each bot of a
 * side gets one at random, no two the same (read from the running original: the player records hold the names at +22, func
 * 0897DD80, and a Hoth match's eight rebels had entries 42, 18, 28, 22, 26, 34, 15, 20) */
static u16 *botname[4][64]; static u32 botlen[4][64], nbot[4];
static void load_botnames(ak_vfs *vfs)
{
    static const char *file[4] = { "REPUBLIC", "CIS", "ALLIANCE", "EMPIRE" };   /* AK_FACTION_* order */
    int lang = ak_setting_int("AK_LANGUAGE", 0);
    for (int f = 0; f < 4; f++) {
        char path[96]; snprintf(path, sizeof path, "PSP_GAME/USRDIR/TEXT/BOTNAMES_%s.ASR", file[f]);
        ak_blob b; if (!ak_vfs_read(vfs, path, &mem, &b) || !ak_asura_check(&b)) continue;
        u32 pos = 8; ak_chunk c;
        while (ak_asura_next(&b, &pos, &c)) {
            if (ak_chunk_tag(&c) != AK_TAG('P', 'T', 'X', 'T') || c.size < 16 || (int)ak_rd32(c.body + 8) != lang) continue;
            u32 n = ak_rd32(c.body + 4), p = 12; p += ((u32)strnlen((const char *)c.body + p, c.size - p) + 1 + 3) & ~3u;
            for (u32 i = 0; i < n && i < 64 && p + 4 <= c.size; i++) {
                u32 len = ak_rd32(c.body + p); p += 4; if (p + len * 2 > c.size) break;
                botname[f][i] = ak_arena_alloc(&mem, (len + 1) * 2, 2); botlen[f][i] = len ? len - 1 : 0;
                if (botname[f][i]) for (u32 k = 0; k < len; k++) botname[f][i][k] = ak_rd16(c.body + p + k * 2);
                p += len * 2; nbot[f] = i + 1;
            }
            break;
        }
    }
}
u32 ak_hud_bot_names(int faction) { return faction >= 0 && faction < 4 ? nbot[faction] : 0; }
const u16 *ak_hud_bot_name(int faction, s32 i, u32 *len)
{
    if (faction < 0 || faction >= 4 || i < 0 || (u32)i >= nbot[faction]) { *len = 0; return NULL; }
    *len = botlen[faction][i]; return botname[faction][i];
}

bool ak_hud_load(ak_vfs *vfs)
{
    if (ready) return true;
    if (!ak_arena_init(&mem, 4u << 20)) return false;
    u32 n = load_sheet(vfs, "PSP_GAME/USRDIR/GRAPHICS/HUD.ASR");
    for (u32 i = 0; i < S_COUNT; i++) {
        const sprite *s = find(table[i], 0, n);
        by_index[i] = s ? (s32)(s - spr) : -1;
    }
    wpn_first[0] = nspr; wpn_n[0] = load_sheet(vfs, "PSP_GAME/USRDIR/GRAPHICS/HUD_WEAPONS_CLASSIC.ASR");
    wpn_first[1] = nspr; wpn_n[1] = load_sheet(vfs, "PSP_GAME/USRDIR/GRAPHICS/HUD_WEAPONS_PREQUEL.ASR");
    fontp = &fonts[1]; load_font(vfs, "Cond_13"); fontp = &fonts[0];
    bool f = load_font(vfs, "Cond_9");
    load_cpnames(vfs); load_stdtext(vfs); load_botnames(vfs);
    ready = n > 0;
    AK_INFO("hud", "%u HUD pictures, %u + %u weapon icons, font %s (%u glyphs), %u post names, %u texts", n, wpn_n[0], wpn_n[1], f ? "Franklin Gothic Medium Cond 9" : "missing", font.n, ncp, nstd);
    return ready;
}

/* ---- drawing, in the game's 480 x 272 */
#define MAXV 6 * 256
static ak_vtx vb[MAXV]; static u32 nv; static ak_gfx_tex *vtex;
static bool vset; static void flush(void) { if (nv) ak_gfx_draw_immediate(AK_PIPE_HUD, vtex, vb, nv); nv = 0; }
static void quad(ak_gfx_tex *t, f32 x0, f32 y0, f32 x1, f32 y1, f32 u0, f32 v0, f32 u1, f32 v1, u32 argb)
{
    if (t != vtex || !vset || nv + 6 > MAXV) { flush(); vtex = t; vset = true; }
    u8 col[4] = { (u8)(argb >> 16), (u8)(argb >> 8), (u8)argb, (u8)(argb >> 24) };
    const f32 xs[6] = { x0, x1, x0, x0, x1, x1 }, ys[6] = { y0, y0, y1, y1, y0, y1 }, us[6] = { u0, u1, u0, u0, u1, u1 }, vs[6] = { v0, v0, v1, v1, v0, v1 };
    for (int i = 0; i < 6; i++) {
        ak_vtx *v = &vb[nv++]; memset(v, 0, sizeof *v);
        v->pos[0] = xs[i]; v->pos[1] = ys[i]; v->uv[0] = us[i]; v->uv[1] = vs[i]; memcpy(v->col, col, 4);
    }
}
/* func 08A4FCE8 / 08A4FF3C: a picture at (x, y), its top-left or (centred) its middle there; `fill` < 1 cuts it from the right */
static void pic(const sprite *s, f32 x, f32 y, bool centred, u32 argb, f32 fill)
{
    if (!s || !s->tex) return;
    f32 w = s->w * (s->u1 - s->u0), h = s->h * (s->v1 - s->v0);
    if (centred) { x -= w * 0.5f; y -= h * 0.5f; }
    f32 u1 = s->u0 + (s->u1 - s->u0) * fill;
    quad(s->tex, x, y, x + w * fill, y + h, s->u0, s->v0, u1, s->v1, argb);
}
/* func 08A50324 -> 088CF0A8: a picture turned by `a` (radians) about its middle at (x, y): its corners at (+-w/2, +-h/2) carried to
 * x + cos a * cx - sin a * cy, y + sin a * cx + cos a * cy, each keeping its corner of the picture */
static void pic_rot(const sprite *s, f32 x, f32 y, f32 a, u32 argb)
{
    if (!s || !s->tex) return;
    f32 w = s->w * (s->u1 - s->u0), h = s->h * (s->v1 - s->v0), c = cosf(a), sn = sinf(a);
    const f32 lx[4] = { -w * 0.5f, w * 0.5f, w * 0.5f, -w * 0.5f }, ly[4] = { -h * 0.5f, -h * 0.5f, h * 0.5f, h * 0.5f };
    const f32 us[4] = { s->u0, s->u1, s->u1, s->u0 }, vs[4] = { s->v0, s->v0, s->v1, s->v1 };
    if (s->tex != vtex || !vset || nv + 6 > MAXV) { flush(); vtex = s->tex; vset = true; }
    u8 col[4] = { (u8)(argb >> 16), (u8)(argb >> 8), (u8)argb, (u8)(argb >> 24) };
    static const int tri[6] = { 0, 1, 3, 3, 1, 2 };
    for (int k = 0; k < 6; k++) {
        int j = tri[k]; ak_vtx *v = &vb[nv++]; memset(v, 0, sizeof *v);
        v->pos[0] = x + c * lx[j] - sn * ly[j]; v->pos[1] = y + sn * lx[j] + c * ly[j]; v->uv[0] = us[j]; v->uv[1] = vs[j]; memcpy(v->col, col, 4);
    }
}
/* func 08A50840 (via 08A50968): a picture mirrored left to right */
static void pic_mirror(const sprite *s, f32 x, f32 y, bool centred, u32 argb)
{
    if (!s || !s->tex) return;
    f32 w = s->w * (s->u1 - s->u0), h = s->h * (s->v1 - s->v0);
    if (centred) { x -= w * 0.5f; y -= h * 0.5f; }
    quad(s->tex, x, y, x + w, y + h, s->u1, s->v0, s->u0, s->v1, argb);
}
static const sprite *idx(int i) { return i >= 0 && i < (int)S_COUNT && by_index[i] >= 0 ? &spr[by_index[i]] : NULL; }
static const glyph *glyph_of(u16 c) { for (u32 i = 0; i < font.n; i++) if (font.g[i].ch == c) return &font.g[i]; return NULL; }
static f32 text_width(const char *s) { f32 w = 0; for (; *s; s++) { const glyph *g = glyph_of((u8)*s); if (g) w += g->w; } return w; }
static void text(f32 x, f32 y, u32 argb, u32 flags, const char *s)
{
    if (!font.tex) return;
    f32 w = text_width(s);
    if (flags & 4) x -= w * 0.5f; else if (flags & 8) x -= w;
    if (flags & 0x20) y -= font.line; else if (flags & 0x40) y -= font.line * 0.5f;
    for (; *s; s++) {
        const glyph *g = glyph_of((u8)*s); if (!g) continue;
        quad(font.tex, x, y, x + g->w, y + font.line, g->u, g->v, g->u + g->w / font.tw, g->v + font.line / font.th, argb);
        x += g->w;
    }
}

/* ---- the radar (traced; see docs, 1.10).  func 08A5857C draws it: the disc and the map (08A5A6E0), the frame (08A50A00: the
 * HUD_Radar_Background_Half picture twice), the player's blip (HUD_Radar_Blip, centred), the blips (08A59464 -> 08A59BC4).
 * Centre (430, 50), radius 36 (08A59F44, 0x08AF0590).  The disc: 32 slices of 0xFF86807B, which also mark the stencil the map is
 * cut to (ours: the map drawn as the same fan with its own texture coordinates - the same circle).  The level's map: its hmap
 * chunk (version 5: f32 origin x, y, z; f32 width, depth; u32 the picture's hash - a TTXT entry, e.g. Hoth_Spawn.tga on
 * Hoth_map.asr), centred on the origin, turned with the camera, zoom 0.9 radar pixels a unit (0.05 in space; 08A57BD4).
 * In the game's own space (x, y, z; ours is x, -y, -z): a point P shows at  d = (P.x - p.x, p.z - P.z),
 * (x, y) = (d.x c + d.z s, d.z c - d.x s) x zoom  with (s, c) the camera's forward (x, z) (08A59D38); the map's texel for it:
 * u = 0.5 + (P.x - origin.x) / width, v = 0.5 - (P.z - origin.z) / depth. */
static struct { bool have; f32 ox, oz, w, d; sprite pic; ak_gfx_tex *tex; } map;

void ak_hud_level(const ak_blob *b)
{
    if (map.tex) ak_gfx_free_tex(map.tex);
    memset(&map, 0, sizeof map);
    if (!b || !ak_asura_check(b)) return;
    u32 pos = 8, hash = 0; ak_chunk c;
    while (ak_asura_next(b, &pos, &c))
        if (ak_chunk_tag(&c) == AK_TAG('h', 'm', 'a', 'p') && c.size >= 24) {     /* (the body as our reader gives it: from the origin) */
            map.ox = rdf(c.body); map.oz = rdf(c.body + 8); map.w = rdf(c.body + 12); map.d = rdf(c.body + 16); hash = ak_rd32(c.body + 20);
        }
    if (!hash || map.w <= 0.1f || map.d <= 0.1f) { AK_INFO("hud", "radar map: none (hmap %08X, %.1f x %.1f)", hash, map.w, map.d); return; }
    char sheet[96] = "";
    pos = 8;                                                           /* the picture: a TTXT entry with that hash, on its sheet */
    while (ak_asura_next(b, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('T', 'T', 'X', 'T') || c.size < 8) continue;
        u32 n = ak_rd32(c.body), p = 4; const char *sh = (const char *)c.body + p;
        p += ((u32)strnlen(sh, c.size - p) + 1 + 3) & ~3u;
        for (u32 i = 0; i < n && p + 24 < c.size; i++) {
            sprite s; s.u0 = rdf(c.body + p); s.v0 = rdf(c.body + p + 4); s.u1 = rdf(c.body + p + 8); s.v1 = rdf(c.body + p + 12);
            s.w = rdf(c.body + p + 16); s.h = rdf(c.body + p + 20); p += 24;
            const char *nm = (const char *)c.body + p; p += ((u32)strnlen(nm, c.size - p) + 1 + 3) & ~3u;
            if (h31(nm) == hash) { map.pic = s; snprintf(sheet, sizeof sheet, "%s", sh); }
        }
    }
    if (!*sheet) { AK_INFO("hud", "radar map: picture %08X not in the level", hash); return; }
    pos = 8;
    while (ak_asura_next(b, &pos, &c)) {
        ak_rscf r; ak_texture t;
        if (ak_chunk_tag(&c) != AK_TAG('R', 'S', 'C', 'F') || !ak_rscf_parse(&c, &r) || r.type != AK_RSCF_TEXTURE) continue;
        const char *rb = strrchr(r.name, '\\'); rb = rb ? rb + 1 : r.name;
        if (!ieq(rb, sheet) && ak_texture_parse(&r, &mem, &t)) { map.tex = ak_gfx_texture(&t); break; }
    }
    map.have = map.tex != NULL;
    AK_INFO("hud", "radar map: %s, origin %.1f %.1f, %.1f x %.1f", map.have ? sheet : "missing", map.ox, map.oz, map.w, map.d);
}

static u32 team_colour(int team, int own)       /* func 08A055A0: ours blue, nobody's (4) grey, theirs red */
{
    return team == own ? 0xFF0000FFu : team == 4 ? 0xFF808080u : 0xFFFF0000u;
}

static void radar(const ak_hud_state *st)
{
    const f32 cx = 430, cy = 50, R = 36, zoom = st->space ? 0.05f : 0.9f;
    f32 px = st->pos[0], pz = -st->pos[2];                                   /* (the game's space) */
    f32 fl = sqrtf(st->fwd[0] * st->fwd[0] + st->fwd[2] * st->fwd[2]);
    f32 s = fl > 1e-4f ? st->fwd[0] / fl : 0, c = fl > 1e-4f ? -st->fwd[2] / fl : 1;
    /* the disc, then the map in it (32 slices from angle 0, 0x08AF0600 = pi / 16) */
    const int N = 32;
    for (int pass = 0; pass < (map.have && (!st->space || zoom <= 0.5f) ? 2 : 1); pass++)
        for (int i = 0; i < N; i++) {
            f32 a0 = 6.2831853f * i / N, a1 = 6.2831853f * (i + 1) / N;
            f32 xs[3] = { 0, cosf(a0) * R, cosf(a1) * R }, ys[3] = { 0, sinf(a0) * R, sinf(a1) * R };
            ak_gfx_tex *t = pass ? map.tex : NULL;                                  /* (the disc: flat colour - no texture is white) */
            if (t != vtex || !vset || nv + 3 > MAXV) { flush(); vtex = t; vset = true; }
            u32 argb = pass ? 0xFFFFFFFFu : 0xFF86807Bu;
            u8 col[4] = { (u8)(argb >> 16), (u8)(argb >> 8), (u8)argb, (u8)(argb >> 24) };
            for (int k = 0; k < 3; k++) {
                ak_vtx *v = &vb[nv++]; memset(v, 0, sizeof *v);
                v->pos[0] = cx + xs[k]; v->pos[1] = cy + ys[k]; memcpy(v->col, col, 4);
                if (pass) {                                                    /* the screen offset back to the world */
                    f32 X = xs[k] / zoom, Y = ys[k] / zoom, dx = X * c - Y * s, dz = X * s + Y * c;
                    f32 wx = px + dx, wz = pz - dz;
                    f32 u = 0.5f + (wx - map.ox) / map.w, vv = 0.5f - (wz - map.oz) / map.d;
                    v->uv[0] = map.pic.u0 + u * (map.pic.u1 - map.pic.u0); v->uv[1] = map.pic.v0 + vv * (map.pic.v1 - map.pic.v0);
                }
            }
        }
    /* the frame: the half picture left of the centre as it is, right of it mirrored (08A50A00 / 08A50840; flips 0x08AE5A14 / 18) */
    const sprite *h = idx(S_RADAR_HALF);
    if (h) {
        f32 w = h->w * (h->u1 - h->u0), hh = h->h * (h->v1 - h->v0);
        quad(h->tex, cx - w, cy - hh * 0.5f, cx, cy + hh * 0.5f, h->u0, h->v0, h->u1, h->v1, 0xFFFFFFFFu);
        quad(h->tex, cx, cy - hh * 0.5f, cx + w, cy + hh * 0.5f, h->u1, h->v0, h->u0, h->v1, 0xFFFFFFFFu);
    }
    pic(idx(S_RADAR_BLIP), cx, cy, true, 0xFFFFFFFFu, 1);
    /* the blips (08A59BC4): soldiers fade from 32 to 38 pixels out and are not drawn past 36; posts stay on the rim */
    for (u32 i = 0; i < st->nblips; i++) {
        const ak_hud_blip *b = &st->blips[i];
        f32 dx = b->pos[0] - px, dz = pz - (-b->pos[2]);
        f32 x = (dx * c + dz * s) * zoom, y = (dz * c - dx * s) * zoom, dist = sqrtf(x * x + y * y);
        bool rim = b->kind == 1;
        u32 col = team_colour(b->team, st->team);
        if (!rim) {
            if (dist >= R) continue;
            f32 a = 1.0f; if (dist > 38) a = 0; else if (dist > 32) a = (38 - dist) / 6.0f;
            col = (col & 0x00FFFFFFu) | (u32)(a * 255 + 0.5f) << 24;
        } else if (dist > R) { x *= R / dist; y *= R / dist; }
        if (x == 0 && y == 0) continue;
        pic(idx(rim ? S_RADAR_BLIP : S_BLIP_NPC_LEVEL), cx + x, cy + y, true, col, 1);
    }
}

/* UTF-16 text in a box (func 088CBE34 / 088CCF50, flags 0x184: the box's top-left, centred across it, words wrapped to its
 * width); returns its height */
static f32 text16_box(f32 x0, f32 y0, f32 x1, f32 scale, u32 argb, const u16 *s, u32 n, bool draw, bool centre)
{
    if (!font.tex || !s) return 0;
    f32 lh = font.line * scale, y = y0, bw = x1 - x0; u32 i = 0;
    while (i < n) {
        u32 j = i, brk = i; f32 w = 0, wb = 0;                                   /* one line: as many words as fit */
        while (j < n) {
            const glyph *g = glyph_of(s[j]); f32 gw = g ? g->w * scale : 0;
            if (s[j] == ' ') { brk = j; wb = w; }
            if (w + gw > bw && j > i) { if (brk > i) { j = brk; w = wb; } break; }
            w += gw; j++;
        }
        if (draw) {
            f32 x = centre ? x0 + (bw - w) * 0.5f : x0;                   /* (flag 4: centred; else from the left) */
            for (u32 k = i; k < j; k++) {
                const glyph *g = glyph_of(s[k]); if (!g) continue;
                quad(font.tex, x, y, x + g->w * scale, y + lh, g->u, g->v, g->u + g->w / font.tw, g->v + font.line / font.th, argb);
                x += g->w * scale;
            }
        }
        y += lh; i = j; while (i < n && s[i] == ' ') i++;
    }
    return y - y0;
}

/* the capture panel (func 08A53964 / 08A53B94 / 08A53DBC; the box 08A53FB0; in range 08A535AC): on foot within 5 units of a post
 * (0x08AF0410 = 25, squared, across the ground) - its name at 0.75 in white, centred in the box 385..475 from y 112, for its
 * first 5 seconds there; under it (y = 112 + the name's height + 5) HUD_Capture_Point, top-left at x 430 - 22.5: split across -
 * the top `f` in grey 0xFF808080, the rest in the colour - an owned post: f = 1 - amount / full, ours blue 0xFF0000FF, theirs
 * red 0xFFFF0000 (grey coming down as it drains); a neutral post: f = amount / full (at most 1; it drains as it is taken), blue
 * when the side taking it (post +0x58) is ours, else red; contested: half blue over half red.  A post that cannot be taken (its
 * flags +0x74 bit 0) shows the cross, picture 0x2A, top-left at (x + 0.5, y + 0.5), white pulsing (08A516BC). */
static u32 pulse(f32 t, u32 argb); static f32 elem_clock;
static void capture_panel(const ak_hud_state *s)
{
    const u16 *nm = s->post_name >= 0 && (u32)s->post_name < ncp ? cpname[s->post_name] : NULL; u32 nn = nm ? cplen[s->post_name] : 0;
    f32 th = text16_box(385, 112, 475, 0.75f, 0xFFFFFFFFu, nm, nn, s->post_time < 5.0f, true);
    f32 x = (475 + 385) * 0.5f - 22.5f, y = 112 + th + 5;
    const sprite *cp = idx(S_CAPTURE_POINT); if (!cp) return;
    f32 f = s->post_fill; u32 back = 0xFF808080u, front;
    if (s->post_contested) { f = 0.5f; back = 0xFF0000FFu; front = 0xFFFF0000u; }
    else if (s->post_owner == 4) front = s->post_capturer == s->team ? 0xFF0000FFu : 0xFFFF0000u;
    else front = s->post_owner == s->team ? 0xFF0000FFu : 0xFFFF0000u;
    if (f < 0) f = 0;
    if (f > 1) f = 1;
    f32 w = cp->w * (cp->u1 - cp->u0), h = cp->h * (cp->v1 - cp->v0), vm = cp->v0 + (cp->v1 - cp->v0) * f;
    if (f > 0) quad(cp->tex, x, y, x + w, y + h * f, cp->u0, cp->v0, cp->u1, vm, back);
    if (f < 1) quad(cp->tex, x, y + h * f, x + w, y + h, cp->u0, vm, cp->u1, cp->v1, front);
    if (s->post_cross && !s->post_contested) pic(idx(0x2A), x + 0.5f, y + 0.5f, false, pulse(elem_clock, 0xFFFFFFFFu), 1);
}

/* ---- messages (traced: queue 08A4EE08 / 08A4EED4, a slot 08A4E1E8, its clock 08A4E51C, drawn 08A4E64C -> 08A50E40; boxes
 * 08A4E788): per channel 4 slots - a new one takes the first free slot from the oldest, or replaces the oldest; its time is
 * 4 s a line less 1 (0x08AF01CC / 01BC; lines = the wrapped height over the line).  Channels 0..2 share the box (5, 5)..(130,
 * 272), 3 (135, 65)..(345, 272), 4 (135, 160)..(345, 272); text Franklin Gothic Medium Cond 9 at 0.75 in the channel's colour
 * (0x08AE59AC: 0xBF7F2F2F, green 0xFF00FF00, red 0xFFFF0000, white, white), the slots stacked down from the box's top (the
 * three channels sharing a box in one stack, channel by channel - the caller that walks them is not found yet) */
#define MSG_LEN 256
typedef struct { bool on; u16 text[MSG_LEN]; u32 n; f32 t, life; } msg_slot;
static msg_slot msgs[5][4]; static u32 msg_head[5];
static const f32 msg_box[5][4] = { { 5, 5, 130, 272 }, { 5, 5, 130, 272 }, { 5, 5, 130, 272 }, { 135, 65, 345, 272 }, { 135, 160, 345, 272 } };
static const u32 msg_colour[5] = { 0xBF7F2F2Fu, 0xFF00FF00u, 0xFFFF0000u, 0xFFFFFFFFu, 0xFFFFFFFFu };

void ak_hud_messages_clear(void) { memset(msgs, 0, sizeof msgs); memset(msg_head, 0, sizeof msg_head); }

void ak_hud_message(int ch, u32 id, const u16 *arg, u32 an)
{
    if (ch < 0 || ch > 4 || !stdtext || id >= nstd || !stdtext[id]) return;
    msg_slot *s = NULL; u32 h = msg_head[ch];
    for (u32 k = 0; k < 4 && !s; k++) if (!msgs[ch][(h + k) & 3].on) s = &msgs[ch][(h + k) & 3];
    if (!s) { s = &msgs[ch][h]; msg_head[ch] = (h + 1) & 3; }                  /* all full: the oldest goes */
    memset(s, 0, sizeof *s);
    const u16 *f = stdtext[id]; u32 fn = stdlen[id];
    for (u32 i = 0; i < fn && s->n < MSG_LEN - 1; i++) {                       /* the text, "%s" filled */
        if (f[i] == '%' && i + 1 < fn && f[i + 1] == 's') { for (u32 k = 0; arg && k < an && s->n < MSG_LEN - 1; k++) s->text[s->n++] = arg[k]; i++; }
        else s->text[s->n++] = f[i];
    }
    f32 hgt = text16_box(msg_box[ch][0], 0, msg_box[ch][2], 0.75f, 0, s->text, s->n, false, ch >= 3);
    f32 lines = font.line > 0 ? hgt / (font.line * 0.75f) : 1; u32 l = (u32)(lines + 0.5f); if (!l) l = 1;
    s->life = (f32)l * 4.0f - 1.0f; s->on = true;
    if (ak_setting_int("AK_DEBUG_HUD", 0)) { char a[MSG_LEN]; u32 k = 0; for (; k < s->n && k < MSG_LEN - 1; k++) a[k] = s->text[k] < 128 ? (char)s->text[k] : '?'; a[k] = 0;
                                             AK_INFO("hud", "message %d (%.0f s): %s", ch, s->life, a); }
}

/* the box behind styles 3 and 4 (func 08A50F44, called by 08A50E40 when the style's flag, 0x08AE59D4, is set): for text h high,
 * n = ceil((h - 20) / 6) middle pieces (none up to 20), the box 6 n + 24 high, white with the text's alpha; centred at x 240,
 * HUD_Text_Box_Top at y = top + h / 2 - box / 2 + 5, then 5 lower and each HUD_Text_Box_Mid 3 below that and 3 more, then
 * HUD_Text_Box_Bottom 7 below; the stack still steps by the text's height */
static void text_box(f32 y, f32 h, u32 argb)
{
    f32 n = 0;
    if (h - 20.0f > 0) { f32 v = (h - 20.0f) * 0.16666667f, r = v + (v > 0 ? 0.5f : -0.5f); n = (f32)(s32)r; if (v - n > 0) n += 1.0f; }
    f32 bh = n * 6.0f + 10.0f + 14.0f;
    f32 a = (f32)(argb >> 24) * 0.003921569f * 255.0f; a += a > 0 ? 0.5f : -0.5f;
    u32 col = (u32)(s32)a << 24 | 0xFFFFFF;
    f32 yy = (y + h * 0.5f - bh * 0.5f) + 5.0f;
    pic(idx(0x21), 240, yy, true, col, 1);
    yy += 5.0f;
    for (u32 k = 0; k < (u32)n; k++) { yy += 3.0f; pic(idx(0x20), 240, yy, true, col, 1); yy += 3.0f; }
    pic(idx(0x1F), 240, yy + 7.0f, true, col, 1);
}
static void messages(f32 dt, bool alive)
{
    /* the walk (func 08A4F1FC): styles 0..2 share one queue (08A4EE08: 0x08C2E354) drawn from the top of their box; style 3 its own
     * (0x08C2EC04) from its top; style 4 its own (0x08C2F4B4) set at the bottom of its box: it starts (y1 - y0) - its lines'
     * height - 15 (0x08AF0218) down from y0 */
    f32 y = 0;
    for (int ch = 0; ch < 5; ch++) {
        if (!alive && ch > 2) break;                                       /* (dead: the left queue only) */
        if (ch == 0 || ch == 3) y = msg_box[ch][1];                          /* (0..2 share their box: one stack) */
        if (ch == 4) {
            f32 tot = 0;
            for (u32 k = 0; k < 4; k++) { msg_slot *s = &msgs[ch][(msg_head[ch] + k) & 3]; if (s->on && s->t + dt < s->life) tot += text16_box(msg_box[ch][0], 0, msg_box[ch][2], 0.75f, 0, s->text, s->n, false, true); }
            y = msg_box[ch][1] + (msg_box[ch][3] - msg_box[ch][1]) - tot - 15.0f;
        }
        for (u32 k = 0; k < 4; k++) {
            msg_slot *s = &msgs[ch][(msg_head[ch] + k) & 3]; if (!s->on) continue;
            s->t += dt;
            if (s->t >= s->life) { s->on = false; if (((msg_head[ch] + k) & 3) == msg_head[ch]) msg_head[ch] = (msg_head[ch] + 1) & 3; continue; }
            if (ch >= 3) text_box(y, text16_box(msg_box[ch][0], y, msg_box[ch][2], 0.75f, 0, s->text, s->n, false, true), msg_colour[ch]);
            y += text16_box(msg_box[ch][0], y, msg_box[ch][2], 0.75f, msg_colour[ch], s->text, s->n, true, ch >= 3);   /* (0x182 / 0x184) */
        }
    }
}

/* ---- the lock-on mark (func 08A51AA0 -> 08A50B5C).  08A50B5C(t, picture, centre, colour): HUD_Lock_On_Quarter four times,
 * a quarter turn apart and all turned by t x 2 pi (+ pi), each a quad from the centre along (cos a, -sin a) x w k and
 * (sin a, cos a) x h k with k = |t / 2 - 1| (0x08AF0290 / 0294: full size at 0, half at 1) and the picture mirrored both ways.
 * 08A51AA0: t = the time held / 1 s while under 1 s (the defaults of three "controls" values the game asks for - 1, 4 and 5 s,
 * 0x08AF0328 / 0350 / 0354; the keys, hashes 0x4DB0F6A9, 0x15600269, 0x320173F2, are not in the data); then 0 (locked) - and with
 * headshots from 4 s to 5 s it closes in once more ((t - 4) / 1), then 0 (the head); red 0xFFFF0000 (the game also pulses it
 * once locked, 08A516BC - not yet) */   /* PARITY(5.5) */
static void lock_mark(f32 t, f32 cx, f32 cy, u32 argb)
{
    const sprite *q = idx(S_LOCK_QUARTER); if (!q) return;
    f32 k = fabsf(t * 0.5f - 1.0f), W = q->w * (q->u1 - q->u0) * k, H = q->h * (q->v1 - q->v0) * k;
    if (q->tex != vtex || !vset || nv + 24 > MAXV) { flush(); vtex = q->tex; vset = true; }
    u8 col[4] = { (u8)(argb >> 16), (u8)(argb >> 8), (u8)argb, (u8)(argb >> 24) };
    for (int i = 0; i < 4; i++) {
        f32 a = t * 6.2831853f + i * 1.5707963f + 3.1415927f, cs = cosf(a), sn = sinf(a);
        f32 px[4] = { cx, cx + W * cs, cx + W * cs + H * sn, cx + H * sn }, py[4] = { cy, cy - W * sn, cy - W * sn + H * cs, cy + H * cs };
        f32 pu[4] = { q->u1, q->u0, q->u0, q->u1 }, pv[4] = { q->v1, q->v1, q->v0, q->v0 };
        static const int tri[6] = { 0, 1, 2, 0, 2, 3 };
        for (int k2 = 0; k2 < 6; k2++) {
            ak_vtx *v = &vb[nv++]; memset(v, 0, sizeof *v); int j = tri[k2];
            v->pos[0] = px[j]; v->pos[1] = py[j]; v->uv[0] = pu[j]; v->uv[1] = pv[j]; memcpy(v->col, col, 4);
        }
    }
}
/* a vehicle's lock (func 08A523B4, element 08A522E4; its update 08A52334): the target (the vehicle's +0x1C0) projected; while
 * locking (+0x1D4 clear) t = the lock timer / LockOnTime (+0x1D0 / the Weapon's LockOnTime, 089C6524) - nothing at 0 - in white
 * turning red with t (08A5269C: each channel a / 255 (1 - t) + b / 255 t, x 255, rounded); once locked t = 1 in red.  The reticle,
 * HUD_Reticule_01 centred on the projected aim point, shows while the vehicle has guns (its +0x2D0, the count of its HardpointW1
 * weapons: 089C8C68) */
static u32 lerp_argb(u32 a, u32 b, f32 t)
{
    u32 out = 0;
    for (int sh = 24; sh >= 0; sh -= 8) {
        f32 c = ((f32)((a >> sh) & 0xFF) / 255.0f * (1 - t) + (f32)((b >> sh) & 0xFF) / 255.0f * t) * 255.0f;
        c += c > 0 ? 0.5f : -0.5f; out |= (u32)(s32)c << sh;
    }
    return out;
}
static void vehicle_lock(const ak_hud_state *s)
{
    if (s->locked) lock_mark(1.0f, s->lock_x, s->lock_y, 0xFFFF0000u);
    else if (s->lock_fill > 0) lock_mark(s->lock_fill, s->lock_x, s->lock_y, lerp_argb(0xFFFFFFFFu, 0xFFFF0000u, s->lock_fill));
}
static u32 pulse(f32 t, u32 argb); static f32 elem_clock;
/* the soldier's lock (func 08A51AA0): held up to 1 s (Controls 0x4DB0F6A9, default 1) the mark closes, t x (1 / 1), red; then locked:
 * the mark open, red pulsing (08A516BC); with headshots from 4 s (0x15600269) to 5 s (0x320173F2) it closes again on the head, then
 * locked again pulsing.  (UI_Target_Select plays at each lock: the viewer.) */
static void lock_on(const ak_hud_state *s)
{
    f32 t = s->lock_t;
    if (t <= 1.0f) { lock_mark(t, s->lock_x, s->lock_y, 0xFFFF0000u); return; }
    if (s->lock_head && t >= 4.0f && t < 5.0f) { lock_mark(t - 4.0f, s->lock_x, s->lock_y, 0xFFFF0000u); return; }
    lock_mark(0, s->lock_x, s->lock_y, pulse(elem_clock, 0xFFFF0000u));
}

/* func 08A514E4: the health colour - full health green (heroes, 200 and more, can reach blue): f = health / max (x 2/3 below 200
 * maximum); up to 1/3 red to yellow, to 2/3 yellow to green, beyond green to blue */
static u32 health_colour(f32 health, f32 max)
{
    f32 f = max > 0 ? health / max : 0, r = 0, g = 0, b = 0;
    if (max < 200.0f) f *= 0.666667f;
    if (f <= 0.333333f) { r = 1; g = f * 3; }
    else if (f <= 0.666667f) { g = 1; r = 1 - (f - 0.333333f) * 3; }
    else { b = (f - 0.666667f) * 3; g = 1 - b; }
    return 0xFF000000u | (u32)(r * 255 + 0.5f) << 16 | (u32)(g * 255 + 0.5f) << 8 | (u32)(b * 255 + 0.5f);
}

/* the weapon panel (func 08A52DF8 / 08A52FF4, positions func 08A532AC): the icon centred at (395, y), the ammo underlay centred
 * at (460, y), the clip's count centred at x 445 and the rest's at x 470, bottoms at y + 8, in black; unlimited: the infinity
 * mark centred at (455, y), black.  y = 240 for the weapon in hand; with a second weapon the first moves up to 210 */
static void weapon_panel(const char *name, s32 ammo, s32 spare, bool prequel, f32 y, bool counts)
{
    if (name) {
        const char *nm = name;                                             /* (the weapon's HUDIcon) */
        const sprite *ic = find(h31(nm), wpn_first[prequel], wpn_n[prequel]);
        if (!ic) ic = find(h31(nm), wpn_first[!prequel], wpn_n[!prequel]);
        pic(ic, 395, y, true, 0xFFFFFFFFu, 1);
    }
    pic(idx(S_AMMO_UNDERLAY), 460, y, true, 0xFFFFFFFFu, 1);
    char t[16];
    if (!counts) return;                                                   /* (the bar in their place: the caller) */
    if (ammo < 0) pic(idx(S_INFINITY), 455, y, true, 0xFF000000u, 1);
    else { snprintf(t, sizeof t, "%d", ammo); text(445, y + 8, 0xFF000000u, 0x24, t); }
    if (spare >= 0 && ammo >= 0) { snprintf(t, sizeof t, "%d", spare); text(470, y + 8, 0xFF000000u, 0x24, t); }
}

/* the ticket counters (func 08A5B80C / 08A5B968, positions 08A5BC40): ours centred at x 167.5, theirs at 312.5; each side's
 * logo (faction 0 Republic, 1 CIS, 2 Alliance, 3 Empire) centred at y 25, the count in white centred above it, its bottom at
 * y 25 - 9; unlimited: the infinity mark centred at y 25 - 18 */
/* logo: the side's colour (08A5B80C passes ABGR 0xFFFF0000 for ours - blue - and 0xFF0000FF for theirs - red) */
static void tickets(s32 n, int faction, f32 x, u32 col, u32 logo_col)   /* col: the number's and the infinity mark's, the level's (08A5B9A4) */
{
    static const int logo[4] = { 14, 13, 11, 12 };
    char t[16];
    if (n < 0) pic(idx(S_INFINITY), x, 25 - 18, true, col, 1);
    else { snprintf(t, sizeof t, "%d", n); text(x, 25 - 9, col, 0x24, t); }
    if (faction >= 0 && faction < 4) pic(idx(logo[faction]), x, 25, true, logo_col, 1);
}

/* the message controller (func 08A4F1FC): dead - only the left queue; on a space level (DAT_08C29324: the level's name holds
 * "space_", 08978924) a flyer with a missile coming at it (its slot 0x154, +0x78) - "INCOMING MISSILE!" (STDTEXT 0xB9) centred at
 * (240, 60) and the missile's distance ("%d", truncated) at (240, 75), Cond_9, pulsing red (08A516BC), instead of the queues.
 * ("LOCK ON!", 0xB8, for a soldier whose +0x74 is set: nothing sets it outside the constructor, so it never shows here.) */
static bool missile_warning(const ak_hud_state *s)
{
    if (s->missile < 0 || !s->alive) return false;
    u32 n; const u16 *w = stdtext_get(0xB9, &n);
    u32 col = pulse(elem_clock, 0xFFFF0000u);
    if (w) text16_box(0, 60, 480, 1.0f, col, w, n, true, true);
    char t[16]; snprintf(t, sizeof t, "%d", s->missile); text(240, 75, col, 0x04, t);
    return true;
}

/* the hit-direction marks (element 08A541E8: add 08A547B8, update 08A543C8, draw 08A54E4C; on foot only).  A hit from a position
 * already marked renews that mark, else a new one; a mark goes after 1 s (removed once older than 1, then aged).  Its sector
 * (08A548C8, again whenever the soldier or the camera moves): the source's bearing from the soldier, theta = atan2(dx, dz) in game
 * axes, 0..2 pi (acos(|dz| / len) and its quadrant), less the camera's yaw (atan2 of its matrix's m02, m22), x 4 / pi, truncated
 * toward 0.  Drawn (not zoomed): HUD_Hit_Direction red, turned a = (2 k + 1) pi / 8, at (250 + 19 sin a, 140 - 19 cos a) less half
 * its size (08A50324, "centred" before the turn) */
typedef struct { f32 src[3], age; int k; } hitmark;
static hitmark hits[16]; static u32 nhits; static f32 hit_pos[3], hit_yaw; static bool hit_have_view;
static int hit_sector(const f32 *src)
{
    f32 dx = src[0] - hit_pos[0], dz = -(src[2] - hit_pos[2]), L = sqrtf(dx * dx + dz * dz), th = 0;   /* (game axes: z flipped) */
    if (L != 0) {
        f32 al = acosf(fminf(fabsf(dz) / L, 1.0f));
        if (dx > 0) th = dz < 0 ? 3.1415927f - al : al;
        else if (dx < 0) th = dz < 0 ? al + 3.1415927f : 6.2831855f - al;
        else th = al;
    }
    return (int)((th - hit_yaw) * 1.2732395f);
}
void ak_hud_hit(const f32 src[3])
{
    for (u32 i = 0; i < nhits; i++) if (!memcmp(hits[i].src, src, 12)) { hits[i].age = 0; return; }
    if (nhits >= 16) return;
    hitmark *h = &hits[nhits++]; memcpy(h->src, src, 12); h->age = 0; h->k = hit_sector(src);
}
static void hit_marks(const ak_hud_state *s)
{
    for (u32 i = 0; i < nhits;) {                                  /* the update: older than 1 s goes, the rest age */
        if (hits[i].age > 1.0f) { hits[i] = hits[--nhits]; continue; }
        hits[i].age += s->dt; i++;
    }
    f32 yaw = atan2f(s->fwd[0], -s->fwd[2]);                       /* the camera's yaw, game axes */
    if (!hit_have_view || memcmp(hit_pos, s->pos, 12) || yaw != hit_yaw) {
        memcpy(hit_pos, s->pos, 12); hit_yaw = yaw; hit_have_view = true;
        for (u32 i = 0; i < nhits; i++) hits[i].k = hit_sector(hits[i].src);
    }
    if (s->zoomed || s->vehicle) return;
    const sprite *sp = idx(0x13); if (!sp) return;
    f32 w = sp->w * (sp->u1 - sp->u0), h = sp->h * (sp->v1 - sp->v0);
    for (u32 i = 0; i < nhits; i++) {
        f32 a = (f32)(2 * hits[i].k + 1) * 0.39269909f;
        pic_rot(sp, 250 + sinf(a) * 19 - w * 0.5f, 140 - cosf(a) * 19 - h * 0.5f, a, 0xFFFF0000u);
    }
}

/* func 08A516BC: the pulse of a locked mark - t the element's clock (0..2 s, 08A4FAC0), p = 2 x 1/3; alpha (1/2 + t/(2p)) up to p,
 * 1 to 2p, then 1/2 - t/(2p) (below 0: the game packs it as it is, the byte wrapping); the colour's channels kept */
static u32 pulse(f32 t, u32 argb)
{
    f32 p = 2.0f * 0.33333334f, a;
    if (t <= p) a = 0.5f / p * t + 0.5f;
    else if (t <= p + p) a = 1.0f;
    else a = 0.5f - t / p * 0.5f;
    a *= 255.0f; a += a > 0 ? 0.5f : -0.5f;
    s32 r = (s32)((f32)((argb >> 16) & 0xFF) * 0.003921569f * 255.0f + 0.5f), g = (s32)((f32)((argb >> 8) & 0xFF) * 0.003921569f * 255.0f + 0.5f),
        b = (s32)((f32)(argb & 0xFF) * 0.003921569f * 255.0f + 0.5f);
    return (u32)((((s32)a * 0x100 + r) * 0x100 + g) * 0x100 + b);
}
static f32 elem_clock;                 /* the elements' clock (08A4FAC0: + dt while 2 s or less, then back to 0) */

/* func 08A4FC78: a colour's alpha scaled by f (rounded) */
static u32 fade(f32 f, u32 argb) { f32 a = (f32)(argb >> 24) * f; a += a > 0 ? 0.5f : -0.5f; return (u32)(s32)a << 24 | (argb & 0xFFFFFF); }

/* the weapon ring (func 08A5C3F0): n = value x 10 (at most 10); pieces 0..n of HUD_Level_Indicator, piece i turned to a = 0.3642 i - 0.25
 * and centred r = 19 (zoomed) or 16 from the middle at (-r cos a, -r sin a), drawn turned by a - pi/2; coloured from A to B by
 * i x 0.1 (08A5C728, the lock's blend): type 1 0xFFC0C0C0 -> 0xFF404040, 2 0xFFFF00FF -> 0xFF8000FF, 3 0xFFFFFF00 -> 0xFFFF0000;
 * type 4 all green 0xFF00FF00 */
static void ring(const ak_hud_state *s)
{
    if (s->ring_type <= 0 || s->ring_value == 0) return;
    int n = (int)(s->ring_value * 10.0f); if ((f32)n > 10.0f) n = 10;
    u32 A = 0, B = 0;
    if (s->ring_type == 1) { A = 0xFFC0C0C0u; B = 0xFF404040u; }
    else if (s->ring_type == 2) { A = 0xFFFF00FFu; B = 0xFF8000FFu; }
    else if (s->ring_type == 3) { A = 0xFFFFFF00u; B = 0xFFFF0000u; }
    f32 r = s->zoomed ? 19.0f : 16.0f;
    for (int i = 0; i <= n; i++) {
        f32 a = (f32)i * 0.36415929f - 0.25f;
        u32 c = s->ring_type == 4 ? 0xFF00FF00u : lerp_argb(A, B, (f32)i * 0.1f);
        pic_rot(idx(0x14), s->ring_x - r * cosf(a), s->ring_y - r * sinf(a), a - 1.5707964f, c);
    }
}

/* a bar with its frame (08A512F8 / 08A513E8): the frame's top-left at (x, y), the bar over it cut at `fill` */
static void framed_bar(int bar, int frame, f32 x, f32 y, f32 fill, u32 bar_col, u32 frame_col)
{
    pic(idx(frame), x, y, false, frame_col, 1);
    if (fill != 0) pic(idx(bar), x, y, false, bar_col, fill);
}

/* stamina / energy (func 08A5B42C, positions 08A5B568): while not 3 s full, fading as 1 - t / 3 (08A512A0); the icon (stamina 0x16
 * for a soldier, energy 0x19) centred at (10, 244) in the level's colour; HUD_Stamina_Bar_Frame at (20, 241) grey 0xFF808080; the bar
 * over it cut at the fill, 0xFFE6E4E4 */
static void stamina_bar(const ak_hud_state *s)
{
    if (!s->bar || s->bar_full_t >= 3.0f) return;
    f32 f = 1.0f - s->bar_full_t / 3.0f; if (f < 0) f = 0; if (f > 1) f = 1;
    pic(idx(s->bar_soldier ? 0x16 : 0x19), 10, 244, true, fade(f, s->dark ? 0xFF000000u : 0xFFFFFFFFu), 1);
    framed_bar(0x11, 0x12, 20, 241, s->bar_fill, fade(f, 0xFFE6E4E4u), fade(f, 0xFF808080u));
}

/* the jetpack / shield (func 08A5AE84, positions 08A5B1A0): shown while in use or less than 3 s (0x08AF0630) full; the icon (jetpack
 * 0x1E, else energy 0x19) centred at (10, 234) in the level's colour; the frame at (20, 230) grey, the bar 0xFFE6E4E4 cut at the fill;
 * all faded by 1 - full time x 1/3 (08A5B01C) */
static void jet_bar(const ak_hud_state *s)
{
    if (!s->jet || !(s->jet_using || s->jet_full_t < 3.0f) || s->jet_fill == 0) return;
    f32 f = 1.0f - s->jet_full_t * 0.33333334f;
    pic(idx(s->jet_pack ? 0x1E : 0x19), 10, 234, true, fade(f, s->dark ? 0xFF000000u : 0xFFFFFFFFu), 1);
    pic(idx(0x12), 20, 230, false, fade(f, 0xFF808080u), 1);
    pic(idx(0x11), 20, 230, false, fade(f, 0xFFE6E4E4u), s->jet_fill);
}

/* the timer (func 08A5BE80, positions 08A5BF94, font Cond_13: 08A5BE24): "m:ss" (seconds below 10 padded with a 0), else " n/total ";
 * centred at x 430, its bottom at y 112, in the level's colour */
static void timer(const ak_hud_state *s)
{
    char t[32];
    if (s->timer_s > 0) {
        u32 m = (u32)s->timer_s / 60, sec = (u32)s->timer_s % 60;
        if (sec < 10) snprintf(t, sizeof t, "%u:%u%u", m, 0u, sec); else snprintf(t, sizeof t, "%u:%u", m, sec);
    } else if (s->count_total > 0) snprintf(t, sizeof t, " %d/%d ", s->count, s->count_total);
    else return;
    fontp = &fonts[1]; text(430, 112, s->dark ? 0xFF000000u : 0xFFFFFFFFu, 0x24, t); fontp = &fonts[0];
}

/* the target's panel (func 08A566C0, positions 08A57170): its name (scale 0.75, centred, wrapped in the box (196, 20) - (284, 100));
 * HUD_Target_Info_Bracket centred at (185, 20) and mirrored at (295, 20) in the level's colour; its health bar (the bar for its
 * maximum, as the player's: 08A564C4) centred at (240, 15): full - the health colour (08A56D2C, as 08A514E4); part - the health
 * colour up to the fill and white beyond; empty - white */
static void target_panel(const ak_hud_state *s)
{
    if (!s->target || s->target_health <= 0) return;
    u32 col = s->dark ? 0xFF000000u : 0xFFFFFFFFu;
    if (s->target_name) text16_box(196, 20, 284, 0.75f, col, s->target_name, s->target_name_len, true, true);
    pic(idx(0x28), 185, 20, true, col, 1);
    pic_mirror(idx(0x28), 295, 20, true, col);
    f32 k = s->target_max * 0.030303f; int q = (int)(k + 0.5f);
    int bar = q <= 3 ? S_HEALTH_3 : q == 4 ? S_HEALTH_4 : q == 5 ? S_HEALTH_5 : S_HEALTH_BAR;
    const sprite *b = idx(bar); if (!b) return;
    f32 fill = s->target_max > 0 ? s->target_health / s->target_max : 0; if (fill < 0) fill = 0; if (fill > 1) fill = 1;
    f32 w = b->w * (b->u1 - b->u0), h = b->h * (b->v1 - b->v0), x0 = 240 - w * 0.5f, y0 = 15 - h * 0.5f;
    u32 hc = health_colour(s->target_health, s->target_max);
    if (fill == 1) pic(b, 240, 15, true, hc, 1);
    else if (fill > 0) {
        f32 um = b->u0 + (b->u1 - b->u0) * fill;
        quad(b->tex, x0, y0, x0 + w * fill, y0 + h, b->u0, b->v0, um, b->v1, hc);
        quad(b->tex, x0 + w * fill, y0, x0 + w, y0 + h, um, b->v0, b->u1, b->v1, 0xFFFFFFFFu);
    } else pic(b, 240, 15, true, 0xFFFFFFFFu, 1);
}

void ak_hud_draw(const ak_hud_state *s, int sw, int sh)
{
    (void)sw; (void)sh;
    if (!ready || !s || !ak_setting_int("AK_HUD", 1)) return;
    ak_m4 o = ak_m4_ortho2d(480.0f, 272.0f); ak_gfx_set_transform(&o); ak_gfx_set_tint(NULL);
    if (s->radar && s->alive) radar(s);
    if (elem_clock <= 2.0f) elem_clock += s->dt;
    if (elem_clock > 2.0f) elem_clock = 0;
    if (s->post && s->alive && !s->vehicle) capture_panel(s);
    if (!missile_warning(s)) messages(s->dt, s->alive);
    if (s->alive) hit_marks(s); else nhits = 0;
    if (s->alive) { target_panel(s); stamina_bar(s); if (!s->vehicle) jet_bar(s); timer(s); ring(s); }
    if (s->tickets) { u32 tc = s->dark ? 0xFF000000u : 0xFFFFFFFFu; tickets(s->tickets_own, s->faction_own, 167.5f, tc, 0xFF0000FFu); tickets(s->tickets_enemy, s->faction_enemy, 312.5f, tc, 0xFFFF0000u); }
    if (s->alive) {
        if (s->vehicle) {
            if (s->aim) pic(idx(S_RETICLE), s->aim_x, s->aim_y, true, 0xFFFFFFFFu, 1);
            if (s->lock) vehicle_lock(s);
        } else {
            if (s->reticle) pic(idx(S_RETICLE), 240, 136, true, 0xFFFFFFFFu, 1);             /* func 08A51AA0 */
            if (s->lock) lock_on(s);
        }
        /* health (func 08A574BC, positions 08A578DC): the bar for the maximum (08A57854: max / 33 rounded - 3 or less: the
         * 3-section bar, 4, 5, 6 and more: the long one), top-left at (20, 252), grey behind, the fill in the health colour; the
         * health icon centred at (10, 256) */
        f32 k = s->health_max * 0.030303f; int q = (int)(k + 0.5f);
        int bar = q <= 3 ? S_HEALTH_3 : q == 4 ? S_HEALTH_4 : q == 5 ? S_HEALTH_5 : S_HEALTH_BAR;
        f32 f = s->health_max > 0 ? s->health / s->health_max : 0; if (f < 0) f = 0; if (f > 1) f = 1;
        pic(idx(bar), 20, 252, false, 0xFFC0C0C0u, 1);
        if (f > 0) pic(idx(bar), 20, 252, false, health_colour(s->health, s->health_max), f);
        pic(idx(S_ICON_HEALTH), 10, 256, true, s->dark ? 0xFF000000u : 0xFFFFFFFFu, 1);   /* (08A57518: the level's colour) */
        /* the lower weapon (08A52FF4): reloading, the PowerUp bar and its frame (both 0xFF404040) top-left at (427, 237) instead of the counts */
        /* (a single weapon is the upper one's, 08A52DF8, moved down: no bar) */
        if (s->weapon2) {
            weapon_panel(s->weapon, s->ammo, s->spare, s->prequel, 210, true);
            weapon_panel(s->weapon2, s->ammo2, s->spare2, s->prequel, 240, s->weapon2_bar < 0);
            if (s->weapon2_bar >= 0) framed_bar(0x22, 0x23, 427, 237, s->weapon2_bar, 0xFF404040u, 0xFF404040u);
        } else if (s->weapon) weapon_panel(s->weapon, s->ammo, s->spare, s->prequel, 240, true);
    }
    flush();
    ak_gfx_set_transform(NULL);
}
