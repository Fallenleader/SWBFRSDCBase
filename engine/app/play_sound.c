/* The game's sounds in play (milestone 1.9).
 *
 * Surfaces: a collision triangle's material number indexes the level's render materials (MTRL), whose mode word is the surface:
 * 0 Default, 1 Snow, 2 Sand, 3 Grass, 4 Wood, 5 Stone, 6 Metal, 7 Water, 8 Soft, 9 Marsh - the order of the game's Material
 * blueprints with Default first (checked across levels: Endor's terrain 3, its bark and huts 4, rocks 5, AT-ATs and bunkers 6,
 * swamp water 9; Hoth's snow 1).  Each Material blueprint names its events: footstep_soldier, jumpland_soldier, roll_soldier,
 * bodyfall_soldier, "laser impact sound".
 *
 * What plays: weapons their "Fire Sound" (game/ak_weapon.c), bolt hits their surface's "laser impact sound", soldiers a
 * footstep every stride (1.9 m: the run clip's root motion, 3.77 m a cycle of two steps), a landing, a roll, a death (the
 * Humanoid blueprint's "Death Sound") and a body fall, vehicles their "Engine Sound" loop while driven or walking their path,
 * command posts Command_post_hum and Command_Post_Change, the level's ambience (Amb_<level>_Ext_C / _L / _R, flat, centre,
 * left and right) and, when the match ends, the level's VICTORY or FAIL music. */
#include "play.h"
#include "audio/ak_audio.h"
#include <math.h>
#include <string.h>

static const char *surf_names[10] = { "Default", "Snow", "Sand", "Grass", "Wood", "Stone", "Metal", "Water", "Soft", "Marsh" };

void ak_play_sound_start(ak_play *p, const ak_level *l, const ak_blueprints *bp)
{
    memset(&p->snd, 0, sizeof p->snd);
    p->snd.lvl = l;
    for (int i = 0; i < 10; i++) p->snd.surf[i] = ak_bp_find(bp, "Material", surf_names[i]);
    for (u32 i = 0; i < AK_MAX_POSTS; i++) p->snd.post_owner[i] = -2;
    p->snd.winner = -1;
    const char *sfx[3] = { "_Ext_C", "_Ext_L", "_Ext_R" }; f32 pan[3] = { 0, -1, 1 };
    for (int k = 0; k < 3; k++) { const char *e = ak_audio_find("Amb_", sfx[k], 0); if (e) p->snd.amb[k] = ak_audio_play2d(e, pan[k], 1.0f, true); }
}

u16 ak_play_ground_material(const ak_play *p, const f32 *pos)
{
    f32 o[3] = { pos[0], pos[1] + 0.5f, pos[2] }, d[3] = { 0, -1, 0 }; ak_col_hit h;
    return ak_col_raycast(&p->col, o, d, 1.5f, AK_COL_NOT_BODIES, &h) ? h.material : 0xFFFF;
}

const char *ak_play_surface_sound(const ak_play *p, u16 material, const char *key)
{
    int s = 0;
    if (p->snd.lvl && material < p->snd.lvl->nmat) { s = (int)p->snd.lvl->mat[material].mode; if (s < 0 || s > 9) s = 0; }
    const ak_bp_object *o = p->snd.surf[s] ? p->snd.surf[s] : p->snd.surf[0];
    const char *e = o ? ak_bp_string(o, key, NULL) : NULL;
    if ((!e || !*e) && p->snd.surf[0] && o != p->snd.surf[0]) e = ak_bp_string(p->snd.surf[0], key, NULL);
    return e && *e ? e : NULL;
}

