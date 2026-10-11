/* GL ES 2.0 (Shader Model 2.0 class) back end for the PSP GE.
 *
 *  - Every PSP render target (frame buffers, render-to-texture buffers) becomes a 512x512 RGBA8 FBO "surface" keyed by its guest address.
 *    A surface holds PSP row 0 in GL row 0, so reading it back / sampling it needs no flip.
 *  - Vertices arrive already transformed to GL clip space by ge.c, so clipping, perspective-correct interpolation, depth and culling are done by the GPU.
 *  - One uber shader handles texture functions (modulate/decal/blend/replace/add), x2 and the alpha test; blending, depth, scissor, cull and colour mask
 *    are plain GL state.  Textures are decoded on the CPU (formats, CLUT, swizzle, DXT) and cached as GL textures, revalidated by hash once per frame.
 *  - All GL calls run on ONE thread (the frontend thread that owns the context).  The guest threads hand work over with gfx_run().
 *  Not implemented yet: stencil, fog, colour test, logic ops, mipmaps, texture-matrix/env-map coordinate generation, specular lighting, GPU readback into guest RAM. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <pthread.h>
#include "rs_gl.h"
#include "gfx.h"

volatile unsigned rs_gfx_epoch = 1;
rs_perf_t rs_perf;
#ifdef __vita__
#include <psp2/kernel/processmgr.h>
#include <psp2/kernel/threadmgr.h>
u64 rs_perf_us(void){ return sceKernelGetProcessTimeWide(); }
static SceUID wake_sema = -1;                    /* guest -> GL thread wake-up (newlib's timed condition waits are not trusted on the Vita) */
void gfx_wake_init(void){ if (wake_sema < 0) wake_sema = sceKernelCreateSema("rs_gl_wake", 0, 0, 1 << 20, 0); }
static void wake_gl(void){ if (wake_sema >= 0) sceKernelSignalSema(wake_sema, 1); }
static void wait_wake(int wait_us){ if (wake_sema >= 0) { SceUInt t = (SceUInt)wait_us; sceKernelWaitSema(wake_sema, 1, &t); } else sceKernelDelayThread(wait_us); }
#else
u64 rs_perf_us(void){ struct timespec t; clock_gettime(CLOCK_MONOTONIC, &t); return (u64)t.tv_sec * 1000000ull + (u64)t.tv_nsec / 1000; }
void gfx_wake_init(void){}
static void wake_gl(void){}
#endif
static volatile unsigned frame_seq, presented_seq;
void gfx_frame_ready(void){ frame_seq++; wake_gl(); }
int gfx_present_due(void){ unsigned f = frame_seq; if (f == presented_seq) return 0; presented_seq = f; return 1; }

/* ------------------------------------------------------------------ function loader */
#define X(r, n, a) r (*p_##n) a;
#include "rs_gl_funcs.h"
#undef X
static void (*p_cleardepthf)(float); static void (*p_cleardepthd)(double);
void rs_gl_clear_depth(float d){ if (p_cleardepthf) p_cleardepthf(d); else if (p_cleardepthd) p_cleardepthd(d); }
int rs_gl_load(void *(*getproc)(const char *)){
    int miss = 0; char nm[128];
#define X(r, n, a) { void *p = getproc(#n); if (!p) { snprintf(nm, sizeof nm, "%sEXT", #n); p = getproc(nm); } if (!p) { snprintf(nm, sizeof nm, "%sARB", #n); p = getproc(nm); } \
        *(void **)&p_##n = p; if (!p && strcmp(#n, "glBlendColor") && strcmp(#n, "glGenerateMipmap")) { fprintf(stderr, "[GL] missing function %s\n", #n); miss++; } }   /* glBlendColor optional (vitaGL lacks it) */
#include "rs_gl_funcs.h"
#undef X
    *(void **)&p_cleardepthf = getproc("glClearDepthf"); *(void **)&p_cleardepthd = getproc("glClearDepth");
    if (!p_cleardepthf && !p_cleardepthd) { fprintf(stderr, "[GL] missing glClearDepth(f)\n"); miss++; }
    if (getenv("RS_NO_BLENDCOLOR")) p_glBlendColor = 0;     /* test the vitaGL fallback on PC */
    return miss; }

/* ------------------------------------------------------------------ shaders
 * Two source languages for the SAME Shader Model 2.0 programs (no loops, no derivatives, <64 ALU ops, one sampler):
 *   - GLSL ES 1.00  (#version 100): PC test builds (EGL/ANGLE GLES2, Mesa GLES2, desktop GL 2.0 fallback) and Vita with -DRS_VITA_GLSL
 *   - Cg            : Vita default.  vitaGL hands Cg source straight to the system shader compiler (SceShaccCg via vitaShaRK),
 *                     so it does not need vitaGL's optional GLSL->Cg translator.
 * Attribute slots (0 aPos, 1 aUV, 2 aCol) are bound by NAME with glBindAttribLocation; uniforms are looked up by name, so
 * both variants must keep identical identifiers. */
#if defined(__vita__) && !defined(RS_VITA_GLSL)
static const char *VS_SRC =
    "void main(float4 aPos, float2 aUV, float4 aCol, float aFog, uniform float4 uUVS,\n"
    "          float4 out vPos : POSITION, float2 out vUV : TEXCOORD0, float4 out vCol : TEXCOORD1, float out vFog : TEXCOORD2, float out vCull : TEXCOORD3)\n"
    "{ vPos = aPos; vUV = float2(aUV.x * uUVS.x + uUVS.w, aUV.y * uUVS.y + uUVS.z); vCol = aCol; vFog = aFog; vCull = 0.0; }\n";
static const char *FS_SRC =
    "float4 main(float2 vUV : TEXCOORD0, float4 vCol : TEXCOORD1, float vFog : TEXCOORD2, float vCull : TEXCOORD3,\n"
    "            uniform sampler2D uTex, uniform float4 uCfg0, uniform float4 uCfg1, uniform float4 uEnv, uniform float4 uFog, uniform float4 uMul) : COLOR\n"
    "{\n"
    "  if (vCull > 0.0) discard;\n"
    "  float4 c = vCol;\n"
    "  if (uCfg0.x > 0.5) {\n"
    "    float4 t = tex2D(uTex, vUV);\n"
    "    float ta = (uCfg0.z > 0.5) ? t.a : 1.0;\n"
    "    float f = uCfg0.y;\n"
    "    if (f < 0.5) { c.rgb = c.rgb * t.rgb; c.a = c.a * ta; }\n"
    "    else if (f < 1.5) { c.rgb = lerp(c.rgb, t.rgb, ta); }\n"
    "    else if (f < 2.5) { c.rgb = lerp(c.rgb, uEnv.rgb, t.rgb); c.a = c.a * ta; }\n"
    "    else if (f < 3.5) { c.rgb = t.rgb; if (uCfg0.z > 0.5) c.a = t.a; }\n"
    "    else { c.rgb = c.rgb + t.rgb; c.a = c.a * ta; }\n"
    "    if (uCfg0.w > 0.5) c.rgb = c.rgb * 2.0;\n"
    "  }\n"
    "  if (uFog.a > 0.5) c.rgb = lerp(uFog.rgb, c.rgb, saturate(vFog));\n"
    "  c.rgb = c.rgb * uMul.rgb;\n"
    "  float af = uCfg1.x; float a = floor(c.a * 255.0 + 0.5); float r = uCfg1.y;\n"
    "  if (af < 0.5) discard;\n"
    "  else if (af < 1.5) { }\n"
    "  else if (af < 2.5) { if (abs(a - r) > 0.5) discard; }\n"
    "  else if (af < 3.5) { if (abs(a - r) < 0.5) discard; }\n"
    "  else if (af < 4.5) { if (!(a < r - 0.5)) discard; }\n"
    "  else if (af < 5.5) { if (!(a < r + 0.5)) discard; }\n"
    "  else if (af < 6.5) { if (!(a > r + 0.5)) discard; }\n"
    "  else { if (!(a > r - 0.5)) discard; }\n"
    "  return c;\n"
    "}\n";
static const char *PVS_SRC =
    "void main(float2 aPos, float2 aUV, float4 out vPos : POSITION, float2 out vUV : TEXCOORD0)\n"
    "{ vPos = float4(aPos, 0.0, 1.0); vUV = aUV; }\n";
static const char *PFS_SRC =
    "float4 main(float2 vUV : TEXCOORD0, uniform sampler2D uTex) : COLOR { return float4(tex2D(uTex, vUV).rgb, 1.0); }\n";
/* FXAA (Lottes' FXAA 2 / "FXAA lite": 5 + 4 texture reads, no loops - fits Shader Model 2.0).  uTexel = (1/w, 1/h, u max, v max). */
static const char *FFS_SRC =
    "float3 S(sampler2D t, float2 uv, float4 k) { return tex2D(t, clamp(uv, float2(0.0, 0.0), k.zw)).rgb; }\n"
    "float4 main(float2 vUV : TEXCOORD0, uniform sampler2D uTex, uniform float4 uTexel) : COLOR {\n"
    "  float2 px = uTexel.xy; float3 L = float3(0.299, 0.587, 0.114);\n"
    "  float3 rNW = S(uTex, vUV + float2(-1.0, -1.0) * px, uTexel), rNE = S(uTex, vUV + float2(1.0, -1.0) * px, uTexel);\n"
    "  float3 rSW = S(uTex, vUV + float2(-1.0, 1.0) * px, uTexel), rSE = S(uTex, vUV + float2(1.0, 1.0) * px, uTexel), rM = S(uTex, vUV, uTexel);\n"
    "  float lNW = dot(rNW, L), lNE = dot(rNE, L), lSW = dot(rSW, L), lSE = dot(rSE, L), lM = dot(rM, L);\n"
    "  float lMin = min(lM, min(min(lNW, lNE), min(lSW, lSE))), lMax = max(lM, max(max(lNW, lNE), max(lSW, lSE)));\n"
    "  float2 d = float2(-((lNW + lNE) - (lSW + lSE)), (lNW + lSW) - (lNE + lSE));\n"
    "  float red = max((lNW + lNE + lSW + lSE) * (0.25 * 0.125), 1.0 / 128.0);\n"
    "  float rcp = 1.0 / (min(abs(d.x), abs(d.y)) + red);\n"
    "  d = clamp(d * rcp, float2(-8.0, -8.0), float2(8.0, 8.0)) * px;\n"
    "  float3 rA = 0.5 * (S(uTex, vUV + d * (1.0 / 3.0 - 0.5), uTexel) + S(uTex, vUV + d * (2.0 / 3.0 - 0.5), uTexel));\n"
    "  float3 rB = rA * 0.5 + 0.25 * (S(uTex, vUV + d * -0.5, uTexel) + S(uTex, vUV + d * 0.5, uTexel));\n"
    "  float lB = dot(rB, L);\n"
    "  return float4((lB < lMin || lB > lMax) ? rA : rB, 1.0);\n"
    "}\n";
#else
static const char *VS_SRC =                /* no #version line: GLSL ES defaults to 1.00 and desktop GL 2.0 to 1.10, both accept this */
    "attribute vec4 aPos; attribute vec2 aUV; attribute vec4 aCol; attribute float aFog;\n"
    "uniform vec4 uUVS; varying vec2 vUV; varying vec4 vCol; varying float vFog; varying float vCull;\n"
    "void main(){ gl_Position = aPos; vUV = vec2(aUV.x * uUVS.x + uUVS.w, aUV.y * uUVS.y + uUVS.z); vCol = aCol; vFog = aFog; vCull = 0.0; }\n";
static const char *FS_SRC =
    "#ifdef GL_ES\n#ifdef GL_FRAGMENT_PRECISION_HIGH\nprecision highp float;\n#else\nprecision mediump float;\n#endif\n#endif\n"
    "uniform sampler2D uTex; uniform vec4 uCfg0; uniform vec4 uCfg1; uniform vec4 uEnv; uniform vec4 uFog; uniform vec4 uMul;\n"
    "varying vec2 vUV; varying vec4 vCol; varying float vFog; varying float vCull;\n"
    "void main(){\n"
    "  if (vCull > 0.0) discard;\n"
    "  vec4 c = vCol;\n"
    "  if (uCfg0.x > 0.5) {\n"
    "    vec4 t = texture2D(uTex, vUV);\n"
    "    float ta = (uCfg0.z > 0.5) ? t.a : 1.0;\n"
    "    float f = uCfg0.y;\n"
    "    if (f < 0.5) { c.rgb = c.rgb * t.rgb; c.a = c.a * ta; }\n"              /* modulate */
    "    else if (f < 1.5) { c.rgb = mix(c.rgb, t.rgb, ta); }\n"                 /* decal */
    "    else if (f < 2.5) { c.rgb = mix(c.rgb, uEnv.rgb, t.rgb); c.a = c.a * ta; }\n" /* blend */
    "    else if (f < 3.5) { c.rgb = t.rgb; if (uCfg0.z > 0.5) c.a = t.a; }\n"   /* replace */
    "    else { c.rgb = c.rgb + t.rgb; c.a = c.a * ta; }\n"                      /* add */
    "    if (uCfg0.w > 0.5) c.rgb = c.rgb * 2.0;\n"
    "  }\n"
    "  if (uFog.a > 0.5) c.rgb = mix(uFog.rgb, c.rgb, clamp(vFog, 0.0, 1.0));\n"
    "  c.rgb = c.rgb * uMul.rgb;\n"
    "  float af = uCfg1.x; float a = floor(c.a * 255.0 + 0.5); float r = uCfg1.y;\n"
    "  if (af < 0.5) discard;\n"
    "  else if (af < 1.5) { }\n"
    "  else if (af < 2.5) { if (abs(a - r) > 0.5) discard; }\n"
    "  else if (af < 3.5) { if (abs(a - r) < 0.5) discard; }\n"
    "  else if (af < 4.5) { if (!(a < r - 0.5)) discard; }\n"
    "  else if (af < 5.5) { if (!(a < r + 0.5)) discard; }\n"
    "  else if (af < 6.5) { if (!(a > r + 0.5)) discard; }\n"
    "  else { if (!(a > r - 0.5)) discard; }\n"
    "  gl_FragColor = c;\n"
    "}\n";
static const char *PVS_SRC = "attribute vec2 aPos; attribute vec2 aUV; varying vec2 vUV; void main(){ gl_Position = vec4(aPos, 0.0, 1.0); vUV = aUV; }\n";
static const char *PFS_SRC =
    "#ifdef GL_ES\nprecision mediump float;\n#endif\n"
    "uniform sampler2D uTex; varying vec2 vUV; void main(){ gl_FragColor = vec4(texture2D(uTex, vUV).rgb, 1.0); }\n";
