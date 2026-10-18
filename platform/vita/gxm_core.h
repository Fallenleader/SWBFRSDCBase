#pragma once
/* Native GXM device layer for the PS Vita port: display (960x544, triple-buffered), GPU memory, runtime shader compilation with an
 * on-card cache, frame scratch memory, and a 2D batcher (textured / solid quads, text) used by the platform's own screens.
 * The game renderer is built on the same device (one context, one render target, one depth/stencil surface). */
#include <stdint.h>
#include <stddef.h>
#include <psp2/gxm.h>

#define GXM_W 960
#define GXM_H 544

int  gxm_init(const char *shader_cache_dir);          /* 0 = ok; sets the error text otherwise */
const char *gxm_error(void);
SceGxmContext *gxm_ctx(void);
SceGxmShaderPatcher *gxm_patcher(void);

/* GPU-visible memory.  gxm_alloc: persistent (cdram=1 video RAM, 0 main RAM, uncached).  gxm_frame_alloc: scratch for the frame being
 * built (vertex / index / uniform data); valid until the GPU has finished that frame. */
void *gxm_alloc(size_t size, size_t align, int cdram);
void  gxm_free(void *p);
void *gxm_frame_alloc(size_t size, size_t align);

/* Shaders: Cg source -> GXM program, compiled once with the system compiler (ur0:data/libshacccg.suprx) and cached on the card. */
const SceGxmProgram *gxm_shader(const char *cg_source, int fragment);

/* Frame: begin a scene on the next display buffer (everything cleared to clear_abgr), end it and queue it for display. */
void gxm_begin_frame(uint32_t clear_abgr);
void gxm_end_frame(void);
const SceGxmColorSurface *gxm_color_surface(void);
const SceGxmDepthStencilSurface *gxm_depth_surface(void);

/* Textures */
typedef struct { SceGxmTexture tex; void *mem; int w, h; } gxm_tex_t;
int  gxm_tex_rgba(gxm_tex_t *t, const uint32_t *rgba, int w, int h, int linear);   /* RGBA8 (byte order R,G,B,A) */
int  gxm_tex_alpha(gxm_tex_t *t, const uint8_t *a, int w, int h);                   /* 8-bit coverage: white with alpha */
void gxm_tex_free(gxm_tex_t *t);

/* 2D drawing in screen pixels (0,0 top left .. 960,544).  Colours are 0xAABBGGRR. */
void ui_quad(const gxm_tex_t *t, float x, float y, float w, float h, float u0, float v0, float u1, float v1, uint32_t abgr);
void ui_rect(float x, float y, float w, float h, uint32_t abgr);
float ui_text(float x, float y, float scale, uint32_t abgr, const char *s);           /* returns the pen x after the text */
float ui_text_width(const char *s, float scale);
void ui_flush(void);
