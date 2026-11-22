#version 450
layout(location=0) in vec2 vUv; layout(location=1) in vec4 vCol;
layout(set=0, binding=0) uniform sampler2D uTex;
layout(location=0) out vec4 o;
void main() { o = vec4(vCol.rgb, vCol.a * texture(uTex, vUv).r); }
