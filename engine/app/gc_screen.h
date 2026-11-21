/* Aurek - the Galactic Conquest map screen (PARITY 5.4): the GC.PSP scene with the game's overlay (08A44xxx-08A4Axxx).
 * First slice: the GC state, the planets' places (the level's placed planet models; Alderaan = the mean of its Asteroid_02
 * pieces), the owner halos (GC_Planet_Corona.bmp) and the header ("PHASE x" top left, "CREDITS n" top right - 08A4656C's
 * family; text TEXT/GALACTICCONQUEST.ASR).  Sizes and colours are read off the original's screen (harness, 480 x 272) until the
 * drawing code is traced [assumed]. */
#ifndef AK_GC_SCREEN_H
#define AK_GC_SCREEN_H
#include "core/ak_core.h"
#include "core/ak_vfs.h"
#include "assets/asura.h"
#include "assets/model.h"
#include "assets/entity.h"
#include "assets/blueprint.h"
#include "render/ak_scene.h"
#include "game/ak_gc.h"

enum { GCT_TECH, GCT_TECH2, GCT_SQUARE, GCT_TRIANGLE, GCT_CROSS, GCT_SELECT, GCT_N };
typedef struct {
    bool ready;
    ak_gc g; ak_gc_rules r;
    f32 planet_pos[AK_GC_PLANETS][3]; bool planet_known[AK_GC_PLANETS];
    ak_gfx_tex *corona;
    ak_gfx_tex *tex[6];                /* GCT_*: the overlay's atlases and button icons */
    /* the sector outlines: SHAP hulls placed by ENTI type 7 (no mesh), in world space (engine axes); fill = the triangles, rim = the
       quads between the inner and outer outline */
    struct { ak_vtx *fill, *rim; u32 nfill, nrim; int sector; } shape[AK_GC_SECTORS]; int nshape;
    int cursor;                        /* the selected planet */
    int phase;                         /* GALACTICCONQUEST.ASR 0 Treasury, 1 Purchase, 2 Movement, 3 Reinforce */
} ak_gc_screen;

bool ak_gc_screen_init(ak_gc_screen *s, ak_vfs *vfs, const ak_level *l, const ak_scene_level *sc, const ak_model_set *ms,
                       const ak_entity_set *ents, const ak_blueprints *bp, u32 seed);
void ak_gc_screen_draw_back(const ak_gc_screen *s, const ak_m4 *vp);   /* behind the models: the owner halos */
void ak_gc_screen_draw(const ak_gc_screen *s, const ak_m4 *vp);        /* 2D, after the 3D */
const u16 *ak_gc_text(u32 id, u32 *len);                          /* TEXT/GALACTICCONQUEST.ASR entry */
#endif
