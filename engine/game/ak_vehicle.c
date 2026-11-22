/* Aurek - ground vehicles (see ak_vehicle.h) */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "ak_space.h"
#include "game/ak_vehicle.h"
#include "core/ak_settings.h"

/* the game's masks (ak_collision.h): Walker blueprints the vehicles' 0x0800, Tank blueprints (hover, tracked, speeders, creatures) also 0x2000 */
#define VEH_IGNORE (d->kind == AK_VEH_WALKER ? AK_COL_WALKER_MASK : AK_COL_TANK_MASK)
#define DEG (3.14159265f / 180.0f)
#define FLY_IGNORE AK_COL_FLYER_MASK

static s32 find_clip(const ak_model_set *m, const char *name)
{
    for (u32 i = 0; i < m->nclips; i++) if (!strcmp(m->clips[i].name, name)) return (s32)i;
    return -1;
}

/* how fast a planted foot slides back through a walk loop: the walker's speed (the clips carry no root motion) */
static f32 walk_speed_of(const ak_model_set *m, s32 model, s32 clip)
{
    const ak_model *md = &m->models[model];
    if (clip < 0 || md->skeleton < 0) return 0;
    const ak_skeleton *sk = &m->skels[md->skeleton]; const ak_anim_clip *c = &m->clips[clip];
    if (sk->nbones > 64) return 0;
    static ak_quat q[64]; static f32 t[64][3], M[64][12];
    const int N = 48; f32 dist = 0, time = 0; s32 last = -1; f32 lz = 0;
    for (int f = 0; f <= N; f++) {
        f32 tt = c->duration * (f32)f / N;
        ak_anim_sample(c, sk, tt, true, q, t); ak_skeleton_pose_matrices(sk, q, (const f32 (*)[3])t, M);
        s32 lo = 0; for (u32 b = 1; b < sk->nbones; b++) if (M[b][7] < M[lo][7]) lo = (s32)b;
        if (lo == last) { dist += fabsf(M[lo][11] - lz); time += c->duration / N; }
        last = lo; lz = M[lo][11];
    }
    return time > 0 ? dist / time : 0;
}

/* a clip's root speed per key segment: |(dx, dz)| / dt of its root channel (the walkers' clips) */
static void walk_track(const ak_model_set *m, s32 clip, struct ak_walk_track *w)
{
    memset(w, 0, sizeof *w);
    if (clip < 0) return;
    const ak_anim_clip *c = &m->clips[clip];
    w->dur = c->duration;
    if (c->nchannels <= c->nbones || c->duration <= 0) return;
    const ak_anim_channel *ch = &c->chan[c->nchannels - 1];
    u32 n = ch->pos_count < 24 ? ch->pos_count : 24;
    for (u32 k = 0; k < n; k++) w->t[k] = ch->pos_count == ch->rot_count ? c->rtime[ch->rot_first + k] / 65535.0f * c->duration : (n > 1 ? (f32)k / (f32)(n - 1) * c->duration : 0);
    for (u32 k = 0; k + 1 < n; k++) {
        const f32 *a = c->pos[ch->pos_first + k], *b = c->pos[ch->pos_first + k + 1]; f32 d = w->t[k + 1] - w->t[k];
        w->v[k] = d > 1e-6f ? sqrtf((b[0] - a[0]) * (b[0] - a[0]) + (b[2] - a[2]) * (b[2] - a[2])) / d : 0;
    }
    if (n) w->v[n - 1] = 0;
    w->n = n;
}

static f32 walk_track_speed(const struct ak_walk_track *w, f32 t)
{
    if (w->n < 2) return 0;
    u32 k = 0; while (k + 1 < w->n && w->t[k + 1] <= t) k++;
    return w->v[k];
}

