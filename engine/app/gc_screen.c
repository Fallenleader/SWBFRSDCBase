/* Aurek - the Galactic Conquest map screen (see gc_screen.h; PARITY 5.4) */
#include "app/gc_screen.h"
#include "app/hud.h"
#include "core/ak_settings.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static ak_arena mem; static bool mem_ok;
static u16 *gtext[160]; static u32 glen[160], ngtext;

/* TEXT/GALACTICCONQUEST.ASR: PTXT per language - u32 table hash (0x4F008C3A), u32 n, u32 language, "GalacticConquest", then n x
 * { u32 length with the 0, UTF-16 } (the same layout as CPNAMES) */
static void load_text(ak_vfs *vfs)
{
    ak_blob b; if (ngtext || !ak_vfs_read(vfs, "PSP_GAME/USRDIR/TEXT/GALACTICCONQUEST.ASR", &mem, &b) || !ak_asura_check(&b)) return;
    u32 pos = 8; ak_chunk c; int lang = ak_setting_int("AK_LANGUAGE", 0);
    while (ak_asura_next(&b, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('P', 'T', 'X', 'T') || c.size < 16 || (int)ak_rd32(c.body + 8) != lang) continue;
        u32 n = ak_rd32(c.body + 4), p = 12; p += ((u32)strnlen((const char *)c.body + p, c.size - p) + 1 + 3) & ~3u;
        for (u32 i = 0; i < n && i < AK_ARRAY_LEN(gtext) && p + 4 <= c.size; i++) {
            u32 len = ak_rd32(c.body + p); p += 4; if (p + len * 2 > c.size) break;
            gtext[i] = ak_arena_alloc(&mem, (len + 1) * 2, 2); glen[i] = len ? len - 1 : 0;
            if (gtext[i]) for (u32 k = 0; k < len; k++) gtext[i][k] = ak_rd16(c.body + p + k * 2);
            p += len * 2; ngtext = i + 1;
        }
        break;
    }
}
const u16 *ak_gc_text(u32 id, u32 *len) { if (id >= ngtext || !gtext[id]) { *len = 0; return NULL; } *len = glen[id]; return gtext[id]; }

bool ak_gc_screen_init(ak_gc_screen *s, ak_vfs *vfs, const ak_level *l, const ak_scene_level *sc, const ak_model_set *ms,
                       const ak_entity_set *ents, const ak_blueprints *bp, u32 seed)
{
    memset(s, 0, sizeof *s); s->cursor = -1;
    if (!mem_ok) mem_ok = ak_arena_init(&mem, 256u << 10);
    if (mem_ok) load_text(vfs);
    ak_gc_rules_load(bp, &s->r);
    ak_gc_new(&s->g, &s->r, ak_setting_int("AK_GC_FACTION", 4), seed);
    f32 ast[3] = { 0, 0, 0 }; int nast = 0;
    for (u32 i = 0; i < ents->n; i++) {
        const ak_entity *e = &ents->e[i];
        if (!e->placed || e->model[0] < 0) continue;
        const char *nm = ms->models[e->model[0]].name;
        if (!strcmp(nm, "Asteroid_02")) { for (int k = 0; k < 3; k++) ast[k] += e->pos[k]; nast++; continue; }
        for (int p = 0; p < AK_GC_PLANETS; p++)
            if (!strcmp(nm, ak_gc_planet_keys[p]) && !s->planet_known[p]) { memcpy(s->planet_pos[p], e->pos, 12); s->planet_known[p] = true; }
    }
    if (nast) { for (int k = 0; k < 3; k++) s->planet_pos[0][k] = ast[k] / (f32)nast; s->planet_known[0] = true; }   /* Alderaan */
    s32 ti = ak_level_find_texture(l, "\\graphics\\GUI\\GC_Elements\\GC_Planet_Corona.bmp");
    s->corona = NULL;
    if (ti >= 0 && sc->tex && sc->tex[ti]) {          /* an opaque BMP drawn as a glow: its brightness as alpha, white to take the tint */
        static u32 pal[256]; const ak_texture *t = &l->tex[ti];
        for (int i = 0; i < 256; i++) { u32 c = t->palette[i], r = c & 255, g = (c >> 8) & 255, b = (c >> 16) & 255, a = r > g ? (r > b ? r : b) : (g > b ? g : b); pal[i] = 0x00FFFFFFu | (a << 24); }
        s->corona = ak_gfx_texture_palette(sc->tex[ti], t, pal);
    }
    static const char *const tn[GCT_N] = { "\\graphics\\GUI\\GC_Elements\\GC_Tech_Elements.tga", "\\graphics\\GUI\\GC_Elements\\GC_Tech_Elements_02.tga",
        "\\graphics\\GUI\\PSP_Button_Icons\\button_square.tga", "\\graphics\\GUI\\PSP_Button_Icons\\button_triangle.tga",
        "\\graphics\\GUI\\PSP_Button_Icons\\button_x.tga", "\\graphics\\GUI\\PSP_Button_Icons\\button_select.tga" };
    for (int i = 0; i < GCT_N; i++) { s32 k = ak_level_find_texture(l, tn[i]); s->tex[i] = k >= 0 && sc->tex ? sc->tex[k] : NULL; }
    if (getenv("AK_DEBUG_GC_TEX")) for (int i = 0; i < GCT_N; i++) fprintf(stderr, "[gc] tex %d %s\n", i, s->tex[i] ? "ok" : "missing");
    for (int p = 0; p < AK_GC_PLANETS && s->cursor < 0; p++) if (s->g.planet[p].owner == 0) s->cursor = p;   /* [assumed] the first own planet */
    s->ready = true;
    return true;
}

