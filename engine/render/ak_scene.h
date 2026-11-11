/* The level's static scene: geometry and textures in GPU memory once, objects culled against the view, draws sorted to
 * keep state changes low (opaque by pipeline then texture; the blend layer in the game's order, after the opaque pass). */
#ifndef AK_SCENE_H
#define AK_SCENE_H
#include "ak_gfx.h"

typedef struct { u32 objects_visible, objects, draws, tris; } ak_scene_stats;
typedef struct {
    const ak_level *level;
    ak_gfx_buf *vb, *ib;
    ak_gfx_tex **tex;          /* per level texture */
    struct ak_draw_item *items; u32 nitems_cap;
    u8 *obj_visible;
    f32 bounds_min[3], bounds_max[3];
    ak_gfx_buf *sky_vb, *sky_ib;          /* sky box: five faces, drawn first around the camera */
} ak_scene_level;

bool ak_scene_level_init(ak_scene_level *s, const ak_level *l, ak_arena *a);
void ak_scene_level_free(ak_scene_level *s);
void ak_scene_level_draw(ak_scene_level *s, const ak_m4 *view_proj, ak_scene_stats *st);
/* the sky box, before the level: proj and the camera's view (only its rotation is used); radius in metres (inside the far plane) */
void ak_scene_sky_draw(ak_scene_level *s, const ak_m4 *proj, const ak_m4 *view, f32 radius);

/* ---- models: every model of the level in one vertex and one index buffer (uploaded once), drawn part by part with the
 * part's bone transform.  Textures are the level scene's. */
#include "../assets/model.h"
typedef struct {
    const ak_model_set *set; const ak_scene_level *level;
    ak_gfx_buf *vb, *ib;
    u32 *index_base;           /* per model: its first index in ib (indices are rebased to the shared vertex buffer) */
    u8 *masked;                /* per level texture: has a personalisation colour mask */
    struct { s32 tex; u32 c1, c2; ak_gfx_tex *gt; } *variant; u32 nvariant, cap_variant;
} ak_scene_models;
/* personalisation colours of one drawn model (0xRRGGBB), or NULL for the texture as stored */
typedef struct { u32 colour1, colour2; } ak_model_colours;
bool ak_scene_models_init(ak_scene_models *s, const ak_model_set *set, const ak_scene_level *level, ak_arena *a);
void ak_scene_models_free(ak_scene_models *s);
/* bones: model-space 3x4 matrix per bone (ak_skeleton_bind_matrices, or an animated pose); NULL = parts at the model origin */
void ak_scene_models_draw(ak_scene_models *s, u32 model, const ak_m4 *view_proj, const ak_m4 *world, const f32 (*bones)[12],
                          const ak_model_colours *colours, ak_scene_stats *st);
#endif
