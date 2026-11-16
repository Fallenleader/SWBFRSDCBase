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

/* a radar blip (engine coordinates): kind 0 a soldier, 1 a command post, 2 an empty vehicle; team 0 / 1, 4 = nobody's */
typedef struct { f32 pos[3]; u8 kind; int team; } ak_hud_blip;

typedef struct {
    bool alive, reticle;               /* the soldier is up; the reticle shows (on foot, not in a vehicle) */
    f32 health, health_max;
    const char *weapon;                /* the weapon's picture (its blueprint's HUDIcon, "EMP_Blaster_Rifle.tga"), NULL = none */
    s32 ammo, spare;                   /* the clip and the rest; ammo < 0 = unlimited (the infinity mark) */
    const char *weapon2; s32 ammo2, spare2;   /* the second weapon (grenades): shown above when there is one */
    bool prequel;                      /* the prequel era's weapon icons */
    bool tickets; s32 tickets_own, tickets_enemy;   /* conquest: each side's tickets (< 0 = unlimited) */
    int faction_own, faction_enemy;    /* 0 Republic, 1 CIS, 2 Alliance, 3 Empire */
    bool radar, space;                 /* the radar; a space level (its zoom) */
    f32 pos[3], fwd[3]; int team;      /* the player (or the vehicle he is in) and the camera's forward direction, engine space */
    const ak_hud_blip *blips; u32 nblips;
    /* the capture panel: the post the soldier stands at (within 5 units, on foot) */
    f32 dt;                            /* the frame's time (the messages' clocks) */
    bool post; s32 post_name; int post_owner, post_capturer; f32 post_fill; bool post_contested; f32 post_time;
} ak_hud_state;

bool ak_hud_load(ak_vfs *vfs);
/* a message (the game's queue, func 08A4ED60): channel 1 green (good news), 2 red (bad news); text = a STDTEXT entry, its %s
 * replaced by `arg` (UTF-16, e.g. a post's name; NULL none); it stays 4 s a line, less 1 */
void ak_hud_message(int channel, u32 text, const u16 *arg, u32 arg_len);
void ak_hud_messages_clear(void);
/* a post's name (TEXT/CPNAMES.ASR entry `i`) */
const u16 *ak_hud_post_name(s32 i, u32 *len);
void ak_hud_level(const ak_blob *level);   /* the level's radar map (its hmap chunk and picture); per level */         /* once; false = the files are missing (the HUD stays off) */
void ak_hud_draw(const ak_hud_state *s, int screen_w, int screen_h);   /* after the 3D, before ak_gfx_end */
#endif
