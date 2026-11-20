/* Aurek - the front end (see frontend.h). */
#include "frontend.h"
#include "hud.h"
#include "../assets/gui.h"
#include "../render/ak_gfx.h"
#include "../core/ak_settings.h"
#include "../audio/ak_audio.h"
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

static void fill_all(const struct ak_widget *w);
static const struct ak_widget *find_id(const struct ak_widget *w, u32 id);
static u32 id_of(const char *name);

static const char *const files[] = { "BFF_MAINMENU", "BFF_SINGLEPLAYER", "BFF_SERVERSETUP", "BFF_OPTIONS", "BFF_PROFILE", "BFF_MULTIPLAYER",
                                     "BFF_CUSTOMISATION", "BFF_GALACTICCONQUEST", "BFF_GUIMENU_INGAMESP" };
#define NFILES (int)(sizeof files / sizeof files[0])
#define MAXPAGES 160
static struct { u32 hash; u8 file; char name[40]; } idx[MAXPAGES]; static u32 nidx;
static ak_vfs *vfs; static ak_arena mem, txt; static ak_gui_texts texts; static bool ready;
static int cur_file = -1; static ak_gui_file gf; static ak_gfx_tex **gtex; static bool *gown;
/* the main menu's file stays loaded: its pictures win over another file's copies of the same name (the game keeps one picture
 * per name - SINGLEPLAYER.GUI's own menu_logos.tga carries the Italian logo, and the original shows the main menu's) */
static ak_arena basemem; static ak_gui_file base; static ak_gfx_tex **btex;
static const ak_gui_page *page; static u32 focus; static f32 clock;
static u32 stack[16]; static int nstack; static bool focus_fix_pending;

/* ---- script values ("BFF.FE_MapSelectionStatus", "GUIMenu.ActiveWidget", ...), as the pages' conditions read them */
#define MAXVARS 64
static struct { u32 h; f32 v; } vars[MAXVARS]; static int nvars;
static f32 *var_ref(const char *name)
{
    u32 h = ak_gui_hash(name);
    for (int i = 0; i < nvars; i++) if (vars[i].h == h) return &vars[i].v;
    if (nvars >= MAXVARS) { static f32 junk; return &junk; }
    /* first use: the profile's defaults [assumed: full volumes, subtitles off] */
    f32 d = 0; if (!strncmp(name, "BFF.Volume", 10)) d = 1.0f;
    vars[nvars].h = h; vars[nvars].v = d; return &vars[nvars++].v;
}
static void var_set(const char *name, f32 v) { *var_ref(name) = v; }
static f32 var_get(const char *name)
{
    if (!strcmp(name, "GUIMenu.ActiveWidget")) return (f32)(s32)focus;
    if (!strcmp(name, "Asura.CurrentLanguage")) return 0;              /* (English) [assumed numbering] */
    return *var_ref(name);
}

/* ---- the instant-action map table (0x08B1B980: 22 entries of 20 bytes, read in the original executable; the port's custom_maps.c
 * has the same layout): the Clone Wars level, the Galactic Civil War level, the name (STDTEXT), the modes it has (Conquest,
 * 1-flag CTF, 2-flag CTF, Hero CTF), space */
typedef struct { const char *cw, *gcw; u16 text; u8 modes[4]; u8 space; } map_entry;
static const map_entry maps[] = {
    { NULL, "boz_pity", 75, { 1, 0, 0, 0 }, 0 }, { NULL, "endor", 76, { 1, 1, 0, 1 }, 0 }, { "geonosis", "geonosis", 77, { 1, 1, 0, 1 }, 0 },
    { NULL, "hoth", 78, { 1, 0, 0, 0 }, 0 }, { NULL, "hoth_ion_cannon", 338, { 1, 0, 1, 1 }, 0 }, { "kashyyyk", "kashyyyk", 79, { 1, 0, 1, 1 }, 0 },
    { "korriban", "korriban", 81, { 1, 0, 1, 1 }, 0 }, { "mustafar", "mustafar", 82, { 1, 0, 1, 1 }, 0 }, { "mygeeto", "mygeeto", 83, { 1, 0, 1, 1 }, 0 },
    { "naboo", "naboo", 84, { 1, 0, 1, 1 }, 0 }, { "ord_mantell", "ord_mantell", 85, { 1, 0, 1, 1 }, 0 }, { "saleucami", "saleucami", 86, { 1, 0, 1, 1 }, 0 },
    { "sullust", "sullust", 87, { 1, 1, 0, 1 }, 0 }, { "tatooine", "tatooine", 88, { 1, 0, 1, 1 }, 0 }, { "yavin_iv", "yavin_iv", 89, { 1, 1, 0, 1 }, 0 },
    { NULL, "space_alderaan", 344, { 1, 1, 0, 0 }, 1 }, { "space_coruscant_clone", NULL, 339, { 1, 1, 0, 0 }, 1 }, { NULL, "space_hoth", 340, { 1, 1, 0, 0 }, 1 },
    { "space_kashyyyk_clone", "space_kashyyyk_civil", 341, { 1, 1, 0, 0 }, 1 }, { NULL, "space_kessel", 345, { 1, 1, 0, 0 }, 1 },
    { "space_mygeeto", NULL, 346, { 1, 1, 0, 0 }, 1 }, { NULL, "space_yavin", 347, { 1, 1, 0, 0 }, 1 },
};
#define NMAPS (int)(sizeof maps / sizeof maps[0])
static int sel_map = -1, sel_mode = -1;
static struct { int map, mode, era; } rot[16]; static int nrot;   /* the play list (BFF.NumMapsInRotation) */
static char launch_level[64]; static int launch_mode;
static ak_fe_match match; static bool have_match; static int team_choice, spawn_choice = -1;
void ak_fe_set_match(const ak_fe_match *m)
{
    match = *m; have_match = true;
    if (!match.level_text && nrot > 0) match.level_text = maps[rot[0].map].text;   /* (the play list's map: its name) */
    var_set("BFF.FE_GameType", m->mode); var_set("BFF.FE_GameEra", m->era == 0 ? 1 : 0);   /* (FE_GameEra: 1 classic, 0 prequel - the team buttons) */
    var_set("BFF.FE_PlayerFaction", m->faction[m->team]); var_set("BFF.FE_ChangeTeamAllowed", 1);
    var_set("BFF.FE_SpawnPointCount", (f32)m->nposts); var_set("BFF.FE_IsPlayerVictorious", m->winner == m->team);
    for (u32 i = 0; i < AK_FE_MAX_POSTS; i++) { char k[40]; snprintf(k, sizeof k, "BFF.FE_SpawnPointActive%u", i); var_set(k, i < m->nposts && m->post_owner[i] == m->team); }
    if (page) fill_all(&page->root);                                  /* (the team lists follow the match) */
}
int ak_fe_team(void) { return team_choice; }
int ak_fe_spawn_post(void) { return spawn_choice; }
void ak_fe_close(void) { page = NULL; nstack = 0; }

