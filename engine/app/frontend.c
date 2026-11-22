/* Aurek - the front end (see frontend.h). */
#include "frontend.h"
#include "hud.h"
#include "../assets/gui.h"
#include "../render/ak_gfx.h"
#include "../core/ak_settings.h"
#include "../audio/ak_audio.h"
#include "../assets/blueprint.h"
#include "../game/ak_soldier.h"
#include "../platform/plat.h"
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#ifdef _WIN32
#include <direct.h>
#define mkdir(p, m) _mkdir(p)
#endif

static void fill_all(const struct ak_widget *w);
static const struct ak_widget *find_id(const struct ak_widget *w, u32 id);
static u32 id_of(const char *name);

static const char *const files[] = { "BFF_MAINMENU", "BFF_SINGLEPLAYER", "BFF_SERVERSETUP", "BFF_OPTIONS", "BFF_PROFILE", "BFF_MULTIPLAYER",
                                     "BFF_CUSTOMISATION", "BFF_GALACTICCONQUEST", "BFF_GUIMENU_INGAMESP" };
#define NFILES (int)(sizeof files / sizeof files[0])
#define MAXPAGES 160
static struct { u32 hash; u8 file; char name[40]; } idx[MAXPAGES]; static u32 nidx;
static ak_vfs *vfs; static ak_arena mem, txt; static ak_gui_texts texts; static bool ready;
static int cur_file = -1; static ak_gui_file gf; static ak_gfx_tex **gtex; static bool *gown;
/* the main menu's file stays loaded: its pictures win over another file's copies of the same name (the game keeps one picture
 * per name - SINGLEPLAYER.GUI's own menu_logos.tga carries the Italian logo, and the original shows the main menu's) */
static ak_arena basemem; static ak_gui_file base; static ak_gfx_tex **btex;
static bool gc_on;                     /* (Galactic Conquest's tech page: below) */
static const ak_gui_page *page; static u32 focus, active_widget; static f32 fe_clock;   /* (active_widget: the page in use's focus - GUIMenu.ActiveWidget) */
static u32 stack[16]; static int nstack; static bool focus_fix_pending;
/* pages open together, drawn in order, one of them in use (`page`): the customisation's MP_CustomBackground, MP_Customisation, its
 * MP_CustomCarousel and the dialogues over them (the game's 0888ADB0 opens a page with or without the focus) */
#define MAXLAYERS 6
static const ak_gui_page *layer[MAXLAYERS]; static u32 layer_focus[MAXLAYERS]; static int layer_prev[MAXLAYERS], nlayer, active_layer;
static int cust_event(const ak_input *in);
static void refill(void);
static int layer_of(const char *name);
static void use_layer(int k);
static void cust_carousel_sync(void);
static bool open_hash(u32 h, bool push);

/* ---- script values ("BFF.FE_MapSelectionStatus", "GUIMenu.ActiveWidget", ...), as the pages' conditions read them */
#define MAXVARS 128
static struct { u32 h; f32 v; } vars[MAXVARS]; static int nvars;
static f32 *var_ref(const char *name)
{
    u32 h = ak_gui_hash(name);
    for (int i = 0; i < nvars; i++) if (vars[i].h == h) return &vars[i].v;
    if (nvars >= MAXVARS) { static f32 junk; return &junk; }
    /* first use: the profile's defaults [assumed: full volumes, subtitles off] */
    f32 d = 0; if (!strncmp(name, "BFF.Volume", 10)) d = 1.0f;
    vars[nvars].h = h; vars[nvars].v = d; return &vars[nvars++].v;
}
static void var_set(const char *name, f32 v) { *var_ref(name) = v; }
static f32 var_get(const char *name)
{
    if (!strcmp(name, "GUIMenu.ActiveWidget")) return (f32)(s32)focus;
    if (!strcmp(name, "Asura.CurrentLanguage")) return 0;              /* (English) [assumed numbering] */
    return *var_ref(name);
}

/* ---- the player profile (PARITY 8.2): the game keeps it at 0x08C2933C, 0x80C bytes, and saves it as ULUS10292<slot>/DATA.BIN -
 * 16 bytes of MD5 over the profile (08831CE8 from 0890D59C) then the profile, 16 KB in all (08A6A1DC: FUN_0890E50C(5, profile,
 * 0x80C, 0x4000)); checked against the recompiled build's own saves (the MD5 of their 0x80C bytes is their first 16).  The script
 * values point into it (registered by 08978CEC): the table below.  Aurek keeps the whole block, so the parts it does not read go
 * back out as they came.  [assumed: the load checks the MD5 (its checker not read); the slot "0000"; loaded when the menus start] */
static u16 medal_msg[96]; static u32 medal_msg_n;              /* (the medals: below) */
#define PROF_SIZE 0x80C
static u8 prof[PROF_SIZE]; static bool prof_have;
static const struct { const char *name; u16 off; u8 kind; } prof_map[] = {   /* kind: 0 u8, 1 s32, 2 f32 */
    { "BFF.Subtitles", 0x3F, 0 }, { "BFF.InfantryControlAimPitchSensitivity", 0x40, 2 }, { "BFF.InfantryControlAimYawSensitivity", 0x44, 2 },
    { "BFF.InfantryControlPitchSensitivity", 0x48, 2 }, { "BFF.InfantryControlYawSensitivity", 0x4C, 2 },
    { "BFF.InfantryControlInvertYAxis", 0x51, 0 }, { "BFF.VehicleControlInvertYAxis", 0x6D, 0 }, { "BFF.SpacecraftControlInvertYAxis", 0x89, 0 },
    { "BFF.SpacecraftControlAutoLevelling", 0x8A, 0 }, { "BFF.VolumeMaster", 0x94, 2 }, { "BFF.VolumeMusic", 0x98, 2 }, { "BFF.VolumeSFX", 0x9C, 2 },
    { "BFF.ProfileCampaignLevel", 0x5DC, 1 }, { "BFF.CutscenesUnlocked", 0x5E0, 1 }, { "BFF.HasGalacticConquestBeenPlayed", 0x6C8, 0 },
};
#define PROF_NAME 0x08                                                     /* the profile's name, UTF-16, 21 characters (089783BC) */
static const char *prof_dir(void) { static char d[400]; const char *s = ak_setting_str("AK_SAVE_DIR", NULL);
    if (s) snprintf(d, sizeof d, "%s", s); else snprintf(d, sizeof d, "%s/savedata", ak_plat_user_dir()); return d; }   /* (the PSP's PSP/SAVEDATA) */
static void prof_path(char *out, size_t n) { snprintf(out, n, "%s/ULUS10292%s/DATA.BIN", prof_dir(), ak_setting_str("AK_SAVE_SLOT", "0000")); }
static void pw8(u32 o, u8 v) { prof[o] = v; }
static void pw32(u32 o, u32 v) { memcpy(prof + o, &v, 4); }
static void pwf(u32 o, f32 v) { memcpy(prof + o, &v, 4); }
/* a new profile: the game's constructor 089776BC with its parts 08977764 / 08977784 / 08977808 / 0897782C / 08977ED8 / 08977F80 /
   08977878 (0.5 at 0x08AEE3AC, 1.0 at 0x08AEE3B0, 60.0 at 0x08AEE3B4) - the name "Player" (21 characters) */
static void prof_new(void)
{
    memset(prof, 0, sizeof prof); prof[4] = 2;
    { const char *nm = "Player"; for (u32 i = 0; nm[i]; i++) { u16 c = (u8)nm[i]; memcpy(prof + PROF_NAME + 2 * i, &c, 2); } }
    pw8(0x38, 1); pw32(0x34, 1);
    pw8(0x3C, 0x32); pw8(0x3D, 0); pw8(0x3F, 0); pw8(0x3E, 1);                                        /* 08977764 */
    pwf(0x84, 0.5f); pw8(0x8A, 1); pw8(0x50, 0); pw8(0x51, 0); pwf(0x40, 0.5f); pwf(0x44, 0.5f); pwf(0x48, 0.5f); pwf(0x4C, 0.5f);   /* 08977784 */
    pw32(0x54, 1); pw32(0x58, 0); pw8(0x52, 1); pw8(0x6C, 0); pw8(0x6D, 0); pwf(0x5C, 0.5f); pwf(0x60, 0.5f); pwf(0x64, 0.5f); pwf(0x68, 0.5f);
    pw32(0x70, 1); pw32(0x74, 0); pw8(0x6E, 1); pw8(0x88, 0); pw8(0x89, 1); pwf(0x78, 0.5f); pwf(0x7C, 0.5f); pwf(0x80, 0.5f); pw32(0x8C, 1); pw32(0x90, 0);
    pwf(0x94, 1.0f); pwf(0x98, 1.0f); pwf(0x9C, 1.0f); pwf(0xA0, 1.0f);                                 /* 08977808 */
    pw32(0x1A4, 3); pwf(0x190, 60.0f); pw32(0x19C, 0x10); pw32(0x1A8, 100); pw32(0x1AC, 5); pwf(0x188, 60.0f); pwf(0x18C, 60.0f);   /* 0897782C */
    pw32(0x194, 0x10); pw32(0x198, 0x10); pw32(0x1A0, 1);
    { static const u32 t[10] = { 0, 1, 0, 1, 0, 0, 1, 1, 0, 0 }; for (u32 i = 0; i < 10; i++) pw32(0x1B4 + 4 * i, t[i]); pw8(0x1B0, 1); }   /* 08977ED8 */
    pw8(0x5C8, 0x0B); pw8(0x5D4, 3); pw8(0x5D5, 0x0F); pw8(0x5B0, 6); pw8(0x5B1, 9); pw8(0x5BC, 5); pw8(0x5BD, 2); pw8(0x5C9, 2);   /* 08977F80 */
    for (u32 i = 0; i < 4; i++) { pw32(0x7C4 + 12 * i, 2); pw32(0x7C8 + 12 * i, 0); pw32(0x7CC + 12 * i, 0); }   /* 08977878 (the rest zero) */
    for (u32 i = 0; i < 16; i++) { pw8(0x704 + 12 * i, 0); pw32(0x708 + 12 * i, 2); pw32(0x70C + 12 * i, 0); }
    pw8(6, 1); pw32(0x5DC, 0); pw32(0x5E0, 0);
    prof_have = true;
}
static void prof_to_vars(void)
{
    for (size_t i = 0; i < sizeof prof_map / sizeof prof_map[0]; i++) {
        const u8 *q = prof + prof_map[i].off; f32 v;
        v = prof_map[i].kind == 0 ? (f32)q[0] : prof_map[i].kind == 1 ? (f32)(s32)ak_rd32(q) : ak_rdf32(q);
        var_set(prof_map[i].name, v);
    }
    ak_setting_set("AK_SUBTITLES", var_get("BFF.Subtitles") != 0 ? "1" : "0");
    if (!ak_setting_str("AK_INVERT_Y", NULL) || var_get("BFF.InfantryControlInvertYAxis") != 0) ak_setting_set("AK_INVERT_Y", var_get("BFF.InfantryControlInvertYAxis") != 0 ? "1" : "0");
    if (!ak_setting_str("AK_INVERT_Y_VEHICLE", NULL)) ak_setting_set("AK_INVERT_Y_VEHICLE", var_get("BFF.VehicleControlInvertYAxis") != 0 ? "1" : "0");   /* (08A60028) */
    if (!ak_setting_str("AK_INVERT_Y_SPACE", NULL)) ak_setting_set("AK_INVERT_Y_SPACE", var_get("BFF.SpacecraftControlInvertYAxis") != 0 ? "1" : "0");   /* (08A5EC4C) */
    ak_audio_set_volumes(var_get("BFF.VolumeMaster"), var_get("BFF.VolumeMusic"), var_get("BFF.VolumeSFX"));
}
static void prof_from_vars(void)
{
    for (size_t i = 0; i < sizeof prof_map / sizeof prof_map[0]; i++) {
        u8 *q = prof + prof_map[i].off; f32 v = var_get(prof_map[i].name);
        if (prof_map[i].kind == 0) q[0] = (u8)(v != 0); else if (prof_map[i].kind == 1) { s32 x = (s32)v; memcpy(q, &x, 4); } else memcpy(q, &v, 4);
    }
}
bool ak_fe_profile_load(void)
{
    char p[512]; prof_path(p, sizeof p); FILE *f = fopen(p, "rb"); if (!f) return false;
    u8 buf[16 + PROF_SIZE], sum[16]; size_t n = fread(buf, 1, sizeof buf, f); fclose(f);
    if (n < sizeof buf) return false;
    ak_md5(buf + 16, PROF_SIZE, sum);
    if (memcmp(sum, buf, 16)) { AK_WARN("fe", "%s: the profile's checksum does not match - not loaded", p); return false; }
    memcpy(prof, buf + 16, PROF_SIZE); prof_have = true; prof_to_vars();
    AK_INFO("fe", "profile loaded (%s)", p);
    return true;
}
bool ak_fe_profile_save(void)
{
    char p[512], d[512]; prof_path(p, sizeof p);
    if (!prof_have) prof_new();
    prof_from_vars();
    static u8 out[0x4000]; memset(out, 0, sizeof out); ak_md5(prof, PROF_SIZE, out); memcpy(out + 16, prof, PROF_SIZE);
    mkdir(prof_dir(), 0777); snprintf(d, sizeof d, "%s/ULUS10292%s", prof_dir(), ak_setting_str("AK_SAVE_SLOT", "0000")); mkdir(d, 0777);
    FILE *f = fopen(p, "wb"); if (!f) { AK_WARN("fe", "%s: cannot write the profile", p); return false; }
    bool ok = fwrite(out, 1, sizeof out, f) == sizeof out; fclose(f);
    AK_INFO("fe", "profile saved (%s)", p);
    return ok;
}
/* a won campaign mission (08972EB0 at the match's end, when the player's side won: 08973468): the profile's campaign level + 1, back to
   0 past 10, the profile marked changed */
void ak_fe_campaign_won(void)
{
    s32 l = (s32)var_get("BFF.ProfileCampaignLevel") + 1; if (l > 10 || l < 0) l = 0;
    var_set("BFF.ProfileCampaignLevel", (f32)l); var_set("BFF.CampaignModeLevel", (f32)l);
    if (ak_setting_int("AK_AUTOSAVE", 1)) ak_fe_profile_save();      /* [assumed: the autosave on - the game's autosave pages not traced] */
}
const u16 *ak_fe_profile_name(u32 *len)
{
    static u16 nm[22]; u32 n = 0;
    if (prof_have) while (n < 21) { u16 c; memcpy(&c, prof + PROF_NAME + 2 * n, 2); if (!c) break; nm[n++] = c; }
    *len = n; return n ? nm : NULL;
}

/* ---- the instant-action map table (0x08B1B980: 22 entries of 20 bytes, read in the original executable; the port's custom_maps.c
 * has the same layout): the Clone Wars level, the Galactic Civil War level, the name (STDTEXT), the modes it has (Conquest,
 * 1-flag CTF, 2-flag CTF, Hero CTF), space */
typedef struct { const char *cw, *gcw; u16 text; u8 modes[4]; u8 space; } map_entry;
static const map_entry maps[] = {
    { NULL, "boz_pity", 75, { 1, 0, 0, 0 }, 0 }, { NULL, "endor", 76, { 1, 1, 0, 1 }, 0 }, { "geonosis", "geonosis", 77, { 1, 1, 0, 1 }, 0 },
    { NULL, "hoth", 78, { 1, 0, 0, 0 }, 0 }, { NULL, "hoth_ion_cannon", 338, { 1, 0, 1, 1 }, 0 }, { "kashyyyk", "kashyyyk", 79, { 1, 0, 1, 1 }, 0 },
    { "korriban", "korriban", 81, { 1, 0, 1, 1 }, 0 }, { "mustafar", "mustafar", 82, { 1, 0, 1, 1 }, 0 }, { "mygeeto", "mygeeto", 83, { 1, 0, 1, 1 }, 0 },
    { "naboo", "naboo", 84, { 1, 0, 1, 1 }, 0 }, { "ord_mantell", "ord_mantell", 85, { 1, 0, 1, 1 }, 0 }, { "saleucami", "saleucami", 86, { 1, 0, 1, 1 }, 0 },
    { "sullust", "sullust", 87, { 1, 1, 0, 1 }, 0 }, { "tatooine", "tatooine", 88, { 1, 0, 1, 1 }, 0 }, { "yavin_iv", "yavin_iv", 89, { 1, 1, 0, 1 }, 0 },
    { NULL, "space_alderaan", 344, { 1, 1, 0, 0 }, 1 }, { "space_coruscant_clone", NULL, 339, { 1, 1, 0, 0 }, 1 }, { NULL, "space_hoth", 340, { 1, 1, 0, 0 }, 1 },
    { "space_kashyyyk_clone", "space_kashyyyk_civil", 341, { 1, 1, 0, 0 }, 1 }, { NULL, "space_kessel", 345, { 1, 1, 0, 0 }, 1 },
    { "space_mygeeto", NULL, 346, { 1, 1, 0, 0 }, 1 }, { NULL, "space_yavin", 347, { 1, 1, 0, 0 }, 1 },
};
#define NMAPS (int)(sizeof maps / sizeof maps[0])
static int sel_map = -1, sel_mode = -1;
static struct { int map, mode, era; } rot[16]; static int nrot;   /* the play list (BFF.NumMapsInRotation) */
static char launch_level[64]; static int launch_mode;
static ak_fe_match match; static bool have_match; static int team_choice, spawn_choice = -1;
void ak_fe_set_match(const ak_fe_match *m)
{
    match = *m; have_match = true;
    if (!match.level_text && nrot > 0) match.level_text = maps[rot[0].map].text;   /* (the play list's map: its name) */
    if (!match.level_text && match.level) {                           /* (a match started without the menus: its level's map entry) */
        const char *sp = strchr(match.level, ' '); const char *nm = sp ? sp + 1 : match.level;
        for (int i = 0; i < NMAPS && !match.level_text; i++) { const char *c[2] = { maps[i].gcw, maps[i].cw };
            for (int k = 0; k < 2; k++) if (c[k] && strlen(c[k]) == strlen(nm)) { bool eq = true; for (size_t j = 0; nm[j] && eq; j++) eq = (nm[j] | 0x20) == (c[k][j] | 0x20); if (eq) match.level_text = maps[i].text; } }
    }
    var_set("BFF.TimeLimitSinglePlayer", m->time_left >= 0 ? 60.0f : 0.0f);   /* (the time line's show condition) */
    var_set("BFF.FE_GameType", m->mode); var_set("BFF.FE_GameEra", m->era == 0 ? 1 : 0);   /* (FE_GameEra: 1 classic, 0 prequel - the team buttons) */
    var_set("BFF.FE_PlayerFaction", m->faction[m->team]); var_set("BFF.FE_ChangeTeamAllowed", 1);
    var_set("BFF.FE_SpawnPointCount", (f32)m->nposts); var_set("BFF.FE_IsPlayerVictorious", m->winner == m->team);
    /* every post on the map is shown (08A2DD50: Active<k> = the post exists and is on the map, +4 / +68), coloured by its owner;
       only the side's own go into the list the focus moves through */
    for (u32 i = 0; i < AK_FE_MAX_POSTS; i++) { char k[40]; snprintf(k, sizeof k, "BFF.FE_SpawnPointActive%u", i); var_set(k, i < m->nposts); }
    refill();                                                          /* (the team lists follow the match) */
}
int ak_fe_team(void) { return team_choice; }
int ak_fe_spawn_post(void) { return spawn_choice; }
void ak_fe_close(void) { page = NULL; nstack = 0; nlayer = 0; gc_on = false; }

