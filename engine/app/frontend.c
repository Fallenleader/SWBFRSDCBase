/* Aurek - the front end (see frontend.h). */
#include "frontend.h"
#include "hud.h"
#include "../assets/gui.h"
#include "../render/ak_gfx.h"
#include "../core/ak_settings.h"
#include "../audio/ak_audio.h"
#include "../assets/blueprint.h"
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
static bool gc_on;                     /* (Galactic Conquest's tech page: below) */
static const ak_gui_page *page; static u32 focus, active_widget; static f32 clock;   /* (active_widget: the page in use's focus - GUIMenu.ActiveWidget) */
static u32 stack[16]; static int nstack; static bool focus_fix_pending;
/* pages open together, drawn in order, one of them in use (`page`): the customisation's MP_CustomBackground, MP_Customisation, its
 * MP_CustomCarousel and the dialogues over them (the game's 0888ADB0 opens a page with or without the focus) */
#define MAXLAYERS 6
static const ak_gui_page *layer[MAXLAYERS]; static u32 layer_focus[MAXLAYERS]; static int layer_prev[MAXLAYERS], nlayer, active_layer;
static int cust_event(const ak_input *in);
static void refill(void);
static int layer_of(const char *name);
static void use_layer(int k);
static void cust_carousel_sync(void);
static bool open_hash(u32 h, bool push);

/* ---- script values ("BFF.FE_MapSelectionStatus", "GUIMenu.ActiveWidget", ...), as the pages' conditions read them */
#define MAXVARS 128
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
    /* every post on the map is shown (08A2DD50: Active<k> = the post exists and is on the map, +4 / +68), coloured by its owner;
       only the side's own go into the list the focus moves through */
    for (u32 i = 0; i < AK_FE_MAX_POSTS; i++) { char k[40]; snprintf(k, sizeof k, "BFF.FE_SpawnPointActive%u", i); var_set(k, i < m->nposts); }
    refill();                                                          /* (the team lists follow the match) */
}
int ak_fe_team(void) { return team_choice; }
int ak_fe_spawn_post(void) { return spawn_choice; }
void ak_fe_close(void) { page = NULL; nstack = 0; nlayer = 0; gc_on = false; }

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

static int spawn_owner = -1;             /* drawing a spawn point: 0 ours, 1 theirs, 2 nobody's (-1 none) */
/* a spawn point's two pictures (E_IM_SpawnPointD<k> shown unfocused, ..H<k> focused) take the owner's colours, the game's constants
 * 0x08AEFB28.. (0.3, 1.0, 0.6, 0.2, 0.1): ours (0.3, 0.3, 1, 0.6) / (0.2, 0.2, 1, 1), theirs (1, 0.3, 0.3, 0.6) / (1, 0.2, 0.2, 1),
 * nobody's (0.1, 0.1, 0.1, 0.6) / (0.1, 0.1, 0.1, 1) [assumed: the first set is the D picture's, the second the H's; the vfunc
 * +120 that takes them is not read] */
static const f32 spawn_rgba[3][2][4] = { { { 0.3f, 0.3f, 1, 0.6f }, { 0.2f, 0.2f, 1, 1 } }, { { 1, 0.3f, 0.3f, 0.6f }, { 1, 0.2f, 0.2f, 1 } },
                                         { { 0.1f, 0.1f, 0.1f, 0.6f }, { 0.1f, 0.1f, 0.1f, 1 } } };
static u32 child_tint = 0xFFFFFFFFu;   /* the colour the widgets drawn now are multiplied by (a spawn point's owner) */
static void path_of(int f, char *out, size_t n) { snprintf(out, n, "PSP_GAME/USRDIR/GUIMENU/%s.GUI", files[f]); }

bool ak_fe_init(ak_vfs *v)
{
    if (ready) return true;                                            /* (once: the GC map and the menus share it) */
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
        {   const char *dn = getenv("AK_FE_DUMP_TEX");                  /* (tools: AK_FE_DUMP_TEX=part of a name -> /tmp/fe_<i>.ppm) */
            const ak_texture *t = &gf.tex[i];
            if (dn && t->name && strstr(t->name, dn) && t->pixels[0]) {
                char fn[64]; snprintf(fn, sizeof fn, "/tmp/fe_%u.ppm", i); FILE *o = fopen(fn, "wb");
                if (o) { fprintf(o, "P6 %u %u 255\n", t->width, t->height);
                    for (u32 y = 0; y < t->height; y++) for (u32 x = 0; x < t->width; x++) {
                        u32 k = y * t->width + x, ix = t->bpp == 8 ? t->pixels[0][k] : (t->pixels[0][k >> 1] >> ((k & 1) * 4)) & 15, c = t->palette[ix];
                        u8 a = (u8)(c >> 24), px[3] = { (u8)((c & 255) * a / 255), (u8)((c >> 8 & 255) * a / 255), (u8)((c >> 16 & 255) * a / 255) }; fwrite(px, 1, 3, o); }
                    fclose(o); AK_INFO("fe", "dumped %s -> %s", t->name, fn); } } }
    }
    cur_file = f;
    AK_INFO("fe", "%s: %u pages, %u pictures, %.1f MB", files[f], gf.npages, gf.ntex, mem.used / 1048576.0);
    return true;
}

