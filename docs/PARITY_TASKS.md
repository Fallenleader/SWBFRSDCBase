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

> **Goal: full parity, networking and the updated graphics included.** Order (2026-11-21): everything except networking (10.1)
> and the non-legacy rendering items (R.10-R.17) first - the checkpoint where on-device testing and bug fixing starts - then
> 10.1 and R.10-R.17 after the user's bug testing. They are part of the goal, only scheduled later. Work continues session to
> session automatically, with progress reported between sessions.

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
    - 2026-11-21, searched: no constant of 0.35 / 0.56 is read by soldier code - the data's 0.35s (0x08AECD00 unreferenced,
      0x08AEE508 the spawner 089800C8) and 0.5608 (0x08AEE13C, 08968D74) are elsewhere; nor their squares (0.1225 / 0.3136)
      or the values after the 0.25 dead zone's rescale ((x - 0.25) / 0.75: 0.133 / 0.413). So the thresholds are likely derived
      (the stick x max run speed 6 against the clips' own speeds?) - next: the soldier's state choice behind vfuncs +456 / +488
      of 0899984C [open, low priority: the measured values are ported].
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
    2026-11-21, **the reader found**: +0x84 is a soldier field (the object found by the soldier's id in D_08C2A6C8), run down
    by the frame's time in the soldier update 089DA874; it is read only by the soldier's vfunc +32, 089DCC94 ("can be locked":
    +0x84 <= 0, and not riding unless the vehicle's +0x70 bit 18). Its caller (harness RS_CALLER_LOG, a hand hook printing the
    native caller: 08961A50, the AI sensor) zeroes the sensor record's awareness (+24) whenever it returns 0 - so after a roll
    the AI loses the roller for "roll no lock on time" (2 s), the awareness then growing back at 2/3 a second to the 0.99 the
    target needs (the awareness-zeroing branch left open in 4.2). Not the player's own lock-on. Ported: play.c roll_nolock
    (set at the roll's end, run down each frame), the bots' records carry the awareness and bot_find_enemy needs > 0.99.
    Still open: the 0.05 s in the code.
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
    - 2026-11-21, kill boxes traced and built: ENTI type 0x16 (unflagged; the factory 0896F170 -> 08A11428 -> class 0x16, loader
      0886D334: version 4, base words, then x min / max, y min / max, z min / max in game axes, the damage a second (+0x34) and the
      flags (+0x40)). While flag bit 1 is set, each frame (08A11124) every living damageable object whose position is inside takes
      (08A11398) its whole health with bit 0, else +0x34 x dt. In the levels: Korriban 24 (50 or 15 a second, small boxes), Yavin IV
      6, Mustafar 4, Mygeeto 3, Sullust and Hoth Ion Cannon 1 (the big ones, flags 0x4B: outright). Aurek loads them (play.c, "N kill
      boxes" in the log) and applies them to every target's position (feet for soldiers); a dropped CTF flag resting in one goes home
      in 5 s. Tested: a soldier dropped through a Korriban box took 31 on the way through. Water is not a kill box (none on
      Kamino-like levels checked) - still open.
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
    2026-11-21: a soldier made for a unit (089826E8) takes its blueprint's health (0xB735025C, default D_08AEE53C 100) through
    0886422C; the player's level table is D_08AEE3B8 (100 / 133 / 166 / 200, 08978170, sent with message 0x8027 / 0x802F). The 60
    of the AI is not set on that path (and the 60.0 at D_08AEE3B4 is the time limit's default).
    Found the same day: 089832B8 (the unit's spawn) scales an AI soldier's (class 0x8005, not a player's) health by a table
    D_08ADDD84 { 0.6, 1.0, 1.3, 1.6, 2.0 }: entry 0 unless the difficulty (08979DF4) is 2 - then a draw on the game's random over
    the weights D_08ADDDAC { 0, 5, 2, 0.5, 0.15 } (difficulty 1's weights D_08ADDD98 are { 1, 0, 0, 0, 0 }). The units have no
    "Health" (100) - hence 60. **Engine:** bots take blueprint Health (100) x that multiplier, rolled at elite (they read the
    blueprint with a default of 60 before, so heroes' bodies stay their own path).
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
- [x] **2.2b Dropped pickups [done 2026-11-21; the model's motion and fade left as measured].** A fallen soldier drops pickups (the Humanoid death 089A70FC): its
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
    forced case), to each item min(its most, count + N); Stamina min(max, stamina + Capacity).  Ported.  089F5858, the flag
    bits' blueprint keys - done 2026-11-21: 089F5858 lets any AI unit (+0xC3 set) take it, and a human one whose controller has
    a player record (D_08C29F04) - everyone in play, as Aurek. The weapon flags (08A16FD8, by the keys' h31): bit 0 WillTrack,
    2 LocksOnTarget, 3 OnlyLockOntoVehicles, 4 Special_Ability, 5 "Can be restocked" (default 1; false only on the Dispensers,
    which Aurek does not have yet), 8 AttachedToLeftHand, 9 AlwaysAiming, 17 OnlyLockOntoHumanoids; +0x144 AllowHeadshots.
- [ ] **2.3 Secondary items [partial].** Grenades, thermal detonators, detpacks, mines, cluster grenades, remote missiles,
  incinerator, fusion cutter, shields, jetpack, jump pack, stealth. Trace each one's blueprint use.
  - [x] **2.3p Power-ups [traced and built 2026-11-21; VehicleAutoRepair and the HUD's "Ready!" open].** Weapons of class PowerUps (Rage, Rally, Regenerate,
    Stamina; VehicleAutoRepair is Passive): the weapon loader (08A16FD8) keeps Special_Ability (flags +0x16C bit 4),
    RecuperationTime (+0xB4), FiringAnim (+0x110) and FiringPFX (+0xC0). The unit class (constructor 089A6004, vtable
    0x08AFC2C8, the units' list D_08C2A880) reads from the four Weapons (by the name table 0x08ADE4C8: Rage, Rally,
    Regenerate, Stamina) their <name>_Time (keys table 0x08ADE4B8) into +0x108 + 4k and <name>_Radius (0x08ADE4A8) into
    +0x118 + 4k. A unit's message handler (089A6D64) turns messages 0x8067 / 0x8068 / 0x8069 / 0x806A into power-up k = 0..3
    and calls 089A7988: every living unit of the same team (+12) within the radius (3-D, from the user, so the user too) gets
    the buff - its +0xF4 mask set to 1 << k alone (one buff at a time; 089A816C), its timer +0xF8 + 4k to 0, and +0x128 the
    user's id. Each frame (089A64F4) a buffed unit's timer runs by the frame time and the buff ends (089A8188) past its time,
    or at once when [the unit's player record no longer has the power-up (089824B0 with 0x08ADC668[D_08ADE4D8[k]]), it is
    the user itself and vfunc +0xA8 fails] (that test read loosely). The same update heals a living unit below full by a rate
    (vfunc +0xA0, else D_08AEEA08, else a per-team rate 08A3CDF0) x dt - [assumed: the Regenerate effect / a general regen].
    Stamina_Multiplier is read into the base unit's +0x94 (089E13B8). Not found yet: what sends 0x8067..0x806A (the power-up's
    fire: which button), where Rage's x2 / Rally's 50 % act (the keys Damage_Multiplier / Damage_Reduction / Regenerate_Rate
    have no hash in the code or data - possibly hard-coded or read by name elsewhere), the HUD's power-up icon and recharge,
    whether bots use them.
    - 2026-11-21, part 2 (harness program 'powerup': the customisation buys Rage, the match starts; RS_PU_LOG hooks on 08A1F86C and
      089A816C; RS_CALLER_LOG on the four buff tests): d-pad right turns the lower slot from the explosive to the power-up (its icon,
      "Ready!"), square uses it - 08A1F86C (the Weapon's fire when +0x16C bit 6: FiringAnim, then message 0x8067 + kind to the
      owner's unit) 36-40 game frames after the press; a second press 15 s later did nothing (RecuperationTime 60 is the weapon's
      recharge). Two runs: the player alone, and the player and two team-mates within 10 m, all buffed (kind 0). The buff tests are
      unit vfuncs +0x98 / +0x9C / +0xA0 / +0xA4 (08AC4970..08AC49AC: mask bit k): the soldier's damage handler 089A7310 doubles the
      damage when the attacker's unit has Rage and halves it (D_08AEEA10 0.5) when its own has Rally - fixed factors, after the
      headshot multiplier (whose default there is 2.0, D_08AEEA0C); the unit update 089A64F4 heals a living unit below full at 5 a
      second (D_08AEEA08) while it has Regenerate (else a campaign per-team rate, 08A3CDF0); with Stamina 089E47DC multiplies the
      unit's +0x68 by Stamina_Multiplier (+0x94, 2.5) [assumed: the stamina's regeneration]. Bots: no use seen in either run.
      Built (play.c pu_use / pu_update, ak_target.rage / .rally in hurt() and explosions; AK_POWERUP from the customisation,
      settings.txt Vita / 3DS; AK_TEST_SCRIPT 'r' = d-pad right; AK_DEBUG_POWERUP): use 0.6 s after square, the buff on every
      living team-mate within the radius, one buff a soldier, ended past its time or at death [assumed]; the lower slot shows the
      power-up's icon with the recharge as its bar. Tested: Regenerate held the player at full against 3 damage a second for its
      20 s. The lower panel (done the same day, against the original's frame): the power-up's HUD_Icon_PU_* picture (on the HUD
      sheet, not the weapon sheets), its name below, "Ready!" (STDTEXT 159) in the count's place, the recharge bar while it
      recharges. Open: VehicleAutoRepair (Passive), the FiringAnim / FiringPFX / EffectedPFX / "Use_Power_Up"
      sound, and whether a buff survives death.
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
- [x] **2.6 Bot accuracy [done 2026-11-21].** How AIWeapon_Accuracy_* and Modifier_Bot_* are applied.
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
    Modifier_Bot_Damage_Elite_Global (1.35): built too (ak_target.elite, bolts and projectiles of AIs). The victim's +128,
    where Modifier_Bot_RateOfFire (the AI record +32) is read - closed 2026-11-21: +128 read live (RS_DMG_LOG prints it) is 1.0
    on every soldier and vehicle hit on Hoth (110 hits, both sides; 0 only on two neutral objects) - Aurek's x1.
    Modifier_Bot_RateOfFire: the record's only getter is the accuracy's (08A250F0, +0x18 / +0x1C); with the measured 0.3 s
    between an AI rifle's hits it changes nothing in play.
  - Traced so far: 08A24438 reads each weapon's AIWeapon_Accuracy_Normal (+24), AIWeapon_Accuracy_Elite (+28) and
    Modifier_Bot_RateOfFire (+32) into an AI weapon record, each clamped to 0..5 (0x08AEF9CC). Who reads them (the aim error)
    is not found yet. Bolts are not registry objects, so the harness cannot count AI shots directly; hits on the player can be.
- [x] **2.7 Damage tables [done 2026-11-21].** Check every damage path against DamageToInfantry, DamageToVehicle, armour and friendly fire.
  - Measured (2026-11-16, harness: the player's weapon is soldier +0x68, its clip at +0xA0): the blaster rifle fires 5 frames
    after the trigger, then every 18 frames (RateOfFire 0.3); 15 per body hit, 60 per headshot (1.12); the reload starts with
    the shot that empties the clip and takes ReloadTime (2.25 s). Aurek now starts the reload on that shot (was the next pull).
  - The thrower is hurt by its own explosive (2.5).
  - 2026-11-21, friendly fire measured (harness, Hoth, 2.5 min idle; RS_DMG_LOG now prints the victim's id and team (object
    +12), the attacker's id is the message's +4, teams from RS_AI_BOTS_ALL): of 253 hits on soldiers and vehicles, 168 were across
    the sides, 76 from unknown attackers (turrets, vehicles) on either side, 6 on neutral objects, and the only 3 within a side
    were the victim's own explosive. No bolt hurt a team-mate - as Aurek (shots of the same team pass, no damage). Not settled:
    whether a friendly body stops the bolt in the original (Aurek's pass through).
    2026-11-21: the soldiers' damage path has no team test before the hooked 089E1FDC (089A7310 reads the message and the
    headshot only), so a bolt that touched a team-mate would have shown in the log: in the original bolts do not register
    team-mates at all (where the test skips them is not found). Aurek keeps passing them (AK_FRIENDLY_BLOCK=1 makes them stop
    shots harmlessly: Hoth 2 min 53 soldier / 13 vehicle hits against 59 / 53). Shots now remember the target they leave from
    (ak_weapon.src: a vehicle's or turret's own), so a shooter's own vehicle never stops them.
  - 2026-11-21, the tables checked: the blueprints have no armour key at all - a hit does its projectile's DamageToInfantry to
    soldiers and DamageToVehicle to vehicles and turrets (Aurek: ak_weapon / ak_projectile / play.c's saber), x the bot
    modifiers above, x the Headshot multiplier on the head. The only other damage keys are the power-ups' (Rage
    Damage_Multiplier 2, Rally Damage_Reduction 50), the ArcCaster's MaxDamage / MinDamage (80) and explosions' ExplosionDamage
    - the power-ups are not in play yet (2.3), so their damage rules go with them.

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
    - 2026-11-22, the turret's aim traced (the turret class, 089B6864 setup; 089B7F50 pitch, 089B829C yaw): each rate (+496 pitch)
      falls toward 0 by Damp x dt (both signs), gains the stick (+480 / +484) x InputDamp x dt, is held within +-MaxTurn; the angle
      (+856, or +868 by 089B7D88) moves by rate x dt, wrapped to +-pi and held to MinPivotX..MaxPivotX (+940 / +944; the yaw's
      MinPivotY..MaxPivotY +948 / +952) unless the two are equal. Defaults (vehicle base getters 089C5440..55A8, radians): PitchDamp 4,
      PitchInputDamp 10, MaxTurnPitch 3, YawDamp 4, YawInputDamp 5, MaxTurnYaw 3; the pivot limits 0. Aurek: a gunner's view turns
      by these rates (play.c, gun_yaw_rate / gun_pitch_rate), held to the pitch limits [assumed: a level base]; the limits' "equal:
      none" rule and the defaults in ak_turret.c. Still open: the driver's own aim in a tank (vehicle aim_yaw: Aurek's 2 rad/s,
      +-1.2 rad) and whether the hull's gun follows its turret.
    - 2026-11-22, the rider: open vehicles' blueprints say so - Enclosed false, Seat (the marker), AnimSit (the pose: speeder bikes
      SpeederBike_Sit_pose, Taun-Tauns Human_Taun_sitpose, the STAP Human_STAP_sitpose, the AT-RT Pilot_Sit_pose; turrets too).
      Aurek drew no rider; now the driver (the player or a bot) sits on the Seat marker in that pose, in his own look (seen on
      Endor's speeder bike and Hoth's Taun-Taun). [assumed: Enclosed defaults to true; the rider's gun is not drawn; seated turret
      gunners not yet]. Slopes: no Tank blueprint key limits them - they follow from the body against the level (3.2).
    - 2026-11-22, volleys traced: every hardpoint barrel is its own weapon (089C4A2C, vehicle +672..+684); its first wait (+48)
      is HardpointW1TimeN x its RateOfFire (+52), so TimeN is a share of the cycle, not seconds (X-wing 0 / .25 / .5 / .75 of 2 s:
      a gun every 0.5 s; T4B .1-.4 of 0.25 s). The wait runs down each frame (08A186EC, while +364 bit 1 - set from creation) and
      is set back to RateOfFire as the barrel fires (08A17C64); barrels with the same phase are marked (+364 bit 16). Aurek: the
      barrel offsets are TimeN x RateOfFire, the volley RateOfFire (vehicles and turrets) [assumed: the phases hold while held].
    - 2026-11-21, the throttle cap read: +288 is AntiBoost (the vehicle base's getter 089C5790: key h31 0x81C82D81, default -2.0,
      D_08AEEDE8; CruisingSpeed's default is 50, D_08AEEDE4) - no Tank blueprint sets it. In the tank step (089B2A04), when the
      forward speed is above CruisingSpeed and the vehicle is not boosting (+844 bit 2), the throttle is min(throttle,
      AntiBoost): a boost's extra speed is braked away when the boost ends. Built for ground vehicles (ak_vehicle.c; flyers had
      it). Not measured in the harness yet.
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
  - [x] Crash and skim rules [checked 2026-11-21]: a ~10° dive into Hoth's snow skimmed once, then crashed (the pilot dies, the wreck stays).
    2026-11-20: the crash is the collision damage of 7.2 (089CE510: 5 m/s or more into a surface costs max health x the
    impact speed x dt x 0.05 in free flight, built) - a skim is a short touch, a crash a long one. Landing (AnimLand) is not
    measured.
    2026-11-21, checked live (harness program fly_pitch from beside Hoth's snowspeeder; RS_CRASH_LOG, a hand hook on 089CE510,
    with RS_DMG_LOG): the dive ends in 160 frames of ground contact at 15.0 m/s (the stall speed), each sending the craft damage
    kind 0x9E500986 of 1.254 = 200 (Health) x 15 x dt x 0.025 (not free flight) until the 200 are gone - Aurek's rule, as built.
    089CE510's other branch (vehicle +0x1B4 set and +0x354 bit 3 clear: one 0x8080 / 0x8081 pair, a crash event, then flag
    +0x34C bit 19) never ran (+0x1B4 was 0 throughout) - not built.
  - [ ] Stunts (Immelmann, barrel roll: the EnergyStunt use). [2026-11-21: no planet flyer has EnergyStunt; moved with roll to
    space, 3.7]
- [ ] **3.4 Walkers [partial].** Measured on Hoth's AT-ST (harness: `--team empire --tp 60:264,14.8,14 --program walker`;
  boarded from its side with d-pad up):
  - [x] Its controls act 0.47 s (28 frames) late, for turning and walking alike.  [PARITY(3.4a): the cause is not found.]
  - [x] Walking is root motion: idle_to_leftfoot (0.5 s at 3.53 m/s), then the walk loop at its key slopes.  The speed is
    |root velocity| across the ground, along the facing.  Let go: it walks on to the loop's next foot point (end = left foot,
    middle = right foot), then leftfoot_ / rightfoot_to_idle.  Aurek's path is within 1 % over a 15 s run.
  - [x] Turn: starts at 0.083 rad/s, spins up at 1 rad/s² to MaxTurnYaw (0.5 rad/s), stops at 4 rad/s²; walking or standing.
    Aurek is within 1° (one frame) over a 140° turn.
  - [x] Sprint, traced 2026-11-22 (089BF9E0 / 089BF92C; setup 089BD028: WalkingSpeedScale +884, SprintingSpeedScale +888, both
    default 1.0): only when SprintingSpeedScale is above 1.0 (AT-ST 1.5, AT-RT 1.75, spider walker 1.5; not the AT-AT / AT-TE),
    with the boost control (channel 3) past 0.5 and channel 9 set (+1008 bit 0, 089BD694) [assumed: held while walking], paying
    EnergyBoost x dt (089DCE7C); the walk clips then play at SprintingSpeedScale, else at WalkingSpeedScale. Aurek: the same
    (play.c vehicle_boost, ak_vehicle.c walk_scale).  Walking backwards
    is not measured.  Turning in place, 2026-11-22: the walker's clip table is the level's ATBL chunk (AT-ST: 7 slots x 1 variant
    of clip-name hashes - idle, WalkLoop, Death, idle_to_leftfoot, leftfoot_to_idle, turnL_30, turnR_30; the AT-AT 8 x 3 with
    leftup / rightup variants), read through 089C0828 (slot, variant; 0xDB3 = none). The foot-to-turn clips and rightfoot_to_idle
    are in the files but not in the AT-ST's table. turnL_30 / turnR_30 are 0.667 s with no root motion. Aurek now loops the turn
    clip while the walker stands and turns [assumed: the clip controller at +876 that sets the slot is not followed]. Open: the
    table says the AT-ST stops only with leftfoot_to_idle, but Aurek (as measured earlier) also uses rightfoot_to_idle - recheck.
  - [ ] Gunnery, what a placed walker does at its path's end, and the ATBL animation chunks (not read).  AT-AT not measured.
    - 2026-11-21, Hoth's AT-AT measured (harness state.log, class 0x8014 id 30d44, two 2.5 min runs): it walks from its start
      node (18874, 226.99 / -9.10 game axes) to the next (18875) at about 2 m/s and stands exactly on it (196.18, -11.84) for the
      rest of the match - never on to the following nodes. The nodes' flags word (8 words from the record's end) is 0 on the start
      node and 0x80 on every other; [assumed: bit 7 = stop here - its reader not found]. No soldier rides it and no hit came from
      it in four runs (it has no gunner in the original). Aurek: the route ends at the first flagged node after the start
      (ak_path.c), the walker stands exactly on it (play.c walker_route_step; it had walked on past 196 along the next legs);
      pace 2.0 m/s, as measured. AK_DEBUG_PATH prints the nodes, AK_DEBUG_WALKER the walk.
    - The same day, the advance: Hoth's level script sends the AT-AT's waiting nodes 0x3B when the Empire takes a post (18875 for
      187EE, 18877 for 187ED, 18879 for 187EF) and 0x51 when the Alliance does (5.4 part 5: the node sets / clears its flag 0x40,
      08855908). Aurek now keeps the whole route with its nodes; the walker stops at the first waiting node (flags bit 7) that is
      not open, and moves on once the script opens it - confirmed in the harness (playing the Empire, 3 min): post 187EE went
      Alliance -> neutral at frame 2720 -> Empire at 3920, and the AT-AT left node 18875 then (at 196.2 / -11.8 until 3860,
      189.0 / -7.7 at 4160). [assumed: 0x51 shuts it again; the walker's own handler is not found]. Hoth, 4 min with bots: stops at 18875, goes on
      at 71.5 s (the Empire took 187EE), stops at 18877, goes on at 169 s, and so on.
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
    - 2026-11-21, **the extra time settled** (harness RS_VSPAWN_LOG: hand hooks on the spawner update 08A166A0 and the spawn
      08A16320): the slot frees the frame the vehicle dies (08A15E64: health <= 0 -> 999), the clock (+0x74) runs from there by
      the game's frame time and the spawn comes when it passes +0x24 (10 s): 10.0 s of game clock in 592 frames (Taun-Taun) and
      652 frames (snowspeeder) - the harness's game clock runs at 0.0153-0.0169 s a frame, which made the frame-counted 11-13 s.
      So there is no extra time in game time; Aurek's extra (1 s / 2.5 s) is gone. +0x1D (set at the start, cleared by the first
      spawn) spawns the first vehicles at once - the contradiction noted on 2026-11-20. [assumed: Aurek still waits for the wreck
      (5 s) before reusing its slot; the game frees the slot at once and the wreck is a separate object.]
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

- [x] **3.6 Secondary weapons and lock-on.** Lock-on traced 2026-11-17 (089CC77C per frame, 089CC878 the check; blueprint
  fields from 089C4A2C: LockAngle +400, LockOnTime +408, LoseLockOnAngle +412, LoseLockOnRange +416, InitialLockOnAngle +420,
  InitialLockOnRange +424; target +448 (999 none), last target +452, timer +464, locked +468).  A new target resets the timer.
  While building, the target must pass the check within InitialLockOnRange / InitialLockOnAngle (1000 m / 30° in the base
  blueprint) each frame, or the timer resets.  The timer grows by dt, clamped to LockOnTime; at LockOnTime the lock holds
  while the check passes within LoseLockOnRange / LoseLockOnAngle.  Aurek now does this; it used LockAngle (15°) while
  building.  The candidate test (089CA734): the angle to the target (acos of the clamped dot) under LockAngle - as Aurek's choice.  Was: Verify HardpointW2 and the lock rules against the original. The docs list them as
  "not yet" (stale).
  - 2026-11-22, the rest traced: 089CC77C runs only for a tracking weapon or one whose projectile is Proton_Bomb (0xF968C3BB),
    else the timer and lock clear. The check (089CC878 / 089CC92C) measures the range from the vehicle (+244) and the angle
    from the aim; once locked it uses the LoseLockOn pair, bombs the Initial pair still. The vehicle getters' defaults are 0
    (LockOnTime, both ranges and angles) and 5 degrees for LockAngle (0x08AEEE80): no ground vehicle sets them, so ground
    vehicles never lock (none of their secondaries track anyway). The Weapon's LockonTime (homing missiles 3) is not the
    vehicle's: the A-wing locks in its own 2 s. Aurek follows all of this (play.c vehicle_lock / vehicle_lock_check; it had
    defaults 2 s / 45 / 30 degrees, a 300 m fallback and the weapon's time). HardpointW2 per vehicle checked against the
    blueprints (akbp); the beams, mortars and the self-destruct still wait on 2.3.
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
- [x] **4.3 Turret AI [done 2026-11-21].** States NEUTRAL / SEARCHING / ORIENTATING (0x08B1B6AC) and who aims.
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
    - 2026-11-21, the target record: a turret is a vehicle, and every vehicle's AI pilot (08957080, vtable 0x08AF9390) makes the
      vehicle sensor (0895FD14) at pilot +0x2C; the turret node 0x422 (built by 0894FF20; update 089502F0) reads its best record
      (pilot +0x2C -> +0x18 -> +4, 089577A8) as GENERAL_COMBAT does. So turrets pick by the sensor's score (08960750, 4.6).
      **Engine:** turrets score their candidates so (AK_TURRET_SCORE; 0: the nearest, as before) - on Hoth the picks did not
      change in a 2 min run (one candidate at a time).
    - Who fires and which sensor fills the target record are not read (the sensor classes are built in 0895FD14..08961784;
      the soldiers' is 0x08AF96F0, see 4.2).  Aurek's turrets keep their own pick (nearest it can point at and see).
    - 2026-11-21, closed: both answered above (the sensor: the pilot's vehicle sensor 0895FD14; the trigger: 0894FFF8 with the
      record's range / 7.5 degrees). The want flag read (0895076C): +0x22 is set at once for any target that is not a flyer,
      walker or tank, and for those when the lead (the vehicle's vfunc +0x68 with the shot speed 1000) has a solution - so there
      is no aim delay; the gun's turn into the cone is the only wait. Aurek's 0.6-1.0 s aim time before firing is gone (play.c).
- [x] **4.3b Auto-gunners [not original; requested 2026-11-21; done 2026-11-22, part 70].** An opt-in setting (AK_AUTO_GUNNERS, off by default so parity
  builds stay faithful) that lets the AT-AT and every turret target and shoot enemies on their own, with no gunner. Note: the AT-AT
  standing still for a whole match is original - it moves to the next waypoint only once the Empire holds the post near it
  (Hoth's script opens the node; it never walks back), see 3.4.
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
  - 2026-11-21, the shooters' movement measured. Original (harness, Hoth 2.5 min, RS_DMG_LOG hits against the shooters' positions in
    state.log, +-3 report steps): the shooter's ground speed at the moment of each hit (176 hits) is 0 / 0.08 / 2.24 / 5.0 / 8.2 m/s
    (10 / 25 / 50 / 75 / 90 %) - a quarter stand still, others walk at the 5.0 mode or run at 8.5. Aurek (AK_LOG_HITS, its bots'
    positions every 0.1 s, 2.5 min, 154 hits): 0.42 / 0.85 / 2.7 / 4.3 / 7.1 - the same middle, but Aurek's fighters never stand
    fully still (its own 0.55 strafe drift) and run a little slower at the top. Next: trace what the original's fight node does
    with the move vector (stand while shooting?).
  - 2026-11-21, the soldiers' attack node read (order 0x47E: built by 08942834, its trigger record 40 m / 7.5 degrees by 089428DC,
    update 08942BBC, state switch 08943378; the target is the sensor's best record, its id at controller +0x100): state 0 measures
    the way to the fight point (+0x28) against 400 (20 m) and goes to 1 or 2 (the compare is VFPU code - which way is not read);
    state 1 runs a child move order 0x480 to the point with +0x70 = 20 m (D_08AED988, 0894483C), and every 1 s (D_08AED970)
    moves the point when the target has moved more than 2 m (4 = 2^2, D_08AED974; 08944AEC); state 2 measures the way back to
    +0x34 against 625 (25 m); state 3 waits 5 s (D_08AED97C); 4 ends. So a fighting bot closes to within 20 m of its target and
    holds - the standing quarter measured above. To port: the 0x480 node (0894434C family) and the VFPU compares' directions.
  - 2026-11-21, the compares settled in the recompiled C (FCMP cond 12 = less than): state 0 goes to 1 when 400 < d^2 (farther
    than 20 m), else 2; the re-aim moves the point when 4 < moved^2; state 2 goes back to 1 when 625 < d^2 from the firing point
    (+0x34: 08943020 picks it each frame - a navigation point near the target on the bot's side, 0895E3A4, or the target point).
    Built (AK_BOT_ATTACK_NODE): approach to 20 m, stand 5 s, then stand while the target is within 25 m, else approach again.
    Measured with it on for every bot with a target (Hoth 2.5 min): shooters' speeds 0 / 0 / 0 / 3.9 / 6.7 m/s and 354 hits
    (155 off) - too still against the original's 0 / 0.08 / 2.2 / 5.0 / 8.2 and 176 hits: the original's soldiers also fire on
    their way under other orders (the trigger node runs under any order). Left off by default until the order's choice is traced
    (who gives 0x47E: the squad / goal logic).
    Read on: 0x47E is started only by node 0x44D (built by 089435A4; update 08943644, states 089437D8): state 1 runs child 0x47F
    and switches to 2 (child 0x47E, the attack) as soon as the sensor has a record (0895FEF8), back to 1 when it has none. 0x44D is
    started only by goal 0x41F (built by 0894EE6C; 0894EEFC: its state 3 starts 0x44D, and states 2 and up lead to 3) and by the
    factory 0895A97C. So soldiers attack - approach and hold - only under goal 0x41F; which goal that is (its name) and how often the
    squads give it (against "go to the post" goals, under which they fire on their way) is next, with the 0x47F child.
  - 2026-11-21, measured (harness, new RS_ORDER_LOG: hand hooks on the child-node maker 08955410 and the factories 08959F30 /
    0895A97C; Hoth, 2.5 min, idle player): the nodes started were 0x3F2 46 times, 0x48B 14, 0x48A 8, 0x489 7, 0x480 4 (+4 as
    goal nodes), 0x456 4, 0x3F0 3, and one each of 0x41E / 0x44F / 0x481..0x483 / 0x457 / 0x3F5 - never 0x41F, 0x44D, 0x47E or
    0x47F. So conquest soldiers do not use the attack node at all: they fire on their way under their movement orders, as Aurek's
    bots do; AK_BOT_ATTACK_NODE stays off (it is right off). The standing quarter of the shooters comes from elsewhere (holding at a
    post, the 0x48x nodes?) - next: what 0x3F2 and 0x489..0x48B are.
    0x3F2 is the soldiers' move order (08930C94, base 08931D8C - the 0x3F0 family); 0x489 / 0x48A / 0x48B are three states of
    one node (089528F8: 0x48A first, 0x489, then 0x48B with a sensor hold-off 089601D4). Tried: Aurek's fight drift off
    (AK_BOT_FIGHT_DRIFT=0: full move speed, no strafe) - its shooters then never stand (4.1 / 4.5 / 4.8 / 5.0 / 6.4 m/s, 226
    hits); with it on 0.4 / 0.85 / 2.7 / 4.3 / 7.1 (155); the original 0 / 0.08 / 2.2 / 5.0 / 8.2 (176). Left on until what
    0x3F2 does on arriving (the standing) is ported.
  - 2026-11-21, all the bots' speeds (not just at hits; 0.5 s samples): original 0 / 0.61 / 5.1 / 8.4 / 8.5 m/s, Aurek 0 / 2.7 /
    5.4 / 8.2 / 8.4 (10 / 25 / 50 / 75 / 90 %). The original's bots stand still more: of its 1002 standing samples (under 0.3 m/s),
    182 are within 10 m of a post, 607 within 10-30 m, 213 farther; the stops last a median 1 s, a few 6-18 s. Next: where in
    0x3F2 / the squad's orders those stops come from (the order's end and the squad's next order - the 1 s ones).
  - 2026-11-21, the squad move: 0x3F2 is re-given to a squad's members every ~0.5 s (RS_ORDER_LOG: gaps 0.1-0.5 s, a quarter
    ~20 s). Its update 08932300 re-slots the members every 1 s (D_08AED5F8): member k's point = the squad's destination +
    (r sin t, 0, r cos t), t = the slot's angle + the squad's heading (08991E44, the formation entry k: radius +4, angle +8 of an
    8-byte table) - sent as message 0x8035 (08931BAC); every 2.5 s (D_08AED5FC) 0898D4F0. So members walk to formation slots
    around a moving point and stop when there - the original's short stops. The formation table's live values were not found
    yet (the peeked squad block +100 held a pointer; its words read +-0.3 / -1.8 pairs - likely the slots, layout unsettled).
    Read live the same day (RS_SLOT_LOG: a hand hook on 08991E44; Hoth, every squad alike): slot 0 the point itself (0, 0); 1:
    2.5 m at 0.785 (45 degrees); 2: 2.5 m at 5.498 (-45); 3: 2.5 m at 3.142 (behind); 4: 5.0 m at 3.142 - a wedge: the leader at
    the point, two 2.5 m out at the front corners, two behind (2.5 and 5 m). Game axes: + (r sin t, r cos t) on x / z with t =
    slot angle + the squad's heading. To port: Aurek has no squads (each bot picks its own post and hold point) - squads (sizes
    from 08926220's table 0x08AD9888, ten slots) are the next piece, then the formation on the squad's point.
  - 2026-11-21, **squads ported** (AK_BOT_SQUADS=1). 08932300 read: on start the leader (slot 0) gets the move message 0x8035
    to the squad's goal (0898D4F0, with the squad's node +80); every 1 s (D_08AED5F8) members 1.. get 0x8035 to the slot around
    the squad's point +88 with the heading +84 (999: no node); the order restarts when, 2.5 s (D_08AED5FC) after it started, the goal
    has moved more than 3 m (D_08AED600) - a moving goal (a carried flag) [Aurek: the leader re-picks its own way]. The point read live moves with the squad at 5-8.5 m/s and its
    heading is atan2(dz, dx) of that motion (game axes) - so the slots' (r sin t, r cos t) mirror the wedge about 45 degrees.
    Aurek: sides split by the table (row = the side's bots, clamped 16; the player not counted [assumed]); the first member alive
    on foot leads (heroes and bots bound for a vehicle act alone [assumed]); members re-slot every 1 s around the leader's position
    [assumed: +88 is the leader's position], route there when over 12 m away, and stand at it. Three seeds each (AK_SEED now seeds
    the bots too; runs vary a lot by seed): all bots 0.28 / 2.6 / 6.2 / 8.3 / 8.4 m/s (without squads 0.27 / 3.0 / 6.9 / 8.3 /
    8.4; original 0 / 0.61 / 5.1 / 8.4 / 8.5); shooters 0.22 / 0.87 / 2.6 / 3.9 / 5.9 (without 0.63 / 2.5 / 3.6 / 4.9 / 7.2;
    original 0 / 0.08 / 2.2 / 5.0 / 8.2). Fight drift off with squads: shooters 0.4 / 4.8 / 5.7 / 8.2 / 8.4 - it stays on.
    Still open: the original stands more (its 25 % is 0.61): what the leader does between goals (0x48A / 0x489 / 0x48B).
  - 2026-11-21, the leaders' destinations read (RS_MOVE_LOG: a hand hook on 08931BAC, the 0x8035 message; Hoth 2.5 min, 101
    leader messages): a squad's leader is sent either to a command post exactly (node id = the post's, 100443..100445) or, for a
    frame or 25 before that, to a point with no node (999) 13-23 m from a post - the squad's own position as its order starts.
    So the leaders walk to the post itself, as Aurek's do (Aurek: a spot within 3 m; the posts' nearest navigation nodes are
    0.9-4.5 m from them). Standing in Aurek is mostly at posts (of its standing samples 53 % within 10 m of one, 10 % at 10-30 m,
    36 % farther), the original's mostly 10-30 m out (18 / 61 / 21 %) - so the original's extra standing is not at the goal.
    The nodes 0x48A / 0x489 / 0x48B are the three states of node 0x457 (built by 0895264C, vtable 0x08AF90A0, update
    089526EC, switch 089528F8): state 1 runs 0x48A while there is no sensor record, 2 runs 0x489 when there is a record but no
    target (controller +0x6C = 999), 3 runs 0x48B once there is a target - to a navigation point near it (08952CA0: the target's
    node, three tries over a table at 0x08B204A0, the soldier's +0x120 radius) - and on leaving 3 the sensor is held off
    (089601D4, D_08AEDCF0) and the target cleared. On Hoth 0x457 started once in 2.5 min (its states 29 times): a rare goal,
    not the squads' standing. Next for 4.4: where the original's soldiers stand 10-30 m from posts - fights on the way
    (whether a soldier under 0x3F2 stops to shoot; the 0x3F2 member's path node with a target) [open].
  - 2026-11-21, settled: the path node 0893D4E8 does not stop for a target - its only early returns are a soldier riding
    something (its id found in the list D_08C2A6C8 with 089DD858: +0x58 -> +0x38 set) and no health. The original's standing
    measured again (harness Hoth 2.5 min, state.log soldiers, player left out): 29 % of 0.5 s samples, and a third of it is a
    few long waits - 98 s beside the vehicle at (-168, 174) (class 0x8004), 70 s and 30 s at (262, 12) (beside Hoth's AT-ST, centre 261.98, 13.97), 19 s, 15 s; without
    waits over 10 s the original is 0 / 2.67 / 5.0 / 8.5 / 8.5 m/s (20 % standing) against Aurek's squads 0.28 / 2.6 / 6.2 /
    8.3 / 8.4 - the lower quartile now matches. What is left: the long waits (a soldier sent to a vehicle it never boards - the
    order 0x8037 has no time limit; Aurek keeps the vehicle's reach and gives up when the seat is taken) and the 5.0 m/s mode
    (the median: Aurek's bots slow to 5.0 within 40 m of an enemy less often) [open, minor].
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
  - 2026-11-21, the match time limit (traced, read live): 089722C4 copies the option 08979DB4 (offline D_08C294C4 = 60, minutes;
    0 online and in mode 5) to D_08C28F58; 08972964 ends the match once the time D_08C28F44 reaches it x 60 s: the side with the
    higher score (the score object 08988228 +0x24 / +0x28, 0 in conquest) wins, then the one with more tickets (+0x1C / +0x20:
    read live 100 / 125 on Hoth), else a draw (4). Aurek's conquest had none (CTF did): now AK_TIME_LIMIT (60 minutes; the Vita /
    3DS settings.txt list it). The option's own name confirms it (08978CEC registers D_08C294C4 as "BFF_TimeLimitSinglePlayer":
    "Time limit for each round (in minutes)"; also BFF_MinPlayersSinglePlayer = D_08C294D0, the 16 units). Also found: the defaults block 0897782C (base 0x08C2933C) sets +392 / +396 / +400 to 60 and +404 /
    +408 to 16 (the unit count) - the "60" there is this time limit, not the AI soldiers' health (1.15b still open).
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
    2026-11-21, flag messages and vehicles: the only CTF text is "%s captured the flag" (STDTEXT 0x1B4), queued by 089EADD4 on
    message 0x8082 (not in the campaign) with the carrier's name - green when the carrier is the player's side, red otherwise
    (08A4EDDC channel 1 / 2); the player's own capture also gives award 0x2B. A flag carrier cannot board: the boarding refusal
    08A0AF14 shows "You cannot use this while carrying a flag" (0x11D; 0x167 in the campaign) for its reason 2. Built: the capture
    message (viewer.c, ak_ctf last_capturer) and the refusal for the player (tip box) and the bots (bot_take_vehicle). Found and
    fixed on the way: bots never (re)spawned and the player could not respawn outside conquest - the spawn tests read the
    unlimited tickets (-1) as none left; Endor CTF2 now has bots taking and capturing flags again (a capture at 91 s).
    2026-11-21: kill boxes done (1.9b): a dropped flag at rest in one returns after 5 s (089F6658, D_08ADEAA8; in space 0 s when
    outside every bound box - not built).
    2026-11-21: 0x7E779B80 is the h31 of "backpack" - the soldier models' HMPT marker "BackPack" (on Hoth's soldier models with
    Chest, Head, LeftHand, gun, ...). Aurek now hangs the carried flag on the carrier's BackPack marker, playing its
    flag_Flapping_Backattch clip (Endor CTF2 frame: the flag on the trooper's back). [assumed: the marker's own orientation as is -
    not compared with an original frame yet]
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
  - Part 6, 2026-11-21 - **Galactic Conquest rules, first slice** (game/ak_gc.{h,c}; test `akbp COMMON.ASR -gc SEED [TURNS]`).
    Traced: the planet table 0x08B1C34C (16 x 44 bytes: STDTEXT name 74-89, sector, neighbours, credit bonus, space / ground
    level), sectors 0x08B1C60C (STDTEXT 90-93, bonus; keys Expansion / Corporate / MidRim / OuterRim), the getters 08A43264-
    08A436C0 (live values via RS_GC_PROBE: caps 50 / 80 / 100 - MaxLevel1-3 looked up in Costs -, costs 300 / 500, 500 / 1000,
    500 / 700, commanders 700 / 500 / 300 / 500, credits 500, extra planets 3, homes 150, others 40, max home 150, the battle
    bonuses), the new game 08A377D4, income 08A391D8, sectors and commanders 08A3B590, tech / commander buying 08A39AAC /
    08A39BA0 (commander 2 halves both prices), troop buying (08A386C4 state 3: at home, 1 credit each, tens), the move 08A39FDC
    (own planet: room cap; neutral: occupied; enemy: battle, the attackers leave at the confirm 08A3A1D0), the turn's states
    (08A38138: 1 treasury, 2 next side, 3 purchase, 4 move, 5 battle, 6 battle sim, 7 results, 8 reinforce, 9 game over),
    the auto-resolve 08A3A47C (tick 0.01 s, D_08B1C2D8), the battle level 08A3A2B8 and the results 08A3A5CC. Open: the menus and
    map screen (GUIMENU/BFF_GALACTICCONQUEST.GUI pages MP_TechPurchase, MP_Quit, MP_Win_*, MP_ConfirmQuit; the map itself
    is drawn by code 08A44xxx-08A4Axxx), the GC AI (08A3D8A0 / 08A3E044 / 08A3F708 / 08A3FB1C; tuning 0x08B1C308: optimism
    0.62, min attack probability 0.45, treasury 0.25, planet / region credit 0.85, ...), played battles (troops become the
    match's reinforcements DAT_08C29330 / 34; survivors from 0x08C28F88), Thrawn / Ackbar's second attack (+0x7F / +0x80),
    draws (08A3BE90 picks the side) [assumed: the attacker], the RNG seeds [assumed], saving (08A37D04 / 08A37E54), medals.
  - Part 7, 2026-11-21 - **GC AI ported** (game/ak_gc_ai.{h,c}), 798 / 800 random boards give the game's own plan (RS_GC_AI_TEST
    / RS_GC_AI_SEED / RS_GC_AI_TAKES in the harness, compare with `akbp COMMON.ASR -gcai LOG`). Left: 2 boards (seed 11, boards 94 /
    648: in both, 08A3E5E4 of a plan without attacks reads its "interior before" flags from stack left-overs - board 94 shows them
    set where Aurek assumes 0; the spot is shared with 08A3FB1C's lose-both board (+192), but modelling that alone did not fix it), the plan's executor
    (AI player 08A42500), and rules corrections for ak_gc: troops are bought at the selected own planet (08A38C90 sets +0x3C from
    the cursor), reinforcing needs a source with 11+ troops and an own neighbour and an own, not full destination (08A3B36C-
    08A3B518) [assumed: adjacent]. Thrawn / Ackbar's second attack and the draw rule are still to trace.
  - Part 8, 2026-11-21 - **second attacks, draws, played battles** (see NATIVE_ENGINE 2026-11-21): the commander-3 sector rule,
    draws to side 0 unless AI-played (10 troops), battle tickets = troops by faction class with the script's additions ignored
    (AK_GC_TICKETS), survivors = tickets left. Open: the AI player's plan executor (08A42500: purchase sub-states, cursor moves,
    the reinforcement use of the plan's +0xB0 / +0xB4), the GC screens (map, purchase, tech pages - 08A44xxx-08A4Axxx, GUI
    BFF_GALACTICCONQUEST), wiring a GC battle into play (level from ak_gc_battle_level, faction, result back), saving.
  - Part 9, 2026-11-21 - **AI player ported** (ak_gc_ai_turn, 08A42500) and play's GC battle result (play.gc_result). Open: when the AI
    attacks the player, the player picks fight / auto-resolve (sub-state 3 waits on the pad); the GC screens; the GC game flow in
    the front end (new game, turns, battles started from the map, results back, saving); [assumed] a planned troop buy on a full
    planet is skipped (the game's press fails there - whether the AI then loops was not checked).
  - Part 10, 2026-11-21 - **the GC map is a level**: FE_StartGalacticConquest (08A2EE38, registered by 08A29690) calls 08A3C574 and
    switches the game to state 6; the map scene is ENVS/GC.PSP: ENTI type 7 placed models - Galaxy (-1.1 17.1 2.0, game axes), the
    15 planets by name hash (the same hashes as 08AE4DC0), Alderaan as Asteroid_02 pieces, Geonosis_Ring - and an ENTI 0x29 (a
    camera? floats 3.11 / -47.4 / 3.39 ...), plus hero / ship models (ObiWanEp3, jangofett, Slave_1) and their clips. Aurek now
    loads GC.PSP (label "GC"; the file has a 44-triangle Env and no environment material list, which the loader accepted only as
    a failure before). Open: it draws as a white screen (the untextured Env faces / fog); the map camera and its moves between
    planets (BFF_GC_GUI_13-15 Next_Planet 0.39 / 0.79 / 1.57 rad), the 2D overlay drawn by 08A44xxx-08A4Axxx, the pages of
    BFF_GALACTICCONQUEST.GUI (MP_TechPurchase, MP_Quit, MP_Win_*, MP_ConfirmQuit) and BFF_SINGLEPLAYER's MP_GalacticConquest
    (GC_RequestPlayerFaction, FE_StartGalacticConquest).
  - Part 11, 2026-11-21 - **the original's GC screen captured** (harness `drive.py --route gc --program gc --keep`: Single Player ->
    Galactic Conquest, cross every 3 s; docs/gc_original_harness.png): loading screen with a hint, then the map seen from above -
    the galaxy image and stars behind, the planets with red / blue owner halos, the sectors as rounded translucent shapes (the
    player's sector tinted blue), home planets with a commander badge and a name tag, "PHASE Treasury" / "PHASE Purchase" top
    left, "CREDITS 630" top right (500 + 80 planets + 50 sector, as ak_gc's rules), the treasury panel (Player / Credits
    Received / Planets / Sector(s) / Total), a planet panel (name, its credit bonus) and the button bar (Troops Overview, Buy
    Tech/Comm, End Phase). Aurek: GC.PSP's level camera is ENTI 41 (position 3.11 -47.45 3.39, looking down +y; seen with
    AK_CAMERA="3.11,47.45,-3.39,3.1416,-1.5707" the layout matches - docs/gc_aurek_vs_original.png); the Env shell is not drawn
    [assumed: the original's picture shows none]. Open: the map camera's field of view (the original is about 1.5 x closer /
    narrower), the black clear and star background (stars_4.tga), the halos, sector shapes and every 2D element (08A44xxx-
    08A4Axxx, gc_elements textures), then the flow.
  - Part 12, 2026-11-21 - **GC map camera measured** (harness RS_PROJ_LOG / RS_VIEW_LOG on the GC map): projection x 1.30326,
    y 2.29986 (47 degrees high, 75 across, the PSP's 480 x 272), near 0.25; view: eye at game (0.214, -50.31, 2.71), looking down
    +y tilted 5 degrees (forward (0, 0.9962, -0.0867)), up -z - not the level's ENTI 41 (3.11, -47.45, 3.39). Aurek's viewer uses
    them for the GC level with a black clear; the planets now sit where the original's do (docs/gc_aurek_vs_original.png).
    Textures for the overlay in GC.PSP: GC_Planet_Corona.bmp (the halos), GC_Counter_Icons, GC_Tech_Elements(_02/_03),
    GC_Alliance / Empire_Commanders (+ _Greys), the PSP button icons; stars_4.tga for the star field. Open: the sector shapes
    (no texture - drawn by code), halos, the 2D panels and text, the stars.
  - Part 13, 2026-11-21 - **GC overlay, first slice** (engine/app/gc_screen.{h,c}, drawn on the viewer's "GC" level): a new game
    (AK_SEED, AK_GC_FACTION) and the player's first treasury; the planets' places from the level's placed planet models
    (Alderaan = its asteroids' mean); owner halos from GC_Planet_Corona.bmp (its brightness as alpha, blue for the player, red
    for the enemy, behind the models) [assumed: 20 px radius, colours read off the screen]; the header "PHASE <phase>" and
    "CREDITS n" from TEXT/GALACTICCONQUEST.ASR (0x37, 0x00-0x03, 0x35). The panel primitive 08A4A868 is a switch over ~40 panel
    kinds, each a UV rectangle of the gc_tech_elements atlases (constants 0x08AEFF14..0x08AF001C) - next to port, with the
    treasury panel 08A4656C, the sector shapes, name tags, home badges, the button bar and the phases' input.
  - Part 14, 2026-11-21 - **the GC overlay from the original's own draw list** (harness RS_SPRITE_LOG=F0-F1: every 2D sprite
    088CF194 - rect, uv, colour, texture, its index in GC's texture table 0x08B1C85C - and every text call 088CC808, on the GC
    map). The table (08A4CBCC): 0 corona, 1 square, 2 triangle, 3 cross, 4 circle, 5 L1, 6 R1, 7 select, 8 start, 9-11
    GC_Tech_Elements(/_02/_03), 12-15 the commanders (Alliance, greys, Empire, greys), 16 GC_Counter_Icons; fonts are textures
    1 (small, 16 high) and 2 (big, 21). Ported in app/gc_screen (AK_GC_PHASE=1 shows purchase): the header bar (0..480 x 23,
    0x60000000), PHASE / phase at x 5 / 60, CREDITS at 360, the credits (sign 0xBC) in yellow; the planet panel (5,25 - 123,114,
    Tech_Elements_02 uv 0.457,0 - 0.918,0.348, 0x99FFFFFF; name big at 12,30; credit icon / bonus / CREDITS; troops icon / count /
    TROOPS); home planets' badge (24 x 18 over the planet) and name tag (66 x 16 under it, row 0.5078 the player's, 0.6875 the
    enemy's); the button bar (249..272, icons 16 x 16 at 2 / 157 / 296 with labels 0x7F / 0x40 / 0x41). Open: the panel shows
    blue where the original's is green (texture colours or a faction choice); the treasury panel; where the cursor starts
    [assumed: the first own planet]; the sector shapes and halos are not 2D sprites (3D) - next to find.
  - Part 15, 2026-11-21 - **sector shapes and halos (3D)**: the sectors are SHAP hulls (GC.PSP, four) placed by ENTI type 7 with no
    mesh - inner outline + outer outline; fill = faces on the inner outline, rim = faces joining the two. Drawn translucent white,
    blue / red when one side holds the sector [assumed: measured colours]. Halos: 08A4AF9C -> 08A4D00C(1.5, colour, planet, 0):
    blue (0,0,1) side 0, red (1,0,0) side 1, hidden on neutral; now additive camera-facing squares, half-size 1.5 world units
    [assumed]. Matches the original's screen (docs/gc_sectors_halos.png). Open: the cursor ring, the star field, planet brightness,
    the panel colour, phase panels, input and the turn flow.
  - Part 16, 2026-11-21 - **a playable GC turn (first pass)**: ak_gc_screen_update drives treasury -> purchase -> movement ->
    reinforce -> the AI's turn -> treasury on ak_gc's traced rules; battles auto-resolved for now; the cursor is the original's
    pulsing size-2.0 flare (08A4B0DC, pulse 08A4D128). [assumed]: buttons beyond the bar labels, the count panel, the cursor cones.
    Also found: GC.PSP's "yellow/green/blue/red_surround" RSCF type-0 resources are per-sector meshes keyed by the SHAP hashes (the
    sector outlines' own meshes - names are not colours); not used yet. Next: the tech / commander page (MP_TechPurchase), battles as
    matches (ak_gc_battle_tickets -> play -> gc_result -> ak_gc_result), the panel colour (CLUT), front-end entry.
  - Part 17, 2026-11-21 - **tech page and battles as matches**: MP_TechPurchase opened over the map with the GC state bound
    (frontend.c gc_* overrides; the info line traced from 08A44E40 incl. its constants 20 / 10 / x100); purchases through
    GC_Purchase*. Attack plays the battle as a CQST match with the troops as tickets and returns its result to the map
    (ak_gc_result). Harness: drive.py program gc_tech (square at 9 s, then the d-pad / cross / circle). Open: Empire portraits,
    greys, focus brackets, the opponent's page, results pages.
  - Part 18, 2026-11-21 - **GC entry + panel colour investigation**: MP_GalacticConquest -> FE_StartGalacticConquest (08A2EE38)
    opens the map (auto-click on no saved conquest). Panel colour: the planet panel sprite (088CF194, all 4 corners logged with
    RS_SPRITE_ALL) uses GC texture 10 at u 0.457-0.918, v 0-0.348; the GC_Tech_Elements_02 in VRAM (0x0A589230, decoded from a
    RS_MEMDUMP heap with its CLUT from RS_CLUT_DUMP) is identical to Aurek's (green left, blue right) - so that region is blue, yet
    the harness frame shows green. In frame 1400 no draw binds 0x0A589230; 0x0A599AD0 (_03, all green) is bound once. Unresolved:
    which texture GC id 0x36 really is (08A4CD68 -> 0883A334 name lookup). New harness hooks: RS_CLUT_DUMP, RS_TEXBIND=frame
    (gu_native and ge paths), RS_SPRITE_ALL. Next: log the 2D sprite batch's texture address at its flush.
  - Part 19, 2026-11-21 - **planet panel colour settled (blue)**: traced the sprite's texture end to end in a memory dump of the
    running original (RS_MEMDUMP 1500): GC's table entry 10 = id 0x36 (08A4CD68 -> 0883A334 makes a name node per request, ids
    handed out downwards: 0x40 corona .. 0x30 counter icons); 089072C8 -> 0890C3C0 -> 0890C53C binds the texture header
    0x08BD394C[id]: id 0x36 -> header 0x0A589210 = pixels 0x0A589230 (GC_Tech_Elements_02), CLUT 0x0A599640; id 0x35 -> _03 at
    0x0A599AD0. Those pixels with their CLUT are Aurek's texture (green left half, blue right), and the sprite's four corners
    (RS_SPRITE_ALL) take u 0.457-0.918: the blue half. So the original draws the panel blue as Aurek does; the harness's green
    frame is the harness renderer's doing (its texture cache, not the game) [the harness issue is not chased further].
  - Part 20, 2026-11-21 - **opponent's tech view, focus brackets, quit / save / resume, the win pages** (see NATIVE_ENGINE).
    Open in 5.4: the battle results pages between a battle and the map (state 7 Results, 0x5C-0x5F texts), the AI turn's
    on-screen report ("Your opponent is making his move" 0x07, its purchases 0x62..), the troops overview (select), the original's
    profile save record and medal award; the harness's green panel (its renderer, not the game).
  - Part 21, 2026-11-21 - **5.4 done (Galactic Conquest)**: map, rules, AI, player turn with the original's panels, tech page,
    battles as matches, results, the opponent's turn on screen, Troops Overview, sector close-ups, quit / save / resume, win pages,
    front-end entry. Remaining [assumed] details are listed in NATIVE_ENGINE's 5.4 rows (label places, paces, neutral panel
    colour, 'CPU' text table, the save format).
  - Part 22, 2026-11-21 - **campaign, first slice**: entry from MP_Campaign into CAMPAIGN/<level> in mode CMPN; tips 0x801D /
    0x8023 shown. Next: the objectives (MISSIONOBJECTIVES.ASR; which message sets the line), the 0x8013 markers (ring + chevrons),
    named objects (type 3) and cut-scenes (CUTS), 0x8017 / 0x8021, the level's end and the next level (0x08C29918 + 1), the HUD
    without tickets in the campaign [to check], the difficulty-gated ticket messages (08979DF4).
  - Part 23, 2026-11-21 - **campaign objective line**: 0x8013's flags word (089F0924) bits 5-16 = the MISSIONOBJECTIVES.ASR id
    (0xFFF = none); messages 3 / 4 activate / deactivate. The latest active objective's text is shown persistently in the bottom
    box of HUD style 4 (matches the original's training frame; 'latest activated wins' [assumed]).
  - Part 24, 2026-11-21 - **training start**: the player's start / moves (type 68 -> type 69 point, message 0x53), condition kinds
    0 (sprint) and 1 (in the air), the nodes' own tips, tips that stay, the objective line's 10 s repeat and its end on 0x8008 /
    0x8009. Next: cut-scenes (0x14 {hash} to type 38, CUTS), kind 10 (view mode 0x08C29B58), the lock-on page with Press X,
    the marker ring / chevrons (the type-7 model linked from 0x8013), no ticket counters in the campaign HUD [to check].
  - Part 25, 2026-11-21 - **cut-scenes (timing), type-38 listeners, the X page**: done as in NATIVE_ENGINE. Next: the cut-scene
    camera (the '_cam' animations: Characters\\Cutscenes\\<level>\\*_cam.ASR) and actors (the recon droid model and its path),
    the speech (sounds\\speech\\en\\cutscene\\*.wav), the recon droid left in the courtyard (0x8010 {0, 2} to 189ac, a 0x8009
    class), the lock-on step after the page, kind 10 (view mode 0x08C29B58 from 0x08C29394 via 089719A0 / 08979CA0 - a 1.1 s branch
    to the tip 0x14D), the button glyphs in tips (\\ue809 drawn as a shield, the original 'R').
  - Part 26, 2026-11-21 - **cut-scene camera / actor / width events, the objective ring, the X page traced, the lock-on step**:
    in NATIVE_ENGINE. Found next (harness cmpn_train, RS_FIRE_LOG, /tmp/ct8): after X the node 18bbb (kind 2, tip 0x8A "Hold R to
    lock onto a target") passed when R was held - kind 2 = the lock-on, as ported; then objective 18c46 and tip 0xBC "Press X to
    shoot"; the recon droid is the unit of the 0x800D spawner 18bd8 (the script's 3 after the cut-scene starts it); its death
    fires the spawner's group 20 -> 18c46 0x8009 -> group 58 (the pages 0x195 yellow arrows / 0x196 command posts, 0x8010 {0, 1}
    to 189ac, 0x800A to 187f9, the capture step's tip 0xBD). Next: script-started 0x800D spawners with their death event, the
    recon droid as a unit (its blueprint), 0x800E (to 18c48), 0x8010 (to the 0x8009 class 189ac), the chevron over the ring, the
    cut-scene speech and multi-key tracks.
  - Part 27, 2026-11-21 - **script-started spawners, the recon droid as an enemy, no armies / tickets in the campaign**: in
    NATIVE_ENGINE. Next: why the droid is not seen in front of the player (draw / place - compare with /tmp/ct8 frame 5000, the
    original's object 30d48 at -24.90 -8.67 199.57), its drift toward the player (its AI), the shield, then the kill -> group 20 ->
    group 58 (pages 0x195 / 0x196, 0x8010 / 0x800A / 0x800E), the chevron over the ring, the command-post step.
  - Part 28, 2026-11-21 - **the recon droid's patrol path** (in NATIVE_ENGINE). Open: Aurek's droid is drawn in the frustum but
    not seen (compare with the cut-scene's draw of the same model, which shows) and hits stop at 6 - check depth / draw order /
    the level's visibility, then the kill -> group 20 -> group 58.
  - Part 29, 2026-11-21 - **the droid killed (locked shots at vehicles aim at their middle), speech lines (type 62), the two-hash
    listener; the training reaches the post capture and the jetpack line.** Next: the jetpack step (page 0x197, objective 18bc2,
    18cbc; the customisation menu at a blue post: the JETPACK in SPECIAL ITEM), the remaining tips / objectives, 0x800E / 0x800A /
    0x8010, the chevron over the ring, cs_tank_entry / cs_scout_entry (multi-key tracks), the droid's shield and size (1.5x?).
  - Part 30, 2026-11-21 - **multi-key cut-scene tracks, the objective text table, the jetpack step reached in the harness.**
    The customisation menu's Special Item list (harness /tmp/ct10, ct11): None in the middle, above it Wrist Rocket (20) and more
    further up (the JETPACK, 30 by its Cost), below 10 (a med kit?) - one up from None is the Wrist Rocket. Node 18cbc (kind 8: the
    held item's +0x7C byte) waits for the jetpack. Next: cmpn_train to go up to the JETPACK (two or more ups), see what passes kind 8
    (choosing it or using it - page 0x8B "Double-tap L to activate jetpack", 0x94 / 0x164 rise / descend); build the jetpack (2.3:
    the Weapon blueprint Jetpack <- Packs: HORIZ_SPEED 10, VERT_SPEED 8, VERT_ACCEL 2, HORIZ_ACCEL 1, HORIZ_DRAG 16, VERT_UP_DRAG
    20, VERT_DOWN_DRAG 10, FUELDRAINRATE 15, FUELCOSTTOSTART 15, TURNRATE 5, WOBBLE 0.2 / 0.5, PFX BFF_Jetpack_Thrust_E, the
    soldier's rows 28 / 29) and its menu entry; the objective arrows (HUD picture 5 Arrow_NPC, 08A55C94).
  - Part 31, 2026-11-21 - **the jetpack (first build) and the jetpack step.** Next: measure the original's flight (harness: after
    the page's X, L tap in the air then hold the stick / triangle; RS_DRIVE_PLAYER=1 positions) and its power bar (the special
    items' energy: drain, recharge, the HUD icon 0x1E + bar); the rest of 089A19CC (turn rate, the camera, wobble), the pack model
    on the back, the soldier rows 28 / 29; then the training's next steps after the jetpack page (groups 82 / 13 onward).
  - Part 32, 2026-11-21 - **the jetpack measured (flight, bar), kind 3 = running.** Next: the height limit (10.4 m over the floor in
    the courtyard - ceiling or rule), descent, the bar's recharge and HUD (icon 0x1E + bar), the rest of 089A19CC; then the
    training after group 67 (18bc4's line, the next steps) - extend cmpn_train past i 9100.
  - Part 33, 2026-11-21 - **the jetpack's descent, cap, bar and HUD.** The objective arrows: 08A55238 walks units and draws
    Arrow_NPC over some (08A55914 / 08A55984 -> 08A55C94); the 0x8013 objectives' chevron is still not found (its handler 089F05BC ->
    08A25B18). The training after the jetpack: group 13 (page 0x198, objectives 18bc6 / 18bc9 / 18bca, the line 18bc4, 18d30), 15,
    86 (tip 0x94), 67 (0x14 to 18c6a), 16 / 17 / 18 ... - next: run Aurek through it and fix what stops it.
  - Part 34, 2026-11-21 - **Aurek runs the training to the jetpack's flight step.** Test hooks: AK_TEST_AUTOX=1 (pages take X as
    soon as it counts), AK_TEST_SCRIPT letter 't' (triangle held). With AK_SPECIAL=Jetpack, AK_TEST_TP 1500 to the post and the droid
    killed by lock + fire, Aurek's script goes: post capture -> 18bdb line -> page 0x197 -> 18cbc (kind 8) -> page 0x198, 18bc6
    (objective 0x4), 18bc9 (ring), 18bca (region, group 16 on entry), 18bc4 line -> 0x14 to 18c6a, the jetpack's start (kind 3) ->
    group 15 -> tip 0x94, 3 to 18c2e (type 19, two points -26.29 -17.97 169.42 / -25.86 73.18 169.56, hash 0xB1C2C3FB - not known).
    Next: fly into 18bca's box (the marker 18bc8 up high) and on (group 16 / 17: 18c6a's second hash 0x014A0B0A, 18bcb ..).
  - Part 35, 2026-11-21 - **past the jetpack: hulls, the region, the terminal.** Type 19 = moving hull (18c2e: down 91 m in 1.00 s,
    1.43 s after 3 [measured]); the marker 18bc8 sits on the wall top, 18bca's boxes lie past the wall (z < 168.2), so the step is:
    fly over the wall into the temple (Aurek: AK_TEST_TP 2800 to -24.45,-16.5,167.0; harness --tp 9320 the same) -> group 16 / 17.
    Group 17 starts the terminal objective 18bcb ("Open the main temple door") and the use zone 18bb8 (0x801F) by the console
    18bb6 (terminal_console). The original did not take d-pad up in the zone (harness ct19-ct21) - how it is used is open
    (08A11904 / 089A64F4 / who reads the soldier's zone). Group 5 (the zone's success) -> door cut-scenes 18c28 / 18c29, 18c27 down
    3 s later, 18bcb done -> group 18: page 0x19A (fusion cutter in WEAPON 2), the line 18bce, 18c2b (kind 4: item 0xDA0CAE3B held).
    The rest of the training, from STDTEXT 0x19B-0x1A4: repair the damaged turret with the fusion cutter (hold fire beside it, a
    green meter in the reticle), get in it and beat the stormtroopers, lock onto the tank with the rocket launcher, capture the
    Pyramid post, change back to a blaster rifle, find and kill the scout. 18d30 (look trigger) fired once in the harness when the
    player was pushed out of the wall next to its point - its rule is open. Not done: the door's visible model (zigarat_door, a
    cut-scene actor with zigarat_door_rest_anim / _anim: Aurek draws cut-scene actors only while their scene runs), the objective
    chevrons.
  - Part 36, 2026-11-21 - **weapon 2, the cutter, the turret.** Harness: RS_FIRE_AT=F:group:sender (fires a script group; the
    terminal's group 5 since d-pad up does not use 18bb8 in the harness), CT_W2 in cmpn_train (page X, the post's menu: up opens it
    on the last category, up x2 to Weapon 2, X, down to the Fusion Cutter, X, circle x2; d-pad left; cutter held beside the turret).
    Found: group 12 (18c2b passed: cutter held) -> objective 18bcd "Repair the temple gun emplacement, and man it.", 18d18 (kind
    0x11) -> 38 -> 18d19 (region at the turret) -> 92 -> 18d1a -> page 0x19B; the cutter -> 18bdc whole -> group 3 / 62 / 21 / 93:
    the tip "\ue813 Use" (in the tip box), "Get in the turret, and defeat the stormtroopers..." with a 0/4 counter under the radar,
    objective "Defeat 4 stormtroopers." (counters 18cc7-18cca, spawners 18be0-18be3 with Stormtrooper). Open: the reticle's green
    arc (Aurek shows only the panel), vehicles' RepairVehicle, the cutter's DamageToInfantry, the turret-use tip, the 0/4 counter.
    Next: the 0x800D spawners making humanoid units (Stormtrooper) and the kill counters, then the rocket launcher / tank.
  - Part 37, 2026-11-21 - **the stormtroopers.** Spawners 18be0-18be3 (version 10: event table at word 2 - count, {group << 16 |
    10006}; word 7 0xDACB8676 Stormtrooper; place, turn rows; 0x3E7 / 0x8005; word 23 0x200000 waits) and 18bf5 (Biker_Scout,
    the scout). Harness ct26: troopers at their spawners by +4 s, uphill to the temple in ~12 s, then 20-25 m off; the player
    (idle by the turret) 133 -> 75 health in ~45 s; the turret untouched. Counter 18beb: 31 >= 1 -> group 25 {1, 4, 1} ..., 34 >= 4 ->
    group 28 (8009 to 18be4 after 2 s); 0x61F >= 10 -> 34. Next: the AI's engagement distance in this fight (the troopers' goal
    with no posts - trace the AI's choice for spawner units, 0897E594 / the squad orders), the turret's use tip, then group 28 on
    (18be4: the tank, rocket launcher).
  - Part 38, 2026-11-21 - **to the rocket launcher.** Group 28 -> 35 -> cs_tank_entry -> 9 (4 kills the trooper spawners' soldiers,
    3 starts the tank spawner 18bf1, 18c2c waits for the rocket launcher held). The harness's menu steps for the rocket launcher
    (CT_RL) ran during the second cut-scene in ct28; they are now 850 frames later (--tp 15250 to the post). Next: run CT_RL,
    then the tank: where 18bf1's tank goes, how many rockets, cs / groups after it; the Pyramid post; the scout. Open: the troopers'
    damage rate (Aurek ~2.7x), the counter's meaning ("1/4" after all fell).
  - Part 39, 2026-11-21 - **rocket launcher chosen.** CT_RL in cmpn_train now: X for page 0x19F at i 15530 / 15590, up x2, X, down x8,
    X, circle x2 from i 15650 (ct30: group 47 at FIRE fr 17327). The tank's spawner 18bf1 events {10006 -> group 36}: 36 = 8009
    18be5 + 5 to 18c2c; 37 on (the Pyramid post 18cc1 800a / 8014, objective 18be6, tip 0x1A2...). Next: the harness walks / teleports
    to ~25 m of the tank facing it, R (lock) + X (fire): rockets to kill, the tank's reply; then 37-44 (the post, the blaster rifle,
    the scout). Aurek's player rocket test (ak31) fired every rocket without a lock (the tank behind the player).
  - Part 40, 2026-11-22 - **the training runs to its end in Aurek** (with test skips: the terminal by AK_TEST_FIRE-free use, the
    troopers by AK_TEST_FIRE 4700:28, the weapons by AK_TEST_WEAPON_AT, teleports): tank (2 rockets) -> Pyramid post -> cs_scout_entry
    -> the scout; killing it (18bf5's 10006 -> 41 -> 18be7 -> 49) ends the match (0x8006) and the next mission loads. Still to
    check in the harness: the scout's kill and 49 in the original (RS_FIRE_AT 41 / 49), the game-over / mission-complete pages of
    the campaign, the next mission's start. Then: SPACE_ALDERAAN (the campaign's second mission).
  - Part 41, 2026-11-22 - **the training's last stages run in Aurek**: after the scout, group 42 starts the stolen data (flag
    spawner 18bf7, class 0x8019, side 1) and its base 18bf9 (0x8017, side 0, radius 4.03). CTF now loads in mode 5 with the flags and
    bases off until the script's 3 (4 turns them off again), no score or time limit, a dropped object stays, a delivered one is gone
    [assumed]; pickup raises the spawner's 10012 (-> 51), delivery the base's 10004 (-> 43 -> 44), each record's event table at word 4.
    Group 44: "Destroy the temple control room" (harness ct37) - three unflagged type-7 records 18c2f-18c31 (factory 0896F170 ->
    089F3684 -> class 089F317C, vtable 0x08B0F6E4, 196 bytes; not traced further): event table at word 13, the place and turn after
    it, health 50, and a SHAP hull 2a25f45e (1.5 x 4.0 x 3.7 m, no mesh - the banks seen are level geometry). Aurek makes each a
    target with the hull's box, live after the script's 0x26 / 0x8019 {1} [assumed]; broken it raises event 3 [assumed: "destroyed"]
    -> 52 / 53 / 54 (the counter, its objective done) -> counter 18bfd at 3 -> 46 -> 18be9 done -> 49 -> 0x8006: the match won.
    Counter 0x8017 measured (ct38, RS_FIRE_AT 44, 52, 53): {0, 3, 1} twice went 0/3 -> 1/3 -> 2/3, so the first word picks add (0)
    or set (1, ct27) [assumed: a new total starts it again]. Also fixed: ak_turret.h's unclosed comment that hid two declarations.
    Open: the banks' wreck look / effect, what 0x26 / 0x8019 mean, the harness's own carry (its teleports did not reach the data),
    the 18c63 / 18c65 / 18c66 / 18c07 / 18c64 (types 35 / 36: 0x8023 / 0x8024 spawn places) messages. Next: SPACE_ALDERAAN.
  - Part 42, 2026-11-22 - **Space Alderaan (campaign 2) runs into its flight tutorial.** Harness (Yavin ended by RS_FIRE_AT 49,
    program cmpn_board2, --tp to the X-Wing's get-in spot): the mission starts in a hangar ("Get in the X-Wing"); getting in fired
    the craft's 10013 -> 124 -> 189b0 -> 126 (the hangar's four craft spawns 1874f-18752 started 5 s later; three friendly dots on the
    radar), flying out through region 18963 at the hangar's mouth -> 63, then the tips 120 (accelerate), 103 (acquire a target) -
    each an 0x8023 page held until X. In sa_h1 the player's rifle broke the parked X-Wing and 72 fired in that frame: event 3 is
    "destroyed" (also taken for Yavin's control room). Ported: class 0x8004 is a single placed craft (089B0B60 -> 089B04F4, the
    vehicle base 089D00D0; event table at word 6) - drivable, never made again, 10013 when boarded, 3 when broken; script 3 / 4
    start / stop a vehicle spawn (4 takes away an empty craft) [assumed]; regions now test the player's craft too; the in-vehicle
    condition kinds decompiled (08A0E3DC: 10 view mode, 0xB +0x1F8, 0xC +0x34C bit 7, 0xD vfunc +0x10C != 999, 0xE vfunc +200,
    0xF any craft) - Aurek: 0xB throttle, 0xD the missile lock, 0xF [assumed]. AK_DEBUG_GROUPS=1 logs every group (2: every node
    message). Aurek now runs 35 -> 67 -> 124 -> 126 -> 86 -> 63 -> 120 -> 103 -> 105 -> 125 -> 107 and waits on 1897d (0xE: the
    auto-pilot). Next: the craft's target choice (a button, "Press it again to change"), the auto-pilot (0xE) and camera lock
    (0xC) - traced from the vehicle's vfuncs +0x10C / +200 and +0x34C - then the rest of the mission (1895f 0xB, 18960 0xC,
    group 115's objectives, 0x800D 1882d / 1898c's 0x1B).
  - Part 43, 2026-11-22 - **starfighter target choice and auto-pilot; Space Alderaan's tutorial runs to its lasers page.**
    Harness hook RS_VCOND_LOG (08A0E3DC, once a second per kind; program cmpn_fly2: d-pad down taps, then triangle) on sa_h11:
    the object the in-vehicle kinds ask is the craft (vtable 0x08AFCBD0); 0xD passed on d-pad down (vfunc +0x10C = 08AC4BD0
    returns +0x1C0, the target id), 0xE on triangle (+0x34C went 0x14011 -> 0x14071; 089CE1C0: bit 0x20 and a target), +0x1F8
    stayed 0 with R held (so 0xB is not the throttle). Tips: 0x146 "You have rolled your spacecraft. Press L and R together .. to
    level" sits between 0xB (1895f -> 60) and 0xC (18960 -> 61), so 0xB = rolled, 0xC = levelling [assumed: +0x1F8 is the roll;
    the two actions that set bit 7 in 089A9728 are L + R]. Ported: d-pad down picks / steps the target (enemy craft by angle to the
    nose, 2500 m) [assumed: the order], triangle toggles the auto-pilot (the bots' steering toward the target) [assumed: the
    steering], kinds 0xB / 0xC / 0xD / 0xE. Aurek (Space Alderaan): ... 103 -> 105 -> 125 -> 107 -> 109 -> 122 (the lasers /
    missile page), as the harness. Open: the target marker on the HUD, the camera lock (0x1AE, triangle?) - not a script gate;
    the game's own target order and auto-pilot; "Destroy the Tie Fighter" (1898c) and the rest of the mission.
  - Part 44, 2026-11-22 - **Space Alderaan: the first TIE falls, the roll / level steps pass.** Harness sa_h12 (RS_VCOND_LOG
    now prints +0x1C0, RS_DRIVE_ALL): d-pad down took 30d4e - the TIE that 1898c made, flown from -357 -71 309 to -537 -75 392,
    480 m off the nose - and not the empty craft in the enemy hangar 1290 m ahead: targets are piloted craft. Aurek: the target
    choice skips empty craft; the campaign's placed craft that fly (non-Humanoid 0x800D spawners) get pilots of their own (no
    armies in the campaign; idle bots that never respawn on foot, put in when the craft is made - at the start or by the script's
    3) [assumed: who flies them]. Aurek now runs ... 122 -> 116 (1898c's TIE destroyed) -> 115 (five more TIEs: 18861 / 18865-7 /
    18868, counter 0/5) -> 60 (rolled) -> 61 (levelled with L + R). Open: groups 54-58 each send the counter {1, 5, 1} - with the
    part-41 rule (first word 1 = set) that shows 1/5 after every kill; check in the harness. The rest of the mission is long:
    the five TIEs (-> 24), the critical systems (type 7 props 1883c-f / 188fc-f, events 3), a data carry (188c5 / 18875) and
    the end (0x8006 from 41 / 68 / 88). Yavin's training still wins (its Recon_Droid is not a flyer: no pilot).
  - Part 45, 2026-11-22 - **the radar counter adds; Space Alderaan's critical systems are targets.** Harness sa_h14 (RS_FIRE_AT
    115, 54, 55, 56 after boarding): "0/5" then "1/5", "2/5", "3/5" from three {1, 5, 1} - the third word is added whatever the
    first (part 41's set / add split was wrong; ct27's "1/4" after four {1, 4, 1} in one frame stays unexplained). Rule now: add,
    a new total starts again [assumed]. The critical systems are type-7 records with SHAP hulls (1883c-f / 188fc-f: hull
    a9cdd4e9, a 220 x 345 x 255 m bipyramid, health 250; 18709 / 1870a: b2a2c2c9, 39 x 53 x 39 m, health 100) and side 1, where
    Yavin's consoles have side 2 and wait for the script's 0x26 / 0x8019 {1} (Space Alderaan sends them 0x8019 {0x100} and no
    0x26): props of side 0 / 1 are live from the start as that side's [assumed: the side decides it]; the script's 4 turns one
    off (2 s after its pair breaks - groups 27 / 47 / 70 / 82) [assumed]. The five-TIE wave (115) now flies with pilots. Open:
    a prop's box is the hull's box (the bipyramid's corners stop shots too), the data carry 188c5 / 18875, the end; then ORD_MANTELL.
  - Part 46, 2026-11-22 - **Space Alderaan runs to its win in Aurek** (with test skips). Props now test their SHAP hull's faces
    (convex: each face's plane, outward; the critical systems' a9cdd4e9 is a six-sided bipyramid, 18 faces) instead of its box.
    The chain, Aurek: data carry (28 -> 3 to the data 188c5 in the Star Destroyer's interior; pickup 10012 -> 42, delivery at
    18875 10004 -> 44 -> 18876 -> 45: cut-scene "Bobba fett arrives" via 0x801A to the ticket entity, then 30001 starts Slave_1
    18878), Boba's fall (46 -> 18877 -> 64: the critical systems' objectives 1887a-e, counter {1, 4, 0}), each system broken (event
    3 -> 48 / 78 / 71 / 85 -> selectors -> 82 / 47 / 27 / 70: its objective done, its pair off after 2 s) -> 50 / 49 / 51 / 52 ->
    counter 18879 at 4 -> 53 -> 1887a -> 65 -> 0x8006: winner 0 (the Alliance). Skips used: AK_TEST_FIRE 28 / 46, teleports to
    the data and base, AK_TEST_BREAK (new: "frame:prop id" breaks a prop as if shot). Not checked against the harness: the
    interior's walk, Boba's fight, the systems under fire. ORD_MANTELL loads and runs (groups 23, 9 in its first minute).
  - Part 47, 2026-11-22 - **the campaign's armies; Ord Mantell starts.** 0x8010 {u32, n} to the ticket entity sets the match's
    unit count (089875C8 -> 08979CD4: D_08C294D0, the number 089809B8 fills with AI spawners). Measured: Yavin's group 44 {8} - one
    soldier, then 7 more over 10-15 s (ct39, RS_DRIVE_ALL); Ord Mantell's 23 {12} - the player and 11 AI soldiers (om_h2, all at
    60 health). Aurek: in the campaign the standing army (15 bots made, dormant) fills to the unit count less the player and the
    placed units in play [assumed: that subtraction - it keeps Yavin's troopers stage {4} free of extra soldiers], each through
    the spawner's 5-15 s timer; none before the first 0x8010. Also fixed: 0x800D spawners with no events (Ord Mantell's squads
    18838-b, 18843-5, 18849-b) were skipped - the blueprint is at word 6 + the event count, not word 7 (and those records are 26
    words). Ord Mantell (campaign 3): the original waits after 23 / 9 for "Secure the Junkyard command post" (om_h1).
  - Part 48, 2026-11-22 - **Ord Mantell: the Junkyard and the countdown.** Capturing the Junkyard post 186ac (game 5.5 7.4
    -39.4) raises its 10002 (the Alliance's) -> 17 -> 1882c -> 33 -> 186d8 done -> 2 (the squads 18843-5 / 18849-b 5.9 s later,
    the spawn places' 3 / 4) -> 30000 (Chewbacca's spawner 18806, objective 186eb "his" escort: done by 34, failed by 7 -> 0x8006
    {1, 1, ..} the Empire's win). Measured (harness om_h3 / om_h4, RS_FIRE_AT 18 / 30000 / 13): 0x8015 {u32, f32 s} to 0x3E8 shows
    a countdown under the radar ("0:58" from 60, "1:23" from 85 - the first word is not "shown"), 0x8016 removes it. Aurek: the
    countdown (hud timer, m:ss) [assumed: rounded up, stops at 0]. Next in Ord Mantell: Chewbacca's walk along the path nodes
    (type 55: 187fa raises 32 when reached, a later one 34 [to find]), the team spawn places 0x8023 / 0x8024 (3 / 4; link to a
    post or a unit, a count; 0898383C uses them in game kind 5 when no post is chosen - trace which soldiers), 0x800E 1882f's
    0x800D and 186ef's 26 / 8019 {0x101}.
  - Part 49, 2026-11-22 - **Chewbacca's escort walks.** A scripted spawner names its unit's start node (byte 82 + 4 x the event
    count: Chewbacca's 18806 -> 187fa); nodes (type 55) chain by type-60 splines (187fa -> 187fc -> 187fe -> 18800 -> 187ee), each
    with a stand time (words 17 / 18: 20 / 20, 10 / 10) and two groups in its last word (187fa 0x20 / -, 18800 - / 0x22, 187ee
    0x2E / -). Measured (harness om_h5, RS_DRIVE_ALL): Chewbacca (600 health - his blueprint's, the army's soldiers 60) came in
    at 187fa (its group 32 that frame), stood 19.8 s, ran the spline to 187fc at ~5.4 m/s and stood again. Aurek: scripted units
    with a route walk it - arrival fires the low group, leaving the high [assumed], the stand drawn between the two times, no
    fight drift on the way; scripted units keep their blueprint's Health (no army multiplier) [assumed for all]. Ord Mantell now
    runs Junkyard -> 2 -> 30000 -> 32 -> 34 (18800) -> 5 (the escort's objective done) -> 46 (187ee: 4 to Chewbacca's spawner)
    -> 4. Open: he takes ~60 a second from the soldiers at the Junkyard when the post is the Empire's (the original lost 8 a hit,
    3 hits in 20 s - the AI's fire at non-player units, 4.x); the team spawn places 0x8023 / 0x8024; 0x800E objects; the rest.
  - Part 50, 2026-11-22 - **Ord Mantell runs to its win in Aurek** (with test skips). Props now also come from class 0x800E
    (flagged type 14: the type-7 layout one word later - 186ef, a SHAP hull with more faces than kept, so its box) and from a
    model when no hull has the hash (186ed: Round_turret, the word after the hull hash); 0x8019's first byte arms (Ord Mantell's
    {0x101}), 0x26 {0} disarms [assumed]. The chain: escort done (5) -> the turret 186ed and the post-side object 186ef (events 3
    -> 3 / 15 -> objectives 186f2 / 186f0 -> 25 / 8) -> the data carry (flag 186f5 at game -12.9 1.8 80.6 -> 37; base 18731 at
    16.3 6.1 -126.8 -> 41) -> 42 (the 100 s timer 186f8 with the countdown, 18 / 13) -> 6 -> 30002 (IG-88's spawner 18786, 600
    health) -> his fall 10006 -> 1 -> 18832 -> 11 -> 0x8006: winner 0. Skips used: AK_TEST_FIRE 5 / 25 / 6 / 1, AK_TEST_BREAK,
    teleports. Still unported there: the team spawn places 0x8023 / 0x8024 (3 / 4), 0x1C / 0x1D to type-7 objects, 0x8025 regions'
    3. Next: SPACE_KESSEL (done, part 52); then TATOOINE.
  - Part 51, 2026-11-22 - **Space Kessel (campaign 4): the first three stages.** Original (harness sk_h1, reached by RS_FIRE_AT
    49 / 65 / 11): the player stands in a hangar, "Destroy the communications array on the Star Destroyer", a 1:30 countdown (the
    timer 1896c, 90 s; at 0 -> 50 -> 8008 to 1882f -> 51 -> 0x8006 the Empire's). Aurek runs the same start (18 -> unit count 16,
    28, 84, 49 with the countdown). The array 18877 (type-7 SHAP prop, side 1) broken -> 81 -> 1882f -> 23 (objectives 18831-4 on
    the turrets 188c9-cc) - turrets now raise event 3 when destroyed -> 102 / 103 / 25 / 26 -> counter 1883a at 4 -> 24 -> 18830
    -> 41 (six TIEs 1883c / 18848-4c, counter 0/6) -> their falls 43-48 -> 1883d at 6 -> 42 -> 1883b -> 63 (the craft 1888f
    back - 0x8004 craft now follow 3 / 4 [assumed: 4 takes an empty one away], objective 18852, region 1886c -> 80). Fixed on the
    way: a craft below y -400 counted as fallen out of the level on space maps (Kessel's TIEs start at -420..-500) - only on
    ground maps now; kill boxes set the target dead after the frame's fall pass, so such deaths were never counted (soldiers or
    craft) - they now leave it to the next pass; the vehicle list holds 64 (the hangar slot copies still stop at 32). AK_TEST_BREAK
    also takes turrets, a spawner's craft or soldier. Next: 1886c / 18855 regions -> 11 -> 18852 -> 67 -> 18895 -> 89 (Ackbar 1885b
    on his route, 0x4C to path node 1885d) -> ... -> 79 (0x8006 the Alliance's).
  - Part 52, 2026-11-22 - **Space Kessel runs to its win in Aurek** (with test skips). The rest of the chain: region 1886c (who
    1000: the player's craft - regions now test their own "who", ak_script_regions_who) -> 80 -> boarding 1888f (10013) -> 90 ->
    11 -> 65 -> 89 -> 68 -> 75 -> the prop 18867 -> 76 -> 77 -> 78 -> the cut-scene ackbar_arrive_in_laat (message 3 to 18990)
    -> at 14.3 s its timed group 30000 -> 8009 to 1886a -> 79 -> 0x8006, winner 0 (the Alliance). Cut-scene events (CTEV type 4:
    a group at a time, word 9) were not read before; the scene's end group (CUTS tail) is a separate one - this scene has none.
    The CUTS length read is fixed (the path starts 12 bytes after the name padded to 4; was garbage for Kessel's two scenes).
    Leaving a lone craft raises 10015 [assumed]; a length-0 scene with timed groups runs to its last [assumed]. Skips used:
    AK_TEST_BREAK 18877, AK_TEST_FIRE 77 / 78. Still open there: 0x53 to the fade 18998 (type 0x44 {3, 0.25, 0.25, black, 1,
    next 18999}), 800d / 800e to 18954, the AI's fire at non-player units. Next: TATOOINE.
  - Part 53, 2026-11-22 - **Tatooine runs to its win in Aurek** (with test skips; campaign mode AK_MODE=5). Fixed: 0x800C to a post
    gives it without capture events (089ECC48 -> 08A26FF4 + 0897367C only; traced) - Tatooine's 28 gives its spawn post 18719 to
    the Empire, and the event Aurek raised (10003 -> 18 -> 50 -> the timer 18a2c -> 41, 0x8006 winner 1) lost the match at 2 s.
    Cut-scene names longer than 27 bytes were cut short, so their named objects never matched (18a47 "falcon flying in to the evac
    point"). The chain: 28 / 36 / 17 (start) -> post 1871a (10002 -> 1) -> 18ada -> 51 -> objective 189cb -> 2 -> use zone 18a0d
    (the Rodian, 3 -> the scene place holder chat to rodian, its end 30000) -> 189cc -> 5 -> the commando 189d1 walks to 189d3
    (8) -> 9 (three props 189db / dc / dd, counter 189df) -> 13 -> 35 -> post 18719 to the Alliance (49) -> 18aaf -> 14 -> 15 (the
    cage scene, 30003, the 30 s countdown 189e1 -> 16 -> 19) -> 30011 / 30012 / 30013 (two scout walkers 189e5 / e6, falls 20 /
    21, counter 189f0) -> 24 -> 25 -> the Falcon scene 18a47 (timed 30014 / 30015 / 30002 / 30001) -> region 189f1 on (who 1000)
    -> 27 -> 189f2 -> 38 -> 0x8006 winner 0. Skips used: AK_TEST_FIRE 1 / 49 / 20 / 21 (posts contested by soldiers; the walkers),
    AK_TEST_BREAK the three props, teleports and the use button. Still open there: 0x4C to path nodes, 0x801F / 0x8007 / 0x0E to
    the spawners, 0x1C / 0x1D, 0x1A to type 43, 5 to class 0x800E 18ae1 / 18ae2, 0x53 to the fade 18a9e. Next: BOZ_PITY.
  - Part 54, 2026-11-22 - **Boz Pity runs to its win in Aurek** (with test skips). Found on the way: tests started straight into a
    campaign mission played a Stormtrooper (AK_SOLDIER's default), the menu's campaign path sets AK_TEAM 1 / MediumRebel - now the
    command line does the same for AK_MODE CMPN / 5 (Kessel's and Tatooine's runs were on the wrong side; their chains were
    script skips, so the wins stand, the fights do not). AK_TEST_GOD=1 keeps the player up. The chain: post 186a6 (10002 -> 5;
    skipped) -> selector 188d2 -> 62 -> 18753 -> 2 (the 90 s timer 18755 and its countdown) -> 3 -> 6 -> use zone 188d1 (game
    -10.45 3.16 192.0) -> 8 -> 13 (placeholder cutscene, its 30003 starts the AT-AT 18854) -> the AT-AT walks its route and
    enters region 188d4 (who 18854: a vehicle spawner's walker) at ~85 s -> 25 -> "AT-At gone boom" (15 timed groups, end
    30012) -> 18763 -> 11 -> the AT-STs 18770 / 18772 (broken: 27 / 24 -> counter 1876c) -> 32 -> 33 -> the carried object
    18783 (game -117.7 2.6 -77.7, the Empire's; 10012 -> 34) -> 50 -> base 18789 (-258.8 3.5 32.9; 10004 -> 51) -> 36 (ackbar
    injured / acbar getting up) -> region 18881 -> 1 -> 1880f -> 26 -> the timer 1878c -> 37 (skipped: the teleport was above
    the region's box) -> 49 -> "Laat coming in" (length 0 - ran to its last timed group, 8.5 s) -> Ackbar's node 18787 (38) ->
    region 18795 -> 40 -> 41 -> 0x8006 winner 0. Skips used: AK_TEST_FIRE 5 / 3 / 25 / 37, AK_TEST_BREAK 18770 / 18772,
    teleports. Still open there: 0x51 / 0x3B to path nodes (the AT-AT's route switches), 0x801F to the spawners, 0x8022 to the
    ticket entity, 0x6 / 0x7 to selectors 1889e / 188d3 [handled], 0x39 to 1888e. Next: HOTH_ION_CANNON.
  - Part 55, 2026-11-22 - **Hoth Ion Cannon runs to its win in Aurek** (with test skips; nothing to fix in the engine). The chain is
    in NATIVE_ENGINE.md's row. Skips used: AK_TEST_FIRE 24 (the post capture), 27 (the second console - the teleport put the
    player 5 cm under its floor, so he fell 8 m: a test artifact), 16 (the 60 s timer); AK_TEST_BREAK the three generators, the
    AT-AT 1878f and Vader's spawner 186f4; teleports and the use button. Seen: a region fires again each time its "who" enters
    it (187a9 -> 15 twice, 187b0 -> 44 three times after repeated teleports) - the script node's success (vtable +0x50 ->
    088725B8 -> 08872620: the group, the node stays active) is traced for timers; the region class (unflagged type 20, its
    loader not traced) may differ [assumed: stays active, as now]. Still open there: 0x1A to type 43, 0x800E to 1872a / 1873d,
    0x1B / 0x1C, 0x8018 / 0x8002 to the ticket entity. Next: SPACE_HOTH.
  - Part 56, 2026-11-22 - **Space Hoth runs to its win in Aurek** (with test skips, in two runs: the start to 61, then 61 to the win).
    Fixed: placed path craft fly their path at CruisingSpeed with node groups [assumed: the unit AI's pace and the pilot's part
    not traced]; empty placed craft (0x8004) are open to any side [assumed: neutral, as the game's team 4 for a craft left empty];
    AK_TEST_TP moves the driven vehicle. Read: the objective handler 089F05BC (0x8009 -> 10010 each time, 0x8008 -> 10009, 3 / 4
    its active byte; a mode mask check first). Skips used: AK_TEST_BREAK the four turrets, the six TIE Defender spawners and Vader's
    1885f; AK_TEST_FIRE 45 (the transport's 4.3 km - it was flying it, half way at the run's end) and 61; teleports (the region
    18865, the hangar exits, the craft) and the get-in button (from the craft's get-in spot, 5 m behind it). Open: 0x4C to path nodes
    (68 sends it to the transport's start 18837 - it left on its own 0.39 s stand), 0x8011 to the transport, 0x800D / 0x800E to
    1892d, 0x1A to type 43, 0x8020 / 0x8022 to the ticket entity, 0x13 to 1896a, the timer 18862 (40). Next: KORRIBAN.
  - Part 57, 2026-11-22 - **Korriban runs to its win in Aurek** (with test skips, one run; no engine change). The chain is in
    NATIVE_ENGINE.md's row. Skips used: AK_TEST_FIRE 29 / 2 (the two posts - contested by soldiers) and 41 (the 60 s hold - the
    timer later fired it again, harmless); AK_TEST_BREAK the seven props; teleports to the use spots (0.3 m above the spot's
    height), the carried object and the base; the use button. Still open there: 0x1C / 0x1D to the props' effect objects,
    0x800E to 18724 / 18725, 0x8010 {0} then {10} to the ticket entity (30006), 0x13 / 0x16-class 0x8016 links. Next: SULLUST.
  - Part 58, 2026-11-22 - **Sullust runs to its win in Aurek** (with test skips, one run; no engine change). The chain is in
    NATIVE_ENGINE.md's row. Skips used: AK_TEST_FIRE 3 (the post) and 5 (the 60 s timer - it fired again on its own later, and
    replayed IG-88 arrives: harmless here); AK_TEST_BREAK the prop 18797, IG-88 1876a, the spawner 1877f and the four props;
    teleports to the carried object and the base. Still open there: 0x14 to class 0x26 18891 (43 / 44), 0x1C / 0x1D, 0x800E to
    1890a / 1890b / 1878a, 0x53 to the fade 1888e. Next: ENDOR (the campaign's last).
  - Part 59, 2026-11-22 - **Endor runs to its win in Aurek - the campaign's 11 missions all reach their wins** (with test skips).
    Fixed: flagged type 20 (class 0x8014) placed vehicles load as placed craft [assumed: as 0x8004]; a scene of length 0 with no
    groups does not take over a playing one [assumed]. Two runs: the start to 28 (cut by the 0-length scene before the fix), then
    28 -> 30004 -> boarding the AT_ST (from its get-in spot game 210.39 -3.60 22.37) -> 7 -> 18 -> 19; the end (19 -> the timer ->
    22 -> the three posts -> 39 -> 40 -> winner 0) in the first run. Skips used: AK_TEST_FIRE 4 / 29 / 43 / 46 (posts), 6 (the
    turret's use - its 10014 is not raised by Aurek's turret use [open]), 23 (the 60 s timer); AK_TEST_BREAK the two spawners;
    teleports and the use button. Still open there: 0x14 / 0x15 listener hashes from the turret (only via the skip), 0x801F to
    the spawners, 0x53 to the fade 18a77, 0x1B / 0x1C to 18b01. Next: GTAG (5.4).
  - Part 60, 2026-11-22 - **GTAG closed: not reachable in the shipped game.** FE_ListValidModes (08A31A94) lists only modes below 4
    that the map table (0x08B1B980, 22 entries x 20 bytes: two level names, the name's STDTEXT id, four mode flags, the space
    flag) marks - no map offers mode 4 - and no placed object's mode mask holds GTAG without conquest (masks over all 45 levels:
    0x3F 711, 0x0C 78, 0x20 55, 0x21 54, 0x02 45, 0x08 24, 0x01 17, 0x0B 8, 0x1F 6, 0x2B 3, 0x2D 2). Next: the 8.2 leftovers.
  - Part 61, 2026-11-22 - **8.2: the player profile and its save** (see NATIVE_ENGINE). Traced: the save path (08A2EA54 / 08A2EAC8 /
    08A2EB0C -> 08A62208 / 08A62274 / 08A62294 -> 08A6A05C / 08A6A1DC -> 0890E50C / 0890E61C -> 0890D59C: MD5 + data), the profile's
    constructor (089776BC: 08977764 / 08977784 / 08977808 / 0897782C / 08977ED8 / 08977F80 / 08977878), the name setter 089783BC
    (FE_SetProfileName), the campaign level step 08973468 (from 08972EB0 at a won match's end; 08972F90 also counts the profile's
    stats and medals: 0897300C / 08973070 / 08973218 / 089775E0 - not ported). Open: the profile's other fields (the stats at
    +0xA4.., the 20 x 0x2C records at +0x1B0, the customisation bytes +0x5A8-0x5D8, GC at +0x6C8.., the 16 records at +0x704,
    the 4 at +0x7C4), the name entry (the OSK), the autosave pages, the controls pages, the spawn map's zoom, the customisation
    menu's open points.
  - Part 62, 2026-11-22 - **8.2: profile pages, the spawn map's title and time, the map's scale closed** (see NATIVE_ENGINE). The
    spawn map against the original's (Hoth, harness program respawn): posts at (63,92) (112,106) (85,170) (133,168) (170,155)
    (181,155) in the original, Aurek (64,92) (112,107) (87,171) (134,168) (171,156) (182,156). Open in 8.2: an on-screen keyboard
    for the name, the vehicle / spacecraft inversions and the stick sensitivities in play, the personalisation menu
    (FE_OpenPersonalisationMenu 08A2F5A4 -> page 0xCD12E72F, FE_Personalisation_*), the medals pages (FE_Medals_*, with the
    profile's stats 08972F90), the cut-scene list and movies (FE_ListAvaliableCutscenes / FE_PlayMovie), the version line
    (FE_GetVersionNumber 08A29580: "Version: 02.11aj.%d (18:06:38, Jul 29 2007)"), the customisation preview's scale.
  - Part 63, 2026-11-22 - **8.2: the personalisation menu, the version line** (see NATIVE_ENGINE). Checked by screenshots: the main
    menu's Rebel entry (bodies Rebel Commando / Rebel Vanguard / Wookiee Warrior; heads Human / Rodian / Sullustan), the colour
    and insignia pickers with their focus frames, the choices saved to the profile (+0x5A8.. and +0x5D8) and back to
    MP_MCustomisationMenu; in a match (Tatooine) the spawn map's triangle opens it for the Alliance. Open in 8.2: the medals pages
    (FE_Medals_* 08A34840.., the earned flags at +0x168, the stats 08972F90), the soldier preview / head models and the choices in
    play (body, head, colours), an on-screen keyboard, the vehicle / spacecraft inversions and sensitivities in play, the
    cut-scene list and movies, the customisation preview's scale.
  - Part 64, 2026-11-22 - **8.2: medals and the profile's counters** (see NATIVE_ENGINE). Open in 8.2: Super_Slicer's counter
    (08A1F9B0), the kill flags' meanings checked against the harness, the personalisation's soldier preview / head models and the
    choices in play, an on-screen keyboard, the vehicle / spacecraft inversions and sensitivities in play, the cut-scene list and
    movies, the customisation preview's scale.
  - Part 65, 2026-11-22 - **8.2: the personalisation in play, the vehicle / spacecraft inversions** (see NATIVE_ENGINE). Open:
    the personalisation preview and head models in the menu (08A36BA0 / 08A35D88), the bots' random bodies (089835EC), the stick
    sensitivities (08A5F1A4's axis set-up), slicing (08A1F9B0, Super_Slicer), an on-screen keyboard, the customisation preview's
    scale, and the movies: no player in Aurek yet - FMV/*.PMF (PSMF H.264) needs a decoder per platform, then the cut-scene list
    (FE_ListAvaliableCutscenes / FE_PlayMovie) and the campaign's FMV nodes can follow - a task of its own (8.3).
  - Part 66, 2026-11-22 - **8.2: the bots' bodies, the personalisation previews** (see NATIVE_ENGINE). Left in 8.2: the stick
    sensitivities (the infantry scheme's axis set-up 08A5F1A4 / 088968BC - not traced), the head previews' framing against the
    original, the main menu's previews (the front end's own soldier models), an on-screen keyboard, the customisation preview's
    scale; 8.3 movies; slicing. Next: 3.7 space.
  - Part 67, 2026-11-22 - **3.7: the starfighter's target on the target panel** (see NATIVE_ENGINE). Open in 3.7: the camera
    lock (the in-vehicle condition 0xC is the levelling; the lock's button and its camera are still to trace from the chase
    camera / vehicle +0x34C), shields ("(Shielded)"), capital ships; and (5.4) the CTF pointers 08A58620 / 08A59040.
  - Part 68, 2026-11-22 - **3.7: the camera lock** (see NATIVE_ENGINE). Open in 3.7: the camera lock's exact framing (089AB82C's
    angles, against the harness at the elite difficulty), shields, capital ships. Next: 6.5 sabers.
  - Part 69, 2026-11-22 - **6.5: force powers, first pass** (see NATIVE_ENGINE). Open in 6.5: the powers' exact targeting
    (08A220E0 / 08A1C2B0 decompile poorly - VFPU; read the recomp C), the victims' reactions and motion, the thrown saber's flight,
    bots using powers, blocking, the combo timing against the harness (RS_HERO_FAST + a melee setup). Next: 4.3b auto-gunners.
  - 2026-11-22 (user's requests) - head swap (not the CIS), the HSV colour picker for every faction, the Vita trophies, the date
    medals for a match won on the day (see NATIVE_ENGINE). Open: the platinum's picture (the user supplies it), a trophy test on
    the Vita (NoTrpDrm), the picker on hardware.
  - Part 70, 2026-11-22 - **4.3b auto-gunners** (see NATIVE_ENGINE). Next: 9.2.
  - Part 71 (2026-11-22): 9.2 vehicle cameras - the blocked pull-in (pivot ray, 0.5 margin, 1.0/s return) and the tank type's
    swing (Camera Yaw/Pitch Rate, Damp, Max) traced and ported; vehicle camera defaults now the game's.
  - Part 72 (2026-11-22): 3.6 closed - the lock-on's remaining rules (proton bombs lock, the Lose / Initial pairs, the range from
    the vehicle, the getters' zero defaults, the vehicle's own LockOnTime) traced and ported.
  - Part 73 (2026-11-22): 3.1b volleys - HardpointW1TimeN is the barrel's share of RateOfFire (weapon +48 = TimeN x +52), traced
    and ported for vehicles and turrets.
  - Part 74 (2026-11-22): 3.1b rider - open vehicles (Enclosed false) show their driver on the Seat marker in the AnimSit pose.
  - Part 75 (2026-11-22): 3.1b turret aim - the gunner's turning rates (Damp / InputDamp / MaxTurn) and the pivot limits traced and
    ported; the limits' defaults are 0 (none).
  - Part 76 (2026-11-22): 3.4 walker sprint traced and ported (SprintingSpeedScale above 1, the boost control, EnergyBoost x dt;
    WalkingSpeedScale otherwise).
  - Part 77 (2026-11-22): 3.4 walker clip table (ATBL) decoded; the AT-ST turns in place with turnL_30 / turnR_30.
  - Part 78 (2026-11-22): 7.2 - no reverb in the game (only RevVON is imported); the voice pitch path found for the Doppler check.
  - Part 79 (2026-11-22): 7.2 closed - no Doppler, no occlusion in the game; the 3D distance gain is linear (Aurek's was squared).
  - Part 80 (2026-11-22): R.1 dynamic lights traced (effects' light curves, the flag bits, the per-frame update); building them is next.
  - Part 81 (2026-11-22): R.1 closed - effect lights built (curves, duration, flags; added to the model light as the game does).
  - Part 82 (2026-11-22): R.4 - the level draw's material states traced (blend / alpha test / depth write per flag, their order);
    Aurek's pipeline order fixed.
  - Part 83 (2026-11-22): R.5 recorded as blocked (the draw log cannot follow a prop; no constant found). By request: the Vita's
    debug text back to each line's own colour (AK_DEBUG_TEXT_RGB off by default there).
  - Part 84 (2026-11-22): R.6-R.8 checked for the checkpoint - R.7's shadow filler chain traced (the casting object not identified),
    R.6 cell animation and R.8 damage / hyperspace still open; R.9 depends on them. Next: the bug-test build.
  - Part 84b (2026-11-22): the bug-test build (by request): AK_LOG 0 / 1 / 2 (off for frame-rate checks / usual / everything,
    timed lines: per-second state snapshots, input, deaths, spawns, boarding, heroes, losses, script messages, sound events);
    every optimisation flag the Vita and 3DS compilers take (fast-math with isfinite kept, unrolling, vectorising, graphite,
    IPA, whole-program LTO; the GC AI file kept exact); the Vita build's missing sources added (ak_script, ak_gc, ak_gc_ai,
    gc_screen - the Vita and 3DS builds had not linked since those files arrived); frontend.c's `clock` renamed (it clashed with
    time.h on the Vita). Vita VPK built.
  - Platforms (2026-11-22): Windows and Steam Deck builds on a new Vulkan 1.3 renderer (platform/desktop/gfx_vk.c), RT-ready
    (support detected and logged; AK_VK_RT=1 enables the extensions; nothing traced). Same pictures as the GL back end on
    lavapipe; validation clean. Twin-stick as the Vita; triggers double as L / R. 3DS build delivered (one-stick).
  - PS4 (2026-11-22): OpenOrbis toolchain bootstrapped from git (platform/ps4/bootstrap_toolchain.sh). Renderer: Piglet needs
    precompiled shader binaries (no retail compiler, gde-only, ~768 MiB); PS4GL_GNM (GNM, PC-compiled shaders) is the candidate,
    pending the owner's approval to run its tools.
  - PS5 (2026-11-22): AK_VK_DISPLAY path in gfx_vk.c, plat_ps5.c, build.sh and settings.txt written; compiles for the PS5
    target; the RADV / SDK / packaging build waits on approval to run PS5_Vulkan's tools.
  - PS4 (2026-11-22): built (GNM via PS4GL_GNM, gd package AURK00001); untested on hardware.
  - PS5 (2026-11-22): built (RADV Vulkan 1.4, PPSA90293); untested on hardware.
  - Big endian (2026-11-22): engine reads/writes PSP data correctly on big-endian CPUs; tools/be_check.sh (x86 vs qemu-ppc) matches.
  - Wii U (2026-11-22): devkitPPC + wut built from source; GX2/AX/pads code compiles and links; CafeGLSL (shader compiler) waits on approval.
  - Wii U (2026-11-22): built (aurek.wuhb); untested on hardware.
  - GameCube (2026-11-22): GX renderer + platform written, aurek.dol links; memory diet (ADPCM sounds in ARAM, streamed level resources, in-place GPU data, packed animations) brings every level under ~13.3 MB; front end not yet; untested on hardware.
  - GameCube (2026-11-22): runs in Dolphin from a disc image (make_gcm.py, own apploader, dvd: device); every Classic level fits; front end not yet.
  - HUD / camera on non-16:9 screens (2026-11-22): anchored HUD, width-keeping FOV; faint GX palettes; flyers rest on their lowest point.
  - GameCube media and saves (2026-11-22): memory card saves (libogc CARD, sector-by-sector: CARD_Write writes one sector per call), the on-screen keyboard for the player name, and the conversion tool's gc target (THP movies, letterboxed 4:3; DSP-ADPCM audio); make_gcm.py packs converted/ and drops or trims the originals it replaces. Movie playback in the engine is still to do.
  - Media per console (2026-11-22): conversion tool `vita` target (WAV + MP4 through FFmpeg's CLI), per-console scripts writing Converted/<console>, GameCube THP playback (TEV YUV->RGB, sound on its own AESND voice, picture follows the sound); AESND buffers made whole 1152-byte transfers (the GameCube's own sound lost 11% to padding before); AK_HIDE_DEBUG=1 by default on every build. Wii U media scheduled (11.3).
  - Boot movies (2026-11-23, M1): OPENING_LOGOS then REBELLION on every device (video/ak_movie.c: THP, MP4/PMF with libavcodec; GameCube movie_gc.c), CROSS skips only the one playing, 0.7 x master volume, 3 black frames first, language folder first.
  - Splash screen (2026-11-23, M1): MP_MSplashScreen first after the movies; UIAN animations (alpha / position) from the data, inherited alpha; the button timers (no keys for 1 s, the profile prompt by itself at 10 s); START = key 512; checked frame by frame against the harness original.
  - Vita movies (2026-11-23, M1): sceAvPlayer plays the Vita conversion's MP4 (platform/vita/movie_vita.c); built, not yet run on hardware.
  - Profile prompt flows (2026-11-23, M2): save dialogue (Aurek's own, the game's 5 slots), load/save results and autosave state as the game registers them, page OnOpen/OnClose, the name box and its keyboard, cross-file targets; checked side by side through to the main menu.
  - Options pages (2026-11-23, M2): slider editing as the original, language numbers (US 6, Italian 3), other files' pictures; first pages of every Options entry match.
  - Controls pages / button marks / profile (2026-11-23, M2): scheme toggle (profile +0x58/+0x74/+0x90), button-mark table and sizes from the original's frames, new profile saved byte-identical, FE_PlayMovie table 0x08B1C08C.
  - Movie subtitles traced (08A69188 / 0884999C / 08849AA8 / 08A6994C): SUBT {start, end, key}, CUTSCENE_AM texts, 0.25 s fades,
    the bottom band 0.89..0.98, centred, scale 0.8, '{' / '}' lines forced.  Uncertain: whether in-game cutscenes pass the flag as
    1 always; CUTSCENE_AM is the only language file on this disc (other languages' loading not traced); the GameCube THP path
    (ak_plat_movie_play) draws no overlay yet.
  - Difficulty traced (08A2EB9C / 0897968C / 08979DF4): the focus by the profile's +0x34, SelectDifficulty 1 / 2 into +0x34 with
    the change flag. Uncertain: the meaning of 08A2EB9C's first argument (the call does nothing unless it is 0; OnOpen is assumed to
    pass 0). The multiplayer bot difficulty (0x08C294DC) is not wired (multiplayer is out of scope).
  - Delete profile = the save utility's mode 7 on the profile's own slot (0890E49C); the cutscenes list's rows <= max(+0x5DC, +0x5E0)
    (08A2EF58). Uncertain: the PSP system dialogue's own look for mode 7 (Aurek draws its own question); how the list's row count
    is asked (08A2EF58's a1 / a2 path, 08898108) - rows past the limit are simply left out; whether the profile's +0x5DC / +0x5E0
    count from 0 as read here (a new profile shows Intro only, checked in Aurek, not yet against the original).
  - Self-pressing buttons (0888D170): bit 1 of +176, +153, active time >= +196, while shown; the original also requires the
    button's page to be the one in use (0888AC8C == page +144) and the button state != 4 - Aurek checks only the page it updates.
  - Single Player entry: FE_CheckConquestState is a no-op (08A2EC80), FE_CheckCampaignState starts only with no progress (08A2EC10).
    Uncertain: FE_SetIsInMultiplayerMenu (08A31FA8: a byte at 0x08C2D3D0, network shutdown when 0 in state 6) and
    GC_RequestPlayerFaction (08A3BA64: 0x08B1C2EC) are not wired (multiplayer / Galactic Conquest are out of scope); whether the
    original's "saved conquest" is only BFF.HasGalacticConquestBeenPlayed; the harness original takes no visible keyboard on the
    new-profile name box (its system keyboard is not drawn), so Aurek's keyboard there is unchecked against a picture.
  - Pictures with flags 0 are hidden (the Personalize logos). Uncertain: the original's draw check itself is not traced; the rule
    is read from frames. Other flag-0 widgets: Multiplayer status labels, MP_SelectControls' nav D pictures, CUSTOMISATION's
    E_TXT_Prompts (texts; left as they were).
  - FE_Customisation_ListCarouselAnims traced (08A28388): per category s2 (0..4, table 0x08ADFC84), the row's object (0x08ADC5E8...)
    in the player's faction's version (08A23598); its component 0xD0CDC21C (0881C3E0) gives two ints (0xE9772A8D, 0xDC090FF0) and an
    offset (floats 0x99602006/7/8); handed to the widget as {0xC91B7788, int, int, 1, offset x3, category == 3, 1, offset x3}.
    Uncertain: what the two ints are (model / animation?), the offset's use; the soldier preview (E_Anim_AppDisplay) still needs a
    play state (a level) in Aurek.
  - Loadout = profile set 0 (+0x1B8..+0x1D4, 08977A34). Uncertain: what sets 1..19 hold (other factions / classes? not read
    yet); the 4 bytes at +0x1B4 (0) and +0x1D8 (0); a byte check against the original's own save after a loadout change is still
    to do (the harness route needs the carousel steps).
  - Loadout sets: every writer (08977A34: 08A27F28, 08A27FD8, 08A09928) and every reader (08977918: 20 calls in 08A2809C,
    08A287CC, 08A28BCC, 08A342E8, 08A34440, 08A3646C, 08A36BA0) passes set 0 - sets 1..19 are never used. Credits left
    (08A34290) = the total minus the 8 categories' chosen costs (08A342E8 -> 08A3454C). 08A09928 also stores into set 0 from a
    game structure (+24: {category, value}); its caller is not traced yet (possibly the in-match customisation).
  - 08A09928 is a virtual method (vtable 0x08B1473C, methods 08A08ACC 08A08B60 08A096A8 08A09F70 08A0A9E0 08A093C0
    08A09928; second base at 0x08B14774 with the thunk 08ACF460) of an object built by 08A089B8, which 08971770 calls (the
    function that copies the profile into the game's settings: BFF.ControlMethod etc.). It writes {category, value} pairs from
    its +24 list into loadout set 0. Its role (the in-match loadout object?) is not traced further yet.
  - Loadout at match start: Aurek now spawns with the profile's set 0. Uncertain: the original's own path from set 0 to the
    spawned soldier (no reader of 08977918 outside the front end was found; 08A09928's object, built by 08971770, may hold the
    match's copy) - Aurek's mapping of the 8 categories to the soldier's equipment is the earlier traced one (play.c).
  - M3 closed with these uncertain (evidence): (1) the original's path from loadout set 0 to the spawned soldier - every 08977918
    caller is front-end code; 08A09928's object (built by 08971770) runs a large per-match update (08A093C0: 08A0AF14 / 08A0B070 /
    08A0B1A0, reads 0x08C29324 / 0x08C29328) and pushes {category, value} pairs back into set 0, so it likely holds the match's copy
    - not proven; (2) no byte check of the saved loadout against the original's own save (the layout is traced exactly: 08977A34);
    (3) the soldier preview (E_Anim_AppDisplay, 08A36BA0) still needs a running level in Aurek; the carousel item placement is not
    compared against the original's frame.
  - Loadout limits: no credit check on taking an item (08A27F28); credits shown = total - remaining (08A27994, 08A34290); sell
    gated by 0x08C2CEA8 (08A27FD8). Uncertain: whether going over the total has any other consequence (no reader of the remaining
    credits besides the display was found yet); where the total (200) itself is set (0x08C2CEAC +0).
  - Allowance 100 (08A34280); the 200 is the recomp's RS_CREDITS mod. Over 100: MP_CustomOverSpent on leaving. Faction versions
    traced (08A23598). Uncertain: Aurek's menu faction outside a match is 2 always - the original keeps the last match's faction
    (0x08B1BE00 is written by 08A28C68 while a player exists).
  - RESOLVED: the set-0-to-spawn path = 08A08EF8 (the match's player object) -> 08978170 / 089781D8 / 08978240 / 089782A8 /
    08978310. Uncertain (M4): (1) where the kit record (+168..+204, then message 0x8027?) is consumed - so whether the soldier's
    health is the level table's value or the blueprint's "Health" (Aurek takes the blueprint's when present); (2) category 7 feeds
    two values (a 100..200 one and the 0.5..2 capture multiplier) - which drives capture, and what the other is; Aurek maps
    level 0 of category 7 to 1.0 [assumed earlier from a measurement], the table's level 0 is 0.5; (3) with +0x1B0 clear the kit
    has no items from the profile - what the soldier gets then.
  - M5 open: (1) bot count - the original's Team Selection on Boz Pity lists 8 Rebels + 8 Empire before the player joins; Aurek
    runs 15 (AK_BOTS) split 8 / 7. Whether a bot leaves when the player joins is not seen yet (check the score board after joining);
    (2) the list's selected row colour on Mode / Era / Planet is dimmer in the original (focus state of the list, not traced).
  - M5 spawn map side by side (Auto chosen on Team Selection): title, timer, prompts and map shape match. Differences: (1) the
    original's spawn map opens on the player's own post (the rightmost, blue, "Plains"); Aurek opens on a red post at the top
    ("Ruined Gatehouse") - the team after Auto or the post colours / ownership differ (Aurek logged the player as Empire);
    (2) the original's Command Post / post-name rows look disabled (dim), Aurek's bright; (3) the level behind is lit brighter
    in the original (a rendering item for later). Not yet seen: spawning, dying, the score board, the bot count.
  - FE_TeamSelection = 08A2F7F4 (handler of the UTF-16 name at 0x08AE0558). Traced so far: it counts each side's players
    (08A26FC0 per player: s2 the good side, s3 the evil side); choosing side 1 or 2 joins only while that side has fewer than 8
    (s2 / s3 < 8) - so 8 per side is the cap, which fits the original's 8 + 8 list with the player not yet counted. Auto (0)
    goes through 0x08B1BB5C / 0x08B1C148 (a state value 4 / 0) and 08978770 + 08838148 - its side rule is not read yet.
    Aurek's Auto keeps the match's starting side (viewer.c AK_FE_TEAM) - unproven.
  - Auto (FE_TeamSelection 0): 08A2F7F4 stores 4 into 0x08B1C148 (the team request: 1 / 2 the sides, 3 another path, 4 auto) and
    hands it to 08A09190(player 0x08C2C3E0, request) - a method of the match's player object (vtable 0x08B1473C family); the side
    for 4 is decided there (not read yet). Then 0888AF68(0x636B2446) opens the next page.
  - 08A09190(player, request): only while the player's +4 == 1; stores the request at +24 and calls 08A0A890, which sends message
    0x8029 {request} (088ACAD8, 4 bytes) and sets the player's state (08A0A178(2)). The side for request 4 is decided by the
    receiver of message 0x8029 (not found yet). Evidence from the harness frames: on Boz Pity with 8 + 8 bots, the original's Auto
    put the player on the side whose posts are on the right of the map (shown blue) - by Aurek's post layout the Rebels' side.
  - Message 0x8029 (the team request): the message factory 0896F170 maps 0x8029 to 08A14A18, which builds a 56-byte message object
    (08A94784, then 08A148BC). Its handling method (the object's vtable, set in 08A148BC) is the next step for Auto's side rule.
  - 0x8029's message object (vtable 0x08B15218: 08A14988, 08A149CC, 08A14A5C ...) only packs / unpacks the request; the side for
    Auto is decided by the message's receiver in the match code - not found within the time set for it. Auto stays UNCERTAIN;
    Aurek's Auto keeps the starting side.
  - Spawn map first post: Aurek's rule is right for its team - logged "team 0, owners 1 0 0 0 0 1": the player (team 0, Empire)
    holds posts 1-4 and the map opens on post 1. The original's player (after Auto) was on the side holding the 2 posts on the
    right (owner 1 here), so the difference is Auto's side rule (UNCERTAIN above), not the spawn map. Not yet known: whether the
    map's blue means "the player's side" or "the Rebels".
  - M5 closed with these uncertain: (1) Auto's side rule (the 0x8029 request's receiver not found; the original's Auto put the
    player on the side holding Boz Pity's two right-hand posts); (2) the bot count with the player in (the original lists 8 + 8
    before joining, the cap is 8 a side; Aurek runs 15); (3) the score board after a death not compared side by side (the harness
    route would need the player to die).
  - M6 Boz Pity walk_forward (compare_walk.py, planet 0, 600 frames, from the original's spawn 152.20 1.49 106.83, facing
    (-0.929, 0.370)): (1) the original starts slowly (0.10 m in 5 frames) in its facing (157 deg in game x/z), holds 157-158 deg;
    (2) Aurek moves 0.58 m in its first 5 frames at 74 deg (a push-out at the spawn?), turns to 121 / 139 / 146 deg by frames
    15 / 30 / 60 and stays at 146 deg - about 12 deg off; (3) the original stops / slows against something at t 4-5 s and 7-8 s
    (133.4, 113.0 and 127.4, 112.6) that Aurek's path never reaches. Speeds after the start: original 5.6-6.3 m/s, Aurek
    5.2-6.3. Next: the cause of Aurek's first-frame shove and of the heading offset (the camera's yaw at spawn vs the
    soldier's? the spawn inside a collider?).
  - M6 walk_forward, Aurek alone with the same spawn (AK_TEST_SPAWN 152.2009,1.4943,106.8308, facing -0.9289,0.3704):
    frame 0 -> 1 the player jumps 0.57 m at 62 deg (+0.27 x, +0.51 z) - a push-out on the first step (the original's first
    frames move 0.1 m in the facing); after it, the heading is 152 deg for frames 2-60 (original 157) and drifts to 146 deg
    over 1-2 s. Next: what the 0.6 x 1.8 x 0.6 body overlaps at the spawn (level faces? an object box?), and the 5 deg left.
  - The first-step shove is a VEHICLE: AK_DEBUG_BODY logs "player pushed 0.276 0 -0.503 by body 3 (vehicle)" on frame 1, then
    small pushes by the same body every frame (the heading drift). With AK_BOTS=0, body 3 = vehicle index 3 - Boz Pity's post-3
    vehicles are Carrion_Spat (x3) and T4B_tank / AT_ST. So Aurek stands one of them where the original's player spawns freely;
    next: the vehicle spawns' positions in Aurek against the original's state.log objects near (152.2, 106.8), and their boxes.
  - The body is Boz Pity's placed AT-AT (vehicle 0, "- / AT_AT, placed", a walker on a 38-point 471 m path): it stands at
    143.72 1.39 105.04 (game axes), yaw 1.069, 8.7 m from the player's spawn, and its box reaches the spawn (push 0.276 / -0.503
    on frame 1, then small pushes each frame as it walks). The original's player at the same spawn is not pushed. To find: the
    original's AT-AT position at the match start (state.log obj lines; class 8008 / walker), and how the original collides a
    soldier with a walker (its legs / body parts rather than one box?) - the walker's collision in src/game (08A04xxx physics,
    the walker's parts).
  - Not a collision bug: Aurek's AT-AT starts at its placement (143.7 1.4 105.1) and walks to its path's start at ~2 m/s
    (reaches 130.3 / 114.3 at 10 s, AK_DEBUG_WALKER); the original's AT-AT is already at 130.61 1.01 114.88 when its player
    spawns (state.log, class 0x8014 id 30d44) - the original's match runs behind Team Selection and the spawn map, so the
    world is ~10 s older than the player. compare_walk starts Aurek's world with the player: the walker is still beside the
    spawn. Fix for the test: run Aurek's world first (a warm-up of the original's elapsed match time) before the player spawns.
  - Boz Pity walk_forward with --warmup 590: within 0.12 m to 2 s, 0.6 m at 3-4 s (both slow at the AT-AT near 133 / 113.5:
    the original to 1.95 then 0.53 m/s, Aurek to 2.2 / 2.0). Then Aurek FALLS THROUGH THE WORLD: at 7 s y +1.54 m, at 10 s
    +62 m (game y down) near 128.7 / 114.7, while the original walks on at y 0.6-0.9. Likely the AT-AT's box pushing the player
    down or into the ground (Aurek collides with the walker as one box; the original only slows - its legs?). To fix next.
  - The fall is NOT the AT-AT: its pushes are small and level (y 0). At game 128.85 / 114.98 (engine 128.85 -0.93 -114.98) Aurek's
    player loses the ground ("air", vel y -2) and free-falls (12 m/s down after 1 s, 89 m by the end) - Aurek's collision has no
    floor there, while the original walks on at y 0.6-0.9. Next: what the original stands on at 128.7 / 114.7 (the level mesh's
    faces there in Aurek's collision; a placed object / bridge / mover the original collides with and Aurek does not).
  - The floor exists: AK_DEBUG_GROUND_AT="128.85,114.98" finds one face (23185) at game y 0.748, normal up (0.14, 0.99, -0.10),
    flags 0x0010 (rest on it whatever the slope - ak_character.c), material 7 - the original's 0.6-0.9 walk is on it. Aurek's
    player was at game y 0.78 at 129.60 / 115.00, then 0.93 at 128.85 - 0.18 m UNDER the face - and fell. So the body went
    through the face's edge or got under it from the slope before (sweep "inside" / edge case, ak_col_box_sweep). Next: step
    frame by frame between 129.6 and 128.8 (AK_DEBUG_BODY=3 every frame), find which face the body crosses and why the sweep misses.
  - Cause of the Boz Pity fall (frame by frame, AK_DEBUG_BODY=5): the body walks on face 23185 (contacts t 0.3-0.4 every frame),
    meets two other faces at 129.08 (t 0, n -0.03 0.99 -0.10) and 129.00 (n 0 1 -0.10), and from there NO sweep hits anything:
    the box has sunk more than 2 cm into face 23185's plane, so every sweep against it returns "inside" (-1), which Aurek ignores
    (ak_collision.c box_tri_sweep_game: only a sink under 2 cm counts as touching) - the body falls through. The original's
    handling of "inside" (088B6510, PARITY 1.3b) is the missing piece: read it and port it.
  - Read: 088B6510 is an empty function. The body step's triangle loop (088C4CF4, around 088C623C) keeps a sweep result only when
    t >= f25 with f25 = 0, so the original ALSO skips "inside" (-1) - Aurek's base rule matches; Aurek's extra (a sink under 2 cm
    counts as touching) is its own [assumed]. So the fall comes from Aurek letting the box overlap face 23185 in the first place:
    look at the frames before 129.08 (the t = 0 contact with the other face, n -0.03 0.99 -0.10, the SKIN back-out along that
    normal, the slide's next pass) against 088C4CF4's response (088C5354..088C55B8) to see which step differs.
  - The entry step found (AK_DEBUG_BODY=6 logs sweep misses too): up to 129.125 each frame lands on face 23185 (pass 0 t ~0.32)
    and moves its rest along it; at 129.115 pass 0 moves the WHOLE step (-0.0928, +0.0025, -0.0285) with no hit - on 23185
    (n 0.14 0.99 -0.10) that horizontal step rises 0.0102, so the move climbs 0.0077 too little and the box's leading corner goes
    under the face: every later sweep against 23185 is "inside" and skipped. The move's vertical part comes from body_update's
    ground projection (vel laid along c->ground_normal, then gravity) - a flatter normal than 23185 was in use (the short
    ground probe's face or the other faces at 129.08 / 129.00?). Next: log ground_normal per frame and where it came from, and
    read the original's rule for the ground normal / the move on ground (088C4CF4 / the soldier's move).
  - Tried (not kept): never pushing a grounded soldier downward (the AT-AT's push has -0.003 y a frame) - the walk still falls at
    7 s, so the sink is not that push. Ground normal before the entry step comes from the move (face 23185, vel y +0.591, uphill)
    - also fine. Remaining suspects: the AT-AT's horizontal push each frame (0.058 / 0.031) moving the box sideways into 23185's
    rising part without a sweep (pushes are applied directly to the position, no collision test), the order push -> move.
  - Aurek pushes soldiers off vehicles by each model's whole bounding box (play.c vehicle_box -> model_box). Logged sizes on Boz Pity:
    AT_AT -5.88..5.82 x -0.03..27.46 x -20.01..10.66 (11.7 x 27.5 x 30.7 m - legs, body and head as one solid block), T4B_tank 6.9 x
    3.6 x 6.5, AT_ST 3.4 x 6.9 x 4.5, Carrion_Spat 0.9 x 3.4 x 3.7. The original's player walks past the AT-AT's legs with only a
    slowdown, so the walker's push shape in the original is not this box. Next: trace the original's soldier-vs-vehicle
    separation (which shape a walker offers: its physics body / per-part boxes) and use it; the AT_AT box is the likely cause of
    both the push and the sink under Boz Pity's slope.
  - 08A05F60 (the physics shape lookup): ids 0 / 1 are the built-in shapes (soldier box, 0.2 m cube) at 0x08C2C29C + 40 x id;
    other ids are looked up by a1 in a linked list from 0x08B3071C (+0 the id, +4 / +36 / +40 its parts) - shapes made from the
    models' own data. Next: who creates those shapes for a walker (the AT-AT's physics body: its id and the parts' sizes) and
    which shape a soldier is separated from - then port it in place of the whole-model box.
  - The shape list at 0x08B3071C has many readers (0882BEB4, 0882C024, 0885F00C, 08863FB8, 08864108, 08864AE0, 088D082C ...);
    088D0188 (from 08832200 / 088D0244) and 088D0268 (from 088D0350 / 088D0370) both allocate / free (08A94748 / 08A94768) and
    call 08AB6830 - the list's add / remove, likely when a model resource with collision data loads. Next: the vehicle's physics
    body creation (the walker's class constructor -> its shape id -> the model's collision parts) - e.g. via the AT-AT class
    0x8014's setup, or gdb on the harness original (break on 08A05F60 while the AT-AT spawns, read a0 / a1).
  - gdb on the harness original (drive.py --gdb, new; Boz Pity to the match start): 08A05F60 is called almost always with a0 = -1
    (look up by id) and a1 = a shape id hash - 0x7FDD5A45 (144 calls), 0xFF09259 / 0xFF09258 / 0xF033BF30 / 0x7D7838E7 /
    0x7AB15FDF / 0x58D15ED / 0x58D13BF (24 each), 0xF80A5246 (14), 0xCACEF359 / 0xB1F6006E (5), 0x1221A2CF (1); a0 = 0 with
    0x5D42F1F0 (14). Every call comes from 0885EF6C. Next: which of those ids is the AT-AT's (break in 0885EF6C and print the
    object's class / blueprint), then the shape's parts.
  - FIXED (assumed rule): pushes go through the sweep (ak_char_push); Boz Pity walk no longer falls. Open: the 4.5 m gap at the
    AT-AT from 5 s (the original slows to 0.53 / 1.14 m/s against it, Aurek holds ~2 m/s) - the original's soldier-vehicle
    response (speed loss against a body) is not read.
  - Boz Pity run_jump (--warmup 590, 300 frames): within 0.24 m to 3 s. The jump (game y, down): both rise alike to frame 84
    (-0.195 both); apex original -0.4865 at frame 98, Aurek -0.4268 at 97 (0.06 m lower); the descent is faster in Aurek
    (frame 116: -0.060 vs +0.080; 132: 1.076 vs 1.284) - a rough fit from the apex gives 9.5 m/s^2 for the original and 10.2 for
    Aurek (the ground under it differs slightly too). Next: the jump's vertical speed and gravity in the original (the jump
    impulse, a lower gravity while rising / held?), against Aurek's ak_character jump.
  - Boz Pity run_sprint (--warmup 590; the sprint pressed at frame 30): steady sprint speed matches (10.6-10.9 m/s both), but the
    original is at sprint speed within 18 frames (frame 48: 10.0 m/s) while Aurek ramps over ~54 frames (7.76 / 8.21 / 9.6 /
    10.49 at frames 48 / 60 / 72 / 84) - a 1.1-1.9 m gap opens in the first 2 s. The 0.2 s clip crossfade (1.1) alone would give
    ~12 frames: check Aurek's sprint start (when the sprint begins after the press, a stamina / speed ramp, the clip choice).
    run_jump note: the jump rule is traced (1.5: impulse 6 along the ground, gravity 10); the 0.06 m apex difference on Boz Pity
    is within the take-off's 0.1-0.2 m offset on the slope - not a separate rule difference (kept open with the offset).
  - Sprint onset, read so far: Aurek sets ch.sprinting on the ground only (ak_character.c line 173: in->sprint and stick
    forward > 0.3) and plays PLAY_SPRINT through ak_loco's crossfade; PARITY 1.8 measured the same rule on Hoth (0.1 s after L,
    0.2 s crossfade) and matched within 0.22 m over 15 s. The slower Boz Pity onset is therefore likely the uneven ground:
    if the ground flag flickers in frames 30-90 the sprint / run choice toggles and the crossfade restarts. Next: rerun
    run_sprint and read the trace's ground column (5th) and the clip state per frame [hypothesis, not checked].
  - Sprint onset cause found (checked): at the sprint's start Aurek's soldier leaves the ground over a crest for 9 frames
    (trace ground flag 0 at frames 39-47; game y 1.080 -> 1.043, 4 cm above its line), then lands and re-blends - the slow ramp.
    The original glides over the same crest within 1 cm (1.094 -> 1.081 -> 1.085 -> 1.099). So the original keeps a fast soldier
    on the ground over crests (a ground snap / step-down in the body step, or the uphill velocity not carried past the crest);
    PARITY 1.8 allows at most a one-frame lift there. Next: trace the original's ground follow (088C4CF4 / the soldier's move:
    a downward probe distance or the vertical velocity reset) and port it.
  - M6 crest (2026-11-23): the ground lay is redone each grounded frame and moves the body without staying in its velocity -
    the original's sprinting soldier gets no climb past a crest (gdb on 088C4CF4: +0.0028 = gravity only on the first frame
    over). Remaining: after ~105 frames on Boz Pity the AT-AT's model box stops Aurek's soldier 11.2 m along the walker's long
    axis; the original's soldier gets to 6.8 m - the original's walker collision shape is not known (Uncertain).
  - M7 weapon raise (2026-11-23): fire from a lapsed stance waits 0.1 s (soldier +356), the stance lasts 3 s (+352, bit 1 of
    +520; 0899851C / 08993D38). Uncertain: what else enters the stance (lock-on, zoom) and whether they also wait.
  - M7 damage (2026-11-23): 089A7310's second argument is a 32-byte hit record - word 1 the attacker's handle, word 3 the
    damage (float; seen 30, 25, 8 from bots); the target's +0x25C is not the health for those targets. The player's own hits are
    not measured yet: lock-on (R) + fire from the Boz spawn or after a teleport hit nothing. Uncertain: the player's damage per hit.
  - M7 player hit (2026-11-23): the original's player hit record = { 0x161faf77, 0x30d63, 0x3e8, 15.0, -1, 4 } - damage 15 as
    Aurek's rifle. The bots' records carry 30 / 25 / 20 / 10 / 8 (their own weapons). --tp's y lands ~12.9 m above the given
    value (the drop seen twice) - Uncertain: the --tp axis convention.
  - M7 grenade (2026-11-23): fuse 3.0 s matches; the throw's pitch does not - on Boz Pity's spawn (ground rising about 7 degrees
    ahead) the original's aim frame is about 2.6 degrees UP (19.5 forward / 4.9 up), not the 8.2 degrees down measured standing
    on flat ground. Uncertain: what sets the aim frame's pitch (camera pitch, ground slope, the soldier's aim) - trace the frame
    08A1A77C reads. Uncertain: what the player record's +56 is (the 0.8 damage factor to local players, 08A3CCF8).
  - M7 throw frame (2026-11-23): the throw uses the soldier's aim frame (vfunc +92), 4.0 degrees up at Boz Pity's spawn, 8.2
    down on flat ground. Uncertain: what sets the soldier's aim pitch at rest (the camera's pitch over the ground, the ground's
    slope, a default) - trace vfunc +92 of the soldier class and its pitch source; then the throw follows. Belongs with M8/M13's
    camera work.
    Followed (2026-11-23): the soldier's vfunc +92 is 08998D04 - it returns soldier +276, a matrix refreshed at most once a
    frame (+312 = the frame counter D_08B285AC) by 08878E84 from the soldier's model component (vbase +4): the frame is the
    model's (likely an aim bone's, so the pitch would come from the aim animation's blend) [assumed: bone - 08878E84 not read].
    08878E84 read (2026-11-23): it is not a bone - it blends two stored orientations (a 2-slot history at +0/+32, quaternion at
    +12..+24, time at +28, the newest index at +64) by time and writes the 3x3 frame. The aim frame is the soldier's interpolated
    orientation; what writes its pitch each tick is not traced (Uncertain, carried to M8: the aim/lock pitch).
  - M8 lock timer (2026-11-23): 0899B62C - candidate +424, timer +376 at rate 1.0 (key 0x6e6b3925 absent from data), head
    after "lock on to head time"; the target's vfunc +24 keeps or drops it. Still to trace: who chooses +424 each frame
    (callers of the set-target vfunc +440: 08994C30, 089DD9CC, 089AE9DC, 089AEA7C, 089CC67C) and what vfunc +24 tests.
  - M8 target choice (2026-11-23): 089DD9CC scores 100(1-d/50) + 100(1-angle/60 deg), line of sight required, -200 for the
    soldier's +228 list; ported. Uncertain: the eye point (soldier vfunc +56) and the target point used, what fills +228, what
    the candidate's vfunc +24 tests, when 089DD9CC runs (its a1 flag).
    The candidate's vfunc +24 (soldier: 0899F300) = alive (vfunc +112, 08AC33EC) and 089DCAAC(target, asker): the asker's
    weapon decides - class 0x8004 / 0x801E targets take their own paths, the weapon's +364 bits 2 / 3 / 17 (the
    OnlyLockOnto... keys [assumed]) and a weapon hash 0xDA0CAE3B are tested. Aurek keeps its key-based rule (OnlyLockOnToVehicles
    / Humanoids); the exact bit meanings are Uncertain.
  - M9 (2026-11-23): Boz Pity's counts are words 0x0AFBB268 (Rebels) / +4 (Empire) in a deterministic run (RS_DRIVE_PEEK);
    start 100 / 125 and the Empire's 4 s bleed match Aurek. Next: a capture - teleport onto a post (pass --tp y about 12.8 above
    the ground's game y: -15.1, 16.3, 168.6 for post 1) and find the post's state words (class 0x8008 objects, e.g. 186a6).
  - M9 capture (2026-11-23): the original's player alone on enemy post 1 for 23 s did not capture; Aurek did. 089EC900 (post
    update) / 089ED04C (participant test: 5 m, alive, +84 != 999, post +192 bit 2) partly read. Next: gdb on 089ED04C's return
    for the player soldier (0x0afe9910) and on the list 089EC900 walks; --tp lands +4.5 x, +12.8 y (game), -0.2 z off the
    given point (pass -19.6, 16.3, 168.8 for post 1's centre).
  - M9 capture solved (2026-11-23): the original's lone player drained post 1 at 0.5 / s and stalled under the 30 s contest
    timer while Rebels were near - no rule difference in structure. Open (Uncertain): the player's rate 0.5 here vs 1.0 measured
    on Hoth (read the profile's third attribute, +0x1D4 / 089782A8, in this route).
  - M10 (2026-11-23): the original's Imperial bots on Boz Pity hit with BobaFett_Blaster_Rifle (hash 0x89B1803A, 25 a hit),
    though the AI table names EMP_Blaster_Rifle. Next: gdb on the weapon loader (08A16FD8) / the bot loadout draw (0897FA38)
    to see where the name changes (a per-level or per-class substitution, a child by faction).
  - M10 (2026-11-23): bots on Boz Pity carry Ackbar_Blaster_Pistol and BobaFett_Blaster_Rifle with no hero in play (hero
    countdown 178.8 s at the start). Next: 08985D74 (the unit maker) - which unit classes the bots spawn as and where their
    weapons come from (the class's Loadout_1..3 keys, as the hero Humanoids have, or a level table).
  - M10 bot weapons (2026-11-23): ported the faction-child resolution (Imperial bots: BobaFett_Blaster_Rifle; Rebels:
    Ackbar_Blaster_Pistol). Next: BobaFett_Blaster_Rifle's multishot spread (45 degrees in Aurek, the original's bots still hit
    with it) - trace how ProjectilesPerShot / MultishotSpreadAngle aim (08A1C950 area) and the AI accuracy cone.
  - M10 multishot (2026-11-23): the fan rule ported (08A1C5E4). Open: the AI's hit rate with Boba Fett's rifle (2 vs 14 a
    minute) - compare the AI accuracy cone (AIWeapon_Accuracy_Normal) and the fire node's burst for this weapon; longer runs.
  - M10 fire (2026-11-23): Aurek's Imperial bots fire EMP_Blaster_Pistol 120-587 times a minute (original 13) and Boba
    Fett's rifle 5-12 (original 36). Next: why they hold the pistol (the loadout draw 0897FA38, ai_weapon_choice 0893F65C) and
    the burst / pause for weapons without heat (08A24648 / 08A24740) - gdb the fire node 0893F2F8 per bot.
    Narrowed (2026-11-23): in Aurek two Imperial bots (1 and 5) fire EMP_Blaster_Pistol 205 / 382 times a minute at soldiers
    30-37 m away (about 25 shots per target, no pause) - bots without a rifle (the rocket loadout, weight 0.3 once the enemy
    has vehicles). The weapon choice 0893F65C has only the 8.5 / 12.5 m tests (D_08AED8F4 / 8F8), as Aurek's; the burst /
    pause rules (08A24648 / 08A24740) also read the same. Next: compare the loadout draw on Boz (how many rocket loadouts the
    original gives; its vehicle count at 0x08C2AC24 + 0x08C2AFC4) and EMP_Blaster_Pistol's heat keys in a bot's hands.
  - M10 (2026-11-23): bot re-arm bug fixed (clipless weapons were re-given every frame). Open: shots per weapon still differ -
    ALL_Blaster_Rifle (no heat: 22.5 s bursts, no pause) 217-225 a minute in Aurek vs 22; Boba Fett's rifle 8-11 vs 36. Trace
    the fire node 0893F2F8 per bot in the original (gdb: when it calls the shot, and why it stops) - the burst values for a
    heatless weapon may not be what the original uses.
  - M10 burst keys (2026-11-23): whether 0896CDCC / 0881BA44 walks a blueprint's parents decides the Rebel rifle's rate
    (Base's 0s inherited: streams; own keys only: one shot per 3.75 s, as the original's 22 a minute suggests). Read 0881BA44,
    or gdb 08A24740's return for ALL_Blaster_Rifle (expect 3.75 if no inheritance).
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
  - 2026-11-21, hit reactions looked for: in the soldier code only three functions name table rows outright - the idle
    variations (08998828: 18 / 19, and 16), the rolls (089A392C: rows 24-27 from the controls 12-15, or 33-36 for a 089DE500
    body) and 089A51A8, a state that plays the row a message names (+0xC; it also sets the soldier's +0x208 bit 4 as the roll
    does). In the harness (Hoth, the player among the enemy for 66 s, 99 hits on soldiers - RS_ANIMMSG_LOG, a hand hook on
    089A51A8) that state never started. So hits play no reaction row in conquest [measured on Hoth]; who sends 089A51A8's message
    is not found (scripted moments?). Left: the layers' blend rules.
- [x] **6.2 Skinning [missing].** v2 meshes (Taun-Taun, Vader, the cone, flags) are drawn rigid in the bind pose.
  - Done 2026-11-19: the weighted meshes have been skinned since 1.8 (render/ak_scene.c draw_skinned); what was missing was their
    motion.  The CTF flags now flap (flag_Flapping, flag_Flapping_Backattch while carried).  Creatures (the Taun-Taun) play their
    blueprint's clips by the game's rule (089B4898 / 089B47F8): forward speed above 10 runs, above 1 walks, below -10 / -1 runs /
    walks back, else a turn faster than 0.05 rad/s plays the turn clip, else AnimLanded; the clip runs at speed x 0.11 (turns:
    rate x 0.75).  Open: the 1 s blend between creature clips, AnimFidget, the creature deaths; the cone's capture clip is 6.4.
- [x] **6.3 Death animations and ragdoll [done 2026-11-21: no ragdoll].** The death clips. After death the body has gravity on (08993D38): trace what it does next.
  - 2026-11-19: measured in the harness (Hoth, killed while running): the body stops where it falls - no slide - and stays
    there; gravity stays on.  Aurek: the player's body no longer slides on, and bots' bodies (frozen in the air until now) fall
    to the ground.  The death clips now come from the animation table (rows 20-23, 6.1).  2026-11-20, the pick traced (0899FF38):
    20 + (the game's random >> 1 & 3) - one of the four at random each death, not by the hit's direction (unless the soldier's
    +196 is set: row 32 for a 089DE500 body; not seen in play). Aurek picks the same way for the player and the bots.
  - 2026-11-21, closed: what follows the fall is measured - the body stays where it lands (gravity on, no slide, no ragdoll) and
    is removed 4.8-5.0 s after the death (1.10); Aurek does both. Nothing else happens to it.
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
    2026-11-21, live (harness RS_DRIVE_POSTS): the animCap record's +0x14 reads 2.400 - the clip's length (cone_of_light_animCap
    2.40 s). In 089E9A24 the same object's +0x54 is the owner (4 neutral), +0x60 / +0x64 the full and current amounts (the capture
    sound's pitch 0.6 + 0.6 x amount / full); that object is reached through a virtual-base thunk (08AC91E4, vtable 0x08B086A0)
    and is not the 0x8010 entity the report lists, so its amount's units (seconds or a fraction) are still not read.
    Read later the same day: the post itself is class 0x8008 (its main vtable 0x08B086A0 holds 089E9A24); live on Hoth +0x54 is
    the owner (2 / 3), +0x60 the capture time (10 s; 30 s for the Empire's hangar post) and +0x64 the amount in seconds (10 at
    full) - Aurek's progress. **Engine:** the cone plays cone_of_light_animCap forward while the amount is under 2.4 s, backwards
    once it is not, then cone_of_light_rest (AK_CONE_ANIM; AK_DEBUG_CONE logs the switches; Hoth 2 min: the cone opens as a post
    drains to neutral and folds back as it is retaken). The logo's value: 08809B24 writes an instance's colour at +0xEC..+0xF4
    and 08809AB8 the word after it, +0xF8 - its alpha; 089E9A24 sets the logo's alpha to the capture clip's progress (+0x44) when
    the clip runs backwards, 1 - it when forwards, and 1 without the clip: the logo fades out as the cone opens and back in as it
    folds. Ported (the additive logo's tint scaled by it). [assumed] a change of direction plays the clip anew from its start
    (forwards) or end (backwards) - 089E9930 starts it with the new flags.
- [ ] **6.5 Heroes [missing].** Saber combos, blocking, force powers, saber throw. Blaster heroes' own tables.
  - 2026-11-19: a blaster hero played by the player now takes generic_male's set by its own weapon's AnimPose (the 6.1 rule),
    and the soldier's set comes back when the hero ends.  Open: everything else listed (saber combo timing, blocking, force
    powers, saber throw), bot heroes' sets (bots share one clip set).
  - 2026-11-21, tooling for measuring heroes: RS_HERO_FAST=N (a hand hook on 08974318) cuts each side's hero countdown
    (D_08C28FAC[side], 180 s) to N seconds at the start; the harness program `hero` accepts the offer (d-pad left at 400 frames
    after the match starts) and presses cross (the saber) at 900 / 1000 and mashes it 1100-1250. Seen: the offer reads "You can
    now play as Darth Vader / Accept or Decline (27 seconds)" ~5 s in; accepted, the player is Vader with the saber and a second
    item (the force push / throw icon), both unlimited. Not yet: the strokes' timing and damage (no enemy was within reach in the
    two runs; the message-row state 089A51A8 does not play them; the Lightsaber weapon's update 08968114 only runs the blade's
    extend / retract) - next: log the hero's clips (the anim player 088155D0's layers) and teleport into a fight.
    2026-11-21 (later): a run teleporting the accepted hero to the Rebel base (-160, -1.5, 185) and mashing cross for 17 s logged
    no hit of a saber kind (RS_DMG_LOG; the teleport may not move a hero - not checked). The anim player (088155D0) keeps its
    layers at +0x84 (param +0x21 words), each with a vtable update at +0x14 and flag +0x10 bit 0; which field names the clip is
    not read. Left for a later session: a per-layer clip log, a working way into melee range.

## 7. Audio

- [x] **7.1 Music mixing [partial].** audio/ak_music.c "not yet mixed" into the mixer groups.
  - Done 2026-11-19: the music was already in the mix under the mixer's "Music" group (every SDMX group sits flat under Master,
    master 1.0); its level was a guess (0.6).  Measured against the original's own output (harness RS_WAV_DUMP on Hoth, the
    track fitted to the mix by least squares): 0.5625 (0.555-0.567).  The game's music mixer (0891260C) keeps a gain of 0.75 for
    one stream and 0.5 while two cross-fade (moving 0.02 a step), times the stream's volume; the profile's master / music / sfx
    volumes default to 1.0 (08977808).  AK_MUSIC_VOLUME defaults to 0.5625 (settings.txt files updated).  Open: the two-stream
    cross-fade (Aurek plays one stream).
- [x] **7.2 Missing effects.** Vehicle collisions ("Collision sound"), Doppler, any reverb or occlusion the game uses.
  - 2026-11-22, reverb: the game imports only __sceSasRevVON of the SAS reverb calls (no RevType / RevParam / RevEVOL), through
    08A96E50 (voice, on/off) - the effect's type and send level are never set, so [assumed: the PSP default leaves it off] the game
    has no reverb. Aurek matches (none). Pitch reaches the voices only through __sceSasSetPitch (08A96AC8 / 08A96CFC, from the
    mixer's voice table at D_08BD8184, 48 bytes a voice, its +4) - whether anything writes a speed-based (Doppler) pitch there is
    not followed yet (the table's writers: 08911818..08912030).
  - 2026-11-22, followed: no Doppler - a voice's pitch is its sample's rate (08911818, held to 1..16384) times a ratio set only
    through 0890EF70 / 08912030 (ratio 0 pauses), and the ratio is the event's random pitch (088DB940's callers 088E57E4 /
    088D20C8: min + random x (max - min)) times a global scale (+24892); nothing speed-based. No occlusion: the 3D path (088DC190)
    calls no collision code. Its distance gain (088DC6BC) is linear - 1 within the event's near distance, (far - d) / (far - near)
    between, 0 beyond - and Aurek had squared it: fixed (audio/ak_audio.c). Box emitters (flag 0x800) take the least of three
    per-axis ramps (088DC6F4), not built. The pan is an angle mapping (atan2 to the listener, pulled to the centre inside the near
    distance, 088DC5AC..) - Aurek's sin pan stays [assumed].
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
  - Hit direction: message 0x8050 (089E3868) leaves the attacker's position at the player controller +0x94 (08A09928). Done
    (the line was stale, checked 2026-11-21): the element is traced (NATIVE_ENGINE 1.10 row: 08A541E8 / 08A547B8 / 08A543C8 /
    08A548C8 / 08A54E4C) and built (hud.c hit_marks, fed from viewer.c when the player loses health to a bot - its vehicle's
    position when it drives). Open: hits from turrets and other non-bot sources make no mark (the unmanned turret's source, below).
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

- [x] **9.1 Soldier camera [done 2026-11-21].** FOV (AK_FOV 55) and near/far planes. Trace per mode, including zoom.
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
  - 2026-11-21, the sniper's zoom measured (new harness program `sniper`: the customisation's Weapon 1 -> Sniper Rifle, then
    triangle at 800 / 900 / 1000 frames; RS_PROJ_LOG): the projection's height scale goes 3.05663 -> 6.58603 -> 13.40430 -> back
    to 3.05663 - "fov" 60 across divided by the WEAPON's ZoomMagnification1 (2) and 2 (4), the third press leaving the zoom.
    Found: Aurek read "WZoomMagnification%d" (the key's stored string carries a one-character prefix, as the other keys do), so
    the sniper never magnified; now "ZoomMagnification%d" - Aurek's classic camera gives 0.632 / 0.301 / 0.149 rad high, the
    same 3.06 / 6.59 / 13.40 scales. AK_DEBUG_CAMPOS also prints the field of view.
- [ ] **9.2 Vehicle cameras [partial].** CameraVelocityWeight and the "Min" values.
  - 2026-11-19: measured in the AT-ST (harness, RS_PROJ_LOG): the same projection as on foot (60 degrees across at 480 x 272,
    near 0.25, no far plane), so vehicles share the soldier's field of view.
  - 2026-11-20: the ground vehicle camera measured (harness RS_VIEW_LOG: each view matrix with its frame; Hoth's AT-ST, Boz Pity's
    T4B; the game's world is y-down, so the view's "up" row reads negative). The eye is exactly (0, CameraBestY, CameraBestZ) in
    the vehicle's frame, slope pitch and roll included (AT-ST 13 up / 10 back, T4B 6 / 16, to 0.01 m), less CameraVelocityWeight
    x the velocity (T4B 0.2: 2.6 m further back at 13 m/s, 0.6 m nearer reversing at 3 m/s; walkers 0). The harness's object
    state is one frame older than the view. The AT-ST looks at the ground CameraDistanceZ (20 m) ahead of the vehicle (23.4
    degrees down in its frame); the T4B looks level along its hull. Yaw locked to the hull (within 1 degree).
    Engine: play.c builds the eye this way (AK_DEBUG_VEH_CAM logs it).
  - 2026-11-22: traced. Cameras per class: 089B2DC8 the "Tank" type (tanks, hovers, speeder bikes, creatures), 089BFA98 walkers,
    089AB82C flyers. Blocked: a ray from the pivot (0, CameraMinY, CameraMinZ) to the eye, t = (hit - 0.5) / length in 0..1,
    nearer at once, farther back at 1.0/s. The swing (tank type only): angle -= angle x Damp x dt with the control at rest,
    += control x Rate x dt, within +-Max (CameraMaxYaw: the speeder bikes' 2 rad). Defaults are the game's (MinZ 0, MinY 2.5,
    DistanceZ 250, VelocityWeight 0.2). Engine follows it [assumed: channels 0 / 1 are steer / throttle, and the swing's side].
    Still open: the T4B's 1.5 m sideways eye while turning (the swing gives at most 0.5 m; the eye's x term in 089B2DC8 is
    not decoded), the eye's speed term (the game adds speed x VelocityWeight to BestZ; Aurek keeps the velocity vector, as
    measured), and whether the tank's view follows its turret.
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

## 11. Platform media (converted audio and movies per console)

- [x] **11.1 GameCube** [done 2026-11-22]: DSP-ADPCM audio and THP movies (conversion tool `gc`), played by `platform/gc/movie_gc.c`.
- [x] **11.2 Vita** [done 2026-11-22]: the conversion tool's `vita` target writes the Vita port's own format (WAV, MP4). Aurek's Vita build
  does not play movies yet.
- [ ] **11.3 Wii U** [scheduled for later, owner's request 2026-11-22]: converted audio and video for the Wii U build. To decide: the audio
  format its AX voices take (DSP-ADPCM as the GameCube's, or 16-bit PCM), the movie format and player (THP decoded on the CPU as on
  the GameCube, or H.264 through the console's own decoder), a `wiiu` target in the conversion tool and a Convert_WiiU script writing
  Converted/WiiU.
## 12. Owner's play test on the Vita (2026-11-22, build 462fb78) - to trace and fix

The owner's verdict: about 20% of the way to the original; not ready for bug fixing.  Reported, each to be measured against the
original (PPSSPP harness) before it is changed:
- [ ] **12.1** Space: ship controls need adjusting (handling against the original's).
- [ ] **12.2** Space: enemy ships cannot be stolen (boarding an enemy craft).
- [ ] **12.3** Space: ships cannot dock (landing in a hangar).
- [ ] **12.4** Space: ship placement does not match the original.
- [ ] **12.5** Enemies fire far faster than the player ("a hailstorm"): the AI's rate of fire / burst rules against the weapon's.
- [ ] **12.6** Physics issues (many; specifics to collect).
- [ ] **12.7** Audio stutters; other sound effect issues.
- [ ] **12.8** A thrown grenade shows the wrong model.
- [ ] **12.9** Hoth: after death, spawning at the AT-AT puts the player under the map.
- [ ] **12.10** After death: no spawn point choice, no stats (the score board and spawn map - 1.10b - only with AK_FRONTEND=1).
- [ ] **12.11** Lock-on: ignored by enemies in space; through walls in infantry battles (no line-of-sight test).
- [x] **12.12** Boarding from beside a vehicle (pressed against an AT-ST's side, d-pad up did nothing) - fixed 2026-11-22 [assumed rule].
- [x] **12.13** Vita: the video memory pool filled after several level changes (models and textures missing) - fixed 2026-11-22.
- [x] **12.14** No menus: the front end was off by default - on by default now (not on the GameCube).

- [ ] **11.4** The script FMV node (type 28, `fmv/<name>.pmf`) plays the movie on devices that can (its name is not parsed yet).

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

- [x] **R.1 Level lighting.** Today it is approximated as vertex colour × 2. Read the game's own level lighting data.
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
  - 2026-11-22, the effects' lights followed (not built yet): an effect (FXET) carries a light - its colour curve (RGBA) and
    radius curve, which Aurek's loader skips - and its def's flags word (+64, read raw by the loader 0882ACE0) decides: bit 0
    makes one (088E5398 -> 088E59C8 takes a light record from the pool 0889CE40), bit 8 (0x100) one per particle. Each frame
    (088E5B50) the single light sits at the effect's position (+140) with colour = the colour curve and radius = the radius curve,
    both at the instance's time fraction (+236); per-particle lights sample the curves over the particle's age. 0889D14C frees
    them. In the shipped levels 157 of 3210 effect defs have the bit [assumed: the file's tenth trailing word is +64] - big and
    space explosions, the EMP launcher's, some smoke vents and space battle backdrops. Placed lights are a separate object
    (messages 108 / 90, 0885ACE0: colour x intensity / 510, radius +68). To build: read the curves and flags, keep a light per
    flagged effect, and add them in ak_scene_light_at as 0889B9E4 does (1 - d / r; ambient x 0.235, direction x 0.47).
  - 2026-11-22, built: the loader keeps the light curves, the duration (the first word after the emitters, def +52 - 0882ACE0
    reads it there) and the flags [assumed: the tenth word, version 14]; ak_pfx_lights gives one light per flagged live effect
    (or per particle with bit 8) and play.c hands them to the scene, which adds them to each model's light as 0889B9E4 does.
    Seen on Space Yavin: explosion lights of r 5.2 / 1.5 m (AK_DEBUG_DYN_LIGHTS); none on Hoth (no flagged effect there).
    Placed light objects (0885ACE0) are not built.
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
  - 2026-11-22, the level draw's material states traced (089092FC; the material record: six texture words, the flags +24, the
    mode +28, the extra +32, loader 088292E0): flags 0x20000 -> blend mode 1 (alpha), alpha test on, depth writes off; else 0x2 ->
    no blending, alpha test on, depth writes on; else 0x1000 -> blend mode 5 (additive), alpha test on, depth writes off; else
    no blending and no alpha test (blend 1 when flag 0x1 is clear and the object is faded); the alpha test reference is 10
    (+44) [the compare function not read yet]. 0x80 skips a depth bias, 0x400 sets a texture offset / scale (08A98E9C), the
    extra (+32) is read for the animated materials. Aurek had additive first: ten materials in the shipped levels carry 0x1000
    with 0x20000 or 0x2 (Yavin IV 0x61002 x6, Sullust 0x61001 x3, the space maps' 0x21000) and now draw as the game does
    (render/ak_scene.c; models the same [assumed]). Open: the compare function and reference (Aurek cuts at 0.5), the 0x80
    bias, 0x400's texture transform, and slots 1-5 beyond the second layer.
- [ ] **R.5 LOD distances.** AK_LOD_SCALE 12 is Aurek's own; trace the real ones.
  - 2026-11-19, looked for and not found: no blueprint key, level chunk or string names a LOD distance (the lower details are
    the "L1#" / "L2#" meshes); the switch is somewhere in the model draw.  Next: watch the GE vertex counts of one prop in
    the harness while the camera backs away (--tp), to measure the distances per model radius.
  - 2026-11-20, soldiers measured (harness RS_DRAW_LOG=N: every N frames each lit 3D draw's distance from the camera; the
    game draws models with an identity view, so the model matrix's translation is the distance): Hoth's soldiers drew 782
    strip indices up to 39.2 m and 442 from 40.2 m, none lower out to 220 m - one step at 40 m. Aurek's soldiers now take their
    L1 meshes beyond 40 m (`AK_SOLDIER_LOD`). Props: their draws are split per part, not identified yet.
  - 2026-11-22, tried again (harness Hoth walk_forward, RS_DRAW_LOG=10, 10019 draws): with an identity view each draw's
    translation is camera-relative, so a prop cannot be followed across frames by its position, and one model is several
    draws (parts) at once; no 40.0 / 1600.0 constant is read near the model draw (they appear only in AI / weapon code), and no
    code tests the "L1#" names - the LOD links are made elsewhere. Blocked on tooling: the draw log needs the drawn resource's
    identity (the model or mesh pointer) to measure each prop's switch distance. AK_LOD_SCALE stays Aurek's [PARITY(R.5)].
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
    - 2026-11-22: the effect lights are built (R.1). The cell animation's object (088E643C sets up the emitter's +124 block;
      0889C644 makes an animator with flags in its +20) is still not advanced anywhere found - left as is [blocked].
- [ ] **R.7 Shadows and decals.** Shadow blobs and scorch marks as the game places them.
  - 2026-11-20: the blob shadows are one batch (08918144): a vertex list at 0x08C19240 (20-byte vertices, room for 2024; count
    0x08C23244), drawn as one triangle strip (prim 4, vertex type 0x183: float UV and position) with \specialfx\blobshadow.tga,
    depth writes off, when the count is not 0. The harness's draw log of a Hoth match (RS_DRAW_LOG=60, RS_DRAW_ALL=1, frames
    1500-1680, Empire spawn) has no such batch: every 0x183 draw is a sky face, so nothing in that scene casts a blob - Aurek's
    lack of soldier shadows matches it there. Who fills the list (and on which levels or objects) is not found.
  - 2026-11-22, the filler chain found: 08819660 (a frame step, through a global object's +8) -> 08966298 / 0896637C (only while
    that object's +248 is under 1.0, constant 0x08AEE0CC) -> 088F2C88 / 088F33C8 -> 088EF7DC -> 088EF8AC (1,095 lines: the blob
    laid on the ground under ray tests 088F0884) -> 08918118 adds the vertices; 08918098 / 089180F8 reset and close the list.
    Which object that is (and what +248 holds) is not identified, so nothing is built [blocked: the object's class].
- [ ] **R.8 Screen effects.** Damage, zoom overlay, hyperspace.
  - 2026-11-20, the zoom overlay (measured on the original's screen, harness program `zoom`, Hoth, the blaster rifle's one
    zoom level): GRAPHICS/SNIPER.ASR holds one picture, CHUD_Zoom_Scope (128 x 128): the scope's top-left quarter - the frame,
    a light blue haze (alpha 222) outside it, clear glass inside. It is mirrored about the screen's centre, each quarter 160 x
    128 (the frame meets the centre row at x 86 and the centre column at y 21), the rest of the screen in the haze, under the
    rest of the HUD and with no reticle. Built (hud.c, the HUD's `scope` flag while the weapon is zoomed). [ ] The code that
    draws it (not found: no h31 of the picture's name in the data); damage and hyperspace effects. Tool: AK_HUD_DUMP_TEX=part
    of a HUD file's path writes its texture (colour | alpha) to /tmp/hud_tex.ppm.
  - 2026-11-22: damage and hyperspace screen effects not traced in this pass (no candidate draw found yet); recorded as open
    for after the bug test.

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