static bool project(const ak_m4 *vp, const f32 *p, f32 *x, f32 *y)
{
    const f32 *m = vp->m;
    f32 cx = m[0] * p[0] + m[4] * p[1] + m[8] * p[2] + m[12], cy = m[1] * p[0] + m[5] * p[1] + m[9] * p[2] + m[13];
    f32 cw = m[3] * p[0] + m[7] * p[1] + m[11] * p[2] + m[15];
    if (cw <= 0) return false;
    *x = (cx / cw * 0.5f + 0.5f) * 480.0f; *y = (0.5f - cy / cw * 0.5f) * 272.0f; return true;
}

void ak_gc_screen_draw_back(const ak_gc_screen *s, const ak_m4 *vp)
{
    if (!s->ready) return;
    ak_hud_2d_begin();
    /* owner halos: the player's (side 0) blue, the enemy's red, none on neutral planets (the original's screen) [assumed sizes] */
    for (int p = 0; p < AK_GC_PLANETS; p++) {
        int o = s->g.planet[p].owner; f32 x, y;
        if (o == AK_GC_NONE || !s->planet_known[p] || !project(vp, s->planet_pos[p], &x, &y)) continue;
        f32 r = 20.0f; u32 col = o == 0 ? 0xFF3050FFu : 0xFFFF3030u;
        if (s->corona) ak_hud_2d_quad(s->corona, x - r, y - r, x + r, y + r, 0, 0, 1, 1, col);
    }
    ak_hud_2d_end();
}

static void txt(int big, f32 x, f32 y, u32 col, u32 id, int align)
{
    u32 n; const u16 *t = ak_gc_text(id, &n);
    if (t) ak_hud_2d_text(big, align == 1 ? x - 200 : align == 2 ? x - 400 : x, y, align == 1 ? x + 200 : align == 2 ? x : 480, 1.0f, col, t, n, align);
}
static void num(int big, f32 x, f32 y, u32 col, u32 v, int align, bool credit)
{
    u16 w[16]; char b[12]; int k = snprintf(b, sizeof b, "%u", v), o = 0;
    if (credit) w[o++] = 0xBC;                                   /* the font's credit sign (08AE58C8) */
    for (int i = 0; i < k; i++) w[o++] = (u16)b[i];
    ak_hud_2d_text(big, align == 1 ? x - 100 : align == 2 ? x - 200 : x, y, align == 1 ? x + 100 : align == 2 ? x : 480, 1.0f, col, w, (u32)o, align);
}
static void spr(ak_gfx_tex *t, f32 x0, f32 y0, f32 x1, f32 y1, f32 u0, f32 v0, f32 u1, f32 v1, u32 col)
{
    if (t) ak_hud_2d_quad(t, x0, y0, x1, y1, u0, v0, u1, v1, col);
}

