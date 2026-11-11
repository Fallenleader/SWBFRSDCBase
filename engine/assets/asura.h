/* Loaders for the game's own files (Rebellion's Asura engine, PSP build).  PSP formats stop here: everything these return is
 * a native structure in engine axes.
 *
 * Engine axes: right handed, +Y up, 1 unit = 1 m.  The game's files are Y down: positions and normals become (x, -y, z), which
 * mirrors the scene, so triangle winding is reversed on load.  Every loader that reads positions uses rs_from_game(). */
#ifndef RS_ASURA_H
#define RS_ASURA_H
#include "../core/rs_core.h"

/* ---- containers: "Asura   " then chunks [4CC tag, u32 size incl. 16-byte header, u32 version, u32 flags] + body */
typedef struct {
    char tag[5]; u32 version, flags;
    const u8 *body; u32 size;          /* body only (header excluded) */
    u32 offset;                        /* of the chunk header in the file */
} rs_chunk;
bool rs_asura_check(const rs_blob *f);
bool rs_asura_next(const rs_blob *f, u32 *pos, rs_chunk *out);   /* *pos = 8 to start */
#define RS_TAG(a, b, c, d) ((u32)(a) | ((u32)(b) << 8) | ((u32)(c) << 16) | ((u32)(d) << 24))
static inline u32 rs_chunk_tag(const rs_chunk *c) { return RS_TAG(c->tag[0], c->tag[1], c->tag[2], c->tag[3]); }

/* ---- RSCF: an embedded resource (texture, level geometry, model, sound, ...) */
enum { RS_RSCF_MESH = 0, RS_RSCF_TEXTURE = 2, RS_RSCF_SOUND = 3 };
typedef struct { u32 type, sub; const char *name; const u8 *data; u32 size; } rs_rscf;
bool rs_rscf_parse(const rs_chunk *c, rs_rscf *out);

/* ---- name lists (TEXT) and material lists (MTRL v5) */
typedef struct { const char **names; u32 count; } rs_names;
bool rs_text_parse(const rs_chunk *c, rs_arena *a, rs_names *out);
typedef struct { s32 tex[6]; s32 flags, mode, extra; s32 texture; /* index into the level's textures, -1 = none */ } rs_material;
bool rs_mtrl_parse(const rs_chunk *c, rs_arena *a, rs_material **out, u32 *count);

/* ---- textures: palette images, de-swizzled into plain rows.  Kept indexed: GXM samples P4/P8 directly, the 3DS and desktop
 * back ends expand or convert at upload/cook time (rs_texture_expand). */
typedef struct {
    u32 name_hash; const char *name;
    u16 width, height; u8 bpp;         /* 4 or 8 */
    u8 levels;                         /* mip levels incl. the base */
    u8 *pixels[8];                     /* per level, rows of width*bpp/8 bytes; 4-bit: low nibble = left pixel */
    u32 palette[256];                  /* RGBA8888, R in the low byte */
    u32 sub;                           /* the resource's flags word (unknown meaning; kept for the cooker) */
} rs_texture;
bool rs_texture_parse(const rs_rscf *r, rs_arena *a, rs_texture *out);
void rs_texture_expand(const rs_texture *t, int level, u32 *rgba);        /* width>>level * height>>level pixels */

/* ---- level geometry (the RSCF mesh named "Env"), as indexed triangle lists grouped for the renderer */
typedef struct { f32 pos[3]; f32 uv[2]; s8 nrm[4]; u8 col[4]; } rs_vtx;   /* 28 bytes; col.a = blend weight on the blend layer */
typedef struct { f32 min[3], max[3]; } rs_aabb;
typedef struct {
    u16 object;                        /* level object (EMOD entry): the culling unit */
    u8 layer;                          /* 0 = opaque, 1 = blended second-texture layer (drawn after the opaque pass) */
    u8 pad;
    u32 material;                      /* index into the level's materials (0xFFFFFFFF = none) */
    u32 first, count;                  /* index range */
} rs_batch;
typedef struct {
    rs_vtx *vtx; u32 nvtx;
    u32 *idx; u32 nidx;
    rs_batch *batch; u32 nbatch;       /* sorted by (layer, object, material) */
    rs_aabb *obj_bounds; u32 nobj;
    u32 src_strips, src_verts;         /* as stored (for checks against tools/asura) */
} rs_level_geom;
bool rs_env_parse(const rs_rscf *r, rs_arena *a, rs_level_geom *out);

/* ---- a whole level file */
typedef struct {
    rs_blob file;
    rs_texture *tex; u32 ntex; u32 tex_unsupported;
    rs_names env_names;                /* the environment's texture names */
    rs_material *mat; u32 nmat;        /* the environment's materials */
    rs_level_geom geom;
    u32 nchunks;
} rs_level;
bool rs_level_load(const char *path, rs_arena *a, rs_level *out);
s32  rs_level_find_texture(const rs_level *l, const char *name);

static inline void rs_from_game(const f32 *g, f32 *e) { e[0] = g[0]; e[1] = -g[1]; e[2] = g[2]; }
#endif
