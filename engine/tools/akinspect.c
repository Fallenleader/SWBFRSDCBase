/* akinspect: load a level with the native engine's loaders and report what it holds.
 *   akinspect <LEVEL.PSP> [--obj out.obj] [--tex out_dir]
 * --obj writes the level geometry (engine axes) as Wavefront OBJ, one group per batch; --tex writes every texture as PPM/PAM. */
#include "../assets/asura.h"
#include "../platform/plat.h"
#include <stdio.h>
#include <stdlib.h>

static void write_obj(const ak_level *l, const char *path)
{
    FILE *f = fopen(path, "w");
    if (!f) { AK_ERROR("inspect", "cannot write %s", path); return; }
    const ak_level_geom *g = &l->geom;
    for (u32 i = 0; i < g->nvtx; i++) fprintf(f, "v %.5f %.5f %.5f\n", g->vtx[i].pos[0], g->vtx[i].pos[1], g->vtx[i].pos[2]);
    for (u32 i = 0; i < g->nvtx; i++) fprintf(f, "vt %.5f %.5f\n", g->vtx[i].uv[0], 1.0f - g->vtx[i].uv[1]);
    for (u32 b = 0; b < g->nbatch; b++) {
        const ak_batch *bt = &g->batch[b];
        fprintf(f, "g o%03u_m%u%s\n", bt->object, bt->material, bt->layer ? "_blend" : "");
        for (u32 i = bt->first; i < bt->first + bt->count; i += 3)
            fprintf(f, "f %u/%u %u/%u %u/%u\n", g->idx[i] + 1, g->idx[i] + 1, g->idx[i + 1] + 1, g->idx[i + 1] + 1, g->idx[i + 2] + 1, g->idx[i + 2] + 1);
    }
    fclose(f);
}

static void write_textures(const ak_level *l, const char *dir)
{
    for (u32 i = 0; i < l->ntex; i++) {
        const ak_texture *t = &l->tex[i];
        char p[600]; snprintf(p, sizeof p, "%s/%03u_%08x.pam", dir, i, t->name_hash);
        FILE *f = fopen(p, "wb");
        if (!f) continue;
        u32 *px = (u32 *)malloc((size_t)t->width * t->height * 4);
        ak_texture_expand(t, 0, px);
        fprintf(f, "P7\nWIDTH %u\nHEIGHT %u\nDEPTH 4\nMAXVAL 255\nTUPLTYPE RGB_ALPHA\nENDHDR\n", t->width, t->height);
        fwrite(px, 4, (size_t)t->width * t->height, f);
        free(px); fclose(f);
    }
}

int main(int argc, char **argv)
{
    if (argc < 2) { fprintf(stderr, "usage: akinspect <LEVEL.PSP> [--obj out.obj] [--tex dir]\n"); return 2; }
    ak_arena a;
    if (!ak_arena_init(&a, 256u << 20)) return 1;
    ak_level l;
    u64 t0 = ak_plat_time_us();
    bool ok = ak_level_load(argv[1], &a, &l);
    u64 t1 = ak_plat_time_us();
    const ak_level_geom *g = &l.geom;
    u32 tris = g->nidx / 3, opq = 0, mats_used = 0, mats_tex = 0, objs = 0;
    static u8 mu[0x8000]; static u8 ou[0x10000];
    for (u32 b = 0; b < g->nbatch; b++) {
        const ak_batch *bt = &g->batch[b];
        if (!bt->layer) opq += bt->count / 3;
        if (bt->material < 0x8000 && !mu[bt->material]) { mu[bt->material] = 1; mats_used++; if (bt->material < l.nmat && l.mat[bt->material].texture >= 0) mats_tex++; }
        if (!ou[bt->object]) { ou[bt->object] = 1; objs++; }
    }
    printf("level      %s (%s, loaded in %.1f ms, %.1f MB used)\n", argv[1], ok ? "ok" : "FAILED", (t1 - t0) / 1000.0, a.used / 1048576.0);
    printf("chunks     %u\n", l.nchunks);
    printf("textures   %u (%u not supported)\n", l.ntex, l.tex_unsupported);
    printf("materials  %u, %u used by the geometry, %u of those with a texture found\n", l.nmat, mats_used, mats_tex);
    printf("geometry   %u strips, %u vertices as stored -> %u triangles (%u opaque, %u blend layer)\n", g->src_strips, g->src_verts, tris, opq, tris - opq);
    printf("batches    %u (%u objects with geometry, %u object slots), %u overlay triangles\n", g->nbatch, objs, g->nobj, g->overlay_tris);
    for (int i = 2; i + 1 < argc; i += 2) {
        if (!strcmp(argv[i], "--obj")) write_obj(&l, argv[i + 1]);
        else if (!strcmp(argv[i], "--tex")) write_textures(&l, argv[i + 1]);
    }
    ak_arena_free(&a);
    return ok ? 0 : 1;
}
