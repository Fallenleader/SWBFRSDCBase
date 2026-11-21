/* Aurek - the Galactic Conquest map screen (see gc_screen.h; PARITY 5.4) */
#include "app/gc_screen.h"
#include "app/hud.h"
#include "core/ak_settings.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

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

/* The sector shapes.  SHAP body (GC.PSP's four): u32 hash, 3, 9, vertex count, face count, 5 zero words, the box (min / max per
 * axis), the radius, the vertices (game axes, model space; the first half the inner outline, the second half the outer), the faces
 * (4 x u16; the fourth 0xFFFF = a triangle): the fill joins inner vertices only, the rim joins the two outlines.  Each is placed by an
 * ENTI type 7 record naming the hash after its position and rotation quaternion (no mesh of that name: the entity loader leaves it
 * unplaced).  Which sector a shape is: the one whose planets lie nearest its centre. */
static void qrot(const ak_quat *q, const f32 *v, f32 *o)   /* v' = q v q* */
{
    f32 tx = 2 * (q->y * v[2] - q->z * v[1]), ty = 2 * (q->z * v[0] - q->x * v[2]), tz = 2 * (q->x * v[1] - q->y * v[0]);
    o[0] = v[0] + q->w * tx + q->y * tz - q->z * ty; o[1] = v[1] + q->w * ty + q->z * tx - q->x * tz; o[2] = v[2] + q->w * tz + q->x * ty - q->y * tx;
}
static void load_shapes(ak_gc_screen *s, const ak_level *l)
{
    static ak_vtx vbuf[4096]; u32 used = 0;
    const u8 *shp[8]; u32 shp_n[8], nshp = 0; ak_chunk c; u32 pos = 8;
    while (ak_asura_next(&l->file, &pos, &c))
        if (ak_chunk_tag(&c) == AK_TAG('S', 'H', 'A', 'P') && c.size >= 68 && nshp < 8) { shp[nshp] = c.body; shp_n[nshp++] = c.size; }
    pos = 8;
    while (ak_asura_next(&l->file, &pos, &c) && s->nshape < AK_GC_SECTORS) {
        if (ak_chunk_tag(&c) != AK_TAG('E', 'N', 'T', 'I') || c.size < 48) continue;
        const u8 *b = c.body; u32 nw = c.size / 4;
        #define W(i) ak_rd32(b + 4 * (i))
        #define F(i) ak_rdf32(b + 4 * (i))
        if (W(1) != 7) continue;
        for (u32 i = 10; i < nw; i++) for (u32 k = 0; k < nshp; k++) {
            if (W(i) != ak_rd32(shp[k])) continue;
            const u8 *h = shp[k]; u32 nv = ak_rd32(h + 12), nf = ak_rd32(h + 16);
            if (68 + nv * 12 + nf * 8 > shp_n[k] || used + nf * 6 > 4096) continue;
            f32 gp[3] = { F(i - 8), F(i - 7), F(i - 6) }; ak_quat q = { F(i - 5), -F(i - 4), -F(i - 3), F(i - 2) }; f32 ep[3]; ak_from_game(gp, ep);
            int si = s->nshape++; f32 cen[3] = { 0, 0, 0 };
            ak_vtx *fill = vbuf + used; u32 nfill = 0;
            for (int pass = 0; pass < 2; pass++) {
                ak_vtx *o = vbuf + used; u32 n = 0;
                for (u32 f = 0; f < nf; f++) {
                    const u8 *fp = h + 68 + nv * 12 + f * 8; u16 ix[4]; for (int j = 0; j < 4; j++) ix[j] = (u16)(fp[2 * j] | fp[2 * j + 1] << 8);
                    bool tri = ix[3] == 0xFFFF, inner = ix[0] < nv / 2 && ix[1] < nv / 2 && ix[2] < nv / 2 && (tri || ix[3] < nv / 2);
                    if (inner != (pass == 0)) continue;
                    static const int tri_i[6] = { 0, 1, 2, 0, 2, 3 }; int cnt = tri ? 3 : 6; bool ok = true;
                    for (int j = 0; j < cnt; j++) ok = ok && ix[tri_i[j]] < nv;
                    if (!ok) continue;
                    for (int j = 0; j < cnt; j++) {
                        const u8 *vp = h + 68 + ix[tri_i[j]] * 12; f32 g[3] = { ak_rdf32(vp), ak_rdf32(vp + 4), ak_rdf32(vp + 8) }, e[3], r[3];
                        ak_from_game(g, e); qrot(&q, e, r);
                        ak_vtx *v = &o[n++]; memset(v, 0, sizeof *v);
                        for (int a = 0; a < 3; a++) { v->pos[a] = r[a] + ep[a]; if (pass == 0) cen[a] += v->pos[a]; }
                        v->col[0] = v->col[1] = v->col[2] = v->col[3] = 255;
                    }
                }
                if (pass == 0) { fill = o; nfill = n; } else { s->shape[si].rim = o; s->shape[si].nrim = n; }
                used += n;
            }
            s->shape[si].fill = fill; s->shape[si].nfill = nfill;
            for (int a = 0; a < 3; a++) cen[a] /= nfill ? (f32)nfill : 1.0f;
            int best = -1; f32 bd = 1e30f;
            for (int sec = 0; sec < AK_GC_SECTORS; sec++) {
                f32 m[3] = { 0, 0, 0 }; int np = 0;
                for (int p = 0; p < AK_GC_PLANETS; p++) if (ak_gc_planet_defs[p].sector == sec && s->planet_known[p]) { for (int a = 0; a < 3; a++) m[a] += s->planet_pos[p][a]; np++; }
                if (!np) continue;
                f32 d = 0; for (int a = 0; a < 3; a++) { f32 t = m[a] / (f32)np - cen[a]; d += t * t; }
                if (d < bd) { bd = d; best = sec; }
            }
            s->shape[si].sector = best;
            if (getenv("AK_GC_DEBUG")) fprintf(stderr, "[GC] shape %d: sector %d (%u fill, %u rim)\n", si, best, nfill, s->shape[si].nrim);
            i = nw; break;
        }
        #undef W
        #undef F
    }
}

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
    load_shapes(s, l);
    ak_gc_ai_init(&s->ai);
    { int gs = ak_setting_int("AK_GC_GIVE_SECTOR", -1);           /* (tests: side 0 holds sector n) */
      if (gs >= 0 && gs < AK_GC_SECTORS) { for (int p = 0; p < AK_GC_PLANETS; p++) if (ak_gc_planet_defs[p].sector == gs && !s->g.planet[p].home) s->g.planet[p].owner = 0; ak_gc_update_sectors(&s->g); } }
    if (getenv("AK_GC_DEBUG")) for (int i = 0; i < AK_GC_SECTORS; i++) { fprintf(stderr, "[GC] sector %d owner %d:", i, s->g.sector_owner[i]); for (int p = 0; p < AK_GC_PLANETS; p++) if (ak_gc_planet_defs[p].sector == i) fprintf(stderr, " %d", s->g.planet[p].owner); fprintf(stderr, "\n"); }
    s32 ti = ak_level_find_texture(l, "\\graphics\\GUI\\GC_Elements\\GC_Planet_Corona.bmp");
    s->corona = ti >= 0 && sc->tex ? sc->tex[ti] : NULL;   /* GC_Planet_Corona.bmp: GC's texture 0 (08A4CB34(0)) */
    static const char *const tn[GCT_N] = { "\\graphics\\GUI\\GC_Elements\\GC_Tech_Elements.tga", "\\graphics\\GUI\\GC_Elements\\GC_Tech_Elements_02.tga",
        "\\graphics\\GUI\\PSP_Button_Icons\\button_square.tga", "\\graphics\\GUI\\PSP_Button_Icons\\button_triangle.tga",
        "\\graphics\\GUI\\PSP_Button_Icons\\button_x.tga", "\\graphics\\GUI\\PSP_Button_Icons\\button_select.tga",
        "\\graphics\\gui\\psp_button_icons\\button_circle.tga", "\\graphics\\GUI\\PSP_Button_Icons\\button_r1.tga" };
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

