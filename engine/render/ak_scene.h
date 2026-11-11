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
    u8 *tex_cutout;            /* per level texture: has transparent texels */
    struct ak_draw_item *items; u32 nitems_cap;
    u8 *obj_visible;
    f32 bounds_min[3], bounds_max[3];
} ak_scene_level;

bool ak_scene_level_init(ak_scene_level *s, const ak_level *l, ak_arena *a);
void ak_scene_level_free(ak_scene_level *s);
void ak_scene_level_draw(ak_scene_level *s, const ak_m4 *view_proj, ak_scene_stats *st);
#endif
