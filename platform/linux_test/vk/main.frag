#version 460
/* The PSP GE's texture functions, fog, alpha test (gfx_gl.c FS_SRC), and for 3D draws (FX):
 *   sun shadow  - shadow map (SHADOW_MAP) or a ray query towards the sun (RT build, u.rt.x)
 *   PBR         - metal-roughness / normal maps of mod textures (u.pbr.w)
 *   reflections - a ray query along the reflected view direction (RT build, u.rt.y): the hit triangle's colour, lit by the sun
 * Built three times: BASIC (2D: no FX inputs), FX, FX + RT (GL_EXT_ray_query; only on devices that have it). */
#ifdef RT
#extension GL_EXT_ray_query : require
#endif
#extension GL_GOOGLE_include_directive : require
#include "common.glsl"
layout(set = 0, binding = 1) uniform sampler2D uTex;
layout(location = 0) in vec2 vUV; layout(location = 1) in vec4 vCol; layout(location = 2) in float vFog; layout(location = 3) in float vCull;
#ifdef FX
layout(set = 0, binding = 2) uniform sampler2D uShadow;
layout(set = 0, binding = 3) uniform sampler2D uMR;
layout(set = 0, binding = 4) uniform sampler2D uNM;
layout(location = 4) in vec4 vSh; layout(location = 5) in vec3 vVP; layout(location = 6) in vec3 vVN; layout(location = 7) in vec3 vVT;
#ifdef RT
layout(set = 0, binding = 5) uniform accelerationStructureEXT uTLAS;
layout(std430, set = 0, binding = 6) readonly buffer HitCol { uint hitCol[]; };   /* per triangle: RGBA8 albedo */
#endif
#endif
layout(location = 0) out vec4 oCol;

#ifdef FX
vec3 toWorld(vec3 v, float w){ vec4 q = vec4(v, w); return vec3(dot(q, u.vinv[0]), dot(q, u.vinv[1]), dot(q, u.vinv[2])); }
#ifdef RT
/* 1 = something between p (world) and the sun */
float rayOccluded(vec3 p, vec3 dir, float tmax){
    if (any(isnan(p)) || any(isinf(p)) || any(isnan(dir)) || dot(dir, dir) < 0.5) return 0.0;   /* (a bad ray must not reach the traversal) */
    if (u.amb.w > 0.5) { p = vec3(0.0, 5000.0, 0.0); dir = vec3(0.0, 1.0, 0.0); }    /* debug: a ray that hits nothing */
    rayQueryEXT q;
    rayQueryInitializeEXT(q, uTLAS, gl_RayFlagsTerminateOnFirstHitEXT | gl_RayFlagsOpaqueEXT, 0xFF, p, 0.05, dir, tmax);
    while (rayQueryProceedEXT(q)) {}
    return rayQueryGetIntersectionTypeEXT(q, true) != gl_RayQueryCommittedIntersectionNoneEXT ? 1.0 : 0.0; }
#endif
#endif

