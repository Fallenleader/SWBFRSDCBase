#version 460
/* full-screen quad from the vertex index: uv rectangle (u0, v0, u1, v1) and the destination rectangle in clip space in the push constants */
layout(push_constant) uniform P { vec4 uv; vec4 dst; vec4 texel; } pc;
layout(location = 0) out vec2 vUV;
void main(){
    vec2 k = vec2(float(gl_VertexIndex & 1), float(gl_VertexIndex >> 1));
    gl_Position = vec4(mix(pc.dst.x, pc.dst.z, k.x), mix(pc.dst.y, pc.dst.w, k.y), 0.0, 1.0);
    vUV = vec2(mix(pc.uv.x, pc.uv.z, k.x), mix(pc.uv.y, pc.uv.w, k.y));
}