bool ak_vehicle_def_load(const ak_blueprints *bp, const ak_model_set *m, const char *name, ak_vehicle_def *d)
{
    memset(d, 0, sizeof *d); d->flyer_type = AK_FLY_OTHER;
    const ak_bp_object *o = ak_bp_find(bp, "Tank", name);
    bool walker = false, flyer = false;
    if (!o) { o = ak_bp_find(bp, "Walker", name); walker = o != NULL; }
    if (!o) { o = ak_bp_find(bp, "Flyer", name); flyer = o != NULL; }
    if (!o) return false;
    d->bp = o; d->name = o->name; d->drivable = true;
    d->model = ak_models_find(m, name);
    if (d->model < 0) return false;
    const char *tt = ak_bp_string(o, "tank_type", "hover_tank");
    d->kind = flyer ? AK_VEH_FLYER : walker ? AK_VEH_WALKER : !strcmp(tt, "speeder_bike") ? AK_VEH_SPEEDER : !strcmp(tt, "track_tank") ? AK_VEH_TRACK : !strcmp(tt, "creature_tank") ? AK_VEH_CREATURE : AK_VEH_HOVER;
    d->clip_walk = d->clip_idle = d->clip_death = d->clip_flight = d->clip_landed = -1;
    for (int k = 0; k < 8; k++) d->cclip[k] = -1;
    {   /* a creature's clips (its blueprint's Anim* paths; the clip is the file's name) */
        static const char *ck[8] = { "AnimLanded", "AnimWalk", "AnimRun", "AnimWalkBack", "AnimRunBack", NULL, "AnimLeftTurn", "AnimRightTurn" };
        for (int k = 0; k < 8; k++) if (ck[k]) {
            const char *v = ak_bp_string(o, ck[k], ""), *b = strrchr(v, '\\'); char nm[96]; b = b ? b + 1 : v;
            snprintf(nm, sizeof nm, "%s", b); char *dot = strrchr(nm, '.'); if (dot) *dot = 0;
            d->cclip[k] = *nm ? find_clip(m, nm) : -1;
        } }
    if (flyer) {
        d->flyer_type = ak_flyer_type(ak_bp_string(o, "Flyer_Type", ""));
        d->cruise = ak_bp_float(o, "CruisingSpeed", 85); d->pitch_rate = ak_bp_float(o, "MaxTurnPitch", 80) * DEG;
        d->roll_rate = ak_bp_float(o, "MaxTurnRoll", 115) * DEG; d->roll_removal = ak_bp_float(o, "RollRemoval", 50) * DEG;
        d->bank = (d->roll_rate > 0 ? 60.0f : ak_bp_float(o, "CosmeticRoll", 10)) * DEG;   /* the snowspeeder (no roll) only leans */
        /* clip names, or asset paths: "vehicles\...\Awing_rest.ASR" -> "Awing_rest" */
        d->pitch_in = ak_bp_float(o, "PitchInputDamp", 200) * DEG; d->pitch_damp = ak_bp_float(o, "PitchDamp", 115) * DEG;
        d->roll_in = ak_bp_float(o, "RollInputDamp", 430) * DEG; d->roll_damp = ak_bp_float(o, "RollDamp", 115) * DEG;
        d->anti_boost = ak_bp_float(o, "AntiBoost", -0.2f); d->top_hangar = ak_bp_float(o, "TopSpeedHanger", 35);
        { const char *ft = ak_bp_string(o, "Flyer_Type", ""); d->snowspeeder = !strcmp(ft, "snowspeeder"); }
        s32 clip_takeoff = -1;
        const char *keys[3] = { "AnimFlight", "AnimLanded", "AnimTakeoff" }; s32 *out[3] = { &d->clip_flight, &d->clip_landed, &clip_takeoff };
        for (int k = 0; k < 3; k++) {
            const char *v = ak_bp_string(o, keys[k], ""), *b = strrchr(v, '\\'); char nm[96]; b = b ? b + 1 : v;
            snprintf(nm, sizeof nm, "%s", b); char *dot = strrchr(nm, '.'); if (dot) *dot = 0;
            *out[k] = *nm ? find_clip(m, nm) : -1;
        }
        /* the lift-off rides AnimTakeoff's root channel (measured on Hoth's snowspeeder: straight up 1.02 m in 1 s, its speed
           stepping key by key, then away at StallSpeed) */
        d->ntakeoff = 0;
        if (clip_takeoff >= 0) {
            const ak_anim_clip *c = &m->clips[clip_takeoff];
            if (c->nchannels > c->nbones && c->duration > 0) {
                const ak_anim_channel *ch = &c->chan[c->nchannels - 1];
                u32 n = ch->pos_count < 24 ? ch->pos_count : 24;
                for (u32 k = 0; k < n; k++) {
                    d->takeoff_t[k] = ch->pos_count == ch->rot_count ? c->rtime[ch->rot_first + k] / 65535.0f * c->duration : (n > 1 ? (f32)k / (f32)(n - 1) * c->duration : 0);
                    d->takeoff_y[k] = c->pos[ch->pos_first + k][1] - c->pos[ch->pos_first][1];
                }
                d->ntakeoff = n;
                if (getenv("AK_DEBUG_VEH")) { fprintf(stderr, "[veh] %s takeoff %u keys, %.3f s:", name, n, c->duration); for (u32 k = 0; k < n; k++) fprintf(stderr, " %.3f/%.3f", d->takeoff_t[k], d->takeoff_y[k]); fprintf(stderr, "\n"); }
            }
        }
    }
    if (walker) {
        /* the clips: the model name without its underscores (AT_ST -> ATST_WalkLoop, ATST_idle, ATST_Death) */
        char pre[64], nm[96]; u32 k = 0;
        for (const char *q = name; *q && k < sizeof pre - 1; q++) if (*q != '_') pre[k++] = *q;
        pre[k] = 0;
        snprintf(nm, sizeof nm, "%s_WalkLoop", pre); d->clip_walk = find_clip(m, nm);
        snprintf(nm, sizeof nm, "%s_idle", pre); d->clip_idle = find_clip(m, nm);
        snprintf(nm, sizeof nm, "%s_Death", pre); d->clip_death = find_clip(m, nm);
        d->walk_speed = walk_speed_of(m, d->model, d->clip_walk) * ak_bp_float(o, "WalkingSpeedScale", 1);
        snprintf(nm, sizeof nm, "%s_idle_to_leftfoot", pre); d->clip_wstart = find_clip(m, nm);
        snprintf(nm, sizeof nm, "%s_leftfoot_to_idle", pre); d->clip_wstop_l = find_clip(m, nm);
        snprintf(nm, sizeof nm, "%s_rightfoot_to_idle", pre); d->clip_wstop_r = find_clip(m, nm);
        walk_track(m, d->clip_wstart, &d->wtrack[0]); walk_track(m, d->clip_walk, &d->wtrack[1]);
        walk_track(m, d->clip_wstop_l, &d->wtrack[2]); walk_track(m, d->clip_wstop_r, &d->wtrack[3]);
        if (getenv("AK_DEBUG_VEH")) {
            for (u32 i = 0; i < m->nclips; i++) if (!strncmp(m->clips[i].name, pre, strlen(pre))) {
                const ak_anim_clip *c = &m->clips[i];
                fprintf(stderr, "[veh] %s clip %s %.3f s, %u channels / %u bones", name, c->name, c->duration, c->nchannels, c->nbones);
                if (c->nchannels > c->nbones) { const ak_anim_channel *ch = &c->chan[c->nchannels - 1];
                    fprintf(stderr, " root %u keys:", ch->pos_count);
                    for (u32 k = 0; k < ch->pos_count && k < 40; k++) { f32 tk = ch->pos_count == ch->rot_count ? c->rtime[ch->rot_first + k] / 65535.0f * c->duration : 0; fprintf(stderr, " %.3f(%.2f,%.2f,%.2f)", tk, c->pos[ch->pos_first + k][0], c->pos[ch->pos_first + k][1], c->pos[ch->pos_first + k][2]); } }
                fprintf(stderr, "\n");
            }
            fprintf(stderr, "[veh] %s foot-slide speed %.2f\n", name, d->walk_speed);
        }
        if (d->walk_speed < 0.5f) d->walk_speed = 4.0f;
        /* the walk clips' speed (089BD028 setup: WalkingSpeedScale +884, SprintingSpeedScale +888, defaults 1.0 at 0x08AEECBC / B8;
         * 089BF92C plays them at +888 while sprinting, else +884) */
        d->sprint_scale = ak_bp_float(o, "SprintingSpeedScale", 1); d->walk_scale = ak_bp_float(o, "WalkingSpeedScale", 1);
    }
    d->top_speed = ak_bp_float(o, "TopSpeed", 25); d->stall_speed = ak_bp_float(o, "StallSpeed", -10);
    d->energy_max = ak_bp_float(o, "EnergyMax", 100); d->energy_boost = ak_bp_float(o, "EnergyBoost", 10);
    d->energy_stunt = ak_bp_float(o, "EnergyStunt", 0); d->energy_recharge = ak_bp_float(o, "EnergyRecharge", 10);
    d->boardable = ak_bp_bool(o, "Boardable", true);
    if (!flyer) { d->cruise = ak_bp_float(o, "CruisingSpeed", 50.0f); d->anti_boost = ak_bp_float(o, "AntiBoost", -2.0f); }   /* (ground: the vehicle base's defaults, 089C573C / 089C5790) */
    d->max_acc = ak_bp_float(o, "MaxAcc", 15); d->boost_acc = ak_bp_float(o, "BoostAcc", 30); d->strafe_acc = ak_bp_float(o, "MaxStrafeAcc", 0);
    d->vel_damp = ak_bp_float(o, "VelDamp", 1.5f); d->skid_damp = ak_bp_float(o, "TimeTillStopSkid", 2.0f);
    d->yaw_in = ak_bp_float(o, "YawInputDamp", 280) * DEG; d->yaw_damp = ak_bp_float(o, "YawDamp", 230) * DEG; d->turn_rate = ak_bp_float(o, "MaxTurnYaw", 85) * DEG;
    d->roll_deg = ak_bp_float(o, "CosmeticRoll", 0);
    d->health = ak_bp_float(o, "Health", 800); d->cam_z = ak_bp_float(o, "CameraBestZ", 20); d->cam_y = ak_bp_float(o, "CameraBestY", 5); d->cam_dz = ak_bp_float(o, "CameraDistanceZ", 250); d->cam_min_z = ak_bp_float(o, "CameraMinZ", 0); d->cam_min_y = ak_bp_float(o, "CameraMinY", 2.5f); d->cam_vel_w = ak_bp_float(o, "CameraVelocityWeight", 0.2f);
    /* the view's swing (the tank class's camera, func 089B2DC8): CameraMaxYaw / MaxPitch, YawRate / PitchRate, YawDamp / PitchDamp */
    d->cam_max_yaw = ak_bp_float(o, "CameraMaxYaw", 0.0245437f); d->cam_max_pitch = ak_bp_float(o, "CameraMaxPitch", 0.0122718f);
    d->cam_yaw_rate = ak_bp_float(o, "CameraYawRate", 0.0981748f); d->cam_pitch_rate = ak_bp_float(o, "CameraPitchRate", 0.0490874f);
    d->cam_yaw_damp = ak_bp_float(o, "CameraYawDamp", 1.5707964f); d->cam_pitch_damp = ak_bp_float(o, "CameraPitchDamp", 1.5707964f);
    /* (defaults: the game's getters 089C58C4..089C5C14 over 0x08AEEE04..0x08AEEE38; MinZ's is 0) */
    d->target_range = ak_bp_float(o, "TargetRange", 100);
    const ak_model *md = &m->models[d->model];
    f32 wx = md->bmax[0] - md->bmin[0], wz = md->bmax[2] - md->bmin[2];
    d->radius = 0.5f * (wx < wz ? wx : wz); if (d->radius < 0.5f) d->radius = 0.5f;
    d->height = md->bmax[1] - md->bmin[1]; if (d->height < 1) d->height = 1;
    /* the physics box (PARITY_TASKS 3.2: read from the running original, a Taun-Taun's body is its model's box, 2.0 x 2.6 x 1.0 m, standing
       on the ground and turning with it): the skeleton's collision box, else the mesh bounds */
    if (md->skeleton >= 0) { memcpy(d->box_min, m->skels[md->skeleton].col_min, 12); memcpy(d->box_max, m->skels[md->skeleton].col_max, 12); }
    else { memcpy(d->box_min, md->bmin, 12); memcpy(d->box_max, md->bmax, 12); }
    d->box_body = (d->kind == AK_VEH_CREATURE || d->kind == AK_VEH_TRACK) && ak_setting_int("AK_VEH_BOX", 1);
    /* the hover height (measured 2026-11-20, parked: the harness's object height over Aurek's ground there - speeder bikes 0.09-0.11 m
       (Endor x2, Kashyyyk x2), Kashyyyk's IFT-T 1.01 m (another, on a slope, 0.35); driving not measured) */
    d->hover = d->kind == AK_VEH_HOVER ? 1.0f : d->kind == AK_VEH_SPEEDER ? 0.1f : 0.0f;
    if (flyer) d->hover = 0;                                             /* (flyers rest on their landing gear: the model origin) */
    if (!strcasecmp(name, "Recon_Droid")) d->hover = 1.94f;                /* (Yavin's training droid, idle: 1.94 m over the courtyard floor - harness route cmpn, object
                                                                            30d48 at y -8.667 over -6.73 [measured; the source of the height not traced]) */
    if (walker) {                                                        /* walkers: the speed from the legs, sharp turns */
        d->top_speed = d->walk_speed; d->stall_speed = -d->walk_speed * 0.5f; d->max_acc = d->walk_speed * 2; d->boost_acc = d->walk_speed * 2;
        d->strafe_acc = 0; d->vel_damp = 3; d->radius *= 0.6f;           /* (legs: a narrower body than the box) */
    }
    const char *tur = ak_bp_string(o, "Turret0", "");
    d->turret_model = *tur ? ak_models_find(m, tur) : -1; d->turret_marker = ak_bp_string(o, "TurretMarker0", "tur");
    /* HardpointW1 names a Weapon (its "Projectile" is the LaserBolt; flyers: SpaceLasers_X_Wing -> SpaceLasers_Fighters) or, for some
     * ground vehicles, the LaserBolt itself (the Weapon of the same name, where there is one, carries the timing) */
    const char *hp = ak_bp_string(o, "HardpointW1", "");
    const ak_bp_object *hw = *hp ? ak_bp_find(bp, "Weapon", hp) : NULL;
    d->armed = ak_weapon_def_bolt(bp, hw ? ak_bp_string(hw, "Projectile", hp) : hp, &d->gun) || ak_weapon_def_bolt(bp, hp, &d->gun);
    if (d->armed && hw) { d->gun.fire_snd = ak_bp_string(hw, "Fire Sound", NULL); d->gun.hud_icon = ak_bp_string(hw, "HUDIcon", NULL); ak_weapon_def_heat(hw, &d->gun); }   /* the hardpoint Weapon's "Fire Sound", "HUDIcon" */
    static const char *mk[4] = { "HardpointW1Marker1", "HardpointW1Marker2", "HardpointW1Marker3", "HardpointW1Marker4" };
    static const char *tm[4] = { "HardpointW1Time1", "HardpointW1Time2", "HardpointW1Time3", "HardpointW1Time4" };
    f32 last = 0;
    for (int i = 0; i < 4; i++) {
        const char *s = ak_bp_string(o, mk[i], "");
        if (!*s || ak_model_marker(md, s) == NULL) continue;
        d->muzzle[d->nmuzzles] = s; d->muzzle_time[d->nmuzzles] = ak_bp_float(o, tm[i], 0); if (d->muzzle_time[d->nmuzzles] > last) last = d->muzzle_time[d->nmuzzles];
        d->nmuzzles++;
    }
    /* a volley every RateOfFire seconds (the Weapon's: tank lasers 0.25, fighters 0.3, TIE fighter 0.2, X-wing 2); each barrel is its own
     * weapon whose first wait is HardpointW1TimeN x RateOfFire (089C4A2C: weapon +48 = TimeN x +52), so TimeN is the barrel's share of
     * the cycle - the X-wing's 0 / .25 / .5 / .75 of 2 s fire a gun every 0.5 s.  [assumed: the phases hold while the trigger is held -
     * each weapon's wait runs down every frame (08A186EC) and is set back to RateOfFire as it fires (08A17C64)] */
    /* the secondary (HardpointW2) and the lock-on */
    if (ak_secondary_load(bp, ak_bp_string(o, "HardpointW2", ""), &d->sec)) {
        static const char *mk2[4] = { "HardpointW2Marker1", "HardpointW2Marker2", "HardpointW2Marker3", "HardpointW2Marker4" };
        for (int i = 0; i < 4; i++) {
            const char *s2 = ak_bp_string(o, mk2[i], "");
            if (*s2 && (ak_model_marker(md, s2) || (d->turret_model >= 0 && ak_model_marker(&m->models[d->turret_model], s2)))) d->sec_muzzle[d->nsec_muzzles++] = s2;
        }
    }
    {   /* the rider (open vehicles: speeder bikes, Taun-Tauns, the STAP, the AT-RT): Enclosed false shows him on the Seat marker in the
         * AnimSit pose - the name or an .ASR path, matched by the clip's own name [assumed: Enclosed's default is true] */
        d->enclosed = ak_bp_int(o, "Enclosed", 1) != 0; d->seat = ak_bp_string(o, "Seat", ""); d->sit_clip = -1;
        const char *an = ak_bp_string(o, "AnimSit", ""), *b = an;
        for (const char *q = an; *q; q++) if (*q == '\\' || *q == '/') b = q + 1;
        char nm[64]; size_t n = strlen(b); if (n >= sizeof nm) n = sizeof nm - 1; memcpy(nm, b, n); nm[n] = 0;
        char *dot = strrchr(nm, '.'); if (dot && !strcasecmp(dot, ".asr")) *dot = 0;
        if (*nm) for (u32 i = 0; i < m->nclips; i++) if (!strcasecmp(m->clips[i].name, nm)) { d->sit_clip = (s32)i; break; }
    }
    d->carries_cp = ak_bp_int(o, "CarriesCommandPost", 0) != 0; d->cp_marker = ak_bp_string(o, "CommandPostMarker", "cp");
    /* the lock-on's fields (089C4A2C: LockAngle +400, LockOnTime +408, LoseLockOnAngle +412, LoseLockOnRange +416, InitialLockOnAngle
     * +420, InitialLockOnRange +424); the getters' defaults are 0 but LockAngle's 5 degrees (0x08AEEE80); the Weapon's own LockonTime is not
     * read by the vehicle's lock */
    d->lock_angle = ak_bp_float(o, "LockAngle", 5) * 0.017453293f; d->lock_time = ak_bp_float(o, "LockOnTime", 0);
    d->lose_lock_angle = ak_bp_float(o, "LoseLockOnAngle", 0) * 0.017453293f; d->lose_lock_range = ak_bp_float(o, "LoseLockOnRange", 0);
    d->init_lock_angle = ak_bp_float(o, "InitialLockOnAngle", 0) * 0.017453293f; d->init_lock_range = ak_bp_float(o, "InitialLockOnRange", 0);
    if (hw && ak_bp_get(hw, "RateOfFire") && ak_bp_float(hw, "RateOfFire", 0) > 0) {
        d->volley = ak_bp_float(hw, "RateOfFire", 0);
        for (u32 i = 0; i < d->nmuzzles; i++) d->muzzle_time[i] *= d->volley;
    } else { d->volley = last + 0.5f; }                                    /* (no Weapon timing: the old rule) [assumed] */
    {   /* bots: the hardpoint's Weapon blueprint (else Weapon "Base") scales damage and the time between volleys */
        const ak_bp_object *w = hw ? hw : ak_bp_find(bp, "Weapon", "Base");
        f32 md = w ? ak_bp_float(w, "Modifier_Bot_Damage", 1) : 1, mr = w ? ak_bp_float(w, "Modifier_Bot_RateOfFire", 1) : 1;
        d->gun_bot = d->gun; d->gun_bot.bot_dmg = md; d->gun_bot.ai = true; d->volley_bot = d->volley; (void)mr;   /* (089E1FDC: the bot damage only on the local player; no slower fire - see play.c) */
        d->gun_bot.ai_acc[0] = w ? ak_bp_float(w, "AIWeapon_Accuracy_Normal", 5) : 5; d->gun_bot.ai_acc[1] = w ? ak_bp_float(w, "AIWeapon_Accuracy_Elite", 4) : 4;
    }
    if (getenv("AK_DUMP_VEH_MARKERS") && d->model >= 0) {   /* (tests: the model's markers, model space, game axes) */
        const ak_model *mm = &m->models[d->model];
        for (u32 i = 0; i < mm->nmarkers; i++) fprintf(stderr, "[veh] %s marker %s bone %u at %.2f %.2f %.2f\n", name, mm->markers[i].name, mm->markers[i].bone, mm->markers[i].m[3], -mm->markers[i].m[7], -mm->markers[i].m[11]);
        fprintf(stderr, "[veh] %s box %.2f %.2f %.2f .. %.2f %.2f %.2f\n", name, d->box_min[0], d->box_min[1], d->box_min[2], d->box_max[0], d->box_max[1], d->box_max[2]);
        fprintf(stderr, "[veh] %s radius %.2f bounds x %.2f..%.2f y %.2f..%.2f z %.2f..%.2f\n", name, d->radius, mm->bmin[0], mm->bmax[0], mm->bmin[1], mm->bmax[1], mm->bmin[2], mm->bmax[2]); }
    return true;
}

