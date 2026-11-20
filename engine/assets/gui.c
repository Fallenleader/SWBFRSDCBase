/* The game's front-end menu pages (see gui.h; the read order of every class is the game's load method's). */
#include "gui.h"
#include <string.h>

typedef struct { const u8 *d; u32 n, p; bool bad; ak_arena *a; u32 tex_n; const ak_gui_file *f; } rd;

static u32 r32(rd *s) { if (s->p + 4 > s->n) { s->bad = true; s->p = s->n; return 0; } u32 v = ak_rd32(s->d + s->p); s->p += 4; return v; }
static f32 rf(rd *s) { u32 v = r32(s); f32 f; memcpy(&f, &v, 4); return f; }
static u8 r8(rd *s) { if (s->p + 1 > s->n) { s->bad = true; return 0; } return s->d[s->p++]; }
static u16 r16(rd *s) { if (s->p + 2 > s->n) { s->bad = true; s->p = s->n; return 0; } u16 v = ak_rd16(s->d + s->p); s->p += 2; return v; }
static const char *rstr(rd *s)         /* 4 bytes at a time until one holds the 0 (0882DD88) */
{
    u32 st = s->p;
    for (;;) {
        if (s->p + 4 > s->n) { s->bad = true; s->p = s->n; return ""; }
        const u8 *w = s->d + s->p; s->p += 4;
        if (!w[0] || !w[1] || !w[2] || !w[3]) break;
    }
    return (const char *)s->d + st;    /* (the file stays loaded: the strings point into it) */
}
static void skip(rd *s, u32 n) { if (s->p + n > s->n) { s->bad = true; s->p = s->n; } else s->p += n; }

u32 ak_gui_hash(const char *t) { u32 h = 0; for (; *t; t++) { u8 c = (u8)*t; if (c >= 'A' && c <= 'Z') c += 32; h = h * 31 + c; } return h; }

static ak_gui_action action(rd *s)     /* 0887DF60: u32 version (0), str, str */
{
    ak_gui_action a = { "", "", 0 };
    if (r32(s) != 0) { s->bad = true; return a; }
    a.fn = rstr(s); a.arg = rstr(s); return a;
}
static void action_list(rd *s, ak_widget *w)   /* 0887F000: u32 version (0), u32 n, n x {u32 key, action} */
{
    if (r32(s) != 0) { s->bad = true; return; }
    u32 n = r32(s); if (s->bad || n > 256) { s->bad = true; return; }
    ak_gui_action *a = n ? AK_NEW(s->a, ak_gui_action, n) : NULL; if (n && !a) { s->bad = true; return; }
    for (u32 i = 0; i < n && !s->bad; i++) { u32 k = r32(s); a[i] = action(s); a[i].key = k; }
    w->actions = a; w->nactions = n;
}
static const char *named(rd *s) { if (r32(s) != 0) { s->bad = true; return ""; } return rstr(s); }   /* 0887E318 */

static void base(rd *s, ak_widget *w)  /* 08888454, version 11 */
{
    if (r32(s) != 11) { s->bad = true; return; }
    w->name = rstr(s);
    for (int k = 0; k < 4; k++) w->rgba[k] = rf(s);
    for (int k = 0; k < 3; k++) w->pos[k] = rf(s);
    w->id = r32(s); w->flags = r32(s);
    u32 n = r32(s); if (n > 64) { s->bad = true; return; } skip(s, n * 8);
    r32(s); r32(s); r32(s); r32(s); r32(s);
    if (r32(s) != 0) { s->bad = true; return; }                       /* the condition block (0887EA90) */
    w->cond_mode = r32(s); u32 na = r32(s); if (na > 64) { s->bad = true; return; }
    ak_gui_cond *cd = na ? AK_NEW(s->a, ak_gui_cond, na) : NULL; if (na && !cd) { s->bad = true; return; }
    for (u32 i = 0; i < na && !s->bad; i++) {                        /* 0887E588: u32 0, (u32 0, str), str, u32 */
        if (r32(s) != 0 || r32(s) != 0) { s->bad = true; return; }
        cd[i].var = rstr(s); cd[i].val = rstr(s); cd[i].op = r32(s);
    }
    w->cond = cd; w->ncond = na;
    u32 np = r32(s); if (np > 64) { s->bad = true; return; }
    for (u32 i = 0; i < np && !s->bad; i++) {                        /* properties (08886218): u32 0, u32, u32, u32 kind, value */
        if (r32(s) != 0) { s->bad = true; return; }
        r32(s); r32(s); u32 k = r32(s);
        switch (k) {
        case 0: case 2: r32(s); break;
        case 1: break;
        case 3: r32(s); break;
        case 4: case 8: skip(s, 16); break;
        case 5: skip(s, 12); break;
        case 6: { u32 c = r32(s); for (u32 j = 0; j < c && !s->bad; j++) r16(s); break; }
        case 7: { u32 c = r32(s); for (u32 j = 0; j < c && !s->bad; j++) r8(s); break; }
        case 9: rstr(s); break;
        default: s->bad = true; return;
        }
    }
    u32 nr = r32(s); if (nr > 64) { s->bad = true; return; }
    if (nr) { w->anims = AK_NEW(s->a, const char *, nr); if (!w->anims) { s->bad = true; return; } w->nanims = nr; }
    for (u32 i = 0; i < nr && !s->bad; i++) {                        /* 0887D79C: u32 version (< 2), str, f32, (>= 1) 4 bytes */
        u32 v = r32(s); if (v >= 2) { s->bad = true; return; }
        w->anims[i] = rstr(s); rf(s); if (v >= 1) skip(s, 4);
    }
}

