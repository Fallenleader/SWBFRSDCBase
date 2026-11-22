#version 450
/* the fragment programs, one per define: OPAQUE, CUTOUT, ALPHA (layer, blend, add, hud: the blend state differs), BEAM */
layout(location=0) in vec2 vUv; layout(location=1) in vec4 vCol; layout(location=2) in float vFog;
layout(set=0, binding=0) uniform sampler2D uTex;
layout(set=0, binding=1) uniform L { vec4 sh[4]; vec4 fog; } lt;
layout(location=0) out vec4 o;
void main() {
#if defined(BEAM)
    float d = length(vUv); float glow = exp(-d * d * 5.0) * (1.0 - smoothstep(0.75, 1.0, d));
    float core = 1.0 - smoothstep(0.16, 0.30, d); float k = vCol.a * (1.0 - vFog);
    o = vec4((vCol.rgb * glow + vec3(core)) * k, glow * k * 0.6);
#else
    vec4 t = texture(uTex, vUv);
#if defined(CUTOUT)
    if (t.a < 0.5) discard;
#endif
#if defined(ALPHA)
    o = vec4(mix(t.rgb * vCol.rgb, lt.fog.rgb, vFog), t.a * vCol.a);
#else
    o = vec4(mix(t.rgb * vCol.rgb, lt.fog.rgb, vFog), 1.0);
#endif
#endif
}
