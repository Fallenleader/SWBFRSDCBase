/* Level collision: the game's PHEN data (triangles with their flags and surface materials), rebuilt at load into a native
 * bounding-volume hierarchy over float boxes (the PSP's byte-quantised implicit trees are not kept).
 *
 * Triangle flags are the game's (tools/asura/phen.py): a query skips triangles whose flags share a bit with its ignore mask.
 *   0x0001 two-sided   0x0002 ignored by mask 2   0x0004 ignored by bodies (visual detail; still hit by shots and sight)
 *   0x0008 ignored by AI sight   0x0010 terrain under detail   0x0400..0x8000 ignored by one kind of body.
 * Which kind, traced from the bodies' set-up (each class's slot 0x88 ORs its bit into the body's world-query mask, +0x144 via
 * 088BB4F0, on top of the default 0x0004 from 088B8B58): 0x0400 the base unit class (08992BFC), 0x0800 every vehicle (089CB944),
 * 0x1000 soldiers (the Humanoid class 0899C544, which replaces the unit's 0x0400), 0x2000 the Tank blueprints - hover, tracked,
 * speeder bikes, creatures (089B41DC, class 0x801D, also 0x0800), 0x4000 flyers (089AE0D4, class 0x8004, also 0x0800), 0x8000
 * class 0x8011 (089FF994).  Naboo's open ground carries 0x0400-0x8000 (flyers too pass it: only its 0x0004-free pieces stop them);
 * Kashyyyk's flyer ceiling is 0x0800 | 0x1000 | 0x2000 | 0x8000. */
#ifndef AK_COLLISION_H
#define AK_COLLISION_H
#include "../assets/asura.h"

enum { AK_COL_TWO_SIDED = 0x0001, AK_COL_NOT_BODIES = 0x0004, AK_COL_NOT_SIGHT = 0x0008, AK_COL_NOT_UNITS = 0x0400,
       AK_COL_NOT_VEHICLES = 0x0800, AK_COL_NOT_SOLDIERS = 0x1000, AK_COL_NOT_TANKS = 0x2000,
       AK_COL_NOT_FLYERS = 0x4000 /* flyers pass: the capital ships' hangar shields (and water) */ };
/* the masks the game's bodies move with */
#define AK_COL_SOLDIER_MASK (AK_COL_NOT_BODIES | AK_COL_NOT_SOLDIERS)
#define AK_COL_WALKER_MASK  (AK_COL_NOT_BODIES | AK_COL_NOT_VEHICLES)
#define AK_COL_TANK_MASK    (AK_COL_NOT_BODIES | AK_COL_NOT_VEHICLES | AK_COL_NOT_TANKS)
#define AK_COL_FLYER_MASK   (AK_COL_NOT_BODIES | AK_COL_NOT_VEHICLES | AK_COL_NOT_FLYERS)

typedef struct { f32 a[3], e1[3], e2[3], n[3]; u16 flags, material; u16 object; u16 pad; } ak_col_tri;   /* a, a+e1, a+e2 */
typedef struct { f32 min[3]; u32 first_or_right; f32 max[3]; u32 count; } ak_col_node;   /* count 0: inner (left = next) */
typedef struct {
    ak_col_tri *tri; u32 ntri;
    ak_col_node *node; u32 nnode;
    u32 nobjects;
} ak_collision;

typedef struct { f32 t; f32 pos[3], normal[3]; u32 tri; u16 flags, material; } ak_col_hit;

bool ak_collision_load(const ak_level *l, ak_arena *a, ak_collision *out);
/* first hit along origin + t * dir for t in (0, max_t]; triangles whose flags & ignore are skipped; one-sided triangles are hit
 * from the front only (the side their normal faces) */
bool ak_col_raycast(const ak_collision *c, const f32 *origin, const f32 *dir, f32 max_t, u16 ignore, ak_col_hit *hit);
/* A sphere pushed out of the triangles it overlaps (closest point on each triangle; one-sided triangles only from the front).
 * With `horizontal`, pushes are flattened to the ground plane (walls stop a walker without lifting it; the ground is a ray's job).
 * Returns how many triangles pushed; *wall (if given) gets the summed push direction. */
u32 ak_col_sphere_resolve(const ak_collision *c, f32 *center, f32 radius, u16 ignore, bool horizontal, f32 *wall);
/* A box (centre, unit axes, half extents) moving by `move`: the earliest time t in [0, 1] it touches a triangle, with that
 * contact's normal (pointing back toward the box) and the triangle's flags.  As the game's body step does it: the box's corners
 * swept against triangle faces (one-sided ones from the front only), plus the vertices of steep triangles swept against the box's
 * faces; no edge-against-edge test.  False if nothing is touched. */
bool ak_col_box_sweep(const ak_collision *c, const f32 *centre, const f32 (*axis)[3], const f32 *half, const f32 *move, u16 ignore,
                      f32 *t_out, f32 *normal, u16 *flags);
#endif