static const char *FFS_SRC =
    "#ifdef GL_ES\n#ifdef GL_FRAGMENT_PRECISION_HIGH\nprecision highp float;\n#else\nprecision mediump float;\n#endif\n#endif\n"
    "uniform sampler2D uTex; uniform vec4 uTexel; varying vec2 vUV;\n"
    "vec3 S(vec2 uv){ return texture2D(uTex, clamp(uv, vec2(0.0), uTexel.zw)).rgb; }\n"
    "void main(){\n"
    "  vec2 px = uTexel.xy; vec3 L = vec3(0.299, 0.587, 0.114);\n"
    "  vec3 rNW = S(vUV + vec2(-1.0, -1.0) * px), rNE = S(vUV + vec2(1.0, -1.0) * px), rSW = S(vUV + vec2(-1.0, 1.0) * px), rSE = S(vUV + vec2(1.0, 1.0) * px), rM = S(vUV);\n"
    "  float lNW = dot(rNW, L), lNE = dot(rNE, L), lSW = dot(rSW, L), lSE = dot(rSE, L), lM = dot(rM, L);\n"
    "  float lMin = min(lM, min(min(lNW, lNE), min(lSW, lSE))), lMax = max(lM, max(max(lNW, lNE), max(lSW, lSE)));\n"
    "  vec2 d = vec2(-((lNW + lNE) - (lSW + lSE)), (lNW + lSW) - (lNE + lSE));\n"
    "  float red = max((lNW + lNE + lSW + lSE) * (0.25 * 0.125), 1.0 / 128.0);\n"
    "  float rcp = 1.0 / (min(abs(d.x), abs(d.y)) + red);\n"
    "  d = clamp(d * rcp, vec2(-8.0), vec2(8.0)) * px;\n"
    "  vec3 rA = 0.5 * (S(vUV + d * (1.0 / 3.0 - 0.5)) + S(vUV + d * (2.0 / 3.0 - 0.5)));\n"
    "  vec3 rB = rA * 0.5 + 0.25 * (S(vUV + d * -0.5) + S(vUV + d * 0.5));\n"
    "  float lB = dot(rB, L);\n"
    "  gl_FragColor = vec4((lB < lMin || lB > lMax) ? rA : rB, 1.0);\n"
    "}\n";
#endif

/* ---- hardware transform & lighting vertex shader (the PSP GE's T&L, done on the GPU).  One body in a GLSL/Cg common subset:
 * skinning (8 bones), world/view/projection folded into uMVP, PSP viewport mapping into GL clip space, the GE's vertex range culling
 * (a culled vertex kills its whole triangle: vCull > 0 anywhere inside it -> discard), fog, texture scale/offset and 4 lights. */
static const char *HWVS_BODY =
    "uniform vec4 uMVP[4]; uniform vec4 uWVZ; uniform vec4 uWld[3]; uniform vec4 uB[24];\n"
    "uniform vec4 uVP0; uniform vec4 uVP1; uniform vec4 uVP2; uniform vec4 uUVT; uniform vec4 uUVS; uniform vec4 uFogP;\n"
    "uniform vec4 uMAmb; uniform vec4 uMDif; uniform vec4 uMEmi; uniform vec4 uMSca; uniform vec4 uLFl;\n"
    "uniform vec4 uLPos[4]; uniform vec4 uLAtt[4]; uniform vec4 uLSpot[4]; uniform vec4 uLA[4]; uniform vec4 uLD[4];\n"
    "uniform vec4 uShM[4]; uniform vec4 uWV[3];\n"
    "#define BONE(i, wt) p += (wt) * vec3(dot(p4, uB[i * 3]), dot(p4, uB[i * 3 + 1]), dot(p4, uB[i * 3 + 2])); n += (wt) * vec3(dot(n4, uB[i * 3]), dot(n4, uB[i * 3 + 1]), dot(n4, uB[i * 3 + 2]));\n"
    "#define LIGHT(i, ih) if (uLFl.z > ih) { vec3 L = uLPos[i].xyz; float att = 1.0;   if (uLPos[i].w > 0.5) { L = uLPos[i].xyz - wp; float d = length(L); if (d > 0.000001) L = L / d;     float den = uLAtt[i].x + uLAtt[i].y * d + uLAtt[i].z * d * d; att = (den > 0.000001) ? min(1.0 / den, 1.0) : 1.0;     if (uLPos[i].w > 1.5) { float cs = -dot(L, uLSpot[i].xyz); if (cs < uLSpot[i].w) att = 0.0; else if (uLAtt[i].w > 0.0) att = att * pow(max(cs, 0.0), uLAtt[i].w); } }   float ndl = max(dot(wn, L), 0.0); col += (uLA[i].rgb * amb + ndl * uLD[i].rgb * dif) * att; }\n"
    "#define BONET(i, wt) tg += (wt) * vec3(dot(t4, uB[i * 3]), dot(t4, uB[i * 3 + 1]), dot(t4, uB[i * 3 + 2]));\n"
    "void hwxf(vec3 P, vec3 N, vec2 T, vec4 C, vec4 W0, vec4 W1, vec3 TG, out vec4 oPos, out vec2 oUV, out vec4 oCol, out float oFog, out float oCull, out vec4 oSh, out vec3 oVP, out vec3 oVN, out vec3 oVT) {\n"
    "  vec3 p = P; vec3 n = N; vec3 tg = TG;\n"
    "#ifdef SKIN\n"
    "  vec4 p4 = vec4(P, 1.0); vec4 n4 = vec4(N, 0.0); p = vec3(0.0, 0.0, 0.0); n = vec3(0.0, 0.0, 0.0);\n"
    "  BONE(0, W0.x) BONE(1, W0.y) BONE(2, W0.z) BONE(3, W0.w) BONE(4, W1.x) BONE(5, W1.y) BONE(6, W1.z) BONE(7, W1.w)\n"
    "#ifdef PBR\n"
    "  vec4 t4 = vec4(TG, 0.0); tg = vec3(0.0, 0.0, 0.0);\n"
    "  BONET(0, W0.x) BONET(1, W0.y) BONET(2, W0.z) BONET(3, W0.w) BONET(4, W1.x) BONET(5, W1.y) BONET(6, W1.z) BONET(7, W1.w)\n"
    "#endif\n"
    "#endif\n"
    "  vec4 q = vec4(p, 1.0);\n"
    "  vec4 cl = vec4(dot(q, uMVP[0]), dot(q, uMVP[1]), dot(q, uMVP[2]), dot(q, uMVP[3])); float w = cl.w;\n"
    "  oPos = vec4((cl.x * uVP0.x + uVP1.x * w) * (2.0 / 512.0) - w, (cl.y * uVP0.y + uVP1.y * w) * (2.0 / 512.0) - w, (cl.z * uVP0.z + uVP1.z * w) * (2.0 / 65535.0) - w, w);\n"
    "  float iw = (abs(w) > 0.000001) ? 1.0 / w : 0.0;\n"
    "  float sx = cl.x * iw * uVP0.x + uVP1.x + uVP2.x, sy = cl.y * iw * uVP0.y + uVP1.y + uVP2.y, sz = cl.z * iw * uVP0.z + uVP1.z;\n"
    "  float inz = (w > 0.0 && sz >= 0.0 && sz <= 65535.0) ? 1.0 : 0.0;\n"
    "  float xyout = (sx >= 0.0 && sx < 4096.0 && sy >= 0.0 && sy < 4096.0) ? 0.0 : 1.0;\n"
    "  oCull = ((uVP2.z < 0.5 && inz < 0.5) || ((inz > 0.5 || uVP2.z < 0.5) && xyout > 0.5)) ? 1.0 : 0.0;\n"
    "  oFog = 1.0; if (uFogP.z > 0.5) oFog = clamp((dot(q, uWVZ) + uFogP.x) * uFogP.y, 0.0, 1.0);\n"
    "  vec2 uv = vec2(T.x * uUVT.x + uUVT.z, T.y * uUVT.y + uUVT.w); oUV = vec2(uv.x * uUVS.x + uUVS.w, uv.y * uUVS.y + uUVS.z);\n"
    "  oCol = C;\n"
    "  vec3 wp = vec3(dot(q, uWld[0]), dot(q, uWld[1]), dot(q, uWld[2]));\n"
    "  vec4 nn = vec4(n, 0.0); vec3 wn = vec3(dot(nn, uWld[0]), dot(nn, uWld[1]), dot(nn, uWld[2])); float ln = length(wn); if (ln > 0.0000001) wn = wn / ln;\n"
    "  vec4 vp = vec4(dot(q, uWV[0]), dot(q, uWV[1]), dot(q, uWV[2]), 1.0);\n"
    "  oVP = vp.xyz; oVN = vec3(dot(nn, uWV[0]), dot(nn, uWV[1]), dot(nn, uWV[2])); vec4 tt = vec4(tg, 0.0); oVT = vec3(dot(tt, uWV[0]), dot(tt, uWV[1]), dot(tt, uWV[2]));\n"
    "  oSh = vec4(dot(vp, uShM[0]), dot(vp, uShM[1]), dot(vp, uShM[2]), 1.0);\n"
    "  if (uLFl.w > 0.5) { vec3 vn = vec3(dot(nn, uWV[0]), dot(nn, uWV[1]), dot(nn, uWV[2])); float lv = length(vn); oSh.w = (lv > 0.0000001) ? dot(vn / lv, uShM[3].xyz) : 1.0; }\n"     /* surfaces facing away from the sun are not darkened twice */
    "#ifdef LIT\n"
    "  vec3 amb = (uLFl.x > 0.5) ? C.rgb : uMAmb.rgb; float aa = (uLFl.x > 0.5) ? C.a : uMAmb.a; vec3 dif = (uLFl.y > 0.5) ? C.rgb : uMDif.rgb;\n"
    "  vec3 col = uMEmi.rgb + uMSca.rgb * amb;\n"
    "  LIGHT(0, 0.5) LIGHT(1, 1.5) LIGHT(2, 2.5) LIGHT(3, 3.5)\n"
    "  oCol = vec4(clamp(col, vec3(0.0, 0.0, 0.0), vec3(1.0, 1.0, 1.0)), clamp(aa, 0.0, 1.0));\n"
    "#endif\n"
    "}\n";
#if defined(__vita__) && !defined(RS_VITA_GLSL)
static const char *HWVS_HEAD = "#define vec2 float2\n#define vec3 float3\n#define vec4 float4\n";
static const char *HWVS_MAIN =
    "void main(float3 aP, float3 aN, float2 aT, float4 aC, float4 aW0, float4 aW1,\n"
    "          float4 out vPos : POSITION, float2 out vUV : TEXCOORD0, float4 out vCol : TEXCOORD1, float out vFog : TEXCOORD2, float out vCull : TEXCOORD3, float4 out vSh : TEXCOORD4)\n"
    "{ float3 a, b, c; hwxf(aP, aN, aT, aC, aW0, aW1, float3(1.0, 0.0, 0.0), vPos, vUV, vCol, vFog, vCull, vSh, a, b, c); }\n";
static const char *HWVS_MAIN_PBR =
    "void main(float3 aP, float3 aN, float2 aT, float4 aC, float4 aW0, float4 aW1, float3 aTg,\n"
    "          float4 out vPos : POSITION, float2 out vUV : TEXCOORD0, float4 out vCol : TEXCOORD1, float out vFog : TEXCOORD2, float out vCull : TEXCOORD3, float4 out vSh : TEXCOORD4,\n"
    "          float3 out vVP : TEXCOORD5, float3 out vVN : TEXCOORD6, float3 out vVT : TEXCOORD7)\n"
    "{ hwxf(aP, aN, aT, aC, aW0, aW1, aTg, vPos, vUV, vCol, vFog, vCull, vSh, vVP, vVN, vVT); }\n";
#else
static const char *HWVS_HEAD = "";
static const char *HWVS_MAIN =
    "attribute vec3 aP; attribute vec3 aN; attribute vec2 aT; attribute vec4 aC; attribute vec4 aW0; attribute vec4 aW1;\n"
    "varying vec2 vUV; varying vec4 vCol; varying float vFog; varying float vCull; varying vec4 vSh;\n"
    "void main(){ vec4 p; vec2 t; vec4 c; float f; float k; vec4 sh; vec3 a; vec3 b; vec3 d; hwxf(aP, aN, aT, aC, aW0, aW1, vec3(1.0, 0.0, 0.0), p, t, c, f, k, sh, a, b, d); gl_Position = p; vUV = t; vCol = c; vFog = f; vCull = k; vSh = sh; }\n";
static const char *HWVS_MAIN_PBR =
    "attribute vec3 aP; attribute vec3 aN; attribute vec2 aT; attribute vec4 aC; attribute vec4 aW0; attribute vec4 aW1; attribute vec3 aTg;\n"
    "varying vec2 vUV; varying vec4 vCol; varying float vFog; varying float vCull; varying vec4 vSh; varying vec3 vVP; varying vec3 vVN; varying vec3 vVT;\n"
    "void main(){ vec4 p; vec2 t; vec4 c; float f; float k; vec4 sh; hwxf(aP, aN, aT, aC, aW0, aW1, aTg, p, t, c, f, k, sh, vVP, vVN, vVT); gl_Position = p; vUV = t; vCol = c; vFog = f; vCull = k; vSh = sh; }\n";
#endif

/* ---- real-time shadows (experimental): sun shadow map rendered from the previous frame's opaque 3D geometry.
 * Depth pass: world position -> shadow map space (uShM rows), depth packed into RGBA8 (no depth textures needed on GLES2 / vitaGL). */
static const char *SHVS_BODY =
    "uniform vec4 uWV[3]; uniform vec4 uB[24]; uniform vec4 uShM[4];\n"
    "#define BONE2(i, wt) p += (wt) * vec3(dot(p4, uB[i * 3]), dot(p4, uB[i * 3 + 1]), dot(p4, uB[i * 3 + 2]));\n"
    "void shxf(vec3 P, vec4 W0, vec4 W1, out vec4 oPos, out float oD) {\n"
    "  vec3 p = P;\n"
    "#ifdef SKIN\n"
    "  vec4 p4 = vec4(P, 1.0); p = vec3(0.0, 0.0, 0.0);\n"
    "  BONE2(0, W0.x) BONE2(1, W0.y) BONE2(2, W0.z) BONE2(3, W0.w) BONE2(4, W1.x) BONE2(5, W1.y) BONE2(6, W1.z) BONE2(7, W1.w)\n"
    "#endif\n"
    "  vec4 q = vec4(p, 1.0); vec4 vp = vec4(dot(q, uWV[0]), dot(q, uWV[1]), dot(q, uWV[2]), 1.0);\n"
    "  vec3 sc = vec3(dot(vp, uShM[0]), dot(vp, uShM[1]), dot(vp, uShM[2]));\n"
    "  oPos = vec4(sc.x * 2.0 - 1.0, sc.y * 2.0 - 1.0, sc.z * 2.0 - 1.0, 1.0); oD = sc.z; }\n";
#if defined(__vita__) && !defined(RS_VITA_GLSL)
static const char *SHVS_MAIN = "void main(float3 aP, float4 aW0, float4 aW1, float4 out vPos : POSITION, float out vD : TEXCOORD0) { shxf(aP, aW0, aW1, vPos, vD); }\n";
static const char *SHFS_SRC =
    "float4 main(float vD : TEXCOORD0) : COLOR { float d = clamp(vD, 0.0, 0.99999); float4 e = frac(d * float4(1.0, 255.0, 65025.0, 16581375.0));\n"
    "  e -= e.yzww * float4(1.0 / 255.0, 1.0 / 255.0, 1.0 / 255.0, 0.0); return e; }\n";