void ak_vehicle_spawn(ak_vehicle *v, const ak_vehicle_def *d, const f32 *pos, f32 yaw, int team)
{
    s32 sp = v->spawn;
    memset(v, 0, sizeof *v);
    v->def = d; memcpy(v->pos, pos, 12); v->yaw = yaw; v->team = team; v->spawn = sp;
    v->health = d->health; v->alive = true; v->driver = -1; v->aim_yaw = 0; v->energy = d->energy_max; v->energy_spent = false;
    v->sec_ammo = d->sec.clip; v->lock = -1;
}

static bool auto_level(void){ static int on = -1; if (on < 0) on = ak_setting_int("AK_AUTO_LEVEL", 1); return on != 0; }

static void flyer_update(ak_vehicle *v, const ak_collision *col, f32 gravity, bool boost, f32 dt)
{
    v->impact = 0;
    const ak_vehicle_def *d = v->def;
    if (!v->flying) {                                                     /* on the ground: settle; a pilot takes off */
        f32 o[3] = { v->pos[0], v->pos[1] + 2.0f, v->pos[2] }, dn[3] = { 0, -1, 0 }; ak_col_hit h;
        if (ak_col_raycast(col, o, dn, 4.0f, FLY_IGNORE, &h)) { v->pos[1] = h.pos[1]; v->vel[1] = 0; }
        else if (ak_col_raycast(col, o, dn, 1e4f, FLY_IGNORE, &h)) { v->vel[1] -= gravity * dt; v->pos[1] += v->vel[1] * dt; if (v->pos[1] < h.pos[1]) v->pos[1] = h.pos[1]; }
        v->speed = 0; v->vel[0] = v->vel[2] = 0; v->pitch *= 0.9f; v->roll *= 0.9f; v->yaw_rate = v->pitch_rate = 0;
        /* the player: R ("Take off" on the HUD); bots: any control */
        bool go = v->driver == 0 ? v->takeoff_req : v->driver > 0 && (boost || fabsf(v->throttle) > 0.2f || fabsf(v->steer) > 0.2f);
        if (go) {
            v->flying = true; v->pitch = 0; v->takeoff_y0 = v->pos[1];
            v->takeoff = d->ntakeoff > 1 ? d->takeoff_t[d->ntakeoff - 1] : 1.0f;
            v->speed = d->stall_speed > 0 ? d->stall_speed : 0;
            v->lvel[0] = v->lvel[1] = 0; v->lvel[2] = v->speed; v->roll_vel = 0; v->r_tap_t = 99.0f; v->boosting = false;
        }
        v->takeoff_req = false;
        return;
    }
    v->takeoff_req = false;
    if (v->takeoff > 0) {                                                 /* lifting off: straight up along the clip, then away at the stall speed */
        f32 end = d->ntakeoff > 1 ? d->takeoff_t[d->ntakeoff - 1] : 1.0f, t = end - v->takeoff + dt, y;
        v->takeoff -= dt;
        if (t > end) t = end;
        if (d->ntakeoff > 1) {
            u32 k = 0; while (k + 2 < d->ntakeoff && d->takeoff_t[k + 1] <= t) k++;
            f32 span = d->takeoff_t[k + 1] - d->takeoff_t[k], u = span > 1e-6f ? (t - d->takeoff_t[k]) / span : 1;
            if (u > 1) u = 1;
            y = d->takeoff_y[k] + (d->takeoff_y[k + 1] - d->takeoff_y[k]) * u;
        } else y = t;
        f32 was = v->pos[1]; v->pos[1] = v->takeoff_y0 + y; v->vel[0] = v->vel[2] = 0; v->vel[1] = (v->pos[1] - was) / (dt > 0 ? dt : 1);
        if (v->takeoff <= 0) v->vel[1] = 0;
        return;
    }
    /* Flight, as the game's flyer step 089AA10C runs it (traced; the snowspeeder's measurements agree):
     *  - each axis's rate (089AA884 pitch, 089AA9EC yaw, 089AAB54 roll): first it decays toward 0 by Damp * dt, then the input adds
     *    input * InputDamp * dt, clamped to +-MaxTurn (the cap does not scale with the stick: a stick too small to beat the damping
     *    turns nothing).  The rotation is about the craft's own axes; the velocity is turned back so it keeps its direction in the
     *    world (089C884C rotates +540 too).
     *  - the velocity (089AB3F8), kept in the craft's frame: the skid damping takes TimeTillStopSkid * dt of it, sideways, up and
     *    backward (never forward); the throttle (R +1, L -1; 089B20CC) adds MaxAcc * throttle * dt ahead (BoostAcc when boosting),
     *    less VelDamp; above the cruising speed (not boosting) the throttle is held to AntiBoost; the speed ahead stays within
     *    StallSpeed .. min(TopSpeed, 300) and does not pass the cruising speed from below (nor drop under it from above) unless boosting.
     *    So turning bleeds speed into the skid, and with no throttle it stays lost (down to the stall speed).
     * The stick's X drives both the yaw (control 0) and, on craft that roll (MaxTurnRoll > 0), the roll (control 2), each with its
     * own rates (089A9728).  Aurek's roll is about the craft's nose but the yaw stays about the world's up [PARITY(3.3): the game
     * turns about the craft's own axes, and its roll removal is the 3 s auto-level (flag 0x80, 089B01C0), not ported].  Hangars (TopSpeedHanger) are not
     * known to the level loader yet [PARITY(3.7)]. */
    f32 ofw[3], ort[3], oup[3];
    {
        f32 cp = cosf(v->pitch), sy = sinf(v->yaw), cy = cosf(v->yaw), sp = sinf(v->pitch);
        ofw[0] = -sy * cp; ofw[1] = sp; ofw[2] = -cy * cp; ort[0] = cy; ort[1] = 0; ort[2] = -sy;
        oup[0] = ort[1] * ofw[2] - ort[2] * ofw[1]; oup[1] = ort[2] * ofw[0] - ort[0] * ofw[2]; oup[2] = ort[0] * ofw[1] - ort[1] * ofw[0];
    }
    {
        f32 r = v->pitch_rate, dmp = d->pitch_damp * dt;
        r = r > 0 ? r - fminf(r, dmp) : r + fminf(-r, dmp);
        r += -v->throttle * d->pitch_in * dt;
        if (r > d->pitch_rate) r = d->pitch_rate;
        if (r < -d->pitch_rate) r = -d->pitch_rate;
        v->pitch_rate = r; v->pitch += r * dt;
    }
    if (v->pitch > 1.4f) v->pitch = 1.4f;
    if (v->pitch < -1.4f) v->pitch = -1.4f;
    {   /* yaw (control 0, the stick's X) - every flyer */
        f32 r = v->yaw_rate, dmp = d->yaw_damp * dt;
        r = r > 0 ? r - fminf(r, dmp) : r + fminf(-r, dmp);
        r += -v->steer * d->yaw_in * dt;
        if (r > d->turn_rate) r = d->turn_rate;
        if (r < -d->turn_rate) r = -d->turn_rate;
        v->yaw_rate = r; v->yaw += r * dt;
    }
    if (d->roll_rate > 0) {   /* roll (control 2, the stick's X again, 089A9728 -> +488): its own rate, levelled by RollRemoval */
        f32 r = v->roll_vel, dmp = d->roll_damp * dt;
        r = r > 0 ? r - fminf(r, dmp) : r + fminf(-r, dmp);
        r += -v->steer * d->roll_in * dt;
        if (r > d->roll_rate) r = d->roll_rate;
        if (r < -d->roll_rate) r = -d->roll_rate;
        v->roll_vel = r;
        v->roll += r * dt; if (v->roll > d->bank) v->roll = d->bank; if (v->roll < -d->bank) v->roll = -d->bank;
        /* the auto-level (089B01C0): any stick input resets a 3 s timer (+896); when it runs out (flag 0x80) the roll is taken
           back at RollRemoval.  The game does this only with its auto-level option on (byte 0x08C293C6) - AK_AUTO_LEVEL */
        if (fabsf(v->steer) > 0.01f || fabsf(v->throttle) > 0.01f) v->level_t = 3.0f; else if (v->level_t > 0) v->level_t -= dt;
        if (v->level_t <= 0 && auto_level()) { f32 rr = d->roll_removal * dt; v->roll += v->roll < 0 ? fminf(-v->roll, rr) : -fminf(v->roll, rr); }
    } else {
        f32 want_roll = -v->steer * d->bank, rr = (fabsf(v->steer) > 0.05f ? d->turn_rate : d->roll_removal) * dt;   /* (cosmetic) */
        v->roll += want_roll > v->roll ? fminf(want_roll - v->roll, rr) : -fminf(v->roll - want_roll, rr);
    }
    f32 fw[3], rt[3], up[3];
    {
        f32 cp = cosf(v->pitch), sy = sinf(v->yaw), cy = cosf(v->yaw), sp = sinf(v->pitch);
        fw[0] = -sy * cp; fw[1] = sp; fw[2] = -cy * cp; rt[0] = cy; rt[1] = 0; rt[2] = -sy;
        up[0] = rt[1] * fw[2] - rt[2] * fw[1]; up[1] = rt[2] * fw[0] - rt[0] * fw[2]; up[2] = rt[0] * fw[1] - rt[1] * fw[0];
    }
    /* the velocity keeps its world direction through the turn */
    f32 *lv = v->lvel, w[3];
    for (int k = 0; k < 3; k++) w[k] = ort[k] * lv[0] + oup[k] * lv[1] + ofw[k] * lv[2];
    lv[0] = w[0] * rt[0] + w[1] * rt[1] + w[2] * rt[2]; lv[1] = w[0] * up[0] + w[1] * up[1] + w[2] * up[2]; lv[2] = w[0] * fw[0] + w[1] * fw[1] + w[2] * fw[2];
    {   /* skid damping: sideways, up/down and backward */
        f32 k = d->skid_damp * dt, dmp[3] = { lv[0] * k, lv[1] * k, lv[2] * k };
        if (dmp[0] * dmp[0] + dmp[1] * dmp[1] + dmp[2] * dmp[2] >= lv[0] * lv[0] + lv[1] * lv[1] + lv[2] * lv[2]) memcpy(dmp, lv, 12);
        if (dmp[2] > 0) dmp[2] = 0;
        for (int i = 0; i < 3; i++) lv[i] -= dmp[i];
    }
    v->boosting = boost;
    {   /* the throttle ahead */
        f32 thr = v->brake ? -1.0f : (v->fast || v->driver > 0) ? 1.0f : 0.0f, z = lv[2];   /* (bots: ahead unless braking) */
        if (boost) thr = 1.0f;
        bool above = !boost && z > d->cruise, below = !boost && z <= d->cruise;
        if (above && thr > d->anti_boost) thr = d->anti_boost;
        z += (boost ? d->boost_acc : d->max_acc) * thr * dt - z * d->vel_damp * dt;
        /* (089AB3F8) free flight (+852 bit 0): top min(TopSpeed, 300), floor StallSpeed; otherwise (in a hangar, and always on a
           planet) top TopSpeedHanger, floor StallSpeed for the snowspeeder type (+856 bit 0, 089A9588) else 5 m/s */
        f32 top = v->free_flight ? fminf(300.0f, d->top_speed) : d->top_hangar, floor = v->free_flight || d->snowspeeder ? d->stall_speed : 5.0f;
        if (z > top) z = top;
        if (z < floor) z = floor;
        if (above && z < d->cruise) z = d->cruise;
        if (below && z > d->cruise) z = d->cruise;
        lv[2] = z;
    }
    for (int k = 0; k < 3; k++) v->vel[k] = rt[k] * lv[0] + up[k] * lv[1] + fw[k] * lv[2];
    v->speed = sqrtf(v->vel[0] * v->vel[0] + v->vel[1] * v->vel[1] + v->vel[2] * v->vel[2]);
    /* the level ahead: touch down slowly and level, or crash */
    f32 step = v->speed * dt, r = d->radius * 0.5f; ak_col_hit h;
    f32 o[3] = { v->pos[0], v->pos[1] + d->height * 0.5f, v->pos[2] }, dir[3] = { fw[0], fw[1], fw[2] };
    f32 dn[3] = { 0, -1, 0 };
    bool ahead = ak_col_raycast(col, o, dir, step + r, FLY_IGNORE, &h);
    bool below = !ahead && ak_col_raycast(col, o, dn, d->height * 0.5f + 0.3f, FLY_IGNORE, &h);
    if (ahead || below) {
        f32 into = fw[0] * h.normal[0] + fw[1] * h.normal[1] + fw[2] * h.normal[2];
        if (h.normal[1] > 0.8f && v->speed < d->stall_speed * 1.8f && v->pitch > -0.35f) {
            v->flying = false; v->pos[0] = h.pos[0]; v->pos[1] = h.pos[1]; v->pos[2] = h.pos[2]; v->speed = 0; v->pitch = 0;
            v->vel[0] = v->vel[1] = v->vel[2] = 0;
            return;
        }
        if (into > -0.7f) {                                                /* a glancing touch: skim off the surface (ground, ceiling, wall) */
            v->impact = v->speed * -into;
            v->pitch += h.normal[1] * (0.6f * dt - into);
            if (fabsf(h.normal[1]) < 0.5f) {                               /* a wall: turn along it */
                f32 side = -sinf(v->yaw) * 0 + (cosf(v->yaw) * h.normal[0] - sinf(v->yaw) * h.normal[2]);
                v->yaw -= (side > 0 ? -1.0f : 1.0f) * (-into) * 0.8f;
            }
            v->speed *= 1.0f - 0.5f * dt; for (int k = 0; k < 3; k++) v->lvel[k] *= 1.0f - 0.5f * dt;
            for (int k = 0; k < 3; k++) v->pos[k] += h.normal[k] * 0.3f;
        } else { v->crashed = true; if (getenv("AK_DEBUG_VEH")) fprintf(stderr, "[veh] crash at %.1f %.1f %.1f normal %.2f %.2f %.2f into %.2f\n", h.pos[0], h.pos[1], h.pos[2], h.normal[0], h.normal[1], h.normal[2], into); return; }
    }
    for (int k = 0; k < 3; k++) v->pos[k] += v->vel[k] * dt;
}

