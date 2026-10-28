#version 460
/* The PSP GE's texture functions, fog, alpha test (gfx_gl.c FS_SRC), and for 3D draws (FX):
 *   sun shadow  - shadow map (SHADOW_MAP) or a ray query towards the sun (RT build, u.rt.x)
 *   PBR         - _MSAO / _NM maps of mod textures (u.pbr.w): Burley diffuse, GGX / height-correlated Smith / Schlick specular
 *   reflections - a ray query along the reflected view direction (RT build, u.rt.y): the hit triangle's colour, lit by the sun
 *   AO / GI     - short cosine-distributed rays around the normal (RT build, u.rt2.x rays): what they hit darkens the surface;
 *                 longer rays (u.rt2.y): the colour of what they hit, lit by the sun and the ambient, bounces onto the surface
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
/* closest hit along the ray: its distance (and triangle), or -1 */
float rayHit(vec3 p, vec3 dir, float tmax, out int prim){
    prim = 0;
    if (any(isnan(p)) || any(isinf(p)) || any(isnan(dir)) || dot(dir, dir) < 0.5) return -1.0;
    rayQueryEXT q;
    rayQueryInitializeEXT(q, uTLAS, gl_RayFlagsOpaqueEXT, 0xFF, p, 0.05, dir, tmax);
    while (rayQueryProceedEXT(q)) {}
    if (rayQueryGetIntersectionTypeEXT(q, true) == gl_RayQueryCommittedIntersectionNoneEXT) return -1.0;
    prim = rayQueryGetIntersectionPrimitiveIndexEXT(q, true); return rayQueryGetIntersectionTEXT(q, true); }
/* a fixed per-pixel random number (no frame-to-frame shimmer) and a cosine-weighted direction around n */
float hash12(vec2 p){ vec3 p3 = fract(vec3(p.xyx) * 0.1031); p3 += dot(p3, p3.yzx + 33.33); return fract((p3.x + p3.y) * p3.z); }
vec3 cosDir(vec3 n, vec2 r){
    float ph = 6.28318 * r.x, s = sqrt(r.y);
    vec3 t = normalize(abs(n.y) < 0.99 ? cross(n, vec3(0.0, 1.0, 0.0)) : cross(n, vec3(1.0, 0.0, 0.0))), b = cross(n, t);
    return normalize(t * (cos(ph) * s) + b * (sin(ph) * s) + n * sqrt(max(1.0 - r.y, 0.0))); }
#endif
#endif

