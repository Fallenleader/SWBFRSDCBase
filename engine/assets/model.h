/* Models and skeletons from the game's level files.
 *
 * Every model comes as a group of chunks: TEXT (its texture names), MTRL (its materials), HSKN (its skeleton), HSKL (level-of-detail
 * links), HMPT (mount points), HSBB (boxes), then the mesh resources (RSCF type 0, sub 5: "Name", "L1#Name", "L2#Name" for the
 * lower details) and HCAN animation clips.  Meshes are rigid: each part rides one bone (part i on bone i), so a pose is one
 * transform per bone, no vertex skinning.  Everything is converted to engine axes (asura.h). */
#ifndef AK_MODEL_H
#define AK_MODEL_H
#include "asura.h"

typedef struct { f32 x, y, z, w; } ak_quat;
typedef struct {
    u32 name_hash; const char *name;
    u32 nbones;
    s16 *parent;                       /* -1 = root */
    f32 (*bind_t)[3]; ak_quat *bind_q; /* local bind pose (relative to the parent) */
    f32 (*world_t)[3]; ak_quat *world_q;  /* bind pose in model space */
} ak_skeleton;

typedef struct {
    u16 bone;                          /* the bone this part rides */
    s16 texture;                       /* index into the level's textures; -1 = none / invisible */
    s32 flags;                         /* the part's material flags (asura.h AK_MAT_*) */
    u32 first, count;                  /* index range */
} ak_model_part;

/* a marker (HMPT): a named point riding a bone, in that bone's space - where heads, weapons ("gun"), muzzles ("muz"), engines ("eng"),
 * hands, feet and effects attach.  HMPT v1: u32 count, model name (padded), count x { f32 t[3], f32 rot[3][3] (rows), u32 bone, name
 * (padded) }; converted to engine axes like the bones (S R S, S t with S = diag(1,-1,-1)). */
typedef struct { const char *name; u32 hash; u16 bone; f32 m[12]; } ak_marker;

typedef struct {
    const char *name; u32 base_hash;   /* hash of the name without the "Ln#" prefix: groups the details of one model */
    u32 hash;                          /* the mesh's own name hash (its first word): how entities refer to it */
    s32 lod_next;                      /* the next lower detail of the same model (-1 = none) */
    u8 lod;                            /* 0 = full detail, 1, 2 = lower */
    s32 skeleton;                      /* index into the level's skeletons, -1 = none (parts at the origin) */
    ak_model_part *parts; u32 nparts;
    ak_vtx *vtx; u32 nvtx;             /* in the part's bone space */
    u32 *idx; u32 nidx;
    f32 radius;                        /* bounding sphere of the bind pose, around the model origin */
    f32 bmin[3], bmax[3];              /* bind-pose box in model space */
    ak_marker *markers; u32 nmarkers;  /* shared by the model's levels of detail */
    struct ak_skin_w { u8 bone[4], w[4]; } *skin;   /* weighted meshes (v2): per vertex, skeleton bones and weights (sum 128); the
                                                     * vertices are then in model space, the bind pose (NULL: rigid parts) */
} ak_model;

/* animation clip (HCAN v5).  One channel per bone in the skeleton's order (plus a root-motion channel when flagged); every key is the
 * bone's absolute local transform.  Rotations are packed in 32 bits ("smallest three": three 10-bit components scaled by 1/sqrt2 and a
 * 2-bit index; index i drops component (i+3) mod 4 of (x, y, z, w), the stored three follow it cyclically).  Key times are u16 over
 * the clip's duration.  Position keys use the rotation keys' times when the counts match; one key = constant. */
typedef struct { u16 rot_count, rot_first, pos_count, pos_first; } ak_anim_channel;
typedef struct {
    const char *name; u32 name_hash;
    u32 nbones, nchannels;             /* channels = bones (+1 root-motion channel) */
    u32 flags; f32 duration;
    ak_anim_channel *chan;
    ak_quat *rot; u16 *rtime;          /* decoded at load, engine axes */
    f32 (*pos)[3]; u32 npos, nrot;
} ak_anim_clip;

typedef struct {
    ak_model *models; u32 nmodels;
    ak_skeleton *skels; u32 nskels;
    ak_anim_clip *clips; u32 nclips;
} ak_model_set;

/* a clip's pose at time t (seconds, wrapped when loop): local rotation and translation per bone (skeleton order).  Bones the clip
 * has no channel for (or a channel without keys: upper-body overlay clips) keep the skeleton's bind pose. */
void ak_anim_sample(const ak_anim_clip *c, const ak_skeleton *s, f32 t, bool loop, ak_quat *lq, f32 (*lt)[3]);
/* model-space 3x4 matrices from local transforms */
void ak_skeleton_pose_matrices(const ak_skeleton *s, const ak_quat *lq, const f32 (*lt)[3], f32 (*m)[12]);

/* all models and skeletons of a level file (textures resolved against the level's) */
bool ak_models_load(const ak_level *l, ak_arena *a, ak_model_set *out);
s32  ak_models_find(const ak_model_set *s, const char *name);
/* the mesh's long axis (the principal axis of its vertices, pointing to +y) and the point where it leaves the mesh at that end:
   where a lightsaber's blade starts and the way it runs (the hilt lies slanted in its model space) */
void ak_model_long_axis(const ak_model *m, f32 end[3], f32 dir[3]);
const ak_marker *ak_model_marker(const ak_model *m, const char *name);       /* case-insensitive; NULL = none */
/* a marker's model-space matrix (3x4 rows) from its bone's posed matrix */
void ak_marker_matrix(const f32 bone[12], const ak_marker *mk, f32 out[12]);
/* model-space transform of every bone for the bind pose: 3x4 rows (rotation | translation), engine axes */
void ak_skeleton_bind_matrices(const ak_skeleton *s, f32 (*m)[12]);
#endif
