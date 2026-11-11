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
    f32 orbit_yaw = 0.6f, orbit_pitch = -0.25f, orbit_zoom = 1.0f; static f32 bones[512][12];
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
            ngallery = 0; gallery = AK_NEW(&lvl, u32, models.nmodels ? models.nmodels : 1);
            for (u32 i = 0; gallery && i < models.nmodels; i++) if (models.models[i].lod == 0 && models.models[i].nidx) gallery[ngallery++] = i;
            gsel = 0;
            { const char *gm = ak_setting_str("AK_GALLERY_MODEL", NULL);
              for (u32 i = 0; gm && i < ngallery; i++) if (!strcmp(models.models[gallery[i]].name, gm)) gsel = i; }
            load_ms = (ak_plat_time_us() - t0) / 1000.0f;
            AK_INFO("aurek", "%s: %u triangles, %u batches, %u textures, %u models (%u in the gallery), %u skeletons, loaded in %.0f ms, %.1f MB",
                    levels[cur].label, level.geom.nidx / 3, level.geom.nbatch, level.ntex, models.nmodels, ngallery, models.nskels, load_ms, lvl.used / 1048576.0);
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
            loaded = true;
        }
        if (!ak_plat_poll(&in)) break;
        u64 now = ak_plat_time_us(); f32 dt = (now - last) / 1e6f; last = now;
        if (dt > 0.1f) dt = 0.1f;
        if (in.pressed & (AK_BTN_START | AK_BTN_TRIANGLE)) {
            ak_scene_models_free(&mscene); ak_scene_level_free(&scene); loaded = false;
            cur = (in.pressed & AK_BTN_START) ? (cur + 1) % nlevels : (cur + nlevels - 1) % nlevels;
            continue;
        }
        if (in.pressed & AK_BTN_SELECT) show = !show;
        if (in.pressed & AK_BTN_CIRCLE) gallery_on = !gallery_on;
        if (gallery_on && ngallery) {
            if (in.pressed & AK_BTN_RIGHT) gsel = (gsel + 1) % ngallery;
            if (in.pressed & AK_BTN_LEFT) gsel = (gsel + ngallery - 1) % ngallery;
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
            if (m->skeleton >= 0 && models.skels[m->skeleton].nbones <= 512) { ak_skeleton_bind_matrices(&models.skels[m->skeleton], bones); bp = (const f32 (*)[12])bones; }
            ak_scene_models_draw(&mscene, gallery[gsel], &vp, &ident, bp, &ms);
            if (show) {
                char line[200];
                snprintf(line, sizeof line, "Aurek %s  %s  %.1f fps  %.2f ms", AK_BUILD_ID, ak_gfx_name(), fps, frame_ms); ak_gfx_text(8, 8, 0xFFFFFFFF, line);
                snprintf(line, sizeof line, "%s  model %u/%u: %s", levels[cur].label, gsel + 1, ngallery, m->name); ak_gfx_text(8, 26, 0xFFFFFFFF, line);
                snprintf(line, sizeof line, "parts %u  bones %u  vertices %u  triangles %u  size %.1f m  (bind pose)", m->nparts,
                         m->skeleton >= 0 ? models.skels[m->skeleton].nbones : 0, m->nvtx, m->nidx / 3, ext); ak_gfx_text(8, 44, 0xFFFFFFFF, line);
                ak_gfx_text(8, 62, 0xFFC0C0C0, "d-pad left/right: model   right stick: turn   left stick: zoom   circle: back to the level");
            }
            ak_gfx_end(&gs);
            frame++; fps_frames++;
            u64 t1 = ak_plat_time_us(); frame_ms = (t1 - now) / 1000.0f;
            if (t1 - fps_t0 >= 1000000) { fps = fps_frames * 1e6f / (f32)(t1 - fps_t0); fps_frames = 0; fps_t0 = t1; }
            if (shot && frame == shot_frame) { ak_gfx_screenshot(shot); break; }
            continue;
        }

        /* free camera */
        cam.yaw -= in.rx * 2.0f * dt; cam.pitch += in.ry * 1.5f * dt;
        if (cam.pitch > 1.5f) cam.pitch = 1.5f;
        if (cam.pitch < -1.5f) cam.pitch = -1.5f;
        f32 speed = (in.held & AK_BTN_CROSS) ? 80.0f : 20.0f;
        ak_v3 fwd = ak_v3_make(-sinf(cam.yaw) * cosf(cam.pitch), sinf(cam.pitch), -cosf(cam.yaw) * cosf(cam.pitch)), right = ak_v3_make(cosf(cam.yaw), 0, -sinf(cam.yaw));
        cam.pos = ak_v3_add(cam.pos, ak_v3_scale(fwd, in.ly * speed * dt));
        cam.pos = ak_v3_add(cam.pos, ak_v3_scale(right, in.lx * speed * dt));
        cam.pos.y += (f32)(!!(in.held & AK_BTN_R) - !!(in.held & AK_BTN_L)) * speed * dt;

        int w, h; ak_gfx_size(&w, &h);
        ak_m4 proj = ak_m4_perspective(1.05f, (f32)w / (f32)h, ak_setting_float("AK_NEAR", 0.75f), ak_setting_float("AK_FAR", 8000.0f));
        ak_m4 view = ak_m4_view_yaw_pitch(cam.pos, cam.yaw, cam.pitch), vp = ak_m4_mul(&proj, &view);
        ak_gfx_env env = { { 0.55f, 0.62f, 0.70f }, ak_setting_float("AK_FOG_START", 0), ak_setting_float("AK_FOG_END", 0),
                           ak_setting_float("AK_COLOUR_SCALE", 2.0f) };
        ak_gfx_begin(0x6B5A4Cu | 0xFF000000u, &vp, &env);
        ak_scene_stats ss; ak_scene_level_draw(&scene, &vp, &ss);
        if (show) {
            char line[160];
            snprintf(line, sizeof line, "Aurek %s  %s  %.1f fps  %.2f ms", AK_BUILD_ID, ak_gfx_name(), fps, frame_ms); ak_gfx_text(8, 8, 0xFFFFFFFF, line);
            snprintf(line, sizeof line, "%s (%d/%d)  loaded in %.0f ms", levels[cur].label, cur + 1, nlevels, load_ms); ak_gfx_text(8, 26, 0xFFFFFFFF, line);
            snprintf(line, sizeof line, "objects %u/%u  draws %u  tris %u  submit %.2f ms  gpu wait %.2f ms", ss.objects_visible, ss.objects, gs.draws, gs.tris,
                     gs.cpu_submit_ms, gs.gpu_wait_ms); ak_gfx_text(8, 44, 0xFFFFFFFF, line);
            snprintf(line, sizeof line, "pos %.1f %.1f %.1f  yaw %.2f pitch %.2f", cam.pos.x, cam.pos.y, cam.pos.z, cam.yaw, cam.pitch); ak_gfx_text(8, 62, 0xFFC0C0C0, line);
        }
        ak_gfx_end(&gs);
        frame++; fps_frames++;
        u64 t1 = ak_plat_time_us(); frame_ms = (t1 - now) / 1000.0f;
        if (t1 - fps_t0 >= 1000000) {
            fps = fps_frames * 1e6f / (f32)(t1 - fps_t0); fps_frames = 0; fps_t0 = t1;
            AK_INFO("frame", "%.1f fps, %.2f ms, %u draws, %u tris, %u/%u objects, submit %.2f ms, gpu wait %.2f ms", fps, frame_ms, gs.draws, gs.tris,
                    ss.objects_visible, ss.objects, gs.cpu_submit_ms, gs.gpu_wait_ms);
        }
        if (shot && frame == shot_frame) { ak_gfx_screenshot(shot); break; }
    }
    if (loaded) { ak_scene_models_free(&mscene); ak_scene_level_free(&scene); }
    ak_gfx_shutdown();
    ak_vfs_close(vfs);
    (void)argc; (void)argv;
    return 0;
}