static void widget(rd *s, ak_widget *w, int depth);
static void children(rd *s, ak_widget *w, int depth)                 /* 08888AB4 */
{
    u32 n = r32(s); if (s->bad || n > 512 || depth > 16) { s->bad = true; return; }
    if (!n) return;
    w->child = AK_NEW(s->a, ak_widget, n); if (!w->child) { s->bad = true; return; }
    w->nchild = n;
    for (u32 i = 0; i < n && !s->bad; i++) widget(s, &w->child[i], depth + 1);
}
static void image_base(rd *s, ak_widget *w) { base(s, w); r32(s); w->size[0] = rf(s); w->size[1] = rf(s); }   /* 08880268 */
static void button_base(rd *s, ak_widget *w)                        /* 0888CFE8 */
{
    base(s, w); u32 v = r32(s);
    for (int k = 0; k < 4; k++) w->links[k] = r32(s);
    if (v) r8(s);
}
static s32 find_tex(rd *s, const char *name)   /* "\graphics" + the widget's picture name, case ignored */
{
    for (u32 i = 0; i < s->tex_n; i++) {
        const char *t = s->f->tex[i].name; if (!t) continue;
        if (!strncmp(t, "\\graphics", 9)) t += 9;
        const char *a = t, *b = name; while (*a && *b) { char x = *a, y = *b; if (x >= 'A' && x <= 'Z') x += 32; if (y >= 'A' && y <= 'Z') y += 32; if (x == '/') x = '\\'; if (y == '/') y = '\\'; if (x != y) break; a++; b++; }
        if (!*a && !*b) return (s32)i;
    }
    return -1;
}