/* receiver: inserted into FS_SRC for the HW T&L programs */
static const char *RCV_FUNC = "float shd(sampler2D t, float2 uv) { return dot(tex2D(t, uv), float4(1.0, 1.0 / 255.0, 1.0 / 65025.0, 1.0 / 16581375.0)); }\n";
static const char *RCV_AT = "float4 main(";
static const char *RCV_PARAM_AT = "float vCull : TEXCOORD3,";
static const char *RCV_PARAMS = " float4 vSh : TEXCOORD4, uniform sampler2D uShadow, uniform float4 uShP,";
static const char *RCV_CODE =
    "  if (uShP.w > 0.5 && vSh.w > 0.0) { float2 sc = vSh.xy; float nd = clamp(vSh.w, 0.05, 1.0); float tn = min(sqrt(1.0 - nd * nd) / nd, 6.0); float z = vSh.z - uShP.y * (0.7 + 1.5 * tn);\n"
    "    if (sc.x > 0.0 && sc.x < 1.0 && sc.y > 0.0 && sc.y < 1.0 && z < 1.0) { float o = uShP.x;\n"
    "      float k = ((z > shd(uShadow, sc + float2(-o, -o))) ? 0.25 : 0.0) + ((z > shd(uShadow, sc + float2(o, -o))) ? 0.25 : 0.0)\n"
    "              + ((z > shd(uShadow, sc + float2(-o, o))) ? 0.25 : 0.0) + ((z > shd(uShadow, sc + float2(o, o))) ? 0.25 : 0.0);\n"
    "      float edge = saturate(min(min(sc.x, 1.0 - sc.x), min(sc.y, 1.0 - sc.y)) * 12.0);\n"
    "      c.rgb = c.rgb * (1.0 - uShP.z * k * edge * saturate(vSh.w * 4.0)); } }\n";
#else
static const char *SHVS_MAIN =
    "attribute vec3 aP; attribute vec4 aW0; attribute vec4 aW1; varying float vD;\n"
    "void main(){ vec4 p; float d; shxf(aP, aW0, aW1, p, d); gl_Position = p; vD = d; }\n";
static const char *SHFS_SRC =
    "#ifdef GL_ES\n#ifdef GL_FRAGMENT_PRECISION_HIGH\nprecision highp float;\n#else\nprecision mediump float;\n#endif\n#endif\n"
    "varying float vD;\n"
    "void main(){ float d = clamp(vD, 0.0, 0.99999); vec4 e = fract(d * vec4(1.0, 255.0, 65025.0, 16581375.0));\n"
    "  e -= e.yzww * vec4(1.0 / 255.0, 1.0 / 255.0, 1.0 / 255.0, 0.0); gl_FragColor = e; }\n";
static const char *RCV_FUNC = "uniform sampler2D uShadow; uniform vec4 uShP; varying vec4 vSh;\n"
    "float shd(vec2 uv) { return dot(texture2D(uShadow, uv), vec4(1.0, 1.0 / 255.0, 1.0 / 65025.0, 1.0 / 16581375.0)); }\n";
static const char *RCV_AT = "void main(){";
static const char *RCV_PARAM_AT = 0, *RCV_PARAMS = 0;
static const char *RCV_CODE =
    "  if (uShP.w > 0.5 && vSh.w > 0.0) { vec2 sc = vSh.xy; float nd = clamp(vSh.w, 0.05, 1.0); float tn = min(sqrt(1.0 - nd * nd) / nd, 6.0); float z = vSh.z - uShP.y * (0.7 + 1.5 * tn);\n"
    "    if (sc.x > 0.0 && sc.x < 1.0 && sc.y > 0.0 && sc.y < 1.0 && z < 1.0) { float o = uShP.x;\n"
    "      float k = ((z > shd(sc + vec2(-o, -o))) ? 0.25 : 0.0) + ((z > shd(sc + vec2(o, -o))) ? 0.25 : 0.0)\n"
    "              + ((z > shd(sc + vec2(-o, o))) ? 0.25 : 0.0) + ((z > shd(sc + vec2(o, o))) ? 0.25 : 0.0);\n"
    "      float edge = clamp(min(min(sc.x, 1.0 - sc.x), min(sc.y, 1.0 - sc.y)) * 12.0, 0.0, 1.0);\n"
    "      c.rgb = c.rgb * (1.0 - uShP.z * k * edge * clamp(vSh.w * 4.0, 0.0, 1.0));\n"
    "      if (uShP.w > 2.5) c.rgb = vec3(fract(z * 20.0), fract(shd(sc) * 20.0), k); } }\n";
#endif
#if defined(__vita__) && !defined(RS_VITA_GLSL)
/* PBR (mod textures with _mr / _n maps): inserted into FS_SRC for the PBR variants of the HW T&L programs.  GGX specular + Schlick
 * Fresnel from the sun (uSun = direction towards the sun in view space); the game's own vertex lighting stays the diffuse/ambient term. */
static const char *PBR_FUNC = "";
static const char *PBR_AT = "float4 main(";
static const char *PBR_PARAM_AT = "float vCull : TEXCOORD3,";
static const char *PBR_PARAMS = " float3 vVP : TEXCOORD5, float3 vVN : TEXCOORD6, float3 vVT : TEXCOORD7, uniform sampler2D uMR, uniform sampler2D uNM, uniform float4 uPbr, uniform float4 uSun, uniform float4 uSunC,";
static const char *PBR_CODE =
    "  if (uPbr.w > 0.5) {\n"
    "    float3 N = normalize(vVN); float3 V = normalize(-vVP); float3 L = uSun.xyz;\n"
    "    float rough = 0.7; float metal = 0.0; float ao = 1.0;\n"
    "    if (uPbr.x > 0.5) { float4 m = tex2D(uMR, vUV); rough = clamp(m.g, 0.05, 1.0); metal = m.b; ao = m.r; }\n"
    "    if (uPbr.y > 0.5) { float3 T = vVT - N * dot(N, vVT); float lt = length(T);\n"
    "      if (lt > 0.00001) { T = T / lt; float3 B = cross(N, T); float3 m = tex2D(uNM, vUV).xyz * 2.0 - 1.0; float3 Nm = normalize(T * m.x + B * m.y + N * m.z);\n"
    "        float g0 = dot(N, L) * 0.5 + 0.5; float g1 = dot(Nm, L) * 0.5 + 0.5; c.rgb = c.rgb * clamp(g1 / max(g0, 0.1), 0.0, 2.0); N = Nm; } }\n"
    "    float3 H = normalize(L + V); float ndl = max(dot(N, L), 0.0); float ndv = max(dot(N, V), 0.001); float ndh = max(dot(N, H), 0.0); float vdh = max(dot(V, H), 0.0);\n"
    "    float a = rough * rough; float a2 = a * a; float dd = ndh * ndh * (a2 - 1.0) + 1.0; float D = a2 / (3.14159 * dd * dd);\n"
    "    float kk = (rough + 1.0) * (rough + 1.0) * 0.125; float G = (ndl / (ndl * (1.0 - kk) + kk)) * (ndv / (ndv * (1.0 - kk) + kk));\n"
    "    float3 one = float3(1.0, 1.0, 1.0); float3 alb = c.rgb; float3 F0 = lerp(float3(0.04, 0.04, 0.04), alb, metal);\n"
    "    float3 F = F0 + (one - F0) * pow(1.0 - vdh, 5.0); float3 spec = F * (D * G / (4.0 * ndl * ndv + 0.001)) * ndl;\n"
    "    float3 Fa = F0 + (one - F0) * pow(1.0 - ndv, 5.0) * (1.0 - rough);\n"
    "    c.rgb = c.rgb * (1.0 - metal) * ao + alb * metal * (0.55 * one + 0.45 * Fa) * ao + spec * uSunC.rgb * uPbr.z;\n"
    "  }\n";
#else
static const char *PBR_FUNC = "uniform sampler2D uMR; uniform sampler2D uNM; uniform vec4 uPbr; uniform vec4 uSun; uniform vec4 uSunC; varying vec3 vVP; varying vec3 vVN; varying vec3 vVT;\n";
static const char *PBR_AT = "void main(){";
static const char *PBR_PARAM_AT = 0, *PBR_PARAMS = 0;
static const char *PBR_CODE =
    "  if (uPbr.w > 0.5) {\n"
    "    vec3 N = normalize(vVN); vec3 V = normalize(-vVP); vec3 L = uSun.xyz;\n"
    "    float rough = 0.7; float metal = 0.0; float ao = 1.0;\n"
    "    if (uPbr.x > 0.5) { vec4 m = texture2D(uMR, vUV); rough = clamp(m.g, 0.05, 1.0); metal = m.b; ao = m.r; }\n"
    "    if (uPbr.y > 0.5) { vec3 T = vVT - N * dot(N, vVT); float lt = length(T);\n"
    "      if (lt > 0.00001) { T = T / lt; vec3 B = cross(N, T); vec3 m = texture2D(uNM, vUV).xyz * 2.0 - 1.0; vec3 Nm = normalize(T * m.x + B * m.y + N * m.z);\n"
    "        float g0 = dot(N, L) * 0.5 + 0.5; float g1 = dot(Nm, L) * 0.5 + 0.5; c.rgb = c.rgb * clamp(g1 / max(g0, 0.1), 0.0, 2.0); N = Nm; } }\n"
    "    vec3 H = normalize(L + V); float ndl = max(dot(N, L), 0.0); float ndv = max(dot(N, V), 0.001); float ndh = max(dot(N, H), 0.0); float vdh = max(dot(V, H), 0.0);\n"
    "    float a = rough * rough; float a2 = a * a; float dd = ndh * ndh * (a2 - 1.0) + 1.0; float D = a2 / (3.14159 * dd * dd);\n"
    "    float kk = (rough + 1.0) * (rough + 1.0) * 0.125; float G = (ndl / (ndl * (1.0 - kk) + kk)) * (ndv / (ndv * (1.0 - kk) + kk));\n"
    "    vec3 one = vec3(1.0, 1.0, 1.0); vec3 alb = c.rgb; vec3 F0 = mix(vec3(0.04, 0.04, 0.04), alb, metal);\n"
    "    vec3 F = F0 + (one - F0) * pow(1.0 - vdh, 5.0); vec3 spec = F * (D * G / (4.0 * ndl * ndv + 0.001)) * ndl;\n"
    "    vec3 Fa = F0 + (one - F0) * pow(1.0 - ndv, 5.0) * (1.0 - rough);\n"
    "    c.rgb = c.rgb * (1.0 - metal) * ao + alb * metal * (0.55 * one + 0.45 * Fa) * ao + spec * uSunC.rgb * uPbr.z;\n"
    "  }\n";
#endif
static const char *RCV_CODE_AT = "  if (uFog.a > 0.5)";
/* solid fill (masked clears: vitaGL's glClear ignores glColorMask, and the PSP clears alpha/stencil without touching RGB all the time) */
#if defined(__vita__) && !defined(RS_VITA_GLSL)
static const char *FILLVS_SRC = "void main(float2 aPos, float4 out vPos : POSITION) { vPos = float4(aPos, 0.0, 1.0); }\n";
static const char *FILLFS_SRC = "float4 main(uniform float4 uCol) : COLOR { return uCol; }\n";
#else
static const char *FILLVS_SRC = "attribute vec2 aPos; void main(){ gl_Position = vec4(aPos, 0.0, 1.0); }\n";
static const char *FILLFS_SRC = "#ifdef GL_ES\nprecision mediump float;\n#endif\nuniform vec4 uCol; void main(){ gl_FragColor = uCol; }\n";
#endif
/* returns a malloc'd copy of src with ins inserted before (after=0) / after (after=1) the first occurrence of at */
static char *str_ins(const char *src, const char *at, const char *ins, int after){
    const char *p = strstr(src, at); if (!p) return 0; if (after) p += strlen(at);
    size_t a = (size_t)(p - src), n = strlen(src) + strlen(ins) + 1; char *o = malloc(n);
    memcpy(o, src, a); strcpy(o + a, ins); strcat(o, p); return o; }
static char *pbr_fs(void){
    char *a = str_ins(FS_SRC, PBR_AT, PBR_FUNC, 0); if (!a) return 0;
    if (PBR_PARAM_AT) { char *b = str_ins(a, PBR_PARAM_AT, PBR_PARAMS, 1); free(a); a = b; if (!a) return 0; }
    char *b = str_ins(a, RCV_CODE_AT, PBR_CODE, 0); free(a); return b; }
static char *receiver_fs_from(const char *src){
    char *a = str_ins(src, RCV_AT, RCV_FUNC, 0); if (!a) return 0;
    if (RCV_PARAM_AT) { char *b = str_ins(a, RCV_PARAM_AT, RCV_PARAMS, 1); free(a); a = b; if (!a) return 0; }
    char *b = str_ins(a, RCV_CODE_AT, RCV_CODE, 0); free(a); return b; }
static char *receiver_fs(void){ return receiver_fs_from(FS_SRC); }

static unsigned compile(unsigned type, const char *src, const char *what){
#if defined(__vita__) && !defined(RS_VITA_GLSL)
    /* vitaGL treats GL_VERTEX/FRAGMENT_SHADER as GLSL (translated and compiled late, in glLinkProgram); Cg source needs its own types */
    type = (type == GL_VERTEX_SHADER) ? 0x890E /* GL_CG_VERTEX_SHADER_EXT */ : 0x890F /* GL_CG_FRAGMENT_SHADER_EXT */;
#endif
    unsigned s = glCreateShader(type); glShaderSource(s, 1, &src, 0); glCompileShader(s);
    int ok = 0; glGetShaderiv(s, GL_COMPILE_STATUS, &ok);
    if (!ok) { char log[1024] = ""; glGetShaderInfoLog(s, sizeof log - 1, 0, log); fprintf(stderr, "[GL] %s shader compile failed:\n%s\n", what, log); return 0; }
    return s; }
static unsigned link_prog(const char *vs, const char *fs, const char *name, const char *const *attrs, int nattr){
    unsigned v = compile(GL_VERTEX_SHADER, vs, name), f = compile(GL_FRAGMENT_SHADER, fs, name); if (!v || !f) return 0;
    unsigned p = glCreateProgram(); glAttachShader(p, v); glAttachShader(p, f);
    for (int i = 0; i < nattr; i++) glBindAttribLocation(p, i, attrs[i]);
    glLinkProgram(p); int ok = 0; glGetProgramiv(p, GL_LINK_STATUS, &ok);
    if (!ok) { char log[1024] = ""; glGetProgramInfoLog(p, sizeof log - 1, 0, log); fprintf(stderr, "[GL] %s program link failed:\n%s\n", name, log); return 0; }
    return p; }