void main(){
    if (vCull > 0.0) discard;
    vec4 c = vCol; vec3 albT = vec3(1.0);                                   /* albT: the surface's texture colour (GI bounce) */
    if (u.cfg0.x > 0.5) {
        vec4 t = texture(uTex, vUV); albT = t.rgb;
        float ta = (u.cfg0.z > 0.5) ? t.a : 1.0; float f = u.cfg0.y;
        if (f < 0.5) { c.rgb *= t.rgb; c.a *= ta; }                       /* modulate */
        else if (f < 1.5) { c.rgb = mix(c.rgb, t.rgb, ta); }                /* decal */
        else if (f < 2.5) { c.rgb = mix(c.rgb, u.env.rgb, t.rgb); c.a *= ta; }   /* blend */
        else if (f < 3.5) { c.rgb = t.rgb; if (u.cfg0.z > 0.5) c.a = t.a; } /* replace */
        else { c.rgb += t.rgb; c.a *= ta; }                                 /* add */
        if (u.cfg0.w > 0.5) c.rgb *= 2.0; }
#ifdef FX
    vec3 N = dot(vVN, vVN) > 1e-10 ? normalize(vVN) : normalize(cross(dFdx(vVP), dFdy(vVP)));   /* no vertex normals: the triangle's */
    vec3 V = normalize(-vVP), L = u.sun.xyz;
    if (dot(N, V) < 0.0) N = -N;
    /* ---- PBR maps (mod textures: _MSAO R metalness, G smoothness, B ambient occlusion; _NM normal map) */
    float rough = 0.7, metal = 0.0, ao = 1.0;
    if (u.pbr.w > 0.5) {
        if (u.pbr.x > 0.5) { vec4 m = texture(uMR, vUV); metal = m.r; rough = clamp(1.0 - m.g, 0.05, 1.0); ao = m.b; }
        if (u.pbr.y > 0.5) { vec3 T = vVT - N * dot(N, vVT); float lt = length(T);
            if (lt > 0.00001) { T /= lt; vec3 B = cross(N, T); vec3 m = texture(uNM, vUV).xyz * 2.0 - 1.0; m.xy *= u.lit.w; vec3 Nm = normalize(T * m.x + B * m.y + N * m.z);
                /* the bumps: the sun's and a light from the eye's (so they show in the shade too) on the mapped normal vs the surface's */
                float g0 = 0.25 + 0.55 * max(dot(N, L), 0.0) + 0.2 * max(dot(N, V), 0.0), g1 = 0.25 + 0.55 * max(dot(Nm, L), 0.0) + 0.2 * max(dot(Nm, V), 0.0);
                c.rgb *= clamp(g1 / g0, 0.3, 2.5); N = Nm; } } }
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
    c.rgb *= mix(vec3(1.0), u.lit.rgb, 1.0 - shade);                       /* the map's sun colour / intensity (mods/lights) */
#ifdef RT
    /* ---- ray-traced ambient occlusion and one-bounce diffuse light */
    if ((u.rt2.x > 0.5 || u.rt2.y > 0.5) && u.rt.w > 0.5) {
        vec3 wp = toWorld(vVP, 1.0), wn = normalize(toWorld(N, 0.0)), o = wp + wn * 0.06;
        float h = hash12(gl_FragCoord.xy); vec2 h2 = vec2(h, hash12(gl_FragCoord.yx + 17.0));
        int na = int(u.rt2.x + 0.5), ng = int(u.rt2.y + 0.5); int prim;
        if (na > 0) {
            float occ = 0.0;
            for (int i = 0; i < na; i++) {
                vec2 r = fract(h2 + float(i) * vec2(0.7548777, 0.5698403));
                float t = rayHit(o, cosDir(wn, r), u.rt2.z, prim);
                if (t >= 0.0) occ += 1.0 - t / u.rt2.z; }
            c.rgb *= 1.0 - u.rt3.y * clamp(occ / float(na), 0.0, 1.0) * ao; }
        if (ng > 0) {
            vec3 gi = vec3(0.0);
            for (int i = 0; i < ng; i++) {
                vec2 r = fract(h2.yx + float(i) * vec2(0.5698403, 0.7548777));
                vec3 d = cosDir(wn, r);
                float t = rayHit(o, d, u.rt3.z, prim);
                if (t >= 0.0) {
                    vec3 hc = unpackUnorm4x8(hitCol[prim]).rgb, hp = o + d * t;
                    float lit = 1.0 - rayOccluded(hp + u.sunw.xyz * 0.1, u.sunw.xyz, u.rt.z);
                    gi += hc * (u.amb.rgb * 0.5 + u.sunc.rgb * 0.8 * lit) * clamp(1.0 - t / u.rt3.z, 0.0, 1.0); } }
            c.rgb += albT * (gi / float(ng)) * u.rt2.w * (1.0 - metal) * 0.6; } }
#endif
    if (u.pbr.w > 0.5) {
        /* ---- the BRDF (Frostbite, "Moving Frostbite to PBR", Lagarde & de Rousiers 2014): renormalised Disney / Burley diffuse;
         * Cook-Torrance specular with the GGX (Trowbridge-Reitz) NDF, height-correlated Smith GGX visibility and Schlick Fresnel
         * (f90 from f0); split-sum environment term (Karis' analytic DFG fit) with Lagarde's specular occlusion from the AO map.
         * Smoothness s -> perceptual roughness r = 1 - s, GGX alpha = r^2.  The game's own lighting of the pixel (c) stays the
         * diffuse irradiance: the Burley term reshapes its sunlit part, and the specular is added on top. */
        const float PI = 3.14159265;
        float lr = max(rough, 0.045), al = lr * lr, a2 = al * al;
        vec3 H = normalize(L + V);
        float NdotL = max(dot(N, L), 0.0), NdotV = max(abs(dot(N, V)), 1e-4), NdotH = max(dot(N, H), 0.0), LdotH = max(dot(L, H), 0.0);
        float sunW = NdotL * (1.0 - shade);
        /* Burley diffuse, energy-renormalised, relative to Lambert (1 = Lambert) */
        float eBias = mix(0.0, 0.5, lr), eFactor = mix(1.0, 1.0 / 1.51, lr), fd90 = eBias + 2.0 * LdotH * LdotH * lr;
        float burley = (1.0 + (fd90 - 1.0) * pow(1.0 - NdotL, 5.0)) * (1.0 + (fd90 - 1.0) * pow(1.0 - NdotV, 5.0)) * eFactor;
        /* base colour: the texture's (unlit); F0 = 4% for dielectrics, the base colour for metals */
        vec3 base = albT, F0 = mix(vec3(0.04), base, metal); float f90 = clamp(50.0 * dot(F0, vec3(0.33)), 0.0, 1.0);
        vec3 F = F0 + (vec3(f90) - F0) * pow(1.0 - LdotH, 5.0);
        float dd = NdotH * NdotH * (a2 - 1.0) + 1.0, D = a2 / (PI * dd * dd);
        float lv = NdotL * sqrt(NdotV * NdotV * (1.0 - a2) + a2), ll = NdotV * sqrt(NdotL * NdotL * (1.0 - a2) + a2), Vis = 0.5 / max(lv + ll, 1e-5);
        vec3 specD = PI * D * Vis * F * sunW * u.sunc.rgb * u.pbr.z;            /* (x PI: the game's lights are Lambert without 1/PI) */
        /* environment: sky gradient + the sun's glow, or what the ray-traced reflection hits */
        vec3 R = reflect(-V, N); float up = dot(R, L) * 0.5 + 0.5;
        vec3 env = mix(vec3(0.42, 0.47, 0.56), vec3(0.80, 0.88, 1.0), up) * u.sunc.rgb + u.sunc.rgb * 4.0 * pow(max(dot(R, L), 0.0), 2.0 / max(a2, 0.002)) * (1.0 - shade) * (1.0 - lr);
#ifdef RT
        /* ---- ray-traced reflection: what the reflected ray hits (its triangle's colour, lit by the sun and the ambient), else the sky */
        vec3 wp = toWorld(vVP, 1.0), wn = normalize(toWorld(N, 0.0)), wr = normalize(toWorld(R, 0.0));
        if (u.rt.y > 0.5 && u.rt.w > 0.5 && lr < 0.6 && !any(isnan(wp)) && !any(isnan(wr)) && !any(isinf(wp)) && dot(wr, wr) > 0.5) {
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
                float fade = clamp(1.0 - t / u.rt.z, 0.0, 1.0) * (1.0 - lr / 0.6);
                env = mix(env, hit, fade); } }
#endif
        /* the game's light level here (its lighting and shading of this pixel), so reflections dim in dark places */
        float lvl = clamp(dot(c.rgb, vec3(0.299, 0.587, 0.114)) / max(dot(base, vec3(0.299, 0.587, 0.114)), 0.04), 0.15, 1.5);
        vec4 rr = lr * vec4(-1.0, -0.0275, -0.572, 0.022) + vec4(1.0, 0.0425, 1.04, -0.04);
        float a004 = min(rr.x * rr.x, exp2(-9.28 * NdotV)) * rr.x + rr.y; vec2 AB = vec2(-1.04, 1.04) * a004 + rr.zw;
        float specOcc = clamp(pow(NdotV + ao, exp2(-16.0 * al - 1.0)) - 1.0 + ao, 0.0, 1.0);
        vec3 specE = env * lvl * (F0 * AB.x + AB.y) * specOcc;
        vec3 diffuse = c.rgb * mix(1.0, burley, sunW) * (1.0 - metal) * ao;
        c.rgb = diffuse + specD + specE; }
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
