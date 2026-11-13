#include "ak_space.h"
#include <string.h>

static f32 wf(const u8 *p) { u32 w = ak_rd32(p); f32 f; memcpy(&f, &w, 4); return f; }

bool ak_space_load(const ak_level *l, ak_space_map *out)
{
    memset(out, 0, sizeof *out);
    ak_chunk c; u32 pos = 8;
    while (ak_asura_next(&l->file, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('E', 'N', 'T', 'I') || c.size < 22 * 4) continue;
        const u8 *b = c.body;
        if ((ak_rd32(b + 4) & 0xFFFF) != 0x8022 || ak_rd32(b + 8) != 2 || out->nobj >= AK_MAX_OBJECTIVES) continue;
        ak_space_obj *o = &out->obj[out->nobj];
        o->id = ak_rd32(b); o->team = (int)ak_rd32(b + 24); o->kind = (int)ak_rd32(b + 28);
        if (o->kind < 0 || o->kind > 2) continue;
        for (int k = 0; k < 3; k++) { f32 g[3] = { wf(b + 32 + 12 * k), wf(b + 36 + 12 * k), wf(b + 40 + 12 * k) }; ak_from_game(g, o->path[k]); }
        o->link = ak_rd32(b + 80);
        out->nhangar += o->kind == AK_OBJ_HANGAR;
        out->nobj++;
    }
    return out->nobj > 0;
}

int ak_flyer_type(const char *t)
{
    static const char *names[] = { "interceptor", "fighter", "bomber", "transport", "hero" };
    for (int i = 0; i < 5; i++) {
        const char *a = t, *n = names[i];
        while (*a && *n && (*a | 32) == *n) { a++; n++; }
        if (!*a && !*n) return i;
    }
    return AK_FLY_OTHER;
}
