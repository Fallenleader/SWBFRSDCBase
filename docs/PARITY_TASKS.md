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
  - [ ] **1.10b** A spawn screen (score board, map, spawn point choice with the game's default). 2026-11-20: the spawn map and
    team selection run from the game's own pages with AK_FRONTEND=1 (see 8.2); the score board before it is not shown yet.
  - [x] **1.10c** The AI's respawn rule. 2026-11-20: the game has spawn waves - the option "Respawn delay is time between spawn
    waves (in seconds)" is a float at 0x08B1BB48, 10.0 on every match (RS_DRIVE_PEEK; the warm-up beside it is 5.0); the match
    status (089883F8) counts the next wave from it. With the body's 5 s, the next 10 s wave gives the measured 5-15 s. Aurek
    kept the 10 s wave but let a bot back 1 s after dying; it now waits for its body to leave (5 s).
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
- [x] **1.14 The classic scheme's facing [re-measured 2026-11-20, see 9.3].** The original's one-stick controls turn the view with stick X (9.3); what follows was measured with the port's twin-stick patch on and is the game's strafe. Kept as `AK_SINGLE_STICK_TURN=0`. In the original (no right stick) the camera does not turn with
  the left stick: the soldier turns to face the stick's direction relative to the camera, closing the angle by 8/s (each frame
  the rest shrinks by 1 - 8 dt: 0.8666 at 60 Hz), and runs its forward clip; with the stick pulled back (back half) it faces the
  mirrored direction and runs its backward clip (stick down-left: faces 45 degrees right, runs back). Stick straight right: turns 90
  degrees and runs. Aurek ties the camera to the body (ch.yaw), so this needs a separate view yaw (with 9.3). The strafe clips
  (RunForward_left / _Right) carry the root forward: they are a run with the upper body turned, for aiming to the side.
  - Built 2026-11-17 for devices without a right stick (the Old 3DS) and as an option elsewhere (AK_SINGLE_STICK): the stick
    turns the soldier toward its direction relative to the view at 8/s and runs the forward clip, or (back half) faces the
    mirrored way and runs the backward clip; locked on, the stick moves relative to the facing; a gunner aims with the stick;
    shots go along the soldier's facing.  [PARITY(1.14): the view swings in behind at AK_VIEW_FOLLOW (2/s) - how the
    original's camera follows is not measured yet.]
- [x] **1.15 Soldier health and the customisation [done 2026-11-16 for the defaults].** The 133 is the player's
  customisation, not difficulty: the spawn screen's Customisation Menu (200 credits) defaults to Blaster Rifle (25), Thermal
  Detonator (10), Health Level 1 (10) and Speed Level 1 (10) = 55. Health by level 100 / 133 / 166 / 200 (08978170, table
  0x08AEE3B8); Speed by level 0.85 / 1.0 / 1.15 / 1.3 (08978240) - level 1 is the 1.0 the run was measured at. AI soldiers have
  60. Aurek: AK_HEALTH_LEVEL / AK_SPEED_LEVEL (default 1) give the player 133 and a speed scale; bots 60.
  - [ ] **1.15b** How Speed scales (playback rate or distance - Aurek scales both), where the AI's 60 comes from, and the
    other categories (Weapon 2, Special Item, Power Up, Capture Rate) and match-wide customisation options.

## 2. Weapons, items and projectiles

- [x] **1.16 Leaving the battlefront [traced 2026-11-20].** 089D4BDC, every frame, against the bounds object 08A145E4(0): ENTI
  class 0x8021 records {1, 0, 0, x min, x max, y min, y max, z min, z max, flags} (Hoth: x -217..249, y -20.9..19.5, z
  -64.7..181.1, game axes); flags byte 1 picks the box (0: soldiers and what they drive; 1: the AI pilots', 089477A8 /
  0894B7D8). Inside - nothing. Outside but within the box grown by 500 m (x, z) and 340 m (y), and within +-3940 / +-940 of
  the origin - message 0x804A to the local player: STDTEXT 72 "You are leaving the battlefront!" in the centre box (style 3)
  while it lasts and Speech_BN_Return once a spell (08A09928). Beyond - a damage message of 1.0 each frame. Engine: play.c
  reads the box and does the same (the damage as 60 a second [assumed: 1.0 a frame at 60 Hz]).
