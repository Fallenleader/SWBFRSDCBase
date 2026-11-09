#version 460
/* sun shadow map depth pass: camera space -> shadow map (u.shm rows), depth = the map's z (0..1) */
#extension GL_GOOGLE_include_directive : require
#include "common.glsl"
layout(constant_id = 0) const bool SKIN = false;
layout(location = 0) in vec3 aP; layout(location = 4) in vec4 aW0; layout(location = 5) in vec4 aW1;
void main(){
    vec3 p = aP;
    if (SKIN) { vec4 p4 = vec4(aP, 1.0); p = vec3(0.0); float w[8] = float[8](aW0.x, aW0.y, aW0.z, aW0.w, aW1.x, aW1.y, aW1.z, aW1.w);
        for (int i = 0; i < 8; i++) p += w[i] * vec3(dot(p4, u.bone[i * 3]), dot(p4, u.bone[i * 3 + 1]), dot(p4, u.bone[i * 3 + 2])); }
    vec4 q = vec4(p, 1.0); vec4 vp = vec4(dot(q, u.wv[0]), dot(q, u.wv[1]), dot(q, u.wv[2]), 1.0);
    vec3 sc = vec3(dot(vp, u.shm[0]), dot(vp, u.shm[1]), dot(vp, u.shm[2]));
    gl_Position = vec4(sc.x * 2.0 - 1.0, sc.y * 2.0 - 1.0, clamp(sc.z, 0.0, 1.0), 1.0);
}
