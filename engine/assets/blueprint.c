/* Aurek - the game's blueprint database (see blueprint.h for the format) */
#include <string.h>
#include "assets/blueprint.h"
#include "assets/asura.h"

u32 ak_bp_hash(const char *s)
{
    u32 h = 0;
    for (; *s; s++) { u8 c = (u8)*s; if (c >= 'A' && c <= 'Z') c = (u8)(c + 32); h = h * 31u + c; }
    return h;
}

typedef struct { const u8 *p; u32 pos, size; bool bad; } rd;
static u32 r32(rd *r) { if (r->pos + 4 > r->size) { r->bad = true; return 0; } u32 v; memcpy(&v, r->p + r->pos, 4); r->pos += 4; return v; }
static u8  r8(rd *r)  { if (r->pos + 1 > r->size) { r->bad = true; return 0; } return r->p[r->pos++]; }
/* a zero-terminated name padded to 4 (from its own start), copied into the arena */
static const char *rstr(rd *r, ak_arena *a)
{
    u32 s = r->pos, e = s;
    while (e < r->size && r->p[e]) e++;
    if (e >= r->size) { r->bad = true; return ""; }
    char *o = (char *)ak_arena_alloc(a, e - s + 1, 1);
    if (!o) { r->bad = true; return ""; }
    memcpy(o, r->p + s, e - s); o[e - s] = 0;
    r->pos = s + ((e + 1 - s + 3) & ~3u);
    if (r->pos > r->size) r->bad = true;
    return o;
}

static bool parse_type(const ak_chunk *c, ak_arena *a, ak_bp_type *t)
{
    rd r = { c->body, 0, c->size, false };
    r32(&r); r32(&r); t->hash = r32(&r); t->nobjects = r32(&r); t->name = rstr(&r, a);
    if (r.bad || t->nobjects > 4096) return false;
    t->objects = AK_NEW(a, ak_bp_object, t->nobjects ? t->nobjects : 1);
    if (!t->objects) return false;
    for (u32 k = 0; k < t->nobjects; k++) {
        ak_bp_object *o = &t->objects[k];
        r32(&r); o->hash = r32(&r); o->parent_hash = r32(&r); o->name = rstr(&r, a); o->nprops = r32(&r);
        if (r.bad || o->nprops > 4096) return false;
        o->props = AK_NEW(a, ak_bp_prop, o->nprops ? o->nprops : 1);
        if (!o->props) return false;
        for (u32 i = 0; i < o->nprops; i++) {
            ak_bp_prop *p = &o->props[i];
            p->hash = r32(&r); p->name = rstr(&r, a); r32(&r); p->cls = r32(&r); p->count = r32(&r); p->type = (u8)r32(&r);
            if (r.bad || p->count > 1024 || p->type > AK_BP_STRING) return false;
            u32 n = p->count ? p->count : 1;
            switch (p->type) {
            case AK_BP_INT:   p->v.i = AK_NEW(a, s32, n); for (u32 j = 0; p->v.i && j < p->count; j++) p->v.i[j] = (s32)r32(&r); break;
            case AK_BP_FLOAT: p->v.f = AK_NEW(a, f32, n); for (u32 j = 0; p->v.f && j < p->count; j++) { u32 x = r32(&r); memcpy(&p->v.f[j], &x, 4); } break;
            case AK_BP_BOOL:  p->v.b = AK_NEW(a, u8, n);  for (u32 j = 0; p->v.b && j < p->count; j++) p->v.b[j] = r8(&r); break;
            default:          p->v.s = AK_NEW(a, const char *, n);
                              for (u32 j = 0; p->v.s && j < p->count; j++) { p->v.s[j] = r32(&r) ? rstr(&r, a) : ""; }
                              break;
            }
            if (r.bad || !p->v.i) return false;
        }
    }
    if (r.pos != r.size) AK_WARN("blueprint", "%s: %u bytes left over", t->name, r.size - r.pos);
    for (u32 k = 0; k < t->nobjects; k++) {            /* parents (same type) */
        ak_bp_object *o = &t->objects[k];
        for (u32 j = 0; o->parent_hash && j < t->nobjects; j++) if (t->objects[j].hash == o->parent_hash && j != k) { o->parent = &t->objects[j]; break; }
        if (o->parent_hash && !o->parent) AK_WARN("blueprint", "%s %s: parent %08x not found", t->name, o->name, o->parent_hash);
    }
    return true;
}