static void refill(void)                                               /* every shown page's lists again (their rows' memory reused) */
{
    ak_arena_reset(&rowmem);
    if (nlayer) { for (int k = 0; k < nlayer; k++) fill_all(&layer[k]->root); }
    else if (page) fill_all(&page->root);
}
static bool focus_new = true;           /* (open_layer: the new page takes the focus, else it opens behind it) */
static bool layering;                  /* (open_hash: the new page goes over the one in use, which stays drawn) */
static bool open_hash(u32 h, bool push)
{
    for (u32 i = 0; i < nidx; i++) {
        if (idx[i].hash != h) continue;
        if (!load_file(idx[i].file)) return false;
        const ak_gui_page *pg = ak_gui_find_page(&gf, h); if (!pg) return false;
        if (push && page && nstack < 16) stack[nstack++] = page->root.id;
        if (!layering) nlayer = 0;
        page = pg; focus = pg->focus; clock = 0;
        focus_fix_pending = true;
        if (have_match && h == ak_gui_hash("MP_Spawn_Location"))     /* the first post the player's side holds */
            for (u32 k = 0; k < match.nposts; k++) if (match.post_owner[k] == match.team) { char nm[32]; snprintf(nm, sizeof nm, "W_BU_SpawnPoint%u", k); if (id_of(nm)) focus = id_of(nm); break; }
        if (!layering) nlists = 0;
        refill();
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
bool ak_fe_open_gc(const char *name, const ak_fe_gc *g)
{
    if (!ak_fe_open(name)) return false;
    ak_fe_set_gc(g); var_set("Menus.GCDisplayingEnemyTech", 0);
    u32 f0 = id_of("W_BT_EquipmentLevel1"); if (f0) focus = f0;          /* [assumed: the first row first, as the original's frame] */
    return true;
}
void ak_fe_gc_enemy(bool on) { var_set("Menus.GCDisplayingEnemyTech", on ? 1 : 0); }

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
static const ak_widget *find_named_in(const ak_gui_page *pg, const char *name) { return pg ? find_name(&pg->root, name) : NULL; }
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
    if (w->type < 2000 && w->flags && !(w->flags & 0x400)              /* (pictures and texts: bit 10 shown) [assumed] - */
        && !(spawn_owner >= 0 && w->name && !strncmp(w->name, "E_IM_SpawnPointD", 16))) return false;   /* (but the spawn map's unfocused posts show) */
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
        if (!strcmp(c->var, "GUIMenu.ActiveWidget")) { s32 ia = (s32)active_widget, ib = (s32)strtol(c->val, NULL, 0); a = (f32)(ia > ib) - (f32)(ia < ib); b = 0; }   /* (ids: exact) */
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
/* ---- Galactic Conquest's tech page (5.4): the widgets the game fills at run time (08A3B738 registers GC_Purchase*; the page's
 * filling code not traced - what each widget shows is read off the original's screen, harness 2026-11-21 [assumed]):
 * each W_BT_<Equipment|Infantry|Space>Level<n> row: E_IM_Active (the green row) and E_TX_Cost "ACQUIRED" when held, else the
 * price (E_TX_Datari credit sign + E_TX_Cost); the kind's lock (E_IM_<kind>Lock) on a level beyond the next; each
 * W_BT_Commander<n>: E_TX_Name, the price or ACQUIRED, E_IM_Lock while not available; E_TX_Info_Variable: the focused item's line. */
static ak_fe_gc gc; static int gc_kind = -1, gc_index = -1;
void ak_fe_set_gc(const ak_fe_gc *g) { gc = *g; gc_on = true; }
int ak_fe_gc_choice(int *index) { *index = gc_index; return gc_kind; }
static int gc_new_req = 1; int ak_fe_gc_new(void) { return gc_new_req; }
static int gc_quit_req; int ak_fe_gc_quit(void) { return gc_quit_req; }
void ak_fe_var(const char *name, f32 v) { var_set(name, v); }
static int gc_row(const char *pn, int *lvl)                          /* the tech row a widget is in: kind, level; -1 none */
{
    static const char *const k[3] = { "W_BT_EquipmentLevel", "W_BT_InfantryLevel", "W_BT_SpaceLevel" };
    if (!pn) return -1;
    for (int i = 0; i < 3; i++) { size_t l = strlen(k[i]); if (!strncmp(pn, k[i], l)) { *lvl = atoi(pn + l) - 1; return *lvl >= 0 && *lvl < 3 ? i : -1; } }
    return -1;
}
static int gc_cmdr(const char *pn) { return pn && !strncmp(pn, "W_BT_Commander", 14) ? atoi(pn + 14) - 1 : -1; }
static u16 gc_num[16];
static const u16 *gc_number(u32 v, u32 *n) { char b[12]; int k = snprintf(b, sizeof b, "%u", v); gc_num[0] = 0xBC; for (int i = 0; i < k; i++) gc_num[i + 1] = (u16)b[i]; *n = (u32)k + 1; return gc_num; }   /* the credit sign (08AE58C8) and the price */
/* -1 hide, 1 show, 0 as the page has it */
static int gc_shows(const ak_widget *w)
{
    if (!gc_on || !w->name) return 0;
    int lvl, kind = gc_row(parent_name, &lvl), c = gc_cmdr(parent_name);
    if (!strncmp(w->name, "E_IM_Hilite", 11) && (kind >= 0 || c >= 0)) {   /* the brackets: on the focused item only (the original's frames) */
        const ak_widget *f = page && focus ? find_id(&page->root, focus) : NULL;
        return f && f->name && parent_name && !strcmp(f->name, parent_name) ? 1 : -1;
    }
    if (kind >= 0) {
        bool have = lvl <= gc.tech[kind];
        if (!strcmp(w->name, "E_IM_Active")) return have ? 1 : -1;
        if (!strcmp(w->name, "E_TX_Datari")) return -1;            /* [assumed: the sign drawn with the price instead, as the screen shows it] */
        if (!strcmp(w->name, "E_TX_Cost")) return 1;
        if (strstr(w->name, "Lock")) return lvl > gc.tech[kind] + 1 ? 1 : -1;
    }
    if (c >= 0 && c < 4) {
        if (!strcmp(w->name, "E_IM_Lock")) return gc.cmdr_avail[c] && !gc.cmdr_bought[c] ? -1 : gc.cmdr_bought[c] ? -1 : 1;
        if (!strcmp(w->name, "E_TX_Datari")) return -1;
    }
    return 0;
}
static const u16 *gc_text(const ak_widget *w, u32 *n)
{
    if (!gc_on || !w->name) return NULL;
    int lvl, kind = gc_row(parent_name, &lvl), c = gc_cmdr(parent_name);
    if (kind >= 0) {
        if (!strcmp(w->name, "E_TX_Cost")) { if (lvl <= gc.tech[kind]) { *n = gc.acquired_len; return gc.acquired; } return gc_number(gc.tech_price[kind][lvl], n); }
    }
    if (c >= 0 && c < 4) {
        if (!strcmp(w->name, "E_TX_Name")) { *n = gc.cmdr_name_len[c]; return gc.cmdr_name[c]; }
        if (!strcmp(w->name, "E_TX_State")) { if (gc.cmdr_bought[c]) { *n = gc.acquired_len; return gc.acquired; } return gc_number(gc.cmdr_price[c], n); }
    }
    if (!strcmp(w->name, "E_TX_Info_Variable")) {
        const ak_widget *f = page && focus ? find_id(&page->root, focus) : NULL; int fl, fk = f ? gc_row(f->name, &fl) : -1, fc = f ? gc_cmdr(f->name) : -1;
        int i = fk >= 0 ? fk * 3 + fl : fc >= 0 && fc < 4 ? 9 + fc : -1;
        if (i >= 0 && gc.info[i]) { *n = gc.info_len[i]; return gc.info[i]; }
    }
    return NULL;
}
static const u16 *override_text(const ak_widget *w, u32 *n)
{
    { const u16 *t = gc_text(w, n); if (t) return t; }
    if (!have_match || !w->name) return NULL;
    if (parent_name && !strcmp(parent_name, "W_TB_SpawnName")) {          /* the focused post's name */
        int k = focused_spawn(); if (k >= 0 && (u32)k < match.nposts && match.post_name[k] >= 0) return ak_hud_post_name(match.post_name[k], n);
    }
    if (!strcmp(w->name, "E_TX_LevelName")) return ak_hud_stdtext(match.level_text, n);
    if (!strcmp(w->name, "E_TX_LevelType")) return ak_hud_stdtext(40 + 2 * (u32)(match.mode & 3), n);
    return NULL;
}
/* ---- the customisation menu (PARITY 8.2 / 2.1): BFF_CUSTOMISATION.GUI's MP_Customisation over MP_CustomBackground, the item
 * carousel MP_CustomCarousel over both.  Read from the FE_Customisation_* functions (08A276F0 ..):
 *  - eight categories (names: menu texts at 0x08ADFBF4, descriptions at 0x08ADFC14), each a list of items: Weapon 1 (10),
 *    Weapon 2 (8), Explosive (6), Special Item (8), Power Up (6) - Weapon blueprints by h31 hash (tables 0x08ADC5E8 ..; 0 = none),
 *    taken in the player's faction's version (08A23598) - then Health, Speed and Capture Rate (None and levels 1-3, texts at
 *    0x08ADFCE4 / 0x08ADFD04 / 0x08ADFCF4).
 *  - an item's cost: the weapon's Cost (08A3454C); the levels' from 0x08AE30BC (Health and Speed 0 / 10 / 20 / 30, Capture Rate
 *    0 / 15 / 25 / 35); a category's total is its item's cost (08A342E8, "%d"); the credits line "CREDITS: <spent>/<max>"
 *    (08A27994, "%ls %d/%d") and BFF.FE_Customisation_Credits = what is left (< 0: the over-spent line and the OVERSPENT page).
 *  - cross on a category opens the carousel (08A27EC4); cross on an item takes it (08A27F28, no credit check), square clears the
 *    category (08A27FD8: the item 0); triangle asks CONFIRM CANCEL (08A27E74 -> MP_CustomCancel), whose cross puts the loadout
 *    back as it was (08A27DE0); circle leaves the menu.
 *  The credits are 200 and the default loadout Blaster Rifle, Blaster Pistol, the faction's grenade, Health and Speed Level 1
 *  (the original's spawn screen, 1.15).  [assumed: the level and power-up rows' carousel pictures are the background page's
 *  own attribute pictures; the 3D item and soldier models (1004 widgets) are not drawn yet] */
#define NCAT 8
static const char *const cust_bp[5][10] = {
    { NULL, "BlasterRifle", "ArcCaster", "Carbonite_Gun", "ALL_Incinerator", "Shotgun", "Sniper Rifle", "REP_Chaingun", "ALL_Bow_Caster", "Rocket_Launcher" },
    { "BlasterPistol", "Fusion Cutter", "ALL_Tri_Shot", "Emp_Launcher", "Particle_Pistol", "Grenade_Launcher_OnTime", "Guided_Missile", "Orbital Strike Gun" },
    { NULL, "REP_Grenade", "Det_Pack", "Proximity_Mines", "Cluster_Grenades", "Wrist_Rocket" },
    { NULL, "ALL_HealthAmmo_Dispenser", "auto_turret_droid", "Recon_Droid", "Stealth_Suit", "Jetpack", "Jumppack", "Personal_Shield" },
    { NULL, "Rally", "Rage", "Stamina", "Regenerate", "VehicleAutoRepair" } };
static const int cust_count[NCAT] = { 10, 8, 6, 8, 6, 4, 4, 4 };
static const u32 cust_name_key[NCAT] = { 0x6853C9B5u, 0x59E84303u, 0xEE4A6FA9u, 0x13A07C95u, 0x10EDCBD1u, 0x0649FD18u, 0xDFCBBE0Bu, 0x54844D09u };
static const u32 cust_desc_key[NCAT] = { 0xB208FD2Bu, 0x0B1E70F9u, 0xCA746A73u, 0xCCD8158Bu, 0x49944FC7u, 0x838D068Eu, 0x25E6ADD5u, 0x7FA27253u };
static const u32 cust_level_key[3][4] = { { 0xA40C5954u, 0xA354D5E1u, 0xA354D5E2u, 0xA354D5E3u }, { 0xA40C5954u, 0x6C2B49F0u, 0x6C2B49F1u, 0x6C2B49F2u },
                                          { 0xA40C5954u, 0xB671376Eu, 0xB671376Fu, 0xB6713770u } };
static const int cust_level_cost[3][4] = { { 0, 10, 20, 30 }, { 0, 10, 20, 30 }, { 0, 15, 25, 35 } };
#define CUST_CREDITS 200
static int cust_sel[NCAT] = { 1, 0, 1, 0, 0, 1, 1, 0 }, cust_saved[NCAT], cust_cat; static u32 cust_return;
static void cust_open(void);
static const ak_blueprints *fe_bp; static ak_fe_model_fn model_fn; static f32 clock_total;
void ak_fe_set_model_drawer(ak_fe_model_fn fn) { model_fn = fn; }
void ak_fe_set_blueprints(const void *bp) { fe_bp = (const ak_blueprints *)bp; }
static const ak_bp_object *cust_item(int cat, int i)          /* the faction's version of a Weapon (08A23598) */
{
    if (cat < 0 || cat > 4 || i < 0 || i >= cust_count[cat] || !cust_bp[cat][i] || !fe_bp) return NULL;
    const ak_bp_object *w = ak_bp_find(fe_bp, "Weapon", cust_bp[cat][i]); if (!w) return NULL;
    int fac = have_match ? match.faction[match.team & 1] : 2;
    if (ak_bp_int(w, "Faction Specific", 0)) {
        const ak_bp_type *t = ak_bp_find_type(fe_bp, "Weapon");
        for (u32 k = 0; t && k < t->nobjects; k++) if (t->objects[k].parent == w && ak_bp_int(&t->objects[k], "Faction", -1) == fac) return &t->objects[k];
    }
    return w;
}
static int cust_cost(int cat, int i)
{
    if (cat >= 5) return i >= 0 && i < 4 ? cust_level_cost[cat - 5][i] : 0;
    const ak_bp_object *o = cust_item(cat, i); return o ? ak_bp_int(o, "Cost", 0) : 0;
}
static int cust_spent(void) { int t = 0; for (int c = 0; c < NCAT; c++) t += cust_cost(c, cust_sel[c]); return t; }
static const u16 *cust_name(int cat, int i, u32 *n)
{
    if (cat >= 5) return i >= 0 && i < 4 ? ak_gui_text(&texts, cust_level_key[cat - 5][i], n) : NULL;
    const ak_bp_object *o = cust_item(cat, i);
    if (!o) return ak_gui_text(&texts, 0xA40C5954u, n);                /* "None" */
    s32 id = ak_bp_int(o, "Weapon_Name", -1); return id >= 0 ? ak_hud_stdtext((u32)id, n) : NULL;
}
static void cust_vars(void)                                            /* the script values the pages show by */
{
    var_set("BFF.FE_Customisation_Credits", (f32)(CUST_CREDITS - cust_spent()));
    var_set("BFF.FE_Customisation_EnableSellButton", cust_sel[cust_cat] > 0 && cust_cost(cust_cat, cust_sel[cust_cat]) > 0);
    var_set("BFF.FE_Customisation_PowerUp", (f32)cust_sel[4]); var_set("BFF.FE_Customisation_Health", (f32)cust_sel[5]);
    var_set("BFF.FE_Customisation_Speed", (f32)cust_sel[6]); var_set("BFF.FE_Customisation_Agility", (f32)cust_sel[7]);
    var_set("BFF.FE_Customisation_Insignia", (f32)ak_setting_int("AK_PLAYER_INSIGNIA", 0));
}
static bool in_cust(void) { return page && page->root.name && (!strncmp(page->root.name, "MP_Custom", 9)); }
int ak_fe_loadout(int sel[8], const char *names[5])
{
    for (int c = 0; c < NCAT; c++) sel[c] = cust_sel[c];
    for (int c = 0; c < 5; c++) names[c] = cust_bp[c][cust_sel[c]];
    return cust_spent();
}
/* a list box's rows: the customisation's categories or the chosen category's items */
static int lb_count(const ak_widget *w)
{
    if (!w->name) return 0;
    const ak_widget *t = w->nchild ? &w->child[w->nchild - 1] : NULL;
    for (u32 i = 0; t && i < t->nchild; i++) {
        const char *fn = t->child[i].fill.fn; if (!fn) continue;
        if (!strncmp(fn, "FE_Customisation_ListCategory", 29)) return NCAT;
        if (!strncmp(fn, "FE_Customisation_ListCarousel", 29)) return cust_count[cust_cat];
    }
    return 0;
}
/* the carousel's rows: the category's items, the chosen one picked, about it in view (3 shown) */
static void cust_carousel_sync(void)
{
    int k = layer_of("MP_CustomCarousel"); if (k < 0) return;
    const ak_widget *cw = find_name(&layer[k]->root, "W_LB_Carousel"); if (!cw) return;
    list_rows *C = rows_of(cw->id);
    if (!C && nlists < 24) { C = &lists[nlists++]; memset(C, 0, sizeof *C); C->id = cw->id; }
    if (!C) return;
    C->n = cust_count[cust_cat]; C->sel = cust_sel[cust_cat]; C->top = C->sel > 1 ? C->sel - 1 : 0; if (C->top + 3 > C->n) C->top = C->n > 3 ? C->n - 3 : 0;
}
/* a row part's column: its text (true) */
static bool lb_text(const char *fn, int row, u16 *buf, u32 *n, const u16 **out)
{
    char t[24] = ""; *out = NULL;
    if (!strcmp(fn, "FE_Customisation_ListCategoryNames")) { *out = ak_gui_text(&texts, cust_name_key[row & 7], n); return true; }
    if (!strcmp(fn, "FE_Customisation_ListCategoryTotals")) snprintf(t, sizeof t, "%d", cust_cost(row & 7, cust_sel[row & 7]));
    else if (!strcmp(fn, "FE_Customisation_ListCarouselCosts")) snprintf(t, sizeof t, "%d", cust_cost(cust_cat, row));
    else if (!strcmp(fn, "FE_Customisation_ListCarouselNames")) { *out = cust_name(cust_cat, row, n); return true; }
    else return false;
    u32 k = 0; for (const char *c = t; *c && k < 23; c++) buf[k++] = (u16)(u8)*c; *n = k; *out = buf; return true;
}
/* a row part's picture: true with its cell (empty = none) */
static const ak_widget *find_named_in(const ak_gui_page *pg, const char *name);
static bool lb_picture(const char *fn, int row, f32 *uv)
{
    if (!strcmp(fn, "FE_Customisation_ListCategoryIcons")) {          /* attributes_01.tga: the category's cell, 0.1015625 a row down from 0.125 */
        f32 v0 = 0.125f + (f32)(row & 7) * 0.1015625f; uv[0] = 0; uv[1] = v0; uv[2] = 0.12109375f; uv[3] = v0 + 0.1015625f; return true;
    }
    if (!strcmp(fn, "FE_Customisation_ListCarouselIcons")) {
        static const char *const lvl[3] = { "E_IM_Health%d", "E_IM_Speed%d", "E_IM_Agility%d" }, *pu[6] = { NULL, "E_IM_Rally", "E_IM_Rage", "E_IM_Stamina", "E_IM_Regenerate", "E_IM_AutoRepair" };
        char nm[32] = ""; memset(uv, 0, 16);
        if (cust_cat >= 5 && row > 0) snprintf(nm, sizeof nm, lvl[cust_cat - 5], row);
        else if (cust_cat == 4 && row > 0 && row < 6) snprintf(nm, sizeof nm, "%s", pu[row]);
        for (int k = 0; nm[0] && k < nlayer; k++) { const ak_widget *b = find_named_in(layer[k], nm); if (b) { memcpy(uv, b->uv, 16); break; } }
        return true;
    }
    if (!strcmp(fn, "FE_Customisation_ListCarouselAnims")) { memset(uv, 0, 16); return true; }   /* (the 3D items: not drawn yet) */
    return false;
}
static int lb_row = -1; static bool lb_selected;                     /* drawing a list box's row: which, and is it the chosen one */
/* the sides' pictures on the team and score board pages (MP_Team_Selection, MP_ScoreBoard, MP_RespawnScoreboard,
 * MP_GameOverScoreboard), set by the game at run time:
 *  - E_IM_StyleButtonH_Logo_CIS / ..._CIS 1: the player's faction's logo and its opponent's (08A2A844: menu_buttons.tga cells
 *    from the table 0x08AE1B1C by faction, 0 Republic .. 3 Empire; the opponent by 08A26F88: 0 <-> 1, 2 <-> 3);
 *  - E_IM_GoodInsignia<k> / E_IM_EvilInsignia<k>: row k of the friendly / enemy list (08A32698): an AI soldier (entity +72 bit 1)
 *    the terminal cell (0.586, 0.941 - 0.645, 0.996); a person the insignia chosen in the customisation (+68, cells 0x08AE28DC,
 *    12 = none) [assumed: the player's is cell 0 until the customisation menu is ported]; no row, no picture.
 * Returns true with the cell in uv (an empty cell hides the picture). */
static const f32 faction_logo[5][4] = { { 0.914f, 0.352f, 0.992f, 0.43f }, { 0.84f, 0.352f, 0.918f, 0.43f }, { 0.715f, 0.914f, 0.793f, 0.992f },
                                        { 0.762f, 0.352f, 0.84f, 0.43f }, { 0, 0, 0, 0 } };
static const f32 insignia_cell[13][4] = {
    { 0.527f, 0.941f, 0.586f, 0.996f }, { 0.41f, 0.941f, 0.469f, 0.996f }, { 0.469f, 0.941f, 0.527f, 0.996f }, { 0.352f, 0.941f, 0.41f, 0.996f },
    { 0.234f, 0.941f, 0.293f, 0.996f }, { 0.293f, 0.941f, 0.352f, 0.996f }, { 0.059f, 0.941f, 0.117f, 0.996f }, { 0.176f, 0.941f, 0.234f, 0.996f },
    { 0, 0.941f, 0.059f, 0.996f }, { 0.117f, 0.941f, 0.176f, 0.996f }, { 0.586f, 0.941f, 0.645f, 0.996f }, { 0.703f, 0.18f, 0.754f, 0.23f }, { 0, 0, 0, 0 } };
static bool picture_override(const ak_widget *w, f32 *uv)
{
    if (!strncmp(w->name, "E_IM_StyleButtonH_Logo_CIS", 26)) {
        int f = match.faction[match.team & 1], o = f == 1 ? 0 : f == 0 ? 1 : f == 2 ? 3 : f == 3 ? 2 : 4;
        int k = w->name[26] ? o : (f >= 0 && f < 4 ? f : 4); memcpy(uv, faction_logo[k], 16); return true;
    }
    bool good = !strncmp(w->name, "E_IM_GoodInsignia", 17), evil = !strncmp(w->name, "E_IM_EvilInsignia", 17);
    if (!good && !evil) return false;
    u32 k = (u32)atoi(w->name + 17); int side = good ? match.team : 1 - match.team;
    if (side < 0 || side > 1 || k >= match.nnames[side]) { memset(uv, 0, 16); return true; }
    int cell = match.bot[side][k] ? 10 : ak_setting_int("AK_PLAYER_INSIGNIA", 0);
    if (cell < 0 || cell > 12) cell = 12;
    memcpy(uv, insignia_cell[cell], 16); return true;
}
static void draw_widget(const ak_widget *w, f32 ox, f32 oy, bool focused)
{
    f32 x = ox + w->pos[0], y = oy + w->pos[1];
    if (spawn_point_pos(w, &x, &y)) { ox = 0; oy = 0; }
    if (have_match && w->name && !strcmp(w->name, "E_IM_SpawnLocal")) { ak_hud_2d_map(x, y, 200, 0xFFFFFFFFu); return; }
    if (have_match && w->name && !strcmp(w->name, "E_TX_StyleMenuTitle") && cur_file == 8) return;   /* (the campaign's title: none in a plain match) */
    if (w->is_template && lb_row < 0) return;                          /* (a list box's row: drawn by the list, once per row) */
    if (getenv("AK_FE_TRACE") && w->name && strstr(w->name, getenv("AK_FE_TRACE"))) AK_INFO("fe", "draw %s shows %d cond %d at %.0f,%.0f", w->name, shows(w, focused), cond_holds(w), x, y);
    if (getenv("AK_FE_TRACE2") && w->name) { static int nd; if (nd++ < 400) { fprintf(stderr, "[W] %s bind=%s text=%u/%u", w->name, w->binding ? w->binding : "-", w->text_table, w->text_key); for (u32 i = 0; i < w->ncond; i++) fprintf(stderr, " cond(%s %u %s)", w->cond[i].var, w->cond[i].op, w->cond[i].val); for (u32 i = 0; i < w->nactions; i++) fprintf(stderr, " act(%s %s k%u)", w->actions[i].fn, w->actions[i].arg, w->actions[i].key); fprintf(stderr, "\n"); } }
    bool in_row = lb_row >= 0 && !w->is_template;
    if (in_row && (w->flags & 0x20) && !(w->flags & 0x400)) {          /* a row part for the chosen row only (flags bit 5) [assumed] */
        if (!lb_selected || !cond_holds(w)) return;
    } else if (w->type != AK_GUI_PAGE && gc_shows(w) == -1) return;
    else if (w->name && !strncmp(w->name, "E_TX_GC_Win", 11)) { if (!cond_holds(w)) return; }   /* (MP_Win_*: by its condition alone - its flags hide it on a page without buttons) [assumed] */
    else if (w->type != AK_GUI_PAGE && gc_shows(w) != 1 && (!shows(w, focused) || !cond_holds(w))) return;
    /* the Italian subtitle under the logo (menu_logos.tga's strip at v 0.445: "W_IM_ItalianLogo", or plain "Image 1") shows for
       the Italian language only - the original's English frames have none [assumed: the page scripts' doing] */
    if (w->type == AK_GUI_IMAGE && w->tex >= 0 && fabsf(w->uv[1] - 0.4453125f) < 1e-4f && gf.tex[w->tex].name && strstr(gf.tex[w->tex].name, "menu_logos")
        && strcmp(ak_setting_str("AK_FE_LANGUAGE", "AM"), "IT")) return;
    f32 a = 1;
    for (u32 i = 0; i < w->nanims; i++)                               /* "pulse_highlight": the highlight breathes [assumed rate] */
        if (!strncmp(w->anims[i], "pulse_highlight", 15)) a = 0.65f + 0.35f * cosf(clock * 6.2831853f);
    if (w->type == AK_GUI_MODEL && model_fn) {                        /* a 3D model: the item, the second weapon, the soldier */
        const ak_bp_object *wo = NULL; bool soldier = false, any = false;
        if (in_row && w->fill.fn && !strcmp(w->fill.fn, "FE_Customisation_ListCarouselAnims")) {
            /* [assumed: on the chosen row the Hilight model stands in for the Default one] */
            if (!(lb_selected && w->name && strstr(w->name, "_Default"))) { wo = cust_item(cust_cat, lb_row); any = cust_cat <= 3; }
        } else if (w->name && !strcmp(w->name, "E_Anim_SecondaryWeapon")) { wo = cust_item(1, cust_sel[1]); any = true; }
        else if (w->name && !strcmp(w->name, "E_Anim_AppDisplay")) { wo = cust_item(0, cust_sel[0]); soldier = true; any = true; }
        if (any && (wo || soldier)) {
            f32 rect[4] = { x, y, w->size[0], w->size[1] }, rot[3];
            for (int k = 0; k < 3; k++) rot[k] = w->cam_rot[k] + w->cam_spin[k] * clock_total;
            f32 fov = w->cam_aspect != 0 ? w->cam_fov / w->cam_aspect : w->cam_fov;
            ak_hud_2d_end(); model_fn(wo, soldier, rect, fov, w->cam_off, rot); ak_hud_2d_begin();
        }
    }
    f32 uvo[4]; const f32 *uv = w->uv;
    if (have_match && w->type == AK_GUI_IMAGE && w->name && picture_override(w, uvo)) { if (uvo[2] <= uvo[0]) return; uv = uvo; }
    if (in_row && w->fill.fn && w->fill.fn[0] && w->type == AK_GUI_IMAGE && lb_picture(w->fill.fn, lb_row, uvo)) { if (uvo[2] == uvo[0]) return; uv = uvo; }
    if (gc_on && w->type == AK_GUI_IMAGE && w->name && !strcmp(w->name, "E_IM_Commander") && gc_cmdr(parent_name) >= 0 && gc_cmdr(parent_name) < 4) {
        /* the side's commander from GC's own sheets (texture table 12-15: Alliance, greys, Empire, greys; cells by 08A4xxxx's draws:
           commander k at u (k / 2) x 0.4219, v (k % 2) x 0.375, 0.4219 x 0.375) - in colour while available or bought, else greyed
           [assumed: which sheet when] */
        int c = gc_cmdr(parent_name); bool col = gc.cmdr_avail[c] || gc.cmdr_bought[c]; ak_gfx_tex *t = gc.portrait[col ? 0 : 1];
        if (t) { f32 u0 = (f32)(c / 2) * 0.4219f, v0 = (f32)(c % 2) * 0.375f; ak_hud_2d_quad(t, x, y, x + w->size[0], y + w->size[1], u0, v0, u0 + 0.4219f, v0 + 0.375f, argb_of(w->rgba, a)); goto children; }
    }
    if (w->type == AK_GUI_IMAGE && w->tex >= 0 && (u32)w->tex < gf.ntex && gtex[w->tex]) {
        const f32 *c = w->rgba;
        if (spawn_owner >= 0 && w->name && !strncmp(w->name, "E_IM_SpawnPoint", 15)) c = spawn_rgba[spawn_owner][w->name[15] == 'H'];
        ak_hud_2d_quad(gtex[w->tex], x, y, x + w->size[0], y + w->size[1], uv[0], uv[1], uv[2], uv[3], argb_of(c, a));
    } else if (w->type == AK_GUI_IMAGE && w->rgba[3] > 0) {          /* no picture: a plain quad in its colour (panels, scroll bars) */
        f32 h = w->size[1], yy = y;
        if (scroll && w->name && !strcmp(w->name, "W_IM_Bar")) {      /* the bar: the shown share of the rows, at the first shown row */
            f32 n = (f32)scroll->n, sh = (f32)scroll_shown; if (n > sh) { yy = y + h * (f32)scroll->top / n; h = h * sh / n; }
        }
        ak_hud_2d_quad(NULL, x, yy, x + w->size[0], yy + h, 0, 0, 1, 1, argb_of(w->rgba, a));
    } else if (w->type == AK_GUI_TEXT && (w->text_key || override_text(w, &(u32){0}) || (in_row && w->fill.fn))) {
        u32 n = 0; u16 rb[24]; const u16 *s = NULL;
        if (in_row && w->fill.fn && w->fill.fn[0] && lb_text(w->fill.fn, lb_row, rb, &n, &s)) { if (!s) return; }
        else { s = override_text(w, &n); if (!s) s = ak_gui_text(&texts, w->text_key, &n); }
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
                int al = (w->rows_align & 8) ? 2 : (w->rows_align & 4) ? 1 : 0;   /* [assumed: a 3-unit margin on either side] */
                ak_hud_2d_text(big, x + 3, y + r * rh + (rh - lh) * 0.5f, x + w->size[0] - (al == 2 ? 3 : 0), 1.0f, col, L->row[k], L->len[k], al);
            }
        }
    }
    if ((w->type == AK_GUI_LIST || w->type == AK_GUI_LIST2) && w->nchild && w->child[w->nchild - 1].is_template) {   /* a list box: its row per row */
        list_rows *L = rows_of(w->id); const ak_widget *t = &w->child[w->nchild - 1];
        int n = lb_count(w), shown = w->rows_shown ? (int)w->rows_shown : 8; f32 rh = w->size[1] > 0 ? w->size[1] / (f32)shown : 25;
        if (L) { L->n = n; if (L->sel >= n) L->sel = n ? n - 1 : 0; }
        for (int r = 0; L && r < shown && L->top + r < n; r++) {
            int keep_row = lb_row; bool keep_sel = lb_selected;
            lb_row = L->top + r; lb_selected = lb_row == L->sel;
            draw_widget(t, x, y + (f32)r * rh, lb_selected);
            lb_row = keep_row; lb_selected = keep_sel;
        }
    }
children:;
    bool f2 = is_button(w->type) ? (w->id == focus) : focused;
    const list_rows *keep = scroll; int keep_shown = scroll_shown; const char *keep_parent = parent_name; u32 keep_tint = child_tint; const char *keep_check = check_var; int keep_owner = spawn_owner;
    if (w->type == AK_GUI_BUTTON2 && w->binding && w->binding[0]) check_var = w->binding;
    if (w->type >= 2000) parent_name = w->name;
    if (have_match && w->name && !strncmp(w->name, "W_BU_SpawnPoint", 15)) {   /* the post's owner (08A2DD50 -> the button's vfunc +120) */
        u32 k = (u32)atoi(w->name + 15); int o = k < match.nposts ? match.post_owner[k] : -1;
        spawn_owner = o == match.team ? 0 : (o == 0 || o == 1) ? 1 : 2;
    }
    if (w->type == AK_GUI_GROUP && w->name && !strncmp(w->name, "W_GP_", 5) && strstr(w->name, "Scroll")) {   /* "W_GP_PlanetScroll" scrolls "W_LB_PlanetList" [assumed: by name] */
        char want[64]; size_t l = strstr(w->name, "Scroll") - (w->name + 5); snprintf(want, sizeof want, "W_LB_%.*s", (int)l, w->name + 5);
        scroll = NULL;
        for (int i = 0; i < nlists; i++) { const ak_widget *lw = find_id(&page->root, lists[i].id); if (lw && lw->name && !strncmp(lw->name, want, strlen(want))) { scroll = &lists[i]; scroll_shown = lw->rows_shown ? (int)lw->rows_shown : 8; } }
        if (!scroll || scroll->n <= scroll_shown) { scroll = keep; return; }   /* (nothing to scroll: no bar) */
    }
    for (u32 i = 0; i < w->nchild; i++) draw_widget(&w->child[i], x, y, f2);
    scroll = keep; scroll_shown = keep_shown; parent_name = keep_parent; child_tint = keep_tint; check_var = keep_check; spawn_owner = keep_owner;
}

