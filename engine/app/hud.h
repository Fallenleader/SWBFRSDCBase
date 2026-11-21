/* Aurek - the in-match HUD (milestone 1.10), drawn as the game draws it.
 *
 * The art is the game's: GRAPHICS/HUD.ASR (one 256 x 256 sheet, HUD.psptx, and a TTXT chunk naming 60 rectangles on it), the
 * weapon icons (GRAPHICS/HUD_WEAPONS_CLASSIC.ASR / _PREQUEL.ASR, named after the weapons) and the game's font (GRAPHICS/FONTS.ASR:
 * Franklin Gothic Medium Cond 9 and 13; the HUD uses the 9).  Positions, colours and rules are traced from the game's HUD code
 * (see docs/NATIVE_ENGINE.md, 1.10): the game lays its HUD out on the PSP's 480 x 272 screen, which we scale to the display. */
#ifndef AK_HUD_H
#define AK_HUD_H
#include "../core/ak_core.h"
#include "../core/ak_vfs.h"
#include "../assets/asura.h"
#include "../render/ak_gfx.h"

/* a radar blip (engine coordinates): kind 0 a soldier, 1 a command post, 2 an empty vehicle; team 0 / 1, 4 = nobody's */
typedef struct { f32 pos[3]; u8 kind; int team; } ak_hud_blip;

typedef struct {
    bool alive, reticle;               /* the soldier is up; the reticle shows (on foot, not in a vehicle) */
    f32 health, health_max;
    const char *weapon;                /* the weapon's picture (its blueprint's HUDIcon, "EMP_Blaster_Rifle.tga"), NULL = none */
    s32 ammo, spare;                   /* the clip and the rest; ammo < 0 = unlimited (the infinity mark) */
    s32 weapon2_text;                  /* STDTEXT id drawn in the lower panel's count place (a power-up's "Ready!", 0x9F; -1 none) */
    const char *weapon2; s32 ammo2, spare2;   /* the second weapon (grenades): shown above when there is one */
    s32 weapon_name, weapon2_name; f32 weapon_name_t;   /* STDTEXT ids (the Weapon's Weapon_Name, -1 none) and seconds since they showed (08A5318C: 5 s) */
    bool prequel;                      /* the prequel era's weapon icons */
    bool tickets; s32 tickets_own, tickets_enemy;   /* conquest: each side's tickets (< 0 = unlimited) */
    int faction_own, faction_enemy;    /* 0 Republic, 1 CIS, 2 Alliance, 3 Empire */
    bool radar, space;                 /* the radar; a space level (its zoom) */
    f32 pos[3], fwd[3]; int team;      /* the player (or the vehicle he is in) and the camera's forward direction, engine space */
    const ak_hud_blip *blips; u32 nblips;
    /* the capture panel: the post the soldier stands at (within 5 units, on foot) */
    f32 dt;                            /* the frame's time (the messages' clocks) */
    bool lock; f32 lock_x, lock_y, lock_t; bool lock_head;   /* the lock-on: the held point on the 480 x 272 screen, seconds held, headshots */
    /* in a vehicle or a turret (the game's vehicle HUDs, funcs 08A5DAD0 / 08A5DDF8): no soldier's reticle, no capture panel; the
     * reticle at the projected aim point (aim, aim_x / aim_y); the lock (lock, lock_x / lock_y) filled by lock_fill, held once locked */
    bool vehicle, aim; f32 aim_x, aim_y, lock_fill; bool locked;
    bool post; s32 post_name; int post_owner, post_capturer; f32 post_fill; bool post_contested, post_cross; f32 post_time;
    bool dark;                         /* HOTH and HOTH_ION_CANNON (HUD +0x1C, 08A5D0A0): the level-coloured text and icons black, else white */
    bool zoomed;                       /* the zoom view (089DD9AC): the weapon ring's radius 19, else 16 */
    bool scope;                        /* the weapon's zoom (triangle): GRAPHICS/SNIPER.ASR's scope over the screen */
    /* the weapon ring (element 08A5C0C4: update 08A5C110, draw 08A5C3F0) about (ring_x, ring_y): type 1 reloading (1 - the reload left /
     * ReloadTime), 2 charging, 3 the heat x 0.01, 4 a tool's target's health; 0 = none */
    int ring_type; f32 ring_value, ring_x, ring_y;
    /* stamina / energy (element 08A5B2F0: update 08A5B328, draw 08A5B42C): bar_fill the share left, bar_full_t how long it has been
     * full (the bar goes after 3 s), bar_soldier: the stamina icon (else the energy one) */
    bool bar; f32 bar_fill, bar_full_t; bool bar_soldier;
    /* the jetpack / shield (element 08A5ABBC: update 08A5AC74, draw 08A5AE84): its fill, how long full, a pack (else a shield) */
    bool jet; f32 jet_fill, jet_full_t; bool jet_pack, jet_using;
    /* the timer (element 08A5BDE4, draw 08A5BE80): seconds left (0 = none), else a count out of a total (0 = none) */
    s32 timer_s, count, count_total;
    /* the lower weapon's bar instead of its counts (08A52FF4 / 08A513E8): reloading, 1 - the reload left / ReloadTime; < 0 = none */
    f32 weapon2_bar;
    /* the target's panel (element 08A56438: update 08A564C4, draw 08A566C0): its name (UTF-16; NULL none), health and maximum */
    s32 missile;                       /* space, in a flyer: an incoming guided missile's distance (game units), < 0 none */
    u32 use_text;                      /* a use zone's prompt (STDTEXT, e.g. 0x47 "\ue813 Use"); 0 none */
    bool target; const u16 *target_name; u32 target_name_len; f32 target_health, target_max;
} ak_hud_state;