static void widget(rd *s, ak_widget *w, int depth)
{
    memset(w, 0, sizeof *w); w->tex = -1; w->text_scale = 1;
    w->cver = r32(s); w->type = r32(s); if (s->bad) return;
    u32 v = w->cver;
    switch (w->type) {
    case AK_GUI_PAGE:
        base(s, w); w->size[0] = rf(s); w->size[1] = rf(s); children(s, w, depth);
        break;                                                       /* (the page's tail: ak_gui_load) */
    case AK_GUI_IMAGE:                                                /* 08880AD4 */
        image_base(s, w); for (int k = 0; k < 4; k++) w->uv[k] = rf(s); r32(s); w->tex = find_tex(s, rstr(s)); children(s, w, depth);
        break;
    case AK_GUI_TEXT:                                                 /* 08883974 (version 6+) */
        image_base(s, w); if (v < 6) { s->bad = true; return; }
        w->text_table = r32(s); w->text_key = r32(s); w->font = rstr(s); w->text_scale = rf(s);
        if (v >= 3) w->text_flags = r32(s);
        if (v >= 5) rf(s);
        if (v >= 7) rf(s);
        children(s, w, depth);
        break;
    case AK_GUI_POINTS: {                                             /* 08881D4C: image base, a point list (08AA5CD4), children */
        image_base(s, w); u32 pv = r32(s);
        if (pv >= 10002) r32(s);
        else if (pv >= 10000) { u32 x = r32(s); skip(s, (x << 4) + (pv >= 10001 ? 12 : 0)); }
        else skip(s, pv << 4);
        u32 n = r32(s); if (n > 4096) { s->bad = true; return; } skip(s, n * 12);
        children(s, w, depth);
        break; }
    case AK_GUI_MODEL:                                                /* 0887F958 */
        image_base(s, w);
        if (v == 0) { if (r32(s)) { r32(s); r32(s); } } else { r32(s); r32(s); r32(s); }
        w->cam_fov = rf(s); w->cam_aspect = rf(s);                    /* (0887F504: the field of view is +176 / +180) */
        for (int k = 0; k < 3; k++) w->cam_off[k] = rf(s);
        for (int k = 0; k < 3; k++) w->cam_rot[k] = rf(s);
        if (v >= 2) for (int k = 0; k < 3; k++) w->cam_spin[k] = rf(s);
        if (v >= 3) r8(s);
        children(s, w, depth);
        break;
    case AK_GUI_SPRITES: {                                            /* 0888271C */
        image_base(s, w); w->tex = find_tex(s, rstr(s)); rf(s); r32(s); w->binding = named(s);
        u32 n = r32(s); if (n > 1024) { s->bad = true; return; }
        for (u32 i = 0; i < n && !s->bad; i++) { r32(s); r32(s); if (v >= 1) r32(s); r32(s); skip(s, 16); }
        children(s, w, depth);
        break; }
    case AK_GUI_BUTTON:                                               /* 0888D850 */
        button_base(s, w); children(s, w, depth);
        w->target = r32(s); r32(s);
        if (v == 1) { ak_gui_action *a = AK_NEW(s->a, ak_gui_action, 1); if (!a) { s->bad = true; return; } *a = action(s); w->actions = a; w->nactions = 1; }
        else if (v >= 2) action_list(s, w);
        if (v >= 3) { rf(s); rf(s); }
        break;
    case AK_GUI_BUTTON2:                                              /* 0888DE48 */
        button_base(s, w); children(s, w, depth); if (v >= 1) w->binding = named(s);
        break;
    case AK_GUI_GROUP:                                                /* 0888E028 */
        button_base(s, w); children(s, w, depth);
        break;
    case AK_GUI_SPINNER:                                              /* 08893AF4 */
        button_base(s, w); children(s, w, depth); r32(s);
        if (v >= 1) { w->step = rf(s); r32(s); r32(s); }
        if (v >= 2) w->binding = named(s);
        break;
    case AK_GUI_TEXTBOX:                                              /* 088943B0 */
        button_base(s, w); children(s, w, depth); r32(s);
        if (v) r32(s);
        if (v >= 3) r8(s);
        if (v >= 4) r8(s);
        if (v >= 2) w->binding = named(s);
        break;
    case AK_GUI_TEXTLIST:                                             /* 08895EA0 */
        button_base(s, w); children(s, w, depth);
        w->size[0] = rf(s); w->size[1] = rf(s); w->rows_max = r32(s); w->rows_shown = r32(s); w->font = rstr(s);
        if (v >= 1) w->rows_align = r32(s);                           /* (the team lists: 2 for the left one, 8 for the right one) */
        if (v >= 2) action_list(s, w);
        if (v >= 3) w->fill = action(s);
        if (v >= 4) { r32(s); r32(s); for (int k = 0; k < 4; k++) w->sel_rgba[k] = rf(s); rf(s); }
        if (v >= 5) skip(s, 8);
        if (v >= 6) skip(s, 4);
        break;
    case AK_GUI_SCROLLBAR:                                            /* 0889181C */
        button_base(s, w); children(s, w, depth); skip(s, 32 + 20);
        if (v >= 1) w->binding = named(s);
        if (v >= 2) skip(s, 8);
        if (v >= 3) r32(s);
        break;
    case AK_GUI_LIST: case AK_GUI_LIST2: {                            /* 0888FD8C: a list box and its row template */
        button_base(s, w); children(s, w, depth);
        w->size[0] = rf(s); w->size[1] = rf(s); w->rows_max = r32(s); w->rows_shown = r32(s); action_list(s, w);
        ak_widget t; memset(&t, 0, sizeof t); t.tex = -1; t.cver = r32(s); t.type = r32(s);
        button_base(s, &t); children(s, &t, depth);
        /* each template part's column function (FE_Customisation_ListCategoryNames ...), by the part's id (version 1: in order) */
        if (v >= 1) for (u32 i = 0; i < t.nchild && !s->bad; i++) {
            u32 id = v >= 2 ? r32(s) : t.child[i].id; ak_gui_action fa = action(s);
            for (u32 k = 0; k < t.nchild; k++) if (t.child[k].id == id) t.child[k].fill = fa;
        }
        t.is_template = true;
        skip(s, 8); if (v >= 3) r8(s);
        /* the template becomes the list's last child */
        ak_widget *c = AK_NEW(s->a, ak_widget, w->nchild + 1); if (!c) { s->bad = true; return; }
        if (w->nchild) memcpy(c, w->child, w->nchild * sizeof *c);
        c[w->nchild] = t; w->child = c; w->nchild++;
        break; }
    default:
        s->bad = true;
    }
}

