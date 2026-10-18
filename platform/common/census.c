/* ANALYSIS BUILD ONLY (make census): attributes every GE command the interpreter executes, and the first vertex of every
 * primitive, to the code location that stored it (see RS_CENSUS in src/game/rs_base.h).  Output: RS_CENSUS_OUT (default
 * census.txt) with one line per (kind, writer pc, command): count.  tools/census/resolve.py maps writer pcs to functions. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <sys/mman.h>
typedef uint32_t u32;

u32 *rs_census_shadow;

typedef struct { u32 pc, key, n; } ent_t;          /* key = kind << 8 | cmd ; kind 0 = command word, 1 = vertex data */
#define HSIZE (1u << 20)
static ent_t *tab;
static unsigned long long total, untagged;

static void dump(void){
    const char *o = getenv("RS_CENSUS_OUT"); FILE *f = fopen(o ? o : "census.txt", "w"); if (!f) return;
    fprintf(f, "# total %llu untagged %llu\n", total, untagged);
    for (u32 i = 0; i < HSIZE; i++) if (tab[i].n) fprintf(f, "%c %08x %02x %u\n", (tab[i].key >> 8) ? 'V' : 'C', tab[i].pc, tab[i].key & 0xFF, tab[i].n);
    fclose(f); }

__attribute__((constructor)) static void census_init(void){
    static const u32 at[] = {0x50000000u, 0x60000000u, 0x70000000u, 0x40000000u, 0x30000000u, 0x20000000u, 0x90000000u, 0xA0000000u};
    for (unsigned i = 0; i < sizeof at / sizeof at[0]; i++) {              /* 256 MB clear of the guest's low 256 MB */
        void *p = mmap((void *)(uintptr_t)at[i], 0x10000000u, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE | MAP_FIXED_NOREPLACE, -1, 0);
        if (p != MAP_FAILED && (uintptr_t)p == at[i]) { rs_census_shadow = p; break; }
        if (p != MAP_FAILED) munmap(p, 0x10000000u); }
    fprintf(stderr, "[CENSUS] shadow table %s %p\n", rs_census_shadow ? "at" : "NOT MAPPED", (void *)rs_census_shadow);
    if (!rs_census_shadow) return;
    tab = calloc(HSIZE, sizeof *tab); atexit(dump); }

static void hit(u32 pc, u32 key){
    u32 h = (pc * 2654435761u ^ key * 40503u) & (HSIZE - 1);
    for (;;) { ent_t *e = &tab[h];
        if (!e->n) { e->pc = pc; e->key = key; e->n = 1; return; }
        if (e->pc == pc && e->key == key) { e->n++; return; }
        h = (h + 1) & (HSIZE - 1); } }

void rs_census_cmd(u32 at, u32 cmd, u32 vaddr){
    if (!tab) return;
    if ((++total & ((1u << 22) - 1)) == 0) dump();     /* periodic: the harness may end without running exit handlers */
    u32 pc = at < 0x10000000u ? rs_census_shadow[at >> 2] : 0; if (!pc) untagged++;
    hit(pc, cmd);
    if (vaddr && vaddr < 0x10000000u) hit(rs_census_shadow[vaddr >> 2], 0x100 | cmd); }
