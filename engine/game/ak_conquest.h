/* Aurek - the level's gameplay places for conquest: command posts, their team spawns and capture regions (ENTI records).
 *
 * Read from the level data (confirmed on every playable level: Hoth 5 posts, Kashyyyk 3, Mustafar 6, Naboo 4, Sullust 5,
 * Tatooine 5, Yavin IV 5; space maps 2-3, Galactic Conquest none):
 *   type 8  (flagged, sub-kind 6)   a command post: position + rotation quaternion, then 100.0 ...
 *   type 39 (flagged, class 0x8027) a spawn point ("locator", func 089EE83C): version, position, flags (bit 0: it has a place of
 *                                   its own), 3x3 rows
 *   type 15 / 16 (sub-kind 1 / 2)   per-team points near the posts (not where soldiers spawn: see ak_post_spawn)
 *   type 37 (flagged)               a region: position + 3x3 matrix - on the posts (their capture areas), a few elsewhere
 * A post record ends with: the owner (0 = team 1, 1 = team 2, else neutral), the capture amount (seconds for one soldier: 10 on most
 * posts, 20-30 on a few, 300 on the space maps' capital ships), the flags (bit 0: not capturable - the capital ships), then a list of
 * linked spawn points (count, then id + weight pairs: the weights add up to 100 on most posts; func 089ED36C).
 *
 * The rules, from the game's code (command post update, the conquest mode's ticket handler and its bleed, the match state):
 *  - capture: a living soldier within 5 m counts with a weight of 1.0; the rate is the sum of the weights, capped at 5 per second.
 *    The owner's team refills the post's progress to the capture amount; another team drains it, and at 0 an owned post goes
 *    neutral, a neutral post goes to the capturing team (a different team's partial capture is pushed back first).  Both teams at
 *    the post: a 30 s contest timer, then the post goes neutral.
 *  - tickets: each team starts with the option (25..200) and loses one per soldier killed; at 0 the team loses.
 *  - bleed: a team holding more than half the posts makes the other lose a ticket every 4 s (while that team has more tickets than
 *    living soldiers); a team with no posts and no living soldiers loses a ticket every 0.1 s.
 *  - total loss: a team holding every post wins after 60 s ("command post total loss time"), eleven times as fast while the other
 *    team has no living soldier.
 *  - respawn waves every 10 s ("respawn delay"), at a post the team owns.
 * Team 1 is the Republic / the Alliance, team 2 the CIS / the Empire (Hoth: the Alliance starts with Echo Base's four posts). */
#ifndef AK_CONQUEST_H
#define AK_CONQUEST_H
#include "core/ak_core.h"
#include "assets/asura.h"

#define AK_MAX_POSTS 16
#define AK_CQ_NEUTRAL 4
#define AK_POST_LOCS 10
typedef struct {
    f32 pos[3]; f32 yaw;
    f32 spawn[2][3]; f32 spawn_yaw[2]; bool has_spawn[2];   /* team 1, team 2: where to spawn when no linked point is picked */
    struct { f32 pos[3], yaw; s32 weight; bool own; } loc[AK_POST_LOCS]; u32 nloc;   /* linked spawn points (see ak_post_spawn) */
    f32 region[3]; bool has_region;
    int start_owner;                   /* 0, 1 or AK_CQ_NEUTRAL */
    f32 amount; u32 flags; bool disabled;
    bool mobile, absent;               /* mobile: carried by a vehicle (CarriesCommandPost); absent: its carrier is wrecked (not a post) */
} ak_post;

/* vehicle spawns (ENTI type 27): the record's word 6 is the respawn time (10 s on every level), word 11 the command post it
 * belongs to - the side holding that post gets the spawn's vehicle */
#define AK_MAX_VSPAWN_LINKS 32
typedef struct { u32 id; s32 post; f32 respawn; } ak_vspawn_link;
typedef struct { ak_post post[AK_MAX_POSTS]; u32 nposts; u32 nregions; u32 post_id[AK_MAX_POSTS];
                 ak_vspawn_link vlink[AK_MAX_VSPAWN_LINKS]; u32 nvlink; } ak_conquest_map;

bool ak_conquest_load(const ak_level *l, ak_conquest_map *out);

/* the match */
typedef struct { int owner, capturing; f32 progress, contest; } ak_post_state;
typedef struct { f32 pos[3]; int team; bool alive; f32 weight; } ak_cq_soldier;
typedef struct {
    ak_post_state post[AK_MAX_POSTS];
    s32 tickets[2]; u32 held[2]; u32 living[2]; u32 present;   /* present: posts that exist now (vehicle-carried ones come and go) */
    f32 bleed_t[2], drain_t[2];        /* the majority bleed and the fast drain, per losing team */
    int all_team; f32 loss_t;          /* a team holding every post, and the time left */
    int winner;                        /* -1 playing, 0 / 1, or AK_CQ_NEUTRAL for a draw */
    f32 respawn_t;                     /* the next spawn wave */
    u32 captures;                      /* owner changes (tests) */
} ak_conquest;

typedef struct { s32 tickets; f32 capture_radius, max_rate, contest_time, bleed_time, drain_time, loss_time, respawn_delay; } ak_cq_rules;
void ak_cq_rules_default(ak_cq_rules *r);   /* the game's numbers; AK_TICKETS sets the option */
int ak_faction_team(int faction);
void ak_conquest_start(const ak_conquest_map *m, const ak_cq_rules *r, ak_conquest *s);
/* one step: posts, bleed, total loss; returns true on the step the spawn wave goes */
bool ak_conquest_update(const ak_conquest_map *m, const ak_cq_rules *r, ak_conquest *s, const ak_cq_soldier *sol, u32 n, f32 dt);
void ak_conquest_killed(const ak_cq_rules *r, ak_conquest *s, int team);
/* the team's spawn at an owned post nearest `near` (or any owned post's); false if the team owns none */
/* a vehicle-carried post (see play): where it is, whose it is, and whether it exists; it never counts as a capture */
void ak_conquest_mobile(const ak_conquest_map *m, ak_conquest *s, u32 i, int owner, bool present);
bool ak_conquest_spawn(const ak_conquest_map *m, const ak_conquest *s, int team, const f32 *near, f32 *pos, f32 *yaw);
/* where a soldier of `team` spawns at post `po` (traced: func 089ED36C): a roll of 1-100 walks the post's linked points, taking
   off each one's weight, and the point where it reaches 0 wins; a point without a place of its own, or a roll the weights do not
   reach, spawns at the post.  `roll` is a random number. */
void ak_post_spawn(const ak_post *po, int team, u32 roll, f32 pos[3], f32 *yaw);
#endif
