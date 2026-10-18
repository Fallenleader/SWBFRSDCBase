#pragma once
/* Native GU: the game's statically linked libgu (the only code in the executable that programs the PSP GPU, see docs/NATIVE_GU.md)
 * implemented natively.  Each GU entry point of the game (func_08A9xxxx in src/game/game_28.c) calls the rgu_* function of the
 * same meaning; no PSP GPU (GE) command words are written and nothing interprets them.  The original decompiled bodies stay in the
 * source under RS_GE_REFERENCE (build with -DRS_GE_REFERENCE to get the GE command-list path back, for comparison).
 *
 * Model: the GU calls of a frame are recorded on the game thread as typed operations (state changes, draws with their vertex data
 * copied, clears, image copies) into a native command buffer; sceGuFinish hands the buffer to the renderer thread, which applies
 * the state and issues the draws to the platform renderer (gfx.h: GXM on the Vita, GL in the Linux test harness). */
#include <stdint.h>
typedef uint32_t rgu_u32;
typedef uint64_t rgu_u64;

#ifdef __cplusplus
extern "C" {
#endif
/* frame / lists */
void rgu_init_sync(rgu_u32 a0, rgu_u32 a1, rgu_u32 a2, rgu_u32 a3, rgu_u32 t0, rgu_u32 t1, rgu_u32 t2, rgu_u32 t3);   /* 08A972CC */
void rgu_start(rgu_u32 cid, rgu_u32 list, rgu_u32 size);                    /* 08A973B0 sceGuStart */
rgu_u32 rgu_finish_id(rgu_u32 id);                                          /* 08A974BC sceGuFinishId (08A974A0 sceGuFinish) */
void rgu_signal(rgu_u32 sig, rgu_u32 arg);                                  /* 08A975A4 */
void rgu_call_list(rgu_u32 list);                                           /* 08A9765C */
void rgu_send_list(rgu_u32 mode, rgu_u32 list, rgu_u32 ctx, rgu_u32 a3, rgu_u32 t0);   /* 08A976D4 */
rgu_u32 rgu_update_stall(void);                                             /* 08A97780 */
rgu_u32 rgu_sync(rgu_u32 mode, rgu_u32 what);                               /* 08A977CC */
rgu_u64 rgu_enable(rgu_u32 state);                                          /* 08A9789C */
rgu_u64 rgu_disable(rgu_u32 state);                                         /* 08A97960 */
void rgu_end_object(void);                                                  /* 08A97A24 */
/* drawing */
rgu_u64 rgu_draw_array(rgu_u32 prim, rgu_u32 vtype, rgu_u32 count, rgu_u32 indices, rgu_u32 vertices);           /* 08A97AE8 */
void rgu_draw_array_n(rgu_u32 prim, rgu_u32 vtype, rgu_u32 count, rgu_u32 n, rgu_u32 indices, rgu_u32 vertices); /* 08A97BB8 */
void rgu_draw_bezier(rgu_u32 vtype, rgu_u32 uc, rgu_u32 vc, rgu_u32 indices, rgu_u32 vertices);                   /* 08A97CAC */
void rgu_draw_spline(rgu_u32 vtype, rgu_u32 uc, rgu_u32 vc, rgu_u32 ue, rgu_u32 ve, rgu_u32 indices, rgu_u32 vertices); /* 08A97D84 */
void rgu_sprite(rgu_u32 x, rgu_u32 y, rgu_u32 z, rgu_u32 u, rgu_u32 v, rgu_u32 flip, rgu_u32 flip2);             /* 08A97E6C */
void rgu_clear(rgu_u32 flags);                                              /* 08A9806C */
void rgu_copy_image(rgu_u32 psm, rgu_u32 sx, rgu_u32 sy, rgu_u32 w, rgu_u32 h, rgu_u32 srcw, rgu_u32 src, rgu_u32 dx, rgu_u32 sp_in); /* 08A982C0 */
/* frame buffers */
void rgu_draw_buffer_list(rgu_u32 psm, rgu_u32 fbp, rgu_u32 fbw);           /* 08A9844C */
void rgu_depth_buffer(rgu_u32 zbp, rgu_u32 zbw);                            /* 08A984A0 */
void rgu_apply_draw_buffer(void);                                           /* 08A9971C */
/* transform / viewport */
void rgu_viewport(rgu_u32 cx, rgu_u32 cy, rgu_u32 w, rgu_u32 h);            /* 08A98670 */
void rgu_depth_range(rgu_u32 near_, rgu_u32 far_);                          /* 08A9871C */
void rgu_offset(rgu_u32 x, rgu_u32 y);                                      /* 08A9883C */
void rgu_front_face(rgu_u32 order);                                         /* 08A98878 */
void rgu_shade_model(rgu_u32 mode);                                         /* 08A988A0 */
void rgu_set_matrix(rgu_u32 type, rgu_u32 m);                               /* 08A992E0 */
void rgu_bone_matrix(rgu_u32 index, rgu_u32 m);                             /* 08A99240 */
/* lighting / material */
void rgu_ambient(rgu_u32 color);                                            /* 08A988C4 */
void rgu_color_material(rgu_u32 comps);                                     /* 08A988F8 */
void rgu_material(rgu_u32 comps, rgu_u32 color);                            /* 08A9891C */
void rgu_light(rgu_u32 light, rgu_u32 type, rgu_u32 comps, rgu_u32 pos);    /* 08A989B4 */
void rgu_light_att(rgu_u32 light, float k0, float k1, float k2);            /* 08A98AD8 */
void rgu_light_color(rgu_u32 light, rgu_u32 comps, rgu_u32 color);         /* 08A98B3C */
/* texturing */
void rgu_tex_level_mode(rgu_u32 mode, float bias);                          /* 08A98C6C */
void rgu_tex_slope(float slope);                                            /* 08A98CBC */
void rgu_tex_mode(rgu_u32 tpsm, rgu_u32 maxmips, rgu_u32 multiclut, rgu_u32 swizzle);   /* 08A98CE4 */
void rgu_tex_filter(rgu_u32 min, rgu_u32 mag);                              /* 08A98D28 */
void rgu_tex_func(rgu_u32 tfx, rgu_u32 tcc);                                /* 08A98D54 */
void rgu_tex_wrap(rgu_u32 u, rgu_u32 v);                                    /* 08A98D8C */
void rgu_tex_flush(void);                                                   /* 08A98DB8 */
void rgu_tex_image(rgu_u32 level, rgu_u32 w, rgu_u32 h, rgu_u32 tbw, rgu_u32 tbp);      /* 08A98DD4 */
void rgu_tex_scale(float u, float v);                                       /* 08A98E60 */
void rgu_tex_offset(float u, float v);                                      /* 08A98E9C */
void rgu_clut_mode(rgu_u32 cpsm, rgu_u32 shift, rgu_u32 mask, rgu_u32 start);           /* 08A98ED8 */
void rgu_clut_load(rgu_u32 blocks, rgu_u32 cbp);                            /* 08A98F20 */
/* fragment */
void rgu_fog(rgu_u32 color, float near_, float far_);                       /* 08A98F6C */
void rgu_scissor(rgu_u32 x, rgu_u32 y, rgu_u32 w, rgu_u32 h);               /* 08A98FF8 */
void rgu_color_func(rgu_u32 func, rgu_u32 color, rgu_u32 mask);             /* 08A99078 */
void rgu_alpha_func(rgu_u32 func, rgu_u32 ref, rgu_u32 mask);               /* 08A990BC */
void rgu_stencil_func(rgu_u32 func, rgu_u32 ref, rgu_u32 mask);             /* 08A990F8 */
void rgu_stencil_op(rgu_u32 fail, rgu_u32 zfail, rgu_u32 zpass);            /* 08A99134 */
void rgu_depth_func(rgu_u32 func);                                          /* 08A99168 */
rgu_u32 rgu_depth_mask(rgu_u32 mask);                                       /* 08A9918C */
void rgu_blend_func(rgu_u32 op, rgu_u32 src, rgu_u32 dst, rgu_u32 fixa, rgu_u32 fixb);  /* 08A991B4 */
void rgu_pixel_mask(rgu_u32 mask);                                          /* 08A99208 */
#ifdef __cplusplus
}
#endif
