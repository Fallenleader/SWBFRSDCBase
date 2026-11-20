/* Aurek - the front end (see frontend.h). */
#include "frontend.h"
#include "hud.h"
#include "../assets/gui.h"
#include "../render/ak_gfx.h"
#include "../core/ak_settings.h"
#include <string.h>
#include <math.h>
#include <stdio.h>

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
static u32 stack[16]; static int nstack;

static void path_of(int f, char *out, size_t n) { snprintf(out, n, "PSP_GAME/USRDIR/GUIMENU/%s.GUI", files[f]); }

bool ak_fe_init(ak_vfs *v)
{
    vfs = v; nidx = 0;
    if (!ak_arena_init(&txt, 1u << 20) || !ak_arena_init(&mem, (size_t)ak_setting_int("AK_FE_MB", 24) << 20)) return false;
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
        if (pg->on_open.fn && pg->on_open.fn[0]) AK_INFO("fe", "%s: %s(%s)", idx[i].name, pg->on_open.fn, pg->on_open.arg);
        else AK_INFO("fe", "%s", idx[i].name);
        return true;
    }
    AK_WARN("fe", "no page %08x", h); return false;
}
bool ak_fe_open(const char *name) { return ready && open_hash(ak_gui_hash(name), false); }
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
static bool is_button(u32 t) { return t >= 2000 && t < 3000 && t != AK_GUI_GROUP && t != AK_GUI_TEXTBOX && t != AK_GUI_TEXTLIST; }

/* a widget shows by its flags and its button's focus: bit 1 while the button is not focused, bit 2 while it is (a page's own
 * widgets count as unfocused); neither bit: always [assumed: read from the main menu's buttons - the D picture 0x43E shows
 * always, the H picture 0x43C only on the focused button, as in the original's frame] */
static bool shows(const ak_widget *w, bool focused)
{
    u32 f = w->flags & 6;
    if (!f) return true;
    return focused ? (f & 4) != 0 : (f & 2) != 0;
}
static u32 argb_of(const f32 *c, f32 a)
{
    u32 r = (u32)(c[0] * 255 + 0.5f), g = (u32)(c[1] * 255 + 0.5f), b = (u32)(c[2] * 255 + 0.5f), al = (u32)(c[3] * a * 255 + 0.5f);
    r = r > 255 ? 255 : r; g = g > 255 ? 255 : g; b = b > 255 ? 255 : b; al = al > 255 ? 255 : al;
    return al << 24 | r << 16 | g << 8 | b;
}
static void draw_widget(const ak_widget *w, f32 ox, f32 oy, bool focused)
{
    f32 x = ox + w->pos[0], y = oy + w->pos[1];
    if (w->type != AK_GUI_PAGE && !shows(w, focused)) return;
    /* the Italian subtitle under the logo (menu_logos.tga's strip at v 0.445: "W_IM_ItalianLogo", or plain "Image 1") shows for
       the Italian language only - the original's English frames have none [assumed: the page scripts' doing] */
    if (w->type == AK_GUI_IMAGE && w->tex >= 0 && fabsf(w->uv[1] - 0.4453125f) < 1e-4f && gf.tex[w->tex].name && strstr(gf.tex[w->tex].name, "menu_logos")
        && strcmp(ak_setting_str("AK_FE_LANGUAGE", "AM"), "IT")) return;
    f32 a = 1;
    for (u32 i = 0; i < w->nanims; i++)                               /* "pulse_highlight": the highlight breathes [assumed rate] */
        if (!strncmp(w->anims[i], "pulse_highlight", 15)) a = 0.65f + 0.35f * cosf(clock * 6.2831853f);
    if (w->type == AK_GUI_IMAGE && w->tex >= 0 && (u32)w->tex < gf.ntex && gtex[w->tex]) {
        ak_hud_2d_quad(gtex[w->tex], x, y, x + w->size[0], y + w->size[1], w->uv[0], w->uv[1], w->uv[2], w->uv[3], argb_of(w->rgba, a));
    } else if (w->type == AK_GUI_TEXT && w->text_key) {
        u32 n; const u16 *s = ak_gui_text(&texts, w->text_key, &n);
        if (s && n) {
            int big = w->font && strstr(w->font, "_13") != NULL;
            int al = (w->text_flags & 8) ? 2 : (w->text_flags & 4) ? 1 : 0;   /* 0xC8 right, 0xC4 centred, 0xC2 left */
            f32 lh = ak_hud_2d_line(big) * w->text_scale, ty = y + (w->size[1] - lh) * 0.5f;
            ak_hud_2d_text(big, x, ty, x + w->size[0], w->text_scale, argb_of(w->rgba, a), s, n, al);
        }
    }
    bool f2 = is_button(w->type) ? (w->id == focus) : focused;
    for (u32 i = 0; i < w->nchild; i++) draw_widget(&w->child[i], x, y, f2);
}

void ak_fe_draw(void)
{
    if (!page) return;
    ak_hud_2d_begin();
    draw_widget(&page->root, 0, 0, false);
    ak_hud_2d_end();
}

/* ---- the script functions the buttons call (the game registers them by name: FE_*) */
static int run(const ak_gui_action *a)
{
    if (!a->fn || !a->fn[0]) return AK_FE_NONE;
    AK_INFO("fe", "call %s(%s)", a->fn, a->arg);
    if (!strcmp(a->fn, "FE_HostGame")) return AK_FE_START;
    return AK_FE_NONE;                                                /* (the rest: not yet - PARITY 8.2) */
}
static int activate(const ak_widget *b)
{
    int r = AK_FE_NONE;
    for (u32 i = 0; i < b->nactions; i++) { int k = run(&b->actions[i]); if (k) r = k; }
    if (r) return r;
    if (b->target) open_hash(b->target, true);
    return AK_FE_NONE;
}

int ak_fe_update(const ak_input *in, f32 dt)
{
    if (!page) return AK_FE_NONE;
    clock += dt;
    const ak_widget *f = focus ? find_id(&page->root, focus) : NULL;
    static const u32 dirs[4] = { AK_BTN_LEFT, AK_BTN_RIGHT, AK_BTN_UP, AK_BTN_DOWN };
    for (int k = 0; k < 4; k++)                                        /* the neighbour links: left, right, up, down */
        if ((in->pressed & dirs[k]) && f && f->links[k] && find_id(&page->root, f->links[k])) { focus = f->links[k]; clock = 0; return AK_FE_NONE; }
    if ((in->pressed & AK_BTN_CROSS) && f && is_button(f->type)) return activate(f);
    if (in->pressed & AK_BTN_CIRCLE) {                                 /* back: the page's back button, else the page before */
        const ak_widget *b = find_named(&page->root, "W_BU_Back");
        if (b && b->target) { open_hash(b->target, false); return AK_FE_NONE; }
        if (nstack) { open_hash(stack[--nstack], false); return AK_FE_NONE; }
    }
    return AK_FE_NONE;
}
