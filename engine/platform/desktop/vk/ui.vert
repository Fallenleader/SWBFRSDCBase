#version 450
layout(location=0) in vec2 aPos; layout(location=1) in vec2 aUv; layout(location=2) in vec4 aCol;
layout(push_constant) uniform P { vec2 scale; } pc;
layout(location=0) out vec2 vUv; layout(location=1) out vec4 vCol;
void main() { gl_Position = vec4(aPos.x * pc.scale.x - 1.0, 1.0 - aPos.y * pc.scale.y, 0.0, 1.0); vUv = aUv; vCol = aCol; }
