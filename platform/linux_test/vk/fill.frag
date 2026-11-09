#version 460
layout(push_constant) uniform P { vec4 col; } pc;
layout(location = 0) out vec4 oCol;
void main(){ oCol = pc.col; }
