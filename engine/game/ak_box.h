/* Aurek - oriented boxes: the bodies objects collide with each other by.
 *
 * Traced (see model.h: ak_skeleton.col_min / col_max): every soldier, vehicle and turret is one physics body whose shape is its
 * model's box, placed by the object's matrix.  The game's rigid-body world (func 088AFEF0) resolves contacts between them with
 * each body's inverse mass (+0x178), which is zero for static (body flag 0x10) and kinematic (0x20) bodies - so only a dynamic
 * body moves.  Which bodies are dynamic (slot 0x80: soldier 08AC363C, vehicles 089CD71C, turrets 089BB01C): the one the local
 * player controls (+0xC3, set by the controller hook 089DC70C when the controller is the local player) - the player's soldier, or
 * the vehicle they drive.  Everyone else is kinematic: AI soldiers and vehicles push the player out, are never pushed themselves,
 * and pass through each other.  Pairs collide when each one's mask (+0x18C, 0xFFFFFFFD) meets the other's group (+0x188, 1) and
 * neither is switched off (088BB7E0), which holds for all of these.
 *
 * Here: an exact separating-axis test between two boxes (15 axes) giving the shortest push that separates them, applied to the
 * player's body only. */
#ifndef AK_BOX_H
#define AK_BOX_H
#include <math.h>
#include "core/ak_core.h"

typedef struct { f32 c[3], ax[3][3], h[3]; } ak_box;     /* centre, unit axes (world), half extents */

/* a model-space box placed by a 3x4 row matrix (rows may carry a uniform scale) */
static inline void ak_box_place(ak_box *b, const f32 *mn, const f32 *mx, const f32 M[12])
{
    f32 lc[3] = { (mn[0] + mx[0]) * 0.5f, (mn[1] + mx[1]) * 0.5f, (mn[2] + mx[2]) * 0.5f };
    for (int r = 0; r < 3; r++) b->c[r] = M[r * 4] * lc[0] + M[r * 4 + 1] * lc[1] + M[r * 4 + 2] * lc[2] + M[r * 4 + 3];
    for (int k = 0; k < 3; k++) {
        f32 v[3] = { M[k], M[4 + k], M[8 + k] }, l = sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
        if (l < 1e-9f) l = 1;
        for (int r = 0; r < 3; r++) b->ax[k][r] = v[r] / l;
        b->h[k] = (mx[k] - mn[k]) * 0.5f * l;
    }
}

/* true when the boxes overlap; push then moves a out of b by the least distance */
static inline bool ak_box_push(const ak_box *a, const ak_box *b, f32 push[3])
{
    f32 d[3] = { a->c[0] - b->c[0], a->c[1] - b->c[1], a->c[2] - b->c[2] }, best = 1e30f, bn[3] = { 0, 1, 0 };
    for (int i = 0; i < 15; i++) {
        f32 n[3];
        if (i < 3) memcpy(n, a->ax[i], 12);
        else if (i < 6) memcpy(n, b->ax[i - 3], 12);
        else {
            const f32 *u = a->ax[(i - 6) / 3], *v = b->ax[(i - 6) % 3];
            n[0] = u[1] * v[2] - u[2] * v[1]; n[1] = u[2] * v[0] - u[0] * v[2]; n[2] = u[0] * v[1] - u[1] * v[0];
            f32 l = sqrtf(n[0] * n[0] + n[1] * n[1] + n[2] * n[2]);
            if (l < 1e-5f) continue;                                          /* parallel edges: covered by the face axes */
            n[0] /= l; n[1] /= l; n[2] /= l;
        }
        f32 ra = 0, rb = 0;
        for (int k = 0; k < 3; k++) {
            ra += a->h[k] * fabsf(a->ax[k][0] * n[0] + a->ax[k][1] * n[1] + a->ax[k][2] * n[2]);
            rb += b->h[k] * fabsf(b->ax[k][0] * n[0] + b->ax[k][1] * n[1] + b->ax[k][2] * n[2]);
        }
        f32 s = d[0] * n[0] + d[1] * n[1] + d[2] * n[2], o = ra + rb - fabsf(s);
        if (o <= 0) return false;
        if (o < best - 1e-5f) { best = o; f32 k = s < 0 ? -1.0f : 1.0f; bn[0] = n[0] * k; bn[1] = n[1] * k; bn[2] = n[2] * k; }
    }
    push[0] = bn[0] * best; push[1] = bn[1] * best; push[2] = bn[2] * best;
    return true;
}
#endif
