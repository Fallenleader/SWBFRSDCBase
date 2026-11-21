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

> **Milestone (2026-11-20):** parity minus networking (10.1) and the non-legacy rendering items (R.10-R.17) - the point at which
> on-device testing and bug fixing starts. Work continues session to session automatically, with progress reported between sessions.

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
    - 2026-11-20: no higher jump for a longer press. "jump max hold time" (0.3, Controls "Humanoid") is read only by the control
      scheme builder 08A5F1A4 (a binding's hold window), and "max jump impulse" (12) only by the jump-pack states (089A066C,
      089A5AE4, with "jumppack impulse" 10); the soldier's jump is "jump impulse" 6 alone. "roll no lock on time" (2) is read by
      089A3C44 (the roll), not built.
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
    2026-11-21: the roll state (vtable 0x08AFBFA8; can-start 089A392C, start 089A3BC0, end 089A3C44): the stamina gate is
    "roll stamina cost" (0x578CBDA1, 089DCE7C - Aurek's stamina_pay); at the roll's end 089A3C44 writes "roll no lock on time"
    (0xBEF994D5) to the player controller +0x84 and clears its +0x208 bit 4 (set at the start, 089A3BC0). The reader of +0x84 is
    not found yet (the controller's lock-on), so Aurek does not block the lock after a roll.
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
- [x] **1.11 Hit reactions and flinch [traced 2026-11-21: none for soldiers].**
  - Harness (player teleported into the Rebel spawn, running back and forth 40 s, every frame): blaster hits of 4.5 (an AI's
    rifle: 15 x Modifier_Bot_Damage 0.3) do not change the player's speed at all - no flinch on movement. Aurek: the same.
  - Heavy hits (20 and 29.7) were followed by stops of a few frames at a time; not yet told apart from bumping into things.
    To do: trace who plays the hit rows 13-16 / Stunned1 (row 17) and when.
  - Traced 2026-11-21: nothing does. A soldier's actions are state objects (base 0899F888, each with a name hash; vfunc +12
    "can start", +16 start) that play the generic_male row at state +0x90 through 0899F93C. Every store to that field was
    listed: rows 8 / 9 (jumps), 20-23 + random and 32 (deaths, 0899FF38), 24-27 (rolls, 089A392C; the jedi table's 33-36),
    28 / 29 (jetpack). The states that take a row from a message (0x8032 "start state": the roll 089A3BC0, the force state
    0x9d4a123c in 089A51A8) get 24-27 from the AI's dodge (0893915C) and 37 / 38 from the force powers (08A22D54, 08A23088).
    No sender passes 13-17, and no data table holds them. So in RS a hit plays no flinch row, as measured; Aurek plays none.
  - The damage path (089A7310 -> 089E1FDC -> 08A069F8 health / shield, message 0x8053 for a shielded unit) has no movement
    side effect. Its vfunc +200 (089E3868) sends 0x8050 with the attacker's position, which the player controller keeps at
    +0x94 (08A09928): the HUD's hit-direction source (8.1).
  - The heavy-hit stops measured above are not a hit reaction; they are left with 4.4 (what stops a running soldier).
  - 2026-11-21: the whole damage path was read for a movement effect - 089A7310, 089E1FDC, 08A069F8 (health / shield), 089E22BC
    (the speech pick), 089E3868 (0x8050) - and has none; vehicles' collision damage (089CE510, weapon hash 0x9E500986 "Collision")
    is a contact. A re-run in the harness (player running back and forth in the Rebel hangar, 40 s, every frame; drive.py
    --fine, state.log now carries the game's frame count "pfr") took no hits, so the stops are not re-measured. [assumed: the
    20-damage stops were vehicle contacts.]
- [x] **1.12 Hit shapes [traced and ported 2026-11-21].**
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
  - Traced 2026-11-21: a bolt (089F9E8C) casts its step with 089DD5B4: the level first (08834F74), then every object of the
    damageable registry 0x08C2B3A4 through its model (088D189C -> 08808B24): a coarse box, then each part whose HSBB flags have
    bit 0 and not bit 1, as a box in the part's posed frame, and the models attached to it. The hit record (+4 object, +8 part,
    +12 an attachment's name hash) becomes the damage message 0x8001 (089FA66C: DamageToInfantry for class 0x8005, else
    DamageToVehicle). Measured (harness, new RS_DMG_LOG: each hit message and its call chain): soldier hits on parts 1, 3, 4,
    8, 9, 12, 13, 18 (the body's bones), part 14 with "weapon" (0xD0CDC21C: the rifle in the right hand), part 4 with
    0x0AE26E48 (an attachment on the chest, not named yet) and part 6 with "head" (0x30CDE0: the head model) - the headshot, 100.
    The body model flags 13 of its 21 bones and not the head bone; the head models (EMP_Med_1 ...) and weapons have one box each.
  - **Engine:** the HSBB boxes are kept per bone (model.c, akinspect --hsbb); a soldier's target is its posed body boxes, its head
    model's box (part 6: the headshot) and its weapon's box (on the "gun" marker's bone); shots test the nearest box
    (AK_SHOT_BONES=0: the old capsule). Hoth, 2 min of play: 86 soldier hits, 5 in the head. Not built: the chest attachment.
    Checked 2026-11-21: the boxes stay on the body (AK_DEBUG_BB: 17 boxes within 0.7 m of the feet, 0.1-1.6 m up), bots in
    vehicles are not targets; Aurek's runs are repeatable (same counts twice), and the vehicle hits of a Hoth run (31 with bone
    boxes, 121 without) follow the different course the match takes, not bolts stopped short.
  - Correction 2026-11-21: those runs stepped AK_FIXED_DT=1 (one second a frame). At 1/60 s, Hoth 2 min: bone boxes 59 soldier
    hits (7 in the head) and 53 vehicle hits; the old capsule 49 (5) and 3. No sign of bolts stopped short.

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
  - 2026-11-20, correction: 089D4BDC runs from the vehicles' update (089B08F8) only; the box's other reader is the AI pilots'.
    A soldier on foot is never warned (the original's player at x 267 at Hoth's Empire base, past the box's 249, sees nothing).
    Aurek now holds only a driven vehicle to the box.
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
    - 2026-11-20, found and ported: the AI's weapons are a table per faction (0x08ADDB94, 13 words: Alliance, Empire, Republic,
      CIS - 0 none, 1 auto turret droid, 2 rifle, 3 pistol, 4 REP_Chaingun, 5 ALL_Incinerator, 6 shotgun, 7 rocket launcher,
      8 Emp_Launcher, 9 REP_Grenade, 10 Personal_Shield, 11 0x5EF92370, 12 Cluster_Grenades; the faction's own names, e.g.
      EMP_Shotgun, FED_Rocket_Launcher) and eight loadouts of four slots (0x08ADDC64): rifle+pistol+grenade, the same +shield,
      chaingun+pistol+11, incinerator+pistol+cluster, shotgun+pistol, rocket+pistol+grenade, rifle+EMP+grenade,
      incinerator+pistol+cluster. 0897FA38 draws one per spawn: weights 0.5 / 0.05 / 0.05 / 0.15 / 0.2 / 0 / 0 / 0 (elite:
      0.3 / 0.2 / 0.1 / 0 / 0.2 / 0 / 0 / 0.15), the EMP loadout 0.25 when a count (0x08C2AC24 + 0x08C2AFC4) is above 0 and it
      and the rocket loadout 0.3 from 3 [assumed: the enemy's vehicles]. The measured Hoth mixes fit only roughly (fewer
      shotguns and incinerators than the weights give) - the count's meaning and the difficulty in the harness run are open.
      Aurek (AK_BOT_LOADOUTS=1): each bot draws its loadout per life and carries its weapons; 0893F65C's choice (2.6) picks the
      one in hand per target. Grenades are thrown (2.3d); shields and items are not carried (2.3).
  - Aurek: every soldier carries the blaster rifle; the thermal detonator (secondary attack) is task 2.3.
- [x] **2.2 Ammo droids [measured 2026-11-16: Aurek matches].** Firing non-stop 6.8 m from Hoth's first ammo droid (the harness
  reads the weapon: clip +0xA0, spare clips +0xA4, explosives +0xA8): each emptied clip's spare came back on the next whole-second
  pulse (refills at frames 541, 1081, 1681, 2221 - all on the same 60-frame beat), one clip per pulse, within the droid's
  EffectiveRadius (8). Aurek's droids already pulse that way (UtilityDroid PulseLength 1 s, one clip, radius 8). Health droids
  and explosive refills not measured yet.
- [ ] **2.2b Dropped pickups [partly traced 2026-11-20].** A fallen soldier drops pickups (the Humanoid death 089A70FC): its
  SpawnPickupA then SpawnPickupB (Humanoid +300 / +302, read by 089A69E4), each made by 089F96C4 when a random 0..1 is at most
  SpawnPickupProbability (+304) - 75 in every Humanoid, so always; ids by 089F8FAC: 1000 Health, 1001 Ammo, 1002 Stamina, 1003
  HealthAmmo, 1004 "Random" (Health, Ammo or Stamina at 1/3 each, 089F97D4), 1005 "None" (every Humanoid: A Random, B None);
  placed 0.1 m up and 1 m along the world z, the other way each time. The pickups are Projectile blueprints <- Pickup
  (EffectiveRadius 2, InitialDelay 0.1, Timer 10, FadeTime 0.75; Health / Ammo Capacity 50, Stamina 100, HealthAmmo 100 + 50;
  their PFXEffect rings, Skin and SFXEffect "Generic_Pick_Up"); the pickup class's loader is 089F5F60. Aurek (NATIVE_ENGINE row)
  drops and draws them; [ ] who may take one and the units of Capacity are not traced (Aurek: any soldier who needs it; health
  points, per cent of the full ammunition, stamina), nor the model's motion and the fade.
  - Measured (harness, class 0x8015 in the state log; programs `respawn` / `cluster`, repeatable --hp): the player's own drop
    appears 0.1 m up and 1.0 m along +z of where it died and settles to the ground; untouched it lasts 10.7 s (Timer + FadeTime;
    Aurek now too). Respawning 1 m from it with full health, the soldier's spare clips went 4 -> 5 within 10 frames (an ammo
    pickup?) while the pickup stayed 1.8 s more - not understood yet. The harness's health override is undone by the game
    within 10 frames (no use for testing health pickups).
  - Traced 2026-11-20 (the pickup class 0x8015, vtable 0x08B112AC, update 089F90A0): with no taker yet it looks every 0.25 s
    (0x08AEF488) - Health and HealthAmmo pickups only (089F912C) - through the unit list for one that is alive, not in a vehicle
    (vfunc +0xA8), below its maximum health and within the radius (089F91A0 / 089F9408), whatever its side; Ammo and Stamina
    pickups wait to be claimed by a unit's message 0x8072 (089F8D6C; never by the one that dropped it, +0x118). Taken, it sends
    the taker message 0x8073 with a kind (Health 1, HealthAmmo 2, Ammo / Stamina 0; 089F8DD8): health becomes min(maximum, health
    + the pickup's +0x104 - Capacity, in health points; 089F8F60); kinds 0 and 2 go on to the unit's weapons (088AC9B0, not
    read). Aurek: health as traced; ammo and stamina still its own rule.
  - Traced 2026-11-20, the claim: a pickup's +84 is the h31 of its kind (Health 0xB735025C, Ammo 0x002DBECE, Stamina
    0x8EE8D26F, HealthAmmo 0x3622332A). 089F51CC counts InitialDelay down (+132) and then, every frame, 089F5400 (not Health)
    -> 089F544C walks the unit list: Ammo / HealthAmmo by 089F5A24 (not in a vehicle +196, alive +4, +68, health > 0,
    089F5858, in range 089F5794 - squared distance <= +140, and 0898582C: a weapon of +0 / +72 with (spare +88 / clip +80) <
    MaxClips +76 and its flag 0x20 at +364, or an item of +48 with count +84 < +80); Stamina by 089F5944 (alive, health > 0,
    not in a vehicle, vfunc +344 < vfunc +348, in range, 089F5858). The first found gets 0x8072 (089F5AF8). The Humanoid's
    0x8073 handler (089A6D64): kinds 0 / 2 to the weapons (088AC9B0), 1 / 2 to 089F8EE0 (health). Built (NATIVE_ENGINE row).
    [x] The amount (2026-11-21): the soldier's 0x8073 handler (08994C30) -> 089F5BA8: Ammo / HealthAmmo give N = Capacity +
    0.5 (Ammo's +0x94 = Capacity, HealthAmmo's +0x98 = SecondaryCapacity: 50) through 08985954 - to each weapon whole clips, one
    at a time while spare / clip < MaxClips (08A19C3C / 08A19BB4; not a weapon with +0x16C bit 4; bit 5 needed outside the
    forced case), to each item min(its most, count + N); Stamina min(max, stamina + Capacity).  Ported.  [ ] 089F5858, the flag
    bits' blueprint keys.
