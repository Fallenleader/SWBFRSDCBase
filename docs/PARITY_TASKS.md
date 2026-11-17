# Aurek parity task list

What Aurek still has to match before it duplicates the original game's behaviour. The rule for every item:

- **Find what the game does and why** (trace it in BOOT.BIN / the data).
- **Write Aurek's own native version** that gives the same result. PSP-only limits are not copied.

Each item says what Aurek does now and what has to happen.
- **[assumed]**: Aurek currently uses its own numbers or rules here, so it may not match.
- **[partial]**: part of it is traced.
- **[missing]**: not built yet.
- **Exit:** when the item counts as done.

Exit checks compare against the original game running (the decompiled build or PPSSPP) wherever that is possible.

The one exception to "trace, then match" is the renderer (section R). It gets a new lightweight PBR design that keeps the game's
textures and how they are used. Section R lists only what must be in place so that work can start later. It is not the PBR work itself.

---

## 0. Ground rules and tooling

- [x] **0.1 A side-by-side harness against the original.** *(Done 2026-11-16: `tools/harness` - the original runs headless in
  lock-step with a driver that reads its screens; `compare_walk.py` gives the report. See tools/harness/README.md.)*
  - Scripted inputs that drive both the original game and Aurek.
  - Captures from both: positions, timings, screenshots.
  - Exit: one command produces a comparison report for a level.
- [x] **0.2 Reconcile stale docs.** *(Done 2026-11-16: superseded claims marked in place, the 2026-11-16 rows moved back into the
  progress log.)* NATIVE_ENGINE.md rows that conflict with later traces:
  - Gravity is shown as "provisional 9.81" in one place and traced as 10 in another.
  - Rows still say "not yet" for lock-on and missiles, which have since been built.
  - Exit: every row matches the code.
- [x] **0.3 Mark every engine-invented value in code.** *(Done 2026-11-16: 36 `PARITY(<task>)` markers;
  `engine/tools/parity_assumed.sh` lists them.)* Every setting that stands in for something untraced:
  - AK_RUN_ACCEL, AK_BODY_RADIUS, AK_LOD_SCALE, AK_FOV, AK_COLOUR_SCALE, AK_POST_GLOW, AK_VEH_MAX_SLOPE_DEG, AK_BOT_VEHICLES,
    AK_BOTS, AK_TICKETS, AK_RESPAWN_DELAY, AK_VEHICLE_RESPAWN, AK_TOTAL_LOSS_TIME, AK_HERO_UNLOCK, AK_WALKER_THROTTLE.
  - Each gets a tag in code linking it to its item here.
  - Exit: the list is empty once every item is traced.

## 1. Soldiers: body and movement

- [x] **1.1 Speed from the animation [done 2026-11-16].**
  - Traced: the anim player (088155D0) sums its layers' root velocities by weight (+0x48, flag 0x80000, read by 088166EC); the
    soldier update turns that by the facing and lays it on the ground.
  - Measured (harness, per frame): speed = the playing clip's root-key slope at playback rate 1; clip changes crossfade linearly over
    0.2 s from the new clip's start; the stick picks the clip: stand below 0.35, walk below 0.56, run above (after the game's 0.25
    per-axis dead zone, 088FDA34); pulling back runs backward.
  - Aurek: game/ak_loco.h (precomputed root slopes, two-clip crossfade), ak_char_input.root, play.c pose_mix.
  - Result: Hoth run 10 s within 0.23 m, walk within 0.21 m, run-and-stop within 0.14 m.
  - [ ] **1.1c** Find the two gait thresholds (0.35 / 0.56, measured to 0.01) in the soldier code.
  - [ ] **1.1d** On slopes the original is 0.5 % slower across the ground than the clip (Aurek keeps the horizontal speed).
- [x] **1.2 The soldier's body box [done 2026-11-16 - corrected].**
  - Read from the running original (harness RS_DRIVE_BODY=1 dumps the player's physics body: soldier +40 -> +12, corners at
    +0x118): the box is 0.6 x 1.8 x 0.6 m from the feet up, on the world axes, and never turns (its matrix stays the identity).
  - Traced: the physics' built-in shape 0 (08A061BC builds it from -0.3 / 0.3 / -1.8; 08A05F60 returns shapes 0 / 1 for small
    kinds; shape 1 is a 0.2 m cube). The model box (HSBB, 1.67 m for a Stormtrooper) was wrong for soldiers.
  - Aurek: play.c soldier_shape for the player's body and every soldier's push box; body_yaw is always 0.
  - Still to confirm: which objects get model boxes (vehicles, turrets) - with 1.13.
