/* akinspect: load a level with the native engine's loaders and report what it holds.
 *   akinspect <LEVEL.PSP> [--obj out.obj] [--tex out_dir]
 * --obj writes the level geometry (engine axes) as Wavefront OBJ, one group per batch; --tex writes every texture as PPM/PAM. */
#define BODY_IGNORE_I (AK_COL_NOT_BODIES | AK_COL_NOT_SOLDIERS)
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
            u32 pts = 0, own = 0, rg = 0, full = 0; f32 far = 0;
            for (u32 i = 0; i < cq.nposts; i++) {
                const ak_post *po = &cq.post[i]; s32 w = 0; rg += po->has_region;
                for (u32 k = 0; k < po->nloc; k++) {
                    pts++; w += po->loc[k].weight; if (!po->loc[k].own) continue; own++;
                    f32 dx = po->loc[k].pos[0] - po->pos[0], dz = po->loc[k].pos[2] - po->pos[2], d = sqrtf(dx * dx + dz * dz); if (d > far) far = d;
                }
                full += w >= 100;
            }
            printf("conquest   %u command posts: %u spawn points (%u placed, farthest %.0f m from its post), weights reach 100 on %u posts, capture regions on %u (%u regions)\n",
                   cq.nposts, pts, own, far, full, rg, cq.nregions);
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
                        ak_char_input ci = { 0, 1, 0, 0, false, false }; f32 start[3] = { sp[0], sp[1], sp[2] };
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
                    {   /* the navigation links on foot: the game's bots walk them, so a soldier steered along one must get to its end */
                        u32 tried = 0, fails = 0, shown = 0; u32 rs2 = 11;
                        for (int r = 0; r < 600 && nav.nnode; r++) {
                            rs2 = rs2 * 1103515245u + 12345u; u32 a = (rs2 >> 8) % nav.nnode; const ak_nav_node *na = &nav.node[a];
                            if (!na->nlinks) continue;
                            const ak_nav_node *nb = &nav.node[nav.link[na->first_link + (rs2 >> 20) % na->nlinks].to];
                            f32 ga, gb; if (!ak_char_ground_below(&col, na->pos, 3.0f, &ga) || !ak_char_ground_below(&col, nb->pos, 3.0f, &gb)) continue;
                            f32 len = sqrtf((nb->pos[0] - na->pos[0]) * (nb->pos[0] - na->pos[0]) + (nb->pos[2] - na->pos[2]) * (nb->pos[2] - na->pos[2]));
                            if (len < 1.5f || len > 40) continue;
                            ak_character ch; f32 sp[3] = { na->pos[0], ga, na->pos[2] }; ak_char_spawn(&ch, sp, 0); tried++;
                            ak_char_input ci = { 0, 1, 0, 0, false, false }; bool ok = false; int f;
                            for (f = 0; f < (int)((len / cp.run_speed * 2 + 2) * 60); f++) {
                                f32 dx = nb->pos[0] - ch.pos[0], dz = nb->pos[2] - ch.pos[2];
                                if (dx * dx + dz * dz < 1.0f) { ok = true; break; }
                                ch.yaw = atan2f(-dx, -dz);
                                ci.jump = getenv("AK_WALK_JUMP") && ch.on_ground && (f % 30) == 29;    /* (a jump every half second) */
                                ak_char_update(&ch, &cp, &col, &ci, 1.0f / 60.0f);
                            }
                            if (!ok) { fails++;
                                if (getenv("AK_WALK_DEBUG") && shown++ < 25) printf("  link stuck (link flags %04x, nodes %04x %04x): %.1f %.1f %.1f -> %.1f %.1f %.1f (%.1f m), ended at %.1f %.1f %.1f %s\n", nav.link[na->first_link + (rs2 >> 20) % na->nlinks].flags, na->flags, nb->flags, sp[0], sp[1], sp[2], nb->pos[0], gb, nb->pos[2], len,
                                                     ch.pos[0], ch.pos[1], ch.pos[2], ch.on_ground ? "on the ground" : "in the air"); }
                        }
                        if (getenv("AK_PROFILE")) { f32 a0, b0, a1, b1; if (sscanf(getenv("AK_PROFILE"), "%f,%f,%f,%f", &a0, &b0, &a1, &b1) == 4)
                            for (int s = 0; s <= 24; s++) { f32 x = a0 + (a1 - a0) * s / 24, z = b0 + (b1 - b0) * s / 24, top = 30; printf("  profile %5.2f %7.2f:", x, z);
                                for (int k = 0; k < 5; k++) { f32 o[3] = { x, top, z }, d[3] = { 0, -1, 0 }; ak_col_hit h; if (!ak_col_raycast(&col, o, d, 80, 0, &h)) break;
                                    printf("  %.2f (n.y %.2f fl %04x)", h.pos[1], h.normal[1], h.flags); top = h.pos[1] - 0.01f; }
                                printf("\n"); } }
                        {   /* false blocks: a soldier that stops though the way ahead is a low step with no wall */
                            u32 runs = 0, blocked = 0, shown = 0, knee = 0; u32 r3 = 99;
                            for (int r = 0; r < 3000 && nav.nnode; r++) {
                                r3 = r3 * 1103515245u + 12345u; const ak_nav_node *nn = &nav.node[(r3 >> 8) % nav.nnode];
                                r3 = r3 * 1103515245u + 12345u; f32 yaw = (r3 >> 8) % 6283 / 1000.0f, off = (r3 >> 20) % 800 / 100.0f;
                                f32 s0[3] = { nn->pos[0] - sinf(yaw + 1.3f) * off, nn->pos[1], nn->pos[2] - cosf(yaw + 1.3f) * off }, gy;
                                if (!ak_char_ground_below(&col, s0, 3.0f, &gy)) continue;
                                ak_character ch; s0[1] = gy; ak_char_spawn(&ch, s0, yaw); ak_char_input ci = { 0, 1, 0, 0, false, false };
                                for (int f = 0; f < 10; f++) ak_char_update(&ch, &cp, &col, &(ak_char_input){ 0 }, 1.0f / 60.0f);   /* settle */
                                if (!ch.on_ground) continue;
                                f32 a0[3] = { ch.pos[0], ch.pos[1], ch.pos[2] }; runs++;
                                for (int f = 0; f < 60; f++) ak_char_update(&ch, &cp, &col, &ci, 1.0f / 60.0f);
                                f32 dx = ch.pos[0] - a0[0], dz = ch.pos[2] - a0[2];
                                if (dx * dx + dz * dz > 1.0f || !ch.on_ground) continue;
                                /* why: the ground over the next 1.2 m and a wall ray at knee, chest and head height */
                                f32 fx = -sinf(yaw), fz = -cosf(yaw), rise = -1e9f, base = ch.pos[1]; bool hole = false;
                                for (int k = 1; k <= 6; k++) { f32 q[3] = { ch.pos[0] + fx * 0.2f * k, base + 1.6f, ch.pos[2] + fz * 0.2f * k }, g;
                                    ak_col_hit hh; f32 dn[3] = { 0, -1, 0 };
                                    if (ak_col_raycast(&col, q, dn, 3.0f, BODY_IGNORE_I, &hh)) { g = hh.pos[1] - base; if (g > rise) rise = g; if (hh.normal[1] < cp.walkable) rise = 9; } else hole = true; }
                                bool wall = false; f32 hs[3] = { 0.5f, 1.0f, 1.6f };
                                for (int k = 0; k < 3; k++) { f32 o[3] = { ch.pos[0], base + hs[k], ch.pos[2] }, dd[3] = { fx, 0, fz }; ak_col_hit hh; if (ak_col_raycast(&col, o, dd, cp.radius + 0.6f, BODY_IGNORE_I, &hh)) wall = true; }
                                { bool upper = false; for (int k = 1; k < 3; k++) { f32 o[3] = { ch.pos[0], base + hs[k], ch.pos[2] }, dd[3] = { fx, 0, fz }; ak_col_hit hh; if (ak_col_raycast(&col, o, dd, cp.radius + 0.6f, BODY_IGNORE_I, &hh)) upper = true; }
                                  if (!upper && !hole && rise > cp.step && rise < 1.0f) { knee++; if (getenv("AK_WALK_DEBUG") && knee < 8) printf("  knee-high edge at %.2f %.2f %.2f facing %.2f (rises %.2f m)\n", ch.pos[0], ch.pos[1], ch.pos[2], yaw, rise); }
                                }
                                if (wall || hole || rise > cp.step) continue;
                                blocked++;
                                if (getenv("AK_WALK_DEBUG") && shown++ < 20) printf("  false block at %.2f %.2f %.2f facing %.2f (ground ahead rises %.2f m)\n", ch.pos[0], ch.pos[1], ch.pos[2], yaw, rise);
                            }
                            printf("blocks     %u one-second runs: %u stopped with no wall or high step ahead, %u at a knee-high edge (%.2f..1 m, open above)\n", runs, blocked, knee, cp.step);
                        }
                        if (getenv("AK_NAVPATH")) { f32 A[3], B[3]; if (sscanf(getenv("AK_NAVPATH"), "%f,%f,%f,%f,%f,%f", &A[0], &A[1], &A[2], &B[0], &B[1], &B[2]) == 6) {
                            s32 s = ak_nav_nearest(&nav, A, 40), g = ak_nav_nearest(&nav, B, 40); static u32 out[4096]; f32 cost;
                            u32 k = s >= 0 && g >= 0 ? ak_nav_path(&nav, (u32)s, (u32)g, 0, out, 4096, &cost, &a) : 0;
                            for (u32 q = 0; q < k; q++) printf("  navpath %.1f %.1f %.1f\n", nav.node[out[q]].pos[0], nav.node[out[q]].pos[1], nav.node[out[q]].pos[2]); } }
                        if (getenv("AK_PICK")) { f32 P[5]; if (sscanf(getenv("AK_PICK"), "%f,%f,%f,%f,%f", &P[0], &P[1], &P[2], &P[3], &P[4]) == 5)
                            for (int s = -6; s <= 6; s++) { f32 yw = P[3] + s * 0.08f, d[3] = { -sinf(yw) * cosf(P[4]), sinf(P[4]), -cosf(yw) * cosf(P[4]) }, best = 1e9f; s32 bb = -1; u32 bt = 0;
                                const ak_level_geom *g = &l.geom;
                                for (u32 b = 0; b < g->nbatch; b++) for (u32 t = g->batch[b].first; t + 2 < g->batch[b].first + g->batch[b].count; t += 3) {
                                    const f32 *A = g->vtx[g->idx[t]].pos, *B = g->vtx[g->idx[t + 1]].pos, *C = g->vtx[g->idx[t + 2]].pos;
                                    f32 e1[3] = { B[0] - A[0], B[1] - A[1], B[2] - A[2] }, e2[3] = { C[0] - A[0], C[1] - A[1], C[2] - A[2] };
                                    f32 pv[3] = { d[1] * e2[2] - d[2] * e2[1], d[2] * e2[0] - d[0] * e2[2], d[0] * e2[1] - d[1] * e2[0] }, det = e1[0] * pv[0] + e1[1] * pv[1] + e1[2] * pv[2];
                                    if (fabsf(det) < 1e-9f) continue;
                                    f32 inv = 1 / det, tv[3] = { P[0] - A[0], P[1] - A[1], P[2] - A[2] };
                                    f32 u = (tv[0] * pv[0] + tv[1] * pv[1] + tv[2] * pv[2]) * inv; if (u < 0 || u > 1) continue;
                                    f32 qv[3] = { tv[1] * e1[2] - tv[2] * e1[1], tv[2] * e1[0] - tv[0] * e1[2], tv[0] * e1[1] - tv[1] * e1[0] };
                                    f32 vv = (d[0] * qv[0] + d[1] * qv[1] + d[2] * qv[2]) * inv; if (vv < 0 || u + vv > 1) continue;
                                    f32 tt = (e2[0] * qv[0] + e2[1] * qv[1] + e2[2] * qv[2]) * inv; if (tt > 0.05f && tt < best) { best = tt; bb = (s32)b; bt = t; } }
                                if (bb < 0) { printf("  pick %+.2f: nothing\n", s * 0.08f); continue; }
                                const ak_batch *B = &g->batch[bb]; const ak_material *mt = B->material < l.nmat ? &l.mat[B->material] : NULL;
                                const ak_vtx *V = &g->vtx[g->idx[bt]];
                                printf("  pick %+.2f: %.1f m  object %u layer %u material %u flags %05x mode %d tex %s  col %u %u %u %u\n", s * 0.08f, best, B->object, B->layer, B->material,
                                       mt ? mt->flags : 0, mt ? mt->mode : 0, mt && mt->texture >= 0 ? l.tex[mt->texture].name : "-", V->col[0], V->col[1], V->col[2], V->col[3]); } }
                        if (getenv("AK_MATS")) for (u32 mi = 0; mi < l.nmat; mi++) { const ak_material *mt = &l.mat[mi]; double cs = 0; u32 cn = 0;
                            for (u32 b = 0; b < l.geom.nbatch; b++) if (l.geom.batch[b].material == mi && l.geom.batch[b].layer == 0) for (u32 t = l.geom.batch[b].first; t < l.geom.batch[b].first + l.geom.batch[b].count; t++) { const u8 *c = l.geom.vtx[l.geom.idx[t]].col; cs += (c[0] + c[1] + c[2]) / 3.0; cn++; }
                            printf("  mat %2u flags %05x mode %2d extra %3d tex %d %d %d %d %d %d  verts %5u mean col %5.1f  %s\n", mi, mt->flags, mt->mode, mt->extra, mt->tex[0], mt->tex[1], mt->tex[2], mt->tex[3], mt->tex[4], mt->tex[5], cn, cn ? cs / cn : 0, mt->texture >= 0 ? l.tex[mt->texture].name : "-"); }
                        if (getenv("AK_TRIS_NEAR")) { f32 P[4]; if (sscanf(getenv("AK_TRIS_NEAR"), "%f,%f,%f,%f", &P[0], &P[1], &P[2], &P[3]) == 4) {
                            const ak_level_geom *g = &l.geom;
                            for (u32 b = 0; b < g->nbatch; b++) for (u32 t = g->batch[b].first; t + 2 < g->batch[b].first + g->batch[b].count; t += 3) {
                                const ak_vtx *A = &g->vtx[g->idx[t]], *B = &g->vtx[g->idx[t + 1]], *C = &g->vtx[g->idx[t + 2]];
                                f32 c[3] = { (A->pos[0] + B->pos[0] + C->pos[0]) / 3, (A->pos[1] + B->pos[1] + C->pos[1]) / 3, (A->pos[2] + B->pos[2] + C->pos[2]) / 3 };
                                if ((c[0] - P[0]) * (c[0] - P[0]) + (c[1] - P[1]) * (c[1] - P[1]) + (c[2] - P[2]) * (c[2] - P[2]) > P[3] * P[3]) continue;
                                f32 e1[3] = { B->pos[0] - A->pos[0], B->pos[1] - A->pos[1], B->pos[2] - A->pos[2] }, e2[3] = { C->pos[0] - A->pos[0], C->pos[1] - A->pos[1], C->pos[2] - A->pos[2] };
                                f32 cx = e1[1] * e2[2] - e1[2] * e2[1], cy = e1[2] * e2[0] - e1[0] * e2[2], cz = e1[0] * e2[1] - e1[1] * e2[0], wa = 0.5f * sqrtf(cx * cx + cy * cy + cz * cz);
                                f32 ua = 0.5f * fabsf((B->uv[0] - A->uv[0]) * (C->uv[1] - A->uv[1]) - (C->uv[0] - A->uv[0]) * (B->uv[1] - A->uv[1]));
                                printf("  tri b%u o%u m%u ov%u area %.2f uvarea %.4f dens %.4f  uv (%.2f %.2f) (%.2f %.2f) (%.2f %.2f) at %.1f %.1f %.1f\n", b, g->batch[b].object, g->batch[b].material, g->batch[b].overlay, wa, ua, wa > 1e-6f ? ua / wa : 0,
                                       A->uv[0], A->uv[1], B->uv[0], B->uv[1], C->uv[0], C->uv[1], c[0], c[1], c[2]); } } }
                        printf("on links   %u navigation links walked: %u not completed\n", tried, fails);
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
        if (!strcmp(argv[i], "--markers")) for (u32 k = 0; k < ms.nmodels; k++) if (!strcmp(argv[i + 1], ms.models[k].name)) printf("  box %.2f %.2f %.2f .. %.2f %.2f %.2f\n", ms.models[k].bmin[0], ms.models[k].bmin[1], ms.models[k].bmin[2], ms.models[k].bmax[0], ms.models[k].bmax[1], ms.models[k].bmax[2]);
        if (!strcmp(argv[i], "--atab"))                                      /* the animation tables: rows of each set's body column */
            for (u32 k = 0; k < ms.ntables; k++) {
                const ak_anim_table *t = &ms.tables[k]; u32 n = 0, f = 0;
                for (u32 q = 0; q < t->sets * t->rows * t->cols; q++) { n++; f += t->clip[q] >= 0; }
                printf("  table %08x: %u sets x %u rows x %u columns, %u of %u cells resolve to clips\n", t->name_hash, t->sets, t->rows, t->cols, f, n);
                for (u32 r = 0; r < t->rows; r++) { s32 c0 = AK_ATAB(t, t->sets > 4 ? 4 : 0, r, 0); printf("    row %2u: %s\n", r, c0 >= 0 ? ms.clips[c0].name : "-"); }
            }
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
                for (u32 ch = 0; ch < c->nchannels; ch++) { const ak_anim_channel *a = &c->chan[ch];   /* each channel's travel: first and last position key */
                    if (a->pos_count < 2) continue;
                    const f32 *p0 = c->pos[a->pos_first], *p1 = c->pos[a->pos_first + a->pos_count - 1];
                    if (ch < 2 || ch == c->nchannels - 1) printf("  channel %u: %u pos keys, %.3f %.3f %.3f -> %.3f %.3f %.3f\n", ch, a->pos_count, p0[0], p0[1], p0[2], p1[0], p1[1], p1[2]); }
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