bool ak_blueprints_parse(const ak_blob *f, ak_arena *a, ak_blueprints *out)
{
    memset(out, 0, sizeof *out);
    if (!ak_asura_check(f)) return false;
    u32 pos = 8, n = 0; ak_chunk c;
    while (ak_asura_next(f, &pos, &c)) if (ak_chunk_tag(&c) == AK_TAG('B', 'L', 'U', 'E')) n++;
    out->types = AK_NEW(a, ak_bp_type, n ? n : 1);
    if (!out->types) return false;
    pos = 8;
    while (ak_asura_next(f, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('B', 'L', 'U', 'E')) continue;
        if (parse_type(&c, a, &out->types[out->ntypes])) out->ntypes++;
        else AK_WARN("blueprint", "a BLUE chunk at %u did not parse", c.offset);
    }
    return out->ntypes > 0;
}

const ak_bp_type *ak_bp_find_type(const ak_blueprints *b, const char *type)
{
    u32 h = ak_bp_hash(type);
    for (u32 i = 0; i < b->ntypes; i++) if (b->types[i].hash == h) return &b->types[i];
    return NULL;
}
const ak_bp_object *ak_bp_find(const ak_blueprints *b, const char *type, const char *object)
{
    const ak_bp_type *t = ak_bp_find_type(b, type);
    u32 h = ak_bp_hash(object);
    for (u32 i = 0; t && i < t->nobjects; i++) if (t->objects[i].hash == h) return &t->objects[i];
    return NULL;
}
const ak_bp_prop *ak_bp_get(const ak_bp_object *o, const char *prop)
{
    u32 h = ak_bp_hash(prop);
    for (int depth = 0; o && depth < 32; o = o->parent, depth++)
        for (u32 i = 0; i < o->nprops; i++) if (o->props[i].hash == h) return &o->props[i];
    return NULL;
}
f32 ak_bp_float(const ak_bp_object *o, const char *prop, f32 def)
{
    const ak_bp_prop *p = ak_bp_get(o, prop);
    if (!p || !p->count) return def;
    return p->type == AK_BP_FLOAT ? p->v.f[0] : p->type == AK_BP_INT ? (f32)p->v.i[0] : def;
}
s32 ak_bp_int(const ak_bp_object *o, const char *prop, s32 def)
{
    const ak_bp_prop *p = ak_bp_get(o, prop);
    if (!p || !p->count) return def;
    return p->type == AK_BP_INT ? p->v.i[0] : p->type == AK_BP_BOOL ? p->v.b[0] : p->type == AK_BP_FLOAT ? (s32)p->v.f[0] : def;
}
bool ak_bp_bool(const ak_bp_object *o, const char *prop, bool def)
{
    const ak_bp_prop *p = ak_bp_get(o, prop);
    if (!p || !p->count) return def;
    return p->type == AK_BP_BOOL ? p->v.b[0] != 0 : p->type == AK_BP_INT ? p->v.i[0] != 0 : def;
}
const char *ak_bp_string(const ak_bp_object *o, const char *prop, const char *def)
{
    const ak_bp_prop *p = ak_bp_get(o, prop);
    return p && p->count && p->type == AK_BP_STRING ? p->v.s[0] : def;
}
bool ak_bp_is(const ak_bp_object *o, const char *name)
{
    u32 h = ak_bp_hash(name);
    for (int depth = 0; o && depth < 32; o = o->parent, depth++) if (o->hash == h) return true;
    return false;
}
