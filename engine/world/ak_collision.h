/* Level collision: the game's PHEN data (triangles with their flags and surface materials), rebuilt at load into a native
 * bounding-volume hierarchy over float boxes (the PSP's byte-quantised implicit trees are not kept).
 *
 * Triangle flags are the game's (tools/asura/phen.py): a query skips triangles whose flags share a bit with its ignore mask.
 *   0x0001 two-sided   0x0002 ignored by mask 2   0x0004 ignored by bodies (visual detail; still hit by shots and sight)
 *   0x0008 ignored by AI sight   0x0010 terrain under detail   0x0400..0x8000 ignored by one kind of body (0x1000 soldiers) */
#ifndef AK_COLLISION_H
#define AK_COLLISION_H
#include "../assets/asura.h"

enum { AK_COL_TWO_SIDED = 0x0001, AK_COL_NOT_BODIES = 0x0004, AK_COL_NOT_SIGHT = 0x0008, AK_COL_NOT_SOLDIERS = 0x1000,
       AK_COL_NOT_FLYERS = 0x4000 /* flyers pass: the capital ships' hangar shields (and water) */ };

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
#endif