/* one soldier's feet: a step per stride, a landing, a death and its fall */
static void soldier_sounds(ak_play *p, u32 k, const ak_character *ch, const ak_soldier_look *lk, bool alive, f32 dt)
{
    if (k >= 129) return;
    const f32 *pos = ch->pos;
    f32 dx = pos[0] - p->eye[0], dz = pos[2] - p->eye[2];
    bool near = dx * dx + dz * dz < 60.0f * 60.0f;
    if (p->snd.alive[k] && !alive && near) {
        const char *ds = lk && lk->bp ? ak_bp_string(lk->bp, "Death Sound", NULL) : NULL;
        if (ds && *ds) ak_audio_play(ds, pos, false);
        const char *bf = ak_play_surface_sound(p, ak_play_ground_material(p, pos), "bodyfall_soldier");
        if (bf) ak_audio_play(bf, pos, false);
    }
    if (alive && near) {
        if (ch->on_ground && !p->snd.ground[k]) {
            const char *e = ak_play_surface_sound(p, ak_play_ground_material(p, pos), "jumpland_soldier"); if (e) ak_audio_play(e, pos, false);
            p->snd.step[k] = 0;
        } else if (ch->on_ground) {
            f32 hs = sqrtf(ch->vel[0] * ch->vel[0] + ch->vel[2] * ch->vel[2]);
            p->snd.step[k] += hs * dt;
            if (p->snd.step[k] >= 1.9f) {
                p->snd.step[k] -= 1.9f;
                const char *e = ak_play_surface_sound(p, ak_play_ground_material(p, pos), "footstep_soldier"); if (e) ak_audio_play(e, pos, false);
            }
        }
    }
    p->snd.alive[k] = alive; p->snd.ground[k] = ch->on_ground;
}

void ak_play_sound_update(ak_play *p, f32 dt)
{
    if (!p->ready) return;
    /* soldiers */
    soldier_sounds(p, 0, &p->ch, &p->look, p->alive && p->in_veh < 0 && p->in_turret < 0, dt);
    for (u32 i = 0; i < p->nbots && i < 128; i++) { ak_play_bot *b = &p->bot[i]; soldier_sounds(p, 1 + i, &b->ch, &b->look, b->alive && b->veh < 0, dt); }
    /* bolt hits: the surface's laser impact sound */
    u32 made = p->bolts.impacts - p->snd.impacts; if (made > AK_MAX_IMPACTS) made = AK_MAX_IMPACTS;
    for (u32 j = 0; j < made; j++) {
        const ak_impact *im = &p->bolts.imp[(p->bolts.next_imp + AK_MAX_IMPACTS - made + j) % AK_MAX_IMPACTS];
        if (im->body) continue;
        const char *e = ak_play_surface_sound(p, im->material, "laser impact sound"); if (e) ak_audio_play(e, im->pos, false);
    }
    p->snd.impacts = p->bolts.impacts;
    /* vehicles: the engine loop while driven (or walking its path) */
    for (u32 v = 0; v < p->nveh && v < PLAY_MAX_VEH; v++) {
        const ak_vehicle *vh = &p->veh[v];
        bool on = vh->alive && vh->def && (vh->driver >= 0 || p->vspawn[v].route != NULL);
        if (on) {
            if (!p->snd.eng[v] || !ak_audio_playing(p->snd.eng[v])) {
                const char *e = vh->def->bp ? ak_bp_string(vh->def->bp, "Engine Sound", NULL) : NULL;
                p->snd.eng[v] = e && *e ? ak_audio_play(e, vh->pos, true) : 0;
            } else ak_audio_move(p->snd.eng[v], vh->pos);
        } else if (p->snd.eng[v]) { ak_audio_stop(p->snd.eng[v]); p->snd.eng[v] = 0; }
    }
    /* command posts: their hum, and a change of hands */
    if (p->have_cq)
        for (u32 i = 0; i < p->cq.nposts && i < AK_MAX_POSTS; i++) {
            const ak_post *po = &p->cq.post[i]; int ow = p->match.post[i].owner;
            if (po->absent) { if (p->snd.hum[i]) { ak_audio_stop(p->snd.hum[i]); p->snd.hum[i] = 0; } continue; }
            if (!p->snd.hum[i]) p->snd.hum[i] = ak_audio_play("Command_post_hum", po->pos, true);
            if (p->snd.post_owner[i] != -2 && p->snd.post_owner[i] != ow) ak_audio_play("Command_Post_Change", po->pos, false);
            p->snd.post_owner[i] = ow;
        }
    /* the end of the match: the level's victory or defeat music */
    if (p->have_cq && p->snd.winner < 0 && p->match.winner >= 0) {
        p->snd.winner = p->match.winner;
        p->snd.music_req = p->match.winner == p->team ? "VICTORY" : "FAIL";
    }
}