/* fill rgba, rim rgba; the tint is doubled by the frame's colour scale (as the game's vertex colours), so colours are halved.  Read off
   the original's screen over the dark sky: white fill ~0.28, rim ~0.62; the player's fill ~(0.39, 0.5, 0.95) x 0.35, rim ~(0.27, 0.63,
   0.92) x 0.7 [assumed: measured, not traced; the enemy's red mirrors the player's blue] */
static const f32 GC_SEC_WHITE[8] = { 1, 1, 1, 0.28f, 1, 1, 1, 0.62f }, GC_SEC_BLUE[8] = { 0.195f, 0.25f, 0.475f, 0.35f, 0.135f, 0.315f, 0.46f, 0.70f },
                 GC_SEC_RED[8] = { 0.475f, 0.15f, 0.15f, 0.35f, 0.46f, 0.17f, 0.135f, 0.70f };
void ak_gc_screen_draw_back(const ak_gc_screen *s, const ak_m4 *vp)
{
    if (!s->ready) return;
    (void)vp;
    /* the sectors: a translucent fill and a brighter rim, white; the side's colour when one side holds the whole sector (the
       original's screen: the player's blue) [assumed: alphas and colours read off the screen; red for the enemy by symmetry] */
    ak_gfx_set_transform(NULL);
    for (int i = 0; i < s->nshape; i++) {
        int so = s->shape[i].sector >= 0 ? s->g.sector_owner[s->shape[i].sector] : AK_GC_NONE;
        const f32 *c = so == 0 ? GC_SEC_BLUE : so == 1 ? GC_SEC_RED : GC_SEC_WHITE;
        f32 tf[4] = { c[0], c[1], c[2], c[3] }, tr[4] = { c[4], c[5], c[6], c[7] };
        ak_gfx_set_tint(tf); if (s->shape[i].nfill) ak_gfx_draw_immediate(AK_PIPE_BLEND, NULL, s->shape[i].fill, s->shape[i].nfill);
        ak_gfx_set_tint(tr); if (s->shape[i].nrim) ak_gfx_draw_immediate(AK_PIPE_BLEND, NULL, s->shape[i].rim, s->shape[i].nrim);
    }
    ak_gfx_set_tint(NULL);
    /* owner halos: the game's flares (08A4CDC8 / 08A4D1C4: one per planet, pool 0x08B44C2C, the corona texture, at the planet's place
       0x08C2DE40 + 12 p), shown by 08A4AF9C for owned planets once 1.0 <= 0x08B1C848 [assumed: reached at once], size 1.5
       (0x08AF003C), colour (0, 0, 1) for side 0 and (1, 0, 0) for side 1, none on neutral ones.  Drawn as a camera-facing square of
       half-size 1.5 world units [assumed: the size is the half-width], additive (the corona BMP is opaque, black outside the glow)
       [assumed: blend not traced].  The cursor (08A4B0DC): its planet's flare shown at size 2.0 (0x08AF0044) in the owner's colour
       (black on a neutral one) pulsing toward white by 08A4D128 = clamp((sin(2 pi fmod(t, 1)) + 1) x 0.5, 0, 1); while a destination is
       chosen the source's flare stays at 2.0 [assumed: its colour unpulsed]. */
    if (!s->corona) return;
    const f32 *m = vp->m; f32 sx = sqrtf(m[0] * m[0] + m[4] * m[4] + m[8] * m[8]), sy = sqrtf(m[1] * m[1] + m[5] * m[5] + m[9] * m[9]);
    static ak_vtx v[AK_GC_PLANETS * 6]; u32 n = 0;
    for (int p = 0; p < AK_GC_PLANETS; p++) {
        int o = s->g.planet[p].owner; const f32 *q = s->planet_pos[p];
        bool cur = p == s->cursor && s->phase >= 1 && s->phase <= 3, src = p == s->src && (s->sub == 1 || s->sub == 2) && s->phase >= 2 && s->phase <= 3;
        if ((o == AK_GC_NONE && !cur && !src) || !s->planet_known[p]) continue;
        f32 size = cur || src ? 2.0f : 1.5f, col[3] = { o == 1 ? 1.0f : 0.0f, 0.0f, o == 0 ? 1.0f : 0.0f };
        if (cur) { f32 k = (sinf(fmodf(s->clock, 1.0f) * 6.2831853f) + 1.0f) * 0.5f; for (int i = 0; i < 3; i++) col[i] += (1.0f - col[i]) * k; }
        f32 cx = m[0] * q[0] + m[4] * q[1] + m[8] * q[2] + m[12], cy = m[1] * q[0] + m[5] * q[1] + m[9] * q[2] + m[13];
        f32 cz = m[2] * q[0] + m[6] * q[1] + m[10] * q[2] + m[14], cw = m[3] * q[0] + m[7] * q[1] + m[11] * q[2] + m[15];
        if (cw <= 0) continue;
        f32 x = cx / cw, y = cy / cw, z = cz / cw, rx = size * sx / cw, ry = size * sy / cw;
        static const f32 cs[6][2] = { { -1, -1 }, { 1, -1 }, { 1, 1 }, { -1, -1 }, { 1, 1 }, { -1, 1 } };
        for (int k = 0; k < 6; k++) {
            ak_vtx *w = &v[n++]; memset(w, 0, sizeof *w);
            w->pos[0] = x + cs[k][0] * rx; w->pos[1] = y + cs[k][1] * ry; w->pos[2] = z;
            w->uv[0] = cs[k][0] * 0.5f + 0.5f; w->uv[1] = 0.5f - cs[k][1] * 0.5f;
            for (int i = 0; i < 3; i++) { w->col[i] = (u8)(col[i] * 128.0f); } w->col[3] = 255;   /* 128 = 1.0 (the colour doubling) */
        }
    }
    static const ak_m4 id = { { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 } };
    if (n) { ak_gfx_set_transform(&id); ak_gfx_draw_immediate(AK_PIPE_ADD, s->corona, v, n); ak_gfx_set_transform(NULL); }
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
    if (s->tech_open) {
        /* over the tech page: CREDITS and the side's credits (x 360 / 437..477, as the map's header) and the bar: circle Back, R1 View
           Opponent's Tech/Comm (157, 32 wide), cross Buy at 404 (the original's frames; [assumed: Buy shown always - the original
           shows it on a buyable item]) */
        txt(1, 360, 0, 0xFFFFFFFFu, 0x35, 0); num(1, 477, 0, 0xFFFFFF00u, s->g.side[0].credits, 2, true);
        ak_hud_2d_quad(NULL, 0, 249, 480, 272, 0, 0, 1, 1, 0x60000000u);
        spr(s->tex[GCT_CIRCLE], 2, 252.5f, 18, 268.5f, 0, 0, 1, 1, 0xFFFFFFFFu); txt(0, 20, 252.5f, 0xFFFFFFFFu, 0x45, 0);
        spr(s->tex[GCT_R1], 157, 252.5f, 189, 268.5f, 0, 0, 1, 1, 0xFFFFFFFFu); txt(0, 191, 252.5f, 0xFFFFFFFFu, 0x50, 0);
        spr(s->tex[GCT_CROSS], 404, 252.5f, 420, 268.5f, 0, 0, 1, 1, 0xFFFFFFFFu); txt(0, 422, 252.5f, 0xFFFFFFFFu, 0x44, 0);
        ak_hud_2d_end(); return;
    }
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
    /* the bar per phase and step: purchase browsing is the logged one; the rest uses the same three places with the texts the
       original has for them (0x44 Buy, 0x45 Back, 0x46 Select Source, 0x48 Select Destination, 0x49 Confirm Move, 0x4A Auto-Resolve,
       0x4B Attack, 0x4C / 0x47 End Phase, 0x4D Confirm Reinforcement) [assumed: which appear together and where] */
    struct { int tex; u32 id; } b[3] = { { -1, 0 }, { -1, 0 }, { -1, 0 } };
    if (s->phase == 0) { b[2].tex = GCT_CROSS; b[2].id = 0x58; }
    else if (s->phase == 4) {}
    else if (s->sub == 0 && s->phase == 1) { b[0].tex = GCT_SELECT; b[0].id = 0x7F; b[1].tex = GCT_SQUARE; b[1].id = 0x40; b[2].tex = GCT_TRIANGLE; b[2].id = 0x41; }
    else if (s->sub == 0) { b[0].tex = GCT_CROSS; b[0].id = 0x46; b[2].tex = GCT_TRIANGLE; b[2].id = s->phase == 2 ? 0x47 : 0x4C; }
    else if (s->sub == 2) { b[0].tex = GCT_CROSS; b[0].id = 0x48; b[1].tex = GCT_CIRCLE; b[1].id = 0x45; }
    else if (s->sub == 1) { b[0].tex = GCT_CROSS; b[0].id = s->phase == 1 ? 0x44 : s->phase == 2 ? 0x49 : 0x4D; b[1].tex = GCT_CIRCLE; b[1].id = 0x45; }
    else if (s->sub == 3) { b[0].tex = GCT_CROSS; b[0].id = 0x4B; b[1].tex = GCT_SQUARE; b[1].id = 0x4A; }
    static const f32 bx[3] = { 2, 157, 296 };
    for (int i = 0; i < 3; i++) {
        if (b[i].tex < 0) continue;
        f32 x = s->phase == 0 ? 404 : bx[i], w = b[i].tex == GCT_SELECT ? 32.0f : 16.0f;
        spr(s->tex[b[i].tex], x, 252.5f, x + w, 268.5f, 0, 0, 1, 1, 0xFFFFFFFFu); txt(0, x + w + 2, 252.5f, 0xFFFFFFFFu, b[i].id, 0);
    }
    /* the count being chosen (purchase / move / reinforce): the title and the number, under the planet panel [assumed: place] */
    if (s->sub == 1) {
        ak_hud_2d_quad(NULL, 5, 118, 123, 160, 0, 0, 1, 1, 0x99000000u);
        txt(0, 64, 121, 0xFFFFFFFFu, s->phase == 1 ? 0x38 : s->phase == 2 ? 0x3A : 0x6F, 1);
        num(1, 64, 137, 0xFFFFFF00u, (u32)s->count, 1, false);
    }
    /* the treasury: Player, Credits Received, Planets / Sector(s) / Total (the original's panel; [assumed: sizes]) */
    if (s->phase == 0) {
        spr(s->tex[GCT_TECH2], 163, 123, 311, 238, 0.4570f, 0.0f, 0.9180f, 0.3477f, 0x99FFFFFFu);
        txt(0, 237, 128, 0xFFFFFF00u, 0x59, 1); txt(0, 237, 146, 0xFFFFFFFFu, 0x54, 1);
        txt(0, 171, 164, 0xFFFFFFFFu, 0x55, 0); num(0, 303, 164, 0xFFFFFF00u, s->income.planets, 2, true);
        txt(0, 171, 180, 0xFFFFFFFFu, 0x56, 0); num(0, 303, 180, 0xFFFFFF00u, s->income.sectors + s->income.commander, 2, true);
        ak_hud_2d_quad(NULL, 171, 213, 303, 215, 0, 0, 1, 1, 0xFFFFFF00u);
        txt(0, 171, 218, 0xFFFFFFFFu, 0x57, 0); num(0, 303, 218, 0xFFFFFF00u, s->income.total, 2, true);
    }
    if (s->phase == 4) txt(1, 240, 120, 0xFFFFFFFFu, s->g.winner == 0 ? 0x60 : 0x61, 1);
    if (s->msg_t > 0) txt(1, 240, 225, 0xFFFF4040u, s->msg, 1);
    ak_hud_2d_end();
}