/* ---- text lists (2005): their rows, filled by their FE_List* function */
#define MAXROWS 48
typedef struct { u32 id; u16 *row[MAXROWS]; u32 len[MAXROWS]; int n, sel, top, val[MAXROWS]; } list_rows;
static list_rows lists[24]; static int nlists; static ak_arena rowmem;
static list_rows *rows_of(u32 id) { for (int i = 0; i < nlists; i++) if (lists[i].id == id) return &lists[i]; return NULL; }
static list_rows *fill_target;
static void row_add16(const u16 *t, u32 n, int val)
{
    list_rows *L = fill_target; if (!L || L->n >= MAXROWS) return;
    u16 *c = AK_NEW(&rowmem, u16, n + 1); if (!c) return;
    memcpy(c, t, n * 2); c[n] = 0; L->row[L->n] = c; L->len[L->n] = n; L->val[L->n] = val; L->n++;
}
static void row_std(u32 id, int val) { u32 n; const u16 *t = ak_hud_stdtext(id, &n); if (t) row_add16(t, n, val); }

static u32 child_tint = 0xFFFFFFFFu;   /* the colour the widgets drawn now are multiplied by (a spawn point's owner) */
static void path_of(int f, char *out, size_t n) { snprintf(out, n, "PSP_GAME/USRDIR/GUIMENU/%s.GUI", files[f]); }

bool ak_fe_init(ak_vfs *v)
{
    vfs = v; nidx = 0;
    if (!ak_arena_init(&rowmem, 256u << 10) || !ak_arena_init(&txt, 1u << 20) || !ak_arena_init(&mem, (size_t)ak_setting_int("AK_FE_MB", 24) << 20)) return false;
    ak_blob b;
    const char *lang = ak_setting_str("AK_FE_LANGUAGE", "AM"); char p[128];
    snprintf(p, sizeof p, "PSP_GAME/USRDIR/MISC/MENU/MENU_%s.ASR", lang);
    if (!ak_vfs_read(vfs, p, &txt, &b) || !ak_gui_texts_load(&b, &txt, &texts)) AK_WARN("fe", "%s: no menu texts", p);
    for (int f = 0; f < NFILES; f++) {                               /* the page index: each UIMP's name (body + 12) */
        ak_arena_reset(&mem); path_of(f, p, sizeof p);
        if (!ak_vfs_read(vfs, p, &mem, &b) || !ak_asura_check(&b)) continue;
        u32 pos = 8; ak_chunk c;
        while (ak_asura_next(&b, &pos, &c) && nidx < MAXPAGES) {
            if (ak_chunk_tag(&c) != AK_TAG('U', 'I', 'M', 'P') || c.size < 16) continue;
            const char *nm = (const char *)c.body + 12; size_t l = strnlen(nm, c.size - 12); if (l >= sizeof idx[0].name) continue;
            idx[nidx].hash = ak_gui_hash(nm); idx[nidx].file = (u8)f; memcpy(idx[nidx].name, nm, l + 1); nidx++;
        }
    }
    ak_arena_reset(&mem);
    if (ak_arena_init(&basemem, 8u << 20)) {
        path_of(0, p, sizeof p);
        if (ak_vfs_read(vfs, p, &basemem, &b) && ak_gui_load(&b, &basemem, &base) && (btex = AK_NEW(&basemem, ak_gfx_tex *, base.ntex ? base.ntex : 1)))
            for (u32 i = 0; i < base.ntex; i++) btex[i] = ak_gfx_texture(&base.tex[i]);
    }
    ready = nidx > 0;
    AK_INFO("fe", "%u menu pages in %d files, %u menu texts", nidx, NFILES, texts.n);
    return ready;
}

