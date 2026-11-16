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
static struct { glyph g[512]; u32 n; f32 line, tw, th; ak_gfx_tex *tex; } font;
static ak_arena mem; static bool ready;
static u32 wpn_first[2], wpn_n[2];                 /* the weapon icons: classic, prequel */

static u32 h31(const char *s) { u32 h = 0; for (; *s; s++) { u8 c = (u8)*s; if (c >= 'A' && c <= 'Z') c += 32; h = h * 31 + c; } return h; }
static f32 rdf(const u8 *b) { f32 f; memcpy(&f, b, 4); return f; }
static int ieq(const char *a, const char *b) { for (; *a && *b; a++, b++) { int x = *a, y = *b; if (x >= 'A' && x <= 'Z') x += 32; if (y >= 'A' && y <= 'Z') y += 32; if (x != y) return 1; } return *a != *b; }

/* the game's table, in its order (index = what the HUD code passes) */
static const char *const table[] = {
    "HUD_Reticule_01", "HUD_Radar_Background_Half", "HUD_Radar_Blip", "HUD_Ammo_Underlay", "HUD_Arrow_Lock", "HUD_Arrow_NPC",
    "HUD_Capture_Point", "HUD_Health_Bar", "HUD_Health_3_Bar", "HUD_Health_4_Bar", "HUD_Health_5_Bar", "HUD_Logo_Alliance",
    "HUD_Logo_Empire", "HUD_Logo_CIS", "HUD_Logo_Republic", "HUD_Objective_Flag", "HUD_Radar_Blip_NPC", "HUD_Stamina_Bar",
    "HUD_Stamina_Bar_Frame", "HUD_Hit_Direction", "HUD_Level_Indicator", "HUD_Icon_Health", "HUD_Icon_Stamina", "HUD_Lock_On_Quarter",
    "HUD_Target_Leading_Indicator", "HUD_Icon_Energy", "HUD_Force_Bar", "HUD_Radar_Blip_NPC_Level", "HUD_Space_Lock_On_Quarter",
    "HUD_Space_Arrow_Lock", "HUD_Icon_Jetpack", "HUD_Text_Box_Bottom", "HUD_Text_Box_Mid", "HUD_Text_Box_Top", "HUD_PowerUp_Bar",
    "HUD_PowerUp_Frame", "HUD_Infinity_Symbol", "HUD_Flag_Carrier_Icon", "HUD_Radar_Blip_Flag_Carrier", "HUD_Target_Info_Bracket",
    "HUD_Radar_Blip_CZ", "HUD_Capture_Point_Cross", "HUD_Icon_CTF_Bacta_Tank", "HUD_Icon_CTF_Data_Cube", "HUD_Icon_CTF_Energy_Cell",
};
enum { S_RETICLE = 0, S_RADAR_HALF = 1, S_RADAR_BLIP = 2, S_AMMO_UNDERLAY = 3, S_CAPTURE_POINT = 6, S_BLIP_NPC_LEVEL = 0x1B, S_HEALTH_BAR = 7, S_HEALTH_3 = 8, S_HEALTH_4 = 9, S_HEALTH_5 = 10, S_ICON_HEALTH = 0x15,
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

bool ak_hud_load(ak_vfs *vfs)
{
    if (ready) return true;
    if (!ak_arena_init(&mem, 1u << 20)) return false;
    u32 n = load_sheet(vfs, "PSP_GAME/USRDIR/GRAPHICS/HUD.ASR");
    for (u32 i = 0; i < S_COUNT; i++) {
        char nm[64]; snprintf(nm, sizeof nm, "%s.tga", table[i]); const sprite *s = find(h31(nm), 0, n);
        by_index[i] = s ? (s32)(s - spr) : -1;
    }
    wpn_first[0] = nspr; wpn_n[0] = load_sheet(vfs, "PSP_GAME/USRDIR/GRAPHICS/HUD_WEAPONS_CLASSIC.ASR");
    wpn_first[1] = nspr; wpn_n[1] = load_sheet(vfs, "PSP_GAME/USRDIR/GRAPHICS/HUD_WEAPONS_PREQUEL.ASR");
    bool f = load_font(vfs, "Cond_9");
    load_cpnames(vfs); load_stdtext(vfs);
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
 * the top `f` in grey 0xFF808080, the rest in the colour (f = 1 - the post's amount / its full amount: an owned post in its
 * owner's colour, grey coming down as it drains; a neutral one grey, the capturer's colour coming up); contested: half blue
 * 0xFF0000FF over half red 0xFFFF0000 */
static void capture_panel(const ak_hud_state *s)
{
    const u16 *nm = s->post_name >= 0 && (u32)s->post_name < ncp ? cpname[s->post_name] : NULL; u32 nn = nm ? cplen[s->post_name] : 0;
    f32 th = text16_box(385, 112, 475, 0.75f, 0xFFFFFFFFu, nm, nn, s->post_time < 5.0f, true);
    f32 x = (475 + 385) * 0.5f - 22.5f, y = 112 + th + 5;
    const sprite *cp = idx(S_CAPTURE_POINT); if (!cp) return;
    f32 f = s->post_fill; u32 back = 0xFF808080u, front;
    if (s->post_contested) { f = 0.5f; back = 0xFF0000FFu; front = 0xFFFF0000u; }
    else {
        int t = s->post_owner == 4 ? s->post_capturer : s->post_owner;
        front = s->post_owner == 4 && s->post_capturer == 4 ? 0xFF808080u : team_colour(t, s->team);
    }
    if (f < 0) f = 0;
    if (f > 1) f = 1;
    f32 w = cp->w * (cp->u1 - cp->u0), h = cp->h * (cp->v1 - cp->v0), vm = cp->v0 + (cp->v1 - cp->v0) * f;
    if (f > 0) quad(cp->tex, x, y, x + w, y + h * f, cp->u0, cp->v0, cp->u1, vm, back);
    if (f < 1) quad(cp->tex, x, y + h * f, x + w, y + h, cp->u0, vm, cp->u1, cp->v1, front);
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

static void messages(f32 dt)
{
    f32 y = 0;
    for (int ch = 0; ch < 5; ch++) {
        if (ch == 0 || ch >= 3) y = msg_box[ch][1];                          /* (0..2 share their box: one stack) */
        for (u32 k = 0; k < 4; k++) {
            msg_slot *s = &msgs[ch][(msg_head[ch] + k) & 3]; if (!s->on) continue;
            s->t += dt;
            if (s->t >= s->life) { s->on = false; if (((msg_head[ch] + k) & 3) == msg_head[ch]) msg_head[ch] = (msg_head[ch] + 1) & 3; continue; }
            y += text16_box(msg_box[ch][0], y, msg_box[ch][2], 0.75f, msg_colour[ch], s->text, s->n, true, ch >= 3);   /* (0x182 / 0x184) */
        }
    }
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
static void weapon_panel(const char *name, s32 ammo, s32 spare, bool prequel, f32 y)
{
    if (name) {
        const char *nm = name;                                             /* (the weapon's HUDIcon) */
        const sprite *ic = find(h31(nm), wpn_first[prequel], wpn_n[prequel]);
        if (!ic) ic = find(h31(nm), wpn_first[!prequel], wpn_n[!prequel]);
        pic(ic, 395, y, true, 0xFFFFFFFFu, 1);
    }
    pic(idx(S_AMMO_UNDERLAY), 460, y, true, 0xFFFFFFFFu, 1);
    char t[16];
    if (ammo < 0) pic(idx(S_INFINITY), 455, y, true, 0xFF000000u, 1);
    else { snprintf(t, sizeof t, "%d", ammo); text(445, y + 8, 0xFF000000u, 0x24, t); }
    if (spare >= 0 && ammo >= 0) { snprintf(t, sizeof t, "%d", spare); text(470, y + 8, 0xFF000000u, 0x24, t); }
}

/* the ticket counters (func 08A5B80C / 08A5B968, positions 08A5BC40): ours centred at x 167.5, theirs at 312.5; each side's
 * logo (faction 0 Republic, 1 CIS, 2 Alliance, 3 Empire) centred at y 25, the count in white centred above it, its bottom at
 * y 25 - 9; unlimited: the infinity mark centred at y 25 - 18 */
static void tickets(s32 n, int faction, f32 x)
{
    static const int logo[4] = { 14, 13, 11, 12 };
    char t[16];
    if (n < 0) pic(idx(S_INFINITY), x, 25 - 18, true, 0xFFFFFFFFu, 1);
    else { snprintf(t, sizeof t, "%d", n); text(x, 25 - 9, 0xFFFFFFFFu, 0x24, t); }
    if (faction >= 0 && faction < 4) pic(idx(logo[faction]), x, 25, true, 0xFFFFFFFFu, 1);
}

void ak_hud_draw(const ak_hud_state *s, int sw, int sh)
{
    (void)sw; (void)sh;
    if (!ready || !s || !ak_setting_int("AK_HUD", 1)) return;
    ak_m4 o = ak_m4_ortho2d(480.0f, 272.0f); ak_gfx_set_transform(&o); ak_gfx_set_tint(NULL);
    if (s->radar && s->alive) radar(s);
    if (s->post && s->alive) capture_panel(s);
    messages(s->dt);
    if (s->tickets) { tickets(s->tickets_own, s->faction_own, 167.5f); tickets(s->tickets_enemy, s->faction_enemy, 312.5f); }
    if (s->alive) {
        if (s->reticle) pic(idx(S_RETICLE), 240, 136, true, 0xFFFFFFFFu, 1);                 /* func 08A51AA0 */
        /* health (func 08A574BC, positions 08A578DC): the bar for the maximum (08A57854: max / 33 rounded - 3 or less: the
         * 3-section bar, 4, 5, 6 and more: the long one), top-left at (20, 252), grey behind, the fill in the health colour; the
         * health icon centred at (10, 256) */
        f32 k = s->health_max * 0.030303f; int q = (int)(k + 0.5f);
        int bar = q <= 3 ? S_HEALTH_3 : q == 4 ? S_HEALTH_4 : q == 5 ? S_HEALTH_5 : S_HEALTH_BAR;
        f32 f = s->health_max > 0 ? s->health / s->health_max : 0; if (f < 0) f = 0; if (f > 1) f = 1;
        pic(idx(bar), 20, 252, false, 0xFFC0C0C0u, 1);
        if (f > 0) pic(idx(bar), 20, 252, false, health_colour(s->health, s->health_max), f);
        pic(idx(S_ICON_HEALTH), 10, 256, true, 0xFFFFFFFFu, 1);
        if (s->weapon2) { weapon_panel(s->weapon, s->ammo, s->spare, s->prequel, 210); weapon_panel(s->weapon2, s->ammo2, s->spare2, s->prequel, 240); }
        else if (s->weapon) weapon_panel(s->weapon, s->ammo, s->spare, s->prequel, 240);
    }
    flush();
    ak_gfx_set_transform(NULL);
}
