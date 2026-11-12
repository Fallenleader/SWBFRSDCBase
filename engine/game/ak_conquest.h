/* Aurek - the level's gameplay places for conquest: command posts, their team spawns and capture regions (ENTI records).
 *
 * Read from the level data (confirmed on every playable level: Hoth 5 posts, Kashyyyk 3, Mustafar 6, Naboo 4, Sullust 5,
 * Tatooine 5, Yavin IV 5; space maps 2-3, Galactic Conquest none):
 *   type 8  (flagged, sub-kind 6)   a command post: position + rotation quaternion, then 100.0 ...
 *   type 15 (flagged, sub-kind 1)   a team-1 soldier spawn: position + quaternion, 100.0 ... - one per post, 10-25 m from it
 *   type 16 (flagged, sub-kind 2)   a team-2 soldier spawn, the same
 *   type 37 (flagged)               a region: position + 3x3 matrix - on the posts (their capture areas), a few elsewhere
 * Not yet traced (they are in the game's code): which team owns a post at the start, capture time and radius, tickets and bleed,
 * which faction is team 1. */
#ifndef AK_CONQUEST_H
#define AK_CONQUEST_H
#include "core/ak_core.h"
#include "assets/asura.h"

#define AK_MAX_POSTS 16
typedef struct {
    f32 pos[3]; f32 yaw;
    f32 spawn[2][3]; f32 spawn_yaw[2]; bool has_spawn[2];   /* team 1, team 2 */
    f32 region[3]; bool has_region;
} ak_post;

typedef struct { ak_post post[AK_MAX_POSTS]; u32 nposts; u32 nregions; } ak_conquest_map;

bool ak_conquest_load(const ak_level *l, ak_conquest_map *out);
#endif
