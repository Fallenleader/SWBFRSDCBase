/* Aurek - play mode: one soldier on foot in the level, as the game plays, with one change the owner chose: the camera.
 *
 * Camera (AK_CAM_STYLE): "modern" (the default) - over the right shoulder, 1.8 m back, level with the shoulder, looking along the
 * soldier's facing with the centre of the screen clear (the DICE Battlefront framing); "classic" - the game's own ("Camera" blueprint
 * "humanoid 3rd person": pivot 1.5 m up and 0.3 m right, 7 m behind and 0.5 m up, 0.2 m left, 60 degrees).  Both pull in when the
 * level is in the way.
 *
 * Controls (AK_TWIN_STICK: -1 = the device's default, 0 = off, 1 = on; on only where the device has a second stick):
 *  - twin stick (the default where there is a right stick: PC, Steam Deck, Vita, PS4, PS5; an option on the New 3DS): the right
 *    stick aims freely with a response curve (AK_AIM_SPEED, AK_AIM_CURVE, AK_INVERT_Y); the left stick moves relative to the aim;
 *  - the game's own (always on the Old 3DS): the right stick (or buttons) turns at the game's yaw speed 4 / pitch speed 5.
 * In both, as in the game: cross jumps, R fires, L holds a lock-on to the nearest enemy in front within "targeting range" (the
 * soldier turns to it at "aim yaw speed"; shots go to the chest, then the head once the lock is held "lock on to head time"); the
 * weapon reloads when empty.
 *
 * Clips are picked by state (idle, run forward / back / sideways, jump, fall, land) from the level's Human_Rifle_* animations; the
 * game's own animation table ("Animtable: generic_male") is not traced yet.  Every soldier carries a blaster rifle (AK_WEAPON, [PARITY(2.1 6.1)]
 * default "BlasterRifle", the faction's own version).
 *
 * Conquest (game/ak_conquest.h): the posts start with the level's owners; soldiers within 5 m capture; each death costs the team a
 * ticket; the bleed and the total-loss timer run as in the game.  Soldiers have the blueprint's health (100); a soldier that falls
 * comes back with the next spawn wave at a post its team owns.
 *
 * Bots (AK_BOTS in all, shared between the sides; the player's side has one fewer): the factions' own classes (light, medium,
 * heavy) that this level has models for.  Each picks a command post its side does not hold (the nearest, with some randomness),
 * walks there along the level's navigation graph and stands on it until it is theirs, then moves on; with every post held it
 * defends one.  It fights any enemy it can see within the targeting range (50 m): turns to it, holds the trigger in bursts with an
 * aim error that grows with distance, and keeps moving (slower, strafing).  The game's own AI is not traced yet: the reaction [PARITY(4.2 4.4)]
 * time, the aim error (AK_BOT_AIM, degrees), the bursts and the field of view are this engine's.
 *
 * Vehicles (game/ak_vehicle.h): each vehicle spawn makes the vehicle of the side holding the nearest command post.  Triangle gets in
 * and out; driving: left stick throttle and steering, L held strafes, cross boosts, the right stick aims, R fires the hardpoint's bolts
 * from its barrels in turn (flyers: the stick pitches and banks, cross boosts, L slows).  Wrecks come back after the spawn's respawn time; the driver dies with the vehicle.
 *
 * Bots in vehicles (AK_BOT_VEHICLES, the chance a bot takes a free vehicle of its side within 40 m when it picks a goal): it walks to
 * it and gets in; ground vehicles and walkers drive along the navigation graph to the goal post, turn the turret on enemies in range and
 * fire; at a post its side does not hold the driver gets out to capture it.  Stuck: back up and turn, then skip a node, then get out.
 * Flyers take off, keep above the ground (rays below and ahead), attack the nearest enemy vehicle (else soldiers near an enemy post) in
 * runs and fire through the AI's trigger (ak_ai_fire).  An AI's hit on the local player takes the weapon's Modifier_Bot_Damage (x0.3;
 * 089E1FDC); bots aim with the weapon's error ("AIWeapon_Accuracy_Normal", 5 degrees).  When and how bots use vehicles is this engine's.
 *
 * Heroes (AK_HEROES): each side's hero comes when its countdown (AK_HERO_UNLOCK minutes, the game's 3) runs out, offered to the
 * player (d-pad up takes it, down declines) or given to a bot - the game's rules (func 08974318); see heroes_init in play.c. */
