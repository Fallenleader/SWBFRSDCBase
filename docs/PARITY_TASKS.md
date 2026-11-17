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
- [ ] **1.13 Soldier against soldier and vehicle [partial].**
  - Done: dynamic versus kinematic boxes.
  - Still to do: the player body's response to *moving* kinematic bodies (platforms, vehicles carrying it: flag bit 12 in the body
    step).
- [ ] **1.14 The classic scheme's facing [measured, not built].** In the original (no right stick) the camera does not turn with
  the left stick: the soldier turns to face the stick's direction relative to the camera, closing the angle by 8/s (each frame
  the rest shrinks by 1 - 8 dt: 0.8666 at 60 Hz), and runs its forward clip; with the stick pulled back (back half) it faces the
  mirrored direction and runs its backward clip (stick down-left: faces 45 degrees right, runs back). Stick straight right: turns 90
  degrees and runs. Aurek ties the camera to the body (ch.yaw), so this needs a separate view yaw (with 9.3). The strafe clips
  (RunForward_left / _Right) carry the root forward: they are a run with the upper body turned, for aiming to the side.

## 2. Weapons, items and projectiles

- [ ] **2.1 Loadouts [assumed].**
  - Aurek: every soldier carries a blaster rifle (AK_WEAPON).
  - Trace classes from the Humanoid blueprints (Loadout_1..5) and the class choice.
- [ ] **2.2 Ammo pickups and droids [assumed].** Aurek gives back one clip per pulse (play.c:137). Trace the real refill.
- [ ] **2.3 Secondary items [missing].** Grenades, thermal detonators, detpacks, mines, cluster grenades, remote missiles,
  incinerator, fusion cutter, shields, jetpack, jump pack, stealth. Trace each one's blueprint use.
- [ ] **2.4 Guided projectiles [assumed].** Aurek turns them at 100°/s; trace the turn rate.
- [ ] **2.5 Blast damage fall-off [assumed].**
- [ ] **2.6 Bot accuracy [assumed].** How AIWeapon_Accuracy_* and Modifier_Bot_* are applied.
- [ ] **2.7 Damage tables [partial].** Check every damage path against DamageToInfantry, DamageToVehicle, armour and friendly fire.

## 3. Vehicles

- [ ] **3.1 Ground vehicle handling [assumed].** Aurek's own:
  - the handling model (how the Tank numbers combine);
  - hover height;
  - slope limit (AK_VEH_MAX_SLOPE_DEG 40);
  - how the barrel aims;
  - volley period;
  - the speeder rider's pose.
- [ ] **3.2 Vehicle bodies against the level [assumed].**
  - The vehicle the player drives is a dynamic body (box move-and-slide, mask 0x2804 / 0x0804 / 0x4804).
  - AI vehicles are kinematic.
  - Replace Aurek's ground rays and circles. Trace AI vehicles' ground-following.
  - The hover craft's ride over water is still Aurek's own rule.
- [ ] **3.3 Flyers [partial].** To trace:
  - the flight model's remaining constants;
  - landing and crash rules (currently Aurek's);
  - stunts (Immelmann, barrel roll: the EnergyStunt use).
- [ ] **3.4 Walkers [assumed].** Driving and gunnery code, what happens at a path's end, and the ATBL animation chunks (not read).
- [ ] **3.5 Vehicle life cycle [assumed].**
  - Respawn time (AK_VEHICLE_RESPAWN 10).
  - How long a wreck stays and its effects (play.c:1528).
  - Which vehicle a level uses when it has two (play.c:596).
  - Boarding and leaving rules.
- [ ] **3.6 Secondary weapons and lock-on.** Verify HardpointW2 and the lock rules against the original. The docs list them as
  "not yet" (stale).
- [ ] **3.7 Space [partial].** Capital ship turrets (ENTI type 30), the pilots' dogfight states, and hangar and shield rules.

## 4. AI

- [ ] **4.1 Bot vehicle use [assumed].** All Aurek's, including AK_BOT_VEHICLES 0.6.
- [ ] **4.2 Target selection [assumed].** Aurek takes the nearest (play.c:1223). Trace the game's choice, memory and reaction time.
- [ ] **4.3 Turret AI [assumed].** States NEUTRAL / SEARCHING / ORIENTATING (0x08B1B6AC) and who aims.
- [ ] **4.4 Movement behaviour.** Path following, strafing, cover, objective choice, and retreat. Compare against the original's
  decisions.
  - Measured (1.4): AI soldiers' speeds come from the AI controller (soldier +88 -> +72), not the clips: 5.0, 7.4, 8.5, 11.5
    m/s seen on Hoth, changing every ~6 frames. Trace where they come from.
- [ ] **4.5 Bot counts per mode and level [assumed].** AK_BOTS is 15.
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