static unsigned prog_main, prog_pres, prog_fxaa, prog_fill; static int use_fxaa, u_ftex, u_ftexel, u_fcol;
static int u_ptex;
/* a draw program and its uniform locations (main = pre-transformed CPU vertices; hw[skin | lit << 1] = GPU transform & lighting) */
typedef struct { unsigned id; int tex, cfg0, cfg1, env, uvs, fog, mul;
                 int mvp, wvz, wld, b, vp0, vp1, vp2, uvt, fogp, mamb, mdif, memi, msca, lfl, lpos, latt, lspot, la, ld, shm, sht, shp, wvm, mr, nm, pbr, sun, sunc; } prog_t;
static prog_t P_main, P_hw[4], P_hwp[4]; static int hw_ok, pbr_ok; static float pbr_sunc[3] = {1, 0.95f, 0.85f}, pbr_spec = 1;
static void prog_locs(prog_t *P){ unsigned p = P->id;
#define L(f, n) P->f = glGetUniformLocation(p, n);
    L(tex, "uTex") L(cfg0, "uCfg0") L(cfg1, "uCfg1") L(env, "uEnv") L(uvs, "uUVS") L(fog, "uFog") L(mul, "uMul")
    L(mvp, "uMVP") L(wvz, "uWVZ") L(wld, "uWld") L(b, "uB") L(vp0, "uVP0") L(vp1, "uVP1") L(vp2, "uVP2") L(uvt, "uUVT") L(fogp, "uFogP")
    L(mamb, "uMAmb") L(mdif, "uMDif") L(memi, "uMEmi") L(msca, "uMSca") L(lfl, "uLFl") L(lpos, "uLPos") L(latt, "uLAtt") L(lspot, "uLSpot") L(la, "uLA") L(ld, "uLD") L(shm, "uShM") L(sht, "uShadow") L(shp, "uShP") L(wvm, "uWV") L(mr, "uMR") L(nm, "uNM") L(pbr, "uPbr") L(sun, "uSun") L(sunc, "uSunC")
#undef L
}
int gfx_hw_ok(void){ return hw_ok; }

/* ---- shadow state ---- */
static int sh_on, sh_res = 1024; static float sh_range = 40.0f, sh_strength = 0.45f, sh_sun[3] = {0, 1, 0};
static unsigned sh_fbo, sh_tex, sh_rb; static prog_t P_shd[2]; static float sh_mat[16]; static int sh_valid;
typedef struct { int first, count, skin; float wv[12], bone[96]; } shrec_t;
static shrec_t *shr; static int shr_n, shr_cap; static gfx_hvtx_t *shv; static int shv_n, shv_cap; static float sh_view[12]; static int sh_cam_ok, sh_view_ok;
static unsigned sh_frame; static u64 sh_draws_total;
static int sh_caster(const gfx_state_t *st){ return st->ztest && st->zwrite && !st->blend && !st->atest && (st->cmr || st->cmg || st->cmb); }
static int sh_view_any;
static void sh_record(const gfx_state_t *st, const gfx_hw_t *hw, const gfx_hvtx_t *v, int n){
    if (pbr_ok && !sh_on) { static const float I[12] = {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0}; int ident = 1; for (int i = 0; i < 12; i++) if (fabsf(hw->view[i] - I[i]) > 1e-4f) ident = 0;
        if (!ident) { memcpy(sh_view, hw->view, sizeof sh_view); sh_view_any = 1; } }
    if (!sh_on || !sh_caster(st) || n <= 0) return;
    if (shv_n + n > shv_cap) { int nc = (shv_n + n) * 2; if (nc < 65536) nc = 65536; gfx_hvtx_t *t = realloc(shv, sizeof *shv * (size_t)nc); if (!t) return; shv = t; shv_cap = nc; }
    if (shr_n + 1 > shr_cap) { int nc = shr_cap ? shr_cap * 2 : 512; shrec_t *t = realloc(shr, sizeof *shr * (size_t)nc); if (!t) return; shr = t; shr_cap = nc; }
    shrec_t *r = &shr[shr_n]; int merge = shr_n > 0 && shr[shr_n - 1].skin == hw->skin && !memcmp(shr[shr_n - 1].wv, hw->wv, sizeof r->wv) && (!hw->skin || !memcmp(shr[shr_n - 1].bone, hw->bone, sizeof r->bone));
    if (merge) shr[shr_n - 1].count += n;
    else { r->first = shv_n; r->count = n; r->skin = hw->skin; memcpy(r->wv, hw->wv, sizeof r->wv); if (hw->skin) memcpy(r->bone, hw->bone, sizeof r->bone); shr_n++; }
    memcpy(&shv[shv_n], v, sizeof *v * (size_t)n); shv_n += n;
    sh_cam_ok = 1;
    { static const float I[12] = {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0}; int ident = 1; for (int i = 0; i < 12; i++) if (fabsf(hw->view[i] - I[i]) > 1e-4f) ident = 0;
      if (!ident) { memcpy(sh_view, hw->view, sizeof sh_view); sh_view_ok = 1; sh_view_any = 1; } } }

/* ------------------------------------------------------------------ surfaces (render targets) */
#define SURF_N 12
#define SZ 512                         /* surface size in PSP pixels */
/* Internal resolution: every GPU surface (and the shared depth/stencil buffer) is SZ*rs_res_scale pixels; geometry is in normalised clip
 * coordinates so it scales by itself; viewport/scissor/clears/copies/uploads are scaled here.  1x = PSP 480x272, 2x = 960x544 (Vita
 * screen), 3x = 1440x816 (supersampled on the Vita).  Set once at start (RS_RES_SCALE, runtime/patches.c). */
static int RS_S = 1;
#define PX (SZ * RS_S)
typedef struct { u32 addr; int stride, psz, fmt, used, drawn; unsigned fbo, tex, stamp; } surf_t;
static surf_t surfs[SURF_N]; static unsigned depth_rb, sten_rb, surf_stamp; static int has_stencil; static surf_t *cur_target;
static u32 disp_addr; static u32 disp_stride = 512, disp_fmt; static unsigned cpu_tex;
static unsigned st_draws, st_batches, st_tris, st_texup, st_clears;

static u32 akey(u32 a){ return gfx_vram(a) & 0x0FFFFFFFu; }
static void flush_batch(void);
static void raw_bind(surf_t *s){ if (cur_target == s) return; glBindFramebuffer(GL_FRAMEBUFFER, s->fbo); cur_target = s; }
static surf_t *surf_find(u32 addr){ addr = akey(addr); for (int i = 0; i < SURF_N; i++) if (surfs[i].used && surfs[i].addr == addr) return &surfs[i]; return 0; }
static surf_t *surf_create(u32 addr, int fmt, int stride){
    { static int lg = -1, n; if (lg < 0) lg = getenv("RS_FB_LOG") != 0; if (lg && n++ < 40) fprintf(stderr, "[FB] new surface %08x fmt %d stride %d\n", addr, fmt, stride); }
    addr = akey(addr); surf_t *s = 0, *old = &surfs[0];
    for (int i = 0; i < SURF_N; i++) { if (!surfs[i].used) { s = &surfs[i]; break; } if (surfs[i].stamp < old->stamp) old = &surfs[i]; }
    if (!s) { s = old; if (cur_target == s) cur_target = 0; glDeleteTextures(1, &s->tex); unsigned f = s->fbo; (void)f; /* FBO objects are re-used below */ }
    else { memset(s, 0, sizeof *s); }
    int fresh = s->fbo == 0;
    if (fresh) glGenFramebuffers(1, &s->fbo);
    glGenTextures(1, &s->tex); glBindTexture(GL_TEXTURE_2D, s->tex);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, PX, PX, 0, GL_RGBA, GL_UNSIGNED_BYTE, 0);
    glBindFramebuffer(GL_FRAMEBUFFER, s->fbo); cur_target = s;
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, s->tex, 0);
    glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, depth_rb);
    if (sten_rb) glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_STENCIL_ATTACHMENT, GL_RENDERBUFFER, sten_rb);
    unsigned st = glCheckFramebufferStatus(GL_FRAMEBUFFER); if (st != GL_FRAMEBUFFER_COMPLETE) fprintf(stderr, "[GL] framebuffer incomplete: 0x%x\n", st);
    glDisable(GL_SCISSOR_TEST); glColorMask(1, 1, 1, 1); glDepthMask(1); glClearColor(0, 0, 0, 1); rs_gl_clear_depth(1.0f); glStencilMask(0xFF); glClearStencil(0); glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | (has_stencil ? GL_STENCIL_BUFFER_BIT : 0));
    s->used = 1; s->addr = addr; s->fmt = fmt; s->stride = stride ? stride : 512; s->psz = fmt == 3 ? 4 : 2; s->drawn = 0; s->stamp = ++surf_stamp;
    return s; }
/* does guest address a name (a row of) a drawn surface?  -> surface and the PSP row offset inside it */
static surf_t *surf_for_addr(u32 a, int *y0, int *x0){        /* any pixel-aligned address inside the surface: games sample their frame buffer at x/y offsets */
    a = akey(a);
    for (int i = 0; i < SURF_N; i++) { surf_t *s = &surfs[i]; if (!s->used || !s->drawn || a < s->addr) continue;
        u32 off = a - s->addr, rowb = (u32)(s->stride * s->psz); if (off >= rowb * 272u || (off % rowb) % (u32)s->psz) continue;
        *y0 = (int)(off / rowb); *x0 = (int)((off % rowb) / (u32)s->psz); return s; }
    return 0; }

/* ------------------------------------------------------------------ texture cache */
#define TC_N 256
typedef struct { gtex_key_t k; u32 hash; unsigned id, epoch, stamp, mr, nrm; long bytes; int used, hd; } tent_t;
static tent_t tc[TC_N]; static unsigned tc_stamp; static u32 *scratch; static long tc_bytes;
static unsigned last_mr, last_nrm; static int last_hd;
void gfx_tex_maps(unsigned *mr, unsigned *nrm, int *hd){ *mr = last_mr; *nrm = last_nrm; *hd = last_hd; }
static void tent_free(tent_t *e){ if (!e->used) return; glDeleteTextures(1, &e->id); if (e->mr) glDeleteTextures(1, &e->mr); if (e->nrm) glDeleteTextures(1, &e->nrm); tc_bytes -= e->bytes; memset(e, 0, sizeof *e); }

/* ---- mod texture replacement (runtime/texrep.c finds the files) ---- */
extern int rs_texrep_active(void); extern int rs_texrep_find(u32 key, u32 pal, const char *paths[3]); extern int rs_texrep_dumping(void); extern void rs_texrep_dump(u32 key, u32 pal, int w, int h, const u32 *rgba); extern u8 *rs_png_load(const char *path, int *w, int *h); extern u32 rs_crc32(const u8 *p, size_t n);
extern int rs_patch_mod_tex_max(void);
static u8 *half_rgba(u8 *px, int *w, int *h){              /* 2x2 box filter */
    int nw = *w > 1 ? *w / 2 : 1, nh = *h > 1 ? *h / 2 : 1; u8 *o = malloc((size_t)nw * nh * 4); if (!o) return px;
    for (int y = 0; y < nh; y++) for (int x = 0; x < nw; x++) for (int c = 0; c < 4; c++) {
        int x0 = x * 2 < *w ? x * 2 : *w - 1, x1 = x * 2 + 1 < *w ? x * 2 + 1 : x0, y0 = y * 2 < *h ? y * 2 : *h - 1, y1 = y * 2 + 1 < *h ? y * 2 + 1 : y0;
        o[(y * nw + x) * 4 + c] = (u8)((px[(y0 * *w + x0) * 4 + c] + px[(y0 * *w + x1) * 4 + c] + px[(y1 * *w + x0) * 4 + c] + px[(y1 * *w + x1) * 4 + c] + 2) / 4); }
    free(px); *w = nw; *h = nh; return o; }
static unsigned upload_png(const char *path, long *bytes, int mip){
    int w, h; u8 *px = rs_png_load(path, &w, &h); if (!px) { fprintf(stderr, "[MOD] cannot read %s\n", path); return 0; }
    int mx = rs_patch_mod_tex_max(); while (w > mx || h > mx) px = half_rgba(px, &w, &h);
    unsigned id; glGenTextures(1, &id); glBindTexture(GL_TEXTURE_2D, id); glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, px); glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
    int pot = !(w & (w - 1)) && !(h & (h - 1));
    if (!p_glGenerateMipmap) mip = 0;
    if (mip && pot) glGenerateMipmap(GL_TEXTURE_2D);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, (mip && pot) ? GL_LINEAR_MIPMAP_LINEAR : GL_LINEAR); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    free(px); *bytes += (long)w * h * 4 * (mip && pot ? 4 : 3) / 3; return id; }
/* key = CRC-32 of the level-0 texel bytes as the game stores them (indices for CLUT formats) - see tools/asura/fnv.py */
static u32 tex_key(const gtex_key_t *k){
    int f = k->fmt; size_t bytes;
    if (f >= 8) bytes = (size_t)((k->w + 3) / 4) * ((k->h + 3) / 4) * (f == 8 ? 8 : 16);
    else { int bpp = (f == 3 || f == 7) ? 32 : (f == 4 ? 4 : (f == 5 ? 8 : 16)); int bw = k->bufw > k->w ? k->bufw : k->w; bytes = (size_t)bw * k->h * bpp / 8; }
    size_t base = GADDR(gfx_vram(k->addr) & 0x0FFFFFFFu); if (base >= GMEM_SIZE || bytes > GMEM_SIZE - base) return 0;
    return rs_crc32(g_mem + base, bytes); }
static int try_replace(tent_t *e, const gtex_key_t *k){
    if (!rs_texrep_active()) return 0;
    u32 key = tex_key(k); const char *p[3]; if (!rs_texrep_find(key, k->clut, p)) return 0;
    long bytes = 0; unsigned id = upload_png(p[0], &bytes, 1); if (!id) return 0;
    { static int lg = -1; if (lg < 0) { extern int rs_setting_int(const char *, int); lg = rs_setting_int("RS_MOD_LOG", 0); } if (lg) fprintf(stderr, "[MOD] texture %08x-%08x (%dx%d fmt %d at %08x) -> %s%s%s\n", key, k->clut, k->w, k->h, k->fmt, k->addr, p[0], p[1] ? " +mr" : "", p[2] ? " +normal" : ""); }
    glDeleteTextures(1, &e->id); e->id = id; e->hd = 1;
    if (e->mr) { glDeleteTextures(1, &e->mr); e->mr = 0; } if (e->nrm) { glDeleteTextures(1, &e->nrm); e->nrm = 0; }
    if (p[1]) e->mr = upload_png(p[1], &bytes, 1);
    if (p[2]) e->nrm = upload_png(p[2], &bytes, 1);
    tc_bytes += bytes - e->bytes; e->bytes = bytes; return 1; }