void main(){
    if (vCull > 0.0) discard;
    vec4 c = vCol;
    if (u.cfg0.x > 0.5) {
        vec4 t = texture(uTex, vUV);
        float ta = (u.cfg0.z > 0.5) ? t.a : 1.0; float f = u.cfg0.y;
        if (f < 0.5) { c.rgb *= t.rgb; c.a *= ta; }                       /* modulate */
        else if (f < 1.5) { c.rgb = mix(c.rgb, t.rgb, ta); }                /* decal */
        else if (f < 2.5) { c.rgb = mix(c.rgb, u.env.rgb, t.rgb); c.a *= ta; }   /* blend */
        else if (f < 3.5) { c.rgb = t.rgb; if (u.cfg0.z > 0.5) c.a = t.a; } /* replace */
        else { c.rgb += t.rgb; c.a *= ta; }                                 /* add */
        if (u.cfg0.w > 0.5) c.rgb *= 2.0; }
#ifdef FX
    vec3 N = normalize(vVN), V = normalize(-vVP), L = u.sun.xyz;
    if (dot(N, V) < 0.0) N = -N;
    /* ---- PBR (mod textures with _ms / _n maps): GGX specular + Schlick Fresnel from the sun, sky/sun reflection term */
    float rough = 0.7, metal = 0.0, ao = 1.0;
    if (u.pbr.w > 0.5) {
        if (u.pbr.x > 0.5) { vec4 m = texture(uMR, vUV); metal = m.r; rough = clamp(1.0 - m.g, 0.05, 1.0); ao = m.b; }
        if (u.pbr.y > 0.5) { vec3 T = vVT - N * dot(N, vVT); float lt = length(T);
            if (lt > 0.00001) { T /= lt; vec3 B = cross(N, T); vec3 m = texture(uNM, vUV).xyz * 2.0 - 1.0; vec3 Nm = normalize(T * m.x + B * m.y + N * m.z);
                float g0 = dot(N, L) * 0.5 + 0.5, g1 = dot(Nm, L) * 0.5 + 0.5; c.rgb *= clamp(g1 / max(g0, 0.1), 0.0, 2.0); N = Nm; } } }
    /* ---- sun shadow */
    float shade = 0.0;                                                      /* 0 lit .. 1 in shadow */
    if (u.shp.w > 0.5) {
#ifdef RT
        if (u.rt.x > 0.5 && u.rt.w > 0.5) {
            vec3 wp = toWorld(vVP, 1.0), wn = normalize(toWorld(N, 0.0));
            float facing = dot(wn, u.sunw.xyz);
            shade = facing <= 0.0 ? 0.6 : rayOccluded(wp + wn * 0.08, u.sunw.xyz, u.rt.z); }
        else
#endif
        if (vSh.w > 0.0) {
            vec2 sc = vSh.xy; float nd = clamp(vSh.w, 0.05, 1.0); float tn = min(sqrt(1.0 - nd * nd) / nd, 6.0); float z = vSh.z - u.shp.y * (0.7 + 1.5 * tn);
            if (sc.x > 0.0 && sc.x < 1.0 && sc.y > 0.0 && sc.y < 1.0 && z < 1.0) { float o = u.shp.x;
                float k = ((z > texture(uShadow, sc + vec2(-o, -o)).r) ? 0.25 : 0.0) + ((z > texture(uShadow, sc + vec2(o, -o)).r) ? 0.25 : 0.0)
                        + ((z > texture(uShadow, sc + vec2(-o, o)).r) ? 0.25 : 0.0) + ((z > texture(uShadow, sc + vec2(o, o)).r) ? 0.25 : 0.0);
                float edge = clamp(min(min(sc.x, 1.0 - sc.x), min(sc.y, 1.0 - sc.y)) * 12.0, 0.0, 1.0);
                shade = k * edge * clamp(vSh.w * 4.0, 0.0, 1.0); } }
        c.rgb *= 1.0 - u.shp.z * shade; }
    if (u.pbr.w > 0.5) {
        vec3 H = normalize(L + V); float ndl = max(dot(N, L), 0.0) * (1.0 - shade), ndv = max(dot(N, V), 0.001), ndh = max(dot(N, H), 0.0), vdh = max(dot(V, H), 0.0);
        float a = rough * rough, a2 = a * a, dd = ndh * ndh * (a2 - 1.0) + 1.0, D = a2 / (3.14159 * dd * dd);
        float kk = (rough + 1.0) * (rough + 1.0) * 0.125, G = (ndl / (ndl * (1.0 - kk) + kk)) * (ndv / (ndv * (1.0 - kk) + kk));
        vec3 alb = c.rgb, F0 = mix(vec3(0.04), alb, metal);
        vec3 F = F0 + (1.0 - F0) * pow(1.0 - vdh, 5.0), spec = F * (D * G / (4.0 * ndl * ndv + 0.001)) * ndl;
        vec3 Fa = F0 + (1.0 - F0) * pow(1.0 - ndv, 5.0) * (1.0 - rough);
        vec3 R = reflect(-V, N); float up = dot(R, L) * 0.5 + 0.5;
        vec3 env = mix(vec3(0.42, 0.47, 0.56), vec3(0.80, 0.88, 1.0), up) * u.sunc.rgb + u.sunc.rgb * 6.0 * pow(max(dot(R, L), 0.0), 2.0 + 300.0 * (1.0 - rough) * (1.0 - rough)) * (1.0 - shade);
#ifdef RT
        /* ---- ray-traced reflection: what the reflected ray hits (its triangle's colour, lit by the sun and the ambient), else the sky */
        vec3 wp = toWorld(vVP, 1.0), wn = normalize(toWorld(N, 0.0)), wr = normalize(toWorld(R, 0.0));
        if (u.rt.y > 0.5 && u.rt.w > 0.5 && rough < 0.6 && !any(isnan(wp)) && !any(isnan(wr)) && !any(isinf(wp)) && dot(wr, wr) > 0.5) {
            rayQueryEXT q;
            rayQueryInitializeEXT(q, uTLAS, gl_RayFlagsOpaqueEXT, 0xFF, wp + wn * 0.08, 0.05, wr, u.rt.z);
            while (rayQueryProceedEXT(q)) {}
            if (rayQueryGetIntersectionTypeEXT(q, true) != gl_RayQueryCommittedIntersectionNoneEXT) {
                int prim = rayQueryGetIntersectionPrimitiveIndexEXT(q, true);
                vec4 hc = unpackUnorm4x8(hitCol[prim]);
                float t = rayQueryGetIntersectionTEXT(q, true);
                vec3 hp = wp + wr * t;
                float lit = 1.0 - 0.6 * rayOccluded(hp + u.sunw.xyz * 0.1, u.sunw.xyz, u.rt.z);
                vec3 hit = hc.rgb * (u.amb.rgb + u.sunc.rgb * 0.7 * lit);
                float fade = clamp(1.0 - t / u.rt.z, 0.0, 1.0);
                env = mix(env, hit, fade); } }
#endif
        c.rgb = c.rgb * (1.0 - metal) * ao + alb * metal * (0.25 + 0.75 * Fa * env * 1.6) * ao + Fa * env * (1.0 - rough) * (1.0 - metal) * 0.5 + spec * u.sunc.rgb * u.pbr.z; }
#endif
    if (u.fog.a > 0.5) c.rgb = mix(u.fog.rgb, c.rgb, clamp(vFog, 0.0, 1.0));
    c.rgb *= u.mul.rgb;
    float af = u.cfg1.x, a = floor(c.a * 255.0 + 0.5), r = u.cfg1.y;
    if (af < 0.5) discard;
    else if (af < 1.5) { }
    else if (af < 2.5) { if (abs(a - r) > 0.5) discard; }
    else if (af < 3.5) { if (abs(a - r) < 0.5) discard; }
    else if (af < 4.5) { if (!(a < r - 0.5)) discard; }
    else if (af < 5.5) { if (!(a < r + 0.5)) discard; }
    else if (af < 6.5) { if (!(a > r + 0.5)) discard; }
    else { if (!(a > r - 0.5)) discard; }
    oCol = c;
}