/* the ground under a point: the first surface below a probe from a few metres above it */
#define AK_VEH_CLIMB 0.6f
static bool ground_at(const ak_collision *col, const f32 *pos, f32 hover, u16 mask, f32 *gy, f32 *ny)
{
    f32 o[3] = { pos[0], pos[1] + hover + 3.0f, pos[2] }, dn[3] = { 0, -1, 0 }; ak_col_hit h;
    if (!ak_col_raycast(col, o, dn, hover + 3.0f + 6.0f, mask, &h)) return false;
    *gy = h.pos[1]; *ny = h.normal[1]; return true;
}

/* A ground vehicle moved as the game moves its physics body (the same swept box and slide as the soldier's, ak_character.c, with the
 * vehicle's box turned by its yaw and the Tank mask): gravity always, the move laid along the ground it stands on (keeping the
 * horizontal speed), up to 10 slide passes stopping 0.005 m short.  The body leans with its footing. */
static void box_place(const ak_vehicle *v, f32 ctr[3], f32 ax[3][3], f32 h[3])
{
    const ak_vehicle_def *d = v->def;
    f32 yw = v->yaw + (d->kind == AK_VEH_CREATURE ? 0.0f : 3.14159265f), cy = cosf(yw), sy = sinf(yw);   /* (as ak_vehicle_matrix) */
    f32 c[3]; for (int k = 0; k < 3; k++) { c[k] = (d->box_min[k] + d->box_max[k]) * 0.5f; h[k] = (d->box_max[k] - d->box_min[k]) * 0.5f; }
    ax[0][0] = cy; ax[0][1] = 0; ax[0][2] = -sy; ax[1][0] = 0; ax[1][1] = 1; ax[1][2] = 0; ax[2][0] = sy; ax[2][1] = 0; ax[2][2] = cy;
    for (int k = 0; k < 3; k++) ctr[k] = v->pos[k] + ax[0][k] * c[0] + ax[1][k] * c[1] + ax[2][k] * c[2];
}

