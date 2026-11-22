/* Milestone 1.2: the level viewer.  Loads every level from the game's files and draws it natively, with a free camera and
 * the frame's figures on screen.  Same code on every device; the platform and renderer back ends are what differ.
 *
 * Controls (free camera): left stick move, right stick look, L / R down / up, hold Cross to move faster.  SELECT tapped: next
 * level; SELECT + L: the level before; SELECT + R: the figures on / off; SELECT + square: play / free camera; SELECT + circle: the
 * model gallery (the level's models in their bind pose): d-pad left / right previous / next model, right stick turns the view,
 * left stick up / down zooms.  Playing: see app/play.c (the PSP button layout). */
#include "../core/ak_core.h"
#include "../core/ak_vfs.h"
#include "../core/ak_settings.h"
#include "../render/ak_scene.h"
#include "../assets/model.h"
#include "../assets/entity.h"
#include "../assets/blueprint.h"
#include "../game/ak_soldier.h"
#include "play.h"
#include "../audio/ak_audio.h"
#include "hud.h"
#include "gc_screen.h"
#include "frontend.h"
#include "../audio/ak_speech.h"
#include "../platform/plat.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

#ifndef AK_BUILD_ID
#define AK_BUILD_ID "dev"
#endif

typedef struct { char path[128]; char label[64]; } level_ref;
static level_ref levels[96];
static int nlevels;
static ak_gc_screen *gc_screen;
static bool gc_back; static struct { int winner_faction, left[2]; } gc_back_res;   /* a GC battle's match is over: back to the map */
static int gc_level = -1; static f32 gc_end_t; static bool gc_keep;                 /* the Galactic Conquest map's state and overlay (the "GC" level) */

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
    /* the Galactic Conquest map (5.4): ENVS/GC.PSP - the galaxy, the planets and Alderaan's asteroids as placed models */
    if (nlevels < (int)AK_ARRAY_LEN(levels)) { snprintf(levels[nlevels].path, sizeof levels[nlevels].path, "PSP_GAME/USRDIR/ENVS/GC.PSP"); snprintf(levels[nlevels].label, sizeof levels[nlevels].label, "GC"); nlevels++; }
}

typedef struct { ak_v3 pos; f32 yaw, pitch; } camera;

/* tests: where a held lightsaber's blade is at clip time t (gallery: the motion fan from the clip itself) */
static bool gallery_blade(const ak_model_set *ms, const ak_model *body, const ak_anim_clip *clip, f32 t, s32 wm, f32 base[3], f32 tip[3])
{
    static ak_quat q[512]; static f32 lt[512][3], b[512][12];
    if (body->skeleton < 0 || wm < 0) return false;
    const ak_skeleton *sk = &ms->skels[body->skeleton]; const ak_marker *gm = ak_model_marker(body, "gun");
    if (!gm || sk->nbones > 512) return false;
    if (clip) { ak_anim_sample(clip, sk, t, true, q, lt); ak_skeleton_pose_matrices(sk, q, (const f32 (*)[3])lt, b); } else ak_skeleton_bind_matrices(sk, b);
    f32 G[12], lp[3], ld[3], ax[3], al; ak_marker_matrix(b[gm->bone], gm, G); ak_model_long_axis(&ms->models[wm], lp, ld);
    for (int r = 0; r < 3; r++) ax[r] = G[r * 4] * ld[0] + G[r * 4 + 1] * ld[1] + G[r * 4 + 2] * ld[2];
    al = sqrtf(ax[0] * ax[0] + ax[1] * ax[1] + ax[2] * ax[2]); if (al < 1e-6f) return false;
    for (int r = 0; r < 3; r++) { base[r] = G[r * 4] * lp[0] + G[r * 4 + 1] * lp[1] + G[r * 4 + 2] * lp[2] + G[r * 4 + 3]; tip[r] = base[r] + ax[r] / al; }
    return true;
}

/* the debug text: on the Vita each line keeps its own colour (as before part 1.8, by request: the black was unreadable); grey
 * elsewhere; AK_DEBUG_TEXT_RGB (0xRRGGBB) sets one colour for all.  (The crosshair and lock marks keep their colours.) */
/* a world point (engine space) on the HUD's 480 x 272 screen; false behind the camera */
static bool hud_project(const ak_m4 *vp, const f32 *p, f32 *x, f32 *y)
{
    const f32 *m = vp->m;
    f32 cx = m[0] * p[0] + m[4] * p[1] + m[8] * p[2] + m[12], cy = m[1] * p[0] + m[5] * p[1] + m[9] * p[2] + m[13];
    f32 cw = m[3] * p[0] + m[7] * p[1] + m[11] * p[2] + m[15];
    if (cw <= 0) return false;
    *x = (cx / cw * 0.5f + 0.5f) * 480.0f; *y = (0.5f - cy / cw * 0.5f) * 272.0f; return true;
}
static void dbg_text(f32 x, f32 y, u32 col, const char *s)
{
    static s32 c = -2;
    if (c == -2) {
#ifdef __vita__
        c = ak_setting_int("AK_DEBUG_TEXT_RGB", -1);                       /* the Vita: each line its own colour, as originally (by request) */
#else
        c = ak_setting_int("AK_DEBUG_TEXT_RGB", 0xA0A0A0);
#endif
    }
    if (c < 0) { ak_gfx_text(x, y, col, s); return; }
    u32 r = ((u32)c >> 16) & 255, g = ((u32)c >> 8) & 255, b = (u32)c & 255;
    ak_gfx_text(x, y, 0xFF000000u | (b << 16) | (g << 8) | r, s);
}

/* the menus' 3D models (frontend.c: 1004 widgets), drawn over the frame into the widget's rectangle: the model turned by `rot`
 * (game axes x, y, z; [assumed: y, then x, then z]) and placed at -cam_off from a camera looking along the game's +z, the field
 * of view `fov` across the rectangle's height [assumed], depth pressed into the nearest thousandth so it draws over the scene */
static const ak_model_set *fe_models; static ak_scene_models *fe_mscene; static const ak_blueprints *fe_bps; static ak_play *fe_play; static f32 fe_t;
static void fe_model_draw(const void *weapon, bool soldier, const ak_fe_look *look, const f32 rect[4], f32 fov, const f32 off[3], const f32 rot[3])
{
    if (!fe_models || !fe_mscene || (!weapon && !soldier)) return;
    static ak_soldier_look lk; static ak_fe_look have; static bool lk_ok;   /* (the look asked for, made once) */
    if (look) {
        if (!fe_play || !fe_play->ready || !fe_bps) return;
        if (!have.body || strcmp(have.body, look->body) || have.head != look->head || have.c1 != look->c1 || have.c2 != look->c2) {
            have = *look; lk_ok = ak_soldier_look_make(fe_bps, fe_models, look->body, look->head, look->c1, look->c2, &lk); }
        if (!lk_ok) return;
    }
    const ak_bp_object *w = (const ak_bp_object *)weapon;   /* (weapons whose models the level lacks are not drawn) */
    s32 mi = soldier ? -1 : ak_models_find(fe_models, ak_bp_string(w, "WeaponModel", "")); if (mi < 0 && !soldier) return;
    if (soldier && (!fe_play || !fe_play->ready)) return;
    f32 aspect = rect[3] > 0 ? rect[2] / rect[3] : 1;
    f32 fx = fov > 0.05f ? fov : 0.65f, fovy = 2.0f * atanf(tanf(fx * 0.5f) / aspect);   /* (0881D084: the angle across, as the game camera's) */
    ak_m4 P = ak_m4_perspective(fovy, aspect, 0.05f, 50.0f);
    ak_m4 N; memset(&N, 0, sizeof N);                                  /* clip space -> the rectangle on the 480 x 272 screen */
    f32 sx = rect[2] / 480.0f, sy = rect[3] / 272.0f, tx = (rect[0] + rect[2] * 0.5f) / 240.0f - 1.0f, ty = 1.0f - (rect[1] + rect[3] * 0.5f) / 136.0f;
    N.m[0] = sx; N.m[5] = sy; N.m[10] = 0.001f; N.m[12] = tx; N.m[13] = ty; N.m[14] = -0.998f; N.m[15] = 1;
    ak_m4 vp = ak_m4_mul(&N, &P);
    ak_gfx_set_projection(&vp);                                        /* (the front end's frame has none: back to none after) */
    /* the turn in engine axes (y and z negated: about y and z the angles change sign) */
    /* [assumed: the y turn as stored, the x turn as stored - the closest of the four sign choices to the original's carousel frame] */
    f32 ax = rot[0], ay = rot[1], az = -rot[2];
    f32 cx = cosf(ax), sxx = sinf(ax), cy = cosf(ay), syy = sinf(ay), cz = cosf(az), szz = sinf(az);
    f32 Ry[9] = { cy, 0, -syy,  0, 1, 0,  syy, 0, cy }, Rx[9] = { 1, 0, 0,  0, cx, sxx,  0, -sxx, cx }, Rz[9] = { cz, szz, 0,  -szz, cz, 0,  0, 0, 1 };
    f32 A[9], R[9];                                                    /* (column major 3x3: R = Ry Rx Rz) */
    for (int c = 0; c < 3; c++) for (int r = 0; r < 3; r++) { A[c * 3 + r] = 0; for (int k = 0; k < 3; k++) A[c * 3 + r] += Ry[k * 3 + r] * Rx[c * 3 + k]; }
    for (int c = 0; c < 3; c++) for (int r = 0; r < 3; r++) { R[c * 3 + r] = 0; for (int k = 0; k < 3; k++) R[c * 3 + r] += A[k * 3 + r] * Rz[c * 3 + k]; }
    ak_m4 W = { { R[0], R[1], R[2], 0,  R[3], R[4], R[5], 0,  R[6], R[7], R[8], 0,  -off[0], off[1], off[2], 1 } };
    if (soldier && look) { fe_t += 1.0f / 60.0f; ak_play_draw_look(fe_play, &lk, fe_models, fe_mscene, &vp, &W, fe_t, look->head_only); }
    else if (soldier) { fe_t += 1.0f / 60.0f; ak_play_draw_figure(fe_play, fe_models, fe_mscene, &vp, &W, fe_t); }   /* [assumed: his idle clip] */
    else ak_scene_models_draw(fe_mscene, (u32)mi, &vp, &W, NULL, NULL, NULL);
    ak_gfx_set_projection(NULL);
}

