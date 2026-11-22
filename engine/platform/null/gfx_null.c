/* Headless renderer: accepts everything, draws nothing (see plat_null.c). */
#include "../../render/ak_gfx.h"
#include <stdlib.h>
struct ak_gfx_buf { int x; }; struct ak_gfx_tex { int x; };
static ak_gfx_buf one_buf; static ak_gfx_tex one_tex;
bool ak_gfx_init(const ak_gfx_config *c) { (void)c; return true; }
void ak_gfx_shutdown(void) {}
void ak_gfx_size(int *w, int *h) { *w = 960; *h = 544; }
const char *ak_gfx_name(void) { return "null"; }
ak_gfx_buf *ak_gfx_vertices(const ak_vtx *v, u32 n) { (void)v; (void)n; return &one_buf; }
ak_gfx_buf *ak_gfx_indices(const u32 *i, u32 n) { (void)i; (void)n; return &one_buf; }
ak_gfx_tex *ak_gfx_texture(const ak_texture *t) { (void)t; return &one_tex; }
ak_gfx_tex *ak_gfx_texture_palette(ak_gfx_tex *b, const ak_texture *t, const u32 *p) { (void)b; (void)t; (void)p; return &one_tex; }
void ak_gfx_free_buf(ak_gfx_buf *b) { (void)b; }
void ak_gfx_free_tex(ak_gfx_tex *t) { (void)t; }
void ak_gfx_wait_idle(void) {}
void ak_gfx_begin(u32 c, const ak_m4 *vp, const ak_gfx_env *e) { (void)c; (void)vp; (void)e; }
void ak_gfx_set_transform(const ak_m4 *m) { (void)m; }
void ak_gfx_set_tint(const f32 *c) { (void)c; }
void ak_gfx_set_cull(bool on) { (void)on; }
void ak_gfx_set_light(const f32 *s) { (void)s; }
void ak_gfx_set_uv_offset(const f32 *u) { (void)u; }
void ak_gfx_set_fog_range(const f32 *s) { (void)s; }
void ak_gfx_draw(ak_pipe p, ak_gfx_tex *t, ak_gfx_buf *vb, ak_gfx_buf *ib, u32 f, u32 n) { (void)p; (void)t; (void)vb; (void)ib; (void)f; (void)n; }
void ak_gfx_draw_immediate(ak_pipe p, ak_gfx_tex *t, const ak_vtx *v, u32 n) { (void)p; (void)t; (void)v; (void)n; }
void ak_gfx_text(f32 x, f32 y, u32 c, const char *s) { (void)x; (void)y; (void)c; (void)s; }
void ak_gfx_end(ak_gfx_stats *o) { if (o) { o->draws = o->tris = 0; o->cpu_submit_ms = o->gpu_wait_ms = 0; } }
bool ak_gfx_screenshot(const char *path) { (void)path; return true; }