static void box_body_step(ak_vehicle *v, const ak_collision *col, f32 gravity, f32 dt, f32 fx, f32 fz, f32 rx, f32 rz, f32 fwd)
{
    v->impact = 0;
    const ak_vehicle_def *d = v->def;
    if (!v->settled) {                                                       /* a new body: set down from 1 m up onto its lowest corner */
        v->settled = true; f32 ctr[3], ax[3][3], h[3], t, n[3], drop[3] = { 0, -3.0f, 0 }; u16 fl;
        v->pos[1] += 1.0f; box_place(v, ctr, ax, h);
        if (ak_col_box_sweep(col, ctr, (const f32 (*)[3])ax, h, drop, VEH_IGNORE, &t, n, &fl, NULL) && t >= 0) v->pos[1] += -3.0f * t + 0.005f;
        else v->pos[1] -= 1.0f;
    }
    if (v->on_ground && v->vel[1] <= 0) {
        const f32 *n = v->ground_n; f32 dd = v->vel[0] * n[0] + v->vel[2] * n[2];
        v->vel[1] = n[1] > 0.1f ? -dd / n[1] : 0;
    }
    v->vel[1] -= gravity * dt;
    f32 move[3] = { v->vel[0] * dt, v->vel[1] * dt, v->vel[2] * dt };
    bool ground = false; f32 gn[3] = { 0, 1, 0 };
    for (int pass = 0; pass < 10; pass++) {
        f32 L = sqrtf(move[0] * move[0] + move[1] * move[1] + move[2] * move[2]);
        if (L < 1e-4f) break;
        f32 ctr[3], ax[3][3], h[3], t, n[3]; u16 fl;
        box_place(v, ctr, ax, h);
        if (!ak_col_box_sweep(col, ctr, (const f32 (*)[3])ax, h, move, VEH_IGNORE, &t, n, &fl, NULL)) { for (int k = 0; k < 3; k++) v->pos[k] += move[k]; break; }
        f32 adv = t * L - 0.005f; if (adv < 0) adv = 0;
        if (t <= 0) for (int k = 0; k < 3; k++) v->pos[k] += n[k] * 0.005f;
        for (int k = 0; k < 3; k++) { v->pos[k] += move[k] / L * adv; move[k] *= 1.0f - adv / L; }
        if (n[1] >= 0.70710678f) { ground = true; memcpy(gn, n, 12); }
        f32 dm = move[0] * n[0] + move[1] * n[1] + move[2] * n[2], dv = v->vel[0] * n[0] + v->vel[1] * n[1] + v->vel[2] * n[2];
        if (dm < 0) for (int k = 0; k < 3; k++) move[k] -= n[k] * dm;
        if (dv < 0 && n[1] < 0.70710678f && -dv > v->impact) v->impact = -dv;   /* (a wall: the speed into it - collision damage) */
        if (dv < 0) for (int k = 0; k < 3; k++) v->vel[k] -= n[k] * dv;
    }
    if (!ground && v->vel[1] <= 0.01f) {                                     /* resting just above it: a short probe keeps the footing */
        f32 ctr[3], ax[3][3], h[3], t, n[3], probe[3] = { 0, -0.04f, 0 }; u16 fl;
        box_place(v, ctr, ax, h);
        if (ak_col_box_sweep(col, ctr, (const f32 (*)[3])ax, h, probe, VEH_IGNORE, &t, n, &fl, NULL) && n[1] >= 0.70710678f) { ground = true; memcpy(gn, n, 12); }
    }
    v->on_ground = ground;
    if (ground) { memcpy(v->ground_n, gn, 12); if (v->vel[1] < 0) v->vel[1] = 0; }
    f32 nf = gn[0] * fx + gn[2] * fz, nr = gn[0] * rx + gn[2] * rz;            /* lean with the footing */
    f32 pitch = ground ? atan2f(-nf, gn[1]) : v->pitch, roll = ground ? -atan2f(nr, gn[1]) : v->roll;
    roll -= v->steer * d->roll_deg * DEG * (fwd > 0 ? 1.0f : -1.0f) * (fabsf(fwd) / (d->top_speed > 1 ? d->top_speed : 1));
    v->pitch += (pitch - v->pitch) * (1.0f - expf(-6.0f * dt));
    v->roll += (roll - v->roll) * (1.0f - expf(-6.0f * dt));
}

