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

typedef struct {
    const char *name; u32 base_hash;   /* hash of the name without the "Ln#" prefix: groups the details of one model */
    u8 lod;                            /* 0 = full detail, 1, 2 = lower */
    s32 skeleton;                      /* index into the level's skeletons, -1 = none (parts at the origin) */
    ak_model_part *parts; u32 nparts;
    ak_vtx *vtx; u32 nvtx;             /* in the part's bone space */
    u32 *idx; u32 nidx;
    f32 radius;                        /* bounding sphere of the bind pose, around the model origin */
    f32 bmin[3], bmax[3];              /* bind-pose box in model space */
} ak_model;

typedef struct {
    ak_model *models; u32 nmodels;
    ak_skeleton *skels; u32 nskels;
} ak_model_set;

/* all models and skeletons of a level file (textures resolved against the level's) */
bool ak_models_load(const ak_level *l, ak_arena *a, ak_model_set *out);
s32  ak_models_find(const ak_model_set *s, const char *name);
/* model-space transform of every bone for the bind pose: 3x4 rows (rotation | translation), engine axes */
void ak_skeleton_bind_matrices(const ak_skeleton *s, f32 (*m)[12]);
#endif
