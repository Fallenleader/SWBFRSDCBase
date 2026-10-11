/* TEST HARNESS ONLY: render/audio settings at defaults; no game patches (the decompiled game runs unmodified). */
#include "psp_impl.h"
#include <stdlib.h>
int rs_fps_choice = 30;
static int env(const char *k, int d){ const char *e = getenv(k); return e ? atoi(e) : d; }
u32 rs_patch_fps(void){ return (u32)env("RS_FPS", 30); }
void rs_patch_apply_fps_cap(void){}
void rs_patch_vblank(void){}
const char *rs_patch_file(const char *rel, const char *host){ (void)rel; (void)host; return 0; }
u32 rs_patch_heap_top(u32 t){ return t; }
u32 rs_patch_audio(void){ return (u32)env("RS_AUDIO", 1); }
int rs_patch_volume(void){ return 100; }
u32 rs_patch_fxaa(void){ return 0; }
u32 rs_patch_hw_transform(void){ return 1; }
u32 rs_patch_res_scale(void){ return 1; }
u32 rs_patch_shadows(void){ return 0; }
int rs_patch_shadow_res(void){ return 1024; }
int rs_patch_shadow_range(void){ return 40; }
int rs_patch_shadow_strength(void){ return 45; }
void rs_patch_shadow_sun(float *d){ d[0] = 0; d[1] = -1; d[2] = 0; }
u32 rs_patch_pbr(void){ return 0; }
void rs_patch_pbr_sun(float *c){ c[0] = c[1] = c[2] = 1; }
int rs_patch_tex_budget_mb(void){ return 512; }
int rs_patch_mod_tex_max(void){ return 4096; }
int rs_setting_int(const char *k, int d){ return env(k, d); }
void rc_dump_stack(sdkcall_t *c, const char *tag){ (void)c; (void)tag; }
