#version 450
// Aurek fragment program: cutout
layout(location = 0) in vec2 vUv;
layout(location = 1) in vec4 vCol;
layout(location = 2) in float vFog;
layout(binding = 0) uniform sampler2D uTex;
uniform vec4 uFog;
layout(location = 0) out vec4 o;
void main()
{
    vec4 t = texture(uTex, vUv);
    if (t.a < 0.5) discard; o = vec4(mix(t.rgb * vCol.rgb, uFog.rgb, vFog), 1.0);
}