/* ---- the player's turn.  The rules are ak_gc's (traced); the controls are the original's button labels (GALACTICCONQUEST.ASR:
 * cross Buy Troops / Select Source / Select Destination / Confirm, circle Cancel / Back, square Buy Tech/Comm or Auto-Resolve,
 * triangle End Phase) [assumed: which button does what beyond the bar's labels; the count steps of 10 by up / down, as the AI's
 * count presses 0x29 / 0x2A].  The cursor moves to the nearest planet within 0.39 rad of the pressed direction, else 0.79, else
 * 1.57 (the debug values BFF_GC_GUI_13-15 "Next_Planet_0/1/2") [assumed: their use].  A battle: Attack plays it as a match
 * (the viewer, ak_gc_screen_battle_setup / _done), Auto-Resolve settles it here. */
static void say(ak_gc_screen *s, u32 id) { s->msg = id; s->msg_t = 2.0f; }
static void move_cursor(ak_gc_screen *s, const ak_m4 *vp, f32 dx, f32 dy)
{
    f32 cx, cy; if (s->cursor < 0 || !project(vp, s->planet_pos[s->cursor], &cx, &cy)) { s->cursor = 0; return; }
    static const f32 cone[3] = { 0.39f, 0.79f, 1.57f };
    for (int c = 0; c < 3; c++) {
        int best = -1; f32 bd = 1e30f;
        for (int p = 0; p < AK_GC_PLANETS; p++) {
            f32 x, y; if (p == s->cursor || !s->planet_known[p] || !project(vp, s->planet_pos[p], &x, &y)) continue;
            f32 ex = x - cx, ey = y - cy, d = sqrtf(ex * ex + ey * ey); if (d < 1) continue;
            f32 a = acosf((ex * dx + ey * dy) / d); if (a > cone[c]) continue;
            if (d < bd) { bd = d; best = p; }
        }
        if (best >= 0) { s->cursor = best; return; }
    }
}
static int autoresolve(void *ctx, ak_gc *g, int side, int to, int n, bool second, int surv[2])
{
    const ak_gc_rules *r = ctx; const char *lvl = ak_gc_battle_level(g, to, second);
    surv[side] = n; surv[!side] = g->planet[to].troops;
    return ak_gc_autoresolve(g, r, surv, !strncmp(lvl, "space", 5));
}
static void end_turn(ak_gc_screen *s)
{
    ak_gc *g = &s->g;
    g->turn = 1; ak_gc_collect(g, &s->r, 1);
    ak_gc_ai_report rp; ak_gc_ai_turn(&s->ai, g, &s->r, autoresolve, &s->r, &rp);
    if (g->winner >= 0) { s->phase = 4; return; }
    g->turn = 0; s->income = ak_gc_collect(g, &s->r, 0); ak_gc_turn_start(g);
    s->phase = 0; s->sub = 0;
}
static void battle_over(ak_gc_screen *s, int w, int surv[2])
{
    if (ak_gc_result(&s->g, &s->r, s->battle_side, s->battle_to, w, surv, s->battle_second)) { s->battle_second = true; return; }   /* a second battle */
    s->sub = 0;
    if (s->g.winner >= 0) { s->phase = 4; return; }
    if (!ak_gc_after_move(&s->g)) { s->phase = 3; }
}
static void battle_now(ak_gc_screen *s)
{
    int surv[2], w = autoresolve(&s->r, &s->g, s->battle_side, s->battle_to, s->battle_n, s->battle_second, surv);
    battle_over(s, w, surv);
}
/* the match for a battle: the level the GC battle is fought on (08A3A2B8), each side's troops as its tickets (by faction class,
   ak_gc_battle_tickets / 08A3A1D0), the player on their GC faction; at its end 08A3A5CC's rules (ak_gc_battle_winner - the
   winning faction's side, 2 a draw -, the survivors from the tickets left, ak_gc_result) */
