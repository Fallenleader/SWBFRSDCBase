/* Aurek - the game's blueprint database (BLUE chunks of MISC/COMMON.ASR).
 *
 * Every tunable the game has lives here: weapons, laser bolts, projectiles, humanoids (bodies, heads, health), controls (jump
 * impulse, air control), cameras, flyers, tanks, walkers, turrets, medals, Galactic Conquest.  One BLUE chunk per type
 * ("Humanoid", "Weapon", ...); each holds objects that inherit from a parent object of the same type (Stormtrooper <- EMP_Unit <-
 * Empire <- Base), so a property is looked up along the chain.
 *
 * Chunk body: u32 0, u32 1, u32 type hash, u32 object count, type name (zero-terminated, padded to 4).
 * Object:     u32 flags (3), u32 name hash, u32 parent hash (0 = none), name (padded), u32 property count, properties.
 * Property:   u32 name hash, name (padded), u32 0 (declared here) / 3 (a parent's, given a new value), u32 sub-type hash (asset kinds,
 *             enums), u32 count, then count values, each a u32 type and: 0 int (4 bytes), 1 float (4), 2 bool (1 byte: later fields
 *             are unaligned), 3 string (u32 hash, then the text, zero-terminated and padded to 4, only when the hash is not 0), 4 u32.
 *             (Every property of the shipped file has one value.)
 * Names hash as the game does: h = h * 31 + c over the lower-cased bytes (ak_bp_hash). */
#ifndef AK_BLUEPRINT_H
#define AK_BLUEPRINT_H
#include "core/ak_core.h"

enum { AK_BP_INT = 0, AK_BP_FLOAT = 1, AK_BP_BOOL = 2, AK_BP_STRING = 3 };

typedef struct {
    u32 hash; const char *name;
    u32 cls;                           /* sub-type hash (asset kind, enum; 0 = plain value) */
    u8 type, declared; u32 count;      /* declared: 0 = declared here, 3 = overrides a parent's */
    union { s32 *i; f32 *f; u8 *b; const char **s; } v;
} ak_bp_prop;

typedef struct ak_bp_object {
    u32 hash, parent_hash; const char *name;
    const struct ak_bp_object *parent; /* resolved after loading (NULL = root) */
    ak_bp_prop *props; u32 nprops;
} ak_bp_object;

typedef struct {
    u32 hash; const char *name;
    ak_bp_object *objects; u32 nobjects;
} ak_bp_type;

typedef struct { ak_bp_type *types; u32 ntypes; } ak_blueprints;

u32 ak_bp_hash(const char *s);
/* all BLUE chunks of an Asura file (COMMON.ASR) */
bool ak_blueprints_parse(const ak_blob *file, ak_arena *a, ak_blueprints *out);
const ak_bp_type   *ak_bp_find_type(const ak_blueprints *b, const char *type);
const ak_bp_object *ak_bp_find(const ak_blueprints *b, const char *type, const char *object);
/* a property of the object or the nearest ancestor that has it (NULL = none) */
const ak_bp_prop *ak_bp_get(const ak_bp_object *o, const char *prop);
f32  ak_bp_float(const ak_bp_object *o, const char *prop, f32 def);
s32  ak_bp_int(const ak_bp_object *o, const char *prop, s32 def);
bool ak_bp_bool(const ak_bp_object *o, const char *prop, bool def);
const char *ak_bp_string(const ak_bp_object *o, const char *prop, const char *def);
/* is o (or one of its ancestors) the object named `name`? */
bool ak_bp_is(const ak_bp_object *o, const char *name);

#endif