- [ ] **2.1 Loadouts [partly found].**
  - The player's loadout is the Customisation Menu (credits; each Weapon blueprint has a Cost): categories Weapon 1, Weapon 2,
    Explosive, Special Item, Power Up, Health, Speed, Capture Rate. Default (read from the original's menu, Empire on Hoth):
    Blaster Rifle 25, Thermal Detonator 10, Health 1 10, Speed 1 10 = 55 of 200. Weapon 2 offers e.g. a rocket launcher (25)
    or Blaster Pistol (0); Special Item 20 / 10 options; Power Up two at 10; Capture Rate 35 / 15.
  - To do: the full lists per faction (the Weapon blueprints with Cost and Faction), the AI's loadouts, and the menu itself.
  - AI loadouts, measured on Hoth (RS_DRIVE_WEAP=1, 4000 frames; each spawn's weapons, by weapon serial):
    - Rebels: rifle + pistol + grenade ~52 spawns, rocket launcher + pistol + grenade ~9, chaingun + pistol ~6,
      shotgun + pistol ~4, flamethrower + pistol + item 130 ~1.
    - Empire: rifle + pistol + grenade ~22, rifle + EMP launcher + grenade ~5.
    - Which class carries which, and how the game picks a bot's class, are not traced: the Humanoid blueprints name no
      weapons.  Not ported.
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
  - Its only reader, 0893F364, is reached from 0893F2F8.  0893F2F8 is one of the four AI behaviour-node types that dominate
    the object update (HANDOFF.md profile).  Read:
    - The node's init (0893EF7C) sets a timer (+104) to 2.5 s, or 1.75 s at difficulty 2.
    - With a target at distance d, each frame the timer drops by dt / (0.03·d + 0.1) under 30 m, and by dt beyond.  So it
      runs out after 2.5·(0.03·d + 0.1) s: 0.48 s at 3 m, 1.0 s at 10 m, 2.5 s from 30 m (×0.7 elite).
    - With no target (id 999) the timer is set back to its start value.
    - Once it has run out and byte +109 is set, the node fires (0893F65C).  The aim error passed on (+44) is the weapon's
      accuracy (by difficulty) × π/180, so the accuracy is in degrees.  Then 0893FAE0 runs.
    - +109 is set by 0893FAE0 when any of +110..+122 is set (13 checks of what the soldier can fire, func_08985260).
      Firing does not reset the timer: it is the reaction delay from acquiring a target, and it starts again only when
      the target is gone.
    - The aim (08934E38 -> 088F79C0): the line to the target point, leading the target by its velocity × the frame time, is
      turned to a direction drawn uniformly over the spherical cap of half-angle = the accuracy.  The azimuth comes from a
      rejection-sampled point in the unit disc; cos θ is uniform between cos(accuracy) and 1.
    - Ported (soldier bots): the reaction countdown, the cap-shaped aim error from each weapon's own accuracy (normal or elite
      by AK_DIFFICULTY: 0 easy, 1 normal, 2 elite; default 1; AK_BOT_AIM still overrides), and the hit rate in a 60 s Hoth match
      went from 59 to 41 soldier hits of ~370 shots.  Bots driving vehicles and AI turrets now aim the same way, with their
      hardpoint Weapon's accuracy (else Weapon "Base": 5 / 4).  Aurek's bursts stay: the firing rhythm is elsewhere.
    - 0893F65C picks which weapon to fire, by the target's class and distance d.  The choice goes to a byte at the
      controller's +204 table.
      - The node's flags +110..+122 come from 0893FAE0.  Each is func_08985260(soldier, code), which asks whether the soldier
        carries a weapon whose type (weapon +188) is code 110, 111, 122, 118, 116, 124, 126, 119, 177, 178, 117, 127 or 130.
      - Against a soldier (0x8005): code 116 if carried and d < 8.5 m; else 118 if d < 12.5 m; else 122, 124, 110, then 111.
      - Against walkers (0x8014 / 0x8003), tanks (0x801D) or flyers (0x8004 / 0x801E): 126 first, then 119, 122, 110,
        116 (< 8.5 m) ...
      - The codes, dumped from the running game on Hoth (RS_DRIVE_WEAP=1 prints each soldier's weapon slots).  Weapon +4 is
        a hash of the weapon's effect or name:
        - 110 the blaster rifle, 111 the pistol, 118 the shotgun, 122 the chaingun.
        - 116 a flamethrower (BFF_FlameThrower_E), whose class also has a slot-6 item coded 130.
        - 119 an EMP launcher (BFF_Muz_EMP_Gun_Flash_E), 126 the rocket launcher, 127 the slot-6 grenade.
      - So: within 8.5 m the flamethrower, within 12.5 m the shotgun, then the chaingun, rifle, pistol; against vehicles the
        rocket launcher, then the EMP launcher.  Not ported: Aurek's bots carry one weapon until 2.1's AI loadouts are done.
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
- [ ] **4.2 Target selection [traced for soldier bots 2026-11-19].** The AI sensor (vtable 0x08AF96F0; built by 08961784 on the
  base 0892538C; updated every frame by 08961A50; read by 08962DAC from the fire node 0893F364):
  - Sight: 55 m (+32) x a multiplier (+48, 1.0); a cone of +-45 degrees across and vertically (+36/+40/+44 = tan(pi/4),
    tested by 089258F8 in the sensor's frame, Euler angles at +20); the eye is the soldier's position raised by
    min(0.9 x height, 2 m) (0896293C); the sight line (08835014) must reach the enemy's aim point (vfunc +144) within 0.01 m.
  - Records (list at +52, 12-byte nodes): new on first sight with awareness (+24) 1 and age (+20) 0; seen again: last position
    (+28), velocity (+40) and team (+16) updated, the age runs on.  Each frame every record ages by dt and is dropped at 2 s
    (D_08B1B77C) or when its object is dead or gone; one still in view comes straight back.  Awareness below 1 grows by 2/3 per
    second (a branch zeroes it: a lookup in D_08C2B3A4 and its vfunc +32 - not traced).
  - Target: the record nearest the soldier by last-seen position with awareness > 0.99 (08962DAC).
  - Ported 2026-11-19 (soldier bots: bot_sense / bot_find_enemy in play.c): every frame (spread over frames above 16 bots,
    AK_BOT_SENSE_EVERY).  60 s Hoth, 15 bots: soldier hits 298 -> 181 of ~10,400 shots (bots no longer see behind them).
  - Open: what turns the sensor (Aurek: the facing), the second list it scans (08961C58, D_08C2B2A8: own-side objects, a
    distance at +52 - perhaps shared sightings), the awareness-zeroing branch, and the same for bots in vehicles and turrets
    (still Aurek's find_enemy).
  - Earlier tooling: RS_DRIVE_TGTSCAN=1 lists soldier fields (and their controller's) holding
  another soldier's object or id.  On Hoth only +5E0 turned up (one bot → another, likely its squad leader), so the target is
  not a soldier pointer or id field; the AI weapon record (2.6, +0 a target id) was the lead. Aurek took the nearest (play.c:1223).
- [ ] **4.3 Turret AI [assumed].** States NEUTRAL / SEARCHING / ORIENTATING (0x08B1B6AC) and who aims.
  - Traced 2026-11-19 (the turret AI update 089502F0; its state at +28, names at 0x08B1B6AC: 0 UNSET, 1 NEUTRAL,
    2 SEARCHING_FOR_THREAT, 3 ORIENTATING_TO_THREAT; skipped while flag +8 bit 4 is set):
    - UNSET: a turret of a side (turret +48 -> +12 not 4, the neutral team) goes to SEARCHING; SEARCHING goes to NEUTRAL the
      next frame (089509C0 sets the state; what it does on entry is not read).
    - NEUTRAL: neutral side -> stays NEUTRAL; else when its target record (controller +44 -> +24 -> +4, 999 none) names a live
      object (health +40 > 0) -> ORIENTATING.
    - ORIENTATING: neutral side, or the target gone or dead -> SEARCHING.  Else the target id goes to turret +256 and
      0895076C aims: at flyers, walkers and tanks (0x8004, 0x8014, 0x801D) a lead point from the vehicle's vfunc +104 with the
      shot speed (D_08B1B740), +34 = a firing solution found; at anything else the object's position (vfunc +20).  The gun object
      is turned with its vfunc +56.
    - With flag +33, every 10 s (+52) while the aim is within 5 degrees of the target (cos 5 deg, cached), it raises AI event 1
      for the target with 2.0 (08A24358) - a warning / call-out, not the firing.
    - Who fires and which sensor fills the target record are not read (the sensor classes are built in 0895FD14..08961784;
      the soldiers' is 0x08AF96F0, see 4.2).  Aurek's turrets keep their own pick (nearest it can point at and see).
- [ ] **4.4 Movement behaviour.** Path following, strafing, cover, objective choice, and retreat. Compare against the original's
  decisions.
  - Measured (1.4): AI soldiers' speeds come from the AI controller (soldier +88 -> +72), not the clips: 5.0, 7.4, 8.5, 11.5
    m/s seen on Hoth, changing every ~6 frames. Trace where they come from.
  - 2026-11-19: the AI soldiers' controller (soldier +88) is one class for every bot, vtable 0x08B04798 (built by 089DE870,
    +72 a vector set to zero there).  The soldier update (0899530C) hands ctl +72 to the soldier's vfunc +484 (0899984C) while
    the controller block's flags (+56 -> +112) have bit 16 clear - the bots' case (flags read 0 on Hoth): 0899984C takes it as
    the wanted move direction (x, z; under a small length the soldier stops, vfunc +488) and turns the soldier toward it.
    The speed is set elsewhere (not found yet).  Harness (RS_DRIVE_AICTL=1, Hoth, 600 frames, positions every 1/6 s): bot
    ground speeds are 0 (31 %), 5.0 (28 %), 8.5 (26 %) and 11.4-11.7 (21 %) m/s, 7.4 rare.  The movement node 0893D4E8 (one of
    the four node types) uses 8.5 / 40 / 5.0 (D_08AED88C..94) - next to read.
- [ ] **4.5 Bot counts per mode and level [partly measured].** AK_BOTS is 15.  Measured 2026-11-17 (harness, soldier objects
  0x8005 per frame): Hoth conquest peaks at 16 soldiers including the player (15 bots, as AK_BOTS); Space Hoth shows up to 11 on
  foot at once, but pilots in their craft are not soldier objects there, so the space count is not settled.  The game's source
  of the count (mode or level data) is not traced.
- [ ] **4.6 Space AI [partial].** Commander roles are traced; dogfight states FOLLOWING / CIRCLING_ROUND / DOING_STUNT are not.

## 5. Game rules and modes

- [ ] **5.1 Tickets [traced for conquest 2026-11-19].** Per mode and level (AK_TICKETS 100), ticket bleed, and AK_TOTAL_LOSS_TIME 60.
  - Found by a gdb watchpoint on the counts (harness RS_DRIVE_MEMSCAN found them at the conquest manager, class 0x8002,
    +0x48 / +0x4C, Rebels / Empire; RS_DRIVE_PEEK reads them): the starting count is the option BFF.InitialTickets (options
    +424, default 100).  The level script then sends the ticket entity (ENTI type 9, class 0x8009, handler 089875C8) its
    changes: 0x8022 {u32, team, f32 percent} adds round(count x percent x 0.01); 0x8002 {u32, team, count} sets a non-zero count
    (0898810C).  Hoth's start group adds 25 % for the Empire: 100 / 125, as the original's HUD.  The match settings block
    (089883F8) copies the counts to the manager (0898858C -> 089870F8, which also raises the low-tickets event under 11).
  - Bleed measured (Hoth, Empire holding 2 of 6 posts): one ticket every 240 frames = 4.0 s, as Aurek's.
  - Ported: the start-group 0x8022 / 0x8002 messages (ak_conquest.c ticket_mods).  Other levels' start groups change nothing;
    Tatooine's script sets 10 on an event (group 17) - script events are not run yet.  0x8003 (Tatooine: +5 / +10 / +20 on events)
    and 0x8006 / 0x8010 are other ticket-entity messages, not read.
- [x] **5.2 Heroes [done 2026-11-20].** Unlock threshold (AK_HERO_UNLOCK 3), and how HeroDeathRate and HeroHealthAddPerKill are applied.
  - Traced 2026-11-19: the class record reads HeroHealthAddPerKill into +168 and HeroDeathRate into +164 (089E3E38).
    - Drain (08982DA4, every frame unless the mode is 3 or the game is paused (089E47D0), and not while vfunc +96 says so):
      health -= HeroDeathRate x max health (+8) x the frame time (D_08B285A0), floored at 0 - the hero dies at 0.
    - A kill (08982634, when the unit's flag +96 bit 0 is set, the mode is not 3 and the kill counts (a1 = 0)): health +=
      max health x HeroHealthAddPerKill, capped at the max.
    - The unlock time is the option at +420 (default 3 minutes, 0897782C), as Aurek's AK_HERO_UNLOCK.
    - Aurek's heroes_drain and per-kill gain already do exactly this (play.c).  Mode 3 is HCTF (the mode table): heroes neither
      wear out nor heal by kills there - Aurek now skips both in HCTF (2026-11-20).
- [x] **5.3 Remaining entity types [partial].** Regions, soldier spawns, other ENTI types (doc 1.4 "still open").
  - Done 2026-11-19: the loader's full type -> class map, both families (docs/enti_types.md, "The factory").  Regions (0x8025)
    and soldier spawns (locators 0x8027 linked from posts) were already ported.  What the rest are, and where they belong:
    - 0x8016 (type 22): post-to-post links (posts A / B, weight, 4 route points); the ground AI builds its post graph from them
      (08925B78 -> 08927018) - goes with 4.x (bot objectives).
    - 0x8023 / 0x8024 (35 / 36): team spawn places used when no post is chosen and game kind 08C28F60 is 5 (0898383C) - 5.4.
    - Unflagged 52-64: the AI hint family (base 08856288; 55 path nodes, 56 view-cone points, 5110 records) - 4.x.
    - Unflagged script nodes (base 08872328; 1 timer, 13, 28, 35, 36): the level script (SMSG groups) - 5.4 campaign.
    - Boxes 0x801A / 0x8021 / 0x8028 / 0x8029, 0x8012 AI volumes, 0x802A zones: space / Sullust, not yet read.
    - Mode codes (table 0x08B1B900, 089735B4 / 089735E0): 0 CQST, 1 CTF1, 2 CTF2, 3 HCTF, 4 GTAG, 5 CMPN (the mode is 08C29328).
  - Tooling: tools/re (BOOT.BIN relocation, Ghidra headless scripts, compare-tree walker).
- [ ] **5.4 Modes.** CTF, hunt and space completeness. Galactic conquest and campaign rules (credits, map moves, unlocks).
  - Part 1, 2026-11-19 - **the mode mask**: placed objects carry the modes they exist in (bit m = mode m; modes 0 CQST, 1 CTF1,
    2 CTF2, 3 HCTF, 4 GTAG, 5 CMPN - code table 0x08B1B900, the mode at 08C28F60 / 08C29328).  The word follows a 0 after the
    shared { link 999, u32, u32, f32 health } (08A073E0 -> 08A26CF0); at the match start 08A269DC enables objects whose mask holds
    1 << mode (08A26670) and disables the rest.  Checked on Saleucami (harness): the original's conquest has 4 posts and 5 + 5
    droids - a fifth post and a droid pair are CTF-only (mask 0x0C), which Aurek used to place.  Aurek now reads the mask
    (assets/entity.c ak_enti_modes) and skips other modes' posts, droids, turrets, vehicle spawns, objectives and props; AK_MODE
    picks the mode (code or 0..5, default CQST).
  - Part 2, 2026-11-19 - **CTF rules ported** (game/ak_ctf.c; AK_MODE=CTF1 / CTF2 / HCTF): flags, pickup, carrying, drop and
    30 s return, captures at bases, score limit 5 (AK_CTF_CAPTURES, 3..20), time limit 60 min (AK_TIME_LIMIT; more captures
    wins, else a draw), unlimited tickets outside conquest / campaign (no bleed, no ticket loss; total loss also off -
    [assumed]), the HUD showing captures where the tickets go (08A5B80C), flag models by faction and friend / foe (089F84D4).
    Checked on Endor: CTF2 2 flags / 2 bases / 2 posts, a capture by the carrier's own base only; CTF1 one neutral flag scored at
    the carrier's own base, not the other.  Open: bots have no CTF orders yet (the squad AI 08929120 / 0892A9D0: own and enemy
    base and flag positions, an attack share of 0.7 - 0.4 in HCTF - per side), kill boxes (5 s return), the carried flag's bone
    (0x7E779B80; drawn 1 m above the carrier), flags carried in vehicles (089D0A8C), the flag messages, HCTF's hero flag bases.
  - Part 3, 2026-11-19 - **bots play CTF** with the roles of the side's flag AI (0892A9D0 / 08929EBC, read through Ghidra):
    carrier -> our base (states 8 / 9, order 0x3F4); our flag carried -> after its carrier (7 / 11); else attack the enemy flag
    with the flag's share (0.7, HCTF 0.4; state 2, order 0x3F3) or guard our own (3).  [assumed]: the game hands these to squads
    (groups 0898BC68) and switches them by its counts; Aurek's bots take a role each per life.  Endor CTF2, 12 bots, 5 min: the
    flags change hands and captures are scored.
  - Still open in 5.4 (left for later passes): HCTF's heroes as flag holders (the loading hints: kill the enemy hero to take
    the flag; mode 3 lets anyone carry and returns a side's own flag at its own base - who gets the flag is not traced), Gungan
    Tag (GTAG, mode 4), CTF in space (400 m pickup, flyers), Galactic Conquest and the campaign rules.  The modes' names come
    from STDTEXT (Conquest, 1-Flag CTF, 2-Flag CTF, Hero CTF, Gungan Tag, Galactic Conquest); CTF1's bases sit in the enemy's
    base area, which is how "take the neutral flag to the enemy base" matches the base-side rule.
  - CTF traced (the rules above): flags are class 0x8019 spawners (ENTI type 25: team word after the mask block, 2 = the
    neutral flag of CTF1) that make a carried flag object (class 0x8018, 089F8238); bases are class 0x8017 (type 23: team, capture
    radius, 4-5 m).  Flag update 089F6658: picked up within 4 m (space 400) by a live soldier of another team (HCTF: any; heroes
    only if the flag allows), one flag a carrier (089F708C / 089F7D9C); it follows the carrier; dropped at the carrier's feet on
    death (089F7B4C) with a 30 s return timer (none in campaign), 5 s when it rests in a kill box; a returned flag is removed and
    its spawner makes a new one at home (089EFF44 -> 089F0064).  Base update 089EF220: a carried flag within the base radius scores
    (089EF760 / 089EF7C8 -> 08973830: +1, win at the score limit 08C28F54) when the flag is not the base's team (or is neutral),
    the carrier is not the flag's team, and in CTF1 the base is the carrier's; HCTF returns its own flag at its own base.
- [ ] **5.6 Entity placement [assumed].** From the Known-issues table: many meshes float or sit in the wrong place (likely
  parent-relative transforms), and command post models are not in place (only the cone and logo). Trace the game's placement.
  - Checked 2026-11-19 (harness RS_DRIVE_ALL=1 on Hoth against AK_DUMP_ENTS=1): every game object the original makes from the
    level's entities - 5 health droids (0x800F), 5 ammo droids (0x8010), 10 turrets (0x801E), the vehicle spawns, the AT-AT, the
    command posts - sits where Aurek places it, to the printed 0.0001 m.  The level geometry is stored in world space (its
    strips' object index only groups them).  So the floating meshes are not entity placements on Hoth; they need a level and a
    spot (or a screenshot) to find.  Tooling: AK_TEST_START="x,y,z,yaw" (game axes) starts the player there to compare views
    with the harness's (--tp).
- [x] **5.5 Command posts [partial].** The capture cross (post flag 0x74 bit 0), the colour pulse (08A516BC), and capture speed per
  soldier count.
  - Done 2026-11-19 (08A53B94, 089EC970, 089782A8): the capture panel's colours are the game's - an owned post blue (ours) or red
    with grey for what has drained; a neutral post fills by amount / full in blue when our side is taking it, else red (Aurek had
    the neutral bar inverted and grey); a post that cannot be taken (flags bit 0) shows the cross (picture 0x2A) pulsing white
    (08A516BC, already used for the lock).  Capture speed: the sum of the soldiers' capture rates (unit +0x138) on the post, at
    most 5 a second; the player's rate is the customisation's third attribute (0.5 / 1.0 / 1.5 / 2.0, 089782A8), 1.0 measured
    at the menu default (harness, Hoth) - AK_CAPTURE_LEVEL.  Bots' rates read 1.0 where the harness could read them.

## 6. Animation

- [ ] **6.1 Animation tables for soldiers [partial].** Soldiers still use hand-picked Human_Rifle clips; they should use the ATEX
  tables (sets, rows, columns) and the game's layer and blend rules.
  - Done 2026-11-19: the set is the game's (08998D74): the weapon's AnimPose ("Pistol" 0, "Bazooka" 8, else 4) + 2 crouched +
    1 alert; alert comes from the controller (08994C30), measured in the original as firing or holding the lock-on and 3 s after
    letting go (Aurek's 3 s alert matched).  Aurek now takes the body rows (idle 0, walk 1 / 2, run 3 / 4, strafe 5 / 6, sprint 7,
    jump 8, land 10, fall 12), the deaths (21-23) and rolls (24-27) from the set, the shoot layer from the alert set's column 1 and
    a reload layer from column 2 while reloading.  Pistols and launchers now hold their own poses.  Open: crouching (no crouch in
    Aurek), the idle variations (rows 18 / 19), hit reactions (13-16), death 20 (front), the layers' blend rules.
- [x] **6.2 Skinning [missing].** v2 meshes (Taun-Taun, Vader, the cone, flags) are drawn rigid in the bind pose.
  - Done 2026-11-19: the weighted meshes have been skinned since 1.8 (render/ak_scene.c draw_skinned); what was missing was their
    motion.  The CTF flags now flap (flag_Flapping, flag_Flapping_Backattch while carried).  Creatures (the Taun-Taun) play their
    blueprint's clips by the game's rule (089B4898 / 089B47F8): forward speed above 10 runs, above 1 walks, below -10 / -1 runs /
    walks back, else a turn faster than 0.05 rad/s plays the turn clip, else AnimLanded; the clip runs at speed x 0.11 (turns:
    rate x 0.75).  Open: the 1 s blend between creature clips, AnimFidget, the creature deaths; the cone's capture clip is 6.4.
- [ ] **6.3 Death animations and ragdoll.** The death clips. After death the body has gravity on (08993D38): trace what it does next.
  - 2026-11-19: measured in the harness (Hoth, killed while running): the body stops where it falls - no slide - and stays
    there; gravity stays on.  Aurek: the player's body no longer slides on, and bots' bodies (frozen in the air until now) fall
    to the ground.  The death clips now come from the animation table (rows 21-23, 6.1).  Open: which death row the game picks
    (rows 20-23: front / back / left / right - by the hit's direction, not found yet; Aurek gives each bot one by index).
- [ ] **6.4 Command post cone [assumed].** Its capture animation and the logo height (1.25 m is an estimate).
  - 2026-11-19 (089E9A24, the post's draw update): the cone (model 0xB9F3824A) and the owner's logo (table 0x08ADE9DC: republic /
    cis / alliance / empire _logo_blue, clip logo_spin_move 0x8417BC1A) are tinted by the owner - ours (0.314, 0.424, 0.702),
    theirs (0.702, 0.184, 0.184), nobody's white (read in the running original) - now ported (Aurek's colours were estimates and
    faded with the capture).  The cone plays cone_of_light_animCap forward while the post's amount is under a value of the clip's
    record, otherwise backwards and then cone_of_light_Rest; the logo's clip is driven by the cone's (08809AB8 with the capture
    clip's time, reversed when it runs backwards); a capture sound (0x6E926355) loops while the amount is under full, its pitch
    0.6 + 0.6 x amount / full (owner neutral: 1 - that), fading at 1.5 a second after.  Open: which record value the amount is
    compared with, what 08809AB8 sets (time or rate).
  - 2026-11-20, the logo's height and turn (harness RS_DRAW_ALL: unlit draws in the draw log; each draw's world position from
    the frame's view): over Hoth's posts the base model (639 indices) sits at the post, the cone's parts 0.30 m up (its bone 1,
    0.332 m in the bind pose), and the logo's quad (10 indices) 1.60 m up - whatever the capture state. The logo model is a
    1 x 1 m quad standing on its origin; its clip logo_spin_move (one bone, 3.133 s a turn) only turns it, easing (24 degrees at
    0.26 s, 88 at 0.78 s, 181 at 1.57 s). Aurek now draws the logo 1.6 m up (was 1.25) and turns it by the clip.
- [ ] **6.5 Heroes [missing].** Saber combos, blocking, force powers, saber throw. Blaster heroes' own tables.
  - 2026-11-19: a blaster hero played by the player now takes generic_male's set by its own weapon's AnimPose (the 6.1 rule),
    and the soldier's set comes back when the hero ends.  Open: everything else listed (saber combo timing, blocking, force
    powers, saber throw), bot heroes' sets (bots share one clip set).

## 7. Audio

- [x] **7.1 Music mixing [partial].** audio/ak_music.c "not yet mixed" into the mixer groups.
  - Done 2026-11-19: the music was already in the mix under the mixer's "Music" group (every SDMX group sits flat under Master,
    master 1.0); its level was a guess (0.6).  Measured against the original's own output (harness RS_WAV_DUMP on Hoth, the
    track fitted to the mix by least squares): 0.5625 (0.555-0.567).  The game's music mixer (0891260C) keeps a gain of 0.75 for
    one stream and 0.5 while two cross-fade (moving 0.02 a step), times the stream's volume; the profile's master / music / sfx
    volumes default to 1.0 (08977808).  AK_MUSIC_VOLUME defaults to 0.5625 (settings.txt files updated).  Open: the two-stream
    cross-fade (Aurek plays one stream).
- [ ] **7.2 Missing effects.** Vehicle collisions ("Collision sound"), Doppler, any reverb or occlusion the game uses.
  - 2026-11-19, traced not ported: a vehicle's collision (089CE510, with the impact speed) does nothing below the class's
    threshold (vfunc +0x1F0); above it the vehicle takes damage (message 0x8001: +0x34 x speed x dt x vfunc +500) and plays its
    blueprint's "Collision sound" event at its position, volume 1.0, stopping the previous one first (089CD7C4; also on message
    0x805C).  Aurek's ground vehicles have no collision damage yet, so the sound waits for that.
- [ ] **7.3 Speech [partial].** Trigger rules for every line category.
  - 2026-11-20: every Speech_* key's trigger found by its h31 hash in the code (the message 0x807F sender 089E3D2C, the
    narrator's 08A66150 / 08A6606C):
    - Hit handler 089E22BC, nothing unless the attacker still exists: an enemy shot from over sqrt(2000) = 44.7 m (constant
      0x08AEF20C) - BC_Sniper; hurt by its own side - BC_Friendly; both only while alive and not for the kinds in its list
      (Guided_Missile, Launched_Grenade_OnImpact, Det_Pack, Proton_Bomb, Proximity_Mine, Remote_Rocket, SelfDestruct_Rocket,
      Proton Torpedo, Fusion Cutter, Lightsaber_Thrown, Attachment, Force_Push / Pull, Rage, Stamina, PersonalShield);
      otherwise BC_Hit's rule. Each sets the 3 s quiet.
    - BC_Grenade / BC_Rocket (089395E4, the AI's firing): when an AI fires a weapon whose kind is "Grenade" / "Rocket", once
      until it stops firing.
    - BC_OnTarget (hero blueprints, read by 089E3E38: "IMP_BC_Hero_Chewbacca"...): an AI picking a new target (0894854C)
      says the target's line.
    - CTF (089F79A0, 089F7B4C, 089EF7C8): pickup - the carrier's side Gain_Flag, the other Enemy_Flag; capture - Score /
      Enemy_Score; drop - the carrier's side alone Dropped_Flag.
    - BN_Return (08A09928, message 0x804A): with STDTEXT's "You are leaving the battlefront! / Return to the battle now!",
      once per warning - the out-of-bounds warning, which Aurek does not have yet.
    - A line 0x529BB384 (0893254C, to a random squad member) has no blueprint key, so it never plays. BC_Withdraw, Flanking
      and Defence are not referenced by code.
    Engine: Sniper, Friendly, OnTarget and the CTF lines are built (ak_target.last_quiet marks the listed kinds). Not built:
    Grenade / Rocket (Aurek's AI fires only its blaster) and Return (no out-of-bounds yet).

## 8. HUD and front end

- [ ] **8.1 HUD gaps.**
  - Bot names in the target panel (player records, 0897DD80). Done 2026-11-20: the names are TEXT/BOTNAMES_<side>.ASR
    (PTXT per language: hash, count 48, language, "BotNames_Alliance", then {u32 length with the 0, UTF-16}); the record keeps
    its name at +22 (0897DD80). Read from the running original's memory: each side's bots hold distinct random entries
    (eight rebels: 42, 18, 28, 22, 26, 34, 15, 20). Aurek gives each bot a random unused entry of its side's list and the
    target panel shows it ("Waynar Ardam"). Open: the small grey icon the original draws before a bot's name.
  - Weapon panel: the rest counted in clips (the original's Blaster Rifle "25  4": 25 a clip, MaxClips 5), and the explosive
    (thermal detonator, its HUDIcon and count) in the second slot - done 2026-11-20. The weapon names after a spawn too
    (08A5318C: the Weapon's Weapon_Name from STDTEXT - 110 "Blaster Rifle", 127 "Thermal Detonator" - for 5 s, scale 1, fading;
    placed as on the original's screen: 29 above the upper icon, 22 below the lower) - matches the original's spawn frame.
  - Radar: empty vehicles' blips green (the original's frame on Hoth's spawn: the two vehicle squares are green, Aurek's were
    grey) - done 2026-11-20 from the picture; the colour's source (each class's radar function, vfunc +12) not traced.
  - Ticket logos: tinted by side (08A5B80C: ours ABGR 0xFFFF0000 blue, theirs 0xFF0000FF red) - done 2026-11-20.
  - Jetpack and shield bars.
  - The unmanned turret's hit source.
  - World markers (08A55238).
  - The capture cross (done with 5.5).
  - The missile-warning check against a screenshot of the original.
- [ ] **8.2 Front end (1.10) [started 2026-11-20].** Menus, loadouts, colour picker, map selection, galactic conquest, campaign, subtitles.
  - 2026-11-20, the menu pages: GUIMENU/*.GUI hold one UIMP chunk per page - a widget tree written by each widget class's load
    method (vtable slot 21; widget header {u32 class version, u32 type}; the factory 08888B48 by type: 1 page, 1001 image, 1002
    text, 1003 point list, 1004 model, 1005 sprite list, 2001 button, 2002 / 2006 plain buttons, 2003 spinner, 2004 text box,
    2005 text list, 2009 scroll bar, 2010 / 2012 list box; the base load 08888454; strings in 4-byte steps, 0882DD88). Every one
    of the game's 95 pages reads to its last byte (tools/asura/uimp.py; engine/assets/gui.c). A widget's id is the h31 of its
    lower-case name; a button's "target" is the h31 of the page it opens; texts are (table, key) pairs into MISC/MENU/
    MENU_AM.ASR (HTXT: 577 entries {key, length, UTF-16}); the button marks in texts are private-use characters (\ue800 cross,
    \ue801 square, \ue802 circle, \ue803 triangle - read from the texts' own "\ue802 Back" etc.; PSPBUTTONS.ASR's pictures).
    Engine: app/frontend.c draws a page with the HUD's 2D layer and fonts, moves the focus along the buttons' neighbour links
    (left, right, up, down), opens a button's page on cross, goes back on circle (the page's back button); FE_HostGame starts
    the match. `AK_FRONTEND=1` (AK_FE_PAGE, AK_FE_LANGUAGE, AK_FE_KEYS for tests). The main menu and Single Player pages match
    the original's frames (harness menu_main_menu / menu_single_player). [assumed]: the show-by-focus rule for flags bits 1 / 2,
    the highlight's pulse rate, the Italian subtitle hidden for other languages. Open: the FE_* script functions (map lists,
    eras, modes, profile, options), the list boxes' rows, UIAN animations, the 3D model widgets, the in-match pages.
  - 2026-11-20, page logic and Instant Action: a widget's "animation block" (0887EA90) is its show condition - records {script
    value, number, op} (0887E45C / 08AB10A4: op 1 ==, 2 >, 3 >=, 4 <, 5 <=) joined by all (mode 0) or any (1) (0887E7B0);
    e.g. the Mode title shows while BFF.FE_MapSelectionStatus == 1, Launch while BFF.NumMapsInRotation > 0. Text lists (2005)
    carry their rows at most / shown, the chosen row's colour and their fill function (FE_ListAllMaps), and actions keyed by
    button (16 cross, 32 square, 64 circle). The FE functions are registered by UTF-16 name (08A29690; 156 of them listed);
    their effects ported for Instant Action: FE_ListAllMaps / ListValidModes / ListValidEras / ListMapsInRotation,
    FE_SelectMapPlanet / Mode, FE_Deselect*, FE_AddMap, FE_RemoveMap, FE_RemoveAllMaps, FE_ClearMapRotation, FE_HostGame
    (08A275D0 closes a list, 08A27590 opens and focuses one). The map table is the game's (0x08B1B980: 22 entries {CW level, GCW
    level, STDTEXT name, modes[4], space}). Aurek's Planet and Playlist screens match the original's frames, scroll bar
    included, and Launch starts the first play-list map in its mode. [assumed] FE_SelectRandomMaps' rules, the scroll bar's
    link to its list (by name).
  - 2026-11-20, the match's own pages (BFF_GUIMENU_INGAMESP.GUI): after Launch the match loads behind MP_Team_Selection (its
    team lists filled with each side's soldiers - FE_ListFriendlyEntities / FE_ListEnemyEntities -, the era's team buttons by
    BFF.FE_GameEra, the side names by BFF.FE_PlayerFaction, the level's name and mode code); FE_TeamSelection(1 / 2) picks the
    side (the era's faction and its trooper [assumed: MediumRebel, Stormtrooper, Clonetrooper, Battle_Droid until the
    customisation menu]) and opens MP_Spawn_Location: the level's map in a disc with the side's posts on it (W_BU_SpawnPoint<k>,
    shown by BFF.FE_SpawnPointCount / Active<k>), the focused post's name; cross (FE_RequestRespawn) spawns the soldier at
    that post. Dead, the spawn map comes back after three seconds. Widget ids are not always their names' hashes
    (W_BU_SpawnPoint0 is 0x55F10F71): the code finds those by name. A neighbour link to a hidden widget is followed on in
    the same direction. Open: the spawn map's zoom (the original fits the playable area; Aurek shows the whole map picture),
    the team lists' insignia and the faction logos, the respawn timer.
  - 2026-11-20, the spawn map's posts: 08A2DD50 sets BFF.FE_SpawnPointActive<k> for every post on the map (the post's +4 and +68
    bytes), not only the side's, and gives each button's pictures the owner's colours (0x08AEFB28..: ours (0.3, 0.3, 1, 0.6) /
    (0.2, 0.2, 1, 1), theirs (1, 0.3, 0.3, 0.6) / (1, 0.2, 0.2, 1), nobody's (0.1, 0.1, 0.1, 0.6) / (.., 1)) through the button's
    vfunc +120 [assumed: the first set for the unfocused picture D, the second for H]; the side's own posts go into the list the
    focus moves through (0x08C2D0EC). Aurek now shows every post, uncapturable ones included (it dropped them), and matches the
    original's Hoth frame mark for mark; the map picture's fit already matched (the frames overlaid). The respawn timer
    (E_TLB_SpawnTimer, FE_ListRespawnTimer 08A294D4: "Respawn Wave in " + max(0, trunc(t + 1)), t from 08973998 = the time to the
    next wave) is -1 in single player (08973960 while 0x08B2BB9C is 0) and the original's frame shows nothing there; the
    countdown page (MP_Spawn_Countdown, cancel allowed above 3 s - FE_RespawnCancel 08A2FE48) goes with the waved respawn,
    which single player does not use. Closed for single player.
  - 2026-11-20, the team lists' pictures (MP_Team_Selection and the three score boards share them): E_IM_GoodInsignia<k> /
    E_IM_EvilInsignia<k> beside row k of the friendly / enemy list (08A32698): an AI soldier (entity +72 bit 1) the terminal
    cell (0.586, 0.941 - 0.645, 0.996) of menu_buttons.tga, a person the insignia chosen in the customisation (+68, 13 cells at
    0x08AE28DC, 12 none) [assumed: the player's is cell 0, AK_PLAYER_INSIGNIA, until the customisation is ported]; the header
    logos E_IM_StyleButtonH_Logo_CIS / ..._CIS 1 take the player's faction's cell and the opponent's (0x08AE1B1C by faction, the
    opponent by 08A26F88: 0 <-> 1, 2 <-> 3). The text list's word after its font is the rows' alignment (2 left, 8 right: the
    enemy list is right-aligned). Row for row as the original's frame. Open: before the side is chosen the original lists the
    good side as friendly and the player in neither list (Aurek has already put the player on a side), and the player's own row
    marker (the list's vfunc +32 at x 10 / 250, y 77 + 14 x row).
  - 2026-11-20, the score board: dead three seconds, the player gets MP_RespawnScoreboard (then "Respawn" -> the spawn map):
    each side's soldiers (the player first [assumed: AK_PLAYER_NAME]) with their status, score, kills and deaths columns
    (FE_ListFriendly* / FE_ListEnemy*; per-soldier tallies kept by play.c; score = kills [assumed]).
  - 2026-11-20, game over: the match won or lost, MP_GameoverDialogue opens [assumed: 5 s after the end] with Victory / Defeat
    and Mission Complete / "You ran out of reinforcements" by BFF.FE_IsPlayerVictorious; FE_ProcessGameover: Retry restarts,
    Continue plays the play list's next map (else the main menu); Quit to Main Menu through the yes / no page.
  - 2026-11-20, the pause menu: START opens MP_InGame_Menu (the match stops while it is up); FE_ResumePlay, FE_RequestMenuMode(n)
    (BFF.FE_MenuMode: which of the yes / no page's answers show), FE_QuitGame / FE_ForfeitBattle (back to the main menu),
    FE_RestartMap, FE_RespawnKillPlayer. A button's target may be a widget's id rather than a page's ("Quit to Main Menu" ->
    W_BU_No_QuitInGame on MP_YesNo_Dialogue): the page holding it opens, focused on it. A page whose focus is hidden or a
    title focuses its first shown control.
  - 2026-11-20, options controls: script values are numbers (floats): the volume sliders' bars show by BFF.VolumeMaster >= 0.1
    .. 1 (op 3). A slider (2003) steps its bound value by its step (0.1; read in the spinner's load) between 0 and 1 [assumed
    range]; a check box (2002) toggles its value and shows its ..U or ..C pictures by it. Pictures and texts need flags bit 10
    (0x400) to show (the sliders' end marks 0x400; the check box's tick pictures 0x002 are the class's to show) [assumed]. The
    profile's volumes start at 1.0 (as audio's 08977808) and go to the mixer at once (ak_audio_set_volumes); "Show Subtitles" sets
    AK_SUBTITLES. Open: the controls pages, the
    profile pages, saving.

## 9. Camera and input

- [ ] **9.1 Soldier camera [assumed].** FOV (AK_FOV 55) and near/far planes. Trace per mode, including zoom.
  - 2026-11-19, measured (RS_PROJ_LOG in the port's GU layer, Hoth on foot): the projection is 1.73209 across, 3.05663 up, an
    infinite far plane, near 0.25 m - the blueprint's "fov" 60 is the horizontal angle on the 480 x 272 screen (36.2 degrees
    high).  Aurek's classic camera took 60 as the vertical angle; it now uses 36.2 vertical (wider screens see more at the
    sides).  The modern camera's AK_FOV 55 is the owner's choice and stays.  A second projection (1.496 up: 67.5 degrees high)
    appears on the spawn screen.  Open: zoom, vehicles.
  - 2026-11-20, the classic camera's distance (RS_VIEW_LOG, original controls, walk 1 s then stop): standing, the eye is 2.98 m
    behind, 1.9 m up and 0.22 m across from the soldier - 3 m from the pivot (1.6 m up, 0.3 across) toward the desired offset
    (-0.2, 0.5, 7): the blueprint's "pull in close dist" 3. Running it draws out at ~1 m/s ("pull out rate"; +0.7 m in a 1 s
    run) and comes back in after a stop with a 0.75 s time constant. Aurek's classic camera (AK_CAM_STYLE=classic) does this
    (it sat at the 7 m desired offset before).
  - 2026-11-20, zoom: the camera's field of view is "fov" / magnification (func_0896EC88: camera +144 / +104, read through
    the camera's virtual 089DC988), the angle across the 480 x 272 screen; the height follows through the tangent. Aurek
    divided its vertical angle; it now divides the horizontal one and converts (2x zoom: 30 degrees across, 17.1 high, not
    18.1). The harness's default rifle has one zoom level at 1.0 (program `zoom`: the projection is unchanged), so a
    sniper's magnified projection is not measured. Aurek's debug `AK_DEBUG_CAMPOS` logs the camera each frame.
- [ ] **9.2 Vehicle cameras [partial].** CameraVelocityWeight and the "Min" values.
  - 2026-11-19: measured in the AT-ST (harness, RS_PROJ_LOG): the same projection as on foot (60 degrees across at 480 x 272,
    near 0.25, no far plane), so vehicles share the soldier's field of view.
  - 2026-11-20: the ground vehicle camera measured (harness RS_VIEW_LOG: each view matrix with its frame; Hoth's AT-ST, Boz Pity's
    T4B; the game's world is y-down, so the view's "up" row reads negative). The eye is exactly (0, CameraBestY, CameraBestZ) in
    the vehicle's frame, slope pitch and roll included (AT-ST 13 up / 10 back, T4B 6 / 16, to 0.01 m), less CameraVelocityWeight
    x the velocity (T4B 0.2: 2.6 m further back at 13 m/s, 0.6 m nearer reversing at 3 m/s; walkers 0). The harness's object
    state is one frame older than the view. The AT-ST looks at the ground CameraDistanceZ (20 m) ahead of the vehicle (23.4
    degrees down in its frame); the T4B looks level along its hull. Yaw locked to the hull (within 1 degree).
    Engine: play.c builds the eye this way (AK_DEBUG_VEH_CAM logs it). Still open: while turning the T4B's eye sits 1.5 m to
    the side (0.115 x the speed, and it fades with the speed after the turn), CameraMinY / MinZ (Aurek pulls in toward them
    when blocked [assumed]), the speeder bikes' CameraMaxYaw, and whether the tank's view follows its turret.
- [ ] **9.3 Controls [partial].** The PSP layout is traced. Twin-stick aiming (AK_AIM_*) is a modern option and stays as one, kept apart from
  the classic controls.
  - 2026-11-20: the original's own one-stick controls measured (harness `RS_TWIN_STICK=0 RS_VIEW_LOG=1`, program strafe_switch):
    stick X turns - the soldier stands and the view turns with it - at the Humanoid control's "yaw speed" (4 rad/s) times the
    turn binding's value, which eases toward the stick over 1.5 s as the stick moves out and drops back at once (the port's
    patch log: ease-in 1.5 s, ease-out 0; func_08896A3C). Full right: 111 degrees/s after 1 s, 168 after 2 s, 207 after 3.3 s.
    The earlier 1.14 measurement (the soldier faces the stick's direction and runs, the view holds still) was taken with the
    port's twin-stick patch on, which puts strafe on stick X: it is the game's strafe, not its one-stick turn.
    Engine: the one-stick scheme now turns this way by default (`AK_SINGLE_STICK_TURN`=1); 0 keeps the 1.14 strafe-facing
    scheme. Locked on (R) the stick strafes, as before. Open: how the soldier's model faces while turning in place (it read
    90 degrees off the view in the state log), and the R-held strafe binding's own response.

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
  - 2026-11-20, measured (harness RS_STATE_LOG: each new GE lighting / texture-function state with its lights): level geometry
    draws with lighting on, its vertex colour as the material ambient, the scene ambient white and no lights, texture modulate
    and colour doubling - so texture x vertex colour x 2 is the game's own rule, not an approximation. Models (no vertex colour)
    draw lit: a scene ambient per object (Hoth ~0x4C4C49) plus three directional lights, one per colour channel (red only,
    green only, blue only, ~0x29 each, nearly the same direction), doubled. The values come from the level's GISN chunk (loader
    08826244, kept packed in the light manager 0x08B2A7A4): u32 count, base[12], scale[12], a word, then {pos, three words};
    each channel word's bytes (high to low) are ambient, dir x, y, z = base + byte x scale - a first-order spherical harmonic
    per channel (a Hoth sample: ambient 0.297, |dir| 0.141 - the GE values 0x4C and 0x24 seen in the log). 0890452C turns a
    set into the GE lights (direction normalised, strength = length clamped to 1, x255). 0889B9E4 adds dynamic point lights
    (60-byte records: position, radius, colour; 1 - d / r; ambient x 0.235, direction x 0.47) - none in the measured scene.
  - Engine: asura.c reads GISN (ak_level_light_samples); ak_scene lights every model from it (ak_scene_light_at: ambient + per
    channel max(0, n . dir), then the frame's doubling; the GL back end per vertex, Vita / 3DS as a tint for now);
    holograms and additive parts stay unlit; AK_LIGHT=0 turns it off. Open: how the game weighs the samples for an object
    (Aurek: the 4 nearest by inverse squared distance [PARITY(R.1)]), the dynamic lights, and per-vertex lighting on Vita / 3DS.
- [x] **R.2 Fog.** The FOG values are read but not understood (Tatooine 11–75 m). Trace them.
  - Done 2026-11-19: the FOG chunk (loader 08825C9C) is flags (bit 0 on; space levels off), r, g, b, -, start, end, strength,
    sky strength, 2 more.  The game sets the GU fog from near 0 to far = end (08903470 - logged in the harness: Tatooine
    near 0, far 75, colour (88, 78, 43) = the chunk's); `start` is not used there.  A level start fades the fog in from black
    with far from 10 % (not ported).  Aurek now fogs every level whose flag is on, linear 0..end in its colour; AK_FOG scales
    it like the PSP port's RS_FOG (default 25 = farther, 100 = the game's); settings.txt files updated.
- [x] **R.3 Sky.** The sky set-up.
  - 2026-11-20 (compared with the original from the same spot, AK_TEST_START at the harness's spawn): the FOG chunk's "sky
    strength" (its 8th value) is 0 on Hoth, Tatooine, Endor, Naboo, Boz Pity (Kashyyyk 0.3): the sky box is not fogged. Aurek
    fogged it fully, so Hoth's sky (blue, clouds, the capital ship) read as a white haze. Now the sky draws with fog only by
    that strength (ak_gfx_set_fog_range; the 3DS only on / off). Open: the sky box's turn (SKYB angle) and scale against the
    original - the ship sits higher and smaller than in the game's frame.
  - 2026-11-20, turn and layout (done for ground levels): the GE's sky draws logged (RS_SKY_LOG=frame in the harness: every
    draw under a rotation-only view, with world, view, projection, texture and vertices). The game draws the box with an
    identity world matrix and the camera's own view and projection (60 degrees across, the same as the world), each face a
    4 x 4 grid of strips over +-1 with the SKYB turn baked into the vertices; faces matched to SKYB's five names by their
    texels in VRAM against HOTH.PSP. The game's frame is Aurek's with y and z negated (Aurek's camera at the harness spawn:
    (269.9, -14.8, 12.9) against the game's (269.9, 14.7, -12.9)), so the turn is pi - angle here. Corner for corner and UV
    for UV the faces now agree with the game's to 1e-4 (Hoth, angle 3.107); the capital ship sits where it does in the
    original. Scale needs nothing: a unit box drawn without depth looks the same at any size. Space levels' placed sky
    panels are not read (1.3).
- [ ] **R.4 Material modes.** All 6 texture slots of a material, its mode, its "extra" field and animated materials (water,
  screens, lightning). Aurek handles diffuse plus flags only.
  - 2026-11-20, animated materials (part): a material flagged 0x40000 names its animation in "extra", the h31 hash of a TXAN
    chunk's name (Naboo's water: 0x0032918F = "lake"). TXAN (version 2): name, kind, period (s), interpolation, key count,
    keys {u, v, t, 0, 0}. Kind 1 scrolls the texture coordinates (capture zone streams 21.1 s, lake 20 s, lava 75 s, Kashyyyk
    water 60 s by (-2, 1), Endor's swamp a 7-key wobble); kind 2 swaps frames (laser gates, consoles; Yavin's console
    destroyed / visible pairs) - not built. Engine: asura.c reads kind 1 (ak_level_tex_anims), the scene offsets the UVs of
    those materials' draws, level and models (ak_gfx_set_uv_offset; GL; Vita / 3DS keep them still for now).
- [ ] **R.5 LOD distances.** AK_LOD_SCALE 12 is Aurek's own; trace the real ones.
  - 2026-11-19, looked for and not found: no blueprint key, level chunk or string names a LOD distance (the lower details are
    the "L1#" / "L2#" meshes); the switch is somewhere in the model draw.  Next: watch the GE vertex counts of one prop in
    the harness while the camera backs away (--tp), to measure the distances per model radius.
  - 2026-11-20, soldiers measured (harness RS_DRAW_LOG=N: every N frames each lit 3D draw's distance from the camera; the
    game draws models with an identity view, so the model matrix's translation is the distance): Hoth's soldiers drew 782
    strip indices up to 39.2 m and 442 from 40.2 m, none lower out to 220 m - one step at 40 m. Aurek's soldiers now take their
    L1 meshes beyond 40 m (`AK_SOLDIER_LOD`). Props: their draws are split per part, not identified yet.
- [ ] **R.6 Particles and effects (PFX).** Explosions, muzzle flashes, impacts, streaks, and the command post glow (AK_POST_GLOW
  is Aurek's own).
- [ ] **R.7 Shadows and decals.** Shadow blobs and scorch marks as the game places them.
- [ ] **R.8 Screen effects.** Damage, zoom overlay, hyperspace.

### Groundwork before any PBR code

- [ ] **R.9 A "Classic" mode [partial].** 2026-11-20: `AK_CLASSIC=1` takes the game's fog distances (AK_FOG 100) and drops Aurek's
  command post glow; with R.1 the level is texture x vertex colour x 2 and models are lit from GISN as the GE does, and the
  game's blending is kept. Still Aurek's: the LOD distances (R.5), effects (R.6).
  Original text: It reproduces the PSP output: unlit texture × vertex colour, the game's fog, the game's blending. It
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