- [x] **1.3 The body sweep [done 2026-11-16].**
  - Read 088B3784: a swept separating-axis test of the moving box against each triangle's front over 13 axes (the 9 box-axis x
    edge crosses, the 3 box axes, the face normal; axes under sqrt(0.001) skipped), the latest entry (from -0.0001) is the time and
    its axis the normal; no entering axis = "inside" (-1); "edge" when the unnormalised face normal projects under 0.999 on it.
    The caller takes the earliest hit, ties to the contact facing the move more (088C6260). So there *is* an edge-against-edge
    test - the corner sweep was wrong.
  - Read the response (088C5354..088C55B8): a contact makes the body rest when it is a face within 45 degrees, an edge within 10,
    or a surface flagged 0x0010; a resting body moving under 3.2e-7 across gravity stops.
  - Aurek: world/ak_collision.c box_tri_sweep_game (AK_BOX_SWEEP_CORNERS=1 keeps the old sweep), the rest rule in body_update
    (physics rest kept apart from the soldier's footing), and a new body is set down on its lowest corner.
  - [ ] **1.3b** What the body step does with "inside" (088B6510). Aurek treats a box sunk under 2 cm into the face it moves into
    as touching it, and skips the triangle otherwise.
- [x] **1.4 How AI soldiers stay on the ground [done 2026-11-16].**
  - Traced: the soldier update (0899530C) takes the body velocity from the animation's root motion (088166EC) unless the
    soldier's controller (soldier +88, its +56 block's flags +112 bit 15) supplies one at controller +72 - the AI's case - and
    hands either to the body (088BAD34).
  - Measured (harness, Hoth, every AI soldier every 15 frames): an AI soldier's height over the ground under its centre is its
    0.6 m box resting on the highest ground under its corners (mean difference 1 cm) - the level sweep moves AI bodies like the
    player's; only body-against-body pushes skip them.
  - Aurek: bots use the player's swept box (AK_BOT_BODY=0 keeps the spheres with their 0.45 m step).
  - The AI's speeds are not root motion (they hold 5.0, 7.4, 8.5 or 11.5 m/s and change every ~6 frames): moved to section 4.
- [x] **1.5 Jump and air control [done 2026-11-16, measured].**
  - Measured with the harness (run + jump, run + jump + pull back, stand + jump + push forward; every frame):
    - the impulse (6) is added to the velocity along the ground (running 0.8 m/s downhill leaves at 5.2); gravity 10;
    - the take-off's horizontal velocity is kept; from 0.5 s after take-off the stick pushes it at 0.15 m/s per frame (air
      control scale x 60 = 9 m/s^2), never past max air speed (4) by pushing - a faster take-off is kept while the stick holds it;
    - on landing the speed drops to zero and the run crossfades in again from the next frame (no landing pause while moving).
  - Aurek: ak_character.c (body characters), play.c (no LAND state while the stick asks to move; the air clips carry no root
    motion). Harness: run-jump, jump-back and stand-jump-forward within 0.25 m.
  - [ ] **1.5b** Find the 0.5 s and the per-frame rate in the code; "jump max hold time" / "max jump impulse" (holding the
    button for a higher jump?) are not tested.
- [x] **1.6 Crouch [checked 2026-11-16: not on the player's controls].** Held in the original (harness, Hoth): d-pad down,
  circle, triangle, square and R - none crouches, and the body box stays 1.8 m. The crouched animation sets serve the rolls
  (Crouch_Roll_*) and possibly the AI; nothing to build for the player.
- [x] **1.7 Rolls [done 2026-11-16, measured].**
  - Circle while running dives forward. Measured every frame: the dive clip's own root motion at rate 1 (7.1, 8.0, 7.2, 5.8, 4.3,
    4.6, 3.4, 2.9 m/s, its key slopes), no crossfade in or out (the run returns at full speed from its first key), and the roll
    gives way 0.05 s before its clip ends. Also measured: triangle (zoom) while running brings the soldier to a stop (0.2 s
    fade), and it stays still while zoomed.
  - Aurek: play.c rolls move by the roll clip's root track and end 0.05 s early, with an instant switch back; zoomed = standing.
    Harness run_roll within 0.5 m (Aurek 2 frames earlier: the original's press latency plus one still frame as the roll begins).
  - [ ] **1.7b** Find the 0.05 s in the code; "roll no lock on time" (2 s) and the roll stamina gate are not tested yet.
- [x] **1.8 Sprint and stamina [done 2026-11-16, measured].** Holding L while running (harness, 15 s): the sprint starts 0.1 s
  after L goes down (a 4-frame press is still a jump tap), crossfades over 0.2 s to the sprint clip's root motion (about 10.3
  m/s), ends when the stamina is gone (100 / "sprint cost" 15 a second: 6.7 s) and does not come back while L stays held - the
  soldier runs on. A one-frame lift over a crest at sprint speed does not interrupt the run. Aurek matches within 0.22 m over
  15 s (play.c: 0.1 s hold, sprint_spent; motion_state falls only after 0.1 s off the ground unless jumping).
- [x] **1.9 Falling [measured 2026-11-16: no fall damage].** With the harness's new teleport (drive.py --tp) the player was
  dropped 10 m and 25 m onto Hoth's ground (a 30 m or higher drop stops at a ceiling about 25 m up there): it falls at 10 m/s^2
  and lands with its health untouched (133 of 133) - no fall damage. Aurek has none either. No "return to the battlefield"
  text exists in the game's TEXT files.
  - [ ] **1.9b** Water and bottomless drops (kill volumes?) are not tested yet.
