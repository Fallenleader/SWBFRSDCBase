/* Milestone 1.2: the level viewer.  Loads every level from the game's files and draws it natively, with a free camera and
 * the frame's figures on screen.  Same code on every device; the platform and renderer back ends are what differ.
 *
 * Controls: left stick move, right stick look, L / R down / up, hold Cross to move faster, START next level,
 * TRIANGLE previous level, SELECT figures on/off.
 * CIRCLE: model gallery (the level's models in their bind pose): d-pad left / right previous / next model, right stick turns the
 * view, left stick up / down zooms. */
#include "../core/ak_core.h"
#include "../core/ak_vfs.h"
#include "../core/ak_settings.h"
#include "../render/ak_scene.h"
#include "../assets/model.h"
#include "../assets/entity.h"
#include "../assets/blueprint.h"
#include "../game/ak_soldier.h"
#include "play.h"
#include "../platform/plat.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef AK_BUILD_ID
#define AK_BUILD_ID "dev"
#endif

typedef struct { char path[128]; char label[64]; } level_ref;
static level_ref levels[96];
static int nlevels;

static void find_levels(ak_vfs *v, ak_arena *tmp)
{
    static const char *eras[] = { "CLASSIC", "PREQUEL", "CAMPAIGN" };
    for (int e = 0; e < 3; e++) {
        char dir[96]; snprintf(dir, sizeof dir, "PSP_GAME/USRDIR/ENVS/%s", eras[e]);
        const char **names; int n = ak_vfs_list(v, dir, tmp, &names);
        for (int i = 0; i < n && nlevels < (int)AK_ARRAY_LEN(levels); i++) {
            size_t l = strlen(names[i]);
            if (l < 5 || strcmp(names[i] + l - 4, ".PSP")) continue;
            snprintf(levels[nlevels].path, sizeof levels[nlevels].path, "%s/%s", dir, names[i]);
            snprintf(levels[nlevels].label, sizeof levels[nlevels].label, "%s %.*s", eras[e], (int)(l - 4), names[i]);
            nlevels++;
        }
    }
}

typedef struct { ak_v3 pos; f32 yaw, pitch; } camera;

