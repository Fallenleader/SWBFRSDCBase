/* Aurek - the level's paths (ENTI records), what the placed walkers (Hoth's AT-AT, Boz Pity's) walk along.
 *
 * Read from the level data (worked out from HOTH / BOZ_PITY, the format of every level):
 *   type 55 (class 0x8037) a path node: [8..10] position, [11] the path segment that leaves it (999 = the end)
 *   type 60 (class 0x803C) a path segment, a spline: [8..10] centre, [13] / [14] the nodes it joins, [16] N points, then N - 2
 *                          quaternions (the way along at each knot), N positions (the first and last are the spline's control
 *                          ends, the rest the knots, from node to node), N - 2 distances along it from its start, then more
 *   type 13 (class 0x800D) a placed unit (a walker, soldiers): word 4 = k extra words, the model hash at word 6 + k, and the u32 at
 *                          byte 82 + 4k (unaligned) the node its path starts from (999 none)
 * A route is the chain node -> segment -> node -> ... from a start node, as a polyline in engine axes. */
#ifndef AK_PATH_H
#define AK_PATH_H
#include "core/ak_core.h"
#include "assets/asura.h"

#define AK_ROUTE_MAX 256
typedef struct { f32 pt[AK_ROUTE_MAX][3]; u32 n; f32 length; } ak_route;

/* the route of the placed unit with entity id `unit` (false if it has none) */
bool ak_route_for_unit(const ak_level *l, u32 unit, ak_route *out);
/* the point `dist` metres along the route (clamped to its ends) and the direction there; returns false past the end */
bool ak_route_at(const ak_route *r, f32 dist, f32 pos[3], f32 dir[3]);
#endif