/* the layout below is the original's, logged from its draws (harness RS_SPRITE_LOG on the GC map, purchase phase; 480 x 272) */
void ak_gc_screen_draw(const ak_gc_screen *s, const ak_m4 *vp)
{
    if (!s->ready) return;
    ak_hud_2d_begin();
    /* home planets: the badge over the planet (24 x 18) and the name tag under it (66 x 16, blue row for the player's, red row for
       the enemy's), the name centred */
    for (int p = 0; p < AK_GC_PLANETS; p++) {
        f32 x, y; if (!s->g.planet[p].home || !s->planet_known[p] || !project(vp, s->planet_pos[p], &x, &y)) continue;
        bool mine = s->g.planet[p].owner == 0;
        spr(s->tex[GCT_TECH], x - 33.0f, y + 9.5f, x + 33.0f, y + 25.5f, 0.0039f, mine ? 0.5078f : 0.6875f, 0.2617f, mine ? 0.5703f : 0.75f, 0xFFFFFFFFu);
        spr(s->tex[GCT_TECH], x - 12.0f, y - 9.0f, x + 12.0f, y + 9.0f, 0.5195f, 0.0156f, 0.6172f, 0.0859f, 0xFFFFFFFFu);
        u32 n; const u16 *nm = ak_hud_stdtext(ak_gc_planet_defs[p].name_id, &n);
        if (nm) ak_hud_2d_text(0, x - 33.0f, y + 10.5f, x + 33.0f, 1.0f, 0xFFFFFFFFu, nm, n, 1);
    }
    /* the planet panel (top left): its name, credit bonus and troops */
    if (s->cursor >= 0) {
        int p = s->cursor;
        spr(s->tex[GCT_TECH2], 5, 25, 123, 114, 0.4570f, 0.0f, 0.9180f, 0.3477f, 0x99FFFFFFu);
        u32 n; const u16 *nm = ak_hud_stdtext(ak_gc_planet_defs[p].name_id, &n);
        if (nm) ak_hud_2d_text(1, 12, 30, 123, 1.0f, 0xFFFFFFFFu, nm, n, 0);
        spr(s->tex[GCT_TECH], 15, 55, 39, 72, 0.7461f, 0.0f, 0.8398f, 0.0664f, 0xFFAAAAFFu);
        num(0, 32, 56, 0xFFFFFF00u, (u32)s->r.planet_bonus[p], 1, true);
        txt(0, 55, 56, 0xFFFFFFFFu, 0x35, 0);                        /* CREDITS */
        if (s->g.planet[p].owner == 0) {
            spr(s->tex[GCT_TECH], 15, 83, 39, 104, 0.7461f, 0.0703f, 0.8398f, 0.1523f, 0xFFAAAAFFu);
            num(0, 27, 84, 0xFFFFFFFFu, (u32)s->g.planet[p].troops, 1, false);
            txt(0, 55, 84, 0xFFFFFFFFu, 0x34, 0);                    /* TROOPS */
        }
    }
    /* the header: a dark bar, "PHASE <phase>", "CREDITS" and the side's credits in yellow */
    ak_hud_2d_quad(NULL, 0, 0, 480, 23, 0, 0, 1, 1, 0x60000000u);
    txt(1, 5, 0, 0xFFFFFFFFu, 0x37, 0);
    txt(1, 60, 0, 0xFFFFFFFFu, (u32)s->phase, 0);
    txt(1, 360, 0, 0xFFFFFFFFu, 0x35, 0);
    num(1, 477, 0, 0xFFFFFF00u, s->g.side[0].credits, 2, true);
    /* the button bar: a dark bar, 16 x 16 icons with their labels (purchase: select Troops Overview, square Buy Tech/Comm,
       triangle End Phase; treasury: cross Continue) */
    ak_hud_2d_quad(NULL, 0, 249, 480, 272, 0, 0, 1, 1, 0x60000000u);
    if (s->phase == 0) { spr(s->tex[GCT_CROSS], 404, 252.5f, 420, 268.5f, 0, 0, 1, 1, 0xFFFFFFFFu); txt(0, 422, 252.5f, 0xFFFFFFFFu, 0x58, 0); }   /* [assumed: place] */
    else {
        spr(s->tex[GCT_SELECT], 2, 252.5f, 34, 268.5f, 0, 0, 1, 1, 0xFFFFFFFFu); txt(0, 36, 252.5f, 0xFFFFFFFFu, 0x7F, 0);
        spr(s->tex[GCT_SQUARE], 157, 252.5f, 173, 268.5f, 0, 0, 1, 1, 0xFFFFFFFFu); txt(0, 175, 252.5f, 0xFFFFFFFFu, 0x40, 0);
        spr(s->tex[GCT_TRIANGLE], 296, 252.5f, 312, 268.5f, 0, 0, 1, 1, 0xFFFFFFFFu); txt(0, 314, 252.5f, 0xFFFFFFFFu, 0x41, 0);
    }
    ak_hud_2d_end();
}