/* texture keys that were looked up and have no replacement are remembered by (addr, hash) only implicitly: a lookup happens on upload */
unsigned gfx_tex_acquire(const gtex_key_t *k, const gtex_src_t *src, float uvs[4]){
    uvs[0] = uvs[1] = 1; uvs[2] = uvs[3] = 0; last_mr = last_nrm = 0; last_hd = 0;
    if (k->w <= 0 || k->h <= 0 || k->w > 1024 || k->h > 1024) return 0;
    int y0, x0; surf_t *s = surf_for_addr(k->addr, &y0, &x0);
    { static int lg = -1, n; if (lg < 0) lg = getenv("RS_FB_LOG") != 0; u32 a = akey(k->addr); if (lg && n < 30 && a >= akey(0x04000000) && a < akey(0x04110000)) { n++; fprintf(stderr, "[FB] texture from frame-buffer memory %08x %dx%d fmt %d bufw %d -> %s (x0=%d y0=%d)\n", k->addr, k->w, k->h, k->fmt, k->bufw, s ? "surface" : "RAM", s ? x0 : -1, s ? y0 : -1); } }
    if (s) { if (s == cur_target) return 0; flush_batch(); uvs[0] = (float)k->w / SZ; uvs[1] = (float)k->h / SZ; uvs[2] = (float)y0 / SZ; uvs[3] = (float)x0 / SZ; return s->tex; }
    tent_t *e = 0, *old = &tc[0];
    for (int i = 0; i < TC_N; i++) { tent_t *t = &tc[i];
        if (t->used && t->k.addr == k->addr && t->k.w == k->w && t->k.h == k->h && t->k.fmt == k->fmt && t->k.swz == k->swz && t->k.bufw == k->bufw && t->k.clut == k->clut) { e = t; break; }
        if (!t->used || t->stamp < old->stamp) old = t; }
#define TEX_RET(e) do { last_mr = (e)->mr; last_nrm = (e)->nrm; last_hd = (e)->hd; return (e)->id; } while (0)
    if (e && e->epoch == rs_gfx_epoch) { e->stamp = ++tc_stamp; TEX_RET(e); }
    u64 t_h = rs_perf_us(); u32 h = src->hash(src->ud); rs_perf.hash_n++; rs_perf.hash_us += rs_perf_us() - t_h;
    if (e && e->hash == h) { e->epoch = rs_gfx_epoch; e->stamp = ++tc_stamp; TEX_RET(e); }
    long need = (long)k->w * k->h * 4;
    if (!e) {
        /* GPU memory budget for decoded textures (vitaGL spills to slow RAM when CDRAM runs out): evict least-recently-used entries */
        static long budget = -1; if (budget < 0) { extern int rs_patch_tex_budget_mb(void); budget = (long)rs_patch_tex_budget_mb() * 1048576L; }
        while (tc_bytes + need > budget) { tent_t *v = 0; for (int i = 0; i < TC_N; i++) if (tc[i].used && tc[i].epoch != rs_gfx_epoch && (!v || tc[i].stamp < v->stamp)) v = &tc[i];
            if (!v) break; tent_free(v); old = v; }
        e = old; tent_free(e); glGenTextures(1, &e->id); e->k = *k; e->used = 1; e->bytes = need; tc_bytes += need; }
    else if (e->hd) {                                         /* contents changed under a replaced texture: back to a plain one, look up again */
        long b = e->bytes; unsigned id = 0; tent_t keep = *e; keep.bytes = 0; (void)b; tent_free(e); *e = keep; e->hd = 0; e->mr = e->nrm = 0; glGenTextures(1, &id); e->id = id; e->bytes = need; tc_bytes += need; }
    e->hash = h; e->epoch = rs_gfx_epoch; e->stamp = ++tc_stamp;
    if (try_replace(e, k)) { st_texup++; TEX_RET(e); }
    glBindTexture(GL_TEXTURE_2D, e->id); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    if (!scratch) scratch = malloc(1024 * 1024 * 4);
    u64 t_u = rs_perf_us(); src->decode(scratch, src->ud);
    glBindTexture(GL_TEXTURE_2D, e->id); glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, k->w, k->h, 0, GL_RGBA, GL_UNSIGNED_BYTE, scratch);
    if (rs_texrep_dumping()) rs_texrep_dump(tex_key(k), k->clut, k->w, k->h, scratch);
    st_texup++; rs_perf.up_n++; rs_perf.up_us += rs_perf_us() - t_u;
    TEX_RET(e); }
#undef TEX_RET

static void norm3(float *v);
/* ------------------------------------------------------------------ batching + draw */
static gfx_vtx_t *bv; static int bn, bcap; static gfx_state_t bst; static int bactive;
static gfx_hvtx_t *bhv; static int bhcap, bkind; static gfx_hw_t bhw;          /* bkind 0 = CPU vertices (bv), 1 = HW T&L (bhv + bhw) */
static const unsigned dfunc[8] = {0x200, 0x207, 0x202, 0x205, 0x201, 0x203, 0x204, 0x206};
static unsigned bfactor(int f, int is_src, int fix_is_dst_of_src, u32 fix, int fb565, float *bc, int *use_const){
    (void)is_src; (void)fix_is_dst_of_src;
    switch (f) {
    case 0: return is_src ? 0x306 : 0x300;           /* dst colour (src factor) / src colour (dst factor) */
    case 1: return is_src ? 0x307 : 0x301;
    case 2: case 6: return 0x302;
    case 3: case 7: return 0x303;
    case 4: case 8: return fb565 ? GL_ONE : 0x304;
    case 5: case 9: return fb565 ? GL_ZERO : 0x305;
    default:
        if ((fix & 0xFFFFFF) == 0) return GL_ZERO;
        if ((fix & 0xFFFFFF) == 0xFFFFFF) return GL_ONE;
        if (*use_const && (bc[3] != (float)fix)) { /* a second, different constant: complement of the first, or approximate */
            u32 other = ((u32)bc[3]) ^ 0xFFFFFF; if ((fix & 0xFFFFFF) == other) return 0x8002; }
        if (!*use_const) { bc[0] = (fix & 255) / 255.0f; bc[1] = ((fix >> 8) & 255) / 255.0f; bc[2] = ((fix >> 16) & 255) / 255.0f; bc[3] = (float)(fix & 0xFFFFFF); *use_const = 1; }
        return 0x8001; } }

static void apply_state(const gfx_state_t *s, const prog_t *P){
    glViewport(0, 0, PX, PX);
    int x1 = s->sx1 < 0 ? 0 : s->sx1, y1 = s->sy1 < 0 ? 0 : s->sy1, x2 = s->sx2 > SZ - 1 ? SZ - 1 : s->sx2, y2 = s->sy2 > SZ - 1 ? SZ - 1 : s->sy2;
    glEnable(GL_SCISSOR_TEST); glScissor(x1 * RS_S, y1 * RS_S, x2 >= x1 ? (x2 - x1 + 1) * RS_S : 0, y2 >= y1 ? (y2 - y1 + 1) * RS_S : 0);
    if (s->ztest) { glEnable(GL_DEPTH_TEST); glDepthFunc(dfunc[s->zfunc & 7]); glDepthMask(s->zwrite ? 1 : 0); } else { glDisable(GL_DEPTH_TEST); glDepthMask(0); }
    if (s->cull_en) { glEnable(GL_CULL_FACE); glFrontFace(GL_CCW); glCullFace(s->cull_mode == 1 ? GL_BACK : GL_FRONT); } else glDisable(GL_CULL_FACE);
    float mul[3] = {1, 1, 1};
    if (s->blend) {
        float bc[4] = {0, 0, 0, 0}; int uc = 0; int fb565 = s->fbfmt == 0;
        unsigned sf = bfactor(s->bsrc, 1, 0, s->bfixa, fb565, bc, &uc), df = bfactor(s->bdst, 0, 0, s->bfixb, fb565, bc, &uc);
        if (!p_glBlendColor && uc) {          /* no constant blend colour (vitaGL): exact for the source factor via the shader, approximated for dst */
            if (sf == 0x8001 || sf == 0x8002) { u32 k = s->bfixa; float r = (k & 255) / 255.0f, g = ((k >> 8) & 255) / 255.0f, b = ((k >> 16) & 255) / 255.0f;
                if (sf == 0x8002) { r = 1 - r; g = 1 - g; b = 1 - b; } mul[0] = r; mul[1] = g; mul[2] = b; sf = GL_ONE; }
            if (df == 0x8001 || df == 0x8002) { u32 k = s->bfixb; float l = ((k & 255) + ((k >> 8) & 255) + ((k >> 16) & 255)) / 765.0f; df = l >= 0.5f ? GL_ONE : GL_ZERO; }
            uc = 0; }
        glEnable(GL_BLEND); glBlendFuncSeparate(sf, df, sf == 0x306 || sf == 0x307 ? GL_ONE : sf, df == 0x300 || df == 0x301 ? GL_ONE : df);
        if (uc) glBlendColor(bc[0], bc[1], bc[2], 1.0f);
        glBlendEquation(s->beq == 1 ? GL_FUNC_SUBTRACT : (s->beq == 2 ? GL_FUNC_REVERSE_SUBTRACT : GL_FUNC_ADD));
    } else glDisable(GL_BLEND);
    glColorMask(s->cmr, s->cmg, s->cmb, s->cma);
    if (s->sten && has_stencil) {
        static const unsigned sop[8] = {0x1E00 /*KEEP*/, 0 /*ZERO*/, 0x1E01 /*REPLACE*/, 0x150A /*INVERT*/, 0x1E02 /*INCR*/, 0x1E03 /*DECR*/, 0x1E00, 0x1E00};
        glEnable(GL_STENCIL_TEST); glStencilFunc(dfunc[s->sfunc & 7], s->sref, (unsigned)s->smask); glStencilOp(sop[s->sfail & 7], sop[s->szfail & 7], sop[s->szpass & 7]); glStencilMask((unsigned)s->swmask);
    } else glDisable(GL_STENCIL_TEST);
    glUseProgram(P->id);
    int use = s->tex && s->texid;
    glUniform4f(P->cfg0, use ? 1.0f : 0.0f, (float)s->tfunc, (float)s->trgba, (float)s->tdbl);
    glUniform4f(P->cfg1, s->atest ? (float)s->afunc : 1.0f, (float)s->aref, 0, 0);
    glUniform4f(P->env, (s->tenv & 255) / 255.0f, ((s->tenv >> 8) & 255) / 255.0f, ((s->tenv >> 16) & 255) / 255.0f, 1.0f);
    glUniform4f(P->uvs, s->uvs[0], s->uvs[1], s->uvs[2], s->uvs[3]);
    glUniform4f(P->mul, mul[0], mul[1], mul[2], 1.0f);
    glUniform4f(P->fog, (s->fogcol & 255) / 255.0f, ((s->fogcol >> 8) & 255) / 255.0f, ((s->fogcol >> 16) & 255) / 255.0f, s->fog ? 1.0f : 0.0f);
    glUniform1i(P->tex, 0);
    if (use) {
        glActiveTexture(GL_TEXTURE0); glBindTexture(GL_TEXTURE_2D, s->texid);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, s->tclampu ? GL_CLAMP_TO_EDGE : GL_REPEAT); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, s->tclampv ? GL_CLAMP_TO_EDGE : GL_REPEAT);
        if (!s->texhd) { int lin = s->tfilter ? GL_LINEAR : GL_NEAREST; glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, lin); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, lin); } } }

static surf_t *target_for(const gfx_state_t *s){
    surf_t *t = surf_find(s->fbaddr); if (!t) t = surf_create(s->fbaddr, s->fbfmt, s->fbstride);
    t->stamp = ++surf_stamp; t->drawn = 1; t->fmt = s->fbfmt; t->psz = s->fbfmt == 3 ? 4 : 2; if (s->fbstride) t->stride = s->fbstride; return t; }