#ifndef AK_PLAY_H
#define AK_PLAY_H
#include "core/ak_core.h"
#include "core/ak_math.h"
#include "assets/model.h"
#include "assets/blueprint.h"
#include "world/ak_collision.h"
#include "world/ak_nav.h"
#include "game/ak_character.h"
#include "game/ak_loco.h"
#include "game/ak_soldier.h"
#include "game/ak_weapon.h"
#include "game/ak_pfx.h"
#include "game/ak_conquest.h"
#include "game/ak_script.h"
#include "game/ak_ctf.h"
#include "game/ak_vehicle.h"
#include "game/ak_space.h"
#include "game/ak_turret.h"
#include "game/ak_path.h"
#include "render/ak_scene.h"
#include "platform/plat.h"

enum { PLAY_IDLE, PLAY_RUN, PLAY_BACK, PLAY_LEFT, PLAY_RIGHT, PLAY_JUMP, PLAY_FALL, PLAY_LAND, PLAY_SPRINT, PLAY_WALK, PLAY_WALK_BACK, PLAY_NCLIPS };

#define PLAY_MAX_BOTS 127
#define PLAY_MAX_CLASSES 8
#define PLAY_MAX_VEH 64                /* (campaign levels place more: Space Kessel has 32 spawns before its scripted TIEs) */
#define PLAY_VEH_SLOTS 32              /* the hangar slot copies stop here, as before (the conquest maps keep their count) */
#define PLAY_MAX_DEFS 12
#define PLAY_MAX_TURRETS 32
#define PLAY_MAX_PROPS 16
#define PLAY_MAX_TARGETS (1 + PLAY_MAX_BOTS + PLAY_MAX_VEH + PLAY_MAX_TURRETS + PLAY_MAX_PROPS)
#define PLAY_MAX_BOOMS 8
typedef struct { f32 pos[3], yaw; s32 def[2]; s32 post; f32 respawn; bool fixed; s32 mpost; ak_route *route; f32 route_d, rt_wait; u32 rt_q; s32 first; f32 clear_t; u32 eid, ev[4], nev; bool waiting, lone; } ak_play_vspawn;   /* lone: a single placed craft (class 0x8004: Space Alderaan's X-Wing 189ac) - drivable, never made again */   /* eid: its record; ev: its script events (ak_script_events) */   /* first: the spawn's first slot (its own when it is the first); clear_t: how long no vehicle of it has stood within 25 m */   /* route: a placed walker's path (ak_path.h), how far along it is */   /* mpost: the post it carries (-1 none) */   /* a vehicle spawn: one vehicle per side (index into vdef, -1 none), the post whose owner gets it; fixed = a walker placed in the level (no respawn, not drivable) */
typedef struct { f32 pos[3], t; } ak_play_boom;
/* a side's hero (traced: the hero manager func 08974318, the switch func 089826E8; see heroes_update in play.c) */
typedef struct {
    bool enabled; const char *name;    /* the Humanoid blueprint (Hero = 1) of the side's faction that this level has */
    ak_soldier_look look; ak_weapon_def wdef, bdef; bool armed, saber;   /* bdef: in a bot's hands */
    f32 health, drain, per_kill;       /* Health, HeroDeathRate, HeroHealthAddPerKill */
    f32 unlock, timer, decide;         /* seconds until the next hero (BFF.HeroUnlockTime minutes x 60), the offer's countdown */
    s32 offered, unit;                 /* target index (0 the player, 1 + i bot i) offered / playing the hero; -1 none */
    const ak_anim_table *tab;          /* its Animtable's table (ATEX), if the level has it */
    s32 clip[PLAY_NCLIPS];             /* the body clips from that table (else the generic saber ones) */
    s32 atk[3]; u32 natk; int atk_i; f32 atk_t; bool atk_next;   /* the attack combo (table rows 17-19) and where it is */
} ak_play_hero;

