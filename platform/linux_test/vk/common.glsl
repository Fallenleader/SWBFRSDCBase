/* Vulkan renderer (gfx_vk.c): the per-draw parameters, one std140 block per batch in a ring buffer (dynamic offset).
 * Same meaning as the GL renderer's uniforms (gfx_gl.c), plus the ray-tracing parameters. */
layout(std140, set = 0, binding = 0) uniform Draw {
    vec4 cfg0;        /* x texture on, y texture function, z texture alpha used, w colour x2 */
    vec4 cfg1;        /* x alpha test function (1 = always), y reference */
    vec4 env, fog, mul, uvs;
    vec4 mvp[4]; vec4 wvz; vec4 wld[3]; vec4 wv[3];
    vec4 vp0, vp1, vp2, uvt, fogp, defc;
    vec4 mamb, mdif, memi, msca, lfl;
    vec4 lpos[4]; vec4 latt[4]; vec4 lspot[4]; vec4 la[4]; vec4 ld[4];
    vec4 shm[4];      /* camera space -> shadow map */
    vec4 shp;         /* 1/res, bias, strength, receive (1) */
    vec4 pbr;         /* x metal-roughness map, y normal map, z specular, w on */
    vec4 sun;         /* towards the sun, camera space */
    vec4 sunc;        /* sun colour */
    vec4 rt;          /* x 1 = ray-traced sun shadow, y 1 = ray-traced reflections, z ray length, w 1 = acceleration structure valid */
    vec4 vinv[3];     /* camera space -> world (rows, 3x4) */
    vec4 sunw;        /* towards the sun, world space */
    vec4 amb;         /* ambient for reflected surfaces */
    vec4 bone[24];
} u;
