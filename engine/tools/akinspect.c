/* akinspect: load a level with the native engine's loaders and report what it holds.
 *   akinspect <LEVEL.PSP> [--obj out.obj] [--tex out_dir]
 * --obj writes the level geometry (engine axes) as Wavefront OBJ, one group per batch; --tex writes every texture as PPM/PAM. */
#include "../assets/asura.h"
#include "../assets/model.h"
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
    ak_model_set ms; u64 t2 = ak_plat_time_us();
    bool mok = ak_models_load(&l, &a, &ms);
    u32 lod0 = 0, tris_m = 0; for (u32 i = 0; i < ms.nmodels; i++) { lod0 += ms.models[i].lod == 0; tris_m += ms.models[i].nidx / 3; }
    printf("models     %u (%u full detail), %u skeletons, %u triangles, %.1f ms%s\n", ms.nmodels, lod0, ms.nskels, tris_m,
           (ak_plat_time_us() - t2) / 1000.0, mok ? "" : " FAILED");
    for (int i = 2; i + 1 < argc; i += 2) {
        if (!strcmp(argv[i], "--models"))
            for (u32 k = 0; k < ms.nmodels; k++) {
                const ak_model *m = &ms.models[k];
                if (!strcmp(argv[i + 1], "all") || !strcmp(argv[i + 1], m->name))
                    printf("  %-44s lod %u parts %2u bones %2u verts %5u tris %5u radius %7.2f\n", m->name, m->lod, m->nparts,
                           m->skeleton >= 0 ? ms.skels[m->skeleton].nbones : 0, m->nvtx, m->nidx / 3, m->radius);
            }
        if (!strcmp(argv[i], "--model-obj")) {               /* NAME=out.obj: the model's bind pose in model space */
            char nm[256]; snprintf(nm, sizeof nm, "%s", argv[i + 1]); char *eq = strchr(nm, '=');
            if (!eq) continue;
            *eq = 0;
            for (u32 k = 0; k < ms.nmodels; k++) if (!strcmp(ms.models[k].name, nm)) {
                const ak_model *m = &ms.models[k]; FILE *f = fopen(eq + 1, "w");
                static f32 bm[512][12]; u32 nb = 0;
                if (m->skeleton >= 0) { ak_skeleton_bind_matrices(&ms.skels[m->skeleton], bm); nb = ms.skels[m->skeleton].nbones; }
                for (u32 p = 0; p < m->nparts; p++) {
                    u32 v0 = m->nvtx, v1 = 0;
                    for (u32 x = m->parts[p].first; x < m->parts[p].first + m->parts[p].count; x++) { if (m->idx[x] < v0) v0 = m->idx[x]; if (m->idx[x] + 1 > v1) v1 = m->idx[x] + 1; }
                    (void)v0; (void)v1;
                }
                u8 *done = calloc(m->nvtx, 1); u16 *bone = calloc(m->nvtx, 2);
                for (u32 p = 0; p < m->nparts; p++) for (u32 x = m->parts[p].first; x < m->parts[p].first + m->parts[p].count; x++) bone[m->idx[x]] = m->parts[p].bone;
                for (u32 v = 0; v < m->nvtx; v++) {
                    const f32 *q = m->vtx[v].pos; f32 w[3] = { q[0], q[1], q[2] };
                    if (bone[v] < nb) { const f32 *r = bm[bone[v]]; for (int c = 0; c < 3; c++) w[c] = r[c * 4] * q[0] + r[c * 4 + 1] * q[1] + r[c * 4 + 2] * q[2] + r[c * 4 + 3]; }
                    fprintf(f, "v %.5f %.5f %.5f\n", w[0], w[1], w[2]);
                }
                for (u32 x = 0; x + 2 < m->nidx; x += 3) fprintf(f, "f %u %u %u\n", m->idx[x] + 1, m->idx[x + 1] + 1, m->idx[x + 2] + 1);
                free(done); free(bone); fclose(f);
            }
        }
        if (!strcmp(argv[i], "--obj")) write_obj(&l, argv[i + 1]);
        else if (!strcmp(argv[i], "--tex")) write_textures(&l, argv[i + 1]);
    }
    ak_arena_free(&a);
    return ok ? 0 : 1;
}
