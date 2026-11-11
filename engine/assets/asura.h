/* Loaders for the game's own files (Rebellion's Asura engine, PSP build).  PSP formats stop here: everything these return is
 * a native structure in engine axes.
 *
 * Engine axes: right handed, +Y up, 1 unit = 1 m.  The game's files are Y down: positions and normals become (x, -y, z), which
 * mirrors the scene, so triangle winding is reversed on load.  Every loader that reads positions uses ak_from_game(). */
#ifndef AK_ASURA_H
#define AK_ASURA_H
#include "../core/ak_core.h"

/* ---- containers: "Asura   " then chunks [4CC tag, u32 size incl. 16-byte header, u32 version, u32 flags] + body */
typedef struct {
    char tag[5]; u32 version, flags;
    const u8 *body; u32 size;          /* body only (header excluded) */
    u32 offset;                        /* of the chunk header in the file */
} ak_chunk;
bool ak_asura_check(const ak_blob *f);
bool ak_asura_next(const ak_blob *f, u32 *pos, ak_chunk *out);   /* *pos = 8 to start */
#define AK_TAG(a, b, c, d) ((u32)(a) | ((u32)(b) << 8) | ((u32)(c) << 16) | ((u32)(d) << 24))
static inline u32 ak_chunk_tag(const ak_chunk *c) { return AK_TAG(c->tag[0], c->tag[1], c->tag[2], c->tag[3]); }

/* ---- RSCF: an embedded resource (texture, level geometry, model, sound, ...) */
enum { AK_RSCF_MESH = 0, AK_RSCF_TEXTURE = 2, AK_RSCF_SOUND = 3 };
typedef struct { u32 type, sub; const char *name; const u8 *data; u32 size; } ak_rscf;
bool ak_rscf_parse(const ak_chunk *c, ak_rscf *out);

/* ---- name lists (TEXT) and material lists (MTRL v5) */
typedef struct { const char **names; u32 count; } ak_names;
bool ak_text_parse(const ak_chunk *c, ak_arena *a, ak_names *out);
typedef struct { s32 tex[6]; s32 flags, mode, extra; s32 texture; /* index into the level's textures, -1 = none */ } ak_material;
bool ak_mtrl_parse(const ak_chunk *c, ak_arena *a, ak_material **out, u32 *count);

/* ---- textures: palette images, de-swizzled into plain rows.  Kept indexed: GXM samples P4/P8 directly, the 3DS and desktop
 * back ends expand or convert at upload/cook time (ak_texture_expand). */
typedef struct {
    u32 name_hash; const char *name;
    u16 width, height; u8 bpp;         /* 4 or 8 */
    u8 levels;                         /* mip levels incl. the base */
    u8 *pixels[8];                     /* per level, rows of width*bpp/8 bytes; 4-bit: low nibble = left pixel */
    u32 palette[256];                  /* RGBA8888, R in the low byte */
    u32 sub;                           /* the resource's flags word (unknown meaning; kept for the cooker) */
} ak_texture;
bool ak_texture_parse(const ak_rscf *r, ak_arena *a, ak_texture *out);
void ak_texture_expand(const ak_texture *t, int level, u32 *rgba);        /* width>>level * height>>level pixels */

/* ---- level geometry (the RSCF mesh named "Env"), as indexed triangle lists grouped for the renderer */
typedef struct { f32 pos[3]; f32 uv[2]; s8 nrm[4]; u8 col[4]; } ak_vtx;   /* 28 bytes; col.a = blend weight on the blend layer */
typedef struct { f32 min[3], max[3]; } ak_aabb;
typedef struct {
    u16 object;                        /* level object (EMOD entry): the culling unit */
    u8 layer;                          /* 0 = opaque, 1 = blended second-texture layer (drawn after the opaque pass) */
    u8 pad;
    u32 material;                      /* index into the level's materials (0xFFFFFFFF = none) */
    u32 first, count;                  /* index range */
} ak_batch;
typedef struct {
    ak_vtx *vtx; u32 nvtx;
    u32 *idx; u32 nidx;
    ak_batch *batch; u32 nbatch;       /* sorted by (layer, object, material) */
    ak_aabb *obj_bounds; u32 nobj;
    u32 src_strips, src_verts;         /* as stored (for checks against tools/asura) */
} ak_level_geom;
bool ak_env_parse(const ak_rscf *r, ak_arena *a, ak_level_geom *out);

/* ---- a whole level file */
typedef struct {
    ak_blob file;
    ak_texture *tex; u32 ntex; u32 tex_unsupported;
    ak_names env_names;                /* the environment's texture names */
    ak_material *mat; u32 nmat;        /* the environment's materials */
    ak_level_geom geom;
    u32 nchunks;
} ak_level;
bool ak_level_load(const char *path, ak_arena *a, ak_level *out);       /* a file on disk (tools) */
bool ak_level_parse(const ak_blob *file, ak_arena *a, ak_level *out);  /* a file already read (ak_vfs) */
s32  ak_level_find_texture(const ak_level *l, const char *name);

static inline void ak_from_game(const f32 *g, f32 *e) { e[0] = g[0]; e[1] = -g[1]; e[2] = g[2]; }
#endif