static void flush_batch(void){
    if (!bactive) return; bactive = 0;
    if (bn <= 0) { bn = 0; return; }
    surf_t *t = target_for(&bst); raw_bind(t);
    if (bkind == 1) {
        const gfx_hw_t *h = &bhw; int pbr = pbr_ok && (bst.texmr || bst.texn) && h->lfl[3] > 0.5f && bst.tex;
        const prog_t *P = pbr ? &P_hwp[h->skin | (h->lit << 1)] : &P_hw[h->skin | (h->lit << 1)];
        apply_state(&bst, P);
        glUniform4fv(P->mvp, 4, h->mvp); glUniform4fv(P->wvz, 1, h->wvz); glUniform4fv(P->wld, 3, h->wld);
        glUniform4fv(P->wvm, 3, h->wv); glUniform4fv(P->vp0, 1, h->vp0); glUniform4fv(P->vp1, 1, h->vp1); glUniform4fv(P->vp2, 1, h->vp2); glUniform4fv(P->uvt, 1, h->uvt); glUniform4fv(P->fogp, 1, h->fogp);
        if (h->skin) glUniform4fv(P->b, 24, h->bone);
        glUniform4fv(P->lfl, 1, h->lfl);
        if (h->lit) { glUniform4fv(P->mamb, 1, h->mamb); glUniform4fv(P->mdif, 1, h->mdif); glUniform4fv(P->memi, 1, h->memi); glUniform4fv(P->msca, 1, h->msca);
            glUniform4fv(P->lpos, 4, h->lpos); glUniform4fv(P->latt, 4, h->latt); glUniform4fv(P->lspot, 4, h->lspot); glUniform4fv(P->la, 4, h->la); glUniform4fv(P->ld, 4, h->ld); }
        { static int rl = -1, nrl; if (rl < 0) rl = getenv("RS_SHADOW_RCVLOG") != 0; if (rl && nrl++ < 400) fprintf(stderr, "[RCV] n=%d skin=%d lit=%d nrm=%.0f z=%d/%d blend=%d atest=%d fb=%08x tex=%d\n", bn, h->skin, h->lit, h->lfl[3], bst.ztest, bst.zwrite, bst.blend, bst.atest, bst.fbaddr, bst.tex); }
        { static const float z16[16]; int rcv = sh_on && sh_valid && bst.ztest && !bst.blend;
          glUniform4fv(P->shm, 4, rcv ? sh_mat : z16);
          { static int vis = -1; if (vis < 0) vis = getenv("RS_SHADOW_VIS") != 0; if (P->shp != -1) glUniform4f(P->shp, 1.0f / (float)sh_res, 1.0f / (3.0f * (float)sh_res), sh_strength, rcv ? (vis ? 3.0f : 1.0f) : 0.0f); }
          if (P->sht != -1 && sh_on) { glUniform1i(P->sht, 1); glActiveTexture(GL_TEXTURE0 + 1); glBindTexture(GL_TEXTURE_2D, sh_tex); glActiveTexture(GL_TEXTURE0); } }
        glEnableVertexAttribArray(0); glEnableVertexAttribArray(1); glEnableVertexAttribArray(2); glEnableVertexAttribArray(3);
        glVertexAttribPointer(0, 3, GL_FLOAT, 0, sizeof(gfx_hvtx_t), &bhv[0].x);
        glVertexAttribPointer(1, 3, GL_FLOAT, 0, sizeof(gfx_hvtx_t), &bhv[0].nx);
        glVertexAttribPointer(2, 2, GL_FLOAT, 0, sizeof(gfx_hvtx_t), &bhv[0].u);
        glVertexAttribPointer(3, 4, GL_FLOAT, 0, sizeof(gfx_hvtx_t), &bhv[0].r);
        if (h->skin) { glEnableVertexAttribArray(4); glEnableVertexAttribArray(5);
            glVertexAttribPointer(4, 4, GL_FLOAT, 0, sizeof(gfx_hvtx_t), &bhv[0].w[0]); glVertexAttribPointer(5, 4, GL_FLOAT, 0, sizeof(gfx_hvtx_t), &bhv[0].w[4]); }
        else { glDisableVertexAttribArray(4); glDisableVertexAttribArray(5); }
        if (pbr) {
            float sv[3]; const float *V = sh_view; static const float I12[12] = {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0}; if (!sh_view_any) V = I12;
            for (int c = 0; c < 3; c++) sv[c] = sh_sun[0] * V[c] + sh_sun[1] * V[3 + c] + sh_sun[2] * V[6 + c]; norm3(sv);
            glUniform4f(P->pbr, bst.texmr ? 1.0f : 0.0f, bst.texn ? 1.0f : 0.0f, pbr_spec, 1.0f); glUniform4f(P->sun, sv[0], sv[1], sv[2], 0); glUniform4f(P->sunc, pbr_sunc[0], pbr_sunc[1], pbr_sunc[2], 1);
            glUniform1i(P->mr, 2); glUniform1i(P->nm, 3);
            glActiveTexture(GL_TEXTURE0 + 2); glBindTexture(GL_TEXTURE_2D, bst.texmr ? bst.texmr : bst.texid);
            glActiveTexture(GL_TEXTURE0 + 3); glBindTexture(GL_TEXTURE_2D, bst.texn ? bst.texn : bst.texid); glActiveTexture(GL_TEXTURE0);
            glEnableVertexAttribArray(6); glVertexAttribPointer(6, 3, GL_FLOAT, 0, sizeof(gfx_hvtx_t), &bhv[0].tx); }
        else glDisableVertexAttribArray(6);
    } else {
    apply_state(&bst, &P_main);
    glDisableVertexAttribArray(4); glDisableVertexAttribArray(5); glDisableVertexAttribArray(6);
    glEnableVertexAttribArray(0); glEnableVertexAttribArray(1); glEnableVertexAttribArray(2); glEnableVertexAttribArray(3);
    glVertexAttribPointer(0, 4, GL_FLOAT, 0, sizeof(gfx_vtx_t), &bv[0].x);
    glVertexAttribPointer(1, 2, GL_FLOAT, 0, sizeof(gfx_vtx_t), &bv[0].u);
    glVertexAttribPointer(2, 4, GL_FLOAT, 0, sizeof(gfx_vtx_t), &bv[0].r);
    glVertexAttribPointer(3, 1, GL_FLOAT, 0, sizeof(gfx_vtx_t), &bv[0].f); }
    { u64 t_d = rs_perf_us(); glDrawArrays(GL_TRIANGLES, 0, bn); rs_perf.draw_us += rs_perf_us() - t_d; rs_perf.batches++; } if (bkind == 1 && pbr_ok) glDisableVertexAttribArray(6); st_batches++; st_tris += bn / 3;
    static int dbg = -1; if (dbg < 0) dbg = getenv("RS_GL_DEBUG") != 0;
    if (dbg) { unsigned e = glGetError(); if (e) fprintf(stderr, "[GL] error 0x%x after batch of %d verts\n", e, bn); }
    bn = 0; }
void gfx_flush(void){ flush_batch(); }

void gfx_draw_hw(const gfx_state_t *st, const gfx_hw_t *hw, const gfx_hvtx_t *v, int n){
    if (n <= 0) return; st_draws++; sh_record(st, hw, v, n);
    if (bactive && (bkind != 1 || memcmp(&bst, st, sizeof *st) != 0 || memcmp(&bhw, hw, sizeof *hw) != 0 || bn + n > bhcap)) flush_batch();
    if (!bhv || n > bhcap) { int nc = n > (1 << 16) ? n : (1 << 16); bhv = realloc(bhv, sizeof(gfx_hvtx_t) * (size_t)nc); bhcap = nc; }
    if (!bactive) { bst = *st; bhw = *hw; bactive = 1; bkind = 1; bn = 0; }
    memcpy(&bhv[bn], v, sizeof(gfx_hvtx_t) * (size_t)n); bn += n; }

void gfx_draw(const gfx_state_t *st, const gfx_vtx_t *v, int n){
    if (n <= 0) return; st_draws++;
    if (bactive && (bkind != 0 || memcmp(&bst, st, sizeof *st) != 0 || bn + n > bcap)) flush_batch();
    if (!bv || n > bcap) { int nc = n > (1 << 17) ? n : (1 << 17); bv = realloc(bv, sizeof(gfx_vtx_t) * (size_t)nc); bcap = nc; }
    if (!bactive) { bst = *st; bactive = 1; bkind = 0; bn = 0; }
    memcpy(&bv[bn], v, sizeof(gfx_vtx_t) * (size_t)n); bn += n; }

void gfx_clear(const gfx_state_t *st, int x0, int y0, int x1, int y1, const float rgba[4], float depth, int cc, int ca, int cz){
    flush_batch(); surf_t *t = target_for(st); raw_bind(t); st_clears++;
    { static int lg = -1, n; if (lg < 0) lg = getenv("RS_FB_LOG") != 0; if (lg && n++ < 20) fprintf(stderr, "[FB] clear %08x rect %d,%d-%d,%d colour=%d alpha/stencil=%d depth=%d z=%.4f rgba=%.2f,%.2f,%.2f,%.2f\n", st->fbaddr, x0, y0, x1, y1, cc, ca, cz, depth, rgba[0], rgba[1], rgba[2], rgba[3]); }
    if (x0 < 0) x0 = 0; if (y0 < 0) y0 = 0; if (x1 > SZ - 1) x1 = SZ - 1; if (y1 > SZ - 1) y1 = SZ - 1;
    int sx1 = st->sx1 > x0 ? st->sx1 : x0, sy1 = st->sy1 > y0 ? st->sy1 : y0, sx2 = st->sx2 < x1 ? st->sx2 : x1, sy2 = st->sy2 < y1 ? st->sy2 : y1;
    if (sx2 < sx1 || sy2 < sy1) return;
    glViewport(0, 0, PX, PX); glEnable(GL_SCISSOR_TEST); glScissor(sx1 * RS_S, sy1 * RS_S, (sx2 - sx1 + 1) * RS_S, (sy2 - sy1 + 1) * RS_S);
    unsigned mask = 0;
    if (cc && ca) { glColorMask(1, 1, 1, 1); glClearColor(rgba[0], rgba[1], rgba[2], rgba[3]); mask |= GL_COLOR_BUFFER_BIT; }
    else if ((cc || ca) && prog_fill) {                 /* partial colour clear: draw a quad through the colour mask */
        glDisable(GL_DEPTH_TEST); glDepthMask(0); glDisable(GL_BLEND); glDisable(GL_STENCIL_TEST); glDisable(GL_CULL_FACE); glColorMask(cc, cc, cc, ca);
        glUseProgram(prog_fill); glUniform4f(u_fcol, rgba[0], rgba[1], rgba[2], rgba[3]);
        static const float q[8] = {-1, -1, 1, -1, -1, 1, 1, 1};
        for (int a = 1; a < 6; a++) glDisableVertexAttribArray(a); glEnableVertexAttribArray(0); glVertexAttribPointer(0, 2, GL_FLOAT, 0, 8, q);
        glDrawArrays(GL_TRIANGLE_STRIP, 0, 4); glColorMask(1, 1, 1, 1); }
    if (cz) { glDepthMask(1); rs_gl_clear_depth(depth < 0 ? 0 : (depth > 1 ? 1 : depth)); mask |= GL_DEPTH_BUFFER_BIT; }
    if (ca && has_stencil) { int sv = (int)(rgba[3] * 255.0f + 0.5f); glStencilMask(0xFF); glClearStencil(sv < 0 ? 0 : (sv > 255 ? 255 : sv)); mask |= GL_STENCIL_BUFFER_BIT; }   /* PSP: the alpha clear IS the stencil clear */
    if (mask) glClear(mask); }

/* ------------------------------------------------------------------ transfers (sceGuCopyImage) */
void gfx_transfer(u32 src, int sbw, int sx, int sy, u32 dst, int dbw, int dx, int dy, int w, int h, int bpp){
    (void)sbw;
    flush_batch();
    int ys = 0, yd = 0, xs = 0, xd = 0; surf_t *ss = surf_for_addr(src, &ys, &xs), *ds = surf_for_addr(dst, &yd, &xd);
    { static int lg = -1, n; if (lg < 0) lg = getenv("RS_FB_LOG") != 0; if (lg && n++ < 60) fprintf(stderr, "[FB] transfer %08x(%d,%d bw%d) -> %08x(%d,%d bw%d) %dx%d bpp%d  src_surf=%d dst_surf=%d\n", src, sx, sy, sbw, dst, dx, dy, dbw, w, h, bpp, ss != 0, ds != 0); }
    if (w <= 0 || h <= 0 || w > SZ || h > SZ) return;
    if (ss) {
        if (!ds) { ds = surf_create(dst, ss->fmt, dbw); ds->drawn = 1; yd = xd = 0; ss = surf_for_addr(src, &ys, &xs); if (!ss) return; }
        if (ds == ss) return;
        raw_bind(ss); glBindTexture(GL_TEXTURE_2D, ds->tex); u64 t_c = rs_perf_us(); rs_perf.copy_n++;
        glCopyTexSubImage2D(GL_TEXTURE_2D, 0, (dx + xd) * RS_S, (dy + yd) * RS_S, (sx + xs) * RS_S, (sy + ys) * RS_S, w * RS_S, h * RS_S); ds->stamp = ++surf_stamp; rs_perf.copy_us += rs_perf_us() - t_c;
    } else if (ds) {                                         /* CPU memory -> GPU surface */
        u32 *tmp = malloc((size_t)w * h * 4); if (!tmp) return; int fmt = bpp == 4 ? 3 : (ds->psz == 2 ? ds->fmt : 1);
        for (int y = 0; y < h; y++) for (int x = 0; x < w; x++) tmp[y * w + x] = gfx_px_read(gfx_gp(src + (u32)(((sy + y) * sbw + sx + x) * bpp)), fmt);
        if (RS_S > 1) {                                       /* pixel-replicate to the internal resolution */
            u32 *big = malloc((size_t)w * h * 4 * RS_S * RS_S); if (!big) { free(tmp); return; }
            for (int y = 0; y < h * RS_S; y++) for (int x = 0; x < w * RS_S; x++) big[y * w * RS_S + x] = tmp[(y / RS_S) * w + x / RS_S];
            free(tmp); tmp = big; }
        glBindTexture(GL_TEXTURE_2D, ds->tex); glPixelStorei(GL_UNPACK_ALIGNMENT, 4); glTexSubImage2D(GL_TEXTURE_2D, 0, (dx + xd) * RS_S, (dy + yd) * RS_S, w * RS_S, h * RS_S, GL_RGBA, GL_UNSIGNED_BYTE, tmp); free(tmp); } }

/* ------------------------------------------------------------------ display */
void gfx_get_display(u32 *a, u32 *s, u32 *f){ *a = disp_addr; *s = disp_stride; *f = disp_fmt; }
void gfx_set_display(u32 addr, u32 stride, u32 fmt){ { static int lg = -1, n; if (lg < 0) lg = getenv("RS_FB_LOG") != 0; if (lg && n < 40 && akey(addr) != disp_addr) { n++; fprintf(stderr, "[FB] display %08x stride %u fmt %u\n", addr, stride, fmt); } }
    if (addr) { disp_addr = akey(addr); disp_stride = stride ? stride : 512; disp_fmt = fmt & 3; } }
static surf_t *disp_surface(void){ surf_t *s = surf_find(disp_addr); return (s && s->drawn) ? s : 0; }
static void cpu_display(u32 *out){ rs_perf.cpu_disp_n++;
    for (int y = 0; y < 272; y++) for (int x = 0; x < 480; x++) {
        u32 a = disp_addr + (u32)((y * disp_stride + x) * (disp_fmt == 3 ? 4 : 2)); out[y * 480 + x] = gfx_px_read(g_mem + GADDR(a | 0x04000000u), disp_fmt) | 0xFF000000u; } }

int gfx_read_display(u32 *out){
    if (!disp_addr) return 0;
    flush_batch(); surf_t *s = disp_surface();
    if (!s) { cpu_display(out); return 1; }
    raw_bind(s); glPixelStorei(0x0D05 /*PACK_ALIGNMENT*/, 4); rs_perf.readback_n++;
    if (RS_S == 1) glReadPixels(0, 0, 480, 272, GL_RGBA, GL_UNSIGNED_BYTE, out);
    else { static u32 *big; if (!big) big = malloc((size_t)480 * 272 * 4 * RS_S * RS_S); glReadPixels(0, 0, 480 * RS_S, 272 * RS_S, GL_RGBA, GL_UNSIGNED_BYTE, big);
        for (int y = 0; y < 272; y++) for (int x = 0; x < 480; x++) out[y * 480 + x] = big[(y * RS_S + RS_S / 2) * 480 * RS_S + x * RS_S + RS_S / 2]; }
    for (int i = 0; i < 480 * 272; i++) out[i] |= 0xFF000000u;
    return 1; }

/* full internal-resolution copy of the display surface (debug/screenshots): returns malloc'd RGBA, *w/*h = 480*S x 272*S */
u32 *gfx_read_display_full(int *w, int *h){
    flush_batch(); surf_t *s = disp_surface(); if (!s) return 0;
    *w = 480 * RS_S; *h = 272 * RS_S; u32 *b = malloc((size_t)*w * *h * 4); if (!b) return 0;
    raw_bind(s); glPixelStorei(0x0D05, 4); glReadPixels(0, 0, *w, *h, GL_RGBA, GL_UNSIGNED_BYTE, b); return b; }

