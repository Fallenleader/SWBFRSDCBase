/* akinspect: load a level with the native engine's loaders and report what it holds.
 *   akinspect <LEVEL.PSP> [--obj out.obj] [--tex out_dir]
 * --obj writes the level geometry (engine axes) as Wavefront OBJ, one group per batch; --tex writes every texture as PPM/PAM. */
#include "../assets/asura.h"
#include "../assets/model.h"
#include "../assets/entity.h"
#include "../world/ak_collision.h"
#include "../world/ak_nav.h"
#include "../game/ak_character.h"
#include "../game/ak_conquest.h"
#include "../platform/plat.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    {   ak_conquest_map cq;
        if (ak_conquest_load(&l, &cq)) {
            u32 s1 = 0, s2 = 0, rg = 0; f32 far = 0;
            for (u32 i = 0; i < cq.nposts; i++) {
                s1 += cq.post[i].has_spawn[0]; s2 += cq.post[i].has_spawn[1]; rg += cq.post[i].has_region;
                for (int t = 0; t < 2; t++) if (cq.post[i].has_spawn[t]) { f32 dx = cq.post[i].spawn[t][0] - cq.post[i].pos[0], dz = cq.post[i].spawn[t][2] - cq.post[i].pos[2]; f32 d = sqrtf(dx * dx + dz * dz); if (d > far) far = d; }
            }
            printf("conquest   %u command posts: team-1 spawns at %u, team-2 at %u (farthest %.0f m from its post), capture regions on %u (%u regions)\n", cq.nposts, s1, s2, far, rg, cq.nregions);
        } else printf("conquest   no command posts\n");
    }
    printf("models     %u (%u full detail), %u skeletons, %u clips, %u triangles, %.1f ms%s\n", ms.nmodels, lod0, ms.nskels, ms.nclips, tris_m,
           (ak_plat_time_us() - t2) / 1000.0, mok ? "" : " FAILED");
    {   /* collision: build, then check the tree against brute force and against where things stand */
        ak_collision col; u64 t3 = ak_plat_time_us();
        bool cok = ak_collision_load(&l, &a, &col);
        printf("collision  %u triangles, %u tree nodes, %u objects, built in %.1f ms%s\n", col.ntri, col.nnode, col.nobjects, (ak_plat_time_us() - t3) / 1000.0, cok ? "" : " (none)");
        if (cok && col.ntri) {
            u32 seed = 12345, mism = 0, hits = 0, up = 0, down = 0;
            f32 mn[3] = { 1e30f, 1e30f, 1e30f }, mx[3] = { -1e30f, -1e30f, -1e30f };
            for (u32 i = 0; i < col.ntri; i++) for (int k = 0; k < 3; k++) { mn[k] = fminf(mn[k], col.tri[i].a[k]); mx[k] = fmaxf(mx[k], col.tri[i].a[k]); }
            for (int r = 0; r < 3000; r++) {
                f32 o[3], d[3], len = 0;
                for (int k = 0; k < 3; k++) { seed = seed * 1103515245u + 12345u; o[k] = mn[k] + (mx[k] - mn[k]) * ((seed >> 8) & 0xFFFF) / 65535.0f; }
                for (int k = 0; k < 3; k++) { seed = seed * 1103515245u + 12345u; d[k] = ((seed >> 8) & 0xFFFF) / 32767.5f - 1; len += d[k] * d[k]; }
                len = sqrtf(len); for (int k = 0; k < 3; k++) d[k] /= len;
                ak_col_hit h1, h2; bool b1 = ak_col_raycast(&col, o, d, 5000, 0, &h1);
                /* brute force over every triangle, same rules */
                ak_collision one = col; ak_col_node root; memset(&root, 0, sizeof root);
                for (int k = 0; k < 3; k++) { root.min[k] = -1e30f; root.max[k] = 1e30f; }
                root.count = col.ntri; root.first_or_right = 0; one.node = &root; one.nnode = 1;
                bool b2 = ak_col_raycast(&one, o, d, 5000, 0, &h2);
                if (b1 != b2 || (b1 && fabsf(h1.t - h2.t) > 1e-3f)) mism++;
                hits += b1;
            }
            for (int r = 0; r < 2000; r++) {             /* straight down, both faces allowed: which way do ground normals face? */
                f32 o[3], d[3] = { 0, -1, 0 };
                seed = seed * 1103515245u + 12345u; o[0] = mn[0] + (mx[0] - mn[0]) * ((seed >> 8) & 0xFFFF) / 65535.0f;
                seed = seed * 1103515245u + 12345u; o[2] = mn[2] + (mx[2] - mn[2]) * ((seed >> 8) & 0xFFFF) / 65535.0f; o[1] = mx[1] + 10;
                ak_collision two = col; ak_col_hit h;
                (void)two;
                /* temporarily treat all as two-sided by masking the side test: flags | 1 */
                static u16 saved[1]; (void)saved;
                for (u32 i = 0; i < col.ntri; i++) col.tri[i].flags |= 0x8000u << 0, col.tri[i].pad = col.tri[i].flags;
                for (u32 i = 0; i < col.ntri; i++) col.tri[i].flags = (u16)((col.tri[i].pad & ~0x8000u) | AK_COL_TWO_SIDED);
                if (ak_col_raycast(&col, o, d, 1e5f, 0, &h)) { if (h.normal[1] > 0) up++; else down++; }
                for (u32 i = 0; i < col.ntri; i++) col.tri[i].flags = (u16)(col.tri[i].pad & ~0x8000u);
            }
            printf("           random rays: %u hits, %u differences from brute force; first hit going down faces up %u / down %u\n", hits, mism, up, down);
            ak_nav nav; u64 t4 = ak_plat_time_us();
            if (ak_nav_load(&l, &a, &nav)) {
                f32 tl = (ak_plat_time_us() - t4) / 1000.0f;
                u32 bad = 0, sym = 0, onground = 0, comp_max = 0, ncomp = 0;
                for (u32 i = 0; i < nav.nnode; i++)
                    for (u32 k = nav.node[i].first_link; k < nav.node[i].first_link + nav.node[i].nlinks; k++) {
                        u32 t = nav.link[k].to; if (t >= nav.nnode) { bad++; continue; }
                        for (u32 k2 = nav.node[t].first_link; k2 < nav.node[t].first_link + nav.node[t].nlinks; k2++) if (nav.link[k2].to == i) { sym++; break; }
                    }
                for (u32 i = 0; i < nav.nnode; i++) {
                    f32 o[3] = { nav.node[i].pos[0], nav.node[i].pos[1] + 1.0f, nav.node[i].pos[2] }, d[3] = { 0, -1, 0 }; ak_col_hit h;
                    if (ak_col_raycast(&col, o, d, 4.0f, AK_COL_NOT_BODIES, &h)) onground++;
                }
                u32 *comp = calloc(nav.nnode, 4), *q = malloc(4u * nav.nnode);
                for (u32 i = 0; i < nav.nnode; i++) if (!comp[i]) {             /* connected parts (links as two-way) */
                    u32 qh = 0, qt = 0, sz = 0; comp[i] = ++ncomp; q[qt++] = i;
                    while (qh < qt) { u32 u = q[qh++]; sz++; for (u32 k = nav.node[u].first_link; k < nav.node[u].first_link + nav.node[u].nlinks; k++) { u32 t = nav.link[k].to; if (t < nav.nnode && !comp[t]) { comp[t] = ncomp; q[qt++] = t; } } }
                    if (sz > comp_max) comp_max = sz;
                }
                u32 seed = 99, tried = 0, ok = 0; f32 ratio = 0; u64 t5 = ak_plat_time_us(); static u32 path[65536];
                for (int r = 0; r < 200; r++) {
                    seed = seed * 1103515245u + 12345u; u32 s0 = (seed >> 8) % nav.nnode; seed = seed * 1103515245u + 12345u; u32 s1 = (seed >> 8) % nav.nnode;
                    if (comp[s0] != comp[s1] || s0 == s1) continue;
                    tried++; f32 cst; u32 pn = ak_nav_path(&nav, s0, s1, 0, path, 65536, &cst, &a);
                    if (pn) { ok++; f32 dx = nav.node[s0].pos[0] - nav.node[s1].pos[0], dz = nav.node[s0].pos[2] - nav.node[s1].pos[2]; ratio += cst / (sqrtf(dx * dx + dz * dz) + 1e-3f); }
                }
                printf("navigation %u nodes, %u links (%u to missing nodes, %u%% two-way), %u%% of nodes on collision ground, %u connected parts (largest %u), loaded in %.1f ms\n",
                       nav.nnode, nav.nlink, bad, nav.nlink ? 100 * sym / nav.nlink : 0, nav.nnode ? 100 * onground / nav.nnode : 0, ncomp, comp_max, tl);
                printf("           paths: %u of %u found within one connected part, path length / straight distance %.2f, %.3f ms per path\n", ok, tried, ok ? ratio / ok : 0,
                       tried ? (ak_plat_time_us() - t5) / 1000.0 / tried : 0);
                {   /* soldiers on foot: random input from random nav nodes; none may fall out of the world or tunnel */
                    ak_char_params cp; ak_blueprints nob; memset(&nob, 0, sizeof nob); ak_char_params_load(&nob, &cp);
                    u32 fell = 0, stuck = 0, runs = 0; f32 ground_t = 0, total_t = 0, moved = 0; u32 rs = 7;
                    f32 floor_y = 1e30f; for (u32 i = 0; i < col.ntri; i++) if (col.tri[i].a[1] < floor_y) floor_y = col.tri[i].a[1];
                    u64 tw = ak_plat_time_us();
                    for (int r = 0; r < 100 && nav.nnode; r++) {
                        rs = rs * 1103515245u + 12345u; const ak_nav_node *nn = &nav.node[(rs >> 8) % nav.nnode];
                        f32 gy; if (!ak_char_ground_below(&col, nn->pos, 4.0f, &gy)) continue;
                        ak_character ch; f32 sp[3] = { nn->pos[0], gy, nn->pos[2] }; ak_char_spawn(&ch, sp, 0); runs++;
                        ak_char_input ci = { 0, 1, 0, 0, false }; f32 start[3] = { sp[0], sp[1], sp[2] };
                        for (int f = 0; f < 60 * 20; f++) {
                            if (f % 90 == 0) { rs = rs * 1103515245u + 12345u; ci.look_x = ((rs >> 8) % 200) / 100.0f - 1.0f; ci.move_y = 1; ci.move_x = ((rs >> 16) % 3) - 1.0f; }
                            ci.jump = (f % 150) == 75;
                            ak_char_update(&ch, &cp, &col, &ci, 1.0f / 60.0f);
                            total_t += 1.0f / 60.0f; if (ch.on_ground) ground_t += 1.0f / 60.0f;
                            static f32 lastg[3]; static f32 trail[1024][4]; static int nt;
                            if (ch.on_ground) { memcpy(lastg, ch.pos, 12); nt = 0; }
                            else if (nt < 1024) { memcpy(trail[nt], ch.pos, 12); trail[nt][3] = ch.vel[1]; nt++; }
                            if (ch.pos[1] < floor_y - 5.0f) {
                                fell++;
                                if (getenv("AK_WALK_DEBUG")) { f32 gy2; bool g = ak_char_ground_below(&col, lastg, 50, &gy2);
                                    printf("  fell: last on the ground at %.1f %.1f %.1f (ground below it %s), level box x %.0f..%.0f z %.0f..%.0f\n", lastg[0], lastg[1], lastg[2], g ? "yes" : "no",
                                           col.node[0].min[0], col.node[0].max[0], col.node[0].min[2], col.node[0].max[2]);
                                    for (int q = 60; q < 120 && q < nt; q += 3) { f32 o2[3] = { trail[q][0], trail[q][1] + 0.5f, trail[q][2] }, dd2[3] = { 0, -1, 0 }; ak_col_hit hh; bool any = ak_col_raycast(&col, o2, dd2, 100, 0, &hh);
                                        printf("    air %2d: %.2f %.2f %.2f vy %.1f  below: %s %.2f flags %04x n.y %.2f\n", q, trail[q][0], trail[q][1], trail[q][2], trail[q][3], any ? "hit" : "none", any ? hh.pos[1] : 0, any ? hh.flags : 0, any ? hh.normal[1] : 0); } }
                                break;
                            }
                        }
                        f32 dx = ch.pos[0] - start[0], dz = ch.pos[2] - start[2], dd = sqrtf(dx * dx + dz * dz); moved += dd; if (dd < 2.0f) stuck++;
                    }
                    printf("on foot    %u soldiers x 20 s of random running and jumping: %u fell out of the world, %u stayed within 2 m, on the ground %.0f%% of the time, %.1f m from the start on average, %.2f ms per soldier-second\n",
                           runs, fell, stuck, total_t > 0 ? 100.0f * ground_t / total_t : 0, runs ? moved / runs : 0, total_t > 0 ? (ak_plat_time_us() - tw) / 1000.0f / total_t : 0);
                }
                free(comp); free(q);
            }
            ak_model_set ms2; ak_entity_set es;
            if (ak_models_load(&l, &a, &ms2) && ak_entities_load(&l, &ms2, &a, &es)) {
                f32 worst = 0, sum = 0; u32 n = 0, miss = 0;
                for (u32 i = 0; i < es.n; i++) if (es.e[i].placed && es.e[i].type == 27) {
                    f32 o[3] = { es.e[i].pos[0], es.e[i].pos[1] + 2, es.e[i].pos[2] }, d[3] = { 0, -1, 0 }; ak_col_hit h;
                    if (ak_col_raycast(&col, o, d, 50, 0, &h)) { f32 g = h.t - 2; sum += fabsf(g); worst = fmaxf(worst, fabsf(g)); n++; } else miss++;
                }
                printf("           vehicle spawns: %u on ground (mean height above it %.2f m, worst %.2f m), %u with no ground below\n", n, n ? sum / n : 0, worst, miss);
            }
        }
    }
    for (int i = 2; i + 1 < argc; i += 2) {
        if (!strcmp(argv[i], "--parts"))
            for (u32 k = 0; k < ms.nmodels; k++) {
                const ak_model *m = &ms.models[k];
                if (strcmp(argv[i + 1], m->name)) continue;
                const ak_skeleton *sk = m->skeleton >= 0 ? &ms.skels[m->skeleton] : NULL;
                for (u32 p = 0; p < m->nparts; p++) {
                    const ak_model_part *pt = &m->parts[p];
                    printf("  part %2u bone %2u parent %3d tex %4d flags %08x tris %4u", p, pt->bone, sk ? sk->parent[pt->bone] : -1, pt->texture, (u32)pt->flags, pt->count / 3);
                    if (sk) printf("  bind %7.3f %7.3f %7.3f  q %6.3f %6.3f %6.3f %6.3f", sk->world_t[pt->bone][0], sk->world_t[pt->bone][1], sk->world_t[pt->bone][2],
                                   sk->world_q[pt->bone].x, sk->world_q[pt->bone].y, sk->world_q[pt->bone].z, sk->world_q[pt->bone].w);
                    if (pt->count) { f32 mn[3] = { 1e9f, 1e9f, 1e9f }, mx[3] = { -1e9f, -1e9f, -1e9f };
                        for (u32 q = pt->first; q < pt->first + pt->count; q++) for (int c = 0; c < 3; c++) { f32 v = m->vtx[m->idx[q]].pos[c]; if (v < mn[c]) mn[c] = v; if (v > mx[c]) mx[c] = v; }
                        printf("  local %.2f..%.2f %.2f..%.2f %.2f..%.2f", mn[0], mx[0], mn[1], mx[1], mn[2], mx[2]); }
                    printf("\n");
                }
            }
        if (!strcmp(argv[i], "--enti")) {                                    /* entities of one type: id, model, place */
            ak_entity_set es; u32 want = (u32)atoi(argv[i + 1]);
            if (ak_entities_load(&l, &ms, &a, &es))
                for (u32 k = 0; k < es.n; k++) if (es.e[k].type == want)
                    printf("  %05x type %u model %s / %s  pos %.1f %.1f %.1f\n", es.e[k].id, es.e[k].type,
                           es.e[k].model[0] >= 0 ? ms.models[es.e[k].model[0]].name : "-", es.e[k].model[1] >= 0 ? ms.models[es.e[k].model[1]].name : "-",
                           es.e[k].pos[0], es.e[k].pos[1], es.e[k].pos[2]);
        }
        if (!strcmp(argv[i], "--markers"))
            for (u32 k = 0; k < ms.nmodels; k++) if (!strcmp(argv[i + 1], ms.models[k].name))
                for (u32 q = 0; q < ms.models[k].nmarkers; q++) { const ak_marker *mk = &ms.models[k].markers[q];
                    printf("  marker %-12s bone %u at %.2f %.2f %.2f  rows %.2f %.2f %.2f / %.2f %.2f %.2f / %.2f %.2f %.2f\n", mk->name, mk->bone, mk->m[3], mk->m[7], mk->m[11], mk->m[0], mk->m[1], mk->m[2], mk->m[4], mk->m[5], mk->m[6], mk->m[8], mk->m[9], mk->m[10]); }
        if (!strcmp(argv[i], "--models"))
            for (u32 k = 0; k < ms.nmodels; k++) {
                const ak_model *m = &ms.models[k];
                if (!strcmp(argv[i + 1], "all") || !strcmp(argv[i + 1], m->name))
                    printf("  %-44s lod %u parts %2u bones %2u verts %5u tris %5u radius %7.2f\n", m->name, m->lod, m->nparts,
                           m->skeleton >= 0 ? ms.skels[m->skeleton].nbones : 0, m->nvtx, m->nidx / 3, m->radius);
            }
        if (!strcmp(argv[i], "--clip"))
            for (u32 k = 0; k < ms.nclips; k++) if (!strcmp(ms.clips[k].name, argv[i + 1])) {
                const ak_anim_clip *c = &ms.clips[k];
                printf("clip %s bones %u channels %u duration %.3f keys %u/%u\n", c->name, c->nbones, c->nchannels, c->duration, c->nrot, c->npos);
                for (u32 r = 0; r < c->nrot && r < 8; r++) printf("  rot %u t %u  %.4f %.4f %.4f %.4f\n", r, c->rtime[r], c->rot[r].x, c->rot[r].y, c->rot[r].z, c->rot[r].w);
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
