#pragma once
/* Mip chains and anisotropic filtering shared by the renderers (tex_mips.c).
 *
 * RS_ANISO (1, 2, 4, 8; default 4): textures the game draws filtered get a mip chain, and the fragment program takes up to that many
 * trilinear samples along the direction a texel is stretched on screen (anisotropic filtering done in the shader: the GPUs this runs
 * on, the Vita's included, expose no anisotropy setting the port can use).  1 = off: one level, sampled as the PSP did. */
#include <stddef.h>
#include <stdint.h>

int rs_aniso_level(void);                                   /* 1 (off), 2, 4 or 8 */
int rs_mip_levels(int w, int h);                            /* levels for a w x h texture (down to 1 in the smaller side); 1 = none */
size_t rs_mip_bytes(int w, int h, int levels, int align);   /* RGBA8, each level's rows padded to align texels, levels in sequence */
/* src: w x h RGBA8 (bytes R,G,B,A).  Writes the levels into dst as rs_mip_bytes lays them out; returns the bytes written. */
size_t rs_mip_build(const uint32_t *src, int w, int h, int levels, int align, uint8_t *dst);

/* Palettized textures keep their palette: level 0 is the game's own indices (idx: w x h, one byte each), every smaller level the
 * palette entry nearest to the filtered colour (rgba: w x h, the decoded texture).  pal: npal RGBA8 entries.  dst: one byte a texel,
 * rows padded to align texels, levels in sequence (rs_mip_bytes / 4).  Returns the bytes written. */
size_t rs_mip_build_pal(const uint8_t *idx, const uint32_t *rgba, const uint32_t *pal, int npal, int w, int h, int levels, int align, uint8_t *dst);

/* Cg / HLSL fragment helper: the texel at uv, filtered anisotropically.  k = (texture width, height, max samples, -).  The sample
 * count follows the ratio of the pixel's footprint's long and short sides (in texels), the level of detail its long side divided
 * by the count, and the samples are spread along the long side. */
#define RS_ANISO_CG \
    "float4 afTex(sampler2D t, float2 uv, float4 k) {\n" \
    "  float2 dx = ddx(uv) * k.xy, dy = ddy(uv) * k.xy;\n" \
    "  float lx = dot(dx, dx), ly = dot(dy, dy);\n" \
    "  float pmax = sqrt(max(lx, ly)), pmin = sqrt(min(lx, ly));\n" \
    "  float n = clamp(ceil(pmax / max(pmin, 0.0001)), 1.0, k.z);\n" \
    "  float lod = max(log2(max(pmax / n, 0.0001)), 0.0);\n" \
    "  float2 ax = ((lx > ly) ? dx : dy) / k.xy;\n" \
    "  float4 s = float4(0.0, 0.0, 0.0, 0.0);\n" \
    "  for (int i = 0; i < 8; i++) { float fi = (float)i; if (fi < n) s += tex2Dlod(t, float4(uv + ax * ((fi + 0.5) / n - 0.5), 0.0, lod)); }\n" \
    "  return s / n;\n" \
    "}\n"