static void present_to(unsigned fbo, int ww, int wh){
    flush_batch(); if (ww <= 0 || wh <= 0) return;
    surf_t *s = disp_surface(); unsigned tex = 0;
    if (s) tex = s->tex;
    else if (disp_addr) {
        static u32 pix[480 * 272]; cpu_display(pix);
        if (!cpu_tex) { glGenTextures(1, &cpu_tex); glBindTexture(GL_TEXTURE_2D, cpu_tex); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE); glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, SZ, SZ, 0, GL_RGBA, GL_UNSIGNED_BYTE, 0); }
        glBindTexture(GL_TEXTURE_2D, cpu_tex); glPixelStorei(GL_UNPACK_ALIGNMENT, 4); glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, 480, 272, GL_RGBA, GL_UNSIGNED_BYTE, pix); tex = cpu_tex; }
    glBindFramebuffer(GL_FRAMEBUFFER, fbo); cur_target = 0;
    glDisable(GL_SCISSOR_TEST); glDisable(GL_DEPTH_TEST); glDisable(GL_BLEND); glDisable(GL_CULL_FACE); glColorMask(1, 1, 1, 1);
    glViewport(0, 0, ww, wh); glClearColor(0, 0, 0, 1); glClear(GL_COLOR_BUFFER_BIT);
    if (!tex) return;
    int dw = ww, dh = ww * 272 / 480; if (dh > wh) { dh = wh; dw = wh * 480 / 272; }
    float x0 = -(float)dw / ww, x1 = (float)dw / ww, y0 = -(float)dh / wh, y1 = (float)dh / wh;
    /* GL row 0 of the surface is the TOP of the PSP picture, and the window's y axis points up: v=0 -> top edge */
    float q[16] = {x0, y1, 0, 0,  x1, y1, 480.0f / SZ, 0,  x0, y0, 0, 272.0f / SZ,  x1, y0, 480.0f / SZ, 272.0f / SZ};
    if (s && use_fxaa && prog_fxaa) {                    /* FXAA on the internal-resolution picture while scaling it to the screen */
        glUseProgram(prog_fxaa); glActiveTexture(GL_TEXTURE0); glBindTexture(GL_TEXTURE_2D, tex); glUniform1i(u_ftex, 0);
        glUniform4f(u_ftexel, 1.0f / PX, 1.0f / PX, (480.0f * RS_S - 0.5f) / PX, (272.0f * RS_S - 0.5f) / PX);
    } else { glUseProgram(prog_pres); glActiveTexture(GL_TEXTURE0); glBindTexture(GL_TEXTURE_2D, tex); glUniform1i(u_ptex, 0); }
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glDisableVertexAttribArray(2); glDisableVertexAttribArray(3); glDisableVertexAttribArray(4); glDisableVertexAttribArray(5); glEnableVertexAttribArray(0); glEnableVertexAttribArray(1);
    glVertexAttribPointer(0, 2, GL_FLOAT, 0, 16, &q[0]); glVertexAttribPointer(1, 2, GL_FLOAT, 0, 16, &q[2]);
    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4); }

void gfx_present(int ww, int wh){ u64 t = rs_perf_us(); present_to(0, ww, wh); rs_perf.present_n++; rs_perf.present_us += rs_perf_us() - t; }
/* debug: run the present pass (incl. FXAA) into an offscreen w x h image -> malloc'd RGBA, row 0 = bottom (GL order) */
u32 *gfx_present_image(int w, int h){
    unsigned fbo, t; glGenFramebuffers(1, &fbo); glGenTextures(1, &t); glBindTexture(GL_TEXTURE_2D, t);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, 0); glBindFramebuffer(GL_FRAMEBUFFER, fbo);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, t, 0);
    present_to(fbo, w, h); u32 *b = malloc((size_t)w * h * 4); glBindFramebuffer(GL_FRAMEBUFFER, fbo); glPixelStorei(0x0D05, 4);
    if (b) glReadPixels(0, 0, w, h, GL_RGBA, GL_UNSIGNED_BYTE, b);
    glBindFramebuffer(GL_FRAMEBUFFER, 0); glDeleteFramebuffers(1, &fbo); glDeleteTextures(1, &t); return b; }

void gfx_cache_stats(char *buf, int n){ int used = 0; unsigned long px = 0; for (int i = 0; i < TC_N; i++) if (tc[i].used) { used++; px += (unsigned long)tc[i].bytes; }
    int ns = 0; for (int i = 0; i < SURF_N; i++) ns += surfs[i].used;
    snprintf(buf, (size_t)n, "texture cache %d/%d entries, %.1f MB; %d render surfaces", used, TC_N, px / 1048576.0, ns); }
void gfx_stats(char *buf, int n){ int ns = 0; for (int i = 0; i < SURF_N; i++) ns += surfs[i].used; snprintf(buf, (size_t)n, "draws=%u batches=%u tris=%u clears=%u texture-uploads=%u surfaces=%d", st_draws, st_batches, st_tris, st_clears, st_texup, ns); }

static void norm3(float *v){ float l = sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]); if (l > 1e-9f) { v[0] /= l; v[1] /= l; v[2] /= l; } }
static void shadow_pass(void){
    if (!sh_on || !sh_fbo) { shr_n = shv_n = 0; return; }
    if (!sh_cam_ok || !shr_n) { sh_valid = 0; shr_n = shv_n = 0; return; }
    flush_batch();
    /* Every 3D draw's world*view lands in the camera ("view") space, so the shadow map is built there.  The real world orientation (for a
     * fixed sun and texel snapping) comes from the frame's GE view matrix; without one the sun simply stays fixed relative to the camera. */
    static const float I12[12] = {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0}; const float *V = sh_view_ok ? sh_view : I12;
    const float *d = sh_sun; float up[3] = {0, 1, 0}; if (fabsf(d[1]) > 0.95f) { up[0] = 1; up[1] = 0; }
    float X[3] = {up[1] * d[2] - up[2] * d[1], up[2] * d[0] - up[0] * d[2], up[0] * d[1] - up[1] * d[0]}; norm3(X);
    float Y[3] = {d[1] * X[2] - d[2] * X[1], d[2] * X[0] - d[0] * X[2], d[0] * X[1] - d[1] * X[0]};
    const float *t = V + 9; float cw[3], fw[3], Xv[3], Yv[3], dv[3];
    for (int j = 0; j < 3; j++) { cw[j] = -(t[0] * V[j * 3] + t[1] * V[j * 3 + 1] + t[2] * V[j * 3 + 2]); fw[j] = -V[j * 3 + 2]; }
    for (int c = 0; c < 3; c++) { Xv[c] = X[0] * V[c] + X[1] * V[3 + c] + X[2] * V[6 + c]; Yv[c] = Y[0] * V[c] + Y[1] * V[3 + c] + Y[2] * V[6 + c]; dv[c] = d[0] * V[c] + d[1] * V[3 + c] + d[2] * V[6 + c]; }
    float R = sh_range, D = sh_range * 3.0f, C[3]; for (int j = 0; j < 3; j++) C[j] = cw[j] + fw[j] * R * 0.5f;
    float tx = 2.0f * R / (float)sh_res, cx = C[0] * X[0] + C[1] * X[1] + C[2] * X[2], cy = C[0] * Y[0] + C[1] * Y[1] + C[2] * Y[2], cz = C[0] * d[0] + C[1] * d[1] + C[2] * d[2];
    cx = floorf(cx / tx) * tx; cy = floorf(cy / tx) * tx;                     /* snap to texels: no shimmering while the camera moves */
    float tX = t[0] * Xv[0] + t[1] * Xv[1] + t[2] * Xv[2], tY = t[0] * Yv[0] + t[1] * Yv[1] + t[2] * Yv[2], tD = t[0] * dv[0] + t[1] * dv[1] + t[2] * dv[2];
    float M[16] = {Xv[0] / (2 * R), Xv[1] / (2 * R), Xv[2] / (2 * R), 0.5f + (-tX - cx) / (2 * R),
                   Yv[0] / (2 * R), Yv[1] / (2 * R), Yv[2] / (2 * R), 0.5f + (-tY - cy) / (2 * R),
                   -dv[0] / (2 * D), -dv[1] / (2 * D), -dv[2] / (2 * D), (tD + cz + D) / (2 * D),
                   dv[0], dv[1], dv[2], 0.0f};
    glBindFramebuffer(GL_FRAMEBUFFER, sh_fbo); cur_target = 0;
    glViewport(0, 0, sh_res, sh_res); glDisable(GL_SCISSOR_TEST); glDisable(GL_BLEND); glDisable(GL_STENCIL_TEST); glDisable(GL_CULL_FACE);
    glColorMask(1, 1, 1, 1); glDepthMask(1); glEnable(GL_DEPTH_TEST); glDepthFunc(GL_LESS);
    glClearColor(1, 1, 1, 1); rs_gl_clear_depth(1.0f); glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glDisableVertexAttribArray(1); glDisableVertexAttribArray(2); glDisableVertexAttribArray(3); glEnableVertexAttribArray(0);
    u64 t0 = rs_perf_us();
    for (int i = 0; i < shr_n; i++) { const shrec_t *r = &shr[i]; const prog_t *P = &P_shd[r->skin ? 1 : 0];
        glUseProgram(P->id); glUniform4fv(P->wvm, 3, r->wv); glUniform4fv(P->shm, 4, M); if (r->skin) glUniform4fv(P->b, 24, r->bone);
        glVertexAttribPointer(0, 3, GL_FLOAT, 0, sizeof(gfx_hvtx_t), &shv[r->first].x);
        if (r->skin) { glEnableVertexAttribArray(4); glEnableVertexAttribArray(5); glVertexAttribPointer(4, 4, GL_FLOAT, 0, sizeof(gfx_hvtx_t), &shv[r->first].w[0]); glVertexAttribPointer(5, 4, GL_FLOAT, 0, sizeof(gfx_hvtx_t), &shv[r->first].w[4]); }
        else { glDisableVertexAttribArray(4); glDisableVertexAttribArray(5); }
        glDrawArrays(GL_TRIANGLES, 0, r->count); }
    rs_perf.shadow_us += rs_perf_us() - t0; rs_perf.shadow_draws += (u64)shr_n; sh_draws_total += (u64)shr_n;
    glDisableVertexAttribArray(4); glDisableVertexAttribArray(5);
    { static int dbg = -1; if (dbg < 0) dbg = getenv("RS_SHADOW_DEBUG") != 0;
      if (dbg) { static u32 *px; if (!px) px = malloc((size_t)sh_res * sh_res * 4); glReadPixels(0, 0, sh_res, sh_res, GL_RGBA, GL_UNSIGNED_BYTE, px);
          int nfar = 0; for (int i = 0; i < sh_res * sh_res; i++) if (px[i] == 0xFFFFFFFFu) nfar++;
          fprintf(stderr, "[SHADOW] %d draws, %d verts, view known %d, camera (%.1f %.1f %.1f); %.1f%% of the map covered\n", shr_n, shv_n, sh_view_ok, cw[0], cw[1], cw[2], 100.0 - 100.0 * nfar / (sh_res * sh_res));
          FILE *f = fopen("shadowmap.pgm", "wb"); if (f) { fprintf(f, "P5\n%d %d\n255\n", sh_res, sh_res); for (int i = 0; i < sh_res * sh_res; i++) fputc(px[i] & 255, f); fclose(f); } } }
    glBindFramebuffer(GL_FRAMEBUFFER, 0); cur_target = 0;
    memcpy(sh_mat, M, sizeof M); sh_valid = 1; shr_n = shv_n = 0; sh_cam_ok = 0; sh_view_ok = 0; }
void gfx_shadow_frame(void){ shadow_pass(); }                     /* frame boundary (GL thread) */
static void shadow_init(void){
    extern u32 rs_patch_shadows(void); extern int rs_patch_shadow_res(void), rs_patch_shadow_range(void), rs_patch_shadow_strength(void); extern void rs_patch_shadow_sun(float *);
    sh_on = hw_ok && rs_patch_shadows(); if (!sh_on) { fprintf(stderr, "[GL] real-time shadows: off\n"); return; }
    sh_res = rs_patch_shadow_res(); sh_range = (float)rs_patch_shadow_range(); sh_strength = rs_patch_shadow_strength() / 100.0f; rs_patch_shadow_sun(sh_sun); norm3(sh_sun);
    static const char *hattrs[6] = {"aP", "aN", "aT", "aC", "aW0", "aW1"};
    for (int v = 0; v < 2; v++) { size_t n = strlen(HWVS_HEAD) + strlen(SHVS_BODY) + strlen(SHVS_MAIN) + 32; char *src = malloc(n);
        snprintf(src, n, "%s%s%s%s", HWVS_HEAD, v ? "#define SKIN 1\n" : "", SHVS_BODY, SHVS_MAIN);
        P_shd[v].id = link_prog(src, SHFS_SRC, v ? "shadow depth (skinned)" : "shadow depth", hattrs, 6); free(src);
        if (!P_shd[v].id) { sh_on = 0; fprintf(stderr, "[GL] real-time shadows: depth shader failed - off\n"); return; } prog_locs(&P_shd[v]); }
    glGenTextures(1, &sh_tex); glBindTexture(GL_TEXTURE_2D, sh_tex);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, sh_res, sh_res, 0, GL_RGBA, GL_UNSIGNED_BYTE, 0);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glGenFramebuffers(1, &sh_fbo); glBindFramebuffer(GL_FRAMEBUFFER, sh_fbo); glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, sh_tex, 0);
    glGenRenderbuffers(1, &sh_rb); glBindRenderbuffer(GL_RENDERBUFFER, sh_rb); glRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH_COMPONENT16, sh_res, sh_res);
    glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, sh_rb);
    if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) { sh_on = 0; fprintf(stderr, "[GL] real-time shadows: shadow map FBO incomplete - off\n"); }
    glBindFramebuffer(GL_FRAMEBUFFER, 0); glBindTexture(GL_TEXTURE_2D, 0);
    fprintf(stderr, "[GL] real-time shadows: %s (%dx%d map, %.0f m range, sun %.2f %.2f %.2f, strength %.0f%%)\n", sh_on ? "on" : "off", sh_res, sh_res, sh_range, sh_sun[0], sh_sun[1], sh_sun[2], sh_strength * 100); }

