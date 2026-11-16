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

typedef struct {
    bool alive, reticle;               /* the soldier is up; the reticle shows (on foot, not in a vehicle) */
    f32 health, health_max;
    const char *weapon;                /* the weapon's picture (its blueprint's HUDIcon, "EMP_Blaster_Rifle.tga"), NULL = none */
    s32 ammo, spare;                   /* the clip and the rest; ammo < 0 = unlimited (the infinity mark) */
    const char *weapon2; s32 ammo2, spare2;   /* the second weapon (grenades): shown above when there is one */
    bool prequel;                      /* the prequel era's weapon icons */
} ak_hud_state;

bool ak_hud_load(ak_vfs *vfs);         /* once; false = the files are missing (the HUD stays off) */
void ak_hud_draw(const ak_hud_state *s, int screen_w, int screen_h);   /* after the 3D, before ak_gfx_end */
#endif