/* ---- text lists (2005): their rows, filled by their FE_List* function */
#define MAXROWS 48
typedef struct { u32 id; u16 *row[MAXROWS]; u32 len[MAXROWS]; int n, sel, top, val[MAXROWS]; } list_rows;
static list_rows lists[24]; static int nlists; static ak_arena rowmem;
static list_rows *rows_of(u32 id) { for (int i = 0; i < nlists; i++) if (lists[i].id == id) return &lists[i]; return NULL; }
static list_rows *fill_target;
static void row_add16(const u16 *t, u32 n, int val)
{
    list_rows *L = fill_target; if (!L || L->n >= MAXROWS) return;
    u16 *c = AK_NEW(&rowmem, u16, n + 1); if (!c) return;
    memcpy(c, t, n * 2); c[n] = 0; L->row[L->n] = c; L->len[L->n] = n; L->val[L->n] = val; L->n++;
}
static void row_std(u32 id, int val) { u32 n; const u16 *t = ak_hud_stdtext(id, &n); if (t) row_add16(t, n, val); }

static int spawn_owner = -1;             /* drawing a spawn point: 0 ours, 1 theirs, 2 nobody's (-1 none) */
/* a spawn point's two pictures (E_IM_SpawnPointD<k> shown unfocused, ..H<k> focused) take the owner's colours, the game's constants
 * 0x08AEFB28.. (0.3, 1.0, 0.6, 0.2, 0.1): ours (0.3, 0.3, 1, 0.6) / (0.2, 0.2, 1, 1), theirs (1, 0.3, 0.3, 0.6) / (1, 0.2, 0.2, 1),
 * nobody's (0.1, 0.1, 0.1, 0.6) / (0.1, 0.1, 0.1, 1) [assumed: the first set is the D picture's, the second the H's; the vfunc
 * +120 that takes them is not read] */
static const f32 spawn_rgba[3][2][4] = { { { 0.3f, 0.3f, 1, 0.6f }, { 0.2f, 0.2f, 1, 1 } }, { { 1, 0.3f, 0.3f, 0.6f }, { 1, 0.2f, 0.2f, 1 } },
                                         { { 0.1f, 0.1f, 0.1f, 0.6f }, { 0.1f, 0.1f, 0.1f, 1 } } };
static u32 child_tint = 0xFFFFFFFFu;   /* the colour the widgets drawn now are multiplied by (a spawn point's owner) */
static void path_of(int f, char *out, size_t n) { snprintf(out, n, "PSP_GAME/USRDIR/GUIMENU/%s.GUI", files[f]); }

bool ak_fe_init(ak_vfs *v)
{
    if (ready) return true;                                            /* (once: the GC map and the menus share it) */
    vfs = v; nidx = 0;
    if (!ak_arena_init(&rowmem, 256u << 10) || !ak_arena_init(&txt, 1u << 20) || !ak_arena_init(&mem, (size_t)ak_setting_int("AK_FE_MB", 24) << 20)) return false;
    ak_blob b;
    const char *lang = ak_setting_str("AK_FE_LANGUAGE", "AM"); char p[128];
    snprintf(p, sizeof p, "PSP_GAME/USRDIR/MISC/MENU/MENU_%s.ASR", lang);
    if (!ak_vfs_read(vfs, p, &txt, &b) || !ak_gui_texts_load(&b, &txt, &texts)) AK_WARN("fe", "%s: no menu texts", p);
    for (int f = 0; f < NFILES; f++) {                               /* the page index: each UIMP's name (body + 12) */
        ak_arena_reset(&mem); path_of(f, p, sizeof p);
        if (!ak_vfs_read(vfs, p, &mem, &b) || !ak_asura_check(&b)) continue;
        u32 pos = 8; ak_chunk c;
        while (ak_asura_next(&b, &pos, &c) && nidx < MAXPAGES) {
            if (ak_chunk_tag(&c) != AK_TAG('U', 'I', 'M', 'P') || c.size < 16) continue;
            const char *nm = (const char *)c.body + 12; size_t l = strnlen(nm, c.size - 12); if (l >= sizeof idx[0].name) continue;
            idx[nidx].hash = ak_gui_hash(nm); idx[nidx].file = (u8)f; memcpy(idx[nidx].name, nm, l + 1); nidx++;
        }
    }
    ak_arena_reset(&mem);
    if (ak_arena_init(&basemem, 8u << 20)) {
        path_of(0, p, sizeof p);
        if (ak_vfs_read(vfs, p, &basemem, &b) && ak_gui_load(&b, &basemem, &base) && (btex = AK_NEW(&basemem, ak_gfx_tex *, base.ntex ? base.ntex : 1)))
            for (u32 i = 0; i < base.ntex; i++) btex[i] = ak_gfx_texture(&base.tex[i]);
    }
    ready = nidx > 0;
    if (ready && !ak_fe_profile_load()) { prof_new(); prof_to_vars(); }   /* (the profile if there is one: its options and campaign level; else the game's new one) */
    AK_INFO("fe", "%u menu pages in %d files, %u menu texts", nidx, NFILES, texts.n);
    return ready;
}

static bool same_name(const char *a, const char *b)
{
    if (!a || !b) return false;
    for (; *a && *b; a++, b++) { char x = *a, y = *b; if (x >= 'A' && x <= 'Z') x += 32; if (y >= 'A' && y <= 'Z') y += 32; if (x != y) return false; }
    return *a == *b;
}
static bool load_file(int f)
{
    if (f == cur_file) return true;
    if (f == 0 && btex) { gf = base; gtex = btex; gown = NULL; cur_file = 0; return true; }   /* the main menu: resident */
    ak_gfx_wait_idle();
    for (u32 i = 0; gtex && gown && i < gf.ntex; i++) if (gtex[i] && gown[i]) ak_gfx_free_tex(gtex[i]);
    gtex = NULL; gown = NULL; memset(&gf, 0, sizeof gf); cur_file = -1; ak_arena_reset(&mem);
    char p[128]; path_of(f, p, sizeof p); ak_blob b;
    if (!ak_vfs_read(vfs, p, &mem, &b) || !ak_gui_load(&b, &mem, &gf)) { AK_WARN("fe", "%s did not load", p); return false; }
    gtex = AK_NEW(&mem, ak_gfx_tex *, gf.ntex ? gf.ntex : 1); gown = AK_NEW(&mem, bool, gf.ntex ? gf.ntex : 1); if (!gtex || !gown) return false;
    for (u32 i = 0; i < gf.ntex; i++) {
        gtex[i] = NULL; gown[i] = false;
        for (u32 j = 0; btex && j < base.ntex; j++) if (same_name(gf.tex[i].name, base.tex[j].name)) { gtex[i] = btex[j]; break; }
        if (!gtex[i]) { gtex[i] = ak_gfx_texture(&gf.tex[i]); gown[i] = true; }
        {   const char *dn = getenv("AK_FE_DUMP_TEX");                  /* (tools: AK_FE_DUMP_TEX=part of a name -> /tmp/fe_<i>.ppm) */
            const ak_texture *t = &gf.tex[i];
            if (dn && t->name && strstr(t->name, dn) && t->pixels[0]) {
                char fn[64]; snprintf(fn, sizeof fn, "/tmp/fe_%u.ppm", i); FILE *o = fopen(fn, "wb");
                if (o) { fprintf(o, "P6 %u %u 255\n", t->width, t->height);
                    for (u32 y = 0; y < t->height; y++) for (u32 x = 0; x < t->width; x++) {
                        u32 k = y * t->width + x, ix = t->bpp == 8 ? t->pixels[0][k] : (t->pixels[0][k >> 1] >> ((k & 1) * 4)) & 15, c = t->palette[ix];
                        u8 a = (u8)(c >> 24), px[3] = { (u8)((c & 255) * a / 255), (u8)((c >> 8 & 255) * a / 255), (u8)((c >> 16 & 255) * a / 255) }; fwrite(px, 1, 3, o); }
                    fclose(o); AK_INFO("fe", "dumped %s -> %s", t->name, fn); } } }
    }
    cur_file = f;
    AK_INFO("fe", "%s: %u pages, %u pictures, %.1f MB", files[f], gf.npages, gf.ntex, mem.used / 1048576.0);
    return true;
}

static void refill(void)                                               /* every shown page's lists again (their rows' memory reused) */
{
    ak_arena_reset(&rowmem);
    if (nlayer) { for (int k = 0; k < nlayer; k++) fill_all(&layer[k]->root); }
    else if (page) fill_all(&page->root);
}
static bool focus_new = true;           /* (open_layer: the new page takes the focus, else it opens behind it) */
static bool layering;                  /* (open_hash: the new page goes over the one in use, which stays drawn) */
static bool open_hash(u32 h, bool push)
{
    for (u32 i = 0; i < nidx; i++) {
        if (idx[i].hash != h) continue;
        if (!load_file(idx[i].file)) return false;
        const ak_gui_page *pg = ak_gui_find_page(&gf, h); if (!pg) return false;
        if (push && page && nstack < 16) stack[nstack++] = page->root.id;
        if (!layering) nlayer = 0;
        page = pg; focus = pg->focus; fe_clock = 0;
        focus_fix_pending = true;
        if (have_match && h == ak_gui_hash("MP_Spawn_Location"))     /* the first post the player's side holds */
            for (u32 k = 0; k < match.nposts; k++) if (match.post_owner[k] == match.team) { char nm[32]; snprintf(nm, sizeof nm, "W_BU_SpawnPoint%u", k); if (id_of(nm)) focus = id_of(nm); break; }
        if (!layering) nlists = 0;
        refill();
        if (pg->on_open.fn && pg->on_open.fn[0]) AK_INFO("fe", "%s: %s(%s)", idx[i].name, pg->on_open.fn, pg->on_open.arg);
        else AK_INFO("fe", "%s", idx[i].name);
        return true;
    }
    /* a widget's id instead of a page's (W_BU_Options -> its own page; "Quit to Main Menu" -> W_BU_No_QuitInGame on the yes / no
       page): open the page that holds it, focused on it */
    for (u32 i = 0; i < gf.npages; i++) {
        if (!find_id(&gf.pages[i].root, h)) continue;
        if (push && page && nstack < 16) stack[nstack++] = page->root.id;
        page = &gf.pages[i]; focus = h; fe_clock = 0; focus_fix_pending = false;
        nlists = 0; ak_arena_reset(&rowmem); fill_all(&page->root);
        AK_INFO("fe", "%s (at %08x)", page->root.name, h);
        return true;
    }
    AK_WARN("fe", "no page %08x", h); return false;
}
bool ak_fe_open(const char *name) { return ready && open_hash(ak_gui_hash(name), false); }
bool ak_fe_open_ingame(const char *name) { return ak_fe_open(name); }
bool ak_fe_open_gc(const char *name, const ak_fe_gc *g)
{
    if (!ak_fe_open(name)) return false;
    ak_fe_set_gc(g); var_set("Menus.GCDisplayingEnemyTech", 0);
    u32 f0 = id_of("W_BT_EquipmentLevel1"); if (f0) focus = f0;          /* [assumed: the first row first, as the original's frame] */
    return true;
}
void ak_fe_gc_enemy(bool on) { var_set("Menus.GCDisplayingEnemyTech", on ? 1 : 0); }

const char *ak_fe_page(void) { return page ? page->root.name : NULL; }

/* ---- the widgets */
static const ak_widget *find_id(const ak_widget *w, u32 id)
{
    if (w->id == id) return w;
    for (u32 i = 0; i < w->nchild; i++) { const ak_widget *r = find_id(&w->child[i], id); if (r) return r; }
    return NULL;
}
static const ak_widget *find_named(const ak_widget *w, const char *prefix)
{
    if (w->name && !strncmp(w->name, prefix, strlen(prefix)) && (w->type == AK_GUI_BUTTON)) return w;
    for (u32 i = 0; i < w->nchild; i++) { const ak_widget *r = find_named(&w->child[i], prefix); if (r) return r; }
    return NULL;
}
static const ak_widget *find_name(const ak_widget *w, const char *name)   /* (ids are not always the name's hash: W_BU_SpawnPoint0 is 0x55F10F71) */
{
    if (w->name && !strcmp(w->name, name)) return w;
    for (u32 i = 0; i < w->nchild; i++) { const ak_widget *r = find_name(&w->child[i], name); if (r) return r; }
    return NULL;
}
static const ak_widget *find_named_in(const ak_gui_page *pg, const char *name) { return pg ? find_name(&pg->root, name) : NULL; }
static u32 id_of(const char *name) { const ak_widget *w = page ? find_name(&page->root, name) : NULL; return w ? w->id : 0; }
static bool is_button(u32 t) { return t >= 2000 && t < 3000 && t != AK_GUI_GROUP && t != AK_GUI_TEXTBOX && t != AK_GUI_TEXTLIST; }

/* a widget shows by its flags and its button's focus: bit 1 while the button is not focused, bit 2 while it is (a page's own
 * widgets count as unfocused); neither bit: always [assumed: read from the main menu's buttons - the D picture 0x43E shows
 * always, the H picture 0x43C only on the focused button, as in the original's frame] */
static const char *check_var;          /* drawing a check box's children: its value's name */
static bool shows(const ak_widget *w, bool focused)
{
    size_t l = w->name ? strlen(w->name) : 0;
    if (check_var && l > 2 && !strncmp(w->name, "E_IM_StyleCheckBox", 18) && (w->name[l - 1] == 'U' || w->name[l - 1] == 'C')) {
        bool on = var_get(check_var) != 0;                              /* the box's own pictures: ticked (..C) or not (..U) */
        if ((w->name[l - 1] == 'C') != on) return false;
        u32 f = w->flags & 6; return !f ? true : focused ? (f & 4) != 0 : (f & 2) != 0;
    }
    if (w->type < 2000 && w->flags == 0x20) return focused;           /* (a button's picture for its focus alone: the colour and insignia pickers' frames) [assumed] */
    if (w->type < 2000 && w->flags && !(w->flags & 0x400)              /* (pictures and texts: bit 10 shown) [assumed] - */
        && !(spawn_owner >= 0 && w->name && !strncmp(w->name, "E_IM_SpawnPointD", 16))) return false;   /* (but the spawn map's unfocused posts show) */
    u32 f = w->flags & 6;
    if (!f) return true;
    return focused ? (f & 4) != 0 : (f & 2) != 0;
}
static bool cond_holds(const ak_widget *w)
{
    if (!w->ncond) return true;
    int any = 0, all = 1;
    for (u32 i = 0; i < w->ncond; i++) {
        const ak_gui_cond *c = &w->cond[i]; f32 a = var_get(c->var), b = strtof(c->val, NULL); bool r;
        if (!strcmp(c->var, "GUIMenu.ActiveWidget")) { s32 ia = (s32)active_widget, ib = (s32)strtol(c->val, NULL, 0); a = (f32)(ia > ib) - (f32)(ia < ib); b = 0; }   /* (ids: exact) */
        switch (c->op) { case 1: r = fabsf(a - b) < 1e-4f; break; case 2: r = a > b + 1e-4f; break; case 3: r = a >= b - 1e-4f; break; case 4: r = a < b - 1e-4f; break; case 5: r = a <= b + 1e-4f; break; default: r = true; }
        any |= r; all &= r;
    }
    return w->cond_mode == 1 ? any != 0 : all != 0;
}
static u32 argb_of(const f32 *c, f32 a)
{
    f32 tc[4] = { c[0] * ((child_tint >> 16) & 255) / 255.0f, c[1] * ((child_tint >> 8) & 255) / 255.0f, c[2] * (child_tint & 255) / 255.0f, c[3] * (child_tint >> 24) / 255.0f };
    c = tc;
    u32 r = (u32)(c[0] * 255 + 0.5f), g = (u32)(c[1] * 255 + 0.5f), b = (u32)(c[2] * 255 + 0.5f), al = (u32)(c[3] * a * 255 + 0.5f);
    r = r > 255 ? 255 : r; g = g > 255 ? 255 : g; b = b > 255 ? 255 : b; al = al > 255 ? 255 : al;
    return al << 24 | r << 16 | g << 8 | b;
}
static const list_rows *scroll; static int scroll_shown;
/* the in-match pages' widgets the game fills at run time: the level's map (E_IM_SpawnLocal), the spawn points placed on it
 * (W_BU_SpawnPoint<k>, coloured by owner), the level's name and mode (E_TX_LevelName / LevelType), the focused post's name
 * (W_TB_SpawnName) [assumed: positions and colours as the original's frame shows them] */
static bool spawn_point_pos(const ak_widget *w, f32 *x, f32 *y)
{
    if (!have_match || !w->name || strncmp(w->name, "W_BU_SpawnPoint", 15)) return false;
    u32 k = (u32)atoi(w->name + 15); if (k >= match.nposts) return false;
    f32 sx, sy; if (!ak_hud_2d_map_point(match.post_pos[k], 40, 35, 200, &sx, &sy)) return false;
    *x = sx - 10; *y = sy - 10; return true;
}
static const char *parent_name;
static int focused_spawn(void)
{
    const ak_widget *f = page && focus ? find_id(&page->root, focus) : NULL;
    return f && f->name && !strncmp(f->name, "W_BU_SpawnPoint", 15) ? atoi(f->name + 15) : -1;
}
/* ---- Galactic Conquest's tech page (5.4): the widgets the game fills at run time (08A3B738 registers GC_Purchase*; the page's
 * filling code not traced - what each widget shows is read off the original's screen, harness 2026-11-21 [assumed]):
 * each W_BT_<Equipment|Infantry|Space>Level<n> row: E_IM_Active (the green row) and E_TX_Cost "ACQUIRED" when held, else the
 * price (E_TX_Datari credit sign + E_TX_Cost); the kind's lock (E_IM_<kind>Lock) on a level beyond the next; each
 * W_BT_Commander<n>: E_TX_Name, the price or ACQUIRED, E_IM_Lock while not available; E_TX_Info_Variable: the focused item's line. */