- [x] **1.10 Respawn [measured 2026-11-16].**
  - The harness can kill the player (drive.py --hp F:-1 calls the game's "Kills yourself" command, 08A61BE0: message 0x8001)
    and set its health (--hp F:H).
  - The player: three seconds of the death camera, then the score board with "Respawn", then the spawn map ("Select Spawn
    Point"); the soldier is back the moment the player confirms - no wave, no countdown. The default spawn point was the one
    the player first spawned at. The body leaves 5.0 s after death (or on respawn).
  - AI soldiers: their bodies leave 4.8-5.0 s after death; new AI soldiers appear at irregular times (5-15 s after a death),
    not on a fixed wave.
  - Aurek: the player respawns on confirm (cross / fire) after 3 s (AK_RESPAWN_AUTO=1 without a press); fallen bots leave
    after 5 s (were 8).
  - [ ] **1.10b** A spawn screen (score board, map, spawn point choice with the game's default).
  - [ ] **1.10c** The AI's respawn rule (Aurek still brings bots back with a 10 s wave).
- [ ] **1.11 Hit reactions and flinch [partly measured 2026-11-16].**
  - Harness (player teleported into the Rebel spawn, running back and forth 40 s, every frame): blaster hits of 4.5 (an AI's
    rifle: 15 x Modifier_Bot_Damage 0.3) do not change the player's speed at all - no flinch on movement. Aurek: the same.
  - Heavy hits (20 and 29.7) were followed by stops of a few frames at a time; not yet told apart from bumping into things.
    To do: trace who plays the hit rows 13-16 / Stunned1 (row 17) and when.
- [ ] **1.12 Hit shapes [assumed].**
  - Aurek: its own head/body shapes for bolts.
  - Trace how projectiles test soldiers (physics boxes, per-bone shapes, or the HSKN per-bone meshes) and how headshots are decided.
  - Traced so far (2026-11-16): the Humanoid damage handler 089A7310 takes a 32-byte hit message (+4 attacker id, +12 damage,
    +16 hit part's name hash, +20 hit part type). Headshot (089A7508) = part type 6 or part named "head" (hash 0x30CDE0) ->
    damage x the blueprint's "Headshot multiplier" (Base: 4; code default 2). Then x2 when the attacker's slot 152 says so,
    x0.5 when the victim's slot 156 does, x a mode/difficulty factor (08A3CC70 / 08A3CCF8), applied by 089E1FDC.
  - Leads: the soldier's swappable head is its own model (a "head" part); the body has HSBB per-bone boxes (Stormtrooper: 13
    of 21 bones flagged). Still to trace: what the bolt tests (those boxes, the head model, or the physics box) and slots
    152 / 156.
  - Measured (harness: player locked on (R) and firing (cross) from inside the Rebel spawn, 40 s): the blaster rifle takes 15
    off an AI soldier per body hit, and some hits take 60 at once (a headshot: 15 x 4 - an instant kill against the AI's 60);
    two hits took 18 (not explained yet). The soldier object has one physics body (the 0.6 x 1.8 m box, soldier +0x28), so
    the head is not a second body; headshots need the hit part from somewhere else (bone boxes or the head model).

- [x] **1.13 Soldier against soldier and vehicle [done 2026-11-16].**
  - Done earlier: dynamic versus kinematic boxes.
  - Moving bodies: the body step adds a supporting body's motion only for bodies with flag 0x1000 (+0xF8 bit 12, 088C53CC).
    Read from the running original, the player's body flags are 0x035C2148 - no 0x1000 - and no code path sets it, so a
    soldier standing on something that moves is not carried by it. Aurek does the same; nothing to build.
- [ ] **1.14 The classic scheme's facing [measured, not built].** In the original (no right stick) the camera does not turn with
  the left stick: the soldier turns to face the stick's direction relative to the camera, closing the angle by 8/s (each frame
  the rest shrinks by 1 - 8 dt: 0.8666 at 60 Hz), and runs its forward clip; with the stick pulled back (back half) it faces the
  mirrored direction and runs its backward clip (stick down-left: faces 45 degrees right, runs back). Stick straight right: turns 90
  degrees and runs. Aurek ties the camera to the body (ch.yaw), so this needs a separate view yaw (with 9.3). The strafe clips
  (RunForward_left / _Right) carry the root forward: they are a run with the upper body turned, for aiming to the side.
- [x] **1.15 Soldier health and the customisation [done 2026-11-16 for the defaults].** The 133 is the player's
  customisation, not difficulty: the spawn screen's Customisation Menu (200 credits) defaults to Blaster Rifle (25), Thermal
  Detonator (10), Health Level 1 (10) and Speed Level 1 (10) = 55. Health by level 100 / 133 / 166 / 200 (08978170, table
  0x08AEE3B8); Speed by level 0.85 / 1.0 / 1.15 / 1.3 (08978240) - level 1 is the 1.0 the run was measured at. AI soldiers have
  60. Aurek: AK_HEALTH_LEVEL / AK_SPEED_LEVEL (default 1) give the player 133 and a speed scale; bots 60.
  - [ ] **1.15b** How Speed scales (playback rate or distance - Aurek scales both), where the AI's 60 comes from, and the
    other categories (Weapon 2, Special Item, Power Up, Capture Rate) and match-wide customisation options.

## 2. Weapons, items and projectiles

- [ ] **2.1 Loadouts [partly found].**
  - The player's loadout is the Customisation Menu (credits; each Weapon blueprint has a Cost): categories Weapon 1, Weapon 2,
    Explosive, Special Item, Power Up, Health, Speed, Capture Rate. Default (read from the original's menu, Empire on Hoth):
    Blaster Rifle 25, Thermal Detonator 10, Health 1 10, Speed 1 10 = 55 of 200. Weapon 2 offers e.g. a rocket launcher (25)
    or Blaster Pistol (0); Special Item 20 / 10 options; Power Up two at 10; Capture Rate 35 / 15.
  - To do: the full lists per faction (the Weapon blueprints with Cost and Faction), the AI's loadouts, and the menu itself.
  - Aurek: every soldier carries the blaster rifle; the thermal detonator (secondary attack) is task 2.3.
- [x] **2.2 Ammo droids [measured 2026-11-16: Aurek matches].** Firing non-stop 6.8 m from Hoth's first ammo droid (the harness
  reads the weapon: clip +0xA0, spare clips +0xA4, explosives +0xA8): each emptied clip's spare came back on the next whole-second
  pulse (refills at frames 541, 1081, 1681, 2221 - all on the same 60-frame beat), one clip per pulse, within the droid's
  EffectiveRadius (8). Aurek's droids already pulse that way (UtilityDroid PulseLength 1 s, one clip, radius 8). Health droids
  and explosive refills not measured yet.
- [ ] **2.3 Secondary items [missing].** Grenades, thermal detonators, detpacks, mines, cluster grenades, remote missiles,
  incinerator, fusion cutter, shields, jetpack, jump pack, stealth. Trace each one's blueprint use.
  - Thermal detonator [measured and built 2026-11-16]: Weapon REP_Grenade (4, no spare clips, 2 s between throws), Projectile
    "Grenade" (Timer 3, 100 / 150 damage, radius 8). Measured (harness tracks the grenade object, class 0x8011): it appears in
    the hand 29 frames after square, leaves it 8 frames later 1.0 m ahead and 2.1 m up, at 20.4 m/s along the facing and 1.2
    up, falls at 10 m/s^2 losing 0.63 % of its speed each 0.1 s (the original steps it at 10 Hz), stops dead where it lands
    and explodes 3 s after it appeared. Aurek: play.c throws it (square on the PSP layout), ak_proj_throw / stuck / drag; it
    lands 0.85 m from the original's spot over 21 m.
  - [ ] **2.3b** Where 20.4 and 1.2 come from (ProjectileSpeed 10, VerticalThrowSpeed 2.5: pitch? a factor?), throws
    while moving, and the other explosives and items.

- [ ] **2.4 Guided projectiles [assumed].** Aurek turns them at 100°/s; trace the turn rate.
  - Traced so far: tracking projectiles are Rocket (20 m/s), Proton Torpedo (125), Harpoon (100), HomingMissile and
    AdvancedHomingMissile (150); no turn-rate key in any blueprint, so it is a code constant. The projectile object (init
    08A16FD8: WillTrack -> flags +364 bit 0) runs a state machine in 08A186EC (states hashed 0x29893637 -> 08A192CC,
    0xF4A2AC2B -> 08A189F0); the steering itself is not found yet. Measuring it needs a lock-on rocket in the harness.
- [x] **2.5 Blast fall-off [measured 2026-11-16].** The player's own thermal detonator, with the player teleported 1 / 3 / 5 / 7 m
  from where it lay (radius 8, 100 damage): 100, 86.5, 62.0, 26.3 taken - damage x (1 - (d / radius)^2), d to the feet; the
  thrower's own blast hurts it. Aurek: explode() uses that rule and hurts the owner. [ ] 2.5b: vehicles and teammates not
  measured.
- [ ] **2.6 Bot accuracy [partly traced 2026-11-17].** How AIWeapon_Accuracy_* and Modifier_Bot_* are applied.
  - 08A24438 loads a weapon's AI record: +24 AIWeapon_Accuracy_Normal, +28 AIWeapon_Accuracy_Elite (both clamped to
    0..D_08AEF9CC), +32 Modifier_Bot_RateOfFire, +36 an int.  08A24280 builds the record: +0 a target id (999 = none),
    +4 the weapon's name hash.  It is called from 08986C0C (game_17) and from game_20.
  - 08A250F0 returns the accuracy: the elite value when the difficulty (08979DF4) is 2, else the normal one.
  - Its only reader, 0893F364, is an AI firing step:
    - A timer (+104) runs down by dt / (0.03·d + 0.1) when d < 30.  d is the first component of the vector to the
      target; the branch for d ≥ 30 is not read.
    - When the timer runs out (and byte +109 is set), the AI fires through 0893F65C.
    - The aim error is the accuracy × π/180, which suggests the accuracy is in degrees.
    - The timer is reset to 2.5 or 1.75 by difficulty; which value goes with which is not read.
  - Which AI owns this step (soldier, turret or vehicle) is not settled.  Nothing ported yet.
  - Traced so far: 08A24438 reads each weapon's AIWeapon_Accuracy_Normal (+24), AIWeapon_Accuracy_Elite (+28) and
    Modifier_Bot_RateOfFire (+32) into an AI weapon record, each clamped to 0..5 (0x08AEF9CC). Who reads them (the aim error)
    is not found yet. Bolts are not registry objects, so the harness cannot count AI shots directly; hits on the player can be.
- [ ] **2.7 Damage tables [partial].** Check every damage path against DamageToInfantry, DamageToVehicle, armour and friendly fire.
  - Measured (2026-11-16, harness: the player's weapon is soldier +0x68, its clip at +0xA0): the blaster rifle fires 5 frames
    after the trigger, then every 18 frames (RateOfFire 0.3); 15 per body hit, 60 per headshot (1.12); the reload starts with
    the shot that empties the clip and takes ReloadTime (2.25 s). Aurek now starts the reload on that shot (was the next pull).
  - The thrower is hurt by its own explosive (2.5).

## 3. Vehicles

- [ ] **3.1 Ground vehicle handling [assumed].** Aurek's own:
  - the handling model (how the Tank numbers combine);
  - hover height;
  - slope limit (AK_VEH_MAX_SLOPE_DEG 40);
  - how the barrel aims;
  - volley period;
  - the speeder rider's pose.
  - Done 2026-11-16 (Tank blueprints: hover, tracked, speeder bikes, creatures): read the tank step 089B2A04 (fields from
    089BCDFC: CruisingSpeed +280, VelDamp +284, MaxAcc +292, MaxStrafeAcc +296, BoostAcc +300, StallSpeed +304, TopSpeed +308,
    TimeTillStopSkid +276) and measured a Taun-Taun with the harness (teleport beside it, d-pad up, full stick): the forward
    speed settles at MaxAcc x throttle / VelDamp (80 / 4 = 20 m/s, time constant 1 / VelDamp - Aurek now matches frame for
    frame), the skid damping works across and backward only, the speed is held to StallSpeed..TopSpeed; turning spins up at
    YawInputDamp - YawDamp (100 degrees/s^2) to MaxTurnYaw and settles at YawDamp - Aurek matches.
  - [ ] **3.1b** The throttle cap over CruisingSpeed (vehicle +288), hover height, slopes, barrel aim, volleys, rider pose.

- [ ] **3.2 Vehicle bodies against the level [assumed].**
  - The vehicle the player drives is a dynamic body (box move-and-slide, mask 0x2804 / 0x0804 / 0x4804).
  - AI vehicles are kinematic.
  - Replace Aurek's ground rays and circles. Trace AI vehicles' ground-following.
  - The hover craft's ride over water is still Aurek's own rule.
  - Done 2026-11-16 for creatures and tracked tanks: the harness reads any object's physics body (RS_DRIVE_BODYID=<id>): a
    Taun-Taun's body is its model's own box (0.97 x 2.61 x 2.04 m, HSKN), standing on the ground (no hover) and turned with the
    creature. Aurek: those kinds move as that box with the soldier's sweep and slide (ak_vehicle.c box_body_step, Tank mask),
    set down on their lowest corner when made; AK_VEH_BOX=0 keeps the old rays. Also fixed: creatures' models face -z (they
    were drawn facing the camera).
  - [ ] **3.2b** Hover tanks and speeder bikes (hover height, ride over water) and walkers still use Aurek's rays; measure one
    on a level that has them.

- [ ] **3.3 Flyers [partial].** Measured on Hoth's snowspeeder (harness: `--team rebel`, teleported beside it, d-pad up; the
  programs fly / fly_tap / fly_rl / fly_stick / fly_climb / fly_pitch / fly_boost):
  - [x] Boarding: from beside it (it lands parked, its reported health field 0; bots take them about 15 s in).  "R Take off".
  - [x] Lift-off: R; straight up along AnimTakeoff's root channel (1.016 m in 1 s, key for key), then away level at StallSpeed.
  - [x] Speed: two settings - the stall speed (after lift-off, and L) and the cruising speed (R) - reached at MaxAcc (100 m/s²),
    kept when let go; the speed holds through climbs and dives (no gravity in flight).
  - [x] Turning, traced (089AA10C → 089AA884 pitch, 089AA9EC yaw, 089AAB54 roll): each rate first decays by Damp·dt, then
    gains input·InputDamp·dt, clamped to ±MaxTurn (not scaled by the stick).  The craft turns about its own axes and the
    velocity is turned back (089C884C), so it keeps its world direction; the skid damping (089AB3F8: TimeTillStopSkid·dt of
    the sideways, vertical and backward velocity) then bleeds it.  Aurek now flies this way: the 1 s pull-up ends at 38.41°
    (game 38.48°), the 2 s turn covers 135.1° (game 135.3°), and the speed reads 15.07-15.08 m/s in the turn (game 15.07).
  - [x] Speed, traced (089B20CC input, 089AB3F8 step): the throttle is R +1 / L -1 / neither 0 (an axis × 1.414 clamped to
    ±1).  It adds MaxAcc·throttle·dt (BoostAcc when boosting), less VelDamp (0 on flyers), so with no input the speed stays.
    Above the cruising speed (not boosting) the throttle is held to AntiBoost (-0.2).  The speed ahead stays within
    StallSpeed..min(TopSpeed, 300) and does not cross the cruising speed (unless boosting).  Free flight floors it at
    StallSpeed; otherwise at 5 m/s.  In a hangar the top is TopSpeedHanger (fighters 10; confirmed by the user).
  - [x] Boost, found 2026-11-17: tap R, then hold R again within 0.5 s of the tap's release; it lasts while R stays held.
    Traced in the flyer's own input function 089A9728: control 3 is an R "tap" binding, which fires on the release
    (class 08AF7A38); control 4 is R held.  The boost also needs the energy (089CABFC) and free flight (vehicle +852 bit 0).
    That bit is set in space once the craft is out of the hangar, and never on the Hoth snowspeeder, where the attempt only
    raises flag 0x100.  Seen on Space Hoth's X-wing: 10 m/s in the hangar (TopSpeedHanger), StallSpeed 40 outside, cruise 100;
    with the boost it reached TopSpeed 175 in about 0.7 s, then fell back to the cruise at AntiBoost × MaxAcc after release.
    Aurek: the same input, allowed on any space map (the hangar volumes are not known) [PARITY(3.3)].  +852 seen: 0x20 on
    the Hoth snowspeeder; 0x20 → 0x21 (bit 0) as the X-wing starts its lift-off on Space Hoth, then 0x23.  No code writes the
    bit by itself: it arrives with the network state copies (089BB8C4 / 089D0EA8 copy a whole word), so its source is not found.
  - [x] Hangar / planet speed limits, traced: when +852 bit 0 (free flight) is clear, 089AB3F8 caps the speed at TopSpeedHanger
    (base 35, fighters / bombers 10).  The floor is StallSpeed when +856 bit 0 is set, else 5 m/s.  +856 bit 0 is set by
    089A9588 from Flyer_Type: "snowspeeder" always; a type hashing 0x3FBE8126 when not in free flight; none of the others.
    Aurek: planet maps are never free flight (snowspeeder cap 35 with its 25 cruise: no change seen); space maps are free from
    the start [PARITY(3.7): in the game the craft is capped at 10 m/s until it leaves the hangar].
  - [x] Auto-level (089B01C0): any stick input sets a 3 s timer (+896); when it has run out, flag 0x80 makes the roll level at
    RollRemoval.  Only with the game's auto-level option (byte 0x08C293C6) and +195 set.  Aurek: AK_AUTO_LEVEL (default 1).
    Aurek clamps the roll to the bank angle; the game's roll is a free rotation [PARITY(3.3)].
    Tooling: the original's per-vehicle controls can be dumped with RS_DRIVE_VEHIN=1 (each frame's control values, the flags,
    and once the control scheme's binding chains) and RS_INPUT_DUMP=1 (the soldier's scheme).
  - [ ] Roll (craft with MaxTurnRoll > 0): no starfighter flies on a planet map. Measure it in space (3.7).
  - [ ] Crash and skim rules: a ~10° dive into Hoth's snow skimmed once, then crashed (the pilot dies, the wreck stays).
    The rule (angle, speed or surface) is not found.  Landing (AnimLand) is not measured.  Both are still Aurek's.
  - [ ] Stunts (Immelmann, barrel roll: the EnergyStunt use).
