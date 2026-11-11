/* Aurek - soldiers: how one is put together from the game's data.
 *
 * A soldier class is a Humanoid blueprint (Stormtrooper, MediumRebel, Battle_Droid, ...).  Its body is the model of the same
 * name; it lists three heads ("Head 1".."Head 3", model names), which are separate one-bone models riding the body's bone 6 (the
 * head socket: child of the neck, no geometry of its own, on every humanoid skeleton the game has).  The personalisation picks a
 * body (one of the faction's three classes), a head (one of that body's three) and two colours (indices into the game's tables,
 * ak_personal_colour1/2); a fresh profile has the defaults of the game's func_08977F80 (ak_faction_default_colours). */
#ifndef AK_SOLDIER_H
#define AK_SOLDIER_H
#include "core/ak_core.h"
#include "assets/blueprint.h"
#include "assets/model.h"

enum { AK_FACTION_REPUBLIC = 0, AK_FACTION_CIS = 1, AK_FACTION_ALLIANCE = 2, AK_FACTION_EMPIRE = 3, AK_FACTION_NONE = 4 };
#define AK_HEAD_BONE 6

typedef struct {
    const ak_bp_object *bp;            /* the Humanoid blueprint */
    s32 body, head;                    /* model indices (head -1 = none: heroes and droids built in one piece) */
    u16 head_bone;
    u8 faction, head_index;            /* faction (AK_FACTION_*), head 0..2 */
    u8 colour1, colour2;               /* indices into ak_personal_colour1/2 */
    u32 rgb1, rgb2;                    /* the colours (0xRRGGBB) */
    f32 camera_offset[3];              /* first-person camera relative to the head ("HeadNCameraOffsetX/Y/Z") */
} ak_soldier_look;

/* The head's matrix (3x4 rows, like the bone matrices) from the body's posed head socket.  Head meshes are upright in model axes
 * with their origin at the socket (not in the socket bone's turned space), so: H = pose * inverse(bind) * translate(bind position),
 * which is rotation pose.R * bind.R^T at position pose.t; in the bind pose the head simply sits upright on the neck. */
void ak_soldier_head_matrix(const ak_skeleton *body, u16 head_bone, const f32 pose[12], f32 out[12]);

const char *ak_faction_name(int faction);
void ak_faction_default_colours(int faction, u8 *colour1, u8 *colour2);
/* body = the Humanoid blueprint's name; head 0..2; colour < 0 = the faction's default.  False when the blueprint or its body model
 * is not in this level. */
bool ak_soldier_look_make(const ak_blueprints *bp, const ak_model_set *models, const char *body, int head, int colour1, int colour2,
                          ak_soldier_look *out);

#endif