static ak_fe_gc gc; static int gc_kind = -1, gc_index = -1;
void ak_fe_set_gc(const ak_fe_gc *g) { gc = *g; gc_on = true; }
int ak_fe_gc_choice(int *index) { *index = gc_index; return gc_kind; }
static int gc_new_req = 1; int ak_fe_gc_new(void) { return gc_new_req; }
static int gc_quit_req; int ak_fe_gc_quit(void) { return gc_quit_req; }
static int cmpn_level; int ak_fe_cmpn_level(void) { return cmpn_level; }
void ak_fe_var(const char *name, f32 v) { var_set(name, v); }
static int gc_row(const char *pn, int *lvl)                          /* the tech row a widget is in: kind, level; -1 none */
{
    static const char *const k[3] = { "W_BT_EquipmentLevel", "W_BT_InfantryLevel", "W_BT_SpaceLevel" };
    if (!pn) return -1;
    for (int i = 0; i < 3; i++) { size_t l = strlen(k[i]); if (!strncmp(pn, k[i], l)) { *lvl = atoi(pn + l) - 1; return *lvl >= 0 && *lvl < 3 ? i : -1; } }
    return -1;
}
static int gc_cmdr(const char *pn) { return pn && !strncmp(pn, "W_BT_Commander", 14) ? atoi(pn + 14) - 1 : -1; }
static u16 gc_num[16];
static const u16 *gc_number(u32 v, u32 *n) { char b[12]; int k = snprintf(b, sizeof b, "%u", v); gc_num[0] = 0xBC; for (int i = 0; i < k; i++) gc_num[i + 1] = (u16)b[i]; *n = (u32)k + 1; return gc_num; }   /* the credit sign (08AE58C8) and the price */
/* -1 hide, 1 show, 0 as the page has it */
static int gc_shows(const ak_widget *w)
{
    if (!gc_on || !w->name) return 0;
    int lvl, kind = gc_row(parent_name, &lvl), c = gc_cmdr(parent_name);
    if (!strncmp(w->name, "E_IM_Hilite", 11) && (kind >= 0 || c >= 0)) {   /* the brackets: on the focused item only (the original's frames) */
        const ak_widget *f = page && focus ? find_id(&page->root, focus) : NULL;
        return f && f->name && parent_name && !strcmp(f->name, parent_name) ? 1 : -1;
    }
    if (kind >= 0) {
        bool have = lvl <= gc.tech[kind];
        if (!strcmp(w->name, "E_IM_Active")) return have ? 1 : -1;
        if (!strcmp(w->name, "E_TX_Datari")) return -1;            /* [assumed: the sign drawn with the price instead, as the screen shows it] */
        if (!strcmp(w->name, "E_TX_Cost")) return 1;
        if (strstr(w->name, "Lock")) return lvl > gc.tech[kind] + 1 ? 1 : -1;
    }
    if (c >= 0 && c < 4) {
        if (!strcmp(w->name, "E_IM_Lock")) return gc.cmdr_avail[c] && !gc.cmdr_bought[c] ? -1 : gc.cmdr_bought[c] ? -1 : 1;
        if (!strcmp(w->name, "E_TX_Datari")) return -1;
    }
    return 0;
}
static const u16 *gc_text(const ak_widget *w, u32 *n)
{
    if (!gc_on || !w->name) return NULL;
    int lvl, kind = gc_row(parent_name, &lvl), c = gc_cmdr(parent_name);
    if (kind >= 0) {
        if (!strcmp(w->name, "E_TX_Cost")) { if (lvl <= gc.tech[kind]) { *n = gc.acquired_len; return gc.acquired; } return gc_number(gc.tech_price[kind][lvl], n); }
    }
    if (c >= 0 && c < 4) {
        if (!strcmp(w->name, "E_TX_Name")) { *n = gc.cmdr_name_len[c]; return gc.cmdr_name[c]; }
        if (!strcmp(w->name, "E_TX_State")) { if (gc.cmdr_bought[c]) { *n = gc.acquired_len; return gc.acquired; } return gc_number(gc.cmdr_price[c], n); }
    }
    if (!strcmp(w->name, "E_TX_Info_Variable")) {
        const ak_widget *f = page && focus ? find_id(&page->root, focus) : NULL; int fl, fk = f ? gc_row(f->name, &fl) : -1, fc = f ? gc_cmdr(f->name) : -1;
        int i = fk >= 0 ? fk * 3 + fl : fc >= 0 && fc < 4 ? 9 + fc : -1;
        if (i >= 0 && gc.info[i]) { *n = gc.info_len[i]; return gc.info[i]; }
    }
    return NULL;
}
static const u16 *override_text(const ak_widget *w, u32 *n)
{
    { const u16 *t = gc_text(w, n); if (t) return t; }
    if (w->binding && !strcmp(w->binding, "BFF.FE_ProfileName")) return ak_fe_profile_name(n);
    if (w->name && !strcmp(w->name, "E_TX_MedalNotification")) { *n = medal_msg_n; return medal_msg_n ? medal_msg : NULL; }   /* (08A32C4C's text) */   /* (the profile's name, 089783BC's) */
    if (!have_match || !w->name) return NULL;
    if (parent_name && !strcmp(parent_name, "W_TB_SpawnName")) {          /* the focused post's name */
        int k = focused_spawn(); if (k >= 0 && (u32)k < match.nposts && match.post_name[k] >= 0) return ak_hud_post_name(match.post_name[k], n);
    }
    if (!strcmp(w->name, "E_TX_LevelName")) return ak_hud_stdtext(match.level_text, n);
    if (!strcmp(w->name, "E_TX_LevelTime") && match.time_left >= 0) {   /* the time left, "m:ss" (the original's spawn map: 59:59) [assumed: its format beyond the hour] */
        static u16 t[16]; char b[16]; s32 sec = (s32)match.time_left; snprintf(b, sizeof b, "%d:%02d", sec / 60, sec % 60);
        u32 k = 0; while (b[k] && k < 15) { t[k] = (u8)b[k]; k++; } *n = k; return t; }
    if (!strcmp(w->name, "E_TX_LevelType")) return ak_hud_stdtext(40 + 2 * (u32)(match.mode & 3), n);
    return NULL;
}
/* ---- the customisation menu (PARITY 8.2 / 2.1): BFF_CUSTOMISATION.GUI's MP_Customisation over MP_CustomBackground, the item
 * carousel MP_CustomCarousel over both.  Read from the FE_Customisation_* functions (08A276F0 ..):
 *  - eight categories (names: menu texts at 0x08ADFBF4, descriptions at 0x08ADFC14), each a list of items: Weapon 1 (10),
 *    Weapon 2 (8), Explosive (6), Special Item (8), Power Up (6) - Weapon blueprints by h31 hash (tables 0x08ADC5E8 ..; 0 = none),
 *    taken in the player's faction's version (08A23598) - then Health, Speed and Capture Rate (None and levels 1-3, texts at
 *    0x08ADFCE4 / 0x08ADFD04 / 0x08ADFCF4).
 *  - an item's cost: the weapon's Cost (08A3454C); the levels' from 0x08AE30BC (Health and Speed 0 / 10 / 20 / 30, Capture Rate
 *    0 / 15 / 25 / 35); a category's total is its item's cost (08A342E8, "%d"); the credits line "CREDITS: <spent>/<max>"
 *    (08A27994, "%ls %d/%d") and BFF.FE_Customisation_Credits = what is left (< 0: the over-spent line and the OVERSPENT page).
 *  - cross on a category opens the carousel (08A27EC4); cross on an item takes it (08A27F28, no credit check), square clears the
 *    category (08A27FD8: the item 0); triangle asks CONFIRM CANCEL (08A27E74 -> MP_CustomCancel), whose cross puts the loadout
 *    back as it was (08A27DE0); circle leaves the menu.
 *  The credits are 200 and the default loadout Blaster Rifle, Blaster Pistol, the faction's grenade, Health and Speed Level 1
 *  (the original's spawn screen, 1.15).  [assumed: the level and power-up rows' carousel pictures are the background page's
 *  own attribute pictures; the 3D item and soldier models (1004 widgets) are not drawn yet] */
#define NCAT 8
static const char *const cust_bp[5][10] = {
    { NULL, "BlasterRifle", "ArcCaster", "Carbonite_Gun", "ALL_Incinerator", "Shotgun", "Sniper Rifle", "REP_Chaingun", "ALL_Bow_Caster", "Rocket_Launcher" },
    { "BlasterPistol", "Fusion Cutter", "ALL_Tri_Shot", "Emp_Launcher", "Particle_Pistol", "Grenade_Launcher_OnTime", "Guided_Missile", "Orbital Strike Gun" },
    { NULL, "REP_Grenade", "Det_Pack", "Proximity_Mines", "Cluster_Grenades", "Wrist_Rocket" },
    { NULL, "ALL_HealthAmmo_Dispenser", "auto_turret_droid", "Recon_Droid", "Stealth_Suit", "Jetpack", "Jumppack", "Personal_Shield" },
    { NULL, "Rally", "Rage", "Stamina", "Regenerate", "VehicleAutoRepair" } };
static const int cust_count[NCAT] = { 10, 8, 6, 8, 6, 4, 4, 4 };
static const u32 cust_name_key[NCAT] = { 0x6853C9B5u, 0x59E84303u, 0xEE4A6FA9u, 0x13A07C95u, 0x10EDCBD1u, 0x0649FD18u, 0xDFCBBE0Bu, 0x54844D09u };
static const u32 cust_desc_key[NCAT] = { 0xB208FD2Bu, 0x0B1E70F9u, 0xCA746A73u, 0xCCD8158Bu, 0x49944FC7u, 0x838D068Eu, 0x25E6ADD5u, 0x7FA27253u };
static const u32 cust_level_key[3][4] = { { 0xA40C5954u, 0xA354D5E1u, 0xA354D5E2u, 0xA354D5E3u }, { 0xA40C5954u, 0x6C2B49F0u, 0x6C2B49F1u, 0x6C2B49F2u },
                                          { 0xA40C5954u, 0xB671376Eu, 0xB671376Fu, 0xB6713770u } };
static const int cust_level_cost[3][4] = { { 0, 10, 20, 30 }, { 0, 10, 20, 30 }, { 0, 15, 25, 35 } };
#define CUST_CREDITS 200
static int cust_sel[NCAT] = { 1, 0, 1, 0, 0, 1, 1, 0 }, cust_saved[NCAT], cust_cat; static u32 cust_return;
static void cust_open(void);
static const ak_blueprints *fe_bp; static ak_fe_model_fn model_fn; static f32 clock_total;
void ak_fe_set_model_drawer(ak_fe_model_fn fn) { model_fn = fn; }
void ak_fe_set_blueprints(const void *bp) { fe_bp = (const ak_blueprints *)bp; }
static const ak_bp_object *cust_item(int cat, int i)          /* the faction's version of a Weapon (08A23598) */
{
    if (cat < 0 || cat > 4 || i < 0 || i >= cust_count[cat] || !cust_bp[cat][i] || !fe_bp) return NULL;
    const ak_bp_object *w = ak_bp_find(fe_bp, "Weapon", cust_bp[cat][i]); if (!w) return NULL;
    int fac = have_match ? match.faction[match.team & 1] : 2;
    if (ak_bp_int(w, "Faction Specific", 0)) {
        const ak_bp_type *t = ak_bp_find_type(fe_bp, "Weapon");
        for (u32 k = 0; t && k < t->nobjects; k++) if (t->objects[k].parent == w && ak_bp_int(&t->objects[k], "Faction", -1) == fac) return &t->objects[k];
    }
    return w;
}
static int cust_cost(int cat, int i)
{
    if (cat >= 5) return i >= 0 && i < 4 ? cust_level_cost[cat - 5][i] : 0;
    const ak_bp_object *o = cust_item(cat, i); return o ? ak_bp_int(o, "Cost", 0) : 0;
}
static int cust_spent(void) { int t = 0; for (int c = 0; c < NCAT; c++) t += cust_cost(c, cust_sel[c]); return t; }
static const u16 *cust_name(int cat, int i, u32 *n)
{
    if (cat >= 5) return i >= 0 && i < 4 ? ak_gui_text(&texts, cust_level_key[cat - 5][i], n) : NULL;
    const ak_bp_object *o = cust_item(cat, i);
    if (!o) return ak_gui_text(&texts, 0xA40C5954u, n);                /* "None" */
    s32 id = ak_bp_int(o, "Weapon_Name", -1); return id >= 0 ? ak_hud_stdtext((u32)id, n) : NULL;
}
static int pers_count(const char *fn); static bool pers_text(const char *fn, int row, u32 *n, const u16 **out); static bool pers_picture(const char *fn, int row, f32 *uv);
static int pers_insignia(void);
static bool pers_hide(const ak_widget *w); static void pers_picker_draw(void);
static bool pers_look(int row, ak_fe_look *out, f32 off[3]);
static int medal_count(const char *fn); static bool medal_text(const char *fn, int row, u16 *buf, u32 *n, const u16 **out); static bool medal_picture(const char *fn, int row, f32 *uv);
static s32 lb_tex = -1;                                              /* (a row part's picture from another of the file's textures, -1 its own) */
static int pers_cat(void); static const u16 *pers_item_name(int cat, int row, const char *suffix, u32 *n); static const u32 pers_prompt_key[5];
static void cust_vars(void)                                            /* the script values the pages show by */
{
    var_set("BFF.FE_Customisation_Credits", (f32)(CUST_CREDITS - cust_spent()));
    var_set("BFF.FE_Customisation_EnableSellButton", cust_sel[cust_cat] > 0 && cust_cost(cust_cat, cust_sel[cust_cat]) > 0);
    var_set("BFF.FE_Customisation_PowerUp", (f32)cust_sel[4]); var_set("BFF.FE_Customisation_Health", (f32)cust_sel[5]);
    var_set("BFF.FE_Customisation_Speed", (f32)cust_sel[6]); var_set("BFF.FE_Customisation_Agility", (f32)cust_sel[7]);
    var_set("BFF.FE_Customisation_Insignia", (f32)pers_insignia());   /* (08A3646C: bound to the profile's insignia, +0x5D8) */
}
static bool in_cust(void) { return page && page->root.name && (!strncmp(page->root.name, "MP_Custom", 9)); }
int ak_fe_loadout(int sel[8], const char *names[5])
{
    for (int c = 0; c < NCAT; c++) sel[c] = cust_sel[c];
    for (int c = 0; c < 5; c++) names[c] = cust_bp[c][cust_sel[c]];
    return cust_spent();
}
/* a list box's rows: the customisation's categories or the chosen category's items */
static int lb_count(const ak_widget *w)
{
    if (!w->name) return 0;
    const ak_widget *t = w->nchild ? &w->child[w->nchild - 1] : NULL;
    for (u32 i = 0; t && i < t->nchild; i++) {
        const char *fn = t->child[i].fill.fn; if (!fn) continue;
        if (!strncmp(fn, "FE_Customisation_ListCategory", 29)) return NCAT;
        if (!strncmp(fn, "FE_Customisation_ListCarousel", 29)) return cust_count[cust_cat];
        if (!strncmp(fn, "FE_Personalisation_", 19)) return pers_count(fn);
        if (!strncmp(fn, "FE_MedalsPopulate", 17)) return medal_count(fn);
    }
    return 0;
}
/* the carousel's rows: the category's items, the chosen one picked, about it in view (3 shown) */
static void cust_carousel_sync(void)
{
    int k = layer_of("MP_CustomCarousel"); if (k < 0) return;
    const ak_widget *cw = find_name(&layer[k]->root, "W_LB_Carousel"); if (!cw) return;
    list_rows *C = rows_of(cw->id);
    if (!C && nlists < 24) { C = &lists[nlists++]; memset(C, 0, sizeof *C); C->id = cw->id; }
    if (!C) return;
    C->n = cust_count[cust_cat]; C->sel = cust_sel[cust_cat]; C->top = C->sel > 1 ? C->sel - 1 : 0; if (C->top + 3 > C->n) C->top = C->n > 3 ? C->n - 3 : 0;
}
/* a row part's column: its text (true) */
static bool lb_text(const char *fn, int row, u16 *buf, u32 *n, const u16 **out)
{
    char t[24] = ""; *out = NULL;
    if (pers_text(fn, row, n, out)) return true;
    if (medal_text(fn, row, buf, n, out)) return true;
    if (!strcmp(fn, "FE_Customisation_ListCategoryNames")) { *out = ak_gui_text(&texts, cust_name_key[row & 7], n); return true; }
    if (!strcmp(fn, "FE_Customisation_ListCategoryTotals")) snprintf(t, sizeof t, "%d", cust_cost(row & 7, cust_sel[row & 7]));
    else if (!strcmp(fn, "FE_Customisation_ListCarouselCosts")) snprintf(t, sizeof t, "%d", cust_cost(cust_cat, row));
    else if (!strcmp(fn, "FE_Customisation_ListCarouselNames")) { *out = cust_name(cust_cat, row, n); return true; }
    else return false;
    u32 k = 0; for (const char *c = t; *c && k < 23; c++) buf[k++] = (u16)(u8)*c; *n = k; *out = buf; return true;
}
/* a row part's picture: true with its cell (empty = none) */
static const ak_widget *find_named_in(const ak_gui_page *pg, const char *name);
static bool lb_picture(const char *fn, int row, f32 *uv)
{
    if (!strcmp(fn, "FE_Customisation_ListCategoryIcons")) {          /* attributes_01.tga: the category's cell, 0.1015625 a row down from 0.125 */
        f32 v0 = 0.125f + (f32)(row & 7) * 0.1015625f; uv[0] = 0; uv[1] = v0; uv[2] = 0.12109375f; uv[3] = v0 + 0.1015625f; return true;
    }
    if (!strcmp(fn, "FE_Customisation_ListCarouselIcons")) {
        static const char *const lvl[3] = { "E_IM_Health%d", "E_IM_Speed%d", "E_IM_Agility%d" }, *pu[6] = { NULL, "E_IM_Rally", "E_IM_Rage", "E_IM_Stamina", "E_IM_Regenerate", "E_IM_AutoRepair" };
        char nm[32] = ""; memset(uv, 0, 16);
        if (cust_cat >= 5 && row > 0) snprintf(nm, sizeof nm, lvl[cust_cat - 5], row);
        else if (cust_cat == 4 && row > 0 && row < 6) snprintf(nm, sizeof nm, "%s", pu[row]);
        for (int k = 0; nm[0] && k < nlayer; k++) { const ak_widget *b = find_named_in(layer[k], nm); if (b) { memcpy(uv, b->uv, 16); break; } }
        return true;
    }
    if (!strcmp(fn, "FE_Customisation_ListCarouselAnims")) { memset(uv, 0, 16); return true; }   /* (the 3D items: not drawn yet) */
    if (pers_picture(fn, row, uv)) return true;
    if (medal_picture(fn, row, uv)) return true;
    return false;
}
static int lb_row = -1; static bool lb_selected;                     /* drawing a list box's row: which, and is it the chosen one */
/* the sides' pictures on the team and score board pages (MP_Team_Selection, MP_ScoreBoard, MP_RespawnScoreboard,
 * MP_GameOverScoreboard), set by the game at run time:
 *  - E_IM_StyleButtonH_Logo_CIS / ..._CIS 1: the player's faction's logo and its opponent's (08A2A844: menu_buttons.tga cells
 *    from the table 0x08AE1B1C by faction, 0 Republic .. 3 Empire; the opponent by 08A26F88: 0 <-> 1, 2 <-> 3);
 *  - E_IM_GoodInsignia<k> / E_IM_EvilInsignia<k>: row k of the friendly / enemy list (08A32698): an AI soldier (entity +72 bit 1)
 *    the terminal cell (0.586, 0.941 - 0.645, 0.996); a person the insignia chosen in the customisation (+68, cells 0x08AE28DC,
 *    12 = none) [assumed: the player's is cell 0 until the customisation menu is ported]; no row, no picture.
 * Returns true with the cell in uv (an empty cell hides the picture). */