void ak_fe_draw(void)
{
    if (!page) return;
    ak_hud_2d_begin();
    if (nlayer) {
        layer_focus[active_layer] = focus; active_widget = focus; var_set("GUIMenu.ActiveWidget", (f32)(s32)focus);   /* (one active widget, the page in use's) */
        for (int k = 0; k < nlayer; k++) {                             /* (each page drawn with its own focus) */
            u32 keepf = focus; focus = layer_focus[k];
            const ak_gui_page *keepp = page; page = layer[k];
            draw_widget(&layer[k]->root, 0, 0, false); focus = keepf; page = keepp;
        }
        var_set("GUIMenu.ActiveWidget", (f32)(s32)focus);
    } else { active_widget = focus; draw_widget(&page->root, 0, 0, false); }
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
    } else if (!strcmp(fn, "FE_Customisation_Credits")) {          /* 08A27994: "CREDITS: <spent>/<max>" */
        u32 n; const u16 *t = ak_gui_text(&texts, 0x1DEFE5CCu, &n); u16 b[48]; u32 k = 0; char num[24];
        if (t) { memcpy(b, t, (n < 30 ? n : 30) * 2); k = n < 30 ? n : 30; }
        snprintf(num, sizeof num, " %d/%d", cust_spent(), CUST_CREDITS); for (const char *c = num; *c && k < 47; c++) b[k++] = (u16)(u8)*c;
        row_add16(b, k, 0);
    } else if (!strcmp(fn, "FE_Customisation_Prompt")) {           /* 08A27C24: the category's description, on the carousel the item's */
        u32 n = 0; const u16 *t = NULL;
        if (page && page->root.name && !strcmp(page->root.name, "MP_CustomCarousel")) {
            list_rows *C = NULL; const ak_widget *cw = find_named(&page->root, "W_LB_Carousel"); if (cw) C = rows_of(cw->id);
            const ak_bp_object *o = cust_item(cust_cat, C ? C->sel : cust_sel[cust_cat]); s32 d = o ? ak_bp_int(o, "Description", -1) : -1;
            if (d >= 0) t = ak_hud_stdtext((u32)d, &n);
        }
        if (!t) t = ak_gui_text(&texts, cust_desc_key[cust_cat & 7], &n);
        if (t) row_add16(t, n, 0);
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
    if ((w->type == AK_GUI_LIST || w->type == AK_GUI_LIST2) && !rows_of(w->id) && nlists < 24) { list_rows *L = &lists[nlists++]; memset(L, 0, sizeof *L); L->id = w->id; L->n = lb_count(w); }
    for (u32 i = 0; i < w->nchild; i++) fill_all(&w->child[i]);
}
static void open_layer(u32 h)                                          /* a page over the one in use, which stays drawn */
{
    if (!page) return;
    if (!nlayer) { layer[0] = page; layer_prev[0] = -1; nlayer = 1; active_layer = 0; }
    if (nlayer >= MAXLAYERS) return;
    layer_focus[active_layer] = focus;
    layering = true; bool ok = open_hash(h, false); layering = false;
    if (!ok) { page = layer[active_layer]; return; }
    layer[nlayer] = page; layer_prev[nlayer] = focus_new ? active_layer : -1;
    if (focus_new) active_layer = nlayer;
    else { layer_focus[nlayer] = focus; page = layer[active_layer]; focus = layer_focus[active_layer]; layer_prev[nlayer] = -1; }
    nlayer++; focus_new = true;
}
static void use_layer(int k)                                           /* the focus to an open page */
{
    if (k < 0 || k >= nlayer) return;
    layer_focus[active_layer] = focus; active_layer = k; page = layer[k]; focus = layer_focus[k]; clock = 0;
}
static int layer_of(const char *name) { for (int k = 0; k < nlayer; k++) if (layer[k]->root.name && !strcmp(layer[k]->root.name, name)) return k; return -1; }
static void close_layer(void)
{
    if (nlayer < 2) return;
    int back = layer_prev[nlayer - 1]; nlayer--;
    if (active_layer >= nlayer) { active_layer = back >= 0 && back < nlayer ? back : nlayer - 1; }
    page = layer[active_layer]; focus = layer_focus[active_layer]; clock = 0;
    refill();
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
    else if (!strcmp(fn, "FE_OpenCustomisationMenu")) {               /* 08A2F540: the menu over its background; back to this page after */
        u32 ret = page ? page->root.id : 0; cust_open(); cust_return = ret; return AK_FE_NONE;
    }
    else if (!strcmp(fn, "FE_Customisation_AcceptCategoryItem")) {   /* 08A27EC4: the category's items, over the menu */
        if (row >= 0 && row < NCAT) { cust_cat = row; cust_carousel_sync(); int k = layer_of("MP_CustomCarousel"); if (k >= 0) { use_layer(k); focus = find_named(&page->root, "W_LB_Carousel") ? find_named(&page->root, "W_LB_Carousel")->id : focus; } }
    }
    else if (!strcmp(fn, "FE_Customisation_AcceptCarouselItem")) {   /* 08A27F28: the item taken (no credit check), back to the menu */
        if (row >= 0 && row < cust_count[cust_cat]) cust_sel[cust_cat] = row;
        use_layer(layer_of("MP_Customisation"));
    }
    else if (!strcmp(fn, "FE_Customisation_SellCarouselItem")) {     /* 08A27FD8: the category cleared (item 0) */
        if (cust_sel[cust_cat] > 0 && cust_cost(cust_cat, cust_sel[cust_cat]) > 0) { cust_sel[cust_cat] = 0; cust_carousel_sync(); use_layer(layer_of("MP_Customisation")); }
    }
    else if (!strcmp(fn, "FE_Customisation_ConfirmCancel")) open_layer(ak_gui_hash("MP_CustomCancel"));   /* 08A27E74 */
    else if (!strcmp(fn, "FE_Customisation_Cancel")) {                 /* 08A27DE0: the loadout as it was, the menu closed */
        memcpy(cust_sel, cust_saved, sizeof cust_sel); nlayer = 0; page = NULL;
        if (cust_return) open_hash(cust_return, false);
        cust_vars(); return AK_FE_NONE;
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
    else if (!strcmp(fn, "FE_StartGalacticConquest") || !strcmp(fn, "FE_CheckConquestState")) {
        /* 08A2EE38: 08A3C574(new) sets the conquest up (1 new, 0 the saved one), then the GC mode (08A27544(6)); FE_CheckConquestState
           (New) asks before replacing a saved conquest [assumed: Aurek has no saved conquest yet - New starts one] */
        gc_new_req = !strcmp(fn, "FE_CheckConquestState") ? 1 : atoi(a->arg); var_set("BFF.HasGalacticConquestBeenPlayed", 1); ak_fe_close(); return AK_FE_GC_START; }
    else if (!strcmp(fn, "GC_SetQuitMenuState")) var_set("Menus.GCQuitMenuState", (f32)atoi(a->arg));   /* 08A3BAAC (0x08B1C304): which confirm */
    else if (!strcmp(fn, "GC_SetQuitMenuRequest")) { gc_quit_req = atoi(a->arg); ak_fe_close(); return AK_FE_GC_QUIT; }   /* 08A3BAF4 (0x08B1C300), read by 08A382B0 */
    else if (!strncmp(fn, "GC_Purchase", 11)) {                       /* 08A3B738's GC_Purchase*: the choice for the GC code (0x08C2D8CC = 1) */
        gc_kind = strstr(fn, "Equipment") ? 0 : strstr(fn, "Infantry") ? 1 : strstr(fn, "Space") ? 2 : strstr(fn, "Commander") ? 3 : -1;
        gc_index = atoi(a->arg); if (gc_kind >= 0) return AK_FE_GC_BUY; }
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
    if (in_cust()) cust_vars();
    refill();
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
static void cust_open(void)
{
    if (open_hash(ak_gui_hash("MP_CustomBackground"), false)) {       /* (08A276F0: the background and the carousel open without the focus) */
        open_layer(ak_gui_hash("MP_Customisation")); focus_new = false; open_layer(ak_gui_hash("MP_CustomCarousel")); cust_carousel_sync(); }
    memcpy(cust_saved, cust_sel, sizeof cust_sel); cust_cat = 0; cust_vars();   /* (08A276F0: OnInitMenu keeps the loadout to go back to) */
    refill();
}
/* the customisation menu on its own, from the match (d-pad up at an own command post); closed, play goes on */
bool ak_fe_open_customisation(void) { nlayer = 0; page = NULL; cust_open(); cust_return = 0; return page != NULL; }
/* the customisation menu's circle: off the carousel or a dialogue back to the menu; off the menu itself out of it - over the credits
 * the OVERSPENT page instead (W_BU_Back_OverSpent, shown while BFF.FE_Customisation_Credits < 0); -1 = not handled here */
static int cust_event(const ak_input *in)
{
    if (!(in->pressed & AK_BTN_CIRCLE)) return -1;
    if (!strcmp(page->root.name, "MP_CustomCarousel")) { cust_carousel_sync(); use_layer(layer_of("MP_Customisation")); cust_vars(); refill(); return AK_FE_NONE; }
    if (strcmp(page->root.name, "MP_Customisation")) { close_layer(); cust_vars(); refill(); return AK_FE_NONE; }
    if (cust_spent() > CUST_CREDITS) { open_layer(ak_gui_hash("MP_CustomOverSpent")); return AK_FE_NONE; }
    nlayer = 0; page = NULL;
    if (cust_return) open_hash(cust_return, false);
    return AK_FE_LOADOUT;
}
int ak_fe_update(const ak_input *in, f32 dt)
{
    if (!page) return AK_FE_NONE;
    clock += dt; clock_total += dt;
    if (focus_fix_pending) {                                           /* the page's focus hidden or a title: its first shown control */
        focus_fix_pending = false;
        const ak_widget *f0 = focus ? find_visible(&page->root, focus) : NULL;
        if (!f0 || (f0->type == AK_GUI_BUTTON && !f0->nactions && !f0->target)) { const ak_widget *c = first_control(&page->root); if (c) focus = c->id; }
    }
    {   /* a page's W_BU_AutoClick* button runs at once while its conditions hold (MP_GalacticConquest's
           W_BU_AutoClickWhenNoSavedConquest: no conquest played - a new one) [assumed: by its name; not traced] */
        static const ak_gui_page *auto_done;
        if (auto_done != page) { auto_done = page; const ak_widget *ac = find_named(&page->root, "W_BU_AutoClick");
            if (ac && cond_holds(ac) && ac->nactions) { int e = run(&ac->actions[0], -1); if (e) return e; if (!page) return AK_FE_NONE; } }
    }
    var_set("GUIMenu.ActiveWidget", (s32)focus); active_widget = focus;
    if (in_cust()) { int e = cust_event(in); if (e >= 0) return e; }
    const ak_widget *f = focus ? find_id(&page->root, focus) : NULL;
    /* the buttons' keys (the game's: 16 cross, 32 square, 64 triangle - the spawn map's "\ue801 Customization Menu" runs on
       square, "\ue803 Personalization Menu" on triangle) */
    static const u32 keys[3][2] = { { AK_BTN_CROSS, 16 }, { AK_BTN_SQUARE, 32 }, { AK_BTN_TRIANGLE, 64 } };
    if (f && (f->type == AK_GUI_LIST || f->type == AK_GUI_LIST2)) {  /* a list box: up / down through its rows, its keys */
        list_rows *L = rows_of(f->id); int shown = f->rows_shown ? (int)f->rows_shown : 8;
        if (L) {
            L->n = lb_count(f);
            int was = L->sel;
            if ((in->pressed & AK_BTN_UP) && L->sel > 0) L->sel--;
            if ((in->pressed & AK_BTN_DOWN) && L->sel + 1 < L->n) L->sel++;
            if (L->sel < L->top) L->top = L->sel;
            if (L->sel >= L->top + shown) L->top = L->sel - shown + 1;
            if (L->sel != was) { if (f->name && !strcmp(f->name, "W_LB_TypeList")) cust_cat = L->sel; if (in_cust()) cust_vars(); refill(); return AK_FE_NONE; }
        }
        for (int k = 0; k < 3; k++) if (in->pressed & keys[k][0])
            for (u32 i = 0; i < f->nactions; i++) if (f->actions[i].key == keys[k][1]) return run(&f->actions[i], L && L->n ? L->sel : -1);
    }
    if (f && f->type == AK_GUI_TEXTLIST) {                            /* a text list: up / down through its rows, its keys */
        list_rows *L = rows_of(f->id); int shown = f->rows_shown ? (int)f->rows_shown : 8;
        if (L && (in->pressed & AK_BTN_UP) && L->sel > 0) { L->sel--; if (L->sel < L->top) L->top = L->sel; return AK_FE_NONE; }
        if (L && (in->pressed & AK_BTN_DOWN) && L->sel + 1 < L->n) { L->sel++; if (L->sel >= L->top + shown) L->top = L->sel - shown + 1; return AK_FE_NONE; }
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
    for (int k = 1; k < 3; k++)                                        /* square, triangle: a button's own action for them */
        if ((in->pressed & keys[k][0]) && f && is_button(f->type))
            for (u32 i = 0; i < f->nactions; i++) if (f->actions[i].key == keys[k][1]) return run(&f->actions[i], -1);
    if (in->pressed & AK_BTN_CIRCLE) {                                 /* back: the page's back button, else the page before */
        const ak_widget *b = find_named(&page->root, "W_BU_Back");
        if (b && b->target) { open_hash(b->target, false); return AK_FE_NONE; }
        if (nstack) { open_hash(stack[--nstack], false); return AK_FE_NONE; }
    }
    return AK_FE_NONE;
}
