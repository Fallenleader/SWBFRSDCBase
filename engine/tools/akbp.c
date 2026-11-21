/* Aurek - akbp: print blueprint objects from MISC/COMMON.ASR with every property resolved along the parent chain.
 *   akbp <COMMON.ASR> <Type> [Object|*] [prop ...]
 * "*" lists every object of the type; with props given, only those (one line per object).
 *   akbp <COMMON.ASR> -gc SEED [TURNS]: a Galactic Conquest test game (ak_gc rules; a plain test policy plays both sides with
 *   auto-resolved battles - not the game's AI) printing the rules and every turn. */
#include "assets/blueprint.h"
#include "game/ak_gc.h"
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


static void gc_print(const ak_gc *g)
{
    for (int i = 0; i < AK_GC_PLANETS; i++) printf("  %-12s s%d %s%c %3d\n", ak_gc_planet_keys[i], ak_gc_planet_defs[i].sector,
        g->planet[i].owner == 2 ? "--" : g->planet[i].owner ? "P1" : "P0", g->planet[i].home ? '*' : ' ', g->planet[i].troops);
    for (int s = 0; s < 2; s++) printf("  side %d faction %d credits %u tech %d %d %d cmdr avail %d%d%d%d bought %d%d%d%d\n", s, g->side[s].faction,
        g->side[s].credits, g->side[s].tech[0], g->side[s].tech[1], g->side[s].tech[2], g->side[s].cmdr_avail[0], g->side[s].cmdr_avail[1],
        g->side[s].cmdr_avail[2], g->side[s].cmdr_avail[3], g->side[s].cmdr_bought[0], g->side[s].cmdr_bought[1], g->side[s].cmdr_bought[2], g->side[s].cmdr_bought[3]);
}
static int gc_test(const ak_blueprints *bp, u32 seed, int turns)
{
    ak_gc_rules r; ak_gc_rules_load(bp, &r); ak_gc g;
    printf("rules: home %d nonhome %d maxhome %d caps %d/%d/%d credits %d extra %d sectorbonus %d techbonus %.2f cmdrbonus %.2f\n",
        r.init_home, r.init_nonhome, r.max_home, r.troop_cap[0], r.troop_cap[1], r.troop_cap[2], r.init_credits, r.extra_planets,
        r.sector_planet_bonus, r.tech_cost_bonus, r.cmdr_cost_bonus);
    printf("  tech costs %d/%d %d/%d %d/%d  commanders %d %d %d %d\n", r.tech_cost[0][1], r.tech_cost[0][2], r.tech_cost[1][1], r.tech_cost[1][2],
        r.tech_cost[2][1], r.tech_cost[2][2], r.cmdr_cost[0], r.cmdr_cost[1], r.cmdr_cost[2], r.cmdr_cost[3]);
    ak_gc_new(&g, &r, 4, seed); gc_print(&g);
    for (int t = 0; t < turns && g.winner < 0; t++) {
        int s = g.turn = t & 1; ak_gc_income in = ak_gc_collect(&g, &r, s);
        printf("turn %d side %d: income %u (planets %u sectors %u commander %u)", t, s, in.total, in.planets, in.sectors, in.commander);
        for (int k = 0; k < 4; k++) if (ak_gc_buy_cmdr(&g, &r, s, k)) printf(" +cmdr%d", k);
        for (int k = 0; k < 3; k++) if (g.side[s].credits > 800 && ak_gc_buy_tech(&g, &r, s, k)) printf(" +tech%d", k);
        int bought = ak_gc_buy_troops(&g, &r, s, 200); if (bought) printf(" +%d troops", bought);
        int bf = -1, bt = -1, bn = 0, best = -9999;                  /* the move: the best odds onto a non-own neighbour */
        for (int a = 0; a < AK_GC_PLANETS; a++) if (g.planet[a].owner == s)
            for (int k = 0; k < ak_gc_planet_defs[a].nnb; k++) {
                int b = ak_gc_planet_defs[a].nb[k]; if (g.planet[b].owner == s) continue;
                int n = ak_gc_move_room(&g, &r, s, a, b), v = n - g.planet[b].troops;
                if (n >= 10 && v > best) { best = v; bf = a; bt = b; bn = n; }
            }
        if (bf >= 0) {
            int res = ak_gc_move(&g, &r, s, bf, bt, bn);
            printf(" move %s->%s %d: %s", ak_gc_planet_keys[bf], ak_gc_planet_keys[bt], bn, res == AK_GC_MOVE_OCCUPIED ? "occupied" : res == AK_GC_MOVE_BATTLE ? "battle" : "?");
            for (bool second = false; res == AK_GC_MOVE_BATTLE; second = true) {
                const char *lvl = ak_gc_battle_level(&g, bt, second); bool space = !strncmp(lvl, "space", 5);
                int tr[2]; tr[s] = bn; tr[!s] = g.planet[bt].troops;
                int w = ak_gc_autoresolve(&g, &r, tr, space);
                printf(" [%s: side %d wins, left %d/%d]", lvl, w, tr[0], tr[1]);
                if (!ak_gc_result(&g, &r, s, bt, w, tr, second)) break;
            }
        }
        int h = ak_gc_home(&g, s);
        for (int i = 0; i < AK_GC_PLANETS && h >= 0; i++) if (i != h && g.planet[h].troops > 60) { int n = ak_gc_reinforce(&g, &r, s, i, 10); if (n) printf(" reinf %s +%d", ak_gc_planet_keys[i], n); }
        printf("\n");
    }
    gc_print(&g); printf("winner %d\n", g.winner);
    return 0;
}

int main(int argc, char **argv)
{
    if (argc < 3) { fprintf(stderr, "usage: akbp <COMMON.ASR> <Type> [Object|*] [prop ...]\n"); return 1; }
    ak_blob file; ak_arena a; ak_blueprints bp;
    if (!read_file(argv[1], &file)) { fprintf(stderr, "cannot read %s\n", argv[1]); return 1; }
    if (!ak_arena_init(&a, 64u << 20) || !ak_blueprints_parse(&file, &a, &bp)) { fprintf(stderr, "cannot parse\n"); return 1; }
    if (!strcmp(argv[2], "-types")) { for (u32 i = 0; i < bp.ntypes; i++) printf("%s (%u)\n", bp.types[i].name, bp.types[i].nobjects); return 0; }   /* akbp FILE -types */
    if (!strcmp(argv[2], "-gc")) return gc_test(&bp, argc > 3 ? (u32)strtoul(argv[3], 0, 0) : 1, argc > 4 ? atoi(argv[4]) : 60);
    const ak_bp_type *t = ak_bp_find_type(&bp, argv[2]);
    if (!t) { fprintf(stderr, "no type %s\n", argv[2]); return 1; }
    const char *obj = argc > 3 ? argv[3] : "*";
    for (u32 i = 0; i < t->nobjects; i++)
        if (!strcmp(obj, "*") || !strcmp(obj, t->objects[i].name)) dump(&t->objects[i], argc > 4 ? argc - 4 : 0, argv + 4);
    return 0;
}