static const f32 faction_logo[5][4] = { { 0.914f, 0.352f, 0.992f, 0.43f }, { 0.84f, 0.352f, 0.918f, 0.43f }, { 0.715f, 0.914f, 0.793f, 0.992f },
                                        { 0.762f, 0.352f, 0.84f, 0.43f }, { 0, 0, 0, 0 } };
static const f32 insignia_cell[13][4] = {
    { 0.527f, 0.941f, 0.586f, 0.996f }, { 0.41f, 0.941f, 0.469f, 0.996f }, { 0.469f, 0.941f, 0.527f, 0.996f }, { 0.352f, 0.941f, 0.41f, 0.996f },
    { 0.234f, 0.941f, 0.293f, 0.996f }, { 0.293f, 0.941f, 0.352f, 0.996f }, { 0.059f, 0.941f, 0.117f, 0.996f }, { 0.176f, 0.941f, 0.234f, 0.996f },
    { 0, 0.941f, 0.059f, 0.996f }, { 0.117f, 0.941f, 0.176f, 0.996f }, { 0.586f, 0.941f, 0.645f, 0.996f }, { 0.703f, 0.18f, 0.754f, 0.23f }, { 0, 0, 0, 0 } };
static bool picture_override(const ak_widget *w, f32 *uv)
{
    if (!strncmp(w->name, "E_IM_StyleButtonH_Logo_CIS", 26)) {
        int f = match.faction[match.team & 1], o = f == 1 ? 0 : f == 0 ? 1 : f == 2 ? 3 : f == 3 ? 2 : 4;
        int k = w->name[26] ? o : (f >= 0 && f < 4 ? f : 4); memcpy(uv, faction_logo[k], 16); return true;
    }
    bool good = !strncmp(w->name, "E_IM_GoodInsignia", 17), evil = !strncmp(w->name, "E_IM_EvilInsignia", 17);
    if (!good && !evil) return false;
    u32 k = (u32)atoi(w->name + 17); int side = good ? match.team : 1 - match.team;
    if (side < 0 || side > 1 || k >= match.nnames[side]) { memset(uv, 0, 16); return true; }
    int cell = match.bot[side][k] ? 10 : pers_insignia();
    if (cell < 0 || cell > 12) cell = 12;
    memcpy(uv, insignia_cell[cell], 16); return true;
}
static void draw_widget(const ak_widget *w, f32 ox, f32 oy, bool focused)
{
    f32 x = ox + w->pos[0], y = oy + w->pos[1];
    if (spawn_point_pos(w, &x, &y)) { ox = 0; oy = 0; }
    if (have_match && w->name && !strcmp(w->name, "E_IM_SpawnLocal")) { ak_hud_2d_map(x, y, 200, 0xFFFFFFFFu); return; }
    if (have_match && w->name && !strcmp(w->name, "E_TX_StyleMenuTitle") && cur_file == 8) return;   /* (the campaign's title: none in a plain match) */
    if (w->is_template && lb_row < 0) return;                          /* (a list box's row: drawn by the list, once per row) */
    if (getenv("AK_FE_TRACE") && w->name && strstr(w->name, getenv("AK_FE_TRACE"))) AK_INFO("fe", "draw %s shows %d cond %d at %.0f,%.0f", w->name, shows(w, focused), cond_holds(w), x, y);
    if (getenv("AK_FE_TRACE2") && w->name) { static int nd; if (nd++ < ak_setting_int("AK_FE_TRACE2_N", 400)) { fprintf(stderr, "[W] %s bind=%s text=%u/%u", w->name, w->binding ? w->binding : "-", w->text_table, w->text_key); for (u32 i = 0; i < w->ncond; i++) fprintf(stderr, " cond(%s %u %s)", w->cond[i].var, w->cond[i].op, w->cond[i].val); for (u32 i = 0; i < w->nactions; i++) fprintf(stderr, " act(%s %s k%u)", w->actions[i].fn, w->actions[i].arg, w->actions[i].key); fprintf(stderr, "\n"); } }
    if (pers_hide(w)) return;                                         /* (the colour swatches: the picker stands in) */
    bool in_row = lb_row >= 0 && !w->is_template;
    if (in_row && (w->flags & 0x20) && !(w->flags & 0x400)) {          /* a row part for the chosen row only (flags bit 5) [assumed] */
        if (!lb_selected || !cond_holds(w)) return;
    } else if (w->type != AK_GUI_PAGE && gc_shows(w) == -1) return;
    else if (w->name && !strncmp(w->name, "E_TX_GC_Win", 11)) { if (!cond_holds(w)) return; }   /* (MP_Win_*: by its condition alone - its flags hide it on a page without buttons) [assumed] */
    else if (w->type != AK_GUI_PAGE && gc_shows(w) != 1 && (!shows(w, focused) || !cond_holds(w))) return;
    /* the Italian subtitle under the logo (menu_logos.tga's strip at v 0.445: "W_IM_ItalianLogo", or plain "Image 1") shows for
       the Italian language only - the original's English frames have none [assumed: the page scripts' doing] */
    if (w->type == AK_GUI_IMAGE && w->tex >= 0 && fabsf(w->uv[1] - 0.4453125f) < 1e-4f && gf.tex[w->tex].name && strstr(gf.tex[w->tex].name, "menu_logos")
        && strcmp(ak_setting_str("AK_FE_LANGUAGE", "AM"), "IT")) return;
    f32 a = 1;
    for (u32 i = 0; i < w->nanims; i++)                               /* "pulse_highlight": the highlight breathes [assumed rate] */
        if (!strncmp(w->anims[i], "pulse_highlight", 15)) a = 0.65f + 0.35f * cosf(fe_clock * 6.2831853f);
    if (w->type == AK_GUI_MODEL && model_fn) {                        /* a 3D model: the item, the second weapon, the soldier */
        const ak_bp_object *wo = NULL; bool soldier = false, any = false;
        if (in_row && w->fill.fn && !strcmp(w->fill.fn, "FE_Customisation_ListCarouselAnims")) {
            /* [assumed: on the chosen row the Hilight model stands in for the Default one] */
            if (!(lb_selected && w->name && strstr(w->name, "_Default"))) { wo = cust_item(cust_cat, lb_row); any = cust_cat <= 3; }
        } else if (w->name && !strcmp(w->name, "E_Anim_SecondaryWeapon")) { wo = cust_item(1, cust_sel[1]); any = true; }
        else if (w->name && !strcmp(w->name, "E_Anim_AppDisplay")) { wo = cust_item(0, cust_sel[0]); soldier = true; any = true; }
        ak_fe_look lk; f32 off[3]; memcpy(off, w->cam_off, 12); bool have_lk = false;
        if (w->name && !strcmp(w->name, "E_Anim_AppDisplay") && pers_look(-1, &lk, off)) have_lk = true;   /* (the personalisation's soldier, 08A36BA0) */
        if (in_row && w->fill.fn && !strcmp(w->fill.fn, "FE_Personalisation_ListCarouselAnims") && pers_look(lb_row, &lk, off)) { have_lk = soldier = any = true; }
        if (have_lk) { soldier = any = true; wo = NULL; }
        if (any && (wo || soldier)) {
            f32 rect[4] = { x, y, w->size[0], w->size[1] }, rot[3];
            for (int k = 0; k < 3; k++) rot[k] = w->cam_rot[k] + w->cam_spin[k] * clock_total;
            f32 fov = w->cam_aspect != 0 ? w->cam_fov / w->cam_aspect : w->cam_fov;
            ak_hud_2d_end(); model_fn(wo, soldier, have_lk ? &lk : NULL, rect, fov, off, rot); ak_hud_2d_begin();
        }
    }
    f32 uvo[4]; const f32 *uv = w->uv;
    if (have_match && w->type == AK_GUI_IMAGE && w->name && picture_override(w, uvo)) { if (uvo[2] <= uvo[0]) return; uv = uvo; }
    s32 wtex = w->tex; lb_tex = -1;
    if (in_row && w->fill.fn && w->fill.fn[0] && w->type == AK_GUI_IMAGE && lb_picture(w->fill.fn, lb_row, uvo)) { if (uvo[2] == uvo[0]) return; uv = uvo; if (lb_tex >= 0) wtex = lb_tex; }
    if (gc_on && w->type == AK_GUI_IMAGE && w->name && !strcmp(w->name, "E_IM_Commander") && gc_cmdr(parent_name) >= 0 && gc_cmdr(parent_name) < 4) {
        /* the side's commander from GC's own sheets (texture table 12-15: Alliance, greys, Empire, greys; cells by 08A4xxxx's draws:
           commander k at u (k / 2) x 0.4219, v (k % 2) x 0.375, 0.4219 x 0.375) - in colour while available or bought, else greyed
           [assumed: which sheet when] */
        int c = gc_cmdr(parent_name); bool col = gc.cmdr_avail[c] || gc.cmdr_bought[c]; ak_gfx_tex *t = gc.portrait[col ? 0 : 1];
        if (t) { f32 u0 = (f32)(c / 2) * 0.4219f, v0 = (f32)(c % 2) * 0.375f; ak_hud_2d_quad(t, x, y, x + w->size[0], y + w->size[1], u0, v0, u0 + 0.4219f, v0 + 0.375f, argb_of(w->rgba, a)); goto children; }
    }
    if (w->type == AK_GUI_IMAGE && wtex >= 0 && (u32)wtex < gf.ntex && gtex[wtex]) {
        const f32 *c = w->rgba;
        if (spawn_owner >= 0 && w->name && !strncmp(w->name, "E_IM_SpawnPoint", 15)) c = spawn_rgba[spawn_owner][w->name[15] == 'H'];
        ak_hud_2d_quad(gtex[wtex], x, y, x + w->size[0], y + w->size[1], uv[0], uv[1], uv[2], uv[3], argb_of(c, a));
    } else if (w->type == AK_GUI_IMAGE && w->rgba[3] > 0) {          /* no picture: a plain quad in its colour (panels, scroll bars) */
        f32 h = w->size[1], yy = y;
        if (scroll && w->name && !strcmp(w->name, "W_IM_Bar")) {      /* the bar: the shown share of the rows, at the first shown row */
            f32 n = (f32)scroll->n, sh = (f32)scroll_shown; if (n > sh) { yy = y + h * (f32)scroll->top / n; h = h * sh / n; }
        }
        ak_hud_2d_quad(NULL, x, yy, x + w->size[0], yy + h, 0, 0, 1, 1, argb_of(w->rgba, a));
    } else if (w->type == AK_GUI_TEXT && (w->text_key || override_text(w, &(u32){0}) || (in_row && w->fill.fn))) {
        u32 n = 0; u16 rb[24]; const u16 *s = NULL;
        if (in_row && w->fill.fn && w->fill.fn[0] && lb_text(w->fill.fn, lb_row, rb, &n, &s)) { if (!s) return; }
        else { s = override_text(w, &n); if (!s) s = ak_gui_text(&texts, w->text_key, &n); }
        if (s && n) {
            int big = w->font && strstr(w->font, "_13") != NULL;
            int al = (w->text_flags & 8) ? 2 : (w->text_flags & 4) ? 1 : 0;   /* 0xC8 right, 0xC4 centred, 0xC2 left */
            f32 lh = ak_hud_2d_line(big) * w->text_scale, ty = y + (w->size[1] - lh) * 0.5f;
            ak_hud_2d_text(big, x, ty, x + w->size[0], w->text_scale, argb_of(w->rgba, a), s, n, al);
        }
    }
    if (w->type == AK_GUI_TEXTLIST) {
        list_rows *L = rows_of(w->id);
        if (L && L->n) {
            int big = w->font && strstr(w->font, "_13") != NULL; f32 lh = ak_hud_2d_line(big);
            int shown = w->rows_shown ? (int)w->rows_shown : 8;
            f32 rh = w->size[1] > 0 ? w->size[1] / (f32)shown : lh;
            for (int r = 0; r < shown && L->top + r < L->n; r++) {
                int k = L->top + r; bool on = k == L->sel && (w->id == focus);
                u32 col = on ? argb_of(w->sel_rgba, 1) : argb_of(w->rgba, 1);
                int al = (w->rows_align & 8) ? 2 : (w->rows_align & 4) ? 1 : 0;   /* [assumed: a 3-unit margin on either side] */
                ak_hud_2d_text(big, x + 3, y + r * rh + (rh - lh) * 0.5f, x + w->size[0] - (al == 2 ? 3 : 0), 1.0f, col, L->row[k], L->len[k], al);
            }
        }
    }
    if ((w->type == AK_GUI_LIST || w->type == AK_GUI_LIST2) && w->nchild && w->child[w->nchild - 1].is_template) {   /* a list box: its row per row */
        list_rows *L = rows_of(w->id); const ak_widget *t = &w->child[w->nchild - 1];
        int n = lb_count(w), shown = w->rows_shown ? (int)w->rows_shown : 8; f32 rh = w->size[1] > 0 ? w->size[1] / (f32)shown : 25;
        if (L) { L->n = n; if (L->sel >= n) L->sel = n ? n - 1 : 0; }
        for (int r = 0; L && r < shown && L->top + r < n; r++) {
            int keep_row = lb_row; bool keep_sel = lb_selected;
            lb_row = L->top + r; lb_selected = lb_row == L->sel;
            draw_widget(t, x, y + (f32)r * rh, lb_selected);
            lb_row = keep_row; lb_selected = keep_sel;
        }
    }
children:;
    bool f2 = is_button(w->type) ? (w->id == focus) : focused;
    const list_rows *keep = scroll; int keep_shown = scroll_shown; const char *keep_parent = parent_name; u32 keep_tint = child_tint; const char *keep_check = check_var; int keep_owner = spawn_owner;
    if (w->type == AK_GUI_BUTTON2 && w->binding && w->binding[0]) check_var = w->binding;
    if (w->type >= 2000) parent_name = w->name;
    if (have_match && w->name && !strncmp(w->name, "W_BU_SpawnPoint", 15)) {   /* the post's owner (08A2DD50 -> the button's vfunc +120) */
        u32 k = (u32)atoi(w->name + 15); int o = k < match.nposts ? match.post_owner[k] : -1;
        spawn_owner = o == match.team ? 0 : (o == 0 || o == 1) ? 1 : 2;
    }
    if (w->type == AK_GUI_GROUP && w->name && !strncmp(w->name, "W_GP_", 5) && strstr(w->name, "Scroll")) {   /* "W_GP_PlanetScroll" scrolls "W_LB_PlanetList" [assumed: by name] */
        char want[64]; size_t l = strstr(w->name, "Scroll") - (w->name + 5); snprintf(want, sizeof want, "W_LB_%.*s", (int)l, w->name + 5);
        scroll = NULL;
        for (int i = 0; i < nlists; i++) { const ak_widget *lw = find_id(&page->root, lists[i].id); if (lw && lw->name && !strncmp(lw->name, want, strlen(want))) { scroll = &lists[i]; scroll_shown = lw->rows_shown ? (int)lw->rows_shown : 8; } }
        if (!scroll || scroll->n <= scroll_shown) { scroll = keep; return; }   /* (nothing to scroll: no bar) */
    }
    for (u32 i = 0; i < w->nchild; i++) draw_widget(&w->child[i], x, y, f2);
    scroll = keep; scroll_shown = keep_shown; parent_name = keep_parent; child_tint = keep_tint; check_var = keep_check; spawn_owner = keep_owner;
}

void ak_fe_draw(void)
{
    if (!page) return;
    ak_hud_2d_begin();
    if (nlayer) {
        layer_focus[active_layer] = focus; active_widget = focus; var_set("GUIMenu.ActiveWidget", (f32)(s32)focus);   /* (one active widget, the page in use's) */
        for (int k = 0; k < nlayer; k++) {                             /* (each page drawn with its own focus) */
            u32 keepf = focus; focus = layer_focus[k];
            const ak_gui_page *keepp = page; page = layer[k];
            draw_widget(&layer[k]->root, 0, 0, false); focus = keepf; page = keepp;
        }
        var_set("GUIMenu.ActiveWidget", (f32)(s32)focus);
    } else { active_widget = focus; draw_widget(&page->root, 0, 0, false); }
    pers_picker_draw();
    ak_hud_2d_end();
}

/* ---- the script functions (FE_*) - the game registers each by name (08A29690: names in UTF-16, e.g. FE_ListAllMaps 08A31C38);
 * their effects here are read from those functions: the selection status, the play list, and the lists they close (08A275D0:
 * a "close" message, kind 5) and open (08A27590: open and focus) */
