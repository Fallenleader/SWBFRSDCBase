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

/* pipelines for level geometry (vertex format ak_vtx), in drawing order.  Colour = texture x vertex colour, then fog. */
typedef enum {
    AK_PIPE_OPAQUE,          /* depth write, no blending */
    AK_PIPE_CUTOUT,          /* as opaque, texels with alpha < 0.5 discarded (foliage, fences, grills) */
    AK_PIPE_OVERLAY,         /* as cutout, painted over a coplanar surface: drawn after it, pulled toward the camera (depth bias) */
    AK_PIPE_LAYER,           /* blended second-texture layer: alpha = texture alpha x vertex alpha; no depth write */
    AK_PIPE_BLEND,           /* alpha-blended surfaces and decals (scorch marks, shadows); no depth write, depth bias */
    AK_PIPE_ADD,             /* additive glow (laser gates, light beams, holograms); no depth write */
    AK_PIPE_BEAM,            /* procedural glow (laser bolts, flashes, light columns): no texture; the shape is worked out per pixel
                              * from the UV, which holds the position across the beam in half-widths (length(uv) = distance from the
                              * core; 0 = centre, 1 = edge): a white-hot core and a coloured falloff, premultiplied blending (it
                              * darkens what is behind it a little, so the colour reads on snow), no depth write */
    AK_PIPE_HUD,             /* the 2D overlay (HUD sprites, the game's fonts): alpha-blended, no depth test or write, no fog, the
                              * vertex colour as it is; drawn after the 3D with an orthographic transform (ak_m4_ortho2d) */
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
/* buffers over data the caller keeps, unchanged, until the buffer is freed (32-byte aligned): a back end whose GPU reads the CPU's
 * memory (the GameCube's GX: AK_GFX_KEEPS) draws from it in place instead of copying; the others copy, as the two above. */
#ifdef AK_GFX_KEEPS
ak_gfx_buf *ak_gfx_vertices_kept(const ak_vtx *v, u32 n);
ak_gfx_buf *ak_gfx_indices_kept(const u32 *i, u32 n);
ak_gfx_buf *ak_gfx_indices16_kept(const u16 *i, u32 n);   /* (16-bit indices: the models') */
ak_gfx_tex *ak_gfx_texture_kept(ak_texture *t);   /* the texture's pixels become the GPU's (re-ordered in place): not read again */
#else
#define ak_gfx_texture_kept ak_gfx_texture
#define ak_gfx_vertices_kept ak_gfx_vertices
#define ak_gfx_indices_kept ak_gfx_indices
#endif
ak_gfx_tex *ak_gfx_texture(const ak_texture *t);                /* from the game's palette image (the back end picks the format) */
/* the same image with another palette (personalisation colours): shares the pixels where the back end can (GXM) */
ak_gfx_tex *ak_gfx_texture_palette(ak_gfx_tex *base, const ak_texture *t, const u32 *palette);
void ak_gfx_free_buf(ak_gfx_buf *b);
void ak_gfx_free_tex(ak_gfx_tex *t);
void ak_gfx_wait_idle(void);                                     /* before freeing what the GPU may still read */

void ak_gfx_begin(u32 clear_rgba, const ak_m4 *view_proj, const ak_gfx_env *env);
/* the clip-space transform of the draws that follow (model x view x projection); NULL = back to the frame's view_proj */
void ak_gfx_set_transform(const ak_m4 *mvp);
/* the projection part of the transforms that follow (a perspective of ak_m4_perspective's form, possibly scaled / offset in x and y
 * and squashed in z), for back ends whose hardware wants the projection apart from the model-view (the GameCube's GX: model-view =
 * projection^-1 x mvp).  NULL = none: the transforms are affine (2D, the front end).  Kept across frames; others ignore it. */
void ak_gfx_set_projection(const ak_m4 *proj);
/* a colour multiplied into the vertex colour of the draws that follow (holograms tinted by side); NULL = white.  Reset each frame. */
void ak_gfx_set_tint(const f32 *rgba);
/* back-face culling for the draws that follow (on at ak_gfx_begin; the setting AK_CULL, default 0, decides whether it does anything,
 * because the game's level geometry also has single-sided panels meant to be seen from both sides).  Even when on, only the solid
 * pipelines (opaque, overlay) cull: see-through surfaces (cutout, layer, blend, add) are drawn from both sides, as the game draws them.  Models turn it off:
 * their meshes are partly single-sided panels meant to be seen from both sides. */
void ak_gfx_set_cull(bool on);
/* object lighting for the draws that follow (the game's, R.1): 12 floats = ambient rgb, then per channel (r, g, b) a direction in the
 * draw's model space scaled by that channel's strength; colour = ambient + max(0, n . dir) per channel, in place of the vertex colour
 * (then x the frame's colour_scale, the game's colour doubling).  NULL = off.  Reset each frame. */
void ak_gfx_set_light(const f32 *sh);
/* a texture-coordinate offset for the draws that follow (the game's scrolling textures, TXAN); NULL = none.  Reset each frame.
 * Back ends without it draw the texture still. */
void ak_gfx_set_uv_offset(const f32 *uv);
/* the fog for the draws that follow: { start, end } (end <= start: none), NULL = the frame's (ak_gfx_begin).  The sky uses it: the
 * game fogs its sky by the FOG chunk's sky strength, 0 on most levels. */
void ak_gfx_set_fog_range(const f32 *se);
void ak_gfx_draw(ak_pipe p, ak_gfx_tex *t, ak_gfx_buf *vb, ak_gfx_buf *ib, u32 first, u32 count);
/* this frame only: a triangle list copied into the back end's per-frame memory (laser bolts, effects, debug shapes) */
void ak_gfx_draw_immediate(ak_pipe p, ak_gfx_tex *t, const ak_vtx *v, u32 count);
void ak_gfx_text(f32 x, f32 y, u32 rgba, const char *s);        /* screen pixels, 8x16 glyphs; drawn over the frame at end */
void ak_gfx_end(ak_gfx_stats *out);                              /* submit + present (paced by the display when vsync) */
bool ak_gfx_screenshot(const char *path);                        /* last presented frame as PPM; false where unsupported */
#endif