int main(int argc, char **argv)
{
    if (!ak_plat_init()) return 1;
    char sp[600]; snprintf(sp, sizeof sp, "%s/settings.txt", ak_plat_user_dir());
    ak_settings_load(sp);
    ak_log_set_level(ak_setting_int("AK_LOG", 1));                     /* 0 off (frame-rate checks), 1 usual, 2 everything */
    AK_INFO("aurek", "Aurek level viewer, build %s (log level %d)", AK_BUILD_ID, ak_log_level_now());

    int nd; const char *const *dirs = ak_plat_data_dirs(&nd);
    ak_vfs *vfs = ak_vfs_open(dirs, nd);
    if (!vfs) { AK_ERROR("aurek", "no game files found (game.iso or GAME/PSP_GAME in %s%s)", nd ? dirs[0] : "?", nd > 1 ? " or the other data folders" : ""); return 1; }
    AK_INFO("aurek", "game files: %s", ak_vfs_describe(vfs));

    ak_gfx_config gc = { ak_setting_int("AK_WIDTH", 960), ak_setting_int("AK_HEIGHT", 544), ak_setting_int("AK_VSYNC", 1) != 0, ak_plat_user_dir(), "Aurek" };
    if (!ak_gfx_init(&gc)) { AK_ERROR("aurek", "renderer failed to start"); return 1; }
    if (ak_setting_int("AK_TROPHIES", 1)) ak_plat_trophy_init();       /* (the Vita's trophies: their first-time dialog before anything else) */
    AK_INFO("aurek", "renderer: %s", ak_gfx_name());

    ak_arena tmp, lvl;
    if (!ak_arena_init(&tmp, (size_t)ak_setting_int("AK_TMP_KB", 1024) << 10)) return 1;   /* (the level's arena: below, once the others are made) */
    find_levels(vfs, &tmp);
    ak_arena data; ak_blueprints bps; memset(&bps, 0, sizeof bps);              /* the game's blueprints: once, for every level */
    if (ak_arena_init(&data, (size_t)ak_setting_int("AK_DATA_KB", 2048) << 10)) {
        ak_blob cb;
        if (ak_vfs_read(vfs, "PSP_GAME/USRDIR/MISC/COMMON.ASR", &data, &cb) && ak_blueprints_parse(&cb, &data, &bps)) {
            u32 no = 0; for (u32 i = 0; i < bps.ntypes; i++) no += bps.types[i].nobjects;
            AK_INFO("aurek", "blueprints: %u types, %u objects, %.0f KB", bps.ntypes, no, data.used / 1024.0);
        } else AK_WARN("aurek", "MISC/COMMON.ASR: no blueprints (soldiers get no heads)");
    }
    if (!nlevels) { AK_ERROR("aurek", "no levels in PSP_GAME/USRDIR/ENVS"); return 1; }
    /* audio (1.9): the shared sound bank once; each level adds its own and its music */
    ak_arena sndmem, musmem; ak_audio_init();
    if (ak_arena_init(&sndmem, (size_t)ak_setting_int("AK_SOUND_KB", 3072) << 10)) { ak_blob sb;
        ak_hud_load(vfs);
#ifdef AK_HAS_ARAM   /* (its sounds go to ARAM as the bank loads: read streamed, they do not stay in memory) */
        bool snd_stream = ak_setting_int("AK_AUDIO_ADPCM", 1) && ak_setting_int("AK_AUDIO_ARAM", 1);
#else
        const bool snd_stream = false;
#endif
        if (snd_stream ? ak_level_stream_read(vfs, "PSP_GAME/USRDIR/SOUNDS/GMSND.ASR", &sndmem, &sb) : ak_vfs_read(vfs, "PSP_GAME/USRDIR/SOUNDS/GMSND.ASR", &sndmem, &sb)) {
            AK_INFO("audio", "SOUNDS/GMSND.ASR: %u sounds and events", ak_audio_bank_add(&sb, false));
            ak_blob am;                                                   /* speech: GMSND.AM's index (its lines, the bundle's table) */
            ak_level_stream_close();
            if (ak_vfs_read_part(vfs, "PSP_GAME/USRDIR/SOUNDS/GMSND.AM", 0, 256u << 10, &sndmem, &am)) ak_speech_load(&am, &sb);
        }
        else AK_WARN("audio", "no SOUNDS/GMSND.ASR (copy the game's SOUNDS folder next to ENVS): shared sounds missing"); }
    bool have_mus = ak_arena_init(&musmem, 64u << 10);                      /* (a track's header only: its delay and loop) */
    FILE *dumpf = NULL; u32 dump_frames = 0; ak_blob b_level_keep = { 0 };
    if (getenv("AK_AUDIO_DUMP")) { dumpf = fopen(getenv("AK_AUDIO_DUMP"), "wb"); if (dumpf) { static const u8 z[44]; fwrite(z, 1, 44, dumpf); } }
    {   /* the level's arena: AK_LEVEL_MB, or 0 = all the memory left but AK_LEVEL_RESERVE_KB (the consoles with little memory) */
        size_t lmb = (size_t)ak_setting_int("AK_LEVEL_MB", 48) << 20;
        if (!lmb) {
            size_t s = 64u << 20; void *t; while (s > (2u << 20) && !(t = ak_plat_alloc(s, 64))) s -= 256u << 10;
            if (s > (2u << 20)) ak_plat_free(t);
            size_t keep = (size_t)ak_setting_int("AK_LEVEL_RESERVE_KB", 1536) << 10; lmb = s > keep + (4u << 20) ? s - keep : (4u << 20);
            AK_INFO("aurek", "level memory: %.2f MB (%.2f MB free, %.2f MB kept back)", lmb / 1048576.0, s / 1048576.0, keep / 1048576.0);
        }
        if (!ak_arena_init(&lvl, lmb)) return 1;
    }
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
    /* the front end (PARITY 8.2): the game's menus first (AK_FRONTEND=1; AK_FE_PAGE the first page), the level once launched */
    bool fe_on = ak_setting_int("AK_FRONTEND", 0) && ak_fe_init(vfs) && ak_fe_open(ak_setting_str("AK_FE_PAGE", "MP_MainMenu"));
    if (ak_setting_int("AK_TEST_PROFILE_SAVE", 0) && ak_fe_init(vfs)) ak_fe_profile_save();   /* tests: the profile written back at once */
    { char sv[400]; snprintf(sv, sizeof sv, "%s/gc_conquest.sav", ak_plat_user_dir()); FILE *f = fopen(sv, "rb");   /* a saved conquest: New / Resume */
      if (f) { fclose(f); if (fe_on) ak_fe_var("BFF.HasGalacticConquestBeenPlayed", 1); } }
    ak_fe_set_blueprints(&bps);
    fe_bps = &bps; ak_fe_set_model_drawer(fe_model_draw);                                         /* (the customisation menu: items, costs, descriptions) */
    bool fe_ingame = false, fe_after_team = false;                      /* the match's own pages (team selection, the spawn map) */
    if (!fe_on && playing && ak_setting_int("AK_PLAY_MENUS", 0) && ak_fe_init(vfs)) fe_ingame = true;   /* (tests: a match straight in, with its own pages) */
    if (fe_on || fe_ingame) ak_fe_trophies_sync();                      /* (medals earned before the trophies existed) */
    for (;;) {
        if (fe_on) {
            if (!ak_plat_poll(&in)) break;
            u64 now = ak_plat_time_us(); f32 dt = (now - last) / 1e6f; last = now; if (dt > 0.1f) dt = 0.1f;
            { f32 fdt = ak_setting_float("AK_FIXED_DT", 0); if (fdt > 0) dt = fdt; }
            { const char *keys = ak_setting_str("AK_FE_KEYS", NULL);   /* tests: one button per frame from frame 10 ("D,D,X": down, down, cross) */
              if (keys && frame >= 10) { int k = (frame - 10) / 4, ph = (frame - 10) % 4; const char *q = keys; for (int j = 0; j < k && *q; j++) { q = strchr(q, ','); q = q ? q + 1 : ""; }
                  if (*q && ph == 0) { u32 m = *q == 'U' ? AK_BTN_UP : *q == 'D' ? AK_BTN_DOWN : *q == 'L' ? AK_BTN_LEFT : *q == 'R' ? AK_BTN_RIGHT : *q == 'X' ? AK_BTN_CROSS : *q == 'O' ? AK_BTN_CIRCLE : *q == 'S' ? AK_BTN_SQUARE : *q == 'T' ? AK_BTN_TRIANGLE : 0; in.pressed |= m; } } }
            int ev = ak_fe_update(&in, dt);
            ak_m4 id; memset(&id, 0, sizeof id); id.m[0] = id.m[5] = id.m[10] = id.m[15] = 1;
            ak_gfx_env env = { { 0, 0, 0 }, 0, 0, 1.0f };
            ak_gfx_set_projection(NULL); ak_gfx_begin(0xFF000000u, &id, &env); ak_fe_draw(); ak_gfx_end(&gs);
            frame++;
            if (shot && frame == shot_frame) { ak_gfx_screenshot(shot); break; }
            if (ev == AK_FE_CMPN_START) {                                  /* the campaign: its level (0x08B1C060's list) in mode CMPN */
                static const char *const camp[11] = { "YAVIN_IV", "SPACE_ALDERAAN", "ORD_MANTELL", "SPACE_KESSEL", "TATOOINE", "BOZ_PITY",
                                                      "HOTH_ION_CANNON", "SPACE_HOTH", "KORRIBAN", "SULLUST", "ENDOR" };
                int li = ak_fe_cmpn_level(); if (li < 0 || li > 10) li = 0;
                char want[64]; snprintf(want, sizeof want, "CAMPAIGN %s", camp[li]);
                for (int i = 0; i < nlevels; i++) if (!strcmp(levels[i].label, want)) cur = i;
                ak_setting_set("AK_MODE", "CMPN"); ak_setting_set("AK_TEAM", "1"); ak_setting_set("AK_SOLDIER", "MediumRebel");   /* [assumed: the Alliance's campaign - the frame's soldier is a Rebel] */
                AK_INFO("fe", "campaign level %d: %s", li, want);
                fe_on = false; playing = true; loaded = false; fe_ingame = ak_setting_int("AK_FE_INGAME", 1) != 0; continue;
            }
            if (ev == AK_FE_GC_START) {                                    /* Galactic Conquest: the map (a new conquest, or the one in memory) */
                for (int i = 0; i < nlevels; i++) if (!strcmp(levels[i].label, "GC")) cur = i;
                gc_keep = !ak_fe_gc_new(); fe_on = false; playing = false; loaded = false; AK_INFO("fe", "galactic conquest (%s)", gc_keep ? "resume" : "new");
                continue;
            }
            if (ev == AK_FE_START) {                                       /* FE_HostGame: the play list's first map, its mode */
                int md = 0; const char *lv = ak_fe_launch(&md);
                static const char *codes[4] = { "CQST", "CTF1", "CTF2", "HCTF" }; ak_setting_set("AK_MODE", codes[md & 3]);
                for (int i = 0; i < nlevels; i++) if (!strcmp(levels[i].label, lv)) cur = i;
                AK_INFO("fe", "launch %s, %s", lv, codes[md & 3]);
                fe_on = false; playing = true; loaded = false; fe_ingame = ak_setting_int("AK_FE_INGAME", 1) != 0; ak_fe_close();
            }
            continue;
        }
        if (!loaded) {
            u64 t0 = ak_plat_time_us();
            ak_arena_reset(&lvl);
            ak_blob b;
            static int stream = -1; if (stream < 0) stream = ak_setting_int("AK_LEVEL_STREAM", AK_SMALL_MEMORY);
            if (!(stream ? ak_level_stream_read(vfs, levels[cur].path, &lvl, &b) : ak_vfs_read(vfs, levels[cur].path, &lvl, &b)) || !ak_level_parse(&b, &lvl, &level) || !ak_scene_level_init(&scene, &level, &lvl)) {
                ak_level_stream_close(); AK_ERROR("aurek", "%s did not load", levels[cur].path); cur = (cur + 1) % nlevels; continue;
            }
            if (!ak_models_load(&level, &lvl, &models) || !ak_scene_models_init(&mscene, &models, &scene, &lvl)) AK_WARN("aurek", "models did not load");
            fe_models = &models; fe_mscene = &mscene; fe_play = &play;
            ak_entities_load(&level, &models, &lvl, &ents);
            if (!strcmp(levels[cur].label, "GC")) {   /* the Galactic Conquest map: a new game, the player's first treasury */
                static ak_gc_screen gcs_;
                if (gcs_.ready && gc_back) {                  /* back from a battle: the same conquest on the reloaded map */
                    static ak_gc_screen keep; keep = gcs_;   /* (static: 120 KB, too big for a console stack) */ ak_gc_screen_init(&gcs_, vfs, &level, &scene, &models, &ents, &bps, 1);
                    keep.corona = gcs_.corona; memcpy(keep.tex, gcs_.tex, sizeof keep.tex); memcpy(keep.shape, gcs_.shape, sizeof keep.shape); keep.nshape = gcs_.nshape;
                    gcs_ = keep; ak_gc_screen_battle_done(&gcs_, gc_back_res.winner_faction, gc_back_res.left); gc_back = false;
                } else if (gc_keep && !gcs_.ready) {          /* resume: the saved conquest */
                    char sv[400]; snprintf(sv, sizeof sv, "%s/gc_conquest.sav", ak_plat_user_dir());
                    ak_gc_screen_init(&gcs_, vfs, &level, &scene, &models, &ents, &bps, (u32)ak_setting_int("AK_SEED", 1));
                    if (!ak_gc_screen_load(&gcs_, sv)) { gcs_.g.turn = 0; gcs_.income = ak_gc_collect(&gcs_.g, &gcs_.r, 0); }
                    gc_keep = false;
                } else if (gcs_.ready && gc_keep) {           /* resume: the conquest in memory */
                    static ak_gc_screen keep; keep = gcs_;   /* (static: 120 KB, too big for a console stack) */ ak_gc_screen_init(&gcs_, vfs, &level, &scene, &models, &ents, &bps, 1);
                    keep.corona = gcs_.corona; memcpy(keep.tex, gcs_.tex, sizeof keep.tex); memcpy(keep.shape, gcs_.shape, sizeof keep.shape); keep.nshape = gcs_.nshape;
                    gcs_ = keep; gc_keep = false;
                } else {
                    ak_gc_screen_init(&gcs_, vfs, &level, &scene, &models, &ents, &bps, (u32)ak_setting_int("AK_SEED", 1));
                    gcs_.g.turn = 0; gcs_.income = ak_gc_collect(&gcs_.g, &gcs_.r, 0); gcs_.phase = ak_setting_int("AK_GC_PHASE", 0);   /* (tests: 1 purchase) */
                    { int tw = ak_setting_int("AK_GC_TEST_OVER", -1); if (tw == 0 || tw == 1) { gcs_.g.winner = tw; gcs_.phase = 4; } }   /* (tests: the game over) */
                }
                gc_screen = &gcs_;
            } else gc_screen = NULL;
            if (ak_setting_int("AK_DUMP_SMSG", 0)) {   /* tests: the level script's messages (SMSG: groups of u16 type, u16 extra, u32 target, ...) */
                u32 pos = 8; ak_chunk c;
                while (ak_asura_next(&level.file, &pos, &c)) {
                    if (ak_chunk_tag(&c) != AK_TAG('S', 'M', 'S', 'G') || c.size < 8) continue;
                    u32 ver = c.version & 0xFFFF, ng = ak_rd32(c.body), p = 4, side = 0;
                    if (ver >= 2) { side = ak_rd32(c.body + 4); p = 8; }
                    u32 msz = 8 + (ver >= 3 ? 4 : 0) + (ver > 4 ? 4 : 0) + (ver > 5 ? 4 : 0); const u8 *cnt = c.body + p; p += ng;
                    AK_INFO("smsg", "chunk ver %u flags %x side %u groups %u", ver, c.flags, side, ng);
                    for (u32 g = 0; g < ng && p < c.size; g++) for (u32 m = 0; m < cnt[g] && p + msz <= c.size; m++) {
                        u16 ty = ak_rd16(c.body + p), ex = ak_rd16(c.body + p + 2); char ln[512]; int o = snprintf(ln, sizeof ln, "g%u type %x extra %u target %x w", g, ty, ex, ak_rd32(c.body + p + 4));
                        for (u32 k = 8; k < msz; k += 4) o += snprintf(ln + o, sizeof ln - (size_t)o, " %08x", ak_rd32(c.body + p + k));
                        u32 eb = !(c.flags & 1) ? ((ex + 3u) & ~3u) : 0;
                        if (eb) { o += snprintf(ln + o, sizeof ln - (size_t)o, " |"); for (u32 k = 0; k < eb && o < 480; k += 4) o += snprintf(ln + o, sizeof ln - (size_t)o, " %08x", ak_rd32(c.body + p + msz + k)); }
                        AK_INFO("smsg", "%s", ln); p += msz + eb; }
                } }
            if (ak_setting_int("AK_DUMP_ENTS", 0)) for (u32 i = 0; i < ents.n; i++) {   /* tests: the entities, game axes */
                const ak_entity *e = &ents.e[i]; f32 g[3] = { e->pos[0], -e->pos[1], -e->pos[2] };
                AK_INFO("ent", "%x type %u flagged %d placed %d model %s pos %.3f %.3f %.3f", e->id, e->type, e->flagged, e->placed,
                        e->model[0] >= 0 ? models.models[e->model[0]].name : "-", g[0], g[1], g[2]); }
            ak_audio_level_reset(); b_level_keep = b; ak_hud_level(&b);
            AK_INFO("audio", "%s: %u sounds and events", levels[cur].label, ak_audio_bank_add(&b, true));
            {   char mp[160], list[64]; ak_blob mb; u32 lh = 0, st = 0, nth = 0;   /* the level's music, as its script picks it */
                bool scripted = ak_audio_level_music_start(&b, (u32)ak_plat_time_us() ^ 0x9E3779B9u, &lh, &st);
                const char *ol = ak_setting_str("AK_MUSIC_LIST", ""); int ot = ak_setting_int("AK_MUSIC_TRACK", -1);
                if (!ak_audio_level_music_state(&b, lh, st, list, sizeof list, &nth)) { snprintf(list, sizeof list, "OGM Music 1"); nth = 0; }
                if (ol && *ol) snprintf(list, sizeof list, "%s", ol);
                if (ot >= 0) nth = (u32)ot;
                if (have_mus) AK_INFO("audio", "music: %s, state %u, file %u (%s)", list, st, nth, scripted ? "the level script's pick" : "no script: the code's pick");
                if (have_mus && ak_audio_level_music(&b, list, nth, mp, sizeof mp)) {
                    ak_arena_reset(&musmem); bool hb = ak_vfs_read_part(vfs, mp, 0, 4096, &musmem, &mb);   /* (only its header is used: the delay and the loop) */
                    ak_audio_music_play(mp, hb ? mb.data : NULL, hb ? (u32)(mb.size < 4096 ? mb.size : 4096) : 0, true);
                } }
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
            ak_arena_report();
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
            if (!strcmp(levels[cur].label, "GC")) {   /* the GC map's view, read from the original (harness RS_VIEW_LOG): eye at game
                                                         (0.214, -50.31, 2.71), looking down +y tilted 5 degrees, up = -z */
                cam.pos = ak_v3_make(0.214f, 50.31f, -2.71f); cam.yaw = 3.14159265f; cam.pitch = -1.4840f;
            }
            if (camset) sscanf(camset, "%f,%f,%f,%f,%f", &cam.pos.x, &cam.pos.y, &cam.pos.z, &cam.yaw, &cam.pitch);
            play.ready = false;
            loaded = true;
        }
        if (!ak_plat_poll(&in)) break;
        u64 now = ak_plat_time_us(); f32 dt = (now - last) / 1e6f; last = now;
        if (dt > 0.1f) dt = 0.1f;
        { f32 fdt = ak_setting_float("AK_FIXED_DT", 0); if (fdt > 0) dt = fdt; }   /* tests: a fixed step per frame */
        /* SELECT is the menu button (START is left alone, so the Vita's PS + START screenshot does not change the level):
         * a tap of SELECT on its own - the next level; held with L - the level before; with R - the debug text on / off;
         * with square - play / free camera; with circle - the model gallery.  While SELECT is held those buttons do nothing else. */
        static bool sel_was = false, sel_combo = false; int menu = 0;            /* 1 next level, 2 previous, 3 text, 4 play, 5 gallery */
        {   bool sel = (in.held & AK_BTN_SELECT) != 0;
            if (in.pressed & AK_BTN_SELECT) sel_combo = false;
            if (sel) {
                u32 pr = in.pressed;
                if (pr & AK_BTN_L) menu = 2; else if (pr & AK_BTN_R) menu = 3; else if (pr & AK_BTN_SQUARE) menu = 4; else if (pr & AK_BTN_CIRCLE) menu = 5;
                if (menu) sel_combo = true;
                in.pressed &= ~(u32)(AK_BTN_L | AK_BTN_R | AK_BTN_SQUARE | AK_BTN_CIRCLE | AK_BTN_SELECT);
                in.held &= ~(u32)(AK_BTN_L | AK_BTN_R | AK_BTN_SQUARE | AK_BTN_CIRCLE);
            } else if (sel_was && !sel_combo) menu = 1;
            sel_was = sel;
            {   int tl = ak_setting_int("AK_TEST_NEXT_LEVEL", -1); if (tl >= 0 && tl == frame) menu = 1; }   /* (tests) */
        }
        if (menu == 1 || menu == 2) {
            ak_scene_models_free(&mscene); ak_scene_level_free(&scene); loaded = false;
            cur = menu == 1 ? (cur + 1) % nlevels : (cur + nlevels - 1) % nlevels;
            continue;
        }
        if (menu == 3) show = !show;
        if (menu == 5) gallery_on = !gallery_on;
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
            ak_gfx_env env = { { 0, 0, 0 }, 0, 0, ak_setting_float("AK_COLOUR_SCALE", 2.0f) };   /* PARITY(R.1) */
            ak_gfx_set_projection(&proj);
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
                    {   /* the blade: from the hilt's top end, along the hilt (as play draws it) */
                        f32 lp[3], ld[3], a[3], c[3], ax[3], al; ak_model_long_axis(hm, lp, ld);
                        for (int r = 0; r < 3; r++) ax[r] = G[r * 4] * ld[0] + G[r * 4 + 1] * ld[1] + G[r * 4 + 2] * ld[2];
                        al = sqrtf(ax[0] * ax[0] + ax[1] * ax[1] + ax[2] * ax[2]);
                        for (int r = 0; r < 3; r++) { a[r] = G[r * 4] * lp[0] + G[r * 4 + 1] * lp[1] + G[r * 4 + 2] * lp[2] + G[r * 4 + 3]; c[r] = a[r] + ax[r] / al; }
                        f32 e3[3] = { eye.x, eye.y, eye.z }; static ak_vtx bv[AK_BEAM_VERTS];
                        u32 nb = ak_beam(bv, a, c, 0.3f * 0.25f, e3, (u32)ak_setting_int("AK_GALLERY_BLADE_RGB", (int)0xFFFF2020u), 255, 255);
                        ak_gfx_set_transform(NULL);
                        if (clip && ak_setting_int("AK_GALLERY_FAN", 1)) {               /* the motion fan over the last 8 frames of the clip */
                            f32 fb[8][3], ft[8][3], fa[8]; u32 nf = 0; static ak_vtx fv[8 * 6 * 6];
                            for (u32 k = 0; k < 8; k++) if (gallery_blade(&models, m, clip, anim_t - (f32)k / 60.0f, wm, fb[nf], ft[nf])) { fa[nf] = (f32)k / 60.0f; nf++; }
                            u32 nfv = ak_saber_fan(fv, sizeof fv / sizeof fv[0], (const f32 (*)[3])fb, (const f32 (*)[3])ft, fa, nf, 0.12f, (u32)ak_setting_int("AK_GALLERY_BLADE_RGB", (int)0xFFFF2020u));
                            if (nfv) ak_gfx_draw_immediate(AK_PIPE_BEAM, NULL, fv, nfv);
                        }
                        if (nb) ak_gfx_draw_immediate(AK_PIPE_BEAM, NULL, bv, nb);
                    }
                }
            }
            if (show) {
                char line[200];
                snprintf(line, sizeof line, "Aurek %s  %s  %.1f fps  %.2f ms", AK_BUILD_ID, ak_gfx_name(), fps, frame_ms); dbg_text(8, 8, 0xFFFFFFFF, line);
                snprintf(line, sizeof line, "%s  model %u/%u: %s", levels[cur].label, gsel + 1, ngallery, m->name); dbg_text(8, 26, 0xFFFFFFFF, line);
                snprintf(line, sizeof line, "parts %u  bones %u  vertices %u  triangles %u  size %.1f m", m->nparts,
                         m->skeleton >= 0 ? models.skels[m->skeleton].nbones : 0, m->nvtx, m->nidx / 3, ext); dbg_text(8, 44, 0xFFFFFFFF, line);
                if (has_look) {
                    snprintf(line, sizeof line, "%s soldier  head %d: %s", ak_faction_name(look.faction), look.head_index + 1,
                             look.head >= 0 ? models.models[look.head].name : "none");
                    dbg_text(480, 26, 0xFFC0E0FF, line);
                }
                int c1 = has_look ? look.colour1 : col1 < 0 ? 0 : col1, c2 = has_look ? look.colour2 : col2 < 0 ? 1 : col2;
                if (clip) snprintf(line, sizeof line, "clip: %s  (%.2f s, %u keys)   colours %d / %d", clip->name, clip->duration, clip->nrot, c1, c2);
                else snprintf(line, sizeof line, "clip: none (bind pose)   colours %d / %d", c1, c2);
                dbg_text(8, 62, 0xFFFFFFFF, line);
                dbg_text(8, 80, 0xFFC0C0C0, "d-pad: model, clip  L/R: colour 1/2  square: head  right stick: turn  left stick: zoom  SELECT: level");
            }
            ak_gfx_end(&gs);
            frame++; fps_frames++;
            u64 t1 = ak_plat_time_us(); frame_ms = (t1 - now) / 1000.0f;
            if (t1 - fps_t0 >= 1000000) { fps = fps_frames * 1e6f / (f32)(t1 - fps_t0); fps_frames = 0; fps_t0 = t1; }
            if (shot && frame == shot_frame) { ak_gfx_screenshot(shot); break; }
            continue;
        }

        {   /* scripted input timeline (tests, recordings): AK_TEST_SCRIPT = "frames:lx,ly,rx,ry,buttons; ..." - buttons (actions on the PSP layout):
             * j jump (a tap of L on the segment's first frame), f fire, l lock on, s sprint, c secondary (held), g get in / out (d-pad up), o roll (circle), z zoom (triangle), r d-pad right */
            const char *sc = ak_setting_str("AK_TEST_SCRIPT", NULL);
            if (sc) {
                int at = 0; const char *q = sc;
                while (*q) {
                    int n = 0; f32 a = 0, b = 0, c = 0, d = 0; char bt[16] = ""; int used = 0;
                    if (sscanf(q, " %d:%f,%f,%f,%f,%15[a-z]%n", &n, &a, &b, &c, &d, bt, &used) < 6) { used = 0; bt[0] = 0; sscanf(q, " %d:%f,%f,%f,%f%n", &n, &a, &b, &c, &d, &used); }
                    if (!used) break;
                    if (frame >= at && frame < at + n) {
                        in.lx = a; in.ly = b; in.rx = c; in.ry = d;
                        /* the letters name actions on the PSP layout: f fire (cross), l lock on (R), c secondary (square),
                           s sprint (L held), j jump (a tap of L), g get in / out (d-pad up) */
                        if (strchr(bt, 'f')) in.held |= AK_BTN_CROSS;
                        if (strchr(bt, 'l')) in.held |= AK_BTN_R;
                        if (strchr(bt, 'c')) in.held |= AK_BTN_SQUARE;
                        if (strchr(bt, 's')) in.held |= AK_BTN_L;
                        if (frame == at && strchr(bt, 'j')) { in.held |= AK_BTN_L; in.pressed |= AK_BTN_L; }
                        if (frame == at && strchr(bt, 'g')) in.pressed |= AK_BTN_UP;
                        if (frame == at && strchr(bt, 'l')) in.pressed |= AK_BTN_R;          /* (R's press: a flyer's lift-off) */
                        if (frame == at && strchr(bt, 'o')) in.pressed |= AK_BTN_CIRCLE;   /* o: roll */
                        if (frame == at && strchr(bt, 'z')) in.pressed |= AK_BTN_TRIANGLE; /* z: zoom */
                        if (frame == at && strchr(bt, 'c')) in.pressed |= AK_BTN_SQUARE;   /* c: the secondary (pressed on its first frame) */
                        if (frame == at && strchr(bt, 'd')) in.pressed |= AK_BTN_DOWN;     /* d: d-pad down (a starfighter's target) */
                        if (frame == at && strchr(bt, 'r')) in.pressed |= AK_BTN_RIGHT;    /* r: d-pad right (the lower slot: explosive / power-up) */
                        if (frame == at && strchr(bt, 'h')) in.pressed |= AK_BTN_LEFT;     /* h: d-pad left (weapon 1 <-> 2) */
                        if (frame == at && strchr(bt, 'x')) { in.pressed |= AK_BTN_CROSS; in.held |= AK_BTN_CROSS; }   /* x: a tap of cross (pages) */
                        if (strchr(bt, 't')) in.held |= AK_BTN_TRIANGLE;            /* t: triangle held (the jetpack's rise) */
                    }
                    at += n; q += used; while (*q == ';' || *q == ' ') q++;
                }
            }
        }
        {   /* scripted input for headless tests: AK_TEST_MOVE = lx,ly,rx,ry (held), AK_TEST_JUMP = the frame to jump on */
            const char *tm = ak_setting_str("AK_TEST_MOVE", NULL);
            if (tm) sscanf(tm, "%f,%f,%f,%f", &in.lx, &in.ly, &in.rx, &in.ry);
            {   const char *ma = ak_setting_str("AK_TEST_MOVE_AT", NULL); int at; f32 m4[4];   /* "frame:lx,ly,rx,ry": a new stick from then */
                if (ma && sscanf(ma, "%d:%f,%f,%f,%f", &at, &m4[0], &m4[1], &m4[2], &m4[3]) == 5 && frame >= at) { in.lx = m4[0]; in.ly = m4[1]; in.rx = m4[2]; in.ry = m4[3]; } }
            {   int until = ak_setting_int("AK_TEST_MOVE_UNTIL", -1);       /* the frame the stick is let go */
                if (tm && until >= 0 && frame >= until) in.lx = in.ly = in.rx = in.ry = 0; }
            if (ak_setting_int("AK_TEST_JUMP", -1) == frame) { in.held |= AK_BTN_L; in.pressed |= AK_BTN_L; }   /* (a tap of L) */
            if (ak_setting_int("AK_TEST_FIRE", 0)) in.held |= AK_BTN_CROSS;
            if (ak_setting_int("AK_TEST_LOCK", 0)) in.held |= AK_BTN_R;
            if (playing && play.ready && shot && frame == shot_frame - 1)
            {   u32 th = 0, hs = 0, al[2], tot[2]; for (u32 i = 1; i <= play.nbots; i++) { th += play.target[i].hits; hs += play.target[i].headshots; }
                ak_play_counts(&play, al, tot);
                AK_INFO("test", "frame %d: %sshots %u, soldiers hit %u (head %u), kills %u, deaths %u, ammo %d/%d, alive %u/%u and %u/%u", frame,
                        "", play.bolts.fired, th, hs, play.kills, play.deaths, play.weapon.ammo, play.weapon.spare, al[0], tot[0], al[1], tot[1]);
                u32 vh = 0; for (u32 i = 1 + play.nbots; i < 1 + play.nbots + play.nveh; i++) vh += play.target[i].hits;
                AK_INFO("test", "vehicles hit %u", vh); }
            if (playing && play.ready && play.have_cq && shot && frame == shot_frame - 1) {
                char ow[64] = { 0 }; for (u32 i = 0; i < play.cq.nposts && i < 16; i++) { int o = play.match.post[i].owner; ow[i] = o == 0 ? '1' : o == 1 ? '2' : '-'; }
                AK_INFO("test", "conquest: tickets %d / %d, posts %s, captures %u, winner %d, player %s (health %.0f, deaths %u) at %.1f %.1f %.1f", play.match.tickets[0],
                        play.match.tickets[1], ow, play.match.captures, play.match.winner, play.alive ? "up" : "down", play.health, play.deaths,
                        play.ch.pos[0], play.ch.pos[1], play.ch.pos[2]);
                if (play.have_ctf) AK_INFO("test", "ctf: captures %d / %d, winner %d, flags %d %d %d (carriers %d %d %d)", play.ctf.score[0], play.ctf.score[1], play.ctf.winner, play.ctf.flag[0].present, play.ctf.flag[1].present, play.ctf.flag[2].present, play.ctf.flag[0].carrier, play.ctf.flag[1].carrier, play.ctf.flag[2].carrier);
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
                if (ak_setting_int("AK_TEST_VEH_POS", 0)) for (u32 v = 0; v < play.nveh; v++) { f32 g[3]; ak_from_game(play.veh[v].pos, g);   /* tests: where each vehicle stands, game axes */
                    AK_INFO("test", "vehicle %u %s at %.2f,%.2f,%.2f", v, play.veh[v].def ? play.veh[v].def->name : "-", g[0], g[1], g[2]); }
                AK_INFO("test", "vehicles:%s", vl);
                AK_INFO("test", "projectiles: %u fired, %u hits", play.projs.fired, play.projs.hits);
                AK_INFO("test", "pickups: %u dropped, %u taken", play.pickups_made, play.pickups_taken);
                if (play.pfx) AK_INFO("test", "pfx: %u played, %u dropped (%u particles), %u particles live", play.pfx->played, play.pfx->dropped, play.pfx->dropped_particles, ak_pfx_live(play.pfx));
                if (play.nturret) { k = 0;
                    for (u32 v = 0; v < play.nturret && k < 480; v++)
                        k += snprintf(vl + k, sizeof vl - (size_t)k, " %s:%s%.0f(%u hits)", play.turret[v].def->name, play.turret[v].alive ? "" : "wreck ", play.target[1 + play.nbots + play.nveh + v].health, play.target[1 + play.nbots + play.nveh + v].hits);
                    AK_INFO("test", "turrets:%s", vl); }
                if (play.nprop) { k = 0; u32 b0 = 1 + play.nbots + play.nveh + play.nturret;
                    for (u32 v = 0; v < play.nprop && k < 480; v++)
                        k += snprintf(vl + k, sizeof vl - (size_t)k, " %x:%s%s%.0f(%u hits)", play.prop[v].id, play.prop[v].down ? "broken " : "", play.target[b0 + v].alive ? "" : "off ", play.target[b0 + v].health, play.target[b0 + v].hits);
                    AK_INFO("test", "props:%s", vl); }
            }
        }
        if (menu == 4) playing = !playing;                                  /* SELECT + square: play (a soldier on foot) / free camera */
        if (playing && !play.ready) {
            f32 st[3] = { cam.pos.x, cam.pos.y, cam.pos.z };
            {   const char *md = ak_setting_str("AK_MODE", "");   /* (tests straight into a campaign mission: the menu's side, as line 218) */
                if ((!strcmp(md, "CMPN") || !strcmp(md, "5")) && !ak_setting_str("AK_SOLDIER", NULL)) { ak_setting_set("AK_TEAM", "1"); ak_setting_set("AK_SOLDIER", "MediumRebel"); } }
            const char *soldier = ak_setting_str("AK_SOLDIER", "Stormtrooper");
            {   /* the personalisation (08A08EF8: the join message carries the profile's body, head and colours for the player's faction) -
                   outside the campaign [assumed: the campaign keeps its own soldier], unless the settings name a head or colours */
                static int user_look = -1; if (user_look < 0) user_look = ak_setting_str("AK_HEAD", NULL) || ak_setting_str("AK_COLOUR1", NULL) || ak_setting_str("AK_COLOUR2", NULL);
                const ak_bp_object *so = ak_bp_find(&bps, "Humanoid", soldier); const char *pb; int ph, c1, c2;
                if (!user_look && ak_game_mode != 5 && so && ak_fe_personal_look(ak_bp_int(so, "Faction", -1), &pb, &ph, &c1, &c2)) {
                    char v[8]; soldier = pb; snprintf(v, sizeof v, "%d", ph); ak_setting_set("AK_HEAD", v);
                    snprintf(v, sizeof v, "%d", c1); ak_setting_set("AK_COLOUR1", v); snprintf(v, sizeof v, "%d", c2); ak_setting_set("AK_COLOUR2", v);
                }
            }
            if (!ak_play_init(&play, &level, &models, &bps, &lvl, soldier, st)) { AK_WARN("aurek", "no soldier for this level"); playing = false; }
            else AK_INFO("aurek", "playing as %s (%s, head %d) at %.1f %.1f %.1f; level memory %.1f MB", models.models[play.look.body].name, ak_faction_name(play.look.faction),
                         play.look.head_index + 1, play.ch.pos[0], play.ch.pos[1], play.ch.pos[2], lvl.used / 1048576.0);
            ak_arena_report();
            ak_level_stream_close();                    /* (every loader has run: the resources left on the disc are not read again) */
            if (play.ready) ak_play_sound_start(&play, &level, &bps);
            if (play.ready && play.pfx_tex_index >= 0 && (u32)play.pfx_tex_index < level.ntex) play.pfx_tex = scene.tex[play.pfx_tex_index];   /* the particle sheet (R.6) */
            if (play.ready && fe_ingame) {                                  /* the player waits for the menus: team, then the spawn map */
                play.alive = false; play.target[0].alive = false; play.menu_hold = true; play.dead_t = 0;
                ak_fe_open_ingame(fe_after_team || ak_game_mode == 5 ? "MP_Spawn_Location" : "MP_Team_Selection"); fe_after_team = false;   /* (the campaign: no team choice - the original goes to the spawn map) */
            }
        }
        bool fe_menu = false;
        if (playing && play.ready && fe_ingame) {
            static ak_fe_match fm; memset(&fm, 0, sizeof fm);
            fm.mode = ak_game_mode; fm.era = strncmp(levels[cur].label, "PREQUEL", 7) == 0; fm.team = play.team; fm.winner = play.have_cq ? play.match.winner : -1;
            if (ak_setting_int("AK_FE_TEST_OVER_AT", -1) >= 0 && frame >= ak_setting_int("AK_FE_TEST_OVER_AT", -1)) fm.winner = play.team;   /* (tests: a won match) */
            fm.faction[0] = play.team_faction[0]; fm.faction[1] = play.team_faction[1];
            fm.level = levels[cur].label; fm.time_left = play.have_cq && play.rules.time_limit > 0 ? play.rules.time_limit - play.match.time : -1.0f;
            for (u32 i = 0; i < play.cq.nposts && fm.nposts < AK_FE_MAX_POSTS; i++) {   /* (posts that cannot be taken are on the map too) */
                if (play.cq.post[i].absent) continue;
                memcpy(fm.post_pos[fm.nposts], play.cq.post[i].pos, 12); fm.post_owner[fm.nposts] = play.match.post[i].owner; fm.post_name[fm.nposts] = play.cq.post[i].name;
                fm.nposts++;
            }
            {   static u16 me[16]; static u32 mel; if (!mel) { u32 pl; const u16 *pf = ak_setting_str("AK_PLAYER_NAME", NULL) ? NULL : ak_fe_profile_name(&pl);   /* (the profile's name, else AK_PLAYER_NAME) */
                if (pf) { while (mel < pl && mel < 15) { me[mel] = pf[mel]; mel++; } }
                else { const char *pn = ak_setting_str("AK_PLAYER_NAME", "Player"); while (pn[mel] && mel < 15) { me[mel] = (u8)pn[mel]; mel++; } } }
                /* on the team page, before the side is chosen, the original lists the good side as friendly and the player in
                   neither list (its frame: the Alliance on the left, 8 + 8 AI soldiers) */
                bool choosing = ak_fe_page() && !strcmp(ak_fe_page(), "MP_Team_Selection");
                if (choosing) fm.team = (play.team_faction[0] & 1) ? 1 : 0;
                int t = play.team & 1;
                if (!choosing) { u32 k = fm.nnames[t]++;                       /* the player first on its side [assumed: the profile's name] */
                    fm.name[t][k] = me; fm.name_len[t][k] = mel; fm.kills[t][k] = play.tally_kills[0]; fm.deaths[t][k] = play.tally_deaths[0]; fm.alive[t][k] = play.alive; } }
            for (u32 i = 0; i < play.nbots; i++) {
                int t = play.bot[i].team & 1; if (fm.nnames[t] >= 32) continue;
                u32 n; const u16 *nm = ak_hud_bot_name(play.team_faction[t], play.bot[i].name, &n);
                if (nm) { u32 k = fm.nnames[t]; fm.name[t][k] = nm; fm.name_len[t][k] = n; fm.bot[t][k] = true; fm.alive[t][k] = play.bot[i].alive;
                          if (i + 1 < 64) { fm.kills[t][k] = play.tally_kills[i + 1]; fm.deaths[t][k] = play.tally_deaths[i + 1]; } fm.nnames[t]++; }
            }
            ak_fe_set_match(&fm);
            if (!ak_fe_page() && !play.alive && play.dead_t >= 3.0f) ak_fe_open_ingame(play.deaths ? "MP_RespawnScoreboard" : "MP_Spawn_Location");   /* (the original: three seconds of the death camera, the score board, then the spawn map) */
            if (frame == ak_setting_int("AK_FE_START_AT", -1)) in.pressed |= AK_BTN_START;   /* (tests) */
            {   static f32 over_t = 0; over_t = fm.winner >= 0 ? over_t + dt : 0;   /* the match over: the game-over page [assumed: after 5 s of its end] */
                if (over_t > 5.0f && (!ak_fe_page() || strcmp(ak_fe_page(), "MP_GameoverDialogue")) && over_t < 5.0f + dt * 1.5f) ak_fe_open_ingame("MP_GameoverDialogue"); }
            if (!ak_fe_page() && play.alive && (in.pressed & AK_BTN_START)) ak_fe_open_ingame("MP_InGame_Menu");   /* START: the pause menu */
            {   /* at an own command post (seen in the original): the top message box keeps "Press [d-pad up] to change equipment"
                   (STDTEXT 328; its \ue813 drawn as the d-pad up mark the original shows) and d-pad up there, with no vehicle to
                   board, opens EQUIPMENT AND ATTRIBUTES while play goes on; leaving it takes the loadout at once [assumed] */
                static f32 tip_t = 0;
                bool at_own = play.alive && play.in_veh < 0 && play.in_turret < 0 && play.near_post >= 0 && play.have_cq && play.match.post[play.near_post].owner == play.team;
                /* beside a turret our side can man: "\ue813 Use" (STDTEXT 0x47) in the same top box (the original's training, ct25 / ct26:
                   from the repaired turret on) - and a use zone's prompt there too [assumed: the same box] */
                u32 use_id = play.use_prompt;
                if (!use_id && play.alive && play.in_veh < 0 && play.in_turret < 0)
                    for (u32 i = 0; i < play.nturret && !use_id; i++) { const ak_turret *t = &play.turret[i];
                        if (!t->alive || !t->def->boardable || t->team != play.team) continue;
                        f32 dx = t->pos[0] - play.ch.pos[0], dz = t->pos[2] - play.ch.pos[2], r = t->rad + 2.5f;
                        if (dx * dx + dz * dz < r * r && fabsf(t->pos[1] - play.ch.pos[1]) < 5.0f) use_id = 0x47; }
                if (!use_id && play.in_veh >= 0 && play.fly_target >= 0) use_id = play.cam_lock ? 0x1B0 : play.fly_auto ? 0xF1 : 0;   /* (08A0B378: "Camera Lock
                                                                                   engaged" / "Auto-pilot engaged" while on) [assumed: the use prompts' box] */
                static f32 use_t = 0;
                if (use_id && !ak_fe_page()) { use_t -= dt; if (use_t <= 0) { ak_hud_message(3, use_id, NULL, 0); use_t = 3.0f; } } else use_t = 0;
                if (at_own && !ak_fe_page() && !use_id) { tip_t -= dt; if (tip_t <= 0) { ak_hud_message(3, 328, NULL, 0); tip_t = 3.0f; } } else tip_t = 0;
                if (frame == ak_setting_int("AK_TEST_EQUIP_AT", -1)) { play.want_equipment = true; at_own = true; }   /* (tests) */
                if (frame == ak_setting_int("AK_TEST_TIP_AT", -1)) ak_hud_message(3, 328, NULL, 0);
                if (play.want_equipment) { play.want_equipment = false; if (at_own && !ak_fe_page()) ak_fe_open_customisation(); }
            }
            if (ak_fe_page()) {
                fe_menu = true;
                { const char *keys = ak_setting_str("AK_FE_KEYS2", NULL);   /* tests: the in-match pages' buttons, as AK_FE_KEYS */
                  static int kf = 0; if (keys) { int k = kf / 4, ph = kf % 4; const char *q = keys; for (int j = 0; j < k && *q; j++) { q = strchr(q, ','); q = q ? q + 1 : ""; }
                      if (kf > 20) { k = (kf - 21) / 4; ph = (kf - 21) % 4; q = keys; for (int j = 0; j < k && *q; j++) { q = strchr(q, ','); q = q ? q + 1 : ""; } }
                      if (*q && ph == 0 && kf > 20) { u32 m = *q == 'U' ? AK_BTN_UP : *q == 'D' ? AK_BTN_DOWN : *q == 'L' ? AK_BTN_LEFT : *q == 'R' ? AK_BTN_RIGHT : *q == 'X' ? AK_BTN_CROSS : *q == 'O' ? AK_BTN_CIRCLE : *q == 'S' ? AK_BTN_SQUARE : *q == 'T' ? AK_BTN_TRIANGLE : 0; in.pressed |= m; }
                      if (kf <= 20 || ph == 0) {} kf++; } }
                int ev = ak_fe_update(&in, dt);
                if (ev == AK_FE_TEAM) {
                    /* 1 the good side, 2 the evil side, 0 auto (stays); each side's soldier: the era's faction's trooper [assumed:
                       MediumRebel / Stormtrooper, Clonetrooper / Battle_Droid until the customisation menu is ported] */
                    int t = ak_fe_team(), era = strncmp(levels[cur].label, "PREQUEL", 7) == 0;
                    if (t == 1 || t == 2) {
                        int fac = era ? (t == 1 ? 0 : 1) : (t == 1 ? 2 : 3);
                        static const char *trooper[4] = { "Clonetrooper", "Battle_Droid", "MediumRebel", "Stormtrooper" };
                        if (fac != play.team_faction[play.team]) {
                            char v[4]; snprintf(v, sizeof v, "%d", ak_faction_team(fac) + 1); ak_setting_set("AK_TEAM", v); ak_setting_set("AK_SOLDIER", trooper[fac]);
                            play.ready = false; fe_after_team = true;
                        }
                    }
                } else if (ev == AK_FE_QUIT && ak_game_mode == 5 && !strncmp(levels[cur].label, "CAMPAIGN ", 9) && play.have_cq && play.match.winner == play.team) {
                    /* the campaign's won mission: its game-over page goes on to the next mission (0x08C29918 + 1 of 0x08B1C060's list)
                       [assumed: FE_ProcessGameover's campaign path not traced; the mission's FMV, load screen and the campaign save not done] */
                    static const char *const camp[11] = { "YAVIN_IV", "SPACE_ALDERAAN", "ORD_MANTELL", "SPACE_KESSEL", "TATOOINE", "BOZ_PITY",
                                                          "HOTH_ION_CANNON", "SPACE_HOTH", "KORRIBAN", "SULLUST", "ENDOR" };
                    int li = 0; for (int k = 0; k < 11; k++) if (!strcmp(levels[cur].label + 9, camp[k])) li = k;
                    ak_fe_campaign_won();
                    if (li < 10) { li++; char want[64]; snprintf(want, sizeof want, "CAMPAIGN %s", camp[li]);
                        for (int i = 0; i < nlevels; i++) if (!strcmp(levels[i].label, want)) cur = i;
                        AK_INFO("fe", "campaign: next mission %s", want); ak_fe_close(); loaded = false; play.ready = false; }
                    else { playing = false; fe_ingame = false; fe_on = ak_fe_open("MP_MainMenu"); play.ready = false; }
                } else if (ev == AK_FE_QUIT) {                              /* back to the main menu */
                    playing = false; fe_ingame = false; fe_on = ak_fe_open("MP_MainMenu"); play.ready = false;
                } else if (ev == AK_FE_START && ak_game_mode == 5 && !strncmp(levels[cur].label, "CAMPAIGN ", 9)) {
                    /* the campaign: a won mission goes on to the next in the list (0x08C29918 + 1, 0x08B1C060), a lost one again
                       [assumed: the list's order; the mission's FMV and load screen between them not done] */
                    static const char *const camp[11] = { "YAVIN_IV", "SPACE_ALDERAAN", "ORD_MANTELL", "SPACE_KESSEL", "TATOOINE", "BOZ_PITY",
                                                          "HOTH_ION_CANNON", "SPACE_HOTH", "KORRIBAN", "SULLUST", "ENDOR" };
                    int li = 0; for (int k = 0; k < 11; k++) if (!strcmp(levels[cur].label + 9, camp[k])) li = k;
                    if (play.have_cq && play.match.winner == play.team && li < 10) li++;
                    char want[64]; snprintf(want, sizeof want, "CAMPAIGN %s", camp[li]);
                    for (int i = 0; i < nlevels; i++) if (!strcmp(levels[i].label, want)) cur = i;
                    AK_INFO("fe", "campaign: %s", want); loaded = false; play.ready = false;
                } else if (ev == AK_FE_START) {                             /* the game-over page's Continue: the play list's next map */
                    int md = 0; const char *lv = ak_fe_launch(&md); static const char *codes[4] = { "CQST", "CTF1", "CTF2", "HCTF" };
                    ak_setting_set("AK_MODE", codes[md & 3]); for (int i = 0; i < nlevels; i++) if (!strcmp(levels[i].label, lv)) cur = i;
                    loaded = false; play.ready = false;
                } else if (ev == AK_FE_RESTART) {
                    play.ready = false;
                } else if (ev == AK_FE_LOADOUT) {                           /* the customisation menu's loadout: the next soldier's */
                    int sel[8]; const char *nm[5]; ak_fe_loadout(sel, nm); char v[8];
                    ak_setting_set("AK_WEAPON", nm[0] ? nm[0] : ""); ak_setting_set("AK_WEAPON2", nm[1] ? nm[1] : ""); ak_setting_set("AK_EXPLOSIVE", nm[2] ? nm[2] : ""); ak_setting_set("AK_POWERUP", nm[4] ? nm[4] : ""); ak_setting_set("AK_SPECIAL", nm[3] ? nm[3] : "");
                    snprintf(v, sizeof v, "%d", sel[5]); ak_setting_set("AK_HEALTH_LEVEL", v);
                    snprintf(v, sizeof v, "%d", sel[6]); ak_setting_set("AK_SPEED_LEVEL", v);
                    /* [assumed: Capture Speed Level n is the rate table's n (None the 1.0 measured at the menu's default)] */
                    snprintf(v, sizeof v, "%d", sel[7] ? sel[7] : 1); ak_setting_set("AK_CAPTURE_LEVEL", v);
                    ak_play_loadout(&play, &models, &bps);
                    AK_INFO("aurek", "loadout: %s / %s / %s, health %d speed %d capture %d", nm[0] ? nm[0] : "-", nm[1] ? nm[1] : "-", nm[2] ? nm[2] : "-", sel[5], sel[6], sel[7]);
                } else if (ev == AK_FE_KILL) {
                    ak_play_damage(&play, 1e9f);                              /* (the soldier dies: the spawn map follows) */
                } else if (ev == AK_FE_SPAWN) {
                    int k = ak_fe_spawn_post(), idx = -1, seen = 0;           /* (the page's index among the shown posts -> the conquest post) */
                    for (u32 i = 0; i < play.cq.nposts; i++) { if (play.cq.post[i].absent) continue; if (seen++ == k) idx = (int)i; }
                    play.spawn_post = idx; play.menu_spawn = true; ak_fe_close();
                }
                memset(&in, 0, sizeof in);                                     /* (the menu has the pad) */
            }
        }
        f32 fovy = 1.05f;
        bool gc_map = !strcmp(levels[cur].label, "GC");
        if (gc_map) fovy = 0.8204f;   /* the GC map's projection (harness RS_PROJ_LOG: 1.30326 x, 2.29986 y - 47 degrees high) */
        bool fe_paused = fe_menu && ak_fe_page() && strcmp(ak_fe_page(), "MP_Team_Selection") && strcmp(ak_fe_page(), "MP_Spawn_Location");
        if (playing && play.ready) {
            if (!fe_paused) ak_play_update(&play, &models, &in, dt);
            if (ak_fe_has_profile()) {                                      /* the profile's counters and medals (089775E0, 08972F90) */
                for (int k = 0; k < 49; k++) for (; play.stat_add[k]; play.stat_add[k]--) ak_fe_stat(k);
                static bool told; int w = play.have_cq ? play.match.winner : play.have_ctf ? play.ctf.winner : -1;
                if (w < 0) { if (told) ak_fe_medal_clear(); told = false; }
                else if (!told) { told = true;
                    if (w == play.team && strcmp(levels[cur].label, "GC")) {
                        const char *sp = strchr(levels[cur].label, ' '); ak_fe_match_won(sp ? sp + 1 : levels[cur].label, ak_game_mode);
                        if (ak_setting_int("AK_AUTOSAVE", 1)) ak_fe_profile_save();   /* [assumed: saved at the match's end] */
                    } }
            }
            ak_play_camera(&play, dt, &cam.pos, &cam.yaw, &cam.pitch, &fovy); if (getenv("AK_DEBUG_CAMPOS")) fprintf(stderr, "[campos] %.3f %.3f %.3f yaw %.4f pitch %.4f fovy %.3f\n", cam.pos.x, cam.pos.y, cam.pos.z, cam.yaw, cam.pitch, fovy);
            ak_play_sound_update(&play, dt);
            if (play.gc_result.done && gc_level >= 0 && (gc_end_t += dt) > ak_setting_float("AK_GC_RETURN_S", 4.0f)) {   /* a GC battle over: back to the map [assumed: 4 s, the original shows its results pages] */
                gc_back = true; gc_back_res.winner_faction = play.gc_result.winner_faction; gc_back_res.left[0] = play.gc_result.left[0]; gc_back_res.left[1] = play.gc_result.left[1];
                AK_INFO("gc", "back to the map: winning faction %d, left %d / %d", gc_back_res.winner_faction, gc_back_res.left[0], gc_back_res.left[1]);
                cur = gc_level; gc_level = -1; playing = false; loaded = false; play.ready = false; ak_setting_set("AK_GC_TICKETS", ""); continue;
            }
            if (play.snd.music_req && have_mus) {                          /* the match is over: the level's victory / defeat music */
                char mp[160]; ak_blob mb;
                if (ak_audio_level_music(&b_level_keep, play.snd.music_req, 0, mp, sizeof mp)) { ak_arena_reset(&musmem); bool hb = ak_vfs_read_part(vfs, mp, 0, 4096, &musmem, &mb); ak_audio_music_play(mp, hb ? mb.data : NULL, hb ? (u32)(mb.size < 4096 ? mb.size : 4096) : 0, false); }
                play.snd.music_req = NULL;
            }
        } else if (gc_map && gc_screen) {
            /* the GC map: its camera from the conquest (the map view or a sector close-up); the pad drives the conquest (app/gc_screen)
               after the view is built below */
            f32 cp[3]; ak_gc_screen_camera(gc_screen, cp, &cam.yaw, &cam.pitch); cam.pos = ak_v3_make(cp[0], cp[1], cp[2]);
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
        ak_m4 proj = ak_m4_perspective(fovy, (f32)w / (f32)h, playing && play.ready ? 0.25f : ak_setting_float("AK_NEAR", 0.75f), ak_setting_float("AK_FAR", 8000.0f));   /* PARITY(9.1) */
        ak_m4 view = ak_m4_view_yaw_pitch(cam.pos, cam.yaw, cam.pitch), vp = ak_m4_mul(&proj, &view);
        if (gc_map && gc_screen) {
            { const char *keys = ak_setting_str("AK_GC_KEYS", NULL);   /* tests: one button every 8 frames from frame 10, as AK_FE_KEYS */
              if (keys && frame >= 10) { int k = (frame - 10) / 8, ph = (frame - 10) % 8; const char *q = keys; for (int j = 0; j < k && *q; j++) { q = strchr(q, ','); q = q ? q + 1 : ""; }
                  if (*q && ph == 0) in.pressed |= *q == 'U' ? AK_BTN_UP : *q == 'D' ? AK_BTN_DOWN : *q == 'L' ? AK_BTN_LEFT : *q == 'R' ? AK_BTN_RIGHT : *q == 'X' ? AK_BTN_CROSS : *q == 'O' ? AK_BTN_CIRCLE : *q == 'S' ? AK_BTN_SQUARE : *q == 'T' ? AK_BTN_TRIANGLE : *q == '1' ? AK_BTN_R : *q == 'P' ? AK_BTN_START : 0u; } }
            char gc_sav[400]; snprintf(gc_sav, sizeof gc_sav, "%s/gc_conquest.sav", ak_plat_user_dir());
            if (gc_screen->phase == 4 && !gc_screen->win_open && ak_fe_init(vfs)) {   /* the game over: 08A3B09C opens the winner's page */
                ak_fe_var("Menus.GCDisplayVictoryMedalText", ak_fe_stat_value(34) == 0);   /* (08A3B09C: the medal's text while counter 34 was 0, then + 1) */
                if (gc_screen->g.winner == 0) { ak_fe_stat(34); if (ak_setting_int("AK_AUTOSAVE", 1)) ak_fe_profile_save(); }   /* [assumed: on the player's victory only, as the page] */
                /* 08A3B09C: the page by the player's side's faction (08A38508 +0x2C == 3: 0x8154D073, else 0xFC9D4FB7) - the victory
                   pages; a defeat shows the map's "You've been defeated" (0x61) [assumed: 08A3B09C runs on the player's victory only] */
                if (gc_screen->g.winner == 0) gc_screen->win_open = ak_fe_open(gc_screen->g.side[0].faction == 3 ? "MP_Win_Empire" : "MP_Win_Rebel");
                else gc_screen->win_open = true;
                remove(gc_sav);
            }
            if (gc_screen->win_open) {                   /* any button: the main menu [assumed] */
                if (in.pressed & (AK_BTN_CROSS | AK_BTN_CIRCLE | AK_BTN_START)) { ak_fe_close(); gc_screen->win_open = false; gc_screen->ready = false; fe_on = ak_fe_open("MP_MainMenu"); continue; }
            } else if (gc_screen->quit_open) {           /* START: MP_Quit (Resume / Quit Without Saving / Save and Quit, each confirmed) */
                if (!ak_fe_page()) gc_screen->quit_open = false;
                else { int ev = ak_fe_update(&in, dt);
                    if (ev == AK_FE_GC_QUIT) {
                        int q = ak_fe_gc_quit(); gc_screen->quit_open = false;
                        if (q == 2) { bool ok = ak_gc_screen_save(gc_screen, gc_sav); AK_INFO("gc", "saved the conquest to %s: %s", gc_sav, ok ? "ok" : "failed"); }
                        if (q == 1 || q == 2) { ak_fe_var("BFF.HasGalacticConquestBeenPlayed", q == 2); fe_on = ak_fe_open("MP_MainMenu"); continue; }
                    } }
            } else if (!gc_screen->tech_open && (in.pressed & AK_BTN_START) && ak_fe_init(vfs)) {
                gc_screen->quit_open = ak_fe_open("MP_Quit");
            } else if (gc_screen->tech_open) {           /* Buy Tech/Comm: BFF_GALACTICCONQUEST's MP_TechPurchase over the map */
                ak_fe_gc fg;
                if (!ak_fe_page()) {
                    ak_fe_init(vfs); ak_gc_screen_tech(gc_screen, &fg); if (!ak_fe_open_gc("MP_TechPurchase", &fg)) gc_screen->tech_open = false;
                } else if (in.pressed & AK_BTN_CIRCLE) { ak_fe_close(); gc_screen->tech_open = gc_screen->tech_enemy = false; }   /* Back */
                else if (in.pressed & AK_BTN_R) {           /* R1: the opponent's technology and commanders, and back */
                    gc_screen->tech_enemy = !gc_screen->tech_enemy; ak_fe_gc_enemy(gc_screen->tech_enemy); ak_gc_screen_tech(gc_screen, &fg); ak_fe_set_gc(&fg);
                }
                else if (ak_fe_update(&in, dt) == AK_FE_GC_BUY) {
                    int i, k = ak_fe_gc_choice(&i); ak_gc_screen_tech_buy(gc_screen, k, i); ak_gc_screen_tech(gc_screen, &fg); ak_fe_set_gc(&fg);
                }
            } else { if (ak_setting_int("AK_GC_TEST_SELECT", 0)) in.held |= AK_BTN_SELECT;   /* (tests: select held) */
                ak_gc_screen_update(gc_screen, &in, &vp, dt); }
            if (gc_screen->battle_launch) {              /* Attack: the battle as a Conquest match on its level, each side's troops as tickets */
                int tk[2], pf; const char *lv = ak_gc_screen_battle_setup(gc_screen, tk, &pf);
                char want[64]; snprintf(want, sizeof want, "CLASSIC %s", lv); for (char *c = want; *c; c++) *c = (char)toupper((unsigned char)*c);
                int to = -1; for (int i = 0; i < nlevels; i++) if (!strcmp(levels[i].label, want)) to = i;
                if (to < 0) { int surv[2] = { 0, 0 }; AK_WARN("gc", "no level %s: auto-resolved", want); gc_screen->battle_live = false; (void)surv; gc_screen->battle_launch = false; }
                else {
                    char v[32]; snprintf(v, sizeof v, "%d,%d", tk[0], tk[1]); ak_setting_set("AK_GC_TICKETS", v); ak_setting_set("AK_MODE", "CQST");
                    static const char *trooper[4] = { "Clonetrooper", "Battle_Droid", "MediumRebel", "Stormtrooper" };
                    snprintf(v, sizeof v, "%d", ak_faction_team(pf) + 1); ak_setting_set("AK_TEAM", v); ak_setting_set("AK_SOLDIER", trooper[pf & 3]);
                    AK_INFO("gc", "battle on %s: tickets %d / %d, player faction %d", want, tk[0], tk[1], pf);
                    gc_level = cur; cur = to; loaded = false; playing = true; gc_end_t = 0; continue;
                }
            }
        }
        ak_gfx_env env = { { 0.55f, 0.62f, 0.70f }, ak_setting_float("AK_FOG_START", 0), ak_setting_float("AK_FOG_END", 0),
                           ak_setting_float("AK_COLOUR_SCALE", 2.0f) };   /* PARITY(R.1) */
        {   /* the level's own fog (PARITY R.2): linear from 0 to the FOG chunk's end in its colour, when its flag is on.  AK_FOG is a
               percentage of it as in the PSP port's RS_FOG (distances x (2 - AK_FOG / 100), at least 0.05): 100 the game's, the
               default 25 the port's farther fog; AK_FOG_START / AK_FOG_END override it */
            static ak_level_fog lf; static const void *lf_of = NULL;
            if (lf_of != (const void *)level.file.data) { lf_of = level.file.data; ak_level_fog_read(&level, &lf); ak_scene_set_sky_fog(lf.on ? lf.sky : -1); }
            if (lf.on && env.fog_end <= env.fog_start) {
                f32 k = 2.0f - ak_setting_float("AK_FOG", ak_setting_int("AK_CLASSIC", 0) ? 100.0f : 25.0f) / 100.0f; if (k < 0.05f) k = 0.05f;
                memcpy(env.fog_rgb, lf.rgb, 12); env.fog_start = 0; env.fog_end = lf.end * k;
            }
        }
        ak_gfx_set_projection(&proj);
        ak_gfx_begin(gc_map ? 0xFF000000u : (0x6B5A4Cu | 0xFF000000u), &vp, &env);
        if (ak_setting_int("AK_SKY", 1)) ak_scene_sky_draw(&scene, &proj, &view, ak_setting_float("AK_FAR", 8000.0f) * 0.45f);
        {   static f32 clock_; clock_ += dt; ak_scene_set_time(clock_); }   /* (the scrolling textures' clock) */
        ak_scene_stats ss; memset(&ss, 0, sizeof ss);
        /* the GC map: its Env (a grey 44-triangle shell around the galaxy) is not in the original's picture (harness, 2026-11-21:
           stars and the galaxy behind the planets) [assumed: not drawn] */
        if (strcmp(levels[cur].label, "GC")) ak_scene_level_draw(&scene, &vp, &ss);
        else if (gc_screen) ak_gc_screen_draw_back(gc_screen, &vp);
        u32 ents_drawn = 0;
        if (show_ents && bindm) {
            ak_frustum fr = ak_frustum_from(&vp);
            for (u32 i = 0; i < ents.n; i++) {
                const ak_entity *e = &ents.e[i];
                if (!e->placed) continue;
                if (playing && !((e->modes >> ak_game_mode) & 1)) continue;   /* PARITY(5.4): not in this mode (08A269DC disables it) */
                if (playing && play.ready && ak_play_entity_hidden(&play, e->id)) continue;   /* (a campaign objective's marker while it is not active) */
                if (playing && play.ready && play.nveh && e->flagged && (e->type == 27 || e->type == 13)) continue;   /* playing: the vehicles themselves stand there */
                if (playing && play.ready && play.nturret && e->type == 30) continue;   /* playing: the turrets are drawn with their moving parts */
                s32 mi = e->model[0] >= 0 ? e->model[0] : e->model[1];
                const ak_model *m = &models.models[mi];
                f32 r = m->radius, mn[3] = { e->pos[0] - r, e->pos[1] - r, e->pos[2] - r }, mx[3] = { e->pos[0] + r, e->pos[1] + r, e->pos[2] + r };
                if (!ak_frustum_aabb(&fr, mn, mx)) continue;
                f32 dx = e->pos[0] - cam.pos.x, dy = e->pos[1] - cam.pos.y, dz = e->pos[2] - cam.pos.z, d = sqrtf(dx * dx + dy * dy + dz * dz);
                f32 lod_d = (r < 2 ? 2 : r) * ak_setting_float("AK_LOD_SCALE", 12.0f);   /* PARITY(R.5) */
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
            {   ak_hud_state hs; memset(&hs, 0, sizeof hs);                     /* the game's HUD (app/hud.c) */
                hs.alive = play.alive; hs.use_text = 0; hs.counter_val = play.counter_val; hs.counter_total = play.counter_total; hs.timer = play.hud_timer; hs.timer_on = play.hud_timer_on; hs.reticle = play.in_veh < 0 && play.in_turret < 0;
                hs.health = play.health; hs.health_max = play.max_health; hs.weapon_name_t = -1; hs.weapon_name = hs.weapon2_name = -1; hs.weapon2_text = -1;
                if (play.armed && play.weapon.def && play.in_veh < 0 && play.in_turret < 0) {
                    hs.weapon = play.weapon.def->hud_icon; hs.ammo = play.weapon.ammo;
                    /* the rest as whole clips (the original: Blaster Rifle 25 a clip, MaxClips 5 -> "25  4") */
                    hs.spare = play.weapon.def->clip > 0 && play.weapon.spare >= 0 ? (play.weapon.spare + play.weapon.def->clip - 1) / play.weapon.def->clip : play.weapon.spare;
                    if (play.gren_ok && play.gren_icon) { hs.weapon2 = play.gren_icon; hs.ammo2 = play.gren_left; hs.spare2 = -1; }   /* the explosive slot below it */
                    if (play.pu_sel && play.pu_kind >= 0 && play.pu_icon) {        /* the power-up in the lower slot (d-pad right): its icon, the recharge as the bar [assumed: the original's "Ready!" text not drawn] */
                        hs.weapon2 = play.pu_icon; hs.ammo2 = -1; hs.spare2 = -1; hs.weapon2_name = play.pu_name; if (play.pu_cool <= 0 && play.pu_t < 0) hs.weapon2_text = 0x9F; }
                    static bool was_alive; static f32 name_t = -1;
                    static int was_wsel;
                    if ((play.alive && !was_alive) || play.wsel != was_wsel) name_t = 0; else if (name_t >= 0) name_t += dt;   /* (the names show for 5 s after a spawn,
                                                                                    and after a switch - the original showed "Blaster Pistol" 2-3 s, harness ct22 [assumed: the same timer]) */
                    was_wsel = play.wsel;
                    was_alive = play.alive;
                    hs.weapon_name = play.wdef.bp ? ak_bp_int(play.wdef.bp, "Weapon_Name", -1) : -1; hs.weapon2_name = play.pu_sel && play.pu_kind >= 0 ? play.pu_name : play.gren_name; hs.weapon_name_t = name_t; }
                hs.prequel = strstr(levels[cur].path, "PREQUEL") != NULL;
                if (play.have_cq && !play.rules.no_bleed) { hs.tickets = true; hs.tickets_own = play.match.tickets[play.team]; hs.tickets_enemy = play.match.tickets[1 - play.team];
                                    hs.faction_own = play.team_faction[play.team]; hs.faction_enemy = play.team_faction[1 - play.team]; }
                if (play.have_ctf) { hs.tickets_own = play.ctf.score[play.team]; hs.tickets_enemy = play.ctf.score[1 - play.team]; }   /* CTF: the captures in their place (08A5B80C) */
                static ak_hud_blip blips[256]; u32 nb = 0;                   /* the radar's blips */
                hs.radar = true; hs.space = play.is_space; hs.team = play.team; memcpy(hs.fwd, play.aim, 12);
                if (play.in_veh >= 0) memcpy(hs.pos, play.veh[play.in_veh].pos, 12); else memcpy(hs.pos, play.ch.pos, 12);
                for (u32 i = 0; i < play.nbots && nb < 256; i++) if (play.bot[i].alive) {
                    ak_hud_blip *b = &blips[nb++]; memcpy(b->pos, play.bot[i].ch.pos, 12); b->kind = 0; b->team = play.bot[i].team; }
                if (play.have_cq) for (u32 i = 0; i < play.cq.nposts && nb < 256; i++) if (!play.cq.post[i].absent) {
                    ak_hud_blip *b = &blips[nb++]; memcpy(b->pos, play.cq.post[i].pos, 12); b->kind = 1;
                    int o = play.match.post[i].owner; b->team = o == 0 || o == 1 ? o : 4; }
                for (u32 i = 0; i < play.nveh && nb < 256; i++) if (play.veh[i].alive && play.veh[i].driver < 0 && (s32)i != play.in_veh) {
                    ak_hud_blip *b = &blips[nb++]; memcpy(b->pos, play.veh[i].pos, 12); b->kind = 2; b->team = 4; }
                hs.blips = blips; hs.nblips = nb; hs.dt = dt;
                {   f32 lp[3];                                                 /* the lock-on's point on the 480 x 272 screen */
                    if (play.in_veh < 0 && play.in_turret < 0 && ak_play_lock_point(&play, lp) && hud_project(&vp, lp, &hs.lock_x, &hs.lock_y)) {
                        hs.lock = true; hs.lock_t = play.lock_t; hs.lock_head = play.wdef.headshots;
                        if (ak_setting_int("AK_DEBUG_HUD", 0) > 1) AK_INFO("hud", "lock at %.0f %.0f, %.2f s", hs.lock_x, hs.lock_y, hs.lock_t);
                    }
                }
                /* in a vehicle or a turret: its health, its weapons (HardpointW1 above, HardpointW2 below), the reticle where its guns
                 * point - 1000 ahead of it (089DC9CC: the aiming frame's forward), walkers 1000 ahead of the camera (089C1064),
                 * turrets 100 ahead (089B6F74) - and its lock (UI_Target_Select, 0x5580D8FF, once it locks: 08A523B4) */
                if (play.in_veh >= 0 || play.in_turret >= 0) {
                    static bool lock_armed;
                    hs.vehicle = true; hs.reticle = false;
                    const ak_vehicle *vh = play.in_veh >= 0 ? &play.veh[play.in_veh] : NULL;
                    const ak_turret *tu = vh ? NULL : &play.turret[play.in_turret];
                    const ak_weapon_def *gun = vh ? (vh->def->armed ? &vh->def->gun : NULL) : (tu->def->armed ? &tu->def->gun : NULL);
                    hs.health = vh ? vh->health : tu->health; hs.health_max = vh ? vh->def->health : tu->def->health;
                    if (gun) { hs.weapon = gun->hud_icon; hs.ammo = -1; hs.spare = -1; }
                    if (vh && vh->def->sec.armed) {
                        const ak_secondary *sc = &vh->def->sec;
                        if (hs.weapon) { hs.weapon2 = sc->hud_icon; hs.ammo2 = sc->clip < 0 ? -1 : vh->sec_ammo; hs.spare2 = -1; }
                        else { hs.weapon = sc->hud_icon; hs.ammo = sc->clip < 0 ? -1 : vh->sec_ammo; hs.spare = -1; }
                    }
                    if (gun && play.aim_ok) {
                        const f32 *from = vh ? (vh->def->kind == AK_VEH_WALKER ? play.eye : vh->pos) : tu->pos; f32 reach = vh ? 1000.0f : 100.0f;
                        f32 ap[3] = { from[0] + play.aim[0] * reach, from[1] + play.aim[1] * reach, from[2] + play.aim[2] * reach };
                        hs.aim = hud_project(&vp, ap, &hs.aim_x, &hs.aim_y);
                    }
                    if (vh && vh->lock >= 0 && play.target[vh->lock].alive) {
                        const ak_target *t = &play.target[vh->lock];
                        f32 lt = vh->def->lock_time > 0 ? vh->def->lock_time : 1.0f;
                        hs.locked = vh->locked; hs.lock_fill = vh->locked ? 1.0f : vh->lock_t / lt; if (hs.lock_fill > 1) hs.lock_fill = 1;
                        hs.lock = hud_project(&vp, t->feet, &hs.lock_x, &hs.lock_y);
                        if (!vh->locked && hs.lock_fill > 0) lock_armed = true;
                        else if (vh->locked && lock_armed) { lock_armed = false; ak_audio_play("UI_Target_Select", vh->pos, false); }
                    } else lock_armed = false;
                }
                {   /* the level's colour (HUD +0x1C, 08A5D0A0: HOTH and HOTH_ION_CANNON black); the zoom view; the ring, bars and target */
                    const char *ln = strrchr(levels[cur].path, '/'); ln = ln ? ln + 1 : levels[cur].path;
                    hs.dark = !strcasecmp(ln, "HOTH.PSP") || !strcasecmp(ln, "HOTH_ION_CANNON.PSP");
                    hs.zoomed = false; hs.weapon2_bar = -1; if (play.pu_sel && play.pu_kind >= 0 && play.pu_cool > 0 && play.pu_recup > 0) hs.weapon2_bar = 1.0f - play.pu_cool / play.pu_recup; hs.scope = play.zoom > 0 && play.in_veh < 0 && play.in_turret < 0;   /* (the camera mode 089DD9AC tests never comes up: its overlay picture, table
                                                                                index 0x26, is on no disc file, and the game would read through a null picture
                                                                                (08A51AA0 -> 08A5D6D0) - the sniper zoom is not that mode) */
                    static f32 bar_full_t; f32 bar_fill = -1; s32 tgt = -1;
                    if (!hs.vehicle) {
                        /* on foot: the ring about the screen's middle (240, 136; 08A5C958) - reloading (state 2: 1 - left / ReloadTime),
                         * else the heat x 0.01 (08999378); the stamina bar (08A5B328: stamina / its top); the target - the lock's */
                        hs.ring_x = 240; hs.ring_y = 136;
                        if (play.armed && play.weapon.def) {
                            if (play.weapon.reload_t > 0 && play.weapon.def->reload_time > 0) {
                                f32 v = 1.0f - play.weapon.reload_t / play.weapon.def->reload_time; hs.ring_type = 1; hs.ring_value = v < 0 ? 0 : v > 1 ? 1 : v;
                            } else { f32 v = play.weapon.heat.heat * 0.01f; hs.ring_type = 3; hs.ring_value = v < 0 ? 0 : v > 100 ? 100 : v; }
                        }
                        hs.bar = true; hs.bar_soldier = true; bar_fill = play.stamina_max > 0 ? play.stamina / play.stamina_max : 0;
                        tgt = play.lock;
                    } else {
                        const ak_vehicle *vh = play.in_veh >= 0 ? &play.veh[play.in_veh] : NULL;
                        const ak_turret *tu = vh ? NULL : &play.turret[play.in_turret];
                        bool guns = vh ? vh->def->armed : tu->def->armed;
                        /* the ring about the projected aim point (08A5C3F0), the first barrel's heat x 0.01 (089C8AA4) */
                        if (guns && hs.aim) { hs.ring_x = hs.aim_x; hs.ring_y = hs.aim_y; f32 v = (vh ? vh->heat[0].heat : tu->heat[0].heat) * 0.01f;
                                              hs.ring_type = 3; hs.ring_value = v < 0 ? 0 : v > 100 ? 100 : v; }
                        if (vh) {   /* the energy bar (08A5B328): the energy, or for one not Boardable its health; the energy icon */
                            hs.bar = true; hs.bar_soldier = false;
                            bar_fill = vh->def->boardable ? (vh->def->energy_max > 0 ? vh->energy / vh->def->energy_max : 0) : (vh->def->health > 0 ? vh->health / vh->def->health : 0);
                            if (vh->def->sec.armed && vh->sec_reload > 0 && vh->def->sec.reload > 0) {   /* the lower weapon reloading */
                                f32 v = 1.0f - vh->sec_reload / vh->def->sec.reload; hs.weapon2_bar = v < 0 ? 0 : v > 1 ? 1 : v; }
                            tgt = vh->lock;
                            /* a starfighter's chosen target (d-pad down: +0x1C0, the panel's vfunc +0x10C - 08A566C0) */
                            if (vh->def->kind == AK_VEH_FLYER && play.fly_target >= 0) tgt = play.fly_target;
                        }
                    }
                    if (ak_setting_int("AK_DEBUG_HUD", 0) > 2) AK_INFO("hud", "ring %d %.2f at %.0f %.0f, bar %.2f, target %d", hs.ring_type, hs.ring_value, hs.ring_x, hs.ring_y, bar_fill, tgt);
                    if (bar_fill >= 0) { hs.bar_fill = bar_fill; if (bar_fill < 1.0f) bar_full_t = 0; else bar_full_t += dt; hs.bar_full_t = bar_full_t; }
                    if (play.jet_ok) { static f32 jet_full_t; hs.jet = true; hs.jet_pack = true; hs.jet_using = play.jet_on; hs.jet_fill = play.jet_fuel / 100.0f;   /* (the jetpack's bar, 08A5AE84) */
                        if (hs.jet_fill < 1.0f || play.jet_on) jet_full_t = 0; else jet_full_t += dt; hs.jet_full_t = jet_full_t; }
                    hs.target_dist = -1;
                    if (tgt >= 0 && play.target[tgt].alive) { hs.target = true; hs.target_health = play.target[tgt].health; hs.target_max = play.target[tgt].max_health;
                        if (tgt >= 1 && (u32)(tgt - 1) < play.nbots) { const ak_play_bot *tb = &play.bot[tgt - 1];   /* a soldier: its name */
                            hs.target_name = ak_hud_bot_name(play.team_faction[tb->team], tb->name, &hs.target_name_len); }
                        else if ((u32)tgt >= 1 + play.nbots && (u32)tgt < 1 + play.nbots + play.nveh && play.in_veh >= 0) {
                            /* a craft: its pilot's name (089C6DE0, the vehicle's vfunc +0x58: the driver's) and, in a starfighter, the
                               distance - "%s  %d" (08A566C0; "%s %s" with "(Shielded)" for a shielded one - none in Aurek yet) */
                            const ak_vehicle *tv = &play.veh[tgt - 1 - play.nbots], *mv = &play.veh[play.in_veh];
                            if (tv->driver > 0 && (u32)(tv->driver - 1) < play.nbots) { const ak_play_bot *tb = &play.bot[tv->driver - 1];
                                hs.target_name = ak_hud_bot_name(play.team_faction[tb->team], tb->name, &hs.target_name_len); }
                            if (mv->def->kind == AK_VEH_FLYER) { f32 dx = tv->pos[0] - mv->pos[0], dy = tv->pos[1] - mv->pos[1], dz = tv->pos[2] - mv->pos[2];
                                hs.target_dist = (s32)sqrtf(dx * dx + dy * dy + dz * dz); } } }
                    if (play.rep_show > 0 && play.rep_turret >= 0 && (u32)play.rep_turret < play.nturret) {   /* the fusion cutter's work: the turret's
                                                                                    panel ("Auto-Turret" and its health, harness ct25) */
                        const ak_turret *rt = &play.turret[play.rep_turret]; hs.target = true; hs.target_health = rt->health; hs.target_max = rt->def->health;
                        if (rt->text) hs.target_name = ak_hud_stdtext(rt->text, &hs.target_name_len); }
                    {   /* the hit-direction marks: the player hurt - his attacker's position (089E3868 sends the source's) */
                        static f32 prev_h = -1; f32 h0 = play.target[0].health; s32 a = play.target[0].last_attacker;
                        if (prev_h >= 0 && h0 < prev_h && a > 0 && (u32)(a - 1) < play.nbots) {
                            const ak_play_bot *bb = &play.bot[a - 1];
                            ak_hud_hit(bb->veh >= 0 ? play.veh[bb->veh].pos : bb->ch.pos);
                            if (ak_setting_int("AK_DEBUG_HUD", 0)) AK_INFO("hud", "frame %d: hit by bot %d", frame, a - 1);
                        }
                        prev_h = h0;
                    }
                    hs.missile = -1;                                           /* space, in a flyer: a guided missile coming at it */
                    if (play.is_space && play.in_veh >= 0 && play.veh[play.in_veh].def->kind == AK_VEH_FLYER) {
                        s32 me = (s32)(1 + play.nbots + (u32)play.in_veh);
                        for (u32 k = 0; k < AK_MAX_PROJ; k++) { const ak_proj *q = &play.projs.p[k];
                            if (q->alive && q->target == me) { const f32 *vp2 = play.veh[play.in_veh].pos; f32 dx = q->pos[0] - vp2[0], dy = q->pos[1] - vp2[1], dz = q->pos[2] - vp2[2];
                                hs.missile = (s32)sqrtf(dx * dx + dy * dy + dz * dz); break; } }
                    }
                    /* the soldier's lock sounds (08A51AA0): UI_Target_Select once on locking (past 1 s) and once on the head lock (5 s) */
                    static int lock_stage;
                    if (hs.lock && !hs.vehicle) {
                        int st = hs.lock_t > 1.0f ? (hs.lock_head && hs.lock_t >= 5.0f ? 2 : 1) : 0;
                        if (st > lock_stage && st > 0) ak_audio_play("UI_Target_Select", play.ch.pos, false);
                        lock_stage = st;
                    } else if (!hs.vehicle) lock_stage = 0;
                }
                if (play.have_ctf && (play.ctf.events & AK_CTF_EV_CAPTURE) && play.ctf.last_capturer >= 0 && ak_game_mode != 5) {
                    /* a capture (089EADD4 on message 0x8082): "%s captured the flag" (STDTEXT 0x1B4) with the carrier's name, green when
                       the carrier is of the player's side, else red (08A4EDDC channel 1 / 2) */
                    s32 c = play.ctf.last_capturer; u32 nl = 0; const u16 *nm = NULL; static u16 me[16]; static u32 mel;
                    if (c == 0) { if (!mel) { u32 pl; const u16 *pf = ak_setting_str("AK_PLAYER_NAME", NULL) ? NULL : ak_fe_profile_name(&pl);   /* (the profile's name, else AK_PLAYER_NAME) */
                if (pf) { while (mel < pl && mel < 15) { me[mel] = pf[mel]; mel++; } }
                else { const char *pn = ak_setting_str("AK_PLAYER_NAME", "Player"); while (pn[mel] && mel < 15) { me[mel] = (u8)pn[mel]; mel++; } } } nm = me; nl = mel; }
                    else if ((u32)(c - 1) < play.nbots) nm = ak_hud_bot_name(play.team_faction[play.bot[c - 1].team], play.bot[c - 1].name, &nl);
                    int side = c == 0 ? play.team : (u32)(c - 1) < play.nbots ? play.bot[c - 1].team : -1;
                    ak_hud_message(side == play.team ? 1 : 2, 0x1B4, nm, nl);
                }
                if (play.have_cq) {                                            /* messages: captures and the bleed (func 089EA3D0) */
                    static int prev_owner[AK_MAX_POSTS], prev_bleed = -2; static const void *prev_level;
                    if (prev_level != levels[cur].path) { prev_level = levels[cur].path; ak_hud_messages_clear(); prev_bleed = -2;
                        for (u32 i = 0; i < play.cq.nposts; i++) prev_owner[i] = play.match.post[i].owner;
                        if (ak_setting_int("AK_TEST_MESSAGES", 0) && play.cq.nposts) {      /* tests: one of each colour */
                            u32 nl; const u16 *nm = ak_hud_post_name(play.cq.post[0].name, &nl);
                            ak_hud_message(1, 0x38, nm, nl); ak_hud_message(2, 0x3A, nm, nl); ak_hud_message(2, 0x3B, NULL, 0);
                            ak_hud_message(3, 0x38, nm, nl); ak_hud_message(4, 0x3B, NULL, 0); } }
                    for (u32 i = 0; i < play.cq.nposts; i++) {
                        int o = play.match.post[i].owner, was = prev_owner[i]; if (o == was) continue;
                        prev_owner[i] = o; u32 nl; const u16 *nm = ak_hud_post_name(play.cq.post[i].name, &nl);
                        int us = play.team, them = 1 - play.team;
                        if (o == us) ak_hud_message(1, 0x38, nm, nl);                              /* We captured the %s */
                        else if (o == them) ak_hud_message(2, 0x3A, nm, nl);                       /* The enemy captured the %s */
                        else if (was == us) ak_hud_message(2, 0x37, nm, nl);                       /* We lost the %s */
                        else if (was == them) ak_hud_message(1, 0x39, nm, nl);                     /* The enemy lost the %s */
                    }
                    int bleed = -1;                                            /* the side losing reinforcements to the majority */
                    for (int t = 0; t < 2; t++) if (play.match.held[1 - t] * 2 > play.match.present) bleed = t;
                    if (prev_bleed != -2 && bleed != prev_bleed) {
                        if (bleed == play.team) ak_hud_message(2, 0x3B, NULL, 0);                  /* We are losing reinforcements */
                        else if (bleed == 1 - play.team) ak_hud_message(1, 0x3D, NULL, 0);         /* The enemy are losing ... */
                        else if (prev_bleed == play.team) ak_hud_message(1, 0x3C, NULL, 0);        /* We are no longer losing ... */
                        else ak_hud_message(2, 0x3E, NULL, 0);                                     /* The enemy are no longer ... */
                    }
                    prev_bleed = bleed;
                }
                {   static s32 at_post = -1; static f32 at_t;                  /* the capture panel: the post within 5 units, on foot */
                    s32 near = -1;
                    if (play.have_cq && play.in_veh < 0 && play.in_turret < 0)
                        for (u32 i = 0; i < play.cq.nposts; i++) {
                            if (play.cq.post[i].absent) continue;
                            f32 dx = play.cq.post[i].pos[0] - play.ch.pos[0], dz = play.cq.post[i].pos[2] - play.ch.pos[2];
                            if (dx * dx + dz * dz < 25.0f) { near = (s32)i; break; }
                        }
                    if (near != at_post) { at_post = near; at_t = 0; } else if (near >= 0) at_t += dt;
                    if (near >= 0) {
                        const ak_post_state *ps = &play.match.post[near]; f32 full = play.cq.post[near].amount > 0 ? play.cq.post[near].amount : 1;
                        hs.post = true; hs.post_name = play.cq.post[near].name; hs.post_owner = ps->owner;
                        hs.post_capturer = ps->capturing;
                        hs.post_fill = ps->owner == AK_CQ_NEUTRAL ? ps->progress / full : 1.0f - ps->progress / full;   /* 08A53B94 */
                        hs.post_contested = ps->contest > 0; hs.post_time = at_t; hs.post_cross = play.cq.post[near].disabled;
                    }
                }
                if (fe_menu) ak_fe_draw(); else if (!ak_play_cut_view(&play)) ak_hud_draw(&hs, w, h);   /* (no HUD in a cut-scene, as the original) */

            }
            if (play.snd.sub && ak_setting_int("AK_SUBTITLES", 0))                 /* the narrator's line (the game's subtitle text) */
                dbg_text((f32)w * 0.5f - 4.0f * (f32)strlen(play.snd.sub), (f32)h - 64, 0xFFFFFFFF, play.snd.sub);
        }
        if (show) {
            char line[160];
            snprintf(line, sizeof line, "Aurek %s  %s  %.1f fps  %.2f ms", AK_BUILD_ID, ak_gfx_name(), fps, frame_ms); dbg_text(8, 8, 0xFFFFFFFF, line);
            snprintf(line, sizeof line, "%s (%d/%d)  loaded in %.0f ms", levels[cur].label, cur + 1, nlevels, load_ms); dbg_text(8, 26, 0xFFFFFFFF, line);
            snprintf(line, sizeof line, "objects %u/%u  placed models %u/%u  draws %u  tris %u  submit %.2f ms  gpu wait %.2f ms", ss.objects_visible, ss.objects,
                     ents_drawn, ents.placed, gs.draws, gs.tris, gs.cpu_submit_ms, gs.gpu_wait_ms); dbg_text(8, 44, 0xFFFFFFFF, line);
            snprintf(line, sizeof line, "pos %.1f %.1f %.1f  yaw %.2f pitch %.2f", cam.pos.x, cam.pos.y, cam.pos.z, cam.yaw, cam.pitch); dbg_text(8, 62, 0xFFC0C0C0, line);
            if (playing && play.ready) {
                static const char *sn[] = { "idle", "run", "back", "left", "right", "jump", "fall", "land", "sprint" };
                snprintf(line, sizeof line, "%s %s  %s  speed %.1f m/s  %s", ak_faction_name(play.look.faction), models.models[play.look.body].name, sn[play.state],
                         sqrtf(play.ch.vel[0] * play.ch.vel[0] + play.ch.vel[2] * play.ch.vel[2]), play.ch.on_ground ? "on the ground" : "in the air");
                dbg_text(8, 80, 0xFFC0E0FF, line);
                if (play.armed) {
                    u32 al[2], tot[2]; ak_play_counts(&play, al, tot);
                    snprintf(line, sizeof line, "%s  ammo %d / %d%s  kills %u  deaths %u  soldiers up: %u / %u vs %u / %u",
                             play.wdef.name, play.weapon.ammo, play.weapon.spare, play.weapon.reload_t > 0 ? "  reloading" : "", play.kills, play.deaths,
                             al[play.team], tot[play.team], al[1 - play.team], tot[1 - play.team]);
                    dbg_text(8, 98, 0xFFC0E0FF, line);
                }
                if (play.in_veh >= 0) {
                    const ak_vehicle *vh = &play.veh[play.in_veh];
                    snprintf(line, sizeof line, "%s  armour %.0f / %.0f  speed %.0f m/s  up: get out  L: boost  cross: fire  square: secondary", vh->def->name,
                             play.target[1 + play.nbots + play.in_veh].health, vh->def->health, sqrtf(vh->vel[0] * vh->vel[0] + vh->vel[2] * vh->vel[2]));
                    dbg_text(8, 152, 0xFFA0FFA0, line);
                    if (vh->def->sec.armed) {                                 /* the secondary: ammo / reload, and the lock-on */
                        const ak_target *lt = vh->lock >= 0 ? &play.target[vh->lock] : NULL;
                        char lk[64] = "";
                        if (lt && vh->locked) snprintf(lk, sizeof lk, "  LOCKED");
                        else if (lt && vh->def->sec.tracks) snprintf(lk, sizeof lk, "  locking %.0f%%", 100.0f * vh->lock_t / (vh->def->lock_time > 0 ? vh->def->lock_time : 1));
                        if (vh->sec_reload > 0) snprintf(line, sizeof line, "square: %s  reloading %.1f s%s", vh->def->sec.weapon, vh->sec_reload, lk);
                        else snprintf(line, sizeof line, "square: %s  %d / %d%s", vh->def->sec.weapon, vh->sec_ammo, vh->def->sec.clip, lk);
                        dbg_text(8, 170, vh->locked ? 0xFF4040FF : 0xFFA0FFA0, line);
                    }
                } else {
                    s32 nv = -1; f32 bd = 1e30f;
                    for (u32 v = 0; v < play.nveh; v++) { const ak_vehicle *vh = &play.veh[v]; if (!vh->def || !vh->alive || vh->driver == 0 || (vh->driver > 0 && play.bot[vh->driver - 1].team != play.team)) continue;
                        if (vh->driver < 0 && vh->team != play.team && !vh->open) continue;                /* (an enemy's unused vehicle) */
                        if ((!vh->def->drivable || play.vspawn[v].fixed) && !play.vspawn[v].route) continue;                  /* (only what can be boarded) */
                        if (play.vspawn[v].route && vh->team != play.team) continue;
                        f32 dx = vh->pos[0] - play.ch.pos[0], dz = vh->pos[2] - play.ch.pos[2], r = vh->def->radius + 3.0f; if (dx * dx + dz * dz < r * r && dx * dx + dz * dz < bd) { bd = dx * dx + dz * dz; nv = (s32)v; } }
                    s32 nt2 = -1;
                    for (u32 i = 0; i < play.nturret && play.in_turret < 0; i++) { const ak_turret *t = &play.turret[i]; if (!t->alive || !t->def->boardable || t->team != play.team) continue;
                        f32 dx = t->pos[0] - play.ch.pos[0], dz = t->pos[2] - play.ch.pos[2], r = t->rad + 2.5f; if (dx * dx + dz * dz < r * r && fabsf(t->pos[1] - play.ch.pos[1]) < 5.0f) nt2 = (s32)i; }
                    if (play.in_turret >= 0) dbg_text((f32)w * 0.5f - 100, (f32)h * 0.5f + 60, 0xFFFFFFFF, "up: leave the turret");
                    else if (nt2 >= 0) { snprintf(line, sizeof line, "up: man the %s", play.turret[nt2].def->name); dbg_text((f32)w * 0.5f - 100, (f32)h * 0.5f + 60, 0xFFFFFFFF, line); }
                    else if (nv >= 0) { snprintf(line, sizeof line, "up: get in the %s", play.veh[nv].def->name); dbg_text((f32)w * 0.5f - 100, (f32)h * 0.5f + 60, 0xFFFFFFFF, line); }
                }
                if (play.have_cq) {
                    const ak_conquest *cq = &play.match; int me = play.team, them = 1 - me;
                    snprintf(line, sizeof line, "%s %d (%u posts)  -  %s %d (%u posts)  health %.0f%s%s", ak_faction_name(play.team_faction[me]), cq->tickets[me], cq->held[me],
                             ak_faction_name(play.team_faction[them]), cq->tickets[them], cq->held[them], play.health,
                             play.alive ? "" : "  down - back with the next wave", cq->all_team < 2 ? "  all posts held" : "");
                    dbg_text(8, 134, 0xFFFFE0A0, line);
                    if (play.near_post >= 0) {
                        const ak_post_state *ps = &cq->post[play.near_post];
                        f32 f = ps->progress / play.cq.post[play.near_post].amount;
                        if (ps->contest > 0) snprintf(line, sizeof line, "command post %d: contested  %.0f s", play.near_post + 1, ps->contest);
                        else if (ps->owner == me) snprintf(line, sizeof line, "command post %d: ours  %.0f%%", play.near_post + 1, 100.0f * f);
                        else snprintf(line, sizeof line, "command post %d: %s  %s %.0f%%", play.near_post + 1, ps->owner == them ? "theirs" : "neutral",
                                      ps->owner == them ? "neutralising" : "capturing", 100.0f * (1.0f - f));
                        dbg_text((f32)w * 0.5f - 120, (f32)h * 0.5f + 40, 0xFFFFFFFF, line);
                    }
                    if (cq->winner >= 0)
                        dbg_text((f32)w * 0.5f - 60, (f32)h * 0.5f - 60, 0xFFFFFFFF, cq->winner == me ? "VICTORY" : cq->winner == them ? "DEFEAT" : "DRAW");
                    {   const ak_play_hero *hm = &play.hero[me], *ht = &play.hero[them];   /* heroes: the offer, who plays them, the countdown */
                        if (hm->enabled && hm->offered == 0) {
                            snprintf(line, sizeof line, "become %s?  up: yes  down: no  (%.0f s)", hm->name, hm->decide);
                            dbg_text((f32)w * 0.5f - 150, (f32)h * 0.5f - 80, 0xFFFFE070, line);
                        }
                        if (hm->enabled || ht->enabled) {
                            char a[64], b[64];
                            if (!hm->enabled) snprintf(a, sizeof a, "-"); else if (hm->unit == 0) snprintf(a, sizeof a, "you are %s", hm->name);
                            else if (hm->unit > 0) snprintf(a, sizeof a, "%s in the field", hm->name); else snprintf(a, sizeof a, "%s in %.0f s", hm->name, hm->timer > 0 ? hm->timer : 0);
                            if (!ht->enabled) snprintf(b, sizeof b, "-"); else if (ht->unit >= 0) snprintf(b, sizeof b, "%s in the field", ht->name); else snprintf(b, sizeof b, "%s in %.0f s", ht->name, ht->timer > 0 ? ht->timer : 0);
                            snprintf(line, sizeof line, "heroes: %s  -  %s", a, b); dbg_text(8, 152, 0xFFC0C0FF, line);
                        }
                    }
                }
                dbg_text(8, 116, 0xFFC0C0C0, play.psp_buttons ? "cross: fire  square: secondary  R: lock on  L: tap jump, hold sprint  up: get in / out  SELECT: next level (+L back, +R text, +square free camera)"
                                                                : "R: fire  L: lock on  cross: jump  triangle: get in / out  SELECT: next level (+L back, +R text, +square free camera)");

            }
        }
        if (gc_screen && !strcmp(levels[cur].label, "GC")) { if ((gc_screen->tech_open || gc_screen->quit_open || gc_screen->win_open) && ak_fe_page()) ak_fe_draw(); if (!gc_screen->quit_open && !(gc_screen->win_open && ak_fe_page())) ak_gc_screen_draw(gc_screen, &vp); }
        ak_gfx_end(&gs);
        {   f32 lp[3] = { cam.pos.x, cam.pos.y, cam.pos.z }; ak_audio_listener(lp, cam.yaw); }
        if (dumpf) {                                                          /* (tests: the mix, frame by frame, as a WAV file) */
            static s16 ab[2 * 4800]; u32 nf = (u32)(dt * AK_AUDIO_RATE + 0.5f); if (nf > 4800) nf = 4800;
            ak_audio_mix(ab, nf); fwrite(ab, 4, nf, dumpf); dump_frames += nf;
            u8 hd[44]; u32 dl = dump_frames * 4; memcpy(hd, "RIFF", 4); u32 v32 = 36 + dl; memcpy(hd + 4, &v32, 4); memcpy(hd + 8, "WAVEfmt ", 8);
            v32 = 16; memcpy(hd + 16, &v32, 4); u16 v16 = 1; memcpy(hd + 20, &v16, 2); v16 = 2; memcpy(hd + 22, &v16, 2); v32 = AK_AUDIO_RATE; memcpy(hd + 24, &v32, 4);
            v32 = AK_AUDIO_RATE * 4; memcpy(hd + 28, &v32, 4); v16 = 4; memcpy(hd + 32, &v16, 2); v16 = 16; memcpy(hd + 34, &v16, 2); memcpy(hd + 36, "data", 4); memcpy(hd + 40, &dl, 4);
            long here = ftell(dumpf); fseek(dumpf, 0, SEEK_SET); fwrite(hd, 1, 44, dumpf); fseek(dumpf, here, SEEK_SET); fflush(dumpf);
        }
        frame++; fps_frames++;
        u64 t1 = ak_plat_time_us(); frame_ms = (t1 - now) / 1000.0f;
        if (t1 - fps_t0 >= 1000000) {
            fps = fps_frames * 1e6f / (f32)(t1 - fps_t0); fps_frames = 0; fps_t0 = t1;
            AK_INFO("frame", "%.1f fps, %.2f ms, %u draws, %u tris, %u/%u objects, submit %.2f ms, gpu wait %.2f ms", fps, frame_ms, gs.draws, gs.tris,
                    ss.objects_visible, ss.objects, gs.cpu_submit_ms, gs.gpu_wait_ms);
        }
        {   const char *rec = ak_setting_str("AK_RECORD", NULL);           /* every frame to <dir>/NNNNN.ppm (recordings) */
            if (rec) { char fn[512]; snprintf(fn, sizeof fn, "%s/%05d.ppm", rec, frame); ak_gfx_screenshot(fn); } }
        if (shot && frame == shot_frame) { ak_gfx_screenshot(shot); if (playing && play.ready) AK_INFO("aurek", "screenshot at frame %d, play frame %u", frame, play.frame_no); break; }
    }
    if (loaded) { ak_scene_models_free(&mscene); ak_scene_level_free(&scene); }
    ak_gfx_shutdown();
    ak_vfs_close(vfs);
    (void)argc; (void)argv;
    return 0;
}