static void open_widget(u32 id) { if (find_id(&page->root, id)) focus = id; }
static void fill(const ak_widget *w)
{
    list_rows *L = rows_of(w->id);
    if (!L) { if (nlists >= 24) return; L = &lists[nlists++]; memset(L, 0, sizeof *L); L->id = w->id; }
    int keep = L->sel; L->n = 0; fill_target = L;
    const char *fn = w->fill.fn;
    if (!fn || !fn[0]) return;
    if (!strcmp(fn, "FE_ListAllMaps")) {                              /* 08A31C38: every map */
        for (int i = 0; i < NMAPS; i++) row_std(maps[i].text, i);
    } else if (!strcmp(fn, "FE_ListValidModes") && sel_map >= 0) {   /* 08A31A94: the chosen map's modes */
        for (int m = 0; m < 4; m++) if (maps[sel_map].modes[m]) row_std(39 + 2 * (u32)m, m);
    } else if (!strcmp(fn, "FE_ListValidEras") && sel_map >= 0) {    /* 08A319F4: Galactic Civil War, Clone Wars */
        if (maps[sel_map].gcw) row_std(348, 0);
        if (maps[sel_map].cw) row_std(349, 1);
    } else if (!strncmp(fn, "FE_ListFriendly", 15) || !strncmp(fn, "FE_ListEnemy", 12)) {   /* the sides' soldiers and their columns */
        if (!have_match) return;
        bool fr = !strncmp(fn, "FE_ListFriendly", 15); int side = fr ? match.team : 1 - match.team;
        const char *col = fn + (fr ? 15 : 12);
        for (u32 i = 0; i < match.nnames[side] && i < 32; i++) {
            u16 b[16]; u32 n = 0; char t[16] = "";
            if (!strcmp(col, "Entities")) { if (match.name[side][i]) row_add16(match.name[side][i], match.name_len[side][i], (int)i); continue; }
            if (!strcmp(col, "NumKills")) snprintf(t, sizeof t, "%u", match.kills[side][i]);
            else if (!strcmp(col, "Deaths")) snprintf(t, sizeof t, "%u", match.deaths[side][i]);
            else if (!strcmp(col, "Score")) snprintf(t, sizeof t, "%u", match.kills[side][i]);   /* [assumed: a kill a point] */
            else if (!strcmp(col, "Status")) snprintf(t, sizeof t, "%s", match.alive[side][i] ? "" : "-");
            for (const char *c = t; *c && n < 15; c++) b[n++] = (u16)(u8)*c;
            row_add16(b, n, (int)i);
        }
    } else if (!strcmp(fn, "FE_Customisation_Credits")) {          /* 08A27994: "CREDITS: <spent>/<max>" */
        u32 n; const u16 *t = ak_gui_text(&texts, 0x1DEFE5CCu, &n); u16 b[48]; u32 k = 0; char num[24];
        if (t) { memcpy(b, t, (n < 30 ? n : 30) * 2); k = n < 30 ? n : 30; }
        snprintf(num, sizeof num, " %d/%d", cust_spent(), CUST_CREDITS); for (const char *c = num; *c && k < 47; c++) b[k++] = (u16)(u8)*c;
        row_add16(b, k, 0);
    } else if (!strcmp(fn, "FE_Customisation_Prompt")) {           /* 08A27C24: the category's description, on the carousel the item's */
        u32 n = 0; const u16 *t = NULL;
        if (page && page->root.name && !strcmp(page->root.name, "MP_CustomCarousel")) {
            list_rows *C = NULL; const ak_widget *cw = find_named(&page->root, "W_LB_Carousel"); if (cw) C = rows_of(cw->id);
            const ak_bp_object *o = cust_item(cust_cat, C ? C->sel : cust_sel[cust_cat]); s32 d = o ? ak_bp_int(o, "Description", -1) : -1;
            if (d >= 0) t = ak_hud_stdtext((u32)d, &n);
        }
        if (!t) t = ak_gui_text(&texts, cust_desc_key[cust_cat & 7], &n);
        if (t) row_add16(t, n, 0);
    } else if (!strcmp(fn, "FE_GetVersionNumber")) {              /* 08A29580: "Version: %S (%S)" of snprintf("02.11aj.%d", 1) and the build's time;
                                                                         MP_MainMenu's W_TLB_VersionNumber shows it while BFF.FE_ShowVersionNumber == 1 */
        static const char v[] = "Version: 02.11aj.1 (18:06:38, Jul 29 2007)"; u16 b[64]; u32 k = 0;
        for (const char *c = v; *c && k < 63; c++) b[k++] = (u16)(u8)*c;
        row_add16(b, k, 0);
    } else if (!strcmp(fn, "FE_Personalisation_Prompt")) {        /* 08A36034: row 0 only */
        int cat = pers_cat(); u32 n = 0; const u16 *t = cat < 2 ? pers_item_name(cat, 0, "Desc", &n) : NULL;
        if (!t) t = ak_gui_text(&texts, pers_prompt_key[cat], &n);
        if (t) row_add16(t, n, 0);
    } else if (!strcmp(fn, "FE_ListMapsInRotation")) {               /* 08A31CA4: "Tatooine - CQST - GCW" */
        for (int i = 0; i < nrot; i++) {
            u16 b[96]; u32 n = 0, k; const u16 *t;
            static const u16 sep[3] = { ' ', '-', ' ' };
            if ((t = ak_hud_stdtext(maps[rot[i].map].text, &k))) { memcpy(b + n, t, k * 2); n += k; }
            memcpy(b + n, sep, 6); n += 3;
            if ((t = ak_hud_stdtext(40 + 2 * (u32)rot[i].mode, &k))) { memcpy(b + n, t, k * 2); n += k; }
            memcpy(b + n, sep, 6); n += 3;
            if ((t = ak_hud_stdtext(rot[i].era ? 351 : 350, &k))) { memcpy(b + n, t, k * 2); n += k; }
            row_add16(b, n, i);
        }
    }
    L->sel = keep < L->n ? (keep < 0 ? 0 : keep) : (L->n ? L->n - 1 : 0);
    if (L->top > L->sel) L->top = L->sel;
}
static void fill_all(const ak_widget *w)
{
    if (w->type == AK_GUI_TEXTLIST) fill(w);
    if ((w->type == AK_GUI_LIST || w->type == AK_GUI_LIST2) && !rows_of(w->id) && nlists < 24) { list_rows *L = &lists[nlists++]; memset(L, 0, sizeof *L); L->id = w->id; L->n = lb_count(w); }
    for (u32 i = 0; i < w->nchild; i++) fill_all(&w->child[i]);
}
static void open_layer(u32 h)                                          /* a page over the one in use, which stays drawn */
{
    if (!page) return;
    if (!nlayer) { layer[0] = page; layer_prev[0] = -1; nlayer = 1; active_layer = 0; }
    if (nlayer >= MAXLAYERS) return;
    layer_focus[active_layer] = focus;
    layering = true; bool ok = open_hash(h, false); layering = false;
    if (!ok) { page = layer[active_layer]; return; }
    layer[nlayer] = page; layer_prev[nlayer] = focus_new ? active_layer : -1;
    if (focus_new) active_layer = nlayer;
    else { layer_focus[nlayer] = focus; page = layer[active_layer]; focus = layer_focus[active_layer]; layer_prev[nlayer] = -1; }
    nlayer++; focus_new = true;
}
static void use_layer(int k)                                           /* the focus to an open page */
{
    if (k < 0 || k >= nlayer) return;
    layer_focus[active_layer] = focus; active_layer = k; page = layer[k]; focus = layer_focus[k]; fe_clock = 0;
}
static int layer_of(const char *name) { for (int k = 0; k < nlayer; k++) if (layer[k]->root.name && !strcmp(layer[k]->root.name, name)) return k; return -1; }
static void close_layer(void)
{
    if (nlayer < 2) return;
    int back = layer_prev[nlayer - 1]; nlayer--;
    if (active_layer >= nlayer) { active_layer = back >= 0 && back < nlayer ? back : nlayer - 1; }
    page = layer[active_layer]; focus = layer_focus[active_layer]; fe_clock = 0;
    refill();
}
static void status(int s) { var_set("BFF.FE_MapSelectionStatus", s); }
static void rotation_changed(void) { var_set("BFF.NumMapsInRotation", nrot); var_set("BFF.FE_IsRotationListFull", nrot >= 16); }
/* The medals and the profile's counters.  The counters are u32s at profile +0xA4 (089775E0 adds one, marks the profile changed and
 * runs 08977D14); the 29 medals' earned flags are bytes at +0x168.  Counters (with what adds to them, traced):
 *   0..21  a level won (08973218: h31 of the level's name - boz_pity, endor, geonosis, hoth, hoth_ion_cannon, kashyyyk, korriban,
 *          mustafar, mygeeto, naboo, ord_mantell, saleucami, sullust, tatooine, yavin_iv, space_alderaan, space_coruscant_clone,
 *          space_hoth, space_kashyyyk_civil / _clone, space_kessel, space_mygeeto, space_yavin), from 08972F90 when the player's side
 *          won; 45 = every one of them non-zero (089775A8)
 *   33 the campaign's Endor won (0897300C); 34 a Galactic Conquest won (08A3B09C); 42 a match won outside the campaign (08972F90)
 *   36 a kill online (08A62C70: only while BFF.ExternalNetwork, 0x08C2932C); 37 nothing adds to it; 38 / 39 the top score on
 *      25 December / 4 July, online only (08973070: BFF.ExternalNetwork's neighbour 0x08C2932D, set when hosting or joining)
 *   40 / 41 a kill whose flags have bit 1 (08A62C70; 41 when the killer's vehicle is one 089C6AE8 accepts) [assumed: bit 1 = the
 *      victim was in a vehicle, 41 = the killer flies]; 46 bit 0 [assumed: a hero]; 47 a kill by a soldier in the table 0x08C2B3A4
 *      [assumed: a saber-wielding hero]; 43 a flag the player captured outside the campaign (089EADD4, message 0x8082); 44 a post
 *      taken with the player in it (089EA3D0); 48 08A1F9B0 [not traced - nothing adds to it here]
 * A medal (Medals blueprints, in 0x08ADC738's order with their counters at 0x08ADC7AC) is earned when its counter reaches
 * Test_Number; with Display_Message the text is STDTEXT 256 ("You have been awarded the %s medal") of its Name - on the HUD (08A4EDDC
 * style 4) unless DisplayOnScoreBoard, then on the game-over dialogue (08A32C4C: E_TX_MedalNotification while BFF.FE_DisplayMedal).
 * The medals page (MP_Medals, FE_Medals_* 08A34840..): 14 rows (keys 0x08AE3440 / 0x08AE3478), each with bronze / silver / gold
 * medals (0x08AE34B0, -1 none); a tier's cost text is its Test_Number when 2 or more (08A346E8), its picture (08A34A68 / 08A34D68,
 * cells set by 08A35158) the medal's when earned, else the locked cell of Medals_01.tga, or with no medal the empty one of
 * Medals_02.tga. */
#define NSTATS 49
static const char *const medal_bp[29] = {
    "Complete_Campaign", "Galactic_Conquest", "Scourge_Infra_Bronze", "Scourge_infra_silver", "Scourge_infra_Gold", "Infra_Elite",
    "Wookie_Life_Hero", "Endor_Day_Hero", "Tank_Buster_Bronze", "Tank_Buster_Silver", "Tank_Buster_Gold", "Rogue_Leader_Bronze",
    "Rogue_Leader_Silver", "Rogue_Leader_Gold", "Conqueror_Bronze", "Conqueror_Silver", "Conqueror_Gold", "Flag_Carrier_Bronze",
    "Flag_Carrier_Silver", "Flag_Carrier_Gold", "Capture_Master_Bronze", "Capture_Master_Silver", "Capture_Master_Gold",
    "Conqueror_Supreme", "Hero_Vanquisher", "Super_Slicer", "Jedi_Master_Bronze", "Jedi_Master_Silver", "Jedi_Master_Gold" };
static const u8 medal_counter[29] = { 33, 34, 36, 36, 36, 37, 38, 39, 40, 40, 40, 41, 41, 41, 42, 42, 42, 43, 43, 43, 44, 44, 44, 45, 46, 48, 47, 47, 47 };
static const s8 medal_row[14][3] = { { 8, 9, 10 }, { 11, 12, 13 }, { 26, 27, 28 }, { 14, 15, 16 }, { 17, 18, 19 }, { 20, 21, 22 }, { -1, 23, -1 },
                                     { -1, 24, -1 }, { -1, 25, -1 }, { -1, 0, -1 }, { -1, 1, -1 }, { 2, 3, 4 }, { -1, 6, -1 }, { -1, 7, -1 } };
static const u32 medal_name_key[14] = { 0x14CE3F2Au, 0x772D2CFAu, 0x8C41D115u, 0x9BFC2D0Au, 0xD9002B11u, 0x0F3ACC67u, 0xD02E6C24u,
                                        0x97379D7Du, 0xDF85141Du, 0xFE02D817u, 0xEA7C4C62u, 0x4A756E7Au, 0x9443475Du, 0xE325F0CAu };
static const u32 medal_desc_key[14] = { 0x92AF858Bu, 0xB574B2B9u, 0x0A231776u, 0xF88D97ABu, 0x1747B0D0u, 0xD9B7DE66u, 0xA0BFA5C5u,
                                        0x1C5CCB5Eu, 0xB0164DBEu, 0x832805F8u, 0xBB0D8603u, 0x75C7771Bu, 0xC8449E1Cu, 0xADA302C9u };
/* 08A35158's cells: per row, bronze / silver / gold {u0, v0, u1, v1, sheet (1 Medals_01, 2 Medals_02)} */
static const f32 medal_cell[14][3][5] = {
    { { 0, 0, .25f, .25f, 2 }, { .25f, 0, .5f, .25f, 2 }, { .5f, 0, .75f, .25f, 2 } },
    { { 0, .5f, .25f, .75f, 2 }, { .25f, .5f, .5f, .75f, 2 }, { .5f, .5f, .75f, .75f, 2 } },
    { { 0, 0, .25f, .25f, 1 }, { .5f, 0, .75f, .25f, 1 }, { .25f, 0, .5f, .25f, 1 } },
    { { 0, .5f, .25f, .75f, 1 }, { .5f, .5f, .75f, .75f, 1 }, { .25f, .5f, .5f, .75f, 1 } },
    { { 0, .25f, .25f, .5f, 2 }, { .25f, .25f, .5f, .5f, 2 }, { .5f, .25f, .75f, .5f, 2 } },
    { { 0, .25f, .25f, .5f, 1 }, { .5f, .25f, .75f, .5f, 1 }, { .25f, .25f, .5f, .5f, 1 } },
    { { 0 }, { .75f, .5f, 1, .75f, 1 }, { 0 } },
    { { 0 }, { .25f, .75f, .5f, 1, 1 }, { 0 } },
    { { 0 }, { .75f, .25f, 1, .5f, 2 }, { 0 } },
    { { 0 }, { 0, .75f, .25f, 1, 1 }, { 0 } },
    { { 0 }, { .75f, 0, 1, .25f, 2 }, { 0 } },
    { { 0, .75f, .25f, 1, 2 }, { .25f, .75f, .5f, 1, 2 }, { .5f, .75f, .75f, 1, 2 } },
    { { 0 }, { .5f, .75f, .75f, 1, 1 }, { 0 } },
    { { 0 }, { .75f, 0, 1, .25f, 1 }, { 0 } } };
/* the Vita trophy for medal k (tools/trophy/make_trophies.py: medal k -> id k + 1, from Infra_Elite (5, no trophy) on k; 0 the
   platinum, which the system gives) */
static void medal_trophy(int k) { if (k >= 0 && k < 29 && k != 5) ak_plat_trophy_unlock(k < 5 ? k + 1 : k); }
void ak_fe_trophies_sync(void) { if (!prof_have) return; for (int k = 0; k < 29; k++) if (prof[0x168 + k]) medal_trophy(k); }   /* (medals earned before) */
static u32 stat_get(int i) { if (!prof_have) prof_new(); return i >= 0 && i < NSTATS ? ak_rd32(prof + 0xA4 + 4 * i) : 0; }
static const ak_bp_object *medal_obj(int k) { return fe_bp && k >= 0 && k < 29 ? ak_bp_find(fe_bp, "Medals", medal_bp[k]) : NULL; }
static void medals_check(void)                                         /* 089775A8 + 08977D14 */
{
    if (!prof_have) prof_new();
    u32 all = 1; for (int i = 0; i < 22; i++) if (!stat_get(i)) all = 0;
    memcpy(prof + 0xA4 + 4 * 45, &all, 4);
    for (int k = 0; k < 29; k++) {
        if (prof[0x168 + k]) continue;
        const ak_bp_object *o = medal_obj(k); if (!o) continue;
        u32 need = (u32)ak_bp_int(o, "Test_Number", 0); if (!need || need > stat_get(medal_counter[k])) continue;
        prof[0x168 + k] = 1; medal_trophy(k);
        if (!ak_bp_int(o, "Display_Message", 0)) continue;
        u32 nn = 0, fn = 0; const u16 *nm = ak_hud_stdtext((u32)ak_bp_int(o, "Name", 0), &nn);
        if (!ak_bp_int(o, "DisplayOnScoreBoard", 0)) { ak_hud_message(4, 256, nm, nn); continue; }
        const u16 *f = ak_hud_stdtext(256, &fn); medal_msg_n = 0;          /* 08A32C4C: kept for the game-over dialogue */
        for (u32 i = 0; f && i < fn && medal_msg_n < 95; i++) {
            if (f[i] == '%' && i + 1 < fn && f[i + 1] == 's') { for (u32 j = 0; nm && j < nn && medal_msg_n < 95; j++) medal_msg[medal_msg_n++] = nm[j]; i++; }
            else medal_msg[medal_msg_n++] = f[i];
        }
        var_set("BFF.FE_DisplayMedal", 1);
    }
}
void ak_fe_stat(int i)                                                 /* 089775E0 */
{
    if (i < 0 || i >= NSTATS) return;
    u32 v = stat_get(i) + 1; memcpy(prof + 0xA4 + 4 * i, &v, 4); prof[6] = 1; medals_check();
}
u32 ak_fe_stat_value(int i) { return stat_get(i); }
bool ak_fe_has_profile(void) { return prof_have; }
/* the match's end (08972F90, from 08972EB0): when the player's side won - the campaign's Endor (33), the level (0..21), a win outside
 * the campaign (42) */