- [ ] **2.3 Secondary items [partial].** Grenades, thermal detonators, detpacks, mines, cluster grenades, remote missiles,
  incinerator, fusion cutter, shields, jetpack, jump pack, stealth. Trace each one's blueprint use.
  - Thermal detonator [measured and built 2026-11-16]: Weapon REP_Grenade (4, no spare clips, 2 s between throws), Projectile
    "Grenade" (Timer 3, 100 / 150 damage, radius 8). Measured (harness tracks the grenade object, class 0x8011): it appears in
    the hand 29 frames after square, leaves it 8 frames later 1.0 m ahead and 2.1 m up, at 20.4 m/s along the facing and 1.2
    up, falls at 10 m/s^2 losing 0.63 % of its speed each 0.1 s (the original steps it at 10 Hz), stops dead where it lands
    and explodes 3 s after it appeared. Aurek: play.c throws it (square on the PSP layout), ak_proj_throw / stuck / drag; it
    lands 0.85 m from the original's spot over 21 m.
  - [ ] **2.3b** Where 20.4 and 1.2 come from (ProjectileSpeed 10, VerticalThrowSpeed 2.5: pitch? a factor?), throws
    while moving, and the other explosives and items.
    - 2026-11-20, found (a temporary log in 08A1A77C, harness `cluster` with `--fine`): the aim frame is the facing pitched
      8.2 degrees down (standing), and the velocity sent is frame x (0, VerticalThrowSpeed up, ProjectileSpeed forward) - for
      the cluster grenade (3.5, 10) that is 10.39 forward and 2.05 up, |v| = 10.6. The object then moves at twice that: 20.7 m/s
      forward, while its climb falls by 1.0 m/s each 0.1 s (gravity 10, unchanged) and its first 10 Hz step already takes 1.0
      off (3.0 up measured, 2 x 2.05 - 1.0 = 3.1). The same rule gives 20.5 / 1.1 for REP_Grenade (measured 20.4 / 1.2). Built:
      play.c throws by this rule with the Projectile blueprint's ProjectileSpeed and VerticalThrowSpeed (Grenade 10 / 2.5,
      Cluster_Grenade 10 / 3.5 - the logged values; the Weapon Cluster_Grenades' own ProjectileSpeed 20 is not what is used). (The release point is 2 m above
      the hand point, D_08AEF89C, subtracted because the game's y points down.) [ ] Where the factor 2 is in the code (the
      projectile's physics step), whether the player's frame follows the camera's pitch.
    - The other path (08A1ABB0, taken when the thrower's vfunc +196 is set) scales the throw by min(distance to a target from
      vfunc +272, 15 m) / 15 m (21 m for Cluster_Grenade, D_08AEF8A0 x D_08AEF8A4 1.4). Not the bots': in a 120 s harness run
      on Hoth (idle player) all 15 bot throws carried the full (0, VerticalThrowSpeed, ProjectileSpeed); their aim frames were
      pitched with their aim (from 17 degrees up to 14 down, most level). Which thrower takes it is open.
    - 2026-11-20, the throw (08A1A77C, the Weapon loader 08A16FD8 keeps ProjectileSpeed at +60 and VerticalThrowSpeed at +64):
      the grenade starts at the hand's point 2.0 m higher (D_08AEF89C) and its velocity is a 3x3 frame (the thrower's, vfunc
      +240 / +92 of an aim object - not identified) times (0, VerticalThrowSpeed up, ProjectileSpeed forward), sent as message
      0x805E. That gives |v| = 10.3 for REP_Grenade, not the measured 20.4 - so either the frame is scaled or the thrown
      Weapon is another one; open.
  - 2026-11-20, the other explosives: the Projectile loader 08A01590 reads WillDetonateAT +0x94, Detonation_Height +0xB0,
    ChildProjectiles +0xB4, ChildSpeed +0xB8, AmmountOfSplay +0xBC, DispersionDistance +0xC0, NumberOfChildren +0xC4,
    ProximityExplodeDelay +0xF0. The cluster burst is traced (08A02464; NATIVE_ENGINE row). The mine's trigger is traced
    (2026-11-20: the unit update 089E1890 -> 08A02228: within +0x94 of a living unit that did not lay it, once its age +216 is
    past +0xF0 - an arming delay, no team test; built). The det pack's input is measured (2026-11-20, harness `detpack`: the second press sets it off 29
    frames later, no new throw; built). 2.3c, Detonation_Height (2026-11-20, 08A005B0): while
    in flight the projectile casts a ray 10 m down and goes off when the ground is within Detonation_Height - only the cluster
    grenade has one (0.25): it bursts just above the ground before its 1 s timer (harness: 0.83 s after the release); built.
    [ ] how mines and det packs are placed (the "place" animations), and the items row (dispenser, auto turret, recon droid,
    stealth, jetpack, jump pack, shield).
  - [ ] **2.3d** Bots' explosives [traced 2026-11-20, built]: 0893F1A8 -> 08940C7C -> 0893679C. Chance 1 - (1 - k)^dt a frame,
    k 0.15 elite / 0.05 otherwise; the target is the first sensed enemy (not class 0x8006) with a count of its side's units
    within 3.0 m (itself included, +1.0 each) above 1.5; a global list (D_08B28DC4) is checked first and any entry in it at a
    non-zero distance is taken at once (not identified; empty in the runs seen); the aim is the target's position + its
    velocity x a time. The throw (2026-11-20, built): the player's rule with the bot's aim frame, pitched with its aim (Aurek:
    the line to the target's middle [assumed]), no reach test; level throws land about 23 m away. Open: the time used
    for the lead, slot 11's item, the throw animation. Harness (Hoth, 100 s): 5 throws landing 21-28 m away. Aurek (Hoth,
    200 s): 2 throws at normal (20 and 43 m), 4 at elite (5-34 m) - fewer than the original's 5 in 100 s (its sensed list
    may hold more units, or its difficulty in the harness run is elite: open).