typedef struct {                       /* a bot soldier */
    ak_soldier_look look, base_look; bool hero; f32 alert_t, shoot_t; ak_character ch; int team; ak_weapon weapon; bool alive;
    s8 loadout, held;                  /* its AI loadout this life (0..7, the game's table 0x08ADDC64), the slot in its hands */
    f32 bones[64][12]; int state; f32 clip_t, land_t, dead_t, pose_dt; s32 death_clip; bool was_ground;
    f32 respawn_t; bool respawn_set;   /* its spawner's timer (0897F158: 5-15 s), set when it falls */
    s32 idle_var; f32 idle_t, idle_vt;   /* an idle variation playing (-1 none), the wait before the next, its time */
    /* the mind */
    s32 goal; s8 ctf_role; u32 path[128];   /* goal: a post, -1 none, -2 a CTF goal; ctf_role: 1 attack, 0 guard, -1 not chosen (each life) */ u32 npath, path_i; f32 hold[3]; bool holding;
    ak_ai_fire fire_ai;   /* the AI's trigger on foot (ak_weapon.h: 40 m, 7.5 degrees across the ground) */
    f32 think_t, goal_t, react_t, stuck_t, strafe_t; f32 stuck_pos[3]; s32 enemy; f32 strafe; s8 fstate; s32 fenemy; f32 fstate_t, faim_t, fpoint[3];   /* the attack node 0x47E's state (4.4) */ u32 seed; s32 name;   /* name: its entry in the side's BOTNAMES list (-1 none) */
    /* what it has seen (traced: the AI sensor 08961A50): an enemy, where it was last seen, how long the record has lived */
    struct { s16 t; f32 age, aware, pos[3]; } mem[16]; u32 nmem; f32 sense_dt;
    /* vehicles: the one it drives (-1 on foot), the one it walks to; getting unstuck; a flyer's attack run */
    s32 veh, want_veh; bool boost, wants_veh; f32 veh_cool, rev_t, vstuck_t, vstuck_pos[3]; u32 vstucks; f32 att_t, tcool; f32 fly_alt, run_t, feel_t, feel_yaw, feel_pitch; bool feel, near_wall; f32 pat_t, pat_dir[3]; bool patrol;
    /* space: the commander's role (SPACE_COMBAT, SPACE_RUN, SPACE_LAND) and its objective / leg; leaving the hangar */
    int role, role_leg; s32 role_obj; f32 role_t; int fly_phase; f32 fly_pt[3], fly_t; bool circle; f32 circle_dir[3];
    /* its explosive (0893F1A8 -> 0893679C): the kind (0 thermal, 1 cluster, -1 none), left this life, the cooldown, a throw under way */
    s8 gren_kind; s32 gren_left; f32 gren_cool, gren_t; f32 gren_at[3];
    /* its squad (4.4: 08926220's sizes, the 0x3F2 move order's wedge): the squad's number on its side (-1 none), its slot, the re-slot
       timer; a leader's heading (game axes: atan2(dz, dx) of its way) */
    s8 squad, sq_slot; f32 sq_t, sq_head;
    s8 uspawn;                         /* a scripted unit spawner's soldier (p->uspawn), -1: one of the standing armies */
    u16 rt_i, rt_q; f32 rt_wait; bool rt_on;   /* a scripted unit walking its spawner's route: the next point, the node it is at / heading for, the stand there, on the way */
    bool pilot; s16 pilot_v;           /* a campaign craft's pilot (no army of its own): flies the placed craft pilot_v, never respawns on foot */
} ak_play_bot;

