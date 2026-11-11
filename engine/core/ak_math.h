/* Small vector/matrix math.  Matrices are column major (m[col*4+row]), column vectors, right-handed, clip z in [-1, 1].
 * Every back end consumes this convention (GXM's viewport and GL's map [-1, 1] the same way; Vulkan back ends remap). */
#ifndef AK_MATH_H
#define AK_MATH_H
#include "ak_core.h"
#include <math.h>

typedef struct { f32 x, y, z; } ak_v3;
static inline ak_v3 ak_v3_make(f32 x, f32 y, f32 z) { ak_v3 r = { x, y, z }; return r; }
static inline ak_v3 ak_v3_add(ak_v3 a, ak_v3 b) { return ak_v3_make(a.x + b.x, a.y + b.y, a.z + b.z); }
static inline ak_v3 ak_v3_scale(ak_v3 a, f32 s) { return ak_v3_make(a.x * s, a.y * s, a.z * s); }
static inline f32 ak_v3_dot(ak_v3 a, ak_v3 b) { return a.x * b.x + a.y * b.y + a.z * b.z; }
static inline ak_v3 ak_v3_cross(ak_v3 a, ak_v3 b) { return ak_v3_make(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x); }

typedef struct { f32 m[16]; } ak_m4;
static inline ak_m4 ak_m4_mul(const ak_m4 *a, const ak_m4 *b)
{
    ak_m4 r;
    for (int c = 0; c < 4; c++)
        for (int k = 0; k < 4; k++)
            r.m[c * 4 + k] = a->m[k] * b->m[c * 4] + a->m[4 + k] * b->m[c * 4 + 1] + a->m[8 + k] * b->m[c * 4 + 2] + a->m[12 + k] * b->m[c * 4 + 3];
    return r;
}
static inline ak_m4 ak_m4_perspective(f32 fovy, f32 aspect, f32 zn, f32 zf)
{
    ak_m4 r; memset(&r, 0, sizeof r);
    f32 f = 1.0f / tanf(fovy * 0.5f);
    r.m[0] = f / aspect; r.m[5] = f; r.m[10] = (zf + zn) / (zn - zf); r.m[11] = -1.0f; r.m[14] = 2.0f * zf * zn / (zn - zf);
    return r;
}
/* view matrix for a camera at pos looking along forward (yaw about +Y, pitch about the camera's right axis) */
static inline ak_m4 ak_m4_view_yaw_pitch(ak_v3 pos, f32 yaw, f32 pitch)
{
    f32 cy = cosf(yaw), sy = sinf(yaw), cp = cosf(pitch), sp = sinf(pitch);
    ak_v3 fwd = ak_v3_make(-sy * cp, sp, -cy * cp), right = ak_v3_make(cy, 0, -sy), up = ak_v3_cross(right, fwd);
    ak_m4 r;
    r.m[0] = right.x; r.m[4] = right.y; r.m[8] = right.z;  r.m[12] = -ak_v3_dot(right, pos);
    r.m[1] = up.x;    r.m[5] = up.y;    r.m[9] = up.z;     r.m[13] = -ak_v3_dot(up, pos);
    r.m[2] = -fwd.x;  r.m[6] = -fwd.y;  r.m[10] = -fwd.z;  r.m[14] = ak_v3_dot(fwd, pos);
    r.m[3] = 0; r.m[7] = 0; r.m[11] = 0; r.m[15] = 1;
    return r;
}

/* frustum planes (a, b, c, d: inside when a*x + b*y + c*z + d >= 0) from a view-projection matrix, and an AABB test */
typedef struct { f32 p[6][4]; } ak_frustum;
static inline ak_frustum ak_frustum_from(const ak_m4 *vp)
{
    ak_frustum f; const f32 *m = vp->m;
    for (int i = 0; i < 3; i++)
        for (int s = 0; s < 2; s++) {
            f32 sg = s ? -1.0f : 1.0f; f32 *p = f.p[i * 2 + s];
            for (int c = 0; c < 4; c++) p[c] = m[c * 4 + 3] + sg * m[c * 4 + i];
        }
    return f;
}
static inline bool ak_frustum_aabb(const ak_frustum *f, const f32 *mn, const f32 *mx)
{
    for (int i = 0; i < 6; i++) {
        const f32 *p = f->p[i];
        f32 x = p[0] >= 0 ? mx[0] : mn[0], y = p[1] >= 0 ? mx[1] : mn[1], z = p[2] >= 0 ? mx[2] : mn[2];
        if (p[0] * x + p[1] * y + p[2] * z + p[3] < 0) return false;
    }
    return true;
}
#endif