const char *ak_gc_screen_battle_setup(ak_gc_screen *s, int tickets[2], int *player_faction)
{
    s->battle_launch = false; s->battle_live = true;
    ak_gc_battle_tickets(&s->g, s->battle_side, s->battle_to, s->battle_n, tickets);
    *player_faction = s->g.side[0].faction;
    return ak_gc_battle_level(&s->g, s->battle_to, s->battle_second);
}
void ak_gc_screen_battle_done(ak_gc_screen *s, int winning_faction, const int left[2])
{
    s->battle_live = false;
    int w = ak_gc_battle_winner(&s->g, winning_faction), surv[2]; ak_gc_battle_survivors(&s->g, left, surv);
    battle_over(s, w, surv);
}
bool ak_gc_screen_update(ak_gc_screen *s, const ak_input *in, const ak_m4 *vp, f32 dt)
{
    if (!s->ready) return false;
    if (s->msg_t > 0) s->msg_t -= dt;
    s->clock += dt;
    u32 pr = in->pressed; ak_gc *g = &s->g; int c = s->cursor;
    if (s->phase == 4) return false;
    bool browse = s->sub == 0 || s->sub == 2;
    if (browse) {
        if (pr & AK_BTN_LEFT) move_cursor(s, vp, -1, 0);
        if (pr & AK_BTN_RIGHT) move_cursor(s, vp, 1, 0);
        if (pr & AK_BTN_UP) move_cursor(s, vp, 0, -1);
        if (pr & AK_BTN_DOWN) move_cursor(s, vp, 0, 1);
        c = s->cursor;
    } else if (s->sub == 1) {
        if (pr & AK_BTN_UP) s->count = s->count + 10 <= s->count_max ? s->count + 10 : s->count_max;
        if (pr & AK_BTN_DOWN) s->count = s->count - 10 >= 10 ? s->count - 10 : (s->count_max < 10 ? s->count_max : 10);
    }
    switch (s->phase) {
    case 0:                                                      /* treasury: Continue */
        if (pr & AK_BTN_CROSS) { s->phase = 1; s->sub = 0; }
        break;
    case 1:                                                      /* purchase */
        if (s->sub == 0) {
            if (pr & AK_BTN_TRIANGLE) { s->phase = 2; s->sub = 0; break; }
            if (pr & AK_BTN_SQUARE) { s->tech_open = true; break; }   /* Buy Tech/Comm: the page (the viewer opens it) */
            if (pr & AK_BTN_CROSS) {
                if (c < 0 || g->planet[c].owner != 0) { say(s, 0x7B); break; }
                int room = ak_gc_cap(g, &s->r, c) - g->planet[c].troops, cr = (int)g->side[0].credits, most = room < cr ? room : cr;
                if (room <= 0) { say(s, 0x7A); break; }
                if (most < 10) { say(s, 0x6D); break; }
                s->sub = 1; s->count_max = most - most % 10; s->count = 10;
            }
        } else if (s->sub == 1) {
            if (pr & AK_BTN_CIRCLE) s->sub = 0;
            else if (pr & AK_BTN_CROSS) { ak_gc_buy_troops(g, &s->r, 0, c, s->count); s->sub = 0; }
        }
        break;
    case 2:                                                      /* movement */
        if (s->sub == 0) {
            if (pr & AK_BTN_TRIANGLE) { s->phase = 3; s->sub = 0; break; }
            if (pr & AK_BTN_CROSS) {
                if (c < 0 || g->planet[c].owner != 0) { say(s, 0x7B); break; }
                if (g->planet[c].troops < 20 || !ak_gc_move_source(g, 0, c)) { say(s, 0x6D); break; }
                s->src = c; s->sub = 2;
            }
        } else if (s->sub == 2) {
            if (pr & AK_BTN_CIRCLE) s->sub = 0;
            else if (pr & AK_BTN_CROSS) {
                int room = ak_gc_move_room(g, &s->r, 0, s->src, c);
                if (room <= 0) { say(s, g->planet[c].owner == 0 ? 0x6E : 0x7C); break; }
                s->dst = c; s->sub = 1; s->count_max = room; s->count = room;
            }
        } else if (s->sub == 1) {
            if (pr & AK_BTN_CIRCLE) s->sub = 2;
            else if (pr & AK_BTN_CROSS) {
                int res = ak_gc_move(g, &s->r, 0, s->src, s->dst, s->count);
                if (res == AK_GC_MOVE_BATTLE) { s->sub = 3; s->battle_side = 0; s->battle_to = s->dst; s->battle_n = s->count; s->battle_second = false; }
                else { s->sub = 0; if (res != AK_GC_MOVE_BAD && !ak_gc_after_move(g)) s->phase = 3; }
            }
        } else if (s->sub == 3) {                                /* Attack (a match: the viewer starts it) or Auto-Resolve */
            if (s->battle_live || s->battle_launch) break;
            if (pr & AK_BTN_CROSS) s->battle_launch = !ak_setting_int("AK_GC_AUTORESOLVE", 0);
            if ((pr & AK_BTN_SQUARE) || ((pr & AK_BTN_CROSS) && !s->battle_launch)) battle_now(s);
        }
        break;
    case 3:                                                      /* reinforce */
        if (s->sub == 0) {
            if (pr & AK_BTN_TRIANGLE) { end_turn(s); break; }
            if (pr & AK_BTN_CROSS) {
                if (c < 0 || g->planet[c].owner != 0) { say(s, 0x7B); break; }
                if (g->planet[c].troops < 11) { say(s, 0x7C); break; }
                s->src = c; s->sub = 2;
            }
        } else if (s->sub == 2) {
            if (pr & AK_BTN_CIRCLE) s->sub = 0;
            else if (pr & AK_BTN_CROSS) {
                if (g->planet[c].owner != 0) { say(s, 0x7B); break; }
                int room = ak_gc_cap(g, &s->r, c) - g->planet[c].troops, avail = g->planet[s->src].troops - 10, m = room < avail ? room : avail;
                if (room <= 0) { say(s, 0x6E); break; }
                if (m <= 0) { say(s, 0x6D); break; }
                s->dst = c; s->sub = 1; s->count_max = m; s->count = m;
            }
        } else if (s->sub == 1) {
            if (pr & AK_BTN_CIRCLE) s->sub = 2;
            else if (pr & AK_BTN_CROSS) { if (!ak_gc_reinforce(g, &s->r, 0, s->src, s->dst, s->count)) say(s, 0x7C); s->sub = 0; }
        }
        break;
    }
    return s->phase != 4;
}