/* A walker, measured on Hoth's AT-ST (harness: boarded, stick forward 4 s, let go, forward + right 3 s, right alone 2 s):
 *  - Its controls act 0.47 s late (28 frames at 60 Hz, turning and walking alike) [PARITY(3.4a): the cause is not found].
 *  - Walking is root motion: idle_to_leftfoot (3.53 m/s for 0.5 s), then the walk loop (its key slopes 7.1 / 8.8 / 5.1 / 3.9 m/s ...,
 *    the speed being |root velocity| across the ground, along the walker's facing).  Let go, it walks on to the next foot point of
 *    the loop - its end (left foot) or its middle (right foot) - and steps down with leftfoot_ / rightfoot_to_idle.
 *  - The turn starts at 0.083 rad/s, spins up at 1 rad/s^2 to MaxTurnYaw (0.5 rad/s) and stops at 4 rad/s^2, walking or standing.
 * Without the clips (other walkers' names): the earlier steady walk.  Returns true when the walk's root motion sets the speed. */
#define WALK_DELAY 0.467f
static bool walker_step(ak_vehicle *v, f32 dt, bool boost, f32 *fwd)
{
    const ak_vehicle_def *d = v->def;
    /* the delayed controls: the newest sample at least WALK_DELAY old */
    v->in_clock += dt;
    u32 h = v->in_head % 64; v->in_hist[h][0] = v->in_clock; v->in_hist[h][1] = v->throttle; v->in_hist[h][2] = v->steer; v->in_head++;
    f32 thr = 0, st = 0;
    for (u32 k = 0; k < 64 && k < v->in_head; k++) {
        const f32 *e = v->in_hist[(v->in_head - 1 - k) % 64];
        if (v->in_clock - e[0] >= WALK_DELAY - 1e-4f) { thr = e[1]; st = e[2]; break; }
    }
    f32 want_r = -st * d->turn_rate, r = v->yaw_rate;
    bool up = fabsf(want_r) > fabsf(r) && want_r * r >= 0;
    f32 a = (up ? 1.0f : 4.0f) * dt;
    if (r == 0 && want_r != 0) a = 1.0f / 12.0f;          /* (measured: the turn's first frame is already 4.8 degrees/s) */
    r += want_r > r ? fminf(want_r - r, a) : -fminf(r - want_r, a);
    v->yaw_rate = r; v->yaw += r * dt;
    if (d->wtrack[0].n < 2 || d->wtrack[1].n < 2 || d->wtrack[2].dur <= 0) { v->throttle = thr; v->steer = st; return false; }
    bool go = thr > 0.25f;
    f32 rate = boost ? d->sprint_scale : d->walk_scale;   /* (089BF92C) */
    f32 t0 = v->walk_t, t1 = t0 + dt * rate, half = d->wtrack[1].dur * 0.5f;
    switch (v->walk_state) {
    case 0: if (go) { v->walk_state = 1; v->walk_t = 0; t1 = dt * rate; } else { *fwd = 0; return true; }
        /* fall through */
    case 1: if (t1 >= d->wtrack[0].dur) { v->walk_state = 2; t1 -= d->wtrack[0].dur; } break;
    case 2:
        if (!go && t0 < half && t1 >= half && d->clip_wstop_r >= 0) { v->walk_state = 4; t1 -= half; }
        else if (t1 >= d->wtrack[1].dur) { t1 -= d->wtrack[1].dur; if (!go) v->walk_state = 3; }
        break;
    case 3: case 4: { const struct ak_walk_track *w = &d->wtrack[v->walk_state == 3 ? 2 : 3]; if (t1 >= w->dur) { v->walk_state = 0; t1 = 0; } } break;
    }
    v->walk_t = t1;
    static const int track_of[5] = { -1, 0, 1, 2, 3 };
    *fwd = v->walk_state ? walk_track_speed(&d->wtrack[track_of[v->walk_state]], v->walk_t) * rate : 0;
    return true;
}

