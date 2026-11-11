/* Level entities (ENTI chunks): one record each, { x32 id, u32 type (bit 15: a flag), u32 sub-kind, fields... }.
 * Milestone 1.4 reads where models are placed; the gameplay meaning of each type (command posts, spawns, regions...) follows with
 * the game rules (1.6).  Layouts used (worked out from the data, see docs/NATIVE_ENGINE.md):
 *   type 27 (flagged)  vehicle spawn: [9], [10] vehicle per team (model name hash, 0 = none), [11] link, [12..14] position,
 *                      [15..17] rotation (Euler, radians)
 *   type 13 (flagged)  walker (AT-AT): [7] model, [8..10] position, [11..19] rotation (3x3, rows)
 *   others             a model name hash preceded by position (3) + rotation quaternion (4): turrets, droids, props, objectives
 * Positions and rotations are converted to engine axes. */
#ifndef AK_ENTITY_H
#define AK_ENTITY_H
#include "model.h"

typedef struct {
    u32 id, type; bool flagged;
    s32 model[2];                      /* index into the level's models (full detail), -1 = none; [1] the other team's (spawns) */
    f32 pos[3]; ak_quat rot;
    bool placed;                       /* has a model and a transform */
} ak_entity;

typedef struct { ak_entity *e; u32 n, placed; } ak_entity_set;
bool ak_entities_load(const ak_level *l, const ak_model_set *ms, ak_arena *a, ak_entity_set *out);
#endif