void ak_fe_match_won(const char *level, int mode)
{
    static const char *const lv[22] = { "boz_pity", "endor", "geonosis", "hoth", "hoth_ion_cannon", "kashyyyk", "korriban", "mustafar",
        "mygeeto", "naboo", "ord_mantell", "saleucami", "sullust", "tatooine", "yavin_iv", "space_alderaan", "space_coruscant_clone",
        "space_hoth", "space_kashyyyk_civil", "space_kessel", "space_mygeeto", "space_yavin" };
    char nm[48] = ""; size_t k = 0; for (; level && level[k] && k < sizeof nm - 1; k++) nm[k] = (char)tolower((u8)level[k]); nm[k] = 0;
    if (mode == 5 && !strcmp(nm, "endor")) ak_fe_stat(33);
    int idx = -1; for (int i = 0; i < 22; i++) if (!strcmp(nm, lv[i])) idx = i;
    if (!strcmp(nm, "space_kashyyyk_clone")) idx = 18;
    if (idx >= 0) ak_fe_stat(idx);
    if (mode != 5) ak_fe_stat(42);
    {   /* Aurek's change (by request): the date medals (counters 38 Wookie_Life_Hero, 39 Endor_Day_Hero) for a match won on 25 December /
           4 July, local date, offline too - the original's 08973070 asked for an online game and the top score; once each, as its */
        int mon = 0, day = 0; ak_local_date(&mon, &day);
        if (ak_setting_str("AK_TEST_DATE", NULL)) sscanf(ak_setting_str("AK_TEST_DATE", ""), "%d-%d", &mon, &day);   /* (tests: "12-25") */
        if (mon == 12 && day == 25 && !stat_get(38)) ak_fe_stat(38);
        if (mon == 7 && day == 4 && !stat_get(39)) ak_fe_stat(39);
    }
}
void ak_fe_medal_clear(void) { medal_msg_n = 0; var_set("BFF.FE_DisplayMedal", 0); }
static int medal_count(const char *fn) { (void)fn; return 14; }
static bool medal_text(const char *fn, int row, u16 *buf, u32 *n, const u16 **out)
{
    if (strncmp(fn, "FE_MedalsPopulate", 17) || row < 0 || row >= 14) return false;
    const char *w = fn + 17;
    if (!strcmp(w, "NameText")) { *out = ak_gui_text(&texts, medal_name_key[row], n); return true; }
    if (!strcmp(w, "DescriptionText")) { *out = ak_gui_text(&texts, medal_desc_key[row], n); return true; }
    int t = !strcmp(w, "BronzeCost") ? 0 : !strcmp(w, "SilverCost") ? 1 : !strcmp(w, "GoldCost") ? 2 : -1; if (t < 0) return false;
    int k = medal_row[row][t]; const ak_bp_object *o = medal_obj(k); s32 v = o ? ak_bp_int(o, "Test_Number", 0) : 0;
    *n = 0; *out = buf; if (k < 0 || v < 2) return true;
    char tx[16]; snprintf(tx, sizeof tx, "%d", (int)v); for (const char *c = tx; *c; c++) buf[(*n)++] = (u16)(u8)*c;
    return true;
}
static s32 tex_named(const char *part)
{
    for (u32 i = 0; i < gf.ntex; i++) { const char *nm = gf.tex[i].name; if (!nm) continue;
        for (const char *q = nm; *q; q++) { size_t j = 0; while (part[j] && q[j] && tolower((u8)q[j]) == tolower((u8)part[j])) j++; if (!part[j]) return (s32)i; } }
    return -1;
}
static bool medal_picture(const char *fn, int row, f32 *uv)
{
    if (strncmp(fn, "FE_MedalsPopulate", 17) || row < 0 || row >= 14) return false;
    const char *w = fn + 17;
    int t = !strcmp(w, "BronzeImage") ? 0 : !strcmp(w, "SilverImage") ? 1 : !strcmp(w, "GoldImage") ? 2 : -1; if (t < 0) return false;
    int k = medal_row[row][t]; if (!prof_have) prof_new();
    static const f32 corner[4] = { .75f, .75f, 1, 1 };
    if (k < 0) { memcpy(uv, corner, 16); lb_tex = tex_named("Medals_02"); }
    else if (prof[0x168 + k]) { memcpy(uv, medal_cell[row][t], 16); lb_tex = tex_named(medal_cell[row][t][4] == 1 ? "Medals_01" : "Medals_02"); }
    else { memcpy(uv, corner, 16); lb_tex = tex_named("Medals_01"); }
    return true;
}
static const ak_widget *first_control(const ak_widget *w);
/* The personalisation menu (BFF_CUSTOMISATION.GUI; FE_Personalisation_* registered by 08A3646C): MP_Personalisation (the 5
 * categories, W_LB_TypeList) over MP_CustomBackground, with MP_PersonCarousel beside it (opened unfocused: the highlighted
 * category's choices show while browsing).  Everything is kept per faction in the profile (08A3729C: Republic +0x5C0, CIS +0x5CC,
 * Alliance +0x5A8, Empire +0x5B4 - u32 body, u32 head, u8 team colour, u8 uniform colour) but the insignia (+0x5D8, one for all).
 *   categories (08A35808, text keys 0x08AE3E64): 0 body, 1 head, 2 team colour, 3 uniform colour, 4 insignia;
 *     BFF.FE_Personalisation_Category is bound to the list's highlighted row (08A356D4), BFF.FE_Personalisation_ShowCarousel =
 *     category < 2, BFF.FE_Personalisation_ShowPrompt = on the list page or category < 2 (08A36034);
 *   bodies 0..2: the faction's three Humanoids (089784DC's table 0x08C29190, hashes of the names at 0x08ADC680), named by their
 *     BodyName (a STDTEXT id); heads 0..2: the chosen body's Head1Name..Head3Name (08A35BB0);
 *   AcceptCategoryItem (08A359F4): the carousel page focused - its list (bodies, heads) on the chosen row, the colour / insignia
 *     button of the current value (tables 0x08AE3E8C / 0x08AE3ECC / 0x08AE3F0C: value -> button id);
 *   AcceptCarouselItem / AcceptTeamColour / AcceptUniformColour / AcceptInsignia (08A35B00 / 08A3619C / 08A3624C / 08A362FC): the
 *     value stored, the profile marked changed (+6), back to the list;
 *   ConfirmCancel (08A35FE4, the buttons' triangle): MP_PersonCancel; Cancel (08A35F70): the menu closed, to the spawn map in a
 *     match else MP_MCustomisationMenu.  The choices are kept as made (no restore).
 *   the prompt (08A36034): the body's BodyDesc / head's Head1Desc (STDTEXT; the game's Humanoids have none) else the category's
 *     text (0x08AE3E78; the insignia's 5th word is no text key - nothing shown).
 * Not yet: the soldier preview (08A36BA0 builds it in the page's model widget) and the heads' 3D models in the carousel rows. */
static int pers_fac_sel = 2, pers_last_cat = -1; static bool pers_ingame;
static const char *const pers_unit[4][3] = { { "Clonetrooper", "Arc_Trooper", "MECTrooper" }, { "Battle_Droid", "SuperBattleDroid", "SuperMagnaGuard" },
                                             { "RebelTrooperCommando", "MediumRebel", "WookieWarrior" }, { "Biker_Scout", "Stormtrooper", "Darktrooper" } };
static const u32 pers_cat_key[5] = { 0xD45B0D42u, 0xD45DA180u, 0x97C6A209u, 0xCBF6C0E0u, 0xA4D8509Au };
static const u32 pers_prompt_key[5] = { 0x5F3DD6F0u, 0x5F406B2Eu, 0xAA2AF137u, 0x1310FAF2u, 0x08C29348u };
static const u32 pers_team_btn[16] = { 0x76B3B8D3u, 0, 0x758D7CA9u, 0x63040D0Au, 0x52A5CEC4u, 0xC7363B7Bu, 0x3AFEC7BBu, 0x24D963AAu, 0x24D9578Cu,
                                       0x5E1F3D15u, 0x548CB052u, 0x24D30670u, 0x24DB1872u, 0x75D6BBADu, 0x0686A0F7u, 0x7644CE85u };
static const u32 pers_uniform_btn[16] = { 0xDDD38552u, 0, 0xDCAD4928u, 0xBDB91E10u, 0xB3E8214Eu, 0xBA7BDA1Cu, 0xFC4F75F0u, 0x7A50C57Cu, 0xB370D2C2u,
                                          0x388DF024u, 0xDCF6882Cu, 0x07DE15F6u, 0x0797C829u, 0x3847A257u, 0xBCC51293u, 0xDD2A4C2Bu };
static const u32 pers_insignia_btn[10] = { 0x298F535Eu, 0x66DB3FB1u, 0x93D8941Au, 0x49613585u, 0x05454249u, 0xC6A19934u, 0x5768EA73u, 0xD87E003Eu,
                                           0xDC49FE7Fu, 0x21187DFCu };
#define PERS_LIST 0x65008CD9u                                          /* W_LB_TypeList */
#define PERS_CAROUSEL 0x7EA08E83u                                      /* W_LB_Carousel */
static int pers_faction(void)                                          /* 08A28C68: the player's in a match, else the one opened for */
{
    int f = pers_ingame && have_match ? match.faction[match.team & 1] : pers_fac_sel; return f >= 0 && f < 4 ? f : 2;
}
static u8 *pers_rec(void) { static const u32 off[4] = { 0x5C0, 0x5CC, 0x5A8, 0x5B4 }; if (!prof_have) prof_new(); return prof + off[pers_faction()]; }
static int pers_insignia(void)
{
    if (ak_setting_str("AK_PLAYER_INSIGNIA", NULL)) return ak_setting_int("AK_PLAYER_INSIGNIA", 0);   /* (tests) */
    if (!prof_have) prof_new();
    s32 v = (s32)ak_rd32(prof + 0x5D8); return v >= 0 && v < 10 ? v : 0;
}
static int pers_cat(void) { list_rows *L = rows_of(PERS_LIST); return L && L->sel >= 0 && L->sel < 5 ? L->sel : 0; }
static int pers_body_i(void) { s32 v = (s32)ak_rd32(pers_rec()); return v >= 0 && v < 3 ? v : 0; }
/* Aurek's extensions (by request): (1) a head from any of the faction's three bodies - not the CIS (AK_HEAD_SWAP=0: the original's
   three) - the heads category lists nine rows, three per body, and the record's head word keeps 0..2 for the body's own and
   3 + body x 3 + head for another's (ak_soldier.h AK_HEAD_ANY); (2) colours by an HSV picker for every faction, stored where the
   index was: the colour byte (+8 team, +9 uniform) 0x80 | the top 7 bits of a 15-bit RGB, the record's unused byte after them
   (+10 / +11) the low 8 - indices (< 16) read as before */
static bool pers_heads_any(void) { return pers_faction() != AK_FACTION_CIS && ak_setting_int("AK_HEAD_SWAP", 1) != 0; }
static int pers_head_rows(void) { return pers_heads_any() ? 9 : 3; }
static int pers_head_row(void)                                         /* the stored head as a row of the heads list */
{
    s32 h = (s32)ak_rd32(pers_rec() + 4); int b = pers_body_i();
    if (h >= AK_HEAD_ANY && h < AK_HEAD_ANY + 9) return pers_heads_any() ? h - AK_HEAD_ANY : (h - AK_HEAD_ANY) % 3;
    if (h < 0 || h > 2) h = 0;
    return pers_heads_any() ? b * 3 + h : h;
}
static u32 pers_head_store(int row) { if (!pers_heads_any()) return (u32)row; return row / 3 == pers_body_i() ? (u32)(row % 3) : (u32)(AK_HEAD_ANY + row); }
static int pers_colour_code(const u8 *r, int which)                    /* an index 0..15 or AK_RGB_COLOUR | rgb */
{
    u8 b = r[8 + which];
    if (!(b & 0x80)) return b & 15;
    u32 v = ((u32)(b & 0x7F) << 8) | r[10 + which], R = (v >> 10) & 31, G = (v >> 5) & 31, B = v & 31;
    return (int)(AK_RGB_COLOUR | ((R * 255 / 31) << 16) | ((G * 255 / 31) << 8) | (B * 255 / 31));
}
static u32 pers_colour_rgb(const u8 *r, int which)
{
    int c = pers_colour_code(r, which); return (c & AK_RGB_COLOUR) ? (u32)c & 0xFFFFFFu : (which ? ak_personal_colour2 : ak_personal_colour1)[c & 15];
}
static void pers_colour_set(u8 *r, int which, u32 rgb)
{
    u32 v = (((rgb >> 19) & 31) << 10) | (((rgb >> 11) & 31) << 5) | ((rgb >> 3) & 31);
    r[8 + which] = (u8)(0x80 | (v >> 8)); r[10 + which] = (u8)v;
}
static int pers_choice(int cat) { return cat == 1 ? pers_head_row() : pers_body_i(); }
static const ak_bp_object *pers_body(int i) { return fe_bp && i >= 0 && i < 3 ? ak_bp_find(fe_bp, "Humanoid", pers_unit[pers_faction()][i]) : NULL; }
static const u16 *pers_item_name(int cat, int row, const char *suffix, u32 *n)   /* a body's or head's STDTEXT ("Name" / "Desc") */
{
    int hb = pers_head_rows() == 9 ? row / 3 : pers_body_i(), hh = pers_head_rows() == 9 ? row % 3 : row;   /* (nine rows: three per body) */
    char key[16]; const ak_bp_object *o = pers_body(cat == 0 ? row : hb); *n = 0;
    if (cat == 0) snprintf(key, sizeof key, "Body%s", suffix); else snprintf(key, sizeof key, "Head%d%s", hh + 1, suffix);
    s32 id = o ? ak_bp_int(o, key, -1) : -1; return id >= 0 ? ak_hud_stdtext((u32)id, n) : NULL;
}
/* the player's look from the profile for a faction (08A08EF8's join message 0x8027: the body 08978120, its head 0897808C, the colours
   and the insignia): the body's Humanoid, the head 0..2, team colour, uniform colour */
bool ak_fe_personal_look(int faction, const char **body, int *head, int *c1, int *c2)
{
    if (!prof_have || faction < 0 || faction > 3) return false;
    static const u32 off[4] = { 0x5C0, 0x5CC, 0x5A8, 0x5B4 }; const u8 *r = prof + off[faction];
    s32 b = (s32)ak_rd32(r), h = (s32)ak_rd32(r + 4);
    *body = pers_unit[faction][b >= 0 && b < 3 ? b : 0]; *head = h >= 0 && h < AK_HEAD_ANY + 9 && (h < 3 || faction != AK_FACTION_CIS) ? h : 0;
    *c1 = pers_colour_code(r, 0); *c2 = pers_colour_code(r, 1);
    return true;
}
static int pers_count(const char *fn)
{
    if (!strncmp(fn, "FE_Personalisation_ListCategory", 31)) return 5;
    if (!strncmp(fn, "FE_Personalisation_ListCarousel", 31)) return pers_cat() == 0 ? 3 : pers_cat() == 1 ? pers_head_rows() : 0;
    return 0;
}
static bool pers_text(const char *fn, int row, u32 *n, const u16 **out)
{
    if (strncmp(fn, "FE_Personalisation_", 19)) return false;
    if (!strcmp(fn, "FE_Personalisation_ListCategoryNames")) *out = row >= 0 && row < 5 ? ak_gui_text(&texts, pers_cat_key[row], n) : NULL;
    else if (!strcmp(fn, "FE_Personalisation_ListCarouselNames")) *out = pers_cat() < 2 && row >= 0 && row < (pers_cat() ? pers_head_rows() : 3) ? pers_item_name(pers_cat(), row, "Name", n) : NULL;
    else return false;
    return true;
}
static bool pers_picture(const char *fn, int row, f32 *uv)
{
    if (!strcmp(fn, "FE_Personalisation_ListCategoryIcons")) {        /* 08A358CC: personalisation_01.tga, 0.14453125 a row along, 0.137 high */
        uv[0] = (f32)row * 0.14453125f; uv[1] = 0; uv[2] = uv[0] + 0.14453125f; uv[3] = 0.137f; return true;
    }
    if (!strcmp(fn, "FE_Personalisation_ListCarouselAnims")) { memset(uv, 0, 16); return true; }   /* (the heads' 3D models: not drawn yet) */
    return false;
}
static bool in_pers(void) { return nlayer && layer_of("MP_Personalisation") >= 0; }
/* the previews' looks: row -1 the soldier (08A36BA0: the faction's chosen body, head and colours), a carousel row on the heads
   category its head alone (08A35D88: the chosen body's "Head <row+1>" mesh, the camera at Head<n>CameraOffsetX / Y / Z, which stand
   in for the widget's own - most are its 0, 0, -2.6) [assumed: the offsets go where the widget's go; drawn so, the heads come out small and the Rodian's
   +1.2 puts the camera behind it - not checked against the original's frame].  Aurek draws only the bodies
   and heads the level has models for. */
static bool pers_look(int row, ak_fe_look *out, f32 off[3])
{
    if (!in_pers()) return false;
    const u8 *r = pers_rec(); int b = pers_body_i(); const char *bn; int hd, c1, c2;
    ak_fe_personal_look(pers_faction(), &bn, &hd, &c1, &c2);
    out->body = pers_unit[pers_faction()][b]; out->head = hd; out->c1 = c1; out->c2 = c2; out->head_only = false; (void)r;
    if (row < 0) return true;
    if (pers_cat() != 1 || row >= pers_head_rows()) return false;
    int hb = pers_head_rows() == 9 ? row / 3 : b, hh = pers_head_rows() == 9 ? row % 3 : row;   /* (the row's head: its body's mesh alone) */
    out->body = pers_unit[pers_faction()][hb]; out->head = hh; out->head_only = true;
    const ak_bp_object *o = pers_body(hb);
    if (o) { char k[32]; static const char ax[3] = { 'X', 'Y', 'Z' };
        for (int i = 0; i < 3; i++) { snprintf(k, sizeof k, "Head%dCameraOffset%c", hh + 1, ax[i]); off[i] = ak_bp_float(o, k, off[i]); }
        }
    return true;
}
static void pers_sync(void)                                            /* the bound values, the carousel on the chosen row when the category changes */
{
    int cat = pers_cat();
    var_set("BFF.FE_Personalisation_Category", (f32)cat);
    var_set("BFF.FE_Personalisation_ShowCarousel", cat < 2);
    var_set("BFF.FE_Personalisation_ShowPrompt", (page && page->root.name && !strcmp(page->root.name, "MP_Personalisation")) || cat < 2);
    var_set("BFF.FE_Customisation_Insignia", (f32)pers_insignia());
    if (cat != pers_last_cat) {
        pers_last_cat = cat;
        list_rows *C = rows_of(PERS_CAROUSEL);
        if (!C && nlists < 24) { C = &lists[nlists++]; memset(C, 0, sizeof *C); C->id = PERS_CAROUSEL; }
        if (C) { C->n = cat == 0 ? 3 : cat == 1 ? pers_head_rows() : 0; C->sel = cat < 2 ? pers_choice(cat) : 0; C->top = C->sel > 1 ? C->sel - 1 : 0; if (C->top + 3 > C->n) C->top = C->n > 3 ? C->n - 3 : 0; }
        refill();
    }
}
static void pers_back(void)                                            /* (the Accept* functions: the profile changed, back to the list) */
{
    prof[6] = 1; int k = layer_of("MP_Personalisation"); if (k >= 0) use_layer(k);
    pers_last_cat = -1; pers_sync();
}
static void pers_open(void)
{
    nlayer = 0; page = NULL; nstack = 0;
    if (open_hash(ak_gui_hash("MP_CustomBackground"), false)) {
        open_layer(ak_gui_hash("MP_Personalisation"));
        list_rows *L = rows_of(PERS_LIST); if (!L && nlists < 24) { L = &lists[nlists++]; memset(L, 0, sizeof *L); L->id = PERS_LIST; }
        if (L) { L->n = 5; L->sel = 0; L->top = 0; }                    /* [assumed: the list starts on its first row each time] */
        focus_new = false; open_layer(ak_gui_hash("MP_PersonCarousel"));
    }
    pers_last_cat = -1; if (page) pers_sync();
}
static void pers_close(void)                                           /* 08A35F70 / 08A357A0 */
{
    nlayer = 0; page = NULL;
    if (prof_have && prof[6] && ak_setting_int("AK_AUTOSAVE", 1)) ak_fe_profile_save();   /* [assumed: the autosave on - as the campaign's] */
    open_hash(pers_ingame && have_match ? 0xBF679E15u : 0xEDFF6328u, false);   /* MP_Spawn_Location / MP_MCustomisationMenu */
}
/* the menu's own keys: circle off the carousel back to the list, off the exit dialogue back to the menu, off the list the exit
 * dialogue [assumed: the game's circle here not traced; the buttons' triangle is ConfirmCancel]; -1 = not handled here */