static bool same_name(const char *a, const char *b)
{
    if (!a || !b) return false;
    for (; *a && *b; a++, b++) { char x = *a, y = *b; if (x >= 'A' && x <= 'Z') x += 32; if (y >= 'A' && y <= 'Z') y += 32; if (x != y) return false; }
    return *a == *b;
}
static bool load_file(int f)
{
    if (f == cur_file) return true;
    if (f == 0 && btex) { gf = base; gtex = btex; gown = NULL; cur_file = 0; return true; }   /* the main menu: resident */
    ak_gfx_wait_idle();
    for (u32 i = 0; gtex && gown && i < gf.ntex; i++) if (gtex[i] && gown[i]) ak_gfx_free_tex(gtex[i]);
    gtex = NULL; gown = NULL; memset(&gf, 0, sizeof gf); cur_file = -1; ak_arena_reset(&mem);
    char p[128]; path_of(f, p, sizeof p); ak_blob b;
    if (!ak_vfs_read(vfs, p, &mem, &b) || !ak_gui_load(&b, &mem, &gf)) { AK_WARN("fe", "%s did not load", p); return false; }
    gtex = AK_NEW(&mem, ak_gfx_tex *, gf.ntex ? gf.ntex : 1); gown = AK_NEW(&mem, bool, gf.ntex ? gf.ntex : 1); if (!gtex || !gown) return false;
    for (u32 i = 0; i < gf.ntex; i++) {
        gtex[i] = NULL; gown[i] = false;
        for (u32 j = 0; btex && j < base.ntex; j++) if (same_name(gf.tex[i].name, base.tex[j].name)) { gtex[i] = btex[j]; break; }
        if (!gtex[i]) { gtex[i] = ak_gfx_texture(&gf.tex[i]); gown[i] = true; }
    }
    cur_file = f;
    AK_INFO("fe", "%s: %u pages, %u pictures, %.1f MB", files[f], gf.npages, gf.ntex, mem.used / 1048576.0);
    return true;
}

static bool open_hash(u32 h, bool push)
{
    for (u32 i = 0; i < nidx; i++) {
        if (idx[i].hash != h) continue;
        if (!load_file(idx[i].file)) return false;
        const ak_gui_page *pg = ak_gui_find_page(&gf, h); if (!pg) return false;
        if (push && page && nstack < 16) stack[nstack++] = page->root.id;
        page = pg; focus = pg->focus; clock = 0;
        focus_fix_pending = true;
        if (have_match && h == ak_gui_hash("MP_Spawn_Location"))     /* the first post the player's side holds */
            for (u32 k = 0; k < match.nposts; k++) if (match.post_owner[k] == match.team) { char nm[32]; snprintf(nm, sizeof nm, "W_BU_SpawnPoint%u", k); if (id_of(nm)) focus = id_of(nm); break; }
        nlists = 0; ak_arena_reset(&rowmem); fill_all(&pg->root);
        if (pg->on_open.fn && pg->on_open.fn[0]) AK_INFO("fe", "%s: %s(%s)", idx[i].name, pg->on_open.fn, pg->on_open.arg);
        else AK_INFO("fe", "%s", idx[i].name);
        return true;
    }
    /* a widget's id instead of a page's (W_BU_Options -> its own page; "Quit to Main Menu" -> W_BU_No_QuitInGame on the yes / no
       page): open the page that holds it, focused on it */
    for (u32 i = 0; i < gf.npages; i++) {
        if (!find_id(&gf.pages[i].root, h)) continue;
        if (push && page && nstack < 16) stack[nstack++] = page->root.id;
        page = &gf.pages[i]; focus = h; clock = 0; focus_fix_pending = false;
        nlists = 0; ak_arena_reset(&rowmem); fill_all(&page->root);
        AK_INFO("fe", "%s (at %08x)", page->root.name, h);
        return true;
    }
    AK_WARN("fe", "no page %08x", h); return false;
}
bool ak_fe_open(const char *name) { return ready && open_hash(ak_gui_hash(name), false); }
bool ak_fe_open_ingame(const char *name) { return ak_fe_open(name); }
const char *ak_fe_page(void) { return page ? page->root.name : NULL; }

/* ---- the widgets */
static const ak_widget *find_id(const ak_widget *w, u32 id)
{
    if (w->id == id) return w;
    for (u32 i = 0; i < w->nchild; i++) { const ak_widget *r = find_id(&w->child[i], id); if (r) return r; }
    return NULL;
}
static const ak_widget *find_named(const ak_widget *w, const char *prefix)
{
    if (w->name && !strncmp(w->name, prefix, strlen(prefix)) && (w->type == AK_GUI_BUTTON)) return w;
    for (u32 i = 0; i < w->nchild; i++) { const ak_widget *r = find_named(&w->child[i], prefix); if (r) return r; }
    return NULL;
}
static const ak_widget *find_name(const ak_widget *w, const char *name)   /* (ids are not always the name's hash: W_BU_SpawnPoint0 is 0x55F10F71) */
{
    if (w->name && !strcmp(w->name, name)) return w;
    for (u32 i = 0; i < w->nchild; i++) { const ak_widget *r = find_name(&w->child[i], name); if (r) return r; }
    return NULL;
}
static u32 id_of(const char *name) { const ak_widget *w = page ? find_name(&page->root, name) : NULL; return w ? w->id : 0; }
static bool is_button(u32 t) { return t >= 2000 && t < 3000 && t != AK_GUI_GROUP && t != AK_GUI_TEXTBOX && t != AK_GUI_TEXTLIST; }

/* a widget shows by its flags and its button's focus: bit 1 while the button is not focused, bit 2 while it is (a page's own
 * widgets count as unfocused); neither bit: always [assumed: read from the main menu's buttons - the D picture 0x43E shows
 * always, the H picture 0x43C only on the focused button, as in the original's frame] */
