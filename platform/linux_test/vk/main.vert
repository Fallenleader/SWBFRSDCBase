#version 460
/* CPU-transformed vertices (2D, sprites, overlays): clip-space position, uv, colour, fog - gfx_gl.c VS_SRC */
#extension GL_GOOGLE_include_directive : require
#include "common.glsl"
layout(location = 0) in vec4 aPos; layout(location = 1) in vec2 aUV; layout(location = 2) in vec4 aCol; layout(location = 3) in float aFog;
layout(location = 0) out vec2 vUV; layout(location = 1) out vec4 vCol; layout(location = 2) out float vFog; layout(location = 3) out float vCull;
void main(){
    vec4 p = aPos; p.z = (p.z + p.w) * 0.5;                   /* GL depth range -> Vulkan */
    gl_Position = p;
    vUV = vec2(aUV.x * u.uvs.x + u.uvs.w, aUV.y * u.uvs.y + u.uvs.z); vCol = aCol; vFog = aFog; vCull = 0.0;
}
