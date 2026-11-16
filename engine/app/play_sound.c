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
 * left and right) and, when the match ends, the level's VICTORY or FAIL music.
 *
 * Speech (audio/ak_speech.h), as the game decides it:
 *   narration (func 089EA3D0, a post changing hands): the player's side hears Speech_BN_CP_Lost when it loses a post,
 *     Speech_BN_CP_Gained when it takes one, Speech_BN_CP_Enemy when the enemy takes a post that was not the player's side's;
 *     an enemy merely losing a post says nothing.
 *   narration (func 089882BC, the tickets): once one side leads by more than 30, the trailing side hears Speech_BN_Reinforcements,
 *     or - below 20 tickets - Speech_BN_Loosing while the leader hears Speech_BN_Winning; each once a match.  The keys are the
 *     player's Humanoid blueprint's (its faction: Speech_BN_CP_Lost = 'IMP_BN_CP_Lost', ...).
 *   chatter, AI soldiers only, positional (message 0x807F to the speaker): Speech_BC_Hit when hurt (func 089E22BC: a hit taking
 *     over 40% of its health always, a smaller one only below half health and then one time in two; then 3 s quiet),
 *     Speech_BC_Killed when it kills an enemy (func 089E28B4, one time in two), Speech_BC_Attack when it takes on an enemy
 *     (func 0893254C, one time in two). */
#include "play.h"
#include "audio/ak_audio.h"
#include "audio/ak_speech.h"
#include <math.h>
#include <string.h>

static const char *surf_names[10] = { "Default", "Snow", "Sand", "Grass", "Wood", "Stone", "Metal", "Water", "Soft", "Marsh" };

