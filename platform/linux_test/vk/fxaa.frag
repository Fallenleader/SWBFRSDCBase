#version 460
/* FXAA lite (gfx_gl.c FFS_SRC); texel = (1/w, 1/h, u max, v max) */
layout(push_constant) uniform P { vec4 uv; vec4 dst; vec4 texel; } pc;
layout(set = 0, binding = 1) uniform sampler2D uTex;
layout(location = 0) in vec2 vUV; layout(location = 0) out vec4 oCol;
vec3 S(vec2 uv){ return texture(uTex, clamp(uv, vec2(0.0), pc.texel.zw)).rgb; }
void main(){
    vec2 px = pc.texel.xy; vec3 L = vec3(0.299, 0.587, 0.114);
    vec3 rNW = S(vUV + vec2(-1.0, -1.0) * px), rNE = S(vUV + vec2(1.0, -1.0) * px), rSW = S(vUV + vec2(-1.0, 1.0) * px), rSE = S(vUV + vec2(1.0, 1.0) * px), rM = S(vUV);
    float lNW = dot(rNW, L), lNE = dot(rNE, L), lSW = dot(rSW, L), lSE = dot(rSE, L), lM = dot(rM, L);
    float lMin = min(lM, min(min(lNW, lNE), min(lSW, lSE))), lMax = max(lM, max(max(lNW, lNE), max(lSW, lSE)));
    vec2 d = vec2(-((lNW + lNE) - (lSW + lSE)), (lNW + lSW) - (lNE + lSE));
    float red = max((lNW + lNE + lSW + lSE) * (0.25 * 0.125), 1.0 / 128.0);
    float rcp = 1.0 / (min(abs(d.x), abs(d.y)) + red);
    d = clamp(d * rcp, vec2(-8.0), vec2(8.0)) * px;
    vec3 rA = 0.5 * (S(vUV + d * (1.0 / 3.0 - 0.5)) + S(vUV + d * (2.0 / 3.0 - 0.5)));
    vec3 rB = rA * 0.5 + 0.25 * (S(vUV + d * -0.5) + S(vUV + d * 0.5));
    float lB = dot(rB, L);
    oCol = vec4((lB < lMin || lB > lMax) ? rA : rB, 1.0);
}
