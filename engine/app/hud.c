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
enum { S_RETICLE = 0, S_AMMO_UNDERLAY = 3, S_HEALTH_BAR = 7, S_HEALTH_3 = 8, S_HEALTH_4 = 9, S_HEALTH_5 = 10, S_ICON_HEALTH = 0x15,
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
    ready = n > 0;
    AK_INFO("hud", "%u HUD pictures, %u + %u weapon icons, font %s (%u glyphs)", n, wpn_n[0], wpn_n[1], f ? "Franklin Gothic Medium Cond 9" : "missing", font.n);
    return ready;
}

/* ---- drawing, in the game's 480 x 272 */
#define MAXV 6 * 256
static ak_vtx vb[MAXV]; static u32 nv; static ak_gfx_tex *vtex;
static void flush(void) { if (nv) ak_gfx_draw_immediate(AK_PIPE_HUD, vtex, vb, nv); nv = 0; }
static void quad(ak_gfx_tex *t, f32 x0, f32 y0, f32 x1, f32 y1, f32 u0, f32 v0, f32 u1, f32 v1, u32 argb)
{
    if (t != vtex || nv + 6 > MAXV) { flush(); vtex = t; }
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

void ak_hud_draw(const ak_hud_state *s, int sw, int sh)
{
    (void)sw; (void)sh;
    if (!ready || !s || !ak_setting_int("AK_HUD", 1)) return;
    ak_m4 o = ak_m4_ortho2d(480.0f, 272.0f); ak_gfx_set_transform(&o); ak_gfx_set_tint(NULL);
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
