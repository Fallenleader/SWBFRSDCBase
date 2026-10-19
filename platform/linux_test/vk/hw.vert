#version 460
/* Hardware transform & lighting (the PSP GE's T&L on the GPU): gfx_gl.c HWVS_BODY in GLSL 4.50.  The GL clip-space depth (-w..w)
 * is mapped to Vulkan's 0..w at the end. */
#extension GL_GOOGLE_include_directive : require
#include "common.glsl"
layout(constant_id = 0) const bool SKIN = false;
layout(constant_id = 1) const bool LIT = false;
layout(location = 0) in vec3 aP; layout(location = 1) in vec3 aN; layout(location = 2) in vec2 aT; layout(location = 3) in vec4 aC;
layout(location = 4) in vec4 aW0; layout(location = 5) in vec4 aW1; layout(location = 6) in vec3 aTg;
layout(location = 0) out vec2 vUV; layout(location = 1) out vec4 vCol; layout(location = 2) out float vFog; layout(location = 3) out float vCull;
layout(location = 4) out vec4 vSh; layout(location = 5) out vec3 vVP; layout(location = 6) out vec3 vVN; layout(location = 7) out vec3 vVT;

void main(){
    vec3 p = aP, n = aN, tg = aTg;
    if (SKIN) {
        vec4 p4 = vec4(aP, 1.0), n4 = vec4(aN, 0.0), t4 = vec4(aTg, 0.0); p = vec3(0.0); n = vec3(0.0); tg = vec3(0.0);
        float w[8] = float[8](aW0.x, aW0.y, aW0.z, aW0.w, aW1.x, aW1.y, aW1.z, aW1.w);
        for (int i = 0; i < 8; i++) {
            vec4 b0 = u.bone[i * 3], b1 = u.bone[i * 3 + 1], b2 = u.bone[i * 3 + 2];
            p += w[i] * vec3(dot(p4, b0), dot(p4, b1), dot(p4, b2));
            n += w[i] * vec3(dot(n4, b0), dot(n4, b1), dot(n4, b2));
            tg += w[i] * vec3(dot(t4, b0), dot(t4, b1), dot(t4, b2)); } }
    vec4 q = vec4(p, 1.0);
    vec4 cl = vec4(dot(q, u.mvp[0]), dot(q, u.mvp[1]), dot(q, u.mvp[2]), dot(q, u.mvp[3])); float w = cl.w;
    vec4 o = vec4((cl.x * u.vp0.x + u.vp1.x * w) * (2.0 / 512.0) - w, (cl.y * u.vp0.y + u.vp1.y * w) * (2.0 / 512.0) - w,
                  (cl.z * u.vp0.z + u.vp1.z * w) * (2.0 / 65535.0) - w, w);
    float iw = (abs(w) > 0.000001) ? 1.0 / w : 0.0;
    float sx = cl.x * iw * u.vp0.x + u.vp1.x + u.vp2.x, sy = cl.y * iw * u.vp0.y + u.vp1.y + u.vp2.y, sz = cl.z * iw * u.vp0.z + u.vp1.z;
    float inz = (w > 0.0 && sz >= 0.0 && sz <= 65535.0) ? 1.0 : 0.0;
    float xyout = (sx >= 0.0 && sx < 4096.0 && sy >= 0.0 && sy < 4096.0) ? 0.0 : 1.0;
    vCull = ((u.vp2.z < 0.5 && inz < 0.5) || ((inz > 0.5 || u.vp2.z < 0.5) && xyout > 0.5)) ? 1.0 : 0.0;
    vFog = 1.0; if (u.fogp.z > 0.5) vFog = clamp((dot(q, u.wvz) + u.fogp.x) * u.fogp.y, 0.0, 1.0);
    vec2 uv = vec2(aT.x * u.uvt.x + u.uvt.z, aT.y * u.uvt.y + u.uvt.w); vUV = vec2(uv.x * u.uvs.x + u.uvs.w, uv.y * u.uvs.y + u.uvs.z);
    vCol = aC;
    vec3 wp = vec3(dot(q, u.wld[0]), dot(q, u.wld[1]), dot(q, u.wld[2]));
    vec4 nn = vec4(n, 0.0); vec3 wn = vec3(dot(nn, u.wld[0]), dot(nn, u.wld[1]), dot(nn, u.wld[2])); float ln = length(wn); if (ln > 0.0000001) wn /= ln;
    vec4 vp = vec4(dot(q, u.wv[0]), dot(q, u.wv[1]), dot(q, u.wv[2]), 1.0);
    vVP = vp.xyz; vec3 vn = vec3(dot(nn, u.wv[0]), dot(nn, u.wv[1]), dot(nn, u.wv[2])); vVN = vn;
    vec4 tt = vec4(tg, 0.0); vVT = vec3(dot(tt, u.wv[0]), dot(tt, u.wv[1]), dot(tt, u.wv[2]));
    vSh = vec4(dot(vp, u.shm[0]), dot(vp, u.shm[1]), dot(vp, u.shm[2]), 1.0);
    /* the shadow-map lookup point moved off the surface towards the sun side by one shadow-map texel (u.shm[3].w, metres) x 1..3 by
     * the slope: no self-shadowing ("acne") on sloped ground; (the maps' terrain normals point away from the sun: abs) */
    if (u.lfl.w > 0.5) { float lv = length(vn);
        if (lv > 0.0000001) { vec3 un = vn / lv; float nl = dot(un, u.shm[3].xyz); vec3 nf = (nl < 0.0) ? -un : un;
            vec4 vo = vec4(vp.xyz + nf * (u.shm[3].w * (1.0 + 2.0 * (1.0 - abs(nl)))), 1.0);
            vSh = vec4(dot(vo, u.shm[0]), dot(vo, u.shm[1]), dot(vo, u.shm[2]), abs(nl)); } }
    if (LIT) {
        vec3 amb = (u.lfl.x > 0.5) ? aC.rgb : u.mamb.rgb; float aa = (u.lfl.x > 0.5) ? aC.a : u.mamb.a; vec3 dif = (u.lfl.y > 0.5) ? aC.rgb : u.mdif.rgb;
        vec3 col = u.memi.rgb + u.msca.rgb * amb;
        for (int i = 0; i < 4; i++) {
            if (u.lfl.z <= float(i) + 0.5) break;
            vec3 L = u.lpos[i].xyz; float att = 1.0;
            if (u.lpos[i].w > 0.5) { L = u.lpos[i].xyz - wp; float d = length(L); if (d > 0.000001) L /= d;
                float den = u.latt[i].x + u.latt[i].y * d + u.latt[i].z * d * d; att = (den > 0.000001) ? min(1.0 / den, 1.0) : 1.0;
                if (u.lpos[i].w > 1.5) { float cs = -dot(L, u.lspot[i].xyz); if (cs < u.lspot[i].w) att = 0.0; else if (u.latt[i].w > 0.0) att *= pow(max(cs, 0.0), u.latt[i].w); } }
            float ndl = max(dot(wn, L), 0.0); col += (u.la[i].rgb * amb + ndl * u.ld[i].rgb * dif) * att; }
        vCol = vec4(clamp(col, vec3(0.0), vec3(1.0)), clamp(aa, 0.0, 1.0)); }
    o.z = (o.z + o.w) * 0.5;                                  /* GL depth range -> Vulkan */
    gl_Position = o;
}