void ak_play_sound_start(ak_play *p, const ak_level *l, const ak_blueprints *bp)
{
    memset(&p->snd, 0, sizeof p->snd);
    p->snd.lvl = l;
    for (int i = 0; i < 10; i++) p->snd.surf[i] = ak_bp_find(bp, "Material", surf_names[i]);
    for (u32 i = 0; i < AK_MAX_POSTS; i++) p->snd.post_owner[i] = -2;
    for (u32 i = 0; i < 129; i++) { p->snd.enemy[i] = -1; p->snd.hp[i] = 1e9f; }
    p->snd.rng = 0x13579BDu;
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

static bool coin(ak_play *p) { p->snd.rng = p->snd.rng * 1664525u + 1013904223u; return (p->snd.rng >> 30) & 1; }

static void narrate(ak_play *p, const char *key)
{
    const ak_bp_object *bp = p->base_look.bp ? p->base_look.bp : p->look.bp;
    const char *ev = bp ? ak_bp_string(bp, key, NULL) : NULL;
    if (!ev || !*ev || (p->snd.narr && ak_audio_playing(p->snd.narr))) return;   /* (one narrator line at a time) */
    const char *sub; f32 secs;
    p->snd.narr = ak_speech_play(ev, NULL, 1.0f, &sub, &secs);
    if (p->snd.narr || sub) { p->snd.sub = sub; p->snd.sub_t = secs > 0 ? secs + 0.5f : 3.0f; }
}

static void chatter(ak_play *p, u32 unit, const char *key)
{
    if (unit == 0 || unit > p->nbots || unit >= 129) return;                      /* (AI soldiers only) */
    ak_play_bot *b = &p->bot[unit - 1];
    /* the game's chatter player (func 08A65690): one AI line at a time in the whole level, none while any speech is playing,
     * and each event's own chance (its DLEV percent) */
    if (!b->alive || (p->snd.chat && ak_audio_playing(p->snd.chat)) || (p->snd.narr && ak_audio_playing(p->snd.narr))) return;
    f32 dx = b->ch.pos[0] - p->eye[0], dz = b->ch.pos[2] - p->eye[2]; if (dx * dx + dz * dz > 50.0f * 50.0f) return;
    const char *ev = b->look.bp ? ak_bp_string(b->look.bp, key, NULL) : NULL;
    if (!ev || !*ev) return;
    u32 ch = ak_speech_chance(ev);
    if (ch != 100) { p->snd.rng = p->snd.rng * 1664525u + 1013904223u; if ((p->snd.rng >> 1) % 100 + 1 > ch) return; }
    f32 head[3] = { b->ch.pos[0], b->ch.pos[1] + 1.6f, b->ch.pos[2] };
    p->snd.chat = p->snd.voice[unit] = ak_speech_play(ev, head, 0.7f, NULL, NULL);
}

/* the speech dip (func 08A662E8): the mixer goes to "Dipping for speech" while the narrator talks (more than one line, or one
 * that is not AI chatter) and back to "default" after, 0.3 s each way (0x08AF086C) */
static void speech_dip(ak_play *p)
{
    bool narr = p->snd.narr && ak_audio_playing(p->snd.narr), chat = p->snd.chat && ak_audio_playing(p->snd.chat);
    u32 n = (u32)narr + (u32)chat;
    bool dip = n > 1 || (n == 1 && !chat);
    if (dip != p->snd.dipped) { ak_audio_snapshot(dip ? "Dipping for speech" : "default", 0.3f); p->snd.dipped = dip; }
}

static void speech_update(ak_play *p, f32 dt)
{
    if (p->snd.sub_t > 0 && (p->snd.sub_t -= dt) <= 0) p->snd.sub = NULL;
    speech_dip(p);
    /* the tickets */
    if (p->have_cq && p->match.winner < 0 && !(p->snd.said_reinf && p->snd.said_end)) {
        s32 t0 = p->match.tickets[0], t1 = p->match.tickets[1], me = p->team;
        for (int behind = 0; behind < 2; behind++) {
            s32 tb = behind ? t1 : t0, ta = behind ? t0 : t1;
            if (ta - tb <= 30) continue;
            if (tb < 20) { if (!p->snd.said_end) { narrate(p, me == behind ? "Speech_BN_Loosing" : "Speech_BN_Winning"); p->snd.said_end = true; } }
            else if (!p->snd.said_reinf) { if (me == behind) narrate(p, "Speech_BN_Reinforcements"); p->snd.said_reinf = true; }
        }
    }
    /* the chatter */
    u32 n = 1 + p->nbots; if (n > 129) n = 129;
    for (u32 u = 1; u < n; u++) {
        const ak_target *t = &p->target[u]; ak_play_bot *b = &p->bot[u - 1];
        if (p->snd.hit_t[u] > 0) p->snd.hit_t[u] -= dt;
        f32 maxh = b->look.bp ? ak_bp_float(b->look.bp, "Health", 100.0f) : 100.0f;
        f32 dmg = p->snd.hp[u] - t->health;
        if (p->snd.hp[u] < 1e8f && t->alive && dmg > 0.01f && p->snd.hit_t[u] <= 0 && maxh > 0) {
            bool say = dmg / maxh > 0.4f || (t->health / maxh < 0.5f && coin(p));
            if (say) { chatter(p, u, "Speech_BC_Hit"); p->snd.hit_t[u] = 3.0f; }
        }
        if (b->alive && b->enemy >= 0 && p->snd.enemy[u] < 0 && coin(p)) chatter(p, u, "Speech_BC_Attack");
        p->snd.enemy[u] = b->alive ? b->enemy : -1;
        p->snd.hp[u] = t->health;
    }
    /* kills: an AI killer of an enemy speaks */
    for (u32 u = 0; u < n; u++) {
        const ak_target *t = &p->target[u];
        bool was = u == 0 ? p->snd.alive[0] : p->snd.alive[u];
        if (was && !t->alive && t->last_attacker > 0 && (u32)t->last_attacker < n) {
            const ak_play_bot *k = &p->bot[t->last_attacker - 1];
            if (k->team != t->team && coin(p)) chatter(p, (u32)t->last_attacker, "Speech_BC_Killed");
        }
    }
}

void ak_play_sound_update(ak_play *p, f32 dt)
{
    if (!p->ready) return;
    speech_update(p, dt);
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
            if (p->snd.post_owner[i] != -2 && p->snd.post_owner[i] != ow) {
                int was = p->snd.post_owner[i], me = p->team, them = 1 - p->team;
                ak_audio_play("Command_Post_Change", po->pos, false);
                if (was == me) narrate(p, "Speech_BN_CP_Lost");
                else if (ow == me) narrate(p, "Speech_BN_CP_Gained");
                else if (ow == them) narrate(p, "Speech_BN_CP_Enemy");          /* (was == them: neutralised, nothing said) */
            }
            p->snd.post_owner[i] = ow;
        }
    /* the end of the match: the level's victory or defeat music */
    if (p->have_cq && p->snd.winner < 0 && p->match.winner >= 0) {
        p->snd.winner = p->match.winner;
        p->snd.music_req = p->match.winner == p->team ? "VICTORY" : "FAIL";
    }
}
