/* Aurek - soldiers: how one is put together (see ak_soldier.h) */
#include <stdio.h>
#include <string.h>
#include "game/ak_soldier.h"
#include "assets/asura.h"

void ak_soldier_head_matrix(const ak_skeleton *sk, u16 hb, const f32 P[12], f32 H[12])
{
    f32 B[12]; ak_quat q = sk->world_q[hb]; f32 x = q.x, y = q.y, z = q.z, w = q.w;     /* the socket's bind rotation */
    B[0] = 1 - 2 * (y * y + z * z); B[1] = 2 * (x * y - z * w);     B[2] = 2 * (x * z + y * w);
    B[4] = 2 * (x * y + z * w);     B[5] = 1 - 2 * (x * x + z * z); B[6] = 2 * (y * z - x * w);
    B[8] = 2 * (x * z - y * w);     B[9] = 2 * (y * z + x * w);     B[10] = 1 - 2 * (x * x + y * y);
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) H[r * 4 + c] = P[r * 4 + 0] * B[c * 4 + 0] + P[r * 4 + 1] * B[c * 4 + 1] + P[r * 4 + 2] * B[c * 4 + 2];
        H[r * 4 + 3] = P[r * 4 + 3];
    }
}

const char *ak_faction_name(int f)
{
    static const char *n[] = { "Republic", "CIS", "Alliance", "Empire", "none" };
    return f >= 0 && f <= 4 ? n[f] : "none";
}

/* the game's fresh-profile colours (func_08977F80 writes them into the faction records) */
void ak_faction_default_colours(int f, u8 *c1, u8 *c2)
{
    static const u8 d[4][2] = { { 11, 2 }, { 3, 15 }, { 6, 9 }, { 5, 2 } };
    *c1 = f >= 0 && f < 4 ? d[f][0] : 0; *c2 = f >= 0 && f < 4 ? d[f][1] : 1;
}

bool ak_soldier_look_make(const ak_blueprints *bp, const ak_model_set *models, const char *body, int head, int colour1, int colour2,
                          ak_soldier_look *o)
{
    memset(o, 0, sizeof *o);
    o->head = -1;
    o->bp = ak_bp_find(bp, "Humanoid", body);
    if (!o->bp) return false;
    o->body = ak_models_find(models, body);
    if (o->body < 0) return false;
    o->faction = (u8)ak_bp_int(o->bp, "Faction", AK_FACTION_NONE);
    if (head < 0 || head > 2) head = 0;
    o->head_index = (u8)head;
    char key[32];
    snprintf(key, sizeof key, "Head %d", head + 1);
    const char *hn = ak_bp_string(o->bp, key, "");
    if (*hn) o->head = ak_models_find(models, hn);
    o->head_bone = AK_HEAD_BONE;
    const ak_model *m = &models->models[o->body];
    if (m->skeleton < 0 || models->skels[m->skeleton].nbones <= AK_HEAD_BONE) o->head = -1;
    static const char axis[3] = { 'X', 'Y', 'Z' };
    for (int k = 0; k < 3; k++) { snprintf(key, sizeof key, "Head%dCameraOffset%c", head + 1, axis[k]); o->camera_offset[k] = ak_bp_float(o->bp, key, 0); }
    u8 d1, d2; ak_faction_default_colours(o->faction, &d1, &d2);
    o->colour1 = (u8)(colour1 >= 0 ? colour1 & 15 : d1); o->colour2 = (u8)(colour2 >= 0 ? colour2 & 15 : d2);
    o->rgb1 = ak_personal_colour1[o->colour1]; o->rgb2 = ak_personal_colour2[o->colour2];
    return true;
}