static const char *check_var;          /* drawing a check box's children: its value's name */
static bool shows(const ak_widget *w, bool focused)
{
    size_t l = w->name ? strlen(w->name) : 0;
    if (check_var && l > 2 && !strncmp(w->name, "E_IM_StyleCheckBox", 18) && (w->name[l - 1] == 'U' || w->name[l - 1] == 'C')) {
        bool on = var_get(check_var) != 0;                              /* the box's own pictures: ticked (..C) or not (..U) */
        if ((w->name[l - 1] == 'C') != on) return false;
        u32 f = w->flags & 6; return !f ? true : focused ? (f & 4) != 0 : (f & 2) != 0;
    }
    if (w->type < 2000 && w->flags && !(w->flags & 0x400)) return false;   /* (pictures and texts: bit 10 shown) [assumed] */
    u32 f = w->flags & 6;
    if (!f) return true;
    return focused ? (f & 4) != 0 : (f & 2) != 0;
}
static bool cond_holds(const ak_widget *w)
{
    if (!w->ncond) return true;
    int any = 0, all = 1;
    for (u32 i = 0; i < w->ncond; i++) {
        const ak_gui_cond *c = &w->cond[i]; f32 a = var_get(c->var), b = strtof(c->val, NULL); bool r;
        if (!strcmp(c->var, "GUIMenu.ActiveWidget")) { s32 ia = (s32)focus, ib = (s32)strtol(c->val, NULL, 0); a = (f32)(ia > ib) - (f32)(ia < ib); b = 0; }   /* (ids: exact) */
        switch (c->op) { case 1: r = fabsf(a - b) < 1e-4f; break; case 2: r = a > b + 1e-4f; break; case 3: r = a >= b - 1e-4f; break; case 4: r = a < b - 1e-4f; break; case 5: r = a <= b + 1e-4f; break; default: r = true; }
        any |= r; all &= r;
    }
    return w->cond_mode == 1 ? any != 0 : all != 0;
}
static u32 argb_of(const f32 *c, f32 a)
{
    f32 tc[4] = { c[0] * ((child_tint >> 16) & 255) / 255.0f, c[1] * ((child_tint >> 8) & 255) / 255.0f, c[2] * (child_tint & 255) / 255.0f, c[3] * (child_tint >> 24) / 255.0f };
    c = tc;
    u32 r = (u32)(c[0] * 255 + 0.5f), g = (u32)(c[1] * 255 + 0.5f), b = (u32)(c[2] * 255 + 0.5f), al = (u32)(c[3] * a * 255 + 0.5f);
    r = r > 255 ? 255 : r; g = g > 255 ? 255 : g; b = b > 255 ? 255 : b; al = al > 255 ? 255 : al;
    return al << 24 | r << 16 | g << 8 | b;
}
static const list_rows *scroll; static int scroll_shown;
/* the in-match pages' widgets the game fills at run time: the level's map (E_IM_SpawnLocal), the spawn points placed on it
 * (W_BU_SpawnPoint<k>, coloured by owner), the level's name and mode (E_TX_LevelName / LevelType), the focused post's name
 * (W_TB_SpawnName) [assumed: positions and colours as the original's frame shows them] */
