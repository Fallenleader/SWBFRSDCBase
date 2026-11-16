/* Aurek - akbp: print blueprint objects from MISC/COMMON.ASR with every property resolved along the parent chain.
 *   akbp <COMMON.ASR> <Type> [Object|*] [prop ...]
 * "*" lists every object of the type; with props given, only those (one line per object). */
#include "assets/blueprint.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static bool read_file(const char *path, ak_blob *out)
{
    FILE *f = fopen(path, "rb"); if (!f) return false;
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    u8 *b = malloc((size_t)n); if (fread(b, 1, (size_t)n, f) != (size_t)n) { fclose(f); return false; }
    fclose(f); out->data = b; out->size = (u32)n; return true;
}

static void print_prop(const ak_bp_prop *p)
{
    printf("%s=", p->name ? p->name : "?");
    for (u32 i = 0; i < p->count; i++) {
        if (i) printf(",");
        switch (p->type) {
        case AK_BP_INT: printf("%d", p->v.i[i]); break;
        case AK_BP_FLOAT: printf("%g", p->v.f[i]); break;
        case AK_BP_BOOL: printf("%s", p->v.b[i] ? "true" : "false"); break;
        case AK_BP_STRING: printf("\"%s\"", p->v.s[i] ? p->v.s[i] : ""); break;
        default: printf("(%u)", p->v.i[i]); break;
        }
    }
}

static void dump(const ak_bp_object *o, int nprops, char **props)
{
    if (nprops) {
        printf("%-32s", o->name);
        for (int i = 0; i < nprops; i++) { const ak_bp_prop *p = ak_bp_get(o, props[i]); printf("  "); if (p) print_prop(p); else printf("%s=-", props[i]); }
        printf("\n"); return;
    }
    printf("%s", o->name);
    for (const ak_bp_object *q = o->parent; q; q = q->parent) printf(" <- %s", q->name);
    printf("\n");
    for (const ak_bp_object *q = o; q; q = q->parent)                  /* nearest value first; skip names already printed */
        for (u32 i = 0; i < q->nprops; i++) {
            const ak_bp_prop *p = &q->props[i];
            if (ak_bp_get(o, p->name) != p) continue;
            printf("  "); print_prop(p); printf(q == o ? "\n" : "   (%s)\n", q->name);
        }
}

int main(int argc, char **argv)
{
    if (argc < 3) { fprintf(stderr, "usage: akbp <COMMON.ASR> <Type> [Object|*] [prop ...]\n"); return 1; }
    ak_blob file; ak_arena a; ak_blueprints bp;
    if (!read_file(argv[1], &file)) { fprintf(stderr, "cannot read %s\n", argv[1]); return 1; }
    if (!ak_arena_init(&a, 64u << 20) || !ak_blueprints_parse(&file, &a, &bp)) { fprintf(stderr, "cannot parse\n"); return 1; }
    const ak_bp_type *t = ak_bp_find_type(&bp, argv[2]);
    if (!t) { fprintf(stderr, "no type %s\n", argv[2]); return 1; }
    const char *obj = argc > 3 ? argv[3] : "*";
    for (u32 i = 0; i < t->nobjects; i++)
        if (!strcmp(obj, "*") || !strcmp(obj, t->objects[i].name)) dump(&t->objects[i], argc > 4 ? argc - 4 : 0, argv + 4);
    return 0;
}