void ak_vehicle_update(ak_vehicle *v, const ak_collision *col, f32 gravity, bool boost, f32 dt)
{
    const ak_vehicle_def *d = v->def;
    if (!v->alive) return;
    if (d->kind == AK_VEH_FLYER) { flyer_update(v, col, gravity, boost, dt); return; }
    /* turning (measured on a Taun-Taun, MaxTurnYaw 86, YawInputDamp 250, YawDamp 150): full stick spins the turn up at 100 degrees/s^2
       (YawInputDamp - YawDamp) to MaxTurnYaw degrees/s; let go, it settles at 150 degrees/s^2 (YawDamp) [PARITY(3.1c): measured,
       a partial stick's limit assumed proportional]; walkers keep the direct turn */
    f32 walk_fwd = 0; bool walk_root = false;
    if (d->kind == AK_VEH_WALKER) walk_root = walker_step(v, dt, boost, &walk_fwd);
    else {
        f32 r = v->yaw_rate - v->steer * d->yaw_in * dt, dmp = d->yaw_damp * dt;
        r = fabsf(r) <= dmp ? 0 : r - (r > 0 ? dmp : -dmp);
        f32 cap = d->turn_rate * (fabsf(v->steer) > 0.01f ? fabsf(v->steer) : 1.0f);
        if (r > cap) r = cap;
        if (r < -cap) r = -cap;
        v->yaw_rate = r; v->yaw += r * dt;
    }
    f32 sy = sinf(v->yaw), cy = cosf(v->yaw), fx = -sy, fz = -cy, rx = cy, rz = -sy;
    f32 fwd = v->vel[0] * fx + v->vel[2] * fz, side = v->vel[0] * rx + v->vel[2] * rz;
    if (d->kind != AK_VEH_WALKER) {
        /* the game's tank step (089B2A04, read from the code; measured on a Taun-Taun: 20 m/s at full stick reached with a 0.25 s
           time constant = MaxAcc 80 / VelDamp 4): the velocity loses "TimeTillStopSkid" x itself x dt across (and backward, never
           forward), then the throttle pushes MaxAcc x throttle (BoostAcc when boosting) while VelDamp x velocity drags every
           component; the forward speed is held between StallSpeed and TopSpeed (and 300); over CruisingSpeed (+280) and not
           boosting, the throttle is held to at most AntiBoost (+288, 089C5790: default -2.0, D_08AEEDE8 - no Tank sets it), so
           a boost's extra speed is braked away once the boost ends (3.1b) */
        f32 k = d->skid_damp * dt, sk = side * k, fk = fwd < 0 ? fwd * k : 0;
        side = fabsf(sk) > fabsf(side) ? 0 : side - sk; fwd -= fabsf(fk) > fabsf(fwd) ? fwd : fk;
        f32 thr = v->throttle; if (!boost && fwd > d->cruise && thr > d->anti_boost) thr = d->anti_boost;
        f32 acc = (boost ? d->boost_acc : d->max_acc) * thr * dt;
        fwd += acc - fwd * d->vel_damp * dt;
        side += v->strafe * d->strafe_acc * dt - side * d->vel_damp * dt;
        f32 top = d->top_speed < 300 ? d->top_speed : 300;
        if (fwd > top) fwd = top;
        if (fwd < d->stall_speed) fwd = d->stall_speed;
    } else if (walk_root) { fwd = walk_fwd; side = 0; } else {
    /* along: toward the speed the throttle asks for (reverse up to the stall speed), at the blueprint's acceleration */
    f32 want = v->throttle >= 0 ? v->throttle * d->top_speed : -v->throttle * d->stall_speed;
    f32 acc = (boost ? d->boost_acc + d->max_acc : d->max_acc) * dt;
    if (boost && v->throttle > 0) want = d->kind == AK_VEH_WALKER ? d->top_speed * d->sprint_scale : d->top_speed * 1.25f;
    if (fabsf(v->throttle) < 0.05f) fwd *= expf(-d->vel_damp * dt);                 /* coasting */
    else fwd += want > fwd ? (want - fwd < acc ? want - fwd : acc) : (fwd - want < acc ? -(fwd - want) : -acc);
    /* across: strafing (hover craft), else the skid dies away */
    side += v->strafe * d->strafe_acc * dt;
    side *= expf(-(d->kind == AK_VEH_TRACK || d->kind == AK_VEH_WALKER ? 8.0f : d->vel_damp * 2.0f) * dt);
    }
    if (side > d->top_speed * 0.5f) side = d->top_speed * 0.5f;
    if (side < -d->top_speed * 0.5f) side = -d->top_speed * 0.5f;
    v->vel[0] = fx * fwd + rx * side; v->vel[2] = fz * fwd + rz * side;
    if (d->box_body) { box_body_step(v, col, gravity, dt, fx, fz, rx, rz, fwd); return; }
    /* move, then out of the walls (a circle at the body's middle height) */
    f32 step = sqrtf(v->vel[0] * v->vel[0] + v->vel[2] * v->vel[2]) * dt;
    int n = (int)(step / (d->radius * 0.5f)) + 1; if (n > 8) n = 8;
    u16 gmask = d->kind == AK_VEH_HOVER || d->kind == AK_VEH_SPEEDER ? AK_COL_NOT_BODIES : VEH_IGNORE;
    f32 g0, n0; bool has0 = ground_at(col, v->pos, d->hover, gmask, &g0, &n0);
    static f32 steep = -1; if (steep < 0) steep = cosf(ak_setting_float("AK_VEH_MAX_SLOPE_DEG", 40.0f) * DEG);   /* PARITY(3.1) */
    for (int i = 0; i < n; i++) {
        f32 was[2] = { v->pos[0], v->pos[2] };
        v->pos[0] += v->vel[0] * dt / n; v->pos[2] += v->vel[2] * dt / n;
        f32 rr = d->radius * 0.6f, c[3] = { v->pos[0], v->pos[1] + d->hover + rr + 1.2f, v->pos[2] };   /* above the slopes it can climb */
        if (ak_col_sphere_resolve(col, c, rr, VEH_IGNORE, true, NULL)) {
            f32 dx = c[0] - v->pos[0], dz = c[2] - v->pos[2], l = sqrtf(dx * dx + dz * dz);
            if (l > rr) { dx *= rr / l; dz *= rr / l; l = rr; }               /* never more than the body's own size in one push */
            v->pos[0] += dx; v->pos[2] += dz;
            if (l > 1e-6f) {                                                  /* lose the speed into the wall */
                f32 nx = dx / l, nz = dz / l, into = v->vel[0] * nx + v->vel[2] * nz;
                if (into < 0) { v->vel[0] -= nx * into; v->vel[2] -= nz * into; }
            }
        }
        /* no stepping up onto what rises faster than a steep slope (a bunker's roof, a wall top under the body's sphere), nor up
         * ground steeper than AK_VEH_MAX_SLOPE_DEG (cliffs): either is a wall */
        f32 g1, n1, mx = v->pos[0] - was[0], mz = v->pos[2] - was[1], ml = sqrtf(mx * mx + mz * mz);
        if (has0 && ml > 1e-4f && ground_at(col, v->pos, d->hover, gmask, &g1, &n1)) {
            /* steepness over a metre ahead, so a kerb or a seam is stepped over but a cliff face or a bunker's sloped wall is not */
            f32 ah[3] = { v->pos[0] + mx / ml, v->pos[1], v->pos[2] + mz / ml }, g2 = 0, n2 = 0;
            bool up_steep = g1 > g0 + 0.15f * ml && ground_at(col, ah, d->hover, gmask, &g2, &n2) && n2 < steep && g2 - g0 > 0.3f;   /* (along or across the face) */
            if ((g1 - g0 > AK_VEH_CLIMB + 1.2f * ml || up_steep)) {
                v->pos[0] = was[0]; v->pos[2] = was[1];
                f32 ux = mx / ml, uz = mz / ml, into = v->vel[0] * ux + v->vel[2] * uz;
                if (into > 0) { v->vel[0] -= ux * into; v->vel[2] -= uz * into; }
            } else g0 = g1;
        }
    }
    /* the ground: hover craft float at their height, the rest sit on it; the body leans with the slope */
    f32 o[3] = { v->pos[0], v->pos[1] + d->hover + 3.0f, v->pos[2] }, dn[3] = { 0, -1, 0 }; ak_col_hit h;
    if (ak_col_raycast(col, o, dn, d->hover + 3.0f + 6.0f, d->kind == AK_VEH_HOVER || d->kind == AK_VEH_SPEEDER ? AK_COL_NOT_BODIES : VEH_IGNORE, &h)) {   /* hover craft ride over water */
        f32 gy = h.pos[1], target = gy;
        if (v->pos[1] > target + 0.05f && v->vel[1] <= 0) { v->vel[1] -= gravity * dt; v->pos[1] += v->vel[1] * dt; if (v->pos[1] < target) { v->pos[1] = target; v->vel[1] = 0; } }
        else { v->pos[1] += (target - v->pos[1]) * (1.0f - expf(-12.0f * dt)); v->vel[1] = 0; }
        f32 nf = h.normal[0] * fx + h.normal[2] * fz, nr = h.normal[0] * rx + h.normal[2] * rz;
        f32 pitch = atan2f(-nf, h.normal[1]), roll = -atan2f(nr, h.normal[1]);
        v->pitch += (pitch - v->pitch) * (1.0f - expf(-6.0f * dt));
        roll -= v->steer * d->roll_deg * DEG * (fwd > 0 ? 1.0f : -1.0f) * (fabsf(fwd) / (d->top_speed > 1 ? d->top_speed : 1));
        v->roll += (roll - v->roll) * (1.0f - expf(-6.0f * dt));
    } else { v->vel[1] -= gravity * dt; v->pos[1] += v->vel[1] * dt; }
}