/* ---- the tech page's contents (08A44E40 the focused item's line; prices ak_gc_tech_price / ak_gc_cmdr_price).  The lines: logistics
 * 0x20-0x22 with the troop cap (08A43494), infantry 0x23 / 0x24 ("Damage reduced by 20%") / 0x25, space 0x26-0x28 (Alliance) or
 * 0x29-0x2B (Empire); commanders Alliance 0x1C-0x1F, Empire 0x18-0x1B: Han Solo's 10%, the planet bonus PlanetInSectorBonus
 * (08A4356C), Leia / Tarkin TechCostBonus x 100 and CommanderCostBonus x 100 (08A43404 / 08A4344C x 0x08AEFC94 = 100); names
 * 0x30-0x33 / 0x2C-0x2F. */
static u16 tline[13][160]; static u32 tlen[13];
static u32 fmt_line(u16 *o, u32 cap, u32 id, const int *v, int nv)
{
    u32 n; const u16 *t = ak_gc_text(id, &n); u32 k = 0; int vi = 0;
    for (u32 i = 0; t && i < n && k + 12 < cap; i++) {
        if (t[i] == '%' && i + 1 < n && t[i + 1] == 'd') { char b[12]; int m = snprintf(b, sizeof b, "%d", vi < nv ? v[vi] : 0); vi++; for (int j = 0; j < m; j++) o[k++] = (u16)b[j]; i++; }
        else if (t[i] == '%' && i + 1 < n && t[i + 1] == '%') { o[k++] = '%'; i++; }
        else o[k++] = t[i];
    }
    return k;
}
void ak_gc_screen_tech(const ak_gc_screen *s, ak_fe_gc *o)
{
    memset(o, 0, sizeof *o);
    const ak_gc_side *sd = &s->g.side[0]; bool evil = (ak_gc_class(sd->faction) & 1) != 0;
    for (int k = 0; k < 3; k++) { o->tech[k] = sd->tech[k]; for (int l = 0; l < 3; l++) o->tech_price[k][l] = ak_gc_tech_price(&s->g, &s->r, 0, k, l); }
    for (int c = 0; c < 4; c++) {
        o->cmdr_avail[c] = sd->cmdr_avail[c]; o->cmdr_bought[c] = sd->cmdr_bought[c]; o->cmdr_price[c] = ak_gc_cmdr_price(&s->g, &s->r, 0, c);
        o->cmdr_name[c] = ak_gc_text((u32)((evil ? 0x2C : 0x30) + c), &o->cmdr_name_len[c]);
    }
    o->acquired = ak_gc_text(0x4F, &o->acquired_len);
    for (int l = 0; l < 3; l++) { int v = s->r.troop_cap[l]; tlen[l] = fmt_line(tline[l], 160, (u32)(0x20 + l), &v, 1); }
    { int v = 20; tlen[3] = fmt_line(tline[3], 160, 0x23, NULL, 0); tlen[4] = fmt_line(tline[4], 160, 0x24, &v, 1); tlen[5] = fmt_line(tline[5], 160, 0x25, NULL, 0); }
    for (int l = 0; l < 3; l++) tlen[6 + l] = fmt_line(tline[6 + l], 160, (u32)((evil ? 0x29 : 0x26) + l), NULL, 0);
    { int han = 10, pl = s->r.sector_planet_bonus, cb[2] = { (int)(s->r.tech_cost_bonus * 100.0f), (int)(s->r.cmdr_cost_bonus * 100.0f) };
      u32 base = evil ? 0x18 : 0x1C;
      tlen[9] = fmt_line(tline[9], 160, base, &han, 1); tlen[10] = fmt_line(tline[10], 160, base + 1, &pl, 1);
      tlen[11] = fmt_line(tline[11], 160, base + 2, cb, 2); tlen[12] = fmt_line(tline[12], 160, base + 3, NULL, 0); }
    for (int i = 0; i < 13; i++) { o->info[i] = tline[i]; o->info_len[i] = tlen[i]; }
}
/* the choice: 08A3B8xx records it (0x08C2D8CC = 1) and the purchase sub-state buys it: a tech level only as the next one, a
   commander when available, each if the credits cover it (ak_gc_buy_tech / ak_gc_buy_cmdr) */
void ak_gc_screen_tech_buy(ak_gc_screen *s, int kind, int index)
{
    if (kind >= 0 && kind < 3) { if (index == s->g.side[0].tech[kind] + 1) ak_gc_buy_tech(&s->g, &s->r, 0, kind); }
    else if (kind == 3 && index >= 0 && index < 4) ak_gc_buy_cmdr(&s->g, &s->r, 0, index);
}