static bool pick_event(const ak_input *in, f32 dt);
static int pers_event(const ak_input *in, f32 dt)
{
    pers_sync();
    if (pick_event(in, dt)) return AK_FE_NONE;
    if (!(in->pressed & AK_BTN_CIRCLE) || !page || !page->root.name) return -1;
    if (!strcmp(page->root.name, "MP_PersonCarousel")) { int k = layer_of("MP_Personalisation"); if (k >= 0) use_layer(k); pers_sync(); return AK_FE_NONE; }
    if (!strcmp(page->root.name, "MP_PersonCancel")) { close_layer(); pers_sync(); return AK_FE_NONE; }
    if (!strcmp(page->root.name, "MP_Personalisation")) { open_layer(ak_gui_hash("MP_PersonCancel")); return AK_FE_NONE; }
    return -1;
}
/* The colour picker (Aurek's, by request; the layout and keys as asked for the recompiled build's picker): in the carousel's panel
 * an SV square (saturation across, value down) and a hue slider, a strip of the colour and two buttons, Save and Cancel, drawn
 * for Color 1 / Color 2 whenever that category is highlighted (the swatch buttons are not shown).  Cross on the category opens it:
 * the d-pad / left stick move between the four inputs and cross takes one (the square / slider: the d-pad and stick then move its
 * cursor, circle lets go); Save (or start) keeps the colour, Cancel (or circle with nothing taken) puts the old one back.  The
 * soldier preview follows the colour as it moves. */
static struct { bool on; int which, elem; bool edit; f32 h, s, v; u8 saved[4]; } pick;
static void rgb_to_hsv(u32 rgb, f32 *h, f32 *s, f32 *v)
{
    f32 r = (f32)((rgb >> 16) & 255) / 255.0f, g = (f32)((rgb >> 8) & 255) / 255.0f, b = (f32)(rgb & 255) / 255.0f;
    f32 mx = fmaxf(r, fmaxf(g, b)), mn = fminf(r, fminf(g, b)), d = mx - mn;
    *v = mx; *s = mx > 0 ? d / mx : 0;
    if (d <= 0) { *h = 0; return; }
    f32 hh = mx == r ? (g - b) / d : mx == g ? 2.0f + (b - r) / d : 4.0f + (r - g) / d;
    hh /= 6.0f; if (hh < 0) hh += 1.0f; *h = hh;
}
static u32 hsv_to_rgb(f32 h, f32 s, f32 v)
{
    h = h - floorf(h); f32 f = h * 6.0f; int i = (int)f; f -= (f32)i;
    f32 p = v * (1 - s), q = v * (1 - s * f), t = v * (1 - s * (1 - f)), r, g, b;
    switch (i % 6) { case 0: r = v; g = t; b = p; break; case 1: r = q; g = v; b = p; break; case 2: r = p; g = v; b = t; break;
                     case 3: r = p; g = q; b = v; break; case 4: r = t; g = p; b = v; break; default: r = v; g = p; b = q; }
    return ((u32)(r * 255.0f + 0.5f) << 16) | ((u32)(g * 255.0f + 0.5f) << 8) | (u32)(b * 255.0f + 0.5f);
}
static bool pers_hide(const ak_widget *w)
{
    if (!w->name || !in_pers()) return false;
    return !strncmp(w->name, "W_CP_", 5) || !strcmp(w->name, "W_BU_TeamColourPrompt") || !strncmp(w->name, "W_BU_UniformColourPrompt", 24);
}
static void pick_open(int which)
{
    u8 *r = pers_rec(); memset(&pick, 0, sizeof pick); pick.on = true; pick.which = which; memcpy(pick.saved, r + 8, 4);
    rgb_to_hsv(pers_colour_rgb(r, which), &pick.h, &pick.s, &pick.v);
}
static void pick_apply(void) { pers_colour_set(pers_rec(), pick.which, hsv_to_rgb(pick.h, pick.s, pick.v)); }
static void pick_close(bool keep)
{
    if (!keep) memcpy(pers_rec() + 8, pick.saved, 4); else { pick_apply(); prof[6] = 1; }
    pick.on = false; pers_last_cat = -1; pers_sync();
}
static f32 clamp01(f32 x) { return x < 0 ? 0 : x > 1 ? 1 : x; }
static bool pick_event(const ak_input *in, f32 dt)
{
    if (!pick.on) return false;
    u32 P = in->pressed;
    if (P & AK_BTN_START) { pick_close(true); return true; }
    if (pick.edit) {
        if (P & (AK_BTN_CIRCLE | AK_BTN_CROSS)) { pick.edit = false; return true; }
        f32 sx = fabsf(in->lx) > 0.2f ? in->lx : 0, sy = fabsf(in->ly) > 0.2f ? in->ly : 0;   /* (the stick, past a dead zone) */
        if (pick.elem == 0) {
            pick.s += sx * dt * 0.8f; pick.v += sy * dt * 0.8f;           /* (the stick: +y up) */
            if (P & AK_BTN_LEFT) pick.s -= 1.0f / 31; if (P & AK_BTN_RIGHT) pick.s += 1.0f / 31;
            if (P & AK_BTN_UP) pick.v += 1.0f / 31; if (P & AK_BTN_DOWN) pick.v -= 1.0f / 31;
        } else {
            pick.h -= sy * dt * 0.4f;
            if (P & AK_BTN_UP) pick.h -= 1.0f / 48; if (P & AK_BTN_DOWN) pick.h += 1.0f / 48;
            pick.h = clamp01(pick.h);
        }
        pick.s = clamp01(pick.s); pick.v = clamp01(pick.v); pick_apply();
        return true;
    }
    static f32 stick_t; bool sl = in->lx < -0.6f, sr = in->lx > 0.6f, su = in->ly > 0.6f, sd = in->ly < -0.6f;   /* (the stick moves one step a 0.25 s) */
    if (!(sl || sr || su || sd)) stick_t = 0; else if ((stick_t -= dt) > 0) sl = sr = su = sd = false; else stick_t = 0.25f;
    bool L = (P & AK_BTN_LEFT) || sl, R = (P & AK_BTN_RIGHT) || sr, U = (P & AK_BTN_UP) || su, D = (P & AK_BTN_DOWN) || sd;
    if (pick.elem == 0 && R) pick.elem = 1; else if (pick.elem == 1 && L) pick.elem = 0;
    else if (pick.elem <= 1 && D) pick.elem = 2; else if (pick.elem == 2 && D) pick.elem = 3;
    else if (pick.elem == 2 && U) pick.elem = 0; else if (pick.elem == 3 && U) pick.elem = 2;
    if (P & AK_BTN_CROSS) { if (pick.elem <= 1) pick.edit = true; else pick_close(pick.elem == 2); }
    else if (P & AK_BTN_CIRCLE) pick_close(false);
    return true;
}
static ak_gfx_tex *white_tex(void)
{
    static ak_gfx_tex *t; static ak_texture w; static u8 px[16];
    if (!t) { memset(&w, 0, sizeof w); w.width = w.height = 4; w.bpp = 8; w.levels = 1; w.pixels[0] = px; w.palette[0] = 0xFFFFFFFFu; t = ak_gfx_texture(&w); }
    return t;
}
static void frame_rect(ak_gfx_tex *t, f32 x0, f32 y0, f32 x1, f32 y1, f32 k, u32 c)
{
    ak_hud_2d_quad(t, x0 - k, y0 - k, x1 + k, y0, 0, 0, 1, 1, c); ak_hud_2d_quad(t, x0 - k, y1, x1 + k, y1 + k, 0, 0, 1, 1, c);
    ak_hud_2d_quad(t, x0 - k, y0, x0, y1, 0, 0, 1, 1, c); ak_hud_2d_quad(t, x1, y0, x1 + k, y1, 0, 0, 1, 1, c);
}
static void pers_picker_draw(void)
{
    if (!in_pers() || layer_of("MP_PersonCancel") >= 0) return;
    int cat = pers_cat(); if (!pick.on && cat != 2 && cat != 3) return;
    ak_gfx_tex *t = white_tex(); if (!t) return;
    f32 h, sat, val;
    if (pick.on) { h = pick.h; sat = pick.s; val = pick.v; } else rgb_to_hsv(pers_colour_rgb(pers_rec(), cat - 2), &h, &sat, &val);
    const f32 X0 = 160, Y0 = 32, W = 100, HS = 100, SX = 268, SW = 16;   /* (inside W_LB_Carousel's 141 x 201 at 152, 21) */
    const int N = 20;
    for (int j = 0; j < N; j++) for (int i = 0; i < N; i++) {           /* the SV square */
        u32 c = hsv_to_rgb(h, (i + 0.5f) / N, 1.0f - (j + 0.5f) / N);
        ak_hud_2d_quad(t, X0 + W * i / N, Y0 + HS * j / N, X0 + W * (i + 1) / N, Y0 + HS * (j + 1) / N, 0, 0, 1, 1, 0xFF000000u | c);
    }
    for (int j = 0; j < 30; j++)                                        /* the hue slider */
        ak_hud_2d_quad(t, SX, Y0 + HS * j / 30, SX + SW, Y0 + HS * (j + 1) / 30, 0, 0, 1, 1, 0xFF000000u | hsv_to_rgb((j + 0.5f) / 30, 1, 1));
    f32 cx = X0 + W * sat, cy = Y0 + HS * (1 - val), hy = Y0 + HS * h;
    frame_rect(t, cx - 3, cy - 3, cx + 3, cy + 3, 1, 0xFFFFFFFFu); frame_rect(t, cx - 4, cy - 4, cx + 4, cy + 4, 1, 0xFF000000u);
    ak_hud_2d_quad(t, SX - 3, hy - 1, SX + SW + 3, hy + 1, 0, 0, 1, 1, 0xFFFFFFFFu);
    u32 cur = hsv_to_rgb(h, sat, val);
    ak_hud_2d_quad(t, X0, Y0 + HS + 8, SX + SW, Y0 + HS + 20, 0, 0, 1, 1, 0xFF000000u | cur);   /* the colour */
    frame_rect(t, X0, Y0 + HS + 8, SX + SW, Y0 + HS + 20, 1, 0xFF808080u);
    static const char *const lab[2] = { "Save", "Cancel" };
    for (int b = 0; b < 2; b++) {                                       /* the buttons: as the list's rows (the highlight, white / grey text) */
        f32 by = Y0 + HS + 28 + b * 26; bool f = pick.on && pick.elem == 2 + b;
        if (f) { const ak_widget *hl = NULL; int k = layer_of("MP_Personalisation"); if (k >= 0) hl = find_name(&layer[k]->root, "E_IM_Hilight");
            if (hl && hl->tex >= 0 && (u32)hl->tex < gf.ntex && gtex[hl->tex]) ak_hud_2d_quad(gtex[hl->tex], X0 - 4, by, SX + SW + 4, by + 22, hl->uv[0], hl->uv[1], hl->uv[2], hl->uv[3], 0xFFFFFFFFu);
            else frame_rect(t, X0, by, SX + SW, by + 22, 1, 0xFFFFFFFFu); }
        u16 tx[8]; u32 n = 0; for (const char *c = lab[b]; *c; c++) tx[n++] = (u16)(u8)*c;
        ak_hud_2d_text(1, X0, by + 3, SX + SW, 1.0f, f ? 0xFFFFFFFFu : 0xFF808080u, tx, n, 1);
    }
    if (pick.on && pick.elem <= 1) {                                    /* the input in use: white, taken yellow */
        u32 c = pick.edit ? 0xFFFFD040u : 0xFFFFFFFFu;
        if (pick.elem == 0) frame_rect(t, X0, Y0, X0 + W, Y0 + HS, 2, c); else frame_rect(t, SX, Y0, SX + SW, Y0 + HS, 2, c);
    }
}
static int run(const ak_gui_action *a, int row)
{
    if (!a->fn || !a->fn[0]) return AK_FE_NONE;
    const char *fn = a->fn;
    AK_INFO("fe", "call %s(%s) row %d", fn, a->arg, row);
    const u32 PLANETS = 0xCEB65B46u, MODES = 0x90F029D1u, ERAS = 0x49AC44E2u;   /* W_LB_PlanetList, W_LB_ModeList, W_LB_EraList */
    if (!strcmp(fn, "FE_SelectMapPlanet")) { if (row >= 0 && row < NMAPS) { sel_map = row; status(1); open_widget(MODES); } }
    else if (!strcmp(fn, "FE_DeselectMapPlanet")) { status(0); open_widget(PLANETS); }
    else if (!strcmp(fn, "FE_SelectMapMode")) { sel_mode = row; status(2); open_widget(ERAS); }
    else if (!strcmp(fn, "FE_DeselectMapMode")) { status(1); open_widget(MODES); }
    else if (!strcmp(fn, "FE_DeselectMap")) { status(0); open_widget(PLANETS); }
    else if (!strcmp(fn, "FE_AddMap")) {
        if (sel_map >= 0 && sel_mode >= 0 && nrot < 16) { rot[nrot].map = sel_map; rot[nrot].mode = sel_mode; rot[nrot].era = row; nrot++; rotation_changed(); }
        status(0); open_widget(PLANETS);
    }
    else if (!strcmp(fn, "FE_RemoveMap")) { if (row >= 0 && row < nrot) { memmove(&rot[row], &rot[row + 1], (size_t)(nrot - row - 1) * sizeof rot[0]); nrot--; rotation_changed(); } }
    else if (!strcmp(fn, "FE_RemoveAllMaps") || !strcmp(fn, "FE_ClearMapRotation")) { nrot = 0; rotation_changed(); status(0); }
    else if (!strcmp(fn, "FE_SelectRandomMaps")) {                    /* (n maps, ground ones, each with a mode and an era it has) [assumed: the pick's rules] */
        int n = atoi(a->arg); static u32 seed = 0x2545F491u; nrot = 0;
        for (int i = 0; i < n && nrot < 16; i++) {
            seed = seed * 1664525u + 1013904223u; int m = (int)((seed >> 8) % 15);
            int era = maps[m].gcw ? 0 : 1; if (maps[m].gcw && maps[m].cw && (seed & 1)) era = 1;
            rot[nrot].map = m; rot[nrot].mode = 0; rot[nrot].era = era; nrot++;
        }
        rotation_changed();
    }
    else if (!strcmp(fn, "FE_OpenCustomisationMenu")) {               /* 08A2F540: the menu over its background; back to this page after */
        u32 ret = page ? page->root.id : 0; cust_open(); cust_return = ret; return AK_FE_NONE;
    }
    else if (!strcmp(fn, "FE_Customisation_AcceptCategoryItem")) {   /* 08A27EC4: the category's items, over the menu */
        if (row >= 0 && row < NCAT) { cust_cat = row; cust_carousel_sync(); int k = layer_of("MP_CustomCarousel"); if (k >= 0) { use_layer(k); focus = find_named(&page->root, "W_LB_Carousel") ? find_named(&page->root, "W_LB_Carousel")->id : focus; } }
    }
    else if (!strcmp(fn, "FE_Customisation_AcceptCarouselItem")) {   /* 08A27F28: the item taken (no credit check), back to the menu */
        if (row >= 0 && row < cust_count[cust_cat]) cust_sel[cust_cat] = row;
        use_layer(layer_of("MP_Customisation"));
    }
    else if (!strcmp(fn, "FE_Customisation_SellCarouselItem")) {     /* 08A27FD8: the category cleared (item 0) */
        if (cust_sel[cust_cat] > 0 && cust_cost(cust_cat, cust_sel[cust_cat]) > 0) { cust_sel[cust_cat] = 0; cust_carousel_sync(); use_layer(layer_of("MP_Customisation")); }
    }
    else if (!strcmp(fn, "FE_Customisation_ConfirmCancel")) open_layer(ak_gui_hash("MP_CustomCancel"));   /* 08A27E74 */
    else if (!strcmp(fn, "FE_Customisation_Cancel")) {                 /* 08A27DE0: the loadout as it was, the menu closed */
        memcpy(cust_sel, cust_saved, sizeof cust_sel); nlayer = 0; page = NULL;
        if (cust_return) open_hash(cust_return, false);
        cust_vars(); return AK_FE_NONE;
    }
    else if (!strcmp(fn, "FE_OpenPersonalisationMenu")) {             /* 08A2F5A4: the faction (-1: the player's in a match), over the background */
        int f = atoi(a->arg); pers_ingame = f == -1; if (f >= 0 && f < 4) pers_fac_sel = f; pers_open(); return AK_FE_NONE;
    }
    else if (!strcmp(fn, "FE_Personalisation_AcceptCategoryItem")) {  /* 08A359F4 */
        int k = layer_of("MP_PersonCarousel");
        if (row >= 0 && row < 5 && k >= 0) {
            u8 *r = pers_rec(); u32 to = PERS_CAROUSEL;
            if (row == 2 || row == 3) { pick_open(row - 2); return AK_FE_NONE; }   /* (Aurek: the HSV picker, by request) */
            if (row == 4) to = pers_insignia_btn[pers_insignia()];
            use_layer(k); if (to && find_id(&page->root, to)) focus = to; else { const ak_widget *c = first_control(&page->root); if (c) focus = c->id; }
        }
    }
    else if (!strcmp(fn, "FE_Personalisation_AcceptCarouselItem")) {  /* 08A35B00: the body or the head */
        int cat = pers_cat(); if (cat == 0 && row >= 0 && row < 3) { u32 v = (u32)row; memcpy(pers_rec(), &v, 4); }
        if (cat == 1 && row >= 0 && row < pers_head_rows()) { u32 v = pers_head_store(row); memcpy(pers_rec() + 4, &v, 4); }
        pers_back(); }
    else if (!strcmp(fn, "FE_Personalisation_AcceptTeamColour")) { pers_rec()[8] = (u8)atoi(a->arg); pers_back(); }   /* 08A3619C */
    else if (!strcmp(fn, "FE_Personalisation_AcceptUniformColour")) { pers_rec()[9] = (u8)atoi(a->arg); pers_back(); }   /* 08A3624C */
    else if (!strcmp(fn, "FE_Personalisation_AcceptInsignia")) {       /* 08A362FC: one for every faction */
        u32 v = (u32)atoi(a->arg); if (!prof_have) prof_new(); memcpy(prof + 0x5D8, &v, 4); pers_back(); }
    else if (!strcmp(fn, "FE_Personalisation_ConfirmCancel")) open_layer(ak_gui_hash("MP_PersonCancel"));   /* 08A35FE4 */
    else if (!strcmp(fn, "FE_Personalisation_Cancel")) { pers_close(); return AK_FE_NONE; }   /* 08A35F70 */
    else if (!strcmp(fn, "FE_RespawnOrTeamSelect")) {}
    else if (!strcmp(fn, "FE_ProcessGameover")) {                       /* Retry: the same map again; Continue: the play list's next, else the main menu */
        const ak_widget *f = focus ? find_id(&page->root, focus) : NULL;
        if (f && f->name && strstr(f->name, "Retry")) { ak_fe_close(); return AK_FE_RESTART; }
        if (nrot > 1) {                                                 /* (the rotation moves on) */
            memmove(&rot[0], &rot[1], (size_t)(nrot - 1) * sizeof rot[0]); nrot--; rotation_changed();
            run(&(ak_gui_action){ "FE_HostGame", "", 16 }, -1); ak_fe_close(); return AK_FE_START;
        }
        ak_fe_close(); return AK_FE_QUIT;
    }
    else if (!strcmp(fn, "FE_EnterGameover")) {}                 /* (the button's page follows: the spawn map) */
    else if (!strcmp(fn, "FE_SetProfileName")) {                       /* 08A2EA04 -> 089783BC: the name typed in (08A2E9A0's buffer, 0x20
                                                                         characters) - Aurek has no on-screen keyboard: AK_PLAYER_NAME is the
                                                                         typed name [assumed] */
        const char *nm = ak_setting_str("AK_PLAYER_NAME", NULL);
        if (nm) { if (!prof_have) prof_new(); memset(prof + PROF_NAME, 0, 42); for (u32 i = 0; nm[i] && i < 20; i++) { u16 c = (u8)nm[i]; memcpy(prof + PROF_NAME + 2 * i, &c, 2); } prof[6] = 1; } }
    else if (!strcmp(fn, "FE_OpenProfileMenu")) open_hash(0x5B53EB0Du, true);   /* 08A2E8B4: the profile page */
    else if (!strcmp(fn, "FE_ExitAutoSaveMenu") || !strcmp(fn, "FE_ForceProfileChangeState") || !strcmp(fn, "FE_ProfileNameOnInit")) {}   /* (flags of the game's save state: 08A2F624 / 08A2EB50 / 08A2E9A0) */
    else if (!strcmp(fn, "FE_SavePlayerProfile")) ak_fe_profile_save();   /* 08A2EA54 -> 08A62208: the profile to its save (above) */
    else if (!strcmp(fn, "FE_LoadPlayerProfile")) ak_fe_profile_load();   /* 08A2EAC8 -> 08A62274 */
    else if (!strcmp(fn, "FE_DeletePlayerProfile")) { char pp[512]; prof_path(pp, sizeof pp); remove(pp); prof_have = false; }
    else if (!strcmp(fn, "FE_RequestMenuMode")) var_set("BFF.FE_MenuMode", atoi(a->arg));   /* (which of a dialogue's answers show) */
    else if (!strcmp(fn, "FE_ResumePlay")) { ak_fe_close(); return AK_FE_RESUME; }
    else if (!strcmp(fn, "FE_StartGalacticConquest") || !strcmp(fn, "FE_CheckConquestState")) {
        /* 08A2EE38: 08A3C574(new) sets the conquest up (1 new, 0 the saved one), then the GC mode (08A27544(6)); FE_CheckConquestState
           (New) asks before replacing a saved conquest [assumed: Aurek has no saved conquest yet - New starts one] */
        gc_new_req = !strcmp(fn, "FE_CheckConquestState") ? 1 : atoi(a->arg); var_set("BFF.HasGalacticConquestBeenPlayed", 1); ak_fe_close(); return AK_FE_GC_START; }
    else if (!strcmp(fn, "FE_StartCampaign") || !strcmp(fn, "FE_CheckCampaignState")) {
        /* 08A2ECB8: arg 1 (New) starts at level 0 (0x08C29918 = 0), else at the profile's level; the first level of the list
           0x08B1C060 (yavin_IV, space_alderaan, ord_mantell, space_kessel, tatooine, boz_pity, hoth_ion_cannon, space_hoth,
           korriban, sullust, endor) from there whose file is found, in mode 5 (08978CB4(5)).  FE_CheckCampaignState (New) asks
           before replacing a saved campaign [assumed: no campaign progress kept yet - it starts one] */
        cmpn_level = !strcmp(fn, "FE_CheckCampaignState") || atoi(a->arg) ? 0 : (int)var_get("BFF.ProfileCampaignLevel");
        ak_fe_close(); return AK_FE_CMPN_START; }
    else if (!strcmp(fn, "GC_SetQuitMenuState")) var_set("Menus.GCQuitMenuState", (f32)atoi(a->arg));   /* 08A3BAAC (0x08B1C304): which confirm */
    else if (!strcmp(fn, "GC_SetQuitMenuRequest")) { gc_quit_req = atoi(a->arg); ak_fe_close(); return AK_FE_GC_QUIT; }   /* 08A3BAF4 (0x08B1C300), read by 08A382B0 */
    else if (!strncmp(fn, "GC_Purchase", 11)) {                       /* 08A3B738's GC_Purchase*: the choice for the GC code (0x08C2D8CC = 1) */
        gc_kind = strstr(fn, "Equipment") ? 0 : strstr(fn, "Infantry") ? 1 : strstr(fn, "Space") ? 2 : strstr(fn, "Commander") ? 3 : -1;
        gc_index = atoi(a->arg); if (gc_kind >= 0) return AK_FE_GC_BUY; }
    else if (!strcmp(fn, "FE_QuitGame") || !strcmp(fn, "FE_ForfeitBattle")) { ak_fe_close(); return AK_FE_QUIT; }
    else if (!strcmp(fn, "FE_RestartMap")) { ak_fe_close(); return AK_FE_RESTART; }
    else if (!strcmp(fn, "FE_RespawnKillPlayer")) { ak_fe_close(); return AK_FE_KILL; }
    else if (!strcmp(fn, "FE_TeamSelection")) { team_choice = atoi(a->arg); open_hash(ak_gui_hash("MP_Spawn_Location"), true); return AK_FE_TEAM; }
    else if (!strcmp(fn, "FE_RequestRespawn")) {                       /* the focused spawn point (W_BU_SpawnPoint<k>) */
        const ak_widget *f = focus ? find_id(&page->root, focus) : NULL; spawn_choice = -1;
        if (f && f->name && !strncmp(f->name, "W_BU_SpawnPoint", 15)) spawn_choice = atoi(f->name + 15);
        return spawn_choice >= 0 ? AK_FE_SPAWN : AK_FE_NONE;
    }
    else if (!strcmp(fn, "FE_HostGame")) {
        if (!nrot) return AK_FE_NONE;
        const map_entry *e = &maps[rot[0].map]; const char *lv = rot[0].era ? e->cw : e->gcw;
        snprintf(launch_level, sizeof launch_level, "%s ", rot[0].era ? "PREQUEL" : "CLASSIC");
        for (size_t i = 0, o = strlen(launch_level); lv && lv[i] && o + 1 < sizeof launch_level; i++, o++) { char c = lv[i]; launch_level[o] = (char)(c >= 'a' && c <= 'z' ? c - 32 : c); launch_level[o + 1] = 0; }
        launch_mode = rot[0].mode;
        return AK_FE_START;
    }
    if (in_cust()) cust_vars();
    refill();
    return AK_FE_NONE;
}
const char *ak_fe_launch(int *mode) { if (mode) *mode = launch_mode; return launch_level; }
static int activate(const ak_widget *b)
{
    int r = AK_FE_NONE;
    for (u32 i = 0; i < b->nactions; i++) if (b->actions[i].key == 16 || !b->actions[i].key) { int k = run(&b->actions[i], -1); if (k) r = k; if (!page) return r; }
    if (r) return r;
    if (b->target) open_hash(b->target, true);
    return AK_FE_NONE;
}

