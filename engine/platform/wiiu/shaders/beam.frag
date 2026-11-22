#version 450
// Aurek fragment program: the procedural beam glow
layout(location = 0) in vec2 vUv;
layout(location = 1) in vec4 vCol;
layout(location = 2) in float vFog;
layout(location = 0) out vec4 o;
void main()
{
    float d = length(vUv); float glow = exp(-d * d * 5.0) * (1.0 - smoothstep(0.75, 1.0, d));
    float core = 1.0 - smoothstep(0.16, 0.30, d); float k = vCol.a * (1.0 - vFog);
    o = vec4((vCol.rgb * glow + vec3(core)) * k, glow * k * 0.6);
}