static bool spawn_point_pos(const ak_widget *w, f32 *x, f32 *y)
{
    if (!have_match || !w->name || strncmp(w->name, "W_BU_SpawnPoint", 15)) return false;
    u32 k = (u32)atoi(w->name + 15); if (k >= match.nposts) return false;
    f32 sx, sy; if (!ak_hud_2d_map_point(match.post_pos[k], 40, 35, 200, &sx, &sy)) return false;
    *x = sx - 10; *y = sy - 10; return true;
}
static const char *parent_name;
static int focused_spawn(void)
{
    const ak_widget *f = page && focus ? find_id(&page->root, focus) : NULL;
    return f && f->name && !strncmp(f->name, "W_BU_SpawnPoint", 15) ? atoi(f->name + 15) : -1;
}
static const u16 *override_text(const ak_widget *w, u32 *n)
{
    if (!have_match || !w->name) return NULL;
    if (parent_name && !strcmp(parent_name, "W_TB_SpawnName")) {          /* the focused post's name */
        int k = focused_spawn(); if (k >= 0 && (u32)k < match.nposts && match.post_name[k] >= 0) return ak_hud_post_name(match.post_name[k], n);
    }
    if (!strcmp(w->name, "E_TX_LevelName")) return ak_hud_stdtext(match.level_text, n);
    if (!strcmp(w->name, "E_TX_LevelType")) return ak_hud_stdtext(40 + 2 * (u32)(match.mode & 3), n);
    return NULL;
}
static void draw_widget(const ak_widget *w, f32 ox, f32 oy, bool focused)
{
    f32 x = ox + w->pos[0], y = oy + w->pos[1];
    if (spawn_point_pos(w, &x, &y)) { ox = 0; oy = 0; }
    if (have_match && w->name && !strcmp(w->name, "E_IM_SpawnLocal")) { ak_hud_2d_map(x, y, 200, 0xFFFFFFFFu); return; }
    if (have_match && w->name && !strcmp(w->name, "E_TX_StyleMenuTitle") && cur_file == 8) return;   /* (the campaign's title: none in a plain match) */
    if (getenv("AK_FE_TRACE") && w->name && strstr(w->name, getenv("AK_FE_TRACE"))) AK_INFO("fe", "draw %s shows %d cond %d at %.0f,%.0f", w->name, shows(w, focused), cond_holds(w), x, y);
    if (w->type != AK_GUI_PAGE && (!shows(w, focused) || !cond_holds(w))) return;
    /* the Italian subtitle under the logo (menu_logos.tga's strip at v 0.445: "W_IM_ItalianLogo", or plain "Image 1") shows for
       the Italian language only - the original's English frames have none [assumed: the page scripts' doing] */
    if (w->type == AK_GUI_IMAGE && w->tex >= 0 && fabsf(w->uv[1] - 0.4453125f) < 1e-4f && gf.tex[w->tex].name && strstr(gf.tex[w->tex].name, "menu_logos")
        && strcmp(ak_setting_str("AK_FE_LANGUAGE", "AM"), "IT")) return;
    f32 a = 1;
    for (u32 i = 0; i < w->nanims; i++)                               /* "pulse_highlight": the highlight breathes [assumed rate] */
        if (!strncmp(w->anims[i], "pulse_highlight", 15)) a = 0.65f + 0.35f * cosf(clock * 6.2831853f);
    if (w->type == AK_GUI_IMAGE && w->tex >= 0 && (u32)w->tex < gf.ntex && gtex[w->tex]) {
        ak_hud_2d_quad(gtex[w->tex], x, y, x + w->size[0], y + w->size[1], w->uv[0], w->uv[1], w->uv[2], w->uv[3], argb_of(w->rgba, a));
    } else if (w->type == AK_GUI_IMAGE && w->rgba[3] > 0) {          /* no picture: a plain quad in its colour (panels, scroll bars) */
        f32 h = w->size[1], yy = y;
        if (scroll && w->name && !strcmp(w->name, "W_IM_Bar")) {      /* the bar: the shown share of the rows, at the first shown row */
            f32 n = (f32)scroll->n, sh = (f32)scroll_shown; if (n > sh) { yy = y + h * (f32)scroll->top / n; h = h * sh / n; }
        }
        ak_hud_2d_quad(NULL, x, yy, x + w->size[0], yy + h, 0, 0, 1, 1, argb_of(w->rgba, a));
    } else if (w->type == AK_GUI_TEXT && (w->text_key || override_text(w, &(u32){0}))) {
        u32 n; const u16 *s = override_text(w, &n); if (!s) s = ak_gui_text(&texts, w->text_key, &n);
        if (s && n) {
            int big = w->font && strstr(w->font, "_13") != NULL;
            int al = (w->text_flags & 8) ? 2 : (w->text_flags & 4) ? 1 : 0;   /* 0xC8 right, 0xC4 centred, 0xC2 left */
            f32 lh = ak_hud_2d_line(big) * w->text_scale, ty = y + (w->size[1] - lh) * 0.5f;
            ak_hud_2d_text(big, x, ty, x + w->size[0], w->text_scale, argb_of(w->rgba, a), s, n, al);
        }
    }
    if (w->type == AK_GUI_TEXTLIST) {
        list_rows *L = rows_of(w->id);
        if (L && L->n) {
            int big = w->font && strstr(w->font, "_13") != NULL; f32 lh = ak_hud_2d_line(big);
            int shown = w->rows_shown ? (int)w->rows_shown : 8;
            f32 rh = w->size[1] > 0 ? w->size[1] / (f32)shown : lh;
            for (int r = 0; r < shown && L->top + r < L->n; r++) {
                int k = L->top + r; bool on = k == L->sel && (w->id == focus);
                u32 col = on ? argb_of(w->sel_rgba, 1) : argb_of(w->rgba, 1);
                ak_hud_2d_text(big, x + 3, y + r * rh + (rh - lh) * 0.5f, x + w->size[0], 1.0f, col, L->row[k], L->len[k], 0);
            }
        }
    }
    bool f2 = is_button(w->type) ? (w->id == focus) : focused;
    const list_rows *keep = scroll; int keep_shown = scroll_shown; const char *keep_parent = parent_name; u32 keep_tint = child_tint; const char *keep_check = check_var;
    if (w->type == AK_GUI_BUTTON2 && w->binding && w->binding[0]) check_var = w->binding;
    if (w->type >= 2000) parent_name = w->name;
    if (have_match && w->name && !strncmp(w->name, "W_BU_SpawnPoint", 15)) {   /* the post's owner: ours blue, theirs red, nobody's grey (as the HUD's) */
        u32 k = (u32)atoi(w->name + 15); int o = k < match.nposts ? match.post_owner[k] : -1;
        child_tint = o == match.team ? 0xFF4060FFu : (o == 0 || o == 1) ? 0xFFFF4040u : 0xFFC0C0C0u;
    }
    if (w->type == AK_GUI_GROUP && w->name && !strncmp(w->name, "W_GP_", 5) && strstr(w->name, "Scroll")) {   /* "W_GP_PlanetScroll" scrolls "W_LB_PlanetList" [assumed: by name] */
        char want[64]; size_t l = strstr(w->name, "Scroll") - (w->name + 5); snprintf(want, sizeof want, "W_LB_%.*s", (int)l, w->name + 5);
        scroll = NULL;
        for (int i = 0; i < nlists; i++) { const ak_widget *lw = find_id(&page->root, lists[i].id); if (lw && lw->name && !strncmp(lw->name, want, strlen(want))) { scroll = &lists[i]; scroll_shown = lw->rows_shown ? (int)lw->rows_shown : 8; } }
        if (!scroll || scroll->n <= scroll_shown) { scroll = keep; return; }   /* (nothing to scroll: no bar) */
    }
    for (u32 i = 0; i < w->nchild; i++) draw_widget(&w->child[i], x, y, f2);
    scroll = keep; scroll_shown = keep_shown; parent_name = keep_parent; child_tint = keep_tint; check_var = keep_check;
}

void ak_fe_draw(void)
{
    if (!page) return;
    ak_hud_2d_begin();
    draw_widget(&page->root, 0, 0, false);
    ak_hud_2d_end();
}

/* ---- the script functions (FE_*) - the game registers each by name (08A29690: names in UTF-16, e.g. FE_ListAllMaps 08A31C38);
 * their effects here are read from those functions: the selection status, the play list, and the lists they close (08A275D0:
 * a "close" message, kind 5) and open (08A27590: open and focus) */