static const ak_widget *first_control(const ak_widget *w)
{
    if (w->type != AK_GUI_PAGE && !cond_holds(w)) return NULL;
    if (w->type == AK_GUI_BUTTON && (w->nactions || w->target)) return w;
    for (u32 i = 0; i < w->nchild; i++) { const ak_widget *r = first_control(&w->child[i]); if (r) return r; }
    return NULL;
}
static const ak_widget *find_visible(const ak_widget *w, u32 id)
{
    if (w->type != AK_GUI_PAGE && !cond_holds(w)) return NULL;
    if (w->id == id) return w;
    for (u32 i = 0; i < w->nchild; i++) { const ak_widget *r = find_visible(&w->child[i], id); if (r) return r; }
    return NULL;
}
static void cust_open(void)
{
    if (open_hash(ak_gui_hash("MP_CustomBackground"), false)) {       /* (08A276F0: the background and the carousel open without the focus) */
        open_layer(ak_gui_hash("MP_Customisation")); focus_new = false; open_layer(ak_gui_hash("MP_CustomCarousel")); cust_carousel_sync(); }
    memcpy(cust_saved, cust_sel, sizeof cust_sel); cust_cat = 0; cust_vars();   /* (08A276F0: OnInitMenu keeps the loadout to go back to) */
    refill();
}
/* the customisation menu on its own, from the match (d-pad up at an own command post); closed, play goes on */
bool ak_fe_open_customisation(void) { nlayer = 0; page = NULL; cust_open(); cust_return = 0; return page != NULL; }
/* the customisation menu's circle: off the carousel or a dialogue back to the menu; off the menu itself out of it - over the credits
 * the OVERSPENT page instead (W_BU_Back_OverSpent, shown while BFF.FE_Customisation_Credits < 0); -1 = not handled here */
static int cust_event(const ak_input *in)
{
    if (!(in->pressed & AK_BTN_CIRCLE)) return -1;
    if (!strcmp(page->root.name, "MP_CustomCarousel")) { cust_carousel_sync(); use_layer(layer_of("MP_Customisation")); cust_vars(); refill(); return AK_FE_NONE; }
    if (strcmp(page->root.name, "MP_Customisation")) { close_layer(); cust_vars(); refill(); return AK_FE_NONE; }
    if (cust_spent() > CUST_CREDITS) { open_layer(ak_gui_hash("MP_CustomOverSpent")); return AK_FE_NONE; }
    nlayer = 0; page = NULL;
    if (cust_return) open_hash(cust_return, false);
    return AK_FE_LOADOUT;
}
int ak_fe_update(const ak_input *in, f32 dt)
{
    if (!page) return AK_FE_NONE;
    fe_clock += dt; clock_total += dt;
    if (focus_fix_pending) {                                           /* the page's focus hidden or a title: its first shown control */
        focus_fix_pending = false;
        const ak_widget *f0 = focus ? find_visible(&page->root, focus) : NULL;
        if (!f0 || (f0->type == AK_GUI_BUTTON && !f0->nactions && !f0->target)) { const ak_widget *c = first_control(&page->root); if (c) focus = c->id; }
    }
    {   /* a page's W_BU_AutoClick* button runs at once while its conditions hold (MP_GalacticConquest's
           W_BU_AutoClickWhenNoSavedConquest: no conquest played - a new one) [assumed: by its name; not traced] */
        static const ak_gui_page *auto_done;
        if (auto_done != page) { auto_done = page; const ak_widget *ac = find_named(&page->root, "W_BU_AutoClick");
            if (ac && cond_holds(ac) && ac->nactions) { int e = run(&ac->actions[0], -1); if (e) return e; if (!page) return AK_FE_NONE; } }
    }
    var_set("GUIMenu.ActiveWidget", (s32)focus); active_widget = focus;
    if (in_cust()) { int e = cust_event(in); if (e >= 0) return e; }
    if (in_pers()) { int e = pers_event(in, dt); if (e >= 0) return e; }
    const ak_widget *f = focus ? find_id(&page->root, focus) : NULL;
    /* the buttons' keys (the game's: 16 cross, 32 square, 64 triangle - the spawn map's "\ue801 Customization Menu" runs on
       square, "\ue803 Personalization Menu" on triangle) */
    static const u32 keys[3][2] = { { AK_BTN_CROSS, 16 }, { AK_BTN_SQUARE, 32 }, { AK_BTN_TRIANGLE, 64 } };
    if (f && (f->type == AK_GUI_LIST || f->type == AK_GUI_LIST2)) {  /* a list box: up / down through its rows, its keys */
        list_rows *L = rows_of(f->id); int shown = f->rows_shown ? (int)f->rows_shown : 8;
        if (L) {
            L->n = lb_count(f);
            int was = L->sel;
            if ((in->pressed & AK_BTN_UP) && L->sel > 0) L->sel--;
            if ((in->pressed & AK_BTN_DOWN) && L->sel + 1 < L->n) L->sel++;
            if (L->sel < L->top) L->top = L->sel;
            if (L->sel >= L->top + shown) L->top = L->sel - shown + 1;
            if (L->sel != was) { if (f->name && !strcmp(f->name, "W_LB_TypeList") && in_cust()) cust_cat = L->sel; if (in_cust()) cust_vars(); refill(); return AK_FE_NONE; }
        }
        for (int k = 0; k < 3; k++) if (in->pressed & keys[k][0])
            for (u32 i = 0; i < f->nactions; i++) if (f->actions[i].key == keys[k][1]) return run(&f->actions[i], L && L->n ? L->sel : -1);
    }
    if (f && f->type == AK_GUI_TEXTLIST) {                            /* a text list: up / down through its rows, its keys */
        list_rows *L = rows_of(f->id); int shown = f->rows_shown ? (int)f->rows_shown : 8;
        if (L && (in->pressed & AK_BTN_UP) && L->sel > 0) { L->sel--; if (L->sel < L->top) L->top = L->sel; return AK_FE_NONE; }
        if (L && (in->pressed & AK_BTN_DOWN) && L->sel + 1 < L->n) { L->sel++; if (L->sel >= L->top + shown) L->top = L->sel - shown + 1; return AK_FE_NONE; }
        for (int k = 0; k < 3; k++) if (in->pressed & keys[k][0])
            for (u32 i = 0; i < f->nactions; i++) if (f->actions[i].key == keys[k][1]) {
                int row = L && L->n ? L->val[L->sel] : -1;
                if (keys[k][1] == 16 && (!L || !L->n)) return AK_FE_NONE;
                return run(&f->actions[i], row);
            }
    }
    if (have_match && focused_spawn() >= 0) {                          /* the spawn map: the nearest active post that way [assumed] */
        static const f32 dv[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } }; static const u32 bt[4] = { AK_BTN_LEFT, AK_BTN_RIGHT, AK_BTN_UP, AK_BTN_DOWN };
        int cur = focused_spawn(); f32 cx, cy;
        if (ak_hud_2d_map_point(match.post_pos[cur], 0, 0, 200, &cx, &cy))
            for (int d = 0; d < 4; d++) if (in->pressed & bt[d]) {
                int best = -1; f32 bd = 1e9f;
                for (u32 k = 0; k < match.nposts; k++) {
                    f32 kx, ky; if ((int)k == cur || match.post_owner[k] != match.team || !ak_hud_2d_map_point(match.post_pos[k], 0, 0, 200, &kx, &ky)) continue;
                    f32 ax = kx - cx, ay = ky - cy, along = ax * dv[d][0] + ay * dv[d][1]; if (along <= 0) continue;
                    f32 sc = along + 2.0f * fabsf(ax * dv[d][1] - ay * dv[d][0]); if (sc < bd) { bd = sc; best = (int)k; }
                }
                if (best >= 0) { char nm[32]; snprintf(nm, sizeof nm, "W_BU_SpawnPoint%d", best); if (id_of(nm)) focus = id_of(nm); }
                return AK_FE_NONE;
            }
    }
    if (f && f->type == AK_GUI_SPINNER && f->binding && f->binding[0] && (in->pressed & (AK_BTN_LEFT | AK_BTN_RIGHT))) {   /* a slider: its value by its step, 0..1 [assumed range] */
        f32 st = f->step > 0 ? f->step : 0.1f, v = var_get(f->binding) + ((in->pressed & AK_BTN_RIGHT) ? st : -st);
        var_set(f->binding, v < 0 ? 0 : v > 1 ? 1 : v);
        ak_audio_set_volumes(var_get("BFF.VolumeMaster"), var_get("BFF.VolumeMusic"), var_get("BFF.VolumeSFX"));   /* (applied at once) */
        return AK_FE_NONE;
    }
    if (f && f->type == AK_GUI_BUTTON2 && f->binding && f->binding[0] && (in->pressed & AK_BTN_CROSS)) {   /* a check box */
        var_set(f->binding, var_get(f->binding) != 0 ? 0 : 1);
        if (!strcmp(f->binding, "BFF.Subtitles")) ak_setting_set("AK_SUBTITLES", var_get(f->binding) != 0 ? "1" : "0");   /* (the narrator's subtitles) */
        if (!strcmp(f->binding, "BFF.InfantryControlInvertYAxis")) ak_setting_set("AK_INVERT_Y", var_get(f->binding) != 0 ? "1" : "0");   /* (the soldier's look; the next match) */
        if (!strcmp(f->binding, "BFF.VehicleControlInvertYAxis")) ak_setting_set("AK_INVERT_Y_VEHICLE", var_get(f->binding) != 0 ? "1" : "0");
        if (!strcmp(f->binding, "BFF.SpacecraftControlInvertYAxis")) ak_setting_set("AK_INVERT_Y_SPACE", var_get(f->binding) != 0 ? "1" : "0");
        return AK_FE_NONE;
    }
    static const u32 dirs[4] = { AK_BTN_LEFT, AK_BTN_RIGHT, AK_BTN_UP, AK_BTN_DOWN };
    for (int k = 0; k < 4; k++)                                        /* the neighbour links: left, right, up, down */
        if ((in->pressed & dirs[k]) && f && f->links[k]) {          /* (a hidden neighbour: on along its own link the same way) */
            u32 to = f->links[k];
            for (int hop = 0; hop < 8 && to; hop++) {
                if (find_visible(&page->root, to)) { focus = to; fe_clock = 0; return AK_FE_NONE; }
                const ak_widget *n = find_id(&page->root, to); to = n ? n->links[k] : 0;
            }
        }
    if ((in->pressed & AK_BTN_CROSS) && getenv("AK_FE_TRACE")) AK_INFO("fe", "cross on %s (%u actions)", f && f->name ? f->name : "-", f ? f->nactions : 0);
    if ((in->pressed & AK_BTN_CROSS) && f && is_button(f->type) && f->type != AK_GUI_TEXTLIST) return activate(f);
    for (int k = 1; k < 3; k++)                                        /* square, triangle: a button's own action for them */
        if ((in->pressed & keys[k][0]) && f && is_button(f->type))
            for (u32 i = 0; i < f->nactions; i++) if (f->actions[i].key == keys[k][1]) return run(&f->actions[i], -1);
    if (in->pressed & AK_BTN_CIRCLE) {                                 /* back: the page's back button, else the page before */
        const ak_widget *b = find_named(&page->root, "W_BU_Back");
        if (b && b->target) { open_hash(b->target, false); return AK_FE_NONE; }
        if (nstack) { open_hash(stack[--nstack], false); return AK_FE_NONE; }
    }
    return AK_FE_NONE;
}