typedef struct {
    bool ready;
    ak_collision col; ak_nav nav; bool have_nav;
    ak_char_params cp; ak_character ch; ak_soldier_look look;
    s32 clip[PLAY_NCLIPS]; int state; f32 clip_t, land_t;
    ak_root_track *roots;              /* every clip's root motion (ak_loco.h) */
    ak_loco loco;                      /* the player's body clips: the one playing, the one fading out - they move the body */
    bool sprint_spent;                 /* the stamina ran out in this sprint: none until L is let go */
    /* the jetpack (Special Item "Jetpack", Weapon blueprint Jetpack <- Packs; loader 089A0FA0, update 089A19CC - see play.c) */
    bool jet_ok, jet_on; f32 jet_thrust[3], jet_ext[3], jet_tap, jet_rise, jet_t, jet_fuel, jet_top;
    f32 jet_hacc, jet_hdrag, jet_hspeed, jet_vspeed, jet_vacc, jet_updrag, jet_downdrag, jet_drain, jet_start, jet_wob_a, jet_wob_f;
    s32 jet_fx, jet_h;
    f32 speed_scale;                   /* the customisation's Speed level (1.0 at the default level 1) */
    f32 capture_rate;                  /* the customisation's capture rate (unit +0x138; 1.0 at the default level 1) */
    s32 player_post;                   /* the post the player last spawned at (its side's bots spawn there too) */
    bool menu_hold, menu_spawn; s32 spawn_post;   /* the front end's spawn map decides: hold the player until it asks (menu_spawn), at that post (-1 nearest) */
    bool roll_end, respawn_req;        /* respawn_req: the confirm pressed this frame */                     /* a roll just ended: the next body clip starts at full weight */
    s32 sclip[PLAY_NCLIPS];            /* the saber heroes' (generic_male LightSabre clips) */
    s32 aclip[PLAY_NCLIPS], shoot_clip, reload_clip;   /* reload_clip: the set's column 2 (reloading) */   /* the alert set (rifle raised: generic_male set 5) and its shoot layer (column 1) */
    f32 alert_t, shoot_t;              /* the player: seconds of alert pose left; seconds since the trigger was last held */
    s32 pidle_vars[2], idle_var; f32 idle_t, idle_vt;   /* the player's idle variations (its set's rows 18 / 19) and the one playing (-1) */
    bool psp_buttons, l_was, sprint;   /* the PSP button layout (AK_BUTTONS=psp): L tap jumps, L held sprints */
    /* stamina (the game's: object +0xA0, maximum +0xA4, regeneration +0xA8 - 100 / 100 / 10 a second by default, 089D9EE0, and no
     * Humanoid sets "Stamina"): sprinting pays Controls "sprint cost" a second (the soldier update 08993D38; Humanoid: 15) and a
     * roll "roll stamina cost" (089A392C; 40) through 089DCE7C - paid only when there is that much, which marks it spent this
     * frame; a sprint that cannot pay empties it.  Each frame (089DA874) below the maximum it grows by the regeneration x dt unless
     * something was spent (that frame's mark is cleared instead); none while sprinting (08AC3D40, +0x208 bit 5) */
    f32 stamina, stamina_max, stamina_regen, sprint_cost, roll_cost; bool stamina_spent;
    f32 l_t;                           /* how long L has been held */
    s32 roll_clip[4]; f32 roll_len[4], roll_dur[4];   /* circle: the rolls (forward dive, left, right, back), their travel and time */
    s32 roll_i; f32 roll_t, roll_v[2]; bool roll_req;
    f32 roll_nolock, roll_nolock_t;   /* Controls "roll no lock on time" (2 s) and its timer: the AI's sensors lose the soldier until it runs out (1.7b) */
    int zoom; bool zoom_req;           /* triangle: the weapon's zoom levels (NumberOfZoomLevels, WZoomMagnification1..4), 0 = none */
    ak_play_hero hero[2]; bool hero_declined; int hero_answer;
    struct { f32 heal, radius, pulse, ammo_radius, ammo_pulse, t, ammo_t; } droids;   /* the UtilityDroid blueprints (MedicalDroid, AmmunitionDroid) */
    struct { s32 unit; u32 n; f32 base[8][3], tip[8][3], age[8], last; } fan[2];   /* each side's saber hero: its blade's recent positions (the motion fan) */   /* the player's answer to an offer: 1 yes, -1 no */
    ak_soldier_look base_look; ak_weapon_def base_wdef; bool base_armed; f32 base_max_health;
    /* camera */
    bool classic_cam;
    f32 fov, pivot_h, pivot_x, cam_back, cam_up, cam_side, pull_out_rate, pull_in_rate;
    f32 cam_dist;                      /* current pull-in distance (eases back out) */
    f32 eye[3], aim[3]; bool aim_ok;   /* last camera position and its forward direction (shots go where it looks) */
    f32 aim_point[3];                  /* where the centre of the view meets the level */
    bool twin_stick; f32 aim_yaw_speed, aim_pitch_speed, aim_curve; bool invert_y;
    f32 pull_close, cl_dist;   /* classic camera: "pull in close dist" and the current distance */
    bool single_stick, stick_turns; f32 view_yaw, view_follow, turn_val;   /* stick_turns: the original's one-stick turn (9.3); turn_val: its eased value */   /* the PSP's one-stick scheme (1.14): the stick turns the soldier, the view trails it */
    /* lock-on (the game's) */
    s32 lock; f32 lock_t, lock_range, lock_turn, lock_head_time;
    /* weapon */
    ak_weapon_def wdef; ak_weapon weapon; bool armed; ak_bolts bolts; u32 seed;
    const ak_blueprints *bps;                                               /* (the game's blueprints, for lookups in play)*/
    s32 rep_turret; f32 rep_t, rep_show;                                    /* the fusion cutter: the turret it works on, its shot clock,
                                                                               how long the target panel stays */
    ak_weapon_def wdef2; ak_weapon weapon2; bool armed2; int wsel;            /* weapon 2 (the customisation menu's second slot): held in
                                                                                 wdef / weapon when chosen, the other one kept here */
    u32 grng[2];                       /* the game's shared random (r = r * 0x10000 + (r >> 16) + s; s += r; value r >> 1): the space commanders' rolls */
    f32 bones[64][12]; bool posed;     /* the body's pose this frame (the weapon and the muzzle ride it) */
    ak_play_bot *bot; u32 nbots;       /* (from the level arena) */
    ak_target target[PLAY_MAX_TARGETS];    /* 0: the player, 1 + i: bot i, 1 + nbots + v: vehicle v, then the turrets */
    ak_vehicle_def vdef[PLAY_MAX_DEFS]; u32 nvdef;
    ak_play_vspawn vspawn[PLAY_MAX_VEH]; ak_vehicle veh[PLAY_MAX_VEH]; u32 nveh; s32 in_veh; f32 veh_respawn;
    s32 in_turret; bool turret_fire;   /* the boardable turret the player mans (-1 none); R held in it */
    f32 bot_drive;                     /* the chance a bot near a free vehicle of its side takes it (AK_BOT_VEHICLES) */
    ak_space_map space; bool is_space, free_flight, bot_aim_set; int difficulty; f32 elite_mul; s32 obj_unit[AK_MAX_OBJECTIVES];   /* space maps: AI objectives, the bot on each */
    ak_projs projs;                    /* torpedoes, missiles, bombs in flight */
    ak_proj_def ai_gren_def[2]; bool ai_gren_ok[2]; s32 ai_gren_ammo[2]; f32 ai_gren_rate[2], ai_gren_ps[2], ai_gren_vts[2];   /* the bots' explosives: REP_Grenade (thermal), Cluster_Grenades */
    /* the power-up (2.3p; the customisation's AK_POWERUP): kind 0 Rage, 1 Rally, 2 Regenerate, 3 Stamina (-1 none; VehicleAutoRepair
       is passive, not built), its Weapon's icon / name, its recharge (RecuperationTime) left, the use under way (-1 none), whether the
       lower slot shows it rather than the explosive; each soldier's buff (target index: -1 none) and its time; the four kinds'
       times and radii (the Weapons' <name>_Time / _Radius) */
    /* kill boxes (ENTI type 0x16, class 0x16; 0886D334 / 08A11124): an axis box in engine axes, its damage a second, flags (bit 0 kill
       outright, bit 1 active) */
    struct { f32 mn[3], mx[3], rate; u32 flags; } kbox[32]; u32 nkbox;
    u32 node_open_id[32]; bool node_open[32]; u32 nnode_open;   /* path nodes the level script opened (0x3B) or shut (0x51) */
    s8 pu_kind; const char *pu_icon; s32 pu_name; f32 pu_cool, pu_recup, pu_t; bool pu_sel;
    s8 buff_k[1 + PLAY_MAX_BOTS]; f32 buff_t[1 + PLAY_MAX_BOTS]; f32 pu_time[4], pu_radius[4], pu_stamina_mul;
    ak_proj_def gren_def; const char *gren_icon; s32 gren_name, gren_limit; bool gren_ok; s32 gren_left, gren_max; f32 det_t; f32 gren_t, gren_cool, gren_rate, gren_ps, gren_vts;   /* the player's explosive (customisation: the thermal
                                          detonator): grenades left, time since the throw began (-1: none), time to the next */
    ak_turret_def tdef[8]; u32 ntdef; ak_turret turret[PLAY_MAX_TURRETS]; u32 nturret;   /* level turrets (ENTI type 30) */
    ak_play_boom boom[PLAY_MAX_BOOMS]; u32 nboom;
    struct {                           /* pickups dropped by fallen soldiers (Humanoid SpawnPickupA / B; Projectile Health, Ammo, Stamina) */
        bool alive; u8 kind; f32 pos[3], t, spin, look_t; s32 fx, from;   /* kind: 0 Health, 1 Ammo, 2 Stamina, 3 HealthAmmo; from: the unit that dropped it */
    } pickup[32]; bool pickup_alt; u32 pickups_made, pickups_taken;
    struct { const ak_bp_object *bp; f32 cap, cap2, radius, delay, timer, fade; const char *pfx, *sfx; s32 model; } pickup_def[4];
    ak_pfx_lib pfx_lib; ak_pfx_world *pfx;   /* the level's particle effects and the ones running (R.6) */
    u32 pfx_shots, pfx_impacts; s32 pfx_tex_index; struct ak_gfx_tex *pfx_tex;   /* the shots / impacts already played; the sheet (set by the viewer) */
    bool pfx_on;                       /* AK_PFX (1): the game's effects in place of Aurek's flashes */
    s32 proj_fx[AK_MAX_PROJ], veh_fx[PLAY_MAX_VEH][2], eng_fx[PLAY_MAX_VEH][4], boost_fx[PLAY_MAX_VEH][6];   /* effects riding objects: projectile trails (PFXEffect), vehicle smoke / fire (0 none) */
    u32 kills, deaths;
    u16 stat_add[49];                  /* the profile's counters to add (frontend ak_fe_stat; the viewer takes them each frame): 40 / 41
                                          vehicles destroyed on foot / flying, 43 flags captured, 44 posts taken, 46 heroes killed, 47 kills
                                          as the hero */
    u16 tally_kills[64], tally_deaths[64];   /* per soldier (0 the player, 1.. the bots): the score boards' columns */
    s32 idle_clip, death_clips[4], death_pick, idle_vars[2];   /* idle_vars: the rifle set's rows 18 / 19 (the idle variations) */   /* death_pick: the player's, of the four */
    ak_weapon_def team_wdef[2], team_bdef[2]; bool team_armed[2];
    ak_weapon_def ai_wdef[2][13]; bool ai_armed[2][13];   /* the AI's weapons by the game's slot (0x08ADDB94: 2 rifle .. 8 EMP launcher), bot copies */   /* bdef: the bots' copy (the game's bot modifiers) */
    const char *klass[2][PLAY_MAX_CLASSES]; u32 nklass[2];
    ak_arena scratch; bool bots_passive; f32 bot_aim, sight;
    f32 sense_mult; u32 sense_every, frame_no;   /* the bots' sight: range multiplier, run every n frames (1: every frame) */
    ak_conquest_map cq; bool have_cq; int team;   /* command posts; the soldier's team (0 = team 1) */
    ak_cq_rules rules; ak_conquest match; int team_faction[2];
    struct { bool done; int winner_faction; int left[2]; } gc_result;   /* a Galactic Conquest battle's end (5.4): the winning faction
                                                                       (-1 a draw) and the tickets each faction class has left (08972658) */
    ak_script script; bool have_script;   /* the level script (game/ak_script.h) */
    /* the campaign's objective markers (class 0x8013, 089F0424; record 089F0A10: base version, u32, count x {event, group}, link,
       position (game axes), ...): 3 / 4 show / hide [assumed: the display follows the active flag], 0x8008 / 0x8009 raise their
       events 10009 / 10010 (089F05BC) */
    struct { u32 id, link, text, order; bool active, std; f32 pos[3]; u32 ev[8], nev; } obj[48]; u32 nobj, obj_order;   /* text: 089F0924's bits 5-16 of the flags word, a MISSIONOBJECTIVES entry (0xFFF none) */
    f32 oob_min[3], oob_max[3]; bool have_oob, oob_out; f32 oob_msg_t;
    f32 pil_min[3], pil_max[3]; bool have_pil;   /* the AI pilots' box (ENTI 0x8021 with flags byte 1 = 1, 08A145E4(1)): the patrol's (0894B7D8) */   /* the battlefront's bounds (ENTI 0x8021, 089D4BDC): outside - the warning */
    ak_ctf_map ctf_map; ak_ctf ctf; bool have_ctf; s32 flag_model[AK_CTF_MAX], flag_clip[2];   /* flag_clip: flag_Flapping, flag_Flapping_Backattch */   /* capture the flag (AK_MODE CTF1 / CTF2 / HCTF) */
    f32 health, max_health, dead_t; bool alive;
    f32 scale;                         /* soldiers' size relative to the world (AK_SOLDIER_SCALE) */
    f32 clock;                         /* seconds of play (spinning logos) */
    s32 near_post;                     /* the post the soldier stands at (the HUD's capture bar), or -1 */
    struct { u32 id; f32 pos[3], yaw, fade[2]; } warp[8]; u32 nwarp;
    struct { char name[48]; f32 len, org[3]; s32 group; bool camera; u32 off, size; s32 cam_clip, cam2_clip, act_clip, act_model; char model[96]; f32 sp[3]; ak_quat sq;
                 s32 anim[6]; u32 nanim; f32 hfov;                           /* the scene's clips in its list order; the camera's width (rad) */
                 struct { u8 type, anim; bool cam; f32 t, a, b; } ev[8]; u32 nev;
                 struct { f32 t; s32 g; } gev[32]; u32 ngev;                  /* CTEV type 4: a group fired at its time, in time order */
                 struct { u32 n; f32 t[8], pos[8][3]; ak_quat q[8]; } ctr[4]; u32 nctr; } cuts[16];   /* ctr: the camera's CTTR tracks (engine axes) */ u32 ncuts, cut_gev;   /* cut_gev: the playing scene's next group event */   /* the level's cut-scenes (CUTS); camera: it has a camera animation */
    struct { u32 id, hash[2]; s32 group; bool got[2]; } listen[16]; u32 nlisten;
    struct { u32 id; s32 fx, h; f32 pos[3], dir[3]; bool on; } sfx[48]; u32 nsfx;
    struct { u32 id, ev[4], nev, speech; f32 t; } t62[32]; u32 nt62;    /* ENTI type 62: a speech line (the script's 5 says it; event 12 at its end) */   /* ENTI type 33 effect places the script turns on / off */      /* ENTI type 38: fire a group on message 0x14 with a hash */
    struct { u32 id; f32 p0[3], p1[3], pos[3], len, t, wait; ak_quat q; f32 mn[3], mx[3]; bool moving, open; } mover[16]; u32 nmover;   /* ENTI type 19: a moving hull */
    struct { u32 id; f32 pos[3], yaw; u32 ev[4], nev; s32 bot; bool waiting, used; ak_route *route; } uspawn[16]; u32 nuspawn;   /* scripted soldier spawners (0x800D
                                                                                 with a Humanoid blueprint: Yavin's stormtroopers 18be0-18be3) */
    struct { u32 id; s32 cut; } named[64]; u32 nnamed;
    s32 counter_val, counter_total;                                       /* the script's counter (0x8017 to 0x3E8) */
    f32 hud_timer; bool hud_timer_on;     /* the script's countdown (0x8015 / 0x8016) */
    u32 narmy; s32 unit_count; bool campaign_army;   /* the campaign's standing army: bots 0..narmy-1, as many in play as the script's unit count (0x8010) allows */
    bool fly_pick, fly_auto_req, fly_level; s32 fly_target; bool fly_auto;   /* a starfighter's target choice (d-pad down), auto-pilot (triangle), levelling (L + R) */
    u32 use_prompt;                                                       /* the use zone's prompt (STDTEXT) while the player is in one; 0 none */                    /* the named objects (type 3) that are cut-scenes */
    struct { u32 id; f32 health; u32 ev[4], nev; bool armed, down; f32 plane[48][4]; } prop[PLAY_MAX_PROPS]; u32 nprop;   /* the campaign's breakable placed models (unflagged type 7 with an
                                                                         event table and health: Yavin's temple control room 18c2f-18c31), targets after the turrets */
    u32 ctf_fev[AK_CTF_MAX][4], ctf_nfev[AK_CTF_MAX], ctf_bev[AK_CTF_MAX][4], ctf_nbev[AK_CTF_MAX];   /* the campaign's carried objects: the flag spawners' and bases' script events */
    s32 cut; f32 cut_t; const ak_model_set *mset;
    bool modal, modal_x; f32 modal_t, modal_min;                                    /* a campaign page waiting for X (0x8023 with its flag set) */                                                    /* the cut-scene playing (-1 none), its time */   /* the campaign's player moves (ENTI type 68 -> its type 69 point) */
    bool want_equipment;               /* d-pad up at an own post with no vehicle to board: open the customisation menu */
    struct {                           /* sound (app/play_sound.c) */
        const ak_level *lvl; const ak_bp_object *surf[10];   /* the Material blueprints by surface number (MTRL mode) */
        u32 amb[3], eng[PLAY_MAX_VEH], hum[AK_MAX_POSTS];
        f32 step[129]; bool ground[129], alive[129];         /* 0 the player, 1 + i bot i */
        u32 impacts; int post_owner[AK_MAX_POSTS]; int winner; bool hero;
        const char *music_req;                               /* a MMUS list the viewer should start ("VICTORY" / "FAIL") */
        f32 hp[129], hit_t[129]; s32 enemy[129]; u32 voice[129];   /* speech: last health, the hit line's 3 s wait, last enemy, the line playing */
        u32 narr, chat; bool dipped; const char *sub; f32 sub_t; bool said_return, said_reinf, said_end;   /* narration: the line playing, its subtitle and time left */
        u32 rng;
    } snd;
} ak_play;