static void open_widget(u32 id) { if (find_id(&page->root, id)) focus = id; }
static void fill(const ak_widget *w)
{
    list_rows *L = rows_of(w->id);
    if (!L) { if (nlists >= 24) return; L = &lists[nlists++]; memset(L, 0, sizeof *L); L->id = w->id; }
    int keep = L->sel; L->n = 0; fill_target = L;
    const char *fn = w->fill.fn;
    if (!fn || !fn[0]) return;
    if (!strcmp(fn, "FE_ListAllMaps")) {                              /* 08A31C38: every map */
        for (int i = 0; i < NMAPS; i++) row_std(maps[i].text, i);
    } else if (!strcmp(fn, "FE_ListValidModes") && sel_map >= 0) {   /* 08A31A94: the chosen map's modes */
        for (int m = 0; m < 4; m++) if (maps[sel_map].modes[m]) row_std(39 + 2 * (u32)m, m);
    } else if (!strcmp(fn, "FE_ListValidEras") && sel_map >= 0) {    /* 08A319F4: Galactic Civil War, Clone Wars */
        if (maps[sel_map].gcw) row_std(348, 0);
        if (maps[sel_map].cw) row_std(349, 1);
    } else if (!strncmp(fn, "FE_ListFriendly", 15) || !strncmp(fn, "FE_ListEnemy", 12)) {   /* the sides' soldiers and their columns */
        if (!have_match) return;
        bool fr = !strncmp(fn, "FE_ListFriendly", 15); int side = fr ? match.team : 1 - match.team;
        const char *col = fn + (fr ? 15 : 12);
        for (u32 i = 0; i < match.nnames[side] && i < 32; i++) {
            u16 b[16]; u32 n = 0; char t[16] = "";
            if (!strcmp(col, "Entities")) { if (match.name[side][i]) row_add16(match.name[side][i], match.name_len[side][i], (int)i); continue; }
            if (!strcmp(col, "NumKills")) snprintf(t, sizeof t, "%u", match.kills[side][i]);
            else if (!strcmp(col, "Deaths")) snprintf(t, sizeof t, "%u", match.deaths[side][i]);
            else if (!strcmp(col, "Score")) snprintf(t, sizeof t, "%u", match.kills[side][i]);   /* [assumed: a kill a point] */
            else if (!strcmp(col, "Status")) snprintf(t, sizeof t, "%s", match.alive[side][i] ? "" : "-");
            for (const char *c = t; *c && n < 15; c++) b[n++] = (u16)(u8)*c;
            row_add16(b, n, (int)i);
        }
    } else if (0) {
    } else if (!strcmp(fn, "FE_ListMapsInRotation")) {               /* 08A31CA4: "Tatooine - CQST - GCW" */
        for (int i = 0; i < nrot; i++) {
            u16 b[96]; u32 n = 0, k; const u16 *t;
            static const u16 sep[3] = { ' ', '-', ' ' };
            if ((t = ak_hud_stdtext(maps[rot[i].map].text, &k))) { memcpy(b + n, t, k * 2); n += k; }
            memcpy(b + n, sep, 6); n += 3;
            if ((t = ak_hud_stdtext(40 + 2 * (u32)rot[i].mode, &k))) { memcpy(b + n, t, k * 2); n += k; }
            memcpy(b + n, sep, 6); n += 3;
            if ((t = ak_hud_stdtext(rot[i].era ? 351 : 350, &k))) { memcpy(b + n, t, k * 2); n += k; }
            row_add16(b, n, i);
        }
    }
    L->sel = keep < L->n ? (keep < 0 ? 0 : keep) : (L->n ? L->n - 1 : 0);
    if (L->top > L->sel) L->top = L->sel;
}
static void fill_all(const ak_widget *w)
{
    if (w->type == AK_GUI_TEXTLIST) fill(w);
    for (u32 i = 0; i < w->nchild; i++) fill_all(&w->child[i]);
}
static void status(int s) { var_set("BFF.FE_MapSelectionStatus", s); }
static void rotation_changed(void) { var_set("BFF.NumMapsInRotation", nrot); var_set("BFF.FE_IsRotationListFull", nrot >= 16); }
static int run(const ak_gui_action *a, int row)
{
    if (!a->fn || !a->fn[0]) return AK_FE_NONE;
    const char *fn = a->fn;
    AK_INFO("fe", "call %s(%s) row %d", fn, a->arg, row);
    const u32 PLANETS = 0xCEB65B46u, MODES = 0x90F029D1u, ERAS = 0x49AC44E2u;   /* W_LB_PlanetList, W_LB_ModeList, W_LB_EraList */
    if (!strcmp(fn, "FE_SelectMapPlanet")) { if (row >= 0 && row < NMAPS) { sel_map = row; status(1); open_widget(MODES); } }
    else if (!strcmp(fn, "FE_DeselectMapPlanet")) { status(0); open_widget(PLANETS); }
    else if (!strcmp(fn, "FE_SelectMapMode")) { sel_mode = row; status(2); open_widget(ERAS); }
    else if (!strcmp(fn, "FE_DeselectMapMode")) { status(1); open_widget(MODES); }
    else if (!strcmp(fn, "FE_DeselectMap")) { status(0); open_widget(PLANETS); }
    else if (!strcmp(fn, "FE_AddMap")) {
        if (sel_map >= 0 && sel_mode >= 0 && nrot < 16) { rot[nrot].map = sel_map; rot[nrot].mode = sel_mode; rot[nrot].era = row; nrot++; rotation_changed(); }
        status(0); open_widget(PLANETS);
    }
    else if (!strcmp(fn, "FE_RemoveMap")) { if (row >= 0 && row < nrot) { memmove(&rot[row], &rot[row + 1], (size_t)(nrot - row - 1) * sizeof rot[0]); nrot--; rotation_changed(); } }
    else if (!strcmp(fn, "FE_RemoveAllMaps") || !strcmp(fn, "FE_ClearMapRotation")) { nrot = 0; rotation_changed(); status(0); }
    else if (!strcmp(fn, "FE_SelectRandomMaps")) {                    /* (n maps, ground ones, each with a mode and an era it has) [assumed: the pick's rules] */
        int n = atoi(a->arg); static u32 seed = 0x2545F491u; nrot = 0;
        for (int i = 0; i < n && nrot < 16; i++) {
            seed = seed * 1664525u + 1013904223u; int m = (int)((seed >> 8) % 15);
            int era = maps[m].gcw ? 0 : 1; if (maps[m].gcw && maps[m].cw && (seed & 1)) era = 1;
            rot[nrot].map = m; rot[nrot].mode = 0; rot[nrot].era = era; nrot++;
        }
        rotation_changed();
    }
    else if (!strcmp(fn, "FE_RespawnOrTeamSelect")) {}
    else if (!strcmp(fn, "FE_ProcessGameover")) {                       /* Retry: the same map again; Continue: the play list's next, else the main menu */
        const ak_widget *f = focus ? find_id(&page->root, focus) : NULL;
        if (f && f->name && strstr(f->name, "Retry")) { ak_fe_close(); return AK_FE_RESTART; }
        if (nrot > 1) {                                                 /* (the rotation moves on) */
            memmove(&rot[0], &rot[1], (size_t)(nrot - 1) * sizeof rot[0]); nrot--; rotation_changed();
            run(&(ak_gui_action){ "FE_HostGame", "", 16 }, -1); ak_fe_close(); return AK_FE_START;
        }
        ak_fe_close(); return AK_FE_QUIT;
    }
    else if (!strcmp(fn, "FE_EnterGameover")) {}                 /* (the button's page follows: the spawn map) */
    else if (!strcmp(fn, "FE_RequestMenuMode")) var_set("BFF.FE_MenuMode", atoi(a->arg));   /* (which of a dialogue's answers show) */
    else if (!strcmp(fn, "FE_ResumePlay")) { ak_fe_close(); return AK_FE_RESUME; }
    else if (!strcmp(fn, "FE_QuitGame") || !strcmp(fn, "FE_ForfeitBattle")) { ak_fe_close(); return AK_FE_QUIT; }
    else if (!strcmp(fn, "FE_RestartMap")) { ak_fe_close(); return AK_FE_RESTART; }
    else if (!strcmp(fn, "FE_RespawnKillPlayer")) { ak_fe_close(); return AK_FE_KILL; }
    else if (!strcmp(fn, "FE_TeamSelection")) { team_choice = atoi(a->arg); open_hash(ak_gui_hash("MP_Spawn_Location"), true); return AK_FE_TEAM; }
    else if (!strcmp(fn, "FE_RequestRespawn")) {                       /* the focused spawn point (W_BU_SpawnPoint<k>) */
        const ak_widget *f = focus ? find_id(&page->root, focus) : NULL; spawn_choice = -1;
        if (f && f->name && !strncmp(f->name, "W_BU_SpawnPoint", 15)) spawn_choice = atoi(f->name + 15);
        return spawn_choice >= 0 ? AK_FE_SPAWN : AK_FE_NONE;
    }
    else if (!strcmp(fn, "FE_HostGame")) {
        if (!nrot) return AK_FE_NONE;
        const map_entry *e = &maps[rot[0].map]; const char *lv = rot[0].era ? e->cw : e->gcw;
        snprintf(launch_level, sizeof launch_level, "%s ", rot[0].era ? "PREQUEL" : "CLASSIC");
        for (size_t i = 0, o = strlen(launch_level); lv && lv[i] && o + 1 < sizeof launch_level; i++, o++) { char c = lv[i]; launch_level[o] = (char)(c >= 'a' && c <= 'z' ? c - 32 : c); launch_level[o + 1] = 0; }
        launch_mode = rot[0].mode;
        return AK_FE_START;
    }
    if (page) fill_all(&page->root);
    return AK_FE_NONE;
}
const char *ak_fe_launch(int *mode) { if (mode) *mode = launch_mode; return launch_level; }
static int activate(const ak_widget *b)
{
    int r = AK_FE_NONE;
    for (u32 i = 0; i < b->nactions; i++) if (b->actions[i].key == 16 || !b->actions[i].key) { int k = run(&b->actions[i], -1); if (k) r = k; if (!page) return r; }
    if (r) return r;
    if (b->target) open_hash(b->target, true);
    return AK_FE_NONE;
}