int main(int argc, char **argv)
{
    if (!ak_plat_init()) return 1;
    char sp[600]; snprintf(sp, sizeof sp, "%s/settings.txt", ak_plat_user_dir());
    ak_settings_load(sp);
    AK_INFO("aurek", "Aurek level viewer, build %s", AK_BUILD_ID);

    int nd; const char *const *dirs = ak_plat_data_dirs(&nd);
    ak_vfs *vfs = ak_vfs_open(dirs, nd);
    if (!vfs) { AK_ERROR("aurek", "no game files found (game.iso or GAME/PSP_GAME in %s%s)", nd ? dirs[0] : "?", nd > 1 ? " or the other data folders" : ""); return 1; }
    AK_INFO("aurek", "game files: %s", ak_vfs_describe(vfs));

    ak_gfx_config gc = { ak_setting_int("AK_WIDTH", 960), ak_setting_int("AK_HEIGHT", 544), ak_setting_int("AK_VSYNC", 1) != 0, ak_plat_user_dir(), "Aurek" };
    if (!ak_gfx_init(&gc)) { AK_ERROR("aurek", "renderer failed to start"); return 1; }
    AK_INFO("aurek", "renderer: %s", ak_gfx_name());

    ak_arena tmp, lvl;
    if (!ak_arena_init(&tmp, 1u << 20) || !ak_arena_init(&lvl, (size_t)ak_setting_int("AK_LEVEL_MB", 48) << 20)) return 1;
    find_levels(vfs, &tmp);
    ak_arena data; ak_blueprints bps; memset(&bps, 0, sizeof bps);              /* the game's blueprints: once, for every level */
    if (ak_arena_init(&data, 2u << 20)) {
        ak_blob cb;
        if (ak_vfs_read(vfs, "PSP_GAME/USRDIR/MISC/COMMON.ASR", &data, &cb) && ak_blueprints_parse(&cb, &data, &bps)) {
            u32 no = 0; for (u32 i = 0; i < bps.ntypes; i++) no += bps.types[i].nobjects;
            AK_INFO("aurek", "blueprints: %u types, %u objects, %.0f KB", bps.ntypes, no, data.used / 1024.0);
        } else AK_WARN("aurek", "MISC/COMMON.ASR: no blueprints (soldiers get no heads)");
    }
    if (!nlevels) { AK_ERROR("aurek", "no levels in PSP_GAME/USRDIR/ENVS"); return 1; }
    int cur = 0;
    const char *want = ak_setting_str("AK_LEVEL", "CLASSIC HOTH");
    for (int i = 0; i < nlevels; i++) if (!strcmp(levels[i].label, want)) cur = i;

    const char *shot = ak_setting_str("AK_SCREENSHOT", NULL);
    int shot_frame = ak_setting_int("AK_SCREENSHOT_FRAME", 3), frame = 0;
    const char *camset = ak_setting_str("AK_CAMERA", NULL);
    bool show = ak_setting_int("AK_SHOW_FIGURES", 1) != 0;

    ak_level level; ak_scene_level scene; camera cam; bool loaded = false;
    ak_model_set models; ak_scene_models mscene; u32 *gallery = NULL; u32 ngallery = 0, gsel = 0; bool gallery_on = ak_setting_int("AK_GALLERY", 0) != 0;
    f32 orbit_yaw = ak_setting_float("AK_GALLERY_YAW", 0.6f), orbit_pitch = -0.25f, orbit_zoom = ak_setting_float("AK_GALLERY_ZOOM", 1.0f); static f32 bones[512][12];
    static ak_quat lq[512]; static f32 lt[512][3]; s32 gclip = -1; f32 anim_t = 0;
    int col1 = ak_setting_int("AK_COLOUR1", -1), col2 = ak_setting_int("AK_COLOUR2", -1), ghead = ak_setting_int("AK_HEAD", 0); ak_model_colours gcol;
    ak_soldier_look look; bool has_look = false;
    static ak_play play; bool playing = ak_setting_int("AK_PLAY", 0) != 0;
    ak_entity_set ents; f32 (*bindm)[12] = NULL; u32 *bind_first = NULL; bool show_ents = ak_setting_int("AK_ENTITIES", 1) != 0;
    ak_input in; memset(&in, 0, sizeof in);
    u64 last = ak_plat_time_us(), fps_t0 = last; int fps_frames = 0; f32 fps = 0, frame_ms = 0, load_ms = 0;
    ak_gfx_stats gs; memset(&gs, 0, sizeof gs);
    for (;;) {
        if (!loaded) {
            u64 t0 = ak_plat_time_us();
            ak_arena_reset(&lvl);
            ak_blob b;
            if (!ak_vfs_read(vfs, levels[cur].path, &lvl, &b) || !ak_level_parse(&b, &lvl, &level) || !ak_scene_level_init(&scene, &level, &lvl)) {
                AK_ERROR("aurek", "%s did not load", levels[cur].path); cur = (cur + 1) % nlevels; continue;
            }
            if (!ak_models_load(&level, &lvl, &models) || !ak_scene_models_init(&mscene, &models, &scene, &lvl)) AK_WARN("aurek", "models did not load");
            ak_entities_load(&level, &models, &lvl, &ents);
            {   /* bind-pose bone matrices of every model, once (placed models are drawn in their bind pose for now) */
                u32 nb = 0; bind_first = AK_NEW(&lvl, u32, models.nmodels ? models.nmodels : 1);
                for (u32 i = 0; i < models.nmodels; i++) { bind_first[i] = nb; nb += models.models[i].skeleton >= 0 ? models.skels[models.models[i].skeleton].nbones : 0; }
                bindm = (f32 (*)[12])ak_arena_alloc(&lvl, 48u * (nb ? nb : 1), 16);
                for (u32 i = 0; bindm && i < models.nmodels; i++) if (models.models[i].skeleton >= 0) ak_skeleton_bind_matrices(&models.skels[models.models[i].skeleton], bindm + bind_first[i]);
            }
            ngallery = 0; gallery = AK_NEW(&lvl, u32, models.nmodels ? models.nmodels : 1);
            for (u32 i = 0; gallery && i < models.nmodels; i++) if (models.models[i].lod == 0 && models.models[i].nidx) gallery[ngallery++] = i;
            gsel = 0;
            { const char *gm = ak_setting_str("AK_GALLERY_MODEL", NULL), *gc = ak_setting_str("AK_GALLERY_CLIP", NULL);
              for (u32 i = 0; gm && i < ngallery; i++) if (!strcmp(models.models[gallery[i]].name, gm)) gsel = i;
              gclip = -1; anim_t = ak_setting_float("AK_GALLERY_TIME", 0);
              for (u32 i = 0; gc && i < models.nclips; i++) if (!strcmp(models.clips[i].name, gc)) gclip = (s32)i; }
            load_ms = (ak_plat_time_us() - t0) / 1000.0f;
            AK_INFO("aurek", "%s: %u triangles, %u batches, %u textures, %u models (%u in the gallery), %u skeletons, %u of %u entities placed, loaded in %.0f ms, %.1f MB",
                    levels[cur].label, level.geom.nidx / 3, level.geom.nbatch, level.ntex, models.nmodels, ngallery, models.nskels, ents.placed, ents.n, load_ms, lvl.used / 1048576.0);
            {   /* start above the highest surface near the middle of the level */
                f32 cx = (scene.bounds_min[0] + scene.bounds_max[0]) * 0.5f, cz = (scene.bounds_min[2] + scene.bounds_max[2]) * 0.5f, top = -1e30f;
                for (f32 r = 15.0f; top < -1e29f && r < 2000.0f; r *= 2.0f)
                    for (u32 i = 0; i < level.geom.nvtx; i++) {
                        const f32 *p = level.geom.vtx[i].pos;
                        if (fabsf(p[0] - cx) < r && fabsf(p[2] - cz) < r && p[1] > top) top = p[1];
                    }
                cam.pos = ak_v3_make(cx, (top > -1e29f ? top : 0.0f) + 6.0f, cz);
            }
            cam.yaw = 0; cam.pitch = -0.15f;
            if (camset) sscanf(camset, "%f,%f,%f,%f,%f", &cam.pos.x, &cam.pos.y, &cam.pos.z, &cam.yaw, &cam.pitch);
            play.ready = false;
            loaded = true;
        }
        if (!ak_plat_poll(&in)) break;
        u64 now = ak_plat_time_us(); f32 dt = (now - last) / 1e6f; last = now;
        if (dt > 0.1f) dt = 0.1f;
        { f32 fdt = ak_setting_float("AK_FIXED_DT", 0); if (fdt > 0) dt = fdt; }   /* tests: a fixed step per frame */
        if ((in.pressed & AK_BTN_START) || ((in.pressed & AK_BTN_TRIANGLE) && !(playing && play.ready))) {   /* (playing: triangle enters vehicles) */
            ak_scene_models_free(&mscene); ak_scene_level_free(&scene); loaded = false;
            cur = (in.pressed & AK_BTN_START) ? (cur + 1) % nlevels : (cur + nlevels - 1) % nlevels;
            continue;
        }
        if (in.pressed & AK_BTN_SELECT) show = !show;
        if ((in.pressed & AK_BTN_CIRCLE) && !(playing && play.ready)) gallery_on = !gallery_on;   /* (playing: circle fires a vehicle's secondary) */
        /* the gallery model as a soldier (a Humanoid blueprint of that name): its head, its faction's colours */
        has_look = gallery_on && ngallery && ak_soldier_look_make(&bps, &models, models.models[gallery[gsel]].name, ghead, col1, col2, &look);
        if (gallery_on && (in.pressed & AK_BTN_L)) col1 = ((has_look ? look.colour1 : col1 < 0 ? 0 : col1) + 1) & 15;   /* personalisation: L colour 1, R colour 2 */
        if (gallery_on && (in.pressed & AK_BTN_R)) col2 = ((has_look ? look.colour2 : col2 < 0 ? 1 : col2) + 1) & 15;
        if (gallery_on && (in.pressed & AK_BTN_SQUARE)) ghead = (ghead + 1) % 3;                                         /* square: head */
        if (gallery_on && (in.pressed & (AK_BTN_L | AK_BTN_R | AK_BTN_SQUARE)))
            has_look = ngallery && ak_soldier_look_make(&bps, &models, models.models[gallery[gsel]].name, ghead, col1, col2, &look);
        if (has_look) { gcol.colour1 = look.rgb1; gcol.colour2 = look.rgb2; }
        else { gcol.colour1 = ak_personal_colour1[col1 < 0 ? 0 : col1 & 15]; gcol.colour2 = ak_personal_colour2[col2 < 0 ? 1 : col2 & 15]; }
        if (gallery_on && ngallery) {
            if (in.pressed & AK_BTN_RIGHT) { gsel = (gsel + 1) % ngallery; gclip = -1; }
            if (in.pressed & AK_BTN_LEFT) { gsel = (gsel + ngallery - 1) % ngallery; gclip = -1; }
            const ak_model *gm0 = &models.models[gallery[gsel]];
            const ak_skeleton *gsk = gm0->skeleton >= 0 ? &models.skels[gm0->skeleton] : NULL;
            if (gsk && (in.pressed & (AK_BTN_UP | AK_BTN_DOWN))) {         /* the clips that fit this skeleton (same bone count) */
                s32 n = (s32)models.nclips, step = (in.pressed & AK_BTN_UP) ? 1 : -1, c = gclip;
                for (s32 k = 0; k <= n; k++) {
                    c += step; if (c >= n) c = -1; if (c < -1) c = n - 1;
                    if (c < 0 || models.clips[c].nbones == gsk->nbones) break;
                }
                gclip = c; anim_t = 0;
            }
            if (!ak_setting_str("AK_GALLERY_TIME", NULL)) anim_t += dt;
            orbit_yaw += (in.rx * 2.0f + 0.4f) * dt; orbit_pitch += in.ry * 1.5f * dt;
            if (orbit_pitch > 1.4f) orbit_pitch = 1.4f;
            if (orbit_pitch < -1.4f) orbit_pitch = -1.4f;
            orbit_zoom *= 1.0f - in.ly * dt; if (orbit_zoom < 0.2f) orbit_zoom = 0.2f; if (orbit_zoom > 5) orbit_zoom = 5;
            const ak_model *m = &models.models[gallery[gsel]];
            ak_v3 c = ak_v3_make((m->bmin[0] + m->bmax[0]) * 0.5f, (m->bmin[1] + m->bmax[1]) * 0.5f, (m->bmin[2] + m->bmax[2]) * 0.5f);
            f32 ext = 0; for (int k = 0; k < 3; k++) if (m->bmax[k] - m->bmin[k] > ext) ext = m->bmax[k] - m->bmin[k];
            f32 dist = (ext * 1.7f + 0.5f) * orbit_zoom;
            ak_v3 fwd = ak_v3_make(-sinf(orbit_yaw) * cosf(orbit_pitch), sinf(orbit_pitch), -cosf(orbit_yaw) * cosf(orbit_pitch));
            ak_v3 eye = ak_v3_add(c, ak_v3_scale(fwd, -dist));
            int w, h; ak_gfx_size(&w, &h);
            ak_m4 proj = ak_m4_perspective(0.8f, (f32)w / (f32)h, dist * 0.02f, dist * 10.0f);
            ak_m4 view = ak_m4_view_yaw_pitch(eye, orbit_yaw, orbit_pitch), vp = ak_m4_mul(&proj, &view), ident;
            memset(&ident, 0, sizeof ident); ident.m[0] = ident.m[5] = ident.m[10] = ident.m[15] = 1;
            ak_gfx_env env = { { 0, 0, 0 }, 0, 0, ak_setting_float("AK_COLOUR_SCALE", 2.0f) };
            ak_gfx_begin(0x40382Eu | 0xFF000000u, &vp, &env);
            ak_scene_stats ms; memset(&ms, 0, sizeof ms);
            const f32 (*bp)[12] = NULL;
            const ak_anim_clip *clip = gclip >= 0 ? &models.clips[gclip] : NULL;
            if (m->skeleton >= 0 && models.skels[m->skeleton].nbones <= 512) {
                const ak_skeleton *sk = &models.skels[m->skeleton];
                if (clip) { ak_anim_sample(clip, sk, anim_t, true, lq, (f32 (*)[3])lt); ak_skeleton_pose_matrices(sk, lq, (const f32 (*)[3])lt, bones); }
                else ak_skeleton_bind_matrices(sk, bones);
                bp = (const f32 (*)[12])bones;
            }
            ak_scene_models_draw(&mscene, gallery[gsel], &vp, &ident, bp, &gcol, &ms);
            if (has_look && look.head >= 0 && bp)                                   /* the head rides the body's head socket */
            {   static f32 hm[1][12];
                ak_soldier_head_matrix(m, &models.skels[m->skeleton], look.head_bone, bp, hm[0]);
                ak_scene_models_draw(&mscene, (u32)look.head, &vp, &ident, (const f32 (*)[12])hm, &gcol, &ms);
            }
            {   const char *gw = ak_setting_str("AK_GALLERY_WEAPON", NULL);       /* tests: a weapon in the hand (a lightsaber with its blade) */
                const ak_marker *gm = bp ? ak_model_marker(m, "gun") : NULL; s32 wm = gw ? ak_models_find(&models, gw) : -1;
                if (gm && wm >= 0) {
                    f32 G[12]; ak_marker_matrix(bp[gm->bone], gm, G);
                    ak_m4 gw4 = { { G[0], G[4], G[8], 0,  G[1], G[5], G[9], 0,  G[2], G[6], G[10], 0,  G[3], G[7], G[11], 1 } };
                    ak_scene_models_draw(&mscene, (u32)wm, &vp, &gw4, NULL, NULL, &ms);
                    const ak_model *hm = &models.models[wm];
                    {   /* the blade: from the hilt's top end, up its axis (as play draws it) */
                        f32 lp[3] = { (hm->bmin[0] + hm->bmax[0]) * 0.5f, hm->bmax[1], (hm->bmin[2] + hm->bmax[2]) * 0.5f }, a[3], c[3], ax[3] = { G[1], G[5], G[9] }, al = sqrtf(ax[0] * ax[0] + ax[1] * ax[1] + ax[2] * ax[2]);
                        for (int r = 0; r < 3; r++) { a[r] = G[r * 4] * lp[0] + G[r * 4 + 1] * lp[1] + G[r * 4 + 2] * lp[2] + G[r * 4 + 3]; c[r] = a[r] + ax[r] / al; }
                        f32 e3[3] = { eye.x, eye.y, eye.z }; static ak_vtx bv[AK_BEAM_VERTS];
                        u32 nb = ak_beam(bv, a, c, 0.3f * 0.25f, e3, (u32)ak_setting_int("AK_GALLERY_BLADE_RGB", (int)0xFFFF2020u), 255, 255);
                        ak_gfx_set_transform(NULL); if (nb) ak_gfx_draw_immediate(AK_PIPE_BEAM, NULL, bv, nb);
                    }
                }
            }
            if (show) {
                char line[200];
                snprintf(line, sizeof line, "Aurek %s  %s  %.1f fps  %.2f ms", AK_BUILD_ID, ak_gfx_name(), fps, frame_ms); ak_gfx_text(8, 8, 0xFFFFFFFF, line);
                snprintf(line, sizeof line, "%s  model %u/%u: %s", levels[cur].label, gsel + 1, ngallery, m->name); ak_gfx_text(8, 26, 0xFFFFFFFF, line);
                snprintf(line, sizeof line, "parts %u  bones %u  vertices %u  triangles %u  size %.1f m", m->nparts,
                         m->skeleton >= 0 ? models.skels[m->skeleton].nbones : 0, m->nvtx, m->nidx / 3, ext); ak_gfx_text(8, 44, 0xFFFFFFFF, line);
                if (has_look) {
                    snprintf(line, sizeof line, "%s soldier  head %d: %s", ak_faction_name(look.faction), look.head_index + 1,
                             look.head >= 0 ? models.models[look.head].name : "none");
                    ak_gfx_text(480, 26, 0xFFC0E0FF, line);
                }
                int c1 = has_look ? look.colour1 : col1 < 0 ? 0 : col1, c2 = has_look ? look.colour2 : col2 < 0 ? 1 : col2;
                if (clip) snprintf(line, sizeof line, "clip: %s  (%.2f s, %u keys)   colours %d / %d", clip->name, clip->duration, clip->nrot, c1, c2);
                else snprintf(line, sizeof line, "clip: none (bind pose)   colours %d / %d", c1, c2);
                ak_gfx_text(8, 62, 0xFFFFFFFF, line);
                ak_gfx_text(8, 80, 0xFFC0C0C0, "d-pad: model, clip  L/R: colour 1/2  square: head  right stick: turn  left stick: zoom  circle: level");
            }
            ak_gfx_end(&gs);
            frame++; fps_frames++;
            u64 t1 = ak_plat_time_us(); frame_ms = (t1 - now) / 1000.0f;
            if (t1 - fps_t0 >= 1000000) { fps = fps_frames * 1e6f / (f32)(t1 - fps_t0); fps_frames = 0; fps_t0 = t1; }
            if (shot && frame == shot_frame) { ak_gfx_screenshot(shot); break; }
            continue;
        }

        {   /* scripted input timeline (tests, recordings): AK_TEST_SCRIPT = "frames:lx,ly,rx,ry,buttons; ..." - buttons: j jump, f fire, g get in/out (triangle),
             * l L (j pressed on the segment's first frame; f, l held) */
            const char *sc = ak_setting_str("AK_TEST_SCRIPT", NULL);
            if (sc) {
                int at = 0; const char *q = sc;
                while (*q) {
                    int n = 0; f32 a = 0, b = 0, c = 0, d = 0; char bt[16] = ""; int used = 0;
                    if (sscanf(q, " %d:%f,%f,%f,%f,%15[a-z]%n", &n, &a, &b, &c, &d, bt, &used) < 6) { used = 0; bt[0] = 0; sscanf(q, " %d:%f,%f,%f,%f%n", &n, &a, &b, &c, &d, &used); }
                    if (!used) break;
                    if (frame >= at && frame < at + n) {
                        in.lx = a; in.ly = b; in.rx = c; in.ry = d;
                        if (strchr(bt, 'f')) in.held |= AK_BTN_R;
                        if (strchr(bt, 'l')) in.held |= AK_BTN_L;
                        if (strchr(bt, 'c')) in.held |= AK_BTN_CIRCLE;                 /* c: a vehicle's secondary */
                        if (frame == at && strchr(bt, 'j')) in.pressed |= AK_BTN_CROSS;
                        if (frame == at && strchr(bt, 'g')) in.pressed |= AK_BTN_TRIANGLE;   /* g: get in / out */
                    }
                    at += n; q += used; while (*q == ';' || *q == ' ') q++;
                }
            }
        }
        {   /* scripted input for headless tests: AK_TEST_MOVE = lx,ly,rx,ry (held), AK_TEST_JUMP = the frame to jump on */
            const char *tm = ak_setting_str("AK_TEST_MOVE", NULL);
            if (tm) sscanf(tm, "%f,%f,%f,%f", &in.lx, &in.ly, &in.rx, &in.ry);
            if (ak_setting_int("AK_TEST_JUMP", -1) == frame) in.pressed |= AK_BTN_CROSS;
            if (ak_setting_int("AK_TEST_FIRE", 0)) in.held |= AK_BTN_R;
            if (ak_setting_int("AK_TEST_LOCK", 0)) in.held |= AK_BTN_L;
            if (playing && play.ready && shot && frame == shot_frame - 1)
            {   u32 th = 0, hs = 0, al[2], tot[2]; for (u32 i = 1; i <= play.nbots; i++) { th += play.target[i].hits; hs += play.target[i].headshots; }
                ak_play_counts(&play, al, tot);
                AK_INFO("test", "frame %d: %sshots %u, soldiers hit %u (head %u), kills %u, deaths %u, ammo %d/%d, alive %u/%u and %u/%u", frame,
                        "", play.bolts.fired, th, hs, play.kills, play.deaths, play.weapon.ammo, play.weapon.spare, al[0], tot[0], al[1], tot[1]); }
            if (playing && play.ready && play.have_cq && shot && frame == shot_frame - 1) {
                char ow[64] = { 0 }; for (u32 i = 0; i < play.cq.nposts && i < 16; i++) { int o = play.match.post[i].owner; ow[i] = o == 0 ? '1' : o == 1 ? '2' : '-'; }
                AK_INFO("test", "conquest: tickets %d / %d, posts %s, captures %u, winner %d, player %s (health %.0f, deaths %u) at %.1f %.1f %.1f", play.match.tickets[0],
                        play.match.tickets[1], ow, play.match.captures, play.match.winner, play.alive ? "up" : "down", play.health, play.deaths,
                        play.ch.pos[0], play.ch.pos[1], play.ch.pos[2]);
            }
            if (playing && play.ready && shot && frame == shot_frame - 1 && (play.hero[0].enabled || play.hero[1].enabled))
                for (int t = 0; t < 2; t++) { const ak_play_hero *hh = &play.hero[t]; if (!hh->enabled) continue;
                    AK_INFO("test", "hero %d: %s, %s (health %.0f), next in %.0f s", t + 1, hh->name, hh->unit < 0 ? "not in play" : hh->unit == 0 ? "the player" : "a bot",
                            hh->unit >= 0 ? play.target[hh->unit].health : 0.0f, hh->timer); }
            if (playing && play.ready && play.nveh && shot && frame == shot_frame - 1) {
                char vl[512]; int k = 0;
                for (u32 v = 0; v < play.nveh && k < 480; v++) {
                    const ak_vehicle *vh = &play.veh[v]; const ak_target *t = &play.target[1 + play.nbots + v];
                    k += snprintf(vl + k, sizeof vl - (size_t)k, " %s:%s%.0f/%.0f", vh->def ? vh->def->name : "-", vh->alive ? (vh->driver > 0 ? "bot " : vh->driver == 0 ? "you " : "") : "wreck ", t->health, vh->def ? vh->def->health : 0);
                }
                AK_INFO("test", "vehicles:%s", vl);
                AK_INFO("test", "projectiles: %u fired, %u hits", play.projs.fired, play.projs.hits);
                if (play.nturret) { k = 0;
                    for (u32 v = 0; v < play.nturret && k < 480; v++)
                        k += snprintf(vl + k, sizeof vl - (size_t)k, " %s:%s%.0f(%u hits)", play.turret[v].def->name, play.turret[v].alive ? "" : "wreck ", play.target[1 + play.nbots + play.nveh + v].health, play.target[1 + play.nbots + play.nveh + v].hits);
                    AK_INFO("test", "turrets:%s", vl); }
            }
        }
        if (in.pressed & AK_BTN_SQUARE) playing = !playing;               /* square: play (a soldier on foot) / free camera */
        if (playing && !play.ready) {
            f32 st[3] = { cam.pos.x, cam.pos.y, cam.pos.z };
            if (!ak_play_init(&play, &level, &models, &bps, &lvl, ak_setting_str("AK_SOLDIER", "Stormtrooper"), st)) { AK_WARN("aurek", "no soldier for this level"); playing = false; }
            else AK_INFO("aurek", "playing as %s (%s, head %d) at %.1f %.1f %.1f", models.models[play.look.body].name, ak_faction_name(play.look.faction),
                         play.look.head_index + 1, play.ch.pos[0], play.ch.pos[1], play.ch.pos[2]);
        }
        f32 fovy = 1.05f;
        if (playing && play.ready) {
            ak_play_update(&play, &models, &in, dt);
            ak_play_camera(&play, dt, &cam.pos, &cam.yaw, &cam.pitch, &fovy);
        } else {
        /* free camera */
        cam.yaw -= in.rx * 2.0f * dt; cam.pitch += in.ry * 1.5f * dt;
        if (cam.pitch > 1.5f) cam.pitch = 1.5f;
        if (cam.pitch < -1.5f) cam.pitch = -1.5f;
        f32 speed = (in.held & AK_BTN_CROSS) ? 80.0f : 20.0f;
        ak_v3 fwd = ak_v3_make(-sinf(cam.yaw) * cosf(cam.pitch), sinf(cam.pitch), -cosf(cam.yaw) * cosf(cam.pitch)), right = ak_v3_make(cosf(cam.yaw), 0, -sinf(cam.yaw));
        cam.pos = ak_v3_add(cam.pos, ak_v3_scale(fwd, in.ly * speed * dt));
        cam.pos = ak_v3_add(cam.pos, ak_v3_scale(right, in.lx * speed * dt));
        cam.pos.y += (f32)(!!(in.held & AK_BTN_R) - !!(in.held & AK_BTN_L)) * speed * dt;
        }

        int w, h; ak_gfx_size(&w, &h);
        ak_m4 proj = ak_m4_perspective(fovy, (f32)w / (f32)h, playing && play.ready ? 0.25f : ak_setting_float("AK_NEAR", 0.75f), ak_setting_float("AK_FAR", 8000.0f));
        ak_m4 view = ak_m4_view_yaw_pitch(cam.pos, cam.yaw, cam.pitch), vp = ak_m4_mul(&proj, &view);
        ak_gfx_env env = { { 0.55f, 0.62f, 0.70f }, ak_setting_float("AK_FOG_START", 0), ak_setting_float("AK_FOG_END", 0),
                           ak_setting_float("AK_COLOUR_SCALE", 2.0f) };
        ak_gfx_begin(0x6B5A4Cu | 0xFF000000u, &vp, &env);
        if (ak_setting_int("AK_SKY", 1)) ak_scene_sky_draw(&scene, &proj, &view, ak_setting_float("AK_FAR", 8000.0f) * 0.45f);
        ak_scene_stats ss; ak_scene_level_draw(&scene, &vp, &ss);
        u32 ents_drawn = 0;
        if (show_ents && bindm) {
            ak_frustum fr = ak_frustum_from(&vp);
            for (u32 i = 0; i < ents.n; i++) {
                const ak_entity *e = &ents.e[i];
                if (!e->placed) continue;
                if (playing && play.ready && play.nveh && e->flagged && (e->type == 27 || e->type == 13)) continue;   /* playing: the vehicles themselves stand there */
                if (playing && play.ready && play.nturret && e->type == 30) continue;   /* playing: the turrets are drawn with their moving parts */
                s32 mi = e->model[0] >= 0 ? e->model[0] : e->model[1];
                const ak_model *m = &models.models[mi];
                f32 r = m->radius, mn[3] = { e->pos[0] - r, e->pos[1] - r, e->pos[2] - r }, mx[3] = { e->pos[0] + r, e->pos[1] + r, e->pos[2] + r };
                if (!ak_frustum_aabb(&fr, mn, mx)) continue;
                f32 dx = e->pos[0] - cam.pos.x, dy = e->pos[1] - cam.pos.y, dz = e->pos[2] - cam.pos.z, d = sqrtf(dx * dx + dy * dy + dz * dz);
                f32 lod_d = (r < 2 ? 2 : r) * ak_setting_float("AK_LOD_SCALE", 12.0f);
                while (d > lod_d && models.models[mi].lod_next >= 0 && models.models[models.models[mi].lod_next].nidx) { mi = models.models[mi].lod_next; lod_d *= 2.5f; }
                ak_quat q = e->rot; f32 x = q.x, y = q.y, z = q.z, w = q.w;
                ak_m4 wm = { { 1 - 2 * (y * y + z * z), 2 * (x * y + z * w), 2 * (x * z - y * w), 0,
                               2 * (x * y - z * w), 1 - 2 * (x * x + z * z), 2 * (y * z + x * w), 0,
                               2 * (x * z + y * w), 2 * (y * z - x * w), 1 - 2 * (x * x + y * y), 0,
                               e->pos[0], e->pos[1], e->pos[2], 1 } };
                ak_scene_models_draw(&mscene, (u32)mi, &vp, &wm, models.models[mi].skeleton >= 0 ? (const f32 (*)[12])(bindm + bind_first[mi]) : NULL,
                                     e->flagged && (e->type == 27 || e->type == 13) ? &gcol : NULL, &ss);   /* vehicles only: props keep their cutouts */
                ents_drawn++;
            }
        }
        if (playing && play.ready) {
            ak_play_draw(&play, &mscene, &models, &vp, &ss);
            ak_gfx_text((f32)w * 0.5f - 4, (f32)h * 0.5f - 8, play.lock >= 0 ? 0xFF4040FF : 0xFFFFFFFF, "+");   /* crosshair */
        }
        if (show) {
            char line[160];
            snprintf(line, sizeof line, "Aurek %s  %s  %.1f fps  %.2f ms", AK_BUILD_ID, ak_gfx_name(), fps, frame_ms); ak_gfx_text(8, 8, 0xFFFFFFFF, line);
            snprintf(line, sizeof line, "%s (%d/%d)  loaded in %.0f ms", levels[cur].label, cur + 1, nlevels, load_ms); ak_gfx_text(8, 26, 0xFFFFFFFF, line);
            snprintf(line, sizeof line, "objects %u/%u  placed models %u/%u  draws %u  tris %u  submit %.2f ms  gpu wait %.2f ms", ss.objects_visible, ss.objects,
                     ents_drawn, ents.placed, gs.draws, gs.tris, gs.cpu_submit_ms, gs.gpu_wait_ms); ak_gfx_text(8, 44, 0xFFFFFFFF, line);
            snprintf(line, sizeof line, "pos %.1f %.1f %.1f  yaw %.2f pitch %.2f", cam.pos.x, cam.pos.y, cam.pos.z, cam.yaw, cam.pitch); ak_gfx_text(8, 62, 0xFFC0C0C0, line);
            if (playing && play.ready) {
                static const char *sn[] = { "idle", "run", "back", "left", "right", "jump", "fall", "land" };
                snprintf(line, sizeof line, "%s %s  %s  speed %.1f m/s  %s", ak_faction_name(play.look.faction), models.models[play.look.body].name, sn[play.state],
                         sqrtf(play.ch.vel[0] * play.ch.vel[0] + play.ch.vel[2] * play.ch.vel[2]), play.ch.on_ground ? "on the ground" : "in the air");
                ak_gfx_text(8, 80, 0xFFC0E0FF, line);
                if (play.armed) {
                    u32 al[2], tot[2]; ak_play_counts(&play, al, tot);
                    snprintf(line, sizeof line, "%s  ammo %d / %d%s  kills %u  deaths %u  soldiers up: %u / %u vs %u / %u",
                             play.wdef.name, play.weapon.ammo, play.weapon.spare, play.weapon.reload_t > 0 ? "  reloading" : "", play.kills, play.deaths,
                             al[play.team], tot[play.team], al[1 - play.team], tot[1 - play.team]);
                    ak_gfx_text(8, 98, 0xFFC0E0FF, line);
                }
                if (play.in_veh >= 0) {
                    const ak_vehicle *vh = &play.veh[play.in_veh];
                    snprintf(line, sizeof line, "%s  armour %.0f / %.0f  speed %.0f m/s  triangle: get out  cross: boost  L: strafe", vh->def->name,
                             play.target[1 + play.nbots + play.in_veh].health, vh->def->health, sqrtf(vh->vel[0] * vh->vel[0] + vh->vel[2] * vh->vel[2]));
                    ak_gfx_text(8, 152, 0xFFA0FFA0, line);
                    if (vh->def->sec.armed) {                                 /* the secondary: ammo / reload, and the lock-on */
                        const ak_target *lt = vh->lock >= 0 ? &play.target[vh->lock] : NULL;
                        char lk[64] = "";
                        if (lt && vh->locked) snprintf(lk, sizeof lk, "  LOCKED");
                        else if (lt && vh->def->sec.tracks) snprintf(lk, sizeof lk, "  locking %.0f%%", 100.0f * vh->lock_t / (vh->def->lock_time > 0 ? vh->def->lock_time : 1));
                        if (vh->sec_reload > 0) snprintf(line, sizeof line, "circle: %s  reloading %.1f s%s", vh->def->sec.weapon, vh->sec_reload, lk);
                        else snprintf(line, sizeof line, "circle: %s  %d / %d%s", vh->def->sec.weapon, vh->sec_ammo, vh->def->sec.clip, lk);
                        ak_gfx_text(8, 170, vh->locked ? 0xFF4040FF : 0xFFA0FFA0, line);
                        if (lt) {                                             /* a mark on the locked / locking target */
                            f32 X = lt->feet[0], Y = lt->feet[1] + lt->height * 0.5f, Z = lt->feet[2];
                            f32 cx = vp.m[0] * X + vp.m[4] * Y + vp.m[8] * Z + vp.m[12], cy = vp.m[1] * X + vp.m[5] * Y + vp.m[9] * Z + vp.m[13], cw = vp.m[3] * X + vp.m[7] * Y + vp.m[11] * Z + vp.m[15];
                            if (cw > 0.1f) { f32 sx = ((cx / cw) * 0.5f + 0.5f) * (f32)w, sy = (0.5f - (cy / cw) * 0.5f) * (f32)h;
                                ak_gfx_text(sx - 12, sy - 6, vh->locked ? 0xFF4040FF : 0xFF40FFFF, vh->locked ? "[ X ]" : "[   ]"); }
                        }
                    }
                } else {
                    s32 nv = -1; f32 bd = 1e30f;
                    for (u32 v = 0; v < play.nveh; v++) { const ak_vehicle *vh = &play.veh[v]; if (!vh->def || !vh->alive || vh->driver >= 0) continue;
                        f32 dx = vh->pos[0] - play.ch.pos[0], dz = vh->pos[2] - play.ch.pos[2], r = vh->def->radius + 3.0f; if (dx * dx + dz * dz < r * r && dx * dx + dz * dz < bd) { bd = dx * dx + dz * dz; nv = (s32)v; } }
                    if (nv >= 0) { snprintf(line, sizeof line, "triangle: get in the %s", play.veh[nv].def->name); ak_gfx_text((f32)w * 0.5f - 100, (f32)h * 0.5f + 60, 0xFFFFFFFF, line); }
                }
                if (play.have_cq) {
                    const ak_conquest *cq = &play.match; int me = play.team, them = 1 - me;
                    snprintf(line, sizeof line, "%s %d (%u posts)  -  %s %d (%u posts)  health %.0f%s%s", ak_faction_name(play.team_faction[me]), cq->tickets[me], cq->held[me],
                             ak_faction_name(play.team_faction[them]), cq->tickets[them], cq->held[them], play.health,
                             play.alive ? "" : "  down - back with the next wave", cq->all_team < 2 ? "  all posts held" : "");
                    ak_gfx_text(8, 134, 0xFFFFE0A0, line);
                    if (play.near_post >= 0) {
                        const ak_post_state *ps = &cq->post[play.near_post];
                        f32 f = ps->progress / play.cq.post[play.near_post].amount;
                        if (ps->contest > 0) snprintf(line, sizeof line, "command post %d: contested  %.0f s", play.near_post + 1, ps->contest);
                        else if (ps->owner == me) snprintf(line, sizeof line, "command post %d: ours  %.0f%%", play.near_post + 1, 100.0f * f);
                        else snprintf(line, sizeof line, "command post %d: %s  %s %.0f%%", play.near_post + 1, ps->owner == them ? "theirs" : "neutral",
                                      ps->owner == them ? "neutralising" : "capturing", 100.0f * (1.0f - f));
                        ak_gfx_text((f32)w * 0.5f - 120, (f32)h * 0.5f + 40, 0xFFFFFFFF, line);
                    }
                    if (cq->winner >= 0)
                        ak_gfx_text((f32)w * 0.5f - 60, (f32)h * 0.5f - 60, 0xFFFFFFFF, cq->winner == me ? "VICTORY" : cq->winner == them ? "DEFEAT" : "DRAW");
                    {   const ak_play_hero *hm = &play.hero[me], *ht = &play.hero[them];   /* heroes: the offer, who plays them, the countdown */
                        if (hm->enabled && hm->offered == 0) {
                            snprintf(line, sizeof line, "become %s?  up: yes  down: no  (%.0f s)", hm->name, hm->decide);
                            ak_gfx_text((f32)w * 0.5f - 150, (f32)h * 0.5f - 80, 0xFFFFE070, line);
                        }
                        if (hm->enabled || ht->enabled) {
                            char a[64], b[64];
                            if (!hm->enabled) snprintf(a, sizeof a, "-"); else if (hm->unit == 0) snprintf(a, sizeof a, "you are %s", hm->name);
                            else if (hm->unit > 0) snprintf(a, sizeof a, "%s in the field", hm->name); else snprintf(a, sizeof a, "%s in %.0f s", hm->name, hm->timer > 0 ? hm->timer : 0);
                            if (!ht->enabled) snprintf(b, sizeof b, "-"); else if (ht->unit >= 0) snprintf(b, sizeof b, "%s in the field", ht->name); else snprintf(b, sizeof b, "%s in %.0f s", ht->name, ht->timer > 0 ? ht->timer : 0);
                            snprintf(line, sizeof line, "heroes: %s  -  %s", a, b); ak_gfx_text(8, 152, 0xFFC0C0FF, line);
                        }
                    }
                }
                ak_gfx_text(8, 116, 0xFFC0C0C0, play.twin_stick ? "left stick: move  right stick: aim  cross: jump  R: fire  L: lock on  square: free camera"
                                                                : "left stick: move  right stick: turn  cross: jump  R: fire  L: lock on  square: free camera");

            }
        }
        ak_gfx_end(&gs);
        frame++; fps_frames++;
        u64 t1 = ak_plat_time_us(); frame_ms = (t1 - now) / 1000.0f;
        if (t1 - fps_t0 >= 1000000) {
            fps = fps_frames * 1e6f / (f32)(t1 - fps_t0); fps_frames = 0; fps_t0 = t1;
            AK_INFO("frame", "%.1f fps, %.2f ms, %u draws, %u tris, %u/%u objects, submit %.2f ms, gpu wait %.2f ms", fps, frame_ms, gs.draws, gs.tris,
                    ss.objects_visible, ss.objects, gs.cpu_submit_ms, gs.gpu_wait_ms);
        }
        {   const char *rec = ak_setting_str("AK_RECORD", NULL);           /* every frame to <dir>/NNNNN.ppm (recordings) */
            if (rec) { char fn[512]; snprintf(fn, sizeof fn, "%s/%05d.ppm", rec, frame); ak_gfx_screenshot(fn); } }
        if (shot && frame == shot_frame) { ak_gfx_screenshot(shot); break; }
    }
    if (loaded) { ak_scene_models_free(&mscene); ak_scene_level_free(&scene); }
    ak_gfx_shutdown();
    ak_vfs_close(vfs);
    (void)argc; (void)argv;
    return 0;
}