bool ak_hud_load(ak_vfs *vfs);
/* a message (the game's queue, func 08A4ED60): channel 1 green (good news), 2 red (bad news); text = a STDTEXT entry, its %s
 * replaced by `arg` (UTF-16, e.g. a post's name; NULL none); it stays 4 s a line, less 1 */
void ak_hud_message(int channel, u32 text, const u16 *arg, u32 arg_len);
void ak_hud_messages_clear(void);
/* the campaign's objective line (style 4's box, staying while set; NULL / 0 clears) [assumed: style 4 - its box sits where the
   original's frame shows it] */
void ak_hud_tip(u32 id, f32 secs);          /* the campaign's tip: secs <= 0 stays until ak_hud_tip_clear */
void ak_hud_tip_more(u32 id);                /* another box under the tip, kept until ak_hud_tip_clear */
void ak_hud_tip_clear(void);
void ak_hud_objective(const u16 *t, u32 n);
const u16 *ak_hud_mission_text(u32 id, u32 *len);   /* TEXT/MISSIONOBJECTIVES.ASR entry */
/* the player was hurt from `src` (engine space; the attacker's position: message 0x8050, 089E3868) - the hit-direction marks */
void ak_hud_hit(const f32 src[3]);
/* a post's name (TEXT/CPNAMES.ASR entry `i`) */
const u16 *ak_hud_post_name(s32 i, u32 *len);
const u16 *ak_hud_stdtext(u32 id, u32 *len);                /* TEXT/STDTEXT.ASR entry id */
u32 ak_hud_bot_names(int faction);                          /* how many names the side's list has */
const u16 *ak_hud_bot_name(int faction, s32 i, u32 *len);   /* BOTNAMES_<faction>.ASR entry i */
void ak_hud_level(const ak_blob *level);   /* the level's radar map (its hmap chunk and picture); per level */         /* once; false = the files are missing (the HUD stays off) */
void ak_hud_draw(const ak_hud_state *s, int screen_w, int screen_h);   /* after the 3D, before ak_gfx_end */
/* the front end's drawing, in the PSP's 480 x 272 (app/frontend.c): quads, and text in Franklin Gothic Medium Cond 9 or (big) 13;
 * align 0 left, 1 centred, 2 right; returns the height drawn */
void ak_hud_2d_begin(void);
void ak_hud_2d_quad(ak_gfx_tex *t, f32 x0, f32 y0, f32 x1, f32 y1, f32 u0, f32 v0, f32 u1, f32 v1, u32 argb);
f32 ak_hud_2d_text(int big, f32 x0, f32 y0, f32 x1, f32 scale, u32 argb, const u16 *s, u32 n, int align);
f32 ak_hud_2d_line(int big);
void ak_hud_2d_end(void);
void ak_hud_2d_map(f32 x, f32 y, f32 size, u32 argb);                       /* the level's map in a disc */
bool ak_hud_2d_map_point(const f32 pos[3], f32 x, f32 y, f32 size, f32 *sx, f32 *sy);
#endif
