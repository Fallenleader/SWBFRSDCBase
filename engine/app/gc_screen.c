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
    memset(s, 0, sizeof *s);
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

void ak_gc_screen_draw(const ak_gc_screen *s, const ak_m4 *vp)
{
    (void)vp; if (!s->ready) return;
    ak_hud_2d_begin();
    /* header: "PHASE" + the phase's name (top left), "CREDITS" + the side's credits in yellow (top right) */
    u32 n; const u16 *t;
    if ((t = ak_gc_text(0x37, &n))) {
        f32 w = ak_hud_2d_text(1, 4, 2, 200, 1.0f, 0xFFFFFFFFu, t, n, 0); (void)w;
        u32 m; const u16 *ph = ak_gc_text((u32)s->phase, &m);
        if (ph) ak_hud_2d_text(1, 60, 2, 260, 1.0f, 0xFFFFFFFFu, ph, m, 0);
    }
    {
        char num[16]; u16 w16[16]; int k = snprintf(num, sizeof num, "%u", s->g.side[0].credits);
        for (int i = 0; i < k; i++) w16[i] = (u16)num[i];
        ak_hud_2d_text(1, 300, 2, 476, 1.0f, 0xFFFFE000u, w16, (u32)k, 2);
        if ((t = ak_gc_text(0x35, &n))) ak_hud_2d_text(1, 200, 2, 440, 1.0f, 0xFFFFFFFFu, t, n, 2);
    }
    ak_hud_2d_end();
}