void ak_vehicle_matrix(const ak_vehicle *v, f32 out[12])
{
    /* yaw, then pitch about the vehicle's right axis, then roll about its forward axis (rows) */
    f32 cp = cosf(v->pitch), sp = sinf(v->pitch), cr = cosf(v->roll), sr = sinf(v->roll);
    /* tanks' models face +z: a half turn so the nose leads (walkers and flyers face -z, like the soldiers) */
    bool half = v->def->kind != AK_VEH_WALKER && v->def->kind != AK_VEH_FLYER && v->def->kind != AK_VEH_CREATURE;   /* (creatures face -z: seen from behind in the original) */
    f32 k = half ? 1.0f : -1.0f, yw = v->yaw + (half ? 3.14159265f : 0.0f);
    f32 cy = cosf(yw), sy = sinf(yw);
    f32 R[3][3] = { { cr, k * sr, 0 }, { -k * sr, cr, 0 }, { 0, 0, 1 } };        /* roll about z (mirrored by the half turn) */
    f32 P[3][3] = { { 1, 0, 0 }, { 0, cp, k * sp }, { 0, -k * sp, cp } };         /* pitch about x (likewise) */
    f32 Y[3][3] = { { cy, 0, sy }, { 0, 1, 0 }, { -sy, 0, cy } };                 /* yaw about y */
    f32 A[3][3], B[3][3];
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) { A[i][j] = 0; for (int k = 0; k < 3; k++) A[i][j] += P[i][k] * R[k][j]; }
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) { B[i][j] = 0; for (int k = 0; k < 3; k++) B[i][j] += Y[i][k] * A[k][j]; }
    f32 lift = v->def->hover;
    for (int r = 0; r < 3; r++) { out[r * 4] = B[r][0]; out[r * 4 + 1] = B[r][1]; out[r * 4 + 2] = B[r][2]; }
    out[3] = v->pos[0]; out[7] = v->pos[1] + lift; out[11] = v->pos[2];
}

void ak_vehicle_pose(ak_vehicle *v, const ak_model_set *m, f32 dt)
{
    const ak_vehicle_def *d = v->def; const ak_model *md = &m->models[d->model];
    if (md->skeleton < 0 || m->skels[md->skeleton].nbones > 64 || m->skels[md->skeleton].nbones <= 1) { v->posed = false; return; }   /* (one bone: drawn rigid, as the cut-scene draws the recon droid) */
    const ak_skeleton *sk = &m->skels[md->skeleton];
    s32 clip = -1; bool loop = true;
    if (d->kind == AK_VEH_WALKER) {
        f32 sy = sinf(v->yaw), cy = cosf(v->yaw), fwd = -sy * v->vel[0] - cy * v->vel[2], rate = 1;
        if (!v->alive) { clip = d->clip_death; loop = false; }
        else if (v->walk_state && d->wtrack[1].n >= 2) {                   /* the walk's own clips, at its phase */
            clip = v->walk_state == 1 ? d->clip_wstart : v->walk_state == 2 ? d->clip_walk : v->walk_state == 3 ? d->clip_wstop_l : d->clip_wstop_r;
            loop = v->walk_state == 2; v->clip = clip; v->anim_t = v->walk_t; rate = 0;
            goto sample;
        }
        else if (fabsf(fwd) > 0.3f) { clip = d->clip_walk; rate = fwd / d->walk_speed; }   /* the feet keep pace with the ground (backwards too) */
        else if (fabsf(v->steer) > 0.1f) { clip = d->clip_walk; rate = 0.6f; }               /* turning on the spot */
        else if (d->clip_idle >= 0) clip = d->clip_idle;
        else { clip = d->clip_walk; rate = 0; }                                             /* no idle clip: hold the stride */
        if (clip != v->clip && !(clip == d->clip_walk && v->clip == d->clip_walk)) v->anim_t = 0;
        v->anim_t += dt * rate;
    }
    if (d->kind == AK_VEH_FLYER) { clip = v->flying ? d->clip_flight : d->clip_landed; loop = false; if (clip != v->clip) v->anim_t = 0; v->anim_t += dt; }
    if (d->kind == AK_VEH_CREATURE && v->alive) {
        /* the creature's clip (PARITY 6.2; 089B4898 / 089B47F8): its forward speed above 10 runs, above 1 walks, below -10 runs back,
           below -1 walks back; else turning faster than 0.05 rad/s plays the turn clip; else AnimLanded.  The clip advances at
           speed x 0.11 (walking and running; backwards the same with the sign turned), the turn rate x 0.75, the rest at 1.
           (The game's yaw rate is of its y-down axes: its left is Aurek's positive.)  Not ported: the 1 s blend between clips
           (089C8FD4), AnimFidget, the deaths (AnimLeftDeath / AnimRightDeath). */
        f32 sy = sinf(v->yaw), cy = cosf(v->yaw), fwd = -sy * v->vel[0] - cy * v->vel[2], yr = v->yaw_rate, rate = 1;
        int st = fwd > 10 ? 2 : fwd > 1 ? 1 : fwd < -10 ? 4 : fwd < -1 ? 3 : yr > 0.05f ? 6 : yr < -0.05f ? 7 : 0;
        if (st != v->cstate) { v->cstate = st; v->anim_t = 0; }
        rate = st == 1 || st == 2 ? fwd * 0.11f : st == 3 || st == 4 ? -fwd * 0.11f : st == 6 || st == 7 ? fabsf(yr) * 0.75f : 1.0f;
        clip = d->cclip[st] >= 0 ? d->cclip[st] : d->cclip[0];
        v->anim_t += dt * rate;
    }
    v->clip = clip;
sample:;
    static ak_quat q[64]; static f32 t[64][3];
    if (clip >= 0) {
        const ak_anim_clip *c = &m->clips[clip]; f32 tt = v->anim_t;
        if (loop) { tt = fmodf(tt, c->duration); if (tt < 0) tt += c->duration; }
        else if (tt > c->duration) tt = c->duration - 1e-4f;
        ak_anim_sample(c, sk, tt, loop, q, t);
        ak_skeleton_pose_matrices(sk, q, (const f32 (*)[3])t, v->bones);
    } else ak_skeleton_bind_matrices(sk, v->bones);
    v->posed = true;
}

bool ak_vehicle_marker(const ak_vehicle *v, const ak_model_set *m, const char *name, f32 out[12])
{
    const ak_marker *mk = ak_model_marker(&m->models[v->def->model], name);
    if (!mk) return false;
    static const f32 I[12] = { 1, 0, 0, 0,  0, 1, 0, 0,  0, 0, 1, 0 };
    f32 L[12], M[12]; ak_marker_matrix(v->posed && mk->bone < 64 ? v->bones[mk->bone] : I, mk, L);
    ak_vehicle_matrix(v, M);
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 4; c++) out[r * 4 + c] = M[r * 4] * L[c] + M[r * 4 + 1] * L[4 + c] + M[r * 4 + 2] * L[8 + c];
        out[r * 4 + 3] += M[r * 4 + 3];
    }
    return true;
}
