/* AI navigation: the game's NAV1 graph (layout: tools/asura/nav.py), with native lookups: a uniform grid over the nodes for
 * nearest-node queries and A* over the links.  Node and link flags 0x0100 / 0x0200 / 0x0400 / 0x0800 close them to vehicle
 * class 1..4 (soldiers may use every node); link flag 0x0002 / 0x0006 are one-way drops. */
#ifndef AK_NAV_H
#define AK_NAV_H
#include "../assets/asura.h"

typedef struct { f32 pos[3]; f32 radius; u16 flags; u16 nlinks; u32 first_link; } ak_nav_node;
typedef struct { u16 to, flags; f32 cost; } ak_nav_link;
typedef struct {
    ak_nav_node *node; u32 nnode;
    ak_nav_link *link; u32 nlink;
    /* grid over x/z (engine axes) */
    f32 gmin[2], cell; u32 gw, gh; u32 *cell_first, *cell_items;
} ak_nav;

bool ak_nav_load(const ak_level *l, ak_arena *a, ak_nav *out);
s32  ak_nav_nearest(const ak_nav *n, const f32 *pos, f32 max_dist);
/* shortest path (node indices from start to goal) for a mover that may not use flags in 'closed' (0 = soldier); returns the
 * node count written (0 = no path), *cost the path length */
u32  ak_nav_path(const ak_nav *n, u32 start, u32 goal, u16 closed, u32 *out, u32 max_out, f32 *cost, ak_arena *scratch);
#endif
