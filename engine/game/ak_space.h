/* Aurek - the space maps' AI places (ENTI type 34, class 0x8022 in the game: an "AI objective" path, read by its
 * constructor func 089890F4, loader 08989374; fields at +0x1c..+0x5c).
 *
 * Record (version 2, 22 words): id, 0x8022, 2, two base words, a flag, the team (0 = Republic / Alliance, 1 = CIS / Empire: the
 * capital ship it belongs to), the kind, three points (game axes) - the approach: start offset, start, end - a direction, the
 * linked entity (the ship's AI volume, ENTI type 18, or 999), a flag.  Kinds (from the team AI commander, funcs 0898ED00..089919F4):
 *   0  a hangar run: outside the hangar -> its mouth -> inside.  Transports land in the enemy's ("land in hangar"); flyers taking
 *      off leave their own hangar along it backwards (the take-off behaviour picks the one whose inner end is within 50 m)
 *   1, 2  attack runs on the capital ship: offset -> start -> end at the hull ("attack target").  Bombers always take one (kind 2
 *      first), fighters 40 % of the time kind 2, else 20 % kind 1.
 * Space Hoth has 38 (8 hangar runs, 4 per ship; 2 + 28 attack runs), Space Alderaan 53, Kessel 39, Kashyyyk 50; Hoth (ground) 2
 * hangar runs and no attack runs. */
#ifndef AK_SPACE_H
#define AK_SPACE_H
#include "core/ak_core.h"
#include "assets/asura.h"

#define AK_MAX_OBJECTIVES 64
enum { AK_OBJ_HANGAR = 0, AK_OBJ_RUN1 = 1, AK_OBJ_RUN2 = 2 };
typedef struct { u32 id; int team, kind; f32 path[3][3]; u32 link; } ak_space_obj;
typedef struct { ak_space_obj obj[AK_MAX_OBJECTIVES]; u32 nobj, nhangar; } ak_space_map;

bool ak_space_load(const ak_level *l, ak_space_map *out);

/* the team AI commander's picks for a flyer that has just become free (func 0899129C; the capture-the-flag branch left out):
 * by the blueprint's Flyer_Type - interceptor, fighter, bomber, transport, hero (else: a ground or other vehicle) */
enum { AK_FLY_INTERCEPTOR, AK_FLY_FIGHTER, AK_FLY_BOMBER, AK_FLY_TRANSPORT, AK_FLY_HERO, AK_FLY_OTHER };
int ak_flyer_type(const char *flyer_type);
#endif