- [ ] **3.4 Walkers [partial].** Measured on Hoth's AT-ST (harness: `--team empire --tp 60:264,14.8,14 --program walker`;
  boarded from its side with d-pad up):
  - [x] Its controls act 0.47 s (28 frames) late, for turning and walking alike.  [PARITY(3.4a): the cause is not found.]
  - [x] Walking is root motion: idle_to_leftfoot (0.5 s at 3.53 m/s), then the walk loop at its key slopes.  The speed is
    |root velocity| across the ground, along the facing.  Let go: it walks on to the loop's next foot point (end = left foot,
    middle = right foot), then leftfoot_ / rightfoot_to_idle.  Aurek's path is within 1 % over a 15 s run.
  - [x] Turn: starts at 0.083 rad/s, spins up at 1 rad/s² to MaxTurnYaw (0.5 rad/s), stops at 4 rad/s²; walking or standing.
    Aurek is within 1° (one frame) over a 140° turn.
  - [ ] Sprint (SprintingSpeedScale 1.5): the input is not found; Aurek's boost speeds the walk clips up.  Walking backwards
    is not measured.  Turning in place (turnL_30 / turnR_30) is not read; it is posed as before.
  - [ ] Gunnery, what a placed walker does at its path's end, and the ATBL animation chunks (not read).  AT-AT not measured.