- [x] **2.4 Guided projectiles [traced 2026-11-20, built].** There is no turn rate. The projectile update 08A005B0, with WillTrack
  (+168, from the Projectile loader 08A01590) and a living target (+140, health +40 > 0), sets the velocity every frame straight at
  the target's point (its vfunc +44) plus the target's velocity (vfunc +40) times the frame time, at the projectile's own speed.
  Aurek does the same: the 100 degrees a second limit is gone. [assumed: the point is the body's middle (vfunc +44 not read);
  the target's velocity comes from its movement over the last frame]. Space Hoth 3 min: 45 fired, 23 hits.
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
        rocket launcher, then the EMP launcher.  Ported 2026-11-20 with 2.1's AI loadouts (play.c ai_weapon_choice).
  - 2026-11-20, **the bot modifiers, traced** (089E1FDC, the damage applier): when the attacker is an AI (+194 / +195 clear)
    the damage is multiplied by the victim's +128, and - only when the victim is the local player (089E3BD4) - by the
    weapon's Modifier_Bot_Damage (a map built by 08A24EA0, read by 08A24E1C) and at the elite difficulty by a global from a
    blueprint (hash 0x311D4DBF, default 1.0; D_08B1BDE8). Checked in the harness (Hoth, ~110 s): bot rifles hit bots for 15
    (the full damage) and an AI rifle's hits came 18 frames apart (its RateOfFire 0.3 s - no x3 from
    Modifier_Bot_RateOfFire). Aurek applied both to every bot shot; now Modifier_Bot_Damage only on hits on the local player
    (its soldier, vehicle or turret: ak_target.local), and Modifier_Bot_RateOfFire not at all. Hoth 120 s: 16 tickets lost
    (6 before; the original: 13 soldier deaths in ~110 s). The elite global is Weapon "Base"'s
    Modifier_Bot_Damage_Elite_Global (1.35): built too (ak_target.elite, bolts and projectiles of AIs). [ ] The victim's +128,
    where Modifier_Bot_RateOfFire (the AI record +32) is read.
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
    - 2026-11-20, hover height measured parked (harness state.log object height, Aurek's ground under it): speeder bikes
      0.09-0.11 m (Endor 30d46 / 30d47, Kashyyyk two), Kashyyyk's IFT-T 1.01 m (the other on a slope 0.35). Aurek's speeder
      bikes rode 0.8 m up; now 0.1 (hover tanks stay 1.0). [ ] Driving (the harness's teleport holds the player on Endor).
      Harness planet rows: 0 Boz Pity, 1 Endor, 2 Geonosis, 3 Hoth, 4 Echo Base, 5 Kashyyyk, 6 Korriban, 7 Mustafar, ...

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
    2026-11-20: the crash is the collision damage of 7.2 (089CE510: 5 m/s or more into a surface costs max health x the
    impact speed x dt x 0.05 in free flight, built) - a skim is a short touch, a crash a long one. Landing (AnimLand) is not
    measured.
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
  - [ ] **3.5b** The extra time's source and the flyers' spread; the respawn-when-taken-away rule (traced 2026-11-20: up to 4
    vehicles a spawn, a new one when none stands within 25 m - built, NATIVE_ENGINE row); the boarding range (measured, below).
  - 2026-11-20, boarding and leaving measured (harness program board_try: d-pad up every 0.5 s from 1.5 s, the player
    teleported around the vehicle; physics boxes from RS_DRIVE_BODYID):
    - Hoth's AT-ST (centre 261.98, 13.97; box x 259.54..264.08, z 12.28..15.66; it faces -x): boards from 3.0, 4.0, 4.5 and
      5.0 m behind it (+x), not from 5.5 m behind nor from 3.5 m to its side (+z). Leaving puts the soldier 3.06 m straight
      behind the centre (0.96 m past the box's back face).
    - Hoth's snowspeeder (centre z 173.88, box z 171.30..176.46, facing -z): boards from 2.6 m behind (+z), not from 2.6 m in
      front; leaving puts the soldier 4.09 m behind (1.51 m past the box), dropped from 0.5 m up.
    - A Taun-Taun did not board from 1.9 m behind.
    So getting in is tied to a spot behind the vehicle (within about 2.0-2.4 m of the AT-ST's exit spot) rather than a radius
    around it, and the spot differs per vehicle (no marker or blueprint value found: the AT-ST's markers are dam, muz, muz01,
    tur, target, rocket, dam01). The spot's rule is traced (089D2DBC: 0..9 m in 1 m steps, behind / front / left / right, the
    first free) and built - see the NATIVE_ENGINE row; open: 089D5A60's free test, the boarding test's own code, creatures. Debug: AK_DUMP_VEH_MARKERS=1 lists each vehicle
    model's markers and bounds; AK_DEBUG_VEH logs where the player gets out.

- [ ] **3.6 Secondary weapons and lock-on.** Lock-on traced 2026-11-17 (089CC77C per frame, 089CC878 the check; blueprint
  fields from 089C4A2C: LockAngle +400, LockOnTime +408, LoseLockOnAngle +412, LoseLockOnRange +416, InitialLockOnAngle +420,
  InitialLockOnRange +424; target +448 (999 none), last target +452, timer +464, locked +468).  A new target resets the timer.
  While building, the target must pass the check within InitialLockOnRange / InitialLockOnAngle (1000 m / 30° in the base
  blueprint) each frame, or the timer resets.  The timer grows by dt, clamped to LockOnTime; at LockOnTime the lock holds
  while the check passes within LoseLockOnRange / LoseLockOnAngle.  Aurek now does this; it used LockAngle (15°) while
  building.  The candidate test (089CA734): the angle to the target (acos of the clamped dot) under LockAngle - as Aurek's choice.  Was: Verify HardpointW2 and the lock rules against the original. The docs list them as
  "not yet" (stale).
- [ ] **3.7 Space [partial].** Capital ship turrets (ENTI type 30), the pilots' dogfight states, and hangar and shield rules.
  - Traced 2026-11-21 - **how a space match ends** (the level script, game/ak_script.c; Space Alderaan's groups as the example):
    a damageable object whose damage is relayed (08A069F8: shield first (+0x1C / +0x20), then, when 08A06E00 says so, the hit goes
    on as 0x8053 {the 32-byte hit} to its linked object) feeds a class 0x800E object (ENTI type 14, 089F0FB0; one per capital
    ship: 1896B / 1896C).  0x800E's handler (089F1298) takes the hit off its hull (+0x58, at most D_08ADEA7C) and raises event
    10011 when the hull reaches 0; 0x800D / 0x800E set its +0x61.  Its table sends the group (Alderaan g10 / g100): counter 18768 /
    18764 +1, 0x8020 {5, team} to the ticket entity, 5 to a 0x802B object.  At 6 the counter fires g8 / g7: 0x8009 to a 0x8013 object
    (1892C / 1892A, ENTI type 19, 089F05BC: 0x8009 raises 10010, 0x8008 10009), whose table sends 0x8006 {1, team, 0, text hash
    0x76ECF915} to the ticket entity (g88 now, g87 after 5 s) - 0897392C ends the match for that team.  Open: which objects relay
    to the 0x800E (the ship's parts), why the counter needs 6 raises (does the hull refill?), and the ticket entity's 0x8020.
    Aurek has no damageable capital ships yet, so none of this runs.
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

- [ ] **4.1 Bot vehicle use [ported 2026-11-21, timing partly open].** The want flag and the squad's nearest-vehicle pass (see below; NATIVE_ENGINE row 2026-11-21).
  - Traced so far (2026-11-21), the game's side: the squad AI (08925E98, run per side) walks the units (D_08C2A880); a unit whose
    +0xC8 bit 5 is set ("wants a vehicle"), that is not busy (+0x149 0), has none reserved (+0xE0 999), is alive and of the
    squad's team gets the nearest vehicle with a free seat for its team (089269AC: vehicles D_08C2B2A8 except turrets 0x801E and
    those already reserved (+0xE4 bit 5); seats free vfunc +0xE8 >= +0xEC; in campaign two vehicle hashes are skipped; a
    vehicle class match against the squad (+0x4C) when asked), then the order 0x8037 {vehicle id} (sent to its controller
    +0xB0, 08922AA4), +0xE0 = the vehicle, the vehicle reserved.  With none found, bit 5 is cleared (single player).  Bit 5 is
    set by the squad's member pass 0892CC00 (members whose flags +0x50 / +0x53 of the squad slot are clear - their meaning is not
    read yet; Ghidra loses the flow there: read the decomp C) - this is where the timing comes from.  Next: 0892CFE0, 0892D1B8,
    0898D7A8 and what sets the squad slot flags; then measure with the harness (when Hoth's bots first board) against Aurek.
  - Found 2026-11-21: bit 5 comes from the spawner (089800C8, its +0xEC chance, 100 by default); 0892CC00 is another squad kind's
    pass (a list at D_08C2BA28).  Ported; open: the 25 s give-up on a far vehicle (Aurek's), the order 0x8037's own handling, the
    spawn places that put Hoth's Rebels 190-350 m from the snowspeeders (the original boards them at 13-14 s).
  - Spawn places, traced 2026-11-21 (open): in the original every first-wave Rebel on Hoth spawns at the hangar post 187EC
    (-170, -2, 195; harness, 9 of 9 bots, at its linked points) and every Empire bot at 187F0 - Aurek picks a random owned post.
    The team spawn managers (class 0x800C, ctor 0898A848, registry D_08C2A330) keep per-post { id +0x60, slots +0x80 (16),
    weight +0xA0 } built by 0898ABFC (conquest): weight = 1.0 x the bits of (the post's byte D_08C25394[i] & the manager's +0x53)
    when the manager's +0x54 has bit i, + 2.0 when the player's unit (entity 1000 +0x1C) is within 25 m of the post (single
    player); 0898B9F4 draws a post by weight and spends a slot.  Read live (harness RS_DRIVE_SQUADS=1): Empire +0x53 0C, +0x54 01
    -> 187F0 2.0; Rebels +0x53 01, +0x54 0C -> 187EC 2.0 (the player), 187ED 1.0, 187EE 1.0 - which would put half the Rebels
    elsewhere, so the soldiers' own spawn is likely another path (0898B9F4 is reached from 0898383C only for 0x800D spawners).
    Next: find what spawns conquest AI soldiers (who calls the post spawn 089ED36C: 0898383C, 089A7570, 089D4140) and how it
    picks the post.  089A7570 (a soldier) spawns at the owned, enabled post nearest its own position (089EDB40) - called from
    089826E8 (a walker spawner's crew); 089D4140 and the AI soldier respawn path are still to read (callers of 089A76EC: the
    soldier factory, 0895E9B4 / 08974318 / 089F7894 / 08A0CF24 / 08A61EEC).
    Ported 2026-11-21 [assumed rule]: the player's side spawns at the owned post nearest the player.  Open: the other side's
    post (the manager's weights; the Empire's only weighted post was 187F0), and the first wave's trickle (the original's bots
    appear one by one from 4.3 s to 14 s, about every 0.6 s; Aurek's all at 0 s) - the AI spawn path is still not found
    (08974318 is the heroes', 08A0CF24 / 089826E8 a unit spawner's crew).
    The trickle, found 2026-11-21: each AI soldier's unit spawner (0x800D family) times it at 5-15 s (0897F158) from the start
    and from each fall - ported (AK_BOT_SPAWN_DELAY).  Still open: the other side's post.
    Spawners read live (RS_DRIVE_SPAWNERS): the player's side's take the player's spawn post (ported: p->player_post); the
    other side's draw from the manager (0898B9F4) - its +0x53 / +0x54 masks' source is the open part.
    Done 2026-11-21: the masks (08928170) and the weights ported (ak_conquest_spawn_weights); the order 0x8037's node (0893EA50:
    no time limit, boards within 0.8 m of the hull) - Aurek's 25 s give-up removed.  4.1 left open: the slot counts, the 0.8 m sweep.
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
- [ ] **4.3 Turret AI [partly traced].** States NEUTRAL / SEARCHING / ORIENTATING (0x08B1B6AC) and who aims.
  - 2026-11-20, **the AI's trigger, traced and built** (every AI shooter: class 0x08AF97A8, built by 08965E64 over 08965930,
    updated by 08965A70 with the shooter's forward axis, the line to the target and whether it wants to fire): state 1 waits out
    its timer; then, wanting to fire with the target inside the range and the cone (08965B68 / 08965C58 / 08965C9C, the cone
    across the ground when the record's +24 is set), it holds the trigger (state 2, message 0x805F to the shooter: each of its
    hardpoint weapons gets the burst's shot count at +296; 089C7A00) for the burst time, and letting go (0x8061 clears +296)
    starts the pause. Burst = WindupTime + 75 / (max(OverheatPershot, 1) / max(RateOfFire, 0.05) - OverheatDecay) (08A24648),
    pause = 75 / OverheatDecay (0 without decay; 08A24740) x 0.9..1.1 (08965EF8), shots = burst / RateOfFire (08A24588). The
    records: soldiers 40 m / 7.5 degrees across the ground (089428DC, 089514C8), ground vehicles 250 m / 10 across the ground
    (0894677C), flyers 600 m / 5 (0894878C, 08949B28), turrets the record's range (+560) / 7.5 (0894FFF8, wanting to fire when
    the aim has its solution, 0895076C +34). So rifles (0.3 s, no heat) fire 22.5 s bursts with no pause; pistols 3.4 s bursts
    and 4.2 s pauses; X-wing lasers (heat never builds: a negative burst) one press, every barrel once, then 6.25 s.
    Aurek: game/ak_weapon ak_ai_fire for bots on foot, bot vehicles and turrets (Aurek's own 0.8-2 s bursts, 17-degree cones and
    unlimited reach are gone). Checked against the harness (Hoth, idle player, about 110 s): soldiers took 41 hits in the
    original, 67 in Aurek now (230 before). Space Hoth: flyers hit flyers 160 times in the original, Aurek 13 - before and after
    this change alike; Aurek's pilots keep their nose within 5 degrees of a target 2 % of the time (their pursuit is 4.6).
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
    - 2026-11-20: the turret class is 0x801E (made by 089BC0AC from the factory 0896F170; vtable 0x08B00800, update 089BBF80 ->
      089BBD30, which dispatches on its mode +568 through a table at 0x08ADE5CC after finding its driver, 089D194C). The firing
      goes through the vehicle's driver like any other vehicle, so the AI side is the turret controller's input - not read. The
      lead's shot speed is 1000.0 (built).
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
  - 2026-11-20, the path node read (0893D4E8, Ghidra + the decomp for the VFPU parts): the AI soldier walks a list of path
    points (indices at node +0x2C, the current one +0x22; points are 24-byte records at *0x08B204A0: x, y, z, then a fraction
    +0xC that places the first and last legs' start along their segment); each frame the vector to the point (x, z) goes,
    normalised and times 8.5 (D_08AED88C), to the controller (0893E67C -> the controller's vfunc +128: the move vector at
    ctl +72 that 0899984C steers by); within 1.0 m (D_08AED884) the next point is taken, past the last the node ends (+0x20 =
    0xFFFF). 0893E014 (avoidance among nearby units, VFPU) not read. Aurek: its nodes are taken within 1 m (was 2 m); the 8.5 is
    a wanted velocity whose turn into speed (the measured 0 / 5.0 / 8.5 / 11.5 m/s) is still not found.
  - 2026-11-20, the node's speed: 8.5 (D_08AED88C), but 5.0 (D_08AED894) when a unit of the list it scans (0x08C2A880, by
    08ABC44C) is within 40 m (D_08AED890) and 0x08C29B58 is 1 - 4.5 (D_08AED898) when the byte 0x08C2932D is set. Matches the
    measured 8.5 / 5.0 modes. Ported (ak_char_input.speed): bots on a path run at 8.5 m/s, 5.0 within 40 m of the player
    [the list: every soldier, 2026-11-20 - see the 5.0 rule's NATIVE_ENGINE row. The 4.5 case: 0x08C29B58 is a game state
    copied from 0x08C29B54 by 089719A0 -> 08979CA0 (which also calls 089CE20C); it reads 0 in an Instant Action match (harness
    peek), and the byte 0x08C2932D beside the one that picks the difficulty's source (08979DF4: 0x08C2932C) - so 5.0 offline]; Aurek's own 0.55 in a fight stays (PARITY(4.4)). Hoth,
    60 s: captures 0 -> 2 against the old 6 m/s. Avoidance (0893E014): traced and built 2026-11-20 (NATIVE_ENGINE row; the
    side it turns to is [assumed]).
  - 2026-11-20, the 11.5 m/s: not a soldier speed. Harness (RS_DRIVE_AICTL now also logs soldier +520 and the input object's
    controls 20 / 21; Hoth, 900 frames): bots have no input object (+92 = 0) and the sprint bit (+520 bit 5, set from control 21
    in 0899530C) is never set; every 11.4-11.7 m/s stretch is a bot riding a vehicle (its position 1.9 m from a class 0x801D
    object, bobbing +-2 m/s vertically at the mount's gait). On foot bots move at 8.5 or 5.0 m/s (7.4-8.3 is 8.5 along a slope:
    the path vector is horizontal); +520 bit 1 (0x2) is set in most 5.0 m/s samples.
- [x] **4.5 Bot counts per mode and level [traced 2026-11-21].** AK_BOTS is 15.  Measured 2026-11-17 (harness, soldier objects
  0x8005 per frame): Hoth conquest peaks at 16 soldiers including the player (15 bots, as AK_BOTS); Space Hoth shows up to 11 on
  foot at once, but pilots in their craft are not soldier objects there, so the space count is not settled.  The game's source
  of the count (mode or level data) is not traced.
  - Traced 2026-11-21: the AI soldiers' spawners are made by 089809B8 (from 089719A0 at the match start, and 08A0C0D4): it counts
    what is already there - the players' spawners (registry D_08C2C664, +0x60 bit 4) and the unit spawners whose vfunc +100 says
    they spawn (registry D_08C29FC4; a walker spawner holding the hash 0x058D13BF unit of class 0x8014 left out) - and makes the rest
    up to 08979D14(): the match's unit count (D_08C294D0, or +4 / +8 by the session kind at D_08C2932C / D). Read live (harness
    RS_DRIVE_PEEK): 16 on Hoth and on Space Hoth (Instant Action), the same for every level - so 15 AI soldiers beside the player,
    as Aurek's AK_BOTS 15; Space Hoth's placed craft come with spawners of their own (18 listed).  Not per level or mode.
- [ ] **4.6 Space AI [partial].** Commander roles are traced; dogfight states FOLLOWING / CIRCLING_ROUND / DOING_STUNT are not.
  - 2026-11-20: FOLLOWING / CIRCLING_ROUND were already built from 08948A9C (play.c bot_fly). The state-name tables sit at
    0x08ADA314.. (UNSET / FOLLOWING / CIRCLING_ROUND / FINISHED; UNSET / FOLLOWING / CIRCLING_ROUND / DOING_STUNT / FINISHED,
    the latter's machine 0894A3A4 -> 0894A51C). Space Hoth, 110 s: the original's flyers hit flyers 160 times, Aurek's 13. In
    Aurek only 6-7 bots fly at once and they fight across 500-1700 m (their nose is within the trigger's 5 degrees and 600 m
    2 % of the time; letting them pitch past 0.7 rad in space changed nothing).
  - Measured (harness state.log, Space Hoth, class 0x8004): 13-19 flyers, 14-15 of them moving, nearest other flyer 22-365 m at
    75 s and 167-965 m at 115 s. Found why Aurek had 6-7: a placed (type 13) craft made its whole vehicle kind undrivable - Space
    Hoth's X-wings, A-wings and TIE fighters, the hangars' too (the flag sat on the shared def). Now the spawn's own flag: bots
    board 20 craft in 110 s (13 before) and the flyers hit flyers 37 times (13). The placed craft fly from the first frame in
    the original (30d44 / 46 / 48 / 4a / 4c, 60-80 m/s); Aurek now starts a bot of the craft's side in each one that is in the
    air (who pilots them in the game: not traced) - 50 hits in 110 s. [ ] The pursuit's engagement distances.
  - 2026-11-21: after the spawn-timer change (1.10c) Space Hoth reads 34 flyer hits in 110 s (the bots now come in over 5-15 s).
    The flyers' blueprints give TargetRange 2500 / InitialLockOnRange 1000 (every craft); Aurek picks the nearest crewed enemy
    craft within 1500 m every 0.5-0.7 s [assumed] and a role per craft (attack runs / landing / combat).  Next: read who feeds
    08948A9C its target in GENERAL_COMBAT (the vehicle AI's sensor and range) and measure the original's flyer pairings
    (harness state.log, class 0x8004, nearest-enemy distances over time).
  - 2026-11-21: GENERAL_COMBAT's target choice and timing ported (NATIVE_ENGINE row): 40 hits.  Open: what the patrol node 0x485
    does (08945A68 family), the sensor's record +8, and the remaining gap to 160 (the original's pairings not measured yet).
  - 2026-11-21, measured: the original 203 flyer hits / 110 s, 16 pairs, median 391 m; Aurek's trigger held ~18 s in all.  Lead and
    body boxes ported.  Next: the pursuit (08948A9C FOLLOWING: how it steers - 08959914 / 08959B7C / 08959780 / 08959CC8) to get
    the time on target up.
  - 2026-11-21: FOLLOWING's aim point and speed ported (42 hits).  Next: how much time Aurek's flyers spend CIRCLING vs FOLLOWING
    against the original (the original hits from 0-577 m, median 391), the flyers' turn rates under AI control, the 5-degree cone.
  - 2026-11-21, measured (AK_DEBUG_FLYSTATE): Aurek's chasing flyers FOLLOW 72 % of the time, at 345 / 626 / 1243 m (10 / 50 /
    90 %) from their aim point with the nose 5 / 15 / 112 degrees off it, at 100 m/s (the cruise) - the target too, so the gap does
    not close; with TopSpeed + boost as the pursuit's top the distance falls (593 m median) but the angle grows (19 / 68 degrees at
    50 / 75 %) - no more hits, reverted.  So the limit is the steering: next, the AI pilot (08959780 sets +0x8C, the wanted
    direction; the pilot's update that turns it into stick input) against bot_fly's proportional steer / pitch.
  - 2026-11-21, the original measured the same way (harness state.log around each pair's hits, +-3 s): the pursuer's nose is 0 / 1 / 3
    / 93 / 152 degrees (10 / 25 / 50 / 75 / 90 %) off its target, at 167 / 229 / 321 / 521 / 649 m; its flyers move at a median
    50 m/s (10 / 38 / 50 / 72 / 100 / 125 at 10..99 %), not the cruise 100.  Tried: holding 50 m/s outside pursuits (AK test, not
    kept) - fewer hits (26).  The AI pilot (fly-to 08959780; the flyer's big VFPU update 089B2DC8 reads +0x88..+0x94) is still to
    read; 089B2DC8 is 1474 lines of VFPU code.
  - 2026-11-21: steering gains x4 (AK_FLY_GAIN, a measured fit): nose 3-4 degrees median as the original's; 56 hits.
  - 2026-11-21, the speeds traced. Harness (new RS_PILOT_LOG: every 7th call of the pilot's fly-to 08959780 - the speed asked, the
    pilot's most +0x7C, the caller), Space Hoth: two thirds of the calls come from 0894D570, the update of node 0x487 (built by
    0894CCC4), asking 50 / 37.5 / 25 of a most of 100 (and 75 / 50 craft alike); the rest from the attack node 08948A9C (60-125).
    0894D570 (decomp + Ghidra): speed = most x (0.25 + 0.25 c^4), c = max(0, cosine between the nose - the matrix's third column -
    and the way to the point), clamped between the pilot's least and most (+0x78 / +0x7C, 0894E358); the node ends within 20 m
    (|d|^2 <= 400, D_08AEDBF0). The most is the craft's CruisingSpeed (fighters 100, bombers 75, interceptors 125, transports
    50), the least its StallSpeed (the 60 asked of interceptors). **Engine:** flying bots not chasing (and not landing or
    feeling their way) take that speed, by the brake (AK_FLY_GOTO_SPEED, default 1). Space Hoth 110 s: 16 vehicle hits (20
    without). Aurek's flyers still chase 85 % of the time (AK_DEBUG_BOTVEH: 831 of 975 samples with a target, median 100 m/s;
    without one 55 m/s); the original's pilots spend two thirds of their calls in 0x487. Next: who gives node 0x487 its
    point and when (the patrol 0x485, 08945A68 family; objective legs), and why the original's attacks are shorter.
  - 2026-11-21, who uses 0x487: only two nodes start it (08955410(.., 0x487)): 0x453 (built by 08949A8C; 0894A074: fly to an
    object of the registry 0x08C2A204 - its +0x40 position - then message 0x804F) and 0x454 (0894AE58; 0894B2C4: the landing - on
    arrival it sets the craft's flags and gets the pilot out, 089D1F3C). Goals become orders by 08942448: kind 2 -> 0x486, 4 ->
    0x455, 5 -> 0x450, 6 -> 0x451, 7 -> 0x452, 8 -> 0x453, 9 -> 0x454 (the vehicle classes' 08945AC0 / 08945C28 map kind 3 to
    0x44E first). Next: who hands out goal kind 8 and what the 0x08C2A204 objects are (attack-run points?), so Aurek's roles
    can be matched against the original's two thirds of flight time in 0x487.
  - 2026-11-21, the commanders' orders measured (harness, new RS_NODE_LOG: hand hooks on 089919F4 - the order to a pilot - and on
    the fly-to starts of 0x453 / 0x454; Space Hoth, 82 s): 11 attack runs (command 2), 11 general combat (1), 2 hangar landings
    (8); every 0x453 start flies to an attack-run object (ids 0x18820.., at the capital ships, x +-1500-1700 m). So the fly-to
    time is the runs, flown at 25-50 % of cruise. Aurek gave runs to 3 of 17 (2 of 9 fighters): each bot rolled on its own random
    stream, whose first draws ran high (58.9 twice); the rolls now use the game's shared random as the commander does
    (0899129C; `game_roll`, seed [assumed]): 14 runs, 46 combat, 3 landings in 110 s. The combat count is inflated by a
    pre-existing loop: a Tie_Interceptor chasing a soldier into the enemy hangar lands, lifts off and is given its role again every
    1.1 s (bot 9 from 51.9 s) - fixed: in space a flyer no longer falls back to soldiers (Aurek's own fallback; [assumed] the
    vehicle sensor holds no soldiers there). Space Hoth 110 s now: 13 runs, 11 combat, 3 landings - the original's 11 / 11 / 2.
  - 2026-11-21, runs and the patrol. The original's pilot blocks (RS_PILOT_LOG) fly to points for 40-75 s each, attack for 24-103 s;
    Aurek's runs (AK_DEBUG_BOTVEH) fly at 39 / 49 / 53 m/s (10 / 50 / 90 %) and last 9-35 s a run, its combat bots chase at a median
    100. The patrol (node 0x485, update 0894B7D8) traced: every 5 s it rolls on the game's random against an edge measure
    (0894BD4C: the largest |pos - centre| / half-extent of the pilots' box 08A145E4(1), to the 4th power, 0 under 0.125) - a random
    direction (2r - 1 per axis) or back toward the centre - and flies it at most - (most - least) x 0.5 (D_08AEDB54..68; no box: 1500
    x 500 x 1500 m about the origin, which Space Hoth uses). Ported for space combat flyers without a target (AK_FLY_PATROL).
    Space Hoth 110 s: all flyers' speeds 40 / 49 / 73 / 101 / 126 (10 / 25 / 50 / 75 / 90 %; before 40 / 50 / 94 / 101 / 126; the
    original 10 / 38 / 50 / 72 / 100 / 125 at 10 / 25 / 50 / 75 / 90 / 99) and 14 vehicle hits (9). The patrol node does not call
    08959780, so RS_PILOT_LOG's two thirds leave its time out. Open: the patrol craft brake slowly (median 92 against the 70 asked);
    the runs' length; why the original's combat pilots spend less time at top speed.
  - 2026-11-21: the objects 0x453 flies to are the attack-run objectives (ENTI 34), and their +0x40 is the run's end point at the
    hull (18868: 1518 -116 593, Aurek's path[2]; AK_DEBUG_BOTVEH=3 lists the objectives). On arrival nothing follows in the node:
    0x804F only tells the craft the point (089C7A00 keeps it at +0x2EC and sets +0x34C bit 10) and the node ends (state 2), so the
    commander's next order follows. Aurek's legs: offset -> start -> end; [ ] whether the original's run also takes the first two
    points (the command 2 handler, goal kind 2 -> 0x486, 0894C07C) is the next read. The braking: Aurek's brake is the flight
    step's own (-1 throttle at MaxAcc); how the AI pilot reaches +0x88 (089B2DC8, VFPU) is not read.
  - 2026-11-21, the run's legs: goal kinds map to orders as 2 TAKE_OFF 0x486 (0894C07C, its update the take-off 0894C438), 3
    GENERAL_COMBAT 0x44E, 4 ATTACK_SHIP 0x455, 5 DEFEND_SHIP 0x450, 6 FOLLOW_SHIP 0x451, 7 CAPTURE_FLAG 0x452, 8 ATTACK_TARGET 0x453,
    9 LAND_IN_HANGAR 0x454 (08942448 with the goal names' order). 0x453 hands the objective to the fly-to node (0894CD30): the
    objective's three points are at +0x28 / +0x34 / +0x40, and the node starts at the leg the craft is nearest (it projects the
    craft on the first segment, 08835730), so the original's run takes the same three points as Aurek's; its first state ends
    within 20 m (400, D_08AEDBF0). Aurek's first legs now end within 20 m (were 35 m; the last leg's 70 m is Aurek's). Space
    Hoth 110 s: runs last 16-70 s (were 9-35 s; the original's fly-to spans 40-75 s), 17 vehicle hits (14).

## 5. Game rules and modes

- [ ] **5.1 Tickets [traced for conquest 2026-11-19].** Per mode and level (AK_TICKETS 100), ticket bleed, and AK_TOTAL_LOSS_TIME 60.
  - Found by a gdb watchpoint on the counts (harness RS_DRIVE_MEMSCAN found them at the conquest manager, class 0x8002,
    +0x48 / +0x4C, Rebels / Empire; RS_DRIVE_PEEK reads them): the starting count is the option BFF.InitialTickets (options
    +424, default 100).  The level script then sends the ticket entity (ENTI type 9, class 0x8009, handler 089875C8) its
    changes: 0x8022 {u32, team, f32 percent} adds round(count x percent x 0.01); 0x8002 {u32, team, count} sets a non-zero count
    (0898810C).  Hoth's start group adds 25 % for the Empire: 100 / 125, as the original's HUD.  The match settings block
    (089883F8) copies the counts to the manager (0898858C -> 089870F8, which also raises the low-tickets event under 11).
  - Bleed measured (Hoth, Empire holding 2 of 6 posts): one ticket every 240 frames = 4.0 s, as Aurek's.
  - Ported: the ticket entity's messages as the level script sends them (2026-11-20, game/ak_script.c -> ak_conquest_ticket_msg:
    0x8002 set, 0x8003 add, 0x8004 take, 0x8005 zero, 0x8022 percent).  Other levels' start groups change nothing; Tatooine's
    events (0x8002 10, 0x8003 +5 / +10 / +20) are in its campaign groups.  0x8006 (ends the match: 0897392C) and 0x8010 are not
    ported; in campaign 0x8002-0x8004 pass only at some difficulties (08979DF4) [not ported].
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
  - Part 4, 2026-11-20 - **the level script runtime** (game/ak_script.c; layout and functions in ak_script.h): SMSG groups (both
    sides), delays (100-entry queue), probabilities, timers / counters / selectors / music / FMV nodes and the base messages.  Each
    level has a start timer for every mode but campaign (music) and one for its CTF modes (mask 0xC or 0xA) that locks some posts
    (0x800B to the posts, 089ECC48 - now ported, with 0x800A / 0x800C / 3 / 4); Hoth and Boz Pity have a conquest-only one (the
    ticket change).  Everything else in the CLASSIC files' scripts is campaign (its targets are campaign-file entities).
  - Part 5, 2026-11-20 - **objects' events** (ak_script_events / ak_script_raise): posts raise 10000-10003 on owner changes,
    placed walkers' spawners 10006 / 10007; the walker comes back 120 s after it falls on Hoth and Boz Pity (0x8007, 0897F950).
    Events raised by the game (0887514C callers): 10004 CTF score (089EF7C8), 10009 / 10010 a 0x8013 object's 0x8008 / 0x8009
    (089F05BC), 10011 0x800E (089F1298), 10012 flags (089F001C), 10013 / 10015 vehicle spawns (08A16BC0 / 08A16CA0),
    10014 turrets (089BC764), 5-10 AI hint points (08861204 / 08861948).
    Open: type 33 objects (Hoth's start activates four), what a walker does with its path nodes' 0x3B / 0x51 / 0x4C (the node
    sets / clears its flag 0x40 and passes them to its link, 08855908; the walker spawner passes 0x1B-0x1C, 0x39-0x3C, 0x3E-0x40,
    0x4C, 0x4E-0x4F, 0x51 to its walker, 0897F2B8; the walker's own handler is not found yet - Hoth sends 0x3B to nodes 18875 /
    18877 / 18879 when the Empire takes posts 187EE / 187ED / 187EF and 0x51 when the Alliance does), music after the start, space match end (0x800E 10011 -> 0x8013 10010 -> 0x8006 to the ticket
    entity: 0897392C ends the match), campaign objects (0x3E8 game messages 0x8015-0x801F, spawn places 35 / 36, FMV).
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
  - 2026-11-20, the idle variations traced (08998828): standing idle and not alert, a wait of (random + 0.5) x 2.5 s
    (1.25-3.75, +396), then row 18 or 19 at random (+488) once, then a new wait. Built for the bots (the rifle set's rows for
    every bot [assumed]) and the player (its own set's rows).
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
    to the ground.  The death clips now come from the animation table (rows 20-23, 6.1).  2026-11-20, the pick traced (0899FF38):
    20 + (the game's random >> 1 & 3) - one of the four at random each death, not by the hit's direction (unless the soldier's
    +196 is set: row 32 for a 089DE500 body; not seen in play). Aurek picks the same way for the player and the bots.
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
  - 2026-11-21 (089E9A24 read on): the cone's clip choice compares the post's +0x64 with the animCap clip record's +0x14 (record
    0x0C95772C in the clip tree at 0x08B204FC): under it animCap plays forward (flags 1); at or over it animCap plays backwards
    (0x20001) and, once that has run out (vfunc +0x24), cone_of_light_Rest (0xDFA470A9, flags 0x10001). The logo's clip time is
    set from the cone's (08809AB8 with animCap's +0x44, or 1 - it when not reversed). Open: what +0x64 holds (the amount or a
    time) and the clip record's +0x14 (its length?) - to read live before porting; Aurek draws the cone in its bind pose.
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
  - 2026-11-20, the classes' values: the threshold (vfunc +0x1F0) is 30 m/s by default (08AC4C6C) and 5 for flyers (the flyer
    vtable 0x08AFCBD0 -> 08AC4CD0); the factor (vfunc +500) 0.025 by default (08AC4C78), for flyers 089B02E0: 0.05 in free
    flight (+852 bit 0) unless +852 bit 1, else 0.025. Ported for flyers: a glancing touch's speed into the surface is the
    impact; at 5 m/s or more the craft takes max health x impact x dt x the factor and plays its "Collision Sound" once per
    touch [assumed: +0x34 is the maximum health]. Ground vehicles with box bodies (creatures, tracked tanks) measure the speed into a wall too (30 m/s threshold); hover and walkers (rays) do not.
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
    Engine: Sniper, Friendly, OnTarget, the CTF lines, Grenade (2.3d) and Return (the out-of-bounds warning, 089D4BDC: built -
    play.c, vehicles only) and Rocket (a bot pressing the trigger of a weapon whose Projectile is "rocket": the rocket launchers)
    are built (ak_target.last_quiet marks the listed kinds).

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
  - Hit direction: message 0x8050 (089E3868) leaves the attacker's position at the player controller +0x94 (08A09928). The HUD
    function that draws it from there is not traced; Aurek draws no hit-direction mark yet.
  - World markers (08A55238) - traced 2026-11-15 (NATIVE_ENGINE 1.10 row, "World tags"): names over enemy human players,
    emblems over friendly ones, markers over carriers (+0x90); none apply against bots in conquest, so nothing is drawn. [ ] With
    the flag carriers of CTF (Aurek's CTF has no carrier marker yet).
  - The capture cross (done with 5.5).
  - The missile-warning check against a screenshot of the original.
  - "Press [up] to change equipment" at an own post, and the customisation menu from there - done 2026-11-20 from the original's
    frames (NATIVE_ENGINE row). Open: the exact radius (seen at 3.5 m from Hoth's Empire post; Aurek uses the capture radius), how
    the message is refreshed, and whether the new loadout applies at once or at the next spawn.
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
    enemy list is right-aligned). Row for row as the original's frame. Before the side is chosen the original lists the good
    side as friendly and the player in neither list - Aurek now does the same on the team page. Open: the original shows 8 + 8
    AI soldiers there (Aurek 8 + 7: the player's place is empty), and the player's own row marker (the list's vfunc +32 at
    x 10 / 250, y 77 + 14 x row).
  - 2026-11-20, the customisation menu (BFF_CUSTOMISATION.GUI; square on the spawn map, FE_OpenCustomisationMenu 08A2F540):
    OnInitMenu (08A276F0) opens MP_CustomBackground and MP_CustomCarousel without the focus (0888ADB0(page, 0, 0)) beside
    MP_Customisation. Categories Weapon 1, Weapon 2, Explosive, Special Item, Power Up, Health, Speed, Capture Rate (menu texts
    0x08ADFBF4, descriptions 0x08ADFC14, icons attributes_01.tga v = 0.125 + 0.1015625 x row); items: Weapon blueprints by
    h31 (0x08ADC5E8, 0x08ADC610, 0x08ADC630, 0x08ADC648, 0x08ADC668; 0 = None), in the player's faction's version (08A23598),
    named by Weapon_Name, described by Description, costing Cost; levels None / Level 1-3 (texts 0x08ADFCE4 / 0x08ADFD04 /
    0x08ADFCF4) at 0/10/20/30 (Health, Speed) and 0/15/25/35 (Capture, table 0x08AE30BC). Totals "%d" (08A342E8), "CREDITS:
    spent/max" (08A27994, "%ls %d/%d"), BFF.FE_Customisation_Credits = left (< 0: the red line and, on Back, MP_CustomOverSpent),
    BFF.FE_Customisation_EnableSellButton (the "Clear" prompt), _Health / _Speed / _Agility / _PowerUp / _Insignia for the
    background's pictures. Cross on a category: the carousel gets the focus (08A27EC4); cross on an item takes it, no credit
    check (08A27F28); square clears (08A27FD8); triangle CONFIRM CANCEL (08A27E74 -> MP_CustomCancel; its cross 08A27DE0 puts
    the loadout back); circle leaves. Max 200 and the default (Blaster Rifle, Blaster Pistol, the grenade, Health 1, Speed 1)
    from the original's frame. The UI's action keys are 16 cross, 32 square, 64 triangle (the spawn map's buttons: square
    customisation, triangle personalisation). Engine: frontend.c (layers, list boxes, the FE functions), the loadout goes to
    AK_WEAPON / AK_EXPLOSIVE / AK_*_LEVEL and ak_play_loadout for the next soldier. [assumed]: list-box row parts with flags bit
    5 show on the chosen row only; Capture Speed Level n uses the rate table's n and None the 1.0 measured at the default; the
    level / power-up carousel pictures are the background's own. The 3D models (1004 widgets) now draw (fe_model_draw / ak_play_draw_figure) -
    open there: ~1.35x small against the original's frame, the turn's order and signs [assumed], models of weapons the level does
    not load, the preview's pose and held weapon. Also open: Weapon 2 and the special items / power-ups in play (2.3), the main menu's customisation, the personalisation menu.
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
  - 2026-11-21, vehicles (RS_PROJ_LOG): driving Hoth's AT-ST (program walker, 15 s) the projection stays 1.73209 / 3.05663 with
    near 0.25 - the soldier's 60 degrees across; no vehicle projection of its own (only the spawn screen's 1.4966). Aurek's vehicle
    cameras use the same p->fov: matches. A flyer in space not measured (the space run did not board).
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
    holograms and additive parts stay unlit; AK_LIGHT=0 turns it off. 2026-11-20, the weighting traced (0889B6B0): the 6 nearest samples (a
    k-d tree walk), each weighted 1 / (squared distance + 0.001) - Aurek took 4 with 1 / (d^2 + 1); now the game's. Open: the
    dynamic lights (made by 0889CE40 and set by 0889D14C / 0889D1BC; its callers are the effects code - 0885ACE0 / 0885C6C0,
    the emitters 088E59C8 / 088E5B50 - and the classes 089F3B78..089F45F8 and 08A66F20..08A675C8: so an effect's light element
    makes them, read from its FX data - not traced), and per-vertex lighting on Vita / 3DS.
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
    destroyed / visible pairs) - not built. 2026-11-20: the first word is the number of states, not a kind (see NATIVE_ENGINE
    row: state 0 kept, flag 0x80000 hides; ENTI type 43 holds the state (0 in every record) and message 26 switches it - the script's
    message 26 senders not built). The senders (SMSG side 0, payload {1, state, 1.0}; tools/re/smsg_to_type43.py lists
    them): Tatooine's lasergate - group 13 sets state 0, group 28 state 1; Yavin's consoles - groups 52-54
    state 1 in pairs; Sullust - group 14; the Ion Cannon - groups 6-8 state 1, group 36 state 0. None fires at the start, so
    every level starts in state 0. What fires those groups (entity events: a post taken, an object destroyed) needs the level
    script's event side, which Aurek does not have (only start timers - ak_audio.c / ak_conquest.c). Engine: asura.c reads kind 1 (ak_level_tex_anims), the scene offsets the UVs of
    those materials' draws, level and models (ak_gfx_set_uv_offset; GL; Vita / 3DS keep them still for now).
- [ ] **R.5 LOD distances.** AK_LOD_SCALE 12 is Aurek's own; trace the real ones.
  - 2026-11-19, looked for and not found: no blueprint key, level chunk or string names a LOD distance (the lower details are
    the "L1#" / "L2#" meshes); the switch is somewhere in the model draw.  Next: watch the GE vertex counts of one prop in
    the harness while the camera backs away (--tp), to measure the distances per model radius.
  - 2026-11-20, soldiers measured (harness RS_DRAW_LOG=N: every N frames each lit 3D draw's distance from the camera; the
    game draws models with an identity view, so the model matrix's translation is the distance): Hoth's soldiers drew 782
    strip indices up to 39.2 m and 442 from 40.2 m, none lower out to 220 m - one step at 40 m. Aurek's soldiers now take their
    L1 meshes beyond 40 m (`AK_SOLDIER_LOD`). Props: their draws are split per part, not identified yet.
- [ ] **R.6 Particles and effects (PFX) [partial].** Explosions, muzzle flashes, impacts, streaks, and the command post glow (AK_POST_GLOW
  is Aurek's own).
  - 2026-11-20, the data read (tools/asura/pfx.py; every FX chunk of Hoth parses to its last byte but FXET's 48-byte tail):
    three chunk kinds per level, each {u32 hash, name}: FXET effects (69 on Hoth; loader 0882A3C0 -> 0882ACE0), FXST particle
    systems (205; 0882A350 -> 0882A890) and FXPT particle types (205; 0882A2E0 -> 0882A430) - a system and its particle type
    share a name ("BFF_BigExplosion_E:fire_S") and hash. Curves (08AA5868 vec4, 08AA5A98 float, 08AA5CD4 vec3) are
    {u32 version 10003, u32, u32 n, n evenly spaced samples}.
    - FXET: a colour curve and a float curve (the effect's light: BigExplosion's radius 14.6 -> 0), [v13] a word, then n
      emitters of {system hash, position, 3x3 matrix, a vec3, a word, the emission shape (088EA38C: kind, word, then 1 a box
      (6 floats), 2 a sphere (radius), 3 three floats), a word}, then the tail (a word, an optional light-list block, flags).
    - FXST: curves a (float), b (vec3), c (float), d (vec3), e, f, g, h (floats; BigExplosion:streaks g = 9.81), a vec3, 13
      words, [v5] a word, a word.
    - FXPT: a colour curve (RGBA over life), three float curves (size over life, then two more), n texture cells {u0, v0, u1,
      v1, a float}, 9 words (+0x14 .. +0x1D) and the flags (+0x23), [v10] 2 floats, [v11] 1, [v12] the texture
      (\specialfx\partclfx.tga), [v13] a word.
    - The runtime so far (game_10.c, 088E2000..088EF000): a curve object is {?, n, samples, t0 0, t1 1}, sampled at a
      normalised time t by 08AABE50 (index (t - t0) / (t1 - t0) x (n - 1), linear between samples). The spawn step 088E6E9C (per
      emitter): t = the emitter's time (+0x74); a particle is made when a random number in 0..1 is at or below curve f(t)
      (system +0x64) and the emitter has fewer than the system's +0xDC (the last of the 13 words: its particle limit); the
      emitter's own step is scaled by +0xC4 when the system's flags (+0xE4) have bit 3; the new particle (32 bytes) starts at
      the emitter (or a parent's moving frame when +0xE0 is not -1), less the emitter's velocity x dt when flags bit 2, less the
      frame's motion unless bit 4, plus a random point of the emission shape (088EA81C); its velocity comes from curve b (vec3)
      at t. +0xB0 (the second word) is the emitter's duration (its time runs at dt / +0xB0). 088E4934 moves an effect and its
      emitters to a new matrix. Particle stepping and drawing are not read yet (VFPU code: the decomp's C, not Ghidra).
    - The particle step (088E6638, per emitter each frame): the emitter's time (+0x74) runs at dt (x +0xC4 with flags bit 3)
      / the system's +0xB0; each particle's age (record +0x18, 0..1) runs at dt / the particle type's lifetime (FXPT +0x54;
      with FXPT flags 0x20000 the lifetime is +0x54 + frac(record +0x1C x ...) x +0x58, a per-particle spread); past 1 it is
      removed (088E7AEC), or restarts at 0 with FXPT flags 0x4000000 (looping). While the emitter's time is under 1 it emits:
      the count comes from a system curve at that time (+0x54.. on the system: the 5th curve, e) times the effect's scale
      (effect +0x40): an accumulator (+0x70) gains rate x dt and each whole unit spawns one (088E6E9C, placed back along the
      frame by the fraction); with the system's flags bit 5 (0x20) the emitter instead fills up to its limit at once (a burst).
      So curve e is the emission rate (particles a second over the emitter's life): BigExplosion:streaks ~100/s for 0.4 s.
    - The motion (088E2DDC; particle record: position +0, velocity +0xC, age +0x18, a random word +0x1C): position += velocity x
      dt; system flags 0x400: velocity += the system vec3 (+0xA0) x curve g (+0x78) at the particle's age x dt (gravity:
      streaks (0, 0.5, 0) x 9.81, game y down); 0x80: velocity += curve h (+0x8C) at age x dt x a noise of position x +0xCC
      (088EF134, per axis); 0x200: velocity x= max(0, 1 - +0xB4 x dt) (drag); 0x100: the same with +0xB4 x the particle type's
      curve c1 at age (x the time with FXPT flags 0x40000). The system's 13 words are +0xAC (its hash), +0xB0 duration, +0xB4
      drag, +0xB8, +0xBC (a bone/marker for flags bit 2), +0xC0, +0xC4 time scale (flags 8), +0xC8, +0xCC noise scale, +0xD0,
      +0xD4, +0xD8 (flags 0x2000: a fade-in limit), +0xDC the particle limit; then +0xE0 (a parent, -1 none) and the flags +0xE4.
    - FXPT's words in the stream's order are its +0x50 (an int: 1 streaks, 5 fire - the blend or kind), +0x54 the lifetime
      (s), +0x58 its spread, +0x60, +0x64, +0x6C, +0x68, +0x70, +0x74; the frames list is +0x88 (count +0x5C); the flags +0x8C.
    - The draw (088E4454 -> per emitter 088E6CD4 -> batched by 088E92CC / 088E9398 -> 088E261C -> 089173D4 -> 0891589C): per
      particle the alpha is the type's colour curve (+0x00) at its age, skipped at or below 0; the size c1 (+0x14) at the age x
      a scale (1, or the emitter's with FXPT flags 0x40000) x (1 - the record's random x c3 (+0x3C) at the age); the turn c2
      (+0x28) at the age (a random one with flags 4; none with 0x8000 or with 2 but not 0x200; flags 0x400 and an odd random
      flip it [assumed]); flags 0x200 / 0x1000 / 0x2000 / 0x4000 pick other orientations (velocity-stretched and emitter-
      facing: VFPU code not followed). The blending is the type's kind (+0x50) through 0890D108: 1 sceGuBlendFunc(ADD,
      SRC_ALPHA, ONE_MINUS_SRC_ALPHA), 5 (ADD, SRC_ALPHA, FIX) - additive, 4 (ADD, SRC_COLOR...), 0xC reverse subtract. 6
      vertices a particle (0x08AD95DC; 26 with flags 0x400000), vertex type 0x19F (float UV, colour 8888, float position).
    - The spawn's direction (088E6E9C): the base vector is (0, 0, speed); the angles are b(t) x pi + d(t) x r, r = a random in
      -pi..pi (0x08AECDD0 / D4); one quaternion is built from the x and y angles (half-angle sines and cosines), a second from
      z, and their product turns the vector; the emitter's 3x3 matrix then takes it to the world. System flags 0x1000 add the
      emitter's velocity x +0xC8. The emission shapes (088EA81C): 1 a box {x min, max, y min, max, z min, max} (inside, or with
      the shape's flag 1 on a face), 2 a sphere of radius r and 3 an ellipsoid of radii (x, y, z) (inside by rejection, or on
      the surface).
    - Which effect each event plays is the blueprints': Weapon "PFXMuzzleFlash" (Laser_Blast_E, BFF_Space_Laser_Blast_E,
      BFF_Muz_Shotgun_E, ...), LaserBolt "impact pfx" (BFF_Impact_Metal_E; space BFF_Space_Impact PFX_E) and "shield impact
      pfx" (BFF_ShieldImpact_E), Weapon "impact pfx max dist" 100, Projectile "PFXExplosion" (BFF_BigExplosion_2_E for grenades
      and rockets, BFF_Space_Plasma_Explosion_E for torpedoes and bombs) and "PFXEffect" (trails), Flyer EnginePFX / SmokePFX
      (66% health) / FirePFX (33%) / BoostPFX / SpaceDustPFX, UtilityDroid PFXDeath, Humanoid PFXExplosion (droids).
    - 2026-11-20, Aurek runs them (`game/ak_pfx`, NATIVE_ENGINE rows): muzzle flashes, impacts, projectile explosions and
      trails, vehicle smoke / fire / engines, and wrecks by their "PFX On Destruction" (Flyer / Tank / Walker / Turret
      blueprints). [assumed]: held effects restart their emitters; the 66% / 33% thresholds (from the effects' names); engine
      markers eng, eng01..; particles of FXPT flags 0x100000 kept in the effect's frame. Left: the effects' lights (the FXET
      colour and radius curves), cell animation, the oriented / stretched draws (FXPT 0x200, 0x1000-0x4000), the emitter scale
      of flags 0x40000 (thrust size), the space-dust / hero effects, and the exact noise (088EF134). Boost trails: traced
      2026-11-20 (089AF4B0: BoostPFX at BoostMarkers markers trail01..06) and built; what shows them is [assumed] (boosting).
    - 2026-11-20, cell animation (not built): on Hoth three types have more than one cell, all fires (BFF_Vehicle_33%_health:S,
      BFF_SmokeyFire_E:S, BFF_FlameThrower:rw_pspfire1_source_S: 4 cells each, a cell = u0 v0 u1 v1 and a fifth float, 0 for the
      first and 1 for the others). The cell is the emitter's, not the particle's: 088E6CD4 hands the batch the uv at emitter
      +124 + 4, a 44-byte object made by 088E643C (0889C644 sets up an animator at its +20); what advances it is not read.
      SpaceDustPFX's hash (0xF31E1D8A) appears nowhere in the code.
    - 2026-11-20, measured (harness RS_PFX_LOG; NATIVE_ENGINE row): c1 is the half-width; c2 is in turns from a random start;
      unturned types mirror at random; the blends, depth (test, no write), no fog and x1 colour; types drawn in the level's
      order; muzzle flashes take the bolt's colour. [assumed] left in the draw: flags 0x400's flip on half the particles (seen,
      the rule not read), the mirror's rule, and an impact's Recoil drawn bluish (0xACCEF2 against a (1, 1, 0.76) curve: some tint
      from the surface, not found).
- [ ] **R.7 Shadows and decals.** Shadow blobs and scorch marks as the game places them.
  - 2026-11-20: the blob shadows are one batch (08918144): a vertex list at 0x08C19240 (20-byte vertices, room for 2024; count
    0x08C23244), drawn as one triangle strip (prim 4, vertex type 0x183: float UV and position) with \specialfx\blobshadow.tga,
    depth writes off, when the count is not 0. The harness's draw log of a Hoth match (RS_DRAW_LOG=60, RS_DRAW_ALL=1, frames
    1500-1680, Empire spawn) has no such batch: every 0x183 draw is a sky face, so nothing in that scene casts a blob - Aurek's
    lack of soldier shadows matches it there. Who fills the list (and on which levels or objects) is not found.
- [ ] **R.8 Screen effects.** Damage, zoom overlay, hyperspace.
  - 2026-11-20, the zoom overlay (measured on the original's screen, harness program `zoom`, Hoth, the blaster rifle's one
    zoom level): GRAPHICS/SNIPER.ASR holds one picture, CHUD_Zoom_Scope (128 x 128): the scope's top-left quarter - the frame,
    a light blue haze (alpha 222) outside it, clear glass inside. It is mirrored about the screen's centre, each quarter 160 x
    128 (the frame meets the centre row at x 86 and the centre column at y 21), the rest of the screen in the haze, under the
    rest of the HUD and with no reticle. Built (hud.c, the HUD's `scope` flag while the weapon is zoomed). [ ] The code that
    draws it (not found: no h31 of the picture's name in the data); damage and hyperspace effects. Tool: AK_HUD_DUMP_TEX=part
    of a HUD file's path writes its texture (colour | alpha) to /tmp/hud_tex.ppm.

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
