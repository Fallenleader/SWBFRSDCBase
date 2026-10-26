/* Settings of the platform layer (renderer/audio options).  Values come from rs_platform_setting(): environment variables on
 * Linux, ux0:data/RS/settings.txt on the Vita.  No game patches: the decompiled game runs unmodified. */
#include "psp_impl.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int rs_fps_choice = 30;
const char *rs_platform_setting(const char *key);
static int env(const char *k, int d){ const char *e = rs_platform_setting(k); return e ? atoi(e) : d; }
/* Frame rate.  The game caps itself at 20 fps: func_08A69140 copies the 20.0 at 0x08B1CBB8 into the cap at 0x08B285CC when the
 * byte at 0x08B1CBBC is set, and the frame loop spins until 1/cap has passed (a cap of 0 = no wait).  Gameplay advances by the
 * measured frame time, so other rates keep the game's speed.  The cap is cleared on every vblank and the platform layer paces
 * frames instead (hle.c pace_frame), at RS_FPS: 30 or 60 (anything else is rounded to one of them). */
u32 rs_patch_fps(void){ static int v = -1;
    if (v < 0) { int f = env("RS_FPS", 30);
#ifdef __vita__
        f = f > 45 ? 60 : 30;                                                    /* the Vita: 30 or 60 */
#endif
        v = f; }
    return (u32)v; }
void rs_patch_apply_fps_cap(void){
    extern u32 rs_image_w[]; u8 *img = (u8 *)rs_image_w;
    const u32 flag = 0x08B1CBBCu - 0x08804000u, cap = 0x08B285CCu - 0x08804000u;
    if (img[flag]) { u32 z = 0; memcpy(img + cap, &z, 4); } }
void rs_patch_vblank(void){}
const char *rs_weapons_patch_file(const char *rel, const char *host);
const char *rs_patch_file(const char *rel, const char *host){ return rs_weapons_patch_file(rel, host); }   /* blueprints.c (weapons.txt) */
u32 rs_patch_heap_top(u32 t){ return t; }
u32 rs_patch_audio(void){ return (u32)env("RS_AUDIO", 1); }
int rs_patch_volume(void){ return 100; }
u32 rs_patch_fxaa(void){ return (u32)env("RS_FXAA", 1); }               /* FXAA on the scaled picture */
u32 rs_patch_hw_transform(void){ return (u32)env("RS_HW_TL", 1); }
u32 rs_patch_res_scale(void){ return (u32)env("RS_RES_SCALE", 2); }    /* internal resolution: 1-3 x the PSP 480x272 */
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

/* the PSP scratchpad (16 KB of fast RAM at 0x00010000 on the PSP; src/game/rs_base.h) */
u8 rs_scratchpad[0x4000] __attribute__((aligned(64)));

/* GPU-visible memory regions (see psp_impl.h) */
rs_region_t rs_regions[RS_MAX_REGIONS]; int rs_nregions; u32 rs_vram_base = 0x04000000u, rs_vram_size = 0x00800000u;
void rs_region_add(u32 base, u32 size){
    if (rs_nregions >= RS_MAX_REGIONS) return;
    for (int i = 0; i < rs_nregions; i++) if (rs_regions[i].base == base && rs_regions[i].size == size) return;     /* already registered */
    for (int i = 0; i < rs_nregions; i++) {           /* low 28 bits must not overlap, or GPU addresses would be ambiguous */
        u32 a0 = base & 0x0FFFFFFFu, b0 = rs_regions[i].base & 0x0FFFFFFFu;
        if (a0 < b0 + rs_regions[i].size && b0 < a0 + size) fprintf(stderr, "[MEM] CRITICAL: GPU regions %08x and %08x overlap in their low 28 bits\n", base, rs_regions[i].base); }
    rs_regions[rs_nregions].base = base; rs_regions[rs_nregions].size = size; __sync_synchronize(); rs_nregions++; }