- [ ] **3.5 Vehicle life cycle [assumed].**
  - Respawn time (AK_VEHICLE_RESPAWN 10).
  - How long a wreck stays and its effects (play.c:1528).
  - Which vehicle a level uses when it has two (play.c:596).
  - Boarding and leaving rules.
  - Measured 2026-11-16 (harness --hp F:-2 runs the game's "Kills all tanks", 08A61D98 -> 089B4C78): every Taun-Taun's wreck
    stays 4.7-4.8 s and a new one stands at its spawn 10.9-11.0 s after the kill (spawn records: 10 s). Also seen: a new one can
    appear at the spawn while the old one, ridden away, still lives. Aurek: wrecks drawn 4.75 s, respawn record + 1 s.
  - Flyers, measured 2026-11-17 ("Kills all flyers", --hp F:-3, on Hoth's two parked snowspeeders, three runs): the wrecks go
    4.98 s after the kill (299 frames, every run); new ones stand 12.0, 13.0 and 13.0 s after it (spawn records: 10 s).
    Aurek: flyer wrecks 4.98 s, respawn record + 2.5 s.
  - Boarding, measured: the player boards from beside a vehicle with d-pad up (the snowspeeder from 2.6 m behind its centre,
    the AT-ST from 2 m to its side); up again leaves.
  - [ ] **3.5b** The extra time's source and the flyers' spread, the respawn-when-taken-away rule, the boarding range.

- [ ] **3.6 Secondary weapons and lock-on.** Lock-on traced 2026-11-17 (089CC77C per frame, 089CC878 the check; blueprint
  fields from 089C4A2C: LockAngle +400, LockOnTime +408, LoseLockOnAngle +412, LoseLockOnRange +416, InitialLockOnAngle +420,
  InitialLockOnRange +424; target +448 (999 none), last target +452, timer +464, locked +468).  A new target resets the timer.
  While building, the target must pass the check within InitialLockOnRange / InitialLockOnAngle (1000 m / 30° in the base
  blueprint) each frame, or the timer resets.  The timer grows by dt, clamped to LockOnTime; at LockOnTime the lock holds
  while the check passes within LoseLockOnRange / LoseLockOnAngle.  Aurek now does this; it used LockAngle (15°) while
  building.  The candidate test (089CA734): the angle to the target (acos of the clamped dot) under LockAngle - as Aurek's choice.  Was: Verify HardpointW2 and the lock rules against the original. The docs list them as
  "not yet" (stale).
- [ ] **3.7 Space [partial].** Capital ship turrets (ENTI type 30), the pilots' dogfight states, and hangar and shield rules.
  - Harness: Space Hoth is planet row 17 (`--planet 17`); the space team and spawn screens are recognised
    (`team_select_space`, `spawn_map_space`), and `--spawn N` picks the spawn list's entry.  The Rebel player starts on foot
    in the hangar (1365.5, 18.8, 91.6); the starfighters stand at x 1352 (objects 30d4e..30d51); `--tp 60:1356,18.8,88`
    then d-pad up boards 30d50.
  - Measured once (30d50, program fly_stick): R lifts it 2.07 m in about 2 s (another takeoff clip than the snowspeeder's),
    then it flies level at 10.0 m/s inside the hangar; a full turn there slows it to 7.1 m/s while turning.  Not yet known:
    the ship's blueprint, whether the slowing is the hangar's rule (TopSpeedHanger) or every turn's, and roll outside.
  - Second run (program fly_space): R held after lift-off gives 40.0 m/s.  A 2 s full turn (about 165°, at up to ~80°/s) slows
    it to 28.5 m/s and it stays there; a 1 s push down slows it to 25.5 m/s; about 1 s later it is back at 40 m/s within a few
    frames, with no input.  No bank shows in the reported matrix.  So in space the speed is not simply held through turns (the
    snowspeeder's was).
  - Code to read next: the vehicle step 089AB3F8 reads CruisingSpeed (+280), AntiBoost (+288), StallSpeed (+304) and, at
    0x089AB82C's neighbour, TopSpeedHanger (func 089C5898).  The blueprint getters are 089C5404..089C5AE8, stored by 089C4A2C
    at vehicle +236..+340.  Read so far (089AB3F8): it damps the local velocity (+540, VelocityDamp at +276), then clamps the
    forward speed between StallSpeed (+304) and a top (+308, or TopSpeedHanger when a vfunc +204 says the craft is inside a
    hangar), with CruisingSpeed (+280) / AntiBoost (+288) for its throttle flags (+844 bit 2).  Which class runs it (hover or
    flyer) is not settled yet.

## 4. AI

- [ ] **4.1 Bot vehicle use [assumed].** All Aurek's, including AK_BOT_VEHICLES 0.6.
- [ ] **4.2 Target selection [assumed].** Tooling: RS_DRIVE_TGTSCAN=1 lists soldier fields (and their controller's) holding
  another soldier's object or id.  On Hoth only +5E0 turned up (one bot → another, likely its squad leader), so the target is
  not a soldier pointer or id field; the AI weapon record (2.6, +0 a target id) is the next lead. Aurek takes the nearest (play.c:1223). Trace the game's choice, memory and reaction time.
- [ ] **4.3 Turret AI [assumed].** States NEUTRAL / SEARCHING / ORIENTATING (0x08B1B6AC) and who aims.
- [ ] **4.4 Movement behaviour.** Path following, strafing, cover, objective choice, and retreat. Compare against the original's
  decisions.
  - Measured (1.4): AI soldiers' speeds come from the AI controller (soldier +88 -> +72), not the clips: 5.0, 7.4, 8.5, 11.5
    m/s seen on Hoth, changing every ~6 frames. Trace where they come from.
- [ ] **4.5 Bot counts per mode and level [partly measured].** AK_BOTS is 15.  Measured 2026-11-17 (harness, soldier objects
  0x8005 per frame): Hoth conquest peaks at 16 soldiers including the player (15 bots, as AK_BOTS); Space Hoth shows up to 11 on
  foot at once, but pilots in their craft are not soldier objects there, so the space count is not settled.  The game's source
  of the count (mode or level data) is not traced.
- [ ] **4.6 Space AI [partial].** Commander roles are traced; dogfight states FOLLOWING / CIRCLING_ROUND / DOING_STUNT are not.

## 5. Game rules and modes

- [ ] **5.1 Tickets [assumed].** Per mode and level (AK_TICKETS 100), ticket bleed, and AK_TOTAL_LOSS_TIME 60.
- [ ] **5.2 Heroes [partial].** Unlock threshold (AK_HERO_UNLOCK 3), and how HeroDeathRate and HeroHealthAddPerKill are applied.
- [ ] **5.3 Remaining entity types [partial].** Regions, soldier spawns, other ENTI types (doc 1.4 "still open").
- [ ] **5.4 Modes.** CTF, hunt and space completeness. Galactic conquest and campaign rules (credits, map moves, unlocks).
- [ ] **5.6 Entity placement [assumed].** From the Known-issues table: many meshes float or sit in the wrong place (likely
  parent-relative transforms), and command post models are not in place (only the cone and logo). Trace the game's placement.
- [ ] **5.5 Command posts [partial].** The capture cross (post flag 0x74 bit 0), the colour pulse (08A516BC), and capture speed per
  soldier count.

## 6. Animation

- [ ] **6.1 Animation tables for soldiers [partial].** Soldiers still use hand-picked Human_Rifle clips; they should use the ATEX
  tables (sets, rows, columns) and the game's layer and blend rules.
- [ ] **6.2 Skinning [missing].** v2 meshes (Taun-Taun, Vader, the cone, flags) are drawn rigid in the bind pose.
- [ ] **6.3 Death animations and ragdoll.** The death clips. After death the body has gravity on (08993D38): trace what it does next.
- [ ] **6.4 Command post cone [assumed].** Its capture animation and the logo height (1.25 m is an estimate).
- [ ] **6.5 Heroes [missing].** Saber combos, blocking, force powers, saber throw. Blaster heroes' own tables.

## 7. Audio

- [ ] **7.1 Music mixing [partial].** audio/ak_music.c "not yet mixed" into the mixer groups.
- [ ] **7.2 Missing effects.** Vehicle collisions ("Collision sound"), Doppler, any reverb or occlusion the game uses.
- [ ] **7.3 Speech [partial].** Trigger rules for every line category.

## 8. HUD and front end

- [ ] **8.1 HUD gaps.**
  - Bot names in the target panel (player records, 0897DD80).
  - Jetpack and shield bars.
  - The unmanned turret's hit source.
  - World markers (08A55238).
  - The capture cross.
  - The missile-warning check against a screenshot of the original.
- [ ] **8.2 Front end (1.10) [missing].** Menus, loadouts, colour picker, map selection, galactic conquest, campaign, subtitles.

## 9. Camera and input

- [ ] **9.1 Soldier camera [assumed].** FOV (AK_FOV 55) and near/far planes. Trace per mode, including zoom.
- [ ] **9.2 Vehicle cameras [partial].** CameraVelocityWeight and the "Min" values.
- [ ] **9.3 Controls.** The PSP layout is traced. Twin-stick aiming (AK_AIM_*) is a modern option and stays as one, kept apart from
  the classic controls.

## 10. Network and server (1.11)

- [ ] **10.1** The RS server protocol, hosting, and dedicated server mode.

---

## R. Renderer: lightweight PBR for Aurek, ready to build

**Goal.** Keep every original texture and how the game uses it (slots, alpha, blending, self-lit, animated materials). Light them
with a modern model at three tiers:

- **Tier V (Vita):** basic PBR.
- **Tier F (PC / PS5 / Steam Deck):** the Frostbite BRDF of DICE's Battlefront II (2017):
  - Burley diffuse;
  - GGX;
  - height-correlated Smith visibility;
  - Schlick Fresnel;
  - split-sum IBL with specular occlusion.
- **Tier RT (PS5 / PC):** ray-traced shadows, reflections and AO on top of Tier F.

The old experiment in `platform/linux_test/gfx_vk.c` is a reference only; this is written from scratch for Aurek. Only the
groundwork below is needed before the parity work starts. The tiers come later.

### Original look, traced first

- [ ] **R.1 Level lighting.** Today it is approximated as vertex colour × 2. Read the game's own level lighting data.
- [ ] **R.2 Fog.** The FOG values are read but not understood (Tatooine 11–75 m). Trace them.
- [ ] **R.3 Sky.** The sky set-up.
- [ ] **R.4 Material modes.** All 6 texture slots of a material, its mode, its "extra" field and animated materials (water,
  screens, lightning). Aurek handles diffuse plus flags only.
- [ ] **R.5 LOD distances.** AK_LOD_SCALE 12 is Aurek's own; trace the real ones.
- [ ] **R.6 Particles and effects (PFX).** Explosions, muzzle flashes, impacts, streaks, and the command post glow (AK_POST_GLOW
  is Aurek's own).
- [ ] **R.7 Shadows and decals.** Shadow blobs and scorch marks as the game places them.
- [ ] **R.8 Screen effects.** Damage, zoom overlay, hyperspace.

### Groundwork before any PBR code

- [ ] **R.9 A "Classic" mode.** It reproduces the PSP output: unlit texture × vertex colour, the game's fog, the game's blending. It
  is the reference for parity screenshots, and each PBR tier can be compared against it.
- [ ] **R.10 Back-end interface rework.**
  - Today: fixed pipes with one MVP matrix.
  - Rework to: per-draw model matrix plus view and projection constants, so world-space position and normal reach shaders.
  - A material handle instead of a texture handle.
  - Passes declared up front (depth, opaque, cutout, transparent, additive, post, HUD) in a small frame-graph, so tiers can add
    passes (G-buffer, shadows, RT) without touching game code.
- [ ] **R.11 Vertex streams.**
  - Keep the 28-byte ak_vtx for Tier V.
  - Add an optional stream with tangents (MikkTSpace-generated at load) and a second UV for the higher tiers.
  - Skinned meshes get bone indices and weights.
- [ ] **R.12 Material translation layer.** The game's material becomes Aurek's material:
  - albedo (the original texture);
  - normal (derived where none exists, optional);
  - roughness and metalness (from the game's Surface type: Default, Snow, Sand, Grass, Wood, Stone, Metal, Water, Soft, Marsh -
    already traced - plus per-material overrides);
  - occlusion (from the baked vertex colour);
  - emissive (self-lit);
  - alpha mode (opaque / cutout / blend / additive);
  - layers.
  - The data lives in a table file so it can be tuned and modded without code changes. The original textures are never
    replaced.
- [ ] **R.13 Light and environment data.**
  - From the traced level lighting (R.1): sun direction and colour, an ambient term (spherical harmonics) and an environment
    probe per level.
  - A dynamic light list (muzzle flashes, explosions, lasers) with a per-tier budget.
- [ ] **R.14 Texture pipeline.**
  - A converted-texture cache per device format (GXT/PVRTC or DXT on Vita, BC7 on PC/PS5, ASTC where useful).
  - Mips and derived maps, generated offline from the original files.
  - Optional texture packs as mod content later.
- [ ] **R.15 Ray-tracing readiness.**
  - Static geometry kept in stable GPU buffers with stable triangle ids.
  - A hook to build acceleration structures for the level and for skinned or moving models.
  - Materials reachable from shaders through a bindless table.
  - Nothing ray-tracing-specific is built until Tier RT.
- [ ] **R.16 Per-tier budgets.**
  - Vita: 30 fps with 64 bots, Tier V at most one pass per light group.
  - Deck / PC / PS5: frame-time targets per tier.
  - Exit: a profile per device.
- [ ] **R.17 HDR output and tonemapping.**
  - Tier F/RT render in HDR with a filmic tonemap matched to Classic's exposure.
  - Tier V renders LDR with the same curve baked in.

---

## Order

1. **First:** section 0.
2. **Then the gameplay sections, 1 to 6:** each item is traced, written natively, then checked against the original.
3. **Alongside them:** R.1 to R.8 (the original look) and R.9 to R.12 (the groundwork). Gameplay work then draws through the new
   interface from the start.
4. **Last:** R.13 to R.17 and the PBR tiers themselves.
