#version 450
// Aurek level / model vertex shader for CafeGLSL (offline, to .gsh): the GL back end's, uniforms in registers
layout(location = 0) in vec3 aPos;
layout(location = 1) in vec2 aUv;
layout(location = 2) in vec4 aNrm;
layout(location = 3) in vec4 aCol;
uniform mat4 uVP;
uniform vec4 uFogRange;      // start, end, colour scale, lit
uniform vec4 uTint;
uniform vec4 uSh[4];
uniform vec4 uUvOff;
layout(location = 0) out vec2 vUv;
layout(location = 1) out vec4 vCol;
layout(location = 2) out float vFog;
void main()
{
    vec4 p = uVP * vec4(aPos, 1.0); gl_Position = p; vUv = aUv + uUvOff.xy; vec3 c = aCol.rgb;
    if (uFogRange.w > 0.5) { vec3 n = aNrm.xyz; c = uSh[0].xyz + vec3(max(dot(n, uSh[1].xyz), 0.0), max(dot(n, uSh[2].xyz), 0.0), max(dot(n, uSh[3].xyz), 0.0)); }
    vCol = vec4(c * uFogRange.z, aCol.a) * uTint;
    vFog = uFogRange.y > uFogRange.x ? clamp((p.w - uFogRange.x) / (uFogRange.y - uFogRange.x), 0.0, 1.0) : 0.0;
}
