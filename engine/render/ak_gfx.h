/* The renderer back-end interface.  One implementation per device (gfx_gxm.c on Vita, gfx_gl.c on desktop for now; citro3d,
 * Vulkan and the PS4/PS5 back ends follow).  Built around what the GPUs are good at: geometry uploaded once into GPU memory,
 * few large indexed draws, a handful of fixed pipelines, per-frame constants set once.  Nothing here describes PSP state. */
#ifndef AK_GFX_H
#define AK_GFX_H
#include "../core/ak_core.h"
#include "../core/ak_math.h"
#include "../assets/asura.h"

typedef struct ak_gfx_buf ak_gfx_buf;
typedef struct ak_gfx_tex ak_gfx_tex;

/* pipelines for level geometry (vertex format ak_vtx).  Colour = texture x vertex colour, then fog. */
typedef enum {
    AK_PIPE_OPAQUE,          /* depth write, no blending */
    AK_PIPE_CUTOUT,          /* as opaque, texels with alpha < 0.5 discarded (foliage, fences) */
    AK_PIPE_LAYER,           /* blended second-texture layer: alpha = texture alpha x vertex alpha, depth test equal-or-less, no depth write */
    AK_PIPE_COUNT
} ak_pipe;

typedef struct { int width, height; bool vsync; const char *cache_dir; const char *title; } ak_gfx_config;
typedef struct { f32 fog_rgb[3]; f32 fog_start, fog_end; f32 colour_scale; } ak_gfx_env;   /* fog_end <= fog_start: no fog; vertex colour x colour_scale */
typedef struct { u32 draws, tris; f32 cpu_submit_ms, gpu_wait_ms; } ak_gfx_stats;

bool ak_gfx_init(const ak_gfx_config *c);
void ak_gfx_shutdown(void);
void ak_gfx_size(int *w, int *h);
const char *ak_gfx_name(void);                                   /* "GXM 960x544", "OpenGL 3.3 ..." */

ak_gfx_buf *ak_gfx_vertices(const ak_vtx *v, u32 n);           /* static, GPU memory */
ak_gfx_buf *ak_gfx_indices(const u32 *i, u32 n);
ak_gfx_tex *ak_gfx_texture(const ak_texture *t);                /* from the game's palette image (the back end picks the format) */
void ak_gfx_free_buf(ak_gfx_buf *b);
void ak_gfx_free_tex(ak_gfx_tex *t);
void ak_gfx_wait_idle(void);                                     /* before freeing what the GPU may still read */

void ak_gfx_begin(u32 clear_rgba, const ak_m4 *view_proj, const ak_gfx_env *env);
void ak_gfx_draw(ak_pipe p, ak_gfx_tex *t, ak_gfx_buf *vb, ak_gfx_buf *ib, u32 first, u32 count);
void ak_gfx_text(f32 x, f32 y, u32 rgba, const char *s);        /* screen pixels, 8x16 glyphs; drawn over the frame at end */
void ak_gfx_end(ak_gfx_stats *out);                              /* submit + present (paced by the display when vsync) */
bool ak_gfx_screenshot(const char *path);                        /* last presented frame as PPM; false where unsupported */
#endif
