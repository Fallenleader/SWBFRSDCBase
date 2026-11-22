#version 450
/* Aurek's level / model vertex shader (the GL back end's, for Vulkan): clip z from GL's [-1, 1] to Vulkan's [0, 1]; the viewport
 * is flipped (negative height), so y and the winding stay GL's. */
layout(location=0) in vec3 aPos; layout(location=1) in vec2 aUv; layout(location=2) in vec4 aNrm; layout(location=3) in vec4 aCol;
layout(push_constant) uniform P { mat4 mvp; vec4 tint; vec4 fogp; vec4 uvo; } pc;   /* fogp: start, end, colour scale, lit */
layout(set=0, binding=1) uniform L { vec4 sh[4]; vec4 fog; } lt;
layout(location=0) out vec2 vUv; layout(location=1) out vec4 vCol; layout(location=2) out float vFog;
void main() {
    vec4 p = pc.mvp * vec4(aPos, 1.0); vUv = aUv + pc.uvo.xy; vec3 c = aCol.rgb;
    if (pc.fogp.w > 0.5) { vec3 n = aNrm.xyz; c = lt.sh[0].xyz + vec3(max(dot(n, lt.sh[1].xyz), 0.0), max(dot(n, lt.sh[2].xyz), 0.0), max(dot(n, lt.sh[3].xyz), 0.0)); }
    vCol = vec4(c * pc.fogp.z, aCol.a) * pc.tint;
    vFog = pc.fogp.y > pc.fogp.x ? clamp((p.w - pc.fogp.x) / (pc.fogp.y - pc.fogp.x), 0.0, 1.0) : 0.0;
    p.z = (p.z + p.w) * 0.5; gl_Position = p;
}
