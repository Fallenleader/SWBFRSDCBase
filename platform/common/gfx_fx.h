#pragma once
/* Graphics features of the PS5GFXExperimental branch (gfx_fx.c): settings, the current map, per-map light setups (captured from the
 * game's own lighting), asset dumps by map / character / weapon / vehicle.  Renderer passes: platform/linux_test/gfx_gl.c. */
#include "gfx.h"
typedef struct {
    int pbr;                  /* RS_PBR: PBR shading of textures with _ms / _n maps (mods) */
    int shadows;              /* RS_SHADOWS: sun shadow map */
    int shadow_res, shadow_range, shadow_strength;
    int rt_shadows;           /* RS_RT_SHADOWS: ray-traced (screen-space ray-marched) sun and local-light shadows - setup only */
    int rt_reflections;       /* RS_RT_REFLECTIONS: ray-traced (screen-space) reflections on PBR surfaces - setup only */
    int light_capture, capture_frames;   /* RS_LIGHT_CAPTURE(_FRAMES): make mods/lights/<era>_<map>.txt from the game's lights */
    int dump;                 /* RS_DUMP_ASSETS: textures to mods/dumps/{maps,players,weapons,vehicles,objects,effects,ui} */
} rs_fx_cfg_t;
extern rs_fx_cfg_t rs_fx;
typedef struct { int type; float pos[3], dir[3], col[3]; } rs_fx_light_t;   /* type 1 point, 2 spot */

void rs_fx_init(void);
const char *rs_fx_data_dir(void);                         /* /data/SWBFRS on the PS5 */
const char *rs_fx_map(void);                              /* "hoth", "" before a level */
void rs_fx_file_opened(const char *full);                 /* hle.c sceIoOpen (game thread) */
void rs_fx_note_lights(const gfx_hw_t *h);                /* renderer: a lit 3D draw's GE lights */
void rs_fx_frame(void);                                   /* renderer: once per frame */
int  rs_fx_sun(float dir[3], float col[3], unsigned *gen);   /* the map's sun (towards the sun, world space); 0 = not known yet */
int  rs_fx_local_lights(rs_fx_light_t *out, int max);
void rs_fx_sun_tint(float t[3], float amb[3]);              /* sunlit colour factor (1 1 1 = the map's own) and the ambient */