static const ak_widget *first_control(const ak_widget *w)
{
    if (w->type != AK_GUI_PAGE && !cond_holds(w)) return NULL;
    if (w->type == AK_GUI_BUTTON && (w->nactions || w->target)) return w;
    for (u32 i = 0; i < w->nchild; i++) { const ak_widget *r = first_control(&w->child[i]); if (r) return r; }
    return NULL;
}
static const ak_widget *find_visible(const ak_widget *w, u32 id)
{
    if (w->type != AK_GUI_PAGE && !cond_holds(w)) return NULL;
    if (w->id == id) return w;
    for (u32 i = 0; i < w->nchild; i++) { const ak_widget *r = find_visible(&w->child[i], id); if (r) return r; }
    return NULL;
}
int ak_fe_update(const ak_input *in, f32 dt)
{
    if (!page) return AK_FE_NONE;
    clock += dt;
    if (focus_fix_pending) {                                           /* the page's focus hidden or a title: its first shown control */
        focus_fix_pending = false;
        const ak_widget *f0 = focus ? find_visible(&page->root, focus) : NULL;
        if (!f0 || (f0->type == AK_GUI_BUTTON && !f0->nactions && !f0->target)) { const ak_widget *c = first_control(&page->root); if (c) focus = c->id; }
    }
    var_set("GUIMenu.ActiveWidget", (s32)focus);
    const ak_widget *f = focus ? find_id(&page->root, focus) : NULL;
    if (f && f->type == AK_GUI_TEXTLIST) {                            /* a text list: up / down through its rows, its keys */
        list_rows *L = rows_of(f->id); int shown = f->rows_shown ? (int)f->rows_shown : 8;
        if (L && (in->pressed & AK_BTN_UP) && L->sel > 0) { L->sel--; if (L->sel < L->top) L->top = L->sel; return AK_FE_NONE; }
        if (L && (in->pressed & AK_BTN_DOWN) && L->sel + 1 < L->n) { L->sel++; if (L->sel >= L->top + shown) L->top = L->sel - shown + 1; return AK_FE_NONE; }
        static const u32 keys[3][2] = { { AK_BTN_CROSS, 16 }, { AK_BTN_SQUARE, 32 }, { AK_BTN_CIRCLE, 64 } };
        for (int k = 0; k < 3; k++) if (in->pressed & keys[k][0])
            for (u32 i = 0; i < f->nactions; i++) if (f->actions[i].key == keys[k][1]) {
                int row = L && L->n ? L->val[L->sel] : -1;
                if (keys[k][1] == 16 && (!L || !L->n)) return AK_FE_NONE;
                return run(&f->actions[i], row);
            }
    }
    if (have_match && focused_spawn() >= 0) {                          /* the spawn map: the nearest active post that way [assumed] */
        static const f32 dv[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } }; static const u32 bt[4] = { AK_BTN_LEFT, AK_BTN_RIGHT, AK_BTN_UP, AK_BTN_DOWN };
        int cur = focused_spawn(); f32 cx, cy;
        if (ak_hud_2d_map_point(match.post_pos[cur], 0, 0, 200, &cx, &cy))
            for (int d = 0; d < 4; d++) if (in->pressed & bt[d]) {
                int best = -1; f32 bd = 1e9f;
                for (u32 k = 0; k < match.nposts; k++) {
                    f32 kx, ky; if ((int)k == cur || match.post_owner[k] != match.team || !ak_hud_2d_map_point(match.post_pos[k], 0, 0, 200, &kx, &ky)) continue;
                    f32 ax = kx - cx, ay = ky - cy, along = ax * dv[d][0] + ay * dv[d][1]; if (along <= 0) continue;
                    f32 sc = along + 2.0f * fabsf(ax * dv[d][1] - ay * dv[d][0]); if (sc < bd) { bd = sc; best = (int)k; }
                }
                if (best >= 0) { char nm[32]; snprintf(nm, sizeof nm, "W_BU_SpawnPoint%d", best); if (id_of(nm)) focus = id_of(nm); }
                return AK_FE_NONE;
            }
    }
    if (f && f->type == AK_GUI_SPINNER && f->binding && f->binding[0] && (in->pressed & (AK_BTN_LEFT | AK_BTN_RIGHT))) {   /* a slider: its value by its step, 0..1 [assumed range] */
        f32 st = f->step > 0 ? f->step : 0.1f, v = var_get(f->binding) + ((in->pressed & AK_BTN_RIGHT) ? st : -st);
        var_set(f->binding, v < 0 ? 0 : v > 1 ? 1 : v);
        ak_audio_set_volumes(var_get("BFF.VolumeMaster"), var_get("BFF.VolumeMusic"), var_get("BFF.VolumeSFX"));   /* (applied at once) */
        return AK_FE_NONE;
    }
    if (f && f->type == AK_GUI_BUTTON2 && f->binding && f->binding[0] && (in->pressed & AK_BTN_CROSS)) {   /* a check box */
        var_set(f->binding, var_get(f->binding) != 0 ? 0 : 1);
        if (!strcmp(f->binding, "BFF.Subtitles")) ak_setting_set("AK_SUBTITLES", var_get(f->binding) != 0 ? "1" : "0");   /* (the narrator's subtitles) */
        return AK_FE_NONE;
    }
    static const u32 dirs[4] = { AK_BTN_LEFT, AK_BTN_RIGHT, AK_BTN_UP, AK_BTN_DOWN };
    for (int k = 0; k < 4; k++)                                        /* the neighbour links: left, right, up, down */
        if ((in->pressed & dirs[k]) && f && f->links[k]) {          /* (a hidden neighbour: on along its own link the same way) */
            u32 to = f->links[k];
            for (int hop = 0; hop < 8 && to; hop++) {
                if (find_visible(&page->root, to)) { focus = to; clock = 0; return AK_FE_NONE; }
                const ak_widget *n = find_id(&page->root, to); to = n ? n->links[k] : 0;
            }
        }
    if ((in->pressed & AK_BTN_CROSS) && getenv("AK_FE_TRACE")) AK_INFO("fe", "cross on %s (%u actions)", f && f->name ? f->name : "-", f ? f->nactions : 0);
    if ((in->pressed & AK_BTN_CROSS) && f && is_button(f->type) && f->type != AK_GUI_TEXTLIST) return activate(f);
    if (in->pressed & AK_BTN_CIRCLE) {                                 /* back: the page's back button, else the page before */
        const ak_widget *b = find_named(&page->root, "W_BU_Back");
        if (b && b->target) { open_hash(b->target, false); return AK_FE_NONE; }
        if (nstack) { open_hash(stack[--nstack], false); return AK_FE_NONE; }
    }
    return AK_FE_NONE;
}