int gfx_init(void){
    { extern u32 rs_patch_res_scale(void); RS_S = (int)rs_patch_res_scale(); }
    static const char *attrs[4] = {"aPos", "aUV", "aCol", "aFog"}, *pattrs[2] = {"aPos", "aUV"};
    prog_main = link_prog(VS_SRC, FS_SRC, "main", attrs, 4); prog_pres = link_prog(PVS_SRC, PFS_SRC, "present", pattrs, 2);
    if (!prog_main || !prog_pres) return -1;
    P_main.id = prog_main; prog_locs(&P_main);
    { static const char *fattrs[1] = {"aPos"}; prog_fill = link_prog(FILLVS_SRC, FILLFS_SRC, "fill", fattrs, 1); if (prog_fill) u_fcol = glGetUniformLocation(prog_fill, "uCol");
      else fprintf(stderr, "[GL] fill shader failed: masked clears fall back to glClear\n"); }
    { extern u32 rs_patch_hw_transform(void); static const char *hattrs[6] = {"aP", "aN", "aT", "aC", "aW0", "aW1"}; hw_ok = rs_patch_hw_transform() != 0;
      for (int v = 0; v < 4 && hw_ok; v++) { size_t n = strlen(HWVS_HEAD) + strlen(HWVS_BODY) + strlen(HWVS_MAIN) + 64; char *src = malloc(n);
          snprintf(src, n, "%s%s%s%s%s", HWVS_HEAD, (v & 1) ? "#define SKIN 1\n" : "", (v & 2) ? "#define LIT 1\n" : "", HWVS_BODY, HWVS_MAIN);
          char nm[32]; snprintf(nm, sizeof nm, "hw T&L %d", v);
          { extern u32 rs_patch_shadows(void); char *rfs = rs_patch_shadows() ? receiver_fs() : 0;
            P_hw[v].id = link_prog(src, rfs ? rfs : FS_SRC, nm, hattrs, 6);
            if (!P_hw[v].id && rfs) { fprintf(stderr, "[GL] shadow receiver shader failed - HW T&L without shadows\n"); P_hw[v].id = link_prog(src, FS_SRC, nm, hattrs, 6); }
            free(rfs); } free(src);
          if (!P_hw[v].id) hw_ok = 0; else prog_locs(&P_hw[v]); }
      fprintf(stderr, "[GL] vertex transform & lighting: %s\n", hw_ok ? "GPU (vertex shaders)" : "CPU"); }
    /* PBR variants: only compiled when mod textures are installed (each program costs startup time on the Vita) */
    { extern u32 rs_patch_pbr(void), rs_patch_shadows(void); extern void rs_patch_pbr_sun(float *, float *), rs_patch_shadow_sun(float *); extern int rs_texrep_active(void);
      rs_patch_shadow_sun(sh_sun); norm3(sh_sun); rs_patch_pbr_sun(pbr_sunc, &pbr_spec);
      if (hw_ok && rs_patch_pbr() && rs_texrep_active()) { static const char *pattrs7[7] = {"aP", "aN", "aT", "aC", "aW0", "aW1", "aTg"}; pbr_ok = 1;
        char *pfs = pbr_fs(); char *rfs = (pfs && rs_patch_shadows()) ? receiver_fs_from(pfs) : 0;
        for (int v = 0; v < 4 && pbr_ok; v++) { size_t n = strlen(HWVS_HEAD) + strlen(HWVS_BODY) + strlen(HWVS_MAIN_PBR) + 80; char *src = malloc(n);
            snprintf(src, n, "%s#define PBR 1\n%s%s%s%s", HWVS_HEAD, (v & 1) ? "#define SKIN 1\n" : "", (v & 2) ? "#define LIT 1\n" : "", HWVS_BODY, HWVS_MAIN_PBR);
            char nm[32]; snprintf(nm, sizeof nm, "hw T&L PBR %d", v);
            P_hwp[v].id = pfs ? link_prog(src, rfs ? rfs : pfs, nm, pattrs7, 7) : 0;
            if (!P_hwp[v].id && rfs) P_hwp[v].id = link_prog(src, pfs, nm, pattrs7, 7);
            free(src); if (!P_hwp[v].id) pbr_ok = 0; else prog_locs(&P_hwp[v]); }
        free(pfs); free(rfs); }
      fprintf(stderr, "[GL] PBR shading for mod textures: %s\n", pbr_ok ? "on" : "off"); }
    shadow_init();
    { extern u32 rs_patch_fxaa(void); use_fxaa = (int)rs_patch_fxaa(); }
    prog_fxaa = link_prog(PVS_SRC, FFS_SRC, "fxaa", pattrs, 2);
    if (prog_fxaa) { u_ftex = glGetUniformLocation(prog_fxaa, "uTex"); u_ftexel = glGetUniformLocation(prog_fxaa, "uTexel"); }
    else fprintf(stderr, "[GL] FXAA shader unavailable - presenting without it\n");
    u_ptex = glGetUniformLocation(prog_pres, "uTex");
    /* depth (+ stencil): packed D24S8 (OES_packed_depth_stencil, vitaGL), else D16 + separate S8 (ES2 core), else D16 alone (stencil effects off) */
    { unsigned tfbo, ttex; glGenFramebuffers(1, &tfbo); glGenTextures(1, &ttex); glBindTexture(GL_TEXTURE_2D, ttex);
      glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, PX, PX, 0, GL_RGBA, GL_UNSIGNED_BYTE, 0); glBindFramebuffer(GL_FRAMEBUFFER, tfbo);
      glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, ttex, 0); glGetError();
      for (int mode = 0; mode < 3; mode++) {
          glGenRenderbuffers(1, &depth_rb); glBindRenderbuffer(GL_RENDERBUFFER, depth_rb); sten_rb = 0;
          if (mode == 0) { glRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH24_STENCIL8_OES, PX, PX); if (glGetError()) { glDeleteRenderbuffers(1, &depth_rb); continue; } sten_rb = depth_rb; }
          else { glRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH_COMPONENT16, PX, PX);
                 if (mode == 1) { glGenRenderbuffers(1, &sten_rb); glBindRenderbuffer(GL_RENDERBUFFER, sten_rb); glRenderbufferStorage(GL_RENDERBUFFER, GL_STENCIL_INDEX8, PX, PX); glGetError(); } }
          glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, depth_rb);
          glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_STENCIL_ATTACHMENT, GL_RENDERBUFFER, sten_rb);
          if (glCheckFramebufferStatus(GL_FRAMEBUFFER) == GL_FRAMEBUFFER_COMPLETE) { has_stencil = sten_rb != 0; break; }
          glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, 0); glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_STENCIL_ATTACHMENT, GL_RENDERBUFFER, 0);
          if (sten_rb && sten_rb != depth_rb) glDeleteRenderbuffers(1, &sten_rb); glDeleteRenderbuffers(1, &depth_rb); depth_rb = sten_rb = 0; }
      glBindFramebuffer(GL_FRAMEBUFFER, 0); glDeleteFramebuffers(1, &tfbo); glDeleteTextures(1, &ttex);
      fprintf(stderr, "[GL] depth/stencil: %s\n", !depth_rb ? "NONE" : (sten_rb == depth_rb ? "D24S8 packed" : (sten_rb ? "D16 + S8" : "D16 only (no stencil)"))); }
    glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
    fprintf(stderr, "[GL] renderer ready (GLES2-class shaders, %dx%d surfaces = %dx internal resolution)\n", PX, PX, RS_S);
    return 0; }


/* ------------------------------------------------------------------ debug HUD text (frontend thread, drawn into the window after present) */
static const unsigned char hud_font[64][7] = {{0x00,0x00,0x00,0x00,0x00,0x00,0x00},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x18,0x19,0x02,0x04,0x08,0x13,0x03},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x02,0x04,0x08,0x08,0x08,0x04,0x02},{0x08,0x04,0x02,0x02,0x02,0x04,0x08},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x00,0x04,0x04,0x1f,0x04,0x04,0x00},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x00,0x00,0x00,0x1f,0x00,0x00,0x00},{0x00,0x00,0x00,0x00,0x00,0x0c,0x0c},{0x00,0x01,0x02,0x04,0x08,0x10,0x00},{0x0e,0x11,0x13,0x15,0x19,0x11,0x0e},{0x04,0x0c,0x04,0x04,0x04,0x04,0x0e},{0x0e,0x11,0x01,0x02,0x04,0x08,0x1f},{0x1e,0x01,0x01,0x0e,0x01,0x01,0x1e},{0x02,0x06,0x0a,0x12,0x1f,0x02,0x02},{0x1f,0x10,0x1e,0x01,0x01,0x11,0x0e},{0x06,0x08,0x10,0x1e,0x11,0x11,0x0e},{0x1f,0x01,0x02,0x04,0x08,0x08,0x08},{0x0e,0x11,0x11,0x0e,0x11,0x11,0x0e},{0x0e,0x11,0x11,0x0f,0x01,0x02,0x0c},{0x00,0x0c,0x0c,0x00,0x0c,0x0c,0x00},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x0e,0x11,0x11,0x1f,0x11,0x11,0x11},{0x1e,0x11,0x11,0x1e,0x11,0x11,0x1e},{0x0e,0x11,0x10,0x10,0x10,0x11,0x0e},{0x1c,0x12,0x11,0x11,0x11,0x12,0x1c},{0x1f,0x10,0x10,0x1e,0x10,0x10,0x1f},{0x1f,0x10,0x10,0x1e,0x10,0x10,0x10},{0x0e,0x11,0x10,0x17,0x11,0x11,0x0f},{0x11,0x11,0x11,0x1f,0x11,0x11,0x11},{0x0e,0x04,0x04,0x04,0x04,0x04,0x0e},{0x07,0x02,0x02,0x02,0x02,0x12,0x0c},{0x11,0x12,0x14,0x18,0x14,0x12,0x11},{0x10,0x10,0x10,0x10,0x10,0x10,0x1f},{0x11,0x1b,0x15,0x15,0x11,0x11,0x11},{0x11,0x11,0x19,0x15,0x13,0x11,0x11},{0x0e,0x11,0x11,0x11,0x11,0x11,0x0e},{0x1e,0x11,0x11,0x1e,0x10,0x10,0x10},{0x0e,0x11,0x11,0x11,0x15,0x12,0x0d},{0x1e,0x11,0x11,0x1e,0x14,0x12,0x11},{0x0f,0x10,0x10,0x0e,0x01,0x01,0x1e},{0x1f,0x04,0x04,0x04,0x04,0x04,0x04},{0x11,0x11,0x11,0x11,0x11,0x11,0x0e},{0x11,0x11,0x11,0x11,0x11,0x0a,0x04},{0x11,0x11,0x11,0x15,0x15,0x15,0x0a},{0x11,0x11,0x0a,0x04,0x0a,0x11,0x11},{0x11,0x11,0x11,0x0a,0x04,0x04,0x04},{0x1f,0x01,0x02,0x04,0x08,0x10,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f}};

void gfx_hud(const char *const *lines, int n, int ww, int wh){
    if (!prog_fill || n <= 0) return;
    static float *v; static int cap; int nv = 0, maxw = 0;
    const int S = 2, CW = 6 * S, LH = 9 * S, X0 = 6, Y0 = 6;
    for (int i = 0; i < n; i++) { int l = (int)strlen(lines[i]); if (l > maxw) maxw = l; }
    int need = 6 * 2 * (maxw * 35 * n + 1); if (need > cap) { cap = need; v = realloc(v, sizeof(float) * (size_t)cap); if (!v) { cap = 0; return; } }
#define HQ(x0, y0, x1, y1) do { float a = (x0) * 2.0f / ww - 1, b = 1 - (y0) * 2.0f / wh, c = (x1) * 2.0f / ww - 1, d = 1 - (y1) * 2.0f / wh; \
        float q[12] = {a, b, c, b, a, d, c, b, c, d, a, d}; memcpy(v + nv * 2, q, sizeof q); nv += 6; } while (0)
    flush_batch(); glBindFramebuffer(GL_FRAMEBUFFER, 0); cur_target = 0; glViewport(0, 0, ww, wh);
    glDisable(GL_SCISSOR_TEST); glDisable(GL_DEPTH_TEST); glDepthMask(0); glDisable(GL_STENCIL_TEST); glDisable(GL_CULL_FACE); glColorMask(1, 1, 1, 1);
    glUseProgram(prog_fill); for (int a = 1; a < 7; a++) glDisableVertexAttribArray(a); glEnableVertexAttribArray(0);
    HQ(X0 - 4, Y0 - 4, X0 + maxw * CW + 2, Y0 + n * LH + 2);
    glEnable(GL_BLEND); glBlendFuncSeparate(0x302, 0x303, GL_ONE, GL_ZERO); glBlendEquation(GL_FUNC_ADD);
    glUniform4f(u_fcol, 0, 0, 0, 0.55f); glVertexAttribPointer(0, 2, GL_FLOAT, 0, 8, v); glDrawArrays(GL_TRIANGLES, 0, nv); glDisable(GL_BLEND);
    nv = 0;
    for (int i = 0; i < n; i++) for (int k = 0; lines[i][k]; k++) {
        int ch = (unsigned char)lines[i][k]; if (ch >= 'a' && ch <= 'z') ch -= 32; if (ch < 32 || ch > 95) ch = '?';
        const unsigned char *g = hud_font[ch - 32];
        for (int r = 0; r < 7; r++) for (int c = 0; c < 5; c++) if (g[r] & (16 >> c)) { int x = X0 + k * CW + c * S, y = Y0 + i * LH + r * S; HQ(x, y, x + S, y + S); } }
#undef HQ
    if (nv) { glUniform4f(u_fcol, 1, 1, 0.6f, 1); glVertexAttribPointer(0, 2, GL_FLOAT, 0, 8, v); glDrawArrays(GL_TRIANGLES, 0, nv); } }

/* ------------------------------------------------------------------ guest thread <-> GL thread hand-off */
static pthread_mutex_t jm = PTHREAD_MUTEX_INITIALIZER; static pthread_cond_t jc_post = PTHREAD_COND_INITIALIZER, jc_done = PTHREAD_COND_INITIALIZER;
static struct { void (*fn)(void *); void *arg; } slot; static int slot_full, gl_ready; static unsigned long posted, done_seq; static pthread_t gl_th;
void gfx_thread_register(void){ pthread_mutex_lock(&jm); gl_th = pthread_self(); gl_ready = 1; pthread_cond_broadcast(&jc_done); pthread_mutex_unlock(&jm); }
void gfx_run(void (*fn)(void *), void *arg){
    if (gl_ready && pthread_equal(pthread_self(), gl_th)) { fn(arg); return; }
    pthread_mutex_lock(&jm);
    while (!gl_ready || slot_full) pthread_cond_wait(&jc_done, &jm);
    u64 t0 = rs_perf_us();
    slot.fn = fn; slot.arg = arg; slot_full = 1; unsigned long my = ++posted; pthread_cond_signal(&jc_post); wake_gl();
    while (done_seq < my) pthread_cond_wait(&jc_done, &jm);
    rs_perf.run_n++; rs_perf.run_wait_us += rs_perf_us() - t0;
    pthread_mutex_unlock(&jm); }
int gfx_pump(int wait_ms){
#ifdef __vita__
    if (wait_ms > 0) { pthread_mutex_lock(&jm); int full = slot_full; pthread_mutex_unlock(&jm); if (!full) wait_wake(wait_ms * 1000); wait_ms = 0; }
#endif
    pthread_mutex_lock(&jm);
    if (!slot_full && wait_ms > 0) { struct timespec ts; clock_gettime(CLOCK_REALTIME, &ts); ts.tv_nsec += (long)wait_ms * 1000000L; ts.tv_sec += ts.tv_nsec / 1000000000L; ts.tv_nsec %= 1000000000L; pthread_cond_timedwait(&jc_post, &jm, &ts); }
    int ran = slot_full;
    if (slot_full) { void (*fn)(void *) = slot.fn; void *arg = slot.arg; pthread_mutex_unlock(&jm); u64 t0 = rs_perf_us();
        if (sh_on && sh_frame != frame_seq) { sh_frame = frame_seq; shadow_pass(); }      /* first GE job of a new guest frame */
        fn(arg); gfx_flush(); rs_perf.job_us += rs_perf_us() - t0;
        pthread_mutex_lock(&jm); slot_full = 0; done_seq++; pthread_cond_broadcast(&jc_done); }
    pthread_mutex_unlock(&jm); return ran; }