bool ak_gui_load(const ak_blob *file, ak_arena *a, ak_gui_file *out)
{
    memset(out, 0, sizeof *out);
    if (!ak_asura_check(file)) return false;
    u32 pos = 8, ntex = 0, npage = 0; ak_chunk c;
    while (ak_asura_next(file, &pos, &c)) {
        u32 tag = ak_chunk_tag(&c); ak_rscf r;
        if (tag == AK_TAG('U', 'I', 'M', 'P')) npage++;
        else if (tag == AK_TAG('R', 'S', 'C', 'F') && ak_rscf_parse(&c, &r) && r.type == AK_RSCF_TEXTURE) ntex++;
    }
    out->tex = ntex ? AK_NEW(a, ak_texture, ntex) : NULL; out->pages = npage ? AK_NEW(a, ak_gui_page, npage) : NULL;
    if ((ntex && !out->tex) || (npage && !out->pages)) return false;
    pos = 8;
    while (ak_asura_next(file, &pos, &c)) {                          /* the pictures first: the pages name them */
        ak_rscf r;
        if (ak_chunk_tag(&c) == AK_TAG('R', 'S', 'C', 'F') && ak_rscf_parse(&c, &r) && r.type == AK_RSCF_TEXTURE && out->ntex < ntex)
            if (ak_texture_parse(&r, a, &out->tex[out->ntex])) out->ntex++;
    }
    pos = 8;
    while (ak_asura_next(file, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('U', 'I', 'M', 'P')) continue;
        rd s = { c.body, c.size, 0, false, a, out->ntex, out };
        ak_gui_page *pg = &out->pages[out->npages]; memset(pg, 0, sizeof *pg);
        widget(&s, &pg->root, 0);
        if (!s.bad && pg->root.type == AK_GUI_PAGE) {                /* 08885040's tail */
            u32 v = pg->root.cver;
            pg->focus = r32(&s);
            if (v >= 1) pg->script = rstr(&s);
            if (v >= 2) r32(&s);
            if (v >= 3) { pg->on_open = action(&s); pg->on_close = action(&s); }
            if (v >= 4) r32(&s);
        }
        if (s.bad || s.p != s.n) { AK_WARN("gui", "page %s: read %u of %u bytes", pg->root.name ? pg->root.name : "?", s.p, s.n); continue; }
        out->npages++;
    }
    return out->npages > 0;
}

const ak_gui_page *ak_gui_find_page(const ak_gui_file *f, u32 hash)
{
    for (u32 i = 0; i < f->npages; i++) if (f->pages[i].root.id == hash) return &f->pages[i];
    return NULL;
}

bool ak_gui_texts_load(const ak_blob *file, ak_arena *a, ak_gui_texts *out)
{
    memset(out, 0, sizeof *out);
    if (!ak_asura_check(file)) return false;
    u32 pos = 8; ak_chunk c;
    while (ak_asura_next(file, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('H', 'T', 'X', 'T') || c.size < 12) continue;
        u32 n = ak_rd32(c.body); out->table = ak_rd32(c.body + 4);
        out->key = AK_NEW(a, u32, n ? n : 1); out->text = AK_NEW(a, const u16 *, n ? n : 1); out->len = AK_NEW(a, u32, n ? n : 1);
        if (!out->key || !out->text || !out->len) return false;
        u32 p = 12;
        for (u32 i = 0; i < n && p + 8 <= c.size; i++) {
            u32 k = ak_rd32(c.body + p), l = ak_rd32(c.body + p + 4); p += 8;
            if (p + l * 2 > c.size) break;
            u16 *t = AK_NEW(a, u16, l + 1); if (!t) return false;
            for (u32 j = 0; j < l; j++) t[j] = ak_rd16(c.body + p + j * 2);
            t[l] = 0; p += l * 2;
            out->key[out->n] = k; out->text[out->n] = t; out->len[out->n] = l ? l - 1 : 0; out->n++;
        }
        return out->n > 0;
    }
    return false;
}

const u16 *ak_gui_text(const ak_gui_texts *t, u32 key, u32 *len)
{
    for (u32 i = 0; i < t->n; i++) if (t->key[i] == key) { *len = t->len[i]; return t->text[i]; }
    *len = 0; return NULL;
}