/* body: a Humanoid blueprint name; start: where to look for the nearest walkable spot */
bool ak_play_init(ak_play *p, const ak_level *l, const ak_model_set *m, const ak_blueprints *bp, ak_arena *a, const char *body, const f32 *start);
/* a placed object the campaign's objectives keep hidden: the marker an objective links to while it is not active [assumed] */
bool ak_play_entity_hidden(const ak_play *p, u32 id);
bool ak_play_cut_view(const ak_play *p);    /* a cut-scene has the view: no control, no HUD */
void ak_play_update(ak_play *p, const ak_model_set *m, const ak_input *in, f32 dt);
/* the loadout settings again (the customisation menu's choice; the soldier is down - it takes them at the respawn) */
void ak_play_loadout(ak_play *p, const ak_model_set *m, const ak_blueprints *bp);
void ak_play_camera(ak_play *p, f32 dt, ak_v3 *eye, f32 *yaw, f32 *pitch, f32 *fovy);
/* sound (app/play_sound.c): set up with the level, then once a frame after ak_play_update */
bool ak_play_lock_point(const ak_play *p, f32 out[3]);
void ak_play_sound_start(ak_play *p, const ak_level *l, const ak_blueprints *bp);
void ak_play_sound_update(ak_play *p, f32 dt);
void ak_play_chatter(ak_play *p, u32 unit, const char *key);   /* an AI soldier's chatter line (its Humanoid's Speech_BC_* key) */
const char *ak_play_surface_sound(const ak_play *p, u16 material, const char *key);   /* a Material blueprint's event */
u16  ak_play_ground_material(const ak_play *p, const f32 *pos);
/* the held weapon's world matrix (3x4 rows) */
bool ak_play_weapon_matrix(const ak_play *p, const ak_model_set *m, f32 out[12]);
void ak_play_draw_figure(ak_play *p, const ak_model_set *m, ak_scene_models *ms, const ak_m4 *vp, const ak_m4 *world, f32 t);
/* damage to the player's soldier (from bots, falls, tests) */
void ak_play_damage(ak_play *p, f32 amount);
void ak_play_draw(ak_play *p, ak_scene_models *ms, const ak_model_set *m, const ak_m4 *vp, ak_scene_stats *st);
/* soldiers alive per side */
void ak_play_counts(const ak_play *p, u32 alive[2], u32 total[2]);
#endif
